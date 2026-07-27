// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream9feed_line @ 0x100ac5c10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::feed_line::hf1c9f8d83c5513ae(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        double a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  char v8; // r9
  char v9; // r10
  char v10; // r11
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD v17[6]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v19[6]; // [rsp+50h] [rbp-30h] BYREF

  do /*0x100ac5ca4*/
  {
    while ( 1 ) /*0x100ac5c2c*/
    {
      if ( !a4 ) /*0x100ac5c2f*/
        goto LABEL_15; /*0x100ac5c2f*/
      v5 = a4; /*0x100ac5c35*/
      v6 = a3 + a4; /*0x100ac5c38*/
      v7 = *(char *)(v6 - 1); /*0x100ac5c3b*/
      if ( v7 < 0 ) /*0x100ac5c43*/
        break; /*0x100ac5c43*/
      a4 = v6 - 1 - a3; /*0x100ac5c23*/
      if ( v7 != 13 ) /*0x100ac5c2a*/
        goto LABEL_12; /*0x100ac5c2a*/
    }
    v8 = *(_BYTE *)(v6 - 2); /*0x100ac5c45*/
    if ( v8 >= -64 ) /*0x100ac5c4e*/
    {
      v11 = v6 - 2; /*0x100ac5c75*/
      v13 = v8 & 0x1F; /*0x100ac5c79*/
    }
    else
    {
      v9 = *(_BYTE *)(v6 - 3); /*0x100ac5c50*/
      if ( v9 >= -64 ) /*0x100ac5c59*/
      {
        v11 = v6 - 3; /*0x100ac5c7f*/
        v12 = v9 & 0xF; /*0x100ac5c83*/
      }
      else
      {
        v10 = *(_BYTE *)(v6 - 4); /*0x100ac5c5b*/
        v11 = v6 - 4; /*0x100ac5c60*/
        v12 = ((v10 & 7) << 6) | v9 & 0x3F; /*0x100ac5c70*/
      }
      v13 = (v12 << 6) | v8 & 0x3F; /*0x100ac5c8f*/
    }
    a4 = v11 - a3; /*0x100ac5c9d*/
  }
  while ( ((v13 << 6) | v7 & 0x3F) == 0xD ); /*0x100ac5ca4*/
LABEL_12:
  if ( v5 < 5 /*0x100ac5ce6*/
    || *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A
    || (v14 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a3 + 5, v5 - 5),
        v15 == 0 || v14 == 0) )
  {
LABEL_15:
    *a1 = 0; /*0x100ac5cef*/
    a1[1] = 1; /*0x100ac5cf6*/
    a1[2] = 0; /*0x100ac5cfe*/
    return a1; /*0x100ac5d11*/
  }
  if ( v15 != 6 || *(_DWORD *)v14 ^ 0x4E4F445B | *(unsigned __int16 *)(v14 + 4) ^ 0x5D45 ) /*0x100ac5d2b*/
  {
    v17[0] = v14; /*0x100ac5d34*/
    v17[1] = v15; /*0x100ac5d38*/
    v17[2] = 0; /*0x100ac5d3c*/
    v17[3] = 0; /*0x100ac5d44*/
    v17[4] = v14; /*0x100ac5d4c*/
    v17[5] = v15; /*0x100ac5d50*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(v18, v17); /*0x100ac5d5c*/
    if ( LOBYTE(v18[0]) == 6 ) /*0x100ac5d65*/
    {
      *a1 = 0; /*0x100ac5d67*/
      a1[1] = 1; /*0x100ac5d6e*/
      a1[2] = 0; /*0x100ac5d76*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v18); /*0x100ac5d82*/
    }
    else
    {
      v19[3] = v18[3]; /*0x100ac5d93*/
      v19[2] = v18[2]; /*0x100ac5d9b*/
      v19[1] = v18[1]; /*0x100ac5da7*/
      v19[0] = v18[0]; /*0x100ac5dab*/
      codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::handle_event::he7f3a9221bd43bab( /*0x100ac5db9*/
        a1,
        a2,
        (__int64)v19,
        a5);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v19); /*0x100ac5dc2*/
    }
    return a1; /*0x100ac5d8a*/
  }
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::flush::hbbf48238264a5f19(a1, a2); /*0x100ac5dd5*/
  return a1; /*0x100ac5d09*/
}