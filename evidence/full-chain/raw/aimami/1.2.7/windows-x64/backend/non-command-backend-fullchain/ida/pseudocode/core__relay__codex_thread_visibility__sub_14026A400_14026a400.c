// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14026a400 | name sub_14026A400
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_14026A400(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // rbx
  HANDLE v10; // rdi
  unsigned __int64 v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  bool v23; // cf
  bool v24; // cc
  __int64 v25; // rcx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  bool v34; // zf
  __int64 v35; // rcx
  void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r12
  _QWORD *i; // r15
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rax
  void *v45; // rax
  _QWORD *v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  void *v50; // rax
  _QWORD *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  _DWORD v56[4]; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 v57; // [rsp+4Ch] [rbp-34h]
  int v58; // [rsp+54h] [rbp-2Ch]
  __int128 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+70h] [rbp-10h]
  __int128 v61; // [rsp+80h] [rbp+0h]
  __int64 v62; // [rsp+90h] [rbp+10h]
  __int128 v63; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v64; // [rsp+B0h] [rbp+30h]
  __int128 v65; // [rsp+C0h] [rbp+40h]
  _OWORD v66[3]; // [rsp+D0h] [rbp+50h]
  _QWORD *v67; // [rsp+100h] [rbp+80h]
  int v68; // [rsp+10Ch] [rbp+8Ch] BYREF
  __int64 v69; // [rsp+110h] [rbp+90h]
  _BYTE v70[96]; // [rsp+118h] [rbp+98h] BYREF
  __int64 v71; // [rsp+190h] [rbp+110h]
  unsigned __int64 v72; // [rsp+198h] [rbp+118h]
  __int128 v73; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE *v74; // [rsp+1B0h] [rbp+130h]
  HANDLE hObject[2]; // [rsp+1B8h] [rbp+138h] BYREF
  unsigned __int64 v76; // [rsp+1C8h] [rbp+148h]
  __int64 v77; // [rsp+1D0h] [rbp+150h]
  __int64 v78; // [rsp+1D8h] [rbp+158h]
  HANDLE *v79; // [rsp+1E0h] [rbp+160h]
  char v80; // [rsp+1EEh] [rbp+16Eh] BYREF
  char v81; // [rsp+1EFh] [rbp+16Fh]
  __int64 v82; // [rsp+1F0h] [rbp+170h]

  v82 = -2;
  *(_QWORD *)v70 = -1;
  *(_QWORD *)&v73 = a4;
  *((_QWORD *)&v73 + 1) = a4 + 72 * a5;
  v74 = v70;
  sub_1403CC890(hObject, &v73);
  v9 = *(_QWORD *)v70;
  if ( *(_QWORD *)v70 != -1 )
  {
    v60 = *(_QWORD *)&v70[24];
    v59 = *(_OWORD *)&v70[8];
    v63 = *(_OWORD *)&v70[32];
    v64 = *(_OWORD *)&v70[48];
    v65 = *(_OWORD *)&v70[64];
    v66[0] = *(_OWORD *)&v70[80];
    v10 = hObject[1];
    v11 = v76;
    if ( v76 )
    {
      v12 = (char *)hObject[1] + 32;
      do
      {
        v13 = *(v12 - 4);
        if ( v13 )
          sub_140001660(*(v12 - 3), v13, 1);
        v14 = *(v12 - 1);
        if ( v14 )
          sub_140001660(*v12, v14, 1);
        v12 += 8;
        --v11;
      }
      while ( v11 );
    }
    if ( hObject[0] )
      sub_140001660(v10, (__int64)hObject[0] << 6, 8);
    v61 = v59;
    v62 = v60;
    v15 = v63;
    v16 = v64;
    v17 = v65;
    *(_OWORD *)(a1 + 80) = v66[0];
    *(_OWORD *)(a1 + 64) = v17;
    *(_OWORD *)(a1 + 48) = v16;
    *(_OWORD *)(a1 + 32) = v15;
    LODWORD(v18) = v62;
    *(_QWORD *)(a1 + 24) = v62;
    *(_OWORD *)(a1 + 8) = v61;
    *(_QWORD *)a1 = v9;
    return v18;
  }
  v19 = v76;
  v73 = *(_OWORD *)hObject;
  v74 = (_BYTE *)v76;
  v20 = hObject[1];
  *(_QWORD *)v70 = &v80;
  if ( v76 >= 2 )
  {
    if ( v76 >= 0x15 )
      sub_14065CD50(hObject[1], v76, v70);
    else
      sub_140E010E0(hObject[1], v76, 1, v70);
  }
  v21 = v19 + 1;
  v22 = v20 + 6;
  while ( 1 )
  {
    v23 = v21-- == 1;
    if ( v23 || v21 == 1 )
      break;
    v24 = *v22 + v22[1] <= v22[8];
    v22 += 8;
    if ( !v24 )
    {
      nullsub_1(v22);
      v18 = sub_140001650(33, 1);
      if ( !v18 )
        sub_141938D2B(1, 33);
      qmemcpy((void *)v18, "session_meta replacements overlap", 33);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 33;
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)(a1 + 24) = 33;
      goto LABEL_20;
    }
  }
  sub_140281CC0(v70, a2, a3);
  v25 = *(_QWORD *)v70;
  LODWORD(v18) = v70[8];
  if ( *(_QWORD *)v70 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v70[88];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v70[73];
    v26 = *(_OWORD *)&v70[9];
    v27 = *(_OWORD *)&v70[25];
    v28 = *(_OWORD *)&v70[41];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v70[57];
    *(_OWORD *)(a1 + 41) = v28;
    *(_OWORD *)(a1 + 25) = v27;
    *(_OWORD *)(a1 + 9) = v26;
    *(_QWORD *)a1 = v25;
    *(_BYTE *)(a1 + 8) = v18;
LABEL_20:
    if ( v19 )
    {
      v29 = v20 + 4;
      do
      {
        v30 = *(v29 - 4);
        if ( v30 )
          LODWORD(v18) = sub_140001660(*(v29 - 3), v30, 1);
        v31 = *(v29 - 1);
        if ( v31 )
          LODWORD(v18) = sub_140001660(*v29, v31, 1);
        v29 += 8;
        --v19;
      }
      while ( v19 );
    }
    if ( (_QWORD)v73 )
      LODWORD(v18) = sub_140001660(*((_QWORD *)&v73 + 1), (_QWORD)v73 << 6, 8);
    return v18;
  }
  if ( (v70[8] & 1) != 0 )
  {
    v32 = v19 << 6;
    v33 = v20;
    while ( v32 )
    {
      v32 -= 64;
      v34 = v33[5] == v33[7];
      v33 += 8;
      if ( !v34 )
      {
        nullsub_1(v33);
        v18 = sub_140001650(93, 1);
        if ( !v18 )
          sub_141938D2B(1, 93);
        qmemcpy(
          (void *)v18,
          "ROUTER_HISTORY_LAYOUT_PROTECTED: native paginated record size would change; history preserved",
          93);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 93;
        *(_QWORD *)(a1 + 16) = v18;
        *(_QWORD *)(a1 + 24) = 93;
        goto LABEL_20;
      }
    }
  }
  sub_140282430(v70);
  v35 = *(_QWORD *)v70;
  LODWORD(v18) = *(_DWORD *)&v70[32];
  if ( *(_QWORD *)&v70[32] == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v35;
    goto LABEL_20;
  }
  if ( *(_DWORD *)&v70[32] == 2 )
  {
    v18 = sub_1416793A0(0, aRolloutIsMissi, 18);
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v18;
    goto LABEL_20;
  }
  v79 = *(HANDLE **)&v70[8];
  v77 = *(_QWORD *)v70;
  v72 = *(_QWORD *)&v70[16];
  if ( (unsigned __int8)sub_140281560() )
  {
    LODWORD(v18) = (unsigned int)sub_1401A38D0(a1, a2, a3, (__int64)&v73);
    goto LABEL_81;
  }
  *(_DWORD *)v70 = 0;
  *(_QWORD *)&v70[8] = 0;
  *(_DWORD *)&v70[16] = 7;
  *(_QWORD *)&v70[20] = 0x100000000LL;
  *(_QWORD *)&v70[25] = 1;
  LODWORD(v18) = sub_141690E40(v70);
  if ( (v18 & 1) != 0 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v36;
    goto LABEL_81;
  }
  hObject[0] = v36;
  v81 = 1;
  sub_1416831B0(v70, hObject);
  v37 = *(_QWORD *)&v70[8];
  v38 = *(_QWORD *)v70;
  if ( *(_QWORD *)v70 == 2 )
  {
LABEL_45:
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v37;
LABEL_80:
    LODWORD(v18) = CloseHandle(hObject[0]);
LABEL_81:
    if ( v77 )
      LODWORD(v18) = sub_140001660(v79, v77, 1);
    goto LABEL_20;
  }
  v65 = *(_OWORD *)&v70[32];
  v64 = *(_OWORD *)&v70[16];
  *(_OWORD *)((char *)v66 + 8) = *(_OWORD *)&v70[56];
  *(_OWORD *)((char *)&v66[1] + 8) = *(_OWORD *)&v70[72];
  v63 = *(_OWORD *)v70;
  *(_QWORD *)&v66[0] = *(_QWORD *)&v70[48];
  v71 = *(_QWORD *)&v70[48];
  v69 = *(_QWORD *)&v70[48];
  v68 = 1;
  v39 = v19 << 6;
  v67 = &v20[8 * v19];
  for ( i = v20; i != (_QWORD *)((char *)v20 + v39); i += 8 )
  {
    if ( i[2] != i[7] )
    {
      nullsub_1(v38);
      v50 = (void *)sub_140001650(51, 1);
      if ( !v50 )
      {
        v81 = 1;
        sub_141938D2B(1, 51);
      }
      qmemcpy(v50, "session_meta line length changed before replacement", 51);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 51;
      *(_QWORD *)(a1 + 16) = v50;
      *(_QWORD *)(a1 + 24) = 51;
      goto LABEL_80;
    }
    v81 = 1;
    if ( (sub_1416A17E0(hObject, 0) & 1) != 0 )
    {
LABEL_79:
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v41;
      goto LABEL_80;
    }
    v42 = i[7];
    v81 = 1;
    sub_1401AB4D0(v70, v42);
    v43 = *(_QWORD *)&v70[16];
    v78 = *(_QWORD *)&v70[8];
    v44 = sub_140BB1420(hObject, *(_QWORD *)&v70[8], *(_QWORD *)&v70[16]);
    if ( v44 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v44;
LABEL_67:
      if ( *(_QWORD *)v70 )
        sub_140001660(v78, *(_QWORD *)v70, 1);
      goto LABEL_80;
    }
    if ( v43 != i[2] || (unsigned int)sub_1418F4B70(v78, i[1]) )
    {
      nullsub_1(v38);
      v45 = (void *)sub_140001650(53, 1);
      if ( !v45 )
        sub_141938D2B(1, 53);
      qmemcpy(v45, "session_meta changed while preparing router migration", 53);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 53;
      *(_QWORD *)(a1 + 16) = v45;
      *(_QWORD *)(a1 + 24) = 53;
      goto LABEL_67;
    }
    if ( *(_QWORD *)v70 )
      sub_140001660(v78, *(_QWORD *)v70, 1);
  }
  if ( !a6 )
  {
    v46 = v20;
    while ( v39 )
    {
      v39 -= 64;
      v34 = v46[5] == v46[7];
      v46 += 8;
      if ( !v34 )
        goto LABEL_62;
    }
    v51 = v20;
    while ( v51 != v67 )
    {
      v81 = 1;
      if ( (sub_1416A17E0(hObject, 0) & 1) != 0 )
        goto LABEL_79;
      v52 = v51[4];
      v53 = v51[5];
      v81 = 1;
      v37 = sub_140C9FF80(hObject, v52, v53);
      v51 += 8;
      if ( v37 )
        goto LABEL_45;
    }
    v56[0] = 0;
    v58 = 0;
    v56[3] = 1;
    v57 = v71;
    v81 = 1;
    v54 = sub_141683280(hObject, v56);
    v81 = 1;
    sub_1400213E0(v54);
    *(_QWORD *)a1 = -1;
    goto LABEL_80;
  }
LABEL_62:
  CloseHandle(hObject[0]);
  v81 = 0;
  LODWORD(v18) = sub_14024A590((__int64 *)v70, v79, v72, v20, v19, (__int64)&v63);
  if ( *(_DWORD *)v70 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v70[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v70[64];
    v47 = *(_OWORD *)v70;
    v48 = *(_OWORD *)&v70[16];
    v49 = *(_OWORD *)&v70[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v70[48];
    *(_OWORD *)(a1 + 32) = v49;
    *(_OWORD *)(a1 + 16) = v48;
    *(_OWORD *)a1 = v47;
    goto LABEL_81;
  }
  v81 = 0;
  sub_140249BD0((__int64)v79, v72, (__int64)&v68);
  *(_QWORD *)a1 = -1;
  if ( v77 )
    sub_140001660(v79, v77, 1);
  LODWORD(v18) = sub_1401911B0(&v73);
  return v18;
}
