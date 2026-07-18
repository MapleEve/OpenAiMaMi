// mac 1.2.2 NEW codexmate_lib4core5relay16codex_diagnostic27fix_le 0x100a47ad0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(
        __int64 **a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12

  result = 2; /*0x100a47ae2*/
  if ( (unsigned __int64)*a1 >= 2 ) /*0x100a47ae7*/
    result = (__int64)*a1 - 2; /*0x100a47ae7*/
  switch ( result ) /*0x100a47aff*/
  {
    case 0LL: /*0x100a47aff*/
      result = (__int64)a1[1]; /*0x100a47b29*/
      if ( ((_DWORD)a1[1] & 3) == 1 ) /*0x100a47b35*/
      {
        v3 = *(_QWORD *)(result + 7); /*0x100a47b3f*/
        if ( *(_QWORD *)v3 ) /*0x100a47b43*/
          (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(result - 1)); /*0x100a47b4f*/
        if ( *(_QWORD *)(v3 + 8) ) /*0x100a47b51*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a47b63*/
        goto LABEL_28; /*0x100a47b63*/
      }
      break; /*0x100a47b63*/
    case 1LL: /*0x100a47aff*/
      result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(a1 + 1); /*0x100a47b7e*/
      break; /*0x100a47b7e*/
    case 2LL: /*0x100a47aff*/
      result = core::ptr::drop_in_place$LT$toml..de..Error$GT$::hbe09afeafa1e8e81(); /*0x100a47b24*/
      break; /*0x100a47b24*/
    case 3LL: /*0x100a47aff*/
      v2 = (signed __int64)a1[1]; /*0x100a47b83*/
      result = 0x8000000000000005LL; /*0x100a47b91*/
      if ( v2 >= (__int64)0x8000000000000005LL ) /*0x100a47b98*/
        goto LABEL_5; /*0x100a47b98*/
      break; /*0x100a47b98*/
    case 4LL: /*0x100a47aff*/
      v4 = a1[1]; /*0x100a47ba7*/
      if ( *((_WORD *)v4 + 44) == 3 ) /*0x100a47bb0*/
      {
        v5 = v4[12]; /*0x100a47bb2*/
        if ( v5 ) /*0x100a47bb9*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 32))(v4 + 15, v4[13], v4[14]); /*0x100a47bc7*/
      }
      if ( v4[16] ) /*0x100a47bca*/
      {
        v6 = v4[17]; /*0x100a47bd6*/
        if ( *(_QWORD *)v6 ) /*0x100a47bdd*/
          (*(void (__fastcall **)(__int64))v6)(v4[16]); /*0x100a47be9*/
        if ( *(_QWORD *)(v6 + 8) ) /*0x100a47beb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a47bfd*/
      }
      if ( !__OFSUB__(-*v4, 1) && *v4 ) /*0x100a47c05*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a47c18*/
      goto LABEL_28; /*0x100a47c18*/
    default:
      v2 = (signed __int64)a1[1]; /*0x100a47b01*/
LABEL_5:
      if ( v2 ) /*0x100a47b08*/
LABEL_28:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a47c2a*/
      break; /*0x100a47c32*/
  }
  return result; /*0x100a47b1c*/
}