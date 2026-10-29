// win 1.2.7 | module src/core/quota_history.rs | ea 0x140ec7a00 | name sub_140EC7A00
// win 1.2.7 | module src/core/quota_history.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140EC7A00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rcx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  void *v15; // rax
  int v17; // ecx
  unsigned int v18; // r15d
  int v19; // r12d
  int v20; // r13d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  HANDLE v27; // rcx
  void *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // eax
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int128 v48; // xmm0
  __int64 (__fastcall *v49)(unsigned __int64); // rax
  char v50; // al
  unsigned __int64 v51; // rdi
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  int v54[3]; // [rsp+2Ch] [rbp-54h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-48h] BYREF
  __int64 v56; // [rsp+40h] [rbp-40h]
  __int64 v57; // [rsp+48h] [rbp-38h] BYREF
  __int64 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+58h] [rbp-28h]
  char v60; // [rsp+68h] [rbp-18h]
  HANDLE hObject; // [rsp+70h] [rbp-10h]
  __int64 v62; // [rsp+78h] [rbp-8h]
  __int64 v63; // [rsp+80h] [rbp+0h]
  _QWORD *v64; // [rsp+88h] [rbp+8h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+90h] [rbp+10h]
  __int128 v66; // [rsp+98h] [rbp+18h]
  __int64 v67; // [rsp+A8h] [rbp+28h] BYREF
  int v68; // [rsp+B0h] [rbp+30h]
  unsigned int v69; // [rsp+B4h] [rbp+34h]
  __int64 v70; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v71; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v72[24]; // [rsp+D0h] [rbp+50h]
  __int64 v73; // [rsp+E8h] [rbp+68h]
  __int64 v74; // [rsp+F0h] [rbp+70h]
  __int64 v75; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v76; // [rsp+11Ch] [rbp+9Ch] BYREF
  int v77; // [rsp+124h] [rbp+A4h]
  __int64 v78; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v79; // [rsp+130h] [rbp+B0h]
  __int64 (__fastcall *v80)(); // [rsp+138h] [rbp+B8h]
  __int64 v81; // [rsp+140h] [rbp+C0h]
  __int64 v82; // [rsp+148h] [rbp+C8h]
  __int64 v83; // [rsp+150h] [rbp+D0h]
  __int128 v84; // [rsp+158h] [rbp+D8h] BYREF
  unsigned __int64 v85; // [rsp+168h] [rbp+E8h]
  __int64 v86; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v87; // [rsp+178h] [rbp+F8h]
  char v88; // [rsp+183h] [rbp+103h] BYREF
  char v89; // [rsp+184h] [rbp+104h]
  char v90; // [rsp+185h] [rbp+105h]
  char v91; // [rsp+186h] [rbp+106h]
  char v92; // [rsp+187h] [rbp+107h]
  __int64 v93; // [rsp+188h] [rbp+108h]

  v93 = -2;
  sub_141407EE0(&v67);
  DWORD2(v71) = v68;
  *(_QWORD *)&v71 = v67;
  sub_141406800(&v57, &v71, v69);
  v10 = v57;
  if ( !(_DWORD)v57 )
    sub_141938FE0(aLocalTimeOutOf_1, 43, &off_141A55C40);
  if ( a5 == 4 )
  {
    if ( *(_DWORD *)a4 == 1801807223 )
    {
      v17 = (((unsigned int)v57 >> 4) & 0x1FF) + (v57 & 7);
      v10 = sub_1414083C0((unsigned int)v57, (unsigned __int16)(v17 - 7 * ((unsigned int)(9363 * v17) >> 16)));
      if ( v10 )
        goto LABEL_15;
      goto LABEL_23;
    }
LABEL_11:
    nullsub_1(v9);
    v15 = (void *)sub_140001650(49, 1);
    if ( !v15 )
      sub_141938D2B(1, 49);
    qmemcpy(v15, "Quota history range must be today, week, or month", 49);
    *a1 = 9;
    a1[1] = 49;
    a1[2] = v15;
    a1[3] = 49;
    return a1;
  }
  if ( a5 != 5 )
    goto LABEL_11;
  if ( *(_DWORD *)a4 ^ 0x61646F74 | *(unsigned __int8 *)(a4 + 4) ^ 0x79 )
  {
    v11 = *(_DWORD *)a4 ^ 0x746E6F6D;
    v9 = v11 | *(unsigned __int8 *)(a4 + 4) ^ 0x68u;
    if ( !(v11 | *(unsigned __int8 *)(a4 + 4) ^ 0x68) )
    {
      v12 = ((unsigned int)v57 >> 3) & 0x3FF;
      if ( (unsigned int)v12 >= 0x2DD )
        sub_1419390C3(((unsigned int)v57 >> 3) & 0x3FF, 733, &off_141A65DD8);
      v13 = (unsigned __int8)byte_141A65AF9[v12] + (_DWORD)v12;
      v14 = ((unsigned __int64)(v57 & 8 | (8 * (_WORD)v13) & 0x3E08) >> 3) | 2;
      if ( v13 > 0x33F )
        sub_1419390C3(v14, 832, &off_141A59210);
      if ( byte_141A58E60[v14] )
      {
        v10 = v57 & 0xFFFFE00F | (8 * (v14 - byte_141A58E60[v14])) & 0xFFFFFFF0;
        goto LABEL_15;
      }
LABEL_23:
      nullsub_1(v14);
      v28 = (void *)sub_140001650(34, 1);
      if ( !v28 )
        sub_141938D2B(1, 34);
      qmemcpy(v28, "Quota history date is out of range", 34);
      *a1 = 9;
      a1[1] = 34;
      a1[2] = v28;
      a1[3] = 34;
      return a1;
    }
    goto LABEL_11;
  }
LABEL_15:
  v18 = v67;
  v19 = ((int)v67 >> 13) - 1;
  v20 = 0;
  if ( (int)v67 >> 13 <= 0 )
  {
    v21 = (1 - ((int)v67 >> 13)) / 0x190u + 1;
    v19 += 400 * v21;
    v20 = -146097 * v21;
  }
  v82 = HIDWORD(v67);
  *(_QWORD *)&v84 = 0;
  *((_QWORD *)&v84 + 1) = 8;
  v85 = 0;
  LODWORD(v71) = 0;
  *((_QWORD *)&v71 + 1) = 0;
  *(_DWORD *)v72 = 7;
  *(_QWORD *)&v72[4] = 0x100000000LL;
  *(_QWORD *)&v72[9] = 0;
  v92 = 1;
  if ( sub_141690E40(&v71) == 1 )
  {
    v24 = v22 & 3;
    switch ( v22 & 3 )
    {
      case 0uLL:
        if ( *(_BYTE *)(v22 + 16) )
          goto LABEL_66;
        goto LABEL_69;
      case 1uLL:
        if ( !*(_BYTE *)(v22 + 31) )
          goto LABEL_69;
        goto LABEL_66;
      case 2uLL:
        v87 = v22;
        v89 = 1;
        v49 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v23, v22) + 8);
        v89 = 1;
        v50 = v49(HIDWORD(v87));
        v22 = v87;
        if ( !v50 )
          goto LABEL_69;
        goto LABEL_66;
      case 3uLL:
        if ( !BYTE4(v22) )
        {
LABEL_69:
          v87 = v22;
          a1[3] = v85;
          *(_OWORD *)(a1 + 1) = v84;
          *a1 = -1;
          if ( (unsigned int)(v24 - 2) >= 2 && v24 )
          {
            *((_QWORD *)&v71 + 1) = v87 - 1;
            LOBYTE(v71) = 3;
            v89 = 0;
            sub_1416BCB00((char *)&v71 + 8);
          }
          return a1;
        }
LABEL_66:
        *a1 = 2;
        a1[1] = v22;
        v51 = v85;
        if ( v85 )
          goto LABEL_78;
        break;
    }
    goto LABEL_82;
  }
  v87 = v22;
  v55 = v22;
  v90 = 1;
  sub_1416831B0(&v71, &v55);
  if ( (_DWORD)v71 == 2 )
  {
    v26 = *((_QWORD *)&v71 + 1);
    *a1 = 2;
    a1[1] = v26;
    v27 = (HANDLE)v87;
    goto LABEL_77;
  }
  v29 = v75;
  nullsub_1(v25);
  v30 = sub_140001650(0x2000, 1);
  if ( !v30 )
    sub_141938D2B(1, 0x2000);
  v31 = (unsigned int)((v19 / 100) >> 2);
  v82 += 86400LL * (int)(v31 + ((1461 * v19) >> 2) + v20 + ((v18 >> 4) & 0x1FF) - v19 / 100 - 719163);
  v57 = v30;
  v58 = 0x2000;
  v59 = 0;
  v60 = 0;
  hObject = (HANDLE)v87;
  v62 = v29;
  v63 = v29;
  v78 = 0;
  v79 = 1;
  v70 = 0;
  v32 = 0;
  v33 = 0x100003600LL;
LABEL_27:
  while ( 1 )
  {
    v80 = nullptr;
    LOBYTE(v31) = 10;
    if ( sub_140BAE790(&v57, v31, &v78) == 1 )
      break;
    if ( !v34 || !v80 || *((_BYTE *)v80 + v79 - 1) != 10 )
    {
      if ( v32 && *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v64 = &v70;
        v65 = sub_1416BCB10;
        *(_QWORD *)&v71 = aCodexmateLibCo_10;
        *((_QWORD *)&v71 + 1) = 34;
        *(_QWORD *)v72 = aCodexmateLibCo_10;
        *(_QWORD *)&v72[8] = 34;
        *(_QWORD *)&v72[16] = &off_141A55B68;
        sub_140BAD520(&unk_141A55B11, &v64, 2, &v71);
      }
      *(_QWORD *)&v71 = &v88;
      if ( v85 >= 2 )
      {
        if ( v85 >= 0x15 )
          sub_14065B900(*((_QWORD *)&v84 + 1), v85, &v71);
        else
          sub_140DFFE60(*((_QWORD *)&v84 + 1), v85, 1, &v71);
      }
      a1[3] = v85;
      *(_OWORD *)(a1 + 1) = v84;
      *a1 = -1;
      if ( v78 )
        sub_140001660(v79, v78, 1);
      if ( v58 )
        sub_140001660(v57, v58, 1);
      CloseHandle(hObject);
      return a1;
    }
    v31 = 0;
    while ( 1 )
    {
      v35 = *(unsigned __int8 *)(v79 + v31);
      if ( v35 > 0x20 || !_bittest64(&v33, v35) )
        break;
      if ( v80 == (__int64 (__fastcall *)())++v31 )
        goto LABEL_27;
    }
    v64 = (_QWORD *)v79;
    v65 = v80;
    v66 = 0;
    sub_140630770(&v71, &v64);
    if ( (_DWORD)v71 == 2 )
    {
      v70 = ++v32;
      sub_14002F910((char *)&v71 + 8);
    }
    else
    {
      v36 = *(_QWORD *)&v72[16];
      v37 = v73;
      v38 = v75;
      v56 = v74;
      if ( a6 )
      {
        if ( v74 != a7 )
          goto LABEL_52;
        v81 = v75;
        v86 = *(_QWORD *)&v72[16];
        v39 = sub_1418F4B70(v73, a6);
        v38 = v81;
        v36 = v86;
        if ( v39 )
          goto LABEL_52;
      }
      if ( v38 > v82 )
        goto LABEL_52;
      v83 = v37;
      v31 = v38 / 86400;
      v40 = (v38 % 86400) >> 63;
      v81 = v38;
      v41 = v38 % 86400 + 86400;
      if ( v38 % 86400 >= 0 )
        v41 = v38 % 86400;
      if ( (unsigned __int64)(v40 + v31 - 2146764485) < 0xFFFFFFFF00000000uLL )
        goto LABEL_51;
      v86 = v36;
      v91 = 1;
      v42 = sub_1414083E0((unsigned int)(v31 + v40 + 719163));
      v36 = v86;
      if ( !v42 )
        goto LABEL_51;
      v76 = __PAIR64__(v41, v42);
      v77 = 0;
      v91 = 1;
      v44 = sub_141408110(&v88, &v76, v43, v86);
      LODWORD(v65) = v77;
      v64 = (_QWORD *)v76;
      v91 = 1;
      sub_141406800(v54, &v64, v44);
      v36 = v86;
      if ( !v54[0] )
      {
LABEL_51:
        v37 = v83;
        goto LABEL_52;
      }
      v37 = v83;
      if ( v54[0] < v10 )
      {
LABEL_52:
        if ( v36 )
          sub_140001660(v37, v36, 1);
      }
      else
      {
        v45 = v85;
        if ( v85 == (_QWORD)v84 )
          sub_14190F9D0(&v84);
        v46 = *((_QWORD *)&v84 + 1);
        v47 = v45 << 6;
        v48 = v71;
        *(_OWORD *)(*((_QWORD *)&v84 + 1) + v47 + 16) = *(_OWORD *)v72;
        *(_OWORD *)(v46 + v47) = v48;
        *(_QWORD *)(v46 + v47 + 32) = v86;
        *(_QWORD *)(v46 + v47 + 40) = v83;
        *(_QWORD *)(v46 + v47 + 48) = v56;
        v31 = v81;
        *(_QWORD *)(v46 + v47 + 56) = v81;
        v85 = v45 + 1;
      }
    }
  }
  *a1 = 2;
  a1[1] = v34;
  if ( v78 )
    sub_140001660(v79, v78, 1);
  if ( v58 )
    sub_140001660(v57, v58, 1);
  v27 = hObject;
LABEL_77:
  CloseHandle(v27);
  v51 = v85;
  if ( v85 )
  {
LABEL_78:
    v52 = (_QWORD *)(*((_QWORD *)&v84 + 1) + 40LL);
    do
    {
      v53 = *(v52 - 1);
      if ( v53 )
        sub_140001660(*v52, v53, 1);
      v52 += 8;
      --v51;
    }
    while ( v51 );
  }
LABEL_82:
  if ( (_QWORD)v84 )
    sub_140001660(*((_QWORD *)&v84 + 1), (_QWORD)v84 << 6, 8);
  return a1;
}
