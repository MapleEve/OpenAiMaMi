// module: codexmate_lib/commands/relay
// addr: 0x140437160
// name: sub_140437160
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/commands/relay
__int64 __fastcall sub_140437160(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v6; // xmm0
  int v7; // eax
  int v8; // ecx
  _BYTE v10[376]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v11[360]; // [rsp+1C8h] [rbp+148h] BYREF
  _OWORD v12[3]; // [rsp+330h] [rbp+2B0h] BYREF
  _BYTE v13[48]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v14; // [rsp+390h] [rbp+310h]
  __int64 v15; // [rsp+398h] [rbp+318h] BYREF
  __m256i v16; // [rsp+3A0h] [rbp+320h]
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  _BYTE v18[31]; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v19; // [rsp+3E8h] [rbp+368h]
  char v20; // [rsp+3F6h] [rbp+376h] BYREF
  char v21; // [rsp+3F7h] [rbp+377h]
  __int64 v22; // [rsp+3F8h] [rbp+378h]

  v22 = -2;
  sub_141684120(v11, a1, 360);
  v19 = a1;
  v17 = *(_QWORD *)(a1 + 384);
  v14 = v17;
  if ( *(_QWORD *)a2 == -1 )
  {
    v6 = *(_OWORD *)(a2 + 8);
    *(_OWORD *)&v16.m256i_u64[2] = *(_OWORD *)(a2 + 24);
    *(_OWORD *)v16.m256i_i8 = v6;
    v15 = 1;
  }
  else
  {
    sub_141684120(v10, a2, 376);
    v21 = 1;
    sub_140B0C810(v13, v10);
    if ( *(_QWORD *)v13 == -1 )
    {
      v16 = *(__m256i *)&v13[8];
      v15 = 0;
    }
    else
    {
      v12[2] = *(_OWORD *)&v13[32];
      v12[1] = *(_OWORD *)&v13[16];
      v12[0] = *(_OWORD *)v13;
      *(_QWORD *)v18 = 0;
      *(_QWORD *)&v18[8] = 1;
      *(_QWORD *)&v18[16] = 0;
      v16.m256i_i64[1] = 1610612768;
      v15 = (__int64)v18;
      v16.m256i_i64[0] = (__int64)&off_14175E8C8;
      if ( (unsigned __int8)sub_141230630(v12, &v15, v4) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_2,
          55,
          (unsigned int)&v20,
          (unsigned int)&unk_141758598,
          (__int64)&off_14175E980);
      v5 = *(_QWORD *)&v18[16];
      *(_OWORD *)&v18[7] = *(_OWORD *)v18;
      *(_QWORD *)&v18[23] = v5;
      v21 = 1;
      sub_14043E150(v12);
      v16.m256i_i8[0] = 3;
      *(_OWORD *)&v16.m256i_i8[1] = *(_OWORD *)v18;
      *(_OWORD *)&v16.m256i_u64[2] = *(_OWORD *)&v18[15];
      v15 = 1;
    }
  }
  v7 = *(_DWORD *)(v19 + 392);
  v8 = *(_DWORD *)(v19 + 396);
  v21 = 0;
  return sub_14047E370((unsigned int)v11, v17, (unsigned int)&v15, (int)v19 + 360, v7, v8);
}