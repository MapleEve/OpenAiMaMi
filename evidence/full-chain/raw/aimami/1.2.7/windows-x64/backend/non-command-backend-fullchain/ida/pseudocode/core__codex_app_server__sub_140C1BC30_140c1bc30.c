// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c1bc30 | name sub_140C1BC30
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_140C1BC30(__int128 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+58h] [rbp-28h]
  __int128 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+78h] [rbp-8h]
  __int128 v22; // [rsp+80h] [rbp+0h]
  __int128 v23; // [rsp+90h] [rbp+10h]
  __int128 v24; // [rsp+A0h] [rbp+20h]
  _QWORD v25[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v26; // [rsp+C0h] [rbp+40h]
  __int128 v27; // [rsp+D0h] [rbp+50h]
  __int64 v28; // [rsp+E0h] [rbp+60h]
  __int128 v29; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v30; // [rsp+100h] [rbp+80h]
  __int128 v31; // [rsp+110h] [rbp+90h]
  __int128 v32; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v33; // [rsp+130h] [rbp+B0h]
  __int64 v34; // [rsp+140h] [rbp+C0h]

  v34 = -2;
  sub_140C1BE00((unsigned int)&v18, a2, a3, a4, a5, a6, a7);
  v10 = v18;
  if ( v18 == -2 )
  {
    v11 = v19;
    *(__int128 *)((char *)a1 + 24) = v20;
    *(__int128 *)((char *)a1 + 8) = v11;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    v25[0] = a3;
    v25[1] = a4;
    if ( (_DWORD)v18 == -1 )
    {
      v33 = v21;
      v32 = v20;
      *(_QWORD *)&v29 = v25;
      *((_QWORD *)&v29 + 1) = sub_140186EE0;
      *(_QWORD *)&v30 = &v32;
      *((_QWORD *)&v30 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v16, &unk_141A3C1F8, &v29);
      v26 = v16;
      *(_QWORD *)&v27 = v17;
      if ( (_QWORD)v32 )
        sub_140001660(*((_QWORD *)&v32 + 1), v32, 1);
      v10 = 10;
    }
    else
    {
      v28 = v21;
      v27 = v20;
      v26 = v19;
      v29 = v22;
      v30 = v23;
      v31 = v24;
    }
    *(_QWORD *)a1 = v10;
    v12 = v27;
    *(__int128 *)((char *)a1 + 8) = v26;
    *(__int128 *)((char *)a1 + 24) = v12;
    *((_QWORD *)a1 + 5) = v28;
    v13 = v30;
    v14 = v31;
    a1[3] = v29;
    a1[4] = v13;
    a1[5] = v14;
  }
  return a1;
}
