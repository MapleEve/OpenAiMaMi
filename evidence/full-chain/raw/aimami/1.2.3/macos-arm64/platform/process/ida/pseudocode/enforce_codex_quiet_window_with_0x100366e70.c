// __ZN13codexmate_lib8platform7process31enforce_codex_quiet_window_with @ 0x100366e70 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::enforce_codex_quiet_window_with::hd856baa2e955d006(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // bl
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 i; // rbx
  __int64 v14; // r15
  unsigned int v15; // edx
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r12
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  int v22; // ecx
  char v23; // r13
  __int64 v24; // r13
  int v25; // edx
  __int64 v26; // rsi
  unsigned int v27; // edx
  bool v28; // cl
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 *v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rcx
  unsigned __int64 v45; // r15
  _QWORD *v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 result; // rax
  unsigned __int64 v50; // rsi
  __int64 *v51; // rax
  _QWORD v52[12]; // [rsp+0h] [rbp-230h] BYREF
  _QWORD v53[3]; // [rsp+60h] [rbp-1D0h] BYREF
  _QWORD v54[12]; // [rsp+78h] [rbp-1B8h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-158h]
  __int64 v56; // [rsp+E0h] [rbp-150h]
  char *v57; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-140h]
  void *v59; // [rsp+F8h] [rbp-138h]
  __int64 (__fastcall *v60)(); // [rsp+100h] [rbp-130h]
  bool *v61; // [rsp+108h] [rbp-128h]
  __int64 (__fastcall *v62)(); // [rsp+110h] [rbp-120h]
  _QWORD *v63; // [rsp+118h] [rbp-118h]
  __int64 (__fastcall *v64)(_QWORD, _QWORD); // [rsp+120h] [rbp-110h]
  __int64 v65; // [rsp+128h] [rbp-108h]
  unsigned __int64 v66; // [rsp+130h] [rbp-100h] BYREF
  __int64 v67; // [rsp+138h] [rbp-F8h]
  __int64 v68; // [rsp+140h] [rbp-F0h]
  char v69; // [rsp+148h] [rbp-E8h]
  __int16 v70; // [rsp+149h] [rbp-E7h]
  __int64 v71[12]; // [rsp+150h] [rbp-E0h] BYREF
  unsigned int v72; // [rsp+1B0h] [rbp-80h]
  int v73; // [rsp+1B4h] [rbp-7Ch]
  __int64 v74; // [rsp+1B8h] [rbp-78h]
  __int64 v75; // [rsp+1C0h] [rbp-70h]
  __int64 v76; // [rsp+1C8h] [rbp-68h]
  __int64 v77; // [rsp+1D0h] [rbp-60h]
  __int64 *v78; // [rsp+1D8h] [rbp-58h]
  int v79; // [rsp+1E4h] [rbp-4Ch]
  __int64 v80; // [rsp+1E8h] [rbp-48h]
  char v81; // [rsp+1F6h] [rbp-3Ah] BYREF
  char v82; // [rsp+1F7h] [rbp-39h] BYREF
  unsigned __int64 v83; // [rsp+1F8h] [rbp-38h]
  bool v84; // [rsp+207h] [rbp-29h] BYREF

  v73 = a4; /*0x100366e84*/
  v5 = a3; /*0x100366e87*/
  v78 = a1; /*0x100366e8c*/
  v77 = 0; /*0x100366e9f*/
  v7 = std::time::Instant::now::hda76af2c3a449055(a1, a2, a3, a4, a5); /*0x100366ea7*/
  v9 = v8; /*0x100366eaa*/
  v55 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100366eb6*/
          v7,
          v8,
          a2,
          0);
  v72 = v10; /*0x100366ebd*/
  v66 = 0; /*0x100366ec0*/
  v67 = 4; /*0x100366ecb*/
  v68 = 0; /*0x100366ed6*/
  v69 = v5; /*0x100366ee1*/
  v70 = 0; /*0x100366ee7*/
  v79 = 1000000000; /*0x100366ef0*/
  for ( i = 0x8000000000000000LL; ; i = v83 ) /*0x100366ef7*/
  {
    v14 = std::time::Instant::now::hda76af2c3a449055(v7, v9, v10, v11, v12); /*0x100366f09*/
    v16 = v15; /*0x100366f0c*/
    codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237(v71); /*0x100366f16*/
    v17 = v71[0]; /*0x100366f1b*/
    v54[0] = v71[1]; /*0x100366f30*/
    v54[1] = v71[2]; /*0x100366f37*/
    v54[2] = v71[3]; /*0x100366f42*/
    if ( v71[0] != 11 ) /*0x100366f4d*/
    {
      v33 = v78; /*0x10036735a*/
      v78[11] = v71[11]; /*0x10036735e*/
      v33[10] = v71[10]; /*0x100367369*/
      v33[9] = v71[9]; /*0x100367374*/
      v33[8] = v71[8]; /*0x10036737f*/
      v33[7] = v71[7]; /*0x10036738a*/
      v33[6] = v71[6]; /*0x100367395*/
      v34 = v71[4]; /*0x100367399*/
      v33[5] = v71[5]; /*0x1003673a7*/
      v33[4] = v34; /*0x1003673ab*/
      v33[3] = v54[2]; /*0x1003673b6*/
      v35 = v54[0]; /*0x1003673ba*/
      v33[2] = v54[1]; /*0x1003673c8*/
      v33[1] = v35; /*0x1003673cc*/
      *v33 = v17; /*0x1003673d0*/
      goto LABEL_66; /*0x1003673d3*/
    }
    v83 = i; /*0x100366f53*/
    v18 = v54[1]; /*0x100366f5e*/
    v74 = v54[0]; /*0x100366f65*/
    v75 = v54[1]; /*0x100366f69*/
    v19 = v54[2]; /*0x100366f6d*/
    v76 = v54[2]; /*0x100366f74*/
    v20 = codexmate_lib::platform::process::WriterGenerationTracker::observe::h6905b00f550c77af(&v66, v54[1], v54[2]); /*0x100366f85*/
    if ( v20 == 4 ) /*0x100366f8c*/
    {
      v21 = (unsigned int)(v77 + 1); /*0x100366f92*/
      if ( (_DWORD)v77 == -1 ) /*0x100366f99*/
        v21 = 0xFFFFFFFFLL; /*0x100366f99*/
      v77 = v21; /*0x100366f9c*/
    }
    if ( v20 <= 4u && (v22 = 22, _bittest(&v22, v20)) ) /*0x100366fb0*/
    {
      v23 = HIBYTE(v70) + 1; /*0x100366fc2*/
      if ( HIBYTE(v70) == 0xFF ) /*0x100366fcb*/
        v23 = -1; /*0x100366fcb*/
      v82 = v23; /*0x100366fcf*/
      codexmate_lib::platform::process::quiesce_codex_transition_targets::h08e03280cfcb606f(v52, v18, v19, v73); /*0x100366fe4*/
      if ( LODWORD(v52[0]) == 11 ) /*0x100366ff0*/
      {
        v70 = 1; /*0x100366ff2*/
        if ( 2 * v83 ) /*0x100366fff*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v83, 1); /*0x100367015*/
        i = 0x8000000000000000LL; /*0x10036701a*/
      }
      else
      {
        qmemcpy(v54, v52, sizeof(v54)); /*0x100367046*/
        v84 = (unsigned __int8)v23 >= 3u; /*0x10036704d*/
        HIBYTE(v70) = v23; /*0x100367051*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100367066*/
        {
          v57 = &v82; /*0x100367070*/
          v58 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x10036707e*/
          v59 = &unk_1015F8194; /*0x10036708c*/
          v60 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x100367093*/
          v61 = &v84; /*0x10036709e*/
          v62 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1003670ac*/
          v63 = v54; /*0x1003670b3*/
          v64 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1003670c1*/
          v71[6] = 2; /*0x1003670c8*/
          v71[7] = (__int64)"codexmate_lib::platform::process"; /*0x1003670da*/
          v71[8] = 32; /*0x1003670e1*/
          v71[10] = (__int64)&unk_1017BD289; /*0x1003670f3*/
          v71[11] = (__int64)&v57; /*0x100367101*/
          v71[0] = 0; /*0x100367108*/
          v71[1] = (__int64)"codexmate_lib::platform::process"; /*0x100367113*/
          v71[2] = 32; /*0x10036711a*/
          v71[3] = 0; /*0x100367125*/
          v71[4] = (__int64)"src/platform/process.rs"; /*0x100367137*/
          v71[5] = 23; /*0x10036713e*/
          v71[9] = 0x7A800000001LL; /*0x100367153*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v81, v71); /*0x100367165*/
        }
        v57 = nullptr; /*0x10036716a*/
        v58 = 1; /*0x100367175*/
        v59 = nullptr; /*0x100367180*/
        v71[2] = 1610612768; /*0x10036718b*/
        v71[0] = (__int64)&v57; /*0x10036719d*/
        v71[1] = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003671ab*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1003671bc*/
                                v54,
                                v71) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003676cf*/
            &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
            55,
            &v81,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
            &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
        i = (unsigned __int64)v57; /*0x1003671c9*/
        v24 = v58; /*0x1003671d0*/
        v65 = (__int64)v59; /*0x1003671de*/
        if ( 2 * v83 ) /*0x1003671e9*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v83, 1); /*0x10036721f*/
          if ( v84 ) /*0x100367228*/
          {
LABEL_56:
            v36 = v75; /*0x100367545*/
            v19 = v76; /*0x100367549*/
            v44 = 0; /*0x10036754d*/
            if ( i != 0x8000000000000000LL ) /*0x10036755c*/
              v44 = v24; /*0x10036755c*/
            codexmate_lib::platform::process::codex_transition_quiet_timeout::h1258379bc848e983(v71, v75, v76, v44, v65); /*0x100367574*/
            qmemcpy(v78, v71, 0x60u); /*0x100367589*/
            v80 = v24; /*0x100367593*/
            v83 = i; /*0x100367597*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v54); /*0x10036759b*/
            v80 = v24; /*0x1003675a0*/
            if ( !v19 ) /*0x1003675a7*/
            {
LABEL_64:
              v48 = v74; /*0x1003675e4*/
              if ( !v74 ) /*0x1003675eb*/
                goto LABEL_66; /*0x1003675eb*/
              goto LABEL_65; /*0x1003675eb*/
            }
LABEL_59:
            v45 = i; /*0x1003675a9*/
            v46 = (_QWORD *)(v36 + 16); /*0x1003675ac*/
            do /*0x1003675c7*/
            {
              v47 = *(v46 - 1); /*0x1003675c9*/
              if ( v47 ) /*0x1003675d0*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v46, v47, 1); /*0x1003675da*/
              v46 += 4; /*0x1003675c0*/
              --v19; /*0x1003675c4*/
            }
            while ( v19 ); /*0x1003675c7*/
            i = v45; /*0x1003675e1*/
            goto LABEL_64; /*0x1003675e1*/
          }
        }
        else if ( v84 ) /*0x1003671fa*/
        {
          goto LABEL_56; /*0x1003671fa*/
        }
        v80 = v24; /*0x10036722e*/
        v83 = i; /*0x100367232*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v54); /*0x10036723d*/
        v80 = v24; /*0x100367242*/
      }
      v19 = v76; /*0x100367246*/
    }
    else
    {
      i = v83; /*0x100367210*/
    }
    v71[0] = v14; /*0x10036724a*/
    LODWORD(v71[1]) = v16; /*0x100367251*/
    v83 = i; /*0x10036725b*/
    if ( v19 ) /*0x10036725f*/
    {
      v79 = 1000000000; /*0x100367261*/
      goto LABEL_34; /*0x100367268*/
    }
    v25 = v79; /*0x100367270*/
    if ( v79 == 1000000000 ) /*0x100367279*/
      v25 = v16; /*0x100367279*/
    v26 = v56; /*0x10036727d*/
    if ( v79 == 1000000000 ) /*0x100367284*/
      v26 = v14; /*0x100367284*/
    v56 = v26; /*0x10036728f*/
    v79 = v25; /*0x100367296*/
    if ( std::time::Instant::saturating_duration_since::h410d6264cd78ba4e(v71) ) /*0x100367299*/
      break; /*0x100367299*/
    i = v83; /*0x1003672ad*/
    if ( v27 > 0x29B926FF ) /*0x1003672b1*/
      break; /*0x1003672b1*/
LABEL_34:
    v28 = v14 >= v55; /*0x1003672b7*/
    if ( v14 == v55 ) /*0x1003672cc*/
      v28 = v16 >= v72; /*0x1003672cc*/
    if ( v28 ) /*0x1003672d1*/
    {
      v36 = v75; /*0x1003673d8*/
      v37 = 0; /*0x1003673dc*/
      if ( i != 0x8000000000000000LL ) /*0x1003673eb*/
        v37 = v80; /*0x1003673eb*/
      codexmate_lib::platform::process::codex_transition_quiet_timeout::h1258379bc848e983(v71, v75, v19, v37, v65); /*0x100367404*/
      qmemcpy(v78, v71, 0x60u); /*0x100367419*/
      i = v83; /*0x10036741c*/
      if ( !v19 ) /*0x100367423*/
        goto LABEL_64; /*0x100367423*/
      goto LABEL_59; /*0x100367423*/
    }
    v7 = 0; /*0x1003672d7*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1003672de*/
    v29 = v75; /*0x1003672e3*/
    if ( v19 ) /*0x1003672ea*/
    {
      v30 = 32 * v19; /*0x1003672ec*/
      v31 = 0; /*0x1003672f0*/
      do /*0x100367307*/
      {
        v32 = *(_QWORD *)(v29 + v31 + 8); /*0x100367309*/
        if ( v32 ) /*0x100367311*/
        {
          v7 = *(_QWORD *)(v29 + v31 + 16); /*0x100367313*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v32, 1); /*0x10036731d*/
        }
        v31 += 32; /*0x100367300*/
      }
      while ( v30 != v31 ); /*0x100367307*/
    }
    v9 = v74; /*0x100367330*/
    if ( v74 ) /*0x100367337*/
    {
      v9 = 32 * v74; /*0x10036733d*/
      v7 = v29; /*0x100367346*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 32 * v74, 8); /*0x100367349*/
    }
  }
  codexmate_lib::platform::process::protected_codex_db_holders::he3dae47a4922cb14((__int64)v52); /*0x100367435*/
  v38 = v52[2]; /*0x10036743a*/
  if ( v52[2] ) /*0x100367444*/
  {
    v39 = v52[1]; /*0x10036744a*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v71, v52[1], v52[2], " | ps-ocodexmate_lib::platform::process", 3); /*0x10036746b*/
    v54[2] = v71[2]; /*0x100367477*/
    v54[1] = v71[1]; /*0x10036748c*/
    v54[0] = v71[0]; /*0x100367493*/
    v71[0] = (__int64)v54; /*0x1003674a1*/
    v71[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003674af*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1015F8049, v71); /*0x1003674cb*/
    if ( v54[0] ) /*0x1003674da*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[1], v54[0], 1); /*0x1003674e8*/
    v40 = v78; /*0x1003674f4*/
    v78[3] = v53[2]; /*0x1003674f8*/
    v41 = v53[0]; /*0x1003674fc*/
    v40[2] = v53[1]; /*0x10036750a*/
    v40[1] = v41; /*0x10036750e*/
    *v40 = 10; /*0x100367512*/
    v42 = (_QWORD *)(v39 + 8); /*0x100367519*/
    do /*0x100367527*/
    {
      v43 = *(v42 - 1); /*0x10036752d*/
      if ( v43 ) /*0x100367534*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x10036753e*/
      v42 += 3; /*0x100367520*/
      --v38; /*0x100367524*/
    }
    while ( v38 ); /*0x100367527*/
  }
  else
  {
    v51 = v78; /*0x10036765d*/
    *((_DWORD *)v78 + 2) = v77; /*0x100367665*/
    *v51 = 11; /*0x100367668*/
    v39 = v52[1]; /*0x10036766f*/
  }
  if ( v52[0] ) /*0x100367680*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24LL * v52[0], 8); /*0x100367692*/
  v36 = v75; /*0x100367697*/
  i = v83; /*0x10036769b*/
  v48 = v74; /*0x10036769f*/
  if ( v74 ) /*0x1003676a6*/
LABEL_65:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 32 * v48, 8); /*0x1003675ed*/
LABEL_66:
  result = 2 * i; /*0x1003675fe*/
  if ( 2 * i ) /*0x1003675fe*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, i, 1); /*0x10036764a*/
    v50 = v66; /*0x10036764f*/
    if ( v66 ) /*0x100367659*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 4 * v50, 4); /*0x100367617*/
  }
  else
  {
    v50 = v66; /*0x10036760b*/
    if ( v66 ) /*0x100367615*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 4 * v50, 4); /*0x100367615*/
  }
  return result; /*0x10036762c*/
}