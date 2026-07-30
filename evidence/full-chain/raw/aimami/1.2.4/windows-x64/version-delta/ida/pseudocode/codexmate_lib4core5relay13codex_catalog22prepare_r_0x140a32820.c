// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog22prepare_r @ 0x140a32820
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog22prepare_r | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A32820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rcx
  __int128 v22; // kr00_16
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int128 v34; // rdi
  unsigned __int64 v35; // rcx
  _QWORD *v36; // r15
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  bool v41; // cf
  __int128 v42; // xmm0
  __int64 v43; // rdx
  __int128 v44; // kr10_16
  unsigned __int64 v45; // rbx
  __int64 v46; // r14
  unsigned __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  bool v52; // zf
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int128 v56; // xmm0
  _QWORD *v57; // rcx
  _QWORD *v58; // rsi
  __int128 v60; // [rsp+48h] [rbp-38h] BYREF
  __int128 v61; // [rsp+58h] [rbp-28h]
  __int128 v62; // [rsp+68h] [rbp-18h]
  __int128 v63; // [rsp+78h] [rbp-8h]
  __int128 v64; // [rsp+88h] [rbp+8h]
  __int64 v65; // [rsp+98h] [rbp+18h]
  __int64 v66; // [rsp+A0h] [rbp+20h]
  __int64 v67; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v68; // [rsp+B0h] [rbp+30h]
  __int64 v69; // [rsp+B8h] [rbp+38h]
  __int128 v70; // [rsp+C0h] [rbp+40h]
  __int64 v71; // [rsp+D0h] [rbp+50h]
  __int64 v72; // [rsp+D8h] [rbp+58h]
  __int128 v73; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v74; // [rsp+F0h] [rbp+70h]
  __int128 v75; // [rsp+100h] [rbp+80h]
  __int128 v76; // [rsp+110h] [rbp+90h]
  __int128 v77; // [rsp+120h] [rbp+A0h]
  __int64 v78; // [rsp+130h] [rbp+B0h]
  _QWORD *v79; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v80; // [rsp+148h] [rbp+C8h]
  __int128 v81; // [rsp+150h] [rbp+D0h] BYREF
  unsigned __int64 v82; // [rsp+160h] [rbp+E0h]
  __int64 v83; // [rsp+168h] [rbp+E8h]
  _BYTE v84[104]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v85; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v86; // [rsp+1F0h] [rbp+170h]
  __int128 v87; // [rsp+200h] [rbp+180h] BYREF
  __int64 v88; // [rsp+210h] [rbp+190h]
  unsigned __int64 v89; // [rsp+220h] [rbp+1A0h]
  __int64 v90; // [rsp+228h] [rbp+1A8h]
  _QWORD *v91; // [rsp+230h] [rbp+1B0h]
  char v92; // [rsp+23Eh] [rbp+1BEh]
  char v93; // [rsp+23Fh] [rbp+1BFh]
  __int64 v94; // [rsp+240h] [rbp+1C0h]

  v94 = -2;
  v12 = a5;
  sub_140A35FD0(&v60, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v13 = *((_QWORD **)&v60 + 1);
  v89 = v61;
  if ( !a7 )
  {
    sub_140A39DC0((unsigned int)v84, a3, a4, a5, a6, a8, a9, 1);
    *(_QWORD *)&v30 = *(_QWORD *)v84;
    *((_QWORD *)&v30 + 1) = *(_QWORD *)&v84[8] + 72LL * *(_QWORD *)&v84[16];
    *(_QWORD *)v84 = *(_QWORD *)&v84[8];
    *(_OWORD *)&v84[16] = v30;
    *(_QWORD *)&v84[32] = a3;
    *(_QWORD *)&v84[40] = a4;
    sub_1402FCD20(&v73, v84);
    *(_QWORD *)v84 = *((_QWORD *)&v73 + 1);
    *(_QWORD *)&v84[8] = *((_QWORD *)&v73 + 1);
    *(_QWORD *)&v84[16] = v73;
    *(_QWORD *)&v84[24] = *((_QWORD *)&v73 + 1) + 136 * v74;
    *(_QWORD *)&v84[32] = 0;
    *(_QWORD *)&v84[40] = a3;
    *(_QWORD *)&v84[48] = a4;
    *(_QWORD *)&v84[56] = v13;
    *(_QWORD *)&v84[64] = v89;
    sub_1400483D0(&v87, v84);
    goto LABEL_62;
  }
  v66 = a3;
  v69 = a1;
  *(_QWORD *)&v87 = 0;
  *((_QWORD *)&v87 + 1) = 8;
  v88 = 0;
  v65 = a5 + 24 * a6;
  v67 = 232 * a4;
  v91 = *((_QWORD **)&v60 + 1);
  v68 = 32 * v61;
  v14 = 32 * v61 + *((_QWORD *)&v60 + 1);
  v72 = a4;
  while ( v12 != v65 )
  {
    v15 = v12;
    v12 += 24;
    if ( a4 )
    {
      v80 = v12;
      v16 = *(_QWORD *)(v15 + 16);
      v17 = v67;
      v18 = v66;
      while ( *(_QWORD *)(v18 + 16) != v16
           || (unsigned int)sub_1416F1C50(*(_QWORD *)(v18 + 8), *(_QWORD *)(v15 + 8), v16) )
      {
        v18 += 232;
        v17 -= 232;
        if ( !v17 )
          goto LABEL_4;
      }
      sub_140661740(v84, v18);
      v19 = *(__int64 **)&v84[8];
      *(_QWORD *)&v81 = *(_QWORD *)&v84[8];
      *((_QWORD *)&v81 + 1) = *(_QWORD *)&v84[8];
      v82 = *(_QWORD *)v84;
      v90 = *(_QWORD *)&v84[8] + 96LL * *(_QWORD *)&v84[16];
      v83 = v90;
      while ( v19 != (__int64 *)v90 )
      {
        v20 = v19 + 12;
        *((_QWORD *)&v81 + 1) = v19 + 12;
        v21 = *v19;
        v78 = v19[11];
        v77 = *(_OWORD *)(v19 + 9);
        v76 = *(_OWORD *)(v19 + 7);
        v75 = *(_OWORD *)(v19 + 5);
        v74 = *(_OWORD *)(v19 + 3);
        v73 = *(_OWORD *)(v19 + 1);
        if ( v21 == 2 )
          break;
        *(_QWORD *)v84 = v21;
        *(_QWORD *)&v84[88] = v78;
        *(_OWORD *)&v84[72] = v77;
        *(_OWORD *)&v84[56] = v76;
        *(_OWORD *)&v84[40] = v75;
        *(_OWORD *)&v84[24] = v74;
        *(_OWORD *)&v84[8] = v73;
        v22 = v74;
        if ( v89 )
        {
          v23 = (__int64)v91;
          while ( 1 )
          {
            v24 = sub_14149A8D0(aSlug_3, 4, v23);
            if ( v24 )
            {
              if ( *(_BYTE *)v24 == 3
                && *(_QWORD *)(v24 + 24) == *((_QWORD *)&v22 + 1)
                && !(unsigned int)sub_1416F1C50(*(_QWORD *)(v24 + 16), v22, *((_QWORD *)&v22 + 1)) )
              {
                break;
              }
            }
            v23 += 32;
            if ( v23 == v14 )
              goto LABEL_23;
          }
          v25 = v23;
        }
        else
        {
LABEL_23:
          v25 = sub_140A35840(v22, *((_QWORD *)&v22 + 1), v91, v89);
          LODWORD(v23) = 0;
        }
        sub_140A2B770((unsigned int)&v85, v18, (unsigned int)v84, v23, v25);
        v26 = v88;
        if ( v88 == (_QWORD)v87 )
          sub_141709510(&v87);
        v27 = *((_QWORD *)&v87 + 1);
        v28 = 32 * v26;
        v29 = v85;
        *(_OWORD *)(*((_QWORD *)&v87 + 1) + v28 + 16) = v86;
        *(_OWORD *)(v27 + v28) = v29;
        v88 = v26 + 1;
        if ( *(_QWORD *)&v84[16] )
          sub_140001660(*(_QWORD *)&v84[24], *(_QWORD *)&v84[16], 1);
        if ( *(_QWORD *)&v84[64] != -1 && *(_QWORD *)&v84[64] )
          sub_140001660(*(_QWORD *)&v84[72], *(_QWORD *)&v84[64], 1);
        if ( *(_QWORD *)&v84[40] )
          sub_140001660(*(_QWORD *)&v84[48], *(_QWORD *)&v84[40], 1);
        v19 = v20;
      }
      sub_14028CD40(&v81);
LABEL_4:
      a4 = v72;
      v12 = v80;
    }
  }
  v82 = v88;
  v81 = v87;
  v31 = v68;
  if ( v89 >> 59 != 0 || v68 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v32 = 0;
    goto LABEL_36;
  }
  if ( v68 )
  {
    nullsub_1();
    v32 = 8;
    v33 = sub_140001650(v31, 8);
    if ( !v33 )
    {
LABEL_36:
      v93 = 1;
      sub_141733E1B(v32, v31);
    }
    *((_QWORD *)&v34 + 1) = v33;
    *(_QWORD *)&v34 = v89;
  }
  else
  {
    *((_QWORD *)&v34 + 1) = 8;
    *(_QWORD *)&v34 = 0;
  }
  v73 = v34;
  v35 = 0;
  v36 = v91;
  v37 = v34;
  while ( 1 )
  {
    v41 = v37-- == 0;
    if ( v41 || v36 == (_QWORD *)v14 )
      break;
    if ( v35 >= (unsigned __int64)v34 )
    {
      v90 = v35;
      sub_1417341B3(v35, v34, &off_14180F238);
    }
    switch ( *(_BYTE *)v36 )
    {
      case 0:
        v84[0] = 0;
        break;
      case 1:
      case 2:
        v42 = *(_OWORD *)v36;
        *(_OWORD *)&v84[16] = *((_OWORD *)v36 + 1);
        *(_OWORD *)v84 = v42;
        break;
      case 3:
        v90 = v35;
        sub_1415099A0(&v84[8], v36 + 1);
        v84[0] = 3;
        v35 = v90;
        break;
      case 4:
        v90 = v35;
        sub_14029ABD0(&v84[8], v36[2], v36[3]);
        v84[0] = 4;
        v35 = v90;
        break;
      case 5:
        v90 = v35;
        if ( v36[3] )
        {
          v43 = v36[1];
          if ( !v43 )
            sub_141734110(&off_1417BBFB8);
          sub_140299950(&v84[8], v43, v36[2]);
        }
        else
        {
          *(_QWORD *)&v84[8] = 0;
          *(_QWORD *)&v84[24] = 0;
        }
        v84[0] = 5;
        v35 = v90;
        break;
    }
    v36 += 4;
    v38 = v35 + 1;
    v39 = 32 * v35;
    v40 = *(_OWORD *)v84;
    *(_OWORD *)(*((_QWORD *)&v34 + 1) + v39 + 16) = *(_OWORD *)&v84[16];
    *(_OWORD *)(*((_QWORD *)&v34 + 1) + v39) = v40;
    v35 = v38;
  }
  v85 = v73;
  *(_QWORD *)&v86 = v89;
  v44 = v81;
  v45 = v82;
  v46 = 32 * v82;
  *(_QWORD *)v84 = *((_QWORD *)&v81 + 1);
  *(_QWORD *)&v84[8] = *((_QWORD *)&v81 + 1);
  *(_QWORD *)&v84[16] = v81;
  *(_QWORD *)&v84[24] = *((_QWORD *)&v81 + 1) + 32 * v82;
  if ( v82 > (unsigned __int64)v73 - v89 )
  {
    sub_1417092B0((unsigned int)&v85, v89, v82, 8, 32);
    v13 = v91;
    v47 = v86;
    goto LABEL_58;
  }
  v47 = v89;
  v13 = v91;
  if ( v82 )
LABEL_58:
    sub_1416F15C0(*((_QWORD *)&v85 + 1) + 32 * v47, *((_QWORD *)&v44 + 1), v46);
  *(_QWORD *)&v86 = v45 + v47;
  if ( (_QWORD)v44 )
    sub_140001660(*((_QWORD *)&v44 + 1), 32 * v44, 8);
  v87 = v85;
  v88 = v86;
  a1 = v69;
LABEL_62:
  *(_QWORD *)&v81 = 0;
  v82 = 0;
  nullsub_1();
  v48 = sub_140001650(6, 1);
  if ( !v48 )
    sub_141733E1B(1, 6);
  *(_WORD *)(v48 + 4) = 29548;
  *(_DWORD *)v48 = 1701080941;
  *(_QWORD *)&v85 = 6;
  *((_QWORD *)&v85 + 1) = v48;
  *(_QWORD *)&v86 = 6;
  v92 = 1;
  sub_1403FF460(v84, &v87);
  if ( v84[0] == 0xFF )
  {
    *(_QWORD *)&v73 = *(_QWORD *)&v84[8];
    sub_141734130(
      (unsigned int)aCalledResultUn_17,
      43,
      (unsigned int)&v73,
      (unsigned int)&off_141810468,
      (__int64)&off_141813ED8);
  }
  v74 = *(_OWORD *)&v84[16];
  v73 = *(_OWORD *)v84;
  v92 = 0;
  sub_1402E79F0(v84, &v81, &v85, &v73);
  if ( v84[0] != 0xFF )
    sub_14003DCD0(v84);
  *(_OWORD *)&v84[8] = v81;
  *(_QWORD *)&v84[24] = v82;
  v84[0] = 5;
  sub_1409AE7E0(&v81, v84);
  v49 = v81;
  if ( (_QWORD)v81 == -1 )
  {
    v79 = *((_QWORD **)&v81 + 1);
    *(_QWORD *)&v85 = &v79;
    *((_QWORD *)&v85 + 1) = sub_14149BB80;
    sub_141509590(&v73, &unk_14180F9D2, &v85);
    *(_QWORD *)&v86 = v74;
    v85 = v73;
    v51 = *v79;
    v52 = *v79 == 1;
    v91 = v79;
    if ( v52 )
    {
      sub_14049AA50(v79[1]);
    }
    else if ( !v51 )
    {
      v53 = v91[2];
      if ( v53 )
        sub_140001660(v91[1], v53, 1);
    }
    sub_140001660(v91, 40, 8);
    v73 = v85;
    *(_QWORD *)&v74 = v86;
    v50 = 10;
  }
  else
  {
    *(_QWORD *)&v74 = v82;
    v73 = v81;
    v50 = -1;
  }
  sub_14003DCD0(v84);
  v54 = *((_QWORD *)&v87 + 1);
  v90 = v88;
  v91 = nullptr;
  v80 = *((_QWORD *)&v87 + 1);
  while ( (_QWORD *)v90 != v91 )
  {
    v91 = (_QWORD *)((char *)v91 + 1);
    v55 = v54 + 32;
    sub_140291680();
    v54 = v55;
  }
  if ( (_QWORD)v87 )
    sub_140001660(*((_QWORD *)&v87 + 1), 32 * v87, 8);
  v70 = v73;
  v71 = v74;
  if ( v49 == -1 )
  {
    *(_QWORD *)(a1 + 32) = v71;
    *(_OWORD *)(a1 + 16) = v70;
    *(_QWORD *)(a1 + 8) = v50;
    *(_QWORD *)a1 = -1;
    v90 = 0;
    v91 = v13;
    v57 = v13;
    while ( v89 != v90 )
    {
      ++v90;
      v58 = v57 + 4;
      sub_140291680();
      v57 = v58;
    }
    if ( (_QWORD)v60 )
      sub_140001660(v91, 32 * v60, 8);
  }
  else
  {
    *(_QWORD *)&v84[16] = v71;
    v56 = v70;
    *(_OWORD *)v84 = v70;
    *(_OWORD *)&v84[88] = v64;
    *(_OWORD *)&v84[72] = v63;
    *(_OWORD *)&v84[56] = v62;
    *(_OWORD *)&v84[40] = v61;
    *(_OWORD *)&v84[24] = v60;
    *(_QWORD *)(a1 + 96) = *((_QWORD *)&v64 + 1);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v84[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v84[64];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v84[48];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v84[32];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v84[16];
    *(_OWORD *)a1 = v56;
    *(_BYTE *)(a1 + 104) = a7;
  }
  return a1;
}
