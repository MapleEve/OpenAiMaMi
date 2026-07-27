// __ZN13codexmate_lib4core10repository31fetch_usage_with_one_auth_retry @ 0x100a7fdb0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::fetch_usage_with_one_auth_retry | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_BYTE *__fastcall codexmate_lib::core::repository::fetch_usage_with_one_auth_retry::h7ce298249954331d(
        _BYTE *a1,
        void *a2,
        size_t a3,
        void *a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        size_t a10,
        unsigned __int8 a11)
{
  __int64 v11; // r15
  void *v15; // rax
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  void *v20; // rsi
  _QWORD *v21; // r14
  __int64 v22; // r13
  void *v23; // rax
  void *v24; // r15
  __int64 v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // r15
  _QWORD v29[12]; // [rsp+20h] [rbp-160h] BYREF
  _QWORD v30[6]; // [rsp+80h] [rbp-100h] BYREF
  _QWORD v31[12]; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+110h] [rbp-70h] BYREF
  __int64 v33; // [rsp+118h] [rbp-68h]
  __int64 v34; // [rsp+120h] [rbp-60h]
  __int64 v35; // [rsp+128h] [rbp-58h]
  __int64 v36; // [rsp+130h] [rbp-50h]
  __int64 v37; // [rsp+138h] [rbp-48h]
  void *v38; // [rsp+140h] [rbp-40h]
  __int64 v39; // [rsp+148h] [rbp-38h]
  _QWORD *v40; // [rsp+150h] [rbp-30h]

  v11 = *a5; /*0x100a7fdd1*/
  if ( ((*a5 < (__int64)0x8000000000000002LL) & a11) == 0 ) /*0x100a7fde1*/
  {
    *(_QWORD *)a1 = 11; /*0x100a7feb4*/
    *((_QWORD *)a1 + 1) = 3; /*0x100a7febb*/
LABEL_6:
    a1[96] = 0; /*0x100a7fec3*/
    return a1; /*0x100a7fec3*/
  }
  v39 = a6; /*0x100a7fde7*/
  v40 = a5; /*0x100a7fdeb*/
  v38 = a4; /*0x100a7fdfc*/
  codexmate_lib::core::auth::make_api_request_context::hf723ba8d82108568(v31, a4); /*0x100a7fe03*/
  if ( v31[0] == 0x8000000000000000LL ) /*0x100a7fe0f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, a4); /*0x100a7fe15*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1); /*0x100a7fe24*/
    if ( !v15 ) /*0x100a7fe2c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 57); /*0x100a80312*/
    qmemcpy(v15, "account credentials cannot produce an API request context", 57); /*0x100a7fe90*/
    *(_QWORD *)a1 = 9; /*0x100a7fe97*/
    *((_QWORD *)a1 + 1) = 57; /*0x100a7fe9e*/
    *((_QWORD *)a1 + 2) = v15; /*0x100a7fea6*/
    *((_QWORD *)a1 + 3) = 57; /*0x100a7feaa*/
    goto LABEL_6; /*0x100a7feb2*/
  }
  v37 = v31[5]; /*0x100a7fee3*/
  v36 = v31[4]; /*0x100a7feee*/
  v35 = v31[3]; /*0x100a7fef9*/
  v34 = v31[2]; /*0x100a7ff04*/
  v33 = v31[1]; /*0x100a7ff16*/
  v32 = v31[0]; /*0x100a7ff1a*/
  codexmate_lib::core::api_client::fetch_usage_snapshot::h48fcdb199ecb7b57(v29, &v32, v39); /*0x100a7ff2d*/
  if ( LODWORD(v29[0]) == 11 || v29[0] != 7 || LOWORD(v29[4]) != 401 ) /*0x100a7ff5d*/
    goto LABEL_19; /*0x100a7ff5d*/
  if ( v11 != 0x8000000000000000LL ) /*0x100a7ff70*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, &v32); /*0x100a800c3*/
    v22 = 45; /*0x100a800c8*/
    v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x100a800d8*/
    v21 = v40; /*0x100a800e0*/
    if ( v26 ) /*0x100a800e4*/
    {
      qmemcpy(v26, "access token was rejected after OAuth refresh", 45); /*0x100a8013a*/
      *v21 = 45; /*0x100a8013d*/
      v21[1] = v26; /*0x100a80144*/
      v25 = 45; /*0x100a80148*/
      goto LABEL_18; /*0x100a80148*/
    }
LABEL_30:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x100a80317*/
  }
  codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h554e0eb1f76208d0( /*0x100a7ffad*/
    v31,
    a2,
    a3,
    v38,
    v39,
    a7,
    a8,
    a9,
    a10,
    1);
  v17 = v40; /*0x100a7ffb2*/
  v40[2] = v31[2]; /*0x100a7ffbd*/
  v18 = v31[0]; /*0x100a7ffc1*/
  v17[1] = v31[1]; /*0x100a7ffcf*/
  *v17 = v18; /*0x100a7ffd3*/
  codexmate_lib::core::repository::log_token_refresh_outcome::h6593a802355651d2("usage_401_retry", 15, v17); /*0x100a7ffe5*/
  v19 = *v17; /*0x100a7ffea*/
  v20 = v38; /*0x100a7fffe*/
  if ( *v17 >= (__int64)0x8000000000000002LL ) /*0x100a80002*/
  {
LABEL_19:
    qmemcpy(a1, v29, 0x60u); /*0x100a80160*/
    a1[96] = 1; /*0x100a80163*/
    if ( v32 ) /*0x100a8016e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x100a80179*/
    if ( v35 ) /*0x100a80185*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100a80194*/
    return a1; /*0x100a80199*/
  }
  codexmate_lib::core::auth::make_api_request_context::hf723ba8d82108568(v31, v38); /*0x100a8000f*/
  v21 = v40; /*0x100a80014*/
  if ( v31[0] == 0x8000000000000000LL ) /*0x100a80029*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v20); /*0x100a8002f*/
    v22 = 44; /*0x100a80034*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(44, 1); /*0x100a80044*/
    if ( v23 ) /*0x100a8004c*/
    {
      v24 = v23; /*0x100a80052*/
      qmemcpy(v23, "refreshed account has no API request context", 44); /*0x100a80097*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h2a61db83e9800a58( /*0x100a800a9*/
        v19,
        v21[1]);
      *v21 = 44; /*0x100a800ae*/
      v21[1] = v24; /*0x100a800b5*/
      v25 = 44; /*0x100a800b9*/
LABEL_18:
      v21[2] = v25; /*0x100a8014d*/
      goto LABEL_19; /*0x100a8014d*/
    }
    goto LABEL_30; /*0x100a8004c*/
  }
  v30[5] = v31[5]; /*0x100a801a5*/
  v30[4] = v31[4]; /*0x100a801b3*/
  v30[3] = v31[3]; /*0x100a801c1*/
  v30[2] = v31[2]; /*0x100a801cf*/
  v30[1] = v31[1]; /*0x100a801e4*/
  v30[0] = v31[0]; /*0x100a801eb*/
  codexmate_lib::core::api_client::fetch_usage_snapshot::h48fcdb199ecb7b57(v31, v30, v39); /*0x100a80204*/
  if ( v31[0] != 11 && LODWORD(v31[0]) == 7 && LOWORD(v31[4]) == 401 ) /*0x100a8022f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v30); /*0x100a80235*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100a80244*/
    if ( !v27 ) /*0x100a8024c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x100a80330*/
    v28 = v27; /*0x100a80252*/
    qmemcpy(v27, "refreshed access token was rejected by wham/usage", 49); /*0x100a802a5*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h2a61db83e9800a58( /*0x100a802b4*/
      v19,
      v21[1]);
    *v21 = 49; /*0x100a802b9*/
    v21[1] = v28; /*0x100a802c0*/
    v21[2] = 49; /*0x100a802c4*/
  }
  qmemcpy(a1, v31, 0x60u); /*0x100a802db*/
  a1[96] = 1; /*0x100a802de*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(v30); /*0x100a802e9*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v29); /*0x100a802f5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(&v32); /*0x100a802fe*/
  return a1; /*0x100a7feca*/
}