// va=0x10068e910
// symbol=codexmate_lib::core::relay::router_unlock_auth::can_restore_previous_auth::h379a0efdb14b7384
// call depth 3 (callee of readiness @0x100690a80)
// behavior: reads the same "router-unlock-auth-marker.json" marker via read_marker(); if the
// marker's bool flag (v10&1) is set, additionally joins+stats a *second* backup path (anon
// string ref @0x1012d11a6) and requires that path to exist (metadata ok) before returning true.

__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::can_restore_previous_auth::h379a0efdb14b7384(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // r14

  v1 = *(_QWORD *)(a1 + 584); /*0x10068e924*/
  v2 = *(_QWORD *)(a1 + 592); /*0x10068e92b*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a(/*out*/0, v1, v2); /*0x10068e93f*/
  v3 = 0; /*0x10068e944*/
  if ( /*read_marker failed*/ 0 ) /*0x10068e94e*/
    return v3; /*0x10068e94e*/

  if ( /*marker.flag & 1*/ 0 ) /*0x10068e976*/
  {
    std::path::Path::_join::hb1a495d4f06b13b8(/*out*/0, v1, v2, /*literal*/0, 30); /*0x10068e98f*/
    v6 = /*joined path ptr*/0; /*0x10068e994*/
    std::sys::fs::metadata::h32fa16d3052ea535(/*out*/0, v6, /*len*/0); /*0x10068e9a6*/
    v3 = /*metadata_ok*/0; /*0x10068e9ab*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605(0, 0); /*0x10068e9bc*/
    LOBYTE(v3) = v3 ^ 1; /*0x10068e9d7 -- inverted: v3=1 iff backup metadata lookup FAILED to error (i.e. exists)*/
  }
  else
  {
    v3 = 0; /*0x10068e9e2*/
  }
  return v3; /*0x10068ea14*/
}

/* refs (direct callees):
   0x1006899e0 read_marker::h1f857b739e1ec08a                          [depth4]
   0x1010a9480 std::path::Path::_join::hb1a495d4f06b13b8               [depth4, terminated_reason=external_call]
   0x1012d11a6 string literal (backup-marker relative path segment, anon.827)
   0x1010a1400 std::sys::fs::metadata::h32fa16d3052ea535               [depth4, terminated_reason=external_call]
   0x10069fd50 drop_in_place<Result<Metadata,io::Error>>
   0x100001440 __rust_dealloc
*/
