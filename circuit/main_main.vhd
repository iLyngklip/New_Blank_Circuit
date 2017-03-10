----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:45:37 03/10/2017 
-- Design Name: 
-- Module Name:    main - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
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
use ieee.std_logic_unsigned.all;
use ieee.std_logic_textio.all;
use ieee.numeric_std.all;
use std.textio.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main is
    Port ( outp : out  STD_LOGIC_VECTOR (7 downto 0);
	 clk : in STD_LOGIC);
end main;

architecture Behavioral of main is


	-- This signal is what should be send to the LEDs
	signal outSignal: STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
type mem is array (3 downto 0) of std_logic_vector(15 downto 0);
signal t_mem : mem;

signal tempTing : unsigned (30 downto 0) := (others => '0');

signal count : unsigned (8 downto 0) := (others => '0');
signal count_2 : unsigned (30 downto 0) := (others => '0');
signal switch_ting : std_logic := '1';
signal clk_2 : std_logic;


-- variable i : integer:=0;

    type rom_type is array(0 to 5) of bit_vector(7 downto 0);  
	 
    impure function megetROM (file_name_to_use : in string) return rom_type is                                                   
       FILE rom_file         : text is in file_name_to_use;                       
       variable line_name : line;                                 
       variable rom_name       : rom_type;                                      
    begin                                                        
       for I in rom_type'range loop                                  
           readline (rom_file, line_name);                             
           read (line_name, rom_name(I));                                  
       end loop;                                                    
       return rom_name;                                                  
    end function;                                                

    signal rom_name : rom_type := megetROM("wave.dat");


begin
process(clk)
begin
		if clk='1' and clk'event then 
			count_2 <= count_2 + 1;
		end if;
		clk_2 <= count_2(25);
end process;



 process(clk_2)
--        file input_file: TEXT is in "wave.dat";
--            variable rdline:    LINE;
--            -- variable line_content : string ( 1 to 4);
--            -- variable readed_char : character;
--            -- variable j:         integer := 0;
--				constant FILENAME : string := "wave.dat";
--				--File_Open(input_file,FILENAME, read_mode);
--				
variable hvorLaeses : std_logic_vector (1 downto 0) := "00";
--variable hvorLaeses : integer := 5;
    begin 

	 
if clk_2='1' and clk_2'event then    

outp <= rom_name(hvorLaeses);

end if;
end process;
--
--        --while not endfile(input_file) loop
--		  
--		  
--            readline(input_file, rdline);
--            --read(rdline, line_content);
--            -- for j in 1 to rdline'length - 1 loop -- EOL not in rdline
--				--outSignal <= rdline;
--
--for i in rdline'range loop
-- tempTing <= tempTing + 1;
--end loop;
--				
--				if(tempTing = 0) then
--					outSignal <= "00011000";
--				else
--					outSignal <= "00000011";
--				end if;
--				
--				
--            for j in rdline'range loop
--				outSignal <= "00000100";
--                -- readed_char := line_content(j);
--                -- if readed_char = '1' then
--                if rdline(j) = '1' then   -- changed
--                    outSignal(j) <= '1';
--                else
--                    outSignal(j) <= '0'; 
--                end if;
--                -- wait for clk_period;  -- sync to edge instead
--               -- wait until falling_edge(clk_2); -- input related to clk edge
--            end loop;
--				
--				--end loop;
--      --  wait;     -- added prevents needless loops
--		outp <= outSignal;
--		end if;
--    end process;
--



--process(clk_2)
----variable temp : integer := 0;
--FILE f : TEXT is in "wave.txt";
--VARIABLE L : LINE;
--variable b : std_logic_vector(7 downto 0);
--
--begin
--		if clk_2='1' and clk_2'event  and (switch_ting = '1') then 
--			
--			--temp := count;
--			-- laes her
--			readline (f, l);
--			--outSignal <= "01000000";
--			if l(1) = '#' then
--				-- nah
--				outSignal <= "10000000";
--			else 
--				outSignal <= "00000010";
--				read(l, b);
--				t_mem(to_integer(count)) <= b;
--				outSignal <= b;
--				count <= count + 1;
--			end if;
--			--next when l(1) = '#'; 
--			
--		end if;
--		
--		if count = 15 then 
--			switch_ting <= '0';
--		end if;
--		outp <= outSignal;
--end process;

                    
--;	
--while ((i<=15) and (not EndFile (f))) loop
--	readline (f, l);
--	next when l(1) = '#'; 
--	read(l, b);
--	t_mem(i) <= b;
--	i := i + 1;
--end loop;

end Behavioral;

