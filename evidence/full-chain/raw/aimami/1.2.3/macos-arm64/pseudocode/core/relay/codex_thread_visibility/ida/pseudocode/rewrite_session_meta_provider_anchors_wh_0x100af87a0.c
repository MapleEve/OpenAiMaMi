// __ZN13codexmate_lib4core5relay23codex_thread_visibility43rewrite_session_meta_provider_anchors_where @ 0x100af87a0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::rewrite_session_meta_provider_anchors_where | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::rewrite_session_meta_provider_anchors_where::hed9cdf53a64b205b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  size_t v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  _BYTE *v31; // r13
  __int64 v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rsi
  _BYTE v37[88]; // [rsp+8h] [rbp-238h] BYREF
  __int64 v38; // [rsp+60h] [rbp-1E0h]
  __int64 v39; // [rsp+68h] [rbp-1D8h]
  __int128 v40; // [rsp+70h] [rbp-1D0h]
  __int64 v41; // [rsp+88h] [rbp-1B8h] BYREF
  _BYTE v42[88]; // [rsp+90h] [rbp-1B0h] BYREF
  size_t v43; // [rsp+E8h] [rbp-158h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-150h]
  __int64 v45; // [rsp+F8h] [rbp-148h]
  __int128 v46; // [rsp+100h] [rbp-140h]
  char v47; // [rsp+110h] [rbp-130h]
  char v48; // [rsp+111h] [rbp-12Fh]
  __int64 v49; // [rsp+118h] [rbp-128h]
  __int64 v50; // [rsp+120h] [rbp-120h]
  __int64 v51; // [rsp+128h] [rbp-118h]
  __int64 v52; // [rsp+130h] [rbp-110h]
  __int64 v53; // [rsp+138h] [rbp-108h]
  __int64 v54; // [rsp+140h] [rbp-100h] BYREF
  __int64 v55; // [rsp+148h] [rbp-F8h]
  __int64 v56; // [rsp+150h] [rbp-F0h]
  _BYTE *v57; // [rsp+158h] [rbp-E8h]
  __int64 v58; // [rsp+160h] [rbp-E0h]
  __int64 v59; // [rsp+168h] [rbp-D8h]
  _BYTE v60[104]; // [rsp+170h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+1D8h] [rbp-68h]
  __int64 v62; // [rsp+1E0h] [rbp-60h]
  __int64 v63; // [rsp+1E8h] [rbp-58h]
  size_t v64; // [rsp+1F0h] [rbp-50h]
  _BYTE *v65; // [rsp+1F8h] [rbp-48h]
  __int64 v66; // [rsp+200h] [rbp-40h]
  size_t v67; // [rsp+208h] [rbp-38h]
  char v68; // [rsp+216h] [rbp-2Ah]
  char v69; // [rsp+217h] [rbp-29h]

  v52 = a5; /*0x100af87b7*/
  v53 = a4; /*0x100af87be*/
  codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc(v60); /*0x100af87d5*/
  v10 = *(_QWORD *)&v60[8]; /*0x100af87e0*/
  qmemcpy(v37, &v60[16], sizeof(v37)); /*0x100af87fa*/
  if ( *(_DWORD *)v60 == 1 ) /*0x100af8800*/
  {
    qmemcpy(a1 + 1, v37, 0x58u); /*0x100af8812*/
    *a1 = v10; /*0x100af8815*/
    return a1; /*0x100af8818*/
  }
  if ( __OFSUB__(-*(_QWORD *)&v60[8], 1) ) /*0x100af8820*/
  {
    *((_BYTE *)a1 + 8) = 0; /*0x100af8825*/
    *a1 = 11; /*0x100af8829*/
    return a1; /*0x100af8830*/
  }
  v41 = *(_QWORD *)&v60[8]; /*0x100af8835*/
  qmemcpy(v42, v37, sizeof(v42)); /*0x100af884f*/
  codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100af887c*/
    (unsigned int)v60,
    *(_DWORD *)v42,
    *(_DWORD *)&v42[8],
    a2,
    a3,
    (unsigned int)"firstrouter_model_restore.json",
    5);
  v11 = *(_QWORD *)v60; /*0x100af8881*/
  v12 = *(_QWORD *)&v60[8]; /*0x100af8888*/
  v13 = *(_QWORD *)&v60[16]; /*0x100af888f*/
  v14 = *(_QWORD *)&v60[24]; /*0x100af8896*/
  if ( *(_QWORD *)v60 == 11 ) /*0x100af88a1*/
  {
    v67 = *(_QWORD *)&v60[24]; /*0x100af88a7*/
    v57 = *(_BYTE **)&v60[16]; /*0x100af88ab*/
    v58 = *(_QWORD *)&v60[8]; /*0x100af88b2*/
    codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100af88e3*/
      (unsigned int)v60,
      *(_DWORD *)&v42[48],
      *(_DWORD *)&v42[56],
      a2,
      a3,
      (unsigned int)&unk_10167BC38,
      4);
    v15 = *(_QWORD *)v60; /*0x100af88e8*/
    v16 = *(_QWORD *)&v60[8]; /*0x100af88ef*/
    v17 = *(_QWORD *)&v60[16]; /*0x100af88f6*/
    v18 = *(_QWORD *)&v60[24]; /*0x100af88fd*/
    if ( *(_QWORD *)v60 != 11 ) /*0x100af8908*/
    {
      a1[11] = *(_QWORD *)&v60[88]; /*0x100af8b23*/
      a1[10] = *(_QWORD *)&v60[80]; /*0x100af8b2b*/
      a1[9] = *(_QWORD *)&v60[72]; /*0x100af8b36*/
      a1[8] = *(_QWORD *)&v60[64]; /*0x100af8b41*/
      a1[7] = *(_QWORD *)&v60[56]; /*0x100af8b4c*/
      a1[6] = *(_QWORD *)&v60[48]; /*0x100af8b57*/
      v23 = *(_QWORD *)&v60[32]; /*0x100af8b5b*/
      a1[5] = *(_QWORD *)&v60[40]; /*0x100af8b69*/
      a1[4] = v23; /*0x100af8b6d*/
      a1[1] = v16; /*0x100af8b71*/
      a1[2] = v17; /*0x100af8b75*/
      a1[3] = v18; /*0x100af8b79*/
      *a1 = v15; /*0x100af8b7d*/
LABEL_42:
      if ( v58 ) /*0x100af8f40*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v58, 1); /*0x100af8f4e*/
      goto LABEL_44; /*0x100af8f4e*/
    }
    v64 = *(_QWORD *)&v60[24]; /*0x100af890e*/
    v65 = *(_BYTE **)&v60[16]; /*0x100af8912*/
    v59 = *(_QWORD *)&v60[8]; /*0x100af8916*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(*(_QWORD *)&v60[16], *(_QWORD *)&v60[8]); /*0x100af891d*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8); /*0x100af892c*/
    if ( !v19 ) /*0x100af8934*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144); /*0x100af8fa8*/
    v54 = 2; /*0x100af893a*/
    v55 = v19; /*0x100af8945*/
    v56 = 0; /*0x100af894c*/
    if ( codexmate_lib::core::relay::codex_diagnostic::is_diagnostic_orphan_provider::h9a1cfad6f07384ea(v57, v67, a6) ) /*0x100af8965*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v60, &v41); /*0x100af8980*/
      v40 = *(_OWORD *)&v42[16]; /*0x100af898c*/
      v39 = *(_QWORD *)&v42[16]; /*0x100af899a*/
      v68 = v42[32]; /*0x100af89a8*/
      v69 = v42[33]; /*0x100af89b2*/
      v67 = *(_QWORD *)v60; /*0x100af89bc*/
      v66 = *(_QWORD *)&v60[8]; /*0x100af89c7*/
      v38 = *(_QWORD *)&v60[16]; /*0x100af89d2*/
      codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620( /*0x100af89fc*/
        v60,
        *(_QWORD *)v42,
        *(_QWORD *)&v42[8],
        v53,
        v52);
      v20 = *(_QWORD *)v60; /*0x100af8a01*/
      v61 = *(_QWORD *)&v60[8]; /*0x100af8a0f*/
      v62 = *(_QWORD *)&v60[16]; /*0x100af8a1a*/
      v63 = *(_QWORD *)&v60[24]; /*0x100af8a25*/
      if ( *(_QWORD *)v60 != 11 ) /*0x100af8a2d*/
      {
        a1[11] = *(_QWORD *)&v60[88]; /*0x100af8d7b*/
        a1[10] = *(_QWORD *)&v60[80]; /*0x100af8d83*/
        a1[9] = *(_QWORD *)&v60[72]; /*0x100af8d8e*/
        a1[8] = *(_QWORD *)&v60[64]; /*0x100af8d99*/
        a1[7] = *(_QWORD *)&v60[56]; /*0x100af8da4*/
        a1[6] = *(_QWORD *)&v60[48]; /*0x100af8daf*/
        v26 = *(_QWORD *)&v60[32]; /*0x100af8db3*/
        a1[5] = *(_QWORD *)&v60[40]; /*0x100af8dc1*/
        a1[4] = v26; /*0x100af8dc5*/
        a1[3] = v63; /*0x100af8dcd*/
        v27 = v61; /*0x100af8dd1*/
        a1[2] = v62; /*0x100af8dd9*/
        a1[1] = v27; /*0x100af8ddd*/
        *a1 = v20; /*0x100af8de1*/
        v28 = v67; /*0x100af8de4*/
        goto LABEL_29; /*0x100af8de8*/
      }
      v49 = v61; /*0x100af8a3b*/
      v50 = v62; /*0x100af8a42*/
      v51 = v63; /*0x100af8a4d*/
      v43 = v67; /*0x100af8a58*/
      v44 = v66; /*0x100af8a63*/
      v45 = v38; /*0x100af8a71*/
      v46 = v40; /*0x100af8a7f*/
      v47 = v68; /*0x100af8a8a*/
      v48 = v69; /*0x100af8a94*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v54, &v43); /*0x100af8aa8*/
      v21 = v39; /*0x100af8aad*/
    }
    else
    {
      v21 = *(_QWORD *)&v42[16]; /*0x100af8b85*/
    }
    v67 = *(_QWORD *)&v42[64]; /*0x100af8b93*/
    if ( *(_QWORD *)&v42[64] == v21 /*0x100af8bab*/
      || !codexmate_lib::core::relay::codex_diagnostic::is_diagnostic_orphan_provider::h9a1cfad6f07384ea(v65, v64, a6) )
    {
LABEL_18:
      if ( v56 ) /*0x100af8cec*/
      {
        codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7( /*0x100af8d06*/
          v60,
          a2,
          a3,
          v55);
        if ( *(_DWORD *)v60 == 11 ) /*0x100af8d12*/
        {
          *((_BYTE *)a1 + 8) = 1; /*0x100af8d18*/
          *a1 = 11; /*0x100af8d1c*/
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaLine$C$alloc..string..String$RP$$GT$$GT$::hf4442198a098bf28(&v54); /*0x100af8d2a*/
          if ( v59 ) /*0x100af8d3d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v59, 1); /*0x100af8d44*/
          if ( v58 ) /*0x100af8d5a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v58, 1); /*0x100af8d61*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaAnchors$GT$::ha4e921fec32abf85(&v41); /*0x100af8d6d*/
          return a1; /*0x100af8d72*/
        }
        qmemcpy(a1, v60, 0x60u); /*0x100af8e0c*/
      }
      else
      {
        *((_BYTE *)a1 + 8) = 0; /*0x100af8ded*/
        *a1 = 11; /*0x100af8df1*/
      }
      goto LABEL_31; /*0x100af8e0c*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v60, &v42[40]); /*0x100af8bc6*/
    *(_QWORD *)&v40 = *(_QWORD *)&v42[72]; /*0x100af8bd2*/
    v68 = v42[80]; /*0x100af8be0*/
    v69 = v42[81]; /*0x100af8bea*/
    v64 = *(_QWORD *)v60; /*0x100af8bf4*/
    v66 = *(_QWORD *)&v60[8]; /*0x100af8bff*/
    v24 = *(_QWORD *)&v60[16]; /*0x100af8c03*/
    codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620( /*0x100af8c2d*/
      v60,
      *(_QWORD *)&v42[48],
      *(_QWORD *)&v42[56],
      v53,
      v52);
    v25 = *(_QWORD *)v60; /*0x100af8c32*/
    v61 = *(_QWORD *)&v60[8]; /*0x100af8c40*/
    v62 = *(_QWORD *)&v60[16]; /*0x100af8c4b*/
    v63 = *(_QWORD *)&v60[24]; /*0x100af8c56*/
    if ( *(_QWORD *)v60 == 11 ) /*0x100af8c5e*/
    {
      v49 = v61; /*0x100af8c6c*/
      v50 = v62; /*0x100af8c73*/
      v51 = v63; /*0x100af8c7e*/
      v43 = v64; /*0x100af8c89*/
      v44 = v66; /*0x100af8c94*/
      v45 = v24; /*0x100af8c9b*/
      *(_QWORD *)&v46 = v67; /*0x100af8ca6*/
      *((_QWORD *)&v46 + 1) = v40; /*0x100af8cb4*/
      v47 = v68; /*0x100af8cbf*/
      v48 = v69; /*0x100af8cc9*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v54, &v43); /*0x100af8cdd*/
      goto LABEL_18; /*0x100af8cdd*/
    }
    a1[11] = *(_QWORD *)&v60[88]; /*0x100af8e18*/
    a1[10] = *(_QWORD *)&v60[80]; /*0x100af8e20*/
    a1[9] = *(_QWORD *)&v60[72]; /*0x100af8e2b*/
    a1[8] = *(_QWORD *)&v60[64]; /*0x100af8e36*/
    a1[7] = *(_QWORD *)&v60[56]; /*0x100af8e41*/
    a1[6] = *(_QWORD *)&v60[48]; /*0x100af8e4c*/
    v29 = *(_QWORD *)&v60[32]; /*0x100af8e50*/
    a1[5] = *(_QWORD *)&v60[40]; /*0x100af8e5e*/
    a1[4] = v29; /*0x100af8e62*/
    a1[3] = v63; /*0x100af8e6a*/
    v30 = v61; /*0x100af8e6e*/
    a1[2] = v62; /*0x100af8e76*/
    a1[1] = v30; /*0x100af8e7a*/
    *a1 = v25; /*0x100af8e7e*/
    v28 = v64; /*0x100af8e81*/
LABEL_29:
    if ( v28 ) /*0x100af8e88*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v28, 1); /*0x100af8e93*/
LABEL_31:
    v31 = v65; /*0x100af8e98*/
    v32 = v56; /*0x100af8e9c*/
    if ( v56 ) /*0x100af8ea6*/
    {
      v33 = (_QWORD *)(v55 + 56); /*0x100af8eaf*/
      do /*0x100af8ec7*/
      {
        v34 = *(v33 - 7); /*0x100af8ec9*/
        if ( v34 ) /*0x100af8ed0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v33 - 6), v34, 1); /*0x100af8edb*/
        v35 = *(v33 - 1); /*0x100af8ee0*/
        if ( v35 ) /*0x100af8ee7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v35, 1); /*0x100af8ef1*/
        v33 += 9; /*0x100af8ec0*/
        --v32; /*0x100af8ec4*/
      }
      while ( v32 ); /*0x100af8ec7*/
    }
    if ( v54 ) /*0x100af8f02*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 72 * v54, 8); /*0x100af8f18*/
    if ( v59 ) /*0x100af8f27*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v59, 1); /*0x100af8f31*/
    goto LABEL_42; /*0x100af8f31*/
  }
  a1[11] = *(_QWORD *)&v60[88]; /*0x100af8abd*/
  a1[10] = *(_QWORD *)&v60[80]; /*0x100af8ac5*/
  a1[9] = *(_QWORD *)&v60[72]; /*0x100af8ad0*/
  a1[8] = *(_QWORD *)&v60[64]; /*0x100af8adb*/
  a1[7] = *(_QWORD *)&v60[56]; /*0x100af8ae6*/
  a1[6] = *(_QWORD *)&v60[48]; /*0x100af8af1*/
  v22 = *(_QWORD *)&v60[32]; /*0x100af8af5*/
  a1[5] = *(_QWORD *)&v60[40]; /*0x100af8b03*/
  a1[4] = v22; /*0x100af8b07*/
  a1[1] = v12; /*0x100af8b0b*/
  a1[2] = v13; /*0x100af8b0f*/
  a1[3] = v14; /*0x100af8b13*/
  *a1 = v11; /*0x100af8b17*/
LABEL_44:
  if ( v10 ) /*0x100af8f56*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v42, v10, 1); /*0x100af8f67*/
  if ( *(_QWORD *)&v42[40] ) /*0x100af8f76*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v42[48], *(_QWORD *)&v42[40], 1); /*0x100af8f84*/
  return a1; /*0x100af8f8c*/
}