// module: codexmate_lib/commands
// addr: 0x1401859d0
// name: remove_voice_history_entry
// win 1.2.1 | tauri command handler = remove_voice_history_entry | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall remove_voice_history_entry(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r15
  __int128 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  _BYTE v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  const char *v22; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v23; // [rsp+3D8h] [rbp+358h]
  const char *v24; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v25; // [rsp+3E8h] [rbp+368h]
  _BYTE *v26; // [rsp+3F0h] [rbp+370h]
  __int128 *v27; // [rsp+3F8h] [rbp+378h]
  __int64 v28; // [rsp+400h] [rbp+380h]
  __int128 v29; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v30; // [rsp+570h] [rbp+4F0h]
  __int64 v31; // [rsp+578h] [rbp+4F8h]
  __int64 v32; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v33; // [rsp+638h] [rbp+5B8h]
  __int128 v34; // [rsp+700h] [rbp+680h] BYREF
  __int64 v35; // [rsp+710h] [rbp+690h]
  __m256i v36; // [rsp+718h] [rbp+698h] BYREF
  __m256i v37; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v38; // [rsp+758h] [rbp+6D8h]
  __int128 v39; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v40; // [rsp+770h] [rbp+6F0h]
  __int64 v41; // [rsp+780h] [rbp+700h]
  __int64 v42; // [rsp+788h] [rbp+708h]
  char v43; // [rsp+796h] [rbp+716h]
  char v44; // [rsp+797h] [rbp+717h]
  __int64 v45; // [rsp+798h] [rbp+718h]

  v45 = -2;
  sub_141684120(v16, a1, 520);
  sub_141684120(v18, a1 + 520, 400);
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aRemoveVoiceHis;
  v23 = 26;
  v24 = aRepo;
  v25 = 4;
  v26 = v16;
  v27 = &v39;
  v44 = 1;
  v2 = sub_140003640((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    v44 = 1;
    sub_1416850A0(&v36, &v22, &v24);
    if ( v36.m256i_i8[0] != -1 )
    {
      v33 = v36;
      sub_141684120(&v22, a1 + 520, 360);
      v29 = *(_OWORD *)(a1 + 880);
      v30 = *(_QWORD *)(a1 + 896);
      v32 = 1;
      v44 = 0;
      sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v32, (unsigned int)&v29, v20, v21);
      goto LABEL_18;
    }
    v2 = v36.m256i_i64[1];
  }
  v28 = 0;
  v22 = aRemoveVoiceHis;
  v23 = 26;
  v24 = aId_0;
  v25 = 2;
  v26 = v16;
  v27 = &v39;
  v44 = 1;
  sub_1409757B0(&v37, &v22);
  if ( v37.m256i_i8[0] == -1 )
  {
    v35 = v37.m256i_i64[3];
    v34 = *(_OWORD *)&v37.m256i_u64[1];
    v44 = 1;
    sub_140758E80(&v29, v2, &v34);
    sub_141684120(&v22, a1 + 520, 400);
    if ( (_QWORD)v29 != -1 )
    {
      sub_141684120(&v32, &v29, 208);
LABEL_17:
      v43 = 0;
      sub_1404346B0(&v22, &v32);
      goto LABEL_18;
    }
    v7 = *((_QWORD *)&v29 + 1);
    v8 = v30;
    *((_QWORD *)&v9 + 1) = v31;
    if ( v31 < 0 )
    {
      v10 = 0;
      goto LABEL_11;
    }
    if ( v31 )
    {
      nullsub_1(v6);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
      if ( !v11 )
      {
LABEL_11:
        v41 = v8;
        v42 = v7;
        sub_1416C2D4B(v10, *((_QWORD *)&v9 + 1));
      }
      *(_QWORD *)&v9 = v11;
      sub_141684120(v11, v8, *((_QWORD *)&v9 + 1));
      if ( !v7 )
      {
LABEL_16:
        v33.m256i_i8[0] = 3;
        v33.m256i_i64[1] = *((_QWORD *)&v9 + 1);
        *(_OWORD *)&v33.m256i_u64[2] = v9;
        v32 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v9 = 1;
      if ( !*((_QWORD *)&v29 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v8, v7, 1);
    goto LABEL_16;
  }
  v33 = v37;
  sub_141684120(&v22, a1 + 520, 360);
  v29 = *(_OWORD *)(a1 + 880);
  v30 = *(_QWORD *)(a1 + 896);
  v32 = 1;
  v44 = 0;
  sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v32, (unsigned int)&v29, v20, v21);
LABEL_18:
  if ( (_QWORD)v39 != -1 )
  {
    v12 = *((_QWORD *)&v39 + 1);
    v41 = v40;
    v42 = 0;
    v38 = *((_QWORD *)&v39 + 1);
    while ( v41 != v42 )
    {
      ++v42;
      v13 = v12 + 96;
      sub_1402C7520(v12, v3, v4, v5, v15);
      v12 = v13;
    }
    if ( (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140014270(v16);
}