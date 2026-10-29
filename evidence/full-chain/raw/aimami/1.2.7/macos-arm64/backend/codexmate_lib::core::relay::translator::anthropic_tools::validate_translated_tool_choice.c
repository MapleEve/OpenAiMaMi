// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::validate_translated_tool_choice::hfff94abb11f56e77; addr: 0x1007f7040; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:23Z
void *__fastcall codexmate_lib::core::relay::translator::anthropic_tools::validate_translated_tool_choice::hfff94abb11f56e77(
        __int64 a1)
{
  void *v1; // rax
  _QWORD *v2; // rax
  unsigned __int8 *v3; // r14
  __int64 v4; // r15
  size_t v5; // rax
  _QWORD *v6; // r12
  char *v7; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r15
  _BYTE *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-108h] BYREF
  char *v16; // [rsp+10h] [rbp-100h]
  __int64 v17; // [rsp+18h] [rbp-F8h]
  __int64 v18; // [rsp+20h] [rbp-F0h]
  __int64 v19; // [rsp+28h] [rbp-E8h]
  _QWORD v20[6]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v21[6]; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v22[6]; // [rsp+98h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+C8h] [rbp-48h] BYREF
  size_t __n; // [rsp+D8h] [rbp-38h]
  char v25; // [rsp+E7h] [rbp-29h]

  v1 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f7066*/
                 &anon_5fc5982723cbea77922f0a3a965b6f67_271,
                 11,
                 a1);
  if ( !v1 ) /*0x1007f7075*/
    v1 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f7075*/
  v2 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f7088*/
                   &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                   4,
                   v1);
  if ( !v2 ) /*0x1007f7090*/
    v2 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f7090*/
  if ( *(_BYTE *)v2 != 3 ) /*0x1007f7097*/
    return nullptr; /*0x1007f7097*/
  v3 = (unsigned __int8 *)v2[2]; /*0x1007f709d*/
  v4 = v2[3]; /*0x1007f70a1*/
  if ( v4 == 4 ) /*0x1007f70a9*/
  {
    if ( *(_DWORD *)v3 != 1819242356 ) /*0x1007f70b2*/
      return nullptr; /*0x1007f70b2*/
    v5 = 4; /*0x1007f70b8*/
  }
  else
  {
    if ( v4 != 3 || *(_WORD *)v3 ^ 0x6E61 | v3[2] ^ 0x79 ) /*0x1007f70da*/
      return nullptr; /*0x1007f70dd*/
    v5 = 3; /*0x1007f70e3*/
  }
  __n = v5; /*0x1007f70e8*/
  v6 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f7100*/
                   &unk_1018CB9E5,
                   5,
                   a1);
  if ( !v6 ) /*0x1007f7106*/
    v6 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f7106*/
  v7 = (char *)(v6 + 1); /*0x1007f710f*/
  v25 = *(_BYTE *)v6; /*0x1007f7116*/
  if ( v25 != 4 ) /*0x1007f711b*/
    v7 = nullptr; /*0x1007f711b*/
  v8 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f712e*/
                  "messagesadaptiverequiredrejectedmsg_stopmarkdown",
                  8,
                  a1);
  if ( !v8 ) /*0x1007f7136*/
    v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f7136*/
  v9 = v8 + 8; /*0x1007f713e*/
  if ( *v8 != 4 ) /*0x1007f714a*/
    v9 = nullptr; /*0x1007f714a*/
  v15 = 1; /*0x1007f714e*/
  v16 = v7; /*0x1007f7159*/
  v17 = 0; /*0x1007f7160*/
  v19 = 0; /*0x1007f716b*/
  v20[0] = 1; /*0x1007f7176*/
  v20[1] = v9; /*0x1007f7181*/
  v20[2] = 0; /*0x1007f7188*/
  v20[4] = 0; /*0x1007f7193*/
  v21[0] = 2; /*0x1007f719e*/
  v22[0] = 2; /*0x1007f71a9*/
  if ( v4 != 4 && !memcmp(v3, &unk_1018CBF2D, __n) ) /*0x1007f71cc*/
  {
    v16 = nullptr; /*0x1007f71f9*/
    if ( v25 == 4 ) /*0x1007f7208*/
    {
      v11 = v6[2]; /*0x1007f720a*/
      v12 = v6[3]; /*0x1007f720f*/
      v13 = 32 * v12; /*0x1007f7217*/
      v18 = v11 + 32 * v12; /*0x1007f721f*/
      if ( v12 ) /*0x1007f7230*/
      {
        do /*0x1007f7244*/
        {
          v14 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f7244*/
                           &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                           4,
                           v11);
          if ( !v14 ) /*0x1007f724c*/
            v14 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f724e*/
          if ( *v14 == 3 ) /*0x1007f7254*/
            return nullptr; /*0x1007f7254*/
          v11 += 32; /*0x1007f7256*/
          v13 -= 32; /*0x1007f725a*/
        }
        while ( v13 ); /*0x1007f7244*/
      }
      v16 = nullptr; /*0x1007f7260*/
    }
    v17 = 0; /*0x1007f7279*/
    v19 = 0; /*0x1007f7284*/
    v15 = 2; /*0x1007f728f*/
    v23[0] = v23; /*0x1007f729e*/
    v23[1] = v23; /*0x1007f72a2*/
    v21[0] = 2; /*0x1007f72a6*/
    if ( !_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h3192b3c1f7cfe303( /*0x1007f72b5*/
            v20,
            v23,
            v21) )
    {
      v21[0] = 2; /*0x1007f72c6*/
      if ( LODWORD(v22[0]) == 2 /*0x1007f72da*/
        || !_$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::flatten::_$u7b$$u7b$closure$u7d$$u7d$::h30d9d6ad0d99c100(v22) )
      {
        return &unk_1018CBF30; /*0x1007f72e2*/
      }
    }
    return nullptr; /*0x1007f71f8*/
  }
  if ( (unsigned __int8)_$LT$core..iter..adapters..chain..Chain$LT$A$C$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hde0a189e0c3767a5( /*0x1007f71d8*/
                          &v15,
                          a1) )
    return nullptr; /*0x1007f71df*/
  return &unk_1018CBF30; /*0x1007f71e7*/
}