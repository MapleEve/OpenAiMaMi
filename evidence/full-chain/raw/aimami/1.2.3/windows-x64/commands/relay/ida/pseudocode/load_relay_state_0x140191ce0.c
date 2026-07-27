// win 1.2.1 | tauri command handler = load_relay_state | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall load_relay_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int128 v6; // rdi
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
  __int128 v18; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v19; // [rsp+3E0h] [rbp+360h]
  __int64 v20; // [rsp+3E8h] [rbp+368h]
  __int64 v21; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v22; // [rsp+558h] [rbp+4D8h]
  __int128 v23; // [rsp+568h] [rbp+4E8h]
  _QWORD v24[2]; // [rsp+6C8h] [rbp+648h] BYREF
  _QWORD v25[48]; // [rsp+6D8h] [rbp+658h] BYREF
  _OWORD v26[2]; // [rsp+858h] [rbp+7D8h] BYREF
  __int64 v27; // [rsp+878h] [rbp+7F8h]
  __int128 v28; // [rsp+880h] [rbp+800h] BYREF
  __int64 v29; // [rsp+890h] [rbp+810h]
  __int64 v30; // [rsp+898h] [rbp+818h]
  __int64 v31; // [rsp+8A0h] [rbp+820h]
  char v32; // [rsp+8AEh] [rbp+82Eh]
  char v33; // [rsp+8AFh] [rbp+82Fh]
  __int64 v34; // [rsp+8B0h] [rbp+830h]

  v34 = -2; /*0x140191cf7*/
  sub_141684120(v12, a1, 520); /*0x140191d15*/
  sub_141684120(v14, a1 + 520, 400); /*0x140191d31*/
  v29 = *(_QWORD *)(a1 + 936); /*0x140191d3d*/
  v28 = *(_OWORD *)(a1 + 920); /*0x140191d4b*/
  v25[4] = 0; /*0x140191d52*/
  v24[0] = aLoadRelayState; /*0x140191d64*/
  v24[1] = 16; /*0x140191d6b*/
  v25[0] = aManager_0; /*0x140191d7d*/
  v25[1] = 7; /*0x140191d84*/
  v25[2] = v12; /*0x140191d8f*/
  v25[3] = &v28; /*0x140191d9d*/
  v33 = 1; /*0x140191daf*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x140191db6*/
  if ( v2 ) /*0x140191dbf*/
  {
LABEL_2:
    v33 = 1; /*0x140191dc1*/
    sub_1404849B0(&v18, v2); /*0x140191dd2*/
    sub_141684120(v24, a1 + 520, 400); /*0x140191de8*/
    if ( (_QWORD)v18 != -1 ) /*0x140191df5*/
    {
      sub_141684120(&v21, &v18, 376); /*0x140191e0f*/
LABEL_14:
      v32 = 0; /*0x140191f89*/
      sub_140437160(v24, &v21); /*0x140191f9e*/
      goto LABEL_15; /*0x140191f9e*/
    }
    v4 = *((_QWORD *)&v18 + 1); /*0x140191ee1*/
    v5 = v19; /*0x140191ee8*/
    *((_QWORD *)&v6 + 1) = v20; /*0x140191eef*/
    if ( v20 < 0 ) /*0x140191ef9*/
    {
      v7 = 0; /*0x140191efb*/
      goto LABEL_8; /*0x140191efb*/
    }
    if ( v20 ) /*0x140191f19*/
    {
      nullsub_1(v3); /*0x140191f1f*/
      v7 = 1; /*0x140191f24*/
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1); /*0x140191f31*/
      if ( !v8 ) /*0x140191f39*/
      {
LABEL_8:
        v30 = v5; /*0x140191efd*/
        v31 = v4; /*0x140191f04*/
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1)); /*0x140191f11*/
      }
      *(_QWORD *)&v6 = v8; /*0x140191f3b*/
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1)); /*0x140191f47*/
      if ( !v4 ) /*0x140191f4f*/
      {
LABEL_13:
        LOBYTE(v22) = 3; /*0x140191f62*/
        *((_QWORD *)&v22 + 1) = *((_QWORD *)&v6 + 1); /*0x140191f69*/
        v23 = v6; /*0x140191f70*/
        v21 = -1; /*0x140191f7e*/
        goto LABEL_14; /*0x140191f7e*/
      }
    }
    else
    {
      *(_QWORD *)&v6 = 1; /*0x140192055*/
      if ( !*((_QWORD *)&v18 + 1) ) /*0x14019205d*/
        goto LABEL_13; /*0x14019205d*/
    }
    sub_140001660(v5, v4, 1); /*0x140191f5d*/
    goto LABEL_13; /*0x140191f5d*/
  }
  v33 = 1; /*0x140191e20*/
  sub_1416850A0(v26, v24, v25); /*0x140191e35*/
  if ( LOBYTE(v26[0]) == 0xFF ) /*0x140191e42*/
  {
    v2 = *((_QWORD *)&v26[0] + 1); /*0x140192049*/
    goto LABEL_2; /*0x140192050*/
  }
  v23 = v26[1]; /*0x140191e56*/
  v22 = v26[0]; /*0x140191e5d*/
  sub_141684120(v24, a1 + 520, 360); /*0x140191e77*/
  v18 = *(_OWORD *)(a1 + 880); /*0x140191e8a*/
  v19 = *(_QWORD *)(a1 + 896); /*0x140191e98*/
  v21 = 1; /*0x140191eab*/
  v33 = 0; /*0x140191eb6*/
  sub_14047E370((unsigned int)v24, v15, (unsigned int)&v21, (unsigned int)&v18, v16, v17); /*0x140191ed6*/
LABEL_15:
  if ( (_QWORD)v28 != -1 ) /*0x140191fac*/
  {
    v9 = *((_QWORD *)&v28 + 1); /*0x140191fb2*/
    v30 = v29; /*0x140191fc0*/
    v31 = 0; /*0x140191fc7*/
    v27 = *((_QWORD *)&v28 + 1); /*0x140191fd2*/
    while ( v30 != v31 ) /*0x140191fee*/
    {
      ++v31; /*0x140191ff3*/
      v10 = v9 + 96; /*0x140191ffa*/
      sub_1402C7520(); /*0x140191ffe*/
      v9 = v10; /*0x140192004*/
    }
    if ( (_QWORD)v28 ) /*0x140192013*/
      sub_140001660(*((_QWORD *)&v28 + 1), 96 * v28, 8); /*0x14019202a*/
  }
  return sub_140014270(v12); /*0x140192039*/
}