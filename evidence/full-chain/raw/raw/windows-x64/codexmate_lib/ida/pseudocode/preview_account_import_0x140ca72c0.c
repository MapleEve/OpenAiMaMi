// module: codexmate_lib
// addr: 0x140ca72c0
// name: preview_account_import
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = preview_account_import | mapped via command-name string xref (win-native, ground-truth)
// win 1.2.3 | = mac codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall preview_account_import(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  char v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // r13d
  unsigned int v15; // edi
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int8 v23; // di
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int128 v27; // xmm6
  __int64 v28; // r12
  __int64 v29; // rbx
  char v30; // of
  __int64 v31; // r15
  volatile signed __int64 *v32; // rsi
  __int64 v33; // rt0
  volatile signed __int64 *v34; // r14
  __int64 v35; // rt0
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r15
  unsigned __int64 v43; // rdi
  __int64 v44; // rbx
  _BYTE *v45; // rdx
  char v46; // cl
  char result; // al
  __int64 v48; // r13
  __int64 v49; // r14
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 *v57; // rcx
  __int64 *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rsi
  _BYTE v62[208]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v63[26]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v64; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v65; // [rsp+1E0h] [rbp+160h]
  __int128 v66; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v67; // [rsp+2B0h] [rbp+230h]
  __int64 v68; // [rsp+2B8h] [rbp+238h]
  __int64 v69; // [rsp+2C0h] [rbp+240h]
  _OWORD v70[13]; // [rsp+2C8h] [rbp+248h] BYREF
  const char *v71; // [rsp+398h] [rbp+318h] BYREF
  __int128 v72; // [rsp+3A0h] [rbp+320h]
  __int64 v73; // [rsp+3B0h] [rbp+330h]
  __int64 v74; // [rsp+3B8h] [rbp+338h]
  __int64 v75; // [rsp+3C0h] [rbp+340h]
  __int64 v76; // [rsp+3C8h] [rbp+348h]
  _QWORD v77[2]; // [rsp+468h] [rbp+3E8h] BYREF
  const char *v78; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v79; // [rsp+480h] [rbp+400h]
  const char *v80; // [rsp+488h] [rbp+408h]
  __int64 v81; // [rsp+490h] [rbp+410h]
  _QWORD v82[13]; // [rsp+498h] [rbp+418h] BYREF
  __int128 v83; // [rsp+500h] [rbp+480h]
  unsigned __int64 v84; // [rsp+510h] [rbp+490h]
  __int64 v85; // [rsp+518h] [rbp+498h]
  __int64 v86; // [rsp+520h] [rbp+4A0h]
  __int64 v87; // [rsp+5E0h] [rbp+560h] BYREF
  char v88; // [rsp+5E8h] [rbp+568h]
  int v89; // [rsp+5E9h] [rbp+569h]
  __int16 v90; // [rsp+5EDh] [rbp+56Dh]
  char v91; // [rsp+5EFh] [rbp+56Fh]
  __int64 v92; // [rsp+5F0h] [rbp+570h]
  __int64 v93; // [rsp+5F8h] [rbp+578h]
  __int64 v94; // [rsp+600h] [rbp+580h]
  __int64 v95; // [rsp+608h] [rbp+588h]
  __int64 v96; // [rsp+610h] [rbp+590h]
  __int64 v97; // [rsp+618h] [rbp+598h]
  char v98; // [rsp+627h] [rbp+5A7h] BYREF
  _QWORD *v99; // [rsp+628h] [rbp+5A8h]
  __int64 v100; // [rsp+630h] [rbp+5B0h]
  unsigned __int64 v101; // [rsp+638h] [rbp+5B8h]
  __int64 v102; // [rsp+640h] [rbp+5C0h]
  __int64 *v103; // [rsp+648h] [rbp+5C8h]
  unsigned __int64 v104; // [rsp+650h] [rbp+5D0h]
  __int64 v105; // [rsp+658h] [rbp+5D8h]
  unsigned __int64 v106; // [rsp+660h] [rbp+5E0h]
  __int64 v107; // [rsp+668h] [rbp+5E8h]
  char v108; // [rsp+677h] [rbp+5F7h]
  __int64 v109; // [rsp+678h] [rbp+5F8h]

  v109 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 3584);
  v107 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3585) = 257;
      *(_BYTE *)(a1 + 3587) = 1;
      v7 = a1 + 1984;
      sub_141684120(a1 + 1984, a1 + 392, 1592);
      switch ( *(_BYTE *)(v5 + 3568) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_67;
        case 2:
          goto LABEL_66;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1984;
      switch ( *(_BYTE *)(a1 + 3568) )
      {
        case 0:
LABEL_4:
          v76 = 0;
          v71 = aPreviewAccount;
          *(_QWORD *)&v72 = 22;
          *((_QWORD *)&v72 + 1) = aApp_2;
          v73 = 3;
          v105 = v7;
          v74 = v7;
          v103 = (__int64 *)(v5 + 2504);
          v75 = v5 + 2504;
          sub_1401C3650(&v78, &v71);
          v8 = (unsigned __int64)((HIBYTE(v79) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v79 + 5)) << 32;
          v9 = v8 | *(unsigned int *)((char *)&v79 + 1);
          v10 = v79;
          v11 = (__int64)v80;
          v12 = v81;
          v13 = v82[0];
          if ( v78 != (const char *)-1LL )
          {
            v70[6] = v83;
            v70[5] = *(_OWORD *)&v82[11];
            v70[4] = *(_OWORD *)&v82[9];
            v70[3] = *(_OWORD *)&v82[7];
            v70[2] = *(_OWORD *)&v82[5];
            v70[1] = *(_OWORD *)&v82[3];
            v70[0] = *(_OWORD *)&v82[1];
            *(_DWORD *)((char *)&v66 + 9) = *(_DWORD *)((char *)&v79 + 1);
            HIBYTE(v66) = (v8 | *(unsigned int *)((char *)&v79 + 1)) >> 48;
            *(_WORD *)((char *)&v66 + 13) = WORD2(v9);
            v67 = (unsigned __int64)v80;
            v68 = v81;
            v69 = v82[0];
            *(_QWORD *)&v66 = v78;
            BYTE8(v66) = v79;
            v82[2] = 0;
            v78 = aPreviewAccount;
            v79 = 22;
            v80 = aFilepath_1;
            v81 = 8;
            v82[0] = v105;
            v82[1] = v103;
            sub_1409757B0(&v71, &v78);
            v10 = (char)v71;
            if ( (_BYTE)v71 == 0xFF )
            {
              v25 = v73;
              v5 = v107;
              v26 = v107 + 2528;
              v27 = v72;
              sub_141684120(v107 + 2528, &v66, 152);
              *(_OWORD *)(v5 + 2680) = v27;
              *(_QWORD *)(v5 + 2696) = v25;
              *(_BYTE *)(v5 + 2864) = 0;
              v21 = v5 + 2872;
              sub_141684120(v5 + 2872, v26, 344);
              v103 = (__int64 *)(v5 + 3560);
              *(_BYTE *)(v5 + 3560) = 0;
              v7 = v105;
LABEL_17:
              v105 = v7;
              v104 = v5 + 3216;
              v95 = v21;
              sub_141684120(v5 + 3216, v21, 344);
              switch ( *(_BYTE *)(v5 + 3552) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_69;
                case 2:
                  goto LABEL_68;
                case 3:
                  goto LABEL_30;
              }
            }
            v14 = HIBYTE(v71);
            v15 = *(unsigned __int16 *)((char *)&v71 + 5);
            v16 = *(unsigned int *)((char *)&v71 + 1);
            v12 = *((_QWORD *)&v72 + 1);
            v11 = v72;
            v13 = v73;
            sub_140014150(&v66);
            v9 = ((unsigned __int64)((v14 << 16) | v15) << 32) | v16;
          }
          sub_140BF0DE0(v105);
          if ( *v103 == -1 )
          {
            v23 = 1;
            v24 = v107;
            goto LABEL_59;
          }
          v99 = (_QWORD *)(v107 + 2512);
          v17 = *(_QWORD *)(v107 + 2512);
          v104 = *(_QWORD *)(v107 + 2520);
          v106 = 0;
          v102 = v17;
          while ( v104 != v106 )
          {
            ++v106;
            v18 = v17 + 96;
            sub_1402C7520();
            v17 = v18;
          }
          v22 = *v103;
          v23 = 1;
          v24 = v107;
          if ( !*v103 )
            goto LABEL_59;
          goto LABEL_58;
        case 1:
LABEL_67:
          v105 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_66:
          v105 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v19 = v5 + 3560;
  v20 = *(unsigned __int8 *)(v5 + 3560);
  v21 = v5 + 2872;
  v103 = (__int64 *)(v5 + 3560);
  switch ( v20 )
  {
    case 0LL:
      goto LABEL_17;
    case 1LL:
      v105 = v7;
      v97 = v5 + 3560;
      v96 = v5 + 2872;
      sub_1416C3400(&off_1417B7B80, v19, a3, a4);
    case 2LL:
      v105 = v7;
      v97 = v5 + 3560;
      v96 = v5 + 2872;
      sub_1416C3420(&off_1417B7B80, v19, a3, a4);
    case 3LL:
      v95 = v5 + 2872;
      v105 = v7;
      v104 = v5 + 3216;
      switch ( *(_BYTE *)(v5 + 3552) )
      {
        case 0:
LABEL_18:
          sub_141684120(v5 + 3392, v104, 152);
          *(_BYTE *)(v5 + 3553) = 1;
          v28 = *(_QWORD *)(v5 + 3376);
          v29 = *(_QWORD *)(v5 + 3384);
          v106 = *(_QWORD *)(v5 + 3368);
          v101 = v106;
          v100 = v28;
          sub_1401C50B0(v63, v5 + 3392);
          v31 = v107;
          v32 = *(volatile signed __int64 **)(v107 + 3528);
          v33 = _InterlockedIncrement64(v32);
          if ( (v33 < 0) ^ v30 | (v33 == 0)
            || (v34 = *(volatile signed __int64 **)(v31 + 3536),
                v35 = _InterlockedIncrement64(v34),
                (v35 < 0) ^ v30 | (v35 == 0)) )
          {
            BUG();
          }
          sub_141684120(&v78, v63, 136);
          *(_BYTE *)(v31 + 3553) = 0;
          *(_QWORD *)&v83 = v32;
          *((_QWORD *)&v83 + 1) = v34;
          v84 = v106;
          v102 = v28;
          v85 = v28;
          v86 = v29;
          v36 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v108 = 1;
            v61 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v36 = v61;
          }
          if ( *((_DWORD *)v36 + 4) == 2 )
          {
            v37 = 704;
            if ( *(_BYTE *)v36 )
              v37 = 472;
            v38 = v36[1] + v37;
            v108 = 0;
            v39 = sub_140896860(v38, v36, &v78, &off_1417642A8);
          }
          else
          {
            v40 = 704;
            if ( *((_BYTE *)v36 + 64) )
              v40 = 472;
            v41 = v36[9] + v40;
            v108 = 0;
            v39 = sub_140896860(v41, v36 + 8, &v78, &off_141764290);
          }
          v5 = v107;
          *(_QWORD *)(v107 + 3544) = v39;
          break;
        case 1:
LABEL_69:
          sub_1416C3400(&off_1417BAB00, v19, a3, a4);
        case 2:
LABEL_68:
          sub_1416C3420(&off_1417BAB00, v19, a3, a4);
        case 3:
          break;
      }
LABEL_30:
      v99 = (_QWORD *)(v5 + 3544);
      sub_140B00450(&v78, v5 + 3544, a2);
      v42 = (__int64)v78;
      if ( v78 == (const char *)-3LL )
      {
        v45 = (_BYTE *)v107;
        *(_BYTE *)(v107 + 3552) = 3;
        v45[3560] = 3;
        v45[3568] = 3;
        v46 = 3;
        result = 1;
        goto LABEL_60;
      }
      if ( v78 == (const char *)-2LL )
      {
        v9 = v79;
        v13 = (__int64)v80;
        v43 = 0x800000000000000CuLL;
        v44 = v81;
      }
      else
      {
        v43 = v79;
        v9 = (unsigned __int64)v80;
        v13 = v81;
        v44 = v82[0];
        sub_141684120(v63, &v82[1], 208);
      }
      v48 = v102;
      sub_141684120(&v64, v63, 208);
      v49 = *v99;
      v101 = v106;
      v100 = v48;
      if ( (unsigned __int8)sub_1412F2A80(v49) )
      {
        v101 = v106;
        v100 = v48;
        sub_1412E7580(v49);
      }
      if ( v42 == -2 )
      {
        v78 = (const char *)v43;
        v79 = v9;
        v80 = (const char *)v13;
        v81 = v44;
        *(_OWORD *)v82 = v64;
        v77[0] = &v78;
        v77[1] = sub_141230630;
        sub_14149C0F0(v63, &unk_1417B8CB0, v77);
        v101 = v106;
        v100 = v102;
        sub_140BF0F60(&v78);
        v50 = v63[0];
        v9 = v63[1];
        v13 = v63[2];
        v51 = v107;
        *(_BYTE *)(v107 + 3553) = 0;
        sub_140014150(v51 + 3392);
        v42 = -1;
      }
      else
      {
        sub_141684120(&v71, &v64, 208);
        v52 = v107;
        *(_BYTE *)(v107 + 3553) = 0;
        sub_140014150(v52 + 3392);
        v50 = v43;
      }
      sub_141684120(v62, &v71, 208);
      *(_BYTE *)(v107 + 3552) = 1;
      sub_140BE9030(v104);
      if ( v42 != -1 )
      {
        sub_141684120(v70, v62, 208);
        *(_QWORD *)&v66 = v42;
        *((_QWORD *)&v66 + 1) = v50;
        v67 = v9;
        v68 = v13;
        v69 = v44;
        sub_140B0A1F0(&v78, &v66);
        v9 = ((unsigned __int64)((HIBYTE(v79) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v79 + 5)) << 32)
           | *(unsigned int *)((char *)&v79 + 1);
        v10 = v79;
        v11 = (__int64)v80;
        v12 = v81;
        v13 = v82[0];
        if ( v78 == (const char *)-1LL )
        {
          v23 = 0;
        }
        else
        {
          HIBYTE(v79) = (((unsigned __int64)((HIBYTE(v79) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v79 + 5)) << 32)
                       | *(unsigned int *)((char *)&v79 + 1)) >> 48;
          *(_WORD *)((char *)&v79 + 5) = WORD2(v9);
          *(_DWORD *)((char *)&v79 + 1) = v9;
          *(_QWORD *)&v64 = 0;
          *((_QWORD *)&v64 + 1) = 1;
          v65 = 0;
          *((_QWORD *)&v72 + 1) = 1610612768;
          v71 = (const char *)&v64;
          *(_QWORD *)&v72 = &off_1417C41C0;
          if ( (unsigned __int8)sub_141230630(&v78, &v71, v54) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v98,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v12 = *((_QWORD *)&v64 + 1);
          v11 = v64;
          v13 = v65;
          sub_140BF0F60(&v78);
          v23 = 1;
          v10 = 3;
        }
        goto LABEL_53;
      }
      if ( v13 < 0 )
      {
        v55 = 0;
        goto LABEL_46;
      }
      if ( v13 )
      {
        nullsub_1(v53);
        v55 = 1;
        v56 = sub_140001650(v13, 1);
        if ( !v56 )
        {
LABEL_46:
          v104 = v9;
          v106 = v50;
          sub_1416C2D4B(v55, v13);
        }
        v12 = v56;
        sub_141684120(v56, v9, v13);
        if ( v50 )
          goto LABEL_51;
      }
      else
      {
        v12 = 1;
        if ( v50 )
LABEL_51:
          sub_140001660(v9, v50, 1);
      }
      v23 = 1;
      v10 = 3;
      v11 = v13;
LABEL_53:
      *(_BYTE *)v103 = 1;
      sub_140BF0DE0(v105);
      v24 = v107;
      if ( *(_QWORD *)(v107 + 2504) != -1 )
      {
        v99 = (_QWORD *)(v107 + 2512);
        v57 = *(__int64 **)(v107 + 2512);
        v104 = *(_QWORD *)(v107 + 2520);
        v106 = 0;
        v103 = v57;
        while ( v104 != v106 )
        {
          ++v106;
          v58 = v57 + 12;
          sub_1402C7520();
          v57 = v58;
        }
        v24 = v107;
        v22 = *(_QWORD *)(v107 + 2504);
        if ( v22 )
LABEL_58:
          sub_140001660(*v99, 96 * v22, 8);
      }
LABEL_59:
      *(_BYTE *)(v24 + 3568) = 1;
      sub_140BE21C0(v105);
      v89 = v9;
      v91 = BYTE6(v9);
      v90 = WORD2(v9);
      v92 = v11;
      v93 = v12;
      v94 = v13;
      v88 = v10;
      v87 = v23;
      v59 = v107;
      *(_BYTE *)(v107 + 3587) = 0;
      sub_141684120(&v78, v59, 360);
      *(_BYTE *)(v59 + 3586) = 0;
      v60 = *(_QWORD *)(v59 + 384);
      *(_BYTE *)(v59 + 3585) = 0;
      v67 = *(_QWORD *)(v59 + 376);
      v66 = *(_OWORD *)(v59 + 360);
      sub_14047E370(
        (unsigned int)&v78,
        v60,
        (unsigned int)&v87,
        (unsigned int)&v66,
        *(_DWORD *)(v59 + 3576),
        *(_DWORD *)(v59 + 3580));
      v46 = 1;
      result = 0;
      v45 = (_BYTE *)v107;
LABEL_60:
      v45[3584] = v46;
      return result;
  }
}