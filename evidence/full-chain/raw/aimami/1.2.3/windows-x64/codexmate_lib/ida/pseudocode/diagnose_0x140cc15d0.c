// module: codexmate_lib
// addr: 0x140cc15d0
// name: diagnose
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = diagnose | mapped via command-name string xref (win-native, ground-truth)
char __fastcall diagnose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
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
  const char *v28; // rbx
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  _BYTE *v31; // rdx
  char v32; // cl
  char result; // al
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 *v36; // r14
  __int64 v37; // r8
  unsigned __int8 v38; // bl
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 *v45; // rcx
  __int64 *v46; // r13
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rsi
  _BYTE v50[376]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v52; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v53; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v54; // [rsp+330h] [rbp+2B0h]
  __int64 v55; // [rsp+338h] [rbp+2B8h]
  __int128 v56; // [rsp+4A0h] [rbp+420h] BYREF
  const char *v57; // [rsp+4B0h] [rbp+430h]
  __int64 v58; // [rsp+4B8h] [rbp+438h]
  __int64 v59; // [rsp+4C0h] [rbp+440h]
  _QWORD v60[47]; // [rsp+4C8h] [rbp+448h] BYREF
  __int128 v61; // [rsp+640h] [rbp+5C0h]
  __int128 v62; // [rsp+650h] [rbp+5D0h]
  __int128 v63; // [rsp+660h] [rbp+5E0h]
  __int128 v64; // [rsp+670h] [rbp+5F0h]
  __int128 v65; // [rsp+680h] [rbp+600h]
  __int128 v66; // [rsp+690h] [rbp+610h]
  __int128 v67; // [rsp+6A0h] [rbp+620h]
  unsigned __int64 v68; // [rsp+6B0h] [rbp+630h] BYREF
  unsigned __int64 v69; // [rsp+6B8h] [rbp+638h]
  __int64 v70; // [rsp+6C0h] [rbp+640h]
  __int64 v71; // [rsp+6C8h] [rbp+648h]
  _OWORD v72[24]; // [rsp+6D0h] [rbp+650h] BYREF
  _QWORD v73[2]; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v74; // [rsp+860h] [rbp+7E0h] BYREF
  char v75; // [rsp+868h] [rbp+7E8h]
  int v76; // [rsp+869h] [rbp+7E9h]
  __int16 v77; // [rsp+86Dh] [rbp+7EDh]
  char v78; // [rsp+86Fh] [rbp+7EFh]
  __int64 v79; // [rsp+870h] [rbp+7F0h]
  __int64 v80; // [rsp+878h] [rbp+7F8h]
  __int64 v81; // [rsp+880h] [rbp+800h]
  __int64 v82; // [rsp+888h] [rbp+808h]
  __int64 v83; // [rsp+890h] [rbp+810h]
  char v84; // [rsp+89Fh] [rbp+81Fh] BYREF
  __int64 v85; // [rsp+8A0h] [rbp+820h]
  _QWORD *v86; // [rsp+8A8h] [rbp+828h]
  _BYTE *v87; // [rsp+8B0h] [rbp+830h]
  __int64 *v88; // [rsp+8B8h] [rbp+838h]
  __int64 v89; // [rsp+8C0h] [rbp+840h]
  char v90; // [rsp+8CFh] [rbp+84Fh]
  __int64 v91; // [rsp+8D0h] [rbp+850h]

  v91 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 2528);
  v89 = a1;
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
          v8 = (__int64 *)(v5 + 1976);
          v60[1] = 0;
          *(_QWORD *)&v56 = aDiagnose;
          *((_QWORD *)&v56 + 1) = 8;
          v57 = aApp_2;
          v58 = 3;
          v85 = v7;
          v59 = v7;
          v60[0] = v8;
          sub_1401C3650(&v68, &v56);
          v9 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
             | *(unsigned int *)((char *)&v69 + 1);
          v10 = v69;
          v11 = v70;
          v12 = v71;
          v13 = *(_QWORD *)&v72[0];
          if ( v68 == -1 )
          {
            v88 = v8;
            sub_140BF0DE0(v85);
            v38 = 1;
            if ( *v88 == -1 )
              goto LABEL_45;
            v40 = *(_QWORD *)(v89 + 1984);
            v86 = *(_QWORD **)(v89 + 1992);
            v87 = nullptr;
            v83 = v40;
            while ( v86 != (_QWORD *)v87 )
            {
              ++v87;
              v41 = v40 + 96;
              sub_1402C7520();
              v40 = v41;
            }
            v43 = *v88;
            if ( !*v88 )
            {
LABEL_45:
              v44 = v89;
LABEL_55:
              *(_BYTE *)(v44 + 2512) = 1;
              sub_140BE4E80(v85);
              v76 = v9;
              v78 = BYTE6(v9);
              v77 = WORD2(v9);
              v79 = v11;
              v80 = v12;
              v81 = v13;
              v75 = v10;
              v74 = v38;
              v47 = v89;
              *(_BYTE *)(v89 + 2531) = 0;
              sub_141684120(&v68, v47, 360);
              *(_BYTE *)(v47 + 2530) = 0;
              v48 = *(_QWORD *)(v47 + 384);
              *(_BYTE *)(v47 + 2529) = 0;
              v57 = *(const char **)(v47 + 376);
              v56 = *(_OWORD *)(v47 + 360);
              sub_14047E370(
                (unsigned int)&v68,
                v48,
                (unsigned int)&v74,
                (unsigned int)&v56,
                *(_DWORD *)(v47 + 2520),
                *(_DWORD *)(v47 + 2524));
              v32 = 1;
              result = 0;
              v31 = (_BYTE *)v89;
              goto LABEL_56;
            }
            v44 = v89;
LABEL_54:
            sub_140001660(*(_QWORD *)(v44 + 1984), 96 * v43, 8);
            goto LABEL_55;
          }
          v67 = *(_OWORD *)((char *)&v72[6] + 8);
          v66 = *(_OWORD *)((char *)&v72[5] + 8);
          v65 = *(_OWORD *)((char *)&v72[4] + 8);
          v64 = *(_OWORD *)((char *)&v72[3] + 8);
          v63 = *(_OWORD *)((char *)&v72[2] + 8);
          v62 = *(_OWORD *)((char *)&v72[1] + 8);
          v61 = *(_OWORD *)((char *)v72 + 8);
          v5 = v89;
          v14 = v89 + 2000;
          *(_QWORD *)(v89 + 2000) = v68;
          *(_BYTE *)(v5 + 2008) = v10;
          *(_BYTE *)(v5 + 2015) = BYTE6(v9);
          *(_WORD *)(v5 + 2013) = WORD2(v9);
          *(_DWORD *)(v5 + 2009) = v9;
          *(_QWORD *)(v5 + 2016) = v11;
          *(_QWORD *)(v5 + 2024) = v12;
          *(_QWORD *)(v5 + 2032) = v13;
          v15 = v62;
          v16 = v63;
          v17 = v64;
          *(_OWORD *)(v5 + 2040) = v61;
          *(_OWORD *)(v5 + 2056) = v15;
          *(_OWORD *)(v5 + 2072) = v16;
          *(_OWORD *)(v5 + 2088) = v17;
          *(_OWORD *)(v5 + 2104) = v65;
          *(_OWORD *)(v5 + 2120) = v66;
          *(_OWORD *)(v5 + 2136) = v67;
          *(_BYTE *)(v5 + 2160) = 0;
          v18 = v5 + 2168;
          sub_141684120(v5 + 2168, v14, 168);
          v87 = (_BYTE *)(v5 + 2504);
          *(_BYTE *)(v5 + 2504) = 0;
LABEL_7:
          v88 = (__int64 *)(v5 + 2336);
          v83 = v18;
          sub_141684120(v5 + 2336, v18, 168);
LABEL_9:
          sub_141684120(&v68, v88, 152);
          v21 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v90 = 1;
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
            v90 = 0;
            v24 = sub_14089B610(v23, v21, &v68, &off_1417642A8);
          }
          else
          {
            v25 = 704;
            if ( *((_BYTE *)v21 + 64) )
              v25 = 472;
            v26 = v21[9] + v25;
            v90 = 0;
            v24 = sub_14089B610(v26, v21 + 8, &v68, &off_141764290);
          }
          v27 = v89;
          *(_QWORD *)(v89 + 2488) = v24;
          v86 = (_QWORD *)(v27 + 2488);
          sub_140AFF590(&v68, v27 + 2488, a2);
          v9 = v68;
          if ( v68 != -2 )
          {
            if ( (_DWORD)v68 == -1 )
            {
              v28 = (const char *)v69;
              v13 = v70;
              v29 = 0x800000000000000CuLL;
              v30 = v71;
            }
            else
            {
              v29 = v69;
              v28 = (const char *)v70;
              v13 = v71;
              v30 = *(_QWORD *)&v72[0];
              sub_141684120(&v53, (char *)v72 + 8, 376);
            }
            sub_141684120(&v51, &v53, 376);
            v34 = *v86;
            if ( (unsigned __int8)sub_1412F2A80(*v86) )
              sub_1412E7580(v34);
            if ( (_DWORD)v9 == -1 )
            {
              v68 = v29;
              v69 = (unsigned __int64)v28;
              v70 = v13;
              v71 = v30;
              v72[0] = v51;
              v73[0] = &v68;
              v73[1] = sub_141230630;
              sub_14149C0F0(&v53, &unk_1417BA195, v73);
              sub_140BF0F60(&v68);
              v29 = v53;
              v36 = (__int64 *)v54;
              v13 = v55;
              *(_BYTE *)(v89 + 2496) = 1;
            }
            else
            {
              sub_141684120(v50, &v51, 376);
              *(_BYTE *)(v89 + 2496) = 1;
              v36 = (__int64 *)v28;
              if ( (_DWORD)v9 != 2 )
              {
                sub_141684120(v60, v50, 376);
                *(_QWORD *)&v56 = v9;
                *((_QWORD *)&v56 + 1) = v29;
                v57 = v28;
                v58 = v13;
                v59 = v30;
                sub_140B04DD0(&v68, &v56);
                v9 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
                   | *(unsigned int *)((char *)&v69 + 1);
                v10 = v69;
                v11 = v70;
                v12 = v71;
                v13 = *(_QWORD *)&v72[0];
                if ( v68 == -1 )
                {
                  v38 = 0;
                }
                else
                {
                  HIBYTE(v69) = (((unsigned __int64)((HIBYTE(v69) << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
                               | *(unsigned int *)((char *)&v69 + 1)) >> 48;
                  *(_WORD *)((char *)&v69 + 5) = WORD2(v9);
                  *(_DWORD *)((char *)&v69 + 1) = v9;
                  v53 = 0;
                  v54 = 1;
                  v55 = 0;
                  v52 = 1610612768;
                  *(_QWORD *)&v51 = &v53;
                  *((_QWORD *)&v51 + 1) = &off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v68, &v51, v37) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v84,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v11 = v53;
                  v12 = v54;
                  v13 = v55;
                  sub_140BF0F60(&v68);
                  v38 = 1;
                  v10 = 3;
                }
LABEL_49:
                *v87 = 1;
                sub_140BF0DE0(v85);
                v44 = v89;
                if ( *(_QWORD *)(v89 + 1976) == -1 )
                  goto LABEL_55;
                v45 = *(__int64 **)(v89 + 1984);
                v86 = *(_QWORD **)(v89 + 1992);
                v87 = nullptr;
                v88 = v45;
                while ( v86 != (_QWORD *)v87 )
                {
                  ++v87;
                  v46 = v45 + 12;
                  sub_1402C7520();
                  v45 = v46;
                }
                v44 = v89;
                v43 = *(_QWORD *)(v89 + 1976);
                if ( !v43 )
                  goto LABEL_55;
                goto LABEL_54;
              }
            }
            if ( v13 < 0 )
            {
              v39 = 0;
              goto LABEL_33;
            }
            if ( v13 )
            {
              nullsub_1(v35);
              v39 = 1;
              v42 = sub_140001650(v13, 1);
              if ( !v42 )
              {
LABEL_33:
                v88 = v36;
                v86 = (_QWORD *)v29;
                sub_1416C2D4B(v39, v13);
              }
              v12 = v42;
              sub_141684120(v42, v36, v13);
              if ( !v29 )
              {
LABEL_42:
                v38 = 1;
                v10 = 3;
                v11 = v13;
                goto LABEL_49;
              }
            }
            else
            {
              v12 = 1;
              if ( !v29 )
                goto LABEL_42;
            }
            sub_140001660(v36, v29, 1);
            goto LABEL_42;
          }
          v31 = (_BYTE *)v89;
          *(_BYTE *)(v89 + 2496) = 3;
          v31[2504] = 3;
          v31[2512] = 3;
          v32 = 3;
          result = 1;
LABEL_56:
          v31[2528] = v32;
          return result;
        case 1:
LABEL_61:
          v85 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_60:
          v85 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_6:
          v85 = v7;
          v19 = v5 + 2504;
          v20 = *(unsigned __int8 *)(v5 + 2504);
          v18 = v5 + 2168;
          v87 = (_BYTE *)(v5 + 2504);
          switch ( v20 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v82 = v5 + 2168;
              sub_1416C3400(&off_1417B7B80, v19, a3, a4);
            case 2LL:
              v82 = v5 + 2168;
              sub_1416C3420(&off_1417B7B80, v19, a3, a4);
            case 3LL:
              v83 = v5 + 2168;
              v88 = (__int64 *)(v5 + 2336);
              goto LABEL_9;
          }
      }
  }
}