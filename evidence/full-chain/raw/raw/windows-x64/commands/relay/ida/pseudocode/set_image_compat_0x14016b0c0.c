// module: codexmate_lib/commands/relay
// addr: 0x14016b0c0
// name: set_image_compat
// win 1.2.1 | tauri command handler = set_image_compat | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_image_compat(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  const char *v18; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v19; // [rsp+3D8h] [rbp+358h]
  const char *v20; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v21; // [rsp+3E8h] [rbp+368h]
  _BYTE *v22; // [rsp+3F0h] [rbp+370h]
  __int128 *v23; // [rsp+3F8h] [rbp+378h]
  __int64 v24; // [rsp+400h] [rbp+380h]
  _OWORD v25[2]; // [rsp+560h] [rbp+4E0h] BYREF
  _OWORD v26[2]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v27; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v28; // [rsp+5B0h] [rbp+530h]
  __int128 v29; // [rsp+5C0h] [rbp+540h]
  __int128 v30; // [rsp+5D0h] [rbp+550h]
  __int128 v31; // [rsp+5E0h] [rbp+560h]
  _BYTE v32[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v33; // [rsp+620h] [rbp+5A0h]
  __int128 v34; // [rsp+630h] [rbp+5B0h]
  __int64 v35; // [rsp+648h] [rbp+5C8h]
  __int128 v36; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v37; // [rsp+660h] [rbp+5E0h]
  __int64 v38; // [rsp+670h] [rbp+5F0h]
  __int64 v39; // [rsp+678h] [rbp+5F8h]
  char v40; // [rsp+686h] [rbp+606h]
  char v41; // [rsp+687h] [rbp+607h]
  __int64 v42; // [rsp+688h] [rbp+608h]

  v42 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v14, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  v18 = aSetImageCompat;
  v19 = 16;
  v20 = aMutationgate;
  v21 = 12;
  v22 = v12;
  v23 = &v36;
  v41 = 1;
  v2 = sub_1400048C0((volatile void *)(v13 + 16));
  if ( !v2 )
  {
    v41 = 1;
    sub_1416850A0(v26, &v18, &v20);
    if ( LOBYTE(v26[0]) != 0xFF )
    {
      *(_OWORD *)&v32[24] = v26[1];
      *(_OWORD *)&v32[8] = v26[0];
      sub_141684120(&v18, a1 + 520, 360);
      v27 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v28 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v32 = 1;
      v41 = 0;
      sub_14047E370((unsigned int)&v18, v15, (unsigned int)v32, (unsigned int)&v27, v16, v17);
      goto LABEL_18;
    }
    v2 = *((_QWORD *)&v26[0] + 1);
  }
  v24 = 0;
  v18 = aSetImageCompat;
  v19 = 16;
  v20 = aEnabled;
  v21 = 7;
  v22 = v12;
  v23 = &v36;
  v41 = 1;
  sub_1401BCE80(v25, &v18);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v41 = 1;
    sub_1403D0140(&v27, v2, BYTE1(v25[0]));
    sub_141684120(&v18, a1 + 520, 400);
    if ( (_QWORD)v27 != -1 )
    {
      v34 = v31;
      v33 = v30;
      *(_OWORD *)&v32[32] = v29;
      *(_OWORD *)&v32[16] = v28;
      *(_OWORD *)v32 = v27;
LABEL_17:
      v40 = 0;
      sub_140433660(&v18, v32);
      goto LABEL_18;
    }
    v4 = *((_QWORD *)&v27 + 1);
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&v28 + 1);
    v6 = v28;
    if ( v28 < 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    if ( *((_QWORD *)&v28 + 1) )
    {
      nullsub_1(v3);
      v7 = 1;
      v8 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v8 )
      {
LABEL_11:
        v38 = v6;
        v39 = v4;
        sub_1416C2D4B(v7, *((_QWORD *)&v5 + 1));
      }
      *(_QWORD *)&v5 = v8;
      sub_141684120(v8, v6, *((_QWORD *)&v5 + 1));
      if ( !v4 )
      {
LABEL_16:
        v32[8] = 3;
        *(_QWORD *)&v32[16] = *((_QWORD *)&v5 + 1);
        *(_OWORD *)&v32[24] = v5;
        *(_QWORD *)v32 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v5 = 1;
      if ( !*((_QWORD *)&v27 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v6, v4, 1);
    goto LABEL_16;
  }
  *(_OWORD *)&v32[24] = v25[1];
  *(_OWORD *)&v32[8] = v25[0];
  sub_141684120(&v18, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v28 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v32 = 1;
  v41 = 0;
  sub_14047E370((unsigned int)&v18, v15, (unsigned int)v32, (unsigned int)&v27, v16, v17);
LABEL_18:
  if ( (_QWORD)v36 != -1 )
  {
    v9 = *((_QWORD *)&v36 + 1);
    v38 = v37;
    v39 = 0;
    v35 = *((_QWORD *)&v36 + 1);
    while ( v38 != v39 )
    {
      ++v39;
      v10 = v9 + 96;
      sub_1402C7520();
      v9 = v10;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140014270(v12);
}