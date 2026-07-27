// __ZN13codexmate_lib4core5relay16codex_diagnostic1_117_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$9serialize @ 0x1004e91c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::serialize::hff94d7d09a6b65c0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-70h] BYREF
  __int64 v5; // [rsp+8h] [rbp-68h]
  __int64 v6; // [rsp+10h] [rbp-60h]
  __int64 v7; // [rsp+18h] [rbp-58h]
  __int64 v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+28h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x1004e91e6*/
    &v4,
    &anon_92869709a5e99ce1936aa4e326b6c562_401,
    14,
    5);
  if ( v4 == 0x8000000000000002LL ) /*0x1004e9200*/
  {
    *(_QWORD *)(a1 + 8) = v5; /*0x1004e9202*/
    *(_BYTE *)a1 = 6; /*0x1004e9206*/
  }
  else
  {
    v15 = v9; /*0x1004e9212*/
    v14 = v8; /*0x1004e921a*/
    v13 = v7; /*0x1004e9226*/
    v12 = v6; /*0x1004e922a*/
    v10 = v4; /*0x1004e922e*/
    v11 = v5; /*0x1004e9232*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7( /*0x1004e9249*/
           &v10,
           (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_188,
           2,
           a2);
    if ( v2 /*0x1004e92cc*/
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v10,
                 (__int64)"status",
                 6,
                 a2 + 24)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v10,
                 (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_402,
                 5,
                 a2 + 48)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v10,
                 &anon_92869709a5e99ce1936aa4e326b6c562_403,
                 6,
                 a2 + 72)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ec4549ab4fa3633(
                 &v10,
                 &anon_92869709a5e99ce1936aa4e326b6c562_404,
                 7,
                 a2 + 96)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v2; /*0x1004e92ce*/
      *(_BYTE *)a1 = 6; /*0x1004e92d2*/
      core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h7f9396c43a427c48(&v10); /*0x1004e92d9*/
    }
    else
    {
      v9 = v15; /*0x1004e92ee*/
      v8 = v14; /*0x1004e92f6*/
      v7 = v13; /*0x1004e92fe*/
      v6 = v12; /*0x1004e9306*/
      v5 = v11; /*0x1004e9312*/
      v4 = v10; /*0x1004e9316*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x1004e9321*/
        a1,
        &v4);
    }
  }
  return a1; /*0x1004e92e1*/
}