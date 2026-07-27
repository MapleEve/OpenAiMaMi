// module: codexmate_lib/core/oauth_refresh
// addr: 0x1409e1220
// name: sub_1409E1220
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409E1220()
{
  unsigned int v0; // ebx
  __int64 v2[4]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v4; // [rsp+60h] [rbp-C8h]
  __int128 v5; // [rsp+70h] [rbp-B8h]
  __int128 v6; // [rsp+80h] [rbp-A8h]
  __int128 v7; // [rsp+90h] [rbp-98h]
  __int64 v8; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-80h]
  __int64 v10; // [rsp+B0h] [rbp-78h]
  __int64 v11; // [rsp+B8h] [rbp-70h]
  __int128 v12; // [rsp+C0h] [rbp-68h]
  __int128 v13; // [rsp+D0h] [rbp-58h]
  __int128 v14; // [rsp+E0h] [rbp-48h]
  __int128 v15; // [rsp+F0h] [rbp-38h]
  unsigned __int64 v16[5]; // [rsp+100h] [rbp-28h] BYREF

  LOBYTE(v0) = 1;
  if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) != 1 && (unsigned int)sub_140AECEB0(aCodex_0, 5) != 1 )
  {
    sub_1403FD520(&v8);
    if ( v8 != -1 )
    {
      v7 = v15;
      v6 = v14;
      v5 = v13;
      v4 = v12;
      v3[0] = v8;
      v3[1] = v9;
      v3[2] = v10;
      v3[3] = v11;
      LOBYTE(v0) = 1;
LABEL_6:
      sub_140984DB0(v3);
      return v0;
    }
    v2[0] = v10;
    v2[1] = v10;
    v2[2] = v9;
    v2[3] = v10 + 32 * v11;
    sub_1402CAFB0(v16, v2);
    sub_1403FCD20(v3, v16);
    LOBYTE(v0) = v3[0] != -1;
    if ( v3[0] != -1 )
      goto LABEL_6;
  }
  return v0;
}