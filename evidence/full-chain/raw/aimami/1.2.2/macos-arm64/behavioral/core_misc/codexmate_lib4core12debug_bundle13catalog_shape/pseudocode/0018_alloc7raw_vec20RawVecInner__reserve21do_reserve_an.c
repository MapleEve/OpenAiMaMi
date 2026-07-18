// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x1013ef390 d=2
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

  v5 = __CFADD__(a3, a2); /*0x1013ef39b*/
  v6 = a3 + a2; /*0x1013ef39b*/
  if ( v5 ) /*0x1013ef39e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0); /*0x1013ef3fe*/
  v7 = 2 * *a1; /*0x1013ef3ac*/
  if ( v6 > v7 ) /*0x1013ef3b3*/
    v7 = v6; /*0x1013ef3b3*/
  if ( v7 <= 4 * (unsigned __int64)(a5 == 1) + 4 ) /*0x1013ef3cb*/
    v7 = 4LL * (a5 == 1) + 4; /*0x1013ef3cb*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v9, *a1, a1[1], v7, a4, a5); /*0x1013ef3dd*/
  if ( v9 == 1 ) /*0x1013ef3e6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10); /*0x1013ef40b*/
  result = v10; /*0x1013ef3e8*/
  a1[1] = v10; /*0x1013ef3ec*/
  *a1 = v7; /*0x1013ef3f0*/
  return result; /*0x1013ef3f3*/
}