// module: codexmate_lib/core/repository
// addr: 0x141485e40
// name: sub_141485E40
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141485E40(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  LPCWSTR v3; // rsi
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rax
  LPCWSTR v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  LPCWSTR lpPathName; // [rsp+30h] [rbp-40h]
  _QWORD v10[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+68h] [rbp-8h]

  sub_14148D770(&v11, a1, a2);
  v3 = v12;
  if ( v11 == -1 )
    return (__int64)v3;
  v10[0] = v11;
  v10[1] = v12;
  v10[2] = v13;
  LOBYTE(v2) = 1;
  sub_14148A880(&v8, v10, v2);
  v4 = v8;
  v3 = lpPathName;
  if ( v8 == -1 )
    return (__int64)v3;
  if ( !RemoveDirectoryW(lpPathName) )
  {
    LODWORD(v6) = GetLastError();
    result = (v6 << 32) | 2;
    if ( !v4 )
      return result;
    goto LABEL_7;
  }
  result = 0;
  if ( v4 )
  {
LABEL_7:
    v7 = v3;
    v3 = (LPCWSTR)result;
    sub_140001660(v7, 2 * v4, 2);
    return (__int64)v3;
  }
  return result;
}