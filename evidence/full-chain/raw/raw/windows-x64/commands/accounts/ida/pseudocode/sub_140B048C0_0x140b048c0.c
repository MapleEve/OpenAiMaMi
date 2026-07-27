// module: codexmate_lib/commands/accounts
// addr: 0x140b048c0
// name: sub_140B048C0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140B048C0(_QWORD *a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  _BYTE *v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int16 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]

  v17 = -2;
  nullsub_1(a1);
  v4 = (_BYTE *)sub_140001650(128, 1);
  v16 = a2;
  if ( !v4 )
    sub_1416C2D4B(1, 128);
  v11 = 128;
  v12 = v4;
  v10 = &v11;
  *v4 = 123;
  v13 = 1;
  v14 = 256;
  v15 = &v10;
  v5 = sub_140467220(&v14, aSchemaversion_5, 13, a2 + 480);
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
    goto LABEL_4;
  v5 = sub_140466A30(&v14, aSuccess_0, 7, v16 + 484);
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
    goto LABEL_4;
  v5 = sub_14045E240(&v14, aCode_8, 4, v16 + 408, v10);
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
  {
LABEL_4:
    v5 = sub_1416BF0E0();
    goto LABEL_6;
  }
  v5 = sub_14045E240(&v14, aMessage_3, 7, v16 + 432, v10);
  if ( v5 || (v5 = sub_140ABBD30(&v14, v16 + 456)) != 0 || (v5 = sub_140ABC010(&v14, v16)) != 0 )
  {
LABEL_6:
    if ( v11 )
      sub_140001660(v12, v11, 1);
    goto LABEL_8;
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) )
    sub_140301CD0(*v15, asc_1417AE501, 1);
  v8 = v11;
  v5 = (__int64)v12;
  if ( v11 != -1 )
  {
    v9 = v13;
    a1[1] = 0;
    a1[2] = v8;
    a1[3] = v5;
    a1[4] = v9;
    *a1 = -1;
    v6 = v16;
    goto LABEL_9;
  }
LABEL_8:
  v6 = v16;
  *a1 = 0x8000000000000005uLL;
  a1[1] = v5;
LABEL_9:
  sub_140A8A960(v6);
  return a1;
}