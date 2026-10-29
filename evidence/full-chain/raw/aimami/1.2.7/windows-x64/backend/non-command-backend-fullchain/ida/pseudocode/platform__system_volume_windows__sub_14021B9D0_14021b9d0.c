// win 1.2.7 | module src/platform/system_volume_windows.rs | ea 0x14021b9d0 | name sub_14021B9D0
// win 1.2.7 | module src/platform/system_volume_windows.rs | attributed via panic-Location xref (win-native)
void sub_14021B9D0()
{
  HRESULT v0; // eax
  __int64 (__fastcall *v1)(LPVOID, _QWORD, _QWORD, __int64 *); // rax
  int v2; // esi
  __int64 (__fastcall *v3)(__int64, void *, __int64, _QWORD, const char **); // rax
  int v4; // esi
  __int64 (__fastcall *v5)(const char *, float *); // rax
  int v6; // edi
  const char *v7; // rcx
  int v8; // ebx
  bool v9; // r14
  int v10; // xmm7_4
  __int64 *v11; // rdi
  int v12; // r15d
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  const char *v20; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v21[56]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+1F0h] [rbp+170h]
  __int64 v23; // [rsp+1F8h] [rbp+178h]
  __int64 v24; // [rsp+408h] [rbp+388h] BYREF
  __int64 v25; // [rsp+410h] [rbp+390h]
  __int64 v26; // [rsp+418h] [rbp+398h]
  __int64 v27; // [rsp+428h] [rbp+3A8h]
  LPVOID ppv; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+438h] [rbp+3B8h] BYREF
  int v30; // [rsp+440h] [rbp+3C0h]
  float v31; // [rsp+444h] [rbp+3C4h] BYREF
  __int64 v32; // [rsp+448h] [rbp+3C8h]

  v32 = -2;
  CoInitializeEx(nullptr, 0);
  ppv = nullptr;
  v0 = CoCreateInstance(&rclsid, nullptr, 0x17u, &riid, &ppv);
  if ( v0 != 0 || ppv == nullptr )
    return;
  v1 = *(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL);
  v24 = 0;
  v2 = v1(ppv, 0, 0, &v24);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v2 != 0 || v24 == 0 )
    return;
  v3 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, const char **))(*(_QWORD *)v24 + 24LL);
  v20 = nullptr;
  v4 = v3(v24, &unk_1419DC7F8, 23, 0, &v20);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v4 != 0 || v20 == nullptr )
    return;
  v5 = *(__int64 (__fastcall **)(const char *, float *))(*(_QWORD *)v20 + 72LL);
  v31 = 0.0;
  v6 = v5(v20, &v31);
  v7 = v20;
  if ( v20 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v20 + 16LL))(v20);
  v8 = 0;
  v9 = v6 == 0;
  if ( v6 )
    return;
  v10 = LODWORD(v31);
  if ( v31 < 0.0099999998 )
    return;
  LOBYTE(v7) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E7490, 1, 0) )
    sub_141937480(&byte_1421E7490);
  v11 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v12 = sub_141938160(v7);
    LOBYTE(v12) = v12 ^ 1;
    if ( byte_1421E7491 )
      goto LABEL_17;
LABEL_23:
    if ( !dword_1421E7494 )
    {
      v30 = v12;
      LOBYTE(v8) = v9;
      dword_1421E7494 = v8;
      dword_1421E7498 = v10;
      v31 = *(float *)&v10;
      sub_1401B6ED0((__int64)&v24);
      sub_1401B9830((__int64)&v20, (__int64)&v24);
      sub_1416828D0((unsigned int)&v24, v22, v23, (unsigned int)&unk_1419DC7B8, 24);
      sub_140034990(&v20);
      v27 = v25;
      v14 = sub_141682A00(v25, v26);
      if ( v14 )
      {
        LOBYTE(v20) = 1;
        v16 = sub_14168A790(&v20, v14, v15);
        if ( v16 )
        {
          if ( (unsigned int)(v16 & 3) - 2 >= 2 && (v16 & 3) != 0 )
          {
            v21[0] = v16 - 1;
            LOBYTE(v20) = 3;
            sub_1416BCB00(v21);
          }
        }
      }
      ppv = &v31;
      v29 = sub_1416BB1A0;
      sub_1416ABFD0(&v20, &unk_1419DC7D0, &ppv);
      v17 = sub_140BAE2B0(&v24, &v20);
      if ( v17 && (unsigned int)(v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
      {
        v29 = (__int64 (__fastcall *)())(v17 - 1);
        LOBYTE(ppv) = 3;
        sub_1416BCB00(&v29);
      }
      if ( v24 )
        sub_140001660(v27, v24, 1);
      LOBYTE(v12) = v30;
    }
    sub_14021B600();
    if ( !(_BYTE)v12 && 2 * *v11 && !(unsigned __int8)sub_141938160(v18) )
      byte_1421E7491 = 1;
    v19 = byte_1421E7490;
    byte_1421E7490 = 0;
    if ( v19 == 2 )
      WakeByAddressSingle(&byte_1421E7490);
    return;
  }
  v12 = 0;
  if ( !byte_1421E7491 )
    goto LABEL_23;
LABEL_17:
  if ( !(_BYTE)v12 && 2 * *v11 && !(unsigned __int8)sub_141938160(v7) )
    byte_1421E7491 = 1;
  v13 = byte_1421E7490;
  byte_1421E7490 = 0;
  if ( v13 == 2 )
  {
    WakeByAddressSingle(&byte_1421E7490);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      goto LABEL_21;
  }
  else if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
LABEL_21:
    v20 = aCodexmateLibPl_1;
    v21[0] = 46;
    v21[1] = aCodexmateLibPl_1;
    v21[2] = 46;
    v21[3] = &off_1419DC870;
    sub_140BAD520(aTypemamiWindow, 133, 2, &v20);
  }
}
