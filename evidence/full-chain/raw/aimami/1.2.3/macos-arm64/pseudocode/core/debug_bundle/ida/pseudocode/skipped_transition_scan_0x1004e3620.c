// __ZN13codexmate_lib4core12debug_bundle23skipped_transition_scan @ 0x1004e3620
__int64 __fastcall codexmate_lib::core::debug_bundle::skipped_transition_scan::h7b2228ab191b8cab(
        __int64 a1,
        size_t a2,
        const void *a3,
        size_t a4)
{
  __int64 v7; // rbx
  _DWORD *v8; // rax
  const char **v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rdx
  const char ***v14; // rsi
  _DWORD *v15; // rax
  void *v16; // rax
  __int64 v17; // rbx
  const char **v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const char *v21; // rdx
  __int64 v22; // rdx
  const char ***v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  const char *v26; // rdx
  const char **v27; // r14
  size_t v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  const char *v34; // rdx
  __int64 v35; // rdx
  __int64 result; // rax
  _QWORD v38[2]; // [rsp+10h] [rbp-130h] BYREF
  __int64 v39; // [rsp+20h] [rbp-120h]
  __int64 v40; // [rsp+28h] [rbp-118h] BYREF
  const char ***v41; // [rsp+30h] [rbp-110h]
  __int64 v42; // [rsp+38h] [rbp-108h]
  size_t v43; // [rsp+40h] [rbp-100h]
  __int64 v44; // [rsp+48h] [rbp-F8h] BYREF
  _DWORD *v45; // [rsp+50h] [rbp-F0h]
  __int64 v46; // [rsp+58h] [rbp-E8h]
  void *__src; // [rsp+60h] [rbp-E0h]
  const char **v48; // [rsp+68h] [rbp-D8h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+70h] [rbp-D0h]
  size_t v50; // [rsp+78h] [rbp-C8h]
  __int64 (__fastcall *v51)(); // [rsp+80h] [rbp-C0h]
  __int64 v52; // [rsp+88h] [rbp-B8h]
  __int64 v53; // [rsp+90h] [rbp-B0h]
  __int64 v54; // [rsp+98h] [rbp-A8h]
  const char **v55; // [rsp+A0h] [rbp-A0h] BYREF
  _QWORD *v56; // [rsp+A8h] [rbp-98h]
  size_t __n; // [rsp+B0h] [rbp-90h]
  __int64 (__fastcall *v58)(); // [rsp+B8h] [rbp-88h]
  __int64 v59; // [rsp+C0h] [rbp-80h]
  __int64 v60; // [rsp+C8h] [rbp-78h]
  __int64 v61; // [rsp+D0h] [rbp-70h]
  const char *v62; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-60h]
  __int64 v64; // [rsp+E8h] [rbp-58h]
  __int64 v65; // [rsp+F0h] [rbp-50h]
  __int64 v66; // [rsp+F8h] [rbp-48h]
  const char ***v67; // [rsp+100h] [rbp-40h]
  __int64 v68; // [rsp+108h] [rbp-38h]
  size_t v69; // [rsp+110h] [rbp-30h]

  v38[0] = 0; /*0x1004e3644*/
  v39 = 0; /*0x1004e364f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004e365a*/
  v7 = 7; /*0x1004e365f*/
  v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004e366e*/
  if ( !v8 ) /*0x1004e3676*/
    goto LABEL_29; /*0x1004e3676*/
  *(_DWORD *)((char *)v8 + 3) = 1684369520; /*0x1004e367c*/
  *v8 = 1885956979; /*0x1004e3683*/
  v44 = 7; /*0x1004e3689*/
  v45 = v8; /*0x1004e3694*/
  v46 = 7; /*0x1004e369b*/
  LOWORD(v66) = 257; /*0x1004e36a6*/
  v9 = (const char **)&v55; /*0x1004e36ac*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v55, v38, &v44); /*0x1004e36c1*/
  if ( __OFSUB__(0, v55) ) /*0x1004e36c8*/
  {
    v10 = v56; /*0x1004e36d1*/
    v11 = 4LL * (_QWORD)v58; /*0x1004e36df*/
    v65 = v56[4 * (_QWORD)v58 + 3]; /*0x1004e36e8*/
    v64 = v56[4 * (_QWORD)v58 + 2]; /*0x1004e36f1*/
    v12 = (const char *)v56[4 * (_QWORD)v58]; /*0x1004e36f5*/
    v63 = v56[4 * (_QWORD)v58 + 1]; /*0x1004e36fe*/
    v62 = v12; /*0x1004e3702*/
    v56[v11 + 3] = v69; /*0x1004e370a*/
    v10[v11 + 2] = v68; /*0x1004e3713*/
    v13 = v66; /*0x1004e3718*/
    v14 = v67; /*0x1004e371c*/
    v10[v11 + 1] = v67; /*0x1004e3720*/
    v10[v11] = v13; /*0x1004e3725*/
    if ( (_BYTE)v62 != 6 ) /*0x1004e372d*/
    {
      v9 = &v62; /*0x1004e3733*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v62); /*0x1004e3737*/
    }
  }
  else
  {
    v54 = v61; /*0x1004e3745*/
    v53 = v60; /*0x1004e3750*/
    v52 = v59; /*0x1004e375b*/
    v51 = v58; /*0x1004e3769*/
    v50 = __n; /*0x1004e3777*/
    v49 = (__int64 (__fastcall *)())v56; /*0x1004e378c*/
    v48 = v55; /*0x1004e3793*/
    v43 = v69; /*0x1004e379e*/
    v42 = v68; /*0x1004e37a9*/
    v41 = v67; /*0x1004e37b8*/
    v40 = v66; /*0x1004e37bf*/
    v9 = &v62; /*0x1004e37c6*/
    v14 = &v48; /*0x1004e37ca*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004e37d8*/
      &v62,
      &v48,
      &v40);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v14); /*0x1004e37dd*/
  v7 = 4; /*0x1004e37e2*/
  v15 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004e37f1*/
  if ( !v15 ) /*0x1004e37f9*/
    goto LABEL_29; /*0x1004e37f9*/
  *v15 = 1851876211; /*0x1004e3802*/
  v44 = 4; /*0x1004e3808*/
  v45 = v15; /*0x1004e3813*/
  v46 = 4; /*0x1004e381a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x1004e3825*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1004e3832*/
  if ( !v16 ) /*0x1004e383a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x1004e3c7b*/
  v17 = (__int64)v16; /*0x1004e3840*/
  memcpy(v16, a3, a4); /*0x1004e384c*/
  LOBYTE(v66) = 3; /*0x1004e3851*/
  v67 = (const char ***)a4; /*0x1004e3855*/
  v68 = v17; /*0x1004e3859*/
  v69 = a4; /*0x1004e385d*/
  v18 = (const char **)&v55; /*0x1004e3861*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v55, v38, &v44); /*0x1004e3876*/
  if ( v55 == (const char **)0x8000000000000000LL ) /*0x1004e388c*/
  {
    v19 = v56; /*0x1004e388e*/
    v20 = 4LL * (_QWORD)v58; /*0x1004e389c*/
    v65 = v56[4 * (_QWORD)v58 + 3]; /*0x1004e38a5*/
    v64 = v56[4 * (_QWORD)v58 + 2]; /*0x1004e38ae*/
    v21 = (const char *)v56[4 * (_QWORD)v58]; /*0x1004e38b2*/
    v63 = v56[4 * (_QWORD)v58 + 1]; /*0x1004e38bb*/
    v62 = v21; /*0x1004e38bf*/
    v56[v20 + 3] = v69; /*0x1004e38c7*/
    v19[v20 + 2] = v68; /*0x1004e38d0*/
    v22 = v66; /*0x1004e38d5*/
    v23 = v67; /*0x1004e38d9*/
    v19[v20 + 1] = v67; /*0x1004e38dd*/
    v19[v20] = v22; /*0x1004e38e2*/
    if ( (_BYTE)v62 != 6 ) /*0x1004e38ea*/
    {
      v18 = &v62; /*0x1004e38f0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v62); /*0x1004e38f4*/
    }
  }
  else
  {
    v54 = v61; /*0x1004e3902*/
    v53 = v60; /*0x1004e390d*/
    v52 = v59; /*0x1004e3918*/
    v51 = v58; /*0x1004e3926*/
    v50 = __n; /*0x1004e3934*/
    v49 = (__int64 (__fastcall *)())v56; /*0x1004e3949*/
    v48 = v55; /*0x1004e3950*/
    v43 = v69; /*0x1004e395b*/
    v42 = v68; /*0x1004e3966*/
    v41 = v67; /*0x1004e3975*/
    v40 = v66; /*0x1004e397c*/
    v18 = &v62; /*0x1004e3983*/
    v23 = &v48; /*0x1004e3987*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004e3995*/
      &v62,
      &v48,
      &v40);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v23); /*0x1004e399a*/
  v7 = 6; /*0x1004e399f*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1004e39ae*/
  if ( !v24 ) /*0x1004e39b6*/
LABEL_29:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x1004e3c6c*/
  *(_WORD *)(v24 + 4) = 28271; /*0x1004e39bf*/
  *(_DWORD *)v24 = 1935762802; /*0x1004e39c5*/
  v44 = 6; /*0x1004e39cb*/
  v45 = (_DWORD *)v24; /*0x1004e39d6*/
  v46 = 6; /*0x1004e39dd*/
  v25 = *(unsigned __int8 *)(a2 + 64); /*0x1004e39e8*/
  v26 = "RouterOntakeoverexceeded"; /*0x1004e39f4*/
  if ( *(_BYTE *)(a2 + 64) ) /*0x1004e39e8*/
    v26 = (const char *)&unk_1015FBFF0; /*0x1004e39fe*/
  v62 = v26; /*0x1004e3a06*/
  v63 = v25 | 8; /*0x1004e3a0a*/
  v48 = &v62; /*0x1004e3a12*/
  v49 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e3a20*/
  v50 = a2; /*0x1004e3a27*/
  v51 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e3a35*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017BF569, &v48); /*0x1004e3a51*/
  v27 = v55; /*0x1004e3a56*/
  __src = v56; /*0x1004e3a64*/
  v28 = __n; /*0x1004e3a6b*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1004e3a75*/
  {
    v29 = 0; /*0x1004e3a77*/
    goto LABEL_17; /*0x1004e3a77*/
  }
  if ( __n ) /*0x1004e3a8a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v55, &unk_1017BF569); /*0x1004e3a8c*/
    v29 = 1; /*0x1004e3a91*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x1004e3a9f*/
    if ( !v30 ) /*0x1004e3aa7*/
LABEL_17:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v28); /*0x1004e3a7a*/
    v31 = v30; /*0x1004e3aa9*/
  }
  else
  {
    v31 = 1; /*0x1004e3ab8*/
  }
  memcpy((void *)v31, __src, v28); /*0x1004e3aca*/
  LOBYTE(v66) = 3; /*0x1004e3acf*/
  v67 = (const char ***)v28; /*0x1004e3ad3*/
  v68 = v31; /*0x1004e3ad7*/
  v69 = v28; /*0x1004e3adb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v55, v38, &v44); /*0x1004e3af4*/
  if ( v55 == (const char **)0x8000000000000000LL ) /*0x1004e3b00*/
  {
    v32 = v56; /*0x1004e3b02*/
    v33 = 4LL * (_QWORD)v58; /*0x1004e3b10*/
    v65 = v56[4 * (_QWORD)v58 + 3]; /*0x1004e3b19*/
    v64 = v56[4 * (_QWORD)v58 + 2]; /*0x1004e3b22*/
    v34 = (const char *)v56[4 * (_QWORD)v58]; /*0x1004e3b26*/
    v63 = v56[4 * (_QWORD)v58 + 1]; /*0x1004e3b2f*/
    v62 = v34; /*0x1004e3b33*/
    v56[v33 + 3] = v69; /*0x1004e3b3b*/
    v32[v33 + 2] = v68; /*0x1004e3b44*/
    v35 = v66; /*0x1004e3b49*/
    v32[v33 + 1] = v67; /*0x1004e3b51*/
    v32[v33] = v35; /*0x1004e3b56*/
    if ( (_BYTE)v62 != 6 ) /*0x1004e3b5e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v62); /*0x1004e3b68*/
  }
  else
  {
    v54 = v61; /*0x1004e3b76*/
    v53 = v60; /*0x1004e3b81*/
    v52 = v59; /*0x1004e3b8c*/
    v51 = v58; /*0x1004e3b9a*/
    v50 = __n; /*0x1004e3ba8*/
    v49 = (__int64 (__fastcall *)())v56; /*0x1004e3bbd*/
    v48 = v55; /*0x1004e3bc4*/
    v43 = v69; /*0x1004e3bcf*/
    v42 = v68; /*0x1004e3bda*/
    v41 = v67; /*0x1004e3be9*/
    v40 = v66; /*0x1004e3bf0*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004e3c09*/
      &v62,
      &v48,
      &v40);
  }
  if ( v27 ) /*0x1004e3c11*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v27, 1); /*0x1004e3c22*/
  *(_QWORD *)(a1 + 24) = v39; /*0x1004e3c35*/
  result = v38[0]; /*0x1004e3c39*/
  *(_QWORD *)(a1 + 16) = v38[1]; /*0x1004e3c47*/
  *(_QWORD *)(a1 + 8) = result; /*0x1004e3c4b*/
  *(_BYTE *)a1 = 5; /*0x1004e3c4f*/
  return result; /*0x1004e3c52*/
}