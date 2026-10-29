// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140242c40 | name sub_140242C40
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140242C40(__int64 a1, _QWORD *a2, const __m128i *a3, unsigned __int64 a4)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int8 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  _OWORD *v24; // rax
  __int128 v25; // kr00_16
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  char v31; // bl
  __int64 v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // [rsp+48h] [rbp-38h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h]
  __m128i v45; // [rsp+60h] [rbp-20h] BYREF
  __int128 v46; // [rsp+70h] [rbp-10h]
  __int128 v47; // [rsp+80h] [rbp+0h]
  __m256i v48; // [rsp+90h] [rbp+10h]
  __int128 v49; // [rsp+B0h] [rbp+30h]
  __m256i v50; // [rsp+C0h] [rbp+40h]
  __int128 v51; // [rsp+E0h] [rbp+60h]
  __m256i v52; // [rsp+F0h] [rbp+70h]
  __int128 v53; // [rsp+118h] [rbp+98h] BYREF
  __int64 v54; // [rsp+128h] [rbp+A8h]
  _QWORD v55[2]; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD v56[2]; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v57; // [rsp+150h] [rbp+D0h]
  __int128 v58; // [rsp+160h] [rbp+E0h]
  __int128 v59; // [rsp+170h] [rbp+F0h]
  __int128 v60; // [rsp+180h] [rbp+100h]
  __int128 v61; // [rsp+190h] [rbp+110h]
  __int64 v62; // [rsp+1A0h] [rbp+120h]
  __int64 v63; // [rsp+1A8h] [rbp+128h]
  __int128 v64; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v65; // [rsp+1C0h] [rbp+140h]
  __int128 v66; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v67; // [rsp+1F0h] [rbp+170h]
  __int128 v68; // [rsp+200h] [rbp+180h] BYREF
  __m256i v69; // [rsp+210h] [rbp+190h]
  __int128 v70; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v71; // [rsp+240h] [rbp+1C0h]
  _BYTE v72[88]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v73; // [rsp+2B8h] [rbp+238h]
  __int128 v74; // [rsp+358h] [rbp+2D8h]
  __m256i v75; // [rsp+368h] [rbp+2E8h]
  __int128 v76; // [rsp+388h] [rbp+308h]
  __int128 v77; // [rsp+398h] [rbp+318h]
  __int64 v78; // [rsp+3A8h] [rbp+328h]
  _BYTE v79[24]; // [rsp+3B0h] [rbp+330h] BYREF
  __m256i v80; // [rsp+3C8h] [rbp+348h] BYREF
  __int128 v81; // [rsp+3E8h] [rbp+368h]
  __int128 v82; // [rsp+3F8h] [rbp+378h]
  __int128 v83; // [rsp+408h] [rbp+388h] BYREF
  __int128 v84; // [rsp+418h] [rbp+398h]
  __int128 v85; // [rsp+428h] [rbp+3A8h]
  __int64 v86; // [rsp+438h] [rbp+3B8h]
  __int64 v87; // [rsp+440h] [rbp+3C0h]
  __int64 v88; // [rsp+448h] [rbp+3C8h]
  __int128 v89; // [rsp+450h] [rbp+3D0h] BYREF
  __m256i v90; // [rsp+460h] [rbp+3E0h]
  __int128 v91; // [rsp+480h] [rbp+400h]
  __int128 v92; // [rsp+490h] [rbp+410h]
  __int64 v93; // [rsp+4A0h] [rbp+420h]
  __int64 v94; // [rsp+4A8h] [rbp+428h]
  __int64 v95; // [rsp+4B0h] [rbp+430h]
  __int64 v96; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v97; // [rsp+4C0h] [rbp+440h]
  __int64 v98; // [rsp+4C8h] [rbp+448h]
  _BYTE v99[104]; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v100; // [rsp+538h] [rbp+4B8h]
  __int128 v101; // [rsp+548h] [rbp+4C8h]
  __int64 v102; // [rsp+558h] [rbp+4D8h]
  __int128 v103; // [rsp+5C8h] [rbp+548h]
  __m256i v104; // [rsp+5D8h] [rbp+558h]
  __int128 v105; // [rsp+5F8h] [rbp+578h]
  __int128 v106; // [rsp+608h] [rbp+588h]
  __int64 v107; // [rsp+618h] [rbp+598h]
  __int64 v108; // [rsp+628h] [rbp+5A8h]
  __int128 v109; // [rsp+630h] [rbp+5B0h] BYREF
  __m256i v110; // [rsp+640h] [rbp+5C0h] BYREF
  __int128 v111; // [rsp+660h] [rbp+5E0h]
  __int64 v112; // [rsp+670h] [rbp+5F0h]
  __int128 v113; // [rsp+680h] [rbp+600h] BYREF
  __int64 v114; // [rsp+690h] [rbp+610h]
  __int128 v115; // [rsp+6A0h] [rbp+620h] BYREF
  __m256i v116; // [rsp+6B0h] [rbp+630h]
  __int128 v117; // [rsp+6D0h] [rbp+650h]
  __int128 v118; // [rsp+6E0h] [rbp+660h]
  __int128 v119; // [rsp+6F0h] [rbp+670h]
  char v120; // [rsp+709h] [rbp+689h]
  char v121; // [rsp+70Ah] [rbp+68Ah] BYREF
  char v122; // [rsp+70Bh] [rbp+68Bh]
  char v123; // [rsp+70Ch] [rbp+68Ch]
  char v124; // [rsp+70Dh] [rbp+68Dh]
  char v125; // [rsp+70Eh] [rbp+68Eh]
  char v126; // [rsp+70Fh] [rbp+68Fh]
  __int64 v127; // [rsp+710h] [rbp+690h]

  v127 = -2;
  v56[0] = a3;
  v56[1] = a4;
  if ( a2[6] == -1 )
  {
    *(_QWORD *)v72 = a2;
    *(_QWORD *)&v72[8] = sub_1400015F0;
    *(_QWORD *)&v72[16] = v56;
    *(_QWORD *)&v72[24] = sub_140186EE0;
    sub_1416ABFD0(&v99[8], &unk_1419D75BF, v72);
    result = *(_QWORD *)&v99[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v99[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v99[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v99[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v99[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v99[16];
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = -1;
    return result;
  }
  v8 = a2[1];
  v9 = a2[2];
  v62 = a2[4];
  v63 = a2[5];
  v10 = a2[7];
  v11 = a2[8];
  v55[0] = v8;
  v55[1] = v9;
  v95 = v9;
  v87 = v8;
  sub_14023B160((unsigned int)v99, v10, v11, v8, v9);
  v115 = *(_OWORD *)&v99[8];
  v116 = *(__m256i *)&v99[24];
  v117 = *(_OWORD *)&v99[56];
  v118 = *(_OWORD *)&v99[72];
  v119 = *(_OWORD *)&v99[88];
  if ( *(_QWORD *)v99 == -1 )
  {
    *(_OWORD *)&v72[8] = v115;
    *(__m256i *)&v72[24] = v116;
    *(_OWORD *)&v72[56] = v117;
    *(_OWORD *)&v72[72] = v118;
    v73 = v119;
    *(_QWORD *)v72 = -2;
    goto LABEL_39;
  }
  v86 = v102;
  v85 = v101;
  v84 = v100;
  *(_OWORD *)&v79[8] = v115;
  v80 = v116;
  v81 = v117;
  v82 = v118;
  v83 = v119;
  v94 = *(_QWORD *)v99;
  *(_QWORD *)v79 = *(_QWORD *)v99;
  v108 = v10;
  sub_140232D30(v99, v79, v10, v11);
  v115 = *(_OWORD *)&v99[8];
  v116 = *(__m256i *)&v99[24];
  v117 = *(_OWORD *)&v99[56];
  v12 = *(_QWORD *)&v99[72];
  *(_QWORD *)&v118 = *(_QWORD *)&v99[72];
  if ( *(_QWORD *)v99 != -1 )
  {
    v73 = *(_OWORD *)&v99[80];
    *(_OWORD *)&v72[16] = v115;
    *(__m256i *)&v72[32] = v116;
    *(_OWORD *)&v72[64] = v117;
    *(_QWORD *)&v72[80] = v118;
    *(_QWORD *)&v72[8] = *(_QWORD *)v99;
    *(_QWORD *)v72 = -2;
    goto LABEL_31;
  }
  v14 = v11;
  v109 = v115;
  v110 = v116;
  v111 = v117;
  v112 = v118;
  v15 = v115;
  if ( (_QWORD)v115 != -1 && !(unsigned __int8)sub_140237AF0(*((_QWORD *)&v109 + 1), v110.m256i_i64[0])
    || v110.m256i_i64[1] != -1 && !(unsigned __int8)sub_140237AF0(v110.m256i_i64[2], v110.m256i_i64[3])
    || (_QWORD)v111 != -1 && !(unsigned __int8)sub_140237AF0(*((_QWORD *)&v111 + 1), v112) )
  {
    if ( *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      *(_QWORD *)&v115 = v55;
      *((_QWORD *)&v115 + 1) = sub_140186EE0;
      v116.m256i_i64[0] = (__int64)&v109;
      v116.m256i_i64[1] = (__int64)sub_140289980;
      v116.m256i_i64[2] = (__int64)&v110.m256i_i64[1];
      v116.m256i_i64[3] = (__int64)sub_140289980;
      *(_QWORD *)&v99[48] = 3;
      *(_QWORD *)&v99[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v99[64] = 51;
      *(_QWORD *)&v99[80] = &unk_1419DE549;
      *(_QWORD *)&v99[88] = &v115;
      *(_QWORD *)v99 = 0;
      *(_QWORD *)&v99[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v99[16] = 0x33u;
      *(_QWORD *)&v99[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v99[40] = 41;
      *(_QWORD *)&v99[72] = 0xA2900000001LL;
      v122 = 1;
      sub_1414D53A0(&v121, v99);
    }
    *(_QWORD *)&v72[64] = v112;
    *(_OWORD *)&v72[48] = v111;
    *(__m256i *)&v72[16] = v110;
    *(_OWORD *)v72 = v109;
    *(_QWORD *)&v72[72] = -1;
    *(_QWORD *)&v74 = -1;
LABEL_31:
    if ( v94 )
      sub_140001660(*(_QWORD *)&v79[8], v94, 1);
    if ( v80.m256i_i64[3] )
      sub_140001660(v81, v80.m256i_i64[3], 1);
    if ( *((_QWORD *)&v83 + 1) != -1 && *((_QWORD *)&v83 + 1) )
      sub_140001660(v84, *((_QWORD *)&v83 + 1), 1);
    if ( *(_QWORD *)v72 == -2 )
      goto LABEL_39;
LABEL_114:
    v94 = *(_QWORD *)&v72[72];
    sub_1416AC440(&v45, a2);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)&v72[64];
    v37 = *(_OWORD *)v72;
    v38 = *(_OWORD *)&v72[16];
    v39 = *(_OWORD *)&v72[32];
    *(_OWORD *)(a1 + 400) = *(_OWORD *)&v72[48];
    *(_OWORD *)(a1 + 384) = v39;
    *(_OWORD *)(a1 + 368) = v38;
    *(_OWORD *)(a1 + 352) = v37;
    sub_1418F44E0((__m128i *)&v99[24], (const __m128i *)&v72[72], 0xB0u);
    *(_QWORD *)(a1 + 344) = v78;
    *(_OWORD *)(a1 + 328) = v77;
    v40 = v74;
    v41 = *(_OWORD *)v75.m256i_i8;
    v42 = *(_OWORD *)&v75.m256i_u64[2];
    *(_OWORD *)(a1 + 312) = v76;
    *(_OWORD *)(a1 + 296) = v42;
    *(_OWORD *)(a1 + 280) = v41;
    *(_OWORD *)(a1 + 264) = v40;
    *(_QWORD *)&v99[16] = v46;
    *(__m128i *)v99 = v45;
    result = sub_1418F44E0((__m128i *)a1, (const __m128i *)v99, 0xC8u);
    *(_QWORD *)(a1 + 200) = -1;
    return result;
  }
  nullsub_1(v12);
  v16 = sub_140001650(216, 8);
  if ( !v16 )
  {
    v122 = 1;
    sub_141938D2B(8, 216);
  }
  v96 = 3;
  v97 = v16;
  v98 = 0;
  *(_QWORD *)&v70 = -1;
  *(_QWORD *)&v64 = -1;
  *(_QWORD *)&v68 = -1;
  if ( *((_QWORD *)&v83 + 1) != -1 )
  {
    *(_OWORD *)v99 = v84;
    *(_OWORD *)&v99[16] = 0;
    *(_OWORD *)&v99[32] = v84;
    v126 = 1;
    sub_14062D280(&v115, v99);
    if ( (_BYTE)v115 == 0xFF )
    {
      v27 = *((_QWORD *)&v115 + 1);
      *(_QWORD *)&v72[8] = 3;
LABEL_49:
      *(_QWORD *)&v72[16] = v27;
LABEL_69:
      *(_QWORD *)v72 = -2;
      goto LABEL_70;
    }
    v89 = v115;
    *(_OWORD *)v90.m256i_i8 = *(_OWORD *)v116.m256i_i8;
    v17 = (unsigned __int8 *)sub_141642800(&v89, aPayloadThreadI, 18);
    if ( !v17 )
      goto LABEL_19;
    v18 = *v17;
    if ( (_DWORD)v18 == 3 )
    {
      v18 = v95;
      if ( *((_QWORD *)v17 + 3) == v95 && !(unsigned int)sub_1418F4B70(*((_QWORD *)v17 + 2), v87) )
        goto LABEL_19;
    }
    else if ( !*v17 )
    {
LABEL_19:
      if ( (_QWORD)v111 == -1 || v112 != a4 || (unsigned int)sub_1418F4B70(*((_QWORD *)&v111 + 1), a3) )
      {
        sub_14072C410((unsigned int)v99, a4, 0, 1, 1);
        v19 = *(_QWORD *)&v99[8];
        if ( v99[0] )
          sub_141938D2B(*(_QWORD *)&v99[8], *(_QWORD *)&v99[16]);
        v20 = *(_QWORD *)&v99[16];
        if ( a4 )
          sub_1418F44E0(*(__m128i **)&v99[16], a3, a4);
        *(_QWORD *)&v99[8] = v19;
        *(_QWORD *)&v99[16] = v20;
        *(_QWORD *)&v99[24] = a4;
        v99[0] = 3;
        v123 = 1;
        v21 = sub_141641AF0(aPayload_0, 7, &v89);
        v123 = 1;
        v22 = sub_141641AF0(aThreadSettings_0, 15, v21);
        v123 = 1;
        v88 = sub_141641AF0(aModelProviderI, 17, v22);
        sub_14002F9D0(v88);
        v23 = *(_OWORD *)v99;
        v24 = (_OWORD *)v88;
        *(_OWORD *)(v88 + 16) = *(_OWORD *)&v99[16];
        *v24 = v23;
        v25 = v84;
        sub_1401977E0(&v115, (__int64)&v89);
        if ( (_QWORD)v115 == -1 )
        {
          *(_QWORD *)&v72[8] = 3;
          *(_QWORD *)&v72[16] = *((_QWORD *)&v115 + 1);
          goto LABEL_55;
        }
        v53 = v115;
        v54 = v116.m256i_i64[0];
        sub_1402815E0(v99, v25, *((_QWORD *)&v25 + 1), &v53);
        v113 = *(_OWORD *)&v99[8];
        v114 = *(_QWORD *)&v99[24];
        if ( *(_QWORD *)v99 != -1 )
        {
          v73 = *(_OWORD *)&v99[80];
          *(_OWORD *)&v72[72] = *(_OWORD *)&v99[64];
          *(_OWORD *)&v72[56] = *(_OWORD *)&v99[48];
          *(_OWORD *)&v72[40] = *(_OWORD *)&v99[32];
          *(_OWORD *)&v72[16] = v113;
          *(_QWORD *)&v72[32] = v114;
          *(_QWORD *)&v72[8] = *(_QWORD *)v99;
LABEL_55:
          *(_QWORD *)v72 = -2;
          v126 = 1;
          sub_14002F9D0(&v89);
LABEL_70:
          v31 = 1;
LABEL_71:
          if ( (_QWORD)v68 != -1 )
          {
            if ( (_QWORD)v68 )
              sub_140001660(*((_QWORD *)&v68 + 1), v68, 1);
            if ( v69.m256i_i64[1] )
              sub_140001660(v69.m256i_i64[2], v69.m256i_i64[1], 1);
          }
          if ( (_QWORD)v64 != -1 )
          {
            if ( (_QWORD)v64 )
              sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
            if ( v65.m256i_i64[1] )
              sub_140001660(v65.m256i_i64[2], v65.m256i_i64[1], 1);
          }
          if ( (_QWORD)v70 != -1 )
          {
            if ( (_QWORD)v70 )
              sub_140001660(*((_QWORD *)&v70 + 1), v70, 1);
            if ( v71.m256i_i64[1] )
              sub_140001660(v71.m256i_i64[2], v71.m256i_i64[1], 1);
          }
          v32 = v98;
          if ( v98 )
          {
            v33 = (_QWORD *)(v97 + 56);
            do
            {
              v34 = *(v33 - 7);
              if ( v34 )
                sub_140001660(*(v33 - 6), v34, 1);
              v35 = *(v33 - 1);
              if ( v35 )
                sub_140001660(*v33, v35, 1);
              v33 += 9;
              --v32;
            }
            while ( v32 );
          }
          if ( v96 )
            sub_140001660(v97, 72 * v96, 8);
          if ( v31 )
          {
            if ( (_QWORD)v109 != -1 && (_QWORD)v109 )
              sub_140001660(*((_QWORD *)&v109 + 1), v109, 1);
            if ( v110.m256i_i64[1] != -1 && v110.m256i_i64[1] )
              sub_140001660(v110.m256i_i64[2], v110.m256i_i64[1], 1);
            if ( (_QWORD)v111 != -1 && (_QWORD)v111 )
              sub_140001660(*((_QWORD *)&v111 + 1), v111, 1);
          }
          goto LABEL_31;
        }
        v66 = v113;
        v67 = v114;
        sub_1416AC440(&v115, (char *)&v83 + 8);
        *(_OWORD *)&v116.m256i_u64[1] = v85;
        v116.m256i_i16[12] = v86;
        sub_1416AC440(&v113, &v66);
        *(__m256i *)&v99[16] = v116;
        *(_OWORD *)v99 = v115;
        *(_OWORD *)&v99[48] = v113;
        *(_QWORD *)&v99[64] = v114;
        sub_1401F4B50(&v96, (__int128 *)v99);
        sub_1416AC440(&v115, (char *)&v83 + 8);
        *(_QWORD *)&v99[40] = v67;
        *(_OWORD *)&v99[24] = v66;
        *(_QWORD *)&v99[16] = v116.m256i_i64[0];
        *(_OWORD *)&v116.m256i_u64[1] = v66;
        v116.m256i_i64[3] = v67;
        sub_140020E50(&v68);
        v69 = v116;
        v68 = v115;
      }
      v126 = 1;
      sub_14002F9D0(&v89);
      v15 = v109;
      goto LABEL_58;
    }
    nullsub_1(v18);
    v28 = (void *)sub_140001650(65, 1);
    if ( !v28 )
      sub_141938D2B(1, 65);
    qmemcpy(v28, "latest native settings belongs to another task; history preserved", 65);
    *(_QWORD *)&v72[8] = 10;
    *(_QWORD *)&v72[16] = 65;
    *(_QWORD *)&v72[24] = v28;
    *(_QWORD *)&v72[32] = 65;
    goto LABEL_55;
  }
LABEL_58:
  if ( v15 != -1 && (v110.m256i_i64[0] != a4 || (unsigned int)sub_1418F4B70(*((_QWORD *)&v109 + 1), a3)) )
  {
    v126 = 1;
    sub_140244EB0((unsigned int)v99, *(_DWORD *)&v79[8], *(_DWORD *)&v79[16], (_DWORD)a3, a4);
    v29 = *(_QWORD *)v99;
    v115 = *(_OWORD *)&v99[8];
    v116.m256i_i64[0] = *(_QWORD *)&v99[24];
    if ( *(_QWORD *)v99 != -1 )
    {
LABEL_68:
      v73 = *(_OWORD *)&v99[80];
      *(_OWORD *)&v72[72] = *(_OWORD *)&v99[64];
      *(_OWORD *)&v72[56] = *(_OWORD *)&v99[48];
      *(_OWORD *)&v72[40] = *(_OWORD *)&v99[32];
      *(_OWORD *)&v72[16] = v115;
      *(_QWORD *)&v72[32] = v116.m256i_i64[0];
      *(_QWORD *)&v72[8] = v29;
      goto LABEL_69;
    }
    v113 = v115;
    v114 = v116.m256i_i64[0];
    sub_1416AC440(&v115, v79);
    *(_OWORD *)&v116.m256i_u64[1] = *(_OWORD *)v80.m256i_i8;
    v116.m256i_i16[12] = v80.m256i_i16[8];
    sub_1416AC440(&v89, &v113);
    *(__m256i *)&v99[16] = v116;
    *(_OWORD *)v99 = v115;
    *(_OWORD *)&v99[48] = v89;
    *(_QWORD *)&v99[64] = v90.m256i_i64[0];
    sub_1401F4B50(&v96, (__int128 *)v99);
    sub_1416AC440(&v115, v79);
    *(_QWORD *)&v99[40] = v114;
    *(_OWORD *)&v99[24] = v113;
    *(_QWORD *)&v99[16] = v116.m256i_i64[0];
    *(_OWORD *)&v116.m256i_u64[1] = v113;
    v116.m256i_i64[3] = v114;
    sub_140020E50(&v70);
    v71 = v116;
    v70 = v115;
  }
  v30 = v82;
  if ( (_QWORD)v82 != v80.m256i_i64[0]
    && v110.m256i_i64[1] != -1
    && (v110.m256i_i64[3] != a4 || (unsigned int)sub_1418F4B70(v110.m256i_i64[2], a3)) )
  {
    v126 = 1;
    sub_140244EB0((unsigned int)v99, v81, DWORD2(v81), (_DWORD)a3, a4);
    v29 = *(_QWORD *)v99;
    v115 = *(_OWORD *)&v99[8];
    v116.m256i_i64[0] = *(_QWORD *)&v99[24];
    if ( *(_QWORD *)v99 != -1 )
      goto LABEL_68;
    v113 = v115;
    v114 = v116.m256i_i64[0];
    sub_1416AC440(&v115, &v80.m256i_u64[3]);
    v116.m256i_i64[1] = v30;
    v116.m256i_i64[2] = *((_QWORD *)&v82 + 1);
    v116.m256i_i16[12] = v83;
    sub_1416AC440(&v89, &v113);
    *(__m256i *)&v99[16] = v116;
    *(_OWORD *)v99 = v115;
    *(_OWORD *)&v99[48] = v89;
    *(_QWORD *)&v99[64] = v90.m256i_i64[0];
    sub_1401F4B50(&v96, (__int128 *)v99);
    sub_1416AC440(&v115, &v80.m256i_u64[3]);
    *(_QWORD *)&v99[40] = v114;
    *(_OWORD *)&v99[24] = v113;
    *(_QWORD *)&v99[16] = v116.m256i_i64[0];
    *(_OWORD *)&v116.m256i_u64[1] = v113;
    v116.m256i_i64[3] = v114;
    sub_140020E50(&v64);
    v65 = v116;
    v64 = v115;
  }
  if ( a4 != 6 || a3->m128i_i32[0] ^ 0x6E65706F | a3->m128i_u16[2] ^ 0x6961 )
    goto LABEL_108;
  v126 = 1;
  sub_1401FA6A0((unsigned int)v99, v87, v95, v62, v63, v108, v14, *(__int64 *)&v79[8], *(__int64 *)&v79[16]);
  v27 = *(_QWORD *)&v99[8];
  v57 = *(_OWORD *)&v99[16];
  v58 = *(_OWORD *)&v99[32];
  v59 = *(_OWORD *)&v99[48];
  v60 = *(_OWORD *)&v99[64];
  v61 = *(_OWORD *)&v99[80];
  if ( *(_QWORD *)v99 != -1 )
  {
    v73 = v61;
    *(_OWORD *)&v72[72] = v60;
    *(_OWORD *)&v72[56] = v59;
    *(_OWORD *)&v72[40] = v58;
    *(_OWORD *)&v72[24] = v57;
    *(_QWORD *)&v72[8] = *(_QWORD *)v99;
    goto LABEL_49;
  }
  if ( *(_QWORD *)&v99[8] != -1 )
  {
    *(_OWORD *)&v99[72] = v61;
    *(_OWORD *)&v99[56] = v60;
    *(_OWORD *)&v99[40] = v59;
    *(_OWORD *)&v99[24] = v58;
    *(_OWORD *)&v99[8] = v57;
    *(_QWORD *)v99 = v27;
    v126 = 1;
    sub_1401B2130(&v115, &v70, v99);
    v89 = v115;
    v90 = v116;
    v91 = v117;
    v92 = v118;
    v93 = v119;
    goto LABEL_109;
  }
LABEL_108:
  *(_QWORD *)&v89 = -1;
LABEL_109:
  v36 = v108;
  if ( !v98 )
  {
    *(_QWORD *)&v72[64] = v112;
    *(_OWORD *)&v72[48] = v111;
    *(__m256i *)&v72[16] = v110;
    *(_OWORD *)v72 = v109;
    v74 = v89;
    v75 = v90;
    v76 = v91;
    v77 = v92;
    v78 = v93;
    *(_QWORD *)&v72[72] = -1;
    v31 = 0;
    goto LABEL_71;
  }
  v120 = 1;
  sub_14026A400((unsigned int)v99, v108, v14, v97, v98, (_QWORD)v68 != -1);
  if ( *(_DWORD *)v99 != -1 )
  {
    v73 = *(_OWORD *)&v99[80];
    *(_OWORD *)&v72[72] = *(_OWORD *)&v99[64];
    *(_OWORD *)&v72[56] = *(_OWORD *)&v99[48];
    *(_OWORD *)&v72[40] = *(_OWORD *)&v99[32];
    *(_OWORD *)&v72[24] = *(_OWORD *)&v99[16];
    *(_OWORD *)&v72[8] = *(_OWORD *)v99;
    *(_QWORD *)v72 = -2;
    sub_140020E50(&v89);
    v31 = 1;
    goto LABEL_71;
  }
  *(_QWORD *)&v118 = v112;
  v117 = v111;
  v116 = v110;
  v115 = v109;
  sub_141681D30(v99, v36, v14);
  v48 = v71;
  v47 = v70;
  v49 = v64;
  v50 = v65;
  v51 = v68;
  v52 = v69;
  v46 = *(_OWORD *)&v99[16];
  v45 = *(__m128i *)v99;
  v107 = v93;
  v106 = v92;
  v105 = v91;
  v104 = v90;
  v103 = v89;
  *(_QWORD *)&v99[64] = v118;
  *(_OWORD *)&v99[48] = v117;
  *(__m256i *)&v99[16] = v116;
  *(_OWORD *)v99 = v115;
  sub_1418F44E0((__m128i *)&v99[72], &v45, 0xB0u);
  sub_1418F44E0((__m128i *)v72, (const __m128i *)v99, 0x150u);
  sub_1401917C0(&v96);
  sub_140196190(v79);
  if ( *(_QWORD *)v72 != -2 )
    goto LABEL_114;
LABEL_39:
  v26 = 2;
  if ( *(_QWORD *)&v72[8] >= 2u )
    v26 = *(_QWORD *)&v72[8] - 2LL;
  if ( v26 == 1 || v26 == 7 )
  {
    v49 = v73;
    v48 = *(__m256i *)&v72[56];
    v47 = *(_OWORD *)&v72[40];
    v46 = *(_OWORD *)&v72[24];
    v45 = *(__m128i *)&v72[8];
    *(_QWORD *)v79 = 0;
    *(_QWORD *)&v79[8] = 1;
    *(_QWORD *)&v79[16] = 0;
    *(_QWORD *)&v99[16] = 1610612768;
    *(_QWORD *)v99 = v79;
    *(_QWORD *)&v99[8] = &off_1419E0B60;
    if ( (unsigned __int8)sub_14104A7D0(&v45, v99) )
      sub_141939040(
        (unsigned int)aADisplayImplem_53,
        55,
        (unsigned int)&v121,
        (unsigned int)&unk_1419D7FE8,
        (__int64)&off_1419E29A8);
    v116.m256i_i64[0] = *(_QWORD *)&v79[16];
    v115 = *(_OWORD *)v79;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)v79 = a2;
      *(_QWORD *)&v79[8] = sub_1400015F0;
      *(_QWORD *)&v79[16] = &v115;
      v80.m256i_i64[0] = (__int64)sub_1400015F0;
      *(_QWORD *)&v99[48] = 2;
      *(_QWORD *)&v99[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v99[64] = 51;
      *(_QWORD *)&v99[80] = &unk_1419DEF04;
      *(_QWORD *)&v99[88] = v79;
      *(_QWORD *)v99 = 0;
      *(_QWORD *)&v99[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v99[16] = 0x33u;
      *(_QWORD *)&v99[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v99[40] = 41;
      *(_QWORD *)&v99[72] = 0xA0100000001LL;
      sub_1414D53A0(&v121, v99);
    }
    sub_1416AC440(v99, a2);
    *(_QWORD *)(a1 + 376) = v116.m256i_i64[0];
    *(_OWORD *)(a1 + 360) = v115;
    *(_OWORD *)a1 = *(_OWORD *)v99;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v99[16];
    *(_QWORD *)(a1 + 24) = -1;
    *(_QWORD *)(a1 + 200) = -1;
    *(_QWORD *)(a1 + 264) = -1;
    *(_QWORD *)(a1 + 352) = -2;
    v125 = 1;
    v124 = 0;
    return sub_1401954F0(&v45);
  }
  else
  {
    *(_OWORD *)&v99[80] = v73;
    *(_OWORD *)&v99[64] = *(_OWORD *)&v72[72];
    *(_OWORD *)&v99[48] = *(_OWORD *)&v72[56];
    *(_OWORD *)&v99[32] = *(_OWORD *)&v72[40];
    *(_OWORD *)&v99[16] = *(_OWORD *)&v72[24];
    *(_OWORD *)v99 = *(_OWORD *)&v72[8];
    v45.m128i_i64[0] = (__int64)a2;
    v45.m128i_i64[1] = (__int64)sub_1400015F0;
    *(_QWORD *)&v46 = v99;
    *((_QWORD *)&v46 + 1) = sub_14104A7D0;
    sub_1416ABFD0(&v43, &unk_1419DEEDB, &v45);
    *(_QWORD *)(a1 + 32) = v44;
    *(_OWORD *)(a1 + 16) = v43;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = -1;
    v125 = 1;
    v124 = 0;
    return sub_1401954F0(v99);
  }
}
