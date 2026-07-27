// module: codexmate_lib/core/relay/quota
// addr: 0x14149dcb0
// name: sub_14149DCB0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_14149DCB0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r11
  int v5; // r11d
  unsigned __int128 v6; // kr00_16
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // r11d
  unsigned __int64 v10; // r8
  __int128 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx

  if ( a2 == 0 || a1 < -342 )
    return 0;
  if ( a1 > 308 )
    return 0;
  _BitScanReverse64(&v4, a2);
  v5 = v4 ^ 0x3F;
  v6 = qword_141A43790[2 * a1 + 684] * (unsigned __int128)(a2 << v5);
  if ( (~WORD4(v6) & 0x1FF) == 0 )
    v6 += (qword_141A43790[2 * a1 + 685] * (unsigned __int128)(a2 << v5)) >> 64;
  if ( (unsigned __int64)(a1 + 27) >= 0x53 && (_QWORD)v6 == -1 )
    return 0;
  v7 = (*((_QWORD *)&v6 + 1) >> 63) + 9LL;
  v8 = *((_QWORD *)&v6 + 1) >> v7;
  v9 = ((217706 * (int)a1) >> 16) - v5 + (*((_QWORD *)&v6 + 1) >> 63) + 63;
  if ( v9 >= -1022 )
  {
    v10 = a1 + 4;
    *((_QWORD *)&v11 + 1) = (*((_QWORD *)&v6 + 1) >> v7) & 3LL ^ 1;
    *(_QWORD *)&v11 = *((_QWORD *)&v6 + 1) ^ (v8 << v7);
    v12 = v8 & 0xFFFFFFFFFFFFFCLL;
    if ( v11 != 0 )
      v12 = v8;
    if ( (unsigned __int64)v6 >= 2 )
      v12 = v8;
    if ( v10 >= 0x1C )
      v12 = v8;
    v13 = v12 + (v12 & 1);
    v14 = v13 >> 54;
    if ( v9 - ((unsigned int)(v13 >> 54 == 0) - 1) + 1023 > 0x7FE )
      return 0;
    v15 = (v13 >> 1) & 0x7FEFFFFFFFFFFFFFLL;
    result = 0;
    if ( !v14 )
      return v15;
  }
  else
  {
    if ( (unsigned int)v9 < 0xFFFFFBC3 )
      return 0;
    return (_bittest64((const __int64 *)&v8, (unsigned __int8)(2 - v9)) + (v8 >> (2 - (unsigned __int8)v9))) >> 1;
  }
  return result;
}