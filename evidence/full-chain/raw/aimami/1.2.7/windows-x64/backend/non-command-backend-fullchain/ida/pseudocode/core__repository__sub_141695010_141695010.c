// win 1.2.7 | module src/core/repository.rs | ea 0x141695010 | name sub_141695010
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
LPCWSTR __fastcall sub_141695010(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  LPCWSTR v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 LastError; // rsi
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  LPCWSTR lpPathName; // [rsp+30h] [rbp-50h]
  _QWORD v10[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  const WCHAR *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  const WCHAR *v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]
  __int64 v16; // [rsp+80h] [rbp+0h]

  v16 = -2;
  sub_14169D960(&v11, a1, a2);
  v3 = v12;
  if ( v11 == -1 )
    return v3;
  v10[0] = v11;
  v10[1] = v12;
  v10[2] = v13;
  LOBYTE(v2) = 1;
  sub_14169A440(&v8, v10, v2);
  v4 = v8;
  v3 = lpPathName;
  if ( v8 == -1 )
    return v3;
  if ( RemoveDirectoryW(lpPathName) )
  {
    v5 = 0;
    if ( !v4 )
      return (LPCWSTR)v5;
    goto LABEL_10;
  }
  v15 = v4;
  v14 = v3;
  LastError = GetLastError();
  if ( *off_1421E7288 != &off_141CEC218 )
    sub_1419394C0(&off_141CEC218);
  v5 = (LastError << 32) | 2;
  v3 = v14;
  v4 = v15;
  if ( v15 )
LABEL_10:
    sub_140001660(v3, 2 * v4, 2);
  return (LPCWSTR)v5;
}
