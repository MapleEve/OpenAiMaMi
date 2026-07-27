// __ZN13codexmate_lib4core8sessions21migration_backup_path @ 0x100537070 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::migration_backup_path::h7dbc8ce73e7fc2db(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edx
  __int64 (__fastcall *v9)(); // rbx
  int v10; // eax
  double result; // xmm0_8
  __int64 v12; // r12
  __int64 v13; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-D0h]
  __int64 v15; // [rsp+18h] [rbp-C8h]
  _QWORD v16[3]; // [rsp+20h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-A8h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+50h] [rbp-90h] BYREF
  __int64 v19; // [rsp+58h] [rbp-88h]
  __int64 v20; // [rsp+60h] [rbp-80h]
  __int64 *v21; // [rsp+68h] [rbp-78h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+70h] [rbp-70h]
  int *v23; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v24)(); // [rsp+80h] [rbp-60h]
  _QWORD *v25; // [rsp+88h] [rbp-58h]
  __int64 (__fastcall *v26)(); // [rsp+90h] [rbp-50h]
  __int64 v27; // [rsp+98h] [rbp-48h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-40h]
  int v29; // [rsp+B4h] [rbp-2Ch] BYREF

  v19 = a3; /*0x100537087*/
  v20 = a2; /*0x10053708e*/
  codexmate_lib::core::sessions::sanitize_backup_segment::hfcc76c2216ef5a0a(v17, a4, a5); /*0x1005370a9*/
  codexmate_lib::core::sessions::sanitize_backup_segment::hfcc76c2216ef5a0a(v16, a6, a7); /*0x1005370be*/
  v27 = std::time::SystemTime::now::h1fe79e41f9d5677f(v16, a6); /*0x1005370c8*/
  LODWORD(v28) = v8; /*0x1005370cc*/
  v9 = nullptr; /*0x1005370cf*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v21, &v27, 0, 0); /*0x1005370dd*/
  v10 = (int)v23; /*0x1005370e6*/
  if ( (_BYTE)v21 ) /*0x1005370e9*/
    v10 = 0; /*0x1005370e9*/
  else
    v9 = v22; /*0x1005370ec*/
  v18 = v9; /*0x1005370f1*/
  v29 = v10; /*0x1005370f8*/
  v21 = (__int64 *)&v18; /*0x100537102*/
  v22 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10053710d*/
  v23 = &v29; /*0x100537115*/
  v24 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100537120*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, &unk_1015FF07C, &v21); /*0x100537136*/
  v21 = &v27; /*0x10053713b*/
  v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100537146*/
  v23 = (int *)v17; /*0x10053714a*/
  v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10053714e*/
  v25 = v16; /*0x100537152*/
  v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100537156*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v13, &unk_1017C1B07, &v21); /*0x10053716c*/
  if ( v27 ) /*0x100537178*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100537183*/
  v12 = v14; /*0x100537188*/
  std::path::Path::_join::hb1a495d4f06b13b8(a1, v20, v19, v14, v15); /*0x1005371a7*/
  if ( v13 ) /*0x1005371b6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v13, 1); /*0x1005371c0*/
  if ( v16[0] ) /*0x1005371cf*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16[1], v16[0], 1); /*0x1005371dd*/
  if ( v17[0] ) /*0x1005371ec*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[1], v17[0], 1); /*0x1005371fa*/
  return result; /*0x1005371ff*/
}