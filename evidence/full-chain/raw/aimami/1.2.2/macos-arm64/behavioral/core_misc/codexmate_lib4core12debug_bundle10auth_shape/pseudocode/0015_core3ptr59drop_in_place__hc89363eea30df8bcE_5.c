// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1005e74b0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(
        _QWORD *a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12

  result = 2; /*0x1005e74c5*/
  if ( *a1 >= 2u ) /*0x1005e74ca*/
    result = *a1 - 2LL; /*0x1005e74ca*/
  switch ( result ) /*0x1005e74e2*/
  {
    case 0LL: /*0x1005e74e2*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(a1 + 1); /*0x1005e75a0*/
    case 1LL: /*0x1005e74e2*/
      v5 = (_QWORD *)a1[1]; /*0x1005e75a5*/
      if ( *v5 == 1 ) /*0x1005e75b0*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57c295f20edeb01a(v5 + 1); /*0x1005e7684*/
      }
      else if ( !*v5 ) /*0x1005e75a9*/
      {
        if ( v5[2] ) /*0x1005e75bf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e75d5*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e75da*/
    case 2LL: /*0x1005e74e2*/
      if ( a1[3] ) /*0x1005e74ff*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e7511*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x1005e751a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e752d*/
      v3 = a1[8]; /*0x1005e7536*/
      if ( v3 ) /*0x1005e753d*/
      {
        v4 = a1[7] + 8LL; /*0x1005e753f*/
        do /*0x1005e7557*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x1005e7559*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e756c*/
          v4 += 24; /*0x1005e7550*/
          --v3; /*0x1005e7554*/
        }
        while ( v3 ); /*0x1005e7557*/
      }
      result = a1[6]; /*0x1005e7573*/
      if ( result ) /*0x1005e757a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e757a*/
      return result; /*0x1005e757a*/
    case 3LL: /*0x1005e74e2*/
      v2 = a1[1]; /*0x1005e75df*/
      result = 0x8000000000000005LL; /*0x1005e75ed*/
      if ( v2 < (__int64)0x8000000000000005LL ) /*0x1005e75f4*/
        return result; /*0x1005e75f4*/
      goto LABEL_5; /*0x1005e75f4*/
    case 4LL: /*0x1005e74e2*/
      v6 = a1[1]; /*0x1005e7603*/
      if ( *(_WORD *)(v6 + 88) == 3 ) /*0x1005e760c*/
      {
        v7 = *(_QWORD *)(v6 + 96); /*0x1005e760e*/
        if ( v7 ) /*0x1005e7615*/
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 32))( /*0x1005e7623*/
            v6 + 120,
            *(_QWORD *)(v6 + 104),
            *(_QWORD *)(v6 + 112));
      }
      if ( *(_QWORD *)(v6 + 128) ) /*0x1005e7626*/
      {
        v8 = *(_QWORD *)(v6 + 136); /*0x1005e7632*/
        if ( *(_QWORD *)v8 ) /*0x1005e7639*/
          (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v6 + 128)); /*0x1005e7645*/
        if ( *(_QWORD *)(v8 + 8) ) /*0x1005e7647*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e7659*/
      }
      if ( !__OFSUB__(-*(_QWORD *)v6, 1) && *(_QWORD *)v6 ) /*0x1005e7661*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e7674*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e7674*/
    default:
      v2 = a1[1]; /*0x1005e74e4*/
LABEL_5:
      if ( v2 ) /*0x1005e74eb*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005e7696*/
      return result;
  }
}