// module: codexmate_lib/commands/system
// addr: 0x141471f80
// name: sub_141471F80
// win 1.2.1 | module src/commands/system.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141471F80(unsigned int *a1, char *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rax
  unsigned int v7; // ebx
  char v8; // dl
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  DWORD v11; // r9d
  unsigned __int64 v12; // rdx
  bool v13; // cf
  unsigned __int64 v14; // rax
  _BOOL8 v15; // r8
  unsigned __int64 v16; // rax
  unsigned int *v18; // r14
  unsigned int CompareAddress[11]; // [rsp+24h] [rbp+4h] BYREF

  v5 = a3;
  v7 = *a1;
  v8 = *a2;
  *a2 = 0;
  if ( v8 == 2 )
  {
    v18 = a1;
    WakeByAddressSingle(a2);
    v5 = a3;
    a1 = v18;
  }
  CompareAddress[0] = v7;
  v10 = v5;
  v9 = 1000 * v5;
  v11 = -1;
  if ( is_mul_ok(0x3E8u, v10) )
  {
    v12 = a4 / 0xF4240uLL;
    v13 = __CFADD__(v12, v9);
    v14 = v12 + v9;
    if ( !v13 )
    {
      v15 = a4 != 1000000 * (_DWORD)v12;
      v13 = __CFADD__(v15, v14);
      v16 = v15 + v14;
      if ( !v13 )
      {
        v11 = -1;
        if ( v16 < 0xFFFFFFFF )
          v11 = v16;
      }
    }
  }
  LOBYTE(v7) = 1;
  if ( !WaitOnAddress(a1, CompareAddress, 4u, v11) )
    LOBYTE(v7) = GetLastError() != 1460;
  if ( _InterlockedCompareExchange8(a2, 1, 0) )
    sub_1416C15B0(a2);
  return v7;
}