// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x100330840 depth=1
// core3ptr59drop_in_place::h754f3a2a741d9d03E_3
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(
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

  result = 2; /*0x100330855*/
  if ( *a1 >= 2u ) /*0x10033085a*/
    result = *a1 - 2LL; /*0x10033085a*/
  switch ( result ) /*0x100330872*/
  {
    case 0LL: /*0x100330872*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(a1 + 1); /*0x100330930*/
    case 1LL: /*0x100330872*/
      v5 = (_QWORD *)a1[1]; /*0x100330935*/
      if ( *v5 == 1 ) /*0x100330940*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v5 + 1); /*0x100330a14*/
      }
      else if ( !*v5 ) /*0x100330939*/
      {
        if ( v5[2] ) /*0x10033094f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100330965*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10033096a*/
    case 2LL: /*0x100330872*/
      if ( a1[3] ) /*0x10033088f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003308a1*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x1003308aa*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003308bd*/
      v3 = a1[8]; /*0x1003308c6*/
      if ( v3 ) /*0x1003308cd*/
      {
        v4 = a1[7] + 8LL; /*0x1003308cf*/
        do /*0x1003308e7*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x1003308e9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003308fc*/
          v4 += 24; /*0x1003308e0*/
          --v3; /*0x1003308e4*/
        }
        while ( v3 ); /*0x1003308e7*/
      }
      result = a1[6]; /*0x100330903*/
      if ( result ) /*0x10033090a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10033090a*/
      return result; /*0x10033090a*/
    case 3LL: /*0x100330872*/
      v2 = a1[1]; /*0x10033096f*/
      result = 0x8000000000000005LL; /*0x10033097d*/
      if ( v2 < (__int64)0x8000000000000005LL ) /*0x100330984*/
        return result; /*0x100330984*/
      goto LABEL_5; /*0x100330984*/
    case 4LL: /*0x100330872*/
      v6 = a1[1]; /*0x100330993*/
      if ( *(_WORD *)(v6 + 88) == 3 ) /*0x10033099c*/
      {
        v7 = *(_QWORD *)(v6 + 96); /*0x10033099e*/
        if ( v7 ) /*0x1003309a5*/
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 32))( /*0x1003309b3*/
            v6 + 120,
            *(_QWORD *)(v6 + 104),
            *(_QWORD *)(v6 + 112));
      }
      if ( *(_QWORD *)(v6 + 128) ) /*0x1003309b6*/
      {
        v8 = *(_QWORD *)(v6 + 136); /*0x1003309c2*/
        if ( *(_QWORD *)v8 ) /*0x1003309c9*/
          (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v6 + 128)); /*0x1003309d5*/
        if ( *(_QWORD *)(v8 + 8) ) /*0x1003309d7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003309e9*/
      }
      if ( !__OFSUB__(-*(_QWORD *)v6, 1) && *(_QWORD *)v6 ) /*0x1003309f1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100330a04*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100330a04*/
    default:
      v2 = a1[1]; /*0x100330874*/
LABEL_5:
      if ( v2 ) /*0x10033087b*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100330a26*/
      return result;
  }
}