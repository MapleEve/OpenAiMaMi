// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::exposed_name::hb4103118bc1bdfc6; addr: 0x1007f4850; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:21Z
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::exposed_name::hb4103118bc1bdfc6(
        _QWORD *a1,
        unsigned __int8 *a2,
        size_t a3,
        const void *a4,
        size_t a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  bool v7; // cl
  bool v8; // dl
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int8 *v24; // rsi
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v30; // [rsp+10h] [rbp-50h]
  size_t v31; // [rsp+18h] [rbp-48h]
  bool v34; // [rsp+37h] [rbp-29h]

  v5 = a1[4]; /*0x1007f4865*/
  v6 = a1[6]; /*0x1007f4869*/
  v7 = v5 != 0; /*0x1007f4870*/
  v8 = a3 == 0; /*0x1007f4885*/
  if ( v5 == 0 || v6 == 0 ) /*0x1007f488b*/
    return 0; /*0x1007f4c0e*/
  v34 = v8 || a2 == nullptr; /*0x1007f489f*/
  v9 = a1[5]; /*0x1007f48a3*/
  v10 = 0; /*0x1007f48a7*/
  v31 = a5; /*0x1007f48aa*/
  do /*0x1007f48ca*/
  {
    if ( !v7 ) /*0x1007f48d3*/
      core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_4); /*0x1007f4c36*/
    if ( v10 ) /*0x1007f48dc*/
    {
      if ( v9 < *(unsigned __int16 *)(v10 + 1066) ) /*0x1007f48ea*/
        goto LABEL_8; /*0x1007f48ea*/
      goto LABEL_19; /*0x1007f48ea*/
    }
    if ( !v9 ) /*0x1007f4903*/
    {
      v10 = v5; /*0x1007f493e*/
      goto LABEL_18; /*0x1007f4941*/
    }
    v10 = v5; /*0x1007f4908*/
    if ( (v9 & 7) == 0 ) /*0x1007f490f*/
    {
      v14 = v9; /*0x1007f4943*/
      if ( v9 < 8 ) /*0x1007f494a*/
        goto LABEL_18; /*0x1007f494a*/
      do /*0x1007f498d*/
      {
LABEL_17:
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1072) /*0x1007f4950*/
                                                                                                + 1072LL)
                                                                                    + 1072LL)
                                                                        + 1072LL)
                                                            + 1072LL)
                                                + 1072LL)
                                    + 1072LL)
                        + 1072LL);
        v14 -= 8LL; /*0x1007f4989*/
      }
      while ( v14 ); /*0x1007f498d*/
      goto LABEL_18; /*0x1007f498d*/
    }
    v13 = 0; /*0x1007f4911*/
    do /*0x1007f492e*/
    {
      v10 = *(_QWORD *)(v10 + 1072); /*0x1007f4920*/
      ++v13; /*0x1007f4928*/
    }
    while ( (v9 & 7) != v13 ); /*0x1007f492e*/
    v14 = v9 - v13; /*0x1007f4933*/
    if ( v9 >= 8 ) /*0x1007f493a*/
      goto LABEL_17; /*0x1007f493a*/
LABEL_18:
    v5 = 0; /*0x1007f498f*/
    v9 = 0; /*0x1007f4991*/
    if ( *(_WORD *)(v10 + 1066) ) /*0x1007f4994*/
    {
LABEL_8:
      v11 = v10; /*0x1007f48f0*/
      v12 = v9; /*0x1007f48f3*/
      goto LABEL_21; /*0x1007f48f6*/
    }
    do /*0x1007f49d4*/
    {
LABEL_19:
      v11 = *(_QWORD *)v10; /*0x1007f49b0*/
      if ( !*(_QWORD *)v10 ) /*0x1007f49b7*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745); /*0x1007f4c28*/
      ++v5; /*0x1007f49bd*/
      v12 = *(unsigned __int16 *)(v10 + 1064); /*0x1007f49c0*/
      v10 = *(_QWORD *)v10; /*0x1007f49c9*/
    }
    while ( (unsigned __int16)v12 >= *(_WORD *)(v11 + 1066) ); /*0x1007f49d4*/
LABEL_21:
    if ( v5 ) /*0x1007f49d9*/
    {
      v15 = v11 + 8 * v12 + 1080; /*0x1007f49df*/
      if ( (v5 & 7) != 0 ) /*0x1007f49ee*/
      {
        v16 = 0; /*0x1007f49f4*/
        do /*0x1007f4a11*/
        {
          v10 = *(_QWORD *)v15; /*0x1007f4a00*/
          v15 = *(_QWORD *)v15 + 1072LL; /*0x1007f4a03*/
          ++v16; /*0x1007f4a0b*/
        }
        while ( (v5 & 7) != v16 ); /*0x1007f4a11*/
        v17 = v5 - v16; /*0x1007f4a16*/
        if ( v5 < 8 ) /*0x1007f4a1d*/
        {
LABEL_27:
          v9 = 0; /*0x1007f4a62*/
          v18 = v11 + 72 * v12 + 272; /*0x1007f4a69*/
          if ( *(_QWORD *)(v11 + 72 * v12 + 312) != 11 ) /*0x1007f4a7a*/
            goto LABEL_31; /*0x1007f4a7a*/
          goto LABEL_30; /*0x1007f4a7a*/
        }
      }
      else
      {
        v17 = v5; /*0x1007f4b20*/
        if ( v5 < 8 ) /*0x1007f4b27*/
          goto LABEL_27; /*0x1007f4b27*/
      }
      do /*0x1007f4a60*/
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 1072LL) /*0x1007f4a4d*/
                                                                                    + 1072LL)
                                                                        + 1072LL)
                                                            + 1072LL)
                                                + 1072LL)
                                    + 1072LL)
                        + 1072LL);
        v15 = v10 + 1072; /*0x1007f4a54*/
        v17 -= 8LL; /*0x1007f4a5c*/
      }
      while ( v17 ); /*0x1007f4a60*/
      goto LABEL_27; /*0x1007f4a60*/
    }
    v9 = v12 + 1; /*0x1007f4a80*/
    v10 = v11; /*0x1007f4a84*/
    v18 = v11 + 72 * v12 + 272; /*0x1007f4a8b*/
    if ( *(_QWORD *)(v11 + 72 * v12 + 312) != 11 ) /*0x1007f4a9c*/
      goto LABEL_31; /*0x1007f4a9c*/
LABEL_30:
    if ( !(**(_QWORD **)(v18 + 32) ^ 0x6165735F6C6F6F74LL /*0x1007f4ac6*/
         | *(_QWORD *)(*(_QWORD *)(v18 + 32) + 3LL) ^ 0x6863726165735F6CLL) )
      goto LABEL_4; /*0x1007f4ac6*/
LABEL_31:
    if ( *(_QWORD *)(v18 + 16) != a5 ) /*0x1007f4ad0*/
      goto LABEL_4; /*0x1007f4ad0*/
    v30 = v9; /*0x1007f4ae1*/
    v19 = memcmp(*(const void **)(v18 + 8), a4, a5); /*0x1007f4ae5*/
    v9 = v30; /*0x1007f4aea*/
    a5 = v31; /*0x1007f4aee*/
    if ( v19 ) /*0x1007f4af4*/
      goto LABEL_4; /*0x1007f4af4*/
    v20 = *(_QWORD *)(v18 + 64); /*0x1007f4b03*/
    if ( __OFSUB__(0, *(_QWORD *)(v18 + 48)) || v20 == 0 ) /*0x1007f4b0a*/
    {
      if ( v34 ) /*0x1007f4b15*/
        return *(_QWORD *)(v11 + 24 * v12 + 16); /*0x1007f4b15*/
      v21 = 0; /*0x1007f4b1b*/
    }
    else
    {
      v21 = *(_QWORD *)(v18 + 56); /*0x1007f4b32*/
      if ( v20 == 9 ) /*0x1007f4b3a*/
      {
        v22 = _byteswap_uint64(*(_QWORD *)v21); /*0x1007f4b3f*/
        if ( v22 == 0x66756E6374696F6ELL ) /*0x1007f4b4f*/
          v23 = *(unsigned __int8 *)(v21 + 8) - 115; /*0x1007f4b55*/
        else
          v23 = 2 * (v22 >= 0x66756E6374696F6ELL) - 1; /*0x1007f4b60*/
        if ( !v23 ) /*0x1007f4b6b*/
          v21 = 0; /*0x1007f4b6b*/
        v20 = 9; /*0x1007f4b6f*/
      }
      if ( v34 ) /*0x1007f4b78*/
      {
        if ( !v21 ) /*0x1007f4b7d*/
          return *(_QWORD *)(v11 + 24 * v12 + 16); /*0x1007f4b7d*/
        goto LABEL_4; /*0x1007f4b7d*/
      }
    }
    v24 = a2; /*0x1007f4b85*/
    if ( a3 == 9 ) /*0x1007f4b8e*/
    {
      v24 = a2; /*0x1007f4b90*/
      v25 = _byteswap_uint64(*(_QWORD *)a2); /*0x1007f4b97*/
      if ( v25 == 0x66756E6374696F6ELL ) /*0x1007f4ba7*/
        v26 = a2[8] - 115; /*0x1007f4bad*/
      else
        v26 = 2 * (v25 >= 0x66756E6374696F6ELL) - 1; /*0x1007f4bb8*/
      if ( !v26 ) /*0x1007f4bc3*/
        v24 = nullptr; /*0x1007f4bc3*/
    }
    if ( v21 ) /*0x1007f4bca*/
    {
      if ( v24 ) /*0x1007f4bd3*/
      {
        if ( v20 == a3 ) /*0x1007f4bdd*/
        {
          v27 = memcmp((const void *)v21, v24, a3); /*0x1007f4be7*/
          v9 = v30; /*0x1007f4bec*/
          a5 = v31; /*0x1007f4bf0*/
          if ( !v27 ) /*0x1007f4bf6*/
            return *(_QWORD *)(v11 + 24 * v12 + 16); /*0x1007f4c0a*/
        }
      }
    }
    else if ( !v24 ) /*0x1007f48b3*/
    {
      return *(_QWORD *)(v11 + 24 * v12 + 16); /*0x1007f48b3*/
    }
LABEL_4:
    v7 = 1; /*0x1007f48c0*/
    v5 = 0; /*0x1007f48c2*/
    --v6; /*0x1007f48c7*/
  }
  while ( v6 ); /*0x1007f48ca*/
  return 0; /*0x1007f4c12*/
}