// win 1.2.1 NEW migrate_session_worktree 0x14028d2f0 d=1
_QWORD *__fastcall sub_14028D2F0(_QWORD *a1, __int64 a2)
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

  v17 = -2; /*0x14028d2fc*/
  nullsub_1(); /*0x14028d30a*/
  v4 = (_BYTE *)sub_140001350(128, 1); /*0x14028d319*/
  v16 = a2; /*0x14028d321*/
  if ( !v4 ) /*0x14028d325*/
    sub_1415F08AB(1, 128); /*0x14028d4fa*/
  v11 = 128; /*0x14028d32b*/
  v12 = v4; /*0x14028d333*/
  v10 = &v11; /*0x14028d33b*/
  *v4 = 123; /*0x14028d33f*/
  v13 = 1; /*0x14028d342*/
  v14 = 256; /*0x14028d34a*/
  v15 = &v10; /*0x14028d354*/
  v5 = sub_1405F97B0(&v14, aSchemaversion_0, 13, a2 + 200, v10); /*0x14028d376*/
  if ( v5 ) /*0x14028d37c*/
    goto LABEL_6; /*0x14028d37c*/
  if ( (_BYTE)v14 ) /*0x14028d382*/
    goto LABEL_4; /*0x14028d382*/
  v5 = sub_1405F8FC0(&v14, "successwarningsdataApiProxyModedirectmanual", 7, v16 + 204); /*0x14028d3b1*/
  if ( v5 ) /*0x14028d3b7*/
    goto LABEL_6; /*0x14028d3b7*/
  if ( (_BYTE)v14 ) /*0x14028d3fa*/
    goto LABEL_4; /*0x14028d3fa*/
  v5 = sub_1405F0810(&v14, aCode_2, 4, v16); /*0x14028d417*/
  if ( v5 ) /*0x14028d41d*/
    goto LABEL_6; /*0x14028d41d*/
  if ( (_BYTE)v14 ) /*0x14028d423*/
  {
LABEL_4:
    v5 = sub_1415ECB80(); /*0x14028d384*/
    goto LABEL_6; /*0x14028d38d*/
  }
  v5 = sub_1405F0810(&v14, aMessage_0, 7, v16 + 24); /*0x14028d448*/
  if ( v5 || (v5 = sub_14022EBE0(&v14, v16 + 48)) != 0 || (v5 = sub_14022F3A0(&v14, v16 + 72)) != 0 ) /*0x14028d48a*/
  {
LABEL_6:
    if ( v11 ) /*0x14028d3c0*/
      sub_140001360((__int64)v12, v11, 1); /*0x14028d3cc*/
    goto LABEL_8; /*0x14028d3cc*/
  }
  if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x14028d49a*/
    sub_140892AB0(*v15, asc_1416757C1, 1); /*0x14028d4b0*/
  v8 = v11; /*0x14028d4b6*/
  v5 = (__int64)v12; /*0x14028d4ba*/
  if ( v11 != -1 ) /*0x14028d4c2*/
  {
    v9 = v13; /*0x14028d4c8*/
    a1[1] = 0; /*0x14028d4cc*/
    a1[2] = v8; /*0x14028d4d4*/
    a1[3] = v5; /*0x14028d4d8*/
    a1[4] = v9; /*0x14028d4dc*/
    *a1 = -1; /*0x14028d4e0*/
    v6 = v16; /*0x14028d4e7*/
    goto LABEL_9; /*0x14028d4eb*/
  }
LABEL_8:
  v6 = v16; /*0x14028d3d1*/
  *a1 = 0x8000000000000005uLL; /*0x14028d3df*/
  a1[1] = v5; /*0x14028d3e2*/
LABEL_9:
  sub_140203960(v6); /*0x14028d3e6*/
  return a1; /*0x14028d3ee*/
}