// __ZN13codexmate_lib4core10api_client20fetch_usage_snapshot @ 0x1007b7040 | 基线 same-set
__int64 __fastcall codexmate_lib::core::api_client::fetch_usage_snapshot::h48fcdb199ecb7b57(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdx
  void *v14; // rax
  void *v15; // rax
  __int16 v16; // cx
  __int64 v18; // rdx
  void *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rdi
  char v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  _OWORD __src[11]; // [rsp+10h] [rbp-4A0h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-3F0h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-3E0h]
  __int64 v32; // [rsp+D8h] [rbp-3D8h]
  _BYTE v33[24]; // [rsp+210h] [rbp-2A0h] BYREF
  __int128 v34; // [rsp+228h] [rbp-288h] BYREF
  __int64 v35; // [rsp+238h] [rbp-278h]
  _QWORD v36[10]; // [rsp+240h] [rbp-270h] BYREF
  _BYTE v37[72]; // [rsp+290h] [rbp-220h] BYREF
  __int64 __dst[41]; // [rsp+2D8h] [rbp-1D8h] BYREF
  __int64 v39; // [rsp+420h] [rbp-90h]
  __int64 v40; // [rsp+428h] [rbp-88h]
  __int64 v41; // [rsp+430h] [rbp-80h]
  __int64 v42; // [rsp+438h] [rbp-78h]
  __int128 v43; // [rsp+440h] [rbp-70h]
  __int64 v44; // [rsp+450h] [rbp-60h]
  __int64 v45; // [rsp+458h] [rbp-58h]
  __int128 v46; // [rsp+460h] [rbp-50h] BYREF
  __int64 v47; // [rsp+470h] [rbp-40h]
  char *v48; // [rsp+478h] [rbp-38h] BYREF
  __int64 v49; // [rsp+480h] [rbp-30h]
  unsigned __int64 v50; // [rsp+488h] [rbp-28h]
  __int64 v51; // [rsp+490h] [rbp-20h]

  codexmate_lib::core::api_client::http_client::hd6199412cc486f7f((__int64)__dst, a3, a4, a5); /*0x1007b7060*/
  v6 = __dst[0]; /*0x1007b7065*/
  v30 = *(_OWORD *)&__dst[1]; /*0x1007b7073*/
  v31 = __dst[3]; /*0x1007b708f*/
  if ( __dst[0] != 11 ) /*0x1007b709a*/
  {
    *(_QWORD *)(a1 + 88) = __dst[11]; /*0x1007b7267*/
    *(_QWORD *)(a1 + 80) = __dst[10]; /*0x1007b7272*/
    *(_QWORD *)(a1 + 72) = __dst[9]; /*0x1007b727d*/
    *(_QWORD *)(a1 + 64) = __dst[8]; /*0x1007b7288*/
    *(_QWORD *)(a1 + 56) = __dst[7]; /*0x1007b7293*/
    *(_QWORD *)(a1 + 48) = __dst[6]; /*0x1007b729e*/
    v10 = __dst[4]; /*0x1007b72a2*/
    *(_QWORD *)(a1 + 40) = __dst[5]; /*0x1007b72b0*/
    *(_QWORD *)(a1 + 32) = v10; /*0x1007b72b4*/
    *(_QWORD *)(a1 + 24) = v31; /*0x1007b72bf*/
    *(_OWORD *)(a1 + 8) = v30; /*0x1007b72d5*/
    *(_QWORD *)a1 = v6; /*0x1007b72d9*/
    return a1; /*0x1007b72dc*/
  }
  v46 = v30; /*0x1007b70ae*/
  v47 = v31; /*0x1007b70bd*/
  v31 = 0x101010101010101LL; /*0x1007b70cb*/
  v30 = xmmword_1015DA050; /*0x1007b70d9*/
  reqwest::blocking::client::Client::request::h7c2f6eecf4bb7488(__dst); /*0x1007b70ff*/
  v7 = *(_QWORD *)(a2 + 32); /*0x1007b7104*/
  v8 = *(_QWORD *)(a2 + 40); /*0x1007b7108*/
  v48 = "account_idAuthorizationChatGPT-Account-IdAcceptUser-AgentAiMaMi/1.2.3"; /*0x1007b7113*/
  v49 = 10; /*0x1007b7117*/
  v50 = v7; /*0x1007b711f*/
  v51 = v8; /*0x1007b7123*/
  reqwest::blocking::request::RequestBuilder::query::h447414f572561733(&v30, __dst); /*0x1007b7139*/
  __dst[0] = a2; /*0x1007b713e*/
  __dst[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007b714c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017B931C, __dst); /*0x1007b7168*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(__dst, &v30); /*0x1007b7191*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h6eed384825c3beec(&v30, __dst); /*0x1007b71ba*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, &v30, 0); /*0x1007b71ed*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(&v30, __dst, 0); /*0x1007b7220*/
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(&v34, &v30); /*0x1007b7233*/
  if ( (_QWORD)v34 == 3 ) /*0x1007b7243*/
  {
    v9 = *((_QWORD *)&v34 + 1); /*0x1007b7249*/
    *(_QWORD *)a1 = 6; /*0x1007b7250*/
    *(_QWORD *)(a1 + 8) = v9; /*0x1007b7257*/
    goto LABEL_12; /*0x1007b725b*/
  }
  v11 = 10; /*0x1007b72fd*/
  qmemcpy((char *)&__src[1] + 8, v36, 0x50u); /*0x1007b7308*/
  qmemcpy((char *)&__src[6] + 8, v37, 0x48u); /*0x1007b731e*/
  __src[0] = v34; /*0x1007b7321*/
  *(_QWORD *)&__src[1] = v35; /*0x1007b732f*/
  if ( (unsigned __int16)(WORD4(__src[6]) - 200) >= 0x64u ) /*0x1007b7345*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v30, __dst); /*0x1007b73f5*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1007b7404*/
    if ( v15 ) /*0x1007b740c*/
    {
      qmemcpy(v15, "wham/usage", 10); /*0x1007b741c*/
      v16 = WORD4(__src[6]); /*0x1007b7425*/
      *(_QWORD *)a1 = 7; /*0x1007b742c*/
      *(_QWORD *)(a1 + 8) = 10; /*0x1007b7433*/
      *(_QWORD *)(a1 + 16) = v15; /*0x1007b743b*/
      *(_QWORD *)(a1 + 24) = 10; /*0x1007b743f*/
      *(_WORD *)(a1 + 32) = v16; /*0x1007b7447*/
      goto LABEL_11; /*0x1007b7447*/
    }
LABEL_30:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x1007b77af*/
  }
  v12 = reqwest::blocking::response::Response::content_length::hf7ed9fda65e5734e(__src); /*0x1007b7352*/
  if ( ((v13 >= 0x80001) & v12) != 0 ) /*0x1007b7363*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __dst); /*0x1007b7369*/
    v11 = 43; /*0x1007b736e*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x1007b737e*/
    if ( v14 ) /*0x1007b7386*/
    {
      qmemcpy(v14, "wham/usage response exceeded the size limit", 43); /*0x1007b73ce*/
      *(_QWORD *)a1 = 9; /*0x1007b73d8*/
      *(_QWORD *)(a1 + 8) = 43; /*0x1007b73df*/
      *(_QWORD *)(a1 + 16) = v14; /*0x1007b73e7*/
      *(_QWORD *)(a1 + 24) = 43; /*0x1007b73eb*/
LABEL_11:
      core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__src); /*0x1007b744b*/
      goto LABEL_12; /*0x1007b7452*/
    }
    goto LABEL_30; /*0x1007b7386*/
  }
  v48 = nullptr; /*0x1007b747b*/
  v49 = 1; /*0x1007b7483*/
  v50 = 0; /*0x1007b748b*/
  memcpy(__dst, __src, 0xB0u); /*0x1007b74a9*/
  __dst[22] = 524289; /*0x1007b74ae*/
  __dst[23] = 524289; /*0x1007b74b9*/
  if ( (std::io::default_read_to_end::hea609f3c6996a6a8(__dst, &v48, 0) & 1) != 0 ) /*0x1007b74d4*/
  {
    *(_QWORD *)a1 = 2; /*0x1007b74d6*/
    *(_QWORD *)(a1 + 8) = v18; /*0x1007b74dd*/
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__dst); /*0x1007b74e8*/
LABEL_22:
    v22 = v48; /*0x1007b75ec*/
    if ( !v48 ) /*0x1007b75f3*/
      goto LABEL_12; /*0x1007b75f3*/
    v23 = v49; /*0x1007b75f9*/
    goto LABEL_24; /*0x1007b75f9*/
  }
  core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__dst); /*0x1007b74f9*/
  if ( v50 > 0x80000 ) /*0x1007b7508*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &v48); /*0x1007b750e*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x1007b751d*/
    if ( !v19 ) /*0x1007b7525*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x1007b77c8*/
    qmemcpy(v19, "wham/usage response exceeded the size limit", 43); /*0x1007b756d*/
    *(_QWORD *)a1 = 9; /*0x1007b7577*/
    *(_QWORD *)(a1 + 8) = 43; /*0x1007b757e*/
    *(_QWORD *)(a1 + 16) = v19; /*0x1007b7586*/
    *(_QWORD *)(a1 + 24) = 43; /*0x1007b758a*/
    goto LABEL_22; /*0x1007b7592*/
  }
  v20 = v49; /*0x1007b7594*/
  __dst[0] = v49; /*0x1007b7598*/
  *(_OWORD *)&__dst[1] = v50; /*0x1007b759f*/
  __dst[3] = 0; /*0x1007b75b1*/
  serde_json::de::from_trait::ha73f8db442141d1f(&v30, __dst); /*0x1007b75ca*/
  if ( (_BYTE)v30 == 6 ) /*0x1007b75d8*/
  {
    v21 = *((_QWORD *)&v30 + 1); /*0x1007b75da*/
    *(_QWORD *)a1 = 3; /*0x1007b75e1*/
    *(_QWORD *)(a1 + 8) = v21; /*0x1007b75e8*/
    goto LABEL_22; /*0x1007b75e8*/
  }
  v34 = v30; /*0x1007b7618*/
  v35 = v31; /*0x1007b7632*/
  v36[0] = v32; /*0x1007b7640*/
  v24 = codexmate_lib::core::plan_mapping::parse_plan_from_usage_json::h50e4148c491ed03f((__int64)&v34); /*0x1007b7660*/
  v25 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007b7676*/
          "rate_limithttpssocks5socks5hhttps://chatgpt.com/backend-api/accounts/check/v4-2023-04-27",
          10,
          &v34);
  codexmate_lib::core::api_client::classify_windows_by_duration::hf069d579d52983ee(__dst, v25); /*0x1007b7685*/
  v26 = __dst[0]; /*0x1007b768a*/
  v43 = *(_OWORD *)&__dst[1]; /*0x1007b7698*/
  v44 = __dst[3]; /*0x1007b76ae*/
  v45 = __dst[4]; /*0x1007b76b9*/
  v27 = __dst[5]; /*0x1007b76bd*/
  v39 = __dst[6]; /*0x1007b76cb*/
  v40 = __dst[7]; /*0x1007b76d9*/
  v41 = __dst[8]; /*0x1007b76e7*/
  v42 = __dst[9]; /*0x1007b76f2*/
  if ( __dst[0] == 2 && __dst[5] == 2 && v24 == 8 ) /*0x1007b7707*/
  {
    *(_QWORD *)(a1 + 8) = 3; /*0x1007b7710*/
    *(_QWORD *)a1 = 11; /*0x1007b7718*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x1007b7726*/
    goto LABEL_22; /*0x1007b772b*/
  }
  *(_QWORD *)(a1 + 40) = v45; /*0x1007b7734*/
  *(_QWORD *)(a1 + 32) = v44; /*0x1007b773c*/
  *(_OWORD *)(a1 + 16) = v43; /*0x1007b774c*/
  v28 = v40; /*0x1007b7757*/
  *(_QWORD *)(a1 + 56) = v39; /*0x1007b775e*/
  *(_QWORD *)(a1 + 64) = v28; /*0x1007b7762*/
  *(_QWORD *)(a1 + 72) = v41; /*0x1007b776a*/
  *(_QWORD *)(a1 + 80) = v42; /*0x1007b7772*/
  *(_QWORD *)(a1 + 8) = v26; /*0x1007b7776*/
  *(_QWORD *)(a1 + 48) = v27; /*0x1007b777a*/
  *(_BYTE *)(a1 + 88) = v24; /*0x1007b777e*/
  *(_QWORD *)a1 = 11; /*0x1007b7782*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x1007b7790*/
  v22 = v48; /*0x1007b7795*/
  if ( v48 ) /*0x1007b779c*/
  {
    v23 = v20; /*0x1007b77a7*/
LABEL_24:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1007b7602*/
  }
LABEL_12:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v46) ) /*0x1007b745b*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v46); /*0x1007b7465*/
  return a1; /*0x1007b746d*/
}