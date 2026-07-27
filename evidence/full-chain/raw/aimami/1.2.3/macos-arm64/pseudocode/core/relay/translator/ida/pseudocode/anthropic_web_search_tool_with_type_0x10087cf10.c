// __ZN13codexmate_lib4core5relay10translator35anthropic_web_search_tool_with_type @ 0x10087cf10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_web_search_tool_with_type::hfff20b2e3593893f(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  size_t v4; // r14
  const char *v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r13
  _DWORD *v9; // rax
  void *v10; // rax
  __int64 v11; // r13
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // rsi
  _DWORD *v18; // rax
  void *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 *v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 result; // rax
  _QWORD v32[2]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v33; // [rsp+18h] [rbp-118h]
  __int64 v34; // [rsp+20h] [rbp-110h] BYREF
  __int64 v35; // [rsp+28h] [rbp-108h]
  __int64 v36; // [rsp+30h] [rbp-100h]
  __int64 v37; // [rsp+38h] [rbp-F8h]
  __int64 v38; // [rsp+40h] [rbp-F0h]
  __int64 v39; // [rsp+48h] [rbp-E8h]
  __int64 v40; // [rsp+50h] [rbp-E0h]
  __int64 v41; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-D0h]
  __int64 v43; // [rsp+68h] [rbp-C8h]
  __int64 v44; // [rsp+70h] [rbp-C0h]
  __int64 v45; // [rsp+78h] [rbp-B8h] BYREF
  _DWORD *v46; // [rsp+80h] [rbp-B0h]
  __int64 v47; // [rsp+88h] [rbp-A8h]
  __int64 v48; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+98h] [rbp-98h]
  __int64 v50; // [rsp+A0h] [rbp-90h]
  __int64 v51; // [rsp+A8h] [rbp-88h]
  __int64 v52; // [rsp+B0h] [rbp-80h]
  __int64 v53; // [rsp+B8h] [rbp-78h]
  __int64 v54; // [rsp+C0h] [rbp-70h]
  __int64 v55; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-60h]
  __int64 v57; // [rsp+D8h] [rbp-58h]
  __int64 v58; // [rsp+E0h] [rbp-50h]
  __int64 v59; // [rsp+E8h] [rbp-48h]
  __int64 v60; // [rsp+F0h] [rbp-40h]
  __int64 v61; // [rsp+F8h] [rbp-38h]
  __int64 v62; // [rsp+100h] [rbp-30h]

  v3 = a1; /*0x10087cf24*/
  if ( a3 >= 0xD ) /*0x10087cf2b*/
  {
    v6 = 0x7765625F73656172LL; /*0x10087cf3c*/
    v7 = _byteswap_uint64(*a2); /*0x10087cf49*/
    if ( v7 != 0x7765625F73656172LL /*0x10087cf67*/
      || (v6 = 0x65617263685F3230LL,
          v7 = _byteswap_uint64(*(unsigned __int64 *)((char *)a2 + 5)),
          a1 = 0,
          v7 != 0x65617263685F3230LL) )
    {
      a1 = 2 * (unsigned int)(v6 >= v7) - 1; /*0x10087cf72*/
    }
    v5 = "web_search_20250305"; /*0x10087cf78*/
    if ( !(_DWORD)a1 ) /*0x10087cf7f*/
      v5 = (const char *)a2; /*0x10087cf7f*/
    v4 = 19; /*0x10087cf83*/
    if ( !(_DWORD)a1 ) /*0x10087cf89*/
      v4 = a3; /*0x10087cf89*/
  }
  else
  {
    v4 = 19; /*0x10087cf2d*/
    v5 = "web_search_20250305"; /*0x10087cf33*/
  }
  v32[0] = 0; /*0x10087cf8d*/
  v33 = 0; /*0x10087cf98*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10087cfa3*/
  v8 = 4; /*0x10087cfa8*/
  v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10087cfb8*/
  if ( !v9 ) /*0x10087cfc0*/
    goto LABEL_28; /*0x10087cfc0*/
  *v9 = 1701869940; /*0x10087cfc9*/
  v45 = 4; /*0x10087cfcf*/
  v46 = v9; /*0x10087cfda*/
  v47 = 4; /*0x10087cfe1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10087cfec*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10087cff9*/
  if ( !v10 ) /*0x10087d001*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x10087d500*/
  v11 = (__int64)v10; /*0x10087d007*/
  memcpy(v10, v5, v4); /*0x10087d013*/
  LOBYTE(v59) = 3; /*0x10087d018*/
  v60 = v4; /*0x10087d01c*/
  v61 = v11; /*0x10087d020*/
  v62 = v4; /*0x10087d024*/
  v12 = &v48; /*0x10087d028*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v48, v32, &v45); /*0x10087d03d*/
  if ( __OFSUB__(0, v48) ) /*0x10087d044*/
  {
    v13 = v49; /*0x10087d04d*/
    v14 = 32 * v51; /*0x10087d05b*/
    v58 = *(_QWORD *)(v49 + 32 * v51 + 24); /*0x10087d064*/
    v57 = *(_QWORD *)(v49 + 32 * v51 + 16); /*0x10087d06d*/
    v15 = *(_QWORD *)(v49 + 32 * v51); /*0x10087d071*/
    v56 = *(_QWORD *)(v49 + 32 * v51 + 8); /*0x10087d07a*/
    v55 = v15; /*0x10087d07e*/
    *(_QWORD *)(v49 + v14 + 24) = v62; /*0x10087d086*/
    *(_QWORD *)(v13 + v14 + 16) = v61; /*0x10087d08f*/
    v16 = v59; /*0x10087d094*/
    v17 = (__int64 *)v60; /*0x10087d098*/
    *(_QWORD *)(v13 + v14 + 8) = v60; /*0x10087d09c*/
    *(_QWORD *)(v13 + v14) = v16; /*0x10087d0a1*/
    if ( (_BYTE)v55 != 6 ) /*0x10087d0a9*/
    {
      v12 = &v55; /*0x10087d0af*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v55); /*0x10087d0b3*/
    }
  }
  else
  {
    v40 = v54; /*0x10087d0c1*/
    v39 = v53; /*0x10087d0cc*/
    v38 = v52; /*0x10087d0d7*/
    v37 = v51; /*0x10087d0e5*/
    v36 = v50; /*0x10087d0f3*/
    v35 = v49; /*0x10087d108*/
    v34 = v48; /*0x10087d10f*/
    v44 = v62; /*0x10087d11a*/
    v43 = v61; /*0x10087d125*/
    v42 = v60; /*0x10087d134*/
    v41 = v59; /*0x10087d13b*/
    v12 = &v55; /*0x10087d142*/
    v17 = &v34; /*0x10087d146*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10087d154*/
      &v55,
      &v34,
      &v41);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v17); /*0x10087d159*/
  v8 = 4; /*0x10087d15e*/
  v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10087d16e*/
  if ( !v18 ) /*0x10087d176*/
    goto LABEL_28; /*0x10087d176*/
  *v18 = 1701667182; /*0x10087d17f*/
  v45 = 4; /*0x10087d185*/
  v46 = v18; /*0x10087d190*/
  v47 = 4; /*0x10087d197*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10087d1a2*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10087d1b1*/
  if ( !v19 ) /*0x10087d1b9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x10087d511*/
  qmemcpy(v19, "web_search", 10); /*0x10087d1c9*/
  LOBYTE(v59) = 3; /*0x10087d1d2*/
  v60 = 10; /*0x10087d1d6*/
  v61 = (__int64)v19; /*0x10087d1de*/
  v62 = 10; /*0x10087d1e2*/
  v20 = &v48; /*0x10087d1ea*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v48, v32, &v45); /*0x10087d1ff*/
  if ( v48 == 0x8000000000000000LL ) /*0x10087d215*/
  {
    v21 = v49; /*0x10087d217*/
    v22 = 32 * v51; /*0x10087d225*/
    v58 = *(_QWORD *)(v49 + 32 * v51 + 24); /*0x10087d22e*/
    v57 = *(_QWORD *)(v49 + 32 * v51 + 16); /*0x10087d237*/
    v23 = *(_QWORD *)(v49 + 32 * v51); /*0x10087d23b*/
    v56 = *(_QWORD *)(v49 + 32 * v51 + 8); /*0x10087d244*/
    v55 = v23; /*0x10087d248*/
    *(_QWORD *)(v49 + v22 + 24) = v62; /*0x10087d250*/
    *(_QWORD *)(v21 + v22 + 16) = v61; /*0x10087d259*/
    v24 = v59; /*0x10087d25e*/
    v25 = (__int64 *)v60; /*0x10087d262*/
    *(_QWORD *)(v21 + v22 + 8) = v60; /*0x10087d266*/
    *(_QWORD *)(v21 + v22) = v24; /*0x10087d26b*/
    if ( (_BYTE)v55 != 6 ) /*0x10087d273*/
    {
      v20 = &v55; /*0x10087d279*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v55); /*0x10087d27d*/
    }
  }
  else
  {
    v40 = v54; /*0x10087d28b*/
    v39 = v53; /*0x10087d296*/
    v38 = v52; /*0x10087d2a1*/
    v37 = v51; /*0x10087d2af*/
    v36 = v50; /*0x10087d2bd*/
    v35 = v49; /*0x10087d2d2*/
    v34 = v48; /*0x10087d2d9*/
    v44 = v62; /*0x10087d2e4*/
    v43 = v61; /*0x10087d2ef*/
    v42 = v60; /*0x10087d2fe*/
    v41 = v59; /*0x10087d305*/
    v20 = &v55; /*0x10087d30c*/
    v25 = &v34; /*0x10087d310*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10087d31e*/
      &v55,
      &v34,
      &v41);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v25); /*0x10087d323*/
  v8 = 8; /*0x10087d328*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10087d338*/
  if ( !v26 ) /*0x10087d340*/
LABEL_28:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x10087d4f1*/
  *v26 = 0x736573755F78616DLL; /*0x10087d350*/
  v45 = 8; /*0x10087d353*/
  v46 = v26; /*0x10087d35e*/
  v47 = 8; /*0x10087d365*/
  LOBYTE(v59) = 2; /*0x10087d370*/
  v60 = 0; /*0x10087d374*/
  v61 = 5; /*0x10087d37c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v48, v32, &v45); /*0x10087d399*/
  if ( v48 == 0x8000000000000000LL ) /*0x10087d3a5*/
  {
    v27 = v49; /*0x10087d3a7*/
    v28 = 32 * v51; /*0x10087d3b5*/
    v58 = *(_QWORD *)(v49 + 32 * v51 + 24); /*0x10087d3be*/
    v57 = *(_QWORD *)(v49 + 32 * v51 + 16); /*0x10087d3c7*/
    v29 = *(_QWORD *)(v49 + 32 * v51); /*0x10087d3cb*/
    v56 = *(_QWORD *)(v49 + 32 * v51 + 8); /*0x10087d3d4*/
    v55 = v29; /*0x10087d3d8*/
    *(_QWORD *)(v49 + v28 + 24) = v62; /*0x10087d3e0*/
    *(_QWORD *)(v27 + v28 + 16) = v61; /*0x10087d3e9*/
    v30 = v59; /*0x10087d3ee*/
    *(_QWORD *)(v27 + v28 + 8) = v60; /*0x10087d3f6*/
    *(_QWORD *)(v27 + v28) = v30; /*0x10087d3fb*/
    if ( (_BYTE)v55 != 6 ) /*0x10087d403*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v55); /*0x10087d40d*/
  }
  else
  {
    v40 = v54; /*0x10087d41b*/
    v39 = v53; /*0x10087d426*/
    v38 = v52; /*0x10087d431*/
    v37 = v51; /*0x10087d43f*/
    v36 = v50; /*0x10087d44d*/
    v35 = v49; /*0x10087d462*/
    v34 = v48; /*0x10087d469*/
    v44 = v62; /*0x10087d474*/
    v43 = v61; /*0x10087d47f*/
    v42 = v60; /*0x10087d48e*/
    v41 = v59; /*0x10087d495*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10087d4ae*/
      &v55,
      &v34,
      &v41);
  }
  *(_QWORD *)(v3 + 24) = v33; /*0x10087d4ba*/
  result = v32[0]; /*0x10087d4be*/
  *(_QWORD *)(v3 + 16) = v32[1]; /*0x10087d4cc*/
  *(_QWORD *)(v3 + 8) = result; /*0x10087d4d0*/
  *(_BYTE *)v3 = 5; /*0x10087d4d4*/
  return result; /*0x10087d4d7*/
}