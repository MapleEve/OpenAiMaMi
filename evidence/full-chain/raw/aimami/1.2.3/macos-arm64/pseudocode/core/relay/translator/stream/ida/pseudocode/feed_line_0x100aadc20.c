// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream9feed_line @ 0x100aadc20 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::feed_line::h0833b8a63defd927(
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

  do /*0x100aadcb4*/
  {
    while ( 1 ) /*0x100aadc3c*/
    {
      if ( !a4 ) /*0x100aadc3f*/
        goto LABEL_15; /*0x100aadc3f*/
      v5 = a4; /*0x100aadc45*/
      v6 = a3 + a4; /*0x100aadc48*/
      v7 = *(char *)(v6 - 1); /*0x100aadc4b*/
      if ( v7 < 0 ) /*0x100aadc53*/
        break; /*0x100aadc53*/
      a4 = v6 - 1 - a3; /*0x100aadc33*/
      if ( v7 != 13 ) /*0x100aadc3a*/
        goto LABEL_12; /*0x100aadc3a*/
    }
    v8 = *(_BYTE *)(v6 - 2); /*0x100aadc55*/
    if ( v8 >= -64 ) /*0x100aadc5e*/
    {
      v11 = v6 - 2; /*0x100aadc85*/
      v13 = v8 & 0x1F; /*0x100aadc89*/
    }
    else
    {
      v9 = *(_BYTE *)(v6 - 3); /*0x100aadc60*/
      if ( v9 >= -64 ) /*0x100aadc69*/
      {
        v11 = v6 - 3; /*0x100aadc8f*/
        v12 = v9 & 0xF; /*0x100aadc93*/
      }
      else
      {
        v10 = *(_BYTE *)(v6 - 4); /*0x100aadc6b*/
        v11 = v6 - 4; /*0x100aadc70*/
        v12 = ((v10 & 7) << 6) | v9 & 0x3F; /*0x100aadc80*/
      }
      v13 = (v12 << 6) | v8 & 0x3F; /*0x100aadc9f*/
    }
    a4 = v11 - a3; /*0x100aadcad*/
  }
  while ( ((v13 << 6) | v7 & 0x3F) == 0xD ); /*0x100aadcb4*/
LABEL_12:
  if ( v5 < 5 /*0x100aadcf6*/
    || *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A
    || (v14 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a3 + 5, v5 - 5),
        v15 == 0 || v14 == 0) )
  {
LABEL_15:
    *a1 = 0; /*0x100aadcff*/
    a1[1] = 1; /*0x100aadd06*/
    a1[2] = 0; /*0x100aadd0e*/
    return a1; /*0x100aadd21*/
  }
  if ( v15 != 6 || *(_DWORD *)v14 ^ 0x4E4F445B | *(unsigned __int16 *)(v14 + 4) ^ 0x5D45 ) /*0x100aadd3b*/
  {
    v17[0] = v14; /*0x100aadd44*/
    v17[1] = v15; /*0x100aadd48*/
    v17[2] = 0; /*0x100aadd4c*/
    v17[3] = 0; /*0x100aadd54*/
    v17[4] = v14; /*0x100aadd5c*/
    v17[5] = v15; /*0x100aadd60*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(v18, v17); /*0x100aadd6c*/
    if ( LOBYTE(v18[0]) == 6 ) /*0x100aadd75*/
    {
      *a1 = 0; /*0x100aadd77*/
      a1[1] = 1; /*0x100aadd7e*/
      a1[2] = 0; /*0x100aadd86*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v18); /*0x100aadd92*/
    }
    else
    {
      v19[3] = v18[3]; /*0x100aadda3*/
      v19[2] = v18[2]; /*0x100aaddab*/
      v19[1] = v18[1]; /*0x100aaddb7*/
      v19[0] = v18[0]; /*0x100aaddbb*/
      codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::handle_chunk::h9110063a00f5b0aa( /*0x100aaddc9*/
        a1,
        a2,
        (__int64)v19,
        a5);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v19); /*0x100aaddd2*/
    }
    return a1; /*0x100aadd9a*/
  }
  codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::flush::h3e0622257d8ea8fb(a1, a2); /*0x100aadde5*/
  return a1; /*0x100aadd19*/
}