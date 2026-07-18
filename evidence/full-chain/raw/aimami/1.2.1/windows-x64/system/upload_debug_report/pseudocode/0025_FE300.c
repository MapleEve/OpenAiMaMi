// win 1.2.1 NEW upload_debug_report 0x1405fe300 d=2
__int64 __fastcall sub_1405FE300(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v5; // rdx
  char *v6; // rsi
  _QWORD *v7; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+28h] [rbp-70h]
  _QWORD *v9; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v10)(); // [rsp+38h] [rbp-60h]
  char v11; // [rsp+40h] [rbp-58h] BYREF
  char v12; // [rsp+58h] [rbp-40h] BYREF
  char v13; // [rsp+70h] [rbp-28h] BYREF

  v2 = a1[3]; /*0x1405fe30c*/
  if ( v2 ) /*0x1405fe313*/
  {
    v3 = a1[4]; /*0x1405fe319*/
    if ( *(_BYTE *)(v3 + 480) == 0xFF ) /*0x1405fe325*/
    {
      v7 = a1; /*0x1405fe36a*/
      v8 = sub_1401F8E10; /*0x1405fe376*/
      v9 = a1 + 2; /*0x1405fe37b*/
      v10 = sub_1401F8E10; /*0x1405fe380*/
      v5 = &unk_141697A24; /*0x1405fe385*/
      v6 = &v12; /*0x1405fe38c*/
    }
    else
    {
      if ( sub_141363DA0(a1[2], v2, v3 + 480) ) /*0x1405fe332*/
        return 0; /*0x1405fe34a*/
      v7 = a1; /*0x1405fe393*/
      v8 = sub_1401F8E10; /*0x1405fe39f*/
      v9 = a1 + 2; /*0x1405fe3a4*/
      v10 = sub_1401F8E10; /*0x1405fe3a9*/
      v5 = &unk_141699923; /*0x1405fe3ae*/
      v6 = &v13; /*0x1405fe3b5*/
    }
  }
  else
  {
    v7 = a1; /*0x1405fe34b*/
    v8 = sub_1401F8E10; /*0x1405fe357*/
    v5 = &unk_1416998E0; /*0x1405fe35c*/
    v6 = &v11; /*0x1405fe363*/
  }
  sub_1413CAFD0(v6, v5, &v7); /*0x1405fe3c2*/
  sub_1415C1550(v6); /*0x1405fe3ca*/
  return 1; /*0x1405fe341*/
}