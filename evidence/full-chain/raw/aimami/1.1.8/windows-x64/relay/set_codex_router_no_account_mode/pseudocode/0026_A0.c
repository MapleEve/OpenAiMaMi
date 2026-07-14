// win 1.1.8 set_codex_router_no_account_mode node va=0x1400364a0 depth=1
// A0
_QWORD *__fastcall sub_1400364A0(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x1400364ac*/
  nullsub_1(); /*0x1400364ba*/
  v4 = (_BYTE *)sub_140001360(128, 1); /*0x1400364c9*/
  v16 = a2; /*0x1400364d1*/
  if ( !v4 ) /*0x1400364d5*/
    sub_1412AD46B(1, 128); /*0x1400366b2*/
  v11 = 128; /*0x1400364db*/
  v12 = v4; /*0x1400364e3*/
  v10 = &v11; /*0x1400364eb*/
  *v4 = 123; /*0x1400364ef*/
  v13 = 1; /*0x1400364f2*/
  v14 = 256; /*0x1400364fa*/
  v15 = &v10; /*0x140036504*/
  v5 = sub_14076A130(&v14, aSchemaversion, 13, a2 + 448, v10); /*0x140036526*/
  if ( v5 ) /*0x14003652c*/
    goto LABEL_6; /*0x14003652c*/
  if ( (_BYTE)v14 ) /*0x140036532*/
    goto LABEL_4; /*0x140036532*/
  v5 = sub_140773D00(&v14, aSuccess, 7, v16 + 452); /*0x140036561*/
  if ( v5 ) /*0x140036567*/
    goto LABEL_6; /*0x140036567*/
  if ( (_BYTE)v14 ) /*0x1400365aa*/
    goto LABEL_4; /*0x1400365aa*/
  v5 = sub_1407702C0(&v14, aCode_1, 4, v16); /*0x1400365c7*/
  if ( v5 ) /*0x1400365cd*/
    goto LABEL_6; /*0x1400365cd*/
  if ( (_BYTE)v14 ) /*0x1400365d3*/
  {
LABEL_4:
    v5 = sub_1412A9710(); /*0x140036534*/
    goto LABEL_6; /*0x14003653d*/
  }
  v5 = sub_1407702C0(&v14, aMessage_0, 7, v16 + 24); /*0x1400365f8*/
  if ( v5 || (v5 = sub_140061470(&v14, v16 + 48)) != 0 || (v5 = sub_140061610(&v14, v16 + 72)) != 0 ) /*0x14003663a*/
  {
LABEL_6:
    if ( v11 ) /*0x140036570*/
      sub_140001370((__int64)v12, v11, 1); /*0x14003657c*/
    goto LABEL_8; /*0x14003657c*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14003664a*/
    sub_1401F2FE0(*v15, "}string or map", 1); /*0x140036660*/
  v8 = v11; /*0x140036666*/
  v5 = (__int64)v12; /*0x14003666a*/
  if ( !__OFSUB__(-v11, 1) ) /*0x140036674*/
  {
    v9 = v13; /*0x14003667a*/
    a1[1] = 0; /*0x14003667e*/
    a1[2] = v8; /*0x140036686*/
    a1[3] = v5; /*0x14003668a*/
    a1[4] = v9; /*0x14003668e*/
    *a1 = 0x8000000000000025uLL; /*0x14003669c*/
    v6 = v16; /*0x14003669f*/
    goto LABEL_9; /*0x1400366a3*/
  }
LABEL_8:
  v6 = v16; /*0x140036581*/
  *a1 = 0x8000000000000005uLL; /*0x14003658f*/
  a1[1] = v5; /*0x140036592*/
LABEL_9:
  sub_140042740(v6); /*0x140036596*/
  return a1; /*0x14003659e*/
}