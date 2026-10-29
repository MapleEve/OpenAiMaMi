// win 1.2.7 latest-exe | module src/platform/text_injection_windows.rs | ea 0x140d4cbd0 | successor of pre-update 0x1410061d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.885, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
int __fastcall sub_140D4CBD0(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  WCHAR *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  HWND v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  WCHAR ExeName[260]; // [rsp+28h] [rbp-58h] BYREF
  WCHAR *v26; // [rsp+230h] [rbp+1B0h] BYREF
  WCHAR *v27; // [rsp+238h] [rbp+1B8h]
  __int64 v28; // [rsp+240h] [rbp+1C0h]
  WCHAR *v29; // [rsp+248h] [rbp+1C8h]
  __int64 v30; // [rsp+250h] [rbp+1D0h]
  WCHAR *v31; // [rsp+258h] [rbp+1D8h]
  __int64 v32; // [rsp+260h] [rbp+1E0h]
  char v33; // [rsp+268h] [rbp+1E8h]
  __int16 v34; // [rsp+270h] [rbp+1F0h]
  __int128 v35; // [rsp+278h] [rbp+1F8h] BYREF
  WCHAR *v36; // [rsp+288h] [rbp+208h]
  __int64 v37; // [rsp+290h] [rbp+210h]
  DWORD dwSize; // [rsp+298h] [rbp+218h] BYREF
  DWORD dwProcessId; // [rsp+29Ch] [rbp+21Ch] BYREF
  __int64 v40; // [rsp+2A0h] [rbp+220h]

  v40 = -2;
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
    v12 = dwProcessId;
    v13 = ExeName;
LABEL_16:
    ForegroundWindow = (HWND)sub_1416E14A0(v12, v13, 10);
    v16 = v14;
    if ( v14 < 0 )
    {
      v17 = 0;
      goto LABEL_18;
    }
    if ( v14 )
    {
      v18 = ForegroundWindow;
      nullsub_1(v15, v14);
      v17 = 1;
      v19 = sub_140001650(v16, 1);
      if ( !v19 )
LABEL_18:
        sub_14196B2DB(v17, v16);
      v20 = v19;
      LODWORD(ForegroundWindow) = sub_1419234B0(v19, v18, v16);
    }
    else
    {
      v20 = 1;
    }
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = 0;
LABEL_13:
    *(_QWORD *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 40) = 0;
    return (int)ForegroundWindow;
  }
  v4 = v3;
  sub_141923C40(ExeName, 0, 520);
  dwSize = 260;
  v5 = QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize);
  CloseHandle(v4);
  if ( !v5 || !dwSize )
  {
    v12 = dwProcessId;
    v13 = (WCHAR *)&v26;
    goto LABEL_16;
  }
  if ( dwSize >= 0x105 )
    sub_14196B880(0, dwSize, 260, &off_141A97518);
  v26 = ExeName;
  v27 = &ExeName[dwSize];
  LOWORD(v28) = 0;
  sub_1401D1930(&v35, &v26);
  v6 = (__int64)v36;
  v26 = nullptr;
  v27 = v36;
  v37 = *((_QWORD *)&v35 + 1);
  v28 = *((_QWORD *)&v35 + 1);
  v29 = v36;
  v30 = 0;
  v31 = v36;
  v32 = 0x5C0000005CLL;
  v33 = 1;
  v34 = 1;
  v7 = sub_140D29B50(&v26);
  v10 = v8;
  if ( !v7 )
  {
    v10 = v6;
    v7 = v37;
  }
  if ( v10 < 0 )
  {
    v11 = 0;
    goto LABEL_11;
  }
  if ( v10 )
  {
    v21 = v7;
    nullsub_1(v9, v8);
    v11 = 1;
    v22 = sub_140001650(v10, 1);
    if ( !v22 )
LABEL_11:
      sub_14196B2DB(v11, v10);
    v23 = v22;
    sub_1419234B0(v22, v21, v10);
  }
  else
  {
    v23 = 1;
  }
  LODWORD(ForegroundWindow) = (_DWORD)v36;
  *(_QWORD *)(a1 + 16) = v36;
  *(_OWORD *)a1 = v35;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 32) = v23;
  *(_QWORD *)(a1 + 40) = v10;
  return (int)ForegroundWindow;
}
