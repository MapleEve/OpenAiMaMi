// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x1411d2a40 | name sub_1411D2A40
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411D2A40(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-168h]
  __int128 v5; // [rsp+30h] [rbp-158h]
  __int128 v6; // [rsp+40h] [rbp-148h]
  __int128 v7; // [rsp+50h] [rbp-138h]
  __int128 v8; // [rsp+60h] [rbp-128h]
  __int128 v9; // [rsp+70h] [rbp-118h]
  _QWORD v10[3]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v11; // [rsp+98h] [rbp-F0h]
  __int128 v12; // [rsp+A8h] [rbp-E0h]
  __int128 v13; // [rsp+B8h] [rbp-D0h]
  __int128 v14; // [rsp+C8h] [rbp-C0h]
  __int128 v15; // [rsp+D8h] [rbp-B0h]
  __m128i v16[10]; // [rsp+E8h] [rbp-A0h] BYREF

  sub_1411D3C30(v10);
  v2 = v10[0];
  v4 = *(_OWORD *)&v10[1];
  v5 = v11;
  v6 = v12;
  v7 = v13;
  v8 = v14;
  v9 = v15;
  if ( v10[0] != 2 )
    sub_1418F44E0((__m128i *)(a1 + 104), v16, 0x90u);
  *(_OWORD *)(a1 + 88) = v9;
  *(_OWORD *)(a1 + 72) = v8;
  *(_OWORD *)(a1 + 56) = v7;
  *(_OWORD *)(a1 + 40) = v6;
  *(_OWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v2;
  return a1;
}
