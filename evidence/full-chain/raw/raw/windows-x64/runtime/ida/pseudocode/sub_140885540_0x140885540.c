// module: codexmate_lib/core/voice/runtime
// addr: 0x140885540
// name: sub_140885540
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140885540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  char *v11; // r13
  __int64 v12; // rcx
  __int64 *v13; // r12
  int v14; // eax
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  PVOID v19; // rcx
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax
  char v24; // al
  _QWORD v25[4]; // [rsp+28h] [rbp-38h] BYREF
  PVOID Address; // [rsp+48h] [rbp-18h]
  _QWORD *v27; // [rsp+50h] [rbp-10h]
  int v28; // [rsp+58h] [rbp-8h]
  char v29; // [rsp+5Fh] [rbp-1h]
  __int64 v30; // [rsp+60h] [rbp+0h]

  v30 = -2;
  v27 = a5;
  v29 = 1;
  v10 = sub_1400640A0(a1);
  v11 = (char *)(v10 + 32);
  LOBYTE(v12) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 32), 1, 0) )
  {
    v29 = 1;
    sub_1416C15B0(v11);
  }
  v13 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v29 = 1;
    v14 = sub_1416C2250(v12, v9);
    LOBYTE(v14) = v14 ^ 1;
    v15 = *(unsigned __int8 *)(v10 + 33);
    if ( (_BYTE)v15 )
      goto LABEL_5;
  }
  else
  {
    v14 = 0;
    v15 = *(unsigned __int8 *)(v10 + 33);
    if ( (_BYTE)v15 )
    {
LABEL_5:
      if ( !(_BYTE)v14 )
      {
        if ( 2 * *v13 )
        {
          v29 = 1;
          if ( !(unsigned __int8)sub_1416C2250(v15, v9) )
            *(_BYTE *)(v10 + 33) = 1;
        }
      }
      v16 = *v11;
      *v11 = 0;
      if ( v16 != 2 )
        goto LABEL_32;
      goto LABEL_31;
    }
  }
  if ( !a2
    || *(_QWORD *)(v10 + 840) != a2
    || (v15 = *(unsigned __int8 *)(v10 + 867), LOBYTE(v15) = v15 - 1, (unsigned __int8)v15 > 2u)
    || a3 == 1 && (*(_QWORD *)(v10 + 832) != a4 || (v15 = qword_141EC9338, qword_141EC9338 != a4)) )
  {
    if ( !(_BYTE)v14 )
    {
      if ( 2 * *v13 )
      {
        v29 = 1;
        if ( !(unsigned __int8)sub_1416C2250(v15, v9) )
          *(_BYTE *)(v10 + 33) = 1;
      }
    }
    v24 = *v11;
    *v11 = 0;
    if ( v24 != 2 )
      goto LABEL_32;
LABEL_31:
    v29 = 1;
    WakeByAddressSingle(v11);
LABEL_32:
    result = (__int64)v27;
    if ( *v27 )
      return sub_140001660(v27[1], *v27, 1);
    return result;
  }
  v28 = v14;
  Address = (PVOID)(v10 + 32);
  *(_QWORD *)(v10 + 832) = _InterlockedIncrement64(&qword_141EC9338);
  *(_QWORD *)(v10 + 840) = 0;
  *(_BYTE *)(v10 + 867) = 5;
  v17 = *(_QWORD *)(v10 + 672);
  if ( v17 != -1 && v17 )
    sub_140001660(*(_QWORD *)(v10 + 680), v17, 1);
  v18 = v27;
  *(_QWORD *)(v10 + 688) = v27[2];
  *(_OWORD *)(v10 + 672) = *v18;
  if ( *(_DWORD *)(v10 + 80) <= 0xFFFFFFFD )
  {
    v25[3] = v10 + 80;
    sub_140264080((__int64 *)(v10 + 80));
  }
  *(_QWORD *)(v10 + 80) = -2;
  *(_DWORD *)(v10 + 728) = -1;
  if ( !(_BYTE)v28 )
  {
    if ( 2 * *v13 )
    {
      v29 = 0;
      if ( !(unsigned __int8)sub_1416C2250(v18, v17) )
        *(_BYTE *)(v10 + 33) = 1;
    }
  }
  v19 = Address;
  v20 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v20 == 2 )
  {
    v29 = 0;
    WakeByAddressSingle(v19);
  }
  sub_140AED970(a1);
  sub_14025D570(a1, 0);
  sub_1401B91A0(v22, v21);
  v29 = 0;
  result = sub_140873770(v25, a1);
  if ( v25[0] != -1 && v25[0] )
    return sub_140001660(v25[1], v25[0], 1);
  return result;
}