// Pseudocode for capture_voice_trigger_key (EA: 0x140d61ae0, size: 0xce7)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
char __fastcall sub_140D61AE0(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  char v7; // r14
  __int64 v8; // r15
  const char *v9; // r13
  __int128 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // r14
  unsigned __int64 v28; // r13
  _BYTE *v29; // rdx
  __int64 v30; // rbx
  const char *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  char v39; // cl
  char result; // al
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rsi
  __int64 v45; // [rsp+20h] [rbp-60h]
  __int128 v46; // [rsp+30h] [rbp-50h]
  __int128 v47; // [rsp+40h] [rbp-40h]
  __int128 v48; // [rsp+50h] [rbp-30h] BYREF
  __int128 v49; // [rsp+60h] [rbp-20h]
  __int128 v50; // [rsp+70h] [rbp-10h]
  __int128 v51; // [rsp+80h] [rbp+0h]
  __int128 v52; // [rsp+90h] [rbp+10h]
  __int128 v53; // [rsp+A0h] [rbp+20h]
  __int128 v54; // [rsp+B0h] [rbp+30h]
  _QWORD v55[2]; // [rsp+C8h] [rbp+48h] BYREF
  const char *v56; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v57; // [rsp+E0h] [rbp+60h]
  __int64 v58; // [rsp+F0h] [rbp+70h]
  __int64 v59; // [rsp+F8h] [rbp+78h]
  __int128 v60; // [rsp+100h] [rbp+80h]
  __int128 v61; // [rsp+110h] [rbp+90h]
  __int64 v62; // [rsp+120h] [rbp+A0h] BYREF
  char v63; // [rsp+128h] [rbp+A8h]
  char v64; // [rsp+129h] [rbp+A9h]
  int v65; // [rsp+12Ah] [rbp+AAh]
  __int16 v66; // [rsp+12Eh] [rbp+AEh]
  const char *v67; // [rsp+130h] [rbp+B0h]
  __int128 v68; // [rsp+138h] [rbp+B8h]
  const char *v69; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v70; // [rsp+150h] [rbp+D0h]
  const char *v71; // [rsp+158h] [rbp+D8h]
  __m256i v72; // [rsp+160h] [rbp+E0h]
  __int128 v73; // [rsp+180h] [rbp+100h]
  __int128 v74; // [rsp+190h] [rbp+110h]
  __int128 v75; // [rsp+1A0h] [rbp+120h]
  __int128 v76; // [rsp+1B0h] [rbp+130h]
  __int128 v77; // [rsp+1C0h] [rbp+140h]
  __int128 v78; // [rsp+1D0h] [rbp+150h]
  char v79; // [rsp+1E0h] [rbp+160h]
  __int128 v80; // [rsp+2B0h] [rbp+230h] BYREF
  unsigned __int64 v81; // [rsp+2C0h] [rbp+240h]
  __m256i v82; // [rsp+2C8h] [rbp+248h]
  __int128 v83; // [rsp+2E8h] [rbp+268h]
  __int128 v84; // [rsp+2F8h] [rbp+278h]
  __int128 v85; // [rsp+308h] [rbp+288h]
  __int128 v86; // [rsp+318h] [rbp+298h]
  __int128 v87; // [rsp+328h] [rbp+2A8h]
  __int128 v88; // [rsp+338h] [rbp+2B8h]
  __int128 v89; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v90; // [rsp+360h] [rbp+2E0h]
  __int128 v91; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v92; // [rsp+380h] [rbp+300h]
  __int128 v93; // [rsp+390h] [rbp+310h]
  __int128 v94; // [rsp+3A0h] [rbp+320h]
  __int128 v95; // [rsp+3B0h] [rbp+330h]
  __int128 v96; // [rsp+3C0h] [rbp+340h]
  __int128 v97; // [rsp+3D0h] [rbp+350h]
  _BYTE *v98; // [rsp+3E0h] [rbp+360h]
  __int64 v99; // [rsp+3E8h] [rbp+368h]
  char v100; // [rsp+3F7h] [rbp+377h] BYREF
  _QWORD *v101; // [rsp+3F8h] [rbp+378h]
  __int64 v102; // [rsp+400h] [rbp+380h]
  _BYTE *v103; // [rsp+408h] [rbp+388h]
  _QWORD *v104; // [rsp+410h] [rbp+390h]
  __int64 *v105; // [rsp+418h] [rbp+398h]
  __int64 v106; // [rsp+420h] [rbp+3A0h]
  char v107; // [rsp+42Fh] [rbp+3AFh]
  __int64 v108; // [rsp+430h] [rbp+3B0h]

  v108 = -2;
  v3 = (_BYTE *)a1;
  v4 = *(unsigned __int8 *)(a1 + 2528);
  v106 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v5 = a1 + 1456;
      sub_14172B820(a1 + 1456, a1 + 392, 1064);
      switch ( v3[2512] )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1456;
      switch ( *(_BYTE *)(a1 + 2512) )
      {
        case 0:
LABEL_4:
          v104 = a2;
          *(_QWORD *)&v94 = 0;
          *(_QWORD *)&v91 = aCaptureVoiceTr;
          *((_QWORD *)&v91 + 1) = 25;
          *(_QWORD *)&v92 = aApp_4;
          *((_QWORD *)&v92 + 1) = 3;
          v102 = v5;
          *(_QWORD *)&v93 = v5;
          v105 = (__int64 *)(v3 + 1976);
          *((_QWORD *)&v93 + 1) = v3 + 1976;
          sub_1401A9630((__int64)&v69, (__int64)&v91);
          v6 = *(unsigned int *)((char *)&v70 + 2) | ((unsigned __int64)HIWORD(v70) << 32);
          v7 = v70;
          LOBYTE(v8) = BYTE1(v70);
          v9 = v71;
          v10 = *(_OWORD *)v72.m256i_i8;
          if ( v69 != (const char *)-1LL )
          {
            v88 = v78;
            v87 = v77;
            v86 = v76;
            v85 = v75;
            v84 = v74;
            v83 = v73;
            v82 = v72;
            *(_DWORD *)((char *)&v80 + 10) = *(_DWORD *)((char *)&v70 + 2);
            HIWORD(v80) = WORD2(v6);
            v81 = (unsigned __int64)v71;
            *(_QWORD *)&v80 = v69;
            WORD4(v80) = v70;
            v69 = aCaptureVoiceTr;
            v70 = 25;
            v71 = aStyle_3;
            v72.m256i_i64[0] = 5;
            v72.m256i_i64[1] = v102;
            *(_OWORD *)&v72.m256i_u64[2] = (unsigned __int64)v105;
            sub_1404F6850(&v91, &v69);
            v7 = v91;
            LOBYTE(v8) = BYTE1(v91);
            if ( (_BYTE)v91 == 0xFF )
            {
              v3 = (_BYTE *)v106;
              v20 = v106 + 2000;
              sub_14172B820(v106 + 2000, &v80, 152);
              v3[2160] = v8;
              v3[2161] = 0;
              v17 = v3 + 2168;
              sub_14172B820(v3 + 2168, v20, 168);
              v103 = v3 + 2504;
              v3[2504] = 0;
              a2 = v104;
LABEL_17:
              v105 = (__int64 *)(v3 + 2336);
              v101 = v17;
              sub_14172B820(v3 + 2336, v17, 168);
              switch ( v3[2497] )
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
            v11 = *(unsigned int *)((char *)&v91 + 2);
            v12 = WORD3(v91);
            v9 = *((const char **)&v91 + 1);
            v10 = v92;
            sub_140203A20(&v80);
            v6 = v11 | (v12 << 32);
          }
          sub_140CAB140(v102);
          v13 = (int)v105;
          if ( *v105 == -1 )
          {
            LOBYTE(v13) = 1;
            LODWORD(v105) = v13;
            v19 = v106;
            goto LABEL_55;
          }
          v101 = (_QWORD *)(v106 + 1984);
          v14 = *(_QWORD *)(v106 + 1984);
          v103 = *(_BYTE **)(v106 + 1992);
          v104 = nullptr;
          v99 = v14;
          while ( v103 != (_BYTE *)v104 )
          {
            v104 = (_QWORD *)((char *)v104 + 1);
            v15 = v14 + 96;
            sub_140401FB0();
            v14 = v15;
          }
          v18 = *v105;
          LOBYTE(v14) = 1;
          LODWORD(v105) = v14;
          v19 = v106;
          if ( !v18 )
            goto LABEL_55;
          goto LABEL_54;
        case 1:
LABEL_68:
          v102 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_67:
          v102 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v102 = v5;
  v16 = (unsigned __int8)v3[2504];
  v17 = v3 + 2168;
  v103 = v3 + 2504;
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_17;
    case 1LL:
      v98 = v3 + 2168;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v98 = v3 + 2168;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v101 = v3 + 2168;
      v105 = (__int64 *)(v3 + 2336);
      switch ( v3[2497] )
      {
        case 0:
LABEL_18:
          sub_14172B820(&v69, v105, 152);
          v79 = v3[2496];
          v21 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v107 = 1;
            v44 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v21 = v44;
          }
          if ( *((_DWORD *)v21 + 4) == 2 )
          {
            v22 = 704;
            if ( *(_BYTE *)v21 )
              v22 = 472;
            v23 = v21[1] + v22;
            v107 = 0;
            v24 = sub_1408579C0(v23, v21, &v69, &off_1417EBF48);
          }
          else
          {
            v25 = 704;
            if ( *((_BYTE *)v21 + 64) )
              v25 = 472;
            v26 = v21[9] + v25;
            v107 = 0;
            v24 = sub_1408579C0(v26, v21 + 8, &v69, &off_1417EBF30);
          }
          v3 = (_BYTE *)v106;
          *(_QWORD *)(v106 + 2488) = v24;
          break;
        case 1:
LABEL_70:
          sub_14176EC00(&off_141888500);
        case 2:
LABEL_69:
          sub_14176EC20(&off_141888500);
        case 3:
          break;
      }
LABEL_28:
      v104 = v3 + 2488;
      sub_1405056A0(&v69, v3 + 2488, a2);
      v27 = v69;
      if ( v69 == (const char *)-3LL )
      {
        v29 = (_BYTE *)v106;
        *(_BYTE *)(v106 + 2497) = 3;
        goto LABEL_52;
      }
      if ( v69 == (const char *)-2LL )
      {
        v6 = v70;
        *((_QWORD *)&v10 + 1) = v71;
        v28 = 0x800000000000000CuLL;
        v8 = v72.m256i_i64[0];
      }
      else
      {
        v28 = v70;
        v6 = (unsigned __int64)v71;
        v8 = v72.m256i_i64[1];
        *((_QWORD *)&v10 + 1) = v72.m256i_i64[0];
        v89 = *(_OWORD *)&v72.m256i_u64[2];
        v90 = v73;
      }
      v46 = v89;
      v47 = v90;
      v30 = *v104;
      if ( (unsigned __int8)sub_141398090(*v104) )
        sub_14139A2E0(v30);
      if ( v27 == (const char *)-1LL )
        goto LABEL_38;
      if ( v27 == (const char *)-2LL )
      {
        v69 = (const char *)v28;
        v70 = v6;
        v71 = *((const char **)&v10 + 1);
        v72.m256i_i64[0] = v8;
        *(_OWORD *)&v72.m256i_u64[1] = v46;
        v55[0] = &v69;
        v55[1] = sub_1412DDF00;
        sub_141543AF0(&v89, &unk_14188772C, v55);
        sub_140CAB2C0(&v69);
        v6 = *((_QWORD *)&v89 + 1);
        v28 = v89;
        *((_QWORD *)&v10 + 1) = v90;
LABEL_38:
        LODWORD(v34) = v106;
        *(_BYTE *)(v106 + 2497) = 1;
        goto LABEL_39;
      }
      v59 = v8;
      v60 = v46;
      v61 = v47;
      v56 = v27;
      *(_QWORD *)&v57 = v28;
      *((_QWORD *)&v57 + 1) = v6;
      v58 = *((_QWORD *)&v10 + 1);
      sub_1404D12A0(&v69, &v56);
      v31 = v69;
      v28 = v70;
      v6 = (unsigned __int64)v71;
      v34 = v72.m256i_i64[1];
      *((_QWORD *)&v10 + 1) = v72.m256i_i64[0];
      v48 = *(_OWORD *)&v72.m256i_u64[2];
      v49 = v73;
      v50 = v74;
      v51 = v75;
      v52 = v76;
      v53 = v77;
      v54 = v78;
      v29 = (_BYTE *)v106;
      *(_BYTE *)(v106 + 2497) = 1;
      if ( v31 == (const char *)-2LL )
      {
LABEL_52:
        v29[2504] = 3;
        v29[2512] = 3;
        v39 = 3;
        result = 1;
        goto LABEL_56;
      }
      v97 = v54;
      v96 = v53;
      v95 = v52;
      v94 = v51;
      v93 = v50;
      v92 = v49;
      v91 = v48;
      if ( v31 != (const char *)-1LL )
      {
        v88 = v97;
        v87 = v96;
        v86 = v95;
        v85 = v94;
        v84 = v93;
        v83 = v92;
        *(_OWORD *)&v82.m256i_u64[2] = v91;
        *(_QWORD *)&v80 = v31;
        BYTE8(v80) = v28;
        HIBYTE(v80) = HIBYTE(v28);
        *(_WORD *)((char *)&v80 + 13) = HIDWORD(v28) >> 8;
        *(_DWORD *)((char *)&v80 + 9) = v28 >> 8;
        v81 = v6;
        *(_OWORD *)v82.m256i_i8 = __PAIR128__(v34, *((unsigned __int64 *)&v10 + 1));
        sub_140510610(&v69, &v80);
        v6 = *(unsigned int *)((char *)&v70 + 2) | ((unsigned __int64)HIWORD(v70) << 32);
        v7 = v70;
        LOBYTE(v8) = BYTE1(v70);
        v9 = v71;
        v10 = *(_OWORD *)v72.m256i_i8;
        if ( v69 == (const char *)-1LL )
        {
          LODWORD(v105) = 0;
        }
        else
        {
          v56 = nullptr;
          v57 = 1u;
          *(_QWORD *)&v49 = 1610612768;
          *(_QWORD *)&v48 = &v56;
          *((_QWORD *)&v48 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v69, &v48) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v100,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v9 = v56;
          v10 = v57;
          v43 = sub_140CAB2C0(&v69);
          LOBYTE(v43) = 1;
          LODWORD(v105) = v43;
          v7 = 3;
        }
        goto LABEL_47;
      }
LABEL_39:
      if ( v10 < 0 )
      {
        v35 = 0;
        goto LABEL_41;
      }
      if ( *((_QWORD *)&v10 + 1) )
      {
        nullsub_1(v31, v29, v32, v33, v45);
        v35 = 1;
        v36 = sub_140001650(*((_QWORD *)&v10 + 1), 1);
        if ( !v36 )
        {
LABEL_41:
          v104 = (_QWORD *)v28;
          v105 = (__int64 *)v6;
          sub_14176E54B(v35, *((_QWORD *)&v10 + 1));
        }
        *(_QWORD *)&v10 = v36;
        v34 = sub_14172B820(v36, v6, *((_QWORD *)&v10 + 1));
        if ( !v28 )
          goto LABEL_46;
      }
      else
      {
        *(_QWORD *)&v10 = 1;
        if ( !v28 )
          goto LABEL_46;
      }
      v34 = sub_140001660(v6, v28, 1);
LABEL_46:
      LOBYTE(v34) = 1;
      LODWORD(v105) = v34;
      v7 = 3;
      v9 = *((const char **)&v10 + 1);
LABEL_47:
      *v103 = 1;
      sub_140CAB140(v102);
      v19 = v106;
      if ( *(_QWORD *)(v106 + 1976) != -1 )
      {
        v101 = (_QWORD *)(v106 + 1984);
        v37 = *(_QWORD *)(v106 + 1984);
        v103 = *(_BYTE **)(v106 + 1992);
        v104 = nullptr;
        v99 = v37;
        while ( v103 != (_BYTE *)v104 )
        {
          v104 = (_QWORD *)((char *)v104 + 1);
          v38 = v37 + 96;
          sub_140401FB0();
          v37 = v38;
        }
        v19 = v106;
        v18 = *(_QWORD *)(v106 + 1976);
        if ( v18 )
LABEL_54:
          sub_140001660(*v101, 96 * v18, 8);
      }
LABEL_55:
      *(_BYTE *)(v19 + 2512) = 1;
      sub_140C9BDA0(v102);
      v65 = v6;
      v66 = WORD2(v6);
      v67 = v9;
      v68 = v10;
      v63 = v7;
      v64 = v8;
      v62 = (unsigned __int8)v105;
      v41 = v106;
      *(_BYTE *)(v106 + 2531) = 0;
      sub_14172B820(&v69, v41, 360);
      *(_BYTE *)(v41 + 2530) = 0;
      v42 = *(_QWORD *)(v41 + 384);
      *(_BYTE *)(v41 + 2529) = 0;
      v81 = *(_QWORD *)(v41 + 376);
      v80 = *(_OWORD *)(v41 + 360);
      sub_140AFFC30((__int64)&v69, v42, (__int64)&v62, &v80, *(_DWORD *)(v41 + 2520), *(_DWORD *)(v41 + 2524));
      v39 = 1;
      result = 0;
      v29 = (_BYTE *)v106;
LABEL_56:
      v29[2528] = v39;
      return result;
  }
}
