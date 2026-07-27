// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | session_meta_rewrite_1 | changelog ③模型协议 (win-native 锚点逆)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall sub_1404A4C00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int128 v6; // rax
  __int128 v7; // kr00_16
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int128 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned __int64 v37; // r8
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // r12
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int64 v45; // rdx
  unsigned __int64 v46; // r12
  __int64 v47; // r13
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __int128 v51; // xmm1
  __m128i v53; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  __int64 v55; // [rsp+58h] [rbp-28h]
  __m128i v56; // [rsp+60h] [rbp-20h] BYREF
  __int64 v57; // [rsp+70h] [rbp-10h]
  char v58; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v59[7]; // [rsp+81h] [rbp+1h]
  __int64 v60; // [rsp+88h] [rbp+8h]
  __m128i v61; // [rsp+90h] [rbp+10h]
  __m128i v62; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v63; // [rsp+B0h] [rbp+30h]
  __int64 v64; // [rsp+C0h] [rbp+40h]
  __int64 v65; // [rsp+D0h] [rbp+50h]
  __int64 v66; // [rsp+D8h] [rbp+58h]
  __int64 v67; // [rsp+E0h] [rbp+60h]
  __int64 v68; // [rsp+E8h] [rbp+68h]
  __int64 v69; // [rsp+F0h] [rbp+70h]
  __int64 v70; // [rsp+F8h] [rbp+78h]
  __m128i v71; // [rsp+100h] [rbp+80h] BYREF
  __int128 v72; // [rsp+110h] [rbp+90h]
  __int64 v73; // [rsp+120h] [rbp+A0h]
  __int128 v74; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v75; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v76; // [rsp+150h] [rbp+D0h]
  __int64 v77; // [rsp+160h] [rbp+E0h]
  __m128i v78; // [rsp+168h] [rbp+E8h]
  __int128 v79; // [rsp+178h] [rbp+F8h]
  __int64 v80; // [rsp+188h] [rbp+108h]
  __int64 v81; // [rsp+198h] [rbp+118h]
  __int64 v82; // [rsp+1A0h] [rbp+120h]
  unsigned __int64 v83; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v84; // [rsp+1B0h] [rbp+130h]
  __int64 v85; // [rsp+1B8h] [rbp+138h]
  __int64 v86; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v87; // [rsp+1C8h] [rbp+148h]
  __int64 v88; // [rsp+1D0h] [rbp+150h]
  unsigned __int128 v89; // [rsp+1D8h] [rbp+158h] BYREF
  _BYTE v90[40]; // [rsp+1E8h] [rbp+168h] BYREF
  __m128i v91; // [rsp+210h] [rbp+190h] BYREF
  __int128 v92; // [rsp+220h] [rbp+1A0h]
  __int64 v93; // [rsp+230h] [rbp+1B0h]
  unsigned __int64 v94; // [rsp+238h] [rbp+1B8h]
  __int64 v95; // [rsp+240h] [rbp+1C0h]
  HANDLE hObject; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v97; // [rsp+250h] [rbp+1D0h]
  __int64 v98; // [rsp+258h] [rbp+1D8h]
  __int64 v99; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v100; // [rsp+268h] [rbp+1E8h]
  unsigned __int64 v101; // [rsp+270h] [rbp+1F0h]
  bool v102; // [rsp+27Ch] [rbp+1FCh]
  char v103; // [rsp+27Dh] [rbp+1FDh]
  char v104; // [rsp+27Eh] [rbp+1FEh]
  char v105; // [rsp+27Fh] [rbp+1FFh]
  __int64 v106; // [rsp+280h] [rbp+200h]

  v106 = -2; /*0x1404a4c1b*/
  find_first_session_meta_line(&v89); /*0x1404a4c36*/
  v6 = v89; /*0x1404a4c3b*/
  v7 = *(_OWORD *)v90; /*0x1404a4c50*/
  v56 = _mm_loadu_si128((const __m128i *)&v90[16]); /*0x1404a4c5f*/
  v57 = *(_QWORD *)&v90[32]; /*0x1404a4c6b*/
  if ( (_QWORD)v89 != -1 ) /*0x1404a4c73*/
  {
    *(_QWORD *)(a1 + 96) = v93; /*0x1404a4c7c*/
    v8 = v91; /*0x1404a4c80*/
    *(_OWORD *)(a1 + 80) = v92; /*0x1404a4c8e*/
    *(__m128i *)(a1 + 64) = v8; /*0x1404a4c92*/
    *(_OWORD *)(a1 + 24) = v7; /*0x1404a4c96*/
    *(__m128i *)(a1 + 40) = _mm_load_si128(&v56); /*0x1404a4ca3*/
    *(_QWORD *)(a1 + 56) = v57; /*0x1404a4cac*/
    *(_OWORD *)(a1 + 8) = v6; /*0x1404a4cb0*/
    *(_QWORD *)a1 = 1; /*0x1404a4cb8*/
    return v6; /*0x1404a4cb8*/
  }
  if ( *((_QWORD *)&v89 + 1) == -1 ) /*0x1404a4cd7*/
  {
    *(_QWORD *)(a1 + 8) = -1; /*0x1404a4e1d*/
    *(_QWORD *)a1 = 0; /*0x1404a4e25*/
    return v6; /*0x1404a4e2c*/
  }
  v81 = *((_QWORD *)&v89 + 1); /*0x1404a4cdd*/
  v54 = v57; /*0x1404a4ce8*/
  v53 = _mm_load_si128(&v56); /*0x1404a4cf1*/
  v89 = *(_OWORD *)v90; /*0x1404a4cf6*/
  *(_OWORD *)v90 = 0; /*0x1404a4d08*/
  v82 = v7; /*0x1404a4d10*/
  *(_OWORD *)&v90[16] = v7; /*0x1404a4d17*/
  v105 = 0; /*0x1404a4d25*/
  sub_1408A6200(&v74, &v89); /*0x1404a4d3a*/
  if ( (_BYTE)v74 == 0xFF ) /*0x1404a4d49*/
  {
    *(_QWORD *)&v6 = *((_QWORD *)&v74 + 1); /*0x1404a4efa*/
    *(_QWORD *)(a1 + 8) = 3; /*0x1404a4f01*/
    *(_QWORD *)(a1 + 16) = v6; /*0x1404a4f09*/
    *(_QWORD *)a1 = 1; /*0x1404a4f0d*/
    *((_QWORD *)&v6 + 1) = v81; /*0x1404a4f14*/
    if ( !v81 ) /*0x1404a4f1e*/
      return v6; /*0x1404a4f1e*/
    goto LABEL_16; /*0x1404a4f1e*/
  }
  *(_DWORD *)&v59[3] = DWORD1(v74); /*0x1404a4d5b*/
  *(_DWORD *)v59 = *(_DWORD *)((char *)&v74 + 1); /*0x1404a4d5e*/
  v61 = _mm_loadu_si128(&v75); /*0x1404a4d70*/
  v58 = v74; /*0x1404a4d75*/
  v60 = *((_QWORD *)&v74 + 1); /*0x1404a4d78*/
  v9 = sub_14142E200(&v58, aPayloadId, 11); /*0x1404a4d8c*/
  if ( !v9 || *(_BYTE *)v9 != 3 || (v10 = *(_QWORD *)(v9 + 24)) == 0 ) /*0x1404a4dab*/
  {
    v71.m128i_i64[0] = a2; /*0x1404a4e31*/
    v71.m128i_i64[1] = a3; /*0x1404a4e38*/
    *(_QWORD *)&v74 = &v71; /*0x1404a4e46*/
    *((_QWORD *)&v74 + 1) = sub_14148F3A0; /*0x1404a4e54*/
    sub_14149C0F0((char *)&v89 + 8, &unk_141757BFF, &v74); /*0x1404a4e70*/
    v13 = *((_QWORD *)&v89 + 1); /*0x1404a4e76*/
    v11 = *(void **)v90; /*0x1404a4e7d*/
    *(_QWORD *)(a1 + 96) = v93; /*0x1404a4e8b*/
    *(_OWORD *)(a1 + 80) = v92; /*0x1404a4e96*/
    *(__m128i *)(a1 + 64) = v91; /*0x1404a4ea1*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v90[24]; /*0x1404a4eac*/
    *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)&v90[8]); /*0x1404a4eb8*/
    *(_QWORD *)(a1 + 8) = 9; /*0x1404a4ebd*/
    *(_QWORD *)(a1 + 16) = v13; /*0x1404a4ec5*/
    v14 = 24; /*0x1404a4ec9*/
    goto LABEL_13; /*0x1404a4ec9*/
  }
  v67 = *(_QWORD *)(v9 + 16); /*0x1404a4db5*/
  LODWORD(v89) = 0; /*0x1404a4db9*/
  *((_QWORD *)&v89 + 1) = 0; /*0x1404a4dc3*/
  *(_DWORD *)v90 = 7; /*0x1404a4dce*/
  *(_QWORD *)&v90[4] = 0x100000000LL; /*0x1404a4dd8*/
  *(_QWORD *)&v90[9] = 0; /*0x1404a4de3*/
  if ( sub_141481480(&v89, a2, a3) == 1 ) /*0x1404a4e0c*/
  {
    v12 = 2; /*0x1404a4e12*/
    goto LABEL_81; /*0x1404a4e18*/
  }
  hObject = v11; /*0x1404a4f3b*/
  sub_141474A10(&v89, &hObject); /*0x1404a4f50*/
  if ( (_DWORD)v89 == 2 ) /*0x1404a4f5d*/
  {
    *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1); /*0x1404a4f66*/
    v12 = 2; /*0x1404a4f6d*/
    goto LABEL_80; /*0x1404a4f73*/
  }
  v15 = v91.m128i_i64[0]; /*0x1404a4f78*/
  if ( !v91.m128i_i64[0] ) /*0x1404a4f82*/
  {
    v74 = -1; /*0x1404a5529*/
    v12 = -1; /*0x1404a5531*/
    goto LABEL_80; /*0x1404a5538*/
  }
  v68 = v10; /*0x1404a4f88*/
  ((void (*)(void))nullsub_1)(); /*0x1404a4f8c*/
  v98 = 1; /*0x1404a4f96*/
  v16 = sub_140001680(0x10000, 1); /*0x1404a4fa7*/
  if ( !v16 ) /*0x1404a4faf*/
  {
    v66 = 1; /*0x1404a5893*/
    v65 = 0; /*0x1404a589b*/
    v103 = 1; /*0x1404a58a3*/
    sub_1416C2D4B(1, 0x10000); /*0x1404a58b4*/
  }
  v95 = v16; /*0x1404a4fb5*/
  v55 = v16 + 1; /*0x1404a4fbf*/
  v69 = 0; /*0x1404a4fc3*/
  v17 = 0; /*0x1404a4fcb*/
  v100 = 0; /*0x1404a4fce*/
  v85 = 0; /*0x1404a4fd9*/
  v84 = v15; /*0x1404a4fe4*/
  while ( 2 ) /*0x1404a5004*/
  {
    v102 = v15 != 0; /*0x1404a5004*/
    v99 = v17; /*0x1404a500e*/
    if ( !v15 ) /*0x1404a5015*/
    {
      *(_QWORD *)&v89 = v17; /*0x1404a561f*/
      *((_QWORD *)&v89 + 1) = v98; /*0x1404a562d*/
      *(_QWORD *)v90 = v100; /*0x1404a563b*/
      sub_1404BB170((unsigned int)&v74, (unsigned int)&v89, 0, (unsigned __int8)v85 + (_DWORD)v84, v85, v67, v68); /*0x1404a5669*/
      sub_140001660(v95, 0x10000, 1); /*0x1404a5681*/
      CloseHandle(hObject); /*0x1404a568d*/
      v11 = *((void **)&v74 + 1); /*0x1404a569a*/
      v12 = v74; /*0x1404a569a*/
      if ( (_QWORD)v74 != -1 ) /*0x1404a56a5*/
        goto LABEL_81; /*0x1404a56a5*/
      goto LABEL_84; /*0x1404a56a5*/
    }
    v19 = 0x10000; /*0x1404a5022*/
    if ( v15 < 0x10000 ) /*0x1404a5027*/
      v19 = v15; /*0x1404a5027*/
    v94 = v15; /*0x1404a502b*/
    v101 = v19; /*0x1404a5035*/
    v83 = v15 - v19; /*0x1404a5048*/
    LOBYTE(v20) = sub_141491C20(&hObject, 0); /*0x1404a504f*/
    v21 = v95; /*0x1404a505c*/
    v22 = v101; /*0x1404a5063*/
    if ( (v20 & 1) != 0 ) /*0x1404a506c*/
      goto LABEL_76; /*0x1404a506c*/
    while ( 1 ) /*0x1404a508b*/
    {
      *(_QWORD *)&v20 = sub_141491990(&hObject, v21, v22); /*0x1404a508b*/
      v89 = v20; /*0x1404a5091*/
      if ( (_QWORD)v20 == 1 ) /*0x1404a50a3*/
        break; /*0x1404a50a3*/
      if ( !*((_QWORD *)&v20 + 1) ) /*0x1404a50c3*/
      {
        *((_QWORD *)&v20 + 1) = &off_1417497E0; /*0x1404a553a*/
LABEL_76:
        *((_QWORD *)&v74 + 1) = *((_QWORD *)&v20 + 1); /*0x1404a5541*/
        v12 = 2; /*0x1404a5548*/
LABEL_77:
        v17 = v99; /*0x1404a554e*/
        goto LABEL_78; /*0x1404a554e*/
      }
      if ( v22 < *((_QWORD *)&v20 + 1) ) /*0x1404a50cf*/
        sub_1416C32F0(*((_QWORD *)&v20 + 1), v22, v22, &off_1417497F8); /*0x1404a5879*/
      v21 += *((_QWORD *)&v20 + 1); /*0x1404a5073*/
      v22 -= *((_QWORD *)&v20 + 1); /*0x1404a5076*/
LABEL_29:
      if ( !v22 ) /*0x1404a507c*/
        goto LABEL_41; /*0x1404a507c*/
    }
    switch ( BYTE8(v20) & 3 ) /*0x1404a50b8*/
    {
      case 0: /*0x1404a50b8*/
        LOBYTE(v20) = *(_BYTE *)(*((_QWORD *)&v20 + 1) + 16LL); /*0x1404a50ba*/
        goto LABEL_38; /*0x1404a50be*/
      case 1: /*0x1404a50b8*/
        LOBYTE(v20) = *(_BYTE *)(*((_QWORD *)&v20 + 1) + 15LL); /*0x1404a50d6*/
        goto LABEL_38; /*0x1404a50da*/
      case 2: /*0x1404a50b8*/
        goto LABEL_40;
      case 3: /*0x1404a50b8*/
        *(_QWORD *)&v20 = HIDWORD(*((_QWORD *)&v20 + 1)); /*0x1404a50df*/
LABEL_38:
        if ( (_BYTE)v20 == 35 ) /*0x1404a50e5*/
        {
          sub_140018650((char *)&v89 + 8); /*0x1404a50ea*/
          goto LABEL_29; /*0x1404a50f0*/
        }
LABEL_40:
        if ( *((_QWORD *)&v20 + 1) ) /*0x1404a50f5*/
          goto LABEL_76; /*0x1404a50f5*/
LABEL_41:
        v23 = v101; /*0x1404a50fb*/
        v94 -= v101; /*0x1404a5102*/
        v17 = v99; /*0x1404a5109*/
LABEL_42:
        if ( (unsigned __int64)(v23 - 1) > 0xFFFF ) /*0x1404a511a*/
        {
          v15 = v83; /*0x1404a53c5*/
          if ( v23 ) /*0x1404a53cf*/
            sub_1416C30E3(-1, 0x10000, &off_14175CBC0); /*0x1404a58fa*/
          continue; /*0x1404a53cf*/
        }
        v24 = v55 + v23; /*0x1404a5124*/
        v25 = 0; /*0x1404a5128*/
LABEL_44:
        v26 = v25 + v23; /*0x1404a512a*/
        if ( !(v25 + v23) ) /*0x1404a5130*/
        {
          v18 = v99; /*0x1404a4ff7*/
          v41 = v100; /*0x1404a53da*/
          v42 = v23; /*0x1404a53fb*/
          v94 = v23 + v100; /*0x1404a53fe*/
          sub_140388B60((unsigned int)&v89, v23 + v100, 0, 1, 1); /*0x1404a5408*/
          v43 = *((_QWORD *)&v89 + 1); /*0x1404a540d*/
          if ( (_DWORD)v89 == 1 ) /*0x1404a541b*/
            sub_1416C2D4B(*((_QWORD *)&v89 + 1), *(_QWORD *)v90); /*0x1404a588b*/
          v89 = __PAIR128__(*(unsigned __int64 *)v90, *((unsigned __int64 *)&v89 + 1)); /*0x1404a5428*/
          v97 = *(_QWORD *)v90; /*0x1404a5436*/
          v101 = v43; /*0x1404a5447*/
          sub_141684120(*(_QWORD *)v90, v95, v42); /*0x1404a544e*/
          *(_QWORD *)v90 = v42; /*0x1404a5453*/
          v44 = v41; /*0x1404a5467*/
          v45 = v42; /*0x1404a546a*/
          if ( v41 > v101 - v42 ) /*0x1404a546d*/
          {
            sub_141688D30((unsigned int)&v89, v42, v41, 1, 1); /*0x1404a54ec*/
            v45 = *(_QWORD *)v90; /*0x1404a54f2*/
            v47 = *((_QWORD *)&v89 + 1); /*0x1404a5507*/
            v101 = v89; /*0x1404a5507*/
            v44 = v100; /*0x1404a550e*/
            v46 = *(_QWORD *)v90 + v100; /*0x1404a5515*/
            v18 = v99; /*0x1404a5519*/
          }
          else
          {
            v46 = v94; /*0x1404a5472*/
            v47 = v97; /*0x1404a5479*/
            if ( !v44 ) /*0x1404a5480*/
              goto LABEL_70; /*0x1404a5480*/
          }
          sub_141684120(v47 + v45, v98, v44); /*0x1404a548f*/
LABEL_70:
          *(_QWORD *)v90 = v46; /*0x1404a5494*/
          if ( v18 ) /*0x1404a549e*/
            sub_140001660(v98, v18, 1); /*0x1404a54b0*/
          v17 = v101; /*0x1404a54b5*/
          v98 = v47; /*0x1404a54bc*/
          v100 = v46; /*0x1404a54c3*/
          v15 = v83; /*0x1404a54ca*/
          continue; /*0x1404a54d1*/
        }
        v27 = v25 - 1; /*0x1404a5136*/
        if ( *(_BYTE *)(v24 + v25-- - 2) != 10 ) /*0x1404a513a*/
          goto LABEL_44; /*0x1404a5143*/
        v29 = v100 - 1 - v27; /*0x1404a5150*/
        if ( v29 < 0 ) /*0x1404a5153*/
          goto LABEL_91; /*0x1404a5153*/
        v30 = ~v27; /*0x1404a515c*/
        v31 = 1; /*0x1404a515f*/
        v101 = v23; /*0x1404a5164*/
        v97 = ~v27; /*0x1404a516b*/
        if ( v100 - 1 == v27 ) /*0x1404a5172*/
          goto LABEL_50; /*0x1404a5172*/
        nullsub_1(v26); /*0x1404a5174*/
        v31 = sub_140001650(v29, 1); /*0x1404a5181*/
        if ( !v31 ) /*0x1404a5189*/
        {
          v69 = 1; /*0x1404a58cf*/
          v70 = v100 + v97; /*0x1404a58d3*/
LABEL_91:
          sub_1416C2D4B(v69, v70); /*0x1404a58d7*/
        }
        v23 = v101; /*0x1404a518f*/
        v30 = v97; /*0x1404a5196*/
LABEL_50:
        v86 = v29; /*0x1404a519d*/
        v87 = v31; /*0x1404a51a4*/
        v88 = 0; /*0x1404a51ab*/
        v70 = v31; /*0x1404a51b9*/
        if ( v30 > v29 ) /*0x1404a51bd*/
        {
          v104 = 1; /*0x1404a533d*/
          sub_141688D30((unsigned int)&v86, 0, v30, 1, 1); /*0x1404a535f*/
          v32 = v88; /*0x1404a5365*/
          v23 = v101; /*0x1404a536c*/
          v30 = v97; /*0x1404a5373*/
          if ( v27 != -1 ) /*0x1404a537e*/
          {
LABEL_52:
            sub_141684120(v32 + v87, v27 + v24, v30); /*0x1404a51cc*/
            v30 = v97; /*0x1404a51e4*/
            v23 = v101; /*0x1404a51eb*/
          }
        }
        else
        {
          v32 = 0; /*0x1404a51c3*/
          if ( v27 != -1 ) /*0x1404a51ca*/
            goto LABEL_52; /*0x1404a51ca*/
        }
        v33 = v32 + v30; /*0x1404a51f2*/
        v88 = v33; /*0x1404a51f5*/
        v34 = v100; /*0x1404a5216*/
        if ( v100 > v27 + v86 - v32 + 1 ) /*0x1404a5219*/
        {
          v104 = 1; /*0x1404a5389*/
          sub_141688D30((unsigned int)&v86, v33, v100, 1, 1); /*0x1404a53ac*/
          v33 = v88; /*0x1404a53b2*/
          v34 = v100; /*0x1404a53b9*/
LABEL_55:
          v35 = v33; /*0x1404a5224*/
          sub_141684120(v33 + v87, v98, v34); /*0x1404a523b*/
          v33 = v35; /*0x1404a5240*/
          v23 = v101; /*0x1404a5243*/
          v34 = v100; /*0x1404a524a*/
        }
        else if ( v100 ) /*0x1404a5222*/
        {
          goto LABEL_55; /*0x1404a5222*/
        }
        v36 = v27 + v23; /*0x1404a5254*/
        v37 = v94 + v36 + 1; /*0x1404a5261*/
        v38 = v34 + v33; /*0x1404a5264*/
        v39 = 0; /*0x1404a5271*/
        if ( v84 >= v37 ) /*0x1404a5276*/
          v39 = v84 - v37; /*0x1404a5276*/
        v88 = v38; /*0x1404a527a*/
        v104 = 0; /*0x1404a528c*/
        sub_1404BB170((unsigned int)&v89, (unsigned int)&v86, v37, (unsigned __int8)v85 + v39, v85, v67, v68); /*0x1404a52b7*/
        v12 = v89; /*0x1404a52bd*/
        v71 = _mm_loadu_si128((const __m128i *)v90); /*0x1404a52da*/
        v72 = *(_OWORD *)&v90[16]; /*0x1404a52e2*/
        v73 = *(_QWORD *)&v90[32]; /*0x1404a52ed*/
        if ( (_QWORD)v89 != -1 ) /*0x1404a52f8*/
        {
          v80 = v93; /*0x1404a57da*/
          v79 = v92; /*0x1404a57ef*/
          v78 = v91; /*0x1404a57f6*/
          v75 = v71; /*0x1404a580b*/
          v76 = v72; /*0x1404a5812*/
          v77 = v73; /*0x1404a5820*/
          *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1); /*0x1404a5827*/
          goto LABEL_77; /*0x1404a582e*/
        }
        v23 = v36; /*0x1404a52fe*/
        v40 = v36 + v94; /*0x1404a5308*/
        v84 = v36 + v94; /*0x1404a530b*/
        LOBYTE(v40) = 1; /*0x1404a5312*/
        v85 = v40; /*0x1404a5314*/
        v100 = 0; /*0x1404a5320*/
        v17 = v99; /*0x1404a532b*/
        if ( *((_QWORD *)&v89 + 1) == -1 ) /*0x1404a5332*/
          goto LABEL_42; /*0x1404a5332*/
        *((_QWORD *)&v74 + 1) = *((_QWORD *)&v89 + 1); /*0x1404a5833*/
        v75 = v71; /*0x1404a5848*/
        v76 = v72; /*0x1404a584f*/
        v77 = v73; /*0x1404a585d*/
LABEL_78:
        sub_140001660(v95, 0x10000, 1); /*0x1404a5555*/
        if ( v17 ) /*0x1404a556f*/
          sub_140001660(v98, v17, 1); /*0x1404a5581*/
LABEL_80:
        CloseHandle(hObject); /*0x1404a5586*/
        v11 = *((void **)&v74 + 1); /*0x1404a5593*/
        if ( v12 != -1 ) /*0x1404a559e*/
        {
LABEL_81:
          v64 = v77; /*0x1404a55a4*/
          v63 = v76; /*0x1404a55bd*/
          v62 = v75; /*0x1404a55c1*/
          *(_QWORD *)(a1 + 96) = v80; /*0x1404a55cc*/
          *(_OWORD *)(a1 + 80) = v79; /*0x1404a55d7*/
          *(__m128i *)(a1 + 64) = v78; /*0x1404a55e2*/
          *(_QWORD *)(a1 + 56) = v64; /*0x1404a55ea*/
          v48 = _mm_load_si128(&v62); /*0x1404a55ee*/
          *(_OWORD *)(a1 + 40) = v63; /*0x1404a55f7*/
          *(__m128i *)(a1 + 24) = v48; /*0x1404a55fb*/
          goto LABEL_82; /*0x1404a55fb*/
        }
LABEL_84:
        v64 = v77; /*0x1404a56ab*/
        v49 = _mm_load_si128(&v75); /*0x1404a56b6*/
        v63 = v76; /*0x1404a56c5*/
        v62 = v49; /*0x1404a56c9*/
        if ( v11 != (void *)-1LL ) /*0x1404a56d2*/
        {
          *(_QWORD *)(a1 + 96) = v64; /*0x1404a56d8*/
          v50 = v62; /*0x1404a56dc*/
          *(_OWORD *)(a1 + 80) = v63; /*0x1404a56e4*/
          *(__m128i *)(a1 + 64) = v50; /*0x1404a56e8*/
          *(_QWORD *)(a1 + 8) = v81; /*0x1404a56f3*/
          *(_QWORD *)(a1 + 16) = v82; /*0x1404a56fe*/
          *(_QWORD *)(a1 + 24) = *((_QWORD *)&v7 + 1); /*0x1404a5702*/
          *(__m128i *)(a1 + 32) = _mm_load_si128(&v53); /*0x1404a570b*/
          *(_QWORD *)(a1 + 48) = v54; /*0x1404a5714*/
          *(_QWORD *)(a1 + 56) = v11; /*0x1404a5718*/
          *(_QWORD *)a1 = 0; /*0x1404a571c*/
          v105 = 1; /*0x1404a5723*/
          *(_QWORD *)&v6 = sub_1400104F0(&v58); /*0x1404a572d*/
          return v6; /*0x1404a5733*/
        }
        v71.m128i_i64[0] = a2; /*0x1404a5738*/
        v71.m128i_i64[1] = a3; /*0x1404a573f*/
        *(_QWORD *)&v74 = &v71; /*0x1404a574d*/
        *((_QWORD *)&v74 + 1) = sub_14148F3A0; /*0x1404a575b*/
        sub_14149C0F0((char *)&v89 + 8, &unk_141757BDB, &v74); /*0x1404a5777*/
        v11 = *((void **)&v89 + 1); /*0x1404a577d*/
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v90[32]; /*0x1404a578b*/
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v90[16]; /*0x1404a5796*/
        *(_OWORD *)(a1 + 24) = *(_OWORD *)v90; /*0x1404a57a1*/
        v51 = v92; /*0x1404a57ad*/
        *(__m128i *)(a1 + 64) = _mm_loadu_si128(&v91); /*0x1404a57b4*/
        *(_OWORD *)(a1 + 80) = v51; /*0x1404a57b9*/
        *(_QWORD *)(a1 + 96) = v93; /*0x1404a57c4*/
        v12 = 9; /*0x1404a57c8*/
LABEL_82:
        *(_QWORD *)(a1 + 8) = v12; /*0x1404a5600*/
        v14 = 16; /*0x1404a5604*/
LABEL_13:
        *(_QWORD *)(a1 + v14) = v11; /*0x1404a4ece*/
        *(_QWORD *)a1 = 1; /*0x1404a4ed2*/
        v105 = 0; /*0x1404a4ed9*/
        *(_QWORD *)&v6 = sub_1400104F0(&v58); /*0x1404a4ee3*/
        *((_QWORD *)&v6 + 1) = v81; /*0x1404a4ee9*/
        if ( !v81 ) /*0x1404a4ef3*/
          return v6; /*0x1404a4ef3*/
LABEL_16:
        *(_QWORD *)&v6 = sub_140001660(v82, *((_QWORD *)&v6 + 1), 1); /*0x1404a4f24*/
        return v6;
    }
  }
}