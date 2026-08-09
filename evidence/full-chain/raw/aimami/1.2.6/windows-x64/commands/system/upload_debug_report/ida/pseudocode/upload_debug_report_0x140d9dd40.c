// Pseudocode for upload_debug_report (EA: 0x140d9dd40, size: 0xa25)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 upload_debug_report 处理器（commands::debug_report，argKeys: input）。上传调试报告。⚠副作用：网络外发本机诊断数据。
// Tauri 命令 upload_debug_report 处理器（commands::debug_report，argKeys: input）。上传调试报告。⚠副作用：网络外发本机诊断数据。
char __fastcall upload_debug_report(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // r12
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // cl
  char result; // al
  __int64 v24; // r14
  const char *v25; // r12
  __int128 v26; // xmm6
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // bl
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 *v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // [rsp+20h] [rbp-60h]
  const char *v44; // [rsp+38h] [rbp-48h] BYREF
  __int64 v45; // [rsp+40h] [rbp-40h]
  const char *v46; // [rsp+48h] [rbp-38h] BYREF
  __int128 v47; // [rsp+50h] [rbp-30h]
  __int128 v48; // [rsp+60h] [rbp-20h]
  __int128 v49; // [rsp+70h] [rbp-10h]
  __int128 v50; // [rsp+80h] [rbp+0h]
  __int128 v51; // [rsp+90h] [rbp+10h]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  __int128 v53; // [rsp+1A0h] [rbp+120h]
  __int128 v54; // [rsp+1B0h] [rbp+130h]
  __int128 v55; // [rsp+1C0h] [rbp+140h]
  __int128 v56; // [rsp+1D0h] [rbp+150h]
  __int64 v57; // [rsp+1E0h] [rbp+160h]
  _QWORD v58[3]; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v59; // [rsp+200h] [rbp+180h]
  __int64 v60; // [rsp+210h] [rbp+190h]
  __int64 v61; // [rsp+218h] [rbp+198h] BYREF
  char v62; // [rsp+220h] [rbp+1A0h]
  int v63; // [rsp+221h] [rbp+1A1h]
  __int16 v64; // [rsp+225h] [rbp+1A5h]
  char v65; // [rsp+227h] [rbp+1A7h]
  __int64 v66; // [rsp+228h] [rbp+1A8h]
  __int64 v67; // [rsp+230h] [rbp+1B0h]
  __int64 v68; // [rsp+238h] [rbp+1B8h]
  __int64 v69; // [rsp+240h] [rbp+1C0h]
  __int64 v70; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v71; // [rsp+250h] [rbp+1D0h]
  __int64 v72; // [rsp+258h] [rbp+1D8h]
  __int64 v73; // [rsp+260h] [rbp+1E0h]
  __int64 v74; // [rsp+268h] [rbp+1E8h]
  __int128 v75; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v76; // [rsp+280h] [rbp+200h]
  __int128 v77; // [rsp+288h] [rbp+208h]
  __int128 v78; // [rsp+298h] [rbp+218h]
  __int128 v79; // [rsp+2A8h] [rbp+228h]
  __int128 v80; // [rsp+2B8h] [rbp+238h]
  __int128 v81; // [rsp+2C8h] [rbp+248h]
  __int64 v82; // [rsp+2D8h] [rbp+258h]
  const char *v83; // [rsp+2E0h] [rbp+260h]
  char v84; // [rsp+2EFh] [rbp+26Fh] BYREF
  __int64 *v85; // [rsp+2F0h] [rbp+270h]
  _BYTE *v86; // [rsp+2F8h] [rbp+278h]
  _BYTE *v87; // [rsp+300h] [rbp+280h]
  __int64 v88; // [rsp+308h] [rbp+288h]
  unsigned __int64 v89; // [rsp+310h] [rbp+290h]
  __int64 v90; // [rsp+318h] [rbp+298h]

  v90 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 8720);
  v88 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8721) = 257;
      *(_BYTE *)(a1 + 8723) = 1;
      v5 = a1 + 4552;
      sub_14172B820(a1 + 4552, a1 + 392, 4160);
      switch ( *(_BYTE *)(v3 + 8704) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_54;
        case 2:
          goto LABEL_53;
        case 3:
          goto LABEL_8;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4552;
      switch ( *(_BYTE *)(a1 + 8704) )
      {
        case 0:
LABEL_4:
          v6 = (__int64 *)(v3 + 5072);
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aManager_1;
          *(_QWORD *)&v47 = 7;
          v89 = v5;
          *((_QWORD *)&v47 + 1) = v5;
          v48 = (unsigned __int64)(v3 + 5072);
          v7 = sub_14002B2A0((_QWORD *)(*(_QWORD *)(v3 + 5064) + 16LL));
          v85 = v6;
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)&v75, (__int64)&v44, (__int64)&v46);
          v11 = v75;
          if ( (_BYTE)v75 != 0xFF )
            goto LABEL_21;
          v7 = *((_QWORD *)&v75 + 1);
LABEL_5:
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aRepo_0;
          *(_QWORD *)&v47 = 4;
          *((_QWORD *)&v47 + 1) = v89;
          v48 = (unsigned __int64)v6;
          v8 = sub_140029DD0((volatile void *)(*(_QWORD *)(v88 + 5064) + 16LL));
          if ( v8 )
            goto LABEL_6;
          sub_14172C620((__int64)&v75, (__int64)&v44, (__int64)&v46);
          v11 = v75;
          if ( (_BYTE)v75 != 0xFF )
          {
LABEL_21:
            v10 = ((unsigned __int64)((BYTE7(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 5)) << 32)
                | *(unsigned int *)((char *)&v75 + 1);
            v12 = *((_QWORD *)&v75 + 1);
            v16 = v76;
            v13 = v77;
            v15 = v89;
            goto LABEL_22;
          }
          v8 = *((_QWORD *)&v75 + 1);
LABEL_6:
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aInput_5;
          *(_QWORD *)&v47 = 5;
          *((_QWORD *)&v47 + 1) = v89;
          v48 = (unsigned __int64)v6;
          sub_140C4CCC0(&v75, &v44);
          v9 = v75;
          v10 = ((unsigned __int64)((HIBYTE(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
              | *(unsigned int *)((char *)&v75 + 9);
          v11 = BYTE8(v75);
          v12 = v76;
          v13 = *((_QWORD *)&v77 + 1);
          v14 = v77;
          if ( (_QWORD)v75 == 2 )
          {
            v15 = v89;
            v16 = v77;
LABEL_22:
            sub_140CAB140(v15);
            if ( *v85 == -1 )
            {
              v31 = 1;
              v35 = v88;
LABEL_45:
              *(_BYTE *)(v35 + 8704) = 1;
              sub_140CA1740(v89);
              v63 = v10;
              v65 = BYTE6(v10);
              v64 = WORD2(v10);
              v67 = v16;
              v68 = v13;
              v62 = v11;
              v66 = v12;
              v61 = v31;
              v41 = v88;
              *(_BYTE *)(v88 + 8723) = 0;
              sub_14172B820(&v44, v41, 360);
              *(_BYTE *)(v41 + 8722) = 0;
              v42 = *(_QWORD *)(v41 + 384);
              *(_BYTE *)(v41 + 8721) = 0;
              v76 = *(_QWORD *)(v41 + 376);
              v75 = *(_OWORD *)(v41 + 360);
              sub_140AFFC30((__int64)&v44, v42, (__int64)&v61, &v75, *(_DWORD *)(v41 + 8712), *(_DWORD *)(v41 + 8716));
              v22 = 1;
              result = 0;
              v21 = v88;
              goto LABEL_46;
            }
            v83 = (const char *)(v88 + 5080);
            v32 = *(_QWORD *)(v88 + 5080);
            v86 = *(_BYTE **)(v88 + 5088);
            v87 = nullptr;
            v69 = v32;
            while ( v86 != v87 )
            {
              ++v87;
              v33 = v32 + 96;
              sub_140401FB0();
              v32 = v33;
            }
            v34 = *v85;
            v31 = 1;
            v35 = v88;
            if ( !*v85 )
              goto LABEL_45;
LABEL_44:
            sub_140001660(*(_QWORD *)v83, 96 * v34, 8);
            goto LABEL_45;
          }
          v60 = v79;
          v59 = v78;
          v19 = v88;
          v20 = v88 + 5096;
          *(_QWORD *)(v88 + 5160) = v7;
          v3 = v19;
          *(_QWORD *)(v19 + 5168) = v8;
          *(_QWORD *)(v19 + 5096) = v9;
          *(_BYTE *)(v19 + 5104) = v11;
          *(_BYTE *)(v19 + 5111) = BYTE6(v10);
          *(_WORD *)(v19 + 5109) = WORD2(v10);
          *(_DWORD *)(v19 + 5105) = v10;
          *(_QWORD *)(v19 + 5112) = v12;
          *(_QWORD *)(v19 + 5120) = v14;
          *(_QWORD *)(v19 + 5128) = v13;
          *(_OWORD *)(v19 + 5136) = v59;
          *(_QWORD *)(v19 + 5152) = v60;
          *(_BYTE *)(v19 + 5336) = 0;
          v18 = (__int64 *)(v19 + 6296);
          sub_14172B820(v19 + 6296, v20, 1200);
          v87 = (_BYTE *)(v3 + 8696);
          *(_BYTE *)(v3 + 8696) = 0;
          v5 = v89;
LABEL_13:
          v89 = v5;
          v85 = v18;
          sub_14172B820(v3 + 7496, v18, 1200);
LABEL_14:
          v86 = (_BYTE *)(v3 + 7496);
          sub_140DAF800(&v75, v3 + 7496, a2);
          v10 = v75;
          if ( (_QWORD)v75 != -2 )
          {
            v24 = *((_QWORD *)&v75 + 1);
            v25 = (const char *)v76;
            v26 = v77;
            v13 = v77;
            v53 = v78;
            v54 = v79;
            v55 = v80;
            v56 = v81;
            v57 = v82;
            sub_140CA3910(v86);
            if ( v10 != -1 )
            {
              v52 = v57;
              v51 = v56;
              v50 = v55;
              v49 = v54;
              v48 = v53;
              v44 = (const char *)v10;
              v45 = v24;
              v46 = v25;
              v47 = v26;
              sub_14050E250(&v75, &v44);
              v10 = ((unsigned __int64)((HIBYTE(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
                  | *(unsigned int *)((char *)&v75 + 9);
              v11 = BYTE8(v75);
              v12 = v76;
              v13 = *((_QWORD *)&v77 + 1);
              v16 = v77;
              if ( (_QWORD)v75 == -1 )
              {
                v31 = 0;
              }
              else
              {
                HIBYTE(v75) = (((unsigned __int64)((HIBYTE(v75) << 16)
                                                 | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
                             | *(unsigned int *)((char *)&v75 + 9)) >> 48;
                *(_WORD *)((char *)&v75 + 13) = WORD2(v10);
                *(_DWORD *)((char *)&v75 + 9) = v10;
                v70 = 0;
                v71 = 1;
                v72 = 0;
                v58[2] = 1610612768;
                v58[0] = &v70;
                v58[1] = &off_141891B48;
                if ( (unsigned __int8)sub_1412DDF00(&v75, v58) )
                  sub_14176E860(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v84,
                    (unsigned int)&unk_141889838,
                    (__int64)&off_141891C00);
                v12 = v70;
                v16 = v71;
                v13 = v72;
                sub_140CAB2C0(&v75);
                v31 = 1;
                v11 = 3;
              }
              v37 = v89;
LABEL_39:
              *v87 = 1;
              sub_140CAB140(v37);
              v35 = v88;
              if ( *(_QWORD *)(v88 + 5072) == -1 )
                goto LABEL_45;
              v83 = (const char *)(v88 + 5080);
              v39 = *(__int64 **)(v88 + 5080);
              v86 = *(_BYTE **)(v88 + 5088);
              v87 = nullptr;
              v85 = v39;
              while ( v86 != v87 )
              {
                ++v87;
                v40 = v39 + 12;
                sub_140401FB0();
                v39 = v40;
              }
              v35 = v88;
              v34 = *(_QWORD *)(v88 + 5072);
              if ( !v34 )
                goto LABEL_45;
              goto LABEL_44;
            }
            if ( v13 < 0 )
            {
              v36 = 0;
              goto LABEL_31;
            }
            if ( v13 )
            {
              nullsub_1(v28, v27, v29, v30, v43);
              v36 = 1;
              v38 = sub_140001650(v13, 1);
              if ( !v38 )
              {
LABEL_31:
                v83 = v25;
                v86 = (_BYTE *)v24;
                sub_14176E54B(v36, v13);
              }
              v16 = v38;
              sub_14172B820(v38, v25, v13);
              v37 = v89;
              if ( !v24 )
              {
LABEL_38:
                v31 = 1;
                v11 = 3;
                v12 = v13;
                goto LABEL_39;
              }
            }
            else
            {
              v16 = 1;
              v37 = v89;
              if ( !v24 )
                goto LABEL_38;
            }
            v10 = v37;
            sub_140001660(v25, v24, 1);
            v37 = v10;
            goto LABEL_38;
          }
          v21 = v88;
          *(_BYTE *)(v88 + 8696) = 3;
          *(_BYTE *)(v21 + 8704) = 3;
          v22 = 3;
          result = 1;
LABEL_46:
          *(_BYTE *)(v21 + 8720) = v22;
          return result;
        case 1:
LABEL_54:
          v89 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_53:
          v89 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_8:
          v17 = *(unsigned __int8 *)(v3 + 8696);
          v18 = (__int64 *)(v3 + 6296);
          v87 = (_BYTE *)(v3 + 8696);
          switch ( v17 )
          {
            case 0LL:
              goto LABEL_13;
            case 1LL:
              v89 = v5;
              v74 = v3 + 8696;
              v73 = v3 + 6296;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v89 = v5;
              v74 = v3 + 8696;
              v73 = v3 + 6296;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v85 = (__int64 *)(v3 + 6296);
              v89 = v5;
              goto LABEL_14;
          }
      }
  }
}
