// module: codexmate_lib/platform/voice_trigger_windows
// addr: 0x1401ba040
// name: sub_1401BA040
// win 1.2.1 | module src/platform/voice_trigger_windows.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_1401BA040(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rt0
  char v12; // of
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  _OWORD v35[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v36; // [rsp+60h] [rbp-20h]
  __int128 v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+80h] [rbp+0h] BYREF
  __int128 v39; // [rsp+88h] [rbp+8h] BYREF
  HANDLE v40; // [rsp+98h] [rbp+18h]
  _QWORD v41[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v42; // [rsp+B0h] [rbp+30h]
  __int128 v43; // [rsp+C0h] [rbp+40h]
  __int128 v44; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v45; // [rsp+E0h] [rbp+60h]
  __int64 v46; // [rsp+E8h] [rbp+68h]
  __int64 v47; // [rsp+F0h] [rbp+70h]
  __int64 v48; // [rsp+F8h] [rbp+78h]
  __int128 v49; // [rsp+100h] [rbp+80h] BYREF
  __int128 v50; // [rsp+110h] [rbp+90h]
  __int128 v51; // [rsp+120h] [rbp+A0h]
  __int128 v52; // [rsp+130h] [rbp+B0h]
  __int128 v53; // [rsp+180h] [rbp+100h]
  __int16 v54; // [rsp+200h] [rbp+180h]
  __int64 v55; // [rsp+208h] [rbp+188h]
  __int64 v56; // [rsp+210h] [rbp+190h]
  __int128 v57; // [rsp+218h] [rbp+198h]
  __int64 v58; // [rsp+228h] [rbp+1A8h]
  __int64 v59; // [rsp+230h] [rbp+1B0h]
  char v60; // [rsp+238h] [rbp+1B8h]
  __int64 v61; // [rsp+280h] [rbp+200h]
  __int64 v62; // [rsp+288h] [rbp+208h]
  char v63; // [rsp+290h] [rbp+210h]
  __int64 *v64; // [rsp+310h] [rbp+290h]
  __int64 v65; // [rsp+318h] [rbp+298h]

  v64 = &v38;
  v65 = -2;
  sub_1401BAC80();
  v61 = 1;
  v62 = 1;
  v63 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 0;
  v53 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 8;
  v59 = 0;
  v60 = 1;
  nullsub_1(v2);
  v3 = sub_140001650(512, 128);
  if ( !v3 )
    sub_1416C2D31(128, 512);
  v4 = v3;
  sub_141684120(v3, &v49, 512);
  v41[0] = 1;
  v41[1] = v4;
  *(_QWORD *)&v42 = 1;
  *((_QWORD *)&v42 + 1) = v4;
  v61 = 1;
  v62 = 1;
  v63 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 0;
  v53 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 8;
  v59 = 0;
  v60 = 1;
  nullsub_1(v5);
  v6 = sub_140001650(512, 128);
  if ( !v6 )
    sub_1416C2D31(128, 512);
  v7 = v6;
  sub_141684120(v6, &v49, 512);
  v45 = 1;
  v46 = v7;
  *(_QWORD *)&v43 = 1;
  *((_QWORD *)&v43 + 1) = v7;
  v61 = 1;
  v62 = 1;
  v63 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 0;
  v53 = 0;
  v56 = 8;
  v57 = 0;
  v58 = 8;
  v59 = 0;
  v60 = 1;
  nullsub_1(v8);
  v9 = sub_140001650(512, 128);
  if ( !v9 )
    sub_1416C2D31(128, 512);
  v10 = v9;
  sub_141684120(v9, &v49, 512);
  v47 = 1;
  v48 = v10;
  v11 = _InterlockedIncrement64((volatile signed __int64 *)(v4 + 384));
  if ( (v11 < 0) ^ v12 | (v11 == 0) )
    __fastfail(7u);
  *(_QWORD *)&v35[0] = 1;
  *((_QWORD *)&v35[0] + 1) = v4;
  *(_QWORD *)&v35[1] = 1;
  *((_QWORD *)&v35[1] + 1) = v10;
  *(_QWORD *)&v50 = -1;
  *(_QWORD *)&v49 = 0;
  BYTE8(v51) = 0;
  sub_1404EC770(&v39, &v49, v35);
  if ( !(_QWORD)v39 )
  {
    *(_QWORD *)&v49 = *((_QWORD *)&v39 + 1);
    sub_1416C3060(
      (unsigned int)aFailedToSpawnT_8,
      22,
      (unsigned int)&v49,
      (unsigned int)&off_14173B290,
      (__int64)&off_1416CE3F0);
  }
  *(_QWORD *)&v50 = v40;
  v49 = v39;
  CloseHandle(v40);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v49) )
    sub_141481D70(&v49);
  if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v49 + 1)) )
    sub_141481C30((char *)&v49 + 8);
  *(_QWORD *)&v49 = 1;
  *((_QWORD *)&v49 + 1) = v7;
  *(_QWORD *)&v50 = 1;
  *((_QWORD *)&v50 + 1) = v10;
  sub_1401B9DA0(&v49, v13);
  v44 = v42;
  v39 = v43;
  v17 = sub_141471910(v15, v14, v16);
  v19 = sub_141491390(v17, v18, 15, 0, (__int64)&off_14173BF90);
  v21 = v20;
  while ( 1 )
  {
    sub_14024F510(&v49, &v39);
    if ( (_QWORD)v49 != -1 )
    {
      *((_QWORD *)&v35[1] + 1) = v50;
      *(_OWORD *)((char *)v35 + 8) = v49;
      goto LABEL_23;
    }
    sub_1402456D0(&v49, &v44, 0, 50000000);
    if ( (_QWORD)v49 != -2 )
    {
      v37 = v52;
      v36 = v51;
      v35[1] = v50;
      v35[0] = v49;
      goto LABEL_24;
    }
    if ( BYTE8(v49) )
      break;
    v25 = sub_141471910(v23, v22, v24);
    if ( v25 == v19 )
    {
      if ( v26 >= v21 )
      {
LABEL_17:
        sub_1401BAC80();
        nullsub_1(v27);
        v28 = sub_140001650(54, 1);
        if ( !v28 )
          sub_1416C2D4B(1, 54);
        *(_OWORD *)(v28 + 32) = xmmword_14173BFC8;
        *(_OWORD *)(v28 + 16) = xmmword_14173BFB8;
        *(_OWORD *)v28 = xmmword_14173BFA8;
        *(_QWORD *)(v28 + 46) = 0x8280E38D80E3AE94uLL;
        *((_QWORD *)&v35[0] + 1) = 54;
        *(_QWORD *)&v35[1] = v28;
        *((_QWORD *)&v35[1] + 1) = 54;
        goto LABEL_23;
      }
    }
    else if ( v25 >= v19 )
    {
      goto LABEL_17;
    }
  }
  nullsub_1(v23);
  v29 = sub_140001650(66, 1);
  if ( !v29 )
    sub_1416C2D4B(1, 66);
  *(_OWORD *)(v29 + 48) = xmmword_14173C00E;
  *(_OWORD *)(v29 + 32) = xmmword_14173BFFE;
  *(_OWORD *)(v29 + 16) = xmmword_14173BFEE;
  *(_OWORD *)v29 = xmmword_14173BFDE;
  *(_WORD *)(v29 + 64) = -32128;
  *((_QWORD *)&v35[0] + 1) = 66;
  *(_QWORD *)&v35[1] = v29;
  *((_QWORD *)&v35[1] + 1) = 66;
LABEL_23:
  *(_QWORD *)&v35[0] = -1;
LABEL_24:
  sub_14026D300(&v39);
  sub_140269440(&v44);
  *(_QWORD *)&v49 = -1;
  sub_1401B9DA0(&v49, v30);
  v31 = v35[0];
  v32 = v35[1];
  v33 = v36;
  a1[3] = v37;
  a1[2] = v33;
  a1[1] = v32;
  *a1 = v31;
  sub_140262590(v41);
  return a1;
}