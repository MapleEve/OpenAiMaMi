// Pseudocode for detect_api_proxy_config (EA: 0x140d83110, size: 0xae9)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 detect_api_proxy_config 的 handler：探测当前系统/环境 API 代理配置（引用 app/deepLink/protocol 上下文）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
// Tauri 命令 detect_api_proxy_config 的 handler：探测当前系统/环境 API 代理配置（引用 app/deepLink/protocol 上下文）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
char __fastcall detect_api_proxy_config(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  char v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
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
  const char *v25; // rbx
  unsigned __int64 v26; // r13
  __int64 v27; // r12
  _BYTE *v28; // rdx
  char v29; // cl
  char result; // al
  __int64 *v31; // r14
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // r14
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
  __int64 v50; // [rsp+20h] [rbp-60h]
  _BYTE v51[136]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v52; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v53; // [rsp+C8h] [rbp+48h]
  __int128 v54; // [rsp+140h] [rbp+C0h] BYREF
  const char *v55; // [rsp+150h] [rbp+D0h]
  __int64 v56; // [rsp+158h] [rbp+D8h]
  __int64 v57; // [rsp+160h] [rbp+E0h]
  _QWORD v58[18]; // [rsp+168h] [rbp+E8h] BYREF
  unsigned __int64 v59; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v60; // [rsp+200h] [rbp+180h]
  __int64 v61; // [rsp+208h] [rbp+188h]
  __int128 v62; // [rsp+280h] [rbp+200h]
  __int128 v63; // [rsp+290h] [rbp+210h]
  __int128 v64; // [rsp+2A0h] [rbp+220h]
  __int128 v65; // [rsp+2B0h] [rbp+230h]
  __int128 v66; // [rsp+2C0h] [rbp+240h]
  __int128 v67; // [rsp+2D0h] [rbp+250h]
  __int128 v68; // [rsp+2E0h] [rbp+260h]
  unsigned __int64 v69; // [rsp+2F8h] [rbp+278h] BYREF
  unsigned __int64 v70; // [rsp+300h] [rbp+280h]
  __int64 v71; // [rsp+308h] [rbp+288h]
  __int64 v72; // [rsp+310h] [rbp+290h]
  _OWORD v73[20]; // [rsp+318h] [rbp+298h] BYREF
  _QWORD v74[2]; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v75; // [rsp+470h] [rbp+3F0h] BYREF
  char v76; // [rsp+478h] [rbp+3F8h]
  int v77; // [rsp+479h] [rbp+3F9h]
  __int16 v78; // [rsp+47Dh] [rbp+3FDh]
  char v79; // [rsp+47Fh] [rbp+3FFh]
  __int64 v80; // [rsp+480h] [rbp+400h]
  __int64 v81; // [rsp+488h] [rbp+408h]
  __int64 v82; // [rsp+490h] [rbp+410h]
  __int64 v83; // [rsp+498h] [rbp+418h]
  __int64 v84; // [rsp+4A0h] [rbp+420h]
  char v85; // [rsp+4AFh] [rbp+42Fh] BYREF
  __int64 v86; // [rsp+4B0h] [rbp+430h]
  __int64 *v87; // [rsp+4B8h] [rbp+438h]
  __int64 *v88; // [rsp+4C0h] [rbp+440h]
  __int64 *v89; // [rsp+4C8h] [rbp+448h]
  __int64 v90; // [rsp+4D0h] [rbp+450h]
  char v91; // [rsp+4DFh] [rbp+45Fh]
  __int64 v92; // [rsp+4E0h] [rbp+460h]

  v92 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 2528);
  v90 = a1;
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
          v6 = (__int64 *)(v3 + 1976);
          v58[1] = 0;
          *(_QWORD *)&v54 = aDetectApiProxy;
          *((_QWORD *)&v54 + 1) = 23;
          v55 = aApp_4;
          v56 = 3;
          v86 = v5;
          v57 = v5;
          v58[0] = v6;
          sub_1401A9630((__int64)&v69, (__int64)&v54);
          v7 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32)
             | *(unsigned int *)((char *)&v70 + 1);
          v8 = v70;
          v9 = v71;
          v10 = v72;
          v11 = *(_QWORD *)&v73[0];
          if ( v69 == -1 )
          {
            v89 = v6;
            sub_140CAB140(v86);
            v38 = 1;
            if ( *v89 == -1 )
              goto LABEL_45;
            v40 = *(_QWORD *)(v90 + 1984);
            v88 = *(__int64 **)(v90 + 1992);
            v87 = nullptr;
            v84 = v40;
            while ( v88 != v87 )
            {
              v87 = (__int64 *)((char *)v87 + 1);
              v41 = v40 + 96;
              sub_140401FB0();
              v40 = v41;
            }
            v43 = *v89;
            if ( !*v89 )
            {
LABEL_45:
              v44 = v90;
              goto LABEL_55;
            }
            v44 = v90;
            goto LABEL_54;
          }
          v68 = *(_OWORD *)((char *)&v73[6] + 8);
          v67 = *(_OWORD *)((char *)&v73[5] + 8);
          v66 = *(_OWORD *)((char *)&v73[4] + 8);
          v65 = *(_OWORD *)((char *)&v73[3] + 8);
          v64 = *(_OWORD *)((char *)&v73[2] + 8);
          v63 = *(_OWORD *)((char *)&v73[1] + 8);
          v62 = *(_OWORD *)((char *)v73 + 8);
          v3 = v90;
          v12 = v90 + 2000;
          *(_QWORD *)(v90 + 2000) = v69;
          *(_BYTE *)(v3 + 2008) = v8;
          *(_BYTE *)(v3 + 2015) = BYTE6(v7);
          *(_WORD *)(v3 + 2013) = WORD2(v7);
          *(_DWORD *)(v3 + 2009) = v7;
          *(_QWORD *)(v3 + 2016) = v9;
          *(_QWORD *)(v3 + 2024) = v10;
          *(_QWORD *)(v3 + 2032) = v11;
          v13 = v63;
          v14 = v64;
          v15 = v65;
          *(_OWORD *)(v3 + 2040) = v62;
          *(_OWORD *)(v3 + 2056) = v13;
          *(_OWORD *)(v3 + 2072) = v14;
          *(_OWORD *)(v3 + 2088) = v15;
          *(_OWORD *)(v3 + 2104) = v66;
          *(_OWORD *)(v3 + 2120) = v67;
          *(_OWORD *)(v3 + 2136) = v68;
          *(_BYTE *)(v3 + 2160) = 0;
          v16 = v3 + 2168;
          sub_14172B820(v3 + 2168, v12, 168);
          v87 = (__int64 *)(v3 + 2504);
          *(_BYTE *)(v3 + 2504) = 0;
LABEL_7:
          v89 = (__int64 *)(v3 + 2336);
          v84 = v16;
          sub_14172B820(v3 + 2336, v16, 168);
LABEL_9:
          sub_14172B820(&v69, v89, 152);
          v18 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v91 = 1;
            v49 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v18 = v49;
          }
          if ( *((_DWORD *)v18 + 4) == 2 )
          {
            v19 = 704;
            if ( *(_BYTE *)v18 )
              v19 = 472;
            v20 = v18[1] + v19;
            v91 = 0;
            v21 = sub_14085B2B0(v20, v18, &v69, &off_1417EBF48);
          }
          else
          {
            v22 = 704;
            if ( *((_BYTE *)v18 + 64) )
              v22 = 472;
            v23 = v18[9] + v22;
            v91 = 0;
            v21 = sub_14085B2B0(v23, v18 + 8, &v69, &off_1417EBF30);
          }
          v24 = v90;
          *(_QWORD *)(v90 + 2488) = v21;
          v88 = (__int64 *)(v24 + 2488);
          sub_140502460(&v69, v24 + 2488, a2);
          v7 = v69;
          if ( v69 == -3 )
          {
            v28 = (_BYTE *)v90;
            *(_BYTE *)(v90 + 2496) = 3;
            v28[2504] = 3;
            v28[2512] = 3;
            v29 = 3;
            result = 1;
            goto LABEL_56;
          }
          if ( v69 == -2 )
          {
            v25 = (const char *)v70;
            v11 = v71;
            v26 = 0x800000000000000CuLL;
            v27 = v72;
          }
          else
          {
            v26 = v70;
            v25 = (const char *)v71;
            v11 = v72;
            v27 = *(_QWORD *)&v73[0];
            sub_14172B820(&v59, (char *)v73 + 8, 136);
          }
          v31 = v88;
          sub_14172B820(&v52, &v59, 136);
          v32 = *v31;
          if ( (unsigned __int8)sub_141398090(v32) )
            sub_14139A2E0(v32);
          if ( v7 == -2 )
          {
            v69 = v26;
            v70 = (unsigned __int64)v25;
            v71 = v11;
            v72 = v27;
            v73[0] = v52;
            v74[0] = &v69;
            v74[1] = sub_1412DDF00;
            sub_141543AF0(&v59, &unk_1418862D0, v74);
            sub_140CAB2C0(&v69);
            v26 = v59;
            v37 = (__int64 *)v60;
            v11 = v61;
            *(_BYTE *)(v90 + 2496) = 1;
            goto LABEL_31;
          }
          sub_14172B820(v51, &v52, 136);
          *(_BYTE *)(v90 + 2496) = 1;
          v37 = (__int64 *)v25;
          if ( v7 == -1 )
          {
LABEL_31:
            if ( v11 < 0 )
            {
              v39 = 0;
              goto LABEL_33;
            }
            if ( v11 )
            {
              nullsub_1(v34, v33, v35, v36, v50);
              v39 = 1;
              v42 = sub_140001650(v11, 1);
              if ( !v42 )
              {
LABEL_33:
                v89 = v37;
                v88 = (__int64 *)v26;
                sub_14176E54B(v39, v11);
              }
              v10 = v42;
              sub_14172B820(v42, v37, v11);
              if ( !v26 )
                goto LABEL_42;
            }
            else
            {
              v10 = 1;
              if ( !v26 )
                goto LABEL_42;
            }
            sub_140001660(v37, v26, 1);
LABEL_42:
            v38 = 1;
            v8 = 3;
            v9 = v11;
            goto LABEL_49;
          }
          sub_14172B820(v58, v51, 136);
          *(_QWORD *)&v54 = v7;
          *((_QWORD *)&v54 + 1) = v26;
          v55 = v25;
          v56 = v11;
          v57 = v27;
          sub_14050AA50(&v69, &v54);
          v7 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32)
             | *(unsigned int *)((char *)&v70 + 1);
          v8 = v70;
          v9 = v71;
          v10 = v72;
          v11 = *(_QWORD *)&v73[0];
          if ( v69 == -1 )
          {
            v38 = 0;
          }
          else
          {
            HIBYTE(v70) = (((unsigned __int64)((HIBYTE(v70) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 5)) << 32)
                         | *(unsigned int *)((char *)&v70 + 1)) >> 48;
            *(_WORD *)((char *)&v70 + 5) = WORD2(v7);
            *(_DWORD *)((char *)&v70 + 1) = v7;
            v59 = 0;
            v60 = 1;
            v61 = 0;
            v53 = 1610612768;
            *(_QWORD *)&v52 = &v59;
            *((_QWORD *)&v52 + 1) = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v69, &v52) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v85,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v9 = v59;
            v10 = v60;
            v11 = v61;
            sub_140CAB2C0(&v69);
            v38 = 1;
            v8 = 3;
          }
LABEL_49:
          *(_BYTE *)v87 = 1;
          sub_140CAB140(v86);
          v44 = v90;
          if ( *(_QWORD *)(v90 + 1976) != -1 )
          {
            v45 = *(__int64 **)(v90 + 1984);
            v88 = *(__int64 **)(v90 + 1992);
            v87 = nullptr;
            v89 = v45;
            while ( v88 != v87 )
            {
              v87 = (__int64 *)((char *)v87 + 1);
              v46 = v45 + 12;
              sub_140401FB0();
              v45 = v46;
            }
            v44 = v90;
            v43 = *(_QWORD *)(v90 + 1976);
            if ( v43 )
LABEL_54:
              sub_140001660(*(_QWORD *)(v44 + 1984), 96 * v43, 8);
          }
LABEL_55:
          *(_BYTE *)(v44 + 2512) = 1;
          sub_140C9F530(v86);
          v77 = v7;
          v79 = BYTE6(v7);
          v78 = WORD2(v7);
          v80 = v9;
          v81 = v10;
          v82 = v11;
          v76 = v8;
          v75 = v38;
          v47 = v90;
          *(_BYTE *)(v90 + 2531) = 0;
          sub_14172B820(&v69, v47, 360);
          *(_BYTE *)(v47 + 2530) = 0;
          v48 = *(_QWORD *)(v47 + 384);
          *(_BYTE *)(v47 + 2529) = 0;
          v55 = *(const char **)(v47 + 376);
          v54 = *(_OWORD *)(v47 + 360);
          sub_140AFFC30((__int64)&v69, v48, (__int64)&v75, &v54, *(_DWORD *)(v47 + 2520), *(_DWORD *)(v47 + 2524));
          v29 = 1;
          result = 0;
          v28 = (_BYTE *)v90;
LABEL_56:
          v28[2528] = v29;
          return result;
        case 1:
LABEL_61:
          v86 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_60:
          v86 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v86 = v5;
          v17 = *(unsigned __int8 *)(v3 + 2504);
          v16 = v3 + 2168;
          v87 = (__int64 *)(v3 + 2504);
          switch ( v17 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v83 = v3 + 2168;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v83 = v3 + 2168;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v84 = v3 + 2168;
              v89 = (__int64 *)(v3 + 2336);
              goto LABEL_9;
          }
      }
  }
}
