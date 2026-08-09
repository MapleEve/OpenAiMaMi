// Pseudocode for delete_sessions (EA: 0x140d5d450, size: 0x136c)
// Module: commands/sessions
// Source: IDA Hex-Rays decompiler
// IDA Comment: 职责：Tauri 命令 delete_sessions 的公开异步命令实现（完整 Rust async Future 状态机 switch(state)，非薄壳转发，本轮完整反编译确认为真实业务逻辑：按 ids 批量删除会话记录并重建仓库互斥锁/Repo 状态）。边界：commands::sessions 模块。副作用：删除本地会话存储记录（持久化写操作）。交叉核实：mac 侧 1.2.4→1.2
// 职责：Tauri 命令 delete_sessions 的公开异步命令实现（完整 Rust async Future 状态机 switch(state)，非薄壳转发，本轮完整反编译确认为真实业务逻辑：按 ids 批量删除会话记录并重建仓库互斥锁/Repo 状态）。边界：commands::sessions 模块。副作用：删除本地会话存储记录（持久化写操作）。交叉核实：mac 侧 1.2.4→1.2.6 符号 diff 报告该符号顶层导出消失(分类 likely_alive_refactored_symbol_delisted)，本轮 win 侧证实 Tauri 命令字符串 delete_sessions 仍存在且 owner 函数是完整可执行的真实业务逻辑（非空壳/非降级），佐证 mac 侧'仍存活只是符号未导出'的判断，反驳'真删除'假设。win 侧本轮经唯一命令名字符串 xref 定位并完成红线24 production。
char __fastcall delete_sessions(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // rax
  __int128 v11; // xmm0
  const __m128i *v12; // rdx
  __int64 *v13; // r8
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  const __m128i *v17; // r9
  __m128i v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  volatile void *v21; // rdi
  __int64 *v22; // r14
  char *v23; // rcx
  _BYTE *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // r13
  unsigned __int64 v29; // rdi
  int v30; // r12d
  unsigned int v31; // r15d
  __int64 v32; // rbx
  PVOID v33; // rcx
  char v34; // al
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  __m128i v37; // xmm6
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int8 v42; // bl
  __int64 v43; // r15
  __int64 v44; // rcx
  PVOID v45; // rcx
  char v46; // al
  bool v47; // of
  __int64 v48; // rcx
  volatile signed __int64 *v49; // rax
  __int64 v50; // rt0
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r14
  void *v58; // r12
  __int64 v59; // r13
  char v60; // r15
  __int64 v61; // rsi
  void *v62; // r15
  char *v63; // r12
  int v64; // r14d
  unsigned int v65; // esi
  __int64 v66; // rbx
  __m128i *v67; // rax
  __m128i v68; // xmm0
  char v69; // cl
  char result; // al
  __int64 v71; // r12
  const __m128i *v72; // r13
  __int64 v73; // rsi
  __int64 v74; // r14
  _QWORD *v75; // r15
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rax
  PVOID v79; // rdx
  __int64 *v80; // rcx
  __int64 *v81; // r15
  __int64 v82; // rdi
  __int64 v83; // rdx
  int v84; // eax
  _QWORD *v85; // rdi
  __int64 v86; // [rsp+20h] [rbp-60h]
  _BYTE v87[24]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v88; // [rsp+48h] [rbp-38h]
  _QWORD v89[3]; // [rsp+418h] [rbp+398h] BYREF
  __m128i v90; // [rsp+430h] [rbp+3B0h]
  __m128i v91; // [rsp+440h] [rbp+3C0h]
  __int128 v92; // [rsp+450h] [rbp+3D0h]
  __int128 v93; // [rsp+460h] [rbp+3E0h]
  __int128 v94; // [rsp+470h] [rbp+3F0h]
  __int128 v95; // [rsp+480h] [rbp+400h]
  __m128i v96; // [rsp+490h] [rbp+410h]
  __m128i *v97; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v98; // [rsp+4A8h] [rbp+428h]
  __m128i v99; // [rsp+4B0h] [rbp+430h] BYREF
  _BYTE v100[24]; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v101; // [rsp+4D8h] [rbp+458h]
  __int128 v102; // [rsp+4E8h] [rbp+468h]
  __int128 v103; // [rsp+4F8h] [rbp+478h]
  __int128 v104; // [rsp+508h] [rbp+488h]
  __m128i v105; // [rsp+518h] [rbp+498h]
  __m128i v106; // [rsp+880h] [rbp+800h]
  __int64 v107; // [rsp+890h] [rbp+810h]
  volatile signed __int64 *v108; // [rsp+898h] [rbp+818h]
  __m128i v109; // [rsp+8A0h] [rbp+820h] BYREF
  __m128i v110; // [rsp+8B0h] [rbp+830h]
  __int128 v111; // [rsp+8C0h] [rbp+840h]
  __int128 v112; // [rsp+8D0h] [rbp+850h]
  __int128 v113; // [rsp+8E0h] [rbp+860h]
  __int128 v114; // [rsp+8F0h] [rbp+870h]
  __m128i v115; // [rsp+900h] [rbp+880h]
  __int64 v116; // [rsp+918h] [rbp+898h] BYREF
  char v117; // [rsp+920h] [rbp+8A0h]
  int v118; // [rsp+921h] [rbp+8A1h]
  __int16 v119; // [rsp+925h] [rbp+8A5h]
  char v120; // [rsp+927h] [rbp+8A7h]
  __m128i v121; // [rsp+928h] [rbp+8A8h]
  __int64 v122; // [rsp+938h] [rbp+8B8h]
  __m128i v123; // [rsp+940h] [rbp+8C0h]
  __int128 v124; // [rsp+950h] [rbp+8D0h]
  __int128 v125; // [rsp+960h] [rbp+8E0h]
  __int128 v126; // [rsp+970h] [rbp+8F0h]
  __int128 v127; // [rsp+980h] [rbp+900h]
  __m128i v128; // [rsp+990h] [rbp+910h] BYREF
  __m128i v129; // [rsp+9A0h] [rbp+920h] BYREF
  __int128 v130; // [rsp+9B0h] [rbp+930h]
  __int128 v131; // [rsp+9C0h] [rbp+940h]
  __int128 v132; // [rsp+9D0h] [rbp+950h]
  __int128 v133; // [rsp+9E0h] [rbp+960h]
  __m128i v134; // [rsp+9F0h] [rbp+970h]
  __m128i v135; // [rsp+A00h] [rbp+980h] BYREF
  __int64 v136; // [rsp+A10h] [rbp+990h]
  __int64 v137; // [rsp+A20h] [rbp+9A0h]
  void *v138; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v139; // [rsp+A30h] [rbp+9B0h]
  __int64 v140; // [rsp+A38h] [rbp+9B8h]
  __m128i v141; // [rsp+A40h] [rbp+9C0h] BYREF
  __int64 v142; // [rsp+A50h] [rbp+9D0h]
  char v143; // [rsp+A58h] [rbp+9D8h]
  int v144; // [rsp+A59h] [rbp+9D9h]
  __int16 v145; // [rsp+A5Dh] [rbp+9DDh]
  char v146; // [rsp+A5Fh] [rbp+9DFh]
  __m128i v147; // [rsp+A60h] [rbp+9E0h]
  int v148; // [rsp+A70h] [rbp+9F0h]
  const __m128i *v149; // [rsp+A78h] [rbp+9F8h]
  __int64 v150; // [rsp+A80h] [rbp+A00h]
  __int64 *v151; // [rsp+A88h] [rbp+A08h]
  char *v152; // [rsp+A90h] [rbp+A10h]
  const __m128i *v153; // [rsp+A98h] [rbp+A18h]
  __int64 v154; // [rsp+AA0h] [rbp+A20h]
  char v155; // [rsp+AAFh] [rbp+A2Fh] BYREF
  PVOID Address; // [rsp+AB0h] [rbp+A30h]
  __int64 v157; // [rsp+AB8h] [rbp+A38h]
  char v158; // [rsp+AC7h] [rbp+A47h]
  __int64 v159; // [rsp+AC8h] [rbp+A48h]

  v159 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 1952);
  v157 = a1;
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
          goto LABEL_110;
        case 2:
          goto LABEL_109;
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
          v97 = (__m128i *)aDeleteSessions;
          v98 = 15;
          v99.m128i_i64[0] = (__int64)aRepo_0;
          v99.m128i_i64[1] = 4;
          v154 = v5;
          *(_QWORD *)v100 = v5;
          *(_OWORD *)&v100[8] = (unsigned __int64)(v3 + 1688);
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 1680) + 16LL));
          v151 = (__int64 *)(v3 + 1688);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v87, (__int64)&v97, (__int64)&v99);
          v9 = v87[0];
          if ( v87[0] != 0xFF )
            goto LABEL_26;
          v7 = *(_QWORD *)&v87[8];
LABEL_5:
          v97 = (__m128i *)aDeleteSessions;
          v98 = 15;
          v99.m128i_i64[0] = (__int64)aMutationgate_0;
          v99.m128i_i64[1] = 12;
          *(_QWORD *)v100 = v154;
          *(_OWORD *)&v100[8] = v6;
          v8 = sub_14002B050((volatile void *)(*(_QWORD *)(v157 + 1680) + 16LL));
          if ( v8 )
            goto LABEL_6;
          sub_14172C620((__int64)v87, (__int64)&v97, (__int64)&v99);
          v9 = v87[0];
          if ( v87[0] == 0xFF )
          {
            v8 = *(_QWORD *)&v87[8];
LABEL_6:
            v97 = (__m128i *)aDeleteSessions;
            v98 = 15;
            v99.m128i_i64[0] = (__int64)aIds;
            v99.m128i_i64[1] = 3;
            *(_QWORD *)v100 = v154;
            *(_OWORD *)&v100[8] = v6;
            sub_14045AEC0(v87, &v97);
            v9 = v87[0];
            if ( v87[0] == 0xFF )
            {
              v10 = v88;
              v11 = *(_OWORD *)&v87[8];
              v3 = v157;
              *(_QWORD *)(v157 + 1736) = v7;
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
              v13 = (__int64 *)(v3 + 1928);
              *(_BYTE *)(v3 + 1928) = 0;
              *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848);
              v14 = _mm_loadu_si128((const __m128i *)(v3 + 1784));
              v15 = *(_OWORD *)(v3 + 1800);
              v16 = *(_OWORD *)(v3 + 1816);
              *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832);
              *(_OWORD *)(v3 + 1888) = v16;
              *(_OWORD *)(v3 + 1872) = v15;
              *(__m128i *)(v3 + 1856) = v14;
              v17 = (const __m128i *)(v3 + 1856);
              v5 = v154;
              switch ( *(_BYTE *)(v3 + 1920) )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_112;
                case 2:
                  goto LABEL_111;
                case 3:
                  goto LABEL_22;
              }
            }
          }
LABEL_26:
          v36 = ((unsigned __int64)((v87[7] << 16) | (unsigned int)*(unsigned __int16 *)&v87[5]) << 32)
              | *(unsigned int *)&v87[1];
          v37 = _mm_loadu_si128((const __m128i *)&v87[8]);
          v38 = v88;
          sub_140CAB140(v154);
          if ( *v151 == -1 )
          {
            v42 = 1;
            v43 = v157;
            goto LABEL_86;
          }
          v152 = (char *)(v157 + 1696);
          v39 = *(_QWORD *)(v157 + 1696);
          Address = *(PVOID *)(v157 + 1704);
          v153 = nullptr;
          v150 = v39;
          while ( Address != v153 )
          {
            v153 = (const __m128i *)((char *)v153 + 1);
            v40 = v39 + 96;
            sub_140401FB0();
            v39 = v40;
          }
          v41 = *v151;
          v42 = 1;
          v43 = v157;
          if ( !*v151 )
            goto LABEL_86;
          goto LABEL_85;
        case 1:
LABEL_110:
          v154 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_109:
          v154 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v13 = (__int64 *)(v3 + 1928);
  v12 = (const __m128i *)(v3 + 1784);
  switch ( *(_BYTE *)(v3 + 1928) )
  {
    case 0:
      *(_QWORD *)(v3 + 1920) = *(_QWORD *)(v3 + 1848);
      v18 = _mm_loadu_si128(v12);
      v19 = *(_OWORD *)(v3 + 1800);
      v20 = *(_OWORD *)(v3 + 1816);
      *(_OWORD *)(v3 + 1904) = *(_OWORD *)(v3 + 1832);
      *(_OWORD *)(v3 + 1888) = v20;
      *(_OWORD *)(v3 + 1872) = v19;
      *(__m128i *)(v3 + 1856) = v18;
      v17 = (const __m128i *)(v3 + 1856);
      switch ( *(_BYTE *)(v3 + 1920) )
      {
        case 0:
          goto LABEL_11;
        case 1:
          goto LABEL_112;
        case 2:
          goto LABEL_111;
        case 3:
          goto LABEL_22;
      }
    case 1:
      v154 = v5;
      v137 = v3 + 1784;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v154 = v5;
      v137 = v3 + 1784;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v17 = (const __m128i *)(v3 + 1856);
      switch ( *(_BYTE *)(v3 + 1920) )
      {
        case 0:
LABEL_11:
          v151 = v13;
          v153 = v12;
          v154 = v5;
          *(_BYTE *)(v3 + 1922) = 0;
          v21 = *(volatile void **)(v3 + 1880);
          *(_OWORD *)(v3 + 1896) = *(_OWORD *)(v3 + 1880);
          *(_BYTE *)(v3 + 1921) = 1;
          v136 = v17[1].m128i_i64[0];
          v149 = v17;
          v135 = _mm_loadu_si128(v17);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v21, 1, 0) )
            sub_14176CDB0(v21);
          Address = (PVOID)v21;
          v22 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v84 = sub_14176DA50(a1);
            LOBYTE(v84) = v84 ^ 1;
            LODWORD(v150) = v84;
            v23 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_34;
          }
          else
          {
            LODWORD(v150) = 0;
            v23 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_34;
          }
          v141.m128i_i64[0] = 0;
          v141.m128i_i64[1] = 1;
          v142 = 0;
          v99.m128i_i64[0] = 1610612768;
          v97 = &v141;
          v98 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v97) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v155,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v152 = (char *)v141.m128i_i64[1];
          v28 = (void *)v141.m128i_i64[0];
          LODWORD(v29) = (unsigned __int8)v142;
          v30 = HIBYTE(v142);
          v31 = *(unsigned __int16 *)((char *)&v142 + 5);
          v32 = *(unsigned int *)((char *)&v142 + 1);
          if ( !(_BYTE)v150 && 2 * *v22 && !(unsigned __int8)sub_14176DA50(v25) )
            *((_BYTE *)Address + 1) = 1;
          v33 = Address;
          v34 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v34 == 2 )
            WakeByAddressSingle(v33);
          if ( v28 != (void *)-1LL )
          {
            Address = v28;
            v35 = ((unsigned __int64)((v30 << 16) | v31) << 32) | v32;
LABEL_63:
            v71 = v157;
            *(_BYTE *)(v157 + 1922) = 0;
            v72 = v153;
            if ( *(_BYTE *)(v71 + 1921) )
            {
              v73 = v135.m128i_i64[1];
              v74 = v136;
              if ( v136 )
              {
                v75 = (_QWORD *)(v135.m128i_i64[1] + 8);
                do
                {
                  v24 = (_BYTE *)*(v75 - 1);
                  if ( v24 )
                    sub_140001660(*v75, v24, 1);
                  v75 += 3;
                  --v74;
                }
                while ( v74 );
              }
              if ( v135.m128i_i64[0] )
                sub_140001660(v73, 24 * v135.m128i_i64[0], 8);
            }
            *(_BYTE *)(v71 + 1921) = 0;
            v123 = v129;
            v124 = v130;
            v125 = v131;
            v126 = v132;
            v127 = v133;
            v128 = v134;
            *(_BYTE *)(v71 + 1920) = 1;
            v110 = v123;
            v111 = v124;
            v112 = v125;
            v113 = v126;
            v114 = v127;
            v115 = _mm_load_si128(&v128);
            goto LABEL_72;
          }
          v23 = v152;
          LODWORD(v150) = v29;
LABEL_34:
          Address = v23;
          sub_140A80280(v87, v23 + 8);
          *(_BYTE *)(v157 + 1922) = 1;
          if ( (v150 & 1) == 0 && 2 * *v22 && !(unsigned __int8)sub_14176DA50(v44) )
            *((_BYTE *)Address + 1) = 1;
          v45 = Address;
          v46 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          v47 = __OFSUB__(v46, 2);
          if ( v46 == 2 )
            WakeByAddressSingle(v45);
          v48 = v157;
          v49 = **(volatile signed __int64 ***)(v157 + 1904);
          v50 = _InterlockedIncrement64(v49);
          if ( (v50 < 0) ^ v47 | (v50 == 0) )
            BUG();
          *(_WORD *)(v48 + 1921) = 0;
          v108 = v49;
          sub_14172B820(&v97, v87, 992);
          v106 = _mm_load_si128(&v135);
          v107 = v136;
          v51 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v158 = 1;
            v85 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v51 = v85;
          }
          if ( *((_DWORD *)v51 + 4) == 2 )
          {
            v52 = 704;
            if ( *(_BYTE *)v51 )
              v52 = 472;
            v53 = v51[1] + v52;
            v158 = 0;
            v54 = sub_14085DBE0(v53, v51, &v97, &off_1417EBF48);
          }
          else
          {
            v55 = 704;
            if ( *((_BYTE *)v51 + 64) )
              v55 = 472;
            v56 = v51[9] + v55;
            v158 = 0;
            v54 = sub_14085DBE0(v56, v51 + 8, &v97, &off_1417EBF30);
          }
          v3 = v157;
          *(_QWORD *)(v157 + 1912) = v54;
LABEL_49:
          Address = (PVOID)(v3 + 1912);
          sub_140505870(&v97, v3 + 1912, a2);
          v57 = (__int64)v97;
          if ( v97 == (__m128i *)-3LL )
          {
            v24 = (_BYTE *)v157;
            *(_BYTE *)(v157 + 1920) = 3;
            goto LABEL_61;
          }
          v58 = (void *)v98;
          v59 = v99.m128i_i64[0];
          LOBYTE(v29) = v99.m128i_i8[8];
          v35 = ((unsigned __int64)((v99.m128i_u8[15] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v99.m128i_u16[6] + 1)) << 32)
              | *(unsigned int *)((char *)&v99.m128i_u32[2] + 1);
          if ( v97 == (__m128i *)-2LL )
          {
            v57 = 0x800000000000000CuLL;
            v60 = 1;
          }
          else
          {
            v141 = _mm_loadu_si128((const __m128i *)v100);
            v60 = 0;
          }
          v109 = _mm_load_si128(&v141);
          v61 = *(_QWORD *)Address;
          if ( (unsigned __int8)sub_141398090(*(_QWORD *)Address) )
            sub_14139A2E0(v61);
          if ( v60 )
          {
            v97 = (__m128i *)v57;
            v98 = (__int64)v58;
            v99.m128i_i64[0] = v59;
            v99.m128i_i8[8] = v29;
            *(__int32 *)((char *)&v99.m128i_i32[2] + 1) = v35;
            v99.m128i_i8[15] = BYTE6(v35);
            *(__int16 *)((char *)&v99.m128i_i16[6] + 1) = WORD2(v35);
            *(__m128i *)v100 = _mm_load_si128(&v109);
            v138 = nullptr;
            v139 = 1;
            v140 = 0;
            v142 = 1610612768;
            v141.m128i_i64[0] = (__int64)&v138;
            v141.m128i_i64[1] = (__int64)&off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v97, &v141) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v155,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v62 = v138;
            v63 = (char *)v139;
            LOBYTE(v29) = v140;
            v64 = HIBYTE(v140);
            v65 = *(unsigned __int16 *)((char *)&v140 + 5);
            v66 = *(unsigned int *)((char *)&v140 + 1);
            sub_140CAB2C0(&v97);
            v152 = v63;
            Address = v62;
            v35 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66;
            goto LABEL_63;
          }
          if ( v57 == -1 )
          {
            v152 = (char *)v59;
            Address = v58;
            goto LABEL_63;
          }
          v147 = _mm_load_si128(&v109);
          v144 = v35;
          v146 = BYTE6(v35);
          v145 = WORD2(v35);
          v141.m128i_i64[0] = v57;
          v141.m128i_i64[1] = (__int64)v58;
          v142 = v59;
          v148 = v59;
          v143 = v29;
          sub_1404CDAC0(&v97, &v141);
          v67 = v97;
          v33 = (PVOID)v98;
          v26 = v99.m128i_i64[0];
          v68 = _mm_loadu_si128((const __m128i *)&v99.m128i_u64[1]);
          v29 = v99.m128i_u64[1];
          v129 = *(__m128i *)&v100[8];
          v130 = v101;
          v131 = v102;
          v132 = v103;
          v133 = v104;
          v134 = v105;
          v24 = (_BYTE *)v157;
          *(_BYTE *)(v157 + 1922) = 0;
          v24[1921] = 0;
          v123 = v129;
          v124 = v130;
          v125 = v131;
          v126 = v132;
          v127 = v133;
          v128 = v134;
          v24[1920] = 1;
          if ( v67 == (__m128i *)-2LL )
          {
LABEL_61:
            v24[1928] = 3;
            v24[1936] = 3;
            v69 = 3;
            result = 1;
            goto LABEL_87;
          }
          v115 = v128;
          v114 = v127;
          v113 = v126;
          v112 = v125;
          v111 = v124;
          v110 = v123;
          if ( v67 != (__m128i *)-1LL )
          {
            v96 = v115;
            v95 = v114;
            v94 = v113;
            v93 = v112;
            v92 = v111;
            v91 = v110;
            v89[0] = v67;
            v89[1] = v33;
            v89[2] = v26;
            v90 = v68;
            sub_14050A020(&v97, v89);
            v36 = ((unsigned __int64)((HIBYTE(v98) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v98 + 5)) << 32)
                | *(unsigned int *)((char *)&v98 + 1);
            v9 = v98;
            v37 = _mm_loadu_si128(&v99);
            v38 = *(_QWORD *)v100;
            if ( v97 == (__m128i *)-1LL )
            {
              v42 = 0;
            }
            else
            {
              HIBYTE(v98) = (((unsigned __int64)((HIBYTE(v98) << 16)
                                               | (unsigned int)*(unsigned __int16 *)((char *)&v98 + 5)) << 32)
                           | *(unsigned int *)((char *)&v98 + 1)) >> 48;
              *(_WORD *)((char *)&v98 + 5) = WORD2(v36);
              *(_DWORD *)((char *)&v98 + 1) = v36;
              v99 = v37;
              v129.m128i_i64[0] = 0;
              v129.m128i_i64[1] = 1;
              *(_QWORD *)&v130 = 0;
              *(_QWORD *)&v87[16] = 1610612768;
              *(_QWORD *)v87 = &v129;
              *(_QWORD *)&v87[8] = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v97, v87) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v37 = _mm_load_si128(&v129);
              v38 = v130;
              sub_140CAB2C0(&v97);
              v42 = 1;
              v9 = 3;
            }
            v72 = v153;
            goto LABEL_80;
          }
          v152 = (char *)v26;
          Address = v33;
          v35 = v29 >> 8;
          v72 = v153;
LABEL_72:
          v76 = v35 << 8;
          v38 = v76 | (unsigned __int8)v29;
          if ( v76 < 0 )
          {
            v77 = 0;
            goto LABEL_74;
          }
          if ( v38 )
          {
            nullsub_1(v33, v24, v26, v27, v86);
            v77 = 1;
            v78 = sub_140001650(v38, 1);
            if ( !v78 )
            {
LABEL_74:
              v153 = v72;
              sub_14176E54B(v77, v38);
            }
            v36 = v78;
            sub_14172B820(v78, v152, v38);
            v79 = Address;
            if ( !Address )
              goto LABEL_79;
          }
          else
          {
            v36 = 1;
            v79 = Address;
            if ( !Address )
              goto LABEL_79;
          }
          sub_140001660(v152, v79, 1);
LABEL_79:
          v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)v36);
          v42 = 1;
          v9 = 3;
LABEL_80:
          *(_BYTE *)v151 = 1;
          sub_140C7F460(v72);
          sub_140CAB140(v154);
          v43 = v157;
          if ( *(_QWORD *)(v157 + 1688) != -1 )
          {
            v152 = (char *)(v157 + 1696);
            v80 = *(__int64 **)(v157 + 1696);
            Address = *(PVOID *)(v157 + 1704);
            v153 = nullptr;
            v151 = v80;
            while ( Address != v153 )
            {
              v153 = (const __m128i *)((char *)v153 + 1);
              v81 = v80 + 12;
              sub_140401FB0();
              v80 = v81;
            }
            v43 = v157;
            v41 = *(_QWORD *)(v157 + 1688);
            if ( v41 )
LABEL_85:
              sub_140001660(*(_QWORD *)v152, 96 * v41, 8);
          }
LABEL_86:
          *(_BYTE *)(v43 + 1936) = 1;
          sub_140C9B2A0(v154);
          v118 = v36;
          v120 = BYTE6(v36);
          v119 = WORD2(v36);
          v122 = v38;
          v117 = v9;
          v121 = v37;
          v116 = v42;
          v82 = v157;
          *(_BYTE *)(v157 + 1955) = 0;
          sub_14172B820(&v97, v82, 360);
          *(_BYTE *)(v82 + 1954) = 0;
          v83 = *(_QWORD *)(v82 + 384);
          *(_BYTE *)(v82 + 1953) = 0;
          *(_QWORD *)&v87[16] = *(_QWORD *)(v82 + 376);
          *(__m128i *)v87 = _mm_loadu_si128((const __m128i *)(v82 + 360));
          sub_140AFFC30(
            (__int64)&v97,
            v83,
            (__int64)&v116,
            (__int128 *)v87,
            *(_DWORD *)(v82 + 1944),
            *(_DWORD *)(v82 + 1948));
          v69 = 1;
          result = 0;
          v24 = (_BYTE *)v157;
LABEL_87:
          v24[1952] = v69;
          return result;
        case 1:
LABEL_112:
          v149 = v17;
          v151 = v13;
          v153 = v12;
          JUMPOUT(0x140D5E76CLL);
        case 2:
LABEL_111:
          v149 = v17;
          v151 = v13;
          v153 = v12;
          v154 = v5;
          sub_14176EC20(&off_141888B00);
        case 3:
LABEL_22:
          v149 = v17;
          v151 = v13;
          v153 = v12;
          v154 = v5;
          goto LABEL_49;
      }
  }
}
