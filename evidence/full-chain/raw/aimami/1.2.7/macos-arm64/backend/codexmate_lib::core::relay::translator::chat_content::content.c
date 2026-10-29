// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::translator::chat_content::content::hc6150f2d711a50cb; addr: 0x100398a30; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
__int64 __fastcall codexmate_lib::core::relay::translator::chat_content::content::hc6150f2d711a50cb(
        __int64 a1,
        unsigned __int8 *a2,
        _DWORD *a3,
        void *a4)
{
  void *v4; // r15
  int v6; // eax
  size_t v7; // r14
  const void *v8; // r12
  void *v9; // rax
  char v10; // al
  __int64 v11; // r14
  _DWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  bool v23; // cl
  __int64 v24; // rax
  const void *v25; // r13
  size_t v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r15
  _OWORD *v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  _DWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  signed __int64 v47; // r13
  _DWORD *v48; // rax
  __int64 v49; // rdx
  _DWORD *v50; // rax
  __int64 v51; // rdx
  _DWORD *v52; // rax
  __int64 v53; // rdx
  void *v54; // r14
  __int64 v55; // r12
  void *v56; // rax
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v62; // rcx
  __int128 v63; // [rsp+8h] [rbp-128h] BYREF
  __int64 v64; // [rsp+18h] [rbp-118h]
  _DWORD *v65; // [rsp+20h] [rbp-110h]
  __int64 v66; // [rsp+28h] [rbp-108h]
  signed __int64 v67; // [rsp+30h] [rbp-100h]
  __int64 v68; // [rsp+38h] [rbp-F8h]
  void *__src; // [rsp+40h] [rbp-F0h]
  __int64 v70; // [rsp+48h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+50h] [rbp-E0h]
  __int64 v72; // [rsp+60h] [rbp-D0h]
  __int64 v73; // [rsp+68h] [rbp-C8h]
  __int128 v74; // [rsp+70h] [rbp-C0h] BYREF
  __int128 v75; // [rsp+80h] [rbp-B0h]
  __int64 v76; // [rsp+90h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+98h] [rbp-98h]
  __int64 v78; // [rsp+A8h] [rbp-88h]
  __int128 v79; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-70h]
  __int64 v81; // [rsp+C8h] [rbp-68h] BYREF
  __int128 v82; // [rsp+D0h] [rbp-60h]
  __m512i v83; // [rsp+E0h] [rbp-50h] BYREF

  if ( !a2 ) /*0x100398a4a*/
    goto LABEL_5; /*0x100398a4a*/
  v6 = *a2; /*0x100398a4c*/
  if ( v6 != 4 ) /*0x100398a52*/
  {
    if ( v6 == 3 ) /*0x100398a57*/
    {
      v7 = *((_QWORD *)a2 + 3); /*0x100398a69*/
      if ( v7 ) /*0x100398a70*/
      {
        v8 = *((const void **)a2 + 2); /*0x100398a76*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x100398a7a*/
        v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100398a87*/
        if ( !v9 ) /*0x100398a8f*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x100399558*/
        v4 = v9; /*0x100398a95*/
        memcpy(v9, v8, v7); /*0x100398aa1*/
        v10 = 3; /*0x100398aa6*/
      }
      else
      {
        v10 = 0; /*0x1003992ac*/
      }
      *(_BYTE *)a1 = v10; /*0x1003992ae*/
      *(_QWORD *)(a1 + 8) = v7; /*0x1003992b0*/
      *(_QWORD *)(a1 + 16) = v4; /*0x1003992b4*/
      *(_QWORD *)(a1 + 24) = v7; /*0x1003992b8*/
      return a1; /*0x1003992bc*/
    }
    if ( *a2 ) /*0x100398a4c*/
    {
      *(_QWORD *)(a1 + 8) = &loc_1016F14D4; /*0x100398b05*/
      *(_QWORD *)(a1 + 16) = 38; /*0x100398b09*/
      *(_BYTE *)a1 = 6; /*0x100398b11*/
      return a1; /*0x100398b14*/
    }
LABEL_5:
    *(_BYTE *)a1 = 0; /*0x100398a61*/
    return a1; /*0x100398a64*/
  }
  v81 = 0; /*0x100398aad*/
  v82 = 8u; /*0x100398ab5*/
  v11 = *((_QWORD *)a2 + 3); /*0x100398ac5*/
  if ( !v11 ) /*0x100398acc*/
  {
LABEL_77:
    *(_BYTE *)a1 = 0; /*0x100399424*/
    goto LABEL_78; /*0x100399424*/
  }
  v13 = a3; /*0x100398ad5*/
  v14 = *((_QWORD *)a2 + 2); /*0x100398ad8*/
  v15 = v14 + 32 * v11; /*0x100398ae0*/
  v68 = 0; /*0x100398ae3*/
  v65 = v13; /*0x100398aee*/
  v66 = v15; /*0x100398af5*/
  while ( 1 ) /*0x100398bbc*/
  {
    while ( 1 ) /*0x100398b88*/
    {
      v73 = v14; /*0x100398b88*/
      v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100398b8f*/
              "typeuserinfoweek_up_",
              4,
              v14);
      if ( !v19 || *(_BYTE *)v19 != 3 ) /*0x100398ba0*/
      {
LABEL_66:
        *(_QWORD *)(a1 + 8) = (char *)&loc_1016F1478 + 1; /*0x1003992c1*/
        *(_QWORD *)(a1 + 16) = 90; /*0x1003992cc*/
        goto LABEL_68; /*0x1003992d4*/
      }
      v20 = *(_QWORD *)(v19 + 16); /*0x100398ba6*/
      v21 = *(_QWORD *)(v19 + 24); /*0x100398baa*/
      if ( v21 == 4 ) /*0x100398bb2*/
      {
        if ( *(_DWORD *)v20 != 1954047348 ) /*0x10039907c*/
          goto LABEL_66; /*0x10039907c*/
        goto LABEL_48; /*0x10039907c*/
      }
      if ( v21 == 11 ) /*0x100398bbc*/
        break; /*0x100398bbc*/
      if ( v21 != 10 || *(_QWORD *)v20 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v20 + 8) ^ 0x7478LL ) /*0x100398be3*/
        goto LABEL_66; /*0x100398be6*/
LABEL_48:
      v45 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100399082*/
              &anon_7534e791983e23e0bbee4dd7c8383343_177,
              4,
              v73);
      if ( !v45 || *(_BYTE *)v45 != 3 ) /*0x1003990a6*/
      {
        *(_QWORD *)(a1 + 8) = &unk_1016F1457; /*0x1003992dd*/
        *(_QWORD *)(a1 + 16) = 34; /*0x1003992e1*/
        goto LABEL_68; /*0x1003992e1*/
      }
      v47 = *(_QWORD *)(v45 + 24); /*0x1003990ac*/
      if ( !v47 ) /*0x1003990b3*/
        goto LABEL_13; /*0x1003990b3*/
      __src = *(void **)(v45 + 16); /*0x1003990bd*/
      *(_QWORD *)&v79 = 0; /*0x1003990c4*/
      v80 = 0; /*0x1003990cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1003990d4*/
        &anon_7534e791983e23e0bbee4dd7c8383343_177,
        4,
        v46);
      v48 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1003990e3*/
      if ( !v48 ) /*0x1003990ef*/
        goto LABEL_87; /*0x1003990ef*/
      *v48 = 1701869940; /*0x1003990f8*/
      v70 = 4; /*0x1003990fe*/
      *(_QWORD *)&v71 = v48; /*0x100399109*/
      *((_QWORD *)&v71 + 1) = 4; /*0x100399110*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v49); /*0x10039911b*/
      v50 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10039912a*/
      if ( !v50 ) /*0x100399132*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100399549*/
      *v50 = 1954047348; /*0x100399138*/
      v83.i8[0] = 3; /*0x10039913e*/
      v83.i64[1] = 4; /*0x100399142*/
      v83.i64[2] = (__int64)v50; /*0x10039914a*/
      v83.i64[3] = 4; /*0x10039914e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v74, &v79, &v70, &v83); /*0x10039916b*/
      if ( (_BYTE)v74 != 6 ) /*0x100399177*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v74); /*0x100399180*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v74, &v79, v51); /*0x100399185*/
      v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100399194*/
      if ( !v52 ) /*0x10039919c*/
LABEL_87:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100399538*/
      *v52 = 1954047348; /*0x1003991a5*/
      v70 = 4; /*0x1003991ab*/
      *(_QWORD *)&v71 = v52; /*0x1003991b6*/
      *((_QWORD *)&v71 + 1) = 4; /*0x1003991bd*/
      if ( v47 < 0 ) /*0x1003991cb*/
      {
        v55 = 0; /*0x100399295*/
        goto LABEL_63; /*0x100399295*/
      }
      v54 = a4; /*0x1003991d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v53); /*0x1003991d4*/
      v55 = 1; /*0x1003991d9*/
      v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 1); /*0x1003991e7*/
      if ( !v56 ) /*0x1003991ef*/
      {
        v67 = v47; /*0x10039955d*/
LABEL_63:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v55, v67); /*0x100399298*/
      }
      v57 = (__int64)v56; /*0x100399202*/
      memcpy(v56, __src, v47); /*0x100399205*/
      v83.i8[0] = 3; /*0x10039920a*/
      v83.i64[1] = v47; /*0x10039920e*/
      v67 = v57; /*0x100399212*/
      v83.i64[2] = v57; /*0x100399219*/
      v83.i64[3] = v47; /*0x10039921d*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v74, &v79, &v70, &v83); /*0x100399237*/
      a4 = v54; /*0x100399243*/
      if ( (_BYTE)v74 != 6 ) /*0x100399246*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v74); /*0x10039924f*/
      v78 = v80; /*0x10039925f*/
      v77 = v79; /*0x10039926f*/
      LOBYTE(v76) = 5; /*0x100399272*/
      v58 = *((_QWORD *)&v82 + 1); /*0x100399279*/
      if ( *((_QWORD *)&v82 + 1) == v81 ) /*0x100399281*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v81); /*0x10039928b*/
      v16 = v82; /*0x100398b19*/
      v17 = 32 * v58; /*0x100398b20*/
      *(_QWORD *)(v82 + v17 + 24) = v78; /*0x100398b2b*/
      *(_QWORD *)(v16 + v17 + 16) = *((_QWORD *)&v77 + 1); /*0x100398b37*/
      v18 = v76; /*0x100398b3c*/
      *(_QWORD *)(v16 + v17 + 8) = v77; /*0x100398b4a*/
      *(_QWORD *)(v16 + v17) = v18; /*0x100398b4f*/
      *((_QWORD *)&v82 + 1) = v58 + 1; /*0x100398b56*/
      v13 = v65; /*0x100398b5a*/
      v15 = v66; /*0x100398b61*/
LABEL_13:
      v14 = v73 + 32; /*0x100398b68*/
      if ( v73 + 32 == v15 ) /*0x100398b76*/
      {
        if ( (v68 & 1) != 0 ) /*0x100399301*/
        {
LABEL_70:
          *(__int128 *)((char *)v83.i128 + 15) = v82; /*0x100399303*/
          *(__int64 *)((char *)v83.i64 + 7) = v81; /*0x100399317*/
          *(_BYTE *)a1 = 4; /*0x10039931b*/
          v59 = v83.i64[1]; /*0x100399322*/
          *(_QWORD *)(a1 + 1) = v83.i64[0]; /*0x100399326*/
          *(_OWORD *)(a1 + 9) = __PAIR128__(v83.u64[2], v59); /*0x10039932a*/
          *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v83.i64[2] + 7); /*0x10039933a*/
          return a1; /*0x10039933e*/
        }
        if ( *((_QWORD *)&v82 + 1) ) /*0x10039934a*/
        {
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2577ccf9d1bb56ec( /*0x100399362*/
            &v74,
            v82,
            v82 + 32LL * *((_QWORD *)&v82 + 1));
          v60 = *((_QWORD *)&v74 + 1); /*0x100399367*/
          alloc::str::join_generic_copy::hb58b9aeee564234c( /*0x100399389*/
            &v83,
            *((_QWORD *)&v74 + 1),
            v75,
            (char *)&loc_1016F14D2 + 1,
            1);
          v77 = *(__int128 *)((char *)v83.i128 + 8); /*0x1003993a1*/
          v76 = v83.i64[0]; /*0x1003993a8*/
          serde_json::value::to_value::h27d37099ce5b26c1(&v83, &v76); /*0x1003993ba*/
          if ( v83.i8[0] == 6 ) /*0x1003993c3*/
          {
            v70 = v83.i64[1]; /*0x1003994ff*/
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016F210E, 43, &v70, &off_101AA7910, &off_101AA73A8); /*0x100399527*/
          }
          *(_OWORD *)(a1 + 16) = v83.i128[1]; /*0x1003993d5*/
          *(_OWORD *)a1 = v83.i128[0]; /*0x1003993e5*/
          if ( v76 ) /*0x1003993f2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1); /*0x100399400*/
          if ( (_QWORD)v74 ) /*0x10039940f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 16 * v74, 8); /*0x10039941d*/
          goto LABEL_78; /*0x100399422*/
        }
        goto LABEL_77; /*0x10039934a*/
      }
    }
    if ( !(*(_QWORD *)v20 ^ 0x745F74757074756FLL | *(_QWORD *)(v20 + 3) ^ 0x747865745F747570LL) ) /*0x100398c15*/
      goto LABEL_48; /*0x100398c15*/
    v22 = 0; /*0x100398c3c*/
    v23 = (*(_QWORD *)v20 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v20 + 3) ^ 0x6567616D695F7475LL) != 0; /*0x100398c41*/
    if ( a4 != (void *)4 ) /*0x100398c48*/
      goto LABEL_66; /*0x100398c48*/
    LOBYTE(v22) = v23; /*0x100398c4e*/
    if ( v22 || *v13 != 1919251317 ) /*0x100398c5f*/
      goto LABEL_66; /*0x100398c5f*/
    v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F13E5, 9, v73); /*0x100398c78*/
    if ( !v24 || *(_BYTE *)v24 != 3 ) /*0x100398c89*/
    {
      *(_QWORD *)(a1 + 8) = (char *)&loc_1016F140D + 2; /*0x100399467*/
      *(_QWORD *)(a1 + 16) = 72; /*0x10039946b*/
      goto LABEL_68; /*0x100399473*/
    }
    v25 = *(const void **)(v24 + 16); /*0x100398c8f*/
    v26 = *(_QWORD *)(v24 + 24); /*0x100398c93*/
    codexmate_lib::core::relay::translator::image_source::parse::hc26bc2feefa94078(&v83, v25, v26); /*0x100398ca1*/
    if ( v83.i32[0] == 1 ) /*0x100398caa*/
      break; /*0x100398caa*/
    __src = (void *)4; /*0x100398cb0*/
    *(_QWORD *)&v79 = 0; /*0x100398cb7*/
    v80 = 0; /*0x100398cbf*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v83, v25, v27); /*0x100398cc7*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x100398cd6*/
    if ( !v28 ) /*0x100398cde*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3); /*0x100399582*/
    *(_BYTE *)(v28 + 2) = 108; /*0x100398ce7*/
    *(_WORD *)v28 = 29301; /*0x100398ceb*/
    v76 = 3; /*0x100398cf0*/
    *(_QWORD *)&v77 = v28; /*0x100398cfb*/
    *((_QWORD *)&v77 + 1) = 3; /*0x100398d02*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(&v83, v26, 0, 1, 1); /*0x100398d21*/
    v29 = v83.i64[1]; /*0x100398d26*/
    if ( v83.i32[0] == 1 ) /*0x100398d2e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v83.i64[1], v83.i64[2]); /*0x1003994bb*/
    v30 = v83.i64[2]; /*0x100398d34*/
    memcpy((void *)v83.i64[2], v25, v26); /*0x100398d41*/
    v83.i8[0] = 3; /*0x100398d46*/
    v83.i64[1] = v29; /*0x100398d4a*/
    v83.i64[2] = v30; /*0x100398d4e*/
    v83.i64[3] = v26; /*0x100398d52*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v74, &v79, &v76, &v83); /*0x100398d6c*/
    a4 = __src; /*0x100398d78*/
    if ( (_BYTE)v74 != 6 ) /*0x100398d7f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v74); /*0x100398d88*/
    v72 = v80; /*0x100398d98*/
    v71 = v79; /*0x100398da8*/
    LOBYTE(v70) = 5; /*0x100398dab*/
    v31 = &unk_1016F13F1; /*0x100398db7*/
    v32 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100398dc5*/
                     &unk_1016F13F1,
                     6,
                     v73);
    if ( v32 ) /*0x100398dcd*/
    {
      if ( *v32 != 3 ) /*0x100398dd2*/
      {
        *(_QWORD *)(a1 + 8) = (char *)&loc_1016F13F5 + 2; /*0x100399494*/
        *(_QWORD *)(a1 + 16) = 24; /*0x100399498*/
        *(_BYTE *)a1 = 6; /*0x1003994a0*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v70); /*0x1003994aa*/
        goto LABEL_78; /*0x1003994af*/
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v83.u32[2], v32 + 8); /*0x100398de3*/
      v83.i8[0] = 3; /*0x100398de8*/
      v31 = (_OWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100398e07*/
                        &unk_1016F13F1,
                        6u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v31); /*0x100398e0a*/
      v31[1] = v83.i128[1]; /*0x100398e1b*/
      *v31 = v83.i128[0]; /*0x100398e2b*/
    }
    *(_QWORD *)&v63 = 0; /*0x100398e2e*/
    v64 = 0; /*0x100398e39*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, 6, v33); /*0x100398e44*/
    v34 = 4; /*0x100398e49*/
    v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100398e59*/
    if ( !v35 ) /*0x100398e61*/
      goto LABEL_91; /*0x100398e61*/
    *v35 = 1701869940; /*0x100398e6a*/
    *(_QWORD *)&v79 = 4; /*0x100398e70*/
    *((_QWORD *)&v79 + 1) = v35; /*0x100398e78*/
    v80 = 4; /*0x100398e7c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v36); /*0x100398e84*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100398e93*/
    if ( !v37 ) /*0x100398e9b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100399593*/
    *(_QWORD *)v37 = 0x72755F6567616D69LL; /*0x100398eab*/
    *(_BYTE *)(v37 + 8) = 108; /*0x100398eae*/
    v83.i8[0] = 3; /*0x100398eb2*/
    v83.i64[1] = 9; /*0x100398eb6*/
    v83.i64[2] = v37; /*0x100398ebe*/
    v83.i64[3] = 9; /*0x100398ec2*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v74, &v63, &v79, &v83); /*0x100398ee0*/
    if ( (_BYTE)v74 != 6 ) /*0x100398eec*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v74); /*0x100398ef5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v74, &v63, v38); /*0x100398efa*/
    v34 = 9; /*0x100398eff*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100398f0f*/
    if ( !v39 ) /*0x100398f17*/
LABEL_91:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v34); /*0x100399571*/
    *(_QWORD *)v39 = 0x72755F6567616D69LL; /*0x100398f2a*/
    *(_BYTE *)(v39 + 8) = 108; /*0x100398f2d*/
    *(_QWORD *)&v79 = 9; /*0x100398f32*/
    *((_QWORD *)&v79 + 1) = v39; /*0x100398f3a*/
    v80 = 9; /*0x100398f3e*/
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h36f13a05a36237ce( /*0x100398f51*/
      &v83,
      &v70);
    v13 = v65; /*0x100398f5a*/
    if ( v83.i8[0] == 6 ) /*0x100398f61*/
    {
      *(_QWORD *)&v74 = v83.i64[1]; /*0x1003994c9*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016F210E, 43, &v74, &off_101AA7910, &off_101AA7390); /*0x1003994f1*/
    }
    v75 = v83.i128[1]; /*0x100398f76*/
    v74 = v83.i128[0]; /*0x100398f8c*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v83, &v63, &v79, &v74); /*0x100398fac*/
    if ( v83.i8[0] != 6 ) /*0x100398fb5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v83); /*0x100398fba*/
    v78 = v64; /*0x100398fcd*/
    v77 = v63; /*0x100398fe3*/
    LOBYTE(v76) = 5; /*0x100398fe6*/
    v40 = *((_QWORD *)&v82 + 1); /*0x100398fed*/
    if ( *((_QWORD *)&v82 + 1) == v81 ) /*0x100398ff5*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v81); /*0x100398ffb*/
    v41 = v82; /*0x100399000*/
    v42 = 32 * v40; /*0x100399007*/
    *(_QWORD *)(v82 + v42 + 24) = v78; /*0x100399012*/
    *(_QWORD *)(v41 + v42 + 16) = *((_QWORD *)&v77 + 1); /*0x10039901e*/
    v43 = v76; /*0x100399023*/
    *(_QWORD *)(v41 + v42 + 8) = v77; /*0x100399031*/
    *(_QWORD *)(v41 + v42) = v43; /*0x100399036*/
    *((_QWORD *)&v82 + 1) = v40 + 1; /*0x10039903d*/
    v44 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v70); /*0x100399048*/
    v14 = v73 + 32; /*0x100399054*/
    LOBYTE(v44) = 1; /*0x100399058*/
    v68 = v44; /*0x10039905a*/
    v15 = v66; /*0x100399061*/
    if ( v73 + 32 == v66 ) /*0x10039906b*/
      goto LABEL_70; /*0x10039906b*/
  }
  v62 = v83.i64[2]; /*0x10039947c*/
  *(_QWORD *)(a1 + 8) = v83.i64[1]; /*0x100399480*/
  *(_QWORD *)(a1 + 16) = v62; /*0x100399484*/
LABEL_68:
  *(_BYTE *)a1 = 6; /*0x1003992e9*/
LABEL_78:
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd649dddbb4e075e3(&v81); /*0x100399427*/
  if ( v81 ) /*0x100399437*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, 32 * v81, 8); /*0x100399446*/
  return a1; /*0x10039944e*/
}