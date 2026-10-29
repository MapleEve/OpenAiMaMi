// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::keychain::set_api_key; addr: 0x100b16010; session: <审计会话>; decompiled_at: 2026-10-26T04:14:24Z
__int64 __fastcall codexmate_lib::core::sessions::reconcile_official_thread_rows::ha8b5f08e4b547d3b(
        _QWORD *a1,
        size_t a2,
        __m128i a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v7[96]; // [rsp+8h] [rbp-1E8h] BYREF
  __int64 v8; // [rsp+68h] [rbp-188h] BYREF
  _BYTE v9[96]; // [rsp+70h] [rbp-180h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-120h]
  __int64 v11; // [rsp+D8h] [rbp-118h]
  __int64 v12; // [rsp+E0h] [rbp-110h]
  __int64 v13; // [rsp+E8h] [rbp-108h] BYREF
  _QWORD v14[15]; // [rsp+F0h] [rbp-100h] BYREF
  _QWORD v15[12]; // [rsp+168h] [rbp-88h] BYREF
  __int64 v16; // [rsp+1C8h] [rbp-28h] BYREF
  __int64 v17; // [rsp+1D0h] [rbp-20h]
  __int64 v18; // [rsp+1D8h] [rbp-18h]

  codexmate_lib::core::codex_app_server::AppServerClient::connect::h7c1c93bed08b3597((__int64)&v13, a2); /*0x100b16028*/
  qmemcpy(v7, v14, sizeof(v7)); /*0x100b16047*/
  if ( v13 == 3 ) /*0x100b1604e*/
  {
    qmemcpy(v15, v7, sizeof(v15)); /*0x100b16063*/
  }
  else
  {
    v12 = v14[14]; /*0x100b1606f*/
    v11 = v14[13]; /*0x100b16084*/
    v10 = v14[12]; /*0x100b1608b*/
    qmemcpy(v9, v7, sizeof(v9)); /*0x100b160a5*/
    v8 = v13; /*0x100b160a8*/
    codexmate_lib::core::codex_app_server::list_threads_with_client::hc9171910f1996a22( /*0x100b160c2*/
      (__int64)v15,
      (__int64)&v8,
      1,
      a3);
    core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerClient$GT$::h82ca92cb16e6ce22(&v8); /*0x100b160ce*/
  }
  v3 = v15[0]; /*0x100b160d3*/
  v16 = v15[1]; /*0x100b160de*/
  v17 = v15[2]; /*0x100b160e6*/
  v18 = v15[3]; /*0x100b160ee*/
  if ( v15[0] == 11 ) /*0x100b160f6*/
  {
    codexmate_lib::core::sessions::loaded_codex_threads_from_app_server::h71963446f8233861(&v13, &v16); /*0x100b16103*/
    a1[6] = v14[4]; /*0x100b1610f*/
    a1[5] = v14[3]; /*0x100b1611a*/
    a1[4] = v14[2]; /*0x100b16125*/
    a1[3] = v14[1]; /*0x100b16130*/
    result = v13; /*0x100b16134*/
    v5 = v14[0]; /*0x100b1613b*/
  }
  else
  {
    a1[11] = v15[11]; /*0x100b16148*/
    a1[10] = v15[10]; /*0x100b16150*/
    a1[9] = v15[9]; /*0x100b16158*/
    a1[8] = v15[8]; /*0x100b16160*/
    a1[7] = v15[7]; /*0x100b16168*/
    a1[6] = v15[6]; /*0x100b16170*/
    v6 = v15[4]; /*0x100b16174*/
    a1[5] = v15[5]; /*0x100b1617c*/
    a1[4] = v6; /*0x100b16180*/
    a1[3] = v18; /*0x100b16188*/
    result = v16; /*0x100b1618c*/
    v5 = v17; /*0x100b16190*/
  }
  a1[2] = v5; /*0x100b16194*/
  a1[1] = result; /*0x100b16198*/
  *a1 = v3; /*0x100b1619c*/
  return result; /*0x100b1619f*/
}