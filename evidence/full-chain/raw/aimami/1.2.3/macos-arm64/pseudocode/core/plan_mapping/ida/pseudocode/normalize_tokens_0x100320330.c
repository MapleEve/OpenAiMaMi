// __ZN13codexmate_lib4core12plan_mapping16normalize_tokens @ 0x100320330 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::plan_mapping::normalize_tokens::h379cb369d4bf0dc0(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *result; // rax
  __int64 v7[7]; // [rsp+8h] [rbp-68h] BYREF
  __int16 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100320344*/
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v9, v3, v4); /*0x100320350*/
  v5 = v10; /*0x100320355*/
  v7[0] = 0; /*0x100320361*/
  v7[1] = v11; /*0x100320369*/
  v7[2] = v10; /*0x10032036d*/
  v7[3] = v11; /*0x100320371*/
  v7[4] = v10; /*0x100320375*/
  v7[5] = v10 + v11; /*0x100320379*/
  v7[6] = 0; /*0x10032037d*/
  v8 = 1; /*0x100320385*/
  result = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hcf856e969dba1b80( /*0x100320392*/
             a1,
             v7);
  if ( v9 ) /*0x10032039e*/
    return (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v9, 1); /*0x1003203a8*/
  return result; /*0x1003203ad*/
}