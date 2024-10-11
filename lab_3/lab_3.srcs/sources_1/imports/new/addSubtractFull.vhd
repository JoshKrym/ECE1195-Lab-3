library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity addSubtractFull is
--  Port ( );
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
end addSubtractFull;

architecture Behavioral of addSubtractFull is
component addFull
generic (
	WIDTH : positive := 32
);
port(A, B   : in std_logic_vector(WIDTH-1 downto 0);
     S      : out std_logic_vector(WIDTH-1 downto 0);
     CO      : out std_logic
 );
end component;
    signal C     : std_logic;
    signal trueB : std_logic_vector(WIDTH-1 downto 0);
    signal outB : std_logic_vector(WIDTH-1 downto 0);
    signal finalB : std_logic_vector(WIDTH-1 downto 0);
    signal one : std_logic_vector(WIDTH-1 downto 0);
begin
    generateOne:for i in 1 to WIDTH-1 generate
        one(i)<='0';
    end generate;
    one(0)<='1';
    trueB(WIDTH-1 downto 0) <= not B(WIDTH-1 downto 0);
    su: addFull
    generic map (WIDTH => WIDTH)
    port map(A => trueB, B => one, S=>outB, CO=>C);
    finalB(WIDTH-1 downto 0) <= B(WIDTH-1 downto 0) when Sub = '0' else
                                                outB(WIDTH-1 downto 0) when Sub = '1';
    as: addFull 
    generic map (WIDTH => WIDTH)
    port map(A => A, B => finalB, S => S, CO=>CO);

end Behavioral;
