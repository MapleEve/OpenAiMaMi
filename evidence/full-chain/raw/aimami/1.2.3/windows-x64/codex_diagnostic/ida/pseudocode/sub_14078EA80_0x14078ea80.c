// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14078ea80
// name: sub_14078EA80
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_14078EA80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r14
  bool result; // al
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // si
  _QWORD v16[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v21[31]; // [rsp+59h] [rbp-27h]
  char v22; // [rsp+78h] [rbp-8h] BYREF
  _BYTE v23[31]; // [rsp+79h] [rbp-7h]
  __int64 v24; // [rsp+98h] [rbp+18h]

  v24 = -2;
  v16[0] = a1;
  v16[1] = a2;
  v17 = 0;
  v18 = a1;
  v19 = a2;
  sub_1408A6200(&v20, v16);
  if ( v20 == -1 )
  {
    sub_1406C9CF0((__int64)&v20);
    return 0;
  }
  *(_OWORD *)&v23[15] = *(_OWORD *)&v21[15];
  *(_OWORD *)v23 = *(_OWORD *)v21;
  v22 = v20;
  v2 = sub_141433D50(aPayload_1, 7, &v22);
  if ( !v2
    || (v3 = sub_141433D50(aBaseInstructio_0, 17, v2)) == 0
    || (v4 = sub_141433D50(aText_6, 4, v3)) == 0
    || *(_BYTE *)v4 != 3 )
  {
    sub_1400104F0(&v22);
    return 0;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 < 0 )
  {
    v7 = 0;
    goto LABEL_8;
  }
  if ( v6 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    nullsub_1(v5);
    v7 = 1;
    v10 = sub_140001650(v6, 1);
    if ( !v10 )
LABEL_8:
      sub_1416C2D4B(v7, v6);
    v11 = v10;
    sub_141684120(v10, v9, v6);
  }
  else
  {
    v11 = 1;
  }
  sub_1400104F0(&v22);
  v12 = sub_14033C560(v11, v6);
  result = v13 >= 0x2F && (unsigned int)sub_1416847B0(&unk_141788D8B, v12, 47) == 0;
  if ( v6 )
  {
    v14 = v6;
    v15 = result;
    sub_140001660(v11, v14, 1);
    return v15;
  }
  return result;
}