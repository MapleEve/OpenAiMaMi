// module: codexmate_lib/commands/system
// addr: 0x14089b320
// name: sub_14089B320
// win 1.2.1 | module src/commands/system.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14089B320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int64 *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r8
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v20; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v21)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  _UNKNOWN **v22; // [rsp+90h] [rbp+10h]
  __int64 v23; // [rsp+98h] [rbp+18h]
  volatile signed __int64 *v24; // [rsp+A0h] [rbp+20h]
  __int64 v25; // [rsp+A8h] [rbp+28h]
  signed __int64 v26; // [rsp+B0h] [rbp+30h]
  int v27; // [rsp+B8h] [rbp+38h]
  _BYTE v28[508]; // [rsp+BCh] [rbp+3Ch] BYREF
  __int64 v29; // [rsp+2B8h] [rbp+238h]
  volatile signed __int64 *v30; // [rsp+2C8h] [rbp+248h]
  __int64 v31; // [rsp+2D0h] [rbp+250h]
  _QWORD v32[29]; // [rsp+308h] [rbp+288h] BYREF

  v32[20] = &v20;
  v32[21] = -2;
  v8 = off_141EC8EE0;
  do
    v9 = _InterlockedExchangeAdd64(v8, 1u);
  while ( !v9 );
  v10 = *(_QWORD *)(a2 + 8);
  v11 = 672;
  if ( *(_BYTE *)a2 )
    v11 = 480;
  v12 = *(volatile signed __int64 **)(v10 + v11 + 16);
  if ( v12 )
  {
    v4 = *(_QWORD *)(v10 + v11 + 24);
    if ( _InterlockedIncrement64(v12) <= 0 || _InterlockedIncrement64(v12) <= 0 )
      BUG();
  }
  sub_141684120((char *)v32 + 4, a3, 152);
  v20 = 204;
  v21 = nullptr;
  v22 = &off_1417BCB78;
  v23 = 0;
  v24 = v12;
  v25 = v4;
  v26 = v9;
  v27 = 0;
  sub_141684120(v28, v32, 156);
  *(_OWORD *)&v28[492] = 0;
  v29 = 0;
  v30 = v12;
  v31 = v4;
  nullsub_1(v13);
  v14 = sub_140001650(640, 128);
  if ( !v14 )
    sub_1416C2D31(128, 640);
  v15 = v14;
  sub_141684120(v14, &v20, 640);
  LOBYTE(v16) = 1;
  v17 = sub_1412EE330(a1, v15, v16, a2);
  if ( ((v18 != 0) & v17) != 0 )
  {
    v32[0] = v18;
    v20 = (__int64)v32;
    v21 = sub_141490720;
    sub_1416C32C0(&unk_14179CC00, &v20, a4);
  }
  return v15;
}