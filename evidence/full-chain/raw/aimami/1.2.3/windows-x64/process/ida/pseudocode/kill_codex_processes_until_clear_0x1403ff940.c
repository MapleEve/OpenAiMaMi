// module: codexmate_lib/platform/process
// addr: 0x1403ff940
// name: kill_codex_processes_until_clear
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::platform::process::kill_codex_processes_until_clear | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall kill_codex_processes_until_clear(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v4; // r14
  int v5; // edx
  unsigned __int64 v6; // rsi
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r12
  LPCWSTR lpFile; // rsi
  HWND v17; // rax
  int v18; // r8d
  __int64 (__fastcall *v19)(); // r14
  __int64 (__fastcall *v20)(); // r14
  __int64 v21; // r12
  __int64 p_pExecInfo; // r13
  _QWORD *v23; // r15
  __int64 v24; // rdx
  DWORD v25; // r14d
  HANDLE hProcess; // r15
  LPCWSTR v27; // rdx
  __int64 v28; // rcx
  DWORD v29; // eax
  __int64 v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rax
  _OWORD *v33; // rax
  const WCHAR *v34; // r12
  _OWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int64 v43; // rdx
  const WCHAR *v44; // rax
  const WCHAR *v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rcx
  _QWORD *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // rcx
  _QWORD *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int128 v57; // xmm0
  __int64 v58; // rcx
  __int128 v59; // xmm1
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdx
  _BYTE v63[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v64[24]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v65; // [rsp+58h] [rbp-28h] BYREF
  __int64 v66; // [rsp+68h] [rbp-18h]
  __int128 v67; // [rsp+70h] [rbp-10h] BYREF
  __int64 v68; // [rsp+80h] [rbp+0h]
  _QWORD v69[3]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v70[3]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v71[3]; // [rsp+B8h] [rbp+38h] BYREF
  _QWORD v72[3]; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD v73[3]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v74; // [rsp+100h] [rbp+80h] BYREF
  const WCHAR *v75; // [rsp+108h] [rbp+88h]
  _DWORD v76[2]; // [rsp+118h] [rbp+98h] BYREF
  const WCHAR *v77; // [rsp+120h] [rbp+A0h]
  const WCHAR *v78; // [rsp+128h] [rbp+A8h]
  __int64 v79; // [rsp+130h] [rbp+B0h] BYREF
  const WCHAR *v80; // [rsp+138h] [rbp+B8h]
  __int64 v81; // [rsp+148h] [rbp+C8h] BYREF
  const WCHAR *v82; // [rsp+150h] [rbp+D0h]
  unsigned __int64 i; // [rsp+160h] [rbp+E0h]
  HANDLE hObject; // [rsp+168h] [rbp+E8h]
  _BYTE v85[96]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v86; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v87; // [rsp+1E0h] [rbp+160h]
  __int128 v88; // [rsp+1F0h] [rbp+170h]
  __int128 v89; // [rsp+200h] [rbp+180h]
  __int128 v90; // [rsp+210h] [rbp+190h]
  __int64 v91; // [rsp+220h] [rbp+1A0h]
  const WCHAR *v92; // [rsp+230h] [rbp+1B0h]
  const WCHAR *v93; // [rsp+238h] [rbp+1B8h]
  __int64 v94; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v95; // [rsp+248h] [rbp+1C8h]
  DWORD v96; // [rsp+258h] [rbp+1D8h] BYREF
  unsigned int v97; // [rsp+25Ch] [rbp+1DCh]
  LPCWSTR v98; // [rsp+260h] [rbp+1E0h] BYREF
  HWND v99; // [rsp+268h] [rbp+1E8h]
  __int64 (__fastcall *v100)(); // [rsp+270h] [rbp+1F0h]
  _BYTE v101[24]; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v102[72]; // [rsp+298h] [rbp+218h]
  HWND v103; // [rsp+2E8h] [rbp+268h]
  LPCWSTR v104; // [rsp+2F0h] [rbp+270h]
  DWORD ExitCode; // [rsp+2F8h] [rbp+278h] BYREF
  DWORD v106; // [rsp+2FCh] [rbp+27Ch] BYREF
  __int64 v107; // [rsp+300h] [rbp+280h]
  __int64 *v108; // [rsp+308h] [rbp+288h] BYREF
  __int64 (__fastcall *v109)(); // [rsp+310h] [rbp+290h]
  __int64 v110; // [rsp+318h] [rbp+298h]
  LPCWSTR v111; // [rsp+320h] [rbp+2A0h]
  LPCWSTR lpVerb; // [rsp+328h] [rbp+2A8h]
  char v113; // [rsp+337h] [rbp+2B7h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 v115; // [rsp+3A8h] [rbp+328h] BYREF
  HWND v116; // [rsp+3B0h] [rbp+330h]
  int hwnd_high; // [rsp+3B8h] [rbp+338h]
  DWORD hwnd; // [rsp+3BCh] [rbp+33Ch]
  HWND v119; // [rsp+3C0h] [rbp+340h]
  LPCWSTR v120; // [rsp+3C8h] [rbp+348h]
  char v121; // [rsp+3D7h] [rbp+357h]
  __int64 v122; // [rsp+3D8h] [rbp+358h]

  v122 = -2;
  v107 = a1;
  v3 = sub_141471910(a1, a2, a3);
  v4 = 0;
  v6 = sub_141491390(v3, v5, 3, 0, (__int64)&off_141752750);
  v97 = v7;
  v94 = -1;
  for ( i = v6; ; v6 = i )
  {
    sub_1403FB4E0((__int64)&pExecInfo);
    result = *(_QWORD *)&pExecInfo.cbSize;
    *(_OWORD *)v101 = *(_OWORD *)&pExecInfo.hwnd;
    *(_QWORD *)&v101[16] = pExecInfo.lpFile;
    if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
    {
      v40 = *(_OWORD *)&pExecInfo.lpParameters;
      v41 = *(_OWORD *)&pExecInfo.nShow;
      v42 = *(_OWORD *)&pExecInfo.lpIDList;
      v43 = v107;
      *(_OWORD *)(v107 + 80) = *(_OWORD *)&pExecInfo.hkeyClass;
      *(_OWORD *)(v43 + 64) = v42;
      *(_OWORD *)(v43 + 48) = v41;
      *(_OWORD *)(v43 + 32) = v40;
      *(_QWORD *)(v43 + 24) = *(_QWORD *)&v101[16];
      *(_OWORD *)(v43 + 8) = *(_OWORD *)v101;
      *(_QWORD *)v43 = result;
      goto LABEL_140;
    }
    v90 = *(_OWORD *)v101;
    v11 = *(_QWORD *)&v101[16];
    v91 = *(_QWORD *)&v101[16];
    if ( !*(_QWORD *)&v101[16] )
      break;
    v12 = sub_141471910(pExecInfo.lpFile, v8, v9);
    if ( v12 == v6 )
    {
      if ( v13 >= v97 )
        goto LABEL_107;
    }
    else if ( v12 >= v6 )
    {
LABEL_107:
      v14 = *((_QWORD *)&v90 + 1);
      sub_140328F40((unsigned __int64 *)&v86, *((__int64 *)&v90 + 1), *((_QWORD *)&v90 + 1) + 32 * v11);
      v51 = *((_QWORD *)&v86 + 1);
      v52 = v87;
      sub_140440300((unsigned int)&pExecInfo, DWORD2(v86), v87, (unsigned int)&aCodeSwitchRoll[35], 3);
      *(_QWORD *)&v85[16] = pExecInfo.lpVerb;
      *(_OWORD *)v85 = *(_OWORD *)&pExecInfo.cbSize;
      if ( v94 == -1 )
      {
        *(_QWORD *)v101 = 0;
        *(_QWORD *)&v101[8] = 1;
        *(_QWORD *)&v101[16] = 0;
      }
      else
      {
        v98 = (LPCWSTR)&v94;
        *(_QWORD *)v101 = &v98;
        *(_QWORD *)&v101[8] = sub_1406B5450;
        sub_14149C0F0(&pExecInfo, &unk_14174D71A, v101);
        *(_OWORD *)v101 = *(_OWORD *)&pExecInfo.cbSize;
        *(_QWORD *)&v101[16] = pExecInfo.lpVerb;
      }
      *(_QWORD *)&pExecInfo.cbSize = v85;
      pExecInfo.hwnd = (HWND)sub_1400015F0;
      pExecInfo.lpVerb = (LPCWSTR)v101;
      pExecInfo.lpFile = (LPCWSTR)sub_1400015F0;
      sub_14149C0F0(&v65, &unk_14175279E, &pExecInfo);
      if ( *(_QWORD *)v101 )
        sub_140001660(*(_QWORD *)&v101[8], *(_QWORD *)v101, 1);
      if ( *(_QWORD *)v85 )
        sub_140001660(*(_QWORD *)&v85[8], *(_QWORD *)v85, 1);
      v53 = v107;
      *(_QWORD *)(v107 + 24) = v66;
      *(_OWORD *)(v53 + 8) = v65;
      *(_QWORD *)v53 = 10;
      if ( v52 )
      {
        v54 = (_QWORD *)(v51 + 8);
        do
        {
          v55 = *(v54 - 1);
          if ( v55 )
            sub_140001660(*v54, v55, 1);
          v54 += 3;
          --v52;
        }
        while ( v52 );
      }
      result = v86;
      if ( (_QWORD)v86 )
        result = sub_140001660(v51, 24 * v86, 8);
      goto LABEL_133;
    }
    v14 = *((_QWORD *)&v90 + 1);
    sub_1403F7AA0((__int64)&pExecInfo, *((__int64 *)&v90 + 1), v11);
    if ( pExecInfo.cbSize == -1 )
    {
      *(_QWORD *)v85 = -1;
    }
    else
    {
      *(_OWORD *)&v85[80] = *(_OWORD *)&pExecInfo.hkeyClass;
      *(_OWORD *)&v85[64] = *(_OWORD *)&pExecInfo.lpIDList;
      *(_OWORD *)&v85[48] = *(_OWORD *)&pExecInfo.nShow;
      *(_OWORD *)&v85[32] = *(_OWORD *)&pExecInfo.lpParameters;
      *(_OWORD *)&v85[16] = *(_OWORD *)&pExecInfo.lpVerb;
      *(_OWORD *)v85 = *(_OWORD *)&pExecInfo.cbSize;
    }
    v121 = 0;
    sub_141487490(0, 80000000);
    v121 = 0;
    sub_1403FCEE0((__int64)&pExecInfo, v14, v11);
    v15 = *(_QWORD *)&pExecInfo.cbSize;
    lpFile = pExecInfo.lpFile;
    if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
    {
      v89 = *(_OWORD *)&pExecInfo.hkeyClass;
      v88 = *(_OWORD *)&pExecInfo.lpIDList;
      v87 = *(_OWORD *)&pExecInfo.nShow;
      v86 = *(_OWORD *)&pExecInfo.lpParameters;
      v111 = pExecInfo.lpFile;
      lpVerb = pExecInfo.lpVerb;
      hwnd_high = HIDWORD(pExecInfo.hwnd);
      hwnd = (DWORD)pExecInfo.hwnd;
LABEL_14:
      if ( *(_QWORD *)v85 != -1 )
        sub_14034ED40(v85);
      goto LABEL_90;
    }
    if ( !pExecInfo.lpFile )
    {
      if ( pExecInfo.hwnd )
        sub_140001660(pExecInfo.lpVerb, 4 * (__int64)pExecInfo.hwnd, 4);
      goto LABEL_14;
    }
    v103 = pExecInfo.hwnd;
    v15 = *(_QWORD *)v85;
    v104 = pExecInfo.lpVerb;
    if ( *(_QWORD *)v85 == -1 )
    {
      v98 = pExecInfo.lpFile;
      *(_QWORD *)&pExecInfo.cbSize = &v98;
      pExecInfo.hwnd = (HWND)sub_1414AC520;
      sub_14149C0F0(&v101[8], &unk_14174D5A3, &pExecInfo);
      *(_QWORD *)v101 = 10;
      v15 = 10;
      if ( (v4 & 1) != 0 )
      {
LABEL_19:
        hwnd_high = *(_DWORD *)&v101[12];
        hwnd = *(_DWORD *)&v101[8];
        lpVerb = *(LPCWSTR *)&v101[16];
        v111 = *(LPCWSTR *)v102;
        v86 = *(_OWORD *)&v102[8];
        v87 = *(_OWORD *)&v102[24];
        v88 = *(_OWORD *)&v102[40];
        v89 = *(_OWORD *)&v102[56];
        goto LABEL_88;
      }
    }
    else
    {
      *(_QWORD *)v101 = *(_QWORD *)v85;
      *(_QWORD *)&v102[64] = *(_QWORD *)&v85[88];
      *(_OWORD *)&v102[48] = *(_OWORD *)&v85[72];
      *(_OWORD *)&v102[32] = *(_OWORD *)&v85[56];
      *(_OWORD *)&v102[16] = *(_OWORD *)&v85[40];
      *(_OWORD *)v102 = *(_OWORD *)&v85[24];
      *(_OWORD *)&v101[8] = *(_OWORD *)&v85[8];
      if ( (v4 & 1) != 0 )
        goto LABEL_19;
    }
    v98 = lpFile;
    *(_QWORD *)&pExecInfo.cbSize = &v98;
    pExecInfo.hwnd = (HWND)sub_1414AC520;
    sub_14149C0F0(v64, &unk_141751F7C, &pExecInfo);
    sub_1403565C0((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth, 35, (__int64)v64);
    sub_141483AC0(&pExecInfo, aSystemroot, 10);
    if ( *(_QWORD *)&pExecInfo.cbSize != -1 )
    {
      v17 = pExecInfo.hwnd;
      v18 = (int)pExecInfo.lpVerb;
      if ( pExecInfo.lpVerb )
      {
        v119 = *(HWND *)&pExecInfo.cbSize;
        goto LABEL_29;
      }
      if ( *(_QWORD *)&pExecInfo.cbSize )
        sub_140001660(pExecInfo.hwnd, *(_QWORD *)&pExecInfo.cbSize, 1);
    }
    sub_14149BB70(&pExecInfo, aCWindows, 10);
    v119 = *(HWND *)&pExecInfo.cbSize;
    v17 = pExecInfo.hwnd;
    v18 = (int)pExecInfo.lpVerb;
LABEL_29:
    v120 = (LPCWSTR)v17;
    sub_141473FA0((unsigned int)&pExecInfo, (_DWORD)v17, v18, (unsigned int)&unk_14174D562, 8);
    v116 = pExecInfo.hwnd;
    sub_141473FA0((unsigned int)&v98, pExecInfo.hwnd, pExecInfo.lpVerb, (unsigned int)&unk_141752241, 12);
    if ( *(_QWORD *)&pExecInfo.cbSize )
      sub_140001660(v116, *(_QWORD *)&pExecInfo.cbSize, 1);
    if ( v119 )
      sub_140001660(v120, v119, 1);
    v19 = v100;
    v119 = v99;
    if ( (unsigned __int8)sub_1414741E0(v99, v100) )
    {
      *(_QWORD *)&pExecInfo.cbSize = &unk_141752291;
      pExecInfo.hwnd = (HWND)&xmmword_141752296;
      LOWORD(pExecInfo.lpVerb) = 0;
      LODWORD(pExecInfo.lpFile) = 1;
      sub_14031F700(&v81, (unsigned __int8 **)&pExecInfo);
      *(_QWORD *)&pExecInfo.cbSize = v119;
      pExecInfo.hwnd = (HWND)((char *)v19 + (_QWORD)v119);
      LOWORD(pExecInfo.lpVerb) = 0;
      LODWORD(pExecInfo.lpFile) = 1;
      sub_14031FB40(&v79, &pExecInfo);
      sub_1403FBCA0((__int64)&v108, (__int64)v104, (unsigned __int64)lpFile);
      v20 = v109;
      v21 = v110;
      p_pExecInfo = (__int64)&pExecInfo;
      sub_140440300((unsigned int)&pExecInfo, (_DWORD)v109, v110, (unsigned int)&unk_14174C9B5, 1);
      v120 = *(LPCWSTR *)&pExecInfo.cbSize;
      v116 = pExecInfo.hwnd;
      *(_QWORD *)&pExecInfo.cbSize = pExecInfo.hwnd;
      pExecInfo.hwnd = (HWND)((char *)pExecInfo.hwnd + (unsigned __int64)pExecInfo.lpVerb);
      LOWORD(pExecInfo.lpVerb) = 0;
      LODWORD(pExecInfo.lpFile) = 1;
      sub_14031F700(&v74, (unsigned __int8 **)&pExecInfo);
      if ( v120 )
        sub_140001660(v116, v120, 1);
      if ( v21 )
      {
        v23 = (_QWORD *)((char *)v20 + 8);
        do
        {
          v24 = *(v23 - 1);
          if ( v24 )
            sub_140001660(*v23, v24, 1);
          v23 += 3;
          --v21;
        }
        while ( v21 );
      }
      if ( v108 )
        sub_140001660(v20, 24LL * (_QWORD)v108, 8);
      memset(&pExecInfo.lpDirectory, 0, 72);
      pExecInfo.hwnd = nullptr;
      *(_QWORD *)&pExecInfo.cbSize = 0x4000000070LL;
      v92 = v82;
      pExecInfo.lpVerb = v82;
      v93 = v80;
      pExecInfo.lpFile = v80;
      v116 = (HWND)v75;
      pExecInfo.lpParameters = v75;
      if ( ShellExecuteExW(&pExecInfo) )
      {
        hProcess = pExecInfo.hProcess;
        if ( pExecInfo.hProcess )
        {
          v29 = WaitForSingleObject(pExecInfo.hProcess, 0x7530u);
          v96 = v29;
          hObject = hProcess;
          if ( v29 == -1 )
          {
            LODWORD(v36) = GetLastError();
            v115 = (v36 << 32) | 2;
            v108 = &v115;
            v109 = sub_141490720;
            sub_14149C0F0(v70, &unk_14175243B, &v108);
            sub_140018650(&v115);
            v25 = v70[0];
            v120 = (LPCWSTR)v70[1];
            hProcess = (HANDLE)HIDWORD(v70[0]);
            v15 = 10;
            p_pExecInfo = v70[2];
          }
          else if ( v29 )
          {
            if ( v29 == 258 )
            {
              nullsub_1(v30);
              v31 = (_OWORD *)sub_140001650(79, 1);
              if ( !v31 )
                sub_1416C2D4B(1, 79);
              *(_OWORD *)((char *)v31 + 63) = *(__int128 *)((char *)&xmmword_14175241C + 15);
              v31[3] = xmmword_14175241C;
              v120 = (LPCWSTR)v31;
              qmemcpy(v31, "CODEX_FORCE_KILL_AUTHORIZATION_TIMEOUT: Windows ", 48);
              LODWORD(hProcess) = 0;
              v25 = 79;
              v15 = 10;
              p_pExecInfo = 79;
            }
            else
            {
              v108 = (__int64 *)&v96;
              v109 = sub_1414AB780;
              sub_14149C0F0(v69, &unk_14175247E, &v108);
              v25 = v69[0];
              v120 = (LPCWSTR)v69[1];
              hProcess = (HANDLE)HIDWORD(v69[0]);
              v15 = 10;
              p_pExecInfo = v69[2];
            }
          }
          else
          {
            ExitCode = 0;
            if ( GetExitCodeProcess(hProcess, &ExitCode) )
            {
              v15 = -1;
              v25 = ExitCode;
            }
            else
            {
              LODWORD(v37) = GetLastError();
              v115 = (v37 << 32) | 2;
              v108 = &v115;
              v109 = sub_141490720;
              sub_14149C0F0(v71, &unk_14175239D, &v108);
              sub_140018650(&v115);
              v25 = v71[0];
              v120 = (LPCWSTR)v71[1];
              hProcess = (HANDLE)HIDWORD(v71[0]);
              v15 = 10;
              p_pExecInfo = v71[2];
            }
          }
          CloseHandle(hObject);
          if ( v74 )
            sub_140001660(v116, 2 * v74, 2);
          if ( v79 )
            sub_140001660(v93, 2 * v79, 2);
          if ( v81 )
            sub_140001660(v92, 2 * v81, 2);
          v27 = v98;
          if ( v98 )
LABEL_79:
            sub_140001660(v119, v27, 1);
          if ( (_DWORD)v15 == -1 )
          {
            v106 = v25;
            sub_141487490(0, 150000000);
            sub_1403FCEE0((__int64)&pExecInfo, v14, v11);
            v15 = *(_QWORD *)&pExecInfo.cbSize;
            v25 = (DWORD)pExecInfo.hwnd;
            LODWORD(hProcess) = HIDWORD(pExecInfo.hwnd);
            v120 = pExecInfo.lpVerb;
            p_pExecInfo = (__int64)pExecInfo.lpFile;
            if ( *(_QWORD *)&pExecInfo.cbSize == -1 )
            {
              v119 = pExecInfo.hwnd;
              if ( pExecInfo.lpFile )
              {
                v98 = pExecInfo.lpFile;
                *(_QWORD *)&pExecInfo.cbSize = &v98;
                pExecInfo.hwnd = (HWND)sub_1414AC520;
                pExecInfo.lpVerb = (LPCWSTR)&v106;
                pExecInfo.lpFile = (LPCWSTR)sub_1414AB780;
                sub_14149C0F0(v76, &unk_141751FE2, &pExecInfo);
                hwnd = v76[0];
                hwnd_high = v76[1];
                lpVerb = v77;
                v111 = v78;
                if ( v119 )
                  sub_140001660(v120, 4LL * (_QWORD)v119, 4);
                sub_14034ED40(v101);
                if ( v103 )
                  sub_140001660(v104, 4LL * (_QWORD)v103, 4);
                v15 = 10;
LABEL_130:
                *(_QWORD *)v101 = v15;
                *(_DWORD *)&v101[8] = hwnd;
                *(_DWORD *)&v101[12] = hwnd_high;
                *(_QWORD *)&v101[16] = lpVerb;
                *(_QWORD *)v102 = v111;
                *(_OWORD *)&v102[8] = v86;
                *(_OWORD *)&v102[24] = v87;
                *(_OWORD *)&v102[40] = v88;
                *(_OWORD *)&v102[56] = v89;
                if ( *(_QWORD *)off_141EC8D80 >= 2u )
                {
                  *(_QWORD *)v85 = v101;
                  *(_QWORD *)&v85[8] = sub_140B036A0;
                  *(_QWORD *)&pExecInfo.cbSize = 0;
                  pExecInfo.hwnd = (HWND)aCodexmateLibPl_2;
                  pExecInfo.lpVerb = (LPCWSTR)32;
                  pExecInfo.lpFile = nullptr;
                  pExecInfo.lpParameters = (LPCWSTR)aSrcPlatformPro_2;
                  pExecInfo.lpDirectory = (LPCWSTR)23;
                  *(_QWORD *)&pExecInfo.nShow = 2;
                  pExecInfo.hInstApp = (HINSTANCE)aCodexmateLibPl_2;
                  pExecInfo.lpIDList = (void *)32;
                  pExecInfo.lpClass = (LPCWSTR)0x58800000001LL;
                  pExecInfo.hkeyClass = (HKEY)&unk_141752768;
                  *(_QWORD *)&pExecInfo.dwHotKey = v85;
                  sub_1412C36A0(&v113, &pExecInfo);
                }
                v56 = v107;
                *(_OWORD *)(v107 + 80) = *(_OWORD *)&v102[56];
                *(_OWORD *)(v56 + 64) = *(_OWORD *)&v102[40];
                v57 = *(_OWORD *)v101;
                result = *(_QWORD *)&v101[16];
                v58 = *(_QWORD *)v102;
                v59 = *(_OWORD *)&v102[8];
                *(_OWORD *)(v56 + 48) = *(_OWORD *)&v102[24];
                *(_OWORD *)(v56 + 32) = v59;
                *(_QWORD *)(v56 + 16) = result;
                *(_QWORD *)(v56 + 24) = v58;
                *(_OWORD *)v56 = v57;
                goto LABEL_133;
              }
              v98 = lpFile;
              *(_QWORD *)&pExecInfo.cbSize = &v98;
              pExecInfo.hwnd = (HWND)sub_1414AC520;
              pExecInfo.lpVerb = (LPCWSTR)&v106;
              pExecInfo.lpFile = (LPCWSTR)sub_1414AB780;
              sub_14149C0F0(v63, &unk_141751FAF, &pExecInfo);
              sub_1403565C0((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseAuth_0, 22, (__int64)v63);
              v15 = -1;
              if ( v119 )
                sub_140001660(v120, 4LL * (_QWORD)v119, 4);
              p_pExecInfo = (__int64)v111;
              v120 = lpVerb;
              LODWORD(hProcess) = hwnd_high;
              v25 = hwnd;
            }
            else
            {
              v89 = *(_OWORD *)&pExecInfo.hkeyClass;
              v88 = *(_OWORD *)&pExecInfo.lpIDList;
              v87 = *(_OWORD *)&pExecInfo.nShow;
              v86 = *(_OWORD *)&pExecInfo.lpParameters;
            }
          }
          goto LABEL_87;
        }
        nullsub_1(v28);
        v35 = (_OWORD *)sub_140001650(74, 1);
        if ( !v35 )
          sub_1416C2D4B(1, 74);
        v34 = (const WCHAR *)v35;
        *(_OWORD *)((char *)v35 + 58) = *(__int128 *)((char *)&xmmword_141752383 + 10);
        v35[3] = xmmword_141752383;
        v35[2] = xmmword_141752373;
        qmemcpy(v35, "CODEX_FORCE_KILL_AUTHORIZATION_F", 32);
        LODWORD(hProcess) = 0;
        v25 = 74;
        p_pExecInfo = 74;
      }
      else
      {
        LODWORD(v32) = GetLastError();
        v115 = (v32 << 32) | 2;
        if ( (_DWORD)v32 == 1223 )
        {
          nullsub_1((v32 << 32) | 2);
          v33 = (_OWORD *)sub_140001650(108, 1);
          if ( !v33 )
            sub_1416C2D4B(1, 108);
          v34 = (const WCHAR *)v33;
          *(_OWORD *)((char *)v33 + 92) = *(__int128 *)((char *)&xmmword_1417522E6 + 12);
          v33[5] = xmmword_1417522E6;
          v33[4] = xmmword_1417522D6;
          v33[3] = xmmword_1417522C6;
          v33[2] = xmmword_1417522B6;
          qmemcpy(v33, "CODEX_FORCE_KILL_AUTHORIZATION_C", 32);
          LODWORD(hProcess) = 0;
          v25 = 108;
          p_pExecInfo = 108;
        }
        else
        {
          v108 = &v115;
          v109 = sub_141490720;
          sub_14149C0F0(v72, &unk_141752302, &v108);
          v25 = v72[0];
          v34 = (const WCHAR *)v72[1];
          hProcess = (HANDLE)HIDWORD(v72[0]);
          p_pExecInfo = v72[2];
        }
        sub_140018650(&v115);
      }
      if ( v74 )
        sub_140001660(v116, 2 * v74, 2);
      if ( v79 )
        sub_140001660(v93, 2 * v79, 2);
      if ( v81 )
        sub_140001660(v92, 2 * v81, 2);
      v120 = v34;
      v27 = v98;
      v15 = 10;
      if ( v98 )
        goto LABEL_79;
    }
    else
    {
      v108 = (__int64 *)v119;
      v109 = v19;
      *(_QWORD *)&pExecInfo.cbSize = &v108;
      pExecInfo.hwnd = (HWND)sub_14148F3A0;
      sub_14149C0F0(v73, &unk_14175224D, &pExecInfo);
      v25 = v73[0];
      v120 = (LPCWSTR)v73[1];
      hProcess = (HANDLE)HIDWORD(v73[0]);
      p_pExecInfo = v73[2];
      v27 = v98;
      v15 = 10;
      if ( v98 )
        goto LABEL_79;
    }
LABEL_87:
    sub_14034ED40(v101);
    v111 = (LPCWSTR)p_pExecInfo;
    lpVerb = v120;
    hwnd_high = (int)hProcess;
    hwnd = v25;
LABEL_88:
    v4 = 1;
    if ( v103 )
      sub_140001660(v104, 4LL * (_QWORD)v103, 4);
LABEL_90:
    if ( v15 != -1 )
      goto LABEL_130;
    if ( v94 > 0 )
      sub_140001660(v95, v94, 1);
    v94 = -1;
    sub_141487490(0, 300000000);
    v38 = (_QWORD *)(v14 + 16);
    do
    {
      v39 = *(v38 - 1);
      if ( v39 )
        sub_140001660(*v38, v39, 1);
      v38 += 4;
      --v11;
    }
    while ( v11 );
    if ( (_QWORD)v90 )
      sub_140001660(v14, 32 * v90, 8);
  }
  sub_1403FE220(&pExecInfo);
  v44 = *(const WCHAR **)&pExecInfo.cbSize;
  v45 = (const WCHAR *)(pExecInfo.hwnd + 8 * (__int64)pExecInfo.lpVerb);
  *(_QWORD *)&pExecInfo.cbSize = pExecInfo.hwnd;
  pExecInfo.lpVerb = v44;
  pExecInfo.lpFile = v45;
  sub_1402CA150((unsigned __int64 *)v85, &pExecInfo);
  v46 = *(_QWORD *)&v85[16];
  if ( *(_QWORD *)&v85[16] )
  {
    v47 = *(_QWORD *)&v85[8];
    sub_140440300(
      (unsigned int)&pExecInfo,
      *(_DWORD *)&v85[8],
      *(_DWORD *)&v85[16],
      (unsigned int)&aCodeSwitchRoll[35],
      3);
    *(_QWORD *)&v101[16] = pExecInfo.lpVerb;
    *(_OWORD *)v101 = *(_OWORD *)&pExecInfo.cbSize;
    *(_QWORD *)&pExecInfo.cbSize = v101;
    pExecInfo.hwnd = (HWND)sub_1400015F0;
    sub_14149C0F0(&v67, &unk_141749F02, &pExecInfo);
    if ( *(_QWORD *)v101 )
      sub_140001660(*(_QWORD *)&v101[8], *(_QWORD *)v101, 1);
    v48 = v107;
    *(_QWORD *)(v107 + 24) = v68;
    *(_OWORD *)(v48 + 8) = v67;
    *(_QWORD *)v48 = 10;
    v49 = (_QWORD *)(v47 + 8);
    do
    {
      v50 = *(v49 - 1);
      if ( v50 )
        sub_140001660(*v49, v50, 1);
      v49 += 3;
      --v46;
    }
    while ( v46 );
  }
  else
  {
    *(_QWORD *)v107 = -1;
    v47 = *(_QWORD *)&v85[8];
  }
  result = *(_QWORD *)v85;
  if ( *(_QWORD *)v85 )
    result = sub_140001660(v47, 24LL * *(_QWORD *)v85, 8);
  v14 = *((_QWORD *)&v90 + 1);
LABEL_133:
  if ( v11 )
  {
    v60 = 32 * v11;
    v61 = 0;
    do
    {
      v62 = *(_QWORD *)(v14 + v61 + 8);
      if ( v62 )
        result = sub_140001660(*(_QWORD *)(v14 + v61 + 16), v62, 1);
      v61 += 32;
    }
    while ( v60 != v61 );
  }
  if ( (_QWORD)v90 )
    result = sub_140001660(v14, 32 * v90, 8);
LABEL_140:
  if ( v94 > 0 )
    return sub_140001660(v95, v94, 1);
  return result;
}