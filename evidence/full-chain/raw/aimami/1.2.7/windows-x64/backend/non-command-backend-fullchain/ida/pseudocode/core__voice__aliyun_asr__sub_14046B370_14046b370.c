// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14046b370 | name sub_14046B370
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14046B370(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  const __m128i *v12; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  __int64 *v15; // r14
  unsigned __int64 v16; // r12
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  signed __int64 v28; // rbx
  __int64 v29; // r12
  void *v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // rax
  __m128i *v33; // rax
  __int64 v34; // r14
  const __m128i *v35; // r15
  __m128i *v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // rcx
  __int64 v50; // rbx
  _QWORD *v51; // r15
  __int64 v52; // rbx
  __int64 *v53; // r8
  bool v54; // zf
  __int128 v55; // xmm1
  char result; // al
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 *v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int128 v65; // xmm3
  __int128 v66; // xmm4
  __int128 v67; // xmm5
  __int128 v68; // xmm6
  _BYTE v69[120]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v70; // [rsp+A8h] [rbp+28h]
  __int64 *v71; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v72; // [rsp+C8h] [rbp+48h]
  _OWORD *v73; // [rsp+D0h] [rbp+50h]
  __int128 v74; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v75; // [rsp+E8h] [rbp+68h]
  __m256i v76; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v77; // [rsp+110h] [rbp+90h]
  __int128 v78; // [rsp+120h] [rbp+A0h]
  __int128 v79; // [rsp+130h] [rbp+B0h]
  __int128 v80; // [rsp+140h] [rbp+C0h]
  __int128 v81; // [rsp+150h] [rbp+D0h]
  __int128 v82; // [rsp+160h] [rbp+E0h]
  __int64 *v83; // [rsp+178h] [rbp+F8h]
  _BYTE v84[120]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v85; // [rsp+1F8h] [rbp+178h]
  __int128 v86; // [rsp+208h] [rbp+188h] BYREF
  __int64 v87; // [rsp+218h] [rbp+198h]
  __int128 v88; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v89; // [rsp+230h] [rbp+1B0h]
  char v90; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int128 v91; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v92; // [rsp+250h] [rbp+1D0h]
  __int64 *v93; // [rsp+260h] [rbp+1E0h]
  _QWORD *v94; // [rsp+268h] [rbp+1E8h]
  char v95; // [rsp+274h] [rbp+1F4h]
  char v96; // [rsp+275h] [rbp+1F5h]
  char v97; // [rsp+276h] [rbp+1F6h]
  char v98; // [rsp+277h] [rbp+1F7h]
  __int64 v99; // [rsp+278h] [rbp+1F8h]

  v99 = -2;
  v5 = *((unsigned __int8 *)a2 + 80);
  v93 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2[2];
      a2[3] = v6;
      v7 = *a2;
      v8 = *((_DWORD *)a2 + 2);
      a2[4] = *a2;
      *((_DWORD *)a2 + 10) = v8;
      v9 = *(unsigned __int8 *)(v6 + 96);
      if ( !v9 )
      {
        *(_QWORD *)&v74 = 0;
        v75 = 0;
        nullsub_1(v7);
        v19 = sub_140001650(6, 1);
        if ( !v19 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v19 + 4) = 29285;
        *(_DWORD *)v19 = 1684104552;
        *(_QWORD *)&v86 = 6;
        *((_QWORD *)&v86 + 1) = v19;
        v87 = 6;
        *(_QWORD *)&v88 = 0;
        v89 = 0;
        nullsub_1(v20);
        v21 = sub_140001650(6, 1);
        if ( !v21 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v21 + 4) = 28271;
        *(_DWORD *)v21 = 1769235297;
        *(_QWORD *)&v91 = 6;
        *((_QWORD *)&v91 + 1) = v21;
        v92 = 6;
        nullsub_1(v22);
        v23 = (_QWORD *)sub_140001650(11, 1);
        v94 = v23;
        if ( !v23 )
          sub_141938D2B(1, 11);
        qmemcpy(v23, "finish-task", 11);
        v84[0] = 3;
        *(_QWORD *)&v84[8] = 11;
        *(_QWORD *)&v84[16] = v23;
        *(_QWORD *)&v84[24] = 11;
        sub_140E72AA0(v69, &v88, &v91, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        nullsub_1(v24);
        v25 = (_DWORD *)sub_140001650(7, 1);
        if ( !v25 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v25 + 3) = 1684627307;
        *v25 = 1802723700;
        *(_QWORD *)&v91 = 7;
        *((_QWORD *)&v91 + 1) = v25;
        v92 = 7;
        v27 = v93[3];
        v28 = *(_QWORD *)(v27 + 16);
        if ( v28 < 0 )
        {
          v29 = 0;
          goto LABEL_21;
        }
        if ( v28 )
        {
          v35 = *(const __m128i **)(v27 + 8);
          nullsub_1(v26);
          v29 = 1;
          v36 = (__m128i *)sub_140001650(v28, 1);
          if ( !v36 )
          {
LABEL_21:
            v98 = 1;
            sub_141938D2B(v29, v28);
          }
          v37 = (__int64)v36;
          sub_1418F44E0(v36, v35, v28);
        }
        else
        {
          v37 = 1;
        }
        v84[0] = 3;
        *(_QWORD *)&v84[8] = v28;
        *(_QWORD *)&v84[16] = v37;
        *(_QWORD *)&v84[24] = v28;
        v98 = 0;
        sub_140E72AA0(v69, &v88, &v91, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        nullsub_1(v42);
        v43 = sub_140001650(9, 1);
        if ( !v43 )
          sub_141938D2B(1, 9);
        *(_QWORD *)v43 = 0x6E696D6165727473LL;
        *(_BYTE *)(v43 + 8) = 103;
        *(_QWORD *)&v91 = 9;
        *((_QWORD *)&v91 + 1) = v43;
        v92 = 9;
        nullsub_1(0x6E696D6165727473LL);
        v44 = sub_140001650(6, 1);
        v94 = (_QWORD *)v44;
        if ( !v44 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v44 + 4) = 30821;
        *(_DWORD *)v44 = 1819309412;
        v84[0] = 3;
        *(_QWORD *)&v84[8] = 6;
        *(_QWORD *)&v84[16] = v44;
        *(_QWORD *)&v84[24] = 6;
        sub_140E72AA0(v69, &v88, &v91, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        *(_OWORD *)&v76.m256i_u64[1] = v88;
        v76.m256i_i64[3] = v89;
        v76.m256i_i8[0] = 5;
        v97 = 0;
        sub_140E72AA0(v84, &v74, &v86, &v76);
        if ( v84[0] != 0xFF )
          sub_140409B40(v84);
        nullsub_1(v45);
        v46 = (_DWORD *)sub_140001650(7, 1);
        if ( !v46 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v46 + 3) = 1684107116;
        *v46 = 1819894128;
        *(_QWORD *)&v86 = 7;
        *((_QWORD *)&v86 + 1) = v46;
        v87 = 7;
        *(_QWORD *)&v88 = 0;
        v89 = 0;
        nullsub_1(v47);
        v48 = sub_140001650(5, 1);
        if ( !v48 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v48 + 4) = 116;
        *(_DWORD *)v48 = 1970302569;
        *(_QWORD *)&v91 = 5;
        *((_QWORD *)&v91 + 1) = v48;
        v92 = 5;
        *(_QWORD *)&v84[8] = 0;
        *(_QWORD *)&v84[24] = 0;
        v84[0] = 5;
        sub_140E72AA0(v69, &v88, &v91, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        *(_OWORD *)&v76.m256i_u64[1] = v88;
        v76.m256i_i64[3] = v89;
        v76.m256i_i8[0] = 5;
        v96 = 0;
        sub_140E72AA0(v84, &v74, &v86, &v76);
        if ( v84[0] != 0xFF )
          sub_140409B40(v84);
        v31 = v74;
        *(_OWORD *)v84 = v74;
        v32 = v75;
        goto LABEL_58;
      }
      if ( v9 == 1 )
      {
        *(_QWORD *)&v86 = 0;
        v87 = 0;
        nullsub_1(v7);
        v10 = (_QWORD *)sub_140001650(8, 1);
        if ( !v10 )
          sub_141938D2B(1, 8);
        *v10 = 0x64695F746E657665LL;
        *(_QWORD *)&v88 = 8;
        v94 = v10;
        *((_QWORD *)&v88 + 1) = v10;
        v89 = 8;
        *(_QWORD *)&v74 = "finish";
        *((_QWORD *)&v74 + 1) = 6;
        sub_140DC11A0(&v76);
        *(_QWORD *)v84 = &v74;
        *(_QWORD *)&v84[8] = sub_140186EE0;
        *(_QWORD *)&v84[16] = &v76;
        *(_QWORD *)&v84[24] = sub_1400015F0;
        sub_1416ABFD0(&v91, &unk_141A4E41A, v84);
        if ( v76.m256i_i64[0] )
          sub_140001660(v76.m256i_i64[1], v76.m256i_i64[0], 1);
        v12 = *((const __m128i **)&v91 + 1);
        v13 = v92;
        v94 = *((_QWORD **)&v91 + 1);
        if ( v92 < 0 )
        {
          v14 = 0;
          goto LABEL_9;
        }
        if ( v92 )
        {
          nullsub_1(v11);
          v14 = 1;
          v33 = (__m128i *)sub_140001650(v13, 1);
          if ( !v33 )
          {
LABEL_9:
            v95 = 1;
            sub_141938D2B(v14, v13);
          }
          v34 = (__int64)v33;
          sub_1418F44E0(v33, v12, v13);
        }
        else
        {
          v34 = 1;
        }
        v69[0] = 3;
        *(_QWORD *)&v69[8] = v13;
        *(_QWORD *)&v69[16] = v34;
        *(_QWORD *)&v69[24] = v13;
        v95 = 0;
        sub_140E72AA0(v84, &v86, &v88, v69);
        if ( v84[0] != 0xFF )
          sub_140409B40(v84);
        if ( (_QWORD)v91 )
          sub_140001660(v94, v91, 1);
        nullsub_1(v38);
        v39 = (_DWORD *)sub_140001650(4, 1);
        if ( !v39 )
          sub_141938D2B(1, 4);
        *v39 = 1701869940;
        v76.m256i_i64[0] = 4;
        v76.m256i_i64[1] = (__int64)v39;
        v76.m256i_i64[2] = 4;
        nullsub_1(v40);
        v41 = (_QWORD *)sub_140001650(14, 1);
        v94 = v41;
        if ( !v41 )
          sub_141938D2B(1, 14);
        qmemcpy(v41, "session.finish", 14);
        v84[0] = 3;
        *(_QWORD *)&v84[8] = 14;
        *(_QWORD *)&v84[16] = v41;
        *(_QWORD *)&v84[24] = 14;
        sub_140E72AA0(v69, &v86, &v76, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        v31 = v86;
        *(_OWORD *)v84 = v86;
        v32 = v87;
      }
      else
      {
        *(_QWORD *)&v91 = 0;
        v92 = 0;
        nullsub_1(v7);
        v30 = (void *)sub_140001650(11, 1);
        if ( !v30 )
          sub_141938D2B(1, 11);
        qmemcpy(v30, "is_speaking", 11);
        v76.m256i_i64[0] = 11;
        v76.m256i_i64[1] = (__int64)v30;
        v76.m256i_i64[2] = 11;
        *(_WORD *)v84 = 1;
        sub_140E72AA0(v69, &v91, &v76, v84);
        if ( v69[0] != 0xFF )
          sub_140409B40(v69);
        v31 = v91;
        *(_OWORD *)v84 = v91;
        v32 = v92;
      }
LABEL_58:
      *(_QWORD *)&v84[16] = v32;
      v49 = v93;
      v93[9] = v32;
      *(_OWORD *)(v49 + 7) = v31;
      *((_BYTE *)v49 + 48) = 5;
      v50 = v49[3];
      v76.m256i_i64[0] = 0;
      *(_OWORD *)&v76.m256i_u64[1] = 1u;
      *(_QWORD *)&v84[16] = 1610612768;
      *(_QWORD *)v84 = &v76;
      *(_QWORD *)&v84[8] = &off_141A05538;
      if ( (unsigned __int8)sub_141642FA0(v49 + 6, v84) )
        sub_141939040(
          (unsigned int)aADisplayImplem_1,
          55,
          (unsigned int)&v90,
          (unsigned int)&unk_1419F2138,
          (__int64)&off_141A055F0);
      v92 = v76.m256i_i64[2];
      v91 = *(_OWORD *)v76.m256i_i8;
      a2 = v93;
      v15 = v93 + 11;
      v16 = 0x8000000000000000uLL;
      v93[11] = 0x8000000000000000uLL;
      *((_OWORD *)a2 + 6) = v91;
      a2[14] = v92;
      a2[16] = v50 + 24;
LABEL_60:
      v51 = (_QWORD *)a2[16];
      v83 = v15;
      sub_140944B60(v84, v51, a3);
      v52 = *(_QWORD *)v84;
      v53 = v93;
      if ( *(_QWORD *)v84 == -2 )
      {
LABEL_69:
        if ( *(_DWORD *)v84 != -2 )
          goto LABEL_73;
        goto LABEL_70;
      }
      if ( *(_DWORD *)v84 != -1 )
      {
        v82 = v85;
        v81 = *(_OWORD *)&v84[104];
        v80 = *(_OWORD *)&v84[88];
        v79 = *(_OWORD *)&v84[72];
        v78 = *(_OWORD *)&v84[56];
        v77 = *(_OWORD *)&v84[40];
        v76 = *(__m256i *)&v84[8];
        goto LABEL_69;
      }
      v72 = v16;
      v71 = v15;
      v93[11] = -1;
      v73 = v53 + 12;
      v54 = *v51 == -1;
      v94 = v51;
      if ( !v54 )
        sub_14040C610(v94);
      v17 = v94;
      *v94 = v72;
      v55 = v73[1];
      *(_OWORD *)(v17 + 1) = *v73;
      *(_OWORD *)(v17 + 3) = v55;
      v15 = v71;
LABEL_65:
      v83 = v15;
      sub_140944540(v84, v17, a3);
      v52 = *(_QWORD *)v84;
      if ( *(_QWORD *)v84 != -2 )
      {
        if ( *(_DWORD *)v84 == -1 )
        {
          v52 = -1;
          v53 = v93;
          goto LABEL_73;
        }
        v82 = v85;
        v81 = *(_OWORD *)&v84[104];
        v80 = *(_OWORD *)&v84[88];
        v79 = *(_OWORD *)&v84[72];
        v78 = *(_OWORD *)&v84[56];
        v77 = *(_OWORD *)&v84[40];
        v76 = *(__m256i *)&v84[8];
      }
      v53 = v93;
      if ( *(_DWORD *)v84 != -2 )
      {
LABEL_73:
        *(_QWORD *)v69 = v52;
        *(__m256i *)&v69[8] = v76;
        *(_OWORD *)&v69[40] = v77;
        *(_OWORD *)&v69[56] = v78;
        *(_OWORD *)&v69[72] = v79;
        *(_OWORD *)&v69[88] = v80;
        *(_OWORD *)&v69[104] = v81;
        v70 = v82;
        v57 = *v15;
        if ( *v15 == -1 )
          goto LABEL_82;
        v58 = 5;
        if ( v57 < 0 )
          v58 = v57 ^ 0x8000000000000000uLL;
        if ( v58 >= 4 )
        {
          v59 = 11;
          if ( v58 == 4 )
          {
            v57 = v53[12];
            v59 = 12;
            if ( (unsigned __int64)v57 > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_82;
          }
        }
        else
        {
          v57 = v53[12];
          v59 = 12;
        }
        if ( v57 )
          sub_140001660(v53[v59 + 1], v57, 1);
LABEL_82:
        if ( (_DWORD)v52 != -1 )
          sub_140409740(v69);
        v60 = v93;
        v61 = v93[4];
        v62 = *((unsigned int *)v93 + 10);
        if ( (_DWORD)v62 != 0 || v61 != 0 )
        {
          sub_1415141D0(v84, v61, v62, &off_1419F1918);
          *(_OWORD *)&v69[96] = *(_OWORD *)&v84[96];
          v63 = *(_OWORD *)&v84[80];
          *(_OWORD *)&v69[80] = *(_OWORD *)&v84[80];
          v64 = *(_OWORD *)&v84[64];
          *(_OWORD *)&v69[64] = *(_OWORD *)&v84[64];
          v65 = *(_OWORD *)v84;
          v66 = *(_OWORD *)&v84[16];
          v67 = *(_OWORD *)&v84[32];
          v68 = *(_OWORD *)&v84[48];
          *(_OWORD *)&v69[48] = *(_OWORD *)&v84[48];
          *(_OWORD *)&v69[32] = *(_OWORD *)&v84[32];
          *(_OWORD *)&v69[16] = *(_OWORD *)&v84[16];
          *(_OWORD *)v69 = *(_OWORD *)v84;
          *((_OWORD *)v15 + 6) = *(_OWORD *)&v84[96];
          *((_OWORD *)v15 + 5) = v63;
          *((_OWORD *)v15 + 4) = v64;
          *((_OWORD *)v15 + 3) = v68;
          *((_OWORD *)v15 + 2) = v67;
          *((_OWORD *)v15 + 1) = v66;
          *(_OWORD *)v15 = v65;
          a2 = v93;
LABEL_86:
          v94 = a2 + 11;
          if ( (unsigned __int8)sub_141514440(a2 + 11, a3) )
          {
            *a1 = -2;
            result = 4;
LABEL_95:
            v53 = v93;
            goto LABEL_96;
          }
          sub_14040CAE0(v94);
          v60 = v93;
        }
        v18 = v60[3] + 24;
        v60[11] = v18;
LABEL_90:
        sub_140943B70(v84, v18, a3);
        if ( *(_DWORD *)v84 == -2 )
        {
          *a1 = -2;
          result = 5;
        }
        else
        {
          sub_1418F44E0((__m128i *)v69, (const __m128i *)v84, 0x88u);
          if ( *(_DWORD *)v69 != -1 )
            sub_140409740(v69);
          sub_140409B40(v93 + 6);
          *a1 = -1;
          result = 1;
        }
        goto LABEL_95;
      }
LABEL_70:
      *a1 = -2;
      result = 3;
LABEL_96:
      *((_BYTE *)v53 + 80) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_1419F1900);
    case 2LL:
      sub_141939400(&off_1419F1900);
    case 3LL:
      v15 = a2 + 11;
      v16 = a2[11];
      if ( v16 != -1 )
        goto LABEL_60;
      v17 = (_QWORD *)a2[16];
      goto LABEL_65;
    case 4LL:
      goto LABEL_86;
    case 5LL:
      v18 = a2[11];
      goto LABEL_90;
  }
}
