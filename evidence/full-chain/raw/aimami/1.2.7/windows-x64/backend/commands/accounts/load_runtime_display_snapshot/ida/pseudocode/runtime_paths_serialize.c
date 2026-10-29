// fn runtime_paths_serialize (0x140CE19A0, 556B) — paths 结构（7 String + 3 bool）
// codexHome(+0) accountsPath(+24) authPath(+48) registryPath(+72) sessionsPath(+96)
// launchAgentPath(+120) autoSwitchLogPath(+144) authExists(+168) registryExists(+169) sessionsExists(+170)
__int64 __fastcall sub_140CE19A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int16 v7; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-20h]

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( *(_QWORD *)*a2 == v4 )
  {
    v6 = a2;
    sub_141939070(v3, v4, 1, 1, 1);
    a2 = v6;
    v4 = *(_QWORD *)(v3 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123;
  *(_QWORD *)(v3 + 16) = v4 + 1;
  v7 = 256;
  v8 = a2;
  result = sub_1407A9D90(&v7, "codexHome", 9, a1);
  if ( !result )
  {
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "accountsPath", 12, a1 + 24);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "authPath", 8, a1 + 48);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "registryPath", 12, a1 + 72);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "sessionsPath", 12, a1 + 96);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "launchAgentPath", 15, a1 + 120);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A9D90(&v7, "autoSwitchLogPath", 17, a1 + 144);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407B2B50(&v7, "authExists", 10, a1 + 168);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407B2B50(&v7, "registryExists", 14, a1 + 169);
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407B2B50(&v7, "sessionsExists", 14, a1 + 170);
    if ( !result )
    {
      result = 0;
      if ( (v7 & 1) == 0 )
      {
        if ( HIBYTE(v7) )
        {
          sub_1401E6F40(*v8, "}falsetrue", 1);
          return 0;
        }
      }
    }
  }
  return result;
}
