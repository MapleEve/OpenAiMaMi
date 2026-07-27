// module: codexmate_lib/commands
// addr: 0x140192270
// name: hotspot_ready
// win 1.2.1 | tauri command handler = hotspot_ready | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall hotspot_ready(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int128 v4; // kr00_16
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[520]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[152]; // [rsp+240h] [rbp+1C0h] BYREF
  char v17[384]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v18; // [rsp+458h] [rbp+3D8h]
  int v19; // [rsp+460h] [rbp+3E0h]
  int v20; // [rsp+464h] [rbp+3E4h]
  _QWORD v21[50]; // [rsp+468h] [rbp+3E8h] BYREF
  int v22; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v23; // [rsp+600h] [rbp+580h]
  __int128 v24; // [rsp+610h] [rbp+590h]
  __int128 v25; // [rsp+690h] [rbp+610h] BYREF
  __int64 v26; // [rsp+6A0h] [rbp+620h]
  __int64 v27; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v28; // [rsp+6B8h] [rbp+638h]
  __int128 v29; // [rsp+6C8h] [rbp+648h]
  __int64 v30; // [rsp+6D8h] [rbp+658h]
  __int128 v31; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v32; // [rsp+6F0h] [rbp+670h]
  __int64 v33; // [rsp+6F8h] [rbp+678h]
  __int64 v34; // [rsp+700h] [rbp+680h]
  char v35; // [rsp+70Eh] [rbp+68Eh]
  char v36; // [rsp+70Fh] [rbp+68Fh]
  __int64 v37; // [rsp+710h] [rbp+690h]

  v37 = -2;
  sub_141684120(v15, a1, 520);
  sub_141684120(v17, a1 + 520, 400);
  v32 = *(_QWORD *)(a1 + 936);
  v31 = *(_OWORD *)(a1 + 920);
  v21[6] = 0;
  v21[0] = aHotspotReady;
  v21[1] = 13;
  v21[2] = aApp;
  v21[3] = 3;
  v21[4] = v15;
  v21[5] = &v31;
  v36 = 1;
  sub_1401C3650(&v22, v21);
  if ( v22 != -1 )
  {
    sub_141684120(v16, &v22, 152);
    v36 = 1;
    sub_14096F460(&v27, v16);
    sub_141684120(v21, a1 + 520, 400);
    v3 = v27;
    if ( v27 == -1 )
    {
      LOBYTE(v22) = -1;
LABEL_13:
      v35 = 0;
      sub_14043A970(v21, &v22);
      goto LABEL_14;
    }
    v4 = v28;
    if ( v28 < 0 )
    {
      v5 = 0;
      goto LABEL_5;
    }
    if ( *((_QWORD *)&v28 + 1) )
    {
      nullsub_1(v2);
      v5 = 1;
      v9 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v9 )
      {
LABEL_5:
        v33 = v4;
        v34 = v3;
        sub_1416C2D4B(v5, *((_QWORD *)&v4 + 1));
      }
      v10 = v9;
      sub_141684120(v9, v4, *((_QWORD *)&v4 + 1));
      if ( !v3 )
        goto LABEL_12;
    }
    else
    {
      v10 = 1;
      if ( !v27 )
        goto LABEL_12;
    }
    sub_140001660(v4, v3, 1);
LABEL_12:
    LOBYTE(v22) = 3;
    *(_QWORD *)&v23 = *((_QWORD *)&v4 + 1);
    *((_QWORD *)&v23 + 1) = v10;
    *(_QWORD *)&v24 = *((_QWORD *)&v4 + 1);
    goto LABEL_13;
  }
  v29 = v24;
  v28 = v23;
  sub_141684120(v21, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v36 = 0;
  sub_14047E370((unsigned int)v21, v18, (unsigned int)&v27, (unsigned int)&v25, v19, v20);
LABEL_14:
  if ( (_QWORD)v31 != -1 )
  {
    v11 = *((_QWORD *)&v31 + 1);
    v33 = v32;
    v34 = 0;
    v30 = *((_QWORD *)&v31 + 1);
    while ( v33 != v34 )
    {
      ++v34;
      v12 = v11 + 96;
      sub_1402C7520(v11, v6, v7, v8, v14);
      v11 = v12;
    }
    if ( (_QWORD)v31 )
      sub_140001660(*((_QWORD *)&v31 + 1), 96 * v31, 8);
  }
  return sub_140014270(v15);
}