// __ZN13codexmate_lib4core10repository43registry_item_has_switchable_oauth_snapshot @ 0x100a83350 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::registry_item_has_switchable_oauth_snapshot::hd43515d789da488a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 *v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r15
  const void *v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v18[19]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v19[12]; // [rsp+A0h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+100h] [rbp-40h] BYREF
  __int64 v21; // [rsp+110h] [rbp-30h]

  v21 = a3; /*0x100a83364*/
  v6 = a1[25]; /*0x100a8336e*/
  v7 = a1[26]; /*0x100a83375*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v18, v6, v7, &anon_155c4da9b5393270cfa7378e2b52c417_108, 2); /*0x100a83399*/
  v8 = v19; /*0x100a8339e*/
  v9 = v18; /*0x100a833a5*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100a833a8*/
    v19,
    v18);
  if ( LODWORD(v19[0]) == 1 ) /*0x100a833b4*/
  {
    v8 = (_QWORD *)v19[2]; /*0x100a833b6*/
    if ( v7 - v19[2] == 36 ) /*0x100a833c4*/
    {
      v10 = v19[1]; /*0x100a833c6*/
      v8 = (_QWORD *)(v6 + v19[2]); /*0x100a833cd*/
      v9 = (__int64 *)&anon_155c4da9b5393270cfa7378e2b52c417_258; /*0x100a833d0*/
      if ( memcmp((const void *)(v6 + v19[2]), &anon_155c4da9b5393270cfa7378e2b52c417_258, 0x24u) == 0 /*0x100a83409*/
        && v10 >= 7
        && !(*(_DWORD *)(v6 + v10 - 7) ^ anon_155c4da9b5393270cfa7378e2b52c417_259
           | *(_DWORD *)(v6 + v10 - 4) ^ *(int *)((char *)&anon_155c4da9b5393270cfa7378e2b52c417_259 + 3)) )
      {
LABEL_26:
        LODWORD(v11) = 0; /*0x100a835be*/
        return (unsigned int)v11; /*0x100a835be*/
      }
    }
  }
  v11 = a1[29]; /*0x100a8340f*/
  if ( v11 < 0 ) /*0x100a83419*/
  {
    v12 = 0; /*0x100a8341b*/
    goto LABEL_7; /*0x100a8341b*/
  }
  v13 = (const void *)a1[28]; /*0x100a83429*/
  if ( v11 ) /*0x100a83430*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9); /*0x100a83432*/
    v12 = 1; /*0x100a83437*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x100a83445*/
    if ( !v14 ) /*0x100a8344d*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x100a8341e*/
    v15 = v14; /*0x100a8344f*/
  }
  else
  {
    v15 = 1; /*0x100a83454*/
  }
  memcpy((void *)v15, v13, v11); /*0x100a83463*/
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(v18, (void *)v15, v11, a2, v21); /*0x100a8347c*/
  if ( LODWORD(v18[0]) != 11 ) /*0x100a83488*/
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x100a834d6*/
    if ( v19[0] == 11 ) /*0x100a834e1*/
      goto LABEL_18; /*0x100a834e1*/
LABEL_24:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v19); /*0x100a8359d*/
    if ( v11 ) /*0x100a835ac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v11, 1); /*0x100a835b9*/
    goto LABEL_26; /*0x100a835b9*/
  }
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v18, v15, v11); /*0x100a83497*/
  if ( LODWORD(v18[0]) == 1 ) /*0x100a834aa*/
  {
    v19[0] = 2; /*0x100a834ac*/
    v19[1] = v18[1]; /*0x100a834b7*/
    goto LABEL_24; /*0x100a834be*/
  }
  if ( (v18[1] & 0xF00000000000LL) != 0x800000000000LL ) /*0x100a83502*/
  {
    v20[0] = v15; /*0x100a83557*/
    v20[1] = v11; /*0x100a8355b*/
    v18[0] = (__int64)v20; /*0x100a83563*/
    v18[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a83571*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19[1], &anon_155c4da9b5393270cfa7378e2b52c417_254, v18); /*0x100a8358d*/
    v19[0] = 9; /*0x100a83592*/
    goto LABEL_24; /*0x100a83592*/
  }
LABEL_18:
  codexmate_lib::core::repository::load_switchable_account_snapshot::h5aef4a5b1b611d9d(v18, v15, v11, a4); /*0x100a83504*/
  v16 = v18[0]; /*0x100a83516*/
  if ( v11 ) /*0x100a83520*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v11, 1); /*0x100a8352d*/
  LOBYTE(v11) = v16 != 2; /*0x100a83536*/
  if ( v16 == 2 ) /*0x100a83539*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v18[1]); /*0x100a83542*/
  else
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v18); /*0x100a83550*/
  return (unsigned int)v11; /*0x100a835c2*/
}