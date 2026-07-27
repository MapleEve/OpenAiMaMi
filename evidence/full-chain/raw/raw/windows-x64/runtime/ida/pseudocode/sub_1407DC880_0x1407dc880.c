// module: codexmate_lib/core/voice/runtime
// addr: 0x1407dc880
// name: sub_1407DC880
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1407DC880(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rsi
  __int64 v8; // rt0
  char v9; // of
  _QWORD v11[48]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v12; // [rsp+200h] [rbp+180h]
  __int128 v13; // [rsp+210h] [rbp+190h]
  __int64 v14; // [rsp+220h] [rbp+1A0h]
  __int64 v15; // [rsp+228h] [rbp+1A8h]
  __int64 v16; // [rsp+230h] [rbp+1B0h]
  char v17; // [rsp+238h] [rbp+1B8h]
  _QWORD v18[22]; // [rsp+240h] [rbp+1C0h] BYREF

  v18[18] = v11;
  v18[19] = -2;
  if ( !a1 )
    sub_1416C32C0(aMpscBoundedCha, 81, a2);
  sub_1412F2740(v18, a1);
  nullsub_1(v3);
  v4 = sub_140001650(800, 8);
  if ( !v4 )
    sub_1416C2D31(8, 800);
  *(_OWORD *)(v4 + 784) = 0;
  *(_OWORD *)(v4 + 768) = 0;
  v11[16] = v4;
  v11[17] = 0;
  v14 = v4;
  v15 = v4;
  v16 = 0;
  v18[5] = a1;
  v11[0] = 1;
  v11[1] = 1;
  v11[32] = 0;
  v11[34] = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  v18[6] = 1;
  v18[7] = 0;
  nullsub_1(v5);
  v6 = sub_140001650(512, 128);
  if ( !v6 )
    sub_1416C2D31(128, 512);
  v7 = (volatile signed __int64 *)v6;
  sub_141684120(v6, v11, 512);
  v8 = _InterlockedIncrement64(v7);
  if ( (v8 < 0) ^ v9 | (v8 == 0) )
    BUG();
  return v7;
}