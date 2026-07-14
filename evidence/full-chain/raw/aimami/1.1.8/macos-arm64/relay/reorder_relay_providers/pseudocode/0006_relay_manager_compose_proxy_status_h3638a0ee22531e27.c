// addr=0x1005c1380
// depth 3 (child of persist) — Mutex-guarded read of the live proxy handle; formats 'running: <port>' style status strings via alloc::fmt::format_inner; on absent proxy returns a fixed non-running record.

__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h3638a0ee22531e27(
        __int64 a1,
        _QWORD *a2,
        double a3,
        double a4)
{
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  char v9; // r14
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(); // rcx
  _QWORD v13[2]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v14[3]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  _QWORD *v18; // [rsp+48h] [rbp-38h]
  __int16 v19; // [rsp+56h] [rbp-2Ah]

  v5 = a2[2]; /*0x1005c1394*/
  v6 = (_QWORD *)(v5 + 16); /*0x1005c1398*/
  v7 = *(__int64 **)(v5 + 16); /*0x1005c139d*/
  if ( !v7 ) /*0x1005c13a5*/
    v7 = (__int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v5 + 16); /*0x1005c1453*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c13ab*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1005c13ba*/
  {
    v9 = 0; /*0x1005c13c6*/
    if ( *(_BYTE *)(v5 + 24) ) /*0x1005c13d3*/
      goto LABEL_5; /*0x1005c13db*/
LABEL_9:
    if ( *(_QWORD *)(v5 + 32) ) /*0x1005c1485*/
    {
      v18 = (_QWORD *)(v5 + 16); /*0x1005c1491*/
      v19 = *(_WORD *)(v5 + 40); /*0x1005c14a0*/
      v15 = v5 + 40; /*0x1005c14a4*/
      v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c14af*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, &unk_101226DFC, &v15); /*0x1005c14c2*/
      v13[0] = v5 + 40; /*0x1005c14c7*/
      v13[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c14d2*/
      a2 = &unk_10122B429; /*0x1005c14d6*/
      v7 = &v15; /*0x1005c14dd*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_10122B429, v13); /*0x1005c14e5*/
      *(_BYTE *)(a1 + 74) = 1; /*0x1005c14ea*/
      *(_WORD *)(a1 + 72) = v19; /*0x1005c14f3*/
      v11 = v14[1]; /*0x1005c14fc*/
      *(_QWORD *)a1 = v14[0]; /*0x1005c1500*/
      *(_QWORD *)(a1 + 8) = v11; /*0x1005c1503*/
      *(_QWORD *)(a1 + 16) = v14[2]; /*0x1005c150b*/
      v12 = v16; /*0x1005c1513*/
      *(_QWORD *)(a1 + 24) = v15; /*0x1005c1517*/
      *(_QWORD *)(a1 + 32) = v12; /*0x1005c151b*/
      *(_QWORD *)(a1 + 40) = v17; /*0x1005c1523*/
      *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1005c152b*/
      v6 = v18; /*0x1005c152f*/
      if ( v9 ) /*0x1005c153d*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6, a2, v8, a3, a4); /*0x1005c153d*/
    }
    else
    {
      *(_BYTE *)(a1 + 74) = 0; /*0x1005c1541*/
      *(_WORD *)(a1 + 72) = 0; /*0x1005c1546*/
      *(_QWORD *)a1 = 0; /*0x1005c154d*/
      *(_QWORD *)(a1 + 8) = 1; /*0x1005c1554*/
      *(_QWORD *)(a1 + 16) = 0; /*0x1005c155c*/
      *(_QWORD *)(a1 + 24) = 0; /*0x1005c1564*/
      *(_QWORD *)(a1 + 32) = 1; /*0x1005c156c*/
      *(_QWORD *)(a1 + 40) = 0; /*0x1005c1574*/
      *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1005c1580*/
      if ( v9 ) /*0x1005c1587*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6, a2, v8, a3, a4); /*0x1005c15a7*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005c15c0*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, a3, a4) )
    {
      *(_BYTE *)(v5 + 24) = 1; /*0x1005c15c9*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6, a2, v8, a3, a4); /*0x1005c15cf*/
  }
  v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, a3, a4) ^ 1; /*0x1005c1469*/
  if ( !*(_BYTE *)(v5 + 24) ) /*0x1005c1477*/
    goto LABEL_9; /*0x1005c147f*/
LABEL_5:
  *(_BYTE *)(a1 + 74) = 0; /*0x1005c13e1*/
  *(_WORD *)(a1 + 72) = 0; /*0x1005c13e6*/
  *(_QWORD *)a1 = 0; /*0x1005c13ed*/
  *(_QWORD *)(a1 + 8) = 1; /*0x1005c13f4*/
  *(_QWORD *)(a1 + 16) = 0; /*0x1005c13fc*/
  *(_QWORD *)(a1 + 24) = 0; /*0x1005c1404*/
  *(_QWORD *)(a1 + 32) = 1; /*0x1005c140c*/
  *(_QWORD *)(a1 + 40) = 0; /*0x1005c1414*/
  *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1005c1420*/
  if ( !v9 /*0x1005c15a8*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, a3, a4) )
  {
    *(_BYTE *)(v5 + 24) = 1; /*0x1005c15b5*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6, a2, v8, a3, a4); /*0x1005c1438*/
}
