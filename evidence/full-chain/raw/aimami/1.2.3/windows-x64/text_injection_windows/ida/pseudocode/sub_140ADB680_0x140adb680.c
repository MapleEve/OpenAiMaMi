// module: codexmate_lib/platform/text_injection_windows
// addr: 0x140adb680
// name: sub_140ADB680
// win 1.2.1 | module src/platform/text_injection_windows.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_140ADB680(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // r14d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r15
  HWND v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  WCHAR ExeName[260]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v27[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int16 v28; // [rsp+240h] [rbp+1C0h]
  __int64 v29; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v30; // [rsp+250h] [rbp+1D0h]
  __int64 v31; // [rsp+258h] [rbp+1D8h]
  __int64 v32; // [rsp+260h] [rbp+1E0h]
  __int64 v33; // [rsp+268h] [rbp+1E8h]
  __int64 v34; // [rsp+270h] [rbp+1F0h]
  __int64 v35; // [rsp+278h] [rbp+1F8h]
  char v36; // [rsp+280h] [rbp+200h]
  __int16 v37; // [rsp+288h] [rbp+208h]
  __int64 v38; // [rsp+290h] [rbp+210h]
  __int64 v39; // [rsp+298h] [rbp+218h]
  DWORD dwSize; // [rsp+2A0h] [rbp+220h] BYREF
  DWORD dwProcessId; // [rsp+2A4h] [rbp+224h] BYREF
  __int64 v42; // [rsp+2A8h] [rbp+228h]

  v42 = -2;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow
    || (dwProcessId = 0,
        LODWORD(ForegroundWindow) = GetWindowThreadProcessId(ForegroundWindow, &dwProcessId),
        !dwProcessId) )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_OWORD *)(a1 + 16) = 0;
    goto LABEL_13;
  }
  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( !v3 )
  {
    v13 = dwProcessId;
    v14 = ExeName;
LABEL_16:
    ForegroundWindow = (HWND)sub_1414A26D0(v13, v14, 10);
    v17 = v15;
    if ( v15 < 0 )
    {
      v18 = 0;
      goto LABEL_18;
    }
    if ( v15 )
    {
      v19 = ForegroundWindow;
      nullsub_1(v16);
      v18 = 1;
      v20 = sub_140001650(v17, 1);
      if ( !v20 )
LABEL_18:
        sub_1416C2D4B(v18, v17);
      v21 = v20;
      LODWORD(ForegroundWindow) = sub_141684120(v20, v19, v17);
    }
    else
    {
      v21 = 1;
    }
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = 0;
LABEL_13:
    *(_QWORD *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 40) = 0;
    return (int)ForegroundWindow;
  }
  v4 = v3;
  sub_1416848B0(ExeName, 0, 520);
  dwSize = 260;
  v5 = QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize);
  CloseHandle(v4);
  if ( !v5 || !dwSize )
  {
    v13 = dwProcessId;
    v14 = (WCHAR *)&v29;
    goto LABEL_16;
  }
  if ( dwSize >= 0x105 )
    sub_1416C32F0(0, dwSize, 260, &off_1417AF670);
  v27[0] = ExeName;
  v27[1] = &ExeName[dwSize];
  v28 = 0;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  sub_141688D30((unsigned int)&v29, 0, dwSize - (dwSize >> 1), 1, 1);
  sub_140993900(v27, &v29);
  v38 = v29;
  v6 = v30;
  v7 = v31;
  v29 = 0;
  v30 = v31;
  v39 = v6;
  v31 = v6;
  v32 = v30;
  v33 = 0;
  v34 = v30;
  v35 = 0x5C0000005CLL;
  v36 = 1;
  v37 = 1;
  v8 = sub_140AD0C80(&v29);
  v11 = v10;
  if ( !v8 )
  {
    v11 = v7;
    v8 = v39;
  }
  if ( v11 < 0 )
  {
    v12 = 0;
    goto LABEL_11;
  }
  if ( v11 )
  {
    v22 = v8;
    nullsub_1(v9);
    v12 = 1;
    v23 = sub_140001650(v11, 1);
    if ( !v23 )
LABEL_11:
      sub_1416C2D4B(v12, v11);
    v24 = v23;
    sub_141684120(v23, v22, v11);
  }
  else
  {
    v24 = 1;
  }
  *(_QWORD *)a1 = v38;
  LODWORD(ForegroundWindow) = v39;
  *(_QWORD *)(a1 + 8) = v39;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 32) = v24;
  *(_QWORD *)(a1 + 40) = v11;
  return (int)ForegroundWindow;
}