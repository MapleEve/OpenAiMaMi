// module: codexmate_lib/core/repository
// addr: 0x14041d410
// name: sub_14041D410
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_14041D410(_QWORD *a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rax
  char v17; // r9
  __int64 v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  __int128 v24; // [rsp+80h] [rbp+0h]
  _QWORD v25[4]; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v26[312]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v27; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v28; // [rsp+268h] [rbp+1E8h]
  __int64 v29; // [rsp+270h] [rbp+1F0h]
  __int128 v30; // [rsp+280h] [rbp+200h] BYREF
  __int128 v31; // [rsp+290h] [rbp+210h]
  __int128 v32; // [rsp+2A0h] [rbp+220h]
  __int128 v33; // [rsp+2B0h] [rbp+230h]
  __int128 v34; // [rsp+2C0h] [rbp+240h]
  __int128 v35; // [rsp+2D0h] [rbp+250h]
  const char *v36; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v37; // [rsp+2F0h] [rbp+270h]
  const char *v38; // [rsp+2F8h] [rbp+278h]
  __int64 v39; // [rsp+300h] [rbp+280h]
  char **v40; // [rsp+308h] [rbp+288h]
  __int128 v41; // [rsp+310h] [rbp+290h] BYREF
  __int128 v42; // [rsp+320h] [rbp+2A0h]
  __int128 v43; // [rsp+330h] [rbp+2B0h]
  __int128 v44; // [rsp+340h] [rbp+2C0h]
  __int128 v45; // [rsp+350h] [rbp+2D0h]
  __int128 v46; // [rsp+360h] [rbp+2E0h]
  __int64 v47; // [rsp+370h] [rbp+2F0h]
  __int64 v48; // [rsp+380h] [rbp+300h]
  __int64 v49; // [rsp+388h] [rbp+308h]
  _QWORD *v50; // [rsp+3A8h] [rbp+328h]
  __int64 v51; // [rsp+3B0h] [rbp+330h]
  char v52; // [rsp+3BFh] [rbp+33Fh] BYREF
  __int64 v53; // [rsp+3C0h] [rbp+340h]

  v53 = -2;
  v50 = a1;
  v4 = *a2;
  v5 = *(_QWORD *)(a3 + 200);
  v6 = *(_QWORD *)(a3 + 208);
  sub_1414A2990((unsigned int)v26, v5, v6, (unsigned int)asc_14174D41A, 2);
  sub_140424780(&v19, v26);
  if ( (_DWORD)v19 == 1 && v6 - (_QWORD)v20 == 36 )
  {
    v7 = *((_QWORD *)&v19 + 1);
    if ( (unsigned int)sub_1416847B0(v5 + v20, a00000000000040, 36) == 0
      && v7 >= 7
      && !(*(_DWORD *)(v5 + v7 - 7) ^ 0x6C6E752D | *(_DWORD *)(v5 + v7 - 4) ^ 0x6B636F6C) )
    {
      *v50 = 2;
      return v50;
    }
  }
  sub_14149BB70(&v27, *(_QWORD *)(a3 + 224), *(_QWORD *)(a3 + 232));
  v8 = v29;
  v9 = *(_QWORD *)(*v4 + 328LL);
  v18 = *(_QWORD *)(*v4 + 336LL);
  v51 = v28;
  sub_1403CE160((unsigned int)v26, v28, v29, v9, v18);
  if ( *(_DWORD *)v26 == -1 )
  {
    sub_141486270(v26, v51, v8);
    if ( *(_DWORD *)v26 == 2 )
    {
      *(_QWORD *)&v41 = 2;
      *((_QWORD *)&v41 + 1) = *(_QWORD *)&v26[8];
    }
    else
    {
      if ( (v26[76] & 0x10) == 0 && ((*(_DWORD *)&v26[80] & 0x20000000) == 0 || (*(_WORD *)&v26[76] & 0x400) == 0) )
        goto LABEL_12;
      *(_QWORD *)&v19 = v51;
      *((_QWORD *)&v19 + 1) = v8;
      *(_QWORD *)v26 = &v19;
      *(_QWORD *)&v26[8] = sub_14148F3A0;
      sub_14149C0F0((char *)&v41 + 8, &unk_14174E2E9, v26);
      *(_QWORD *)&v41 = 9;
    }
LABEL_22:
    v24 = v46;
    v23 = v45;
    v22 = v44;
    v21 = v43;
    v20 = v42;
    v19 = v41;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v30 = a3 + 192;
      *((_QWORD *)&v30 + 1) = sub_1400015F0;
      *(_QWORD *)&v31 = &v19;
      *((_QWORD *)&v31 + 1) = sub_140B036A0;
      *(_QWORD *)v26 = 0;
      *(_QWORD *)&v26[8] = aCodexmateLibCo_16;
      *(_OWORD *)&v26[16] = 0x1Fu;
      *(_QWORD *)&v26[32] = aSrcCoreReposit;
      *(_QWORD *)&v26[40] = 22;
      *(_QWORD *)&v26[48] = 2;
      *(_QWORD *)&v26[56] = aCodexmateLibCo_16;
      *(_QWORD *)&v26[64] = 31;
      *(_QWORD *)&v26[72] = 0x6F700000001LL;
      *(_QWORD *)&v26[80] = &unk_14174CAAE;
      *(_QWORD *)&v26[88] = &v30;
      sub_1412C36A0(&v52, v26);
    }
    *v50 = 2;
    sub_14034ED40(&v19);
    goto LABEL_25;
  }
  v46 = *(_OWORD *)&v26[80];
  v45 = *(_OWORD *)&v26[64];
  v44 = *(_OWORD *)&v26[48];
  v43 = *(_OWORD *)&v26[32];
  v42 = *(_OWORD *)&v26[16];
  v41 = *(_OWORD *)v26;
  if ( *(_QWORD *)v26 != -1 )
    goto LABEL_22;
LABEL_12:
  sub_1403C9010(v26, v51, v8);
  if ( *(_QWORD *)v26 != -2 )
  {
    sub_141684120(&v19, v26, 176);
    if ( (unsigned __int8)sub_1403CBE70(&v19) )
    {
      sub_1403C9DD0(v26, &v19, v51, v8);
      if ( *(_DWORD *)v26 == 2 )
      {
        v35 = *(_OWORD *)&v26[88];
        v34 = *(_OWORD *)&v26[72];
        v33 = *(_OWORD *)&v26[56];
        v32 = *(_OWORD *)&v26[40];
        v31 = *(_OWORD *)&v26[24];
        v30 = *(_OWORD *)&v26[8];
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v25[0] = a3 + 192;
          v25[1] = sub_1400015F0;
          v25[2] = &v30;
          v25[3] = sub_140B036A0;
          v36 = aCodexmateLibCo_16;
          v37 = 31;
          v38 = aCodexmateLibCo_16;
          v39 = 31;
          v40 = &off_14174CBC0;
          sub_140985BA0(&unk_14174CB7C, v25, 2, &v36);
        }
        *v50 = 2;
        sub_14034ED40(&v30);
      }
      else
      {
        sub_141684120(&v41, v26, 152);
        v12 = v4[1];
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          v15 = 160 * v13;
          while ( *(_QWORD *)(v14 + 136) != v6 || (unsigned int)sub_1416847B0(*(_QWORD *)(v14 + 128), v5, v6) )
          {
            v14 += 160;
            v15 -= 160;
            if ( !v15 )
              goto LABEL_38;
          }
        }
        else
        {
LABEL_38:
          v14 = 0;
        }
        v16 = v4[2];
        v17 = *(_DWORD *)v16 != 2
           && *(_QWORD *)(v16 + 32) == v6
           && (unsigned int)sub_1416847B0(*(_QWORD *)(v16 + 24), v5, v6) == 0;
        sub_1403A60C0((__int64)v26, (__int128 *)a3, (__int64)&v41, v17, v14);
        sub_141684120(v50, v26, 352);
        if ( (_QWORD)v42 )
          sub_140001660(*((_QWORD *)&v42 + 1), v42, 1);
        if ( *((_QWORD *)&v43 + 1) )
          sub_140001660(v44, *((_QWORD *)&v43 + 1), 1);
        if ( (__int64)v45 > 0 )
          sub_140001660(*((_QWORD *)&v45 + 1), v45, 1);
        if ( *((__int64 *)&v46 + 1) > 0 )
          sub_140001660(v47, *((_QWORD *)&v46 + 1), 1);
        if ( v48 > 0 )
          sub_140001660(v49, v48, 1);
      }
    }
    else
    {
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v41 = a3 + 192;
        *((_QWORD *)&v41 + 1) = sub_1400015F0;
        *(_QWORD *)v26 = 0;
        *(_QWORD *)&v26[8] = aCodexmateLibCo_16;
        *(_OWORD *)&v26[16] = 0x1Fu;
        *(_QWORD *)&v26[32] = aSrcCoreReposit;
        *(_QWORD *)&v26[40] = 22;
        *(_QWORD *)&v26[48] = 2;
        *(_QWORD *)&v26[56] = aCodexmateLibCo_16;
        *(_QWORD *)&v26[64] = 31;
        *(_QWORD *)&v26[72] = 0x70800000001LL;
        *(_QWORD *)&v26[80] = &unk_14174CB31;
        *(_QWORD *)&v26[88] = &v41;
        sub_1412C36A0(&v52, v26);
      }
      *v50 = 2;
    }
    sub_14034E960(&v19);
    v10 = v27;
    if ( v27 )
      goto LABEL_26;
    return v50;
  }
  v35 = *(_OWORD *)&v26[88];
  v34 = *(_OWORD *)&v26[72];
  v33 = *(_OWORD *)&v26[56];
  v32 = *(_OWORD *)&v26[40];
  v31 = *(_OWORD *)&v26[24];
  v30 = *(_OWORD *)&v26[8];
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v36 = (const char *)(a3 + 192);
    v37 = (__int64)sub_1400015F0;
    v38 = (const char *)&v30;
    v39 = (__int64)sub_140B036A0;
    *(_QWORD *)&v41 = 0;
    *((_QWORD *)&v41 + 1) = aCodexmateLibCo_16;
    v42 = 0x1Fu;
    *(_QWORD *)&v43 = aSrcCoreReposit;
    *((_QWORD *)&v43 + 1) = 22;
    *(_QWORD *)&v44 = 2;
    *((_QWORD *)&v44 + 1) = aCodexmateLibCo_16;
    *(_QWORD *)&v45 = 31;
    *((_QWORD *)&v45 + 1) = 0x70000000001LL;
    *(_QWORD *)&v46 = &unk_14174CBD8;
    *((_QWORD *)&v46 + 1) = &v36;
    sub_1412C36A0(&v52, &v41);
  }
  *v50 = 2;
  sub_14034ED40(&v30);
LABEL_25:
  v10 = v27;
  if ( v27 )
LABEL_26:
    sub_140001660(v51, v10, 1);
  return v50;
}