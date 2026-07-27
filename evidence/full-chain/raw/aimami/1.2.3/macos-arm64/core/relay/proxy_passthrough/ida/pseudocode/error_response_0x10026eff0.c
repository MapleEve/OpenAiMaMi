// __ZN13codexmate_lib4core5relay17proxy_passthrough14error_response @ 0x10026eff0 | 基线 same-set
__int64 (__fastcall ***__fastcall codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2(
        __int64 (__fastcall ***a1)(),
        _QWORD *a2,
        void *a3,
        size_t a4,
        void *a5,
        size_t a6))()
{
  __int64 v6; // rax
  __int64 v7; // r13
  _DWORD *v8; // rax
  size_t v9; // r13
  __int64 v10; // r15
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  void ***v14; // rdi
  __int64 (__fastcall **v15)(); // rax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(); // rdx
  __int64 (__fastcall *v18)(); // rdx
  _QWORD *v19; // rsi
  _DWORD *v20; // rax
  void *v21; // rax
  void ***v22; // rdi
  __int64 (__fastcall **v23)(); // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(); // rdx
  __int64 (__fastcall *v26)(); // rdx
  _QWORD *v27; // rsi
  _DWORD *v28; // rax
  size_t v29; // r13
  __int64 v30; // r15
  void *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 (__fastcall **v34)(); // rax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(); // rdx
  __int64 (__fastcall *v37)(); // rdx
  __int64 (__fastcall **v38)(); // rax
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(); // rdx
  __int64 (__fastcall *v41)(); // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // cl
  __int64 (__fastcall ***result)(); // rax
  _QWORD v45[3]; // [rsp+8h] [rbp-228h] BYREF
  char v46; // [rsp+20h] [rbp-210h] BYREF
  __int64 v47; // [rsp+21h] [rbp-20Fh]
  __int64 v48; // [rsp+29h] [rbp-207h]
  _BYTE v49[15]; // [rsp+31h] [rbp-1FFh]
  __int64 v50; // [rsp+40h] [rbp-1F0h]
  __int64 (__fastcall ***v51)(); // [rsp+48h] [rbp-1E8h]
  __int64 v52; // [rsp+50h] [rbp-1E0h] BYREF
  unsigned __int128 v53; // [rsp+58h] [rbp-1D8h]
  void *__src; // [rsp+68h] [rbp-1C8h] BYREF
  size_t __n; // [rsp+70h] [rbp-1C0h]
  _QWORD v56[2]; // [rsp+78h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+88h] [rbp-1A8h]
  __int64 (__fastcall **v58)(); // [rsp+90h] [rbp-1A0h]
  __int64 (__fastcall *v59)(); // [rsp+98h] [rbp-198h]
  __int64 (__fastcall *v60)(); // [rsp+A0h] [rbp-190h]
  __int64 (__fastcall *v61)(); // [rsp+A8h] [rbp-188h]
  _QWORD v62[16]; // [rsp+B0h] [rbp-180h] BYREF
  void *v63; // [rsp+130h] [rbp-100h] BYREF
  size_t v64; // [rsp+138h] [rbp-F8h]
  int v65; // [rsp+144h] [rbp-ECh]
  __int64 v66; // [rsp+148h] [rbp-E8h] BYREF
  _DWORD *v67; // [rsp+150h] [rbp-E0h]
  __int64 v68; // [rsp+158h] [rbp-D8h]
  __int64 (__fastcall **v69)(); // [rsp+160h] [rbp-D0h] BYREF
  void **v70; // [rsp+168h] [rbp-C8h]
  __int64 v71; // [rsp+170h] [rbp-C0h]
  __int64 v72; // [rsp+178h] [rbp-B8h]
  __int64 v73; // [rsp+180h] [rbp-B0h]
  void **v74; // [rsp+188h] [rbp-A8h] BYREF
  __int64 (__fastcall **v75)(); // [rsp+190h] [rbp-A0h]
  void **v76; // [rsp+198h] [rbp-98h]
  __int64 (__fastcall *v77)(); // [rsp+1A0h] [rbp-90h]
  __int64 v78; // [rsp+1A8h] [rbp-88h]
  __int64 (__fastcall **v79)(); // [rsp+1B0h] [rbp-80h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp-78h]
  __int64 (__fastcall *v81)(); // [rsp+1C0h] [rbp-70h]
  __int64 v82; // [rsp+1C8h] [rbp-68h]
  void **v83; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 (__fastcall **v84)(); // [rsp+1D8h] [rbp-58h]
  void **p_src; // [rsp+1E0h] [rbp-50h]
  __int64 v86; // [rsp+1E8h] [rbp-48h] BYREF
  __int64 v87; // [rsp+1F0h] [rbp-40h]
  __int64 v88; // [rsp+1F8h] [rbp-38h]
  __int64 v89; // [rsp+200h] [rbp-30h]

  v65 = (int)a2; /*0x10026f004*/
  v51 = a1; /*0x10026f00a*/
  __src = a3; /*0x10026f011*/
  __n = a4; /*0x10026f018*/
  v63 = a5; /*0x10026f01f*/
  v64 = a6; /*0x10026f026*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10026f03b*/
  {
    v83 = &v63; /*0x10026f048*/
    v84 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10026f053*/
    p_src = &__src; /*0x10026f05e*/
    v86 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10026f062*/
    v62[6] = 2; /*0x10026f066*/
    v62[7] = &unk_1015DE03D; /*0x10026f078*/
    v62[8] = 45; /*0x10026f07f*/
    v62[10] = &unk_1017B9F0C; /*0x10026f091*/
    v62[11] = &v83; /*0x10026f09c*/
    v62[0] = 0; /*0x10026f0a3*/
    v62[1] = &unk_1015DE03D; /*0x10026f0ae*/
    v62[2] = 45; /*0x10026f0b5*/
    v62[3] = 0; /*0x10026f0c0*/
    v62[4] = "src/core/relay/proxy_passthrough.rs"; /*0x10026f0d2*/
    v62[5] = 35; /*0x10026f0d9*/
    v62[9] = 0x13800000001LL; /*0x10026f0ee*/
    a1 = &v79; /*0x10026f0f5*/
    a2 = v62; /*0x10026f0f9*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v79, v62); /*0x10026f100*/
  }
  v52 = 0; /*0x10026f105*/
  *((_QWORD *)&v53 + 1) = 0; /*0x10026f110*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10026f11b*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10026f12a*/
  if ( !v6 ) /*0x10026f132*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10026fb3e*/
  *(_BYTE *)(v6 + 4) = 114; /*0x10026f138*/
  *(_DWORD *)v6 = 1869771365; /*0x10026f13c*/
  v45[0] = 5; /*0x10026f142*/
  v50 = v6; /*0x10026f14d*/
  v45[1] = v6; /*0x10026f154*/
  v45[2] = 5; /*0x10026f15b*/
  v56[0] = 0; /*0x10026f166*/
  v57 = nullptr; /*0x10026f171*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10026f17c*/
  v7 = 7; /*0x10026f181*/
  v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10026f191*/
  if ( !v8 ) /*0x10026f199*/
    goto LABEL_53; /*0x10026f199*/
  *(_DWORD *)((char *)v8 + 3) = 1701273971; /*0x10026f1a2*/
  *v8 = 1936942445; /*0x10026f1a9*/
  v66 = 7; /*0x10026f1af*/
  v67 = v8; /*0x10026f1ba*/
  v68 = 7; /*0x10026f1c1*/
  v9 = __n; /*0x10026f1cc*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10026f1d6*/
  {
    v10 = 0; /*0x10026f1d8*/
    goto LABEL_7; /*0x10026f1d8*/
  }
  v11 = __src; /*0x10026f1eb*/
  if ( __n ) /*0x10026f1f2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10026f1f4*/
    v10 = 1; /*0x10026f1f9*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10026f207*/
    if ( !v12 ) /*0x10026f20f*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10026f1db*/
    v13 = v12; /*0x10026f211*/
  }
  else
  {
    v13 = 1; /*0x10026f216*/
  }
  memcpy((void *)v13, v11, v9); /*0x10026f225*/
  LOBYTE(v79) = 3; /*0x10026f22a*/
  v80 = v9; /*0x10026f22e*/
  v81 = (__int64 (__fastcall *)())v13; /*0x10026f232*/
  v82 = v9; /*0x10026f236*/
  v14 = &v83; /*0x10026f23a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v83, v56, &v66); /*0x10026f24c*/
  if ( __OFSUB__(0, v83) ) /*0x10026f253*/
  {
    v15 = v84; /*0x10026f259*/
    v16 = 4 * v86; /*0x10026f261*/
    v77 = v84[4 * v86 + 3]; /*0x10026f26a*/
    v76 = (void **)v84[4 * v86 + 2]; /*0x10026f276*/
    v17 = v84[4 * v86]; /*0x10026f27d*/
    v75 = (__int64 (__fastcall **)())v84[4 * v86 + 1]; /*0x10026f286*/
    v74 = (void **)v17; /*0x10026f28d*/
    v84[v16 + 3] = (__int64 (__fastcall *)())v82; /*0x10026f298*/
    v15[v16 + 2] = v81; /*0x10026f2a1*/
    v18 = (__int64 (__fastcall *)())v79; /*0x10026f2a6*/
    v19 = (_QWORD *)v80; /*0x10026f2aa*/
    v15[v16 + 1] = (__int64 (__fastcall *)())v80; /*0x10026f2ae*/
    v15[v16] = v18; /*0x10026f2b3*/
    if ( (_BYTE)v74 != 6 ) /*0x10026f2be*/
    {
      v14 = &v74; /*0x10026f2c4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10026f2cb*/
    }
  }
  else
  {
    v62[6] = v89; /*0x10026f2d9*/
    v62[5] = v88; /*0x10026f2e4*/
    v62[4] = v87; /*0x10026f2ef*/
    v62[3] = v86; /*0x10026f2fa*/
    v62[2] = p_src; /*0x10026f305*/
    v62[1] = v84; /*0x10026f314*/
    v62[0] = v83; /*0x10026f31b*/
    v72 = v82; /*0x10026f326*/
    v71 = (__int64)v81; /*0x10026f331*/
    v70 = (void **)v80; /*0x10026f340*/
    v69 = v79; /*0x10026f347*/
    v14 = &v74; /*0x10026f34e*/
    v19 = v62; /*0x10026f355*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10026f363*/
      &v74,
      v62,
      &v69);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v19); /*0x10026f368*/
  v7 = 4; /*0x10026f36d*/
  v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026f37d*/
  if ( !v20 ) /*0x10026f385*/
    goto LABEL_53; /*0x10026f385*/
  *v20 = 1701869940; /*0x10026f38e*/
  v66 = 4; /*0x10026f394*/
  v67 = v20; /*0x10026f39f*/
  v68 = 4; /*0x10026f3a6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10026f3b1*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x10026f3c0*/
  if ( !v21 ) /*0x10026f3c8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x10026fb4f*/
  qmemcpy(v21, "aimami_proxy_error", 18); /*0x10026f3e6*/
  LOBYTE(v79) = 3; /*0x10026f3ef*/
  v80 = 18; /*0x10026f3f3*/
  v81 = (__int64 (__fastcall *)())v21; /*0x10026f3fb*/
  v82 = 18; /*0x10026f3ff*/
  v22 = &v83; /*0x10026f407*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v83, v56, &v66); /*0x10026f419*/
  if ( v83 == (void **)0x8000000000000000LL ) /*0x10026f42c*/
  {
    v23 = v84; /*0x10026f42e*/
    v24 = 4 * v86; /*0x10026f436*/
    v77 = v84[4 * v86 + 3]; /*0x10026f43f*/
    v76 = (void **)v84[4 * v86 + 2]; /*0x10026f44b*/
    v25 = v84[4 * v86]; /*0x10026f452*/
    v75 = (__int64 (__fastcall **)())v84[4 * v86 + 1]; /*0x10026f45b*/
    v74 = (void **)v25; /*0x10026f462*/
    v84[v24 + 3] = (__int64 (__fastcall *)())v82; /*0x10026f46d*/
    v23[v24 + 2] = v81; /*0x10026f476*/
    v26 = (__int64 (__fastcall *)())v79; /*0x10026f47b*/
    v27 = (_QWORD *)v80; /*0x10026f47f*/
    v23[v24 + 1] = (__int64 (__fastcall *)())v80; /*0x10026f483*/
    v23[v24] = v26; /*0x10026f488*/
    if ( (_BYTE)v74 != 6 ) /*0x10026f493*/
    {
      v22 = &v74; /*0x10026f499*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10026f4a0*/
    }
  }
  else
  {
    v62[6] = v89; /*0x10026f4ae*/
    v62[5] = v88; /*0x10026f4b9*/
    v62[4] = v87; /*0x10026f4c4*/
    v62[3] = v86; /*0x10026f4cf*/
    v62[2] = p_src; /*0x10026f4da*/
    v62[1] = v84; /*0x10026f4e9*/
    v62[0] = v83; /*0x10026f4f0*/
    v72 = v82; /*0x10026f4fb*/
    v71 = (__int64)v81; /*0x10026f506*/
    v70 = (void **)v80; /*0x10026f515*/
    v69 = v79; /*0x10026f51c*/
    v22 = &v74; /*0x10026f523*/
    v27 = v62; /*0x10026f52a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10026f538*/
      &v74,
      v62,
      &v69);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v27); /*0x10026f53d*/
  v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026f54c*/
  if ( !v28 ) /*0x10026f554*/
LABEL_53:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x10026fb2d*/
  *v28 = 1701080931; /*0x10026f55d*/
  v66 = 4; /*0x10026f563*/
  v67 = v28; /*0x10026f56e*/
  v68 = 4; /*0x10026f575*/
  v29 = v64; /*0x10026f580*/
  if ( (v64 & 0x8000000000000000LL) != 0LL ) /*0x10026f58a*/
  {
    v30 = 0; /*0x10026f58c*/
    goto LABEL_25; /*0x10026f58c*/
  }
  v31 = v63; /*0x10026f59f*/
  if ( v64 ) /*0x10026f5a6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10026f5a8*/
    v30 = 1; /*0x10026f5ad*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1); /*0x10026f5bb*/
    if ( !v32 ) /*0x10026f5c3*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29); /*0x10026f58f*/
    v33 = v32; /*0x10026f5c5*/
  }
  else
  {
    v33 = 1; /*0x10026f5d4*/
  }
  memcpy((void *)v33, v31, v29); /*0x10026f5e3*/
  LOBYTE(v79) = 3; /*0x10026f5e8*/
  v80 = v29; /*0x10026f5ec*/
  v81 = (__int64 (__fastcall *)())v33; /*0x10026f5f0*/
  v82 = v29; /*0x10026f5f4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v83, v56, &v66); /*0x10026f60a*/
  if ( v83 == (void **)0x8000000000000000LL ) /*0x10026f613*/
  {
    v34 = v84; /*0x10026f615*/
    v35 = 4 * v86; /*0x10026f61d*/
    v77 = v84[4 * v86 + 3]; /*0x10026f626*/
    v76 = (void **)v84[4 * v86 + 2]; /*0x10026f632*/
    v36 = v84[4 * v86]; /*0x10026f639*/
    v75 = (__int64 (__fastcall **)())v84[4 * v86 + 1]; /*0x10026f642*/
    v74 = (void **)v36; /*0x10026f649*/
    v84[v35 + 3] = (__int64 (__fastcall *)())v82; /*0x10026f654*/
    v34[v35 + 2] = v81; /*0x10026f65d*/
    v37 = (__int64 (__fastcall *)())v79; /*0x10026f662*/
    v34[v35 + 1] = (__int64 (__fastcall *)())v80; /*0x10026f66a*/
    v34[v35] = v37; /*0x10026f66f*/
    if ( (_BYTE)v74 != 6 ) /*0x10026f67a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10026f687*/
  }
  else
  {
    v62[6] = v89; /*0x10026f695*/
    v62[5] = v88; /*0x10026f6a0*/
    v62[4] = v87; /*0x10026f6ab*/
    v62[3] = v86; /*0x10026f6b6*/
    v62[2] = p_src; /*0x10026f6c1*/
    v62[1] = v84; /*0x10026f6d0*/
    v62[0] = v83; /*0x10026f6d7*/
    v72 = v82; /*0x10026f6e2*/
    v71 = (__int64)v81; /*0x10026f6ed*/
    v70 = (void **)v80; /*0x10026f6fc*/
    v69 = v79; /*0x10026f703*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10026f71f*/
      &v74,
      v62,
      &v69);
  }
  v59 = (__int64 (__fastcall *)())v56[0]; /*0x10026f732*/
  v60 = (__int64 (__fastcall *)())v56[1]; /*0x10026f739*/
  v61 = v57; /*0x10026f747*/
  LOBYTE(v58) = 5; /*0x10026f74e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v83, &v52, v45); /*0x10026f767*/
  if ( v83 == (void **)0x8000000000000000LL ) /*0x10026f770*/
  {
    v38 = v84; /*0x10026f776*/
    v39 = 4 * v86; /*0x10026f77e*/
    v77 = v84[4 * v86 + 3]; /*0x10026f787*/
    v76 = (void **)v84[4 * v86 + 2]; /*0x10026f793*/
    v40 = v84[4 * v86]; /*0x10026f79a*/
    v75 = (__int64 (__fastcall **)())v84[4 * v86 + 1]; /*0x10026f7a3*/
    v74 = (void **)v40; /*0x10026f7aa*/
    v84[v39 + 3] = v61; /*0x10026f7b8*/
    v38[v39 + 2] = v60; /*0x10026f7c4*/
    v41 = (__int64 (__fastcall *)())v58; /*0x10026f7c9*/
    v38[v39 + 1] = v59; /*0x10026f7d7*/
    v38[v39] = v41; /*0x10026f7dc*/
    if ( (_BYTE)v74 != 6 ) /*0x10026f7e7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10026f7f4*/
  }
  else
  {
    v62[6] = v89; /*0x10026f802*/
    v62[5] = v88; /*0x10026f80d*/
    v62[4] = v87; /*0x10026f818*/
    v62[3] = v86; /*0x10026f823*/
    v62[2] = p_src; /*0x10026f82e*/
    v62[1] = v84; /*0x10026f83d*/
    v62[0] = v83; /*0x10026f844*/
    v72 = (__int64)v61; /*0x10026f852*/
    v71 = (__int64)v60; /*0x10026f860*/
    v70 = (void **)v59; /*0x10026f875*/
    v69 = v58; /*0x10026f87c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10026f898*/
      &v74,
      v62,
      &v69);
  }
  v84 = (__int64 (__fastcall **)())v53; /*0x10026f8af*/
  *(_QWORD *)((char *)v62 + 7) = v52; /*0x10026f8b6*/
  *(_OWORD *)((char *)&v62[1] + 7) = v53; /*0x10026f8c4*/
  v46 = 5; /*0x10026f8cb*/
  *(_QWORD *)&v49[7] = *((_QWORD *)&v53 + 1); /*0x10026f8d2*/
  v47 = v62[0]; /*0x10026f8e0*/
  v48 = v62[1]; /*0x10026f8ee*/
  *(_QWORD *)v49 = v53 >> 8; /*0x10026f8fc*/
  _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb( /*0x10026f914*/
    v62,
    &v46);
  LOWORD(v62[13]) = v65; /*0x10026f91f*/
  v83 = (void **)v62; /*0x10026f926*/
  v84 = &anon_39a6e93098609d65551b0fc4eadbbbd9_846; /*0x10026f931*/
  p_src = (void **)&unk_1015DE06A; /*0x10026f93c*/
  v86 = 18; /*0x10026f940*/
  v87 = 0; /*0x10026f948*/
  LOBYTE(v88) = 0; /*0x10026f950*/
  http::header::name::HdrName::from_static::hd9712dfd2d6a67aa( /*0x10026f96b*/
    &v74,
    "x-aimami-routerelay-responses-nativecodex native responses stream failedbuild error passthrough body failed",
    14,
    &v83);
  if ( (_BYTE)v78 == 3 ) /*0x10026f977*/
    goto LABEL_52; /*0x10026f977*/
  v87 = v78; /*0x10026f984*/
  v86 = (__int64)v77; /*0x10026f98f*/
  p_src = v76; /*0x10026f99a*/
  v84 = v75; /*0x10026f9ac*/
  v83 = v74; /*0x10026f9b0*/
  if ( (_BYTE)v78 != 2 ) /*0x10026f9b6*/
    ((void (__fastcall *)(__int64 *, __int64 (__fastcall **)(), void **))v83[4])(&v86, v84, p_src); /*0x10026f9c8*/
  if ( v64 ) /*0x10026f9dc*/
  {
    v42 = 0; /*0x10026f9de*/
    do /*0x10026fa01*/
    {
      v43 = *((_BYTE *)v63 + v42); /*0x10026fa01*/
      if ( v43 > 0x1Fu ) /*0x10026fa08*/
      {
        if ( v43 == 127 ) /*0x10026f9f3*/
          goto LABEL_51; /*0x10026f9f3*/
      }
      else if ( v43 != 9 ) /*0x10026fa0d*/
      {
        goto LABEL_51; /*0x10026fa0d*/
      }
    }
    while ( v64 != ++v42 ); /*0x10026fa01*/
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v69, v63, v64); /*0x10026fa1b*/
  LOBYTE(v73) = 0; /*0x10026fa20*/
  v88 = v73; /*0x10026fa2e*/
  v87 = v72; /*0x10026fa39*/
  v86 = v71; /*0x10026fa44*/
  p_src = v70; /*0x10026fa56*/
  v84 = v69; /*0x10026fa5a*/
  v83 = (void **)v62; /*0x10026fa5e*/
  http::header::name::HdrName::from_static::hd9712dfd2d6a67aa(&v74, "x-aimami-reasoninput", 15, &v83); /*0x10026fa79*/
  if ( (_BYTE)v78 == 3 ) /*0x10026fa85*/
LABEL_52:
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10026fb1e*/
      "size overflows MAX_SIZE",
      23,
      &v79,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
  v87 = v78; /*0x10026fa8e*/
  v86 = (__int64)v77; /*0x10026fa99*/
  p_src = v76; /*0x10026faa4*/
  v84 = v75; /*0x10026fab6*/
  v83 = v74; /*0x10026faba*/
  if ( (_BYTE)v78 != 2 ) /*0x10026fac0*/
    ((void (__fastcall *)(__int64 *, __int64 (__fastcall **)(), void **))v83[4])(&v86, v84, p_src); /*0x10026fad2*/
LABEL_51:
  result = v51; /*0x10026fad5*/
  qmemcpy(v51, v62, 0x80u); /*0x10026faeb*/
  return result; /*0x10026faee*/
}