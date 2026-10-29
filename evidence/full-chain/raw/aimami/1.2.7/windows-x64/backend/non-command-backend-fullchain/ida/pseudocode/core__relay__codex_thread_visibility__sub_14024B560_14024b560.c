// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024b560 | name sub_14024B560
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14024B560(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int128 a6,
        char a7)
{
  __m128i v7; // xmm6
  unsigned __int64 v8; // r13
  _QWORD *v9; // rdi
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r15
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rax
  __int128 v30; // kr00_16
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rsi
  __int64 v35; // r14
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 result; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  _BYTE v48[80]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v49; // [rsp+80h] [rbp+0h]
  __int128 v50; // [rsp+98h] [rbp+18h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+28h]
  _QWORD *v52; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v53; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v54; // [rsp+C8h] [rbp+48h]
  __int128 v55; // [rsp+D8h] [rbp+58h]
  __int128 v56; // [rsp+E8h] [rbp+68h]
  __int128 v57; // [rsp+F8h] [rbp+78h]
  __int128 v58; // [rsp+108h] [rbp+88h]
  __int128 v59; // [rsp+118h] [rbp+98h]
  __int128 v60; // [rsp+128h] [rbp+A8h]
  __int64 v61; // [rsp+138h] [rbp+B8h]
  __int128 v62; // [rsp+140h] [rbp+C0h]
  __int128 v63; // [rsp+150h] [rbp+D0h]
  __int128 v64; // [rsp+160h] [rbp+E0h]
  __int128 v65; // [rsp+170h] [rbp+F0h]
  __int128 v66; // [rsp+180h] [rbp+100h]
  __int128 v67; // [rsp+190h] [rbp+110h]
  __int128 v68; // [rsp+1A0h] [rbp+120h]
  __int128 v69; // [rsp+1B0h] [rbp+130h]
  __int128 v70; // [rsp+1C0h] [rbp+140h]
  __int128 v71; // [rsp+1D0h] [rbp+150h]
  __int64 v72; // [rsp+1E0h] [rbp+160h]
  __int64 v73; // [rsp+1F0h] [rbp+170h]
  unsigned __int64 v74; // [rsp+1F8h] [rbp+178h]
  __int64 v75; // [rsp+200h] [rbp+180h]
  __int128 *v76; // [rsp+208h] [rbp+188h]
  __int64 v77; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v78[96]; // [rsp+218h] [rbp+198h] BYREF
  __int128 v79; // [rsp+278h] [rbp+1F8h]
  __int128 v80; // [rsp+288h] [rbp+208h]
  __int64 v81; // [rsp+298h] [rbp+218h]
  unsigned __int64 v82; // [rsp+2A0h] [rbp+220h]
  unsigned __int64 v83; // [rsp+2A8h] [rbp+228h]
  __int64 v84; // [rsp+2B0h] [rbp+230h]
  __int64 v85; // [rsp+2B8h] [rbp+238h]
  __int128 v86; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v87; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v88; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v89; // [rsp+2F0h] [rbp+270h]
  __int128 v90; // [rsp+300h] [rbp+280h]
  __int64 v91; // [rsp+310h] [rbp+290h]
  unsigned int v92; // [rsp+320h] [rbp+2A0h]
  unsigned int v93; // [rsp+324h] [rbp+2A4h]
  __int64 v94; // [rsp+328h] [rbp+2A8h]
  __int64 v95; // [rsp+330h] [rbp+2B0h]
  __int64 v96; // [rsp+338h] [rbp+2B8h]
  __int64 v97; // [rsp+340h] [rbp+2C0h]
  __int64 v98; // [rsp+348h] [rbp+2C8h]

  v98 = -2;
  v76 = a2;
  v94 = a1;
  v86 = a6;
  if ( a5 < a3 )
    a3 = a5;
  v75 = a4 + 416;
  v74 = a3;
  v73 = -(__int64)a3;
  v8 = 0;
  v83 = a5;
  v82 = a5;
  while ( 2 )
  {
    if ( v8 >= v74 )
    {
LABEL_109:
      result = v94;
      *(_QWORD *)v94 = -1;
      return result;
    }
    v9 = (_QWORD *)(v75 + 424 * v8);
    v10 = (_QWORD *)v76 + 13 * v8++;
    while ( 1 )
    {
      v12 = *(v9 - 8);
      if ( v12 == -2 || v12 != -1 && !(unsigned __int8)sub_140237AF0(*(v9 - 7), *(v9 - 6)) )
        goto LABEL_6;
      v13 = *(v9 - 5);
      if ( v13 != -1 && !(unsigned __int8)sub_140237AF0(*(v9 - 4), *(v9 - 3)) )
        goto LABEL_6;
      v14 = *(v9 - 2);
      if ( v14 != -1 && !(unsigned __int8)sub_140237AF0(*(v9 - 1), *v9) )
        goto LABEL_6;
      if ( v10[6] == -1 )
      {
        v52 = v10;
        *(_QWORD *)&v53 = sub_1400015F0;
        *((_QWORD *)&v53 + 1) = &v86;
        *(_QWORD *)&v54 = sub_140186EE0;
        sub_1416ABFD0(v78, &unk_1419D7691, &v52);
        result = *(_QWORD *)v78;
        v43 = v94;
        *(_OWORD *)(v94 + 80) = *(_OWORD *)&v78[72];
        *(_OWORD *)(v43 + 64) = *(_OWORD *)&v78[56];
        *(_OWORD *)(v43 + 48) = *(_OWORD *)&v78[40];
        *(_OWORD *)(v43 + 32) = *(_OWORD *)&v78[24];
        *(_OWORD *)(v43 + 16) = *(_OWORD *)&v78[8];
        *(_QWORD *)v43 = 10;
        *(_QWORD *)(v43 + 8) = result;
        return result;
      }
      if ( *(v9 - 49) != -1 )
        goto LABEL_38;
      v15 = *((_QWORD *)&v86 + 1);
      v16 = v12 == -1;
      v17 = v86;
      if ( !v16 && (*(v9 - 6) != *((_QWORD *)&v86 + 1) || (unsigned int)sub_1418F4B70(*(v9 - 7), v86)) )
        goto LABEL_38;
      if ( v13 != -1 && (*(v9 - 3) != v15 || (unsigned int)sub_1418F4B70(*(v9 - 4), v17))
        || v14 != -1 && (*v9 != v15 || (unsigned int)sub_1418F4B70(*(v9 - 1), v17))
        || *(v9 - 27) == -1 )
      {
        goto LABEL_38;
      }
      sub_140282430(&v77);
      if ( *(_QWORD *)&v78[24] == -1 )
        break;
      if ( *(_DWORD *)&v78[24] == 2 )
        goto LABEL_38;
      v18 = v77;
      if ( v77 == -1 )
        goto LABEL_38;
      v19 = *(_QWORD *)v78;
      if ( *(v9 - 23) != *(_QWORD *)&v78[80] )
        goto LABEL_36;
      v97 = v77;
      v20 = *(_QWORD *)&v78[56];
      v21 = *(_QWORD *)&v78[72];
      v22 = *(v9 - 26);
      v23 = *(v9 - 25);
      v95 = *(_QWORD *)v78;
      v24 = sub_1402899E0(v22, v23, *(_QWORD *)v78, *(_QWORD *)&v78[8]);
      v18 = v97;
      v19 = v95;
      if ( !v24 || *(v9 - 22) != v21 || *((_DWORD *)v9 - 42) != 1 || *(_QWORD *)((char *)v9 - 164) != v20 )
      {
LABEL_36:
        if ( v18 )
          sub_140001660(v19, v18, 1);
        goto LABEL_38;
      }
      if ( v97 )
        sub_140001660(v95, v97, 1);
LABEL_6:
      v9 += 53;
      v10 += 13;
      v11 = v8 + v73 + 1;
      ++v8;
      if ( v11 == 1 )
        goto LABEL_109;
    }
    if ( (unsigned int)(v77 & 3) - 2 >= 2 && (v77 & 3) != 0 )
    {
      *(_QWORD *)&v53 = v77 - 1;
      LOBYTE(v52) = 3;
      sub_1416BCB00(&v53);
    }
LABEL_38:
    v25 = *(v9 - 27);
    if ( v25 != -1 && v25 )
      sub_140001660(*(v9 - 26), v25, 1);
    *(v9 - 27) = -1;
    v26 = v10[7];
    v27 = v10[8];
    v97 = -1;
    if ( a7 )
    {
      sub_140282430(&v77);
      if ( *(_QWORD *)&v78[24] == -1 )
      {
        if ( (unsigned int)(v77 & 3) - 2 >= 2 && (v77 & 3) != 0 )
        {
          *(_QWORD *)&v53 = v77 - 1;
          LOBYTE(v52) = 3;
          sub_1416BCB00(&v53);
        }
      }
      else if ( *(_DWORD *)&v78[24] != 2 )
      {
        v97 = v77;
        v96 = *(_QWORD *)v78;
        v7 = _mm_loadu_si128((const __m128i *)&v78[8]);
        v93 = *(_DWORD *)&v78[56];
        v83 = *(unsigned int *)&v78[60];
        v92 = *(_DWORD *)&v78[72];
        v82 = *(unsigned int *)&v78[76];
        v84 = *(_QWORD *)&v78[80];
      }
    }
    sub_14023B160((unsigned int)&v77, v26, v27, v10[1], v10[2]);
    v28 = v77;
    v62 = *(_OWORD *)v78;
    v63 = *(_OWORD *)&v78[16];
    v64 = *(_OWORD *)&v78[32];
    v65 = *(_OWORD *)&v78[48];
    v66 = *(_OWORD *)&v78[64];
    v67 = *(_OWORD *)&v78[80];
    if ( v77 == -1 )
    {
      *(_OWORD *)v48 = v62;
      *(_OWORD *)&v48[16] = v63;
      *(_OWORD *)&v48[32] = v64;
      *(_OWORD *)&v48[48] = v65;
      *(_OWORD *)&v48[64] = v66;
      v49 = v67;
    }
    else
    {
      v61 = v81;
      v60 = v80;
      v59 = v79;
      v58 = v67;
      v57 = v66;
      v56 = v65;
      v55 = v64;
      v54 = v63;
      v53 = v62;
      v52 = (_QWORD *)v77;
      sub_140232D30(v48, &v52, v26, v27);
      if ( v28 )
        sub_140001660(v53, v28, 1);
      if ( *((_QWORD *)&v55 + 1) )
        sub_140001660(v56, *((_QWORD *)&v55 + 1), 1);
      if ( *((_QWORD *)&v58 + 1) != -1 && *((_QWORD *)&v58 + 1) )
        sub_140001660(v59, *((_QWORD *)&v58 + 1), 1);
    }
    v29 = *(_QWORD *)v48;
    v68 = *(_OWORD *)&v48[8];
    v69 = *(_OWORD *)&v48[24];
    v70 = *(_OWORD *)&v48[40];
    v71 = *(_OWORD *)&v48[56];
    v72 = *(_QWORD *)&v48[72];
    if ( *(_QWORD *)v48 == -1 )
    {
      v87 = v68;
      v88 = v69;
      v89 = v70;
      v90 = v71;
      v91 = v72;
      v30 = v86;
      if ( ((_QWORD)v68 == -1
         || (_QWORD)v88 == *((_QWORD *)&v86 + 1) && !(unsigned int)sub_1418F4B70(*((_QWORD *)&v87 + 1), v86))
        && (*((_QWORD *)&v88 + 1) == -1
         || *((_QWORD *)&v89 + 1) == *((_QWORD *)&v30 + 1) && !(unsigned int)sub_1418F4B70(v89, v30))
        && ((_QWORD)v90 == -1 || v91 == *((_QWORD *)&v30 + 1)
                              && !(unsigned int)sub_1418F4B70(*((_QWORD *)&v90 + 1), v30)) )
      {
        v31 = v97;
        if ( v97 != -1 )
        {
          sub_140282430(&v77);
          if ( *(_QWORD *)&v78[24] == -1 )
          {
            if ( (unsigned int)(v77 & 3) - 2 >= 2 && (v77 & 3) != 0 )
            {
              *(_QWORD *)&v53 = v77 - 1;
              LOBYTE(v52) = 3;
              sub_1416BCB00(&v53);
            }
            v31 = v97;
          }
          else
          {
            v31 = v97;
            if ( *(_DWORD *)&v78[24] != 2 )
            {
              v32 = v77;
              if ( v77 != -1 )
              {
                v33 = *(_QWORD *)v78;
                if ( v84 == *(_QWORD *)&v78[80] )
                {
                  v95 = v77;
                  v34 = *(_QWORD *)&v78[56];
                  v35 = *(_QWORD *)&v78[72];
                  v85 = *(_QWORD *)v78;
                  v36 = sub_1402899E0(v96, v7.m128i_i64[0], *(_QWORD *)v78, *(_QWORD *)&v78[8]);
                  v31 = v97;
                  v32 = v95;
                  v33 = v85;
                  if ( v36 )
                  {
                    if ( ((v82 << 32) | v92) == v35 && ((v83 << 32) | v93) == v34 )
                    {
                      if ( v95 )
                        sub_140001660(v85, v95, 1);
                      v37 = *(v9 - 27);
                      v38 = v96;
                      if ( v37 != -1 && v37 )
                        sub_140001660(*(v9 - 26), v37, 1);
                      *(v9 - 27) = v31;
                      *(v9 - 26) = v38;
                      *(__m128i *)(v9 - 25) = v7;
                      *(v9 - 23) = v84;
                      *(v9 - 22) = v35;
                      *((_DWORD *)v9 - 42) = 1;
                      *(_QWORD *)((char *)v9 - 164) = v34;
                      if ( (_QWORD)v87 != -1 && (_QWORD)v87 )
                        sub_140001660(*((_QWORD *)&v87 + 1), v87, 1);
                      if ( *((_QWORD *)&v88 + 1) != -1 && *((_QWORD *)&v88 + 1) )
                        sub_140001660(v89, *((_QWORD *)&v88 + 1), 1);
                      if ( (_QWORD)v90 != -1 && (_QWORD)v90 )
                        sub_140001660(*((_QWORD *)&v90 + 1), v90, 1);
                      continue;
                    }
                  }
                }
                if ( v32 )
                  sub_140001660(v33, v32, 1);
              }
            }
          }
        }
        if ( (_QWORD)v87 != -1 && (_QWORD)v87 )
          sub_140001660(*((_QWORD *)&v87 + 1), v87, 1);
        if ( *((_QWORD *)&v88 + 1) != -1 && *((_QWORD *)&v88 + 1) )
          sub_140001660(v89, *((_QWORD *)&v88 + 1), 1);
        if ( (_QWORD)v90 != -1 && (_QWORD)v90 )
          sub_140001660(*((_QWORD *)&v90 + 1), v90, 1);
        if ( (unsigned __int64)(v31 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v96, v31, 1);
        continue;
      }
      v77 = (__int64)v10;
      *(_QWORD *)v78 = sub_1400015F0;
      *(_QWORD *)&v78[8] = &v87;
      *(_QWORD *)&v78[16] = sub_140289980;
      *(_QWORD *)&v78[24] = (char *)&v88 + 8;
      *(_QWORD *)&v78[32] = sub_140289980;
      *(_QWORD *)&v78[40] = &v86;
      *(_QWORD *)&v78[48] = sub_140186EE0;
      sub_1416ABFD0(&v50, &unk_1419DF6B7, &v77);
      v40 = v94;
      *(_QWORD *)(v94 + 24) = v51;
      *(_OWORD *)(v40 + 8) = v50;
      *(_QWORD *)v40 = 10;
      if ( (_QWORD)v87 != -1 && (_QWORD)v87 )
        sub_140001660(*((_QWORD *)&v87 + 1), v87, 1);
      v41 = v96;
      v42 = v97;
      if ( *((_QWORD *)&v88 + 1) != -1 && *((_QWORD *)&v88 + 1) )
        sub_140001660(v89, *((_QWORD *)&v88 + 1), 1);
      if ( (_QWORD)v90 != -1 && (_QWORD)v90 )
        sub_140001660(*((_QWORD *)&v90 + 1), v90, 1);
      result = v42 - 1;
      if ( (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        return sub_140001660(v41, v42, 1);
    }
    else
    {
      v44 = v94;
      *(_OWORD *)(v94 + 80) = v49;
      *(_QWORD *)(v44 + 72) = v72;
      v45 = v68;
      v46 = v69;
      v47 = v70;
      *(_OWORD *)(v44 + 56) = v71;
      *(_OWORD *)(v44 + 40) = v47;
      *(_OWORD *)(v44 + 24) = v46;
      *(_OWORD *)(v44 + 8) = v45;
      *(_QWORD *)v44 = v29;
      v41 = v96;
      v42 = v97;
      result = v97 - 1;
      if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        return sub_140001660(v41, v42, 1);
    }
    return result;
  }
}
