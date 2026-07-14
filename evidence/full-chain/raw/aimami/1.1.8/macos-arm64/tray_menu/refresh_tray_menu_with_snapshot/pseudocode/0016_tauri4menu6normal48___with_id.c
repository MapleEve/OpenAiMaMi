// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x1002471d0 depth=2
// tauri4menu6normal48_::with_id
unsigned __int64 *__fastcall tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::he2bc2e6436b64f1a(
        unsigned __int64 *a1,
        __int64 a2,
        const void *a3,
        __int64 a4,
        _QWORD *a5,
        char a6,
        __int64 a7)
{
  char v10; // of
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r15
  __int64 v14; // rt0
  void *v15; // rax
  char v16; // bl
  __int64 v17; // r14
  bool v18; // zf
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r15
  void *v22; // rax
  __int64 v23; // rbx
  void *v24; // rax
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned __int64 *v29; // r14
  __int64 v31; // r14
  void *v32; // rax
  unsigned __int64 v33; // rbx
  char v34; // [rsp+53h] [rbp-555h]
  __int16 v35; // [rsp+54h] [rbp-554h]
  char v36; // [rsp+56h] [rbp-552h]
  _QWORD *v37; // [rsp+58h] [rbp-550h]
  __int64 v38; // [rsp+60h] [rbp-548h]
  __int64 v39; // [rsp+68h] [rbp-540h]
  __int128 v40; // [rsp+68h] [rbp-540h]
  __int64 v41; // [rsp+70h] [rbp-538h]
  __int64 v42; // [rsp+78h] [rbp-530h]
  __int64 v43; // [rsp+78h] [rbp-530h]
  void *v45; // [rsp+88h] [rbp-520h]
  unsigned __int64 v46; // [rsp+98h] [rbp-510h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-508h]
  __int64 v48[2]; // [rsp+C0h] [rbp-4E8h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-4D8h]
  __int64 v50; // [rsp+D8h] [rbp-4D0h]
  __int64 v51; // [rsp+E0h] [rbp-4C8h]
  __int64 v52[3]; // [rsp+E8h] [rbp-4C0h] BYREF
  _OWORD __src[36]; // [rsp+100h] [rbp-4A8h] BYREF
  _QWORD v54[29]; // [rsp+340h] [rbp-268h] BYREF
  _QWORD __dst[19]; // [rsp+428h] [rbp-180h] BYREF
  _BYTE v56[136]; // [rsp+4C0h] [rbp-E8h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x10024720c*/
    (__int64)__src,
    a2);
  v37 = a5; /*0x100247211*/
  v11 = *(volatile signed __int64 **)(a2 + 136); /*0x100247216*/
  v12 = _InterlockedIncrement64(v11); /*0x10024721d*/
  if ( (v12 < 0) ^ v10 | (v12 == 0) /*0x100247232*/
    || (v13 = *(volatile signed __int64 **)(a2 + 144), v14 = _InterlockedIncrement64(v13), (v14 < 0) ^ v10 | (v14 == 0)) )
  {
    BUG(); /*0x1002478a5*/
  }
  memcpy(__dst, __src, 0x88u); /*0x10024724d*/
  __dst[17] = v11; /*0x100247252*/
  __dst[18] = v13; /*0x10024725a*/
  if ( a4 < 0 ) /*0x100247265*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, a4); /*0x100247271*/
  if ( a4 ) /*0x100247280*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100247286*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10024728b*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x100247298*/
    if ( !v15 ) /*0x1002472a0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x1002478a0*/
    v38 = (__int64)v15; /*0x1002472a6*/
    memcpy(v15, a3, a4); /*0x1002472b4*/
    if ( a7 ) /*0x1002472c0*/
      goto LABEL_8; /*0x1002472c0*/
LABEL_14:
    v16 = -41; /*0x100247369*/
    goto LABEL_17; /*0x10024736b*/
  }
  v38 = 1; /*0x100247357*/
  if ( !a7 ) /*0x100247363*/
    goto LABEL_14; /*0x100247363*/
LABEL_8:
  _$LT$muda..accelerator..Accelerator$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::h1ede16fb2476ba6b((__int64)__src); /*0x1002472c6*/
  if ( LODWORD(__src[0]) == 3 ) /*0x1002472df*/
  {
    v49 = *((_QWORD *)&__src[0] + 1); /*0x1002472ed*/
    v16 = __src[1]; /*0x1002472f5*/
    v35 = *(_WORD *)((char *)&__src[1] + 1); /*0x100247305*/
    v36 = BYTE3(__src[1]); /*0x100247312*/
    v17 = v37[2]; /*0x100247316*/
    v18 = v17 == 0; /*0x10024731a*/
    if ( v17 >= 0 ) /*0x10024731d*/
      goto LABEL_10; /*0x10024731d*/
LABEL_18:
    v19 = 0; /*0x100247397*/
    goto LABEL_19; /*0x100247397*/
  }
  v16 = -41; /*0x100247375*/
  if ( *((_QWORD *)&__src[0] + 1) ) /*0x10024737a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100247389*/
LABEL_17:
  v17 = v37[2]; /*0x10024738e*/
  v18 = v17 == 0; /*0x100247392*/
  if ( v17 < 0 ) /*0x100247395*/
    goto LABEL_18; /*0x100247395*/
LABEL_10:
  v34 = v16; /*0x10024731f*/
  v45 = (void *)v37[1]; /*0x100247327*/
  if ( !v18 ) /*0x10024732f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100247331*/
    v19 = 1; /*0x100247336*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1u); /*0x100247343*/
    if ( v20 ) /*0x10024734b*/
    {
      v21 = v20; /*0x10024734d*/
      goto LABEL_21; /*0x100247350*/
    }
LABEL_19:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v17); /*0x100247399*/
  }
  v21 = 1; /*0x1002473ae*/
LABEL_21:
  memcpy((void *)v21, v45, v17); /*0x1002473b4*/
  *(_QWORD *)&__src[24] = 1; /*0x1002473c7*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x1002473d3*/
  LOBYTE(__src[25]) = 0; /*0x1002473df*/
  *(_QWORD *)&__src[16] = 0; /*0x1002473e7*/
  BYTE8(__src[16]) = 0; /*0x1002473f3*/
  *(_QWORD *)&__src[17] = 0; /*0x1002473fb*/
  __src[0] = 0; /*0x10024740a*/
  __src[8] = 0; /*0x100247412*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x10024741a*/
  __src[18] = 0; /*0x100247426*/
  __src[19] = 8u; /*0x10024742e*/
  LOBYTE(__src[20]) = 1; /*0x100247446*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10024744e*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x200u, 0x80u); /*0x10024745d*/
  if ( !v22 ) /*0x100247465*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x100247878*/
  v23 = (__int64)v22; /*0x10024746b*/
  memcpy(v22, __src, 0x200u); /*0x10024747e*/
  v48[0] = 1; /*0x100247483*/
  v48[1] = v23; /*0x10024748f*/
  v54[21] = a4; /*0x100247497*/
  v54[22] = v38; /*0x1002474a4*/
  v54[23] = a4; /*0x1002474ac*/
  v54[24] = v17; /*0x1002474b4*/
  v54[25] = v21; /*0x1002474bc*/
  v54[26] = v17; /*0x1002474c4*/
  BYTE4(v54[28]) = a6; /*0x1002474d3*/
  v54[27] = v49; /*0x1002474e2*/
  LOBYTE(v54[28]) = v34; /*0x1002474ef*/
  *(_WORD *)((char *)&v54[28] + 1) = v35; /*0x1002474fb*/
  BYTE3(v54[28]) = v36; /*0x100247508*/
  memcpy(v54, __dst, 0x98u); /*0x100247524*/
  v54[19] = 1; /*0x100247529*/
  v54[20] = v23; /*0x100247535*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10024753d*/
  v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xE8u, 8u); /*0x10024754c*/
  if ( !v24 ) /*0x100247554*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 232); /*0x100247867*/
  v25 = v24; /*0x10024755a*/
  memcpy(v24, v54, 0xE8u); /*0x10024756d*/
  *((_QWORD *)&__src[0] + 1) = v25; /*0x100247572*/
  *(_QWORD *)&__src[1] = &off_1015298D0; /*0x100247581*/
  LOBYTE(__src[0]) = 28; /*0x100247589*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(v52, a2, __src); /*0x1002475a9*/
  if ( LODWORD(v52[0]) == 19 ) /*0x1002475b6*/
  {
    std::sync::mpmc::Receiver$LT$T$GT$::recv::h5ab5096e8c1f5faa(__src, v48, v26); /*0x1002475c8*/
    v27 = *(_QWORD *)&__src[0]; /*0x1002475cd*/
    if ( *(_QWORD *)&__src[0] != 3 ) /*0x1002475d9*/
    {
      v31 = *((_QWORD *)&__src[0] + 1); /*0x1002476af*/
      v40 = __src[1]; /*0x1002476bf*/
      v50 = *((_QWORD *)&__src[2] + 1); /*0x1002476e6*/
      v43 = *(_QWORD *)&__src[2]; /*0x1002476e6*/
      v51 = *(_QWORD *)&__src[3]; /*0x1002476f6*/
      memcpy(v56, (char *)&__src[3] + 8, sizeof(v56)); /*0x100247713*/
      _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc534f4fded0edcc2(v48); /*0x100247720*/
      memcpy((char *)&__src[4] + 8, v56, 0x88u); /*0x100247781*/
      __src[2] = v40; /*0x100247796*/
      *(_QWORD *)&__src[3] = v43; /*0x1002477ae*/
      *((_QWORD *)&__src[3] + 1) = v50; /*0x1002477c6*/
      *(_QWORD *)&__src[4] = v51; /*0x1002477ce*/
      *(_QWORD *)&__src[0] = 1; /*0x1002477d6*/
      *((_QWORD *)&__src[0] + 1) = 1; /*0x1002477e2*/
      *(_QWORD *)&__src[1] = v27; /*0x1002477ee*/
      *((_QWORD *)&__src[1] + 1) = v31; /*0x1002477f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1002477fe*/
      v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xD0u, 8u); /*0x10024780d*/
      if ( !v32 ) /*0x100247815*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 208); /*0x100247891*/
      v33 = (unsigned __int64)v32; /*0x100247817*/
      memcpy(v32, __src, 0xD0u); /*0x10024782a*/
      v29 = a1; /*0x10024782f*/
      a1[1] = v33; /*0x100247837*/
      *a1 = 0x8000000000000025LL; /*0x100247849*/
      if ( *v37 ) /*0x10024784c*/
        goto LABEL_28; /*0x100247852*/
      return v29; /*0x100247852*/
    }
    v28 = 0x8000000000000010LL; /*0x1002475e9*/
  }
  else
  {
    v28 = 0x8000000000000000LL; /*0x1002475ef*/
    v42 = v52[2]; /*0x100247601*/
    v41 = v52[1]; /*0x100247616*/
    v39 = v52[0]; /*0x10024761b*/
  }
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc534f4fded0edcc2(v48); /*0x100247628*/
  v29 = a1; /*0x100247654*/
  a1[3] = v42; /*0x10024765c*/
  a1[2] = v41; /*0x100247660*/
  a1[1] = v39; /*0x100247664*/
  a1[4] = v46; /*0x100247678*/
  a1[5] = v47; /*0x10024767c*/
  *a1 = v28; /*0x100247680*/
  if ( *v37 ) /*0x100247683*/
LABEL_28:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10024768b*/
  return v29; /*0x1002476a0*/
}