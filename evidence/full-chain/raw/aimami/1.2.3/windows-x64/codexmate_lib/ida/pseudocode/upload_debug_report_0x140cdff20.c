// module: codexmate_lib
// addr: 0x140cdff20
// name: upload_debug_report
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = upload_debug_report | mapped via command-name string xref (win-native, ground-truth)
char __fastcall upload_debug_report(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 *v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // cl
  char result; // al
  __int64 v27; // r14
  const char *v28; // r12
  __int128 v29; // xmm6
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int8 v32; // bl
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rdx
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
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 8720);
  v88 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8721) = 257;
      *(_BYTE *)(a1 + 8723) = 1;
      v7 = a1 + 4552;
      sub_141684120(a1 + 4552, a1 + 392, 4160);
      switch ( *(_BYTE *)(v5 + 8704) )
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
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4552;
      switch ( *(_BYTE *)(a1 + 8704) )
      {
        case 0:
LABEL_4:
          v8 = (__int64 *)(v5 + 5072);
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aManager_1;
          *(_QWORD *)&v47 = 7;
          v89 = v7;
          *((_QWORD *)&v47 + 1) = v7;
          v48 = (unsigned __int64)(v5 + 5072);
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v5 + 5064) + 16LL));
          v85 = v8;
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(&v75, &v44, &v46);
          v13 = v75;
          if ( (_BYTE)v75 != 0xFF )
            goto LABEL_21;
          v9 = *((_QWORD *)&v75 + 1);
LABEL_5:
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aRepo_0;
          *(_QWORD *)&v47 = 4;
          *((_QWORD *)&v47 + 1) = v89;
          v48 = (unsigned __int64)v8;
          v10 = sub_140003640((volatile void *)(*(_QWORD *)(v88 + 5064) + 16LL));
          if ( v10 )
            goto LABEL_6;
          sub_1416850A0(&v75, &v44, &v46);
          v13 = v75;
          if ( (_BYTE)v75 != 0xFF )
          {
LABEL_21:
            v12 = ((unsigned __int64)((BYTE7(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 5)) << 32)
                | *(unsigned int *)((char *)&v75 + 1);
            v14 = *((_QWORD *)&v75 + 1);
            v18 = v76;
            v15 = v77;
            v17 = v89;
            goto LABEL_22;
          }
          v10 = *((_QWORD *)&v75 + 1);
LABEL_6:
          v44 = aUploadDebugRep;
          v45 = 19;
          v46 = aInput_4;
          *(_QWORD *)&v47 = 5;
          *((_QWORD *)&v47 + 1) = v89;
          v48 = (unsigned __int64)v8;
          sub_1407B2BA0(&v75, &v44);
          v11 = v75;
          v12 = ((unsigned __int64)((HIBYTE(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
              | *(unsigned int *)((char *)&v75 + 9);
          v13 = BYTE8(v75);
          v14 = v76;
          v15 = *((_QWORD *)&v77 + 1);
          v16 = v77;
          if ( (_QWORD)v75 == 2 )
          {
            v17 = v89;
            v18 = v77;
LABEL_22:
            sub_140BF0DE0(v17);
            if ( *v85 == -1 )
            {
              v32 = 1;
              v36 = v88;
LABEL_45:
              *(_BYTE *)(v36 + 8704) = 1;
              sub_140BE7410(v89);
              v63 = v12;
              v65 = BYTE6(v12);
              v64 = WORD2(v12);
              v67 = v18;
              v68 = v15;
              v62 = v13;
              v66 = v14;
              v61 = v32;
              v42 = v88;
              *(_BYTE *)(v88 + 8723) = 0;
              sub_141684120(&v44, v42, 360);
              *(_BYTE *)(v42 + 8722) = 0;
              v43 = *(_QWORD *)(v42 + 384);
              *(_BYTE *)(v42 + 8721) = 0;
              v76 = *(_QWORD *)(v42 + 376);
              v75 = *(_OWORD *)(v42 + 360);
              sub_14047E370(
                (unsigned int)&v44,
                v43,
                (unsigned int)&v61,
                (unsigned int)&v75,
                *(_DWORD *)(v42 + 8712),
                *(_DWORD *)(v42 + 8716));
              v25 = 1;
              result = 0;
              v24 = v88;
              goto LABEL_46;
            }
            v83 = (const char *)(v88 + 5080);
            v33 = *(_QWORD *)(v88 + 5080);
            v86 = *(_BYTE **)(v88 + 5088);
            v87 = nullptr;
            v69 = v33;
            while ( v86 != v87 )
            {
              ++v87;
              v34 = v33 + 96;
              sub_1402C7520();
              v33 = v34;
            }
            v35 = *v85;
            v32 = 1;
            v36 = v88;
            if ( !*v85 )
              goto LABEL_45;
LABEL_44:
            sub_140001660(*(_QWORD *)v83, 96 * v35, 8);
            goto LABEL_45;
          }
          v60 = v79;
          v59 = v78;
          v22 = v88;
          v23 = v88 + 5096;
          *(_QWORD *)(v88 + 5160) = v9;
          v5 = v22;
          *(_QWORD *)(v22 + 5168) = v10;
          *(_QWORD *)(v22 + 5096) = v11;
          *(_BYTE *)(v22 + 5104) = v13;
          *(_BYTE *)(v22 + 5111) = BYTE6(v12);
          *(_WORD *)(v22 + 5109) = WORD2(v12);
          *(_DWORD *)(v22 + 5105) = v12;
          *(_QWORD *)(v22 + 5112) = v14;
          *(_QWORD *)(v22 + 5120) = v16;
          *(_QWORD *)(v22 + 5128) = v15;
          *(_OWORD *)(v22 + 5136) = v59;
          *(_QWORD *)(v22 + 5152) = v60;
          *(_BYTE *)(v22 + 5336) = 0;
          v21 = (__int64 *)(v22 + 6296);
          sub_141684120(v22 + 6296, v23, 1200);
          v87 = (_BYTE *)(v5 + 8696);
          *(_BYTE *)(v5 + 8696) = 0;
          v7 = v89;
LABEL_13:
          v89 = v7;
          v85 = v21;
          sub_141684120(v5 + 7496, v21, 1200);
LABEL_14:
          v86 = (_BYTE *)(v5 + 7496);
          serialize_15(&v75, v5 + 7496, a2);
          v12 = v75;
          if ( (_QWORD)v75 != -2 )
          {
            v27 = *((_QWORD *)&v75 + 1);
            v28 = (const char *)v76;
            v29 = v77;
            v15 = v77;
            v53 = v78;
            v54 = v79;
            v55 = v80;
            v56 = v81;
            v57 = v82;
            sub_140BE96E0(v86);
            if ( v12 != -1 )
            {
              v52 = v57;
              v51 = v56;
              v50 = v55;
              v49 = v54;
              v48 = v53;
              v44 = (const char *)v12;
              v45 = v27;
              v46 = v28;
              v47 = v29;
              sub_140B0B3D0(&v75, &v44);
              v12 = ((unsigned __int64)((HIBYTE(v75) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
                  | *(unsigned int *)((char *)&v75 + 9);
              v13 = BYTE8(v75);
              v14 = v76;
              v15 = *((_QWORD *)&v77 + 1);
              v18 = v77;
              if ( (_QWORD)v75 == -1 )
              {
                v32 = 0;
              }
              else
              {
                HIBYTE(v75) = (((unsigned __int64)((HIBYTE(v75) << 16)
                                                 | (unsigned int)*(unsigned __int16 *)((char *)&v75 + 13)) << 32)
                             | *(unsigned int *)((char *)&v75 + 9)) >> 48;
                *(_WORD *)((char *)&v75 + 13) = WORD2(v12);
                *(_DWORD *)((char *)&v75 + 9) = v12;
                v70 = 0;
                v71 = 1;
                v72 = 0;
                v58[2] = 1610612768;
                v58[0] = &v70;
                v58[1] = &off_1417C41C0;
                if ( (unsigned __int8)sub_141230630(&v75, v58, v31) )
                  sub_1416C3060(
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v84,
                    (unsigned int)&unk_1417BC180,
                    (__int64)&off_1417C4278);
                v14 = v70;
                v18 = v71;
                v15 = v72;
                sub_140BF0F60(&v75);
                v32 = 1;
                v13 = 3;
              }
              v38 = v89;
LABEL_39:
              *v87 = 1;
              sub_140BF0DE0(v38);
              v36 = v88;
              if ( *(_QWORD *)(v88 + 5072) == -1 )
                goto LABEL_45;
              v83 = (const char *)(v88 + 5080);
              v40 = *(__int64 **)(v88 + 5080);
              v86 = *(_BYTE **)(v88 + 5088);
              v87 = nullptr;
              v85 = v40;
              while ( v86 != v87 )
              {
                ++v87;
                v41 = v40 + 12;
                sub_1402C7520();
                v40 = v41;
              }
              v36 = v88;
              v35 = *(_QWORD *)(v88 + 5072);
              if ( !v35 )
                goto LABEL_45;
              goto LABEL_44;
            }
            if ( v15 < 0 )
            {
              v37 = 0;
              goto LABEL_31;
            }
            if ( v15 )
            {
              nullsub_1(v30);
              v37 = 1;
              v39 = sub_140001650(v15, 1);
              if ( !v39 )
              {
LABEL_31:
                v83 = v28;
                v86 = (_BYTE *)v27;
                sub_1416C2D4B(v37, v15);
              }
              v18 = v39;
              sub_141684120(v39, v28, v15);
              v38 = v89;
              if ( !v27 )
              {
LABEL_38:
                v32 = 1;
                v13 = 3;
                v14 = v15;
                goto LABEL_39;
              }
            }
            else
            {
              v18 = 1;
              v38 = v89;
              if ( !v27 )
                goto LABEL_38;
            }
            v12 = v38;
            sub_140001660(v28, v27, 1);
            v38 = v12;
            goto LABEL_38;
          }
          v24 = v88;
          *(_BYTE *)(v88 + 8696) = 3;
          *(_BYTE *)(v24 + 8704) = 3;
          v25 = 3;
          result = 1;
LABEL_46:
          *(_BYTE *)(v24 + 8720) = v25;
          return result;
        case 1:
LABEL_54:
          v89 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_53:
          v89 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
LABEL_8:
          v19 = v5 + 8696;
          v20 = *(unsigned __int8 *)(v5 + 8696);
          v21 = (__int64 *)(v5 + 6296);
          v87 = (_BYTE *)(v5 + 8696);
          switch ( v20 )
          {
            case 0LL:
              goto LABEL_13;
            case 1LL:
              v89 = v7;
              v74 = v5 + 8696;
              v73 = v5 + 6296;
              sub_1416C3400(&off_1417B7B80, v19, a3, a4);
            case 2LL:
              v89 = v7;
              v74 = v5 + 8696;
              v73 = v5 + 6296;
              sub_1416C3420(&off_1417B7B80, v19, a3, a4);
            case 3LL:
              v85 = (__int64 *)(v5 + 6296);
              v89 = v7;
              goto LABEL_14;
          }
      }
  }
}