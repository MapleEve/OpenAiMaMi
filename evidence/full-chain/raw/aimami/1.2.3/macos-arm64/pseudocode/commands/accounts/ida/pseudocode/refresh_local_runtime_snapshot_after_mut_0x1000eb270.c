// __ZN13codexmate_lib8commands8accounts51refresh_local_runtime_snapshot_after_mutation_async28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000eb270
char __fastcall codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$::h222848084844028a(
        __int64 *a1,
        __int64 a2,
        const void *a3)
{
  __int64 *v3; // r14
  __int64 v4; // rcx
  char v5; // of
  volatile signed __int64 *v6; // r14
  __int64 v7; // rt0
  volatile signed __int64 *v8; // r13
  __int64 v9; // rt0
  const void *v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  char result; // al
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  _BYTE v17[864]; // [rsp+0h] [rbp-1620h] BYREF
  _QWORD v18[108]; // [rsp+360h] [rbp-12C0h] BYREF
  _BYTE v19[152]; // [rsp+6C0h] [rbp-F60h] BYREF
  _QWORD v20[107]; // [rsp+758h] [rbp-EC8h] BYREF
  _BYTE __dst[136]; // [rsp+AB0h] [rbp-B70h] BYREF
  _QWORD v22[4]; // [rsp+B38h] [rbp-AE8h] BYREF
  _BYTE v23[864]; // [rsp+B58h] [rbp-AC8h] BYREF
  _BYTE *v24; // [rsp+EB8h] [rbp-768h]
  __int64 (__fastcall *v25)(); // [rsp+EC0h] [rbp-760h]
  _QWORD v26[108]; // [rsp+EC8h] [rbp-758h] BYREF
  _BYTE __src[896]; // [rsp+1228h] [rbp-3F8h] BYREF
  __int64 *v28; // [rsp+15A8h] [rbp-78h]
  __int64 v29; // [rsp+15B0h] [rbp-70h]
  __int64 (__fastcall *v30)(); // [rsp+15B8h] [rbp-68h]
  _BYTE *v31; // [rsp+15C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+15C8h] [rbp-58h]
  __int64 v33; // [rsp+15D0h] [rbp-50h]
  _BYTE *v34; // [rsp+15D8h] [rbp-48h]
  __int64 (__fastcall *v35)(); // [rsp+15E0h] [rbp-40h]
  _BYTE *v36; // [rsp+15E8h] [rbp-38h]
  const void *v37; // [rsp+15F0h] [rbp-30h]

  v18[83] = 0; /*0x1000eb284*/
  v3 = a1; /*0x1000eb296*/
  switch ( *(_BYTE *)(a2 + 504) )
  {
    case 0:
      v28 = a1; /*0x1000eb2b0*/
      v37 = a3; /*0x1000eb2b4*/
      memcpy((void *)(a2 + 168), (const void *)a2, 0x98u); /*0x1000eb2ca*/
      v4 = *(_QWORD *)(a2 + 160); /*0x1000eb2d6*/
      *(_QWORD *)(a2 + 320) = *(_QWORD *)(a2 + 152); /*0x1000eb2dd*/
      *(_QWORD *)(a2 + 328) = v4; /*0x1000eb2e4*/
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f( /*0x1000eb2f5*/
        __src,
        a2 + 168);
      v6 = *(volatile signed __int64 **)(a2 + 304); /*0x1000eb2fa*/
      v7 = _InterlockedIncrement64(v6); /*0x1000eb301*/
      if ( (v7 < 0) ^ v5 | (v7 == 0) /*0x1000eb317*/
        || (v8 = *(volatile signed __int64 **)(a2 + 312), v9 = _InterlockedIncrement64(v8), (v9 < 0) ^ v5 | (v9 == 0)) )
      {
        BUG(); /*0x1000eb6f5*/
      }
      memcpy(__dst, __src, sizeof(__dst)); /*0x1000eb333*/
      v10 = (const void *)(a2 + 336); /*0x1000eb338*/
      memcpy((void *)(a2 + 336), __dst, 0x88u); /*0x1000eb34a*/
      *(_QWORD *)(a2 + 472) = v6; /*0x1000eb34f*/
      *(_QWORD *)(a2 + 480) = v8; /*0x1000eb356*/
      v36 = (_BYTE *)(a2 + 496); /*0x1000eb364*/
      *(_BYTE *)(a2 + 496) = 0; /*0x1000eb368*/
      v3 = v28; /*0x1000eb36f*/
LABEL_7:
      memcpy(v19, v10, sizeof(v19)); /*0x1000eb3a2*/
      *(_QWORD *)(a2 + 488) = tauri::async_runtime::spawn_blocking::hdb0f7ea2cc13abf0(v19); /*0x1000eb3c1*/
LABEL_8:
      _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h7d20cc781b2b7aec(__src); /*0x1000eb3cc*/
      v11 = *(_QWORD *)__src; /*0x1000eb3e2*/
      if ( *(_QWORD *)__src == 5 ) /*0x1000eb3ed*/
      {
        *v36 = 3; /*0x1000eb42a*/
        *v3 = 4; /*0x1000eb42d*/
        result = 3; /*0x1000eb434*/
        goto LABEL_21; /*0x1000eb436*/
      }
      v37 = v10; /*0x1000eb3ef*/
      if ( *(_DWORD *)__src == 4 ) /*0x1000eb3f7*/
      {
        v33 = *(_QWORD *)&__src[24]; /*0x1000eb400*/
        v32 = *(__int64 (__fastcall **)())&__src[16]; /*0x1000eb412*/
        v31 = *(_BYTE **)&__src[8]; /*0x1000eb416*/
        v12 = 0x800000000000000CLL; /*0x1000eb41a*/
      }
      else
      {
        v12 = *(_QWORD *)&__src[8]; /*0x1000eb43b*/
        v31 = *(_BYTE **)&__src[16]; /*0x1000eb449*/
        v32 = *(__int64 (__fastcall **)())&__src[24]; /*0x1000eb454*/
        v33 = *(_QWORD *)&__src[32]; /*0x1000eb45f*/
        memcpy(v20, &__src[40], sizeof(v20)); /*0x1000eb476*/
      }
      v24 = v31; /*0x1000eb483*/
      v25 = v32; /*0x1000eb48a*/
      v26[0] = v33; /*0x1000eb495*/
      memcpy(&v26[1], v20, 0x358u); /*0x1000eb4af*/
      v14 = *(_QWORD *)(a2 + 488); /*0x1000eb4b4*/
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v14) ) /*0x1000eb4bb*/
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v14); /*0x1000eb4c7*/
      if ( (_DWORD)v11 == 4 )
      {
        *(_QWORD *)__src = v12; /*0x1000eb4d6*/
        *(_QWORD *)&__src[8] = v24; /*0x1000eb4eb*/
        *(_QWORD *)&__src[16] = v25; /*0x1000eb4f2*/
        *(_QWORD *)&__src[24] = v26[0]; /*0x1000eb500*/
        *(_QWORD *)&__src[32] = v26[1]; /*0x1000eb50e*/
        *(_QWORD *)&__src[40] = v26[2]; /*0x1000eb51c*/
        v31 = __src; /*0x1000eb52a*/
        v32 = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80; /*0x1000eb535*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          v20,
          "\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs",
          &v31);
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1000eb557*/
        v12 = v20[0]; /*0x1000eb55c*/
        v34 = (_BYTE *)v20[1]; /*0x1000eb56a*/
        v35 = (__int64 (__fastcall *)())v20[2]; /*0x1000eb575*/
        *v36 = 1; /*0x1000eb57d*/
LABEL_18:
        v30 = v35; /*0x1000eb5bd*/
        v29 = (__int64)v34; /*0x1000eb5c9*/
        v15 = a2 + 168; /*0x1000eb5cd*/
        v11 = 3; /*0x1000eb5d4*/
        goto LABEL_20; /*0x1000eb5da*/
      }
      memcpy(v18, v26, sizeof(v18)); /*0x1000eb595*/
      v34 = v24; /*0x1000eb5a8*/
      v35 = v25; /*0x1000eb5ac*/
      *v36 = 1; /*0x1000eb5b4*/
      if ( (_DWORD)v11 == 3 ) /*0x1000eb5bb*/
        goto LABEL_18; /*0x1000eb5bb*/
      memcpy(v23, v18, sizeof(v23)); /*0x1000eb5f2*/
      v22[1] = v12; /*0x1000eb5f7*/
      v22[2] = v34; /*0x1000eb606*/
      v22[3] = v35; /*0x1000eb60d*/
      v22[0] = v11; /*0x1000eb614*/
      codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1000eb63d*/
        a2 + 168,
        v22,
        *(_QWORD *)(a2 + 320),
        *(_QWORD *)(a2 + 328),
        0);
      v30 = v35; /*0x1000eb64a*/
      v29 = (__int64)v34; /*0x1000eb64e*/
      memcpy(v17, v18, sizeof(v17)); /*0x1000eb665*/
      v15 = a2 + 168; /*0x1000eb66a*/
LABEL_20:
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v15); /*0x1000eb66d*/
      *v3 = v11; /*0x1000eb672*/
      v3[1] = v12; /*0x1000eb675*/
      v16 = (__int64)v30; /*0x1000eb67d*/
      v3[2] = v29; /*0x1000eb681*/
      v3[3] = v16; /*0x1000eb685*/
      memcpy(v3 + 4, v17, 0x360u); /*0x1000eb69c*/
      result = 1; /*0x1000eb6a1*/
LABEL_21:
      *(_BYTE *)(a2 + 504) = result; /*0x1000eb6a3*/
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952B88); /*0x1000eb6ce*/
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952B88); /*0x1000eb6c2*/
    case 3:
      v36 = (_BYTE *)(a2 + 496); /*0x1000eb37c*/
      v10 = (const void *)(a2 + 336); /*0x1000eb387*/
      switch ( *(_BYTE *)(a2 + 496) ) /*0x1000eb39c*/
      {
        case 0: /*0x1000eb39c*/
          v37 = a3; /*0x1000eb39e*/
          goto LABEL_7; /*0x1000eb39e*/
        case 1: /*0x1000eb39c*/
          v37 = (const void *)(a2 + 336); /*0x1000eb6e5*/
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952AE0); /*0x1000eb6f0*/
        case 2: /*0x1000eb39c*/
          v37 = (const void *)(a2 + 336); /*0x1000eb6d3*/
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952AE0); /*0x1000eb6de*/
        case 3: /*0x1000eb39c*/
          goto LABEL_8;
      }
  }
}