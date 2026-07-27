// __ZN13codexmate_lib4core5relay12proxy_server5start28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000da6b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::start::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7c78f7746f6b9c98(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // r14d
  char v8; // r12
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rsi
  _QWORD v18[4]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-98h] BYREF
  void *v20; // [rsp+30h] [rbp-90h]
  __int64 v21; // [rsp+38h] [rbp-88h]
  __int64 v22; // [rsp+40h] [rbp-80h]
  const char *v23; // [rsp+48h] [rbp-78h]
  __int64 v24; // [rsp+50h] [rbp-70h]
  __int64 v25; // [rsp+58h] [rbp-68h]
  void *v26; // [rsp+60h] [rbp-60h]
  __int64 v27; // [rsp+68h] [rbp-58h]
  __int64 v28; // [rsp+70h] [rbp-50h]
  char *v29; // [rsp+78h] [rbp-48h]
  _QWORD *v30; // [rsp+80h] [rbp-40h]
  __int64 v31; // [rsp+88h] [rbp-38h] BYREF
  _BYTE v32[41]; // [rsp+97h] [rbp-29h] BYREF

  switch ( *((_BYTE *)a1 + 74) ) /*0x1000da6d9*/
  {
    case 0: /*0x1000da6d9*/
      v22 = a1[3]; /*0x1000da6e2*/
      v21 = a1[2]; /*0x1000da6ea*/
      v2 = *a1; /*0x1000da6f1*/
      v20 = (void *)a1[1]; /*0x1000da6f8*/
      v19 = v2; /*0x1000da6ff*/
      *((_BYTE *)a1 + 75) = 0; /*0x1000da706*/
      v3 = a1[6]; /*0x1000da70e*/
      v23 = (const char *)a1[4]; /*0x1000da712*/
      v24 = v3; /*0x1000da716*/
      LOBYTE(v26) = 0; /*0x1000da71a*/
      LOBYTE(v27) = 2; /*0x1000da71e*/
      v5 = _$LT$axum..serve..WithGracefulShutdown$LT$M$C$S$C$F$GT$$u20$as$u20$core..future..into_future..IntoFuture$GT$::into_future::h3ed5d18e2e9e2c38(&v19); /*0x1000da72e*/
      a1[7] = v5; /*0x1000da731*/
      a1[8] = v4; /*0x1000da735*/
      break; /*0x1000da73c*/
    case 1: /*0x1000da6d9*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952480); /*0x1000da8fc*/
    case 2: /*0x1000da6d9*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952480); /*0x1000da8f0*/
    case 3: /*0x1000da6d9*/
      v5 = a1[7]; /*0x1000da73e*/
      v4 = a1[8]; /*0x1000da742*/
      break; /*0x1000da742*/
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v4 + 24))(v5); /*0x1000da749*/
  v8 = 3; /*0x1000da74c*/
  if ( (v7 & 1) == 0 )
  {
    v9 = v6; /*0x1000da759*/
    v10 = a1[7]; /*0x1000da75c*/
    v11 = a1[8]; /*0x1000da760*/
    if ( *(_QWORD *)v11 ) /*0x1000da764*/
      (*(void (__fastcall **)(__int64))v11)(a1[7]); /*0x1000da770*/
    v12 = *(_QWORD *)(v11 + 8); /*0x1000da772*/
    if ( v12 ) /*0x1000da779*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x1000da782*/
    *(_BYTE *)(a1[5] + 16) = 0; /*0x1000da78b*/
    if ( v9 )
    {
      v31 = v9; /*0x1000da798*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 )
      {
        v18[0] = a1 + 9; /*0x1000da7b3*/
        v18[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1000da7c1*/
        v18[2] = &v31; /*0x1000da7cc*/
        v18[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1000da7da*/
        v25 = 1; /*0x1000da7e1*/
        v26 = &unk_1015DA9BB; /*0x1000da7f0*/
        v27 = 40; /*0x1000da7f4*/
        v29 = "$[AiMaMi] relay proxy server on port \xC0\x09 exited: \xC0src/core/relay/quota.rs";
        v30 = v18; /*0x1000da80e*/
        v19 = 0; /*0x1000da812*/
        v20 = &unk_1015DA9BB; /*0x1000da81d*/
        v21 = 40; /*0x1000da824*/
        v22 = 0; /*0x1000da82f*/
        v23 = "src/core/relay/proxy_server.rs"; /*0x1000da83e*/
        v24 = 30; /*0x1000da842*/
        v28 = 0x14500000001LL; /*0x1000da854*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v32, &v19); /*0x1000da863*/
        v9 = v31; /*0x1000da868*/
      }
      if ( (v9 & 3) == 1 ) /*0x1000da875*/
      {
        v13 = v9 - 1; /*0x1000da877*/
        v14 = *(_QWORD *)(v9 - 1); /*0x1000da87b*/
        v15 = *(_QWORD *)(v9 + 7); /*0x1000da87f*/
        if ( *(_QWORD *)v15 ) /*0x1000da883*/
          (*(void (__fastcall **)(__int64))v15)(v14); /*0x1000da88e*/
        v16 = *(_QWORD *)(v15 + 8); /*0x1000da890*/
        if ( v16 ) /*0x1000da897*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1000da8a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x1000da8b2*/
      }
    }
    v8 = 1; /*0x1000da8c2*/
    if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[5]) ) /*0x1000da8be*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(a1 + 5); /*0x1000da8c7*/
  }
  *((_BYTE *)a1 + 74) = v8; /*0x1000da8cc*/
  LOBYTE(v7) = v7 & 1; /*0x1000da8d0*/
  return v7; /*0x1000da8d7*/
}