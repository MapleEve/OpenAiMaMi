// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::kind::hdee91c13ee03475d; addr: 0x1007f4fb0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:21Z
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::kind::hdee91c13ee03475d(
        __int64 a1,
        const void *a2,
        size_t a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  size_t v9; // rdx
  __int64 v10; // r14
  int v11; // eax
  char v12; // cl
  __int64 v14; // [rsp+10h] [rbp-40h]
  __int64 v15; // [rsp+18h] [rbp-38h]
  __int64 v16; // [rsp+20h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32); /*0x1007f4fc5*/
  if ( !v3 ) /*0x1007f4fcc*/
    return 0; /*0x1007f5099*/
  v16 = *(_QWORD *)(a1 + 40); /*0x1007f4fd9*/
  while ( 2 ) /*0x1007f4fdd*/
  {
    v5 = v3 + 8; /*0x1007f4fdd*/
    v15 = v3; /*0x1007f4fe1*/
    v14 = *(unsigned __int16 *)(v3 + 1066); /*0x1007f4fec*/
    v6 = -1; /*0x1007f4fff*/
    v7 = 0; /*0x1007f5006*/
    do /*0x1007f5055*/
    {
      if ( 9LL * (unsigned int)(8 * v14) == v7 ) /*0x1007f5014*/
      {
        v6 = v14; /*0x1007f5060*/
        goto LABEL_13; /*0x1007f5060*/
      }
      v8 = v5 + 24; /*0x1007f5016*/
      v9 = *(_QWORD *)(v5 + 16); /*0x1007f501e*/
      v10 = a3 - v9; /*0x1007f5025*/
      if ( a3 < v9 ) /*0x1007f5028*/
        v9 = a3; /*0x1007f5028*/
      v11 = memcmp(a2, *(const void **)(v5 + 8), v9); /*0x1007f5030*/
      if ( v11 ) /*0x1007f5039*/
        v10 = v11; /*0x1007f5039*/
      v12 = (v10 > 0) - (v10 < 0); /*0x1007f5046*/
      v7 += 72; /*0x1007f5048*/
      ++v6; /*0x1007f504c*/
      v5 = v8; /*0x1007f504f*/
    }
    while ( v12 == 1 ); /*0x1007f5055*/
    if ( !v12 ) /*0x1007f505c*/
      return *(_QWORD *)(v15 + v7 + 232); /*0x1007f5097*/
LABEL_13:
    if ( v16 ) /*0x1007f506c*/
    {
      --v16; /*0x1007f506e*/
      v3 = *(_QWORD *)(v15 + 8 * v6 + 1072); /*0x1007f5076*/
      continue; /*0x1007f507e*/
    }
    return 0; /*0x1007f509b*/
  }
}