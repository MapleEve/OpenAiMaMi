// __ZN13codexmate_lib8commands7hotspot9has_notch @ 0x1006ff890 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::has_notch::h1dc669b3354b85b6(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4)
{
  void *v5; // rax
  void *v6; // r15
  void *v7; // rdi
  _QWORD *v8; // rax
  char v9; // al
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 *v13; // [rsp+28h] [rbp-2F0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-2E8h]
  unsigned __int64 v15; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-2D0h]
  __int64 v17; // [rsp+50h] [rbp-2C8h]
  unsigned __int64 v18; // [rsp+58h] [rbp-2C0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-2B8h]
  __int64 v20; // [rsp+68h] [rbp-2B0h]
  _QWORD v21[2]; // [rsp+70h] [rbp-2A8h] BYREF
  _OWORD __src[41]; // [rsp+80h] [rbp-298h] BYREF

  *(_QWORD *)&__src[24] = 1; /*0x1006ff8aa*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x1006ff8b6*/
  LOBYTE(__src[25]) = 0; /*0x1006ff8c2*/
  *(_QWORD *)&__src[16] = 0; /*0x1006ff8ca*/
  BYTE8(__src[16]) = 0; /*0x1006ff8d6*/
  *(_QWORD *)&__src[17] = 0; /*0x1006ff8de*/
  __src[0] = 0; /*0x1006ff8ed*/
  __src[8] = 0; /*0x1006ff8f5*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x1006ff8fd*/
  __src[18] = 0; /*0x1006ff909*/
  __src[19] = 8u; /*0x1006ff911*/
  LOBYTE(__src[20]) = 1; /*0x1006ff929*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1006ff931*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1006ff940*/
  if ( !v5 ) /*0x1006ff948*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1006ffb80*/
  v6 = v5; /*0x1006ff94e*/
  v7 = v5; /*0x1006ff95e*/
  memcpy(v5, __src, 0x200u); /*0x1006ff961*/
  v21[0] = 1; /*0x1006ff966*/
  v21[1] = v6; /*0x1006ff96f*/
  *(_QWORD *)&__src[0] = 1; /*0x1006ff974*/
  *((_QWORD *)&__src[0] + 1) = v6; /*0x1006ff980*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, __src); /*0x1006ff988*/
  v8 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8); /*0x1006ff997*/
  if ( !v8 ) /*0x1006ff99f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x1006ffb91*/
  *v8 = 1; /*0x1006ff9a5*/
  v8[1] = v6; /*0x1006ff9ac*/
  *((_QWORD *)&__src[0] + 1) = v8; /*0x1006ff9b0*/
  *(_QWORD *)&__src[1] = &anon_0df76e0cec988e6dc281ac0519b88803_1240; /*0x1006ff9bf*/
  LOBYTE(__src[0]) = 28; /*0x1006ff9c7*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v13, a2, __src, 0.0, a4); /*0x1006ff9e2*/
  if ( (_DWORD)v13 == 19 ) /*0x1006ff9ec*/
  {
    v9 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h3487ac109d399d4a(v21); /*0x1006ff9f7*/
    if ( v9 != 2 ) /*0x1006ff9fe*/
    {
      *(_BYTE *)(a1 + 8) = v9; /*0x1006ffb45*/
      v10 = 0x8000000000000000LL; /*0x1006ffb49*/
      goto LABEL_11; /*0x1006ffb49*/
    }
    v13 = nullptr; /*0x1006ffa04*/
    v14 = 1u; /*0x1006ffa0d*/
    *(_QWORD *)&__src[1] = 1610612768; /*0x1006ffa1f*/
    *(_QWORD *)&__src[0] = &v13; /*0x1006ffa2b*/
    *((_QWORD *)&__src[0] + 1) = &off_101969DD0; /*0x1006ffa3a*/
    if ( (unsigned __int8)_$LT$std..sync..mpsc..RecvError$u20$as$u20$core..fmt..Display$GT$::fmt::hcd82020675edb4c1( /*0x1006ffa4f*/
                            &v15,
                            __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v15, &unk_101969E38, &off_101969E00); /*0x1006ffbdd*/
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v14 + 1); /*0x1006ffa61*/
    v10 = (unsigned __int64)v13; /*0x1006ffa65*/
    v11 = v14; /*0x1006ffa6a*/
  }
  else
  {
    __src[1] = v14; /*0x1006ffa8b*/
    *((_QWORD *)&__src[0] + 1) = v13; /*0x1006ffa93*/
    *(_QWORD *)&__src[0] = 0x8000000000000000LL; /*0x1006ffaa5*/
    v18 = 0; /*0x1006ffaad*/
    v19 = 1; /*0x1006ffab6*/
    v20 = 0; /*0x1006ffabf*/
    *((_QWORD *)&v14 + 1) = 1610612768; /*0x1006ffac8*/
    v13 = &v18; /*0x1006ffad6*/
    *(_QWORD *)&v14 = &off_101969DD0; /*0x1006ffae2*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006ffaf4*/
                            __src,
                            &v13) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v15, &unk_101969E38, &off_101969E00); /*0x1006ffbb7*/
    v15 = v18; /*0x1006ffb0b*/
    v16 = v19; /*0x1006ffb10*/
    v17 = v20; /*0x1006ffb1a*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006ffb27*/
    *(_QWORD *)(a1 + 16) = v17; /*0x1006ffb31*/
    v10 = v15; /*0x1006ffb35*/
    v11 = v16; /*0x1006ffb3a*/
  }
  *(_QWORD *)(a1 + 8) = v11; /*0x1006ffb3f*/
LABEL_11:
  *(_QWORD *)a1 = v10; /*0x1006ffb53*/
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h21c9b20ea20a84bf(v21); /*0x1006ffb5b*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006ffb63*/
  return a1; /*0x1006ffb6b*/
}