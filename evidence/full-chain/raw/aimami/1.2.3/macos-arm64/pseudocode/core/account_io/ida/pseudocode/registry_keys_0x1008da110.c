// __ZN13codexmate_lib4core10account_io13registry_keys @ 0x1008da110
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::registry_keys | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::account_io::registry_keys::hae496b4b1bf53d89(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  void *result; // rax
  __int64 v7; // r14
  _QWORD v8[6]; // [rsp+8h] [rbp-78h] BYREF
  void *v9; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008da127*/
  v3 = (_QWORD *)v2; /*0x1008da129*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x1008da130*/
  {
    v4 = *(_QWORD *)v2; /*0x1008da136*/
    v5 = v3[1]; /*0x1008da139*/
  }
  else
  {
    v7 = v2; /*0x1008da1de*/
    v4 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1008da1e1*/
    v3 = (_QWORD *)v7; /*0x1008da1e9*/
    *(_QWORD *)v7 = v4; /*0x1008da1ec*/
    *(_QWORD *)(v7 + 8) = v5; /*0x1008da1ef*/
    *(_BYTE *)(v7 + 16) = 1; /*0x1008da1f3*/
  }
  *v3 = v4 + 1; /*0x1008da141*/
  v12 = 0; /*0x1008da14b*/
  v11 = 0; /*0x1008da156*/
  v10 = 0; /*0x1008da161*/
  v9 = anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008da16c*/
  v13 = v4; /*0x1008da170*/
  v14 = v5; /*0x1008da174*/
  v8[0] = 1; /*0x1008da178*/
  v8[1] = a2; /*0x1008da180*/
  v8[2] = 0; /*0x1008da184*/
  v8[4] = 0; /*0x1008da18c*/
  _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h62094a7eef02e581( /*0x1008da19c*/
    &v9,
    v8);
  a1[5] = v14; /*0x1008da1a5*/
  a1[4] = v13; /*0x1008da1ad*/
  a1[3] = v12; /*0x1008da1b5*/
  a1[2] = v11; /*0x1008da1bd*/
  result = v9; /*0x1008da1c1*/
  a1[1] = v10; /*0x1008da1c9*/
  *a1 = result; /*0x1008da1cd*/
  return result; /*0x1008da1d0*/
}