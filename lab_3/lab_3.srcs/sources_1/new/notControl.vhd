----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 10/07/2024 04:41:50 PM
-- Design Name: 
-- Module Name: control - Behavioral
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

entity control is
    Port ( 
        MrOut       :   in  std_logic;
        MdSftLft    :   out std_logic;
        PrdtWrt     :   out std_logic;
        ALUCtrl     :   out std_logic;
        MrSftRt     :   out std_logic;
        Done        :   out std_logic;
         );
end control;

architecture Behavioral of control is

begin

-- 1a
    ALUCtrl <= 1;
    PrdtWrt <= 1;
-- 2
    MdSftLft <= 1;
-- 3
    MrSftRt <= 1;

end Behavioral;
