// fn runtime_account_display_serialize_item (0x140CE0910, 1199B) — AccountItem 384B 25 字段
// 共用×4 调用方: accounts Vec 序列化器 + activeAccount Option 序列化器 + sub_1407AB6E0
__int64 __fastcall sub_140CE0910(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD *v7; // r14
  __int16 v8; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v9; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 160);   // tokenStatus tag
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
  v8 = 256;
  v9 = a2;
  result = sub_1407A9D90(&v8, aAccountkey_4, 10, a1 + 208);       // "accountKey"
  if ( !result )
  {
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A9D90(&v8, aEmail_2, 5, a1 + 232);           // "email"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A9D90(&v8, aAlias_2, 5, a1 + 256);           // "alias"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A6570(&v8, aAccountname_1, 11, a1 + 280);    // "accountName"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A6570(&v8, aWorkspacename_1, 13, a1 + 304);  // "workspaceName"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A6570(&v8, aProfilename_1, 11, a1 + 328);    // "profileName"
    if ( result )
      return result;
    result = sub_140CEB590(&v8, a1 + 376);         // "plan" (enum free/plus/pro5x/pro20x/team/business/enterprise/edu/unknown)
    if ( result )
      return result;
    result = sub_140CEAD10(&v8, a1 + 373);         // "planSource" (jwt/remote/usage)
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A8F80(&v8, "planObservedAt", 14, a1);         // "planObservedAt"
    if ( result )
      return result;
    result = sub_140CEB570(&v8, a1 + 368);         // "authMode" (chatgpt/apikey)
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A85E0(&v8, aHasactivesubsc_1, 21, a1 + 371);  // "hasActiveSubscription" (Option<bool>)
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A8F80(&v8, aSubscriptionex_1, 21, a1 + 16);   // "subscriptionExpiresAt"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A85E0(&v8, aSubscriptionwi_1, 21, a1 + 372);  // "subscriptionWillRenew" (Option<bool>)
    if ( result )
      return result;
    result = sub_140CEB170(&v8, a1 + 374);         // "subscriptionStatus" (active/inactive/stale)
    if ( result )
      return result;
    result = sub_140CEAD90(&v8, a1 + 375);         // "subscriptionSource" (livePlan/jwt/remote)
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A8F80(&v8, "subscriptionObservedAt", 22, a1 + 32);  // "subscriptionObservedAt"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407B2B50(&v8, "isActive", 8, a1 + 369);          // "isActive"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407B3930(&v8, aCreatedat_2, 9, a1 + 360);        // "createdAt"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A8F80(&v8, aLastusedat_1, 10, a1 + 48);       // "lastUsedAt"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A8F80(&v8, aLastusageat_0, 11, a1 + 64);      // "lastUsageAt"
    if ( result )
      return result;
    result = sub_140CEAF30(&v8, a1 + 370);         // "usageSource" (local/api)
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A6B50(&v8, aPrimarywindow_0, 13, a1 + 80);    // "primaryWindow"
    if ( result )
      return result;
    if ( (_BYTE)v8 )
      return sub_141967030();
    result = sub_1407A6B50(&v8, aSecondarywindo_0, 15, a1 + 120);  // "secondaryWindow"
    if ( !result )
    {
      result = sub_140CEAE10(&v8, a1 + 352);       // "availableResetCredits"
      if ( !result && ((_DWORD)v3 == 2 || (result = sub_140CEAD70(&v8, a1 + 160)) == 0) )  // "tokenStatus" 条件(tag==2 缺省)
      {
        result = 0;
        if ( (v8 & 1) == 0 )
        {
          if ( HIBYTE(v8) )
          {
            sub_1401E6F40(*v9, "}falsetrue", 1);
            return 0;
          }
        }
      }
    }
  }
  return result;
}
