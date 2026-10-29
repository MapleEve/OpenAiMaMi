// win 1.2.7 latest-exe | module src/core/repository/account_reset_credits.rs | ea 0x14070e690 | successor of pre-update 0x1401f4e80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.967, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14070E690(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  char v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  void *v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // [rsp+20h] [rbp-60h] BYREF
  __int128 v36; // [rsp+28h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-48h]
  __int128 v38; // [rsp+48h] [rbp-38h]
  __int128 v39; // [rsp+58h] [rbp-28h]
  __int128 v40; // [rsp+68h] [rbp-18h]
  __int128 v41; // [rsp+78h] [rbp-8h]
  __int128 v42; // [rsp+88h] [rbp+8h]
  __int128 v43; // [rsp+98h] [rbp+18h]
  __int128 v44; // [rsp+A8h] [rbp+28h]
  __int128 v45; // [rsp+B8h] [rbp+38h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  __int64 v47; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v48; // [rsp+D8h] [rbp+58h]
  __int128 v49; // [rsp+E8h] [rbp+68h]
  __int128 v50; // [rsp+F8h] [rbp+78h]
  __int128 v51; // [rsp+108h] [rbp+88h]
  __int128 v52; // [rsp+118h] [rbp+98h]
  __int128 v53; // [rsp+128h] [rbp+A8h]
  __int128 v54; // [rsp+138h] [rbp+B8h]
  __int128 v55; // [rsp+148h] [rbp+C8h]
  __int128 v56; // [rsp+158h] [rbp+D8h]
  __int128 v57; // [rsp+168h] [rbp+E8h]
  __int64 v58; // [rsp+178h] [rbp+F8h]
  __int128 v59; // [rsp+180h] [rbp+100h]
  __int128 v60; // [rsp+190h] [rbp+110h]
  __int128 v61; // [rsp+1A0h] [rbp+120h]
  __int128 v62; // [rsp+1B0h] [rbp+130h]
  __int128 v63; // [rsp+1C0h] [rbp+140h]
  __int128 v64; // [rsp+1D0h] [rbp+150h]
  _BYTE v65[104]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v66; // [rsp+248h] [rbp+1C8h]
  __int128 v67; // [rsp+258h] [rbp+1D8h]
  __int128 v68; // [rsp+268h] [rbp+1E8h]
  __int128 v69; // [rsp+278h] [rbp+1F8h]
  __int64 v70; // [rsp+288h] [rbp+208h]
  _BYTE hObject[104]; // [rsp+290h] [rbp+210h] BYREF
  __int128 v72; // [rsp+2F8h] [rbp+278h]
  __int128 v73; // [rsp+308h] [rbp+288h]
  __int128 v74; // [rsp+318h] [rbp+298h]
  __int128 v75; // [rsp+328h] [rbp+2A8h]
  __int64 v76; // [rsp+338h] [rbp+2B8h]
  __int128 v77; // [rsp+340h] [rbp+2C0h]
  __int64 v78; // [rsp+350h] [rbp+2D0h]
  __int64 v79; // [rsp+358h] [rbp+2D8h] BYREF
  __int128 v80; // [rsp+360h] [rbp+2E0h]
  __int128 v81; // [rsp+370h] [rbp+2F0h]
  __int128 v82; // [rsp+380h] [rbp+300h]
  __int128 v83; // [rsp+390h] [rbp+310h]
  __int128 v84; // [rsp+3A0h] [rbp+320h]
  __int128 v85; // [rsp+3B0h] [rbp+330h]
  HANDLE v86; // [rsp+3C8h] [rbp+348h]
  _BYTE v87[24]; // [rsp+3D0h] [rbp+350h] BYREF
  char v88; // [rsp+3EDh] [rbp+36Dh]
  char v89; // [rsp+3EEh] [rbp+36Eh]
  char v90; // [rsp+3EFh] [rbp+36Fh]
  __int64 v91; // [rsp+3F0h] [rbp+370h]

  v91 = -2;
  *(_DWORD *)hObject = 0;
  *(_QWORD *)&hObject[8] = 0;
  *(_DWORD *)&hObject[16] = 7;
  *(_QWORD *)&hObject[20] = 0x100000000LL;
  *(_QWORD *)&hObject[25] = 0;
  *(_QWORD *)&v6 = sub_1416BFE10(hObject, a2, a3);
  *(_OWORD *)v65 = v6;
  if ( (_QWORD)v6 == 1 )
  {
    v7 = BYTE8(v6) & 3;
    switch ( BYTE8(v6) & 3 )
    {
      case 0:
        if ( *(_BYTE *)(*((_QWORD *)&v6 + 1) + 16LL) )
          goto LABEL_14;
        goto LABEL_16;
      case 1:
        if ( !*(_BYTE *)(*((_QWORD *)&v6 + 1) + 31LL) )
          goto LABEL_16;
        goto LABEL_14;
      case 2:
        v89 = 1;
        v12 = *((_QWORD *)&v6 + 1);
        v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0() + 8);
        v89 = 1;
        LOBYTE(v6) = v13(HIDWORD(v12));
        *((_QWORD *)&v6 + 1) = v12;
        if ( !(_BYTE)v6 )
          goto LABEL_16;
        goto LABEL_14;
      case 3:
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
          if ( (unsigned int)(v7 - 2) >= 2 && v7 )
          {
            *(_QWORD *)&hObject[8] = *((_QWORD *)&v6 + 1) - 1LL;
            hObject[0] = 3;
            v89 = 0;
            sub_1416EBAD0(&hObject[8]);
          }
        }
        break;
    }
    return a1;
  }
  v86 = *((HANDLE *)&v6 + 1);
  v79 = *((_QWORD *)&v6 + 1);
  v90 = 1;
  sub_1416B2180(hObject, &v79);
  if ( *(_DWORD *)hObject == 2 )
  {
    v9 = *(_QWORD *)&hObject[8];
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v9;
    v10 = v86;
LABEL_21:
    *(_QWORD *)a1 = -1;
    CloseHandle(v10);
    return a1;
  }
  LOBYTE(v8) = (*(_WORD *)&hObject[76] & 0x400) == 0;
  v10 = v86;
  if ( (hObject[76] & 0x10) != 0 || (LOBYTE(v8) = ((*(_DWORD *)&hObject[80] & 0x20000000) == 0) | v8, !(_BYTE)v8) )
  {
    nullsub_1(v8, *(unsigned int *)&hObject[76]);
    v14 = (void *)sub_140001650(40, 1);
    if ( !v14 )
    {
      v90 = 1;
      sub_14196B2DB(1, 40);
    }
    qmemcpy(v14, "Auth observation requires a regular file", 40);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 40;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = 40;
    goto LABEL_21;
  }
  *(_QWORD *)v87 = 0;
  *(_QWORD *)&v87[8] = 1;
  *(_QWORD *)&v87[16] = 0;
  *(_QWORD *)hObject = v86;
  *(_QWORD *)&hObject[8] = 262145;
  *(_QWORD *)&hObject[16] = 262145;
  if ( (sub_140C462B0(hObject, v87, 0) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)a1 = -1;
    CloseHandle(*(HANDLE *)hObject);
    goto LABEL_39;
  }
  CloseHandle(*(HANDLE *)hObject);
  if ( *(_QWORD *)&v87[16] > 0x40000u )
  {
    nullsub_1(v17, v16);
    v18 = (void *)sub_140001650(35, 1);
    if ( !v18 )
      sub_14196B2DB(1, 35);
    qmemcpy(v18, "Auth observation exceeds size limit", 35);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 35;
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = 35;
    *(_QWORD *)a1 = -1;
    goto LABEL_39;
  }
  *(_OWORD *)v65 = *(_OWORD *)&v87[8];
  *(_OWORD *)&v65[16] = 0;
  sub_140D8EBC0(hObject, v65);
  if ( *(_QWORD *)hObject == -2 )
  {
    sub_1406D5330(v65, *(_QWORD *)&hObject[8]);
    v64 = *(_OWORD *)&v65[80];
    v63 = *(_OWORD *)&v65[64];
    v62 = *(_OWORD *)&v65[48];
    v80 = *(_OWORD *)v65;
    v81 = *(_OWORD *)&v65[16];
    v82 = *(_OWORD *)&v65[32];
    v83 = *(_OWORD *)&v65[48];
    v84 = *(_OWORD *)&v65[64];
    v85 = *(_OWORD *)&v65[80];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v65[80];
    *(_OWORD *)(a1 + 72) = v84;
    v19 = v80;
    v20 = v81;
    v21 = v82;
    *(_OWORD *)(a1 + 56) = v83;
    *(_OWORD *)(a1 + 40) = v21;
    *(_OWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = -1;
    goto LABEL_39;
  }
  v64 = *(_OWORD *)&hObject[88];
  v63 = *(_OWORD *)&hObject[72];
  v62 = *(_OWORD *)&hObject[56];
  v61 = *(_OWORD *)&hObject[40];
  v60 = *(_OWORD *)&hObject[24];
  v59 = *(_OWORD *)&hObject[8];
  v54 = v72;
  v55 = v73;
  v56 = v74;
  v57 = v75;
  v58 = v76;
  v85 = *(_OWORD *)&hObject[88];
  v84 = *(_OWORD *)&hObject[72];
  v83 = *(_OWORD *)&hObject[56];
  v82 = *(_OWORD *)&hObject[40];
  v81 = *(_OWORD *)&hObject[24];
  v80 = *(_OWORD *)&hObject[8];
  v53 = *(_OWORD *)&hObject[88];
  v52 = *(_OWORD *)&hObject[72];
  v51 = *(_OWORD *)&hObject[56];
  v50 = *(_OWORD *)&hObject[40];
  v49 = *(_OWORD *)&hObject[24];
  v48 = *(_OWORD *)&hObject[8];
  v47 = *(_QWORD *)hObject;
  v22 = sub_14071C530(&v47);
  if ( !v22 )
  {
    v26 = 2;
    if ( !(unsigned __int8)sub_140719130(&v47) && !(unsigned __int8)sub_14071CE40(&v47) )
    {
      nullsub_1(v31, v30);
      v32 = (void *)sub_140001650(54, 1);
      if ( !v32 )
        sub_14196B2DB(1, 54);
      qmemcpy(v32, "Auth observation has no recognized authentication mode", 54);
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)(a1 + 16) = 54;
      *(_QWORD *)(a1 + 24) = v32;
      *(_QWORD *)(a1 + 32) = 54;
      goto LABEL_38;
    }
LABEL_42:
    v88 = v22;
    *(_QWORD *)v65 = v26;
    sub_1406CCAB0(hObject, *(_QWORD *)&v87[8], *(_QWORD *)&v87[16]);
    v34 = *(_OWORD *)hObject;
    *(_OWORD *)(a1 + 217) = *(_OWORD *)&hObject[16];
    *(_OWORD *)(a1 + 201) = v34;
    v77 = *(_OWORD *)v87;
    v78 = *(_QWORD *)&v87[16];
    sub_1419234B0(hObject, v65, 176);
    sub_1419234B0(a1, hObject, 200);
    *(_BYTE *)(a1 + 200) = 1;
    sub_1406C3160(&v47);
    return a1;
  }
  sub_14071C680(hObject, &v47);
  v23 = *(_QWORD *)hObject;
  sub_1400261D0(hObject);
  if ( v23 == -1 )
  {
    nullsub_1(v25, v24);
    v33 = (void *)sub_140001650(49, 1);
    if ( !v33 )
      sub_14196B2DB(1, 49);
    qmemcpy(v33, "Auth observation has incomplete OAuth credentials", 49);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 49;
    *(_QWORD *)(a1 + 24) = v33;
    *(_QWORD *)(a1 + 32) = 49;
    goto LABEL_38;
  }
  sub_140719C90(&v35, &v47, a2, a3);
  v26 = v35;
  if ( v35 != 2 )
  {
    v70 = v46;
    v69 = v45;
    v68 = v44;
    v67 = v43;
    v66 = v42;
    *(_OWORD *)&v65[8] = v36;
    *(_OWORD *)&v65[24] = v37;
    *(_OWORD *)&v65[40] = v38;
    *(_OWORD *)&v65[56] = v39;
    *(_OWORD *)&v65[72] = v40;
    *(_OWORD *)&v65[88] = v41;
    goto LABEL_42;
  }
  sub_1406D53E0(hObject, &v36);
  v41 = *(_OWORD *)&hObject[80];
  v40 = *(_OWORD *)&hObject[64];
  v39 = *(_OWORD *)&hObject[48];
  v38 = *(_OWORD *)&hObject[32];
  v37 = *(_OWORD *)&hObject[16];
  v36 = *(_OWORD *)hObject;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&hObject[80];
  *(_OWORD *)(a1 + 72) = v40;
  v27 = v36;
  v28 = v37;
  v29 = v38;
  *(_OWORD *)(a1 + 56) = v39;
  *(_OWORD *)(a1 + 40) = v29;
  *(_OWORD *)(a1 + 24) = v28;
  *(_OWORD *)(a1 + 8) = v27;
LABEL_38:
  *(_QWORD *)a1 = -1;
  sub_1406C3160(&v47);
LABEL_39:
  if ( *(_QWORD *)v87 )
    sub_140001660(*(_QWORD *)&v87[8], *(_QWORD *)v87, 1);
  return a1;
}
