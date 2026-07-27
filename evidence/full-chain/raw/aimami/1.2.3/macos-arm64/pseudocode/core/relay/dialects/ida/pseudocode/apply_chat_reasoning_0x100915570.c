// __ZN13codexmate_lib4core5relay8dialects20apply_chat_reasoning @ 0x100915570 | 基线 same-set
double __fastcall codexmate_lib::core::relay::dialects::apply_chat_reasoning::hb69c929a1b8ab454(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __m128i si128)
{
  int v6; // r12d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r15
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  char *v16; // rsi
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  char *v20; // rdx
  char v21; // al
  _QWORD *v22; // r14
  char v23; // al
  int v24; // ecx
  __int64 v25; // rax
  _DWORD *v26; // rax
  char *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rdx
  _QWORD *v31; // r12
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  size_t v38; // r15
  __int64 v39; // rbx
  const void *v40; // r12
  void *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // rax
  char *v45; // rax
  char *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  __m128i v53; // xmm5
  __m128i v54; // xmm6
  __int64 v55; // rdx
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  __m128i v58; // xmm3
  __m128i v59; // xmm4
  char v60; // dl
  char v61; // bl
  char v62; // r13
  int v63; // eax
  char *v64; // r13
  __int64 v65; // rbx
  unsigned __int32 v66; // eax
  unsigned int v67; // ecx
  int v68; // edx
  char v69; // r12
  char v70; // bl
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rcx
  bool v77; // zf
  bool v78; // al
  __int64 v79; // rax
  __int64 v81; // [rsp+8h] [rbp-148h] BYREF
  _DWORD *v82; // [rsp+10h] [rbp-140h]
  __int64 v83; // [rsp+18h] [rbp-138h]
  int v84; // [rsp+24h] [rbp-12Ch]
  char *v85; // [rsp+28h] [rbp-128h] BYREF
  __int64 v86; // [rsp+30h] [rbp-120h]
  _DWORD *v87; // [rsp+38h] [rbp-118h]
  __int64 v88; // [rsp+40h] [rbp-110h]
  __int64 v89; // [rsp+48h] [rbp-108h] BYREF
  __int64 v90; // [rsp+50h] [rbp-100h]
  __int64 v91; // [rsp+58h] [rbp-F8h]
  __int64 v92; // [rsp+60h] [rbp-F0h]
  char *v93; // [rsp+68h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+70h] [rbp-E0h]
  _DWORD *v95; // [rsp+78h] [rbp-D8h]
  char *v96; // [rsp+80h] [rbp-D0h] BYREF
  char *v97; // [rsp+88h] [rbp-C8h]
  __int64 v98; // [rsp+90h] [rbp-C0h]
  __int64 v99; // [rsp+98h] [rbp-B8h]
  __int64 v100; // [rsp+A0h] [rbp-B0h]
  __int64 v101; // [rsp+A8h] [rbp-A8h]
  __int64 v102; // [rsp+B0h] [rbp-A0h]
  char *v103; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-90h]
  _DWORD *v105; // [rsp+C8h] [rbp-88h]
  __int64 v106; // [rsp+D0h] [rbp-80h]
  int v107; // [rsp+DCh] [rbp-74h]
  char *v108; // [rsp+E0h] [rbp-70h] BYREF
  char *v109; // [rsp+E8h] [rbp-68h]
  __int64 v110; // [rsp+F0h] [rbp-60h]
  _DWORD *v111; // [rsp+F8h] [rbp-58h]
  __int64 v112; // [rsp+100h] [rbp-50h]
  __int64 v113; // [rsp+108h] [rbp-48h]
  __int64 v114; // [rsp+110h] [rbp-40h]
  __int64 v115; // [rsp+118h] [rbp-38h]
  __int64 v116; // [rsp+120h] [rbp-30h]

  v8 = a1; /*0x100915587*/
  v9 = a3; /*0x10091558a*/
  switch ( a3 ) /*0x10091559b*/
  {
    case 0u: /*0x10091559b*/
      codexmate_lib::core::relay::dialects::generic::apply_reasoning::h4b2b11b022265863(a1, a2, a4, a5); /*0x1009155d3*/
      return *(double *)si128.i64; /*0x1009155d3*/
    case 1u: /*0x10091559b*/
      LOBYTE(v6) = 1; /*0x1009155d8*/
      v107 = 0; /*0x1009155db*/
      v10 = a2; /*0x1009155e2*/
      v11 = codexmate_lib::core::relay::dialects::reasoning_requested::hf4adde044cda7661(a2); /*0x1009155e5*/
      if ( v11 != 2 ) /*0x1009155ec*/
        goto LABEL_6; /*0x1009155ec*/
      return *(double *)si128.i64; /*0x1009155ec*/
    case 2u: /*0x10091559b*/
    case 4u: /*0x10091559b*/
    case 5u: /*0x10091559b*/
      LOBYTE(v9) = 2; /*0x10091559d*/
      v107 = v9; /*0x10091559f*/
      v6 = 0; /*0x1009155a2*/
      v10 = a2; /*0x1009155a5*/
      v11 = codexmate_lib::core::relay::dialects::reasoning_requested::hf4adde044cda7661(a2); /*0x1009155a8*/
      if ( v11 == 2 ) /*0x1009155af*/
        return *(double *)si128.i64; /*0x1009155af*/
LABEL_6:
      v12 = v11; /*0x1009155f2*/
      LODWORD(v115) = v6; /*0x1009155f5*/
      v116 = v8; /*0x1009155f9*/
      v93 = nullptr; /*0x1009155fd*/
      v95 = nullptr; /*0x100915608*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, a2); /*0x100915613*/
      v13 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100915622*/
      if ( !v13 ) /*0x10091562a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100915cf9*/
      *v13 = 1701869940; /*0x100915633*/
      v81 = 4; /*0x100915639*/
      v82 = v13; /*0x100915644*/
      v83 = 4; /*0x10091564b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100915663*/
      v14 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8LL - v12, 1); /*0x100915670*/
      if ( !v14 ) /*0x100915678*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8LL - v12); /*0x100915d0b*/
      v15 = v14; /*0x10091567e*/
      v16 = "disabledaccountstrailersno-cacheidentityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeCont" /*0x100915688*/
            "inueexpectedsegmentsoriginalBorrowed";
      if ( (v12 & 1) != 0 ) /*0x100915693*/
        v16 = "enabledreasoning_split"; /*0x100915693*/
      memcpy(v14, v16, 8LL - v12); /*0x10091569d*/
      LOBYTE(v103) = 3; /*0x1009156a2*/
      v104 = 8LL - v12; /*0x1009156a9*/
      v105 = v15; /*0x1009156b0*/
      v106 = v104; /*0x1009156b7*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v96, &v93, &v81); /*0x1009156d0*/
      if ( __OFSUB__(0, v96) ) /*0x1009156d7*/
      {
        v17 = v97; /*0x1009156e8*/
        v18 = 32 * v99; /*0x1009156f6*/
        v92 = *(_QWORD *)&v97[32 * v99 + 24]; /*0x1009156ff*/
        v91 = *(_QWORD *)&v97[32 * v99 + 16]; /*0x10091570b*/
        v19 = *(_QWORD *)&v97[32 * v99]; /*0x100915712*/
        v90 = *(_QWORD *)&v97[32 * v99 + 8]; /*0x10091571b*/
        v89 = v19; /*0x100915722*/
        *(_QWORD *)&v97[v18 + 24] = v106; /*0x10091572d*/
        *(_QWORD *)&v17[v18 + 16] = v105; /*0x100915739*/
        v20 = v103; /*0x10091573e*/
        *(_QWORD *)&v17[v18 + 8] = v104; /*0x10091574c*/
        *(_QWORD *)&v17[v18] = v20; /*0x100915751*/
        if ( (_BYTE)v89 != 6 ) /*0x10091575c*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v89); /*0x100915769*/
      }
      else
      {
        v114 = v102; /*0x100915929*/
        v113 = v101; /*0x100915934*/
        v112 = v100; /*0x10091593f*/
        v111 = (_DWORD *)v99; /*0x10091594a*/
        v110 = v98; /*0x100915955*/
        v109 = v97; /*0x100915967*/
        v108 = v96; /*0x10091596b*/
        v88 = v106; /*0x100915973*/
        v87 = v105; /*0x100915981*/
        v86 = v104; /*0x100915996*/
        v85 = v103; /*0x10091599d*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1009159b6*/
          &v89,
          &v108,
          &v85);
      }
      v109 = v93; /*0x1009159c9*/
      v110 = v94; /*0x1009159cd*/
      v111 = v95; /*0x1009159d8*/
      LOBYTE(v108) = 5; /*0x1009159dc*/
      v31 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1009159f4*/
                        &unk_101674AA0,
                        8u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v31); /*0x1009159fa*/
      v31[3] = v111; /*0x100915a03*/
      v31[2] = v110; /*0x100915a0c*/
      v32 = v108; /*0x100915a11*/
      v31[1] = v109; /*0x100915a19*/
      *v31 = v32; /*0x100915a1e*/
      v8 = v116; /*0x100915a26*/
      if ( (v12 & (unsigned __int8)v115) != 0 ) /*0x100915a2a*/
        goto LABEL_24; /*0x100915a2a*/
      return *(double *)si128.i64; /*0x100915a2a*/
    case 3u: /*0x10091559b*/
      v21 = codexmate_lib::core::relay::dialects::reasoning_requested::hf4adde044cda7661(a2); /*0x100915776*/
      if ( v21 == 2 ) /*0x10091577d*/
        return *(double *)si128.i64; /*0x10091577d*/
      LOBYTE(v108) = 1; /*0x100915783*/
      BYTE1(v108) = v21; /*0x100915787*/
      v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10091579e*/
                        "reasoning_split",
                        0xFu);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v22); /*0x1009157a4*/
      goto LABEL_35; /*0x1009157a9*/
    case 6u: /*0x10091559b*/
      v23 = codexmate_lib::core::relay::dialects::reasoning_requested::hf4adde044cda7661(a2); /*0x1009157b1*/
      if ( v23 == 2 ) /*0x1009157b8*/
        return *(double *)si128.i64; /*0x1009157b8*/
      LOBYTE(v24) = 1; /*0x1009157be*/
      v107 = v24; /*0x1009157c0*/
      if ( (v23 & 1) == 0 ) /*0x1009157c5*/
      {
        v93 = nullptr; /*0x1009157cb*/
        v95 = nullptr; /*0x1009157d6*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x1009157e1*/
        v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1009157f0*/
        if ( !v25 ) /*0x1009157f8*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100915d1f*/
        *(_WORD *)(v25 + 4) = 29810; /*0x100915801*/
        *(_DWORD *)v25 = 1868981861; /*0x100915807*/
        v81 = 6; /*0x10091580d*/
        v82 = (_DWORD *)v25; /*0x100915818*/
        v83 = 6; /*0x10091581f*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x10091582a*/
        v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100915839*/
        if ( !v26 ) /*0x100915841*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100915d33*/
        *v26 = 1701736302; /*0x100915847*/
        LOBYTE(v103) = 3; /*0x10091584d*/
        v104 = 4; /*0x100915854*/
        v105 = v26; /*0x10091585f*/
        v106 = 4; /*0x100915866*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v96, &v93, &v81); /*0x100915883*/
        if ( __OFSUB__(0, v96) ) /*0x10091588a*/
        {
          v27 = v97; /*0x100915897*/
          v28 = 32 * v99; /*0x1009158a5*/
          v92 = *(_QWORD *)&v97[32 * v99 + 24]; /*0x1009158ae*/
          v91 = *(_QWORD *)&v97[32 * v99 + 16]; /*0x1009158ba*/
          v29 = *(_QWORD *)&v97[32 * v99]; /*0x1009158c1*/
          v90 = *(_QWORD *)&v97[32 * v99 + 8]; /*0x1009158ca*/
          v89 = v29; /*0x1009158d1*/
          *(_QWORD *)&v97[v28 + 24] = v106; /*0x1009158dc*/
          *(_QWORD *)&v27[v28 + 16] = v105; /*0x1009158e8*/
          v30 = v103; /*0x1009158ed*/
          *(_QWORD *)&v27[v28 + 8] = v104; /*0x1009158fb*/
          *(_QWORD *)&v27[v28] = v30; /*0x100915900*/
          if ( (_BYTE)v89 != 6 ) /*0x10091590b*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v89); /*0x100915918*/
        }
        else
        {
          v114 = v102; /*0x100915aca*/
          v113 = v101; /*0x100915ad5*/
          v112 = v100; /*0x100915ae0*/
          v111 = (_DWORD *)v99; /*0x100915aeb*/
          v110 = v98; /*0x100915af6*/
          v109 = v97; /*0x100915b08*/
          v108 = v96; /*0x100915b0c*/
          v88 = v106; /*0x100915b14*/
          v87 = v105; /*0x100915b22*/
          v86 = v104; /*0x100915b37*/
          v85 = v103; /*0x100915b3e*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100915b57*/
            &v89,
            &v108,
            &v85);
        }
        v109 = v93; /*0x100915b6a*/
        v110 = v94; /*0x100915b6e*/
        v111 = v95; /*0x100915b79*/
        LOBYTE(v108) = 5; /*0x100915b7d*/
        v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100915b95*/
                          "reasoningenabledreasoning_split",
                          9u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v22); /*0x100915b9b*/
        goto LABEL_35; /*0x100915b9b*/
      }
LABEL_24:
      v33 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a2, "/reasoning/effort", 17); /*0x100915a30*/
      if ( !v33 || *(_BYTE *)v33 != 3 ) /*0x100915a50*/
        return *(double *)si128.i64; /*0x100915a50*/
      v34 = *(_QWORD *)(v33 + 16); /*0x100915a56*/
      v35 = *(_QWORD *)(v33 + 24); /*0x100915a5a*/
      v36 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v34, v35); /*0x100915a5e*/
      v38 = v37; /*0x100915a63*/
      if ( v37 < 0 ) /*0x100915a69*/
      {
        v39 = 0; /*0x100915a6b*/
        goto LABEL_28; /*0x100915a6b*/
      }
      v116 = v8; /*0x100915a78*/
      if ( !v37 ) /*0x100915a7c*/
      {
        v42 = 1; /*0x100915bd1*/
        v43 = 1; /*0x100915bd7*/
        v47 = 0; /*0x100915be7*/
        goto LABEL_61; /*0x100915be9*/
      }
      v40 = (const void *)v36; /*0x100915a82*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v35); /*0x100915a85*/
      v39 = 1; /*0x100915a8a*/
      v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1); /*0x100915a97*/
      if ( !v41 ) /*0x100915a9f*/
LABEL_28:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, v38); /*0x100915a6d*/
      v42 = (__int64)v41; /*0x100915aa1*/
      v43 = (__int64)v41; /*0x100915aa4*/
      memcpy(v41, v40, v38); /*0x100915aad*/
      if ( v38 < 8 ) /*0x100915ab6*/
      {
        v44 = 0; /*0x100915abc*/
        goto LABEL_52; /*0x100915abe*/
      }
      if ( v38 < 0x20 ) /*0x100915bfc*/
      {
        v44 = 0; /*0x100915bfe*/
        goto LABEL_45; /*0x100915c00*/
      }
      v44 = v38 & 0x7FFFFFFFFFFFFFE0LL; /*0x100915c09*/
      v48 = 0; /*0x100915c0c*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100915c0e*/
      v49 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100915c16*/
      v50 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100915c1e*/
      do /*0x100915c7f*/
      {
        v51 = _mm_loadu_si128((const __m128i *)(v42 + v48)); /*0x100915c26*/
        v52 = _mm_loadu_si128((const __m128i *)(v42 + v48 + 16)); /*0x100915c2c*/
        v53 = _mm_add_epi8(v51, si128); /*0x100915c37*/
        v54 = _mm_add_epi8(v52, si128); /*0x100915c3f*/
        *(__m128i *)(v42 + v48) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v53, v49), v53), v50), v51); /*0x100915c6b*/
        *(__m128i *)(v42 + v48 + 16) = _mm_or_si128( /*0x100915c71*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v54, v49), v54), v50),
                                         v52);
        v48 += 32; /*0x100915c78*/
      }
      while ( v44 != v48 ); /*0x100915c7f*/
      if ( v38 == v44 ) /*0x100915c84*/
        goto LABEL_54; /*0x100915c84*/
      if ( (v38 & 0x18) != 0 ) /*0x100915c8e*/
      {
LABEL_45:
        v55 = v44; /*0x100915c94*/
        v44 = v38 & 0x7FFFFFFFFFFFFFF8LL; /*0x100915c9e*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100915ca1*/
        v56 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100915ca9*/
        v57 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100915cb1*/
        do /*0x100915ce8*/
        {
          v58 = _mm_loadl_epi64((const __m128i *)(v42 + v55)); /*0x100915cb9*/
          v59 = _mm_add_epi8(v58, si128); /*0x100915cc3*/
          *(_QWORD *)(v42 + v55) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v59, v56), v59), v57), v58).u64[0]; /*0x100915cdb*/
          v55 += 8; /*0x100915ce1*/
        }
        while ( v44 != v55 ); /*0x100915ce8*/
        goto LABEL_53; /*0x100915ce8*/
      }
      do /*0x100915e76*/
      {
LABEL_52:
        *(_BYTE *)(v42 + v44) |= 32 * ((unsigned __int8)(*(_BYTE *)(v42 + v44) - 65) < 0x1Au); /*0x100915e59*/
        ++v44; /*0x100915e70*/
LABEL_53:
        ; /*0x100915e73*/
      }
      while ( v38 != v44 ); /*0x100915e76*/
LABEL_54:
      if ( v38 == 3 ) /*0x100915e7c*/
      {
        if ( *(_WORD *)v42 ^ 0x666F | *(unsigned __int8 *)(v42 + 2) ^ 0x66 ) /*0x100915ec5*/
        {
          v61 = 1; /*0x100915eca*/
          v47 = 3; /*0x100915ecc*/
          v60 = 0; /*0x100915ed1*/
          goto LABEL_67; /*0x100915ed3*/
        }
        goto LABEL_64; /*0x100915ec8*/
      }
      if ( v38 == 8 ) /*0x100915e82*/
      {
        if ( *(_QWORD *)v42 == 0x64656C6261736964LL ) /*0x100915ea9*/
          goto LABEL_64; /*0x100915ea9*/
        v47 = 8; /*0x100915eab*/
LABEL_61:
        v60 = 0; /*0x100915eb0*/
        goto LABEL_66; /*0x100915eb2*/
      }
      if ( v38 != 4 ) /*0x100915e88*/
      {
        v60 = 0; /*0x100915eea*/
        v47 = v38; /*0x100915eec*/
        goto LABEL_66; /*0x100915eec*/
      }
      if ( *(_DWORD *)v42 == 1701736302 ) /*0x100915e91*/
      {
LABEL_64:
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v38, 1); /*0x100915ed5*/
        return *(double *)si128.i64; /*0x100915ee5*/
      }
      v60 = 1; /*0x100915e93*/
      v47 = 4; /*0x100915e95*/
LABEL_66:
      v61 = 0; /*0x100915eef*/
LABEL_67:
      v84 = (unsigned __int8)v107; /*0x100915ef1*/
      if ( (_BYTE)v107 ) /*0x100915f00*/
      {
        if ( (unsigned __int8)v107 == 1 ) /*0x100915f0a*/
        {
          if ( v38 == 5 && !(*(_DWORD *)v42 ^ 0x72746C75 | *(unsigned __int8 *)(v42 + 4) ^ 0x61) /*0x100915f70*/
            || v61
            && (v115 = v47,
                v43 = v42,
                v62 = v60,
                v63 = memcmp((const void *)v42, &unk_10167791D, v38),
                v60 = v62,
                v47 = v115,
                !v63)
            || v38 == 5 && !(*(_DWORD *)v42 ^ 0x67696878 | *(unsigned __int8 *)(v42 + 4) ^ 0x68) )
          {
            v64 = (char *)&unk_101677920; /*0x1009161bd*/
            v65 = 5; /*0x1009161c4*/
            if ( !v47 ) /*0x1009161d0*/
              goto LABEL_145; /*0x1009161d0*/
            goto LABEL_144; /*0x1009161d0*/
          }
          if ( !v60 /*0x100915f8f*/
            || (v64 = "highUSERkeysNULLUser.gitAuth",
                v43 = v42,
                memcmp((const void *)v42, "highUSERkeysNULLUser.gitAuth", v38)) )
          {
            if ( v38 == 6 && !(*(_DWORD *)v42 ^ 0x6964656D | *(unsigned __int16 *)(v42 + 4) ^ 0x6D75) ) /*0x100915fbe*/
            {
              v64 = (char *)&unk_101677925; /*0x10091632c*/
              v65 = 6; /*0x100916333*/
              if ( !v47 ) /*0x10091633b*/
                goto LABEL_145; /*0x10091633b*/
            }
            else if ( v61 && (v64 = (char *)&unk_10167792B, v43 = v42, !memcmp((const void *)v42, &unk_10167792B, v38)) ) /*0x100915fe5*/
            {
              v65 = 3; /*0x100916538*/
              if ( !v47 ) /*0x100916540*/
                goto LABEL_145; /*0x100916540*/
            }
            else
            {
              v65 = 7; /*0x100915feb*/
              if ( v38 == 7 ) /*0x100915ff4*/
              {
                v66 = _byteswap_ulong(*(_DWORD *)v42); /*0x100915ffd*/
                v67 = 1835626089; /*0x100915fff*/
                if ( v66 != 1835626089 /*0x10091601d*/
                  || (v66 = _byteswap_ulong(*(_DWORD *)(v42 + 3)), v67 = 1768776044, v68 = 0, v66 != 1768776044) )
                {
                  v68 = 2 * (v66 >= v67) - 1; /*0x100916026*/
                }
                v64 = nullptr; /*0x10091602a*/
                if ( !v68 ) /*0x100916036*/
                  v64 = (char *)&unk_10167792E; /*0x100916036*/
                if ( !v47 ) /*0x10091603d*/
                  goto LABEL_145; /*0x10091603d*/
              }
              else
              {
                v64 = nullptr; /*0x1009162f8*/
                if ( !v47 ) /*0x1009162fe*/
                  goto LABEL_145; /*0x1009162fe*/
              }
            }
LABEL_144:
            v43 = v42; /*0x100916354*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v47, 1); /*0x10091635c*/
            goto LABEL_145; /*0x10091635c*/
          }
LABEL_138:
          v65 = 4; /*0x10091631c*/
          if ( !v47 ) /*0x100916328*/
            goto LABEL_145; /*0x100916328*/
          goto LABEL_144; /*0x100916328*/
        }
        if ( v38 == 7 && !(*(_DWORD *)v42 ^ 0x696E696D | *(_DWORD *)(v42 + 3) ^ 0x6C616D69) ) /*0x100916099*/
        {
          v64 = (char *)&unk_10167792E; /*0x1009162aa*/
          v65 = 7; /*0x1009162b1*/
          if ( !v47 ) /*0x1009162bd*/
            goto LABEL_145; /*0x1009162bd*/
          goto LABEL_144; /*0x1009162bd*/
        }
        v115 = v47; /*0x1009160a1*/
        if ( v61 ) /*0x1009160a5*/
        {
          v64 = (char *)&unk_10167792B; /*0x1009160a7*/
          v43 = v42; /*0x1009160ae*/
          v69 = v61; /*0x1009160b4*/
          v70 = v60; /*0x1009160b7*/
          v71 = memcmp((const void *)v42, &unk_10167792B, v38); /*0x1009160bd*/
          v60 = v70; /*0x1009160c2*/
          v61 = v69; /*0x1009160c5*/
          v47 = v115; /*0x1009160c8*/
          if ( !v71 ) /*0x1009160ce*/
          {
            v65 = 3; /*0x1009162e8*/
            if ( !v115 ) /*0x1009162f4*/
              goto LABEL_145; /*0x1009162f4*/
            goto LABEL_144; /*0x1009162f4*/
          }
        }
        if ( v38 == 6 && !(*(_DWORD *)v42 ^ 0x6964656D | *(unsigned __int16 *)(v42 + 4) ^ 0x6D75) ) /*0x1009160ef*/
        {
          v64 = (char *)&unk_101677925; /*0x100916302*/
          v65 = 6; /*0x100916309*/
          if ( !v47 ) /*0x100916315*/
            goto LABEL_145; /*0x100916315*/
          goto LABEL_144; /*0x100916315*/
        }
        if ( v60 ) /*0x1009160f7*/
        {
          v64 = "highUSERkeysNULLUser.gitAuth"; /*0x1009160f9*/
          v43 = v42; /*0x100916100*/
          if ( !memcmp((const void *)v42, "highUSERkeysNULLUser.gitAuth", v38) ) /*0x100916113*/
            goto LABEL_138; /*0x100916113*/
        }
        if ( v38 == 5 ) /*0x100916121*/
        {
          if ( !(*(_DWORD *)v42 ^ 0x67696878 | *(unsigned __int8 *)(v42 + 4) ^ 0x68) ) /*0x10091622e*/
          {
            v64 = (char *)&unk_101677920; /*0x10091633f*/
            goto LABEL_143; /*0x10091633f*/
          }
          if ( !v61 ) /*0x100916236*/
          {
LABEL_129:
            v43 = v42; /*0x1009162c8*/
            v64 = nullptr; /*0x1009162dd*/
            if ( !memcmp((const void *)v42, &unk_101677918, v38) ) /*0x1009162d8*/
              v64 = (char *)&unk_101677918; /*0x1009162e2*/
LABEL_143:
            v65 = 5; /*0x100916346*/
            v47 = v115; /*0x10091634b*/
            if ( !v115 ) /*0x100916352*/
              goto LABEL_145; /*0x100916352*/
            goto LABEL_144; /*0x100916352*/
          }
        }
        else if ( !v61 ) /*0x100916129*/
        {
          v65 = 5; /*0x10091612f*/
          v64 = nullptr; /*0x100916134*/
          v47 = v115; /*0x100916137*/
          if ( !v115 ) /*0x10091613e*/
            goto LABEL_145; /*0x10091613e*/
          goto LABEL_144; /*0x10091613e*/
        }
        v43 = v42; /*0x10091624b*/
        v75 = memcmp((const void *)v42, &unk_10167791D, v38); /*0x100916254*/
        v64 = nullptr; /*0x100916259*/
        v76 = 0; /*0x10091625c*/
        v77 = v75 == 0; /*0x10091625e*/
        v78 = v75 != 0; /*0x100916263*/
        if ( v77 ) /*0x100916266*/
          v64 = (char *)&unk_10167791D; /*0x100916266*/
        if ( v38 != 5 || v77 ) /*0x10091626a*/
        {
          LOBYTE(v76) = v78; /*0x100916273*/
          v65 = 2 * v76 + 3; /*0x100916275*/
          v47 = v115; /*0x10091627a*/
          if ( !v115 ) /*0x100916281*/
            goto LABEL_145; /*0x100916281*/
          goto LABEL_144; /*0x100916281*/
        }
        goto LABEL_129; /*0x100916271*/
      }
      v115 = v47; /*0x100916048*/
      if ( v38 != 5 ) /*0x100916050*/
      {
        if ( !v61 ) /*0x10091605c*/
        {
          v64 = "highUSERkeysNULLUser.gitAuth"; /*0x100916062*/
          v65 = 4; /*0x100916069*/
          v47 = v115; /*0x10091606e*/
          if ( !v115 ) /*0x100916075*/
            goto LABEL_145; /*0x100916075*/
          goto LABEL_144; /*0x100916075*/
        }
LABEL_107:
        v43 = v42; /*0x100916169*/
        v72 = memcmp((const void *)v42, &unk_10167791D, v38); /*0x100916181*/
        v73 = 0; /*0x100916186*/
        v64 = "highUSERkeysNULLUser.gitAuth"; /*0x10091618d*/
        if ( !v72 ) /*0x100916194*/
          v64 = (char *)&unk_10167791D; /*0x100916194*/
        if ( v72 == 0 || v38 != 5 ) /*0x10091616d*/
        {
          LOBYTE(v73) = v72 == 0; /*0x1009161a1*/
          v65 = 4 - v73; /*0x1009161a8*/
          v47 = v115; /*0x1009161ab*/
          if ( !v115 ) /*0x1009161b2*/
            goto LABEL_145; /*0x1009161b2*/
          goto LABEL_144; /*0x1009161b2*/
        }
        goto LABEL_114; /*0x10091619f*/
      }
      if ( !(*(_DWORD *)v42 ^ 0x72746C75 | *(unsigned __int8 *)(v42 + 4) ^ 0x61) ) /*0x10091615f*/
      {
        v64 = (char *)&unk_10167791D; /*0x10091628c*/
        v65 = 3; /*0x100916293*/
        v47 = v115; /*0x100916298*/
        if ( !v115 ) /*0x10091629f*/
          goto LABEL_145; /*0x10091629f*/
        goto LABEL_144; /*0x10091629f*/
      }
      if ( v61 ) /*0x100916167*/
        goto LABEL_107; /*0x100916167*/
LABEL_114:
      v43 = v42; /*0x1009161db*/
      v74 = memcmp((const void *)v42, &unk_101677920, v38); /*0x1009161e8*/
      v64 = "highUSERkeysNULLUser.gitAuth"; /*0x1009161fb*/
      if ( !v74 ) /*0x100916202*/
        v64 = (char *)&unk_10167791D; /*0x100916202*/
      v65 = (v74 != 0) + 3LL; /*0x100916206*/
      v47 = v115; /*0x10091620a*/
      if ( v115 ) /*0x100916211*/
        goto LABEL_144; /*0x100916211*/
LABEL_145:
      if ( v64 ) /*0x100916364*/
      {
        v103 = v64; /*0x10091636a*/
        v104 = v65; /*0x100916371*/
        if ( (_BYTE)v107 != 2 ) /*0x10091637c*/
        {
          if ( v84 != 1 ) /*0x100916389*/
          {
            serde_json::value::to_value::h29e3c39dc75a9151(&v108, &v103); /*0x1009164b5*/
            if ( (_BYTE)v108 == 6 ) /*0x1009164be*/
            {
              v96 = v109; /*0x10091654f*/
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100916577*/
                "called `Result::unwrap()` on an `Err` value",
                43,
                &v96,
                &off_10196E3F0,
                &off_10196DBF8);
            }
            v99 = (__int64)v111; /*0x1009164c8*/
            v98 = v110; /*0x1009164d3*/
            v97 = v109; /*0x1009164e2*/
            v96 = v108; /*0x1009164e9*/
            v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100916504*/
                              "reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                              0x10u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v22); /*0x10091650a*/
            v22[3] = v99; /*0x100916516*/
            v22[2] = v98; /*0x100916521*/
            v45 = v96; /*0x100916525*/
            v46 = v97; /*0x10091652c*/
            goto LABEL_36; /*0x100916533*/
          }
          v85 = nullptr; /*0x10091638f*/
          v87 = nullptr; /*0x10091639a*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v47); /*0x1009163a5*/
          v79 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1009163b4*/
          if ( !v79 ) /*0x1009163bc*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1009165c1*/
          *(_WORD *)(v79 + 4) = 29810; /*0x1009163c5*/
          *(_DWORD *)v79 = 1868981861; /*0x1009163cb*/
          v89 = 6; /*0x1009163d1*/
          v90 = v79; /*0x1009163dc*/
          v91 = 6; /*0x1009163e3*/
          serde_json::value::to_value::h29e3c39dc75a9151(&v108, &v103); /*0x1009163f9*/
          if ( (_BYTE)v108 == 6 ) /*0x100916402*/
          {
            v96 = v109; /*0x100916585*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1009165ad*/
              "called `Result::unwrap()` on an `Err` value",
              43,
              &v96,
              &off_10196E3F0,
              &off_10196DC10);
          }
          v99 = (__int64)v111; /*0x10091640c*/
          v98 = v110; /*0x100916417*/
          v97 = v109; /*0x100916426*/
          v96 = v108; /*0x10091642d*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v108, &v85, &v89, &v96); /*0x10091644d*/
          if ( (_BYTE)v108 != 6 ) /*0x100916456*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v108); /*0x10091645c*/
          v109 = v85; /*0x10091646f*/
          v110 = v86; /*0x100916473*/
          v111 = v87; /*0x10091647e*/
          LOBYTE(v108) = 5; /*0x100916482*/
          v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10091649a*/
                            "reasoningenabledreasoning_split",
                            9u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v22); /*0x1009164a0*/
LABEL_35:
          v22[3] = v111; /*0x100915ba0*/
          v22[2] = v110; /*0x100915bac*/
          v45 = v108; /*0x100915bb0*/
          v46 = v109; /*0x100915bb4*/
LABEL_36:
          v22[1] = v46; /*0x100915bb8*/
          *v22 = v45; /*0x100915bbc*/
        }
      }
      return *(double *)si128.i64;
  }
}