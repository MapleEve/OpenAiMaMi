// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407fc990 | successor of pre-update 0x140255920 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.489, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1407FC990(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  _BYTE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // r13
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r14
  _QWORD *i; // r15
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  _QWORD **v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // al
  _QWORD **v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r14
  _QWORD **v30; // rcx
  _QWORD *v31; // rdi
  _QWORD *v32; // rbx
  unsigned __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r15
  _QWORD *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r14
  __int64 v42; // rbx
  unsigned __int64 v43; // r13
  __int64 j; // r15
  __int64 v45; // rsi
  double result; // xmm0_8
  __int128 v47; // xmm6
  __int64 v48; // rsi
  _QWORD *v49; // rax
  _QWORD **v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // r12
  __int64 v53; // rsi
  _QWORD *v54; // rbx
  unsigned __int64 v55; // r14
  __int64 k; // r15
  _QWORD *v57; // rsi
  __int64 v58; // r12
  __int64 v59; // rdi
  __int64 v60; // rdi
  _QWORD *v61; // rbx
  unsigned __int64 v62; // r14
  __int64 m; // r15
  __int64 v64; // rbx
  unsigned __int64 v65; // rdi
  void *v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int128 *v70; // rsi
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  _QWORD **v73; // rsi
  __int64 v74; // rdi
  int v76; // [rsp+38h] [rbp-48h]
  __int128 v77; // [rsp+40h] [rbp-40h] BYREF
  __int64 v78; // [rsp+50h] [rbp-30h]
  __int64 v79; // [rsp+58h] [rbp-28h]
  char v80; // [rsp+60h] [rbp-20h]
  __int64 v81; // [rsp+68h] [rbp-18h] BYREF
  __int64 v82; // [rsp+70h] [rbp-10h] BYREF
  _QWORD **v83; // [rsp+78h] [rbp-8h]
  unsigned __int64 v84; // [rsp+80h] [rbp+0h]
  _QWORD *v85; // [rsp+90h] [rbp+10h]
  __int64 v86; // [rsp+98h] [rbp+18h]
  __int128 v87; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v88; // [rsp+B0h] [rbp+30h]
  __int64 v89; // [rsp+B8h] [rbp+38h] BYREF
  __int128 *v90; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v91; // [rsp+C8h] [rbp+48h]
  _QWORD **v92; // [rsp+D0h] [rbp+50h]
  __int64 v93; // [rsp+D8h] [rbp+58h]

  v93 = -2;
  v76 = a2;
  v85 = a1;
  nullsub_1(a1, a2);
  v5 = (_BYTE *)sub_140001650(128, 1);
  if ( !v5 )
    sub_14196B2DB(1, 128);
  v82 = 128;
  v83 = (_QWORD **)v5;
  *(_QWORD *)&v77 = &v82;
  *((_QWORD *)&v77 + 1) = asc_141A45D28;
  v78 = 2;
  v79 = 1;
  v80 = 0;
  *v5 = 123;
  v84 = 1;
  LOWORD(v89) = 256;
  v90 = &v77;
  sub_1407A1550(&v89, aVersion_5, 7, a4 + 24);
  if ( (_BYTE)v89 )
  {
LABEL_63:
    v45 = sub_141967030();
    if ( v82 )
      result = sub_140001660(v83, v82, 1);
LABEL_65:
    *(_QWORD *)&v87 = v45;
    v82 = (__int64)&v87;
    v83 = (_QWORD **)sub_14166FAD0;
    sub_1416DAFA0(&v77, &unk_141A47B40, &v82);
    v47 = v77;
    v48 = v78;
    sub_140032F30(&v87);
    v49 = v85;
    *v85 = 10;
    *(_OWORD *)(v49 + 1) = v47;
    v49[3] = v48;
    return result;
  }
  v7 = *(_QWORD *)(a4 + 8);
  v91 = *(_QWORD *)(a4 + 16);
  v92 = (_QWORD **)v90;
  v8 = *(_QWORD **)v90;
  if ( BYTE1(v89) == 1 )
  {
    v9 = v8[2];
    if ( *v8 == v9 )
    {
      sub_141939070((_DWORD)v8, v9, 1, 1, 1);
      v9 = v8[2];
    }
    *(_BYTE *)(v8[1] + v9) = 10;
    v10 = v9 + 1;
  }
  else
  {
    v11 = v8[2];
    if ( (unsigned __int64)(*v8 - v11) <= 1 )
    {
      sub_141939070((_DWORD)v8, v11, 2, 1, 1);
      v11 = v8[2];
    }
    *(_WORD *)(v8[1] + v11) = 2604;
    v10 = v11 + 2;
  }
  v8[2] = v10;
  v12 = v92[3];
  if ( v12 )
  {
    v13 = v92[1];
    v14 = (unsigned __int64)v92[2];
    for ( i = nullptr; i != v12; i = (_QWORD *)((char *)i + 1) )
    {
      if ( v14 > *v8 - v10 )
      {
        sub_141939070((_DWORD)v8, v10, v14, 1, 1);
        v10 = v8[2];
      }
      else if ( !v14 )
      {
        goto LABEL_14;
      }
      sub_1419234B0(v10 + v8[1], v13, v14);
LABEL_14:
      v10 += v14;
      v8[2] = v10;
    }
  }
  sub_14077A600(v92, v6, "entries", 7);
  v16 = *v92;
  v17 = (*v92)[2];
  if ( (unsigned __int64)(**v92 - v17) <= 1 )
  {
    sub_141939070((_DWORD)v16, v17, 2, 1, 1);
    v17 = v16[2];
  }
  *(_WORD *)(v16[1] + v17) = 8250;
  v16[2] = v17 + 2;
  v18 = v92;
  v19 = *v92;
  v20 = v92[3];
  v92[3] = (_QWORD *)((char *)v20 + 1);
  *((_BYTE *)v18 + 32) = 0;
  v21 = v19[2];
  if ( *v19 == v21 )
  {
    sub_141939070((_DWORD)v19, v21, 1, 1, 1);
    v21 = v19[2];
  }
  *(_BYTE *)(v19[1] + v21) = 91;
  v22 = v21 + 1;
  v19[2] = v22;
  if ( !v91 )
  {
    v50 = v92;
    v92[3] = v20;
    v51 = v19[2];
    if ( *v19 != v51 )
      goto LABEL_80;
    goto LABEL_109;
  }
  v91 = v7 + 72 * v91;
  v23 = 1;
  v24 = v92;
  do
  {
    v26 = *v24;
    if ( (v23 & 1) != 0 )
    {
      v27 = v26[2];
      if ( *v26 == v27 )
      {
        sub_141939070((_DWORD)v26, v27, 1, 1, 1);
        v27 = v26[2];
      }
      *(_BYTE *)(v26[1] + v27) = 10;
      v28 = v27 + 1;
    }
    else
    {
      v29 = v26[2];
      if ( (unsigned __int64)(*v26 - v29) <= 1 )
      {
        sub_141939070((_DWORD)v26, v29, 2, 1, 1);
        v29 = v26[2];
      }
      *(_WORD *)(v26[1] + v29) = 2604;
      v28 = v29 + 2;
    }
    v26[2] = v28;
    v30 = v92;
    v31 = v92[3];
    if ( v31 )
    {
      v32 = v92[1];
      v33 = (unsigned __int64)v92[2];
      v34 = 0;
      while ( 1 )
      {
        if ( v33 > *v26 - v28 )
        {
          sub_141939070((_DWORD)v26, v28, v33, 1, 1);
          v28 = v26[2];
        }
        else if ( !v33 )
        {
          goto LABEL_39;
        }
        sub_1419234B0(v28 + v26[1], v32, v33);
LABEL_39:
        v28 += v33;
        v26[2] = v28;
        if ( (_QWORD *)++v34 == v31 )
        {
          v30 = v92;
          v35 = (__int64)v92[3] + 1;
          goto LABEL_46;
        }
      }
    }
    v35 = 1;
LABEL_46:
    v36 = *v30;
    v30[3] = (_QWORD *)v35;
    *((_BYTE *)v30 + 32) = 0;
    v37 = v36[2];
    if ( *v36 == v37 )
    {
      sub_141939070((_DWORD)v36, v37, 1, 1, 1);
      v37 = v36[2];
    }
    *(_BYTE *)(v36[1] + v37) = 123;
    v36[2] = v37 + 1;
    LOWORD(v87) = 256;
    *((_QWORD *)&v87 + 1) = v92;
    sub_14079DAC0(&v87, "thread_idoriginal_modelborrowed_modelentries", 9, v7);
    if ( (_BYTE)v87 )
      goto LABEL_63;
    sub_14079B8D0(&v87, "original_modelborrowed_modelentries", 14, v7 + 48);
    if ( (_BYTE)v87 )
      goto LABEL_63;
    sub_14079DAC0(&v87, "borrowed_modelentries", 14, v7 + 24);
    if ( (v87 & 1) == 0 && BYTE1(v87) )
    {
      v38 = *((_QWORD *)&v87 + 1);
      v39 = **((_QWORD ***)&v87 + 1);
      v40 = *(_QWORD *)(*((_QWORD *)&v87 + 1) + 24LL) - 1LL;
      *(_QWORD *)(*((_QWORD *)&v87 + 1) + 24LL) = v40;
      if ( *(_BYTE *)(v38 + 32) )
      {
        v41 = v39[2];
        if ( *v39 == v41 )
        {
          sub_141939070((_DWORD)v39, v41, 1, 1, 1);
          v41 = v39[2];
        }
        *(_BYTE *)(v39[1] + v41) = 10;
        v25 = v41 + 1;
        v39[2] = v25;
        if ( v40 )
        {
          v42 = *(_QWORD *)(v38 + 8);
          v43 = *(_QWORD *)(v38 + 16);
          for ( j = 0; j != v40; ++j )
          {
            if ( v43 > *v39 - v25 )
            {
              sub_141939070((_DWORD)v39, v25, v43, 1, 1);
              v25 = v39[2];
            }
            else if ( !v43 )
            {
              goto LABEL_59;
            }
            sub_1419234B0(v25 + v39[1], v42, v43);
LABEL_59:
            v25 += v43;
            v39[2] = v25;
          }
        }
      }
      else
      {
        v25 = v39[2];
      }
      if ( *v39 == v25 )
      {
        sub_141939070((_DWORD)v39, v25, 1, 1, 1);
        v25 = v39[2];
      }
      *(_BYTE *)(v39[1] + v25) = 125;
      v39[2] = v25 + 1;
    }
    v7 += 72;
    v24 = v92;
    *((_BYTE *)v92 + 32) = 1;
    v23 = 0;
  }
  while ( v7 != v91 );
  v19 = *v24;
  v52 = (__int64)v24[3] - 1;
  v24[3] = (_QWORD *)v52;
  v53 = v19[2];
  if ( *v19 == v53 )
  {
    sub_141939070((_DWORD)v19, v53, 1, 1, 1);
    v53 = v19[2];
  }
  *(_BYTE *)(v19[1] + v53) = 10;
  v51 = v53 + 1;
  v19[2] = v51;
  if ( v52 )
  {
    v54 = v92[1];
    v55 = (unsigned __int64)v92[2];
    for ( k = 0; k != v52; ++k )
    {
      if ( v55 > *v19 - v51 )
      {
        sub_141939070((_DWORD)v19, v51, v55, 1, 1);
        v51 = v19[2];
      }
      else if ( !v55 )
      {
        goto LABEL_75;
      }
      sub_1419234B0(v51 + v19[1], v54, v55);
LABEL_75:
      v51 += v55;
      v19[2] = v51;
    }
  }
  v50 = v92;
  if ( *v19 == v51 )
  {
LABEL_109:
    sub_141939070((_DWORD)v19, v51, 1, 1, 1);
    v51 = v19[2];
    v50 = v92;
  }
LABEL_80:
  *(_BYTE *)(v19[1] + v51) = 93;
  v19[2] = v51 + 1;
  *((_BYTE *)v50 + 32) = 1;
  v57 = *v50;
  v58 = (__int64)v50[3] - 1;
  v50[3] = (_QWORD *)v58;
  v59 = v57[2];
  if ( *v57 == v59 )
  {
    sub_141939070((_DWORD)v57, v59, 1, 1, 1);
    v59 = v57[2];
  }
  *(_BYTE *)(v57[1] + v59) = 10;
  v60 = v59 + 1;
  v57[2] = v60;
  if ( v58 )
  {
    v61 = v92[1];
    v62 = (unsigned __int64)v92[2];
    for ( m = 0; m != v58; ++m )
    {
      if ( v62 > *v57 - v60 )
      {
        sub_141939070((_DWORD)v57, v60, v62, 1, 1);
        v60 = v57[2];
      }
      else if ( !v62 )
      {
        goto LABEL_86;
      }
      sub_1419234B0(v60 + v57[1], v61, v62);
LABEL_86:
      v60 += v62;
      v57[2] = v60;
    }
  }
  if ( *v57 == v60 )
  {
    sub_141939070((_DWORD)v57, v60, 1, 1, 1);
    v60 = v57[2];
  }
  *(_BYTE *)(v57[1] + v60) = 125;
  v57[2] = v60 + 1;
  v64 = v82;
  v45 = (__int64)v83;
  if ( v82 == -1 )
    goto LABEL_65;
  v65 = v84;
  if ( v84 <= 0x800000 )
  {
    v86 = v82;
    v92 = v83;
    sub_1416B18A0((unsigned int)&v82, v76, a3, (unsigned int)&unk_141A4C05D, 36);
    v70 = (__int128 *)v84;
    v91 = (__int64)v83;
    if ( (sub_1407C8880(v83, v84, v92, v65) & 1) != 0 || (v71 = sub_1407B92D0(v71)) != 0 )
    {
      v81 = v71;
      v89 = v91;
      v90 = v70;
      *(_QWORD *)&v77 = &v89;
      *((_QWORD *)&v77 + 1) = sub_1416CE600;
      v78 = (__int64)&v81;
      v79 = (__int64)sub_1416EA080;
      sub_1416DAFA0(&v87, &unk_141A47B73, &v77);
      v77 = v87;
      v78 = v88;
      if ( (unsigned int)(v81 & 3) - 2 >= 2 && (v81 & 3) != 0 )
      {
        v90 = (__int128 *)(v81 - 1);
        LOBYTE(v89) = 3;
        sub_1416EBAD0(&v90);
      }
      v72 = v85;
      *v85 = 10;
      result = *(double *)&v77;
      *(_OWORD *)(v72 + 1) = v77;
      v72[3] = v78;
    }
    else
    {
      *v85 = -1;
    }
    v73 = v92;
    v74 = v86;
    if ( v82 )
      result = sub_140001660(v91, v82, 1);
    if ( v74 )
    {
      v68 = (__int64)v73;
      v69 = v74;
      return sub_140001660(v68, v69, 1);
    }
  }
  else
  {
    nullsub_1(v50, v22);
    v66 = (void *)sub_140001650(52, 1);
    if ( !v66 )
    {
      v86 = v64;
      v92 = (_QWORD **)v45;
      sub_14196B2DB(1, 52);
    }
    result = 4.712954074155909e257;
    qmemcpy(v66, "no-account model restore journal exceeds write limit", 52);
    v67 = v85;
    *v85 = 10;
    v67[1] = 52;
    v67[2] = v66;
    v67[3] = 52;
    if ( v64 )
    {
      v68 = v45;
      v69 = v64;
      return sub_140001660(v68, v69, 1);
    }
  }
  return result;
}
