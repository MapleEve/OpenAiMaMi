// module: codexmate_lib/core/voice/runtime
// addr: 0x1401c5a50
// name: sub_1401C5A50
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1401C5A50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v6[536]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v7[360]; // [rsp+238h] [rbp+1B8h] BYREF
  _DWORD v8[90]; // [rsp+3A0h] [rbp+320h] BYREF
  _BYTE v9[536]; // [rsp+508h] [rbp+488h] BYREF
  _BYTE v10[360]; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v11; // [rsp+888h] [rbp+808h]

  v11 = -2;
  sub_14065B290(v8, *(_QWORD *)(a2 + 136) + 16LL, a3, a4);
  if ( v8[0] == -1 )
  {
    *a1 = -1;
  }
  else
  {
    sub_141684120(v10, v8, 360);
    sub_14047AB10(v9, v8);
    if ( (unsigned __int8)sub_1403B7FE0(v9) )
    {
      sub_141684120(v6, v9, 536);
      sub_141684120(v7, v10, 360);
      sub_141684120(a1, v6, 896);
    }
    else
    {
      *a1 = -1;
      sub_140014B00((__int64)v9);
      sub_140014D70((__int64)v10);
    }
  }
  return a1;
}