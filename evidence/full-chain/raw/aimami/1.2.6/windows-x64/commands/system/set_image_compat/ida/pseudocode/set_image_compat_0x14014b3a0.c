// Pseudocode for set_image_compat (EA: 0x14014b3a0, size: 0x4ce)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_image_compat 处理器（commands::system，argKeys: enabled；体内 mutationGate 串佐证）。设置图像兼容模式。⚠副作用：写配置。
// Tauri 命令 set_image_compat 处理器（commands::system，argKeys: enabled；体内 mutationGate 串佐证）。设置图像兼容模式。⚠副作用：写配置。
__int64 __fastcall set_image_compat(__int64 a1)
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
  _OWORD v29[2]; // [rsp+560h] [rbp+4E0h] BYREF
  _OWORD v30[2]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v31; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v32; // [rsp+5B0h] [rbp+530h]
  __int128 v33; // [rsp+5C0h] [rbp+540h]
  __int128 v34; // [rsp+5D0h] [rbp+550h]
  __int128 v35; // [rsp+5E0h] [rbp+560h]
  _BYTE v36[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v37; // [rsp+620h] [rbp+5A0h]
  __int128 v38; // [rsp+630h] [rbp+5B0h]
  __int64 v39; // [rsp+648h] [rbp+5C8h]
  __int128 v40; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v41; // [rsp+660h] [rbp+5E0h]
  __int64 v42; // [rsp+670h] [rbp+5F0h]
  __int64 v43; // [rsp+678h] [rbp+5F8h]
  char v44; // [rsp+686h] [rbp+606h]
  char v45; // [rsp+687h] [rbp+607h]
  __int64 v46; // [rsp+688h] [rbp+608h]

  v46 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v41 = *(_QWORD *)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aSetImageCompat;
  v23 = 16;
  v24 = aMutationgate;
  v25 = 12;
  v26 = v16;
  v27 = &v40;
  v45 = 1;
  v2 = sub_14002B050((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    v45 = 1;
    sub_14172C620((__int64)v30, (__int64)&v22, (__int64)&v24);
    if ( LOBYTE(v30[0]) != 0xFF )
    {
      *(_OWORD *)&v36[24] = v30[1];
      *(_OWORD *)&v36[8] = v30[0];
      sub_14172B820(&v22, a1 + 520, 360);
      v31 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v36 = 1;
      v45 = 0;
      sub_140AFFC30((__int64)&v22, v19, (__int64)v36, &v31, v20, v21);
      goto LABEL_18;
    }
    v2 = *((_QWORD *)&v30[0] + 1);
  }
  v28 = 0;
  v22 = aSetImageCompat;
  v23 = 16;
  v24 = aEnabled;
  v25 = 7;
  v26 = v16;
  v27 = &v40;
  v45 = 1;
  sub_1409562A0(v29, &v22);
  if ( LOBYTE(v29[0]) == 0xFF )
  {
    v45 = 1;
    sub_140B25650(&v31, v2, BYTE1(v29[0]));
    sub_14172B820(&v22, a1 + 520, 400);
    if ( (_QWORD)v31 != -1 )
    {
      v38 = v35;
      v37 = v34;
      *(_OWORD *)&v36[32] = v33;
      *(_OWORD *)&v36[16] = v32;
      *(_OWORD *)v36 = v31;
LABEL_17:
      v44 = 0;
      sub_140A92CA0(&v22, v36);
      goto LABEL_18;
    }
    v7 = *((_QWORD *)&v31 + 1);
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&v32 + 1);
    v9 = v32;
    if ( v32 < 0 )
    {
      v10 = 0;
      goto LABEL_11;
    }
    if ( *((_QWORD *)&v32 + 1) )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_11:
        v42 = v9;
        v43 = v7;
        sub_14176E54B(v10, *((_QWORD *)&v8 + 1));
      }
      *(_QWORD *)&v8 = v11;
      sub_14172B820(v11, v9, *((_QWORD *)&v8 + 1));
      if ( !v7 )
      {
LABEL_16:
        v36[8] = 3;
        *(_QWORD *)&v36[16] = *((_QWORD *)&v8 + 1);
        *(_OWORD *)&v36[24] = v8;
        *(_QWORD *)v36 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v8 = 1;
      if ( !*((_QWORD *)&v31 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v9, v7, 1);
    goto LABEL_16;
  }
  *(_OWORD *)&v36[24] = v29[1];
  *(_OWORD *)&v36[8] = v29[0];
  sub_14172B820(&v22, a1 + 520, 360);
  v31 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v36 = 1;
  v45 = 0;
  sub_140AFFC30((__int64)&v22, v19, (__int64)v36, &v31, v20, v21);
LABEL_18:
  if ( (_QWORD)v40 != -1 )
  {
    v12 = *((_QWORD *)&v40 + 1);
    v42 = v41;
    v43 = 0;
    v39 = *((_QWORD *)&v40 + 1);
    while ( v42 != v43 )
    {
      ++v43;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140043900(v16);
}
