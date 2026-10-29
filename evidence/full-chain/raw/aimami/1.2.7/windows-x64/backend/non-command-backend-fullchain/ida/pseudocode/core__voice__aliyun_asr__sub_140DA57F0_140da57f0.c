// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140da57f0 | name sub_140DA57F0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DA57F0(__int64 a1)
{
  _BYTE *v1; // rbx
  __int64 *v2; // rsi
  int v3; // edx
  __int64 result; // rax
  char v5; // cl
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // cl
  _BYTE *v13; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+38h] [rbp-18h]
  _BYTE *v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+4Ch] [rbp-4h]
  __int64 v17; // [rsp+50h] [rbp+0h]

  v17 = -2;
  v1 = (_BYTE *)(a1 + 80);
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 80), 1, 0) )
  {
    v6 = a1;
    sub_141937480((volatile void *)(a1 + 80));
    a1 = v6;
  }
  v2 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v3 = 0;
    if ( !*(_BYTE *)(a1 + 81) )
      goto LABEL_5;
LABEL_11:
    v13 = v1;
    v14 = v3;
    sub_141939040(
      (unsigned int)aEventRxMutexPo,
      23,
      (unsigned int)&v13,
      (unsigned int)&off_141A49928,
      (__int64)&off_141A4D520);
  }
  v7 = a1;
  v8 = sub_141938160(a1);
  a1 = v7;
  v3 = v8;
  LOBYTE(v3) = v8 ^ 1;
  if ( *(_BYTE *)(v7 + 81) )
    goto LABEL_11;
LABEL_5:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0;
  if ( !result )
  {
    v16 = v3;
    v15 = v1;
    sub_141938FE0(aSubscribeCanOn, 47, &off_141A4D568);
  }
  if ( !(_BYTE)v3 )
  {
    if ( 2 * *v2 )
    {
      v10 = a1;
      v11 = result;
      v12 = sub_141938160(a1);
      result = v11;
      if ( !v12 )
        *(_BYTE *)(v10 + 81) = 1;
    }
  }
  v5 = *v1;
  *v1 = 0;
  if ( v5 == 2 )
  {
    v9 = result;
    WakeByAddressSingle(v1);
    return v9;
  }
  return result;
}
