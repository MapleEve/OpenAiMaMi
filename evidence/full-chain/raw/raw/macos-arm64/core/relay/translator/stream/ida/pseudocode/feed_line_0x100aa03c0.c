// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream9feed_line @ 0x100aa03c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::feed_line::h9292eaaf05ba8703(
        _QWORD *a1,
        _QWORD *a2,
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

  do /*0x100aa0454*/
  {
    while ( 1 ) /*0x100aa03dc*/
    {
      if ( !a4 ) /*0x100aa03df*/
        goto LABEL_15; /*0x100aa03df*/
      v4 = a4; /*0x100aa03e5*/
      v5 = a3 + a4; /*0x100aa03e8*/
      v6 = *(char *)(v5 - 1); /*0x100aa03eb*/
      if ( v6 < 0 ) /*0x100aa03f3*/
        break; /*0x100aa03f3*/
      a4 = v5 - 1 - a3; /*0x100aa03d3*/
      if ( v6 != 13 ) /*0x100aa03da*/
        goto LABEL_12; /*0x100aa03da*/
    }
    v7 = *(_BYTE *)(v5 - 2); /*0x100aa03f5*/
    if ( v7 >= -64 ) /*0x100aa03fe*/
    {
      v10 = v5 - 2; /*0x100aa0425*/
      v12 = v7 & 0x1F; /*0x100aa0429*/
    }
    else
    {
      v8 = *(_BYTE *)(v5 - 3); /*0x100aa0400*/
      if ( v8 >= -64 ) /*0x100aa0409*/
      {
        v10 = v5 - 3; /*0x100aa042f*/
        v11 = v8 & 0xF; /*0x100aa0433*/
      }
      else
      {
        v9 = *(_BYTE *)(v5 - 4); /*0x100aa040b*/
        v10 = v5 - 4; /*0x100aa0410*/
        v11 = ((v9 & 7) << 6) | v8 & 0x3F; /*0x100aa0420*/
      }
      v12 = (v11 << 6) | v7 & 0x3F; /*0x100aa043f*/
    }
    a4 = v10 - a3; /*0x100aa044d*/
  }
  while ( ((v12 << 6) | v6 & 0x3F) == 0xD ); /*0x100aa0454*/
LABEL_12:
  if ( v4 < 5 /*0x100aa0496*/
    || *(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A
    || (v13 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a3 + 5, v4 - 5),
        v14 == 0 || v13 == 0) )
  {
LABEL_15:
    *a1 = 0; /*0x100aa049f*/
    a1[1] = 1; /*0x100aa04a6*/
    a1[2] = 0; /*0x100aa04ae*/
    return a1; /*0x100aa04c1*/
  }
  if ( v14 != 6 || *(_DWORD *)v13 ^ 0x4E4F445B | *(unsigned __int16 *)(v13 + 4) ^ 0x5D45 ) /*0x100aa04db*/
  {
    v16[0] = v13; /*0x100aa04e4*/
    v16[1] = v14; /*0x100aa04e8*/
    v16[2] = 0; /*0x100aa04ec*/
    v16[3] = 0; /*0x100aa04f4*/
    v16[4] = v13; /*0x100aa04fc*/
    v16[5] = v14; /*0x100aa0500*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(v17, v16); /*0x100aa050c*/
    if ( LOBYTE(v17[0]) == 6 ) /*0x100aa0515*/
    {
      *a1 = 0; /*0x100aa0517*/
      a1[1] = 1; /*0x100aa051e*/
      a1[2] = 0; /*0x100aa0526*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v17); /*0x100aa0532*/
    }
    else
    {
      v18[3] = v17[3]; /*0x100aa0543*/
      v18[2] = v17[2]; /*0x100aa054b*/
      v18[1] = v17[1]; /*0x100aa0557*/
      v18[0] = v17[0]; /*0x100aa055b*/
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_chunk::hd08010e8614ea2dc( /*0x100aa0569*/
        a1,
        a2,
        (__int64)v18);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x100aa0572*/
    }
    return a1; /*0x100aa053a*/
  }
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush::h38a984e37508801f(a1, (__int64)a2); /*0x100aa0585*/
  return a1; /*0x100aa04b9*/
}