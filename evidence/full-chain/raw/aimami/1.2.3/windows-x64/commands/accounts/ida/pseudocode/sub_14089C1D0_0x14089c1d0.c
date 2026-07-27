// module: codexmate_lib/commands/accounts
// addr: 0x14089c1d0
// name: sub_14089C1D0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14089C1D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _QWORD v20[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+80h] [rbp+0h] BYREF
  __int64 v22; // [rsp+100h] [rbp+80h] BYREF
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+108h] [rbp+88h]
  _UNKNOWN **v24; // [rsp+110h] [rbp+90h]
  __int64 v25; // [rsp+118h] [rbp+98h]
  volatile signed __int64 *v26; // [rsp+120h] [rbp+A0h]
  __int64 v27; // [rsp+128h] [rbp+A8h]
  signed __int64 v28; // [rsp+130h] [rbp+B0h]
  int v29; // [rsp+138h] [rbp+B8h]
  _BYTE v30[940]; // [rsp+13Ch] [rbp+BCh] BYREF
  __int64 v31; // [rsp+4E8h] [rbp+468h]
  volatile signed __int64 *v32; // [rsp+4F8h] [rbp+478h]
  __int64 v33; // [rsp+500h] [rbp+480h]
  __int64 *v34; // [rsp+5A8h] [rbp+528h]
  __int64 v35; // [rsp+5B0h] [rbp+530h]

  v34 = &v21;
  v35 = -2;
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
  sub_141684120((char *)v20 + 4, a3, 184);
  v22 = 204;
  v23 = nullptr;
  v24 = &off_1417BCD08;
  v25 = 0;
  v26 = v12;
  v27 = v4;
  v28 = v9;
  v29 = 0;
  sub_141684120(v30, v20, 188);
  *(_OWORD *)&v30[924] = 0;
  v31 = 0;
  v32 = v12;
  v33 = v4;
  nullsub_1(v13);
  v14 = sub_140001650(1152, 128);
  if ( !v14 )
    sub_1416C2D31(128, 1152);
  v15 = v14;
  sub_141684120(v14, &v22, 1152);
  LOBYTE(v16) = 1;
  v17 = sub_1412EE330(a1, v15, v16, a2);
  if ( ((v18 != 0) & v17) != 0 )
  {
    v20[0] = v18;
    v22 = (__int64)v20;
    v23 = sub_141490720;
    sub_1416C32C0(&unk_14179CC00, &v22, a4);
  }
  return v15;
}