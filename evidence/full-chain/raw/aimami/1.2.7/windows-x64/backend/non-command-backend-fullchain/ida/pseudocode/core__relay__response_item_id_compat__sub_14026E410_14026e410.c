// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x14026e410 | name sub_14026E410
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14026E410(__int64 a1)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-50h] BYREF
  char **v4; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall **v5)(); // [rsp+48h] [rbp-38h]
  __int64 v6; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v7)(); // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h]
  unsigned __int64 v11; // [rsp+78h] [rbp-8h]
  __int64 v12; // [rsp+80h] [rbp+0h]
  char v13; // [rsp+8Fh] [rbp+Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+10h]

  v14 = -2;
  sub_141568C20(v3);
  v9 = 0;
  v10 = 1;
  v11 = 0;
  v6 = 1610612768;
  v4 = (char **)&v9;
  v5 = &off_1419E0B60;
  if ( (unsigned __int8)sub_141569DC0(v3, &v4) )
    sub_141939040(
      (unsigned int)aADisplayImplem_53,
      55,
      (unsigned int)&v13,
      (unsigned int)&unk_1419D7FE8,
      (__int64)&off_1419E29A8);
  v12 = v9;
  v8 = v10;
  if ( v11 <= 0xC )
  {
    if ( v11 != 12 )
LABEL_4:
      sub_141938F40(v10, v11, 0, 12, (__int64)&off_1419E0D98);
  }
  else if ( *(char *)(v10 + 12) <= -65 )
  {
    goto LABEL_4;
  }
  v9 = v10;
  v10 = 12;
  v4 = &off_1419E0C80;
  v5 = (__int64 (__fastcall **)())sub_140186EE0;
  v6 = (__int64)&v9;
  v7 = sub_140186EE0;
  sub_1416ABFD0(a1, &unk_1419DABE5, &v4);
  if ( v12 )
    sub_140001660(v8, v12, 1);
  return a1;
}
