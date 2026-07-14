// va=0x100689c00
// symbol=codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d
// call depth 3 (callee of readiness @0x100690a80)
// behavior: stats a1's path (a1+32/+40), returns 0 if metadata lookup fails; else reads the
// file to a string, parses it as JSON (serde_json::de::from_trait), and indexes into the
// parsed Value with the literal key "aimami_router_unlock_auth". Returns 3 (no-file/parse-error),
// 2 (parsed but key missing/wrong shape), or (2 - bool_value) otherwise -- i.e. "1" iff the
// JSON boolean at that key is literally `true`.
// PERSISTENCE READ: same on-disk marker referenced in read_marker() below --
// "router-unlock-auth-marker.json" with top-level bool field "aimami_router_unlock_auth".

__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // r14
  _BYTE *v6; // rax

  v2 = *(_QWORD *)(a1 + 32); /*0x100689c10*/
  v3 = *(_QWORD *)(a1 + 40); /*0x100689c14*/
  std::sys::fs::metadata::h32fa16d3052ea535(/*out*/0, v2, v3); /*0x100689c25*/
  if ( /*metadata err*/ 0 ) /*0x100689c38*/
    return 0; /*0x100689c44*/

  std::fs::read_to_string::inner::hcce2334f4117b5b3(/*out*/0, v2, v3); /*0x100689c60*/
  if ( /*read err*/ 0 ) /*0x100689c76*/
  {
    v1 = 3; /*0x100689c8d*/
  }
  else
  {
    serde_json::de::from_trait::h13c6255c2aa0fc50(/*out*/0, /*in*/0); /*0x100689cd9*/
    if ( /*parse err*/ 0 ) /*0x100689ce2*/
    {
      v1 = 3; /*0x100689ced*/
    }
    else
    {
      v6 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100689d31*/
                      "aimami_router_unlock_auth",
                      25,
                      /*&value*/ 0);
      v1 = 2; /*0x100689d36*/
      if ( v6 && *v6 == 1 ) /*0x100689d41*/
        v1 = 2 - v6[1]; /*0x100689d46 -- v6[1] holds the parsed bool (0/1); v1==1 iff true */
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(0); /*0x100689d51*/
    }
  }
  return v1; /*0x100689d6e*/
}

/* refs (direct callees):
   0x1010a1400 std::sys::fs::metadata::h32fa16d3052ea535          [depth4, terminated_reason=external_call (stat syscall)]
   0x10109b0f0 std::fs::read_to_string::inner::hcce2334f4117b5b3  [depth4, terminated_reason=persistence read]
   0x10050ee60 serde_json::de::from_trait::h13c6255c2aa0fc50      [depth4]
   0x10105f5c0 serde_json::value::index::Index::index_into::h51f9dd05d381230f [depth4]
   0x1012d11c4 string literal "router-unlock-auth-marker.jsonaimami_router_unlock_auth"
               (two adjacent rodata string constants: filename + json key, confirmed via get_bytes-equivalent decompile refs)
   0x10069e8e0 drop_in_place<serde_json::Error>
   0x10069e9d0 drop_in_place<serde_json::Value>
   0x100001440 __rust_dealloc
*/
