// __ZN13codexmate_lib4core5relay10translator17clean_tool_schema @ 0x10084cb50 | 基线 same-set
char __fastcall codexmate_lib::core::relay::translator::clean_tool_schema::hcd696520e11343af(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  size_t v9; // rdx
  size_t v10; // r15
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  _QWORD *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  bool v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 *v30; // rbx
  _BYTE v32[32]; // [rsp+8h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-58h]
  unsigned __int64 v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 *v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+48h] [rbp-38h]
  _QWORD *v38; // [rsp+50h] [rbp-30h]

  LODWORD(v1) = *(unsigned __int8 *)a1; /*0x10084cb61*/
  if ( (_DWORD)v1 == 4 ) /*0x10084cb67*/
  {
    v15 = a1[3]; /*0x10084cc6b*/
    if ( v15 ) /*0x10084cc72*/
    {
      v16 = a1[2]; /*0x10084cc78*/
      v17 = 32 * v15; /*0x10084cc7c*/
      do /*0x10084cc90*/
      {
        LOBYTE(v1) = ((__int64 (*)(void))codexmate_lib::core::relay::translator::clean_tool_schema::hcd696520e11343af)(); /*0x10084cc84*/
        v16 += 32; /*0x10084cc89*/
        v17 -= 32; /*0x10084cc8c*/
      }
      while ( v17 ); /*0x10084cc90*/
    }
    return v1; /*0x10084cc90*/
  }
  if ( (_DWORD)v1 != 5 ) /*0x10084cb70*/
    return v1; /*0x10084cb70*/
  v2 = a1[1]; /*0x10084cb76*/
  if ( !v2 ) /*0x10084cb7d*/
    return v1; /*0x10084cb7d*/
  v36 = a1 + 1; /*0x10084cb87*/
  v38 = a1; /*0x10084cb8b*/
  v37 = a1[2]; /*0x10084cb93*/
  v3 = v2; /*0x10084cb97*/
LABEL_5:
  v4 = v3 + 360; /*0x10084cb9a*/
  v5 = *(unsigned __int16 *)(v3 + 626); /*0x10084cba1*/
  v34 = v3; /*0x10084cba8*/
  v6 = (_QWORD *)(v3 - 8); /*0x10084cbac*/
  v35 = v5; /*0x10084cbb0*/
  v7 = 3LL * (unsigned int)(8 * v5); /*0x10084cbbb*/
  v8 = -1; /*0x10084cbbf*/
  do /*0x10084cc29*/
  {
    if ( !v7 ) /*0x10084cbd3*/
    {
      v8 = v35; /*0x10084cc40*/
LABEL_15:
      v14 = v38; /*0x10084cc44*/
      if ( !v37 ) /*0x10084cc50*/
        goto LABEL_27; /*0x10084cc50*/
      --v37; /*0x10084cc56*/
      v3 = *(_QWORD *)(v34 + 8 * v8 + 632); /*0x10084cc5e*/
      goto LABEL_5; /*0x10084cc66*/
    }
    v33 = v4 + 24; /*0x10084cbd9*/
    v9 = *(_QWORD *)(v4 + 16); /*0x10084cbe1*/
    v10 = v9 - 6; /*0x10084cbe8*/
    if ( v9 >= 6 ) /*0x10084cbf1*/
      v9 = 6; /*0x10084cbf1*/
    v11 = -(__int64)v10; /*0x10084cbf5*/
    v12 = memcmp(&unk_101674C96, *(const void **)(v4 + 8), v9); /*0x10084cbff*/
    if ( v12 ) /*0x10084cc08*/
      v11 = v12; /*0x10084cc08*/
    v13 = (v11 > 0) - (v11 < 0); /*0x10084cc15*/
    v6 += 4; /*0x10084cc17*/
    ++v8; /*0x10084cc1b*/
    v7 -= 24; /*0x10084cc1e*/
    v4 = v33; /*0x10084cc22*/
  }
  while ( v13 == 1 ); /*0x10084cc29*/
  if ( v13 ) /*0x10084cc30*/
    goto LABEL_15; /*0x10084cc30*/
  if ( *((_BYTE *)v6 - 24) != 3 ) /*0x10084cc9c*/
  {
    v14 = v38; /*0x10084ccd4*/
    goto LABEL_27; /*0x10084ccd4*/
  }
  v18 = *(v6 - 1); /*0x10084cc9e*/
  v19 = *v6; /*0x10084cca2*/
  if ( *v6 == 13 ) /*0x10084ccaa*/
  {
    v14 = v38; /*0x10084cef8*/
    if ( *(_QWORD *)v18 ^ 0x656665722D697275LL | *(_QWORD *)(v18 + 5) ^ 0x65636E6572656665LL ) /*0x10084cef5*/
      goto LABEL_27; /*0x10084cefc*/
  }
  else
  {
    v14 = v38; /*0x10084ccb4*/
    if ( v19 != 3 || *(_WORD *)v18 ^ 0x7275 | *(unsigned __int8 *)(v18 + 2) ^ 0x69 ) /*0x10084ccca*/
      goto LABEL_27; /*0x10084cccd*/
  }
  v30 = v36; /*0x10084cf12*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d(v32, v36, &unk_101674C96, 6); /*0x10084cf19*/
  if ( v32[0] != 6 ) /*0x10084cf22*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v32); /*0x10084cf28*/
  v2 = *v30; /*0x10084cf2d*/
LABEL_27:
  LOBYTE(v1) = v2 != 0; /*0x10084ccd8*/
  v20 = v14[3]; /*0x10084ccde*/
  if ( v2 != 0 && v20 != 0 ) /*0x10084cce5*/
  {
    v21 = v2 != 0; /*0x10084ccf9*/
    v1 = v14[2]; /*0x10084ccfd*/
    v22 = 0; /*0x10084cd01*/
    while ( v22 || !v21 ) /*0x10084cd41*/
    {
      if ( !v21 ) /*0x10084cd84*/
        core::option::unwrap_failed::h44626cade04bbf1e(&off_10196D588); /*0x10084cf3c*/
      if ( v1 < *(unsigned __int16 *)(v22 + 626) ) /*0x10084cd94*/
      {
LABEL_41:
        v26 = v22; /*0x10084cd96*/
        goto LABEL_48; /*0x10084cd99*/
      }
      do /*0x10084ce24*/
      {
LABEL_46:
        v26 = *(_QWORD *)(v22 + 352); /*0x10084ce00*/
        if ( !v26 ) /*0x10084ce0a*/
          core::option::unwrap_failed::h44626cade04bbf1e(&off_10196D570); /*0x10084cf48*/
        ++v2; /*0x10084ce10*/
        v1 = *(unsigned __int16 *)(v22 + 624); /*0x10084ce13*/
        v22 = *(_QWORD *)(v22 + 352); /*0x10084ce1a*/
      }
      while ( (unsigned __int16)v1 >= *(_WORD *)(v26 + 626) ); /*0x10084ce24*/
LABEL_48:
      if ( v2 ) /*0x10084ce29*/
      {
        v27 = v26 + 8 * v1 + 640; /*0x10084ce2f*/
        if ( (v2 & 7) != 0 ) /*0x10084ce3e*/
        {
          v28 = 0; /*0x10084ce44*/
          do /*0x10084ce60*/
          {
            v22 = *(_QWORD *)v27; /*0x10084ce50*/
            v27 = *(_QWORD *)v27 + 632LL; /*0x10084ce53*/
            ++v28; /*0x10084ce5a*/
          }
          while ( (v2 & 7) != v28 ); /*0x10084ce60*/
          v29 = v2 - v28; /*0x10084ce65*/
          if ( v2 >= 8 ) /*0x10084ce6c*/
          {
            do /*0x10084ceaf*/
            {
LABEL_53:
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 632LL) /*0x10084ce70*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v27 = v22 + 632; /*0x10084cea4*/
              v29 -= 8LL; /*0x10084ceab*/
            }
            while ( v29 ); /*0x10084ceaf*/
          }
        }
        else
        {
          v29 = v2; /*0x10084cec0*/
          if ( v2 >= 8 ) /*0x10084cec7*/
            goto LABEL_53; /*0x10084cec7*/
        }
        v23 = 0; /*0x10084ceb1*/
        goto LABEL_30; /*0x10084ceb4*/
      }
      v23 = v1 + 1; /*0x10084cd10*/
      v22 = v26; /*0x10084cd14*/
LABEL_30:
      --v20; /*0x10084cd17*/
      codexmate_lib::core::relay::translator::clean_tool_schema::hcd696520e11343af(32 * v1 + v26); /*0x10084cd21*/
      v2 = 0; /*0x10084cd26*/
      v1 = v23; /*0x10084cd2c*/
      if ( !v20 ) /*0x10084cd32*/
        return v1; /*0x10084cd32*/
    }
    v21 = 1; /*0x10084cd43*/
    if ( !v1 ) /*0x10084cd4c*/
    {
      v22 = v2; /*0x10084cd9e*/
      goto LABEL_45; /*0x10084cda1*/
    }
    v22 = v2; /*0x10084cd51*/
    if ( (v1 & 7) != 0 ) /*0x10084cd58*/
    {
      v24 = 0; /*0x10084cd5a*/
      do /*0x10084cd6d*/
      {
        v22 = *(_QWORD *)(v22 + 632); /*0x10084cd60*/
        ++v24; /*0x10084cd67*/
      }
      while ( (v1 & 7) != v24 ); /*0x10084cd6d*/
      v25 = v1 - v24; /*0x10084cd72*/
      if ( v1 < 8 ) /*0x10084cd79*/
      {
LABEL_45:
        v1 = 0; /*0x10084cdee*/
        v2 = 0; /*0x10084cdf0*/
        if ( *(_WORD *)(v22 + 626) ) /*0x10084cdf3*/
          goto LABEL_41; /*0x10084cdfd*/
        goto LABEL_46; /*0x10084cdfd*/
      }
    }
    else
    {
      v25 = v1; /*0x10084cda3*/
      if ( v1 < 8 ) /*0x10084cdaa*/
        goto LABEL_45; /*0x10084cdaa*/
    }
    do /*0x10084cdec*/
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 632) /*0x10084cde1*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v25 -= 8LL; /*0x10084cde8*/
    }
    while ( v25 ); /*0x10084cdec*/
    goto LABEL_45; /*0x10084cdec*/
  }
  return v1; /*0x10084cecb*/
}