// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406a19a0
// name: sub_1406A19A0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1406A19A0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
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
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  void *v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // rbx
  char result; // al
  _OWORD *v50; // rbx
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  __int128 v60; // xmm4
  __int128 v61; // xmm5
  __int128 v62; // xmm6
  __int128 v63; // [rsp+30h] [rbp-50h] BYREF
  __int128 v64; // [rsp+40h] [rbp-40h]
  __int128 v65; // [rsp+50h] [rbp-30h]
  __int128 v66; // [rsp+60h] [rbp-20h]
  __int128 v67; // [rsp+70h] [rbp-10h]
  __int128 v68; // [rsp+80h] [rbp+0h]
  __int128 v69; // [rsp+90h] [rbp+10h]
  __int128 v70; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v71; // [rsp+C8h] [rbp+48h]
  __int128 v72; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v73; // [rsp+E0h] [rbp+60h]
  __int128 v74; // [rsp+F0h] [rbp+70h]
  __int128 v75; // [rsp+100h] [rbp+80h]
  __int128 v76; // [rsp+110h] [rbp+90h]
  __int128 v77; // [rsp+120h] [rbp+A0h]
  __int128 v78; // [rsp+130h] [rbp+B0h]
  __int128 v79; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v80; // [rsp+168h] [rbp+E8h]
  __int128 v81; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v82; // [rsp+180h] [rbp+100h]
  _BYTE v83[24]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v84; // [rsp+1A0h] [rbp+120h]
  char v85; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int128 v86; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v87; // [rsp+1C0h] [rbp+140h]
  __int64 *v88; // [rsp+1D0h] [rbp+150h]
  _QWORD *v89; // [rsp+1D8h] [rbp+158h]
  char v90; // [rsp+1E4h] [rbp+164h]
  char v91; // [rsp+1E5h] [rbp+165h]
  char v92; // [rsp+1E6h] [rbp+166h]
  char v93; // [rsp+1E7h] [rbp+167h]
  __int64 v94; // [rsp+1E8h] [rbp+168h]

  v94 = -2;
  v6 = *((unsigned __int8 *)a2 + 80);
  v88 = a2;
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
        *(_QWORD *)&v70 = 0;
        v71 = 0;
        nullsub_1(v8);
        v17 = sub_140001650(6, 1);
        if ( !v17 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v17 + 4) = 29285;
        *(_DWORD *)v17 = 1684104552;
        *(_QWORD *)&v79 = 6;
        *((_QWORD *)&v79 + 1) = v17;
        v80 = 6;
        *(_QWORD *)&v81 = 0;
        v82 = 0;
        nullsub_1(v18);
        v19 = sub_140001650(6, 1);
        if ( !v19 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v19 + 4) = 28271;
        *(_DWORD *)v19 = 1769235297;
        *(_QWORD *)&v86 = 6;
        *((_QWORD *)&v86 + 1) = v19;
        v87 = 6;
        nullsub_1(v20);
        v21 = (_QWORD *)sub_140001650(11, 1);
        v89 = v21;
        if ( !v21 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v21, "finish-task", 11);
        LOBYTE(v72) = 3;
        *((_QWORD *)&v72 + 1) = 11;
        *(_QWORD *)&v73 = v21;
        *((_QWORD *)&v73 + 1) = 11;
        sub_140307860(&v63, &v81, &v86, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        nullsub_1(v22);
        v23 = (_DWORD *)sub_140001650(7, 1);
        if ( !v23 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v23 + 3) = 1684627307;
        *v23 = 1802723700;
        *(_QWORD *)&v86 = 7;
        *((_QWORD *)&v86 + 1) = v23;
        v87 = 7;
        v25 = v88[3];
        v26 = *(_QWORD *)(v25 + 16);
        if ( v26 < 0 )
        {
          v27 = 0;
          goto LABEL_19;
        }
        if ( v26 )
        {
          v33 = *(_QWORD *)(v25 + 8);
          nullsub_1(v24);
          v27 = 1;
          v34 = sub_140001650(v26, 1);
          if ( !v34 )
          {
LABEL_19:
            v93 = 1;
            sub_1416C2D4B(v27, v26);
          }
          v35 = v34;
          sub_141684120(v34, v33, v26);
        }
        else
        {
          v35 = 1;
        }
        LOBYTE(v72) = 3;
        *((_QWORD *)&v72 + 1) = v26;
        *(_QWORD *)&v73 = v35;
        *((_QWORD *)&v73 + 1) = v26;
        v93 = 0;
        sub_140307860(&v63, &v81, &v86, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        nullsub_1(v40);
        v41 = sub_140001650(9, 1);
        if ( !v41 )
          sub_1416C2D4B(1, 9);
        *(_QWORD *)v41 = 0x6E696D6165727473LL;
        *(_BYTE *)(v41 + 8) = 103;
        *(_QWORD *)&v86 = 9;
        *((_QWORD *)&v86 + 1) = v41;
        v87 = 9;
        nullsub_1(0x6E696D6165727473LL);
        v42 = sub_140001650(6, 1);
        v89 = (_QWORD *)v42;
        if ( !v42 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v42 + 4) = 30821;
        *(_DWORD *)v42 = 1819309412;
        LOBYTE(v72) = 3;
        *((_QWORD *)&v72 + 1) = 6;
        *(_QWORD *)&v73 = v42;
        *((_QWORD *)&v73 + 1) = 6;
        sub_140307860(&v63, &v81, &v86, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        *(_OWORD *)&v83[8] = v81;
        v84 = v82;
        v83[0] = 5;
        v92 = 0;
        sub_140307860(&v72, &v70, &v79, v83);
        if ( (_BYTE)v72 != 0xFF )
          sub_1400104F0(&v72);
        nullsub_1(v43);
        v44 = (_DWORD *)sub_140001650(7, 1);
        if ( !v44 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v44 + 3) = 1684107116;
        *v44 = 1819894128;
        *(_QWORD *)&v79 = 7;
        *((_QWORD *)&v79 + 1) = v44;
        v80 = 7;
        *(_QWORD *)&v81 = 0;
        v82 = 0;
        nullsub_1(v45);
        v46 = sub_140001650(5, 1);
        if ( !v46 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v46 + 4) = 116;
        *(_DWORD *)v46 = 1970302569;
        *(_QWORD *)&v86 = 5;
        *((_QWORD *)&v86 + 1) = v46;
        v87 = 5;
        *((_QWORD *)&v72 + 1) = 0;
        *((_QWORD *)&v73 + 1) = 0;
        LOBYTE(v72) = 5;
        sub_140307860(&v63, &v81, &v86, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        *(_OWORD *)&v83[8] = v81;
        v84 = v82;
        v83[0] = 5;
        v91 = 0;
        sub_140307860(&v72, &v70, &v79, v83);
        if ( (_BYTE)v72 != 0xFF )
          sub_1400104F0(&v72);
        v29 = v70;
        v72 = v70;
        v30 = v71;
        goto LABEL_56;
      }
      if ( v10 == 1 )
      {
        *(_QWORD *)&v79 = 0;
        v80 = 0;
        nullsub_1(v8);
        v11 = (_QWORD *)sub_140001650(8, 1);
        if ( !v11 )
          sub_1416C2D4B(1, 8);
        *v11 = 0x64695F746E657665LL;
        *(_QWORD *)&v81 = 8;
        v89 = v11;
        *((_QWORD *)&v81 + 1) = v11;
        v82 = 8;
        *(_QWORD *)&v70 = "finish";
        *((_QWORD *)&v70 + 1) = 6;
        sub_140AECBC0(v83);
        *(_QWORD *)&v72 = &v70;
        *((_QWORD *)&v72 + 1) = sub_14041F680;
        *(_QWORD *)&v73 = v83;
        *((_QWORD *)&v73 + 1) = sub_1400015F0;
        sub_14149C0F0(&v86, &unk_1417B0AAF, &v72);
        if ( *(_QWORD *)v83 )
          sub_140001660(*(_QWORD *)&v83[8], *(_QWORD *)v83, 1);
        v13 = *((_QWORD *)&v86 + 1);
        v14 = v87;
        v89 = *((_QWORD **)&v86 + 1);
        if ( v87 < 0 )
        {
          v15 = 0;
          goto LABEL_9;
        }
        if ( v87 )
        {
          nullsub_1(v12);
          v15 = 1;
          v31 = sub_140001650(v14, 1);
          if ( !v31 )
          {
LABEL_9:
            v90 = 1;
            sub_1416C2D4B(v15, v14);
          }
          v32 = v31;
          sub_141684120(v31, v13, v14);
        }
        else
        {
          v32 = 1;
        }
        LOBYTE(v63) = 3;
        *((_QWORD *)&v63 + 1) = v14;
        *(_QWORD *)&v64 = v32;
        *((_QWORD *)&v64 + 1) = v14;
        v90 = 0;
        sub_140307860(&v72, &v79, &v81, &v63);
        if ( (_BYTE)v72 != 0xFF )
          sub_1400104F0(&v72);
        if ( (_QWORD)v86 )
          sub_140001660(v89, v86, 1);
        nullsub_1(v36);
        v37 = (_DWORD *)sub_140001650(4, 1);
        if ( !v37 )
          sub_1416C2D4B(1, 4);
        *v37 = 1701869940;
        *(_QWORD *)v83 = 4;
        *(_QWORD *)&v83[8] = v37;
        *(_QWORD *)&v83[16] = 4;
        nullsub_1(v38);
        v39 = (_QWORD *)sub_140001650(14, 1);
        v89 = v39;
        if ( !v39 )
          sub_1416C2D4B(1, 14);
        qmemcpy(v39, "session.finish", 14);
        LOBYTE(v72) = 3;
        *((_QWORD *)&v72 + 1) = 14;
        *(_QWORD *)&v73 = v39;
        *((_QWORD *)&v73 + 1) = 14;
        sub_140307860(&v63, &v79, v83, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        v29 = v79;
        v72 = v79;
        v30 = v80;
      }
      else
      {
        *(_QWORD *)&v86 = 0;
        v87 = 0;
        nullsub_1(v8);
        v28 = (void *)sub_140001650(11, 1);
        if ( !v28 )
          sub_1416C2D4B(1, 11);
        qmemcpy(v28, "is_speaking", 11);
        *(_QWORD *)v83 = 11;
        *(_QWORD *)&v83[8] = v28;
        *(_QWORD *)&v83[16] = 11;
        LOWORD(v72) = 1;
        sub_140307860(&v63, &v86, v83, &v72);
        if ( (_BYTE)v63 != 0xFF )
          sub_1400104F0(&v63);
        v29 = v86;
        v72 = v86;
        v30 = v87;
      }
LABEL_56:
      *(_QWORD *)&v73 = v30;
      v47 = v88;
      v88[9] = v30;
      *(_OWORD *)(v47 + 7) = v29;
      *((_BYTE *)v47 + 48) = 5;
      v48 = v47[3];
      *(_QWORD *)v83 = 0;
      *(_QWORD *)&v83[8] = 1;
      *(_QWORD *)&v83[16] = 0;
      *(_QWORD *)&v73 = 1610612768;
      *(_QWORD *)&v72 = v83;
      *((_QWORD *)&v72 + 1) = &off_141783B88;
      if ( (unsigned __int8)sub_14142EA10(v47 + 6, &v72) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_5,
          55,
          (unsigned int)&v85,
          (unsigned int)&unk_141782720,
          (__int64)&off_141783C40);
      v87 = *(_QWORD *)&v83[16];
      v86 = *(_OWORD *)v83;
      a2 = v88;
      v88[11] = 0x8000000000000000uLL;
      *((_OWORD *)a2 + 6) = v86;
      a2[14] = v87;
      a2[16] = v48 + 24;
LABEL_58:
      v89 = a2 + 11;
      sub_140B96790(&v72, a2 + 11, a3);
      if ( (_DWORD)v72 == -2 )
      {
        *a1 = -2;
        result = 3;
        goto LABEL_82;
      }
      sub_141684120(&v63, &v72, 136);
      v50 = v89;
      v51 = *v89;
      if ( *v89 != -1 )
      {
        v52 = 5;
        if ( v51 < 0 )
          v52 = v51 ^ 0x8000000000000000uLL;
        if ( v52 < 4 )
        {
          v51 = v88[12];
          v53 = 12;
          goto LABEL_67;
        }
        v53 = 11;
        if ( v52 != 4 || (v51 = v88[12], v53 = 12, (unsigned __int64)v51 <= 0xFFFFFFFFFFFFFFFDuLL) )
        {
LABEL_67:
          if ( v51 )
            sub_140001660(v88[v53 + 1], v51, 1);
        }
      }
      if ( (_DWORD)v63 != -1 )
        sub_14068B080((__int64)&v63);
      v54 = v88;
      v55 = v88[4];
      v56 = *((unsigned int *)v88 + 10);
      if ( (_DWORD)v56 != 0 || v55 != 0 )
      {
        sub_1412F1530(&v72, v55, v56, &off_141781F38);
        v69 = v78;
        v57 = v77;
        v68 = v77;
        v58 = v76;
        v67 = v76;
        v59 = v72;
        v60 = v73;
        v61 = v74;
        v62 = v75;
        v66 = v75;
        v65 = v74;
        v64 = v73;
        v63 = v72;
        v50[6] = v78;
        v50[5] = v57;
        v50[4] = v58;
        v50[3] = v62;
        v50[2] = v61;
        v50[1] = v60;
        *v50 = v59;
        a2 = v88;
LABEL_73:
        v89 = a2 + 11;
        if ( (unsigned __int8)sub_1412F1D10(a2 + 11, a3) )
        {
          *a1 = -2;
          result = 4;
          goto LABEL_82;
        }
        sub_14052DE20(v89);
        v54 = v88;
      }
      v16 = v54[3] + 24;
      v54[11] = v16;
LABEL_77:
      sub_1406B6A80(&v72, v16, a3);
      if ( (_DWORD)v72 == -2 )
      {
        *a1 = -2;
        result = 5;
      }
      else
      {
        sub_141684120(&v63, &v72, 136);
        if ( (_DWORD)v63 != -1 )
          sub_14068B080((__int64)&v63);
        sub_1400104F0(v88 + 6);
        *a1 = -1;
        result = 1;
      }
LABEL_82:
      *((_BYTE *)v88 + 80) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_141781F20, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141781F20, a2, a3, a4);
    case 3LL:
      goto LABEL_58;
    case 4LL:
      goto LABEL_73;
    case 5LL:
      v16 = a2[11];
      goto LABEL_77;
  }
}