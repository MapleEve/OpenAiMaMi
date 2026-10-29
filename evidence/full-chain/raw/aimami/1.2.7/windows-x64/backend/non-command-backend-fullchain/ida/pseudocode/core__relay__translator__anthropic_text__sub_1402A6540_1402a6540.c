// win 1.2.7 | module src/core/relay/translator/anthropic_text.rs | ea 0x1402a6540 | name sub_1402A6540
// win 1.2.7 | module src/core/relay/translator/anthropic_text.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402A6540(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r12
  void *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-E8h]
  __int128 v14; // [rsp+30h] [rbp-D8h]
  __int128 v15; // [rsp+40h] [rbp-C8h]
  __int128 v16; // [rsp+50h] [rbp-B8h]
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  __int128 v18; // [rsp+78h] [rbp-90h]
  __int128 v19; // [rsp+88h] [rbp-80h]
  __int128 v20; // [rsp+98h] [rbp-70h]
  __int128 v21; // [rsp+A8h] [rbp-60h]
  __int128 v22; // [rsp+B8h] [rbp-50h]

  v4 = sub_14036A030(a2);
  if ( !v4 )
  {
LABEL_14:
    v11 = -1;
    goto LABEL_15;
  }
  v6 = v4;
  v7 = v5;
  v8 = off_1421E7108;
  while ( 1 )
  {
    if ( !v7 )
      sub_1419390C3(0, 0, &off_1419E67D0);
    v10 = sub_1416419F0(aType_4, 4, v6);
    if ( !v10 )
      v10 = (__int64)v8;
    if ( *(_BYTE *)v10 != 3 || *(_QWORD *)(v10 + 24) != 4 || **(_DWORD **)(v10 + 16) != 1954047348 )
      goto LABEL_4;
    sub_1402B6240(&v17, v6, v7);
    if ( *((_QWORD *)&v18 + 1) )
      break;
    sub_14029EFF0(&v17);
LABEL_4:
    v6 = sub_14036A030(a2);
    v7 = v9;
    if ( !v6 )
      goto LABEL_14;
  }
  v11 = v17;
  v13 = v18;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  if ( v17 == -1 )
    goto LABEL_4;
  *(_OWORD *)(a1 + 72) = v22;
  *(_OWORD *)(a1 + 56) = v16;
  *(_OWORD *)(a1 + 40) = v15;
  *(_OWORD *)(a1 + 24) = v14;
  *(_OWORD *)(a1 + 8) = v13;
LABEL_15:
  *(_QWORD *)a1 = v11;
  return a1;
}
