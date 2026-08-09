// Pseudocode for restart_codex (EA: 0x140d7fef0, size: 0x8ee)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 restart_codex 的 handler：重启 codex 进程（进程副作用：终止并拉起 codex），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
// Tauri 命令 restart_codex 的 handler：重启 codex 进程（进程副作用：终止并拉起 codex），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
char __fastcall restart_codex(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // r13
  unsigned __int64 v7; // r12
  char v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  char v26; // r15
  _BYTE *v27; // rdx
  const char *v28; // r12
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _DWORD *v34; // rax
  unsigned __int8 v35; // di
  char v36; // cl
  char result; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rcx
  _QWORD *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  _QWORD *v54; // rsi
  __int64 v55; // [rsp+20h] [rbp-60h]
  unsigned __int64 v56; // [rsp+38h] [rbp-48h] BYREF
  const char *v57; // [rsp+40h] [rbp-40h]
  __int64 v58; // [rsp+48h] [rbp-38h]
  __int64 v59; // [rsp+50h] [rbp-30h]
  __int64 v60; // [rsp+58h] [rbp-28h]
  __int128 v61; // [rsp+60h] [rbp-20h]
  __int128 v62; // [rsp+70h] [rbp-10h]
  __int128 v63; // [rsp+80h] [rbp+0h]
  __int128 v64; // [rsp+90h] [rbp+10h]
  __int128 v65; // [rsp+A0h] [rbp+20h]
  __int128 v66; // [rsp+B0h] [rbp+30h]
  __int128 v67; // [rsp+C0h] [rbp+40h]
  __int128 v68; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v69; // [rsp+1B0h] [rbp+130h]
  __int128 v70; // [rsp+1C0h] [rbp+140h]
  __int128 v71; // [rsp+1D0h] [rbp+150h]
  __int128 v72; // [rsp+1E0h] [rbp+160h]
  __int128 v73; // [rsp+1F0h] [rbp+170h]
  __int128 v74; // [rsp+200h] [rbp+180h]
  _QWORD v75[2]; // [rsp+218h] [rbp+198h] BYREF
  const char *v76; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v77; // [rsp+230h] [rbp+1B0h]
  const char *v78; // [rsp+238h] [rbp+1B8h]
  __int64 v79; // [rsp+240h] [rbp+1C0h]
  __int64 v80; // [rsp+248h] [rbp+1C8h]
  _QWORD *v81; // [rsp+250h] [rbp+1D0h]
  __int64 v82; // [rsp+258h] [rbp+1D8h]
  __int64 v83; // [rsp+268h] [rbp+1E8h] BYREF
  char v84; // [rsp+270h] [rbp+1F0h]
  int v85; // [rsp+271h] [rbp+1F1h]
  __int16 v86; // [rsp+275h] [rbp+1F5h]
  char v87; // [rsp+277h] [rbp+1F7h]
  __int64 v88; // [rsp+278h] [rbp+1F8h]
  __int64 v89; // [rsp+280h] [rbp+200h]
  __int64 v90; // [rsp+288h] [rbp+208h]
  __int64 v91; // [rsp+290h] [rbp+210h]
  __int64 v92; // [rsp+298h] [rbp+218h]
  __int64 v93; // [rsp+2A0h] [rbp+220h]
  _QWORD *v94; // [rsp+2A8h] [rbp+228h]
  const char *v95; // [rsp+2B0h] [rbp+230h]
  const char *v96; // [rsp+2B8h] [rbp+238h]
  __int64 v97; // [rsp+2C0h] [rbp+240h]
  char v98; // [rsp+2CFh] [rbp+24Fh]
  __int64 v99; // [rsp+2D0h] [rbp+250h]

  v99 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 2528);
  v97 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v5 = a1 + 1456;
      sub_14172B820(a1 + 1456, a1 + 392, 1064);
      switch ( *(_BYTE *)(v3 + 2512) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1456;
      switch ( *(_BYTE *)(a1 + 2512) )
      {
        case 0:
LABEL_4:
          v6 = (_QWORD *)(v3 + 1976);
          v82 = 0;
          v76 = aRestartCodex;
          v77 = 13;
          v78 = aApp_4;
          v79 = 3;
          v93 = v5;
          v80 = v5;
          v81 = v6;
          sub_1401A9630((__int64)&v56, (__int64)&v76);
          v7 = ((unsigned __int64)((HIBYTE(v57) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v57 + 5)) << 32)
             | *(unsigned int *)((char *)&v57 + 1);
          v8 = (char)v57;
          v9 = v58;
          v10 = v59;
          v11 = v60;
          if ( v56 == -1 )
          {
            v94 = v6;
            sub_140CAB140(v93);
            v35 = 1;
            if ( *v94 == -1 )
              goto LABEL_41;
            v41 = *(_QWORD *)(v97 + 1984);
            v95 = *(const char **)(v97 + 1992);
            v96 = nullptr;
            v92 = v41;
            while ( v95 != v96 )
            {
              ++v96;
              v42 = v41 + 96;
              sub_140401FB0(v41, v38, v39, v40, v55);
              v41 = v42;
            }
            if ( !*v94 )
            {
LABEL_41:
              v44 = v97;
            }
            else
            {
              v44 = v97;
              sub_140001660(*(_QWORD *)(v97 + 1984), 96LL * *v94, 8);
            }
LABEL_54:
            *(_BYTE *)(v44 + 2512) = 1;
            sub_140C9F530(v93);
            v85 = v7;
            v87 = BYTE6(v7);
            v86 = WORD2(v7);
            v88 = v9;
            v89 = v10;
            v90 = v11;
            v84 = v8;
            v83 = v35;
            v52 = v97;
            *(_BYTE *)(v97 + 2531) = 0;
            sub_14172B820(&v56, v52, 360);
            *(_BYTE *)(v52 + 2530) = 0;
            v53 = *(_QWORD *)(v52 + 384);
            *(_BYTE *)(v52 + 2529) = 0;
            *(_QWORD *)&v69 = *(_QWORD *)(v52 + 376);
            v68 = *(_OWORD *)(v52 + 360);
            sub_140AFFC30((__int64)&v56, v53, (__int64)&v83, &v68, *(_DWORD *)(v52 + 2520), *(_DWORD *)(v52 + 2524));
            v36 = 1;
            result = 0;
            v27 = (_BYTE *)v97;
            goto LABEL_55;
          }
          v74 = v67;
          v73 = v66;
          v72 = v65;
          v71 = v64;
          v70 = v63;
          v69 = v62;
          v68 = v61;
          v3 = v97;
          v12 = v97 + 2000;
          *(_QWORD *)(v97 + 2000) = v56;
          *(_BYTE *)(v3 + 2008) = v8;
          *(_BYTE *)(v3 + 2015) = BYTE6(v7);
          *(_WORD *)(v3 + 2013) = WORD2(v7);
          *(_DWORD *)(v3 + 2009) = v7;
          *(_QWORD *)(v3 + 2016) = v9;
          *(_QWORD *)(v3 + 2024) = v10;
          *(_QWORD *)(v3 + 2032) = v11;
          v13 = v69;
          v14 = v70;
          v15 = v71;
          *(_OWORD *)(v3 + 2040) = v68;
          *(_OWORD *)(v3 + 2056) = v13;
          *(_OWORD *)(v3 + 2072) = v14;
          *(_OWORD *)(v3 + 2088) = v15;
          *(_OWORD *)(v3 + 2104) = v72;
          *(_OWORD *)(v3 + 2120) = v73;
          *(_OWORD *)(v3 + 2136) = v74;
          *(_BYTE *)(v3 + 2160) = 0;
          v16 = v3 + 2168;
          sub_14172B820(v3 + 2168, v12, 168);
          v94 = (_QWORD *)(v3 + 2504);
          *(_BYTE *)(v3 + 2504) = 0;
LABEL_7:
          v95 = (const char *)(v3 + 2336);
          v92 = v16;
          sub_14172B820(v3 + 2336, v16, 168);
LABEL_9:
          sub_14172B820(&v56, v95, 152);
          v18 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v98 = 1;
            v54 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v18 = v54;
          }
          if ( *((_DWORD *)v18 + 4) == 2 )
          {
            v19 = 704;
            if ( *(_BYTE *)v18 )
              v19 = 472;
            v20 = v18[1] + v19;
            v98 = 0;
            v21 = sub_14085A400(v20, v18, &v56, &off_1417EBF48);
          }
          else
          {
            v22 = 704;
            if ( *((_BYTE *)v18 + 64) )
              v22 = 472;
            v23 = v18[9] + v22;
            v98 = 0;
            v21 = sub_14085A400(v23, v18 + 8, &v56, &off_1417EBF30);
          }
          v24 = v97;
          *(_QWORD *)(v97 + 2488) = v21;
          v96 = (const char *)(v24 + 2488);
          sub_140505C20(&v56, v24 + 2488, a2);
          if ( v56 == 2 )
          {
            v27 = (_BYTE *)v97;
            *(_BYTE *)(v97 + 2496) = 3;
          }
          else
          {
            if ( v56 )
            {
              v25 = 0x800000000000000CuLL;
              v26 = 0;
            }
            else
            {
              v25 = -1;
              v26 = 1;
            }
            v28 = v57;
            v29 = v58;
            v11 = v59;
            v30 = *(_QWORD *)v96;
            if ( (unsigned __int8)sub_141398090(*(_QWORD *)v96) )
              sub_14139A2E0(v30);
            if ( !v26 )
            {
              v56 = v25;
              v57 = v28;
              v58 = v29;
              v59 = v11;
              v75[0] = &v56;
              v75[1] = sub_1412DDF00;
              sub_141543AF0(&v76, &unk_1418877C5, v75);
              sub_140CAB2C0(&v56);
              v28 = v76;
              v29 = v77;
              v11 = (__int64)v78;
            }
            v27 = (_BYTE *)v97;
            *(_BYTE *)(v97 + 2496) = 1;
            if ( v28 != (const char *)-2LL )
            {
              if ( v28 == (const char *)-1LL )
              {
                nullsub_1(v31, v27, v32, v33, v55);
                v9 = 128;
                v34 = (_DWORD *)sub_140001650(128, 1);
                if ( !v34 )
                  sub_14176E54B(1, 128);
                v10 = (__int64)v34;
                *v34 = 1819047278;
                v11 = 4;
                v35 = 0;
                v8 = 0;
                goto LABEL_47;
              }
              if ( v11 < 0 )
              {
                v43 = 0;
                goto LABEL_38;
              }
              if ( v11 )
              {
                nullsub_1(v31, v27, v32, v33, v55);
                v43 = 1;
                v45 = sub_140001650(v11, 1);
                if ( !v45 )
                {
LABEL_38:
                  v95 = (const char *)v29;
                  v96 = v28;
                  sub_14176E54B(v43, v11);
                }
                v10 = v45;
                sub_14172B820(v45, v29, v11);
                if ( !v28 )
                {
LABEL_46:
                  v8 = 3;
                  v35 = 1;
                  v9 = v11;
LABEL_47:
                  *(_BYTE *)v94 = 1;
                  sub_140CAB140(v93);
                  v44 = v97;
                  if ( *(_QWORD *)(v97 + 1976) != -1 )
                  {
                    v49 = *(_QWORD **)(v97 + 1984);
                    v95 = *(const char **)(v97 + 1992);
                    v96 = nullptr;
                    v94 = v49;
                    while ( v95 != v96 )
                    {
                      ++v96;
                      v50 = v49 + 12;
                      sub_140401FB0(v49, v46, v47, v48, v55);
                      v49 = v50;
                    }
                    v44 = v97;
                    v51 = *(_QWORD *)(v97 + 1976);
                    if ( v51 )
                      sub_140001660(*(_QWORD *)(v97 + 1984), 96 * v51, 8);
                  }
                  v7 = 0;
                  goto LABEL_54;
                }
              }
              else
              {
                v10 = 1;
                if ( !v28 )
                  goto LABEL_46;
              }
              sub_140001660(v29, v28, 1);
              goto LABEL_46;
            }
          }
          v27[2504] = 3;
          v27[2512] = 3;
          v36 = 3;
          result = 1;
LABEL_55:
          v27[2528] = v36;
          return result;
        case 1:
LABEL_61:
          v93 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_60:
          v93 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v93 = v5;
          v17 = *(unsigned __int8 *)(v3 + 2504);
          v16 = v3 + 2168;
          v94 = (_QWORD *)(v3 + 2504);
          switch ( v17 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v91 = v3 + 2168;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v91 = v3 + 2168;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v92 = v3 + 2168;
              v95 = (const char *)(v3 + 2336);
              goto LABEL_9;
          }
      }
  }
}
