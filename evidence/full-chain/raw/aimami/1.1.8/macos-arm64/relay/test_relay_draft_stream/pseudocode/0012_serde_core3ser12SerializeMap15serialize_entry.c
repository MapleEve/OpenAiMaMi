// mac 1.1.8 test_relay_draft_stream node va=0x1003c61f0 depth=2
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::ha72edab222504d4d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 **v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v15; // r15
  __int64 v16; // r12

  if ( *(_BYTE *)a1 == 1 ) /*0x1003c6201*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003c629b*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v6 = *(unsigned __int64 ***)(a1 + 8); /*0x1003c620d*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003c6215*/
  {
    v7 = *v6; /*0x1003c6217*/
    v8 = (*v6)[2]; /*0x1003c621a*/
    if ( **v6 == v8 ) /*0x1003c6223*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v7, v8, 1, 1, 1u); /*0x1003c62e7*/
      v8 = v7[2]; /*0x1003c62f3*/
    }
    *(_BYTE *)(v7[1] + v8) = 44; /*0x1003c622e*/
    v7[2] = v8 + 1; /*0x1003c6235*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003c623a*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, a2, a2, a3); /*0x1003c6247*/
  v9 = *(_QWORD *)(a4 + 8); /*0x1003c624c*/
  v10 = *(_QWORD *)(a4 + 16); /*0x1003c6250*/
  v11 = *v6; /*0x1003c6254*/
  v12 = (*v6)[2]; /*0x1003c6257*/
  if ( **v6 == v12 ) /*0x1003c625e*/
  {
    v15 = v9; /*0x1003c62a0*/
    v16 = v10; /*0x1003c62a8*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v12, 1, 1, 1u); /*0x1003c62b9*/
    v10 = v16; /*0x1003c62be*/
    v9 = v15; /*0x1003c62c1*/
    v12 = v11[2]; /*0x1003c62c4*/
  }
  *(_BYTE *)(v11[1] + v12) = 58; /*0x1003c6264*/
  v13 = v12 + 1; /*0x1003c6268*/
  v11[2] = v13; /*0x1003c626b*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, v13, v9, v10); /*0x1003c6272*/
  return 0; /*0x1003c627d*/
}