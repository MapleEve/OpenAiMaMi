// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14103fb60 | name sub_14103FB60
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14103FB60(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rbx
  char result; // al
  __int64 v4; // rcx
  char *v5; // rdi
  char v6; // al
  __int128 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h]
  PVOID Address; // [rsp+60h] [rbp-10h] BYREF
  char v12; // [rsp+68h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+0h]

  v13 = -2;
  v1 = a1;
  if ( dword_1421E0710 )
  {
    sub_14191165E(&dword_1421E0710);
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_1421E0714, 1, 0) )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_1421E0714, 1, 0) )
      goto LABEL_3;
  }
  sub_141937480(&byte_1421E0714);
LABEL_3:
  v2 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    result = 0;
    if ( byte_1421E0715 )
      goto LABEL_5;
LABEL_13:
    *(_QWORD *)(v1 + 8) = &byte_1421E0714;
    *(_BYTE *)(v1 + 16) = result;
    *(_QWORD *)v1 = -1;
    return result;
  }
  result = sub_141938160(a1) ^ 1;
  if ( !byte_1421E0715 )
    goto LABEL_13;
LABEL_5:
  Address = &byte_1421E0714;
  v12 = result;
  *(_QWORD *)&v9 = &Address;
  *((_QWORD *)&v9 + 1) = sub_140283F90;
  sub_1416ABFD0(&v7, &unk_141A6D2C3, &v9);
  v9 = v7;
  v10 = v8;
  v5 = (char *)Address;
  if ( !v12 && 2 * *v2 && !(unsigned __int8)sub_141938160(v4) )
    v5[1] = 1;
  v6 = *v5;
  *v5 = 0;
  if ( v6 == 2 )
    WakeByAddressSingle(v5);
  *(_QWORD *)v1 = 10;
  *(_OWORD *)(v1 + 8) = v9;
  result = v10;
  *(_QWORD *)(v1 + 24) = v10;
  return result;
}
