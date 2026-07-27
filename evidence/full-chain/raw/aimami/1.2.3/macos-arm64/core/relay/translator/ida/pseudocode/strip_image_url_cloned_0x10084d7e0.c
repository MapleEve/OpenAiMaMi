// __ZN13codexmate_lib4core5relay10translator22strip_image_url_cloned @ 0x10084d7e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::strip_image_url_cloned::hbf3f44f2194dc6b7(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-20h] BYREF
  __int64 v7; // [rsp+18h] [rbp-18h]
  __int64 v8; // [rsp+20h] [rbp-10h]

  switch ( *(_BYTE *)a2 ) /*0x10084d7fd*/
  {
    case 0: /*0x10084d7fd*/
      LOBYTE(v5) = 0; /*0x10084d833*/
      break; /*0x10084d837*/
    case 1: /*0x10084d7fd*/
    case 2: /*0x10084d7fd*/
      v8 = a2[3]; /*0x10084d803*/
      v7 = a2[2]; /*0x10084d80b*/
      v2 = *a2; /*0x10084d80f*/
      v6 = a2[1]; /*0x10084d816*/
      v5 = v2; /*0x10084d81a*/
      break; /*0x10084d81e*/
    case 3: /*0x10084d7fd*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v6, a2 + 1); /*0x10084d841*/
      LOBYTE(v5) = 3; /*0x10084d846*/
      break; /*0x10084d84a*/
    case 4: /*0x10084d7fd*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v6, a2 + 1); /*0x10084d828*/
      LOBYTE(v5) = 4; /*0x10084d82d*/
      break; /*0x10084d831*/
    case 5: /*0x10084d7fd*/
      if ( a2[3] ) /*0x10084d84c*/
      {
        if ( !a2[1] ) /*0x10084d85a*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10084d8bb*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10084d867*/
          &v6,
          a2[1],
          a2[2]);
      }
      else
      {
        v6 = 0; /*0x10084d86e*/
        v8 = 0; /*0x10084d876*/
      }
      LOBYTE(v5) = 5; /*0x10084d87e*/
      break; /*0x10084d87e*/
  }
  codexmate_lib::core::relay::translator::strip_image_url_from_messages::hce7c77e3d0114924(&v5); /*0x10084d886*/
  a1[3] = v8; /*0x10084d88f*/
  a1[2] = v7; /*0x10084d897*/
  v3 = v5; /*0x10084d89b*/
  a1[1] = v6; /*0x10084d8a3*/
  *a1 = v3; /*0x10084d8a7*/
  return a1; /*0x10084d8ad*/
}