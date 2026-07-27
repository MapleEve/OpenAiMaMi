// module: codexmate_lib/platform/process
// addr: 0x1403fc340
// name: sub_1403FC340
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1403FC340(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rdx
  __m128 v16; // xmm2
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // rax
  DWORD v20; // edi
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  DWORD List; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  RM_PROCESS_INFO *v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  WCHAR strSessionKey[8]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+60h] [rbp-20h]
  __int128 v35; // [rsp+70h] [rbp-10h]
  __int16 v36; // [rsp+80h] [rbp+0h]
  __int64 v37; // [rsp+88h] [rbp+8h]
  _QWORD v38[2]; // [rsp+90h] [rbp+10h] BYREF
  UINT nFiles[2]; // [rsp+A0h] [rbp+20h]
  __int64 v40; // [rsp+A8h] [rbp+28h]
  _OWORD v41[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+50h]
  __int64 v43; // [rsp+D8h] [rbp+58h]
  const char *v44; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v45; // [rsp+F0h] [rbp+70h]
  __int64 v46; // [rsp+F8h] [rbp+78h]
  __int64 v47; // [rsp+100h] [rbp+80h]
  char **v48; // [rsp+108h] [rbp+88h]
  __int64 p_CurrentProcessId; // [rsp+110h] [rbp+90h]
  __int64 v50; // [rsp+118h] [rbp+98h]
  const char *v51; // [rsp+120h] [rbp+A0h]
  __int64 v52; // [rsp+128h] [rbp+A8h]
  __int64 v53; // [rsp+130h] [rbp+B0h]
  void *v54; // [rsp+138h] [rbp+B8h]
  _OWORD *v55; // [rsp+140h] [rbp+C0h]
  DWORD CurrentProcessId; // [rsp+148h] [rbp+C8h] BYREF
  DWORD v57; // [rsp+14Ch] [rbp+CCh] BYREF
  DWORD v58; // [rsp+150h] [rbp+D0h] BYREF
  DWORD dwRebootReasons; // [rsp+154h] [rbp+D4h] BYREF
  DWORD v60; // [rsp+158h] [rbp+D8h] BYREF
  DWORD started; // [rsp+15Ch] [rbp+DCh] BYREF
  RM_PROCESS_INFO *v62; // [rsp+160h] [rbp+E0h]
  __int64 v63; // [rsp+168h] [rbp+E8h]
  DWORD pSessionHandle; // [rsp+174h] [rbp+F4h] BYREF
  __int64 v65; // [rsp+178h] [rbp+F8h]
  __int64 v66; // [rsp+180h] [rbp+100h]
  UINT pnProcInfo; // [rsp+188h] [rbp+108h] BYREF
  UINT pnProcInfoNeeded; // [rsp+18Ch] [rbp+10Ch] BYREF
  unsigned __int64 v69; // [rsp+190h] [rbp+110h]
  char v70; // [rsp+19Eh] [rbp+11Eh] BYREF
  char v71; // [rsp+19Fh] [rbp+11Fh]
  __int64 v72; // [rsp+1A0h] [rbp+120h]

  v72 = -2;
  if ( !a3 )
    goto LABEL_5;
  pSessionHandle = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  *(_OWORD *)strSessionKey = 0;
  v36 = 0;
  started = RmStartSession(&pSessionHandle, 0, strSessionKey);
  if ( started )
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v41[0] = &started;
      *((_QWORD *)&v41[0] + 1) = sub_1414AB780;
      v44 = nullptr;
      v45 = (__int64)aCodexmateLibPl_2;
      v46 = 32;
      v47 = 0;
      v48 = (char **)aSrcPlatformPro_2;
      p_CurrentProcessId = 23;
      v50 = 2;
      v51 = aCodexmateLibPl_2;
      v52 = 32;
      v53 = 0x36800000001LL;
      v54 = &unk_141752155;
      v55 = v41;
      sub_1412C36A0(&v70, &v44);
    }
LABEL_5:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return;
  }
  sub_140327B50(v38, a2, a2 + 32 * a3);
  v7 = v38[1];
  v8 = *(_QWORD *)nFiles;
  v9 = 8LL * *(_QWORD *)nFiles;
  if ( *(_QWORD *)nFiles )
  {
    nullsub_1(v6);
    v10 = sub_140001650(v9, 8);
    if ( !v10 )
      sub_1416C2D4B(8, v9);
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
  v20 = pSessionHandle;
  v60 = RmRegisterResources(pSessionHandle, v8, (LPCWSTR *)v11, 0, nullptr, 0, nullptr);
  if ( v60 )
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v65 = v11;
      v66 = v9;
      v69 = v8;
      *(_QWORD *)&v41[0] = &v60;
      *((_QWORD *)&v41[0] + 1) = sub_1414AB780;
      v44 = nullptr;
      v45 = (__int64)aCodexmateLibPl_2;
      v46 = 32;
      v47 = 0;
      v48 = (char **)aSrcPlatformPro_2;
      p_CurrentProcessId = 23;
      v50 = 2;
      v51 = aCodexmateLibPl_2;
      v52 = 32;
      v53 = 0x37B00000001LL;
      v54 = &unk_14174D680;
      v55 = v41;
      sub_1412C36A0(&v70, &v44);
      v8 = v69;
      v9 = v66;
      v11 = v65;
    }
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    if ( v8 )
      goto LABEL_26;
    goto LABEL_27;
  }
  v65 = v11;
  pnProcInfoNeeded = 0;
  pnProcInfo = 0;
  dwRebootReasons = 0;
  List = RmGetList(v20, &pnProcInfoNeeded, &pnProcInfo, nullptr, &dwRebootReasons);
  v58 = List;
  if ( !List )
    goto LABEL_45;
  v26 = pnProcInfoNeeded;
  if ( !pnProcInfoNeeded )
    goto LABEL_45;
  if ( List != 234 )
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v66 = v9;
      v69 = v8;
      *(_QWORD *)&v41[0] = &v58;
      *((_QWORD *)&v41[0] + 1) = sub_1414AB780;
      v44 = aCodexmateLibPl_2;
      v45 = 32;
      v46 = (__int64)aCodexmateLibPl_2;
      v47 = 32;
      v48 = &off_14174D668;
      sub_140985BA0(&unk_14174D630, v41, 2, &v44);
      v8 = v69;
      v9 = v66;
    }
LABEL_45:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    goto LABEL_46;
  }
  v66 = v9;
  nullsub_1(v25);
  v63 = 668 * v26;
  v27 = sub_140001650(668 * v26, 4);
  if ( !v27 )
  {
    v69 = v8;
    sub_1416C2D4B(4, v63);
  }
  v28 = (RM_PROCESS_INFO *)v27;
  v37 = 668LL * (unsigned int)(v26 - 1);
  sub_1416848B0(v27, 0, v37 + 668);
  pnProcInfo = pnProcInfoNeeded;
  v62 = v28;
  v57 = RmGetList(v20, &pnProcInfoNeeded, &pnProcInfo, v28, &dwRebootReasons);
  if ( v57 )
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v69 = v8;
      *(_QWORD *)&v41[0] = &v57;
      *((_QWORD *)&v41[0] + 1) = sub_1414AB780;
      v44 = aCodexmateLibPl_2;
      v45 = 32;
      v46 = (__int64)aCodexmateLibPl_2;
      v47 = 32;
      v48 = &off_14174D618;
      v71 = 1;
      sub_140985BA0(&unk_14174D5E8, v41, 2, &v44);
      v8 = v69;
    }
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    sub_140001660(v62, v63, 4);
    v9 = v66;
LABEL_46:
    v11 = v65;
    if ( v8 )
LABEL_26:
      sub_140001660(v11, v9, 8);
LABEL_27:
    if ( v8 )
    {
      v21 = (_QWORD *)(v7 + 8);
      do
      {
        v22 = *(v21 - 1);
        if ( v22 )
          sub_140001660(*v21, 2 * v22, 2);
        v21 += 3;
        --v8;
      }
      while ( v8 );
    }
    v23 = v38[0];
    if ( !v38[0] )
      goto LABEL_34;
    goto LABEL_33;
  }
  v29 = v37;
  v69 = v8;
  v71 = 1;
  CurrentProcessId = GetCurrentProcessId();
  v71 = 1;
  v30 = sub_1407BF4A0(&off_14174D5E0);
  v40 = v7;
  v41[1] = *(&off_14174C6F0 + 1);
  v41[0] = off_14174C6F0;
  v42 = v30;
  v43 = v31;
  v44 = (const char *)v62;
  v45 = (__int64)v62;
  v46 = v26;
  v47 = (__int64)&v62[1] + v29;
  v48 = (char **)pnProcInfo;
  p_CurrentProcessId = (__int64)&CurrentProcessId;
  v50 = (__int64)v41;
  sub_14031E490(a1, &v44);
  sub_140681390(v41);
  if ( v69 )
    sub_140001660(v65, v66, 8);
  sub_140334130(v38);
  v23 = v38[0];
  v7 = v40;
  if ( !v38[0] )
    goto LABEL_34;
LABEL_33:
  sub_140001660(v7, 24 * v23, 8);
LABEL_34:
  RmEndSession(pSessionHandle);
}