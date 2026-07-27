// __ZN13codexmate_lib4core10repository10Repository33clear_auto_switch_transient_state @ 0x100a70860 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD v9[12]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v10[12]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v11[16]; // [rsp+C0h] [rbp-80h] BYREF

  codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request::heb8bdf3af6a6b862( /*0x100a7088a*/
    v11,
    *(void **)(a2 + 488),
    *(_QWORD *)(a2 + 496));
  if ( LODWORD(v11[0]) == 11 ) /*0x100a70893*/
    v10[0] = 11; /*0x100a70895*/
  else
    qmemcpy(v10, v11, sizeof(v10)); /*0x100a708b2*/
  v2 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(*(void **)(a2 + 512), *(_QWORD *)(a2 + 520)); /*0x100a708c3*/
  v3 = v2; /*0x100a708c8*/
  if ( v2 ) /*0x100a708ce*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v2) ) /*0x100a708d3*/
    {
      v9[0] = 2; /*0x100a708dc*/
      v9[1] = v3; /*0x100a708e7*/
      goto LABEL_14; /*0x100a708ee*/
    }
    if ( (v3 & 3) == 1 ) /*0x100a708f9*/
    {
      v4 = v3 - 1; /*0x100a708fe*/
      v5 = *(_QWORD *)(v3 - 1); /*0x100a70901*/
      v6 = *(_QWORD *)(v3 + 7); /*0x100a70906*/
      if ( *(_QWORD *)v6 ) /*0x100a7090b*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x100a70917*/
      v7 = *(_QWORD *)(v6 + 8); /*0x100a70919*/
      if ( v7 ) /*0x100a70921*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x100a7092b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x100a7093d*/
    }
  }
  v9[0] = 11; /*0x100a70942*/
LABEL_14:
  result = codexmate_lib::core::repository::combine_optional_errors::h9623860b99f85dca(v11, v10, v9); /*0x100a7094d*/
  if ( LODWORD(v11[0]) == 11 ) /*0x100a70968*/
    *a1 = 11; /*0x100a7096a*/
  else
    qmemcpy(a1, v11, 0x60u); /*0x100a7097f*/
  return result; /*0x100a70982*/
}