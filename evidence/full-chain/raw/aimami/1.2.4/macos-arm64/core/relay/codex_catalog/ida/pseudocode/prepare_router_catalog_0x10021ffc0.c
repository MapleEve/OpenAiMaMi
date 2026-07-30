// __ZN13codexmate_lib4core5relay13codex_catalog22prepare_router_catalog @ 0x10021ffc0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::prepare_router_catalog::h626f8f1fe1bcca94(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  size_t v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 *v19; // rsi
  bool i; // zf
  __int64 *v21; // r8
  __int64 v22; // rax
  __int64 *v23; // rsi
  const void *v24; // r12
  size_t v25; // r15
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // r14
  __int64 v38; // r12
  unsigned __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  void *v45; // rbx
  unsigned __int64 v46; // r14
  size_t v47; // r15
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 j; // r12
  __int64 v56; // r12
  _QWORD *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rdi
  _QWORD v62[10]; // [rsp+10h] [rbp-200h] BYREF
  __int64 v63; // [rsp+60h] [rbp-1B0h]
  __int64 v64; // [rsp+68h] [rbp-1A8h]
  __int64 v65; // [rsp+70h] [rbp-1A0h]
  __int64 v66; // [rsp+78h] [rbp-198h]
  __int64 v67; // [rsp+80h] [rbp-190h]
  __int64 v68; // [rsp+88h] [rbp-188h]
  __int64 v69; // [rsp+90h] [rbp-180h]
  __int64 v70; // [rsp+98h] [rbp-178h]
  __int64 v71; // [rsp+A0h] [rbp-170h]
  _QWORD *v72; // [rsp+A8h] [rbp-168h]
  _QWORD v73[11]; // [rsp+B0h] [rbp-160h] BYREF
  _QWORD *v74; // [rsp+108h] [rbp-108h] BYREF
  __int64 *v75; // [rsp+110h] [rbp-100h]
  _QWORD v76[13]; // [rsp+118h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+180h] [rbp-90h] BYREF
  void *__src; // [rsp+188h] [rbp-88h]
  unsigned __int64 v79; // [rsp+190h] [rbp-80h]
  __int64 v80; // [rsp+198h] [rbp-78h]
  __int64 v81; // [rsp+1A0h] [rbp-70h]
  __int64 v82; // [rsp+1A8h] [rbp-68h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp-60h]
  __int64 v84; // [rsp+1B8h] [rbp-58h]
  __int64 v85; // [rsp+1C0h] [rbp-50h]
  __int64 v86; // [rsp+1C8h] [rbp-48h] BYREF
  __int64 (__fastcall *v87)(); // [rsp+1D0h] [rbp-40h]
  __int64 v88; // [rsp+1D8h] [rbp-38h]
  __int64 v89; // [rsp+1E0h] [rbp-30h]

  v72 = a1; /*0x10021ffe0*/
  codexmate_lib::core::relay::codex_catalog::load_official_catalog_snapshot::habb5579c0ab2db89( /*0x10021fff9*/
    v62,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  v85 = v62[1]; /*0x100220005*/
  v13 = v62[2]; /*0x100220009*/
  v81 = v62[2]; /*0x100220014*/
  if ( a7 ) /*0x100220018*/
  {
    v82 = 0; /*0x10022001e*/
    v83 = 8; /*0x100220026*/
    v84 = 0; /*0x10022002e*/
    if ( a6 ) /*0x100220039*/
    {
      v65 = a3; /*0x10022003f*/
      v14 = 32LL * v62[2]; /*0x100220049*/
      if ( a4 ) /*0x100220050*/
      {
        v71 = 32LL * v62[2]; /*0x100220056*/
        v67 = a5 + 24 * a6; /*0x100220066*/
        v66 = 232 * a4; /*0x100220074*/
        do /*0x10022008e*/
        {
          v15 = a5; /*0x100220094*/
          v64 = a5 + 24; /*0x10022009b*/
          v16 = *(_QWORD *)(a5 + 16); /*0x1002200a2*/
          v17 = v66; /*0x1002200a6*/
          v18 = v65; /*0x1002200ad*/
          while ( *(_QWORD *)(v18 + 16) != v16 || memcmp(*(const void **)(v18 + 8), *(const void **)(v15 + 8), v16) ) /*0x1002200e8*/
          {
            v18 += 232; /*0x1002200c0*/
            v17 -= 232; /*0x1002200c7*/
            if ( !v17 ) /*0x1002200ce*/
              goto LABEL_5; /*0x1002200ce*/
          }
          codexmate_lib::core::relay::models::RelayProvider::exposed_models::h2ff218b9bb419776(v76, v18); /*0x1002200f4*/
          v19 = (__int64 *)v76[1]; /*0x100220100*/
          v77 = v76[1]; /*0x100220119*/
          __src = (void *)v76[1]; /*0x100220120*/
          v79 = v76[0]; /*0x100220127*/
          v63 = v76[1] + 96LL * v76[2]; /*0x10022012b*/
          v80 = v63; /*0x100220132*/
          for ( i = v76[2] == 0; !i; i = v75 == (__int64 *)v63 ) /*0x100220136*/
          {
            v21 = v19 + 12; /*0x10022015b*/
            __src = v19 + 12; /*0x10022015f*/
            v22 = *v19; /*0x100220166*/
            v23 = v19 + 1; /*0x100220169*/
            qmemcpy(v73, v23, sizeof(v73)); /*0x100220175*/
            v19 = v23 + 11; /*0x100220175*/
            if ( v22 == 2 ) /*0x10022017c*/
              break; /*0x10022017c*/
            v75 = v21; /*0x100220182*/
            v76[0] = v22; /*0x100220189*/
            qmemcpy(&v76[1], v73, 0x58u); /*0x10022019f*/
            v24 = (const void *)v76[3]; /*0x1002201a2*/
            v25 = v76[4]; /*0x1002201a9*/
            if ( v81 ) /*0x1002201b5*/
            {
              v26 = v71; /*0x1002201b7*/
              v27 = v85; /*0x1002201be*/
              while ( 1 ) /*0x1002201e9*/
              {
                v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002201e9*/
                        "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
                        4,
                        v27);
                if ( v28 ) /*0x1002201f1*/
                {
                  if ( *(_BYTE *)v28 == 3 /*0x100220208*/
                    && *(_QWORD *)(v28 + 24) == v25
                    && !memcmp(*(const void **)(v28 + 16), v24, v25) )
                  {
                    break; /*0x100220208*/
                  }
                }
                v27 += 32; /*0x1002201d0*/
                v26 -= 32; /*0x1002201d4*/
                if ( !v26 ) /*0x1002201d8*/
                  goto LABEL_22; /*0x1002201d8*/
              }
              v29 = v27; /*0x100220211*/
            }
            else
            {
LABEL_22:
              v29 = codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model::h5e270f64266c46df( /*0x100220220*/
                      v24,
                      v25,
                      v85,
                      v81);
              v27 = 0; /*0x100220233*/
            }
            codexmate_lib::core::relay::codex_catalog::make_relay_model_info::h2cd79ddf5e2a04dc( /*0x100220249*/
              &v86,
              v18,
              v76,
              v27,
              v29);
            v30 = v84; /*0x10022024e*/
            if ( v84 == v82 ) /*0x100220256*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v82); /*0x10022025c*/
            v31 = v83; /*0x100220261*/
            v32 = 32 * v30; /*0x100220268*/
            *(_QWORD *)(v83 + v32 + 24) = v89; /*0x100220270*/
            *(_QWORD *)(v31 + v32 + 16) = v88; /*0x100220279*/
            v33 = v86; /*0x10022027e*/
            *(_QWORD *)(v31 + v32 + 8) = v87; /*0x100220286*/
            *(_QWORD *)(v31 + v32) = v33; /*0x10022028b*/
            v84 = v30 + 1; /*0x100220292*/
            if ( v76[2] ) /*0x1002202a0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[3], v76[2], 1); /*0x1002202ae*/
            if ( v76[8] != 0x8000000000000000LL && v76[8] ) /*0x1002202cc*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[9], v76[8], 1); /*0x1002202da*/
            if ( v76[5] ) /*0x1002202e9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76[6], v76[5], 1); /*0x1002202fb*/
            v19 = v75; /*0x100220140*/
          }
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h505c428a5ddff2d5( /*0x100220317*/
            &v77,
            v19,
            v73);
          v13 = v81; /*0x10022031c*/
LABEL_5:
          a5 = v64; /*0x100220080*/
        }
        while ( v64 != v67 ); /*0x10022008e*/
        v14 = v71; /*0x10022041e*/
      }
    }
    else
    {
      v14 = 32LL * v62[2]; /*0x10022042a*/
    }
    v79 = v84; /*0x100220432*/
    __src = (void *)v83; /*0x10022043e*/
    v77 = v82; /*0x100220445*/
    if ( v13 >> 59 != 0 || v14 > 0x7FFFFFFFFFFFFFF8LL ) /*0x100220467*/
    {
      v34 = 0; /*0x10022046e*/
      goto LABEL_38; /*0x10022046e*/
    }
    if ( v14 ) /*0x100220484*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10022048a*/
      v34 = 8; /*0x10022048f*/
      v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 8); /*0x10022049d*/
      if ( !v35 ) /*0x1002204a5*/
LABEL_38:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v14); /*0x100220471*/
      v36 = v35; /*0x1002204a7*/
      v73[0] = v13; /*0x1002204aa*/
      v73[1] = v35; /*0x1002204b1*/
      if ( v13 ) /*0x1002204bb*/
      {
        v37 = v14; /*0x1002204c1*/
        v38 = v85 + 24; /*0x1002204c8*/
        v75 = (__int64 *)(v85 + 8); /*0x1002204d0*/
        v39 = 0; /*0x1002204d7*/
        v40 = 0; /*0x1002204e1*/
        do /*0x10022052a*/
        {
          if ( v37 == v39 ) /*0x100220533*/
            break; /*0x100220533*/
          v42 = (__int64 *)(v38 + v39 - 24); /*0x100220539*/
          switch ( *(_BYTE *)v42 ) /*0x100220548*/
          {
            case 0: /*0x100220548*/
              LOBYTE(v76[0]) = 0; /*0x1002204e6*/
              break; /*0x1002204e6*/
            case 1: /*0x100220548*/
            case 2: /*0x100220548*/
              v76[3] = *(_QWORD *)(v38 + v39); /*0x10022054e*/
              v76[2] = v42[2]; /*0x100220559*/
              v43 = *v42; /*0x100220560*/
              v76[1] = v42[1]; /*0x100220567*/
              v76[0] = v43; /*0x10022056e*/
              break; /*0x100220575*/
            case 3: /*0x100220548*/
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1002205b4*/
                &v76[1],
                &v75[v39 / 8]);
              LOBYTE(v76[0]) = 3; /*0x1002205c0*/
              break; /*0x1002205c7*/
            case 4: /*0x100220548*/
              _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h052fd23693ef7657( /*0x10022058a*/
                &v76[1],
                *(_QWORD *)(v38 + v39 - 8),
                *(_QWORD *)(v38 + v39));
              LOBYTE(v76[0]) = 4; /*0x100220596*/
              break; /*0x10022059d*/
            case 5: /*0x100220548*/
              if ( *(_QWORD *)(v38 + v39) ) /*0x1002205cc*/
              {
                v44 = *(_QWORD *)(v38 + v39 - 16); /*0x1002205d3*/
                if ( !v44 ) /*0x1002205db*/
                  core::option::unwrap_failed::h44626cade04bbf1e(&anon_0c22962ad8183617843af04262484590_936); /*0x100220ae9*/
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::hca7349e8cab510fb( /*0x1002205ed*/
                  &v76[1],
                  v44,
                  *(_QWORD *)(v38 + v39 - 8));
              }
              else
              {
                v76[1] = 0; /*0x1002205fb*/
                v76[3] = 0; /*0x100220606*/
              }
              LOBYTE(v76[0]) = 5; /*0x100220611*/
              break; /*0x100220618*/
          }
          ++v40; /*0x1002204f0*/
          *(_QWORD *)(v36 + v39 + 24) = v76[3]; /*0x1002204fa*/
          *(_QWORD *)(v36 + v39 + 16) = v76[2]; /*0x100220506*/
          v41 = v76[0]; /*0x10022050b*/
          *(_QWORD *)(v36 + v39 + 8) = v76[1]; /*0x100220519*/
          *(_QWORD *)(v36 + v39) = v41; /*0x10022051e*/
          v39 += 32LL; /*0x100220522*/
        }
        while ( v81 != v40 ); /*0x10022052a*/
      }
    }
    else
    {
      v73[0] = 0; /*0x10022061d*/
      v73[1] = 8; /*0x100220628*/
    }
    v86 = v73[0]; /*0x100220641*/
    v87 = (__int64 (__fastcall *)())v73[1]; /*0x100220645*/
    v88 = v81; /*0x10022064d*/
    v45 = __src; /*0x100220658*/
    v46 = v79; /*0x10022065f*/
    v47 = 32 * v79; /*0x100220666*/
    v76[0] = __src; /*0x10022066e*/
    v76[2] = v77; /*0x100220675*/
    v76[1] = __src; /*0x10022067c*/
    v76[3] = (char *)__src + 32 * v79; /*0x100220683*/
    if ( v79 > v73[0] - v81 ) /*0x100220690*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v86, v81, v79, 8, 32); /*0x100220ad4*/
      v48 = v88; /*0x100220ad9*/
    }
    else
    {
      v48 = v81; /*0x100220696*/
    }
    memcpy((char *)v87 + 32 * v48, v45, v47); /*0x1002206aa*/
    v88 = v48 + v46; /*0x1002206b2*/
    v76[3] = v45; /*0x1002206b6*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he78e36ca37a8346e(v76); /*0x1002206c4*/
    v82 = v86; /*0x1002206d1*/
    v83 = (__int64)v87; /*0x1002206d5*/
    v84 = v88; /*0x1002206dd*/
  }
  else
  {
    codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference::h2650e5fed1d457cb( /*0x10022034c*/
      (unsigned int)v73,
      a3,
      a4,
      a5,
      a6,
      a8,
      a9,
      1);
    v76[0] = v73[1]; /*0x10022036e*/
    v76[1] = v73[1]; /*0x100220375*/
    v76[2] = v73[0]; /*0x10022037c*/
    v76[3] = v73[1] + 72LL * v73[2]; /*0x100220383*/
    v76[4] = a3; /*0x10022038a*/
    v76[5] = a4; /*0x100220391*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h08242c5fce00d719( /*0x1002203a3*/
      &v86,
      v76);
    v76[0] = v87; /*0x1002203c2*/
    v76[1] = v87; /*0x1002203c9*/
    v76[2] = v86; /*0x1002203d0*/
    v76[3] = (char *)v87 + 136 * v88; /*0x1002203d7*/
    v76[4] = 0; /*0x1002203de*/
    v76[5] = a3; /*0x1002203e9*/
    v76[6] = a4; /*0x1002203f0*/
    v76[7] = v85; /*0x1002203fb*/
    v76[8] = v13; /*0x100220402*/
    alloc::vec::in_place_collect::from_iter_in_place::h963c6b9e413c6253(&v82, v76); /*0x100220414*/
  }
  v77 = 0; /*0x1002206e1*/
  v79 = 0; /*0x1002206ec*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1002206f4*/
  v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100220703*/
  if ( !v49 ) /*0x10022070b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100220afa*/
  *(_WORD *)(v49 + 4) = 29548; /*0x100220714*/
  *(_DWORD *)v49 = 1701080941; /*0x10022071a*/
  v86 = 6; /*0x100220720*/
  v87 = (__int64 (__fastcall *)())v49; /*0x100220728*/
  v88 = 6; /*0x10022072c*/
  serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(v76, &v82); /*0x10022073f*/
  if ( LOBYTE(v76[0]) == 6 ) /*0x10022074b*/
  {
    v73[0] = v76[1]; /*0x100220a93*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100220abb*/
      "called `Result::unwrap()` on an `Err` valueError2.10.3",
      43,
      v73,
      &off_10196B8F0,
      &off_10196B150);
  }
  v73[3] = v76[3]; /*0x100220758*/
  v73[2] = v76[2]; /*0x100220766*/
  v73[1] = v76[1]; /*0x10022077b*/
  v73[0] = v76[0]; /*0x100220782*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v76, &v77, &v86, v73); /*0x1002207a2*/
  if ( LOBYTE(v76[0]) != 6 ) /*0x1002207ae*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v76); /*0x1002207b7*/
  v76[1] = v77; /*0x1002207ca*/
  v76[2] = __src; /*0x1002207d1*/
  v76[3] = v79; /*0x1002207dc*/
  LOBYTE(v76[0]) = 5; /*0x1002207e3*/
  serde_json::ser::to_vec_pretty::h7a5f028df46729a2(&v77, v76); /*0x1002207f8*/
  v50 = v77; /*0x1002207fd*/
  if ( v77 == 0x8000000000000000LL ) /*0x100220811*/
  {
    v74 = __src; /*0x10022081e*/
    v86 = (__int64)&v74; /*0x10022082c*/
    v87 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100220837*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v73, &unk_1017C1D53, &v86); /*0x10022084d*/
    v88 = v73[2]; /*0x100220859*/
    v87 = (__int64 (__fastcall *)())v73[1]; /*0x10022086b*/
    v86 = v73[0]; /*0x10022086f*/
    v51 = v74; /*0x100220873*/
    if ( *v74 == 1 ) /*0x100220881*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341(v74 + 1); /*0x1002208d4*/
    }
    else if ( !*v74 ) /*0x10022087a*/
    {
      v52 = v74[2]; /*0x100220888*/
      if ( v52 ) /*0x10022088f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[1], v52, 1); /*0x10022089a*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 40, 8); /*0x1002208e6*/
    v73[0] = v86; /*0x1002208f3*/
    v73[1] = v87; /*0x1002208fa*/
    v73[2] = v88; /*0x100220905*/
    v53 = 10; /*0x10022090c*/
  }
  else
  {
    v73[2] = v79; /*0x1002208a5*/
    v73[1] = __src; /*0x1002208ba*/
    v73[0] = v77; /*0x1002208c1*/
    v53 = 11; /*0x1002208c8*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v76); /*0x100220919*/
  v54 = v83; /*0x10022091e*/
  for ( j = v84 + 1; j != 1; --j ) /*0x100220926*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(); /*0x10022093d*/
    v54 += 32; /*0x100220942*/
  }
  if ( v82 ) /*0x10022094e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 32 * v82, 8); /*0x10022095d*/
  v68 = v73[0]; /*0x100220970*/
  v69 = v73[1]; /*0x100220977*/
  v70 = v73[2]; /*0x100220985*/
  v56 = v81; /*0x100220999*/
  if ( v50 == 0x8000000000000000LL ) /*0x10022099d*/
  {
    v57 = v72; /*0x1002209a6*/
    v72[4] = v70; /*0x1002209ad*/
    v58 = v68; /*0x1002209b1*/
    v57[3] = v69; /*0x1002209bf*/
    v57[2] = v58; /*0x1002209c3*/
    v57[1] = v53; /*0x1002209c7*/
    *v57 = 0x8000000000000000LL; /*0x1002209cb*/
    v59 = v56 + 1; /*0x1002209ce*/
    v60 = v85; /*0x1002209d1*/
    while ( v59 != 1 ) /*0x1002209e4*/
    {
      --v59; /*0x1002209ea*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(); /*0x1002209ed*/
      v60 += 32; /*0x1002209f2*/
    }
    if ( v62[0] ) /*0x100220a63*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 32LL * v62[0], 8); /*0x100220a72*/
  }
  else
  {
    v76[2] = v70; /*0x1002209fe*/
    v76[1] = v69; /*0x100220a13*/
    v76[0] = v68; /*0x100220a1a*/
    qmemcpy(&v76[3], v62, 0x50u); /*0x100220a34*/
    v57 = v72; /*0x100220a43*/
    qmemcpy(v72, v76, 0x68u); /*0x100220a4d*/
    *((_BYTE *)v57 + 104) = a7; /*0x100220a54*/
  }
  return v57; /*0x100220a7a*/
}