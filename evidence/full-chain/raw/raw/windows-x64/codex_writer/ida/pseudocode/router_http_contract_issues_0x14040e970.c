// module: codexmate_lib/core/relay/codex_writer
// addr: 0x14040e970
// name: router_http_contract_issues
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_writer::router_http_contract_issues | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall router_http_contract_issues(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i *v7; // r14
  __m128i *v8; // r15
  char v9; // di
  __m128i v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  _OWORD *v28; // rax
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  int v33; // r10d
  char v34; // r14
  char v35; // r15
  unsigned __int64 v36; // r11
  int v37; // r15d
  int v38; // r14d
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  _BYTE *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  _BYTE *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // r9d
  char v66; // r10
  char v67; // r11
  char v68; // r14
  __int64 v69; // rdx
  int v70; // r11d
  int v71; // r10d
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // r9d
  char v75; // r10
  char v76; // r11
  char v77; // r14
  __int64 v78; // rax
  int v79; // r11d
  int v80; // r10d
  _BYTE v81[96]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v82; // [rsp+88h] [rbp+8h]
  char v83[144]; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v84[31]; // [rsp+120h] [rbp+A0h]
  __m128i *v85; // [rsp+148h] [rbp+C8h] BYREF
  _BYTE v86[88]; // [rsp+150h] [rbp+D0h]
  __int64 v87; // [rsp+1A8h] [rbp+128h]
  char v88[144]; // [rsp+1B0h] [rbp+130h] BYREF
  _OWORD v89[2]; // [rsp+240h] [rbp+1C0h]
  _BYTE v90[31]; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v91; // [rsp+280h] [rbp+200h] BYREF
  __int64 v92; // [rsp+290h] [rbp+210h]
  __m128i v93; // [rsp+298h] [rbp+218h] BYREF
  __int64 v94; // [rsp+2A8h] [rbp+228h]
  _OWORD v95[2]; // [rsp+2B0h] [rbp+230h]
  _OWORD v96[2]; // [rsp+2D0h] [rbp+250h]
  __m128i v97; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v98; // [rsp+300h] [rbp+280h]
  __int128 v99; // [rsp+310h] [rbp+290h]
  __int64 v100; // [rsp+320h] [rbp+2A0h]
  __m128i v101; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v102; // [rsp+340h] [rbp+2C0h]
  __int128 v103; // [rsp+350h] [rbp+2D0h]
  __int64 v104; // [rsp+360h] [rbp+2E0h]
  __m128i v105; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v106; // [rsp+380h] [rbp+300h]
  __int128 v107; // [rsp+390h] [rbp+310h]
  __int64 v108; // [rsp+3A0h] [rbp+320h]
  char v109; // [rsp+3AFh] [rbp+32Fh] BYREF
  _QWORD *v110; // [rsp+3B0h] [rbp+330h]
  __int64 v111; // [rsp+3B8h] [rbp+338h]

  v111 = -2;
  sub_140FBF870(v81);
  v7 = *(__m128i **)&v81[8];
  v8 = *(__m128i **)v81;
  v9 = v81[16];
  v89[0] = *(_OWORD *)&v81[17];
  *(_OWORD *)((char *)v89 + 15) = *(_OWORD *)&v81[32];
  v105 = *(__m128i *)&v81[48];
  v106 = *(_OWORD *)&v81[64];
  v107 = *(_OWORD *)&v81[80];
  v108 = v82;
  if ( *(_QWORD *)v81 == 2 )
  {
    v95[0] = v89[0];
    *(_OWORD *)((char *)v95 + 15) = *(_OWORD *)((char *)v89 + 15);
    v101 = v105;
    v102 = v106;
    v103 = v107;
    v104 = v108;
    v96[0] = v95[0];
    *(_OWORD *)((char *)v96 + 15) = *(_OWORD *)((char *)v89 + 15);
    v100 = v108;
    v10 = v105;
    v11 = v106;
    v12 = v107;
  }
  else
  {
    sub_141684120(v88, v83, 144);
    *(_OWORD *)((char *)v95 + 15) = *(_OWORD *)((char *)v89 + 15);
    v95[0] = v89[0];
    v101 = v105;
    v102 = v106;
    v103 = v107;
    v104 = v108;
    v85 = v8;
    *(_QWORD *)v86 = v7;
    v86[8] = v9;
    *(_OWORD *)&v86[24] = *(_OWORD *)((char *)v95 + 15);
    *(_OWORD *)&v86[9] = v89[0];
    v87 = v108;
    *(_OWORD *)&v86[72] = v107;
    *(_OWORD *)&v86[56] = v106;
    *(__m128i *)&v86[40] = v105;
    sub_140694000(v81, &v85);
    v7 = *(__m128i **)v81;
    v9 = v81[8];
    v96[0] = *(_OWORD *)&v81[9];
    *(_OWORD *)((char *)v96 + 15) = *(_OWORD *)&v81[24];
    if ( *(_QWORD *)v81 == 2 )
      goto LABEL_6;
    v100 = *(_QWORD *)&v81[88];
    v10 = *(__m128i *)&v81[40];
    v11 = *(_OWORD *)&v81[56];
    v12 = *(_OWORD *)&v81[72];
  }
  v99 = v12;
  v98 = v11;
  v97 = v10;
LABEL_6:
  if ( v7 == (__m128i *)2 )
  {
    *(_OWORD *)&v84[15] = *(_OWORD *)((char *)v96 + 15);
    *(_OWORD *)v84 = v96[0];
    *(_OWORD *)v90 = v96[0];
    *(_OWORD *)&v90[15] = *(_OWORD *)&v84[15];
    *(_OWORD *)&v81[1] = *(_OWORD *)v90;
    *(__m128i *)&v81[16] = _mm_loadu_si128((const __m128i *)&v90[15]);
    v81[0] = v9;
    v13 = sub_140F3FD00(aModelProviders, 15, v81);
    if ( v13 && (v15 = sub_140F3FD00("aimai1", 6, v13), (v16 = v15) != 0) )
    {
      v105.m128i_i64[0] = 0;
      v105.m128i_i64[1] = 8;
      *(_QWORD *)&v106 = 0;
      v17 = sub_140F3FD00(aBaseUrl, 8, v15);
      v18 = 1;
      if ( v17 && !*(_BYTE *)v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        v19 = *(_QWORD *)(v17 + 24);
      }
      else
      {
        v19 = 0;
      }
      v97.m128i_i64[0] = v18;
      v97.m128i_i64[1] = v19;
      v30 = v19;
      do
      {
        while ( 1 )
        {
          if ( !v30 )
            goto LABEL_42;
          v31 = v30;
          v32 = v18 + v30;
          v33 = *(char *)(v18 + v30 - 1);
          if ( v33 < 0 )
            break;
          --v30;
          if ( v33 != 47 )
            goto LABEL_40;
        }
        v34 = *(_BYTE *)(v32 - 2);
        if ( v34 >= -64 )
        {
          v36 = v32 - 2;
          v38 = v34 & 0x1F;
        }
        else
        {
          v35 = *(_BYTE *)(v32 - 3);
          if ( v35 >= -64 )
          {
            v36 = v32 - 3;
            v37 = v35 & 0xF;
          }
          else
          {
            v36 = v32 - 4;
            v37 = ((*(_BYTE *)(v32 - 4) & 7) << 6) | v35 & 0x3F;
          }
          v38 = (v37 << 6) | v34 & 0x3F;
        }
        v30 = v36 - v18;
      }
      while ( ((v38 << 6) | v33 & 0x3F) == 0x2F );
LABEL_40:
      if ( v31 < 0x10
        || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v32 - 16)), (__m128i)xmmword_141748EF0)) != 0xFFFF )
      {
LABEL_42:
        v85 = &v97;
        *(_QWORD *)v86 = sub_14041F680;
        sub_14149C0F0(&v93, &unk_141753369, &v85);
        v39 = v106;
        if ( (_QWORD)v106 == v105.m128i_i64[0] )
          sub_141689AB0(&v105);
        v40 = v105.m128i_i64[1];
        v41 = 3 * v39;
        *(_QWORD *)(v105.m128i_i64[1] + 24 * v39 + 16) = v94;
        v42 = _mm_loadu_si128(&v93);
LABEL_45:
        *(__m128i *)(v40 + 8 * v41) = v42;
        *(_QWORD *)&v106 = v39 + 1;
        goto LABEL_46;
      }
      if ( a4 )
      {
        while ( 1 )
        {
          v63 = a5;
          if ( !a5 )
            break;
          v64 = a4 + a5;
          v65 = *(char *)(a4 + v63 - 1);
          if ( v65 >= 0 )
          {
            a5 = v63 - 1;
            if ( v65 != 47 )
              break;
          }
          else
          {
            v66 = *(_BYTE *)(v64 - 2);
            if ( v66 >= -64 )
            {
              v69 = v64 - 2;
              v71 = v66 & 0x1F;
            }
            else
            {
              v67 = *(_BYTE *)(v64 - 3);
              if ( v67 >= -64 )
              {
                v69 = v64 - 3;
                v70 = v67 & 0xF;
              }
              else
              {
                v68 = *(_BYTE *)(v64 - 4);
                v69 = v64 - 4;
                v70 = ((v68 & 7) << 6) | v67 & 0x3F;
              }
              v71 = (v70 << 6) | v66 & 0x3F;
            }
            a5 = v69 - a4;
            if ( ((v71 << 6) | v65 & 0x3F) != 0x2F )
              break;
          }
        }
        v101.m128i_i64[0] = a4;
        v101.m128i_i64[1] = v63;
        while ( 1 )
        {
          v72 = v19;
          if ( !v19 )
            break;
          v73 = v18 + v19;
          v74 = *(char *)(v18 + v72 - 1);
          if ( v74 >= 0 )
          {
            v19 = v72 - 1;
            if ( v74 != 47 )
              break;
          }
          else
          {
            v75 = *(_BYTE *)(v73 - 2);
            if ( v75 >= -64 )
            {
              v78 = v73 - 2;
              v80 = v75 & 0x1F;
            }
            else
            {
              v76 = *(_BYTE *)(v73 - 3);
              if ( v76 >= -64 )
              {
                v78 = v73 - 3;
                v79 = v76 & 0xF;
              }
              else
              {
                v77 = *(_BYTE *)(v73 - 4);
                v78 = v73 - 4;
                v79 = ((v77 & 7) << 6) | v76 & 0x3F;
              }
              v80 = (v79 << 6) | v75 & 0x3F;
            }
            v19 = v78 - v18;
            if ( ((v80 << 6) | v74 & 0x3F) != 0x2F )
              break;
          }
        }
        if ( v72 != v63 || (unsigned int)sub_1416847B0(v18, a4, v63) )
        {
          v85 = &v101;
          *(_QWORD *)v86 = sub_14041F680;
          *(_QWORD *)&v86[8] = &v97;
          *(_QWORD *)&v86[16] = sub_14041F680;
          sub_14149C0F0(&v91, &unk_14175339F, &v85);
          v39 = v106;
          if ( (_QWORD)v106 == v105.m128i_i64[0] )
            sub_141689AB0(&v105);
          v40 = v105.m128i_i64[1];
          v41 = 3 * v39;
          *(_QWORD *)(v105.m128i_i64[1] + 24 * v39 + 16) = v92;
          v42 = _mm_loadu_si128(&v91);
          goto LABEL_45;
        }
      }
LABEL_46:
      v43 = sub_140F3FD00(aWireApi, 8, v16);
      if ( !v43
        || *(_BYTE *)v43
        || *(_QWORD *)(v43 + 24) != 9
        || (v45 = *(_QWORD *)(v43 + 16),
            v44 = *(_QWORD *)v45 ^ 0x65736E6F70736572LL,
            v44 | *(unsigned __int8 *)(v45 + 8) ^ 0x73LL) )
      {
        nullsub_1(v44);
        v46 = sub_140001650(28, 1);
        if ( !v46 )
          sub_1416C2D4B(1, 28);
        *(_OWORD *)(v46 + 12) = *(__int128 *)((char *)&xmmword_1417533D5 + 12);
        v110 = (_QWORD *)v46;
        *(__m128i *)v46 = _mm_loadu_si128((const __m128i *)&xmmword_1417533D5);
        v47 = v106;
        if ( (_QWORD)v106 == v105.m128i_i64[0] )
          sub_141689AB0(&v105);
        v48 = v105.m128i_i64[1];
        v49 = 3 * v47;
        *(_QWORD *)(v105.m128i_i64[1] + 8 * v49) = 28;
        *(_QWORD *)(v48 + 8 * v49 + 8) = v110;
        *(_QWORD *)(v48 + 8 * v49 + 16) = 28;
        *(_QWORD *)&v106 = v47 + 1;
      }
      v50 = (_BYTE *)sub_140F3FD00(aRequiresOpenai, 20, v16);
      if ( !v50 || *v50 != 3 || !v50[1] )
      {
        nullsub_1(v51);
        v52 = sub_140001650(35, 1);
        if ( !v52 )
          sub_1416C2D4B(1, 35);
        *(_OWORD *)(v52 + 16) = xmmword_141753415;
        *(__m128i *)v52 = _mm_loadu_si128((const __m128i *)&xmmword_141753405);
        v110 = (_QWORD *)v52;
        *(_DWORD *)(v52 + 31) = 1702195828;
        v53 = v106;
        if ( (_QWORD)v106 == v105.m128i_i64[0] )
          sub_141689AB0(&v105);
        v54 = v105.m128i_i64[1];
        v55 = 3 * v53;
        *(_QWORD *)(v105.m128i_i64[1] + 8 * v55) = 35;
        *(_QWORD *)(v54 + 8 * v55 + 8) = v110;
        *(_QWORD *)(v54 + 8 * v55 + 16) = 35;
        *(_QWORD *)&v106 = v53 + 1;
      }
      v56 = (_BYTE *)sub_140F3FD00(aSupportsWebsoc, 19, v16);
      if ( !v56 || *v56 != 3 || v56[1] == 1 )
      {
        nullsub_1(v57);
        v58 = sub_140001650(35, 1);
        if ( !v58 )
          sub_1416C2D4B(1, 35);
        *(_OWORD *)(v58 + 16) = xmmword_14175344B;
        *(__m128i *)v58 = _mm_loadu_si128((const __m128i *)&xmmword_14175343B);
        v110 = (_QWORD *)v58;
        *(_DWORD *)(v58 + 31) = 1702063201;
        v59 = v106;
        if ( (_QWORD)v106 == v105.m128i_i64[0] )
          sub_141689AB0(&v105);
        v60 = v105.m128i_i64[1];
        v61 = 3 * v59;
        *(_QWORD *)(v105.m128i_i64[1] + 8 * v61) = 35;
        *(_QWORD *)(v60 + 8 * v61 + 8) = v110;
        *(_QWORD *)(v60 + 8 * v61 + 16) = 35;
        *(_QWORD *)&v106 = v59 + 1;
      }
      *(_QWORD *)(a1 + 24) = v106;
      *(__m128i *)(a1 + 8) = v105;
    }
    else
    {
      nullsub_1(v14);
      v25 = sub_140001650(24, 8);
      if ( !v25 )
        sub_1416C2D31(8, 24);
      v27 = (_QWORD *)v25;
      nullsub_1(v26);
      v28 = (_OWORD *)sub_140001650(31, 1);
      if ( !v28 )
      {
        v110 = v27;
        sub_1416C2D4B(1, 31);
      }
      *(_OWORD *)((char *)v28 + 15) = *(__int128 *)((char *)&xmmword_14175345E + 15);
      *v28 = xmmword_14175345E;
      *v27 = 31;
      v27[1] = v28;
      v27[2] = 31;
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = v27;
      *(_QWORD *)(a1 + 24) = 1;
    }
    *(_QWORD *)a1 = 0;
    sub_14034CAE0(v81);
  }
  else
  {
    v85 = v7;
    v86[0] = v9;
    *(_OWORD *)&v86[1] = v96[0];
    *(_OWORD *)&v86[16] = *(_OWORD *)((char *)v96 + 15);
    *(__m128i *)&v86[32] = _mm_load_si128(&v97);
    *(_OWORD *)&v86[48] = v98;
    *(_OWORD *)&v86[64] = v99;
    *(_QWORD *)&v86[80] = v100;
    v105.m128i_i64[0] = 0;
    v105.m128i_i64[1] = 1;
    *(_QWORD *)&v106 = 0;
    *(_QWORD *)&v81[16] = 1610612768;
    *(_QWORD *)v81 = &v105;
    *(_QWORD *)&v81[8] = &off_141754110;
    if ( (unsigned __int8)sub_140F415C0(&v85, v81) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v109,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    *(_QWORD *)&v102 = v106;
    v101 = v105;
    if ( *(_QWORD *)&v86[16] )
      sub_140001660(*(_QWORD *)&v86[24], *(_QWORD *)&v86[16], 1);
    if ( *(__int64 *)&v86[64] > 0 )
      sub_140001660(*(_QWORD *)&v86[72], *(_QWORD *)&v86[64], 1);
    v20 = *(_QWORD *)&v86[48];
    v21 = *(_QWORD *)&v86[56];
    if ( *(_QWORD *)&v86[56] )
    {
      v22 = (_QWORD *)(*(_QWORD *)&v86[48] + 8LL);
      do
      {
        v23 = *(v22 - 1);
        if ( v23 )
          sub_140001660(*v22, v23, 1);
        v22 += 3;
        --v21;
      }
      while ( v21 );
    }
    if ( *(_QWORD *)&v86[40] )
      sub_140001660(v20, 24LL * *(_QWORD *)&v86[40], 8);
    v24 = v101;
    *(__m128i *)&v90[7] = v101;
    *(_QWORD *)&v90[23] = v102;
    *(_QWORD *)(a1 + 24) = v102;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = 1;
  }
  return a1;
}