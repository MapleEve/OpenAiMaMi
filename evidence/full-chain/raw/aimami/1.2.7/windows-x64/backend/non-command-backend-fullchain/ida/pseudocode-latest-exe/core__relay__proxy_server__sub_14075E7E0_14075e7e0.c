// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x14075e7e0 | successor of pre-update 0x140dc84a0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_14075E7E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  _BYTE *v4; // r15
  __int64 v6; // rax
  bool v7; // zf
  char v8; // al
  _BYTE *v9; // r9
  _QWORD *v10; // r10
  __int64 *v11; // r11
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // r14
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r8
  char v27; // r14
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // r15
  __int64 v36; // r12
  __int64 *v37; // r14
  __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r8
  __int64 *v42; // rax
  __int64 *v43; // rax
  void (__fastcall *v44)(__int64); // rdx
  __int64 *v46; // rax
  __int128 v47; // xmm0
  __int64 v48; // r14
  __int128 v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+78h] [rbp-8h]
  __int128 v53; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v54; // [rsp+90h] [rbp+10h]
  __int128 v55; // [rsp+98h] [rbp+18h] BYREF
  _BYTE v56[24]; // [rsp+A8h] [rbp+28h]
  __int64 v57; // [rsp+C0h] [rbp+40h]
  __int64 v58; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v59; // [rsp+D8h] [rbp+58h]
  __int64 v60; // [rsp+E0h] [rbp+60h]
  __int64 v61; // [rsp+E8h] [rbp+68h]
  void (__fastcall **v62)(__int64); // [rsp+F0h] [rbp+70h]
  _QWORD *v63; // [rsp+F8h] [rbp+78h]
  _BYTE *v64; // [rsp+100h] [rbp+80h]
  __int64 v65; // [rsp+108h] [rbp+88h]
  __int64 *v66; // [rsp+110h] [rbp+90h]
  char v67; // [rsp+11Fh] [rbp+9Fh]
  __int64 v68; // [rsp+120h] [rbp+A0h]

  v68 = -2;
  v6 = *a2;
  v7 = *a2 == 0;
  v66 = a2;
  if ( !v7 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v9 = (char *)a2 + 57;
      v10 = a2 + 1;
      switch ( *((_BYTE *)a2 + 57) )
      {
        case 0:
          goto LABEL_6;
        case 1:
          sub_14196B990(&off_141A390F8);
        case 2:
          sub_14196B9B0(&off_141A390F8);
        case 3:
          v64 = (char *)a2 + 57;
          v11 = *(__int64 **)a2[6];
          goto LABEL_18;
      }
    }
    sub_14196B830(aUnfoldMustNotB, 63, &off_141A40980);
  }
  *a2 = 2;
  if ( a2[1] < 0 )
    sub_14196B830("internal error: entered unreachable code", 40, &off_141A3BB00);
  v8 = *((_BYTE *)a2 + 40);
  *a2 = 1;
  *((_BYTE *)a2 + 56) = v8;
  v9 = (char *)a2 + 57;
  *((_BYTE *)a2 + 57) = 0;
  v10 = a2 + 1;
LABEL_6:
  *((_WORD *)a2 + 29) = 257;
  v11 = (__int64 *)a2[4];
  v7 = *((_BYTE *)a2 + 56) == 1;
  v64 = v9;
  if ( v7 )
  {
    v63 = v10;
    v65 = *v11;
    v62 = (void (__fastcall **)(__int64))v11;
    v61 = v11[1];
    if ( *(_QWORD *)v61 )
      (*(void (__fastcall **)(__int64))v61)(v65);
    v12 = *(_QWORD *)(v61 + 8);
    if ( v12 )
      sub_140001660(v65, v12, *(_QWORD *)(v61 + 16));
    sub_140001660(v62, 16, 8);
    v13 = v63;
    v14 = v66;
    if ( *v63 )
      sub_140001660(v66[2], *v63, 1);
    *v64 = 1;
    v15 = *v14;
    if ( *v14 != 1 )
      goto LABEL_14;
    goto LABEL_73;
  }
  a2[5] = (__int64)v11;
  a2[6] = (__int64)(a2 + 5);
LABEL_18:
  v63 = v10;
  sub_140188FF0(&v55, v11);
  if ( (_QWORD)v55 == 2 )
  {
    *v64 = 3;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v50 = *(_QWORD *)&v56[8];
  v16 = *(_QWORD *)v56;
  if ( (_DWORD)v55 != 1 )
  {
    v36 = -1;
    LODWORD(v61) = DWORD2(v55);
    v17 = v66;
    if ( *((_BYTE *)v66 + 59) )
      goto LABEL_58;
    goto LABEL_63;
  }
  v17 = v66;
  if ( !*((_QWORD *)&v55 + 1) )
  {
    v49 = *(_OWORD *)&v56[8];
    *((_BYTE *)v66 + 59) = 0;
    v4 = (_BYTE *)v17[4];
    LODWORD(v61) = 1;
    v3 = 1;
    v36 = 0;
    v2 = 0;
    v57 = 0;
    if ( *((_BYTE *)v17 + 59) )
      goto LABEL_58;
    goto LABEL_63;
  }
  v51 = *((_QWORD *)&v55 + 1);
  v52 = *(_QWORD *)v56;
  v53 = *(_OWORD *)&v56[8];
  v18 = v66[3];
  if ( *(_QWORD *)&v56[8] > (unsigned __int64)(v66[1] - v18) )
  {
    sub_141939070((_DWORD)v63, v18, *(_DWORD *)&v56[8], 1, 1);
    v17 = v66;
    v18 = v66[3];
    goto LABEL_24;
  }
  if ( *(_QWORD *)&v56[8] )
  {
LABEL_24:
    v19 = v16;
    v20 = v18;
    sub_1419234B0(v18 + v17[2], v19, v50);
    v18 = v20;
  }
  v21 = v50 + v18;
  v17[3] = v21;
  v58 = 0;
  v59 = 1;
  v60 = 0;
  v22 = 1;
  v23 = 0;
  while ( 1 )
  {
    v24 = v17[2];
    v67 = 1;
    sub_1416E2AB0(&v55, v24, v21);
    if ( !(_BYTE)v55 )
    {
      v37 = v66;
      v38 = v66[2];
      v39 = v66[3];
      if ( v39 > v58 - v23 )
      {
        v48 = v66[2];
        v67 = 1;
        sub_141939070((unsigned int)&v58, v23, v39, 1, 1);
        v22 = v59;
        v23 = v60;
        v38 = v48;
        v37 = v66;
      }
      else if ( !v39 )
      {
LABEL_50:
        v60 = v39 + v23;
        v40 = 0;
        goto LABEL_56;
      }
      sub_1419234B0(v23 + v22, v38, v39);
      goto LABEL_50;
    }
    v25 = *((_QWORD *)&v55 + 1);
    v26 = v66[3];
    if ( *((_QWORD *)&v55 + 1) > v26 )
    {
      v67 = 1;
      sub_14196B880(0, *((_QWORD *)&v55 + 1), v26, &off_141A39110);
    }
    v27 = v56[0];
    v28 = v56[1];
    v29 = v66[2];
    if ( *((_QWORD *)&v55 + 1) > (unsigned __int64)(v58 - v23) )
    {
      v65 = v66[2];
      v67 = 1;
      sub_141939070((unsigned int)&v58, v23, DWORD2(v55), 1, 1);
      v22 = v59;
      v23 = v60;
      v29 = v65;
    }
    else if ( !*((_QWORD *)&v55 + 1) )
    {
      goto LABEL_32;
    }
    sub_1419234B0(v22 + v23, v29, v25);
LABEL_32:
    v30 = v25 + v23;
    v60 = v30;
    if ( (v27 & 1) == 0 )
      break;
    if ( (unsigned __int64)(v58 - v30) <= 2 )
    {
      v67 = 1;
      sub_141939070((unsigned int)&v58, v30, 3, 1, 1);
      v22 = v59;
      v30 = v60;
    }
    *(_BYTE *)(v22 + v30 + 2) = -67;
    *(_WORD *)(v22 + v30) = -16401;
    v23 = v30 + 3;
    v60 = v23;
    v31 = v28 + v25;
    v17 = v66;
    v32 = v66[3];
    v21 = v32 - v31;
    if ( v32 < v31 )
    {
      v67 = 1;
      sub_14196B880(0, v31, v32, &off_141A531B0);
    }
    v66[3] = 0;
    if ( v31 )
    {
      if ( v32 != v31 )
      {
        v33 = v17[2];
        v34 = v33 + v31;
        v35 = v32 - v31;
        sub_1419234B0(v33, v34, v21);
        v21 = v35;
        goto LABEL_41;
      }
      v21 = 0;
    }
    else if ( v32 )
    {
LABEL_41:
      v17[3] = v21;
    }
    else
    {
      v21 = 0;
    }
  }
  v37 = v66;
  v41 = v66[3];
  v40 = v41 - v25;
  if ( v41 < v25 )
  {
    v67 = 1;
    sub_14196B880(0, v25, v41, &off_141A531B0);
  }
  v66[3] = 0;
  if ( v25 )
  {
    if ( v41 == v25 )
      goto LABEL_57;
    sub_1419234B0(v37[2], v37[2] + v25, v40);
  }
  else if ( !v41 )
  {
    goto LABEL_57;
  }
LABEL_56:
  v37[3] = v40;
LABEL_57:
  v67 = 0;
  sub_141683650(&v55, &v58);
  v16 = *((_QWORD *)&v55 + 1);
  v2 = v55;
  v49 = *(_OWORD *)v56;
  v42 = v66;
  v4 = (_BYTE *)v66[4];
  *((_WORD *)v66 + 29) = 0;
  v36 = v42[1];
  v3 = v42[2];
  v57 = v42[3];
  (*(void (__fastcall **)(char *, __int64, _QWORD))(v51 + 32))((char *)&v53 + 8, v52, v53);
  LODWORD(v61) = 0;
  v17 = v66;
  if ( *((_BYTE *)v66 + 59) )
  {
LABEL_58:
    v43 = (__int64 *)v17[4];
    v65 = *v43;
    v54 = v43;
    v62 = (void (__fastcall **)(__int64))v43[1];
    if ( *v62 )
      (*v62)(v65);
    v44 = v62[1];
    if ( v44 )
      sub_140001660(v65, v44, v62[2]);
    sub_140001660(v54, 16, 8);
    v17 = v66;
  }
LABEL_63:
  if ( *((_BYTE *)v17 + 58) && *v63 )
    sub_140001660(v17[2], *v63, 1);
  *v64 = 1;
  if ( v36 == -2 )
  {
    *(_QWORD *)a1 = 2;
    return a1;
  }
  if ( v36 == -1 )
  {
    v13 = v63;
    v15 = *v17;
    if ( *v17 != 1 )
    {
LABEL_14:
      if ( !v15 )
        sub_1406C4A40(v13);
      goto LABEL_74;
    }
LABEL_73:
    sub_14069BB20((__int64)v13);
LABEL_74:
    *v66 = 2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v62 = (void (__fastcall **)(__int64))v3;
  v65 = v36;
  v64 = v4;
  *(_QWORD *)&v55 = v2;
  *((_QWORD *)&v55 + 1) = v16;
  *(_OWORD *)v56 = v49;
  if ( *v17 == 1 )
  {
    sub_14069BB20((__int64)v63);
  }
  else if ( !*v17 )
  {
    sub_1406C4A40(v63);
  }
  v46 = v66;
  *v66 = 0;
  v46[1] = v65;
  v46[2] = (__int64)v62;
  v46[3] = v57;
  v46[4] = (__int64)v64;
  *((_BYTE *)v46 + 40) = v61;
  v47 = v55;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v56;
  *(_OWORD *)(a1 + 8) = v47;
  *(_QWORD *)a1 = 1;
  return a1;
}
