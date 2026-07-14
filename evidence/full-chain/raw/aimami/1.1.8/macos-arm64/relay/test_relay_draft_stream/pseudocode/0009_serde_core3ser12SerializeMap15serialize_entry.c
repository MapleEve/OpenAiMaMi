// mac 1.1.8 test_relay_draft_stream node va=0x1003bb780 depth=2
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 **v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  size_t v15; // r14
  unsigned __int64 v16; // r15
  __int64 v18; // r15
  _BYTE __src[40]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]

  if ( *(_BYTE *)a1 == 1 ) /*0x1003bb794*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003bb885*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v6 = *(unsigned __int64 ***)(a1 + 8); /*0x1003bb7a0*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003bb7a8*/
  {
    v7 = *v6; /*0x1003bb7aa*/
    v8 = (*v6)[2]; /*0x1003bb7ad*/
    if ( **v6 == v8 ) /*0x1003bb7b6*/
    {
      v20 = a1; /*0x1003bb8e3*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v7, v8, 1, 1, 1u); /*0x1003bb8f0*/
      v8 = v7[2]; /*0x1003bb8fc*/
    }
    *(_BYTE *)(v7[1] + v8) = 44; /*0x1003bb7c1*/
    v7[2] = v8 + 1; /*0x1003bb7c8*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003bb7cd*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, a2, a2, a3); /*0x1003bb7da*/
  v9 = *a4; /*0x1003bb7df*/
  v10 = *v6; /*0x1003bb7e2*/
  v11 = (*v6)[2]; /*0x1003bb7e5*/
  if ( **v6 == v11 ) /*0x1003bb7ec*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v11, 1, 1, 1u); /*0x1003bb89d*/
    v11 = v10[2]; /*0x1003bb8a2*/
  }
  *(_BYTE *)(v10[1] + v11) = 58; /*0x1003bb7f6*/
  v10[2] = v11 + 1; /*0x1003bb7fd*/
  v12 = *v6; /*0x1003bb801*/
  v13 = -v9; /*0x1003bb807*/
  if ( v9 > 0 ) /*0x1003bb80a*/
    v13 = v9; /*0x1003bb80a*/
  v14 = _$LT$u64$u20$as$u20$itoa..Unsigned$GT$::fmt::h589955acf8b227ca(v13, __src); /*0x1003bb812*/
  if ( v9 < 0 ) /*0x1003bb81a*/
  {
    if ( (unsigned __int64)--v14 > 0x13 ) /*0x1003bb823*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v14, 20, &anon_0eedd02070250de7472aa97ee6b1a8ea_930); /*0x1003bb915*/
    __src[v14] = 45; /*0x1003bb829*/
  }
  v15 = 20 - v14; /*0x1003bb834*/
  v16 = v12[2]; /*0x1003bb83a*/
  if ( 20 - v14 > *v12 - v16 ) /*0x1003bb844*/
  {
    v18 = v14; /*0x1003bb8bf*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003bb8c2*/
      v12,
      v12[2],
      20 - v14,
      1,
      1u);
    v14 = v18; /*0x1003bb8c7*/
    v16 = v12[2]; /*0x1003bb8ca*/
  }
  memcpy((void *)(v16 + v12[1]), &__src[v14], v15); /*0x1003bb855*/
  v12[2] = v15 + v16; /*0x1003bb85d*/
  return 0; /*0x1003bb863*/
}