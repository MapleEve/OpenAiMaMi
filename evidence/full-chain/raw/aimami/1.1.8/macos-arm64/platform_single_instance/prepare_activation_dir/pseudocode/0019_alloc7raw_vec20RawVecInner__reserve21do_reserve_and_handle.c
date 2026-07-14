// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x10112f3b0 depth=2
// alloc7raw_vec20RawVecInner::reserve21do_reserve_and_handle
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  bool v5; // cf
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 result; // rax
  int v9; // [rsp+8h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]
  __int64 v11; // [rsp+18h] [rbp-18h]

  v5 = __CFADD__(a3, a2); /*0x10112f3bb*/
  v6 = a3 + a2; /*0x10112f3bb*/
  if ( v5 ) /*0x10112f3be*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, v6); /*0x10112f41e*/
  v7 = 2 * *a1; /*0x10112f3cc*/
  if ( v6 > v7 ) /*0x10112f3d3*/
    v7 = v6; /*0x10112f3d3*/
  if ( v7 <= 4 * (unsigned __int64)(a5 == 1) + 4 ) /*0x10112f3eb*/
    v7 = 4LL * (a5 == 1) + 4; /*0x10112f3eb*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v9, *a1, a1[1], v7, a4, a5); /*0x10112f3fd*/
  if ( v9 == 1 ) /*0x10112f406*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v11); /*0x10112f42b*/
  result = v10; /*0x10112f408*/
  a1[1] = v10; /*0x10112f40c*/
  *a1 = v7; /*0x10112f410*/
  return result; /*0x10112f413*/
}