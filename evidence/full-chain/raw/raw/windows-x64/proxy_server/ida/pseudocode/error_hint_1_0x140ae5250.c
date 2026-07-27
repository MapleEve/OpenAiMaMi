// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140ae5250
// name: error_hint_1
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::models::error_hint | 跨平台字符串签名匹配(名↔函数一致)
void *__fastcall error_hint_1(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  v8 = -2;
  sub_14149A6B0(&v5, a1, a2);
  if ( (unsigned __int8)sub_140B12070(aErrorSendingRe, 21, v6, v7) )
  {
    v2 = &unk_1417B0579;
    v3 = v5;
    if ( !v5 )
      return v2;
    goto LABEL_36;
  }
  v2 = &unk_1417B0515;
  if ( !(unsigned __int8)sub_140B12070(aNoAccessToMode, 18, v6, v7)
    && !(unsigned __int8)sub_140B12070(aDoesNotHaveAcc, 20, v6, v7) )
  {
    v2 = &unk_1417B04AF;
    if ( !(unsigned __int8)sub_140B12070(aImageGeneratio_1, 16, v6, v7)
      && !(unsigned __int8)sub_140B12070(aImageGeneratio_0, 16, v6, v7) )
    {
      v2 = &unk_1417B0459;
      if ( !(unsigned __int8)sub_140B12070(aInvalidApiKey_0, 15, v6, v7)
        && !(unsigned __int8)sub_140B12070(aInvalidApiKey_1, 15, v6, v7)
        && !(unsigned __int8)sub_140B12070(aIncorrectApiKe, 17, v6, v7) )
      {
        v2 = &unk_1417B040B;
        if ( !(unsigned __int8)sub_140B12070(aModelNotFound, 15, v6, v7)
          && !(unsigned __int8)sub_140B12070(aModelNotFound_0, 15, v6, v7)
          && !(unsigned __int8)sub_140B12070(aDoesNotExist, 14, v6, v7) )
        {
          v2 = &unk_1417B03C3;
          if ( !(unsigned __int8)sub_140B12070(aInsufficientQu, 18, v6, v7)
            && !(unsigned __int8)sub_140B12070(aBilling, 7, v6, v7)
            && !(unsigned __int8)sub_140B12070(aBalance_0, 7, v6, v7)
            && (!(unsigned __int8)sub_140B12070(aExceeded, 8, v6, v7)
             || !(unsigned __int8)sub_140B12070(aQuota_1, 5, v6, v7)) )
          {
            v2 = &unk_1417B036C;
            if ( !(unsigned __int8)sub_140B12070(aContextLength, 14, v6, v7)
              && !(unsigned __int8)sub_140B12070(aTooManyTokens, 15, v6, v7)
              && !(unsigned __int8)sub_140B12070(aMaximumContext, 15, v6, v7) )
            {
              if ( (unsigned __int8)sub_140B12070(aConnectionRefu, 18, v6, v7) )
              {
                v2 = &unk_1417B0305;
                v3 = v5;
                if ( !v5 )
                  return v2;
                goto LABEL_36;
              }
              v2 = &unk_1417B02A8;
              if ( !(unsigned __int8)sub_140B12070(aDns_0, 3, v6, v7)
                && !(unsigned __int8)sub_140B12070(aResolve_1, 7, v6, v7) )
              {
                if ( (unsigned __int8)sub_140B12070(aTimeout_4, 7, v6, v7) )
                {
                  v2 = &unk_1417B0251;
                  v3 = v5;
                  if ( !v5 )
                    return v2;
                  goto LABEL_36;
                }
                v2 = &unk_1417B01EC;
                if ( !(unsigned __int8)sub_140B12070(aCertificate_0, 11, v6, v7)
                  && !(unsigned __int8)sub_140B12070(aTls, 3, v6, v7)
                  && !(unsigned __int8)sub_140B12070(aSsl, 3, v6, v7) )
                {
                  if ( (unsigned __int8)sub_140B12070(aConnectionRese_0, 16, v6, v7) )
                  {
                    v2 = &unk_1417B019D;
                  }
                  else if ( !(unsigned __int8)sub_140B12070(aImageUrl_2, 9, v6, v7)
                         || (v2 = &unk_1417B0158, !(unsigned __int8)sub_140B12070(aUnknownchatgpt, 7, v6, v7))
                         && !(unsigned __int8)sub_140B12070(aUnsupported, 11, v6, v7)
                         && !(unsigned __int8)sub_140B12070(aExpected_0, 8, v6, v7) )
                  {
                    if ( !(unsigned __int8)sub_140B12070(aStream_1, 6, v6, v7)
                      || (v2 = &unk_1417B0104, !(unsigned __int8)sub_140B12070(aError_41, 5, v6, v7))
                      && !(unsigned __int8)sub_140B12070(aDisconnect, 10, v6, v7)
                      && !(unsigned __int8)sub_140B12070(aClosed_1, 6, v6, v7) )
                    {
                      if ( (unsigned __int8)sub_140B12070(a403_0, 3, v6, v7) )
                      {
                        v2 = &unk_1417B00C0;
                        if ( !(unsigned __int8)sub_140B12070(aPermission, 10, v6, v7)
                          && !(unsigned __int8)sub_140B12070(aNotAllowed, 11, v6, v7) )
                        {
                          if ( (unsigned __int8)sub_140B12070(aIp, 2, v6, v7)
                            || (unsigned __int8)sub_140B12070(aRegion, 6, v6, v7)
                            || (unsigned __int8)sub_140B12070(aCountry, 7, v6, v7) )
                          {
                            v2 = &unk_1417B007A;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                          }
                          else
                          {
                            v2 = &unk_1417B001A;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                          }
                          goto LABEL_36;
                        }
                      }
                      else
                      {
                        if ( (unsigned __int8)sub_140B12070(a401_1, 3, v6, v7) )
                        {
                          v2 = &unk_1417AFFA8;
                          v3 = v5;
                          if ( !v5 )
                            return v2;
                          goto LABEL_36;
                        }
                        if ( (unsigned __int8)sub_140B12070(a404_0, 3, v6, v7) )
                        {
                          v2 = &unk_1417AFF4E;
                          v3 = v5;
                          if ( !v5 )
                            return v2;
                          goto LABEL_36;
                        }
                        v2 = &unk_1417AFF0C;
                        if ( !(unsigned __int8)sub_140B12070(a429_0, 3, v6, v7)
                          && !(unsigned __int8)sub_140B12070(aRateLimit_0, 10, v6, v7)
                          && !(unsigned __int8)sub_140B12070(aRateLimit_1, 10, v6, v7) )
                        {
                          if ( (unsigned __int8)sub_140B12070(a500_0, 3, v6, v7) )
                          {
                            v2 = &unk_1417AFEBB;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          if ( (unsigned __int8)sub_140B12070(a502_0, 3, v6, v7) )
                          {
                            v2 = &unk_1417AFE79;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          if ( (unsigned __int8)sub_140B12070(a503_0, 3, v6, v7) )
                          {
                            v2 = &unk_1417AFE09;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          v2 = &unk_1417AFDB5;
                          if ( !(unsigned __int8)sub_140B12070(aNetwork_2, 7, v6, v7)
                            && !(unsigned __int8)sub_140B12070("unreachable", 11, v6, v7) )
                          {
                            v3 = v5;
                            v2 = nullptr;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v3 = v5;
  if ( v5 )
LABEL_36:
    sub_140001660(v6, v3, 1);
  return v2;
}