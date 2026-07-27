// module: codexmate_lib/platform/process
// addr: 0x140354ff0
// name: enforce_codex_quiet_window_with
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::platform::process::enforce_codex_quiet_window_with | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall enforce_codex_quiet_window_with(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  char v5; // bl
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r12
  unsigned int v13; // r13d
  unsigned __int64 v14; // rbx
  unsigned __int32 v15; // edx
  unsigned __int32 v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  char v25; // r12
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // r8
  bool v30; // zf
  unsigned int v31; // edx
  bool v32; // cc
  bool v33; // cl
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // rdx
  __int64 v42; // rsi
  int v43; // r9d
  _OWORD *v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  int v48; // r9d
  _OWORD *v49; // rax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  _QWORD *v53; // rbx
  __int64 v54; // rdx
  __int128 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  _QWORD *v61; // rax
  __int64 result; // rax
  __int128 v63; // [rsp+30h] [rbp-50h] BYREF
  __int64 v64; // [rsp+40h] [rbp-40h]
  __int128 v65; // [rsp+48h] [rbp-38h] BYREF
  __int128 v66; // [rsp+58h] [rbp-28h]
  __int128 v67; // [rsp+68h] [rbp-18h]
  __int128 v68; // [rsp+78h] [rbp-8h]
  __int128 v69; // [rsp+88h] [rbp+8h]
  __int128 v70; // [rsp+98h] [rbp+18h]
  unsigned __int64 v71; // [rsp+A8h] [rbp+28h]
  __int128 v72; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v73; // [rsp+C0h] [rbp+40h]
  __int128 v74; // [rsp+D0h] [rbp+50h]
  __int128 v75; // [rsp+E0h] [rbp+60h]
  __int128 v76; // [rsp+F0h] [rbp+70h]
  __int128 v77; // [rsp+100h] [rbp+80h]
  char *v78; // [rsp+118h] [rbp+98h] BYREF
  __int64 v79; // [rsp+120h] [rbp+A0h]
  void *v80; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v81)(); // [rsp+130h] [rbp+B0h]
  bool *v82; // [rsp+138h] [rbp+B8h]
  __int64 (__fastcall *v83)(); // [rsp+140h] [rbp+C0h]
  __int128 *v84; // [rsp+148h] [rbp+C8h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+150h] [rbp+D0h]
  __int64 v86; // [rsp+158h] [rbp+D8h]
  __int64 v87; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v88; // [rsp+168h] [rbp+E8h]
  __int64 v89; // [rsp+170h] [rbp+F0h]
  char v90; // [rsp+178h] [rbp+F8h]
  __int16 v91; // [rsp+179h] [rbp+F9h]
  unsigned __int32 v92; // [rsp+184h] [rbp+104h]
  __int64 v93; // [rsp+188h] [rbp+108h]
  __int64 v94; // [rsp+190h] [rbp+110h]
  __int64 v95; // [rsp+198h] [rbp+118h]
  __int64 v96; // [rsp+1A0h] [rbp+120h]
  __int64 v97; // [rsp+1A8h] [rbp+128h]
  __int128 v98; // [rsp+1B0h] [rbp+130h]
  __int64 v99; // [rsp+1C0h] [rbp+140h]
  __m256i v100; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v101; // [rsp+1E8h] [rbp+168h]
  __int128 v102; // [rsp+1F8h] [rbp+178h]
  __int128 v103; // [rsp+208h] [rbp+188h]
  __int128 v104; // [rsp+218h] [rbp+198h]
  __int64 v105; // [rsp+228h] [rbp+1A8h]
  __int64 v106; // [rsp+230h] [rbp+1B0h]
  __int64 v107; // [rsp+238h] [rbp+1B8h]
  __int64 v108; // [rsp+240h] [rbp+1C0h]
  char v109; // [rsp+24Dh] [rbp+1CDh] BYREF
  char v110; // [rsp+24Eh] [rbp+1CEh] BYREF
  unsigned __int8 v111; // [rsp+24Fh] [rbp+1CFh]
  __int64 v112; // [rsp+250h] [rbp+1D0h]
  bool v113; // [rsp+25Fh] [rbp+1DFh] BYREF
  __int64 v114; // [rsp+260h] [rbp+1E0h]

  v114 = -2;
  v111 = a4;
  v5 = a3;
  v6 = a2;
  v105 = a1;
  v7 = sub_141471910(a1, a2, a3);
  v97 = 0;
  v71 = sub_141491390(v7, v8, v6, 0, (__int64)&off_141749E68);
  v92 = v9;
  v87 = 0;
  v88 = 4;
  v89 = 0;
  v90 = v5;
  v91 = 0;
  v12 = -1;
  v13 = -1;
  while ( 1 )
  {
    v96 = v4;
    v95 = v12;
    v14 = sub_141471910(v10, v9, v11);
    v16 = v15;
    v96 = v4;
    v95 = v12;
    sub_1403FB4E0(&v100);
    v17 = v100.m256i_i64[0];
    v72 = *(_OWORD *)&v100.m256i_u64[1];
    *(_QWORD *)&v73 = v100.m256i_i64[3];
    if ( v100.m256i_i64[0] != -1 )
    {
      v38 = v101;
      v39 = v102;
      v40 = v103;
      v41 = v105;
      *(_OWORD *)(v105 + 80) = v104;
      *(_OWORD *)(v41 + 64) = v40;
      *(_OWORD *)(v41 + 48) = v39;
      *(_OWORD *)(v41 + 32) = v38;
      *(_QWORD *)(v41 + 24) = v73;
      *(_OWORD *)(v41 + 8) = v72;
      *(_QWORD *)v41 = v17;
      goto LABEL_66;
    }
    v98 = v72;
    v18 = v73;
    v99 = v73;
    v19 = v4;
    v20 = *((_QWORD *)&v72 + 1);
    v112 = v19;
    v107 = v19;
    v108 = v12;
    v106 = v12;
    v21 = sub_1403B1770(&v87, *((_QWORD *)&v72 + 1), v73);
    if ( v21 == 4 )
    {
      v22 = (unsigned int)(v97 + 1);
      if ( (_DWORD)v97 == -1 )
        v22 = 0xFFFFFFFFLL;
      v97 = v22;
    }
    v23 = v108;
    if ( v21 <= 4u )
    {
      v24 = 22;
      if ( _bittest(&v24, v21) )
      {
        v25 = HIBYTE(v91) + 1;
        if ( HIBYTE(v91) == 0xFF )
          v25 = -1;
        v110 = v25;
        v107 = v112;
        v106 = v108;
        sub_1404017D0(&v65, v20, v18, v111);
        if ( (_DWORD)v65 == -1 )
        {
          v91 = 1;
          v26 = -1;
          if ( (unsigned __int64)(v108 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v112, v108, 1);
        }
        else
        {
          v77 = v70;
          v76 = v69;
          v75 = v68;
          v74 = v67;
          v73 = v66;
          v113 = (unsigned __int8)v25 >= 3u;
          v72 = v65;
          HIBYTE(v91) = v25;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v78 = &v110;
            v79 = (__int64)sub_1414A9660;
            v80 = &unk_141749E80;
            v81 = sub_1414A9660;
            v82 = &v113;
            v83 = sub_1414AC660;
            v84 = &v72;
            v85 = sub_140B036A0;
            v100.m256i_i64[0] = 0;
            v100.m256i_i64[1] = (__int64)aCodexmateLibPl_2;
            *(_OWORD *)&v100.m256i_u64[2] = 0x20u;
            *(_QWORD *)&v101 = aSrcPlatformPro_2;
            *((_QWORD *)&v101 + 1) = 23;
            *(_QWORD *)&v102 = 2;
            *((_QWORD *)&v102 + 1) = aCodexmateLibPl_2;
            *(_QWORD *)&v103 = 32;
            *((_QWORD *)&v103 + 1) = 0x7A800000001LL;
            *(_QWORD *)&v104 = &unk_141749E81;
            *((_QWORD *)&v104 + 1) = &v78;
            v94 = v112;
            v93 = v108;
            sub_1412C36A0(&v109, &v100);
          }
          v78 = nullptr;
          v79 = 1;
          v80 = nullptr;
          v100.m256i_i64[2] = 1610612768;
          v100.m256i_i64[0] = (__int64)&v78;
          v100.m256i_i64[1] = (__int64)&off_141754110;
          if ( (unsigned __int8)sub_140B036A0(&v72, &v100) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_1,
              55,
              (unsigned int)&v109,
              (unsigned int)&unk_14174DE40,
              (__int64)&off_1417541C8);
          v26 = (__int64)v78;
          v27 = v79;
          v28 = (__int64)v80;
          if ( (unsigned __int64)(v108 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v112, v108, 1);
          v86 = v28;
          if ( v113 )
          {
            v42 = *((_QWORD *)&v98 + 1);
            v18 = v99;
            v48 = 0;
            if ( v26 != -1 )
              v48 = v27;
            v94 = v27;
            v93 = v26;
            sub_1403FD1C0((unsigned int)&v100, DWORD2(v98), v99, v48, v86);
            v49 = (_OWORD *)v105;
            *(_OWORD *)(v105 + 80) = v104;
            v49[4] = v103;
            v50 = *(_OWORD *)v100.m256i_i8;
            v51 = *(_OWORD *)&v100.m256i_u64[2];
            v52 = v101;
            v49[3] = v102;
            v49[2] = v52;
            v49[1] = v51;
            *v49 = v50;
            v107 = v27;
            v106 = v26;
            sub_14034ED40(&v72);
            v112 = v27;
            v12 = v26;
            v4 = v112;
            if ( v18 )
              goto LABEL_48;
            goto LABEL_64;
          }
          v107 = v27;
          v106 = v26;
          sub_14034ED40(&v72);
          v112 = v27;
        }
        v18 = v99;
        v23 = v26;
      }
    }
    v100.m256i_i64[0] = v14;
    v100.m256i_i32[2] = v16;
    v29 = v112;
    if ( v18 )
    {
      v13 = -1;
    }
    else
    {
      v30 = v13 == -1;
      if ( v13 == -1 )
        v13 = v16;
      if ( v30 )
        v6 = v14;
      v107 = v112;
      v108 = v23;
      v106 = v23;
      if ( sub_1414716C0(&v100, v6, v13) )
      {
        v23 = v108;
        v29 = v112;
LABEL_53:
        v107 = v29;
        v106 = v23;
        sub_1403FE220(&v100);
        *(_QWORD *)&v55 = v100.m256i_i64[0];
        *((_QWORD *)&v55 + 1) = v100.m256i_i64[1] + 32 * v100.m256i_i64[2];
        v100.m256i_i64[0] = v100.m256i_i64[1];
        *(_OWORD *)&v100.m256i_u64[2] = v55;
        v107 = v112;
        v106 = v108;
        sub_1402CA150(&v65, &v100);
        v56 = v66;
        if ( (_QWORD)v66 )
        {
          v57 = *((_QWORD *)&v65 + 1);
          sub_140440300((unsigned int)&v100, DWORD2(v65), v66, (unsigned int)&aCodeSwitchRoll[35], 3);
          *(_QWORD *)&v73 = v100.m256i_i64[2];
          v72 = *(_OWORD *)v100.m256i_i8;
          v100.m256i_i64[0] = (__int64)&v72;
          v100.m256i_i64[1] = (__int64)sub_1400015F0;
          sub_14149C0F0(&v63, &unk_141749F02, &v100);
          if ( (_QWORD)v72 )
            sub_140001660(*((_QWORD *)&v72 + 1), v72, 1);
          v58 = v105;
          *(_QWORD *)(v105 + 24) = v64;
          *(_OWORD *)(v58 + 8) = v63;
          *(_QWORD *)v58 = 10;
          v59 = (_QWORD *)(v57 + 8);
          v12 = v108;
          v4 = v112;
          do
          {
            v60 = *(v59 - 1);
            if ( v60 )
              sub_140001660(*v59, v60, 1);
            v59 += 3;
            --v56;
          }
          while ( v56 );
        }
        else
        {
          v61 = (_QWORD *)v105;
          *(_DWORD *)(v105 + 8) = v97;
          *v61 = -1;
          v57 = *((_QWORD *)&v65 + 1);
          v12 = v108;
          v4 = v112;
        }
        if ( (_QWORD)v65 )
          sub_140001660(v57, 24 * v65, 8);
        v42 = *((_QWORD *)&v98 + 1);
        goto LABEL_64;
      }
      v32 = v31 <= 0x29B926FF;
      v23 = v108;
      v29 = v112;
      if ( !v32 )
        goto LABEL_53;
    }
    v33 = v14 >= v71;
    if ( v14 == v71 )
      v33 = v16 >= v92;
    if ( v33 )
      break;
    v107 = v29;
    v12 = v23;
    v106 = v23;
    sub_141487490(0, 80000000);
    v34 = *((_QWORD *)&v98 + 1);
    v4 = v112;
    if ( v18 )
    {
      v35 = 32 * v18;
      v36 = 0;
      do
      {
        v37 = *(_QWORD *)(v34 + v36 + 8);
        if ( v37 )
          sub_140001660(*(_QWORD *)(v34 + v36 + 16), v37, 1);
        v36 += 32;
      }
      while ( v35 != v36 );
    }
    v9 = v98;
    if ( (_QWORD)v98 )
      sub_140001660(v34, 32 * v98, 8);
  }
  v42 = *((_QWORD *)&v98 + 1);
  v43 = 0;
  if ( v23 != -1 )
    v43 = v29;
  v107 = v29;
  v12 = v23;
  v106 = v23;
  sub_1403FD1C0((unsigned int)&v100, DWORD2(v98), v18, v43, v86);
  v44 = (_OWORD *)v105;
  *(_OWORD *)(v105 + 80) = v104;
  v44[4] = v103;
  v45 = *(_OWORD *)v100.m256i_i8;
  v46 = *(_OWORD *)&v100.m256i_u64[2];
  v47 = v101;
  v44[3] = v102;
  v44[2] = v47;
  v44[1] = v46;
  *v44 = v45;
  v4 = v112;
  if ( v18 )
  {
LABEL_48:
    v53 = (_QWORD *)(v42 + 16);
    do
    {
      v54 = *(v53 - 1);
      if ( v54 )
        sub_140001660(*v53, v54, 1);
      v53 += 4;
      --v18;
    }
    while ( v18 );
  }
LABEL_64:
  if ( (_QWORD)v98 )
    sub_140001660(v42, 32 * v98, 8);
LABEL_66:
  result = v12 - 1;
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = sub_140001660(v4, v12, 1);
  if ( v87 )
    return sub_140001660(v88, 4 * v87, 4);
  return result;
}