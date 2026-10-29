// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140da5500 | name sub_140DA5500
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DA5500(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  volatile void *v6; // r14
  __int64 *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  PVOID v10; // rcx
  char v11; // al
  __int128 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  _QWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  PVOID Address; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+74h] [rbp-Ch]
  __int64 v20; // [rsp+78h] [rbp-8h]

  v20 = -2;
  v4 = a1;
  v15[0] = a3;
  v15[1] = a4;
  v5 = *a2;
  v6 = (volatile void *)(*a2 + 16LL);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v6, 1, 0) )
    sub_141937480(v6);
  v7 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v8 = 0;
    if ( *(_BYTE *)(v5 + 17) )
      goto LABEL_5;
LABEL_11:
    *(_QWORD *)(v4 + 8) = v6;
    *(_BYTE *)(v4 + 16) = v8;
    *(_QWORD *)v4 = -1;
    return v4;
  }
  v8 = sub_141938160(a1);
  LOBYTE(v8) = v8 ^ 1;
  if ( !*(_BYTE *)(v5 + 17) )
    goto LABEL_11;
LABEL_5:
  v19 = v8;
  Address = (PVOID)v6;
  *(_QWORD *)&v16 = v15;
  *((_QWORD *)&v16 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v13, &unk_141A47C75, &v16);
  v16 = v13;
  v17 = v14;
  if ( !(_BYTE)v19 && 2 * *v7 && !(unsigned __int8)sub_141938160(v9) )
    *(_BYTE *)(v5 + 17) = 1;
  v10 = Address;
  v11 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v11 == 2 )
    WakeByAddressSingle(v10);
  *(_QWORD *)v4 = 10;
  *(_OWORD *)(v4 + 8) = v16;
  *(_QWORD *)(v4 + 24) = v17;
  return v4;
}
