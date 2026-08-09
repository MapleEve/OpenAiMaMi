// Pseudocode for upsert_voice_vocabulary (EA: 0x140154050, size: 0xbaa)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140154050(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int8 v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE v8[512]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+248h] [rbp+1C8h]
  __int128 v10; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v11; // [rsp+260h] [rbp+1E0h]
  _BYTE v12[360]; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v13; // [rsp+528h] [rbp+4A8h]
  __int64 v14; // [rsp+538h] [rbp+4B8h]
  __int64 v15; // [rsp+540h] [rbp+4C0h]
  int v16; // [rsp+548h] [rbp+4C8h]
  int v17; // [rsp+54Ch] [rbp+4CCh]
  __int64 v18; // [rsp+550h] [rbp+4D0h] BYREF
  __m256i v19; // [rsp+558h] [rbp+4D8h]
  __int128 v20; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v21; // [rsp+6D0h] [rbp+650h]
  __m256i v22; // [rsp+6E0h] [rbp+660h] BYREF
  __m256i v23; // [rsp+700h] [rbp+680h] BYREF
  __m256i v24; // [rsp+720h] [rbp+6A0h] BYREF
  __m256i v25; // [rsp+740h] [rbp+6C0h] BYREF
  __m256i v26; // [rsp+760h] [rbp+6E0h] BYREF
  __m256i v27; // [rsp+780h] [rbp+700h] BYREF
  const char *v28; // [rsp+7A0h] [rbp+720h] BYREF
  __int64 v29; // [rsp+7A8h] [rbp+728h]
  const char *v30; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v31; // [rsp+7B8h] [rbp+738h]
  _BYTE *v32; // [rsp+7C0h] [rbp+740h]
  __int128 *v33; // [rsp+7C8h] [rbp+748h]
  __int64 v34; // [rsp+7D0h] [rbp+750h]
  __m256i v35; // [rsp+930h] [rbp+8B0h] BYREF
  __int64 v36; // [rsp+950h] [rbp+8D0h]
  __m256i v37; // [rsp+958h] [rbp+8D8h] BYREF
  __int64 v38; // [rsp+978h] [rbp+8F8h]
  __int128 v39; // [rsp+980h] [rbp+900h] BYREF
  __int64 v40; // [rsp+990h] [rbp+910h]
  __int128 v41; // [rsp+9A0h] [rbp+920h] BYREF
  __int64 v42; // [rsp+9B0h] [rbp+930h]
  __int128 v43; // [rsp+9C0h] [rbp+940h] BYREF
  __int64 v44; // [rsp+9D0h] [rbp+950h]
  __int128 v45; // [rsp+9E0h] [rbp+960h] BYREF
  __int64 v46; // [rsp+9F0h] [rbp+970h]
  __int128 v47; // [rsp+A00h] [rbp+980h] BYREF
  __int64 v48; // [rsp+A10h] [rbp+990h]
  __int128 v49; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v50; // [rsp+A30h] [rbp+9B0h]
  __int64 v51; // [rsp+A38h] [rbp+9B8h]
  char v52; // [rsp+A46h] [rbp+9C6h]
  char v53; // [rsp+A47h] [rbp+9C7h]
  __int64 v54; // [rsp+A48h] [rbp+9C8h]

  v54 = -2;
  sub_14172B820(v8, a1, 520);
  sub_14172B820(v12, a1 + 520, 400);
  v42 = *(_QWORD *)(a1 + 936);
  v41 = *(_OWORD *)(a1 + 920);
  v34 = 0;
  v28 = aUpsertVoiceVoc_0;
  v29 = 23;
  v30 = aRepo;
  v31 = 4;
  v32 = v8;
  v33 = &v41;
  v53 = 1;
  v2 = sub_140029DD0((volatile void *)(v9 + 16));
  v3 = v2;
  if ( v2 )
  {
    v35.m256i_i64[1] = v2;
    v35.m256i_i8[0] = -1;
  }
  else
  {
    v53 = 1;
    sub_14172C620((__int64)&v35, (__int64)&v28, (__int64)&v30);
    if ( v35.m256i_i8[0] != -1 )
    {
      v19 = v35;
      sub_14172B820(&v28, a1 + 520, 360);
      v10 = *(_OWORD *)(a1 + 880);
      v11 = *(_QWORD *)(a1 + 896);
      v18 = 1;
      v53 = 0;
      sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
      goto LABEL_26;
    }
    v3 = v35.m256i_i64[1];
  }
  v34 = 0;
  v28 = aUpsertVoiceVoc_0;
  v29 = 23;
  v30 = aId_0;
  v31 = 2;
  v32 = v8;
  v33 = &v41;
  v53 = 1;
  sub_140952570(&v27, &v28);
  if ( v27.m256i_i8[0] == -1 )
  {
    v50 = v27.m256i_i64[3];
    v49 = *(_OWORD *)&v27.m256i_u64[1];
    v34 = 0;
    v28 = aUpsertVoiceVoc_0;
    v29 = 23;
    v30 = aSource;
    v31 = 6;
    v32 = v8;
    v33 = &v41;
    sub_140955980(&v26, &v28);
    LOBYTE(v51) = v26.m256i_i8[0] == -1;
    if ( v26.m256i_i8[0] == -1 )
    {
      v48 = v26.m256i_i64[3];
      v47 = *(_OWORD *)&v26.m256i_u64[1];
      v34 = 0;
      v28 = aUpsertVoiceVoc_0;
      v29 = 23;
      v30 = aReplacement;
      v31 = 11;
      v32 = v8;
      v33 = &v41;
      sub_140955980(&v25, &v28);
      LOBYTE(v51) = v25.m256i_i8[0] == -1;
      if ( v25.m256i_i8[0] == -1 )
      {
        v46 = v25.m256i_i64[3];
        v45 = *(_OWORD *)&v25.m256i_u64[1];
        v34 = 0;
        v28 = aUpsertVoiceVoc_0;
        v29 = 23;
        v30 = aKind_3;
        v31 = 4;
        v32 = v8;
        v33 = &v41;
        sub_1404F6A00(&v22, &v28);
        LOBYTE(v51) = v22.m256i_i8[0] == -1;
        if ( v22.m256i_i8[0] == -1 )
        {
          v4 = v22.m256i_i8[1];
          v34 = 0;
          v28 = aUpsertVoiceVoc_0;
          v29 = 23;
          v30 = aAppbundleid;
          v31 = 11;
          v32 = v8;
          v33 = &v41;
          sub_140952570(&v24, &v28);
          LOBYTE(v51) = v24.m256i_i8[0] == -1;
          if ( v24.m256i_i8[0] == -1 )
          {
            v44 = v24.m256i_i64[3];
            v43 = *(_OWORD *)&v24.m256i_u64[1];
            v34 = 0;
            v28 = aUpsertVoiceVoc_0;
            v29 = 23;
            v30 = aAppname;
            v31 = 7;
            v32 = v8;
            v33 = &v41;
            sub_140952570(&v23, &v28);
            LOBYTE(v51) = v23.m256i_i8[0] == -1;
            if ( v23.m256i_i8[0] == -1 )
            {
              v40 = v23.m256i_i64[3];
              v39 = *(_OWORD *)&v23.m256i_u64[1];
              v34 = 0;
              v28 = aUpsertVoiceVoc_0;
              v29 = 23;
              v30 = aNotes;
              v31 = 5;
              v32 = v8;
              v33 = &v41;
              sub_140952570(&v37, &v28);
              LOBYTE(v51) = v37.m256i_i8[0];
              if ( v37.m256i_i8[0] == -1 )
              {
                v21 = v37.m256i_i64[3];
                v20 = *(_OWORD *)&v37.m256i_u64[1];
                sub_1409FB8A0(&v10, v3, &v49, &v47, &v45, v4, &v43, &v39, &v20);
                sub_14172B820(&v28, v12, 400);
                if ( (_QWORD)v10 == -1 )
                {
                  v52 = 1;
                  sub_1401A80B0(&v37, (char *)&v10 + 8);
                  v19 = v37;
                  v18 = -1;
                }
                else
                {
                  sub_14172B820(&v18, &v10, 368);
                }
                v52 = 0;
                sub_140A95050(&v28, &v18);
                goto LABEL_26;
              }
              v19 = v37;
              sub_14172B820(&v28, v12, 360);
              v10 = v13;
              v11 = v14;
              v18 = 1;
              sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
              if ( (__int64)v39 > 0 )
                sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
            }
            else
            {
              v19 = v23;
              sub_14172B820(&v28, v12, 360);
              v10 = v13;
              v11 = v14;
              v18 = 1;
              sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
            }
            if ( (__int64)v43 > 0 )
              sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
          }
          else
          {
            v19 = v24;
            sub_14172B820(&v28, v12, 360);
            v10 = v13;
            v11 = v14;
            v18 = 1;
            sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
          }
        }
        else
        {
          v19 = v22;
          sub_14172B820(&v28, a1 + 520, 360);
          v10 = *(_OWORD *)(a1 + 880);
          v11 = *(_QWORD *)(a1 + 896);
          v18 = 1;
          sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
        }
        if ( (_QWORD)v45 )
          sub_140001660(*((_QWORD *)&v45 + 1), v45, 1);
      }
      else
      {
        v19 = v25;
        sub_14172B820(&v28, a1 + 520, 360);
        v10 = *(_OWORD *)(a1 + 880);
        v11 = *(_QWORD *)(a1 + 896);
        v18 = 1;
        sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
      }
      if ( (_QWORD)v47 )
        sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
    }
    else
    {
      v19 = v26;
      sub_14172B820(&v28, a1 + 520, 360);
      v10 = *(_OWORD *)(a1 + 880);
      v11 = *(_QWORD *)(a1 + 896);
      v18 = 1;
      sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
    }
    if ( (__int64)v49 > 0 )
      sub_140001660(*((_QWORD *)&v49 + 1), v49, 1);
  }
  else
  {
    v19 = v27;
    sub_14172B820(&v28, a1 + 520, 360);
    v10 = *(_OWORD *)(a1 + 880);
    v11 = *(_QWORD *)(a1 + 896);
    v18 = 1;
    v53 = 0;
    sub_140AFFC30((__int64)&v28, v15, (__int64)&v18, &v10, v16, v17);
  }
LABEL_26:
  if ( (_QWORD)v41 != -1 )
  {
    v5 = *((_QWORD *)&v41 + 1);
    v38 = v42;
    v51 = 0;
    v36 = *((_QWORD *)&v41 + 1);
    while ( v38 != v51 )
    {
      ++v51;
      v6 = v5 + 96;
      sub_140401FB0();
      v5 = v6;
    }
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8);
  }
  return sub_140043900(v8);
}
