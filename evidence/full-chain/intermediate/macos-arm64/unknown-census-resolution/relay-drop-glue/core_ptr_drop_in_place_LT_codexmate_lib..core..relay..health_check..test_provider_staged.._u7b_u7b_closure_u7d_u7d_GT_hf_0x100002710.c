// IDA Hex-Rays decompile evidence
// addr: 0x100002710
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
void __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..test_provider_staged..$u7b$$u7b$closure$u7d$$u7d$$GT$::hfac50bcad3c68674(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax

  if ( *(_BYTE *)(a1 + 1122) == 3 ) /*0x100002722*/
  {
    switch ( *(_BYTE *)(a1 + 261) ) /*0x10000274c*/
    {
      case 3: /*0x10000274c*/
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x10000275c*/
          *(_QWORD *)(a1 + 264),
          *(_QWORD *)(a1 + 272));
        goto LABEL_19; /*0x100002761*/
      case 4: /*0x10000274c*/
        if ( *(_BYTE *)(a1 + 824) == 3 ) /*0x1000027e8*/
          goto LABEL_18; /*0x1000027e8*/
        if ( !*(_BYTE *)(a1 + 824) ) /*0x1000027de*/
          goto LABEL_15; /*0x1000027ec*/
        goto LABEL_19; /*0x1000027ec*/
      case 5: /*0x10000274c*/
        if ( *(_BYTE *)(a1 + 824) == 3 ) /*0x100002770*/
        {
LABEL_18:
          core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a1 + 400); /*0x100002839*/
        }
        else if ( !*(_BYTE *)(a1 + 824) ) /*0x100002766*/
        {
LABEL_15:
          core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a1 + 264); /*0x1000027ee*/
          v5 = *(_QWORD **)(a1 + 392); /*0x1000027fa*/
          if ( *v5 ) /*0x100002801*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5[1], *v5, 1); /*0x100002812*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 88, 8); /*0x100002824*/
        }
LABEL_19:
        *(_BYTE *)(a1 + 260) = 0; /*0x100002845*/
LABEL_20:
        v6 = *(_QWORD *)(a1 + 1056); /*0x10000284c*/
        if ( v6 ) /*0x100002856*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 1064), v6, 1); /*0x100002864*/
        *(_BYTE *)(a1 + 1121) = 0; /*0x100002869*/
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a1 + 864); /*0x100002877*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a1 + 832); /*0x100002883*/
        v7 = *(_QWORD *)(a1 + 1040); /*0x100002888*/
        if ( v7 ) /*0x100002892*/
        {
          v8 = (_QWORD *)(*(_QWORD *)(a1 + 1032) + 8LL); /*0x10000289b*/
          do /*0x1000028b7*/
          {
            v6 = *(v8 - 1); /*0x1000028b9*/
            if ( v6 ) /*0x1000028c0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v6, 1); /*0x1000028ca*/
            v8 += 3; /*0x1000028b0*/
            --v7; /*0x1000028b4*/
          }
          while ( v7 ); /*0x1000028b7*/
        }
        v9 = *(_QWORD *)(a1 + 1024); /*0x1000028d1*/
        if ( v9 ) /*0x1000028db*/
        {
          v6 = 24 * v9; /*0x1000028e8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 1032), 24 * v9, 8); /*0x1000028f1*/
        }
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1016)) ) /*0x1000028fd*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a1 + 1016, v6); /*0x100002915*/
        break; /*0x100002915*/
      case 6: /*0x10000274c*/
        v1 = *(_QWORD *)(a1 + 272); /*0x10000278c*/
        if ( v1 ) /*0x100002796*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 280), v1, 1); /*0x1000027a4*/
        v2 = *(_QWORD *)(a1 + 320); /*0x1000027a9*/
        v3 = *(_QWORD *)(a1 + 328); /*0x1000027b0*/
        if ( *(_QWORD *)v3 ) /*0x1000027b7*/
          (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a1 + 320)); /*0x1000027c3*/
        v4 = *(_QWORD *)(v3 + 8); /*0x1000027c5*/
        if ( v4 ) /*0x1000027cd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1000027d7*/
        goto LABEL_19; /*0x1000027dc*/
      default:
        goto LABEL_20;
    }
  }
}

// --- refs (callees/xrefs from decompile) ---
// 0x100036980  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E
// 0x10003ab00  __ZN4core3ptr96drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$17he09c21e64e830488E
// 0x10001a300  __ZN4core3ptr226drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$17h0bbfe0f28d08e7ecE
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100035800  __ZN4core3ptr49drop_in_place$LT$http..header..map..HeaderMap$GT$17hb91855b753871e5fE
// 0x100034b70  __ZN4core3ptr45drop_in_place$LT$serde_json..value..Value$GT$17ha4e28df99e528884E
// 0x100eeae30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he53e89bcba3b87c6E
