// __ZN13codexmate_lib4core5relay18transition_journal5write @ 0x10032ab70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::write::heff5963509896719(
        _QWORD *a1,
        __int64 a2,
        int a3,
        void *a4,
        __int64 a5,
        void *a6,
        __int64 __n)
{
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 *v16; // r15
  unsigned __int64 v17; // r12
  bool v18; // zf
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  void *v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // r15
  __int64 *v29; // r14
  void *v30; // r12
  __int64 v31; // r13
  _QWORD *v32; // r15
  __int64 v33; // rsi
  _QWORD *v34; // rax
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rsi
  _QWORD *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+10h] [rbp-130h]
  unsigned __int64 v45; // [rsp+18h] [rbp-128h]
  __int64 *v46; // [rsp+28h] [rbp-118h] BYREF
  void *v47; // [rsp+30h] [rbp-110h]
  __int64 v48; // [rsp+38h] [rbp-108h]
  __int64 v49; // [rsp+40h] [rbp-100h]
  char v50; // [rsp+48h] [rbp-F8h]
  void *__src; // [rsp+50h] [rbp-F0h]
  __int64 v52; // [rsp+58h] [rbp-E8h] BYREF
  __int64 *v53; // [rsp+60h] [rbp-E0h]
  __int64 v54; // [rsp+68h] [rbp-D8h]
  unsigned __int64 v55; // [rsp+70h] [rbp-D0h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-C8h]
  __int64 v57; // [rsp+80h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+88h] [rbp-B8h] BYREF
  unsigned __int64 v59; // [rsp+90h] [rbp-B0h] BYREF
  char v60; // [rsp+98h] [rbp-A8h] BYREF
  char v61[7]; // [rsp+99h] [rbp-A7h] BYREF
  _QWORD *v62; // [rsp+A0h] [rbp-A0h] BYREF
  _QWORD *v63; // [rsp+A8h] [rbp-98h]
  size_t v64; // [rsp+B0h] [rbp-90h]
  __int64 v65; // [rsp+B8h] [rbp-88h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-80h]
  _QWORD *v67; // [rsp+C8h] [rbp-78h]
  __int64 v68; // [rsp+D0h] [rbp-70h]
  int v69; // [rsp+DCh] [rbp-64h]
  _QWORD *v70; // [rsp+E0h] [rbp-60h]
  __int16 v71; // [rsp+E8h] [rbp-58h] BYREF
  __int64 **v72; // [rsp+F0h] [rbp-50h]
  __int64 v73; // [rsp+F8h] [rbp-48h] BYREF
  __int64 (__fastcall *v74)(_QWORD, _QWORD); // [rsp+100h] [rbp-40h]
  __int64 v75; // [rsp+108h] [rbp-38h]
  void *v76; // [rsp+110h] [rbp-30h]

  v76 = a6; /*0x10032ab84*/
  __src = a4; /*0x10032ab8b*/
  v67 = a1; /*0x10032ab98*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v52); /*0x10032aba3*/
  v9 = ((int)v52 >> 13) - 1; /*0x10032abb3*/
  v10 = 0; /*0x10032abb6*/
  if ( (int)v52 >> 13 <= 0 ) /*0x10032abba*/
  {
    v11 = (1 - ((int)v52 >> 13)) / 0x190u + 1; /*0x10032abce*/
    v9 += 400 * v11; /*0x10032abd6*/
    v10 = -146097 * v11; /*0x10032abd8*/
  }
  v12 = 1000 /*0x10032ac40*/
      * (HIDWORD(v52)
       + 86400LL
       * (int)(((v9 / 100) >> 2) + ((1461 * v9) >> 2) + v10 + (((unsigned int)v52 >> 4) & 0x1FF) - v9 / 100 - 719163))
      + (unsigned int)v53 / 0xF4240uLL;
  v13 = &v52; /*0x10032ac43*/
  v70 = (_QWORD *)a2; /*0x10032ac4a*/
  codexmate_lib::core::relay::transition_journal::read::h98e7602a0e4c21b7(&v52, a2); /*0x10032ac51*/
  v14 = v52; /*0x10032ac56*/
  v69 = a3; /*0x10032ac63*/
  if ( !__OFSUB__(-v52, 1) ) /*0x10032ac67*/
  {
    v13 = v53; /*0x10032ac6d*/
    v15 = v55; /*0x10032ac74*/
    v16 = (__int64 *)v56; /*0x10032ac7b*/
    if ( v60 == (_BYTE)a3 ) /*0x10032ac89*/
    {
      v17 = v58; /*0x10032ac8b*/
      if ( v52 ) /*0x10032ac95*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x10032ac9c*/
      if ( 2 * v15 ) /*0x10032aca1*/
      {
        v13 = v16; /*0x10032acb3*/
        v14 = v15; /*0x10032acb6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10032acb9*/
      }
      v18 = a5 == 0; /*0x10032acbe*/
      if ( a5 < 0 ) /*0x10032acc1*/
        goto LABEL_10; /*0x10032acc1*/
      goto LABEL_16; /*0x10032acc1*/
    }
    if ( v52 ) /*0x10032acd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x10032acdb*/
    if ( 2 * v15 ) /*0x10032ace0*/
    {
      v13 = v16; /*0x10032ad8d*/
      v14 = v15; /*0x10032ad90*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10032ad93*/
      v17 = v12; /*0x10032ad98*/
      v18 = a5 == 0; /*0x10032ad9b*/
      if ( a5 >= 0 ) /*0x10032ad9e*/
        goto LABEL_16; /*0x10032ad9e*/
LABEL_10:
      v19 = 0; /*0x10032acc3*/
      goto LABEL_11; /*0x10032acc3*/
    }
  }
  v17 = v12; /*0x10032acf1*/
  v18 = a5 == 0; /*0x10032acf4*/
  if ( a5 < 0 ) /*0x10032acf7*/
    goto LABEL_10; /*0x10032acf7*/
LABEL_16:
  if ( v18 ) /*0x10032acf9*/
  {
    v21 = 1; /*0x10032ad1d*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x10032acfb*/
    v19 = 1; /*0x10032ad00*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x10032ad0e*/
    if ( !v20 ) /*0x10032ad16*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, a5); /*0x10032acc6*/
    v21 = v20; /*0x10032ad18*/
  }
  v22 = 0x8000000000000000LL; /*0x10032ad26*/
  v66 = v21; /*0x10032ad30*/
  v23 = __src; /*0x10032ad34*/
  memcpy((void *)v21, __src, a5); /*0x10032ad3e*/
  if ( v76 ) /*0x10032ad48*/
  {
    if ( __n < 0 ) /*0x10032ad4d*/
    {
      v24 = 0; /*0x10032ad4f*/
      goto LABEL_23; /*0x10032ad4f*/
    }
    if ( __n ) /*0x10032ad67*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __src); /*0x10032ad69*/
      v24 = 1; /*0x10032ad6e*/
      v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10032ad7c*/
      if ( !v26 ) /*0x10032ad84*/
LABEL_23:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, __n); /*0x10032ad52*/
    }
    else
    {
      v26 = 1; /*0x10032ada9*/
    }
    v22 = v26; /*0x10032adae*/
    v21 = v26; /*0x10032adb1*/
    v23 = v76; /*0x10032adb4*/
    memcpy((void *)v26, v76, __n); /*0x10032adbb*/
    v25 = __n; /*0x10032adc0*/
  }
  else
  {
    v25 = 0x8000000000000000LL; /*0x10032ad62*/
  }
  v61[0] = 1; /*0x10032adc3*/
  v60 = v69; /*0x10032adcd*/
  v52 = a5; /*0x10032add3*/
  v53 = (__int64 *)v66; /*0x10032adde*/
  v54 = a5; /*0x10032ade5*/
  v58 = v17; /*0x10032adec*/
  v59 = v12; /*0x10032adf3*/
  v44 = v25; /*0x10032adfa*/
  v55 = v25; /*0x10032ae01*/
  v45 = v22; /*0x10032ae08*/
  v56 = v22; /*0x10032ae0f*/
  v57 = __n; /*0x10032ae16*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v23); /*0x10032ae1d*/
  v27 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10032ae2c*/
  if ( !v27 ) /*0x10032ae34*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10032b2bd*/
  v73 = 128; /*0x10032ae41*/
  v74 = (__int64 (__fastcall *)(_QWORD, _QWORD))v27; /*0x10032ae49*/
  v46 = &v73; /*0x10032ae51*/
  v47 = &unk_1015E3B85; /*0x10032ae5f*/
  v48 = 2; /*0x10032ae66*/
  v49 = 1; /*0x10032ae71*/
  v50 = 0; /*0x10032ae7c*/
  *v27 = 123; /*0x10032ae83*/
  v75 = 1; /*0x10032ae86*/
  v71 = 256; /*0x10032ae8e*/
  v72 = &v46; /*0x10032ae9b*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::h2a85f950d4888580( /*0x10032aeb4*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_26,
          13,
          v61);
  if ( v28 ) /*0x10032aeba*/
    goto LABEL_37; /*0x10032aeba*/
  if ( (_BYTE)v71 ) /*0x10032aec0*/
    goto LABEL_35; /*0x10032aec0*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::h809f81b0376985f9( /*0x10032aee8*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_253,
          6,
          &v60);
  if ( v28 ) /*0x10032aeee*/
    goto LABEL_37; /*0x10032aeee*/
  if ( (_BYTE)v71 ) /*0x10032b009*/
    goto LABEL_35; /*0x10032b009*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032b02b*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_254,
          5,
          &v52);
  if ( v28 ) /*0x10032b031*/
    goto LABEL_37; /*0x10032b031*/
  if ( (_BYTE)v71 ) /*0x10032b03b*/
    goto LABEL_35; /*0x10032b03b*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032b05d*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_263,
          11,
          &v58);
  if ( v28 ) /*0x10032b063*/
    goto LABEL_37; /*0x10032b063*/
  if ( (_BYTE)v71 ) /*0x10032b06d*/
    goto LABEL_35; /*0x10032b06d*/
  v28 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032b08f*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_264,
          11,
          &v59);
  if ( v28 ) /*0x10032b095*/
    goto LABEL_37; /*0x10032b095*/
  if ( (_BYTE)v71 ) /*0x10032b09f*/
  {
LABEL_35:
    v28 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032aec2*/
    goto LABEL_37; /*0x10032aeca*/
  }
  v28 = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10032b0c1*/
          &v71,
          &anon_b0ee9adff4519c22b647af231a5a39fa_256,
          6,
          &v55);
  if ( v28 ) /*0x10032b0c7*/
  {
LABEL_37:
    if ( v73 ) /*0x10032aefb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1); /*0x10032af06*/
    goto LABEL_39; /*0x10032af06*/
  }
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v71); /*0x10032b0d1*/
  v28 = (__int64)v74; /*0x10032b0da*/
  v68 = v73; /*0x10032b0de*/
  if ( v73 == 0x8000000000000000LL ) /*0x10032b0ef*/
  {
LABEL_39:
    v62 = (_QWORD *)v28; /*0x10032af0b*/
    v73 = (__int64)&v62; /*0x10032af19*/
    v74 = (__int64 (__fastcall *)(_QWORD, _QWORD))_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10032af24*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v46, &unk_1017BC55A, &v73); /*0x10032af3a*/
    v29 = v46; /*0x10032af3f*/
    v30 = v47; /*0x10032af46*/
    v31 = v48; /*0x10032af4d*/
    v32 = v62; /*0x10032af54*/
    if ( *v62 == 1 ) /*0x10032af62*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v62 + 1); /*0x10032af86*/
    }
    else if ( !*v62 ) /*0x10032af5b*/
    {
      v33 = v62[2]; /*0x10032af69*/
      if ( v33 ) /*0x10032af70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[1], v33, 1); /*0x10032af7b*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 40, 8); /*0x10032af98*/
    v34 = v67; /*0x10032af9d*/
    *v67 = 10; /*0x10032afa1*/
    v34[1] = v29; /*0x10032afa8*/
    v34[2] = v30; /*0x10032afac*/
    v34[3] = v31; /*0x10032afb0*/
    goto LABEL_45; /*0x10032afb0*/
  }
  v36 = v70[74]; /*0x10032b10b*/
  v37 = v70[73]; /*0x10032b126*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v62, v37, v36, &unk_1015E43EF, 30); /*0x10032b12c*/
  v70 = v63; /*0x10032b13f*/
  v38 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v63, v64); /*0x10032b150*/
  if ( v38 ) /*0x10032b158*/
  {
    v65 = v38; /*0x10032b15e*/
    v73 = (__int64)&v65; /*0x10032b16c*/
    v74 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10032b177*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v46, &unk_1017BC52F, &v73); /*0x10032b18d*/
    v73 = (__int64)v46; /*0x10032b1a0*/
    v74 = (__int64 (__fastcall *)(_QWORD, _QWORD))v47; /*0x10032b1a4*/
    v75 = v48; /*0x10032b1af*/
    if ( (v65 & 3) == 1 ) /*0x10032b1c2*/
    {
      v39 = v65 - 1; /*0x10032b1c4*/
      v76 = *(void **)(v65 - 1); /*0x10032b1cc*/
      v40 = *(_QWORD *)(v65 + 7); /*0x10032b1d0*/
      if ( *(_QWORD *)v40 ) /*0x10032b1d4*/
        (*(void (__fastcall **)(void *))v40)(v76); /*0x10032b1e1*/
      v41 = *(_QWORD *)(v40 + 8); /*0x10032b1e3*/
      if ( v41 ) /*0x10032b1eb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v41, *(_QWORD *)(v40 + 16)); /*0x10032b1f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24, 8); /*0x10032b208*/
    }
    v42 = v67; /*0x10032b211*/
    v67[3] = v75; /*0x10032b215*/
    v43 = v73; /*0x10032b219*/
    v42[2] = v74; /*0x10032b221*/
    v42[1] = v43; /*0x10032b225*/
    *v42 = 10; /*0x10032b229*/
    if ( v62 ) /*0x10032b23a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v62, 1); /*0x10032b245*/
  }
  else
  {
    if ( v62 ) /*0x10032b256*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v62, 1); /*0x10032b261*/
    codexmate_lib::core::relay::transition_journal::append_event::h7266986f42fdaeea( /*0x10032b282*/
      v37,
      v36,
      (unsigned __int8)v69,
      __src,
      a5,
      v76,
      __n);
    *v67 = 11; /*0x10032b28b*/
  }
  if ( v68 ) /*0x10032b297*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v68, 1); /*0x10032b2a9*/
LABEL_45:
  if ( a5 ) /*0x10032afb7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, a5, 1); /*0x10032afc5*/
  if ( 2 * v44 ) /*0x10032afd1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x10032afea*/
  return v67; /*0x10032aff3*/
}