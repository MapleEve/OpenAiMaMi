// mac 1.2.2 NEW set_voice_overlay_style 0x10068bb50 d=2
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(
        _QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // rbx

  result = 2; /*0x10068bb65*/
  if ( *a1 >= 2u ) /*0x10068bb6a*/
    result = *a1 - 2LL; /*0x10068bb6a*/
  switch ( result ) /*0x10068bb82*/
  {
    case 0LL: /*0x10068bb82*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 1); /*0x10068bc40*/
    case 1LL: /*0x10068bb82*/
      v5 = (_QWORD *)a1[1]; /*0x10068bc45*/
      if ( *v5 == 1 ) /*0x10068bc50*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(v5 + 1); /*0x10068bcac*/
      }
      else if ( !*v5 ) /*0x10068bc49*/
      {
        if ( v5[2] ) /*0x10068bc57*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bc69*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bc6e*/
    case 2LL: /*0x10068bb82*/
      if ( a1[3] ) /*0x10068bb9f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bbb1*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x10068bbba*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bbcd*/
      v3 = a1[8]; /*0x10068bbd6*/
      if ( v3 ) /*0x10068bbdd*/
      {
        v4 = a1[7] + 8LL; /*0x10068bbdf*/
        do /*0x10068bbf7*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x10068bbf9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bc0c*/
          v4 += 24; /*0x10068bbf0*/
          --v3; /*0x10068bbf4*/
        }
        while ( v3 ); /*0x10068bbf7*/
      }
      result = a1[6]; /*0x10068bc13*/
      if ( result ) /*0x10068bc1a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bc1a*/
      return result; /*0x10068bc1a*/
    case 3LL: /*0x10068bb82*/
      v2 = a1[1]; /*0x10068bc70*/
      result = 0x8000000000000005LL; /*0x10068bc7e*/
      if ( v2 < (__int64)0x8000000000000005LL ) /*0x10068bc85*/
        return result; /*0x10068bc85*/
      goto LABEL_5; /*0x10068bc85*/
    case 4LL: /*0x10068bb82*/
      return core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hb1e48998f69d71f3(a1 + 1); /*0x10068bca3*/
    default:
      v2 = a1[1]; /*0x10068bb84*/
LABEL_5:
      if ( v2 ) /*0x10068bb8b*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10068bcbe*/
      return result;
  }
}