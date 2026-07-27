// module: codexmate_lib/core/relay/translator
// addr: 0x14031bc90
// name: sub_14031BC90
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14031BC90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r15
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+50h] [rbp+0h]

  v22 = -2;
  v4 = a2;
  if ( a2 == a3 )
    goto LABEL_7;
  while ( 1 )
  {
    v6 = v4;
    v7 = sub_141433D50(aText_10, 4, v4);
    if ( v7 )
    {
      if ( *(_BYTE *)v7 == 3 )
        break;
    }
    v4 += 32;
    if ( v6 + 32 == a3 )
      goto LABEL_7;
  }
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(v7 + 24);
  v11 = v4 + 32;
  if ( v9 )
  {
    nullsub_1(v8);
    v12 = (_QWORD *)sub_140001650(64, 8);
    if ( !v12 )
      sub_1416C2D4B(8, 64);
    v13 = v12;
    *v12 = v9;
    v12[1] = v10;
    *(_QWORD *)&v20 = 4;
    *((_QWORD *)&v20 + 1) = v12;
    v14 = 1;
LABEL_13:
    v21 = v14;
    while ( v11 != a3 )
    {
      v16 = sub_141433D50(aText_10, 4, v11);
      v11 += 32;
      if ( v16 && *(_BYTE *)v16 == 3 )
      {
        v17 = *(_QWORD *)(v16 + 16);
        v18 = *(_QWORD *)(v16 + 24);
        if ( !v17 )
          break;
        if ( v14 == (_QWORD)v20 )
        {
          sub_141688D30((unsigned int)&v20, v14, 1, 8, 16);
          v13 = *((_QWORD **)&v20 + 1);
        }
        v15 = 2 * v14;
        v13[v15] = v17;
        v13[v15 + 1] = v18;
        ++v14;
        goto LABEL_13;
      }
    }
    *(_QWORD *)(a1 + 16) = v21;
    *(_OWORD *)a1 = v20;
  }
  else
  {
LABEL_7:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}