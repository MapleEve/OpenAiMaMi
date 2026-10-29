// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::h2d12848f7f127983; addr: 0x100497a90; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::h2d12848f7f127983(
        _QWORD *a1,
        __int64 a2,
        __m128i a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rax
  void *v11; // rbx
  __int64 *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r14
  __m128i v17; // xmm0
  __int64 v18; // r15
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // r13
  unsigned __int8 *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // rbx
  __int64 v54; // r12
  __int64 v55; // r14
  __int64 v56; // rbx
  unsigned __int64 v57; // r12
  _QWORD *v58; // r15
  __int64 v59; // rsi
  unsigned __int64 v60; // rbx
  _QWORD *v61; // r14
  __int64 v62; // rsi
  _QWORD v64[16]; // [rsp+8h] [rbp-488h] BYREF
  __int64 v65[14]; // [rsp+88h] [rbp-408h] BYREF
  _QWORD v66[4]; // [rsp+F8h] [rbp-398h] BYREF
  _QWORD v67[4]; // [rsp+118h] [rbp-378h] BYREF
  _QWORD *v68; // [rsp+138h] [rbp-358h]
  __int64 v69; // [rsp+140h] [rbp-350h]
  __int64 v70; // [rsp+148h] [rbp-348h]
  _QWORD v71[19]; // [rsp+150h] [rbp-340h] BYREF
  _QWORD v72[3]; // [rsp+1E8h] [rbp-2A8h] BYREF
  _QWORD v73[12]; // [rsp+200h] [rbp-290h] BYREF
  __int64 v74; // [rsp+260h] [rbp-230h] BYREF
  __int64 v75; // [rsp+268h] [rbp-228h]
  __int64 v76; // [rsp+270h] [rbp-220h]
  void *v77; // [rsp+278h] [rbp-218h]
  __int64 v78; // [rsp+280h] [rbp-210h]
  __int64 v79; // [rsp+288h] [rbp-208h] BYREF
  __int64 v80; // [rsp+290h] [rbp-200h]
  __int64 v81; // [rsp+298h] [rbp-1F8h]
  _OWORD v82[5]; // [rsp+2A0h] [rbp-1F0h] BYREF
  __int64 v83; // [rsp+2F0h] [rbp-1A0h] BYREF
  __int64 v84; // [rsp+2F8h] [rbp-198h]
  __int64 v85; // [rsp+300h] [rbp-190h]
  __int64 v86; // [rsp+308h] [rbp-188h]
  __int64 v87; // [rsp+310h] [rbp-180h]
  __int64 v88; // [rsp+318h] [rbp-178h]
  unsigned __int8 *v89; // [rsp+320h] [rbp-170h]
  __int64 v90; // [rsp+328h] [rbp-168h]
  __int64 v91; // [rsp+330h] [rbp-160h] BYREF
  __int64 v92; // [rsp+338h] [rbp-158h]
  __int64 v93; // [rsp+340h] [rbp-150h]
  __int64 v94; // [rsp+348h] [rbp-148h]
  __int64 v95; // [rsp+350h] [rbp-140h]
  __int64 v96; // [rsp+358h] [rbp-138h]
  __int64 v97; // [rsp+360h] [rbp-130h]
  unsigned __int8 *v98; // [rsp+368h] [rbp-128h]
  __int64 v99; // [rsp+370h] [rbp-120h]
  _OWORD v100[5]; // [rsp+378h] [rbp-118h] BYREF
  __int64 v101; // [rsp+3C8h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+3D0h] [rbp-C0h]
  __int64 v103; // [rsp+3D8h] [rbp-B8h]
  __int64 v104; // [rsp+3E0h] [rbp-B0h]
  __int64 *v105; // [rsp+3E8h] [rbp-A8h]
  __int64 v106; // [rsp+3F0h] [rbp-A0h]
  __int64 *v107; // [rsp+3F8h] [rbp-98h]
  _QWORD v108[10]; // [rsp+400h] [rbp-90h] BYREF
  __int64 v109; // [rsp+450h] [rbp-40h]
  __int64 v110; // [rsp+458h] [rbp-38h]
  __int64 v111; // [rsp+460h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::h93811b9357885cc4(v71, a2); /*0x100497abb*/
  if ( v71[0] == 0x8000000000000001LL ) /*0x100497acb*/
  {
    qmemcpy(v64, &v71[1], 0x60u); /*0x100497aea*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v64[12], &v71[13], v3); /*0x100497aed*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100497afc*/
    if ( !v4 ) /*0x100497b04*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10049896c*/
    v9 = (_QWORD *)v4; /*0x100497b0a*/
    v73[0] = 0; /*0x100497b0d*/
    v73[1] = 1; /*0x100497b18*/
    v73[2] = 0; /*0x100497b23*/
    v65[2] = 1610612768; /*0x100497b2e*/
    v65[0] = (__int64)v73; /*0x100497b40*/
    v65[1] = (__int64)&anon_19faa30eef2c8845dad92cc05fa4a600_1278; /*0x100497b4e*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100497b63*/
                            v64,
                            v65,
                            v5,
                            v6,
                            v7,
                            v8) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100498994*/
        &anon_19faa30eef2c8845dad92cc05fa4a600_1279,
        55,
        v108,
        &anon_19faa30eef2c8845dad92cc05fa4a600_1291,
        &anon_19faa30eef2c8845dad92cc05fa4a600_1281);
    v9[2] = v73[2]; /*0x100497b77*/
    v10 = v73[0]; /*0x100497b7b*/
    v9[1] = v73[1]; /*0x100497b89*/
    *v9 = v10; /*0x100497b8d*/
    a1[9] = 0; /*0x100497b90*/
    a1[8] = 0; /*0x100497b98*/
    a1[7] = 0; /*0x100497ba0*/
    a1[6] = 0; /*0x100497ba8*/
    *a1 = 1; /*0x100497bb0*/
    a1[1] = v9; /*0x100497bb7*/
    v11 = a1; /*0x100497bbb*/
    a1[2] = 1; /*0x100497bbe*/
    a1[3] = 0; /*0x100497bc6*/
    a1[4] = 8; /*0x100497bce*/
    a1[5] = 0; /*0x100497bd6*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v71[1]); /*0x100497be1*/
    return v11; /*0x100497be6*/
  }
  v77 = a1; /*0x100497beb*/
  qmemcpy(v64, v71, sizeof(v64)); /*0x100497c05*/
  *(_QWORD *)&v82[0] = 0; /*0x100497c08*/
  memset(&v82[3], 0, 32); /*0x100497c13*/
  *((_QWORD *)&v82[0] + 1) = 8; /*0x100497c3f*/
  v82[1] = 0u; /*0x100497c4a*/
  v82[2] = 8u; /*0x100497c60*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::hdcc4745326ed4935(v71, a2); /*0x100497c80*/
  v67[3] = v71[1]; /*0x100497ca2*/
  v68 = (_QWORD *)v71[1]; /*0x100497ca9*/
  v78 = v71[0]; /*0x100497cb0*/
  v69 = v71[0]; /*0x100497cb7*/
  v106 = v71[1] + 24LL * v71[2]; /*0x100497cbe*/
  v70 = v106; /*0x100497cc5*/
  v107 = (__int64 *)v71[1]; /*0x100497ccc*/
  v12 = (__int64 *)v71[1]; /*0x100497cd3*/
  if ( !v71[2] ) /*0x100497ce3*/
    goto LABEL_85; /*0x100497ce3*/
  v13 = v107; /*0x100497ce9*/
LABEL_8:
  v105 = v13 + 3; /*0x100497d17*/
  v68 = v13 + 3; /*0x100497d22*/
  v14 = *v13; /*0x100497d29*/
  if ( *v13 != 0x8000000000000000LL ) /*0x100497d2f*/
  {
    v15 = v13[2]; /*0x100497d39*/
    v109 = v13[1]; /*0x100497d44*/
    std::sys::fs::metadata::h32fa16d3052ea535(v71, v109, v15); /*0x100497d4b*/
    v16 = v71[0]; /*0x100497d50*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x100497d61*/
      v71[0],
      v71[1]);
    v111 = v14; /*0x100497d69*/
    if ( v16 ) /*0x100497d6d*/
    {
      *(_QWORD *)&v100[0] = 0; /*0x100497d73*/
      memset(&v100[3], 0, 32); /*0x100497d9d*/
      *((_QWORD *)&v100[0] + 1) = 8; /*0x100497da4*/
      v100[1] = 0u; /*0x100497db7*/
      v100[2] = 8u; /*0x100497dbf*/
      v17 = 0; /*0x100497dd5*/
      v18 = 8; /*0x100497dd9*/
      v19 = 0; /*0x100497ddf*/
      v20 = 0; /*0x100497de2*/
      v21 = 0; /*0x100497de4*/
      goto LABEL_59; /*0x100497de8*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::haffd23d3ac3aaabc(v71, v109, v15); /*0x100497dfe*/
    if ( LOBYTE(v71[13]) == 3 ) /*0x100497e0a*/
    {
      qmemcpy(v73, v71, sizeof(v73)); /*0x100497e26*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v74, &v71[12], v22); /*0x100497e29*/
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100497e38*/
      if ( !v23 ) /*0x100497e40*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10049894a*/
      v18 = v23; /*0x100497e46*/
      v83 = v109; /*0x100497e4d*/
      v84 = v15; /*0x100497e54*/
      v108[0] = &v83; /*0x100497e62*/
      v108[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100497e70*/
      v108[2] = v73; /*0x100497e77*/
      v108[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100497e82*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v91, &unk_1018F758B, v108); /*0x100497e9b*/
      *(_QWORD *)(v18 + 16) = v93; /*0x100497ea7*/
      v24 = v91; /*0x100497eab*/
      *(_QWORD *)(v18 + 8) = v92; /*0x100497eb9*/
      *(_QWORD *)v18 = v24; /*0x100497ebd*/
      memset(&v100[3], 0, 32); /*0x100497edf*/
      *(_QWORD *)&v100[0] = 1; /*0x100497ee6*/
      *((_QWORD *)&v100[0] + 1) = v18; /*0x100497ef1*/
      v100[1] = 1u; /*0x100497ef8*/
      v100[2] = 8u; /*0x100497f0e*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v73); /*0x100497f27*/
LABEL_55:
      v17 = 0; /*0x100498563*/
      v19 = 1; /*0x100498567*/
      v20 = 1; /*0x10049856d*/
      v21 = 0; /*0x100498572*/
      goto LABEL_59; /*0x100498576*/
    }
    qmemcpy(v65, v71, sizeof(v65)); /*0x100497f59*/
    codexmate_lib::core::relay::codex_thread_visibility::collect_router_model_targets::hf92f18dc9b40a938(v73, v65); /*0x100497f66*/
    if ( LODWORD(v73[0]) != 11 ) /*0x100497f72*/
    {
      qmemcpy(v71, v73, 0x60u); /*0x100498451*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71[12], &v74, v25); /*0x100498454*/
      v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100498463*/
      if ( !v45 ) /*0x10049846b*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10049895b*/
      v18 = v45; /*0x100498471*/
      v83 = v109; /*0x100498478*/
      v84 = v15; /*0x10049847f*/
      v108[0] = &v83; /*0x10049848d*/
      v108[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10049849b*/
      v108[2] = v71; /*0x1004984a2*/
      v108[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x1004984ad*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v91, &unk_1018F758B, v108); /*0x1004984c6*/
      *(_QWORD *)(v18 + 16) = v93; /*0x1004984d2*/
      v46 = v91; /*0x1004984d6*/
      *(_QWORD *)(v18 + 8) = v92; /*0x1004984e4*/
      *(_QWORD *)v18 = v46; /*0x1004984e8*/
      memset(&v100[3], 0, 32); /*0x10049850a*/
      *(_QWORD *)&v100[0] = 1; /*0x100498511*/
      *((_QWORD *)&v100[0] + 1) = v18; /*0x10049851c*/
      v100[1] = 1u; /*0x100498523*/
      v100[2] = 8u; /*0x100498539*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v71); /*0x100498552*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v65); /*0x10049855e*/
      goto LABEL_55; /*0x10049855e*/
    }
    v108[6] = v73[3]; /*0x100497f8d*/
    v108[0] = 0; /*0x100497f91*/
    memset(&v108[7], 0, 24); /*0x100497fb0*/
    v108[1] = 8; /*0x100497fb7*/
    v108[3] = 0; /*0x100497fc2*/
    v108[2] = 0; /*0x100497fca*/
    v108[4] = 8; /*0x100497fd2*/
    v108[5] = 0; /*0x100497fda*/
    v101 = v73[2]; /*0x100497fea*/
    v102 = v73[2]; /*0x100497ff1*/
    v103 = v73[1]; /*0x100497ff8*/
    v110 = v73[2] + 72LL * v73[3]; /*0x100497fff*/
    v104 = v110; /*0x100498003*/
    if ( !v73[3] ) /*0x10049800d*/
      goto LABEL_58; /*0x10049800d*/
    v26 = v73[2] + 72LL; /*0x100498013*/
    while ( 1 ) /*0x100498036*/
    {
      v28 = *(_QWORD *)(v26 - 72); /*0x100498036*/
      v29 = *(_QWORD *)(v26 - 64); /*0x10049803a*/
      v90 = *(_QWORD *)(v26 - 8); /*0x100498042*/
      v89 = *(unsigned __int8 **)(v26 - 16); /*0x10049804d*/
      v88 = *(_QWORD *)(v26 - 24); /*0x100498058*/
      v87 = *(_QWORD *)(v26 - 32); /*0x100498063*/
      v86 = *(_QWORD *)(v26 - 40); /*0x10049806e*/
      v85 = *(_QWORD *)(v26 - 48); /*0x100498079*/
      v84 = *(_QWORD *)(v26 - 56); /*0x100498084*/
      v83 = v29; /*0x10049808b*/
      if ( v28 == 0x8000000000000000LL ) /*0x10049809f*/
      {
LABEL_57:
        v102 = v26; /*0x10049857c*/
LABEL_58:
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he89ad14d687e6b89(&v101); /*0x100498583*/
        qmemcpy(v100, v108, sizeof(v100)); /*0x1004985a2*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v65); /*0x1004985ac*/
        v17 = _mm_loadu_si128((const __m128i *)&v100[3]); /*0x1004985b1*/
        v21 = _mm_loadu_si128((const __m128i *)&v100[4]); /*0x1004985b9*/
        v18 = *((_QWORD *)&v100[0] + 1); /*0x1004985c8*/
        v20 = *(_QWORD *)&v100[0]; /*0x1004985c8*/
        v19 = *(_QWORD *)&v100[1]; /*0x1004985cf*/
LABEL_59:
        v82[3] = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v82[3]), v17); /*0x1004985e0*/
        a3 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)&v82[4]), v21); /*0x1004985fc*/
        v82[4] = a3; /*0x100498600*/
        v71[0] = v18; /*0x100498618*/
        v71[2] = v20; /*0x10049861f*/
        v71[1] = v18; /*0x100498626*/
        v71[3] = v18 + 24 * v19; /*0x10049862d*/
        v47 = *(_QWORD *)&v82[1]; /*0x10049863b*/
        if ( v19 > *(_QWORD *)&v82[0] - *(_QWORD *)&v82[1] ) /*0x100498648*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100498878*/
            v82,
            *(_QWORD *)&v82[1],
            v19,
            8,
            24);
          v47 = *(_QWORD *)&v82[1]; /*0x10049887d*/
        }
        memcpy((void *)(*((_QWORD *)&v82[0] + 1) + 24 * v47), (const void *)v18, 24 * v19); /*0x100498663*/
        *(_QWORD *)&v82[1] = v47 + v19; /*0x10049866b*/
        if ( v20 ) /*0x100498675*/
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24 * v20, 8); /*0x100498687*/
        v48 = *(_QWORD *)&v100[2]; /*0x100498693*/
        v71[0] = *(_QWORD *)&v100[2]; /*0x1004986aa*/
        v71[1] = *(_QWORD *)&v100[2]; /*0x1004986b1*/
        v75 = *((_QWORD *)&v100[1] + 1); /*0x1004986b8*/
        v71[2] = *((_QWORD *)&v100[1] + 1); /*0x1004986bf*/
        v110 = *(_QWORD *)&v100[2] + 24LL * *((_QWORD *)&v100[2] + 1); /*0x1004986c6*/
        v71[3] = v110; /*0x1004986ca*/
        v49 = *(_QWORD *)&v100[2]; /*0x1004986d1*/
        if ( *((_QWORD *)&v100[2] + 1) ) /*0x1004986e1*/
        {
          v76 = *(_QWORD *)&v100[2]; /*0x1004986e7*/
          v49 = *(_QWORD *)&v100[2] + 24LL; /*0x1004986ee*/
          while ( 1 ) /*0x100498742*/
          {
            v52 = *(_QWORD *)(v49 - 24); /*0x100498742*/
            if ( v52 == 0x8000000000000000LL ) /*0x100498749*/
              break; /*0x100498749*/
            v53 = v49 - 24; /*0x10049874b*/
            v54 = *(_QWORD *)(v49 - 24 + 8); /*0x10049874f*/
            v55 = *((_QWORD *)&v82[2] + 1); /*0x100498753*/
            if ( *((_QWORD *)&v82[2] + 1) >= 3u ) /*0x10049875e*/
            {
              if ( v52 ) /*0x100498793*/
                *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1004987a0*/
                                      *(_QWORD *)(v49 - 24 + 8),
                                      *(_QWORD *)(v49 - 24),
                                      1);
            }
            else
            {
              v74 = *(_QWORD *)(v53 + 16); /*0x100498764*/
              if ( *((_QWORD *)&v82[2] + 1) == *((_QWORD *)&v82[1] + 1) ) /*0x100498772*/
                *(double *)a3.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449((char *)&v82[1] + 8); /*0x10049877b*/
              v50 = *(_QWORD *)&v82[2]; /*0x100498700*/
              v51 = 3 * v55; /*0x100498707*/
              *(_QWORD *)(*(_QWORD *)&v82[2] + 8 * v51) = v52; /*0x10049870b*/
              *(_QWORD *)(v50 + 8 * v51 + 8) = v54; /*0x10049870f*/
              *(_QWORD *)(v50 + 8 * v51 + 16) = v74; /*0x10049871b*/
              *((_QWORD *)&v82[2] + 1) = v55 + 1; /*0x100498723*/
            }
            v49 += 24; /*0x10049872a*/
            if ( v53 + 24 == v110 ) /*0x100498740*/
            {
              v49 = v110; /*0x1004987b0*/
              break; /*0x1004987b0*/
            }
          }
          v71[1] = v49; /*0x1004987b4*/
          v48 = v76; /*0x1004987bb*/
        }
        v56 = v111; /*0x1004987dc*/
        if ( v110 != v49 ) /*0x1004987e0*/
        {
          v57 = (v110 - v49) / 0x18uLL; /*0x1004987e5*/
          v58 = (_QWORD *)(v49 + 8); /*0x1004987e9*/
          do /*0x1004987f7*/
          {
            v59 = *(v58 - 1); /*0x1004987f9*/
            if ( v59 ) /*0x100498800*/
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v59, 1); /*0x10049880a*/
            v58 += 3; /*0x1004987f0*/
            --v57; /*0x1004987f4*/
          }
          while ( v57 ); /*0x1004987f7*/
        }
        if ( v75 ) /*0x10049882a*/
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24 * v75, 8); /*0x10049883c*/
        if ( v56 ) /*0x100498844*/
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v56, 1); /*0x100498856*/
        v13 = v105; /*0x100497d07*/
        if ( v105 == (__int64 *)v106 ) /*0x100497d11*/
          goto LABEL_90; /*0x100497d11*/
        goto LABEL_8; /*0x100497d11*/
      }
      v91 = v28; /*0x1004980a5*/
      v99 = v90; /*0x1004980ba*/
      v98 = v89; /*0x1004980c5*/
      v97 = v88; /*0x1004980d0*/
      v96 = v87; /*0x1004980db*/
      v95 = v86; /*0x1004980e6*/
      v94 = v85; /*0x1004980f1*/
      v30 = v84; /*0x1004980fc*/
      v93 = v84; /*0x100498103*/
      v92 = v83; /*0x100498107*/
      if ( v88 == 0x8000000000000000LL ) /*0x100498111*/
      {
        v31 = 1; /*0x100498113*/
        v32 = 0; /*0x100498119*/
        v33 = nullptr; /*0x10049811c*/
      }
      else
      {
        v31 = (__int64)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v98, v99); /*0x100498133*/
        v32 = v34; /*0x100498136*/
        if ( v97 == 0x8000000000000000LL ) /*0x10049814a*/
          v33 = nullptr; /*0x100498160*/
        else
          v33 = v98; /*0x10049814c*/
        v30 = v99; /*0x100498162*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::RouterCatalogModelIndex::disposition::h4d3181735606ed32( /*0x100498177*/
        v67,
        v64,
        v33,
        v30);
      v36 = v67[0]; /*0x10049817c*/
      if ( v67[0] >= (__int64)0x8000000000000002LL ) /*0x100498194*/
      {
        codexmate_lib::core::relay::codex_thread_visibility::has_unwritable_router_model_rollout::h9b1d6dbad31136a7( /*0x1004981ae*/
          v73,
          &v91,
          v35);
        if ( LODWORD(v73[0]) == 11 ) /*0x1004981ba*/
        {
          if ( !LOBYTE(v73[1]) ) /*0x1004981c7*/
          {
            ++v108[8]; /*0x1004981cd*/
            if ( !v32 ) /*0x1004981d4*/
            {
              ++v108[9]; /*0x1004981d6*/
              v32 = 7; /*0x1004981da*/
              v31 = (__int64)&unk_1016F2E05; /*0x1004981e0*/
            }
            v73[0] = v31; /*0x1004981e7*/
            v73[1] = v32; /*0x1004981ee*/
            v71[0] = &v91; /*0x1004981fc*/
            v71[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10049820a*/
            v71[2] = v73; /*0x100498218*/
            v71[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100498226*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_1018F9305, v71); /*0x100498242*/
            v37 = v108[5]; /*0x100498247*/
            if ( v108[5] >= 3u ) /*0x10049824f*/
            {
              if ( v79 ) /*0x100498383*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100498391*/
            }
            else
            {
              if ( v108[5] == v108[3] ) /*0x100498259*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v108[3]); /*0x10049826d*/
              v38 = v108[4]; /*0x100498272*/
              v39 = 3 * v37; /*0x100498276*/
              *(_QWORD *)(v108[4] + 8 * v39 + 16) = v81; /*0x100498281*/
              v40 = v79; /*0x100498286*/
              *(_QWORD *)(v38 + 8 * v39 + 8) = v80; /*0x100498294*/
              *(_QWORD *)(v38 + 8 * v39) = v40; /*0x100498299*/
              v108[5] = v37 + 1; /*0x1004982a0*/
            }
            if ( v36 < 0 ) /*0x10049839d*/
              goto LABEL_45; /*0x10049839d*/
LABEL_43:
            if ( v36 ) /*0x1004983a2*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67[1], v36, 1); /*0x1004983b3*/
            goto LABEL_45; /*0x1004983b3*/
          }
        }
        else
        {
          qmemcpy(v71, v73, 0x60u); /*0x1004982c6*/
          v66[0] = &v91; /*0x1004982d0*/
          v66[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004982de*/
          v66[2] = v71; /*0x1004982e5*/
          v66[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x1004982f3*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, &unk_1018F758B, v66); /*0x10049830f*/
          v41 = v108[2]; /*0x100498314*/
          if ( v108[2] == v108[0] ) /*0x10049831f*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v108); /*0x100498328*/
          v42 = v108[1]; /*0x10049832d*/
          v43 = 3 * v41; /*0x100498334*/
          *(_QWORD *)(v108[1] + 8 * v43 + 16) = v72[2]; /*0x10049833f*/
          v44 = v72[0]; /*0x100498344*/
          *(_QWORD *)(v42 + 8 * v43 + 8) = v72[1]; /*0x100498352*/
          *(_QWORD *)(v42 + 8 * v43) = v44; /*0x100498357*/
          v108[2] = v41 + 1; /*0x10049835e*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v71); /*0x10049836d*/
        }
        if ( v36 >= 0 ) /*0x100498375*/
          goto LABEL_43; /*0x100498375*/
      }
      else
      {
        ++v108[7]; /*0x100498196*/
      }
LABEL_45:
      if ( v91 ) /*0x1004983ca*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x1004983d8*/
      if ( v94 != 0x8000000000000000LL && v94 ) /*0x1004983f6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94, 1); /*0x100498404*/
      if ( v97 != 0x8000000000000000LL && v97 ) /*0x100498426*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v97, 1); /*0x100498438*/
      v27 = v26 - 72; /*0x100498020*/
      v26 += 72; /*0x100498024*/
      if ( v27 + 72 == v110 ) /*0x100498030*/
      {
        v26 = v110; /*0x100498578*/
        goto LABEL_57; /*0x100498578*/
      }
    }
  }
  v12 = v105; /*0x100498889*/
LABEL_85:
  if ( (__int64 *)v106 != v12 ) /*0x1004988ad*/
  {
    v60 = (v106 - (__int64)v12) / 0x18uLL; /*0x1004988b5*/
    v61 = v12 + 1; /*0x1004988b9*/
    do /*0x1004988c7*/
    {
      v62 = *(v61 - 1); /*0x1004988c9*/
      if ( v62 ) /*0x1004988d0*/
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v61, v62, 1); /*0x1004988da*/
      v61 += 3; /*0x1004988c0*/
      --v60; /*0x1004988c4*/
    }
    while ( v60 ); /*0x1004988c7*/
  }
LABEL_90:
  if ( v78 ) /*0x1004988eb*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 24 * v78, 8); /*0x100498901*/
  v11 = v77; /*0x100498912*/
  qmemcpy(v77, v82, 0x50u); /*0x10049891c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h20c07a2fa62e0f31( /*0x100498926*/
    v64,
    *(double *)a3.i64);
  return v11; /*0x10049892e*/
}
