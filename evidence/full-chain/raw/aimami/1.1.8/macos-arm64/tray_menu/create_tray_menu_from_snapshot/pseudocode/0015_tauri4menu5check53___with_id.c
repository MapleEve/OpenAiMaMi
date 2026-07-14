// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x100245540 depth=1
// tauri4menu5check53_::with_id
unsigned __int64 *__fastcall tauri::menu::check::_$LT$impl$u20$tauri..menu..CheckMenuItem$LT$R$GT$$GT$::with_id::h06ffff7828d177fb(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char a5,
        char a6,
        __int64 a7)
{
  char v9; // of
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rt0
  volatile signed __int64 *v12; // r14
  __int64 v13; // rt0
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbx
  void *v19; // rax
  void *v20; // r14
  void *v21; // rax
  void *v22; // rbx
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v26; // r14
  void *v27; // rax
  unsigned __int64 v28; // rbx
  char v29; // [rsp+43h] [rbp-565h]
  __int16 v30; // [rsp+44h] [rbp-564h]
  char v31; // [rsp+46h] [rbp-562h]
  __int64 v34; // [rsp+58h] [rbp-550h]
  __int128 v35; // [rsp+58h] [rbp-550h]
  __int64 v36; // [rsp+60h] [rbp-548h]
  __int64 v37; // [rsp+68h] [rbp-540h]
  __int64 v38; // [rsp+68h] [rbp-540h]
  char v39; // [rsp+70h] [rbp-538h]
  char v40; // [rsp+74h] [rbp-534h]
  void *v41; // [rsp+78h] [rbp-530h]
  unsigned __int64 v42; // [rsp+80h] [rbp-528h]
  unsigned __int64 v43; // [rsp+88h] [rbp-520h]
  _QWORD v44[2]; // [rsp+A8h] [rbp-500h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-4F0h]
  _QWORD v46[3]; // [rsp+C0h] [rbp-4E8h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-4D0h]
  __int64 v48; // [rsp+E0h] [rbp-4C8h]
  __int64 v49[3]; // [rsp+E8h] [rbp-4C0h] BYREF
  _OWORD __src[36]; // [rsp+100h] [rbp-4A8h] BYREF
  _QWORD v51[29]; // [rsp+340h] [rbp-268h] BYREF
  _QWORD __dst[19]; // [rsp+428h] [rbp-180h] BYREF
  _BYTE v53[136]; // [rsp+4C0h] [rbp-E8h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x100245576*/
    (__int64)__src,
    a2);
  v40 = a5; /*0x10024557b*/
  v10 = *(volatile signed __int64 **)(a2 + 136); /*0x10024557f*/
  v11 = _InterlockedIncrement64(v10); /*0x100245586*/
  if ( (v11 < 0) ^ v9 | (v11 == 0) /*0x10024559b*/
    || (v12 = *(volatile signed __int64 **)(a2 + 144), v13 = _InterlockedIncrement64(v12), (v13 < 0) ^ v9 | (v13 == 0)) )
  {
    BUG(); /*0x100245bd2*/
  }
  v39 = a6; /*0x1002455a1*/
  memcpy(__dst, __src, 0x88u); /*0x1002455bb*/
  __dst[17] = v10; /*0x1002455c0*/
  __dst[18] = v12; /*0x1002455c8*/
  *(_QWORD *)&__src[1] = a3[2]; /*0x1002455d9*/
  v14 = *a3; /*0x1002455e1*/
  *((_QWORD *)&__src[0] + 1) = a3[1]; /*0x1002455e8*/
  *(_QWORD *)&__src[0] = v14; /*0x1002455f0*/
  _$LT$tray_icon..tray_icon_id..TrayIconId$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::h2c50fd7fe8ae2288( /*0x100245608*/
    v46,
    __src);
  v15 = a4[2]; /*0x100245612*/
  if ( v15 < 0 ) /*0x100245619*/
  {
    v16 = 0; /*0x10024561b*/
    goto LABEL_5; /*0x10024561b*/
  }
  v41 = (void *)a4[1]; /*0x100245632*/
  if ( v15 ) /*0x100245637*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100245639*/
    v16 = 1; /*0x10024563e*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1u); /*0x10024564c*/
    if ( !v17 ) /*0x100245654*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x10024561e*/
    v18 = v17; /*0x100245656*/
  }
  else
  {
    v18 = 1; /*0x10024565b*/
  }
  memcpy((void *)v18, v41, v15); /*0x10024566f*/
  if ( a7 ) /*0x100245677*/
  {
    _$LT$muda..accelerator..Accelerator$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::h1ede16fb2476ba6b((__int64)__src); /*0x100245688*/
    if ( LODWORD(__src[0]) == 3 ) /*0x100245695*/
    {
      v45 = *((_QWORD *)&__src[0] + 1); /*0x10024569f*/
      v29 = __src[1]; /*0x1002456af*/
      v30 = *(_WORD *)((char *)&__src[1] + 1); /*0x1002456bb*/
      v31 = BYTE3(__src[1]); /*0x1002456c8*/
    }
    else
    {
      v29 = -41; /*0x1002456dd*/
      if ( *((_QWORD *)&__src[0] + 1) ) /*0x1002456e5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002456f4*/
    }
  }
  else
  {
    v29 = -41; /*0x1002456ce*/
  }
  *(_QWORD *)&__src[24] = 1; /*0x1002456f9*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x100245705*/
  LOBYTE(__src[25]) = 0; /*0x100245711*/
  *(_QWORD *)&__src[16] = 0; /*0x100245719*/
  BYTE8(__src[16]) = 0; /*0x100245725*/
  *(_QWORD *)&__src[17] = 0; /*0x10024572d*/
  __src[0] = 0; /*0x10024573c*/
  __src[8] = 0; /*0x100245744*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x10024574c*/
  __src[18] = 0; /*0x100245758*/
  __src[19] = 8u; /*0x100245760*/
  LOBYTE(__src[20]) = 1; /*0x100245778*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100245780*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x200u, 0x80u); /*0x10024578f*/
  if ( !v19 ) /*0x100245797*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x100245bb4*/
  v20 = v19; /*0x10024579d*/
  memcpy(v19, __src, 0x200u); /*0x1002457b0*/
  v44[0] = 1; /*0x1002457b5*/
  v44[1] = v20; /*0x1002457c1*/
  v51[21] = v46[0]; /*0x1002457d9*/
  v51[22] = v46[1]; /*0x1002457e1*/
  v51[23] = v46[2]; /*0x1002457f1*/
  v51[24] = v15; /*0x1002457f9*/
  v51[25] = v18; /*0x100245801*/
  v51[26] = v15; /*0x100245809*/
  BYTE4(v51[28]) = v40; /*0x100245815*/
  BYTE5(v51[28]) = v39; /*0x100245820*/
  v51[27] = v45; /*0x10024582f*/
  LOBYTE(v51[28]) = v29; /*0x10024583c*/
  *(_WORD *)((char *)&v51[28] + 1) = v30; /*0x100245848*/
  BYTE3(v51[28]) = v31; /*0x100245855*/
  memcpy(v51, __dst, 0x98u); /*0x100245871*/
  v51[19] = 1; /*0x100245876*/
  v51[20] = v20; /*0x100245882*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10024588a*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xE8u, 8u); /*0x100245899*/
  if ( !v21 ) /*0x1002458a1*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 232); /*0x100245ba3*/
  v22 = v21; /*0x1002458a7*/
  memcpy(v21, v51, 0xE8u); /*0x1002458ba*/
  *((_QWORD *)&__src[0] + 1) = v22; /*0x1002458bf*/
  *(_QWORD *)&__src[1] = &off_10152A7B0; /*0x1002458ce*/
  LOBYTE(__src[0]) = 28; /*0x1002458d6*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(v49, a2, __src); /*0x1002458f6*/
  if ( LODWORD(v49[0]) == 19 ) /*0x100245903*/
  {
    std::sync::mpmc::Receiver$LT$T$GT$::recv::h0dd5fb51dca8668c(__src, v44); /*0x100245915*/
    v23 = *(_QWORD *)&__src[0]; /*0x10024591a*/
    if ( *(_QWORD *)&__src[0] != 3 ) /*0x100245926*/
    {
      v26 = *((_QWORD *)&__src[0] + 1); /*0x1002459f2*/
      v35 = __src[1]; /*0x100245a02*/
      v47 = *((_QWORD *)&__src[2] + 1); /*0x100245a29*/
      v38 = *(_QWORD *)&__src[2]; /*0x100245a29*/
      v48 = *(_QWORD *)&__src[3]; /*0x100245a39*/
      memcpy(v53, (char *)&__src[3] + 8, sizeof(v53)); /*0x100245a56*/
      _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc5eea85bce534a90(v44); /*0x100245a63*/
      memcpy((char *)&__src[4] + 8, v53, 0x88u); /*0x100245ac4*/
      __src[2] = v35; /*0x100245ad9*/
      *(_QWORD *)&__src[3] = v38; /*0x100245af1*/
      *((_QWORD *)&__src[3] + 1) = v47; /*0x100245b09*/
      *(_QWORD *)&__src[4] = v48; /*0x100245b11*/
      *(_QWORD *)&__src[0] = 1; /*0x100245b19*/
      *((_QWORD *)&__src[0] + 1) = 1; /*0x100245b25*/
      *(_QWORD *)&__src[1] = v23; /*0x100245b31*/
      *((_QWORD *)&__src[1] + 1) = v26; /*0x100245b39*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100245b41*/
      v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xD0u, 8u); /*0x100245b50*/
      if ( !v27 ) /*0x100245b58*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 208); /*0x100245bcd*/
      v28 = (unsigned __int64)v27; /*0x100245b5a*/
      memcpy(v27, __src, 0xD0u); /*0x100245b6d*/
      a1[1] = v28; /*0x100245b72*/
      *a1 = 0x8000000000000025LL; /*0x100245b84*/
      if ( *a4 ) /*0x100245b87*/
        goto LABEL_23; /*0x100245b8e*/
      return a1; /*0x100245b8e*/
    }
    v24 = 0x8000000000000010LL; /*0x100245936*/
  }
  else
  {
    v24 = 0x8000000000000000LL; /*0x10024593c*/
    v37 = v49[2]; /*0x10024594e*/
    v36 = v49[1]; /*0x100245963*/
    v34 = v49[0]; /*0x100245968*/
  }
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc5eea85bce534a90(v44); /*0x100245975*/
  a1[3] = v37; /*0x1002459a1*/
  a1[2] = v36; /*0x1002459a5*/
  a1[1] = v34; /*0x1002459a9*/
  a1[4] = v42; /*0x1002459bd*/
  a1[5] = v43; /*0x1002459c1*/
  *a1 = v24; /*0x1002459c5*/
  if ( *a4 ) /*0x1002459c8*/
LABEL_23:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1002459d1*/
  return a1; /*0x1002459e3*/
}