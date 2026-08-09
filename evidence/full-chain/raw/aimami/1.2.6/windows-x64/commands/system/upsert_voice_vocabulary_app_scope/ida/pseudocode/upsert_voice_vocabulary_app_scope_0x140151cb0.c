// Pseudocode for upsert_voice_vocabulary_app_scope (EA: 0x140151cb0, size: 0x6cb)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140151CB0(__int64 a1)
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
  const char *v15; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v16; // [rsp+4A8h] [rbp+428h]
  const char *v17; // [rsp+4B0h] [rbp+430h] BYREF
  __int64 v18; // [rsp+4B8h] [rbp+438h]
  _BYTE *v19; // [rsp+4C0h] [rbp+440h]
  __int128 *v20; // [rsp+4C8h] [rbp+448h]
  __int64 v21; // [rsp+4D0h] [rbp+450h]
  __int64 v22; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v23; // [rsp+638h] [rbp+5B8h]
  __int128 v24; // [rsp+700h] [rbp+680h] BYREF
  __int64 v25; // [rsp+710h] [rbp+690h]
  __m256i v26; // [rsp+720h] [rbp+6A0h] BYREF
  __m256i v27; // [rsp+740h] [rbp+6C0h] BYREF
  __m256i v28; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v29; // [rsp+780h] [rbp+700h]
  __m256i v30; // [rsp+788h] [rbp+708h] BYREF
  __int64 v31; // [rsp+7A8h] [rbp+728h]
  __int128 v32; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v33; // [rsp+7C0h] [rbp+740h]
  __int128 v34; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v35; // [rsp+7E0h] [rbp+760h]
  __int128 v36; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v37; // [rsp+800h] [rbp+780h]
  __int64 v38; // [rsp+808h] [rbp+788h]
  char v39; // [rsp+816h] [rbp+796h]
  char v40; // [rsp+817h] [rbp+797h]
  __int64 v41; // [rsp+818h] [rbp+798h]

  v41 = -2;
  sub_14172B820(v7, a1, 520);
  sub_14172B820(v9, a1 + 520, 400);
  v35 = *(_QWORD *)(a1 + 936);
  v34 = *(_OWORD *)(a1 + 920);
  v21 = 0;
  v15 = aUpsertVoiceVoc;
  v16 = 33;
  v17 = aRepo;
  v18 = 4;
  v19 = v7;
  v20 = &v34;
  v40 = 1;
  v2 = sub_140029DD0((volatile void *)(v8 + 16));
  v3 = v2;
  if ( v2 )
  {
    v28.m256i_i64[1] = v2;
    v28.m256i_i8[0] = -1;
  }
  else
  {
    v40 = 1;
    sub_14172C620((__int64)&v28, (__int64)&v15, (__int64)&v17);
    if ( v28.m256i_i8[0] != -1 )
    {
      v23 = v28;
      sub_14172B820(&v15, a1 + 520, 360);
      v13 = *(_OWORD *)(a1 + 880);
      v14 = *(_QWORD *)(a1 + 896);
      v22 = 1;
      v40 = 0;
      sub_140AFFC30((__int64)&v15, v10, (__int64)&v22, &v13, v11, v12);
      goto LABEL_19;
    }
    v3 = v28.m256i_i64[1];
  }
  v21 = 0;
  v15 = aUpsertVoiceVoc;
  v16 = 33;
  v17 = aBundleid;
  v18 = 8;
  v19 = v7;
  v20 = &v34;
  v40 = 1;
  sub_140955980(&v27, &v15);
  if ( v27.m256i_i8[0] == -1 )
  {
    v37 = v27.m256i_i64[3];
    v36 = *(_OWORD *)&v27.m256i_u64[1];
    v21 = 0;
    v15 = aUpsertVoiceVoc;
    v16 = 33;
    v17 = aName_0;
    v18 = 4;
    v19 = v7;
    v20 = &v34;
    sub_140955980(&v26, &v15);
    LOBYTE(v38) = v26.m256i_i8[0] == -1;
    if ( v26.m256i_i8[0] == -1 )
    {
      v33 = v26.m256i_i64[3];
      v32 = *(_OWORD *)&v26.m256i_u64[1];
      v21 = 0;
      v15 = aUpsertVoiceVoc;
      v16 = 33;
      v17 = aPath_3;
      v18 = 4;
      v19 = v7;
      v20 = &v34;
      sub_140955980(&v30, &v15);
      LOBYTE(v38) = v30.m256i_i8[0];
      if ( v30.m256i_i8[0] == -1 )
      {
        v25 = v30.m256i_i64[3];
        v24 = *(_OWORD *)&v30.m256i_u64[1];
        sub_1409FE750(&v13, v3, &v36, &v32, &v24);
        sub_14172B820(&v15, a1 + 520, 400);
        if ( (_QWORD)v13 == -1 )
        {
          v39 = 1;
          sub_1401A80B0(&v30, (char *)&v13 + 8);
          v23 = v30;
          v22 = -1;
        }
        else
        {
          sub_14172B820(&v22, &v13, 208);
        }
        v39 = 0;
        sub_140A939C0(&v15, &v22);
        goto LABEL_19;
      }
      v23 = v30;
      sub_14172B820(&v15, a1 + 520, 360);
      v13 = *(_OWORD *)(a1 + 880);
      v14 = *(_QWORD *)(a1 + 896);
      v22 = 1;
      sub_140AFFC30((__int64)&v15, v10, (__int64)&v22, &v13, v11, v12);
      if ( (_QWORD)v32 )
        sub_140001660(*((_QWORD *)&v32 + 1), v32, 1);
    }
    else
    {
      v23 = v26;
      sub_14172B820(&v15, a1 + 520, 360);
      v13 = *(_OWORD *)(a1 + 880);
      v14 = *(_QWORD *)(a1 + 896);
      v22 = 1;
      sub_140AFFC30((__int64)&v15, v10, (__int64)&v22, &v13, v11, v12);
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
  }
  else
  {
    v23 = v27;
    sub_14172B820(&v15, a1 + 520, 360);
    v13 = *(_OWORD *)(a1 + 880);
    v14 = *(_QWORD *)(a1 + 896);
    v22 = 1;
    v40 = 0;
    sub_140AFFC30((__int64)&v15, v10, (__int64)&v22, &v13, v11, v12);
  }
LABEL_19:
  if ( (_QWORD)v34 != -1 )
  {
    v4 = *((_QWORD *)&v34 + 1);
    v31 = v35;
    v38 = 0;
    v29 = *((_QWORD *)&v34 + 1);
    while ( v31 != v38 )
    {
      ++v38;
      v5 = v4 + 96;
      sub_140401FB0();
      v4 = v5;
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8);
  }
  return sub_140043900(v7);
}
