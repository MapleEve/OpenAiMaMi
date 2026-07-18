// win 1.2.1 NEW upload_debug_report 0x140d0e9e0 d=0
char __fastcall sub_140D0E9E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // r12
  signed __int64 v12; // r13
  signed __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  const __m128i *v16; // rdx
  const __m128i *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  char result; // al
  __int64 v22; // r14
  const __m128i *v23; // r12
  __int128 v24; // xmm6
  __int64 v25; // r15
  unsigned __int8 v26; // bl
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  __m128i *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // [rsp+38h] [rbp-48h] BYREF
  const char *v40; // [rsp+48h] [rbp-38h] BYREF
  __int128 v41; // [rsp+50h] [rbp-30h]
  __int128 v42; // [rsp+60h] [rbp-20h]
  __int128 v43; // [rsp+70h] [rbp-10h]
  __int128 v44; // [rsp+80h] [rbp+0h]
  __int128 v45; // [rsp+90h] [rbp+10h]
  __int64 v46; // [rsp+A0h] [rbp+20h]
  __int128 v47; // [rsp+1A0h] [rbp+120h]
  __int128 v48; // [rsp+1B0h] [rbp+130h]
  __int128 v49; // [rsp+1C0h] [rbp+140h]
  __int128 v50; // [rsp+1D0h] [rbp+150h]
  __int64 v51; // [rsp+1E0h] [rbp+160h]
  _QWORD v52[3]; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v53; // [rsp+200h] [rbp+180h]
  __int64 v54; // [rsp+210h] [rbp+190h]
  __int64 v55; // [rsp+218h] [rbp+198h] BYREF
  char v56; // [rsp+220h] [rbp+1A0h]
  int v57; // [rsp+221h] [rbp+1A1h]
  __int16 v58; // [rsp+225h] [rbp+1A5h]
  char v59; // [rsp+227h] [rbp+1A7h]
  signed __int64 v60; // [rsp+228h] [rbp+1A8h]
  __int64 v61; // [rsp+230h] [rbp+1B0h]
  signed __int64 v62; // [rsp+238h] [rbp+1B8h]
  __int64 v63; // [rsp+240h] [rbp+1C0h]
  signed __int64 v64; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v65; // [rsp+250h] [rbp+1D0h]
  signed __int64 v66; // [rsp+258h] [rbp+1D8h]
  __int64 v67; // [rsp+260h] [rbp+1E0h]
  __int64 v68; // [rsp+268h] [rbp+1E8h]
  __int128 v69; // [rsp+270h] [rbp+1F0h] BYREF
  const __m128i *v70; // [rsp+280h] [rbp+200h]
  __int128 v71; // [rsp+288h] [rbp+208h]
  __int128 v72; // [rsp+298h] [rbp+218h]
  __int128 v73; // [rsp+2A8h] [rbp+228h]
  __int128 v74; // [rsp+2B8h] [rbp+238h]
  __int128 v75; // [rsp+2C8h] [rbp+248h]
  __int64 v76; // [rsp+2D8h] [rbp+258h]
  __int64 *v77; // [rsp+2E0h] [rbp+260h]
  char v78; // [rsp+2EFh] [rbp+26Fh] BYREF
  __int64 *v79; // [rsp+2F0h] [rbp+270h]
  _BYTE *v80; // [rsp+2F8h] [rbp+278h]
  _BYTE *v81; // [rsp+300h] [rbp+280h]
  __int64 v82; // [rsp+308h] [rbp+288h]
  __int64 v83; // [rsp+310h] [rbp+290h]
  __int64 v84; // [rsp+318h] [rbp+298h]

  v84 = -2; /*0x140d0ea02*/
  v3 = a1; /*0x140d0ea10*/
  v4 = *(unsigned __int8 *)(a1 + 8720); /*0x140d0ea13*/
  v82 = a1; /*0x140d0ea28*/
  switch ( v4 ) /*0x140d0ea2f*/
  {
    case 0LL: /*0x140d0ea2f*/
      *(_WORD *)(a1 + 8721) = 257; /*0x140d0ea31*/
      *(_BYTE *)(a1 + 8723) = 1; /*0x140d0ea3b*/
      v5 = a1 + 4552; /*0x140d0ea4a*/
      sub_1415B2FE0((__m128i *)(a1 + 4552), (const __m128i *)(a1 + 392), 0x1040u); /*0x140d0ea5a*/
      switch ( *(_BYTE *)(v3 + 8704) ) /*0x140d0ea75*/
      {
        case 0: /*0x140d0ea75*/
          goto LABEL_4;
        case 1: /*0x140d0ea75*/
          goto LABEL_54;
        case 2: /*0x140d0ea75*/
          goto LABEL_53;
        case 3: /*0x140d0ea75*/
          goto LABEL_8;
      }
    case 1LL: /*0x140d0ea2f*/
      sub_1415F0F60(&off_1416DF770); /*0x140d0f37a*/
    case 2LL: /*0x140d0ea2f*/
      sub_1415F0F80(&off_1416DF770); /*0x140d0f36c*/
    case 3LL: /*0x140d0ea2f*/
      v5 = a1 + 4552; /*0x140d0ea77*/
      switch ( *(_BYTE *)(a1 + 8704) ) /*0x140d0ea94*/
      {
        case 0: /*0x140d0ea94*/
LABEL_4:
          v6 = (__int64 *)(v3 + 5072); /*0x140d0ea96*/
          v39.m128i_i64[0] = (__int64)aUploadDebugRep; /*0x140d0eaac*/
          v39.m128i_i64[1] = 19; /*0x140d0eab0*/
          v40 = aManager_1; /*0x140d0eabf*/
          *(_QWORD *)&v41 = 7; /*0x140d0eac3*/
          v83 = v5; /*0x140d0eacb*/
          *((_QWORD *)&v41 + 1) = v5; /*0x140d0ead2*/
          v42 = (unsigned __int64)(v3 + 5072); /*0x140d0ead6*/
          v7 = sub_14029F310((volatile void *)(*(_QWORD *)(v3 + 5064) + 16LL)); /*0x140d0eaeb*/
          v79 = v6; /*0x140d0eaf1*/
          if ( v7 ) /*0x140d0eaf8*/
            goto LABEL_5; /*0x140d0eaf8*/
          sub_1415C5640((__int64)&v69, (__int64)&v39, (__int64)&v40); /*0x140d0ef7c*/
          v11 = v69; /*0x140d0ef82*/
          if ( (_BYTE)v69 != 0xFF ) /*0x140d0ef8e*/
            goto LABEL_20; /*0x140d0ef8e*/
          v7 = *((_QWORD *)&v69 + 1); /*0x140d0ef90*/
LABEL_5:
          v39.m128i_i64[0] = (__int64)aUploadDebugRep; /*0x140d0eafe*/
          v39.m128i_i64[1] = 19; /*0x140d0eb11*/
          v40 = aRepo_0; /*0x140d0eb20*/
          *(_QWORD *)&v41 = 4; /*0x140d0eb24*/
          *((_QWORD *)&v41 + 1) = v83; /*0x140d0eb2c*/
          v42 = (unsigned __int64)v6; /*0x140d0eb30*/
          v8 = sub_14029E2E0((_QWORD *)(*(_QWORD *)(v82 + 5064) + 16LL)); /*0x140d0eb4c*/
          if ( v8 ) /*0x140d0eb52*/
            goto LABEL_6; /*0x140d0eb52*/
          sub_1415C5640((__int64)&v69, (__int64)&v39, (__int64)&v40); /*0x140d0efab*/
          v11 = v69; /*0x140d0efb1*/
          if ( (_BYTE)v69 != 0xFF ) /*0x140d0efbd*/
          {
LABEL_20:
            v10 = ((unsigned __int64)((BYTE7(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 5)) << 32) /*0x140d0efc3*/
                | *(unsigned int *)((char *)&v69 + 1);
            v12 = *((_QWORD *)&v69 + 1); /*0x140d0efe3*/
            v25 = (__int64)v70; /*0x140d0efea*/
            v13 = v71; /*0x140d0eff1*/
            v27 = v83; /*0x140d0eff8*/
LABEL_25:
            sub_140C300E0(v27); /*0x140d0f035*/
            if ( *v79 == -1 ) /*0x140d0f046*/
            {
              v26 = 1; /*0x140d0f0da*/
              v32 = v82; /*0x140d0f0dc*/
LABEL_45:
              *(_BYTE *)(v32 + 8704) = 1; /*0x140d0f209*/
              sub_140C28650(v83); /*0x140d0f218*/
              v57 = v10; /*0x140d0f21e*/
              v59 = BYTE6(v10); /*0x140d0f22b*/
              v58 = WORD2(v10); /*0x140d0f235*/
              v61 = v25; /*0x140d0f23c*/
              v62 = v13; /*0x140d0f243*/
              v56 = v11; /*0x140d0f24d*/
              v60 = v12; /*0x140d0f254*/
              v55 = v26; /*0x140d0f25b*/
              v37 = v82; /*0x140d0f262*/
              *(_BYTE *)(v82 + 8723) = 0; /*0x140d0f269*/
              sub_1415B2FE0(&v39, (const __m128i *)v37, 0x168u); /*0x140d0f280*/
              *(_BYTE *)(v37 + 8722) = 0; /*0x140d0f285*/
              v38 = *(_QWORD *)(v37 + 384); /*0x140d0f28c*/
              *(_BYTE *)(v37 + 8721) = 0; /*0x140d0f293*/
              v70 = *(const __m128i **)(v37 + 376); /*0x140d0f2a1*/
              v69 = *(_OWORD *)(v37 + 360); /*0x140d0f2af*/
              sub_140768E20( /*0x140d0f2db*/
                (unsigned int)&v39,
                v38,
                (unsigned int)&v55,
                (unsigned int)&v69,
                *(_DWORD *)(v37 + 8712),
                *(_DWORD *)(v37 + 8716));
              v20 = 1; /*0x140d0f2e1*/
              result = 0; /*0x140d0f2e3*/
              v19 = v82; /*0x140d0f2e5*/
              goto LABEL_46; /*0x140d0f2e5*/
            }
            v77 = (__int64 *)(v82 + 5080); /*0x140d0f05a*/
            v29 = *(_QWORD *)(v82 + 5080); /*0x140d0f061*/
            v80 = *(_BYTE **)(v82 + 5088); /*0x140d0f06f*/
            v81 = nullptr; /*0x140d0f076*/
            v63 = v29; /*0x140d0f081*/
            while ( v80 != v81 ) /*0x140d0f09e*/
            {
              ++v81; /*0x140d0f0a3*/
              v30 = v29 + 96; /*0x140d0f0aa*/
              sub_1408780B0(v29); /*0x140d0f0ae*/
              v29 = v30; /*0x140d0f0b4*/
            }
            v31 = *v79; /*0x140d0f0c0*/
            v26 = 1; /*0x140d0f0c3*/
            v32 = v82; /*0x140d0f0c8*/
            if ( !*v79 ) /*0x140d0f0c0*/
              goto LABEL_45; /*0x140d0f0cf*/
LABEL_44:
            sub_140001360(*v77, 96 * v31, 8); /*0x140d0f1ec*/
            goto LABEL_45; /*0x140d0f204*/
          }
          v8 = *((_QWORD *)&v69 + 1); /*0x140d0f30d*/
LABEL_6:
          v39.m128i_i64[0] = (__int64)aUploadDebugRep; /*0x140d0eb58*/
          v39.m128i_i64[1] = 19; /*0x140d0eb64*/
          v40 = aInput_5; /*0x140d0eb73*/
          *(_QWORD *)&v41 = 5; /*0x140d0eb77*/
          *((_QWORD *)&v41 + 1) = v83; /*0x140d0eb86*/
          v42 = (unsigned __int64)v6; /*0x140d0eb8a*/
          sub_1403D2E50(&v69, &v39); /*0x140d0eb99*/
          v9 = v69; /*0x140d0eb9f*/
          v10 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 13)) << 32) /*0x140d0ebc3*/
              | *(unsigned int *)((char *)&v69 + 9);
          v11 = BYTE8(v69); /*0x140d0ebc6*/
          v12 = (signed __int64)v70; /*0x140d0ebce*/
          v13 = *((_QWORD *)&v71 + 1); /*0x140d0ebdc*/
          v14 = v71; /*0x140d0ebdc*/
          if ( (_QWORD)v69 == -1 ) /*0x140d0ebe7*/
          {
            v27 = v83; /*0x140d0f02b*/
            v25 = v71; /*0x140d0f032*/
            goto LABEL_25; /*0x140d0f032*/
          }
          v54 = v73; /*0x140d0ebf4*/
          v53 = v72; /*0x140d0ec02*/
          v15 = v82; /*0x140d0ec09*/
          v16 = (const __m128i *)(v82 + 5096); /*0x140d0ec10*/
          *(_QWORD *)(v82 + 5160) = v7; /*0x140d0ec17*/
          v3 = v15; /*0x140d0ec1e*/
          *(_QWORD *)(v15 + 5168) = v8; /*0x140d0ec21*/
          *(_QWORD *)(v15 + 5096) = v9; /*0x140d0ec28*/
          *(_BYTE *)(v15 + 5104) = v11; /*0x140d0ec2f*/
          *(_BYTE *)(v15 + 5111) = BYTE6(v10); /*0x140d0ec3d*/
          *(_WORD *)(v15 + 5109) = WORD2(v10); /*0x140d0ec4a*/
          *(_DWORD *)(v15 + 5105) = v10; /*0x140d0ec51*/
          *(_QWORD *)(v15 + 5112) = v12; /*0x140d0ec57*/
          *(_QWORD *)(v15 + 5120) = v14; /*0x140d0ec5e*/
          *(_QWORD *)(v15 + 5128) = v13; /*0x140d0ec65*/
          *(_OWORD *)(v15 + 5136) = v53; /*0x140d0ec73*/
          *(_QWORD *)(v15 + 5152) = v54; /*0x140d0ec81*/
          *(_BYTE *)(v15 + 5336) = 0; /*0x140d0ec88*/
          v17 = (const __m128i *)(v15 + 6296); /*0x140d0ec8f*/
          sub_1415B2FE0((__m128i *)(v15 + 6296), v16, 0x4B0u); /*0x140d0ec9f*/
          v81 = (_BYTE *)(v3 + 8696); /*0x140d0ecab*/
          *(_BYTE *)(v3 + 8696) = 0; /*0x140d0ecb2*/
          v5 = v83; /*0x140d0ecba*/
LABEL_9:
          v83 = v5; /*0x140d0ecf0*/
          v79 = (__int64 *)v17; /*0x140d0ed04*/
          sub_1415B2FE0((__m128i *)(v3 + 7496), v17, 0x4B0u); /*0x140d0ed0e*/
LABEL_11:
          v80 = (_BYTE *)(v3 + 7496); /*0x140d0ed23*/
          sub_140D27CA0(&v69, v3 + 7496, a2); /*0x140d0ed3b*/
          v10 = v69; /*0x140d0ed41*/
          if ( (_QWORD)v69 != -2 ) /*0x140d0ed4c*/
          {
            v22 = *((_QWORD *)&v69 + 1); /*0x140d0ed6c*/
            v23 = v70; /*0x140d0ed73*/
            v24 = v71; /*0x140d0ed7a*/
            v13 = v71; /*0x140d0ed81*/
            v47 = v72; /*0x140d0ed8f*/
            v48 = v73; /*0x140d0ed9d*/
            v49 = v74; /*0x140d0edab*/
            v50 = v75; /*0x140d0edb9*/
            v51 = v76; /*0x140d0edc7*/
            sub_140C2A240(v80); /*0x140d0edd5*/
            if ( v10 != -1 ) /*0x140d0eddf*/
            {
              v46 = v51; /*0x140d0edec*/
              v45 = v50; /*0x140d0ee0c*/
              v44 = v49; /*0x140d0ee10*/
              v43 = v48; /*0x140d0ee14*/
              v42 = v47; /*0x140d0ee18*/
              v39.m128i_i64[0] = v10; /*0x140d0ee1c*/
              v39.m128i_i64[1] = v22; /*0x140d0ee20*/
              v40 = (const char *)v23; /*0x140d0ee24*/
              v41 = v24; /*0x140d0ee28*/
              sub_14028DFB0(&v69, &v39); /*0x140d0ee37*/
              v10 = ((unsigned __int64)((HIBYTE(v69) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 13)) << 32) /*0x140d0ee61*/
                  | *(unsigned int *)((char *)&v69 + 9);
              v11 = BYTE8(v69); /*0x140d0ee64*/
              v12 = (signed __int64)v70; /*0x140d0ee6c*/
              v13 = *((_QWORD *)&v71 + 1); /*0x140d0ee7a*/
              v25 = v71; /*0x140d0ee7a*/
              if ( (_QWORD)v69 == -1 ) /*0x140d0ee85*/
              {
                v26 = 0; /*0x140d0f0e8*/
              }
              else
              {
                HIBYTE(v69) = (((unsigned __int64)((HIBYTE(v69) << 16) /*0x140d0ee99*/
                                                 | (unsigned int)*(unsigned __int16 *)((char *)&v69 + 13)) << 32)
                             | *(unsigned int *)((char *)&v69 + 9)) >> 48;
                *(_WORD *)((char *)&v69 + 13) = WORD2(v10); /*0x140d0eea6*/
                *(_DWORD *)((char *)&v69 + 9) = v10; /*0x140d0eead*/
                v64 = 0; /*0x140d0eedd*/
                v65 = 1; /*0x140d0eee8*/
                v66 = 0; /*0x140d0eef3*/
                v52[2] = 1610612768; /*0x140d0eefe*/
                v52[0] = &v64; /*0x140d0ef10*/
                v52[1] = &off_1416EB4D0; /*0x140d0ef1e*/
                if ( (unsigned __int8)sub_141170260((__int64)&v69, v52) ) /*0x140d0ef33*/
                  sub_1415F0BC0( /*0x140d0f35a*/
                    (unsigned int)aADisplayImplem_12,
                    55,
                    (unsigned int)&v78,
                    (unsigned int)&unk_1416E38F0,
                    (__int64)&off_1416EB588);
                v12 = v64; /*0x140d0ef41*/
                v25 = v65; /*0x140d0ef48*/
                v13 = v66; /*0x140d0ef4f*/
                sub_140C30260((__int64 *)&v69); /*0x140d0ef5d*/
                v26 = 1; /*0x140d0ef63*/
                v11 = 3; /*0x140d0ef65*/
              }
              v33 = v83; /*0x140d0f0ea*/
LABEL_39:
              *v81 = 1; /*0x140d0f155*/
              sub_140C300E0(v33); /*0x140d0f15f*/
              v32 = v82; /*0x140d0f165*/
              if ( *(_QWORD *)(v82 + 5072) == -1 ) /*0x140d0f174*/
                goto LABEL_45; /*0x140d0f174*/
              v77 = (__int64 *)(v82 + 5080); /*0x140d0f181*/
              v35 = *(_QWORD *)(v82 + 5080); /*0x140d0f188*/
              v80 = *(_BYTE **)(v82 + 5088); /*0x140d0f196*/
              v81 = nullptr; /*0x140d0f19d*/
              v79 = (__int64 *)v35; /*0x140d0f1a8*/
              while ( v80 != v81 ) /*0x140d0f1be*/
              {
                ++v81; /*0x140d0f1c3*/
                v36 = v35 + 96; /*0x140d0f1ca*/
                sub_1408780B0(v35); /*0x140d0f1ce*/
                v35 = v36; /*0x140d0f1d4*/
              }
              v32 = v82; /*0x140d0f1d9*/
              v31 = *(_QWORD *)(v82 + 5072); /*0x140d0f1e0*/
              if ( !v31 ) /*0x140d0f1ea*/
                goto LABEL_45; /*0x140d0f1ea*/
              goto LABEL_44; /*0x140d0f1ea*/
            }
            if ( v13 < 0 ) /*0x140d0f004*/
            {
              v28 = 0; /*0x140d0f00a*/
              goto LABEL_23; /*0x140d0f00a*/
            }
            if ( v13 ) /*0x140d0f0f3*/
            {
              nullsub_1(); /*0x140d0f0f9*/
              v28 = 1; /*0x140d0f0fe*/
              v34 = (__m128i *)sub_140001350(v13, 1); /*0x140d0f10b*/
              if ( !v34 ) /*0x140d0f113*/
              {
LABEL_23:
                v77 = (__int64 *)v23; /*0x140d0f00c*/
                v80 = (_BYTE *)v22; /*0x140d0f013*/
                sub_1415F08AB(v28, v13); /*0x140d0f020*/
              }
              v25 = (__int64)v34; /*0x140d0f119*/
              sub_1415B2FE0(v34, v23, v13); /*0x140d0f125*/
              v33 = v83; /*0x140d0f12d*/
              if ( !v22 ) /*0x140d0f134*/
              {
LABEL_38:
                v26 = 1; /*0x140d0f14d*/
                v11 = 3; /*0x140d0f14f*/
                v12 = v13; /*0x140d0f152*/
                goto LABEL_39; /*0x140d0f152*/
              }
            }
            else
            {
              v25 = 1; /*0x140d0f319*/
              v33 = v83; /*0x140d0f322*/
              if ( !v22 ) /*0x140d0f329*/
                goto LABEL_38; /*0x140d0f329*/
            }
            v10 = v33; /*0x140d0f13c*/
            sub_140001360((__int64)v23, v22, 1); /*0x140d0f145*/
            v33 = v10; /*0x140d0f14a*/
            goto LABEL_38; /*0x140d0f14a*/
          }
          v19 = v82; /*0x140d0ed4e*/
          *(_BYTE *)(v82 + 8696) = 3; /*0x140d0ed55*/
          *(_BYTE *)(v19 + 8704) = 3; /*0x140d0ed5c*/
          v20 = 3; /*0x140d0ed63*/
          result = 1; /*0x140d0ed65*/
LABEL_46:
          *(_BYTE *)(v19 + 8720) = v20; /*0x140d0f2ec*/
          return result;
        case 1: /*0x140d0ea94*/
LABEL_54:
          v83 = v5; /*0x140d0f397*/
          sub_1415F0F60(&off_1416E1230); /*0x140d0f3a5*/
        case 2: /*0x140d0ea94*/
LABEL_53:
          v83 = v5; /*0x140d0f381*/
          sub_1415F0F80(&off_1416E1230); /*0x140d0f38f*/
        case 3: /*0x140d0ea94*/
LABEL_8:
          v18 = *(unsigned __int8 *)(v3 + 8696); /*0x140d0ecca*/
          v17 = (const __m128i *)(v3 + 6296); /*0x140d0ecd2*/
          v81 = (_BYTE *)(v3 + 8696); /*0x140d0ece7*/
          switch ( v18 ) /*0x140d0ecee*/
          {
            case 0LL: /*0x140d0ecee*/
              goto LABEL_9;
            case 1LL: /*0x140d0ecee*/
              v83 = v5; /*0x140d0f3d1*/
              v68 = v3 + 8696; /*0x140d0f3d8*/
              v67 = v3 + 6296; /*0x140d0f3df*/
              sub_1415F0F60(&off_1416DF6F0); /*0x140d0f3ed*/
            case 2LL: /*0x140d0ecee*/
              v83 = v5; /*0x140d0f3ad*/
              v68 = v3 + 8696; /*0x140d0f3b4*/
              v67 = v3 + 6296; /*0x140d0f3bb*/
              sub_1415F0F80(&off_1416DF6F0); /*0x140d0f3c9*/
            case 3LL: /*0x140d0ecee*/
              v79 = (__int64 *)(v3 + 6296); /*0x140d0ed15*/
              v83 = v5; /*0x140d0ed1c*/
              goto LABEL_11; /*0x140d0ed1c*/
          }
      }
  }
}