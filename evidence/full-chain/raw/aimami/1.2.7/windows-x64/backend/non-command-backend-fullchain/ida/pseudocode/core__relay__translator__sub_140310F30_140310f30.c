// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140310f30 | name sub_140310F30
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140310F30(_OWORD *a1, __int64 a2, const __m128i *a3, signed __int64 a4)
{
  unsigned __int8 *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  const __m128i *v17; // r15
  __m128i *v18; // rax
  __int64 v19; // r12
  const __m128i *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 i; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  __m128i *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128i *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int8 v39; // bl
  __int64 v40; // rdx
  __int128 v41; // xmm0
  _OWORD *v42; // rax
  __int64 v43; // rax
  __int8 v44; // bl
  __int64 v45; // rdx
  __int128 v46; // xmm0
  _OWORD *v47; // rax
  __int64 v48; // rax
  __int8 v49; // bl
  __int64 v50; // rdx
  __int128 v51; // xmm0
  _OWORD *v52; // rax
  __int64 v53; // rax
  __int8 v54; // bl
  __int64 v55; // rdx
  __int128 v56; // xmm0
  _OWORD *v57; // rax
  __int64 v58; // rax
  __int8 v59; // bl
  __int64 v60; // rdx
  __int128 v61; // xmm0
  _OWORD *v62; // rax
  __int64 v63; // rax
  __int128 v64; // xmm0
  _OWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  _DWORD *v73; // rax
  __int64 v74; // rcx
  __m128i *v75; // rax
  _DWORD *v76; // rax
  __int16 v77; // ax
  _DWORD *v78; // rax
  __int128 v79; // xmm0
  _OWORD *v80; // rax
  __int128 v81; // xmm0
  __int64 v82; // rcx
  __int64 v83; // rdi
  _QWORD *v85; // rax
  __int128 v86; // [rsp+30h] [rbp-50h] BYREF
  __int128 v87; // [rsp+40h] [rbp-40h] BYREF
  __int64 v88; // [rsp+50h] [rbp-30h]
  unsigned __int64 v89; // [rsp+58h] [rbp-28h] BYREF
  const __m128i *v90; // [rsp+60h] [rbp-20h]
  signed __int64 v91; // [rsp+68h] [rbp-18h]
  __int128 v92; // [rsp+70h] [rbp-10h] BYREF
  __int64 v93; // [rsp+80h] [rbp+0h]
  const __m128i *v94; // [rsp+88h] [rbp+8h] BYREF
  __int64 v95; // [rsp+90h] [rbp+10h]
  const __m128i *v96; // [rsp+98h] [rbp+18h]
  __int128 v97; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v98; // [rsp+B0h] [rbp+30h]
  const __m128i *v99; // [rsp+B8h] [rbp+38h]
  __m256i v100; // [rsp+C0h] [rbp+40h] BYREF
  __m256i v101; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int64 v102; // [rsp+108h] [rbp+88h]
  char v103; // [rsp+117h] [rbp+97h]
  char v104; // [rsp+118h] [rbp+98h]
  char v105; // [rsp+119h] [rbp+99h]
  char v106; // [rsp+11Ah] [rbp+9Ah]
  char v107; // [rsp+11Bh] [rbp+9Bh]
  char v108; // [rsp+11Ch] [rbp+9Ch]
  char v109; // [rsp+11Dh] [rbp+9Dh]
  char v110; // [rsp+11Eh] [rbp+9Eh]
  char v111; // [rsp+11Fh] [rbp+9Fh]
  __int64 v112; // [rsp+120h] [rbp+A0h]
  __m256i v113; // [rsp+128h] [rbp+A8h] BYREF
  char v114; // [rsp+14Dh] [rbp+CDh]
  char v115; // [rsp+14Eh] [rbp+CEh]
  char v116; // [rsp+14Fh] [rbp+CFh]
  __int64 v117; // [rsp+150h] [rbp+D0h]

  v117 = -2;
  v94 = nullptr;
  v95 = 8;
  v96 = nullptr;
  v8 = (unsigned __int8 *)sub_1416419F0(
                            "systemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usert"
                            "emperaturemax_tokensstreamdoubaoreasoning_effortnone",
                            6,
                            a2);
  if ( v8 )
  {
    sub_1402E2550(&v89, v8);
    if ( v89 != -1 )
    {
      v102 = v89;
      v99 = v90;
      sub_1402E23A0((signed __int64 *)&v92, v90, v91);
      v10 = v93;
      if ( v93 )
      {
        *(_QWORD *)&v97 = 0;
        v98 = 0;
        nullsub_1(v9);
        v11 = (_DWORD *)sub_140001650(4, 1);
        if ( !v11 )
          sub_141938D2B(1, 4);
        *v11 = 1701605234;
        v101.m256i_i64[0] = 4;
        v101.m256i_i64[1] = (__int64)v11;
        v101.m256i_i64[2] = 4;
        nullsub_1(v12);
        v13 = sub_140001650(6, 1);
        v112 = v13;
        if ( !v13 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v13 + 4) = 28005;
        *(_DWORD *)v13 = 1953724787;
        v113.m256i_i8[0] = 3;
        v113.m256i_i64[1] = 6;
        v113.m256i_i64[2] = v13;
        v113.m256i_i64[3] = 6;
        sub_140E72AA0(&v100, &v97, &v101, &v113);
        if ( v100.m256i_i8[0] != -1 )
          sub_14002F9D0(&v100);
        nullsub_1(v14);
        v15 = (_DWORD *)sub_140001650(7, 1);
        if ( !v15 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v15 + 3) = 1953391988;
        *v15 = 1953394531;
        v101.m256i_i64[0] = 7;
        v101.m256i_i64[1] = (__int64)v15;
        v101.m256i_i64[2] = 7;
        v17 = *((const __m128i **)&v92 + 1);
        nullsub_1(v16);
        v18 = (__m128i *)sub_140001650(v10, 1);
        v112 = (__int64)v18;
        if ( !v18 )
          sub_141938D2B(1, v10);
        v19 = (__int64)v18;
        sub_1418F44E0(v18, v17, v10);
        v113.m256i_i8[0] = 3;
        v113.m256i_i64[1] = v10;
        v113.m256i_i64[2] = v19;
        v113.m256i_i64[3] = v10;
        sub_140E72AA0(&v100, &v97, &v101, &v113);
        if ( v100.m256i_i8[0] != -1 )
          sub_14002F9D0(&v100);
        *(_OWORD *)&v113.m256i_u64[1] = v97;
        v113.m256i_i64[3] = v98;
        v113.m256i_i8[0] = 5;
        v20 = v96;
        if ( v96 == v94 )
          sub_14190F570(&v94);
        v21 = v95;
        v22 = 32LL * (_QWORD)v20;
        v23 = *(_OWORD *)v113.m256i_i8;
        *(_OWORD *)(v95 + v22 + 16) = *(_OWORD *)&v113.m256i_u64[2];
        *(_OWORD *)(v21 + v22) = v23;
        v96 = (const __m128i *)&v20->m128i_i8[1];
      }
      if ( (_QWORD)v92 )
        sub_140001660(*((_QWORD *)&v92 + 1), v92, 1);
      if ( v102 )
        sub_140001660(v99, v102, 1);
    }
  }
  v24 = sub_1416419F0(
          "messagesrolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertempera"
          "turemax_tokensstreamdoubaoreasoning_effortnone",
          8,
          a2);
  if ( v24 )
  {
    if ( *(_BYTE *)v24 == 4 )
    {
      v25 = *(_QWORD *)(v24 + 16);
      for ( i = v25 + 32LL * *(_QWORD *)(v24 + 24); v25 != i; v25 += 32 )
        sub_140329AD0(v25, &v94);
    }
  }
  v27 = sub_1416419F0(aModel_1, 5, a2);
  if ( v27 && *(_BYTE *)v27 == 3 )
  {
    a3 = *(const __m128i **)(v27 + 16);
    a4 = *(_QWORD *)(v27 + 24);
  }
  if ( a4 < 0 )
  {
    v29 = 0;
    goto LABEL_28;
  }
  if ( a4 )
  {
    nullsub_1(v28);
    v29 = 1;
    v30 = (__m128i *)sub_140001650(a4, 1);
    if ( !v30 )
LABEL_28:
      sub_141938D2B(v29, a4);
    v31 = (__int64)v30;
    sub_1418F44E0(v30, a3, a4);
  }
  else
  {
    v31 = 1;
  }
  *(_QWORD *)&v97 = 0;
  v98 = 0;
  nullsub_1(v28);
  v32 = 1;
  v33 = sub_140001650(5, 1);
  v102 = a4;
  v99 = (const __m128i *)v31;
  if ( !v33 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v33 + 4) = 108;
  *(_DWORD *)v33 = 1701080941;
  v101.m256i_i64[0] = 5;
  v101.m256i_i64[1] = v33;
  v101.m256i_i64[2] = 5;
  if ( a4 )
  {
    nullsub_1(v34);
    v35 = (__m128i *)sub_140001650(a4, 1);
    if ( !v35 )
    {
      v111 = 1;
      sub_141938D2B(1, a4);
    }
    v32 = (__int64)v35;
    sub_1418F44E0(v35, (const __m128i *)v31, a4);
  }
  v113.m256i_i8[0] = 3;
  v113.m256i_i64[1] = a4;
  v113.m256i_i64[2] = v32;
  v113.m256i_i64[3] = a4;
  v111 = 0;
  sub_140E72AA0(&v100, &v97, &v101, &v113);
  if ( v100.m256i_i8[0] != -1 )
    sub_14002F9D0(&v100);
  nullsub_1(v36);
  v37 = (_QWORD *)sub_140001650(8, 1);
  if ( !v37 )
    sub_141938D2B(1, 8);
  *v37 = 0x736567617373656DLL;
  v101.m256i_i64[0] = 8;
  v101.m256i_i64[1] = (__int64)v37;
  v101.m256i_i64[2] = 8;
  v116 = 1;
  sub_140C0FE40(&v113, &v94);
  if ( v113.m256i_i8[0] == -1 )
  {
    v100.m256i_i64[0] = v113.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v100,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E8DF8);
  }
  v100 = v113;
  v116 = 0;
  sub_140E72AA0(&v113, &v97, &v101, &v100);
  if ( v113.m256i_i8[0] != -1 )
    sub_14002F9D0(&v113);
  *(_OWORD *)&v101.m256i_u64[1] = v97;
  v101.m256i_i64[3] = v98;
  v101.m256i_i8[0] = 5;
  v38 = sub_1416419F0("streamdoubaoreasoning_effortnone", 6, a2);
  if ( v38 )
  {
    v39 = *(_BYTE *)v38;
    switch ( *(_BYTE *)v38 )
    {
      case 0:
        break;
      case 1:
        v113.m256i_i8[1] = *(_BYTE *)(v38 + 1);
        break;
      case 2:
        *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)(v38 + 8);
        break;
      case 3:
        sub_1416AC440(&v113.m256i_u64[1], v38 + 8);
        break;
      case 4:
        sub_1403918C0(&v113.m256i_u64[1], *(_QWORD *)(v38 + 16), *(_QWORD *)(v38 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v38 + 24) )
        {
          v40 = *(_QWORD *)(v38 + 8);
          if ( !v40 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v113.m256i_u64[1], v40, *(_QWORD *)(v38 + 16));
        }
        else
        {
          v113.m256i_i64[1] = 0;
          v113.m256i_i64[3] = 0;
        }
        break;
    }
    v113.m256i_i8[0] = v39;
    v110 = 1;
    v112 = sub_141641AF0("streamdoubaoreasoning_effortnone", 6, &v101);
    sub_14002F9D0(v112);
    v41 = *(_OWORD *)v113.m256i_i8;
    v42 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v42 = v41;
  }
  v43 = sub_1416419F0("max_tokensstreamdoubaoreasoning_effortnone", 10, a2);
  if ( v43 )
  {
    v44 = *(_BYTE *)v43;
    switch ( *(_BYTE *)v43 )
    {
      case 0:
        break;
      case 1:
        v113.m256i_i8[1] = *(_BYTE *)(v43 + 1);
        break;
      case 2:
        *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)(v43 + 8);
        break;
      case 3:
        sub_1416AC440(&v113.m256i_u64[1], v43 + 8);
        break;
      case 4:
        sub_1403918C0(&v113.m256i_u64[1], *(_QWORD *)(v43 + 16), *(_QWORD *)(v43 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v43 + 24) )
        {
          v45 = *(_QWORD *)(v43 + 8);
          if ( !v45 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v113.m256i_u64[1], v45, *(_QWORD *)(v43 + 16));
        }
        else
        {
          v113.m256i_i64[1] = 0;
          v113.m256i_i64[3] = 0;
        }
        break;
    }
    v113.m256i_i8[0] = v44;
    v109 = 1;
    v112 = sub_141641AF0("max_tokensstreamdoubaoreasoning_effortnone", 10, &v101);
    sub_14002F9D0(v112);
    v46 = *(_OWORD *)v113.m256i_i8;
    v47 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v47 = v46;
  }
  v48 = sub_1416419F0("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, a2);
  if ( v48 )
  {
    v49 = *(_BYTE *)v48;
    switch ( *(_BYTE *)v48 )
    {
      case 0:
        break;
      case 1:
        v113.m256i_i8[1] = *(_BYTE *)(v48 + 1);
        break;
      case 2:
        *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)(v48 + 8);
        break;
      case 3:
        sub_1416AC440(&v113.m256i_u64[1], v48 + 8);
        break;
      case 4:
        sub_1403918C0(&v113.m256i_u64[1], *(_QWORD *)(v48 + 16), *(_QWORD *)(v48 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v48 + 24) )
        {
          v50 = *(_QWORD *)(v48 + 8);
          if ( !v50 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v113.m256i_u64[1], v50, *(_QWORD *)(v48 + 16));
        }
        else
        {
          v113.m256i_i64[1] = 0;
          v113.m256i_i64[3] = 0;
        }
        break;
    }
    v113.m256i_i8[0] = v49;
    v108 = 1;
    v112 = sub_141641AF0("temperaturemax_tokensstreamdoubaoreasoning_effortnone", 11, &v101);
    sub_14002F9D0(v112);
    v51 = *(_OWORD *)v113.m256i_i8;
    v52 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v52 = v51;
  }
  v53 = sub_1416419F0(aTopP, 5, a2);
  if ( v53 )
  {
    v54 = *(_BYTE *)v53;
    switch ( *(_BYTE *)v53 )
    {
      case 0:
        break;
      case 1:
        v113.m256i_i8[1] = *(_BYTE *)(v53 + 1);
        break;
      case 2:
        *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)(v53 + 8);
        break;
      case 3:
        sub_1416AC440(&v113.m256i_u64[1], v53 + 8);
        break;
      case 4:
        sub_1403918C0(&v113.m256i_u64[1], *(_QWORD *)(v53 + 16), *(_QWORD *)(v53 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v53 + 24) )
        {
          v55 = *(_QWORD *)(v53 + 8);
          if ( !v55 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v113.m256i_u64[1], v55, *(_QWORD *)(v53 + 16));
        }
        else
        {
          v113.m256i_i64[1] = 0;
          v113.m256i_i64[3] = 0;
        }
        break;
    }
    v113.m256i_i8[0] = v54;
    v107 = 1;
    v112 = sub_141641AF0(aTopP, 5, &v101);
    sub_14002F9D0(v112);
    v56 = *(_OWORD *)v113.m256i_i8;
    v57 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v57 = v56;
  }
  v58 = sub_1416419F0(aStopSequences, 14, a2);
  if ( v58 )
  {
    v59 = *(_BYTE *)v58;
    switch ( *(_BYTE *)v58 )
    {
      case 0:
        break;
      case 1:
        v113.m256i_i8[1] = *(_BYTE *)(v58 + 1);
        break;
      case 2:
        *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)(v58 + 8);
        break;
      case 3:
        sub_1416AC440(&v113.m256i_u64[1], v58 + 8);
        break;
      case 4:
        sub_1403918C0(&v113.m256i_u64[1], *(_QWORD *)(v58 + 16), *(_QWORD *)(v58 + 24));
        break;
      case 5:
        if ( *(_QWORD *)(v58 + 24) )
        {
          v60 = *(_QWORD *)(v58 + 8);
          if ( !v60 )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v113.m256i_u64[1], v60, *(_QWORD *)(v58 + 16));
        }
        else
        {
          v113.m256i_i64[1] = 0;
          v113.m256i_i64[3] = 0;
        }
        break;
    }
    v113.m256i_i8[0] = v59;
    v106 = 1;
    v112 = sub_141641AF0(aStop_0, 4, &v101);
    sub_14002F9D0(v112);
    v61 = *(_OWORD *)v113.m256i_i8;
    v62 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v62 = v61;
  }
  v63 = sub_1416419F0(aTools_1, 5, a2);
  if ( v63 && *(_BYTE *)v63 == 4 )
  {
    sub_1403D6E40(&v100, *(_QWORD *)(v63 + 16), *(_QWORD *)(v63 + 16) + 32LL * *(_QWORD *)(v63 + 24));
    if ( v100.m256i_i64[2] )
    {
      v113.m256i_i64[3] = v100.m256i_i64[2];
      *(_OWORD *)&v113.m256i_u64[1] = *(_OWORD *)v100.m256i_i8;
      v113.m256i_i8[0] = 4;
      v105 = 1;
      v112 = sub_141641AF0(aTools_1, 5, &v101);
      sub_14002F9D0(v112);
      v64 = *(_OWORD *)v113.m256i_i8;
      v65 = (_OWORD *)v112;
      *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
      *v65 = v64;
    }
    else if ( v100.m256i_i64[0] )
    {
      sub_140001660(v100.m256i_i64[1], 32 * v100.m256i_i64[0], 8);
    }
  }
  v66 = sub_1416419F0(aToolChoice_1, 11, a2);
  v67 = v66;
  if ( v66 )
  {
    v68 = sub_1416419F0(aType_4, 4, v66);
    if ( v68 && *(_BYTE *)v68 == 3 )
    {
      v69 = *(_QWORD *)(v68 + 16);
      v70 = *(_QWORD *)(v68 + 24);
      if ( v70 == 3 )
      {
        v77 = *(_WORD *)v69 ^ 0x6E61;
        v69 = *(unsigned __int8 *)(v69 + 2) ^ 0x79u;
        LOWORD(v69) = v77 | v69;
        if ( !(_WORD)v69 )
        {
          nullsub_1(v69);
          v85 = (_QWORD *)sub_140001650(8, 1);
          if ( !v85 )
            sub_141938D2B(1, 8);
          *v85 = 0x6465726975716572LL;
          v113.m256i_i64[1] = 8;
          v113.m256i_i64[2] = (__int64)v85;
          v113.m256i_i64[3] = 8;
          goto LABEL_128;
        }
      }
      else if ( v70 == 4 )
      {
        if ( *(_DWORD *)v69 == 1869903201 )
        {
          nullsub_1(v69);
          v78 = (_DWORD *)sub_140001650(4, 1);
          if ( !v78 )
            sub_141938D2B(1, 4);
          goto LABEL_127;
        }
        if ( *(_DWORD *)v69 == 1819242356 )
        {
          v71 = sub_1416419F0(aName_2, 4, v67);
          if ( v71 && *(_BYTE *)v71 == 3 )
          {
            v86 = *(_OWORD *)(v71 + 16);
            *(_QWORD *)&v87 = 0;
            v88 = 0;
            nullsub_1(v72);
            v73 = (_DWORD *)sub_140001650(4, 1);
            if ( !v73 )
              sub_141938D2B(1, 4);
            *v73 = 1701869940;
            *(_QWORD *)&v97 = 4;
            *((_QWORD *)&v97 + 1) = v73;
            v98 = 4;
            v115 = 1;
            sub_14040FB10(&v113, &off_1419E6178);
            if ( v113.m256i_i8[0] == -1 )
            {
              v100.m256i_i64[0] = v113.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v100,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E8DB0);
            }
            v100 = v113;
            v115 = 0;
            sub_140E72AA0(&v113, &v87, &v97, &v100);
            if ( v113.m256i_i8[0] != -1 )
              sub_14002F9D0(&v113);
            nullsub_1(v74);
            v75 = (__m128i *)sub_140001650(8, 1);
            if ( !v75 )
              sub_141938D2B(1, 8);
            v75->m128i_i64[0] = 0x6E6F6974636E7566LL;
            v89 = 8;
            v90 = v75;
            v91 = 8;
            *(_QWORD *)&v92 = 0;
            v93 = 0;
            nullsub_1(0x6E6F6974636E7566LL);
            v76 = (_DWORD *)sub_140001650(4, 1);
            if ( !v76 )
              sub_141938D2B(1, 4);
            *v76 = 1701667182;
            *(_QWORD *)&v97 = 4;
            *((_QWORD *)&v97 + 1) = v76;
            v98 = 4;
            v114 = 1;
            sub_14040FB10(&v113, &v86);
            if ( v113.m256i_i8[0] == -1 )
            {
              v100.m256i_i64[0] = v113.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v100,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E8DB0);
            }
            v100 = v113;
            v114 = 0;
            sub_140E72AA0(&v113, &v92, &v97, &v100);
            if ( v113.m256i_i8[0] != -1 )
              sub_14002F9D0(&v113);
            *(_OWORD *)&v113.m256i_u64[1] = v92;
            v113.m256i_i64[3] = v93;
            v113.m256i_i8[0] = 5;
            v104 = 0;
            sub_140E72AA0(&v100, &v87, &v89, &v113);
            if ( v100.m256i_i8[0] != -1 )
              sub_14002F9D0(&v100);
            *(_OWORD *)&v113.m256i_u64[1] = v87;
            v113.m256i_i64[3] = v88;
            v113.m256i_i8[0] = 5;
            goto LABEL_129;
          }
          nullsub_1(v72);
          v78 = (_DWORD *)sub_140001650(4, 1);
          if ( !v78 )
            sub_141938D2B(1, 4);
          goto LABEL_127;
        }
      }
    }
    nullsub_1(v69);
    v78 = (_DWORD *)sub_140001650(4, 1);
    if ( !v78 )
      sub_141938D2B(1, 4);
LABEL_127:
    *v78 = 1869903201;
    v113.m256i_i64[1] = 4;
    v113.m256i_i64[2] = (__int64)v78;
    v113.m256i_i64[3] = 4;
LABEL_128:
    v113.m256i_i8[0] = 3;
LABEL_129:
    v103 = 1;
    v112 = sub_141641AF0(aToolChoice_1, 11, &v101);
    sub_14002F9D0(v112);
    v79 = *(_OWORD *)v113.m256i_i8;
    v80 = (_OWORD *)v112;
    *(_OWORD *)(v112 + 16) = *(_OWORD *)&v113.m256i_u64[2];
    *v80 = v79;
  }
  v81 = *(_OWORD *)v101.m256i_i8;
  a1[1] = *(_OWORD *)&v101.m256i_u64[2];
  *a1 = v81;
  if ( v102 )
    sub_140001660(v99, v102, 1);
  v82 = v95;
  v99 = v96;
  v102 = 0;
  v112 = v95;
  while ( v99 != (const __m128i *)v102 )
  {
    ++v102;
    v83 = v82 + 32;
    sub_1403880E0(v82);
    v82 = v83;
  }
  if ( v94 )
    sub_140001660(v95, 32LL * (_QWORD)v94, 8);
  return a1;
}
