// codexmate_lib::platform::process::collect_codex_kill_targets @ 0x1001c0d90
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

__int64 __fastcall codexmate_lib::platform::process::collect_codex_kill_targets::h9e99c6072be19f0b(__int64 *a1)
{
  __int64 *v1; // r15
  __int64 result; // rax
  char *v3; // rbx
  unsigned int *v4; // r14
  unsigned int *v5; // r8
  unsigned int *v6; // rdx
  unsigned int *v7; // r15
  unsigned __int64 v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // r14
  char *v18; // r12
  unsigned int *v19; // rax
  char *v20; // r15
  char *v21; // rbx
  char *v22; // rax
  __int64 v23; // r12
  void *v24; // r13
  __int64 v25; // r14
  __int64 v26; // r14
  unsigned int *v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r15
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  _QWORD v35[3]; // [rsp+8h] [rbp-128h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-110h]
  __int64 *v37; // [rsp+28h] [rbp-108h]
  unsigned int *v38; // [rsp+30h] [rbp-100h]
  char *v39; // [rsp+38h] [rbp-F8h]
  __int64 v40; // [rsp+40h] [rbp-F0h]
  __int64 v41; // [rsp+48h] [rbp-E8h]
  unsigned int *v42; // [rsp+50h] [rbp-E0h] BYREF
  unsigned int *v43; // [rsp+58h] [rbp-D8h]
  unsigned int *v44; // [rsp+60h] [rbp-D0h]
  unsigned int *v45; // [rsp+68h] [rbp-C8h]
  _QWORD v46[2]; // [rsp+70h] [rbp-C0h] BYREF
  char *v47; // [rsp+80h] [rbp-B0h] BYREF
  char *v48; // [rsp+88h] [rbp-A8h]
  unsigned int *v49; // [rsp+90h] [rbp-A0h]
  unsigned int *v50; // [rsp+98h] [rbp-98h]
  __int64 v51; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-88h]
  __int64 v53; // [rsp+B0h] [rbp-80h]
  __int64 v54; // [rsp+B8h] [rbp-78h]
  __int64 v55; // [rsp+C0h] [rbp-70h]
  __int64 v56; // [rsp+C8h] [rbp-68h]
  __int64 v57; // [rsp+D0h] [rbp-60h]
  __int64 v58; // [rsp+D8h] [rbp-58h]
  char *v59; // [rsp+E0h] [rbp-50h] BYREF
  unsigned int *v60; // [rsp+E8h] [rbp-48h]
  __int64 v61; // [rsp+F0h] [rbp-40h]
  __int64 v62; // [rsp+F8h] [rbp-38h]
  unsigned int v63; // [rsp+104h] [rbp-2Ch]

  v1 = a1; /*0x1001c0da4*/
  codexmate_lib::platform::process::list_codex_processes_matching::h78ec9ea4eeb3f1c3(&v47); /*0x1001c0dae*/
  result = (__int64)v47; /*0x1001c0db3*/
  v3 = v48; /*0x1001c0dba*/
  v4 = v49; /*0x1001c0dc1*/
  v5 = v50; /*0x1001c0dc8*/
  if ( v47 == (char *)10 ) /*0x1001c0dd3*/
  {
    v37 = a1; /*0x1001c0dd9*/
    v42 = v49; /*0x1001c0de7*/
    v43 = v49; /*0x1001c0dee*/
    v44 = (unsigned int *)v48; /*0x1001c0df5*/
    v45 = &v49[8 * (_QWORD)v50]; /*0x1001c0dfc*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hee55de9857967a16( /*0x1001c0e17*/
      &v42,
      v49,
      v49,
      v46);
    v7 = v6; /*0x1001c0e1c*/
    if ( v45 != v43 ) /*0x1001c0e30*/
    {
      v8 = (unsigned __int64)((char *)v45 - (char *)v43) >> 5; /*0x1001c0e36*/
      v9 = v43 + 4; /*0x1001c0e3a*/
      do /*0x1001c0e47*/
      {
        v10 = *(v9 - 1); /*0x1001c0e49*/
        if ( v10 ) /*0x1001c0e51*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x1001c0e5c*/
        v9 += 4; /*0x1001c0e40*/
        --v8; /*0x1001c0e44*/
      }
      while ( v8 ); /*0x1001c0e47*/
    }
    v12 = (unsigned __int64)((char *)v7 - (char *)v4) >> 5; /*0x1001c0ec0*/
    v59 = v3; /*0x1001c0ec4*/
    v60 = v4; /*0x1001c0ec8*/
    v61 = v12; /*0x1001c0ecc*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1001c0ed7*/
    v14 = v13; /*0x1001c0ed9*/
    if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x1001c0ee0*/
    {
      v15 = *(_QWORD *)v13; /*0x1001c0ee6*/
      v16 = *(_QWORD *)(v14 + 8); /*0x1001c0eea*/
    }
    else
    {
      v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1001c12b8*/
      *(_QWORD *)v14 = v15; /*0x1001c12bd*/
      *(_QWORD *)(v14 + 8) = v16; /*0x1001c12c1*/
      *(_BYTE *)(v14 + 16) = 1; /*0x1001c12c5*/
    }
    *(_QWORD *)v14 = v15 + 1; /*0x1001c0ef2*/
    v50 = nullptr; /*0x1001c0efd*/
    v49 = nullptr; /*0x1001c0f0b*/
    v48 = nullptr; /*0x1001c0f19*/
    v47 = (char *)anon_0bcfb5f5de49270c5675714f036928d0_3; /*0x1001c0f27*/
    v51 = v15; /*0x1001c0f2e*/
    v52 = v16; /*0x1001c0f35*/
    if ( v7 != v4 ) /*0x1001c0f3f*/
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h65961a3992d9a5d8( /*0x1001c12e5*/
        &v47,
        (unsigned __int64)((char *)v7 - (char *)v4) >> 5,
        &v51,
        1);
    if ( v4 != v7 ) /*0x1001c0f48*/
    {
      do /*0x1001c0f72*/
      {
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h66247658788e8c84(&v47, *v4); /*0x1001c0f66*/
        v4 += 8; /*0x1001c0f6b*/
        --v12; /*0x1001c0f6f*/
      }
      while ( v12 ); /*0x1001c0f72*/
    }
    v46[1] = v52; /*0x1001c0f7b*/
    v46[0] = v51; /*0x1001c0f89*/
    v45 = v50; /*0x1001c0f97*/
    v44 = v49; /*0x1001c0fa5*/
    v43 = (unsigned int *)v48; /*0x1001c0fba*/
    v42 = (unsigned int *)v47; /*0x1001c0fc1*/
    codexmate_lib::platform::process::list_codex_db_holder_processes::hc3af5600c2e57f87(&v47); /*0x1001c0fcf*/
    v17 = (unsigned int *)v47; /*0x1001c0fd4*/
    v18 = v48; /*0x1001c0fdb*/
    v19 = v49; /*0x1001c0fe2*/
    v20 = &v48[32 * (_QWORD)v49]; /*0x1001c0ff0*/
    v47 = v48; /*0x1001c0ff3*/
    v49 = v17; /*0x1001c1001*/
    v50 = (unsigned int *)v20; /*0x1001c1008*/
    v21 = v48; /*0x1001c100f*/
    if ( v19 ) /*0x1001c1015*/
    {
      v38 = v17; /*0x1001c101b*/
      v39 = v48; /*0x1001c102c*/
      v21 = v48 + 32; /*0x1001c1033*/
      v36 = 0x8000000000000000LL; /*0x1001c103c*/
      while ( 1 ) /*0x1001c1065*/
      {
        v23 = *((_QWORD *)v21 - 3); /*0x1001c1065*/
        if ( v23 == v36 ) /*0x1001c1070*/
          break; /*0x1001c1070*/
        v63 = *((_DWORD *)v21 - 8); /*0x1001c1079*/
        v24 = *((void **)v21 - 2); /*0x1001c107c*/
        v25 = *((_QWORD *)v21 - 1); /*0x1001c1080*/
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1001c1129*/
                                 &anon_0bcfb5f5de49270c5675714f036928d0_468,
                                 0x14u,
                                 v24)
          && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &anon_0bcfb5f5de49270c5675714f036928d0_469,
                                 0xCu,
                                 v24)
          && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &anon_0bcfb5f5de49270c5675714f036928d0_470,
                                 0xCu,
                                 v24)
          && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &anon_0bcfb5f5de49270c5675714f036928d0_471,
                                 8u,
                                 v24)
          && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 "crashpad_handler-axpid=,command=-t-- | ",
                                 0x10u,
                                 v24)
          && !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h66247658788e8c84(&v42, v63) )
        {
          codexmate_lib::platform::process::extract_process_name::he3a9bb08c623f766(v35, v24, v25); /*0x1001c1143*/
          v62 = v35[0]; /*0x1001c114f*/
          v41 = v35[1]; /*0x1001c115a*/
          v40 = v35[2]; /*0x1001c1168*/
          v26 = v61; /*0x1001c116f*/
          if ( (char *)v61 == v59 ) /*0x1001c1177*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he87f7d6f2e49d34f(&v59); /*0x1001c117d*/
          v27 = v60; /*0x1001c1182*/
          v28 = 8 * v26; /*0x1001c1189*/
          v60[v28] = v63; /*0x1001c1190*/
          *(_QWORD *)&v27[v28 + 2] = v62; /*0x1001c1197*/
          *(_QWORD *)&v27[v28 + 4] = v41; /*0x1001c11a3*/
          *(_QWORD *)&v27[v28 + 6] = v40; /*0x1001c11af*/
          v61 = v26 + 1; /*0x1001c11b7*/
        }
        if ( v23 ) /*0x1001c11c3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x1001c11d4*/
        v22 = v21 - 32; /*0x1001c1050*/
        v21 += 32; /*0x1001c1054*/
        if ( v22 + 32 == v20 ) /*0x1001c105f*/
        {
          v21 = v20; /*0x1001c11de*/
          break; /*0x1001c11de*/
        }
      }
      v48 = v21; /*0x1001c11e1*/
      v17 = v38; /*0x1001c11e8*/
      v18 = v39; /*0x1001c11ef*/
    }
    v29 = v20 - v21; /*0x1001c11f6*/
    if ( v29 ) /*0x1001c11f9*/
    {
      v30 = v29 >> 5; /*0x1001c11fb*/
      v31 = v21 + 16; /*0x1001c11ff*/
      do /*0x1001c1217*/
      {
        v32 = *(v31 - 1); /*0x1001c1219*/
        if ( v32 ) /*0x1001c1220*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v32, 1); /*0x1001c122a*/
        v31 += 4; /*0x1001c1210*/
        --v30; /*0x1001c1214*/
      }
      while ( v30 ); /*0x1001c1217*/
    }
    if ( v17 ) /*0x1001c1234*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 32LL * (_QWORD)v17, 8); /*0x1001c1245*/
    v1 = v37; /*0x1001c1254*/
    if ( v43 ) /*0x1001c125b*/
    {
      v33 = (4LL * (_QWORD)v43 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x1001c1265*/
      if ( (unsigned int *)((char *)v43 + v33) != (unsigned int *)-17LL ) /*0x1001c1270*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v42 - v33, (char *)v43 + v33 + 17, 16); /*0x1001c1281*/
    }
    v1[3] = v61; /*0x1001c128a*/
    v34 = (__int64)v59; /*0x1001c128e*/
    v1[2] = (__int64)v60; /*0x1001c1296*/
    v1[1] = v34; /*0x1001c129a*/
    result = 10; /*0x1001c129e*/
  }
  else
  {
    a1[11] = v58; /*0x1001c0e67*/
    a1[10] = v57; /*0x1001c0e6f*/
    a1[9] = v56; /*0x1001c0e77*/
    a1[8] = v55; /*0x1001c0e7f*/
    a1[7] = v54; /*0x1001c0e87*/
    a1[6] = v53; /*0x1001c0e8f*/
    v11 = v51; /*0x1001c0e93*/
    a1[5] = v52; /*0x1001c0ea1*/
    a1[4] = v11; /*0x1001c0ea5*/
    a1[1] = (__int64)v3; /*0x1001c0ea9*/
    a1[2] = (__int64)v4; /*0x1001c0ead*/
    a1[3] = (__int64)v5; /*0x1001c0eb1*/
  }
  *v1 = result; /*0x1001c12a3*/
  return result; /*0x1001c12a6*/
}
