// __ZN13codexmate_lib4core6skills21stage_skill_directory @ 0x100350b60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::stage_skill_directory::h888900f04e9e7485(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD v11[12]; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-80h] BYREF
  __int64 v13; // [rsp+68h] [rbp-78h]
  __int64 v14; // [rsp+70h] [rbp-70h]
  __int64 v15; // [rsp+78h] [rbp-68h] BYREF
  __int64 v16; // [rsp+80h] [rbp-60h]
  __int64 v17; // [rsp+88h] [rbp-58h]
  __int64 v18; // [rsp+90h] [rbp-50h]
  __int64 v19; // [rsp+98h] [rbp-48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-40h]
  __int64 v21; // [rsp+A8h] [rbp-38h]
  __int64 v22; // [rsp+B0h] [rbp-30h]

  LOWORD(v11[0]) = 511; /*0x100350b83*/
  BYTE2(v11[0]) = 1; /*0x100350b8c*/
  result = std::fs::DirBuilder::_create::h099c6e2853c95452(v11, a4, a5); /*0x100350ba0*/
  if ( result ) /*0x100350ba8*/
  {
    *a1 = 2; /*0x100350baa*/
    a1[1] = result; /*0x100350bb1*/
  }
  else
  {
    v18 = a3; /*0x100350bba*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v19); /*0x100350bc5*/
    v11[0] = &v19; /*0x100350bca*/
    v11[1] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x100350bd8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_1017BC916, v11); /*0x100350bf1*/
    v9 = v16; /*0x100350bf6*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v12, a4, a5, v16, v17); /*0x100350c0b*/
    if ( v15 ) /*0x100350c17*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v15, 1); /*0x100350c21*/
    v21 = v14; /*0x100350c2a*/
    v10 = v13; /*0x100350c32*/
    v20 = v13; /*0x100350c36*/
    v19 = v12; /*0x100350c3a*/
    LOBYTE(v22) = 0; /*0x100350c3e*/
    codexmate_lib::core::skills::copy_dir_all::h12d01093dac5602f(v11, a2, v18, v13, v14); /*0x100350c53*/
    if ( LODWORD(v11[0]) == 11 ) /*0x100350c5f*/
    {
      a1[4] = v22; /*0x100350c65*/
      a1[3] = v21; /*0x100350c6d*/
      result = v19; /*0x100350c71*/
      a1[2] = v20; /*0x100350c79*/
      a1[1] = result; /*0x100350c7d*/
      *a1 = 11; /*0x100350c81*/
    }
    else
    {
      qmemcpy(a1, v11, 0x60u); /*0x100350c99*/
      result = _$LT$codexmate_lib..core..skills..StagedDirectory$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2f1fafacce2d5901(&v19); /*0x100350ca0*/
      if ( v19 ) /*0x100350cac*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v19, 1); /*0x100350cb6*/
    }
  }
  return result; /*0x100350cbb*/
}