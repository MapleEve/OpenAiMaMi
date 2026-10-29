// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::proxy_server::summarize_upstream_error::h544360456d44c378; addr: 0x1004e4290; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// [release-semantic-writeback <审计会话> 0x1004e4290]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [router-engine-platform-owned-depth-adjudicated-results / current-release-body-reviewed] Upstream error summarization is parsed/error-tag aware (including param field), not blanket
// response-body passthrough. Full branch text preserved.
// 限制：current body actual content reviewed; not necessarily full pre/release equality
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
__m128i *__fastcall codexmate_lib::core::relay::proxy_server::summarize_upstream_error::h544360456d44c378(
        __m128i *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v5; // r14
  _OWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  size_t v12; // rax
  size_t v13; // rsi
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  size_t v17; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rbx
  __m128i *v21; // r12
  size_t v22; // r13
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rdi
  __int64 *v26; // r15
  size_t v27; // r12
  size_t v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 *v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 *v36; // rbx
  size_t v37; // r14
  __int64 v38; // rdi
  __int64 *v39; // rbx
  __int64 v41; // [rsp+8h] [rbp-1A8h] BYREF
  void *v42; // [rsp+10h] [rbp-1A0h]
  size_t v43; // [rsp+18h] [rbp-198h]
  _QWORD v44[2]; // [rsp+20h] [rbp-190h] BYREF
  _QWORD v45[2]; // [rsp+30h] [rbp-180h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-170h] BYREF
  __int64 v47; // [rsp+48h] [rbp-168h] BYREF
  void *v48; // [rsp+50h] [rbp-160h]
  size_t v49; // [rsp+58h] [rbp-158h]
  __int64 v50; // [rsp+60h] [rbp-150h] BYREF
  void *v51; // [rsp+68h] [rbp-148h]
  size_t v52; // [rsp+70h] [rbp-140h]
  size_t v53; // [rsp+78h] [rbp-138h]
  __m128i v54; // [rsp+80h] [rbp-130h] BYREF
  size_t v55; // [rsp+90h] [rbp-120h]
  __int64 v56; // [rsp+98h] [rbp-118h]
  __int64 v57; // [rsp+A0h] [rbp-110h] BYREF
  size_t v58; // [rsp+A8h] [rbp-108h]
  __m128i *v59; // [rsp+B8h] [rbp-F8h]
  __int64 v60; // [rsp+C0h] [rbp-F0h]
  size_t v61; // [rsp+C8h] [rbp-E8h]
  __m128i v62; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 *v63; // [rsp+E0h] [rbp-D0h]
  __int64 v64; // [rsp+E8h] [rbp-C8h]
  size_t __n; // [rsp+F0h] [rbp-C0h]
  void *v66; // [rsp+F8h] [rbp-B8h]
  void *__src; // [rsp+100h] [rbp-B0h]
  __int64 v68; // [rsp+108h] [rbp-A8h]
  void *v69; // [rsp+110h] [rbp-A0h]
  int v70; // [rsp+11Ch] [rbp-94h]
  unsigned __int128 v71; // [rsp+120h] [rbp-90h] BYREF
  __int64 *v72; // [rsp+130h] [rbp-80h]
  __int64 (__fastcall *v73)(); // [rsp+138h] [rbp-78h]
  __int64 *v74; // [rsp+140h] [rbp-70h]
  __int64 (__fastcall *v75)(); // [rsp+148h] [rbp-68h]
  _QWORD *v76; // [rsp+150h] [rbp-60h]
  __int64 (__fastcall *v77)(); // [rsp+158h] [rbp-58h]
  __int64 *v78; // [rsp+160h] [rbp-50h]
  __int64 (__fastcall *v79)(); // [rsp+168h] [rbp-48h]
  __int64 v80; // [rsp+170h] [rbp-40h]
  __int16 v81; // [rsp+17Eh] [rbp-32h] BYREF
  int v82; // [rsp+180h] [rbp-30h]
  bool v83; // [rsp+187h] [rbp-29h]

  v70 = a2; /*0x1004e42a7*/
  v71 = __PAIR128__(a4, a3); /*0x1004e42b0*/
  v72 = nullptr; /*0x1004e42be*/
  v73 = nullptr; /*0x1004e42c6*/
  serde_json::de::from_trait::h89c510e88e63bfb2(&v62, &v71); /*0x1004e42dc*/
  if ( v62.i8[0] == 6 ) /*0x1004e42e8*/
  {
    v54.i8[0] = 6; /*0x1004e42ea*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h4c10ab9eca38c556(&v62); /*0x1004e42f8*/
    v5 = 1; /*0x1004e433b*/
    v6 = nullptr; /*0x1004e433e*/
    v7 = 0; /*0x1004e4340*/
  }
  else
  {
    v56 = v64; /*0x1004e4306*/
    v55 = (size_t)v63; /*0x1004e4314*/
    v54 = v62; /*0x1004e4330*/
    v6 = &v54; /*0x1004e434b*/
    v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004e435a*/
           &anon_90096945ae5392e7faa4fe68e375fd44_125,
           5,
           &v54);
    if ( v8 ) /*0x1004e4362*/
      v6 = (_OWORD *)v8; /*0x1004e4362*/
    v7 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004e437a*/
           &anon_90096945ae5392e7faa4fe68e375fd44_149,
           4,
           v6);
    v5 = 0; /*0x1004e437d*/
  }
  codexmate_lib::core::relay::proxy_server::upstream_error_tag::hed5aeeb13e7b33d0(&v50, v7); /*0x1004e4387*/
  if ( v5 ) /*0x1004e4399*/
    v9 = 0; /*0x1004e439b*/
  else
    v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004e43b3*/
           &anon_90096945ae5392e7faa4fe68e375fd44_123,
           4,
           v6);
  codexmate_lib::core::relay::proxy_server::upstream_error_tag::hed5aeeb13e7b33d0(&v47, v9); /*0x1004e43bd*/
  if ( v5 ) /*0x1004e43c5*/
    v10 = 0; /*0x1004e43c7*/
  else
    v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("param", 5, v6); /*0x1004e43df*/
  codexmate_lib::core::relay::proxy_server::upstream_error_tag::hed5aeeb13e7b33d0(&v41, v10); /*0x1004e43e9*/
  v59 = a1; /*0x1004e43ee*/
  v11 = (__int64)v51; /*0x1004e43fc*/
  v12 = 0; /*0x1004e4403*/
  v60 = v50; /*0x1004e4405*/
  v83 = v50 == 0x8000000000000000LL; /*0x1004e440f*/
  v13 = v52; /*0x1004e4413*/
  v14 = 1; /*0x1004e441a*/
  __src = v51; /*0x1004e441f*/
  if ( v50 == 0x8000000000000000LL ) /*0x1004e4426*/
    v11 = 1; /*0x1004e4426*/
  v15 = v47; /*0x1004e442a*/
  __n = v52; /*0x1004e4431*/
  if ( v50 == 0x8000000000000000LL ) /*0x1004e4438*/
    v13 = 0; /*0x1004e4438*/
  v80 = v47; /*0x1004e4443*/
  LOBYTE(v15) = v47 == 0x8000000000000000LL; /*0x1004e444a*/
  v82 = v15; /*0x1004e444e*/
  v45[0] = v11; /*0x1004e445f*/
  v45[1] = v13; /*0x1004e446d*/
  v66 = v48; /*0x1004e4474*/
  v16 = (__int64)v48; /*0x1004e447b*/
  if ( v47 == 0x8000000000000000LL ) /*0x1004e447e*/
    v16 = 1; /*0x1004e447e*/
  v44[0] = v16; /*0x1004e4482*/
  v53 = v49; /*0x1004e4489*/
  v17 = v49; /*0x1004e4490*/
  if ( v47 == 0x8000000000000000LL ) /*0x1004e4493*/
    v17 = 0; /*0x1004e4493*/
  v68 = v41; /*0x1004e4497*/
  v44[1] = v17; /*0x1004e44a1*/
  v69 = v42; /*0x1004e44af*/
  if ( v41 != 0x8000000000000000LL ) /*0x1004e44b6*/
    v14 = (__int64)v42; /*0x1004e44b6*/
  v61 = v43; /*0x1004e44ba*/
  if ( v41 != 0x8000000000000000LL ) /*0x1004e44c1*/
    v12 = v43; /*0x1004e44c1*/
  v57 = v14; /*0x1004e44c5*/
  v58 = v12; /*0x1004e44cc*/
  *(_QWORD *)&v71 = &v81; /*0x1004e44d7*/
  *((_QWORD *)&v71 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1004e44e5*/
  v72 = (__int64 *)&v46; /*0x1004e44f3*/
  v73 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004e44fe*/
  v74 = v45; /*0x1004e4509*/
  v75 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1004e4514*/
  v76 = v44; /*0x1004e451f*/
  v77 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1004e4523*/
  v78 = &v57; /*0x1004e452e*/
  v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1004e4532*/
  v18 = a4; /*0x1004e4536*/
  v46 = a4; /*0x1004e4539*/
  v81 = v70; /*0x1004e4546*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, &unk_1018FA03A, &v71); /*0x1004e455f*/
  v19 = v62.i64[1]; /*0x1004e4564*/
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::h648f3d1979174620( /*0x1004e457c*/
    (__m128i *)&v71,
    (char *)v62.i64[1],
    (size_t)v63);
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hffe2fa7abb592e8c( /*0x1004e4599*/
    &v57,
    &v71,
    (char *)&v71 + 6);
  if ( v62.i64[0] ) /*0x1004e45a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v62.i64[0], 1); /*0x1004e45b2*/
  LOWORD(v45[0]) = v70; /*0x1004e45bd*/
  v44[0] = v18; /*0x1004e45c4*/
  *(_QWORD *)&v71 = v45; /*0x1004e45cb*/
  *((_QWORD *)&v71 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1004e45d9*/
  v72 = v44; /*0x1004e45e0*/
  v73 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004e45eb*/
  v74 = &v57; /*0x1004e45ef*/
  v75 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e45fa*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, &unk_1018FA00D, &v71); /*0x1004e4613*/
  v71 = (unsigned __int128)v62; /*0x1004e4626*/
  v72 = v63; /*0x1004e463b*/
  v20 = v60; /*0x1004e4649*/
  v21 = v59; /*0x1004e4653*/
  v22 = v53; /*0x1004e465a*/
  if ( v60 != 0x8000000000000000LL ) /*0x1004e4661*/
  {
    v23 = v71; /*0x1004e4667*/
    v24 = v72; /*0x1004e466e*/
    if ( (_QWORD)v71 - (_QWORD)v72 <= 0xBu ) /*0x1004e467c*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v72, 12, 1, 1); /*0x1004e48a8*/
      v23 = v71; /*0x1004e48ad*/
      v24 = v72; /*0x1004e48b4*/
    }
    v25 = *((_QWORD *)&v71 + 1); /*0x1004e4682*/
    *(__int64 *)((char *)v24 + *((_QWORD *)&v71 + 1)) = 0x745F726F72726520LL; /*0x1004e4693*/
    *(_DWORD *)((char *)v24 + v25 + 8) = 1030058105; /*0x1004e4697*/
    v26 = (__int64 *)((char *)v24 + 12); /*0x1004e46a0*/
    v72 = v26; /*0x1004e46a4*/
    if ( __n > v23 - (__int64)v26 ) /*0x1004e46b2*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v26, __n, 1, 1); /*0x1004e48d9*/
      v27 = v22; /*0x1004e48de*/
      v25 = *((_QWORD *)&v71 + 1); /*0x1004e48e4*/
      v26 = v72; /*0x1004e48eb*/
    }
    else
    {
      v27 = v22; /*0x1004e46b8*/
    }
    v28 = __n; /*0x1004e46c8*/
    memcpy((char *)v26 + v25, __src, __n); /*0x1004e46d2*/
    v72 = (__int64 *)((char *)v26 + v28); /*0x1004e46da*/
    v22 = v27; /*0x1004e46e4*/
    v21 = v59; /*0x1004e46e7*/
    if ( v20 ) /*0x1004e46ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v20, 1); /*0x1004e46ff*/
  }
  v29 = v80; /*0x1004e4704*/
  if ( v80 != 0x8000000000000000LL ) /*0x1004e470b*/
  {
    v30 = v71; /*0x1004e470d*/
    v31 = v72; /*0x1004e4714*/
    if ( (_QWORD)v71 - (_QWORD)v72 <= 0xBu ) /*0x1004e4722*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v72, 12, 1, 1); /*0x1004e490e*/
      v30 = v71; /*0x1004e4913*/
      v31 = v72; /*0x1004e491a*/
    }
    v32 = *((_QWORD *)&v71 + 1); /*0x1004e4728*/
    *(__int64 *)((char *)v31 + *((_QWORD *)&v71 + 1)) = 0x635F726F72726520LL; /*0x1004e4739*/
    *(_DWORD *)((char *)v31 + v32 + 8) = 1030055023; /*0x1004e473d*/
    v33 = (__int64 *)((char *)v31 + 12); /*0x1004e4745*/
    v72 = v33; /*0x1004e4749*/
    if ( v22 > v30 - (__int64)v33 ) /*0x1004e4753*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v33, v22, 1, 1); /*0x1004e493b*/
      v32 = *((_QWORD *)&v71 + 1); /*0x1004e4940*/
      v33 = v72; /*0x1004e4947*/
    }
    memcpy((char *)v33 + v32, v66, v22); /*0x1004e4766*/
    v72 = (__int64 *)((char *)v33 + v22); /*0x1004e476e*/
    if ( v29 ) /*0x1004e4775*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v29, 1); /*0x1004e4786*/
  }
  v34 = v68; /*0x1004e478b*/
  if ( v68 != 0x8000000000000000LL ) /*0x1004e4795*/
  {
    v35 = v71; /*0x1004e479b*/
    v36 = v72; /*0x1004e47a2*/
    if ( (_QWORD)v71 - (_QWORD)v72 <= 0xCu ) /*0x1004e47b0*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v72, 13, 1, 1); /*0x1004e496a*/
      v37 = v61; /*0x1004e496f*/
      v35 = v71; /*0x1004e4976*/
      v36 = v72; /*0x1004e497d*/
    }
    else
    {
      v37 = v61; /*0x1004e47b6*/
    }
    v38 = *((_QWORD *)&v71 + 1); /*0x1004e47bd*/
    *(__int64 *)((char *)v36 + *((_QWORD *)&v71 + 1) + 5) = 0x3D6D617261705F72LL; /*0x1004e47ce*/
    *(__int64 *)((char *)v36 + v38) = 0x705F726F72726520LL; /*0x1004e47dd*/
    v39 = (__int64 *)((char *)v36 + 13); /*0x1004e47e1*/
    v72 = v39; /*0x1004e47e5*/
    if ( v37 > v35 - (__int64)v39 ) /*0x1004e47ef*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v71, v39, v37, 1, 1); /*0x1004e499e*/
      v38 = *((_QWORD *)&v71 + 1); /*0x1004e49a3*/
      v39 = v72; /*0x1004e49aa*/
    }
    memcpy((char *)v39 + v38, v69, v37); /*0x1004e4802*/
    v72 = (__int64 *)((char *)v39 + v37); /*0x1004e480a*/
    if ( v34 ) /*0x1004e4811*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v34, 1); /*0x1004e4822*/
  }
  v21[1].i64[0] = (__int64)v72; /*0x1004e482b*/
  *v21 = (__m128i)v71; /*0x1004e4843*/
  if ( v57 ) /*0x1004e4851*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x1004e485f*/
  if ( v54.i8[0] != 6 ) /*0x1004e486b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v54); /*0x1004e4874*/
  return v21; /*0x1004e487c*/
}
