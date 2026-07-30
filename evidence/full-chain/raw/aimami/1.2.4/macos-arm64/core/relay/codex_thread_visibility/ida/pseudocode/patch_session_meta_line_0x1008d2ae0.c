// __ZN13codexmate_lib4core5relay23codex_thread_visibility23patch_session_meta_line @ 0x1008d2ae0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_line::h150bff138ff7bffb(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3,
        const void *a4,
        signed __int64 a5,
        void *a6,
        __int64 __n,
        void *a8,
        __int64 a9)
{
  __int64 *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  _BYTE *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  int *v27; // rdi
  __int64 *v28; // r14
  __int64 *v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _BYTE *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // r14
  size_t v39; // rdx
  size_t v40; // r15
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 *v49; // r14
  _BYTE *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r12
  __int64 v56; // r15
  size_t v57; // rdx
  size_t v58; // r13
  __int64 v59; // r13
  int v60; // eax
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // [rsp+0h] [rbp-F0h]
  __int64 v74; // [rsp+8h] [rbp-E8h]
  void *__src; // [rsp+10h] [rbp-E0h]
  _QWORD v76[4]; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v77; // [rsp+38h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+40h] [rbp-B0h]
  __int64 v79; // [rsp+48h] [rbp-A8h]
  __int64 *v80; // [rsp+50h] [rbp-A0h]
  __int64 v81; // [rsp+58h] [rbp-98h]
  __int64 *v82; // [rsp+60h] [rbp-90h] BYREF
  __int64 v83; // [rsp+68h] [rbp-88h]
  __int64 v84; // [rsp+70h] [rbp-80h]
  __int64 v85; // [rsp+78h] [rbp-78h]
  __int64 v86; // [rsp+80h] [rbp-70h]
  __int64 v87; // [rsp+88h] [rbp-68h] BYREF
  signed __int64 v88; // [rsp+90h] [rbp-60h]
  __int64 v89; // [rsp+98h] [rbp-58h]
  signed __int64 v90; // [rsp+A0h] [rbp-50h]
  __int64 v91; // [rsp+A8h] [rbp-48h]
  signed __int64 v92; // [rsp+B0h] [rbp-40h]
  __int64 *v93; // [rsp+B8h] [rbp-38h]
  _BYTE *v94; // [rsp+C0h] [rbp-30h]

  v12 = a1; /*0x1008d2afd*/
  v87 = a2; /*0x1008d2b00*/
  v88 = a3; /*0x1008d2b04*/
  v89 = 0; /*0x1008d2b08*/
  v90 = 0; /*0x1008d2b10*/
  v91 = a2; /*0x1008d2b18*/
  v92 = a3; /*0x1008d2b1c*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(&v82, &v87); /*0x1008d2b2b*/
  if ( (_BYTE)v82 == 6 ) /*0x1008d2b39*/
  {
    result = v83; /*0x1008d2b3b*/
    *a1 = 3; /*0x1008d2b42*/
    a1[1] = result; /*0x1008d2b49*/
    return result; /*0x1008d2b4d*/
  }
  v76[0] = v82; /*0x1008d2b5e*/
  v76[2] = v84; /*0x1008d2b75*/
  v76[3] = v85; /*0x1008d2b80*/
  v76[1] = v83; /*0x1008d2b8d*/
  v16 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x1008d2ba7*/
                   &unk_10167F26E,
                   7,
                   v76,
                   v83,
                   v13,
                   v14);
  if ( !v16 || *v16 != 5 ) /*0x1008d2bb8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_10167F26E, 7, v17, v18); /*0x1008d2c49*/
    v19 = 30; /*0x1008d2c4e*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1008d2c5e*/
    if ( !v24 ) /*0x1008d2c66*/
      goto LABEL_76; /*0x1008d2c66*/
    qmemcpy(v24, "session_meta payload not found", 30); /*0x1008d2ca0*/
    *a1 = 9; /*0x1008d2ca3*/
    a1[1] = 30; /*0x1008d2caa*/
    a1[2] = (__int64)v24; /*0x1008d2cb2*/
    a1[3] = 30; /*0x1008d2cb6*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v76); /*0x1008d2cb6*/
  }
  __src = a6; /*0x1008d2bbe*/
  v94 = v16; /*0x1008d2bc5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_10167F26E, 7, v17, v18); /*0x1008d2bc9*/
  v19 = 14; /*0x1008d2bce*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1008d2bde*/
  if ( !v20 ) /*0x1008d2be6*/
    goto LABEL_76; /*0x1008d2be6*/
  v22 = (__int64 *)(v94 + 8); /*0x1008d2bf3*/
  qmemcpy(v20, "model_provider", 14); /*0x1008d2c10*/
  v77 = 14; /*0x1008d2c14*/
  v78 = (__int64)v20; /*0x1008d2c1f*/
  v79 = 14; /*0x1008d2c26*/
  if ( a5 < 0 ) /*0x1008d2c34*/
  {
    v23 = 0; /*0x1008d2c3a*/
    goto LABEL_8; /*0x1008d2c3a*/
  }
  v80 = v22; /*0x1008d2cdc*/
  if ( a5 ) /*0x1008d2ce3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1, v21, v22); /*0x1008d2ce5*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1008d2cf2*/
    v23 = 1; /*0x1008d2cf7*/
    if ( !v25 ) /*0x1008d2cff*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, a5); /*0x1008d2c3c*/
    v26 = v25; /*0x1008d2d05*/
  }
  else
  {
    v26 = 1; /*0x1008d2d0a*/
  }
  memcpy((void *)v26, a4, a5); /*0x1008d2d19*/
  v88 = a5; /*0x1008d2d1e*/
  v89 = v26; /*0x1008d2d22*/
  v90 = a5; /*0x1008d2d26*/
  LOBYTE(v87) = 3; /*0x1008d2d2a*/
  v27 = (int *)&v82; /*0x1008d2d2e*/
  v28 = v80; /*0x1008d2d40*/
  v29 = v80; /*0x1008d2d47*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v82, v80, &v77, &v87); /*0x1008d2d4a*/
  v32 = v94; /*0x1008d2d4f*/
  if ( (_BYTE)v82 != 6 ) /*0x1008d2d5a*/
  {
    v27 = (int *)&v82; /*0x1008d2d5c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v82); /*0x1008d2d63*/
  }
  v33 = *v28; /*0x1008d2d68*/
  if ( !*v28 ) /*0x1008d2d6e*/
    goto LABEL_68; /*0x1008d2d6e*/
  v93 = v12; /*0x1008d2d74*/
  v86 = *((_QWORD *)v32 + 2); /*0x1008d2d7c*/
  v81 = v33; /*0x1008d2d87*/
  v34 = v33; /*0x1008d2d8e*/
  while ( 2 ) /*0x1008d2d91*/
  {
    v35 = v34 + 360; /*0x1008d2d91*/
    v73 = v34; /*0x1008d2d98*/
    v74 = *(unsigned __int16 *)(v34 + 626); /*0x1008d2da6*/
    v31 = (unsigned int)(8 * v74); /*0x1008d2dad*/
    v36 = 3 * v31; /*0x1008d2db4*/
    v37 = -1; /*0x1008d2db8*/
    do /*0x1008d2e0c*/
    {
      if ( !v36 ) /*0x1008d2dc3*/
      {
        v37 = v74; /*0x1008d2e17*/
        goto LABEL_30; /*0x1008d2e17*/
      }
      v38 = v35 + 24; /*0x1008d2dc5*/
      v29 = *(__int64 **)(v35 + 8); /*0x1008d2dc9*/
      v39 = *(_QWORD *)(v35 + 16); /*0x1008d2dcd*/
      v40 = v39 - 5; /*0x1008d2dd4*/
      if ( v39 >= 5 ) /*0x1008d2ddd*/
        v39 = 5; /*0x1008d2ddd*/
      v41 = -(__int64)v40; /*0x1008d2de1*/
      v27 = &anon_727917ecdb2ab9f22bcf5eba88f4827d_354; /*0x1008d2de4*/
      v42 = memcmp(&anon_727917ecdb2ab9f22bcf5eba88f4827d_354, v29, v39); /*0x1008d2de7*/
      if ( v42 ) /*0x1008d2df0*/
        v41 = v42; /*0x1008d2df0*/
      LOBYTE(v31) = (v41 > 0) - (v41 < 0); /*0x1008d2dfd*/
      ++v37; /*0x1008d2dff*/
      v36 -= 24; /*0x1008d2e02*/
      v35 = v38; /*0x1008d2e06*/
    }
    while ( (_BYTE)v31 == 1 ); /*0x1008d2e0c*/
    if ( !(_BYTE)v31 ) /*0x1008d2e13*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1008d2e48*/
        &anon_727917ecdb2ab9f22bcf5eba88f4827d_354,
        v29,
        v30,
        v31);
      v19 = 5; /*0x1008d2e4d*/
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1008d2e5d*/
      v12 = v93; /*0x1008d2e65*/
      if ( !v43 ) /*0x1008d2e69*/
        goto LABEL_76; /*0x1008d2e69*/
      *(_BYTE *)(v43 + 4) = 108; /*0x1008d2e72*/
      *(_DWORD *)v43 = 1701080941; /*0x1008d2e76*/
      v77 = 5; /*0x1008d2e7c*/
      v78 = v43; /*0x1008d2e87*/
      v79 = 5; /*0x1008d2e8e*/
      if ( __n < 0 ) /*0x1008d2e9e*/
      {
        v46 = 0; /*0x1008d2ea0*/
        goto LABEL_35; /*0x1008d2ea0*/
      }
      if ( __n ) /*0x1008d2eb4*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v44, v45); /*0x1008d2eb6*/
        v46 = 1; /*0x1008d2ebb*/
        v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008d2eca*/
        if ( !v47 ) /*0x1008d2ed2*/
LABEL_35:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v46, __n); /*0x1008d2ea3*/
        v48 = v47; /*0x1008d2ed4*/
      }
      else
      {
        v48 = 1; /*0x1008d2ed9*/
      }
      memcpy((void *)v48, __src, __n); /*0x1008d2ef0*/
      v88 = __n; /*0x1008d2ef5*/
      v89 = v48; /*0x1008d2ef9*/
      v90 = __n; /*0x1008d2efd*/
      LOBYTE(v87) = 3; /*0x1008d2f01*/
      v27 = (int *)&v82; /*0x1008d2f05*/
      v49 = v80; /*0x1008d2f17*/
      v29 = v80; /*0x1008d2f1e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v82, v80, &v77, &v87); /*0x1008d2f21*/
      v50 = v94; /*0x1008d2f26*/
      if ( (_BYTE)v82 != 6 ) /*0x1008d2f31*/
      {
        v27 = (int *)&v82; /*0x1008d2f33*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v82); /*0x1008d2f3a*/
      }
      v51 = *v49; /*0x1008d2f3f*/
      if ( *v49 ) /*0x1008d2f3f*/
      {
LABEL_43:
        v94 = *((_BYTE **)v50 + 2); /*0x1008d2f4b*/
        v52 = v51; /*0x1008d2f5a*/
LABEL_44:
        v53 = v52 + 360; /*0x1008d2f5d*/
        v81 = v52; /*0x1008d2f64*/
        v86 = *(unsigned __int16 *)(v52 + 626); /*0x1008d2f72*/
        v54 = 3LL * (unsigned int)(8 * v86); /*0x1008d2f7d*/
        v55 = -1; /*0x1008d2f81*/
        do /*0x1008d2fdc*/
        {
          if ( !v54 ) /*0x1008d2f93*/
          {
            v55 = v86; /*0x1008d2fe7*/
LABEL_54:
            v12 = v93; /*0x1008d2feb*/
            v31 = (unsigned __int64)(v94 - 1); /*0x1008d2ff3*/
            if ( !v94 ) /*0x1008d2ffe*/
              goto LABEL_68; /*0x1008d2ffe*/
            --v94; /*0x1008d3004*/
            v52 = *(_QWORD *)(v81 + 8 * v55 + 632); /*0x1008d3008*/
            goto LABEL_44; /*0x1008d3010*/
          }
          v56 = v53 + 24; /*0x1008d2f95*/
          v29 = *(__int64 **)(v53 + 8); /*0x1008d2f99*/
          v57 = *(_QWORD *)(v53 + 16); /*0x1008d2f9d*/
          v58 = v57 - 22; /*0x1008d2fa4*/
          if ( v57 >= 0x16 ) /*0x1008d2fad*/
            v57 = 22; /*0x1008d2fad*/
          v59 = -(__int64)v58; /*0x1008d2fb1*/
          v27 = (int *)"model_reasoning_effort"; /*0x1008d2fb4*/
          v60 = memcmp("model_reasoning_effort", v29, v57); /*0x1008d2fb7*/
          if ( v60 ) /*0x1008d2fc0*/
            v59 = v60; /*0x1008d2fc0*/
          LOBYTE(v61) = (v59 > 0) - (v59 < 0); /*0x1008d2fcd*/
          ++v55; /*0x1008d2fcf*/
          v54 -= 24; /*0x1008d2fd2*/
          v53 = v56; /*0x1008d2fd6*/
        }
        while ( (_BYTE)v61 == 1 ); /*0x1008d2fdc*/
        if ( (_BYTE)v61 ) /*0x1008d2fe3*/
          goto LABEL_54; /*0x1008d2fe3*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model_reasoning_effort", v29, v30, v61); /*0x1008d3015*/
        v19 = 22; /*0x1008d301a*/
        v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x1008d302a*/
        v12 = v93; /*0x1008d3032*/
        if ( v62 ) /*0x1008d3036*/
        {
          qmemcpy(v62, "model_reasoning_effort", 22); /*0x1008d3065*/
          v77 = 22; /*0x1008d3068*/
          v78 = (__int64)v62; /*0x1008d3073*/
          v79 = 22; /*0x1008d307a*/
          if ( a9 < 0 ) /*0x1008d308a*/
          {
            v65 = 0; /*0x1008d308c*/
            goto LABEL_59; /*0x1008d308c*/
          }
          if ( a9 ) /*0x1008d30a0*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1, v63, v64); /*0x1008d30a2*/
            v65 = 1; /*0x1008d30a7*/
            v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a9, 1); /*0x1008d30b6*/
            if ( !v66 ) /*0x1008d30be*/
LABEL_59:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, a9); /*0x1008d308f*/
            v67 = v66; /*0x1008d30c0*/
          }
          else
          {
            v67 = 1; /*0x1008d30db*/
          }
          memcpy((void *)v67, a8, a9); /*0x1008d30ef*/
          v88 = a9; /*0x1008d30f4*/
          v89 = v67; /*0x1008d30f8*/
          v90 = a9; /*0x1008d30fc*/
          LOBYTE(v87) = 3; /*0x1008d3100*/
          v27 = (int *)&v82; /*0x1008d3104*/
          v29 = v80; /*0x1008d3116*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v82, v80, &v77, &v87); /*0x1008d311d*/
          if ( (_BYTE)v82 != 6 ) /*0x1008d3129*/
          {
            v27 = (int *)&v82; /*0x1008d312b*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v82); /*0x1008d3132*/
          }
          goto LABEL_68; /*0x1008d3132*/
        }
LABEL_76:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x1008d31e4*/
      }
      goto LABEL_68; /*0x1008d2f45*/
    }
LABEL_30:
    v12 = v93; /*0x1008d2e1e*/
    if ( v86 ) /*0x1008d2e2a*/
    {
      --v86; /*0x1008d2e30*/
      v34 = *(_QWORD *)(v73 + 8 * v37 + 632); /*0x1008d2e3b*/
      continue; /*0x1008d2e43*/
    }
    break;
  }
  v50 = v94; /*0x1008d30c5*/
  v51 = v81; /*0x1008d30c9*/
  if ( v81 ) /*0x1008d30d3*/
    goto LABEL_43; /*0x1008d30d3*/
LABEL_68:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v29, v30, v31); /*0x1008d3137*/
  v19 = 128; /*0x1008d313c*/
  v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1008d314c*/
  if ( !v68 ) /*0x1008d3154*/
    goto LABEL_76; /*0x1008d3154*/
  v87 = 128; /*0x1008d315a*/
  v88 = v68; /*0x1008d3162*/
  v89 = 0; /*0x1008d3166*/
  v82 = &v87; /*0x1008d3172*/
  v69 = serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::hfce65af905ca4973( /*0x1008d318c*/
          v76,
          &v82);
  if ( v69 ) /*0x1008d3192*/
  {
    if ( v87 ) /*0x1008d319b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x1008d31a6*/
  }
  else
  {
    v70 = v87; /*0x1008d31ad*/
    v69 = v88; /*0x1008d31b1*/
    if ( !__OFSUB__(-v87, 1) ) /*0x1008d31bb*/
    {
      v72 = v89; /*0x1008d31d1*/
      v12[2] = v88; /*0x1008d31d5*/
      v12[3] = v72; /*0x1008d31d9*/
      v71 = 11; /*0x1008d31dd*/
      goto LABEL_74; /*0x1008d31e2*/
    }
  }
  v71 = 3; /*0x1008d31bd*/
  v70 = v69; /*0x1008d31c2*/
LABEL_74:
  *v12 = v71; /*0x1008d31c5*/
  v12[1] = v70; /*0x1008d31c8*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v76); /*0x1008d2cca*/
}