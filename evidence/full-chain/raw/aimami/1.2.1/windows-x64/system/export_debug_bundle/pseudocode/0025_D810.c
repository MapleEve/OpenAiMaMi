// win 1.2.1 NEW export_debug_bundle 0x14028d810 d=1
_QWORD *__fastcall sub_14028D810(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x14028d81c*/
  nullsub_1(); /*0x14028d82a*/
  v4 = (_BYTE *)sub_140001350(128, 1); /*0x14028d839*/
  v16 = a2; /*0x14028d841*/
  if ( !v4 ) /*0x14028d845*/
    sub_1415F08AB(1, 128); /*0x14028da1a*/
  v11 = 128; /*0x14028d84b*/
  v12 = v4; /*0x14028d853*/
  v10 = &v11; /*0x14028d85b*/
  *v4 = 123; /*0x14028d85f*/
  v13 = 1; /*0x14028d862*/
  v14 = 256; /*0x14028d86a*/
  v15 = &v10; /*0x14028d874*/
  v5 = sub_1405F97B0(&v14, aSchemaversion_0, 13, a2 + 184, v10); /*0x14028d896*/
  if ( v5 ) /*0x14028d89c*/
    goto LABEL_6; /*0x14028d89c*/
  if ( (_BYTE)v14 ) /*0x14028d8a2*/
    goto LABEL_4; /*0x14028d8a2*/
  v5 = sub_1405F8FC0(&v14, "successwarningsdataApiProxyModedirectmanual", 7, v16 + 188); /*0x14028d8d1*/
  if ( v5 ) /*0x14028d8d7*/
    goto LABEL_6; /*0x14028d8d7*/
  if ( (_BYTE)v14 ) /*0x14028d91a*/
    goto LABEL_4; /*0x14028d91a*/
  v5 = sub_1405F0810(&v14, aCode_2, 4, v16); /*0x14028d937*/
  if ( v5 ) /*0x14028d93d*/
    goto LABEL_6; /*0x14028d93d*/
  if ( (_BYTE)v14 ) /*0x14028d943*/
  {
LABEL_4:
    v5 = sub_1415ECB80(); /*0x14028d8a4*/
    goto LABEL_6; /*0x14028d8ad*/
  }
  v5 = sub_1405F0810(&v14, aMessage_0, 7, v16 + 24); /*0x14028d968*/
  if ( v5 || (v5 = sub_14022EBE0(&v14, v16 + 48)) != 0 || (v5 = sub_14022ED40(&v14, v16 + 72)) != 0 ) /*0x14028d9aa*/
  {
LABEL_6:
    if ( v11 ) /*0x14028d8e0*/
      sub_140001360((__int64)v12, v11, 1); /*0x14028d8ec*/
    goto LABEL_8; /*0x14028d8ec*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14028d9ba*/
    sub_140892AB0(*v15, asc_1416757C1, 1); /*0x14028d9d0*/
  v8 = v11; /*0x14028d9d6*/
  v5 = (__int64)v12; /*0x14028d9da*/
  if ( v11 != -1 ) /*0x14028d9e2*/
  {
    v9 = v13; /*0x14028d9e8*/
    a1[1] = 0; /*0x14028d9ec*/
    a1[2] = v8; /*0x14028d9f4*/
    a1[3] = v5; /*0x14028d9f8*/
    a1[4] = v9; /*0x14028d9fc*/
    *a1 = -1; /*0x14028da00*/
    v6 = v16; /*0x14028da07*/
    goto LABEL_9; /*0x14028da0b*/
  }
LABEL_8:
  v6 = v16; /*0x14028d8f1*/
  *a1 = 0x8000000000000005uLL; /*0x14028d8ff*/
  a1[1] = v5; /*0x14028d902*/
LABEL_9:
  sub_140203040(v6); /*0x14028d906*/
  return a1; /*0x14028d90e*/
}