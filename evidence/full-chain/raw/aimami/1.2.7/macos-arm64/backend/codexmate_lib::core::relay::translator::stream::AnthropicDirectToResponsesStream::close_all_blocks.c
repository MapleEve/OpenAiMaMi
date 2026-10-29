// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::hc2c7775ec3dd9f5d; addr: 0x1002a8460; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:46Z
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::hc2c7775ec3dd9f5d(
        __int64 *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v17; // [rsp+8h] [rbp-1A8h] BYREF
  _BYTE v18[120]; // [rsp+10h] [rbp-1A0h] BYREF
  __int64 v19; // [rsp+88h] [rbp-128h] BYREF
  __int64 v20; // [rsp+98h] [rbp-118h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-110h] BYREF
  _QWORD v22[16]; // [rsp+A8h] [rbp-108h] BYREF
  _QWORD v23[9]; // [rsp+128h] [rbp-88h] BYREF
  _QWORD *v24; // [rsp+170h] [rbp-40h]
  __int64 v25; // [rsp+178h] [rbp-38h]
  void *v26; // [rsp+180h] [rbp-30h]

  v24 = a4; /*0x1002a8474*/
  v25 = a3; /*0x1002a8478*/
  v26 = a2; /*0x1002a847c*/
  v4 = a1[20]; /*0x1002a848d*/
  a1[20] = 0x8000000000000000LL; /*0x1002a8494*/
  if ( !__OFSUB__(-v4, 1) ) /*0x1002a84a1*/
  {
    qmemcpy(&v22[1], a1 + 21, 0x70u); /*0x1002a84b7*/
    v22[0] = v4; /*0x1002a84ba*/
    v21 = 0x8000000000000001LL; /*0x1002a84ce*/
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_block::hbeceaa9a3c767f00( /*0x1002a84eb*/
      a1,
      (__int64)&v21,
      (__int64)v26,
      v25,
      v24);
  }
  v5 = a1[81]; /*0x1002a84f0*/
  v6 = a1[82]; /*0x1002a84f8*/
  a1[81] = 0; /*0x1002a8500*/
  v7 = v5; /*0x1002a850c*/
  if ( v5 ) /*0x1002a8512*/
    v7 = a1[83]; /*0x1002a8514*/
  a1[83] = 0; /*0x1002a851c*/
  v23[0] = v5 != 0; /*0x1002a8530*/
  v23[1] = 0; /*0x1002a8537*/
  v23[2] = v5; /*0x1002a853f*/
  v23[3] = v6; /*0x1002a8543*/
  v23[4] = v23[0]; /*0x1002a8547*/
  v23[5] = 0; /*0x1002a854b*/
  v23[6] = v5; /*0x1002a8553*/
  v23[7] = v6; /*0x1002a8557*/
  v23[8] = v7; /*0x1002a855b*/
  while ( 1 ) /*0x1002a8596*/
  {
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hb4a36b9bb88efd8c(&v19, v23); /*0x1002a8596*/
    if ( !v19 ) /*0x1002a85a5*/
      break; /*0x1002a85a5*/
    v8 = *(_QWORD *)(v19 + 8 * v20 + 1416); /*0x1002a85ae*/
    qmemcpy(v22, (const void *)(v19 + (v20 << 7)), sizeof(v22)); /*0x1002a85c5*/
    v21 = v8; /*0x1002a85c8*/
    if ( v22[0] == 0x8000000000000002LL ) /*0x1002a85d6*/
      break; /*0x1002a85d6*/
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_block::hbeceaa9a3c767f00( /*0x1002a85ea*/
      a1,
      (__int64)v22,
      (__int64)v26,
      v25,
      v24);
  }
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hb4a36b9bb88efd8c(&v21, v23); /*0x1002a85ff*/
  for ( i = v21; v21; i = v21 ) /*0x1002a860e*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..AnthropicBlockState$GT$::h562a14087dda709b(i + (v22[1] << 7)); /*0x1002a862e*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hb4a36b9bb88efd8c(&v21, v23); /*0x1002a8639*/
  }
  v10 = a1[14]; /*0x1002a864a*/
  v11 = a1[15]; /*0x1002a864f*/
  v12 = a1[16]; /*0x1002a8654*/
  a1[14] = 0; /*0x1002a865c*/
  a1[15] = 8; /*0x1002a8665*/
  a1[16] = 0; /*0x1002a866e*/
  v13 = v11 + (v12 << 7); /*0x1002a8681*/
  v21 = v11; /*0x1002a8684*/
  v22[0] = v11; /*0x1002a868b*/
  v22[1] = v10; /*0x1002a8692*/
  v22[2] = v13; /*0x1002a8699*/
  if ( v12 ) /*0x1002a86a3*/
  {
    v14 = v11 + 128; /*0x1002a86a5*/
    while ( *(_QWORD *)(v14 - 128) != 0x8000000000000000LL ) /*0x1002a86c1*/
    {
      v15 = v14 - 128; /*0x1002a86c3*/
      v17 = *(_QWORD *)(v14 - 128); /*0x1002a86c7*/
      qmemcpy(v18, (const void *)(v14 - 128 + 8), sizeof(v18)); /*0x1002a86de*/
      codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_tool_block::h2083c6cd3eb6d7aa( /*0x1002a86f3*/
        (__int64)a1,
        (__int64)&v17,
        v26,
        v25,
        v24);
      v14 += 128; /*0x1002a86f8*/
      if ( v15 + 128 == v13 ) /*0x1002a8703*/
      {
        v14 = v13; /*0x1002a8705*/
        break; /*0x1002a8705*/
      }
    }
    v22[0] = v14; /*0x1002a8708*/
  }
  return _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9aacb9c674dbdc39(&v21); /*0x1002a871b*/
}