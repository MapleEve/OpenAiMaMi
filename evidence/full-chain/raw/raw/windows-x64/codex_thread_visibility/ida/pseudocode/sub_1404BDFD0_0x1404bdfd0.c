// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404bdfd0
// name: sub_1404BDFD0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404BDFD0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  void *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  void *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int16 v22; // kr00_2
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm6
  __int16 v30; // kr02_2
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int128 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-40h]
  __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+70h] [rbp-10h] BYREF
  __int64 v45; // [rsp+80h] [rbp+0h]
  __int64 v46; // [rsp+88h] [rbp+8h]
  __int64 v47; // [rsp+90h] [rbp+10h]
  __int64 v48; // [rsp+98h] [rbp+18h] BYREF
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int64 v50; // [rsp+A8h] [rbp+28h]
  __int64 v51; // [rsp+B0h] [rbp+30h]
  _BYTE v52[72]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v53; // [rsp+100h] [rbp+80h]
  __int128 v54; // [rsp+108h] [rbp+88h] BYREF
  __m256i v55; // [rsp+118h] [rbp+98h]
  __int128 v56; // [rsp+138h] [rbp+B8h]
  __int64 v57; // [rsp+148h] [rbp+C8h]
  __int64 v58; // [rsp+150h] [rbp+D0h]
  __int64 v59; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v60; // [rsp+160h] [rbp+E0h]
  __int64 v61; // [rsp+168h] [rbp+E8h]
  __int64 v62; // [rsp+170h] [rbp+F0h]
  __int64 v63; // [rsp+178h] [rbp+F8h]

  v63 = -2;
  v4 = a2[1];
  v5 = a2[2];
  find_session_meta_anchors((__int64)&v48, v4, v5);
  result = (unsigned int)v48;
  v7 = v49;
  v8 = v50;
  v9 = v51;
  v10 = *(_QWORD *)v52;
  v41 = *(_OWORD *)&v52[8];
  v42 = *(_OWORD *)&v52[24];
  v43 = *(_OWORD *)&v52[40];
  if ( (_DWORD)v48 == 1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v52[56];
    *(_OWORD *)(a1 + 64) = v43;
    *(_OWORD *)(a1 + 48) = v42;
    *(_OWORD *)(a1 + 32) = v41;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v10;
    return result;
  }
  if ( v49 != -1 )
  {
    v46 = v4;
    *(_OWORD *)&v52[48] = *(_OWORD *)&v52[56];
    *(_OWORD *)&v52[32] = v43;
    *(_OWORD *)&v52[16] = v42;
    *(_OWORD *)v52 = v41;
    v53 = v49;
    v48 = v49;
    v49 = v50;
    v50 = v51;
    v51 = v10;
    nullsub_1(v7);
    v11 = sub_140001650(144, 8);
    if ( !v11 )
      sub_1416C2D4B(8, 144);
    v13 = v11;
    v59 = 2;
    v60 = v11;
    v61 = 0;
    if ( a2[4] != -1 )
    {
      if ( a2[9] == v9 && !(unsigned int)sub_1416847B0(v8, a2[8], v9) )
      {
        sub_14149C500(&v54, &v48);
        v47 = *(_QWORD *)v52;
        v22 = *(_WORD *)&v52[8];
        v58 = *((_QWORD *)&v54 + 1);
        v62 = v54;
        v23 = v55.m256i_i64[0];
        sub_14149C500(&v44, a2 + 4);
        *(_QWORD *)&v54 = v62;
        *((_QWORD *)&v54 + 1) = v58;
        v55.m256i_i64[0] = v23;
        v55.m256i_i64[1] = v10;
        v55.m256i_i64[2] = v47;
        v55.m256i_i16[12] = v22;
        v56 = v44;
        v57 = v45;
        v24 = v61;
        if ( v61 == v59 )
          sub_141689730(&v59);
        v13 = v60;
        v25 = 9 * v24;
        v12 = v57;
        *(_QWORD *)(v60 + 8 * v25 + 64) = v57;
        v26 = v54;
        v27 = *(_OWORD *)v55.m256i_i8;
        v28 = *(_OWORD *)&v55.m256i_u64[2];
        *(_OWORD *)(v13 + 8 * v25 + 48) = v56;
        *(_OWORD *)(v13 + 8 * v25 + 32) = v28;
        *(_OWORD *)(v13 + 8 * v25 + 16) = v27;
        *(_OWORD *)(v13 + 8 * v25) = v26;
        v15 = v24 + 1;
        v61 = v15;
        if ( a2[10] == -1 )
          goto LABEL_34;
LABEL_15:
        v16 = *(_QWORD *)&v52[32];
        if ( *(_QWORD *)&v52[32] == a2[15]
          && !(unsigned int)sub_1416847B0(*(_QWORD *)&v52[24], a2[14], *(_QWORD *)&v52[32]) )
        {
          sub_14149C500(&v54, &v52[16]);
          v29 = *(_OWORD *)&v52[40];
          v30 = *(_WORD *)&v52[56];
          v58 = *((_QWORD *)&v54 + 1);
          v62 = v54;
          v31 = v55.m256i_i64[0];
          sub_14149C500(&v44, a2 + 10);
          *(_QWORD *)&v54 = v62;
          *((_QWORD *)&v54 + 1) = v58;
          v55.m256i_i64[0] = v31;
          *(_OWORD *)&v55.m256i_u64[1] = v29;
          v55.m256i_i16[12] = v30;
          v56 = v44;
          v57 = v45;
          v32 = v61;
          if ( v61 == v59 )
            sub_141689730(&v59);
          v13 = v60;
          v33 = 9 * v32;
          *(_QWORD *)(v60 + 8 * v33 + 64) = v57;
          v34 = v54;
          v35 = *(_OWORD *)v55.m256i_i8;
          v36 = *(_OWORD *)&v55.m256i_u64[2];
          *(_OWORD *)(v13 + 8 * v33 + 48) = v56;
          *(_OWORD *)(v13 + 8 * v33 + 32) = v36;
          *(_OWORD *)(v13 + 8 * v33 + 16) = v35;
          *(_OWORD *)(v13 + 8 * v33) = v34;
          v15 = v32 + 1;
          v61 = v15;
        }
        else if ( v16 != a2[12] || (unsigned int)sub_1416847B0(*(_QWORD *)&v52[24], a2[11], v16) )
        {
          nullsub_1(v12);
          v17 = (void *)sub_140001650(53, 1);
          if ( !v17 )
            sub_1416C2D4B(1, 53);
          qmemcpy(v17, "last session_meta changed before convergence rollback", 53);
          *(_QWORD *)a1 = 10;
          *(_QWORD *)(a1 + 8) = 53;
          *(_QWORD *)(a1 + 16) = v17;
          *(_QWORD *)(a1 + 24) = 53;
          v18 = v61;
          if ( v61 )
          {
            v19 = (_QWORD *)(v60 + 56);
            do
            {
              v20 = *(v19 - 7);
              if ( v20 )
                sub_140001660(*(v19 - 6), v20, 1);
              v21 = *(v19 - 1);
              if ( v21 )
                sub_140001660(*v19, v21, 1);
              v19 += 9;
              --v18;
            }
            while ( v18 );
          }
          goto LABEL_43;
        }
LABEL_34:
        if ( v15 )
        {
          sub_1404A5FF0(a1, v46, v5, v13, v15);
          v37 = v61;
          if ( v61 )
          {
            v38 = (_QWORD *)(v60 + 56);
            do
            {
              v39 = *(v38 - 7);
              if ( v39 )
                sub_140001660(*(v38 - 6), v39, 1);
              v40 = *(v38 - 1);
              if ( v40 )
                sub_140001660(*v38, v40, 1);
              v38 += 9;
              --v37;
            }
            while ( v37 );
          }
        }
        else
        {
          *(_QWORD *)a1 = -1;
        }
        goto LABEL_43;
      }
      if ( a2[6] != v9 || (unsigned int)sub_1416847B0(v8, a2[5], v9) )
      {
        nullsub_1(v12);
        v14 = (void *)sub_140001650(54, 1);
        if ( !v14 )
          sub_1416C2D4B(1, 54);
        qmemcpy(v14, "first session_meta changed before convergence rollback", 54);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 54;
        *(_QWORD *)(a1 + 16) = v14;
        *(_QWORD *)(a1 + 24) = 54;
LABEL_43:
        result = v59;
        if ( v59 )
          result = sub_140001660(v60, 72 * v59, 8);
        if ( v53 )
          result = sub_140001660(v49, v53, 1);
        if ( *(_QWORD *)&v52[16] )
          return sub_140001660(*(_QWORD *)&v52[24], *(_QWORD *)&v52[16], 1);
        return result;
      }
    }
    v15 = 0;
    if ( a2[10] == -1 )
      goto LABEL_34;
    goto LABEL_15;
  }
  nullsub_1(-1);
  result = sub_140001650(48, 1);
  if ( !result )
    sub_1416C2D4B(1, 48);
  qmemcpy((void *)result, "session_meta missing during convergence rollback", 48);
  *(_QWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = 48;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 48;
  return result;
}