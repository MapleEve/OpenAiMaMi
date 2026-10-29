// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14119e2a0 | name sub_14119E2A0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14119E2A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = a1;
  if ( *(_BYTE *)a2 != 2 )
    goto LABEL_2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v3 + 16);
  if ( v5 != 3 )
  {
    if ( v5 == 2 && *(_WORD *)v4 == 29559 )
    {
      *(_BYTE *)(result + 8) = 0;
      *(_QWORD *)result = -1;
      return result;
    }
LABEL_2:
    *(_QWORD *)result = 12;
    *(_QWORD *)(result + 8) = 0x8000000000000003uLL;
    return result;
  }
  if ( *(_WORD *)v4 ^ 0x7377 | *(unsigned __int8 *)(v4 + 2) ^ 0x73 )
    goto LABEL_2;
  *(_BYTE *)(result + 8) = 1;
  *(_QWORD *)result = -1;
  return result;
}
