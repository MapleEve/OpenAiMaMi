// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x14098a180 | successor of pre-update 0x140ee9750 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
double __fastcall sub_14098A180(__int64 a1, int a2, int a3, _BYTE *a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rax
  HWND hwnd; // rdx
  LPCWSTR lpVerb; // rcx
  LPCWSTR lpFile; // r14
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  HWND v17; // rax
  int v18; // r8d
  const WCHAR *v19; // r15
  char *v20; // r15
  __int64 v21; // r12
  _QWORD *v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r12
  const WCHAR *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  HANDLE hProcess; // r13
  DWORD v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 (__fastcall **v37)(); // rcx
  __int64 v38; // r12
  __int64 v39; // r15
  _OWORD *v40; // rax
  _OWORD *v41; // rax
  __int64 v42; // rcx
  HWND v43; // rdx
  LPCWSTR v44; // r8
  LPCWSTR v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int64 LastError; // r15
  __int64 v49; // r15
  double result; // xmm0_8
  _BYTE v51[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v52[24]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v53; // [rsp+58h] [rbp-28h] BYREF
  __int64 v54; // [rsp+68h] [rbp-18h]
  _BYTE v55[96]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v56[96]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v57; // [rsp+138h] [rbp+B8h] BYREF
  const WCHAR *v58; // [rsp+140h] [rbp+C0h]
  __int64 v59; // [rsp+150h] [rbp+D0h] BYREF
  const WCHAR *v60; // [rsp+158h] [rbp+D8h]
  HANDLE hObject; // [rsp+168h] [rbp+E8h]
  HWND v62; // [rsp+170h] [rbp+F0h] BYREF
  const WCHAR *v63; // [rsp+178h] [rbp+F8h]
  const WCHAR *v64; // [rsp+188h] [rbp+108h]
  LPCWSTR v65; // [rsp+190h] [rbp+110h] BYREF
  HWND v66; // [rsp+198h] [rbp+118h]
  const WCHAR *v67; // [rsp+1A0h] [rbp+120h]
  DWORD v68; // [rsp+1B4h] [rbp+134h] BYREF
  unsigned __int64 v69; // [rsp+1B8h] [rbp+138h]
  HWND v70; // [rsp+1C0h] [rbp+140h]
  LPCWSTR v71; // [rsp+1C8h] [rbp+148h]
  DWORD ExitCode; // [rsp+1D0h] [rbp+150h] BYREF
  int v73; // [rsp+1D4h] [rbp+154h] BYREF
  const WCHAR *v74; // [rsp+1D8h] [rbp+158h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+1E0h] [rbp+160h] BYREF
  unsigned __int64 v76; // [rsp+250h] [rbp+1D0h] BYREF
  char *v77; // [rsp+258h] [rbp+1D8h]
  __int64 v78; // [rsp+260h] [rbp+1E0h]
  __int64 *v79; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v81; // [rsp+278h] [rbp+1F8h] BYREF
  HWND v82; // [rsp+280h] [rbp+200h]
  HWND v83; // [rsp+288h] [rbp+208h]
  __int64 v84; // [rsp+290h] [rbp+210h]
  char v85; // [rsp+29Fh] [rbp+21Fh]
  __int64 v86; // [rsp+2A0h] [rbp+220h]

  v86 = -2;
  sub_14097F960(&pExecInfo);
  if ( pExecInfo.cbSize == -1 )
  {
    *(_QWORD *)v56 = -1;
  }
  else
  {
    *(_OWORD *)&v56[80] = *(_OWORD *)&pExecInfo.hkeyClass;
    *(_OWORD *)&v56[64] = *(_OWORD *)&pExecInfo.lpIDList;
    *(_QWORD *)&v8 = *(_QWORD *)&pExecInfo.cbSize;
    *(_OWORD *)&v56[48] = *(_OWORD *)&pExecInfo.nShow;
    *(_OWORD *)&v56[32] = *(_OWORD *)&pExecInfo.lpParameters;
    *(_OWORD *)&v56[16] = *(_OWORD *)&pExecInfo.lpVerb;
    *(_OWORD *)v56 = *(_OWORD *)&pExecInfo.cbSize;
  }
  v85 = 0;
  sub_14098FA80((unsigned int)&pExecInfo, a2, a3, 0, 750000000);
  v9 = *(_QWORD *)&pExecInfo.cbSize;
  hwnd = pExecInfo.hwnd;
  lpVerb = pExecInfo.lpVerb;
  lpFile = pExecInfo.lpFile;
  if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
  {
    v8 = *(_OWORD *)&pExecInfo.lpParameters;
    v13 = *(_OWORD *)&pExecInfo.nShow;
    v14 = *(_OWORD *)&pExecInfo.lpIDList;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&pExecInfo.hkeyClass;
    *(_OWORD *)(a1 + 64) = v14;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 8) = hwnd;
    *(_QWORD *)(a1 + 16) = lpVerb;
    *(_QWORD *)(a1 + 24) = lpFile;
    *(_QWORD *)a1 = v9;
LABEL_6:
    if ( *(_QWORD *)v56 != -1 )
      sub_140906570(v56);
    goto LABEL_99;
  }
  if ( !pExecInfo.lpFile )
  {
    *(_QWORD *)a1 = -1;
    if ( hwnd )
      *(double *)&v8 = sub_140001660(lpVerb, 4LL * (_QWORD)hwnd, 4);
    goto LABEL_6;
  }
  v71 = pExecInfo.lpVerb;
  v70 = pExecInfo.hwnd;
  if ( *(_QWORD *)v56 == -1 )
  {
    v65 = pExecInfo.lpFile;
    *(_QWORD *)&pExecInfo.cbSize = &v65;
    pExecInfo.hwnd = (HWND)sub_1416EBAE0;
    sub_1416DAFA0(&v55[8], &unk_141A5997F, &pExecInfo);
    *(_QWORD *)v55 = 10;
    if ( *a4 )
      goto LABEL_11;
  }
  else
  {
    *(_QWORD *)v55 = *(_QWORD *)v56;
    *(_OWORD *)&v55[8] = *(_OWORD *)&v56[8];
    *(_OWORD *)&v55[24] = *(_OWORD *)&v56[24];
    *(_OWORD *)&v55[40] = *(_OWORD *)&v56[40];
    *(_OWORD *)&v55[56] = *(_OWORD *)&v56[56];
    *(_QWORD *)&v8 = *(_QWORD *)&v56[72];
    *(_OWORD *)&v55[72] = *(_OWORD *)&v56[72];
    *(_QWORD *)&v55[88] = *(_QWORD *)&v56[88];
    if ( *a4 )
    {
LABEL_11:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v55[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v55[64];
      v8 = *(_OWORD *)v55;
      v15 = *(_OWORD *)&v55[16];
      v16 = *(_OWORD *)&v55[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v55[48];
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v8;
      goto LABEL_69;
    }
  }
  *a4 = 1;
  v65 = lpFile;
  *(_QWORD *)&pExecInfo.cbSize = &v65;
  pExecInfo.hwnd = (HWND)sub_1416EBAE0;
  sub_1416DAFA0(v52, &unk_141A5D51C, &pExecInfo);
  sub_1406C9730((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth, 35, (__int64)v52);
  sub_1416C84A0(&pExecInfo, aSystemroot, 10);
  if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
  {
    v17 = pExecInfo.hwnd;
    v18 = (int)pExecInfo.lpVerb;
    if ( pExecInfo.lpVerb )
    {
      v82 = *(HWND *)&pExecInfo.cbSize;
      goto LABEL_21;
    }
    if ( *(_QWORD *)&pExecInfo.cbSize )
      *(double *)&v8 = sub_140001660(pExecInfo.hwnd, *(_QWORD *)&pExecInfo.cbSize, 1);
  }
  sub_1416DA980(&pExecInfo, aCWindows, 10);
  v82 = *(HWND *)&pExecInfo.cbSize;
  v17 = pExecInfo.hwnd;
  v18 = (int)pExecInfo.lpVerb;
LABEL_21:
  v84 = (__int64)v17;
  sub_1416B18A0((unsigned int)&pExecInfo, (_DWORD)v17, v18, (unsigned int)&unk_141A5D938, 8);
  v83 = pExecInfo.hwnd;
  sub_1416B18A0((unsigned int)&v65, pExecInfo.hwnd, pExecInfo.lpVerb, (unsigned int)&unk_141A5D940, 12);
  if ( *(_QWORD *)&pExecInfo.cbSize )
    *(double *)&v8 = sub_140001660(v83, *(_QWORD *)&pExecInfo.cbSize, 1);
  if ( v82 )
    *(double *)&v8 = sub_140001660(v84, v82, 1);
  v19 = v67;
  v82 = v66;
  if ( (unsigned __int8)sub_1416B1B00(v66, v67) )
  {
    *(_QWORD *)&pExecInfo.cbSize = "runas ";
    pExecInfo.hwnd = (HWND)" ";
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_140219F60((__int64)&v59, (unsigned __int64)&pExecInfo);
    *(_QWORD *)&pExecInfo.cbSize = v82;
    pExecInfo.hwnd = (HWND)((char *)v19 + (_QWORD)v82);
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_14021A3B0(&v57, &pExecInfo);
    sub_14098B7B0(&v76, v71, lpFile);
    v20 = v77;
    v21 = v78;
    sub_1406C5480((unsigned int)&pExecInfo, (_DWORD)v77, v78, (unsigned int)" ", 1);
    v84 = *(_QWORD *)&pExecInfo.cbSize;
    v83 = pExecInfo.hwnd;
    *(_QWORD *)&pExecInfo.cbSize = pExecInfo.hwnd;
    pExecInfo.hwnd = (HWND)((char *)pExecInfo.hwnd + (unsigned __int64)pExecInfo.lpVerb);
    LOWORD(pExecInfo.lpVerb) = 0;
    LODWORD(pExecInfo.lpFile) = 1;
    sub_140219F60((__int64)&v62, (unsigned __int64)&pExecInfo);
    if ( v84 )
      sub_140001660(v83, v84, 1);
    if ( v21 )
    {
      v22 = v20 + 8;
      do
      {
        v23 = *(v22 - 1);
        if ( v23 )
          sub_140001660(*v22, v23, 1);
        v22 += 3;
        --v21;
      }
      while ( v21 );
    }
    if ( v76 )
      sub_140001660(v20, 24 * v76, 8);
    *(_QWORD *)&v8 = 0;
    pExecInfo.hwnd = nullptr;
    memset(&pExecInfo.lpDirectory, 0, 72);
    *(_QWORD *)&pExecInfo.cbSize = 0x4000000070LL;
    v64 = v60;
    pExecInfo.lpVerb = v60;
    v25 = (unsigned __int64)v58;
    pExecInfo.lpFile = v58;
    v26 = v63;
    pExecInfo.lpParameters = v63;
    if ( ShellExecuteExW(&pExecInfo) )
    {
      hProcess = pExecInfo.hProcess;
      if ( pExecInfo.hProcess )
      {
        v30 = WaitForSingleObject(pExecInfo.hProcess, 0x7530u);
        v68 = v30;
        v74 = v26;
        v69 = v25;
        hObject = hProcess;
        if ( v30 == -1 )
        {
          LastError = GetLastError();
          if ( *off_1422402D8 != &off_141A5D998 )
            sub_14196BA70(&off_141A5D998);
          v81 = (LastError << 32) | 2;
          v79 = &v81;
          v80 = (__int64 (__fastcall *)())sub_1416EA080;
          sub_1416DAFA0(&v76, &unk_141A5DB55, &v79);
          if ( (unsigned int)(v81 & 3) - 2 >= 2 && (v81 & 3) != 0 )
          {
            v80 = (__int64 (__fastcall *)())(v81 - 1);
            LOBYTE(v79) = 3;
            sub_1416EBAD0(&v80);
          }
        }
        else if ( v30 )
        {
          if ( v30 == 258 )
          {
            nullsub_1(v32, v31);
            v84 = 79;
            v33 = (_OWORD *)sub_140001650(79, 1);
            if ( !v33 )
              sub_14196B2DB(1, 79);
            *(_OWORD *)((char *)v33 + 63) = *(__int128 *)((char *)&xmmword_141A5DB36 + 15);
            v33[3] = xmmword_141A5DB36;
            *(_QWORD *)&v8 = 0x4F465F5845444F43LL;
            v83 = (HWND)v33;
            qmemcpy(v33, "CODEX_FORCE_KILL_AUTHORIZATION_TIMEOUT: Windows ", 48);
            LODWORD(v25) = 0;
            LODWORD(v24) = 79;
            v34 = 10;
            goto LABEL_90;
          }
          v79 = (__int64 *)&v68;
          v80 = sub_1416EACD0;
          sub_1416DAFA0(&v76, &unk_141A5DB98, &v79);
        }
        else
        {
          ExitCode = 0;
          if ( GetExitCodeProcess(hProcess, &ExitCode) )
          {
            v34 = -1;
            LODWORD(v24) = ExitCode;
LABEL_90:
            CloseHandle(hObject);
            if ( v62 )
              *(double *)&v8 = sub_140001660(v74, 2LL * (_QWORD)v62, 2);
            if ( v57 )
              *(double *)&v8 = sub_140001660(v69, 2 * v57, 2);
            if ( v59 )
              *(double *)&v8 = sub_140001660(v64, 2 * v59, 2);
            goto LABEL_62;
          }
          v49 = GetLastError();
          if ( *off_1422402D8 != &off_141A5D998 )
            sub_14196BA70(&off_141A5D998);
          v81 = (v49 << 32) | 2;
          v79 = &v81;
          v80 = (__int64 (__fastcall *)())sub_1416EA080;
          sub_1416DAFA0(&v76, &unk_141A5DAB7, &v79);
          sub_140036080(&v81);
        }
        LODWORD(v24) = v76;
        v83 = (HWND)v77;
        v25 = HIDWORD(v76);
        v34 = 10;
        v84 = v78;
        goto LABEL_90;
      }
      nullsub_1(v28, v27);
      v84 = 74;
      v41 = (_OWORD *)sub_140001650(74, 1);
      if ( !v41 )
      {
        v74 = v26;
        sub_14196B2DB(1, 74);
      }
      *(_OWORD *)((char *)v41 + 58) = *(__int128 *)((char *)&xmmword_141A5DA9D + 10);
      v41[3] = xmmword_141A5DA9D;
      v41[2] = xmmword_141A5DA8D;
      *(_QWORD *)&v8 = 0x4F465F5845444F43LL;
      v83 = (HWND)v41;
      qmemcpy(v41, "CODEX_FORCE_KILL_AUTHORIZATION_F", 32);
      v24 = 74;
    }
    else
    {
      v69 = v25;
      v74 = v26;
      v36 = GetLastError();
      v37 = &off_141A5D998;
      if ( *off_1422402D8 != &off_141A5D998 )
        sub_14196BA70(&off_141A5D998);
      v38 = (v36 << 32) | 2;
      v81 = v38;
      if ( (_DWORD)v36 == 1223 )
      {
        nullsub_1(v37, v35);
        v39 = 108;
        v40 = (_OWORD *)sub_140001650(108, 1);
        if ( !v40 )
          sub_14196B2DB(1, 108);
        *(_OWORD *)((char *)v40 + 92) = *(__int128 *)((char *)&xmmword_141A5DA00 + 12);
        v40[5] = xmmword_141A5DA00;
        v40[4] = xmmword_141A5D9F0;
        v40[3] = xmmword_141A5D9E0;
        v40[2] = xmmword_141A5D9D0;
        *(_QWORD *)&v8 = 0x4F465F5845444F43LL;
        v83 = (HWND)v40;
        qmemcpy(v40, "CODEX_FORCE_KILL_AUTHORIZATION_C", 32);
        v24 = 108;
      }
      else
      {
        v79 = &v81;
        v80 = (__int64 (__fastcall *)())sub_1416EA080;
        sub_1416DAFA0(&v76, &unk_141A5DA1C, &v79);
        v24 = v76;
        v83 = (HWND)v77;
        v39 = v78;
        v38 = v81;
      }
      v84 = v39;
      if ( (unsigned int)(v38 & 3) - 2 >= 2 && (v38 & 3) != 0 )
      {
        v80 = (__int64 (__fastcall *)())(v38 - 1);
        LOBYTE(v79) = 3;
        sub_1416EBAD0(&v80);
      }
      v26 = v74;
      v25 = v69;
    }
    if ( v62 )
      *(double *)&v8 = sub_140001660(v26, 2LL * (_QWORD)v62, 2);
    if ( v57 )
      *(double *)&v8 = sub_140001660(v25, 2 * v57, 2);
    if ( v59 )
      *(double *)&v8 = sub_140001660(v64, 2 * v59, 2);
  }
  else
  {
    v62 = v82;
    v63 = v19;
    v76 = (unsigned __int64)&v62;
    v77 = (char *)sub_1416CE600;
    sub_1416DAFA0(&pExecInfo, &unk_141A5D94C, &v76);
    v24 = *(_QWORD *)&pExecInfo.cbSize;
    v83 = pExecInfo.hwnd;
    v84 = (__int64)pExecInfo.lpVerb;
  }
  v25 = HIDWORD(v24);
  v34 = 10;
LABEL_62:
  if ( v65 )
    *(double *)&v8 = sub_140001660(v82, v65, 1);
  if ( (_DWORD)v34 == -1 )
  {
    v73 = v24;
    sub_14098FA80((unsigned int)&pExecInfo, a2, a3, 3, 0);
    v42 = *(_QWORD *)&pExecInfo.cbSize;
    v43 = pExecInfo.hwnd;
    v44 = pExecInfo.lpVerb;
    v45 = pExecInfo.lpFile;
    if ( *(_QWORD *)&pExecInfo.cbSize == -1 )
    {
      v84 = (__int64)pExecInfo.lpVerb;
      v82 = pExecInfo.hwnd;
      if ( pExecInfo.lpFile )
      {
        v65 = pExecInfo.lpFile;
        *(_QWORD *)&pExecInfo.cbSize = &v65;
        pExecInfo.hwnd = (HWND)sub_1416EBAE0;
        pExecInfo.lpVerb = (LPCWSTR)&v73;
        pExecInfo.lpFile = (LPCWSTR)sub_1416EACD0;
        sub_1416DAFA0(&v53, &unk_141A5D582, &pExecInfo);
        *(_QWORD *)(a1 + 24) = v54;
        *(_QWORD *)&v8 = v53;
        *(_OWORD *)(a1 + 8) = v53;
        *(_QWORD *)a1 = 10;
        if ( v82 )
          *(double *)&v8 = sub_140001660(v84, 4LL * (_QWORD)v82, 4);
        sub_140906570(v55);
        goto LABEL_69;
      }
      v65 = lpFile;
      *(_QWORD *)&pExecInfo.cbSize = &v65;
      pExecInfo.hwnd = (HWND)sub_1416EBAE0;
      pExecInfo.lpVerb = (LPCWSTR)&v73;
      pExecInfo.lpFile = (LPCWSTR)sub_1416EACD0;
      sub_1416DAFA0(v51, &unk_141A5D54F, &pExecInfo);
      sub_1406C9730((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth_0, 22, (__int64)v51);
      *(_QWORD *)a1 = -1;
      if ( v82 )
        *(double *)&v8 = sub_140001660(v84, 4LL * (_QWORD)v82, 4);
    }
    else
    {
      v8 = *(_OWORD *)&pExecInfo.lpParameters;
      v46 = *(_OWORD *)&pExecInfo.nShow;
      v47 = *(_OWORD *)&pExecInfo.lpIDList;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&pExecInfo.hkeyClass;
      *(_OWORD *)(a1 + 64) = v47;
      *(_OWORD *)(a1 + 48) = v46;
      *(_OWORD *)(a1 + 32) = v8;
      *(_QWORD *)(a1 + 8) = v43;
      *(_QWORD *)(a1 + 16) = v44;
      *(_QWORD *)(a1 + 24) = v45;
      *(_QWORD *)a1 = v42;
    }
  }
  else
  {
    *(_QWORD *)a1 = v34;
    *(_DWORD *)(a1 + 8) = v24;
    *(_DWORD *)(a1 + 12) = v25;
    *(_QWORD *)(a1 + 16) = v83;
    *(_QWORD *)(a1 + 24) = v84;
  }
  sub_140906570(v55);
LABEL_69:
  if ( v70 )
    *(double *)&v8 = sub_140001660(v71, 4LL * (_QWORD)v70, 4);
LABEL_99:
  *(_QWORD *)&result = v8;
  return result;
}
