// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140a5ffe0
// name: sub_140A5FFE0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140A5FFE0(__int64 a1, _QWORD **a2)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdi
  _QWORD *v7; // rcx
  __int128 v8; // xmm1
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h]
  _QWORD v15[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v16; // [rsp+70h] [rbp-10h]
  __int128 v17; // [rsp+80h] [rbp+0h]
  __int128 v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+A0h] [rbp+20h]
  __int128 v20; // [rsp+B0h] [rbp+30h]
  __int128 v21; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v22; // [rsp+D0h] [rbp+50h]
  __int64 v23; // [rsp+D8h] [rbp+58h]
  __int64 v24; // [rsp+E0h] [rbp+60h]
  _QWORD *v25; // [rsp+E8h] [rbp+68h]
  __int64 v26; // [rsp+F0h] [rbp+70h]

  v26 = -2;
  v24 = a1;
  v2 = a2 + 1;
  v25 = *a2;
  v3 = a2 + 2;
  v4 = -1;
  while ( 1 )
  {
    sub_140A67BD0(v15, v2);
    if ( v15[0] != -1 )
    {
      v23 = v15[0];
      v22 = v15[1];
      v14 = v18;
      v13 = v17;
      v12 = v16;
      v21 = v16;
      v19 = v17;
      v20 = v18;
      v6 = (__int64 *)v24;
      if ( *v25 != -1 )
        goto LABEL_11;
      goto LABEL_12;
    }
    if ( !*v3 )
      break;
    sub_14042B0E0(&v10, v3, 0);
    v5 = v11;
    v21 = v12;
    v20 = v14;
    v19 = v13;
    if ( v10 != -1 )
    {
      v6 = (__int64 *)v24;
      if ( v10 == -2 )
        goto LABEL_14;
      v23 = v10;
      v22 = v11;
      if ( *v25 == -1 )
        goto LABEL_12;
LABEL_11:
      sub_140982F30(v25);
LABEL_12:
      v7 = v25;
      *v25 = v23;
      v7[1] = v22;
      *((_OWORD *)v7 + 1) = v21;
      v8 = v20;
      *((_OWORD *)v7 + 2) = v19;
      *((_OWORD *)v7 + 3) = v8;
      v4 = -1;
      goto LABEL_14;
    }
    if ( v11 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v6 = (__int64 *)v24;
      *(_OWORD *)(v24 + 8) = v21;
      v4 = v5;
      goto LABEL_14;
    }
  }
  v6 = (__int64 *)v24;
LABEL_14:
  *v6 = v4;
  return v6;
}