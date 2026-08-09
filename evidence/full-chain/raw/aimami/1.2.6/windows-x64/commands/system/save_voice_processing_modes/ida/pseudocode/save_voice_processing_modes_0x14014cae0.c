// Pseudocode for save_voice_processing_modes (EA: 0x14014cae0, size: 0x4de)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_14014CAE0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int128 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+230h] [rbp+1B0h]
  _BYTE v18[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v19; // [rsp+3B8h] [rbp+338h]
  int v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C4h] [rbp+344h]
  const char *v22; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v23; // [rsp+3D0h] [rbp+350h]
  const char *v24; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v25; // [rsp+3E0h] [rbp+360h]
  _BYTE *v26; // [rsp+3E8h] [rbp+368h]
  __int128 *v27; // [rsp+3F0h] [rbp+370h]
  __int64 v28; // [rsp+3F8h] [rbp+378h]
  int v29; // [rsp+558h] [rbp+4D8h] BYREF
  __int128 v30; // [rsp+560h] [rbp+4E0h]
  __int128 v31; // [rsp+570h] [rbp+4F0h]
  _OWORD v32[2]; // [rsp+580h] [rbp+500h] BYREF
  _OWORD v33[2]; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v34; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v35; // [rsp+5D0h] [rbp+550h]
  __int128 v36; // [rsp+5E0h] [rbp+560h]
  __int128 v37; // [rsp+5F0h] [rbp+570h]
  __int128 v38; // [rsp+600h] [rbp+580h]
  _BYTE v39[48]; // [rsp+610h] [rbp+590h] BYREF
  __int128 v40; // [rsp+640h] [rbp+5C0h]
  __int128 v41; // [rsp+650h] [rbp+5D0h]
  __int64 v42; // [rsp+668h] [rbp+5E8h]
  __int128 v43; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v44; // [rsp+680h] [rbp+600h]
  __int64 v45; // [rsp+690h] [rbp+610h]
  __int64 v46; // [rsp+698h] [rbp+618h]
  char v47; // [rsp+6A6h] [rbp+626h]
  char v48; // [rsp+6A7h] [rbp+627h]
  __int64 v49; // [rsp+6A8h] [rbp+628h]

  v49 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v44 = *(_QWORD *)(a1 + 936);
  v43 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aSaveVoiceProce;
  v23 = 27;
  v24 = aRepo;
  v25 = 4;
  v26 = v16;
  v27 = &v43;
  v48 = 1;
  v2 = sub_140029DD0((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    v48 = 1;
    sub_14172C620((__int64)v33, (__int64)&v22, (__int64)&v24);
    if ( LOBYTE(v33[0]) != 0xFF )
    {
      *(_OWORD *)&v39[24] = v33[1];
      *(_OWORD *)&v39[8] = v33[0];
      sub_14172B820(&v22, a1 + 520, 360);
      v34 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v39 = 1;
      v48 = 0;
      sub_140AFFC30((__int64)&v22, v19, (__int64)v39, &v34, v20, v21);
      goto LABEL_18;
    }
    v2 = *((_QWORD *)&v33[0] + 1);
  }
  v28 = 0;
  v22 = aSaveVoiceProce;
  v23 = 27;
  v24 = aModes;
  v25 = 5;
  v26 = v16;
  v27 = &v43;
  v48 = 1;
  sub_1404F6360(&v29, &v22);
  if ( v29 != 1 )
  {
    v32[1] = v31;
    v32[0] = v30;
    v48 = 1;
    sub_1409FCD60(&v34, v2, v32);
    sub_14172B820(&v22, a1 + 520, 400);
    if ( (_QWORD)v34 != -1 )
    {
      v41 = v38;
      v40 = v37;
      *(_OWORD *)&v39[32] = v36;
      *(_OWORD *)&v39[16] = v35;
      *(_OWORD *)v39 = v34;
LABEL_17:
      v47 = 0;
      sub_140A97B10(&v22, v39);
      goto LABEL_18;
    }
    v7 = *((_QWORD *)&v34 + 1);
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&v35 + 1);
    v9 = v35;
    if ( v35 < 0 )
    {
      v10 = 0;
      goto LABEL_10;
    }
    if ( *((_QWORD *)&v35 + 1) )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_10:
        v45 = v9;
        v46 = v7;
        sub_14176E54B(v10, *((_QWORD *)&v8 + 1));
      }
      *(_QWORD *)&v8 = v11;
      sub_14172B820(v11, v9, *((_QWORD *)&v8 + 1));
      if ( !v7 )
      {
LABEL_16:
        v39[8] = 3;
        *(_QWORD *)&v39[16] = *((_QWORD *)&v8 + 1);
        *(_OWORD *)&v39[24] = v8;
        *(_QWORD *)v39 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v8 = 1;
      if ( !*((_QWORD *)&v34 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v9, v7, 1);
    goto LABEL_16;
  }
  *(_OWORD *)&v39[24] = v31;
  *(_OWORD *)&v39[8] = v30;
  sub_14172B820(&v22, a1 + 520, 360);
  v34 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v39 = 1;
  v48 = 0;
  sub_140AFFC30((__int64)&v22, v19, (__int64)v39, &v34, v20, v21);
LABEL_18:
  if ( (_QWORD)v43 != -1 )
  {
    v12 = *((_QWORD *)&v43 + 1);
    v45 = v44;
    v46 = 0;
    v42 = *((_QWORD *)&v43 + 1);
    while ( v45 != v46 )
    {
      ++v46;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v43 )
      sub_140001660(*((_QWORD *)&v43 + 1), 96 * v43, 8);
  }
  return sub_140043900(v16);
}
