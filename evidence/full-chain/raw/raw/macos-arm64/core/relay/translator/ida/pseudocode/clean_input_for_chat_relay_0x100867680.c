// __ZN13codexmate_lib4core5relay10translator26clean_input_for_chat_relay @ 0x100867680 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::clean_input_for_chat_relay::hed560a6b20674425(
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

  switch ( *(_BYTE *)a2 ) /*0x10086769d*/
  {
    case 0: /*0x10086769d*/
      LOBYTE(v6) = 0; /*0x1008676d3*/
      break; /*0x1008676d7*/
    case 1: /*0x10086769d*/
    case 2: /*0x10086769d*/
      v9 = a2[3]; /*0x1008676a3*/
      v8 = a2[2]; /*0x1008676ab*/
      v2 = *a2; /*0x1008676af*/
      v7 = a2[1]; /*0x1008676b6*/
      v6 = v2; /*0x1008676ba*/
      break; /*0x1008676be*/
    case 3: /*0x10086769d*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v7, a2 + 1); /*0x1008676e1*/
      LOBYTE(v6) = 3; /*0x1008676e6*/
      break; /*0x1008676ea*/
    case 4: /*0x10086769d*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v7, a2 + 1); /*0x1008676c8*/
      LOBYTE(v6) = 4; /*0x1008676cd*/
      break; /*0x1008676d1*/
    case 5: /*0x10086769d*/
      if ( a2[3] ) /*0x1008676ec*/
      {
        if ( !a2[1] ) /*0x1008676fa*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10086778a*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10086770b*/
          &v7,
          a2[1],
          a2[2]);
      }
      else
      {
        v7 = 0; /*0x100867712*/
        v9 = 0; /*0x10086771a*/
      }
      LOBYTE(v6) = 5; /*0x100867722*/
      break; /*0x100867722*/
  }
  codexmate_lib::core::relay::translator::strip_relay_unsupported_fields::hace19d0b224ad6a6(&v6); /*0x10086772a*/
  v3 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10086773f*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_146,
                  5,
                  &v6);
  if ( v3 && *v3 == 4 ) /*0x10086774c*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::hecee1b1b0fe040cc(v3 + 8); /*0x100867755*/
  a1[3] = v9; /*0x10086775e*/
  a1[2] = v8; /*0x100867766*/
  v4 = v6; /*0x10086776a*/
  a1[1] = v7; /*0x100867772*/
  *a1 = v4; /*0x100867776*/
  return a1; /*0x10086777c*/
}