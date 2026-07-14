// owner: codexmate_lib::commands::relay::diagnose_codex_router::hd99dd9f11da0e34e
// VA: 0x1004c4cf0 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

__int64 __fastcall codexmate_lib::commands::relay::diagnose_codex_router::hd99dd9f11da0e34e(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // r14d
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 **v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  const void *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 (__fastcall *v17)(); // rax
  const void *v18; // rsi
  size_t v19; // rdx
  char v20; // r13
  char v21; // bl
  __int16 v22; // r14
  unsigned __int64 v23; // r15
  _WORD *v24; // rax
  _WORD *v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // r15
  __int64 v28; // r12
  _DWORD *v29; // r14
  _QWORD __src[73]; // [rsp+8h] [rbp-718h] BYREF
  __int64 v32; // [rsp+250h] [rbp-4D0h]
  __int64 v33; // [rsp+258h] [rbp-4C8h]
  _QWORD __dst[20]; // [rsp+2D8h] [rbp-448h] BYREF
  _BYTE v35[16]; // [rsp+378h] [rbp-3A8h] BYREF
  __int64 v36; // [rsp+388h] [rbp-398h]
  char v37[72]; // [rsp+390h] [rbp-390h] BYREF
  _QWORD v38[3]; // [rsp+3D8h] [rbp-348h] BYREF
  __int16 v39; // [rsp+3F0h] [rbp-330h] BYREF
  char v40; // [rsp+3F2h] [rbp-32Eh]
  __int64 v41[20]; // [rsp+428h] [rbp-2F8h] BYREF
  char v42; // [rsp+4CCh] [rbp-254h]
  __int64 v43; // [rsp+4D0h] [rbp-250h] BYREF
  __int64 v44; // [rsp+4D8h] [rbp-248h]
  __int64 v45; // [rsp+4E0h] [rbp-240h]
  _QWORD v46[2]; // [rsp+4E8h] [rbp-238h] BYREF
  __int64 v47; // [rsp+4F8h] [rbp-228h]
  __int64 v48; // [rsp+500h] [rbp-220h]
  __int64 v49; // [rsp+508h] [rbp-218h]
  _QWORD v50[40]; // [rsp+510h] [rbp-210h] BYREF
  _QWORD v51[3]; // [rsp+650h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+668h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+670h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+678h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+680h] [rbp-A0h] BYREF
  unsigned __int64 **v56; // [rsp+688h] [rbp-98h]
  __int64 (__fastcall *v57)(); // [rsp+690h] [rbp-90h]
  int v58; // [rsp+69Ch] [rbp-84h]
  __int64 v59; // [rsp+6A0h] [rbp-80h]
  __int64 v60; // [rsp+6A8h] [rbp-78h]
  int v61; // [rsp+6B4h] [rbp-6Ch]
  unsigned __int64 *v62; // [rsp+6B8h] [rbp-68h] BYREF
  unsigned __int64 **v63; // [rsp+6C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+6C8h] [rbp-58h]
  __int64 v65; // [rsp+6D0h] [rbp-50h]
  __int64 v66; // [rsp+6D8h] [rbp-48h]
  __int64 v67; // [rsp+6E0h] [rbp-40h]
  size_t __n; // [rsp+6E8h] [rbp-38h]
  __int64 (__fastcall *v69)(); // [rsp+6F0h] [rbp-30h]

  v48 = a1; /*0x1004c4d07*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(__src, a2); /*0x1004c4d18*/
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)v35, (__int64)__src); /*0x1004c4d27*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__src); /*0x1004c4d3d*/
  if ( __OFSUB__(0, v41[0]) ) /*0x1004c4d44*/
  {
    __dst[0] = 0x8000000000000000LL; /*0x1004c4d4d*/
  }
  else
  {
    _$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$u20$as$u20$core..clone..Clone$GT$::clone::h84bd7d278a4c4124( /*0x1004c4d64*/
      __src,
      v41);
    memcpy(__dst, __src, sizeof(__dst)); /*0x1004c4d7c*/
  }
  codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h02cff1335e2f372e(v51, a2); /*0x1004c4d8b*/
  v53 = v36; /*0x1004c4d97*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd2fe128b4c6cf4cc(v46, v37); /*0x1004c4dac*/
  v52 = v47; /*0x1004c4db8*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::hac90456ee84df9c2(v50); /*0x1004c4dc6*/
  codexmate_lib::platform::paths::CodexPaths::from_home::h1ecd6646f13db1b2(__src, v50); /*0x1004c4dd9*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v50, __src[7], __src[8]); /*0x1004c4df3*/
  v66 = v50[0]; /*0x1004c4dff*/
  if ( v50[0] == 0x8000000000000000LL ) /*0x1004c4e06*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9(v50); /*0x1004c4e0f*/
    v2 = 0; /*0x1004c4e14*/
    v3 = 0; /*0x1004c4e17*/
    goto LABEL_16; /*0x1004c4e1a*/
  }
  v4 = v50[2]; /*0x1004c4e26*/
  v60 = v50[1]; /*0x1004c4e41*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1004c4e48*/
    v50,
    v50[1],
    v50[2],
    "model_providermodel_catalog_json",
    14);
  if ( v50[0] == 0x8000000000000000LL ) /*0x1004c4e57*/
  {
    v2 = 0; /*0x1004c4e59*/
    goto LABEL_13; /*0x1004c4e5c*/
  }
  if ( v50[2] != 6 ) /*0x1004c4e66*/
  {
    v2 = 0; /*0x1004c4e8c*/
    if ( !v50[0] ) /*0x1004c4e92*/
      goto LABEL_13; /*0x1004c4e92*/
    goto LABEL_12; /*0x1004c4e92*/
  }
  LOBYTE(v2) = (*(_DWORD *)v50[1] ^ 0x616D6961 | *(unsigned __int16 *)(v50[1] + 4LL) ^ 0x3169) == 0; /*0x1004c4e81*/
  if ( v50[0] ) /*0x1004c4e88*/
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[1], v50[0], 1); /*0x1004c4e94*/
LABEL_13:
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004c4ea5*/
    &v63,
    v32,
    v33,
    "codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog",
    25);
  __n = (size_t)v64; /*0x1004c4ecd*/
  v5 = v65; /*0x1004c4ed1*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::hb49f8d2212cac9c1( /*0x1004c4ef0*/
    v50,
    v60,
    v4,
    "model_catalog_json",
    18);
  v6 = v50[0]; /*0x1004c4ef5*/
  if ( v50[0] == 0x8000000000000000LL ) /*0x1004c4eff*/
  {
    v3 = 0; /*0x1004c4f05*/
    v7 = v63; /*0x1004c4f08*/
    if ( !v63 ) /*0x1004c4f0f*/
      goto LABEL_16; /*0x1004c4f0f*/
    goto LABEL_15; /*0x1004c4f0f*/
  }
  v13 = v50[1]; /*0x1004c505c*/
  v3 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h48bb34749364d295( /*0x1004c5079*/
         v50[1],
         v50[2],
         __n,
         v5);
  if ( v6 ) /*0x1004c507f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v6, 1); /*0x1004c508c*/
  v7 = v63; /*0x1004c509b*/
  if ( v63 ) /*0x1004c50a2*/
LABEL_15:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, v7, 1); /*0x1004c4f11*/
LABEL_16:
  codexmate_lib::core::relay::codex_writer::user_top_level_profile::ha693e95cfeb00ab4(v50, __src); /*0x1004c4f1f*/
  if ( LODWORD(v50[0]) == 10 ) /*0x1004c4f39*/
  {
    v63 = (unsigned __int64 **)v50[2]; /*0x1004c4f49*/
    v64 = (__int64 (__fastcall *)())v50[3]; /*0x1004c4f54*/
    if ( v50[1] != 0x8000000000000001LL ) /*0x1004c4f5f*/
    {
      v55 = v50[1]; /*0x1004c4f61*/
      v56 = v63; /*0x1004c4f70*/
      v57 = v64; /*0x1004c4f77*/
      goto LABEL_21; /*0x1004c4f7e*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v50); /*0x1004c4f87*/
  }
  v55 = 0x8000000000000000LL; /*0x1004c4f8c*/
LABEL_21:
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004c4f93*/
    &v43,
    v32,
    v33,
    "codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog",
    25);
  v8 = v45; /*0x1004c4fc1*/
  v59 = v44; /*0x1004c4fcf*/
  std::sys::fs::metadata::h32fa16d3052ea535(v50, v44, v45); /*0x1004c4fd6*/
  v9 = v50[0]; /*0x1004c4fdb*/
  v10 = v50[0]; /*0x1004c4fe9*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1004c4fec*/
    v50[0],
    v50[1]);
  v61 = v3; /*0x1004c4ff4*/
  if ( !(_BYTE)v9 ) /*0x1004c4ff8*/
  {
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v50, v59, v8); /*0x1004c502c*/
    v11 = (const void *)v50[1]; /*0x1004c5031*/
    __n = v50[2]; /*0x1004c503f*/
    if ( v50[2] < 0LL ) /*0x1004c5046*/
    {
      v12 = 0; /*0x1004c5048*/
      goto LABEL_26; /*0x1004c5048*/
    }
    if ( v50[2] ) /*0x1004c50ad*/
    {
      v3 = v2; /*0x1004c50af*/
      v14 = v9; /*0x1004c50b2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50); /*0x1004c50b5*/
      v12 = 1; /*0x1004c50ba*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1004c50c9*/
      if ( !v15 ) /*0x1004c50d1*/
LABEL_26:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, __n); /*0x1004c504b*/
      v10 = v15; /*0x1004c50d7*/
      v9 = v14; /*0x1004c50da*/
      v2 = v3; /*0x1004c50dd*/
      LOBYTE(v3) = v61; /*0x1004c50e0*/
    }
    else
    {
      v10 = 1; /*0x1004c50e6*/
    }
    v54 = v10; /*0x1004c50eb*/
    memcpy((void *)v10, v11, __n); /*0x1004c50f9*/
    if ( 2LL * v50[0] ) /*0x1004c5105*/
    {
      v10 = (__int64)v11; /*0x1004c522e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v50[0], 1); /*0x1004c5231*/
      v58 = v2; /*0x1004c523d*/
      v49 = v9; /*0x1004c5244*/
      if ( v51[0] == 0x8000000000000000LL ) /*0x1004c524b*/
        goto LABEL_37; /*0x1004c524b*/
    }
    else
    {
      v58 = v2; /*0x1004c511d*/
      v49 = v9; /*0x1004c5124*/
      if ( v51[0] == 0x8000000000000000LL ) /*0x1004c512b*/
        goto LABEL_37; /*0x1004c512b*/
    }
LABEL_49:
    v62 = v51; /*0x1004c5251*/
    v63 = &v62; /*0x1004c5260*/
    v64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x1004c526b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_10122A424, &v63); /*0x1004c5281*/
    goto LABEL_50; /*0x1004c5281*/
  }
  __n = 0x8000000000000000LL; /*0x1004c4ffa*/
  v58 = v2; /*0x1004c5005*/
  v49 = v9; /*0x1004c500c*/
  if ( v51[0] != 0x8000000000000000LL ) /*0x1004c5013*/
    goto LABEL_49; /*0x1004c5013*/
LABEL_37:
  if ( !v42 ) /*0x1004c5138*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c519a*/
    v16 = 124; /*0x1004c519f*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(124, 1); /*0x1004c51af*/
    if ( v17 ) /*0x1004c51b7*/
    {
      v18 = &unk_1012C7259; /*0x1004c51bd*/
      v67 = 124; /*0x1004c51c9*/
      v19 = 124; /*0x1004c51cd*/
      goto LABEL_53; /*0x1004c51d2*/
    }
LABEL_76:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16); /*0x1004c575a*/
  }
  if ( !v40 ) /*0x1004c5141*/
  {
    if ( v38[0] != 0x8000000000000000LL && v38[2] ) /*0x1004c51ec*/
    {
      v62 = v38; /*0x1004c51f9*/
      v63 = &v62; /*0x1004c5201*/
      v64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x1004c520c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_10122A2E7, &v63); /*0x1004c5222*/
LABEL_50:
      v16 = v50[0]; /*0x1004c5286*/
      v69 = (__int64 (__fastcall *)())v50[1]; /*0x1004c5294*/
      v67 = v50[2]; /*0x1004c529f*/
      goto LABEL_54; /*0x1004c52a3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c52a5*/
    v16 = 71; /*0x1004c52aa*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1); /*0x1004c52ba*/
    if ( v17 ) /*0x1004c52c2*/
    {
      v18 = &unk_1012C72D5; /*0x1004c52c8*/
      v67 = 71; /*0x1004c52d4*/
      v19 = 71; /*0x1004c52d8*/
      goto LABEL_53; /*0x1004c52d8*/
    }
    goto LABEL_76; /*0x1004c52c2*/
  }
  if ( v55 != 0x8000000000000000LL ) /*0x1004c514e*/
  {
    v62 = &v55; /*0x1004c55b9*/
    v63 = &v62; /*0x1004c55c1*/
    v64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x1004c55cc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_10122A383, &v63); /*0x1004c55e2*/
    goto LABEL_50; /*0x1004c55e7*/
  }
  if ( (_BYTE)v9 ) /*0x1004c5157*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c515d*/
    v16 = 101; /*0x1004c5162*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(101, 1); /*0x1004c5172*/
    if ( v17 ) /*0x1004c517a*/
    {
      v18 = &unk_1012C731C; /*0x1004c5180*/
      v67 = 101; /*0x1004c518c*/
      v19 = 101; /*0x1004c5190*/
LABEL_53:
      v69 = v17; /*0x1004c52dd*/
      memcpy(v17, v18, v19); /*0x1004c52e4*/
      goto LABEL_54; /*0x1004c52e4*/
    }
    goto LABEL_76; /*0x1004c517a*/
  }
  if ( !(_BYTE)v3 ) /*0x1004c55ef*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c5689*/
    v16 = 153; /*0x1004c568e*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(153, 1); /*0x1004c569e*/
    if ( v17 ) /*0x1004c56a6*/
    {
      v18 = &unk_1012C7381; /*0x1004c56ac*/
      v67 = 153; /*0x1004c56b8*/
      v19 = 153; /*0x1004c56bc*/
      goto LABEL_53; /*0x1004c56c1*/
    }
    goto LABEL_76; /*0x1004c56a6*/
  }
  if ( !(_BYTE)v2 ) /*0x1004c55f8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c56c6*/
    v16 = 148; /*0x1004c56cb*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(148, 1); /*0x1004c56db*/
    if ( v17 ) /*0x1004c56e3*/
    {
      v18 = &unk_1012C741A; /*0x1004c56e5*/
      v67 = 148; /*0x1004c56f1*/
      v19 = 148; /*0x1004c56f5*/
      goto LABEL_53; /*0x1004c56fa*/
    }
    goto LABEL_76; /*0x1004c56e3*/
  }
  if ( !v52 ) /*0x1004c5606*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c56ff*/
    v16 = 143; /*0x1004c5704*/
    v17 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(143, 1); /*0x1004c5714*/
    if ( v17 ) /*0x1004c571c*/
    {
      v18 = &unk_1012C74AE; /*0x1004c571e*/
      v67 = 143; /*0x1004c572a*/
      v19 = 143; /*0x1004c572e*/
      goto LABEL_53; /*0x1004c5733*/
    }
    goto LABEL_76; /*0x1004c571c*/
  }
  v50[0] = &v52; /*0x1004c561a*/
  v50[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004c5628*/
  v50[2] = &v53; /*0x1004c5636*/
  v50[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004c563d*/
  v50[4] = &v39; /*0x1004c5644*/
  v50[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1004c5652*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63, &unk_10122A32F, v50); /*0x1004c566b*/
  v16 = (__int64)v63; /*0x1004c5670*/
  v69 = v64; /*0x1004c5678*/
  v67 = v65; /*0x1004c5680*/
LABEL_54:
  v20 = v42; /*0x1004c52e9*/
  v21 = v40; /*0x1004c52f1*/
  v22 = v39; /*0x1004c52f8*/
  v23 = 0x8000000000000000LL; /*0x1004c530a*/
  if ( v38[0] != 0x8000000000000000LL ) /*0x1004c5314*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v50, v38); /*0x1004c5324*/
    v23 = v50[0]; /*0x1004c5329*/
    v63 = (unsigned __int64 **)v50[1]; /*0x1004c5337*/
    v64 = (__int64 (__fastcall *)())v50[2]; /*0x1004c5342*/
  }
  v50[2] = v47; /*0x1004c534d*/
  v50[1] = v46[1]; /*0x1004c5362*/
  v50[0] = v46[0]; /*0x1004c5369*/
  v50[9] = __n; /*0x1004c5374*/
  v50[10] = v54; /*0x1004c5382*/
  v50[11] = __n; /*0x1004c5389*/
  v50[12] = v55; /*0x1004c539e*/
  v50[13] = v56; /*0x1004c53a5*/
  v50[14] = v57; /*0x1004c53b3*/
  v50[15] = v51[0]; /*0x1004c53c8*/
  v50[16] = v51[1]; /*0x1004c53cf*/
  v50[17] = v51[2]; /*0x1004c53dd*/
  memcpy(&v50[18], __dst, 0xA0u); /*0x1004c53f7*/
  v50[3] = v16; /*0x1004c53fc*/
  v50[4] = v69; /*0x1004c5407*/
  v50[5] = v67; /*0x1004c5412*/
  BYTE2(v50[39]) = v20; /*0x1004c5419*/
  BYTE3(v50[39]) = v21; /*0x1004c5420*/
  LOWORD(v50[39]) = v22; /*0x1004c5426*/
  v50[6] = v23; /*0x1004c542e*/
  v50[7] = v63; /*0x1004c543d*/
  v50[8] = v64; /*0x1004c5444*/
  v50[38] = v53; /*0x1004c5452*/
  BYTE4(v50[39]) = v49 ^ 1; /*0x1004c5462*/
  BYTE5(v50[39]) = v58; /*0x1004c546e*/
  BYTE6(v50[39]) = v61; /*0x1004c5477*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v50[18]); /*0x1004c547d*/
  v24 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004c548c*/
  if ( !v24 ) /*0x1004c5494*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004c5742*/
  v25 = v24; /*0x1004c549a*/
  *v24 = 27503; /*0x1004c549d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004c54a2*/
  v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c54b1*/
  v27 = v66; /*0x1004c54b9*/
  v28 = v48; /*0x1004c54bd*/
  if ( !v26 ) /*0x1004c54c4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004c5753*/
  v29 = v26; /*0x1004c54ca*/
  *(_DWORD *)((char *)v26 + 3) = 1936942435; /*0x1004c54cd*/
  *v26 = 1667462483; /*0x1004c54d4*/
  memcpy((void *)(v28 + 72), v50, 0x140u); /*0x1004c54eb*/
  *(_QWORD *)v28 = 2; /*0x1004c54f0*/
  *(_QWORD *)(v28 + 8) = v25; /*0x1004c54f8*/
  *(_QWORD *)(v28 + 16) = 2; /*0x1004c54fd*/
  *(_QWORD *)(v28 + 24) = 7; /*0x1004c5506*/
  *(_QWORD *)(v28 + 32) = v29; /*0x1004c550f*/
  *(_QWORD *)(v28 + 40) = 7; /*0x1004c5514*/
  *(_QWORD *)(v28 + 48) = 0; /*0x1004c551d*/
  *(_QWORD *)(v28 + 56) = 8; /*0x1004c5526*/
  *(_QWORD *)(v28 + 64) = 0; /*0x1004c552f*/
  *(_DWORD *)(v28 + 392) = 1; /*0x1004c5538*/
  *(_BYTE *)(v28 + 396) = 1; /*0x1004c5544*/
  if ( v43 ) /*0x1004c5557*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v43, 1); /*0x1004c5562*/
  if ( 2 * v27 ) /*0x1004c5567*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v27, 1); /*0x1004c5580*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::haaba8b954ba2bc2e(__src); /*0x1004c558c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v35); /*0x1004c5598*/
  return v28; /*0x1004c55a0*/
}