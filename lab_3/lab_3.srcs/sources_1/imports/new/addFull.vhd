library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity addFull is
--  Port ( );
    generic (
		WIDTH : positive := 32
	);
	port (
		A     : in  std_logic_vector(WIDTH-1 downto 0);
		B     : in  std_logic_vector(WIDTH-1 downto 0);
		S     : out std_logic_vector(WIDTH-1 downto 0);
        CO     : out std_logic
	);
end addFull;

architecture Behavioral of addFull is
component addSubtract
port(A, B, C : in std_logic;
     O, CO   : out std_logic
 );
end component;
    signal C     : std_logic_vector(WIDTH-1 downto 0);
begin
    as: addSubtract port map(A => A(0), B => B(0), C => '0', O => S(0), CO => C(0));

    generateAdders:for i in 1 to WIDTH-1 generate
        as: addSubtract port map(A => A(i), B => B(i), C => C(i-1), O => S(i), CO => C(i));
    end generate;
    CO <= C(WIDTH-1);

end Behavioral;
