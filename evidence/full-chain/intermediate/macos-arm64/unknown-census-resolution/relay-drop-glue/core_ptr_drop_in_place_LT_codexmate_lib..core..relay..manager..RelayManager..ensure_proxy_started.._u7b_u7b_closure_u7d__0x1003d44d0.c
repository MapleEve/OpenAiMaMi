// IDA Hex-Rays decompile evidence
// addr: 0x1003d44d0
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..RelayManager..ensure_proxy_started..$u7b$$u7b$closure$u7d$$u7d$$GT$::heeb7b61bb539535b(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rsi

  result = *(unsigned __int8 *)(a1 + 244); /*0x1003d44e1*/
  if ( *(_BYTE *)(a1 + 244) ) /*0x1003d44e1*/
  {
    if ( (_DWORD)result == 3 ) /*0x1003d44ef*/
    {
      result = *(unsigned __int8 *)(a1 + 228); /*0x1003d44f5*/
      if ( (_DWORD)result == 3 ) /*0x1003d44ff*/
      {
        if ( *(_BYTE *)(a1 + 223) == 3 ) /*0x1003d4599*/
        {
          if ( *(_BYTE *)(a1 + 208) == 3 && *(_WORD *)(a1 + 176) == 3 ) /*0x1003d45b0*/
          {
            v4 = *(_QWORD *)(a1 + 184); /*0x1003d45b2*/
            if ( (*(_DWORD *)(a1 + 184) & 3) == 1 ) /*0x1003d45c1*/
            {
              v5 = v4 - 1; /*0x1003d45c3*/
              v6 = *(_QWORD *)(v4 - 1); /*0x1003d45c7*/
              v7 = *(_QWORD *)(v4 + 7); /*0x1003d45cb*/
              if ( *(_QWORD *)v7 ) /*0x1003d45cf*/
                (*(void (__fastcall **)(__int64))v7)(v6); /*0x1003d45db*/
              v8 = *(_QWORD *)(v7 + 8); /*0x1003d45dd*/
              if ( v8 ) /*0x1003d45e4*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1003d45ed*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x1003d45ff*/
            }
          }
          v9 = *(_QWORD *)(a1 + 72); /*0x1003d4604*/
          if ( v9 ) /*0x1003d460b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 56), 2 * v9, 2); /*0x1003d4619*/
          if ( !__OFSUB__(-*(_QWORD *)(a1 + 120), 1) && *(_QWORD *)(a1 + 120) ) /*0x1003d4622*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 120), 1); /*0x1003d4638*/
          *(_BYTE *)(a1 + 222) = 0; /*0x1003d463d*/
        }
        result = *(_QWORD *)(a1 + 48); /*0x1003d4644*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)result) ) /*0x1003d4648*/
          result = alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(a1 + 48); /*0x1003d4652*/
        *(_DWORD *)(a1 + 232) = 0; /*0x1003d4657*/
        *(_DWORD *)(a1 + 229) = 0; /*0x1003d4661*/
      }
      else if ( !*(_BYTE *)(a1 + 228) ) /*0x1003d44f5*/
      {
        v3 = a1 + 24; /*0x1003d450d*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 24)) ) /*0x1003d4514*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h271a25dd80f4e2ed(v3); /*0x1003d451a*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x1003d4523*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h751c7976264be74c(a1 + 32); /*0x1003d452d*/
        result = *(_QWORD *)(a1 + 40); /*0x1003d4532*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)result) ) /*0x1003d4536*/
          return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6be3d0f96c4a6214(a1 + 40); /*0x1003d4544*/
      }
    }
  }
  else
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)a1) ) /*0x1003d4549*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h271a25dd80f4e2ed(a1); /*0x1003d4552*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 8)) ) /*0x1003d455b*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h751c7976264be74c(a1 + 8); /*0x1003d4565*/
    result = *(_QWORD *)(a1 + 16); /*0x1003d456a*/
    if ( !_InterlockedDecrement64((volatile signed __int64 *)result) ) /*0x1003d456e*/
      return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6be3d0f96c4a6214(a1 + 16); /*0x1003d458d*/
  }
  return result; /*0x1003d4583*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100c53f30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h130b3c1fab17572eE
// 0x100769b40  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h271a25dd80f4e2edE
// 0x10076ad10  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h751c7976264be74cE
// 0x10076abf0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h6be3d0f96c4a6214E
