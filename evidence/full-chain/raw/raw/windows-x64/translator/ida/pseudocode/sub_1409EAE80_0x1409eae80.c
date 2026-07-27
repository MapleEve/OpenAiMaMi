// module: codexmate_lib/core/relay/translator
// addr: 0x1409eae80
// name: sub_1409EAE80
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409EAE80(unsigned __int64 *a1, unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  unsigned __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+50h] [rbp+0h]

  v17 = -2;
  v2 = *a2;
  if ( v2 == 3 )
    return sub_14149C500(a1, a2 + 8);
  if ( v2 == 4 )
  {
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v3 = *((_QWORD *)a2 + 3);
    if ( v3 )
    {
      v4 = *((_QWORD *)a2 + 2);
      v5 = 32 * v3;
      v6 = 1;
      v7 = 0;
      do
      {
        v8 = sub_141433D50(aText_10, 4, v4);
        if ( !v8 || *(_BYTE *)v8 != 3 )
          goto LABEL_7;
        v9 = *(_QWORD *)(v8 + 16);
        v10 = *(_QWORD *)(v8 + 24);
        if ( v7 )
        {
          if ( v14 == v7 )
          {
            sub_141688D30((unsigned int)&v14, v7, 1, 1, 1);
            v6 = v15;
          }
          *(_BYTE *)(v6 + v7) = 10;
          v11 = v7 + 1;
          v16 = v11;
          if ( v10 <= v14 - v11 )
          {
LABEL_14:
            if ( !v10 )
              goto LABEL_6;
            goto LABEL_5;
          }
        }
        else
        {
          v11 = 0;
          if ( v10 <= v14 )
            goto LABEL_14;
        }
        sub_141688D30((unsigned int)&v14, v11, v10, 1, 1);
        v11 = v16;
LABEL_5:
        v6 = v15;
        sub_141684120(v15 + v11, v9, v10);
LABEL_6:
        v7 = v10 + v11;
        v16 = v7;
LABEL_7:
        v4 += 32;
        v5 -= 32;
      }
      while ( v5 );
    }
    a1[2] = v16;
    *a1 = v14;
    result = v15;
    a1[1] = v15;
  }
  else
  {
    *a1 = -1;
    return (__int64)a1;
  }
  return result;
}