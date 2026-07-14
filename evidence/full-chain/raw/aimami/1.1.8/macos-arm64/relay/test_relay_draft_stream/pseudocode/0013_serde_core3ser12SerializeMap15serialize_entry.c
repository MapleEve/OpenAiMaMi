// mac 1.1.8 test_relay_draft_stream node va=0x1003c6dc0 depth=2
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::hb1530cb7a6e93974(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  unsigned __int64 **v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  size_t v14; // r14
  unsigned __int64 v15; // r15
  __int64 v17; // r15
  _BYTE __src[40]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h]

  if ( *(_BYTE *)a1 == 1 ) /*0x1003c6dd4*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003c6ea1*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v6 = *(unsigned __int64 ***)(a1 + 8); /*0x1003c6de0*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003c6de8*/
  {
    v7 = *v6; /*0x1003c6dea*/
    v8 = (*v6)[2]; /*0x1003c6ded*/
    if ( **v6 == v8 ) /*0x1003c6df6*/
    {
      v19 = a1; /*0x1003c6f05*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v7, v8, 1, 1, 1u); /*0x1003c6f12*/
      v8 = v7[2]; /*0x1003c6f1e*/
    }
    *(_BYTE *)(v7[1] + v8) = 44; /*0x1003c6e01*/
    v7[2] = v8 + 1; /*0x1003c6e08*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003c6e0d*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, a2, a2, a3); /*0x1003c6e1a*/
  v9 = *a4; /*0x1003c6e1f*/
  v10 = *v6; /*0x1003c6e23*/
  v11 = (*v6)[2]; /*0x1003c6e26*/
  if ( **v6 == v11 ) /*0x1003c6e2d*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v11, 1, 1, 1u); /*0x1003c6ebc*/
    v9 = (unsigned int)v9; /*0x1003c6ec1*/
    v11 = v10[2]; /*0x1003c6ec4*/
  }
  *(_BYTE *)(v10[1] + v11) = 58; /*0x1003c6e33*/
  v10[2] = v11 + 1; /*0x1003c6e3a*/
  v12 = *v6; /*0x1003c6e3e*/
  v13 = _$LT$u16$u20$as$u20$itoa..Unsigned$GT$::fmt::he77eaf79f8f55622(v9, __src); /*0x1003c6e45*/
  v14 = 5 - v13; /*0x1003c6e50*/
  v15 = v12[2]; /*0x1003c6e56*/
  if ( 5 - v13 > *v12 - v15 ) /*0x1003c6e60*/
  {
    v17 = v13; /*0x1003c6ee1*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v12, v12[2], 5 - v13, 1, 1u); /*0x1003c6ee4*/
    v13 = v17; /*0x1003c6ee9*/
    v15 = v12[2]; /*0x1003c6eec*/
  }
  memcpy((void *)(v15 + v12[1]), &__src[v13], v14); /*0x1003c6e71*/
  v12[2] = v14 + v15; /*0x1003c6e79*/
  return 0; /*0x1003c6e7f*/
}