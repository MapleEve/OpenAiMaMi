// __ZN13codexmate_lib4core5relay10translator31clean_input_for_anthropic_relay @ 0x10086f8f0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::translator::clean_input_for_anthropic_relay | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::relay::translator::clean_input_for_anthropic_relay::h18d96ba6fbb64481(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8; // [rsp+18h] [rbp-18h]
  __int64 v9; // [rsp+20h] [rbp-10h]

  switch ( *(_BYTE *)a2 ) /*0x10086f90d*/
  {
    case 0: /*0x10086f90d*/
      LOBYTE(v6) = 0; /*0x10086f943*/
      break; /*0x10086f947*/
    case 1: /*0x10086f90d*/
    case 2: /*0x10086f90d*/
      v9 = a2[3]; /*0x10086f913*/
      v8 = a2[2]; /*0x10086f91b*/
      v2 = *a2; /*0x10086f91f*/
      v7 = a2[1]; /*0x10086f926*/
      v6 = v2; /*0x10086f92a*/
      break; /*0x10086f92e*/
    case 3: /*0x10086f90d*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v7, a2 + 1); /*0x10086f951*/
      LOBYTE(v6) = 3; /*0x10086f956*/
      break; /*0x10086f95a*/
    case 4: /*0x10086f90d*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v7, a2 + 1); /*0x10086f938*/
      LOBYTE(v6) = 4; /*0x10086f93d*/
      break; /*0x10086f941*/
    case 5: /*0x10086f90d*/
      if ( a2[3] ) /*0x10086f95c*/
      {
        if ( !a2[1] ) /*0x10086f96a*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10086f9fa*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10086f97b*/
          &v7,
          a2[1],
          a2[2]);
      }
      else
      {
        v7 = 0; /*0x10086f982*/
        v9 = 0; /*0x10086f98a*/
      }
      LOBYTE(v6) = 5; /*0x10086f992*/
      break; /*0x10086f992*/
  }
  codexmate_lib::core::relay::translator::strip_relay_unsupported_fields::hace19d0b224ad6a6(&v6); /*0x10086f99a*/
  v3 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10086f9af*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_146,
                  5,
                  &v6);
  if ( v3 && *v3 == 4 ) /*0x10086f9bc*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::he06892b71c04f15d(v3 + 8); /*0x10086f9c5*/
  a1[3] = v9; /*0x10086f9ce*/
  a1[2] = v8; /*0x10086f9d6*/
  v4 = v6; /*0x10086f9da*/
  a1[1] = v7; /*0x10086f9e2*/
  *a1 = v4; /*0x10086f9e6*/
  return a1; /*0x10086f9ec*/
}