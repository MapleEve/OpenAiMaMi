// win 1.2.7 | module src/core/account_io.rs | ea 0x14020a0c0 | name sub_14020A0C0
// win 1.2.7 | module src/core/account_io.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14020A0C0(__int128 *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int128 a5, __int128 *a6)
{
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // r12
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rdi
  __int64 v18; // rbx
  void *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rdx
  __m128i *v32; // rdx
  unsigned __int64 v33; // r14
  __int64 (__fastcall *v34)(unsigned __int64); // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // rdi
  _OWORD v47[6]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v48; // [rsp+90h] [rbp+10h] BYREF
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int128 v50; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+38h]
  __m128i v52; // [rsp+C0h] [rbp+40h]
  __int128 v53; // [rsp+D0h] [rbp+50h]
  __int128 v54; // [rsp+E0h] [rbp+60h]
  __int128 v55; // [rsp+F0h] [rbp+70h]
  _QWORD v56[3]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v57; // [rsp+118h] [rbp+98h] BYREF
  __int128 v58; // [rsp+128h] [rbp+A8h]
  __m128i v59; // [rsp+138h] [rbp+B8h]
  __int128 v60; // [rsp+148h] [rbp+C8h]
  __int128 v61; // [rsp+158h] [rbp+D8h]
  __int128 v62; // [rsp+168h] [rbp+E8h]
  _QWORD v63[3]; // [rsp+178h] [rbp+F8h] BYREF
  _QWORD v64[3]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v65; // [rsp+1A8h] [rbp+128h] BYREF
  unsigned __int64 v66; // [rsp+1B8h] [rbp+138h]
  _BYTE v67[72]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v68; // [rsp+208h] [rbp+188h]
  __m128i v69; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v70; // [rsp+280h] [rbp+200h]
  __int128 v71; // [rsp+290h] [rbp+210h]
  __int128 v72; // [rsp+2A0h] [rbp+220h]
  __int64 v73; // [rsp+320h] [rbp+2A0h]
  __m128i *v74; // [rsp+328h] [rbp+2A8h]
  const char *v75; // [rsp+330h] [rbp+2B0h]
  __m128i *v76; // [rsp+338h] [rbp+2B8h]
  unsigned __int64 v77; // [rsp+340h] [rbp+2C0h]
  __m128i *v78; // [rsp+348h] [rbp+2C8h] BYREF
  unsigned __int64 v79; // [rsp+350h] [rbp+2D0h] BYREF
  const char *v80; // [rsp+358h] [rbp+2D8h]
  __int64 v81; // [rsp+360h] [rbp+2E0h]
  _BYTE v82[72]; // [rsp+368h] [rbp+2E8h]
  __int64 v83; // [rsp+3B8h] [rbp+338h]
  __int64 v84; // [rsp+3C0h] [rbp+340h]
  __int64 v85; // [rsp+3D0h] [rbp+350h]
  __int64 v86; // [rsp+3D8h] [rbp+358h]
  unsigned __int64 v87; // [rsp+3F8h] [rbp+378h]
  HANDLE v88; // [rsp+400h] [rbp+380h] BYREF
  HANDLE hObject; // [rsp+408h] [rbp+388h] BYREF
  _QWORD *v90; // [rsp+410h] [rbp+390h]
  __int64 v91; // [rsp+418h] [rbp+398h]
  __int64 v92; // [rsp+420h] [rbp+3A0h]
  char v93; // [rsp+42Eh] [rbp+3AEh]
  char v94; // [rsp+42Fh] [rbp+3AFh]
  __int64 v95; // [rsp+430h] [rbp+3B0h]
  char v96; // [rsp+43Dh] [rbp+3BDh]
  char v97; // [rsp+43Eh] [rbp+3BEh]
  char v98; // [rsp+43Fh] [rbp+3BFh]
  __int64 v99; // [rsp+440h] [rbp+3C0h]

  v99 = -2;
  result = (__int64)a6;
  v65 = a5;
  if ( !a4 )
  {
    a1[5] = a6[5];
    a1[4] = a6[4];
    v14 = *a6;
    v15 = a6[1];
    v16 = a6[2];
    a1[3] = a6[3];
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
    return result;
  }
  v90 = a2;
  v73 = a4;
  v9 = a3 + 104 * a4;
  sub_140FA6060(&v78, a3, v9);
  v10 = (__int64)v78;
  v11 = v79;
  v12 = (__m128i *)v80;
  v13 = v81;
  if ( v78 != (__m128i *)-1LL )
  {
    v72 = *(_OWORD *)&v82[48];
    v71 = *(_OWORD *)&v82[32];
    v70 = *(_OWORD *)&v82[16];
    v69 = *(__m128i *)v82;
LABEL_25:
    v23 = v11;
LABEL_26:
    v78 = (__m128i *)v10;
    v79 = v23;
    v80 = (const char *)v12;
    v81 = v13;
    *(__m128i *)v82 = v69;
    *(_OWORD *)&v82[16] = v70;
    *(_OWORD *)&v82[32] = v71;
    *(_OWORD *)&v82[48] = v72;
    *(_QWORD *)v67 = &v65;
    *(_QWORD *)&v67[8] = sub_140186EE0;
    *(_QWORD *)&v67[16] = a6;
    *(_QWORD *)&v67[24] = sub_14104A7D0;
    *(_QWORD *)&v67[32] = &v78;
    *(_QWORD *)&v67[40] = sub_14104A7D0;
    sub_1416ABFD0(&v48, &unk_1419DBF87, v67);
    *((_QWORD *)a1 + 3) = v49;
    *(__int128 *)((char *)a1 + 8) = v48;
    *(_QWORD *)a1 = 10;
    sub_1401954F0(&v78);
    return sub_1401954F0(a6);
  }
  v87 = v79;
  v64[0] = v79;
  v75 = v80;
  v64[1] = v80;
  v64[2] = v81;
  v17 = v90[33];
  v18 = v90[34];
  sub_1416828D0(
    (unsigned int)&v69,
    v17,
    v18,
    (unsigned int)".live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
    15);
  v95 = v69.m128i_i64[1];
  sub_140FE2210(
    (__int64)&v78,
    v69.m128i_i32[2],
    v70,
    (__int64)"live auth.account-domain.lockaccount state.account-transition.lockaccount transition",
    9);
  v10 = (__int64)v78;
  v66 = a3;
  if ( v78 != (__m128i *)-1LL )
  {
    v92 = (__int64)v80;
    v13 = v81;
    *(_OWORD *)v67 = *(_OWORD *)v82;
    *(_OWORD *)&v67[16] = *(_OWORD *)&v82[16];
    *(_OWORD *)&v67[32] = *(_OWORD *)&v82[32];
    *(_OWORD *)&v67[48] = *(_OWORD *)&v82[48];
    v19 = (void *)v79;
    v20 = v69.m128i_i64[0];
    if ( !v69.m128i_i64[0] )
      goto LABEL_8;
    goto LABEL_7;
  }
  v19 = (void *)v79;
  v20 = v69.m128i_i64[0];
  if ( v69.m128i_i64[0] )
LABEL_7:
    sub_140001660(v95, v20, 1);
LABEL_8:
  if ( (_DWORD)v10 != -1 )
  {
    v72 = *(_OWORD *)&v67[48];
    v71 = *(_OWORD *)&v67[32];
    v70 = *(_OWORD *)&v67[16];
    v69 = *(__m128i *)v67;
LABEL_22:
    sub_1403FB7C0(v64);
    if ( v87 )
      sub_140001660(v75, 8 * v87, 8);
    v12 = (__m128i *)v92;
    v11 = (unsigned __int64)v19;
    goto LABEL_25;
  }
  hObject = v19;
  sub_1416828D0(
    (unsigned int)&v69,
    v17,
    v18,
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v95 = v69.m128i_i64[1];
  sub_140FE2210(
    (__int64)&v78,
    v69.m128i_i32[2],
    v70,
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v10 = (__int64)v78;
  if ( v78 != (__m128i *)-1LL )
  {
    v92 = (__int64)v80;
    v13 = v81;
    *(_OWORD *)v67 = *(_OWORD *)v82;
    *(_OWORD *)&v67[16] = *(_OWORD *)&v82[16];
    *(_OWORD *)&v67[32] = *(_OWORD *)&v82[32];
    *(_OWORD *)&v67[48] = *(_OWORD *)&v82[48];
    v19 = (void *)v79;
    v21 = v69.m128i_i64[0];
    if ( !v69.m128i_i64[0] )
      goto LABEL_15;
    goto LABEL_14;
  }
  v19 = (void *)v79;
  v21 = v69.m128i_i64[0];
  if ( v69.m128i_i64[0] )
LABEL_14:
    sub_140001660(v95, v21, 1);
LABEL_15:
  if ( (_DWORD)v10 != -1 )
  {
    v72 = *(_OWORD *)&v67[48];
    v71 = *(_OWORD *)&v67[32];
    v70 = *(_OWORD *)&v67[16];
    v69 = *(__m128i *)v67;
    goto LABEL_17;
  }
  v88 = v19;
  sub_140209AE0(&v57, v90[37], v90[38]);
  v23 = v66;
  if ( (_DWORD)v57 != -1 )
  {
    v47[5] = v62;
    v47[4] = v61;
    v47[3] = v60;
    v47[2] = v59;
    v47[1] = v58;
    v47[0] = v57;
    v12 = (__m128i *)v90[5];
    v24 = v90[6];
    sub_140ED4870(&v69, v12, v24);
    v91 = v69.m128i_i64[0];
    if ( v69.m128i_i64[0] == -2 )
    {
      v98 = 1;
      sub_141695A00(&v78, v12, v24);
      if ( (_DWORD)v78 == 2 )
      {
        v25 = v79;
        v26 = v79 & 3;
        if ( (unsigned int)(v26 - 2) >= 2 )
        {
LABEL_34:
          if ( v26 )
          {
            v79 = v25 - 1;
            LOBYTE(v78) = 3;
            v98 = 1;
            sub_1416BCB00(&v79);
          }
        }
        v95 = -1;
        v10 = -1;
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    v98 = 1;
    if ( (unsigned __int8)sub_140ED8760(&v69) )
    {
      sub_140195410(&v69);
      v95 = -1;
      v10 = -1;
LABEL_48:
      sub_1401954F0(v47);
      if ( v10 != -1 )
      {
        v72 = v55;
        v71 = v54;
        v70 = v53;
        v69 = v52;
        sub_141057160(&v88);
        CloseHandle(v88);
        v19 = (void *)v95;
LABEL_17:
        v22 = sub_141412E80(&hObject);
        if ( v22 && (unsigned int)(v22 & 3) - 2 >= 2 && (v22 & 3) != 0 )
        {
          v79 = v22 - 1;
          LOBYTE(v78) = 3;
          sub_1416BCB00(&v79);
        }
        CloseHandle(hObject);
        goto LABEL_22;
      }
      v91 = v13;
      goto LABEL_53;
    }
    v98 = 1;
    if ( !(unsigned __int8)sub_140ED7E50(&v69) )
    {
LABEL_45:
      v78 = (__m128i *)v47;
      v79 = (unsigned __int64)sub_14104A7D0;
      v98 = 1;
      sub_1416ABFD0(v56, &unk_1419DC092, &v78);
      v95 = v56[0];
      v92 = v56[1];
      v10 = 10;
      v13 = v56[2];
      if ( v91 == -2 )
      {
LABEL_46:
        sub_1401954F0(&v69.m128i_u64[1]);
        goto LABEL_48;
      }
LABEL_47:
      sub_140195410(&v69);
      goto LABEL_48;
    }
    sub_1418F44E0((__m128i *)v67, &v69, 0xB0u);
    sub_140ED5630(&v78, v67, v12, v24);
    if ( (_DWORD)v78 == 2 )
    {
      v10 = v79;
      v95 = (__int64)v80;
      v92 = v81;
      v13 = *(_QWORD *)v82;
      v52 = *(__m128i *)&v82[8];
      v53 = *(_OWORD *)&v82[24];
      v54 = *(_OWORD *)&v82[40];
      v55 = *(_OWORD *)&v82[56];
      goto LABEL_47;
    }
    v39 = *(_QWORD *)&v82[40];
    v40 = *(_QWORD *)&v82[32];
    v12 = *(__m128i **)&v82[56];
    v91 = *(_QWORD *)&v82[64];
    v41 = v83;
    v92 = v84;
    v42 = v85;
    v95 = v86;
    if ( v80 )
    {
      v74 = *(__m128i **)&v82[56];
      v43 = v83;
      v44 = v85;
      v45 = *(_QWORD *)&v82[40];
      sub_140001660(v81, v80, 1);
      v39 = v45;
      v42 = v44;
      v41 = v43;
      v12 = v74;
    }
    if ( v40 )
      sub_140001660(v39, v40, 1);
    if ( (unsigned __int64)&v12[-1].m128i_u64[1] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v91, v12, 1);
      if ( (unsigned __int64)(v41 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_112:
        if ( (unsigned __int64)(v42 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_114;
        goto LABEL_113;
      }
    }
    else if ( (unsigned __int64)(v41 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_112;
    }
    sub_140001660(v92, v41, 1);
    if ( (unsigned __int64)(v42 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_114:
      v95 = *(_QWORD *)&v82[8];
      v13 = *(_QWORD *)&v82[24];
      v92 = *(_QWORD *)&v82[16];
      v46 = v69.m128i_i64[0];
      sub_140195410(v67);
      v10 = -1;
      if ( v46 != -2 )
        goto LABEL_48;
      goto LABEL_46;
    }
LABEL_113:
    sub_140001660(v95, v42, 1);
    goto LABEL_114;
  }
  v27 = *((_QWORD *)&v57 + 1);
  v28 = v90[5];
  v12 = (__m128i *)v90[6];
  v97 = 1;
  v95 = *((_QWORD *)&v57 + 1);
  sub_140ED4870(&v78, v28, v12);
  if ( v27 == -1 )
  {
    v69.m128i_i64[0] = -1;
  }
  else
  {
    v68 = v62;
    *(_OWORD *)&v67[56] = v61;
    *(_OWORD *)&v67[40] = v60;
    *(__m128i *)&v67[24] = v59;
    *(_OWORD *)&v67[8] = v58;
    *(_QWORD *)v67 = v27;
    v69 = v59;
    *(_QWORD *)&v70 = v60;
    sub_1403FB530(v67);
    if ( v95 )
      sub_140001660(*(_QWORD *)&v67[8], 424 * v95, 8);
  }
  v94 = 0;
  sub_14020D340((unsigned int)v67, (unsigned int)&v78, v28, (_DWORD)v12, (__int64)&v69);
  v92 = *(_QWORD *)&v67[8];
  v95 = *(_QWORD *)v67;
  v91 = *(_QWORD *)&v67[16];
LABEL_53:
  v69.m128i_i64[0] = 0;
  v74 = (__m128i *)v90[41];
  v90 = (_QWORD *)v90[42];
  v29 = 0;
  while ( v23 != v9 )
  {
    v13 = v9 - 104;
    if ( v95 == -1 || v91 != *(_QWORD *)(v9 - 88) || (unsigned int)sub_1418F4B70(v92, *(_QWORD *)(v9 - 96)) )
    {
      v30 = *(_QWORD *)(v9 - 72);
      v12 = *(__m128i **)(v9 - 64);
      sub_140ED9AE0((unsigned int)&v78, v30, (_DWORD)v12, (_DWORD)v74, (__int64)v90);
      if ( (_DWORD)v78 != -1 )
      {
        sub_1401954F0(&v78);
        goto LABEL_55;
      }
      sub_14169D480(&v78, v30, v12);
      v25 = (unsigned __int64)v78;
      v31 = v79;
      v76 = v78;
      if ( v78 == (__m128i *)-1LL )
      {
        v12 = (__m128i *)(v79 & 3);
        switch ( v79 & 3 )
        {
          case 0uLL:
            v33 = v79;
            v96 = 1;
            v34 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v26, v79) + 8);
            v96 = 1;
            LOBYTE(v35) = v34(HIDWORD(v33));
            v31 = v33;
            break;
          case 1uLL:
            v35 = HIDWORD(v79);
            break;
          default:
            goto LABEL_34;
        }
        if ( !(_BYTE)v35 && *(_QWORD *)(v9 - 24) == -1 )
        {
          *(_QWORD *)v67 = v31;
          v96 = 0;
          sub_140032B80(v67);
          v9 -= 104;
        }
        else
        {
          v69.m128i_i64[0] = ++v29;
          if ( (unsigned int)((_DWORD)v12 - 2) >= 2 && v12 )
          {
            *(_QWORD *)&v67[8] = v31 - 1;
            v67[0] = 3;
            sub_1416BCB00(&v67[8]);
          }
          v9 -= 104;
        }
      }
      else
      {
        v77 = v79;
        if ( v80 == *(const char **)(v9 - 32) && !(unsigned int)sub_1418F4B70(v77, *(_QWORD *)(v9 - 40)) )
        {
          if ( *(_QWORD *)(v9 - 24) == -1 )
          {
            v36 = sub_141695140(v30, v12);
            *(_QWORD *)v67 = v36;
            if ( !v36 )
              goto LABEL_65;
            v93 = 1;
            v12 = (__m128i *)v36;
            if ( !(unsigned __int8)sub_1401C6A70(v36) )
            {
              v78 = v12;
              v93 = 0;
              sub_140032B80(&v78);
              goto LABEL_65;
            }
            v32 = v12;
          }
          else if ( (sub_140222E10(v30, v12, *(_QWORD *)(v9 - 16), *(_QWORD *)(v9 - 8)) & 1) == 0 )
          {
            sub_1401BD710(v32);
            goto LABEL_65;
          }
          v69.m128i_i64[0] = ++v29;
          if ( ((unsigned __int8)v32 & 3u) - 2 >= 2 && ((unsigned __int8)v32 & 3) != 0 )
          {
            v79 = (unsigned __int64)&v32[-1].m128i_u64[1] + 7;
            LOBYTE(v78) = 3;
            sub_1416BCB00(&v79);
          }
        }
        else
        {
          v69.m128i_i64[0] = ++v29;
        }
LABEL_65:
        v9 -= 104;
        if ( v76 )
        {
          sub_140001660(v77, v76, 1);
          v9 = v13;
        }
      }
    }
    else
    {
LABEL_55:
      v69.m128i_i64[0] = ++v29;
      v9 -= 104;
    }
  }
  if ( v29 )
  {
    *(_QWORD *)v67 = v73;
    v78 = &v69;
    v79 = (unsigned __int64)sub_1416BCB10;
    v80 = v67;
    v81 = (__int64)sub_1416BCB10;
    sub_1416ABFD0(v63, &unk_1419DBE5B, &v78);
    v23 = v63[0];
    v12 = (__m128i *)v63[1];
    v10 = 10;
    v13 = v63[2];
  }
  else
  {
    v10 = -1;
  }
  if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v92, v95, 1);
  v37 = sub_141412E80(&v88);
  if ( v37 && (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
  {
    v79 = v37 - 1;
    LOBYTE(v78) = 3;
    sub_1416BCB00(&v79);
  }
  CloseHandle(v88);
  v38 = sub_141412E80(&hObject);
  if ( v38 && (unsigned int)(v38 & 3) - 2 >= 2 && (v38 & 3) != 0 )
  {
    v79 = v38 - 1;
    LOBYTE(v78) = 3;
    sub_1416BCB00(&v79);
  }
  CloseHandle(hObject);
  sub_1403FB7C0(v64);
  if ( v87 )
    sub_140001660(v75, 8 * v87, 8);
  if ( v29 )
    goto LABEL_26;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v69.m128i_i64[0] = v73;
    *(_QWORD *)v67 = &v69;
    *(_QWORD *)&v67[8] = sub_1416BCB10;
    *(_QWORD *)&v67[16] = &v65;
    *(_QWORD *)&v67[24] = sub_140186EE0;
    v78 = (__m128i *)aCodexmateLibCo_23;
    v79 = 31;
    v80 = aCodexmateLibCo_23;
    v81 = 31;
    *(_QWORD *)v82 = &off_1419DBF28;
    sub_140BAD520(&unk_1419DBEC7, v67, 2, &v78);
  }
  v78 = (__m128i *)&v65;
  v79 = (unsigned __int64)sub_140186EE0;
  v80 = (const char *)a6;
  v81 = (__int64)sub_14104A7D0;
  sub_1416ABFD0(&v50, &unk_1419DBF5F, &v78);
  *((_QWORD *)a1 + 3) = v51;
  *(__int128 *)((char *)a1 + 8) = v50;
  *(_QWORD *)a1 = 10;
  return sub_1401954F0(a6);
}
