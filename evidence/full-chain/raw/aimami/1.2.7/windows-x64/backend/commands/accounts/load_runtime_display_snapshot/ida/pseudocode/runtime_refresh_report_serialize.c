// fn runtime_refresh_report_serialize (0x140CD80E0, 552B)
// revision(+0,String) scope(+112,enum full/usage/account) accountKey(+24,Option<String>)
// startedAt(+96,u64) finishedAt(+104,u64) token(+48) metadata(+64) usage(+80)
// token/metadata/usage = {attempted:u32, succeeded:u32, failed:u32, status:4变体枚举}
__int64 __fastcall sub_140CD80E0(__int64 a1, _QWORD *a2)
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
  result = sub_1407A9D90(&v7, aRevision_1, 8, a1);                 // "revision"
  if ( !result )
  {
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407ACF00(&v7, aScope_3, 5, a1 + 112);            // "scope"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407A6570(&v7, aAccountkey_4, 10, a1 + 24);       // "accountKey"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407B3930(&v7, aStartedat_1, 9, a1 + 96);         // "startedAt"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407B3930(&v7, aFinishedat_0, 10, a1 + 104);      // "finishedAt"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407ADAC0(&v7, aToken_4, 5, a1 + 48);              // "token"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407ADAC0(&v7, aMetadata_1, 8, a1 + 64);           // "metadata"
    if ( result )
      return result;
    if ( (_BYTE)v7 )
      return sub_141967030();
    result = sub_1407ADAC0(&v7, &dword_141A9113F, 5, a1 + 80);      // "usage" (pool 0x141A9113F="usageaccount")
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
