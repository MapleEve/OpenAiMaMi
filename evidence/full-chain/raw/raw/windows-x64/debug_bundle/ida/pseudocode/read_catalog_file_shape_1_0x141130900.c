// module: codexmate_lib/core/debug_bundle
// addr: 0x141130900
// name: read_catalog_file_shape_1
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::read_catalog_file_shape | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_catalog_file_shape_1(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v5[12]; // [rsp+48h] [rbp-60h] BYREF

  v2 = *a1;
  v4 = v2 + 48;
  v5[0] = v2 + 128;
  v5[1] = &unk_141867308;
  v5[2] = v2 + 56;
  v5[3] = "";
  v5[4] = v2 + 88;
  v5[5] = &unk_141867760;
  v5[6] = v2;
  v5[7] = &off_141867780;
  v5[8] = v2 + 24;
  v5[9] = &off_1418677A0;
  v5[10] = &v4;
  v5[11] = &unk_1418677C0;
  return sub_1414A20B0(a2, (unsigned int)aClienthellopay_0, 18, (unsigned int)&off_141867820, 6, (__int64)v5, 6);
}
