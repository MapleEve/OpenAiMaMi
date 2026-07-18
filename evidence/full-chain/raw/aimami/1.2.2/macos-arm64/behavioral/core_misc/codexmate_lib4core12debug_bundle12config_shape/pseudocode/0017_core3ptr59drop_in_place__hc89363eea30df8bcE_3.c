// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x100453650 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(
        _QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r12

  result = 2; /*0x100453665*/
  if ( *a1 >= 2u ) /*0x10045366a*/
    result = *a1 - 2LL; /*0x10045366a*/
  switch ( result ) /*0x100453682*/
  {
    case 0LL: /*0x100453682*/
      result = a1[1]; /*0x100453732*/
      if ( (a1[1] & 3) == 1 ) /*0x10045373e*/
      {
        v5 = *(_QWORD *)(result + 7); /*0x100453748*/
        if ( *(_QWORD *)v5 ) /*0x10045374c*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(result - 1)); /*0x100453758*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x10045375a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10045376c*/
        goto LABEL_24; /*0x10045376c*/
      }
      break; /*0x10045376c*/
    case 1LL: /*0x100453682*/
      result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(a1 + 1); /*0x10045379a*/
      break; /*0x10045379a*/
    case 2LL: /*0x100453682*/
      if ( a1[3] ) /*0x10045369f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004536b1*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x1004536ba*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004536cd*/
      v3 = a1[8]; /*0x1004536d6*/
      if ( v3 ) /*0x1004536dd*/
      {
        v4 = a1[7] + 8LL; /*0x1004536df*/
        do /*0x1004536f7*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x1004536f9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10045370c*/
          v4 += 24; /*0x1004536f0*/
          --v3; /*0x1004536f4*/
        }
        while ( v3 ); /*0x1004536f7*/
      }
      result = a1[6]; /*0x100453713*/
      if ( result ) /*0x10045371a*/
        goto LABEL_24; /*0x10045371a*/
      break; /*0x10045371a*/
    case 3LL: /*0x100453682*/
      v2 = a1[1]; /*0x10045379f*/
      result = 0x8000000000000005LL; /*0x1004537ad*/
      if ( v2 >= (__int64)0x8000000000000005LL ) /*0x1004537b4*/
        goto LABEL_5; /*0x1004537b4*/
      break; /*0x1004537b4*/
    case 4LL: /*0x100453682*/
      result = core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h355bb184b75c83d9(a1 + 1); /*0x1004537d2*/
      break; /*0x1004537d2*/
    default:
      v2 = a1[1]; /*0x100453684*/
LABEL_5:
      if ( v2 ) /*0x10045368b*/
LABEL_24:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10045377e*/
      break; /*0x100453786*/
  }
  return result; /*0x10045377e*/
}