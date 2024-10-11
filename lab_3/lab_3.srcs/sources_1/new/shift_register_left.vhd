
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity shift_register_left is
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
end shift_register_left;



architecture Behavioral of shift_register_left is
    component flipflop
        PORT( 
            CLK : IN     std_logic;
            D   : IN     std_logic;
            EN  : IN     std_logic;
            RST : IN     std_logic;
            Q   : OUT    std_logic
        );
     end component;
    signal Qout :   std_logic_vector(WIDTH-1 downto 0);
    signal Din  :   std_logic_vector(WIDTH-1 downto 0);

begin
    Din(0) <= D(0) when LD='1' and SN='0' else
              '0' when LD='0' and SN='1';
    ff: flipflop port map(CLK => CLK, D => Din(0), EN => EN, RST => RST, Q=>Qout(0));
    Q(0) <= Qout(0);
    generateFlipflops:for i in 1 to WIDTH-1 generate
        Din(i) <= D(i) when LD='1' and SN='0' else
               Qout(i-1) when LD='0' and SN='1';
        ff: flipflop port map(CLK => CLK, D => Din(i), EN => EN, RST => RST, Q=>Qout(i));
        Q(i) <= Qout(i);
    end generate;
    end Behavioral;
