// callee (depth 1 from owner 0x1000a2e40): codexmate_lib::core::oauth_login::build_authorize_url::h1cdf5391a0e68625
// VA: 0x1003ce220 — full Hex-Rays decompile, no bail, 7473 chars total (verbatim below)
// Builds the OAuth 2.0 authorize-endpoint URL by string-pool cross-check (find_regex, see evidence.md):
//   base:  https://auth.openai.com/oauth/authorize
//   query (9x form_urlencoded::append_pair calls, in call order, names confirmed by string-pool +
//   matching literal byte-lengths in the disassembly's constant-length arguments):
//     response_type=code
//     client_id=app_EMoamEEZ73f0CkXaXp7hrann
//     redirect_uri=http://localhost:1455/auth/callback
//     scope="openid profile email offline_access"
//     code_challenge=<from generate_pkce>
//     code_challenge_method=S256
//     id_token_add_organizations=<a2/a3 passed-in bool-like arg, caller-supplied>
//     codex_cli_simplified_flow=<a2/a3-adjacent caller-supplied flag>
//     originator=codex_cli_rs
//   This is the same auth.openai.com PKCE authorize flow (+ same public client_id "app_EMoamEEZ..."
//   and "originator=codex_cli_rs") that OpenAI's own open-source Codex CLI uses for ChatGPT-account
//   login — AiMaMi 1.1.8 re-implements that public flow rather than a proprietary one. client_id is a
//   public OAuth client identifier (not a confidential secret); the only per-session secret
//   (code_verifier) is generated locally by generate_pkce and never appears in this URL.
_QWORD *__fastcall codexmate_lib::core::oauth_login::build_authorize_url::h1cdf5391a0e68625(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD v21[11]; // [rsp+18h] [rbp-108h] BYREF
  __int64 v22; // [rsp+70h] [rbp-B0h]
  __int64 v23; // [rsp+78h] [rbp-A8h]
  __int64 v24; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-98h]
  __int64 v26; // [rsp+90h] [rbp-90h]
  _QWORD v27[11]; // [rsp+98h] [rbp-88h] BYREF
  _BYTE v28[41]; // [rsp+F7h] [rbp-29h] BYREF

  v23 = a5; /*0x1003ce234*/
  v22 = a4; /*0x1003ce23b*/                            // a4/a5 = code_challenge (str ptr+len) passed by caller
  v21[4] = 0; /*0x1003ce255*/
  v21[0] = 0; /*0x1003ce260*/
  v21[2] = 0; /*0x1003ce26b*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(v27, v21, &anon_0eedd02070250de7472aa97ee6b1a8ea_75, 39); /*0x1003ce290*/
  // ^ parses "https://auth.openai.com/oauth/authorize" (39 bytes, matches literal length) as base Url
  if ( v27[0] == 0x8000000000000000LL ) /*0x1003ce2a0*/
  {
    LOBYTE(v21[0]) = v27[1]; /*0x1003ce6d3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ce6fa — defensive-only panic, base URL is a static literal, unreachable in practice*/
      &anon_0eedd02070250de7472aa97ee6b1a8ea_76, 33, v21,
      &anon_0eedd02070250de7472aa97ee6b1a8ea_918, &anon_0eedd02070250de7472aa97ee6b1a8ea_77);
  }
  qmemcpy(v21, v27, sizeof(v21)); /*0x1003ce2bc*/
  url::Url::query_pairs_mut::h509c3bdf2599cd13(v27, v21); /*0x1003ce2c9*/
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce2d5*/
    goto LABEL_20; /*0x1003ce2d5*/
  v6 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce2e2*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce317 — key len=13 "response_type", value len=4 "code"*/
    v6, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_78, 13,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_62, 4);
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce323*/
    goto LABEL_20; /*0x1003ce323*/
  v7 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce330*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce365 — key len=9 "client_id", value len=28 "app_EMoamEEZ73f0CkXaXp7hrann"*/
    v7, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_79, 9,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_80, 28);
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce371*/
    goto LABEL_20; /*0x1003ce371*/
  v8 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce37e*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce3b3 — key len=12 "redirect_uri", value len=35 "http://localhost:1455/auth/callback"*/
    v8, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_81, 12,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_82, 35);
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce3bf*/
    goto LABEL_20; /*0x1003ce3bf*/
  v9 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce3cc*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce401 — key len=5 "scope", value len=35 "openid profile email offline_access"*/
    v9, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_83, 5,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_84, 35);
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce40d*/
    goto LABEL_20; /*0x1003ce40d*/
  v10 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce41a*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce444 — key len=14 "code_challenge", value = a2/a3 (generate_pkce output, dynamic)*/
    v10, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_85, 14,
    a2, a3);
  if ( v27[0] == 0x8000000000000001LL ) /*0x1003ce450*/
    goto LABEL_20; /*0x1003ce450*/
  v11 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce45d*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce492 — key len=21 "code_challenge_method", value len=4 "S256"*/
    v11, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_86, 21,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_87, 4);
  if ( v27[0] == 0x8000000000000001LL /*0x1003ce581*/
    || (v12 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27),
        form_urlencoded::append_pair::h6e478387beac77a4( /*key len=26 "id_token_add_organizations", value len=4*/
          v12, v27[4], v27[5], v27[6],
          (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_88, 26,
          (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_8, 4),
        v27[0] == 0x8000000000000001LL)
    || (v13 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27),
        form_urlencoded::append_pair::h6e478387beac77a4( /*key len=25 "codex_cli_simplified_flow", value len=4*/
          v13, v27[4], v27[5], v27[6],
          (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_89, 25,
          (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_8, 4),
        v27[0] == 0x8000000000000001LL)
    || (v14 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27),
        form_urlencoded::append_pair::h6e478387beac77a4( /*key len=10 "originator", value="codex_cli_rs" (literal in code, len=12)*/
          v14, v27[4], v27[5], v27[6],
          (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_90, 10,
          (__int64)"codex_cli_rs", 12),
        v27[0] == 0x8000000000000001LL) )
  {
LABEL_20:
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1003ce6c8 — defensive-only, query-mut error path*/
      &anon_fa700c1a43d52b7c25cc5c59994db220_9, 41, &anon_fa700c1a43d52b7c25cc5c59994db220_10);
  }
  v15 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(v27); /*0x1003ce58e*/
  form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003ce5c6 — key len=5 "state", value = a4/a5 (caller-supplied, likely uuid state nonce)*/
    v15, v27[4], v27[5], v27[6],
    (unsigned int)&anon_0eedd02070250de7472aa97ee6b1a8ea_63, 5, v22, v23);
  if ( v27[0] != 0x8000000000000001LL ) /*0x1003ce5d2*/
  {
    _$LT$url..UrlQuery$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95cb3aea21492abc(v27); /*0x1003ce5db*/
    if ( v27[0] != 0x8000000000000000LL ) /*0x1003ce5ea*/
    {
      if ( v27[0] ) /*0x1003ce5ef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27[1], v27[0], 1); /*0x1003ce5fa*/
    }
  }
  v24 = 0; /*0x1003ce60d*/
  v25 = 1; /*0x1003ce618*/
  v26 = 0; /*0x1003ce623*/
  v27[2] = 1610612768; /*0x1003ce62e*/
  v27[0] = &v24; /*0x1003ce63d*/
  v27[1] = &anon_0eedd02070250de7472aa97ee6b1a8ea_902; /*0x1003ce64b*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x1003ce656 — final Url -> String render*/
                          v21[1], v21[2], v27, v16, v17, v18) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003ce71d*/
      &anon_0eedd02070250de7472aa97ee6b1a8ea_903, 55, v28,
      &anon_0eedd02070250de7472aa97ee6b1a8ea_917, &anon_0eedd02070250de7472aa97ee6b1a8ea_905);
  a1[2] = v26; /*0x1003ce66a*/
  v19 = v24; /*0x1003ce66e*/
  a1[1] = v25; /*0x1003ce67c*/
  *a1 = v19; /*0x1003ce680*/
  if ( v21[0] ) /*0x1003ce68d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21[1], v21[0], 1); /*0x1003ce69b*/
  return a1;   // returns the rendered authorize URL as a Rust String /*0x1003ce6a3*/
}
