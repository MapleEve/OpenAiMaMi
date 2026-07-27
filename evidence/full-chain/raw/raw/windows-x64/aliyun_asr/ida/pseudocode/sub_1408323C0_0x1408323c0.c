// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1408323c0
// name: sub_1408323C0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1408323C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 *v16; // r14
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r12
  void *v31; // rax
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rbx
  _QWORD *v52; // r15
  __int64 v53; // rbx
  __int64 *v54; // r8
  bool v55; // zf
  __int128 v56; // xmm1
  char result; // al
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 *v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int128 v66; // xmm3
  __int128 v67; // xmm4
  __int128 v68; // xmm5
  __int128 v69; // xmm6
  _BYTE v70[120]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v71; // [rsp+A8h] [rbp+28h]
  __int64 *v72; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v73; // [rsp+C8h] [rbp+48h]
  _OWORD *v74; // [rsp+D0h] [rbp+50h]
  __int128 v75; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v76; // [rsp+E8h] [rbp+68h]
  __m256i v77; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v78; // [rsp+110h] [rbp+90h]
  __int128 v79; // [rsp+120h] [rbp+A0h]
  __int128 v80; // [rsp+130h] [rbp+B0h]
  __int128 v81; // [rsp+140h] [rbp+C0h]
  __int128 v82; // [rsp+150h] [rbp+D0h]
  __int128 v83; // [rsp+160h] [rbp+E0h]
  __int64 *v84; // [rsp+178h] [rbp+F8h]
  _BYTE v85[120]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v86; // [rsp+1F8h] [rbp+178h]
  __int128 v87; // [rsp+208h] [rbp+188h] BYREF
  __int64 v88; // [rsp+218h] [rbp+198h]
  __int128 v89; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v90; // [rsp+230h] [rbp+1B0h]
  char v91; // [rsp+23Fh] [rbp+1BFh] BYREF
  __int128 v92; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v93; // [rsp+250h] [rbp+1D0h]
  __int64 *v94; // [rsp+260h] [rbp+1E0h]
  _QWORD *v95; // [rsp+268h] [rbp+1E8h]
  char v96; // [rsp+274h] [rbp+1F4h]
  char v97; // [rsp+275h] [rbp+1F5h]
  char v98; // [rsp+276h] [rbp+1F6h]
  char v99; // [rsp+277h] [rbp+1F7h]
  __int64 v100; // [rsp+278h] [rbp+1F8h]

  v100 = -2;
  v6 = *((unsigned __int8 *)a2 + 80);
  v94 = a2;
  switch ( v6 )
  {
    case 0LL:
      v7 = a2[2];
      a2[3] = v7;
      v8 = *a2;
      v9 = *((_DWORD *)a2 + 2);
      a2[4] = *a2;
      *((_DWORD *)a2 + 10) = v9;
      v10 = *(unsigned __int8 *)(v7 + 96);
      if ( !v10 )
      {
        *(_QWORD *)&v75 = 0;
        v76 = 0;
        nullsub_1(v8);
        v20 = sub_140001650(6, 1);
        if ( !v20 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v20 + 4) = 29285;
        *(_DWORD *)v20 = 1684104552;
        *(_QWORD *)&v87 = 6;
        *((_QWORD *)&v87 + 1) = v20;
        v88 = 6;
        *(_QWORD *)&v89 = 0;
        v90 = 0;
        nullsub_1(v21);
        v22 = sub_140001650(6, 1);
        if ( !v22 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v22 + 4) = 28271;
        *(_DWORD *)v22 = 1769235297;
        *(_QWORD *)&v92 = 6;
        *((_QWORD *)&v92 + 1) = v22;
        v93 = 6;
        nullsub_1(v23);
        v24 = (_QWORD *)sub_140001650(11, 1);
        v95 = v24;
        if ( !v24 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v24, "finish-task", 11);
        v85[0] = 3;
        *(_QWORD *)&v85[8] = 11;
        *(_QWORD *)&v85[16] = v24;
        *(_QWORD *)&v85[24] = 11;
        sub_140307860(v70, &v89, &v92, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        nullsub_1(v25);
        v26 = (_DWORD *)sub_140001650(7, 1);
        if ( !v26 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v26 + 3) = 1684627307;
        *v26 = 1802723700;
        *(_QWORD *)&v92 = 7;
        *((_QWORD *)&v92 + 1) = v26;
        v93 = 7;
        v28 = v94[3];
        v29 = *(_QWORD *)(v28 + 16);
        if ( v29 < 0 )
        {
          v30 = 0;
          goto LABEL_21;
        }
        if ( v29 )
        {
          v36 = *(_QWORD *)(v28 + 8);
          nullsub_1(v27);
          v30 = 1;
          v37 = sub_140001650(v29, 1);
          if ( !v37 )
          {
LABEL_21:
            v99 = 1;
            sub_1416C2D4B(v30, v29);
          }
          v38 = v37;
          sub_141684120(v37, v36, v29);
        }
        else
        {
          v38 = 1;
        }
        v85[0] = 3;
        *(_QWORD *)&v85[8] = v29;
        *(_QWORD *)&v85[16] = v38;
        *(_QWORD *)&v85[24] = v29;
        v99 = 0;
        sub_140307860(v70, &v89, &v92, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        nullsub_1(v43);
        v44 = sub_140001650(9, 1);
        if ( !v44 )
          sub_1416C2D4B(1, 9);
        *(_QWORD *)v44 = 0x6E696D6165727473LL;
        *(_BYTE *)(v44 + 8) = 103;
        *(_QWORD *)&v92 = 9;
        *((_QWORD *)&v92 + 1) = v44;
        v93 = 9;
        nullsub_1(0x6E696D6165727473LL);
        v45 = sub_140001650(6, 1);
        v95 = (_QWORD *)v45;
        if ( !v45 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v45 + 4) = 30821;
        *(_DWORD *)v45 = 1819309412;
        v85[0] = 3;
        *(_QWORD *)&v85[8] = 6;
        *(_QWORD *)&v85[16] = v45;
        *(_QWORD *)&v85[24] = 6;
        sub_140307860(v70, &v89, &v92, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        *(_OWORD *)&v77.m256i_u64[1] = v89;
        v77.m256i_i64[3] = v90;
        v77.m256i_i8[0] = 5;
        v98 = 0;
        sub_140307860(v85, &v75, &v87, &v77);
        if ( v85[0] != 0xFF )
          sub_1400104F0(v85);
        nullsub_1(v46);
        v47 = (_DWORD *)sub_140001650(7, 1);
        if ( !v47 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v47 + 3) = 1684107116;
        *v47 = 1819894128;
        *(_QWORD *)&v87 = 7;
        *((_QWORD *)&v87 + 1) = v47;
        v88 = 7;
        *(_QWORD *)&v89 = 0;
        v90 = 0;
        nullsub_1(v48);
        v49 = sub_140001650(5, 1);
        if ( !v49 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v49 + 4) = 116;
        *(_DWORD *)v49 = 1970302569;
        *(_QWORD *)&v92 = 5;
        *((_QWORD *)&v92 + 1) = v49;
        v93 = 5;
        *(_QWORD *)&v85[8] = 0;
        *(_QWORD *)&v85[24] = 0;
        v85[0] = 5;
        sub_140307860(v70, &v89, &v92, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        *(_OWORD *)&v77.m256i_u64[1] = v89;
        v77.m256i_i64[3] = v90;
        v77.m256i_i8[0] = 5;
        v97 = 0;
        sub_140307860(v85, &v75, &v87, &v77);
        if ( v85[0] != 0xFF )
          sub_1400104F0(v85);
        v32 = v75;
        *(_OWORD *)v85 = v75;
        v33 = v76;
        goto LABEL_58;
      }
      if ( v10 == 1 )
      {
        *(_QWORD *)&v87 = 0;
        v88 = 0;
        nullsub_1(v8);
        v11 = (_QWORD *)sub_140001650(8, 1);
        if ( !v11 )
          sub_1416C2D4B(1, 8);
        *v11 = 0x64695F746E657665LL;
        *(_QWORD *)&v89 = 8;
        v95 = v11;
        *((_QWORD *)&v89 + 1) = v11;
        v90 = 8;
        *(_QWORD *)&v75 = "finish";
        *((_QWORD *)&v75 + 1) = 6;
        sub_140AECBC0(&v77);
        *(_QWORD *)v85 = &v75;
        *(_QWORD *)&v85[8] = sub_14041F680;
        *(_QWORD *)&v85[16] = &v77;
        *(_QWORD *)&v85[24] = sub_1400015F0;
        sub_14149C0F0(&v92, &unk_1417B0AAF, v85);
        if ( v77.m256i_i64[0] )
          sub_140001660(v77.m256i_i64[1], v77.m256i_i64[0], 1);
        v13 = *((_QWORD *)&v92 + 1);
        v14 = v93;
        v95 = *((_QWORD **)&v92 + 1);
        if ( v93 < 0 )
        {
          v15 = 0;
          goto LABEL_9;
        }
        if ( v93 )
        {
          nullsub_1(v12);
          v15 = 1;
          v34 = sub_140001650(v14, 1);
          if ( !v34 )
          {
LABEL_9:
            v96 = 1;
            sub_1416C2D4B(v15, v14);
          }
          v35 = v34;
          sub_141684120(v34, v13, v14);
        }
        else
        {
          v35 = 1;
        }
        v70[0] = 3;
        *(_QWORD *)&v70[8] = v14;
        *(_QWORD *)&v70[16] = v35;
        *(_QWORD *)&v70[24] = v14;
        v96 = 0;
        sub_140307860(v85, &v87, &v89, v70);
        if ( v85[0] != 0xFF )
          sub_1400104F0(v85);
        if ( (_QWORD)v92 )
          sub_140001660(v95, v92, 1);
        nullsub_1(v39);
        v40 = (_DWORD *)sub_140001650(4, 1);
        if ( !v40 )
          sub_1416C2D4B(1, 4);
        *v40 = 1701869940;
        v77.m256i_i64[0] = 4;
        v77.m256i_i64[1] = (__int64)v40;
        v77.m256i_i64[2] = 4;
        nullsub_1(v41);
        v42 = (_QWORD *)sub_140001650(14, 1);
        v95 = v42;
        if ( !v42 )
          sub_1416C2D4B(1, 14);
        qmemcpy(v42, "session.finish", 14);
        v85[0] = 3;
        *(_QWORD *)&v85[8] = 14;
        *(_QWORD *)&v85[16] = v42;
        *(_QWORD *)&v85[24] = 14;
        sub_140307860(v70, &v87, &v77, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        v32 = v87;
        *(_OWORD *)v85 = v87;
        v33 = v88;
      }
      else
      {
        *(_QWORD *)&v92 = 0;
        v93 = 0;
        nullsub_1(v8);
        v31 = (void *)sub_140001650(11, 1);
        if ( !v31 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v31, "is_speaking", 11);
        v77.m256i_i64[0] = 11;
        v77.m256i_i64[1] = (__int64)v31;
        v77.m256i_i64[2] = 11;
        *(_WORD *)v85 = 1;
        sub_140307860(v70, &v92, &v77, v85);
        if ( v70[0] != 0xFF )
          sub_1400104F0(v70);
        v32 = v92;
        *(_OWORD *)v85 = v92;
        v33 = v93;
      }
LABEL_58:
      *(_QWORD *)&v85[16] = v33;
      v50 = v94;
      v94[9] = v33;
      *(_OWORD *)(v50 + 7) = v32;
      *((_BYTE *)v50 + 48) = 5;
      v51 = v50[3];
      v77.m256i_i64[0] = 0;
      *(_OWORD *)&v77.m256i_u64[1] = 1u;
      *(_QWORD *)&v85[16] = 1610612768;
      *(_QWORD *)v85 = &v77;
      *(_QWORD *)&v85[8] = &off_141799500;
      if ( (unsigned __int8)sub_14142EA10(v50 + 6, v85) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v91,
          (unsigned int)&unk_141796270,
          (__int64)&off_1417995B8);
      v93 = v77.m256i_i64[2];
      v92 = *(_OWORD *)v77.m256i_i8;
      a2 = v94;
      v16 = v94 + 11;
      v17 = 0x8000000000000000uLL;
      v94[11] = 0x8000000000000000uLL;
      *((_OWORD *)a2 + 6) = v92;
      a2[14] = v93;
      a2[16] = v51 + 24;
LABEL_60:
      v52 = (_QWORD *)a2[16];
      v84 = v16;
      sub_1406B7100(v85, v52, a3);
      v53 = *(_QWORD *)v85;
      v54 = v94;
      if ( *(_QWORD *)v85 == -2 )
      {
LABEL_69:
        if ( *(_DWORD *)v85 != -2 )
          goto LABEL_73;
        goto LABEL_70;
      }
      if ( *(_DWORD *)v85 != -1 )
      {
        v83 = v86;
        v82 = *(_OWORD *)&v85[104];
        v81 = *(_OWORD *)&v85[88];
        v80 = *(_OWORD *)&v85[72];
        v79 = *(_OWORD *)&v85[56];
        v78 = *(_OWORD *)&v85[40];
        v77 = *(__m256i *)&v85[8];
        goto LABEL_69;
      }
      v73 = v17;
      v72 = v16;
      v94[11] = -1;
      v74 = v54 + 12;
      v55 = *v52 == -1;
      v95 = v52;
      if ( !v55 )
        sub_14052DEF0(v95);
      v18 = v95;
      *v95 = v73;
      v56 = v74[1];
      *(_OWORD *)(v18 + 1) = *v74;
      *(_OWORD *)(v18 + 3) = v56;
      v16 = v72;
LABEL_65:
      v84 = v16;
      sub_1406B6DC0(v85, v18, a3);
      v53 = *(_QWORD *)v85;
      if ( *(_QWORD *)v85 != -2 )
      {
        if ( *(_DWORD *)v85 == -1 )
        {
          v53 = -1;
          v54 = v94;
          goto LABEL_73;
        }
        v83 = v86;
        v82 = *(_OWORD *)&v85[104];
        v81 = *(_OWORD *)&v85[88];
        v80 = *(_OWORD *)&v85[72];
        v79 = *(_OWORD *)&v85[56];
        v78 = *(_OWORD *)&v85[40];
        v77 = *(__m256i *)&v85[8];
      }
      v54 = v94;
      if ( *(_DWORD *)v85 != -2 )
      {
LABEL_73:
        *(_QWORD *)v70 = v53;
        *(__m256i *)&v70[8] = v77;
        *(_OWORD *)&v70[40] = v78;
        *(_OWORD *)&v70[56] = v79;
        *(_OWORD *)&v70[72] = v80;
        *(_OWORD *)&v70[88] = v81;
        *(_OWORD *)&v70[104] = v82;
        v71 = v83;
        v58 = *v16;
        if ( *v16 == -1 )
          goto LABEL_82;
        v59 = 5;
        if ( v58 < 0 )
          v59 = v58 ^ 0x8000000000000000uLL;
        if ( v59 >= 4 )
        {
          v60 = 11;
          if ( v59 == 4 )
          {
            v58 = v54[12];
            v60 = 12;
            if ( (unsigned __int64)v58 > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_82;
          }
        }
        else
        {
          v58 = v54[12];
          v60 = 12;
        }
        if ( v58 )
          sub_140001660(v54[v60 + 1], v58, 1);
LABEL_82:
        if ( (_DWORD)v53 != -1 )
          sub_1407D8CA0(v70);
        v61 = v94;
        v62 = v94[4];
        v63 = *((unsigned int *)v94 + 10);
        if ( (_DWORD)v63 != 0 || v62 != 0 )
        {
          sub_1412F1530(v85, v62, v63, &off_141795A10);
          *(_OWORD *)&v70[96] = *(_OWORD *)&v85[96];
          v64 = *(_OWORD *)&v85[80];
          *(_OWORD *)&v70[80] = *(_OWORD *)&v85[80];
          v65 = *(_OWORD *)&v85[64];
          *(_OWORD *)&v70[64] = *(_OWORD *)&v85[64];
          v66 = *(_OWORD *)v85;
          v67 = *(_OWORD *)&v85[16];
          v68 = *(_OWORD *)&v85[32];
          v69 = *(_OWORD *)&v85[48];
          *(_OWORD *)&v70[48] = *(_OWORD *)&v85[48];
          *(_OWORD *)&v70[32] = *(_OWORD *)&v85[32];
          *(_OWORD *)&v70[16] = *(_OWORD *)&v85[16];
          *(_OWORD *)v70 = *(_OWORD *)v85;
          *((_OWORD *)v16 + 6) = *(_OWORD *)&v85[96];
          *((_OWORD *)v16 + 5) = v64;
          *((_OWORD *)v16 + 4) = v65;
          *((_OWORD *)v16 + 3) = v69;
          *((_OWORD *)v16 + 2) = v68;
          *((_OWORD *)v16 + 1) = v67;
          *(_OWORD *)v16 = v66;
          a2 = v94;
LABEL_86:
          v95 = a2 + 11;
          if ( (unsigned __int8)sub_1412F1D10(a2 + 11, a3) )
          {
            *a1 = -2;
            result = 4;
LABEL_95:
            v54 = v94;
            goto LABEL_96;
          }
          sub_1405E6D10(v95);
          v61 = v94;
        }
        v19 = v61[3] + 24;
        v61[11] = v19;
LABEL_90:
        sub_1406B6A80(v85, v19, a3);
        if ( *(_DWORD *)v85 == -2 )
        {
          *a1 = -2;
          result = 5;
        }
        else
        {
          sub_141684120(v70, v85, 136);
          if ( *(_DWORD *)v70 != -1 )
            sub_1407D8CA0(v70);
          sub_1400104F0(v94 + 6);
          *a1 = -1;
          result = 1;
        }
        goto LABEL_95;
      }
LABEL_70:
      *a1 = -2;
      result = 3;
LABEL_96:
      *((_BYTE *)v54 + 80) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417959F8, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417959F8, a2, a3, a4);
    case 3LL:
      v16 = a2 + 11;
      v17 = a2[11];
      if ( v17 != -1 )
        goto LABEL_60;
      v18 = (_QWORD *)a2[16];
      goto LABEL_65;
    case 4LL:
      goto LABEL_86;
    case 5LL:
      v19 = a2[11];
      goto LABEL_90;
  }
}