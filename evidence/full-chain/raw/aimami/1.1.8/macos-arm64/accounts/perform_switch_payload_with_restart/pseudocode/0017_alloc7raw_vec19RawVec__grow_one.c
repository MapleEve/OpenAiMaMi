// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x10112edc0 depth=1
// alloc7raw_vec19RawVec::grow_one
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h302bf5dbce0afc51E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h30e3a049f7ffa3c0E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h965c2756100dd818E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17ha24077eb154d4d6eE'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x10112edd9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10112eddf*/
    v1 = 2 * *a1; /*0x10112eddf*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v3, *a1, a1[1], v1, 8, 24); /*0x10112edfa*/
  if ( v3 == 1 ) /*0x10112ee03*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x10112ee21*/
  result = v4; /*0x10112ee05*/
  a1[1] = v4; /*0x10112ee09*/
  *a1 = v1; /*0x10112ee0d*/
  return result; /*0x10112ee10*/
}