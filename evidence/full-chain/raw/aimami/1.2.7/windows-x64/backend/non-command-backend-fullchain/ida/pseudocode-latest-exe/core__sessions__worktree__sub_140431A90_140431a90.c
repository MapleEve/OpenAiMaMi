// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x140431a90 | successor of pre-update 0x140ea0ab0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.895, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_OWORD *__fastcall sub_140431A90(_OWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // rsi
  __int64 *i; // rax
  unsigned __int64 v21; // rdx
  __int64 *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rdx
  _OWORD *v25; // rsi
  volatile signed __int64 *v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int128 v33; // [rsp+30h] [rbp-50h]
  __int64 *v34; // [rsp+40h] [rbp-40h]
  __int64 *v35; // [rsp+48h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-30h]
  __int64 *v37; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  __int128 v42; // [rsp+80h] [rbp+0h] BYREF
  __m256i v43; // [rsp+90h] [rbp+10h] BYREF
  __int128 v44; // [rsp+B0h] [rbp+30h]
  __int128 v45; // [rsp+C0h] [rbp+40h]
  __int64 v46; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v48; // [rsp+E0h] [rbp+60h]
  __int128 v49; // [rsp+E8h] [rbp+68h]
  __m256i v50; // [rsp+F8h] [rbp+78h]
  _QWORD *v51; // [rsp+118h] [rbp+98h]
  _OWORD *v52; // [rsp+120h] [rbp+A0h]
  __int64 *v53; // [rsp+128h] [rbp+A8h]
  __int128 v54; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v55; // [rsp+140h] [rbp+C0h]
  const char *v56; // [rsp+150h] [rbp+D0h]
  __int64 v57; // [rsp+158h] [rbp+D8h]
  __int64 v58; // [rsp+160h] [rbp+E0h]
  const char *v59; // [rsp+168h] [rbp+E8h]
  __int64 v60; // [rsp+170h] [rbp+F0h]
  __int64 v61; // [rsp+178h] [rbp+F8h]
  const char *v62; // [rsp+180h] [rbp+100h]
  __int64 v63; // [rsp+188h] [rbp+108h]
  __int64 v64; // [rsp+198h] [rbp+118h]
  unsigned __int64 v65; // [rsp+1A0h] [rbp+120h]
  char v66; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int64 v67; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v68; // [rsp+1B8h] [rbp+138h]
  char v69; // [rsp+1C4h] [rbp+144h]
  char v70; // [rsp+1C5h] [rbp+145h]
  char v71; // [rsp+1C6h] [rbp+146h]
  char v72; // [rsp+1C7h] [rbp+147h]
  __int64 v73; // [rsp+1C8h] [rbp+148h]

  v73 = -2;
  v41 = a3;
  v51 = a2;
  v72 = 1;
  v4 = sub_1416C5470();
  *(_QWORD *)&v54 = 1;
  *((_QWORD *)&v54 + 1) = 1;
  v55 = (unsigned __int64)v4;
  LOBYTE(v56) = 0;
  nullsub_1(v6, v5);
  v7 = sub_140001650(40, 8);
  if ( !v7 )
  {
    v68 = v4;
    sub_14196B2C1(8, 40);
  }
  v52 = a1;
  *(_QWORD *)(v7 + 32) = v56;
  v8 = v54;
  *(_OWORD *)(v7 + 16) = v55;
  *(_OWORD *)v7 = v8;
  v67 = v7;
  *(_QWORD *)&v9 = *v51;
  v10 = v51[1];
  v11 = v51[3];
  v12 = (__int64 *)v51[4];
  *((_QWORD *)&v9 + 1) = v10 + 24LL * v51[2];
  *(_QWORD *)&v54 = v10;
  *((_QWORD *)&v54 + 1) = v10;
  v55 = v9;
  v56 = (const char *)&v67;
  v57 = v11;
  sub_140224C10(&v38, &v54);
  v13 = *v12;
  v71 = 1;
  v15 = sub_1416AE140(v14);
  if ( *(_BYTE *)(v15 + 16) == 1 )
  {
    v17 = *(_QWORD *)v15;
    v18 = *(_QWORD *)(v15 + 8);
  }
  else
  {
    v71 = 1;
    v30 = v15;
    v17 = sub_1416C5230();
    v15 = v30;
    v18 = v31;
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v31;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v15 = v17 + 1;
  v71 = 1;
  LOBYTE(v16) = 1;
  sub_1400225A0(&v54, 104, v13, v16);
  *(_OWORD *)v43.m256i_i8 = v55;
  v42 = v54;
  v43.m256i_i64[2] = v17;
  v43.m256i_i64[3] = v18;
  v19 = &v39[3 * v40];
  v34 = v39;
  v35 = v39;
  v64 = v38;
  v36 = v38;
  v37 = v19;
  v53 = v39;
  for ( i = v39; i != v19; i = v22 )
  {
    v22 = i + 3;
    v35 = i + 3;
    if ( !*i )
      goto LABEL_21;
    v32 = *i;
    v33 = *(_OWORD *)(i + 1);
    sub_140174C70(&v46, &v32);
    if ( v46 == -1 )
    {
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v68 = v46;
        v58 = 2;
        v59 = aCodexmateLibCo_3;
        v60 = 39;
        v62 = aAimamiSessions;
        v63 = 99;
        *(_QWORD *)&v54 = 0;
        *((_QWORD *)&v54 + 1) = aCodexmateLibCo_3;
        v55 = 0x27u;
        v56 = aSrcCoreSession_4;
        v57 = 29;
        v61 = 0xA800000001LL;
        sub_141503E20(&v66, &v54);
      }
      v68 = v47;
      v65 = v48;
      if ( *(_QWORD *)v48 )
        (*(void (__fastcall **)(__int64))v48)(v68);
      v24 = *(_QWORD *)(v65 + 8);
      if ( v24 )
        sub_140001660(v68, v24, *(_QWORD *)(v65 + 16));
    }
    else
    {
      *(_QWORD *)&v44 = v47;
      v68 = v46;
      *(_QWORD *)&v45 = v46;
      *((_QWORD *)&v44 + 1) = v47;
      *((_QWORD *)&v45 + 1) = v47 + 104 * v48;
      v21 = (v48 >> 1) + (v48 & 1);
      if ( !v43.m256i_i64[1] )
        v21 = v48;
      if ( v21 > v43.m256i_i64[0] )
      {
        v69 = 1;
        LOBYTE(v23) = 1;
        sub_14192AEC0(&v42, v21, &v43.m256i_u64[2], v23);
      }
      v55 = v45;
      v54 = v44;
      v69 = 0;
      sub_1401D0B00(&v54, &v42);
    }
  }
  v22 = v19;
LABEL_21:
  sub_1401B25D0(v22, 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)((char *)v19 - (char *)v22) >> 3));
  if ( v64 )
    sub_140001660(v53, 24 * v64, 8);
  v49 = v42;
  v50 = v43;
  v25 = v52;
  while ( *(_QWORD *)(v67 + 24) )
  {
    v70 = 1;
    sub_1416BA9D0(v67 + 16);
  }
  if ( !(_QWORD)v49 )
  {
    v70 = 0;
    sub_1416C2FD0(*((_QWORD *)&v49 + 1), v50.m256i_i64[0]);
  }
  v26 = (volatile signed __int64 *)v67;
  if ( *(_BYTE *)(v67 + 32) )
  {
    v70 = 1;
    sub_14196B850(aAScopedThreadP, 49, v41);
  }
  v27 = v49;
  v28 = *(_OWORD *)v50.m256i_i8;
  v25[2] = *(_OWORD *)&v50.m256i_u64[2];
  v25[1] = v28;
  *v25 = v27;
  if ( !_InterlockedDecrement64(v26) )
  {
    v72 = 0;
    sub_1416C00F0(&v67);
  }
  return v25;
}
