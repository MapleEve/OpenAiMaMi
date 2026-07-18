// mac 1.2.2 NEW upload_debug_report 0x10011b0d0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(
        _QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r12

  result = 2; /*0x10011b0e5*/
  if ( *a1 >= 2u ) /*0x10011b0ea*/
    result = *a1 - 2LL; /*0x10011b0ea*/
  switch ( result ) /*0x10011b102*/
  {
    case 0LL: /*0x10011b102*/
      result = a1[1]; /*0x10011b1b2*/
      if ( (a1[1] & 3) == 1 ) /*0x10011b1be*/
      {
        v5 = *(_QWORD *)(result + 7); /*0x10011b1c8*/
        if ( *(_QWORD *)v5 ) /*0x10011b1cc*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(result - 1)); /*0x10011b1d8*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x10011b1da*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10011b1ec*/
        goto LABEL_24; /*0x10011b1ec*/
      }
      break; /*0x10011b1ec*/
    case 1LL: /*0x10011b102*/
      result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(a1 + 1); /*0x10011b21a*/
      break; /*0x10011b21a*/
    case 2LL: /*0x10011b102*/
      if ( a1[3] ) /*0x10011b11f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10011b131*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x10011b13a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10011b14d*/
      v3 = a1[8]; /*0x10011b156*/
      if ( v3 ) /*0x10011b15d*/
      {
        v4 = a1[7] + 8LL; /*0x10011b15f*/
        do /*0x10011b177*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x10011b179*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10011b18c*/
          v4 += 24; /*0x10011b170*/
          --v3; /*0x10011b174*/
        }
        while ( v3 ); /*0x10011b177*/
      }
      result = a1[6]; /*0x10011b193*/
      if ( result ) /*0x10011b19a*/
        goto LABEL_24; /*0x10011b19a*/
      break; /*0x10011b19a*/
    case 3LL: /*0x10011b102*/
      v2 = a1[1]; /*0x10011b21f*/
      result = 0x8000000000000005LL; /*0x10011b22d*/
      if ( v2 >= (__int64)0x8000000000000005LL ) /*0x10011b234*/
        goto LABEL_5; /*0x10011b234*/
      break; /*0x10011b234*/
    case 4LL: /*0x10011b102*/
      result = core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h355bb184b75c83d9(a1[1]); /*0x10011b24f*/
      break; /*0x10011b24f*/
    default:
      v2 = a1[1]; /*0x10011b104*/
LABEL_5:
      if ( v2 ) /*0x10011b10b*/
LABEL_24:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10011b1fe*/
      break; /*0x10011b206*/
  }
  return result; /*0x10011b1fe*/
}