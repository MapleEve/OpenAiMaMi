// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | ea 0x140d36390 | name sub_140D36390
// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D36390(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  _BYTE *v19; // rax
  __int128 *v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  char result; // al
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // r15
  unsigned __int64 v36; // r14
  __int16 v37; // bx
  __int64 v38; // rbx
  unsigned int v39; // edi
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int8 v43; // bl
  const char *v44; // rcx
  const char *v45; // rdi
  __int64 v46; // r14
  __int64 v47; // r15
  const __m128i *v48; // r14
  __m128i *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rbx
  const char *v52; // r14
  __int64 v53; // rdi
  const char **v54; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+28h] [rbp-58h]
  const char **v56; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall *v57)(); // [rsp+38h] [rbp-48h]
  const char *v58; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v59; // [rsp+138h] [rbp+B8h]
  __m128i v60; // [rsp+190h] [rbp+110h]
  __m256i v61; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v62; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v63; // [rsp+1C8h] [rbp+148h]
  __int16 v64; // [rsp+1D0h] [rbp+150h]
  __int128 v65; // [rsp+1D2h] [rbp+152h]
  __int128 v66; // [rsp+1E2h] [rbp+162h]
  __int128 v67; // [rsp+1F2h] [rbp+172h]
  __int128 v68; // [rsp+202h] [rbp+182h]
  _OWORD v69[10]; // [rsp+212h] [rbp+192h]
  __m128i v70[2]; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v71; // [rsp+2D8h] [rbp+258h]
  unsigned __int64 v72; // [rsp+2E0h] [rbp+260h]
  __int16 v73; // [rsp+2E8h] [rbp+268h]
  int v74; // [rsp+2EAh] [rbp+26Ah]
  __int16 v75; // [rsp+2EEh] [rbp+26Eh]
  __int128 v76; // [rsp+2F0h] [rbp+270h]
  __int128 v77; // [rsp+300h] [rbp+280h]
  __int128 v78; // [rsp+310h] [rbp+290h]
  __int128 v79; // [rsp+320h] [rbp+2A0h]
  __int128 v80; // [rsp+330h] [rbp+2B0h]
  _BYTE v81[86]; // [rsp+340h] [rbp+2C0h]
  __int64 v82; // [rsp+398h] [rbp+318h] BYREF
  __int128 v83; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v84; // [rsp+3B8h] [rbp+338h] BYREF
  _BYTE v85[24]; // [rsp+3C0h] [rbp+340h]
  const char *v86; // [rsp+3D8h] [rbp+358h]
  __int64 v87; // [rsp+3E0h] [rbp+360h]
  __int16 v88; // [rsp+3E8h] [rbp+368h]
  int v89; // [rsp+3EAh] [rbp+36Ah]
  __int16 v90; // [rsp+3EEh] [rbp+36Eh]
  __int64 v91; // [rsp+440h] [rbp+3C0h]
  __int64 v92; // [rsp+448h] [rbp+3C8h]
  char v93; // [rsp+457h] [rbp+3D7h]
  __int64 v94; // [rsp+458h] [rbp+3D8h]

  v94 = -2;
  v5 = *(unsigned __int8 *)(a2 + 97);
  v92 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = *(_QWORD *)(a2 + 88);
      *(_QWORD *)(a2 + 80) = v6;
      *(_BYTE *)(a2 + 96) = 1;
      v7 = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)a2 = v7;
      if ( !*(_QWORD *)(v6 + 160) )
      {
        nullsub_1(v6);
        v16 = (void *)sub_140001650(43, 1);
        if ( !v16 )
          sub_141938D2B(1, 43);
        qmemcpy(v16, "Anthropic server continuation limit reached", 43);
        *(_QWORD *)v85 = 43;
        *(_QWORD *)&v85[8] = v16;
        *(_QWORD *)&v85[16] = 43;
        goto LABEL_52;
      }
      if ( !(unsigned __int8)sub_140DBA7A0(v6 + 120) )
      {
        nullsub_1(v8);
        v17 = (void *)sub_140001650(55, 1);
        if ( !v17 )
          sub_141938D2B(1, 55);
        qmemcpy(v17, "Anthropic paused without a supported server search tool", 55);
        *(_QWORD *)v85 = 55;
        *(_QWORD *)&v85[8] = v17;
        *(_QWORD *)&v85[16] = 55;
        goto LABEL_52;
      }
      v9 = (_QWORD *)sub_1416419F0(aContent_8, 7, v92);
      if ( !v9 )
        v9 = off_1421E7108;
      if ( *(_BYTE *)v9 != 4 )
      {
        nullsub_1(v10);
        v18 = (void *)sub_140001650(32, 1);
        if ( !v18 )
          sub_141938D2B(1, 32);
        qmemcpy(v18, "Invalid Anthropic paused content", 32);
        *(_QWORD *)v85 = 32;
        *(_QWORD *)&v85[8] = v18;
        *(_QWORD *)&v85[16] = 32;
LABEL_52:
        v86 = aStreamTruncate;
        v87 = 16;
        v88 = 502;
LABEL_53:
        v84 = -1;
LABEL_54:
        if ( !*(_BYTE *)(v92 + 96) )
          goto LABEL_56;
        goto LABEL_55;
      }
      v11 = sub_140280CD0(v9[2], v9[3]);
      if ( v11 )
      {
        v14 = v12;
        if ( v12 < 0 )
        {
          v15 = 0;
          goto LABEL_10;
        }
        if ( v12 )
        {
          v48 = (const __m128i *)v11;
          nullsub_1(v13);
          v15 = 1;
          v49 = (__m128i *)sub_140001650(v14, 1);
          if ( !v49 )
LABEL_10:
            sub_141938D2B(v15, v14);
          v50 = (__int64)v49;
          sub_1418F44E0(v49, v48, v14);
        }
        else
        {
          v50 = 1;
        }
        *(_QWORD *)v85 = v14;
        *(_QWORD *)&v85[8] = v50;
        *(_QWORD *)&v85[16] = v14;
        goto LABEL_52;
      }
      v19 = (_BYTE *)sub_141641AF0("messagesInvalid Anthropic message history", 8, *(_QWORD *)(v92 + 80) + 120LL);
      if ( *v19 != 4 )
      {
        sub_140DDD4B0(&v84);
        goto LABEL_54;
      }
      v20 = (__int128 *)v92;
      *(_BYTE *)(v92 + 96) = 0;
      v21 = *v20;
      *(_OWORD *)&v61.m256i_u64[2] = v20[1];
      *(_OWORD *)v61.m256i_i8 = v21;
      sub_140DA38E0(v19 + 8, &v61);
      v22 = v92;
      --*(_QWORD *)(*(_QWORD *)(v92 + 80) + 160LL);
      v23 = *(_QWORD *)(v22 + 80);
      if ( *(_QWORD *)(v23 + 176) )
      {
        v24 = v23 + 176;
        v25 = v23 + 120;
        v26 = v25;
        LOBYTE(v25) = 1;
        sub_1401F9780(v24, v26, v25);
        v23 = *(_QWORD *)(v92 + 80);
      }
      sub_140CAF6E0(&v61, *(_QWORD *)(v23 + 152), v23 + 96);
      v27 = *(_QWORD *)(v92 + 80);
      v93 = 1;
      sub_14047E290(&v58, v27);
      v93 = 0;
      sub_141259870(&v54, &v61, &v58);
      sub_140CB5130(&v61, &v54, *(_QWORD *)(v92 + 80) + 120LL);
      v28 = sub_1412597A0(&v61);
      v29 = v92;
      *(_QWORD *)(v92 + 64) = v28;
      *(_QWORD *)(v29 + 72) = v30;
      a2 = v29;
LABEL_21:
      sub_14126C5E0(&v61, a2 + 64, a3);
      v31 = v61.m256i_i64[0];
      if ( v61.m256i_i64[0] == -2 )
      {
        a1->m128i_i64[0] = -2;
        result = 3;
        v33 = v92;
        goto LABEL_57;
      }
      v34 = v61.m256i_i64[1];
      v60 = *(__m128i *)&v61.m256i_u64[2];
      v35 = v62;
      v36 = v63;
      v37 = v64;
      *(_OWORD *)v81 = v65;
      *(_OWORD *)&v81[16] = v66;
      *(_OWORD *)&v81[32] = v67;
      *(_OWORD *)&v81[48] = v68;
      *(_OWORD *)&v81[64] = v69[0];
      *(_QWORD *)&v81[78] = *(_QWORD *)((char *)v69 + 14);
      sub_140D1A820(*(_QWORD *)(v92 + 64), *(_QWORD *)(v92 + 72));
      if ( (_DWORD)v31 == -1 )
      {
        v91 = v34;
        v82 = v34;
        v43 = sub_14122E5A0(&v82);
        v44 = (const char *)&unk_141A4D452;
        if ( v43 )
          v44 = (const char *)&unk_141A4D46B;
        v58 = v44;
        v59 = 9LL * (v43 ^ 1u) + 16;
        v54 = &v58;
        v55 = sub_140186EE0;
        sub_1416ABFD0(&v61, &unk_141A4D47B, &v54);
        v45 = v58;
        v46 = v59;
        v47 = v61.m256i_i64[0];
        v83 = *(_OWORD *)&v61.m256i_u64[1];
        sub_140D19140(v91);
        *(_OWORD *)&v85[8] = v83;
        *(_QWORD *)v85 = v47;
        v86 = v45;
        v87 = v46;
        v88 = 2 * v43 + 502;
        goto LABEL_53;
      }
      v80 = *(_OWORD *)&v81[70];
      v79 = *(_OWORD *)&v81[54];
      v78 = *(_OWORD *)&v81[38];
      v77 = *(_OWORD *)&v81[22];
      v76 = *(_OWORD *)&v81[6];
      v70[1] = v60;
      v74 = *(_DWORD *)v81;
      v75 = *(_WORD *)&v81[4];
      v70[0].m128i_i64[0] = v31;
      v70[0].m128i_i64[1] = v34;
      v71 = v35;
      v72 = v36;
      v73 = v37;
      v38 = *(_QWORD *)(v92 + 80);
      v39 = *(unsigned __int16 *)&v81[54];
      if ( *(_QWORD *)(v38 + 176) )
      {
        sub_140D29110(&v61, aContentType, 12, v70);
        if ( v61.m256i_i8[0] )
        {
          if ( v61.m256i_i64[2] >= v36 )
            sub_1419390C3(v61.m256i_i64[2], v36, &off_141A426F8);
          v41 = *(_QWORD *)(v35 + 104 * v61.m256i_i64[2] + 32);
          v40 = *(_QWORD *)(v35 + 104 * v61.m256i_i64[2] + 40);
          if ( v40 )
          {
            v42 = 0;
            while ( (unsigned __int8)(*(_BYTE *)(v41 + v42) - 32) < 0x5Fu || *(_BYTE *)(v41 + v42) == 9 )
            {
              if ( v40 == ++v42 )
                goto LABEL_41;
            }
            v41 = 0;
          }
          else
          {
            v40 = 0;
          }
        }
        else
        {
          v41 = 0;
        }
LABEL_41:
        sub_1401F9C20(v38 + 176, v39, v41, v40);
      }
      if ( (unsigned __int16)(v39 - 200) <= 0x63u )
      {
        sub_1418F44E0((__m128i *)&v84, v70, 0x88u);
        goto LABEL_56;
      }
      v51 = 19;
      v52 = (const char *)&unk_141A4D3FD;
      switch ( (__int16)v39 )
      {
        case 400:
        case 422:
          v51 = 21;
          v52 = (const char *)&unk_141A4D384;
          break;
        case 401:
          v51 = 20;
          v52 = (const char *)&unk_141A4D399;
          break;
        case 402:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
        case 410:
        case 411:
        case 412:
        case 414:
        case 415:
        case 416:
        case 417:
        case 418:
        case 419:
        case 420:
        case 421:
        case 423:
        case 424:
        case 425:
        case 426:
        case 427:
        case 428:
          break;
        case 403:
          v51 = 16;
          v52 = (const char *)&unk_141A4D3AD;
          break;
        case 404:
          v51 = 15;
          v52 = (const char *)&unk_141A4D3BD;
          break;
        case 413:
          v51 = 17;
          v52 = (const char *)&unk_141A4D3CC;
          break;
        case 429:
          v51 = 16;
          v52 = (const char *)&unk_141A4D3DD;
          break;
        default:
          if ( (unsigned __int16)v39 == 503 || (unsigned __int16)v39 == 529 )
          {
            v51 = 16;
            v52 = (const char *)&unk_141A4D3ED;
          }
          break;
      }
      v58 = v52;
      v59 = v51;
      LOWORD(v83) = v39;
      v54 = (const char **)&v83;
      v55 = sub_1416BB1E0;
      v56 = &v58;
      v57 = sub_140186EE0;
      sub_1416ABFD0(&v61, &unk_141A4D410, &v54);
      LOWORD(v63) = v39;
      v61.m256i_i64[3] = (__int64)v52;
      v62 = v51;
      *(_OWORD *)v85 = *(_OWORD *)v61.m256i_i8;
      *(_QWORD *)&v85[16] = v61.m256i_i64[2];
      v86 = v52;
      v87 = v51;
      v88 = v39;
      v89 = *(_DWORD *)((char *)&v63 + 2);
      v90 = HIWORD(v63);
      v84 = -1;
      sub_140402120(v70);
      v53 = *((_QWORD *)&v80 + 1);
      if ( **((_QWORD **)&v80 + 1) )
        sub_140001660(*(_QWORD *)(*((_QWORD *)&v80 + 1) + 8LL), **((_QWORD **)&v80 + 1), 1);
      sub_140001660(v53, 88, 8);
      if ( *(_BYTE *)(v92 + 96) )
LABEL_55:
        sub_140409B40(v92);
LABEL_56:
      v33 = v92;
      *(_BYTE *)(v92 + 96) = 0;
      sub_1418F44E0(a1, (const __m128i *)&v84, 0x88u);
      result = 1;
LABEL_57:
      *(_BYTE *)(v33 + 97) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A47968);
    case 2LL:
      sub_141939400(&off_141A47968);
    case 3LL:
      goto LABEL_21;
  }
}
