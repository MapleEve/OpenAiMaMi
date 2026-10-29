// win 1.2.7 latest-exe | module src/core/quota_history.rs | ea 0x1407c77a0 | successor of pre-update 0x140ec7a00 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.97, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_1407C77A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  int v21; // ecx
  unsigned int v22; // r15d
  int v23; // r12d
  int v24; // r13d
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  HANDLE v32; // rcx
  void *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  __int64 v43; // r10
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r14
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned int v49; // eax
  __int64 v50; // r8
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int128 v54; // xmm0
  unsigned __int64 v55; // rbx
  __int64 (__fastcall *v56)(unsigned __int64); // rax
  char v57; // al
  unsigned __int64 v58; // rdi
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  int v61[3]; // [rsp+2Ch] [rbp-54h] BYREF
  __int64 v62; // [rsp+38h] [rbp-48h] BYREF
  __int64 v63; // [rsp+40h] [rbp-40h]
  _QWORD *v64; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+50h] [rbp-30h]
  __int128 v66; // [rsp+58h] [rbp-28h]
  __int64 v67; // [rsp+68h] [rbp-18h] BYREF
  __int64 v68; // [rsp+70h] [rbp-10h]
  __int128 v69; // [rsp+78h] [rbp-8h]
  char v70; // [rsp+88h] [rbp+8h]
  HANDLE hObject; // [rsp+90h] [rbp+10h]
  __int64 v72; // [rsp+98h] [rbp+18h]
  __int64 v73; // [rsp+A0h] [rbp+20h]
  __int64 v74; // [rsp+A8h] [rbp+28h] BYREF
  int v75; // [rsp+B0h] [rbp+30h]
  unsigned int v76; // [rsp+B4h] [rbp+34h]
  __int64 v77; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v78; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v79[24]; // [rsp+D0h] [rbp+50h]
  __int64 v80; // [rsp+E8h] [rbp+68h]
  __int64 v81; // [rsp+F0h] [rbp+70h]
  __int64 v82; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v83; // [rsp+11Ch] [rbp+9Ch] BYREF
  int v84; // [rsp+124h] [rbp+A4h]
  __int64 v85; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v86; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v87)(); // [rsp+138h] [rbp+B8h]
  __int64 v88; // [rsp+140h] [rbp+C0h]
  __int64 v89; // [rsp+148h] [rbp+C8h]
  void *v90; // [rsp+150h] [rbp+D0h]
  __int64 v91; // [rsp+158h] [rbp+D8h]
  __int128 v92; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int64 v93; // [rsp+170h] [rbp+F0h]
  __int64 v94; // [rsp+178h] [rbp+F8h]
  char v95; // [rsp+183h] [rbp+103h] BYREF
  char v96; // [rsp+184h] [rbp+104h]
  char v97; // [rsp+185h] [rbp+105h]
  char v98; // [rsp+186h] [rbp+106h]
  char v99; // [rsp+187h] [rbp+107h]
  __int64 v100; // [rsp+188h] [rbp+108h]

  v100 = -2;
  sub_141436F90(&v74);
  DWORD2(v78) = v75;
  *(_QWORD *)&v78 = v74;
  sub_141432CF0(&v67, &v78, v76);
  v13 = v67;
  if ( !(_DWORD)v67 )
    sub_14196B590(aLocalTimeOutOf_1, 43, &off_141A45EC0);
  if ( a5 == 4 )
  {
    if ( *(_DWORD *)a4 == 1801807223 )
    {
      v21 = (((unsigned int)v67 >> 4) & 0x1FF) + (v67 & 7);
      v13 = sub_1414345F0((unsigned int)v67, (unsigned __int16)(v21 - 7 * ((unsigned int)(9363 * v21) >> 16)));
      if ( v13 )
        goto LABEL_15;
      goto LABEL_23;
    }
LABEL_11:
    nullsub_1(v12, v11);
    v19 = (void *)sub_140001650(49, 1);
    if ( !v19 )
      sub_14196B2DB(1, 49);
    qmemcpy(v19, "Quota history range must be today, week, or month", 49);
    *a1 = 9;
    a1[1] = 49;
    a1[2] = v19;
    a1[3] = 49;
    return a1;
  }
  if ( a5 != 5 )
    goto LABEL_11;
  if ( *(_DWORD *)a4 ^ 0x61646F74 | *(unsigned __int8 *)(a4 + 4) ^ 0x79 )
  {
    v14 = *(_DWORD *)a4 ^ 0x746E6F6D;
    v12 = v14 | *(unsigned __int8 *)(a4 + 4) ^ 0x68u;
    if ( !(v14 | *(unsigned __int8 *)(a4 + 4) ^ 0x68) )
    {
      v15 = ((unsigned int)v67 >> 3) & 0x3FF;
      if ( (unsigned int)v15 >= 0x2DD )
        sub_14196B673(((unsigned int)v67 >> 3) & 0x3FF, 733, &off_141A4E8F8);
      v16 = (unsigned __int8)byte_141A4E615[v15] + (_DWORD)v15;
      v17 = v67 & 8;
      v18 = (((unsigned int)v17 | (8 * (_WORD)v16) & 0x3E08) >> 3) | 2LL;
      if ( v16 > 0x33F )
        sub_14196B673(v18, 832, &off_141A48720);
      if ( byte_141A48370[v18] )
      {
        v13 = v67 & 0xFFFFE00F | (8 * (v18 - byte_141A48370[v18])) & 0xFFFFFFF0;
        goto LABEL_15;
      }
LABEL_23:
      nullsub_1(v18, v17);
      v33 = (void *)sub_140001650(34, 1);
      if ( !v33 )
        sub_14196B2DB(1, 34);
      qmemcpy(v33, "Quota history date is out of range", 34);
      *a1 = 9;
      a1[1] = 34;
      a1[2] = v33;
      a1[3] = 34;
      return a1;
    }
    goto LABEL_11;
  }
LABEL_15:
  v22 = v74;
  v23 = ((int)v74 >> 13) - 1;
  v24 = 0;
  if ( (int)v74 >> 13 <= 0 )
  {
    v25 = (1 - ((int)v74 >> 13)) / 0x190u + 1;
    v23 += 400 * v25;
    v24 = -146097 * v25;
  }
  v89 = HIDWORD(v74);
  *(_QWORD *)&v92 = 0;
  *((_QWORD *)&v92 + 1) = 8;
  v93 = 0;
  LODWORD(v78) = 0;
  *((_QWORD *)&v78 + 1) = 0;
  *(_DWORD *)v79 = 7;
  *(_QWORD *)&v79[4] = 0x100000000LL;
  *(_QWORD *)&v79[9] = 0;
  v99 = 1;
  v67 = sub_1416BFE10(&v78, a2, a3);
  v68 = v26;
  if ( v67 == 1 )
  {
    v28 = v26 & 3;
    switch ( v26 & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(v26 + 16) )
          goto LABEL_66;
        goto LABEL_69;
      case 1LL:
        if ( !*(_BYTE *)(v26 + 31) )
          goto LABEL_69;
        goto LABEL_66;
      case 2LL:
        v96 = 1;
        v55 = v26;
        v56 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v27, v26) + 8);
        v96 = 1;
        v57 = v56(HIDWORD(v55));
        v26 = v55;
        if ( !v57 )
          goto LABEL_69;
        goto LABEL_66;
      case 3LL:
        if ( !BYTE4(v26) )
        {
LABEL_69:
          a1[3] = v93;
          *(_OWORD *)(a1 + 1) = v92;
          *a1 = -1;
          if ( (unsigned int)(v28 - 2) >= 2 && v28 )
          {
            *((_QWORD *)&v78 + 1) = v26 - 1;
            LOBYTE(v78) = 3;
            v96 = 0;
            sub_1416EBAD0((char *)&v78 + 8);
          }
          return a1;
        }
LABEL_66:
        *a1 = 2;
        a1[1] = v26;
        v58 = v93;
        if ( v93 )
          goto LABEL_78;
        break;
    }
    goto LABEL_82;
  }
  v90 = (void *)v26;
  v62 = v26;
  v97 = 1;
  sub_1416B2180(&v78, &v62);
  if ( (_DWORD)v78 == 2 )
  {
    v31 = *((_QWORD *)&v78 + 1);
    *a1 = 2;
    a1[1] = v31;
    v32 = v90;
    goto LABEL_77;
  }
  v34 = v82;
  nullsub_1(v30, v29);
  v35 = sub_140001650(0x2000, 1);
  if ( !v35 )
    sub_14196B2DB(1, 0x2000);
  v36 = (unsigned int)((v23 / 100) >> 2);
  v89 += 86400LL * (int)(v36 + ((1461 * v23) >> 2) + v24 + ((v22 >> 4) & 0x1FF) - v23 / 100 - 719163);
  v67 = v35;
  v68 = 0x2000;
  v69 = 0;
  v70 = 0;
  hObject = v90;
  v72 = v34;
  v73 = v34;
  v85 = 0;
  v86 = 1;
  v77 = 0;
  v37 = 0;
  v38 = 0x100003600LL;
LABEL_27:
  while ( 1 )
  {
    v87 = nullptr;
    LOBYTE(v36) = 10;
    if ( sub_140C42FE0(&v67, v36, &v85) == 1 )
      break;
    if ( !v39 || !v87 || *((_BYTE *)v87 + v86 - 1) != 10 )
    {
      if ( v37 && *(_QWORD *)off_14223FF10 >= 2u )
      {
        v64 = &v77;
        v65 = sub_1416EBAE0;
        *(_QWORD *)&v78 = aCodexmateLibCo_9;
        *((_QWORD *)&v78 + 1) = 34;
        *(_QWORD *)v79 = aCodexmateLibCo_9;
        *(_QWORD *)&v79[8] = 34;
        *(_QWORD *)&v79[16] = &off_141A45DE8;
        sub_140AF72B0(&unk_141A45D93, &v64, 2, &v78);
      }
      *(_QWORD *)&v78 = &v95;
      if ( v93 >= 2 )
      {
        if ( v93 >= 0x15 )
          sub_1401B7180(*((_QWORD *)&v92 + 1), v93, &v78);
        else
          sub_140CC34A0(*((_QWORD *)&v92 + 1), v93, 1, &v78);
      }
      a1[3] = v93;
      *(_OWORD *)(a1 + 1) = v92;
      *a1 = -1;
      if ( v85 )
        sub_140001660(v86, v85, 1);
      if ( v68 )
        sub_140001660(v67, v68, 1);
      CloseHandle(hObject);
      return a1;
    }
    v36 = 0;
    while ( 1 )
    {
      v40 = *(unsigned __int8 *)(v86 + v36);
      if ( v40 > 0x20 || !_bittest64(&v38, v40) )
        break;
      if ( v87 == (__int64 (__fastcall *)())++v36 )
        goto LABEL_27;
    }
    v64 = (_QWORD *)v86;
    v65 = v87;
    v66 = 0;
    sub_140D8EA30(&v78, &v64);
    if ( (_DWORD)v78 == 2 )
    {
      v77 = ++v37;
      sub_140032F30((char *)&v78 + 8);
    }
    else
    {
      v41 = *(_QWORD *)&v79[16];
      v42 = v80;
      v43 = v82;
      v63 = v81;
      if ( a6 )
      {
        if ( v81 != a7 )
          goto LABEL_52;
        v88 = v82;
        v94 = *(_QWORD *)&v79[16];
        v44 = sub_141923B40(v80, a6, a7);
        v43 = v88;
        v41 = v94;
        if ( v44 )
          goto LABEL_52;
      }
      if ( v43 > v89 )
        goto LABEL_52;
      v91 = v42;
      v36 = v43 / 86400;
      v45 = (v43 % 86400) >> 63;
      v88 = v43;
      v46 = v43 % 86400 + 86400;
      if ( v43 % 86400 >= 0 )
        v46 = v43 % 86400;
      if ( (unsigned __int64)(v45 + v36 - 2146764485) < 0xFFFFFFFF00000000uLL )
        goto LABEL_51;
      v94 = v41;
      v98 = 1;
      v47 = sub_141434610((unsigned int)(v36 + v45 + 719163));
      v41 = v94;
      if ( !v47 )
        goto LABEL_51;
      v83 = __PAIR64__(v46, v47);
      v84 = 0;
      v98 = 1;
      v49 = sub_1414371C0(&v95, &v83, v48, v94);
      LODWORD(v65) = v84;
      v64 = (_QWORD *)v83;
      v98 = 1;
      sub_141432CF0(v61, &v64, v49);
      v41 = v94;
      if ( !v61[0] )
      {
LABEL_51:
        v42 = v91;
        goto LABEL_52;
      }
      v42 = v91;
      if ( v61[0] < v13 )
      {
LABEL_52:
        if ( v41 )
          sub_140001660(v42, v41, 1);
      }
      else
      {
        v51 = v93;
        if ( v93 == (_QWORD)v92 )
          sub_141939C10(&v92, v36, v50, v94);
        v52 = *((_QWORD *)&v92 + 1);
        v53 = v51 << 6;
        v54 = v78;
        *(_OWORD *)(*((_QWORD *)&v92 + 1) + v53 + 16) = *(_OWORD *)v79;
        *(_OWORD *)(v52 + v53) = v54;
        *(_QWORD *)(v52 + v53 + 32) = v94;
        *(_QWORD *)(v52 + v53 + 40) = v91;
        *(_QWORD *)(v52 + v53 + 48) = v63;
        v36 = v88;
        *(_QWORD *)(v52 + v53 + 56) = v88;
        v93 = v51 + 1;
      }
    }
  }
  *a1 = 2;
  a1[1] = v39;
  if ( v85 )
    sub_140001660(v86, v85, 1);
  if ( v68 )
    sub_140001660(v67, v68, 1);
  v32 = hObject;
LABEL_77:
  CloseHandle(v32);
  v58 = v93;
  if ( v93 )
  {
LABEL_78:
    v59 = (_QWORD *)(*((_QWORD *)&v92 + 1) + 40LL);
    do
    {
      v60 = *(v59 - 1);
      if ( v60 )
        sub_140001660(*v59, v60, 1);
      v59 += 8;
      --v58;
    }
    while ( v58 );
  }
LABEL_82:
  if ( (_QWORD)v92 )
    sub_140001660(*((_QWORD *)&v92 + 1), (_QWORD)v92 << 6, 8);
  return a1;
}
