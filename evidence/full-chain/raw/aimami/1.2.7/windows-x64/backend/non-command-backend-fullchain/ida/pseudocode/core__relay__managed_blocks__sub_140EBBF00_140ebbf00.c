// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140ebbf00 | name sub_140EBBF00
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EBBF00(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // r13
  int v24; // ebx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __m128i *v30; // rax
  __int64 v31; // rbx
  const __m128i *v32; // r14
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // [rsp+28h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-50h]
  __int64 v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h]
  __int64 v40; // [rsp+50h] [rbp-30h]
  __int64 v41; // [rsp+58h] [rbp-28h]
  const __m128i *v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  char v45; // [rsp+7Fh] [rbp-1h]
  __int64 v46; // [rsp+80h] [rbp+0h]

  v46 = -2;
  v10 = sub_140E91160(a3, a4);
  sub_140EFDF00(&v35, v10, v11);
  result = v35;
  if ( v35 == -1 )
    return result;
  v42 = a3;
  v41 = a4;
  v44 = v35;
  v43 = v36;
  v13 = v37;
  if ( !a2 )
  {
LABEL_10:
    v40 = a5[1];
    v17 = a5[2];
    v38 = 3 * v17;
    v39 = v17;
    if ( v17 )
    {
      v18 = v40;
      v19 = v40 + 8 * v38;
      do
      {
        v20 = sub_140E91160(*(_QWORD *)(v18 + 8), *(_QWORD *)(v18 + 16));
        v45 = 0;
        sub_140EFDF00(&v35, v20, v21);
        v22 = v35;
        if ( v35 != -1 )
        {
          if ( v37 == v13 )
          {
            v23 = v36;
            v24 = sub_1418F4B70(v36, v43);
            if ( v22 )
              sub_140001660(v23, v22, 1);
            if ( !v24 )
              goto LABEL_7;
          }
          else if ( v35 )
          {
            sub_140001660(v36, v35, 1);
          }
        }
        v18 += 24;
      }
      while ( v18 != v19 );
    }
    v25 = a6[2];
    if ( v25 == *a6 )
      sub_14190FDC0(a6);
    v26 = a6[1];
    v27 = 3 * v25;
    *(_QWORD *)(v26 + 8 * v27) = v44;
    *(_QWORD *)(v26 + 8 * v27 + 8) = v43;
    *(_QWORD *)(v26 + 8 * v27 + 16) = v13;
    a6[2] = v25 + 1;
    v28 = v41;
    if ( v41 < 0 )
    {
      v29 = 0;
      goto LABEL_24;
    }
    if ( v41 )
    {
      nullsub_1(v27);
      v29 = 1;
      v30 = (__m128i *)sub_140001650(v28, 1);
      v31 = v39;
      if ( !v30 )
      {
LABEL_24:
        v45 = 1;
        sub_141938D2B(v29, v28);
      }
      v32 = v30;
      sub_1418F44E0(v30, v42, v28);
      v33 = a5;
      if ( v31 != *a5 )
      {
LABEL_31:
        result = v38;
        v34 = v40;
        *(_QWORD *)(v40 + 8 * v38) = v28;
        *(_QWORD *)(v34 + 8 * result + 8) = v32;
        *(_QWORD *)(v34 + 8 * result + 16) = v28;
        v33[2] = v31 + 1;
        return result;
      }
    }
    else
    {
      v32 = (const __m128i *)1;
      v31 = v39;
      v33 = a5;
      if ( v39 != *a5 )
        goto LABEL_31;
    }
    v42 = v32;
    sub_14190FDC0(v33);
    v40 = v33[1];
    v28 = v41;
    v32 = v42;
    goto LABEL_31;
  }
  v14 = 0;
  while ( *(_QWORD *)(a1 + v14 + 16) != v13 || (unsigned int)sub_1418F4B70(*(_QWORD *)(a1 + v14 + 8), v43) )
  {
    v14 += 24;
    if ( 24 * a2 == v14 )
      goto LABEL_10;
  }
LABEL_7:
  v15 = a6[8];
  if ( v15 == a6[6] )
    sub_14190FDC0(a6 + 6);
  result = a6[7];
  v16 = 3 * v15;
  *(_QWORD *)(result + 8 * v16) = v44;
  *(_QWORD *)(result + 8 * v16 + 8) = v43;
  *(_QWORD *)(result + 8 * v16 + 16) = v13;
  a6[8] = v15 + 1;
  return result;
}
