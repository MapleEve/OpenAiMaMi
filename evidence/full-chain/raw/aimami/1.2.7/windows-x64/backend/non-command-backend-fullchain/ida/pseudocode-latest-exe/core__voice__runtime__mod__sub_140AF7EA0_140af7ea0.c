// win 1.2.7 latest-exe | module src/core/voice/runtime/mod.rs | ea 0x140af7ea0 | successor of pre-update 0x1408f0220 | session <审计会话>
// match evidence: {"body_sim": 0.685, "str_ov": 0, "anchor": 0.174, "conf": false, "verdict": "CONFIRMED_FINAL"}
volatile signed __int64 *__fastcall sub_140AF7EA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rt0
  char v11; // of
  _QWORD v13[48]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v14; // [rsp+200h] [rbp+180h]
  __int128 v15; // [rsp+210h] [rbp+190h]
  __int64 v16; // [rsp+220h] [rbp+1A0h]
  __int64 v17; // [rsp+228h] [rbp+1A8h]
  __int64 v18; // [rsp+230h] [rbp+1B0h]
  char v19; // [rsp+238h] [rbp+1B8h]
  _QWORD v20[22]; // [rsp+240h] [rbp+1C0h] BYREF

  v20[18] = v13;
  v20[19] = -2;
  if ( !a1 )
    sub_14196B850(aMpscBoundedCha_0, 81, a2);
  sub_141537C10(v20, a1);
  nullsub_1(v4, v3);
  v5 = sub_140001650(800, 8);
  if ( !v5 )
    sub_14196B2C1(8, 800);
  *(_OWORD *)(v5 + 784) = 0;
  *(_OWORD *)(v5 + 768) = 0;
  v13[16] = v5;
  v13[17] = 0;
  v16 = v5;
  v17 = v5;
  v18 = 0;
  v20[5] = a1;
  v13[0] = 1;
  v13[1] = 1;
  v13[32] = 0;
  v13[34] = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v20[6] = 1;
  v20[7] = 0;
  nullsub_1(v7, v6);
  v8 = sub_140001650(512, 128);
  if ( !v8 )
    sub_14196B2C1(128, 512);
  v9 = (volatile signed __int64 *)v8;
  sub_1419234B0(v8, v13, 512);
  v10 = _InterlockedIncrement64(v9);
  if ( (v10 < 0) ^ v11 | (v10 == 0) )
    BUG();
  return v9;
}
