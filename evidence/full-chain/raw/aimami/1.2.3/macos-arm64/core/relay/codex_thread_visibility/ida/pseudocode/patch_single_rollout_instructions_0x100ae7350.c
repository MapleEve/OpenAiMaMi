// __ZN13codexmate_lib4core5relay23codex_thread_visibility33patch_single_rollout_instructions @ 0x100ae7350
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::patch_single_rollout_instructions | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_single_rollout_instructions::h190340ec452b586f(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        signed __int64 a5)
{
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rdi
  __int64 v22; // rsi
  _BYTE *v23; // rax
  void *v24; // rax
  _DWORD *v25; // rax
  _BYTE *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // r8
  _QWORD v44[3]; // [rsp+10h] [rbp-240h] BYREF
  _QWORD v45[3]; // [rsp+28h] [rbp-228h] BYREF
  __int64 v46; // [rsp+40h] [rbp-210h] BYREF
  __int64 v47; // [rsp+48h] [rbp-208h]
  __int64 v48; // [rsp+50h] [rbp-200h]
  __int64 v49; // [rsp+58h] [rbp-1F8h]
  __int64 v50; // [rsp+60h] [rbp-1F0h]
  __int64 v51; // [rsp+68h] [rbp-1E8h]
  void *v52; // [rsp+70h] [rbp-1E0h]
  _QWORD v53[2]; // [rsp+78h] [rbp-1D8h] BYREF
  __int64 v54; // [rsp+88h] [rbp-1C8h]
  __int64 v55; // [rsp+90h] [rbp-1C0h]
  __int64 v56; // [rsp+98h] [rbp-1B8h]
  __int64 v57; // [rsp+A0h] [rbp-1B0h]
  __int64 v58; // [rsp+A8h] [rbp-1A8h]
  __int64 v59; // [rsp+B0h] [rbp-1A0h]
  __int64 v60; // [rsp+B8h] [rbp-198h]
  _BYTE *v61; // [rsp+C0h] [rbp-190h]
  _QWORD *v62; // [rsp+C8h] [rbp-188h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-180h]
  __int64 v64; // [rsp+D8h] [rbp-178h]
  __int64 v65; // [rsp+E0h] [rbp-170h]
  _QWORD *v66; // [rsp+E8h] [rbp-168h] BYREF
  signed __int64 v67; // [rsp+F0h] [rbp-160h]
  __int64 v68; // [rsp+F8h] [rbp-158h]
  signed __int64 v69; // [rsp+100h] [rbp-150h]
  _QWORD *v70; // [rsp+108h] [rbp-148h] BYREF
  __int64 v71; // [rsp+110h] [rbp-140h]
  __int64 v72; // [rsp+118h] [rbp-138h]
  signed __int64 v73; // [rsp+120h] [rbp-130h]
  _QWORD *v74; // [rsp+128h] [rbp-128h] BYREF
  _QWORD *v75; // [rsp+130h] [rbp-120h]
  __int64 v76; // [rsp+138h] [rbp-118h]
  signed __int64 v77; // [rsp+140h] [rbp-110h]
  _QWORD *v78; // [rsp+148h] [rbp-108h] BYREF
  _QWORD v79[3]; // [rsp+150h] [rbp-100h] BYREF
  _QWORD *v80; // [rsp+168h] [rbp-E8h] BYREF
  _QWORD *v81; // [rsp+170h] [rbp-E0h] BYREF
  __int64 v82; // [rsp+178h] [rbp-D8h]
  __int64 v83; // [rsp+180h] [rbp-D0h]
  _QWORD *v84; // [rsp+188h] [rbp-C8h] BYREF
  _QWORD *v85; // [rsp+190h] [rbp-C0h]
  __int64 v86; // [rsp+198h] [rbp-B8h]
  __int64 v87; // [rsp+1A0h] [rbp-B0h]
  __int64 v88; // [rsp+1A8h] [rbp-A8h]
  __int64 v89; // [rsp+1B0h] [rbp-A0h]
  __int64 v90; // [rsp+1B8h] [rbp-98h]
  _QWORD v91[12]; // [rsp+1C0h] [rbp-90h] BYREF
  __int64 v92; // [rsp+220h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(v91, a2, a3); /*0x100ae737a*/
  result = v91[0]; /*0x100ae737f*/
  v11 = v91[1]; /*0x100ae7386*/
  v55 = v91[2]; /*0x100ae7391*/
  v56 = v91[3]; /*0x100ae739c*/
  v57 = v91[4]; /*0x100ae73a7*/
  v58 = v91[5]; /*0x100ae73b2*/
  v59 = v91[6]; /*0x100ae73bd*/
  if ( v91[0] != 11 ) /*0x100ae73c8*/
  {
    a1[11] = v91[11]; /*0x100ae73e7*/
    a1[10] = v91[10]; /*0x100ae73ef*/
    a1[9] = v91[9]; /*0x100ae73f7*/
    v12 = v91[7]; /*0x100ae73fb*/
    a1[8] = v91[8]; /*0x100ae7403*/
    a1[7] = v12; /*0x100ae7407*/
    a1[6] = v59; /*0x100ae7412*/
    a1[5] = v58; /*0x100ae741d*/
    a1[4] = v57; /*0x100ae7428*/
    v13 = v55; /*0x100ae742c*/
    a1[3] = v56; /*0x100ae743a*/
    a1[2] = v13; /*0x100ae743e*/
    *a1 = result; /*0x100ae7442*/
    a1[1] = v11; /*0x100ae7445*/
    return result; /*0x100ae7449*/
  }
  result = -v91[1]; /*0x100ae73cd*/
  if ( __OFSUB__(-v91[1], 1) ) /*0x100ae73cd*/
  {
    *((_BYTE *)a1 + 8) = 0; /*0x100ae73d2*/
    *a1 = 11; /*0x100ae73d7*/
    return result; /*0x100ae73de*/
  }
  v51 = v59; /*0x100ae7455*/
  v50 = v58; /*0x100ae7463*/
  v49 = v57; /*0x100ae7471*/
  v48 = v56; /*0x100ae7486*/
  v47 = v55; /*0x100ae748d*/
  v60 = v91[1]; /*0x100ae7494*/
  v46 = v91[1]; /*0x100ae749b*/
  v91[0] = v55; /*0x100ae74a2*/
  v91[1] = v56; /*0x100ae74a9*/
  v91[2] = 0; /*0x100ae74b0*/
  v91[3] = 0; /*0x100ae74b8*/
  v91[4] = v55; /*0x100ae74c0*/
  v91[5] = v56; /*0x100ae74c4*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v84, v91); /*0x100ae74d6*/
  if ( (_BYTE)v84 == 6 ) /*0x100ae74e2*/
  {
    v70 = v85; /*0x100ae74ef*/
    v91[0] = &v70; /*0x100ae74fd*/
    v91[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100ae750b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017CB28D, v91); /*0x100ae7527*/
    v91[2] = v68; /*0x100ae7533*/
    v91[1] = v67; /*0x100ae7545*/
    v91[0] = v66; /*0x100ae754c*/
    v16 = v70; /*0x100ae7553*/
    if ( *v70 == 1 ) /*0x100ae7561*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v70 + 1, &unk_1017CB28D, v14, v67, v15); /*0x100ae769a*/
    }
    else if ( !*v70 ) /*0x100ae755a*/
    {
      v17 = v70[2]; /*0x100ae7570*/
      if ( v17 ) /*0x100ae7577*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70[1], v17, 1); /*0x100ae7586*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 40, 8); /*0x100ae76ac*/
    v62 = (_QWORD *)v91[0]; /*0x100ae76bf*/
    v74 = (_QWORD *)v91[0]; /*0x100ae76ce*/
    v75 = (_QWORD *)v91[1]; /*0x100ae76d5*/
    v76 = v91[2]; /*0x100ae76dc*/
    v77 = v91[3]; /*0x100ae76e3*/
    a1[4] = v91[3]; /*0x100ae76f1*/
    a1[3] = v76; /*0x100ae76fc*/
    result = (__int64)v74; /*0x100ae7700*/
    a1[2] = (__int64)v75; /*0x100ae770e*/
    a1[1] = result; /*0x100ae7712*/
    *a1 = 10; /*0x100ae7716*/
    goto LABEL_62; /*0x100ae771d*/
  }
  v74 = v84; /*0x100ae75ac*/
  v75 = v85; /*0x100ae75b3*/
  v83 = v87; /*0x100ae75ba*/
  v82 = v86; /*0x100ae75c1*/
  v81 = v85; /*0x100ae75c8*/
  v80 = v84; /*0x100ae75cf*/
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("payload", 7, &v80); /*0x100ae75e9*/
  if ( !v18 /*0x100ae762a*/
    || (v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &unk_10167D7AA,
                17,
                v18)) == 0
    || (v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                v19)) == 0
    || *(_BYTE *)v20 != 3
    || !*(_QWORD *)(v20 + 24) )
  {
    switch ( (char)v80 ) /*0x100ae7657*/
    {
      case 0: /*0x100ae7657*/
        LOBYTE(v78) = 0; /*0x100ae773e*/
        break; /*0x100ae7745*/
      case 1: /*0x100ae7657*/
      case 2: /*0x100ae7657*/
        v79[2] = v83; /*0x100ae7660*/
        v79[1] = v82; /*0x100ae766e*/
        v79[0] = v81; /*0x100ae7683*/
        v78 = v80; /*0x100ae768a*/
        break; /*0x100ae7691*/
      case 3: /*0x100ae7657*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v79, &v81); /*0x100ae7755*/
        LOBYTE(v78) = 3; /*0x100ae775a*/
        break; /*0x100ae7761*/
      case 4: /*0x100ae7657*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(v79, &v81); /*0x100ae7730*/
        LOBYTE(v78) = 4; /*0x100ae7735*/
        break; /*0x100ae773c*/
      case 5: /*0x100ae7657*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1( /*0x100ae7771*/
          v79,
          &v81);
        LOBYTE(v78) = 5; /*0x100ae7776*/
        break; /*0x100ae7776*/
    }
    v21 = "payload"; /*0x100ae777d*/
    v22 = 7; /*0x100ae778b*/
    v23 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100ae7790*/
                     "payload",
                     7,
                     &v78);
    if ( v23 && *v23 == 5 ) /*0x100ae77a1*/
    {
      v61 = v23; /*0x100ae77a7*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payload", 7); /*0x100ae77ae*/
      v92 = 17; /*0x100ae77b8*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x100ae77c6*/
      if ( !v24 ) /*0x100ae77ce*/
        goto LABEL_66; /*0x100ae77ce*/
      qmemcpy(v24, "base_instructions", 17); /*0x100ae77ec*/
      v45[0] = 17; /*0x100ae77f3*/
      v52 = v24; /*0x100ae77fe*/
      v45[1] = v24; /*0x100ae7805*/
      v45[2] = 17; /*0x100ae780c*/
      v53[0] = 0; /*0x100ae7817*/
      v54 = 0; /*0x100ae7822*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x100ae782d*/
      v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ae783c*/
      if ( !v25 ) /*0x100ae7844*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100ae7dfc*/
      v26 = v61 + 8; /*0x100ae7851*/
      *v25 = 1954047348; /*0x100ae7855*/
      v44[0] = 4; /*0x100ae785b*/
      v92 = (__int64)v25; /*0x100ae7866*/
      v44[1] = v25; /*0x100ae786a*/
      v44[2] = 4; /*0x100ae7871*/
      if ( a5 < 0 ) /*0x100ae787f*/
      {
        v27 = 0; /*0x100ae7881*/
        goto LABEL_30; /*0x100ae7881*/
      }
      v61 = v26; /*0x100ae7890*/
      if ( a5 ) /*0x100ae7897*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100ae7899*/
        v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x100ae78a6*/
        v27 = 1; /*0x100ae78ab*/
        if ( !v28 ) /*0x100ae78b3*/
LABEL_30:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, a5); /*0x100ae7883*/
      }
      else
      {
        v28 = 1; /*0x100ae78b7*/
      }
      v92 = v28; /*0x100ae78bf*/
      memcpy((void *)v28, a4, a5); /*0x100ae78c9*/
      LOBYTE(v66) = 3; /*0x100ae78ce*/
      v67 = a5; /*0x100ae78d5*/
      v68 = v92; /*0x100ae78e0*/
      v69 = a5; /*0x100ae78e7*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v84, v53, v44); /*0x100ae7903*/
      if ( v84 == (_QWORD *)0x8000000000000000LL ) /*0x100ae7919*/
      {
        v29 = v85; /*0x100ae791f*/
        v30 = 4 * v87; /*0x100ae792d*/
        v65 = v85[4 * v87 + 3]; /*0x100ae7936*/
        v64 = v85[4 * v87 + 2]; /*0x100ae7942*/
        v31 = (_QWORD *)v85[4 * v87]; /*0x100ae7949*/
        v63 = v85[4 * v87 + 1]; /*0x100ae7952*/
        v62 = v31; /*0x100ae7959*/
        v85[v30 + 3] = v69; /*0x100ae7967*/
        v29[v30 + 2] = v68; /*0x100ae7973*/
        v32 = v66; /*0x100ae7978*/
        v29[v30 + 1] = v67; /*0x100ae7986*/
        v29[v30] = v32; /*0x100ae798b*/
        if ( (_BYTE)v62 != 6 ) /*0x100ae7996*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v62); /*0x100ae79a3*/
      }
      else
      {
        v91[6] = v90; /*0x100ae79b4*/
        v91[5] = v89; /*0x100ae79bf*/
        v91[4] = v88; /*0x100ae79ca*/
        v91[3] = v87; /*0x100ae79d5*/
        v91[2] = v86; /*0x100ae79e0*/
        v91[1] = v85; /*0x100ae79f2*/
        v91[0] = v84; /*0x100ae79f9*/
        v77 = v69; /*0x100ae7a07*/
        v76 = v68; /*0x100ae7a15*/
        v75 = (_QWORD *)v67; /*0x100ae7a2a*/
        v74 = v66; /*0x100ae7a31*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ae7a4d*/
          &v62,
          v91,
          &v74);
      }
      v71 = v53[0]; /*0x100ae7a60*/
      v72 = v53[1]; /*0x100ae7a67*/
      v73 = v54; /*0x100ae7a75*/
      LOBYTE(v70) = 5; /*0x100ae7a7c*/
      v21 = (const char *)&v84; /*0x100ae7a83*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v84, v61, v45); /*0x100ae7a98*/
      if ( v84 == (_QWORD *)0x8000000000000000LL ) /*0x100ae7aa4*/
      {
        v33 = v85; /*0x100ae7aaa*/
        v34 = 4 * v87; /*0x100ae7ab8*/
        v65 = v85[4 * v87 + 3]; /*0x100ae7ac1*/
        v64 = v85[4 * v87 + 2]; /*0x100ae7acd*/
        v35 = (_QWORD *)v85[4 * v87]; /*0x100ae7ad4*/
        v63 = v85[4 * v87 + 1]; /*0x100ae7add*/
        v62 = v35; /*0x100ae7ae4*/
        v85[v34 + 3] = v73; /*0x100ae7af2*/
        v33[v34 + 2] = v72; /*0x100ae7afe*/
        v36 = v70; /*0x100ae7b03*/
        v22 = v71; /*0x100ae7b0a*/
        v33[v34 + 1] = v71; /*0x100ae7b11*/
        v33[v34] = v36; /*0x100ae7b16*/
        if ( (_BYTE)v62 != 6 ) /*0x100ae7b21*/
        {
          v21 = (const char *)&v62; /*0x100ae7b27*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v62); /*0x100ae7b2e*/
        }
      }
      else
      {
        v91[6] = v90; /*0x100ae7b3f*/
        v91[5] = v89; /*0x100ae7b4a*/
        v91[4] = v88; /*0x100ae7b55*/
        v91[3] = v87; /*0x100ae7b60*/
        v91[2] = v86; /*0x100ae7b6b*/
        v91[1] = v85; /*0x100ae7b7d*/
        v91[0] = v84; /*0x100ae7b84*/
        v77 = v73; /*0x100ae7b92*/
        v76 = v72; /*0x100ae7ba0*/
        v75 = (_QWORD *)v71; /*0x100ae7bb5*/
        v74 = v70; /*0x100ae7bbc*/
        v21 = (const char *)&v62; /*0x100ae7bc3*/
        v22 = (__int64)v91; /*0x100ae7bca*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ae7bd8*/
          &v62,
          v91,
          &v74);
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v22); /*0x100ae7bdd*/
    v92 = 128; /*0x100ae7be7*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100ae7bf5*/
    if ( v37 ) /*0x100ae7bfd*/
    {
      v91[0] = 128; /*0x100ae7c03*/
      v91[1] = v37; /*0x100ae7c0e*/
      v91[2] = 0; /*0x100ae7c15*/
      v62 = v91; /*0x100ae7c24*/
      v38 = (_QWORD *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4( /*0x100ae7c3e*/
                        &v78,
                        &v62);
      if ( v38 ) /*0x100ae7c44*/
      {
        if ( v91[0] ) /*0x100ae7c50*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91[1], v91[0], 1); /*0x100ae7c5e*/
      }
      else
      {
        v38 = (_QWORD *)v91[1]; /*0x100ae7c6c*/
        if ( v91[0] != 0x8000000000000000LL ) /*0x100ae7c80*/
        {
          v43 = v91[2]; /*0x100ae7dd2*/
          v84 = (_QWORD *)v91[0]; /*0x100ae7dd6*/
LABEL_54:
          codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084( /*0x100ae7cf1*/
            v91,
            a2,
            a3,
            v38,
            v43,
            v47,
            v48);
          if ( LODWORD(v91[0]) == 11 ) /*0x100ae7d1f*/
          {
            *((_BYTE *)a1 + 8) = 1; /*0x100ae7d21*/
            *a1 = 11; /*0x100ae7d26*/
            if ( v84 ) /*0x100ae7d37*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v84, 1); /*0x100ae7d41*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v78); /*0x100ae7d4d*/
            result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v80); /*0x100ae7d59*/
            goto LABEL_62; /*0x100ae7d5e*/
          }
          qmemcpy(a1, v91, 0x60u); /*0x100ae7d6f*/
          if ( v84 ) /*0x100ae7d7c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v84, 1); /*0x100ae7d86*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v78); /*0x100ae7d92*/
          goto LABEL_61; /*0x100ae7d92*/
        }
      }
      v91[0] = v38; /*0x100ae7c86*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v84, &v46); /*0x100ae7c9b*/
      if ( *v38 == 1 ) /*0x100ae7ca8*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v38 + 1, &v46, v39, v40, v41); /*0x100ae7ccc*/
      }
      else if ( !*v38 ) /*0x100ae7ca0*/
      {
        v42 = v38[2]; /*0x100ae7caf*/
        if ( v42 ) /*0x100ae7cb6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[1], v42, 1); /*0x100ae7cc1*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 40, 8); /*0x100ae7cde*/
      v38 = v85; /*0x100ae7ce3*/
      v43 = v86; /*0x100ae7cea*/
      goto LABEL_54; /*0x100ae7cea*/
    }
LABEL_66:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v92); /*0x100ae7de2*/
  }
  *((_BYTE *)a1 + 8) = 0; /*0x100ae7631*/
  *a1 = 11; /*0x100ae7636*/
LABEL_61:
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v80); /*0x100ae7d97*/
LABEL_62:
  if ( v60 ) /*0x100ae7dad*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v60, 1); /*0x100ae7dbb*/
  return result; /*0x100ae7dc0*/
}