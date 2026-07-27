// __ZN13codexmate_lib4core13oauth_refresh1_117_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$GT$11deserialize @ 0x1007ba770
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$GT$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 *__fastcall codexmate_lib::core::oauth_refresh::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$GT$::deserialize::h07d594b1864bd1f9(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  _QWORD v7[4]; // [rsp+0h] [rbp-90h] BYREF
  unsigned __int64 v8; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-68h]
  unsigned __int64 v10; // [rsp+30h] [rbp-60h]
  unsigned __int64 v11; // [rsp+38h] [rbp-58h]
  unsigned __int64 v12; // [rsp+40h] [rbp-50h]
  unsigned __int64 v13; // [rsp+48h] [rbp-48h]
  unsigned __int64 v14; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-38h]
  unsigned __int64 v16; // [rsp+60h] [rbp-30h]
  unsigned __int64 v17; // [rsp+68h] [rbp-28h]
  unsigned __int64 v18; // [rsp+70h] [rbp-20h]
  unsigned __int64 v19; // [rsp+78h] [rbp-18h]

  serde_core::de::Deserializer::__deserialize_content_v1::h1a6b20e6f3df7188(&v14); /*0x1007ba785*/
  if ( (_BYTE)v14 != 22 ) /*0x1007ba790*/
  {
    v7[0] = v14; /*0x1007ba7b2*/
    v7[2] = v16; /*0x1007ba7c6*/
    v7[3] = v17; /*0x1007ba7ce*/
    v7[1] = v15; /*0x1007ba7d8*/
    ((void (__fastcall *)(unsigned __int64 *, _QWORD *))_$LT$serde..private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_str::h8a733f96e83d296c)( /*0x1007ba7ea*/
      &v8,
      v7);
    if ( v8 == 0x8000000000000000LL ) /*0x1007ba801*/
    {
      v15 = v9; /*0x1007ba807*/
      v14 = 0x8000000000000002LL; /*0x1007ba80b*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$C$serde_json..error..Error$GT$$GT$::h518fedf101992a45(&v14); /*0x1007ba813*/
      _$LT$serde..private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_struct::h6fc731367d6810d5( /*0x1007ba83c*/
        &v14,
        v7,
        &anon_3ce6d1417794db0febde534c64082f90_117,
        24,
        &anon_3ce6d1417794db0febde534c64082f90_120,
        2);
      if ( v14 == 0x8000000000000001LL ) /*0x1007ba849*/
      {
        v9 = v15; /*0x1007ba84f*/
        v8 = 0x8000000000000002LL; /*0x1007ba853*/
      }
      else
      {
        v13 = v19; /*0x1007ba8a0*/
        v12 = v18; /*0x1007ba8a8*/
        v11 = v17; /*0x1007ba8b0*/
        v10 = v16; /*0x1007ba8b8*/
        v9 = v15; /*0x1007ba8c4*/
        v8 = v14; /*0x1007ba8c8*/
        if ( v14 != 0x8000000000000002LL ) /*0x1007ba8cf*/
        {
          a1[5] = v13; /*0x1007ba8f8*/
          a1[4] = v12; /*0x1007ba900*/
          a1[3] = v11; /*0x1007ba908*/
          a1[2] = v10; /*0x1007ba910*/
          v5 = v8; /*0x1007ba914*/
          a1[1] = v9; /*0x1007ba91c*/
          *a1 = v5; /*0x1007ba920*/
          goto LABEL_10; /*0x1007ba920*/
        }
      }
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..oauth_refresh..TokenEndpointErrorValue$C$serde_json..error..Error$GT$$GT$::h518fedf101992a45(&v8); /*0x1007ba8d5*/
      a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1007ba8eb*/
                "data did not match any variant of untagged enum TokenEndpointErrorValue%Y-%m-%dT%H:%M:%S%.6fZ[AiMaMi][oa"
                "uth-refresh] active auth ownership changed before refreshcodexmate_lib::core::oauth_refresh",
                0x47u);
      *a1 = 0x8000000000000002LL; /*0x1007ba8ef*/
    }
    else
    {
      v1 = v10; /*0x1007ba859*/
      v17 = v10; /*0x1007ba85d*/
      v2 = v8; /*0x1007ba861*/
      v3 = v9; /*0x1007ba865*/
      v16 = v9; /*0x1007ba869*/
      v15 = v8; /*0x1007ba86d*/
      v14 = 0x8000000000000001LL; /*0x1007ba874*/
      v4 = v18; /*0x1007ba878*/
      a1[5] = v19; /*0x1007ba880*/
      a1[4] = v4; /*0x1007ba884*/
      a1[3] = v1; /*0x1007ba888*/
      a1[2] = v3; /*0x1007ba88c*/
      a1[1] = v2; /*0x1007ba890*/
      *a1 = 0x8000000000000001LL; /*0x1007ba894*/
    }
LABEL_10:
    core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h164af731f97acca9(v7); /*0x1007ba923*/
    return a1; /*0x1007ba92a*/
  }
  a1[1] = v15; /*0x1007ba796*/
  *a1 = 0x8000000000000002LL; /*0x1007ba7a4*/
  return a1; /*0x1007ba932*/
}