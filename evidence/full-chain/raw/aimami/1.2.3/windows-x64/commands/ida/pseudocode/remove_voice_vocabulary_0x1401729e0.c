// module: codexmate_lib/commands
// addr: 0x1401729e0
// name: remove_voice_vocabulary
// win 1.2.1 | tauri command handler = remove_voice_vocabulary | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall remove_voice_vocabulary(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int128 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  const char *v18; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v19; // [rsp+3D8h] [rbp+358h]
  const char *v20; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v21; // [rsp+3E8h] [rbp+368h]
  _BYTE *v22; // [rsp+3F0h] [rbp+370h]
  __int128 *v23; // [rsp+3F8h] [rbp+378h]
  __int64 v24; // [rsp+400h] [rbp+380h]
  __int128 v25; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v26; // [rsp+570h] [rbp+4F0h]
  __int64 v27; // [rsp+578h] [rbp+4F8h]
  __int64 v28; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v29; // [rsp+638h] [rbp+5B8h]
  __int128 v30; // [rsp+700h] [rbp+680h] BYREF
  __int64 v31; // [rsp+710h] [rbp+690h]
  __m256i v32; // [rsp+718h] [rbp+698h] BYREF
  __m256i v33; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v34; // [rsp+758h] [rbp+6D8h]
  __int128 v35; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v36; // [rsp+770h] [rbp+6F0h]
  __int64 v37; // [rsp+780h] [rbp+700h]
  __int64 v38; // [rsp+788h] [rbp+708h]
  char v39; // [rsp+796h] [rbp+716h]
  char v40; // [rsp+797h] [rbp+717h]
  __int64 v41; // [rsp+798h] [rbp+718h]

  v41 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v14, a1 + 520, 400);
  v36 = *(_QWORD *)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  v18 = aRemoveVoiceVoc_0;
  v19 = 23;
  v20 = aRepo;
  v21 = 4;
  v22 = v12;
  v23 = &v35;
  v40 = 1;
  v2 = sub_140003640((volatile void *)(v13 + 16));
  if ( !v2 )
  {
    v40 = 1;
    sub_1416850A0(&v32, &v18, &v20);
    if ( v32.m256i_i8[0] != -1 )
    {
      v29 = v32;
      sub_141684120(&v18, a1 + 520, 360);
      v25 = *(_OWORD *)(a1 + 880);
      v26 = *(_QWORD *)(a1 + 896);
      v28 = 1;
      v40 = 0;
      sub_14047E370((unsigned int)&v18, v15, (unsigned int)&v28, (unsigned int)&v25, v16, v17);
      goto LABEL_18;
    }
    v2 = v32.m256i_i64[1];
  }
  v24 = 0;
  v18 = aRemoveVoiceVoc_0;
  v19 = 23;
  v20 = aId_0;
  v21 = 2;
  v22 = v12;
  v23 = &v35;
  v40 = 1;
  sub_1409757B0(&v33, &v18);
  if ( v33.m256i_i8[0] == -1 )
  {
    v31 = v33.m256i_i64[3];
    v30 = *(_OWORD *)&v33.m256i_u64[1];
    v40 = 1;
    sub_140757ED0(&v25, v2, &v30);
    sub_141684120(&v18, a1 + 520, 400);
    if ( (_QWORD)v25 != -1 )
    {
      sub_141684120(&v28, &v25, 208);
LABEL_17:
      v39 = 0;
      sub_1404346B0(&v18, &v28);
      goto LABEL_18;
    }
    v4 = *((_QWORD *)&v25 + 1);
    v5 = v26;
    *((_QWORD *)&v6 + 1) = v27;
    if ( v27 < 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    if ( v27 )
    {
      nullsub_1(v3);
      v7 = 1;
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1);
      if ( !v8 )
      {
LABEL_11:
        v37 = v5;
        v38 = v4;
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1));
      }
      *(_QWORD *)&v6 = v8;
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1));
      if ( !v4 )
      {
LABEL_16:
        v29.m256i_i8[0] = 3;
        v29.m256i_i64[1] = *((_QWORD *)&v6 + 1);
        *(_OWORD *)&v29.m256i_u64[2] = v6;
        v28 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v6 = 1;
      if ( !*((_QWORD *)&v25 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v5, v4, 1);
    goto LABEL_16;
  }
  v29 = v33;
  sub_141684120(&v18, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v28 = 1;
  v40 = 0;
  sub_14047E370((unsigned int)&v18, v15, (unsigned int)&v28, (unsigned int)&v25, v16, v17);
LABEL_18:
  if ( (_QWORD)v35 != -1 )
  {
    v9 = *((_QWORD *)&v35 + 1);
    v37 = v36;
    v38 = 0;
    v34 = *((_QWORD *)&v35 + 1);
    while ( v37 != v38 )
    {
      ++v38;
      v10 = v9 + 96;
      sub_1402C7520();
      v9 = v10;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140014270(v12);
}