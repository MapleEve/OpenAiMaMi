// win 1.2.1 NEW upload_debug_report 0x14028dfb0 d=1
_QWORD *__fastcall sub_14028DFB0(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x14028dfbc*/
  nullsub_1(); /*0x14028dfca*/
  v4 = (_BYTE *)sub_140001350(128, 1); /*0x14028dfd9*/
  v16 = a2; /*0x14028dfe1*/
  if ( !v4 ) /*0x14028dfe5*/
    sub_1415F08AB(1, 128); /*0x14028e1b4*/
  v11 = 128; /*0x14028dfeb*/
  v12 = v4; /*0x14028dff3*/
  v10 = &v11; /*0x14028dffb*/
  *v4 = 123; /*0x14028dfff*/
  v13 = 1; /*0x14028e002*/
  v14 = 256; /*0x14028e00a*/
  v15 = &v10; /*0x14028e014*/
  v5 = sub_1405F97B0(&v14, aSchemaversion_0, 13, a2 + 104, v10); /*0x14028e033*/
  if ( v5 ) /*0x14028e039*/
    goto LABEL_6; /*0x14028e039*/
  if ( (_BYTE)v14 ) /*0x14028e03f*/
    goto LABEL_4; /*0x14028e03f*/
  v5 = sub_1405F8FC0(&v14, "successwarningsdataApiProxyModedirectmanual", 7, v16 + 108); /*0x14028e06b*/
  if ( v5 ) /*0x14028e071*/
    goto LABEL_6; /*0x14028e071*/
  if ( (_BYTE)v14 ) /*0x14028e0b4*/
    goto LABEL_4; /*0x14028e0b4*/
  v5 = sub_1405F0810(&v14, aCode_2, 4, v16); /*0x14028e0d1*/
  if ( v5 ) /*0x14028e0d7*/
    goto LABEL_6; /*0x14028e0d7*/
  if ( (_BYTE)v14 ) /*0x14028e0dd*/
  {
LABEL_4:
    v5 = sub_1415ECB80(); /*0x14028e041*/
    goto LABEL_6; /*0x14028e04a*/
  }
  v5 = sub_1405F0810(&v14, aMessage_0, 7, v16 + 24); /*0x14028e102*/
  if ( v5 || (v5 = sub_14022EBE0(&v14, v16 + 48)) != 0 || (v5 = sub_14022EDA0(&v14, v16 + 72)) != 0 ) /*0x14028e144*/
  {
LABEL_6:
    if ( v11 ) /*0x14028e07a*/
      sub_140001360((__int64)v12, v11, 1); /*0x14028e086*/
    goto LABEL_8; /*0x14028e086*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14028e154*/
    sub_140892AB0(*v15, asc_1416757C1, 1); /*0x14028e16a*/
  v8 = v11; /*0x14028e170*/
  v5 = (__int64)v12; /*0x14028e174*/
  if ( v11 != -1 ) /*0x14028e17c*/
  {
    v9 = v13; /*0x14028e182*/
    a1[1] = 0; /*0x14028e186*/
    a1[2] = v8; /*0x14028e18e*/
    a1[3] = v5; /*0x14028e192*/
    a1[4] = v9; /*0x14028e196*/
    *a1 = -1; /*0x14028e19a*/
    v6 = v16; /*0x14028e1a1*/
    goto LABEL_9; /*0x14028e1a5*/
  }
LABEL_8:
  v6 = v16; /*0x14028e08b*/
  *a1 = 0x8000000000000005uLL; /*0x14028e099*/
  a1[1] = v5; /*0x14028e09c*/
LABEL_9:
  sub_140203450(v6); /*0x14028e0a0*/
  return a1; /*0x14028e0a8*/
}