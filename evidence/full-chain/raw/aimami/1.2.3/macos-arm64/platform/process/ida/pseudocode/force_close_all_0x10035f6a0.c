// __ZN13codexmate_lib8platform7process21CodexProcessLifecycle15force_close_all @ 0x10035f6a0
__int64 __fastcall codexmate_lib::platform::process::CodexProcessLifecycle::force_close_all::hdface87e1d229c8f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r13
  _QWORD *v16; // r15
  __int64 v17; // rsi
  _QWORD *v18; // r15
  __int64 v19; // rsi
  _BYTE v21[24]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v22; // [rsp+20h] [rbp-F0h] BYREF
  int v23; // [rsp+28h] [rbp-E8h]
  unsigned __int128 v24; // [rsp+30h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+48h] [rbp-C8h]
  __int64 v26; // [rsp+58h] [rbp-B8h]
  _QWORD v27[12]; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-50h]
  __int128 v29; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-38h]
  int v31; // [rsp+E4h] [rbp-2Ch] BYREF

  v22 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5); /*0x10035f6bc*/
  v23 = v5; /*0x10035f6c3*/
  codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237(v27); /*0x10035f6d0*/
  v6 = v27[0]; /*0x10035f6d5*/
  v29 = *(_OWORD *)&v27[1]; /*0x10035f6e3*/
  v30 = v27[3]; /*0x10035f6f9*/
  if ( v27[0] == 11 ) /*0x10035f701*/
  {
    v7 = *((_QWORD *)&v29 + 1); /*0x10035f70b*/
    v25 = v29; /*0x10035f70f*/
    v8 = v30; /*0x10035f71d*/
    v26 = v30; /*0x10035f721*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfdd09f7544fc23ce( /*0x10035f739*/
      &v29,
      *((_QWORD *)&v29 + 1),
      *((_QWORD *)&v29 + 1) + 32 * v30);
    v31 = v8; /*0x10035f73e*/
    codexmate_lib::platform::process::kill_codex_processes_until_clear::h68cdb9b9f156eb27(v27); /*0x10035f749*/
    if ( LODWORD(v27[0]) == 11 ) /*0x10035f755*/
    {
      v9 = std::time::Instant::elapsed::h457f209775ed485c(&v22); /*0x10035f762*/
      v24 = 0x3E8 * (unsigned __int128)(unsigned __int64)v9 + v10 / 0xF4240uLL; /*0x10035f785*/
      v27[0] = &v31; /*0x10035f797*/
      v27[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10035f7a5*/
      v27[2] = &v24; /*0x10035f7b3*/
      v27[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x10035f7c1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v21, &unk_1017BCF5F, v27); /*0x10035f7dd*/
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x10035f801*/
        "codex_process_lifecycleforce_close_complete",
        23,
        "force_close_complete",
        20,
        v21);
      *(_OWORD *)((char *)v27 + 4) = v29; /*0x10035f811*/
      *(_QWORD *)((char *)&v27[2] + 4) = v30; /*0x10035f823*/
      *(_DWORD *)(a1 + 8) = v31; /*0x10035f82a*/
      v11 = v27[1]; /*0x10035f834*/
      *(_QWORD *)(a1 + 12) = v27[0]; /*0x10035f83b*/
      *(_OWORD *)(a1 + 20) = __PAIR128__(v27[2], v11); /*0x10035f83f*/
      *(_DWORD *)(a1 + 36) = v27[3]; /*0x10035f854*/
      *(_QWORD *)a1 = 11; /*0x10035f857*/
      if ( v8 ) /*0x10035f861*/
      {
        v12 = (_QWORD *)(v7 + 16); /*0x10035f867*/
        do /*0x10035f877*/
        {
          v13 = *(v12 - 1); /*0x10035f87d*/
          if ( v13 ) /*0x10035f884*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v12, v13, 1); /*0x10035f88e*/
          v12 += 4; /*0x10035f870*/
          --v8; /*0x10035f874*/
        }
        while ( v8 ); /*0x10035f877*/
      }
    }
    else
    {
      qmemcpy((void *)a1, v27, 0x60u); /*0x10035f90a*/
      v28 = *((_QWORD *)&v29 + 1); /*0x10035f911*/
      v15 = v30; /*0x10035f915*/
      if ( v30 ) /*0x10035f91c*/
      {
        v16 = (_QWORD *)(v28 + 8); /*0x10035f922*/
        do /*0x10035f937*/
        {
          v17 = *(v16 - 1); /*0x10035f939*/
          if ( v17 ) /*0x10035f940*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x10035f94a*/
          v16 += 3; /*0x10035f930*/
          --v15; /*0x10035f934*/
        }
        while ( v15 ); /*0x10035f937*/
      }
      if ( (_QWORD)v29 ) /*0x10035f958*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24 * v29, 8); /*0x10035f96b*/
      if ( v8 ) /*0x10035f973*/
      {
        v18 = (_QWORD *)(v7 + 16); /*0x10035f975*/
        do /*0x10035f987*/
        {
          v19 = *(v18 - 1); /*0x10035f989*/
          if ( v19 ) /*0x10035f990*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v19, 1); /*0x10035f99a*/
          v18 += 4; /*0x10035f980*/
          --v8; /*0x10035f984*/
        }
        while ( v8 ); /*0x10035f987*/
      }
    }
    if ( (_QWORD)v25 ) /*0x10035f9ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 32 * v25, 8); /*0x10035f9b9*/
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v27[11]; /*0x10035f899*/
    *(_QWORD *)(a1 + 80) = v27[10]; /*0x10035f8a1*/
    *(_QWORD *)(a1 + 72) = v27[9]; /*0x10035f8a9*/
    *(_QWORD *)(a1 + 64) = v27[8]; /*0x10035f8b1*/
    *(_QWORD *)(a1 + 56) = v27[7]; /*0x10035f8b9*/
    *(_QWORD *)(a1 + 48) = v27[6]; /*0x10035f8c1*/
    v14 = v27[4]; /*0x10035f8c5*/
    *(_QWORD *)(a1 + 40) = v27[5]; /*0x10035f8d3*/
    *(_QWORD *)(a1 + 32) = v14; /*0x10035f8d7*/
    *(_QWORD *)(a1 + 24) = v30; /*0x10035f8df*/
    *(_OWORD *)(a1 + 8) = v29; /*0x10035f8ef*/
    *(_QWORD *)a1 = v6; /*0x10035f8f3*/
  }
  return a1; /*0x10035f9c1*/
}