// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402901d0 | name sub_1402901D0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402901D0(__int64 a1, __int64 ***a2, _QWORD *a3)
{
  __int64 **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // r12
  __int64 *v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  char v13; // al
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 *v17; // [rsp+28h] [rbp-28h] BYREF
  char v18; // [rsp+30h] [rbp-20h]
  PVOID Address; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+44h] [rbp-Ch]
  __int64 v21; // [rsp+48h] [rbp-8h]

  v21 = -2;
  v4 = *a2;
  sub_14023DA40(a1, a3);
  v5 = **v4;
  if ( !v5 )
    return a1;
  v6 = (*v4)[1];
  v7 = v4[1];
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v7, 1, 0) )
  {
    v15 = v5;
    sub_141937480(v7);
    v5 = v15;
  }
  v8 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v9 = 0;
    if ( !*((_BYTE *)v7 + 1) )
      goto LABEL_6;
LABEL_12:
    v17 = v7;
    v18 = v9;
    sub_141939040(
      (unsigned int)aProgressCounte,
      25,
      (unsigned int)&v17,
      (unsigned int)&off_1419D7F28,
      (__int64)&off_1419D69E0);
  }
  v16 = v5;
  v9 = sub_141938160(v5);
  v5 = v16;
  LOBYTE(v9) = v9 ^ 1;
  if ( *((_BYTE *)v7 + 1) )
    goto LABEL_12;
LABEL_6:
  v20 = v9;
  v10 = v7[1] + 1;
  Address = v7;
  v7[1] = v10;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v6 + 40))(v5, v10, *v4[2]);
  v12 = (char *)Address;
  if ( !(_BYTE)v20 && 2 * *v8 && !(unsigned __int8)sub_141938160(v11) )
    *((_BYTE *)Address + 1) = 1;
  v13 = *v12;
  *v12 = 0;
  if ( v13 == 2 )
    WakeByAddressSingle(v12);
  return a1;
}
