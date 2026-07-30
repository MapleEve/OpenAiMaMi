// win 1.2.4 delta | cmd_set_codex_no_account_slots @ 0x140e2de30
// [FULL decompile]
// win 1.2.4 delta | cmd_set_codex_no_account_slots | (win-native 锚点: 命令名串/跨平台签名)
char __fastcall set_codex_no_account_slots(__int64 a1, __int64 a2)
{
  __int128 v2; // rcx
  bool v3; // of
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  char v12; // cl
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm6
  __int64 v16; // rsi
  __int64 *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rdi
  const __m128i *v22; // r11
  __m128i v23; // xmm0
  __int128 v24; // xmm1
  const __m128i *v25; // r15
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r8
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r9
  __int64 v32; // rt0
  volatile signed __int64 *v33; // r10
  __int64 v34; // rt0
  volatile signed __int64 *v35; // r11
  __int64 v36; // rt0
  volatile signed __int64 *v37; // rdi
  __int64 v38; // rt0
  char v39; // cl
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned __int8 v52; // di
  __int64 v53; // r15
  __int128 v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int128 v57; // xmm1
  __m128i *v58; // rbx
  unsigned __int64 v59; // r14
  _BYTE *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // rdi
  __int64 v65; // r15
  __int64 v66; // r14
  char v67; // cl
  char result; // al
  __int64 v69; // rax
  unsigned __int64 v70; // rbx
  const __m128i *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 *v74; // rcx
  __int64 *v75; // r15
  __int64 v76; // rdi
  __int64 v77; // rdx
  _QWORD *v78; // rdi
  __int128 v79; // [rsp+38h] [rbp-48h] BYREF
  __int64 v80; // [rsp+48h] [rbp-38h]
  __m128i v81; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v82; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v83; // [rsp+1F0h] [rbp+170h]
  __int128 v84; // [rsp+200h] [rbp+180h]
  __int128 v85; // [rsp+210h] [rbp+190h]
  __int64 v86; // [rsp+220h] [rbp+1A0h]
  __m128i v87; // [rsp+300h] [rbp+280h] BYREF
  __int64 v88; // [rsp+310h] [rbp+290h]
  __int128 v89; // [rsp+318h] [rbp+298h]
  __int64 v90; // [rsp+328h] [rbp+2A8h]
  __m128i *v91; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 (__fastcall **v92)(); // [rsp+338h] [rbp+2B8h]
  __m128i v93; // [rsp+340h] [rbp+2C0h]
  char v94[288]; // [rsp+350h] [rbp+2D0h] BYREF
  __m128i v95; // [rsp+470h] [rbp+3F0h]
  __int64 v96; // [rsp+480h] [rbp+400h]
  __int128 v97; // [rsp+488h] [rbp+408h]
  __int64 v98; // [rsp+498h] [rbp+418h]
  _BYTE v99[24]; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v100; // [rsp+4B8h] [rbp+438h]
  __int64 v101; // [rsp+4C0h] [rbp+440h]
  char v102[416]; // [rsp+4C8h] [rbp+448h] BYREF
  __int64 v103; // [rsp+668h] [rbp+5E8h] BYREF
  char v104; // [rsp+670h] [rbp+5F0h]
  char v105; // [rsp+671h] [rbp+5F1h]
  int v106; // [rsp+672h] [rbp+5F2h]
  __int16 v107; // [rsp+676h] [rbp+5F6h]
  __m128i v108; // [rsp+678h] [rbp+5F8h]
  __int64 v109; // [rsp+688h] [rbp+608h]
  _BYTE v110[40]; // [rsp+690h] [rbp+610h] BYREF
  __int128 v111; // [rsp+6B8h] [rbp+638h] BYREF
  __int128 v112; // [rsp+6C8h] [rbp+648h]
  __int128 v113; // [rsp+6D8h] [rbp+658h]
  __int64 v114; // [rsp+6E8h] [rbp+668h]
  __m128i v115; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v116; // [rsp+860h] [rbp+7E0h]
  __int64 v117; // [rsp+870h] [rbp+7F0h]
  __int64 v118; // [rsp+878h] [rbp+7F8h]
  volatile signed __int64 *v119; // [rsp+880h] [rbp+800h]
  __int128 v120; // [rsp+888h] [rbp+808h]
  __int128 v121; // [rsp+898h] [rbp+818h]
  __int128 v122; // [rsp+8A8h] [rbp+828h]
  __int64 v123; // [rsp+8B8h] [rbp+838h]
  __m128i v124; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 v125; // [rsp+8D0h] [rbp+850h]
  _QWORD *m128i_i64; // [rsp+8D8h] [rbp+858h]
  __int64 *v127; // [rsp+8E0h] [rbp+860h]
  const __m128i *v128; // [rsp+8E8h] [rbp+868h]
  char v129; // [rsp+8F7h] [rbp+877h] BYREF
  const __m128i *v130; // [rsp+8F8h] [rbp+878h]
  __int64 v131; // [rsp+900h] [rbp+880h]
  __int64 v132; // [rsp+908h] [rbp+888h]
  char v133; // [rsp+917h] [rbp+897h]
  __int64 v134; // [rsp+918h] [rbp+898h]

  *(_QWORD *)&v2 = a1;
  v3 = 0;
  v134 = -2;
  v5 = v2;
  v6 = *(unsigned __int8 *)(v2 + 1856);
  v131 = v2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(v2 + 1857) = 257;
      *(_BYTE *)(v2 + 1859) = 1;
      *((_QWORD *)&v2 + 1) = v2 + 1120;
      sub_1416F15C0(v2 + 1120, v2 + 392, 728);
      switch ( *(_BYTE *)(v5 + 1840) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_100;
        case 2:
          goto LABEL_99;
        case 3:
          goto LABEL_17;
      }
    case 1LL:
      sub_1417344D0(&off_14182F8F0);
    case 2LL:
      sub_1417344F0(&off_14182F8F0);
    case 3LL:
      *((_QWORD *)&v2 + 1) = v2 + 1120;
      switch ( *(_BYTE *)(v2 + 1840) )
      {
        case 0:
LABEL_4:
          v7 = v5 + 1640;
          *(_QWORD *)v110 = aSetCodexNoAcco;
          *(_QWORD *)&v110[8] = 26;
          *(_QWORD *)&v110[16] = aManager_1;
          *(_QWORD *)&v110[24] = 7;
          v132 = *((_QWORD *)&v2 + 1);
          *(_QWORD *)&v110[32] = *((_QWORD *)&v2 + 1);
          v111 = (unsigned __int64)(v5 + 1640);
          v8 = sub_14002B7A0((volatile void *)(*(_QWORD *)(v5 + 1632) + 16LL));
          v127 = (__int64 *)(v5 + 1640);
          if ( v8 )
            goto LABEL_5;
          sub_1416F2670(v99, v110, &v110[16]);
          v9 = v99[0];
          if ( v99[0] != 0xFF )
            goto LABEL_38;
          v8 = *(_QWORD *)&v99[8];
LABEL_5:
          *(_QWORD *)v110 = aSetCodexNoAcco;
          *(_QWORD *)&v110[8] = 26;
          *(_QWORD *)&v110[16] = aSlots;
          *(_QWORD *)&v110[24] = 5;
          *(_QWORD *)&v110[32] = v132;
          v111 = v7;
          sub_1403046A0(v99, v110);
          v9 = v99[0];
          if ( v99[0] == 0xFF )
          {
            v10 = *(_QWORD *)&v99[8];
            v11 = v100;
            v130 = *(const __m128i **)&v99[16];
            v80 = v100;
            v79 = *(_OWORD *)&v99[8];
            *(_QWORD *)v110 = aSetCodexNoAcco;
            *(_QWORD *)&v110[8] = 26;
            *(_QWORD *)&v110[16] = aRelaunch;
            *(_QWORD *)&v110[24] = 8;
            *(_QWORD *)&v110[32] = v132;
            v111 = v7;
            sub_1407AAB60(v99, v110);
            v9 = v99[0];
            v12 = v99[1];
            v3 = __OFSUB__(v99[0], -1);
            if ( v99[0] == 0xFF )
            {
              v5 = v131;
              *(_QWORD *)(v131 + 1688) = v8;
              *(_OWORD *)(v5 + 1664) = v79;
              *(_QWORD *)(v5 + 1680) = v80;
              *(_BYTE *)(v5 + 1712) = v12;
              *(_BYTE *)(v5 + 1713) = 0;
              v22 = (const __m128i *)(v5 + 1720);
              *(_QWORD *)(v5 + 1768) = *(_QWORD *)(v5 + 1712);
              v54 = *(_OWORD *)(v5 + 1664);
              v55 = *(_QWORD *)(v5 + 1680);
              *(_QWORD *)&v2 = *(_QWORD *)(v5 + 1688);
              *(_OWORD *)(v5 + 1752) = *(_OWORD *)(v5 + 1696);
              *(_QWORD *)(v5 + 1736) = v55;
              *(_QWORD *)(v5 + 1744) = v2;
              *(_OWORD *)(v5 + 1720) = v54;
              v21 = (__int64 *)(v5 + 1832);
              *(_BYTE *)(v5 + 1832) = 0;
              *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768);
              v56 = _mm_loadu_si128((const __m128i *)(v5 + 1720));
              v57 = *(_OWORD *)(v5 + 1736);
              *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752);
              *(_OWORD *)(v5 + 1792) = v57;
              *(__m128i *)(v5 + 1776) = v56;
              v25 = (const __m128i *)(v5 + 1776);
              *((_QWORD *)&v2 + 1) = v132;
              switch ( *(_BYTE *)(v5 + 1825) )
              {
                case 0:
                  goto LABEL_20;
                case 1:
                  goto LABEL_102;
                case 2:
                  goto LABEL_101;
                case 3:
                  goto LABEL_55;
              }
            }
            LOBYTE(v128) = v99[1];
            v13 = *(unsigned int *)&v99[2];
            v14 = (unsigned __int64)*(unsigned __int16 *)&v99[6] << 32;
            v15 = _mm_loadu_si128((const __m128i *)&v99[8]);
            v16 = v100;
            if ( v11 )
            {
              v17 = &v130[3].m128i_i64[1];
              do
              {
                v18 = *(v17 - 7);
                if ( v18 )
                  sub_140001660(*(v17 - 6), v18, 1);
                v19 = *(v17 - 4);
                if ( v19 )
                  sub_140001660(*(v17 - 3), v19, 1);
                v20 = *(v17 - 1);
                if ( v20 != -1 && v20 )
                  sub_140001660(*v17, v20, 1);
                v17 += 9;
                --v11;
              }
              while ( v11 );
            }
            v45 = v14 | v13;
            if ( v10 )
              sub_140001660(v130, 72 * v10, 8);
            v46 = v132;
            LOBYTE(v44) = (_BYTE)v128;
          }
          else
          {
LABEL_38:
            LOBYTE(v44) = v99[1];
            v45 = *(unsigned int *)&v99[2] | ((unsigned __int64)*(unsigned __int16 *)&v99[6] << 32);
            v15 = _mm_loadu_si128((const __m128i *)&v99[8]);
            v16 = v100;
            v46 = v132;
          }
          v132 = v46;
          sub_140D64CE0(v46);
          if ( *v127 == -1 )
          {
            v52 = 1;
            v53 = v131;
            goto LABEL_86;
          }
          m128i_i64 = (_QWORD *)(v131 + 1648);
          v49 = *(_QWORD *)(v131 + 1648);
          v128 = *(const __m128i **)(v131 + 1656);
          v130 = nullptr;
          v117 = v49;
          while ( v128 != v130 )
          {
            v130 = (const __m128i *)((char *)v130 + 1);
            v50 = v49 + 96;
            sub_140296460();
            v49 = v50;
          }
          v51 = *v127;
          v52 = 1;
          v53 = v131;
          if ( !*v127 )
            goto LABEL_86;
          goto LABEL_85;
        case 1:
LABEL_100:
          v132 = *((_QWORD *)&v2 + 1);
          sub_1417344D0(&off_141831488);
        case 2:
LABEL_99:
          v132 = *((_QWORD *)&v2 + 1);
          sub_1417344F0(&off_141831488);
        case 3:
          goto LABEL_17;
      }
  }
LABEL_17:
  v21 = (__int64 *)(v5 + 1832);
  v22 = (const __m128i *)(v5 + 1720);
  switch ( *(_BYTE *)(v5 + 1832) )
  {
    case 0:
      *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768);
      v23 = _mm_loadu_si128(v22);
      v24 = *(_OWORD *)(v5 + 1736);
      *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752);
      *(_OWORD *)(v5 + 1792) = v24;
      *(__m128i *)(v5 + 1776) = v23;
      v25 = (const __m128i *)(v5 + 1776);
      switch ( *(_BYTE *)(v5 + 1825) )
      {
        case 0:
          goto LABEL_20;
        case 1:
          goto LABEL_102;
        case 2:
          goto LABEL_101;
        case 3:
          goto LABEL_55;
      }
    case 1:
      v132 = *((_QWORD *)&v2 + 1);
      v123 = v5 + 1720;
      sub_1417344D0(&off_14182F870);
    case 2:
      v132 = *((_QWORD *)&v2 + 1);
      v123 = v5 + 1720;
      sub_1417344F0(&off_14182F870);
    case 3:
      v25 = (const __m128i *)(v5 + 1776);
      switch ( *(_BYTE *)(v5 + 1825) )
      {
        case 0:
LABEL_20:
          *(_BYTE *)(v5 + 1826) = 0;
          *(_QWORD *)&v2 = *(_QWORD *)(v5 + 1800);
          *(_QWORD *)(v5 + 1808) = v2;
          *(_BYTE *)(v5 + 1827) = 1;
          v116 = v25[1].m128i_i64[0];
          v115 = _mm_loadu_si128(v25);
          v26 = *(_BYTE *)(v5 + 1824);
          v27 = *(_QWORD *)v2;
          v28 = _InterlockedIncrement64(*(volatile signed __int64 **)v2);
          if ( (v28 < 0) ^ v3 | (v28 == 0) )
            goto LABEL_106;
          v29 = *(volatile signed __int64 **)(v2 + 8);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v3 | (v30 == 0) )
            goto LABEL_106;
          v31 = *(volatile signed __int64 **)(v2 + 16);
          v32 = _InterlockedIncrement64(v31);
          if ( (v32 < 0) ^ v3 | (v32 == 0) )
            goto LABEL_106;
          v33 = *(volatile signed __int64 **)(v2 + 24);
          v34 = _InterlockedIncrement64(v33);
          if ( (v34 < 0) ^ v3 | (v34 == 0) )
            goto LABEL_106;
          v127 = v21;
          v128 = v22;
          v35 = *(volatile signed __int64 **)(v2 + 32);
          v36 = _InterlockedIncrement64(v35);
          if ( (v36 < 0) ^ v3 | (v36 == 0) )
            goto LABEL_106;
          v37 = *(volatile signed __int64 **)(v2 + 40);
          v38 = _InterlockedIncrement64(v37);
          if ( (v38 < 0) ^ v3 | (v38 == 0) )
            goto LABEL_106;
          m128i_i64 = v25->m128i_i64;
          v132 = *((_QWORD *)&v2 + 1);
          *((_QWORD *)&v2 + 1) = *(_QWORD *)(v2 + 56);
          if ( *((_QWORD *)&v2 + 1) )
          {
            if ( _InterlockedIncrement64(*((volatile signed __int64 **)&v2 + 1)) <= 0 )
              goto LABEL_106;
          }
          *(_QWORD *)&v2 = *(_QWORD *)(v2 + 48);
          if ( _InterlockedIncrement64((volatile signed __int64 *)v2) <= 0 )
LABEL_106:
            BUG();
          v118 = v27;
          v119 = v29;
          *(_QWORD *)&v120 = v31;
          *((_QWORD *)&v120 + 1) = v33;
          *(_QWORD *)&v121 = v35;
          *((_QWORD *)&v121 + 1) = v37;
          v122 = v2;
          *(_WORD *)(v5 + 1826) = 0;
          v113 = v122;
          v112 = v121;
          v111 = v120;
          *(_QWORD *)&v110[24] = v118;
          *(_QWORD *)&v110[32] = v119;
          *(__m128i *)v110 = _mm_load_si128(&v115);
          *(_QWORD *)&v110[16] = v116;
          v39 = 1;
          if ( v26 != 2 )
            v39 = v26;
          LOBYTE(v114) = v39;
          v40 = off_141F53780;
          if ( *((_DWORD *)off_141F53780 + 24) )
          {
            v133 = 1;
            v78 = off_141F53780;
            sub_14170CFB7(off_141F53780);
            v40 = v78;
          }
          if ( *((_DWORD *)v40 + 4) == 2 )
          {
            v41 = 704;
            if ( *(_BYTE *)v40 )
              v41 = 472;
            v42 = v40[1] + v41;
            v133 = 0;
            v43 = sub_1406B72A0(v42, v40, v110, &off_1417FC2F8);
          }
          else
          {
            v47 = 704;
            if ( *((_BYTE *)v40 + 64) )
              v47 = 472;
            v48 = v40[9] + v47;
            v133 = 0;
            v43 = sub_1406B72A0(v48, v40 + 8, v110, &off_1417FC2E0);
          }
          v5 = v131;
          *(_QWORD *)(v131 + 1816) = v43;
          break;
        case 1:
LABEL_102:
          m128i_i64 = v25->m128i_i64;
          v127 = v21;
          v128 = v22;
          JUMPOUT(0x140E2EEFALL);
        case 2:
LABEL_101:
          m128i_i64 = v25->m128i_i64;
          v127 = v21;
          v128 = v22;
          v132 = *((_QWORD *)&v2 + 1);
          sub_1417344F0(&off_141832D30);
        case 3:
LABEL_55:
          m128i_i64 = v25->m128i_i64;
          v127 = v21;
          v128 = v22;
          v132 = *((_QWORD *)&v2 + 1);
          break;
      }
      v130 = (const __m128i *)(v5 + 1816);
      sub_1406A3070(v110, v5 + 1816, a2);
      v58 = *(__m128i **)v110;
      if ( *(_QWORD *)v110 == -3 )
      {
        v60 = (_BYTE *)v131;
        *(_BYTE *)(v131 + 1825) = 3;
        goto LABEL_67;
      }
      if ( *(_QWORD *)v110 == -2 )
      {
        v125 = *(_QWORD *)&v110[24];
        v124 = *(__m128i *)&v110[8];
        v59 = 0x800000000000000CuLL;
      }
      else
      {
        v59 = *(_QWORD *)&v110[8];
        v124 = *(__m128i *)&v110[16];
        v125 = *(_QWORD *)&v110[32];
        sub_1416F15C0(&v91, &v111, 328);
      }
      v81 = _mm_load_si128(&v124);
      v82.m128i_i64[0] = v125;
      sub_1416F15C0(&v82.m128i_u64[1], &v91, 328);
      v61 = v130->m128i_i64[0];
      if ( (unsigned __int8)sub_1413601F0(v130->m128i_i64[0]) )
        sub_141354CF0(v61);
      if ( v58 == (__m128i *)-2LL )
      {
        *(_QWORD *)v110 = v59;
        *(__m128i *)&v110[8] = _mm_load_si128(&v81);
        *(__m128i *)&v110[24] = v82;
        *(_QWORD *)&v111 = v83;
        v124.m128i_i64[0] = (__int64)v110;
        v124.m128i_i64[1] = (__int64)sub_1412A4620;
        sub_141509590(&v91, &unk_1418309A0, &v124);
        sub_140D64E60(v110);
        v64 = (unsigned __int64)v91;
        v44 = (__int64)v92;
        v16 = v93.m128i_i64[0];
LABEL_70:
        v69 = v131;
        *(_BYTE *)(v131 + 1826) = 0;
        *(_BYTE *)(v69 + 1827) = 0;
        *(_BYTE *)(v69 + 1825) = 1;
        v70 = v64 >> 8;
        goto LABEL_71;
      }
      if ( v58 == (__m128i *)-1LL )
      {
        *(_QWORD *)v110 = v59;
        *(__m128i *)&v110[8] = v81;
        *(__m128i *)&v110[24] = _mm_loadu_si128(&v82);
        v111 = v83;
        v112 = v84;
        v113 = v85;
        v114 = v86;
        v124.m128i_i64[0] = 0;
        v124.m128i_i64[1] = 1;
        v125 = 0;
        v93.m128i_i64[0] = 1610612768;
        v91 = &v124;
        v92 = &off_14183C100;
        if ( (unsigned __int8)sub_1406A4FE0(v110, &v91) )
          sub_141734130(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v129,
            (unsigned int)&unk_141833EE0,
            (__int64)&off_14183C1B8);
        v44 = v124.m128i_i64[1];
        v64 = v124.m128i_i64[0];
        v16 = v125;
        sub_140D660A0(v110);
        goto LABEL_70;
      }
      v92 = (__int64 (__fastcall **)())v59;
      v93 = v81;
      sub_1416F15C0(v94, &v82, 288);
      v97 = v89;
      v98 = v90;
      v95 = _mm_load_si128(&v87);
      v96 = v88;
      v91 = v58;
      sub_1406679C0(v110, &v91);
      v64 = *(_QWORD *)&v110[8];
      v65 = *(_QWORD *)v110;
      v16 = *(_QWORD *)&v110[24];
      v44 = *(_QWORD *)&v110[16];
      v66 = *(_QWORD *)&v110[32];
      sub_1416F15C0(&v79, &v111, 408);
      v60 = (_BYTE *)v131;
      *(_BYTE *)(v131 + 1826) = 0;
      v60[1827] = 0;
      v60[1825] = 1;
      if ( v65 == -2 )
      {
LABEL_67:
        v60[1832] = 3;
        v60[1840] = 3;
        v67 = 3;
        result = 1;
        goto LABEL_87;
      }
      v70 = v64 >> 8;
      if ( v65 == -1 )
      {
LABEL_71:
        v45 = v70 << 8;
        v71 = (const __m128i *)(v45 | (unsigned __int8)v64);
        if ( v16 < 0 )
        {
          v45 = 0;
          goto LABEL_73;
        }
        if ( v16 )
        {
          nullsub_1(v62, v60, v63);
          v45 = 1;
          v72 = sub_140001650(v16, 1);
          if ( !v72 )
          {
LABEL_73:
            v130 = v71;
            m128i_i64 = (_QWORD *)v44;
            sub_141733E1B(v45, v16);
          }
          v73 = v72;
          sub_1416F15C0(v72, v44, v16);
          if ( !v71 )
            goto LABEL_78;
        }
        else
        {
          v73 = 1;
          if ( !v71 )
            goto LABEL_78;
        }
        sub_140001660(v44, v71, 1);
LABEL_78:
        v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v73);
LABEL_79:
        v52 = 1;
        v9 = 3;
        goto LABEL_80;
      }
      sub_1416F15C0(v102, &v79, 408);
      *(_QWORD *)v99 = v65;
      v99[8] = v64;
      *(_DWORD *)&v99[9] = v64 >> 8;
      v99[15] = v64 >> 8 >> 48;
      *(_WORD *)&v99[13] = HIDWORD(v64) >> 8;
      *(_QWORD *)&v99[16] = v44;
      v100 = v16;
      v101 = v66;
      sub_1406AF940(v110, v99);
      v45 = *(unsigned int *)&v110[10] | ((unsigned __int64)*(unsigned __int16 *)&v110[14] << 32);
      v9 = v110[8];
      LOBYTE(v44) = v110[9];
      v15 = _mm_loadu_si128((const __m128i *)&v110[16]);
      v16 = *(_QWORD *)&v110[32];
      if ( *(_QWORD *)v110 != -1 )
      {
        *(__m128i *)&v110[16] = v15;
        v81.m128i_i64[0] = 0;
        v81.m128i_i64[1] = 1;
        v82.m128i_i64[0] = 0;
        v93.m128i_i64[0] = 1610612768;
        v91 = &v81;
        v92 = &off_14183C100;
        if ( (unsigned __int8)sub_1412A4620(v110, &v91) )
          sub_141734130(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v129,
            (unsigned int)&unk_141833EE0,
            (__int64)&off_14183C1B8);
        v15 = _mm_load_si128(&v81);
        v16 = v82.m128i_i64[0];
        sub_140D64E60(v110);
        goto LABEL_79;
      }
      v52 = 0;
LABEL_80:
      *(_BYTE *)v127 = 1;
      sub_140D3AF80(v128);
      sub_140D64CE0(v132);
      v53 = v131;
      if ( *(_QWORD *)(v131 + 1640) != -1 )
      {
        m128i_i64 = (_QWORD *)(v131 + 1648);
        v74 = *(__int64 **)(v131 + 1648);
        v128 = *(const __m128i **)(v131 + 1656);
        v130 = nullptr;
        v127 = v74;
        while ( v128 != v130 )
        {
          v130 = (const __m128i *)((char *)v130 + 1);
          v75 = v74 + 12;
          sub_140296460();
          v74 = v75;
        }
        v53 = v131;
        v51 = *(_QWORD *)(v131 + 1640);
        if ( v51 )
LABEL_85:
          sub_140001660(*m128i_i64, 96 * v51, 8);
      }
LABEL_86:
      *(_BYTE *)(v53 + 1840) = 1;
      sub_140D592B0(v132);
      v106 = v45;
      v107 = WORD2(v45);
      v109 = v16;
      v104 = v9;
      v105 = v44;
      v108 = v15;
      v103 = v52;
      v76 = v131;
      *(_BYTE *)(v131 + 1859) = 0;
      sub_1416F15C0(v110, v76, 360);
      *(_BYTE *)(v76 + 1858) = 0;
      v77 = *(_QWORD *)(v76 + 384);
      *(_BYTE *)(v76 + 1857) = 0;
      *(_QWORD *)&v99[16] = *(_QWORD *)(v76 + 376);
      *(__m128i *)v99 = _mm_loadu_si128((const __m128i *)(v76 + 360));
      sub_1407A09A0(
        (unsigned int)v110,
        v77,
        (unsigned int)&v103,
        (unsigned int)v99,
        *(_DWORD *)(v76 + 1848),
        *(_DWORD *)(v76 + 1852));
      v67 = 1;
      result = 0;
      v60 = (_BYTE *)v131;
LABEL_87:
      v60[1856] = v67;
      return result;
  }
}
