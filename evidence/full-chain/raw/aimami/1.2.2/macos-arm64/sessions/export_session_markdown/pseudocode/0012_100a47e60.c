// mac 1.2.2 NEW export_session_markdown 0x100a47e60 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h7e88e8834c05a698(
        _QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi

  v1 = a1[2]; /*0x100a47e6a*/
  if ( v1 ) /*0x100a47e71*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[3], v1, 1); /*0x100a47e7c*/
  v2 = a1[5]; /*0x100a47e81*/
  if ( v2 ) /*0x100a47e88*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[6], v2, 1); /*0x100a47e93*/
  result = -a1[8]; /*0x100a47ea9*/
  if ( !__OFSUB__(result, 1) && a1[8] ) /*0x100a47ea6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[9], a1[8], 1); /*0x100a47eb9*/
  v4 = a1[11]; /*0x100a47ebe*/
  if ( v4 != 0x8000000000000000LL && v4 ) /*0x100a47eca*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[12], v4, 1); /*0x100a47ed5*/
  v5 = a1[14]; /*0x100a47eda*/
  if ( v5 != 0x8000000000000000LL && v5 ) /*0x100a47ee6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[15], v5, 1); /*0x100a47ef1*/
  v6 = a1[17]; /*0x100a47ef6*/
  if ( v6 != 0x8000000000000000LL && v6 ) /*0x100a47f05*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[18], v6, 1); /*0x100a47f13*/
  v7 = a1[20]; /*0x100a47f18*/
  if ( v7 != 0x8000000000000000LL && v7 ) /*0x100a47f27*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[21], v7, 1); /*0x100a47f35*/
  v8 = a1[23]; /*0x100a47f3a*/
  if ( v8 != 0x8000000000000000LL && v8 ) /*0x100a47f49*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[24], v8, 1); /*0x100a47f57*/
  v9 = a1[26]; /*0x100a47f5c*/
  if ( v9 != 0x8000000000000000LL && v9 ) /*0x100a47f6b*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[27], v9, 1); /*0x100a47f79*/
  v10 = a1[29]; /*0x100a47f7e*/
  if ( v10 != 0x8000000000000000LL ) /*0x100a47f88*/
  {
    if ( v10 ) /*0x100a47f8d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[30], v10, 1); /*0x100a47f9b*/
    v11 = a1[32]; /*0x100a47fa0*/
    if ( v11 ) /*0x100a47faa*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[33], v11, 1); /*0x100a47fb8*/
    v12 = a1[35]; /*0x100a47fbd*/
    if ( v12 != 0x8000000000000000LL ) /*0x100a47fc7*/
    {
      if ( v12 ) /*0x100a47fcc*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[36], v12, 1); /*0x100a47fde*/
    }
  }
  return result; /*0x100a47fda*/
}