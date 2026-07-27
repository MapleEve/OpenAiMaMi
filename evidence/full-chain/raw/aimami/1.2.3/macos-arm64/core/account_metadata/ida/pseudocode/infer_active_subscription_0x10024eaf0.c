// __ZN13codexmate_lib4core16account_metadata25infer_active_subscription @ 0x10024eaf0
__int64 __fastcall codexmate_lib::core::account_metadata::infer_active_subscription::h655272301867166e(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const void *v5; // r13
  __int64 v6; // rax
  void *v7; // rsi
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  size_t v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  size_t v17; // r14
  char *v18; // rax
  char *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // bl
  __int64 v23; // rdi
  __m128i si128; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm5
  __m128i v30; // xmm6
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __m128i v36; // xmm4
  char v37[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+8h] [rbp-58h]
  __int64 v39; // [rsp+18h] [rbp-48h] BYREF
  int v40; // [rsp+20h] [rbp-40h]
  __int64 v41; // [rsp+28h] [rbp-38h]
  __int64 v42; // [rsp+30h] [rbp-30h]

  LODWORD(v5) = codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(a1, &off_10195D470, 3); /*0x10024eb1b*/
  if ( (_BYTE)v5 != 2 ) /*0x10024eb20*/
    return (unsigned int)v5; /*0x10024eb20*/
  v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/status/state/account/status/account/state", 7); /*0x10024eb35*/
  if ( !v6 || *(_BYTE *)v6 != 3 ) /*0x10024eb42*/
  {
    v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/state/account/status/account/state", 6); /*0x10024eb53*/
    if ( !v6 || *(_BYTE *)v6 != 3 ) /*0x10024eb60*/
    {
      v7 = &unk_1015DD162; /*0x10024eb62*/
      v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015DD162, 20); /*0x10024eb71*/
      if ( !v6 || *(_BYTE *)v6 != 3 ) /*0x10024eb7e*/
      {
        v8 = 0; /*0x10024ebd7*/
LABEL_9:
        LOBYTE(v5) = 2; /*0x10024eb8d*/
        if ( (a2 & 1) == 0 ) /*0x10024eb93*/
          return (unsigned int)v5; /*0x10024eb93*/
        goto LABEL_10; /*0x10024eb93*/
      }
    }
  }
  v8 = *(_QWORD *)(v6 + 16); /*0x10024eb80*/
  v7 = *(void **)(v6 + 24); /*0x10024eb84*/
  if ( !v8 ) /*0x10024eb8b*/
    goto LABEL_9; /*0x10024eb8b*/
  v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v7); /*0x10024ebde*/
  v14 = v13; /*0x10024ebe3*/
  if ( v13 < 0 ) /*0x10024ebe9*/
  {
    v15 = 0; /*0x10024ebeb*/
    goto LABEL_17; /*0x10024ebeb*/
  }
  if ( !v13 ) /*0x10024ebf9*/
  {
    v8 = 1; /*0x10024ec51*/
    v7 = (void *)v12; /*0x10024ec56*/
    LOBYTE(v5) = 2; /*0x10024ec61*/
    if ( (a2 & 1) == 0 ) /*0x10024ec67*/
      return (unsigned int)v5; /*0x10024ec67*/
LABEL_10:
    v39 = std::time::SystemTime::now::h1fe79e41f9d5677f(v8, v7); /*0x10024eb95*/
    v40 = v9; /*0x10024eb9e*/
    v10 = 0; /*0x10024eba1*/
    std::time::SystemTime::duration_since::had059553cab94f96(v37, &v39, 0, 0); /*0x10024ebaf*/
    if ( !v37[0] ) /*0x10024ebb8*/
      v10 = v38; /*0x10024ebba*/
    LOBYTE(v5) = a3 > v10; /*0x10024ebc1*/
    return (unsigned int)v5; /*0x10024ebc1*/
  }
  v42 = a2; /*0x10024ebfb*/
  v41 = a3; /*0x10024ebff*/
  v5 = (const void *)v12; /*0x10024ec03*/
  v16 = v13; /*0x10024ec06*/
  v17 = v13; /*0x10024ec09*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v7); /*0x10024ec0c*/
  v15 = 1; /*0x10024ec11*/
  v18 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x10024ec1f*/
  v14 = v17; /*0x10024ec24*/
  if ( !v18 ) /*0x10024ec2a*/
LABEL_17:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x10024ebee*/
  v19 = v18; /*0x10024ec2c*/
  memcpy(v18, v5, v17); /*0x10024ec38*/
  v20 = v16; /*0x10024ec3d*/
  if ( v16 < 8 ) /*0x10024ec44*/
  {
    v21 = 0; /*0x10024ec46*/
    v22 = v42; /*0x10024ec48*/
    do /*0x10024eda4*/
    {
LABEL_33:
      v19[v21] |= 32 * ((unsigned __int8)(v19[v21] - 65) < 0x1Au); /*0x10024ed83*/
      ++v21; /*0x10024ed9e*/
LABEL_34:
      ; /*0x10024eda1*/
    }
    while ( v20 != v21 ); /*0x10024eda4*/
    goto LABEL_35; /*0x10024eda4*/
  }
  if ( v16 < 0x20 ) /*0x10024ec80*/
  {
    v21 = 0; /*0x10024ec82*/
    v22 = v42; /*0x10024ec84*/
    goto LABEL_30; /*0x10024ec88*/
  }
  v21 = v16 & 0x7FFFFFFFFFFFFFE0LL; /*0x10024ec90*/
  v23 = 0; /*0x10024ec93*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10024ec95*/
  v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10024ec9d*/
  v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10024eca5*/
  v22 = v42; /*0x10024ecad*/
  do /*0x10024ed19*/
  {
    v27 = _mm_loadu_si128((const __m128i *)&v19[v23]); /*0x10024ecc0*/
    v28 = _mm_loadu_si128((const __m128i *)&v19[v23 + 16]); /*0x10024ecc6*/
    v29 = _mm_add_epi8(v27, si128); /*0x10024ecd1*/
    v30 = _mm_add_epi8(v28, si128); /*0x10024ecd9*/
    *(__m128i *)&v19[v23] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v29, v25), v29), v26), v27); /*0x10024ed05*/
    *(__m128i *)&v19[v23 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v30, v25), v30), v26), v28); /*0x10024ed0b*/
    v23 += 32; /*0x10024ed12*/
  }
  while ( v21 != v23 ); /*0x10024ed19*/
  if ( v20 != v21 ) /*0x10024ed1e*/
  {
    if ( (v17 & 0x18) == 0 ) /*0x10024ed28*/
      goto LABEL_33; /*0x10024ed28*/
LABEL_30:
    v31 = v21; /*0x10024ed2a*/
    v21 = v20 & 0x7FFFFFFFFFFFFFF8LL; /*0x10024ed34*/
    v32 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10024ed37*/
    v33 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10024ed3f*/
    v34 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10024ed47*/
    do /*0x10024ed7f*/
    {
      v35 = _mm_loadl_epi64((const __m128i *)&v19[v31]); /*0x10024ed50*/
      v36 = _mm_add_epi8(v35, v32); /*0x10024ed5a*/
      *(_QWORD *)&v19[v31] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v36, v33), v36), v34), v35).u64[0]; /*0x10024ed72*/
      v31 += 8; /*0x10024ed78*/
    }
    while ( v21 != v31 ); /*0x10024ed7f*/
    goto LABEL_34; /*0x10024ed7f*/
  }
LABEL_35:
  switch ( v20 ) /*0x10024edc2*/
  {
    case 6uLL: /*0x10024edc2*/
      if ( *(_DWORD *)v19 ^ 0x69746361 | *((unsigned __int16 *)v19 + 2) ^ 0x6576 ) /*0x10024edd9*/
        goto LABEL_43; /*0x10024eddb*/
      goto LABEL_47; /*0x10024eddb*/
    case 7uLL: /*0x10024edc2*/
      if ( !(*(_DWORD *)v19 ^ 0x69707865 | *(_DWORD *)(v19 + 3) ^ 0x64657269) ) /*0x10024ee6d*/
        goto LABEL_46; /*0x10024ee6f*/
      goto LABEL_43; /*0x10024ee6f*/
    case 8uLL: /*0x10024edc2*/
      if ( *(_QWORD *)v19 == 0x676E696C61697274LL ) /*0x10024edf0*/
      {
LABEL_47:
        LOBYTE(v5) = 1; /*0x10024ee76*/
        goto LABEL_48; /*0x10024ee76*/
      }
      if ( *(_QWORD *)v19 == 0x64656C65636E6163LL || *(_QWORD *)v19 == 0x6576697463616E69LL ) /*0x10024ee14*/
      {
LABEL_46:
        LODWORD(v5) = 0; /*0x10024ee71*/
LABEL_48:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v17, 1); /*0x10024ee79*/
        return (unsigned int)v5; /*0x10024ee89*/
      }
LABEL_43:
      v8 = (__int64)v19; /*0x10024ee35*/
      v7 = (void *)v17; /*0x10024ee3d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v17, 1); /*0x10024ee40*/
      a3 = v41; /*0x10024ee45*/
      LOBYTE(v5) = 2; /*0x10024ee49*/
      if ( (v22 & 1) != 0 ) /*0x10024ee4f*/
        goto LABEL_10; /*0x10024ee4f*/
      return (unsigned int)v5;
    case 9uLL: /*0x10024edc2*/
      if ( *(_QWORD *)v19 ^ 0x656C6C65636E6163LL | (unsigned __int8)v19[8] ^ 0x64LL ) /*0x10024ee30*/
        goto LABEL_43; /*0x10024ee33*/
      goto LABEL_46; /*0x10024ee33*/
    default:
      goto LABEL_43;
  }
}