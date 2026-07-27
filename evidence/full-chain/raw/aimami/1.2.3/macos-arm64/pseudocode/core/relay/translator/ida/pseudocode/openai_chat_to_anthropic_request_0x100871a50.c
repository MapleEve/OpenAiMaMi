// __ZN13codexmate_lib4core5relay10translator32openai_chat_to_anthropic_request @ 0x100871a50 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::translator::openai_chat_to_anthropic_request::h3d88b15f190b8ba9(
        __int64 *a1,
        void *a2,
        const void *a3,
        size_t a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __m256i *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __m256i *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m256i *v26; // rsi
  _QWORD *v27; // rax
  __m256i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m256i *v32; // rsi
  void *v33; // rax
  __int64 v34; // rdx
  __m256i *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __m256i *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  __m256i *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __m256i *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rsi
  __m256i *v51; // r14
  __int64 v52; // rax
  __m256i *v53; // r14
  unsigned __int8 *v54; // rax
  int v55; // ecx
  _DWORD *v56; // rcx
  __int64 v57; // rax
  _DWORD *v58; // rax
  __int64 v59; // rax
  __int128 v60; // kr00_16
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // r14
  signed __int64 v64; // r12
  _DWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rdx
  __m128i v71; // xmm1
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  int v74; // edx
  _DWORD *v75; // rax
  _DWORD *v76; // rax
  __m256i *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __m256i *v81; // rsi
  _DWORD *v82; // rax
  __int64 v83; // r14
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rdx
  __m256i *v87; // r14
  __int64 *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 i; // r14
  __int64 v93; // [rsp+68h] [rbp-1D8h] BYREF
  __int128 v94; // [rsp+70h] [rbp-1D0h]
  __m256i v95; // [rsp+80h] [rbp-1C0h] BYREF
  __int64 *v96; // [rsp+A0h] [rbp-1A0h]
  __int64 v97; // [rsp+A8h] [rbp-198h] BYREF
  __int64 v98; // [rsp+B0h] [rbp-190h]
  __int64 v99; // [rsp+B8h] [rbp-188h]
  void *__src; // [rsp+C0h] [rbp-180h]
  _BYTE v101[31]; // [rsp+C9h] [rbp-177h]
  __int64 v102; // [rsp+E8h] [rbp-158h] BYREF
  _QWORD *v103; // [rsp+F0h] [rbp-150h]
  __int64 v104; // [rsp+F8h] [rbp-148h]
  __int64 v105; // [rsp+100h] [rbp-140h]
  __int128 v106; // [rsp+108h] [rbp-138h] BYREF
  __int64 v107; // [rsp+118h] [rbp-128h]
  __int64 v108; // [rsp+120h] [rbp-120h] BYREF
  _DWORD *v109; // [rsp+128h] [rbp-118h]
  __int64 v110; // [rsp+130h] [rbp-110h]
  __m256i v111; // [rsp+138h] [rbp-108h] BYREF
  size_t __n; // [rsp+158h] [rbp-E8h]
  void *v113; // [rsp+160h] [rbp-E0h]
  __int64 v114; // [rsp+168h] [rbp-D8h] BYREF
  _DWORD *v115; // [rsp+170h] [rbp-D0h]
  __int128 v116; // [rsp+178h] [rbp-C8h]
  __m256i v117; // [rsp+188h] [rbp-B8h] BYREF
  __int64 v118; // [rsp+1A8h] [rbp-98h]
  __int64 v119; // [rsp+1B0h] [rbp-90h]
  __int64 v120; // [rsp+1B8h] [rbp-88h]
  __m256i v121; // [rsp+1C0h] [rbp-80h]
  __m256i v122; // [rsp+1E0h] [rbp-60h] BYREF
  __int64 v123; // [rsp+200h] [rbp-40h]
  __int64 v124; // [rsp+208h] [rbp-38h]
  __int64 v125; // [rsp+210h] [rbp-30h]

  __n = a4; /*0x100871a64*/
  v96 = a1; /*0x100871a71*/
  v97 = 0; /*0x100871a82*/
  v98 = 8; /*0x100871a8d*/
  v99 = 0; /*0x100871a98*/
  v93 = 0x8000000000000000LL; /*0x100871aa3*/
  v113 = a2; /*0x100871ab6*/
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100871abd*/
         "messagesobjectpropertiesdescriptionparametersstrict",
         8,
         a2);
  if ( v5 ) /*0x100871ac5*/
  {
    if ( *(_BYTE *)v5 == 4 ) /*0x100871aca*/
    {
      v6 = *(_QWORD *)(v5 + 24); /*0x100871acc*/
      if ( v6 ) /*0x100871ad3*/
      {
        v7 = *(_QWORD *)(v5 + 16); /*0x100871ad5*/
        v8 = 32 * v6; /*0x100871ad9*/
        do /*0x100871b06*/
        {
          codexmate_lib::core::relay::translator::translate_openai_message_to_anthropic::h2841191c7f22086b( /*0x100871af9*/
            v7,
            &v97,
            &v93);
          v7 += 32; /*0x100871afe*/
          v8 -= 32; /*0x100871b02*/
        }
        while ( v8 ); /*0x100871b06*/
      }
    }
  }
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v113); /*0x100871b1b*/
  if ( v9 && *(_BYTE *)v9 == 3 ) /*0x100871b28*/
  {
    __n = *(_QWORD *)(v9 + 24); /*0x100871b2e*/
    a3 = *(const void **)(v9 + 16); /*0x100871b35*/
  }
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100871b41*/
  {
    v10 = 0; /*0x100871b43*/
    goto LABEL_11; /*0x100871b43*/
  }
  if ( __n ) /*0x100871b59*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5); /*0x100871b5b*/
    v10 = 1; /*0x100871b60*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100871b71*/
    if ( !v11 ) /*0x100871b79*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, __n); /*0x100871b45*/
    v12 = v11; /*0x100871b7b*/
  }
  else
  {
    v12 = 1; /*0x100871b80*/
  }
  __src = (void *)v12; /*0x100871b85*/
  memcpy((void *)v12, a3, __n); /*0x100871b96*/
  v13 = (__m256i *)&unk_101674EAE; /*0x100871b9d*/
  v14 = 10; /*0x100871ba4*/
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674EAE, 10, v113); /*0x100871bb0*/
  if ( v15 /*0x100871bd5*/
    || (v13 = (__m256i *)&unk_101674EB8,
        v14 = 21,
        (v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_101674EB8,
                 21,
                 v113)) != 0) )
  {
    LOBYTE(v16) = *(_BYTE *)v15; /*0x100871bdb*/
    switch ( *(_BYTE *)v15 ) /*0x100871bf1*/
    {
      case 0: /*0x100871bf1*/
        goto LABEL_29;
      case 1: /*0x100871bf1*/
      case 2: /*0x100871bf1*/
        v16 = *(_QWORD *)v15; /*0x100871bf3*/
        v122.i64[1] = *(_QWORD *)(v15 + 8); /*0x100871bfa*/
        v122.i64[0] = v16; /*0x100871bfe*/
        v122.i128[1] = *(_OWORD *)(v15 + 16); /*0x100871c06*/
        *(__int64 *)((char *)&v117.i64[2] + 7) = v122.i64[3]; /*0x100871c12*/
        v117.i128[0] = *(__int128 *)((char *)v122.i128 + 1); /*0x100871c1d*/
        v117.i64[2] = *(__int64 *)((char *)&v122.i64[2] + 1); /*0x100871c33*/
        v122.i8[0] = 2; /*0x100871c3a*/
        v122.i64[1] = 0; /*0x100871c3e*/
        v122.i64[2] = 1024; /*0x100871c46*/
        if ( (_BYTE)v16 == 6 ) /*0x100871c52*/
          goto LABEL_27; /*0x100871c52*/
        goto LABEL_30; /*0x100871c52*/
      case 3: /*0x100871bf1*/
        v14 = v15 + 8; /*0x100871c61*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v122.u32[2], v15 + 8); /*0x100871c64*/
        goto LABEL_29; /*0x100871c69*/
      case 4: /*0x100871bf1*/
        v14 = v15 + 8; /*0x100871c99*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100871c9c*/
          &v122.u32[2],
          v15 + 8);
        goto LABEL_29; /*0x100871ca1*/
      case 5: /*0x100871bf1*/
        if ( *(_QWORD *)(v15 + 24) ) /*0x100871c6e*/
        {
          v14 = *(_QWORD *)(v15 + 8); /*0x100871c75*/
          if ( !v14 ) /*0x100871c7c*/
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x100873495*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100871c8a*/
            &v122.u32[2],
            v14,
            *(_QWORD *)(v15 + 16));
        }
        else
        {
          v122.i64[1] = 0; /*0x100871ce8*/
          v122.i64[3] = 0; /*0x100871cf0*/
        }
LABEL_29:
        *(__int64 *)((char *)&v117.i64[2] + 7) = v122.i64[3]; /*0x100871cf8*/
        *(__int128 *)((char *)v117.i128 + 8) = *(__int128 *)((char *)v122.i128 + 9); /*0x100871d16*/
        v117.i64[0] = *(__int64 *)((char *)v122.i64 + 1); /*0x100871d1d*/
        v122.i8[0] = 2; /*0x100871d24*/
        v122.i64[1] = 0; /*0x100871d28*/
        v122.i64[2] = 1024; /*0x100871d30*/
LABEL_30:
        v95.i8[0] = v16; /*0x100871d38*/
        *(__int128 *)((char *)v95.i128 + 1) = v117.i128[0]; /*0x100871d4d*/
        *(__int64 *)((char *)&v95.i64[2] + 1) = v117.i64[2]; /*0x100871d62*/
        v95.i64[3] = *(__int64 *)((char *)&v117.i64[2] + 7); /*0x100871d70*/
        v13 = &v122; /*0x100871d77*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v122); /*0x100871d7b*/
        break; /*0x100871d7b*/
    }
  }
  else
  {
    v122.i8[0] = 2; /*0x100871ca3*/
    v122.i64[1] = 0; /*0x100871ca7*/
    v122.i64[2] = 1024; /*0x100871caf*/
LABEL_27:
    v95 = v122; /*0x100871cb7*/
  }
  v108 = 0; /*0x100871d80*/
  v110 = 0; /*0x100871d8b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x100871d96*/
  v17 = 5; /*0x100871d9b*/
  v18 = 1; /*0x100871da1*/
  v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100871db1*/
  if ( !v19 ) /*0x100871db9*/
    goto LABEL_181; /*0x100871db9*/
  *(_BYTE *)(v19 + 4) = 108; /*0x100871dbf*/
  *(_DWORD *)v19 = 1701080941; /*0x100871dc3*/
  v102 = 5; /*0x100871dc9*/
  v103 = (_QWORD *)v19; /*0x100871dd4*/
  v104 = 5; /*0x100871ddb*/
  v20 = __n; /*0x100871de6*/
  if ( __n ) /*0x100871df0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100871df5*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x100871e02*/
    if ( !v21 ) /*0x100871e0a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x1008734f3*/
    v18 = v21; /*0x100871e10*/
    v20 = __n; /*0x100871e13*/
  }
  memcpy((void *)v18, __src, v20); /*0x100871e27*/
  v121.i8[0] = 3; /*0x100871e2c*/
  v121.i64[1] = v20; /*0x100871e30*/
  v121.i64[2] = v18; /*0x100871e34*/
  v121.i64[3] = v20; /*0x100871e38*/
  v22 = &v117; /*0x100871e3c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v108, &v102); /*0x100871e51*/
  if ( v117.i64[0] == 0x8000000000000000LL ) /*0x100871e67*/
  {
    v23 = v117.i64[1]; /*0x100871e6d*/
    v24 = 32 * v117.i64[3]; /*0x100871e7b*/
    v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x100871e90*/
    v25 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x100871e97*/
    v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x100871ea0*/
    v114 = v25; /*0x100871ea7*/
    *(_OWORD *)(v117.i64[1] + v24 + 16) = v121.i128[1]; /*0x100871ebb*/
    v26 = (__m256i *)v121.i64[1]; /*0x100871ec4*/
    *(_OWORD *)(v23 + v24) = v121.i128[0]; /*0x100871ecd*/
    if ( (_BYTE)v114 != 6 ) /*0x100871ed8*/
    {
      v22 = (__m256i *)&v114; /*0x100871ede*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x100871ee5*/
    }
  }
  else
  {
    v125 = v120; /*0x100871ef6*/
    v124 = v119; /*0x100871f01*/
    v123 = v118; /*0x100871f0c*/
    v122 = v117; /*0x100871f22*/
    v111 = v121; /*0x100871f4b*/
    v22 = (__m256i *)&v114; /*0x100871f68*/
    v26 = &v122; /*0x100871f6f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100871f7a*/
      &v114,
      &v122,
      &v111);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v26); /*0x100871f7f*/
  v17 = 8; /*0x100871f84*/
  v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100871f94*/
  if ( !v27 ) /*0x100871f9c*/
    goto LABEL_181; /*0x100871f9c*/
  *v27 = 0x736567617373656DLL; /*0x100871faf*/
  v102 = 8; /*0x100871fb3*/
  v103 = v27; /*0x100871fbe*/
  v104 = 8; /*0x100871fc5*/
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v122, &v97); /*0x100871fdb*/
  if ( v122.i8[0] == 6 ) /*0x100871fe4*/
  {
    v117.i64[0] = v122.i64[1]; /*0x100873415*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087343d*/
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v117,
      &off_10196D480,
      &off_10196CE20);
  }
  v121 = v122; /*0x100871ff6*/
  v28 = &v117; /*0x10087200a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v108, &v102); /*0x10087201f*/
  if ( v117.i64[0] == 0x8000000000000000LL ) /*0x100872035*/
  {
    v29 = v117.i64[1]; /*0x10087203b*/
    v30 = 32 * v117.i64[3]; /*0x100872049*/
    v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x10087205e*/
    v31 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x100872065*/
    v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x10087206e*/
    v114 = v31; /*0x100872075*/
    *(_OWORD *)(v117.i64[1] + v30 + 16) = v121.i128[1]; /*0x100872089*/
    v32 = (__m256i *)v121.i64[1]; /*0x100872092*/
    *(_OWORD *)(v29 + v30) = v121.i128[0]; /*0x10087209b*/
    if ( (_BYTE)v114 != 6 ) /*0x1008720a6*/
    {
      v28 = (__m256i *)&v114; /*0x1008720ac*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x1008720b3*/
    }
  }
  else
  {
    v125 = v120; /*0x1008720c4*/
    v124 = v119; /*0x1008720cf*/
    v123 = v118; /*0x1008720da*/
    v122 = v117; /*0x1008720f0*/
    v111 = v121; /*0x100872119*/
    v28 = (__m256i *)&v114; /*0x100872136*/
    v32 = &v122; /*0x10087213d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100872148*/
      &v114,
      &v122,
      &v111);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v32); /*0x10087214d*/
  v17 = 10; /*0x100872152*/
  v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100872162*/
  if ( !v33 ) /*0x10087216a*/
LABEL_181:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17); /*0x1008734dd*/
  qmemcpy(v33, "max_tokens", 10); /*0x10087217d*/
  v102 = 10; /*0x100872188*/
  v103 = v33; /*0x100872193*/
  v104 = 10; /*0x10087219a*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1008721b0*/
    &v122,
    &v95);
  if ( v122.i8[0] == 6 ) /*0x1008721b9*/
  {
    v117.i64[0] = v122.i64[1]; /*0x10087344b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100873473*/
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v117,
      &off_10196D480,
      &off_10196CE20);
  }
  v121 = v122; /*0x1008721cb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v108, &v102); /*0x1008721f4*/
  if ( v117.i64[0] == 0x8000000000000000LL ) /*0x10087220a*/
  {
    v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x100872233*/
    v34 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x10087223a*/
    v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x100872243*/
    v114 = v34; /*0x10087224a*/
    *(__m256i *)(v117.i64[1] + 32 * v117.i64[3]) = v121; /*0x10087225e*/
    if ( (_BYTE)v114 != 6 ) /*0x10087227b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x100872288*/
  }
  else
  {
    v125 = v120; /*0x100872299*/
    v124 = v119; /*0x1008722a4*/
    v123 = v118; /*0x1008722af*/
    v122 = v117; /*0x1008722c5*/
    v111 = v121; /*0x1008722ee*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10087231d*/
      &v114,
      &v122,
      &v111);
  }
  v103 = (_QWORD *)v108; /*0x100872330*/
  v104 = (__int64)v109; /*0x100872337*/
  v105 = v110; /*0x100872345*/
  LOBYTE(v102) = 5; /*0x10087234c*/
  if ( v93 != 0x8000000000000000LL ) /*0x100872367*/
  {
    v122.i128[1] = v94; /*0x100872382*/
    v122.i64[1] = v93; /*0x100872386*/
    v122.i8[0] = 3; /*0x10087238a*/
    v35 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008723a6*/
                       "systeminstructions",
                       6u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v35); /*0x1008723ac*/
    *v35 = v122; /*0x1008723bd*/
  }
  v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E74, 6, v113); /*0x1008723e3*/
  if ( v36 ) /*0x1008723eb*/
  {
    switch ( *(_BYTE *)v36 ) /*0x100872402*/
    {
      case 0: /*0x100872402*/
        v122.i8[0] = 0; /*0x10087243b*/
        goto LABEL_64; /*0x10087243f*/
      case 1: /*0x100872402*/
      case 2: /*0x100872402*/
        v122.i128[1] = *(_OWORD *)(v36 + 16); /*0x100872410*/
        v37 = *(_QWORD *)v36; /*0x100872414*/
        v122.i64[1] = *(_QWORD *)(v36 + 8); /*0x10087241b*/
        v122.i64[0] = v37; /*0x10087241f*/
        goto LABEL_64; /*0x100872423*/
      case 3: /*0x100872402*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v122.u32[2], v36 + 8); /*0x10087244c*/
        v122.i8[0] = 3; /*0x100872451*/
        goto LABEL_64; /*0x100872455*/
      case 4: /*0x100872402*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100872430*/
          &v122.u32[2],
          v36 + 8);
        v122.i8[0] = 4; /*0x100872435*/
        goto LABEL_64; /*0x100872439*/
      case 5: /*0x100872402*/
        if ( *(_QWORD *)(v36 + 24) ) /*0x100872457*/
        {
          v38 = *(_QWORD *)(v36 + 8); /*0x10087245e*/
          if ( !v38 ) /*0x100872465*/
            goto LABEL_178; /*0x100872465*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100872473*/
            &v122.u32[2],
            v38,
            *(_QWORD *)(v36 + 16));
        }
        else
        {
          v122.i64[1] = 0; /*0x10087247a*/
          v122.i64[3] = 0; /*0x100872482*/
        }
        v122.i8[0] = 5; /*0x10087248a*/
LABEL_64:
        v39 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087248e*/
                           &unk_101674E74,
                           6u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v39); /*0x1008724ac*/
        *v39 = v122; /*0x1008724bd*/
        break; /*0x1008724bd*/
    }
  }
  v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E8D, 11, v113); /*0x1008724e3*/
  if ( v40 ) /*0x1008724eb*/
  {
    switch ( *(_BYTE *)v40 ) /*0x100872502*/
    {
      case 0: /*0x100872502*/
        v122.i8[0] = 0; /*0x10087253b*/
        goto LABEL_76; /*0x10087253f*/
      case 1: /*0x100872502*/
      case 2: /*0x100872502*/
        v122.i128[1] = *(_OWORD *)(v40 + 16); /*0x100872510*/
        v41 = *(_QWORD *)v40; /*0x100872514*/
        v122.i64[1] = *(_QWORD *)(v40 + 8); /*0x10087251b*/
        v122.i64[0] = v41; /*0x10087251f*/
        goto LABEL_76; /*0x100872523*/
      case 3: /*0x100872502*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v122.u32[2], v40 + 8); /*0x10087254c*/
        v122.i8[0] = 3; /*0x100872551*/
        goto LABEL_76; /*0x100872555*/
      case 4: /*0x100872502*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100872530*/
          &v122.u32[2],
          v40 + 8);
        v122.i8[0] = 4; /*0x100872535*/
        goto LABEL_76; /*0x100872539*/
      case 5: /*0x100872502*/
        if ( *(_QWORD *)(v40 + 24) ) /*0x100872557*/
        {
          v42 = *(_QWORD *)(v40 + 8); /*0x10087255e*/
          if ( !v42 ) /*0x100872565*/
            goto LABEL_178; /*0x100872565*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100872573*/
            &v122.u32[2],
            v42,
            *(_QWORD *)(v40 + 16));
        }
        else
        {
          v122.i64[1] = 0; /*0x10087257a*/
          v122.i64[3] = 0; /*0x100872582*/
        }
        v122.i8[0] = 5; /*0x10087258a*/
LABEL_76:
        v43 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087258e*/
                           &unk_101674E8D,
                           0xBu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v43); /*0x1008725ac*/
        *v43 = v122; /*0x1008725bd*/
        break; /*0x1008725bd*/
    }
  }
  v44 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E98, 5, v113); /*0x1008725e3*/
  if ( v44 ) /*0x1008725eb*/
  {
    switch ( *(_BYTE *)v44 ) /*0x100872602*/
    {
      case 0: /*0x100872602*/
        v122.i8[0] = 0; /*0x10087263b*/
        goto LABEL_88; /*0x10087263f*/
      case 1: /*0x100872602*/
      case 2: /*0x100872602*/
        v122.i128[1] = *(_OWORD *)(v44 + 16); /*0x100872610*/
        v45 = *(_QWORD *)v44; /*0x100872614*/
        v122.i64[1] = *(_QWORD *)(v44 + 8); /*0x10087261b*/
        v122.i64[0] = v45; /*0x10087261f*/
        goto LABEL_88; /*0x100872623*/
      case 3: /*0x100872602*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v122.u32[2], v44 + 8); /*0x10087264c*/
        v122.i8[0] = 3; /*0x100872651*/
        goto LABEL_88; /*0x100872655*/
      case 4: /*0x100872602*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100872630*/
          &v122.u32[2],
          v44 + 8);
        v122.i8[0] = 4; /*0x100872635*/
        goto LABEL_88; /*0x100872639*/
      case 5: /*0x100872602*/
        if ( *(_QWORD *)(v44 + 24) ) /*0x100872657*/
        {
          v46 = *(_QWORD *)(v44 + 8); /*0x10087265e*/
          if ( !v46 ) /*0x100872665*/
            goto LABEL_178; /*0x100872665*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100872673*/
            &v122.u32[2],
            v46,
            *(_QWORD *)(v44 + 16));
        }
        else
        {
          v122.i64[1] = 0; /*0x10087267a*/
          v122.i64[3] = 0; /*0x100872682*/
        }
        v122.i8[0] = 5; /*0x10087268a*/
LABEL_88:
        v47 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087268e*/
                           &unk_101674E98,
                           5u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v47); /*0x1008726ac*/
        *v47 = v122; /*0x1008726bd*/
        break; /*0x1008726bd*/
    }
  }
  v48 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008726e3*/
          "stopLeftDownmovecell",
          4,
          v113);
  if ( v48 ) /*0x1008726eb*/
  {
    switch ( *(_BYTE *)v48 ) /*0x100872702*/
    {
      case 0: /*0x100872702*/
        v122.i8[0] = 0; /*0x10087273b*/
        goto LABEL_100; /*0x10087273f*/
      case 1: /*0x100872702*/
      case 2: /*0x100872702*/
        v122.i128[1] = *(_OWORD *)(v48 + 16); /*0x100872710*/
        v49 = *(_QWORD *)v48; /*0x100872714*/
        v122.i64[1] = *(_QWORD *)(v48 + 8); /*0x10087271b*/
        v122.i64[0] = v49; /*0x10087271f*/
        goto LABEL_100; /*0x100872723*/
      case 3: /*0x100872702*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v122.u32[2], v48 + 8); /*0x10087274c*/
        v122.i8[0] = 3; /*0x100872751*/
        goto LABEL_100; /*0x100872755*/
      case 4: /*0x100872702*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100872730*/
          &v122.u32[2],
          v48 + 8);
        v122.i8[0] = 4; /*0x100872735*/
        goto LABEL_100; /*0x100872739*/
      case 5: /*0x100872702*/
        if ( !*(_QWORD *)(v48 + 24) ) /*0x10087275c*/
        {
          v122.i64[1] = 0; /*0x10087277a*/
          v122.i64[3] = 0; /*0x100872782*/
LABEL_99:
          v122.i8[0] = 5; /*0x10087278a*/
LABEL_100:
          v51 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087278e*/
                             "stop_sequences",
                             0xEu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v51); /*0x1008727ac*/
          *v51 = v122; /*0x1008727bd*/
          goto LABEL_101; /*0x1008727bd*/
        }
        v50 = *(_QWORD *)(v48 + 8); /*0x10087275e*/
        if ( v50 ) /*0x100872765*/
        {
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100872773*/
            &v122.u32[2],
            v50,
            *(_QWORD *)(v48 + 16));
          goto LABEL_99; /*0x100872778*/
        }
        break; /*0x100872778*/
    }
LABEL_178:
    core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10087347d*/
  }
LABEL_101:
  v52 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674ECD, 5, v113); /*0x1008727d0*/
  if ( v52 && *(_BYTE *)v52 == 4 ) /*0x1008727f4*/
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3a270325c534826b( /*0x100872810*/
      &v117,
      *(_QWORD *)(v52 + 16),
      *(_QWORD *)(v52 + 16) + 32LL * *(_QWORD *)(v52 + 24));
    if ( v117.i64[2] ) /*0x10087281d*/
    {
      v122.i128[1] = *(__int128 *)((char *)v117.i128 + 8); /*0x100872838*/
      v122.i64[1] = v117.i64[0]; /*0x10087283c*/
      v122.i8[0] = 4; /*0x100872840*/
      v53 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087285c*/
                         &unk_101674ECD,
                         5u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v53); /*0x100872862*/
      *v53 = v122; /*0x100872873*/
    }
    else if ( v117.i64[0] ) /*0x100872892*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117.i64[1], 32 * v117.i64[0], 8); /*0x1008728a4*/
    }
  }
  v54 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008728bc*/
                             "tool_choicestop_sequences",
                             11,
                             v113);
  if ( v54 ) /*0x1008728c4*/
  {
    v55 = *v54; /*0x1008728ca*/
    if ( v55 != 5 ) /*0x1008728d0*/
    {
      if ( v55 != 3 ) /*0x1008728d9*/
        goto LABEL_168; /*0x1008728d9*/
      v56 = *((_DWORD **)v54 + 2); /*0x1008728df*/
      v57 = *((_QWORD *)v54 + 3); /*0x1008728e3*/
      if ( v57 != 8 ) /*0x1008728eb*/
      {
        if ( v57 != 4 ) /*0x1008728f5*/
          goto LABEL_168; /*0x1008728f5*/
        if ( *v56 != 1869903201 ) /*0x100872901*/
        {
          if ( *v56 != 1701736302 ) /*0x10087290d*/
            goto LABEL_168; /*0x10087290d*/
          v111.i64[0] = 0; /*0x100872913*/
          v111.i64[2] = 0; /*0x10087291e*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_choicestop_sequences", 11); /*0x100872929*/
          v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872938*/
          if ( !v58 ) /*0x100872940*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10087356a*/
          *v58 = 1701869940; /*0x100872949*/
          v114 = 4; /*0x10087294f*/
          v115 = v58; /*0x10087295a*/
          *(_QWORD *)&v116 = 4; /*0x100872961*/
          serde_json::value::to_value::h29e3c39dc75a9151(&v122, &off_10196CDE0); /*0x100872977*/
          if ( v122.i8[0] == 6 ) /*0x100872980*/
          {
            v117.i64[0] = v122.i64[1]; /*0x1008734a3*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008734cb*/
              "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
              43,
              &v117,
              &off_10196D480,
              &off_10196CDF0);
          }
          v117 = v122; /*0x100872995*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x1008729cb*/
            &v122,
            &v111,
            &v114,
            &v117);
          if ( v122.i8[0] != 6 ) /*0x1008729d4*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v122); /*0x1008729da*/
          v59 = v111.i64[2]; /*0x1008729df*/
          v60 = v111.i128[0]; /*0x1008729ed*/
          goto LABEL_167; /*0x1008729f4*/
        }
        *(_QWORD *)&v106 = 0; /*0x100872be7*/
        v107 = 0; /*0x100872bf2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_choicestop_sequences", 11); /*0x100872bfd*/
        v68 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872c0c*/
        if ( !v68 ) /*0x100872c14*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100873537*/
        *v68 = 1701869940; /*0x100872c1d*/
        v108 = 4; /*0x100872c23*/
        v109 = v68; /*0x100872c2e*/
        v110 = 4; /*0x100872c35*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100872c40*/
        v69 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872c4f*/
        if ( !v69 ) /*0x100872c57*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100873559*/
        *v69 = 1869903201; /*0x100872c5d*/
        v121.i8[0] = 3; /*0x100872c63*/
        v121.i64[1] = 4; /*0x100872c67*/
        v121.i64[2] = (__int64)v69; /*0x100872c6f*/
        v121.i64[3] = 4; /*0x100872c73*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v106, &v108); /*0x100872c90*/
        if ( v117.i64[0] == 0x8000000000000000LL ) /*0x100872ca6*/
        {
          v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x100872ccf*/
          v70 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x100872cd6*/
          v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x100872cdf*/
          v114 = v70; /*0x100872ce6*/
          *(__m256i *)(v117.i64[1] + 32 * v117.i64[3]) = v121; /*0x100872cfa*/
          if ( (_BYTE)v114 != 6 ) /*0x100872d17*/
            goto LABEL_164; /*0x100872d17*/
LABEL_166:
          v59 = v107; /*0x1008732b3*/
          v60 = v106; /*0x1008732c1*/
LABEL_167:
          *(_OWORD *)&v101[7] = v60; /*0x1008732c8*/
          *(_QWORD *)&v101[23] = v59; /*0x1008732d6*/
          v122.i8[0] = 5; /*0x1008732dd*/
          *(__int128 *)((char *)v122.i128 + 1) = *(_OWORD *)v101; /*0x1008732ef*/
          *(__int64 *)((char *)&v122.i64[2] + 1) = *(_QWORD *)&v101[16]; /*0x1008732fe*/
          v122.i64[3] = v59; /*0x100873309*/
          v87 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100873325*/
                             "tool_choicestop_sequences",
                             0xBu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v87); /*0x10087332b*/
          *v87 = v122; /*0x10087333c*/
          goto LABEL_168; /*0x10087333c*/
        }
LABEL_165:
        v125 = v120; /*0x100873223*/
        v124 = v119; /*0x100873235*/
        v123 = v118; /*0x100873240*/
        v122 = v117; /*0x100873256*/
        v111 = v121; /*0x10087327f*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1008732ae*/
          &v114,
          &v122,
          &v111);
        goto LABEL_166; /*0x1008732ae*/
      }
      if ( *(_QWORD *)v56 != 0x6465726975716572LL ) /*0x100872a97*/
        goto LABEL_168; /*0x100872a97*/
      *(_QWORD *)&v106 = 0; /*0x100872a9d*/
      v107 = 0; /*0x100872aa8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("tool_choicestop_sequences", 11); /*0x100872ab3*/
      v65 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872ac2*/
      if ( !v65 ) /*0x100872aca*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100873526*/
      *v65 = 1701869940; /*0x100872ad3*/
      v108 = 4; /*0x100872ad9*/
      v109 = v65; /*0x100872ae4*/
      v110 = 4; /*0x100872aeb*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100872af6*/
      v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x100872b05*/
      if ( !v66 ) /*0x100872b0d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3); /*0x100873548*/
      *(_BYTE *)(v66 + 2) = 121; /*0x100872b13*/
      *(_WORD *)v66 = 28257; /*0x100872b17*/
      v121.i8[0] = 3; /*0x100872b1c*/
      v121.i64[1] = 3; /*0x100872b20*/
      v121.i64[2] = v66; /*0x100872b28*/
      v121.i64[3] = 3; /*0x100872b2c*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v106, &v108); /*0x100872b49*/
      if ( v117.i64[0] != 0x8000000000000000LL ) /*0x100872b5f*/
        goto LABEL_165; /*0x100872b5f*/
      v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x100872b88*/
      v67 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x100872b8f*/
      v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x100872b98*/
      v114 = v67; /*0x100872b9f*/
      *(__m256i *)(v117.i64[1] + 32 * v117.i64[3]) = v121; /*0x100872bb3*/
      if ( (_BYTE)v114 == 6 ) /*0x100872bd0*/
        goto LABEL_166; /*0x100872bd0*/
LABEL_164:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x100873212*/
      goto LABEL_166; /*0x10087321e*/
    }
    v61 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674A90, 8, v54); /*0x100872a08*/
    if ( v61 ) /*0x100872a10*/
    {
      v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v61); /*0x100872a25*/
      if ( v62 ) /*0x100872a2d*/
      {
        if ( *(_BYTE *)v62 == 3 ) /*0x100872a36*/
        {
          v63 = *(__int64 **)(v62 + 16); /*0x100872a3c*/
          v64 = *(_QWORD *)(v62 + 24); /*0x100872a40*/
          if ( v64 == 18 ) /*0x100872a48*/
          {
            v71 = _mm_or_si128( /*0x100872d4c*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*((unsigned __int16 *)v63 + 8)), (__m128i)xmmword_1015E35E0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v63), (__m128i)xmmword_1015E35D0));
            if ( _mm_testz_si128(v71, v71) ) /*0x100872d50*/
            {
              v63 = &anon_10420c9971c21f44d230d15b39fb3fec_363; /*0x100872d57*/
              v64 = 10; /*0x100872d5e*/
              goto LABEL_146; /*0x100872d64*/
            }
          }
          else
          {
            if ( v64 == 10 ) /*0x100872a52*/
            {
              if ( !(*v63 ^ 0x726165735F626577LL | *((unsigned __int16 *)v63 + 4) ^ 0x6863LL) ) /*0x100872a71*/
                v63 = &anon_10420c9971c21f44d230d15b39fb3fec_363; /*0x100872a7b*/
              v64 = 10; /*0x100872a7f*/
              goto LABEL_146; /*0x100872a85*/
            }
            if ( (unsigned __int64)v64 <= 0xA ) /*0x100872d66*/
              goto LABEL_146; /*0x100872d66*/
          }
          v72 = 0x7765625F73656172LL; /*0x100872d68*/
          v73 = _byteswap_uint64(*v63); /*0x100872d75*/
          if ( v73 != 0x7765625F73656172LL /*0x100872d93*/
            || (v72 = 0x5F7365617263685FLL,
                v73 = _byteswap_uint64(*(__int64 *)((char *)v63 + 3)),
                v74 = 0,
                v73 != 0x5F7365617263685FLL) )
          {
            v74 = 2 * (v72 >= v73) - 1; /*0x100872d9d*/
          }
          if ( !v74 ) /*0x100872da8*/
          {
            v64 = 10; /*0x100872da8*/
            v63 = &anon_10420c9971c21f44d230d15b39fb3fec_363; /*0x100872db3*/
          }
LABEL_146:
          *(_QWORD *)&v106 = 0; /*0x100872db7*/
          v107 = 0; /*0x100872dc2*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4); /*0x100872dcd*/
          v75 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872ddc*/
          if ( !v75 ) /*0x100872de4*/
            goto LABEL_183; /*0x100872de4*/
          *v75 = 1701869940; /*0x100872ded*/
          v108 = 4; /*0x100872df3*/
          v109 = v75; /*0x100872dfe*/
          v110 = 4; /*0x100872e05*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100872e10*/
          v76 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872e1f*/
          if ( !v76 ) /*0x100872e27*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100873515*/
          *v76 = 1819242356; /*0x100872e2d*/
          v121.i8[0] = 3; /*0x100872e33*/
          v121.i64[1] = 4; /*0x100872e37*/
          v121.i64[2] = (__int64)v76; /*0x100872e3f*/
          v121.i64[3] = 4; /*0x100872e43*/
          v77 = &v117; /*0x100872e4b*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v106, &v108); /*0x100872e60*/
          if ( v117.i64[0] == 0x8000000000000000LL ) /*0x100872e76*/
          {
            v78 = v117.i64[1]; /*0x100872e7c*/
            v79 = 32 * v117.i64[3]; /*0x100872e8a*/
            v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x100872e9f*/
            v80 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x100872ea6*/
            v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x100872eaf*/
            v114 = v80; /*0x100872eb6*/
            *(_OWORD *)(v117.i64[1] + v79 + 16) = v121.i128[1]; /*0x100872eca*/
            v81 = (__m256i *)v121.i64[1]; /*0x100872ed3*/
            *(_OWORD *)(v78 + v79) = v121.i128[0]; /*0x100872edc*/
            if ( (_BYTE)v114 != 6 ) /*0x100872ee7*/
            {
              v77 = (__m256i *)&v114; /*0x100872eed*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x100872ef4*/
            }
          }
          else
          {
            v125 = v120; /*0x100872f05*/
            v124 = v119; /*0x100872f10*/
            v123 = v118; /*0x100872f1b*/
            v122 = v117; /*0x100872f31*/
            v111 = v121; /*0x100872f5a*/
            v77 = (__m256i *)&v114; /*0x100872f77*/
            v81 = &v122; /*0x100872f7e*/
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100872f89*/
              &v114,
              &v122,
              &v111);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v81); /*0x100872f8e*/
          v82 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100872f9d*/
          if ( !v82 ) /*0x100872fa5*/
LABEL_183:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100873504*/
          *v82 = 1701667182; /*0x100872fae*/
          v108 = 4; /*0x100872fb4*/
          v109 = v82; /*0x100872fbf*/
          v110 = 4; /*0x100872fc6*/
          if ( v64 < 0 ) /*0x100872fd4*/
          {
            v83 = 0; /*0x100872fd6*/
            goto LABEL_155; /*0x100872fd6*/
          }
          if ( v64 ) /*0x100872fe9*/
          {
            v113 = v63; /*0x100872fef*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100872ff6*/
            v83 = 1; /*0x100872ffb*/
            v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v64, 1); /*0x100873009*/
            if ( !v84 ) /*0x100873011*/
LABEL_155:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v83, v64); /*0x100872fd9*/
            v85 = v84; /*0x100873013*/
            v63 = (__int64 *)v113; /*0x100873016*/
          }
          else
          {
            v85 = 1; /*0x10087314c*/
          }
          memcpy((void *)v85, v63, v64); /*0x10087315b*/
          v121.i8[0] = 3; /*0x100873160*/
          v121.i64[1] = v64; /*0x100873164*/
          v121.i64[2] = v85; /*0x100873168*/
          v121.i64[3] = v64; /*0x10087316c*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v117, &v106, &v108); /*0x100873185*/
          if ( v117.i64[0] != 0x8000000000000000LL ) /*0x10087319b*/
            goto LABEL_165; /*0x10087319b*/
          v116 = *(_OWORD *)(v117.i64[1] + 32 * v117.i64[3] + 16); /*0x1008731c4*/
          v86 = *(_QWORD *)(v117.i64[1] + 32 * v117.i64[3]); /*0x1008731cb*/
          v115 = *(_DWORD **)(v117.i64[1] + 32 * v117.i64[3] + 8); /*0x1008731d4*/
          v114 = v86; /*0x1008731db*/
          *(__m256i *)(v117.i64[1] + 32 * v117.i64[3]) = v121; /*0x1008731ef*/
          if ( (_BYTE)v114 == 6 ) /*0x10087320c*/
            goto LABEL_166; /*0x10087320c*/
          goto LABEL_164; /*0x10087320c*/
        }
      }
    }
  }
LABEL_168:
  v88 = v96; /*0x10087334f*/
  v96[3] = v105; /*0x10087335d*/
  v88[2] = v104; /*0x100873368*/
  v89 = v102; /*0x10087336c*/
  v88[1] = (__int64)v103; /*0x10087337a*/
  *v88 = v89; /*0x10087337e*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v95); /*0x100873388*/
  if ( __n ) /*0x100873397*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1); /*0x1008733a5*/
  v90 = v98; /*0x1008733aa*/
  for ( i = v99 + 1; i != 1; --i ) /*0x1008733b8*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v90); /*0x1008733cd*/
    v90 += 32; /*0x1008733d2*/
  }
  if ( v97 ) /*0x1008733e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, 32 * v97, 8); /*0x1008733f3*/
  return v96; /*0x1008733ff*/
}