// __ZN13codexmate_lib4core5relay23codex_thread_visibility17reconcile_threads @ 0x100ad1620 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads::hfdb93758fe0846e8(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // edx
  unsigned __int128 *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  int v11; // edx
  unsigned __int128 *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // r12
  _QWORD *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // r12
  unsigned __int128 *v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  _QWORD v35[3]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v36[11]; // [rsp+18h] [rbp-208h] BYREF
  __int64 v37; // [rsp+70h] [rbp-1B0h] BYREF
  int v38; // [rsp+78h] [rbp-1A8h]
  __int64 v39; // [rsp+80h] [rbp-1A0h] BYREF
  int v40; // [rsp+88h] [rbp-198h]
  __int64 v41; // [rsp+90h] [rbp-190h] BYREF
  int v42; // [rsp+98h] [rbp-188h]
  __int64 v43; // [rsp+A0h] [rbp-180h] BYREF
  int v44; // [rsp+A8h] [rbp-178h]
  unsigned __int128 v45; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int128 v46; // [rsp+C0h] [rbp-160h] BYREF
  unsigned __int128 v47; // [rsp+D0h] [rbp-150h] BYREF
  unsigned __int128 *v48; // [rsp+E8h] [rbp-138h]
  __int128 v49; // [rsp+F0h] [rbp-130h]
  __int128 v50; // [rsp+100h] [rbp-120h]
  __int64 v51; // [rsp+110h] [rbp-110h]
  __int64 v52; // [rsp+118h] [rbp-108h] BYREF
  __int64 v53; // [rsp+120h] [rbp-100h]
  __int64 v54; // [rsp+128h] [rbp-F8h]
  __int64 v55; // [rsp+130h] [rbp-F0h]
  __int64 v56; // [rsp+138h] [rbp-E8h]
  _BYTE v57[88]; // [rsp+140h] [rbp-E0h] BYREF
  unsigned __int128 *v58; // [rsp+198h] [rbp-88h] BYREF
  _OWORD v59[8]; // [rsp+1A0h] [rbp-80h] BYREF

  v43 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5); /*0x100ad1642*/
  v44 = v6; /*0x100ad1649*/
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h29a5363c015dcf12( /*0x100ad1659*/
    &v58,
    a2);
  v7 = v58; /*0x100ad165e*/
  qmemcpy(v57, v59, sizeof(v57)); /*0x100ad1675*/
  if ( v58 != (unsigned __int128 *)11 ) /*0x100ad167c*/
  {
    qmemcpy((void *)(a1 + 16), v57, 0x58u); /*0x100ad1874*/
    *(_QWORD *)(a1 + 8) = v7; /*0x100ad1877*/
    *(_QWORD *)a1 = 2; /*0x100ad187b*/
    goto LABEL_17; /*0x100ad1882*/
  }
  qmemcpy(v36, v57, sizeof(v36)); /*0x100ad1695*/
  v8 = std::time::Instant::elapsed::h457f209775ed485c(&v43); /*0x100ad169f*/
  v47 = 0x3E8 * (unsigned __int128)(unsigned __int64)v8 + v9 / 0xF4240uLL; /*0x100ad16c2*/
  v41 = std::time::Instant::now::hda76af2c3a449055(&v43, &v58, *((_QWORD *)&v47 + 1), v47, v10); /*0x100ad16d5*/
  v42 = v11; /*0x100ad16dc*/
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h11024501c8d0762b( /*0x100ad16f4*/
    &v58,
    a2,
    a3[3],
    a3[4]);
  v12 = v58; /*0x100ad16f9*/
  *(_OWORD *)v57 = v59[0]; /*0x100ad1704*/
  *(_OWORD *)&v57[16] = v59[1]; /*0x100ad171a*/
  *(_OWORD *)&v57[32] = v59[2]; /*0x100ad1730*/
  *(_OWORD *)&v57[48] = v59[3]; /*0x100ad1746*/
  if ( v58 != (unsigned __int128 *)11 ) /*0x100ad175c*/
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v59[5]; /*0x100ad188b*/
    *(_OWORD *)(a1 + 80) = v59[4]; /*0x100ad189b*/
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v57[56]; /*0x100ad18a6*/
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v57[48]; /*0x100ad18b1*/
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v57[40]; /*0x100ad18bc*/
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v57[32]; /*0x100ad18c7*/
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v57[24]; /*0x100ad18d2*/
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v57[16]; /*0x100ad18dd*/
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v57; /*0x100ad18f3*/
    *(_QWORD *)(a1 + 8) = v12; /*0x100ad18f7*/
    *(_QWORD *)a1 = 2; /*0x100ad18fb*/
LABEL_7:
    if ( v36[3] != 0x8000000000000000LL && v36[3] ) /*0x100ad191b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[4], v36[3], 1); /*0x100ad1929*/
    v18 = v36[1]; /*0x100ad192e*/
    v19 = v36[2]; /*0x100ad1935*/
    if ( v36[2] ) /*0x100ad193f*/
    {
      v20 = (_QWORD *)(v36[1] + 8LL); /*0x100ad1941*/
      do /*0x100ad1957*/
      {
        v21 = *(v20 - 1); /*0x100ad1959*/
        if ( v21 ) /*0x100ad1960*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1); /*0x100ad196b*/
        v20 += 3; /*0x100ad1950*/
        --v19; /*0x100ad1954*/
      }
      while ( v19 ); /*0x100ad1957*/
    }
    if ( v36[0] ) /*0x100ad197c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24LL * v36[0], 8); /*0x100ad198e*/
LABEL_17:
    v22 = *a3; /*0x100ad1993*/
    if ( *a3 == 0x8000000000000000LL ) /*0x100ad19a3*/
      return a1; /*0x100ad19a3*/
    goto LABEL_18; /*0x100ad19a3*/
  }
  v50 = *(_OWORD *)v57; /*0x100ad1770*/
  v51 = *(_QWORD *)&v57[16]; /*0x100ad1785*/
  v52 = *(_QWORD *)&v57[24]; /*0x100ad1793*/
  v53 = *(_QWORD *)&v57[32]; /*0x100ad17a1*/
  v54 = *(_QWORD *)&v57[40]; /*0x100ad17af*/
  v55 = *(_QWORD *)&v57[48]; /*0x100ad17bd*/
  v56 = *(_QWORD *)&v57[56]; /*0x100ad17cb*/
  v13 = std::time::Instant::elapsed::h457f209775ed485c(&v41); /*0x100ad17d9*/
  v46 = 0x3E8 * (unsigned __int128)(unsigned __int64)v13 + v14 / 0xF4240uLL; /*0x100ad17fc*/
  v39 = std::time::Instant::now::hda76af2c3a449055(&v41, a2, *((_QWORD *)&v46 + 1), v46, v15); /*0x100ad180f*/
  v40 = v16; /*0x100ad1816*/
  if ( *((_BYTE *)a3 + 40) == 1 ) /*0x100ad1820*/
  {
    codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions::hc9e5c9fe3e5facfe(&v58, a2); /*0x100ad1830*/
    v49 = v59[0]; /*0x100ad184b*/
    v48 = v58; /*0x100ad1852*/
    v17 = 1; /*0x100ad1859*/
  }
  else
  {
    v17 = 0; /*0x100ad19c8*/
  }
  v23 = std::time::Instant::elapsed::h457f209775ed485c(&v39); /*0x100ad19d2*/
  v45 = 0x3E8 * (unsigned __int128)(unsigned __int64)v23 + v24 / 0xF4240uLL; /*0x100ad19f5*/
  v37 = std::time::Instant::now::hda76af2c3a449055(&v39, a2, *((_QWORD *)&v45 + 1), v45, v25); /*0x100ad1a08*/
  v38 = v26; /*0x100ad1a0f*/
  v22 = *a3; /*0x100ad1a15*/
  if ( *a3 == 0x8000000000000000LL ) /*0x100ad1a25*/
  {
    v27 = 0; /*0x100ad1a27*/
    goto LABEL_24; /*0x100ad1a2a*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads::h3dd6da94b27a11ac( /*0x100ad1a3e*/
    &v58,
    a2,
    a3[1],
    a3[2]);
  v28 = v58; /*0x100ad1a43*/
  v27 = *(_QWORD *)&v59[0]; /*0x100ad1a4a*/
  v29 = v59[0]; /*0x100ad1a4e*/
  qmemcpy(v57, &v59[1], 0x48u); /*0x100ad1a62*/
  if ( v58 != (unsigned __int128 *)11 ) /*0x100ad1a69*/
  {
    qmemcpy((void *)(a1 + 32), v57, 0x48u); /*0x100ad1c24*/
    *(_QWORD *)(a1 + 8) = v28; /*0x100ad1c27*/
    *(_OWORD *)(a1 + 16) = v29; /*0x100ad1c2b*/
    *(_QWORD *)a1 = 2; /*0x100ad1c30*/
    if ( (_QWORD)v50 ) /*0x100ad1c41*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v50 + 1), v50, 1); /*0x100ad1c53*/
    goto LABEL_7; /*0x100ad1c58*/
  }
LABEL_24:
  v30 = std::time::Instant::elapsed::h457f209775ed485c(&v37); /*0x100ad1a6f*/
  *(_OWORD *)v57 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL; /*0x100ad1a99*/
  v58 = &v47; /*0x100ad1ab5*/
  *(_QWORD *)&v59[0] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ad1ac3*/
  *((_QWORD *)&v59[0] + 1) = &v46; /*0x100ad1ace*/
  *(_QWORD *)&v59[1] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ad1ad2*/
  *((_QWORD *)&v59[1] + 1) = &v45; /*0x100ad1add*/
  *(_QWORD *)&v59[2] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ad1ae1*/
  *((_QWORD *)&v59[2] + 1) = v57; /*0x100ad1aec*/
  *(_QWORD *)&v59[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100ad1af0*/
  *((_QWORD *)&v59[3] + 1) = &v52; /*0x100ad1af4*/
  *(_QWORD *)&v59[4] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ad1aff*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017CA561, &v58); /*0x100ad1b18*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100ad1b3c*/
    (unsigned __int64)"thread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
    16,
    (unsigned __int64)&unk_10167D551,
    11,
    v35,
    v32);
  qmemcpy((void *)(a1 + 32), v36, 0x58u); /*0x100ad1b51*/
  *(_QWORD *)(a1 + 176) = v56; /*0x100ad1b5b*/
  *(_QWORD *)(a1 + 168) = v55; /*0x100ad1b69*/
  *(_QWORD *)(a1 + 160) = v54; /*0x100ad1b77*/
  *(_QWORD *)(a1 + 152) = v53; /*0x100ad1b85*/
  *(_QWORD *)(a1 + 144) = v52; /*0x100ad1b93*/
  *(_QWORD *)(a1 + 136) = v51; /*0x100ad1ba1*/
  *(_OWORD *)(a1 + 120) = v50; /*0x100ad1bbd*/
  v33 = v49; /*0x100ad1bc8*/
  *(_QWORD *)(a1 + 8) = v48; /*0x100ad1bcf*/
  *(_OWORD *)(a1 + 16) = __PAIR128__(*((unsigned __int64 *)&v49 + 1), v33); /*0x100ad1bd3*/
  *(_QWORD *)a1 = v17; /*0x100ad1be2*/
  *(_QWORD *)(a1 + 184) = v27; /*0x100ad1be5*/
  if ( v22 == 0x8000000000000000LL ) /*0x100ad1bf9*/
    return a1; /*0x100ad1bf9*/
LABEL_18:
  if ( v22 ) /*0x100ad19ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], v22, 1); /*0x100ad19be*/
  return a1; /*0x100ad1c02*/
}