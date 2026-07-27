// __ZN13codexmate_lib4core5voice7runtime17VoiceRuntimeInner10to_payload @ 0x100671e10 | 基线 same-set
const __m128i *__fastcall codexmate_lib::core::voice::runtime::VoiceRuntimeInner::to_payload::h8404c411b85a7667(
        __int64 a1,
        const __m128i *a2)
{
  __int8 v3; // r15
  __int64 v4; // r14
  __int8 *v5; // rsi
  bool v6; // of
  const __m128i *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int16 v16; // cx
  const __m128i *v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  char v20; // dh
  __int16 v21; // cx
  __m128i v23; // [rsp+0h] [rbp-300h]
  __m128i v24; // [rsp+10h] [rbp-2F0h]
  const __m128i *v25; // [rsp+20h] [rbp-2E0h]
  __int64 v26; // [rsp+28h] [rbp-2D8h]
  _QWORD v27[3]; // [rsp+30h] [rbp-2D0h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-2B8h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-2A0h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp-288h] BYREF
  _QWORD v31[3]; // [rsp+90h] [rbp-270h] BYREF
  _QWORD v32[3]; // [rsp+A8h] [rbp-258h] BYREF
  _QWORD v33[3]; // [rsp+C0h] [rbp-240h] BYREF
  _QWORD v34[3]; // [rsp+D8h] [rbp-228h] BYREF
  _QWORD v35[3]; // [rsp+F0h] [rbp-210h] BYREF
  _QWORD v36[3]; // [rsp+108h] [rbp-1F8h] BYREF
  _QWORD v37[3]; // [rsp+120h] [rbp-1E0h] BYREF
  _QWORD v38[3]; // [rsp+138h] [rbp-1C8h] BYREF
  _QWORD v39[3]; // [rsp+150h] [rbp-1B0h] BYREF
  _QWORD v40[3]; // [rsp+168h] [rbp-198h] BYREF
  _QWORD v41[3]; // [rsp+180h] [rbp-180h] BYREF
  _QWORD v42[3]; // [rsp+198h] [rbp-168h] BYREF
  _QWORD v43[3]; // [rsp+1B0h] [rbp-150h] BYREF
  _QWORD v44[3]; // [rsp+1C8h] [rbp-138h] BYREF
  _QWORD v45[3]; // [rsp+1E0h] [rbp-120h] BYREF
  __int64 v46; // [rsp+1F8h] [rbp-108h]
  __int64 v47; // [rsp+200h] [rbp-100h]
  __int64 v48; // [rsp+208h] [rbp-F8h]
  __int64 v49; // [rsp+210h] [rbp-F0h]
  __int64 v50; // [rsp+218h] [rbp-E8h]
  __m128i si128; // [rsp+220h] [rbp-E0h] BYREF
  _QWORD v52[3]; // [rsp+230h] [rbp-D0h] BYREF
  const __m128i *v53; // [rsp+248h] [rbp-B8h] BYREF
  const __m128i *v54; // [rsp+250h] [rbp-B0h]
  __int64 v55; // [rsp+258h] [rbp-A8h]
  __int64 v56; // [rsp+260h] [rbp-A0h]
  __int64 v57; // [rsp+268h] [rbp-98h]
  __int64 v58; // [rsp+270h] [rbp-90h]
  const __m128i *v59; // [rsp+278h] [rbp-88h]
  const __m128i *v60; // [rsp+280h] [rbp-80h]
  int v61; // [rsp+28Ch] [rbp-74h]
  unsigned __int64 v62; // [rsp+290h] [rbp-70h]
  const __m128i *v63; // [rsp+298h] [rbp-68h] BYREF
  const __m128i *v64; // [rsp+2A0h] [rbp-60h]
  __int64 v65; // [rsp+2A8h] [rbp-58h]
  __int64 v66; // [rsp+2B0h] [rbp-50h]
  __int64 v67; // [rsp+2B8h] [rbp-48h] BYREF
  __int64 v68; // [rsp+2C0h] [rbp-40h]
  unsigned __int64 v69; // [rsp+2C8h] [rbp-38h]
  __int8 v70; // [rsp+2D1h] [rbp-2Fh]
  unsigned __int8 v71; // [rsp+2D2h] [rbp-2Eh]
  __int8 v72; // [rsp+2D3h] [rbp-2Dh]
  __int8 v73; // [rsp+2D4h] [rbp-2Ch]
  __int8 v74; // [rsp+2D5h] [rbp-2Bh]
  __int8 v75; // [rsp+2D6h] [rbp-2Ah]
  __int8 v76; // [rsp+2D7h] [rbp-29h]

  v3 = a2[53].i8[2]; /*0x100671e2a*/
  v71 = a2[53].u8[9]; /*0x100671e39*/
  v70 = a2[53].i8[12]; /*0x100671e43*/
  v61 = a2[53].u16[5]; /*0x100671e4d*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v45, &a2[2].u64[1]); /*0x100671e5b*/
  v4 = a2[48].i64[1]; /*0x100671e60*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v44, &a2[4]); /*0x100671e74*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v43, &a2[5].u64[1]); /*0x100671e85*/
  v72 = a2[53].i8[3]; /*0x100671e93*/
  v23 = _mm_loadu_si128(a2 + 49); /*0x100671ea0*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v42, &a2[7]); /*0x100671eb4*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v41, &a2[8].u64[1]); /*0x100671ec8*/
  v24 = _mm_loadu_si128(a2 + 50); /*0x100671ed7*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v40, &a2[10]); /*0x100671eee*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v39, &a2[11].u64[1]); /*0x100671f02*/
  v46 = a2[51].i64[0]; /*0x100671f0f*/
  v73 = a2[53].i8[5]; /*0x100671f1f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v38, &a2[13]); /*0x100671f31*/
  v74 = a2[53].i8[7]; /*0x100671f3f*/
  v75 = a2[53].i8[8]; /*0x100671f4b*/
  v5 = &a2[14].i8[8]; /*0x100671f4e*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v37, v5); /*0x100671f5d*/
  v6 = __OFSUB__(0, a2[35].i64[1]); /*0x100671f6e*/
  v47 = v4; /*0x100671f76*/
  v76 = v3; /*0x100671f7d*/
  if ( v6 ) /*0x100671f81*/
  {
    v62 = 0x8000000000000000LL; /*0x100671f83*/
  }
  else
  {
    v5 = &a2[35].i8[8]; /*0x100671f89*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v63, &a2[35].u64[1]); /*0x100671f95*/
    v62 = (unsigned __int64)v63; /*0x100671f9e*/
    v59 = v64; /*0x100671fa6*/
    v49 = v65; /*0x100671fb1*/
  }
  v48 = a2[51].i64[1]; /*0x100671fc0*/
  v7 = (const __m128i *)a2[45].i64[1]; /*0x100671fc7*/
  v69 = a2[46].u64[0]; /*0x100671fd7*/
  si128 = _mm_load_si128(v7); /*0x100671fe1*/
  v8 = a2[47].i64[0]; /*0x100671fe9*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100671ff8*/
  v12 = v9; /*0x100671ffa*/
  if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x100672001*/
  {
    v13 = *(_QWORD *)v9; /*0x100672007*/
    v14 = *(_QWORD *)(v12 + 8); /*0x10067200a*/
  }
  else
  {
    v13 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100672743*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v5,
            v10,
            v11);
    *(_QWORD *)v12 = v13; /*0x100672748*/
    *(_QWORD *)(v12 + 8) = v14; /*0x10067274b*/
    *(_BYTE *)(v12 + 16) = 1; /*0x10067274f*/
  }
  *(_QWORD *)v12 = v13 + 1; /*0x100672012*/
  v66 = 0; /*0x10067201c*/
  v65 = 0; /*0x100672027*/
  v64 = nullptr; /*0x100672032*/
  v63 = (const __m128i *)anon_4776471024d1e9bb78f2861cb2b51e1e_263; /*0x10067203d*/
  v67 = v13; /*0x100672041*/
  v68 = v14; /*0x100672045*/
  if ( v8 ) /*0x10067204c*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::he583d02332586ebf(&v63, v8, &v67, 1); /*0x100672769*/
  v15 = (__int64)v7->i64 + v69 + 1; /*0x100672056*/
  v16 = ~(unsigned __int16)_mm_movemask_epi8(_mm_load_si128(&si128)); /*0x100672067*/
  v52[0] = &v63; /*0x10067206d*/
  v53 = v7; /*0x100672074*/
  v17 = v7 + 1; /*0x10067207b*/
  v54 = v17; /*0x10067207f*/
  v55 = v15; /*0x100672086*/
  LOWORD(v56) = v16; /*0x10067208d*/
  hashbrown::raw::RawIterRange$LT$T$GT$::fold_impl::h11eab7a73224dd7d(&v53, v8, v52); /*0x1006720a5*/
  v53 = v63; /*0x1006720b2*/
  v54 = v64; /*0x1006720b9*/
  v55 = v65; /*0x1006720c4*/
  v56 = v66; /*0x1006720cf*/
  v57 = v67; /*0x1006720da*/
  v58 = v68; /*0x1006720e5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v36, &a2[16]); /*0x1006720fb*/
  v18 = 0x8000000000000000LL; /*0x100672100*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, &a2[17].u64[1]); /*0x100672119*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v34, &a2[19]); /*0x10067212d*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v33, &a2[20].u64[1]); /*0x100672141*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v32, &a2[22]); /*0x100672155*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v31, &a2[23].u64[1]); /*0x100672169*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v30, &a2[25]); /*0x10067217d*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v29, &a2[26].u64[1]); /*0x100672191*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v28, &a2[28]); /*0x1006721a5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v27, &a2[29].u64[1]); /*0x1006721b9*/
  si128 = _mm_loadu_si128(a2); /*0x1006721c4*/
  if ( a2[37].i64[0] == 0x8000000000000000LL ) /*0x1006721d4*/
  {
    v69 = 0x8000000000000000LL; /*0x1006721d6*/
    if ( a2[38].i64[1] == 0x8000000000000000LL ) /*0x1006721e2*/
      goto LABEL_13; /*0x1006721e2*/
LABEL_12:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v63, &a2[38].u64[1]); /*0x100672218*/
    v18 = (unsigned __int64)v63; /*0x100672229*/
    v60 = v64; /*0x100672231*/
    v12 = v65; /*0x100672235*/
    goto LABEL_13; /*0x100672235*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v63, &a2[37]); /*0x1006721f2*/
  v69 = (unsigned __int64)v63; /*0x1006721fb*/
  v17 = v64; /*0x1006721ff*/
  v50 = v65; /*0x100672207*/
  if ( a2[38].i64[1] != 0x8000000000000000LL ) /*0x100672216*/
    goto LABEL_12; /*0x100672216*/
LABEL_13:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v52, &a2[31]); /*0x100672239*/
  v19 = 0x8000000000000000LL; /*0x10067224d*/
  if ( a2[40].i64[0] != 0x8000000000000000LL ) /*0x10067225f*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v63, &a2[40]); /*0x10067226f*/
    v19 = (unsigned __int64)v63; /*0x100672274*/
    v25 = v64; /*0x10067227c*/
    v26 = v65; /*0x100672287*/
  }
  v20 = BYTE1(v61); /*0x10067228e*/
  v21 = ((_WORD)v61 << 8) | v71; /*0x10067229a*/
  *(_BYTE *)(a1 + 696) = 1; /*0x10067229c*/
  *(_BYTE *)(a1 + 697) = v76; /*0x1006722a7*/
  *(_BYTE *)(a1 + 705) = v70; /*0x1006722b1*/
  *(_BYTE *)(a1 + 704) = v20; /*0x1006722b7*/
  *(_WORD *)(a1 + 702) = v21; /*0x1006722bd*/
  *(_QWORD *)(a1 + 16) = v45[0]; /*0x1006722cb*/
  *(_QWORD *)(a1 + 24) = v45[1]; /*0x1006722d6*/
  *(_QWORD *)(a1 + 32) = v45[2]; /*0x1006722e1*/
  *(_QWORD *)(a1 + 640) = v47; /*0x1006722ec*/
  *(_QWORD *)(a1 + 40) = v44[0]; /*0x1006722fa*/
  *(_QWORD *)(a1 + 48) = v44[1]; /*0x100672305*/
  *(_QWORD *)(a1 + 56) = v44[2]; /*0x100672310*/
  *(_QWORD *)(a1 + 64) = v43[0]; /*0x10067231b*/
  *(_QWORD *)(a1 + 72) = v43[1]; /*0x100672326*/
  *(_QWORD *)(a1 + 80) = v43[2]; /*0x100672331*/
  *(_BYTE *)(a1 + 698) = v72; /*0x100672339*/
  *(__m128i *)(a1 + 648) = v23; /*0x100672346*/
  *(_QWORD *)(a1 + 104) = v42[2]; /*0x100672354*/
  *(_QWORD *)(a1 + 96) = v42[1]; /*0x10067235f*/
  *(_QWORD *)(a1 + 88) = v42[0]; /*0x10067236a*/
  *(_QWORD *)(a1 + 112) = v41[0]; /*0x100672375*/
  *(_QWORD *)(a1 + 120) = v41[1]; /*0x100672380*/
  *(_QWORD *)(a1 + 128) = v41[2]; /*0x10067238b*/
  *(__m128i *)(a1 + 664) = v24; /*0x100672399*/
  *(_QWORD *)(a1 + 152) = v40[2]; /*0x1006723a7*/
  *(_QWORD *)(a1 + 144) = v40[1]; /*0x1006723b5*/
  *(_QWORD *)(a1 + 136) = v40[0]; /*0x1006723c3*/
  *(_QWORD *)(a1 + 160) = v39[0]; /*0x1006723d1*/
  *(_QWORD *)(a1 + 168) = v39[1]; /*0x1006723df*/
  *(_QWORD *)(a1 + 176) = v39[2]; /*0x1006723ed*/
  *(_QWORD *)(a1 + 680) = v46; /*0x1006723fb*/
  *(_BYTE *)(a1 + 699) = v73; /*0x100672406*/
  *(_QWORD *)(a1 + 200) = v38[2]; /*0x100672413*/
  *(_QWORD *)(a1 + 192) = v38[1]; /*0x100672421*/
  *(_QWORD *)(a1 + 184) = v38[0]; /*0x10067242f*/
  *(_BYTE *)(a1 + 700) = v75; /*0x10067243a*/
  *(_BYTE *)(a1 + 701) = v74; /*0x100672444*/
  *(_QWORD *)(a1 + 224) = v37[2]; /*0x100672451*/
  *(_QWORD *)(a1 + 216) = v37[1]; /*0x10067245f*/
  *(_QWORD *)(a1 + 208) = v37[0]; /*0x10067246d*/
  *(_QWORD *)(a1 + 496) = v62; /*0x100672478*/
  *(_QWORD *)(a1 + 504) = v59; /*0x100672486*/
  *(_QWORD *)(a1 + 512) = v49; /*0x100672494*/
  *(_QWORD *)(a1 + 688) = v48; /*0x1006724a2*/
  *(_QWORD *)(a1 + 632) = v58; /*0x1006724b0*/
  *(_QWORD *)(a1 + 624) = v57; /*0x1006724be*/
  *(_QWORD *)(a1 + 616) = v56; /*0x1006724cc*/
  *(_QWORD *)(a1 + 608) = v55; /*0x1006724da*/
  *(_QWORD *)(a1 + 600) = v54; /*0x1006724e8*/
  *(_QWORD *)(a1 + 592) = v53; /*0x1006724f6*/
  *(_QWORD *)(a1 + 248) = v36[2]; /*0x100672504*/
  *(_QWORD *)(a1 + 240) = v36[1]; /*0x100672512*/
  *(_QWORD *)(a1 + 232) = v36[0]; /*0x100672520*/
  *(_QWORD *)(a1 + 272) = v35[2]; /*0x10067252e*/
  *(_QWORD *)(a1 + 264) = v35[1]; /*0x10067253c*/
  *(_QWORD *)(a1 + 256) = v35[0]; /*0x10067254a*/
  *(_QWORD *)(a1 + 296) = v34[2]; /*0x100672558*/
  *(_QWORD *)(a1 + 288) = v34[1]; /*0x100672566*/
  *(_QWORD *)(a1 + 280) = v34[0]; /*0x100672574*/
  *(_QWORD *)(a1 + 320) = v33[2]; /*0x100672582*/
  *(_QWORD *)(a1 + 312) = v33[1]; /*0x100672590*/
  *(_QWORD *)(a1 + 304) = v33[0]; /*0x10067259e*/
  *(_QWORD *)(a1 + 344) = v32[2]; /*0x1006725ac*/
  *(_QWORD *)(a1 + 336) = v32[1]; /*0x1006725ba*/
  *(_QWORD *)(a1 + 328) = v32[0]; /*0x1006725c8*/
  *(_QWORD *)(a1 + 368) = v31[2]; /*0x1006725d6*/
  *(_QWORD *)(a1 + 360) = v31[1]; /*0x1006725e4*/
  *(_QWORD *)(a1 + 352) = v31[0]; /*0x1006725f2*/
  *(_QWORD *)(a1 + 392) = v30[2]; /*0x100672600*/
  *(_QWORD *)(a1 + 384) = v30[1]; /*0x10067260e*/
  *(_QWORD *)(a1 + 376) = v30[0]; /*0x10067261c*/
  *(_QWORD *)(a1 + 416) = v29[2]; /*0x10067262a*/
  *(_QWORD *)(a1 + 408) = v29[1]; /*0x100672638*/
  *(_QWORD *)(a1 + 400) = v29[0]; /*0x100672646*/
  *(_QWORD *)(a1 + 440) = v28[2]; /*0x100672654*/
  *(_QWORD *)(a1 + 432) = v28[1]; /*0x100672662*/
  *(_QWORD *)(a1 + 424) = v28[0]; /*0x100672670*/
  *(_QWORD *)(a1 + 464) = v27[2]; /*0x10067267e*/
  *(_QWORD *)(a1 + 456) = v27[1]; /*0x10067268c*/
  *(_QWORD *)(a1 + 448) = v27[0]; /*0x10067269a*/
  *(__m128i *)a1 = si128; /*0x1006726a8*/
  *(_QWORD *)(a1 + 520) = v69; /*0x1006726af*/
  *(_QWORD *)(a1 + 528) = v17; /*0x1006726b6*/
  *(_QWORD *)(a1 + 536) = v50; /*0x1006726c4*/
  *(_QWORD *)(a1 + 544) = v18; /*0x1006726cb*/
  *(_QWORD *)(a1 + 552) = v60; /*0x1006726d6*/
  *(_QWORD *)(a1 + 560) = v12; /*0x1006726dd*/
  *(_QWORD *)(a1 + 488) = v52[2]; /*0x1006726eb*/
  *(_QWORD *)(a1 + 480) = v52[1]; /*0x1006726f9*/
  *(_QWORD *)(a1 + 472) = v52[0]; /*0x100672707*/
  *(_QWORD *)(a1 + 568) = v19; /*0x10067270e*/
  *(_QWORD *)(a1 + 584) = v26; /*0x10067271c*/
  *(_QWORD *)(a1 + 576) = v25; /*0x10067272a*/
  return v25; /*0x100672731*/
}