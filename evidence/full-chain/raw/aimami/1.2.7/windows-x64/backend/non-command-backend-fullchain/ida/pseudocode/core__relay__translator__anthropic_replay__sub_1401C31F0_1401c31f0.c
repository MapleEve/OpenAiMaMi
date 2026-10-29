// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | ea 0x1401c31f0 | name sub_1401C31F0
// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_1401C31F0(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _OWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v6; // [rsp+50h] [rbp-30h] BYREF
  __int128 v7; // [rsp+60h] [rbp-20h]
  __int64 v8; // [rsp+70h] [rbp-10h]
  char v9; // [rsp+7Fh] [rbp-1h]
  __int64 v10; // [rsp+80h] [rbp+0h]

  v10 = -2;
  sub_1401A7D70(v5, a1);
  if ( LOBYTE(v5[0]) == 0xFF )
  {
    *(_QWORD *)&v6 = *((_QWORD *)&v5[0] + 1);
    sub_141939040(
      (unsigned int)aFixedSearchCon,
      31,
      (unsigned int)&v6,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419D91E8);
  }
  v7 = v5[1];
  v6 = v5[0];
  v9 = 1;
  v8 = sub_141641AF0(aAimamiSearchCo, 21, a2);
  sub_14002F9D0(v8);
  v3 = v6;
  result = (_OWORD *)v8;
  *(_OWORD *)(v8 + 16) = v7;
  *result = v3;
  return result;
}
