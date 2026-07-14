// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x1003bf2a0 depth=1
// serde_core3ser12SerializeMap15serialize_entry
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::h544b962a0ac81076(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 **v6; // r14
  unsigned __int64 *v7; // r12
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi

  if ( *(_BYTE *)a1 == 1 ) /*0x1003bf2b1*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003bf37e*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v6 = *(unsigned __int64 ***)(a1 + 8); /*0x1003bf2bd*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0x1003bf2c5*/
  {
    v7 = *v6; /*0x1003bf2c7*/
    v8 = (*v6)[2]; /*0x1003bf2ca*/
    if ( **v6 == v8 ) /*0x1003bf2d3*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v7, v8, 1, 1, 1u); /*0x1003bf3c1*/
      v8 = v7[2]; /*0x1003bf3cd*/
    }
    *(_BYTE *)(v7[1] + v8) = 44; /*0x1003bf2de*/
    v7[2] = v8 + 1; /*0x1003bf2e5*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003bf2ea*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, a2, a2, a3); /*0x1003bf2f7*/
  v9 = *v6; /*0x1003bf2fc*/
  v10 = (*v6)[2]; /*0x1003bf2ff*/
  if ( **v6 == v10 ) /*0x1003bf306*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v10, 1, 1, 1u); /*0x1003bf396*/
    v10 = v9[2]; /*0x1003bf39b*/
  }
  *(_BYTE *)(v9[1] + v10) = 58; /*0x1003bf30c*/
  v11 = v10 + 1; /*0x1003bf310*/
  v9[2] = v11; /*0x1003bf313*/
  if ( __OFSUB__(0, *a4) ) /*0x1003bf319*/
  {
    v12 = *v6; /*0x1003bf31e*/
    v13 = (*v6)[2]; /*0x1003bf324*/
    if ( **v6 - v13 <= 3 ) /*0x1003bf32f*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v6, v13, 4, 1, 1u); /*0x1003bf3ea*/
      v13 = v12[2]; /*0x1003bf3ef*/
    }
    *(_DWORD *)(v12[1] + v13) = 1819047278; /*0x1003bf339*/
    v12[2] = v13 + 4; /*0x1003bf344*/
  }
  else
  {
    serde_json::ser::format_escaped_str::h29316bfe5256814d(v6, v11, a4[1], a4[2]); /*0x1003bf355*/
  }
  return 0; /*0x1003bf360*/
}