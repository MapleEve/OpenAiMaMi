__int64 *__fastcall codexmate_lib::core::quota_store::save::hf1c84fcccf34deb2(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE *v6; // rax
  char *v7; // rdx
  _UNKNOWN **v8; // rax
  int v9; // r14d
  __int64 v10; // r15
  int v11; // eax
  _BYTE *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 **v19; // r12
  __int64 *v20; // r14
  __int64 v21; // r13
  size_t v22; // rdx
  __int64 v23; // r12
  size_t v24; // r15
  _QWORD v26[3]; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+18h] [rbp-B8h]
  __int64 v28; // [rsp+20h] [rbp-B0h]
  void *__src; // [rsp+28h] [rbp-A8h]
  __int64 *v30; // [rsp+30h] [rbp-A0h] BYREF
  char *v31; // [rsp+38h] [rbp-98h]
  __int64 v32; // [rsp+40h] [rbp-90h]
  __int64 v33; // [rsp+48h] [rbp-88h]
  char v34; // [rsp+50h] [rbp-80h]
  __int64 *v35; // [rsp+58h] [rbp-78h] BYREF
  char *v36; // [rsp+60h] [rbp-70h]
  __int64 v37; // [rsp+68h] [rbp-68h]
  __int64 v38; // [rsp+70h] [rbp-60h] BYREF
  int v39; // [rsp+78h] [rbp-58h] BYREF
  __int64 v40; // [rsp+80h] [rbp-50h] BYREF
  _BYTE *v41; // [rsp+88h] [rbp-48h]
  __int64 v42; // [rsp+90h] [rbp-40h]
  __int16 v43; // [rsp+98h] [rbp-38h] BYREF
  __int64 **v44; // [rsp+A0h] [rbp-30h]

  v6 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x100541346*/
  if ( v6 ) /*0x10054134e*/
  {
    LOWORD(v30) = 511; /*0x100541350*/
    BYTE2(v30) = 1; /*0x100541359*/
    v8 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v30, v6, v7); /*0x10054136a*/
    if ( v8 ) /*0x100541372*/
    {
      *a1 = 2; /*0x100541374*/
      a1[1] = (__int64)v8; /*0x10054137b*/
      return a1; /*0x10054137f*/
    }
  }
  v28 = a2; /*0x100541384*/
  v27 = a3; /*0x10054138b*/
  v9 = *(_DWORD *)(a4 + 32); /*0x100541392*/
  v10 = *(_QWORD *)(a4 + 24); /*0x100541396*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha384cae487c18f5c(&v30, a4); /*0x1005413a7*/
  v38 = v10; /*0x1005413ac*/
  v35 = v30; /*0x1005413be*/
  v36 = v31; /*0x1005413c2*/
  v37 = v32; /*0x1005413cd*/
  v11 = 1; /*0x1005413d5*/
  if ( v9 >= 2 ) /*0x1005413da*/
    v11 = v9; /*0x1005413da*/
  v39 = v11; /*0x1005413de*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v30); /*0x1005413e1*/
  v12 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1005413f0*/
  if ( !v12 ) /*0x1005413f8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1005416d9*/
  v40 = 128; /*0x100541402*/
  v41 = v12; /*0x10054140a*/
  v30 = &v40; /*0x100541412*/
  v31 = (char *)&unk_1012C87C3; /*0x100541420*/
  v32 = 2; /*0x100541427*/
  v33 = 1; /*0x100541432*/
  v34 = 0; /*0x10054143d*/
  *v12 = 123; /*0x100541441*/
  v42 = 1; /*0x100541444*/
  v43 = 256; /*0x10054144c*/
  v44 = &v30; /*0x100541452*/
  v13 = serde_core::ser::SerializeMap::serialize_entry::h7cec3fac629920a9(&v43, &unk_1012C8816, 13, &v39); /*0x10054146b*/
  if ( v13 ) /*0x100541471*/
    goto LABEL_11; /*0x100541471*/
  if ( (_BYTE)v43 ) /*0x100541477*/
    goto LABEL_9; /*0x100541477*/
  v13 = serde_core::ser::SerializeMap::serialize_entry::h01e9ab7c66822cb0(&v43, &unk_1012C89D0, 9, &v38); /*0x10054149c*/
  if ( v13 ) /*0x1005414a2*/
    goto LABEL_11; /*0x1005414a2*/
  if ( (_BYTE)v43 ) /*0x10054153f*/
  {
LABEL_9:
    v13 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10054147e*/
LABEL_11:
    if ( v40 ) /*0x1005414af*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x1005414ba*/
    v14 = 3; /*0x1005414bf*/
    goto LABEL_14; /*0x1005414bf*/
  }
  v13 = serde_core::ser::SerializeMap::serialize_entry::hb9827fa9ed671a3d(&v43, &unk_1012C89D9, 5, &v35); /*0x10054155e*/
  if ( v13 ) /*0x100541564*/
    goto LABEL_11; /*0x100541564*/
  if ( (v43 & 1) == 0 && HIBYTE(v43) ) /*0x100541578*/
  {
    v19 = v44; /*0x10054157e*/
    v20 = *v44; /*0x100541582*/
    v21 = (__int64)v44[3] - 1; /*0x10054158b*/
    v44[3] = (__int64 *)v21; /*0x10054158e*/
    if ( *((_BYTE *)v19 + 32) == 1 ) /*0x100541599*/
    {
      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2fa7c5e9e7ae59a0( /*0x1005415aa*/
        v20,
        &anon_daf50d54a2d3ecbdf54de6a8568b21ab_567,
        1);
      if ( v21 ) /*0x1005415b2*/
      {
        __src = v19[1]; /*0x1005415b9*/
        v22 = (size_t)v19[2]; /*0x1005415c0*/
        v23 = v20[2]; /*0x1005415c5*/
        v24 = v22; /*0x1005415c9*/
        do /*0x1005415fa*/
        {
          if ( v22 > *v20 - v23 ) /*0x1005415d5*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v20, v23, v22, 1, 1); /*0x10054160f*/
            v23 = v20[2]; /*0x100541614*/
          }
          memcpy((void *)(v23 + v20[1]), __src, v24); /*0x1005415e8*/
          v22 = v24; /*0x1005415ed*/
          v23 += v24; /*0x1005415f0*/
          v20[2] = v23; /*0x1005415f3*/
          --v21; /*0x1005415f7*/
        }
        while ( v21 ); /*0x1005415fa*/
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2fa7c5e9e7ae59a0( /*0x100541629*/
      v20,
      &anon_daf50d54a2d3ecbdf54de6a8568b21ab_12,
      1);
  }
  v13 = (__int64)v41; /*0x100541632*/
  v14 = 3; /*0x100541636*/
  if ( __OFSUB__(-v40, 1) ) /*0x100541641*/
    goto LABEL_14; /*0x100541641*/
  v26[0] = v40; /*0x10054164b*/
  v26[1] = v41; /*0x100541652*/
  v26[2] = v42; /*0x100541659*/
  v13 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))std::fs::write::h3e79e664fbdbfdd3)(v28, v27, v26); /*0x10054167a*/
  if ( v13 ) /*0x100541680*/
  {
    v14 = 2; /*0x100541682*/
LABEL_14:
    *a1 = v14; /*0x1005414c4*/
    a1[1] = v13; /*0x1005414c7*/
    v15 = v37; /*0x1005414cb*/
    if ( v37 ) /*0x1005414d2*/
    {
      v16 = v36 + 136; /*0x1005414e6*/
      do /*0x1005414fa*/
      {
        v17 = *(v16 - 1); /*0x100541500*/
        if ( v17 ) /*0x100541507*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x100541511*/
        if ( *((_DWORD *)v16 - 14) != 2 ) /*0x10054151b*/
        {
          v18 = *(v16 - 5); /*0x10054151d*/
          if ( v18 != 0x8000000000000000LL ) /*0x100541524*/
          {
            if ( v18 ) /*0x100541529*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v16 - 4), v18, 1); /*0x100541534*/
          }
        }
        v16 += 21; /*0x1005414f0*/
        --v15; /*0x1005414f7*/
      }
      while ( v15 ); /*0x1005414fa*/
    }
    goto LABEL_38; /*0x1005414fa*/
  }
  *a1 = 10; /*0x10054168c*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbf3eae4e3aa3968(&v35); /*0x100541697*/
LABEL_38:
  if ( v35 ) /*0x1005416a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 168LL * (_QWORD)v35, 8); /*0x1005416b5*/
  return a1; /*0x1005416bd*/
}