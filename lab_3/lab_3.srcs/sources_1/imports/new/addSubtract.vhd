library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity addSubtract is
	port (
		A     : in  std_logic;
		B     : in  std_logic;
        C     : in  std_logic;
		O     : out std_logic;
        CO    : out std_logic
	);
end entity;

architecture as of addSubtract is
    signal xorO : std_logic;
    signal andO : std_logic;
    signal Obefore : std_logic;
begin
    xorO <= A xor B xor C;
    andO <= A and B and C;
    Obefore <= xorO or andO;
    O <= Obefore;
    CO <= ((not Obefore) and (A or B or C)) or andO;
end architecture;
-- new comment
