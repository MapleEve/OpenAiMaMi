// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x1001ac670 d=1
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h034f66559c0783cb(
        size_t *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char *a5)
{
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v13; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A0h]
  __int64 v15; // [rsp+18h] [rbp-98h]
  __int64 *v16; // [rsp+28h] [rbp-88h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+30h] [rbp-80h]
  __int64 **v18; // [rsp+38h] [rbp-78h]
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-70h]
  __int64 *v20; // [rsp+60h] [rbp-50h] BYREF
  __int64 v21; // [rsp+68h] [rbp-48h] BYREF
  __int64 *v22; // [rsp+70h] [rbp-40h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-38h]
  __int64 **v24; // [rsp+80h] [rbp-30h]

  v8 = *a5; /*0x1001ac690*/
  switch ( *a5 ) /*0x1001ac6a6*/
  {
    case 0: /*0x1001ac6a6*/
      goto LABEL_9;
    case 1: /*0x1001ac6a6*/
    case 2: /*0x1001ac6a6*/
      v24 = *((__int64 ***)a5 + 3); /*0x1001ac6ac*/
      v23 = *((__int64 (__fastcall **)())a5 + 2); /*0x1001ac6b4*/
      v9 = *(_QWORD *)a5; /*0x1001ac6b8*/
      v22 = *((__int64 **)a5 + 1); /*0x1001ac6bf*/
      v21 = v9; /*0x1001ac6c3*/
      v10 = *a2 + 1; /*0x1001ac6cb*/
      *a2 = v10; /*0x1001ac6ce*/
      if ( (_BYTE)v9 != 5 ) /*0x1001ac6d4*/
        break; /*0x1001ac6d4*/
      goto LABEL_12; /*0x1001ac6d4*/
    case 3: /*0x1001ac6a6*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1001ac6ea*/
        (size_t *)&v22,
        (__int64)(a5 + 8));
      goto LABEL_9; /*0x1001ac6ef*/
    case 4: /*0x1001ac6a6*/
      _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd45745d35ed7952d( /*0x1001ac723*/
        &v22,
        *((_QWORD *)a5 + 2),
        *((_QWORD *)a5 + 3));
LABEL_9:
      LOBYTE(v21) = v8; /*0x1001ac728*/
      ++*a2; /*0x1001ac72c*/
      break; /*0x1001ac730*/
    case 5: /*0x1001ac6a6*/
      if ( *((_QWORD *)a5 + 3) ) /*0x1001ac6f1*/
      {
        v11 = *((_QWORD *)a5 + 1); /*0x1001ac6f8*/
        if ( !v11 ) /*0x1001ac6ff*/
          core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_658); /*0x1001ac834*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001ac710*/
          (size_t *)&v16,
          v11,
          *((_QWORD *)a5 + 2));
      }
      else
      {
        v16 = nullptr; /*0x1001ac735*/
        v18 = nullptr; /*0x1001ac740*/
      }
      v24 = v18; /*0x1001ac74c*/
      v23 = v17; /*0x1001ac75b*/
      v22 = v16; /*0x1001ac75f*/
      LOBYTE(v21) = 5; /*0x1001ac763*/
      v10 = *a2 + 1; /*0x1001ac76b*/
      *a2 = v10; /*0x1001ac76e*/
LABEL_12:
      serde_json::map::Map$LT$alloc..string..String$C$serde_json..value..Value$GT$::entry::h23f83060cf843b6c( /*0x1001ac772*/
        &v16,
        &v22,
        &unk_10125BA8A,
        15);
      LOBYTE(v13) = 2; /*0x1001ac78e*/
      v14 = 0; /*0x1001ac795*/
      v15 = v10; /*0x1001ac7a0*/
      serde_json::map::Entry::or_insert::h6943c3d5850f40d0(&v16, &v13); /*0x1001ac7b5*/
      break; /*0x1001ac7b5*/
    case 6: /*0x1001ac6a6*/
      JUMPOUT(0x1005AE768LL); /*0x1005ae768*/
  }
  v13 = a3; /*0x1001ac7ba*/
  v14 = a4; /*0x1001ac7c1*/
  v20 = &v21; /*0x1001ac7cc*/
  v16 = &v13; /*0x1001ac7d7*/
  v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001ac7e5*/
  v18 = &v20; /*0x1001ac7ed*/
  v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x1001ac7f8*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    a1,
    (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
    (unsigned __int64)&v16);
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v21); /*0x1001ac81b*/
}