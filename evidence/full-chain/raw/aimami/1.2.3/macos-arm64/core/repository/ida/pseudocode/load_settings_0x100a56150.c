// __ZN13codexmate_lib4core10repository10Repository13load_settings @ 0x100a56150 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(
        _WORD *__dst,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r14
  double result; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rax
  _QWORD v21[3]; // [rsp+8h] [rbp-178h] BYREF
  __int64 v22[4]; // [rsp+20h] [rbp-160h] BYREF
  __int64 v23; // [rsp+40h] [rbp-140h] BYREF
  __int64 v24; // [rsp+48h] [rbp-138h]
  __int64 v25; // [rsp+50h] [rbp-130h]
  __int64 v26; // [rsp+58h] [rbp-128h]
  _QWORD __src[19]; // [rsp+60h] [rbp-120h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-88h] BYREF
  __int64 v29; // [rsp+100h] [rbp-80h]
  __int64 v30; // [rsp+108h] [rbp-78h]
  __int64 v31; // [rsp+110h] [rbp-70h]
  __int64 v32; // [rsp+118h] [rbp-68h]
  __int64 v33; // [rsp+120h] [rbp-60h]
  __int64 v34; // [rsp+128h] [rbp-58h]
  __int64 v35; // [rsp+130h] [rbp-50h]
  __int64 v36; // [rsp+138h] [rbp-48h] BYREF
  __int64 v37; // [rsp+140h] [rbp-40h]
  __int64 v38; // [rsp+148h] [rbp-38h]
  __int64 v39; // [rsp+150h] [rbp-30h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, *(_QWORD *)(a2 + 440), *(_QWORD *)(a2 + 448)); /*0x100a56189*/
  v2 = __src[0]; /*0x100a5618e*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x100a56198*/
  {
    __dst[72] = 512; /*0x100a561a1*/
    *((_QWORD *)__dst + 2) = 0; /*0x100a561ab*/
    *((_QWORD *)__dst + 3) = 1; /*0x100a561b3*/
    *((_QWORD *)__dst + 4) = 0; /*0x100a561bb*/
    *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x100a561c3*/
    *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x100a561c7*/
    *(_QWORD *)__dst = 0; /*0x100a561cb*/
    *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x100a561d2*/
    *((_BYTE *)__dst + 136) = 0; /*0x100a561d6*/
    *((_QWORD *)__dst + 5) = 0; /*0x100a561de*/
    *((_QWORD *)__dst + 6) = 8; /*0x100a561e6*/
    *((_QWORD *)__dst + 7) = 0; /*0x100a561ee*/
    if ( (__src[1] & 3) != 1 ) /*0x100a56205*/
      return result; /*0x100a56205*/
    v3 = __src[1] - 1LL; /*0x100a5620b*/
    v4 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5620f*/
    v5 = *(_QWORD *)(__src[1] + 7LL); /*0x100a56213*/
    if ( *(_QWORD *)v5 ) /*0x100a56217*/
      (*(void (__fastcall **)(__int64))v5)(v4); /*0x100a56223*/
    v6 = *(_QWORD *)(v5 + 8); /*0x100a56225*/
    if ( v6 ) /*0x100a5622d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x100a56237*/
    v7 = 24; /*0x100a5623c*/
    v8 = 8; /*0x100a56241*/
    v9 = v3; /*0x100a56246*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v7, v8); /*0x100a56249*/
  }
  v10 = __src[1]; /*0x100a5624e*/
  __src[0] = __src[1]; /*0x100a5625c*/
  __src[1] = __src[2]; /*0x100a56263*/
  __src[2] = 0; /*0x100a5626a*/
  __src[3] = 0; /*0x100a56275*/
  __src[4] = __src[0]; /*0x100a56280*/
  __src[5] = __src[1]; /*0x100a56287*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v36, __src); /*0x100a56299*/
  if ( (_BYTE)v36 == 6 ) /*0x100a562a2*/
  {
    __dst[72] = 512; /*0x100a562a8*/
    *((_QWORD *)__dst + 2) = 0; /*0x100a562b2*/
    *((_QWORD *)__dst + 3) = 1; /*0x100a562ba*/
    *((_QWORD *)__dst + 4) = 0; /*0x100a562c2*/
    *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x100a562ca*/
    *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x100a562ce*/
    *(_QWORD *)__dst = 0; /*0x100a562d2*/
    *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x100a562d9*/
    *((_BYTE *)__dst + 136) = 0; /*0x100a562dd*/
    *((_QWORD *)__dst + 5) = 0; /*0x100a562e5*/
    *((_QWORD *)__dst + 6) = 8; /*0x100a562ed*/
    *((_QWORD *)__dst + 7) = 0; /*0x100a562f5*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v36); /*0x100a56301*/
    if ( v2 ) /*0x100a56309*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v2, 1); /*0x100a5632b*/
    return result; /*0x100a5632b*/
  }
  v31 = v39; /*0x100a56334*/
  v30 = v38; /*0x100a5633c*/
  v29 = v37; /*0x100a56348*/
  v28 = v36; /*0x100a5634c*/
  if ( !_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a56366*/
          "mysteryUnlockGrantsmysteryUnlockedRoutes",
          19,
          &v28) )
  {
    v17 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a56497*/
                       "mysteryUnlockedRoutes",
                       21,
                       &v28);
    if ( v17 ) /*0x100a5649f*/
    {
      switch ( *(_BYTE *)v17 ) /*0x100a564b6*/
      {
        case 0: /*0x100a564b6*/
          LOBYTE(__src[0]) = 0; /*0x100a56547*/
          break; /*0x100a5654e*/
        case 1: /*0x100a564b6*/
        case 2: /*0x100a564b6*/
          __src[3] = v17[3]; /*0x100a564bc*/
          __src[2] = v17[2]; /*0x100a564c7*/
          v18 = *v17; /*0x100a564ce*/
          __src[1] = v17[1]; /*0x100a564d5*/
          __src[0] = v18; /*0x100a564dc*/
          break; /*0x100a564e3*/
        case 3: /*0x100a564b6*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src[1], v17 + 1); /*0x100a5655e*/
          LOBYTE(__src[0]) = 3; /*0x100a56563*/
          break; /*0x100a5656a*/
        case 4: /*0x100a564b6*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100a56539*/
            &__src[1],
            v17 + 1);
          LOBYTE(__src[0]) = 4; /*0x100a5653e*/
          break; /*0x100a56545*/
        case 5: /*0x100a564b6*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1( /*0x100a5657a*/
            &__src[1],
            v17 + 1);
          LOBYTE(__src[0]) = 5; /*0x100a5657f*/
          break; /*0x100a5657f*/
      }
      v26 = __src[3]; /*0x100a5658d*/
      v25 = __src[2]; /*0x100a5659b*/
      v24 = __src[1]; /*0x100a565b0*/
      v23 = __src[0]; /*0x100a565b7*/
      if ( LOBYTE(__src[0]) == 4 ) /*0x100a565c0*/
      {
        v22[0] = v25; /*0x100a565e2*/
        v22[1] = v25; /*0x100a565e9*/
        v22[2] = v24; /*0x100a565f0*/
        v22[3] = v25 + 32 * v26; /*0x100a565f7*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h85b987b188e3b0d2( /*0x100a5660c*/
          v21,
          v22);
        serde_json::value::to_value::hffcc076442da38a7(&v36, v21); /*0x100a5661c*/
        __src[1] = 0; /*0x100a56621*/
        __src[2] = 8; /*0x100a5662c*/
        __src[3] = 0; /*0x100a56637*/
        LOBYTE(__src[0]) = 4; /*0x100a56642*/
        if ( (_BYTE)v36 == 6 ) /*0x100a5664d*/
        {
          v35 = __src[3]; /*0x100a56656*/
          v34 = __src[2]; /*0x100a56661*/
          v33 = __src[1]; /*0x100a56673*/
          v32 = __src[0]; /*0x100a56677*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v36); /*0x100a5667f*/
        }
        else
        {
          v35 = v39; /*0x100a566a5*/
          v34 = v38; /*0x100a566ad*/
          v33 = v37; /*0x100a566b9*/
          v32 = v36; /*0x100a566bd*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__src); /*0x100a566c8*/
        }
        v19 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100a566e5*/
                          "mysteryUnlockGrantsmysteryUnlockedRoutes",
                          0x13u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v19); /*0x100a566eb*/
        v19[3] = v35; /*0x100a566f4*/
        v19[2] = v34; /*0x100a566fd*/
        v20 = v32; /*0x100a56702*/
        v19[1] = v33; /*0x100a5670a*/
        *v19 = v20; /*0x100a5670f*/
      }
      else if ( (__src[0] & 5) != 4 ) /*0x100a5668a*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v23); /*0x100a56697*/
      }
    }
  }
  v39 = v31; /*0x100a56378*/
  v38 = v30; /*0x100a56380*/
  v37 = v29; /*0x100a5638f*/
  v36 = v28; /*0x100a56393*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::hee5358a6940ddbea(__src); /*0x100a563bb*/
  if ( LODWORD(__src[0]) != 2 ) /*0x100a563c7*/
  {
    memcpy(__dst, __src, 0x98u); /*0x100a56471*/
    if ( !v2 ) /*0x100a56479*/
      return result; /*0x100a56479*/
    goto LABEL_24; /*0x100a56479*/
  }
  __dst[72] = 512; /*0x100a563cd*/
  *((_QWORD *)__dst + 2) = 0; /*0x100a563d7*/
  *((_QWORD *)__dst + 3) = 1; /*0x100a563df*/
  *((_QWORD *)__dst + 4) = 0; /*0x100a563e7*/
  *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x100a563ef*/
  *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x100a563f3*/
  *(_QWORD *)__dst = 0; /*0x100a563f7*/
  *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x100a563fe*/
  *((_BYTE *)__dst + 136) = 0; /*0x100a56402*/
  *((_QWORD *)__dst + 5) = 0; /*0x100a5640a*/
  *((_QWORD *)__dst + 6) = 8; /*0x100a56412*/
  *((_QWORD *)__dst + 7) = 0; /*0x100a5641a*/
  v15 = __src[1]; /*0x100a56422*/
  if ( *(_QWORD *)__src[1] == 1 ) /*0x100a56431*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src[1] + 8LL, &v36, v12, v13, v14); /*0x100a564ed*/
  }
  else if ( !*(_QWORD *)__src[1] ) /*0x100a56429*/
  {
    v16 = *(_QWORD *)(__src[1] + 16LL); /*0x100a56440*/
    if ( v16 ) /*0x100a56448*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(__src[1] + 8LL), v16, 1); /*0x100a56458*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 40, 8); /*0x100a564ff*/
  if ( v2 ) /*0x100a56507*/
  {
LABEL_24:
    v8 = 1; /*0x100a56509*/
    v9 = v10; /*0x100a5650e*/
    v7 = v2; /*0x100a56511*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v7, v8); /*0x100a56514*/
  }
  return result; /*0x100a5631a*/
}