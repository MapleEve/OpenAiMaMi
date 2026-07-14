// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100522f50 depth=1
__int64 __fastcall codexmate_lib::core::repository::Repository::load_settings::h93ac22c1afd6e8d4(
        _BYTE *__dst,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 *v7; // rax
  __int64 v8; // rcx
  char v9; // cl
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  _QWORD v15[4]; // [rsp+0h] [rbp-190h] BYREF
  __int64 v16; // [rsp+20h] [rbp-170h]
  _QWORD v17[2]; // [rsp+28h] [rbp-168h] BYREF
  __int64 v18; // [rsp+38h] [rbp-158h]
  __int64 __src[19]; // [rsp+40h] [rbp-150h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-B0h]
  __int64 v22; // [rsp+E8h] [rbp-A8h]
  __int64 v23; // [rsp+F0h] [rbp-A0h]
  __int64 v24; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v25; // [rsp+100h] [rbp-90h]
  __int64 v26; // [rsp+108h] [rbp-88h]
  __int64 v27; // [rsp+110h] [rbp-80h]
  __int64 v28; // [rsp+118h] [rbp-78h] BYREF
  __int64 v29; // [rsp+120h] [rbp-70h]
  __int64 v30; // [rsp+128h] [rbp-68h]
  __int64 v31; // [rsp+130h] [rbp-60h]
  __int64 v32; // [rsp+138h] [rbp-58h] BYREF
  __int64 v33; // [rsp+140h] [rbp-50h]
  __int64 v34; // [rsp+148h] [rbp-48h]
  __int64 v35; // [rsp+150h] [rbp-40h]
  char v36; // [rsp+15Fh] [rbp-31h] BYREF
  __int64 v37; // [rsp+160h] [rbp-30h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, *(const void **)(a2 + 440), *(_QWORD *)(a2 + 448)); /*0x100522f89*/
  v2 = __src[0]; /*0x100522f8e*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x100522f98*/
  {
    __dst[144] = 0; /*0x100522fa1*/
    *((_QWORD *)__dst + 2) = 0; /*0x100522fa9*/
    *((_QWORD *)__dst + 3) = 1; /*0x100522fb1*/
    *((_QWORD *)__dst + 4) = 0; /*0x100522fb9*/
    *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x100522fc1*/
    *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x100522fc5*/
    *(_QWORD *)__dst = 0; /*0x100522fc9*/
    *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x100522fd0*/
    __dst[136] = 0; /*0x100522fd4*/
    *((_QWORD *)__dst + 5) = 0; /*0x100522fdc*/
    *((_QWORD *)__dst + 6) = 8; /*0x100522fe4*/
    *((_QWORD *)__dst + 7) = 0; /*0x100522fec*/
    result = __src[1]; /*0x100522ff4*/
    if ( (__src[1] & 3) != 1 ) /*0x100523003*/
      return result; /*0x100523003*/
    v4 = *(_QWORD *)(__src[1] + 7); /*0x100523011*/
    if ( *(_QWORD *)v4 ) /*0x100523015*/
      (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(__src[1] - 1)); /*0x100523021*/
    if ( *(_QWORD *)(v4 + 8) ) /*0x100523023*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100523035*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100523035*/
  }
  v5 = __src[1]; /*0x10052304c*/
  __src[0] = __src[1]; /*0x10052305a*/
  __src[1] = __src[2]; /*0x100523061*/
  __src[2] = 0; /*0x100523068*/
  __src[3] = 0; /*0x100523073*/
  __src[4] = __src[0]; /*0x10052307e*/
  __src[5] = __src[1]; /*0x100523085*/
  serde_json::de::from_trait::h13c6255c2aa0fc50(&v28, __src); /*0x100523097*/
  if ( (_BYTE)v28 == 6 ) /*0x1005230a0*/
  {
    __dst[144] = 0; /*0x1005230a6*/
    *((_QWORD *)__dst + 2) = 0; /*0x1005230ae*/
    *((_QWORD *)__dst + 3) = 1; /*0x1005230b6*/
    *((_QWORD *)__dst + 4) = 0; /*0x1005230be*/
    *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x1005230c6*/
    *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x1005230ca*/
    *(_QWORD *)__dst = 0; /*0x1005230ce*/
    *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x1005230d5*/
    __dst[136] = 0; /*0x1005230d9*/
    *((_QWORD *)__dst + 5) = 0; /*0x1005230e1*/
    *((_QWORD *)__dst + 6) = 8; /*0x1005230e9*/
    *((_QWORD *)__dst + 7) = 0; /*0x1005230f1*/
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea( /*0x1005230fd*/
               &v28,
               __src);
    if ( v2 ) /*0x100523105*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100523127*/
    return result; /*0x100523127*/
  }
  v27 = v31; /*0x100523130*/
  v26 = v30; /*0x100523138*/
  v25 = v29; /*0x100523147*/
  v24 = v28; /*0x10052314e*/
  if ( !_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100523168*/
          "mysteryUnlockGrantsmysteryUnlockedRoutes",
          0x13u,
          (__int64)&v24) )
  {
    v7 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005232f0*/
                      "mysteryUnlockedRoutes",
                      0x15u,
                      (__int64)&v24);
    if ( v7 ) /*0x1005232f8*/
    {
      switch ( *(_BYTE *)v7 ) /*0x10052330f*/
      {
        case 0: /*0x10052330f*/
          LOBYTE(__src[0]) = 0; /*0x1005233a1*/
          break; /*0x1005233a8*/
        case 1: /*0x10052330f*/
        case 2: /*0x10052330f*/
          __src[3] = v7[3]; /*0x100523315*/
          __src[2] = v7[2]; /*0x100523320*/
          v8 = *v7; /*0x100523327*/
          __src[1] = v7[1]; /*0x10052332e*/
          __src[0] = v8; /*0x100523335*/
          break; /*0x10052333c*/
        case 3: /*0x10052330f*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1005233b8*/
            (size_t *)&__src[1],
            (__int64)(v7 + 1));
          LOBYTE(__src[0]) = 3; /*0x1005233bd*/
          break; /*0x1005233c4*/
        case 4: /*0x10052330f*/
          _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d( /*0x100523393*/
            &__src[1],
            v7[2],
            v7[3]);
          LOBYTE(__src[0]) = 4; /*0x100523398*/
          break; /*0x10052339f*/
        case 5: /*0x10052330f*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he012ef89ab8ef3d5( /*0x1005233d4*/
            &__src[1],
            v7 + 1);
          LOBYTE(__src[0]) = 5; /*0x1005233d9*/
          break; /*0x1005233d9*/
      }
      v23 = __src[3]; /*0x1005233e7*/
      v22 = __src[2]; /*0x1005233f5*/
      v9 = __src[0]; /*0x1005233fc*/
      v21 = __src[1]; /*0x10052340a*/
      v20 = __src[0]; /*0x100523411*/
      if ( LOBYTE(__src[0]) == 4 ) /*0x10052341b*/
      {
        v16 = __src[0]; /*0x100523421*/
        v15[0] = v22; /*0x100523444*/
        v15[1] = v22; /*0x10052344b*/
        v15[2] = v21; /*0x100523452*/
        v15[3] = v22 + 32 * v23; /*0x100523459*/
        v37 = v5; /*0x10052346e*/
        ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6752ec8e8eac1c67)( /*0x100523472*/
          v17,
          v15);
        v10 = (__int64)v17; /*0x10052347b*/
        serde_core::ser::Serializer::collect_seq::h043b54613b775f24(&v28, v17); /*0x100523482*/
        v11 = v18; /*0x100523487*/
        if ( v18 ) /*0x100523491*/
        {
          v12 = v17[1] + 24LL; /*0x10052349a*/
          do /*0x1005234a7*/
          {
            v10 = *(_QWORD *)(v12 - 8); /*0x1005234a9*/
            if ( v10 ) /*0x1005234b0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005234ba*/
            v12 += 40; /*0x1005234a0*/
            --v11; /*0x1005234a4*/
          }
          while ( v11 ); /*0x1005234a7*/
        }
        if ( v17[0] ) /*0x1005234cb*/
        {
          v10 = 40LL * v17[0]; /*0x1005234d8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005234e1*/
        }
        __src[1] = 0; /*0x1005234e6*/
        __src[2] = 8; /*0x1005234f1*/
        __src[3] = 0; /*0x1005234fc*/
        LOBYTE(__src[0]) = 4; /*0x100523507*/
        v5 = v37; /*0x100523512*/
        if ( (_BYTE)v28 == 6 ) /*0x100523516*/
        {
          v35 = __src[3]; /*0x10052351f*/
          v34 = __src[2]; /*0x10052352a*/
          v33 = __src[1]; /*0x10052353c*/
          v32 = __src[0]; /*0x100523540*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea( /*0x100523548*/
            &v28,
            v10);
        }
        else
        {
          v35 = v31; /*0x100523553*/
          v34 = v30; /*0x10052355b*/
          v33 = v29; /*0x100523567*/
          v32 = v28; /*0x10052356b*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(__src); /*0x100523576*/
        }
        v13 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100523593*/
                           "mysteryUnlockGrantsmysteryUnlockedRoutes",
                           0x13u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v13); /*0x100523599*/
        v13[3] = v35; /*0x1005235a2*/
        v13[2] = v34; /*0x1005235ab*/
        v14 = v32; /*0x1005235b0*/
        v13[1] = v33; /*0x1005235b8*/
        *v13 = v14; /*0x1005235bd*/
        v9 = v16; /*0x1005235c1*/
      }
      if ( (v9 & 5) != 4 ) /*0x1005235ce*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v20); /*0x1005235db*/
    }
  }
  v31 = v27; /*0x10052317a*/
  v30 = v26; /*0x100523185*/
  v29 = v25; /*0x100523197*/
  v28 = v24; /*0x10052319b*/
  if ( (unsigned __int8)v24 == 4 ) /*0x1005231a5*/
  {
    v22 = v27; /*0x1005231e4*/
    v21 = v26; /*0x1005231f9*/
    v20 = v25; /*0x100523200*/
    serde_json::value::de::visit_array::h069239bf22b8c6a1(__src); /*0x100523215*/
  }
  else
  {
    if ( (unsigned __int8)v24 != 5 ) /*0x1005231aa*/
    {
      v37 = v5; /*0x1005235e5*/
      v6 = (_QWORD *)serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x1005235fd*/
                       &v28,
                       &v36,
                       &unk_101532070);
      __src[0] = 2; /*0x100523600*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v28); /*0x10052360f*/
      goto LABEL_18; /*0x100523618*/
    }
    v34 = v27; /*0x1005231b4*/
    v33 = v26; /*0x1005231c6*/
    v32 = v25; /*0x1005231ca*/
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_any::h2c59c84d57b2cfc5( /*0x1005231d9*/
      __src,
      &v32);
  }
  if ( __src[0] != 2 ) /*0x100523222*/
  {
    result = (__int64)memcpy(__dst, __src, 0x98u); /*0x1005232ca*/
    if ( !v2 ) /*0x1005232d2*/
      return result; /*0x1005232d2*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005232d2*/
  }
  v6 = (_QWORD *)__src[1]; /*0x100523228*/
LABEL_18:
  __dst[144] = 0; /*0x10052322f*/
  *((_QWORD *)__dst + 2) = 0; /*0x100523237*/
  *((_QWORD *)__dst + 3) = 1; /*0x10052323f*/
  *((_QWORD *)__dst + 4) = 0; /*0x100523247*/
  *((_QWORD *)__dst + 8) = 0x8000000000000000LL; /*0x10052324f*/
  *((_QWORD *)__dst + 11) = 0x8000000000000000LL; /*0x100523253*/
  *(_QWORD *)__dst = 0; /*0x100523257*/
  *((_QWORD *)__dst + 14) = 0x8000000000000000LL; /*0x10052325e*/
  __dst[136] = 0; /*0x100523262*/
  *((_QWORD *)__dst + 5) = 0; /*0x10052326a*/
  *((_QWORD *)__dst + 6) = 8; /*0x100523272*/
  *((_QWORD *)__dst + 7) = 0; /*0x10052327a*/
  if ( *v6 == 1 ) /*0x10052328a*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v6 + 1); /*0x100523346*/
  }
  else if ( !*v6 && v6[2] ) /*0x100523299*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005232b1*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100523358*/
  if ( v2 ) /*0x100523360*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052336d*/
  return result; /*0x100523116*/
}