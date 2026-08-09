// Pseudocode for resolve_voice_vocabulary_app_info (EA: 0x140151740, size: 0x36c)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140151740(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // r15
  __int128 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  int v18; // [rsp+3C8h] [rbp+348h]
  int v19; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v20[50]; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v21; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v22; // [rsp+570h] [rbp+4F0h]
  __int64 v23; // [rsp+578h] [rbp+4F8h]
  __int64 v24; // [rsp+5F8h] [rbp+578h] BYREF
  __m256i v25; // [rsp+600h] [rbp+580h]
  __int128 v26; // [rsp+690h] [rbp+610h] BYREF
  __int64 v27; // [rsp+6A0h] [rbp+620h]
  __m256i v28; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v29; // [rsp+6C8h] [rbp+648h]
  __int128 v30; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v31; // [rsp+6E0h] [rbp+660h]
  __int64 v32; // [rsp+6E8h] [rbp+668h]
  __int64 v33; // [rsp+6F0h] [rbp+670h]
  char v34; // [rsp+6FEh] [rbp+67Eh]
  char v35; // [rsp+6FFh] [rbp+67Fh]
  __int64 v36; // [rsp+700h] [rbp+680h]

  v36 = -2;
  sub_14172B820(v15, a1, 520);
  sub_14172B820(v16, a1 + 520, 400);
  v31 = *(_QWORD *)(a1 + 936);
  v30 = *(_OWORD *)(a1 + 920);
  v20[6] = 0;
  v20[0] = aResolveVoiceVo;
  v20[1] = 33;
  v20[2] = aPath_3;
  v20[3] = 4;
  v20[4] = v15;
  v20[5] = &v30;
  v35 = 1;
  sub_140955980(&v28, v20);
  if ( v28.m256i_i8[0] == -1 )
  {
    v27 = v28.m256i_i64[3];
    v26 = *(_OWORD *)&v28.m256i_u64[1];
    v35 = 1;
    sub_1409FE140(&v21, &v26);
    sub_14172B820(v20, a1 + 520, 400);
    if ( (_QWORD)v21 != -1 )
    {
      sub_14172B820(&v24, &v21, 152);
LABEL_13:
      v34 = 0;
      sub_140A949F0(v20, &v24);
      goto LABEL_14;
    }
    v6 = *((_QWORD *)&v21 + 1);
    v7 = v22;
    *((_QWORD *)&v8 + 1) = v23;
    if ( v23 < 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    if ( v23 )
    {
      nullsub_1(v3, v2, v4, v5, v14);
      v9 = 1;
      v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v10 )
      {
LABEL_7:
        v32 = v7;
        v33 = v6;
        sub_14176E54B(v9, *((_QWORD *)&v8 + 1));
      }
      *(_QWORD *)&v8 = v10;
      sub_14172B820(v10, v7, *((_QWORD *)&v8 + 1));
      if ( !v6 )
      {
LABEL_12:
        v25.m256i_i8[0] = 3;
        v25.m256i_i64[1] = *((_QWORD *)&v8 + 1);
        *(_OWORD *)&v25.m256i_u64[2] = v8;
        v24 = -1;
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)&v8 = 1;
      if ( !*((_QWORD *)&v21 + 1) )
        goto LABEL_12;
    }
    sub_140001660(v7, v6, 1);
    goto LABEL_12;
  }
  v25 = v28;
  sub_14172B820(v20, a1 + 520, 360);
  v21 = *(_OWORD *)(a1 + 880);
  v22 = *(_QWORD *)(a1 + 896);
  v24 = 1;
  v35 = 0;
  sub_140AFFC30((__int64)v20, v17, (__int64)&v24, &v21, v18, v19);
LABEL_14:
  if ( (_QWORD)v30 != -1 )
  {
    v11 = *((_QWORD *)&v30 + 1);
    v32 = v31;
    v33 = 0;
    v29 = *((_QWORD *)&v30 + 1);
    while ( v32 != v33 )
    {
      ++v33;
      v12 = v11 + 96;
      sub_140401FB0();
      v11 = v12;
    }
    if ( (_QWORD)v30 )
      sub_140001660(*((_QWORD *)&v30 + 1), 96 * v30, 8);
  }
  return sub_140043900(v15);
}
