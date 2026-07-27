// __ZN13codexmate_lib8commands8deeplink13take_required @ 0x100354e70 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::deeplink::take_required::hf8da036a9172fb02(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  _QWORD v11[2]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]

  v12[0] = a3; /*0x100354e8d*/
  v12[1] = a4; /*0x100354e91*/
  v6 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a2 + 32, a3, a4); /*0x100354e9f*/
  hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::hfc0943bb8e0b028f(&v13, a2, v6, a3, a4); /*0x100354eb4*/
  result = -v13; /*0x100354ec0*/
  if ( __OFSUB__(-v13, 1) ) /*0x100354ec3*/
    goto LABEL_5; /*0x100354ec3*/
  v8 = v15; /*0x100354ecf*/
  v9 = v16; /*0x100354ed3*/
  v10 = v17; /*0x100354ed7*/
  if ( v13 ) /*0x100354edb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[0], v13, 1); /*0x100354ee6*/
  if ( v8 == 0x8000000000000000LL ) /*0x100354eee*/
    goto LABEL_5; /*0x100354eee*/
  if ( !v10 ) /*0x100354f50*/
  {
    if ( v8 ) /*0x100354f6a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x100354f77*/
LABEL_5:
    v11[0] = v12; /*0x100354ef0*/
    v11[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100354eff*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, &unk_1017BCA19, v11); /*0x100354f12*/
    v13 = 0; /*0x100354f17*/
    a1[3] = v15; /*0x100354f23*/
    result = v14[0]; /*0x100354f27*/
    a1[2] = v14[1]; /*0x100354f2f*/
    a1[1] = result; /*0x100354f33*/
    *a1 = 0; /*0x100354f37*/
    return result; /*0x100354f4c*/
  }
  a1[2] = v9; /*0x100354f52*/
  a1[3] = v10; /*0x100354f56*/
  a1[1] = v8; /*0x100354f5a*/
  *a1 = 2; /*0x100354f5e*/
  return result; /*0x100354f3e*/
}