// mac 1.1.8 BEHAVIORAL-BACKEND check_daemon_state node 0x10112ef10 depth=2
// alloc7raw_vec19RawVec::grow_one
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17ha4ac61c7a0de5f7bE'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hba190b810e68ac72(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x10112ef29*/
  if ( (unsigned __int64)(2LL * *(_QWORD *)a1) >= 5 ) /*0x10112ef2f*/
    v1 = 2LL * *(_QWORD *)a1; /*0x10112ef2f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e( /*0x10112ef4a*/
    &v3,
    *(_QWORD *)a1,
    *(void **)(a1 + 8),
    v1,
    8u,
    8);
  if ( (_DWORD)v3 == 1 ) /*0x10112ef53*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x10112ef71*/
  result = v4; /*0x10112ef55*/
  *(_QWORD *)(a1 + 8) = v4; /*0x10112ef59*/
  *(_QWORD *)a1 = v1; /*0x10112ef5d*/
  return result; /*0x10112ef60*/
}