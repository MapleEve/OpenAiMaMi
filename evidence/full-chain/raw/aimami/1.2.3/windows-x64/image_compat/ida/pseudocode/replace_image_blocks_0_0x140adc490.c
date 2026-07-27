// win 1.2.1 | module src/core/relay/image_compat.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::image_compat::replace_image_blocks | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall replace_image_blocks_0(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  int v16; // eax
  char v17; // cl
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  _DWORD *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _QWORD *v38; // rax
  __int128 v39; // xmm1
  unsigned __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  unsigned __int64 v42; // [rsp+80h] [rbp+0h]
  __int128 v43; // [rsp+88h] [rbp+8h] BYREF
  __int64 v44; // [rsp+98h] [rbp+18h]
  __m256i v45; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+48h] BYREF
  _DWORD *v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  _QWORD *v49; // [rsp+E0h] [rbp+60h]
  __m256i v50; // [rsp+E8h] [rbp+68h] BYREF
  char v51; // [rsp+10Ch] [rbp+8Ch]
  char v52; // [rsp+10Dh] [rbp+8Dh]
  char v53; // [rsp+10Eh] [rbp+8Eh]
  char v54; // [rsp+10Fh] [rbp+8Fh]
  __int64 v55; // [rsp+110h] [rbp+90h]

  v55 = -2; /*0x140adc4ab*/
  v1 = *(unsigned __int8 *)a1; /*0x140adc4b6*/
  if ( v1 != 5 ) /*0x140adc4bc*/
  {
    if ( v1 == 4 ) /*0x140adc4c1*/
    {
      v2 = a1[3]; /*0x140adc4c7*/
      if ( v2 ) /*0x140adc4ce*/
      {
        v3 = a1[2]; /*0x140adc4d4*/
        v4 = 0; /*0x140adc4d8*/
        do /*0x140adc4f2*/
        {
          v4 += replace_image_blocks_0(v3); /*0x140adc4e8*/
          v3 += 32; /*0x140adc4eb*/
          --v2; /*0x140adc4ef*/
        }
        while ( v2 ); /*0x140adc4f2*/
        return v4; /*0x140adc4f2*/
      }
    }
    return 0; /*0x140adc5d7*/
  }
  v5 = a1[1]; /*0x140adc4f9*/
  if ( !v5 ) /*0x140adc500*/
    return 0; /*0x140adc500*/
  v49 = a1; /*0x140adc506*/
  v6 = a1[2]; /*0x140adc50a*/
  v42 = v6; /*0x140adc50e*/
  v7 = v5; /*0x140adc512*/
LABEL_9:
  v8 = v7 + 360; /*0x140adc515*/
  v40 = v7; /*0x140adc523*/
  v9 = (_QWORD *)(v7 - 8); /*0x140adc527*/
  v41 = *(unsigned __int16 *)(v7 + 626); /*0x140adc52b*/
  v10 = 3LL * (unsigned int)(8 * v41); /*0x140adc536*/
  v11 = -1; /*0x140adc53a*/
  do /*0x140adc5a4*/
  {
    if ( !v10 ) /*0x140adc553*/
    {
      v11 = v41; /*0x140adc5b0*/
LABEL_19:
      if ( !v42 ) /*0x140adc5bc*/
        goto LABEL_37; /*0x140adc5bc*/
      --v42; /*0x140adc5c2*/
      v7 = *(_QWORD *)(v40 + 8 * v11 + 632); /*0x140adc5ca*/
      goto LABEL_9; /*0x140adc5d2*/
    }
    v12 = v8 + 24; /*0x140adc555*/
    v13 = *(_QWORD *)(v8 + 16); /*0x140adc55d*/
    v14 = v13 - 4; /*0x140adc564*/
    if ( v13 >= 4 ) /*0x140adc56d*/
      v13 = 4; /*0x140adc56d*/
    v15 = -(__int64)v14; /*0x140adc571*/
    v16 = sub_1416847B0(aType_9, *(_QWORD *)(v8 + 8), v13); /*0x140adc57b*/
    if ( v16 ) /*0x140adc584*/
      v15 = v16; /*0x140adc584*/
    v17 = (v15 > 0) - (v15 < 0); /*0x140adc591*/
    v9 += 4; /*0x140adc593*/
    ++v11; /*0x140adc597*/
    v10 -= 24; /*0x140adc59a*/
    v8 = v12; /*0x140adc59e*/
  }
  while ( v17 == 1 ); /*0x140adc5a4*/
  if ( v17 ) /*0x140adc5ab*/
    goto LABEL_19; /*0x140adc5ab*/
  if ( *((_BYTE *)v9 - 24) != 3 ) /*0x140adc5f5*/
    goto LABEL_37; /*0x140adc5f5*/
  v19 = *(v9 - 1); /*0x140adc5fb*/
  if ( *v9 != 11 ) /*0x140adc607*/
  {
    if ( *v9 == 9 ) /*0x140adc611*/
    {
      v20 = *(_QWORD *)v19 ^ 0x72755F6567616D69LL; /*0x140adc621*/
      if ( !(v20 | *(unsigned __int8 *)(v19 + 8) ^ 0x6CLL) ) /*0x140adc62c*/
      {
        *(_QWORD *)&v43 = 0; /*0x140adc635*/
        v44 = 0; /*0x140adc63d*/
        nullsub_1(v20); /*0x140adc645*/
        v21 = (_DWORD *)sub_140001650(4, 1); /*0x140adc654*/
        if ( !v21 ) /*0x140adc65c*/
          sub_1416C2D4B(1, 4); /*0x140adcc03*/
        *v21 = 1701869940; /*0x140adc662*/
        v46 = 4; /*0x140adc668*/
        v47 = v21; /*0x140adc670*/
        v48 = 4; /*0x140adc674*/
        v54 = 1; /*0x140adc67c*/
        sub_140B56640(&v50, &off_1417AF728); /*0x140adc68e*/
        v22 = v49; /*0x140adc694*/
        if ( v50.m256i_i8[0] == -1 ) /*0x140adc69c*/
        {
          v45.m256i_i64[0] = v50.m256i_i64[1]; /*0x140adcb2b*/
          sub_1416C3060( /*0x140adcb52*/
            (unsigned int)aCalledResultUn_12,
            43,
            (unsigned int)&v45,
            (unsigned int)&off_1417AEA50,
            (__int64)&off_1417AF758);
        }
        v45 = v50; /*0x140adc6aa*/
        v54 = 0; /*0x140adc6b2*/
        sub_140307860(&v50, &v43, &v46, &v45); /*0x140adc6c9*/
        if ( v50.m256i_i8[0] != -1 ) /*0x140adc6d3*/
          sub_1400104F0(&v50); /*0x140adc6d9*/
        nullsub_1(v23); /*0x140adc6df*/
        v24 = (_DWORD *)sub_140001650(4, 1); /*0x140adc6ee*/
        if ( !v24 ) /*0x140adc6f6*/
          sub_1416C2D4B(1, 4); /*0x140adcc27*/
        *v24 = 1954047348; /*0x140adc6fc*/
        v46 = 4; /*0x140adc702*/
        v47 = v24; /*0x140adc70a*/
        v48 = 4; /*0x140adc70e*/
        v53 = 1; /*0x140adc716*/
        sub_140B56640(&v50, &off_1417AF788); /*0x140adc728*/
        if ( v50.m256i_i8[0] == -1 ) /*0x140adc732*/
        {
          v45.m256i_i64[0] = v50.m256i_i64[1]; /*0x140adcb97*/
          sub_1416C3060( /*0x140adcbbe*/
            (unsigned int)aCalledResultUn_12,
            43,
            (unsigned int)&v45,
            (unsigned int)&off_1417AEA50,
            (__int64)&off_1417AF758);
        }
        v45 = v50; /*0x140adc740*/
        v53 = 0; /*0x140adc748*/
        sub_140307860(&v50, &v43, &v46, &v45); /*0x140adc75f*/
        if ( v50.m256i_i8[0] != -1 ) /*0x140adc769*/
          sub_1400104F0(&v50); /*0x140adc76f*/
        goto LABEL_73; /*0x140adc76f*/
      }
    }
    goto LABEL_37; /*0x140adc62f*/
  }
  v25 = *(_QWORD *)v19 ^ 0x6D695F7475706E69LL; /*0x140adc79d*/
  if ( v25 | *(_QWORD *)(v19 + 3) ^ 0x6567616D695F7475LL ) /*0x140adc7ae*/
  {
LABEL_37:
    v26 = v49[3]; /*0x140adc7b7*/
    v4 = 0; /*0x140adc7bf*/
    if ( !v26 ) /*0x140adc7c4*/
      return v4; /*0x140adc7c4*/
    v27 = 0; /*0x140adc7ca*/
    while ( 1 ) /*0x140adc7fa*/
    {
      if ( v27 ) /*0x140adc7fd*/
      {
        if ( v6 < *(unsigned __int16 *)(v27 + 626) ) /*0x140adc80a*/
          goto LABEL_43; /*0x140adc80a*/
        goto LABEL_54; /*0x140adc80a*/
      }
      if ( !v6 ) /*0x140adc823*/
      {
        v27 = v5; /*0x140adc85d*/
        goto LABEL_53; /*0x140adc860*/
      }
      v27 = v5; /*0x140adc828*/
      if ( (v6 & 7) == 0 ) /*0x140adc82f*/
        break; /*0x140adc82f*/
      v30 = 0; /*0x140adc831*/
      do /*0x140adc84d*/
      {
        v27 = *(_QWORD *)(v27 + 632); /*0x140adc840*/
        ++v30; /*0x140adc847*/
      }
      while ( (v6 & 7) != v30 ); /*0x140adc84d*/
      v31 = v6 - v30; /*0x140adc852*/
      if ( v6 >= 8 ) /*0x140adc859*/
        goto LABEL_52; /*0x140adc859*/
LABEL_53:
      v5 = 0; /*0x140adc8ae*/
      v6 = 0; /*0x140adc8b0*/
      if ( *(_WORD *)(v27 + 626) ) /*0x140adc8b2*/
      {
LABEL_43:
        v29 = v27; /*0x140adc810*/
        goto LABEL_56; /*0x140adc813*/
      }
      do /*0x140adc8f5*/
      {
LABEL_54:
        v29 = *(_QWORD *)(v27 + 352); /*0x140adc8d0*/
        if ( !v29 ) /*0x140adc8da*/
          sub_1416C3040(&off_141746188); /*0x140adcb1c*/
        ++v5; /*0x140adc8e0*/
        v6 = *(unsigned __int16 *)(v27 + 624); /*0x140adc8e3*/
        v27 = *(_QWORD *)(v27 + 352); /*0x140adc8eb*/
      }
      while ( (unsigned __int16)v6 >= *(_WORD *)(v29 + 626) ); /*0x140adc8f5*/
LABEL_56:
      if ( v5 ) /*0x140adc8fa*/
      {
        v32 = v29 + 8 * v6 + 640; /*0x140adc904*/
        if ( (v5 & 7) != 0 ) /*0x140adc911*/
        {
          v33 = 0; /*0x140adc913*/
          do /*0x140adc930*/
          {
            v27 = *(_QWORD *)v32; /*0x140adc920*/
            v32 = *(_QWORD *)v32 + 632LL; /*0x140adc923*/
            ++v33; /*0x140adc92a*/
          }
          while ( (v5 & 7) != v33 ); /*0x140adc930*/
          v34 = v5 - v33; /*0x140adc935*/
          if ( v5 >= 8 ) /*0x140adc93c*/
          {
            do /*0x140adc97f*/
            {
LABEL_61:
              v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 632LL) /*0x140adc940*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v32 = v27 + 632; /*0x140adc974*/
              v34 -= 8LL; /*0x140adc97b*/
            }
            while ( v34 ); /*0x140adc97f*/
          }
        }
        else
        {
          v34 = v5; /*0x140adc990*/
          if ( v5 >= 8 ) /*0x140adc997*/
            goto LABEL_61; /*0x140adc997*/
        }
        v28 = 0; /*0x140adc981*/
        goto LABEL_40; /*0x140adc983*/
      }
      v28 = v6 + 1; /*0x140adc7d0*/
      v27 = v29; /*0x140adc7d4*/
LABEL_40:
      --v26; /*0x140adc7d7*/
      v4 += replace_image_blocks_0(32 * v6 + v29); /*0x140adc7e6*/
      v6 = v28; /*0x140adc7e9*/
      v5 = 0; /*0x140adc7ec*/
      if ( !v26 ) /*0x140adc7f4*/
        return v4; /*0x140adc7f4*/
    }
    v31 = v6; /*0x140adc862*/
    if ( v6 < 8 ) /*0x140adc869*/
      goto LABEL_53; /*0x140adc869*/
    do /*0x140adc8ac*/
    {
LABEL_52:
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 632) /*0x140adc870*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v31 -= 8LL; /*0x140adc8a8*/
    }
    while ( v31 ); /*0x140adc8ac*/
    goto LABEL_53; /*0x140adc8ac*/
  }
  *(_QWORD *)&v43 = 0; /*0x140adc99b*/
  v44 = 0; /*0x140adc9a3*/
  nullsub_1(v25); /*0x140adc9ab*/
  v35 = (_DWORD *)sub_140001650(4, 1); /*0x140adc9ba*/
  if ( !v35 ) /*0x140adc9c2*/
    sub_1416C2D4B(1, 4); /*0x140adcc15*/
  *v35 = 1701869940; /*0x140adc9c8*/
  v46 = 4; /*0x140adc9ce*/
  v47 = v35; /*0x140adc9d6*/
  v48 = 4; /*0x140adc9da*/
  v52 = 1; /*0x140adc9e2*/
  sub_140B56640(&v50, &off_1417AF7A8); /*0x140adc9f4*/
  v22 = v49; /*0x140adc9fa*/
  if ( v50.m256i_i8[0] == -1 ) /*0x140adca02*/
  {
    v45.m256i_i64[0] = v50.m256i_i64[1]; /*0x140adcb61*/
    sub_1416C3060( /*0x140adcb88*/
      (unsigned int)aCalledResultUn_12,
      43,
      (unsigned int)&v45,
      (unsigned int)&off_1417AEA50,
      (__int64)&off_1417AF7B8);
  }
  v45 = v50; /*0x140adca10*/
  v52 = 0; /*0x140adca18*/
  sub_140307860(&v50, &v43, &v46, &v45); /*0x140adca2f*/
  if ( v50.m256i_i8[0] != -1 ) /*0x140adca39*/
    sub_1400104F0(&v50); /*0x140adca3f*/
  nullsub_1(v36); /*0x140adca45*/
  v37 = (_DWORD *)sub_140001650(4, 1); /*0x140adca54*/
  if ( !v37 ) /*0x140adca5c*/
    sub_1416C2D4B(1, 4); /*0x140adcc39*/
  *v37 = 1954047348; /*0x140adca62*/
  v46 = 4; /*0x140adca68*/
  v47 = v37; /*0x140adca70*/
  v48 = 4; /*0x140adca74*/
  v51 = 1; /*0x140adca7c*/
  sub_140B56640(&v50, &off_1417AF788); /*0x140adca8e*/
  if ( v50.m256i_i8[0] == -1 ) /*0x140adca98*/
  {
    v45.m256i_i64[0] = v50.m256i_i64[1]; /*0x140adcbca*/
    sub_1416C3060( /*0x140adcbf1*/
      (unsigned int)aCalledResultUn_12,
      43,
      (unsigned int)&v45,
      (unsigned int)&off_1417AEA50,
      (__int64)&off_1417AF7B8);
  }
  v45 = v50; /*0x140adcaa6*/
  v51 = 0; /*0x140adcaae*/
  sub_140307860(&v50, &v43, &v46, &v45); /*0x140adcac5*/
  if ( v50.m256i_i8[0] != -1 ) /*0x140adcacf*/
    sub_1400104F0(&v50); /*0x140adcad5*/
LABEL_73:
  *(_OWORD *)((char *)&v50.m256i_u32[1] + 3) = v43; /*0x140adcadb*/
  *(__int64 *)((char *)&v50.m256i_i64[2] + 7) = v44; /*0x140adcae7*/
  sub_1400104F0(v22); /*0x140adcaee*/
  v38 = v49; /*0x140adcaf4*/
  *(_BYTE *)v49 = 5; /*0x140adcaf8*/
  v39 = *(_OWORD *)((char *)&v50.m256i_u64[1] + 7); /*0x140adcaff*/
  *(_OWORD *)((char *)v38 + 1) = *(_OWORD *)v50.m256i_i8; /*0x140adcb03*/
  *((_OWORD *)v38 + 1) = v39; /*0x140adcb07*/
  return 1; /*0x140adc5dc*/
}