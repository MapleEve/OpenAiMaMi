// win 1.2.7 | module src/core/relay/quota.rs | ea 0x14122e940 | name sub_14122E940
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14122E940(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int16 v4; // ax
  const char *v5; // rdx
  char v6; // cl
  char result; // al
  __int128 *v8; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-70h]
  __int64 *v10; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v11)(); // [rsp+38h] [rbp-60h]
  __int128 *v12; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v16; // [rsp+68h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+78h] [rbp-20h] BYREF

  v3 = *a1;
  switch ( *(_WORD *)(*a1 + 88) )
  {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
      v6 = sub_1416B24B0(a2);
      result = 1;
      if ( !v6 )
        goto LABEL_8;
      return result;
    case 3:
      v14 = v3 + 90;
      v4 = *(_WORD *)(v3 + 90);
      v5 = aHttpStatusServ_0;
      if ( (unsigned __int16)(v4 - 400) < 0x64u )
        v5 = (const char *)&unk_141AD438F;
      v15[0] = v5;
      v15[1] = 24;
      if ( *(_QWORD *)(v3 + 96) )
      {
        v17[0] = (char *)&unk_141AD43A7 + 3 * (unsigned __int16)(v4 - 100);
        v17[1] = 3;
        v16 = *(_OWORD *)(v3 + 104);
        v8 = (__int128 *)v15;
        v9 = sub_140186EE0;
        v10 = v17;
        v11 = sub_140186EE0;
        v12 = &v16;
        v13 = sub_141298600;
        if ( (unsigned __int8)sub_1416B2DC0(*a2, a2[1], &unk_141AD4E33, &v8) )
          return 1;
      }
      else
      {
        v8 = (__int128 *)v15;
        v9 = sub_140186EE0;
        v10 = &v14;
        v11 = sub_1410D6A50;
        if ( (unsigned __int8)sub_1416B2DC0(*a2, a2[1], &unk_141AD4E3E, &v8) )
          return 1;
      }
LABEL_8:
      if ( *(_QWORD *)v3 == -1 )
        return 0;
      *(_QWORD *)&v16 = v3;
      v8 = &v16;
      v9 = sub_140369D80;
      return sub_1416B2DC0(*a2, a2[1], &unk_141AD4E9A, &v8);
  }
}
