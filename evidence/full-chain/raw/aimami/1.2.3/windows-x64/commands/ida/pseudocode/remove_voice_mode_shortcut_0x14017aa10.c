// module: codexmate_lib/commands
// addr: 0x14017aa10
// name: remove_voice_mode_shortcut
// win 1.2.1 | tauri command handler = remove_voice_mode_shortcut | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall remove_voice_mode_shortcut(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v3; // kr00_16
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+238h] [rbp+1B8h] BYREF
  __m256i v13; // [rsp+240h] [rbp+1C0h]
  int v14; // [rsp+550h] [rbp+4D0h] BYREF
  __m256i v15; // [rsp+558h] [rbp+4D8h]
  _BYTE v16[384]; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v17; // [rsp+860h] [rbp+7E0h]
  int v18; // [rsp+868h] [rbp+7E8h]
  int v19; // [rsp+86Ch] [rbp+7ECh]
  __int64 v20; // [rsp+870h] [rbp+7F0h] BYREF
  __int64 v21; // [rsp+878h] [rbp+7F8h]
  const char *v22; // [rsp+880h] [rbp+800h]
  __int64 v23; // [rsp+888h] [rbp+808h]
  _BYTE *v24; // [rsp+890h] [rbp+810h]
  __int128 *v25; // [rsp+898h] [rbp+818h]
  __int64 v26; // [rsp+8A0h] [rbp+820h]
  _BYTE v27[152]; // [rsp+B88h] [rbp+B08h] BYREF
  __int128 v28; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v29; // [rsp+C30h] [rbp+BB0h]
  __int128 v30; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v31; // [rsp+C50h] [rbp+BD0h]
  __int64 v32; // [rsp+C58h] [rbp+BD8h]
  __m256i v33; // [rsp+C60h] [rbp+BE0h] BYREF
  __int128 v34; // [rsp+C80h] [rbp+C00h] BYREF
  __int64 v35; // [rsp+C90h] [rbp+C10h]
  __int64 v36; // [rsp+C98h] [rbp+C18h]
  __int64 v37; // [rsp+CA0h] [rbp+C20h]
  char v38; // [rsp+CAEh] [rbp+C2Eh]
  char v39; // [rsp+CAFh] [rbp+C2Fh]
  __int64 v40; // [rsp+CB0h] [rbp+C30h]

  v40 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v16, a1 + 520, 400);
  v35 = *(_QWORD *)(a1 + 936);
  v34 = *(_OWORD *)(a1 + 920);
  v26 = 0;
  v20 = (__int64)aRemoveVoiceMod;
  v21 = 26;
  v22 = aApp;
  v23 = 3;
  v24 = v11;
  v25 = &v34;
  v39 = 1;
  sub_1401C3650(&v14, &v20);
  if ( v14 == -1 )
  {
    v13 = v15;
    sub_141684120(&v20, a1 + 520, 360);
    *(_OWORD *)v33.m256i_i8 = *(_OWORD *)(a1 + 880);
    v33.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v12 = 1;
    v39 = 0;
    sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v12, (unsigned int)&v33, v18, v19);
    goto LABEL_16;
  }
  sub_141684120(v27, &v14, 152);
  v26 = 0;
  v20 = (__int64)aRemoveVoiceMod;
  v21 = 26;
  v22 = aModeid;
  v23 = 6;
  v24 = v11;
  v25 = &v34;
  sub_1409757B0(&v33, &v20);
  LOBYTE(v37) = v33.m256i_i8[0];
  if ( v33.m256i_i8[0] == -1 )
  {
    v31 = v33.m256i_i64[3];
    v30 = *(_OWORD *)&v33.m256i_u64[1];
    sub_140B95110(&v12, v27, &v30);
    sub_141684120(&v14, a1 + 520, 400);
    if ( (_DWORD)v12 != 2 )
    {
      sub_141684120(&v20, &v12, 792);
LABEL_15:
      v38 = 0;
      sub_1404353B0(&v14, &v20);
      goto LABEL_16;
    }
    v3 = *(_OWORD *)v13.m256i_i8;
    v4 = v13.m256i_i64[2];
    if ( v13.m256i_i64[2] < 0 )
    {
      v5 = 0;
      goto LABEL_8;
    }
    if ( v13.m256i_i64[2] )
    {
      nullsub_1(v2);
      v5 = 1;
      v6 = sub_140001650(v4, 1);
      if ( !v6 )
      {
LABEL_8:
        v36 = *((_QWORD *)&v3 + 1);
        v37 = v3;
        sub_1416C2D4B(v5, v4);
      }
      v7 = v6;
      sub_141684120(v6, *((_QWORD *)&v3 + 1), v4);
      if ( !(_QWORD)v3 )
        goto LABEL_14;
    }
    else
    {
      v7 = 1;
      if ( !v13.m256i_i64[0] )
        goto LABEL_14;
    }
    sub_140001660(*((_QWORD *)&v3 + 1), v3, 1);
LABEL_14:
    LOBYTE(v21) = 3;
    v22 = (const char *)v4;
    v23 = v7;
    v24 = (_BYTE *)v4;
    v20 = 2;
    goto LABEL_15;
  }
  v13 = v33;
  sub_141684120(&v20, a1 + 520, 360);
  v28 = *(_OWORD *)(a1 + 880);
  v29 = *(_QWORD *)(a1 + 896);
  v12 = 1;
  sub_14047E370((unsigned int)&v20, v17, (unsigned int)&v12, (unsigned int)&v28, v18, v19);
  v39 = 0;
  sub_140014150(v27);
LABEL_16:
  if ( (_QWORD)v34 != -1 )
  {
    v8 = *((_QWORD *)&v34 + 1);
    v36 = v35;
    v37 = 0;
    v32 = *((_QWORD *)&v34 + 1);
    while ( v36 != v37 )
    {
      ++v37;
      v9 = v8 + 96;
      sub_1402C7520();
      v8 = v9;
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8);
  }
  return sub_140014270(v11);
}