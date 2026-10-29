// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1407a91d0 | name sub_1407A91D0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407A91D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = *(unsigned __int8 *)(a1 + 200);
  if ( *(_BYTE *)(a1 + 200) )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( *(_BYTE *)(a1 + 192) == 3 )
      {
        result = a1;
        if ( *(_BYTE *)(a1 + 120) == 4 )
        {
          sub_141500F50(a1 + 128);
          result = *(_QWORD *)(a1 + 136);
          if ( result )
            result = (*(__int64 (__fastcall **)(_QWORD))(result + 24))(*(_QWORD *)(a1 + 144));
        }
      }
      if ( *(_DWORD *)(a1 + 40) != 3 )
      {
        v2 = *(_QWORD *)(a1 + 48);
        if ( v2 )
          result = sub_140001660(*(_QWORD *)(a1 + 56), v2, 1);
      }
      *(_BYTE *)(a1 + 201) = 0;
    }
  }
  else if ( *(_DWORD *)a1 != 3 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      return sub_140001660(*(_QWORD *)(a1 + 16), v3, 1);
  }
  return result;
}
