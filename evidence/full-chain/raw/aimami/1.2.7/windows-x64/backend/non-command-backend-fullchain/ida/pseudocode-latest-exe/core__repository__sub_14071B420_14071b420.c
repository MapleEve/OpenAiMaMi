// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x14071b420 | successor of pre-update 0x140ed6dc0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
_OWORD *__fastcall sub_14071B420(_OWORD *a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  char *v5; // rdi
  unsigned __int8 *v7; // rbx
  __int64 v8; // rax
  char *v9; // rcx
  unsigned int v10; // r14d
  int v11; // r11d
  int v12; // r10d
  int v13; // r14d
  unsigned __int8 v14; // r9
  unsigned __int64 v15; // r9
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r15
  char *v20; // rax
  __int64 v21; // rsi
  int v22; // ecx
  int v23; // edx
  int v24; // r9d
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // r15
  _OWORD *v31; // rbx
  char *v32; // r14
  int v33; // r15d
  int v34; // esi
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 (__fastcall *v41)(unsigned __int64); // rax
  __int128 v42; // xmm0
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rdx
  unsigned __int8 *v46; // r13
  unsigned __int8 *v47; // r12
  char *v48; // rax
  int v49; // ecx
  int v50; // r8d
  int v51; // r10d
  int v52; // ecx
  unsigned __int8 v53; // r9
  int v54; // esi
  int v55; // edi
  int v56; // r14d
  __int128 v57; // xmm0
  __int128 v58; // xmm0
  __int128 v59; // xmm0
  __int64 v60; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v61[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v62; // [rsp+58h] [rbp-28h]
  __int128 v63; // [rsp+68h] [rbp-18h]
  __int128 v64; // [rsp+78h] [rbp-8h]
  __int128 v65; // [rsp+88h] [rbp+8h]
  _BYTE v66[24]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v67; // [rsp+F8h] [rbp+78h]
  __int128 v68; // [rsp+108h] [rbp+88h]
  __int128 v69; // [rsp+118h] [rbp+98h]
  __int128 v70; // [rsp+128h] [rbp+A8h]
  __int128 v71; // [rsp+138h] [rbp+B8h]
  __int128 v72; // [rsp+190h] [rbp+110h]
  __int128 v73; // [rsp+1A0h] [rbp+120h]
  __int128 v74; // [rsp+1B0h] [rbp+130h]
  __int128 v75; // [rsp+1C0h] [rbp+140h]
  __int128 v76; // [rsp+1D0h] [rbp+150h]
  __int64 v77; // [rsp+1E0h] [rbp+160h]
  __int64 v78; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v79; // [rsp+1F0h] [rbp+170h]
  __int64 v80; // [rsp+1F8h] [rbp+178h]
  __int128 v81; // [rsp+200h] [rbp+180h] BYREF
  __int128 v82; // [rsp+210h] [rbp+190h]
  __int128 v83; // [rsp+220h] [rbp+1A0h]
  __int128 v84; // [rsp+230h] [rbp+1B0h]
  __int128 v85; // [rsp+240h] [rbp+1C0h]
  __int64 v86; // [rsp+250h] [rbp+1D0h]
  _OWORD *v87; // [rsp+2B0h] [rbp+230h]
  __int64 v88; // [rsp+2B8h] [rbp+238h]
  __int128 v89; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v90; // [rsp+2D0h] [rbp+250h]
  char *v91; // [rsp+2E0h] [rbp+260h]
  __int64 v92; // [rsp+2E8h] [rbp+268h]
  __int64 v93; // [rsp+2F0h] [rbp+270h]
  char v94; // [rsp+2FCh] [rbp+27Ch]
  char v95; // [rsp+2FDh] [rbp+27Dh]
  char v96; // [rsp+2FEh] [rbp+27Eh]
  char v97; // [rsp+2FFh] [rbp+27Fh]
  __int64 v98; // [rsp+300h] [rbp+280h]

  v98 = -2;
  v5 = a4;
  if ( a5 > 0xB4 )
  {
LABEL_18:
    sub_14071CC40((_DWORD)a1, a2, a3, (_DWORD)v5, a5);
    return a1;
  }
  v7 = (unsigned __int8 *)&a4[a5];
  v8 = 0x400000034002101LL;
  v9 = a4;
  while ( v9 != (char *)v7 )
  {
    v10 = (unsigned __int8)*v9;
    if ( *v9 < 0 )
    {
      v11 = v10 & 0x1F;
      v12 = v9[1] & 0x3F;
      if ( (unsigned __int8)v10 <= 0xDFu )
      {
        v9 += 2;
        v10 = v12 | (v11 << 6);
        if ( v10 < 0x20 )
          goto LABEL_18;
      }
      else
      {
        v13 = (v12 << 6) | v9[2] & 0x3F;
        if ( (unsigned __int8)*v9 < 0xF0u )
        {
          v9 += 3;
          v10 = (v11 << 12) | v13;
          if ( v10 < 0x20 )
            goto LABEL_18;
        }
        else
        {
          v14 = v9[3];
          v9 += 4;
          v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
          if ( v10 < 0x20 )
            goto LABEL_18;
        }
      }
    }
    else
    {
      ++v9;
      if ( v10 < 0x20 )
        goto LABEL_18;
    }
    if ( v10 - 127 < 0x21 )
      goto LABEL_18;
    v15 = v10 - 34;
    if ( (unsigned int)v15 <= 0x3A )
    {
      if ( _bittest64(&v8, v15) )
        goto LABEL_18;
    }
    if ( v10 == 124 )
      goto LABEL_18;
  }
  v92 = a2;
  v88 = a3;
  v87 = a1;
  *(_QWORD *)&v81 = 0;
  *((_QWORD *)&v81 + 1) = 1;
  v17 = 0;
  v91 = v5;
  v18 = 0;
  v19 = 0;
LABEL_20:
  *(_QWORD *)&v82 = v17;
  while ( v5 != (char *)v7 )
  {
    v20 = v5;
    v21 = v19;
    v22 = (unsigned __int8)*v5;
    if ( *v5 < 0 )
    {
      v23 = v22 & 0x1F;
      v24 = v5[1] & 0x3F;
      if ( (unsigned __int8)v22 <= 0xDFu )
      {
        v5 += 2;
        v22 = v24 | (v23 << 6);
      }
      else
      {
        v25 = (v24 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)*v5 < 0xF0u )
        {
          v5 += 3;
          v22 = (v23 << 12) | v25;
        }
        else
        {
          v5 += 4;
          v22 = ((v23 & 7) << 18) | (v25 << 6) | v20[3] & 0x3F;
        }
      }
    }
    else
    {
      ++v5;
    }
    v19 += v5 - v20;
    v26 = v22 - 47;
    if ( v26 <= 0x11 )
    {
      v27 = 133121;
      if ( _bittest(&v27, v26) )
      {
        v28 = v21 - v18;
        if ( v21 - v18 > (unsigned __int64)(v81 - v17) )
        {
          sub_141939070((unsigned int)&v81, v17, v21 - v18, 1, 1);
          v17 = v82;
          if ( v21 != v18 )
LABEL_33:
            sub_1419234B0(v17 + *((_QWORD *)&v81 + 1), &v91[v18], v28);
        }
        else if ( v21 != v18 )
        {
          goto LABEL_33;
        }
        v29 = v28 + v17;
        *(_QWORD *)&v82 = v29;
        if ( (_QWORD)v81 == v29 )
        {
          sub_141939070((unsigned int)&v81, v29, 1, 1, 1);
          v29 = v82;
        }
        *(_BYTE *)(*((_QWORD *)&v81 + 1) + v29) = 95;
        v17 = v29 + 1;
        v18 = v19;
        goto LABEL_20;
      }
    }
  }
  v30 = a5 - v18;
  if ( a5 - v18 <= (__int64)v81 - v17 )
  {
    if ( a5 == v18 )
      goto LABEL_42;
    goto LABEL_41;
  }
  sub_141939070((unsigned int)&v81, v17, a5 - v18, 1, 1);
  v17 = v82;
  if ( a5 != v18 )
LABEL_41:
    sub_1419234B0(v17 + *((_QWORD *)&v81 + 1), &v91[v18], v30);
LABEL_42:
  *(_OWORD *)v66 = v81;
  *(_QWORD *)&v66[16] = v30 + v17;
  *(_QWORD *)&v81 = v66;
  *((_QWORD *)&v81 + 1) = sub_1400015F0;
  sub_1416DAFA0(&v78, &unk_141A3E098, &v81);
  v31 = v87;
  v32 = v91;
  v33 = v88;
  v34 = v92;
  if ( *(_QWORD *)v66 )
    sub_140001660(*(_QWORD *)&v66[8], *(_QWORD *)v66, 1);
  v93 = v79;
  sub_1416B18A0((unsigned int)&v89, v34, v33, v79, v80);
  if ( v78 )
    sub_140001660(v93, v78, 1);
  v35 = v90;
  v97 = 1;
  v93 = *((_QWORD *)&v89 + 1);
  sub_1416C4520(&v81, *((_QWORD *)&v89 + 1), v90);
  if ( (_DWORD)v81 == 2 )
  {
    v38 = *((_QWORD *)&v81 + 1);
    *((_QWORD *)&v72 + 1) = *((_QWORD *)&v81 + 1);
    *(_QWORD *)&v72 = 2;
    v39 = BYTE8(v81) & 3;
    switch ( BYTE8(v81) & 3 )
    {
      case 0:
        goto LABEL_50;
      case 1:
        goto LABEL_57;
      case 2:
        goto LABEL_55;
      case 3:
        goto LABEL_56;
    }
  }
  v72 = v81;
  v77 = v86;
  v76 = v85;
  v75 = v84;
  v74 = v83;
  v73 = v82;
  if ( (_QWORD)v81 == 2 )
  {
    v38 = *((_QWORD *)&v72 + 1);
    v39 = BYTE8(v72) & 3;
    switch ( BYTE8(v72) & 3 )
    {
      case 0:
LABEL_50:
        LOBYTE(v40) = *(_BYTE *)(v38 + 16);
        break;
      case 1:
LABEL_57:
        LOBYTE(v40) = *(_BYTE *)(v38 + 31);
        break;
      case 2:
LABEL_55:
        v96 = 1;
        v95 = 1;
        v94 = 1;
        v41 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v37, v36) + 8);
        v96 = 1;
        v95 = 1;
        v94 = 1;
        LOBYTE(v40) = v41(HIDWORD(v38));
        break;
      case 3:
LABEL_56:
        v40 = HIDWORD(v38);
        break;
    }
    if ( (_BYTE)v40 )
    {
      v42 = v89;
      v31[1] = v90;
      *v31 = v42;
      if ( (unsigned int)(v39 - 2) >= 2 && v39 )
      {
        *((_QWORD *)&v81 + 1) = v38 - 1;
        LOBYTE(v81) = 3;
        v96 = 1;
        v95 = 0;
        v94 = 0;
        sub_1416EBAD0((char *)&v81 + 8);
      }
      return v31;
    }
    if ( (unsigned int)(v39 - 2) >= 2 && v39 )
    {
      *((_QWORD *)&v81 + 1) = v38 - 1;
      LOBYTE(v81) = 3;
      v97 = 1;
      sub_1416EBAD0((char *)&v81 + 8);
    }
    v97 = 1;
    sub_1416E1760((unsigned int)&v81, (_DWORD)v32, a5, (unsigned int)asc_141A39730, 2);
    v97 = 1;
    sub_14076F380(v66, &v81);
    if ( *(_DWORD *)v66 == 1 )
    {
      v43 = *(_QWORD *)&v66[8];
      if ( *(_QWORD *)&v66[8] )
      {
        v44 = *(_QWORD *)&v66[16];
        v97 = 1;
        if ( !(unsigned __int8)sub_14076EEF0(asc_141A39730, 2, v32, *(_QWORD *)&v66[8]) )
        {
          v45 = a5 - v44;
          v46 = (unsigned __int8 *)&v32[v44];
          v47 = (unsigned __int8 *)&v32[v43];
          v48 = v32;
          while ( v48 != (char *)v47 )
          {
            v49 = (unsigned __int8)*v48;
            if ( *v48 >= 0 )
            {
              ++v48;
            }
            else
            {
              v50 = v49 & 0x1F;
              v51 = v48[1] & 0x3F;
              if ( (unsigned __int8)v49 <= 0xDFu )
              {
                v48 += 2;
                v49 = v51 | (v50 << 6);
              }
              else
              {
                v52 = (v51 << 6) | v48[2] & 0x3F;
                if ( (unsigned __int8)*v48 < 0xF0u )
                {
                  v48 += 3;
                  v49 = (v50 << 12) | v52;
                }
                else
                {
                  v53 = v48[3];
                  v48 += 4;
                  v49 = ((v50 & 7) << 18) | (v52 << 6) | v53 & 0x3F;
                }
              }
            }
            if ( (unsigned int)(v49 - 47) < 0xFFFFFFFE
              && (unsigned int)(v49 - 58) < 0xFFFFFFF6
              && (v49 & 0x1FFFDFu) - 91 < 0xFFFFFFE6 )
            {
              goto LABEL_86;
            }
          }
          v97 = 1;
          if ( (unsigned __int8)sub_1406D54B0(v46, v45) )
            goto LABEL_85;
        }
      }
    }
LABEL_86:
    v97 = 1;
    sub_14071CC40((_DWORD)v31, v92, v33, (_DWORD)v32, a5);
LABEL_87:
    if ( (_QWORD)v89 )
      sub_140001660(v93, v89, 1);
    return v31;
  }
  if ( (BYTE12(v76) & 0x10) != 0 || (v77 & 0x20000000) != 0 && (WORD6(v76) & 0x400) != 0 )
  {
LABEL_85:
    v58 = v89;
    v31[1] = v90;
    *v31 = v58;
    return v31;
  }
  v96 = 0;
  v95 = 1;
  v94 = 1;
  sub_140718ED0(v66, v93, v35);
  if ( *(_QWORD *)v66 == -2 )
  {
    v65 = v71;
    v64 = v70;
    v63 = v69;
    v62 = v68;
    v61[1] = v67;
    v61[0] = *(_OWORD *)&v66[8];
    v60 = 2;
  }
  else
  {
    sub_1419234B0(&v81, v66, 176);
    sub_140719C90(&v60, &v81, v93, v35);
    sub_1406C3160(v66);
    v31 = v87;
    v54 = (int)v91;
    v55 = v88;
    v56 = v92;
    if ( v60 != 2 )
    {
      if ( (_QWORD)v63 == a5 && !(unsigned int)sub_141923B40(*((_QWORD *)&v62 + 1), v91, a5) )
      {
        v59 = v89;
        v31[1] = v90;
        *v31 = v59;
        sub_140037800(&v60);
        return v31;
      }
      sub_14071CC40((_DWORD)v31, v56, v55, v54, a5);
      sub_140037800(&v60);
      goto LABEL_87;
    }
  }
  v57 = v89;
  v31[1] = v90;
  *v31 = v57;
  v96 = 0;
  v95 = 1;
  v94 = 0;
  sub_1406C31E0(v61);
  return v31;
}
