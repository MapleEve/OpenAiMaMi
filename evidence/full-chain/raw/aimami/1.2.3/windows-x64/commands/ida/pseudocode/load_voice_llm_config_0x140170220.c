// module: codexmate_lib/commands
// addr: 0x140170220
// name: load_voice_llm_config
// win 1.2.1 | tauri command handler = load_voice_llm_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall load_voice_llm_config(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // r15
  __int128 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v12[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v13; // [rsp+3C0h] [rbp+340h]
  int v14; // [rsp+3C8h] [rbp+348h]
  int v15; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v16[50]; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v17; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v18; // [rsp+570h] [rbp+4F0h]
  __int64 v19; // [rsp+578h] [rbp+4F8h]
  __int64 v20; // [rsp+618h] [rbp+598h] BYREF
  __m256i v21; // [rsp+620h] [rbp+5A0h]
  __int128 v22; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v23; // [rsp+6E0h] [rbp+660h]
  __m256i v24; // [rsp+6E8h] [rbp+668h] BYREF
  __int64 v25; // [rsp+708h] [rbp+688h]
  __int128 v26; // [rsp+710h] [rbp+690h] BYREF
  __int64 v27; // [rsp+720h] [rbp+6A0h]
  __int64 v28; // [rsp+728h] [rbp+6A8h]
  __int64 v29; // [rsp+730h] [rbp+6B0h]
  char v30; // [rsp+73Eh] [rbp+6BEh]
  char v31; // [rsp+73Fh] [rbp+6BFh]
  __int64 v32; // [rsp+740h] [rbp+6C0h]

  v32 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v12, a1 + 520, 400);
  v27 = *(_QWORD *)(a1 + 936);
  v26 = *(_OWORD *)(a1 + 920);
  v16[6] = 0;
  v16[0] = aLoadVoiceLlmCo;
  v16[1] = 21;
  v16[2] = aProvider;
  v16[3] = 8;
  v16[4] = v11;
  v16[5] = &v26;
  v31 = 1;
  sub_1409757B0(&v24, v16);
  if ( v24.m256i_i8[0] == -1 )
  {
    v23 = v24.m256i_i64[3];
    v22 = *(_OWORD *)&v24.m256i_u64[1];
    v31 = 1;
    sub_140754FD0(&v17, &v22);
    sub_141684120(v16, a1 + 520, 400);
    if ( (_QWORD)v17 != -1 )
    {
      sub_141684120(&v20, &v17, 184);
LABEL_13:
      v30 = 0;
      sub_140434380(v16, &v20);
      goto LABEL_14;
    }
    v3 = *((_QWORD *)&v17 + 1);
    v4 = v18;
    *((_QWORD *)&v5 + 1) = v19;
    if ( v19 < 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    if ( v19 )
    {
      nullsub_1(v2);
      v6 = 1;
      v7 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v7 )
      {
LABEL_7:
        v28 = v4;
        v29 = v3;
        sub_1416C2D4B(v6, *((_QWORD *)&v5 + 1));
      }
      *(_QWORD *)&v5 = v7;
      sub_141684120(v7, v4, *((_QWORD *)&v5 + 1));
      if ( !v3 )
      {
LABEL_12:
        v21.m256i_i8[0] = 3;
        v21.m256i_i64[1] = *((_QWORD *)&v5 + 1);
        *(_OWORD *)&v21.m256i_u64[2] = v5;
        v20 = -1;
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)&v5 = 1;
      if ( !*((_QWORD *)&v17 + 1) )
        goto LABEL_12;
    }
    sub_140001660(v4, v3, 1);
    goto LABEL_12;
  }
  v21 = v24;
  sub_141684120(v16, a1 + 520, 360);
  v17 = *(_OWORD *)(a1 + 880);
  v18 = *(_QWORD *)(a1 + 896);
  v20 = 1;
  v31 = 0;
  sub_14047E370((unsigned int)v16, v13, (unsigned int)&v20, (unsigned int)&v17, v14, v15);
LABEL_14:
  if ( (_QWORD)v26 != -1 )
  {
    v8 = *((_QWORD *)&v26 + 1);
    v28 = v27;
    v29 = 0;
    v25 = *((_QWORD *)&v26 + 1);
    while ( v28 != v29 )
    {
      ++v29;
      v9 = v8 + 96;
      sub_1402C7520();
      v8 = v9;
    }
    if ( (_QWORD)v26 )
      sub_140001660(*((_QWORD *)&v26 + 1), 96 * v26, 8);
  }
  return sub_140014270(v11);
}