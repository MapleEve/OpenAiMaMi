// module: codexmate_lib/core/voice/runtime
// addr: 0x140878660
// name: sub_140878660
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140878660(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // r14d
  bool v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  const char *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  void *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  void *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  void *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  _BYTE v53[312]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v54; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v55; // [rsp+1C0h] [rbp+140h]
  __int128 v56; // [rsp+1D0h] [rbp+150h]
  __int128 v57; // [rsp+1E0h] [rbp+160h]
  __int128 v58; // [rsp+1F0h] [rbp+170h]
  __int128 v59; // [rsp+200h] [rbp+180h]
  __int64 v60; // [rsp+210h] [rbp+190h]
  __int64 v61; // [rsp+218h] [rbp+198h]
  unsigned __int128 v62; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v63; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v64; // [rsp+250h] [rbp+1D0h] BYREF
  __m256i v65; // [rsp+260h] [rbp+1E0h]
  __int64 v66; // [rsp+280h] [rbp+200h] BYREF
  __int64 v67; // [rsp+288h] [rbp+208h]
  __int64 v68; // [rsp+290h] [rbp+210h]
  __int128 v69; // [rsp+298h] [rbp+218h]
  __int64 v70; // [rsp+2A8h] [rbp+228h]
  __int64 v71; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v72; // [rsp+2B8h] [rbp+238h]
  __int64 v73; // [rsp+2C0h] [rbp+240h]
  __int64 v74; // [rsp+2C8h] [rbp+248h]
  _DWORD *v75; // [rsp+2D0h] [rbp+250h]
  __int64 v76; // [rsp+2D8h] [rbp+258h]
  __int128 v77; // [rsp+2E0h] [rbp+260h]
  __int64 v78; // [rsp+2F0h] [rbp+270h]
  __int64 v79; // [rsp+2F8h] [rbp+278h]
  __int64 v80; // [rsp+300h] [rbp+280h]
  __int64 v81; // [rsp+308h] [rbp+288h]
  __int64 v82; // [rsp+310h] [rbp+290h]
  __int64 v83; // [rsp+318h] [rbp+298h]
  __int64 v84; // [rsp+320h] [rbp+2A0h]
  __int64 v85; // [rsp+338h] [rbp+2B8h]
  __int64 v86; // [rsp+370h] [rbp+2F0h]
  __int64 v87; // [rsp+380h] [rbp+300h]
  __int64 v88; // [rsp+390h] [rbp+310h]
  int v89; // [rsp+3A0h] [rbp+320h]
  __int16 v90; // [rsp+3A4h] [rbp+324h]
  char v91; // [rsp+3A6h] [rbp+326h]
  char v92; // [rsp+3A7h] [rbp+327h]
  char v93; // [rsp+3A8h] [rbp+328h]
  char v94; // [rsp+3A9h] [rbp+329h]
  __int128 v95; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v96; // [rsp+3C0h] [rbp+340h]
  __int64 v97; // [rsp+3C8h] [rbp+348h]
  __int64 v98; // [rsp+3D0h] [rbp+350h]
  int v99; // [rsp+3D8h] [rbp+358h]
  char v100; // [rsp+3DFh] [rbp+35Fh]
  __int64 v101; // [rsp+3E0h] [rbp+360h]

  v101 = -2;
  v4 = *(_QWORD *)(a2 + 744);
  v5 = *(_QWORD *)(a2 + 752);
  sub_141486710(v53, v4, v5);
  if ( *(_DWORD *)v53 == 2 )
  {
    *((_QWORD *)&v62 + 1) = *(_QWORD *)&v53[8];
    *(_QWORD *)&v62 = 2;
    goto LABEL_4;
  }
  v62 = *(_OWORD *)v53;
  v65.m256i_i64[2] = *(_QWORD *)&v53[80];
  *(_OWORD *)v65.m256i_i8 = *(_OWORD *)&v53[64];
  v64 = *(_OWORD *)&v53[48];
  v63 = *(__m256i *)&v53[16];
  if ( *(_QWORD *)v53 == 2 )
  {
LABEL_4:
    sub_140018650((char *)&v62 + 8);
    sub_1408881F0(v53);
    sub_14087B3D0(&v62, a2, v53);
    if ( (_DWORD)v62 == -1 )
    {
      sub_141684120(a1, v53, 400);
    }
    else
    {
      *(__m256i *)(a1 + 72) = v65;
      v6 = v62;
      v7 = *(_OWORD *)v63.m256i_i8;
      v8 = *(_OWORD *)&v63.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v64;
      *(_OWORD *)(a1 + 40) = v8;
      *(_OWORD *)(a1 + 24) = v7;
      *(_OWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = -1;
      sub_1407DB700((__int64)v53);
    }
    return;
  }
  sub_14148D130(v53, v4, v5);
  v9 = *(_QWORD *)&v53[8];
  if ( *(_QWORD *)v53 == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)a1 = -1;
    return;
  }
  v98 = *(_QWORD *)v53;
  v54 = *(_OWORD *)&v53[8];
  v55 = 0;
  v97 = *(_QWORD *)&v53[8];
  v56 = *(_OWORD *)&v53[8];
  sub_1408A8710(v53, &v54);
  v10 = *(_QWORD *)&v53[8];
  v11 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 != -1 )
  {
    sub_141684120(&v63, &v53[16], 384);
    v62 = __PAIR128__(v10, v11);
    v13 = v89;
    v14 = v89 < 7;
    if ( !v91 )
    {
      v91 = 1;
      v14 = 1;
    }
    if ( v81 != 6 || (v12 = *(_DWORD *)v80 ^ 0x74737973u, (unsigned int)v12 | *(unsigned __int16 *)(v80 + 4) ^ 0x6D65) )
    {
      nullsub_1(v12);
      v15 = sub_140001650(6, 1);
      if ( !v15 )
        sub_1416C2D4B(1, 6);
      v10 = v15;
      *(_WORD *)(v15 + 4) = 28005;
      *(_DWORD *)v15 = 1953724787;
      if ( v79 )
        sub_140001660(v80, v79, 1);
      v79 = 6;
      v80 = v10;
      v81 = 6;
      v14 = 1;
    }
    if ( v93 )
    {
      v93 = 0;
      v14 = 1;
    }
    if ( v90 != 20 )
    {
      v90 = 20;
      v14 = 1;
    }
    nullsub_1(v12);
    v16 = sub_140001650(6, 1);
    if ( !v16 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v16 + 4) = 12914;
    *(_DWORD *)v16 = 1702125943;
    if ( v84 == 6 && !(*(_DWORD *)v16 ^ *(_DWORD *)v83 | (unsigned __int16)(*(_WORD *)(v16 + 4) ^ *(_WORD *)(v83 + 4))) )
    {
      sub_140001660(v16, 6, 1);
      if ( !v85 )
        goto LABEL_29;
    }
    else
    {
      sub_140001660(v16, 6, 1);
      nullsub_1(v17);
      v18 = sub_140001650(6, 1);
      if ( !v18 )
        sub_1416C2D4B(1, 6);
      v10 = v18;
      *(_WORD *)(v18 + 4) = 12914;
      *(_DWORD *)v18 = 1702125943;
      if ( v82 )
        sub_140001660(v83, v82, 1);
      v82 = 6;
      v83 = v10;
      v84 = 6;
      v14 = 1;
      if ( !v85 )
      {
LABEL_29:
        if ( v76 != 4 || *v75 != 1869903201 )
        {
          nullsub_1(v19);
          v20 = (_DWORD *)sub_140001650(4, 1);
          if ( !v20 )
            sub_1416C2D4B(1, 4);
          v10 = (__int64)v20;
          *v20 = 1869903201;
          if ( v74 )
            sub_140001660(v75, v74, 1);
          v74 = 4;
          v75 = (_DWORD *)v10;
          v76 = 4;
          v14 = 1;
        }
        if ( v94 )
        {
          if ( v94 == 1 )
          {
            v21 = aAliyunfunasr;
            v22 = 12;
          }
          else
          {
            v21 = aOpenai_1;
            v22 = 6;
          }
          load_saved_config(v53, v21, v22);
          if ( *(_QWORD *)v53 == -1 )
          {
            v54 = *(_OWORD *)&v53[8];
            v59 = *(_OWORD *)&v53[88];
            v58 = *(_OWORD *)&v53[72];
            v57 = *(_OWORD *)&v53[56];
            v56 = *(_OWORD *)&v53[40];
            v55 = *(_OWORD *)&v53[24];
            if ( *(_QWORD *)&v53[8] == -1 )
            {
              if ( BYTE8(v54) )
                goto LABEL_58;
            }
            else
            {
              sub_1407DA310(&v54);
            }
          }
          else
          {
            v99 = v13;
            v23 = *(_QWORD *)&v53[24];
            v24 = *(_QWORD *)&v53[32];
            v61 = *(_QWORD *)&v53[56];
            v25 = *(_QWORD *)&v53[48];
            v10 = *(_QWORD *)&v53[72];
            v60 = *(_QWORD *)&v53[80];
            v100 = v53[96];
            if ( *(_QWORD *)v53 )
              sub_140001660(*(_QWORD *)&v53[8], *(_QWORD *)v53, 1);
            if ( v23 )
              sub_140001660(v24, v23, 1);
            if ( v25 )
              sub_140001660(v61, v25, 1);
            v13 = v99;
            if ( v10 )
              sub_140001660(v60, v10, 1);
            if ( (v100 & 1) != 0 )
              goto LABEL_58;
          }
          v94 = 0;
          v14 = 1;
        }
LABEL_58:
        sub_14033BC10(*((_QWORD *)&v62 + 1), v63.m256i_i64[0]);
        if ( !v27 )
        {
          nullsub_1(v26);
          v28 = (void *)sub_140001650(15, 1);
          if ( !v28 )
            sub_1416C2D4B(1, 15);
          v10 = (__int64)v28;
          qmemcpy(v28, "Cmd+Shift+Space", 15);
          if ( (_QWORD)v62 )
            sub_140001660(*((_QWORD *)&v62 + 1), v62, 1);
          *(_QWORD *)&v62 = 15;
          *((_QWORD *)&v62 + 1) = v10;
          v63.m256i_i64[0] = 15;
          v14 = 1;
        }
        if ( v86 > 0 )
        {
          sub_14033BC10(v63.m256i_i64[2], v63.m256i_i64[3]);
          if ( !v30 )
          {
            nullsub_1(v29);
            v31 = (void *)sub_140001650(12, 1);
            if ( !v31 )
              sub_1416C2D4B(1, 12);
            v10 = (__int64)v31;
            qmemcpy(v31, "Right Option", 12);
            if ( v63.m256i_i64[1] )
              sub_140001660(v63.m256i_i64[2], v63.m256i_i64[1], 1);
            v63.m256i_i64[1] = 12;
            v63.m256i_i64[2] = v10;
            v63.m256i_i64[3] = 12;
            v14 = 1;
          }
          sub_14033BC10(*((_QWORD *)&v64 + 1), v65.m256i_i64[0]);
          if ( !v33 )
          {
            nullsub_1(v32);
            v34 = (_QWORD *)sub_140001650(8, 1);
            if ( !v34 )
              sub_1416C2D4B(1, 8);
            v10 = (__int64)v34;
            *v34 = 0x7265696669646F6DLL;
            if ( (_QWORD)v64 )
              sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
            *(_QWORD *)&v64 = 8;
            *((_QWORD *)&v64 + 1) = v10;
            v65.m256i_i64[0] = 8;
            v14 = 1;
          }
        }
        if ( v87 > 0 )
        {
          sub_14033BC10(v65.m256i_i64[2], v65.m256i_i64[3]);
          if ( !v36 )
          {
            nullsub_1(v35);
            v37 = (void *)sub_140001650(12, 1);
            if ( !v37 )
              sub_1416C2D4B(1, 12);
            v10 = (__int64)v37;
            qmemcpy(v37, "Right Option", 12);
            if ( v65.m256i_i64[1] )
              sub_140001660(v65.m256i_i64[2], v65.m256i_i64[1], 1);
            v65.m256i_i64[1] = 12;
            v65.m256i_i64[2] = v10;
            v65.m256i_i64[3] = 12;
            v14 = 1;
          }
          sub_14033BC10(v67, v68);
          if ( !v39 )
          {
            nullsub_1(v38);
            v40 = (_QWORD *)sub_140001650(8, 1);
            if ( !v40 )
              sub_1416C2D4B(1, 8);
            v10 = (__int64)v40;
            *v40 = 0x7265696669646F6DLL;
            if ( v66 )
              sub_140001660(v67, v66, 1);
            v66 = 8;
            v67 = v10;
            v68 = 8;
            v14 = 1;
          }
        }
        if ( v88 > 0 )
        {
          sub_14033BC10(*((_QWORD *)&v69 + 1), v70);
          if ( !v42 )
          {
            nullsub_1(v41);
            v43 = (void *)sub_140001650(13, 1);
            if ( !v43 )
              sub_1416C2D4B(1, 13);
            v10 = (__int64)v43;
            qmemcpy(v43, "Right Control", 13);
            if ( (_QWORD)v69 )
              sub_140001660(*((_QWORD *)&v69 + 1), v69, 1);
            *(_QWORD *)&v69 = 13;
            *((_QWORD *)&v69 + 1) = v10;
            v70 = 13;
            v14 = 1;
          }
          sub_14033BC10(v72, v73);
          if ( !v45 )
          {
            nullsub_1(v44);
            v46 = (_QWORD *)sub_140001650(8, 1);
            if ( !v46 )
              sub_1416C2D4B(1, 8);
            v10 = (__int64)v46;
            *v46 = 0x7265696669646F6DLL;
            if ( v71 )
              sub_140001660(v72, v71, 1);
            v71 = 8;
            v72 = v10;
            v73 = 8;
            v14 = 1;
          }
        }
        sub_140885470(&v95, *((_QWORD *)&v77 + 1), v78);
        if ( v78 == v96 && !(unsigned int)sub_1416847B0(*((_QWORD *)&v77 + 1), *((_QWORD *)&v95 + 1), v78) )
        {
          LOBYTE(v10) = 1;
          v99 = v10;
          if ( v13 >= 7 )
            goto LABEL_116;
        }
        else
        {
          if ( (_QWORD)v77 )
            sub_140001660(*((_QWORD *)&v77 + 1), v77, 1);
          v78 = v96;
          v77 = v95;
          v14 = 1;
          LOBYTE(v10) = 0;
          v99 = 0;
          if ( v13 >= 7 )
          {
LABEL_116:
            if ( v14 )
            {
              sub_14087B3D0(v53, a2, &v62);
              if ( *(_DWORD *)v53 != -1 )
              {
                *(_OWORD *)(a1 + 88) = *(_OWORD *)&v53[80];
                *(_OWORD *)(a1 + 72) = *(_OWORD *)&v53[64];
                v50 = *(_OWORD *)v53;
                v51 = *(_OWORD *)&v53[16];
                v52 = *(_OWORD *)&v53[32];
                *(_OWORD *)(a1 + 56) = *(_OWORD *)&v53[48];
                *(_OWORD *)(a1 + 40) = v52;
                *(_OWORD *)(a1 + 24) = v51;
                *(_OWORD *)(a1 + 8) = v50;
                *(_QWORD *)a1 = -1;
                if ( (_BYTE)v99 && (_QWORD)v95 )
                  sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
                sub_1407DB700((__int64)&v62);
                goto LABEL_128;
              }
              LOBYTE(v10) = v99;
            }
            sub_141684120(a1, &v62, 400);
            if ( (_BYTE)v10 && (_QWORD)v95 )
              sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
            goto LABEL_128;
          }
        }
        if ( v92 == 1 )
        {
          v88 = v86;
          sub_14149C500(v53, &v63.m256i_u64[1]);
          if ( (_QWORD)v69 )
            sub_140001660(*((_QWORD *)&v69 + 1), v69, 1);
          v70 = *(_QWORD *)&v53[16];
          v69 = *(_OWORD *)v53;
          sub_14149C500(v53, &v64);
          v47 = &v71;
          v48 = v71;
          if ( !v71 )
            goto LABEL_111;
          v49 = v72;
        }
        else
        {
          v87 = v86;
          sub_14149C500(v53, &v63.m256i_u64[1]);
          if ( v65.m256i_i64[1] )
            sub_140001660(v65.m256i_i64[2], v65.m256i_i64[1], 1);
          v65.m256i_i64[3] = *(_QWORD *)&v53[16];
          *(_OWORD *)&v65.m256i_u64[1] = *(_OWORD *)v53;
          sub_14149C500(v53, &v64);
          v47 = &v66;
          v48 = v66;
          if ( !v66 )
            goto LABEL_111;
          v49 = v67;
        }
        sub_140001660(v49, v48, 1);
LABEL_111:
        v47[2] = *(_QWORD *)&v53[16];
        *(_OWORD *)v47 = *(_OWORD *)v53;
        sub_140881650(v53, &v62);
        v86 = *(_QWORD *)&v53[48];
        if ( v63.m256i_i64[1] )
          sub_140001660(v63.m256i_i64[2], v63.m256i_i64[1], 1);
        v63.m256i_i64[3] = *(_QWORD *)&v53[16];
        *(_OWORD *)&v63.m256i_u64[1] = *(_OWORD *)v53;
        if ( (_QWORD)v64 )
          sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
        v65.m256i_i64[0] = *(_QWORD *)&v53[40];
        v64 = *(_OWORD *)&v53[24];
        v89 = 7;
        LOBYTE(v10) = v99;
        goto LABEL_116;
      }
    }
    v85 = 0;
    v14 = 1;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 8) = 3;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)a1 = -1;
LABEL_128:
  if ( v98 )
    sub_140001660(v97, v98, 1);
}