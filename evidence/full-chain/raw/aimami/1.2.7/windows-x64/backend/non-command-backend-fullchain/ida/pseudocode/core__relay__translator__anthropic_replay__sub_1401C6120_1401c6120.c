// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | ea 0x1401c6120 | name sub_1401C6120
// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_1401C6120(char a1, char a2, __int64 a3)
{
  __int128 v4; // xmm0
  _OWORD *result; // rax
  _OWORD v6[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-30h] BYREF
  __int128 v9; // [rsp+60h] [rbp-20h]
  char v10; // [rsp+7Fh] [rbp-1h]
  __int64 v11; // [rsp+80h] [rbp+0h]

  v11 = -2;
  LOBYTE(v8) = a1;
  BYTE1(v8) = a2;
  sub_1401A7F40(v6, &v8);
  if ( LOBYTE(v6[0]) == 0xFF )
  {
    *(_QWORD *)&v8 = *((_QWORD *)&v6[0] + 1);
    sub_141939040(
      (unsigned int)aFixedReplayPol,
      30,
      (unsigned int)&v8,
      (unsigned int)&off_1419D7F48,
      (__int64)&off_1419D96A8);
  }
  v9 = v6[1];
  v8 = v6[0];
  v10 = 1;
  v7 = sub_141641AF0(aAimamiReplayPo, 20, a3);
  sub_14002F9D0(v7);
  v4 = v8;
  result = (_OWORD *)v7;
  *(_OWORD *)(v7 + 16) = v9;
  *result = v4;
  return result;
}
