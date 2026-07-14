// win 1.1.8 detect_api_proxy_config node va=0x14003abf0 depth=1
// ABF0
_QWORD *__fastcall sub_14003ABF0(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x14003abfc*/
  nullsub_1(); /*0x14003ac0a*/
  v4 = (_BYTE *)sub_140001360(128, 1); /*0x14003ac19*/
  v16 = a2; /*0x14003ac21*/
  if ( !v4 ) /*0x14003ac25*/
    sub_1412AD46B(1, 128); /*0x14003ae02*/
  v11 = 128; /*0x14003ac2b*/
  v12 = v4; /*0x14003ac33*/
  v10 = &v11; /*0x14003ac3b*/
  *v4 = 123; /*0x14003ac3f*/
  v13 = 1; /*0x14003ac42*/
  v14 = 256; /*0x14003ac4a*/
  v15 = &v10; /*0x14003ac54*/
  v5 = sub_14076A130(&v14, aSchemaversion, 13, a2 + 168, v10); /*0x14003ac76*/
  if ( v5 ) /*0x14003ac7c*/
    goto LABEL_6; /*0x14003ac7c*/
  if ( (_BYTE)v14 ) /*0x14003ac82*/
    goto LABEL_4; /*0x14003ac82*/
  v5 = sub_140773D00(&v14, aSuccess, 7, v16 + 172); /*0x14003acb1*/
  if ( v5 ) /*0x14003acb7*/
    goto LABEL_6; /*0x14003acb7*/
  if ( (_BYTE)v14 ) /*0x14003acfa*/
    goto LABEL_4; /*0x14003acfa*/
  v5 = sub_1407702C0(&v14, aCode_1, 4, v16); /*0x14003ad17*/
  if ( v5 ) /*0x14003ad1d*/
    goto LABEL_6; /*0x14003ad1d*/
  if ( (_BYTE)v14 ) /*0x14003ad23*/
  {
LABEL_4:
    v5 = sub_1412A9710(); /*0x14003ac84*/
    goto LABEL_6; /*0x14003ac8d*/
  }
  v5 = sub_1407702C0(&v14, aMessage_0, 7, v16 + 24); /*0x14003ad48*/
  if ( v5 || (v5 = sub_140061470(&v14, v16 + 48)) != 0 || (v5 = sub_140061CB0(&v14, v16 + 72)) != 0 ) /*0x14003ad8a*/
  {
LABEL_6:
    if ( v11 ) /*0x14003acc0*/
      sub_140001370((__int64)v12, v11, 1); /*0x14003accc*/
    goto LABEL_8; /*0x14003accc*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14003ad9a*/
    sub_1401F2FE0(*v15, "}string or map", 1); /*0x14003adb0*/
  v8 = v11; /*0x14003adb6*/
  v5 = (__int64)v12; /*0x14003adba*/
  if ( !__OFSUB__(-v11, 1) ) /*0x14003adc4*/
  {
    v9 = v13; /*0x14003adca*/
    a1[1] = 0; /*0x14003adce*/
    a1[2] = v8; /*0x14003add6*/
    a1[3] = v5; /*0x14003adda*/
    a1[4] = v9; /*0x14003adde*/
    *a1 = 0x8000000000000025uLL; /*0x14003adec*/
    v6 = v16; /*0x14003adef*/
    goto LABEL_9; /*0x14003adf3*/
  }
LABEL_8:
  v6 = v16; /*0x14003acd1*/
  *a1 = 0x8000000000000005uLL; /*0x14003acdf*/
  a1[1] = v5; /*0x14003ace2*/
LABEL_9:
  sub_1400414A0(v6); /*0x14003ace6*/
  return a1; /*0x14003acee*/
}