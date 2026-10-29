// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402331d0 | name sub_1402331D0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402331D0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // r12
  char v4; // r15
  __m128i v5; // xmm6
  __int128 v6; // xmm7
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  char v18; // di
  __m128i v19; // xmm0
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  char v25; // al
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdi
  const __m128i *v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int8 *v42; // rdi
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int8 *v45; // rdx
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rcx
  __int64 v49; // r13
  char v50; // al
  unsigned __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // edi
  __int64 v55; // rcx
  __m128i *v56; // rax
  const __m128i *v57; // r12
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // rbx
  _OWORD **p_p_hObject; // r8
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // r15
  __int64 v64; // rdi
  __int64 v65; // r13
  bool v66; // bl
  char v67; // r12
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rdi
  char v71; // bl
  __int64 v72; // r12
  const __m128i *v73; // r13
  __int64 v74; // r15
  __m128i *v75; // rax
  unsigned __int64 v76; // rdi
  char v77; // r15
  char v78; // r12
  __m128i v79; // xmm8
  __m128i v80; // xmm0
  __int64 v81; // rdx
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __m128i v87; // xmm1
  __m128i v88; // xmm2
  __int64 v89; // rdi
  const __m128i *v90; // r12
  unsigned __int64 v91; // rdi
  __int64 v92; // rdi
  __m128i v93[3]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v94; // [rsp+70h] [rbp-10h] BYREF
  __m128i v95; // [rsp+80h] [rbp+0h]
  __int64 v96; // [rsp+90h] [rbp+10h]
  unsigned __int64 v97; // [rsp+A0h] [rbp+20h] BYREF
  __int8 v98; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v99[7]; // [rsp+A9h] [rbp+29h]
  __int64 v100; // [rsp+B0h] [rbp+30h]
  __m128i v101; // [rsp+B8h] [rbp+38h]
  const __m128i *v102; // [rsp+C8h] [rbp+48h]
  _BYTE v103[48]; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v104; // [rsp+100h] [rbp+80h] BYREF
  __m128i v105; // [rsp+110h] [rbp+90h]
  __m128i v106; // [rsp+120h] [rbp+A0h]
  __int64 v107; // [rsp+138h] [rbp+B8h]
  __int64 v108; // [rsp+140h] [rbp+C0h]
  __int64 v109; // [rsp+148h] [rbp+C8h]
  __m128i v110; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v111; // [rsp+160h] [rbp+E0h]
  __int64 v112; // [rsp+170h] [rbp+F0h]
  int v113; // [rsp+180h] [rbp+100h]
  __int16 v114; // [rsp+184h] [rbp+104h]
  int v115; // [rsp+188h] [rbp+108h]
  __int16 v116; // [rsp+18Ch] [rbp+10Ch]
  __m128i v117; // [rsp+190h] [rbp+110h] BYREF
  __m128i v118; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v119; // [rsp+1B0h] [rbp+130h]
  _BYTE v120[48]; // [rsp+1C0h] [rbp+140h]
  char v121; // [rsp+1FFh] [rbp+17Fh] BYREF
  int v122; // [rsp+200h] [rbp+180h]
  __int16 v123; // [rsp+204h] [rbp+184h]
  int v124; // [rsp+208h] [rbp+188h]
  __int16 v125; // [rsp+20Ch] [rbp+18Ch]
  __m128i v126; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v127[80]; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i *p_hObject; // [rsp+288h] [rbp+208h] BYREF
  __int64 v129; // [rsp+290h] [rbp+210h]
  __int64 v130; // [rsp+298h] [rbp+218h]
  __int64 v131; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i hObject; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v133; // [rsp+2B8h] [rbp+238h]
  unsigned __int64 v134; // [rsp+2C0h] [rbp+240h]
  const __m128i *v135; // [rsp+2C8h] [rbp+248h]
  int v136; // [rsp+2D0h] [rbp+250h]
  __int16 v137; // [rsp+2D4h] [rbp+254h]
  __int64 v138; // [rsp+2D8h] [rbp+258h]
  __int64 v139; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v140; // [rsp+2E8h] [rbp+268h]
  const __m128i *v141; // [rsp+2F0h] [rbp+270h]
  __int64 v142; // [rsp+2F8h] [rbp+278h]
  char v143; // [rsp+306h] [rbp+286h]
  char v144; // [rsp+307h] [rbp+287h]
  __int64 v145; // [rsp+308h] [rbp+288h]
  char v146; // [rsp+317h] [rbp+297h]
  __int64 v147; // [rsp+318h] [rbp+298h]

  v147 = -2;
  sub_140282430(&v126);
  v10 = v126.m128i_i64[0];
  result = *(_QWORD *)&v127[16];
  if ( *(_QWORD *)&v127[16] == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = -2;
    return result;
  }
  if ( *(_DWORD *)&v127[16] == 2 )
    v10 = -1;
  v107 = v10;
  if ( v10 != -1 )
    a3 = *(const __m128i **)v127;
  v108 = v126.m128i_i64[1];
  if ( v10 != -1 )
    a2 = v126.m128i_i64[1];
  sub_140237500(&v126, a2, a3);
  v13 = v126.m128i_i64[1];
  v12 = v126.m128i_i64[0];
  v94 = *(__m128i *)v127;
  v95 = _mm_loadu_si128((const __m128i *)&v127[16]);
  v96 = *(_QWORD *)&v127[32];
  if ( v126.m128i_i64[0] != -1 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v127[72];
    v14 = *(_OWORD *)&v127[40];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v127[56];
    *(_OWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 56) = v96;
    v15 = _mm_load_si128(&v94);
    *(__m128i *)(a1 + 40) = v95;
    *(__m128i *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)a1 = -2;
    goto LABEL_10;
  }
  if ( v126.m128i_i64[1] == -1 )
  {
    *(_QWORD *)a1 = -1;
    goto LABEL_10;
  }
  *(_QWORD *)v103 = v126.m128i_i64[1];
  *(__m128i *)&v103[8] = _mm_load_si128(&v94);
  *(__m128i *)&v103[24] = v95;
  *(_QWORD *)&v103[40] = v96;
  v126 = *(__m128i *)&v103[8];
  *(_OWORD *)v127 = 0;
  *(_OWORD *)&v127[16] = *(_OWORD *)&v103[8];
  v146 = 1;
  sub_14062D280(&v117, &v126);
  if ( v117.m128i_i8[0] == -1 )
  {
    v22 = v117.m128i_i64[1];
    *(_QWORD *)(a1 + 8) = 3;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)a1 = -2;
    if ( !v13 )
      goto LABEL_10;
LABEL_26:
    sub_140001660(*(_QWORD *)&v103[8], v13, 1);
    goto LABEL_10;
  }
  *(_DWORD *)&v99[3] = v117.m128i_i32[1];
  *(_DWORD *)v99 = *(__int32 *)((char *)v117.m128i_i32 + 1);
  v16 = _mm_loadu_si128(&v118);
  v101 = v16;
  v98 = v117.m128i_i8[0];
  v100 = v117.m128i_i64[1];
  v17 = sub_141642800(&v98, aPayloadId, 11);
  if ( !v17 || *(_BYTE *)v17 != 3 || (v138 = *(_QWORD *)(v17 + 24)) == 0 )
  {
    v104.m128i_i64[0] = a2;
    v104.m128i_i64[1] = (__int64)a3;
    v117.m128i_i64[0] = (__int64)&v104;
    v117.m128i_i64[1] = (__int64)sub_14169F630;
    sub_1416ABFD0(&v126.m128i_u64[1], &unk_1419D73AF, &v117);
    v19 = _mm_loadu_si128((const __m128i *)&v126.m128i_u64[1]);
    v20 = *(_OWORD *)&v127[24];
    v21 = *(_OWORD *)&v127[40];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v127[8];
    *(_OWORD *)(a1 + 48) = v20;
    *(_OWORD *)(a1 + 64) = v21;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v127[56];
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v127[72];
    *(_QWORD *)(a1 + 8) = 9;
    *(__m128i *)(a1 + 16) = v19;
    *(_QWORD *)a1 = -2;
    goto LABEL_23;
  }
  v109 = *(_QWORD *)(v17 + 16);
  v140 = *(_QWORD *)&v103[24] + *(_QWORD *)&v103[32];
  v104.m128i_i64[0] = -1;
  sub_1416AB5A0(&v126, a2, a3);
  v18 = *(_QWORD *)v127 >= 0xAu
     && (*(_QWORD *)(v126.m128i_i64[1] + *(_QWORD *)v127 - 10) ^ 0x7A2E6C6E6F736A2ELL
       | *(unsigned __int16 *)(v126.m128i_i64[1] + *(_QWORD *)v127 - 2) ^ 0x7473LL) == 0;
  if ( v126.m128i_i64[0] > 0 )
    sub_140001660(v126.m128i_i64[1], v126.m128i_i64[0], 1);
  if ( !v18 )
  {
    v126.m128i_i32[0] = 0;
    v126.m128i_i64[1] = 0;
    *(_DWORD *)v127 = 7;
    *(_QWORD *)&v127[4] = 0x100000000LL;
    *(_QWORD *)&v127[9] = 0;
    v27 = sub_141690E40(&v126);
    v31 = v28;
    if ( v27 == 1 )
    {
LABEL_38:
      v33 = 2;
LABEL_39:
      WORD2(v131) = *(_WORD *)&v120[6];
      LODWORD(v131) = *(_DWORD *)&v120[2];
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v120[40];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v120[24];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v120[8];
      *(_QWORD *)(a1 + 24) = v30;
      *(_DWORD *)(a1 + 58) = v131;
      *(_WORD *)(a1 + 62) = WORD2(v131);
      *(_QWORD *)(a1 + 8) = v33;
      *(_QWORD *)(a1 + 16) = v31;
      *(__m128i *)(a1 + 32) = v16;
      *(_QWORD *)(a1 + 48) = v28;
      *(_BYTE *)(a1 + 56) = v29;
      *(_BYTE *)(a1 + 57) = v27;
LABEL_125:
      *(_QWORD *)a1 = -2;
      if ( v104.m128i_i64[0] != -1 && v104.m128i_i64[0] )
        sub_140001660(v104.m128i_i64[1], v104.m128i_i64[0], 1);
LABEL_23:
      v146 = 1;
      sub_14002F9D0(&v98);
      v13 = *(_QWORD *)v103;
      if ( !*(_QWORD *)v103 )
        goto LABEL_10;
      goto LABEL_26;
    }
    hObject.m128i_i64[0] = v28;
    sub_1416831B0(&v126, &hObject);
    if ( v126.m128i_i32[0] == 2 )
    {
      v31 = v126.m128i_i64[1];
      LOBYTE(v27) = CloseHandle((HANDLE)hObject.m128i_i64[0]);
      goto LABEL_38;
    }
    v34 = *(const __m128i **)&v127[40];
    if ( *(_QWORD *)&v127[40] <= v140 )
    {
      CloseHandle((HANDLE)hObject.m128i_i64[0]);
      v31 = -1;
    }
    else
    {
      nullsub_1(v32);
      v135 = (const __m128i *)sub_140001650(22, 1);
      if ( !v135 )
        sub_141938D2B(1, 22);
      nullsub_1(v35);
      v141 = (const __m128i *)sub_140001680(0x100000, 1);
      if ( !v141 )
      {
        v102 = v135;
        sub_141938D2B(1, 0x100000);
      }
      v36 = 0;
      v142 = 0;
      v145 = 0;
      v37 = (unsigned __int64)v34;
      v38 = (unsigned __int64)v34;
LABEL_45:
      v39 = v37 - v140;
      if ( v37 <= v140 )
      {
        v91 = 0;
        if ( v38 >= v140 )
          v91 = v38 - v140;
        if ( (v142 & 1) == 0 )
        {
          v117 = (__m128i)-1LL;
          goto LABEL_134;
        }
        sub_1402300E0(&v126, &hObject, v140, v38);
        v139 = v126.m128i_i64[1];
        v52 = v126.m128i_i64[0];
        v53 = *(_QWORD *)&v127[8];
        v142 = *(_QWORD *)v127;
        if ( v126.m128i_i64[0] != -1 )
        {
          *(_OWORD *)&v120[32] = *(_OWORD *)&v127[64];
          *(_OWORD *)&v120[16] = *(_OWORD *)&v127[48];
          *(_OWORD *)v120 = *(_OWORD *)&v127[32];
          v119 = *(__m128i *)&v127[16];
          v117.m128i_i64[1] = v139;
          v118.m128i_i64[0] = v142;
          goto LABEL_129;
        }
        v92 = (unsigned __int8)v145 + v91;
        v144 = 1;
        sub_140231BB0((__int64)&v126, v142, *(__int64 *)&v127[8], v140, v92, v145, (__int64)&v104);
        if ( v126.m128i_i32[0] == -1 )
        {
          v126.m128i_i64[0] = v139;
          v126.m128i_i64[1] = v142;
          *(_QWORD *)v127 = v53;
          v144 = 0;
          sub_1402428C0((unsigned int)&v117, (unsigned int)&v126, v140, v92, v145, v109, v138);
        }
        else
        {
          *(_OWORD *)&v120[32] = *(_OWORD *)&v127[64];
          *(_OWORD *)&v120[16] = *(_OWORD *)&v127[48];
          *(_OWORD *)v120 = *(_OWORD *)&v127[32];
          v119 = *(__m128i *)&v127[16];
          v118 = *(__m128i *)v127;
          v117 = v126;
          if ( v139 )
            sub_140001660(v142, v139, 1);
        }
      }
      else
      {
        if ( v39 >= 0x100000 )
          v39 = 0x100000;
        v134 = v37 - v39;
        if ( sub_1416A17E0(&hObject, 0) == 1 )
        {
          v117.m128i_i64[0] = 2;
          v117.m128i_i64[1] = v40;
          goto LABEL_134;
        }
        v41 = sub_140BB1420(&hObject, v141, v39);
        if ( !v41 )
        {
          v42 = &v141->m128i_i8[v39];
          v43 = (unsigned int)v145;
          v139 = v38;
          v44 = v36;
          while ( 1 )
          {
            while ( 1 )
            {
              v36 = v44;
              v38 = v139;
              v145 = (unsigned int)v43;
              LOBYTE(v43) = 10;
              if ( (*(__int64 (__fastcall **)(__int64, const __m128i *, __int8 *))off_1421E7160)(v43, v141, v42) != 1 )
              {
                v37 = v134;
                if ( v39 )
                {
                  v54 = sub_140232740((__int64)v141, v39, (__int64)v135, v36);
                  nullsub_1(v55);
                  v56 = (__m128i *)sub_140001650(22, 1);
                  if ( !v56 )
                    sub_141938D2B(1, 22);
                  v57 = v56;
                  v58 = 22;
                  if ( v39 < 0x16 )
                    v58 = v39;
                  sub_1418F44E0(v56, v141, v58);
                  if ( v39 < 0x16 )
                  {
                    v59 = 22 - v58;
                    if ( 22 - v58 >= v36 )
                      v59 = v36;
                    if ( v36 )
                      sub_1418F44E0((__m128i *)((char *)v57 + v58), v135, v59);
                    v58 += v59;
                  }
                  LOBYTE(v54) = (v142 | v54) & 1;
                  sub_140001660(v135, 22, 1);
                  v135 = v57;
                  v36 = v58;
                  v142 = v54;
                  v37 = v134;
                }
                goto LABEL_45;
              }
              v42 = v45;
              v46 = v45 - (__int8 *)v141;
              if ( v39 <= v45 - (__int8 *)v141 )
                sub_1419392D0(v45 - (__int8 *)v141 + 1, v39, 0x100000, &off_1419DFB28);
              v139 = v46 + v134;
              v47 = v46 + v134 + 1;
              if ( (v142 & 1) == 0 )
                break;
              v48 = 0;
              if ( v38 >= v47 )
                v48 = v38 - v47;
              v49 = v48 + (unsigned __int8)v145;
LABEL_61:
              sub_1402300E0(&v126, &hObject, v47, v38);
              v52 = v126.m128i_i64[0];
              v53 = *(_QWORD *)&v127[8];
              if ( v126.m128i_i64[0] != -1 )
              {
                v83 = _mm_loadu_si128((const __m128i *)&v127[16]);
                *(_OWORD *)&v120[32] = *(_OWORD *)&v127[64];
                *(_OWORD *)&v120[16] = *(_OWORD *)&v127[48];
                *(_OWORD *)v120 = *(_OWORD *)&v127[32];
                v119 = v83;
                v117.m128i_i64[1] = v126.m128i_i64[1];
                v118.m128i_i64[0] = *(_QWORD *)v127;
LABEL_129:
                v118.m128i_i64[1] = v53;
                v117.m128i_i64[0] = v52;
                goto LABEL_134;
              }
              v142 = v126.m128i_i64[1];
              v143 = 1;
              v133 = *(_QWORD *)v127;
              sub_140231BB0((__int64)&v126, *(__int64 *)v127, *(__int64 *)&v127[8], v47, v49, v145, (__int64)&v104);
              if ( v126.m128i_i32[0] != -1 )
              {
                *(_OWORD *)&v120[32] = *(_OWORD *)&v127[64];
                *(_OWORD *)&v120[16] = *(_OWORD *)&v127[48];
                *(_OWORD *)v120 = *(_OWORD *)&v127[32];
                v119 = *(__m128i *)&v127[16];
                v118 = *(__m128i *)v127;
                v117 = v126;
                if ( v142 )
                  sub_140001660(v133, v142, 1);
                goto LABEL_134;
              }
              p_hObject = (__m128i *)v142;
              v129 = v133;
              v130 = v53;
              v143 = 0;
              sub_1402428C0((unsigned int)&v126, (unsigned int)&p_hObject, v47, v49, v145, v109, v138);
              v41 = v126.m128i_i64[1];
              v43 = v126.m128i_i64[0];
              v110 = _mm_loadu_si128((const __m128i *)v127);
              v111 = *(__m128i *)&v127[16];
              v112 = *(_QWORD *)&v127[32];
              if ( v126.m128i_i64[0] != -1 )
              {
                *(_QWORD *)&v120[40] = *(_QWORD *)&v127[72];
                *(_OWORD *)&v120[24] = *(_OWORD *)&v127[56];
                *(_OWORD *)&v120[8] = *(_OWORD *)&v127[40];
                v118 = _mm_load_si128(&v110);
                v119 = v111;
                *(_QWORD *)v120 = v112;
                v117.m128i_i64[0] = v126.m128i_i64[0];
                goto LABEL_133;
              }
              LOBYTE(v43) = 1;
              v44 = 0;
              v142 = 0;
              v39 = v46;
              if ( v126.m128i_i64[1] != -1 )
              {
                v117.m128i_i64[1] = v126.m128i_i64[1];
                v118 = _mm_load_si128(&v110);
                v119 = v111;
                *(_QWORD *)v120 = v112;
                v117.m128i_i64[0] = -1;
                goto LABEL_134;
              }
            }
            v50 = sub_140232740((__int64)(v45 + 1), v39 - (v45 - (__int8 *)v141 + 1), (__int64)v135, v36);
            v44 = 0;
            v51 = v38 - v47;
            if ( v38 < v47 )
              v51 = 0;
            LOBYTE(v43) = 1;
            v142 = 0;
            v39 = v46;
            if ( v50 )
            {
              v49 = (unsigned __int8)v145 + v51;
              goto LABEL_61;
            }
          }
        }
        v117.m128i_i64[0] = 2;
LABEL_133:
        v117.m128i_i64[1] = v41;
      }
LABEL_134:
      sub_140001660(v141, 0x100000, 1);
      sub_140001660(v135, 22, 1);
      v33 = v117.m128i_i64[0];
      CloseHandle((HANDLE)hObject.m128i_i64[0]);
      v31 = v117.m128i_i64[1];
      if ( v33 != -1 )
      {
        v28 = v119.m128i_i64[1];
        v29 = v120[0];
        LOBYTE(v27) = v120[1];
        v30 = v118.m128i_i64[0];
        v16 = _mm_loadu_si128((const __m128i *)&v118.m128i_u64[1]);
        goto LABEL_39;
      }
      v3 = v118.m128i_i64[1];
      v34 = (const __m128i *)v118.m128i_i64[0];
      v5 = v119;
      v4 = v120[0];
      LOBYTE(a2) = v120[1];
    }
    v124 = *(_DWORD *)&v120[2];
    v125 = *(_WORD *)&v120[6];
    if ( v31 == -1 )
      goto LABEL_147;
    goto LABEL_138;
  }
  sub_140281F40(&v126, a2, a3);
  v24 = v126.m128i_i64[1];
  if ( !v126.m128i_i64[0] )
  {
    v26 = 2;
LABEL_124:
    v113 = v136;
    v114 = v137;
    *(_QWORD *)(a1 + 96) = v119.m128i_i64[0];
    v82 = _mm_load_si128(&v117);
    *(__m128i *)(a1 + 80) = v118;
    *(__m128i *)(a1 + 64) = v82;
    *(_QWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 58) = v113;
    *(_WORD *)(a1 + 62) = v114;
    *(_QWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 16) = v24;
    *(_OWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 48) = v3;
    *(_BYTE *)(a1 + 56) = (_BYTE)a3;
    *(_BYTE *)(a1 + 57) = v18;
    goto LABEL_125;
  }
  hObject = v126;
  v97 = v140;
  if ( v140 )
  {
    p_hObject = &hObject;
    v129 = v140;
    v130 = v140;
    v25 = sub_140BBE5D0(&p_hObject, &v121);
    v24 = v23;
    if ( (v25 & 1) != 0 )
    {
      v26 = 2;
      goto LABEL_119;
    }
    v131 = v23;
    if ( v140 != v23 )
    {
      v110.m128i_i64[0] = (__int64)&v97;
      v110.m128i_i64[1] = (__int64)sub_1416BCB10;
      v111.m128i_i64[0] = (__int64)&v131;
      v111.m128i_i64[1] = (__int64)sub_1416BCB10;
      sub_1416ABFD0(&v126.m128i_u64[1], &unk_1419D58AD, &v110);
      v24 = v126.m128i_i64[1];
      a2 = *(_QWORD *)v127;
      v6 = *(_OWORD *)&v127[8];
      v3 = *(_QWORD *)&v127[24];
      LOBYTE(a3) = v127[32];
      v26 = 10;
      v18 = v127[33];
LABEL_119:
      v136 = *(_DWORD *)&v127[34];
      v137 = *(_WORD *)&v127[38];
      v117 = *(__m128i *)&v127[40];
      v118 = _mm_loadu_si128((const __m128i *)&v127[56]);
      v119.m128i_i64[0] = *(_QWORD *)&v127[72];
LABEL_120:
      v145 = hObject.m128i_i64[1];
      v138 = hObject.m128i_i64[0];
      if ( *(_QWORD *)hObject.m128i_i64[1] )
        (*(void (__fastcall **)(__int64))hObject.m128i_i64[1])(v138);
      v81 = *(_QWORD *)(v145 + 8);
      if ( v81 )
        sub_140001660(v138, v81, *(_QWORD *)(v145 + 16));
      goto LABEL_124;
    }
  }
  p_hObject = nullptr;
  v129 = 1;
  v145 = -1;
  p_p_hObject = (_OWORD **)&p_hObject;
  while ( 1 )
  {
    v130 = 0;
    LOBYTE(v23) = 10;
    a2 = (__int64)p_p_hObject;
    v61 = (*(__int64 (__fastcall **)(__int64, __int64))(hObject.m128i_i64[1] + 112))(hObject.m128i_i64[0], v23);
    v63 = v62;
    if ( (v61 & 1) != 0 )
    {
      v138 = 2;
      v24 = v62;
LABEL_150:
      v89 = v145;
      v90 = v141;
      if ( p_hObject )
        sub_140001660(v129, p_hObject, 1);
      if ( (unsigned __int64)(v89 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v90, v89, 1);
      v18 = (char)v135;
      v26 = v138;
      v3 = v140;
      goto LABEL_120;
    }
    if ( !v62 )
      break;
    v64 = v129;
    v65 = v130;
    v66 = v130 != 0;
    if ( v130
      && ((v67 = *(_BYTE *)(v129 + v130 - 1) == 10, *(_BYTE *)(v129 + v130 - 1) != 10)
       || (v65 = v130 - 1, (v130 = v65) != 0)) )
    {
      if ( sub_1401FAC00(v129, v65, aSessionMeta, 12) == 1 )
        goto LABEL_90;
      v69 = sub_1401FAC00(v64, v65, aThreadSettings, 23);
    }
    else
    {
      if ( sub_1401FAC00(v129, 0, aSessionMeta, 12) == 1 )
      {
        v67 = v66;
        goto LABEL_90;
      }
      v69 = sub_1401FAC00(v64, 0, aThreadSettings, 23);
      v67 = v66;
    }
    if ( v69 != 1 )
    {
      v142 = v63;
LABEL_95:
      v24 = v145;
      a3 = v141;
      v76 = v134;
      v77 = v133;
      v78 = v139;
      v79 = v5;
LABEL_105:
      p_p_hObject = (_OWORD **)a2;
      goto LABEL_106;
    }
LABEL_90:
    v70 = v130;
    if ( v130 < 0 )
    {
      v74 = 0;
LABEL_116:
      sub_141938D2B(v74, v70);
    }
    if ( v130 )
    {
      v71 = v67;
      v72 = v63;
      v73 = (const __m128i *)v129;
      nullsub_1(v68);
      v74 = 1;
      v75 = (__m128i *)sub_140001650(v70, 1);
      if ( !v75 )
        goto LABEL_116;
      v110.m128i_i64[0] = v70;
      v110.m128i_i64[1] = (__int64)v75;
      sub_1418F44E0(v75, v73, v70);
      v63 = v72;
      v67 = v71;
    }
    else
    {
      v110.m128i_i64[0] = 0;
      v110.m128i_i64[1] = 1;
    }
    v111.m128i_i64[0] = v70;
    sub_1402428C0((unsigned int)&v126, (unsigned int)&v110, v140, v63, v67, v109, v138);
    v142 = v63;
    v24 = v126.m128i_i64[1];
    a3 = *(const __m128i **)v127;
    v6 = *(_OWORD *)&v127[8];
    v76 = *(_QWORD *)&v127[8];
    v79 = *(__m128i *)&v127[16];
    v77 = v127[32];
    LOBYTE(v135) = v127[33];
    v122 = *(_DWORD *)&v127[34];
    v123 = *(_WORD *)&v127[38];
    if ( v126.m128i_i64[0] != -1 )
    {
      v140 = *(_QWORD *)&v127[24];
      v138 = v126.m128i_i64[0];
      v119.m128i_i64[0] = *(_QWORD *)&v127[72];
      v118 = *(__m128i *)&v127[56];
      v117 = *(__m128i *)&v127[40];
      v136 = v122;
      v137 = v123;
      a2 = *(_QWORD *)v127;
      LOBYTE(a3) = v127[32];
      goto LABEL_150;
    }
    if ( v126.m128i_i64[1] != -1 )
    {
      if ( (unsigned __int64)(v145 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v141, v145, 1);
      WORD2(v131) = v123;
      LODWORD(v131) = v122;
      v23 = v104.m128i_i64[0];
      v78 = (char)v135;
      if ( v104.m128i_i64[0] != -1 && v104.m128i_i64[0] )
        sub_140001660(v104.m128i_i64[1], v104.m128i_i64[0], 1);
      v104.m128i_i64[0] = -1;
      goto LABEL_105;
    }
    if ( sub_1401FAC00(v129, v130, aThreadSettings, 23) == 1 )
    {
      v93[0].m128i_i64[0] = -1;
      sub_140231BB0((__int64)&v126, v129, v130, v140, v142, v67, (__int64)v93);
      if ( v126.m128i_i64[0] != -1 )
      {
        v24 = v126.m128i_i64[1];
        v138 = v126.m128i_i64[0];
        a2 = *(_QWORD *)v127;
        v6 = *(_OWORD *)&v127[8];
        v140 = *(_QWORD *)&v127[24];
        LOBYTE(a3) = v127[32];
        LOBYTE(v135) = v127[33];
        v136 = *(_DWORD *)&v127[34];
        v137 = *(_WORD *)&v127[38];
        v117 = *(__m128i *)&v127[40];
        v118 = *(__m128i *)&v127[56];
        v119.m128i_i64[0] = *(_QWORD *)&v127[72];
        if ( (unsigned __int64)(v93[0].m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v93[0].m128i_i64[1], v93[0].m128i_i64[0], 1);
        goto LABEL_150;
      }
      if ( v93[0].m128i_i64[0] != -1 )
      {
        v23 = v104.m128i_i64[0];
        if ( v104.m128i_i64[0] != -1 && v104.m128i_i64[0] )
          sub_140001660(v104.m128i_i64[1], v104.m128i_i64[0], 1);
        v80 = _mm_loadu_si128(v93);
        v106 = v93[2];
        v105 = v93[1];
        v104 = v80;
      }
      goto LABEL_95;
    }
    p_p_hObject = (_OWORD **)a2;
    v24 = v145;
    a3 = v141;
    v76 = v134;
    v77 = v133;
    v78 = v139;
    v79 = v5;
LABEL_106:
    v140 += v142;
    v145 = v24;
    v141 = a3;
    v134 = v76;
    LOBYTE(v133) = v77;
    LOBYTE(v139) = v78;
    v5 = v79;
  }
  v137 = WORD2(v131);
  v136 = v131;
  if ( p_hObject )
    sub_140001660(v129, p_hObject, 1);
  v140 = hObject.m128i_u64[1];
  v138 = hObject.m128i_i64[0];
  v31 = v145;
  v34 = v141;
  LOBYTE(a2) = v139;
  v4 = v133;
  v3 = v134;
  if ( *(_QWORD *)hObject.m128i_i64[1] )
    (*(void (__fastcall **)(__int64))hObject.m128i_i64[1])(v138);
  v84 = *(_QWORD *)(v140 + 8);
  if ( v84 )
    sub_140001660(v138, v84, *(_QWORD *)(v140 + 16));
  v124 = v136;
  v125 = v137;
  if ( v31 != -1 )
  {
LABEL_138:
    v116 = v125;
    v115 = v124;
    goto LABEL_148;
  }
LABEL_147:
  sub_1416AC440(&v126, v103);
  v5 = *(__m128i *)&v103[24];
  v4 = v103[40];
  LOBYTE(a2) = v103[41];
  v34 = (const __m128i *)v126.m128i_i64[1];
  v31 = v126.m128i_i64[0];
  v3 = *(_QWORD *)v127;
LABEL_148:
  v85 = *(_OWORD *)v103;
  v86 = *(_OWORD *)&v103[16];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v103[32];
  *(_OWORD *)(a1 + 16) = v86;
  *(_OWORD *)a1 = v85;
  v87 = v105;
  v88 = v106;
  *(__m128i *)(a1 + 96) = _mm_load_si128(&v104);
  *(__m128i *)(a1 + 112) = v87;
  *(__m128i *)(a1 + 128) = v88;
  *(_QWORD *)(a1 + 48) = v31;
  *(_QWORD *)(a1 + 56) = v34;
  *(_QWORD *)(a1 + 64) = v3;
  *(__m128i *)(a1 + 72) = v5;
  *(_BYTE *)(a1 + 88) = v4;
  *(_BYTE *)(a1 + 89) = a2;
  *(_WORD *)(a1 + 94) = v116;
  *(_DWORD *)(a1 + 90) = v115;
  v146 = 0;
  sub_14002F9D0(&v98);
LABEL_10:
  result = v107 - 1;
  if ( (unsigned __int64)(v107 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return sub_140001660(v108, v107, 1);
  return result;
}
