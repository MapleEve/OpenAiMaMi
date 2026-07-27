// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream9feed_line @ 0x100aa5bf0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::feed_line::hba4c63216357a99f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  char v7; // r9
  char v8; // r10
  char v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD v16[6]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[6]; // [rsp+50h] [rbp-30h] BYREF

  do /*0x100aa5c84*/
  {
    while ( 1 ) /*0x100aa5c0c*/
    {
      if ( !a4 ) /*0x100aa5c0f*/
        goto LABEL_15; /*0x100aa5c0f*/
      v4 = a4; /*0x100aa5c15*/
      v5 = a3 + a4; /*0x100aa5c18*/
      v6 = *(char *)(v5 - 1); /*0x100aa5c1b*/
      if ( v6 < 0 ) /*0x100aa5c23*/
        break; /*0x100aa5c23*/
      a4 = v5 - 1 - a3; /*0x100aa5c03*/
      if ( v6 != 13 ) /*0x100aa5c0a*/
        goto LABEL_12; /*0x100aa5c0a*/
    }
    v7 = *(_BYTE *)(v5 - 2); /*0x100aa5c25*/
    if ( v7 >= -64 ) /*0x100aa5c2e*/
    {
      v10 = v5 - 2; /*0x100aa5c55*/
      v12 = v7 & 0x1F; /*0x100aa5c59*/
    }
    else
    {
      v8 = *(_BYTE *)(v5 - 3); /*0x100aa5c30*/
      if ( v8 >= -64 ) /*0x100aa5c39*/
      {
        v10 = v5 - 3; /*0x100aa5c5f*/
        v11 = v8 & 0xF; /*0x100aa5c63*/
      }
      else
      {
        v9 = *(_BYTE *)(v5 - 4); /*0x100aa5c3b*/
        v10 = v5 - 4; /*0x100aa5c40*/
        v11 = ((v9 & 7) << 6) | v8 & 0x3F; /*0x100aa5c50*/
      }
      v12 = (v11 << 6) | v7 & 0x3F; /*0x100aa5c6f*/
    }
    a4 = v10 - a3; /*0x100aa5c7d*/
  }
  while ( ((v12 << 6) | v6 & 0x3F) == 0xD ); /*0x100aa5c84*/
LABEL_12:
  if ( v4 < 5 /*0x100aa5cc6*/
    || *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A
    || (v13 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a3 + 5, v4 - 5),
        v14 == 0 || v13 == 0) )
  {
LABEL_15:
    *a1 = 0; /*0x100aa5ccf*/
    a1[1] = 1; /*0x100aa5cd6*/
    a1[2] = 0; /*0x100aa5cde*/
    return a1; /*0x100aa5cf1*/
  }
  if ( v14 != 6 || *(_DWORD *)v13 ^ 0x4E4F445B | *(unsigned __int16 *)(v13 + 4) ^ 0x5D45 ) /*0x100aa5d0b*/
  {
    v16[0] = v13; /*0x100aa5d14*/
    v16[1] = v14; /*0x100aa5d18*/
    v16[2] = 0; /*0x100aa5d1c*/
    v16[3] = 0; /*0x100aa5d24*/
    v16[4] = v13; /*0x100aa5d2c*/
    v16[5] = v14; /*0x100aa5d30*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(v17, v16); /*0x100aa5d3c*/
    if ( LOBYTE(v17[0]) == 6 ) /*0x100aa5d45*/
    {
      *a1 = 0; /*0x100aa5d47*/
      a1[1] = 1; /*0x100aa5d4e*/
      a1[2] = 0; /*0x100aa5d56*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v17); /*0x100aa5d62*/
    }
    else
    {
      v18[3] = v17[3]; /*0x100aa5d73*/
      v18[2] = v17[2]; /*0x100aa5d7b*/
      v18[1] = v17[1]; /*0x100aa5d87*/
      v18[0] = v17[0]; /*0x100aa5d8b*/
      codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::handle_event::h97d224acc2bdbdf3( /*0x100aa5d99*/
        a1,
        a2,
        (__int64)v18);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x100aa5da2*/
    }
    return a1; /*0x100aa5d6a*/
  }
  codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::flush::hd0bb8415045171e1(a1, a2); /*0x100aa5db5*/
  return a1; /*0x100aa5ce9*/
}