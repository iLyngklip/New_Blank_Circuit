--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : Papilio_One_250K.vhf
-- /___/   /\     Timestamp : 03/08/2017 15:10:27
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -sympath C:/DesignLab-1.0.8/libraries/Benchy -sympath C:/DesignLab-1.0.8/libraries/BitCoin_Miner -sympath C:/DesignLab-1.0.8/libraries/Building_Blocks -sympath C:/DesignLab-1.0.8/libraries/Clocks -sympath C:/DesignLab-1.0.8/libraries/Gameduino -sympath C:/DesignLab-1.0.8/libraries/HQVGA -sympath C:/DesignLab-1.0.8/libraries/Papilio_Hardware -sympath C:/DesignLab-1.0.8/libraries/RGB_Matrix -sympath C:/DesignLab-1.0.8/libraries/Robot_Control_Library -sympath C:/DesignLab-1.0.8/libraries/VGA_ZPUino -sympath C:/DesignLab-1.0.8/libraries/VGA_ZXSpectrum -sympath C:/DesignLab-1.0.8/libraries/ZPUino_2 -sympath C:/DesignLab-1.0.8/libraries/ZPUino_Wishbone_Peripherals -intstyle ise -family spartan3e -flat -suppress -vhdl C:/New_Blank_Circuit/circuit/250K/Papilio_One_250K.vhf -w C:/New_Blank_Circuit/circuit/Papilio_One_250K.sch
--Design Name: Papilio_One_250K
--Device: spartan3e
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity Papilio_One_250K is
   port ( );
end Papilio_One_250K;

architecture BEHAVIORAL of Papilio_One_250K is
   attribute INIT       : string ;
   attribute BOX_TYPE   : string ;
   signal XLXI_2_A0_openSignal : std_logic;
   signal XLXI_2_A1_openSignal : std_logic;
   signal XLXI_2_A2_openSignal : std_logic;
   signal XLXI_2_A3_openSignal : std_logic;
   signal XLXI_2_A4_openSignal : std_logic;
   signal XLXI_2_A5_openSignal : std_logic;
   signal XLXI_2_A6_openSignal : std_logic;
   signal XLXI_2_A7_openSignal : std_logic;
   component ROM256X1
      -- synopsys translate_off
      generic( INIT : bit_vector :=  
            
            x"0000000000000000000000000000000000000000000000000000000000000000");
      -- synopsys translate_on
      port ( A0 : in    std_logic; 
             A1 : in    std_logic; 
             A2 : in    std_logic; 
             A3 : in    std_logic; 
             A4 : in    std_logic; 
             A5 : in    std_logic; 
             A6 : in    std_logic; 
             A7 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute INIT of ROM256X1 : component is 
         "0000000000000000000000000000000000000000000000000000000000000000";
   attribute BOX_TYPE of ROM256X1 : component is "BLACK_BOX";
   
begin
   XLXI_2 : ROM256X1
      port map (A0=>XLXI_2_A0_openSignal,
                A1=>XLXI_2_A1_openSignal,
                A2=>XLXI_2_A2_openSignal,
                A3=>XLXI_2_A3_openSignal,
                A4=>XLXI_2_A4_openSignal,
                A5=>XLXI_2_A5_openSignal,
                A6=>XLXI_2_A6_openSignal,
                A7=>XLXI_2_A7_openSignal,
                O=>open);
   
end BEHAVIORAL;


