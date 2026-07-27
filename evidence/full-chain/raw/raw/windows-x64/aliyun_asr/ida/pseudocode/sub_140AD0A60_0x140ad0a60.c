// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140ad0a60
// name: sub_140AD0A60
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140AD0A60(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 *v3; // rsi
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // cl
  _BYTE *v15; // [rsp+30h] [rbp-20h] BYREF
  char v16; // [rsp+38h] [rbp-18h]
  _BYTE *v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+4Ch] [rbp-4h]
  __int64 v19; // [rsp+50h] [rbp+0h]

  v19 = -2;
  v2 = (_BYTE *)(a1 + 80);
  LOBYTE(a2) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 80), 1, 0) )
  {
    v8 = a1;
    sub_1416C15B0((volatile void *)(a1 + 80));
    a1 = v8;
  }
  v3 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
  {
    v4 = 0;
    if ( !*(_BYTE *)(a1 + 81) )
      goto LABEL_5;
LABEL_11:
    v15 = v2;
    v16 = v4;
    sub_1416C3060(
      (unsigned int)aEventRxMutexPo,
      23,
      (unsigned int)&v15,
      (unsigned int)&off_1417AE9A0,
      (__int64)&off_1417AF0B0);
  }
  v9 = a1;
  v10 = sub_1416C2250(a1, a2);
  a1 = v9;
  v4 = v10;
  LOBYTE(v4) = v10 ^ 1;
  if ( *(_BYTE *)(v9 + 81) )
    goto LABEL_11;
LABEL_5:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0;
  if ( !result )
  {
    v18 = v4;
    v17 = v2;
    sub_1416C3000(aSubscribeCanOn, 47, &off_1417AF0F8);
  }
  if ( !(_BYTE)v4 )
  {
    v6 = 2 * *v3;
    if ( v6 )
    {
      v12 = a1;
      v13 = result;
      v14 = sub_1416C2250(a1, v6);
      result = v13;
      if ( !v14 )
        *(_BYTE *)(v12 + 81) = 1;
    }
  }
  v7 = *v2;
  *v2 = 0;
  if ( v7 == 2 )
  {
    v11 = result;
    WakeByAddressSingle(v2);
    return v11;
  }
  return result;
}