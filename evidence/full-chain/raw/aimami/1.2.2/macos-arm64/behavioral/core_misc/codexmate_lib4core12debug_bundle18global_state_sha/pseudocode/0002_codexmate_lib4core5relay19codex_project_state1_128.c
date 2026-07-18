// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x100857b50 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::serialize::ha647588cda007fef(
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

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x100857b76*/
    &v4,
    &unk_101599A39,
    22,
    18);
  if ( v4 == 0x8000000000000002LL ) /*0x100857b90*/
  {
    *(_QWORD *)(a1 + 8) = v5; /*0x100857b92*/
    *(_BYTE *)a1 = 6; /*0x100857b96*/
  }
  else
  {
    v15 = v9; /*0x100857ba2*/
    v14 = v8; /*0x100857baa*/
    v13 = v7; /*0x100857bb6*/
    v12 = v6; /*0x100857bba*/
    v10 = v4; /*0x100857bbe*/
    v11 = v5; /*0x100857bc2*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h7b8c0e45346eee60( /*0x100857bd9*/
           &v10,
           "pathdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
           4,
           a2);
    if ( v2 ) /*0x100857be1*/
      goto LABEL_21; /*0x100857be1*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ba4aee08da42b2a( /*0x100857bfe*/
           &v10,
           &unk_101599A4F,
           6,
           a2 + 216);
    if ( v2 ) /*0x100857c06*/
      goto LABEL_21; /*0x100857c06*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ba4aee08da42b2a( /*0x100857c23*/
           &v10,
           &unk_101599A55,
           7,
           a2 + 217);
    if ( v2 ) /*0x100857c2b*/
      goto LABEL_21; /*0x100857c2b*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he1abf794214c4a05( /*0x100857c45*/
           &v10,
           &unk_101599A5C,
           10,
           a2 + 48);
    if ( v2 ) /*0x100857c4d*/
      goto LABEL_21; /*0x100857c4d*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he1abf794214c4a05( /*0x100857c67*/
           &v10,
           &unk_101599A66,
           9,
           a2 + 72);
    if ( v2 ) /*0x100857c6f*/
      goto LABEL_21; /*0x100857c6f*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512( /*0x100857c8c*/
           &v10,
           &unk_101599A6F,
           9,
           a2 + 144);
    if ( v2 ) /*0x100857c94*/
      goto LABEL_21; /*0x100857c94*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512( /*0x100857cb1*/
           &v10,
           &unk_101599A78,
           17,
           a2 + 152);
    if ( v2 ) /*0x100857cb9*/
      goto LABEL_21; /*0x100857cb9*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512( /*0x100857cd6*/
           &v10,
           &unk_101599A89,
           15,
           a2 + 160);
    if ( v2 ) /*0x100857cde*/
      goto LABEL_21; /*0x100857cde*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512( /*0x100857cfb*/
           &v10,
           &unk_101599A98,
           22,
           a2 + 168);
    if ( v2 ) /*0x100857d03*/
      goto LABEL_21; /*0x100857d03*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512( /*0x100857d20*/
           &v10,
           &unk_101599AAE,
           9,
           a2 + 176);
    if ( v2 ) /*0x100857d28*/
      goto LABEL_21; /*0x100857d28*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8a4235c770bb849c( /*0x100857d42*/
           &v10,
           &unk_101599AB7,
           12,
           a2 + 96);
    if ( v2 /*0x100857e3e*/
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512(
                 &v10,
                 &unk_101599AC3,
                 17,
                 a2 + 184)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512(
                 &v10,
                 &unk_101599AD4,
                 18,
                 a2 + 192)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512(
                 &v10,
                 &unk_101599AE6,
                 17,
                 a2 + 200)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb183d9f3d172c512(
                 &v10,
                 &unk_101599AF7,
                 23,
                 a2 + 208)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4ed6169fcb2c717d(
                 &v10,
                 &unk_101599B0E,
                 12,
                 a2 + 24)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6ba4aee08da42b2a(
                 &v10,
                 &unk_101599B1A,
                 11,
                 a2 + 218)) != 0
      || (v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he1abf794214c4a05(
                 &v10,
                 &unk_101599B25,
                 12,
                 a2 + 120)) != 0 )
    {
LABEL_21:
      *(_QWORD *)(a1 + 8) = v2; /*0x100857e40*/
      *(_BYTE *)a1 = 6; /*0x100857e44*/
      core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::hf0af6117a42be266(&v10); /*0x100857e4b*/
    }
    else
    {
      v9 = v15; /*0x100857e60*/
      v8 = v14; /*0x100857e68*/
      v7 = v13; /*0x100857e70*/
      v6 = v12; /*0x100857e78*/
      v5 = v11; /*0x100857e84*/
      v4 = v10; /*0x100857e88*/
      ((void (__fastcall *)(__int64, __int64 *))_$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf)( /*0x100857e93*/
        a1,
        &v4);
    }
  }
  return a1; /*0x100857e53*/
}