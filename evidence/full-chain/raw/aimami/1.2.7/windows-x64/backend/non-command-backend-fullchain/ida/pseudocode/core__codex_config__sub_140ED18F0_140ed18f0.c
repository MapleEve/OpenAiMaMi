// win 1.2.7 | module src/core/codex_config.rs | ea 0x140ed18f0 | name sub_140ED18F0
// win 1.2.7 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ED18F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 result; // rax
  _DWORD *v11; // rcx
  _DWORD v12[44]; // [rsp+28h] [rbp-190h] BYREF
  _DWORD v13[56]; // [rsp+D8h] [rbp-E0h] BYREF

  if ( a4 && (sub_140E91160(a4, a5), v9) )
  {
    sub_1411CE1B0(v12, a4, a5);
    result = sub_1411CD040((unsigned int)v13, a1, a2, a3, (__int64)v12);
    if ( v13[0] == -1 )
      return result;
    v11 = v13;
  }
  else
  {
    result = sub_1411CD470(v12, a1, a2, a3);
    if ( v12[0] == -1 )
      return result;
    v11 = v12;
  }
  return sub_140E96620(v11);
}
