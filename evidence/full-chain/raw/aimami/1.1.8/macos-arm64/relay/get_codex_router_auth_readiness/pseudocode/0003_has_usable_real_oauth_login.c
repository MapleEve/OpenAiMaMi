// va=0x10068ea70
// symbol=codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h18ba4ce1682b3641
// call depth 3 (callee of readiness @0x100690a80)
// behavior: loads the local auth file (core::auth::load_auth_file), validates its shape
// (variant/branch checks against AuthFile enum), then case-insensitively matches the
// "apikey" auth-mode literal (byte-by-byte OR-with-0x20 lowercase compare 97/112/105/107/101 = "apik e"),
// falls through to a generic path that trims the token string and calls
// oauth_refresh::token_remaining_seconds to test token freshness (>=301s remaining => usable).

__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h18ba4ce1682b3641(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __m128i v5; // xmm0
  unsigned int v6; // ebx
  _WORD *v7; // rax
  __int64 v8; // rdx
  _WORD *v9; // rbx
  unsigned __int64 v10; // r13

  codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(/*__src*/0, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40)); /*0x10068ea9d*/
  if ( /*load result variant != IoError*/ 1 ) /*0x10068eaad*/
  {
    // ... AuthFile enum branch dispatch: validates presence + non-empty auth-mode field,
    // then requires "apikey" mode string OR a populated refresh-token slot before falling to
    // the token_remaining_seconds freshness check. On any negative branch -> v6=0 (LABEL_29).
    v7 = (_WORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(0, 0); /*0x10068ec3f*/
    if ( v8 ) /*0x10068ec47*/
    {
      v9 = v7;
      if ( v8 == 1 || *v7 != 24415 ) /* != "ey" (jwt-ish prefix guard) */
      {
        // CharSearcher scan counts '.' separators (JWT-shape heuristic: need >=2 segments)
        if ( v10 >= 2 ) /*0x10068eccb*/
        {
          v6 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h71cc02e45cdce62c(v9); /*0x10068ee25*/
          LOBYTE(v6) = (/*remaining_seconds*/ 0 >= 301) | v6 ^ 1; /*0x10068ee35*/
        }
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hebf4dd6d55e528d5(0); /*0x10068ecd3*/
  }
  LOBYTE(v6) = v6 & 1; /*0x10068ee03*/
  return v6; /*0x10068ee08*/
}

/* refs (direct callees):
   0x1006c5140 core::auth::load_auth_file::hed0a61e6b371759b               [depth4, persistence read]
   0x1006a0590 core::str::trim_matches::h0335c6e49c88655a                  [depth4, leaf/str util]
   0x1006b4050 CharSearcher::next_match::hb964a2350606f792                 [depth4, leaf/str util]
   0x1003d0830 core::oauth_refresh::token_remaining_seconds::h71cc02e45cdce62c [depth4]
   0x10069f160 drop_in_place<AuthFile>::hebf4dd6d55e528d5                  [depth4, destructor]
   0x10069e8e0 drop_in_place<serde_json::Error>::ha15d82f2b359895c
   0x10069e6b0 drop_in_place<reqwest::Error>::h10979ef1b92776bb
   0x100001440 __rust_dealloc
*/
