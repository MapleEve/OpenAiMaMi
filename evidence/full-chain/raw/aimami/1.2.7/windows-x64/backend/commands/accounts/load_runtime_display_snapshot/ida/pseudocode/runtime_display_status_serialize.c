// fn runtime_display_status_serialize (0x140CE2280, 562B) — status 结构 10 字段
// paths(+384) accountCount(+728) activeAccountKey(+600) lastScanAt(+720) activeAccount(+0)
// usageSource(+732) autoSwitch(+560) api(+624) apiConnectivity(+656) authRevision(+688, 条件)
__int64 __fastcall sub_140CE2280(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD *v7; // r14
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int16 v9; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 688);   // authRevision Option
  v4 = *a2;
  v5 = *(_QWORD *)(*a2 + 16LL);
  if ( *(_QWORD *)*a2 == v5 )
  {
    v7 = a2;
    sub_141939070(v4, v5, 1, 1, 1);
    a2 = v7;
    v5 = *(_QWORD *)(v4 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v4 + 8) + v5) = 123;
  *(_QWORD *)(v4 + 16) = v5 + 1;
  v9 = 256;
  v10 = a2;
  result = sub_1407AB080(&v9, aPaths_1, 5, a1 + 384);              // "paths"
  if ( !result )
  {
    if ( (_BYTE)v9 )
      return sub_141967030();
    result = sub_1407B3340(&v9, aAccountcount_1, 12, a1 + 728, v8); // "accountCount"
    if ( result )
      return result;
    if ( (_BYTE)v9 )
      return sub_141967030();
    result = sub_1407A6570(&v9, aActiveaccountk_0, 16, a1 + 600);  // "activeAccountKey"
    if ( result )
      return result;
    if ( (_BYTE)v9 )
      return sub_141967030();
    result = sub_1407B3930(&v9, aLastscanat_0, 10, a1 + 720);      // "lastScanAt"
    if ( !result )
    {
      result = sub_140CEACF0(&v9, a1);            // "activeAccount"
      if ( !result )
      {
        result = sub_140CEAF30(&v9, a1 + 732);    // "usageSource"
        if ( !result )
        {
          result = sub_140CEB3F0(&v9, a1 + 560);  // "autoSwitch"
          if ( !result )
          {
            result = sub_140CEB010(&v9, a1 + 624); // "api"
            if ( !result )
            {
              result = sub_140CEB330(&v9, a1 + 656); // "apiConnectivity"
              if ( !result && (v3 == -1 || (result = sub_140CEAD50(&v9, a1 + 688)) == 0) ) // "authRevision" 条件
              {
                result = 0;
                if ( (v9 & 1) == 0 )
                {
                  if ( HIBYTE(v9) )
                  {
                    sub_1401E6F40(*v10, "}falsetrue", 1);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
