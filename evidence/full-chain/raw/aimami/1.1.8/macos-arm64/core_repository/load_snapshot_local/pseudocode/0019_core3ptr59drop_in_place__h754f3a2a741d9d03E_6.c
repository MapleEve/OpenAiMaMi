// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x10054a1d0 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(
        _QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // rbx

  result = 2; /*0x10054a1e5*/
  if ( *a1 >= 2u ) /*0x10054a1ea*/
    result = *a1 - 2LL; /*0x10054a1ea*/
  switch ( result ) /*0x10054a202*/
  {
    case 0LL: /*0x10054a202*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(a1 + 1); /*0x10054a2c0*/
    case 1LL: /*0x10054a202*/
      v5 = (_QWORD *)a1[1]; /*0x10054a2c5*/
      if ( *v5 == 1 ) /*0x10054a2d0*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v5 + 1); /*0x10054a32c*/
      }
      else if ( !*v5 ) /*0x10054a2c9*/
      {
        if ( v5[2] ) /*0x10054a2d7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a2e9*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a2ee*/
    case 2LL: /*0x10054a202*/
      if ( a1[3] ) /*0x10054a21f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a231*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x10054a23a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a24d*/
      v3 = a1[8]; /*0x10054a256*/
      if ( v3 ) /*0x10054a25d*/
      {
        v4 = a1[7] + 8LL; /*0x10054a25f*/
        do /*0x10054a277*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x10054a279*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a28c*/
          v4 += 24; /*0x10054a270*/
          --v3; /*0x10054a274*/
        }
        while ( v3 ); /*0x10054a277*/
      }
      result = a1[6]; /*0x10054a293*/
      if ( result ) /*0x10054a29a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a29a*/
      return result; /*0x10054a29a*/
    case 3LL: /*0x10054a202*/
      v2 = a1[1]; /*0x10054a2f0*/
      result = 0x8000000000000005LL; /*0x10054a2fe*/
      if ( v2 < (__int64)0x8000000000000005LL ) /*0x10054a305*/
        return result; /*0x10054a305*/
      goto LABEL_5; /*0x10054a305*/
    case 4LL: /*0x10054a202*/
      return core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h2e8602d9edcfb6d8(a1 + 1); /*0x10054a323*/
    default:
      v2 = a1[1]; /*0x10054a204*/
LABEL_5:
      if ( v2 ) /*0x10054a20b*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a33e*/
      return result;
  }
}