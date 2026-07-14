// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x100487fc0 depth=2
// core3ptr40drop_in_place::h70cb689e8008b774E_4
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v2; // r15
  __int64 v3; // r15
  __int64 v4; // r12
  void (__fastcall *v5)(__int64); // rax

  result = 10; /*0x100487fde*/
  if ( (__int64)*a1 < 0 ) /*0x100487fe3*/
    result = *a1 ^ 0x8000000000000000LL; /*0x100487fe3*/
  switch ( result ) /*0x100487fff*/
  {
    case 0LL: /*0x100487fff*/
      return core::ptr::drop_in_place$LT$tauri_runtime..Error$GT$::hf083e6b7868b6e53(a1 + 1); /*0x100488104*/
    case 1LL: /*0x100487fff*/
    case 2LL: /*0x100487fff*/
    case 4LL: /*0x100487fff*/
    case 35LL: /*0x100487fff*/
      if ( a1[1] ) /*0x100488001*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100488008*/
      return result; /*0x100488008*/
    case 5LL: /*0x100487fff*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[1]); /*0x1004880cc*/
    case 6LL: /*0x100487fff*/
      result = a1[1]; /*0x100488109*/
      if ( (a1[1] & 3) == 1 ) /*0x100488115*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x10048811f*/
        v4 = *(_QWORD *)(result + 7); /*0x100488123*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x100488127*/
        if ( !*(_QWORD *)v4 ) /*0x10048812e*/
          goto LABEL_46; /*0x10048812e*/
        goto LABEL_45; /*0x10048812e*/
      }
      return result; /*0x100488115*/
    case 7LL: /*0x100487fff*/
      result = a1[1]; /*0x10048813e*/
      if ( (a1[1] & 3) == 1 ) /*0x10048814a*/
      {
        v3 = *(_QWORD *)(result - 1); /*0x100488154*/
        v4 = *(_QWORD *)(result + 7); /*0x100488158*/
        v5 = *(void (__fastcall **)(__int64))v4; /*0x10048815c*/
        if ( !*(_QWORD *)v4 ) /*0x100488163*/
          goto LABEL_46; /*0x100488163*/
        goto LABEL_45; /*0x100488163*/
      }
      return result; /*0x10048814a*/
    case 8LL: /*0x100487fff*/
      return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(a1[5]); /*0x1004881eb*/
    case 9LL: /*0x100487fff*/
      v2 = (__int64 *)a1[2]; /*0x1004881bf*/
      result = *v2; /*0x1004881c3*/
      if ( !*v2 ) /*0x1004881c9*/
        goto LABEL_37; /*0x1004881c9*/
      goto LABEL_36; /*0x1004881c9*/
    case 10LL: /*0x100487fff*/
      if ( *a1 ) /*0x100487fcb*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100488088*/
      if ( a1[3] ) /*0x100488090*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100488097*/
      return result; /*0x100488097*/
    case 12LL: /*0x100487fff*/
      if ( !a1[2] ) /*0x1004880d8*/
        return result; /*0x1004880d8*/
      v2 = (__int64 *)a1[3]; /*0x1004880de*/
      result = *v2; /*0x1004880e2*/
      if ( *v2 ) /*0x1004880e2*/
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[2]); /*0x1004880f1*/
LABEL_37:
      if ( v2[1] ) /*0x1004881d0*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004881d7*/
      return result; /*0x1004881d7*/
    case 17LL: /*0x100487fff*/
      if ( *((_DWORD *)a1 + 2) != 3 && a1[2] ) /*0x1004880ad*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004880b4*/
      return result; /*0x1004880b4*/
    case 18LL: /*0x100487fff*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x100488039*/
        return result; /*0x100488039*/
      result = a1[2]; /*0x10048803f*/
      if ( (a1[2] & 3) != 1 ) /*0x10048804b*/
        return result; /*0x10048804b*/
      v3 = *(_QWORD *)(result - 1); /*0x100488055*/
      v4 = *(_QWORD *)(result + 7); /*0x100488059*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x10048805d*/
      if ( *(_QWORD *)v4 ) /*0x10048805d*/
        goto LABEL_45; /*0x100488064*/
      goto LABEL_46; /*0x100488064*/
    case 19LL: /*0x100487fff*/
      return core::ptr::drop_in_place$LT$tray_icon..error..Error$GT$::h9432a845f1613674(a1[1], a1[2]); /*0x100488186*/
    case 20LL: /*0x100487fff*/
      if ( *((_DWORD *)a1 + 2) < 2u ) /*0x10048818f*/
        return result; /*0x10048818f*/
      result = a1[2]; /*0x100488191*/
      if ( (a1[2] & 3) != 1 ) /*0x10048819d*/
        return result; /*0x10048819d*/
      v3 = *(_QWORD *)(result - 1); /*0x1004881a3*/
      v4 = *(_QWORD *)(result + 7); /*0x1004881a7*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x1004881ab*/
      if ( *(_QWORD *)v4 ) /*0x1004881ab*/
        goto LABEL_45; /*0x1004881b2*/
      goto LABEL_46; /*0x1004881b2*/
    case 24LL: /*0x100487fff*/
      result = a1[1]; /*0x100488201*/
      if ( (a1[1] & 3) != 1 ) /*0x10048820d*/
        return result; /*0x10048820d*/
      v3 = *(_QWORD *)(result - 1); /*0x10048821c*/
      v4 = *(_QWORD *)(result + 7); /*0x100488220*/
      v5 = *(void (__fastcall **)(__int64))v4; /*0x100488224*/
      if ( *(_QWORD *)v4 ) /*0x100488224*/
LABEL_45:
        v5(v3); /*0x10048822d*/
LABEL_46:
      if ( *(_QWORD *)(v4 + 8) ) /*0x100488232*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100488244*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc();
    case 28LL: /*0x100487fff*/
      return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(a1 + 1); /*0x1004881fc*/
    case 31LL: /*0x100487fff*/
      v2 = (__int64 *)a1[2]; /*0x10048801b*/
      result = *v2; /*0x10048801f*/
      if ( *v2 ) /*0x10048801f*/
LABEL_36:
        result = ((__int64 (__fastcall *)(_QWORD))result)(a1[1]); /*0x1004881cb*/
      goto LABEL_37; /*0x1004881ce*/
    default:
      return result;
  }
}