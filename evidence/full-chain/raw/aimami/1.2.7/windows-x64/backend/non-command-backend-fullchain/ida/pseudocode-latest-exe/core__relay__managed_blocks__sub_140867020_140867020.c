// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x140867020 | successor of pre-update 0x140c161c0 | session <审计会话>
// match evidence: {"body_sim": 0.991, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140867020(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v15; // [rsp+37h] [rbp-51h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]

  v1 = a1[2];
  v15 = 2;
  if ( *((_BYTE *)a1 + 89) )
    return 0;
  v3 = a1 + 5;
  while ( 1 )
  {
    v4 = *v3;
    sub_1408FD7D0(v16, v3);
    if ( v16[0] == 1 )
    {
      v5 = v17;
      v6 = a1[3];
      a1[3] = v17;
      v7 = v5 - v6;
      v8 = v6 + v4;
      goto LABEL_8;
    }
    if ( *((_BYTE *)a1 + 89) )
      break;
    *((_BYTE *)a1 + 89) = 1;
    v9 = a1[3];
    v7 = a1[4] - v9;
    if ( (*((_BYTE *)a1 + 88) | (a1[4] != v9)) != 1 )
      break;
    v8 = *v3 + v9;
LABEL_8:
    v10 = v7 + a1[2];
    a1[2] = v10;
    toml_lexical_state_line_is_structural(&v15, v8, v7);
    if ( v15 == 2 || *((_BYTE *)a1 + 89) )
    {
      if ( v10 <= v1 )
        return 0;
      goto LABEL_11;
    }
  }
  v10 = a1[2];
  if ( v10 <= v1 )
    return 0;
LABEL_11:
  v11 = *a1;
  v12 = a1[1];
  if ( v10 > v12 || v1 && *(char *)(v11 + v1) <= -65 || v10 != v12 && *(char *)(v11 + v10) <= -65 )
    sub_14196B4F0(v11, v12, v1, v10, (__int64)&off_141A51C78);
  return v11 + v1;
}
