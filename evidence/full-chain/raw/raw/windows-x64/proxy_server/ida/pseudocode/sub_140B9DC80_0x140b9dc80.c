// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140b9dc80
// name: sub_140B9DC80
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/core/relay/proxy_server
_QWORD *__fastcall sub_140B9DC80(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rbx
  char v11; // al
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  char v18; // [rsp+30h] [rbp-20h]
  PVOID Address; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+44h] [rbp-Ch]
  __int64 v21; // [rsp+48h] [rbp-8h]

  v21 = -2;
  v3 = a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)a2, 1, 0) )
  {
    v13 = a3;
    v14 = a2;
    sub_1416C15B0((volatile void *)a2);
    a2 = v14;
    a3 = v13;
  }
  v4 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v15 = a3;
    v16 = a2;
    v5 = sub_1416C2250(a1, a2);
    a2 = v16;
    a3 = v15;
    LOBYTE(v5) = v5 ^ 1;
    if ( !*(_BYTE *)(v16 + 1) )
      goto LABEL_5;
LABEL_11:
    v17 = a2;
    v18 = v5;
    sub_1416C3060((unsigned int)aCalledResultUn_7, 43, (unsigned int)&v17, (unsigned int)&off_1417B5390, a3);
  }
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
    goto LABEL_11;
LABEL_5:
  v20 = v5;
  v6 = *(_QWORD *)(a2 + 8);
  Address = (PVOID)a2;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 40LL))(v6);
  *v3 = 0;
  v3[1] = v7;
  v3[2] = v8;
  v10 = (char *)Address;
  if ( !(_BYTE)v20 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(v9, v8) )
    *((_BYTE *)Address + 1) = 1;
  v11 = *v10;
  *v10 = 0;
  if ( v11 == 2 )
    WakeByAddressSingle(v10);
  return v3;
}