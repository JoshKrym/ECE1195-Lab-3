-- A Moore machine's outputs are dependent only on the current state.
-- The output is written only when the state changes.  (State
-- transitions are synchronous.)

library ieee;
use ieee.std_logic_1164.all;

entity control is

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
	
end entity;

architecture rtl of control is

	-- Build an enumerated type for the state machine
	type state_type is (sS, s1, s1a, s2, s3, s4, sD);
	
	-- Register to hold the current state
	signal state   : state_type;
    signal iterations   : integer;

begin
	-- Logic to advance to the next state
	process (clk, reset, iterations)
	begin
		if reset = '1' then
			state <= sS;
		elsif (rising_edge(clk)) then
			case state is
				when sS=>
					state <= s1;
				when s1=>
					if MrOut = '1' then
						state <= s1a;
					else
						state <= s2;
					end if;
				when s1a=>
				    state <= s2;
				when s2=>
					state <= s3;
				when s3 =>
					state <= s4;
                when s4 =>
                    if iterations<32 then
                        state <= s1;
                    else
                        state <= sD;
                    end if;
                when sD =>
                    state <= sD;
                when others =>
                    state <= sS;
			end case;
		end if;
	end process;
	
	-- Output depends solely on the current state
	process (state)
	begin
		case state is
			when sS =>
                start <= '1';
                iterations <= 0;
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '0';
            when s1 =>
                start <= '0';
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '0';
			when s1a =>
                start <= '0';
                MdSftLft <= '0';
                PrdtWrt <= '1';
                ALUCtrl <= '1';
                MrSftRt <= '0';
                Done <= '0';
			when s2 =>
                start <= '0';
                MdSftLft <= '1';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '0';
			when s3 =>
                start <= '0';
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '1';
                Done <= '0';
			when s4 =>
                start <= '0';
                iterations <= iterations+1;
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '0';
			when sD =>
                start <= '0';
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '1';
            when others =>
                start <= '0';
                MdSftLft <= '0';
                PrdtWrt <= '0';
                ALUCtrl <= '0';
                MrSftRt <= '0';
                Done <= '0';
		end case;
	end process;
	
end rtl;
