// win 1.2.7 | module src/core/sessions.rs | ea 0x1402b3dc0 | name sub_1402B3DC0
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402B3DC0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // [rsp+28h] [rbp-58h] BYREF
  __int64 v6; // [rsp+30h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]
  __int64 v11; // [rsp+78h] [rbp-8h]

  v11 = -2;
  sub_14018DB90(&v5);
  if ( v5 == -1 )
  {
    result = v6;
    if ( v6 != -2 && v6 != -1 )
    {
      v10 = v6;
      v3 = v8;
      v9 = v7;
      result = sub_140E91160(v7, v8);
      if ( v4 )
      {
        *a1 = v10;
        result = v9;
        a1[1] = v9;
        a1[2] = v3;
        return result;
      }
      if ( v10 )
        result = sub_140001660(v9, v10, 1);
    }
  }
  else
  {
    result = sub_14029C280(&v5);
  }
  *a1 = -1;
  return result;
}
