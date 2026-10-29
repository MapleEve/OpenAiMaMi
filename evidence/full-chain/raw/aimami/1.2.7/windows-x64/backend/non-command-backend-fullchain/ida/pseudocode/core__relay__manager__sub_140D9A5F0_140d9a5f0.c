// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d9a5f0 | name sub_140D9A5F0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D9A5F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  PVOID v7; // rcx
  char v8; // al
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp-20h]
  PVOID Address; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-Ch]
  __int64 v14; // [rsp+48h] [rbp-8h]

  v14 = -2;
  v2 = a1;
  v3 = *(_QWORD *)(a2 + 8);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 16), 1, 0) )
    sub_141937480((volatile void *)(v3 + 16));
  v4 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v5 = sub_141938160(a1);
    LOBYTE(v5) = v5 ^ 1;
    if ( !*(_BYTE *)(v3 + 17) )
      goto LABEL_5;
LABEL_11:
    v10 = v3 + 16;
    v11 = v5;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v10,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4B8E0);
  }
  v5 = 0;
  if ( *(_BYTE *)(v3 + 17) )
    goto LABEL_11;
LABEL_5:
  v13 = v5;
  Address = (PVOID)(v3 + 16);
  sub_140DCB2E0(v2, v3 + 24);
  if ( !(_BYTE)v13 && 2 * *v4 && !(unsigned __int8)sub_141938160(v6) )
    *(_BYTE *)(v3 + 17) = 1;
  v7 = Address;
  v8 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v8 == 2 )
    WakeByAddressSingle(v7);
  return v2;
}
