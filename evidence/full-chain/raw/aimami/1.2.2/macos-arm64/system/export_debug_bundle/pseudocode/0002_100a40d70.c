// mac 1.2.2 NEW export_debug_bundle 0x100a40d70 d=1
_QWORD *__fastcall codexmate_lib::platform::paths::CodexPaths::from_home::hfddcb89f1b1c7855(_QWORD *a1, _QWORD *a2)
{
  const void *v2; // rbx
  size_t v3; // r12
  const void *v4; // r14
  size_t v5; // rbx
  __int64 v6; // r14
  _BYTE *v7; // rax
  const void *v8; // r15
  size_t v9; // rdx
  size_t v10; // r14
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rax
  const void *v14; // r14
  const void *v15; // r14
  size_t v16; // r15
  void *v17; // r14
  size_t v18; // rcx
  size_t v19; // rcx
  size_t v20; // rcx
  const void *v21; // rdx
  size_t v22; // rcx
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  size_t v25; // rdx
  size_t v26; // rdx
  size_t v27; // rcx
  __int64 v28; // rdx
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v50; // r15
  __int64 v51; // [rsp+0h] [rbp-3A0h] BYREF
  const void *v52; // [rsp+8h] [rbp-398h]
  size_t v53; // [rsp+10h] [rbp-390h]
  size_t v54; // [rsp+98h] [rbp-308h] BYREF
  void *v55; // [rsp+A0h] [rbp-300h]
  size_t __n; // [rsp+A8h] [rbp-2F8h]
  size_t v57[3]; // [rsp+B0h] [rbp-2F0h] BYREF
  size_t v58[3]; // [rsp+C8h] [rbp-2D8h] BYREF
  size_t v59[3]; // [rsp+E0h] [rbp-2C0h] BYREF
  size_t v60[3]; // [rsp+F8h] [rbp-2A8h] BYREF
  size_t v61[3]; // [rsp+110h] [rbp-290h] BYREF
  size_t v62[3]; // [rsp+128h] [rbp-278h] BYREF
  size_t v63[3]; // [rsp+140h] [rbp-260h] BYREF
  size_t v64[3]; // [rsp+158h] [rbp-248h] BYREF
  size_t v65[3]; // [rsp+170h] [rbp-230h] BYREF
  size_t v66[3]; // [rsp+188h] [rbp-218h] BYREF
  size_t v67[3]; // [rsp+1A0h] [rbp-200h] BYREF
  size_t v68[3]; // [rsp+1B8h] [rbp-1E8h] BYREF
  size_t v69[3]; // [rsp+1D0h] [rbp-1D0h] BYREF
  size_t v70[3]; // [rsp+1E8h] [rbp-1B8h] BYREF
  size_t v71[3]; // [rsp+200h] [rbp-1A0h] BYREF
  size_t v72[3]; // [rsp+218h] [rbp-188h] BYREF
  size_t v73[3]; // [rsp+230h] [rbp-170h] BYREF
  size_t v74[3]; // [rsp+248h] [rbp-158h] BYREF
  size_t v75[3]; // [rsp+260h] [rbp-140h] BYREF
  _QWORD v76[3]; // [rsp+278h] [rbp-128h] BYREF
  size_t v77[3]; // [rsp+290h] [rbp-110h] BYREF
  size_t v78[3]; // [rsp+2A8h] [rbp-F8h] BYREF
  size_t v79[3]; // [rsp+2C0h] [rbp-E0h] BYREF
  size_t v80[3]; // [rsp+2D8h] [rbp-C8h] BYREF
  size_t v81; // [rsp+2F0h] [rbp-B0h] BYREF
  void *v82; // [rsp+2F8h] [rbp-A8h]
  size_t v83; // [rsp+300h] [rbp-A0h]
  size_t v84; // [rsp+308h] [rbp-98h] BYREF
  const void *v85; // [rsp+310h] [rbp-90h]
  size_t v86; // [rsp+318h] [rbp-88h]
  size_t v87; // [rsp+320h] [rbp-80h] BYREF
  const void *v88; // [rsp+328h] [rbp-78h]
  size_t v89; // [rsp+330h] [rbp-70h]
  size_t v90; // [rsp+338h] [rbp-68h] BYREF
  const void *v91; // [rsp+340h] [rbp-60h]
  size_t v92; // [rsp+348h] [rbp-58h]
  _QWORD *v93; // [rsp+350h] [rbp-50h]
  __int64 v94; // [rsp+358h] [rbp-48h]
  void *__src; // [rsp+360h] [rbp-40h]
  void *v96; // [rsp+368h] [rbp-38h]
  const void *v97; // [rsp+370h] [rbp-30h]

  v2 = (const void *)a2[1]; /*0x100a40d87*/
  v93 = a2; /*0x100a40d8b*/
  v3 = a2[2]; /*0x100a40d8f*/
  v97 = v2; /*0x100a40daa*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v90, v2, v3, byte_101591EC8, 8u); /*0x100a40dae*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v81, v2, v3, byte_1015A106B, 9u); /*0x100a40dcd*/
  v4 = v82; /*0x100a40dd2*/
  v5 = v83; /*0x100a40dd9*/
  v96 = v82; /*0x100a40df7*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v87, v82, v83, byte_1015B438C, 0x13u); /*0x100a40dfb*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v84, v4, v5, byte_1015A1074, 5u); /*0x100a40e1a*/
  dirs::home_dir::hc82e61f557956e66(&v51); /*0x100a40e26*/
  v6 = v51; /*0x100a40e2b*/
  if ( __OFSUB__(-v51, 1) ) /*0x100a40e35*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a40e3a*/
    v6 = 1; /*0x100a40e3f*/
    v7 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1u, 1u); /*0x100a40e4f*/
    if ( !v7 ) /*0x100a40e57*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a41785*/
    v8 = v7; /*0x100a40e5d*/
    *v7 = 46; /*0x100a40e60*/
    v9 = 1; /*0x100a40e63*/
  }
  else
  {
    v8 = v52; /*0x100a40e6a*/
    v9 = v53; /*0x100a40e71*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(v80, v8, v9, byte_1015B4345, 0x31u); /*0x100a40e8f*/
  if ( v6 ) /*0x100a40e97*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a40ea4*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, v97, v3, byte_1015A0300, 8u); /*0x100a40ec4*/
  v10 = __n; /*0x100a40ed0*/
  __src = v55; /*0x100a40ede*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v51, v55, __n); /*0x100a40ee5*/
  v11 = v51; /*0x100a40eea*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a40efb*/
    v51,
    (__int64)v52);
  if ( !v11 ) /*0x100a40f03*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(&v51, v96, v5); /*0x100a40f13*/
    v12 = v51; /*0x100a40f18*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a40f29*/
      v51,
      (__int64)v52);
    if ( v12 ) /*0x100a40f31*/
    {
      v13 = std::sys::fs::rename::h7934e6142c921014(__src, v10, v96, v5); /*0x100a40f41*/
      if ( (v13 & 3) == 1 ) /*0x100a40f4e*/
      {
        v94 = v13 - 1; /*0x100a41735*/
        v50 = *(_QWORD *)(v13 + 7); /*0x100a4173d*/
        if ( *(_QWORD *)v50 ) /*0x100a41741*/
          (*(void (__fastcall **)(_QWORD))v50)(*(_QWORD *)(v13 - 1)); /*0x100a4174c*/
        if ( *(_QWORD *)(v50 + 8) ) /*0x100a4174e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a4175e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a41771*/
      }
    }
  }
  std::path::Path::_join::hb1a495d4f06b13b8(v79, v97, v3, byte_1015B439F, 9u); /*0x100a40f6f*/
  v14 = v97; /*0x100a40f88*/
  std::path::Path::_join::hb1a495d4f06b13b8(v78, v97, v3, byte_1015B4376, 0xBu); /*0x100a40f92*/
  std::path::Path::_join::hb1a495d4f06b13b8(v77, v14, v3, byte_1015B43A8, 0x13u); /*0x100a40fb1*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hf2d8723635f4afeb(v76, v14, v3); /*0x100a40fc3*/
  std::path::Path::_join::hb1a495d4f06b13b8(v75, v14, v3, byte_1015A02E0, 8u); /*0x100a40fe2*/
  std::path::Path::_join::hb1a495d4f06b13b8(v74, v14, v3, byte_1015B43BB, 0x11u); /*0x100a41001*/
  std::path::Path::_join::hb1a495d4f06b13b8(v73, v14, v3, byte_1015B43CC, 6u); /*0x100a41020*/
  v15 = v91; /*0x100a41025*/
  v16 = v92; /*0x100a41029*/
  std::path::Path::_join::hb1a495d4f06b13b8(v72, v91, v92, byte_1015B43D2, 0xDu); /*0x100a41047*/
  std::path::Path::_join::hb1a495d4f06b13b8(v71, v15, v16, byte_1015B43DF, 9u); /*0x100a41066*/
  std::path::Path::_join::hb1a495d4f06b13b8(v70, v15, v16, byte_1015B43E8, 7u); /*0x100a41085*/
  std::path::Path::_join::hb1a495d4f06b13b8(v69, v15, v16, "registry-backupsquota-store.jsonDeepLinkProtocol", 0x10u); /*0x100a410a4*/
  std::path::Path::_join::hb1a495d4f06b13b8(v68, v15, v16, byte_1015B43EF, 0xFu); /*0x100a410c3*/
  v17 = v96; /*0x100a410dc*/
  std::path::Path::_join::hb1a495d4f06b13b8(v67, v96, v5, byte_1015B43FE, 0xDu); /*0x100a410e6*/
  std::path::Path::_join::hb1a495d4f06b13b8(v66, v17, v5, byte_1015B440B, 0x13u); /*0x100a41105*/
  std::path::Path::_join::hb1a495d4f06b13b8(v65, v17, v5, "quota-store.jsonDeepLinkProtocol", 0x10u); /*0x100a41124*/
  std::path::Path::_join::hb1a495d4f06b13b8(v64, v17, v5, byte_1015B441E, 0xDu); /*0x100a41143*/
  std::path::Path::_join::hb1a495d4f06b13b8(v63, v17, v5, byte_1015B442B, 0x14u); /*0x100a41162*/
  std::path::Path::_join::hb1a495d4f06b13b8(v62, v17, v5, byte_1015B443F, 0x18u); /*0x100a41181*/
  std::path::Path::_join::hb1a495d4f06b13b8(v61, v17, v5, byte_1015B4457, 0x17u); /*0x100a411a0*/
  std::path::Path::_join::hb1a495d4f06b13b8(v60, v17, v5, byte_1015B446E, 0x14u); /*0x100a411bf*/
  std::path::Path::_join::hb1a495d4f06b13b8(v59, v17, v5, byte_1015B4482, 0x12u); /*0x100a411de*/
  std::path::Path::_join::hb1a495d4f06b13b8(v58, v85, v86, byte_1015B4494, 0xAu); /*0x100a41205*/
  std::path::Path::_join::hb1a495d4f06b13b8(v57, v97, v3, byte_1015B449E, 9u); /*0x100a41225*/
  std::path::Path::_join::hb1a495d4f06b13b8((size_t *)&v51, v88, v89, byte_1015A0CFF, 7u); /*0x100a41246*/
  a1[26] = v92; /*0x100a41259*/
  v18 = v90; /*0x100a41260*/
  a1[25] = v91; /*0x100a41268*/
  a1[24] = v18; /*0x100a4126f*/
  a1[44] = v83; /*0x100a4127d*/
  v19 = v81; /*0x100a41284*/
  a1[43] = v82; /*0x100a41292*/
  a1[42] = v19; /*0x100a41299*/
  a1[86] = v89; /*0x100a412a4*/
  v20 = v87; /*0x100a412ab*/
  a1[85] = v88; /*0x100a412b3*/
  a1[84] = v20; /*0x100a412ba*/
  v21 = v85; /*0x100a412c8*/
  a1[72] = v84; /*0x100a412cf*/
  a1[73] = v21; /*0x100a412d6*/
  a1[74] = v86; /*0x100a412e4*/
  v22 = v80[0]; /*0x100a412eb*/
  a1[79] = v80[1]; /*0x100a412f9*/
  a1[80] = v80[2]; /*0x100a41307*/
  a1[78] = v22; /*0x100a4130e*/
  v23 = v93; /*0x100a41315*/
  v24 = v93[1]; /*0x100a4131c*/
  *a1 = *v93; /*0x100a41320*/
  a1[1] = v24; /*0x100a41324*/
  a1[2] = v23[2]; /*0x100a4132c*/
  v25 = v79[1]; /*0x100a41337*/
  a1[3] = v79[0]; /*0x100a4133e*/
  a1[4] = v25; /*0x100a41342*/
  a1[5] = v79[2]; /*0x100a4134d*/
  v26 = v78[1]; /*0x100a41358*/
  a1[6] = v78[0]; /*0x100a4135f*/
  a1[8] = v78[2]; /*0x100a4136a*/
  a1[7] = v26; /*0x100a4136e*/
  a1[11] = v77[2]; /*0x100a41379*/
  v27 = v77[0]; /*0x100a4137d*/
  a1[10] = v77[1]; /*0x100a4138b*/
  a1[9] = v27; /*0x100a4138f*/
  v28 = v76[1]; /*0x100a4139a*/
  a1[12] = v76[0]; /*0x100a413a1*/
  a1[13] = v28; /*0x100a413a5*/
  a1[14] = v76[2]; /*0x100a413b0*/
  a1[90] = 0x8000000000000000LL; /*0x100a413b4*/
  a1[17] = v75[2]; /*0x100a413c2*/
  v29 = v75[0]; /*0x100a413c9*/
  a1[16] = v75[1]; /*0x100a413d7*/
  a1[15] = v29; /*0x100a413de*/
  a1[20] = v74[2]; /*0x100a413e9*/
  v30 = v74[0]; /*0x100a413f0*/
  a1[19] = v74[1]; /*0x100a413fe*/
  a1[18] = v30; /*0x100a41405*/
  a1[23] = v73[2]; /*0x100a41413*/
  v31 = v73[0]; /*0x100a4141a*/
  a1[22] = v73[1]; /*0x100a41428*/
  a1[21] = v31; /*0x100a4142f*/
  a1[29] = v72[2]; /*0x100a4143d*/
  v32 = v72[0]; /*0x100a41444*/
  a1[28] = v72[1]; /*0x100a41452*/
  a1[27] = v32; /*0x100a41459*/
  a1[32] = v71[2]; /*0x100a41467*/
  v33 = v71[0]; /*0x100a4146e*/
  a1[31] = v71[1]; /*0x100a4147c*/
  a1[30] = v33; /*0x100a41483*/
  a1[35] = v70[2]; /*0x100a41491*/
  v34 = v70[0]; /*0x100a41498*/
  a1[34] = v70[1]; /*0x100a414a6*/
  a1[33] = v34; /*0x100a414ad*/
  a1[38] = v69[2]; /*0x100a414bb*/
  v35 = v69[0]; /*0x100a414c2*/
  a1[37] = v69[1]; /*0x100a414d0*/
  a1[36] = v35; /*0x100a414d7*/
  a1[41] = v68[2]; /*0x100a414e5*/
  v36 = v68[0]; /*0x100a414ec*/
  a1[40] = v68[1]; /*0x100a414fa*/
  a1[39] = v36; /*0x100a41501*/
  a1[47] = v67[2]; /*0x100a4150f*/
  v37 = v67[0]; /*0x100a41516*/
  a1[46] = v67[1]; /*0x100a41524*/
  a1[45] = v37; /*0x100a4152b*/
  a1[50] = v66[2]; /*0x100a41539*/
  v38 = v66[0]; /*0x100a41540*/
  a1[49] = v66[1]; /*0x100a4154e*/
  a1[48] = v38; /*0x100a41555*/
  a1[53] = v65[2]; /*0x100a41563*/
  v39 = v65[0]; /*0x100a4156a*/
  a1[52] = v65[1]; /*0x100a41578*/
  a1[51] = v39; /*0x100a4157f*/
  a1[56] = v64[2]; /*0x100a4158d*/
  v40 = v64[0]; /*0x100a41594*/
  a1[55] = v64[1]; /*0x100a415a2*/
  a1[54] = v40; /*0x100a415a9*/
  a1[59] = v63[2]; /*0x100a415b7*/
  v41 = v63[0]; /*0x100a415be*/
  a1[58] = v63[1]; /*0x100a415cc*/
  a1[57] = v41; /*0x100a415d3*/
  a1[62] = v62[2]; /*0x100a415e1*/
  v42 = v62[0]; /*0x100a415e8*/
  a1[61] = v62[1]; /*0x100a415f6*/
  a1[60] = v42; /*0x100a415fd*/
  a1[65] = v61[2]; /*0x100a4160b*/
  v43 = v61[0]; /*0x100a41612*/
  a1[64] = v61[1]; /*0x100a41620*/
  a1[63] = v43; /*0x100a41627*/
  a1[68] = v60[2]; /*0x100a41635*/
  v44 = v60[0]; /*0x100a4163c*/
  a1[67] = v60[1]; /*0x100a4164a*/
  a1[66] = v44; /*0x100a41651*/
  a1[71] = v59[2]; /*0x100a4165f*/
  v45 = v59[0]; /*0x100a41666*/
  a1[70] = v59[1]; /*0x100a41674*/
  a1[69] = v45; /*0x100a4167b*/
  a1[77] = v58[2]; /*0x100a41689*/
  v46 = v58[0]; /*0x100a41690*/
  a1[76] = v58[1]; /*0x100a4169e*/
  a1[75] = v46; /*0x100a416a5*/
  a1[83] = v57[2]; /*0x100a416b3*/
  v47 = v57[0]; /*0x100a416ba*/
  a1[82] = v57[1]; /*0x100a416c8*/
  a1[81] = v47; /*0x100a416cf*/
  a1[89] = v53; /*0x100a416dd*/
  v48 = v51; /*0x100a416e4*/
  a1[88] = v52; /*0x100a416f2*/
  a1[87] = v48; /*0x100a416f9*/
  if ( v54 ) /*0x100a4170a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a41715*/
  return a1; /*0x100a4171d*/
}