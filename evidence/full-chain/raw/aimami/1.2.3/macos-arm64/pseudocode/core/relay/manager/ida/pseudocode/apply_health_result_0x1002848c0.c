// __ZN13codexmate_lib4core5relay7manager19apply_health_result @ 0x1002848c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::apply_health_result::h3dd80a952877eac0(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-28h]

  *(_QWORD *)(a1 + 200) = a5; /*0x1002848dc*/
  *(_QWORD *)(a1 + 192) = a3; /*0x1002848e3*/
  if ( a2 ) /*0x1002848ec*/
  {
    result = 100; /*0x1002848f2*/
    if ( a3 >= 200 ) /*0x1002848fe*/
    {
      result = 70; /*0x100284900*/
      if ( (unsigned __int64)a3 >= 0x258 ) /*0x10028490c*/
      {
        result = 20; /*0x10028491a*/
        if ( (unsigned __int64)a3 < 0x5DC ) /*0x10028491f*/
          result = 40; /*0x10028491f*/
      }
    }
    *(_DWORD *)(a1 + 224) = result; /*0x100284922*/
    v6 = *(_QWORD *)(a1 + 168); /*0x100284928*/
    if ( v6 != 0x8000000000000000LL && v6 ) /*0x100284937*/
    {
      v7 = a4; /*0x100284945*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 176), v6, 1); /*0x100284948*/
      a4 = v7; /*0x10028494d*/
    }
    *(_QWORD *)(a1 + 168) = 0x8000000000000000LL; /*0x100284950*/
    v8 = *a4; /*0x100284957*/
    if ( *a4 != 0x8000000000000000LL ) /*0x10028495d*/
    {
      if ( v8 ) /*0x100284966*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v8, 1); /*0x100284981*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 0; /*0x100284986*/
    v9 = *a4; /*0x100284990*/
    v10 = 0x8000000000000000LL; /*0x100284993*/
    if ( *a4 != 0x8000000000000000LL ) /*0x100284999*/
    {
      v11 = a4[1]; /*0x10028499b*/
      codexmate_lib::core::relay::models::sanitize_error_for_display::h90525d8d08e331fa(v14, v11, a4[2]); /*0x1002849aa*/
      if ( v9 ) /*0x1002849b2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, 1); /*0x1002849bf*/
      v10 = v14[0]; /*0x1002849c4*/
      v15 = v14[1]; /*0x1002849cc*/
      v16 = v14[2]; /*0x1002849d4*/
    }
    v12 = *(_QWORD *)(a1 + 168); /*0x1002849d8*/
    if ( v12 != 0x8000000000000000LL && v12 ) /*0x1002849e7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 176), v12, 1); /*0x1002849f5*/
    *(_QWORD *)(a1 + 168) = v10; /*0x1002849fa*/
    result = v15; /*0x100284a01*/
    v13 = v16; /*0x100284a05*/
    *(_QWORD *)(a1 + 176) = v15; /*0x100284a09*/
    *(_QWORD *)(a1 + 184) = v13; /*0x100284a10*/
  }
  return result; /*0x100284975*/
}