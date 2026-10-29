// win 1.2.7 | module src/platform/process.rs | ea 0x140eec140 | name sub_140EEC140
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140EEC140(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rdx
  __m128 v16; // xmm2
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // rax
  DWORD List; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  RM_PROCESS_INFO *v24; // r14
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  WCHAR strSessionKey[8]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h]
  __int128 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+70h] [rbp-10h]
  __int16 v34; // [rsp+80h] [rbp+0h]
  __int64 v35; // [rsp+90h] [rbp+10h]
  _QWORD v36[2]; // [rsp+98h] [rbp+18h] BYREF
  UINT nFiles[2]; // [rsp+A8h] [rbp+28h]
  _OWORD v38[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h]
  __int64 v40; // [rsp+D8h] [rbp+58h]
  const char *v41; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v42; // [rsp+F0h] [rbp+70h]
  __int64 v43; // [rsp+F8h] [rbp+78h]
  __int64 v44; // [rsp+100h] [rbp+80h]
  char **v45; // [rsp+108h] [rbp+88h]
  __int64 p_CurrentProcessId; // [rsp+110h] [rbp+90h]
  __int64 v47; // [rsp+118h] [rbp+98h]
  const char *v48; // [rsp+120h] [rbp+A0h]
  __int64 v49; // [rsp+128h] [rbp+A8h]
  __int64 v50; // [rsp+130h] [rbp+B0h]
  void *v51; // [rsp+138h] [rbp+B8h]
  _OWORD *v52; // [rsp+140h] [rbp+C0h]
  DWORD CurrentProcessId; // [rsp+148h] [rbp+C8h] BYREF
  DWORD v54; // [rsp+14Ch] [rbp+CCh] BYREF
  DWORD v55; // [rsp+150h] [rbp+D0h] BYREF
  DWORD dwRebootReasons; // [rsp+154h] [rbp+D4h] BYREF
  DWORD v57; // [rsp+158h] [rbp+D8h] BYREF
  DWORD started; // [rsp+15Ch] [rbp+DCh] BYREF
  __int64 v59; // [rsp+160h] [rbp+E0h]
  RM_PROCESS_INFO *v60; // [rsp+168h] [rbp+E8h]
  __int64 v61; // [rsp+170h] [rbp+F0h]
  __int64 v62; // [rsp+178h] [rbp+F8h]
  UINT pnProcInfo; // [rsp+180h] [rbp+100h] BYREF
  UINT pnProcInfoNeeded; // [rsp+184h] [rbp+104h] BYREF
  unsigned __int64 v65; // [rsp+188h] [rbp+108h]
  __int64 v66; // [rsp+190h] [rbp+110h]
  DWORD pSessionHandle; // [rsp+198h] [rbp+118h] BYREF
  char v68; // [rsp+19Eh] [rbp+11Eh] BYREF
  char v69; // [rsp+19Fh] [rbp+11Fh]
  __int64 v70; // [rsp+1A0h] [rbp+120h]

  v70 = -2;
  if ( !a3 )
    goto LABEL_5;
  pSessionHandle = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  *(_OWORD *)strSessionKey = 0;
  v34 = 0;
  started = RmStartSession(&pSessionHandle, 0, strSessionKey);
  if ( started )
  {
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v38[0] = &started;
      *((_QWORD *)&v38[0] + 1) = sub_1416BBD00;
      v47 = 2;
      v48 = aCodexmateLibPl_2;
      v49 = 32;
      v51 = &unk_141A5AB04;
      v52 = v38;
      v41 = nullptr;
      v42 = (__int64)aCodexmateLibPl_2;
      v43 = 32;
      v44 = 0;
      v45 = (char **)aSrcPlatformPro_1;
      p_CurrentProcessId = 23;
      v50 = 0x39000000001LL;
      sub_1414D53A0(&v68, &v41);
    }
LABEL_5:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return;
  }
  sub_1403EADB0(v36, a2, a2 + 32 * a3);
  v7 = v36[1];
  v8 = *(_QWORD *)nFiles;
  v9 = 8LL * *(_QWORD *)nFiles;
  if ( *(_QWORD *)nFiles )
  {
    nullsub_1(v6);
    v10 = sub_140001650(v9, 8);
    if ( !v10 )
      sub_141938D2B(8, v9);
    v11 = v10;
    if ( v8 <= 0x12 || v7 + 8 < v10 + 8 * v8 && v10 < v7 + 24 * v8 - 8 )
    {
      v12 = 0;
    }
    else
    {
      v13 = 4;
      if ( (v8 & 3) != 0 )
        v13 = v8 & 3;
      v12 = v8 - v13;
      v14 = (unsigned __int64 *)(v7 + 80);
      v15 = 0;
      do
      {
        v16 = _mm_movelh_ps((__m128)*(v14 - 3), (__m128)*v14);
        *(__m128 *)(v11 + 8 * v15) = _mm_movelh_ps((__m128)*(v14 - 9), (__m128)*(v14 - 6));
        *(__m128 *)(v11 + 8 * v15 + 16) = v16;
        v15 += 4;
        v14 += 12;
      }
      while ( v12 != v15 );
    }
    v17 = v12;
    if ( (((_BYTE)v8 - (_BYTE)v12) & 3) != 0 )
    {
      v18 = 0;
      v17 = v12;
      do
      {
        *(_QWORD *)(v11 + 8 * v17++) = *(_QWORD *)(v7 + 24 * v12 + 8 + 8 * v18);
        v18 += 3;
      }
      while ( 3LL * (((_BYTE)v8 - (_BYTE)v12) & 3) != v18 );
    }
    if ( v12 - v8 <= 0xFFFFFFFFFFFFFFFCuLL )
    {
      v19 = (_QWORD *)(v7 + 24 * v17 + 80);
      do
      {
        *(_QWORD *)(v11 + 8 * v17) = *(v19 - 9);
        *(_QWORD *)(v11 + 8 * v17 + 8) = *(v19 - 6);
        *(_QWORD *)(v11 + 8 * v17 + 16) = *(v19 - 3);
        *(_QWORD *)(v11 + 8 * v17 + 24) = *v19;
        v17 += 4LL;
        v19 += 12;
      }
      while ( v8 != v17 );
    }
  }
  else
  {
    v11 = 8;
  }
  v57 = RmRegisterResources(pSessionHandle, v8, (LPCWSTR *)v11, 0, nullptr, 0, nullptr);
  v59 = v7;
  if ( v57 )
  {
    if ( *(_QWORD *)off_1421E6EC0 < 2u )
    {
LABEL_36:
      *a1 = 0;
      a1[1] = 8;
      a1[2] = 0;
      goto LABEL_37;
    }
    v62 = v11;
    v66 = v9;
    v65 = v8;
    *(_QWORD *)&v38[0] = &v57;
    *((_QWORD *)&v38[0] + 1) = sub_1416BBD00;
    v47 = 2;
    v48 = aCodexmateLibPl_2;
    v49 = 32;
    v51 = &unk_141A57628;
    v52 = v38;
    v41 = nullptr;
    v42 = (__int64)aCodexmateLibPl_2;
    v43 = 32;
    v44 = 0;
    v45 = (char **)aSrcPlatformPro_1;
    p_CurrentProcessId = 23;
    v50 = 0x3A300000001LL;
    sub_1414D53A0(&v68, &v41);
LABEL_25:
    v8 = v65;
    v9 = v66;
    v11 = v62;
    goto LABEL_36;
  }
  pnProcInfoNeeded = 0;
  pnProcInfo = 0;
  dwRebootReasons = 0;
  List = RmGetList(pSessionHandle, &pnProcInfoNeeded, &pnProcInfo, nullptr, &dwRebootReasons);
  v55 = List;
  if ( !List )
    goto LABEL_36;
  v22 = pnProcInfoNeeded;
  if ( !pnProcInfoNeeded )
    goto LABEL_36;
  if ( List != 234 )
  {
    if ( *(_QWORD *)off_1421E6EC0 < 2u )
      goto LABEL_36;
    v62 = v11;
    v66 = v9;
    v65 = v8;
    *(_QWORD *)&v38[0] = &v55;
    *((_QWORD *)&v38[0] + 1) = sub_1416BBD00;
    v41 = aCodexmateLibPl_2;
    v42 = 32;
    v43 = (__int64)aCodexmateLibPl_2;
    v44 = 32;
    v45 = &off_141A57610;
    sub_140BAD520(&unk_141A575D8, v38, 2, &v41);
    goto LABEL_25;
  }
  v62 = v11;
  nullsub_1(v21);
  v61 = 668 * v22;
  v23 = sub_140001650(668 * v22, 4);
  if ( !v23 )
  {
    v66 = v9;
    v65 = v8;
    sub_141938D2B(4, v61);
  }
  v24 = (RM_PROCESS_INFO *)v23;
  v35 = 668LL * (unsigned int)(v22 - 1);
  sub_1418F4C70(v23, 0, v35 + 668);
  pnProcInfo = pnProcInfoNeeded;
  v60 = v24;
  v54 = RmGetList(pSessionHandle, &pnProcInfoNeeded, &pnProcInfo, v24, &dwRebootReasons);
  if ( !v54 )
  {
    v27 = v35;
    v66 = v9;
    v65 = v8;
    v69 = 1;
    CurrentProcessId = GetCurrentProcessId();
    v69 = 1;
    v28 = sub_140893A90(&off_141A56FA0);
    v38[1] = *(&off_141A56DB0 + 1);
    v38[0] = off_141A56DB0;
    v39 = v28;
    v40 = v29;
    v41 = (const char *)v60;
    v42 = (__int64)v60;
    v43 = v22;
    v44 = (__int64)&v60[1] + v27;
    v45 = (char **)pnProcInfo;
    p_CurrentProcessId = (__int64)&CurrentProcessId;
    v47 = (__int64)v38;
    sub_1403E2BE0(a1, &v41);
    sub_140371D00(v38);
    if ( v65 )
      sub_140001660(v62, v66, 8);
    sub_1403FA860(v36);
    goto LABEL_45;
  }
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v66 = v9;
    v65 = v8;
    *(_QWORD *)&v38[0] = &v54;
    *((_QWORD *)&v38[0] + 1) = sub_1416BBD00;
    v41 = aCodexmateLibPl_2;
    v42 = 32;
    v43 = (__int64)aCodexmateLibPl_2;
    v44 = 32;
    v45 = &off_141A575C0;
    v69 = 1;
    sub_140BAD520(&unk_141A5758D, v38, 2, &v41);
    v8 = v65;
    v9 = v66;
  }
  *a1 = 0;
  a1[1] = 8;
  a1[2] = 0;
  sub_140001660(v60, v61, 4);
  v11 = v62;
LABEL_37:
  if ( v8 )
  {
    sub_140001660(v11, v9, 8);
    v25 = (_QWORD *)(v59 + 8);
    do
    {
      v26 = *(v25 - 1);
      if ( v26 )
        sub_140001660(*v25, 2 * v26, 2);
      v25 += 3;
      --v8;
    }
    while ( v8 );
  }
LABEL_45:
  if ( v36[0] )
    sub_140001660(v59, 24LL * v36[0], 8);
  RmEndSession(pSessionHandle);
}
