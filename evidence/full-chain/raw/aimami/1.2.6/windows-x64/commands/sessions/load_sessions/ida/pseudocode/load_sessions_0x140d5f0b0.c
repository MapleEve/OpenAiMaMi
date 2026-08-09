// Pseudocode for load_sessions (EA: 0x140d5f0b0, size: 0x110b)
// Module: commands/sessions
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:加载会话列表(repo)。归属:锚src\commands\sessions.rs。
// Tauri命令handler:加载会话列表(repo)。归属:锚src\commands\sessions.rs。
char __fastcall load_sessions(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm0
  volatile void *v10; // rbx
  __int64 *v11; // r14
  char *v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  char *v15; // r8
  __int64 v16; // r9
  void *v17; // r13
  __int128 v18; // rdi
  int v19; // r12d
  unsigned int v20; // r15d
  __int64 v21; // rbx
  PVOID v22; // rcx
  char v23; // al
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbx
  char v26; // bl
  int v27; // r13d
  unsigned int v28; // r12d
  __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rcx
  PVOID v34; // rcx
  char v35; // al
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdi
  const char *v43; // r14
  __int64 v44; // rbx
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r13
  __int64 v47; // r12
  __int64 v48; // rsi
  int v49; // r14d
  __int64 v50; // rbx
  const char *v51; // rax
  __int128 v52; // xmm0
  char v53; // cl
  char result; // al
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned __int8 v59; // r12
  __int64 v60; // r13
  __int64 *v61; // rcx
  __int64 *v62; // r13
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdx
  int v66; // eax
  _QWORD *v67; // rdi
  __int64 v68; // [rsp+20h] [rbp-60h]
  __int128 v69; // [rsp+30h] [rbp-50h] BYREF
  __int128 v70; // [rsp+40h] [rbp-40h]
  _QWORD v71[3]; // [rsp+410h] [rbp+390h] BYREF
  __int128 v72; // [rsp+428h] [rbp+3A8h]
  __m256i v73; // [rsp+438h] [rbp+3B8h]
  __int128 v74; // [rsp+458h] [rbp+3D8h]
  __int128 v75; // [rsp+468h] [rbp+3E8h]
  __int64 v76; // [rsp+478h] [rbp+3F8h]
  const char *v77; // [rsp+480h] [rbp+400h] BYREF
  __int64 v78; // [rsp+488h] [rbp+408h]
  __int64 v79; // [rsp+490h] [rbp+410h] BYREF
  _BYTE v80[48]; // [rsp+498h] [rbp+418h]
  __int128 v81; // [rsp+4C8h] [rbp+448h]
  __int128 v82; // [rsp+4D8h] [rbp+458h]
  __int64 v83; // [rsp+4E8h] [rbp+468h]
  __int128 v84; // [rsp+860h] [rbp+7E0h]
  __int128 v85; // [rsp+870h] [rbp+7F0h]
  __int128 v86; // [rsp+880h] [rbp+800h]
  __int64 v87; // [rsp+890h] [rbp+810h]
  __m256i v88; // [rsp+8A0h] [rbp+820h]
  __int128 v89; // [rsp+8C0h] [rbp+840h]
  __int128 v90; // [rsp+8D0h] [rbp+850h]
  __int64 v91; // [rsp+8E0h] [rbp+860h]
  __int64 v92; // [rsp+8E8h] [rbp+868h] BYREF
  char v93; // [rsp+8F0h] [rbp+870h]
  int v94; // [rsp+8F1h] [rbp+871h]
  __int16 v95; // [rsp+8F5h] [rbp+875h]
  char v96; // [rsp+8F7h] [rbp+877h]
  __int64 v97; // [rsp+8F8h] [rbp+878h]
  __int128 v98; // [rsp+900h] [rbp+880h]
  __m256i v99; // [rsp+910h] [rbp+890h] BYREF
  __int128 v100; // [rsp+930h] [rbp+8B0h]
  __int128 v101; // [rsp+940h] [rbp+8C0h]
  __int64 v102; // [rsp+950h] [rbp+8D0h]
  __m256i v103; // [rsp+960h] [rbp+8E0h]
  __int128 v104; // [rsp+980h] [rbp+900h]
  __int128 v105; // [rsp+990h] [rbp+910h]
  __int64 v106; // [rsp+9A0h] [rbp+920h]
  __int64 v107; // [rsp+9A8h] [rbp+928h]
  __int128 v108; // [rsp+9B0h] [rbp+930h] BYREF
  __int128 v109; // [rsp+9C0h] [rbp+940h]
  __int128 v110; // [rsp+9D0h] [rbp+950h]
  __int64 v111; // [rsp+9E0h] [rbp+960h]
  void *v112; // [rsp+9E8h] [rbp+968h] BYREF
  __int64 v113; // [rsp+9F0h] [rbp+970h]
  __int64 v114; // [rsp+9F8h] [rbp+978h]
  __int64 v115; // [rsp+A00h] [rbp+980h]
  __int64 v116; // [rsp+A08h] [rbp+988h]
  _BYTE *v117; // [rsp+A10h] [rbp+990h]
  __int64 *v118; // [rsp+A18h] [rbp+998h]
  char *v119; // [rsp+A20h] [rbp+9A0h]
  __int64 v120; // [rsp+A28h] [rbp+9A8h]
  PVOID Address; // [rsp+A30h] [rbp+9B0h]
  char v122; // [rsp+A3Eh] [rbp+9BEh]
  char v123; // [rsp+A3Fh] [rbp+9BFh] BYREF
  __int64 v124; // [rsp+A40h] [rbp+9C0h]

  v124 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 1712);
  v120 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1713) = 257;
      *(_BYTE *)(a1 + 1715) = 1;
      v5 = a1 + 1048;
      sub_14172B820(a1 + 1048, a1 + 392, 656);
      switch ( *(_BYTE *)(v3 + 1696) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_96;
        case 2:
          goto LABEL_95;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1048;
      switch ( *(_BYTE *)(a1 + 1696) )
      {
        case 0:
LABEL_4:
          v77 = aLoadSessions;
          v78 = 13;
          v79 = (__int64)aRepo_0;
          *(_QWORD *)v80 = 4;
          v115 = v5;
          *(_QWORD *)&v80[8] = v5;
          *(_OWORD *)&v80[16] = (unsigned __int64)(v3 + 1568);
          v6 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 1560) + 16LL));
          if ( v6 )
            goto LABEL_5;
          sub_14172C620((__int64)&v69, (__int64)&v77, (__int64)&v79);
          v26 = v69;
          if ( (_BYTE)v69 != 0xFF )
          {
            v118 = (__int64 *)(v3 + 1568);
            v27 = BYTE7(v69);
            v28 = *(unsigned __int16 *)((char *)&v69 + 5);
            v29 = *(unsigned int *)((char *)&v69 + 1);
            v30 = *((_QWORD *)&v69 + 1);
            v18 = v70;
            sub_140CAB140(v115);
            v24 = ((unsigned __int64)((v27 << 16) | v28) << 32) | v29;
            if ( *v118 == -1 )
            {
              v59 = 1;
              v60 = v120;
              goto LABEL_79;
            }
            v119 = (char *)(v120 + 1576);
            v31 = *(_QWORD *)(v120 + 1576);
            v117 = *(_BYTE **)(v120 + 1584);
            Address = nullptr;
            v116 = v31;
            while ( v117 != Address )
            {
              Address = (char *)Address + 1;
              v32 = v31 + 96;
              sub_140401FB0();
              v31 = v32;
            }
            v63 = *v118;
            v59 = 1;
            v60 = v120;
            if ( !*v118 )
              goto LABEL_79;
LABEL_76:
            sub_140001660(*(_QWORD *)v119, 96 * v63, 8);
LABEL_79:
            *(_BYTE *)(v60 + 1696) = 1;
            sub_140C9B600(v115);
            v94 = v24;
            v96 = BYTE6(v24);
            v95 = WORD2(v24);
            v98 = v18;
            v93 = v26;
            v97 = v30;
            v92 = v59;
            v64 = v120;
            *(_BYTE *)(v120 + 1715) = 0;
            sub_14172B820(&v77, v64, 360);
            *(_BYTE *)(v64 + 1714) = 0;
            v65 = *(_QWORD *)(v64 + 384);
            *(_BYTE *)(v64 + 1713) = 0;
            *(_QWORD *)&v70 = *(_QWORD *)(v64 + 376);
            v69 = *(_OWORD *)(v64 + 360);
            sub_140AFFC30((__int64)&v77, v65, (__int64)&v92, &v69, *(_DWORD *)(v64 + 1704), *(_DWORD *)(v64 + 1708));
            v53 = 1;
            result = 0;
            v13 = (_BYTE *)v120;
            goto LABEL_80;
          }
          v6 = *((_QWORD *)&v69 + 1);
LABEL_5:
          v3 = v120;
          *(_QWORD *)(v120 + 1592) = v6;
          *(_BYTE *)(v3 + 1616) = 0;
          a1 = v3 + 1624;
          *(_QWORD *)(v3 + 1624) = *(_QWORD *)(v3 + 1592);
          *(_QWORD *)(v3 + 1632) = *(_QWORD *)(v3 + 1600);
          *(_QWORD *)(v3 + 1640) = *(_QWORD *)(v3 + 1608);
          *(_BYTE *)(v3 + 1648) = *(_BYTE *)(v3 + 1616);
          *(_DWORD *)(v3 + 1649) = *(_DWORD *)(v3 + 1617);
          *(_WORD *)(v3 + 1653) = *(_WORD *)(v3 + 1621);
          *(_BYTE *)(v3 + 1655) = *(_BYTE *)(v3 + 1623);
          v117 = (_BYTE *)(v3 + 1688);
          *(_BYTE *)(v3 + 1688) = 0;
          v7 = *(_OWORD *)(v3 + 1624);
          v118 = (__int64 *)(v3 + 1624);
          *(_OWORD *)(v3 + 1672) = *(_OWORD *)(v3 + 1640);
          *(_OWORD *)(v3 + 1656) = v7;
LABEL_8:
          v10 = *(volatile void **)(v3 + 1656);
          *(_QWORD *)(v3 + 1664) = v10;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
            sub_14176CDB0(v10);
          Address = (PVOID)v10;
          v11 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v66 = sub_14176DA50(a1);
            LOBYTE(v66) = v66 ^ 1;
            LODWORD(v116) = v66;
            v12 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_25;
          }
          else
          {
            LODWORD(v116) = 0;
            v12 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_25;
          }
          *(_QWORD *)&v108 = 0;
          *((_QWORD *)&v108 + 1) = 1;
          *(_QWORD *)&v109 = 0;
          v79 = 1610612768;
          v77 = (const char *)&v108;
          v78 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v77) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v123,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v119 = *((char **)&v108 + 1);
          v17 = (void *)v108;
          LODWORD(v18) = (unsigned __int8)v109;
          v19 = BYTE7(v109);
          v20 = *(unsigned __int16 *)((char *)&v109 + 5);
          v21 = *(unsigned int *)((char *)&v109 + 1);
          if ( !(_BYTE)v116 && 2 * *v11 && !(unsigned __int8)sub_14176DA50(v14) )
            *((_BYTE *)Address + 1) = 1;
          v22 = Address;
          v23 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v23 == 2 )
            WakeByAddressSingle(v22);
          if ( v17 != (void *)-1LL )
          {
            v24 = (unsigned __int64)((v19 << 16) | v20) << 32;
            v25 = v24 | v21;
LABEL_54:
            v55 = v120;
            v103 = v99;
            v104 = v100;
            v105 = v101;
            v106 = v102;
            *(_BYTE *)(v120 + 1680) = 1;
            v88 = v103;
            v89 = v104;
            v90 = v105;
            v91 = v106;
            goto LABEL_55;
          }
          v12 = v119;
          LODWORD(v116) = v18;
LABEL_25:
          Address = v12;
          sub_140A80280(&v69, v12 + 8);
          if ( (v116 & 1) == 0 && 2 * *v11 && !(unsigned __int8)sub_14176DA50(v33) )
            *((_BYTE *)Address + 1) = 1;
          v34 = Address;
          v35 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v35 == 2 )
            WakeByAddressSingle(v34);
          sub_14172B820(&v77, &v69, 992);
          v36 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v122 = 1;
            v67 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v36 = v67;
          }
          if ( *((_DWORD *)v36 + 4) == 2 )
          {
            v37 = 704;
            if ( *(_BYTE *)v36 )
              v37 = 472;
            v38 = v36[1] + v37;
            v122 = 0;
            v39 = sub_14085D8F0(v38, v36, &v77, &off_1417EBF48);
          }
          else
          {
            v40 = 704;
            if ( *((_BYTE *)v36 + 64) )
              v40 = 472;
            v41 = v36[9] + v40;
            v122 = 0;
            v39 = sub_14085D8F0(v41, v36 + 8, &v77, &off_1417EBF30);
          }
          v42 = v120;
          *(_QWORD *)(v120 + 1672) = v39;
          Address = (PVOID)(v42 + 1672);
          sub_140500E30(&v77, v42 + 1672, a2);
          v43 = v77;
          if ( v77 == (const char *)-3LL )
          {
            v13 = (_BYTE *)v120;
            *(_BYTE *)(v120 + 1680) = 3;
          }
          else
          {
            if ( (_DWORD)v77 == -2 )
            {
              v44 = v78;
              v24 = (unsigned __int8)v79;
              v45 = ((unsigned __int64)((HIBYTE(v79) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v79 + 5)) << 32)
                  | *(unsigned int *)((char *)&v79 + 1);
              v46 = 0x800000000000000CuLL;
              v47 = *(_QWORD *)v80;
            }
            else
            {
              v46 = v78;
              v44 = v79;
              v24 = v80[0];
              v45 = ((unsigned __int64)((v80[7] << 16) | (unsigned int)*(unsigned __int16 *)&v80[5]) << 32)
                  | *(unsigned int *)&v80[1];
              v47 = *(_QWORD *)&v80[8];
              v108 = *(_OWORD *)&v80[16];
              v109 = *(_OWORD *)&v80[32];
              v110 = v81;
              v111 = v82;
            }
            v84 = v108;
            v85 = v109;
            v86 = v110;
            v87 = v111;
            v48 = *(_QWORD *)Address;
            if ( (unsigned __int8)sub_141398090(*(_QWORD *)Address) )
              sub_14139A2E0(v48);
            if ( (_DWORD)v43 != -1 )
            {
              if ( (_DWORD)v43 == -2 )
              {
                v77 = (const char *)v46;
                v78 = v44;
                LOBYTE(v79) = v24;
                *(_DWORD *)((char *)&v79 + 1) = v45;
                HIBYTE(v79) = BYTE6(v45);
                *(_WORD *)((char *)&v79 + 5) = WORD2(v45);
                *(_QWORD *)v80 = v47;
                *(_OWORD *)&v80[8] = v84;
                v112 = nullptr;
                v113 = 1;
                v114 = 0;
                *(_QWORD *)&v109 = 1610612768;
                *(_QWORD *)&v108 = &v112;
                *((_QWORD *)&v108 + 1) = &off_141891B48;
                if ( (unsigned __int8)sub_1412DDF00(&v77, &v108) )
                  sub_14176E860(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v123,
                    (unsigned int)&unk_141889838,
                    (__int64)&off_141891C00);
                v17 = v112;
                v119 = (char *)v113;
                LOBYTE(v18) = v114;
                v49 = HIBYTE(v114);
                DWORD2(v18) = *(unsigned __int16 *)((char *)&v114 + 5);
                v50 = *(unsigned int *)((char *)&v114 + 1);
                sub_140CAB2C0(&v77);
              }
              else
              {
                v77 = v43;
                v78 = v46;
                v79 = v44;
                v80[0] = v24;
                *(_DWORD *)&v80[1] = v45;
                v80[7] = BYTE6(v45);
                *(_WORD *)&v80[5] = WORD2(v45);
                *(_QWORD *)&v80[8] = v47;
                *(_OWORD *)&v80[16] = v84;
                *(_OWORD *)&v80[32] = v85;
                v81 = v86;
                *(_QWORD *)&v82 = v87;
                v112 = nullptr;
                v113 = 1;
                v114 = 0;
                *(_QWORD *)&v109 = 1610612768;
                *(_QWORD *)&v108 = &v112;
                *((_QWORD *)&v108 + 1) = &off_141891B48;
                if ( (unsigned __int8)sub_1405060F0(&v77, &v108) )
                  sub_14176E860(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v123,
                    (unsigned int)&unk_141889838,
                    (__int64)&off_141891C00);
                v17 = v112;
                v119 = (char *)v113;
                LOBYTE(v18) = v114;
                v49 = HIBYTE(v114);
                DWORD2(v18) = *(unsigned __int16 *)((char *)&v114 + 5);
                v50 = *(unsigned int *)((char *)&v114 + 1);
                sub_140CAC460(&v77);
              }
              v25 = ((unsigned __int64)((unsigned int)(v49 << 16) | DWORD2(v18)) << 32) | v50;
              goto LABEL_54;
            }
            *(_QWORD *)&v108 = v46;
            *((_QWORD *)&v108 + 1) = v44;
            *(_QWORD *)&v109 = (unsigned __int8)v24 | (v45 << 8);
            DWORD2(v109) = (unsigned __int8)v24 | ((_DWORD)v45 << 8);
            sub_1404CCCF0(&v77, &v108);
            v51 = v77;
            v17 = (void *)v78;
            v15 = (char *)v79;
            v52 = *(_OWORD *)v80;
            *(_QWORD *)&v18 = *(_QWORD *)v80;
            v99 = *(__m256i *)&v80[16];
            v100 = v81;
            v101 = v82;
            v102 = v83;
            v106 = v83;
            v105 = v82;
            v104 = v81;
            v103 = *(__m256i *)&v80[16];
            v13 = (_BYTE *)v120;
            *(_BYTE *)(v120 + 1680) = 1;
            if ( v51 != (const char *)-2LL )
            {
              v55 = v106;
              v91 = v106;
              v90 = v105;
              v89 = v104;
              v88 = v103;
              if ( v51 != (const char *)-1LL )
              {
                v76 = v91;
                v75 = v90;
                v74 = v89;
                v73 = v88;
                v71[0] = v51;
                v71[1] = v17;
                v71[2] = v15;
                v72 = v52;
                sub_140508910(&v77, v71);
                v24 = ((unsigned __int64)((HIBYTE(v78) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v78 + 5)) << 32)
                    | *(unsigned int *)((char *)&v78 + 1);
                v26 = v78;
                v30 = v79;
                v18 = *(_OWORD *)v80;
                if ( v77 == (const char *)-1LL )
                {
                  v59 = 0;
                }
                else
                {
                  HIBYTE(v78) = (((unsigned __int64)((HIBYTE(v78) << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v78 + 5)) << 32)
                               | *(unsigned int *)((char *)&v78 + 1)) >> 48;
                  *(_WORD *)((char *)&v78 + 5) = WORD2(v24);
                  *(_DWORD *)((char *)&v78 + 1) = v24;
                  v99.m256i_i64[0] = 0;
                  *(_OWORD *)&v99.m256i_u64[1] = 1u;
                  *(_QWORD *)&v70 = 1610612768;
                  *(_QWORD *)&v69 = &v99;
                  *((_QWORD *)&v69 + 1) = &off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v77, &v69) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v123,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v18 = *(_OWORD *)&v99.m256i_u64[1];
                  v30 = v99.m256i_i64[0];
                  sub_140CAB2C0(&v77);
                  v59 = 1;
                  v26 = 3;
                }
LABEL_63:
                *v117 = 1;
                sub_140CAB140(v115);
                v60 = v120;
                if ( *(_QWORD *)(v120 + 1568) == -1 )
                  goto LABEL_79;
                v119 = (char *)(v120 + 1576);
                v61 = *(__int64 **)(v120 + 1576);
                v117 = *(_BYTE **)(v120 + 1584);
                Address = nullptr;
                v118 = v61;
                while ( v117 != Address )
                {
                  Address = (char *)Address + 1;
                  v62 = v61 + 12;
                  sub_140401FB0();
                  v61 = v62;
                }
                v60 = v120;
                v63 = *(_QWORD *)(v120 + 1568);
                if ( !v63 )
                  goto LABEL_79;
                goto LABEL_76;
              }
              v119 = v15;
              v25 = (unsigned __int64)v18 >> 8;
LABEL_55:
              v56 = v25 << 8;
              *((_QWORD *)&v18 + 1) = v56 | (unsigned __int8)v18;
              if ( v56 < 0 )
              {
                v57 = 0;
                goto LABEL_57;
              }
              if ( *((_QWORD *)&v18 + 1) )
              {
                nullsub_1(v55, v13, v15, v16, v68);
                v57 = 1;
                v58 = sub_140001650(*((_QWORD *)&v18 + 1), 1);
                if ( !v58 )
                {
LABEL_57:
                  Address = v17;
                  sub_14176E54B(v57, *((_QWORD *)&v18 + 1));
                }
                *(_QWORD *)&v18 = v58;
                sub_14172B820(v58, v119, *((_QWORD *)&v18 + 1));
                if ( !v17 )
                  goto LABEL_62;
              }
              else
              {
                *(_QWORD *)&v18 = 1;
                if ( !v17 )
                  goto LABEL_62;
              }
              sub_140001660(v119, v17, 1);
LABEL_62:
              v59 = 1;
              v26 = 3;
              v30 = *((_QWORD *)&v18 + 1);
              goto LABEL_63;
            }
          }
          v13[1688] = 3;
          v13[1696] = 3;
          v53 = 3;
          result = 1;
LABEL_80:
          v13[1712] = v53;
          return result;
        case 1:
LABEL_96:
          v115 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_95:
          v115 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v115 = v5;
          v117 = (_BYTE *)(v3 + 1688);
          v8 = *(unsigned __int8 *)(v3 + 1688);
          v118 = (__int64 *)(v3 + 1624);
          switch ( v8 )
          {
            case 0LL:
              v9 = *(_OWORD *)(v3 + 1624);
              *(_OWORD *)(v3 + 1672) = *(_OWORD *)(v3 + 1640);
              *(_OWORD *)(v3 + 1656) = v9;
              break;
            case 1LL:
              v107 = v3 + 1624;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v107 = v3 + 1624;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              goto LABEL_8;
          }
          goto LABEL_8;
      }
  }
}
