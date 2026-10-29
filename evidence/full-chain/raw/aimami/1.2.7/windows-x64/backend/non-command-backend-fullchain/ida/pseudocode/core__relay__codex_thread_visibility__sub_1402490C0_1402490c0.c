// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402490c0 | name sub_1402490C0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_1402490C0(__int64 a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  void *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // r13
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int128 v40; // [rsp+70h] [rbp-10h]
  __int128 v41; // [rsp+80h] [rbp+0h]
  __int64 v42; // [rsp+A8h] [rbp+28h]
  const __m128i *v43; // [rsp+B0h] [rbp+30h]
  __int64 v44; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v45; // [rsp+C0h] [rbp+40h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  __int64 v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  __int128 v49; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v50; // [rsp+F0h] [rbp+70h]
  __int128 v51; // [rsp+100h] [rbp+80h]
  __int128 v52; // [rsp+110h] [rbp+90h] BYREF
  __int64 v53; // [rsp+120h] [rbp+A0h]
  __int64 v54; // [rsp+128h] [rbp+A8h]
  __int128 v55; // [rsp+130h] [rbp+B0h]
  __int64 v56; // [rsp+140h] [rbp+C0h]
  __int128 v57; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v58; // [rsp+158h] [rbp+D8h]
  __int128 v59; // [rsp+160h] [rbp+E0h] BYREF
  __m256i v60; // [rsp+170h] [rbp+F0h]
  __int128 v61; // [rsp+190h] [rbp+110h]
  __int64 v62; // [rsp+1A0h] [rbp+120h]
  __int128 v63; // [rsp+1A8h] [rbp+128h] BYREF
  __m256i v64; // [rsp+1B8h] [rbp+138h]
  __int64 v65; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v66; // [rsp+1E0h] [rbp+160h]
  __int64 v67; // [rsp+1E8h] [rbp+168h]
  __int64 v68; // [rsp+1F0h] [rbp+170h]

  v68 = -2;
  v42 = a2[1];
  v43 = (const __m128i *)a2[2];
  result = (void *)sub_1402331D0((__int64)&v44, v42, v43);
  v6 = v44;
  v7 = v45;
  v8 = v46;
  v9 = v47;
  v10 = v48;
  v39 = v49;
  v40 = v50;
  v41 = v51;
  if ( v44 == -2 )
  {
    *(_OWORD *)(a1 + 80) = v52;
    *(_OWORD *)(a1 + 64) = v41;
    *(_OWORD *)(a1 + 48) = v40;
    *(_OWORD *)(a1 + 32) = v39;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v10;
    return result;
  }
  if ( v44 != -1 )
  {
    nullsub_1(v5);
    v11 = sub_140001650(144, 8);
    if ( !v11 )
      sub_141938D2B(8, 144);
    v65 = 2;
    v66 = v11;
    v67 = 0;
    if ( a2[4] != -1 )
    {
      if ( v8 == a2[9] && !(unsigned int)sub_1418F4B70(v7, a2[8]) )
      {
        sub_1416AC440(&v63, &v44);
        v64.m256i_i64[1] = v9;
        v64.m256i_i64[2] = v10;
        v64.m256i_i16[12] = v49;
        sub_1416AC440(&v57, a2 + 4);
        v60 = v64;
        v59 = v63;
        v61 = v57;
        v62 = v58;
        v18 = v67;
        if ( v67 == v65 )
          sub_14190FB90(&v65);
        v19 = v66;
        v12 = 9 * v18;
        *(_QWORD *)(v66 + 8 * v12 + 64) = v62;
        v20 = v59;
        v21 = *(_OWORD *)v60.m256i_i8;
        v22 = *(_OWORD *)&v60.m256i_u64[2];
        *(_OWORD *)(v19 + 8 * v12 + 48) = v61;
        *(_OWORD *)(v19 + 8 * v12 + 32) = v22;
        *(_OWORD *)(v19 + 8 * v12 + 16) = v21;
        *(_OWORD *)(v19 + 8 * v12) = v20;
        v15 = v18 + 1;
        v67 = v15;
        if ( a2[10] == -1 )
          goto LABEL_30;
        goto LABEL_16;
      }
      if ( v8 != a2[6] || (unsigned int)sub_1418F4B70(v7, a2[5]) )
      {
        nullsub_1(v12);
        v13 = (void *)sub_140001650(54, 1);
        if ( !v13 )
          sub_141938D2B(1, 54);
        qmemcpy(v13, "first session_meta changed before convergence rollback", 54);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 54;
        *(_QWORD *)(a1 + 16) = v13;
        *(_QWORD *)(a1 + 24) = 54;
        v14 = v67;
        if ( !v67 )
          goto LABEL_58;
        goto LABEL_52;
      }
    }
    v15 = 0;
    if ( a2[10] == -1 )
      goto LABEL_30;
LABEL_16:
    v16 = *((_QWORD *)&v50 + 1);
    if ( *((_QWORD *)&v50 + 1) == a2[15] && !(unsigned int)sub_1418F4B70(v50, a2[14]) )
    {
      sub_1416AC440(&v63, (char *)&v49 + 8);
      *(_OWORD *)&v64.m256i_u64[1] = v51;
      v64.m256i_i16[12] = v52;
      sub_1416AC440(&v57, a2 + 10);
      v60 = v64;
      v59 = v63;
      v61 = v57;
      v62 = v58;
      v23 = v67;
      if ( v67 == v65 )
        sub_14190FB90(&v65);
      v24 = v66;
      v12 = 9 * v23;
      *(_QWORD *)(v66 + 8 * v12 + 64) = v62;
      v25 = v59;
      v26 = *(_OWORD *)v60.m256i_i8;
      v27 = *(_OWORD *)&v60.m256i_u64[2];
      *(_OWORD *)(v24 + 8 * v12 + 48) = v61;
      *(_OWORD *)(v24 + 8 * v12 + 32) = v27;
      *(_OWORD *)(v24 + 8 * v12 + 16) = v26;
      *(_OWORD *)(v24 + 8 * v12) = v25;
      v15 = v23 + 1;
      v67 = v15;
    }
    else if ( v16 != a2[12] || (unsigned int)sub_1418F4B70(v50, a2[11]) )
    {
      nullsub_1(v12);
      v17 = (void *)sub_140001650(53, 1);
      if ( !v17 )
        sub_141938D2B(1, 53);
      qmemcpy(v17, "last session_meta changed before convergence rollback", 53);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 53;
      *(_QWORD *)(a1 + 16) = v17;
      *(_QWORD *)(a1 + 24) = 53;
      v14 = v67;
      if ( !v67 )
        goto LABEL_58;
      goto LABEL_52;
    }
LABEL_30:
    v28 = a2[16];
    if ( v28 != -1 )
    {
      if ( *((_QWORD *)&v52 + 1) == -1 )
      {
        nullsub_1(v12);
        v30 = sub_140001650(51, 1);
        if ( !v30 )
          sub_141938D2B(1, 51);
        qmemcpy((void *)(v30 + 16), "missing before convergence rollb", 32);
        v31 = xmmword_1419D7644;
LABEL_40:
        *(_OWORD *)v30 = v31;
        *(_DWORD *)(v30 + 47) = 1801675106;
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 51;
        *(_QWORD *)(a1 + 16) = v30;
        *(_QWORD *)(a1 + 24) = 51;
        v14 = v67;
        if ( !v67 )
          goto LABEL_58;
        goto LABEL_52;
      }
      v29 = v54;
      if ( v54 == a2[21] && !(unsigned int)sub_1418F4B70(v53, a2[20]) )
      {
        sub_1416AC440(&v63, (char *)&v52 + 8);
        *(_OWORD *)&v64.m256i_u64[1] = v55;
        v64.m256i_i16[12] = v56;
        sub_1416AC440(&v57, a2 + 16);
        v60 = v64;
        v59 = v63;
        v61 = v57;
        v62 = v58;
        sub_1401F4B50(&v65, &v59);
        v15 = v67;
      }
      else if ( v29 != a2[18] || (unsigned int)sub_1418F4B70(v53, a2[17]) )
      {
        nullsub_1(v12);
        v30 = sub_140001650(51, 1);
        if ( !v30 )
          sub_141938D2B(1, 51);
        qmemcpy((void *)(v30 + 16), "changed before convergence rollb", 32);
        v31 = xmmword_1419DF446;
        goto LABEL_40;
      }
    }
    if ( v15 )
    {
      sub_14026A400(a1, v42, (_DWORD)v43, v66, v15, v28 != -1);
      v32 = v67;
      if ( v67 )
      {
        v33 = (_QWORD *)(v66 + 56);
        do
        {
          v34 = *(v33 - 7);
          if ( v34 )
            sub_140001660(*(v33 - 6), v34, 1);
          v35 = *(v33 - 1);
          if ( v35 )
            sub_140001660(*v33, v35, 1);
          v33 += 9;
          --v32;
        }
        while ( v32 );
      }
      goto LABEL_58;
    }
    *(_QWORD *)a1 = -1;
    v14 = v67;
    if ( !v67 )
    {
LABEL_58:
      result = (void *)v65;
      if ( v65 )
        result = (void *)sub_140001660(v66, 72 * v65, 8);
      if ( v6 )
        result = (void *)sub_140001660(v45, v6, 1);
      if ( *((_QWORD *)&v49 + 1) )
        result = (void *)sub_140001660(v50, *((_QWORD *)&v49 + 1), 1);
      if ( *((_QWORD *)&v52 + 1) != -1 )
      {
        if ( *((_QWORD *)&v52 + 1) )
          return (void *)sub_140001660(v53, *((_QWORD *)&v52 + 1), 1);
      }
      return result;
    }
LABEL_52:
    v36 = (_QWORD *)(v66 + 56);
    do
    {
      v37 = *(v36 - 7);
      if ( v37 )
        sub_140001660(*(v36 - 6), v37, 1);
      v38 = *(v36 - 1);
      if ( v38 )
        sub_140001660(*v36, v38, 1);
      v36 += 9;
      --v14;
    }
    while ( v14 );
    goto LABEL_58;
  }
  nullsub_1(v5);
  result = (void *)sub_140001650(48, 1);
  if ( !result )
    sub_141938D2B(1, 48);
  qmemcpy(result, "session_meta missing during convergence rollback", 48);
  *(_QWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = 48;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 48;
  return result;
}
