// round3 (2026-08-07) item1递归展开目标2/4 win侧确认体：config_takeover::takeover
// win addr=0x140574ee0 size=0xbfe(3070B) FULL BODY, NO TRUNCATION（本文件为mcp__ida-pro-mcp-win__decompile()原始返回逐字节落盘，未做任何摘要/裁剪）
// 已在win IDB改名为 config_takeover_takeover，归入dirtree /codexmate_lib/core/relay/config_takeover/takeover，加中文注释，idb_save()确认落盘
// 确认依据：①唯一字符串精确命中'router-takeover-backup.json'(27B)，与mac takeover函数体内Path::_join(...,"router-takeover-backup.json...",27)调用完全一致（含相同长度参数27）
//          ②调用序列结构同构：ensure_directories前置检查 -> quarantine_damaged_backups(sub_140570D80) -> read_optional_text(sub_14056C440) -> split_foreign_surface(sub_14056CD70)
//            -> Path::join("router-takeover-backup.json") -> read_backup(sub_14056AC00) -> [legacy分支 read_legacy_backup_lines(sub_140570790)]
//            -> merge_runtime_quarantine(sub_14056F3C0)/chrono::now新建分支二选一 -> serde_json序列化 -> atomic_write::write_atomic_with_mode(sub_140A6DB10，出现两次)
//          与mac config_takeover::takeover(0x100aecde0)逐步骤一一对应，无一步遗漏或多余

__int64 __fastcall config_takeover_takeover(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rbx
  _QWORD *v30; // r14
  __int64 v31; // rdx
  __int128 v32; // kr10_16
  __int64 v33; // r15
  _QWORD *v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r13
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  char v48; // al
  int v49; // r15d
  __int64 v50; // r13
  __int64 v51; // r12
  __int64 v52; // rax
  _OWORD *v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm0
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  __int64 v62; // rax
  _OWORD *v63; // rax
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  bool v67; // bl
  bool v68; // zf
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // [rsp+30h] [rbp-50h] BYREF
  __m256i v72; // [rsp+40h] [rbp-40h]
  __int128 v73; // [rsp+60h] [rbp-20h]
  __int128 v74; // [rsp+70h] [rbp-10h]
  __int64 v75; // [rsp+80h] [rbp+0h]
  __int128 v76; // [rsp+90h] [rbp+10h] BYREF
  __int64 v77; // [rsp+A0h] [rbp+20h]
  __int128 v78; // [rsp+B0h] [rbp+30h]
  __m256i v79; // [rsp+C0h] [rbp+40h]
  __int128 v80; // [rsp+E0h] [rbp+60h]
  __int64 v81; // [rsp+F0h] [rbp+70h]
  __int64 v82; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v83; // [rsp+100h] [rbp+80h]
  __int64 v84; // [rsp+108h] [rbp+88h]
  __int128 v85; // [rsp+118h] [rbp+98h] BYREF
  __int64 v86; // [rsp+128h] [rbp+A8h]
  __int128 v87; // [rsp+130h] [rbp+B0h]
  __int64 v88; // [rsp+140h] [rbp+C0h]
  __int128 v89; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v90; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v91; // [rsp+170h] [rbp+F0h]
  __int128 v92; // [rsp+180h] [rbp+100h] BYREF
  __int64 v93; // [rsp+190h] [rbp+110h]
  __int64 v94; // [rsp+198h] [rbp+118h]
  __int128 v95; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v96; // [rsp+1B0h] [rbp+130h]
  __int64 v97; // [rsp+1C0h] [rbp+140h]
  __int64 v98; // [rsp+1C8h] [rbp+148h]
  __int128 v99; // [rsp+1D0h] [rbp+150h] BYREF
  __m256i v100; // [rsp+1E0h] [rbp+160h]
  __int128 v101; // [rsp+200h] [rbp+180h]
  _BYTE v102[24]; // [rsp+210h] [rbp+190h]
  __int64 v103; // [rsp+230h] [rbp+1B0h]
  __int64 v104; // [rsp+238h] [rbp+1B8h]
  _BYTE v105[96]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v106; // [rsp+2A0h] [rbp+220h]
  int v107; // [rsp+2A8h] [rbp+228h]
  char v108; // [rsp+2ADh] [rbp+22Dh]
  char v109; // [rsp+2AEh] [rbp+22Eh]
  char v110; // [rsp+2AFh] [rbp+22Fh]
  __int64 v111; // [rsp+2B0h] [rbp+230h]

  v111 = -2;
  v4 = sub_140539CD0(a2);
  if ( v4 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
    return a1;
  }
  v5 = a2[97];
  v6 = a2[98];
  sub_140570D80((__int64)v105, v5, v6);
  v7 = *(_QWORD *)v105;
  v99 = *(_OWORD *)&v105[8];
  v100.m256i_i64[0] = *(_QWORD *)&v105[24];
  if ( *(_QWORD *)v105 != -1 )
  {
    v8 = *(_OWORD *)&v105[32];
    v9 = *(_OWORD *)&v105[48];
    v10 = *(_OWORD *)&v105[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v105[80];
    *(_OWORD *)(a1 + 64) = v10;
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 24) = v100.m256i_i64[0];
    *(_OWORD *)(a1 + 8) = v99;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  v87 = v99;
  v88 = v100.m256i_i64[0];
  v11 = a2[9];
  v12 = a2[10];
  sub_14056C440(v105, v11, v12);
  v13 = *(_QWORD *)v105;
  v99 = *(_OWORD *)&v105[8];
  v100.m256i_i64[0] = *(_QWORD *)&v105[24];
  v106 = a1;
  if ( *(_QWORD *)v105 != -1 )
  {
    v14 = *(_OWORD *)&v105[32];
    v15 = *(_OWORD *)&v105[48];
    v16 = *(_OWORD *)&v105[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v105[80];
    *(_OWORD *)(a1 + 64) = v16;
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_QWORD *)(a1 + 24) = v100.m256i_i64[0];
    *(_OWORD *)(a1 + 8) = v99;
    *(_QWORD *)a1 = v13;
    goto LABEL_39;
  }
  v95 = v99;
  v96 = v100.m256i_i64[0];
  sub_14056CD70(v105, a2, *((_QWORD *)&v99 + 1));
  v103 = *(_QWORD *)&v105[8];
  v97 = *(_QWORD *)v105;
  v17 = *(_QWORD *)&v105[16];
  v91 = *(_OWORD *)&v105[56];
  v90 = *(_OWORD *)&v105[40];
  v89 = *(_OWORD *)&v105[24];
  sub_14151B4E0((unsigned int)&v82, v5, v6, (unsigned int)"router-takeover-backup.json", 27);
  sub_14056AC00(v105, v5, v6);
  v18 = *(_QWORD *)v105;
  v99 = *(_OWORD *)&v105[8];
  v100 = *(__m256i *)&v105[24];
  v101 = *(_OWORD *)&v105[56];
  *(_OWORD *)v102 = *(_OWORD *)&v105[72];
  *(_QWORD *)&v102[16] = *(_QWORD *)&v105[88];
  if ( *(_QWORD *)v105 != -1 )
  {
    v19 = v106;
    *(_QWORD *)(v106 + 88) = *(_QWORD *)&v102[16];
    *(_OWORD *)(v19 + 72) = *(_OWORD *)v102;
    v20 = v99;
    v21 = *(_OWORD *)v100.m256i_i8;
    v22 = *(_OWORD *)&v100.m256i_u64[2];
    *(_OWORD *)(v19 + 56) = v101;
    *(_OWORD *)(v19 + 40) = v22;
    *(_OWORD *)(v19 + 24) = v21;
    *(_OWORD *)(v19 + 8) = v20;
    *(_QWORD *)v19 = v18;
LABEL_12:
    if ( v82 )
      sub_140001660(v83, v82, 1);
    v28 = *((_QWORD *)&v89 + 1);
    v29 = v90;
    if ( (_QWORD)v90 )
    {
      v30 = (_QWORD *)(*((_QWORD *)&v89 + 1) + 8LL);
      do
      {
        v31 = *(v30 - 1);
        if ( v31 )
          sub_140001660(*v30, v31, 1);
        v30 += 3;
        --v29;
      }
      while ( v29 );
    }
    if ( (_QWORD)v89 )
      sub_140001660(v28, 24 * v89, 8);
    v32 = v91;
    if ( *((_QWORD *)&v91 + 1) )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v32 + 48 * v33);
        if ( *v34 )
          sub_140001660(v34[1], *v34, 1);
        v35 = v34[4];
        v36 = v34[5];
        if ( v36 )
        {
          v37 = (_QWORD *)(v35 + 8);
          do
          {
            v38 = *(v37 - 1);
            if ( v38 )
              sub_140001660(*v37, v38, 1);
            v37 += 3;
            --v36;
          }
          while ( v36 );
        }
        v39 = v34[3];
        if ( v39 )
          sub_140001660(v35, 24 * v39, 8);
        ++v33;
      }
      while ( v33 != *((_QWORD *)&v32 + 1) );
    }
    if ( *((_QWORD *)&v90 + 1) )
      sub_140001660(v32, 48LL * *((_QWORD *)&v90 + 1), 8);
    if ( v97 )
      sub_140001660(v103, v97, 1);
    if ( (_QWORD)v95 )
      sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
LABEL_39:
    v40 = *((_QWORD *)&v87 + 1);
    v41 = v88;
    if ( v88 )
    {
      v42 = (_QWORD *)(*((_QWORD *)&v87 + 1) + 8LL);
      do
      {
        v43 = *(v42 - 1);
        if ( v43 )
          sub_140001660(*v42, v43, 1);
        v42 += 3;
        --v41;
      }
      while ( v41 );
    }
    a1 = v106;
    if ( (_QWORD)v87 )
    {
      v44 = 24 * v87;
      v45 = 8;
      v46 = v40;
LABEL_46:
      sub_140001660(v46, v44, v45);
      return a1;
    }
    return a1;
  }
  v75 = *(_QWORD *)&v102[16];
  v74 = *(_OWORD *)v102;
  v73 = v101;
  v72 = v100;
  v71 = v99;
  v104 = v99;
  v108 = 1;
  sub_140570790(v105, v5, v6);
  v23 = *(_QWORD *)v105;
  v99 = *(_OWORD *)&v105[8];
  v100.m256i_i64[0] = *(_QWORD *)&v105[24];
  if ( *(_QWORD *)v105 != -1 )
  {
    v24 = *(_OWORD *)&v105[32];
    v25 = *(_OWORD *)&v105[48];
    v26 = *(_OWORD *)&v105[64];
    v27 = v106;
    *(_OWORD *)(v106 + 80) = *(_OWORD *)&v105[80];
    *(_OWORD *)(v27 + 64) = v26;
    *(_OWORD *)(v27 + 48) = v25;
    *(_OWORD *)(v27 + 32) = v24;
    *(_QWORD *)(v27 + 24) = v100.m256i_i64[0];
    *(_OWORD *)(v27 + 8) = v99;
    *(_QWORD *)v27 = v23;
    if ( v104 == -1 )
      goto LABEL_12;
LABEL_11:
    sub_140522150(&v71);
    goto LABEL_12;
  }
  v76 = v99;
  v77 = v100.m256i_i64[0];
  if ( v104 == -1 )
  {
    v109 = 1;
    sub_14109ED10(&v85);
    v49 = sub_14053F820((unsigned int)v85);
    v50 = DWORD1(v85);
    v51 = DWORD2(v85);
    v109 = 1;
    sub_140465930(&v92, &v89);
    sub_14046ADA0(&v99, (char *)&v90 + 8);
    sub_141543F00(v105, &v95);
    v79.m256i_i64[0] = v93;
    v78 = v92;
    *(_OWORD *)&v79.m256i_u64[1] = v99;
    v79.m256i_i64[3] = v100.m256i_i64[0];
    v80 = *(_OWORD *)v105;
    v81 = *(_QWORD *)&v105[16];
    v100.m256i_i64[3] = v100.m256i_i64[0];
    v100.m256i_i64[0] = v93;
    *(_OWORD *)&v100.m256i_u64[1] = v99;
    *(_QWORD *)v102 = *(_QWORD *)&v105[16];
    v101 = *(_OWORD *)v105;
    v99 = v92;
    *(_QWORD *)&v102[8] = 1000 * (v50 + 86400LL * (v49 - 719163)) + ((unsigned __int64)(1125899907 * v51) >> 50);
    *(_DWORD *)&v102[16] = 1;
    LOBYTE(a1) = 1;
  }
  else
  {
    *(_QWORD *)&v105[80] = v75;
    *(_OWORD *)&v105[64] = v74;
    *(_OWORD *)&v105[48] = v73;
    *(__m256i *)&v105[16] = v72;
    *(_OWORD *)v105 = v71;
    v48 = sub_14056F3C0(a2, v105, &v89);
    v81 = *(_QWORD *)&v105[64];
    v80 = *(_OWORD *)&v105[48];
    v79 = *(__m256i *)&v105[16];
    v78 = *(_OWORD *)v105;
    *(_QWORD *)v102 = *(_QWORD *)&v105[64];
    v101 = *(_OWORD *)&v105[48];
    v100 = *(__m256i *)&v105[16];
    v99 = *(_OWORD *)v105;
    *(_OWORD *)&v102[8] = *(_OWORD *)&v105[72];
    LODWORD(a1) = 0;
    if ( !v48 )
      goto LABEL_61;
  }
  v110 = a1;
  sub_140527270(&v92, &v99);
  if ( (_QWORD)v92 == -1 )
  {
    v110 = a1;
    sub_140537800(v105, *((_QWORD *)&v92 + 1));
    v57 = *(_OWORD *)&v105[16];
    v58 = *(_OWORD *)&v105[48];
    v59 = *(_OWORD *)&v105[64];
    v60 = (_OWORD *)v106;
    *(_OWORD *)(v106 + 32) = *(_OWORD *)&v105[32];
    v60[3] = v58;
    v60[4] = v59;
    v60[5] = *(_OWORD *)&v105[80];
    v61 = *(_OWORD *)v105;
    v60[1] = v57;
    *v60 = v61;
    goto LABEL_65;
  }
  v98 = v92;
  v107 = a1;
  v94 = *((_QWORD *)&v92 + 1);
  v52 = sub_140A6DB10(v83, v84, *((_QWORD *)&v92 + 1), v93);
  if ( v52 )
  {
    sub_1405379A0(v105, v52);
    v53 = (_OWORD *)v106;
    *(_OWORD *)(v106 + 80) = *(_OWORD *)&v105[80];
    v53[4] = *(_OWORD *)&v105[64];
    v54 = *(_OWORD *)v105;
    v55 = *(_OWORD *)&v105[16];
    v56 = *(_OWORD *)&v105[32];
    v53[3] = *(_OWORD *)&v105[48];
    v53[2] = v56;
    v53[1] = v55;
    *v53 = v54;
    if ( v98 )
      sub_140001660(v94, v98, 1);
    LOBYTE(a1) = v107;
LABEL_65:
    v67 = v104 != -1;
    sub_140522150(&v99);
    sub_140033330(&v76);
    if ( ((unsigned __int8)a1 & v67) == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v98 )
    sub_140001660(v94, v98, 1);
  LODWORD(a1) = v107;
LABEL_61:
  if ( v17 != v96 || (unsigned int)sub_14172BEB0(v103, *((_QWORD *)&v95 + 1), v17) )
  {
    v110 = a1;
    v62 = sub_140A6DB10(v11, v12, v103, v17);
    if ( v62 )
    {
      v110 = a1;
      sub_140537910(v105, v62);
      v63 = (_OWORD *)v106;
      *(_OWORD *)(v106 + 80) = *(_OWORD *)&v105[80];
      v63[4] = *(_OWORD *)&v105[64];
      v64 = *(_OWORD *)v105;
      v65 = *(_OWORD *)&v105[16];
      v66 = *(_OWORD *)&v105[32];
      v63[3] = *(_OWORD *)&v105[48];
      v63[2] = v66;
      v63[1] = v65;
      *v63 = v64;
      goto LABEL_65;
    }
  }
  v110 = a1;
  sub_140448F40(&v85, *((_QWORD *)&v89 + 1), *((_QWORD *)&v89 + 1) + 24 * v90);
  v107 = a1;
  sub_140461F50(&v92, v91, v91 + 48LL * *((_QWORD *)&v91 + 1));
  v68 = v104 == -1;
  *(_QWORD *)&v105[64] = v88;
  v69 = v87;
  *(_OWORD *)&v105[48] = v87;
  v70 = v85;
  *(_OWORD *)v105 = v85;
  *(_QWORD *)&v105[16] = v86;
  *(_QWORD *)&v105[40] = v93;
  *(_OWORD *)&v105[24] = v92;
  a1 = v106;
  *(_QWORD *)(v106 + 72) = v88;
  *(_OWORD *)(a1 + 56) = v69;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v105[32];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v105[16];
  *(_OWORD *)(a1 + 8) = v70;
  *(_BYTE *)(a1 + 80) = !v68;
  *(_QWORD *)a1 = -1;
  sub_140522150(&v99);
  sub_140033330(&v76);
  if ( v82 )
    sub_140001660(v83, v82, 1);
  sub_140521E30(&v89);
  if ( v97 )
    sub_140001660(v103, v97, 1);
  v44 = v95;
  if ( (_QWORD)v95 )
  {
    v46 = *((_QWORD *)&v95 + 1);
    v45 = 1;
    goto LABEL_46;
  }
  return a1;
}
