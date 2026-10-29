// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1401f5c90 | name sub_1401F5C90
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401F5C90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  int v16; // ebx
  _QWORD *v17; // rax
  const char *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  char v27; // [rsp+3Ch] [rbp-4h]

  v6 = sub_1416419F0(aUsage_0, 5, a3);
  sub_1401F6AE0(a1, v6);
  sub_1401F66E0(a1, a3);
  v7 = *a1;
  LOBYTE(v8) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(*a1 + 56), 1, 0) )
    sub_141937480((volatile void *)(v7 + 56));
  v9 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
    v27 = sub_141938160(v8) ^ 1;
  else
    v27 = 0;
  v10 = (_QWORD *)sub_1416419F0(aStopReason_0, 11, a2);
  if ( !v10 )
    v10 = off_1421E7108;
  if ( *(_BYTE *)v10 == 3 )
  {
    v12 = v10[2];
    v11 = v10[3];
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(v7 + 208) = sub_140229280(v12, v11);
  *(_QWORD *)(v7 + 216) = v14;
  if ( !v27 && 2 * *v9 && !(unsigned __int8)sub_141938160(v13) )
    *(_BYTE *)(v7 + 57) = 1;
  v15 = *(_BYTE *)(v7 + 56);
  *(_BYTE *)(v7 + 56) = 0;
  if ( v15 == 2 )
    WakeByAddressSingle((PVOID)(v7 + 56));
  v16 = 6;
  v17 = (_QWORD *)sub_1416419F0(aStatus_2, 6, a3);
  if ( !v17 )
    v17 = off_1421E7108;
  v18 = aFailed;
  if ( *(_BYTE *)v17 == 3 )
  {
    v19 = v17[2];
    v20 = v17[3];
    if ( v20 == 10 )
    {
      v21 = (*(_QWORD *)v19 ^ 0x656C706D6F636E69LL | *(unsigned __int16 *)(v19 + 8) ^ 0x6574LL) == 0;
      v16 = 4 * v21 + 6;
      v22 = &unk_1419DB2F2;
    }
    else
    {
      if ( v20 != 9 )
        goto LABEL_23;
      v21 = (*(_QWORD *)v19 ^ 0x6574656C706D6F63LL | *(unsigned __int8 *)(v19 + 8) ^ 0x64LL) == 0;
      v16 = 3 * v21 + 6;
      v22 = &unk_1419DB2E9;
    }
    v18 = aFailed;
    if ( v21 )
      LODWORD(v18) = (_DWORD)v22;
  }
LABEL_23:
  v23 = sub_141642800(a3, aErrorMessage, 14);
  LODWORD(v24) = 1;
  if ( v23 && *(_BYTE *)v23 == 3 )
  {
    v24 = *(_QWORD *)(v23 + 16);
    v25 = *(_QWORD *)(v23 + 24);
  }
  else
  {
    v25 = 0;
  }
  return sub_1401F9370((_DWORD)a1, (_DWORD)v18, v16, v24, v25);
}
