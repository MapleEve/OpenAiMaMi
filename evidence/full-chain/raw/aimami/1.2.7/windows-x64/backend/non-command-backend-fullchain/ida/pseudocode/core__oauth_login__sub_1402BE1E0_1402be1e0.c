// win 1.2.7 | module src/core/oauth_login.rs | ea 0x1402be1e0 | name sub_1402BE1E0
// win 1.2.7 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402BE1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  __int128 v24; // [rsp+80h] [rbp+0h]
  __int64 v25; // [rsp+90h] [rbp+10h]
  __int128 v26; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+30h]
  __int128 v28; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v29; // [rsp+C8h] [rbp+48h]
  __int128 v30; // [rsp+D8h] [rbp+58h]
  __int128 v31; // [rsp+E8h] [rbp+68h]
  __int128 v32; // [rsp+F8h] [rbp+78h]
  __int64 v33; // [rsp+108h] [rbp+88h]
  char v34; // [rsp+117h] [rbp+97h] BYREF
  __int64 v35; // [rsp+118h] [rbp+98h]

  v35 = -2;
  *(_QWORD *)&v22 = 0;
  *(_QWORD *)&v20 = 0;
  *(_QWORD *)&v21 = 0;
  sub_141655AC0(&v28, &v20, "https://auth.openai.com/oauth/authorizeauthorize endpoint is a valid URL", 39);
  if ( (_QWORD)v28 == -1 )
  {
    LOBYTE(v20) = BYTE8(v28);
    sub_141939040(
      (unsigned int)"authorize endpoint is a valid URL",
      33,
      (unsigned int)&v20,
      (unsigned int)&unk_1419E6A70,
      (__int64)&off_1419E72C0);
  }
  v25 = v33;
  v24 = v32;
  v23 = v31;
  v22 = v30;
  v21 = v29;
  v20 = v28;
  sub_141657B50(&v28, &v20);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v9 = sub_14165A240(&v28);
  sub_141673070(v9, v30, DWORD2(v30), v31, (__int64)&unk_1419E72D8, 13, (__int64)aCode_2, 4);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v10 = sub_14165A240(&v28);
  sub_141673070(v10, v30, DWORD2(v30), v31, (__int64)aClientId, 9, (__int64)aAppEmoameez73f, 28);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v11 = sub_14165A240(&v28);
  sub_141673070(v11, v30, DWORD2(v30), v31, (__int64)aRedirectUri, 12, (__int64)aHttpLocalhost1, 35);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v12 = sub_14165A240(&v28);
  sub_141673070(v12, v30, DWORD2(v30), v31, (__int64)&unk_1419E7339, 5, (__int64)&unk_1419E733E, 35);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v13 = sub_14165A240(&v28);
  sub_141673070(v13, v30, DWORD2(v30), v31, (__int64)aCodeChallenge, 14, a2, a3);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v14 = sub_14165A240(&v28);
  sub_141673070(v14, v30, DWORD2(v30), v31, (__int64)&unk_1419E736F, 21, (__int64)&unk_1419E7384, 4);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v15 = sub_14165A240(&v28);
  sub_141673070(v15, v30, DWORD2(v30), v31, (__int64)&unk_1419E7388, 26, (__int64)&aFalsetrue[5], 4);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v16 = sub_14165A240(&v28);
  sub_141673070(v16, v30, DWORD2(v30), v31, (__int64)&unk_1419E73A2, 25, (__int64)&aFalsetrue[5], 4);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v17 = sub_14165A240(&v28);
  sub_141673070(v17, v30, DWORD2(v30), v31, (__int64)&unk_1419E73BB, 10, (__int64)&unk_1419E73C5, 12);
  if ( (_QWORD)v28 == -2 )
    sub_141938FE0(aUrlFormUrlenco, 41, &off_1419D38F8);
  v18 = sub_14165A240(&v28);
  sub_141673070(
    v18,
    v30,
    DWORD2(v30),
    v31,
    (__int64)"statehttps://auth.openai.com/oauth/authorizeauthorize endpoint is a valid URL",
    5,
    a4,
    a5);
  if ( (_QWORD)v28 != -2 )
  {
    sub_14165A290(&v28);
    if ( (_QWORD)v28 != -1 )
    {
      if ( (_QWORD)v28 )
        sub_140001660(*((_QWORD *)&v28 + 1), v28, 1);
    }
  }
  *(_QWORD *)&v26 = 0;
  *((_QWORD *)&v26 + 1) = 1;
  v27 = 0;
  *(_QWORD *)&v29 = 1610612768;
  *(_QWORD *)&v28 = &v26;
  *((_QWORD *)&v28 + 1) = &off_1419E98E0;
  if ( (unsigned __int8)sub_1416BD090(*((_QWORD *)&v20 + 1), v21, &v28) )
    sub_141939040(
      (unsigned int)aADisplayImplem_0,
      55,
      (unsigned int)&v34,
      (unsigned int)&unk_1419E6AE0,
      (__int64)&off_1419EB798);
  *(_QWORD *)(a1 + 16) = v27;
  *(_OWORD *)a1 = v26;
  if ( (_QWORD)v20 )
    sub_140001660(*((_QWORD *)&v20 + 1), v20, 1);
  return a1;
}
