// mac 1.1.8 behavioral persist_account_auth 0x1005225f0 d=1
__int64 __fastcall codexmate_lib::core::account_io::read_active_account_key::h586215c6cc58c2dd(
        __int64 *a1,
        const void *a2,
        size_t a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-108h] BYREF
  __int64 v15; // [rsp+10h] [rbp-100h]
  __int64 v16; // [rsp+18h] [rbp-F8h]
  __int64 v17; // [rsp+20h] [rbp-F0h]
  __int64 v18; // [rsp+28h] [rbp-E8h]
  __int64 v19; // [rsp+30h] [rbp-E0h]
  _QWORD v20[14]; // [rsp+A0h] [rbp-70h] BYREF

  std::sys::fs::metadata::h32fa16d3052ea535(&v14, a2, a3); /*0x100522614*/
  if ( (_DWORD)v14 == 1 ) /*0x100522620*/
  {
    if ( (v15 & 3) == 1 ) /*0x100522631*/
    {
      v4 = *(_QWORD *)(v15 + 7); /*0x10052263b*/
      if ( *(_QWORD *)v4 ) /*0x10052263f*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v15 - 1)); /*0x10052264b*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x10052264d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052265f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522671*/
    }
    *a1 = 0x8000000000000000LL; /*0x100522680*/
    return 0x8000000000000000LL; /*0x100522683*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v14, a2, a3); /*0x10052269f*/
  v6 = v14; /*0x1005226a4*/
  if ( __OFSUB__(-v14, 1) ) /*0x1005226ae*/
  {
    result = v15; /*0x1005226b3*/
    if ( (v15 & 3) == 1 ) /*0x1005226c2*/
    {
      v7 = *(_QWORD *)(v15 + 7); /*0x1005226cc*/
      if ( *(_QWORD *)v7 ) /*0x1005226d0*/
        (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v15 - 1)); /*0x1005226dc*/
      if ( *(_QWORD *)(v7 + 8) ) /*0x1005226de*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005226f0*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522702*/
    }
    *a1 = 0x8000000000000000LL; /*0x100522707*/
    return result; /*0x10052270a*/
  }
  v8 = v15; /*0x10052270f*/
  v20[0] = v15; /*0x10052271d*/
  v20[1] = v16; /*0x100522721*/
  v20[2] = 0; /*0x100522725*/
  v20[3] = 0; /*0x10052272d*/
  v20[4] = v15; /*0x100522735*/
  v20[5] = v16; /*0x100522739*/
  serde_json::de::from_trait::hfff73d54d71a8a9a(&v14, v20); /*0x100522748*/
  v9 = v14; /*0x10052274d*/
  if ( v14 == 0x8000000000000000LL ) /*0x100522757*/
  {
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..RegistryFile$C$serde_json..error..Error$GT$$GT$::hc1281579798507d5(&v14); /*0x100522760*/
    *a1 = 0x8000000000000000LL; /*0x100522765*/
    if ( !v6 ) /*0x10052276b*/
      return result; /*0x10052276b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052276b*/
  }
  v20[7] = v8; /*0x10052277e*/
  v10 = v15; /*0x100522782*/
  v11 = v16; /*0x100522789*/
  a1[2] = v19; /*0x100522797*/
  a1[1] = v18; /*0x1005227a2*/
  result = v17; /*0x1005227a6*/
  *a1 = v17; /*0x1005227ad*/
  v12 = v11 + 1; /*0x1005227b3*/
  v13 = v10; /*0x1005227b6*/
  while ( v12 != 1 ) /*0x1005227c4*/
  {
    --v12; /*0x1005227cd*/
    result = core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h3ff0f72072d7b435(v13); /*0x1005227d0*/
    v13 += 360; /*0x1005227d5*/
  }
  if ( v9 ) /*0x1005227dd*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005227ee*/
  if ( v6 ) /*0x1005227fa*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522801*/
  return result; /*0x100522809*/
}