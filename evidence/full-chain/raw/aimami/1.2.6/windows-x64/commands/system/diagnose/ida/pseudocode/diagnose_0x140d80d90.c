// Pseudocode for diagnose (EA: 0x140d80d90, size: 0xaf9)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 diagnose 的 handler：运行诊断采集（codex 进程/配置/连通性检查），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
// Tauri 命令 diagnose 的 handler：运行诊断采集（codex 进程/配置/连通性检查），引用 app(AppHandle)。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
char __fastcall sub_140D80D90(__int64 a1, __int64 a2)
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
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r14
  unsigned __int8 v37; // bl
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 *v44; // rcx
  __int64 *v45; // r13
  __int64 v46; // rdi
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  __int64 v49; // [rsp+20h] [rbp-60h]
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
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 2528);
  v89 = a1;
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
          v60[1] = 0;
          *(_QWORD *)&v56 = aDiagnose;
          *((_QWORD *)&v56 + 1) = 8;
          v57 = aApp_4;
          v58 = 3;
          v85 = v5;
          v59 = v5;
          v60[0] = v6;
          sub_1401A9630((__int64)&v68, (__int64)&v56);
          v7 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
             | *(unsigned int *)((char *)&v69 + 1);
          v8 = v69;
          v9 = v70;
          v10 = v71;
          v11 = *(_QWORD *)&v72[0];
          if ( v68 == -1 )
          {
            v88 = v6;
            sub_140CAB140(v85);
            v37 = 1;
            if ( *v88 == -1 )
              goto LABEL_45;
            v39 = *(_QWORD *)(v89 + 1984);
            v86 = *(_QWORD **)(v89 + 1992);
            v87 = nullptr;
            v83 = v39;
            while ( v86 != (_QWORD *)v87 )
            {
              ++v87;
              v40 = v39 + 96;
              sub_140401FB0();
              v39 = v40;
            }
            v42 = *v88;
            if ( !*v88 )
            {
LABEL_45:
              v43 = v89;
LABEL_55:
              *(_BYTE *)(v43 + 2512) = 1;
              sub_140C9F530(v85);
              v76 = v7;
              v78 = BYTE6(v7);
              v77 = WORD2(v7);
              v79 = v9;
              v80 = v10;
              v81 = v11;
              v75 = v8;
              v74 = v37;
              v46 = v89;
              *(_BYTE *)(v89 + 2531) = 0;
              sub_14172B820(&v68, v46, 360);
              *(_BYTE *)(v46 + 2530) = 0;
              v47 = *(_QWORD *)(v46 + 384);
              *(_BYTE *)(v46 + 2529) = 0;
              v57 = *(const char **)(v46 + 376);
              v56 = *(_OWORD *)(v46 + 360);
              sub_140AFFC30((__int64)&v68, v47, (__int64)&v74, &v56, *(_DWORD *)(v46 + 2520), *(_DWORD *)(v46 + 2524));
              v29 = 1;
              result = 0;
              v28 = (_BYTE *)v89;
              goto LABEL_56;
            }
            v43 = v89;
LABEL_54:
            sub_140001660(*(_QWORD *)(v43 + 1984), 96 * v42, 8);
            goto LABEL_55;
          }
          v67 = *(_OWORD *)((char *)&v72[6] + 8);
          v66 = *(_OWORD *)((char *)&v72[5] + 8);
          v65 = *(_OWORD *)((char *)&v72[4] + 8);
          v64 = *(_OWORD *)((char *)&v72[3] + 8);
          v63 = *(_OWORD *)((char *)&v72[2] + 8);
          v62 = *(_OWORD *)((char *)&v72[1] + 8);
          v61 = *(_OWORD *)((char *)v72 + 8);
          v3 = v89;
          v12 = v89 + 2000;
          *(_QWORD *)(v89 + 2000) = v68;
          *(_BYTE *)(v3 + 2008) = v8;
          *(_BYTE *)(v3 + 2015) = BYTE6(v7);
          *(_WORD *)(v3 + 2013) = WORD2(v7);
          *(_DWORD *)(v3 + 2009) = v7;
          *(_QWORD *)(v3 + 2016) = v9;
          *(_QWORD *)(v3 + 2024) = v10;
          *(_QWORD *)(v3 + 2032) = v11;
          v13 = v62;
          v14 = v63;
          v15 = v64;
          *(_OWORD *)(v3 + 2040) = v61;
          *(_OWORD *)(v3 + 2056) = v13;
          *(_OWORD *)(v3 + 2072) = v14;
          *(_OWORD *)(v3 + 2088) = v15;
          *(_OWORD *)(v3 + 2104) = v65;
          *(_OWORD *)(v3 + 2120) = v66;
          *(_OWORD *)(v3 + 2136) = v67;
          *(_BYTE *)(v3 + 2160) = 0;
          v16 = v3 + 2168;
          sub_14172B820(v3 + 2168, v12, 168);
          v87 = (_BYTE *)(v3 + 2504);
          *(_BYTE *)(v3 + 2504) = 0;
LABEL_7:
          v88 = (__int64 *)(v3 + 2336);
          v83 = v16;
          sub_14172B820(v3 + 2336, v16, 168);
LABEL_9:
          sub_14172B820(&v68, v88, 152);
          v18 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v90 = 1;
            v48 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v18 = v48;
          }
          if ( *((_DWORD *)v18 + 4) == 2 )
          {
            v19 = 704;
            if ( *(_BYTE *)v18 )
              v19 = 472;
            v20 = v18[1] + v19;
            v90 = 0;
            v21 = sub_14085BB90(v20, v18, &v68, &off_1417EBF48);
          }
          else
          {
            v22 = 704;
            if ( *((_BYTE *)v18 + 64) )
              v22 = 472;
            v23 = v18[9] + v22;
            v90 = 0;
            v21 = sub_14085BB90(v23, v18 + 8, &v68, &off_1417EBF30);
          }
          v24 = v89;
          *(_QWORD *)(v89 + 2488) = v21;
          v86 = (_QWORD *)(v24 + 2488);
          sub_140501950(&v68, v24 + 2488, a2);
          v7 = v68;
          if ( v68 != -2 )
          {
            if ( (_DWORD)v68 == -1 )
            {
              v25 = (const char *)v69;
              v11 = v70;
              v26 = 0x800000000000000CuLL;
              v27 = v71;
            }
            else
            {
              v26 = v69;
              v25 = (const char *)v70;
              v11 = v71;
              v27 = *(_QWORD *)&v72[0];
              sub_14172B820(&v53, (char *)v72 + 8, 376);
            }
            sub_14172B820(&v51, &v53, 376);
            v31 = *v86;
            if ( (unsigned __int8)sub_141398090(*v86) )
              sub_14139A2E0(v31);
            if ( (_DWORD)v7 == -1 )
            {
              v68 = v26;
              v69 = (unsigned __int64)v25;
              v70 = v11;
              v71 = v27;
              v72[0] = v51;
              v73[0] = &v68;
              v73[1] = sub_1412DDF00;
              sub_141543AF0(&v53, &unk_141887805, v73);
              sub_140CAB2C0(&v68);
              v26 = v53;
              v36 = (__int64 *)v54;
              v11 = v55;
              *(_BYTE *)(v89 + 2496) = 1;
            }
            else
            {
              sub_14172B820(v50, &v51, 376);
              *(_BYTE *)(v89 + 2496) = 1;
              v36 = (__int64 *)v25;
              if ( (_DWORD)v7 != 2 )
              {
                sub_14172B820(v60, v50, 376);
                *(_QWORD *)&v56 = v7;
                *((_QWORD *)&v56 + 1) = v26;
                v57 = v25;
                v58 = v11;
                v59 = v27;
                sub_140507C50(&v68, &v56);
                v7 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
                   | *(unsigned int *)((char *)&v69 + 1);
                v8 = v69;
                v9 = v70;
                v10 = v71;
                v11 = *(_QWORD *)&v72[0];
                if ( v68 == -1 )
                {
                  v37 = 0;
                }
                else
                {
                  HIBYTE(v69) = (((unsigned __int64)((HIBYTE(v69) << 16)
                                                   | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32)
                               | *(unsigned int *)((char *)&v69 + 1)) >> 48;
                  *(_WORD *)((char *)&v69 + 5) = WORD2(v7);
                  *(_DWORD *)((char *)&v69 + 1) = v7;
                  v53 = 0;
                  v54 = 1;
                  v55 = 0;
                  v52 = 1610612768;
                  *(_QWORD *)&v51 = &v53;
                  *((_QWORD *)&v51 + 1) = &off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v68, &v51) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v84,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v9 = v53;
                  v10 = v54;
                  v11 = v55;
                  sub_140CAB2C0(&v68);
                  v37 = 1;
                  v8 = 3;
                }
LABEL_49:
                *v87 = 1;
                sub_140CAB140(v85);
                v43 = v89;
                if ( *(_QWORD *)(v89 + 1976) == -1 )
                  goto LABEL_55;
                v44 = *(__int64 **)(v89 + 1984);
                v86 = *(_QWORD **)(v89 + 1992);
                v87 = nullptr;
                v88 = v44;
                while ( v86 != (_QWORD *)v87 )
                {
                  ++v87;
                  v45 = v44 + 12;
                  sub_140401FB0();
                  v44 = v45;
                }
                v43 = v89;
                v42 = *(_QWORD *)(v89 + 1976);
                if ( !v42 )
                  goto LABEL_55;
                goto LABEL_54;
              }
            }
            if ( v11 < 0 )
            {
              v38 = 0;
              goto LABEL_33;
            }
            if ( v11 )
            {
              nullsub_1(v33, v32, v34, v35, v49);
              v38 = 1;
              v41 = sub_140001650(v11, 1);
              if ( !v41 )
              {
LABEL_33:
                v88 = v36;
                v86 = (_QWORD *)v26;
                sub_14176E54B(v38, v11);
              }
              v10 = v41;
              sub_14172B820(v41, v36, v11);
              if ( !v26 )
              {
LABEL_42:
                v37 = 1;
                v8 = 3;
                v9 = v11;
                goto LABEL_49;
              }
            }
            else
            {
              v10 = 1;
              if ( !v26 )
                goto LABEL_42;
            }
            sub_140001660(v36, v26, 1);
            goto LABEL_42;
          }
          v28 = (_BYTE *)v89;
          *(_BYTE *)(v89 + 2496) = 3;
          v28[2504] = 3;
          v28[2512] = 3;
          v29 = 3;
          result = 1;
LABEL_56:
          v28[2528] = v29;
          return result;
        case 1:
LABEL_61:
          v85 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_60:
          v85 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v85 = v5;
          v17 = *(unsigned __int8 *)(v3 + 2504);
          v16 = v3 + 2168;
          v87 = (_BYTE *)(v3 + 2504);
          switch ( v17 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v82 = v3 + 2168;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v82 = v3 + 2168;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v83 = v3 + 2168;
              v88 = (__int64 *)(v3 + 2336);
              goto LABEL_9;
          }
      }
  }
}
