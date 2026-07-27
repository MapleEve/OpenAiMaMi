// module: codexmate_lib/core/relay/manager
// addr: 0x1403b7e80
// name: lock
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall lock(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  volatile void *v6; // r14
  __int64 *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // rcx
  char v12; // al
  __int128 v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h]
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  PVOID Address; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+74h] [rbp-Ch]
  __int64 v21; // [rsp+78h] [rbp-8h]

  v21 = -2;
  v4 = a1;
  v16[0] = a3;
  v16[1] = a4;
  v5 = *a2;
  v6 = (volatile void *)(*a2 + 16LL);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v6, 1, 0) )
    sub_1416C15B0(v6);
  v7 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
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
  v8 = sub_1416C2250(a1, a2);
  LOBYTE(v8) = v8 ^ 1;
  if ( !*(_BYTE *)(v5 + 17) )
    goto LABEL_11;
LABEL_5:
  v20 = v8;
  Address = (PVOID)v6;
  *(_QWORD *)&v17 = v16;
  *((_QWORD *)&v17 + 1) = sub_14041F680;
  sub_14149C0F0(&v14, &unk_14174CCE8, &v17);
  v17 = v14;
  v18 = v15;
  if ( !(_BYTE)v20 && 2 * *v7 && !(unsigned __int8)sub_1416C2250(v10, v9) )
    *(_BYTE *)(v5 + 17) = 1;
  v11 = Address;
  v12 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v12 == 2 )
    WakeByAddressSingle(v11);
  *(_QWORD *)v4 = 10;
  *(_OWORD *)(v4 + 8) = v17;
  *(_QWORD *)(v4 + 24) = v18;
  return v4;
}