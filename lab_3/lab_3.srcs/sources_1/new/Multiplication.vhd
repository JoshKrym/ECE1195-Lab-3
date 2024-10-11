----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/07/2024 12:20:13 PM
-- Design Name: 
-- Module Name: Multiplication - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplication is
    Port (
        A   :   in  std_logic_vector(31 downto 0);
        B   :   in  std_logic_vector(31 downto 0);
        clk :   in  std_logic;
        rst :   in  std_logic;
        R   :   out std_logic_vector(63 downto 0);
        done:   out std_logic
         );
end Multiplication;

architecture Behavioral of Multiplication is

    component addSubtractFull
        generic (
	    	WIDTH : positive := 32
	    );
	    port (
	    	A     : in  std_logic_vector(WIDTH-1 downto 0);
	    	B     : in  std_logic_vector(WIDTH-1 downto 0);
            Sub   : in  std_logic;
	    	S     : out std_logic_vector(WIDTH-1 downto 0);
	    	CO     : out std_logic
	    );
    end component;

    component myRegister
        generic (
            WIDTH : positive := 64
            );
        PORT(
           CLK : IN     std_logic;
           LD  : IN     std_logic;
           D   : IN     std_logic_vector(WIDTH-1 downto 0);
           EN  : IN     std_logic;
           RST : IN     std_logic;
           Q   : OUT    std_logic_vector(WIDTH-1 downto 0)
            );
    end component;

    component control
	    port(
	    	clk		 : in	std_logic;
            MrOut    : in   std_logic;
	    	reset	 : in	std_logic;
            MdSftLft : out  std_logic;
            PrdtWrt  : out  std_logic;
            ALUCtrl  : out  std_logic;
            MrSftRt  : out  std_logic;
            Done     : out  std_logic;
            start    : out  std_logic
	    );
    end component;

    component shift_register_right
        generic (
            WIDTH : positive := 64
            );
        PORT(
           CLK : IN     std_logic;
           LD  : IN     std_logic;
           SN  : In     std_logic;
           D   : IN     std_logic_vector(WIDTH-1 downto 0);
           EN  : IN     std_logic;
           RST : IN     std_logic;
           Q   : OUT    std_logic_vector(WIDTH-1 downto 0)
            );
    end component;
    
    component shift_register_left
        generic (
            WIDTH : positive := 64
            );
        PORT(
           CLK : IN     std_logic;
           LD  : IN     std_logic;
           SN  : In     std_logic;
           D   : IN     std_logic_vector(WIDTH-1 downto 0);
           EN  : IN     std_logic;
           RST : IN     std_logic;
           Q   : OUT    std_logic_vector(WIDTH-1 downto 0)
            );
    end component;

    signal  shift_left  :   std_logic;
    signal  Write       :   std_logic;
    signal  shift_right :   std_logic;
    signal  multnd_out    :   std_logic_vector(63 downto 0);
    signal  multr_out    :   std_logic_vector(31 downto 0);
    signal  prod_out    :   std_logic_vector(63 downto 0);
    signal  alu_out    :   std_logic_vector(63 downto 0);
    signal  LD         :   std_logic;
    signal  DontCare   :   std_logic;
    signal  DontCare1   :   std_logic;
    signal  Din        :   std_logic_vector(63 downto 0);
    signal  MNDEN      :   std_logic;
    signal  MREN       :   std_logic;
    signal  ALUIN      :   std_logic;

begin
    Din <= "00000000000000000000000000000000"&A;
    MNDEN <= shift_left or LD;
    MREN <= shift_right or LD;
    Multiplicand: shift_register_left
        generic map(
                WIDTH => 64
                   )
        port map(
                CLK => clk,
                LD  => LD,
                SN  => shift_left,
                D   => Din,
                EN  => MNDEN,
                RST => '0',
                Q   => multnd_out
                );
    MyALU: addSubtractFull
        generic map(
                WIDTH => 64
                   )
        port map(
                A   => prod_out,
                B   => multnd_out,
                Sub => '0',
                S   => alu_out,
                CO  => DontCare1
                );
    MyProduct: myRegister
        generic map(
                WIDTH => 64
                   )
        port map(
                CLK => clk,
                LD  => Write,
                D   => alu_out,
                EN  => Write,
                RST => rst,
                Q   => prod_out
                );
    controlTest: control
        port map(
                clk		 => clk,
                MrOut    => multr_out(0),
                reset	 => rst,
                MdSftLft => shift_left,
                PrdtWrt  => Write,
                ALUCtrl  => DontCare,
                MrSftRt  => shift_right,
                Done     => done,
                start    => LD
                );
    Multiplier: shift_register_right
        generic map(
                WIDTH => 32
                   )
        port map(
                CLK => clk,
                LD  => LD,
                SN  => shift_right,
                D   => B,
                EN  => MREN,
                RST => '0',
                Q   => multr_out
                );
    R <= prod_out;


end Behavioral;
