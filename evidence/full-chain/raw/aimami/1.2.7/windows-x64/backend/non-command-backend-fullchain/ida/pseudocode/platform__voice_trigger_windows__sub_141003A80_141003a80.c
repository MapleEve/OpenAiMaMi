// win 1.2.7 | module src/platform/voice_trigger_windows.rs | ea 0x141003a80 | name sub_141003A80
// win 1.2.7 | module src/platform/voice_trigger_windows.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_141003A80(_OWORD *a1)
{
  __int64 v2; // rcx
  __m128i *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __m128i *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __m128i *v9; // rax
  __m128i *v10; // r15
  __int64 v11; // rt0
  char v12; // of
  volatile signed __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  unsigned __int64 v20; // rdi
  unsigned int v21; // edx
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  _OWORD v36[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h]
  __int128 v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v40[2]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v41[3]; // [rsp+98h] [rbp+18h] BYREF
  _QWORD v42[10]; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v43; // [rsp+100h] [rbp+80h] BYREF
  __int128 v44; // [rsp+110h] [rbp+90h]
  __int128 v45; // [rsp+120h] [rbp+A0h]
  __int128 v46; // [rsp+130h] [rbp+B0h]
  __int128 v47; // [rsp+180h] [rbp+100h]
  __int16 v48; // [rsp+200h] [rbp+180h]
  __int64 v49; // [rsp+208h] [rbp+188h]
  __int64 v50; // [rsp+210h] [rbp+190h]
  __int128 v51; // [rsp+218h] [rbp+198h]
  __int64 v52; // [rsp+228h] [rbp+1A8h]
  __int64 v53; // [rsp+230h] [rbp+1B0h]
  char v54; // [rsp+238h] [rbp+1B8h]
  __int64 v55; // [rsp+280h] [rbp+200h]
  __int64 v56; // [rsp+288h] [rbp+208h]
  char v57; // [rsp+290h] [rbp+210h]
  __int64 *v58; // [rsp+310h] [rbp+290h]
  __int64 v59; // [rsp+318h] [rbp+298h]

  v58 = &v39;
  v59 = -2;
  sub_1410046A0();
  v55 = 1;
  v56 = 1;
  v57 = 0;
  v48 = 0;
  v49 = 0;
  v43 = 0;
  v47 = 0;
  v50 = 8;
  v51 = 0;
  v52 = 8;
  v53 = 0;
  v54 = 1;
  nullsub_1(v2);
  v3 = (__m128i *)sub_140001650(512, 128);
  if ( !v3 )
    sub_141938D11(128, 512);
  v4 = (__int64)v3;
  sub_1418F44E0(v3, &v43, 0x200u);
  v42[0] = 1;
  v42[1] = v4;
  v42[2] = 1;
  v42[3] = v4;
  v55 = 1;
  v56 = 1;
  v57 = 0;
  v48 = 0;
  v49 = 0;
  v43 = 0;
  v47 = 0;
  v50 = 8;
  v51 = 0;
  v52 = 8;
  v53 = 0;
  v54 = 1;
  nullsub_1(v5);
  v6 = (__m128i *)sub_140001650(512, 128);
  if ( !v6 )
    sub_141938D11(128, 512);
  v7 = (__int64)v6;
  sub_1418F44E0(v6, &v43, 0x200u);
  v42[4] = 1;
  v42[5] = v7;
  v42[6] = 1;
  v42[7] = v7;
  v55 = 1;
  v56 = 1;
  v57 = 0;
  v48 = 0;
  v49 = 0;
  v43 = 0;
  v47 = 0;
  v50 = 8;
  v51 = 0;
  v52 = 8;
  v53 = 0;
  v54 = 1;
  nullsub_1(v8);
  v9 = (__m128i *)sub_140001650(512, 128);
  if ( !v9 )
    sub_141938D11(128, 512);
  v10 = v9;
  sub_1418F44E0(v9, &v43, 0x200u);
  v42[8] = 1;
  v42[9] = v10;
  v11 = _InterlockedIncrement64((volatile signed __int64 *)(v4 + 384));
  if ( (v11 < 0) ^ v12 | (v11 == 0) )
    __fastfail(7u);
  v43.m128i_i64[0] = 1;
  v43.m128i_i64[1] = v4;
  *(_QWORD *)&v44 = 1;
  *((_QWORD *)&v44 + 1) = v10;
  v41[0] = -1;
  sub_140052FD0(v36, v41, 0);
  v13 = *(volatile signed __int64 **)&v36[0];
  if ( !*(_QWORD *)&v36[0] )
  {
    *(_QWORD *)&v36[0] = *((_QWORD *)&v36[0] + 1);
    sub_141939040(
      (unsigned int)aFailedToSpawnT_9,
      22,
      (unsigned int)v36,
      (unsigned int)&off_141A6D548,
      (__int64)&off_141A6ED08);
  }
  CloseHandle(*(HANDLE *)&v36[1]);
  if ( !_InterlockedDecrement64(v13) )
    sub_141691170(v36);
  if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v36[0] + 1)) )
    sub_141691030((char *)v36 + 8);
  v43.m128i_i64[0] = 1;
  v43.m128i_i64[1] = v7;
  *(_QWORD *)&v44 = 1;
  *((_QWORD *)&v44 + 1) = v10;
  sub_1410037E0(v43.m128i_i64);
  v40[0] = 1;
  v40[1] = v4;
  v41[0] = 1;
  v41[1] = v7;
  v18 = sub_14167FC00(v15, v14, v16, v17);
  v20 = sub_1416A1240(v18, v19, 15, 0, (__int64)&off_141A6ED48);
  v22 = v21;
  while ( 1 )
  {
    sub_14092B770(&v43, v41);
    if ( v43.m128i_i64[0] != -1 )
    {
      *((_QWORD *)&v36[1] + 1) = v44;
      *(__m128i *)((char *)v36 + 8) = v43;
      goto LABEL_23;
    }
    sub_14092B3D0(&v43, v40, 0, 50000000);
    if ( v43.m128i_i64[0] != -2 )
    {
      v38 = v46;
      v37 = v45;
      v36[1] = v44;
      v36[0] = v43;
      goto LABEL_24;
    }
    if ( v43.m128i_i8[8] )
      break;
    v27 = sub_14167FC00(v24, v23, v25, v26);
    if ( v27 == v20 )
    {
      if ( v28 >= v22 )
      {
LABEL_17:
        sub_1410046A0();
        nullsub_1(v29);
        v30 = sub_140001650(54, 1);
        if ( !v30 )
          sub_141938D2B(1, 54);
        *(_OWORD *)(v30 + 32) = xmmword_141A6ED80;
        *(_OWORD *)(v30 + 16) = xmmword_141A6ED70;
        *(_OWORD *)v30 = xmmword_141A6ED60;
        *(_QWORD *)(v30 + 46) = 0x8280E38D80E3AE94uLL;
        *((_QWORD *)&v36[0] + 1) = 54;
        *(_QWORD *)&v36[1] = v30;
        *((_QWORD *)&v36[1] + 1) = 54;
        goto LABEL_23;
      }
    }
    else if ( v27 >= v20 )
    {
      goto LABEL_17;
    }
  }
  nullsub_1(v24);
  v31 = sub_140001650(66, 1);
  if ( !v31 )
    sub_141938D2B(1, 66);
  *(_OWORD *)(v31 + 48) = xmmword_141A6EDC6;
  *(_OWORD *)(v31 + 32) = xmmword_141A6EDB6;
  *(_OWORD *)(v31 + 16) = xmmword_141A6EDA6;
  *(_OWORD *)v31 = xmmword_141A6ED96;
  *(_WORD *)(v31 + 64) = -32128;
  *((_QWORD *)&v36[0] + 1) = 66;
  *(_QWORD *)&v36[1] = v31;
  *((_QWORD *)&v36[1] + 1) = 66;
LABEL_23:
  *(_QWORD *)&v36[0] = -1;
LABEL_24:
  sub_14094A530(v41);
  sub_140948D20(v40);
  v43.m128i_i64[0] = -1;
  sub_1410037E0(v43.m128i_i64);
  v32 = v36[0];
  v33 = v36[1];
  v34 = v37;
  a1[3] = v38;
  a1[2] = v34;
  a1[1] = v33;
  *a1 = v32;
  sub_140939B80(v42);
  return a1;
}
