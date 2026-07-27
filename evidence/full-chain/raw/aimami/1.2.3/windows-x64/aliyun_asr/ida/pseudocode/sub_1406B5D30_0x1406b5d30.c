// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406b5d30
// name: sub_1406B5D30
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_1406B5D30(__int64 a1)
{
  SOCKET v2; // rax
  volatile signed __int64 **v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  char v11; // al
  char *v12; // rdi
  char v13; // al
  int v14; // eax
  SOCKET v16; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 **v17; // [rsp+38h] [rbp-28h]
  SOCKET v18; // [rsp+40h] [rbp-20h] BYREF
  SOCKET s; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+54h] [rbp-Ch]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v21 = -2;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(volatile signed __int64 ***)(a1 + 32);
  *(_QWORD *)(a1 + 24) = -1;
  if ( v2 != -1 )
  {
    v16 = v2;
    v17 = v3;
    v4 = sub_1412F0FD0(a1);
    s = sub_1413124F0(&v16, v4);
    v18 = s;
    LOBYTE(v6) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 32), 1, 0) )
      sub_1416C15B0((volatile void *)(v4 + 32));
    v7 = off_141EC90B8;
    if ( 2 * *off_141EC90B8 )
    {
      v14 = sub_1416C2250(v6, v5);
      LOBYTE(v14) = v14 ^ 1;
      v20 = v14;
    }
    else
    {
      v20 = 0;
    }
    if ( (unsigned __int8)sub_1413030C0(v4 + 24, v4 + 40, a1 + 16) )
    {
      v10 = (char *)(v4 + 32);
      if ( !(_BYTE)v20 && 2 * *v7 && !(unsigned __int8)sub_1416C2250(v9, v8) )
        *(_BYTE *)(v4 + 33) = 1;
      v11 = *v10;
      *v10 = 0;
      if ( v11 == 2 )
        WakeByAddressSingle((PVOID)(v4 + 32));
      sub_1413074A0(v4);
    }
    else
    {
      v12 = (char *)(v4 + 32);
      if ( !(_BYTE)v20 && 2 * *v7 && !(unsigned __int8)sub_1416C2250(v9, v8) )
        *(_BYTE *)(v4 + 33) = 1;
      v13 = *v12;
      *v12 = 0;
      if ( v13 == 2 )
        WakeByAddressSingle((PVOID)(v4 + 32));
    }
    v18 = s;
    if ( s )
      sub_140018650(&v18);
    s = v16;
    sub_14052CCE0(v17);
    LODWORD(v2) = closesocket(s);
  }
  return v2;
}