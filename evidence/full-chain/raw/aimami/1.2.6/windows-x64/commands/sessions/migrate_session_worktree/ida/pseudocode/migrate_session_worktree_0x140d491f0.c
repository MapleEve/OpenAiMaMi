// Pseudocode for migrate_session_worktree (EA: 0x140d491f0, size: 0x13cd)
// Module: commands/sessions
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:迁移会话worktree(sessionId+mutationGate),返回SessionMigrateWorktreePayload。⚠副作用:迁移/改写worktree目录(mutation)。归属:win锚sessions.rs+analytics.rs 1:1,mac符号裁定commands::sessions。
// Tauri命令handler:迁移会话worktree(sessionId+mutationGate),返回SessionMigrateWorktreePayload。⚠副作用:迁移/改写worktree目录(mutation)。归属:win锚sessions.rs+analytics.rs 1:1,mac符号裁定commands::sessions。
char __fastcall migrate_session_worktree(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // rax
  __int128 v11; // xmm0
  const __m128i *v12; // rdx
  _BYTE *v13; // r8
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __m128i v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  volatile void *v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r15
  int v23; // eax
  char *v24; // r8
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  int v29; // r13d
  unsigned int v30; // r12d
  __int64 v31; // rdi
  PVOID v32; // rcx
  char v33; // al
  unsigned __int64 v34; // rdi
  _BYTE *v35; // r14
  _QWORD *v36; // r12
  __int64 v37; // r13
  __m128i v38; // xmm6
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int8 v43; // di
  __int64 v44; // r15
  __int64 v45; // rcx
  PVOID v46; // rcx
  char v47; // al
  bool v48; // of
  __int64 v49; // rcx
  volatile signed __int64 *v50; // rax
  __int64 v51; // rt0
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __m128i *v58; // r14
  __int64 v59; // r15
  _BYTE *v60; // r14
  __int64 v61; // rsi
  int v62; // r14d
  unsigned int v63; // esi
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rdx
  char *v73; // rcx
  char *v74; // r15
  __int64 v75; // rdi
  __int64 v76; // rdx
  char v77; // cl
  char result; // al
  __m128i *v79; // rsi
  __m128i v80; // xmm6
  _QWORD *v81; // rdi
  char v82; // al
  __int64 v83; // [rsp+20h] [rbp-60h]
  _BYTE v84[168]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v85[168]; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD v86[3]; // [rsp+180h] [rbp+100h] BYREF
  __m128i v87; // [rsp+198h] [rbp+118h]
  char v88[168]; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v89[24]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v90; // [rsp+268h] [rbp+1E8h]
  __m128i v91; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v92; // [rsp+640h] [rbp+5C0h]
  __m128i *v93; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v94; // [rsp+6E8h] [rbp+668h]
  __m128i v95; // [rsp+6F0h] [rbp+670h] BYREF
  _BYTE v96[24]; // [rsp+700h] [rbp+680h] BYREF
  __int128 v97; // [rsp+718h] [rbp+698h]
  __int128 v98; // [rsp+728h] [rbp+6A8h]
  __int128 v99; // [rsp+738h] [rbp+6B8h]
  __m128i v100; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v101; // [rsp+758h] [rbp+6D8h]
  __int64 v102; // [rsp+AC0h] [rbp+A40h]
  _QWORD *v103; // [rsp+AC8h] [rbp+A48h]
  __int64 v104; // [rsp+AD0h] [rbp+A50h]
  volatile signed __int64 *v105; // [rsp+AD8h] [rbp+A58h]
  _QWORD v106[3]; // [rsp+AE0h] [rbp+A60h] BYREF
  char v107; // [rsp+AF8h] [rbp+A78h]
  int v108; // [rsp+AF9h] [rbp+A79h]
  __int16 v109; // [rsp+AFDh] [rbp+A7Dh]
  char v110; // [rsp+AFFh] [rbp+A7Fh]
  __int64 v111; // [rsp+B00h] [rbp+A80h]
  __m128i v112; // [rsp+B08h] [rbp+A88h]
  __int128 v113; // [rsp+B18h] [rbp+A98h]
  __int128 v114; // [rsp+B28h] [rbp+AA8h]
  __int128 v115; // [rsp+B38h] [rbp+AB8h]
  __m128i v116; // [rsp+B48h] [rbp+AC8h]
  __int64 v117; // [rsp+B58h] [rbp+AD8h]
  __m128i v118; // [rsp+B60h] [rbp+AE0h] BYREF
  __int128 v119; // [rsp+B70h] [rbp+AF0h]
  __int128 v120; // [rsp+B80h] [rbp+B00h]
  __int128 v121; // [rsp+B90h] [rbp+B10h]
  __m128i v122; // [rsp+BA0h] [rbp+B20h] BYREF
  __int64 v123; // [rsp+BB0h] [rbp+B30h]
  __int64 v124; // [rsp+BB8h] [rbp+B38h] BYREF
  char v125; // [rsp+BC0h] [rbp+B40h]
  int v126; // [rsp+BC1h] [rbp+B41h]
  __int16 v127; // [rsp+BC5h] [rbp+B45h]
  char v128; // [rsp+BC7h] [rbp+B47h]
  __m128i v129; // [rsp+BC8h] [rbp+B48h]
  __int64 v130; // [rsp+BD8h] [rbp+B58h]
  __m128i v131; // [rsp+BE0h] [rbp+B60h] BYREF
  __int128 v132; // [rsp+BF0h] [rbp+B70h]
  __int128 v133; // [rsp+C00h] [rbp+B80h]
  __int128 v134; // [rsp+C10h] [rbp+B90h]
  __m128i v135; // [rsp+C20h] [rbp+BA0h] BYREF
  __int64 v136; // [rsp+C30h] [rbp+BB0h]
  __int64 v137; // [rsp+C40h] [rbp+BC0h]
  unsigned __int64 v138; // [rsp+C48h] [rbp+BC8h] BYREF
  __int64 v139; // [rsp+C50h] [rbp+BD0h]
  __int64 v140; // [rsp+C58h] [rbp+BD8h]
  const __m128i *v141; // [rsp+C60h] [rbp+BE0h]
  _BYTE *v142; // [rsp+C68h] [rbp+BE8h]
  _QWORD *v143; // [rsp+C70h] [rbp+BF0h]
  __int64 v144; // [rsp+C78h] [rbp+BF8h]
  _QWORD *v145; // [rsp+C80h] [rbp+C00h]
  __int64 v146; // [rsp+C88h] [rbp+C08h]
  PVOID Address; // [rsp+C90h] [rbp+C10h]
  __int64 v148; // [rsp+C98h] [rbp+C18h]
  __int64 v149; // [rsp+CA0h] [rbp+C20h]
  __int64 v150; // [rsp+CA8h] [rbp+C28h]
  _QWORD *v151; // [rsp+CB0h] [rbp+C30h]
  char v152; // [rsp+CBFh] [rbp+C3Fh] BYREF
  unsigned __int64 v153; // [rsp+CC0h] [rbp+C40h]
  __int64 v154; // [rsp+CC8h] [rbp+C48h]
  char v155; // [rsp+CD7h] [rbp+C57h]
  __int64 v156; // [rsp+CD8h] [rbp+C58h]

  v156 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 1952);
  v154 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1953) = 257;
      *(_BYTE *)(a1 + 1955) = 1;
      v5 = a1 + 1168;
      sub_14172B820(a1 + 1168, a1 + 392, 776);
      switch ( *(_BYTE *)(v3 + 1936) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_104;
        case 2:
          goto LABEL_103;
        case 3:
          goto LABEL_8;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1168;
      switch ( *(_BYTE *)(a1 + 1936) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 1688;
          *(_QWORD *)&v96[16] = 0;
          v93 = (__m128i *)aMigrateSession;
          v94 = 24;
          v95.m128i_i64[0] = (__int64)aRepo_0;
          v95.m128i_i64[1] = 4;
          v149 = v5;
          *(_QWORD *)v96 = v5;
          *(_QWORD *)&v96[8] = v3 + 1688;
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 1680) + 16LL));
          Address = (PVOID)(v3 + 1688);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v89, (__int64)&v93, (__int64)&v95);
          v9 = v89[0];
          if ( v89[0] != 0xFF )
            goto LABEL_27;
          v7 = *(_QWORD *)&v89[8];
LABEL_5:
          *(_QWORD *)&v96[16] = 0;
          v93 = (__m128i *)aMigrateSession;
          v94 = 24;
          v95.m128i_i64[0] = (__int64)aMutationgate_0;
          v95.m128i_i64[1] = 12;
          *(_QWORD *)v96 = v149;
          *(_QWORD *)&v96[8] = v6;
          v8 = sub_14002B050((volatile void *)(*(_QWORD *)(v154 + 1680) + 16LL));
          if ( v8 )
            goto LABEL_6;
          sub_14172C620((__int64)v89, (__int64)&v93, (__int64)&v95);
          v9 = v89[0];
          if ( v89[0] == 0xFF )
          {
            v8 = *(_QWORD *)&v89[8];
LABEL_6:
            *(_QWORD *)&v96[16] = 0;
            v93 = (__m128i *)aMigrateSession;
            v94 = 24;
            v95.m128i_i64[0] = (__int64)aSessionid_0;
            v95.m128i_i64[1] = 9;
            *(_QWORD *)v96 = v149;
            *(_QWORD *)&v96[8] = v6;
            sub_140955980(v89, &v93);
            v9 = v89[0];
            if ( v89[0] == 0xFF )
            {
              v10 = v90;
              v11 = *(_OWORD *)&v89[8];
              v3 = v154;
              *(_QWORD *)(v154 + 1736) = v7;
              *(_QWORD *)(v3 + 1744) = v8;
              *(_OWORD *)(v3 + 1712) = v11;
              *(_QWORD *)(v3 + 1728) = v10;
              *(_BYTE *)(v3 + 1776) = 0;
              v12 = (const __m128i *)(v3 + 1784);
              *(_OWORD *)(v3 + 1832) = *(_OWORD *)(v3 + 1760);
              *(_OWORD *)(v3 + 1784) = *(_OWORD *)(v3 + 1712);
              *(_QWORD *)(v3 + 1800) = *(_QWORD *)(v3 + 1728);
              *(_QWORD *)(v3 + 1808) = *(_QWORD *)(v3 + 1736);
              *(_QWORD *)(v3 + 1816) = *(_QWORD *)(v3 + 1744);
              *(_QWORD *)(v3 + 1824) = *(_QWORD *)(v3 + 1752);
              *(_QWORD *)(v3 + 1848) = *(_QWORD *)(v3 + 1776);
              v13 = (_BYTE *)(v3 + 1928);
              *(_BYTE *)(v3 + 1928) = 0;
              *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848);
              v14 = _mm_loadu_si128((const __m128i *)(v3 + 1784));
              v15 = *(_OWORD *)(v3 + 1800);
              v16 = *(_OWORD *)(v3 + 1816);
              *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832);
              *(_OWORD *)(v3 + 1888) = v16;
              *(_OWORD *)(v3 + 1872) = v15;
              *(__m128i *)(v3 + 1856) = v14;
              v5 = v149;
              switch ( *(_BYTE *)(v3 + 1920) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_106;
                case 2:
                  goto LABEL_105;
                case 3:
                  goto LABEL_23;
              }
            }
          }
LABEL_27:
          v28 = ((unsigned __int64)((v89[7] << 16) | (unsigned int)*(unsigned __int16 *)&v89[5]) << 32)
              | *(unsigned int *)&v89[1];
          v38 = _mm_loadu_si128((const __m128i *)&v89[8]);
          v39 = v90;
          sub_140CAB140(v149);
          if ( *(_QWORD *)Address == -1 )
          {
            v43 = 1;
            v44 = v154;
            goto LABEL_80;
          }
          v151 = (_QWORD *)(v154 + 1696);
          v40 = *(_QWORD *)(v154 + 1696);
          v148 = *(_QWORD *)(v154 + 1704);
          v153 = 0;
          v150 = v40;
          while ( v148 != v153 )
          {
            ++v153;
            v41 = v40 + 96;
            sub_140401FB0();
            v40 = v41;
          }
          v42 = *(_QWORD *)Address;
          v43 = 1;
          v44 = v154;
          if ( !*(_QWORD *)Address )
            goto LABEL_80;
          goto LABEL_79;
        case 1:
LABEL_104:
          v149 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_103:
          v149 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v13 = (_BYTE *)(v3 + 1928);
  v12 = (const __m128i *)(v3 + 1784);
  switch ( *(_BYTE *)(v3 + 1928) )
  {
    case 0:
      *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848);
      v17 = _mm_loadu_si128(v12);
      v18 = *(_OWORD *)(v3 + 1800);
      v19 = *(_OWORD *)(v3 + 1816);
      *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832);
      *(_OWORD *)(v3 + 1888) = v19;
      *(_OWORD *)(v3 + 1872) = v18;
      *(__m128i *)(v3 + 1856) = v17;
      switch ( *(_BYTE *)(v3 + 1920) )
      {
        case 0:
          goto LABEL_11;
        case 1:
          goto LABEL_106;
        case 2:
          goto LABEL_105;
        case 3:
          goto LABEL_23;
      }
    case 1:
      v149 = v5;
      v137 = v3 + 1784;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v149 = v5;
      v137 = v3 + 1784;
      sub_14176EC20(&off_1418851A0);
    case 3:
      switch ( *(_BYTE *)(v3 + 1920) )
      {
        case 0:
LABEL_11:
          v142 = v13;
          v141 = v12;
          v149 = v5;
          v20 = *(volatile void **)(v3 + 1880);
          *(__m128i *)(v3 + 1896) = _mm_loadu_si128((const __m128i *)(v3 + 1880));
          *(_WORD *)(v3 + 1921) = 1;
          v150 = *(_QWORD *)(v3 + 1856);
          v151 = *(_QWORD **)(v3 + 1864);
          v21 = *(_QWORD *)(v3 + 1872);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v20, 1, 0) )
          {
            v146 = v150;
            v145 = v151;
            sub_14176CDB0(v20);
          }
          Address = (PVOID)v20;
          v22 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v146 = v150;
            v145 = v151;
            v23 = sub_14176DA50(a1);
            LOBYTE(v23) = v23 ^ 1;
          }
          else
          {
            v23 = 0;
          }
          v24 = (char *)Address;
          v25 = *((_BYTE *)Address + 1);
          LODWORD(v153) = v23;
          if ( !v25 )
            goto LABEL_35;
          v131.m128i_i64[0] = 0;
          v131.m128i_i64[1] = 1;
          *(_QWORD *)&v132 = 0;
          v95.m128i_i64[0] = 1610612768;
          v93 = &v131;
          v94 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v93) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v152,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v24 = (char *)v131.m128i_i64[1];
          v27 = v131.m128i_i64[0];
          v28 = (unsigned __int8)v132;
          v29 = BYTE7(v132);
          v30 = *(unsigned __int16 *)((char *)&v132 + 5);
          v31 = *(unsigned int *)((char *)&v132 + 1);
          if ( !(_BYTE)v153 )
          {
            if ( 2 * *v22 )
            {
              v146 = v150;
              v145 = v151;
              v148 = v131.m128i_i64[1];
              v153 = v131.m128i_i64[0];
              v82 = sub_14176DA50(v26);
              v27 = v153;
              v24 = (char *)v148;
              if ( !v82 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v32 = Address;
          v33 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v33 == 2 )
          {
            v146 = v150;
            v145 = v151;
            v148 = (__int64)v24;
            v153 = v27;
            WakeByAddressSingle(v32);
            v27 = v153;
            v24 = (char *)v148;
          }
          if ( v27 != -1 )
          {
            v153 = v27;
            v148 = (__int64)v24;
            v34 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
            v35 = (_BYTE *)v154;
            v36 = v151;
            v37 = v150;
LABEL_62:
            v35[1922] = 0;
            if ( ((v37 != 0) & v35[1921]) != 0 )
              sub_140001660(v36, v37, 1);
            v35[1921] = 0;
            sub_14172B820(v85, &v91, 168);
            v35[1920] = 1;
            sub_14172B820(v84, v85, 168);
LABEL_65:
            v69 = v34 << 8;
            v39 = v69 | (unsigned __int8)v28;
            if ( v69 < 0 )
            {
              v28 = 0;
              goto LABEL_67;
            }
            if ( v39 )
            {
              nullsub_1(v66, v65, v67, v68, v83);
              v28 = 1;
              v70 = sub_140001650(v39, 1);
              if ( !v70 )
LABEL_67:
                sub_14176E54B(v28, v39);
              v71 = v70;
              sub_14172B820(v70, v148, v39);
              v72 = v153;
              if ( !v153 )
                goto LABEL_72;
            }
            else
            {
              v71 = 1;
              v72 = v153;
              if ( !v153 )
                goto LABEL_72;
            }
            sub_140001660(v148, v72, 1);
LABEL_72:
            v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v71);
LABEL_73:
            v43 = 1;
            v9 = 3;
            goto LABEL_74;
          }
          LODWORD(v153) = v28;
LABEL_35:
          Address = v24;
          sub_140A80280(v89, v24 + 8);
          *(_BYTE *)(v154 + 1922) = 1;
          if ( (v153 & 1) == 0 )
          {
            if ( 2 * *v22 )
            {
              v146 = v150;
              v145 = v151;
              if ( !(unsigned __int8)sub_14176DA50(v45) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v46 = Address;
          v47 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          v48 = __OFSUB__(v47, 2);
          if ( v47 == 2 )
          {
            v146 = v150;
            v145 = v151;
            WakeByAddressSingle(v46);
          }
          v49 = v154;
          v50 = **(volatile signed __int64 ***)(v154 + 1904);
          v51 = _InterlockedIncrement64(v50);
          if ( (v51 < 0) ^ v48 | (v51 == 0) )
            BUG();
          *(_WORD *)(v49 + 1921) = 0;
          v105 = v50;
          sub_14172B820(&v93, v89, 992);
          v102 = v150;
          v103 = v151;
          v104 = v21;
          v52 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v155 = 1;
            v81 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v52 = v81;
          }
          if ( *((_DWORD *)v52 + 4) == 2 )
          {
            v53 = 704;
            if ( *(_BYTE *)v52 )
              v53 = 472;
            v54 = v52[1] + v53;
            v155 = 0;
            v55 = sub_14085E1C0(v54, v52, &v93, &off_1417EBF48);
          }
          else
          {
            v56 = 704;
            if ( *((_BYTE *)v52 + 64) )
              v56 = 472;
            v57 = v52[9] + v56;
            v155 = 0;
            v55 = sub_14085E1C0(v57, v52 + 8, &v93, &off_1417EBF30);
          }
          v3 = v154;
          *(_QWORD *)(v154 + 1912) = v55;
LABEL_50:
          Address = (PVOID)(v3 + 1912);
          sub_140504750(&v93, v3 + 1912, a2);
          v58 = v93;
          if ( v93 == (__m128i *)-3LL )
          {
            v60 = (_BYTE *)v154;
            *(_BYTE *)(v154 + 1920) = 3;
            goto LABEL_82;
          }
          if ( v93 == (__m128i *)-2LL )
          {
            v148 = v94;
            v28 = v95.m128i_u8[0];
            v34 = ((unsigned __int64)((v95.m128i_u8[7] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v95.m128i_u16[2] + 1)) << 32)
                | *(unsigned int *)((char *)v95.m128i_u32 + 1);
            v153 = 0x800000000000000CuLL;
            v59 = v95.m128i_i64[1];
          }
          else
          {
            v153 = v94;
            v148 = v95.m128i_i64[0];
            v28 = v95.m128i_u8[8];
            v34 = ((unsigned __int64)((v95.m128i_u8[15] << 16)
                                    | (unsigned int)*(unsigned __int16 *)((char *)&v95.m128i_u16[6] + 1)) << 32)
                | *(unsigned int *)((char *)&v95.m128i_u32[2] + 1);
            v59 = *(_QWORD *)v96;
            v131 = *(__m128i *)&v96[8];
            v132 = v97;
            v133 = v98;
            v134 = v99;
            v135 = _mm_loadu_si128(&v100);
            v136 = v101;
          }
          v36 = v151;
          v37 = v150;
          v118 = v131;
          v119 = v132;
          v120 = v133;
          v121 = v134;
          v122 = _mm_load_si128(&v135);
          v123 = v136;
          v61 = *(_QWORD *)Address;
          v144 = v150;
          v143 = v151;
          if ( (unsigned __int8)sub_141398090(v61) )
          {
            v144 = v37;
            v143 = v36;
            sub_14139A2E0(v61);
          }
          if ( v58 == (__m128i *)-1LL )
            goto LABEL_61;
          if ( v58 == (__m128i *)-2LL )
          {
            v93 = (__m128i *)v153;
            v94 = v148;
            v95.m128i_i8[0] = v28;
            *(__int32 *)((char *)v95.m128i_i32 + 1) = v34;
            v95.m128i_i8[7] = BYTE6(v34);
            *(__int16 *)((char *)&v95.m128i_i16[2] + 1) = WORD2(v34);
            v95.m128i_i64[1] = v59;
            *(__m128i *)v96 = _mm_load_si128(&v118);
            v138 = 0;
            v139 = 1;
            v140 = 0;
            *(_QWORD *)&v132 = 1610612768;
            v131.m128i_i64[0] = (__int64)&v138;
            v131.m128i_i64[1] = (__int64)&off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v93, &v131) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v152,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v153 = v138;
            v148 = v139;
            v28 = (unsigned __int8)v140;
            v62 = HIBYTE(v140);
            v63 = *(unsigned __int16 *)((char *)&v140 + 5);
            v64 = *(unsigned int *)((char *)&v140 + 1);
            v37 = v150;
            v144 = v150;
            v36 = v151;
            v143 = v151;
            sub_140CAB2C0(&v93);
            v34 = ((unsigned __int64)((v62 << 16) | v63) << 32) | v64;
LABEL_61:
            v35 = (_BYTE *)v154;
            goto LABEL_62;
          }
          v111 = v59;
          v112 = v118;
          v113 = v119;
          v114 = v120;
          v115 = v121;
          v116 = _mm_load_si128(&v122);
          v117 = v123;
          v106[0] = v58;
          v106[1] = v153;
          v106[2] = v148;
          v107 = v28;
          v108 = v34;
          v110 = BYTE6(v34);
          v109 = WORD2(v34);
          v144 = v37;
          v143 = v36;
          sub_1404CF970(&v93, v106);
          v79 = v93;
          v153 = v94;
          v148 = v95.m128i_i64[0];
          v80 = _mm_loadu_si128((const __m128i *)&v95.m128i_u64[1]);
          v28 = v95.m128i_u64[1];
          sub_14172B820(&v91, &v96[8], 168);
          v60 = (_BYTE *)v154;
          *(_BYTE *)(v154 + 1922) = 0;
          v60[1921] = 0;
          sub_14172B820(v85, &v91, 168);
          v60[1920] = 1;
          if ( v79 == (__m128i *)-2LL )
          {
LABEL_82:
            v60[1928] = 3;
            v60[1936] = 3;
            v77 = 3;
            result = 1;
            goto LABEL_83;
          }
          sub_14172B820(v84, v85, 168);
          if ( v79 == (__m128i *)-1LL )
          {
            v34 = v28 >> 8;
            goto LABEL_65;
          }
          sub_14172B820(v88, v84, 168);
          v86[0] = v79;
          v86[1] = v153;
          v86[2] = v148;
          v87 = v80;
          sub_14050D590(&v93, v86);
          v28 = ((unsigned __int64)((HIBYTE(v94) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v94 + 5)) << 32)
              | *(unsigned int *)((char *)&v94 + 1);
          v9 = v94;
          v38 = _mm_loadu_si128(&v95);
          v39 = *(_QWORD *)v96;
          if ( v93 != (__m128i *)-1LL )
          {
            HIBYTE(v94) = (((unsigned __int64)((HIBYTE(v94) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v94 + 5)) << 32)
                         | *(unsigned int *)((char *)&v94 + 1)) >> 48;
            *(_WORD *)((char *)&v94 + 5) = WORD2(v28);
            *(_DWORD *)((char *)&v94 + 1) = v28;
            v95 = v38;
            v91.m128i_i64[0] = 0;
            v91.m128i_i64[1] = 1;
            v92 = 0;
            *(_QWORD *)&v89[16] = 1610612768;
            *(_QWORD *)v89 = &v91;
            *(_QWORD *)&v89[8] = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v93, v89) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v152,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v38 = _mm_load_si128(&v91);
            v39 = v92;
            sub_140CAB2C0(&v93);
            goto LABEL_73;
          }
          v43 = 0;
LABEL_74:
          *v142 = 1;
          sub_140C7F680(v141);
          sub_140CAB140(v149);
          v44 = v154;
          if ( *(_QWORD *)(v154 + 1688) != -1 )
          {
            v151 = (_QWORD *)(v154 + 1696);
            v73 = *(char **)(v154 + 1696);
            v148 = *(_QWORD *)(v154 + 1704);
            v153 = 0;
            Address = v73;
            while ( v148 != v153 )
            {
              ++v153;
              v74 = v73 + 96;
              sub_140401FB0();
              v73 = v74;
            }
            v44 = v154;
            v42 = *(_QWORD *)(v154 + 1688);
            if ( v42 )
LABEL_79:
              sub_140001660(*v151, 96 * v42, 8);
          }
LABEL_80:
          *(_BYTE *)(v44 + 1936) = 1;
          sub_140C99920(v149);
          v126 = v28;
          v128 = BYTE6(v28);
          v127 = WORD2(v28);
          v130 = v39;
          v125 = v9;
          v129 = v38;
          v124 = v43;
          v75 = v154;
          *(_BYTE *)(v154 + 1955) = 0;
          sub_14172B820(&v93, v75, 360);
          *(_BYTE *)(v75 + 1954) = 0;
          v76 = *(_QWORD *)(v75 + 384);
          *(_BYTE *)(v75 + 1953) = 0;
          *(_QWORD *)&v89[16] = *(_QWORD *)(v75 + 376);
          *(__m128i *)v89 = _mm_loadu_si128((const __m128i *)(v75 + 360));
          sub_140AFFC30(
            (__int64)&v93,
            v76,
            (__int64)&v124,
            (__int128 *)v89,
            *(_DWORD *)(v75 + 1944),
            *(_DWORD *)(v75 + 1948));
          v77 = 1;
          result = 0;
          v60 = (_BYTE *)v154;
LABEL_83:
          v60[1952] = v77;
          return result;
        case 1:
LABEL_106:
          v142 = v13;
          v141 = v12;
          JUMPOUT(0x140D4A56DLL);
        case 2:
LABEL_105:
          v142 = v13;
          v141 = v12;
          v149 = v5;
          sub_14176EC20(&off_141888B30);
        case 3:
LABEL_23:
          v142 = v13;
          v141 = v12;
          v149 = v5;
          goto LABEL_50;
      }
  }
}
