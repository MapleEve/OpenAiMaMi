// mac 1.1.8 force_kill_codex node va=0x101101470 depth=3
// alloc7raw_vec19RawVec::grow_one
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h257ea335aa9c9d06E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h725f791bb303b37eE'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h7b75b73d91ee984cE'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h93f43340aa97a060E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17haa18584dcef4dfc9E'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17hdb81f96261101194E'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he87f7d6f2e49d34f(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x101101489*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10110148f*/
    v1 = 2 * *a1; /*0x10110148f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63(&v3, *a1, a1[1], v1, 8); /*0x1011014aa*/
  if ( v3 == 1 ) /*0x1011014b3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x1011014d1*/
  result = v4; /*0x1011014b5*/
  a1[1] = v4; /*0x1011014b9*/
  *a1 = v1; /*0x1011014bd*/
  return result; /*0x1011014c0*/
}