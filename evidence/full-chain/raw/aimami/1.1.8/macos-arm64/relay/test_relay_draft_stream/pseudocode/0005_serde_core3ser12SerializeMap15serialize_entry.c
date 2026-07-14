// mac 1.1.8 test_relay_draft_stream node va=0x1003bd500 depth=2
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::h36b6fbe26879c162(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 **v8; // r15
  unsigned __int64 *v9; // r13
  __int64 v10; // rax
  unsigned __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rsi

  if ( *(_BYTE *)a1 == 1 ) /*0x1003bd514*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003bd5b0*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v8 = *(unsigned __int64 ***)(a1 + 8); /*0x1003bd523*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003bd52b*/
  {
    v9 = *v8; /*0x1003bd52d*/
    v10 = (*v8)[2]; /*0x1003bd530*/
    if ( **v8 == v10 ) /*0x1003bd538*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v9, v10, 1, 1, 1u); /*0x1003bd5f2*/
      v10 = v9[2]; /*0x1003bd5ff*/
    }
    *(_BYTE *)(v9[1] + v10) = 44; /*0x1003bd542*/
    v9[2] = v10 + 1; /*0x1003bd549*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003bd54d*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v8, a2, a2, a3); /*0x1003bd55a*/
  v11 = *v8; /*0x1003bd55f*/
  v12 = (*v8)[2]; /*0x1003bd562*/
  if ( **v8 == v12 ) /*0x1003bd56b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v8, v12, 1, 1, 1u); /*0x1003bd5c8*/
    v12 = v11[2]; /*0x1003bd5cd*/
  }
  *(_BYTE *)(v11[1] + v12) = 58; /*0x1003bd572*/
  v13 = v12 + 1; /*0x1003bd576*/
  v11[2] = v13; /*0x1003bd579*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v8, v13, a4, a5); /*0x1003bd587*/
  return 0; /*0x1003bd58e*/
}