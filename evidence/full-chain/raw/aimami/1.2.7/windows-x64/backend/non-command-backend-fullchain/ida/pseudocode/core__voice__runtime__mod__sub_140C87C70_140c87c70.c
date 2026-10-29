// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c87c70 | name sub_140C87C70
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C87C70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdi
  char *v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  PVOID v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 result; // rax
  char v22; // al
  _QWORD v23[4]; // [rsp+28h] [rbp-38h] BYREF
  PVOID Address; // [rsp+48h] [rbp-18h]
  _QWORD *v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+58h] [rbp-8h]
  char v27; // [rsp+5Fh] [rbp-1h]
  __int64 v28; // [rsp+60h] [rbp+0h]

  v28 = -2;
  v25 = a5;
  v27 = 1;
  v9 = sub_14054A5A0(a1);
  v10 = (char *)(v9 + 32);
  LOBYTE(v11) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 32), 1, 0) )
  {
    v27 = 1;
    sub_141937480(v10);
  }
  v12 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v27 = 1;
    v13 = sub_141938160(v11);
    LOBYTE(v13) = v13 ^ 1;
    v14 = *(unsigned __int8 *)(v9 + 33);
    if ( (_BYTE)v14 )
      goto LABEL_5;
  }
  else
  {
    v13 = 0;
    v14 = *(unsigned __int8 *)(v9 + 33);
    if ( (_BYTE)v14 )
    {
LABEL_5:
      if ( !(_BYTE)v13 )
      {
        if ( 2 * *v12 )
        {
          v27 = 1;
          if ( !(unsigned __int8)sub_141938160(v14) )
            *(_BYTE *)(v9 + 33) = 1;
        }
      }
      v15 = *v10;
      *v10 = 0;
      if ( v15 != 2 )
        goto LABEL_32;
      goto LABEL_31;
    }
  }
  if ( !a2
    || *(_QWORD *)(v9 + 840) != a2
    || (v14 = *(unsigned __int8 *)(v9 + 867), LOBYTE(v14) = v14 - 1, (unsigned __int8)v14 > 2u)
    || a3 == 1 && (*(_QWORD *)(v9 + 832) != a4 || (v14 = qword_1421E74D0, qword_1421E74D0 != a4)) )
  {
    if ( !(_BYTE)v13 )
    {
      if ( 2 * *v12 )
      {
        v27 = 1;
        if ( !(unsigned __int8)sub_141938160(v14) )
          *(_BYTE *)(v9 + 33) = 1;
      }
    }
    v22 = *v10;
    *v10 = 0;
    if ( v22 != 2 )
      goto LABEL_32;
LABEL_31:
    v27 = 1;
    WakeByAddressSingle(v10);
LABEL_32:
    result = (__int64)v25;
    if ( *v25 )
      return sub_140001660(v25[1], *v25, 1);
    return result;
  }
  v26 = v13;
  Address = (PVOID)(v9 + 32);
  *(_QWORD *)(v9 + 832) = _InterlockedIncrement64(&qword_1421E74D0);
  *(_QWORD *)(v9 + 840) = 0;
  *(_BYTE *)(v9 + 867) = 5;
  v16 = *(_QWORD *)(v9 + 672);
  if ( v16 != -1 && v16 )
    sub_140001660(*(_QWORD *)(v9 + 680), v16, 1);
  v17 = v25;
  *(_QWORD *)(v9 + 688) = v25[2];
  *(_OWORD *)(v9 + 672) = *v17;
  if ( *(_DWORD *)(v9 + 80) <= 0xFFFFFFFD )
  {
    v23[3] = v9 + 80;
    sub_14093B470((__int64 *)(v9 + 80));
  }
  *(_QWORD *)(v9 + 80) = -2;
  *(_DWORD *)(v9 + 728) = -1;
  if ( !(_BYTE)v26 )
  {
    if ( 2 * *v12 )
    {
      v27 = 0;
      if ( !(unsigned __int8)sub_141938160(v17) )
        *(_BYTE *)(v9 + 33) = 1;
    }
  }
  v18 = Address;
  v19 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v19 == 2 )
  {
    v27 = 0;
    WakeByAddressSingle(v18);
  }
  sub_14017AFD0(a1);
  sub_14047CCD0(a1, 0);
  sub_14021BF70(v20);
  v27 = 0;
  result = sub_140C75E50(v23, a1);
  if ( v23[0] != -1 && v23[0] )
    return sub_140001660(v23[1], v23[0], 1);
  return result;
}
