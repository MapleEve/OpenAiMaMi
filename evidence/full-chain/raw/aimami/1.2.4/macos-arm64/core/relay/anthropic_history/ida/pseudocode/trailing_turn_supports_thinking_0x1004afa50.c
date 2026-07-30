// __ZN13codexmate_lib4core5relay17anthropic_history31trailing_turn_supports_thinking @ 0x1004afa50 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::trailing_turn_supports_thinking::hd268909d37e2ebef(
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
  _QWORD v23[6]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]

  if ( !a2 /*0x1004afaa7*/
    || (v2 = a1 + 32 * a2 - 32,
        (v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
                4,
                v2)) == 0)
    || *(_BYTE *)v3 != 3
    || *(_QWORD *)(v3 + 24) != 4
    || **(_DWORD **)(v3 + 16) != 1919251317 )
  {
    LODWORD(v2) = 0; /*0x1004afaa9*/
    return (unsigned int)v2; /*0x1004afaa9*/
  }
  v26 = 0; /*0x1004afabe*/
  v27 = 8; /*0x1004afac6*/
  v28 = 0; /*0x1004aface*/
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004afae5*/
         &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
         7,
         v2);
  if ( v5 ) /*0x1004afaed*/
  {
    if ( *(_BYTE *)v5 == 4 ) /*0x1004afaf6*/
    {
      v6 = *(_QWORD *)(v5 + 24); /*0x1004afafc*/
      if ( v6 ) /*0x1004afb03*/
      {
        v2 = *(_QWORD *)(v5 + 16); /*0x1004afb09*/
        for ( i = 32 * v6; i; i -= 32 ) /*0x1004afb0d*/
        {
          v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("type", 4, v2); /*0x1004afb53*/
          if ( v10 /*0x1004afb8e*/
            && *(_BYTE *)v10 == 3
            && *(_QWORD *)(v10 + 24) == 11
            && !(**(_QWORD **)(v10 + 16) ^ 0x7365725F6C6F6F74LL
               | *(_QWORD *)(*(_QWORD *)(v10 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
          {
            v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004afba2*/
                    &unk_10166D0E3,
                    11,
                    v2);
            if ( !v11 || *(_BYTE *)v11 != 3 || !*(_QWORD *)(v11 + 24) ) /*0x1004afbb9*/
              goto LABEL_31; /*0x1004afbc0*/
            v24 = *(_QWORD *)(v11 + 24); /*0x1004afbc6*/
            v25 = *(_QWORD *)(v11 + 16); /*0x1004afbce*/
            v12 = v28; /*0x1004afbd2*/
            if ( v28 == v26 ) /*0x1004afbda*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v26); /*0x1004afbe4*/
            v8 = v27; /*0x1004afb13*/
            v9 = 16 * v12; /*0x1004afb1a*/
            *(_QWORD *)(v27 + v9) = v25; /*0x1004afb22*/
            *(_QWORD *)(v8 + v9 + 8) = v24; /*0x1004afb2a*/
            v28 = v12 + 1; /*0x1004afb32*/
          }
          v2 += 32; /*0x1004afb36*/
        }
      }
    }
  }
  if ( !v28 ) /*0x1004afbf3*/
  {
    LOBYTE(v2) = 1; /*0x1004afc68*/
    goto LABEL_34; /*0x1004afc68*/
  }
  LODWORD(v2) = 0; /*0x1004afbf5*/
  v13 = 0; /*0x1004afbff*/
  if ( a2 >= 2 ) /*0x1004afc04*/
    v13 = a2 - 2; /*0x1004afc04*/
  if ( v13 >= a2 ) /*0x1004afc0b*/
  {
LABEL_34:
    v16 = v26; /*0x1004afc6b*/
    if ( !v26 ) /*0x1004afc72*/
      return (unsigned int)v2; /*0x1004afc72*/
    goto LABEL_35; /*0x1004afc72*/
  }
  v14 = 32 * v13 + a1; /*0x1004afc11*/
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004afc23*/
          "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
          4,
          v14);
  if ( !v15 /*0x1004afccb*/
    || *(_BYTE *)v15 != 3
    || *(_QWORD *)(v15 + 24) != 9
    || **(_QWORD **)(v15 + 16) ^ 0x6E61747369737361LL | *(unsigned __int8 *)(*(_QWORD *)(v15 + 16) + 8LL) ^ 0x74LL
    || (v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                7,
                v14)) == 0
    || *(_BYTE *)v17 != 4
    || (v18 = *(_QWORD *)(v17 + 16) + 32LL * *(_QWORD *)(v17 + 24),
        v23[0] = *(_QWORD *)(v17 + 16),
        v23[1] = v18,
        v19 = v17,
        !(unsigned __int8)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hd2f0f27563b6af6a(v23)) )
  {
LABEL_31:
    LODWORD(v2) = 0; /*0x1004afc57*/
    v16 = v26; /*0x1004afc5a*/
    if ( !v26 ) /*0x1004afc61*/
      return (unsigned int)v2; /*0x1004afc61*/
    goto LABEL_35; /*0x1004afc61*/
  }
  _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h43430148f56b4ba1( /*0x1004afce7*/
    v23,
    *(_QWORD *)(v19 + 16),
    *(_QWORD *)(v19 + 16) + 32LL * *(_QWORD *)(v19 + 24));
  v20 = v27; /*0x1004afcec*/
  v21 = 16 * v28; /*0x1004afcf4*/
  do /*0x1004afd1a*/
  {
    LOBYTE(v2) = v21 == 0; /*0x1004afcff*/
    if ( !v21 ) /*0x1004afd03*/
      break; /*0x1004afd03*/
    v22 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h6d7f7a942dcd6631(v23, v20); /*0x1004afd0b*/
    v20 += 16; /*0x1004afd10*/
    v21 -= 16; /*0x1004afd14*/
  }
  while ( v22 ); /*0x1004afd1a*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5fb16db23af753ed(v23); /*0x1004afd20*/
  v16 = v26; /*0x1004afd25*/
  if ( v26 ) /*0x1004afd2c*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 16 * v16, 8); /*0x1004afc78*/
  return (unsigned int)v2; /*0x1004afaaf*/
}