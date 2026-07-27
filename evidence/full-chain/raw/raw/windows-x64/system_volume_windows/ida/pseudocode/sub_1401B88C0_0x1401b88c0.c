// module: codexmate_lib/platform/system_volume_windows
// addr: 0x1401b88c0
// name: sub_1401B88C0
// win 1.2.1 | module src/platform/system_volume_windows.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int8 sub_1401B88C0()
{
  unsigned __int8 result; // al
  __int64 (__fastcall *v1)(LPVOID, _QWORD, _QWORD, __int64 **); // rax
  int v2; // esi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64 *, void *, __int64, _QWORD, __int64 *); // rax
  __int64 v5; // rdx
  int v6; // esi
  LPVOID ppv; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF

  CoInitializeEx(nullptr, 0);
  ppv = nullptr;
  result = CoCreateInstance(&rclsid, nullptr, 0x17u, &riid, &ppv) != 0;
  if ( !(result | (ppv == nullptr)) )
  {
    v1 = *(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 **))(*(_QWORD *)ppv + 32LL);
    v8 = nullptr;
    v2 = v1(ppv, 0, 0, &v8);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    result = v2 != 0;
    if ( v2 == 0 && v8 != nullptr )
    {
      v3 = *v8;
      v4 = *(__int64 (__fastcall **)(__int64 *, void *, __int64, _QWORD, __int64 *))(*v8 + 24);
      v9 = 0;
      v6 = v4(v8, &unk_14173BCC8, 23, 0, &v9);
      if ( v8 )
        (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      result = v6 != 0;
      LOBYTE(v5) = v6 != 0 || v9 == 0;
      if ( !(_BYTE)v5 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v3 + 56))(v9, v5, 0);
        if ( v9 )
          return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return result;
}