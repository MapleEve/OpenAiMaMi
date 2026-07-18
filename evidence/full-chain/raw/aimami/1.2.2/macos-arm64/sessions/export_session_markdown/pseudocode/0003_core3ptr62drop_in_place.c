// mac 1.2.2 NEW export_session_markdown 0x1008db9d0 d=1
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

  v1 = a1[2]; /*0x1008db9da*/
  if ( v1 ) /*0x1008db9e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[3], v1, 1); /*0x1008db9ec*/
  v2 = a1[5]; /*0x1008db9f1*/
  if ( v2 ) /*0x1008db9f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[6], v2, 1); /*0x1008dba03*/
  result = -a1[8]; /*0x1008dba19*/
  if ( !__OFSUB__(result, 1) && a1[8] ) /*0x1008dba16*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[9], a1[8], 1); /*0x1008dba29*/
  v4 = a1[11]; /*0x1008dba2e*/
  if ( v4 != 0x8000000000000000LL && v4 ) /*0x1008dba3a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[12], v4, 1); /*0x1008dba45*/
  v5 = a1[14]; /*0x1008dba4a*/
  if ( v5 != 0x8000000000000000LL && v5 ) /*0x1008dba56*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[15], v5, 1); /*0x1008dba61*/
  v6 = a1[17]; /*0x1008dba66*/
  if ( v6 != 0x8000000000000000LL && v6 ) /*0x1008dba75*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[18], v6, 1); /*0x1008dba83*/
  v7 = a1[20]; /*0x1008dba88*/
  if ( v7 != 0x8000000000000000LL && v7 ) /*0x1008dba97*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[21], v7, 1); /*0x1008dbaa5*/
  v8 = a1[23]; /*0x1008dbaaa*/
  if ( v8 != 0x8000000000000000LL && v8 ) /*0x1008dbab9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[24], v8, 1); /*0x1008dbac7*/
  v9 = a1[26]; /*0x1008dbacc*/
  if ( v9 != 0x8000000000000000LL && v9 ) /*0x1008dbadb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[27], v9, 1); /*0x1008dbae9*/
  v10 = a1[29]; /*0x1008dbaee*/
  if ( v10 != 0x8000000000000000LL ) /*0x1008dbaf8*/
  {
    if ( v10 ) /*0x1008dbafd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[30], v10, 1); /*0x1008dbb0b*/
    v11 = a1[32]; /*0x1008dbb10*/
    if ( v11 ) /*0x1008dbb1a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[33], v11, 1); /*0x1008dbb28*/
    v12 = a1[35]; /*0x1008dbb2d*/
    if ( v12 != 0x8000000000000000LL ) /*0x1008dbb37*/
    {
      if ( v12 ) /*0x1008dbb3c*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[36], v12, 1); /*0x1008dbb4e*/
    }
  }
  return result; /*0x1008dbb4a*/
}