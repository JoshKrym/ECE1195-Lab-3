
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register is
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
end register;



architecture Behavioral of register is
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
    Din(WIDTH-1) <= D(WIDTH-1) when LD='1' else
           Qout(i)   when LD='0';
    ff: flipflop port map(CLK => CLK, D => Din(WIDTH-1), EN => EN, RST => RST, Q=>Qout(WIDTH-1));
    Q(WIDTH - 1) <= Qout(WIDTH - 1);
    generateFlipflops:for i in WIDTH-2 downto 0 generate
        Din(i) <= D(i) when LD='1' else
               Qout(i) when LD='0';
        ff: flipflop port map(CLK => CLK, D => Din(i), EN => EN, RST => RST, Q=>Qout(i));
        Q(i) <= Qout(i);
    end generate;
    end Behavioral;
