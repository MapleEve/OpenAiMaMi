// __ZN13codexmate_lib4core5relay23codex_thread_visibility34read_session_meta_provider_anchors @ 0x100ae9cf0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::read_session_meta_provider_anchors | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::read_session_meta_provider_anchors::ha5c4d99d82c2263f(
        _QWORD *a1,
        int a2,
        int a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE v20[88]; // [rsp+10h] [rbp-180h] BYREF
  __int64 v21; // [rsp+68h] [rbp-128h]
  _QWORD v22[11]; // [rsp+70h] [rbp-120h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-C0h]
  _QWORD v25[11]; // [rsp+D8h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+130h] [rbp-60h]
  __int64 v27; // [rsp+138h] [rbp-58h]
  __int64 v28; // [rsp+140h] [rbp-50h]
  __int64 v29; // [rsp+148h] [rbp-48h]
  __int64 v30; // [rsp+150h] [rbp-40h]
  __int64 v31; // [rsp+158h] [rbp-38h]
  __int64 v32; // [rsp+160h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc(&v23); /*0x100ae9d14*/
  v6 = v24; /*0x100ae9d1f*/
  qmemcpy(v20, v25, sizeof(v20)); /*0x100ae9d39*/
  if ( (_DWORD)v23 == 1 ) /*0x100ae9d3f*/
  {
    qmemcpy(a1 + 1, v20, 0x58u); /*0x100ae9d51*/
    *a1 = v6; /*0x100ae9d54*/
    return a1; /*0x100ae9d57*/
  }
  if ( __OFSUB__(-v24, 1) ) /*0x100ae9d5f*/
  {
    a1[1] = 0x8000000000000000LL; /*0x100ae9d6e*/
    *a1 = 11; /*0x100ae9d72*/
    return a1; /*0x100ae9d79*/
  }
  v21 = v24; /*0x100ae9d7e*/
  qmemcpy(v22, v20, sizeof(v22)); /*0x100ae9d98*/
  v30 = v22[0]; /*0x100ae9dbf*/
  codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100ae9dc9*/
    (unsigned int)&v23,
    v22[0],
    v22[1],
    a2,
    a3,
    (unsigned int)"firstrouter_model_restore.json",
    5);
  v7 = v23; /*0x100ae9dce*/
  v8 = v24; /*0x100ae9dd5*/
  v9 = v25[0]; /*0x100ae9ddc*/
  v10 = v25[1]; /*0x100ae9de3*/
  if ( v23 == 11 ) /*0x100ae9dee*/
  {
    v31 = v25[0]; /*0x100ae9df4*/
    v32 = v24; /*0x100ae9df8*/
    v29 = v22[6]; /*0x100ae9e20*/
    codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100ae9e2a*/
      (unsigned int)&v23,
      v22[6],
      v22[7],
      a2,
      a3,
      (unsigned int)&unk_10167BC38,
      4);
    v11 = v23; /*0x100ae9e2f*/
    v12 = a1 + 4; /*0x100ae9e3d*/
    v26 = v24; /*0x100ae9e41*/
    v27 = v25[0]; /*0x100ae9e4c*/
    v28 = v25[1]; /*0x100ae9e57*/
    if ( v23 == 11 ) /*0x100ae9e5f*/
    {
      a1[6] = v28; /*0x100ae9e69*/
      v13 = v26; /*0x100ae9e6d*/
      a1[5] = v27; /*0x100ae9e75*/
      *v12 = v13; /*0x100ae9e79*/
      a1[1] = v32; /*0x100ae9e80*/
      a1[2] = v31; /*0x100ae9e88*/
      a1[3] = v10; /*0x100ae9e8c*/
      *a1 = 11; /*0x100ae9e90*/
    }
    else
    {
      a1[11] = v25[9]; /*0x100ae9f35*/
      a1[10] = v25[8]; /*0x100ae9f3d*/
      a1[9] = v25[7]; /*0x100ae9f45*/
      a1[8] = v25[6]; /*0x100ae9f50*/
      a1[7] = v25[5]; /*0x100ae9f5b*/
      a1[6] = v25[4]; /*0x100ae9f66*/
      v17 = v25[2]; /*0x100ae9f6a*/
      a1[5] = v25[3]; /*0x100ae9f78*/
      *v12 = v17; /*0x100ae9f7c*/
      a1[3] = v28; /*0x100ae9f83*/
      v18 = v26; /*0x100ae9f87*/
      a1[2] = v27; /*0x100ae9f8f*/
      a1[1] = v18; /*0x100ae9f93*/
      *a1 = v11; /*0x100ae9f97*/
      if ( v32 ) /*0x100ae9fa5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v32, 1); /*0x100ae9fac*/
    }
    if ( v6 ) /*0x100ae9fb4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v6, 1); /*0x100ae9fc2*/
    v15 = v22[5]; /*0x100ae9fc7*/
    if ( v22[5] ) /*0x100ae9fd1*/
    {
      v16 = v29; /*0x100ae9fd8*/
      goto LABEL_18; /*0x100ae9fd8*/
    }
  }
  else
  {
    a1[11] = v25[9]; /*0x100ae9ea0*/
    a1[10] = v25[8]; /*0x100ae9ea8*/
    a1[9] = v25[7]; /*0x100ae9eb0*/
    a1[8] = v25[6]; /*0x100ae9ebb*/
    a1[7] = v25[5]; /*0x100ae9ec6*/
    a1[6] = v25[4]; /*0x100ae9ed1*/
    v14 = v25[2]; /*0x100ae9ed5*/
    a1[5] = v25[3]; /*0x100ae9ee3*/
    a1[4] = v14; /*0x100ae9ee7*/
    a1[1] = v8; /*0x100ae9eeb*/
    a1[2] = v9; /*0x100ae9eef*/
    a1[3] = v10; /*0x100ae9ef3*/
    *a1 = v7; /*0x100ae9ef7*/
    if ( v6 ) /*0x100ae9efd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v6, 1); /*0x100ae9f0b*/
    v15 = v22[5]; /*0x100ae9f10*/
    if ( v22[5] ) /*0x100ae9f1a*/
    {
      v16 = v22[6]; /*0x100ae9f20*/
LABEL_18:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x100ae9fdc*/
    }
  }
  return a1; /*0x100ae9fe4*/
}