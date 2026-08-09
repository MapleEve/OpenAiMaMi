// Function: sub_140D75EA0 (set_codex_no_account_slots command owner)
// EA: 0x140D75EA0
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06, session windows-x64 version_delta pass
// No truncation marker observed; full body returned by IDA MCP decompile() verbatim below.
// Same async poll-state-machine shape as set_claude_web_search_compat (dispatch on
// a1+1856, resume points 0/1/2/3) -- genuine async body, not a shim.
// KEY DIFFERENCE from set_claude_web_search_compat: this command pulls THREE manager
// request args in sequence -- "slots" (via sub_14045B370) then "relaunch" (via
// sub_1409543D0) -- i.e. the frontend payload is {slots: <config>, relaunch: <bool>}.
char __fastcall sub_140D75EA0(__int64 a1, __int64 a2)
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
  unsigned __int64 v62; // rdi
  __int64 v63; // r15
  __int64 v64; // r14
  char v65; // cl
  char result; // al
  __int64 v67; // rax
  unsigned __int64 v68; // rbx
  const __m128i *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 *v72; // rcx
  __int64 *v73; // r15
  __int64 v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // rdi
  __int128 v77; // BYREF
  __int64 v78;
  __m128i v79; // BYREF
  __m128i v80; // BYREF
  __int128 v81;
  __int128 v82;
  __int128 v83;
  __int64 v84;
  __m128i v85; // BYREF
  __int64 v86;
  __int128 v87;
  __int64 v88;
  __m128i *v89; // BYREF
  __int64 (__fastcall **v90)();
  __m128i v91;
  char v92[288]; // BYREF
  __m128i v93;
  __int64 v94;
  __int128 v95;
  __int64 v96;
  _BYTE v97[24]; // BYREF
  __int64 v98;
  __int64 v99;
  char v100[416]; // BYREF
  __int64 v101; // BYREF
  char v102;
  char v103;
  int v104;
  __int16 v105;
  __m128i v106;
  __int64 v107;
  _BYTE v108[40]; // BYREF
  __int128 v109; // BYREF
  __int128 v110;
  __int128 v111;
  __int64 v112;
  __m128i v113; // BYREF
  __int64 v114;
  __int64 v115;
  __int64 v116;
  volatile signed __int64 *v117;
  __int128 v118;
  __int128 v119;
  __int128 v120;
  __int64 v121;
  __m128i v122; // BYREF
  __int64 v123;
  _QWORD *m128i_i64;
  __int64 *v125;
  const __m128i *v126;
  char v127; // BYREF
  const __m128i *v128;
  __int64 v129;
  __int64 v130;
  char v131;
  __int64 v132;

  *(_QWORD *)&v2 = a1; /*0x140d75ea0*/
  v3 = 0; /*0x140d75eac*/
  v132 = -2; /*0x140d75ec3*/
  v5 = v2; /*0x140d75ed1*/
  v6 = *(unsigned __int8 *)(v2 + 1856); /*0x140d75ed4*/
  v129 = v2; /*0x140d75ee9*/
  switch ( v6 ) /*0x140d75ef0*/
  {
    case 0LL: /*0x140d75ef0*/  // poll state 0: fresh entry
      *(_WORD *)(v2 + 1857) = 257; /*0x140d75ef2*/
      *(_BYTE *)(v2 + 1859) = 1; /*0x140d75efc*/
      *((_QWORD *)&v2 + 1) = v2 + 1120; /*0x140d75f0b*/
      sub_14172B820(v2 + 1120, v2 + 392, 728); /*0x140d75f1b*/
      switch ( *(_BYTE *)(v5 + 1840) ) /*0x140d75f36*/
      {
        case 0: goto LABEL_4;
        case 1: goto LABEL_100;
        case 2: goto LABEL_99;
        case 3: goto LABEL_17;
      }
    case 1LL: sub_14176EC00(&off_141885220); /*0x140d76ef1*/
    case 2LL: sub_14176EC20(&off_141885220); /*0x140d76ee3*/
    case 3LL: /*0x140d75ef0*/
      *((_QWORD *)&v2 + 1) = v2 + 1120; /*0x140d75f38*/
      switch ( *(_BYTE *)(v2 + 1840) ) /*0x140d75f55*/
      {
        case 0: /*0x140d75f55*/
LABEL_4:
          v7 = v5 + 1640; /*0x140d75f57*/
          *(_QWORD *)v108 = aSetCodexNoAcco; /*0x140d75f70*/  // "set_codex_no_account_slots"
          *(_QWORD *)&v108[8] = 26; /*0x140d75f77*/
          *(_QWORD *)&v108[16] = aManager_1; /*0x140d75f89*/  // "manager"
          *(_QWORD *)&v108[24] = 7; /*0x140d75f90*/
          v130 = *((_QWORD *)&v2 + 1); /*0x140d75f9b*/
          *(_QWORD *)&v108[32] = *((_QWORD *)&v2 + 1); /*0x140d75fa2*/
          v109 = (unsigned __int64)(v5 + 1640); /*0x140d75fa9*/
          v8 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v5 + 1632) + 16LL)); /*0x140d75fc1*/  // generic hashbrown registry probe
          v125 = (__int64 *)(v5 + 1640); /*0x140d75fc7*/
          if ( v8 ) goto LABEL_5; /*0x140d75fce*/
          sub_14172C620((__int64)v97, (__int64)v108, (__int64)&v108[16]); /*0x140d7643a*/  // future-combinator: manager.request(name,target)
          v9 = v97[0]; /*0x140d76440*/
          if ( v97[0] != 0xFF ) goto LABEL_38; /*0x140d7644c*/
          v8 = *(_QWORD *)&v97[8]; /*0x140d765ba*/
LABEL_5:
          *(_QWORD *)v108 = aSetCodexNoAcco; /*0x140d75fe6*/
          *(_QWORD *)&v108[8] = 26; /*0x140d75fed*/
          *(_QWORD *)&v108[16] = aSlots; /*0x140d75fff*/  // "slots" arg key
          *(_QWORD *)&v108[24] = 5; /*0x140d76006*/
          *(_QWORD *)&v108[32] = v130; /*0x140d76011*/
          v109 = v7; /*0x140d76018*/
          sub_14045B370(v97, v108); /*0x140d7602d*/  // manager.request completion for "slots"
          v9 = v97[0]; /*0x140d76033*/
          if ( v97[0] == 0xFF ) /*0x140d7603f*/
          {
            v10 = *(_QWORD *)&v97[8]; /*0x140d76045*/
            v11 = v98; /*0x140d76053*/
            v128 = *(const __m128i **)&v97[16]; /*0x140d7605a*/
            v78 = v98; /*0x140d76065*/
            v77 = *(_OWORD *)&v97[8]; /*0x140d76069*/
            *(_QWORD *)v108 = aSetCodexNoAcco; /*0x140d76078*/
            *(_QWORD *)&v108[8] = 26; /*0x140d7607f*/
            *(_QWORD *)&v108[16] = aRelaunch; /*0x140d76091*/  // "relaunch" arg key
            *(_QWORD *)&v108[24] = 8; /*0x140d76098*/
            *(_QWORD *)&v108[32] = v130; /*0x140d760aa*/
            v109 = v7; /*0x140d760b1*/
            sub_1409543D0(v97, v108); /*0x140d760c6*/  // manager.request completion for "relaunch"
            v9 = v97[0]; /*0x140d760cc*/
            v12 = v97[1]; /*0x140d760d4*/
            v3 = __OFSUB__(v97[0], -1); /*0x140d760db*/
            if ( v97[0] == 0xFF ) /*0x140d760df*/
            {
              v5 = v129; /*0x140d765c6*/
              *(_QWORD *)(v129 + 1688) = v8; /*0x140d765cd*/
              *(_OWORD *)(v5 + 1664) = v77; /*0x140d765d8*/
              *(_QWORD *)(v5 + 1680) = v78; /*0x140d765e4*/
              *(_BYTE *)(v5 + 1712) = v12; /*0x140d765eb*/
              *(_BYTE *)(v5 + 1713) = 0; /*0x140d765f2*/
              v22 = (const __m128i *)(v5 + 1720); /*0x140d765fa*/
              *(_QWORD *)(v5 + 1768) = *(_QWORD *)(v5 + 1712); /*0x140d76608*/
              v54 = *(_OWORD *)(v5 + 1664); /*0x140d7660f*/
              v55 = *(_QWORD *)(v5 + 1680); /*0x140d76617*/
              *(_QWORD *)&v2 = *(_QWORD *)(v5 + 1688); /*0x140d7661e*/
              *(_OWORD *)(v5 + 1752) = *(_OWORD *)(v5 + 1696); /*0x140d7662d*/
              *(_QWORD *)(v5 + 1736) = v55; /*0x140d76635*/
              *(_QWORD *)(v5 + 1744) = v2; /*0x140d7663c*/
              *(_OWORD *)(v5 + 1720) = v54; /*0x140d76643*/
              v21 = (__int64 *)(v5 + 1832); /*0x140d7664b*/
              *(_BYTE *)(v5 + 1832) = 0; /*0x140d76652*/
              *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768); /*0x140d7665e*/
              v56 = _mm_loadu_si128((const __m128i *)(v5 + 1720)); /*0x140d76665*/
              v57 = *(_OWORD *)(v5 + 1736); /*0x140d7666a*/
              *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752); /*0x140d76674*/
              *(_OWORD *)(v5 + 1792) = v57; /*0x140d7667c*/
              *(__m128i *)(v5 + 1776) = v56; /*0x140d76684*/
              v25 = (const __m128i *)(v5 + 1776); /*0x140d7668d*/
              *((_QWORD *)&v2 + 1) = v130; /*0x140d766aa*/
              switch ( *(_BYTE *)(v5 + 1825) ) /*0x140d766b1*/
              {
                case 0: goto LABEL_20;
                case 1: goto LABEL_102;
                case 2: goto LABEL_101;
                case 3: goto LABEL_55;
              }
            }
            LOBYTE(v126) = v97[1]; /*0x140d760e5*/
            v13 = *(unsigned int *)&v97[2]; /*0x140d760eb*/
            v14 = (unsigned __int64)*(unsigned __int16 *)&v97[6] << 32; /*0x140d760f8*/
            v15 = _mm_loadu_si128((const __m128i *)&v97[8]); /*0x140d760fc*/
            v16 = v98; /*0x140d76104*/
            if ( v11 ) /*0x140d7610e*/
            {
              v17 = &v128[3].m128i_i64[1]; /*0x140d7611b*/
              do
              {
                v18 = *(v17 - 7); /*0x140d7613d*/
                if ( v18 ) sub_140001660(*(v17 - 6), v18, 1); /*0x140d76150*/
                v19 = *(v17 - 4); /*0x140d76155*/
                if ( v19 ) sub_140001660(*(v17 - 3), v19, 1); /*0x140d76168*/
                v20 = *(v17 - 1); /*0x140d7616d*/
                if ( v20 != -1 && v20 ) sub_140001660(*v17, v20, 1); /*0x140d76185*/
                v17 += 9; /*0x140d76130*/
                --v11; /*0x140d76134*/
              }
              while ( v11 );
            }
            v45 = v14 | v13; /*0x140d764d1*/
            if ( v10 ) sub_140001660(v128, 72 * v10, 8); /*0x140d764ee*/
            v46 = v130; /*0x140d764f3*/
            LOBYTE(v44) = (_BYTE)v126; /*0x140d764fa*/
          }
          else
          {
LABEL_38:
            LOBYTE(v44) = v97[1]; /*0x140d76452*/
            v45 = *(unsigned int *)&v97[2] | ((unsigned __int64)*(unsigned __int16 *)&v97[6] << 32); /*0x140d7646b*/
            v15 = _mm_loadu_si128((const __m128i *)&v97[8]); /*0x140d7646e*/
            v16 = v98; /*0x140d76476*/
            v46 = v130; /*0x140d7647d*/
          }
          v130 = v46; /*0x140d76502*/
          sub_140CAB140(v46); /*0x140d76509*/
          if ( *v125 == -1 ) /*0x140d7651a*/
          {
            v52 = 1; /*0x140d765ab*/
            v53 = v129; /*0x140d765ae*/
            goto LABEL_86;
          }
          m128i_i64 = (_QWORD *)(v129 + 1648); /*0x140d7652e*/
          v49 = *(_QWORD *)(v129 + 1648); /*0x140d76535*/
          v126 = *(const __m128i **)(v129 + 1656); /*0x140d76543*/
          v128 = nullptr; /*0x140d7654a*/
          v115 = v49; /*0x140d76555*/
          while ( v126 != v128 ) /*0x140d7656e*/
          {
            v128 = (const __m128i *)((char *)v128 + 1); /*0x140d76573*/
            v50 = v49 + 96; /*0x140d7657a*/
            sub_140401FB0(); /*0x140d7657e*/
            v49 = v50; /*0x140d76584*/
          }
          v51 = *v125; /*0x140d76590*/
          v52 = 1; /*0x140d76593*/
          v53 = v129; /*0x140d76599*/
          if ( !*v125 ) goto LABEL_86; /*0x140d765a0*/
          goto LABEL_85; /*0x140d765a0*/
        case 1: /*0x140d75f55*/
LABEL_100:
          v130 = *((_QWORD *)&v2 + 1); /*0x140d76f11*/
          sub_14176EC00(&off_141886DB8); /*0x140d76f1f*/
        case 2: /*0x140d75f55*/
LABEL_99:
          v130 = *((_QWORD *)&v2 + 1); /*0x140d76ef8*/
          sub_14176EC20(&off_141886DB8); /*0x140d76f06*/
        case 3: goto LABEL_17;
      }
  }
LABEL_17:
  v21 = (__int64 *)(v5 + 1832); /*0x140d7618c*/
  v22 = (const __m128i *)(v5 + 1720); /*0x140d7619b*/
  switch ( *(_BYTE *)(v5 + 1832) ) /*0x140d761b0*/
  {
    case 0: /*0x140d761b0*/
      *(_QWORD *)(v5 + 1824) = *(_QWORD *)(v5 + 1768); /*0x140d761b6*/
      v23 = _mm_loadu_si128(v22); /*0x140d761bd*/
      v24 = *(_OWORD *)(v5 + 1736); /*0x140d761c2*/
      *(_OWORD *)(v5 + 1808) = *(_OWORD *)(v5 + 1752); /*0x140d761cc*/
      *(_OWORD *)(v5 + 1792) = v24; /*0x140d761d4*/
      *(__m128i *)(v5 + 1776) = v23; /*0x140d761dc*/
      v25 = (const __m128i *)(v5 + 1776); /*0x140d761e5*/
      switch ( *(_BYTE *)(v5 + 1825) ) /*0x140d76202*/
      {
        case 0: goto LABEL_20;
        case 1: goto LABEL_102;
        case 2: goto LABEL_101;
        case 3: goto LABEL_55;
      }
    case 1: /*0x140d761b0*/
      v130 = *((_QWORD *)&v2 + 1); /*0x140d76f9d*/
      v121 = v5 + 1720; /*0x140d76fa4*/
      sub_14176EC00(&off_1418851A0); /*0x140d76fb2*/
    case 2: /*0x140d761b0*/
      v130 = *((_QWORD *)&v2 + 1); /*0x140d76f80*/
      v121 = v5 + 1720; /*0x140d76f87*/
      sub_14176EC20(&off_1418851A0); /*0x140d76f95*/
    case 3: /*0x140d761b0*/
      v25 = (const __m128i *)(v5 + 1776); /*0x140d76204*/
      switch ( *(_BYTE *)(v5 + 1825) ) /*0x140d76221*/
      {
        case 0: /*0x140d76221*/
LABEL_20:
          *(_BYTE *)(v5 + 1826) = 0; /*0x140d76223*/
          *(_QWORD *)&v2 = *(_QWORD *)(v5 + 1800); /*0x140d7622b*/
          *(_QWORD *)(v5 + 1808) = v2; /*0x140d76232*/
          *(_BYTE *)(v5 + 1827) = 1; /*0x140d76239*/
          v114 = v25[1].m128i_i64[0]; /*0x140d76245*/
          v113 = _mm_loadu_si128(v25); /*0x140d76251*/
          v26 = *(_BYTE *)(v5 + 1824); /*0x140d76259*/
          v27 = *(_QWORD *)v2; /*0x140d76261*/
          v28 = _InterlockedIncrement64(*(volatile signed __int64 **)v2); /*0x140d76264*/  // Arc<T> clone refcount chain (generic)
          if ( (v28 < 0) ^ v3 | (v28 == 0) ) goto LABEL_106;
          v29 = *(volatile signed __int64 **)(v2 + 8); /*0x140d7626e*/
          v30 = _InterlockedIncrement64(v29); /*0x140d76272*/
          if ( (v30 < 0) ^ v3 | (v30 == 0) ) goto LABEL_106;
          v31 = *(volatile signed __int64 **)(v2 + 16); /*0x140d7627c*/
          v32 = _InterlockedIncrement64(v31); /*0x140d76280*/
          if ( (v32 < 0) ^ v3 | (v32 == 0) ) goto LABEL_106;
          v33 = *(volatile signed __int64 **)(v2 + 24); /*0x140d7628a*/
          v34 = _InterlockedIncrement64(v33); /*0x140d7628e*/
          if ( (v34 < 0) ^ v3 | (v34 == 0) ) goto LABEL_106;
          v125 = v21; /*0x140d76298*/
          v126 = v22; /*0x140d7629f*/
          v35 = *(volatile signed __int64 **)(v2 + 32); /*0x140d762a6*/
          v36 = _InterlockedIncrement64(v35); /*0x140d762aa*/
          if ( (v36 < 0) ^ v3 | (v36 == 0) ) goto LABEL_106;
          v37 = *(volatile signed __int64 **)(v2 + 40); /*0x140d762b4*/
          v38 = _InterlockedIncrement64(v37); /*0x140d762b8*/
          if ( (v38 < 0) ^ v3 | (v38 == 0) ) goto LABEL_106;
          m128i_i64 = v25->m128i_i64; /*0x140d762c2*/
          v130 = *((_QWORD *)&v2 + 1); /*0x140d762c9*/
          *((_QWORD *)&v2 + 1) = *(_QWORD *)(v2 + 56); /*0x140d762d0*/
          if ( *((_QWORD *)&v2 + 1) ) /*0x140d762d7*/
          {
            if ( _InterlockedIncrement64(*((volatile signed __int64 **)&v2 + 1)) <= 0 ) goto LABEL_106;
          }
          *(_QWORD *)&v2 = *(_QWORD *)(v2 + 48); /*0x140d762e3*/
          if ( _InterlockedIncrement64((volatile signed __int64 *)v2) <= 0 ) /*0x140d762eb*/
LABEL_106:
            BUG(); /*0x140d76fb8*/  // Rust Arc overflow abort() guard, generic
          v116 = v27; /*0x140d762f1*/
          v117 = v29; /*0x140d762f8*/
          *(_QWORD *)&v118 = v31; /*0x140d762ff*/
          *((_QWORD *)&v118 + 1) = v33; /*0x140d76306*/
          *(_QWORD *)&v119 = v35; /*0x140d7630d*/
          *((_QWORD *)&v119 + 1) = v37; /*0x140d76314*/
          v120 = v2; /*0x140d76322*/
          *(_WORD *)(v5 + 1826) = 0; /*0x140d7632b*/
          v111 = v120; /*0x140d76366*/
          v110 = v119; /*0x140d7637b*/
          v109 = v118; /*0x140d76389*/
          *(_QWORD *)&v108[24] = v116; /*0x140d76397*/
          *(_QWORD *)&v108[32] = v117; /*0x140d7639e*/
          *(__m128i *)v108 = _mm_load_si128(&v113); /*0x140d763ad*/
          *(_QWORD *)&v108[16] = v114; /*0x140d763bc*/
          v39 = 1; /*0x140d763c6*/
          if ( v26 != 2 ) v39 = v26; /*0x140d763cb*/
          LOBYTE(v112) = v39; /*0x140d763ce*/
          v40 = off_141FB97C0; /*0x140d763d4*/  // static relay/config registry singleton (shared global, seen in set_claude_web_search_compat too)
          if ( *((_DWORD *)off_141FB97C0 + 24) ) /*0x140d763db*/
          {
            v131 = 1; /*0x140d76e5c*/
            v76 = off_141FB97C0; /*0x140d76e6a*/
            sub_14172E34C(off_141FB97C0); /*0x140d76e6d*/
            v40 = v76; /*0x140d76e72*/
          }
          if ( *((_DWORD *)v40 + 4) == 2 ) /*0x140d763ea*/
          {
            v41 = 704; /*0x140d763f8*/
            if ( *(_BYTE *)v40 ) v41 = 472; /*0x140d763fd*/
            v42 = v40[1] + v41; /*0x140d76401*/
            v131 = 0; /*0x140d76405*/
            v43 = sub_1408585D0(v42, v40, v108, &off_1417EBF48); /*0x140d7641a*/  // registry-variant-A read/apply
          }
          else
          {
            v47 = 704; /*0x140d7648f*/
            if ( *((_BYTE *)v40 + 64) ) v47 = 472; /*0x140d76494*/
            v48 = v40[9] + v47; /*0x140d7649c*/
            v131 = 0; /*0x140d764a0*/
            v43 = sub_1408585D0(v48, v40 + 8, v108, &off_1417EBF30); /*0x140d764b8*/  // registry-variant-B read/apply
          }
          v5 = v129; /*0x140d764be*/
          *(_QWORD *)(v129 + 1816) = v43; /*0x140d764c5*/
          break;
        case 1: /*0x140d76221*/
LABEL_102:
          m128i_i64 = v25->m128i_i64; /*0x140d76f55*/
          v125 = v21; /*0x140d76f5c*/
          v126 = v22; /*0x140d76f63*/
          JUMPOUT(0x140D76F6ALL); /*0x140d76f6a*/
        case 2: /*0x140d76221*/
LABEL_101:
          m128i_i64 = v25->m128i_i64; /*0x140d76f2a*/
          v125 = v21; /*0x140d76f31*/
          v126 = v22; /*0x140d76f38*/
          v130 = *((_QWORD *)&v2 + 1); /*0x140d76f3f*/
          sub_14176EC20(&off_141888670); /*0x140d76f4d*/
        case 3: /*0x140d76221*/
LABEL_55:
          m128i_i64 = v25->m128i_i64; /*0x140d766b3*/
          v125 = v21; /*0x140d766ba*/
          v126 = v22; /*0x140d766c1*/
          v130 = *((_QWORD *)&v2 + 1); /*0x140d766c8*/
          break;
      }
      v128 = (const __m128i *)(v5 + 1816); /*0x140d766e0*/
      sub_1405052C0(v108, v5 + 1816, a2); /*0x140d766ea*/  // apply-handler invoke (persistence leaf; see companion pseudocode 0002)
      v58 = *(__m128i **)v108; /*0x140d766f0*/
      if ( *(_QWORD *)v108 == -3 ) /*0x140d766fb*/
      {
        v60 = (_BYTE *)v129; /*0x140d7672b*/
        *(_BYTE *)(v129 + 1825) = 3; /*0x140d76732*/
        goto LABEL_67;
      }
      if ( *(_QWORD *)v108 == -2 ) /*0x140d76701*/
      {
        v123 = *(_QWORD *)&v108[24]; /*0x140d7670a*/
        v122 = *(__m128i *)&v108[8]; /*0x140d76718*/
        v59 = 0x800000000000000CuLL; /*0x140d7671f*/
      }
      else
      {
        v59 = *(_QWORD *)&v108[8]; /*0x140d7673e*/
        v122 = *(__m128i *)&v108[16]; /*0x140d7674c*/
        v123 = *(_QWORD *)&v108[32]; /*0x140d7675a*/
        sub_14172B820(&v89, &v109, 328); /*0x140d76775*/
      }
      v79 = _mm_load_si128(&v122); /*0x140d76782*/
      v80.m128i_i64[0] = v123; /*0x140d76791*/
      sub_14172B820(&v80.m128i_u64[1], &v89, 328); /*0x140d767ac*/
      v61 = v128->m128i_i64[0]; /*0x140d767b8*/
      if ( (unsigned __int8)sub_141398090(v128->m128i_i64[0]) ) /*0x140d767be*/
        sub_14139A2E0(v61); /*0x140d767cb*/  // Arc drop, generic
      if ( v58 == (__m128i *)-2LL ) /*0x140d767d5*/
      {
        *(_QWORD *)v108 = v59; /*0x140d767db*/
        *(__m128i *)&v108[8] = _mm_load_si128(&v79); /*0x140d767f1*/
        *(__m128i *)&v108[24] = v80; /*0x140d767f9*/
        *(_QWORD *)&v109 = v81; /*0x140d76807*/
        v122.m128i_i64[0] = (__int64)v108; /*0x140d7680e*/
        v122.m128i_i64[1] = (__int64)sub_1412DDF00; /*0x140d7681c*/
        sub_141543AF0(&v89, &unk_1418862D0, &v122); /*0x140d76838*/  // Display-format error message, generic
        sub_140CAB2C0(v108); /*0x140d76845*/
        v62 = (unsigned __int64)v89; /*0x140d7684b*/
        v44 = (__int64)v90; /*0x140d76852*/
        v16 = v91.m128i_i64[0]; /*0x140d76859*/
LABEL_70:
        v67 = v129; /*0x140d76a3b*/
        *(_BYTE *)(v129 + 1826) = 0; /*0x140d76a42*/
        *(_BYTE *)(v67 + 1827) = 0; /*0x140d76a49*/
        *(_BYTE *)(v67 + 1825) = 1; /*0x140d76a50*/
        v68 = v62 >> 8; /*0x140d76a5a*/
        goto LABEL_71;
      }
      if ( v58 == (__m128i *)-1LL ) /*0x140d76870*/
      {
        *(_QWORD *)v108 = v59; /*0x140d76968*/
        *(__m128i *)&v108[8] = v79; /*0x140d76976*/
        *(__m128i *)&v108[24] = _mm_loadu_si128(&v80); /*0x140d7698d*/
        v109 = v81; /*0x140d76995*/
        v110 = v82; /*0x140d7699c*/
        v111 = v83; /*0x140d769a3*/
        v112 = v84; /*0x140d769ae*/
        v122.m128i_i64[0] = 0; /*0x140d769b5*/
        v122.m128i_i64[1] = 1; /*0x140d769c0*/
        v123 = 0; /*0x140d769cb*/
        v91.m128i_i64[0] = 1610612768; /*0x140d769d6*/
        v89 = &v122; /*0x140d769e8*/
        v90 = &off_141891B48; /*0x140d769f6*/
        if ( (unsigned __int8)sub_1405060F0(v108, &v89) ) /*0x140d76a0b*/
          sub_14176E860( /*0x140d76ea0*/
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v127,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v44 = v122.m128i_i64[1]; /*0x140d76a20*/
        v62 = v122.m128i_i64[0]; /*0x140d76a20*/
        v16 = v123; /*0x140d76a27*/
        sub_140CAC460(v108); /*0x140d76a35*/
        goto LABEL_70;
      }
      v90 = (__int64 (__fastcall **)())v59; /*0x140d76876*/
      v91 = v79; /*0x140d76884*/
      sub_14172B820(v92, &v80, 288); /*0x140d76898*/
      v95 = v87; /*0x140d768a4*/
      v96 = v88; /*0x140d768b2*/
      v93 = _mm_load_si128(&v85); /*0x140d768c1*/
      v94 = v86; /*0x140d768d0*/
      v89 = v58; /*0x140d768d7*/
      sub_1404D1720(v108, &v89); /*0x140d768ec*/
      v62 = *(_QWORD *)&v108[8]; /*0x140d768f9*/
      v63 = *(_QWORD *)v108; /*0x140d768f9*/
      v16 = *(_QWORD *)&v108[24]; /*0x140d76907*/
      v44 = *(_QWORD *)&v108[16]; /*0x140d76907*/
      v64 = *(_QWORD *)&v108[32]; /*0x140d7690e*/
      sub_14172B820(&v77, &v109, 408); /*0x140d76926*/
      v60 = (_BYTE *)v129; /*0x140d7692b*/
      *(_BYTE *)(v129 + 1826) = 0; /*0x140d76932*/
      v60[1827] = 0; /*0x140d76939*/
      v60[1825] = 1; /*0x140d76940*/
      if ( v63 == -2 ) /*0x140d7694b*/
      {
LABEL_67:
        v60[1832] = 3; /*0x140d76951*/
        v60[1840] = 3; /*0x140d76958*/
        v65 = 3; /*0x140d7695f*/
        result = 1; /*0x140d76961*/
        goto LABEL_87;
      }
      v68 = v62 >> 8; /*0x140d76cba*/
      if ( v63 == -1 ) /*0x140d76cc2*/
      {
LABEL_71:
        v45 = v68 << 8; /*0x140d76a5e*/
        v69 = (const __m128i *)(v45 | (unsigned __int8)v62); /*0x140d76a66*/
        if ( v16 < 0 ) /*0x140d76a6c*/
        {
          v45 = 0; /*0x140d76a6e*/
          goto LABEL_73;
        }
        if ( v16 ) /*0x140d76a8f*/
        {
          nullsub_1(); /*0x140d76a95*/
          v45 = 1; /*0x140d76a9a*/
          v70 = sub_140001650(v16, 1); /*0x140d76aa7*/
          if ( !v70 ) /*0x140d76aaf*/
          {
LABEL_73:
            v128 = v69; /*0x140d76a70*/
            m128i_i64 = (_QWORD *)v44; /*0x140d76a77*/
            sub_14176E54B(v45, v16); /*0x140d76a84*/
          }
          v71 = v70; /*0x140d76ab1*/
          sub_14172B820(v70, v44, v16); /*0x140d76abd*/
          if ( !v69 ) goto LABEL_78;
        }
        else
        {
          v71 = 1; /*0x140d76e42*/
          if ( !v69 ) goto LABEL_78;
        }
        sub_140001660(v44, v69, 1); /*0x140d76ad3*/
LABEL_78:
        v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v71); /*0x140d76ad8*/
LABEL_79:
        v52 = 1; /*0x140d76ae6*/
        v9 = 3; /*0x140d76ae9*/
        goto LABEL_80;
      }
      sub_14172B820(v100, &v77, 408); /*0x140d76cd9*/
      *(_QWORD *)v97 = v63; /*0x140d76cde*/
      v97[8] = v62; /*0x140d76ce5*/
      *(_DWORD *)&v97[9] = v62 >> 8; /*0x140d76cec*/
      v97[15] = v62 >> 8 >> 48; /*0x140d76cf9*/
      *(_WORD *)&v97[13] = HIDWORD(v62) >> 8; /*0x140d76d03*/
      *(_QWORD *)&v97[16] = v44; /*0x140d76d0a*/
      v98 = v16; /*0x140d76d11*/
      v99 = v64; /*0x140d76d18*/
      sub_140510DC0(v108, v97); /*0x140d76d2d*/
      v45 = *(unsigned int *)&v108[10] | ((unsigned __int64)*(unsigned __int16 *)&v108[14] << 32); /*0x140d76d4b*/
      v9 = v108[8]; /*0x140d76d4e*/
      LOBYTE(v44) = v108[9]; /*0x140d76d56*/
      v15 = _mm_loadu_si128((const __m128i *)&v108[16]); /*0x140d76d5e*/
      v16 = *(_QWORD *)&v108[32]; /*0x140d76d66*/
      if ( *(_QWORD *)v108 != -1 ) /*0x140d76d71*/
      {
        *(__m128i *)&v108[16] = v15; /*0x140d76d99*/
        v79.m128i_i64[0] = 0; /*0x140d76dbd*/
        v79.m128i_i64[1] = 1; /*0x140d76dc8*/
        v80.m128i_i64[0] = 0; /*0x140d76dd3*/
        v91.m128i_i64[0] = 1610612768; /*0x140d76dde*/
        v89 = &v79; /*0x140d76df0*/
        v90 = &off_141891B48; /*0x140d76dfe*/
        if ( (unsigned __int8)sub_1412DDF00(v108, &v89) ) /*0x140d76e13*/
          sub_14176E860( /*0x140d76ed1*/
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v127,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v15 = _mm_load_si128(&v79); /*0x140d76e21*/
        v16 = v80.m128i_i64[0]; /*0x140d76e29*/
        sub_140CAB2C0(v108); /*0x140d76e37*/
        goto LABEL_79;
      }
      v52 = 0; /*0x140d76e55*/
LABEL_80:
      *(_BYTE *)v125 = 1; /*0x140d76aec*/
      sub_140C7FB50(v126); /*0x140d76afd*/  // GENERIC enum/Option Drop glue (verified via separate decompile, NOT relaunch-trigger; see 0003)
      sub_140CAB140(v130); /*0x140d76b0a*/
      v53 = v129; /*0x140d76b10*/
      if ( *(_QWORD *)(v129 + 1640) != -1 ) /*0x140d76b1f*/
      {
        m128i_i64 = (_QWORD *)(v129 + 1648); /*0x140d76b2c*/
        v72 = *(__int64 **)(v129 + 1648); /*0x140d76b33*/
        v126 = *(const __m128i **)(v129 + 1656); /*0x140d76b41*/
        v128 = nullptr; /*0x140d76b48*/
        v125 = v72; /*0x140d76b53*/
        while ( v126 != v128 ) /*0x140d76b6e*/
        {
          v128 = (const __m128i *)((char *)v128 + 1); /*0x140d76b73*/
          v73 = v72 + 12; /*0x140d76b7a*/
          sub_140401FB0(); /*0x140d76b7e*/
          v72 = v73; /*0x140d76b84*/
        }
        v53 = v129; /*0x140d76b89*/
        v51 = *(_QWORD *)(v129 + 1640); /*0x140d76b90*/
        if ( v51 ) /*0x140d76b9a*/
LABEL_85:
          sub_140001660(*m128i_i64, 96 * v51, 8); /*0x140d76b9c*/
      }
LABEL_86:
      *(_BYTE *)(v53 + 1840) = 1; /*0x140d76bb9*/
      sub_140C9E450(v130); /*0x140d76bc8*/
      v104 = v45; /*0x140d76bce*/
      v105 = WORD2(v45); /*0x140d76bd8*/
      v107 = v16; /*0x140d76bdf*/
      v102 = v9; /*0x140d76bea*/
      v103 = v44; /*0x140d76bf1*/
      v106 = v15; /*0x140d76bf8*/
      v101 = v52; /*0x140d76c00*/
      v74 = v129; /*0x140d76c07*/
      *(_BYTE *)(v129 + 1859) = 0; /*0x140d76c0e*/
      sub_14172B820(v108, v74, 360); /*0x140d76c28*/
      *(_BYTE *)(v74 + 1858) = 0; /*0x140d76c2d*/
      v75 = *(_QWORD *)(v74 + 384); /*0x140d76c34*/
      *(_BYTE *)(v74 + 1857) = 0; /*0x140d76c3b*/
      *(_QWORD *)&v97[16] = *(_QWORD *)(v74 + 376); /*0x140d76c49*/
      *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)(v74 + 360)); /*0x140d76c58*/
      sub_140AFFC30( /*0x140d76c85*/  // final CoreEnvelope response emission (generic, shared with all manager-backed commands)
        (__int64)v108,
        v75,
        (__int64)&v101,
        (__int128 *)v97,
        *(_DWORD *)(v74 + 1848),
        *(_DWORD *)(v74 + 1852));
      v65 = 1; /*0x140d76c8b*/
      result = 0; /*0x140d76c8d*/
      v60 = (_BYTE *)v129; /*0x140d76c8f*/
LABEL_87:
      v60[1856] = v65; /*0x140d76c96*/
      return result;
  }
}

// refs of interest (abbreviated to non-generic/target-relevant entries):
// 0x14188717d aSetCodexNoAcco -> "set_codex_no_account_slots"
// 0x1418865b4 aManager_1 -> "manager"
// 0x141887197 aSlots -> "slots" (arg key)
// 0x14188719c aRelaunch -> "relaunch" (arg key) -- KEY BEHAVIORAL FINDING: payload is
//   {slots, relaunch}, meaning no-account-slot config changes carry an explicit
//   caller-controlled "relaunch Codex now" flag.
// 0x14045b370 sub_14045B370 -> manager.request completion for "slots" arg
// 0x1409543d0 sub_1409543D0 -> manager.request completion for "relaunch" arg
// 0x1405052c0 sub_1405052C0 -> apply-handler invoke wrapper (persistence/business
//   leaf call site; decompiled separately, see 0002-apply-handler-invoke-0x1405052c0.c)
// 0x140c7fb50 sub_140C7FB50 -> verified GENERIC enum/Option Drop glue (decompiled
//   separately, see 0003-generic-drop-glue-0x140c7fb50.c) -- NOT relaunch-trigger logic
// 0x140affc30 sub_140AFFC30 -> generic CoreEnvelope response finalize (shared)
