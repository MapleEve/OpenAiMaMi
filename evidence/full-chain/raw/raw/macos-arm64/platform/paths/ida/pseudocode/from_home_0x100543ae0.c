// __ZN13codexmate_lib8platform5paths10CodexPaths9from_home @ 0x100543ae0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  void *v4; // r14
  size_t v5; // rbx
  void *v6; // rsi
  __int64 v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // r15
  __int64 v10; // rdx
  size_t v11; // r14
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r15
  void *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rsi
  __int64 v54; // [rsp+0h] [rbp-3A0h] BYREF
  _BYTE *v55; // [rsp+8h] [rbp-398h]
  __int64 v56; // [rsp+10h] [rbp-390h]
  __int64 v57; // [rsp+98h] [rbp-308h] BYREF
  void *v58; // [rsp+A0h] [rbp-300h]
  size_t __n; // [rsp+A8h] [rbp-2F8h]
  _QWORD v60[3]; // [rsp+B0h] [rbp-2F0h] BYREF
  _QWORD v61[3]; // [rsp+C8h] [rbp-2D8h] BYREF
  _QWORD v62[3]; // [rsp+E0h] [rbp-2C0h] BYREF
  _QWORD v63[3]; // [rsp+F8h] [rbp-2A8h] BYREF
  _QWORD v64[3]; // [rsp+110h] [rbp-290h] BYREF
  _QWORD v65[3]; // [rsp+128h] [rbp-278h] BYREF
  _QWORD v66[3]; // [rsp+140h] [rbp-260h] BYREF
  _QWORD v67[3]; // [rsp+158h] [rbp-248h] BYREF
  _QWORD v68[3]; // [rsp+170h] [rbp-230h] BYREF
  _QWORD v69[3]; // [rsp+188h] [rbp-218h] BYREF
  _QWORD v70[3]; // [rsp+1A0h] [rbp-200h] BYREF
  _QWORD v71[3]; // [rsp+1B8h] [rbp-1E8h] BYREF
  _QWORD v72[3]; // [rsp+1D0h] [rbp-1D0h] BYREF
  _QWORD v73[3]; // [rsp+1E8h] [rbp-1B8h] BYREF
  _QWORD v74[3]; // [rsp+200h] [rbp-1A0h] BYREF
  _QWORD v75[3]; // [rsp+218h] [rbp-188h] BYREF
  _QWORD v76[3]; // [rsp+230h] [rbp-170h] BYREF
  _QWORD v77[3]; // [rsp+248h] [rbp-158h] BYREF
  _QWORD v78[3]; // [rsp+260h] [rbp-140h] BYREF
  _QWORD v79[3]; // [rsp+278h] [rbp-128h] BYREF
  _QWORD v80[3]; // [rsp+290h] [rbp-110h] BYREF
  _QWORD v81[3]; // [rsp+2A8h] [rbp-F8h] BYREF
  _QWORD v82[3]; // [rsp+2C0h] [rbp-E0h] BYREF
  _QWORD v83[3]; // [rsp+2D8h] [rbp-C8h] BYREF
  __int64 v84; // [rsp+2F0h] [rbp-B0h] BYREF
  void *v85; // [rsp+2F8h] [rbp-A8h]
  size_t v86; // [rsp+300h] [rbp-A0h]
  __int64 v87; // [rsp+308h] [rbp-98h] BYREF
  __int64 v88; // [rsp+310h] [rbp-90h]
  __int64 v89; // [rsp+318h] [rbp-88h]
  __int64 v90; // [rsp+320h] [rbp-80h] BYREF
  __int64 v91; // [rsp+328h] [rbp-78h]
  __int64 v92; // [rsp+330h] [rbp-70h]
  __int64 v93; // [rsp+338h] [rbp-68h] BYREF
  __int64 v94; // [rsp+340h] [rbp-60h]
  __int64 v95; // [rsp+348h] [rbp-58h]
  _QWORD *v96; // [rsp+350h] [rbp-50h]
  __int64 v97; // [rsp+358h] [rbp-48h]
  void *__src; // [rsp+360h] [rbp-40h]
  void *v99; // [rsp+368h] [rbp-38h]
  __int64 v100; // [rsp+370h] [rbp-30h]

  v2 = a2[1]; /*0x100543af7*/
  v96 = a2; /*0x100543afb*/
  v3 = a2[2]; /*0x100543aff*/
  v100 = v2; /*0x100543b1a*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100543b1e*/
    &v93,
    v2,
    v3,
    "accountstrailersno-cacheidentityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed",
    8);
  std::path::Path::_join::hb1a495d4f06b13b8(&v84, v2, v3, &unk_1015FD236, 9); /*0x100543b3d*/
  v4 = v85; /*0x100543b42*/
  v5 = v86; /*0x100543b49*/
  v99 = v85; /*0x100543b67*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v90, v85, v86, &unk_1015FF712, 19); /*0x100543b6b*/
  v6 = v4; /*0x100543b84*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v87, v4, v5, &unk_1015FD23F, 5); /*0x100543b8a*/
  dirs::home_dir::hc82e61f557956e66(&v54); /*0x100543b96*/
  v7 = v54; /*0x100543b9b*/
  if ( __OFSUB__(-v54, 1) ) /*0x100543ba5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v54, v6); /*0x100543baa*/
    v7 = 1; /*0x100543baf*/
    v8 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1, 1); /*0x100543bbf*/
    if ( !v8 ) /*0x100543bc7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x1005444f5*/
    v9 = v8; /*0x100543bcd*/
    *v8 = 46; /*0x100543bd0*/
    v10 = 1; /*0x100543bd3*/
  }
  else
  {
    v9 = v55; /*0x100543bda*/
    v10 = v56; /*0x100543be1*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(v83, v9, v10, &unk_1015FF6CB, 49); /*0x100543bff*/
  if ( v7 ) /*0x100543c07*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v7, 1); /*0x100543c14*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v57, v100, v3, &unk_1015FBFE0, 8); /*0x100543c34*/
  v11 = __n; /*0x100543c40*/
  __src = v58; /*0x100543c4e*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v54, v58, __n); /*0x100543c55*/
  v12 = v54; /*0x100543c5a*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100543c6b*/
    v54,
    v55);
  if ( !v12 ) /*0x100543c73*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(&v54, v99, v5); /*0x100543c83*/
    v13 = v54; /*0x100543c88*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100543c99*/
      v54,
      v55);
    if ( v13 ) /*0x100543ca1*/
    {
      v14 = std::sys::fs::rename::h7934e6142c921014(__src, v11, v99, v5); /*0x100543cb1*/
      if ( (v14 & 3) == 1 ) /*0x100543cbe*/
      {
        v97 = v14 - 1; /*0x1005444a5*/
        v51 = *(_QWORD *)(v14 - 1); /*0x1005444a9*/
        v52 = *(_QWORD *)(v14 + 7); /*0x1005444ad*/
        if ( *(_QWORD *)v52 ) /*0x1005444b1*/
          (*(void (__fastcall **)(__int64))v52)(v51); /*0x1005444bc*/
        v53 = *(_QWORD *)(v52 + 8); /*0x1005444be*/
        if ( v53 ) /*0x1005444c5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, *(_QWORD *)(v52 + 16)); /*0x1005444ce*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, 24, 8); /*0x1005444e1*/
      }
    }
  }
  std::path::Path::_join::hb1a495d4f06b13b8(v82, v100, v3, &unk_1015FF725, 9); /*0x100543cdf*/
  v15 = v100; /*0x100543cf8*/
  std::path::Path::_join::hb1a495d4f06b13b8(v81, v100, v3, &unk_1015FF6FC, 11); /*0x100543d02*/
  std::path::Path::_join::hb1a495d4f06b13b8(v80, v15, v3, &unk_1015FF72E, 19); /*0x100543d21*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(v79, v15, v3); /*0x100543d33*/
  std::path::Path::_join::hb1a495d4f06b13b8(v78, v15, v3, "sessionsccswitchorphaned", 8); /*0x100543d52*/
  std::path::Path::_join::hb1a495d4f06b13b8(v77, v15, v3, &unk_1015FF741, 17); /*0x100543d71*/
  std::path::Path::_join::hb1a495d4f06b13b8(v76, v15, v3, &unk_1015FF752, 6); /*0x100543d90*/
  v16 = v94; /*0x100543d95*/
  v17 = v95; /*0x100543d99*/
  std::path::Path::_join::hb1a495d4f06b13b8(v75, v94, v95, &unk_1015FF758, 13); /*0x100543db7*/
  std::path::Path::_join::hb1a495d4f06b13b8(v74, v16, v17, &unk_1015FF765, 9); /*0x100543dd6*/
  std::path::Path::_join::hb1a495d4f06b13b8(v73, v16, v17, &unk_1015FF76E, 7); /*0x100543df5*/
  std::path::Path::_join::hb1a495d4f06b13b8(v72, v16, v17, "registry-backupsquota-store.json", 16); /*0x100543e14*/
  std::path::Path::_join::hb1a495d4f06b13b8(v71, v16, v17, &unk_1015FF775, 15); /*0x100543e33*/
  v18 = v99; /*0x100543e4c*/
  std::path::Path::_join::hb1a495d4f06b13b8(v70, v99, v5, &unk_1015FF784, 13); /*0x100543e56*/
  std::path::Path::_join::hb1a495d4f06b13b8(v69, v18, v5, &unk_1015FF791, 19); /*0x100543e75*/
  std::path::Path::_join::hb1a495d4f06b13b8(v68, v18, v5, "quota-store.json", 16); /*0x100543e94*/
  std::path::Path::_join::hb1a495d4f06b13b8(v67, v18, v5, &unk_1015FF7A4, 13); /*0x100543eb3*/
  std::path::Path::_join::hb1a495d4f06b13b8(v66, v18, v5, &unk_1015FF7B1, 20); /*0x100543ed2*/
  std::path::Path::_join::hb1a495d4f06b13b8(v65, v18, v5, &unk_1015FF7C5, 24); /*0x100543ef1*/
  std::path::Path::_join::hb1a495d4f06b13b8(v64, v18, v5, &unk_1015FF7DD, 23); /*0x100543f10*/
  std::path::Path::_join::hb1a495d4f06b13b8(v63, v18, v5, &unk_1015FF7F4, 20); /*0x100543f2f*/
  std::path::Path::_join::hb1a495d4f06b13b8(v62, v18, v5, &unk_1015FF808, 18); /*0x100543f4e*/
  std::path::Path::_join::hb1a495d4f06b13b8(v61, v88, v89, &unk_1015FF81A, 10); /*0x100543f75*/
  std::path::Path::_join::hb1a495d4f06b13b8(v60, v100, v3, &unk_1015FF824, 9); /*0x100543f95*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, v91, v92, "history", 7); /*0x100543fb6*/
  a1[26] = v95; /*0x100543fc9*/
  v19 = v93; /*0x100543fd0*/
  a1[25] = v94; /*0x100543fd8*/
  a1[24] = v19; /*0x100543fdf*/
  a1[44] = v86; /*0x100543fed*/
  v20 = v84; /*0x100543ff4*/
  a1[43] = v85; /*0x100544002*/
  a1[42] = v20; /*0x100544009*/
  a1[86] = v92; /*0x100544014*/
  v21 = v90; /*0x10054401b*/
  a1[85] = v91; /*0x100544023*/
  a1[84] = v21; /*0x10054402a*/
  v22 = v88; /*0x100544038*/
  a1[72] = v87; /*0x10054403f*/
  a1[73] = v22; /*0x100544046*/
  a1[74] = v89; /*0x100544054*/
  v23 = v83[0]; /*0x10054405b*/
  a1[79] = v83[1]; /*0x100544069*/
  a1[80] = v83[2]; /*0x100544077*/
  a1[78] = v23; /*0x10054407e*/
  v24 = v96; /*0x100544085*/
  v25 = v96[1]; /*0x10054408c*/
  *a1 = *v96; /*0x100544090*/
  a1[1] = v25; /*0x100544094*/
  a1[2] = v24[2]; /*0x10054409c*/
  v26 = v82[1]; /*0x1005440a7*/
  a1[3] = v82[0]; /*0x1005440ae*/
  a1[4] = v26; /*0x1005440b2*/
  a1[5] = v82[2]; /*0x1005440bd*/
  v27 = v81[1]; /*0x1005440c8*/
  a1[6] = v81[0]; /*0x1005440cf*/
  a1[8] = v81[2]; /*0x1005440da*/
  a1[7] = v27; /*0x1005440de*/
  a1[11] = v80[2]; /*0x1005440e9*/
  v28 = v80[0]; /*0x1005440ed*/
  a1[10] = v80[1]; /*0x1005440fb*/
  a1[9] = v28; /*0x1005440ff*/
  v29 = v79[1]; /*0x10054410a*/
  a1[12] = v79[0]; /*0x100544111*/
  a1[13] = v29; /*0x100544115*/
  a1[14] = v79[2]; /*0x100544120*/
  a1[90] = 0x8000000000000000LL; /*0x100544124*/
  a1[17] = v78[2]; /*0x100544132*/
  v30 = v78[0]; /*0x100544139*/
  a1[16] = v78[1]; /*0x100544147*/
  a1[15] = v30; /*0x10054414e*/
  a1[20] = v77[2]; /*0x100544159*/
  v31 = v77[0]; /*0x100544160*/
  a1[19] = v77[1]; /*0x10054416e*/
  a1[18] = v31; /*0x100544175*/
  a1[23] = v76[2]; /*0x100544183*/
  v32 = v76[0]; /*0x10054418a*/
  a1[22] = v76[1]; /*0x100544198*/
  a1[21] = v32; /*0x10054419f*/
  a1[29] = v75[2]; /*0x1005441ad*/
  v33 = v75[0]; /*0x1005441b4*/
  a1[28] = v75[1]; /*0x1005441c2*/
  a1[27] = v33; /*0x1005441c9*/
  a1[32] = v74[2]; /*0x1005441d7*/
  v34 = v74[0]; /*0x1005441de*/
  a1[31] = v74[1]; /*0x1005441ec*/
  a1[30] = v34; /*0x1005441f3*/
  a1[35] = v73[2]; /*0x100544201*/
  v35 = v73[0]; /*0x100544208*/
  a1[34] = v73[1]; /*0x100544216*/
  a1[33] = v35; /*0x10054421d*/
  a1[38] = v72[2]; /*0x10054422b*/
  v36 = v72[0]; /*0x100544232*/
  a1[37] = v72[1]; /*0x100544240*/
  a1[36] = v36; /*0x100544247*/
  a1[41] = v71[2]; /*0x100544255*/
  v37 = v71[0]; /*0x10054425c*/
  a1[40] = v71[1]; /*0x10054426a*/
  a1[39] = v37; /*0x100544271*/
  a1[47] = v70[2]; /*0x10054427f*/
  v38 = v70[0]; /*0x100544286*/
  a1[46] = v70[1]; /*0x100544294*/
  a1[45] = v38; /*0x10054429b*/
  a1[50] = v69[2]; /*0x1005442a9*/
  v39 = v69[0]; /*0x1005442b0*/
  a1[49] = v69[1]; /*0x1005442be*/
  a1[48] = v39; /*0x1005442c5*/
  a1[53] = v68[2]; /*0x1005442d3*/
  v40 = v68[0]; /*0x1005442da*/
  a1[52] = v68[1]; /*0x1005442e8*/
  a1[51] = v40; /*0x1005442ef*/
  a1[56] = v67[2]; /*0x1005442fd*/
  v41 = v67[0]; /*0x100544304*/
  a1[55] = v67[1]; /*0x100544312*/
  a1[54] = v41; /*0x100544319*/
  a1[59] = v66[2]; /*0x100544327*/
  v42 = v66[0]; /*0x10054432e*/
  a1[58] = v66[1]; /*0x10054433c*/
  a1[57] = v42; /*0x100544343*/
  a1[62] = v65[2]; /*0x100544351*/
  v43 = v65[0]; /*0x100544358*/
  a1[61] = v65[1]; /*0x100544366*/
  a1[60] = v43; /*0x10054436d*/
  a1[65] = v64[2]; /*0x10054437b*/
  v44 = v64[0]; /*0x100544382*/
  a1[64] = v64[1]; /*0x100544390*/
  a1[63] = v44; /*0x100544397*/
  a1[68] = v63[2]; /*0x1005443a5*/
  v45 = v63[0]; /*0x1005443ac*/
  a1[67] = v63[1]; /*0x1005443ba*/
  a1[66] = v45; /*0x1005443c1*/
  a1[71] = v62[2]; /*0x1005443cf*/
  v46 = v62[0]; /*0x1005443d6*/
  a1[70] = v62[1]; /*0x1005443e4*/
  a1[69] = v46; /*0x1005443eb*/
  a1[77] = v61[2]; /*0x1005443f9*/
  v47 = v61[0]; /*0x100544400*/
  a1[76] = v61[1]; /*0x10054440e*/
  a1[75] = v47; /*0x100544415*/
  a1[83] = v60[2]; /*0x100544423*/
  v48 = v60[0]; /*0x10054442a*/
  a1[82] = v60[1]; /*0x100544438*/
  a1[81] = v48; /*0x10054443f*/
  a1[89] = v56; /*0x10054444d*/
  v49 = v54; /*0x100544454*/
  a1[88] = v55; /*0x100544462*/
  a1[87] = v49; /*0x100544469*/
  if ( v57 ) /*0x10054447a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v57, 1); /*0x100544485*/
  return a1; /*0x10054448d*/
}