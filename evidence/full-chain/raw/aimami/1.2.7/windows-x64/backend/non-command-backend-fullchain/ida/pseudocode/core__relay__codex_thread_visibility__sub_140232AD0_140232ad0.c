// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140232ad0 | name sub_140232AD0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140232AD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+28h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-30h]
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-10h]
  __int128 v15; // [rsp+98h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+B8h] [rbp+38h] BYREF
  __int128 v19; // [rsp+C0h] [rbp+40h]
  __int128 v20; // [rsp+D0h] [rbp+50h]
  __int128 v21; // [rsp+E0h] [rbp+60h]
  __int128 v22; // [rsp+F0h] [rbp+70h]
  __int128 v23; // [rsp+100h] [rbp+80h]
  __int64 v24; // [rsp+110h] [rbp+90h]
  _QWORD v25[5]; // [rsp+118h] [rbp+98h] BYREF

  v25[2] = -2;
  if ( *(_QWORD *)(a2 + 48) == -1 )
  {
    v17 = a2;
    v18 = sub_1400015F0;
    sub_1416ABFD0(&v9, &unk_1419D72D6, &v17);
    result = v9;
    *(_OWORD *)(a1 + 80) = v14;
    *(_OWORD *)(a1 + 64) = v13;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = 10;
    goto LABEL_6;
  }
  sub_140282430(&v8);
  result = v11;
  if ( (_QWORD)v11 == -1 )
  {
    v24 = -1;
    v25[0] = v8;
    v17 = a2;
    v18 = sub_1400015F0;
    *(_QWORD *)&v19 = v25;
    *((_QWORD *)&v19 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v15, &unk_1419DE515, &v17);
    *(_QWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = 10;
    result = v25[0];
    if ( (v25[0] & 3) - 2 >= 2 && (v25[0] & 3) != 0 )
    {
      v18 = (__int64 (__fastcall *)())(v25[0] - 1LL);
      LOBYTE(v17) = 3;
      return sub_1416BCB00(&v18);
    }
  }
  else
  {
    if ( (_DWORD)v11 == 2 )
    {
      v24 = v11;
      v25[0] = a2;
      v25[1] = sub_1400015F0;
      sub_1416ABFD0(&v18, &unk_1419D72D6, v25);
      v17 = 10;
      *(_OWORD *)(a1 + 80) = v23;
      v5 = v19;
      v6 = v20;
      v7 = v21;
      *(_OWORD *)(a1 + 64) = v22;
      *(_OWORD *)(a1 + 48) = v7;
      *(_OWORD *)(a1 + 32) = v6;
      *(_OWORD *)(a1 + 16) = v5;
      *(_QWORD *)a1 = v17;
      result = (__int64)v18;
LABEL_6:
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
    *(_QWORD *)a1 = -1;
    if ( v8 )
      return sub_140001660(v9, v8, 1);
  }
  return result;
}
