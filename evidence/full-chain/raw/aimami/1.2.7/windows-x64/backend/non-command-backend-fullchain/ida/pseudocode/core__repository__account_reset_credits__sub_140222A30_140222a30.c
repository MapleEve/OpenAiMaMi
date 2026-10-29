// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x140222a30 | name sub_140222A30
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_140222A30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rax
  void *v11; // rdi
  _QWORD v12[22]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v14; // [rsp+E8h] [rbp+68h]
  __int64 v15; // [rsp+F8h] [rbp+78h]

  v15 = -2;
  if ( *(_DWORD *)a2 == 2 || *(_QWORD *)(a2 + 56) != a4 || (unsigned int)sub_1418F4B70(*(_QWORD *)(a2 + 48), a3) )
  {
    nullsub_1(a1);
    result = (void *)sub_140001650(42, 1);
    if ( !result )
      sub_141938D2B(1, 42);
    qmemcpy(result, "Reset card account identity does not match", 42);
    a1[1] = 9;
    a1[2] = 42;
    a1[3] = result;
    a1[4] = 42;
LABEL_6:
    *a1 = -2;
    return result;
  }
  v7 = 0;
  v8 = 1;
  if ( *(_QWORD *)(a2 + 176) != -1 )
  {
    v8 = *(_QWORD *)(a2 + 184);
    v7 = *(_QWORD *)(a2 + 192);
  }
  v13[0] = v8;
  v13[1] = v7;
  v14 = 0;
  sub_140630900(v12, v13);
  if ( v12[0] == -2 )
  {
    v13[0] = v12[1];
    nullsub_1(v9);
    v10 = (void *)sub_140001650(37, 1);
    if ( !v10 )
      sub_141938D2B(1, 37);
    v11 = v10;
    qmemcpy(v10, "Reset card credentials are unreadable", 37);
    result = (void *)sub_14002F910(v13);
    a1[1] = 9;
    a1[2] = 37;
    a1[3] = v11;
    a1[4] = 37;
    goto LABEL_6;
  }
  return (void *)sub_1418F44E0(a1, v12, 176);
}
