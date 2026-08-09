// Pseudocode for replace_voice_vocabulary_kind (EA: 0x140152de0, size: 0x7dd)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140152DE0(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE v8[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+238h] [rbp+1B8h]
  _BYTE v10[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v11; // [rsp+3C0h] [rbp+340h]
  int v12; // [rsp+3C8h] [rbp+348h]
  int v13; // [rsp+3CCh] [rbp+34Ch]
  __int128 v14; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v15; // [rsp+3E0h] [rbp+360h]
  __int64 v16; // [rsp+4A0h] [rbp+420h] BYREF
  __m256i v17; // [rsp+4A8h] [rbp+428h]
  const char *v18; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v19; // [rsp+578h] [rbp+4F8h]
  const char *v20; // [rsp+580h] [rbp+500h] BYREF
  __int64 v21; // [rsp+588h] [rbp+508h]
  _BYTE *v22; // [rsp+590h] [rbp+510h]
  __int128 *v23; // [rsp+598h] [rbp+518h]
  __int64 v24; // [rsp+5A0h] [rbp+520h]
  __int128 v25; // [rsp+700h] [rbp+680h] BYREF
  __int64 v26; // [rsp+710h] [rbp+690h]
  __m256i v27; // [rsp+720h] [rbp+6A0h] BYREF
  __m256i v28; // [rsp+740h] [rbp+6C0h] BYREF
  __m256i v29; // [rsp+760h] [rbp+6E0h] BYREF
  __m256i v30; // [rsp+780h] [rbp+700h] BYREF
  __int64 v31; // [rsp+7A0h] [rbp+720h]
  __m256i v32; // [rsp+7A8h] [rbp+728h] BYREF
  __int64 v33; // [rsp+7C8h] [rbp+748h]
  __int128 v34; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v35; // [rsp+7E0h] [rbp+760h]
  __int128 v36; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v37; // [rsp+800h] [rbp+780h]
  __int128 v38; // [rsp+810h] [rbp+790h] BYREF
  __int64 v39; // [rsp+820h] [rbp+7A0h]
  __int64 v40; // [rsp+830h] [rbp+7B0h]
  char v41; // [rsp+83Eh] [rbp+7BEh]
  char v42; // [rsp+83Fh] [rbp+7BFh]
  __int64 v43; // [rsp+840h] [rbp+7C0h]

  v43 = -2;
  sub_14172B820(v8, a1, 520);
  sub_14172B820(v10, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  v18 = aReplaceVoiceVo;
  v19 = 29;
  v20 = aRepo;
  v21 = 4;
  v22 = v8;
  v23 = &v36;
  v42 = 1;
  v3 = sub_140029DD0((volatile void *)(v9 + 16));
  v4 = v3;
  if ( v3 )
  {
    v30.m256i_i64[1] = v3;
    v30.m256i_i8[0] = -1;
  }
  else
  {
    v42 = 1;
    sub_14172C620((__int64)&v30, (__int64)&v18, (__int64)&v20);
    if ( v30.m256i_i8[0] != -1 )
    {
      v17 = v30;
      sub_14172B820(&v18, a1 + 520, 360);
      v14 = *(_OWORD *)(a1 + 880);
      v15 = *(_QWORD *)(a1 + 896);
      v16 = 1;
      v42 = 0;
      sub_140AFFC30((__int64)&v18, v11, (__int64)&v16, &v14, v12, v13);
      goto LABEL_21;
    }
    v4 = v30.m256i_i64[1];
  }
  v24 = 0;
  v18 = aReplaceVoiceVo;
  v19 = 29;
  v20 = aKind_3;
  v21 = 4;
  v22 = v8;
  v23 = &v36;
  v42 = 1;
  sub_1404F6A00(&v27, &v18);
  if ( v27.m256i_i8[0] == -1 )
  {
    LOBYTE(v1) = v27.m256i_i8[1];
    v24 = 0;
    v18 = aReplaceVoiceVo;
    v19 = 29;
    v20 = aAppbundleid;
    v21 = 11;
    v22 = v8;
    v23 = &v36;
    v42 = 1;
    sub_140952570(&v29, &v18);
    if ( v29.m256i_i8[0] == -1 )
    {
      v39 = v29.m256i_i64[3];
      v38 = *(_OWORD *)&v29.m256i_u64[1];
      v24 = 0;
      v18 = aReplaceVoiceVo;
      v19 = 29;
      v20 = aAppname;
      v21 = 7;
      v22 = v8;
      v23 = &v36;
      sub_140952570(&v28, &v18);
      LOBYTE(v40) = v28.m256i_i8[0] == -1;
      if ( v28.m256i_i8[0] == -1 )
      {
        v35 = v28.m256i_i64[3];
        v34 = *(_OWORD *)&v28.m256i_u64[1];
        v24 = 0;
        v18 = aReplaceVoiceVo;
        v19 = 29;
        v20 = aEntries;
        v21 = 7;
        v22 = v8;
        v23 = &v36;
        sub_14045B500(&v32, &v18);
        LOBYTE(v40) = v32.m256i_i8[0];
        if ( v32.m256i_i8[0] == -1 )
        {
          v26 = v32.m256i_i64[3];
          v25 = *(_OWORD *)&v32.m256i_u64[1];
          sub_1409FD2E0(&v14, v4, v1, &v38, &v34, &v25);
          sub_14172B820(&v18, a1 + 520, 400);
          if ( (_QWORD)v14 == -1 )
          {
            v41 = 1;
            sub_1401A80B0(&v32, (char *)&v14 + 8);
            v17 = v32;
            v16 = -1;
          }
          else
          {
            sub_14172B820(&v16, &v14, 208);
          }
          v41 = 0;
          sub_140A939C0(&v18, &v16);
          goto LABEL_21;
        }
        v17 = v32;
        sub_14172B820(&v18, a1 + 520, 360);
        v14 = *(_OWORD *)(a1 + 880);
        v15 = *(_QWORD *)(a1 + 896);
        v16 = 1;
        sub_140AFFC30((__int64)&v18, v11, (__int64)&v16, &v14, v12, v13);
        if ( (__int64)v34 > 0 )
          sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
      }
      else
      {
        v17 = v28;
        sub_14172B820(&v18, a1 + 520, 360);
        v14 = *(_OWORD *)(a1 + 880);
        v15 = *(_QWORD *)(a1 + 896);
        v16 = 1;
        sub_140AFFC30((__int64)&v18, v11, (__int64)&v16, &v14, v12, v13);
      }
      if ( (__int64)v38 > 0 )
        sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
    }
    else
    {
      v17 = v29;
      sub_14172B820(&v18, a1 + 520, 360);
      v14 = *(_OWORD *)(a1 + 880);
      v15 = *(_QWORD *)(a1 + 896);
      v16 = 1;
      v42 = 0;
      sub_140AFFC30((__int64)&v18, v11, (__int64)&v16, &v14, v12, v13);
    }
  }
  else
  {
    v17 = v27;
    sub_14172B820(&v18, a1 + 520, 360);
    v14 = *(_OWORD *)(a1 + 880);
    v15 = *(_QWORD *)(a1 + 896);
    v16 = 1;
    v42 = 0;
    sub_140AFFC30((__int64)&v18, v11, (__int64)&v16, &v14, v12, v13);
  }
LABEL_21:
  if ( (_QWORD)v36 != -1 )
  {
    v5 = *((_QWORD *)&v36 + 1);
    v33 = v37;
    v40 = 0;
    v31 = *((_QWORD *)&v36 + 1);
    while ( v33 != v40 )
    {
      ++v40;
      v6 = v5 + 96;
      sub_140401FB0();
      v5 = v6;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140043900(v8);
}
