// __ZN13codexmate_lib4core5relay19legacy_virtual_auth11read_marker @ 0x10065ecb0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::legacy_virtual_auth::read_marker::hf0b1311d546014fd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rsi
  double result; // xmm0_8
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // rcx
  _QWORD v25[3]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+18h] [rbp-98h] BYREF
  __int64 v27; // [rsp+20h] [rbp-90h]
  __int64 v28; // [rsp+28h] [rbp-88h]
  __int64 v29; // [rsp+30h] [rbp-80h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-78h]
  _QWORD *v31; // [rsp+40h] [rbp-70h]
  __int64 v32; // [rsp+48h] [rbp-68h]
  __int64 v33; // [rsp+50h] [rbp-60h]
  _QWORD *v34; // [rsp+58h] [rbp-58h]
  _QWORD *v35; // [rsp+60h] [rbp-50h] BYREF
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+68h] [rbp-48h]
  _QWORD *v37; // [rsp+70h] [rbp-40h]
  __int64 v38; // [rsp+78h] [rbp-38h]
  _QWORD v39[6]; // [rsp+80h] [rbp-30h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v26, a2, a3, "virtual-auth-marker.json", 24); /*0x10065ecdb*/
  v3 = v27; /*0x10065ece0*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v29, v27, v28); /*0x10065ecf5*/
  v4 = v29; /*0x10065ed04*/
  v5 = (__int64)v30; /*0x10065ed08*/
  if ( __OFSUB__(-v29, 1) ) /*0x10065ed0f*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v30) ) /*0x10065ed1b*/
    {
      v39[0] = v5; /*0x10065ed28*/
      v35 = v39; /*0x10065ed30*/
      v36 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10065ed3b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017C2B3C, &v35); /*0x10065ed51*/
      a1[3] = v25[2]; /*0x10065ed5d*/
      v6 = v25[0]; /*0x10065ed61*/
      a1[2] = v25[1]; /*0x10065ed6f*/
      a1[1] = v6; /*0x10065ed73*/
      *a1 = 10; /*0x10065ed77*/
      if ( (v39[0] & 3) != 1 ) /*0x10065ed8a*/
        goto LABEL_26; /*0x10065ed8a*/
      v7 = v39[0] - 1LL; /*0x10065ed90*/
      v8 = *(_QWORD *)(v39[0] - 1LL); /*0x10065ed94*/
      v9 = *(_QWORD *)(v39[0] + 7LL); /*0x10065ed98*/
      if ( *(_QWORD *)v9 ) /*0x10065ed9c*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x10065eda8*/
      v10 = *(_QWORD *)(v9 + 8); /*0x10065edaa*/
      if ( v10 ) /*0x10065edb1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x10065edba*/
      v11 = 24; /*0x10065edbf*/
      v12 = 8; /*0x10065edc4*/
      v13 = v7; /*0x10065edc9*/
    }
    else
    {
      a1[1] = 0x8000000000000000LL; /*0x10065eeba*/
      *a1 = 11; /*0x10065eebe*/
      if ( (v5 & 3) != 1 ) /*0x10065eece*/
        goto LABEL_26; /*0x10065eece*/
      v19 = v5 - 1; /*0x10065eed4*/
      v20 = *(_QWORD *)(v5 - 1); /*0x10065eed8*/
      v21 = *(_QWORD *)(v5 + 7); /*0x10065eedc*/
      if ( *(_QWORD *)v21 ) /*0x10065eee0*/
        (*(void (__fastcall **)(__int64))v21)(v20); /*0x10065eeeb*/
      v22 = *(_QWORD *)(v21 + 8); /*0x10065eeed*/
      if ( v22 ) /*0x10065eef4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x10065eefd*/
      v11 = 24; /*0x10065ef02*/
      v12 = 8; /*0x10065ef07*/
      v13 = v19; /*0x10065ef0c*/
    }
    goto LABEL_25; /*0x10065edcc*/
  }
  v29 = (__int64)v30; /*0x10065edd5*/
  v30 = v31; /*0x10065edd9*/
  v31 = nullptr; /*0x10065eddd*/
  v32 = 0; /*0x10065ede5*/
  v33 = v5; /*0x10065eded*/
  v34 = v30; /*0x10065edf1*/
  serde_json::de::from_trait::h78f51ac4d2f12421(&v35, &v29); /*0x10065edfd*/
  v14 = v35; /*0x10065ee02*/
  v15 = v36; /*0x10065ee06*/
  if ( v35 == (_QWORD *)0x8000000000000000LL ) /*0x10065ee0d*/
  {
    v39[0] = v36; /*0x10065ee0f*/
    v35 = v39; /*0x10065ee17*/
    v36 = (__int64 (__fastcall *)(_QWORD, _QWORD))_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10065ee22*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_1017C2B67, &v35); /*0x10065ee35*/
    v37 = v31; /*0x10065ee3e*/
    v36 = (__int64 (__fastcall *)(_QWORD, _QWORD))v30; /*0x10065ee4a*/
    v35 = (_QWORD *)v29; /*0x10065ee4e*/
    v16 = v39[0]; /*0x10065ee52*/
    if ( *(_QWORD *)v39[0] == 1 ) /*0x10065ee5e*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v39[0] + 8LL); /*0x10065ef15*/
    }
    else if ( !*(_QWORD *)v39[0] ) /*0x10065ee56*/
    {
      v17 = *(_QWORD *)(v39[0] + 16LL); /*0x10065ee6d*/
      if ( v17 ) /*0x10065ee74*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v39[0] + 8LL), v17, 1); /*0x10065ee83*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 40, 8); /*0x10065ef27*/
    *a1 = 10; /*0x10065ef2c*/
    v24 = v36; /*0x10065ef37*/
    a1[1] = v35; /*0x10065ef3b*/
    a1[2] = v24; /*0x10065ef3f*/
    a1[3] = v37; /*0x10065ef47*/
    if ( v4 ) /*0x10065ef4e*/
      goto LABEL_24; /*0x10065ef4e*/
  }
  else
  {
    v18 = v37; /*0x10065ee8d*/
    a1[4] = v38; /*0x10065ee95*/
    a1[3] = v18; /*0x10065ee99*/
    a1[1] = v14; /*0x10065ee9d*/
    a1[2] = v15; /*0x10065eea1*/
    *a1 = 11; /*0x10065eea5*/
    if ( v4 ) /*0x10065eeaf*/
    {
LABEL_24:
      v12 = 1; /*0x10065ef50*/
      v13 = v5; /*0x10065ef55*/
      v11 = v4; /*0x10065ef58*/
LABEL_25:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, v12); /*0x10065ef5b*/
    }
  }
LABEL_26:
  if ( v26 ) /*0x10065ef6a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v26, 1); /*0x10065ef74*/
  return result; /*0x10065ef79*/
}