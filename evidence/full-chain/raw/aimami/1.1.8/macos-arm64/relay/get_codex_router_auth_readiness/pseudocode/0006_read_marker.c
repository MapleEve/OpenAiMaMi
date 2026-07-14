// va=0x1006899e0
// symbol=codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a
// call depth 4 (callee of can_restore_previous_auth @0x10068e910) -- terminal leaf branch
// behavior: Path::join(base_dir, "router-unlock-auth-marker.json"), read_to_string it, and
// parse as JSON via serde_json::de::from_trait; on any IO or parse error returns an
// error-sentinel (0x8000000000000000) in *a1, else fills a1[0..7] with the parsed Value's
// internal representation. This is the canonical reader for the persisted unlock-auth marker
// consumed by both live_auth_state() (depth3, sibling) and can_restore_previous_auth() (depth3, caller).

void __fastcall codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r14

  std::path::Path::_join::hb1a495d4f06b13b8(/*out*/0, a2, a3, "router-unlock-auth-marker.jsonaimami_router_unlock_auth", 30); /*0x100689a03*/
  // string literal above is two adjacent rodata constants sharing one xref record:
  //   "router-unlock-auth-marker.json" (join fragment, len 30/31)
  //   "aimami_router_unlock_auth"      (json key, consumed by live_auth_state's index_into)
  v3 = /*joined path ptr*/0; /*0x100689a08*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(/*out*/0, /*joined path*/0, /*len*/0); /*0x100689a1a*/
  // dealloc joined path buffer
  if ( /*read error (offset -1 sentinel)*/ 0 ) /*0x100689a50*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9(0, 0); /*0x100689a5b*/
    *a1 = 0x8000000000000000LL; /*0x100689a60  -- error sentinel */
    return; /*0x100689a63*/
  }
  ((void (__fastcall *)(__int64 *, __int64 *))serde_json::de::from_trait::h45547de1a6d0185b)(/*out*/0, /*in*/0); /*0x100689a9a*/
  if ( /*parse error*/ 0 ) /*0x100689aa3*/
  {
    *a1 = 0x8000000000000000LL; /*0x100689aa5*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(0); /*0x100689aac*/
    return;
  }
  // success: a1[0..7] populated from the parsed serde_json::Value fields
}

/* refs (direct callees):
   0x1010a9480 std::path::Path::_join::hb1a495d4f06b13b8                                    [depth5, terminated_reason=external_call]
   0x1012d11c4 string literal "router-unlock-auth-marker.jsonaimami_router_unlock_auth"
   0x10109b0f0 std::fs::read_to_string::inner::hcce2334f4117b5b3                            [depth5, terminated_reason=persistence read of local marker file]
   0x10050f5d0 serde_json::de::from_trait::h45547de1a6d0185b                                [depth5]
   0x100001440 __rust_dealloc
   0x1006a0380 drop_in_place<Result<String,io::Error>>
   0x10069e8e0 drop_in_place<serde_json::Error>
*/
