// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x1403e5020 | name sub_1403E5020
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1403E5020(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  const __m128i *v28; // r14
  __m128i *v29; // rax

  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 || (v5 = *(_QWORD *)(a2 + 24), v4 == v5) )
  {
LABEL_10:
    if ( *(_DWORD *)a2 == 1 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = 0;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v12 = *(_QWORD *)(v10 + 16);
        v13 = 32 * v12;
        *(_QWORD *)(a2 + 24) = 32 * v12 + v11;
        if ( v12 )
        {
          v14 = *(_QWORD *)(a2 + 48);
          v15 = *(_QWORD *)(a2 + 56);
          do
          {
            v8 = v11;
            v11 += 32;
            *(_QWORD *)(a2 + 16) = v11;
            v16 = sub_1416419F0(aType_4, 4, v8);
            if ( v16 )
            {
              if ( *(_BYTE *)v16 == 3
                && *(_QWORD *)(v16 + 24) == v15
                && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v16 + 16), v14) )
              {
                goto LABEL_29;
              }
            }
            v13 -= 32;
          }
          while ( v13 );
        }
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    *(_QWORD *)(a2 + 16) = 0;
    v17 = *(_QWORD *)(a2 + 32);
    if ( !v17 || (v18 = *(_QWORD *)(a2 + 40), v17 == v18) )
    {
LABEL_34:
      *(_QWORD *)(a2 + 32) = 0;
      *a1 = -1;
      return;
    }
    v19 = *(_QWORD *)(a2 + 48);
    v20 = *(_QWORD *)(a2 + 56);
    while ( 1 )
    {
      v8 = v17;
      v17 += 32;
      *(_QWORD *)(a2 + 32) = v17;
      v21 = sub_1416419F0(aType_4, 4, v8);
      if ( v21 )
      {
        if ( *(_BYTE *)v21 == 3
          && *(_QWORD *)(v21 + 24) == v20
          && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v21 + 16), v19) )
        {
          break;
        }
      }
      if ( v17 == v18 )
        goto LABEL_34;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 48);
    v7 = *(_QWORD *)(a2 + 56);
    while ( 1 )
    {
      v8 = v4;
      v4 += 32;
      *(_QWORD *)(a2 + 16) = v4;
      v9 = sub_1416419F0(aType_4, 4, v8);
      if ( v9 )
      {
        if ( *(_BYTE *)v9 == 3 && *(_QWORD *)(v9 + 24) == v7 && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v9 + 16), v6) )
          break;
      }
      if ( v4 == v5 )
        goto LABEL_10;
    }
  }
LABEL_29:
  v22 = sub_1416419F0(**(_QWORD **)(a2 + 64), *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL), v8);
  v24 = 1;
  if ( !v22 || *(_BYTE *)v22 != 3 )
    goto LABEL_38;
  v25 = *(_QWORD *)(v22 + 24);
  if ( v25 < 0 )
  {
    v26 = 0;
    goto LABEL_33;
  }
  if ( v25 )
  {
    v27 = *(_QWORD *)(v22 + 24);
    v28 = *(const __m128i **)(v22 + 16);
    nullsub_1(v23);
    v29 = (__m128i *)sub_140001650(v27, 1);
    v26 = 1;
    v25 = v27;
    if ( !v29 )
LABEL_33:
      sub_141938D2B(v26, v25);
    v24 = (__int64)v29;
    sub_1418F44E0(v29, v28, v27);
  }
  else
  {
LABEL_38:
    v27 = 0;
  }
  *a1 = v27;
  a1[1] = v24;
  a1[2] = v27;
}
