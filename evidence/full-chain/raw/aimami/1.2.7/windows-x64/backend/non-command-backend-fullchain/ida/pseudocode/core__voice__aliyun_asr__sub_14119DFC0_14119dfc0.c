// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14119dfc0 | name sub_14119DFC0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14119DFC0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rdx
  char v8; // [rsp+20h] [rbp-60h] BYREF
  char v9; // [rsp+21h] [rbp-5Fh]
  __int128 v10; // [rsp+22h] [rbp-5Eh]
  __int128 v11; // [rsp+32h] [rbp-4Eh]
  __int128 v12; // [rsp+42h] [rbp-3Eh]
  __int128 v13; // [rsp+52h] [rbp-2Eh]
  _BYTE v14[22]; // [rsp+62h] [rbp-1Eh]
  _BYTE v15[2]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v16; // [rsp+7Ah] [rbp-6h]
  __int128 v17; // [rsp+8Ah] [rbp+Ah]
  __int128 v18; // [rsp+9Ah] [rbp+1Ah]
  __int128 v19; // [rsp+AAh] [rbp+2Ah]
  _BYTE v20[22]; // [rsp+BAh] [rbp+3Ah]
  __int64 *v21; // [rsp+D0h] [rbp+50h]
  __int64 v22; // [rsp+D8h] [rbp+58h]
  __int64 v23; // [rsp+E0h] [rbp+60h]

  v23 = -2;
  v4 = a2[1];
  v21 = a2;
  v22 = v4;
  sub_141653430(v15);
  sub_14164D250(&v8, v15);
  v5 = v9;
  if ( v8 == -1 )
  {
    *(_QWORD *)(a1 + 8) = 14;
    *(_BYTE *)(a1 + 16) = 2;
    *(_BYTE *)(a1 + 17) = v5;
    *(_QWORD *)a1 = -1;
    v6 = *v21;
    if ( !*v21 )
      return a1;
    goto LABEL_3;
  }
  *(_QWORD *)&v20[14] = *(_QWORD *)&v14[14];
  *(_OWORD *)v20 = *(_OWORD *)v14;
  v19 = v13;
  v18 = v12;
  v17 = v11;
  v16 = v10;
  v15[0] = v8;
  v15[1] = v9;
  sub_14119D310(a1, v15);
  v6 = *v21;
  if ( *v21 )
LABEL_3:
    sub_140001660(v22, v6, 1);
  return a1;
}
