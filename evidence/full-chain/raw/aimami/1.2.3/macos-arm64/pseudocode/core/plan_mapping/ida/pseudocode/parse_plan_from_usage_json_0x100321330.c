// __ZN13codexmate_lib4core12plan_mapping26parse_plan_from_usage_json @ 0x100321330 | 基线 same-set
char __fastcall codexmate_lib::core::plan_mapping::parse_plan_from_usage_json::h50e4148c491ed03f(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // bl
  size_t v10; // [rsp+8h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-20h]
  __int64 v12; // [rsp+18h] [rbp-18h]

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015E3C96, 9, a1); /*0x10032134d*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v1); /*0x100321359*/
  v2 = v11; /*0x10032135e*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x100321369*/
  if ( result != 8 ) /*0x100321370*/
    goto LABEL_20; /*0x100321370*/
  if ( v10 ) /*0x10032137d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x100321387*/
  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015E3CD0, 17, a1); /*0x10032139b*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v4); /*0x1003213a7*/
  v2 = v11; /*0x1003213ac*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x1003213b7*/
  if ( result != 8 ) /*0x1003213be*/
    goto LABEL_20; /*0x1003213be*/
  if ( v10 ) /*0x1003213cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x1003213d5*/
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1003213e9*/
         &anon_b0ee9adff4519c22b647af231a5a39fa_87,
         4,
         a1);
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v5); /*0x1003213f5*/
  v2 = v11; /*0x1003213fa*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x100321405*/
  if ( result != 8 ) /*0x10032140c*/
    goto LABEL_20; /*0x10032140c*/
  if ( v10 ) /*0x100321419*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x100321423*/
  v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3CE5, 18); /*0x100321437*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v6); /*0x100321443*/
  v2 = v11; /*0x100321448*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x100321453*/
  if ( result != 8 ) /*0x10032145a*/
    goto LABEL_20; /*0x10032145a*/
  if ( v10 ) /*0x100321467*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x100321471*/
  v7 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3CF7, 18); /*0x100321485*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v7); /*0x100321491*/
  v2 = v11; /*0x100321496*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x1003214a1*/
  if ( result != 8 ) /*0x1003214a8*/
    goto LABEL_20; /*0x1003214a8*/
  if ( v10 ) /*0x1003214b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x1003214bb*/
  v8 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D09, 15); /*0x1003214cf*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v10, v8); /*0x1003214db*/
  v2 = v11; /*0x1003214e0*/
  result = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v11, v12); /*0x1003214eb*/
  if ( result == 8 ) /*0x1003214f2*/
  {
    if ( v10 ) /*0x1003214fb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x100321505*/
    return 8; /*0x10032150a*/
  }
  else
  {
LABEL_20:
    if ( v10 ) /*0x100321515*/
    {
      v9 = result; /*0x10032151f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v10, 1); /*0x100321521*/
      return v9; /*0x100321526*/
    }
  }
  return result; /*0x100321528*/
}