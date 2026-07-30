// __ZN13codexmate_lib4core5relay23codex_thread_visibility38apply_thread_metadata_rollout_adoption @ 0x1008ef8e0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::apply_thread_metadata_rollout_adoption::hbbb470d2020894a4(
        __int64 a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        void *a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r13
  const void *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // r12
  char v19; // bl
  __int64 v20; // r13
  __int128 v21; // kr00_16
  __int64 v22; // r15
  void *v23; // r9
  signed __int64 v24; // r8
  const void *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r15
  const void *v28; // r13
  size_t v29; // r12
  __int64 v30; // rax
  __int64 v31; // r12
  char v32; // r13
  __int128 v33; // kr10_16
  __int64 v34; // r15
  const void *v35; // r13
  signed __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r14
  _QWORD *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // rcx
  __int64 v47; // r14
  _QWORD *v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v52; // [rsp+0h] [rbp-1C0h]
  __int128 v53; // [rsp+20h] [rbp-1A0h]
  __int64 v54; // [rsp+38h] [rbp-188h]
  __int64 v55; // [rsp+40h] [rbp-180h]
  __int128 v56; // [rsp+48h] [rbp-178h]
  __int64 v57; // [rsp+58h] [rbp-168h]
  __int128 v58; // [rsp+60h] [rbp-160h]
  __int64 v59; // [rsp+70h] [rbp-150h]
  __int128 v60; // [rsp+78h] [rbp-148h]
  __int64 v61; // [rsp+88h] [rbp-138h]
  __int128 v62; // [rsp+90h] [rbp-130h]
  __int64 v63; // [rsp+A0h] [rbp-120h]
  __int128 v64; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-108h]
  __int64 v66; // [rsp+C0h] [rbp-100h]
  __int128 v67; // [rsp+C8h] [rbp-F8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-E8h]
  const void *v69; // [rsp+E0h] [rbp-E0h]
  __int64 v70; // [rsp+E8h] [rbp-D8h]
  _OWORD v71[6]; // [rsp+F0h] [rbp-D0h] BYREF
  void *v72; // [rsp+150h] [rbp-70h]
  signed __int64 v73; // [rsp+158h] [rbp-68h]
  __int64 v74; // [rsp+160h] [rbp-60h] BYREF
  __int64 v75; // [rsp+168h] [rbp-58h]
  __int64 v76; // [rsp+170h] [rbp-50h]
  __int64 v77; // [rsp+178h] [rbp-48h]
  __int128 v78; // [rsp+180h] [rbp-40h] BYREF
  __int64 v79; // [rsp+190h] [rbp-30h]

  v66 = a1; /*0x1008ef903*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1008ef90a*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8); /*0x1008ef919*/
  if ( !v12 ) /*0x1008ef921*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144); /*0x1008f0286*/
  v74 = 2; /*0x1008ef939*/
  v75 = v12; /*0x1008ef941*/
  v76 = 0; /*0x1008ef945*/
  *(_QWORD *)&v60 = 0x8000000000000000LL; /*0x1008ef94d*/
  *(_QWORD *)&v56 = 0x8000000000000000LL; /*0x1008ef954*/
  v13 = *(_QWORD *)(a2 + 200); /*0x1008ef95b*/
  v77 = a2; /*0x1008ef962*/
  v14 = *(_QWORD *)(a2 + 208); /*0x1008ef966*/
  v70 = a6; /*0x1008ef977*/
  v52 = a6; /*0x1008ef97e*/
  v15 = (const void *)v13; /*0x1008ef982*/
  v69 = a3; /*0x1008ef992*/
  v73 = a4; /*0x1008ef99c*/
  v72 = a5; /*0x1008ef9a3*/
  codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_line::h150bff138ff7bffb( /*0x1008ef9aa*/
    (__int64 *)v71,
    v13,
    v14,
    a3,
    a4,
    a5,
    v52,
    a7,
    a8);
  v16 = *(_QWORD *)&v71[0]; /*0x1008ef9af*/
  v78 = *(_OWORD *)((char *)v71 + 8); /*0x1008ef9bd*/
  v79 = *((_QWORD *)&v71[1] + 1); /*0x1008ef9d3*/
  v17 = v66; /*0x1008ef9db*/
  if ( *(_QWORD *)&v71[0] != 11 ) /*0x1008ef9e2*/
  {
    *(_QWORD *)(v66 + 96) = *((_QWORD *)&v71[5] + 1); /*0x1008efe00*/
    *(_QWORD *)(v17 + 88) = *(_QWORD *)&v71[5]; /*0x1008efe08*/
    *(_OWORD *)(v17 + 72) = v71[4]; /*0x1008efe1e*/
    *(_OWORD *)(v17 + 56) = v71[3]; /*0x1008efe34*/
    *(_OWORD *)(v17 + 40) = v71[2]; /*0x1008efe4a*/
    *(_QWORD *)(v17 + 32) = v79; /*0x1008efe52*/
    *(_OWORD *)(v17 + 16) = v78; /*0x1008efe62*/
    *(_QWORD *)(v17 + 8) = v16; /*0x1008efe66*/
    *(_QWORD *)v17 = 0x8000000000000001LL; /*0x1008efe78*/
    goto LABEL_31; /*0x1008efe7b*/
  }
  v67 = v78; /*0x1008ef9f0*/
  v68 = v79; /*0x1008efa02*/
  if ( v79 == v14 && !memcmp(*((const void **)&v67 + 1), v15, v14) ) /*0x1008efa22*/
  {
    LOBYTE(v15) = 1; /*0x1008efefe*/
    v23 = v72; /*0x1008eff01*/
    v24 = v73; /*0x1008eff05*/
    v25 = v69; /*0x1008eff09*/
    v26 = v70; /*0x1008eff10*/
    v27 = *(_QWORD *)(v77 + 264); /*0x1008eff1b*/
    if ( v27 == *(_QWORD *)(v77 + 216) ) /*0x1008eff25*/
      goto LABEL_20; /*0x1008eff25*/
  }
  else
  {
    v54 = v77 + 192; /*0x1008efa3d*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v71, v77 + 192); /*0x1008efa44*/
    v53 = *(_OWORD *)(v77 + 216); /*0x1008efa54*/
    v55 = *(_QWORD *)(v77 + 216); /*0x1008efa62*/
    v18 = *(_BYTE *)(v77 + 232); /*0x1008efa69*/
    v19 = *(_BYTE *)(v77 + 233); /*0x1008efa71*/
    v20 = *(_QWORD *)&v71[0]; /*0x1008efa78*/
    v21 = *(_OWORD *)((char *)v71 + 8); /*0x1008efa86*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v78, &v67); /*0x1008efa98*/
    *(_QWORD *)&v71[0] = v20; /*0x1008efa9d*/
    *(_OWORD *)((char *)v71 + 8) = v21; /*0x1008efaa4*/
    *(_OWORD *)((char *)&v71[1] + 8) = v53; /*0x1008efab9*/
    BYTE8(v71[2]) = v18; /*0x1008efac0*/
    BYTE9(v71[2]) = v19; /*0x1008efac7*/
    v71[3] = v78; /*0x1008efad5*/
    *(_QWORD *)&v71[4] = v79; /*0x1008efae7*/
    v22 = v76; /*0x1008efaee*/
    if ( v76 == v74 ) /*0x1008efaf6*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v74); /*0x1008efafc*/
    qmemcpy((void *)(v75 + 72 * v22), v71, 0x48u); /*0x1008efb19*/
    v76 = v22 + 1; /*0x1008efb1f*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v78, v54); /*0x1008efb31*/
    v17 = v66; /*0x1008efb36*/
    *((_QWORD *)&v71[2] + 1) = v68; /*0x1008efb44*/
    *(_OWORD *)((char *)&v71[1] + 8) = v67; /*0x1008efb60*/
    v60 = v78; /*0x1008efb73*/
    v61 = v79; /*0x1008efb81*/
    v62 = v67; /*0x1008efb88*/
    v63 = v68; /*0x1008efb96*/
    LODWORD(v15) = 0; /*0x1008efb9d*/
    v23 = v72; /*0x1008efba0*/
    v24 = v73; /*0x1008efba4*/
    v25 = v69; /*0x1008efba8*/
    v26 = v70; /*0x1008efbaf*/
    v27 = *(_QWORD *)(v77 + 264); /*0x1008efbc1*/
    if ( v27 == v55 ) /*0x1008efbcb*/
      goto LABEL_20; /*0x1008efbcb*/
  }
  v28 = *(const void **)(v77 + 248); /*0x1008efbd5*/
  v29 = *(_QWORD *)(v77 + 256); /*0x1008efbdc*/
  codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_line::h150bff138ff7bffb( /*0x1008efc06*/
    (__int64 *)v71,
    (__int64)v28,
    v29,
    v25,
    v24,
    v23,
    v26,
    a7,
    a8);
  v30 = *(_QWORD *)&v71[0]; /*0x1008efc0b*/
  v78 = *(_OWORD *)((char *)v71 + 8); /*0x1008efc19*/
  v79 = *((_QWORD *)&v71[1] + 1); /*0x1008efc2f*/
  if ( *(_QWORD *)&v71[0] != 11 ) /*0x1008efc37*/
  {
    *(_OWORD *)(v17 + 88) = v71[5]; /*0x1008efe8c*/
    *(_OWORD *)(v17 + 72) = v71[4]; /*0x1008efea2*/
    *(_OWORD *)(v17 + 56) = v71[3]; /*0x1008efeb8*/
    *(_OWORD *)(v17 + 40) = v71[2]; /*0x1008efece*/
    *(_QWORD *)(v17 + 32) = v79; /*0x1008efed6*/
    *(_OWORD *)(v17 + 16) = v78; /*0x1008efee6*/
    *(_QWORD *)(v17 + 8) = v30; /*0x1008efeea*/
    goto LABEL_28; /*0x1008efeee*/
  }
  v64 = v78; /*0x1008efc45*/
  v65 = v79; /*0x1008efc57*/
  if ( v79 == v29 && !memcmp(*((const void **)&v64 + 1), v28, v29) ) /*0x1008efc7a*/
  {
    if ( (_QWORD)v64 ) /*0x1008eff37*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v64 + 1), v64, 1); /*0x1008eff41*/
  }
  else
  {
    LODWORD(v72) = (_DWORD)v15; /*0x1008efc80*/
    v69 = (const void *)(v77 + 240); /*0x1008efc96*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v71, v77 + 240); /*0x1008efc9d*/
    v31 = *(_QWORD *)(v77 + 272); /*0x1008efca6*/
    v32 = *(_BYTE *)(v77 + 280); /*0x1008efcad*/
    LOBYTE(v70) = *(_BYTE *)(v77 + 281); /*0x1008efcbc*/
    v73 = *(_QWORD *)&v71[0]; /*0x1008efcc9*/
    v33 = *(_OWORD *)((char *)v71 + 8); /*0x1008efcd4*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v78, &v64); /*0x1008efce6*/
    *(_QWORD *)&v71[0] = v73; /*0x1008efcef*/
    *(_OWORD *)((char *)v71 + 8) = v33; /*0x1008efcf6*/
    *((_QWORD *)&v71[1] + 1) = v27; /*0x1008efd04*/
    *(_QWORD *)&v71[2] = v31; /*0x1008efd0b*/
    BYTE8(v71[2]) = v32; /*0x1008efd12*/
    BYTE9(v71[2]) = v70; /*0x1008efd20*/
    v71[3] = v78; /*0x1008efd2e*/
    *(_QWORD *)&v71[4] = v79; /*0x1008efd40*/
    v34 = v76; /*0x1008efd47*/
    if ( v76 == v74 ) /*0x1008efd4f*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v74); /*0x1008efd55*/
    qmemcpy((void *)(v75 + 72 * v34), v71, 0x48u); /*0x1008efd72*/
    v76 = v34 + 1; /*0x1008efd78*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v78, v69); /*0x1008efd87*/
    v17 = v66; /*0x1008efd8c*/
    *((_QWORD *)&v71[2] + 1) = v65; /*0x1008efd9a*/
    *(_OWORD *)((char *)&v71[1] + 8) = v64; /*0x1008efdb6*/
    v56 = v78; /*0x1008efdc9*/
    v57 = v79; /*0x1008efdd7*/
    v58 = v64; /*0x1008efdde*/
    v59 = v65; /*0x1008efdec*/
    LOBYTE(v15) = (_BYTE)v72; /*0x1008efdf3*/
  }
LABEL_20:
  if ( !v76 ) /*0x1008eff4d*/
  {
    *(_QWORD *)v17 = 0x8000000000000000LL; /*0x1008effa3*/
    if ( (_BYTE)v15 ) /*0x1008effa9*/
      goto LABEL_29; /*0x1008effa9*/
    goto LABEL_31; /*0x1008effa9*/
  }
  v35 = *(const void **)(v77 + 8); /*0x1008eff53*/
  v36 = *(_QWORD *)(v77 + 16); /*0x1008eff57*/
  codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines_with_strategy::h57dd05abf4b9373b( /*0x1008eff72*/
    v71,
    v35,
    v36,
    v75,
    v76,
    1);
  if ( LODWORD(v71[0]) != 11 ) /*0x1008eff7e*/
  {
    qmemcpy((void *)(v17 + 8), v71, 0x60u); /*0x1008effbd*/
LABEL_28:
    *(_QWORD *)v17 = 0x8000000000000001LL; /*0x1008effc0*/
    if ( (_BYTE)v15 ) /*0x1008effd4*/
    {
LABEL_29:
      if ( (_QWORD)v67 ) /*0x1008effe0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67 + 1), v67, 1); /*0x1008effee*/
    }
LABEL_31:
    if ( (_QWORD)v56 != 0x8000000000000000LL ) /*0x1008efffd*/
    {
      if ( (_QWORD)v56 ) /*0x1008f0002*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v56 + 1), v56, 1); /*0x1008f0010*/
      if ( (_QWORD)v58 ) /*0x1008f001f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v58 + 1), v58, 1); /*0x1008f002d*/
    }
    if ( (_QWORD)v60 != 0x8000000000000000LL ) /*0x1008f003c*/
    {
      if ( (_QWORD)v60 ) /*0x1008f0041*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v60 + 1), v60, 1); /*0x1008f004f*/
      if ( (_QWORD)v62 ) /*0x1008f005e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v62 + 1), v62, 1); /*0x1008f006c*/
    }
    v40 = v76; /*0x1008f0071*/
    if ( v76 ) /*0x1008f0078*/
    {
      v41 = (_QWORD *)(v75 + 56); /*0x1008f0082*/
      do /*0x1008f0097*/
      {
        v42 = *(v41 - 7); /*0x1008f009d*/
        if ( v42 ) /*0x1008f00a4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v41 - 6), v42, 1); /*0x1008f00af*/
        v43 = *(v41 - 1); /*0x1008f00b4*/
        if ( v43 ) /*0x1008f00bb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v41, v43, 1); /*0x1008f00c5*/
        v41 += 9; /*0x1008f0090*/
        --v40; /*0x1008f0094*/
      }
      while ( v40 ); /*0x1008f0097*/
    }
    goto LABEL_62; /*0x1008f0097*/
  }
  if ( v36 < 0 ) /*0x1008eff83*/
  {
    v39 = 0; /*0x1008eff89*/
    goto LABEL_24; /*0x1008eff89*/
  }
  if ( v36 ) /*0x1008f00cc*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v35, v37, v38); /*0x1008f00ce*/
    v39 = 1; /*0x1008f00d3*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x1008f00e1*/
    if ( !v44 ) /*0x1008f00e9*/
LABEL_24:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, v36); /*0x1008eff8c*/
    v45 = v44; /*0x1008f00ef*/
  }
  else
  {
    v45 = 1; /*0x1008f00f4*/
  }
  memcpy((void *)v45, v35, v36); /*0x1008f0103*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v71, v77 + 24); /*0x1008f0117*/
  *(_QWORD *)(v17 + 88) = v63; /*0x1008f0123*/
  *(_OWORD *)(v17 + 72) = v62; /*0x1008f0139*/
  *(_QWORD *)(v17 + 64) = v61; /*0x1008f0144*/
  *(_OWORD *)(v17 + 48) = v60; /*0x1008f015a*/
  *(_OWORD *)(v17 + 96) = v56; /*0x1008f016c*/
  *(_QWORD *)(v17 + 112) = v57; /*0x1008f017b*/
  *(_OWORD *)(v17 + 120) = v58; /*0x1008f0186*/
  *(_QWORD *)(v17 + 136) = v59; /*0x1008f019f*/
  v46 = *((_QWORD *)&v71[0] + 1); /*0x1008f01ad*/
  *(_QWORD *)(v17 + 24) = *(_QWORD *)&v71[0]; /*0x1008f01b4*/
  *(_OWORD *)(v17 + 32) = __PAIR128__(*(unsigned __int64 *)&v71[1], v46); /*0x1008f01b8*/
  *(_QWORD *)v17 = v36; /*0x1008f01c7*/
  *(_QWORD *)(v17 + 8) = v45; /*0x1008f01ca*/
  *(_QWORD *)(v17 + 16) = v36; /*0x1008f01ce*/
  if ( (_BYTE)v15 && (_QWORD)v67 ) /*0x1008f01e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v67 + 1), v67, 1); /*0x1008f01ef*/
  v47 = v76; /*0x1008f01f4*/
  if ( v76 ) /*0x1008f01fb*/
  {
    v48 = (_QWORD *)(v75 + 56); /*0x1008f0201*/
    do /*0x1008f0217*/
    {
      v49 = *(v48 - 7); /*0x1008f0219*/
      if ( v49 ) /*0x1008f0220*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v48 - 6), v49, 1); /*0x1008f022b*/
      v50 = *(v48 - 1); /*0x1008f0230*/
      if ( v50 ) /*0x1008f0237*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v48, v50, 1); /*0x1008f0241*/
      v48 += 9; /*0x1008f0210*/
      --v47; /*0x1008f0214*/
    }
    while ( v47 ); /*0x1008f0217*/
  }
LABEL_62:
  if ( v74 ) /*0x1008f024f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, 72 * v74, 8); /*0x1008f0262*/
  return v17; /*0x1008f026a*/
}