// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x100690c30 depth=1
__m256i *__fastcall codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h59fef3b5d2f283ae(
        __m256i *a1,
        _QWORD *a2,
        double a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r15
  __int128 v7; // kr00_16
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v12; // rdi
  _QWORD **v14; // r13
  size_t v15; // r12
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rax
  _BYTE *v31; // rax
  bool v32; // r12
  char v33; // r12
  void *v34; // r14
  size_t v35; // r15
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // r12
  void (__fastcall *v41)(__int64); // rax
  __int8 v42; // r14
  void *v43; // r14
  size_t v44; // r15
  __int64 v45; // r12
  char v46; // r13
  void *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int128 v51; // kr30_16
  __int128 v52; // kr40_16
  __int128 v53; // xmm0
  _QWORD **v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // r12
  __int64 v58; // rsi
  _QWORD **v59; // rdi
  __int64 v60; // rax
  __int64 v61; // [rsp+8h] [rbp-158h] BYREF
  void *__src; // [rsp+10h] [rbp-150h]
  size_t v63; // [rsp+18h] [rbp-148h]
  __int64 v64; // [rsp+20h] [rbp-140h] BYREF
  __int128 v65; // [rsp+28h] [rbp-138h]
  size_t __n; // [rsp+38h] [rbp-128h]
  __int64 v67; // [rsp+40h] [rbp-120h] BYREF
  void *v68; // [rsp+48h] [rbp-118h]
  size_t v69; // [rsp+50h] [rbp-110h]
  void *__s2; // [rsp+58h] [rbp-108h]
  __m256i v71[5]; // [rsp+60h] [rbp-100h] BYREF
  size_t v72; // [rsp+100h] [rbp-60h]
  __int64 v73; // [rsp+108h] [rbp-58h]
  __m256i v74; // [rsp+110h] [rbp-50h] BYREF
  __int8 v75; // [rsp+137h] [rbp-29h]

  v4 = a2[73]; /*0x100690c4a*/
  v5 = a2[74]; /*0x100690c51*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v61, v4, v5, "virtual-auth-marker.json", 24); /*0x100690c72*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v67, v4, v5, &unk_1012D1358, 26); /*0x100690c91*/
  std::path::Path::_join::hb1a495d4f06b13b8(v71, v4, v5, "virtual-auth-marker.json", 24); /*0x100690cb0*/
  v6 = v71[0].i64[1]; /*0x100690cb5*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v74, v71[0].i64[1], v71[0].i64[2]); /*0x100690cca*/
  if ( v71[0].i64[0] ) /*0x100690cd9*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v71[0].i64[0], 1); /*0x100690ce3*/
  v7 = v74.i128[0]; /*0x100690cec*/
  if ( __OFSUB__(-v74.i64[0], 1) ) /*0x100690cf3*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9( /*0x100690d05*/
      0x8000000000000000LL,
      v74.i64[1]);
LABEL_11:
    v9 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, v63); /*0x100690dbd*/
    if ( (v9 & 3) == 1 ) /*0x100690dd8*/
    {
      v21 = v9 - 1; /*0x100690f33*/
      v22 = *(_QWORD *)(v9 - 1); /*0x100690f36*/
      v23 = *(_QWORD *)(v9 + 7); /*0x100690f3a*/
      if ( *(_QWORD *)v23 ) /*0x100690f3e*/
        (*(void (__fastcall **)(__int64))v23)(v22); /*0x100690f4a*/
      v24 = *(_QWORD *)(v23 + 8); /*0x100690f4c*/
      if ( v24 ) /*0x100690f54*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x100690f5e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x100690f70*/
    }
    v10 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v68, v69); /*0x100690dec*/
    if ( (v10 & 3) == 1 ) /*0x100690df9*/
    {
      v25 = v10 - 1; /*0x100690f7d*/
      v26 = *(_QWORD *)(v10 - 1); /*0x100690f80*/
      v27 = *(_QWORD *)(v10 + 7); /*0x100690f84*/
      if ( *(_QWORD *)v27 ) /*0x100690f88*/
        (*(void (__fastcall **)(__int64))v27)(v26); /*0x100690f94*/
      v28 = *(_QWORD *)(v27 + 8); /*0x100690f96*/
      if ( v28 ) /*0x100690f9e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x100690fa8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x100690fba*/
    }
    a1->i8[8] = 0; /*0x100690dff*/
    a1->i64[0] = 10; /*0x100690e03*/
LABEL_14:
    v11 = v67; /*0x100690e0a*/
    if ( !v67 ) /*0x100690e14*/
      goto LABEL_17; /*0x100690e14*/
    v12 = v68; /*0x100690e16*/
    goto LABEL_16; /*0x100690e16*/
  }
  v71[0].i128[0] = *(__int128 *)((char *)v74.i128 + 8); /*0x100690d13*/
  v71[0].i128[1] = 0u; /*0x100690d21*/
  v71[1].i128[0] = *(__int128 *)((char *)v74.i128 + 8); /*0x100690d37*/
  serde_json::de::from_trait::ha66106f1abfbbd91(&v74, v71); /*0x100690d50*/
  v8 = v74.i64[0]; /*0x100690d5f*/
  if ( v74.i64[0] != 0x8000000000000000LL ) /*0x100690d66*/
  {
    __n = v74.u64[2]; /*0x100690d87*/
    __s2 = (void *)v74.i64[1]; /*0x100690d87*/
    v75 = v74.i8[24]; /*0x100690d92*/
    if ( !(_QWORD)v7 ) /*0x100690d98*/
      goto LABEL_10; /*0x100690d98*/
    goto LABEL_9; /*0x100690d98*/
  }
  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v74.u32[2]); /*0x100690d6c*/
  if ( (_QWORD)v7 ) /*0x100690d74*/
LABEL_9:
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v7 + 1), v7, 1); /*0x100690d9a*/
LABEL_10:
  if ( v8 == 0x8000000000000000LL ) /*0x100690db7*/
    goto LABEL_11; /*0x100690db7*/
  v73 = v8; /*0x100690e59*/
  v14 = (_QWORD **)a2[4]; /*0x100690e5d*/
  v72 = a2[5]; /*0x100690e6f*/
  std::sys::fs::metadata::h32fa16d3052ea535(v71, v14, v72); /*0x100690e73*/
  v15 = __n; /*0x100690e78*/
  v16 = v71[0].i64[0]; /*0x100690e7f*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100690e90*/
    v71[0].i64[0],
    v71[0].i64[1]);
  if ( !v16 ) /*0x100690e98*/
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v64, v14, v72); /*0x100690ef3*/
    v19 = v64; /*0x100690ef8*/
    v20 = v65; /*0x100690eff*/
    if ( v64 == 0x8000000000000000LL ) /*0x100690f13*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9( /*0x100690f26*/
        0x8000000000000000LL,
        v65);
    }
    else
    {
      v71[0].i128[0] = v65; /*0x100691045*/
      v71[0].i128[1] = 0u; /*0x100691053*/
      v71[1].i128[0] = v65; /*0x100691069*/
      serde_json::de::from_trait::h13c6255c2aa0fc50(&v74, v71); /*0x100691082*/
      if ( v74.i8[0] != 6 ) /*0x10069108b*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v74); /*0x100691219*/
        if ( v19 ) /*0x100691221*/
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100691232*/
        goto LABEL_21; /*0x100691237*/
      }
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v74.u32[2]); /*0x100691095*/
      if ( v19 ) /*0x10069109d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x1006910aa*/
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006910bd*/
    {
      v71[1].i64[2] = 2; /*0x1006910c3*/
      v71[1].i64[3] = (__int64)"codexmate_lib::core::relay::legacy_virtual_auth"; /*0x1006910d5*/
      v71[2].i64[0] = 47; /*0x1006910dc*/
      v71[2].i64[2] = (__int64)"[AiMaMi][legacy-virtual-auth] auth.json is unreadable; preserving marker + backup for a later cleanupcodexmate_lib::core::relay::legacy_virtual_auth"; /*0x1006910ee*/
      v71[2].i64[3] = 203; /*0x1006910f5*/
      v71[0].i64[0] = 0; /*0x100691100*/
      v71[0].i64[1] = (__int64)"codexmate_lib::core::relay::legacy_virtual_auth"; /*0x10069110b*/
      v71[0].i128[1] = 0x2Fu; /*0x100691112*/
      v71[1].i64[0] = (__int64)"src/core/relay/legacy_virtual_auth.rs"; /*0x10069112f*/
      v71[1].i64[1] = 37; /*0x100691136*/
      v71[2].i64[1] = 0x4E00000001LL; /*0x10069114b*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v74, v71); /*0x10069115d*/
    }
    a1->i8[8] = 0; /*0x100691162*/
    a1->i64[0] = 10; /*0x100691166*/
    v29 = v73; /*0x10069116d*/
    goto LABEL_75; /*0x100691171*/
  }
LABEL_21:
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v71, v14, v72); /*0x100690e9a*/
  v18 = v71[0].i64[1]; /*0x100690eb4*/
  v17 = v71[0].i64[0]; /*0x100690eb4*/
  if ( v71[0].i64[0] == 0x8000000000000000LL ) /*0x100690ec8*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9( /*0x100690edb*/
      0x8000000000000000LL,
      v71[0].i64[1]);
    goto LABEL_63; /*0x100690ee0*/
  }
  v71[0].i128[0] = *(__int128 *)((char *)v71[0].i128 + 8); /*0x100690fcb*/
  v71[0].i128[1] = 0u; /*0x100690fd9*/
  v71[1].i128[0] = __PAIR128__(v71[0].u64[1], v18); /*0x100690fef*/
  serde_json::de::from_trait::h13c6255c2aa0fc50(&v74, v71); /*0x100691008*/
  if ( v74.i8[0] == 6 ) /*0x100691011*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v74.u32[2]); /*0x10069101b*/
    if ( v17 ) /*0x100691023*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100691034*/
    goto LABEL_63; /*0x100691039*/
  }
  v71[0] = v74; /*0x100691185*/
  v30 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1006911b5*/
          "OPENAI_API_KEY[AiMaMi][legacy-virtual-auth] auth.json is unreadable; preserving marker + backup for a later cl"
          "eanupcodexmate_lib::core::relay::legacy_virtual_auth",
          14,
          v71);
  if ( v30 && *(_BYTE *)v30 == 3 && *(_QWORD *)(v30 + 24) == v15 ) /*0x1006911c8*/
    LOBYTE(v15) = memcmp(*(const void **)(v30 + 16), __s2, v15) == 0; /*0x1006911df*/
  else
    LODWORD(v15) = 0; /*0x1006911e5*/
  v31 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1006911fb*/
                   "tokens",
                   6,
                   v71);
  LODWORD(__n) = v15; /*0x100691200*/
  if ( v31 ) /*0x10069120a*/
    v32 = *v31 == 0; /*0x10069120f*/
  else
    v32 = 1; /*0x10069123c*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v71); /*0x100691246*/
  v33 = v32 & __n; /*0x100691254*/
  if ( v17 ) /*0x10069125a*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100691267*/
  if ( !v33 ) /*0x10069126f*/
  {
LABEL_63:
    std::sys::fs::metadata::h32fa16d3052ea535(v71, v14, v72); /*0x100691360*/
    v42 = v71[0].i8[0]; /*0x100691373*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100691384*/
      v71[0].i64[0],
      v71[0].i64[1]);
    if ( ((unsigned __int8)v75 & (unsigned __int8)v42) != 1 /*0x1006913cc*/
      || (v43 = v68,
          v44 = v69,
          std::sys::fs::metadata::h32fa16d3052ea535(v71, v68, v69),
          v45 = v71[0].i64[0],
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605(
            v71[0].i64[0],
            v71[0].i64[1]),
          v45) )
    {
      v46 = 0; /*0x1006913d2*/
      goto LABEL_66; /*0x1006913d2*/
    }
    std::fs::read::inner::h6a30c15c40add28b(&v74, v43, v44); /*0x10069154f*/
    v51 = v74.i128[0]; /*0x100691558*/
    if ( v74.i64[0] == 0x8000000000000000LL ) /*0x100691569*/
    {
LABEL_82:
      codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h6f9b82aa98880d6a( /*0x10069156f*/
        v71,
        *((_QWORD *)&v51 + 1));
      v52 = v71[0].i128[1]; /*0x100691585*/
      a1[2] = v71[2]; /*0x10069159e*/
      a1[1] = v71[1]; /*0x1006915ca*/
      v53 = v71[0].i128[0]; /*0x1006915e4*/
      a1->i128[1] = v52; /*0x1006915eb*/
      a1->i128[0] = v53; /*0x1006915f3*/
      v29 = v73; /*0x1006915f6*/
LABEL_75:
      if ( v29 ) /*0x1006914e4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v29, 1); /*0x1006914f9*/
      goto LABEL_14; /*0x1006914fe*/
    }
    v54 = v14; /*0x100691603*/
    v29 = v73; /*0x10069160d*/
    v55 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x100691611*/
            v54,
            v72,
            v74.i64[1],
            v74.i64[2],
            a3);
    if ( v55 ) /*0x100691619*/
    {
      codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h6ba490fed81a8f92( /*0x100691629*/
        v71,
        v55);
      goto LABEL_85; /*0x100691629*/
    }
LABEL_96:
    v46 = 1; /*0x10069171f*/
    if ( (_QWORD)v51 ) /*0x100691725*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v51 + 1), v51, 1); /*0x100691736*/
    goto LABEL_66; /*0x10069173b*/
  }
  if ( (v75 & 1) != 0 ) /*0x100691279*/
  {
    v34 = v68; /*0x10069127b*/
    v35 = v69; /*0x100691282*/
    std::sys::fs::metadata::h32fa16d3052ea535(v71, v68, v69); /*0x100691296*/
    v36 = v71[0].i64[0]; /*0x10069129b*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1006912ac*/
      v71[0].i64[0],
      v71[0].i64[1]);
    if ( !v36 ) /*0x1006912b4*/
    {
      std::fs::read::inner::h6a30c15c40add28b(&v74, v34, v35); /*0x1006916bf*/
      v51 = v74.i128[0]; /*0x1006916d9*/
      if ( v74.i64[0] == 0x8000000000000000LL ) /*0x1006916d9*/
        goto LABEL_82; /*0x1006916d9*/
      v59 = v14; /*0x1006916f3*/
      v29 = v73; /*0x1006916fd*/
      v60 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x100691701*/
              v59,
              v72,
              v74.i64[1],
              v74.i64[2],
              a3);
      if ( v60 ) /*0x100691709*/
      {
        codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h9c8f502e2ce092c7( /*0x100691715*/
          v71,
          v60);
LABEL_85:
        qmemcpy(a1, v71, 0x60u); /*0x10069163d*/
        if ( (_QWORD)v51 ) /*0x100691643*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v51 + 1), v51, 1); /*0x100691654*/
        goto LABEL_75; /*0x100691659*/
      }
      goto LABEL_96; /*0x100691709*/
    }
  }
  v37 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v14, v72); /*0x1006912c1*/
  if ( v37 ) /*0x1006912c9*/
  {
    v64 = v37; /*0x1006912cf*/
    v74.i64[0] = (__int64)&v64; /*0x1006912dd*/
    v74.i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006912e8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v71, &unk_10122DC92, &v74); /*0x1006912fe*/
    v74.i128[0] = v71[0].i128[0]; /*0x100691311*/
    v74.i64[2] = v71[0].i64[2]; /*0x100691320*/
    v29 = v73; /*0x100691333*/
    if ( (v64 & 3) == 1 ) /*0x100691337*/
    {
      v38 = v64 - 1; /*0x10069133d*/
      v39 = *(_QWORD *)(v64 - 1); /*0x100691341*/
      v40 = *(_QWORD *)(v64 + 7); /*0x100691345*/
      v41 = *(void (__fastcall **)(__int64))v40; /*0x100691349*/
      if ( *(_QWORD *)v40 ) /*0x100691349*/
        goto LABEL_70; /*0x100691350*/
      goto LABEL_71; /*0x100691350*/
    }
LABEL_74:
    a1->i64[3] = v74.i64[2]; /*0x1006914c2*/
    *(__int128 *)((char *)a1->i128 + 8) = v74.i128[0]; /*0x1006914d6*/
    a1->i64[0] = 9; /*0x1006914da*/
    goto LABEL_75; /*0x1006914da*/
  }
  v46 = 1; /*0x1006916ad*/
LABEL_66:
  v47 = v68; /*0x1006913d5*/
  v48 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v68, v69); /*0x1006913e6*/
  if ( (v48 & 3) == 1 ) /*0x1006913f3*/
  {
    v72 = v48 - 1; /*0x100691664*/
    v56 = *(_QWORD *)(v48 - 1); /*0x100691668*/
    v57 = *(_QWORD *)(v48 + 7); /*0x10069166c*/
    if ( *(_QWORD *)v57 ) /*0x100691670*/
      (*(void (__fastcall **)(__int64))v57)(v56); /*0x10069167c*/
    v58 = *(_QWORD *)(v57 + 8); /*0x10069167e*/
    if ( v58 ) /*0x100691686*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v58, *(_QWORD *)(v57 + 16)); /*0x100691690*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24, 8); /*0x1006916a3*/
  }
  v49 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, v63); /*0x100691407*/
  if ( v49 ) /*0x10069140f*/
  {
    v64 = v49; /*0x100691415*/
    v74.i64[0] = (__int64)&v64; /*0x100691423*/
    v74.i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10069142e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v71, &unk_10122DC0C, &v74); /*0x100691444*/
    v74.i128[0] = v71[0].i128[0]; /*0x100691457*/
    v74.i64[2] = v71[0].i64[2]; /*0x100691466*/
    v29 = v73; /*0x100691479*/
    if ( (v64 & 3) == 1 ) /*0x10069147d*/
    {
      v38 = v64 - 1; /*0x10069147f*/
      v39 = *(_QWORD *)(v64 - 1); /*0x100691483*/
      v40 = *(_QWORD *)(v64 + 7); /*0x100691487*/
      v41 = *(void (__fastcall **)(__int64))v40; /*0x10069148b*/
      if ( *(_QWORD *)v40 ) /*0x10069148b*/
LABEL_70:
        v41(v39); /*0x100691494*/
LABEL_71:
      v50 = *(_QWORD *)(v40 + 8); /*0x100691499*/
      if ( v50 ) /*0x1006914a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v50, *(_QWORD *)(v40 + 16)); /*0x1006914ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 24, 8); /*0x1006914bd*/
      goto LABEL_74; /*0x1006914bd*/
    }
    goto LABEL_74; /*0x10069147d*/
  }
  a1->i8[8] = v46; /*0x100691503*/
  a1->i64[0] = 10; /*0x100691507*/
  if ( v73 ) /*0x100691515*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v73, 1); /*0x100691523*/
  v11 = v67; /*0x100691528*/
  if ( v67 ) /*0x100691532*/
  {
    v12 = v47; /*0x10069153d*/
LABEL_16:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100690e22*/
  }
LABEL_17:
  if ( v61 ) /*0x100690e31*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v61, 1); /*0x100690e3f*/
  return a1; /*0x100690e47*/
}