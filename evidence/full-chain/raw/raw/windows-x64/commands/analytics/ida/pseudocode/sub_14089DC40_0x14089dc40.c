// module: codexmate_lib/commands/analytics
// addr: 0x14089dc40
// name: sub_14089DC40
// win 1.2.1 | module src/commands/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14089DC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v7; // rax
  signed __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  volatile signed __int64 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  _BYTE v20[52]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+74h] [rbp-Ch]
  __int64 v22; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  _UNKNOWN **v24; // [rsp+90h] [rbp+10h]
  __int64 v25; // [rsp+98h] [rbp+18h]
  volatile signed __int64 *v26; // [rsp+A0h] [rbp+20h]
  __int64 v27; // [rsp+A8h] [rbp+28h]
  signed __int64 v28; // [rsp+B0h] [rbp+30h]
  int v29; // [rsp+B8h] [rbp+38h]
  __int128 v30; // [rsp+BCh] [rbp+3Ch]
  __int128 v31; // [rsp+CCh] [rbp+4Ch]
  _BYTE v32[20]; // [rsp+DCh] [rbp+5Ch]
  __int64 v33; // [rsp+F0h] [rbp+70h]
  __int128 v34; // [rsp+120h] [rbp+A0h]
  __int64 v35; // [rsp+130h] [rbp+B0h]
  volatile signed __int64 *v36; // [rsp+140h] [rbp+C0h]
  __int64 v37; // [rsp+148h] [rbp+C8h]
  __int64 *v38; // [rsp+1B8h] [rbp+138h]
  __int64 v39; // [rsp+1C0h] [rbp+140h]

  v38 = &v22;
  v39 = -2;
  v7 = off_141EC8EE0;
  do
    v8 = _InterlockedExchangeAdd64(v7, 1u);
  while ( !v8 );
  v9 = *(_QWORD *)(a2 + 8);
  v10 = 672;
  if ( *(_BYTE *)a2 )
    v10 = 480;
  v11 = *(volatile signed __int64 **)(v9 + v10 + 16);
  if ( v11 )
  {
    v9 = *(_QWORD *)(v9 + v10 + 24);
    if ( _InterlockedIncrement64(v11) <= 0 || _InterlockedIncrement64(v11) <= 0 )
      BUG();
  }
  v12 = *(_OWORD *)(a3 + 16);
  v13 = *(_OWORD *)(a3 + 32);
  *(_OWORD *)&v20[4] = *(_OWORD *)a3;
  *(_OWORD *)&v20[20] = v12;
  *(_OWORD *)&v20[36] = v13;
  v21 = *(_QWORD *)(a3 + 48);
  v22 = 204;
  v23 = nullptr;
  v24 = &off_1417BCFD8;
  v25 = 0;
  v26 = v11;
  v27 = v9;
  v28 = v8;
  v29 = 0;
  v30 = *(_OWORD *)v20;
  v31 = *(_OWORD *)&v20[16];
  *(_OWORD *)v32 = *(_OWORD *)&v20[32];
  *(_QWORD *)&v32[12] = *((_QWORD *)&v13 + 1);
  v33 = v21;
  v34 = 0;
  v35 = 0;
  v36 = v11;
  v37 = v9;
  nullsub_1(v21);
  v14 = sub_140001650(256, 128);
  if ( !v14 )
    sub_1416C2D31(128, 256);
  v15 = v14;
  sub_141684120(v14, &v22, 256);
  LOBYTE(v16) = 1;
  v17 = sub_1412EE330(a1, v15, v16, a2);
  if ( ((v18 != 0) & v17) != 0 )
  {
    *(_QWORD *)v20 = v18;
    v22 = (__int64)v20;
    v23 = sub_141490720;
    sub_1416C32C0(&unk_14179CC00, &v22, a4);
  }
  return v15;
}