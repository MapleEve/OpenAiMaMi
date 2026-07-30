// __ZN13codexmate_lib4core5relay13codex_catalog22write_prepared_catalog @ 0x100220d20 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::write_prepared_catalog::h82f23902aa62a44b(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  void *v14; // [rsp+28h] [rbp-58h]
  size_t v15; // [rsp+30h] [rbp-50h]
  __int64 *v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF

  v2 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h75c583493c9998b0(a2); /*0x100220d3d*/
  if ( v2 ) /*0x100220d45*/
  {
    *a1 = 2; /*0x100220d47*/
    a1[1] = v2; /*0x100220d4e*/
  }
  else
  {
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x100220d83*/
      &v13,
      *(_QWORD *)(a2 + 584),
      *(_QWORD *)(a2 + 592),
      "codex_router_catalog.jsondebug--bundled",
      25);
    v4 = v14; /*0x100220d88*/
    v5 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h9563029d42e25ca2(v14, v15); /*0x100220d9e*/
    if ( v5 ) /*0x100220da6*/
    {
      v19 = v5; /*0x100220dac*/
      v16 = &v19; /*0x100220db4*/
      v17 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100220dbf*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_1017C1AC8, &v16); /*0x100220dd2*/
      v16 = (__int64 *)v12[0]; /*0x100220ddf*/
      v17 = (__int64 (__fastcall *)())v12[1]; /*0x100220de3*/
      v18 = v12[2]; /*0x100220deb*/
      if ( (v19 & 3) == 1 ) /*0x100220dfb*/
      {
        v6 = v19 - 1; /*0x100220dfd*/
        v7 = *(_QWORD *)(v19 - 1); /*0x100220e01*/
        v8 = *(_QWORD *)(v19 + 7); /*0x100220e05*/
        if ( *(_QWORD *)v8 ) /*0x100220e09*/
          (*(void (__fastcall **)(__int64))v8)(v7); /*0x100220e15*/
        v9 = *(_QWORD *)(v8 + 8); /*0x100220e17*/
        if ( v9 ) /*0x100220e1e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100220e27*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x100220e39*/
      }
      a1[3] = v18; /*0x100220e42*/
      v10 = v16; /*0x100220e46*/
      a1[2] = v17; /*0x100220e4e*/
      a1[1] = v10; /*0x100220e52*/
      *a1 = 10; /*0x100220e56*/
      if ( v13 ) /*0x100220e64*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v13, 1); /*0x100220e72*/
    }
    else
    {
      a1[3] = v15; /*0x100220e80*/
      v11 = v13; /*0x100220e84*/
      a1[2] = v14; /*0x100220e8c*/
      a1[1] = v11; /*0x100220e90*/
      *a1 = 11; /*0x100220e94*/
    }
  }
  return a1; /*0x100220d55*/
}