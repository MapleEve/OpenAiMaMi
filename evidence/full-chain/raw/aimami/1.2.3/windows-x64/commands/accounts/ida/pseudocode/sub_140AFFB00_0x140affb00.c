// module: codexmate_lib/commands/accounts
// addr: 0x140affb00
// name: sub_140AFFB00
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140AFFB00(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r14
  char v9; // r15
  _BYTE *v10; // r14
  char v11; // cl
  char v12; // r12
  _QWORD v14[112]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v15; // [rsp+3A0h] [rbp+320h] BYREF
  char v16; // [rsp+3A2h] [rbp+322h]
  _BYTE v17[2]; // [rsp+3A5h] [rbp+325h] BYREF
  char v18; // [rsp+3A7h] [rbp+327h]
  __int64 v19; // [rsp+3A8h] [rbp+328h]

  v19 = -2;
  v14[0] = -3;
  v18 = 1;
  v6 = (_BYTE *)sub_1412F09C0();
  v7 = (unsigned __int8)v6[72];
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v8 = 0;
      v9 = 0;
      goto LABEL_11;
    }
    v18 = 1;
    v10 = v6;
    sub_14148BBF0(v6, sub_140B82FF0);
    v6 = v10;
    v10[72] = 1;
  }
  v8 = v6[68];
  v9 = v6[69];
  v11 = v9;
  if ( v8 != 1 )
    goto LABEL_8;
  if ( v9 )
  {
    v11 = v9 - 1;
LABEL_8:
    v6[69] = v11;
    v12 = 0;
    goto LABEL_9;
  }
  v18 = 1;
  sub_1412F1400(a3);
  v12 = 1;
  v9 = 0;
LABEL_9:
  v16 = 0;
  v15 = 0;
  v18 = 1;
  sub_1412F1CA0((_BYTE *)&v15 + 1);
  if ( v12 )
  {
    *a1 = -3;
    sub_140A88540(v14);
    return a1;
  }
LABEL_11:
  v17[0] = v8;
  v17[1] = v9;
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v14, *a3);
  if ( LODWORD(v14[0]) != -3 )
    v17[0] = 0;
  sub_141684120(a1, v14, 896);
  v18 = 0;
  sub_1412F1CA0(v17);
  return a1;
}