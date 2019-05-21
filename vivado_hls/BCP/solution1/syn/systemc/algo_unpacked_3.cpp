#include "algo_unpacked.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void algo_unpacked::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_0_V\" :  \"" << link_in_0_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_1_V\" :  \"" << link_in_1_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_2_V\" :  \"" << link_in_2_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_3_V\" :  \"" << link_in_3_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_4_V\" :  \"" << link_in_4_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_5_V\" :  \"" << link_in_5_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_6_V\" :  \"" << link_in_6_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_7_V\" :  \"" << link_in_7_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_8_V\" :  \"" << link_in_8_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_9_V\" :  \"" << link_in_9_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_10_V\" :  \"" << link_in_10_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_11_V\" :  \"" << link_in_11_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_12_V\" :  \"" << link_in_12_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_13_V\" :  \"" << link_in_13_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_14_V\" :  \"" << link_in_14_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_15_V\" :  \"" << link_in_15_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_16_V\" :  \"" << link_in_16_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_17_V\" :  \"" << link_in_17_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_18_V\" :  \"" << link_in_18_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_19_V\" :  \"" << link_in_19_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_20_V\" :  \"" << link_in_20_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_21_V\" :  \"" << link_in_21_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_22_V\" :  \"" << link_in_22_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_23_V\" :  \"" << link_in_23_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_24_V\" :  \"" << link_in_24_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_25_V\" :  \"" << link_in_25_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_26_V\" :  \"" << link_in_26_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_27_V\" :  \"" << link_in_27_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_28_V\" :  \"" << link_in_28_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_29_V\" :  \"" << link_in_29_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_30_V\" :  \"" << link_in_30_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_31_V\" :  \"" << link_in_31_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_32_V\" :  \"" << link_in_32_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_33_V\" :  \"" << link_in_33_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_34_V\" :  \"" << link_in_34_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_35_V\" :  \"" << link_in_35_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_36_V\" :  \"" << link_in_36_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_37_V\" :  \"" << link_in_37_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_38_V\" :  \"" << link_in_38_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_39_V\" :  \"" << link_in_39_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_40_V\" :  \"" << link_in_40_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_41_V\" :  \"" << link_in_41_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_42_V\" :  \"" << link_in_42_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_43_V\" :  \"" << link_in_43_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_44_V\" :  \"" << link_in_44_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_45_V\" :  \"" << link_in_45_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_46_V\" :  \"" << link_in_46_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_in_47_V\" :  \"" << link_in_47_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_0_V_i\" :  \"" << link_out_0_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_0_V_o\" :  \"" << link_out_0_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_0_V_o_ap_vld\" :  \"" << link_out_0_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_1_V_i\" :  \"" << link_out_1_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_1_V_o\" :  \"" << link_out_1_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_1_V_o_ap_vld\" :  \"" << link_out_1_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_2_V_i\" :  \"" << link_out_2_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_2_V_o\" :  \"" << link_out_2_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_2_V_o_ap_vld\" :  \"" << link_out_2_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_3_V_i\" :  \"" << link_out_3_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_3_V_o\" :  \"" << link_out_3_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_3_V_o_ap_vld\" :  \"" << link_out_3_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_4_V_i\" :  \"" << link_out_4_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_4_V_o\" :  \"" << link_out_4_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_4_V_o_ap_vld\" :  \"" << link_out_4_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_5_V_i\" :  \"" << link_out_5_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_5_V_o\" :  \"" << link_out_5_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_5_V_o_ap_vld\" :  \"" << link_out_5_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_6_V_i\" :  \"" << link_out_6_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_6_V_o\" :  \"" << link_out_6_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_6_V_o_ap_vld\" :  \"" << link_out_6_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_7_V_i\" :  \"" << link_out_7_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_7_V_o\" :  \"" << link_out_7_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_7_V_o_ap_vld\" :  \"" << link_out_7_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_8_V_i\" :  \"" << link_out_8_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_8_V_o\" :  \"" << link_out_8_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_8_V_o_ap_vld\" :  \"" << link_out_8_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_9_V_i\" :  \"" << link_out_9_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_9_V_o\" :  \"" << link_out_9_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_9_V_o_ap_vld\" :  \"" << link_out_9_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_10_V_i\" :  \"" << link_out_10_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_10_V_o\" :  \"" << link_out_10_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_10_V_o_ap_vld\" :  \"" << link_out_10_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_11_V_i\" :  \"" << link_out_11_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_11_V_o\" :  \"" << link_out_11_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_11_V_o_ap_vld\" :  \"" << link_out_11_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_12_V_i\" :  \"" << link_out_12_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_12_V_o\" :  \"" << link_out_12_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_12_V_o_ap_vld\" :  \"" << link_out_12_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_13_V_i\" :  \"" << link_out_13_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_13_V_o\" :  \"" << link_out_13_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_13_V_o_ap_vld\" :  \"" << link_out_13_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_14_V_i\" :  \"" << link_out_14_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_14_V_o\" :  \"" << link_out_14_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_14_V_o_ap_vld\" :  \"" << link_out_14_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_15_V_i\" :  \"" << link_out_15_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_15_V_o\" :  \"" << link_out_15_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_15_V_o_ap_vld\" :  \"" << link_out_15_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_16_V_i\" :  \"" << link_out_16_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_16_V_o\" :  \"" << link_out_16_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_16_V_o_ap_vld\" :  \"" << link_out_16_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_17_V_i\" :  \"" << link_out_17_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_17_V_o\" :  \"" << link_out_17_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_17_V_o_ap_vld\" :  \"" << link_out_17_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_18_V_i\" :  \"" << link_out_18_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_18_V_o\" :  \"" << link_out_18_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_18_V_o_ap_vld\" :  \"" << link_out_18_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_19_V_i\" :  \"" << link_out_19_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_19_V_o\" :  \"" << link_out_19_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_19_V_o_ap_vld\" :  \"" << link_out_19_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_20_V_i\" :  \"" << link_out_20_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_20_V_o\" :  \"" << link_out_20_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_20_V_o_ap_vld\" :  \"" << link_out_20_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_21_V_i\" :  \"" << link_out_21_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_21_V_o\" :  \"" << link_out_21_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_21_V_o_ap_vld\" :  \"" << link_out_21_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_22_V_i\" :  \"" << link_out_22_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_22_V_o\" :  \"" << link_out_22_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_22_V_o_ap_vld\" :  \"" << link_out_22_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_23_V_i\" :  \"" << link_out_23_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_23_V_o\" :  \"" << link_out_23_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_23_V_o_ap_vld\" :  \"" << link_out_23_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_24_V_i\" :  \"" << link_out_24_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_24_V_o\" :  \"" << link_out_24_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_24_V_o_ap_vld\" :  \"" << link_out_24_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_25_V_i\" :  \"" << link_out_25_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_25_V_o\" :  \"" << link_out_25_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_25_V_o_ap_vld\" :  \"" << link_out_25_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_26_V_i\" :  \"" << link_out_26_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_26_V_o\" :  \"" << link_out_26_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_26_V_o_ap_vld\" :  \"" << link_out_26_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_27_V_i\" :  \"" << link_out_27_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_27_V_o\" :  \"" << link_out_27_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_27_V_o_ap_vld\" :  \"" << link_out_27_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_28_V_i\" :  \"" << link_out_28_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_28_V_o\" :  \"" << link_out_28_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_28_V_o_ap_vld\" :  \"" << link_out_28_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_29_V_i\" :  \"" << link_out_29_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_29_V_o\" :  \"" << link_out_29_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_29_V_o_ap_vld\" :  \"" << link_out_29_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_30_V_i\" :  \"" << link_out_30_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_30_V_o\" :  \"" << link_out_30_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_30_V_o_ap_vld\" :  \"" << link_out_30_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_31_V_i\" :  \"" << link_out_31_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_31_V_o\" :  \"" << link_out_31_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_31_V_o_ap_vld\" :  \"" << link_out_31_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_32_V_i\" :  \"" << link_out_32_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_32_V_o\" :  \"" << link_out_32_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_32_V_o_ap_vld\" :  \"" << link_out_32_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_33_V_i\" :  \"" << link_out_33_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_33_V_o\" :  \"" << link_out_33_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_33_V_o_ap_vld\" :  \"" << link_out_33_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_34_V_i\" :  \"" << link_out_34_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_34_V_o\" :  \"" << link_out_34_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_34_V_o_ap_vld\" :  \"" << link_out_34_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_35_V_i\" :  \"" << link_out_35_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_35_V_o\" :  \"" << link_out_35_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_35_V_o_ap_vld\" :  \"" << link_out_35_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_36_V_i\" :  \"" << link_out_36_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_36_V_o\" :  \"" << link_out_36_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_36_V_o_ap_vld\" :  \"" << link_out_36_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_37_V_i\" :  \"" << link_out_37_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_37_V_o\" :  \"" << link_out_37_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_37_V_o_ap_vld\" :  \"" << link_out_37_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_38_V_i\" :  \"" << link_out_38_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_38_V_o\" :  \"" << link_out_38_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_38_V_o_ap_vld\" :  \"" << link_out_38_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_39_V_i\" :  \"" << link_out_39_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_39_V_o\" :  \"" << link_out_39_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_39_V_o_ap_vld\" :  \"" << link_out_39_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_40_V_i\" :  \"" << link_out_40_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_40_V_o\" :  \"" << link_out_40_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_40_V_o_ap_vld\" :  \"" << link_out_40_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_41_V_i\" :  \"" << link_out_41_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_41_V_o\" :  \"" << link_out_41_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_41_V_o_ap_vld\" :  \"" << link_out_41_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_42_V_i\" :  \"" << link_out_42_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_42_V_o\" :  \"" << link_out_42_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_42_V_o_ap_vld\" :  \"" << link_out_42_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_43_V_i\" :  \"" << link_out_43_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_43_V_o\" :  \"" << link_out_43_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_43_V_o_ap_vld\" :  \"" << link_out_43_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_44_V_i\" :  \"" << link_out_44_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_44_V_o\" :  \"" << link_out_44_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_44_V_o_ap_vld\" :  \"" << link_out_44_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_45_V_i\" :  \"" << link_out_45_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_45_V_o\" :  \"" << link_out_45_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_45_V_o_ap_vld\" :  \"" << link_out_45_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_46_V_i\" :  \"" << link_out_46_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_46_V_o\" :  \"" << link_out_46_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_46_V_o_ap_vld\" :  \"" << link_out_46_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"link_out_47_V_i\" :  \"" << link_out_47_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_47_V_o\" :  \"" << link_out_47_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"link_out_47_V_o_ap_vld\" :  \"" << link_out_47_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
