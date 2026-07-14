// mac 1.1.8 behavioral OpenAiToAnthropic_emit_finish 0x10019c360 d=0
void __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_finish::h2227f8d0254bb617(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 *v7; // r12
  __int64 v8; // rbx
  _DWORD *v9; // rax
  void *v10; // rax
  _BYTE *v11; // rax
  void *v12; // r15
  size_t v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r12
  const __m128i *v16; // rax
  __int64 v17; // rcx
  __m128i si128; // xmm0
  __int64 v19; // rsi
  unsigned int *v20; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  size_t v24; // r13
  __int64 v25; // r15
  _DWORD *v26; // rax
  void *v27; // rax
  __int64 v28; // rax
  void *v29; // r15
  size_t v30; // r14
  __int64 v31; // r13
  __int64 v32; // rbx
  bool v33; // zf
  char *v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  int v37; // edx
  char *v38; // r15
  __int64 v39; // r12
  _DWORD *v40; // rax
  void *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  void *v44; // rax
  __int64 *v45; // rax
  __int64 *v46; // r13
  void *v47; // rax
  __int64 v48; // rax
  void *v49; // rax
  void *v50; // r12
  size_t v51; // r13
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // r14
  _DWORD *v55; // rax
  void *v56; // rax
  void *v57; // r12
  size_t v58; // rbx
  unsigned __int64 *v59; // rdx
  unsigned __int64 v60; // rax
  unsigned int *v61; // rax
  unsigned int *v62; // rcx
  __int64 v63; // rdx
  unsigned int *v64; // rdi
  unsigned int v65; // r8d
  unsigned int v66; // esi
  __int64 v67; // rdi
  unsigned __int64 v68; // rbx
  _QWORD v69[3]; // [rsp+8h] [rbp-188h] BYREF
  __int16 v70; // [rsp+20h] [rbp-170h]
  __int64 v71; // [rsp+28h] [rbp-168h]
  __int64 v72; // [rsp+30h] [rbp-160h] BYREF
  unsigned int *v73; // [rsp+38h] [rbp-158h]
  unsigned __int64 v74; // [rsp+40h] [rbp-150h]
  __int64 v75; // [rsp+48h] [rbp-148h]
  unsigned __int64 *v76; // [rsp+50h] [rbp-140h]
  __int64 v77; // [rsp+58h] [rbp-138h]
  __int64 v78; // [rsp+60h] [rbp-130h]
  __int64 v79; // [rsp+68h] [rbp-128h]
  unsigned int *v80; // [rsp+70h] [rbp-120h]
  unsigned __int16 *v81; // [rsp+78h] [rbp-118h] BYREF
  size_t v82; // [rsp+80h] [rbp-110h]
  __int64 v83; // [rsp+88h] [rbp-108h]
  __int64 v84; // [rsp+90h] [rbp-100h] BYREF
  _DWORD *v85; // [rsp+98h] [rbp-F8h]
  __int64 v86; // [rsp+A0h] [rbp-F0h]
  char **v87; // [rsp+A8h] [rbp-E8h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-E0h]
  __int64 *v89; // [rsp+B8h] [rbp-D8h]
  __int64 v90; // [rsp+C0h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+F8h] [rbp-98h]
  size_t v93; // [rsp+100h] [rbp-90h]
  char *v94; // [rsp+108h] [rbp-88h] BYREF
  size_t v95; // [rsp+110h] [rbp-80h]
  size_t v96; // [rsp+118h] [rbp-78h]
  __int64 v97; // [rsp+120h] [rbp-70h]
  size_t v98; // [rsp+128h] [rbp-68h] BYREF
  void *__src; // [rsp+130h] [rbp-60h]
  size_t __n; // [rsp+138h] [rbp-58h]
  size_t v101; // [rsp+148h] [rbp-48h] BYREF
  void *v102; // [rsp+150h] [rbp-40h]
  size_t v103; // [rsp+158h] [rbp-38h]
  __int64 v104; // [rsp+160h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 109) ) /*0x10019c374*/
  {
    *a1 = 0; /*0x10019c37a*/
    a1[1] = 1; /*0x10019c381*/
    a1[2] = 0; /*0x10019c389*/
    return; /*0x10019c391*/
  }
  v4 = a4; /*0x10019c396*/
  v76 = a1; /*0x10019c39f*/
  *(_BYTE *)(a2 + 109) = 1; /*0x10019c3a6*/
  v91 = 0; /*0x10019c3aa*/
  v92 = 1; /*0x10019c3b5*/
  v93 = 0; /*0x10019c3c0*/
  v33 = *(_BYTE *)(a2 + 48) == 0; /*0x10019c3cb*/
  v7 = (__int64 *)*(unsigned int *)(a2 + 52); /*0x10019c3cf*/
  *(_DWORD *)(a2 + 48) = 0; /*0x10019c3d3*/
  v78 = a4; /*0x10019c3da*/
  if ( !v33 )
  {
    v94 = nullptr; /*0x10019c3e7*/
    v96 = 0; /*0x10019c3f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c3fa*/
    v8 = 4; /*0x10019c3ff*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10019c40e*/
    if ( !v9 ) /*0x10019c416*/
      goto LABEL_95; /*0x10019c416*/
    *v9 = 1701869940; /*0x10019c41f*/
    v98 = 4; /*0x10019c425*/
    __src = v9; /*0x10019c42d*/
    __n = 4; /*0x10019c431*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c439*/
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x10019c448*/
    if ( !v10 ) /*0x10019c450*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x10019d2e3*/
    qmemcpy(v10, "content_block_stop", 18); /*0x10019c46e*/
    LOBYTE(v87) = 3; /*0x10019c477*/
    v88 = 18; /*0x10019c47e*/
    v89 = (__int64 *)v10; /*0x10019c489*/
    v90 = 18; /*0x10019c490*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019c4b1*/
      &v101,
      (unsigned __int16 **)&v94,
      (__int64)&v98,
      &v87);
    if ( (_BYTE)v101 != 6 ) /*0x10019c4ba*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019c4c0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c4c5*/
    v8 = 5; /*0x10019c4ca*/
    v11 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x10019c4d9*/
    if ( !v11 ) /*0x10019c4e1*/
LABEL_95:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x10019d27f*/
    v11[4] = 120; /*0x10019c4e7*/
    *(_DWORD *)v11 = 1701080681; /*0x10019c4eb*/
    v98 = 5; /*0x10019c4f1*/
    __src = v11; /*0x10019c4f9*/
    __n = 5; /*0x10019c4fd*/
    LOBYTE(v87) = 2; /*0x10019c505*/
    v88 = 0; /*0x10019c50c*/
    v89 = v7; /*0x10019c517*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019c53a*/
      &v101,
      (unsigned __int16 **)&v94,
      (__int64)&v98,
      &v87);
    if ( (_BYTE)v101 != 6 ) /*0x10019c543*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019c549*/
    v102 = v94; /*0x10019c559*/
    v103 = v95; /*0x10019c55d*/
    v104 = v96; /*0x10019c565*/
    LOBYTE(v101) = 5; /*0x10019c569*/
    v94 = "content_block_stopmessage_deltamessage_stop"; /*0x10019c574*/
    v95 = 18; /*0x10019c57b*/
    v84 = (__int64)&v101; /*0x10019c583*/
    v87 = &v94; /*0x10019c58a*/
    v88 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10019c598*/
    v89 = &v84; /*0x10019c5a6*/
    v90 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x10019c5b4*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      &v98,
      (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
      (unsigned __int64)&v87);
    v12 = __src; /*0x10019c5d2*/
    v13 = __n; /*0x10019c5d6*/
    if ( __n ) /*0x10019c5dd*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v91, 0, __n, 1, 1u); /*0x10019d218*/
      v14 = v92; /*0x10019d21d*/
      v15 = v93; /*0x10019d224*/
    }
    else
    {
      v14 = 1; /*0x10019c5e3*/
      v15 = 0; /*0x10019c5e8*/
    }
    memcpy((void *)(v15 + v14), v12, v13); /*0x10019c5f4*/
    v93 = v13 + v15; /*0x10019c5fc*/
    if ( v98 ) /*0x10019c60a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10019c614*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019c61d*/
    v4 = v78; /*0x10019c622*/
  }
  v16 = *(const __m128i **)(a2 + 56); /*0x10019c629*/
  v17 = (__int64)v16->i64 + *(_QWORD *)(a2 + 64) + 1; /*0x10019c631*/
  si128 = _mm_load_si128(v16); /*0x10019c636*/
  v19 = *(_QWORD *)(a2 + 80); /*0x10019c640*/
  v69[0] = *(_QWORD *)(a2 + 56); /*0x10019c644*/
  v69[1] = v16 + 1; /*0x10019c64f*/
  v69[2] = v17; /*0x10019c656*/
  v70 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10019c65d*/
  v71 = v19; /*0x10019c664*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd22e05381b9f3144( /*0x10019c679*/
    &v72,
    v69);
  v20 = v73; /*0x10019c67e*/
  v21 = v74; /*0x10019c685*/
  v80 = v73; /*0x10019c690*/
  if ( v74 < 2 ) /*0x10019c697*/
  {
LABEL_17:
    v22 = v72; /*0x10019c69d*/
    if ( !v21 ) /*0x10019c6a7*/
      goto LABEL_32; /*0x10019c6a7*/
    goto LABEL_18; /*0x10019c6a7*/
  }
  if ( v74 < 0x15 ) /*0x10019d152*/
  {
    v61 = &v73[v74]; /*0x10019d158*/
    v62 = v73 + 1; /*0x10019d15c*/
    v63 = 4; /*0x10019d160*/
    do /*0x10019d177*/
    {
      v65 = *(v62 - 1); /*0x10019d17d*/
      v66 = *v62; /*0x10019d181*/
      if ( *v62 < v65 ) /*0x10019d186*/
      {
        v67 = v63; /*0x10019d188*/
        do /*0x10019d1a1*/
        {
          *(unsigned int *)((char *)v20 + v67) = v65; /*0x10019d18b*/
          if ( v67 == 4 ) /*0x10019d193*/
          {
            v64 = v20; /*0x10019d167*/
            goto LABEL_83; /*0x10019d167*/
          }
          v65 = *(unsigned int *)((char *)v20 + v67 - 8); /*0x10019d195*/
          v67 -= 4; /*0x10019d19a*/
        }
        while ( v66 < v65 ); /*0x10019d1a1*/
        v64 = (unsigned int *)((char *)v20 + v67); /*0x10019d1a3*/
LABEL_83:
        *v64 = v66; /*0x10019d16a*/
      }
      ++v62; /*0x10019d16c*/
      v63 += 4; /*0x10019d170*/
    }
    while ( v62 != v61 ); /*0x10019d177*/
    goto LABEL_17; /*0x10019d177*/
  }
  v68 = v74; /*0x10019d2f4*/
  core::slice::sort::stable::driftsort_main::h3b1adbb0993cbbfb(v73, v74, &v87); /*0x10019d2fa*/
  v22 = v72; /*0x10019d2ff*/
  v20 = v80; /*0x10019d306*/
  v21 = v68; /*0x10019d30d*/
LABEL_18:
  v79 = v22; /*0x10019c6ad*/
  v77 = a3; /*0x10019c6b4*/
  v75 = 4 * v21; /*0x10019c6bf*/
  v23 = 0; /*0x10019c6c6*/
  do
  {
    v24 = v20[v23 / 4]; /*0x10019c6d0*/
    v81 = nullptr; /*0x10019c6d4*/
    v83 = 0; /*0x10019c6df*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c6ea*/
    v25 = 4; /*0x10019c6ef*/
    v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10019c6ff*/
    if ( !v26 ) /*0x10019c707*/
      goto LABEL_91; /*0x10019c707*/
    *v26 = 1701869940; /*0x10019c710*/
    v84 = 4; /*0x10019c716*/
    v85 = v26; /*0x10019c721*/
    v86 = 4; /*0x10019c728*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c733*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x10019c742*/
    if ( !v27 ) /*0x10019c74a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x10019d24c*/
    qmemcpy(v27, "content_block_stop", 18); /*0x10019c768*/
    LOBYTE(v101) = 3; /*0x10019c771*/
    v102 = (void *)18; /*0x10019c775*/
    v103 = (size_t)v27; /*0x10019c77d*/
    v104 = 18; /*0x10019c781*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019c79e*/
      &v98,
      &v81,
      (__int64)&v84,
      &v101);
    if ( (_BYTE)v98 != 6 ) /*0x10019c7a7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v98); /*0x10019c7ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019c7b1*/
    v25 = 5; /*0x10019c7b6*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x10019c7c6*/
    if ( !v28 ) /*0x10019c7ce*/
LABEL_91:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v25); /*0x10019d238*/
    *(_BYTE *)(v28 + 4) = 120; /*0x10019c7d4*/
    *(_DWORD *)v28 = 1701080681; /*0x10019c7d8*/
    v84 = 5; /*0x10019c7de*/
    v85 = (_DWORD *)v28; /*0x10019c7e9*/
    v86 = 5; /*0x10019c7f0*/
    LOBYTE(v101) = 2; /*0x10019c7fb*/
    v102 = nullptr; /*0x10019c7ff*/
    v103 = v24; /*0x10019c807*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019c820*/
      &v98,
      &v81,
      (__int64)&v84,
      &v101);
    if ( (_BYTE)v98 != 6 ) /*0x10019c829*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v98); /*0x10019c82e*/
    v97 = v83; /*0x10019c83e*/
    v96 = v82; /*0x10019c850*/
    v95 = (size_t)v81; /*0x10019c854*/
    LOBYTE(v94) = 5; /*0x10019c857*/
    v98 = (size_t)"content_block_stopmessage_deltamessage_stop"; /*0x10019c865*/
    __src = (void *)18; /*0x10019c869*/
    v84 = (__int64)&v94; /*0x10019c878*/
    v87 = (char **)&v98; /*0x10019c87f*/
    v88 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10019c88d*/
    v89 = &v84; /*0x10019c89b*/
    v90 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x10019c8a9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      &v101,
      (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
      (unsigned __int64)&v87);
    v29 = v102; /*0x10019c8c7*/
    v30 = v103; /*0x10019c8cb*/
    v31 = v93; /*0x10019c8d6*/
    if ( v103 > v91 - v93 ) /*0x10019c8e3*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v91, v93, v103, 1, 1u); /*0x10019c958*/
      v31 = v93; /*0x10019c95d*/
    }
    memcpy((void *)(v31 + v92), v29, v30); /*0x10019c8f5*/
    v93 = v30 + v31; /*0x10019c8fd*/
    if ( v101 ) /*0x10019c90b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10019c915*/
    v20 = v80; /*0x10019c921*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v94); /*0x10019c928*/
    v23 += 4LL; /*0x10019c92d*/
  }
  while ( v75 != v23 );
  a3 = v77; /*0x10019c969*/
  v4 = v78; /*0x10019c970*/
  v22 = v79; /*0x10019c977*/
LABEL_32:
  if ( v22 ) /*0x10019c981*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10019c98f*/
  if ( v4 == 14 ) /*0x10019c998*/
  {
    v35 = 0x636F6E74656E745FLL; /*0x10019c9fe*/
    v36 = _byteswap_uint64(*(_QWORD *)a3); /*0x10019ca0c*/
    if ( v36 != 0x636F6E74656E745FLL /*0x10019ca2a*/
      || (v35 = 0x745F66696C746572LL, v36 = _byteswap_uint64(*(_QWORD *)(a3 + 6)), v37 = 0, v36 != 0x745F66696C746572LL) )
    {
      v37 = 2 * (v36 >= v35) - 1; /*0x10019ca34*/
    }
    v33 = v37 == 0; /*0x10019ca3a*/
    v32 = 5LL * (v37 == 0) + 8; /*0x10019ca3f*/
    v34 = "stop_sequenceusageoutput_tokensinput_tokensmax_tokenscontent_filterlengthresponse.in_progress"; /*0x10019ca44*/
    goto LABEL_43; /*0x10019ca44*/
  }
  v32 = 8; /*0x10019c99a*/
  if ( v4 == 10 ) /*0x10019c9a3*/
  {
    v33 = (*(_QWORD *)a3 ^ 0x6C61635F6C6F6F74LL | *(unsigned __int16 *)(a3 + 8) ^ 0x736CLL) == 0; /*0x10019c9f2*/
    v34 = (char *)&unk_10125B508; /*0x10019c9f5*/
LABEL_43:
    v38 = (char *)&unk_10125B510; /*0x10019ca4b*/
    if ( v33 ) /*0x10019ca52*/
      v38 = v34; /*0x10019ca52*/
    goto LABEL_47; /*0x10019ca52*/
  }
  if ( v4 == 6 ) /*0x10019c9a9*/
  {
    v33 = (*(_DWORD *)a3 ^ 0x676E656C | *(unsigned __int16 *)(a3 + 4) ^ 0x6874) == 0; /*0x10019c9c5*/
    v32 = 2LL * v33 + 8; /*0x10019c9ca*/
    v34 = "max_tokenscontent_filterlengthresponse.in_progress"; /*0x10019c9cf*/
    goto LABEL_43; /*0x10019c9d6*/
  }
  v38 = (char *)&unk_10125B510; /*0x10019ca58*/
LABEL_47:
  v81 = nullptr; /*0x10019ca5f*/
  v83 = 0; /*0x10019ca6a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019ca75*/
  v39 = 4; /*0x10019ca7a*/
  v40 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10019ca8a*/
  if ( !v40 ) /*0x10019ca92*/
    goto LABEL_93; /*0x10019ca92*/
  *v40 = 1701869940; /*0x10019ca9b*/
  v98 = 4; /*0x10019caa1*/
  __src = v40; /*0x10019caa9*/
  __n = 4; /*0x10019caad*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cab5*/
  v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x10019cac4*/
  if ( !v41 ) /*0x10019cacc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x10019d290*/
  qmemcpy(v41, "message_delta", 13); /*0x10019caea*/
  LOBYTE(v87) = 3; /*0x10019caed*/
  v88 = 13; /*0x10019caf4*/
  v89 = (__int64 *)v41; /*0x10019caff*/
  v90 = 13; /*0x10019cb06*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v101, &v81, (__int64)&v98, &v87); /*0x10019cb27*/
  if ( (_BYTE)v101 != 6 ) /*0x10019cb30*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019cb36*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cb3b*/
  v39 = 5; /*0x10019cb40*/
  v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x10019cb50*/
  if ( !v42 ) /*0x10019cb58*/
    goto LABEL_93; /*0x10019cb58*/
  *(_BYTE *)(v42 + 4) = 97; /*0x10019cb61*/
  *(_DWORD *)v42 = 1953260900; /*0x10019cb65*/
  v84 = 5; /*0x10019cb6b*/
  v85 = (_DWORD *)v42; /*0x10019cb76*/
  v86 = 5; /*0x10019cb7d*/
  v94 = nullptr; /*0x10019cb88*/
  v96 = 0; /*0x10019cb93*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cb9b*/
  v43 = 11; /*0x10019cba0*/
  v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x10019cbb0*/
  if ( !v44 ) /*0x10019cbb8*/
    goto LABEL_94; /*0x10019cbb8*/
  qmemcpy(v44, "stop_reason", 11); /*0x10019cbcb*/
  v98 = 11; /*0x10019cbd8*/
  __src = v44; /*0x10019cbe0*/
  __n = 11; /*0x10019cbe4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cbec*/
  v45 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1u); /*0x10019cbf9*/
  if ( !v45 ) /*0x10019cc01*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v32); /*0x10019d29f*/
  v46 = v45; /*0x10019cc07*/
  memcpy(v45, v38, v32); /*0x10019cc13*/
  LOBYTE(v87) = 3; /*0x10019cc18*/
  v88 = v32; /*0x10019cc1f*/
  v89 = v46; /*0x10019cc26*/
  v90 = v32; /*0x10019cc2d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019cc4a*/
    &v101,
    (unsigned __int16 **)&v94,
    (__int64)&v98,
    &v87);
  if ( (_BYTE)v101 != 6 ) /*0x10019cc53*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019cc59*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cc5e*/
  v43 = 13; /*0x10019cc63*/
  v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x10019cc73*/
  if ( !v47 ) /*0x10019cc7b*/
LABEL_94:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v43); /*0x10019d270*/
  qmemcpy(v47, "stop_sequence", 13); /*0x10019cc99*/
  v98 = 13; /*0x10019cc9c*/
  __src = v47; /*0x10019cca4*/
  __n = 13; /*0x10019cca8*/
  LOBYTE(v87) = 0; /*0x10019ccb0*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019cccd*/
    &v101,
    (unsigned __int16 **)&v94,
    (__int64)&v98,
    &v87);
  if ( (_BYTE)v101 != 6 ) /*0x10019ccd6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019ccdc*/
  v88 = (__int64)v94; /*0x10019ccec*/
  v89 = (__int64 *)v95; /*0x10019ccf3*/
  v90 = v96; /*0x10019ccfe*/
  LOBYTE(v87) = 5; /*0x10019cd05*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v101, &v81, (__int64)&v84, &v87); /*0x10019cd25*/
  if ( (_BYTE)v101 != 6 ) /*0x10019cd2e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019cd34*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cd39*/
  v39 = 5; /*0x10019cd3e*/
  v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x10019cd4e*/
  if ( !v48 ) /*0x10019cd56*/
LABEL_93:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x10019d25e*/
  *(_BYTE *)(v48 + 4) = 101; /*0x10019cd5f*/
  *(_DWORD *)v48 = 1734439797; /*0x10019cd63*/
  v84 = 5; /*0x10019cd69*/
  v85 = (_DWORD *)v48; /*0x10019cd74*/
  v86 = 5; /*0x10019cd7b*/
  v94 = nullptr; /*0x10019cd86*/
  v96 = 0; /*0x10019cd91*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cd99*/
  v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x10019cda8*/
  if ( !v49 ) /*0x10019cdb0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x10019d2b0*/
  qmemcpy(v49, "output_tokens", 13); /*0x10019cdce*/
  v98 = 13; /*0x10019cdd1*/
  __src = v49; /*0x10019cdd9*/
  __n = 13; /*0x10019cddd*/
  LOBYTE(v87) = 2; /*0x10019cde5*/
  v88 = 0; /*0x10019cdec*/
  v89 = nullptr; /*0x10019cdf7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019ce1b*/
    &v101,
    (unsigned __int16 **)&v94,
    (__int64)&v98,
    &v87);
  if ( (_BYTE)v101 != 6 ) /*0x10019ce24*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019ce2a*/
  v88 = (__int64)v94; /*0x10019ce3a*/
  v89 = (__int64 *)v95; /*0x10019ce41*/
  v90 = v96; /*0x10019ce4c*/
  LOBYTE(v87) = 5; /*0x10019ce53*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v101, &v81, (__int64)&v84, &v87); /*0x10019ce79*/
  if ( (_BYTE)v101 != 6 ) /*0x10019ce82*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019ce88*/
  v102 = v81; /*0x10019ce9b*/
  v103 = v82; /*0x10019ce9f*/
  v104 = v83; /*0x10019ceaa*/
  LOBYTE(v101) = 5; /*0x10019ceae*/
  v94 = "message_deltamessage_stop"; /*0x10019ceb9*/
  v95 = 13; /*0x10019cec0*/
  v84 = (__int64)&v101; /*0x10019cec8*/
  v87 = &v94; /*0x10019cecf*/
  v88 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10019cedd*/
  v89 = &v84; /*0x10019cee4*/
  v90 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x10019cef2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    &v98,
    (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
    (unsigned __int64)&v87);
  v50 = __src; /*0x10019cf10*/
  v51 = __n; /*0x10019cf14*/
  v52 = v93; /*0x10019cf1f*/
  if ( __n > v91 - v93 ) /*0x10019cf2c*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v91, v93, __n, 1, 1u); /*0x10019d1c0*/
    v52 = v93; /*0x10019d1c5*/
  }
  v53 = v92; /*0x10019cf32*/
  memcpy((void *)(v92 + v52), v50, v51); /*0x10019cf43*/
  v54 = v51 + v52; /*0x10019cf48*/
  v93 = v54; /*0x10019cf4b*/
  if ( v98 ) /*0x10019cf59*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10019cf63*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019cf6c*/
  v94 = nullptr; /*0x10019cf71*/
  v96 = 0; /*0x10019cf7c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cf84*/
  v55 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10019cf93*/
  if ( !v55 ) /*0x10019cf9b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10019d2c1*/
  *v55 = 1701869940; /*0x10019cfa4*/
  v98 = 4; /*0x10019cfaa*/
  __src = v55; /*0x10019cfb2*/
  __n = 4; /*0x10019cfb6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10019cfbe*/
  v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x10019cfcd*/
  if ( !v56 ) /*0x10019cfd5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x10019d2d2*/
  qmemcpy(v56, "message_stop", 12); /*0x10019cfe5*/
  LOBYTE(v87) = 3; /*0x10019cfef*/
  v88 = 12; /*0x10019cff6*/
  v89 = (__int64 *)v56; /*0x10019d001*/
  v90 = 12; /*0x10019d008*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x10019d02f*/
    &v101,
    (unsigned __int16 **)&v94,
    (__int64)&v98,
    &v87);
  if ( (_BYTE)v101 != 6 ) /*0x10019d038*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019d03e*/
  v102 = v94; /*0x10019d04e*/
  v103 = v95; /*0x10019d052*/
  v104 = v96; /*0x10019d05a*/
  LOBYTE(v101) = 5; /*0x10019d05e*/
  v94 = "message_stop"; /*0x10019d069*/
  v95 = 12; /*0x10019d070*/
  v84 = (__int64)&v101; /*0x10019d078*/
  v87 = &v94; /*0x10019d07f*/
  v88 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10019d086*/
  v89 = &v84; /*0x10019d094*/
  v90 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x10019d0a2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    &v98,
    (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
    (unsigned __int64)&v87);
  v57 = __src; /*0x10019d0c0*/
  v58 = __n; /*0x10019d0c4*/
  if ( __n > v91 - v54 ) /*0x10019d0d5*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v91, v54, __n, 1, 1u); /*0x10019d1e9*/
    v53 = v92; /*0x10019d1ee*/
    v54 = v93; /*0x10019d1f5*/
  }
  memcpy((void *)(v54 + v53), v57, v58); /*0x10019d0e7*/
  v93 = v58 + v54; /*0x10019d0ef*/
  if ( v98 ) /*0x10019d0fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10019d107*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v101); /*0x10019d110*/
  v59 = v76; /*0x10019d11c*/
  v76[2] = v93; /*0x10019d123*/
  v60 = v91; /*0x10019d127*/
  v59[1] = v92; /*0x10019d135*/
  *v59 = v60; /*0x10019d139*/
}