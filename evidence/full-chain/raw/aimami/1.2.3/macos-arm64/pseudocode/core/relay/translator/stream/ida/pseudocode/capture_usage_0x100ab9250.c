// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream13capture_usage @ 0x100ab9250 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::capture_usage::h62f6005f4fe8946b(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BOOL8 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  _BOOL8 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BOOL8 v14; // rax
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-30h]

  v18 = v2; /*0x100ab925d*/
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ab9273*/
         "input_tokensoutput_tokensreasoning_output_tokenstotal_tokens",
         12,
         a2);
  if ( !v5 || *(_BYTE *)v5 != 2 ) /*0x100ab9280*/
    goto LABEL_6; /*0x100ab9280*/
  v6 = *(_QWORD *)(v5 + 8); /*0x100ab9282*/
  if ( !v6 ) /*0x100ab9289*/
  {
    v18 = *(_QWORD *)(v5 + 16); /*0x100ab93b2*/
    v7 = v18 >= 0; /*0x100ab93b9*/
    goto LABEL_7; /*0x100ab93bd*/
  }
  if ( (_DWORD)v6 == 1 ) /*0x100ab9292*/
  {
    v18 = *(_QWORD *)(v5 + 16); /*0x100ab9298*/
    v7 = 1; /*0x100ab929c*/
  }
  else
  {
LABEL_6:
    v7 = 0; /*0x100ab92a4*/
  }
LABEL_7:
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ab92a7*/
         "cache_read_input_tokenscache_creation_input_tokens",
         23,
         a2);
  if ( v8 && *(_BYTE *)v8 == 2 && (v9 = *(_QWORD *)(v8 + 8), v9 != 2) ) /*0x100ab92cd*/
  {
    v3 = *(_QWORD *)(v8 + 16); /*0x100ab92d8*/
    v10 = (_DWORD)v9 == 1 || v3 >= 0; /*0x100ab92dc*/
  }
  else
  {
    v10 = 0; /*0x100ab92e4*/
  }
  v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ab92f6*/
          "cache_creation_input_tokens",
          27,
          a2);
  if ( v11 ) /*0x100ab92fe*/
  {
    v13 = v18; /*0x100ab9303*/
    if ( *(_BYTE *)v11 != 2 || (v12 = *(_QWORD *)(v11 + 8), v12 == 2) ) /*0x100ab9311*/
    {
      v14 = 0; /*0x100ab9332*/
      if ( !v7 && !v10 ) /*0x100ab933a*/
        goto LABEL_28; /*0x100ab933d*/
    }
    else if ( (_DWORD)v12 == 1 ) /*0x100ab9316*/
    {
      v12 = *(_QWORD *)(v11 + 16); /*0x100ab931c*/
      v14 = 1; /*0x100ab9320*/
    }
    else
    {
      v12 = *(_QWORD *)(v11 + 16); /*0x100ab9405*/
      v14 = v12 >= 0; /*0x100ab940f*/
      if ( !v14 && !v7 && !v10 ) /*0x100ab9416*/
        goto LABEL_28; /*0x100ab941c*/
    }
  }
  else
  {
    v14 = 0; /*0x100ab9341*/
    v13 = v18; /*0x100ab9343*/
    if ( !v7 && !v10 ) /*0x100ab934d*/
      goto LABEL_28; /*0x100ab9350*/
  }
  if ( !v7 ) /*0x100ab9355*/
    v13 = 0; /*0x100ab9355*/
  if ( !v10 ) /*0x100ab935c*/
    v3 = 0; /*0x100ab935c*/
  v15 = v13 + v3; /*0x100ab9360*/
  if ( !v14 ) /*0x100ab9366*/
    v12 = 0; /*0x100ab9366*/
  *(_QWORD *)(a1 + 336) = v15 + v12; /*0x100ab936d*/
  *(_BYTE *)(a1 + 366) = 1; /*0x100ab9374*/
LABEL_28:
  result = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ab937c*/
             "output_tokensreasoning_output_tokenstotal_tokens",
             13,
             a2);
  if ( result && *(_BYTE *)result == 2 ) /*0x100ab9398*/
  {
    v17 = *(_QWORD *)(result + 8); /*0x100ab939a*/
    if ( v17 ) /*0x100ab93a1*/
    {
      if ( (_DWORD)v17 == 2 ) /*0x100ab93a6*/
        return result; /*0x100ab93a6*/
      result = *(_QWORD *)(result + 16); /*0x100ab93a8*/
    }
    else
    {
      result = *(_QWORD *)(result + 16); /*0x100ab93c2*/
      if ( result < 0 ) /*0x100ab93c9*/
        return result; /*0x100ab93c9*/
    }
    if ( result >= *(_QWORD *)(a1 + 344) ) /*0x100ab93d2*/
      *(_QWORD *)(a1 + 344) = result; /*0x100ab93d4*/
    *(_BYTE *)(a1 + 366) = 1; /*0x100ab93db*/
  }
  return result; /*0x100ab93e7*/
}