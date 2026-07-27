// __ZN13codexmate_lib4core11oauth_login14run_login_flow28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000d6ef0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::oauth_login::run_login_flow::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha8e26a1604d36c99(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // r14d
  char v7; // r15
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rsi
  _QWORD v16[4]; // [rsp+8h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-58h]
  char v18; // [rsp+40h] [rbp-40h]
  char v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]

  switch ( *((_BYTE *)a1 + 64) ) /*0x1000d6f16*/
  {
    case 0: /*0x1000d6f16*/
      v16[3] = a1[3]; /*0x1000d6f1f*/
      v16[2] = a1[2]; /*0x1000d6f27*/
      v2 = *a1; /*0x1000d6f2b*/
      v16[1] = a1[1]; /*0x1000d6f32*/
      v16[0] = v2; /*0x1000d6f36*/
      *((_BYTE *)a1 + 65) = 0; /*0x1000d6f3a*/
      v17 = *((_OWORD *)a1 + 2); /*0x1000d6f42*/
      v18 = 0; /*0x1000d6f46*/
      v19 = 2; /*0x1000d6f4a*/
      v4 = _$LT$axum..serve..WithGracefulShutdown$LT$M$C$S$C$F$GT$$u20$as$u20$core..future..into_future..IntoFuture$GT$::into_future::h869d352c19990aa4(v16); /*0x1000d6f57*/
      a1[6] = v4; /*0x1000d6f5a*/
      a1[7] = v3; /*0x1000d6f5e*/
      break; /*0x1000d6f65*/
    case 1: /*0x1000d6f16*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019523A8); /*0x1000d7034*/
    case 2: /*0x1000d6f16*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019523A8); /*0x1000d7028*/
    case 3: /*0x1000d6f16*/
      v4 = a1[6]; /*0x1000d6f67*/
      v3 = a1[7]; /*0x1000d6f6b*/
      break; /*0x1000d6f6b*/
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(v3 + 24))(v4); /*0x1000d6f72*/
  v7 = 3; /*0x1000d6f75*/
  if ( (v6 & 1) == 0 ) /*0x1000d6f7c*/
  {
    v8 = v5; /*0x1000d6f7e*/
    v9 = a1[6]; /*0x1000d6f81*/
    v10 = a1[7]; /*0x1000d6f85*/
    if ( *(_QWORD *)v10 ) /*0x1000d6f89*/
      (*(void (__fastcall **)(__int64))v10)(a1[6]); /*0x1000d6f95*/
    v11 = *(_QWORD *)(v10 + 8); /*0x1000d6f97*/
    if ( v11 ) /*0x1000d6f9e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1000d6fa7*/
    v7 = 1; /*0x1000d6fb2*/
    if ( (v8 & 3) == 1 ) /*0x1000d6fb8*/
    {
      v20 = v8 - 1; /*0x1000d6fd9*/
      v13 = *(_QWORD *)(v8 - 1); /*0x1000d6fdd*/
      v14 = *(_QWORD *)(v8 + 7); /*0x1000d6fe2*/
      if ( *(_QWORD *)v14 ) /*0x1000d6fe7*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x1000d6ff3*/
      v15 = *(_QWORD *)(v14 + 8); /*0x1000d6ff5*/
      if ( v15 ) /*0x1000d6ffd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x1000d7007*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x1000d701a*/
    }
  }
  *((_BYTE *)a1 + 64) = v7; /*0x1000d6fba*/
  LOBYTE(v6) = v6 & 1; /*0x1000d6fbe*/
  return v6; /*0x1000d6fc5*/
}