// module: codexmate_lib/platform/system_volume_windows
// addr: 0x1401b8c50
// name: sub_1401B8C50
// win 1.2.1 | module src/platform/system_volume_windows.rs | attributed via panic-Location xref (win-native)
void sub_1401B8C50()
{
  HRESULT Instance; // eax
  __int64 (__fastcall *v1)(LPVOID, _QWORD, _QWORD, __int64 *); // rax
  int v2; // esi
  __int64 (__fastcall *v3)(__int64, void *, __int64, _QWORD, _QWORD *); // rax
  int v4; // esi
  __int64 (__fastcall *v5)(_QWORD, float *); // rax
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ebx
  bool v10; // r14
  int v11; // xmm7_4
  __int64 *v12; // rdi
  int v13; // r15d
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  _QWORD v20[57]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+1F0h] [rbp+170h]
  __int64 v22; // [rsp+1F8h] [rbp+178h]
  __int64 v23; // [rsp+408h] [rbp+388h] BYREF
  __int64 v24; // [rsp+410h] [rbp+390h]
  __int64 v25; // [rsp+418h] [rbp+398h]
  __int64 v26; // [rsp+428h] [rbp+3A8h]
  LPVOID ppv[2]; // [rsp+430h] [rbp+3B0h] BYREF
  int v28; // [rsp+440h] [rbp+3C0h]
  float v29; // [rsp+444h] [rbp+3C4h] BYREF
  __int64 v30; // [rsp+448h] [rbp+3C8h]

  v30 = -2;
  CoInitializeEx(nullptr, 0);
  ppv[0] = nullptr;
  Instance = CoCreateInstance(&rclsid, nullptr, 0x17u, &riid, ppv);
  if ( Instance != 0 || ppv[0] == nullptr )
    return;
  v1 = *(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv[0] + 32LL);
  v23 = 0;
  v2 = v1(ppv[0], 0, 0, &v23);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  if ( v2 != 0 || v23 == 0 )
    return;
  v3 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, _QWORD *))(*(_QWORD *)v23 + 24LL);
  v20[0] = 0;
  v4 = v3(v23, &unk_14173BCC8, 23, 0, v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v4 != 0 || v20[0] == 0 )
    return;
  v5 = *(__int64 (__fastcall **)(_QWORD, float *))(*(_QWORD *)v20[0] + 72LL);
  v29 = 0.0;
  v7 = v5(v20[0], &v29);
  v8 = v20[0];
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  v9 = 0;
  v10 = v7 == 0;
  if ( v7 )
    return;
  v11 = LODWORD(v29);
  if ( v29 < 0.0099999998 )
    return;
  LOBYTE(v8) = 1;
  if ( _InterlockedCompareExchange8(&byte_141EC9300, 1, 0) )
    sub_1416C15B0(&byte_141EC9300);
  v12 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v13 = sub_1416C2250(v8, v6);
    LOBYTE(v13) = v13 ^ 1;
    if ( byte_141EC9301 )
      goto LABEL_17;
LABEL_23:
    if ( !dword_141EC9304 )
    {
      v28 = v13;
      LOBYTE(v9) = v10;
      dword_141EC9304 = v9;
      dword_141EC9308 = v11;
      v29 = *(float *)&v11;
      sub_140714E60(v20);
      sub_141473FA0((unsigned int)&v23, v21, v22, (unsigned int)&unk_14173BC85, 24);
      sub_140016620(v20);
      v26 = v24;
      v15 = sub_1414740B0(v24, v25);
      if ( v15 )
      {
        LOBYTE(v20[0]) = 1;
        v20[0] = sub_14147B9A0(v20, v15, v16);
        if ( v20[0] )
          sub_140018650(v20);
      }
      ppv[0] = &v29;
      ppv[1] = sub_1414AADF0;
      sub_14149C0F0(v20, &unk_14173BC9D, ppv);
      ppv[0] = (LPVOID)sub_1406905C0(&v23, v20);
      if ( ppv[0] )
        sub_140018650(ppv);
      if ( v23 )
        sub_140001660(v26, v23, 1);
      LOBYTE(v13) = v28;
    }
    sub_1401B88C0();
    if ( !(_BYTE)v13 && 2 * *v12 && !(unsigned __int8)sub_1416C2250(v18, v17) )
      byte_141EC9301 = 1;
    v19 = byte_141EC9300;
    byte_141EC9300 = 0;
    if ( v19 == 2 )
      WakeByAddressSingle(&byte_141EC9300);
    return;
  }
  v13 = 0;
  if ( !byte_141EC9301 )
    goto LABEL_23;
LABEL_17:
  if ( !(_BYTE)v13 && 2 * *v12 && !(unsigned __int8)sub_1416C2250(v8, v6) )
    byte_141EC9301 = 1;
  v14 = byte_141EC9300;
  byte_141EC9300 = 0;
  if ( v14 == 2 )
  {
    WakeByAddressSingle(&byte_141EC9300);
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
      goto LABEL_21;
  }
  else if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
LABEL_21:
    v20[0] = aCodexmateLibPl_1;
    v20[1] = 46;
    v20[2] = aCodexmateLibPl_1;
    v20[3] = 46;
    v20[4] = &off_14173BD40;
    sub_140985BA0(aTypemamiWindow, 133, 2, v20);
  }
}