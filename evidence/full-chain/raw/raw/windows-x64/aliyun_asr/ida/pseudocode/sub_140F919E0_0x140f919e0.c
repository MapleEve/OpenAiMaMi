// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140f919e0
// name: sub_140F919E0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F919E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // rdx
  char v9; // [rsp+20h] [rbp-60h] BYREF
  char v10; // [rsp+21h] [rbp-5Fh]
  __int128 v11; // [rsp+22h] [rbp-5Eh]
  __int128 v12; // [rsp+32h] [rbp-4Eh]
  __int128 v13; // [rsp+42h] [rbp-3Eh]
  __int128 v14; // [rsp+52h] [rbp-2Eh]
  _BYTE v15[22]; // [rsp+62h] [rbp-1Eh]
  _BYTE v16[2]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v17; // [rsp+7Ah] [rbp-6h]
  __int128 v18; // [rsp+8Ah] [rbp+Ah]
  __int128 v19; // [rsp+9Ah] [rbp+1Ah]
  __int128 v20; // [rsp+AAh] [rbp+2Ah]
  _BYTE v21[22]; // [rsp+BAh] [rbp+3Ah]
  __int64 *v22; // [rsp+D0h] [rbp+50h]
  __int64 v23; // [rsp+D8h] [rbp+58h]
  __int64 v24; // [rsp+E0h] [rbp+60h]

  v24 = -2;
  v4 = a2[1];
  v22 = a2;
  v5 = a2[2];
  v23 = v4;
  sub_1414464F0(v16, v4, v5);
  sub_141443110(&v9, v16);
  v6 = v10;
  if ( v9 == -1 )
  {
    *(_QWORD *)(a1 + 8) = 14;
    *(_BYTE *)(a1 + 16) = 2;
    *(_BYTE *)(a1 + 17) = v6;
    *(_QWORD *)a1 = -1;
    v7 = *v22;
    if ( !*v22 )
      return a1;
    goto LABEL_3;
  }
  *(_QWORD *)&v21[14] = *(_QWORD *)&v15[14];
  *(_OWORD *)v21 = *(_OWORD *)v15;
  v20 = v14;
  v19 = v13;
  v18 = v12;
  v17 = v11;
  v16[0] = v9;
  v16[1] = v10;
  sub_140F8FB50(a1, v16);
  v7 = *v22;
  if ( *v22 )
LABEL_3:
    sub_140001660(v23, v7, 1);
  return a1;
}