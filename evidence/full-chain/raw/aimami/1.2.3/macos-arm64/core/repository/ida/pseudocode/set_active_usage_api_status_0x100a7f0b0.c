// __ZN13codexmate_lib4core10repository27set_active_usage_api_status @ 0x100a7f0b0 | 基线 same-set
double __fastcall codexmate_lib::core::repository::set_active_usage_api_status::h7ec1941553512039(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        _QWORD *a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  double result; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rsi

  if ( a2 < *(_QWORD *)(a1 + 824) && *(_BYTE *)(*(_QWORD *)(a1 + 816) + 352 * a2 + 337) ) /*0x100a7f0d1*/
  {
    *(_BYTE *)(a1 + 1064) = a3; /*0x100a7f0e3*/
    v4 = *(_QWORD *)(a1 + 912); /*0x100a7f0f0*/
    if ( v4 != 0x8000000000000000LL ) /*0x100a7f0fa*/
    {
      if ( v4 ) /*0x100a7f0ff*/
      {
        v5 = a4; /*0x100a7f10d*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 920), v4, 1); /*0x100a7f110*/
        a4 = v5; /*0x100a7f115*/
      }
    }
    *(_QWORD *)(a1 + 928) = a4[2]; /*0x100a7f11c*/
    v7 = *a4; /*0x100a7f120*/
    *(_QWORD *)(a1 + 920) = a4[1]; /*0x100a7f127*/
    *(_QWORD *)(a1 + 912) = v7; /*0x100a7f12b*/
  }
  else
  {
    v8 = *a4; /*0x100a7f134*/
    if ( *a4 != 0x8000000000000000LL && v8 ) /*0x100a7f13f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v8, 1); /*0x100a7f14a*/
  }
  return result; /*0x100a7f14f*/
}