// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x10062b5e0 depth=0
char __fastcall codexmate_lib::core::relay::translator::clean_tool_schema::ha4eca5c961ffc2e3(_QWORD *a1)
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
  _QWORD v32[4]; // [rsp+8h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-58h]
  unsigned __int64 v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 *v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+48h] [rbp-38h]
  _QWORD *v38; // [rsp+50h] [rbp-30h]

  LODWORD(v1) = *(unsigned __int8 *)a1; /*0x10062b5f1*/
  if ( (_DWORD)v1 == 4 ) /*0x10062b5f7*/
  {
    v15 = a1[3]; /*0x10062b6fb*/
    if ( v15 ) /*0x10062b702*/
    {
      v16 = a1[2]; /*0x10062b708*/
      v17 = 32 * v15; /*0x10062b70c*/
      do /*0x10062b720*/
      {
        LOBYTE(v1) = ((__int64 (*)(void))codexmate_lib::core::relay::translator::clean_tool_schema::ha4eca5c961ffc2e3)(); /*0x10062b714*/
        v16 += 32; /*0x10062b719*/
        v17 -= 32; /*0x10062b71c*/
      }
      while ( v17 ); /*0x10062b720*/
    }
    return v1; /*0x10062b720*/
  }
  if ( (_DWORD)v1 != 5 ) /*0x10062b600*/
    return v1; /*0x10062b600*/
  v2 = a1[1]; /*0x10062b606*/
  if ( !v2 ) /*0x10062b60d*/
    return v1; /*0x10062b60d*/
  v36 = a1 + 1; /*0x10062b617*/
  v38 = a1; /*0x10062b61b*/
  v37 = a1[2]; /*0x10062b623*/
  v3 = v2; /*0x10062b627*/
LABEL_5:
  v4 = v3 + 360; /*0x10062b62a*/
  v5 = *(unsigned __int16 *)(v3 + 626); /*0x10062b631*/
  v34 = v3; /*0x10062b638*/
  v6 = (_QWORD *)(v3 - 8); /*0x10062b63c*/
  v35 = v5; /*0x10062b640*/
  v7 = 3LL * (unsigned int)(8 * v5); /*0x10062b64b*/
  v8 = -1; /*0x10062b64f*/
  do /*0x10062b6b9*/
  {
    if ( !v7 ) /*0x10062b663*/
    {
      v8 = v35; /*0x10062b6d0*/
LABEL_15:
      v14 = v38; /*0x10062b6d4*/
      if ( !v37 ) /*0x10062b6e0*/
        goto LABEL_27; /*0x10062b6e0*/
      --v37; /*0x10062b6e6*/
      v3 = *(_QWORD *)(v34 + 8 * v8 + 632); /*0x10062b6ee*/
      goto LABEL_5; /*0x10062b6f6*/
    }
    v33 = v4 + 24; /*0x10062b669*/
    v9 = *(_QWORD *)(v4 + 16); /*0x10062b671*/
    v10 = v9 - 6; /*0x10062b678*/
    if ( v9 >= 6 ) /*0x10062b681*/
      v9 = 6; /*0x10062b681*/
    v11 = -(__int64)v10; /*0x10062b685*/
    v12 = memcmp(&unk_1012D033E, *(const void **)(v4 + 8), v9); /*0x10062b68f*/
    if ( v12 ) /*0x10062b698*/
      v11 = v12; /*0x10062b698*/
    v13 = (v11 > 0) - (v11 < 0); /*0x10062b6a5*/
    v6 += 4; /*0x10062b6a7*/
    ++v8; /*0x10062b6ab*/
    v7 -= 24; /*0x10062b6ae*/
    v4 = v33; /*0x10062b6b2*/
  }
  while ( v13 == 1 ); /*0x10062b6b9*/
  if ( v13 ) /*0x10062b6c0*/
    goto LABEL_15; /*0x10062b6c0*/
  if ( *((_BYTE *)v6 - 24) != 3 ) /*0x10062b72c*/
  {
    v14 = v38; /*0x10062b764*/
    goto LABEL_27; /*0x10062b764*/
  }
  v18 = *(v6 - 1); /*0x10062b72e*/
  v19 = *v6; /*0x10062b732*/
  if ( *v6 == 13 ) /*0x10062b73a*/
  {
    v14 = v38; /*0x10062b988*/
    if ( *(_QWORD *)v18 ^ 0x656665722D697275LL | *(_QWORD *)(v18 + 5) ^ 0x65636E6572656665LL ) /*0x10062b985*/
      goto LABEL_27; /*0x10062b98c*/
  }
  else
  {
    v14 = v38; /*0x10062b744*/
    if ( v19 != 3 || *(_WORD *)v18 ^ 0x7275 | *(unsigned __int8 *)(v18 + 2) ^ 0x69 ) /*0x10062b75a*/
      goto LABEL_27; /*0x10062b75d*/
  }
  v30 = v36; /*0x10062b9a2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::ha4a32ae9a99cdf0e(v32, v36, &unk_1012D033E, 6u); /*0x10062b9a9*/
  if ( LOBYTE(v32[0]) != 6 ) /*0x10062b9b2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v32); /*0x10062b9b8*/
  v2 = *v30; /*0x10062b9bd*/
LABEL_27:
  LOBYTE(v1) = v2 != 0; /*0x10062b768*/
  v20 = v14[3]; /*0x10062b76e*/
  if ( v2 != 0 && v20 != 0 ) /*0x10062b775*/
  {
    v21 = v2 != 0; /*0x10062b789*/
    v1 = v14[2]; /*0x10062b78d*/
    v22 = 0; /*0x10062b791*/
    while ( v22 || !v21 ) /*0x10062b7d1*/
    {
      if ( !v21 ) /*0x10062b814*/
        core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101537310); /*0x10062b9cc*/
      if ( v1 < *(unsigned __int16 *)(v22 + 626) ) /*0x10062b824*/
      {
LABEL_41:
        v26 = v22; /*0x10062b826*/
        goto LABEL_48; /*0x10062b829*/
      }
      do /*0x10062b8b4*/
      {
LABEL_46:
        v26 = *(_QWORD *)(v22 + 352); /*0x10062b890*/
        if ( !v26 ) /*0x10062b89a*/
          core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015372F8); /*0x10062b9d8*/
        ++v2; /*0x10062b8a0*/
        v1 = *(unsigned __int16 *)(v22 + 624); /*0x10062b8a3*/
        v22 = *(_QWORD *)(v22 + 352); /*0x10062b8aa*/
      }
      while ( (unsigned __int16)v1 >= *(_WORD *)(v26 + 626) ); /*0x10062b8b4*/
LABEL_48:
      if ( v2 ) /*0x10062b8b9*/
      {
        v27 = v26 + 8 * v1 + 640; /*0x10062b8bf*/
        if ( (v2 & 7) != 0 ) /*0x10062b8ce*/
        {
          v28 = 0; /*0x10062b8d4*/
          do /*0x10062b8f0*/
          {
            v22 = *(_QWORD *)v27; /*0x10062b8e0*/
            v27 = *(_QWORD *)v27 + 632LL; /*0x10062b8e3*/
            ++v28; /*0x10062b8ea*/
          }
          while ( (v2 & 7) != v28 ); /*0x10062b8f0*/
          v29 = v2 - v28; /*0x10062b8f5*/
          if ( v2 >= 8 ) /*0x10062b8fc*/
          {
            do /*0x10062b93f*/
            {
LABEL_53:
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 632LL) /*0x10062b900*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              v27 = v22 + 632; /*0x10062b934*/
              v29 -= 8LL; /*0x10062b93b*/
            }
            while ( v29 ); /*0x10062b93f*/
          }
        }
        else
        {
          v29 = v2; /*0x10062b950*/
          if ( v2 >= 8 ) /*0x10062b957*/
            goto LABEL_53; /*0x10062b957*/
        }
        v23 = 0; /*0x10062b941*/
        goto LABEL_30; /*0x10062b944*/
      }
      v23 = v1 + 1; /*0x10062b7a0*/
      v22 = v26; /*0x10062b7a4*/
LABEL_30:
      --v20; /*0x10062b7a7*/
      codexmate_lib::core::relay::translator::clean_tool_schema::ha4eca5c961ffc2e3(32 * v1 + v26); /*0x10062b7b1*/
      v2 = 0; /*0x10062b7b6*/
      v1 = v23; /*0x10062b7bc*/
      if ( !v20 ) /*0x10062b7c2*/
        return v1; /*0x10062b7c2*/
    }
    v21 = 1; /*0x10062b7d3*/
    if ( !v1 ) /*0x10062b7dc*/
    {
      v22 = v2; /*0x10062b82e*/
      goto LABEL_45; /*0x10062b831*/
    }
    v22 = v2; /*0x10062b7e1*/
    if ( (v1 & 7) != 0 ) /*0x10062b7e8*/
    {
      v24 = 0; /*0x10062b7ea*/
      do /*0x10062b7fd*/
      {
        v22 = *(_QWORD *)(v22 + 632); /*0x10062b7f0*/
        ++v24; /*0x10062b7f7*/
      }
      while ( (v1 & 7) != v24 ); /*0x10062b7fd*/
      v25 = v1 - v24; /*0x10062b802*/
      if ( v1 < 8 ) /*0x10062b809*/
      {
LABEL_45:
        v1 = 0; /*0x10062b87e*/
        v2 = 0; /*0x10062b880*/
        if ( *(_WORD *)(v22 + 626) ) /*0x10062b883*/
          goto LABEL_41; /*0x10062b88d*/
        goto LABEL_46; /*0x10062b88d*/
      }
    }
    else
    {
      v25 = v1; /*0x10062b833*/
      if ( v1 < 8 ) /*0x10062b83a*/
        goto LABEL_45; /*0x10062b83a*/
    }
    do /*0x10062b87c*/
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 632) /*0x10062b871*/
                                                                                              + 632LL)
                                                                                  + 632LL)
                                                                      + 632LL)
                                                          + 632LL)
                                              + 632LL)
                                  + 632LL)
                      + 632LL);
      v25 -= 8LL; /*0x10062b878*/
    }
    while ( v25 ); /*0x10062b87c*/
    goto LABEL_45; /*0x10062b87c*/
  }
  return v1; /*0x10062b95b*/
}