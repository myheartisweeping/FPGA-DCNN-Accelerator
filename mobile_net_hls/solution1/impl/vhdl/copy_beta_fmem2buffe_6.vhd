-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity copy_beta_fmem2buffe_6 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    m_axi_betas_AWVALID : OUT STD_LOGIC;
    m_axi_betas_AWREADY : IN STD_LOGIC;
    m_axi_betas_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_betas_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_betas_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_betas_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_betas_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_WVALID : OUT STD_LOGIC;
    m_axi_betas_WREADY : IN STD_LOGIC;
    m_axi_betas_WDATA : OUT STD_LOGIC_VECTOR (15 downto 0);
    m_axi_betas_WSTRB : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_WLAST : OUT STD_LOGIC;
    m_axi_betas_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_ARVALID : OUT STD_LOGIC;
    m_axi_betas_ARREADY : IN STD_LOGIC;
    m_axi_betas_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_betas_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_betas_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_betas_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_betas_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_betas_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_RVALID : IN STD_LOGIC;
    m_axi_betas_RREADY : OUT STD_LOGIC;
    m_axi_betas_RDATA : IN STD_LOGIC_VECTOR (15 downto 0);
    m_axi_betas_RLAST : IN STD_LOGIC;
    m_axi_betas_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_BVALID : IN STD_LOGIC;
    m_axi_betas_BREADY : OUT STD_LOGIC;
    m_axi_betas_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_betas_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_betas_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    betas_offset : IN STD_LOGIC_VECTOR (30 downto 0);
    beta_buffer_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    beta_buffer_V_full_n : IN STD_LOGIC;
    beta_buffer_V_write : OUT STD_LOGIC;
    n : IN STD_LOGIC_VECTOR (7 downto 0);
    r : IN STD_LOGIC_VECTOR (6 downto 0);
    c : IN STD_LOGIC_VECTOR (6 downto 0);
    nLoops : IN STD_LOGIC_VECTOR (7 downto 0);
    beta_cntl_V_din : OUT STD_LOGIC;
    beta_cntl_V_full_n : IN STD_LOGIC;
    beta_cntl_V_write : OUT STD_LOGIC );
end;


architecture behav of copy_beta_fmem2buffe_6 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (9 downto 0) := "0000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (9 downto 0) := "0000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (9 downto 0) := "0001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (9 downto 0) := "0010000000";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (9 downto 0) := "0100000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal betas_blk_n_AR : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal betas_blk_n_R : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal tmp_168_reg_229 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_reg_138 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_623_fu_159_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_624_fu_169_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_624_reg_212 : STD_LOGIC_VECTOR (2 downto 0);
    signal betas_addr_reg_218 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_ioackin_m_axi_betas_ARREADY : STD_LOGIC;
    signal tmp_168_fu_197_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state9_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state10_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state11_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal tmp_168_reg_229_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal i_22_fu_202_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal tmp_625_reg_238 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state9 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal sum_cast_fu_179_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_reg_ioackin_m_axi_betas_ARREADY : STD_LOGIC := '0';
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal tmp_fu_153_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal betas_offset_cast_fu_149_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_278_cast_fu_165_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal sum_fu_173_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_cast_cast_fu_193_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state9) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then
                    if ((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state9)) then 
                        ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state9);
                    elsif ((ap_const_boolean_1 = ap_const_boolean_1)) then 
                        ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                    ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_ioackin_m_axi_betas_ARREADY_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ioackin_m_axi_betas_ARREADY <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                    if ((ap_sig_ioackin_m_axi_betas_ARREADY = ap_const_logic_1)) then 
                        ap_reg_ioackin_m_axi_betas_ARREADY <= ap_const_logic_0;
                    elsif ((m_axi_betas_ARREADY = ap_const_logic_1)) then 
                        ap_reg_ioackin_m_axi_betas_ARREADY <= ap_const_logic_1;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    i_reg_138_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_reg_138 <= ap_const_lv2_0;
            elsif (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (tmp_168_fu_197_p2 = ap_const_lv1_1))) then 
                i_reg_138 <= i_22_fu_202_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (tmp_623_fu_159_p2 = ap_const_lv1_1))) then
                betas_addr_reg_218 <= sum_cast_fu_179_p1(32 - 1 downto 0);
                tmp_624_reg_212 <= tmp_624_fu_169_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_168_reg_229 <= tmp_168_fu_197_p2;
                tmp_168_reg_229_pp0_iter1_reg <= tmp_168_reg_229;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (tmp_168_reg_229 = ap_const_lv1_1))) then
                tmp_625_reg_238 <= m_axi_betas_RDATA;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_enable_reg_pp0_iter1, tmp_623_fu_159_p2, ap_sig_ioackin_m_axi_betas_ARREADY, tmp_168_fu_197_p2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone, ap_enable_reg_pp0_iter2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((tmp_623_fu_159_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state12;
                elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (tmp_623_fu_159_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (ap_sig_ioackin_m_axi_betas_ARREADY = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((tmp_168_fu_197_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) and not(((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif ((((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0)) or ((tmp_168_fu_197_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0)))) then
                    ap_NS_fsm <= ap_ST_fsm_state12;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(8);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state12 <= ap_CS_fsm(9);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_01001_assign_proc : process(m_axi_betas_RVALID, ap_enable_reg_pp0_iter1, tmp_168_reg_229)
    begin
                ap_block_pp0_stage0_01001 <= ((m_axi_betas_RVALID = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (tmp_168_reg_229 = ap_const_lv1_1));
    end process;


    ap_block_pp0_stage0_11001_assign_proc : process(m_axi_betas_RVALID, ap_enable_reg_pp0_iter1, tmp_168_reg_229)
    begin
                ap_block_pp0_stage0_11001 <= ((m_axi_betas_RVALID = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (tmp_168_reg_229 = ap_const_lv1_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(m_axi_betas_RVALID, ap_enable_reg_pp0_iter1, tmp_168_reg_229)
    begin
                ap_block_pp0_stage0_subdone <= ((m_axi_betas_RVALID = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (tmp_168_reg_229 = ap_const_lv1_1));
    end process;


    ap_block_state10_pp0_stage0_iter1_assign_proc : process(m_axi_betas_RVALID, tmp_168_reg_229)
    begin
                ap_block_state10_pp0_stage0_iter1 <= ((m_axi_betas_RVALID = ap_const_logic_0) and (tmp_168_reg_229 = ap_const_lv1_1));
    end process;

        ap_block_state11_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state9_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state9_assign_proc : process(tmp_168_fu_197_p2)
    begin
        if ((tmp_168_fu_197_p2 = ap_const_lv1_0)) then 
            ap_condition_pp0_exit_iter0_state9 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state9 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state12)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state12) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state12)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_ioackin_m_axi_betas_ARREADY_assign_proc : process(m_axi_betas_ARREADY, ap_reg_ioackin_m_axi_betas_ARREADY)
    begin
        if ((ap_reg_ioackin_m_axi_betas_ARREADY = ap_const_logic_0)) then 
            ap_sig_ioackin_m_axi_betas_ARREADY <= m_axi_betas_ARREADY;
        else 
            ap_sig_ioackin_m_axi_betas_ARREADY <= ap_const_logic_1;
        end if; 
    end process;

    beta_buffer_V_din <= tmp_625_reg_238;

    beta_buffer_V_write_assign_proc : process(beta_buffer_V_full_n, ap_block_pp0_stage0_11001, tmp_168_reg_229_pp0_iter1_reg, ap_enable_reg_pp0_iter2)
    begin
        if (((beta_buffer_V_full_n = ap_const_logic_1) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (tmp_168_reg_229_pp0_iter1_reg = ap_const_lv1_1))) then 
            beta_buffer_V_write <= ap_const_logic_1;
        else 
            beta_buffer_V_write <= ap_const_logic_0;
        end if; 
    end process;

    beta_cntl_V_din <= ap_const_logic_0;

    beta_cntl_V_write_assign_proc : process(beta_cntl_V_full_n, ap_CS_fsm_state12)
    begin
        if (((beta_cntl_V_full_n = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            beta_cntl_V_write <= ap_const_logic_1;
        else 
            beta_cntl_V_write <= ap_const_logic_0;
        end if; 
    end process;


    betas_blk_n_AR_assign_proc : process(m_axi_betas_ARREADY, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            betas_blk_n_AR <= m_axi_betas_ARREADY;
        else 
            betas_blk_n_AR <= ap_const_logic_1;
        end if; 
    end process;


    betas_blk_n_R_assign_proc : process(m_axi_betas_RVALID, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0, tmp_168_reg_229)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (tmp_168_reg_229 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            betas_blk_n_R <= m_axi_betas_RVALID;
        else 
            betas_blk_n_R <= ap_const_logic_1;
        end if; 
    end process;

    betas_offset_cast_fu_149_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(betas_offset),32));
    i_22_fu_202_p2 <= std_logic_vector(unsigned(i_reg_138) + unsigned(ap_const_lv2_1));
    i_cast_cast_fu_193_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_138),3));
    m_axi_betas_ARADDR <= betas_addr_reg_218;
    m_axi_betas_ARBURST <= ap_const_lv2_0;
    m_axi_betas_ARCACHE <= ap_const_lv4_0;
    m_axi_betas_ARID <= ap_const_lv1_0;
    m_axi_betas_ARLEN <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_624_reg_212),32));
    m_axi_betas_ARLOCK <= ap_const_lv2_0;
    m_axi_betas_ARPROT <= ap_const_lv3_0;
    m_axi_betas_ARQOS <= ap_const_lv4_0;
    m_axi_betas_ARREGION <= ap_const_lv4_0;
    m_axi_betas_ARSIZE <= ap_const_lv3_0;
    m_axi_betas_ARUSER <= ap_const_lv1_0;

    m_axi_betas_ARVALID_assign_proc : process(ap_CS_fsm_state2, ap_reg_ioackin_m_axi_betas_ARREADY)
    begin
        if (((ap_reg_ioackin_m_axi_betas_ARREADY = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            m_axi_betas_ARVALID <= ap_const_logic_1;
        else 
            m_axi_betas_ARVALID <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_betas_AWADDR <= ap_const_lv32_0;
    m_axi_betas_AWBURST <= ap_const_lv2_0;
    m_axi_betas_AWCACHE <= ap_const_lv4_0;
    m_axi_betas_AWID <= ap_const_lv1_0;
    m_axi_betas_AWLEN <= ap_const_lv32_0;
    m_axi_betas_AWLOCK <= ap_const_lv2_0;
    m_axi_betas_AWPROT <= ap_const_lv3_0;
    m_axi_betas_AWQOS <= ap_const_lv4_0;
    m_axi_betas_AWREGION <= ap_const_lv4_0;
    m_axi_betas_AWSIZE <= ap_const_lv3_0;
    m_axi_betas_AWUSER <= ap_const_lv1_0;
    m_axi_betas_AWVALID <= ap_const_logic_0;
    m_axi_betas_BREADY <= ap_const_logic_0;

    m_axi_betas_RREADY_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, tmp_168_reg_229, ap_block_pp0_stage0_11001)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (tmp_168_reg_229 = ap_const_lv1_1))) then 
            m_axi_betas_RREADY <= ap_const_logic_1;
        else 
            m_axi_betas_RREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_betas_WDATA <= ap_const_lv16_0;
    m_axi_betas_WID <= ap_const_lv1_0;
    m_axi_betas_WLAST <= ap_const_logic_0;
    m_axi_betas_WSTRB <= ap_const_lv2_0;
    m_axi_betas_WUSER <= ap_const_lv1_0;
    m_axi_betas_WVALID <= ap_const_logic_0;
    sum_cast_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_fu_173_p2),64));
    sum_fu_173_p2 <= std_logic_vector(unsigned(betas_offset_cast_fu_149_p1) + unsigned(tmp_278_cast_fu_165_p1));
    tmp_168_fu_197_p2 <= "1" when (signed(i_cast_cast_fu_193_p1) < signed(tmp_624_reg_212)) else "0";
    tmp_278_cast_fu_165_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(n),32));
    tmp_623_fu_159_p2 <= "1" when (tmp_fu_153_p2 = ap_const_lv7_0) else "0";
    tmp_624_fu_169_p1 <= nLoops(3 - 1 downto 0);
    tmp_fu_153_p2 <= (r or c);
end behav;
