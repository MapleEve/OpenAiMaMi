// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::trailing_turn_supports_thinking::h39561b9672f95954; addr: 0x100c3f5d0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:41Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::trailing_turn_supports_thinking::h39561b9672f95954(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 i; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // [rsp+0h] [rbp-80h] BYREF
  __int64 v24; // [rsp+8h] [rbp-78h]
  __int64 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+50h] [rbp-30h]

  if ( !a2 /*0x100c3f627*/
    || (v2 = a1 + 32 * a2 - 32,
        (v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "roletask-axobluedaterectMoveline",
                4,
                v2)) == 0)
    || *(_BYTE *)v3 != 3
    || *(_QWORD *)(v3 + 24) != 4
    || **(_DWORD **)(v3 + 16) != 1919251317 )
  {
    LODWORD(v2) = 0; /*0x100c3f629*/
    return (unsigned int)v2; /*0x100c3f629*/
  }
  v27 = 0; /*0x100c3f63e*/
  v28 = 8; /*0x100c3f646*/
  v29 = 0; /*0x100c3f64e*/
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f665*/
         &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
         7,
         v2);
  if ( v5 ) /*0x100c3f66d*/
  {
    if ( *(_BYTE *)v5 == 4 ) /*0x100c3f676*/
    {
      v6 = *(_QWORD *)(v5 + 24); /*0x100c3f67c*/
      if ( v6 ) /*0x100c3f683*/
      {
        v2 = *(_QWORD *)(v5 + 16); /*0x100c3f689*/
        for ( i = 32 * v6; i; i -= 32 ) /*0x100c3f68d*/
        {
          v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f6d3*/
                  &anon_859d1b4600149d0c2c9adb806d5a63b7_276,
                  4,
                  v2);
          if ( v10 /*0x100c3f70e*/
            && *(_BYTE *)v10 == 3
            && *(_QWORD *)(v10 + 24) == 11
            && !(**(_QWORD **)(v10 + 16) ^ 0x7365725F6C6F6F74LL
               | *(_QWORD *)(*(_QWORD *)(v10 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
          {
            v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f722*/
                    "tool_use_id",
                    11,
                    v2);
            if ( !v11 || *(_BYTE *)v11 != 3 || !*(_QWORD *)(v11 + 24) ) /*0x100c3f739*/
              goto LABEL_31; /*0x100c3f740*/
            v25 = *(_QWORD *)(v11 + 24); /*0x100c3f746*/
            v26 = *(_QWORD *)(v11 + 16); /*0x100c3f74e*/
            v12 = v29; /*0x100c3f752*/
            if ( v29 == v27 ) /*0x100c3f75a*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v27); /*0x100c3f764*/
            v8 = v28; /*0x100c3f693*/
            v9 = 16 * v12; /*0x100c3f69a*/
            *(_QWORD *)(v28 + v9) = v26; /*0x100c3f6a2*/
            *(_QWORD *)(v8 + v9 + 8) = v25; /*0x100c3f6aa*/
            v29 = v12 + 1; /*0x100c3f6b2*/
          }
          v2 += 32; /*0x100c3f6b6*/
        }
      }
    }
  }
  if ( !v29 ) /*0x100c3f773*/
  {
    LOBYTE(v2) = 1; /*0x100c3f7e8*/
    goto LABEL_34; /*0x100c3f7e8*/
  }
  LODWORD(v2) = 0; /*0x100c3f775*/
  v13 = 0; /*0x100c3f77f*/
  if ( a2 >= 2 ) /*0x100c3f784*/
    v13 = a2 - 2; /*0x100c3f784*/
  if ( v13 >= a2 ) /*0x100c3f78b*/
  {
LABEL_34:
    v16 = v27; /*0x100c3f7eb*/
    if ( !v27 ) /*0x100c3f7f2*/
      return (unsigned int)v2; /*0x100c3f7f2*/
    goto LABEL_35; /*0x100c3f7f2*/
  }
  v14 = 32 * v13 + a1; /*0x100c3f791*/
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f7a3*/
          "roletask-axobluedaterectMoveline",
          4,
          v14);
  if ( !v15 /*0x100c3f84b*/
    || *(_BYTE *)v15 != 3
    || *(_QWORD *)(v15 + 24) != 9
    || **(_QWORD **)(v15 + 16) ^ 0x6E61747369737361LL | *(unsigned __int8 *)(*(_QWORD *)(v15 + 16) + 8LL) ^ 0x74LL
    || (v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                7,
                v14)) == 0
    || *(_BYTE *)v17 != 4
    || (v18 = *(_QWORD *)(v17 + 16) + 32LL * *(_QWORD *)(v17 + 24),
        v23 = *(_QWORD *)(v17 + 16),
        v24 = v18,
        v19 = v17,
        !(unsigned __int8)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h1a816f2439f80308(&v23)) )
  {
LABEL_31:
    LODWORD(v2) = 0; /*0x100c3f7d7*/
    v16 = v27; /*0x100c3f7da*/
    if ( !v27 ) /*0x100c3f7e1*/
      return (unsigned int)v2; /*0x100c3f7e1*/
    goto LABEL_35; /*0x100c3f7e1*/
  }
  _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h5961f51c3898bc8e( /*0x100c3f867*/
    &v23,
    *(_QWORD *)(v19 + 16),
    *(_QWORD *)(v19 + 16) + 32LL * *(_QWORD *)(v19 + 24));
  v20 = v28; /*0x100c3f86c*/
  v21 = 16 * v29; /*0x100c3f874*/
  do /*0x100c3f89a*/
  {
    LOBYTE(v2) = v21 == 0; /*0x100c3f87f*/
    if ( !v21 ) /*0x100c3f883*/
      break; /*0x100c3f883*/
    v22 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h9174380db97379aa(&v23, v20); /*0x100c3f88b*/
    v20 += 16; /*0x100c3f890*/
    v21 -= 16; /*0x100c3f894*/
  }
  while ( v22 ); /*0x100c3f89a*/
  core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$str$GT$$GT$::h70605ac9c8268f16(v23, v24); /*0x100c3f8a4*/
  v16 = v27; /*0x100c3f8a9*/
  if ( v27 ) /*0x100c3f8b0*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 16 * v16, 8); /*0x100c3f7f8*/
  return (unsigned int)v2; /*0x100c3f62f*/
}