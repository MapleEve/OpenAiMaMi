// __ZN13codexmate_lib4core5relay10translator33anthropic_to_openai_chat_response @ 0x100876350 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_to_openai_chat_response::h428dcf028609ad21(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  const char *v9; // rbx
  signed __int64 v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  size_t v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  const void *v19; // rbx
  __int64 v20; // rcx
  char v21; // r15
  __int64 v22; // rax
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rsi
  __m256i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __m256i *v31; // rdi
  __int64 v32; // rsi
  __m256i *v33; // rbx
  _WORD *v34; // rax
  void *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // r14
  _WORD *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  void *v41; // rbx
  __m256i *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __m256i *v46; // rsi
  _DWORD *v47; // rax
  _QWORD *v48; // rax
  __m256i *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __m256i *v53; // rsi
  _QWORD *v54; // rax
  __int64 v55; // r14
  _DWORD *v56; // rax
  __int64 v57; // r14
  __int64 v58; // rax
  size_t v59; // rbx
  __m256i *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __m256i *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // r14
  size_t v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rax
  char v74; // r12
  __int64 v75; // rax
  char *v76; // rbx
  void *v77; // rdx
  __int64 v78; // r14
  __int64 v79; // rax
  char v80; // r14
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rbx
  char *v84; // rdi
  __int64 v85; // rcx
  size_t v86; // rdx
  _DWORD *v87; // rax
  __int64 v88; // rax
  __m256i *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __m256i *v93; // rsi
  __int8 v94; // al
  __m256i *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  __m256i *v99; // rsi
  __int32 v100; // eax
  void *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rbx
  __int64 v106; // r15
  _WORD *v107; // rax
  __int64 v108; // rax
  void *v109; // rbx
  __m256i *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __m256i *v114; // rsi
  __int64 v115; // rax
  void *v116; // rax
  __m256i *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rdx
  __m256i *v121; // rsi
  __int64 v122; // r15
  __int64 v123; // rax
  __int64 v124; // rax
  __m256i *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  __m256i *v129; // rsi
  _DWORD *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // r13
  __int64 v134; // rax
  __m256i *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rdx
  __m256i *v139; // rsi
  _DWORD *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  __m256i *v144; // rsi
  void *v145; // rax
  size_t v146; // rcx
  __int64 v147; // r14
  __int64 v148; // rax
  __int64 v149; // r13
  __int64 v150; // r14
  void *v151; // r13
  __int64 v152; // rdx
  __m256i *v153; // rdi
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __m256i *v157; // rsi
  __int64 v158; // rax
  unsigned __int64 *v159; // rax
  __int64 v160; // r14
  __int64 v161; // rdx
  __int64 v162; // rdx
  unsigned __int64 v163; // rsi
  __int64 v164; // rdx
  __int64 v165; // rbx
  __int64 v166; // rax
  __int64 v167; // rdi
  __int64 i; // r15
  __m256i v170; // [rsp+28h] [rbp-248h] BYREF
  __int128 v171; // [rsp+48h] [rbp-228h] BYREF
  __int64 v172; // [rsp+58h] [rbp-218h]
  __int64 v173; // [rsp+60h] [rbp-210h]
  __int64 v174; // [rsp+68h] [rbp-208h] BYREF
  _QWORD *v175; // [rsp+70h] [rbp-200h]
  __int64 v176; // [rsp+78h] [rbp-1F8h]
  __int128 v177; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v178; // [rsp+90h] [rbp-1E0h]
  __int64 v179; // [rsp+98h] [rbp-1D8h]
  __int128 v180; // [rsp+A0h] [rbp-1D0h] BYREF
  __int64 v181; // [rsp+B0h] [rbp-1C0h]
  __m256i v182; // [rsp+B8h] [rbp-1B8h] BYREF
  __int128 v183; // [rsp+D8h] [rbp-198h] BYREF
  __int64 v184; // [rsp+E8h] [rbp-188h]
  void *v185; // [rsp+F0h] [rbp-180h]
  __int128 v186; // [rsp+F8h] [rbp-178h] BYREF
  __int64 v187; // [rsp+108h] [rbp-168h]
  void *v188; // [rsp+110h] [rbp-160h]
  __int64 v189; // [rsp+118h] [rbp-158h]
  __int64 v190; // [rsp+120h] [rbp-150h]
  size_t v191; // [rsp+128h] [rbp-148h]
  void *v192; // [rsp+130h] [rbp-140h]
  __m256i v193; // [rsp+138h] [rbp-138h] BYREF
  __m256i v194; // [rsp+158h] [rbp-118h] BYREF
  __int64 v195; // [rsp+178h] [rbp-F8h]
  __int64 v196; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v197; // [rsp+188h] [rbp-E8h]
  __int64 v198; // [rsp+190h] [rbp-E0h]
  __int64 v199; // [rsp+198h] [rbp-D8h]
  __m256i v200; // [rsp+1A0h] [rbp-D0h] BYREF
  __int64 v201; // [rsp+1C0h] [rbp-B0h]
  __int64 v202; // [rsp+1C8h] [rbp-A8h]
  __int64 v203; // [rsp+1D0h] [rbp-A0h]
  __m256i v204; // [rsp+1D8h] [rbp-98h] BYREF
  __int64 v205; // [rsp+1F8h] [rbp-78h]
  __int64 v206; // [rsp+200h] [rbp-70h]
  __int64 v207; // [rsp+208h] [rbp-68h]
  __m256i v208; // [rsp+210h] [rbp-60h] BYREF
  size_t __n; // [rsp+230h] [rbp-40h]
  void *__src; // [rsp+238h] [rbp-38h]
  void *__dst; // [rsp+240h] [rbp-30h]

  *(_QWORD *)&v177 = 0;
  *((_QWORD *)&v177 + 1) = 1;
  v178 = 0;
  *(_QWORD *)&v186 = 0;
  *((_QWORD *)&v186 + 1) = 8;
  v187 = 0;
  v179 = a2;
  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "contentpattern.output_modehead_limit",
         7,
         a2);
  if ( v3 )
  {
    if ( *(_BYTE *)v3 == 4 )
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v3 + 16);
        v6 = 32 * v4;
        v195 = 1;
        v7 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
        v190 = 0;
        while ( 1 )
        {
          v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &anon_10420c9971c21f44d230d15b39fb3fec_75,
                  4,
                  v5);
          if ( v11 && *(_BYTE *)v11 == 3 )
          {
            v12 = *(_DWORD **)(v11 + 16);
            v13 = *(_QWORD *)(v11 + 24);
            if ( v13 != 8 )
            {
              if ( v13 == 4 && *v12 == 1954047348 )
              {
                v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        &anon_10420c9971c21f44d230d15b39fb3fec_110,
                        4,
                        v5);
                if ( v14 )
                {
                  if ( *(_BYTE *)v14 == 3 )
                  {
                    __src = *(void **)(v14 + 16);
                    v16 = *(_QWORD *)(v14 + 24);
                    if ( v16 > (__int64)v177 - v190 )
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                        &v177,
                        v190,
                        v16,
                        1,
                        1,
                        v15);
                      v195 = *((_QWORD *)&v177 + 1);
                      v190 = v178;
                    }
                    v17 = v190;
                    memcpy((void *)(v195 + v190), __src, v16);
                    v190 = v16 + v17;
                    v178 = v16 + v17;
                    v7 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
                  }
                }
              }
              goto LABEL_12;
            }
            if ( *(_QWORD *)v12 == 0x6573755F6C6F6F74LL )
              break;
          }
LABEL_12:
          v5 += 32;
          v6 -= 32;
          if ( !v6 )
            goto LABEL_6;
        }
        v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "idassistant",
                2,
                v5);
        __src = (void *)12;
        if ( v18 )
        {
          v19 = &unk_101674E13;
          if ( *(_BYTE *)v18 == 3 )
          {
            v20 = *(_QWORD *)(v18 + 24);
            if ( v20 < 0 )
            {
              v7 = 0;
              v10 = (signed __int64)__dst;
              goto LABEL_10;
            }
            __src = *(void **)(v18 + 24);
            v189 = a1;
            v19 = *(const void **)(v18 + 16);
            if ( !v20 )
            {
              __dst = (void *)1;
              v21 = 1;
              __src = nullptr;
              goto LABEL_31;
            }
            a1 = v189;
          }
        }
        else
        {
          v19 = &unk_101674E13;
        }
        v189 = a1;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
        v7 = 1;
        __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
        if ( !__dst )
        {
          v10 = (signed __int64)__src;
          goto LABEL_10;
        }
        v21 = 0;
LABEL_31:
        memcpy(__dst, v19, (size_t)__src);
        v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v5);
        __n = 4;
        if ( v22 )
        {
          v23 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
          if ( *(_BYTE *)v22 == 3 )
          {
            v24 = *(_QWORD *)(v22 + 24);
            if ( v24 < 0 )
            {
              v25 = 0;
              goto LABEL_115;
            }
            __n = *(_QWORD *)(v22 + 24);
            v23 = *(char **)(v22 + 16);
            if ( !v24 )
            {
              v192 = (void *)1;
              LOBYTE(v7) = 1;
              __n = 0;
              goto LABEL_39;
            }
          }
        }
        else
        {
          v23 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
        v25 = 1;
        v192 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
        if ( !v192 )
        {
          v192 = (void *)__n;
LABEL_115:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v192);
        }
        LODWORD(v7) = 0;
LABEL_39:
        memcpy(v192, v23, __n);
        v26 = 5;
        v27 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_146;
        v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                &anon_10420c9971c21f44d230d15b39fb3fec_146,
                5,
                v5);
        if ( v28 )
        {
          switch ( *(_BYTE *)v28 )
          {
            case 0:
              v204.i8[0] = 0;
              break;
            case 1:
            case 2:
              v204.i128[1] = *(_OWORD *)(v28 + 16);
              v29 = *(_QWORD *)v28;
              v204.i64[1] = *(_QWORD *)(v28 + 8);
              v204.i64[0] = v29;
              break;
            case 3:
              v26 = v28 + 8;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                &v204.u32[2],
                v28 + 8);
              v204.i8[0] = 3;
              break;
            case 4:
              v26 = v28 + 8;
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                &v204.u32[2],
                v28 + 8);
              v204.i8[0] = 4;
              break;
            case 5:
              if ( *(_QWORD *)(v28 + 24) )
              {
                v26 = *(_QWORD *)(v28 + 8);
                if ( !v26 )
                  core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                  &v204.u32[2],
                  v26,
                  *(_QWORD *)(v28 + 16));
              }
              else
              {
                v204.i64[1] = 0;
                v204.i64[3] = 0;
              }
              v204.i8[0] = 5;
              break;
          }
          v170 = v204;
          v204.i8[0] = 0;
          v27 = &v204;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v204);
        }
        else
        {
          v204.i8[0] = 0;
          v170 = v204;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v26);
        v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
        if ( !v30 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
        v204.i64[0] = 128;
        *(__int128 *)((char *)v204.i128 + 8) = (unsigned __int64)v30;
        v200.i64[0] = (__int64)&v204;
        v31 = &v170;
        v32 = (__int64)&v200;
        v33 = (__m256i *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4(
                           &v170,
                           &v200);
        LODWORD(v185) = v7;
        if ( v33 )
        {
          v32 = v204.i64[0];
          if ( v204.i64[0] )
          {
            v31 = (__m256i *)v204.i64[1];
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204.i64[1], v204.i64[0], 1);
          }
        }
        else
        {
          v33 = (__m256i *)v204.i64[1];
          v173 = v204.i64[0];
          if ( v204.i64[0] != 0x8000000000000000LL )
          {
            v191 = v204.u64[2];
            v188 = (void *)v204.i64[1];
LABEL_64:
            *(_QWORD *)&v183 = 0;
            v184 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v32);
            v37 = 2;
            v38 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
            if ( !v38 )
              goto LABEL_117;
            *v38 = 25705;
            v193.i64[0] = 2;
            v193.i64[1] = (__int64)v38;
            v193.i64[2] = 2;
            v39 = 1;
            if ( !v21 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
              v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
              if ( !v40 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __src);
              v39 = v40;
            }
            v41 = __src;
            memcpy((void *)v39, __dst, (size_t)__src);
            v208.i8[0] = 3;
            v208.i64[1] = (__int64)v41;
            v208.i64[2] = v39;
            v208.i64[3] = (__int64)v41;
            v42 = &v200;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v193);
            if ( v200.i64[0] == 0x8000000000000000LL )
            {
              v43 = v200.i64[1];
              v44 = 32 * v200.i64[3];
              v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
              v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
              v45 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
              v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
              v196 = v45;
              *(_OWORD *)(v200.i64[1] + v44 + 16) = v208.i128[1];
              v46 = (__m256i *)v208.i64[1];
              *(_OWORD *)(v43 + v44) = v208.i128[0];
              if ( (_BYTE)v196 != 6 )
              {
                v42 = (__m256i *)&v196;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
              }
            }
            else
            {
              v207 = v203;
              v206 = v202;
              v205 = v201;
              v204 = v200;
              v194 = v208;
              v42 = (__m256i *)&v196;
              v46 = &v204;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v196,
                &v204,
                &v194);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v46);
            v37 = 4;
            v47 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v47 )
              goto LABEL_117;
            *v47 = 1701869940;
            v193.i64[0] = 4;
            v193.i64[1] = (__int64)v47;
            v193.i64[2] = 4;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
            v48 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
            if ( !v48 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
            *v48 = 0x6E6F6974636E7566LL;
            v208.i8[0] = 3;
            v208.i64[1] = 8;
            v208.i64[2] = (__int64)v48;
            v208.i64[3] = 8;
            v49 = &v200;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v193);
            if ( v200.i64[0] == 0x8000000000000000LL )
            {
              v50 = v200.i64[1];
              v51 = 32 * v200.i64[3];
              v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
              v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
              v52 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
              v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
              v196 = v52;
              *(_OWORD *)(v200.i64[1] + v51 + 16) = v208.i128[1];
              v53 = (__m256i *)v208.i64[1];
              *(_OWORD *)(v50 + v51) = v208.i128[0];
              if ( (_BYTE)v196 != 6 )
              {
                v49 = (__m256i *)&v196;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
              }
            }
            else
            {
              v207 = v203;
              v206 = v202;
              v205 = v201;
              v204 = v200;
              v194 = v208;
              v49 = (__m256i *)&v196;
              v53 = &v204;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v196,
                &v204,
                &v194);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v53);
            v37 = 8;
            v54 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
            if ( !v54 )
LABEL_117:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37);
            *v54 = 0x6E6F6974636E7566LL;
            v174 = 8;
            v175 = v54;
            v176 = 8;
            *(_QWORD *)&v171 = 0;
            v172 = 0;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
            v55 = 4;
            v56 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
            if ( !v56 )
              goto LABEL_118;
            *v56 = 1701667182;
            *(_QWORD *)&v180 = 4;
            *((_QWORD *)&v180 + 1) = v56;
            v181 = 4;
            v57 = 1;
            if ( !(_BYTE)v185 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
              if ( !v58 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
              v57 = v58;
            }
            v59 = __n;
            memcpy((void *)v57, v192, __n);
            v208.i8[0] = 3;
            v208.i64[1] = v59;
            v208.i64[2] = v57;
            v208.i64[3] = v59;
            v60 = &v200;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v171, &v180);
            if ( v200.i64[0] == 0x8000000000000000LL )
            {
              v61 = v200.i64[1];
              v62 = 32 * v200.i64[3];
              v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
              v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
              v63 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
              v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
              v196 = v63;
              *(_OWORD *)(v200.i64[1] + v62 + 16) = v208.i128[1];
              v64 = (__m256i *)v208.i64[1];
              *(_OWORD *)(v61 + v62) = v208.i128[0];
              if ( (_BYTE)v196 != 6 )
              {
                v60 = (__m256i *)&v196;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
              }
            }
            else
            {
              v207 = v203;
              v206 = v202;
              v205 = v201;
              v204 = v200;
              v194 = v208;
              v60 = (__m256i *)&v196;
              v64 = &v204;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v196,
                &v204,
                &v194);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v64);
            v55 = 9;
            v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( !v65 )
LABEL_118:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55);
            *(_QWORD *)v65 = 0x746E656D75677261LL;
            *(_BYTE *)(v65 + 8) = 115;
            *(_QWORD *)&v180 = 9;
            *((_QWORD *)&v180 + 1) = v65;
            v181 = 9;
            if ( (v191 & 0x8000000000000000LL) != 0LL )
            {
              v66 = 0;
LABEL_113:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v66, v191);
            }
            if ( v191 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
              v66 = 1;
              v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v191, 1);
              if ( !v67 )
                goto LABEL_113;
              v68 = v67;
            }
            else
            {
              v68 = 1;
            }
            v69 = v191;
            memcpy((void *)v68, v188, v191);
            v208.i8[0] = 3;
            v208.i64[1] = v69;
            v208.i64[2] = v68;
            v208.i64[3] = v69;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v171, &v180);
            v7 = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_75;
            if ( v200.i64[0] == 0x8000000000000000LL )
            {
              v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
              v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
              v70 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
              v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
              v196 = v70;
              *(__m256i *)(v200.i64[1] + 32 * v200.i64[3]) = v208;
              if ( (_BYTE)v196 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
            }
            else
            {
              v207 = v203;
              v206 = v202;
              v205 = v201;
              v204 = v200;
              v194 = v208;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v196,
                &v204,
                &v194);
            }
            v193.i64[3] = v172;
            *(__int128 *)((char *)v193.i128 + 8) = v171;
            v193.i8[0] = 5;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v174);
            if ( v200.i64[0] == 0x8000000000000000LL )
            {
              v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
              v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
              v71 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
              v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
              v196 = v71;
              *(__m256i *)(v200.i64[1] + 32 * v200.i64[3]) = v193;
              if ( (_BYTE)v196 != 6 )
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
            }
            else
            {
              v207 = v203;
              v206 = v202;
              v205 = v201;
              v204 = v200;
              v194 = v193;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v196,
                &v204,
                &v194);
            }
            v182.i64[3] = v184;
            *(__int128 *)((char *)v182.i128 + 8) = v183;
            v182.i8[0] = 5;
            v72 = v187;
            if ( v187 == (_QWORD)v186 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v186);
            *(__m256i *)(*((_QWORD *)&v186 + 1) + 32 * v72) = v182;
            v187 = v72 + 1;
            if ( v173 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v188, v173, 1);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v170);
            if ( __n )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v192, __n, 1);
            a1 = v189;
            if ( __src )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __src, 1);
            goto LABEL_12;
          }
        }
        v204.i64[0] = (__int64)v33;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v32);
        v34 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
        if ( !v34 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
        v35 = v34;
        *v34 = 32123;
        if ( v33->i64[0] == 1 )
        {
          core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v33->u32[2]);
        }
        else if ( !v33->i64[0] )
        {
          v36 = v33->i64[2];
          if ( v36 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33->i64[1], v36, 1);
        }
        v188 = v35;
        v32 = 40;
        v31 = v33;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 40, 8);
        v191 = 2;
        v173 = 2;
        goto LABEL_64;
      }
    }
  }
  v190 = 0;
LABEL_6:
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v179);
  v9 = "unknownchoicesfinish_reasoncompletedsummary_text";
  v10 = 7;
  if ( v8 && *(_BYTE *)v8 == 3 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( v10 < 0 )
    {
      v7 = 0;
      goto LABEL_10;
    }
    v189 = a1;
    v9 = *(const char **)(v8 + 16);
    if ( !v10 )
    {
      v73 = 1;
      v74 = 1;
      v10 = 0;
      goto LABEL_130;
    }
    a1 = v189;
  }
  v189 = a1;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5);
  v7 = 1;
  v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1);
  if ( !v73 )
LABEL_10:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v10);
  v74 = 0;
LABEL_130:
  v192 = (void *)v73;
  memcpy((void *)v73, v9, v10);
  v75 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("idassistant", 2, v179);
  v76 = "chatcmpl-aimamistop_reason";
  __src = (void *)15;
  __dst = (void *)v10;
  if ( v75 && *(_BYTE *)v75 == 3 )
  {
    v77 = *(void **)(v75 + 24);
    __src = v77;
    if ( (__int64)v77 < 0 )
    {
      v78 = 0;
      goto LABEL_134;
    }
    v76 = *(char **)(v75 + 16);
    if ( !v77 )
    {
      v79 = 1;
      v80 = 1;
      __src = nullptr;
      v10 = (signed __int64)__dst;
      goto LABEL_139;
    }
    v10 = (signed __int64)__dst;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
  v78 = 1;
  v79 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
  if ( !v79 )
LABEL_134:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v78, __src);
  v80 = 0;
LABEL_139:
  v185 = (void *)v79;
  memcpy((void *)v79, v76, (size_t)__src);
  v81 = 11;
  v82 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("stop_reason", 11, v179);
  v83 = 4;
  v84 = "stopLeftDownmovecell";
  if ( v82 && *(_BYTE *)v82 == 3 )
  {
    v85 = *(_QWORD *)(v82 + 16);
    v86 = *(_QWORD *)(v82 + 24);
    if ( v86 == 10 )
    {
      v162 = *(_QWORD *)v85 ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(v85 + 8) ^ 0x736ELL;
      v81 = v162 != 0;
      v84 = "length";
      if ( v162 )
        v84 = *(char **)(v82 + 16);
      v86 = 4 * v81 + 6;
    }
    else if ( v86 == 8 )
    {
      v86 = 4;
      if ( *(_QWORD *)v85 != 0x6E7275745F646E65LL )
      {
        v84 = "tool_callsreasoning_content";
        if ( *(_QWORD *)v85 != 0x6573755F6C6F6F74LL )
          v84 = *(char **)(v82 + 16);
        v86 = 2LL * (*(_QWORD *)v85 == 0x6573755F6C6F6F74LL) + 8;
      }
    }
    else
    {
      v84 = *(char **)(v82 + 16);
    }
  }
  else
  {
    v86 = 4;
  }
  v191 = v86;
  v188 = v84;
  *(_QWORD *)&v183 = 0;
  v184 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, v81);
  v87 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v87 )
    goto LABEL_264;
  *v87 = 1701605234;
  v193.i64[0] = 4;
  v193.i64[1] = (__int64)v87;
  v193.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v88 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v88 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v88 = 0x6E61747369737361LL;
  *(_BYTE *)(v88 + 8) = 116;
  v208.i64[1] = 9;
  v208.i64[2] = v88;
  v208.i64[3] = 9;
  v208.i8[0] = 3;
  v89 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v193);
  if ( __OFSUB__(0, v200.i64[0]) )
  {
    v90 = v200.i64[1];
    v91 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v92 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v92;
    *(_OWORD *)(v200.i64[1] + v91 + 16) = v208.i128[1];
    v93 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v90 + v91) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      LOBYTE(v90) = 1;
      LODWORD(v195) = v90;
      v89 = (__m256i *)&v196;
      LOBYTE(v90) = 1;
      LODWORD(__n) = v90;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v89 = (__m256i *)&v196;
    v93 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
  v83 = 7;
  v87 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v87 )
  {
LABEL_264:
    LOBYTE(v87) = 1;
    LODWORD(v195) = (_DWORD)v87;
    LOBYTE(v87) = 1;
    LODWORD(__n) = (_DWORD)v87;
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v83);
  }
  *(_DWORD *)((char *)v87 + 3) = 1953391988;
  *v87 = 1953394531;
  v193.i64[0] = 7;
  v193.i64[1] = (__int64)v87;
  v193.i64[2] = 7;
  if ( v190 )
  {
    v208.i64[3] = v178;
    *(__int128 *)((char *)v208.i128 + 8) = v177;
    v94 = 3;
    LODWORD(__n) = 0;
  }
  else
  {
    LOBYTE(v87) = 1;
    LODWORD(__n) = (_DWORD)v87;
    v94 = 0;
  }
  v208.i8[0] = v94;
  v95 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v193);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v96 = v200.i64[1];
    v97 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v98 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v98;
    *(_OWORD *)(v200.i64[1] + v97 + 16) = v208.i128[1];
    v99 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v96 + v97) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      LOBYTE(v96) = 1;
      LODWORD(v195) = v96;
      v95 = (__m256i *)&v196;
      v96 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v100 = v208.i32[0];
    LOBYTE(v100) = 1;
    LODWORD(v195) = v100;
    v95 = (__m256i *)&v196;
    v99 = &v204;
    v96 = alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v196,
            &v204,
            &v194);
  }
  if ( v187 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v95, v99);
    v101 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
    if ( !v101 )
    {
      LODWORD(v195) = 1;
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10);
    }
    qmemcpy(v101, "tool_calls", 10);
    v193.i64[0] = 10;
    v193.i64[1] = (__int64)v101;
    v193.i64[2] = 10;
    v208.i64[3] = v187;
    *(__int128 *)((char *)v208.i128 + 8) = v186;
    v208.i8[0] = 4;
    v95 = &v200;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v183, &v193);
    if ( v200.i64[0] == 0x8000000000000000LL )
    {
      v102 = v200.i64[1];
      v103 = 32 * v200.i64[3];
      v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
      v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
      v104 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
      v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
      v196 = v104;
      *(_OWORD *)(v200.i64[1] + v103 + 16) = v208.i128[1];
      v99 = (__m256i *)v208.i64[1];
      *(_OWORD *)(v102 + v103) = v208.i128[0];
      if ( (_BYTE)v196 != 6 )
      {
        LODWORD(v195) = 0;
        v95 = (__m256i *)&v196;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
      }
    }
    else
    {
      v207 = v203;
      v206 = v202;
      v205 = v201;
      v204 = v200;
      v194 = v208;
      LODWORD(v195) = 0;
      v95 = (__m256i *)&v196;
      v99 = &v204;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v196,
        &v204,
        &v194);
    }
    LODWORD(v195) = 0;
  }
  else
  {
    LOBYTE(v96) = 1;
    LODWORD(v195) = v96;
  }
  v174 = 0;
  v176 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v95, v99);
  v105 = 2;
  v106 = 1;
  v107 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v107 )
    goto LABEL_263;
  *v107 = 25705;
  v193.i64[0] = 2;
  v193.i64[1] = (__int64)v107;
  v193.i64[2] = 2;
  if ( !v80 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v108 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
    if ( !v108 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __src);
    v106 = v108;
  }
  v109 = __src;
  memcpy((void *)v106, v185, (size_t)__src);
  v208.i8[0] = 3;
  v208.i64[1] = (__int64)v109;
  v208.i64[2] = v106;
  v208.i64[3] = (__int64)v109;
  v110 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v174, &v193);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v111 = v200.i64[1];
    v112 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v113 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v113;
    *(_OWORD *)(v200.i64[1] + v112 + 16) = v208.i128[1];
    v114 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v111 + v112) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      v110 = (__m256i *)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v110 = (__m256i *)&v196;
    v114 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v114);
  v105 = 6;
  v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v115 )
    goto LABEL_263;
  *(_WORD *)(v115 + 4) = 29795;
  *(_DWORD *)v115 = 1701470831;
  v193.i64[0] = 6;
  v193.i64[1] = v115;
  v193.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v116 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v116 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15);
  qmemcpy(v116, "chat.completion", 15);
  v208.i8[0] = 3;
  v208.i64[1] = 15;
  v208.i64[2] = (__int64)v116;
  v208.i64[3] = 15;
  v117 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v174, &v193);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v118 = v200.i64[1];
    v119 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v120 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v120;
    *(_OWORD *)(v200.i64[1] + v119 + 16) = v208.i128[1];
    v121 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v118 + v119) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      v117 = (__m256i *)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v117 = (__m256i *)&v196;
    v121 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v117, v121);
  v105 = 5;
  v122 = 1;
  v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v123 )
    goto LABEL_263;
  *(_BYTE *)(v123 + 4) = 108;
  *(_DWORD *)v123 = 1701080941;
  v193.i64[0] = 5;
  v193.i64[1] = v123;
  v193.i64[2] = 5;
  if ( !v74 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v124 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1);
    if ( !v124 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10);
    v122 = v124;
  }
  memcpy((void *)v122, v192, v10);
  v208.i8[0] = 3;
  v208.i64[1] = v10;
  v208.i64[2] = v122;
  v208.i64[3] = v10;
  v125 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v174, &v193);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v126 = v200.i64[1];
    v127 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v128 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v128;
    *(_OWORD *)(v200.i64[1] + v127 + 16) = v208.i128[1];
    v129 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v126 + v127) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      v125 = (__m256i *)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v125 = (__m256i *)&v196;
    v129 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v125, v129);
  v105 = 7;
  v130 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v130 )
LABEL_263:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v105);
  *(_DWORD *)((char *)v130 + 3) = 1936024425;
  *v130 = 1768908899;
  *(_QWORD *)&v171 = 7;
  *((_QWORD *)&v171 + 1) = v130;
  v172 = 7;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v131 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
  if ( !v131 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
  v132 = v131;
  *(_QWORD *)&v180 = 0;
  v181 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
  v133 = 5;
  v134 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v134 )
    goto LABEL_265;
  *(_BYTE *)(v134 + 4) = 120;
  *(_DWORD *)v134 = 1701080681;
  v193.i64[0] = 5;
  v193.i64[1] = v134;
  v193.i64[2] = 5;
  v208.i8[0] = 2;
  *(__int128 *)((char *)v208.i128 + 8) = 0u;
  v135 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v180, &v193);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v136 = v200.i64[1];
    v137 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v138 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v138;
    *(_OWORD *)(v200.i64[1] + v137 + 16) = v208.i128[1];
    v139 = (__m256i *)v208.i64[1];
    *(_OWORD *)(v136 + v137) = v208.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      v135 = (__m256i *)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    v135 = (__m256i *)&v196;
    v139 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v135, v139);
  v133 = 7;
  v140 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v140 )
LABEL_265:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v133);
  *(_DWORD *)((char *)v140 + 3) = 1701273971;
  *v140 = 1936942445;
  v170.i64[0] = 7;
  v170.i64[1] = (__int64)v140;
  v170.i64[2] = 7;
  v208.i64[3] = v184;
  *(__int128 *)((char *)v208.i128 + 8) = v183;
  v208.i8[0] = 5;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v204,
    &v208);
  if ( v204.i8[0] == 6 )
  {
    v200.i64[0] = v204.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v200,
      &off_10196D480,
      &off_10196CE68);
  }
  v193 = v204;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v180, &v170);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v141 = v200.i64[1];
    v142 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v143 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v143;
    *(_OWORD *)(v200.i64[1] + v142 + 16) = v193.i128[1];
    v144 = (__m256i *)v193.i64[1];
    *(_OWORD *)(v141 + v142) = v193.i128[0];
    if ( (_BYTE)v196 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v193;
    v144 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v208);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v208, v144);
  v145 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v145 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
  qmemcpy(v145, "finish_reason", 13);
  v193.i64[0] = 13;
  v193.i64[1] = (__int64)v145;
  v193.i64[2] = 13;
  v146 = v191;
  if ( (v191 & 0x8000000000000000LL) != 0LL )
  {
    v147 = 0;
    goto LABEL_208;
  }
  if ( v191 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
    v147 = 1;
    v148 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v191, 1);
    v146 = v191;
    if ( !v148 )
LABEL_208:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v147, v146);
    v149 = v148;
  }
  else
  {
    v149 = 1;
  }
  v150 = v146;
  memcpy((void *)v149, v188, v146);
  v208.i8[0] = 3;
  v208.i64[1] = v150;
  v208.i64[2] = v149;
  v208.i64[3] = v150;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v180, &v193);
  v151 = __dst;
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v152 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v152;
    *(__m256i *)(v200.i64[1] + 32 * v200.i64[3]) = v208;
    if ( (_BYTE)v196 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v208;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  *(__int128 *)((char *)v204.i128 + 7) = v180;
  *(__int64 *)((char *)&v204.i64[2] + 7) = v181;
  *(_BYTE *)v132 = 5;
  *(_QWORD *)(v132 + 24) = *(__int64 *)((char *)&v204.i64[2] + 7);
  *(_QWORD *)(v132 + 17) = v204.i64[2];
  *(_OWORD *)(v132 + 1) = v204.i128[0];
  v182.i64[1] = 1;
  v182.i64[2] = v132;
  v182.i64[3] = 1;
  v182.i8[0] = 4;
  v153 = &v200;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v174, &v171);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v154 = v200.i64[1];
    v155 = 32 * v200.i64[3];
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v156 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v156;
    *(_OWORD *)(v200.i64[1] + v155 + 16) = v182.i128[1];
    v157 = (__m256i *)v182.i64[1];
    *(_OWORD *)(v154 + v155) = v182.i128[0];
    if ( (_BYTE)v196 != 6 )
    {
      v153 = (__m256i *)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v182;
    v153 = (__m256i *)&v196;
    v157 = &v204;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v153, v157);
  v158 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v158 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
  *(_BYTE *)(v158 + 4) = 101;
  *(_DWORD *)v158 = 1734439797;
  v182.i64[0] = 5;
  v182.i64[1] = v158;
  v182.i64[2] = 5;
  v159 = (unsigned __int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               "usage",
                               5,
                               v179);
  if ( v159 )
  {
    LOBYTE(v160) = *(_BYTE *)v159;
    switch ( *(_BYTE *)v159 )
    {
      case 0:
        goto LABEL_238;
      case 1:
      case 2:
        v204.i128[1] = *((_OWORD *)v159 + 1);
        v160 = *v159;
        v204.i128[0] = *v159;
        v161 = *(unsigned __int64 *)((char *)v159 + 9);
        v200.i64[0] = *(unsigned __int64 *)((char *)v159 + 1);
        v200.i64[1] = v161;
        v200.i64[2] = *(unsigned __int64 *)((char *)v159 + 17);
        *(__int64 *)((char *)&v200.i64[2] + 7) = v159[3];
        v204.i64[3] = 0;
        v204.i8[0] = 5;
        if ( (_BYTE)v160 == 6 )
          goto LABEL_227;
        goto LABEL_239;
      case 3:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v204.u32[2], v159 + 1);
        goto LABEL_238;
      case 4:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
          &v204.u32[2],
          v159 + 1);
        goto LABEL_238;
      case 5:
        if ( v159[3] )
        {
          v163 = v159[1];
          if ( !v163 )
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
            &v204.u32[2],
            v163,
            v159[2]);
        }
        else
        {
          v204.i64[1] = 0;
          v204.i64[3] = 0;
        }
LABEL_238:
        *(__int64 *)((char *)&v200.i64[2] + 7) = v204.i64[3];
        *(__int128 *)((char *)v200.i128 + 8) = *(__int128 *)((char *)v204.i128 + 9);
        v200.i64[0] = *(__int64 *)((char *)v204.i64 + 1);
        v204.i64[1] = 0;
        v204.i64[3] = 0;
        v204.i8[0] = 5;
LABEL_239:
        v208.i8[0] = v160;
        *(__int128 *)((char *)v208.i128 + 1) = v200.i128[0];
        *(__int64 *)((char *)&v208.i64[2] + 1) = v200.i64[2];
        v208.i64[3] = *(__int64 *)((char *)&v200.i64[2] + 7);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v204);
        break;
    }
  }
  else
  {
    v204.i64[1] = 0;
    v204.i64[3] = 0;
    v204.i8[0] = 5;
LABEL_227:
    v208 = v204;
  }
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v204,
    &v208);
  if ( v204.i8[0] == 6 )
  {
    v200.i64[0] = v204.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v200,
      &off_10196D480,
      &off_10196CE68);
  }
  v193 = v204;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v200, &v174, &v182);
  if ( v200.i64[0] == 0x8000000000000000LL )
  {
    v199 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 24);
    v198 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 16);
    v164 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3]);
    v197 = *(_QWORD *)(v200.i64[1] + 32 * v200.i64[3] + 8);
    v196 = v164;
    *(__m256i *)(v200.i64[1] + 32 * v200.i64[3]) = v193;
    if ( (_BYTE)v196 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
  }
  else
  {
    v207 = v203;
    v206 = v202;
    v205 = v201;
    v204 = v200;
    v194 = v193;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v204,
      &v194);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v208);
  v165 = v189;
  *(_QWORD *)(v189 + 24) = v176;
  v166 = v174;
  *(_QWORD *)(v165 + 16) = v175;
  *(_QWORD *)(v165 + 8) = v166;
  *(_BYTE *)v165 = 5;
  if ( __src )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v185, __src, 1);
  if ( v151 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v192, v151, 1);
  if ( (_BYTE)v195 )
  {
    v167 = *((_QWORD *)&v186 + 1);
    for ( i = v187 + 1; i != 1; --i )
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v167);
      v167 += 32;
    }
    if ( (_QWORD)v186 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v186 + 1), 32 * v186, 8);
  }
  if ( (_BYTE)__n && (_QWORD)v177 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v177 + 1), v177, 1);
  return v165;
}
