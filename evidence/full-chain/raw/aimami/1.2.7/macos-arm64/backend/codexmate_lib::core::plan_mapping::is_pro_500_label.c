// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::plan_mapping::is_pro_500_label::hac1045beae85fa41; addr: 0x100a55fd0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
__int64 __fastcall codexmate_lib::core::plan_mapping::is_pro_500_label::hac1045beae85fa41(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-30h]
  __int64 v21; // [rsp+18h] [rbp-28h]

  v2 = a1; /*0x100a55fe2*/
  codexmate_lib::core::plan_mapping::normalize_tokens::hfba83b9dca2a6508(&v19, a1, a2); /*0x100a55fef*/
  v3 = v20; /*0x100a55ff4*/
  v4 = v21; /*0x100a55ff8*/
  v5 = 24 * v21; /*0x100a56004*/
  if ( !v21 ) /*0x100a5600b*/
  {
LABEL_28:
    if ( a2 == 6 ) /*0x100a56156*/
    {
      if ( !(*(_DWORD *)a1 ^ 0x356F7270 | *(unsigned __int16 *)(a1 + 4) ^ 0x3030) ) /*0x100a56195*/
        goto LABEL_38; /*0x100a56195*/
    }
    else if ( a2 == 13 && !(*(_QWORD *)a1 ^ 0x7074706774616863LL | *(_QWORD *)(a1 + 5) ^ 0x78616D6F72707470LL) ) /*0x100a56179*/
    {
      goto LABEL_38; /*0x100a5617c*/
    }
    if ( !v21 ) /*0x100a5619a*/
    {
      v2 = 0; /*0x100a5624d*/
      goto LABEL_55; /*0x100a56250*/
    }
    v14 = 0; /*0x100a561a0*/
    while ( *(_QWORD *)(v20 + v14 + 16) != 6 /*0x100a561d6*/
         || **(_DWORD **)(v20 + v14 + 8) ^ 0x6D6F7270 | *(unsigned __int16 *)(*(_QWORD *)(v20 + v14 + 8) + 4LL) ^ 0x7861 )
    {
      v14 += 24; /*0x100a561b0*/
      if ( v5 == v14 ) /*0x100a561b7*/
      {
        v15 = 0; /*0x100a561e5*/
        while ( *(_QWORD *)(v20 + v15 + 16) != 3 /*0x100a56219*/
             || **(_WORD **)(v20 + v15 + 8) ^ 0x7270 | *(unsigned __int8 *)(*(_QWORD *)(v20 + v15 + 8) + 2LL) ^ 0x6F )
        {
          v15 += 24; /*0x100a561f0*/
          if ( v5 == v15 ) /*0x100a561f7*/
          {
LABEL_50:
            v2 = 0; /*0x100a56252*/
            goto LABEL_51; /*0x100a56252*/
          }
        }
        v16 = 0; /*0x100a5621b*/
        while ( *(_QWORD *)(v20 + v16 + 16) != 3 /*0x100a56249*/
             || **(_WORD **)(v20 + v16 + 8) ^ 0x3035 | *(unsigned __int8 *)(*(_QWORD *)(v20 + v16 + 8) + 2LL) ^ 0x30 )
        {
          v16 += 24; /*0x100a56220*/
          if ( v5 == v16 ) /*0x100a56227*/
            goto LABEL_50; /*0x100a56227*/
        }
        break; /*0x100a56249*/
      }
    }
LABEL_38:
    LOBYTE(v2) = 1; /*0x100a561d8*/
    if ( v21 ) /*0x100a561de*/
    {
LABEL_51:
      v17 = (_QWORD *)(v20 + 8); /*0x100a5625a*/
      do /*0x100a56267*/
      {
        v18 = *(v17 - 1); /*0x100a56269*/
        if ( v18 ) /*0x100a56270*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x100a5627a*/
        v17 += 3; /*0x100a56260*/
        --v4; /*0x100a56264*/
      }
      while ( v4 ); /*0x100a56267*/
    }
LABEL_55:
    v12 = v19; /*0x100a56281*/
    if ( !v19 ) /*0x100a56288*/
      return v2; /*0x100a56288*/
    goto LABEL_26; /*0x100a56288*/
  }
  v6 = 0; /*0x100a56011*/
  while ( *(_QWORD *)(v20 + v6 + 16) != 8 || **(_QWORD **)(v20 + v6 + 8) != 0x7373656E69737562LL ) /*0x100a56039*/
  {
    v6 += 24; /*0x100a56020*/
    if ( v5 == v6 ) /*0x100a56027*/
    {
      v7 = 0; /*0x100a56040*/
      while ( *(_QWORD *)(v20 + v7 + 16) != 10 /*0x100a5607a*/
           || **(_QWORD **)(v20 + v7 + 8) ^ 0x6972707265746E65LL
            | *(unsigned __int16 *)(*(_QWORD *)(v20 + v7 + 8) + 8LL) ^ 0x6573LL )
      {
        v7 += 24; /*0x100a56050*/
        if ( v5 == v7 ) /*0x100a56057*/
        {
          v8 = 0; /*0x100a5607e*/
          while ( *(_QWORD *)(v20 + v8 + 16) != 4 || **(_DWORD **)(v20 + v8 + 8) != 1835099508 ) /*0x100a560ac*/
          {
            v8 += 24; /*0x100a56090*/
            if ( v5 == v8 ) /*0x100a56097*/
            {
              v9 = 0; /*0x100a560b0*/
              while ( *(_QWORD *)(v20 + v9 + 16) != 3 /*0x100a560ed*/
                   || **(_WORD **)(v20 + v9 + 8) ^ 0x6465 | *(unsigned __int8 *)(*(_QWORD *)(v20 + v9 + 8) + 2LL) ^ 0x75 )
              {
                v9 += 24; /*0x100a560c0*/
                if ( v5 == v9 ) /*0x100a560c7*/
                  goto LABEL_28; /*0x100a560c7*/
              }
              goto LABEL_21; /*0x100a560ed*/
            }
          }
          goto LABEL_21; /*0x100a560ac*/
        }
      }
      break; /*0x100a5607a*/
    }
  }
LABEL_21:
  v10 = (_QWORD *)(v20 + 8); /*0x100a560ef*/
  do /*0x100a56107*/
  {
    v11 = *(v10 - 1); /*0x100a56109*/
    if ( v11 ) /*0x100a56110*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v10, v11, 1); /*0x100a5611a*/
    v10 += 3; /*0x100a56100*/
    --v4; /*0x100a56104*/
  }
  while ( v4 ); /*0x100a56107*/
  v12 = v19; /*0x100a56121*/
  v2 = 0; /*0x100a56125*/
  if ( v19 ) /*0x100a5612b*/
LABEL_26:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v12, 8); /*0x100a5612d*/
  return v2; /*0x100a56145*/
}