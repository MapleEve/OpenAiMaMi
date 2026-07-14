// mac 1.1.8 force_kill_codex node va=0x1006e0170 depth=1
// core3ptr59drop_in_place::h754f3a2a741d9d03E_8
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

  result = 2; /*0x1006e0185*/
  if ( *a1 >= 2u ) /*0x1006e018a*/
    result = *a1 - 2LL; /*0x1006e018a*/
  switch ( result ) /*0x1006e01a2*/
  {
    case 0LL: /*0x1006e01a2*/
      return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(a1 + 1); /*0x1006e0260*/
    case 1LL: /*0x1006e01a2*/
      v5 = (_QWORD *)a1[1]; /*0x1006e0265*/
      if ( *v5 == 1 ) /*0x1006e0270*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v5 + 1); /*0x1006e0344*/
      }
      else if ( !*v5 ) /*0x1006e0269*/
      {
        if ( v5[2] ) /*0x1006e027f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0295*/
      }
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e029a*/
    case 2LL: /*0x1006e01a2*/
      if ( a1[3] ) /*0x1006e01bf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e01d1*/
      if ( !__OFSUB__(-a1[9], 1) && a1[9] ) /*0x1006e01da*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e01ed*/
      v3 = a1[8]; /*0x1006e01f6*/
      if ( v3 ) /*0x1006e01fd*/
      {
        v4 = a1[7] + 8LL; /*0x1006e01ff*/
        do /*0x1006e0217*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x1006e0219*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e022c*/
          v4 += 24; /*0x1006e0210*/
          --v3; /*0x1006e0214*/
        }
        while ( v3 ); /*0x1006e0217*/
      }
      result = a1[6]; /*0x1006e0233*/
      if ( result ) /*0x1006e023a*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e023a*/
      return result; /*0x1006e023a*/
    case 3LL: /*0x1006e01a2*/
      v2 = a1[1]; /*0x1006e029f*/
      result = 0x8000000000000005LL; /*0x1006e02ad*/
      if ( v2 < (__int64)0x8000000000000005LL ) /*0x1006e02b4*/
        return result; /*0x1006e02b4*/
      goto LABEL_5; /*0x1006e02b4*/
    case 4LL: /*0x1006e01a2*/
      v6 = a1[1]; /*0x1006e02c3*/
      if ( *(_WORD *)(v6 + 88) == 3 ) /*0x1006e02cc*/
      {
        v7 = *(_QWORD *)(v6 + 96); /*0x1006e02ce*/
        if ( v7 ) /*0x1006e02d5*/
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 32))( /*0x1006e02e3*/
            v6 + 120,
            *(_QWORD *)(v6 + 104),
            *(_QWORD *)(v6 + 112));
      }
      if ( *(_QWORD *)(v6 + 128) ) /*0x1006e02e6*/
      {
        v8 = *(_QWORD *)(v6 + 136); /*0x1006e02f2*/
        if ( *(_QWORD *)v8 ) /*0x1006e02f9*/
          (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v6 + 128)); /*0x1006e0305*/
        if ( *(_QWORD *)(v8 + 8) ) /*0x1006e0307*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0319*/
      }
      if ( !__OFSUB__(-*(_QWORD *)v6, 1) && *(_QWORD *)v6 ) /*0x1006e0321*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0334*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0334*/
    default:
      v2 = a1[1]; /*0x1006e01a4*/
LABEL_5:
      if ( v2 ) /*0x1006e01ab*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e0356*/
      return result;
  }
}