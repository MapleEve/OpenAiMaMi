// __ZN13codexmate_lib4core5relay19codex_project_state1_128_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$9serialize @ 0x100ac8ec0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_project_state::_ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::serialize::h16410cbb0149c066(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // [rsp+8h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-70h]
  __int64 v7; // [rsp+18h] [rbp-68h]
  __int64 v8; // [rsp+20h] [rbp-60h]
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x100ac8ef2*/
    &v5,
    &unk_10167D1E4,
    22,
    18);
  if ( v5 == 0x8000000000000002LL ) /*0x100ac8f06*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x100ac8f08*/
    *(_BYTE *)a1 = 6; /*0x100ac8f0c*/
  }
  else
  {
    v16 = v10; /*0x100ac8f21*/
    v15 = v9; /*0x100ac8f29*/
    v14 = v8; /*0x100ac8f35*/
    v13 = v7; /*0x100ac8f39*/
    v11 = v5; /*0x100ac8f3d*/
    v12 = v6; /*0x100ac8f41*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8a37fda55e301203( /*0x100ac8f58*/
           &v11,
           "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
           4,
           a2);
    if ( v3 ) /*0x100ac8f60*/
      goto LABEL_22; /*0x100ac8f60*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ec4549ab4fa3633( /*0x100ac8f7d*/
           &v11,
           &unk_10167D1FA,
           6,
           a2 + 216);
    if ( v3 ) /*0x100ac8f85*/
      goto LABEL_22; /*0x100ac8f85*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ec4549ab4fa3633( /*0x100ac8fa2*/
           &v11,
           &unk_10167D200,
           7,
           a2 + 217);
    if ( v3 ) /*0x100ac8faa*/
      goto LABEL_22; /*0x100ac8faa*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33( /*0x100ac8fc4*/
           &v11,
           &unk_10167D207,
           10,
           a2 + 48);
    if ( v3 ) /*0x100ac8fcc*/
      goto LABEL_22; /*0x100ac8fcc*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33( /*0x100ac8fe6*/
           &v11,
           &unk_10167D211,
           9,
           a2 + 72);
    if ( v3 ) /*0x100ac8fee*/
      goto LABEL_22; /*0x100ac8fee*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b( /*0x100ac900b*/
           &v11,
           &unk_10167D21A,
           9,
           a2 + 144);
    if ( v3 ) /*0x100ac9013*/
      goto LABEL_22; /*0x100ac9013*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b( /*0x100ac9030*/
           &v11,
           &unk_10167D223,
           17,
           a2 + 152);
    if ( v3 ) /*0x100ac9038*/
      goto LABEL_22; /*0x100ac9038*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b( /*0x100ac9055*/
           &v11,
           &unk_10167D234,
           15,
           a2 + 160);
    if ( v3 ) /*0x100ac905d*/
      goto LABEL_22; /*0x100ac905d*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b( /*0x100ac907a*/
           &v11,
           &unk_10167D243,
           22,
           a2 + 168);
    if ( v3 ) /*0x100ac9082*/
      goto LABEL_22; /*0x100ac9082*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b( /*0x100ac909f*/
           &v11,
           &unk_10167D259,
           9,
           a2 + 176);
    if ( v3 ) /*0x100ac90a7*/
      goto LABEL_22; /*0x100ac90a7*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h504e1560d8b13fe1( /*0x100ac90c1*/
           &v11,
           &unk_10167D262,
           12,
           a2 + 96);
    if ( v3 /*0x100ac91bd*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b(
                 &v11,
                 &unk_10167D26E,
                 17,
                 a2 + 184)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b(
                 &v11,
                 &unk_10167D27F,
                 18,
                 a2 + 192)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b(
                 &v11,
                 &unk_10167D291,
                 17,
                 a2 + 200)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8049913fa4959d2b(
                 &v11,
                 &unk_10167D2A2,
                 23,
                 a2 + 208)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd52200c1bcd4de12(
                 &v11,
                 &unk_10167D2B9,
                 12,
                 a2 + 24)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ec4549ab4fa3633(
                 &v11,
                 &unk_10167D2C5,
                 11,
                 a2 + 218)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &unk_10167D2D0,
                 12,
                 a2 + 120)) != 0 )
    {
LABEL_22:
      *(_QWORD *)(a1 + 8) = v3; /*0x100ac91bf*/
      *(_BYTE *)a1 = 6; /*0x100ac91c3*/
      v4 = v11; /*0x100ac91c6*/
      if ( v11 == 0x8000000000000001LL ) /*0x100ac91d1*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x100ac91d7*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x100ac91e1*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x100ac91ef*/
        if ( v4 != 0x8000000000000000LL && v4 ) /*0x100ac9200*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v4, 1); /*0x100ac9212*/
      }
    }
    else
    {
      v10 = v16; /*0x100ac9220*/
      v9 = v15; /*0x100ac9228*/
      v8 = v14; /*0x100ac9230*/
      v7 = v13; /*0x100ac9238*/
      v6 = v12; /*0x100ac9244*/
      v5 = v11; /*0x100ac9248*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x100ac9253*/
        a1,
        &v5);
    }
  }
  return a1; /*0x100ac8f12*/
}