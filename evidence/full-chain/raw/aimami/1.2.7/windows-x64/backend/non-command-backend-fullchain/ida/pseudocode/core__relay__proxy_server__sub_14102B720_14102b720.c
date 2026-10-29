// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x14102b720 | name sub_14102B720
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_14102B720(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  unsigned __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  v8 = -2;
  sub_1416AA4F0(&v5, a1, a2);
  if ( (unsigned __int8)sub_141059410(aErrorSendingRe, 21, v6, v7) )
  {
    v2 = &unk_141A70EB0;
    v3 = v5;
    if ( !v5 )
      return v2;
    goto LABEL_36;
  }
  v2 = &unk_141A70E4C;
  if ( !(unsigned __int8)sub_141059410(aNoAccessToMode, 18, v6, v7)
    && !(unsigned __int8)sub_141059410(aDoesNotHaveAcc, 20, v6, v7) )
  {
    v2 = &unk_141A70DE6;
    if ( !(unsigned __int8)sub_141059410(aImageGeneratio_1, 16, v6, v7)
      && !(unsigned __int8)sub_141059410(
                             "image_generationinternal error: entered unreachable code: catalog removal loop always returns",
                             16,
                             v6,
                             v7) )
    {
      v2 = &unk_141A70D90;
      if ( !(unsigned __int8)sub_141059410(aInvalidApiKey_0, 15, v6, v7)
        && !(unsigned __int8)sub_141059410(aInvalidApiKey_1, 15, v6, v7)
        && !(unsigned __int8)sub_141059410(aIncorrectApiKe, 17, v6, v7) )
      {
        v2 = &unk_141A70D42;
        if ( !(unsigned __int8)sub_141059410(aModelNotFound, 15, v6, v7)
          && !(unsigned __int8)sub_141059410(aModelNotFound_0, 15, v6, v7)
          && !(unsigned __int8)sub_141059410(aDoesNotExist, 14, v6, v7) )
        {
          v2 = &unk_141A70CFA;
          if ( !(unsigned __int8)sub_141059410(aInsufficientQu, 18, v6, v7)
            && !(unsigned __int8)sub_141059410(aBilling, 7, v6, v7)
            && !(unsigned __int8)sub_141059410(aBalance_1, 7, v6, v7)
            && (!(unsigned __int8)sub_141059410(aExceeded, 8, v6, v7)
             || !(unsigned __int8)sub_141059410(aQuota_1, 5, v6, v7)) )
          {
            v2 = &unk_141A70CA3;
            if ( !(unsigned __int8)sub_141059410(aContextLength, 14, v6, v7)
              && !(unsigned __int8)sub_141059410(aTooManyTokens, 15, v6, v7)
              && !(unsigned __int8)sub_141059410(aMaximumContext, 15, v6, v7) )
            {
              if ( (unsigned __int8)sub_141059410(aConnectionRefu, 18, v6, v7) )
              {
                v2 = &unk_141A70C3C;
                v3 = v5;
                if ( !v5 )
                  return v2;
                goto LABEL_36;
              }
              v2 = &unk_141A70BDF;
              if ( !(unsigned __int8)sub_141059410(aDns_0, 3, v6, v7)
                && !(unsigned __int8)sub_141059410(aResolve_0, 7, v6, v7) )
              {
                if ( (unsigned __int8)sub_141059410(aTimeout_6, 7, v6, v7) )
                {
                  v2 = &unk_141A70B88;
                  v3 = v5;
                  if ( !v5 )
                    return v2;
                  goto LABEL_36;
                }
                v2 = &unk_141A70B23;
                if ( !(unsigned __int8)sub_141059410(aCertificate_0, 11, v6, v7)
                  && !(unsigned __int8)sub_141059410(aTls_0, 3, v6, v7)
                  && !(unsigned __int8)sub_141059410(aSsl, 3, v6, v7) )
                {
                  if ( (unsigned __int8)sub_141059410(aConnectionRese_0, 16, v6, v7) )
                  {
                    v2 = &unk_141A70AD4;
                  }
                  else if ( !(unsigned __int8)sub_141059410(aImageUrl_1, 9, v6, v7)
                         || (v2 = &unk_141A70A8F, !(unsigned __int8)sub_141059410(&dword_141A6A003, 7, v6, v7))
                         && !(unsigned __int8)sub_141059410(aUnsupported_3, 11, v6, v7)
                         && !(unsigned __int8)sub_141059410(aExpected, 8, v6, v7) )
                  {
                    if ( !(unsigned __int8)sub_141059410(aStream_2, 6, v6, v7)
                      || (v2 = &unk_141A70A3B, !(unsigned __int8)sub_141059410(aError_50, 5, v6, v7))
                      && !(unsigned __int8)sub_141059410(aDisconnect, 10, v6, v7)
                      && !(unsigned __int8)sub_141059410(aClosed_1, 6, v6, v7) )
                    {
                      if ( sub_14102D570(v6, v7, (__int64)&unk_141A706CD) )
                      {
                        v2 = &unk_141A709F7;
                        if ( !(unsigned __int8)sub_141059410(aPermission, 10, v6, v7)
                          && !(unsigned __int8)sub_141059410(aNotAllowed, 11, v6, v7) )
                        {
                          if ( (unsigned __int8)sub_141059410(aIp, 2, v6, v7)
                            || (unsigned __int8)sub_141059410(aRegion, 6, v6, v7)
                            || (unsigned __int8)sub_141059410(aCountry, 7, v6, v7) )
                          {
                            v2 = &unk_141A709B1;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                          }
                          else
                          {
                            v2 = &unk_141A70951;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                          }
                          goto LABEL_36;
                        }
                      }
                      else
                      {
                        if ( sub_14102D570(v6, v7, (__int64)&unk_141A706D0) )
                        {
                          v2 = &unk_141A708DF;
                          v3 = v5;
                          if ( !v5 )
                            return v2;
                          goto LABEL_36;
                        }
                        if ( sub_14102D570(v6, v7, (__int64)&unk_141A706D3) )
                        {
                          v2 = &unk_141A70885;
                          v3 = v5;
                          if ( !v5 )
                            return v2;
                          goto LABEL_36;
                        }
                        v2 = &unk_141A70843;
                        if ( !sub_14102D570(v6, v7, (__int64)&unk_141A706D6)
                          && !(unsigned __int8)sub_141059410(aRateLimit, 10, v6, v7)
                          && !(unsigned __int8)sub_141059410(aRateLimit_0, 10, v6, v7) )
                        {
                          if ( sub_14102D570(v6, v7, (__int64)&unk_141A706E3) )
                          {
                            v2 = &unk_141A707F2;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          if ( sub_14102D570(v6, v7, (__int64)&unk_141A706E6) )
                          {
                            v2 = &unk_141A707B0;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          if ( sub_14102D570(v6, v7, (__int64)&unk_141A706E9) )
                          {
                            v2 = &unk_141A70740;
                            v3 = v5;
                            if ( !v5 )
                              return v2;
                            goto LABEL_36;
                          }
                          v2 = &unk_141A706EC;
                          if ( !(unsigned __int8)sub_141059410(aNetwork_5, 7, v6, v7)
                            && !(unsigned __int8)sub_141059410(&qword_141A6B819, 11, v6, v7) )
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
