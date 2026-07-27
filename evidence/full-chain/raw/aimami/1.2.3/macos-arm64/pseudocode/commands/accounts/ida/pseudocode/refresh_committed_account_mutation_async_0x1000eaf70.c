// __ZN13codexmate_lib8commands8accounts40refresh_committed_account_mutation_async28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000eaf70
bool __fastcall codexmate_lib::commands::accounts::refresh_committed_account_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$::h9bc601a9fe98a7e9(
        char *__src,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  char v8; // r14
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD __dst[107]; // [rsp+0h] [rbp-730h] BYREF
  __int64 v14; // [rsp+358h] [rbp-3D8h] BYREF
  __int64 v15; // [rsp+360h] [rbp-3D0h]
  __int64 v16; // [rsp+368h] [rbp-3C8h]
  __int64 v17; // [rsp+370h] [rbp-3C0h]
  _QWORD __srca[107]; // [rsp+378h] [rbp-3B8h] BYREF
  __int64 v19; // [rsp+6D0h] [rbp-60h]
  __int64 v20; // [rsp+6D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+6E0h] [rbp-50h]
  __int64 v22; // [rsp+6E8h] [rbp-48h]
  __int64 v23; // [rsp+6F0h] [rbp-40h]
  __int64 v24; // [rsp+6F8h] [rbp-38h]
  __int64 v25; // [rsp+700h] [rbp-30h]
  __int64 v26; // [rsp+708h] [rbp-28h]

  switch ( __src[760] ) /*0x1000eaf9d*/
  {
    case 0: /*0x1000eaf9d*/
      v2 = *((_QWORD *)__src + 21); /*0x1000eaf9f*/
      *((_OWORD *)__src + 13) = *(_OWORD *)(__src + 152); /*0x1000eafad*/
      *((_QWORD *)__src + 28) = v2; /*0x1000eafb4*/
      v3 = *((_QWORD *)__src + 23); /*0x1000eafc2*/
      *((_QWORD *)__src + 29) = *((_QWORD *)__src + 22); /*0x1000eafc9*/
      *((_QWORD *)__src + 30) = v3; /*0x1000eafd0*/
      v4 = *((_QWORD *)__src + 24); /*0x1000eafd7*/
      v5 = *((_QWORD *)__src + 25); /*0x1000eafde*/
      memcpy(__src + 248, __src, 0x98u); /*0x1000eaff4*/
      *((_QWORD *)__src + 50) = v4; /*0x1000eaff9*/
      *((_QWORD *)__src + 51) = v5; /*0x1000eb000*/
      __src[752] = 0; /*0x1000eb007*/
      break; /*0x1000eb007*/
    case 1: /*0x1000eaf9d*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952B58); /*0x1000eb20c*/
    case 2: /*0x1000eaf9d*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952B58); /*0x1000eb200*/
    case 3: /*0x1000eaf9d*/
      break;
  }
  v6 = __src + 248; /*0x1000eb00e*/
  codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$::h222848084844028a( /*0x1000eb022*/
    &v14,
    __src + 248,
    a2);
  v7 = v14; /*0x1000eb027*/
  if ( v14 == 4 ) /*0x1000eb032*/
  {
    v8 = 3; /*0x1000eb034*/
    goto LABEL_23; /*0x1000eb037*/
  }
  v26 = v17; /*0x1000eb043*/
  v25 = v16; /*0x1000eb055*/
  v24 = v15; /*0x1000eb059*/
  memcpy(__dst, __srca, sizeof(__dst)); /*0x1000eb070*/
  v9 = v19; /*0x1000eb075*/
  if ( __src[752] == 3 ) /*0x1000eb083*/
  {
    if ( __src[744] == 3 ) /*0x1000eb095*/
    {
      v10 = *((_QWORD *)__src + 92); /*0x1000eb0a9*/
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v10) ) /*0x1000eb0b3*/
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v10); /*0x1000eb0bf*/
    }
    else if ( !__src[744] ) /*0x1000eb08b*/
    {
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src + 584); /*0x1000eb0a2*/
    }
    v6 = __src + 416; /*0x1000eb0c4*/
  }
  else if ( __src[752] ) /*0x1000eb079*/
  {
    goto LABEL_15; /*0x1000eb087*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v6); /*0x1000eb0ce*/
LABEL_15:
  if ( (_DWORD)v7 == 3 ) /*0x1000eb0d7*/
  {
    v23 = v26; /*0x1000eb0dd*/
    v22 = v25; /*0x1000eb0e9*/
    v21 = v24; /*0x1000eb0ed*/
    v11 = 1; /*0x1000eb0f1*/
  }
  else
  {
    v14 = v7; /*0x1000eb0fb*/
    v15 = v24; /*0x1000eb10a*/
    v16 = v25; /*0x1000eb111*/
    v17 = v26; /*0x1000eb11c*/
    memcpy(__srca, __dst, sizeof(__srca)); /*0x1000eb136*/
    v19 = v9; /*0x1000eb13b*/
    if ( __srca[98] ) /*0x1000eb149*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__srca[99], __srca[98], 1); /*0x1000eb157*/
    if ( __srca[101] ) /*0x1000eb166*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__srca[102], __srca[101], 1); /*0x1000eb174*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(&v14); /*0x1000eb180*/
    v21 = __dst[104]; /*0x1000eb193*/
    v22 = __dst[105]; /*0x1000eb197*/
    v23 = __dst[106]; /*0x1000eb1a2*/
    v11 = 0; /*0x1000eb1a6*/
  }
  v20 = v11; /*0x1000eb1a8*/
  v8 = 1; /*0x1000eb1cf*/
  codexmate_lib::commands::accounts::merge_post_commit_refresh_result::hb0d323861eebb4ff( /*0x1000eb1d6*/
    *((_QWORD *)__src + 26),
    &v20,
    *((_QWORD *)__src + 27),
    *((_QWORD *)__src + 28),
    *((_QWORD *)__src + 29),
    *((_QWORD *)__src + 30));
LABEL_23:
  __src[760] = v8; /*0x1000eb1db*/
  return (_DWORD)v7 == 4; /*0x1000eb1e9*/
}