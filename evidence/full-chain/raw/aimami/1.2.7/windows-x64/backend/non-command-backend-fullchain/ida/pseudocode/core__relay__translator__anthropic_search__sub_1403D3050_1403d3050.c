// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | ea 0x1403d3050 | name sub_1403D3050
// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_1403D3050(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  void *v6; // r15
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  signed __int64 v11; // r15
  __int64 v12; // rcx
  const __m128i *v14; // r14
  __m128i *v15; // rax
  signed __int64 *v16; // rax
  signed __int64 *v17; // r14
  __int64 v18; // rbx
  void *v19; // r15
  __int64 v20; // rax
  const __m128i *v21; // r8
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128i *v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  signed __int64 *v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h]
  const __m128i *v34; // [rsp+50h] [rbp-10h]
  const __m128i *v35; // [rsp+58h] [rbp-8h]
  __int64 v36; // [rsp+60h] [rbp+0h]

  v36 = -2;
  if ( a2 == a3 )
  {
LABEL_15:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  else
  {
    v5 = a2;
    v6 = off_1421E7108;
    while ( 1 )
    {
      v7 = sub_1416419F0(aType_3, 4, v5);
      if ( !v7 )
        v7 = (__int64)v6;
      if ( *(_BYTE *)v7 == 3 && *(_QWORD *)(v7 + 24) == 8 && **(_QWORD **)(v7 + 16) == unk_1419D7CAA )
        break;
      v5 += 32;
      if ( v5 == a3 )
        goto LABEL_15;
    }
    v8 = (void *)sub_1416419F0(aId_2, 2, v5);
    if ( !v8 )
      v8 = off_1421E7108;
    v10 = 1;
    if ( *(_BYTE *)v8 != 3 )
      goto LABEL_20;
    v11 = *((_QWORD *)v8 + 3);
    if ( v11 < 0 )
    {
      v12 = 0;
      goto LABEL_14;
    }
    if ( v11 )
    {
      v14 = *((const __m128i **)v8 + 2);
      nullsub_1(v9);
      v15 = (__m128i *)sub_140001650(v11, 1);
      v12 = 1;
      if ( !v15 )
LABEL_14:
        sub_141938D2B(v12, v11);
      v10 = (__int64)v15;
      sub_1418F44E0(v15, v14, v11);
    }
    else
    {
LABEL_20:
      v11 = 0;
    }
    nullsub_1(v9);
    v16 = (signed __int64 *)sub_140001650(96, 8);
    if ( !v16 )
    {
      v34 = (const __m128i *)v10;
      v33 = v11;
      sub_141938D2B(8, 96);
    }
    v17 = v16;
    v18 = v5 + 32;
    *v16 = v11;
    v16[1] = v10;
    v16[2] = v11;
    v30 = 4;
    v31 = v16;
    v32 = 1;
    if ( v18 != a3 )
    {
      v33 = 1;
      v19 = off_1421E7108;
      do
      {
        v22 = v18;
        v23 = sub_1416419F0(aType_3, 4, v18);
        if ( !v23 )
          v23 = (__int64)v19;
        v18 += 32;
        if ( *(_BYTE *)v23 == 3 && *(_QWORD *)(v23 + 24) == 8 && **(_QWORD **)(v23 + 16) == unk_1419D7CAA )
        {
          v24 = sub_1416419F0(aId_2, 2, v22);
          if ( !v24 )
            v24 = (__int64)v19;
          if ( *(_BYTE *)v24 != 3 )
            goto LABEL_38;
          v25 = *(_QWORD *)(v24 + 24);
          if ( v25 < 0 )
          {
            v29 = 0;
            goto LABEL_43;
          }
          v35 = *(const __m128i **)(v24 + 24);
          if ( v25 )
          {
            v34 = *(const __m128i **)(v24 + 16);
            nullsub_1(v25);
            v26 = (__m128i *)sub_140001650(v35, 1);
            if ( !v26 )
            {
              v34 = v35;
              v29 = 1;
LABEL_43:
              sub_141938D2B(v29, v34);
            }
            v27 = (__int64)v26;
            sub_1418F44E0(v26, v34, (unsigned __int64)v35);
          }
          else
          {
LABEL_38:
            v27 = 1;
            v35 = nullptr;
          }
          v34 = (const __m128i *)v27;
          v28 = v33;
          if ( v33 == v30 )
          {
            sub_14190D590((unsigned int)&v30, v33, 1, 8, 24);
            v17 = v31;
            v28 = v33;
          }
          v20 = 3 * v28;
          v21 = v35;
          v17[v20] = (signed __int64)v35;
          v17[v20 + 1] = (signed __int64)v34;
          v17[v20 + 2] = (signed __int64)v21;
          v33 = v28 + 1;
          v32 = v28 + 1;
        }
      }
      while ( v18 != a3 );
    }
    a1[2] = v32;
    *a1 = v30;
    a1[1] = (__int64)v31;
  }
  return a1;
}
