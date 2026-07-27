// module: codexmate_lib/core/relay/fetch_models
// addr: 0x140bedde0
// name: sub_140BEDDE0
// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BEDDE0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 72);
  if ( (_DWORD)result == 3 )
  {
    v4 = (_QWORD *)a1;
    sub_140BF25D0(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  }
  else
  {
    if ( (_DWORD)result != 4 )
      return result;
    v4 = (_QWORD *)a1;
    if ( *(_BYTE *)(a1 + 776) == 3 )
    {
      sub_140BE80E0(a1 + 352);
    }
    else if ( !*(_BYTE *)(a1 + 776) )
    {
      sub_140BA5F10(a1 + 216);
      v2 = (_QWORD *)v4[43];
      if ( *v2 )
        sub_140001660(v2[1], *v2, 1);
      sub_140001660(v2, 88, 8);
    }
  }
  result = (__int64)v4;
  v3 = v4[6];
  if ( v3 )
    return sub_140001660(v4[7], v3, 1);
  return result;
}