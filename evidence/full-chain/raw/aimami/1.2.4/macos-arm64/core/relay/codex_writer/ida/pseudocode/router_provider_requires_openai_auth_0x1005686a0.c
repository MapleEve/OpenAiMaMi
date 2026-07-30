// __ZN13codexmate_lib4core5relay12codex_writer36router_provider_requires_openai_auth @ 0x1005686a0 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::codex_writer::router_provider_requires_openai_auth::h4e183a698d1dc6b3(
        __int64 a1,
        __int64 a2)
{
  __int8 v2; // si
  __int64 v3; // r12
  __int64 v4; // r9
  __m256i *v5; // rdx
  __m256i *v6; // r15
  __m256i *v7; // r8
  __m256i *v8; // rdi
  __m256i *v9; // r13
  __m256i *v10; // r14
  __m256i *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rax
  char v21; // cl
  char v22; // bl
  __int64 *v24; // rbx
  __int64 v25; // rsi
  __int128 v26; // [rsp+0h] [rbp-290h] BYREF
  __int128 v27; // [rsp+10h] [rbp-280h]
  __int64 v28; // [rsp+20h] [rbp-270h]
  __int64 v29; // [rsp+28h] [rbp-268h]
  __m256i *v30; // [rsp+30h] [rbp-260h]
  __m256i *v31; // [rsp+38h] [rbp-258h]
  __m256i *v32; // [rsp+40h] [rbp-250h]
  __m256i *v33; // [rsp+48h] [rbp-248h]
  __m256i *v34; // [rsp+50h] [rbp-240h]
  __m256i *v35; // [rsp+58h] [rbp-238h]
  __m256i *v36; // [rsp+60h] [rbp-230h]
  _BYTE __dst[144]; // [rsp+68h] [rbp-228h] BYREF
  __m256i v38; // [rsp+F8h] [rbp-198h] BYREF
  __int64 v39; // [rsp+118h] [rbp-178h]
  __int64 v40; // [rsp+120h] [rbp-170h]
  __m256i *v41; // [rsp+128h] [rbp-168h]
  __m256i *v42; // [rsp+130h] [rbp-160h]
  __m256i *v43; // [rsp+138h] [rbp-158h]
  __m256i *v44; // [rsp+140h] [rbp-150h]
  __m256i *v45; // [rsp+148h] [rbp-148h]
  __m256i *v46; // [rsp+150h] [rbp-140h]
  __m256i *v47; // [rsp+158h] [rbp-138h]
  _BYTE __src[144]; // [rsp+160h] [rbp-130h] BYREF
  __m256i *v49; // [rsp+1F0h] [rbp-A0h]
  __m256i *v50; // [rsp+1F8h] [rbp-98h]
  __m256i *v51; // [rsp+200h] [rbp-90h]
  __m256i *v52; // [rsp+208h] [rbp-88h]
  __int64 v53; // [rsp+210h] [rbp-80h]
  _BYTE v54[15]; // [rsp+218h] [rbp-78h]
  _QWORD v55[2]; // [rsp+228h] [rbp-68h]
  _QWORD v56[2]; // [rsp+238h] [rbp-58h]
  _QWORD v57[2]; // [rsp+248h] [rbp-48h]
  __m256i *v58; // [rsp+258h] [rbp-38h]
  __int8 v59; // [rsp+267h] [rbp-29h]

  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&v38, a1, a2); /*0x1005686c1*/
  v2 = v38.i8[16]; /*0x1005686d4*/
  v55[0] = *(__int64 *)((char *)&v38.i64[2] + 1); /*0x1005686e2*/
  *(_QWORD *)((char *)v55 + 7) = v38.i64[3]; /*0x1005686ed*/
  v3 = v39; /*0x1005686f1*/
  v4 = v40; /*0x1005686f8*/
  v5 = v42; /*0x1005686ff*/
  v6 = v44; /*0x10056870d*/
  v7 = v45; /*0x100568714*/
  v8 = v46; /*0x10056871b*/
  if ( v38.i64[0] == 2 ) /*0x100568726*/
  {
    v58 = v43; /*0x100568728*/
    v57[0] = v55[0]; /*0x100568734*/
    *(_QWORD *)((char *)v57 + 7) = *(_QWORD *)((char *)v55 + 7); /*0x100568738*/
    v56[0] = v57[0]; /*0x100568744*/
    *(_QWORD *)((char *)v56 + 7) = *(_QWORD *)((char *)v55 + 7); /*0x100568748*/
    if ( v38.i64[1] != 2 ) /*0x100568750*/
      goto LABEL_3; /*0x100568750*/
  }
  else
  {
    v50 = v41; /*0x1005687a4*/
    v58 = v47; /*0x1005687b2*/
    v51 = v42; /*0x1005687b6*/
    v59 = v38.i8[16]; /*0x1005687bd*/
    v49 = v46; /*0x1005687c8*/
    v52 = v45; /*0x1005687db*/
    v53 = v40; /*0x1005687e2*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1005687e6*/
    v57[0] = v55[0]; /*0x1005687ef*/
    *(_QWORD *)((char *)v57 + 7) = *(_QWORD *)((char *)v55 + 7); /*0x1005687f7*/
    v26 = v38.i128[0]; /*0x1005687fb*/
    LOBYTE(v27) = v38.i8[16]; /*0x10056880d*/
    *(_QWORD *)((char *)&v27 + 1) = v57[0]; /*0x100568817*/
    *((_QWORD *)&v27 + 1) = *(_QWORD *)((char *)v55 + 7); /*0x100568822*/
    v28 = v39; /*0x100568829*/
    v29 = v40; /*0x100568834*/
    v30 = v41; /*0x100568842*/
    v31 = v42; /*0x100568850*/
    v32 = v43; /*0x100568857*/
    v33 = v44; /*0x10056885e*/
    v34 = v45; /*0x10056886c*/
    v35 = v46; /*0x10056887a*/
    v36 = v47; /*0x100568885*/
    v8 = &v38; /*0x10056888c*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::ha19f9a9fd5d137dd( /*0x10056889a*/
      &v38,
      &v26);
    v2 = v38.i8[8]; /*0x1005688a6*/
    v56[0] = *(__int64 *)((char *)&v38.i64[1] + 1); /*0x1005688b4*/
    *(_QWORD *)((char *)v56 + 7) = v38.i64[2]; /*0x1005688bf*/
    if ( v38.i64[0] != 2 ) /*0x1005688c7*/
    {
      v5 = v41; /*0x1005688cb*/
      v58 = v42; /*0x1005688d9*/
      v6 = v43; /*0x1005688dd*/
      v7 = v44; /*0x1005688e4*/
      v8 = v45; /*0x1005688eb*/
    }
    v3 = v38.i64[3]; /*0x1005688f2*/
    v4 = v39; /*0x1005688f9*/
    if ( v38.i64[0] != 2 ) /*0x100568904*/
    {
LABEL_3:
      v9 = v5; /*0x100568756*/
      if ( v3 ) /*0x10056875c*/
      {
        v10 = v7; /*0x10056876c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x10056876f*/
        v7 = v10; /*0x100568777*/
      }
      if ( 2LL * (_QWORD)v7 ) /*0x10056877a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1005689d1*/
        v11 = v58; /*0x1005689d9*/
        if ( !v6 ) /*0x1005689dd*/
          goto LABEL_24; /*0x1005689dd*/
      }
      else
      {
        v11 = v58; /*0x10056878e*/
        if ( !v6 ) /*0x100568792*/
        {
LABEL_24:
          if ( v9 ) /*0x100568a14*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24LL * (_QWORD)v9, 8); /*0x100568a27*/
          return 2; /*0x100568a27*/
        }
      }
      v24 = &v11->i64[1]; /*0x1005689df*/
      do /*0x1005689f7*/
      {
        v25 = *(v24 - 1); /*0x1005689f9*/
        if ( v25 ) /*0x100568a00*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v25, 1); /*0x100568a0a*/
        v24 += 3; /*0x1005689f0*/
        v6 = (__m256i *)((char *)v6 - 1); /*0x1005689f4*/
      }
      while ( v6 ); /*0x1005689f7*/
      goto LABEL_24; /*0x1005689f7*/
    }
  }
  *(_QWORD *)&v54[7] = *(_QWORD *)((char *)v56 + 7); /*0x100568912*/
  *(_QWORD *)v54 = v56[0]; /*0x100568916*/
  if ( v2 == 7 ) /*0x10056891e*/
    return 2; /*0x100568a2c*/
  *((_QWORD *)&v26 + 1) = *(_QWORD *)&v54[7]; /*0x10056892c*/
  *(_QWORD *)((char *)&v26 + 1) = *(_QWORD *)v54; /*0x100568933*/
  *(_QWORD *)&v27 = v3; /*0x10056893a*/
  *((_QWORD *)&v27 + 1) = v4; /*0x100568941*/
  LOBYTE(v26) = v2; /*0x100568948*/
  v12 = ((__int64 (__fastcall *)(void *, __int64, __int128 *, _QWORD, __m256i *))_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e)( /*0x100568962*/
          &anon_d163fe72d6e6e73a137b22815ab75905_111,
          15,
          &v26,
          *(_QWORD *)&v54[7],
          v7);
  if ( !v12 /*0x10056899c*/
    || (v16 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
                &anon_d163fe72d6e6e73a137b22815ab75905_28,
                6,
                v12,
                v13,
                v14,
                v15,
                v26,
                *((_QWORD *)&v26 + 1),
                v27,
                *((_QWORD *)&v27 + 1))) == 0
    || (v20 = (_BYTE *)_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
                         "requires_openai_auth",
                         20,
                         v16,
                         v17,
                         v18,
                         v19,
                         v26,
                         *((_QWORD *)&v26 + 1),
                         v27,
                         *((_QWORD *)&v27 + 1))) == nullptr )
  {
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::h14ec595d3c1389e4(&v26); /*0x1005689c2*/
    return 2; /*0x1005689c7*/
  }
  v21 = 2; /*0x10056899e*/
  if ( *v20 == 3 ) /*0x1005689a3*/
    v21 = v20[1]; /*0x1005689a5*/
  v22 = v21; /*0x1005689b0*/
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::h14ec595d3c1389e4(&v26); /*0x1005689b2*/
  return v22; /*0x100568a2e*/
}