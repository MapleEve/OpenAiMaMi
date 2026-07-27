// module: codexmate_lib/commands/relay
// addr: 0x140af04d0
// name: sub_140AF04D0
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/commands/relay
__int64 __fastcall sub_140AF04D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v10[31]; // [rsp+49h] [rbp-37h]
  _QWORD v11[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v12[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+40h]
  char v15; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v16; // [rsp+D0h] [rbp+50h]

  v16 = -2;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  if ( (sub_1401B7330(a2) & 1) == 0 )
    v7 = sub_140B873A0(v7, aRelayide, 8, &off_1417ADC00, 1);
  if ( v7 )
  {
    v12[1] = v3;
    v12[2] = v4;
    v12[3] = v5;
    v12[4] = v6;
    v12[5] = v7;
    v12[0] = 0x8000000000000008uLL;
    *(_QWORD *)&v13 = 0;
    *((_QWORD *)&v13 + 1) = 1;
    v14 = 0;
    v11[2] = 1610612768;
    v11[0] = &v13;
    v11[1] = &off_1417B1268;
    if ( (unsigned __int8)sub_141230630(v12, v11, v8) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v15,
        (unsigned int)&unk_1417AEA70,
        (__int64)&off_1417B1320);
    *(_OWORD *)&v10[7] = v13;
    *(_QWORD *)&v10[23] = v14;
    sub_140A8E080(v12);
    *(_BYTE *)a1 = 3;
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v10[15];
  }
  else
  {
    *(_BYTE *)a1 = -1;
  }
  return a1;
}