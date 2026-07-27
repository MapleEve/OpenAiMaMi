// module: codexmate_lib/core/voice/workspace
// addr: 0x1407b1010
// name: sub_1407B1010
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1407B1010(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rbx
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rdi
  char v8; // al
  __int128 v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-20h]
  PVOID Address; // [rsp+60h] [rbp-10h] BYREF
  char v14; // [rsp+68h] [rbp-8h]
  __int64 v15; // [rsp+70h] [rbp+0h]

  v15 = -2;
  v2 = a1;
  if ( dword_141EC25B8 )
  {
    sub_14169840E(&dword_141EC25B8);
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC25BC, 1, 0) )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC25BC, 1, 0) )
      goto LABEL_3;
  }
  sub_1416C15B0(&byte_141EC25BC);
LABEL_3:
  v3 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
  {
    result = 0;
    if ( byte_141EC25BD )
      goto LABEL_5;
LABEL_13:
    *(_QWORD *)(v2 + 8) = &byte_141EC25BC;
    *(_BYTE *)(v2 + 16) = result;
    *(_QWORD *)v2 = -1;
    return result;
  }
  result = sub_1416C2250(a1, a2) ^ 1;
  if ( !byte_141EC25BD )
    goto LABEL_13;
LABEL_5:
  Address = &byte_141EC25BC;
  v14 = result;
  *(_QWORD *)&v11 = &Address;
  *((_QWORD *)&v11 + 1) = sub_14041C7D0;
  sub_14149C0F0(&v9, &unk_141788E56, &v11);
  v11 = v9;
  v12 = v10;
  v7 = (char *)Address;
  if ( !v14 && 2 * *v3 && !(unsigned __int8)sub_1416C2250(v6, v5) )
    v7[1] = 1;
  v8 = *v7;
  *v7 = 0;
  if ( v8 == 2 )
    WakeByAddressSingle(v7);
  *(_QWORD *)v2 = 10;
  *(_OWORD *)(v2 + 8) = v11;
  result = v12;
  *(_QWORD *)(v2 + 24) = v12;
  return result;
}