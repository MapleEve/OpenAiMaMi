// __ZN13codexmate_lib8commands6system23detect_api_proxy_config28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fcbb0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::detect_api_proxy_config::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7db8b2c8ea34c514(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 *v6; // rsi
  _BYTE v7[96]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD __src[22]; // [rsp+68h] [rbp-118h] BYREF
  __int64 v9; // [rsp+118h] [rbp-68h] BYREF
  __int64 v10; // [rsp+120h] [rbp-60h]
  __int64 v11; // [rsp+128h] [rbp-58h]
  __int64 v12; // [rsp+130h] [rbp-50h]
  __int64 v13; // [rsp+138h] [rbp-48h]
  __int64 v14; // [rsp+140h] [rbp-40h]
  __int64 v15; // [rsp+148h] [rbp-38h]
  __int64 v16; // [rsp+150h] [rbp-30h]
  __int64 v17; // [rsp+158h] [rbp-28h]

  codexmate_lib::commands::system::load_api_request_context_from_repo::ha1762a10040204c0(__src); /*0x1006fcbcf*/
  v3 = __src[0]; /*0x1006fcbde*/
  v15 = __src[1]; /*0x1006fcbf1*/
  v16 = __src[2]; /*0x1006fcbfc*/
  v17 = __src[3]; /*0x1006fcc07*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x1006fcc0e*/
  {
    __dst[3] = v17; /*0x1006fcc14*/
    v4 = v15; /*0x1006fcc18*/
    __dst[2] = v16; /*0x1006fcc20*/
    __dst[1] = v4; /*0x1006fcc24*/
    *__dst = 0x8000000000000000LL; /*0x1006fcc28*/
    return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fcc3d*/
  }
  else
  {
    v14 = __src[5]; /*0x1006fcc50*/
    v13 = __src[4]; /*0x1006fcc54*/
    v10 = v15; /*0x1006fcc60*/
    v11 = v16; /*0x1006fcc64*/
    v12 = v17; /*0x1006fcc6c*/
    v9 = __src[0]; /*0x1006fcc70*/
    v6 = &v9; /*0x1006fcc79*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1006fcc7d*/
      v6 = nullptr; /*0x1006fcc7d*/
    codexmate_lib::core::api_client::detect_api_proxy_config::h9f8baf0757514695(v7, v6); /*0x1006fcc88*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha86c4f1e62a7cff1((__int64)__src, v7); /*0x1006fcc9b*/
    memcpy(__dst, __src, 0xB0u); /*0x1006fccaf*/
    if ( v3 != 0x8000000000000000LL ) /*0x1006fccb7*/
    {
      if ( v3 ) /*0x1006fccbc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v3, 1); /*0x1006fccca*/
      if ( v12 ) /*0x1006fccd6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1006fcce1*/
    }
    return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fcce9*/
  }
}