// module: codexmate_lib/core/debug_report_upload
// addr: 0x14070d370
// name: serialize_1
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::debug_report_upload::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_report_upload..DebugReportUploadPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_1(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int16 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-20h]

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 16);
  if ( *(_QWORD *)*a2 == v4 )
  {
    v8 = a2;
    sub_141688D30(v3, v4, 1, 1, 1);
    a2 = v8;
    v4 = *(_QWORD *)(v3 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123;
  *(_QWORD *)(v3 + 16) = v4 + 1;
  v10 = 256;
  v11 = a2;
  result = sub_14045E240(&v10, aReportid, 8, a1, v9);
  if ( !result )
  {
    if ( (_BYTE)v10 == 1 )
    {
      return sub_1416BF0E0();
    }
    else
    {
      result = sub_1404670A0(&v10, aBytes, 5, a1 + 24);
      if ( !result )
      {
        result = 0;
        if ( (v10 & 1) == 0 )
        {
          if ( HIBYTE(v10) )
          {
            v6 = *v11;
            v7 = *(_QWORD *)(*v11 + 16);
            if ( *(_QWORD *)*v11 == v7 )
            {
              sub_141688D30(v6, v7, 1, 1, 1);
              v7 = *(_QWORD *)(v6 + 16);
            }
            *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125;
            *(_QWORD *)(v6 + 16) = v7 + 1;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
