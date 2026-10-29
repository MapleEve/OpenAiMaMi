// win 1.2.7 | module src/platform/process.rs | ea 0x140ee9750 | name sub_140EE9750
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EE9750(__int64 a1, __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  int v5; // edi
  int v6; // ebx
  __int64 result; // rax
  HWND hwnd; // rdx
  LPCWSTR lpVerb; // rcx
  LPCWSTR lpFile; // r14
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  HWND v18; // rax
  int v19; // r8d
  const WCHAR *v20; // r15
  char *v21; // r15
  __int64 v22; // r12
  _QWORD *v23; // r13
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r12
  const WCHAR *v27; // r15
  __int64 v28; // rcx
  HANDLE hProcess; // r13
  DWORD v30; // eax
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // r15
  __int64 v34; // r15
  __int64 (__fastcall **v35)(); // rcx
  __int64 v36; // r12
  __int64 v37; // r15
  _OWORD *v38; // rax
  _OWORD *v39; // rax
  __int64 v40; // rcx
  HWND v41; // rdx
  LPCWSTR v42; // r8
  LPCWSTR v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int64 LastError; // r15
  __int64 v48; // r15
  _BYTE v49[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v50[24]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v51; // [rsp+58h] [rbp-28h] BYREF
  __int64 v52; // [rsp+68h] [rbp-18h]
  _BYTE v53[96]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v54[96]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v55; // [rsp+138h] [rbp+B8h] BYREF
  const WCHAR *v56; // [rsp+140h] [rbp+C0h]
  __int64 v57; // [rsp+150h] [rbp+D0h] BYREF
  const WCHAR *v58; // [rsp+158h] [rbp+D8h]
  HANDLE hObject; // [rsp+168h] [rbp+E8h]
  HWND v60; // [rsp+170h] [rbp+F0h] BYREF
  const WCHAR *v61; // [rsp+178h] [rbp+F8h]
  const WCHAR *v62; // [rsp+188h] [rbp+108h]
  LPCWSTR v63; // [rsp+190h] [rbp+110h] BYREF
  HWND v64; // [rsp+198h] [rbp+118h]
  const WCHAR *v65; // [rsp+1A0h] [rbp+120h]
  DWORD v66; // [rsp+1B4h] [rbp+134h] BYREF
  unsigned __int64 v67; // [rsp+1B8h] [rbp+138h]
  HWND v68; // [rsp+1C0h] [rbp+140h]
  LPCWSTR v69; // [rsp+1C8h] [rbp+148h]
  DWORD ExitCode; // [rsp+1D0h] [rbp+150h] BYREF
  int v71; // [rsp+1D4h] [rbp+154h] BYREF
  const WCHAR *v72; // [rsp+1D8h] [rbp+158h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+1E0h] [rbp+160h] BYREF
  unsigned __int64 v74; // [rsp+250h] [rbp+1D0h] BYREF
  char *v75; // [rsp+258h] [rbp+1D8h]
  __int64 v76; // [rsp+260h] [rbp+1E0h]
  __int64 *v77; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v79; // [rsp+278h] [rbp+1F8h] BYREF
  HWND v80; // [rsp+280h] [rbp+200h]
  HWND v81; // [rsp+288h] [rbp+208h]
  __int64 v82; // [rsp+290h] [rbp+210h]
  char v83; // [rsp+29Fh] [rbp+21Fh]
  __int64 v84; // [rsp+2A0h] [rbp+220h]

  v84 = -2;
  v5 = a3;
  v6 = a2;
  sub_140EE4DC0((__int64)&pExecInfo, a2, a3);
  if ( pExecInfo.cbSize == -1 )
  {
    *(_QWORD *)v54 = -1;
  }
  else
  {
    *(_OWORD *)&v54[80] = *(_OWORD *)&pExecInfo.hkeyClass;
    *(_OWORD *)&v54[64] = *(_OWORD *)&pExecInfo.lpIDList;
    *(_OWORD *)&v54[48] = *(_OWORD *)&pExecInfo.nShow;
    *(_OWORD *)&v54[32] = *(_OWORD *)&pExecInfo.lpParameters;
    *(_OWORD *)&v54[16] = *(_OWORD *)&pExecInfo.lpVerb;
    *(_OWORD *)v54 = *(_OWORD *)&pExecInfo.cbSize;
  }
  v83 = 0;
  sub_140EEFDA0((unsigned int)&pExecInfo, v6, v5, 0, 750000000);
  result = *(_QWORD *)&pExecInfo.cbSize;
  hwnd = pExecInfo.hwnd;
  lpVerb = pExecInfo.lpVerb;
  lpFile = pExecInfo.lpFile;
  if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
  {
    v12 = *(_OWORD *)&pExecInfo.lpParameters;
    v13 = *(_OWORD *)&pExecInfo.nShow;
    v14 = *(_OWORD *)&pExecInfo.lpIDList;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&pExecInfo.hkeyClass;
    *(_OWORD *)(a1 + 64) = v14;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v12;
    *(_QWORD *)(a1 + 8) = hwnd;
    *(_QWORD *)(a1 + 16) = lpVerb;
    *(_QWORD *)(a1 + 24) = lpFile;
    *(_QWORD *)a1 = result;
LABEL_6:
    if ( *(_QWORD *)v54 != -1 )
      return sub_140E97700(v54);
    return result;
  }
  if ( !pExecInfo.lpFile )
  {
    *(_QWORD *)a1 = -1;
    if ( hwnd )
      result = sub_140001660(lpVerb, 4LL * (_QWORD)hwnd, 4);
    goto LABEL_6;
  }
  v69 = pExecInfo.lpVerb;
  v68 = pExecInfo.hwnd;
  if ( *(_QWORD *)v54 == -1 )
  {
    v63 = pExecInfo.lpFile;
    *(_QWORD *)&pExecInfo.cbSize = &v63;
    pExecInfo.hwnd = (HWND)sub_1416BCB10;
    result = sub_1416ABFD0(&v53[8], &unk_141A57551, &pExecInfo);
    *(_QWORD *)v53 = 10;
    if ( *a4 )
      goto LABEL_11;
  }
  else
  {
    *(_QWORD *)v53 = *(_QWORD *)v54;
    *(_OWORD *)&v53[8] = *(_OWORD *)&v54[8];
    *(_OWORD *)&v53[24] = *(_OWORD *)&v54[24];
    *(_OWORD *)&v53[40] = *(_OWORD *)&v54[40];
    *(_OWORD *)&v53[56] = *(_OWORD *)&v54[56];
    *(_OWORD *)&v53[72] = *(_OWORD *)&v54[72];
    result = *(_QWORD *)&v54[88];
    *(_QWORD *)&v53[88] = *(_QWORD *)&v54[88];
    if ( *a4 )
    {
LABEL_11:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v53[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v53[64];
      v15 = *(_OWORD *)v53;
      v16 = *(_OWORD *)&v53[16];
      v17 = *(_OWORD *)&v53[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v53[48];
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
      goto LABEL_69;
    }
  }
  *a4 = 1;
  v63 = lpFile;
  *(_QWORD *)&pExecInfo.cbSize = &v63;
  pExecInfo.hwnd = (HWND)sub_1416BCB10;
  sub_1416ABFD0(v50, &unk_141A5A85C, &pExecInfo);
  sub_14019B500((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth, 35, (__int64)v50);
  sub_1416994D0(&pExecInfo, aSystemroot, 10);
  if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
  {
    v18 = pExecInfo.hwnd;
    v19 = (int)pExecInfo.lpVerb;
    if ( pExecInfo.lpVerb )
    {
      v80 = *(HWND *)&pExecInfo.cbSize;
      goto LABEL_21;
    }
    if ( *(_QWORD *)&pExecInfo.cbSize )
      sub_140001660(pExecInfo.hwnd, *(_QWORD *)&pExecInfo.cbSize, 1);
  }
  sub_1416AB9B0(&pExecInfo, aCWindows, 10);
  v80 = *(HWND *)&pExecInfo.cbSize;
  v18 = pExecInfo.hwnd;
  v19 = (int)pExecInfo.lpVerb;
LABEL_21:
  v82 = (__int64)v18;
  sub_1416828D0((unsigned int)&pExecInfo, (_DWORD)v18, v19, (unsigned int)&unk_141A5ABF0, 8);
  v81 = pExecInfo.hwnd;
  sub_1416828D0((unsigned int)&v63, pExecInfo.hwnd, pExecInfo.lpVerb, (unsigned int)&unk_141A5ABF8, 12);
  if ( *(_QWORD *)&pExecInfo.cbSize )
    sub_140001660(v81, *(_QWORD *)&pExecInfo.cbSize, 1);
  if ( v80 )
    sub_140001660(v82, v80, 1);
  v20 = v65;
  v80 = v64;
  if ( (unsigned __int8)sub_141682B30(v64, v65) )
  {
    *(_QWORD *)&pExecInfo.cbSize = "runas ";
    pExecInfo.hwnd = (HWND)" ";
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_1403E3E50(&v57, (unsigned __int8 **)&pExecInfo);
    *(_QWORD *)&pExecInfo.cbSize = v80;
    pExecInfo.hwnd = (HWND)((char *)v20 + (_QWORD)v80);
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_1403E4290(&v55, &pExecInfo);
    sub_140EEAD80(&v74, v69, lpFile);
    v21 = v75;
    v22 = v76;
    sub_140D1EE10((unsigned int)&pExecInfo, (_DWORD)v75, v76, (unsigned int)" ", 1);
    v82 = *(_QWORD *)&pExecInfo.cbSize;
    v81 = pExecInfo.hwnd;
    *(_QWORD *)&pExecInfo.cbSize = pExecInfo.hwnd;
    pExecInfo.hwnd = (HWND)((char *)pExecInfo.hwnd + (unsigned __int64)pExecInfo.lpVerb);
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_1403E3E50(&v60, (unsigned __int8 **)&pExecInfo);
    if ( v82 )
      sub_140001660(v81, v82, 1);
    if ( v22 )
    {
      v23 = v21 + 8;
      do
      {
        v24 = *(v23 - 1);
        if ( v24 )
          sub_140001660(*v23, v24, 1);
        v23 += 3;
        --v22;
      }
      while ( v22 );
    }
    if ( v74 )
      sub_140001660(v21, 24 * v74, 8);
    pExecInfo.hwnd = nullptr;
    memset(&pExecInfo.lpDirectory, 0, 72);
    *(_QWORD *)&pExecInfo.cbSize = 0x4000000070LL;
    v62 = v58;
    pExecInfo.lpVerb = v58;
    v26 = (unsigned __int64)v56;
    pExecInfo.lpFile = v56;
    v27 = v61;
    pExecInfo.lpParameters = v61;
    if ( ShellExecuteExW(&pExecInfo) )
    {
      hProcess = pExecInfo.hProcess;
      if ( pExecInfo.hProcess )
      {
        v30 = WaitForSingleObject(pExecInfo.hProcess, 0x7530u);
        v66 = v30;
        v72 = v27;
        v67 = v26;
        hObject = hProcess;
        if ( v30 == -1 )
        {
          LastError = GetLastError();
          if ( *off_1421E7288 != off_141A5AC50 )
            sub_1419394C0(off_141A5AC50);
          v79 = (LastError << 32) | 2;
          v77 = &v79;
          v78 = (__int64 (__fastcall *)())sub_1416BB0B0;
          sub_1416ABFD0(&v74, &unk_141A5AE0D, &v77);
          if ( (unsigned int)(v79 & 3) - 2 >= 2 && (v79 & 3) != 0 )
          {
            v78 = (__int64 (__fastcall *)())(v79 - 1);
            LOBYTE(v77) = 3;
            sub_1416BCB00(&v78);
          }
        }
        else if ( v30 )
        {
          if ( v30 == 258 )
          {
            nullsub_1(v31);
            v82 = 79;
            v32 = (_OWORD *)sub_140001650(79, 1);
            if ( !v32 )
              sub_141938D2B(1, 79);
            *(_OWORD *)((char *)v32 + 63) = *(__int128 *)((char *)&xmmword_141A5ADEE + 15);
            v32[3] = xmmword_141A5ADEE;
            v81 = (HWND)v32;
            qmemcpy(v32, "CODEX_FORCE_KILL_AUTHORIZATION_TIMEOUT: Windows ", 48);
            LODWORD(v26) = 0;
            LODWORD(v25) = 79;
            v33 = 10;
            goto LABEL_90;
          }
          v77 = (__int64 *)&v66;
          v78 = sub_1416BBD00;
          sub_1416ABFD0(&v74, &unk_141A5AE50, &v77);
        }
        else
        {
          ExitCode = 0;
          if ( GetExitCodeProcess(hProcess, &ExitCode) )
          {
            v33 = -1;
            LODWORD(v25) = ExitCode;
LABEL_90:
            CloseHandle(hObject);
            if ( v60 )
              sub_140001660(v72, 2LL * (_QWORD)v60, 2);
            if ( v55 )
              sub_140001660(v67, 2 * v55, 2);
            if ( v57 )
              sub_140001660(v62, 2 * v57, 2);
            goto LABEL_62;
          }
          v48 = GetLastError();
          if ( *off_1421E7288 != off_141A5AC50 )
            sub_1419394C0(off_141A5AC50);
          v79 = (v48 << 32) | 2;
          v77 = &v79;
          v78 = (__int64 (__fastcall *)())sub_1416BB0B0;
          sub_1416ABFD0(&v74, &unk_141A5AD6F, &v77);
          sub_1408ECB70(v79);
        }
        LODWORD(v25) = v74;
        v81 = (HWND)v75;
        v26 = HIDWORD(v74);
        v33 = 10;
        v82 = v76;
        goto LABEL_90;
      }
      nullsub_1(v28);
      v82 = 74;
      v39 = (_OWORD *)sub_140001650(74, 1);
      if ( !v39 )
      {
        v72 = v27;
        sub_141938D2B(1, 74);
      }
      *(_OWORD *)((char *)v39 + 58) = *(__int128 *)((char *)&xmmword_141A5AD55 + 10);
      v39[3] = xmmword_141A5AD55;
      v39[2] = xmmword_141A5AD45;
      v81 = (HWND)v39;
      qmemcpy(v39, "CODEX_FORCE_KILL_AUTHORIZATION_F", 32);
      v25 = 74;
    }
    else
    {
      v67 = v26;
      v72 = v27;
      v34 = GetLastError();
      v35 = off_141A5AC50;
      if ( *off_1421E7288 != off_141A5AC50 )
        sub_1419394C0(off_141A5AC50);
      v36 = (v34 << 32) | 2;
      v79 = v36;
      if ( (_DWORD)v34 == 1223 )
      {
        nullsub_1(v35);
        v37 = 108;
        v38 = (_OWORD *)sub_140001650(108, 1);
        if ( !v38 )
          sub_141938D2B(1, 108);
        *(_OWORD *)((char *)v38 + 92) = *(__int128 *)((char *)&xmmword_141A5ACB8 + 12);
        v38[5] = xmmword_141A5ACB8;
        v38[4] = xmmword_141A5ACA8;
        v38[3] = xmmword_141A5AC98;
        v38[2] = xmmword_141A5AC88;
        v81 = (HWND)v38;
        qmemcpy(v38, "CODEX_FORCE_KILL_AUTHORIZATION_C", 32);
        v25 = 108;
      }
      else
      {
        v77 = &v79;
        v78 = (__int64 (__fastcall *)())sub_1416BB0B0;
        sub_1416ABFD0(&v74, &unk_141A5ACD4, &v77);
        v25 = v74;
        v81 = (HWND)v75;
        v37 = v76;
        v36 = v79;
      }
      v82 = v37;
      if ( (unsigned int)(v36 & 3) - 2 >= 2 && (v36 & 3) != 0 )
      {
        v78 = (__int64 (__fastcall *)())(v36 - 1);
        LOBYTE(v77) = 3;
        sub_1416BCB00(&v78);
      }
      v27 = v72;
      v26 = v67;
    }
    if ( v60 )
      sub_140001660(v27, 2LL * (_QWORD)v60, 2);
    if ( v55 )
      sub_140001660(v26, 2 * v55, 2);
    if ( v57 )
      sub_140001660(v62, 2 * v57, 2);
  }
  else
  {
    v60 = v80;
    v61 = v20;
    v74 = (unsigned __int64)&v60;
    v75 = (char *)sub_14169F630;
    sub_1416ABFD0(&pExecInfo, &unk_141A5AC04, &v74);
    v25 = *(_QWORD *)&pExecInfo.cbSize;
    v81 = pExecInfo.hwnd;
    v82 = (__int64)pExecInfo.lpVerb;
  }
  v26 = HIDWORD(v25);
  v33 = 10;
LABEL_62:
  if ( v63 )
    sub_140001660(v80, v63, 1);
  if ( (_DWORD)v33 == -1 )
  {
    v71 = v25;
    sub_140EEFDA0((unsigned int)&pExecInfo, v6, v5, 3, 0);
    v40 = *(_QWORD *)&pExecInfo.cbSize;
    v41 = pExecInfo.hwnd;
    v42 = pExecInfo.lpVerb;
    v43 = pExecInfo.lpFile;
    if ( *(_QWORD *)&pExecInfo.cbSize == -1 )
    {
      v82 = (__int64)pExecInfo.lpVerb;
      v80 = pExecInfo.hwnd;
      if ( pExecInfo.lpFile )
      {
        v63 = pExecInfo.lpFile;
        *(_QWORD *)&pExecInfo.cbSize = &v63;
        pExecInfo.hwnd = (HWND)sub_1416BCB10;
        pExecInfo.lpVerb = (LPCWSTR)&v71;
        pExecInfo.lpFile = (LPCWSTR)sub_1416BBD00;
        sub_1416ABFD0(&v51, &unk_141A5A8C2, &pExecInfo);
        *(_QWORD *)(a1 + 24) = v52;
        *(_OWORD *)(a1 + 8) = v51;
        *(_QWORD *)a1 = 10;
        if ( v80 )
          sub_140001660(v82, 4LL * (_QWORD)v80, 4);
        result = sub_140E97700(v53);
        goto LABEL_69;
      }
      v63 = lpFile;
      *(_QWORD *)&pExecInfo.cbSize = &v63;
      pExecInfo.hwnd = (HWND)sub_1416BCB10;
      pExecInfo.lpVerb = (LPCWSTR)&v71;
      pExecInfo.lpFile = (LPCWSTR)sub_1416BBD00;
      sub_1416ABFD0(v49, &unk_141A5A88F, &pExecInfo);
      sub_14019B500((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth_0, 22, (__int64)v49);
      *(_QWORD *)a1 = -1;
      if ( v80 )
        sub_140001660(v82, 4LL * (_QWORD)v80, 4);
    }
    else
    {
      v44 = *(_OWORD *)&pExecInfo.lpParameters;
      v45 = *(_OWORD *)&pExecInfo.nShow;
      v46 = *(_OWORD *)&pExecInfo.lpIDList;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&pExecInfo.hkeyClass;
      *(_OWORD *)(a1 + 64) = v46;
      *(_OWORD *)(a1 + 48) = v45;
      *(_OWORD *)(a1 + 32) = v44;
      *(_QWORD *)(a1 + 8) = v41;
      *(_QWORD *)(a1 + 16) = v42;
      *(_QWORD *)(a1 + 24) = v43;
      *(_QWORD *)a1 = v40;
    }
  }
  else
  {
    *(_QWORD *)a1 = v33;
    *(_DWORD *)(a1 + 8) = v25;
    *(_DWORD *)(a1 + 12) = v26;
    *(_QWORD *)(a1 + 16) = v81;
    *(_QWORD *)(a1 + 24) = v82;
  }
  result = sub_140E97700(v53);
LABEL_69:
  if ( v68 )
    return sub_140001660(v69, 4LL * (_QWORD)v68, 4);
  return result;
}
