// win 1.2.1 NEW export_session_markdown 0x14028a010 d=1
_QWORD *__fastcall sub_14028A010(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x14028a01c*/
  nullsub_1(); /*0x14028a02a*/
  v4 = (_BYTE *)sub_140001350(128, 1); /*0x14028a039*/
  v16 = a2; /*0x14028a041*/
  if ( !v4 ) /*0x14028a045*/
    sub_1415F08AB(1, 128); /*0x14028a21a*/
  v11 = 128; /*0x14028a04b*/
  v12 = v4; /*0x14028a053*/
  v10 = &v11; /*0x14028a05b*/
  *v4 = 123; /*0x14028a05f*/
  v13 = 1; /*0x14028a062*/
  v14 = 256; /*0x14028a06a*/
  v15 = &v10; /*0x14028a074*/
  v5 = sub_1405F97B0(&v14, aSchemaversion_0, 13, a2 + 152, v10); /*0x14028a096*/
  if ( v5 ) /*0x14028a09c*/
    goto LABEL_6; /*0x14028a09c*/
  if ( (_BYTE)v14 ) /*0x14028a0a2*/
    goto LABEL_4; /*0x14028a0a2*/
  v5 = sub_1405F8FC0(&v14, "successwarningsdataApiProxyModedirectmanual", 7, v16 + 156); /*0x14028a0d1*/
  if ( v5 ) /*0x14028a0d7*/
    goto LABEL_6; /*0x14028a0d7*/
  if ( (_BYTE)v14 ) /*0x14028a11a*/
    goto LABEL_4; /*0x14028a11a*/
  v5 = sub_1405F0810(&v14, aCode_2, 4, v16); /*0x14028a137*/
  if ( v5 ) /*0x14028a13d*/
    goto LABEL_6; /*0x14028a13d*/
  if ( (_BYTE)v14 ) /*0x14028a143*/
  {
LABEL_4:
    v5 = sub_1415ECB80(); /*0x14028a0a4*/
    goto LABEL_6; /*0x14028a0ad*/
  }
  v5 = sub_1405F0810(&v14, aMessage_0, 7, v16 + 24); /*0x14028a168*/
  if ( v5 || (v5 = sub_14022EBE0(&v14, v16 + 48)) != 0 || (v5 = sub_14022F100(&v14, v16 + 72)) != 0 ) /*0x14028a1aa*/
  {
LABEL_6:
    if ( v11 ) /*0x14028a0e0*/
      sub_140001360((__int64)v12, v11, 1); /*0x14028a0ec*/
    goto LABEL_8; /*0x14028a0ec*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14028a1ba*/
    sub_140892AB0(*v15, asc_1416757C1, 1); /*0x14028a1d0*/
  v8 = v11; /*0x14028a1d6*/
  v5 = (__int64)v12; /*0x14028a1da*/
  if ( v11 != -1 ) /*0x14028a1e2*/
  {
    v9 = v13; /*0x14028a1e8*/
    a1[1] = 0; /*0x14028a1ec*/
    a1[2] = v8; /*0x14028a1f4*/
    a1[3] = v5; /*0x14028a1f8*/
    a1[4] = v9; /*0x14028a1fc*/
    *a1 = -1; /*0x14028a200*/
    v6 = v16; /*0x14028a207*/
    goto LABEL_9; /*0x14028a20b*/
  }
LABEL_8:
  v6 = v16; /*0x14028a0f1*/
  *a1 = 0x8000000000000005uLL; /*0x14028a0ff*/
  a1[1] = v5; /*0x14028a102*/
LABEL_9:
  sub_140202AA0(v6); /*0x14028a106*/
  return a1; /*0x14028a10e*/
}