// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::outcome::hcbeac4d33ea43691; addr: 0x100aca800; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:18Z
unsigned __int64 *__fastcall codexmate_lib::core::relay::translator::anthropic_search::outcome::hcbeac4d33ea43691(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r12
  void *v3; // r15
  void *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  _QWORD v13[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-38h]
  unsigned __int64 v17; // [rsp+40h] [rbp-30h]

  v2 = 0x8000000000000000LL; /*0x100aca817*/
  v3 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("content", 7, a2); /*0x100aca835*/
  if ( !v3 ) /*0x100aca842*/
    v3 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100aca842*/
  v4 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca855*/
                 "typereasoningcompleted",
                 4,
                 v3);
  if ( !v4 ) /*0x100aca85d*/
    v4 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100aca85d*/
  if ( !(unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100aca86b*/
                           v4,
                           &anon_934eb766a8cad5eebd2cfa1275fd1b1a_562) )
    goto LABEL_10; /*0x100aca86b*/
  v5 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca883*/
                   &anon_934eb766a8cad5eebd2cfa1275fd1b1a_563,
                   10,
                   v3);
  if ( !v5 ) /*0x100aca88b*/
    v5 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100aca88d*/
  if ( *(_BYTE *)v5 != 3 || !v5[3] ) /*0x100aca895*/
  {
LABEL_10:
    v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("content", 7, a2); /*0x100aca8af*/
    if ( v6 && *(_BYTE *)v6 == 4 ) /*0x100aca8bc*/
    {
      v7 = *(_QWORD *)(v6 + 16); /*0x100aca8be*/
      v8 = 32LL * *(_QWORD *)(v6 + 24); /*0x100aca8c6*/
      v14[0] = 0; /*0x100aca8cd*/
      v13[0] = v7; /*0x100aca8d5*/
      v13[1] = v7 + v8; /*0x100aca8d9*/
      v13[2] = v14; /*0x100aca8e1*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9b20d78f19155526( /*0x100aca8ed*/
        &v15,
        v13);
      v9 = v14[0]; /*0x100aca8f2*/
      if ( v14[0] ) /*0x100aca8f9*/
      {
        v10 = v14[1]; /*0x100aca8fb*/
        v11 = v16; /*0x100aca8ff*/
        core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(v16, v17); /*0x100aca90a*/
        if ( v15 ) /*0x100aca916*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 32 * v15, 8); /*0x100aca924*/
      }
      else
      {
        v9 = v16; /*0x100aca944*/
        v10 = v17; /*0x100aca948*/
        if ( v15 != 0x8000000000000000LL ) /*0x100aca94f*/
        {
          *a1 = v15; /*0x100aca971*/
          a1[1] = v9; /*0x100aca974*/
          a1[2] = v10; /*0x100aca978*/
          return a1; /*0x100aca97c*/
        }
      }
      a1[1] = v9; /*0x100aca951*/
      a1[2] = v10; /*0x100aca955*/
    }
    else
    {
      a1[1] = (unsigned __int64)"Anthropic web search returned an invalid resulthttpsapp-server-handleexplicit-sqlite-hom" /*0x100aca932*/
                                "everified-cacheunique-latest-schema";
      a1[2] = 47; /*0x100aca936*/
    }
    v2 = 0x8000000000000001LL; /*0x100aca959*/
  }
  *a1 = v2; /*0x100aca95c*/
  return a1; /*0x100aca962*/
}