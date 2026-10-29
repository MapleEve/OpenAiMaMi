// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140409740 | name sub_140409740
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140409740(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-8h] BYREF

  v1 = 10;
  if ( *a1 >= 3u )
    v1 = *a1 - 3LL;
  result = v1 - 2;
  switch ( result )
  {
    case 0LL:
      result = a1[1];
      if ( (unsigned int)(result & 3) - 2 >= 2 && (result & 3) != 0 )
      {
        v6 = result - 1;
        return sub_1416BCB00(&v6);
      }
      return result;
    case 1LL:
      if ( *((_BYTE *)a1 + 8) != 0xFF )
        return sub_14040A900(a1 + 1);
      return result;
    case 3LL:
      if ( *((_BYTE *)a1 + 8) == 10 )
      {
        result = a1[2];
        if ( result )
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(result + 32))(a1 + 5, a1[3], a1[4]);
      }
      return result;
    case 4LL:
      v3 = a1[1];
      v4 = 5;
      if ( v3 < 0 )
        v4 = v3 ^ 0x8000000000000000uLL;
      if ( v4 >= 4 )
      {
        result = 8;
        if ( v4 == 4 )
        {
          v3 = a1[2];
          result = 16;
          if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFDuLL )
            return result;
        }
      }
      else
      {
        v3 = a1[2];
        result = 16;
      }
      if ( v3 )
        return sub_140001660(*(_QWORD *)((char *)a1 + result + 8), v3, 1);
      return result;
    case 7LL:
      v5 = a1[1];
      if ( v5 > 0 )
        return sub_140001660(a1[2], v5, 1);
      return result;
    case 8LL:
      return sub_140402000((__int64)a1);
    default:
      return result;
  }
}
