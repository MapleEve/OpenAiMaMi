// Pseudocode for show_voice_search_overlay (EA: 0x140158250, size: 0x67b)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140158250(__int64 a1)
{
  __int64 v2; // rsi
  const char *v3; // r12
  const char *v4; // rbx
  __int64 v5; // r14
  const char *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[520]; // [rsp+38h] [rbp-48h] BYREF
  char v20[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v21; // [rsp+3C0h] [rbp+340h]
  int v22; // [rsp+3C8h] [rbp+348h]
  int v23; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v24[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v25; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v26; // [rsp+470h] [rbp+3F0h]
  const char *v27; // [rsp+478h] [rbp+3F8h]
  _BYTE v28[24]; // [rsp+480h] [rbp+400h]
  __int128 v29; // [rsp+498h] [rbp+418h]
  __int128 v30; // [rsp+4A8h] [rbp+428h]
  __int64 v31; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v32; // [rsp+600h] [rbp+580h]
  _OWORD v33[8]; // [rsp+610h] [rbp+590h]
  __int128 v34; // [rsp+690h] [rbp+610h] BYREF
  __int64 v35; // [rsp+6A0h] [rbp+620h]
  __int128 v36; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v37; // [rsp+6C0h] [rbp+640h]
  __m256i v38; // [rsp+6D0h] [rbp+650h] BYREF
  _BYTE v39[48]; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v40; // [rsp+720h] [rbp+6A0h] BYREF
  const char *v41; // [rsp+730h] [rbp+6B0h]
  __int64 v42; // [rsp+738h] [rbp+6B8h]
  const char *v43; // [rsp+740h] [rbp+6C0h]
  const char *v44; // [rsp+748h] [rbp+6C8h]
  char v45; // [rsp+756h] [rbp+6D6h]
  char v46; // [rsp+757h] [rbp+6D7h]
  __int64 v47; // [rsp+758h] [rbp+6D8h]

  v47 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v20, a1 + 520, 400);
  v41 = *(const char **)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  *(_QWORD *)&v29 = 0;
  v25 = aShowVoiceSearc;
  v26 = 25;
  v27 = aApp;
  *(_QWORD *)v28 = 3;
  *(_QWORD *)&v28[8] = v19;
  *(_QWORD *)&v28[16] = &v40;
  v46 = 1;
  sub_1401A9630((__int64)&v31, (__int64)&v25);
  if ( (_DWORD)v31 == -1 )
  {
    *(_OWORD *)&v39[24] = v33[0];
    *(_OWORD *)&v39[8] = v32;
    sub_14172B820(&v25, a1 + 520, 360);
    *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
    v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v39 = 1;
    v46 = 0;
    sub_140AFFC30((__int64)&v25, v21, (__int64)v39, (__int128 *)v38.m256i_i8, v22, v23);
    goto LABEL_22;
  }
  sub_14172B820(v24, &v31, 152);
  *(_QWORD *)&v29 = 0;
  v25 = aShowVoiceSearc;
  v26 = 25;
  v27 = aQuery;
  *(_QWORD *)v28 = 5;
  *(_QWORD *)&v28[8] = v19;
  *(_QWORD *)&v28[16] = &v40;
  sub_140955980(&v36, &v25);
  LOBYTE(v43) = (_BYTE)v36 == 0xFF;
  if ( (_BYTE)v36 != 0xFF )
  {
    *(_OWORD *)&v39[24] = v37;
    *(_OWORD *)&v39[8] = v36;
    sub_14172B820(&v25, a1 + 520, 360);
    *(_OWORD *)v38.m256i_i8 = *(_OWORD *)(a1 + 880);
    v38.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v39 = 1;
    sub_140AFFC30((__int64)&v25, v21, (__int64)v39, (__int128 *)v38.m256i_i8, v22, v23);
    v46 = 0;
    sub_1400437E0(v24);
    goto LABEL_22;
  }
  v44 = *((const char **)&v36 + 1);
  v3 = *((const char **)&v37 + 1);
  v42 = v37;
  *(_QWORD *)&v29 = 0;
  v25 = aShowVoiceSearc;
  v26 = 25;
  v27 = aOutput;
  *(_QWORD *)v28 = 6;
  *(_QWORD *)&v28[8] = v19;
  *(_QWORD *)&v28[16] = &v40;
  sub_140955980(&v38, &v25);
  LOBYTE(v43) = v38.m256i_i8[0];
  if ( v38.m256i_i8[0] == -1 )
  {
    v25 = v44;
    v26 = v42;
    v27 = v3;
    *(_OWORD *)v28 = *(_OWORD *)&v38.m256i_u64[1];
    *(_QWORD *)&v28[16] = v38.m256i_i64[3];
    sub_140B60D40(v24, &v25);
    sub_1404D1D00(&v25);
    v4 = v25;
    v5 = v26;
    v6 = v27;
    v7 = *(_QWORD *)v28;
    *(_OWORD *)v39 = *(_OWORD *)&v28[8];
    *(_OWORD *)&v39[16] = v29;
    *(_OWORD *)&v39[32] = v30;
    sub_140203A20(v24);
    sub_14172B820(&v25, v2, 400);
    if ( v4 != (const char *)-1LL )
    {
      v31 = (__int64)v4;
      *(_QWORD *)&v32 = v5;
      *((_QWORD *)&v32 + 1) = v6;
      *(_QWORD *)&v33[0] = v7;
      *(_OWORD *)((char *)v33 + 8) = *(_OWORD *)v39;
      *(_OWORD *)((char *)&v33[1] + 8) = *(_OWORD *)&v39[16];
      *(_OWORD *)((char *)&v33[2] + 8) = *(_OWORD *)&v39[32];
LABEL_21:
      v45 = 0;
      sub_140A97B10(&v25, &v31);
      goto LABEL_22;
    }
    if ( v7 < 0 )
    {
      v12 = 0;
      goto LABEL_13;
    }
    if ( v7 )
    {
      nullsub_1(v9, v8, v10, v11, v18);
      v12 = 1;
      v13 = sub_140001650(v7, 1);
      if ( !v13 )
      {
LABEL_13:
        v44 = v6;
        v43 = (const char *)v5;
        sub_14176E54B(v12, v7);
      }
      v14 = v13;
      sub_14172B820(v13, v6, v7);
    }
    else
    {
      v14 = 1;
    }
    if ( v5 )
      sub_140001660(v6, v5, 1);
    LOBYTE(v32) = 3;
    *((_QWORD *)&v32 + 1) = v7;
    *(_QWORD *)&v33[0] = v14;
    *((_QWORD *)&v33[0] + 1) = v7;
    v31 = -1;
    goto LABEL_21;
  }
  *(__m256i *)&v39[8] = v38;
  sub_14172B820(&v25, a1 + 520, 360);
  v34 = *(_OWORD *)(a1 + 880);
  v35 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v39 = 1;
  sub_140AFFC30((__int64)&v25, v21, (__int64)v39, &v34, v22, v23);
  if ( v44 )
    sub_140001660(v42, v44, 1);
  v46 = 0;
  sub_1400437E0(v24);
LABEL_22:
  if ( (_QWORD)v40 != -1 )
  {
    v15 = *((_QWORD *)&v40 + 1);
    v44 = v41;
    v43 = nullptr;
    v42 = *((_QWORD *)&v40 + 1);
    while ( v44 != v43 )
    {
      ++v43;
      v16 = v15 + 96;
      sub_140401FB0();
      v15 = v16;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140043900(v19);
}
