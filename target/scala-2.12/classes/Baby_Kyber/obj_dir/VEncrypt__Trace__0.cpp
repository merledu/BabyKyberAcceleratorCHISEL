// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncrypt__Syms.h"


void VEncrypt___024root__trace_chg_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VEncrypt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_chg_0\n"); );
    // Init
    VEncrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEncrypt___024root*>(voidSelf);
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VEncrypt___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VEncrypt___024root__trace_chg_0_sub_0(VEncrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Encrypt__DOT__transposed_matrix
                               [0U][0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->Encrypt__DOT__transposed_matrix
                               [0U][1U]),32);
        bufp->chgIData(oldp+2,(vlSelf->Encrypt__DOT__transposed_matrix
                               [0U][2U]),32);
        bufp->chgIData(oldp+3,(vlSelf->Encrypt__DOT__transposed_matrix
                               [0U][3U]),32);
        bufp->chgIData(oldp+4,(vlSelf->Encrypt__DOT__transposed_matrix
                               [1U][0U]),32);
        bufp->chgIData(oldp+5,(vlSelf->Encrypt__DOT__transposed_matrix
                               [1U][1U]),32);
        bufp->chgIData(oldp+6,(vlSelf->Encrypt__DOT__transposed_matrix
                               [1U][2U]),32);
        bufp->chgIData(oldp+7,(vlSelf->Encrypt__DOT__transposed_matrix
                               [1U][3U]),32);
        bufp->chgIData(oldp+8,(vlSelf->Encrypt__DOT__transposed_matrix
                               [2U][0U]),32);
        bufp->chgIData(oldp+9,(vlSelf->Encrypt__DOT__transposed_matrix
                               [2U][1U]),32);
        bufp->chgIData(oldp+10,(vlSelf->Encrypt__DOT__transposed_matrix
                                [2U][2U]),32);
        bufp->chgIData(oldp+11,(vlSelf->Encrypt__DOT__transposed_matrix
                                [2U][3U]),32);
        bufp->chgIData(oldp+12,(vlSelf->Encrypt__DOT__transposed_matrix
                                [3U][0U]),32);
        bufp->chgIData(oldp+13,(vlSelf->Encrypt__DOT__transposed_matrix
                                [3U][1U]),32);
        bufp->chgIData(oldp+14,(vlSelf->Encrypt__DOT__transposed_matrix
                                [3U][2U]),32);
        bufp->chgIData(oldp+15,(vlSelf->Encrypt__DOT__transposed_matrix
                                [3U][3U]),32);
        bufp->chgIData(oldp+16,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
        bufp->chgIData(oldp+21,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
        bufp->chgIData(oldp+22,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
        bufp->chgIData(oldp+23,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
        bufp->chgIData(oldp+24,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+37,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+38,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+39,(vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+40,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
        bufp->chgIData(oldp+41,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
        bufp->chgIData(oldp+42,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
        bufp->chgIData(oldp+43,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
        bufp->chgIData(oldp+44,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+49,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+50,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+51,(vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+52,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
        bufp->chgIData(oldp+55,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
        bufp->chgIData(oldp+56,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
        bufp->chgIData(oldp+57,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
        bufp->chgIData(oldp+58,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
        bufp->chgIData(oldp+59,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
        bufp->chgIData(oldp+60,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
        bufp->chgIData(oldp+69,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
        bufp->chgIData(oldp+70,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
        bufp->chgIData(oldp+71,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
        bufp->chgIData(oldp+72,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+73,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+74,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+75,(vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+76,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
        bufp->chgIData(oldp+77,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
        bufp->chgIData(oldp+78,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
        bufp->chgIData(oldp+79,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
        bufp->chgIData(oldp+80,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
        bufp->chgIData(oldp+83,(vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
        bufp->chgIData(oldp+84,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+85,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+86,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+87,(vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+88,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [0U][0U]),32);
        bufp->chgIData(oldp+89,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [0U][1U]),32);
        bufp->chgIData(oldp+90,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [0U][2U]),32);
        bufp->chgIData(oldp+91,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [0U][3U]),32);
        bufp->chgIData(oldp+92,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [1U][0U]),32);
        bufp->chgIData(oldp+93,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [1U][1U]),32);
        bufp->chgIData(oldp+94,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [1U][2U]),32);
        bufp->chgIData(oldp+95,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [1U][3U]),32);
        bufp->chgIData(oldp+96,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [2U][0U]),32);
        bufp->chgIData(oldp+97,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [2U][1U]),32);
        bufp->chgIData(oldp+98,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [2U][2U]),32);
        bufp->chgIData(oldp+99,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                [2U][3U]),32);
        bufp->chgIData(oldp+100,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][0U]),32);
        bufp->chgIData(oldp+101,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][1U]),32);
        bufp->chgIData(oldp+102,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][2U]),32);
        bufp->chgIData(oldp+103,(vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
                                 [3U][3U]),32);
        bufp->chgIData(oldp+104,(vlSelf->Encrypt__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+105,(vlSelf->Encrypt__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+106,(vlSelf->Encrypt__DOT__added[0]),32);
        bufp->chgIData(oldp+107,(vlSelf->Encrypt__DOT__added[1]),32);
        bufp->chgIData(oldp+108,(vlSelf->Encrypt__DOT__added[2]),32);
        bufp->chgIData(oldp+109,(vlSelf->Encrypt__DOT__added[3]),32);
        bufp->chgIData(oldp+110,(vlSelf->Encrypt__DOT__added1[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->Encrypt__DOT__added1[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->Encrypt__DOT__added1[2]),32);
        bufp->chgIData(oldp+113,(vlSelf->Encrypt__DOT__added1[3]),32);
        bufp->chgIData(oldp+114,(vlSelf->Encrypt__DOT__added2[0]),32);
        bufp->chgIData(oldp+115,(vlSelf->Encrypt__DOT__added2[1]),32);
        bufp->chgIData(oldp+116,(vlSelf->Encrypt__DOT__added2[2]),32);
        bufp->chgIData(oldp+117,(vlSelf->Encrypt__DOT__added2[3]),32);
        bufp->chgIData(oldp+118,(vlSelf->Encrypt__DOT__u
                                 [0U][0U]),32);
        bufp->chgIData(oldp+119,(vlSelf->Encrypt__DOT__u
                                 [0U][1U]),32);
        bufp->chgIData(oldp+120,(vlSelf->Encrypt__DOT__u
                                 [0U][2U]),32);
        bufp->chgIData(oldp+121,(vlSelf->Encrypt__DOT__u
                                 [0U][3U]),32);
        bufp->chgIData(oldp+122,(vlSelf->Encrypt__DOT__u
                                 [1U][0U]),32);
        bufp->chgIData(oldp+123,(vlSelf->Encrypt__DOT__u
                                 [1U][1U]),32);
        bufp->chgIData(oldp+124,(vlSelf->Encrypt__DOT__u
                                 [1U][2U]),32);
        bufp->chgIData(oldp+125,(vlSelf->Encrypt__DOT__u
                                 [1U][3U]),32);
        bufp->chgIData(oldp+126,(vlSelf->Encrypt__DOT__v[0]),32);
        bufp->chgIData(oldp+127,(vlSelf->Encrypt__DOT__v[1]),32);
        bufp->chgIData(oldp+128,(vlSelf->Encrypt__DOT__v[2]),32);
        bufp->chgIData(oldp+129,(vlSelf->Encrypt__DOT__v[3]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+130,(vlSelf->Encrypt__DOT__stop_random_generation));
        bufp->chgIData(oldp+131,(vlSelf->Encrypt__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+132,(vlSelf->Encrypt__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+133,(vlSelf->Encrypt__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+134,(vlSelf->Encrypt__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+135,(vlSelf->Encrypt__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+136,(vlSelf->Encrypt__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+137,(vlSelf->Encrypt__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+138,(vlSelf->Encrypt__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+139,(vlSelf->Encrypt__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+140,(vlSelf->Encrypt__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+141,(vlSelf->Encrypt__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+142,(vlSelf->Encrypt__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+143,(vlSelf->Encrypt__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+144,(vlSelf->Encrypt__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+145,(vlSelf->Encrypt__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+146,(vlSelf->Encrypt__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+147,(vlSelf->Encrypt__DOT__poly_out4[0]),32);
        bufp->chgIData(oldp+148,(vlSelf->Encrypt__DOT__poly_out4[1]),32);
        bufp->chgIData(oldp+149,(vlSelf->Encrypt__DOT__poly_out4[2]),32);
        bufp->chgIData(oldp+150,(vlSelf->Encrypt__DOT__poly_out4[3]),32);
        bufp->chgIData(oldp+151,(vlSelf->Encrypt__DOT__poly_out5[0]),32);
        bufp->chgIData(oldp+152,(vlSelf->Encrypt__DOT__poly_out5[1]),32);
        bufp->chgIData(oldp+153,(vlSelf->Encrypt__DOT__poly_out5[2]),32);
        bufp->chgIData(oldp+154,(vlSelf->Encrypt__DOT__poly_out5[3]),32);
        bufp->chgCData(oldp+155,(vlSelf->Encrypt__DOT__coefficients),4);
        bufp->chgIData(oldp+156,(vlSelf->Encrypt__DOT__coefficients_scaled[0]),32);
        bufp->chgIData(oldp+157,(vlSelf->Encrypt__DOT__coefficients_scaled[1]),32);
        bufp->chgIData(oldp+158,(vlSelf->Encrypt__DOT__coefficients_scaled[2]),32);
        bufp->chgIData(oldp+159,(vlSelf->Encrypt__DOT__coefficients_scaled[3]),32);
        bufp->chgIData(oldp+160,(vlSelf->Encrypt__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+161,(vlSelf->Encrypt__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+162,(vlSelf->clk));
    bufp->chgBit(oldp+163,(vlSelf->rst_n));
    bufp->chgBit(oldp+164,(vlSelf->enable));
    bufp->chgIData(oldp+165,(vlSelf->message),32);
    bufp->chgIData(oldp+166,(vlSelf->r[0U][0U]),32);
    bufp->chgIData(oldp+167,(vlSelf->r[0U][1U]),32);
    bufp->chgIData(oldp+168,(vlSelf->r[0U][2U]),32);
    bufp->chgIData(oldp+169,(vlSelf->r[0U][3U]),32);
    bufp->chgIData(oldp+170,(vlSelf->r[1U][0U]),32);
    bufp->chgIData(oldp+171,(vlSelf->r[1U][1U]),32);
    bufp->chgIData(oldp+172,(vlSelf->r[1U][2U]),32);
    bufp->chgIData(oldp+173,(vlSelf->r[1U][3U]),32);
    bufp->chgIData(oldp+174,(vlSelf->e1[0U][0U]),32);
    bufp->chgIData(oldp+175,(vlSelf->e1[0U][1U]),32);
    bufp->chgIData(oldp+176,(vlSelf->e1[0U][2U]),32);
    bufp->chgIData(oldp+177,(vlSelf->e1[0U][3U]),32);
    bufp->chgIData(oldp+178,(vlSelf->e1[1U][0U]),32);
    bufp->chgIData(oldp+179,(vlSelf->e1[1U][1U]),32);
    bufp->chgIData(oldp+180,(vlSelf->e1[1U][2U]),32);
    bufp->chgIData(oldp+181,(vlSelf->e1[1U][3U]),32);
    bufp->chgIData(oldp+182,(vlSelf->e2[0]),32);
    bufp->chgIData(oldp+183,(vlSelf->e2[1]),32);
    bufp->chgIData(oldp+184,(vlSelf->e2[2]),32);
    bufp->chgIData(oldp+185,(vlSelf->e2[3]),32);
    bufp->chgIData(oldp+186,(vlSelf->combined_output
                             [0U][0U][0U]),32);
    bufp->chgIData(oldp+187,(vlSelf->combined_output
                             [0U][0U][1U]),32);
    bufp->chgIData(oldp+188,(vlSelf->combined_output
                             [0U][0U][2U]),32);
    bufp->chgIData(oldp+189,(vlSelf->combined_output
                             [0U][0U][3U]),32);
    bufp->chgIData(oldp+190,(vlSelf->combined_output
                             [0U][1U][0U]),32);
    bufp->chgIData(oldp+191,(vlSelf->combined_output
                             [0U][1U][1U]),32);
    bufp->chgIData(oldp+192,(vlSelf->combined_output
                             [0U][1U][2U]),32);
    bufp->chgIData(oldp+193,(vlSelf->combined_output
                             [0U][1U][3U]),32);
    bufp->chgIData(oldp+194,(vlSelf->combined_output
                             [0U][2U][0U]),32);
    bufp->chgIData(oldp+195,(vlSelf->combined_output
                             [0U][2U][1U]),32);
    bufp->chgIData(oldp+196,(vlSelf->combined_output
                             [0U][2U][2U]),32);
    bufp->chgIData(oldp+197,(vlSelf->combined_output
                             [0U][2U][3U]),32);
    bufp->chgIData(oldp+198,(vlSelf->combined_output
                             [0U][3U][0U]),32);
    bufp->chgIData(oldp+199,(vlSelf->combined_output
                             [0U][3U][1U]),32);
    bufp->chgIData(oldp+200,(vlSelf->combined_output
                             [0U][3U][2U]),32);
    bufp->chgIData(oldp+201,(vlSelf->combined_output
                             [0U][3U][3U]),32);
    bufp->chgIData(oldp+202,(vlSelf->combined_output
                             [1U][0U][0U]),32);
    bufp->chgIData(oldp+203,(vlSelf->combined_output
                             [1U][0U][1U]),32);
    bufp->chgIData(oldp+204,(vlSelf->combined_output
                             [1U][0U][2U]),32);
    bufp->chgIData(oldp+205,(vlSelf->combined_output
                             [1U][0U][3U]),32);
    bufp->chgIData(oldp+206,(vlSelf->combined_output
                             [1U][1U][0U]),32);
    bufp->chgIData(oldp+207,(vlSelf->combined_output
                             [1U][1U][1U]),32);
    bufp->chgIData(oldp+208,(vlSelf->combined_output
                             [1U][1U][2U]),32);
    bufp->chgIData(oldp+209,(vlSelf->combined_output
                             [1U][1U][3U]),32);
    bufp->chgIData(oldp+210,(vlSelf->combined_output
                             [1U][2U][0U]),32);
    bufp->chgIData(oldp+211,(vlSelf->combined_output
                             [1U][2U][1U]),32);
    bufp->chgIData(oldp+212,(vlSelf->combined_output
                             [1U][2U][2U]),32);
    bufp->chgIData(oldp+213,(vlSelf->combined_output
                             [1U][2U][3U]),32);
    bufp->chgIData(oldp+214,(vlSelf->combined_output
                             [1U][3U][0U]),32);
    bufp->chgIData(oldp+215,(vlSelf->combined_output
                             [1U][3U][1U]),32);
    bufp->chgIData(oldp+216,(vlSelf->combined_output
                             [1U][3U][2U]),32);
    bufp->chgIData(oldp+217,(vlSelf->combined_output
                             [1U][3U][3U]),32);
    bufp->chgIData(oldp+218,(vlSelf->ciphertext[0U]
                             [0U][0U]),32);
    bufp->chgIData(oldp+219,(vlSelf->ciphertext[0U]
                             [0U][1U]),32);
    bufp->chgIData(oldp+220,(vlSelf->ciphertext[0U]
                             [0U][2U]),32);
    bufp->chgIData(oldp+221,(vlSelf->ciphertext[0U]
                             [0U][3U]),32);
    bufp->chgIData(oldp+222,(vlSelf->ciphertext[0U]
                             [1U][0U]),32);
    bufp->chgIData(oldp+223,(vlSelf->ciphertext[0U]
                             [1U][1U]),32);
    bufp->chgIData(oldp+224,(vlSelf->ciphertext[0U]
                             [1U][2U]),32);
    bufp->chgIData(oldp+225,(vlSelf->ciphertext[0U]
                             [1U][3U]),32);
    bufp->chgIData(oldp+226,(vlSelf->ciphertext[1U]
                             [0U][0U]),32);
    bufp->chgIData(oldp+227,(vlSelf->ciphertext[1U]
                             [0U][1U]),32);
    bufp->chgIData(oldp+228,(vlSelf->ciphertext[1U]
                             [0U][2U]),32);
    bufp->chgIData(oldp+229,(vlSelf->ciphertext[1U]
                             [0U][3U]),32);
    bufp->chgIData(oldp+230,(vlSelf->ciphertext[1U]
                             [1U][0U]),32);
    bufp->chgIData(oldp+231,(vlSelf->ciphertext[1U]
                             [1U][1U]),32);
    bufp->chgIData(oldp+232,(vlSelf->ciphertext[1U]
                             [1U][2U]),32);
    bufp->chgIData(oldp+233,(vlSelf->ciphertext[1U]
                             [1U][3U]),32);
}

void VEncrypt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root__trace_cleanup\n"); );
    // Init
    VEncrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEncrypt___024root*>(voidSelf);
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
