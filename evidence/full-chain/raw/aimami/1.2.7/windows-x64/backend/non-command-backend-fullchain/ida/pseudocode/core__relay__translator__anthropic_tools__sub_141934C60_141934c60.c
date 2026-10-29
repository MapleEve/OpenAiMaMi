// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | ea 0x141934c60 | name sub_141934C60
// win 1.2.7 | module src/core/relay/translator/anthropic_tools.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141934C60(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-30h]
  _BYTE v3[24]; // [rsp+30h] [rbp-20h]

  *(_QWORD *)&v2 = 1;
  *((_QWORD *)&v2 + 1) = a1;
  *(_OWORD *)&v3[8] = 0;
  nullsub_1(a1);
  result = sub_140001650(40, 8);
  if ( !result )
    sub_141938D11(8, 40);
  *(_QWORD *)(result + 32) = *(_QWORD *)&v3[16];
  *(_OWORD *)(result + 16) = *(_OWORD *)v3;
  *(_OWORD *)result = v2;
  return result;
}
