// __ZN13codexmate_lib4core5relay23codex_thread_visibility37load_no_account_model_restore_journal @ 0x1008ef0b0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::load_no_account_model_restore_journal::h39b1694914bbc528(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rdx
  __int64 (__fastcall *v16)(); // rsi
  __int64 (__fastcall *v17)(); // r15
  __int64 v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  _QWORD *v31; // rbx
  __int64 **v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  void *v37; // rax
  _QWORD *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  _QWORD *v42; // rdi
  __int64 v43; // rsi
  _QWORD v44[4]; // [rsp+8h] [rbp-168h] BYREF
  _QWORD v45[3]; // [rsp+28h] [rbp-148h] BYREF
  _QWORD v46[3]; // [rsp+40h] [rbp-130h] BYREF
  _QWORD v47[3]; // [rsp+58h] [rbp-118h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v49; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v50; // [rsp+88h] [rbp-E8h]
  __int64 v51; // [rsp+90h] [rbp-E0h]
  _QWORD v52[4]; // [rsp+98h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD *v54; // [rsp+C0h] [rbp-B0h]
  __int64 (__fastcall *v55)(); // [rsp+C8h] [rbp-A8h]
  __int64 v56; // [rsp+D0h] [rbp-A0h]
  __int64 v57; // [rsp+D8h] [rbp-98h]
  _QWORD *v58; // [rsp+E0h] [rbp-90h]
  __int64 (__fastcall *v59)(); // [rsp+E8h] [rbp-88h]
  __int64 v60; // [rsp+F0h] [rbp-80h] BYREF
  _QWORD *v61; // [rsp+F8h] [rbp-78h] BYREF
  _QWORD *v62; // [rsp+100h] [rbp-70h]
  __int64 *v63; // [rsp+108h] [rbp-68h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+110h] [rbp-60h]
  _QWORD *v65; // [rsp+118h] [rbp-58h]
  __int64 (__fastcall *v66)(); // [rsp+120h] [rbp-50h]
  __int64 v67; // [rsp+128h] [rbp-48h]
  __int64 v68; // [rsp+130h] [rbp-40h]
  __int64 v69; // [rsp+138h] [rbp-38h]
  __int64 v70; // [rsp+140h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v49, a2, a3, &unk_10167FE13, 36); /*0x1008ef0db*/
  v4 = v50; /*0x1008ef0e0*/
  v5 = v51; /*0x1008ef0e7*/
  std::fs::read::inner::h6a30c15c40add28b(&v53, v50, v51); /*0x1008ef0fb*/
  v6 = v53; /*0x1008ef100*/
  v7 = v54; /*0x1008ef107*/
  if ( !__OFSUB__(-v53, 1) ) /*0x1008ef114*/
  {
    v63 = v54; /*0x1008ef20e*/
    v64 = v55; /*0x1008ef212*/
    v65 = nullptr; /*0x1008ef216*/
    v66 = nullptr; /*0x1008ef21e*/
    serde_json::de::from_trait::h43d4daf7652124c0(&v53, &v63); /*0x1008ef231*/
    if ( v53 == 0x8000000000000000LL ) /*0x1008ef247*/
    {
      v61 = v54; /*0x1008ef254*/
      v48[0] = v4; /*0x1008ef258*/
      v48[1] = v5; /*0x1008ef25f*/
      v63 = v48; /*0x1008ef26d*/
      v64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008ef278*/
      v65 = &v61; /*0x1008ef280*/
      v66 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008ef28b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v45, (char *)&loc_1017D26EE + 1, &v63); /*0x1008ef2a1*/
      v63 = (__int64 *)v45[0]; /*0x1008ef2b4*/
      v64 = (__int64 (__fastcall *)())v45[1]; /*0x1008ef2b8*/
      v65 = (_QWORD *)v45[2]; /*0x1008ef2c3*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(&v61); /*0x1008ef2cb*/
      result = (__int64)v65; /*0x1008ef2d0*/
      v44[2] = v65; /*0x1008ef2d4*/
      v15 = v63; /*0x1008ef2df*/
      v16 = v64; /*0x1008ef2e3*/
      v52[0] = v63; /*0x1008ef2e7*/
      v52[1] = v64; /*0x1008ef2ee*/
      v52[2] = v65; /*0x1008ef2f5*/
      v52[3] = v66; /*0x1008ef2fc*/
      a1[4] = v66; /*0x1008ef303*/
      a1[3] = result; /*0x1008ef308*/
      a1[2] = v16; /*0x1008ef30d*/
      a1[1] = v15; /*0x1008ef312*/
      *a1 = 10; /*0x1008ef317*/
    }
    else
    {
      v69 = v6; /*0x1008ef324*/
      v17 = v55; /*0x1008ef32f*/
      v52[0] = v53; /*0x1008ef344*/
      v57 = v53; /*0x1008ef34b*/
      v58 = v54; /*0x1008ef352*/
      v59 = v55; /*0x1008ef359*/
      v60 = v56; /*0x1008ef360*/
      v62 = v7; /*0x1008ef367*/
      if ( !v55 || (_DWORD)v56 == 1 ) /*0x1008ef374*/
      {
        std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ef472*/
        v26 = v23; /*0x1008ef474*/
        v27 = *(_BYTE *)(v23 + 16) == 1; /*0x1008ef477*/
        v70 = v4; /*0x1008ef47b*/
        if ( v27 ) /*0x1008ef47f*/
        {
          v28 = *(_QWORD *)v23; /*0x1008ef485*/
          v29 = *(_QWORD *)(v26 + 8); /*0x1008ef489*/
        }
        else
        {
          v28 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008ef753*/
                  &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                  &v63,
                  v24,
                  v25);
          *(_QWORD *)v26 = v28; /*0x1008ef758*/
          *(_QWORD *)(v26 + 8) = v29; /*0x1008ef75c*/
          *(_BYTE *)(v26 + 16) = 1; /*0x1008ef760*/
        }
        *(_QWORD *)v26 = v28 + 1; /*0x1008ef491*/
        v66 = nullptr; /*0x1008ef49c*/
        v65 = nullptr; /*0x1008ef4a7*/
        v64 = nullptr; /*0x1008ef4b2*/
        v63 = (__int64 *)anon_727917ecdb2ab9f22bcf5eba88f4827d_38; /*0x1008ef4bd*/
        v67 = v28; /*0x1008ef4c1*/
        v68 = v29; /*0x1008ef4c5*/
        v19 = v58; /*0x1008ef4c9*/
        v30 = 72LL * (_QWORD)v17; /*0x1008ef4d8*/
        v31 = v58; /*0x1008ef4dc*/
        while ( v30 ) /*0x1008ef4e3*/
        {
          v32 = (__int64 **)v31[1]; /*0x1008ef4e9*/
          v33 = v31[2]; /*0x1008ef4ed*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v32, v33); /*0x1008ef4f1*/
          if ( v34 ) /*0x1008ef4f9*/
          {
            v32 = (__int64 **)v31[4]; /*0x1008ef4fb*/
            v33 = v31[5]; /*0x1008ef4ff*/
            if ( codexmate_lib::core::relay::codex_catalog::is_no_account_slot_slug::h7123c9a7327e52b8( /*0x1008ef503*/
                   (__int64)v32,
                   v33) )
            {
              v33 = v31[1]; /*0x1008ef50c*/
              v32 = &v63; /*0x1008ef514*/
              v36 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(&v63, v33, v31[2]); /*0x1008ef518*/
              v31 += 9; /*0x1008ef51d*/
              v30 -= 72; /*0x1008ef521*/
              if ( !v36 ) /*0x1008ef527*/
                continue; /*0x1008ef527*/
            }
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v33, v34, v35); /*0x1008ef529*/
          v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1008ef538*/
          if ( !v37 ) /*0x1008ef540*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1008ef774*/
          qmemcpy(v37, "invalid no-account model restore journal contents", 49); /*0x1008ef596*/
          *a1 = 10; /*0x1008ef59d*/
          a1[1] = 49; /*0x1008ef5a5*/
          a1[2] = v37; /*0x1008ef5ae*/
          a1[3] = 49; /*0x1008ef5b3*/
          v4 = v70; /*0x1008ef5c3*/
          if ( v64 && 17LL * (_QWORD)v64 != -33 ) /*0x1008ef5d7*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v63[-2 * (_QWORD)v64 - 2], 17LL * (_QWORD)v64 + 33, 16); /*0x1008ef5e9*/
          goto LABEL_32; /*0x1008ef5e9*/
        }
        a1[4] = v60; /*0x1008ef6d5*/
        a1[3] = v59; /*0x1008ef6e1*/
        result = v57; /*0x1008ef6e6*/
        a1[2] = v58; /*0x1008ef6f4*/
        a1[1] = result; /*0x1008ef6f9*/
        *a1 = 11; /*0x1008ef6fe*/
        if ( v64 ) /*0x1008ef70d*/
        {
          result = 16LL * (_QWORD)v64; /*0x1008ef712*/
          if ( 17LL * (_QWORD)v64 != -33 ) /*0x1008ef71d*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1008ef72f*/
                       (char *)v63 - result - 16,
                       17LL * (_QWORD)v64 + 33,
                       16);
        }
        v43 = v69; /*0x1008ef734*/
        v4 = v70; /*0x1008ef73b*/
        v42 = v62; /*0x1008ef73f*/
        if ( !v69 ) /*0x1008ef743*/
          goto LABEL_47; /*0x1008ef743*/
LABEL_46:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v43, 1); /*0x1008ef6a1*/
        goto LABEL_47; /*0x1008ef6a1*/
      }
      v63 = &v60; /*0x1008ef37e*/
      v64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1008ef389*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1017D2683, &v63); /*0x1008ef39f*/
      a1[3] = v46[2]; /*0x1008ef3ab*/
      v18 = v46[0]; /*0x1008ef3b0*/
      a1[2] = v46[1]; /*0x1008ef3be*/
      a1[1] = v18; /*0x1008ef3c3*/
      *a1 = 10; /*0x1008ef3c8*/
      v19 = v58; /*0x1008ef3d0*/
      v17 = v59; /*0x1008ef3d7*/
LABEL_32:
      if ( v17 ) /*0x1008ef5fb*/
      {
        v38 = v19 + 7; /*0x1008ef5fd*/
        do /*0x1008ef617*/
        {
          v39 = *(v38 - 7); /*0x1008ef619*/
          if ( v39 ) /*0x1008ef620*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v38 - 6), v39, 1); /*0x1008ef62b*/
          v40 = *(v38 - 1); /*0x1008ef630*/
          if ( v40 != 0x8000000000000000LL && v40 ) /*0x1008ef63c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, v40, 1); /*0x1008ef646*/
          v41 = *(v38 - 4); /*0x1008ef64b*/
          if ( v41 ) /*0x1008ef652*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v38 - 3), v41, 1); /*0x1008ef65d*/
          v38 += 9; /*0x1008ef610*/
          v17 = (__int64 (__fastcall *)())((char *)v17 - 1); /*0x1008ef614*/
        }
        while ( v17 ); /*0x1008ef617*/
      }
      result = v57; /*0x1008ef664*/
      v7 = v62; /*0x1008ef66e*/
      v6 = v69; /*0x1008ef672*/
      if ( v57 ) /*0x1008ef676*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 72 * v57, 8); /*0x1008ef68c*/
    }
    if ( !v6 ) /*0x1008ef694*/
      goto LABEL_47; /*0x1008ef694*/
    v42 = v7; /*0x1008ef69b*/
    v43 = v6; /*0x1008ef69e*/
    goto LABEL_46; /*0x1008ef69e*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v54) ) /*0x1008ef11d*/
  {
    v52[0] = v7; /*0x1008ef12a*/
    v44[0] = v4; /*0x1008ef131*/
    v44[1] = v5; /*0x1008ef138*/
    v63 = v44; /*0x1008ef146*/
    v64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008ef151*/
    v65 = v52; /*0x1008ef15c*/
    v66 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008ef167*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, (char *)&loc_1017D26B5 + 6, &v63); /*0x1008ef17d*/
    a1[3] = v47[2]; /*0x1008ef189*/
    v8 = v47[0]; /*0x1008ef18e*/
    a1[2] = v47[1]; /*0x1008ef19c*/
    a1[1] = v8; /*0x1008ef1a1*/
    *a1 = 10; /*0x1008ef1a6*/
    result = v52[0]; /*0x1008ef1ae*/
    if ( (v52[0] & 3) != 1 ) /*0x1008ef1bd*/
      goto LABEL_47; /*0x1008ef1bd*/
    v70 = v4; /*0x1008ef1c3*/
    v10 = v52[0] - 1LL; /*0x1008ef1c7*/
    v11 = *(_QWORD *)(v52[0] - 1LL); /*0x1008ef1cb*/
    v12 = *(_QWORD *)(v52[0] + 7LL); /*0x1008ef1cf*/
    if ( *(_QWORD *)v12 ) /*0x1008ef1d3*/
      (*(void (__fastcall **)(__int64))v12)(v11); /*0x1008ef1de*/
    v13 = *(_QWORD *)(v12 + 8); /*0x1008ef1e0*/
    if ( v13 ) /*0x1008ef1e7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1008ef1f0*/
    v14 = v10; /*0x1008ef1ff*/
  }
  else
  {
    a1[1] = 0; /*0x1008ef3e3*/
    a1[2] = 8; /*0x1008ef3ec*/
    a1[3] = 0; /*0x1008ef3f5*/
    *((_DWORD *)a1 + 8) = 0; /*0x1008ef3fe*/
    *a1 = 11; /*0x1008ef407*/
    result = (unsigned __int8)v7 & 3; /*0x1008ef412*/
    if ( (_DWORD)result != 1 ) /*0x1008ef418*/
      goto LABEL_47; /*0x1008ef418*/
    v70 = v4; /*0x1008ef41e*/
    v20 = *(_QWORD *)((char *)v7 - 1); /*0x1008ef426*/
    v21 = *(_QWORD *)((char *)v7 + 7); /*0x1008ef42a*/
    if ( *(_QWORD *)v21 ) /*0x1008ef42e*/
      (*(void (__fastcall **)(_QWORD))v21)(*(_QWORD *)((char *)v7 - 1)); /*0x1008ef439*/
    v22 = *(_QWORD *)(v21 + 8); /*0x1008ef43b*/
    if ( v22 ) /*0x1008ef442*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1008ef44b*/
    v14 = (__int64)v7 - 1; /*0x1008ef45a*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x1008ef45d*/
  v4 = v70; /*0x1008ef462*/
LABEL_47:
  if ( v49 ) /*0x1008ef6b0*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v49, 1); /*0x1008ef6ba*/
  return result; /*0x1008ef6bf*/
}