// module: codexmate_lib/commands/analytics
// addr: 0x140b01c10
// name: sub_140B01C10
// win 1.2.1 | module src/commands/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140B01C10(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r14
  char v9; // r15
  _BYTE *v10; // r14
  char v11; // cl
  char v12; // r12
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  _OWORD v17[6]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v18; // [rsp+80h] [rbp+0h] BYREF
  char v19; // [rsp+82h] [rbp+2h]
  _BYTE v20[2]; // [rsp+85h] [rbp+5h] BYREF
  char v21; // [rsp+87h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+8h]

  v22 = -2;
  *(_QWORD *)&v17[0] = -3;
  v21 = 1;
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
    v21 = 1;
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
  v21 = 1;
  sub_1412F1400(a3);
  v12 = 1;
  v9 = 0;
LABEL_9:
  v19 = 0;
  v18 = 0;
  v21 = 1;
  sub_1412F1CA0((_BYTE *)&v18 + 1);
  if ( v12 )
  {
    *(_QWORD *)a1 = -3;
    sub_140A896C0(v17);
    return a1;
  }
LABEL_11:
  v20[0] = v8;
  v20[1] = v9;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v17, *a3);
  if ( LODWORD(v17[0]) != -3 )
    v20[0] = 0;
  *(_OWORD *)(a1 + 80) = v17[5];
  *(_OWORD *)(a1 + 64) = v17[4];
  v13 = v17[0];
  v14 = v17[1];
  v15 = v17[2];
  *(_OWORD *)(a1 + 48) = v17[3];
  *(_OWORD *)(a1 + 32) = v15;
  *(_OWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  v21 = 0;
  sub_1412F1CA0(v20);
  return a1;
}