// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x101101320 depth=2
// alloc7raw_vec19RawVec::grow_one
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h1c3f3f79549a9927E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h95be09deb7819adfE'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17hbabf731fa509bbf1E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17hc5670f8c545dfc99E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17hc6227df2cf8075a8E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17hfa0cb156bcd51a38E'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x101101339*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10110133f*/
    v1 = 2 * *a1; /*0x10110133f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63(&v3, *a1, a1[1], v1, 8); /*0x10110135a*/
  if ( v3 == 1 ) /*0x101101363*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x101101381*/
  result = v4; /*0x101101365*/
  a1[1] = v4; /*0x101101369*/
  *a1 = v1; /*0x10110136d*/
  return result; /*0x101101370*/
}