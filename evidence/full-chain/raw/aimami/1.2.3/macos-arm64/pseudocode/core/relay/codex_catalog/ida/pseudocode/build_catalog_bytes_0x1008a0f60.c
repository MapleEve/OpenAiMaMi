// __ZN13codexmate_lib4core5relay13codex_catalog19build_catalog_bytes @ 0x1008a0f60 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::build_catalog_bytes::h5ba4a4ead3b3a8a5(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        char a8)
{
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rbx
  size_t v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  const void *v17; // rsi
  int v18; // eax
  signed __int64 **v19; // rsi
  bool i; // zf
  signed __int64 *v21; // rax
  const void *v22; // r15
  size_t v23; // r12
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r15
  bool v28; // bl
  signed __int64 v29; // rsi
  __int64 v30; // r12
  unsigned __int64 v31; // r14
  size_t v32; // rax
  __int64 v33; // rdx
  size_t v34; // rbx
  unsigned __int64 v35; // r14
  size_t v36; // rax
  __int64 v37; // rdx
  signed __int64 *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  signed __int64 v41; // rdx
  signed __int64 *v42; // r14
  signed __int64 *v43; // rax
  __int64 v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rax
  signed __int64 *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // rdx
  signed __int64 *v51; // rdx
  signed __int64 **v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  _QWORD *v59; // r14
  __int64 v60; // rsi
  _QWORD *v61; // rdx
  _DWORD *v62; // rcx
  __int64 v63; // rdi
  __int64 j; // r15
  __int64 v65; // r12
  __int64 v66; // r13
  __int64 v67; // rdi
  unsigned __int64 v69; // rcx
  _QWORD *v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-210h] BYREF
  __int64 v72; // [rsp+8h] [rbp-208h]
  __int64 v73; // [rsp+10h] [rbp-200h]
  signed __int64 **v74; // [rsp+18h] [rbp-1F8h]
  __int64 v75; // [rsp+20h] [rbp-1F0h]
  __int64 v76; // [rsp+28h] [rbp-1E8h]
  __int64 v77; // [rsp+30h] [rbp-1E0h]
  __int64 v78; // [rsp+38h] [rbp-1D8h]
  __int64 v79; // [rsp+40h] [rbp-1D0h]
  __int64 v80; // [rsp+48h] [rbp-1C8h]
  __int64 v81; // [rsp+50h] [rbp-1C0h]
  __int64 v82; // [rsp+58h] [rbp-1B8h]
  _QWORD v83[11]; // [rsp+60h] [rbp-1B0h] BYREF
  _QWORD v84[2]; // [rsp+B8h] [rbp-158h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-148h]
  __int64 v86; // [rsp+D0h] [rbp-140h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-138h]
  __int64 v88; // [rsp+E0h] [rbp-130h]
  __int64 v89; // [rsp+E8h] [rbp-128h]
  _QWORD *v90; // [rsp+F0h] [rbp-120h] BYREF
  _QWORD *v91; // [rsp+F8h] [rbp-118h]
  signed __int64 *v92; // [rsp+100h] [rbp-110h]
  __int64 v93; // [rsp+108h] [rbp-108h]
  signed __int64 *v94; // [rsp+110h] [rbp-100h] BYREF
  _QWORD v95[11]; // [rsp+118h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+170h] [rbp-A0h]
  __int64 v97; // [rsp+178h] [rbp-98h]
  _QWORD *v98; // [rsp+180h] [rbp-90h]
  __int64 v99; // [rsp+188h] [rbp-88h]
  __int64 v100; // [rsp+190h] [rbp-80h] BYREF
  __int64 v101; // [rsp+198h] [rbp-78h]
  __int64 v102; // [rsp+1A0h] [rbp-70h]
  signed __int64 *v103; // [rsp+1A8h] [rbp-68h] BYREF
  __int64 v104; // [rsp+1B0h] [rbp-60h]
  signed __int64 *v105; // [rsp+1B8h] [rbp-58h]
  __int64 v106; // [rsp+1C0h] [rbp-50h]
  signed __int64 v107; // [rsp+1C8h] [rbp-48h] BYREF
  _DWORD *v108; // [rsp+1D0h] [rbp-40h]
  unsigned __int64 v109; // [rsp+1D8h] [rbp-38h]
  __int64 v110; // [rsp+1E0h] [rbp-30h]

  v80 = a3; /*0x1008a0f7d*/
  v98 = a1; /*0x1008a0f84*/
  codexmate_lib::core::relay::codex_catalog::load_official_models::h3b14ca3421b9b87d( /*0x1008a0f9d*/
    &v86,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  v12 = v87; /*0x1008a0fa2*/
  v99 = v88; /*0x1008a0fb0*/
  v103 = nullptr; /*0x1008a0fb7*/
  v104 = 8; /*0x1008a0fbf*/
  v105 = nullptr; /*0x1008a0fc7*/
  v13 = 8; /*0x1008a0fcf*/
  if ( a6 && a4 ) /*0x1008a0fe0*/
  {
    v82 = a5 + 24 * a6; /*0x1008a0fee*/
    v81 = 232 * a4; /*0x1008a0ffc*/
    v89 = v87 + 32 * v99; /*0x1008a1013*/
    v76 = 32 * v99; /*0x1008a101a*/
    v78 = 32 * v99 - 32; /*0x1008a1025*/
    v79 = v87 + 32; /*0x1008a1030*/
    v97 = v87; /*0x1008a1037*/
    do /*0x1008a105a*/
    {
      v77 = a5 + 24; /*0x1008a1065*/
      v14 = *(_QWORD *)(a5 + 16); /*0x1008a106c*/
      v15 = v81; /*0x1008a1071*/
      v16 = v80; /*0x1008a1078*/
      do /*0x1008a109e*/
      {
        if ( *(_QWORD *)(v16 + 16) == v14 ) /*0x1008a10a4*/
        {
          v17 = *(const void **)(a5 + 8); /*0x1008a10a6*/
          v96 = v16; /*0x1008a10ab*/
          v18 = memcmp(*(const void **)(v16 + 8), v17, v14); /*0x1008a10c0*/
          v16 = v96; /*0x1008a10c5*/
          if ( !v18 ) /*0x1008a10ce*/
          {
            codexmate_lib::core::relay::models::RelayProvider::exposed_models::h9992f3acf525d658(&v94, v96); /*0x1008a10da*/
            v19 = (signed __int64 **)v95[0]; /*0x1008a10e6*/
            v90 = (_QWORD *)v95[0]; /*0x1008a10ff*/
            v91 = (_QWORD *)v95[0]; /*0x1008a1106*/
            v92 = v94; /*0x1008a110d*/
            v75 = v95[0] + 96LL * v95[1]; /*0x1008a1114*/
            v93 = v75; /*0x1008a111b*/
            for ( i = v95[1] == 0; ; i = v74 == (signed __int64 **)v75 ) /*0x1008a1122*/
            {
              if ( i || (v91 = v19 + 12, v21 = *v19, qmemcpy(v83, v19 + 1, sizeof(v83)), v21 == (signed __int64 *)2) ) /*0x1008a116c*/
              {
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd3f8b631529bdb(&v90); /*0x1008a1047*/
                goto LABEL_5; /*0x1008a1047*/
              }
              v74 = v19 + 12; /*0x1008a1172*/
              v94 = v21; /*0x1008a1179*/
              qmemcpy(v95, v83, sizeof(v95)); /*0x1008a118f*/
              v22 = (const void *)v95[2]; /*0x1008a1192*/
              v23 = v95[3]; /*0x1008a1199*/
              if ( !v99 ) /*0x1008a11a8*/
                break; /*0x1008a11a8*/
              v24 = v76; /*0x1008a11aa*/
              v25 = v12; /*0x1008a11b1*/
              while ( 1 ) /*0x1008a11d9*/
              {
                v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a11d9*/
                        &anon_10420c9971c21f44d230d15b39fb3fec_727,
                        4,
                        v25);
                if ( v26 ) /*0x1008a11e1*/
                {
                  if ( *(_BYTE *)v26 == 3 /*0x1008a11f8*/
                    && *(_QWORD *)(v26 + 24) == v23
                    && !memcmp(*(const void **)(v26 + 16), v22, v23) )
                  {
                    break; /*0x1008a11f8*/
                  }
                }
                v25 += 32; /*0x1008a11c0*/
                v24 -= 32; /*0x1008a11c4*/
                if ( !v24 ) /*0x1008a11c8*/
                  goto LABEL_22; /*0x1008a11c8*/
              }
              v27 = v25; /*0x1008a1201*/
LABEL_50:
              codexmate_lib::core::relay::codex_catalog::make_relay_model_info::hc9ad5d2b44979e93( /*0x1008a1390*/
                &v107,
                v96,
                &v94,
                v25,
                v27);
              v38 = v105; /*0x1008a13ad*/
              if ( v105 == v103 ) /*0x1008a13b5*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v103); /*0x1008a13bb*/
              v39 = v104; /*0x1008a13c0*/
              v40 = 32LL * (_QWORD)v38; /*0x1008a13c7*/
              *(_QWORD *)(v104 + v40 + 24) = v110; /*0x1008a13cf*/
              *(_QWORD *)(v39 + v40 + 16) = v109; /*0x1008a13d8*/
              v41 = v107; /*0x1008a13dd*/
              *(_QWORD *)(v39 + v40 + 8) = v108; /*0x1008a13e5*/
              *(_QWORD *)(v39 + v40) = v41; /*0x1008a13ea*/
              v105 = (signed __int64 *)((char *)v38 + 1); /*0x1008a13f1*/
              if ( v95[1] ) /*0x1008a13ff*/
                *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[2], v95[1], 1); /*0x1008a140d*/
              if ( v95[7] != 0x8000000000000000LL && v95[7] ) /*0x1008a142b*/
                *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[8], v95[7], 1); /*0x1008a1439*/
              if ( v95[4] ) /*0x1008a1448*/
                *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95[5], v95[4], 1); /*0x1008a145a*/
              v19 = v74; /*0x1008a1130*/
            }
LABEL_22:
            *(double *)a7.i64 = codexmate_lib::core::relay::codex_catalog::model_tail_lower::hea6c4cd51fc9dd0a( /*0x1008a1210*/
                                  &v107,
                                  (__int64)v22,
                                  v23,
                                  a7);
            if ( v109 == 7 ) /*0x1008a122b*/
            {
              if ( !(*v108 ^ 0x2D747067 | *(_DWORD *)((char *)v108 + 3) ^ 0x362E352D) ) /*0x1008a1240*/
              {
                if ( v107 ) /*0x1008a124b*/
                  *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x1008a1252*/
LABEL_30:
                *(double *)a7.i64 = codexmate_lib::core::relay::codex_catalog::model_tail_lower::hea6c4cd51fc9dd0a( /*0x1008a127f*/
                                      &v107,
                                      (__int64)v22,
                                      v23,
                                      a7);
                if ( v99 ) /*0x1008a1296*/
                {
                  v30 = v79; /*0x1008a129c*/
                  v31 = v78; /*0x1008a12a3*/
                  while ( 1 ) /*0x1008a12b7*/
                  {
                    v32 = codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model::_$u7b$$u7b$closure$u7d$$u7d$::h4efe6e3dfa135df0( /*0x1008a12b7*/
                            (__int64)&v107,
                            v12);
                    v27 = v33; /*0x1008a12bc*/
                    v12 += 32; /*0x1008a12bf*/
                    if ( v33 ) /*0x1008a12c6*/
                      break; /*0x1008a12c6*/
                    v31 -= 32LL; /*0x1008a12c8*/
                    v30 += 32; /*0x1008a12cc*/
                    if ( v12 == v89 ) /*0x1008a12d7*/
                    {
                      v27 = 0; /*0x1008a12d9*/
LABEL_46:
                      v12 = v97; /*0x1008a1370*/
                      goto LABEL_47; /*0x1008a1370*/
                    }
                  }
                  if ( v12 == v89 ) /*0x1008a132e*/
                    goto LABEL_46; /*0x1008a132e*/
                  v34 = v32; /*0x1008a1330*/
                  v35 = v31 >> 5; /*0x1008a1333*/
                  v12 = v97; /*0x1008a1337*/
                  do /*0x1008a1347*/
                  {
                    v36 = codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model::_$u7b$$u7b$closure$u7d$$u7d$::h4efe6e3dfa135df0( /*0x1008a1350*/
                            (__int64)&v107,
                            v30);
                    if ( v37 && v34 <= v36 ) /*0x1008a135d*/
                    {
                      v34 = v36; /*0x1008a135d*/
                      v27 = v37; /*0x1008a1361*/
                    }
                    v30 += 32; /*0x1008a1340*/
                    --v35; /*0x1008a1344*/
                  }
                  while ( v35 ); /*0x1008a1347*/
                }
                else
                {
                  v27 = 0; /*0x1008a1322*/
                }
LABEL_47:
                if ( v107 ) /*0x1008a137e*/
                  *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x1008a1389*/
                v25 = 0; /*0x1008a138e*/
                goto LABEL_50; /*0x1008a138e*/
              }
LABEL_27:
              v28 = 0; /*0x1008a1266*/
              v29 = v107; /*0x1008a1268*/
              if ( v107 ) /*0x1008a126f*/
                goto LABEL_28; /*0x1008a126f*/
            }
            else
            {
              if ( v109 <= 7 ) /*0x1008a1260*/
                goto LABEL_27; /*0x1008a1260*/
              v28 = *(_QWORD *)v108 == 0x2D362E352D747067LL; /*0x1008a130d*/
              v29 = v107; /*0x1008a1310*/
              if ( v107 ) /*0x1008a1317*/
LABEL_28:
                *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v29, 1); /*0x1008a1271*/
            }
            if ( !v28 ) /*0x1008a127d*/
            {
              v25 = 0; /*0x1008a12f0*/
              v27 = 0; /*0x1008a12f2*/
              goto LABEL_50; /*0x1008a12f5*/
            }
            goto LABEL_30; /*0x1008a127d*/
          }
        }
        v16 += 232; /*0x1008a1090*/
        v15 -= 232; /*0x1008a1097*/
      }
      while ( v15 ); /*0x1008a109e*/
LABEL_5:
      a5 = v77; /*0x1008a104c*/
    }
    while ( v77 != v82 ); /*0x1008a105a*/
    v43 = v103; /*0x1008a1492*/
    v13 = v104; /*0x1008a1496*/
    v42 = v105; /*0x1008a149a*/
    if ( !a8 ) /*0x1008a14a2*/
      goto LABEL_62; /*0x1008a14a2*/
LABEL_60:
    v44 = v88; /*0x1008a146f*/
    v102 = v88; /*0x1008a1476*/
    v45 = v86; /*0x1008a147a*/
    v101 = v87; /*0x1008a1488*/
    v100 = v86; /*0x1008a148c*/
    goto LABEL_63; /*0x1008a1490*/
  }
  v42 = nullptr; /*0x1008a1464*/
  v43 = nullptr; /*0x1008a1467*/
  if ( a8 ) /*0x1008a146d*/
    goto LABEL_60; /*0x1008a146d*/
LABEL_62:
  v100 = 0; /*0x1008a14a4*/
  v101 = 8; /*0x1008a14ac*/
  v102 = 0; /*0x1008a14b4*/
  v45 = 0; /*0x1008a14bc*/
  v44 = 0; /*0x1008a14be*/
LABEL_63:
  v94 = (signed __int64 *)v13; /*0x1008a14c1*/
  v95[1] = v43; /*0x1008a14d3*/
  v95[0] = v13; /*0x1008a14da*/
  v95[2] = v13 + 32LL * (_QWORD)v42; /*0x1008a14e1*/
  if ( (unsigned __int64)v42 > v45 - v44 ) /*0x1008a14ee*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v100, v44, v42, 8, 32, v11); /*0x1008a19a5*/
    v44 = v102; /*0x1008a19aa*/
  }
  memcpy((void *)(v101 + 32 * v44), (const void *)v13, 32LL * (_QWORD)v42); /*0x1008a1505*/
  v102 = (__int64)v42 + v44; /*0x1008a150d*/
  v95[2] = v13; /*0x1008a1511*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v94); /*0x1008a151f*/
  v84[0] = 0; /*0x1008a1524*/
  v85 = 0; /*0x1008a152f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v94, v13); /*0x1008a153a*/
  v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1008a1549*/
  if ( !v46 ) /*0x1008a1551*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1008a19f3*/
  *(_WORD *)(v46 + 4) = 29548; /*0x1008a155a*/
  *(_DWORD *)v46 = 1701080941; /*0x1008a1560*/
  v71 = 6; /*0x1008a1566*/
  v72 = v46; /*0x1008a1571*/
  v73 = 6; /*0x1008a1578*/
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v94, &v100); /*0x1008a158e*/
  if ( (_BYTE)v94 == 6 ) /*0x1008a159a*/
  {
    v83[0] = v95[0]; /*0x1008a19ba*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008a19e2*/
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      v83,
      &off_10196D480,
      &off_10196D178);
  }
  v106 = v95[2]; /*0x1008a15a7*/
  v105 = (signed __int64 *)v95[1]; /*0x1008a15b2*/
  v104 = v95[0]; /*0x1008a15c4*/
  v103 = v94; /*0x1008a15c8*/
  v47 = v83; /*0x1008a15cc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v83, v84, &v71); /*0x1008a15e1*/
  if ( v83[0] == 0x8000000000000000LL ) /*0x1008a15f7*/
  {
    v48 = v83[1]; /*0x1008a15f9*/
    v49 = 32LL * v83[3]; /*0x1008a1607*/
    v110 = *(_QWORD *)(v83[1] + 32LL * v83[3] + 24); /*0x1008a1610*/
    v109 = *(_QWORD *)(v83[1] + 32LL * v83[3] + 16); /*0x1008a1619*/
    v50 = *(_QWORD *)(v83[1] + 32LL * v83[3]); /*0x1008a161d*/
    v108 = *(_DWORD **)(v83[1] + 32LL * v83[3] + 8); /*0x1008a1626*/
    v107 = v50; /*0x1008a162a*/
    *(_QWORD *)(v83[1] + v49 + 24) = v106; /*0x1008a1632*/
    *(_QWORD *)(v48 + v49 + 16) = v105; /*0x1008a163b*/
    v51 = v103; /*0x1008a1640*/
    v52 = (signed __int64 **)v104; /*0x1008a1644*/
    *(_QWORD *)(v48 + v49 + 8) = v104; /*0x1008a1648*/
    *(_QWORD *)(v48 + v49) = v51; /*0x1008a164d*/
    if ( (_BYTE)v107 != 6 ) /*0x1008a1655*/
    {
      v47 = &v107; /*0x1008a165b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v107); /*0x1008a165f*/
    }
  }
  else
  {
    v95[5] = v83[6]; /*0x1008a1670*/
    v95[4] = v83[5]; /*0x1008a167e*/
    v95[3] = v83[4]; /*0x1008a168c*/
    v95[2] = v83[3]; /*0x1008a169a*/
    v95[1] = v83[2]; /*0x1008a16a8*/
    v95[0] = v83[1]; /*0x1008a16bd*/
    v94 = (signed __int64 *)v83[0]; /*0x1008a16c4*/
    v93 = v106; /*0x1008a16cf*/
    v92 = v105; /*0x1008a16da*/
    v91 = (_QWORD *)v104; /*0x1008a16e9*/
    v90 = v103; /*0x1008a16f0*/
    v47 = &v107; /*0x1008a16f7*/
    v52 = &v94; /*0x1008a16fb*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1008a1709*/
      &v107,
      &v94,
      &v90);
  }
  v83[1] = v84[0]; /*0x1008a171c*/
  v83[2] = v84[1]; /*0x1008a1723*/
  v83[3] = v85; /*0x1008a1731*/
  LOBYTE(v83[0]) = 5; /*0x1008a1738*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v52); /*0x1008a173f*/
  v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1008a174e*/
  if ( !v53 ) /*0x1008a1756*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1008a1a04*/
  v107 = 128; /*0x1008a175c*/
  v108 = (_DWORD *)v53; /*0x1008a1764*/
  v109 = 0; /*0x1008a1768*/
  v94 = &v107; /*0x1008a1774*/
  v95[0] = &unk_101674AC8; /*0x1008a1782*/
  v95[1] = 2; /*0x1008a1789*/
  v95[2] = 0; /*0x1008a1794*/
  LOBYTE(v95[3]) = 0; /*0x1008a179f*/
  v58 = serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h420cf548e186d599( /*0x1008a17b9*/
          v83,
          &v94,
          v54,
          v55,
          v56,
          v57,
          v71,
          v72,
          v73);
  if ( v58 ) /*0x1008a17bf*/
  {
    if ( v107 ) /*0x1008a17c8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x1008a17d3*/
  }
  else
  {
    v58 = (__int64)v108; /*0x1008a17de*/
    if ( v107 != 0x8000000000000000LL ) /*0x1008a17ef*/
    {
      v69 = v109; /*0x1008a196d*/
      v70 = v98; /*0x1008a1971*/
      v98[1] = v107; /*0x1008a1978*/
      v70[2] = v58; /*0x1008a197c*/
      v70[3] = v69; /*0x1008a1980*/
      *v70 = 11; /*0x1008a1984*/
      goto LABEL_82; /*0x1008a198b*/
    }
  }
  v90 = (_QWORD *)v58; /*0x1008a17f5*/
  v107 = (signed __int64)&v90; /*0x1008a1803*/
  v108 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008a180e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v94, &unk_1017C5EC5, &v107); /*0x1008a1824*/
  v109 = v95[1]; /*0x1008a1830*/
  v108 = (_DWORD *)v95[0]; /*0x1008a1842*/
  v107 = (signed __int64)v94; /*0x1008a1846*/
  v59 = v90; /*0x1008a184a*/
  if ( *v90 == 1 ) /*0x1008a1858*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v90 + 1); /*0x1008a187c*/
  }
  else if ( !*v90 ) /*0x1008a1851*/
  {
    v60 = v90[2]; /*0x1008a185f*/
    if ( v60 ) /*0x1008a1866*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90[1], v60, 1); /*0x1008a1871*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 40, 8); /*0x1008a188e*/
  v61 = v98; /*0x1008a1893*/
  *v98 = 10; /*0x1008a189a*/
  v62 = v108; /*0x1008a18a5*/
  v61[1] = v107; /*0x1008a18a9*/
  v61[2] = v62; /*0x1008a18ad*/
  v61[3] = v109; /*0x1008a18b5*/
LABEL_82:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v83); /*0x1008a18b9*/
  v63 = v101; /*0x1008a18c5*/
  for ( j = v102 + 1; j != 1; --j ) /*0x1008a18cd*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v63); /*0x1008a18dd*/
    v63 += 32; /*0x1008a18e2*/
  }
  if ( v100 ) /*0x1008a18ee*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 32 * v100, 8); /*0x1008a18fd*/
  if ( !a8 ) /*0x1008a1906*/
  {
    v65 = v12; /*0x1008a1908*/
    v66 = v99 + 1; /*0x1008a1912*/
    v67 = v65; /*0x1008a1915*/
    while ( v66 != 1 ) /*0x1008a1924*/
    {
      --v66; /*0x1008a192a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v67); /*0x1008a192d*/
      v67 += 32; /*0x1008a1932*/
    }
    if ( v86 ) /*0x1008a1941*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, 32 * v86, 8); /*0x1008a194f*/
  }
  return v98; /*0x1008a195b*/
}