// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1403ed710 | name sub_1403ED710
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1403ED710(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  _BYTE *v8; // rbx
  _BYTE *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  signed __int64 v12; // r15
  const __m128i *v13; // r13
  __m128i *v14; // rax
  __int64 v15; // r12
  char v16; // al
  _QWORD *v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+48h] [rbp-8h]

  v4 = 0x97B425ED097B425FuLL * (unsigned __int128)(unsigned __int64)(a3 - a2);
  if ( a3 == a2 )
  {
    v19 = 0;
    v20 = 8;
    v5 = 0;
  }
  else
  {
    v18 = a1;
    v5 = *((_QWORD *)&v4 + 1) >> 7;
    v6 = 32LL * (*((_QWORD *)&v4 + 1) >> 7);
    nullsub_1(a1);
    v7 = sub_140001650(v6, 8);
    if ( !v7 )
      sub_141938D2B(8, v6);
    v19 = v5;
    v20 = v7;
    v8 = (_BYTE *)(a2 + 24);
    v9 = (_BYTE *)(v7 + 24);
    v10 = 0;
    v11 = 1;
    do
    {
      v12 = *((_QWORD *)v8 - 1);
      if ( v12 < 0 )
      {
        v11 = 0;
LABEL_12:
        sub_141938D2B(v11, v12);
      }
      if ( v12 )
      {
        v21 = v10;
        v13 = *((const __m128i **)v8 - 2);
        nullsub_1(v10);
        v14 = (__m128i *)sub_140001650(v12, 1);
        if ( !v14 )
          goto LABEL_12;
        v15 = (__int64)v14;
        sub_1418F44E0(v14, v13, v12);
        v10 = v21;
      }
      else
      {
        v15 = 1;
      }
      v16 = *v8;
      *((_QWORD *)v9 - 3) = v12;
      *((_QWORD *)v9 - 2) = v15;
      *((_QWORD *)v9 - 1) = v12;
      *v9 = v16;
      ++v10;
      v8 += 216;
      v9 += 32;
    }
    while ( v5 != v10 );
    a1 = v18;
  }
  a1[2] = v5;
  *a1 = v19;
  a1[1] = v20;
  return a1;
}
