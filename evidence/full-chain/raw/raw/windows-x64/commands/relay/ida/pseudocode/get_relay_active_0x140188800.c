// win 1.2.1 | tauri command handler = get_relay_active | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall get_relay_active(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // kr00_16
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v18[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v19[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v20; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v21; // [rsp+570h] [rbp+4F0h]
  __int128 v22; // [rsp+580h] [rbp+500h]
  __int128 v23; // [rsp+590h] [rbp+510h]
  __int128 v24; // [rsp+5A0h] [rbp+520h]
  __int128 v25; // [rsp+5B0h] [rbp+530h]
  __int64 v26; // [rsp+5C0h] [rbp+540h]
  _OWORD v27[2]; // [rsp+5D0h] [rbp+550h] BYREF
  _BYTE v28[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v29; // [rsp+620h] [rbp+5A0h]
  __int128 v30; // [rsp+630h] [rbp+5B0h]
  __int128 v31; // [rsp+640h] [rbp+5C0h]
  __int64 v32; // [rsp+650h] [rbp+5D0h]
  __int64 v33; // [rsp+658h] [rbp+5D8h]
  __int128 v34; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v35; // [rsp+670h] [rbp+5F0h]
  __int64 v36; // [rsp+678h] [rbp+5F8h]
  __int64 v37; // [rsp+680h] [rbp+600h]
  char v38; // [rsp+68Eh] [rbp+60Eh]
  char v39; // [rsp+68Fh] [rbp+60Fh]
  __int64 v40; // [rsp+690h] [rbp+610h]

  v40 = -2; /*0x140188817*/
  sub_141684120(v12, a1, 520); /*0x140188835*/
  sub_141684120(v14, a1 + 520, 400); /*0x140188851*/
  v35 = *(_QWORD *)(a1 + 936); /*0x14018885d*/
  v34 = *(_OWORD *)(a1 + 920); /*0x14018886b*/
  v19[4] = 0; /*0x140188872*/
  v18[0] = aGetRelayActive; /*0x140188884*/
  v18[1] = 16; /*0x14018888b*/
  v19[0] = aManager_0; /*0x14018889d*/
  v19[1] = 7; /*0x1401888a4*/
  v19[2] = v12; /*0x1401888af*/
  v19[3] = &v34; /*0x1401888bd*/
  v39 = 1; /*0x1401888cf*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x1401888d6*/
  if ( v2 ) /*0x1401888df*/
  {
LABEL_2:
    v39 = 1; /*0x1401888e5*/
    sub_140844AC0(v18, v2); /*0x1401888f6*/
    v39 = 1; /*0x1401888fc*/
    sub_140AC9370(&v20, v18); /*0x140188911*/
    sub_141684120(v18, a1 + 520, 400); /*0x140188927*/
    if ( (_QWORD)v20 != -1 ) /*0x140188934*/
    {
      v32 = v26; /*0x140188941*/
      v31 = v25; /*0x14018894f*/
      v30 = v24; /*0x14018895d*/
      v29 = v23; /*0x140188980*/
      *(_OWORD *)&v28[32] = v22; /*0x140188987*/
      *(_OWORD *)&v28[16] = v21; /*0x14018898e*/
      *(_OWORD *)v28 = v20; /*0x140188995*/
LABEL_14:
      v38 = 0; /*0x140188b11*/
      sub_1404377C0(v18, v28); /*0x140188b26*/
      goto LABEL_15; /*0x140188b26*/
    }
    v4 = *((_QWORD *)&v20 + 1); /*0x140188a69*/
    v5 = v21; /*0x140188a77*/
    if ( v21 < 0 ) /*0x140188a81*/
    {
      v6 = 0; /*0x140188a83*/
      goto LABEL_8; /*0x140188a83*/
    }
    if ( *((_QWORD *)&v21 + 1) ) /*0x140188aa1*/
    {
      nullsub_1(v3); /*0x140188aa7*/
      v6 = 1; /*0x140188aac*/
      v7 = sub_140001650(*((_QWORD *)&v5 + 1), 1); /*0x140188ab9*/
      if ( !v7 ) /*0x140188ac1*/
      {
LABEL_8:
        v36 = v5; /*0x140188a85*/
        v37 = v4; /*0x140188a8c*/
        sub_1416C2D4B(v6, *((_QWORD *)&v5 + 1)); /*0x140188a99*/
      }
      v8 = v7; /*0x140188ac3*/
      sub_141684120(v7, v5, *((_QWORD *)&v5 + 1)); /*0x140188acf*/
      if ( !v4 ) /*0x140188ad7*/
      {
LABEL_13:
        v28[8] = 3; /*0x140188aea*/
        *(_QWORD *)&v28[16] = *((_QWORD *)&v5 + 1); /*0x140188af1*/
        *(_QWORD *)&v28[24] = v8; /*0x140188af8*/
        *(_QWORD *)&v28[32] = *((_QWORD *)&v5 + 1); /*0x140188aff*/
        *(_QWORD *)v28 = -1; /*0x140188b06*/
        goto LABEL_14; /*0x140188b06*/
      }
    }
    else
    {
      v8 = 1; /*0x140188bd5*/
      if ( !*((_QWORD *)&v20 + 1) ) /*0x140188bdd*/
        goto LABEL_13; /*0x140188bdd*/
    }
    sub_140001660(v5, v4, 1); /*0x140188ae5*/
    goto LABEL_13; /*0x140188ae5*/
  }
  v39 = 1; /*0x1401889a8*/
  sub_1416850A0(v27, v18, v19); /*0x1401889bd*/
  if ( LOBYTE(v27[0]) == 0xFF ) /*0x1401889ca*/
  {
    v2 = *((_QWORD *)&v27[0] + 1); /*0x140188bc9*/
    goto LABEL_2; /*0x140188bd0*/
  }
  *(_OWORD *)&v28[24] = v27[1]; /*0x1401889de*/
  *(_OWORD *)&v28[8] = v27[0]; /*0x1401889e5*/
  sub_141684120(v18, a1 + 520, 360); /*0x1401889ff*/
  v20 = *(_OWORD *)(a1 + 880); /*0x140188a12*/
  *(_QWORD *)&v21 = *(_QWORD *)(a1 + 896); /*0x140188a20*/
  *(_QWORD *)v28 = 1; /*0x140188a33*/
  v39 = 0; /*0x140188a3e*/
  sub_14047E370((unsigned int)v18, v15, (unsigned int)v28, (unsigned int)&v20, v16, v17); /*0x140188a5e*/
LABEL_15:
  if ( (_QWORD)v34 != -1 ) /*0x140188b34*/
  {
    v9 = *((_QWORD *)&v34 + 1); /*0x140188b36*/
    v36 = v35; /*0x140188b44*/
    v37 = 0; /*0x140188b4b*/
    v33 = *((_QWORD *)&v34 + 1); /*0x140188b56*/
    while ( v36 != v37 ) /*0x140188b6e*/
    {
      ++v37; /*0x140188b73*/
      v10 = v9 + 96; /*0x140188b7a*/
      sub_1402C7520(); /*0x140188b7e*/
      v9 = v10; /*0x140188b84*/
    }
    if ( (_QWORD)v34 ) /*0x140188b93*/
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8); /*0x140188baa*/
  }
  return sub_140014270(v12); /*0x140188bb9*/
}