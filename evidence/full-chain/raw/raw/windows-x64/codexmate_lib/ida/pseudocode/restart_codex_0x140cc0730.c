// module: codexmate_lib
// addr: 0x140cc0730
// name: restart_codex
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = restart_codex | mapped via command-name string xref (win-native, ground-truth)
char __fastcall restart_codex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r13
  unsigned __int64 v9; // r12
  char v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  char v29; // r15
  _BYTE *v30; // rdx
  const char *v31; // r12
  __int64 v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned __int8 v36; // di
  char v37; // cl
  char result; // al
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rsi
  unsigned __int64 v50; // [rsp+38h] [rbp-48h] BYREF
  const char *v51; // [rsp+40h] [rbp-40h]
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int64 v53; // [rsp+50h] [rbp-30h]
  __int64 v54; // [rsp+58h] [rbp-28h]
  __int128 v55; // [rsp+60h] [rbp-20h]
  __int128 v56; // [rsp+70h] [rbp-10h]
  __int128 v57; // [rsp+80h] [rbp+0h]
  __int128 v58; // [rsp+90h] [rbp+10h]
  __int128 v59; // [rsp+A0h] [rbp+20h]
  __int128 v60; // [rsp+B0h] [rbp+30h]
  __int128 v61; // [rsp+C0h] [rbp+40h]
  __int128 v62; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v63; // [rsp+1B0h] [rbp+130h]
  __int128 v64; // [rsp+1C0h] [rbp+140h]
  __int128 v65; // [rsp+1D0h] [rbp+150h]
  __int128 v66; // [rsp+1E0h] [rbp+160h]
  __int128 v67; // [rsp+1F0h] [rbp+170h]
  __int128 v68; // [rsp+200h] [rbp+180h]
  _QWORD v69[2]; // [rsp+218h] [rbp+198h] BYREF
  const char *v70; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v71; // [rsp+230h] [rbp+1B0h]
  const char *v72; // [rsp+238h] [rbp+1B8h]
  __int64 v73; // [rsp+240h] [rbp+1C0h]
  __int64 v74; // [rsp+248h] [rbp+1C8h]
  _QWORD *v75; // [rsp+250h] [rbp+1D0h]
  __int64 v76; // [rsp+258h] [rbp+1D8h]
  __int64 v77; // [rsp+268h] [rbp+1E8h] BYREF
  char v78; // [rsp+270h] [rbp+1F0h]
  int v79; // [rsp+271h] [rbp+1F1h]
  __int16 v80; // [rsp+275h] [rbp+1F5h]
  char v81; // [rsp+277h] [rbp+1F7h]
  __int64 v82; // [rsp+278h] [rbp+1F8h]
  __int64 v83; // [rsp+280h] [rbp+200h]
  __int64 v84; // [rsp+288h] [rbp+208h]
  __int64 v85; // [rsp+290h] [rbp+210h]
  __int64 v86; // [rsp+298h] [rbp+218h]
  __int64 v87; // [rsp+2A0h] [rbp+220h]
  _QWORD *v88; // [rsp+2A8h] [rbp+228h]
  const char *v89; // [rsp+2B0h] [rbp+230h]
  const char *v90; // [rsp+2B8h] [rbp+238h]
  __int64 v91; // [rsp+2C0h] [rbp+240h]
  char v92; // [rsp+2CFh] [rbp+24Fh]
  __int64 v93; // [rsp+2D0h] [rbp+250h]

  v93 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 2528);
  v91 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v7 = a1 + 1456;
      sub_141684120(a1 + 1456, a1 + 392, 1064);
      switch ( *(_BYTE *)(v5 + 2512) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_61;
        case 2:
          goto LABEL_60;
        case 3:
          goto LABEL_6;
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
          v8 = (_QWORD *)(v5 + 1976);
          v76 = 0;
          v70 = aRestartCodex;
          v71 = 13;
          v72 = aApp_2;
          v73 = 3;
          v87 = v7;
          v74 = v7;
          v75 = v8;
          sub_1401C3650(&v50, &v70);
          v9 = ((unsigned __int64)((HIBYTE(v51) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v51 + 5)) << 32)
             | *(unsigned int *)((char *)&v51 + 1);
          v10 = (char)v51;
          v11 = v52;
          v12 = v53;
          v13 = v54;
          if ( v50 == -1 )
          {
            v88 = v8;
            sub_140BF0DE0(v87);
            v36 = 1;
            if ( *v88 == -1 )
              goto LABEL_41;
            v39 = *(_QWORD *)(v91 + 1984);
            v89 = *(const char **)(v91 + 1992);
            v90 = nullptr;
            v86 = v39;
            while ( v89 != v90 )
            {
              ++v90;
              v40 = v39 + 96;
              sub_1402C7520();
              v39 = v40;
            }
            if ( !*v88 )
            {
LABEL_41:
              v42 = v91;
            }
            else
            {
              v42 = v91;
              sub_140001660(*(_QWORD *)(v91 + 1984), 96LL * *v88, 8);
            }
LABEL_54:
            *(_BYTE *)(v42 + 2512) = 1;
            sub_140BE4E80(v87);
            v79 = v9;
            v81 = BYTE6(v9);
            v80 = WORD2(v9);
            v82 = v11;
            v83 = v12;
            v84 = v13;
            v78 = v10;
            v77 = v36;
            v47 = v91;
            *(_BYTE *)(v91 + 2531) = 0;
            sub_141684120(&v50, v47, 360);
            *(_BYTE *)(v47 + 2530) = 0;
            v48 = *(_QWORD *)(v47 + 384);
            *(_BYTE *)(v47 + 2529) = 0;
            *(_QWORD *)&v63 = *(_QWORD *)(v47 + 376);
            v62 = *(_OWORD *)(v47 + 360);
            sub_14047E370(
              (unsigned int)&v50,
              v48,
              (unsigned int)&v77,
              (unsigned int)&v62,
              *(_DWORD *)(v47 + 2520),
              *(_DWORD *)(v47 + 2524));
            v37 = 1;
            result = 0;
            v30 = (_BYTE *)v91;
            goto LABEL_55;
          }
          v68 = v61;
          v67 = v60;
          v66 = v59;
          v65 = v58;
          v64 = v57;
          v63 = v56;
          v62 = v55;
          v5 = v91;
          v14 = v91 + 2000;
          *(_QWORD *)(v91 + 2000) = v50;
          *(_BYTE *)(v5 + 2008) = v10;
          *(_BYTE *)(v5 + 2015) = BYTE6(v9);
          *(_WORD *)(v5 + 2013) = WORD2(v9);
          *(_DWORD *)(v5 + 2009) = v9;
          *(_QWORD *)(v5 + 2016) = v11;
          *(_QWORD *)(v5 + 2024) = v12;
          *(_QWORD *)(v5 + 2032) = v13;
          v15 = v63;
          v16 = v64;
          v17 = v65;
          *(_OWORD *)(v5 + 2040) = v62;
          *(_OWORD *)(v5 + 2056) = v15;
          *(_OWORD *)(v5 + 2072) = v16;
          *(_OWORD *)(v5 + 2088) = v17;
          *(_OWORD *)(v5 + 2104) = v66;
          *(_OWORD *)(v5 + 2120) = v67;
          *(_OWORD *)(v5 + 2136) = v68;
          *(_BYTE *)(v5 + 2160) = 0;
          v18 = v5 + 2168;
          sub_141684120(v5 + 2168, v14, 168);
          v88 = (_QWORD *)(v5 + 2504);
          *(_BYTE *)(v5 + 2504) = 0;
LABEL_7:
          v89 = (const char *)(v5 + 2336);
          v86 = v18;
          sub_141684120(v5 + 2336, v18, 168);
LABEL_9:
          sub_141684120(&v50, v89, 152);
          v21 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v92 = 1;
            v49 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v21 = v49;
          }
          if ( *((_DWORD *)v21 + 4) == 2 )
          {
            v22 = 704;
            if ( *(_BYTE *)v21 )
              v22 = 472;
            v23 = v21[1] + v22;
            v92 = 0;
            v24 = sub_14089A180(v23, v21, &v50, &off_1417642A8);
          }
          else
          {
            v25 = 704;
            if ( *((_BYTE *)v21 + 64) )
              v25 = 472;
            v26 = v21[9] + v25;
            v92 = 0;
            v24 = sub_14089A180(v26, v21 + 8, &v50, &off_141764290);
          }
          v27 = v91;
          *(_QWORD *)(v91 + 2488) = v24;
          v90 = (const char *)(v27 + 2488);
          sub_140B032C0(&v50, v27 + 2488, a2);
          if ( v50 == 2 )
          {
            v30 = (_BYTE *)v91;
            *(_BYTE *)(v91 + 2496) = 3;
          }
          else
          {
            if ( v50 )
            {
              v28 = 0x800000000000000CuLL;
              v29 = 0;
            }
            else
            {
              v28 = -1;
              v29 = 1;
            }
            v31 = v51;
            v32 = v52;
            v13 = v53;
            v33 = *(_QWORD *)v90;
            if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)v90) )
              sub_1412E7580(v33);
            if ( !v29 )
            {
              v50 = v28;
              v51 = v31;
              v52 = v32;
              v53 = v13;
              v69[0] = &v50;
              v69[1] = sub_141230630;
              sub_14149C0F0(&v70, &unk_1417BA155, v69);
              sub_140BF0F60(&v50);
              v31 = v70;
              v32 = v71;
              v13 = (__int64)v72;
            }
            v30 = (_BYTE *)v91;
            *(_BYTE *)(v91 + 2496) = 1;
            if ( v31 != (const char *)-2LL )
            {
              if ( v31 == (const char *)-1LL )
              {
                nullsub_1(v34);
                v11 = 128;
                v35 = (_DWORD *)sub_140001650(128, 1);
                if ( !v35 )
                  sub_1416C2D4B(1, 128);
                v12 = (__int64)v35;
                *v35 = 1819047278;
                v13 = 4;
                v36 = 0;
                v10 = 0;
                goto LABEL_47;
              }
              if ( v13 < 0 )
              {
                v41 = 0;
                goto LABEL_38;
              }
              if ( v13 )
              {
                nullsub_1(v34);
                v41 = 1;
                v43 = sub_140001650(v13, 1);
                if ( !v43 )
                {
LABEL_38:
                  v89 = (const char *)v32;
                  v90 = v31;
                  sub_1416C2D4B(v41, v13);
                }
                v12 = v43;
                sub_141684120(v43, v32, v13);
                if ( !v31 )
                {
LABEL_46:
                  v10 = 3;
                  v36 = 1;
                  v11 = v13;
LABEL_47:
                  *(_BYTE *)v88 = 1;
                  sub_140BF0DE0(v87);
                  v42 = v91;
                  if ( *(_QWORD *)(v91 + 1976) != -1 )
                  {
                    v44 = *(_QWORD **)(v91 + 1984);
                    v89 = *(const char **)(v91 + 1992);
                    v90 = nullptr;
                    v88 = v44;
                    while ( v89 != v90 )
                    {
                      ++v90;
                      v45 = v44 + 12;
                      sub_1402C7520();
                      v44 = v45;
                    }
                    v42 = v91;
                    v46 = *(_QWORD *)(v91 + 1976);
                    if ( v46 )
                      sub_140001660(*(_QWORD *)(v91 + 1984), 96 * v46, 8);
                  }
                  v9 = 0;
                  goto LABEL_54;
                }
              }
              else
              {
                v12 = 1;
                if ( !v31 )
                  goto LABEL_46;
              }
              sub_140001660(v32, v31, 1);
              goto LABEL_46;
            }
          }
          v30[2504] = 3;
          v30[2512] = 3;
          v37 = 3;
          result = 1;
LABEL_55:
          v30[2528] = v37;
          return result;
        case 1:
LABEL_61:
          v87 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_60:
          v87 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_6:
          v87 = v7;
          v19 = v5 + 2504;
          v20 = *(unsigned __int8 *)(v5 + 2504);
          v18 = v5 + 2168;
          v88 = (_QWORD *)(v5 + 2504);
          switch ( v20 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v85 = v5 + 2168;
              sub_1416C3400(&off_1417B7B80, v19, a3, a4);
            case 2LL:
              v85 = v5 + 2168;
              sub_1416C3420(&off_1417B7B80, v19, a3, a4);
            case 3LL:
              v86 = v5 + 2168;
              v89 = (const char *)(v5 + 2336);
              goto LABEL_9;
          }
      }
  }
}