// win 1.1.8 reorder_relay_providers node va=0x1400388c0 depth=2
// C0
_QWORD *__fastcall sub_1400388C0(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x1400388cc*/
  nullsub_1(); /*0x1400388da*/
  v4 = (_BYTE *)sub_140001360(128, 1); /*0x1400388e9*/
  v16 = a2; /*0x1400388f1*/
  if ( !v4 ) /*0x1400388f5*/
    sub_1412AD46B(1, 128); /*0x140038ae9*/
  v11 = 128; /*0x1400388fb*/
  v12 = v4; /*0x140038903*/
  v10 = &v11; /*0x14003890b*/
  *v4 = 123; /*0x14003890f*/
  v13 = 1; /*0x140038912*/
  v14 = 256; /*0x14003891a*/
  v15 = &v10; /*0x140038924*/
  v5 = sub_14076A130(&v14, aSchemaversion, 13, a2 + 416, v10); /*0x140038946*/
  if ( v5 ) /*0x14003894c*/
    goto LABEL_6; /*0x14003894c*/
  if ( (_BYTE)v14 ) /*0x140038952*/
    goto LABEL_4; /*0x140038952*/
  v5 = sub_140773D00(&v14, aSuccess, 7, v16 + 420); /*0x140038981*/
  if ( v5 ) /*0x140038987*/
  {
LABEL_6:
    if ( v11 ) /*0x140038990*/
      sub_140001370((__int64)v12, v11, 1); /*0x14003899c*/
    goto LABEL_8; /*0x14003899c*/
  }
  if ( (_BYTE)v14 ) /*0x1400389ca*/
    goto LABEL_4; /*0x1400389ca*/
  v5 = sub_1407702C0(&v14, aCode_1, 4, v16); /*0x1400389e7*/
  if ( v5 ) /*0x1400389ed*/
    goto LABEL_6; /*0x1400389ed*/
  if ( (_BYTE)v14 ) /*0x1400389f3*/
    goto LABEL_4; /*0x1400389f3*/
  v5 = sub_1407702C0(&v14, aMessage_0, 7, v16 + 24); /*0x140038a18*/
  if ( v5 ) /*0x140038a1e*/
    goto LABEL_6; /*0x140038a1e*/
  v5 = sub_140061470(&v14, v16 + 48); /*0x140038a36*/
  if ( v5 ) /*0x140038a3c*/
    goto LABEL_6; /*0x140038a3c*/
  if ( (_BYTE)v14 ) /*0x140038a46*/
  {
LABEL_4:
    v5 = sub_1412A9710(); /*0x140038954*/
    goto LABEL_6; /*0x14003895d*/
  }
  v5 = sub_14076F8D0(&v14, aData_2, 4, v16 + 72); /*0x140038a6b*/
  if ( v5 ) /*0x140038a71*/
    goto LABEL_6; /*0x140038a71*/
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x140038a81*/
    sub_1401F2FE0(*v15, "}string or map", 1); /*0x140038a97*/
  v8 = v11; /*0x140038a9d*/
  v5 = (__int64)v12; /*0x140038aa1*/
  if ( !__OFSUB__(-v11, 1) ) /*0x140038aab*/
  {
    v9 = v13; /*0x140038ab1*/
    a1[1] = 0; /*0x140038ab5*/
    a1[2] = v8; /*0x140038abd*/
    a1[3] = v5; /*0x140038ac1*/
    a1[4] = v9; /*0x140038ac5*/
    *a1 = 0x8000000000000025uLL; /*0x140038ad3*/
    v6 = v16; /*0x140038ad6*/
    goto LABEL_9; /*0x140038ada*/
  }
LABEL_8:
  v6 = v16; /*0x1400389a1*/
  *a1 = 0x8000000000000005uLL; /*0x1400389af*/
  a1[1] = v5; /*0x1400389b2*/
LABEL_9:
  sub_1400406F0(v6); /*0x1400389b6*/
  return a1; /*0x1400389be*/
}