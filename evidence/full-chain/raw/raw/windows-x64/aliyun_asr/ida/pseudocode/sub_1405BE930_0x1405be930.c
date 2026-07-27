// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405be930
// name: sub_1405BE930
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405BE930(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = *(unsigned __int8 *)(a1 + 1217);
  if ( *(_BYTE *)(a1 + 1217) )
  {
    if ( (_DWORD)result == 3 )
    {
      sub_1405AFCA0(a1 + 112);
      result = *(_QWORD *)(a1 + 104);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)result) )
        result = sub_1410D21C0(a1 + 104);
      *(_BYTE *)(a1 + 1220) = 0;
      *(_WORD *)(a1 + 1218) = 0;
      v2 = *(_QWORD *)(a1 + 72);
      if ( v2 )
        result = sub_140001660(*(_QWORD *)(a1 + 80), v2, 1);
      *(_BYTE *)(a1 + 1221) = 0;
    }
  }
  else
  {
    sub_1405E7F40(a1);
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
      sub_140001660(*(_QWORD *)(a1 + 48), v3, 1);
    result = *(_QWORD *)(a1 + 64);
    if ( result && !_InterlockedDecrement64((volatile signed __int64 *)result) )
      return sub_1410D21C0(a1 + 64);
  }
  return result;
}