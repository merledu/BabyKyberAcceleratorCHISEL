// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncrypt.h for the primary calling header

#include "VEncrypt__pch.h"
#include "VEncrypt___024root.h"

VL_ATTR_COLD void VEncrypt___024root___eval_static(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_static\n"); );
}

VL_ATTR_COLD void VEncrypt___024root___eval_initial(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void VEncrypt___024root___eval_final(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__stl(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VEncrypt___024root___eval_phase__stl(VEncrypt___024root* vlSelf);

VL_ATTR_COLD void VEncrypt___024root___eval_settle(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VEncrypt___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/hamna/Baby-Kyber-Accelerator/Encrypt.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VEncrypt___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__stl(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VEncrypt___024root___stl_sequent__TOP__0(VEncrypt___024root* vlSelf);

VL_ATTR_COLD void VEncrypt___024root___eval_stl(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VEncrypt___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VEncrypt___024root___stl_sequent__TOP__0(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->r[1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->r[1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->combined_output[1U][0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->combined_output[1U][0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->combined_output[1U][0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->combined_output[1U][0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->r[1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->combined_output[1U][1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->combined_output[1U][1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->combined_output[1U][1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->combined_output[1U][1U][0U];
    vlSelf->Encrypt__DOT__coefficients_scaled[0U] = 
        ((1U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[1U] = 
        ((2U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[2U] = 
        ((4U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[3U] = 
        ((8U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__added2[0U] = 0U;
    vlSelf->Encrypt__DOT__added2[1U] = 0U;
    vlSelf->Encrypt__DOT__added2[2U] = 0U;
    vlSelf->Encrypt__DOT__added2[3U] = 0U;
    vlSelf->Encrypt__DOT__added[0U] = 0U;
    vlSelf->Encrypt__DOT__added1[0U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][0U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][0U] = 0U;
    vlSelf->Encrypt__DOT__added[1U] = 0U;
    vlSelf->Encrypt__DOT__added1[1U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][1U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][1U] = 0U;
    vlSelf->Encrypt__DOT__added[2U] = 0U;
    vlSelf->Encrypt__DOT__added1[2U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][2U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][2U] = 0U;
    vlSelf->Encrypt__DOT__added[3U] = 0U;
    vlSelf->Encrypt__DOT__added1[3U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][3U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][3U] = 0U;
    if (vlSelf->enable) {
        vlSelf->Encrypt__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->Encrypt__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->Encrypt__DOT__added2[0U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [0U]);
        vlSelf->Encrypt__DOT__added2[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [0U])
                                             ? vlSelf->Encrypt__DOT__added2
                                            [0U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added2
                                                           [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[1U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [1U]);
        vlSelf->Encrypt__DOT__added2[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [1U])
                                             ? vlSelf->Encrypt__DOT__added2
                                            [1U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added2
                                                           [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[2U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [2U]);
        vlSelf->Encrypt__DOT__added2[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [2U])
                                             ? vlSelf->Encrypt__DOT__added2
                                            [2U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added2
                                                           [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[3U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [3U]);
        vlSelf->Encrypt__DOT__added2[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [3U])
                                             ? vlSelf->Encrypt__DOT__added2
                                            [3U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added2
                                                           [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added[0U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [0U] + vlSelf->Encrypt__DOT__poly_out1
                                           [0U]);
        vlSelf->Encrypt__DOT__added1[0U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [0U]);
        vlSelf->Encrypt__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [0U])
                                            ? vlSelf->Encrypt__DOT__added
                                           [0U] : VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__added
                                                                 [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [0U])
                                             ? vlSelf->Encrypt__DOT__added1
                                            [0U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added1
                                                           [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added[1U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [1U] + vlSelf->Encrypt__DOT__poly_out1
                                           [1U]);
        vlSelf->Encrypt__DOT__added1[1U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [1U]);
        vlSelf->Encrypt__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [1U])
                                            ? vlSelf->Encrypt__DOT__added
                                           [1U] : VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__added
                                                                 [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [1U])
                                             ? vlSelf->Encrypt__DOT__added1
                                            [1U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added1
                                                           [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added[2U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [2U] + vlSelf->Encrypt__DOT__poly_out1
                                           [2U]);
        vlSelf->Encrypt__DOT__added1[2U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [2U]);
        vlSelf->Encrypt__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [2U])
                                            ? vlSelf->Encrypt__DOT__added
                                           [2U] : VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__added
                                                                 [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [2U])
                                             ? vlSelf->Encrypt__DOT__added1
                                            [2U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added1
                                                           [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added[3U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [3U] + vlSelf->Encrypt__DOT__poly_out1
                                           [3U]);
        vlSelf->Encrypt__DOT__added1[3U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [3U]);
        vlSelf->Encrypt__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [3U])
                                            ? vlSelf->Encrypt__DOT__added
                                           [3U] : VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__added
                                                                 [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [3U])
                                             ? vlSelf->Encrypt__DOT__added1
                                            [3U] : 
                                            VL_MODDIVS_III(32, 
                                                           vlSelf->Encrypt__DOT__added1
                                                           [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][0U] = (vlSelf->Encrypt__DOT__added
                                           [0U] + vlSelf->e1
                                           [0U][0U]);
        vlSelf->Encrypt__DOT__u[1U][0U] = (vlSelf->Encrypt__DOT__added1
                                           [0U] + vlSelf->e1
                                           [1U][0U]);
        vlSelf->Encrypt__DOT__u[0U][0U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [0U]
                                                      [0U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [0U][0U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [0U]
                                                             [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[1U][0U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [1U]
                                                      [0U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [1U][0U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [1U]
                                                             [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][1U] = (vlSelf->Encrypt__DOT__added
                                           [1U] + vlSelf->e1
                                           [0U][1U]);
        vlSelf->Encrypt__DOT__u[1U][1U] = (vlSelf->Encrypt__DOT__added1
                                           [1U] + vlSelf->e1
                                           [1U][1U]);
        vlSelf->Encrypt__DOT__u[0U][1U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [0U]
                                                      [1U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [0U][1U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [0U]
                                                             [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[1U][1U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [1U]
                                                      [1U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [1U][1U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [1U]
                                                             [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][2U] = (vlSelf->Encrypt__DOT__added
                                           [2U] + vlSelf->e1
                                           [0U][2U]);
        vlSelf->Encrypt__DOT__u[1U][2U] = (vlSelf->Encrypt__DOT__added1
                                           [2U] + vlSelf->e1
                                           [1U][2U]);
        vlSelf->Encrypt__DOT__u[0U][2U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [0U]
                                                      [2U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [0U][2U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [0U]
                                                             [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[1U][2U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [1U]
                                                      [2U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [1U][2U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [1U]
                                                             [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][3U] = (vlSelf->Encrypt__DOT__added
                                           [3U] + vlSelf->e1
                                           [0U][3U]);
        vlSelf->Encrypt__DOT__u[1U][3U] = (vlSelf->Encrypt__DOT__added1
                                           [3U] + vlSelf->e1
                                           [1U][3U]);
        vlSelf->Encrypt__DOT__u[0U][3U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [0U]
                                                      [3U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [0U][3U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [0U]
                                                             [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[1U][3U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__u
                                                      [1U]
                                                      [3U])
                                            ? vlSelf->Encrypt__DOT__u
                                           [1U][3U]
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__u
                                                             [1U]
                                                             [3U], (IData)(0x11U)));
    }
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->combined_output[0U][3U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->combined_output[0U][3U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->combined_output[0U][3U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->combined_output[0U][3U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->combined_output[0U][2U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->combined_output[0U][2U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->combined_output[0U][2U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->combined_output[0U][2U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->combined_output[0U][1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->combined_output[0U][1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->combined_output[0U][1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->combined_output[0U][1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->combined_output[0U][0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->combined_output[0U][0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->combined_output[0U][0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->combined_output[0U][0U][0U];
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[0U] = ((vlSelf->Encrypt__DOT__added2
                                    [0U] + vlSelf->e2
                                    [0U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [3U]);
    vlSelf->Encrypt__DOT__v[0U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [0U])
                                    ? ((IData)(0x11U) 
                                       + vlSelf->Encrypt__DOT__v
                                       [0U]) : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__v
                                                              [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[1U] = ((vlSelf->Encrypt__DOT__added2
                                    [1U] + vlSelf->e2
                                    [1U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [2U]);
    vlSelf->Encrypt__DOT__v[1U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [1U])
                                    ? ((IData)(0x11U) 
                                       + vlSelf->Encrypt__DOT__v
                                       [1U]) : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__v
                                                              [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[2U] = ((vlSelf->Encrypt__DOT__added2
                                    [2U] + vlSelf->e2
                                    [2U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [1U]);
    vlSelf->Encrypt__DOT__v[2U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [2U])
                                    ? ((IData)(0x11U) 
                                       + vlSelf->Encrypt__DOT__v
                                       [2U]) : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__v
                                                              [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[3U] = ((vlSelf->Encrypt__DOT__added2
                                    [3U] + vlSelf->e2
                                    [3U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [0U]);
    vlSelf->Encrypt__DOT__v[3U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [3U])
                                    ? ((IData)(0x11U) 
                                       + vlSelf->Encrypt__DOT__v
                                       [3U]) : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__v
                                                              [3U], (IData)(0x11U)));
    vlSelf->ciphertext[0U][0U][0U] = vlSelf->Encrypt__DOT__u
        [0U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][0U][1U] = vlSelf->Encrypt__DOT__u
        [0U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][0U][2U] = vlSelf->Encrypt__DOT__u
        [0U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][0U][3U] = vlSelf->Encrypt__DOT__u
        [0U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
    vlSelf->ciphertext[0U][1U][0U] = vlSelf->Encrypt__DOT__u
        [1U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][1U][1U] = vlSelf->Encrypt__DOT__u
        [1U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][1U][2U] = vlSelf->Encrypt__DOT__u
        [1U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][1U][3U] = vlSelf->Encrypt__DOT__u
        [1U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [0U];
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_ATTR_COLD void VEncrypt___024root___eval_triggers__stl(VEncrypt___024root* vlSelf);

VL_ATTR_COLD bool VEncrypt___024root___eval_phase__stl(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VEncrypt___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VEncrypt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__ico(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__act(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__nba(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VEncrypt___024root___ctor_var_reset(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->message = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->r[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->e1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->e2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->combined_output[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->ciphertext[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->Encrypt__DOT__rand_num[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Encrypt__DOT__transposed_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->Encrypt__DOT__stop_random_generation = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_out5[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__added2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Encrypt__DOT__coefficients = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__coefficients_scaled[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Encrypt__DOT__u[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__v[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Encrypt__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->Encrypt__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->Encrypt__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->Encrypt__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
