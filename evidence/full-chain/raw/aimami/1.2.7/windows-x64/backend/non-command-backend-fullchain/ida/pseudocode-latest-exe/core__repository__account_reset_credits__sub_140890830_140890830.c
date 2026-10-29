// win 1.2.7 latest-exe | module src/core/repository/account_reset_credits.rs | ea 0x140890830 | successor of pre-update 0x140222a30 | session <审计会话>
// match evidence: {"body_sim": 0.866, "str_ov": 1.0, "anchor": 0.378, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
_QWORD *__fastcall sub_140890830(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  void *v13; // rdi
  _QWORD v14[22]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v16; // [rsp+E8h] [rbp+68h]
  __int64 v17; // [rsp+F8h] [rbp+78h]

  v17 = -2;
  if ( *(_DWORD *)a2 == 2 || *(_QWORD *)(a2 + 56) != a4 || (unsigned int)sub_141923B40(*(_QWORD *)(a2 + 48), a3, a4) )
  {
    nullsub_1(a1, a2);
    v6 = (void *)sub_140001650(42, 1);
    if ( !v6 )
      sub_14196B2DB(1, 42);
    qmemcpy(v6, "Reset card account identity does not match", 42);
    a1[1] = 9;
    a1[2] = 42;
    a1[3] = v6;
    a1[4] = 42;
  }
  else
  {
    v8 = 0;
    v9 = 1;
    if ( *(_QWORD *)(a2 + 176) != -1 )
    {
      v9 = *(_QWORD *)(a2 + 184);
      v8 = *(_QWORD *)(a2 + 192);
    }
    v15[0] = v9;
    v15[1] = v8;
    v16 = 0;
    sub_140D8EBC0(v14, v15);
    if ( v14[0] != -2 )
    {
      sub_1419234B0(a1, v14, 176);
      return a1;
    }
    v15[0] = v14[1];
    nullsub_1(v11, v10);
    v12 = (void *)sub_140001650(37, 1);
    if ( !v12 )
      sub_14196B2DB(1, 37);
    v13 = v12;
    qmemcpy(v12, "Reset card credentials are unreadable", 37);
    sub_140032F30(v15);
    a1[1] = 9;
    a1[2] = 37;
    a1[3] = v13;
    a1[4] = 37;
  }
  *a1 = -2;
  return a1;
}
