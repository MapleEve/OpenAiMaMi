// mac 1.1.8 test_relay_draft_stream node va=0x1003c8d10 depth=2
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::hd3c5ce374947300a(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  unsigned __int64 **v6; // rbx
  unsigned __int64 *v7; // r12
  __int64 v8; // rax
  char v9; // r15
  unsigned __int64 *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 v16; // rax

  if ( *(_BYTE *)a1 == 1 ) /*0x1003c8d21*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003c8e0d*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v6 = *(unsigned __int64 ***)(a1 + 8); /*0x1003c8d2d*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003c8d35*/
  {
    v7 = *v6; /*0x1003c8d37*/
    v8 = (*v6)[2]; /*0x1003c8d3a*/
    if ( **v6 == v8 ) /*0x1003c8d43*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v7, v8, 1, 1, 1u); /*0x1003c8e50*/
      v8 = v7[2]; /*0x1003c8e5c*/
    }
    *(_BYTE *)(v7[1] + v8) = 44; /*0x1003c8d4e*/
    v7[2] = v8 + 1; /*0x1003c8d55*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003c8d5a*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, a2, a2, a3); /*0x1003c8d67*/
  v9 = *a4; /*0x1003c8d6c*/
  v10 = *v6; /*0x1003c8d70*/
  v11 = (*v6)[2]; /*0x1003c8d73*/
  if ( **v6 == v11 ) /*0x1003c8d7a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v11, 1, 1, 1u); /*0x1003c8e25*/
    v11 = v10[2]; /*0x1003c8e2a*/
  }
  *(_BYTE *)(v10[1] + v11) = 58; /*0x1003c8d84*/
  v10[2] = v11 + 1; /*0x1003c8d8b*/
  v12 = *v6; /*0x1003c8d8f*/
  if ( (v9 & 1) != 0 ) /*0x1003c8d96*/
  {
    v13 = v12[2]; /*0x1003c8d9b*/
    if ( *v12 - v13 <= 3 ) /*0x1003c8da6*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v12, v13, 4, 1, 1u); /*0x1003c8e79*/
      v13 = v12[2]; /*0x1003c8e7e*/
    }
    *(_DWORD *)(v12[1] + v13) = 1702195828; /*0x1003c8db0*/
    v14 = v13 + 4; /*0x1003c8db7*/
  }
  else
  {
    v15 = v12[2]; /*0x1003c8dc0*/
    if ( *v12 - v15 <= 4 ) /*0x1003c8dcb*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v12, v15, 5, 1, 1u); /*0x1003c8e9a*/
      v15 = v12[2]; /*0x1003c8e9f*/
    }
    v16 = v12[1]; /*0x1003c8dd1*/
    *(_BYTE *)(v16 + v15 + 4) = 101; /*0x1003c8dd5*/
    *(_DWORD *)(v16 + v15) = 1936482662; /*0x1003c8dda*/
    v14 = v15 + 5; /*0x1003c8de1*/
  }
  v12[2] = v14; /*0x1003c8de5*/
  return 0; /*0x1003c8def*/
}