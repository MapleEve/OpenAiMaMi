// __ZN13codexmate_lib4core5relay16codex_diagnostic26fix_takeover_backup_orphan @ 0x1004ff380 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_takeover_backup_orphan::h2d8b6a51f7905902(
        _QWORD *a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  void *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r14
  void *v9; // rax
  void *v10; // r15
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // r14
  void *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r12
  void *v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r8
  _QWORD v42[12]; // [rsp+8h] [rbp-198h] BYREF
  _QWORD v43[3]; // [rsp+68h] [rbp-138h] BYREF
  __int64 v44; // [rsp+80h] [rbp-120h] BYREF
  _QWORD v45[12]; // [rsp+88h] [rbp-118h] BYREF
  _QWORD v46[12]; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+148h] [rbp-58h] BYREF
  __int64 v48; // [rsp+150h] [rbp-50h]
  __int64 v49; // [rsp+158h] [rbp-48h]
  __int64 v50; // [rsp+160h] [rbp-40h] BYREF
  __int64 v51; // [rsp+168h] [rbp-38h]
  __int64 v52; // [rsp+170h] [rbp-30h]

  if ( (a3 & 1) != 0 ) /*0x1004ff39a*/
  {
    v42[0] = 0; /*0x1004ff3a0*/
    v42[1] = 8; /*0x1004ff3ab*/
    v42[2] = 0; /*0x1004ff3b6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004ff3c1*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff3d0*/
    if ( !v4 ) /*0x1004ff3d8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffa73*/
    v5 = (_QWORD *)v4; /*0x1004ff3de*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ff3e1*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x1004ff3f0*/
    if ( !v6 ) /*0x1004ff3f8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x1004ffae2*/
    qmemcpy(v6, "takeover_backup_orphan", 22); /*0x1004ff424*/
    *v5 = 22; /*0x1004ff427*/
    v5[1] = v6; /*0x1004ff42e*/
    v5[2] = 22; /*0x1004ff432*/
    v46[0] = 1; /*0x1004ff43a*/
    v46[1] = v5; /*0x1004ff445*/
    v46[2] = 1; /*0x1004ff44c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1); /*0x1004ff457*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff466*/
    if ( !v7 ) /*0x1004ff46e*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffa87*/
    v8 = (_QWORD *)v7; /*0x1004ff474*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ff477*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(73, 1); /*0x1004ff486*/
    if ( !v9 ) /*0x1004ff48e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 73); /*0x1004ffaf3*/
    v10 = v9; /*0x1004ff494*/
    memcpy(v9, &unk_1015FDB84, 0x49u); /*0x1004ff4a6*/
    *v8 = 73; /*0x1004ff4ab*/
    v8[1] = v10; /*0x1004ff4b2*/
    v8[2] = 73; /*0x1004ff4b6*/
    result = v42[0]; /*0x1004ff4be*/
    v12 = v42[1]; /*0x1004ff4c5*/
    v44 = v42[0]; /*0x1004ff4cc*/
    v45[0] = v42[1]; /*0x1004ff4d3*/
    v13 = v42[2]; /*0x1004ff4da*/
    v45[1] = v42[2]; /*0x1004ff4e1*/
    v45[4] = v46[2]; /*0x1004ff4ef*/
    v14 = v46[0]; /*0x1004ff4f6*/
    v15 = v46[1]; /*0x1004ff4fd*/
    v45[3] = v46[1]; /*0x1004ff504*/
    v45[2] = v46[0]; /*0x1004ff50b*/
    a1[6] = v46[2]; /*0x1004ff512*/
    a1[5] = v15; /*0x1004ff516*/
    a1[4] = v14; /*0x1004ff51a*/
    a1[3] = v13; /*0x1004ff51e*/
    a1[2] = v12; /*0x1004ff522*/
    a1[1] = result; /*0x1004ff526*/
    a1[7] = 1; /*0x1004ff52a*/
    a1[8] = v8; /*0x1004ff532*/
    a1[9] = 1; /*0x1004ff536*/
    *a1 = 11; /*0x1004ff53e*/
  }
  else
  {
    codexmate_lib::core::relay::config_takeover::restore::h21110a3f65c0585f(&v44, a2); /*0x1004ff554*/
    result = (unsigned int)v44; /*0x1004ff559*/
    qmemcpy(v46, v45, sizeof(v46)); /*0x1004ff572*/
    if ( (_DWORD)v44 == 1 ) /*0x1004ff578*/
    {
      qmemcpy(a1, v46, 0x60u); /*0x1004ff589*/
    }
    else
    {
      qmemcpy(v42, v46, sizeof(v42)); /*0x1004ff5a4*/
      codexmate_lib::core::relay::codex_diagnostic::check_takeover_backup_orphan::h805b70fc7987ba8a(&v44, a2, 0); /*0x1004ff5b3*/
      if ( v45[4] == 2 && *(_WORD *)v45[3] == 27503 ) /*0x1004ff5ce*/
      {
        if ( v42[11] ) /*0x1004ff805*/
        {
          alloc::str::join_generic_copy::heca7a5e86402c6b6(v46, v42[10], v42[11], &unk_1015FD582, 3); /*0x1004ff826*/
          v52 = v46[2]; /*0x1004ff832*/
          v51 = v46[1]; /*0x1004ff844*/
          v50 = v46[0]; /*0x1004ff848*/
          v47 = (__int64)&v50; /*0x1004ff850*/
          v48 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004ff85b*/
          v27 = (__int64)v46; /*0x1004ff866*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1017C0218, &v47); /*0x1004ff871*/
          v28 = v50; /*0x1004ff876*/
          if ( v50 ) /*0x1004ff87d*/
          {
            v27 = v51; /*0x1004ff87f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x1004ff888*/
          }
          v29 = v46[0]; /*0x1004ff88d*/
          v30 = v46[1]; /*0x1004ff894*/
          v31 = v46[2]; /*0x1004ff89b*/
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v44, a2); /*0x1004ff8a7*/
          v31 = 52; /*0x1004ff8ac*/
          v27 = 52; /*0x1004ff8b2*/
          v28 = 1; /*0x1004ff8b7*/
          v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x1004ff8bc*/
          if ( !v32 ) /*0x1004ff8c4*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52); /*0x1004ffb26*/
          v30 = v32; /*0x1004ff8ca*/
          *(_QWORD *)(v32 + 40) = 0x96E6BDBBE487A4E5LL; /*0x1004ff8d7*/
          *(_QWORD *)(v32 + 32) = 0x9995E78BAEE6A499LL; /*0x1004ff8e5*/
          *(_QWORD *)(v32 + 24) = 0xE9A088E5B6B9E5BDLL; /*0x1004ff8f3*/
          *(_QWORD *)(v32 + 16) = 0xBBE487A4E5207265LL; /*0x1004ff901*/
          *(_QWORD *)(v32 + 8) = 0x766F656B6174209FLL; /*0x1004ff90f*/
          *(_QWORD *)v32 = 0x8EE598BFE8B2B7E5LL; /*0x1004ff91d*/
          *(_DWORD *)(v32 + 48) = -1229200249; /*0x1004ff920*/
          v29 = 52; /*0x1004ff928*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v28); /*0x1004ff92e*/
        v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff93d*/
        if ( !v33 ) /*0x1004ff945*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffac0*/
        v34 = (_QWORD *)v33; /*0x1004ff94b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ff94e*/
        v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x1004ff95d*/
        if ( !v35 ) /*0x1004ff965*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x1004ffb15*/
        qmemcpy(v35, "takeover_backup_orphan", 22); /*0x1004ff991*/
        *v34 = 22; /*0x1004ff994*/
        v34[1] = v35; /*0x1004ff99c*/
        v34[2] = 22; /*0x1004ff9a1*/
        v47 = 1; /*0x1004ff9aa*/
        v48 = (__int64)v34; /*0x1004ff9b2*/
        v49 = 1; /*0x1004ff9b6*/
        v50 = 0; /*0x1004ff9be*/
        v51 = 8; /*0x1004ff9c6*/
        v52 = 0; /*0x1004ff9ce*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1); /*0x1004ff9d6*/
        v36 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff9e5*/
        if ( !v36 ) /*0x1004ff9ed*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffad1*/
        *v36 = v29; /*0x1004ff9f3*/
        v36[1] = v30; /*0x1004ff9f6*/
        v36[2] = v31; /*0x1004ff9fa*/
        v37 = v49; /*0x1004ff9fe*/
        v46[2] = v49; /*0x1004ffa02*/
        v38 = v47; /*0x1004ffa09*/
        v39 = v48; /*0x1004ffa0d*/
        v46[1] = v48; /*0x1004ffa11*/
        v46[0] = v47; /*0x1004ffa18*/
        v40 = v50; /*0x1004ffa1f*/
        v41 = v51; /*0x1004ffa23*/
        v46[3] = v50; /*0x1004ffa27*/
        v46[4] = v51; /*0x1004ffa2e*/
        v46[5] = v52; /*0x1004ffa39*/
        a1[6] = v52; /*0x1004ffa40*/
        a1[5] = v41; /*0x1004ffa44*/
        a1[4] = v40; /*0x1004ffa48*/
        a1[3] = v37; /*0x1004ffa4c*/
        a1[2] = v39; /*0x1004ffa50*/
        a1[1] = v38; /*0x1004ffa54*/
        a1[7] = 1; /*0x1004ffa58*/
        a1[8] = v36; /*0x1004ffa60*/
      }
      else
      {
        v47 = 0; /*0x1004ff5d4*/
        v48 = 8; /*0x1004ff5dc*/
        v49 = 0; /*0x1004ff5e4*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v44, a2); /*0x1004ff5ec*/
        v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff5fb*/
        if ( !v16 ) /*0x1004ff603*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffa9b*/
        v17 = (_QWORD *)v16; /*0x1004ff609*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ff60c*/
        v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x1004ff61b*/
        if ( !v18 ) /*0x1004ff623*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x1004ffb04*/
        qmemcpy(v18, "takeover_backup_orphan", 22); /*0x1004ff64f*/
        *v17 = 22; /*0x1004ff652*/
        v17[1] = v18; /*0x1004ff659*/
        v17[2] = 22; /*0x1004ff65d*/
        v50 = 1; /*0x1004ff665*/
        v51 = (__int64)v17; /*0x1004ff66d*/
        v52 = 1; /*0x1004ff671*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1); /*0x1004ff679*/
        v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ff688*/
        if ( !v19 ) /*0x1004ff690*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ffaaf*/
        v20 = (_QWORD *)v19; /*0x1004ff696*/
        v46[0] = &v45[5]; /*0x1004ff6a0*/
        v46[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004ff6ae*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v43, &unk_1017C01F4, v46); /*0x1004ff6ca*/
        v20[2] = v43[2]; /*0x1004ff6d6*/
        v21 = v43[0]; /*0x1004ff6da*/
        v20[1] = v43[1]; /*0x1004ff6e8*/
        *v20 = v21; /*0x1004ff6ec*/
        v22 = v47; /*0x1004ff6ef*/
        v23 = v48; /*0x1004ff6f3*/
        v46[0] = v47; /*0x1004ff6f7*/
        v46[1] = v48; /*0x1004ff6fe*/
        v24 = v49; /*0x1004ff705*/
        v46[2] = v49; /*0x1004ff709*/
        v25 = v50; /*0x1004ff710*/
        v26 = v51; /*0x1004ff714*/
        v46[3] = v50; /*0x1004ff718*/
        v46[4] = v51; /*0x1004ff71f*/
        v46[5] = v52; /*0x1004ff72a*/
        a1[6] = v52; /*0x1004ff731*/
        a1[5] = v26; /*0x1004ff735*/
        a1[4] = v25; /*0x1004ff739*/
        a1[3] = v24; /*0x1004ff73d*/
        a1[2] = v23; /*0x1004ff741*/
        a1[1] = v22; /*0x1004ff745*/
        a1[7] = 1; /*0x1004ff749*/
        a1[8] = v20; /*0x1004ff751*/
      }
      a1[9] = 1; /*0x1004ff755*/
      *a1 = 11; /*0x1004ff75d*/
      if ( v44 ) /*0x1004ff76e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[0], v44, 1); /*0x1004ff77c*/
      if ( v45[2] ) /*0x1004ff78b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[3], v45[2], 1); /*0x1004ff799*/
      if ( v45[5] ) /*0x1004ff7a8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[6], v45[5], 1); /*0x1004ff7b6*/
      if ( !__OFSUB__(-v45[8], 1) && v45[8] ) /*0x1004ff7ca*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[9], v45[8], 1); /*0x1004ff7d8*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::h602bb0437fd5edef(v42); /*0x1004ff7e4*/
    }
  }
  return result; /*0x1004ff7e9*/
}