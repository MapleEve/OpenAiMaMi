// __ZN13codexmate_lib4core5relay12proxy_server24summarize_upstream_error @ 0x10025eb20
char **__fastcall codexmate_lib::core::relay::proxy_server::summarize_upstream_error::h4779748ddddce3ce(
        char **a1,
        __int16 a2,
        char *a3,
        __int64 (__fastcall *a4)())
{
  char v7; // r13
  _QWORD *v8; // r12
  unsigned __int8 *v9; // rsi
  __int64 v10; // rax
  unsigned __int8 *v11; // rsi
  __int64 v12; // r9
  size_t v13; // r14
  const void *v14; // r15
  size_t v15; // r12
  char *v16; // rax
  char *v17; // r13
  __int64 (__fastcall *v18)(); // rdi
  char *v19; // r13
  size_t v20; // r14
  const void *v21; // r15
  size_t v22; // r12
  char *v23; // rax
  char *v24; // r13
  __int64 (__fastcall *v25)(); // rdi
  char *v26; // r13
  char *v27; // rax
  __int64 (__fastcall *v29)(); // [rsp+0h] [rbp-D0h] BYREF
  size_t v30[3]; // [rsp+8h] [rbp-C8h] BYREF
  size_t v31[3]; // [rsp+20h] [rbp-B0h] BYREF
  _QWORD v32[4]; // [rsp+38h] [rbp-98h] BYREF
  char *v33; // [rsp+58h] [rbp-78h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+60h] [rbp-70h] BYREF
  char *v35; // [rsp+68h] [rbp-68h]
  __int64 v36; // [rsp+70h] [rbp-60h]
  __int16 v37; // [rsp+7Eh] [rbp-52h] BYREF
  char *v38; // [rsp+80h] [rbp-50h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+88h] [rbp-48h]
  char *v40; // [rsp+90h] [rbp-40h]
  __int64 (__fastcall *v41)(); // [rsp+98h] [rbp-38h]
  bool v42; // [rsp+A7h] [rbp-29h]

  v38 = a3; /*0x10025eb3d*/
  v39 = a4; /*0x10025eb41*/
  v40 = nullptr; /*0x10025eb45*/
  v41 = nullptr; /*0x10025eb4d*/
  serde_json::de::from_trait::ha73f8db442141d1f(&v33, &v38); /*0x10025eb5d*/
  if ( (_BYTE)v33 == 6 ) /*0x10025eb66*/
  {
    LOBYTE(v32[0]) = 6; /*0x10025eb68*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v34); /*0x10025eb73*/
    v7 = 1; /*0x10025eba7*/
    v8 = nullptr; /*0x10025ebaa*/
    v9 = nullptr; /*0x10025ebad*/
  }
  else
  {
    v32[3] = v36; /*0x10025eb7e*/
    v32[2] = v35; /*0x10025eb86*/
    v32[1] = v34; /*0x10025eb95*/
    v32[0] = v33; /*0x10025eb9c*/
    v8 = v32; /*0x10025ebb8*/
    v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("error", 5, v32); /*0x10025ebc7*/
    if ( v10 ) /*0x10025ebcf*/
      v8 = (_QWORD *)v10; /*0x10025ebcf*/
    v9 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10025ebe7*/
                              "typefullargsopenwithkindsavetrueuuidemitshowhide",
                              4,
                              v8);
    v7 = 0; /*0x10025ebea*/
  }
  codexmate_lib::core::relay::proxy_server::upstream_error_tag::hcf71e8f52df5a934(v31, v9); /*0x10025ebf4*/
  if ( v7 ) /*0x10025ebfc*/
    v11 = nullptr; /*0x10025ebfe*/
  else
    v11 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10025ec16*/
                               "codedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                               4,
                               v8);
  codexmate_lib::core::relay::proxy_server::upstream_error_tag::hcf71e8f52df5a934(v30, v11); /*0x10025ec20*/
  v37 = a2; /*0x10025ec25*/
  v29 = a4; /*0x10025ec2a*/
  v38 = (char *)&v37; /*0x10025ec35*/
  v39 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10025ec40*/
  v40 = (char *)&v29; /*0x10025ec4b*/
  v41 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10025ec56*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1017B9AF9, &v38); /*0x10025ec69*/
  v38 = v33; /*0x10025ec76*/
  v39 = v34; /*0x10025ec7a*/
  v40 = v35; /*0x10025ec82*/
  v13 = v31[0]; /*0x10025ec86*/
  v42 = v31[0] == 0x8000000000000000LL; /*0x10025ec9a*/
  if ( v31[0] != 0x8000000000000000LL ) /*0x10025ec9e*/
  {
    v14 = (const void *)v31[1]; /*0x10025eca0*/
    v15 = v31[2]; /*0x10025eca7*/
    v16 = v38; /*0x10025ecae*/
    v17 = v40; /*0x10025ecb2*/
    if ( (unsigned __int64)(v38 - v40) <= 0xB ) /*0x10025ecc0*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v38, v40, 12, 1, 1, v12); /*0x10025ee0c*/
      v16 = v38; /*0x10025ee11*/
      v17 = v40; /*0x10025ee15*/
    }
    v18 = v39; /*0x10025ecc6*/
    *(_QWORD *)&v17[(_QWORD)v39] = 0x745F726F72726520LL; /*0x10025ecd4*/
    *(_DWORD *)&v17[(_QWORD)v18 + 8] = 1030058105; /*0x10025ecd8*/
    v19 = v17 + 12; /*0x10025ece1*/
    v40 = v19; /*0x10025ece5*/
    if ( v15 > v16 - v19 ) /*0x10025ecef*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v38, v19, v15, 1, 1, v12); /*0x10025ee33*/
      v18 = v39; /*0x10025ee38*/
      v19 = v40; /*0x10025ee3c*/
    }
    memcpy((char *)v18 + (_QWORD)v19, v14, v15); /*0x10025ecfe*/
    v40 = &v19[v15]; /*0x10025ed06*/
    if ( v13 ) /*0x10025ed0d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10025ed1a*/
  }
  v20 = v30[0]; /*0x10025ed1f*/
  if ( v30[0] != 0x8000000000000000LL ) /*0x10025ed33*/
  {
    v21 = (const void *)v30[1]; /*0x10025ed35*/
    v22 = v30[2]; /*0x10025ed3c*/
    v23 = v38; /*0x10025ed43*/
    v24 = v40; /*0x10025ed47*/
    if ( (unsigned __int64)(v38 - v40) <= 0xB ) /*0x10025ed55*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v38, v40, 12, 1, 1, v12); /*0x10025ee5c*/
      v23 = v38; /*0x10025ee61*/
      v24 = v40; /*0x10025ee65*/
    }
    v25 = v39; /*0x10025ed5b*/
    *(_QWORD *)&v24[(_QWORD)v39] = 0x635F726F72726520LL; /*0x10025ed69*/
    *(_DWORD *)&v24[(_QWORD)v25 + 8] = 1030055023; /*0x10025ed6d*/
    v26 = v24 + 12; /*0x10025ed76*/
    v40 = v26; /*0x10025ed7a*/
    if ( v22 > v23 - v26 ) /*0x10025ed84*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v38, v26, v22, 1, 1, v12); /*0x10025ee83*/
      v25 = v39; /*0x10025ee88*/
      v26 = v40; /*0x10025ee8c*/
    }
    memcpy((char *)v25 + (_QWORD)v26, v21, v22); /*0x10025ed93*/
    v40 = &v26[v22]; /*0x10025ed9b*/
    if ( v20 ) /*0x10025eda2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10025edaf*/
  }
  a1[2] = v40; /*0x10025edb8*/
  v27 = v38; /*0x10025edbc*/
  a1[1] = (char *)v39; /*0x10025edc4*/
  *a1 = v27; /*0x10025edc8*/
  if ( LOBYTE(v32[0]) != 6 ) /*0x10025edd2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v32); /*0x10025eddb*/
  return a1; /*0x10025ede3*/
}