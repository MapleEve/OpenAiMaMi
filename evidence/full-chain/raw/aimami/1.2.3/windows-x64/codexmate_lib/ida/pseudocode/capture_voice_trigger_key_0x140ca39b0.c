// module: codexmate_lib
// addr: 0x140ca39b0
// name: capture_voice_trigger_key
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = capture_voice_trigger_key | mapped via command-name string xref (win-native, ground-truth)
char __fastcall capture_voice_trigger_key(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  _BYTE *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  char v9; // r14
  __int64 v10; // r15
  const char *v11; // r13
  __int128 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _BYTE *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  const char *v30; // r14
  unsigned __int64 v31; // r13
  _BYTE *v32; // rdx
  __int64 v33; // rbx
  const char *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  char v40; // cl
  char result; // al
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rsi
  __int128 v47; // [rsp+30h] [rbp-50h]
  __int128 v48; // [rsp+40h] [rbp-40h]
  __int128 v49; // [rsp+50h] [rbp-30h] BYREF
  __int128 v50; // [rsp+60h] [rbp-20h]
  __int128 v51; // [rsp+70h] [rbp-10h]
  __int128 v52; // [rsp+80h] [rbp+0h]
  __int128 v53; // [rsp+90h] [rbp+10h]
  __int128 v54; // [rsp+A0h] [rbp+20h]
  __int128 v55; // [rsp+B0h] [rbp+30h]
  _QWORD v56[2]; // [rsp+C8h] [rbp+48h] BYREF
  const char *v57; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v58; // [rsp+E0h] [rbp+60h]
  __int64 v59; // [rsp+F0h] [rbp+70h]
  __int64 v60; // [rsp+F8h] [rbp+78h]
  __int128 v61; // [rsp+100h] [rbp+80h]
  __int128 v62; // [rsp+110h] [rbp+90h]
  __int64 v63; // [rsp+120h] [rbp+A0h] BYREF
  char v64; // [rsp+128h] [rbp+A8h]
  char v65; // [rsp+129h] [rbp+A9h]
  int v66; // [rsp+12Ah] [rbp+AAh]
  __int16 v67; // [rsp+12Eh] [rbp+AEh]
  const char *v68; // [rsp+130h] [rbp+B0h]
  __int128 v69; // [rsp+138h] [rbp+B8h]
  const char *v70; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v71; // [rsp+150h] [rbp+D0h]
  const char *v72; // [rsp+158h] [rbp+D8h]
  __m256i v73; // [rsp+160h] [rbp+E0h]
  __int128 v74; // [rsp+180h] [rbp+100h]
  __int128 v75; // [rsp+190h] [rbp+110h]
  __int128 v76; // [rsp+1A0h] [rbp+120h]
  __int128 v77; // [rsp+1B0h] [rbp+130h]
  __int128 v78; // [rsp+1C0h] [rbp+140h]
  __int128 v79; // [rsp+1D0h] [rbp+150h]
  char v80; // [rsp+1E0h] [rbp+160h]
  __int128 v81; // [rsp+2B0h] [rbp+230h] BYREF
  unsigned __int64 v82; // [rsp+2C0h] [rbp+240h]
  __m256i v83; // [rsp+2C8h] [rbp+248h]
  __int128 v84; // [rsp+2E8h] [rbp+268h]
  __int128 v85; // [rsp+2F8h] [rbp+278h]
  __int128 v86; // [rsp+308h] [rbp+288h]
  __int128 v87; // [rsp+318h] [rbp+298h]
  __int128 v88; // [rsp+328h] [rbp+2A8h]
  __int128 v89; // [rsp+338h] [rbp+2B8h]
  __int128 v90; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v91; // [rsp+360h] [rbp+2E0h]
  __int128 v92; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v93; // [rsp+380h] [rbp+300h]
  __int128 v94; // [rsp+390h] [rbp+310h]
  __int128 v95; // [rsp+3A0h] [rbp+320h]
  __int128 v96; // [rsp+3B0h] [rbp+330h]
  __int128 v97; // [rsp+3C0h] [rbp+340h]
  __int128 v98; // [rsp+3D0h] [rbp+350h]
  _BYTE *v99; // [rsp+3E0h] [rbp+360h]
  __int64 v100; // [rsp+3E8h] [rbp+368h]
  char v101; // [rsp+3F7h] [rbp+377h] BYREF
  _QWORD *v102; // [rsp+3F8h] [rbp+378h]
  __int64 v103; // [rsp+400h] [rbp+380h]
  _BYTE *v104; // [rsp+408h] [rbp+388h]
  _QWORD *v105; // [rsp+410h] [rbp+390h]
  __int64 *v106; // [rsp+418h] [rbp+398h]
  __int64 v107; // [rsp+420h] [rbp+3A0h]
  char v108; // [rsp+42Fh] [rbp+3AFh]
  __int64 v109; // [rsp+430h] [rbp+3B0h]

  v109 = -2;
  v4 = a2;
  v5 = (_BYTE *)a1;
  v6 = *(unsigned __int8 *)(a1 + 2528);
  v107 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v7 = a1 + 1456;
      sub_141684120(a1 + 1456, a1 + 392, 1064);
      switch ( v5[2512] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_68;
        case 2:
          goto LABEL_67;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1456;
      switch ( *(_BYTE *)(a1 + 2512) )
      {
        case 0:
LABEL_4:
          v105 = v4;
          *(_QWORD *)&v95 = 0;
          *(_QWORD *)&v92 = aCaptureVoiceTr;
          *((_QWORD *)&v92 + 1) = 25;
          *(_QWORD *)&v93 = aApp_2;
          *((_QWORD *)&v93 + 1) = 3;
          v103 = v7;
          *(_QWORD *)&v94 = v7;
          v106 = (__int64 *)(v5 + 1976);
          *((_QWORD *)&v94 + 1) = v5 + 1976;
          sub_1401C3650(&v70, &v92);
          v8 = *(unsigned int *)((char *)&v71 + 2) | ((unsigned __int64)HIWORD(v71) << 32);
          v9 = v71;
          LOBYTE(v10) = BYTE1(v71);
          v11 = v72;
          v12 = *(_OWORD *)v73.m256i_i8;
          if ( v70 != (const char *)-1LL )
          {
            v89 = v79;
            v88 = v78;
            v87 = v77;
            v86 = v76;
            v85 = v75;
            v84 = v74;
            v83 = v73;
            *(_DWORD *)((char *)&v81 + 10) = *(_DWORD *)((char *)&v71 + 2);
            HIWORD(v81) = WORD2(v8);
            v82 = (unsigned __int64)v72;
            *(_QWORD *)&v81 = v70;
            WORD4(v81) = v71;
            v70 = aCaptureVoiceTr;
            v71 = 25;
            v72 = aStyle_3;
            v73.m256i_i64[0] = 5;
            v73.m256i_i64[1] = v103;
            *(_OWORD *)&v73.m256i_u64[2] = (unsigned __int64)v106;
            sub_140AEF920(&v92, &v70);
            v9 = v92;
            LOBYTE(v10) = BYTE1(v92);
            if ( (_BYTE)v92 == 0xFF )
            {
              v5 = (_BYTE *)v107;
              v23 = v107 + 2000;
              sub_141684120(v107 + 2000, &v81, 152);
              v5[2160] = v10;
              v5[2161] = 0;
              v20 = v5 + 2168;
              sub_141684120(v5 + 2168, v23, 168);
              v104 = v5 + 2504;
              v5[2504] = 0;
              v4 = v105;
LABEL_17:
              v106 = (__int64 *)(v5 + 2336);
              v102 = v20;
              sub_141684120(v5 + 2336, v20, 168);
              switch ( v5[2497] )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_70;
                case 2:
                  goto LABEL_69;
                case 3:
                  goto LABEL_28;
              }
            }
            v13 = *(unsigned int *)((char *)&v92 + 2);
            v14 = WORD3(v92);
            v11 = *((const char **)&v92 + 1);
            v12 = v93;
            sub_140014150(&v81);
            v8 = v13 | (v14 << 32);
          }
          sub_140BF0DE0(v103);
          v15 = (int)v106;
          if ( *v106 == -1 )
          {
            LOBYTE(v15) = 1;
            LODWORD(v106) = v15;
            v22 = v107;
            goto LABEL_55;
          }
          v102 = (_QWORD *)(v107 + 1984);
          v16 = *(_QWORD *)(v107 + 1984);
          v104 = *(_BYTE **)(v107 + 1992);
          v105 = nullptr;
          v100 = v16;
          while ( v104 != (_BYTE *)v105 )
          {
            v105 = (_QWORD *)((char *)v105 + 1);
            v17 = v16 + 96;
            sub_1402C7520();
            v16 = v17;
          }
          v21 = *v106;
          LOBYTE(v16) = 1;
          LODWORD(v106) = v16;
          v22 = v107;
          if ( !v21 )
            goto LABEL_55;
          goto LABEL_54;
        case 1:
LABEL_68:
          v103 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_67:
          v103 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v103 = v7;
  v18 = v5 + 2504;
  v19 = (unsigned __int8)v5[2504];
  v20 = v5 + 2168;
  v104 = v5 + 2504;
  switch ( v19 )
  {
    case 0LL:
      goto LABEL_17;
    case 1LL:
      v99 = v5 + 2168;
      sub_1416C3400(&off_1417B7B80, v18, a3, a4);
    case 2LL:
      v99 = v5 + 2168;
      sub_1416C3420(&off_1417B7B80, v18, a3, a4);
    case 3LL:
      v102 = v5 + 2168;
      v106 = (__int64 *)(v5 + 2336);
      switch ( v5[2497] )
      {
        case 0:
LABEL_18:
          sub_141684120(&v70, v106, 152);
          v80 = v5[2496];
          v24 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v108 = 1;
            v46 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v24 = v46;
          }
          if ( *((_DWORD *)v24 + 4) == 2 )
          {
            v25 = 704;
            if ( *(_BYTE *)v24 )
              v25 = 472;
            v26 = v24[1] + v25;
            v108 = 0;
            v27 = sub_140897A90(v26, v24, &v70, &off_1417642A8);
          }
          else
          {
            v28 = 704;
            if ( *((_BYTE *)v24 + 64) )
              v28 = 472;
            v29 = v24[9] + v28;
            v108 = 0;
            v27 = sub_140897A90(v29, v24 + 8, &v70, &off_141764290);
          }
          v5 = (_BYTE *)v107;
          *(_QWORD *)(v107 + 2488) = v27;
          break;
        case 1:
LABEL_70:
          sub_1416C3400(&off_1417BAE90, v18, a3, a4);
        case 2:
LABEL_69:
          sub_1416C3420(&off_1417BAE90, v18, a3, a4);
        case 3:
          break;
      }
LABEL_28:
      v105 = v5 + 2488;
      sub_140B02F00(&v70, v5 + 2488, v4);
      v30 = v70;
      if ( v70 == (const char *)-3LL )
      {
        v32 = (_BYTE *)v107;
        *(_BYTE *)(v107 + 2497) = 3;
        goto LABEL_52;
      }
      if ( v70 == (const char *)-2LL )
      {
        v8 = v71;
        *((_QWORD *)&v12 + 1) = v72;
        v31 = 0x800000000000000CuLL;
        v10 = v73.m256i_i64[0];
      }
      else
      {
        v31 = v71;
        v8 = (unsigned __int64)v72;
        v10 = v73.m256i_i64[1];
        *((_QWORD *)&v12 + 1) = v73.m256i_i64[0];
        v90 = *(_OWORD *)&v73.m256i_u64[2];
        v91 = v74;
      }
      v47 = v90;
      v48 = v91;
      v33 = *v105;
      if ( (unsigned __int8)sub_1412F2A80(*v105) )
        sub_1412E7580(v33);
      if ( v30 == (const char *)-1LL )
        goto LABEL_38;
      if ( v30 == (const char *)-2LL )
      {
        v70 = (const char *)v31;
        v71 = v8;
        v72 = *((const char **)&v12 + 1);
        v73.m256i_i64[0] = v10;
        *(_OWORD *)&v73.m256i_u64[1] = v47;
        v56[0] = &v70;
        v56[1] = sub_141230630;
        sub_14149C0F0(&v90, &unk_1417BA0BC, v56);
        sub_140BF0F60(&v70);
        v8 = *((_QWORD *)&v90 + 1);
        v31 = v90;
        *((_QWORD *)&v12 + 1) = v91;
LABEL_38:
        LODWORD(v35) = v107;
        *(_BYTE *)(v107 + 2497) = 1;
        goto LABEL_39;
      }
      v60 = v10;
      v61 = v47;
      v62 = v48;
      v57 = v30;
      *(_QWORD *)&v58 = v31;
      *((_QWORD *)&v58 + 1) = v8;
      v59 = *((_QWORD *)&v12 + 1);
      sub_140ACEA10(&v70, &v57);
      v34 = v70;
      v31 = v71;
      v8 = (unsigned __int64)v72;
      v35 = v73.m256i_i64[1];
      *((_QWORD *)&v12 + 1) = v73.m256i_i64[0];
      v49 = *(_OWORD *)&v73.m256i_u64[2];
      v50 = v74;
      v51 = v75;
      v52 = v76;
      v53 = v77;
      v54 = v78;
      v55 = v79;
      v32 = (_BYTE *)v107;
      *(_BYTE *)(v107 + 2497) = 1;
      if ( v34 == (const char *)-2LL )
      {
LABEL_52:
        v32[2504] = 3;
        v32[2512] = 3;
        v40 = 3;
        result = 1;
        goto LABEL_56;
      }
      v98 = v55;
      v97 = v54;
      v96 = v53;
      v95 = v52;
      v94 = v51;
      v93 = v50;
      v92 = v49;
      if ( v34 != (const char *)-1LL )
      {
        v89 = v98;
        v88 = v97;
        v87 = v96;
        v86 = v95;
        v85 = v94;
        v84 = v93;
        *(_OWORD *)&v83.m256i_u64[2] = v92;
        *(_QWORD *)&v81 = v34;
        BYTE8(v81) = v31;
        HIBYTE(v81) = HIBYTE(v31);
        *(_WORD *)((char *)&v81 + 13) = HIDWORD(v31) >> 8;
        *(_DWORD *)((char *)&v81 + 9) = v31 >> 8;
        v82 = v8;
        *(_OWORD *)v83.m256i_i8 = __PAIR128__(v35, *((unsigned __int64 *)&v12 + 1));
        sub_140B0D790(&v70, &v81);
        v8 = *(unsigned int *)((char *)&v71 + 2) | ((unsigned __int64)HIWORD(v71) << 32);
        v9 = v71;
        LOBYTE(v10) = BYTE1(v71);
        v11 = v72;
        v12 = *(_OWORD *)v73.m256i_i8;
        if ( v70 == (const char *)-1LL )
        {
          LODWORD(v106) = 0;
        }
        else
        {
          v57 = nullptr;
          v58 = 1u;
          *(_QWORD *)&v50 = 1610612768;
          *(_QWORD *)&v49 = &v57;
          *((_QWORD *)&v49 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_141230630(&v70, &v49, v44) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v101,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v11 = v57;
          v12 = v58;
          v45 = sub_140BF0F60(&v70);
          LOBYTE(v45) = 1;
          LODWORD(v106) = v45;
          v9 = 3;
        }
        goto LABEL_47;
      }
LABEL_39:
      if ( v12 < 0 )
      {
        v36 = 0;
        goto LABEL_41;
      }
      if ( *((_QWORD *)&v12 + 1) )
      {
        nullsub_1(v34);
        v36 = 1;
        v37 = sub_140001650(*((_QWORD *)&v12 + 1), 1);
        if ( !v37 )
        {
LABEL_41:
          v105 = (_QWORD *)v31;
          v106 = (__int64 *)v8;
          sub_1416C2D4B(v36, *((_QWORD *)&v12 + 1));
        }
        *(_QWORD *)&v12 = v37;
        v35 = sub_141684120(v37, v8, *((_QWORD *)&v12 + 1));
        if ( !v31 )
          goto LABEL_46;
      }
      else
      {
        *(_QWORD *)&v12 = 1;
        if ( !v31 )
          goto LABEL_46;
      }
      v35 = sub_140001660(v8, v31, 1);
LABEL_46:
      LOBYTE(v35) = 1;
      LODWORD(v106) = v35;
      v9 = 3;
      v11 = *((const char **)&v12 + 1);
LABEL_47:
      *v104 = 1;
      sub_140BF0DE0(v103);
      v22 = v107;
      if ( *(_QWORD *)(v107 + 1976) != -1 )
      {
        v102 = (_QWORD *)(v107 + 1984);
        v38 = *(_QWORD *)(v107 + 1984);
        v104 = *(_BYTE **)(v107 + 1992);
        v105 = nullptr;
        v100 = v38;
        while ( v104 != (_BYTE *)v105 )
        {
          v105 = (_QWORD *)((char *)v105 + 1);
          v39 = v38 + 96;
          sub_1402C7520();
          v38 = v39;
        }
        v22 = v107;
        v21 = *(_QWORD *)(v107 + 1976);
        if ( v21 )
LABEL_54:
          sub_140001660(*v102, 96 * v21, 8);
      }
LABEL_55:
      *(_BYTE *)(v22 + 2512) = 1;
      sub_140BE1A50(v103);
      v66 = v8;
      v67 = WORD2(v8);
      v68 = v11;
      v69 = v12;
      v64 = v9;
      v65 = v10;
      v63 = (unsigned __int8)v106;
      v42 = v107;
      *(_BYTE *)(v107 + 2531) = 0;
      sub_141684120(&v70, v42, 360);
      *(_BYTE *)(v42 + 2530) = 0;
      v43 = *(_QWORD *)(v42 + 384);
      *(_BYTE *)(v42 + 2529) = 0;
      v82 = *(_QWORD *)(v42 + 376);
      v81 = *(_OWORD *)(v42 + 360);
      sub_14047E370(
        (unsigned int)&v70,
        v43,
        (unsigned int)&v63,
        (unsigned int)&v81,
        *(_DWORD *)(v42 + 2520),
        *(_DWORD *)(v42 + 2524));
      v40 = 1;
      result = 0;
      v32 = (_BYTE *)v107;
LABEL_56:
      v32[2528] = v40;
      return result;
  }
}