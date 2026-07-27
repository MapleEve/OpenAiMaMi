// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405dadf0
// name: sub_1405DADF0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DADF0(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax

  result = *(unsigned __int8 *)(a1 + 8);
  if ( (_DWORD)result == 3 )
    return sub_1405DAF60(a1 + 16);
  if ( (_DWORD)result == 4 )
  {
    v2 = *(unsigned __int8 *)(a1 + 200);
    if ( v2 != 5 )
    {
      if ( v2 == 4 )
      {
        sub_1405E6D10(a1 + 208);
      }
      else
      {
        if ( v2 != 3 )
          return sub_1405E7D00(a1 + 16);
        v3 = *(_QWORD *)(a1 + 208);
        if ( v3 != -1 )
        {
          v4 = 5;
          if ( v3 < 0 )
            v4 = v3 ^ 0x8000000000000000uLL;
          if ( v4 >= 4 )
          {
            v5 = 208;
            if ( v4 == 4 )
            {
              v3 = *(_QWORD *)(a1 + 216);
              v5 = 216;
              if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFDuLL )
                goto LABEL_18;
            }
          }
          else
          {
            v3 = *(_QWORD *)(a1 + 216);
            v5 = 216;
          }
          if ( v3 )
            sub_140001660(*(_QWORD *)(a1 + v5 + 8), v3, 1);
        }
      }
    }
LABEL_18:
    sub_1400104F0(a1 + 168);
    return sub_1405E7D00(a1 + 16);
  }
  return result;
}