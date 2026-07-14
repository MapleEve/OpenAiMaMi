// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1010651f0 depth=1
_QWORD *__fastcall http::header::name::HeaderName::from_static::h9e434d159ca12d45(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax

  v4 = http::header::name::StandardHeader::from_bytes::hac0407398ebf648b(a2, a3); /*0x101065209*/
  if ( v4 == 81 ) /*0x101065210*/
  {
    if ( (unsigned __int64)(a3 - 0x10000) < 0xFFFFFFFFFFFF0001LL ) /*0x10106521f*/
LABEL_9:
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x101065277*/
        (__int64)"HeaderName::from_static with invalid bytesacceptaccept-charsetaccept-encodingaccept-languageaccept-rang"
                 "esaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-contro"
                 "l-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-c"
                 "ontrol-request-methodageallowalt-svcauthorizationcache-controlcache-statuscdn-cache-controlconnectionco"
                 "ntent-dispositioncontent-encodingcontent-languagecontent-lengthcontent-locationcontent-rangecontent-sec"
                 "urity-policycontent-security-policy-report-onlycontent-typecookiedntdateetagexpectexpiresforwardedfromh"
                 "ostif-matchif-modified-sinceif-none-matchif-rangeif-unmodified-sincelast-modifiedlinklocationmax-forwar"
                 "dsoriginpragmaproxy-authenticateproxy-authorizationpublic-key-pinspublic-key-pins-report-onlyrangerefer"
                 "erreferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-web"
                 "socket-protocolsec-websocket-versionserverset-cookiestrict-transport-securitytetrailertransfer-encoding"
                 "user-agentupgradeupgrade-insecure-requestsvaryviawarningwww-authenticatex-content-type-optionsx-dns-pre"
                 "fetch-controlx-frame-optionsx-xss-protectionInvalidHeaderNameinvalid HTTP header name",
        85,
        (__int64)&off_1015AC198);
    v5 = 0; /*0x101065221*/
    do /*0x101065241*/
    {
      if ( !byte_1013D08E8[*(unsigned __int8 *)(a2 + v5)] ) /*0x101065239*/
        goto LABEL_9; /*0x101065239*/
      ++v5; /*0x10106523b*/
    }
    while ( a3 != v5 ); /*0x101065241*/
    *a1 = &off_1015AC170; /*0x10106524a*/
    a1[1] = a2; /*0x10106524d*/
    a1[2] = a3; /*0x101065251*/
    a1[3] = 0; /*0x101065255*/
  }
  else
  {
    *a1 = 0; /*0x10106525f*/
    *((_BYTE *)a1 + 8) = v4; /*0x101065266*/
  }
  return a1; /*0x101065270*/
}