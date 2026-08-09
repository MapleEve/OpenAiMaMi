// win 1.2.3 delta | cmd_get_autostart_state @ 0x140186df0 | changelog autostart
// [FULL hexrays 4804B]
// win 1.2.1 | tauri command handler = get_autostart_state | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall get_autostart_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int128 v4; // kr00_16
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+230h] [rbp+1B0h]
  _BYTE v13[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v14; // [rsp+3B8h] [rbp+338h]
  int v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C4h] [rbp+344h]
  _BYTE v17[152]; // [rsp+3C8h] [rbp+348h] BYREF
  const char *v18; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v19; // [rsp+468h] [rbp+3E8h]
  const char *v20; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v21; // [rsp+478h] [rbp+3F8h]
  _BYTE *v22; // [rsp+480h] [rbp+400h]
  __int128 *v23; // [rsp+488h] [rbp+408h]
  __int64 v24; // [rsp+490h] [rbp+410h]
  _BYTE v25[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v26; // [rsp+620h] [rbp+5A0h]
  __int128 v27; // [rsp+630h] [rbp+5B0h]
  __int128 v28; // [rsp+690h] [rbp+610h] BYREF
  __int64 v29; // [rsp+6A0h] [rbp+620h]
  _BYTE v30[48]; // [rsp+6A8h] [rbp+628h] BYREF
  __int128 v31; // [rsp+6D8h] [rbp+658h]
  __int128 v32; // [rsp+6E8h] [rbp+668h]
  __int64 v33; // [rsp+6F8h] [rbp+678h]
  __int128 v34; // [rsp+700h] [rbp+680h] BYREF
  __int128 v35; // [rsp+710h] [rbp+690h]
  __int128 v36; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v37; // [rsp+730h] [rbp+6B0h]
  __int64 v38; // [rsp+738h] [rbp+6B8h]
  __int64 v39; // [rsp+740h] [rbp+6C0h]
  char v40; // [rsp+74Dh] [rbp+6CDh]
  char v41; // [rsp+74Eh] [rbp+6CEh]
  char v42; // [rsp+74Fh] [rbp+6CFh]
  __int64 v43; // [rsp+750h] [rbp+6D0h]

  v43 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v13, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v24 = 0;
  v18 = aGetAutostartSt;
  v19 = 19;
  v20 = aApp;
  v21 = 3;
  v22 = v11;
  v23 = &v36;
  v42 = 1;
  sub_1401C3650(v25, &v18);
  if ( *(_DWORD *)v25 == -1 )
  {
    *(_OWORD *)&v30[24] = *(_OWORD *)&v25[24];
    *(_OWORD *)&v30[8] = *(_OWORD *)&v25[8];
    sub_141684120(&v18, a1 + 520, 360);
    v34 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v30 = 1;
    v42 = 0;
    sub_14047E370((unsigned int)&v18, v14, (unsigned int)v30, (unsigned int)&v34, v15, v16);
  }
  else
  {
    sub_141684120(v17, v25, 152);
    v24 = 0;
    v18 = aGetAutostartSt;
    v19 = 19;
    v20 = aRepo;
    v21 = 4;
    v22 = v11;
    v23 = &v36;
    v2 = sub_140003640((volatile void *)(v12 + 16));
    if ( v2 )
      goto LABEL_3;
    sub_1416850A0(&v34, &v18, &v20);
    if ( (_BYTE)v34 == 0xFF )
    {
      v2 = *((_QWORD *)&v34 + 1);
LABEL_3:
      v41 = 1;
      sub_140487B30(v30, v17, v2);
      sub_141684120(&v18, a1 + 520, 400);
      if ( *(_QWORD *)v30 != -1 )
      {
        v27 = v32;
        v26 = v31;
        *(_OWORD *)&v25[32] = *(_OWORD *)&v30[32];
        *(_OWORD *)&v25[16] = *(_OWORD *)&v30[16];
        *(_OWORD *)v25 = *(_OWORD *)v30;
LABEL_16:
        v40 = 0;
        sub_1404384C0(&v18, v25);
        goto LABEL_17;
      }
      v3 = *(_QWORD *)&v30[8];
      v4 = *(_OWORD *)&v30[16];
      if ( *(__int64 *)&v30[24] < 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
      if ( *(_QWORD *)&v30[24] )
      {
        nullsub_1();
        v5 = 1;
        v6 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
        if ( !v6 )
        {
LABEL_10:
          v38 = v4;
          v39 = v3;
          sub_1416C2D4B(v5, *((_QWORD *)&v4 + 1));
        }
        v7 = v6;
        sub_141684120(v6, v4, *((_QWORD *)&v4 + 1));
        if ( !v3 )
        {
LABEL_15:
          v25[8] = 3;
          *(_QWORD *)&v25[16] = *((_QWORD *)&v4 + 1);
          *(_QWORD *)&v25[24] = v7;
          *(_QWORD *)&v25[32] = *((_QWORD *)&v4 + 1);
          *(_QWORD *)v25 = -1;
          goto LABEL_16;
        }
      }
      else
      {
        v7 = 1;
        if ( !*(_QWORD *)&v30[8] )
          goto LABEL_15;
      }
      sub_140001660(v4, v3, 1);
      goto LABEL_15;
    }
    *(_OWORD *)&v30[24] = v35;
    *(_OWORD *)&v30[8] = v34;
    sub_141684120(&v18, a1 + 520, 360);
    v28 = *(_OWORD *)(a1 + 880);
    v29 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v30 = 1;
    v41 = 0;
    sub_14047E370((unsigned int)&v18, v14, (unsigned int)v30, (unsigned int)&v28, v15, v16);
    v42 = 0;
    sub_140014150(v17);
  }
LABEL_17:
  if ( (_QWORD)v36 != -1 )
  {
    v8 = *((_QWORD *)&v36 + 1);
    v38 = v37;
    v39 = 0;
    v33 = *((_QWORD *)&v36 + 1);
    while ( v38 != v39 )
    {
      ++v39;
      v9 = v8 + 96;
      sub_1402C7520();
      v8 = v9;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140014270(v11);
}
