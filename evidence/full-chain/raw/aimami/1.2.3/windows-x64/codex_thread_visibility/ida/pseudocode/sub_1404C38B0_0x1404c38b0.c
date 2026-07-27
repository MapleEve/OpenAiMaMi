// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404c38b0
// name: sub_1404C38B0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404C38B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 result; // rax
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]
  __int128 v22; // [rsp+80h] [rbp+0h]
  __int128 v23; // [rsp+90h] [rbp+10h]
  __int128 v24; // [rsp+A0h] [rbp+20h]
  _QWORD v25[4]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v26; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v27; // [rsp+E0h] [rbp+60h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int128 v30; // [rsp+110h] [rbp+90h]
  __int128 v31; // [rsp+120h] [rbp+A0h]
  _QWORD v32[2]; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v33; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v34; // [rsp+158h] [rbp+D8h]
  _QWORD *v35; // [rsp+160h] [rbp+E0h]
  __int64 v36; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v37; // [rsp+170h] [rbp+F0h]
  __int64 v38; // [rsp+178h] [rbp+F8h]
  __int64 v39; // [rsp+180h] [rbp+100h]

  v39 = -2;
  v35 = a1;
  v32[0] = a2;
  v32[1] = a3;
  v36 = 0;
  v37 = 8;
  v38 = 0;
  for ( i = a4 + (a5 << 7); a4 != i; i = v9 )
  {
    v9 = i - 128;
    sub_1404BDFD0((__int64)&v19, (_QWORD *)(i - 128));
    if ( (_DWORD)v19 != -1 )
    {
      v31 = v24;
      v30 = v23;
      v29 = v22;
      v28 = v21;
      v27 = v20;
      v26 = v19;
      v18 = *(_OWORD *)(i - 120);
      v25[0] = &v18;
      v25[1] = sub_14148F3A0;
      v25[2] = &v26;
      v25[3] = sub_140B036A0;
      sub_14149C0F0(&v33, &unk_141757B59, v25);
      v10 = v38;
      if ( v38 == v36 )
        sub_141689AB0(&v36);
      v7 = v37;
      v8 = 3 * v10;
      *(_QWORD *)(v37 + 8 * v8 + 16) = v34;
      *(_OWORD *)(v7 + 8 * v8) = v33;
      v38 = v10 + 1;
      sub_14043E650(&v26);
    }
  }
  if ( v38 )
  {
    sub_140440300((unsigned int)&v26, v37, v38, (unsigned int)&unk_141758CC9, 3);
    *(_QWORD *)&v20 = v27;
    v19 = v26;
    *(_QWORD *)&v26 = v32;
    *((_QWORD *)&v26 + 1) = sub_14041F680;
    *(_QWORD *)&v27 = &v19;
    *((_QWORD *)&v27 + 1) = sub_1400015F0;
    sub_14149C0F0(&v16, &unk_14175CA1B, &v26);
    if ( (_QWORD)v19 )
      sub_140001660(*((_QWORD *)&v19 + 1), v19, 1);
    v11 = v35;
    v35[3] = v17;
    *(_OWORD *)(v11 + 1) = v16;
    v12 = v38;
    *v11 = 10;
    if ( v12 )
    {
      v13 = (_QWORD *)(v37 + 8);
      do
      {
        v14 = *(v13 - 1);
        if ( v14 )
          sub_140001660(*v13, v14, 1);
        v13 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
    *v35 = -1;
  }
  result = v36;
  if ( v36 )
    return sub_140001660(v37, 24 * v36, 8);
  return result;
}