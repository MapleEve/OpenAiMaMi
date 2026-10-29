// fn load_runtime_display_snapshot_serialize_envelope (0x140D763A0, 562B) — serde_json envelope
// 字段顺序=声明顺序: schemaVersion(+952,u32) success(+956,bool) code(+880,String) message(+904,String) warnings(+928,Vec) data(+0,Option; -1→"null" 0x6C6C756E)
__int64 __fastcall sub_140D763A0(_QWORD *a1, __int64 a2)
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
  nullsub_1(a1, a2);
  v4 = (_BYTE *)sub_140001650(128, 1);   // serde_json String buffer
  v16 = a2;
  if ( !v4 )
    sub_14196B2DB(1, 128);
  v11 = 128;
  v12 = v4;
  v10 = &v11;
  *v4 = 123;                             // "{"
  v13 = 1;
  v14 = 256;
  v15 = &v10;
  v5 = sub_1407B3340(&v14, &qword_141A90A1F, 13, a2 + 952, v10);  // "schemaVersion"
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
    goto LABEL_4;
  v5 = sub_1407B2B50(&v14, aSuccess_1, 7, v16 + 956);              // "success"
  if ( v5 )
  {
LABEL_6:
    if ( v11 )
      sub_140001660(v12, v11, 1);
    goto LABEL_8;
  }
  if ( (_BYTE)v14 )
    goto LABEL_4;
  v5 = sub_1407A9D90(&v14, aCode_10, 4, v16 + 880);                // "code"
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
    goto LABEL_4;
  v5 = sub_1407A9D90(&v14, aMessage_9, 7, v16 + 904);              // "message"
  if ( v5 )
    goto LABEL_6;
  v5 = sub_140CEAC10(&v14, v16 + 928);                             // "warnings"
  if ( v5 )
    goto LABEL_6;
  if ( (_BYTE)v14 )
  {
LABEL_4:
    v5 = sub_141967030();
    goto LABEL_6;
  }
  v5 = sub_1407A7230(&v14, aData_8, 4, v16);                       // "data"
  if ( v5 )
    goto LABEL_6;
  if ( (v14 & 1) == 0 && HIBYTE(v14) )
    sub_1401E6F40(*v15, "}falsetrue", 1);                          // "}"
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
  sub_140CB4240(v6);
  return a1;
}
