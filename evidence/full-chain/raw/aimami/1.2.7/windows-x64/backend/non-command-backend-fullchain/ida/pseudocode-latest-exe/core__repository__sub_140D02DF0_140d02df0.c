// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d02df0 | successor of pre-update 0x1401cf760 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.868, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140D02DF0(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // r14
  char v21; // al
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  double result; // xmm0_8
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // [rsp+28h] [rbp-58h] BYREF
  __int64 v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-48h]
  __int128 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+50h] [rbp-30h]
  __int128 v41; // [rsp+58h] [rbp-28h]
  __int64 v42; // [rsp+68h] [rbp-18h]
  __int128 v43; // [rsp+70h] [rbp-10h]
  char v44; // [rsp+80h] [rbp+0h]
  _BYTE v45[7]; // [rsp+81h] [rbp+1h]
  __int64 v46; // [rsp+88h] [rbp+8h]
  int v47; // [rsp+90h] [rbp+10h]
  char v48; // [rsp+94h] [rbp+14h]
  __int64 v49; // [rsp+A0h] [rbp+20h]
  _DWORD v50[2]; // [rsp+A8h] [rbp+28h]
  __int128 v51; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+40h]
  __int64 v53; // [rsp+C8h] [rbp+48h]
  const char *v54; // [rsp+D0h] [rbp+50h]
  __int64 v55; // [rsp+D8h] [rbp+58h]
  __int64 v56; // [rsp+E0h] [rbp+60h]
  const char *v57; // [rsp+E8h] [rbp+68h]
  __int64 v58; // [rsp+F0h] [rbp+70h]
  __int64 v59; // [rsp+F8h] [rbp+78h]
  void *v60; // [rsp+100h] [rbp+80h]
  __int128 *v61; // [rsp+108h] [rbp+88h]
  __int128 v62; // [rsp+110h] [rbp+90h] BYREF
  __int128 v63; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v64; // [rsp+130h] [rbp+B0h]
  __int64 v65; // [rsp+138h] [rbp+B8h]
  char v66; // [rsp+147h] [rbp+C7h] BYREF
  __int64 v67; // [rsp+148h] [rbp+C8h]

  v67 = -2;
  v8 = sub_140A2C1C0(a2);
  if ( v8 )
  {
    *a1 = 2;
    a1[1] = v8;
    return result;
  }
  if ( a4 )
  {
    v9 = a2[37];
    v10 = a2[38];
    sub_1416C49D0(&v51, v9, v10);
    if ( (_DWORD)v51 == 2 )
    {
      if ( (BYTE8(v51) & 3u) - 2 >= 2 && (BYTE8(v51) & 3) != 0 )
      {
        --*((_QWORD *)&v51 + 1);
        LOBYTE(v51) = 3;
        sub_1416EBAD0((char *)&v51 + 8);
      }
    }
    else
    {
      LODWORD(v39) = sub_1416B2E50(v12, v11, v13);
      DWORD1(v39) = v14;
      sub_1416B2E00(&v51, &v39, 3577643008LL, 27111902);
      if ( (_BYTE)v51 )
        v15 = 0;
      else
        v15 = *((_QWORD *)&v51 + 1);
      *(_QWORD *)&v39 = v15;
      *(_QWORD *)&v51 = &v39;
      *((_QWORD *)&v51 + 1) = sub_1416EBBB0;
      sub_1416DAFA0(&v36, &unk_141A94B16, &v51);
      v16 = a2[49];
      v17 = a2[50];
      v65 = v37;
      sub_1416B18A0((unsigned int)&v39, v16, v17, v37, v38);
      if ( v36 )
        sub_140001660(v65, v36, 1);
      v65 = *((_QWORD *)&v39 + 1);
      if ( (sub_1416C4610(v9, v10) & 1) != 0 )
      {
        *(_QWORD *)&v62 = v18;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v63 = &v62;
          *((_QWORD *)&v63 + 1) = sub_1416EA080;
          v56 = 2;
          v57 = aCodexmateLibCo_44;
          v58 = 31;
          v60 = &unk_141A94B28;
          v61 = &v63;
          *(_QWORD *)&v51 = 0;
          *((_QWORD *)&v51 + 1) = aCodexmateLibCo_44;
          v52 = 31;
          v53 = 0;
          v54 = aSrcCoreReposit;
          v55 = 22;
          v59 = 0x9D600000001LL;
          sub_141503E20(&v66, &v51);
          v18 = v62;
        }
        if ( (unsigned int)(v18 & 3) - 2 >= 2 && (v18 & 3) != 0 )
        {
          *((_QWORD *)&v51 + 1) = v18 - 1;
          LOBYTE(v51) = 3;
          sub_1416EBAD0((char *)&v51 + 8);
        }
      }
      if ( (_QWORD)v39 )
        sub_140001660(v65, v39, 1);
    }
  }
  v19 = *(_DWORD *)(a3 + 80);
  v20 = *(_QWORD *)(a3 + 72);
  if ( *(_QWORD *)(a3 + 24) == -1 )
    *(_QWORD *)&v63 = -1;
  else
    sub_1416DB410(&v63, a3 + 24);
  sub_14022C880(&v51, a3);
  v21 = *(_BYTE *)(a3 + 64);
  if ( v21 != 2 )
  {
    v62 = *(_OWORD *)(a3 + 48);
    v22 = *(_DWORD *)(a3 + 68);
    v50[0] = *(_DWORD *)(a3 + 65);
    *(_DWORD *)((char *)v50 + 3) = v22;
  }
  v23 = 4;
  if ( v19 >= 5 )
    v23 = (unsigned int)v19;
  v24 = *(unsigned __int8 *)(a3 + 84);
  v46 = v20;
  v41 = v63;
  v42 = v64;
  v39 = v51;
  v40 = v52;
  result = *(double *)&v62;
  v43 = v62;
  v44 = v21;
  *(_DWORD *)v45 = v50[0];
  *(_DWORD *)&v45[3] = *(_DWORD *)((char *)v50 + 3);
  v48 = v24;
  v47 = v23;
  if ( v21 == 2 )
  {
    *(_QWORD *)&v43 = 0;
    *((_QWORD *)&v43 + 1) = 0xA0000000FLL;
    v44 = 0;
  }
  if ( (_BYTE)v24 == 2 )
    v48 = 1;
  nullsub_1(v24, v23);
  v26 = sub_140001650(128, 1);
  if ( !v26 )
    sub_14196B2DB(1, 128);
  *(_QWORD *)&v63 = 128;
  *((_QWORD *)&v63 + 1) = v26;
  v64 = 0;
  *(_QWORD *)&v51 = &v63;
  *((_QWORD *)&v51 + 1) = asc_141A907A8;
  v52 = 2;
  v53 = 0;
  LOBYTE(v54) = 0;
  v27 = sub_140CD6910(&v39, &v51);
  if ( v27 )
  {
    if ( (_QWORD)v63 )
      result = sub_140001660(*((_QWORD *)&v63 + 1), v63, 1);
    goto LABEL_42;
  }
  v27 = *((_QWORD *)&v63 + 1);
  if ( (_QWORD)v63 == -1 )
  {
LABEL_42:
    *(_QWORD *)&v62 = v27;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v63 = &v62;
      *((_QWORD *)&v63 + 1) = sub_14166FAD0;
      v56 = 2;
      v57 = aCodexmateLibCo_44;
      v58 = 31;
      v60 = &unk_141A94B83;
      v61 = &v63;
      *(_QWORD *)&v51 = 0;
      *((_QWORD *)&v51 + 1) = aCodexmateLibCo_44;
      v52 = 31;
      v53 = 0;
      v54 = aSrcCoreReposit;
      v55 = 22;
      v59 = 0x9E600000001LL;
      sub_141503E20(&v66, &v51);
      v27 = v62;
    }
    *a1 = 3;
    a1[1] = v27;
    goto LABEL_45;
  }
  v65 = v63;
  v28 = a2[37];
  v29 = a2[38];
  v49 = *((_QWORD *)&v63 + 1);
  if ( (sub_1407C8880(v28, v29, *((_QWORD *)&v63 + 1), v64) & 1) == 0 )
  {
    sub_1407B9160(v30);
    *a1 = -1;
    if ( v65 )
      result = sub_140001660(v49, v65, 1);
    if ( (_QWORD)v41 != -1 && (_QWORD)v41 )
      result = sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
    v31 = *((_QWORD *)&v39 + 1);
    v34 = v40;
    if ( v40 )
    {
      v35 = *((_QWORD *)&v39 + 1);
      do
      {
        sub_1401AE3E0(v35);
        v35 += 424;
        --v34;
      }
      while ( v34 );
    }
    goto LABEL_51;
  }
  *(_QWORD *)&v62 = v30;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    *(_QWORD *)&v63 = &v62;
    *((_QWORD *)&v63 + 1) = sub_1416EA080;
    v56 = 2;
    v57 = aCodexmateLibCo_44;
    v58 = 31;
    v60 = &unk_141A94B56;
    v61 = &v63;
    *(_QWORD *)&v51 = 0;
    *((_QWORD *)&v51 + 1) = aCodexmateLibCo_44;
    v52 = 31;
    v53 = 0;
    v54 = aSrcCoreReposit;
    v55 = 22;
    v59 = 0x9EB00000001LL;
    sub_141503E20(&v66, &v51);
    v30 = v62;
  }
  *a1 = 2;
  a1[1] = v30;
  if ( v65 )
    result = sub_140001660(v49, v65, 1);
LABEL_45:
  if ( (_QWORD)v41 != -1 && (_QWORD)v41 )
    result = sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
  v31 = *((_QWORD *)&v39 + 1);
  v32 = v40;
  if ( v40 )
  {
    v33 = *((_QWORD *)&v39 + 1);
    do
    {
      sub_1401AE3E0(v33);
      v33 += 424;
      --v32;
    }
    while ( v32 );
  }
LABEL_51:
  if ( (_QWORD)v39 )
    return sub_140001660(v31, 424 * v39, 8);
  return result;
}
