// __ZN13codexmate_lib8commands6system21test_api_proxy_config28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fc8e0 | 基线 same-set
void __fastcall codexmate_lib::commands::system::test_api_proxy_config::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc530d4c199c77081(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // cl
  __int64 v7; // rdx
  __int64 *v8; // rdx
  _QWORD __src[18]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v10[8]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+D8h] [rbp-88h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-80h]
  __int64 v13; // [rsp+E8h] [rbp-78h]
  __int64 v14; // [rsp+F0h] [rbp-70h]
  __int64 v15; // [rsp+F8h] [rbp-68h]
  __int64 v16; // [rsp+100h] [rbp-60h]
  __int64 v17; // [rsp+108h] [rbp-58h] BYREF
  __int64 v18; // [rsp+110h] [rbp-50h]
  __int64 v19; // [rsp+118h] [rbp-48h]
  __int64 v20; // [rsp+120h] [rbp-40h]
  __int64 v21; // [rsp+128h] [rbp-38h]
  __int64 v22; // [rsp+130h] [rbp-30h]
  __int64 v23; // [rsp+138h] [rbp-28h]
  __int64 v24; // [rsp+140h] [rbp-20h]

  codexmate_lib::commands::system::load_api_request_context_from_repo::ha1762a10040204c0(__src); /*0x1006fc8fd*/
  v3 = __src[0]; /*0x1006fc90c*/
  v17 = __src[1]; /*0x1006fc91e*/
  v18 = __src[2]; /*0x1006fc929*/
  v19 = __src[3]; /*0x1006fc934*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x1006fc93b*/
  {
    __dst[3] = v19; /*0x1006fc941*/
    v4 = v17; /*0x1006fc945*/
    __dst[2] = v18; /*0x1006fc94d*/
    __dst[1] = v4; /*0x1006fc951*/
    *__dst = 0x8000000000000000LL; /*0x1006fc955*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fc95b*/
    v5 = *(_QWORD *)(a2 + 152); /*0x1006fc960*/
    if ( v5 != 0x8000000000000000LL ) /*0x1006fc96a*/
    {
      if ( v5 ) /*0x1006fc973*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 160), v5, 1); /*0x1006fc992*/
    }
  }
  else
  {
    v16 = __src[5]; /*0x1006fc9a5*/
    v15 = __src[4]; /*0x1006fc9a9*/
    v12 = v17; /*0x1006fc9b5*/
    v13 = v18; /*0x1006fc9b9*/
    v14 = v19; /*0x1006fc9c1*/
    v11 = __src[0]; /*0x1006fc9c5*/
    v6 = *(_BYTE *)(a2 + 176); /*0x1006fc9cc*/
    __src[2] = *(_QWORD *)(a2 + 168); /*0x1006fc9da*/
    v7 = *(_QWORD *)(a2 + 152); /*0x1006fc9e1*/
    __src[1] = *(_QWORD *)(a2 + 160); /*0x1006fc9ef*/
    __src[0] = v7; /*0x1006fc9f6*/
    LOBYTE(__src[3]) = v6; /*0x1006fc9fd*/
    v8 = &v11; /*0x1006fca08*/
    if ( v3 == 0x8000000000000000LL ) /*0x1006fca0f*/
      v8 = nullptr; /*0x1006fca0f*/
    codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492(v10, __src, v8); /*0x1006fca21*/
    if ( __src[0] != 0x8000000000000000LL && __src[0] ) /*0x1006fca35*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1006fca43*/
    v24 = v10[7]; /*0x1006fca4f*/
    v23 = v10[6]; /*0x1006fca5a*/
    v22 = v10[5]; /*0x1006fca65*/
    v21 = v10[4]; /*0x1006fca70*/
    v20 = v10[3]; /*0x1006fca7b*/
    v19 = v10[2]; /*0x1006fca86*/
    v18 = v10[1]; /*0x1006fca98*/
    v17 = v10[0]; /*0x1006fca9c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc85091822687b974((__int64)__src, &v17); /*0x1006fcaab*/
    memcpy(__dst, __src, 0x90u); /*0x1006fcabf*/
    if ( v11 != 0x8000000000000000LL ) /*0x1006fcace*/
    {
      if ( v11 ) /*0x1006fcad3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1006fcade*/
      if ( v14 ) /*0x1006fcaea*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x1006fcaf5*/
    }
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fcafd*/
  }
}