// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x140a534e0
// name: resolve_native_default_model
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::resolve_native_default_model | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall resolve_native_default_model(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r15
  char v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // r9
  _QWORD *v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r13
  _QWORD *v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r12
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  __int64 v28; // rbx
  int v29; // eax
  char v30; // cl
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rax
  _DWORD *v49; // rax
  _QWORD *v50; // r12
  __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned __int64 v53; // r13
  __int64 v54; // r12
  __int64 v55; // rax
  _BYTE *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  _DWORD *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v81[24]; // [rsp+30h] [rbp-50h]
  __int64 v82; // [rsp+48h] [rbp-38h]
  _QWORD *v83; // [rsp+50h] [rbp-30h]
  unsigned __int64 v84; // [rsp+58h] [rbp-28h]
  __int64 v85; // [rsp+60h] [rbp-20h]
  __int64 v86; // [rsp+68h] [rbp-18h]
  __int64 v87; // [rsp+70h] [rbp-10h]
  _QWORD *v88; // [rsp+78h] [rbp-8h]
  _QWORD *v89; // [rsp+80h] [rbp+0h]
  __int64 v90; // [rsp+88h] [rbp+8h]
  char v91[144]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v92; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v93; // [rsp+130h] [rbp+B0h]
  __int64 v94; // [rsp+140h] [rbp+C0h]
  _QWORD *v95; // [rsp+148h] [rbp+C8h]
  __int64 v96; // [rsp+150h] [rbp+D0h]
  __int64 v97; // [rsp+158h] [rbp+D8h]
  __int64 v98; // [rsp+160h] [rbp+E0h]
  __int64 v99; // [rsp+168h] [rbp+E8h]
  _QWORD *v100; // [rsp+170h] [rbp+F0h]
  _QWORD *v101; // [rsp+178h] [rbp+F8h]
  __int64 v102; // [rsp+180h] [rbp+100h]
  char v103[144]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v104; // [rsp+218h] [rbp+198h]
  _QWORD *v105; // [rsp+220h] [rbp+1A0h]
  _BYTE v106[15]; // [rsp+228h] [rbp+1A8h]
  __int64 v107; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v108; // [rsp+240h] [rbp+1C0h]
  __int64 v109; // [rsp+248h] [rbp+1C8h]
  _QWORD *v110; // [rsp+250h] [rbp+1D0h]
  __int64 v111; // [rsp+258h] [rbp+1D8h]
  _QWORD v112[2]; // [rsp+260h] [rbp+1E0h]
  _QWORD v113[2]; // [rsp+270h] [rbp+1F0h]
  __int64 v114; // [rsp+280h] [rbp+200h]
  __int64 v115; // [rsp+288h] [rbp+208h]
  _QWORD *v116; // [rsp+290h] [rbp+210h]
  __int128 v117; // [rsp+298h] [rbp+218h]
  __int64 v118; // [rsp+2A8h] [rbp+228h]
  __int64 v119; // [rsp+2B0h] [rbp+230h]

  v119 = -2;
  load_official_models(&v107, a2[1], a2[2]);
  sub_14148D130(&v92, a2[9], a2[10]);
  v110 = a1;
  if ( (_QWORD)v92 == -1 )
  {
    sub_140018650((char *)&v92 + 8);
LABEL_38:
    v32 = -1;
    goto LABEL_56;
  }
  v117 = v92;
  sub_140FBF870(&v80);
  v4 = v80;
  v5 = *(_QWORD *)v81;
  v6 = v81[8];
  v113[0] = *(_QWORD *)&v81[9];
  *(_QWORD *)((char *)v113 + 7) = *(_QWORD *)&v81[16];
  v7 = v82;
  a1 = v83;
  v8 = v85;
  v9 = v86;
  v10 = v87;
  v11 = v88;
  v12 = v89;
  if ( v80 == 2 )
  {
    v118 = v86;
    v112[0] = v113[0];
    *(_QWORD *)((char *)v112 + 7) = *(_QWORD *)((char *)v113 + 7);
    v13 = *(_QWORD *)((char *)v113 + 7);
    v113[0] = v112[0];
    *(_QWORD *)((char *)v113 + 7) = v13;
    v14 = v117;
    if ( *(_QWORD *)v81 == 2 )
      goto LABEL_4;
  }
  else
  {
    v118 = v82;
    v111 = v84;
    v114 = v90;
    v104 = v85;
    v15 = v88;
    v105 = v89;
    sub_141684120(v103, v91, 144);
    v112[0] = v113[0];
    *(_QWORD *)((char *)v112 + 7) = *(_QWORD *)((char *)v113 + 7);
    *(_QWORD *)&v92 = v4;
    *((_QWORD *)&v92 + 1) = v5;
    LOBYTE(v93) = v6;
    *(_QWORD *)((char *)&v93 + 1) = v112[0];
    *((_QWORD *)&v93 + 1) = *(_QWORD *)((char *)v113 + 7);
    v94 = v118;
    v95 = a1;
    v96 = v111;
    v97 = v104;
    v98 = v9;
    v99 = v10;
    v100 = v15;
    v101 = v105;
    v102 = v114;
    sub_140694000(&v80, &v92);
    v5 = v80;
    v6 = v81[0];
    v113[0] = *(_QWORD *)&v81[1];
    *(_QWORD *)((char *)v113 + 7) = *(_QWORD *)&v81[8];
    if ( v80 != 2 )
    {
      v8 = v84;
      v118 = v85;
      v10 = v86;
      v11 = (_QWORD *)v87;
      v12 = v88;
    }
    v14 = v117;
    v7 = *(_QWORD *)&v81[16];
    a1 = (_QWORD *)v82;
    if ( v80 == 2 )
    {
LABEL_4:
      v13 = *(_QWORD *)((char *)v113 + 7);
      *(_QWORD *)&v106[7] = *(_QWORD *)((char *)v113 + 7);
      *(_QWORD *)v106 = v113[0];
      if ( !v14 )
        goto LABEL_23;
LABEL_22:
      sub_140001660(*((_QWORD *)&v117 + 1), v14, 1);
      goto LABEL_23;
    }
  }
  v5 = v8;
  if ( v7 )
  {
    v16 = a1;
    v17 = v11;
    a1 = v12;
    sub_140001660(v16, v7, 1);
    v12 = a1;
    v11 = v17;
  }
  if ( (unsigned __int64)v11 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v12, v11, 1);
  v7 = v118;
  if ( v10 )
  {
    v18 = (_QWORD *)(v118 + 8);
    do
    {
      v19 = *(v18 - 1);
      if ( v19 )
        sub_140001660(*v18, v19, 1);
      v18 += 3;
      --v10;
    }
    while ( v10 );
  }
  v6 = -1;
  if ( v5 )
  {
    v5 *= 8LL;
    sub_140001660(v7, 3 * v5, 8);
  }
  if ( v14 )
    goto LABEL_22;
LABEL_23:
  if ( v6 == -1 )
    goto LABEL_38;
  *((_QWORD *)&v92 + 1) = *(_QWORD *)&v106[7];
  *(_QWORD *)((char *)&v92 + 1) = *(_QWORD *)v106;
  v118 = v7;
  *(_QWORD *)&v93 = v7;
  *((_QWORD *)&v93 + 1) = a1;
  LOBYTE(v92) = v6;
  v20 = -1;
  if ( v6 == 6 )
  {
    v21 = *((_QWORD *)&v92 + 1);
    if ( *((_QWORD *)&v92 + 1) )
    {
      while ( 2 )
      {
        v22 = (_QWORD *)(v21 + 360);
        v23 = *(unsigned __int16 *)(v21 + 626);
        *(_QWORD *)&v117 = v21;
        v5 = v21 - 8;
        *((_QWORD *)&v117 + 1) = v23;
        v24 = 3LL * (unsigned int)(8 * v23);
        v25 = -1;
        do
        {
          if ( !v24 )
          {
            v25 = *((_QWORD *)&v117 + 1);
            goto LABEL_36;
          }
          a1 = v22 + 3;
          v26 = v22[2];
          v27 = v26 - 5;
          if ( v26 >= 5 )
            v26 = 5;
          v28 = -(__int64)v27;
          v29 = sub_1416847B0(aModel_6, v22[1], v26);
          if ( v29 )
            v28 = v29;
          v30 = (v28 > 0) - (v28 < 0);
          v5 += 32LL;
          ++v25;
          v24 -= 24;
          v22 = a1;
        }
        while ( v30 == 1 );
        if ( !v30 )
        {
          v20 = -1;
          if ( !*(_BYTE *)(v5 - 24) )
          {
            v67 = sub_14033BC10(*(_QWORD *)(v5 - 8), *(_QWORD *)v5);
            if ( v67 )
            {
              v5 = v68;
              if ( v68 )
              {
                if ( v68 < 0 )
                {
                  v70 = 0;
                  goto LABEL_120;
                }
                v78 = v67;
                nullsub_1(v69);
                v70 = 1;
                v79 = sub_140001650(v5, 1);
                if ( !v79 )
LABEL_120:
                  sub_1416C2D4B(v70, v5);
                a1 = (_QWORD *)v79;
                sub_141684120(v79, v78, v5);
                v20 = v5;
              }
            }
          }
          goto LABEL_40;
        }
LABEL_36:
        if ( v118-- != 0 )
        {
          v21 = *(_QWORD *)(v117 + 8 * v25 + 632);
          continue;
        }
        break;
      }
      v20 = -1;
    }
  }
LABEL_40:
  sub_14034CAE0(&v92);
  v32 = -1;
  if ( v20 != -1 )
  {
    if ( v5 < 0xD || (v13 = *a1 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)a1 + 5) ^ 0x5F79616C65725F69LL) != 0 )
    {
      v33 = v108;
      v34 = v109;
      if ( v109 )
      {
        v35 = v108 + 32 * v109;
        *((_QWORD *)&v117 + 1) = v108;
        while ( 1 )
        {
          v116 = a1;
          v115 = v20;
          v36 = sub_141433D50(aSlug, 4, v33);
          if ( v36 )
          {
            if ( *(_BYTE *)v36 == 3
              && *(_QWORD *)(v36 + 24) == v5
              && !(unsigned int)sub_1416847B0(*(_QWORD *)(v36 + 16), a1, v5) )
            {
              goto LABEL_123;
            }
          }
          v33 += 32;
          if ( v33 == v35 )
            goto LABEL_53;
        }
      }
      if ( v5 >= 4 )
      {
        *((_QWORD *)&v117 + 1) = v108;
        if ( *(_DWORD *)a1 == 762605671 )
        {
LABEL_123:
          nullsub_1(v13);
          v73 = sub_140001650(v5, 1);
          if ( !v73 )
          {
            v116 = a1;
            v115 = v20;
            sub_1416C2D4B(1, v5);
          }
          v74 = v73;
          *(_QWORD *)&v117 = v34;
          sub_141684120(v73, a1, v5);
          v50 = v110;
          *v110 = v5;
          v50[1] = v74;
          v50[2] = v5;
          if ( v20 )
            sub_140001660(a1, v20, 1);
          v118 = 0;
          v75 = *((_QWORD *)&v117 + 1);
          while ( (_QWORD)v117 != v118 )
          {
            ++v118;
            v76 = v75 + 32;
            sub_1402C3260();
            v75 = v76;
          }
          goto LABEL_129;
        }
      }
LABEL_53:
      v32 = v20;
    }
    else if ( v20 )
    {
      sub_140001660(a1, v20, 1);
    }
  }
LABEL_56:
  *((_QWORD *)&v117 + 1) = v108;
  *(_QWORD *)&v117 = v109;
  if ( v109 )
  {
    v37 = *((_QWORD *)&v117 + 1);
    v38 = *((_QWORD *)&v117 + 1) + 32 * v117;
    while ( 1 )
    {
      v40 = v37;
      v116 = a1;
      v115 = v32;
      v41 = sub_141433D50(aVisibility, 10, v37);
      v37 += 32;
      if ( !v41 || *(_BYTE *)v41 != 3 || *(_QWORD *)(v41 + 24) != 4 || **(_DWORD **)(v41 + 16) != 1701079400 )
      {
        v116 = a1;
        v115 = v32;
        v42 = (_BYTE *)sub_141433D50(aSupportedInApi, 16, v40);
        if ( !v42 || *v42 != 1 || v42[1] == 1 )
        {
          v116 = a1;
          v115 = v32;
          v43 = sub_141433D50(aSlug, 4, v40);
          if ( v43 )
          {
            if ( *(_BYTE *)v43 == 3 )
            {
              v44 = *(_QWORD *)(v43 + 16);
              v45 = *(_QWORD *)(v43 + 24);
              v116 = a1;
              v115 = v32;
              v118 = sub_14033BC10(v44, v45);
              v47 = v46;
              if ( v46 )
              {
                v116 = a1;
                v115 = v32;
                v48 = sub_141433D50(aPriority, 8, v40);
                v39 = 0x7FFFFFFFFFFFFFFFLL;
                if ( v48 && *(_BYTE *)v48 == 2 )
                {
                  v13 = *(_QWORD *)(v48 + 8);
                  if ( v13 )
                  {
                    if ( (_DWORD)v13 == 1 )
                      v39 = *(_QWORD *)(v48 + 16);
                  }
                  else
                  {
                    v39 = *(_QWORD *)(v48 + 16);
                    if ( v39 < 0 )
                      v39 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                if ( v118 )
                  break;
              }
            }
          }
        }
      }
      if ( v37 == v38 )
        goto LABEL_77;
    }
    if ( v37 != v38 )
    {
      v53 = (unsigned __int64)(v38 - v37) >> 5;
      v54 = 0;
      do
      {
        v114 = v39;
        v116 = a1;
        v115 = v32;
        v55 = sub_141433D50(aVisibility, 10, v37 + 32 * v54);
        if ( v55 && *(_BYTE *)v55 == 3 && *(_QWORD *)(v55 + 24) == 4 && **(_DWORD **)(v55 + 16) == 1701079400 )
          goto LABEL_86;
        v116 = a1;
        v115 = v32;
        v56 = (_BYTE *)sub_141433D50(aSupportedInApi, 16, v37 + 32 * v54);
        if ( v56 )
        {
          if ( *v56 == 1 && v56[1] != 1 )
            goto LABEL_86;
        }
        v116 = a1;
        v115 = v32;
        v57 = sub_141433D50(aSlug, 4, v37 + 32 * v54);
        if ( !v57
          || *(_BYTE *)v57 != 3
          || (v58 = *(_QWORD *)(v57 + 16),
              v59 = *(_QWORD *)(v57 + 24),
              v116 = a1,
              v115 = v32,
              v60 = sub_14033BC10(v58, v59),
              !v61) )
        {
LABEL_86:
          v39 = v114;
        }
        else
        {
          v116 = a1;
          v115 = v32;
          v111 = v61;
          v62 = v60;
          v63 = sub_141433D50(aPriority, 8, v37 + 32 * v54);
          v13 = 0x7FFFFFFFFFFFFFFFLL;
          v39 = v114;
          if ( v63 )
          {
            v13 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *(_BYTE *)v63 == 2 )
            {
              v64 = *(_QWORD *)(v63 + 8);
              v13 = 0x7FFFFFFFFFFFFFFFLL;
              if ( v64 != 2 )
              {
                if ( (_DWORD)v64 == 1 )
                {
                  v13 = *(_QWORD *)(v63 + 16);
                }
                else
                {
                  v13 = *(_QWORD *)(v63 + 16);
                  if ( v13 < 0 )
                    v13 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
            }
          }
          if ( v62 )
          {
            if ( v114 >= v13 )
              v39 = v13;
            v65 = v118;
            if ( v114 > v13 )
              v65 = v62;
            v118 = v65;
            if ( v114 > v13 )
              v47 = v111;
          }
        }
        ++v54;
      }
      while ( v54 != v53 );
    }
    if ( v47 < 0 )
    {
      v66 = 0;
      goto LABEL_115;
    }
    nullsub_1(v13);
    v66 = 1;
    v71 = sub_140001650(v47, 1);
    if ( !v71 )
    {
LABEL_115:
      v116 = a1;
      v115 = v32;
      sub_1416C2D4B(v66, v47);
    }
    v72 = (_DWORD *)v71;
    sub_141684120(v71, v118, v47);
    v49 = v72;
  }
  else
  {
LABEL_77:
    nullsub_1(v13);
    v47 = 7;
    v49 = (_DWORD *)sub_140001650(7, 1);
    if ( !v49 )
    {
      v116 = a1;
      v115 = v32;
      sub_1416C2D4B(1, 7);
    }
    *(_DWORD *)((char *)v49 + 3) = 892220717;
    *v49 = 762605671;
  }
  v50 = v110;
  v51 = *((_QWORD *)&v117 + 1);
  *v110 = v47;
  v50[1] = v49;
  v50[2] = v47;
  if ( v32 > 0 )
  {
    sub_140001660(a1, v32, 1);
    v51 = v108;
    *(_QWORD *)&v117 = v109;
  }
  v118 = 0;
  *((_QWORD *)&v117 + 1) = v51;
  while ( (_QWORD)v117 != v118 )
  {
    ++v118;
    v52 = v51 + 32;
    sub_1402C3260();
    v51 = v52;
  }
LABEL_129:
  if ( v107 )
    sub_140001660(*((_QWORD *)&v117 + 1), 32 * v107, 8);
  return v50;
}