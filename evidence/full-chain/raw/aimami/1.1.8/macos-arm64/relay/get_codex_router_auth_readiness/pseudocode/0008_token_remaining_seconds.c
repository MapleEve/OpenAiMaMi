// va=0x1003d0830
// symbol=codexmate_lib::core::oauth_refresh::token_remaining_seconds::h71cc02e45cdce62c
// call depth 4 (callee of has_usable_real_oauth_login @0x10068ea70)
// behavior: splits the input token string on '.' (JWT-shape: header.payload.signature),
// base64-decodes the middle segment (adding '=' padding as needed), parses it as JSON,
// indexes into the "exp" claim (unk_1012C2595, len 3 -> literal "exp"), and if present +
// numeric, computes SystemTime::now().duration_since(UNIX_EPOCH-relative exp instant) to
// decide freshness. Returns 0 on any malformed/missing-claim path, 1 if the exp check passes.

__int64 __fastcall codexmate_lib::core::oauth_refresh::token_remaining_seconds::h71cc02e45cdce62c(
        __int64 a1,
        __int64 a2)
{
  __int64 v19; // rax  (index_into result ptr)
  __int64 v21; // rcx

  // ... '.' CharSearcher split to isolate JWT payload segment (2nd of 3 dot-separated parts) ...
  base64::engine::Engine::decode::inner::h6a6fd532ed40bccc(/*out*/0, /*engine*/0, /*seg ptr*/0, /*seg len*/0); /*0x1003d09d2*/
  // on decode failure with padding-needed, retries decode after right-padding '=' to a
  // multiple-of-4 length (RFC 4648 unpadded base64url tolerance), via String::extend
  serde_json::de::from_trait::h28ab99648eaf8581(/*out*/0, /*decoded bytes*/0); /*0x1003d0a25*/
  if ( /*parse error*/ 0 ) /*0x1003d0a36*/
    return 0; /*0x1003d0c62*/

  v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1012C2595, 3, /*&value*/0); /*0x1003d0b14*/
  // unk_1012C2595 / len=3 == literal key "exp"
  if ( !v19 || *(_BYTE *)v19 != 2 ) /*0x1003d0b25*/
    return 0; /*claim missing or not a number*/
  v21 = *(_QWORD *)(v19 + 8); /*0x1003d0b2b*/
  if ( (_DWORD)v21 != 1 && v21 ) /*0x1003d0b32 .. 0x1003d0b3b*/
    return 0; /*exp not a plain u64/i64*/

  std::time::SystemTime::now::h1fe79e41f9d5677f(&unk_1012C2595, 3, 0); /*0x1003d0c16*/
  std::time::SystemTime::duration_since::had059553cab94f96(/*out*/0, /*ref time built from exp claim*/0, 0, 0); /*0x1003d0c37*/
  if ( /*duration_since errored (exp already in the past)*/ 0 ) /*0x1003d0c40*/
    return 0;
  return 1; /*0x1003d0c53  -- token still has time remaining relative to "exp" claim*/
}

/* refs (direct callees):
   0x100428790 CharSearcher::next_match                                          [depth5]
   0x10025c1c0 base64::engine::Engine::decode::inner::h6a6fd532ed40bccc            [depth5, terminated_reason=external_call (base64 crate)]
   0x100504860 String Extend<char>::extend::he7f9f8daff5ebbc5                     [depth5]
   0x10050f120 serde_json::de::from_trait::h28ab99648eaf8581                       [depth5, terminated_reason=response_serialize/parse]
   0x10105f5c0 serde_json::value::index::Index::index_into::h51f9dd05d381230f     [depth5]
   0x1010aa9c0 std::time::SystemTime::now::h1fe79e41f9d5677f                      [depth5, terminated_reason=external_call]
   0x1010aa980 std::time::SystemTime::duration_since::had059553cab94f96          [depth5, terminated_reason=external_call]
   0x100001430/0x100001440/0x100001470 rust alloc/dealloc shims
   0x10112fd51 alloc::raw_vec::handle_error
*/
