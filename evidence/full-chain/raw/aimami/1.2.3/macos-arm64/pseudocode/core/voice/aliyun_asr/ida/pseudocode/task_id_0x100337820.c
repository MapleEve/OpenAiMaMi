// __ZN13codexmate_lib4core5voice10aliyun_asr7task_id @ 0x100337820 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::aliyun_asr::task_id::hdb787e4ae21a4b97(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _BYTE v4[16]; // [rsp+0h] [rbp-60h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  _BYTE v9[25]; // [rsp+47h] [rbp-19h] BYREF

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v4); /*0x100337837*/
  v6 = 0; /*0x10033783c*/
  v7 = 1; /*0x100337844*/
  v8 = 0; /*0x10033784c*/
  v5[2] = 1610612768; /*0x100337854*/
  v5[0] = &v6; /*0x100337860*/
  v5[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10033786b*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100337876*/
                          v4,
                          v5) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003378e5*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v9,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v1 = v6; /*0x10033787f*/
  v2 = v7; /*0x100337883*/
  alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(a1, v7, v8, 45, 1, 0); /*0x10033789f*/
  if ( v1 ) /*0x1003378a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x1003378b4*/
  return a1; /*0x1003378bc*/
}