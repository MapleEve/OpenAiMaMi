// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream10role_chunk @ 0x100aa05b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::role_chunk::h2e72a2692fdff48c(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __m256i *v4; // rax
  signed __int64 v5; // r12
  __int64 v6; // r14
  const void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  __m256i *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m256i *v15; // rsi
  __int64 v16; // rax
  void *v17; // rax
  __m256i *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __m256i *v23; // rsi
  __int64 v24; // rax
  signed __int64 v25; // r12
  __int64 v26; // r13
  const void *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rbx
  __m256i *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __m256i *v35; // rsi
  _DWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // rax
  __m256i *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __m256i *v46; // rsi
  __int64 v47; // rax
  _DWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __m256i *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __m256i *v59; // rsi
  __m256i *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  _QWORD v70[3]; // [rsp+18h] [rbp-1D8h] BYREF
  _QWORD v71[3]; // [rsp+30h] [rbp-1C0h] BYREF
  _QWORD v72[3]; // [rsp+48h] [rbp-1A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-190h]
  __int64 v74; // [rsp+68h] [rbp-188h]
  _QWORD v75[2]; // [rsp+70h] [rbp-180h] BYREF
  __int64 v76; // [rsp+80h] [rbp-170h]
  __int128 v77; // [rsp+88h] [rbp-168h] BYREF
  __int64 v78; // [rsp+98h] [rbp-158h]
  __int64 v79; // [rsp+A0h] [rbp-150h]
  __int64 v80; // [rsp+A8h] [rbp-148h]
  __int64 v81; // [rsp+B0h] [rbp-140h]
  __int64 v82; // [rsp+B8h] [rbp-138h]
  __int128 v83; // [rsp+C0h] [rbp-130h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-120h]
  __int64 v85; // [rsp+D8h] [rbp-118h] BYREF
  __m256i *v86; // [rsp+E0h] [rbp-110h]
  __int64 v87; // [rsp+E8h] [rbp-108h]
  __int64 v88; // [rsp+F0h] [rbp-100h]
  __int64 v89; // [rsp+F8h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+100h] [rbp-F0h]
  __int64 v91; // [rsp+108h] [rbp-E8h]
  __int64 v92; // [rsp+110h] [rbp-E0h]
  __m256i v93; // [rsp+118h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+138h] [rbp-B8h]
  __int64 v95; // [rsp+140h] [rbp-B0h]
  __int64 v96; // [rsp+148h] [rbp-A8h]
  __m256i v97; // [rsp+150h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+170h] [rbp-80h]
  __int64 v99; // [rsp+178h] [rbp-78h]
  __int64 v100; // [rsp+180h] [rbp-70h]
  __int64 v101; // [rsp+188h] [rbp-68h] BYREF
  __int64 v102; // [rsp+190h] [rbp-60h]
  __int64 v103; // [rsp+198h] [rbp-58h]
  __int64 v104; // [rsp+1A0h] [rbp-50h]
  __int64 v105; // [rsp+1A8h] [rbp-48h]
  __int64 v106; // [rsp+1B0h] [rbp-40h]
  __int64 v107; // [rsp+1B8h] [rbp-38h]
  __int64 v108; // [rsp+1C0h] [rbp-30h]

  v2 = a2; /*0x100aa05c4*/
  v73 = a1; /*0x100aa05c7*/
  *(_QWORD *)&v83 = 0; /*0x100aa05ce*/
  v84 = 0; /*0x100aa05d9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aa05e4*/
  v3 = 2; /*0x100aa05e9*/
  v4 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100aa05f9*/
  if ( !v4 ) /*0x100aa0601*/
    goto LABEL_60; /*0x100aa0601*/
  v4->i16[0] = 25705; /*0x100aa060a*/
  v85 = 2; /*0x100aa060f*/
  v86 = v4; /*0x100aa061a*/
  v87 = 2; /*0x100aa0621*/
  v5 = *(_QWORD *)(a2 + 40); /*0x100aa062c*/
  if ( v5 < 0 ) /*0x100aa0633*/
  {
    v6 = 0; /*0x100aa0635*/
    goto LABEL_4; /*0x100aa0635*/
  }
  v7 = *(const void **)(a2 + 32); /*0x100aa0648*/
  if ( v5 ) /*0x100aa064c*/
  {
    v74 = a2; /*0x100aa064e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100aa0655*/
    v6 = 1; /*0x100aa065a*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100aa0668*/
    if ( !v8 ) /*0x100aa0670*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100aa0638*/
    v9 = v8; /*0x100aa0672*/
    v2 = v74; /*0x100aa0675*/
  }
  else
  {
    v9 = 1; /*0x100aa067e*/
  }
  memcpy((void *)v9, v7, v5); /*0x100aa068c*/
  LOBYTE(v105) = 3; /*0x100aa0691*/
  v106 = v5; /*0x100aa0695*/
  v107 = v9; /*0x100aa0699*/
  v108 = v5; /*0x100aa069d*/
  v10 = &v97; /*0x100aa06a1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v83, &v85); /*0x100aa06b6*/
  if ( __OFSUB__(0, v97.i64[0]) ) /*0x100aa06bd*/
  {
    v11 = v97.i64[1]; /*0x100aa06c6*/
    v12 = 32 * v97.i64[3]; /*0x100aa06d4*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa06dd*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa06e6*/
    v13 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa06ea*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa06f3*/
    v101 = v13; /*0x100aa06f7*/
    *(_QWORD *)(v97.i64[1] + v12 + 24) = v108; /*0x100aa06ff*/
    *(_QWORD *)(v11 + v12 + 16) = v107; /*0x100aa0708*/
    v14 = v105; /*0x100aa070d*/
    v15 = (__m256i *)v106; /*0x100aa0711*/
    *(_QWORD *)(v11 + v12 + 8) = v106; /*0x100aa0715*/
    *(_QWORD *)(v11 + v12) = v14; /*0x100aa071a*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa0722*/
    {
      v10 = (__m256i *)&v101; /*0x100aa0728*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa072c*/
    }
  }
  else
  {
    v96 = v100; /*0x100aa073a*/
    v95 = v99; /*0x100aa0745*/
    v94 = v98; /*0x100aa0750*/
    v93 = v97; /*0x100aa076c*/
    v92 = v108; /*0x100aa0793*/
    v91 = v107; /*0x100aa079e*/
    v90 = v106; /*0x100aa07ad*/
    v89 = v105; /*0x100aa07b4*/
    v10 = (__m256i *)&v101; /*0x100aa07bb*/
    v15 = &v93; /*0x100aa07bf*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa07cd*/
      &v101,
      &v93,
      &v89);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v15); /*0x100aa07d2*/
  v3 = 6; /*0x100aa07d7*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100aa07e7*/
  if ( !v16 ) /*0x100aa07ef*/
    goto LABEL_60; /*0x100aa07ef*/
  *(_WORD *)(v16 + 4) = 29795; /*0x100aa07f8*/
  *(_DWORD *)v16 = 1701470831; /*0x100aa07fe*/
  v85 = 6; /*0x100aa0804*/
  v86 = (__m256i *)v16; /*0x100aa080f*/
  v87 = 6; /*0x100aa0816*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100aa0821*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100aa0830*/
  if ( !v17 ) /*0x100aa0838*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100aa1556*/
  qmemcpy(v17, "chat.completion.chunk", 21); /*0x100aa0864*/
  LOBYTE(v105) = 3; /*0x100aa0867*/
  v106 = 21; /*0x100aa086b*/
  v107 = (__int64)v17; /*0x100aa0873*/
  v108 = 21; /*0x100aa0877*/
  v18 = &v97; /*0x100aa087f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v83, &v85); /*0x100aa0894*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa08aa*/
  {
    v19 = v97.i64[1]; /*0x100aa08ac*/
    v20 = 32 * v97.i64[3]; /*0x100aa08ba*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa08c3*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa08cc*/
    v21 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa08d0*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa08d9*/
    v101 = v21; /*0x100aa08dd*/
    *(_QWORD *)(v97.i64[1] + v20 + 24) = v108; /*0x100aa08e5*/
    *(_QWORD *)(v19 + v20 + 16) = v107; /*0x100aa08ee*/
    v22 = v105; /*0x100aa08f3*/
    v23 = (__m256i *)v106; /*0x100aa08f7*/
    *(_QWORD *)(v19 + v20 + 8) = v106; /*0x100aa08fb*/
    *(_QWORD *)(v19 + v20) = v22; /*0x100aa0900*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa0908*/
    {
      v18 = (__m256i *)&v101; /*0x100aa090e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa0912*/
    }
  }
  else
  {
    v96 = v100; /*0x100aa0920*/
    v95 = v99; /*0x100aa092b*/
    v94 = v98; /*0x100aa0936*/
    v93 = v97; /*0x100aa0952*/
    v92 = v108; /*0x100aa0979*/
    v91 = v107; /*0x100aa0984*/
    v90 = v106; /*0x100aa0993*/
    v89 = v105; /*0x100aa099a*/
    v18 = (__m256i *)&v101; /*0x100aa09a1*/
    v23 = &v93; /*0x100aa09a5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa09b3*/
      &v101,
      &v93,
      &v89);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v23); /*0x100aa09b8*/
  v3 = 5; /*0x100aa09bd*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa09cd*/
  if ( !v24 ) /*0x100aa09d5*/
    goto LABEL_60; /*0x100aa09d5*/
  *(_BYTE *)(v24 + 4) = 108; /*0x100aa09de*/
  *(_DWORD *)v24 = 1701080941; /*0x100aa09e2*/
  v85 = 5; /*0x100aa09e8*/
  v86 = (__m256i *)v24; /*0x100aa09f3*/
  v87 = 5; /*0x100aa09fa*/
  v25 = *(_QWORD *)(v2 + 16); /*0x100aa0a05*/
  if ( v25 < 0 ) /*0x100aa0a0c*/
  {
    v26 = 0; /*0x100aa0a0e*/
    goto LABEL_22; /*0x100aa0a0e*/
  }
  v27 = *(const void **)(v2 + 8); /*0x100aa0a21*/
  if ( v25 ) /*0x100aa0a25*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aa0a27*/
    v26 = 1; /*0x100aa0a2c*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x100aa0a3a*/
    if ( !v28 ) /*0x100aa0a42*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x100aa0a11*/
    v29 = v28; /*0x100aa0a44*/
  }
  else
  {
    v29 = 1; /*0x100aa0a49*/
  }
  memcpy((void *)v29, v27, v25); /*0x100aa0a57*/
  LOBYTE(v105) = 3; /*0x100aa0a5c*/
  v106 = v25; /*0x100aa0a60*/
  v107 = v29; /*0x100aa0a64*/
  v108 = v25; /*0x100aa0a68*/
  v30 = &v97; /*0x100aa0a6c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v83, &v85); /*0x100aa0a81*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa0a97*/
  {
    v31 = v97.i64[1]; /*0x100aa0a99*/
    v32 = 32 * v97.i64[3]; /*0x100aa0aa7*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa0ab0*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa0ab9*/
    v33 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa0abd*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa0ac6*/
    v101 = v33; /*0x100aa0aca*/
    *(_QWORD *)(v97.i64[1] + v32 + 24) = v108; /*0x100aa0ad2*/
    *(_QWORD *)(v31 + v32 + 16) = v107; /*0x100aa0adb*/
    v34 = v105; /*0x100aa0ae0*/
    v35 = (__m256i *)v106; /*0x100aa0ae4*/
    *(_QWORD *)(v31 + v32 + 8) = v106; /*0x100aa0ae8*/
    *(_QWORD *)(v31 + v32) = v34; /*0x100aa0aed*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa0af5*/
    {
      v30 = (__m256i *)&v101; /*0x100aa0afb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa0aff*/
    }
  }
  else
  {
    v96 = v100; /*0x100aa0b0d*/
    v95 = v99; /*0x100aa0b18*/
    v94 = v98; /*0x100aa0b23*/
    v93 = v97; /*0x100aa0b3f*/
    v92 = v108; /*0x100aa0b66*/
    v91 = v107; /*0x100aa0b71*/
    v90 = v106; /*0x100aa0b80*/
    v89 = v105; /*0x100aa0b87*/
    v30 = (__m256i *)&v101; /*0x100aa0b8e*/
    v35 = &v93; /*0x100aa0b92*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa0ba0*/
      &v101,
      &v93,
      &v89);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v35); /*0x100aa0ba5*/
  v3 = 7; /*0x100aa0baa*/
  v36 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100aa0bba*/
  if ( !v36 ) /*0x100aa0bc2*/
LABEL_60:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x100aa1536*/
  *(_DWORD *)((char *)v36 + 3) = 1936024425; /*0x100aa0bcb*/
  *v36 = 1768908899; /*0x100aa0bd2*/
  v72[0] = 7; /*0x100aa0bd8*/
  v72[1] = v36; /*0x100aa0be3*/
  v72[2] = 7; /*0x100aa0bea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100aa0bf5*/
  v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100aa0c04*/
  if ( !v37 ) /*0x100aa0c0c*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100aa1527*/
  v38 = v37; /*0x100aa0c12*/
  *(_QWORD *)&v77 = 0; /*0x100aa0c15*/
  v78 = 0; /*0x100aa0c20*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x100aa0c2b*/
  v39 = 5; /*0x100aa0c30*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa0c40*/
  if ( !v40 ) /*0x100aa0c48*/
    goto LABEL_61; /*0x100aa0c48*/
  *(_BYTE *)(v40 + 4) = 120; /*0x100aa0c4e*/
  *(_DWORD *)v40 = 1701080681; /*0x100aa0c52*/
  v85 = 5; /*0x100aa0c58*/
  v86 = (__m256i *)v40; /*0x100aa0c63*/
  v87 = 5; /*0x100aa0c6a*/
  LOBYTE(v105) = 2; /*0x100aa0c75*/
  v106 = 0; /*0x100aa0c79*/
  v107 = 0; /*0x100aa0c81*/
  v41 = &v97; /*0x100aa0c89*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v77, &v85); /*0x100aa0c9e*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa0caa*/
  {
    v42 = v97.i64[1]; /*0x100aa0cac*/
    v43 = 32 * v97.i64[3]; /*0x100aa0cba*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa0cc3*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa0ccc*/
    v44 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa0cd0*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa0cd9*/
    v101 = v44; /*0x100aa0cdd*/
    *(_QWORD *)(v97.i64[1] + v43 + 24) = v108; /*0x100aa0ce5*/
    *(_QWORD *)(v42 + v43 + 16) = v107; /*0x100aa0cee*/
    v45 = v105; /*0x100aa0cf3*/
    v46 = (__m256i *)v106; /*0x100aa0cf7*/
    *(_QWORD *)(v42 + v43 + 8) = v106; /*0x100aa0cfb*/
    *(_QWORD *)(v42 + v43) = v45; /*0x100aa0d00*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa0d08*/
    {
      v41 = (__m256i *)&v101; /*0x100aa0d0e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa0d12*/
    }
  }
  else
  {
    v96 = v100; /*0x100aa0d20*/
    v95 = v99; /*0x100aa0d2b*/
    v94 = v98; /*0x100aa0d36*/
    v93 = v97; /*0x100aa0d52*/
    v92 = v108; /*0x100aa0d79*/
    v91 = v107; /*0x100aa0d84*/
    v90 = v106; /*0x100aa0d93*/
    v89 = v105; /*0x100aa0d9a*/
    v41 = (__m256i *)&v101; /*0x100aa0da1*/
    v46 = &v93; /*0x100aa0da5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa0db3*/
      &v101,
      &v93,
      &v89);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v46); /*0x100aa0db8*/
  v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa0dc7*/
  if ( !v47 ) /*0x100aa0dcf*/
    goto LABEL_61; /*0x100aa0dcf*/
  *(_BYTE *)(v47 + 4) = 97; /*0x100aa0dd8*/
  *(_DWORD *)v47 = 1953260900; /*0x100aa0ddc*/
  v71[0] = 5; /*0x100aa0de2*/
  v71[1] = v47; /*0x100aa0ded*/
  v71[2] = 5; /*0x100aa0df4*/
  v75[0] = 0; /*0x100aa0dff*/
  v76 = 0; /*0x100aa0e0a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aa0e15*/
  v48 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aa0e24*/
  if ( !v48 ) /*0x100aa0e2c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100aa1567*/
  *v48 = 1701605234; /*0x100aa0e35*/
  v70[0] = 4; /*0x100aa0e3b*/
  v70[1] = v48; /*0x100aa0e46*/
  v70[2] = 4; /*0x100aa0e4d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aa0e58*/
  v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100aa0e67*/
  if ( !v49 ) /*0x100aa0e6f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100aa1578*/
  *(_QWORD *)v49 = 0x6E61747369737361LL; /*0x100aa0e7f*/
  *(_BYTE *)(v49 + 8) = 116; /*0x100aa0e82*/
  LOBYTE(v105) = 3; /*0x100aa0e86*/
  v106 = 9; /*0x100aa0e8a*/
  v107 = v49; /*0x100aa0e92*/
  v108 = 9; /*0x100aa0e96*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, v75, v70); /*0x100aa0eb3*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa0ebf*/
  {
    v50 = v97.i64[1]; /*0x100aa0ec1*/
    v51 = 32 * v97.i64[3]; /*0x100aa0ecf*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa0ed8*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa0ee1*/
    v52 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa0ee5*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa0eee*/
    v101 = v52; /*0x100aa0ef2*/
    *(_QWORD *)(v97.i64[1] + v51 + 24) = v108; /*0x100aa0efa*/
    *(_QWORD *)(v50 + v51 + 16) = v107; /*0x100aa0f03*/
    v53 = v105; /*0x100aa0f08*/
    *(_QWORD *)(v50 + v51 + 8) = v106; /*0x100aa0f10*/
    *(_QWORD *)(v50 + v51) = v53; /*0x100aa0f15*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa0f1d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa0f27*/
  }
  else
  {
    v96 = v100; /*0x100aa0f35*/
    v95 = v99; /*0x100aa0f40*/
    v94 = v98; /*0x100aa0f4b*/
    v93 = v97; /*0x100aa0f67*/
    v92 = v108; /*0x100aa0f8e*/
    v91 = v107; /*0x100aa0f99*/
    v90 = v106; /*0x100aa0fa8*/
    v89 = v105; /*0x100aa0faf*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa0fc8*/
      &v101,
      &v93,
      &v89);
  }
  v86 = (__m256i *)v75[0]; /*0x100aa0fdb*/
  v87 = v75[1]; /*0x100aa0fe2*/
  v88 = v76; /*0x100aa0ff0*/
  LOBYTE(v85) = 5; /*0x100aa0ff7*/
  v54 = &v97; /*0x100aa0ffe*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v77, v71); /*0x100aa1013*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa101f*/
  {
    v55 = v97.i64[1]; /*0x100aa1021*/
    v56 = 32 * v97.i64[3]; /*0x100aa102f*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa1038*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa1041*/
    v57 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa1045*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa104e*/
    v101 = v57; /*0x100aa1052*/
    *(_QWORD *)(v97.i64[1] + v56 + 24) = v88; /*0x100aa105d*/
    *(_QWORD *)(v55 + v56 + 16) = v87; /*0x100aa1069*/
    v58 = v85; /*0x100aa106e*/
    v59 = v86; /*0x100aa1075*/
    *(_QWORD *)(v55 + v56 + 8) = v86; /*0x100aa107c*/
    *(_QWORD *)(v55 + v56) = v58; /*0x100aa1081*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa1089*/
    {
      v54 = (__m256i *)&v101; /*0x100aa108f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa1093*/
    }
  }
  else
  {
    v96 = v100; /*0x100aa10a1*/
    v95 = v99; /*0x100aa10ac*/
    v94 = v98; /*0x100aa10b7*/
    v93 = v97; /*0x100aa10d3*/
    v92 = v88; /*0x100aa10fd*/
    v91 = v87; /*0x100aa110b*/
    v90 = (__int64)v86; /*0x100aa1120*/
    v89 = v85; /*0x100aa1127*/
    v54 = (__m256i *)&v101; /*0x100aa112e*/
    v59 = &v93; /*0x100aa1132*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa1140*/
      &v101,
      &v93,
      &v89);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v59); /*0x100aa1145*/
  v39 = 13; /*0x100aa114a*/
  v60 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aa115a*/
  if ( !v60 ) /*0x100aa1162*/
LABEL_61:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x100aa1545*/
  qmemcpy(v60, "finish_reason", 13); /*0x100aa1180*/
  v85 = 13; /*0x100aa1183*/
  v86 = v60; /*0x100aa118e*/
  v87 = 13; /*0x100aa1195*/
  LOBYTE(v105) = 0; /*0x100aa11a0*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v77, &v85); /*0x100aa11b9*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa11c5*/
  {
    v61 = v97.i64[1]; /*0x100aa11c7*/
    v62 = 32 * v97.i64[3]; /*0x100aa11d5*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa11de*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa11e7*/
    v63 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa11eb*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa11f4*/
    v101 = v63; /*0x100aa11f8*/
    *(_QWORD *)(v97.i64[1] + v62 + 24) = v108; /*0x100aa1200*/
    *(_QWORD *)(v61 + v62 + 16) = v107; /*0x100aa1209*/
    v64 = v105; /*0x100aa120e*/
    *(_QWORD *)(v61 + v62 + 8) = v106; /*0x100aa1216*/
    *(_QWORD *)(v61 + v62) = v64; /*0x100aa121b*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa1223*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa122d*/
  }
  else
  {
    v96 = v100; /*0x100aa123b*/
    v95 = v99; /*0x100aa1246*/
    v94 = v98; /*0x100aa1251*/
    v93 = v97; /*0x100aa126d*/
    v92 = v108; /*0x100aa1294*/
    v91 = v107; /*0x100aa129f*/
    v90 = v106; /*0x100aa12ae*/
    v89 = v105; /*0x100aa12b5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa12ce*/
      &v101,
      &v93,
      &v89);
  }
  *(__int128 *)((char *)v93.i128 + 7) = v77; /*0x100aa12e8*/
  *(__int64 *)((char *)&v93.i64[2] + 7) = v78; /*0x100aa12f6*/
  *(_BYTE *)v38 = 5; /*0x100aa12fd*/
  *(_QWORD *)(v38 + 24) = *(__int64 *)((char *)&v93.i64[2] + 7); /*0x100aa1308*/
  *(_QWORD *)(v38 + 17) = v93.i64[2]; /*0x100aa1313*/
  *(_OWORD *)(v38 + 1) = v93.i128[0]; /*0x100aa1329*/
  v80 = 1; /*0x100aa132d*/
  v81 = v38; /*0x100aa1338*/
  v82 = 1; /*0x100aa133f*/
  LOBYTE(v79) = 4; /*0x100aa134a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v97, &v83, v72); /*0x100aa1366*/
  if ( v97.i64[0] == 0x8000000000000000LL ) /*0x100aa1372*/
  {
    v65 = v97.i64[1]; /*0x100aa1374*/
    v66 = 32 * v97.i64[3]; /*0x100aa1382*/
    v104 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 24); /*0x100aa138b*/
    v103 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 16); /*0x100aa1394*/
    v67 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3]); /*0x100aa1398*/
    v102 = *(_QWORD *)(v97.i64[1] + 32 * v97.i64[3] + 8); /*0x100aa13a1*/
    v101 = v67; /*0x100aa13a5*/
    *(_QWORD *)(v97.i64[1] + v66 + 24) = v82; /*0x100aa13b0*/
    *(_QWORD *)(v65 + v66 + 16) = v81; /*0x100aa13bc*/
    v68 = v79; /*0x100aa13c1*/
    *(_QWORD *)(v65 + v66 + 8) = v80; /*0x100aa13cf*/
    *(_QWORD *)(v65 + v66) = v68; /*0x100aa13d4*/
    if ( (_BYTE)v101 != 6 ) /*0x100aa13dc*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v101); /*0x100aa13e6*/
  }
  else
  {
    v96 = v100; /*0x100aa13f4*/
    v95 = v99; /*0x100aa13ff*/
    v94 = v98; /*0x100aa140a*/
    v93 = v97; /*0x100aa1426*/
    v92 = v82; /*0x100aa1450*/
    v91 = v81; /*0x100aa145e*/
    v90 = v80; /*0x100aa1473*/
    v89 = v79; /*0x100aa147a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa1493*/
      &v101,
      &v93,
      &v89);
  }
  *(__int128 *)((char *)v93.i128 + 8) = v83; /*0x100aa14a6*/
  v93.i64[3] = v84; /*0x100aa14bb*/
  v93.i8[0] = 5; /*0x100aa14c2*/
  v97.i64[0] = (__int64)&v93; /*0x100aa14d0*/
  v97.i64[1] = (__int64)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce; /*0x100aa14de*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v73, &unk_1017C9F07, &v97); /*0x100aa14fa*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v93); /*0x100aa150b*/
}