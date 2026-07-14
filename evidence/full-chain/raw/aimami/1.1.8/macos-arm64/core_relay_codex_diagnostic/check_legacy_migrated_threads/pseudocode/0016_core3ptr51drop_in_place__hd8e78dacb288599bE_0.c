// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1004228e0 depth=1
// core3ptr51drop_in_place::hd8e78dacb288599bE_0
__int64 __fastcall core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(__int64 a1)
{
  _QWORD *v1; // r15
  sqlite3_stmt *v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  unsigned int v6; // r14d
  _OWORD v8[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]

  v1 = *(_QWORD **)a1; /*0x1004228f3*/
  v2 = *(sqlite3_stmt **)(a1 + 56); /*0x1004228f6*/
  *(_QWORD *)(a1 + 56) = 0; /*0x1004228fa*/
  v3 = *(_OWORD *)(a1 + 8); /*0x100422902*/
  *(_QWORD *)(a1 + 8) = 0; /*0x100422906*/
  *(_QWORD *)(a1 + 16) = 0; /*0x10042290e*/
  v8[0] = v3; /*0x100422916*/
  v4 = *(_OWORD *)(a1 + 24); /*0x10042291a*/
  *(_QWORD *)(a1 + 32) = 0; /*0x10042291e*/
  v8[1] = v4; /*0x100422926*/
  v5 = *(_OWORD *)(a1 + 40); /*0x10042292a*/
  *(_QWORD *)(a1 + 40) = 0; /*0x10042292e*/
  v8[2] = v5; /*0x100422936*/
  v6 = sqlite3_finalize(v2); /*0x100422942*/
  v9 = 0; /*0x100422945*/
  core::ptr::drop_in_place$LT$rusqlite..raw_statement..RawStatement$GT$::h14bbec2b1a6662df(v8); /*0x100422951*/
  if ( *v1 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100422966*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_10152FA98); /*0x1004229b0*/
  ++*v1; /*0x10042296b*/
  rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(v8, v1[2], v6); /*0x100422979*/
  --*v1; /*0x10042297e*/
  if ( *(_QWORD *)&v8[0] != 0x8000000000000016LL ) /*0x100422989*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad((__int64 *)v8); /*0x10042298f*/
  return core::ptr::drop_in_place$LT$rusqlite..raw_statement..RawStatement$GT$::h14bbec2b1a6662df(a1 + 8); /*0x10042299c*/
}