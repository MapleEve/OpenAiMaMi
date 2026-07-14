// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x100246b40 depth=2
// tauri4menu6normal48_::with_id
unsigned __int64 *__fastcall tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204(
        unsigned __int64 *a1,
        __int64 a2,
        const void *a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  char v12; // of
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rt0
  volatile signed __int64 *v15; // r12
  __int64 v16; // rt0
  void *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  char v20; // bl
  bool v21; // zf
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r13
  void *v25; // rax
  void *v26; // rbx
  void *v27; // rax
  void *v28; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  unsigned __int64 v32; // r14
  void *v33; // rax
  unsigned __int64 v34; // rbx
  char v35; // [rsp+3h] [rbp-525h]
  __int16 v36; // [rsp+4h] [rbp-524h]
  char v37; // [rsp+6h] [rbp-522h]
  __int64 v38; // [rsp+8h] [rbp-520h]
  unsigned __int64 v40; // [rsp+18h] [rbp-510h]
  __int128 v41; // [rsp+18h] [rbp-510h]
  unsigned __int64 v42; // [rsp+20h] [rbp-508h]
  unsigned __int64 v43; // [rsp+28h] [rbp-500h]
  unsigned __int64 v44; // [rsp+28h] [rbp-500h]
  unsigned __int64 v45; // [rsp+38h] [rbp-4F0h]
  __int64 v46; // [rsp+38h] [rbp-4F0h]
  unsigned __int64 v47; // [rsp+40h] [rbp-4E8h]
  __int64 v48; // [rsp+40h] [rbp-4E8h]
  _QWORD v49[2]; // [rsp+48h] [rbp-4E0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-4D0h]
  void *v51; // [rsp+60h] [rbp-4C8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-4C0h]
  unsigned __int64 v53; // [rsp+70h] [rbp-4B8h]
  unsigned __int64 v54; // [rsp+78h] [rbp-4B0h]
  _OWORD __src[32]; // [rsp+80h] [rbp-4A8h] BYREF
  unsigned __int64 v56; // [rsp+288h] [rbp-2A0h] BYREF
  unsigned __int64 v57; // [rsp+290h] [rbp-298h]
  __int128 v58; // [rsp+298h] [rbp-290h]
  unsigned __int64 v59; // [rsp+2A8h] [rbp-280h]
  __int64 v60; // [rsp+2B0h] [rbp-278h]
  __int64 v61; // [rsp+2B8h] [rbp-270h]
  _BYTE v62[136]; // [rsp+2C0h] [rbp-268h] BYREF
  _QWORD v63[29]; // [rsp+348h] [rbp-1E0h] BYREF
  _QWORD __dst[19]; // [rsp+430h] [rbp-F8h] BYREF

  v51 = a5; /*0x100246b5d*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51(__src, a2); /*0x100246b78*/
  v13 = *(volatile signed __int64 **)(a2 + 136); /*0x100246b7d*/
  v14 = _InterlockedIncrement64(v13); /*0x100246b84*/
  if ( (v14 < 0) ^ v12 | (v14 == 0) /*0x100246b9a*/
    || (v15 = *(volatile signed __int64 **)(a2 + 144), v16 = _InterlockedIncrement64(v15), (v16 < 0) ^ v12 | (v16 == 0)) )
  {
    BUG(); /*0x100247121*/
  }
  memcpy(__dst, __src, 0x88u); /*0x100246bb5*/
  __dst[17] = v13; /*0x100246bba*/
  __dst[18] = v15; /*0x100246bc2*/
  if ( a4 < 0 ) /*0x100246bcd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, a4); /*0x100246bd4*/
  if ( a4 ) /*0x100246bde*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100246be4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100246be9*/
    v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x100246bf6*/
    v18 = a6; /*0x100246bfe*/
    if ( !v17 ) /*0x100246c03*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x10024711c*/
    v38 = (__int64)v17; /*0x100246c09*/
    memcpy(v17, a3, a4); /*0x100246c17*/
    v19 = a8; /*0x100246c1c*/
    if ( a8 ) /*0x100246c23*/
      goto LABEL_8; /*0x100246c23*/
LABEL_14:
    v20 = -41; /*0x100246cba*/
    goto LABEL_17; /*0x100246cbc*/
  }
  v38 = 1; /*0x100246ca3*/
  v18 = a6; /*0x100246ca8*/
  v19 = a8; /*0x100246cad*/
  if ( !a8 ) /*0x100246cb4*/
    goto LABEL_14; /*0x100246cb4*/
LABEL_8:
  _$LT$muda..accelerator..Accelerator$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::h1ede16fb2476ba6b( /*0x100246c29*/
    __src,
    v19,
    a9);
  if ( LODWORD(__src[0]) == 3 ) /*0x100246c42*/
  {
    v50 = *((_QWORD *)&__src[0] + 1); /*0x100246c4c*/
    v20 = __src[1]; /*0x100246c51*/
    v36 = *(_WORD *)((char *)&__src[1] + 1); /*0x100246c61*/
    v37 = BYTE3(__src[1]); /*0x100246c6e*/
    v21 = v18 == 0; /*0x100246c72*/
    if ( v18 >= 0 ) /*0x100246c75*/
      goto LABEL_10; /*0x100246c75*/
LABEL_18:
    v22 = 0; /*0x100246ce4*/
    goto LABEL_19; /*0x100246ce4*/
  }
  v20 = -41; /*0x100246cc6*/
  if ( *((_QWORD *)&__src[0] + 1) ) /*0x100246ccb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100246cda*/
LABEL_17:
  v21 = v18 == 0; /*0x100246cdf*/
  if ( v18 < 0 ) /*0x100246ce2*/
    goto LABEL_18; /*0x100246ce2*/
LABEL_10:
  v35 = v20; /*0x100246c77*/
  if ( !v21 ) /*0x100246c7b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100246c7d*/
    v22 = 1; /*0x100246c82*/
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1u); /*0x100246c8f*/
    if ( v23 ) /*0x100246c97*/
    {
      v24 = v23; /*0x100246c99*/
      goto LABEL_21; /*0x100246c9c*/
    }
LABEL_19:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v18); /*0x100246ce6*/
  }
  v24 = 1; /*0x100246cf6*/
LABEL_21:
  memcpy((void *)v24, v51, v18); /*0x100246cfc*/
  *(_QWORD *)&__src[24] = 1; /*0x100246d0c*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x100246d18*/
  LOBYTE(__src[25]) = 0; /*0x100246d24*/
  *(_QWORD *)&__src[16] = 0; /*0x100246d2c*/
  BYTE8(__src[16]) = 0; /*0x100246d38*/
  *(_QWORD *)&__src[17] = 0; /*0x100246d40*/
  __src[0] = 0; /*0x100246d4f*/
  __src[8] = 0; /*0x100246d57*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x100246d5f*/
  __src[18] = 0; /*0x100246d6b*/
  __src[19] = 8u; /*0x100246d73*/
  LOBYTE(__src[20]) = 1; /*0x100246d8b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100246d93*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x200u, 0x80u); /*0x100246da2*/
  if ( !v25 ) /*0x100246daa*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1002470f4*/
  v26 = v25; /*0x100246db0*/
  memcpy(v25, __src, 0x200u); /*0x100246dc3*/
  v49[0] = 1; /*0x100246dc8*/
  v49[1] = v26; /*0x100246dd1*/
  v63[21] = a4; /*0x100246dd6*/
  v63[22] = v38; /*0x100246de3*/
  v63[23] = a4; /*0x100246deb*/
  v63[24] = v18; /*0x100246df3*/
  v63[25] = v24; /*0x100246dfb*/
  v63[26] = v18; /*0x100246e03*/
  BYTE4(v63[28]) = a7; /*0x100246e0f*/
  v63[27] = v50; /*0x100246e1b*/
  LOBYTE(v63[28]) = v35; /*0x100246e28*/
  *(_WORD *)((char *)&v63[28] + 1) = v36; /*0x100246e34*/
  BYTE3(v63[28]) = v37; /*0x100246e41*/
  memcpy(v63, __dst, 0x98u); /*0x100246e5d*/
  v63[19] = 1; /*0x100246e62*/
  v63[20] = v26; /*0x100246e6e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100246e76*/
  v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xE8u, 8u); /*0x100246e85*/
  if ( !v27 ) /*0x100246e8d*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 232); /*0x1002470e3*/
  v28 = v27; /*0x100246e93*/
  memcpy(v27, v63, 0xE8u); /*0x100246ea6*/
  *((_QWORD *)&__src[0] + 1) = v28; /*0x100246eab*/
  *(_QWORD *)&__src[1] = &off_10152A250; /*0x100246eba*/
  LOBYTE(__src[0]) = 28; /*0x100246ec2*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(&v56, a2, __src); /*0x100246edd*/
  if ( (_DWORD)v56 != 19 ) /*0x100246eea*/
  {
    v30 = 0x8000000000000000LL; /*0x100246f20*/
    v43 = v58; /*0x100246f32*/
    v42 = v57; /*0x100246f47*/
    v40 = v56; /*0x100246f4c*/
    goto LABEL_27; /*0x100246f4c*/
  }
  std::sync::mpmc::Receiver$LT$T$GT$::recv::h5ab5096e8c1f5faa(&v56, v49); /*0x100246ef9*/
  v29 = v56; /*0x100246efe*/
  if ( v56 == 3 ) /*0x100246f0a*/
  {
    v30 = 0x8000000000000010LL; /*0x100246f1a*/
LABEL_27:
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc534f4fded0edcc2(v49); /*0x100246f51*/
    v54 = v43; /*0x100246f60*/
    v53 = v42; /*0x100246f6f*/
    v52 = v40; /*0x100246f74*/
    a1[3] = v43; /*0x100246f7e*/
    a1[2] = v42; /*0x100246f82*/
    a1[1] = v40; /*0x100246f86*/
    a1[5] = v47; /*0x100246f94*/
    a1[4] = v45; /*0x100246f98*/
    *a1 = v30; /*0x100246f9c*/
    return a1; /*0x100246f9f*/
  }
  v32 = v57; /*0x100246fa4*/
  v41 = v58; /*0x100246fb4*/
  v44 = v59; /*0x100246fce*/
  v46 = v60; /*0x100246fdb*/
  v48 = v61; /*0x100246fe8*/
  memcpy((char *)&__src[4] + 8, v62, 0x88u); /*0x100247002*/
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc534f4fded0edcc2(v49); /*0x10024700c*/
  v54 = v44; /*0x100247016*/
  __src[2] = v41; /*0x100247025*/
  *(_QWORD *)&__src[3] = v44; /*0x100247035*/
  *(_QWORD *)&__src[0] = 1; /*0x10024703d*/
  *((_QWORD *)&__src[0] + 1) = 1; /*0x100247049*/
  *(_QWORD *)&__src[1] = v29; /*0x100247055*/
  *((_QWORD *)&__src[1] + 1) = v32; /*0x10024705d*/
  *((_QWORD *)&__src[3] + 1) = v46; /*0x10024706f*/
  *(_QWORD *)&__src[4] = v48; /*0x100247077*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10024707f*/
  v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xD0u, 8u); /*0x10024708e*/
  if ( !v33 ) /*0x100247096*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 208); /*0x10024710d*/
  v34 = (unsigned __int64)v33; /*0x100247098*/
  memcpy(v33, __src, 0xD0u); /*0x1002470ab*/
  a1[1] = v34; /*0x1002470b5*/
  *a1 = 0x8000000000000025LL; /*0x1002470c7*/
  return a1; /*0x1002470ca*/
}