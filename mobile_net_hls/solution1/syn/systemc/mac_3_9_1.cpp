// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mac_3_9_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic mac_3_9_1::ap_const_logic_1 = sc_dt::Log_1;
const bool mac_3_9_1::ap_const_boolean_1 = true;
const bool mac_3_9_1::ap_const_boolean_0 = false;
const sc_lv<16> mac_3_9_1::ap_const_lv16_0 = "0000000000000000";
const sc_logic mac_3_9_1::ap_const_logic_0 = sc_dt::Log_0;

mac_3_9_1::mac_3_9_1(sc_module_name name) : sc_module(name), mVcdFile(0) {
    moblie_net_hadd_1bkb_U521 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U521");
    moblie_net_hadd_1bkb_U521->clk(ap_clk);
    moblie_net_hadd_1bkb_U521->reset(ap_rst);
    moblie_net_hadd_1bkb_U521->din0(tmp_5_reg_206);
    moblie_net_hadd_1bkb_U521->din1(tmp_5_0_1_reg_211);
    moblie_net_hadd_1bkb_U521->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U521->dout(grp_fu_76_p2);
    moblie_net_hadd_1bkb_U522 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U522");
    moblie_net_hadd_1bkb_U522->clk(ap_clk);
    moblie_net_hadd_1bkb_U522->reset(ap_rst);
    moblie_net_hadd_1bkb_U522->din0(tmp_5_0_2_reg_216);
    moblie_net_hadd_1bkb_U522->din1(tmp_5_1_2_reg_231);
    moblie_net_hadd_1bkb_U522->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U522->dout(grp_fu_80_p2);
    moblie_net_hadd_1bkb_U523 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U523");
    moblie_net_hadd_1bkb_U523->clk(ap_clk);
    moblie_net_hadd_1bkb_U523->reset(ap_rst);
    moblie_net_hadd_1bkb_U523->din0(tmp_5_1_1_reg_226);
    moblie_net_hadd_1bkb_U523->din1(tmp_5_1_reg_221);
    moblie_net_hadd_1bkb_U523->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U523->dout(grp_fu_84_p2);
    moblie_net_hadd_1bkb_U524 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U524");
    moblie_net_hadd_1bkb_U524->clk(ap_clk);
    moblie_net_hadd_1bkb_U524->reset(ap_rst);
    moblie_net_hadd_1bkb_U524->din0(tmp_5_2_1_reg_241);
    moblie_net_hadd_1bkb_U524->din1(tmp_5_2_reg_236);
    moblie_net_hadd_1bkb_U524->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U524->dout(grp_fu_88_p2);
    moblie_net_hadd_1bkb_U525 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U525");
    moblie_net_hadd_1bkb_U525->clk(ap_clk);
    moblie_net_hadd_1bkb_U525->reset(ap_rst);
    moblie_net_hadd_1bkb_U525->din0(tmp2_reg_256);
    moblie_net_hadd_1bkb_U525->din1(tmp1_reg_251);
    moblie_net_hadd_1bkb_U525->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U525->dout(grp_fu_92_p2);
    moblie_net_hadd_1bkb_U526 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U526");
    moblie_net_hadd_1bkb_U526->clk(ap_clk);
    moblie_net_hadd_1bkb_U526->reset(ap_rst);
    moblie_net_hadd_1bkb_U526->din0(tmp6_reg_266);
    moblie_net_hadd_1bkb_U526->din1(tmp_5_2_2_reg_246);
    moblie_net_hadd_1bkb_U526->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U526->dout(grp_fu_96_p2);
    moblie_net_hadd_1bkb_U527 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U527");
    moblie_net_hadd_1bkb_U527->clk(ap_clk);
    moblie_net_hadd_1bkb_U527->reset(ap_rst);
    moblie_net_hadd_1bkb_U527->din0(tmp5_reg_276);
    moblie_net_hadd_1bkb_U527->din1(tmp4_reg_261_pp0_iter11_reg);
    moblie_net_hadd_1bkb_U527->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U527->dout(grp_fu_100_p2);
    moblie_net_hadd_1bkb_U528 = new moblie_net_hadd_1bkb<1,4,16,16,16>("moblie_net_hadd_1bkb_U528");
    moblie_net_hadd_1bkb_U528->clk(ap_clk);
    moblie_net_hadd_1bkb_U528->reset(ap_rst);
    moblie_net_hadd_1bkb_U528->din0(tmp3_reg_281);
    moblie_net_hadd_1bkb_U528->din1(tmp_reg_271_pp0_iter15_reg);
    moblie_net_hadd_1bkb_U528->ce(ap_var_for_const0);
    moblie_net_hadd_1bkb_U528->dout(grp_fu_104_p2);
    moblie_net_hmul_1cud_U529 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U529");
    moblie_net_hmul_1cud_U529->clk(ap_clk);
    moblie_net_hmul_1cud_U529->reset(ap_rst);
    moblie_net_hmul_1cud_U529->din0(input_regs_0_read_int_reg);
    moblie_net_hmul_1cud_U529->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U529->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U529->dout(grp_fu_108_p2);
    moblie_net_hmul_1cud_U530 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U530");
    moblie_net_hmul_1cud_U530->clk(ap_clk);
    moblie_net_hmul_1cud_U530->reset(ap_rst);
    moblie_net_hmul_1cud_U530->din0(input_regs_1_read_int_reg);
    moblie_net_hmul_1cud_U530->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U530->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U530->dout(grp_fu_114_p2);
    moblie_net_hmul_1cud_U531 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U531");
    moblie_net_hmul_1cud_U531->clk(ap_clk);
    moblie_net_hmul_1cud_U531->reset(ap_rst);
    moblie_net_hmul_1cud_U531->din0(input_regs_2_read_int_reg);
    moblie_net_hmul_1cud_U531->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U531->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U531->dout(grp_fu_120_p2);
    moblie_net_hmul_1cud_U532 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U532");
    moblie_net_hmul_1cud_U532->clk(ap_clk);
    moblie_net_hmul_1cud_U532->reset(ap_rst);
    moblie_net_hmul_1cud_U532->din0(input_regs_3_read_int_reg);
    moblie_net_hmul_1cud_U532->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U532->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U532->dout(grp_fu_126_p2);
    moblie_net_hmul_1cud_U533 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U533");
    moblie_net_hmul_1cud_U533->clk(ap_clk);
    moblie_net_hmul_1cud_U533->reset(ap_rst);
    moblie_net_hmul_1cud_U533->din0(input_regs_4_read_int_reg);
    moblie_net_hmul_1cud_U533->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U533->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U533->dout(grp_fu_132_p2);
    moblie_net_hmul_1cud_U534 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U534");
    moblie_net_hmul_1cud_U534->clk(ap_clk);
    moblie_net_hmul_1cud_U534->reset(ap_rst);
    moblie_net_hmul_1cud_U534->din0(input_regs_5_read_int_reg);
    moblie_net_hmul_1cud_U534->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U534->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U534->dout(grp_fu_138_p2);
    moblie_net_hmul_1cud_U535 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U535");
    moblie_net_hmul_1cud_U535->clk(ap_clk);
    moblie_net_hmul_1cud_U535->reset(ap_rst);
    moblie_net_hmul_1cud_U535->din0(input_regs_6_read_int_reg);
    moblie_net_hmul_1cud_U535->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U535->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U535->dout(grp_fu_144_p2);
    moblie_net_hmul_1cud_U536 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U536");
    moblie_net_hmul_1cud_U536->clk(ap_clk);
    moblie_net_hmul_1cud_U536->reset(ap_rst);
    moblie_net_hmul_1cud_U536->din0(input_regs_7_read_int_reg);
    moblie_net_hmul_1cud_U536->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U536->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U536->dout(grp_fu_150_p2);
    moblie_net_hmul_1cud_U537 = new moblie_net_hmul_1cud<1,4,16,16,16>("moblie_net_hmul_1cud_U537");
    moblie_net_hmul_1cud_U537->clk(ap_clk);
    moblie_net_hmul_1cud_U537->reset(ap_rst);
    moblie_net_hmul_1cud_U537->din0(input_regs_8_read_1_reg_161_pp0_iter3_reg);
    moblie_net_hmul_1cud_U537->din1(ap_var_for_const1);
    moblie_net_hmul_1cud_U537->ce(ap_var_for_const0);
    moblie_net_hmul_1cud_U537->dout(grp_fu_156_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_state10_pp0_stage0_iter9);

    SC_METHOD(thread_ap_block_state11_pp0_stage0_iter10);

    SC_METHOD(thread_ap_block_state12_pp0_stage0_iter11);

    SC_METHOD(thread_ap_block_state13_pp0_stage0_iter12);

    SC_METHOD(thread_ap_block_state14_pp0_stage0_iter13);

    SC_METHOD(thread_ap_block_state15_pp0_stage0_iter14);

    SC_METHOD(thread_ap_block_state16_pp0_stage0_iter15);

    SC_METHOD(thread_ap_block_state17_pp0_stage0_iter16);

    SC_METHOD(thread_ap_block_state18_pp0_stage0_iter17);

    SC_METHOD(thread_ap_block_state19_pp0_stage0_iter18);

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state20_pp0_stage0_iter19);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter2);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter3);

    SC_METHOD(thread_ap_block_state5_pp0_stage0_iter4);

    SC_METHOD(thread_ap_block_state6_pp0_stage0_iter5);

    SC_METHOD(thread_ap_block_state7_pp0_stage0_iter6);

    SC_METHOD(thread_ap_block_state8_pp0_stage0_iter7);

    SC_METHOD(thread_ap_block_state9_pp0_stage0_iter8);

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( grp_fu_104_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mac_3_9_1_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, input_regs_0_read, "(port)input_regs_0_read");
    sc_trace(mVcdFile, input_regs_1_read, "(port)input_regs_1_read");
    sc_trace(mVcdFile, input_regs_2_read, "(port)input_regs_2_read");
    sc_trace(mVcdFile, input_regs_3_read, "(port)input_regs_3_read");
    sc_trace(mVcdFile, input_regs_4_read, "(port)input_regs_4_read");
    sc_trace(mVcdFile, input_regs_5_read, "(port)input_regs_5_read");
    sc_trace(mVcdFile, input_regs_6_read, "(port)input_regs_6_read");
    sc_trace(mVcdFile, input_regs_7_read, "(port)input_regs_7_read");
    sc_trace(mVcdFile, input_regs_8_read, "(port)input_regs_8_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, input_regs_8_read_1_reg_161, "input_regs_8_read_1_reg_161");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter1, "ap_block_state2_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter2, "ap_block_state3_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter3, "ap_block_state4_pp0_stage0_iter3");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage0_iter4, "ap_block_state5_pp0_stage0_iter4");
    sc_trace(mVcdFile, ap_block_state6_pp0_stage0_iter5, "ap_block_state6_pp0_stage0_iter5");
    sc_trace(mVcdFile, ap_block_state7_pp0_stage0_iter6, "ap_block_state7_pp0_stage0_iter6");
    sc_trace(mVcdFile, ap_block_state8_pp0_stage0_iter7, "ap_block_state8_pp0_stage0_iter7");
    sc_trace(mVcdFile, ap_block_state9_pp0_stage0_iter8, "ap_block_state9_pp0_stage0_iter8");
    sc_trace(mVcdFile, ap_block_state10_pp0_stage0_iter9, "ap_block_state10_pp0_stage0_iter9");
    sc_trace(mVcdFile, ap_block_state11_pp0_stage0_iter10, "ap_block_state11_pp0_stage0_iter10");
    sc_trace(mVcdFile, ap_block_state12_pp0_stage0_iter11, "ap_block_state12_pp0_stage0_iter11");
    sc_trace(mVcdFile, ap_block_state13_pp0_stage0_iter12, "ap_block_state13_pp0_stage0_iter12");
    sc_trace(mVcdFile, ap_block_state14_pp0_stage0_iter13, "ap_block_state14_pp0_stage0_iter13");
    sc_trace(mVcdFile, ap_block_state15_pp0_stage0_iter14, "ap_block_state15_pp0_stage0_iter14");
    sc_trace(mVcdFile, ap_block_state16_pp0_stage0_iter15, "ap_block_state16_pp0_stage0_iter15");
    sc_trace(mVcdFile, ap_block_state17_pp0_stage0_iter16, "ap_block_state17_pp0_stage0_iter16");
    sc_trace(mVcdFile, ap_block_state18_pp0_stage0_iter17, "ap_block_state18_pp0_stage0_iter17");
    sc_trace(mVcdFile, ap_block_state19_pp0_stage0_iter18, "ap_block_state19_pp0_stage0_iter18");
    sc_trace(mVcdFile, ap_block_state20_pp0_stage0_iter19, "ap_block_state20_pp0_stage0_iter19");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, input_regs_8_read_1_reg_161_pp0_iter1_reg, "input_regs_8_read_1_reg_161_pp0_iter1_reg");
    sc_trace(mVcdFile, input_regs_8_read_1_reg_161_pp0_iter2_reg, "input_regs_8_read_1_reg_161_pp0_iter2_reg");
    sc_trace(mVcdFile, input_regs_8_read_1_reg_161_pp0_iter3_reg, "input_regs_8_read_1_reg_161_pp0_iter3_reg");
    sc_trace(mVcdFile, grp_fu_108_p2, "grp_fu_108_p2");
    sc_trace(mVcdFile, tmp_5_reg_206, "tmp_5_reg_206");
    sc_trace(mVcdFile, grp_fu_114_p2, "grp_fu_114_p2");
    sc_trace(mVcdFile, tmp_5_0_1_reg_211, "tmp_5_0_1_reg_211");
    sc_trace(mVcdFile, grp_fu_120_p2, "grp_fu_120_p2");
    sc_trace(mVcdFile, tmp_5_0_2_reg_216, "tmp_5_0_2_reg_216");
    sc_trace(mVcdFile, grp_fu_126_p2, "grp_fu_126_p2");
    sc_trace(mVcdFile, tmp_5_1_reg_221, "tmp_5_1_reg_221");
    sc_trace(mVcdFile, grp_fu_132_p2, "grp_fu_132_p2");
    sc_trace(mVcdFile, tmp_5_1_1_reg_226, "tmp_5_1_1_reg_226");
    sc_trace(mVcdFile, grp_fu_138_p2, "grp_fu_138_p2");
    sc_trace(mVcdFile, tmp_5_1_2_reg_231, "tmp_5_1_2_reg_231");
    sc_trace(mVcdFile, grp_fu_144_p2, "grp_fu_144_p2");
    sc_trace(mVcdFile, tmp_5_2_reg_236, "tmp_5_2_reg_236");
    sc_trace(mVcdFile, grp_fu_150_p2, "grp_fu_150_p2");
    sc_trace(mVcdFile, tmp_5_2_1_reg_241, "tmp_5_2_1_reg_241");
    sc_trace(mVcdFile, grp_fu_156_p2, "grp_fu_156_p2");
    sc_trace(mVcdFile, tmp_5_2_2_reg_246, "tmp_5_2_2_reg_246");
    sc_trace(mVcdFile, grp_fu_76_p2, "grp_fu_76_p2");
    sc_trace(mVcdFile, tmp1_reg_251, "tmp1_reg_251");
    sc_trace(mVcdFile, grp_fu_80_p2, "grp_fu_80_p2");
    sc_trace(mVcdFile, tmp2_reg_256, "tmp2_reg_256");
    sc_trace(mVcdFile, grp_fu_84_p2, "grp_fu_84_p2");
    sc_trace(mVcdFile, tmp4_reg_261, "tmp4_reg_261");
    sc_trace(mVcdFile, tmp4_reg_261_pp0_iter8_reg, "tmp4_reg_261_pp0_iter8_reg");
    sc_trace(mVcdFile, tmp4_reg_261_pp0_iter9_reg, "tmp4_reg_261_pp0_iter9_reg");
    sc_trace(mVcdFile, tmp4_reg_261_pp0_iter10_reg, "tmp4_reg_261_pp0_iter10_reg");
    sc_trace(mVcdFile, tmp4_reg_261_pp0_iter11_reg, "tmp4_reg_261_pp0_iter11_reg");
    sc_trace(mVcdFile, grp_fu_88_p2, "grp_fu_88_p2");
    sc_trace(mVcdFile, tmp6_reg_266, "tmp6_reg_266");
    sc_trace(mVcdFile, grp_fu_92_p2, "grp_fu_92_p2");
    sc_trace(mVcdFile, tmp_reg_271, "tmp_reg_271");
    sc_trace(mVcdFile, tmp_reg_271_pp0_iter12_reg, "tmp_reg_271_pp0_iter12_reg");
    sc_trace(mVcdFile, tmp_reg_271_pp0_iter13_reg, "tmp_reg_271_pp0_iter13_reg");
    sc_trace(mVcdFile, tmp_reg_271_pp0_iter14_reg, "tmp_reg_271_pp0_iter14_reg");
    sc_trace(mVcdFile, tmp_reg_271_pp0_iter15_reg, "tmp_reg_271_pp0_iter15_reg");
    sc_trace(mVcdFile, grp_fu_96_p2, "grp_fu_96_p2");
    sc_trace(mVcdFile, tmp5_reg_276, "tmp5_reg_276");
    sc_trace(mVcdFile, grp_fu_100_p2, "grp_fu_100_p2");
    sc_trace(mVcdFile, tmp3_reg_281, "tmp3_reg_281");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, grp_fu_104_p2, "grp_fu_104_p2");
    sc_trace(mVcdFile, input_regs_0_read_int_reg, "input_regs_0_read_int_reg");
    sc_trace(mVcdFile, input_regs_1_read_int_reg, "input_regs_1_read_int_reg");
    sc_trace(mVcdFile, input_regs_2_read_int_reg, "input_regs_2_read_int_reg");
    sc_trace(mVcdFile, input_regs_3_read_int_reg, "input_regs_3_read_int_reg");
    sc_trace(mVcdFile, input_regs_4_read_int_reg, "input_regs_4_read_int_reg");
    sc_trace(mVcdFile, input_regs_5_read_int_reg, "input_regs_5_read_int_reg");
    sc_trace(mVcdFile, input_regs_6_read_int_reg, "input_regs_6_read_int_reg");
    sc_trace(mVcdFile, input_regs_7_read_int_reg, "input_regs_7_read_int_reg");
    sc_trace(mVcdFile, input_regs_8_read_int_reg, "input_regs_8_read_int_reg");
#endif

    }
}

mac_3_9_1::~mac_3_9_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete moblie_net_hadd_1bkb_U521;
    delete moblie_net_hadd_1bkb_U522;
    delete moblie_net_hadd_1bkb_U523;
    delete moblie_net_hadd_1bkb_U524;
    delete moblie_net_hadd_1bkb_U525;
    delete moblie_net_hadd_1bkb_U526;
    delete moblie_net_hadd_1bkb_U527;
    delete moblie_net_hadd_1bkb_U528;
    delete moblie_net_hmul_1cud_U529;
    delete moblie_net_hmul_1cud_U530;
    delete moblie_net_hmul_1cud_U531;
    delete moblie_net_hmul_1cud_U532;
    delete moblie_net_hmul_1cud_U533;
    delete moblie_net_hmul_1cud_U534;
    delete moblie_net_hmul_1cud_U535;
    delete moblie_net_hmul_1cud_U536;
    delete moblie_net_hmul_1cud_U537;
}

void mac_3_9_1::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void mac_3_9_1::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv16_0;
}

void mac_3_9_1::thread_ap_clk_no_reset_() {
    input_regs_0_read_int_reg = input_regs_0_read.read();
    input_regs_1_read_int_reg = input_regs_1_read.read();
    input_regs_2_read_int_reg = input_regs_2_read.read();
    input_regs_3_read_int_reg = input_regs_3_read.read();
    input_regs_4_read_int_reg = input_regs_4_read.read();
    input_regs_5_read_int_reg = input_regs_5_read.read();
    input_regs_6_read_int_reg = input_regs_6_read.read();
    input_regs_7_read_int_reg = input_regs_7_read.read();
    input_regs_8_read_int_reg = input_regs_8_read.read();
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        input_regs_8_read_1_reg_161 = input_regs_8_read_int_reg.read();
        input_regs_8_read_1_reg_161_pp0_iter1_reg = input_regs_8_read_1_reg_161.read();
        input_regs_8_read_1_reg_161_pp0_iter2_reg = input_regs_8_read_1_reg_161_pp0_iter1_reg.read();
        input_regs_8_read_1_reg_161_pp0_iter3_reg = input_regs_8_read_1_reg_161_pp0_iter2_reg.read();
        tmp1_reg_251 = grp_fu_76_p2.read();
        tmp2_reg_256 = grp_fu_80_p2.read();
        tmp3_reg_281 = grp_fu_100_p2.read();
        tmp4_reg_261 = grp_fu_84_p2.read();
        tmp4_reg_261_pp0_iter10_reg = tmp4_reg_261_pp0_iter9_reg.read();
        tmp4_reg_261_pp0_iter11_reg = tmp4_reg_261_pp0_iter10_reg.read();
        tmp4_reg_261_pp0_iter8_reg = tmp4_reg_261.read();
        tmp4_reg_261_pp0_iter9_reg = tmp4_reg_261_pp0_iter8_reg.read();
        tmp5_reg_276 = grp_fu_96_p2.read();
        tmp6_reg_266 = grp_fu_88_p2.read();
        tmp_5_0_1_reg_211 = grp_fu_114_p2.read();
        tmp_5_0_2_reg_216 = grp_fu_120_p2.read();
        tmp_5_1_1_reg_226 = grp_fu_132_p2.read();
        tmp_5_1_2_reg_231 = grp_fu_138_p2.read();
        tmp_5_1_reg_221 = grp_fu_126_p2.read();
        tmp_5_2_1_reg_241 = grp_fu_150_p2.read();
        tmp_5_2_2_reg_246 = grp_fu_156_p2.read();
        tmp_5_2_reg_236 = grp_fu_144_p2.read();
        tmp_5_reg_206 = grp_fu_108_p2.read();
        tmp_reg_271 = grp_fu_92_p2.read();
        tmp_reg_271_pp0_iter12_reg = tmp_reg_271.read();
        tmp_reg_271_pp0_iter13_reg = tmp_reg_271_pp0_iter12_reg.read();
        tmp_reg_271_pp0_iter14_reg = tmp_reg_271_pp0_iter13_reg.read();
        tmp_reg_271_pp0_iter15_reg = tmp_reg_271_pp0_iter14_reg.read();
    }
}

void mac_3_9_1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state10_pp0_stage0_iter9() {
    ap_block_state10_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state11_pp0_stage0_iter10() {
    ap_block_state11_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state12_pp0_stage0_iter11() {
    ap_block_state12_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state13_pp0_stage0_iter12() {
    ap_block_state13_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state14_pp0_stage0_iter13() {
    ap_block_state14_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state15_pp0_stage0_iter14() {
    ap_block_state15_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state16_pp0_stage0_iter15() {
    ap_block_state16_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state17_pp0_stage0_iter16() {
    ap_block_state17_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state18_pp0_stage0_iter17() {
    ap_block_state18_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state19_pp0_stage0_iter18() {
    ap_block_state19_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state20_pp0_stage0_iter19() {
    ap_block_state20_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state5_pp0_stage0_iter4() {
    ap_block_state5_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state6_pp0_stage0_iter5() {
    ap_block_state6_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state7_pp0_stage0_iter6() {
    ap_block_state7_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state8_pp0_stage0_iter7() {
    ap_block_state8_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_block_state9_pp0_stage0_iter8() {
    ap_block_state9_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mac_3_9_1::thread_ap_return() {
    ap_return = grp_fu_104_p2.read();
}

}
