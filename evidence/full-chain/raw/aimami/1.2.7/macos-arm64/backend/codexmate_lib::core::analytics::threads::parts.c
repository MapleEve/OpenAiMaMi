// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::parts::h49ab0322d258f94b; addr: 0x1008abb80; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
__int64 __fastcall codexmate_lib::core::analytics::threads::parts::h49ab0322d258f94b(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r15
  bool v5; // al
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  bool v9; // al
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  bool v13; // al
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  bool v17; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  bool v21; // al
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-38h]
  unsigned __int64 v24; // [rsp+10h] [rbp-30h]

  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("input", 5, a2); /*0x1008abba6*/
  if ( !v2 || *(_BYTE *)v2 != 2 ) /*0x1008abbb7*/
    goto LABEL_40; /*0x1008abbb7*/
  v3 = *(_QWORD *)(v2 + 8); /*0x1008abbbd*/
  if ( v3 ) /*0x1008abbc4*/
  {
    if ( (_DWORD)v3 != 1 ) /*0x1008abbc9*/
      goto LABEL_40; /*0x1008abbc9*/
    v4 = *(_QWORD *)(v2 + 16); /*0x1008abbcf*/
    v5 = 1; /*0x1008abbd3*/
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 16); /*0x1008abbd7*/
    v5 = (v4 & 0x8000000000000000LL) == 0LL; /*0x1008abbde*/
  }
  if ( v4 >> 53 != 0 || !v5 ) /*0x1008abbeb*/
    goto LABEL_40; /*0x1008abbed*/
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_10178BB1A, 6, a2); /*0x1008abc04*/
  if ( !v6 || *(_BYTE *)v6 != 2 ) /*0x1008abc15*/
    goto LABEL_40; /*0x1008abc15*/
  v7 = *(_QWORD *)(v6 + 8); /*0x1008abc1b*/
  if ( v7 ) /*0x1008abc22*/
  {
    if ( (_DWORD)v7 == 2 ) /*0x1008abc27*/
      goto LABEL_40; /*0x1008abc27*/
    v8 = *(_QWORD *)(v6 + 16); /*0x1008abc2d*/
    v9 = 1; /*0x1008abc31*/
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 16); /*0x1008abc35*/
    v9 = (v8 & 0x8000000000000000LL) == 0LL; /*0x1008abc3c*/
  }
  if ( v8 >= 0x20000000000000LL || !v9 ) /*0x1008abc4f*/
    goto LABEL_40; /*0x1008abc51*/
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008abc68*/
          "output/metadata/exit_codeisError",
          6,
          a2);
  if ( !v10 || *(_BYTE *)v10 != 2 ) /*0x1008abc79*/
    goto LABEL_40; /*0x1008abc79*/
  v11 = *(_QWORD *)(v10 + 8); /*0x1008abc7f*/
  if ( v11 ) /*0x1008abc86*/
  {
    if ( (_DWORD)v11 == 2 ) /*0x1008abc8b*/
      goto LABEL_40; /*0x1008abc8b*/
    v12 = *(_QWORD *)(v10 + 16); /*0x1008abc91*/
    v13 = 1; /*0x1008abc95*/
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 16); /*0x1008abc99*/
    v13 = (v12 & 0x8000000000000000LL) == 0LL; /*0x1008abca0*/
  }
  if ( v12 >= 0x20000000000000LL || !v13 ) /*0x1008abca9*/
    goto LABEL_40; /*0x1008abcab*/
  v24 = v12; /*0x1008abcb3*/
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("reasoning", 9, a2); /*0x1008abcc6*/
  if ( !v14 || *(_BYTE *)v14 != 2 ) /*0x1008abcd7*/
    goto LABEL_40; /*0x1008abcd7*/
  v15 = *(_QWORD *)(v14 + 8); /*0x1008abcdd*/
  if ( v15 ) /*0x1008abce4*/
  {
    if ( (_DWORD)v15 == 2 ) /*0x1008abce9*/
      goto LABEL_40; /*0x1008abce9*/
    v16 = *(_QWORD *)(v14 + 16); /*0x1008abcef*/
    v17 = 1; /*0x1008abcf3*/
  }
  else
  {
    v16 = *(_QWORD *)(v14 + 16); /*0x1008abcf7*/
    v17 = (v16 & 0x8000000000000000LL) == 0LL; /*0x1008abcfe*/
  }
  v23 = v16; /*0x1008abd01*/
  if ( v16 >= 0x20000000000000LL || !v17 ) /*0x1008abd0b*/
    goto LABEL_40; /*0x1008abd0d*/
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008abd24*/
          &anon_0868f19ff3e9f3569e732f60bdb020cc_1139,
          5,
          a2);
  if ( !v18 || *(_BYTE *)v18 != 2 ) /*0x1008abd31*/
    goto LABEL_40; /*0x1008abd31*/
  v19 = *(_QWORD *)(v18 + 8); /*0x1008abd33*/
  if ( v19 ) /*0x1008abd3a*/
  {
    if ( (_DWORD)v19 != 2 ) /*0x1008abd3f*/
    {
      v20 = *(_QWORD *)(v18 + 16); /*0x1008abd41*/
      v21 = 1; /*0x1008abd45*/
      goto LABEL_35; /*0x1008abd47*/
    }
LABEL_40:
    result = 0; /*0x1008abd9f*/
    goto LABEL_41; /*0x1008abd9f*/
  }
  v20 = *(_QWORD *)(v18 + 16); /*0x1008abd49*/
  v21 = (v20 & 0x8000000000000000LL) == 0LL; /*0x1008abd50*/
LABEL_35:
  if ( v20 >= 0x20000000000000LL || !v21 ) /*0x1008abd59*/
    goto LABEL_40; /*0x1008abd5d*/
  result = 0; /*0x1008abd5f*/
  if ( v8 <= v4 && v23 <= v24 && v4 + v24 == v20 ) /*0x1008abd7a*/
  {
    a1[1] = v4; /*0x1008abd7c*/
    a1[2] = v8; /*0x1008abd80*/
    a1[3] = v24; /*0x1008abd88*/
    a1[4] = v23; /*0x1008abd90*/
    a1[5] = v20; /*0x1008abd94*/
    result = 1; /*0x1008abd98*/
  }
LABEL_41:
  *a1 = result; /*0x1008abda1*/
  return result; /*0x1008abda4*/
}