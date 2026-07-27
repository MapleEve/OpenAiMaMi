// module: codexmate_lib/core/oauth_login
// addr: 0x141464f30
// name: sub_141464F30
// win 1.2.1 | module src/core/oauth_login.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141464F30(
        _QWORD *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // edx
  int v13; // ecx
  unsigned __int64 v14; // r14
  __int64 v15; // r12

  v12 = a6;
  v13 = a5;
  v14 = a1[2];
  if ( v14 > a2 )
  {
    if ( *a1 == v14 )
    {
      sub_14169C860(a1, a1[2], 1);
      v13 = a5;
      v12 = a6;
    }
    *(_BYTE *)(a1[1] + v14) = 38;
    a1[2] = v14 + 1;
  }
  sub_141465010(v13, v12, (_DWORD)a1, a3, a4);
  v15 = a1[2];
  if ( *a1 == v15 )
    sub_14169C860(a1, a1[2], 1);
  *(_BYTE *)(a1[1] + v15) = 61;
  a1[2] = v15 + 1;
  return sub_141465010(a7, a8, (_DWORD)a1, a3, a4);
}