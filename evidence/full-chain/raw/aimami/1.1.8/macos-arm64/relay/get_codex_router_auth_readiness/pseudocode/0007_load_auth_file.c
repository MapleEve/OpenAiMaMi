// va=0x1006c5140
// symbol=codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b
// call depth 4 (callee of has_usable_real_oauth_login @0x10068ea70) -- terminal leaf branch
// behavior: reads the auth file at (a2,a3) path to a string, and if that succeeds, parses it
// via serde_json::de::from_trait into a caller-provided AuthFile-shaped out-param; propagates
// IO error (variant tag 1) or parse error (variant tag 3) sentinels into a1 on failure.
// This is the shared local-auth-file loader also used by other relay/account backend paths
// (not unique to this command) -- confirms get_codex_router_auth_readiness reads the SAME
// on-disk auth store as the rest of the relay auth subsystem, no separate/duplicated store.

_QWORD *__fastcall codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // r12

  std::fs::read_to_string::inner::hcce2334f4117b5b3(/*out*/0, a2, a3); /*0x1006c5168*/
  if ( /*read error*/ 0 ) /*0x1006c517e*/
  {
    a1[1] = 2; /*0x1006c5183*/
    *a1 = 0x8000000000000001LL; /*0x1006c5192  -- IoError variant */
    return a1; /*0x1006c5195*/
  }
  serde_json::de::from_trait::hb63d5d64f334fa06(/*out*/0, /*in*/0); /*0x1006c51de*/
  v6 = /*parsed tag*/0; /*0x1006c51e3*/
  if ( /*parse error*/ 0 ) /*0x1006c51f8*/
  {
    a1[1] = 3; /*0x1006c51fa*/
    *a1 = 0x8000000000000001LL; /*0x1006c5206  -- ParseError variant */
    return a1;
  }
  // success path: copies parsed AuthFile struct fields into a1[0..21]
  *a1 = v6; /*0x1006c52c8*/
  return a1; /*0x1006c5350*/
}

/* refs (direct callees):
   0x10109b0f0 std::fs::read_to_string::inner::hcce2334f4117b5b3   [depth5, terminated_reason=persistence read (local auth-file)]
   0x100510d30 serde_json::de::from_trait::hb63d5d64f334fa06        [depth5, terminated_reason=response_serialize/parse]
   0x100001440 __rust_dealloc
*/
