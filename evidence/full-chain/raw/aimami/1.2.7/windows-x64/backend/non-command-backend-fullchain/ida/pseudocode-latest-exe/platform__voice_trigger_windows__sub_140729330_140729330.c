// win 1.2.7 latest-exe | module src/platform/voice_trigger_windows.rs | ea 0x140729330 | successor of pre-update 0x141003a80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.886, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_OWORD *__fastcall sub_140729330(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rt0
  char v15; // of
  volatile signed __int64 *v16; // r14
  int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  _OWORD v34[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int128 v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp+8h] BYREF
  __int128 v39; // [rsp+98h] [rbp+18h]
  __int128 v40; // [rsp+A8h] [rbp+28h]
  __int128 v41; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v42; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v43; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h]
  __int64 v45; // [rsp+F0h] [rbp+70h]
  __int64 v46; // [rsp+F8h] [rbp+78h]
  __int128 v47; // [rsp+100h] [rbp+80h] BYREF
  __int128 v48; // [rsp+110h] [rbp+90h]
  __int128 v49; // [rsp+120h] [rbp+A0h]
  __int128 v50; // [rsp+130h] [rbp+B0h]
  __int128 v51; // [rsp+180h] [rbp+100h]
  __int16 v52; // [rsp+200h] [rbp+180h]
  __int64 v53; // [rsp+208h] [rbp+188h]
  __int64 v54; // [rsp+210h] [rbp+190h]
  __int128 v55; // [rsp+218h] [rbp+198h]
  __int64 v56; // [rsp+228h] [rbp+1A8h]
  __int64 v57; // [rsp+230h] [rbp+1B0h]
  char v58; // [rsp+238h] [rbp+1B8h]
  __int64 v59; // [rsp+280h] [rbp+200h]
  __int64 v60; // [rsp+288h] [rbp+208h]
  char v61; // [rsp+290h] [rbp+210h]
  __int64 *v62; // [rsp+310h] [rbp+290h]
  __int64 v63; // [rsp+318h] [rbp+298h]

  v62 = &v37;
  v63 = -2;
  sub_140729F50();
  v59 = 1;
  v60 = 1;
  v61 = 0;
  v52 = 0;
  v53 = 0;
  v47 = 0;
  v51 = 0;
  v54 = 8;
  v55 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 1;
  nullsub_1(v3, v2);
  v4 = sub_140001650(512, 128);
  if ( !v4 )
    sub_14196B2C1(128, 512);
  v5 = v4;
  sub_1419234B0(v4, &v47, 512);
  v38[0] = 1;
  v38[1] = v5;
  *(_QWORD *)&v39 = 1;
  *((_QWORD *)&v39 + 1) = v5;
  v59 = 1;
  v60 = 1;
  v61 = 0;
  v52 = 0;
  v53 = 0;
  v47 = 0;
  v51 = 0;
  v54 = 8;
  v55 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 1;
  nullsub_1(v7, v6);
  v8 = sub_140001650(512, 128);
  if ( !v8 )
    sub_14196B2C1(128, 512);
  v9 = v8;
  sub_1419234B0(v8, &v47, 512);
  v43 = 1;
  v44 = v9;
  *(_QWORD *)&v40 = 1;
  *((_QWORD *)&v40 + 1) = v9;
  v59 = 1;
  v60 = 1;
  v61 = 0;
  v52 = 0;
  v53 = 0;
  v47 = 0;
  v51 = 0;
  v54 = 8;
  v55 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 1;
  nullsub_1(v11, v10);
  v12 = sub_140001650(512, 128);
  if ( !v12 )
    sub_14196B2C1(128, 512);
  v13 = v12;
  sub_1419234B0(v12, &v47, 512);
  v45 = 1;
  v46 = v13;
  v14 = _InterlockedIncrement64((volatile signed __int64 *)(v5 + 384));
  if ( (v14 < 0) ^ v15 | (v14 == 0) )
    __fastfail(7u);
  *(_QWORD *)&v47 = 1;
  *((_QWORD *)&v47 + 1) = v5;
  *(_QWORD *)&v48 = 1;
  *((_QWORD *)&v48 + 1) = v13;
  *(_QWORD *)&v42 = -1;
  sub_14005C490(v34, &v42, 0);
  v16 = *(volatile signed __int64 **)&v34[0];
  if ( !*(_QWORD *)&v34[0] )
  {
    *(_QWORD *)&v34[0] = *((_QWORD *)&v34[0] + 1);
    sub_14196B5F0(
      (unsigned int)aFailedToSpawnT_0,
      22,
      (unsigned int)v34,
      (unsigned int)&off_141A3B8E8,
      (__int64)&off_141A3E328);
  }
  CloseHandle(*(HANDLE *)&v34[1]);
  if ( !_InterlockedDecrement64(v16) )
    sub_1416C0140(v34);
  if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v34[0] + 1)) )
    sub_1416C0000((char *)v34 + 8);
  *(_QWORD *)&v47 = 1;
  *((_QWORD *)&v47 + 1) = v9;
  *(_QWORD *)&v48 = 1;
  *((_QWORD *)&v48 + 1) = v13;
  sub_140729090(&v47);
  v41 = v39;
  v42 = v40;
  v17 = sub_1416AEBD0();
  v19 = sub_1416D0210(v17, v18, 15, 0, (__int64)&off_141A3E5D0);
  v21 = v20;
  while ( 1 )
  {
    sub_1404B2270(&v47, &v42);
    if ( (_QWORD)v47 != -1 )
    {
      *((_QWORD *)&v34[1] + 1) = v48;
      *(_OWORD *)((char *)v34 + 8) = v47;
      goto LABEL_23;
    }
    sub_1404A77B0(&v47, &v41, 0, 50000000);
    if ( (_QWORD)v47 != -2 )
    {
      v36 = v50;
      v35 = v49;
      v34[1] = v48;
      v34[0] = v47;
      goto LABEL_24;
    }
    if ( BYTE8(v47) )
      break;
    v24 = sub_1416AEBD0();
    if ( v24 == v19 )
    {
      if ( v25 >= v21 )
      {
LABEL_17:
        sub_140729F50();
        nullsub_1(v27, v26);
        v28 = sub_140001650(54, 1);
        if ( !v28 )
          sub_14196B2DB(1, 54);
        *(_OWORD *)(v28 + 32) = xmmword_141A3E608;
        *(_OWORD *)(v28 + 16) = xmmword_141A3E5F8;
        *(_OWORD *)v28 = xmmword_141A3E5E8;
        *(_QWORD *)(v28 + 46) = 0x8280E38D80E3AE94uLL;
        *((_QWORD *)&v34[0] + 1) = 54;
        *(_QWORD *)&v34[1] = v28;
        *((_QWORD *)&v34[1] + 1) = 54;
        goto LABEL_23;
      }
    }
    else if ( v24 >= v19 )
    {
      goto LABEL_17;
    }
  }
  nullsub_1(v23, v22);
  v29 = sub_140001650(66, 1);
  if ( !v29 )
    sub_14196B2DB(1, 66);
  *(_OWORD *)(v29 + 48) = xmmword_141A3E64E;
  *(_OWORD *)(v29 + 32) = xmmword_141A3E63E;
  *(_OWORD *)(v29 + 16) = xmmword_141A3E62E;
  *(_OWORD *)v29 = xmmword_141A3E61E;
  *(_WORD *)(v29 + 64) = -32128;
  *((_QWORD *)&v34[0] + 1) = 66;
  *(_QWORD *)&v34[1] = v29;
  *((_QWORD *)&v34[1] + 1) = 66;
LABEL_23:
  *(_QWORD *)&v34[0] = -1;
LABEL_24:
  sub_1404D7C90(&v42);
  sub_1404D45F0(&v41);
  *(_QWORD *)&v47 = -1;
  sub_140729090(&v47);
  v30 = v34[0];
  v31 = v34[1];
  v32 = v35;
  a1[3] = v36;
  a1[2] = v32;
  a1[1] = v31;
  *a1 = v30;
  sub_1404C7C50(v38);
  return a1;
}
