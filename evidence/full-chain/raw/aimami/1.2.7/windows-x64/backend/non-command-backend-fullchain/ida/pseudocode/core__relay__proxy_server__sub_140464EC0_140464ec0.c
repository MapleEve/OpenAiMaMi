// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140464ec0 | name sub_140464EC0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140464EC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // edx
  _QWORD **v8; // r8
  _BYTE *v9; // r10
  __int64 v10; // rax
  __int64 *v11; // r11
  _BYTE *v12; // rdi
  __int64 *v13; // rbx
  _BYTE *v14; // r14
  _BYTE *v15; // r15
  __int64 v16; // rax
  char v17; // bl
  char result; // al
  char v19; // cl
  char v20; // dl
  __int64 v21; // rax
  _BYTE *v22; // r8
  _BYTE *v23; // r14
  __int64 *v24; // r15
  _BYTE *v25; // r12
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, __int64, _BYTE *); // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // rax
  char v36; // bl
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  bool v39; // cl
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int128 v43; // xmm4
  __int128 v44; // xmm5
  __int128 v45; // xmm6
  __m256i v46; // [rsp+98h] [rbp+18h] BYREF
  __int128 v47; // [rsp+B8h] [rbp+38h]
  __int128 v48; // [rsp+C8h] [rbp+48h]
  __int128 v49; // [rsp+D8h] [rbp+58h]
  __int128 v50; // [rsp+E8h] [rbp+68h]
  __int128 v51; // [rsp+F8h] [rbp+78h]
  __int64 v52; // [rsp+108h] [rbp+88h]
  __int64 v53; // [rsp+110h] [rbp+90h]
  __int64 v54; // [rsp+118h] [rbp+98h]
  _QWORD **v55; // [rsp+120h] [rbp+A0h]
  _BYTE *v56; // [rsp+128h] [rbp+A8h]
  __int64 v57; // [rsp+130h] [rbp+B0h]
  __int64 v58; // [rsp+138h] [rbp+B8h]
  __int64 v59; // [rsp+140h] [rbp+C0h]
  __int64 v60; // [rsp+148h] [rbp+C8h]
  __int64 v61; // [rsp+150h] [rbp+D0h]
  __int64 v62; // [rsp+158h] [rbp+D8h]
  __int64 v63; // [rsp+160h] [rbp+E0h]
  __int64 v64; // [rsp+168h] [rbp+E8h]
  __int64 v65; // [rsp+170h] [rbp+F0h]
  __int64 v66; // [rsp+178h] [rbp+F8h]
  __int64 v67; // [rsp+180h] [rbp+100h]
  __int64 v68; // [rsp+188h] [rbp+108h]
  __int64 v69; // [rsp+190h] [rbp+110h]
  __int64 v70; // [rsp+198h] [rbp+118h]
  __int64 v71; // [rsp+1A0h] [rbp+120h]
  __int64 v72; // [rsp+1A8h] [rbp+128h]
  __int64 v73; // [rsp+1B0h] [rbp+130h]
  __int64 v74; // [rsp+1B8h] [rbp+138h]
  __int64 v75; // [rsp+1C0h] [rbp+140h]
  __int64 *v76; // [rsp+1C8h] [rbp+148h]
  __int64 *v77; // [rsp+1D0h] [rbp+150h]
  __int64 v78; // [rsp+1D8h] [rbp+158h]
  _BYTE *v79; // [rsp+1E0h] [rbp+160h]
  _BYTE *v80; // [rsp+1E8h] [rbp+168h]
  __int64 v81; // [rsp+1F0h] [rbp+170h]
  _BYTE *v82; // [rsp+1F8h] [rbp+178h]
  __int64 *v83; // [rsp+200h] [rbp+180h]
  _BYTE *v84; // [rsp+208h] [rbp+188h]
  __int64 *v85; // [rsp+210h] [rbp+190h]
  _BYTE *v86; // [rsp+218h] [rbp+198h]
  _QWORD **v87; // [rsp+220h] [rbp+1A0h]
  _BYTE *v88; // [rsp+228h] [rbp+1A8h]
  __int64 v89; // [rsp+230h] [rbp+1B0h]
  _QWORD **v90; // [rsp+238h] [rbp+1B8h]
  _BYTE *v91; // [rsp+240h] [rbp+1C0h]
  __int64 v92; // [rsp+248h] [rbp+1C8h]
  __int64 v93; // [rsp+250h] [rbp+1D0h]
  __int64 v94; // [rsp+258h] [rbp+1D8h]
  _BYTE *v95; // [rsp+260h] [rbp+1E0h]
  __int64 v96; // [rsp+268h] [rbp+1E8h]

  v96 = -2;
  v3 = *(unsigned __int8 *)(a1 + 200);
  v92 = a1;
  switch ( v3 )
  {
    case 0LL:
      v4 = *(_QWORD **)a1;
      *(_QWORD *)(a1 + 8) = 5;
      *(_DWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = v4;
      v5 = a1 + 56;
      *(_BYTE *)(a1 + 56) = 0;
      v6 = 5;
      v7 = 0;
LABEL_5:
      *(_QWORD *)(a1 + 32) = v4;
      *(_QWORD *)(a1 + 40) = v6;
      *(_DWORD *)(a1 + 48) = v7;
      v8 = (_QWORD **)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v4;
      v9 = (_BYTE *)(a1 + 192);
      *(_BYTE *)(a1 + 192) = 0;
LABEL_6:
      v10 = *v4 + 16LL;
      v11 = (__int64 *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = v10;
      v12 = (_BYTE *)(a1 + 184);
      *(_BYTE *)(a1 + 184) = 0;
LABEL_7:
      v13 = (__int64 *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = v10;
      v14 = (_BYTE *)(a1 + 176);
      *(_BYTE *)(a1 + 176) = 0;
LABEL_8:
      v93 = a1 + 88;
      *(_QWORD *)(a1 + 88) = v10;
      v15 = (_BYTE *)(a1 + 104);
      *(_BYTE *)(a1 + 104) = 0;
LABEL_9:
      *(_QWORD *)(a1 + 96) = v10;
      *(_BYTE *)(a1 + 112) = 0;
LABEL_10:
      v80 = v15;
      v79 = v14;
      v77 = v13;
      v91 = v12;
      v76 = v11;
      v95 = v9;
      v90 = v8;
      v94 = v5;
      v16 = *(_QWORD *)(a1 + 96);
      *(_OWORD *)&v46.m256i_u64[1] = 0;
      *(_QWORD *)(a1 + 112) = v16;
      *(_QWORD *)(a1 + 120) = 0;
      *(_OWORD *)(a1 + 128) = *(_OWORD *)v46.m256i_i8;
      *(_QWORD *)(a1 + 144) = v46.m256i_i64[2];
      *(_QWORD *)(a1 + 152) = 1;
      *(_QWORD *)(a1 + 160) = 1;
      *(_BYTE *)(a1 + 168) = 0;
LABEL_11:
      v52 = a1 + 112;
      v17 = sub_141500620(a1 + 112, a2);
      if ( v17 == 2 )
      {
        *v80 = 4;
        *v79 = 3;
        *v91 = 3;
        *v95 = 3;
        result = 2;
        v19 = 3;
        v20 = 3;
      }
      else
      {
        sub_141500F50(v52);
        v21 = *(_QWORD *)(v92 + 120);
        v22 = v95;
        v23 = v91;
        v24 = v77;
        v25 = v79;
        if ( v21 )
        {
          v26 = *(_QWORD *)(v92 + 128);
          v27 = *(void (__fastcall **)(__int64, __int64, _BYTE *))(v21 + 24);
          v89 = v94;
          v88 = v95;
          v87 = v90;
          v86 = v91;
          v85 = v76;
          v84 = v79;
          v83 = v77;
          v82 = v80;
          v81 = v93;
          v27(v26, v93, v95);
        }
        if ( v17 == 1 )
        {
          v89 = v94;
          v88 = v95;
          v87 = v90;
          v86 = v91;
          v85 = v76;
          v84 = v79;
          v83 = v77;
          v82 = v80;
          v81 = v93;
          sub_141939280(aInternalErrorE_4, 40, &off_1419F13C0);
        }
        *v80 = 1;
        v28 = *v24;
        *v25 = 1;
        *v23 = 1;
        v29 = *(_DWORD *)(v28 + 40);
        v30 = *(_QWORD *)(v28 + 48);
        v91 = (_BYTE *)v28;
        *(_QWORD *)(v28 + 40) = 0;
        if ( v29 == 1 )
          sub_14092A770(v30);
        v31 = v94;
        v57 = v94;
        v56 = v95;
        v55 = v90;
        sub_1414FE790(v91, 1, v22);
        *v95 = 1;
        v78 = v31;
        v32 = sub_141514620();
        v33 = v92;
        *(_QWORD *)(v92 + 64) = v32;
        *(_DWORD *)(v33 + 72) = v34;
        while ( 1 )
        {
          v36 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 32) + 8LL) + 16LL);
          if ( !v36 )
            goto LABEL_52;
          v78 = v31;
          v37 = sub_141514630(v33 + 64);
          v33 = v92;
          v39 = v38 >= *(_DWORD *)(v92 + 48);
          if ( v37 != *(_QWORD *)(v92 + 40) )
            v39 = v37 >= *(_QWORD *)(v92 + 40);
          if ( v39 )
          {
LABEL_52:
            result = v36 == 0;
            v19 = 1;
            v20 = 1;
            goto LABEL_55;
          }
          v78 = v31;
          sub_1415141D0(&v46, 0, 10000000, &off_1419F15F8);
          v94 = v31;
          v40 = v50;
          v41 = v49;
          v42 = *(_OWORD *)v46.m256i_i8;
          v43 = *(_OWORD *)&v46.m256i_u64[2];
          v44 = v47;
          v45 = v48;
          a1 = v92;
          *(_OWORD *)(v92 + 176) = v51;
          *(_OWORD *)(a1 + 160) = v40;
          *(_OWORD *)(a1 + 144) = v41;
          *(_OWORD *)(a1 + 128) = v45;
          *(_OWORD *)(a1 + 112) = v44;
          *(_OWORD *)(a1 + 96) = v43;
          *(_OWORD *)(a1 + 80) = v42;
LABEL_50:
          v95 = (_BYTE *)(a1 + 80);
          if ( (unsigned __int8)sub_141514440(a1 + 80, a2) )
            break;
          v31 = v94;
          v78 = v94;
          sub_14040CAE0(v95);
          v33 = v92;
        }
        result = 2;
        v20 = 3;
        v19 = 4;
      }
      v33 = v92;
LABEL_55:
      *(_BYTE *)(v33 + 56) = v19;
      *(_BYTE *)(v33 + 200) = v20;
      return result;
    case 1LL:
      sub_1419393E0(&off_1419F1660);
    case 2LL:
      sub_141939400(&off_1419F1660);
    case 3LL:
      v5 = a1 + 56;
      switch ( *(_BYTE *)(a1 + 56) )
      {
        case 0:
          v4 = *(_QWORD **)(a1 + 24);
          v6 = *(_QWORD *)(a1 + 8);
          v7 = *(_DWORD *)(a1 + 16);
          goto LABEL_5;
        case 1:
          sub_1419393E0(&off_1419F15E0);
        case 2:
          sub_141939400(&off_1419F15E0);
        case 3:
          v9 = (_BYTE *)(a1 + 192);
          v8 = (_QWORD **)(a1 + 64);
          switch ( *(_BYTE *)(a1 + 192) )
          {
            case 0:
              v4 = *v8;
              break;
            case 1:
              v54 = a1 + 56;
              v53 = a1 + 64;
              sub_1419393E0(&off_1419F1610);
            case 2:
              v54 = a1 + 56;
              v53 = a1 + 64;
              sub_141939400(&off_1419F1610);
            case 3:
              v12 = (_BYTE *)(a1 + 184);
              v11 = (__int64 *)(a1 + 72);
              switch ( *(_BYTE *)(a1 + 184) )
              {
                case 0:
                  v10 = *v11;
                  goto LABEL_7;
                case 1:
                  v69 = a1 + 56;
                  v68 = a1 + 192;
                  v67 = a1 + 64;
                  v66 = a1 + 72;
                  sub_1419393E0(&off_1419F18A8);
                case 2:
                  v69 = a1 + 56;
                  v68 = a1 + 192;
                  v67 = a1 + 64;
                  v66 = a1 + 72;
                  sub_141939400(&off_1419F18A8);
                case 3:
                  v14 = (_BYTE *)(a1 + 176);
                  v13 = (__int64 *)(a1 + 80);
                  switch ( *(_BYTE *)(a1 + 176) )
                  {
                    case 0:
                      v10 = *v13;
                      break;
                    case 1:
                      v75 = a1 + 56;
                      v74 = a1 + 192;
                      v73 = a1 + 64;
                      v72 = a1 + 184;
                      v71 = a1 + 72;
                      v70 = a1 + 80;
                      sub_1419393E0(&off_1419F13A8);
                    case 2:
                      v75 = a1 + 56;
                      v74 = a1 + 192;
                      v73 = a1 + 64;
                      v72 = a1 + 184;
                      v71 = a1 + 72;
                      v70 = a1 + 80;
                      sub_141939400(&off_1419F13A8);
                    case 3:
                      v15 = (_BYTE *)(a1 + 104);
                      v35 = *(unsigned __int8 *)(a1 + 104);
                      v93 = a1 + 88;
                      switch ( v35 )
                      {
                        case 0LL:
                          v10 = *(_QWORD *)(a1 + 88);
                          goto LABEL_9;
                        case 1LL:
                          v65 = a1 + 56;
                          v64 = a1 + 192;
                          v63 = a1 + 64;
                          v62 = a1 + 184;
                          v61 = a1 + 72;
                          v60 = a1 + 176;
                          v59 = a1 + 80;
                          v58 = v93;
                          sub_1419393E0(&off_1419F18C0);
                        case 2LL:
                          v65 = a1 + 56;
                          v64 = a1 + 192;
                          v63 = a1 + 64;
                          v62 = a1 + 184;
                          v61 = a1 + 72;
                          v60 = a1 + 176;
                          v59 = a1 + 80;
                          v58 = v93;
                          sub_141939400(&off_1419F18C0);
                        case 3LL:
                          switch ( *(_BYTE *)(a1 + 112) )
                          {
                            case 0:
                            case 3:
                              goto LABEL_10;
                            case 1:
                              v89 = a1 + 56;
                              v88 = (_BYTE *)(a1 + 192);
                              v87 = (_QWORD **)(a1 + 64);
                              v86 = (_BYTE *)(a1 + 184);
                              v85 = (__int64 *)(a1 + 72);
                              v84 = (_BYTE *)(a1 + 176);
                              v83 = (__int64 *)(a1 + 80);
                              v82 = (_BYTE *)(a1 + 104);
                              v81 = v93;
                              sub_1419393E0(&off_1419F1AE0);
                            case 2:
                              v89 = a1 + 56;
                              v88 = (_BYTE *)(a1 + 192);
                              v87 = (_QWORD **)(a1 + 64);
                              v86 = (_BYTE *)(a1 + 184);
                              v85 = (__int64 *)(a1 + 72);
                              v84 = (_BYTE *)(a1 + 176);
                              v83 = (__int64 *)(a1 + 80);
                              v82 = (_BYTE *)(a1 + 104);
                              v81 = v93;
                              sub_141939400(&off_1419F1AE0);
                          }
                          goto LABEL_10;
                        case 4LL:
                          v80 = (_BYTE *)(a1 + 104);
                          v79 = (_BYTE *)(a1 + 176);
                          v77 = (__int64 *)(a1 + 80);
                          v91 = (_BYTE *)(a1 + 184);
                          v76 = (__int64 *)(a1 + 72);
                          v95 = (_BYTE *)(a1 + 192);
                          v90 = (_QWORD **)(a1 + 64);
                          v94 = a1 + 56;
                          goto LABEL_11;
                      }
                  }
                  goto LABEL_8;
              }
          }
          goto LABEL_6;
        case 4:
          v94 = a1 + 56;
          goto LABEL_50;
      }
  }
}
