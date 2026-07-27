// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140aec3f0
// name: sub_140AEC3F0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_140AEC3F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_14033BC10(a1, a2);
  if ( v3 != 2 )
  {
    if ( v3 == 7 )
    {
      if ( *(_DWORD *)v2 ^ 0x482D687A | *(_DWORD *)(v2 + 3) ^ 0x736E6148 )
        return nullptr;
    }
    else
    {
      if ( v3 != 5 )
        return nullptr;
      if ( *(_DWORD *)v2 ^ 0x432D687A | *(unsigned __int8 *)(v2 + 4) ^ 0x4E )
      {
        if ( *(_DWORD *)v2 ^ 0x552D6E65 | *(unsigned __int8 *)(v2 + 4) ^ 0x53 )
        {
          if ( !(*(_DWORD *)v2 ^ 0x4A2D616A | *(unsigned __int8 *)(v2 + 4) ^ 0x50) )
            return &unk_1417B0A94;
          return nullptr;
        }
        return &unk_1417B0A92;
      }
    }
    return &unk_1417B0A90;
  }
  if ( *(_WORD *)v2 == 26746 )
    return &unk_1417B0A90;
  if ( *(_WORD *)v2 == 28261 )
    return &unk_1417B0A92;
  if ( *(_WORD *)v2 != 24938 )
    return nullptr;
  return &unk_1417B0A94;
}