// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140230260 | name sub_140230260
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int sub_140230260()
{
  char *v0; // rdx
  int result; // eax
  __int64 v2; // rax
  char *v3; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+28h] [rbp-38h] BYREF
  char *v5; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+38h] [rbp-28h]
  _QWORD v7[2]; // [rsp+3Ch] [rbp-24h]
  HANDLE hObject; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]

  v9 = -2;
  v4 = 0;
  v5 = nullptr;
  v6 = 7;
  v7[0] = 0x100000000LL;
  *(_QWORD *)((char *)v7 + 5) = 0;
  if ( (sub_141690E40(&v4) & 1) != 0 )
  {
    result = (unsigned __int8)v0 & 3;
    if ( (unsigned int)(result - 2) >= 2 && ((unsigned __int8)v0 & 3) != 0 )
    {
      v5 = v0 - 1;
      LOBYTE(v4) = 3;
      return sub_1416BCB00(&v5);
    }
  }
  else
  {
    hObject = v0;
    v3 = v0;
    v2 = sub_141683220(&v3);
    if ( v2 && (unsigned int)(v2 & 3) - 2 >= 2 && (v2 & 3) != 0 )
    {
      v5 = (char *)(v2 - 1);
      LOBYTE(v4) = 3;
      sub_1416BCB00(&v5);
    }
    return CloseHandle(hObject);
  }
  return result;
}
