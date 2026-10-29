// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x1401f4e80 | name sub_1401F4E80
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_1401F4E80(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  HANDLE v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  void *v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  char v19; // r15
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rcx
  void *v27; // rax
  void *v28; // rax
  __int128 v29; // xmm0
  __int64 v31; // [rsp+20h] [rbp-60h] BYREF
  __int128 v32; // [rsp+28h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-48h]
  __int128 v34; // [rsp+48h] [rbp-38h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  __int128 v36; // [rsp+68h] [rbp-18h]
  __int128 v37; // [rsp+78h] [rbp-8h]
  __int128 v38; // [rsp+88h] [rbp+8h]
  __int128 v39; // [rsp+98h] [rbp+18h]
  __int128 v40; // [rsp+A8h] [rbp+28h]
  __int128 v41; // [rsp+B8h] [rbp+38h]
  __int64 v42; // [rsp+C8h] [rbp+48h]
  __int64 v43; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v44; // [rsp+D8h] [rbp+58h]
  __int128 v45; // [rsp+E8h] [rbp+68h]
  __int128 v46; // [rsp+F8h] [rbp+78h]
  __int128 v47; // [rsp+108h] [rbp+88h]
  __int128 v48; // [rsp+118h] [rbp+98h]
  __int128 v49; // [rsp+128h] [rbp+A8h]
  __int128 v50; // [rsp+138h] [rbp+B8h]
  __int128 v51; // [rsp+148h] [rbp+C8h]
  __int128 v52; // [rsp+158h] [rbp+D8h]
  __int128 v53; // [rsp+168h] [rbp+E8h]
  __int64 v54; // [rsp+178h] [rbp+F8h]
  __int128 v55; // [rsp+180h] [rbp+100h]
  __int128 v56; // [rsp+190h] [rbp+110h]
  __int128 v57; // [rsp+1A0h] [rbp+120h]
  __int128 v58; // [rsp+1B0h] [rbp+130h]
  __int128 v59; // [rsp+1C0h] [rbp+140h]
  __int128 v60; // [rsp+1D0h] [rbp+150h]
  _BYTE v61[104]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v62; // [rsp+248h] [rbp+1C8h]
  __int128 v63; // [rsp+258h] [rbp+1D8h]
  __int128 v64; // [rsp+268h] [rbp+1E8h]
  __int128 v65; // [rsp+278h] [rbp+1F8h]
  __int64 v66; // [rsp+288h] [rbp+208h]
  _BYTE hObject[104]; // [rsp+290h] [rbp+210h] BYREF
  __int128 v68; // [rsp+2F8h] [rbp+278h]
  __int128 v69; // [rsp+308h] [rbp+288h]
  __int128 v70; // [rsp+318h] [rbp+298h]
  __int128 v71; // [rsp+328h] [rbp+2A8h]
  __int64 v72; // [rsp+338h] [rbp+2B8h]
  __int128 v73; // [rsp+340h] [rbp+2C0h]
  __int64 v74; // [rsp+350h] [rbp+2D0h]
  __int64 v75; // [rsp+358h] [rbp+2D8h] BYREF
  __int128 v76; // [rsp+360h] [rbp+2E0h]
  __int128 v77; // [rsp+370h] [rbp+2F0h]
  __int128 v78; // [rsp+380h] [rbp+300h]
  __int128 v79; // [rsp+390h] [rbp+310h]
  __int128 v80; // [rsp+3A0h] [rbp+320h]
  __int128 v81; // [rsp+3B0h] [rbp+330h]
  HANDLE v82; // [rsp+3C8h] [rbp+348h]
  _BYTE v83[24]; // [rsp+3D0h] [rbp+350h] BYREF
  char v84; // [rsp+3EDh] [rbp+36Dh]
  char v85; // [rsp+3EEh] [rbp+36Eh]
  char v86; // [rsp+3EFh] [rbp+36Fh]
  __int64 v87; // [rsp+3F0h] [rbp+370h]

  v87 = -2;
  *(_DWORD *)hObject = 0;
  *(_QWORD *)&hObject[8] = 0;
  *(_DWORD *)&hObject[16] = 7;
  *(_QWORD *)&hObject[20] = 0x100000000LL;
  *(_QWORD *)&hObject[25] = 0;
  *(_QWORD *)&v6 = sub_141690E40(hObject);
  *(_OWORD *)v61 = v6;
  if ( (_QWORD)v6 == 1 )
  {
    v7 = BYTE8(v6) & 3;
    switch ( BYTE8(v6) & 3 )
    {
      case 0:
        LODWORD(v6) = *(unsigned __int8 *)(*((_QWORD *)&v6 + 1) + 16LL);
        if ( (_BYTE)v6 )
          goto LABEL_14;
        goto LABEL_16;
      case 1:
        LODWORD(v6) = *(unsigned __int8 *)(*((_QWORD *)&v6 + 1) + 31LL);
        if ( !(_BYTE)v6 )
          goto LABEL_16;
        goto LABEL_14;
      case 2:
        v85 = 1;
        v12 = *((_QWORD *)&v6 + 1);
        v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10() + 8);
        v85 = 1;
        LODWORD(v6) = v13(HIDWORD(v12));
        *((_QWORD *)&v6 + 1) = v12;
        if ( !(_BYTE)v6 )
          goto LABEL_16;
        goto LABEL_14;
      case 3:
        *(_QWORD *)&v6 = HIDWORD(*((_QWORD *)&v6 + 1));
        if ( BYTE12(v6) )
        {
LABEL_14:
          *(_QWORD *)(a1 + 8) = 2;
          *(_QWORD *)(a1 + 16) = *((_QWORD *)&v6 + 1);
          *(_QWORD *)a1 = -1;
        }
        else
        {
LABEL_16:
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 176) = -1;
          *(_BYTE *)(a1 + 200) = 0;
          LODWORD(v6) = v7 - 2;
          if ( (unsigned int)(v7 - 2) >= 2 && v7 )
          {
            *(_QWORD *)&hObject[8] = *((_QWORD *)&v6 + 1) - 1LL;
            hObject[0] = 3;
            v85 = 0;
            LODWORD(v6) = sub_1416BCB00(&hObject[8]);
          }
        }
        break;
    }
    return v6;
  }
  v82 = *((HANDLE *)&v6 + 1);
  v75 = *((_QWORD *)&v6 + 1);
  v86 = 1;
  sub_1416831B0(hObject, &v75);
  if ( *(_DWORD *)hObject == 2 )
  {
    v9 = *(_QWORD *)&hObject[8];
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v9;
    v10 = v82;
LABEL_21:
    *(_QWORD *)a1 = -1;
    LODWORD(v6) = CloseHandle(v10);
    return v6;
  }
  LOBYTE(v8) = (*(_WORD *)&hObject[76] & 0x400) == 0;
  v10 = v82;
  if ( (hObject[76] & 0x10) != 0 || (LOBYTE(v8) = ((*(_DWORD *)&hObject[80] & 0x20000000) == 0) | v8, !(_BYTE)v8) )
  {
    nullsub_1(v8);
    v14 = (void *)sub_140001650(40, 1);
    if ( !v14 )
    {
      v86 = 1;
      sub_141938D2B(1, 40);
    }
    qmemcpy(v14, "Auth observation requires a regular file", 40);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 40;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = 40;
    goto LABEL_21;
  }
  *(_QWORD *)v83 = 0;
  *(_QWORD *)&v83[8] = 1;
  *(_QWORD *)&v83[16] = 0;
  *(_QWORD *)hObject = v82;
  *(_QWORD *)&hObject[8] = 262145;
  *(_QWORD *)&hObject[16] = 262145;
  if ( (sub_140BB1E00(hObject, v83, 0) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)a1 = -1;
    LODWORD(v6) = CloseHandle(*(HANDLE *)hObject);
    goto LABEL_39;
  }
  CloseHandle(*(HANDLE *)hObject);
  if ( *(_QWORD *)&v83[16] > 0x40000u )
  {
    nullsub_1(v15);
    *(_QWORD *)&v6 = sub_140001650(35, 1);
    if ( !(_QWORD)v6 )
      sub_141938D2B(1, 35);
    qmemcpy((void *)v6, "Auth observation exceeds size limit", 35);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 35;
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = 35;
    *(_QWORD *)a1 = -1;
    goto LABEL_39;
  }
  *(_OWORD *)v61 = *(_OWORD *)&v83[8];
  *(_OWORD *)&v61[16] = 0;
  sub_140630900(hObject, v61);
  if ( *(_QWORD *)hObject == -2 )
  {
    LODWORD(v6) = sub_1401B15C0(v61, *(_QWORD *)&hObject[8]);
    v60 = *(_OWORD *)&v61[80];
    v59 = *(_OWORD *)&v61[64];
    v58 = *(_OWORD *)&v61[48];
    v76 = *(_OWORD *)v61;
    v77 = *(_OWORD *)&v61[16];
    v78 = *(_OWORD *)&v61[32];
    v79 = *(_OWORD *)&v61[48];
    v80 = *(_OWORD *)&v61[64];
    v81 = *(_OWORD *)&v61[80];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v61[80];
    *(_OWORD *)(a1 + 72) = v80;
    v16 = v76;
    v17 = v77;
    v18 = v78;
    *(_OWORD *)(a1 + 56) = v79;
    *(_OWORD *)(a1 + 40) = v18;
    *(_OWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = -1;
    goto LABEL_39;
  }
  v60 = *(_OWORD *)&hObject[88];
  v59 = *(_OWORD *)&hObject[72];
  v58 = *(_OWORD *)&hObject[56];
  v57 = *(_OWORD *)&hObject[40];
  v56 = *(_OWORD *)&hObject[24];
  v55 = *(_OWORD *)&hObject[8];
  v50 = v68;
  v51 = v69;
  v52 = v70;
  v53 = v71;
  v54 = v72;
  v81 = *(_OWORD *)&hObject[88];
  v80 = *(_OWORD *)&hObject[72];
  v79 = *(_OWORD *)&hObject[56];
  v78 = *(_OWORD *)&hObject[40];
  v77 = *(_OWORD *)&hObject[24];
  v76 = *(_OWORD *)&hObject[8];
  v49 = *(_OWORD *)&hObject[88];
  v48 = *(_OWORD *)&hObject[72];
  v47 = *(_OWORD *)&hObject[56];
  v46 = *(_OWORD *)&hObject[40];
  v45 = *(_OWORD *)&hObject[24];
  v44 = *(_OWORD *)&hObject[8];
  v43 = *(_QWORD *)hObject;
  v19 = sub_140ED7E50(&v43);
  if ( !v19 )
  {
    v22 = 2;
    if ( !(unsigned __int8)sub_140ED4AD0(&v43) && !(unsigned __int8)sub_140ED8760(&v43) )
    {
      nullsub_1(v26);
      v27 = (void *)sub_140001650(54, 1);
      if ( !v27 )
        sub_141938D2B(1, 54);
      qmemcpy(v27, "Auth observation has no recognized authentication mode", 54);
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)(a1 + 16) = 54;
      *(_QWORD *)(a1 + 24) = v27;
      *(_QWORD *)(a1 + 32) = 54;
      goto LABEL_38;
    }
LABEL_42:
    v84 = v19;
    *(_QWORD *)v61 = v22;
    sub_1401A4B40(hObject, *(_QWORD *)&v83[8], *(_QWORD *)&v83[16]);
    v29 = *(_OWORD *)hObject;
    *(_OWORD *)(a1 + 217) = *(_OWORD *)&hObject[16];
    *(_OWORD *)(a1 + 201) = v29;
    v73 = *(_OWORD *)v83;
    v74 = *(_QWORD *)&v83[16];
    sub_1418F44E0(hObject, v61, 176);
    sub_1418F44E0(a1, hObject, 200);
    *(_BYTE *)(a1 + 200) = 1;
    LODWORD(v6) = sub_140195410(&v43);
    return v6;
  }
  sub_140ED7FA0(hObject, &v43);
  v20 = *(_QWORD *)hObject;
  sub_140020E50(hObject);
  if ( v20 == -1 )
  {
    nullsub_1(v21);
    v28 = (void *)sub_140001650(49, 1);
    if ( !v28 )
      sub_141938D2B(1, 49);
    qmemcpy(v28, "Auth observation has incomplete OAuth credentials", 49);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 49;
    *(_QWORD *)(a1 + 24) = v28;
    *(_QWORD *)(a1 + 32) = 49;
    goto LABEL_38;
  }
  sub_140ED5630(&v31, &v43, a2, a3);
  v22 = v31;
  if ( v31 != 2 )
  {
    v66 = v42;
    v65 = v41;
    v64 = v40;
    v63 = v39;
    v62 = v38;
    *(_OWORD *)&v61[8] = v32;
    *(_OWORD *)&v61[24] = v33;
    *(_OWORD *)&v61[40] = v34;
    *(_OWORD *)&v61[56] = v35;
    *(_OWORD *)&v61[72] = v36;
    *(_OWORD *)&v61[88] = v37;
    goto LABEL_42;
  }
  sub_1401B1670(hObject, &v32);
  v37 = *(_OWORD *)&hObject[80];
  v36 = *(_OWORD *)&hObject[64];
  v35 = *(_OWORD *)&hObject[48];
  v34 = *(_OWORD *)&hObject[32];
  v33 = *(_OWORD *)&hObject[16];
  v32 = *(_OWORD *)hObject;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&hObject[80];
  *(_OWORD *)(a1 + 72) = v36;
  v23 = v32;
  v24 = v33;
  v25 = v34;
  *(_OWORD *)(a1 + 56) = v35;
  *(_OWORD *)(a1 + 40) = v25;
  *(_OWORD *)(a1 + 24) = v24;
  *(_OWORD *)(a1 + 8) = v23;
LABEL_38:
  *(_QWORD *)a1 = -1;
  LODWORD(v6) = sub_140195410(&v43);
LABEL_39:
  if ( *(_QWORD *)v83 )
    LODWORD(v6) = sub_140001660(*(_QWORD *)&v83[8], *(_QWORD *)v83, 1);
  return v6;
}
