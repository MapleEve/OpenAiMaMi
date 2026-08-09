// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::VoiceRuntimeFile as core::default::Default>::default::h3222dc64aa78695e @ 0x1006eee00 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$u20$as$u20$core..default..Default$GT$::default::h3222dc64aa78695e(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  void *v25; // [rsp+30h] [rbp-40h]
  _QWORD *v26; // [rsp+38h] [rbp-38h]
  _QWORD *v27; // [rsp+40h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v2 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15);
  v3 = v2;
  qmemcpy(v2, "Cmd+Shift+Space", 15);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(15, 1);
  v4 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  v25 = v3;
  if ( !v4 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  v5 = v4;
  *v4 = 0x7265696669646F6DLL;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
  v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  v26 = v5;
  if ( !v6 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  v27 = v6;
  *v6 = 0x7265696669646F6DLL;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
  v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v7 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  v8 = v7;
  *v7 = 0x7265696669646F6DLL;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
  v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v9 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  v10 = v9;
  *v9 = 1869903201;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v11 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  v12 = v11;
  *v11 = 1802723700;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v16 = v13;
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v17 = *(_QWORD *)v13;
    v18 = *(_QWORD *)(v16 + 8);
  }
  else
  {
    v17 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            1,
            v14,
            v15);
    *(_QWORD *)v16 = v17;
    *(_QWORD *)(v16 + 8) = v18;
    *(_BYTE *)(v16 + 16) = 1;
  }
  *(_QWORD *)v16 = v17 + 1;
  v23 = v17;
  v24 = v18;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
    &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
    1);
  v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v19 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
  v20 = v19;
  *(_WORD *)(v19 + 4) = 28005;
  *(_DWORD *)v19 = 1953724787;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v21 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
  *(_WORD *)(v21 + 4) = 12914;
  *(_DWORD *)v21 = 1702125943;
  *(_DWORD *)(a1 + 384) = 7;
  *(_QWORD *)a1 = 15;
  *(_QWORD *)(a1 + 8) = v25;
  *(_QWORD *)(a1 + 16) = 15;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 56) = v26;
  *(_QWORD *)(a1 + 64) = 8;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 8;
  *(_QWORD *)(a1 + 104) = v27;
  *(_QWORD *)(a1 + 112) = 8;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 8;
  *(_QWORD *)(a1 + 152) = v8;
  *(_QWORD *)(a1 + 160) = 8;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 168) = 4;
  *(_QWORD *)(a1 + 176) = v10;
  *(_QWORD *)(a1 + 184) = 4;
  *(_BYTE *)(a1 + 394) = 1;
  *(_QWORD *)(a1 + 192) = 4;
  *(_QWORD *)(a1 + 200) = v12;
  *(_QWORD *)(a1 + 208) = 4;
  *(_QWORD *)(a1 + 328) = v24;
  *(_QWORD *)(a1 + 320) = v23;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 288) = anon_4776471024d1e9bb78f2861cb2b51e1e_263;
  *(_QWORD *)(a1 + 216) = 6;
  *(_QWORD *)(a1 + 224) = v20;
  *(_QWORD *)(a1 + 232) = 6;
  *(_WORD *)(a1 + 388) = 20;
  *(_DWORD *)(a1 + 390) = 1;
  *(_QWORD *)(a1 + 240) = 6;
  *(_QWORD *)(a1 + 248) = v21;
  *(_QWORD *)(a1 + 256) = 6;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 395) = 0;
  return a1;
}
