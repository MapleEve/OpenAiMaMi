// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405e1460
// name: sub_1405E1460
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405E1460(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx

  v1 = 10;
  if ( *(_QWORD *)a1 >= 3u )
    v1 = *(_QWORD *)a1 - 3LL;
  result = v1 - 2;
  switch ( result )
  {
    case 0LL:
      return sub_140018650(a1 + 8);
    case 1LL:
      if ( *(_BYTE *)(a1 + 8) != 0xFF )
        return sub_1405E17A0(a1 + 8);
      return result;
    case 3LL:
      if ( *(_BYTE *)(a1 + 8) == 10 )
      {
        result = *(_QWORD *)(a1 + 16);
        if ( result )
          return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(result + 32))(
                   a1 + 40,
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 32));
      }
      return result;
    case 4LL:
      v3 = *(_QWORD *)(a1 + 8);
      v4 = 5;
      if ( v3 < 0 )
        v4 = v3 ^ 0x8000000000000000uLL;
      if ( v4 >= 4 )
      {
        result = 8;
        if ( v4 == 4 )
        {
          v3 = *(_QWORD *)(a1 + 16);
          result = 16;
          if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFDuLL )
            return result;
        }
      }
      else
      {
        v3 = *(_QWORD *)(a1 + 16);
        result = 16;
      }
      if ( v3 )
        return sub_140001660(*(_QWORD *)(a1 + result + 8), v3, 1);
      return result;
    case 7LL:
      v5 = *(_QWORD *)(a1 + 8);
      if ( v5 > 0 )
        return sub_140001660(*(_QWORD *)(a1 + 16), v5, 1);
      return result;
    case 8LL:
      return sub_1405AE6D0(a1);
    default:
      return result;
  }
}