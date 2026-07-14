// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1005ee440 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(
        __int64 **a1)
{
  __int64 result; // rax
  signed __int64 v2; // rsi
  __int64 *v3; // r15
  __int64 v4; // r12
  __int64 v5; // r12

  result = 2; /*0x1005ee455*/
  if ( (unsigned __int64)*a1 >= 2 ) /*0x1005ee45a*/
    result = (__int64)*a1 - 2; /*0x1005ee45a*/
  switch ( result ) /*0x1005ee472*/
  {
    case 0LL: /*0x1005ee472*/
      result = (__int64)a1[1]; /*0x1005ee522*/
      if ( ((_DWORD)a1[1] & 3) == 1 ) /*0x1005ee52e*/
      {
        v5 = *(_QWORD *)(result + 7); /*0x1005ee538*/
        if ( *(_QWORD *)v5 ) /*0x1005ee53c*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(result - 1)); /*0x1005ee548*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x1005ee54a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ee55c*/
        goto LABEL_24; /*0x1005ee55c*/
      }
      break; /*0x1005ee55c*/
    case 1LL: /*0x1005ee472*/
      result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1 + 1); /*0x1005ee58a*/
      break; /*0x1005ee58a*/
    case 2LL: /*0x1005ee472*/
      if ( a1[3] ) /*0x1005ee48f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ee4a1*/
      if ( !__OFSUB__(-(__int64)a1[9], 1) && a1[9] ) /*0x1005ee4aa*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ee4bd*/
      v3 = a1[8]; /*0x1005ee4c6*/
      if ( v3 ) /*0x1005ee4cd*/
      {
        v4 = (__int64)(a1[7] + 1); /*0x1005ee4cf*/
        do /*0x1005ee4e7*/
        {
          if ( *(_QWORD *)(v4 - 8) ) /*0x1005ee4e9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ee4fc*/
          v4 += 24; /*0x1005ee4e0*/
          v3 = (__int64 *)((char *)v3 - 1); /*0x1005ee4e4*/
        }
        while ( v3 ); /*0x1005ee4e7*/
      }
      result = (__int64)a1[6]; /*0x1005ee503*/
      if ( result ) /*0x1005ee50a*/
        goto LABEL_24; /*0x1005ee50a*/
      break; /*0x1005ee50a*/
    case 3LL: /*0x1005ee472*/
      v2 = (signed __int64)a1[1]; /*0x1005ee58f*/
      result = 0x8000000000000005LL; /*0x1005ee59d*/
      if ( v2 >= (__int64)0x8000000000000005LL ) /*0x1005ee5a4*/
        goto LABEL_5; /*0x1005ee5a4*/
      break; /*0x1005ee5a4*/
    case 4LL: /*0x1005ee472*/
      result = core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb((__int64)(a1 + 1)); /*0x1005ee5c2*/
      break; /*0x1005ee5c2*/
    default:
      v2 = (signed __int64)a1[1]; /*0x1005ee474*/
LABEL_5:
      if ( v2 ) /*0x1005ee47b*/
LABEL_24:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ee56e*/
      break; /*0x1005ee576*/
  }
  return result; /*0x1005ee56e*/
}