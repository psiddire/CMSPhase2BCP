// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "TPG.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic TPG::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic TPG::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> TPG::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<32> TPG::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> TPG::ap_const_lv1_1 = "1";
const sc_lv<32> TPG::ap_const_lv32_7 = "111";
const sc_lv<32> TPG::ap_const_lv32_14 = "10100";
const sc_lv<32> TPG::ap_const_lv32_6 = "110";
const sc_lv<32> TPG::ap_const_lv32_18 = "11000";
const sc_lv<32> TPG::ap_const_lv32_2 = "10";
const sc_lv<32> TPG::ap_const_lv32_D = "1101";
const sc_lv<32> TPG::ap_const_lv32_C = "1100";
const sc_lv<32> TPG::ap_const_lv32_12 = "10010";
const sc_lv<7> TPG::ap_const_lv7_0 = "0000000";
const sc_lv<5> TPG::ap_const_lv5_0 = "00000";
const sc_lv<24> TPG::ap_const_lv24_0 = "000000000000000000000000";
const sc_lv<2> TPG::ap_const_lv2_0 = "00";
const sc_lv<32> TPG::ap_const_lv32_17 = "10111";
const sc_lv<3> TPG::ap_const_lv3_0 = "000";
const sc_lv<19> TPG::ap_const_lv19_0 = "0000000000000000000";
const sc_lv<32> TPG::ap_const_lv32_11 = "10001";
const sc_lv<16> TPG::ap_const_lv16_3FF = "1111111111";
const sc_lv<16> TPG::ap_const_lv16_0 = "0000000000000000";
const sc_lv<13> TPG::ap_const_lv13_1F96 = "1111110010110";
const sc_lv<21> TPG::ap_const_lv21_B7 = "10110111";
const sc_lv<25> TPG::ap_const_lv25_1FFFFDD = "1111111111111111111011101";

TPG::TPG(sc_module_name name) : sc_module(name), mVcdFile(0) {
    algo_unpacked_am_bkb_U1 = new algo_unpacked_am_bkb<1,1,8,12,9,21>("algo_unpacked_am_bkb_U1");
    algo_unpacked_am_bkb_U1->din0(grp_fu_444_p0);
    algo_unpacked_am_bkb_U1->din1(grp_fu_444_p1);
    algo_unpacked_am_bkb_U1->din2(grp_fu_444_p2);
    algo_unpacked_am_bkb_U1->dout(grp_fu_444_p3);
    algo_unpacked_mulcud_U2 = new algo_unpacked_mulcud<1,1,7,18,25>("algo_unpacked_mulcud_U2");
    algo_unpacked_mulcud_U2->din0(r_V_4_fu_453_p0);
    algo_unpacked_mulcud_U2->din1(r_V_4_fu_453_p1);
    algo_unpacked_mulcud_U2->dout(r_V_4_fu_453_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_agg_result_V_1_fu_425_p3);
    sensitive << ( or_cond_fu_403_p2 );
    sensitive << ( tmpPeak_V_fu_418_p3 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_ap_pipeline_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_pipeline_start_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_return_0);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_ce );
    sensitive << ( agg_result_V_1_fu_425_p3 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_ce );
    sensitive << ( r_0_peak_reg_V_writ_reg_500 );

    SC_METHOD(thread_extLd3_fu_173_p1);
    sensitive << ( r_2_shift_reg_V_i );

    SC_METHOD(thread_extLd_fu_216_p1);
    sensitive << ( r_0_shift_reg_V_rea_reg_479 );

    SC_METHOD(thread_grp_fu_444_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_grp_fu_444_p1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( grp_fu_444_p10 );

    SC_METHOD(thread_grp_fu_444_p10);
    sensitive << ( uncorrectedADC_V_fu_155_p1 );

    SC_METHOD(thread_grp_fu_444_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_fu_210_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( tmp_15_fu_200_p4 );

    SC_METHOD(thread_lhs_V_4_2_cast7_fu_282_p1);
    sensitive << ( extLd_fu_216_p1 );

    SC_METHOD(thread_or_cond_fu_403_p2);
    sensitive << ( tmp_1_fu_394_p2 );
    sensitive << ( tmp_2_fu_398_p2 );

    SC_METHOD(thread_p_neg_cast_fu_240_p1);
    sensitive << ( p_neg_fu_234_p2 );

    SC_METHOD(thread_p_neg_fu_234_p2);
    sensitive << ( p_shl_cast_fu_230_p1 );

    SC_METHOD(thread_p_shl1_cast_fu_255_p1);
    sensitive << ( p_shl1_fu_251_p1 );

    SC_METHOD(thread_p_shl1_fu_251_p1);
    sensitive << ( tmp_14_fu_244_p3 );

    SC_METHOD(thread_p_shl2_cast_fu_297_p1);
    sensitive << ( p_shl2_fu_293_p1 );

    SC_METHOD(thread_p_shl2_fu_293_p1);
    sensitive << ( tmp_fu_286_p3 );

    SC_METHOD(thread_p_shl3_cast_fu_332_p1);
    sensitive << ( p_shl3_fu_328_p1 );

    SC_METHOD(thread_p_shl3_fu_328_p1);
    sensitive << ( tmp_4_fu_321_p3 );

    SC_METHOD(thread_p_shl4_cast_fu_347_p1);
    sensitive << ( p_shl4_fu_343_p1 );

    SC_METHOD(thread_p_shl4_fu_343_p1);
    sensitive << ( tmp_5_fu_336_p3 );

    SC_METHOD(thread_p_shl_cast_fu_230_p1);
    sensitive << ( p_shl_fu_226_p1 );

    SC_METHOD(thread_p_shl_fu_226_p1);
    sensitive << ( tmp_11_fu_219_p3 );

    SC_METHOD(thread_r_0_peak_reg_V_writ_fu_388_p2);
    sensitive << ( tmp4_fu_383_p2 );
    sensitive << ( tmp3_fu_371_p2 );

    SC_METHOD(thread_r_0_shift_reg_V_o);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( grp_fu_444_p3 );

    SC_METHOD(thread_r_0_shift_reg_V_o_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_r_1_shift_reg_V_o);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( r_0_shift_reg_V_i );

    SC_METHOD(thread_r_1_shift_reg_V_o_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_r_2_shift_reg_V_o);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( r_1_shift_reg_V_i );

    SC_METHOD(thread_r_2_shift_reg_V_o_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_r_3_shift_reg_V_o);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( r_2_shift_reg_V_i );

    SC_METHOD(thread_r_3_shift_reg_V_o_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_r_V_2_fu_259_p2);
    sensitive << ( p_neg_cast_fu_240_p1 );
    sensitive << ( p_shl1_cast_fu_255_p1 );

    SC_METHOD(thread_r_V_4_2_fu_301_p2);
    sensitive << ( p_shl2_cast_fu_297_p1 );
    sensitive << ( lhs_V_4_2_cast7_fu_282_p1 );

    SC_METHOD(thread_r_V_4_3_fu_351_p2);
    sensitive << ( p_shl3_cast_fu_332_p1 );
    sensitive << ( p_shl4_cast_fu_347_p1 );

    SC_METHOD(thread_r_V_4_fu_453_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_r_V_4_fu_453_p1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( r_V_4_fu_453_p10 );

    SC_METHOD(thread_r_V_4_fu_453_p10);
    sensitive << ( extLd3_fu_173_p1 );

    SC_METHOD(thread_tmp3_fu_371_p2);
    sensitive << ( tmp_22_1_cast_fu_278_p1 );
    sensitive << ( tmp_10_fu_317_p1 );

    SC_METHOD(thread_tmp4_fu_383_p2);
    sensitive << ( mul_V_reg_485 );
    sensitive << ( tmp5_fu_377_p2 );

    SC_METHOD(thread_tmp5_fu_377_p2);
    sensitive << ( tmp_529_fu_265_p4 );
    sensitive << ( tmp_13_fu_367_p1 );

    SC_METHOD(thread_tmpPeak_V_fu_418_p3);
    sensitive << ( ap_pipeline_reg_pp0_iter1_icmp_reg_495 );
    sensitive << ( tmp_8_fu_409_p4 );

    SC_METHOD(thread_tmp_10_fu_317_p1);
    sensitive << ( tmp_9_fu_307_p4 );

    SC_METHOD(thread_tmp_11_fu_219_p3);
    sensitive << ( r_3_shift_reg_V_rea_reg_473 );

    SC_METHOD(thread_tmp_12_fu_357_p4);
    sensitive << ( r_V_4_3_fu_351_p2 );

    SC_METHOD(thread_tmp_13_fu_367_p1);
    sensitive << ( tmp_12_fu_357_p4 );

    SC_METHOD(thread_tmp_14_fu_244_p3);
    sensitive << ( r_3_shift_reg_V_rea_reg_473 );

    SC_METHOD(thread_tmp_15_fu_200_p4);
    sensitive << ( r_0_peak_reg_V_read );

    SC_METHOD(thread_tmp_1_fu_394_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_ce );
    sensitive << ( ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460 );
    sensitive << ( r_0_peak_reg_V_writ_reg_500 );

    SC_METHOD(thread_tmp_22_1_cast_fu_278_p1);
    sensitive << ( tmp_7_fu_275_p1 );

    SC_METHOD(thread_tmp_2_fu_398_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_ce );
    sensitive << ( ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460 );

    SC_METHOD(thread_tmp_4_fu_321_p3);
    sensitive << ( tmp_s_reg_467 );

    SC_METHOD(thread_tmp_529_fu_265_p4);
    sensitive << ( r_V_2_fu_259_p2 );

    SC_METHOD(thread_tmp_5_fu_336_p3);
    sensitive << ( tmp_s_reg_467 );

    SC_METHOD(thread_tmp_7_fu_275_p1);
    sensitive << ( tmp_6_reg_490 );

    SC_METHOD(thread_tmp_8_fu_409_p4);
    sensitive << ( ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460 );

    SC_METHOD(thread_tmp_9_fu_307_p4);
    sensitive << ( r_V_4_2_fu_301_p2 );

    SC_METHOD(thread_tmp_fu_286_p3);
    sensitive << ( r_0_shift_reg_V_rea_reg_479 );

    SC_METHOD(thread_uncorrectedADC_V_fu_155_p1);
    sensitive << ( data_int_V );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_pipeline_idle_pp0 );
    sensitive << ( ap_pipeline_start_pp0 );

    ap_CS_fsm = "1";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "TPG_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
    sc_trace(mVcdFile, data_int_V, "(port)data_int_V");
    sc_trace(mVcdFile, r_0_shift_reg_V_i, "(port)r_0_shift_reg_V_i");
    sc_trace(mVcdFile, r_0_shift_reg_V_o, "(port)r_0_shift_reg_V_o");
    sc_trace(mVcdFile, r_0_shift_reg_V_o_ap_vld, "(port)r_0_shift_reg_V_o_ap_vld");
    sc_trace(mVcdFile, r_1_shift_reg_V_i, "(port)r_1_shift_reg_V_i");
    sc_trace(mVcdFile, r_1_shift_reg_V_o, "(port)r_1_shift_reg_V_o");
    sc_trace(mVcdFile, r_1_shift_reg_V_o_ap_vld, "(port)r_1_shift_reg_V_o_ap_vld");
    sc_trace(mVcdFile, r_2_shift_reg_V_i, "(port)r_2_shift_reg_V_i");
    sc_trace(mVcdFile, r_2_shift_reg_V_o, "(port)r_2_shift_reg_V_o");
    sc_trace(mVcdFile, r_2_shift_reg_V_o_ap_vld, "(port)r_2_shift_reg_V_o_ap_vld");
    sc_trace(mVcdFile, r_3_shift_reg_V_i, "(port)r_3_shift_reg_V_i");
    sc_trace(mVcdFile, r_3_shift_reg_V_o, "(port)r_3_shift_reg_V_o");
    sc_trace(mVcdFile, r_3_shift_reg_V_o_ap_vld, "(port)r_3_shift_reg_V_o_ap_vld");
    sc_trace(mVcdFile, r_0_peak_reg_V_read, "(port)r_0_peak_reg_V_read");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, r_0_peak_reg_V_read_1_reg_460, "r_0_peak_reg_V_read_1_reg_460");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460, "ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460");
    sc_trace(mVcdFile, tmp_s_reg_467, "tmp_s_reg_467");
    sc_trace(mVcdFile, r_3_shift_reg_V_rea_reg_473, "r_3_shift_reg_V_rea_reg_473");
    sc_trace(mVcdFile, r_0_shift_reg_V_rea_reg_479, "r_0_shift_reg_V_rea_reg_479");
    sc_trace(mVcdFile, mul_V_reg_485, "mul_V_reg_485");
    sc_trace(mVcdFile, tmp_6_reg_490, "tmp_6_reg_490");
    sc_trace(mVcdFile, icmp_fu_210_p2, "icmp_fu_210_p2");
    sc_trace(mVcdFile, icmp_reg_495, "icmp_reg_495");
    sc_trace(mVcdFile, ap_pipeline_reg_pp0_iter1_icmp_reg_495, "ap_pipeline_reg_pp0_iter1_icmp_reg_495");
    sc_trace(mVcdFile, r_0_peak_reg_V_writ_fu_388_p2, "r_0_peak_reg_V_writ_fu_388_p2");
    sc_trace(mVcdFile, r_0_peak_reg_V_writ_reg_500, "r_0_peak_reg_V_writ_reg_500");
    sc_trace(mVcdFile, uncorrectedADC_V_fu_155_p1, "uncorrectedADC_V_fu_155_p1");
    sc_trace(mVcdFile, grp_fu_444_p3, "grp_fu_444_p3");
    sc_trace(mVcdFile, extLd3_fu_173_p1, "extLd3_fu_173_p1");
    sc_trace(mVcdFile, r_V_4_fu_453_p2, "r_V_4_fu_453_p2");
    sc_trace(mVcdFile, tmp_15_fu_200_p4, "tmp_15_fu_200_p4");
    sc_trace(mVcdFile, tmp_11_fu_219_p3, "tmp_11_fu_219_p3");
    sc_trace(mVcdFile, p_shl_fu_226_p1, "p_shl_fu_226_p1");
    sc_trace(mVcdFile, p_shl_cast_fu_230_p1, "p_shl_cast_fu_230_p1");
    sc_trace(mVcdFile, p_neg_fu_234_p2, "p_neg_fu_234_p2");
    sc_trace(mVcdFile, tmp_14_fu_244_p3, "tmp_14_fu_244_p3");
    sc_trace(mVcdFile, p_shl1_fu_251_p1, "p_shl1_fu_251_p1");
    sc_trace(mVcdFile, p_neg_cast_fu_240_p1, "p_neg_cast_fu_240_p1");
    sc_trace(mVcdFile, p_shl1_cast_fu_255_p1, "p_shl1_cast_fu_255_p1");
    sc_trace(mVcdFile, r_V_2_fu_259_p2, "r_V_2_fu_259_p2");
    sc_trace(mVcdFile, tmp_7_fu_275_p1, "tmp_7_fu_275_p1");
    sc_trace(mVcdFile, extLd_fu_216_p1, "extLd_fu_216_p1");
    sc_trace(mVcdFile, tmp_fu_286_p3, "tmp_fu_286_p3");
    sc_trace(mVcdFile, p_shl2_fu_293_p1, "p_shl2_fu_293_p1");
    sc_trace(mVcdFile, p_shl2_cast_fu_297_p1, "p_shl2_cast_fu_297_p1");
    sc_trace(mVcdFile, lhs_V_4_2_cast7_fu_282_p1, "lhs_V_4_2_cast7_fu_282_p1");
    sc_trace(mVcdFile, r_V_4_2_fu_301_p2, "r_V_4_2_fu_301_p2");
    sc_trace(mVcdFile, tmp_9_fu_307_p4, "tmp_9_fu_307_p4");
    sc_trace(mVcdFile, tmp_4_fu_321_p3, "tmp_4_fu_321_p3");
    sc_trace(mVcdFile, p_shl3_fu_328_p1, "p_shl3_fu_328_p1");
    sc_trace(mVcdFile, tmp_5_fu_336_p3, "tmp_5_fu_336_p3");
    sc_trace(mVcdFile, p_shl4_fu_343_p1, "p_shl4_fu_343_p1");
    sc_trace(mVcdFile, p_shl3_cast_fu_332_p1, "p_shl3_cast_fu_332_p1");
    sc_trace(mVcdFile, p_shl4_cast_fu_347_p1, "p_shl4_cast_fu_347_p1");
    sc_trace(mVcdFile, r_V_4_3_fu_351_p2, "r_V_4_3_fu_351_p2");
    sc_trace(mVcdFile, tmp_12_fu_357_p4, "tmp_12_fu_357_p4");
    sc_trace(mVcdFile, tmp_22_1_cast_fu_278_p1, "tmp_22_1_cast_fu_278_p1");
    sc_trace(mVcdFile, tmp_10_fu_317_p1, "tmp_10_fu_317_p1");
    sc_trace(mVcdFile, tmp_529_fu_265_p4, "tmp_529_fu_265_p4");
    sc_trace(mVcdFile, tmp_13_fu_367_p1, "tmp_13_fu_367_p1");
    sc_trace(mVcdFile, tmp5_fu_377_p2, "tmp5_fu_377_p2");
    sc_trace(mVcdFile, tmp4_fu_383_p2, "tmp4_fu_383_p2");
    sc_trace(mVcdFile, tmp3_fu_371_p2, "tmp3_fu_371_p2");
    sc_trace(mVcdFile, tmp_1_fu_394_p2, "tmp_1_fu_394_p2");
    sc_trace(mVcdFile, tmp_2_fu_398_p2, "tmp_2_fu_398_p2");
    sc_trace(mVcdFile, tmp_8_fu_409_p4, "tmp_8_fu_409_p4");
    sc_trace(mVcdFile, or_cond_fu_403_p2, "or_cond_fu_403_p2");
    sc_trace(mVcdFile, tmpPeak_V_fu_418_p3, "tmpPeak_V_fu_418_p3");
    sc_trace(mVcdFile, agg_result_V_1_fu_425_p3, "agg_result_V_1_fu_425_p3");
    sc_trace(mVcdFile, grp_fu_444_p0, "grp_fu_444_p0");
    sc_trace(mVcdFile, grp_fu_444_p1, "grp_fu_444_p1");
    sc_trace(mVcdFile, grp_fu_444_p2, "grp_fu_444_p2");
    sc_trace(mVcdFile, r_V_4_fu_453_p0, "r_V_4_fu_453_p0");
    sc_trace(mVcdFile, r_V_4_fu_453_p1, "r_V_4_fu_453_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_pipeline_idle_pp0, "ap_pipeline_idle_pp0");
    sc_trace(mVcdFile, ap_pipeline_start_pp0, "ap_pipeline_start_pp0");
    sc_trace(mVcdFile, grp_fu_444_p10, "grp_fu_444_p10");
    sc_trace(mVcdFile, r_V_4_fu_453_p10, "r_V_4_fu_453_p10");
#endif

    }
}

TPG::~TPG() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete algo_unpacked_am_bkb_U1;
    delete algo_unpacked_mulcud_U2;
}

void TPG::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
             !((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (!((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) || !esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        ap_pipeline_reg_pp0_iter1_icmp_reg_495 = icmp_reg_495.read();
        ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460 = r_0_peak_reg_V_read_1_reg_460.read();
        icmp_reg_495 = icmp_fu_210_p2.read();
        mul_V_reg_485 = r_V_4_fu_453_p2.read().range(24, 6);
        r_0_peak_reg_V_read_1_reg_460 = r_0_peak_reg_V_read.read();
        r_0_peak_reg_V_writ_reg_500 = r_0_peak_reg_V_writ_fu_388_p2.read();
        r_0_shift_reg_V_rea_reg_479 = r_0_shift_reg_V_i.read();
        r_3_shift_reg_V_rea_reg_473 = r_3_shift_reg_V_i.read();
        tmp_6_reg_490 = r_1_shift_reg_V_i.read().range(13, 2);
        tmp_s_reg_467 = grp_fu_444_p3.read().range(20, 7);
    }
}

void TPG::thread_agg_result_V_1_fu_425_p3() {
    agg_result_V_1_fu_425_p3 = (!or_cond_fu_403_p2.read()[0].is_01())? sc_lv<16>(): ((or_cond_fu_403_p2.read()[0].to_bool())? tmpPeak_V_fu_418_p3.read(): ap_const_lv16_0);
}

void TPG::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read().range(0, 0);
}

void TPG::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void TPG::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void TPG::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void TPG::thread_ap_pipeline_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_pipeline_idle_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_idle_pp0 = ap_const_logic_0;
    }
}

void TPG::thread_ap_pipeline_start_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()))) {
        ap_pipeline_start_pp0 = ap_const_logic_1;
    } else {
        ap_pipeline_start_pp0 = ap_const_logic_0;
    }
}

void TPG::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void TPG::thread_ap_return_0() {
    ap_return_0 = agg_result_V_1_fu_425_p3.read();
}

void TPG::thread_ap_return_1() {
    ap_return_1 = r_0_peak_reg_V_writ_reg_500.read();
}

void TPG::thread_extLd3_fu_173_p1() {
    extLd3_fu_173_p1 = esl_sext<18,14>(r_2_shift_reg_V_i.read());
}

void TPG::thread_extLd_fu_216_p1() {
    extLd_fu_216_p1 = esl_sext<18,14>(r_0_shift_reg_V_rea_reg_479.read());
}

void TPG::thread_grp_fu_444_p0() {
    grp_fu_444_p0 =  (sc_lv<8>) (ap_const_lv13_1F96);
}

void TPG::thread_grp_fu_444_p1() {
    grp_fu_444_p1 =  (sc_lv<12>) (grp_fu_444_p10.read());
}

void TPG::thread_grp_fu_444_p10() {
    grp_fu_444_p10 = esl_zext<13,12>(uncorrectedADC_V_fu_155_p1.read());
}

void TPG::thread_grp_fu_444_p2() {
    grp_fu_444_p2 =  (sc_lv<9>) (ap_const_lv21_B7);
}

void TPG::thread_icmp_fu_210_p2() {
    icmp_fu_210_p2 = (!tmp_15_fu_200_p4.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): (sc_bigint<7>(tmp_15_fu_200_p4.read()) > sc_bigint<7>(ap_const_lv7_0));
}

void TPG::thread_lhs_V_4_2_cast7_fu_282_p1() {
    lhs_V_4_2_cast7_fu_282_p1 = esl_zext<24,18>(extLd_fu_216_p1.read());
}

void TPG::thread_or_cond_fu_403_p2() {
    or_cond_fu_403_p2 = (tmp_1_fu_394_p2.read() & tmp_2_fu_398_p2.read());
}

void TPG::thread_p_neg_cast_fu_240_p1() {
    p_neg_cast_fu_240_p1 = esl_sext<25,24>(p_neg_fu_234_p2.read());
}

void TPG::thread_p_neg_fu_234_p2() {
    p_neg_fu_234_p2 = (!ap_const_lv24_0.is_01() || !p_shl_cast_fu_230_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_biguint<24>(p_shl_cast_fu_230_p1.read()));
}

void TPG::thread_p_shl1_cast_fu_255_p1() {
    p_shl1_cast_fu_255_p1 = esl_zext<25,20>(p_shl1_fu_251_p1.read());
}

void TPG::thread_p_shl1_fu_251_p1() {
    p_shl1_fu_251_p1 = esl_sext<20,16>(tmp_14_fu_244_p3.read());
}

void TPG::thread_p_shl2_cast_fu_297_p1() {
    p_shl2_cast_fu_297_p1 = esl_zext<24,23>(p_shl2_fu_293_p1.read());
}

void TPG::thread_p_shl2_fu_293_p1() {
    p_shl2_fu_293_p1 = esl_sext<23,19>(tmp_fu_286_p3.read());
}

void TPG::thread_p_shl3_cast_fu_332_p1() {
    p_shl3_cast_fu_332_p1 = esl_zext<24,23>(p_shl3_fu_328_p1.read());
}

void TPG::thread_p_shl3_fu_328_p1() {
    p_shl3_fu_328_p1 = esl_sext<23,19>(tmp_4_fu_321_p3.read());
}

void TPG::thread_p_shl4_cast_fu_347_p1() {
    p_shl4_cast_fu_347_p1 = esl_zext<24,21>(p_shl4_fu_343_p1.read());
}

void TPG::thread_p_shl4_fu_343_p1() {
    p_shl4_fu_343_p1 = esl_sext<21,17>(tmp_5_fu_336_p3.read());
}

void TPG::thread_p_shl_cast_fu_230_p1() {
    p_shl_cast_fu_230_p1 = esl_zext<24,23>(p_shl_fu_226_p1.read());
}

void TPG::thread_p_shl_fu_226_p1() {
    p_shl_fu_226_p1 = esl_sext<23,19>(tmp_11_fu_219_p3.read());
}

void TPG::thread_r_0_peak_reg_V_writ_fu_388_p2() {
    r_0_peak_reg_V_writ_fu_388_p2 = (!tmp4_fu_383_p2.read().is_01() || !tmp3_fu_371_p2.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp4_fu_383_p2.read()) + sc_biguint<19>(tmp3_fu_371_p2.read()));
}

void TPG::thread_r_0_shift_reg_V_o() {
    r_0_shift_reg_V_o = grp_fu_444_p3.read().range(20, 7);
}

void TPG::thread_r_0_shift_reg_V_o_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        r_0_shift_reg_V_o_ap_vld = ap_const_logic_1;
    } else {
        r_0_shift_reg_V_o_ap_vld = ap_const_logic_0;
    }
}

void TPG::thread_r_1_shift_reg_V_o() {
    r_1_shift_reg_V_o = r_0_shift_reg_V_i.read();
}

void TPG::thread_r_1_shift_reg_V_o_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        r_1_shift_reg_V_o_ap_vld = ap_const_logic_1;
    } else {
        r_1_shift_reg_V_o_ap_vld = ap_const_logic_0;
    }
}

void TPG::thread_r_2_shift_reg_V_o() {
    r_2_shift_reg_V_o = r_1_shift_reg_V_i.read();
}

void TPG::thread_r_2_shift_reg_V_o_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        r_2_shift_reg_V_o_ap_vld = ap_const_logic_1;
    } else {
        r_2_shift_reg_V_o_ap_vld = ap_const_logic_0;
    }
}

void TPG::thread_r_3_shift_reg_V_o() {
    r_3_shift_reg_V_o = r_2_shift_reg_V_i.read();
}

void TPG::thread_r_3_shift_reg_V_o_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_pp0_stage0.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read()))) {
        r_3_shift_reg_V_o_ap_vld = ap_const_logic_1;
    } else {
        r_3_shift_reg_V_o_ap_vld = ap_const_logic_0;
    }
}

void TPG::thread_r_V_2_fu_259_p2() {
    r_V_2_fu_259_p2 = (!p_neg_cast_fu_240_p1.read().is_01() || !p_shl1_cast_fu_255_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_neg_cast_fu_240_p1.read()) - sc_biguint<25>(p_shl1_cast_fu_255_p1.read()));
}

void TPG::thread_r_V_4_2_fu_301_p2() {
    r_V_4_2_fu_301_p2 = (!p_shl2_cast_fu_297_p1.read().is_01() || !lhs_V_4_2_cast7_fu_282_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl2_cast_fu_297_p1.read()) - sc_biguint<24>(lhs_V_4_2_cast7_fu_282_p1.read()));
}

void TPG::thread_r_V_4_3_fu_351_p2() {
    r_V_4_3_fu_351_p2 = (!p_shl3_cast_fu_332_p1.read().is_01() || !p_shl4_cast_fu_347_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(p_shl3_cast_fu_332_p1.read()) - sc_biguint<24>(p_shl4_cast_fu_347_p1.read()));
}

void TPG::thread_r_V_4_fu_453_p0() {
    r_V_4_fu_453_p0 =  (sc_lv<7>) (ap_const_lv25_1FFFFDD);
}

void TPG::thread_r_V_4_fu_453_p1() {
    r_V_4_fu_453_p1 =  (sc_lv<18>) (r_V_4_fu_453_p10.read());
}

void TPG::thread_r_V_4_fu_453_p10() {
    r_V_4_fu_453_p10 = esl_zext<25,18>(extLd3_fu_173_p1.read());
}

void TPG::thread_tmp3_fu_371_p2() {
    tmp3_fu_371_p2 = (!tmp_22_1_cast_fu_278_p1.read().is_01() || !tmp_10_fu_317_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_22_1_cast_fu_278_p1.read()) + sc_bigint<19>(tmp_10_fu_317_p1.read()));
}

void TPG::thread_tmp4_fu_383_p2() {
    tmp4_fu_383_p2 = (!tmp5_fu_377_p2.read().is_01() || !mul_V_reg_485.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp5_fu_377_p2.read()) + sc_biguint<19>(mul_V_reg_485.read()));
}

void TPG::thread_tmp5_fu_377_p2() {
    tmp5_fu_377_p2 = (!tmp_529_fu_265_p4.read().is_01() || !tmp_13_fu_367_p1.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_529_fu_265_p4.read()) + sc_bigint<19>(tmp_13_fu_367_p1.read()));
}

void TPG::thread_tmpPeak_V_fu_418_p3() {
    tmpPeak_V_fu_418_p3 = (!ap_pipeline_reg_pp0_iter1_icmp_reg_495.read()[0].is_01())? sc_lv<16>(): ((ap_pipeline_reg_pp0_iter1_icmp_reg_495.read()[0].to_bool())? ap_const_lv16_3FF: tmp_8_fu_409_p4.read());
}

void TPG::thread_tmp_10_fu_317_p1() {
    tmp_10_fu_317_p1 = esl_sext<19,18>(tmp_9_fu_307_p4.read());
}

void TPG::thread_tmp_11_fu_219_p3() {
    tmp_11_fu_219_p3 = esl_concat<14,5>(r_3_shift_reg_V_rea_reg_473.read(), ap_const_lv5_0);
}

void TPG::thread_tmp_12_fu_357_p4() {
    tmp_12_fu_357_p4 = r_V_4_3_fu_351_p2.read().range(23, 6);
}

void TPG::thread_tmp_13_fu_367_p1() {
    tmp_13_fu_367_p1 = esl_sext<19,18>(tmp_12_fu_357_p4.read());
}

void TPG::thread_tmp_14_fu_244_p3() {
    tmp_14_fu_244_p3 = esl_concat<14,2>(r_3_shift_reg_V_rea_reg_473.read(), ap_const_lv2_0);
}

void TPG::thread_tmp_15_fu_200_p4() {
    tmp_15_fu_200_p4 = r_0_peak_reg_V_read.read().range(18, 12);
}

void TPG::thread_tmp_1_fu_394_p2() {
    tmp_1_fu_394_p2 = (!r_0_peak_reg_V_writ_reg_500.read().is_01() || !ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460.read().is_01())? sc_lv<1>(): (sc_bigint<19>(r_0_peak_reg_V_writ_reg_500.read()) < sc_bigint<19>(ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460.read()));
}

void TPG::thread_tmp_22_1_cast_fu_278_p1() {
    tmp_22_1_cast_fu_278_p1 = esl_zext<19,16>(tmp_7_fu_275_p1.read());
}

void TPG::thread_tmp_2_fu_398_p2() {
    tmp_2_fu_398_p2 = (!ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): (sc_bigint<19>(ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460.read()) > sc_bigint<19>(ap_const_lv19_0));
}

void TPG::thread_tmp_4_fu_321_p3() {
    tmp_4_fu_321_p3 = esl_concat<14,5>(tmp_s_reg_467.read(), ap_const_lv5_0);
}

void TPG::thread_tmp_529_fu_265_p4() {
    tmp_529_fu_265_p4 = r_V_2_fu_259_p2.read().range(24, 6);
}

void TPG::thread_tmp_5_fu_336_p3() {
    tmp_5_fu_336_p3 = esl_concat<14,3>(tmp_s_reg_467.read(), ap_const_lv3_0);
}

void TPG::thread_tmp_7_fu_275_p1() {
    tmp_7_fu_275_p1 = esl_sext<16,12>(tmp_6_reg_490.read());
}

void TPG::thread_tmp_8_fu_409_p4() {
    tmp_8_fu_409_p4 = ap_pipeline_reg_pp0_iter1_r_0_peak_reg_V_read_1_reg_460.read().range(17, 2);
}

void TPG::thread_tmp_9_fu_307_p4() {
    tmp_9_fu_307_p4 = r_V_4_2_fu_301_p2.read().range(23, 6);
}

void TPG::thread_tmp_fu_286_p3() {
    tmp_fu_286_p3 = esl_concat<14,5>(r_0_shift_reg_V_rea_reg_479.read(), ap_const_lv5_0);
}

void TPG::thread_uncorrectedADC_V_fu_155_p1() {
    uncorrectedADC_V_fu_155_p1 = data_int_V.read().range(12-1, 0);
}

void TPG::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}
