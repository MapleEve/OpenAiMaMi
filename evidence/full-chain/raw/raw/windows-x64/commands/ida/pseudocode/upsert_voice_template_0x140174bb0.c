// module: codexmate_lib/commands
// addr: 0x140174bb0
// name: upsert_voice_template
// win 1.2.1 | tauri command handler = upsert_voice_template | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall upsert_voice_template(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE v7[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+238h] [rbp+1B8h]
  _BYTE v9[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v10; // [rsp+3C0h] [rbp+340h]
  int v11; // [rsp+3C8h] [rbp+348h]
  int v12; // [rsp+3CCh] [rbp+34Ch]
  __int128 v13; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v14; // [rsp+3E0h] [rbp+360h]
  __int64 v15; // [rsp+510h] [rbp+490h] BYREF
  __m256i v16; // [rsp+518h] [rbp+498h]
  const char *v17; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v18; // [rsp+658h] [rbp+5D8h]
  const char *v19; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v20; // [rsp+668h] [rbp+5E8h]
  _BYTE *v21; // [rsp+670h] [rbp+5F0h]
  __int128 *v22; // [rsp+678h] [rbp+5F8h]
  __int64 v23; // [rsp+680h] [rbp+600h]
  __int128 v24; // [rsp+7E0h] [rbp+760h] BYREF
  __int64 v25; // [rsp+7F0h] [rbp+770h]
  __m256i v26; // [rsp+800h] [rbp+780h] BYREF
  __m256i v27; // [rsp+820h] [rbp+7A0h] BYREF
  __m256i v28; // [rsp+840h] [rbp+7C0h] BYREF
  __m256i v29; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v30; // [rsp+880h] [rbp+800h]
  __m256i v31; // [rsp+888h] [rbp+808h] BYREF
  __int64 v32; // [rsp+8A8h] [rbp+828h]
  __int128 v33; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v34; // [rsp+8C0h] [rbp+840h]
  __int128 v35; // [rsp+8D0h] [rbp+850h] BYREF
  __int64 v36; // [rsp+8E0h] [rbp+860h]
  __int128 v37; // [rsp+8F0h] [rbp+870h] BYREF
  __int64 v38; // [rsp+900h] [rbp+880h]
  __int128 v39; // [rsp+910h] [rbp+890h] BYREF
  __int64 v40; // [rsp+920h] [rbp+8A0h]
  __int64 v41; // [rsp+928h] [rbp+8A8h]
  char v42; // [rsp+936h] [rbp+8B6h]
  char v43; // [rsp+937h] [rbp+8B7h]
  __int64 v44; // [rsp+938h] [rbp+8B8h]

  v44 = -2;
  sub_141684120(v7, a1, 520);
  sub_141684120(v9, a1 + 520, 400);
  v36 = *(_QWORD *)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v23 = 0;
  v17 = aUpsertVoiceTem;
  v18 = 21;
  v19 = aRepo;
  v20 = 4;
  v21 = v7;
  v22 = &v35;
  v43 = 1;
  v2 = sub_140003640((volatile void *)(v8 + 16));
  v3 = v2;
  if ( v2 )
  {
    v29.m256i_i64[1] = v2;
    v29.m256i_i8[0] = -1;
  }
  else
  {
    v43 = 1;
    sub_1416850A0(&v29, &v17, &v19);
    if ( v29.m256i_i8[0] != -1 )
    {
      v16 = v29;
      sub_141684120(&v17, a1 + 520, 360);
      v13 = *(_OWORD *)(a1 + 880);
      v14 = *(_QWORD *)(a1 + 896);
      v15 = 1;
      v43 = 0;
      sub_14047E370((unsigned int)&v17, v10, (unsigned int)&v15, (unsigned int)&v13, v11, v12);
      goto LABEL_17;
    }
    v3 = v29.m256i_i64[1];
  }
  v23 = 0;
  v17 = aUpsertVoiceTem;
  v18 = 21;
  v19 = aId_0;
  v20 = 2;
  v21 = v7;
  v22 = &v35;
  v43 = 1;
  sub_140973410(&v28, &v17);
  if ( v28.m256i_i8[0] == -1 )
  {
    v40 = v28.m256i_i64[3];
    v39 = *(_OWORD *)&v28.m256i_u64[1];
    v23 = 0;
    v17 = aUpsertVoiceTem;
    v18 = 21;
    v19 = aTitle_0;
    v20 = 5;
    v21 = v7;
    v22 = &v35;
    sub_1409757B0(&v27, &v17);
    LOBYTE(v41) = v27.m256i_i8[0] == -1;
    if ( v27.m256i_i8[0] == -1 )
    {
      v38 = v27.m256i_i64[3];
      v37 = *(_OWORD *)&v27.m256i_u64[1];
      v23 = 0;
      v17 = aUpsertVoiceTem;
      v18 = 21;
      v19 = aDescription_0;
      v20 = 11;
      v21 = v7;
      v22 = &v35;
      sub_1409757B0(&v26, &v17);
      LOBYTE(v41) = v26.m256i_i8[0] == -1;
      if ( v26.m256i_i8[0] == -1 )
      {
        v34 = v26.m256i_i64[3];
        v33 = *(_OWORD *)&v26.m256i_u64[1];
        v23 = 0;
        v17 = aUpsertVoiceTem;
        v18 = 21;
        v19 = aContent_1;
        v20 = 7;
        v21 = v7;
        v22 = &v35;
        sub_1409757B0(&v31, &v17);
        LOBYTE(v41) = v31.m256i_i8[0];
        if ( v31.m256i_i8[0] == -1 )
        {
          v25 = v31.m256i_i64[3];
          v24 = *(_OWORD *)&v31.m256i_u64[1];
          sub_140757670(&v13, v3, &v39, &v37, &v33, &v24);
          sub_141684120(&v17, a1 + 520, 400);
          if ( (_QWORD)v13 == -1 )
          {
            v42 = 1;
            sub_1401BDB30(&v31, (char *)&v13 + 8);
            v16 = v31;
            v15 = -1;
          }
          else
          {
            sub_141684120(&v15, &v13, 320);
          }
          v42 = 0;
          sub_140435A10(&v17, &v15);
          goto LABEL_17;
        }
        v16 = v31;
        sub_141684120(&v17, a1 + 520, 360);
        v13 = *(_OWORD *)(a1 + 880);
        v14 = *(_QWORD *)(a1 + 896);
        v15 = 1;
        sub_14047E370((unsigned int)&v17, v10, (unsigned int)&v15, (unsigned int)&v13, v11, v12);
        if ( (_QWORD)v33 )
          sub_140001660(*((_QWORD *)&v33 + 1), v33, 1);
      }
      else
      {
        v16 = v26;
        sub_141684120(&v17, a1 + 520, 360);
        v13 = *(_OWORD *)(a1 + 880);
        v14 = *(_QWORD *)(a1 + 896);
        v15 = 1;
        sub_14047E370((unsigned int)&v17, v10, (unsigned int)&v15, (unsigned int)&v13, v11, v12);
      }
      if ( (_QWORD)v37 )
        sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
    }
    else
    {
      v16 = v27;
      sub_141684120(&v17, a1 + 520, 360);
      v13 = *(_OWORD *)(a1 + 880);
      v14 = *(_QWORD *)(a1 + 896);
      v15 = 1;
      sub_14047E370((unsigned int)&v17, v10, (unsigned int)&v15, (unsigned int)&v13, v11, v12);
    }
    if ( (_QWORD)v39 != -1 && (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
  }
  else
  {
    v16 = v28;
    sub_141684120(&v17, a1 + 520, 360);
    v13 = *(_OWORD *)(a1 + 880);
    v14 = *(_QWORD *)(a1 + 896);
    v15 = 1;
    v43 = 0;
    sub_14047E370((unsigned int)&v17, v10, (unsigned int)&v15, (unsigned int)&v13, v11, v12);
  }
LABEL_17:
  if ( (_QWORD)v35 != -1 )
  {
    v4 = *((_QWORD *)&v35 + 1);
    v32 = v36;
    v41 = 0;
    v30 = *((_QWORD *)&v35 + 1);
    while ( v32 != v41 )
    {
      ++v41;
      v5 = v4 + 96;
      sub_1402C7520();
      v4 = v5;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140014270(v7);
}