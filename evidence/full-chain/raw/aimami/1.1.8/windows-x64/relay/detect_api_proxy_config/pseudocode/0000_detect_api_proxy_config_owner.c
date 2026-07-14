// win 1.1.8 detect_api_proxy_config node va=0x140a4ab80 depth=0
// detect_api_proxy_config_owner
char __fastcall sub_140A4AB80(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  const __m128i *v6; // r13
  unsigned __int64 v7; // r15
  __int8 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int8 v12; // bl
  __m128i *v13; // rcx
  __m128i *v14; // r13
  __int64 v15; // rax
  const __m128i *v16; // rsi
  const __m128i *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r12
  _BYTE *v29; // rdx
  char v30; // cl
  char result; // al
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  const __m128i *v35; // r14
  bool v36; // zf
  __int64 v37; // rbx
  __m128i *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  __m128i *v41; // rcx
  __m128i *v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rdx
  _QWORD *v45; // rsi
  __m128i v46[8]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v47; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+48h]
  __int128 v49; // [rsp+140h] [rbp+C0h] BYREF
  const char *v50; // [rsp+150h] [rbp+D0h]
  __int64 v51; // [rsp+158h] [rbp+D8h]
  __int64 v52; // [rsp+160h] [rbp+E0h]
  __m128i v53; // [rsp+168h] [rbp+E8h] BYREF
  __m128i v54; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v55; // [rsp+208h] [rbp+188h]
  __int128 v56; // [rsp+280h] [rbp+200h]
  __int128 v57; // [rsp+290h] [rbp+210h]
  __int128 v58; // [rsp+2A0h] [rbp+220h]
  __int128 v59; // [rsp+2B0h] [rbp+230h]
  __int128 v60; // [rsp+2C0h] [rbp+240h]
  __int128 v61; // [rsp+2D0h] [rbp+250h]
  __int128 v62; // [rsp+2E0h] [rbp+260h]
  __m128i v63; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v64; // [rsp+300h] [rbp+280h]
  __int64 v65; // [rsp+308h] [rbp+288h]
  _OWORD v66[20]; // [rsp+310h] [rbp+290h] BYREF
  _QWORD v67[2]; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v68; // [rsp+468h] [rbp+3E8h] BYREF
  __int8 v69; // [rsp+470h] [rbp+3F0h]
  int v70; // [rsp+471h] [rbp+3F1h]
  __int16 v71; // [rsp+475h] [rbp+3F5h]
  char v72; // [rsp+477h] [rbp+3F7h]
  __int64 v73; // [rsp+478h] [rbp+3F8h]
  __int64 v74; // [rsp+480h] [rbp+400h]
  __int64 v75; // [rsp+488h] [rbp+408h]
  __int64 v76; // [rsp+490h] [rbp+410h]
  __int64 v77; // [rsp+498h] [rbp+418h]
  const __m128i *v78; // [rsp+4A0h] [rbp+420h]
  char v79; // [rsp+4AFh] [rbp+42Fh] BYREF
  __int64 v80; // [rsp+4B0h] [rbp+430h]
  _QWORD *v81; // [rsp+4B8h] [rbp+438h]
  _BYTE *v82; // [rsp+4C0h] [rbp+440h]
  const __m128i *v83; // [rsp+4C8h] [rbp+448h]
  __int64 v84; // [rsp+4D0h] [rbp+450h]
  char v85; // [rsp+4DFh] [rbp+45Fh]
  __int64 v86; // [rsp+4E0h] [rbp+460h]

  v86 = -2; /*0x140a4ab9b*/
  v3 = a1; /*0x140a4aba9*/
  v4 = *(unsigned __int8 *)(a1 + 2528); /*0x140a4abac*/
  v84 = a1; /*0x140a4abc1*/
  switch ( v4 ) /*0x140a4abc8*/
  {
    case 0LL: /*0x140a4abc8*/
      *(_WORD *)(a1 + 2529) = 257; /*0x140a4abca*/
      *(_BYTE *)(a1 + 2531) = 1; /*0x140a4abd4*/
      v5 = a1 + 1456; /*0x140a4abe3*/
      sub_1412762D0((__m128i *)(a1 + 1456), (const __m128i *)(a1 + 392), 0x428u); /*0x140a4abf3*/
      switch ( *(_BYTE *)(v3 + 2512) ) /*0x140a4ac0e*/
      {
        case 0: /*0x140a4ac0e*/
          goto LABEL_4;
        case 1: /*0x140a4ac0e*/
          goto LABEL_62;
        case 2: /*0x140a4ac0e*/
          goto LABEL_61;
        case 3: /*0x140a4ac0e*/
          goto LABEL_9;
      }
    case 1LL: /*0x140a4abc8*/
      sub_1412ADB20(&off_141363680); /*0x140a4b625*/
    case 2LL: /*0x140a4abc8*/
      sub_1412ADB40((__int64)&off_141363680); /*0x140a4b617*/
    case 3LL: /*0x140a4abc8*/
      v5 = a1 + 1456; /*0x140a4ac10*/
      switch ( *(_BYTE *)(a1 + 2512) ) /*0x140a4ac2d*/
      {
        case 0: /*0x140a4ac2d*/
LABEL_4:
          v6 = (const __m128i *)(v3 + 1976); /*0x140a4ac2f*/
          *(_QWORD *)&v49 = aDetectApiProxy; /*0x140a4ac48*/
          *((_QWORD *)&v49 + 1) = 23; /*0x140a4ac4f*/
          v50 = aApp_4; /*0x140a4ac61*/
          v51 = 3; /*0x140a4ac68*/
          v80 = v5; /*0x140a4ac73*/
          v52 = v5; /*0x140a4ac7a*/
          v53 = (__m128i)(unsigned __int64)v6; /*0x140a4ac81*/
          sub_140421360(&v63, (__int64)&v49); /*0x140a4ac96*/
          v7 = ((unsigned __int64)((v63.m128i_u8[15] << 16) /*0x140a4acc1*/
                                 | (unsigned int)*(unsigned __int16 *)((char *)&v63.m128i_u16[6] + 1)) << 32)
             | *(unsigned int *)((char *)&v63.m128i_u32[2] + 1);
          v8 = v63.m128i_i8[8]; /*0x140a4acc4*/
          v9 = v64; /*0x140a4accc*/
          v10 = v65; /*0x140a4acd3*/
          v11 = *(_QWORD *)&v66[0]; /*0x140a4acda*/
          if ( v63.m128i_i64[0] != 3 ) /*0x140a4ace5*/
          {
            v62 = *(_OWORD *)((char *)&v66[6] + 8); /*0x140a4ade5*/
            v61 = *(_OWORD *)((char *)&v66[5] + 8); /*0x140a4adf3*/
            v60 = *(_OWORD *)((char *)&v66[4] + 8); /*0x140a4ae01*/
            v59 = *(_OWORD *)((char *)&v66[3] + 8); /*0x140a4ae24*/
            v58 = *(_OWORD *)((char *)&v66[2] + 8); /*0x140a4ae2b*/
            v57 = *(_OWORD *)((char *)&v66[1] + 8); /*0x140a4ae32*/
            v56 = *(_OWORD *)((char *)v66 + 8); /*0x140a4ae39*/
            v3 = v84; /*0x140a4ae40*/
            v17 = (const __m128i *)(v84 + 2000); /*0x140a4ae47*/
            *(_QWORD *)(v84 + 2000) = v63.m128i_i64[0]; /*0x140a4ae4e*/
            *(_BYTE *)(v3 + 2008) = v8; /*0x140a4ae55*/
            *(_BYTE *)(v3 + 2015) = BYTE6(v7); /*0x140a4ae63*/
            *(_WORD *)(v3 + 2013) = WORD2(v7); /*0x140a4ae71*/
            *(_DWORD *)(v3 + 2009) = v7; /*0x140a4ae79*/
            *(_QWORD *)(v3 + 2016) = v9; /*0x140a4ae80*/
            *(_QWORD *)(v3 + 2024) = v10; /*0x140a4ae87*/
            *(_QWORD *)(v3 + 2032) = v11; /*0x140a4ae8e*/
            v18 = v57; /*0x140a4ae9c*/
            v19 = v58; /*0x140a4aea3*/
            v20 = v59; /*0x140a4aeaa*/
            *(_OWORD *)(v3 + 2040) = v56; /*0x140a4aeb1*/
            *(_OWORD *)(v3 + 2056) = v18; /*0x140a4aeb9*/
            *(_OWORD *)(v3 + 2072) = v19; /*0x140a4aec1*/
            *(_OWORD *)(v3 + 2088) = v20; /*0x140a4aec9*/
            *(_OWORD *)(v3 + 2104) = v60; /*0x140a4aed8*/
            *(_OWORD *)(v3 + 2120) = v61; /*0x140a4aee7*/
            *(_OWORD *)(v3 + 2136) = v62; /*0x140a4aef6*/
            *(_BYTE *)(v3 + 2160) = 0; /*0x140a4aefe*/
            v16 = (const __m128i *)(v3 + 2168); /*0x140a4af06*/
            sub_1412762D0((__m128i *)(v3 + 2168), v17, 0xA8u); /*0x140a4af16*/
            v82 = (_BYTE *)(v3 + 2504); /*0x140a4af22*/
            *(_BYTE *)(v3 + 2504) = 0; /*0x140a4af29*/
LABEL_12:
            v83 = (const __m128i *)(v3 + 2336); /*0x140a4af3e*/
            v78 = v16; /*0x140a4af45*/
            sub_1412762D0((__m128i *)(v3 + 2336), v16, 0xA8u); /*0x140a4af4f*/
            switch ( *(_BYTE *)(v3 + 2496) ) /*0x140a4af6a*/
            {
              case 0: /*0x140a4af6a*/
                goto LABEL_13;
              case 1: /*0x140a4af6a*/
                goto LABEL_64;
              case 2: /*0x140a4af6a*/
                goto LABEL_63;
              case 3: /*0x140a4af6a*/
                goto LABEL_23;
            }
          }
          v83 = v6; /*0x140a4aceb*/
          sub_1409B5490(v80); /*0x140a4acf9*/
          v12 = 1; /*0x140a4acff*/
          if ( !__OFSUB__(0, v83->m128i_i64[0]) ) /*0x140a4ad0d*/
          {
            v13 = *(__m128i **)(v84 + 1984); /*0x140a4ad1a*/
            v81 = *(_QWORD **)(v84 + 1992); /*0x140a4ad28*/
            v82 = nullptr; /*0x140a4ad2f*/
            v78 = v13; /*0x140a4ad3a*/
            while ( v81 != (_QWORD *)v82 ) /*0x140a4ad5e*/
            {
              ++v82; /*0x140a4ad67*/
              v14 = v13 + 6; /*0x140a4ad6e*/
              sub_1401EEBE0(v13); /*0x140a4ad72*/
              v13 = v14; /*0x140a4ad78*/
            }
            v39 = v83->m128i_i64[0]; /*0x140a4b314*/
            if ( v83->m128i_i64[0] ) /*0x140a4b314*/
            {
              v40 = v84; /*0x140a4b31c*/
              goto LABEL_55; /*0x140a4b323*/
            }
          }
          v40 = v84; /*0x140a4b328*/
          goto LABEL_56; /*0x140a4b32f*/
        case 1: /*0x140a4ac2d*/
LABEL_62:
          v80 = v5; /*0x140a4b642*/
          sub_1412ADB20(&off_1413613C8); /*0x140a4b650*/
        case 2: /*0x140a4ac2d*/
LABEL_61:
          v80 = v5; /*0x140a4b62c*/
          sub_1412ADB40((__int64)&off_1413613C8); /*0x140a4b63a*/
        case 3: /*0x140a4ac2d*/
          goto LABEL_9;
      }
  }
LABEL_9:
  v80 = v5; /*0x140a4ad7d*/
  v15 = *(unsigned __int8 *)(v3 + 2504); /*0x140a4ad8b*/
  v16 = (const __m128i *)(v3 + 2168); /*0x140a4ad93*/
  v82 = (_BYTE *)(v3 + 2504); /*0x140a4ada8*/
  switch ( v15 ) /*0x140a4adaf*/
  {
    case 0LL: /*0x140a4adaf*/
      goto LABEL_12;
    case 1LL: /*0x140a4adaf*/
      v76 = v3 + 2168; /*0x140a4b68c*/
      sub_1412ADB20(&off_141363708); /*0x140a4b69a*/
    case 2LL: /*0x140a4adaf*/
      v76 = v3 + 2168; /*0x140a4b676*/
      sub_1412ADB40((__int64)&off_141363708); /*0x140a4b684*/
    case 3LL: /*0x140a4adaf*/
      v78 = (const __m128i *)(v3 + 2168); /*0x140a4adb1*/
      v83 = (const __m128i *)(v3 + 2336); /*0x140a4adbf*/
      switch ( *(_BYTE *)(v3 + 2496) ) /*0x140a4addc*/
      {
        case 0: /*0x140a4addc*/
LABEL_13:
          sub_1412762D0(&v63, v83, 0x98u); /*0x140a4af6c*/
          v21 = off_141963508; /*0x140a4af85*/
          if ( *((_DWORD *)off_141963508 + 24) ) /*0x140a4af8c*/
          {
            v85 = 1; /*0x140a4b5c8*/
            v45 = off_141963508; /*0x140a4b5cf*/
            sub_141277ED3(); /*0x140a4b5d2*/
            v21 = v45; /*0x140a4b5d7*/
          }
          if ( *((_DWORD *)v21 + 4) == 2 ) /*0x140a4af9b*/
          {
            v22 = 704; /*0x140a4afa5*/
            if ( *(_BYTE *)v21 ) /*0x140a4af9d*/
              v22 = 472; /*0x140a4afaa*/
            v23 = v21[1] + v22; /*0x140a4afae*/
            v85 = 0; /*0x140a4afb2*/
            v24 = sub_1401A5190(v23, v21, &v63, &off_141321088); /*0x140a4afc7*/
          }
          else
          {
            v25 = 704; /*0x140a4afd8*/
            if ( *((_BYTE *)v21 + 64) ) /*0x140a4afcf*/
              v25 = 472; /*0x140a4afdd*/
            v26 = v21[9] + v25; /*0x140a4afe5*/
            v85 = 0; /*0x140a4afe9*/
            v24 = sub_1401A5190(v26, v21 + 8, &v63, &off_141321070); /*0x140a4b001*/
          }
          v3 = v84; /*0x140a4b007*/
          *(_QWORD *)(v84 + 2488) = v24; /*0x140a4b00e*/
          break; /*0x140a4b00e*/
        case 1: /*0x140a4addc*/
LABEL_64:
          sub_1412ADB20(&off_141362960); /*0x140a4b667*/
        case 2: /*0x140a4addc*/
LABEL_63:
          sub_1412ADB40((__int64)&off_141362960); /*0x140a4b658*/
        case 3: /*0x140a4addc*/
          break;
      }
LABEL_23:
      v81 = (_QWORD *)(v3 + 2488); /*0x140a4b015*/
      sub_140063E90(&v63, v3 + 2488, a2); /*0x140a4b030*/
      v7 = v63.m128i_i64[0]; /*0x140a4b036*/
      if ( v63.m128i_i64[0] == 0x8000000000000002uLL ) /*0x140a4b04a*/
      {
        v29 = (_BYTE *)v84; /*0x140a4b083*/
        *(_BYTE *)(v84 + 2496) = 3; /*0x140a4b08a*/
        v29[2504] = 3; /*0x140a4b091*/
        v29[2512] = 3; /*0x140a4b098*/
        v30 = 3; /*0x140a4b09f*/
        result = 1; /*0x140a4b0a1*/
        goto LABEL_57; /*0x140a4b0a3*/
      }
      if ( v63.m128i_i64[0] == 0x8000000000000001uLL ) /*0x140a4b059*/
      {
        v27 = v63.m128i_i64[1]; /*0x140a4b05b*/
        v11 = v64; /*0x140a4b062*/
        v28 = 0x800000000000000CuLL; /*0x140a4b069*/
        v77 = v65; /*0x140a4b07a*/
      }
      else
      {
        v28 = v63.m128i_i64[1]; /*0x140a4b0a8*/
        v27 = v64; /*0x140a4b0af*/
        v11 = v65; /*0x140a4b0b6*/
        v77 = *(_QWORD *)&v66[0]; /*0x140a4b0c4*/
        sub_1412762D0(&v54, (const __m128i *)((char *)v66 + 8), 0x88u); /*0x140a4b0df*/
      }
      sub_1412762D0(&v47, &v54, 0x88u); /*0x140a4b0f5*/
      v32 = *v81; /*0x140a4b101*/
      if ( (unsigned __int8)sub_140EE8B80(*v81) ) /*0x140a4b107*/
        sub_140EE5BB0(v32); /*0x140a4b114*/
      if ( v7 == 0x8000000000000001uLL ) /*0x140a4b11d*/
      {
        v63.m128i_i64[0] = v28; /*0x140a4b123*/
        v63.m128i_i64[1] = v27; /*0x140a4b12a*/
        v64 = v11; /*0x140a4b131*/
        v65 = v77; /*0x140a4b13f*/
        v66[0] = v47; /*0x140a4b14a*/
        v67[0] = &v63; /*0x140a4b151*/
        v67[1] = sub_140E156C0; /*0x140a4b15f*/
        sub_14108F360((unsigned __int8 *)&v54, byte_141362548, (unsigned __int64)v67); /*0x140a4b17b*/
        sub_1409AF240(v63.m128i_i64); /*0x140a4b188*/
        v35 = (const __m128i *)v54.m128i_i64[1]; /*0x140a4b195*/
        v28 = v54.m128i_i64[0]; /*0x140a4b195*/
        v11 = v55; /*0x140a4b19c*/
        *(_BYTE *)(v84 + 2496) = 1; /*0x140a4b1aa*/
        v36 = v11 == 0; /*0x140a4b1b1*/
        if ( v11 < 0 ) /*0x140a4b1b4*/
        {
LABEL_32:
          v37 = 0; /*0x140a4b1b6*/
          goto LABEL_33; /*0x140a4b1b6*/
        }
LABEL_36:
        if ( v36 ) /*0x140a4b208*/
        {
          v10 = 1; /*0x140a4b334*/
          if ( !v28 ) /*0x140a4b33c*/
            goto LABEL_40; /*0x140a4b33c*/
        }
        else
        {
          nullsub_1(v34, v33); /*0x140a4b20e*/
          v37 = 1; /*0x140a4b213*/
          v38 = (__m128i *)sub_140001360(v11, 1); /*0x140a4b220*/
          if ( !v38 ) /*0x140a4b228*/
          {
LABEL_33:
            v81 = (_QWORD *)v28; /*0x140a4b1b8*/
            v83 = v35; /*0x140a4b1bf*/
            sub_1412AD46B(v37, v11); /*0x140a4b1cc*/
          }
          v10 = (__int64)v38; /*0x140a4b22a*/
          sub_1412762D0(v38, v35, v11); /*0x140a4b236*/
          if ( !v28 ) /*0x140a4b23e*/
            goto LABEL_40; /*0x140a4b23e*/
        }
        sub_140001370((__int64)v35, v28, 1); /*0x140a4b24c*/
LABEL_40:
        v12 = 1; /*0x140a4b251*/
        v8 = 3; /*0x140a4b253*/
        v9 = v11; /*0x140a4b256*/
        goto LABEL_50; /*0x140a4b259*/
      }
      sub_1412762D0(v46, &v47, 0x88u); /*0x140a4b1e5*/
      *(_BYTE *)(v84 + 2496) = 1; /*0x140a4b1f1*/
      if ( __OFSUB__(-(__int64)v7, 1) ) /*0x140a4b1fb*/
      {
        v35 = (const __m128i *)v27; /*0x140a4b200*/
        v36 = v11 == 0; /*0x140a4b203*/
        if ( v11 < 0 ) /*0x140a4b206*/
          goto LABEL_32; /*0x140a4b206*/
        goto LABEL_36; /*0x140a4b206*/
      }
      sub_1412762D0(&v53, v46, 0x88u); /*0x140a4b26f*/
      *(_QWORD *)&v49 = v7; /*0x140a4b274*/
      *((_QWORD *)&v49 + 1) = v28; /*0x140a4b27b*/
      v50 = (const char *)v27; /*0x140a4b282*/
      v51 = v11; /*0x140a4b289*/
      v52 = v77; /*0x140a4b297*/
      sub_14003ABF0(&v63, &v49); /*0x140a4b2ac*/
      v7 = ((unsigned __int64)((v63.m128i_u8[15] << 16) /*0x140a4b2d7*/
                             | (unsigned int)*(unsigned __int16 *)((char *)&v63.m128i_u16[6] + 1)) << 32)
         | *(unsigned int *)((char *)&v63.m128i_u32[2] + 1);
      v8 = v63.m128i_i8[8]; /*0x140a4b2e4*/
      v9 = v64; /*0x140a4b2ec*/
      v10 = v65; /*0x140a4b2f3*/
      v11 = *(_QWORD *)&v66[0]; /*0x140a4b2fa*/
      if ( v63.m128i_i64[0] == 0x8000000000000025uLL ) /*0x140a4b304*/
      {
        v12 = 0; /*0x140a4b306*/
      }
      else
      {
        v63.m128i_i8[15] = (((unsigned __int64)((v63.m128i_u8[15] << 16) /*0x140a4b355*/
                                              | (unsigned int)*(unsigned __int16 *)((char *)&v63.m128i_u16[6] + 1)) << 32)
                          | *(unsigned int *)((char *)&v63.m128i_u32[2] + 1)) >> 48;
        *(__int16 *)((char *)&v63.m128i_i16[6] + 1) = WORD2(v7); /*0x140a4b362*/
        *(__int32 *)((char *)&v63.m128i_i32[2] + 1) = v7; /*0x140a4b369*/
        v54.m128i_i64[0] = 0; /*0x140a4b39a*/
        v54.m128i_i64[1] = 1; /*0x140a4b3a5*/
        v55 = 0; /*0x140a4b3b0*/
        v48 = 1610612768; /*0x140a4b3bb*/
        v47.m128i_i64[0] = (__int64)&v54; /*0x140a4b3ca*/
        v47.m128i_i64[1] = (__int64)&off_141363340; /*0x140a4b3d5*/
        if ( (unsigned __int8)sub_140E156C0((__int64)&v63, &v47) ) /*0x140a4b3e4*/
          sub_1412AD780( /*0x140a4b605*/
            (__int64)aADisplayImplem_11,
            55,
            (__int64)&v79,
            (__int64)&unk_141363430,
            (__int64)&off_1413633F8);
        v10 = v54.m128i_i64[1]; /*0x140a4b3f9*/
        v9 = v54.m128i_i64[0]; /*0x140a4b3f9*/
        v11 = v55; /*0x140a4b400*/
        sub_1409AF240(v63.m128i_i64); /*0x140a4b40e*/
        v12 = 1; /*0x140a4b414*/
        v8 = 3; /*0x140a4b416*/
      }
LABEL_50:
      *v82 = 1; /*0x140a4b419*/
      sub_1409B5490(v80); /*0x140a4b42a*/
      v40 = v84; /*0x140a4b432*/
      if ( !__OFSUB__(0, *(_QWORD *)(v84 + 1976)) ) /*0x140a4b440*/
      {
        v41 = *(__m128i **)(v84 + 1984); /*0x140a4b446*/
        v81 = *(_QWORD **)(v84 + 1992); /*0x140a4b454*/
        v82 = nullptr; /*0x140a4b45b*/
        v83 = v41; /*0x140a4b466*/
        while ( v81 != (_QWORD *)v82 ) /*0x140a4b47e*/
        {
          ++v82; /*0x140a4b483*/
          v42 = v41 + 6; /*0x140a4b48a*/
          sub_1401EEBE0(v41); /*0x140a4b48e*/
          v41 = v42; /*0x140a4b494*/
        }
        v40 = v84; /*0x140a4b499*/
        v39 = *(_QWORD *)(v84 + 1976); /*0x140a4b4a0*/
        if ( v39 ) /*0x140a4b4aa*/
LABEL_55:
          sub_140001370(*(_QWORD *)(v40 + 1984), 96 * v39, 8); /*0x140a4b4ac*/
      }
LABEL_56:
      *(_BYTE *)(v40 + 2512) = 1; /*0x140a4b4c6*/
      sub_1409858B0(v80); /*0x140a4b4d5*/
      v70 = v7; /*0x140a4b4db*/
      v72 = BYTE6(v7); /*0x140a4b4e9*/
      v71 = WORD2(v7); /*0x140a4b4f3*/
      v73 = v9; /*0x140a4b4fb*/
      v74 = v10; /*0x140a4b502*/
      v75 = v11; /*0x140a4b509*/
      v69 = v8; /*0x140a4b513*/
      v68 = v12; /*0x140a4b51a*/
      v43 = v84; /*0x140a4b521*/
      *(_BYTE *)(v84 + 2531) = 0; /*0x140a4b528*/
      sub_1412762D0(&v63, (const __m128i *)v43, 0x168u); /*0x140a4b542*/
      *(_BYTE *)(v43 + 2530) = 0; /*0x140a4b547*/
      v44 = *(_QWORD *)(v43 + 384); /*0x140a4b54e*/
      *(_BYTE *)(v43 + 2529) = 0; /*0x140a4b555*/
      v50 = *(const char **)(v43 + 376); /*0x140a4b563*/
      v49 = *(_OWORD *)(v43 + 360); /*0x140a4b571*/
      invoke_resolver_respond_sys(&v63, v44, (__int64)&v68, &v49, *(_DWORD *)(v43 + 2520), *(_DWORD *)(v43 + 2524)); /*0x140a4b59d*/
      v30 = 1; /*0x140a4b5a3*/
      result = 0; /*0x140a4b5a5*/
      v29 = (_BYTE *)v84; /*0x140a4b5a7*/
LABEL_57:
      v29[2528] = v30; /*0x140a4b5ae*/
      return result;
  }
}