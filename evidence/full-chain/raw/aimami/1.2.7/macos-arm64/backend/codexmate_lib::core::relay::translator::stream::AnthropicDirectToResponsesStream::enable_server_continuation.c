// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::enable_server_continuation::ha88826dd809fd764; addr: 0x1002b16f0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:50Z
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::enable_server_continuation::ha88826dd809fd764(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD v7[6]; // [rsp+0h] [rbp-30h] BYREF

  v2 = 8; /*0x1002b170a*/
  v3 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002b1715*/
                   &anon_934eb766a8cad5eebd2cfa1275fd1b1a_467,
                   8,
                   a2);
  if ( !v3 ) /*0x1002b171d*/
    v3 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002b171f*/
  if ( *(_BYTE *)v3 == 4 ) /*0x1002b1729*/
  {
    v2 = v3[2]; /*0x1002b172b*/
    v4 = v3[3]; /*0x1002b172f*/
  }
  else
  {
    v4 = 0; /*0x1002b1735*/
  }
  codexmate_lib::core::relay::translator::anthropic_search::pending_in_messages::h730577d6f44d3d9d(v7, v2, v4); /*0x1002b173e*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h005977a56810102d(a1 + 696); /*0x1002b174d*/
  *(_QWORD *)(a1 + 712) = v7[2]; /*0x1002b1760*/
  v5 = v7[0]; /*0x1002b1764*/
  *(_QWORD *)(a1 + 704) = v7[1]; /*0x1002b176c*/
  *(_QWORD *)(a1 + 696) = v5; /*0x1002b1770*/
  result = core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..translator..anthropic_message..Message$GT$$GT$::h778c80f6b881ee72(a1 + 368); /*0x1002b177a*/
  *(_QWORD *)(a1 + 368) = 0x8000000000000000LL; /*0x1002b177f*/
  *(_BYTE *)(a1 + 392) = 0; /*0x1002b1786*/
  *(_QWORD *)(a1 + 424) = 0; /*0x1002b178d*/
  *(_BYTE *)(a1 + 512) = 0; /*0x1002b1798*/
  *(_QWORD *)(a1 + 440) = 0; /*0x1002b179f*/
  *(_QWORD *)(a1 + 448) = 0; /*0x1002b17aa*/
  *(_QWORD *)(a1 + 464) = 0; /*0x1002b17b5*/
  *(_QWORD *)(a1 + 472) = 0; /*0x1002b17c0*/
  *(_QWORD *)(a1 + 488) = 0; /*0x1002b17cb*/
  *(_QWORD *)(a1 + 496) = 0; /*0x1002b17d6*/
  *(_BYTE *)(a1 + 781) = 1; /*0x1002b17e1*/
  return result; /*0x1002b17e8*/
}