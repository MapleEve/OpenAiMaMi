// IDA Hex-Rays decompile evidence
// addr: 0x1000ed850
// cluster: commands
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..skills..delete_skill_backup..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0ef7b694118a9ebd(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  double result; // xmm0_8
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi

  if ( *(_BYTE *)(a1 + 792) ) /*0x1000ed85a*/
  {
    if ( *(_BYTE *)(a1 + 792) == 3 ) /*0x1000ed86c*/
    {
      v1 = *(_QWORD *)(a1 + 784); /*0x1000ed872*/
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v1) ) /*0x1000ed87c*/
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v1); /*0x1000ed888*/
      v2 = *(_QWORD *)(a1 + 40); /*0x1000ed88d*/
      if ( v2 ) /*0x1000ed894*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 48), v2, 1); /*0x1000ed89f*/
      v4 = *(_QWORD *)(a1 + 64); /*0x1000ed8a4*/
      if ( v4 ) /*0x1000ed8ab*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 72), v4, 1); /*0x1000ed8b6*/
      v5 = *(_QWORD *)(a1 + 88); /*0x1000ed8bb*/
      if ( v5 ) /*0x1000ed8c2*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 96), v5, 1); /*0x1000ed8cd*/
      v6 = *(_QWORD *)(a1 + 112); /*0x1000ed8d2*/
      if ( v6 ) /*0x1000ed8d9*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 120), v6, 1); /*0x1000ed8e4*/
      v7 = *(_QWORD *)(a1 + 136); /*0x1000ed8e9*/
      if ( v7 ) /*0x1000ed8f3*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 144), v7, 1); /*0x1000ed901*/
      if ( !__OFSUB__(-*(_QWORD *)(a1 + 760), 1) && *(_QWORD *)(a1 + 760) ) /*0x1000ed90d*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 768), *(_QWORD *)(a1 + 760), 1); /*0x1000ed923*/
      v8 = *(_QWORD *)(a1 + 160); /*0x1000ed928*/
      if ( v8 ) /*0x1000ed932*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 168), v8, 1); /*0x1000ed940*/
      v9 = *(_QWORD *)(a1 + 184); /*0x1000ed945*/
      if ( v9 ) /*0x1000ed94f*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 192), v9, 1); /*0x1000ed95d*/
      v10 = *(_QWORD *)(a1 + 208); /*0x1000ed962*/
      if ( v10 ) /*0x1000ed96c*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 216), v10, 1); /*0x1000ed97a*/
      v11 = *(_QWORD *)(a1 + 232); /*0x1000ed97f*/
      if ( v11 ) /*0x1000ed989*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 240), v11, 1); /*0x1000ed997*/
      v12 = *(_QWORD *)(a1 + 256); /*0x1000ed99c*/
      if ( v12 ) /*0x1000ed9a6*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 264), v12, 1); /*0x1000ed9b4*/
      v13 = *(_QWORD *)(a1 + 280); /*0x1000ed9b9*/
      if ( v13 ) /*0x1000ed9c3*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 288), v13, 1); /*0x1000ed9d1*/
      v14 = *(_QWORD *)(a1 + 304); /*0x1000ed9d6*/
      if ( v14 ) /*0x1000ed9e0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 312), v14, 1); /*0x1000ed9ee*/
      v15 = *(_QWORD *)(a1 + 328); /*0x1000ed9f3*/
      if ( v15 ) /*0x1000ed9fd*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 336), v15, 1); /*0x1000eda0b*/
      v16 = *(_QWORD *)(a1 + 352); /*0x1000eda10*/
      if ( v16 ) /*0x1000eda1a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 360), v16, 1); /*0x1000eda28*/
      v17 = *(_QWORD *)(a1 + 400); /*0x1000eda2d*/
      if ( v17 ) /*0x1000eda37*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 408), v17, 1); /*0x1000eda45*/
      v18 = *(_QWORD *)(a1 + 424); /*0x1000eda4a*/
      if ( v18 ) /*0x1000eda54*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 432), v18, 1); /*0x1000eda62*/
      v19 = *(_QWORD *)(a1 + 448); /*0x1000eda67*/
      if ( v19 ) /*0x1000eda71*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 456), v19, 1); /*0x1000eda7f*/
      v20 = *(_QWORD *)(a1 + 472); /*0x1000eda84*/
      if ( v20 ) /*0x1000eda8e*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 480), v20, 1); /*0x1000eda9c*/
      v21 = *(_QWORD *)(a1 + 496); /*0x1000edaa1*/
      if ( v21 ) /*0x1000edaab*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 504), v21, 1); /*0x1000edab9*/
      v22 = *(_QWORD *)(a1 + 520); /*0x1000edabe*/
      if ( v22 ) /*0x1000edac8*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 528), v22, 1); /*0x1000edad6*/
      v23 = *(_QWORD *)(a1 + 544); /*0x1000edadb*/
      if ( v23 ) /*0x1000edae5*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 552), v23, 1); /*0x1000edaf3*/
      v24 = *(_QWORD *)(a1 + 568); /*0x1000edaf8*/
      if ( v24 ) /*0x1000edb02*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 576), v24, 1); /*0x1000edb10*/
      v25 = *(_QWORD *)(a1 + 592); /*0x1000edb15*/
      if ( v25 ) /*0x1000edb1f*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 600), v25, 1); /*0x1000edb2d*/
      v26 = *(_QWORD *)(a1 + 616); /*0x1000edb32*/
      if ( v26 ) /*0x1000edb3c*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 624), v26, 1); /*0x1000edb4a*/
      v27 = *(_QWORD *)(a1 + 640); /*0x1000edb4f*/
      if ( v27 ) /*0x1000edb59*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 648), v27, 1); /*0x1000edb67*/
      v28 = *(_QWORD *)(a1 + 664); /*0x1000edb6c*/
      if ( v28 ) /*0x1000edb76*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 672), v28, 1); /*0x1000edb84*/
      v29 = *(_QWORD *)(a1 + 688); /*0x1000edb89*/
      if ( v29 ) /*0x1000edb93*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 696), v29, 1); /*0x1000edba1*/
      v30 = *(_QWORD *)(a1 + 712); /*0x1000edba6*/
      if ( v30 ) /*0x1000edbb0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 720), v30, 1); /*0x1000edbbe*/
      v31 = *(_QWORD *)(a1 + 736); /*0x1000edbc3*/
      if ( v31 ) /*0x1000edbcd*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 744), v31, 1); /*0x1000edbdb*/
      *(_BYTE *)(a1 + 793) = 0; /*0x1000edbe0*/
    }
  }
  else if ( *(_QWORD *)a1 ) /*0x1000edbe9*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1); /*0x1000edbfe*/
  }
  return result; /*0x1000edbfa*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1012b8b80  __ZN5tokio7runtime4task3raw7RawTask21drop_join_handle_slow17h992aae8c362d2517E
// 0x1012ba4a0  __ZN5tokio7runtime4task5state5State21drop_join_handle_fast17h261ebd480c6ca3c1E
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
