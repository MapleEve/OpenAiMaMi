// module: codexmate_lib/commands
// addr: 0x140192d30
// name: set_hotspot_enabled
// win 1.2.1 | tauri command handler = set_hotspot_enabled | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_hotspot_enabled(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r14
  __int128 v8; // kr00_16
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  char v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v22[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v23; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v24; // [rsp+470h] [rbp+3F0h]
  const char *v25; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v26; // [rsp+480h] [rbp+400h]
  _BYTE *v27; // [rsp+488h] [rbp+408h]
  __int128 *v28; // [rsp+490h] [rbp+410h]
  __int64 v29; // [rsp+498h] [rbp+418h]
  int v30; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v31; // [rsp+600h] [rbp+580h]
  __int128 v32; // [rsp+610h] [rbp+590h]
  __int128 v33; // [rsp+690h] [rbp+610h] BYREF
  __int64 v34; // [rsp+6A0h] [rbp+620h]
  _OWORD v35[2]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v36; // [rsp+6C8h] [rbp+648h]
  __int128 v37; // [rsp+6D0h] [rbp+650h] BYREF
  __int128 v38; // [rsp+6E0h] [rbp+660h]
  __int64 v39; // [rsp+6F8h] [rbp+678h] BYREF
  __int128 v40; // [rsp+700h] [rbp+680h]
  __int128 v41; // [rsp+710h] [rbp+690h]
  __int128 v42; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v43; // [rsp+730h] [rbp+6B0h]
  __int64 v44; // [rsp+740h] [rbp+6C0h]
  __int64 v45; // [rsp+748h] [rbp+6C8h]
  char v46; // [rsp+755h] [rbp+6D5h]
  char v47; // [rsp+756h] [rbp+6D6h]
  char v48; // [rsp+757h] [rbp+6D7h]
  __int64 v49; // [rsp+758h] [rbp+6D8h]

  v49 = -2;
  sub_141684120(v16, a1, 520);
  sub_141684120(v18, a1 + 520, 400);
  v43 = *(_QWORD *)(a1 + 936);
  v42 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aSetHotspotEnab;
  v24 = 19;
  v25 = aApp;
  v26 = 3;
  v27 = v16;
  v28 = &v42;
  v48 = 1;
  sub_1401C3650(&v30, &v23);
  if ( v30 == -1 )
  {
    v41 = v32;
    v40 = v31;
    sub_141684120(&v23, a1 + 520, 360);
    v37 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v38 = *(_QWORD *)(a1 + 896);
    v39 = 1;
    v48 = 0;
    sub_14047E370((unsigned int)&v23, v19, (unsigned int)&v39, (unsigned int)&v37, v20, v21);
    goto LABEL_20;
  }
  sub_141684120(v22, &v30, 152);
  v29 = 0;
  v23 = aSetHotspotEnab;
  v24 = 19;
  v25 = aRepo;
  v26 = 4;
  v27 = v16;
  v28 = &v42;
  v2 = sub_140003640((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    sub_1416850A0(v35, &v23, &v25);
    if ( LOBYTE(v35[0]) != 0xFF )
    {
      v41 = v35[1];
      v40 = v35[0];
      sub_141684120(&v23, a1 + 520, 360);
      v37 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v38 = *(_QWORD *)(a1 + 896);
      v39 = 1;
      v47 = 0;
      sub_14047E370((unsigned int)&v23, v19, (unsigned int)&v39, (unsigned int)&v37, v20, v21);
      v48 = 0;
      sub_140014150(v22);
      goto LABEL_20;
    }
    v2 = *((_QWORD *)&v35[0] + 1);
  }
  v29 = 0;
  v23 = aSetHotspotEnab;
  v24 = 19;
  v25 = aEnabled;
  v26 = 7;
  v27 = v16;
  v28 = &v42;
  v47 = 1;
  sub_1401BCE80(&v37, &v23);
  LOBYTE(v45) = v37;
  if ( (_BYTE)v37 == 0xFF )
  {
    sub_14096FB70(&v39, v22, v2, BYTE1(v37));
    sub_141684120(&v23, a1 + 520, 400);
    v7 = v39;
    if ( v39 == -1 )
    {
      LOWORD(v30) = __PAIR16__(v40, -1);
LABEL_19:
      v46 = 0;
      sub_14043A590(&v23, &v30);
      goto LABEL_20;
    }
    v8 = v40;
    if ( v40 < 0 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( *((_QWORD *)&v40 + 1) )
    {
      nullsub_1(v6);
      v9 = 1;
      v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v10 )
      {
LABEL_11:
        v44 = v8;
        v45 = v7;
        sub_1416C2D4B(v9, *((_QWORD *)&v8 + 1));
      }
      v11 = v10;
      sub_141684120(v10, v8, *((_QWORD *)&v8 + 1));
      if ( !v7 )
        goto LABEL_18;
    }
    else
    {
      v11 = 1;
      if ( !v39 )
        goto LABEL_18;
    }
    sub_140001660(v8, v7, 1);
LABEL_18:
    LOBYTE(v30) = 3;
    *(_QWORD *)&v31 = *((_QWORD *)&v8 + 1);
    *((_QWORD *)&v31 + 1) = v11;
    *(_QWORD *)&v32 = *((_QWORD *)&v8 + 1);
    goto LABEL_19;
  }
  v41 = v38;
  v40 = v37;
  sub_141684120(&v23, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  v34 = *(_QWORD *)(a1 + 896);
  v39 = 1;
  sub_14047E370((unsigned int)&v23, v19, (unsigned int)&v39, (unsigned int)&v33, v20, v21);
  v48 = 0;
  sub_140014150(v22);
LABEL_20:
  if ( (_QWORD)v42 != -1 )
  {
    v12 = *((_QWORD *)&v42 + 1);
    v44 = v43;
    v45 = 0;
    v36 = *((_QWORD *)&v42 + 1);
    while ( v44 != v45 )
    {
      ++v45;
      v13 = v12 + 96;
      sub_1402C7520(v12, v3, v4, v5, v15);
      v12 = v13;
    }
    if ( (_QWORD)v42 )
      sub_140001660(*((_QWORD *)&v42 + 1), 96 * v42, 8);
  }
  return sub_140014270(v16);
}