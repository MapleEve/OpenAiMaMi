// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dac840 | name sub_140DAC840
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140DAC840(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  __int64 *v12; // rdi
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // ecx
  _BYTE v17[388]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v18[3]; // [rsp+1ACh] [rbp+12Ch] BYREF
  __int64 v19; // [rsp+1B8h] [rbp+138h]
  int v20; // [rsp+1C4h] [rbp+144h]
  __int64 v21; // [rsp+1C8h] [rbp+148h]

  v21 = -2;
  v3 = a1;
  v4 = *a2;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(*a2 + 16), 1, 0) )
    sub_141937480((volatile void *)(v4 + 16));
  v5 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v6 = sub_141938160(a1);
    LOBYTE(v6) = v6 ^ 1;
    v7 = *(unsigned __int8 *)(v4 + 17);
    if ( (_BYTE)v7 )
    {
LABEL_5:
      *v3 = 0;
      v3[1] = 8;
      v3[2] = 0;
      if ( !(_BYTE)v6 && 2 * *v5 && !(unsigned __int8)sub_141938160(v7) )
        *(_BYTE *)(v4 + 17) = 1;
      v8 = *(_BYTE *)(v4 + 16);
      *(_BYTE *)(v4 + 16) = 0;
      if ( v8 == 2 )
        WakeByAddressSingle((PVOID)(v4 + 16));
      return v3;
    }
  }
  else
  {
    v6 = 0;
    v7 = *(unsigned __int8 *)(v4 + 17);
    if ( (_BYTE)v7 )
      goto LABEL_5;
  }
  v20 = v6;
  v19 = v4;
  sub_140DCB2E0(v17, v4 + 24);
  if ( !(_BYTE)v20 && 2 * *v5 && !(unsigned __int8)sub_141938160(v9) )
    *(_BYTE *)(v19 + 17) = 1;
  v10 = v19;
  v11 = *(_BYTE *)(v19 + 16);
  *(_BYTE *)(v19 + 16) = 0;
  if ( v11 == 2 )
    WakeByAddressSingle((PVOID)(v10 + 16));
  sub_141406CE0(v18);
  v12 = a2 + 1;
  v13 = (v18[0] >> 13) - 1;
  v14 = 0;
  if ( v18[0] >> 13 <= 0 )
  {
    v15 = (1 - (v18[0] >> 13)) / 0x190u + 1;
    v13 += 400 * v15;
    v14 = -146097 * v15;
  }
  sub_140DBCA10(
    v3,
    v17,
    v12,
    1000
  * (v18[1] + 86400LL * (((v13 / 100) >> 2) + ((1461 * v13) >> 2) + v14 + ((v18[0] >> 4) & 0x1FF) - v13 / 100 - 719163))
  + v18[2] / 0xF4240uLL);
  sub_1407ADB20(v17);
  return v3;
}
