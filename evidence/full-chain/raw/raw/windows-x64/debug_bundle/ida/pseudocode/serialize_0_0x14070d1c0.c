// module: codexmate_lib/core/debug_bundle
// addr: 0x14070d1c0
// name: serialize_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_bundle..DebugBundlePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int16 v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-20h]

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( *(_QWORD *)*a2 == v4 )
  {
    v6 = a2;
    sub_141688D30(v3, v4, 1, 1, 1);
    a2 = v6;
    v4 = *(_QWORD *)(v3 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123;
  *(_QWORD *)(v3 + 16) = v4 + 1;
  v11 = 256;
  v12 = a2;
  result = sub_14045E240(&v11, aTargetpath, 10, a1, v7);
  if ( !result )
  {
    if ( (_BYTE)v11 )
      return sub_1416BF0E0();
    result = sub_14045E240(&v11, aFilename, 8, a1 + 24, v8);
    if ( result )
      return result;
    if ( (_BYTE)v11 )
      return sub_1416BF0E0();
    result = sub_1404670A0(&v11, aBytes, 5, a1 + 96);
    if ( result )
      return result;
    if ( (_BYTE)v11 )
      return sub_1416BF0E0();
    result = sub_14045E240(&v11, aSummary_1, 7, a1 + 48, v9);
    if ( result )
      return result;
    if ( (_BYTE)v11 )
      return sub_1416BF0E0();
    result = sub_14045E240(&v11, aTargetmode, 10, a1 + 72, v10);
    if ( result )
      return result;
    if ( (_BYTE)v11 )
      return sub_1416BF0E0();
    result = sub_140466A30(&v11, aHasissues, 9, a1 + 104);
    if ( !result )
    {
      result = 0;
      if ( (v11 & 1) == 0 )
      {
        if ( HIBYTE(v11) )
        {
          sub_140301CD0(*v12, &unk_141787CA1, 1);
          return 0;
        }
      }
    }
  }
  return result;
}
