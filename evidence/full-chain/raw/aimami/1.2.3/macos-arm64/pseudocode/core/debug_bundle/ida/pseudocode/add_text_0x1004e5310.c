// __ZN13codexmate_lib4core12debug_bundle8add_text @ 0x1004e5310 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::add_text::h320a2c1667629664(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD v10[4]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v11[3]; // [rsp+20h] [rbp-70h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-30h] BYREF
  __int64 v15; // [rsp+68h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-20h]

  v12[0] = a4; /*0x1004e5329*/
  v12[1] = a5; /*0x1004e532d*/
  zip::write::_$LT$impl$u20$zip..write..zip_writer..ZipWriter$LT$W$GT$$GT$::start_file::h3640c968959e8cff( /*0x1004e533e*/
    v13,
    a2,
    a4,
    a5,
    a3);
  if ( v13[0] == 0x8000000000000006LL ) /*0x1004e5351*/
  {
    result = std::io::Write::write_all::h02685f015a1a0ea5(a2, a6, a7); /*0x1004e535d*/
    if ( result ) /*0x1004e5365*/
    {
      *a1 = 2; /*0x1004e536b*/
      a1[1] = result; /*0x1004e5372*/
    }
    else
    {
      *a1 = 11; /*0x1004e5404*/
    }
  }
  else
  {
    v16 = v13[2]; /*0x1004e537f*/
    v15 = v13[1]; /*0x1004e538b*/
    v14 = v13[0]; /*0x1004e538f*/
    v10[0] = v12; /*0x1004e5397*/
    v10[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e53a5*/
    v10[2] = &v14; /*0x1004e53b0*/
    v10[3] = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x1004e53bb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, &unk_1017BF814, v10); /*0x1004e53d1*/
    a1[3] = v11[2]; /*0x1004e53da*/
    v9 = v11[0]; /*0x1004e53de*/
    a1[2] = v11[1]; /*0x1004e53e6*/
    a1[1] = v9; /*0x1004e53ea*/
    result = core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h1af0e0357529f8d4(v14, v15); /*0x1004e53f6*/
    *a1 = 10; /*0x1004e53fb*/
  }
  return result; /*0x1004e540b*/
}