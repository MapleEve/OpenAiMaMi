// __ZN13codexmate_lib4core5relay10invariants1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..InvariantDim$GT$9serialize @ 0x100251140 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::invariants::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..InvariantDim$GT$::serialize::h5e2fcfda3a05ae6b(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax
  const char *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  switch ( *a2 ) /*0x10025115a*/
  {
    case 0: /*0x10025115a*/
      v3 = (const char *)&anon_39a6e93098609d65551b0fc4eadbbbd9_116; /*0x100251163*/
      v4 = 6; /*0x10025116f*/
      v5 = 0; /*0x100251178*/
      break; /*0x10025117a*/
    case 1: /*0x10025115a*/
      v3 = (const char *)&anon_39a6e93098609d65551b0fc4eadbbbd9_117; /*0x1002511f2*/
      v4 = 4; /*0x1002511fe*/
      v5 = 1; /*0x100251207*/
      break; /*0x10025120c*/
    case 2: /*0x10025115a*/
      v3 = (const char *)&anon_39a6e93098609d65551b0fc4eadbbbd9_118; /*0x1002511ac*/
      v4 = 7; /*0x1002511b8*/
      v5 = 2; /*0x1002511c1*/
      break; /*0x1002511c6*/
    case 3: /*0x10025115a*/
      v3 = (const char *)&anon_39a6e93098609d65551b0fc4eadbbbd9_119; /*0x1002511cf*/
      v4 = 6; /*0x1002511db*/
      v5 = 3; /*0x1002511e4*/
      break; /*0x1002511e9*/
    case 4: /*0x10025115a*/
      v3 = (const char *)&anon_39a6e93098609d65551b0fc4eadbbbd9_120; /*0x100251186*/
      v4 = 7; /*0x100251192*/
      v5 = 4; /*0x10025119b*/
      break; /*0x1002511a0*/
    case 5: /*0x10025115a*/
      v3 = "proxyRouterOn requires either virtual unlock auth or usable real OAuth login"; /*0x100251215*/
      v4 = 5; /*0x100251221*/
      v5 = 5; /*0x10025122a*/
      break; /*0x10025122a*/
  }
  _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h09a806c9963c943d( /*0x10025122f*/
    a1,
    &anon_39a6e93098609d65551b0fc4eadbbbd9_115,
    12,
    v5,
    v3,
    v4,
    v2);
  return a1; /*0x10025123b*/
}