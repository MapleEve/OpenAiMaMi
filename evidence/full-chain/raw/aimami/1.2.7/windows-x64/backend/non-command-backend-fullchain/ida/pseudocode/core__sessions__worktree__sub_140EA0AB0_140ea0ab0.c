// win 1.2.7 | module src/core/sessions/worktree.rs | ea 0x140ea0ab0 | name sub_140EA0AB0
// win 1.2.7 | module src/core/sessions/worktree.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140EA0AB0(_OWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // r13
  __int64 *i; // rax
  __int64 *v20; // rbx
  _OWORD *v21; // rsi
  volatile signed __int64 *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  __int64 *v30; // [rsp+40h] [rbp-40h]
  __int64 *v31; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h]
  __int64 *v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]
  __int64 v36; // [rsp+78h] [rbp-8h] BYREF
  __int64 *v37; // [rsp+80h] [rbp+0h]
  __int64 v38; // [rsp+88h] [rbp+8h]
  __int128 v39; // [rsp+90h] [rbp+10h] BYREF
  __m256i v40; // [rsp+A0h] [rbp+20h]
  __int64 v41; // [rsp+C8h] [rbp+48h]
  __int128 v42; // [rsp+D0h] [rbp+50h]
  __m256i v43; // [rsp+E0h] [rbp+60h]
  __int128 v44; // [rsp+100h] [rbp+80h] BYREF
  __int128 v45; // [rsp+110h] [rbp+90h]
  const char *v46; // [rsp+120h] [rbp+A0h]
  __int64 v47; // [rsp+128h] [rbp+A8h]
  __int64 v48; // [rsp+130h] [rbp+B0h]
  const char *v49; // [rsp+138h] [rbp+B8h]
  __int64 v50; // [rsp+140h] [rbp+C0h]
  __int64 v51; // [rsp+148h] [rbp+C8h]
  const char *v52; // [rsp+150h] [rbp+D0h]
  __int64 v53; // [rsp+158h] [rbp+D8h]
  _QWORD *v54; // [rsp+168h] [rbp+E8h]
  _OWORD *v55; // [rsp+170h] [rbp+F0h]
  __int64 *v56; // [rsp+178h] [rbp+F8h]
  __int64 v57; // [rsp+180h] [rbp+100h]
  char v58; // [rsp+18Fh] [rbp+10Fh] BYREF
  __int64 v59; // [rsp+190h] [rbp+110h] BYREF
  __int64 v60; // [rsp+198h] [rbp+118h]
  char v61; // [rsp+1A5h] [rbp+125h]
  char v62; // [rsp+1A6h] [rbp+126h]
  char v63; // [rsp+1A7h] [rbp+127h]
  __int64 v64; // [rsp+1A8h] [rbp+128h]

  v64 = -2;
  v41 = a3;
  v54 = a2;
  v63 = 1;
  v4 = sub_1416964A0();
  *(_QWORD *)&v44 = 1;
  *((_QWORD *)&v44 + 1) = 1;
  v45 = (unsigned __int64)v4;
  LOBYTE(v46) = 0;
  nullsub_1(v5);
  v6 = sub_140001650(40, 8);
  if ( !v6 )
  {
    v60 = v4;
    sub_141938D11(8, 40);
  }
  v55 = a1;
  *(_QWORD *)(v6 + 32) = v46;
  v7 = v44;
  *(_OWORD *)(v6 + 16) = v45;
  *(_OWORD *)v6 = v7;
  v59 = v6;
  *(_QWORD *)&v8 = *v54;
  v9 = v54[1];
  v10 = v54[3];
  v11 = (__int64 *)v54[4];
  *((_QWORD *)&v8 + 1) = v9 + 24LL * v54[2];
  *(_QWORD *)&v44 = v9;
  *((_QWORD *)&v44 + 1) = v9;
  v45 = v8;
  v46 = (const char *)&v59;
  v47 = v10;
  sub_1403E9E20(&v36, &v44);
  v12 = *v11;
  v62 = 1;
  v14 = sub_14167F170(v13);
  if ( *(_BYTE *)(v14 + 16) == 1 )
  {
    v16 = *(_QWORD *)v14;
    v17 = *(_QWORD *)(v14 + 8);
  }
  else
  {
    v62 = 1;
    v26 = v14;
    v16 = sub_141696260();
    v14 = v26;
    v17 = v27;
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v14 + 8) = v27;
    *(_BYTE *)(v14 + 16) = 1;
  }
  *(_QWORD *)v14 = v16 + 1;
  v62 = 1;
  LOBYTE(v15) = 1;
  sub_1402957F0(&v44, 104, v12, v15);
  *(_OWORD *)v40.m256i_i8 = v45;
  v39 = v44;
  v40.m256i_i64[2] = v16;
  v40.m256i_i64[3] = v17;
  v18 = &v37[3 * v38];
  v30 = v37;
  v31 = v37;
  v57 = v36;
  v32 = v36;
  v33 = v18;
  v56 = v37;
  for ( i = v37; i != v18; i = v20 )
  {
    v20 = i + 3;
    v31 = i + 3;
    if ( !*i )
      goto LABEL_14;
    v28 = *i;
    v29 = *(_OWORD *)(i + 1);
    sub_14016BFB0(&v34, &v28);
    if ( (_QWORD)v34 == -1 )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v60 = v34;
        v48 = 2;
        v49 = aCodexmateLibCo_40;
        v50 = 39;
        v52 = aAimamiSessions;
        v53 = 99;
        *(_QWORD *)&v44 = 0;
        *((_QWORD *)&v44 + 1) = aCodexmateLibCo_40;
        v45 = 0x27u;
        v46 = aSrcCoreSession_6;
        v47 = 29;
        v51 = 0xA800000001LL;
        sub_1414D53A0(&v58, &v44);
      }
      sub_140E95610(&v34);
    }
    else
    {
      v60 = v34;
      *(_QWORD *)&v45 = v35;
      v44 = v34;
      sub_140392250(&v39, &v44);
    }
  }
  v20 = v18;
LABEL_14:
  sub_14038E010(v20, 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)((char *)v18 - (char *)v20) >> 3));
  if ( v57 )
    sub_140001660(v56, 24 * v57, 8);
  v42 = v39;
  v43 = v40;
  v21 = v55;
  while ( *(_QWORD *)(v59 + 24) )
  {
    v61 = 1;
    sub_14168BA00(v59 + 16);
  }
  if ( !(_QWORD)v42 )
  {
    v61 = 0;
    sub_141694000(*((_QWORD *)&v42 + 1), v43.m256i_i64[0]);
  }
  v22 = (volatile signed __int64 *)v59;
  if ( *(_BYTE *)(v59 + 32) )
  {
    v61 = 1;
    sub_1419392A0(&unk_141A56090, 49, v41);
  }
  v23 = v42;
  v24 = *(_OWORD *)v43.m256i_i8;
  v21[2] = *(_OWORD *)&v43.m256i_u64[2];
  v21[1] = v24;
  *v21 = v23;
  if ( !_InterlockedDecrement64(v22) )
  {
    v63 = 0;
    sub_141691120(&v59);
  }
  return v21;
}
