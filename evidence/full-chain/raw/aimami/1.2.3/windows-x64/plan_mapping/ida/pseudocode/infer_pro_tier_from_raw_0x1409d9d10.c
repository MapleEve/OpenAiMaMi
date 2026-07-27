// module: codexmate_lib/core/plan_mapping
// addr: 0x1409d9d10
// name: infer_pro_tier_from_raw
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall infer_pro_tier_from_raw(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  unsigned __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]

  v24 = -2;
  v5 = sub_14033BC10(a1, a2);
  sub_14149A6B0(&v20, v5, v6);
  v7 = v22;
  v23 = v21;
  LOBYTE(v2) = 2;
  if ( sub_140A6C2D0(aProlite, 7u, v21, v22) || sub_140A6C2D0(aChatgptprolite, 0xEu, v23, v7) )
    goto LABEL_28;
  if ( v7 == 12 )
  {
    if ( *(_QWORD *)v23 ^ 0x69737365666F7270LL | *(unsigned int *)(v23 + 8) ^ 0x6C616E6FLL )
      goto LABEL_6;
LABEL_18:
    LOBYTE(v2) = 3;
    v13 = v20;
    if ( !v20 )
      return v2;
    goto LABEL_29;
  }
  if ( v7 == 3 && !(*(_WORD *)v23 ^ 0x7270 | *(unsigned __int8 *)(v23 + 2) ^ 0x6F) )
    goto LABEL_18;
LABEL_6:
  LOBYTE(v2) = 3;
  if ( sub_140A6C2D0(aChatgptpro, 0xAu, v23, v7) )
    goto LABEL_28;
  sub_1409D99E0(&v17, a1, a2);
  v8 = v18;
  v9 = v19;
  if ( !v19 )
  {
    LOBYTE(v2) = -1;
LABEL_26:
    if ( v17 )
      sub_140001660(v8, 24 * v17, 8);
LABEL_28:
    v13 = v20;
    if ( !v20 )
      return v2;
LABEL_29:
    sub_140001660(v23, v13, 1);
    return v2;
  }
  v10 = 24 * v19;
  v11 = 0;
  while ( *(_QWORD *)(v18 + v11 + 16) != 3
       || **(_WORD **)(v18 + v11 + 8) ^ 0x7270 | *(unsigned __int8 *)(*(_QWORD *)(v18 + v11 + 8) + 2LL) ^ 0x6F )
  {
    v11 += 24;
    if ( v10 == v11 )
    {
      LOBYTE(v2) = -1;
LABEL_21:
      v14 = (_QWORD *)(v8 + 8);
      do
      {
        v15 = *(v14 - 1);
        if ( v15 )
          sub_140001660(*v14, v15, 1);
        v14 += 3;
        --v9;
      }
      while ( v9 );
      goto LABEL_26;
    }
  }
  v12 = 0;
  do
  {
    if ( *(_QWORD *)(v18 + v12 + 16) == 3
      && !(**(_WORD **)(v18 + v12 + 8) ^ 0x3032 | *(unsigned __int8 *)(*(_QWORD *)(v18 + v12 + 8) + 2LL) ^ 0x78) )
    {
      LOBYTE(v2) = 3;
      goto LABEL_21;
    }
    v12 += 24;
  }
  while ( v10 != v12 );
  LOBYTE(v2) = 2;
  if ( (unsigned __int8)sub_1409D9970(v18, v19, (__int64)a5x, 2) )
    goto LABEL_21;
  LOBYTE(v2) = 3;
  if ( (unsigned __int8)sub_1409D9C50(v8, v9, &unk_1417A6D64) )
    goto LABEL_21;
  LOBYTE(v2) = 2;
  if ( (unsigned __int8)sub_1409D9C50(v8, v9, &unk_1417A6D67) )
    goto LABEL_21;
  sub_140009B20(&v17);
  v13 = v20;
  LOBYTE(v2) = -1;
  if ( v20 )
    goto LABEL_29;
  return v2;
}
