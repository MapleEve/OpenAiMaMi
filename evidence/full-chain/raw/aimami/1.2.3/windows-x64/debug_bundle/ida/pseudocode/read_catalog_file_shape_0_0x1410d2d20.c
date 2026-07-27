// module: codexmate_lib/core/debug_bundle
// addr: 0x1410d2d20
// name: read_catalog_file_shape_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::read_catalog_file_shape | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_catalog_file_shape_0(__int64 a1, int a2)
{
  __int64 v3; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v4[12]; // [rsp+48h] [rbp-60h] BYREF

  v3 = a1 + 48;
  v4[0] = a1 + 128;
  v4[1] = &unk_14185BF48;
  v4[2] = a1 + 56;
  v4[3] = &unk_14185BF68;
  v4[4] = a1 + 88;
  v4[5] = &unk_14185BF88;
  v4[6] = a1;
  v4[7] = &off_14185BFA8;
  v4[8] = a1 + 24;
  v4[9] = &off_14185BFC8;
  v4[10] = &v3;
  v4[11] = &unk_14185BFE8;
  return sub_1414A20B0(a2, (unsigned int)aClienthellopay, 18, (unsigned int)&off_14185C050, 6, (__int64)v4, 6);
}
