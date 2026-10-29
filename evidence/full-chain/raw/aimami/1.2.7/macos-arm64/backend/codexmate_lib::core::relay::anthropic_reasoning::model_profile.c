// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::model_profile::hc5425a7e3a4c6fca; addr: 0x100896e50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:19Z
double __fastcall codexmate_lib::core::relay::anthropic_reasoning::model_profile::hc5425a7e3a4c6fca(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  unsigned __int8 v5; // al
  void *v6; // rdx
  double result; // xmm0_8
  _QWORD v8[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-30h] BYREF
  __int64 v10; // [rsp+18h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-20h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v9, a2, a3); /*0x100896e64*/
  v3 = v10; /*0x100896e69*/
  v4 = v11; /*0x100896e6d*/
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100896e83*/
                          v10,
                          v11,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_870,
                          10) )
  {
    *(_QWORD *)a1 = &off_101AB6930; /*0x100896e93*/
    *(_QWORD *)(a1 + 8) = 5; /*0x100896e96*/
    *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x100896ea5*/
    *(_QWORD *)(a1 + 24) = 4; /*0x100896ea9*/
    *(_DWORD *)(a1 + 32) = 65538; /*0x100896eb1*/
LABEL_9:
    *(_WORD *)(a1 + 36) = 257; /*0x100896f68*/
    goto LABEL_10; /*0x100896f68*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100896f06*/
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_871,
                          9)
    || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_872,
                          10)
    || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_873,
                          8) )
  {
    v5 = codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100896f25*/
           v3,
           v4,
           &anon_0868f19ff3e9f3569e732f60bdb020cc_873,
           8);
    v6 = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x100896f31*/
    if ( v5 ) /*0x100896f3a*/
      v6 = &anon_0868f19ff3e9f3569e732f60bdb020cc_891; /*0x100896f3a*/
    *(_QWORD *)a1 = &off_101AB6930; /*0x100896f4d*/
    *(_QWORD *)(a1 + 8) = 5; /*0x100896f50*/
    *(_QWORD *)(a1 + 16) = v6; /*0x100896f58*/
    *(_QWORD *)(a1 + 24) = 2LL * v5 + 4; /*0x100896f5c*/
    *(_DWORD *)(a1 + 32) = 65537; /*0x100896f60*/
    goto LABEL_9; /*0x100896f60*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100896fc7*/
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_874,
                          7)
    || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_875,
                          8) )
  {
    *(_QWORD *)a1 = &off_101AB6930; /*0x100896fd7*/
    *(_QWORD *)(a1 + 8) = 5; /*0x100896fda*/
LABEL_16:
    *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x100896fe2*/
    *(_QWORD *)(a1 + 24) = 4; /*0x100896fed*/
    *(_WORD *)(a1 + 32) = 1; /*0x100896ff5*/
    *(_DWORD *)(a1 + 34) = 16843009; /*0x100896ffc*/
    goto LABEL_10; /*0x100897004*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x10089701b*/
                          v3,
                          v4,
                          &unk_10178ACC4,
                          14) )
  {
    *(_QWORD *)a1 = &off_101AB68F0; /*0x10089702b*/
    *(_QWORD *)(a1 + 8) = 4; /*0x10089702e*/
    goto LABEL_16; /*0x100897036*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100897065*/
                          v3,
                          v4,
                          &anon_0868f19ff3e9f3569e732f60bdb020cc_877,
                          6)
    || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                          v3,
                          v4,
                          "sonnet-5opus-4-7opus-4-6opus-4-5sonnet-4opus-4-1is_errorcompletesubagentcodex.dbaionsaleHTTPPortcommand=-extract/.volta//AiMaMi \b",
                          8) )
  {
    *(_QWORD *)a1 = &off_101AB6930; /*0x100897075*/
    *(_QWORD *)(a1 + 8) = 5; /*0x100897078*/
    *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x100897087*/
    *(_QWORD *)(a1 + 24) = 4; /*0x10089708b*/
    *(_WORD *)(a1 + 32) = 0; /*0x100897093*/
    *(_DWORD *)(a1 + 34) = 16843009; /*0x10089709a*/
  }
  else
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x1008970d4*/
                            v3,
                            v4,
                            &anon_0868f19ff3e9f3569e732f60bdb020cc_879,
                            8)
      || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                            v3,
                            v4,
                            "opus-4-7opus-4-6opus-4-5sonnet-4opus-4-1is_errorcompletesubagentcodex.dbaionsaleHTTPPortcommand=-extract/.volta//AiMaMi \b",
                            8) )
    {
      *(_QWORD *)a1 = &off_101AB6930; /*0x1008970e4*/
      *(_QWORD *)(a1 + 8) = 5; /*0x1008970e7*/
      *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x1008970f6*/
      *(_QWORD *)(a1 + 24) = 4; /*0x1008970fa*/
      *(_DWORD *)(a1 + 32) = 0x1000000; /*0x100897102*/
      goto LABEL_9; /*0x10089710a*/
    }
    if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x10089713c*/
                            v3,
                            v4,
                            "opus-4-6opus-4-5sonnet-4opus-4-1is_errorcompletesubagentcodex.dbaionsaleHTTPPortcommand=-extract/.volta//AiMaMi \b",
                            8)
      || (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                            v3,
                            v4,
                            &unk_10178ACE0,
                            10) )
    {
      *(_QWORD *)a1 = &off_101AB68F0; /*0x10089714c*/
      *(_QWORD *)(a1 + 8) = 4; /*0x10089714f*/
      *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x10089715e*/
      *(_QWORD *)(a1 + 24) = 4; /*0x100897162*/
      *(_DWORD *)(a1 + 32) = 0x1000000; /*0x10089716a*/
      *(_WORD *)(a1 + 36) = 256; /*0x100897172*/
    }
    else if ( (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100897190*/
                                 v3,
                                 v4,
                                 "opus-4-5sonnet-4opus-4-1is_errorcompletesubagentcodex.dbaionsaleHTTPPortcommand=-extract/.volta//AiMaMi \b",
                                 8) )
    {
      *(_QWORD *)a1 = &off_101AB68C0; /*0x1008971a0*/
      *(_QWORD *)(a1 + 8) = 3; /*0x1008971a3*/
      *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_893; /*0x1008971b2*/
      *(_QWORD *)(a1 + 24) = 4; /*0x1008971b6*/
      *(_DWORD *)(a1 + 32) = 256; /*0x1008971be*/
      *(_WORD *)(a1 + 36) = 256; /*0x1008971c6*/
    }
    else
    {
      v8[0] = &off_101AB6820; /*0x1008971d9*/
      v8[1] = &off_101AB6880; /*0x1008971e4*/
      if ( (unsigned __int8)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h8104d17823f7340b( /*0x1008971f0*/
                              v8,
                              &v9) )
      {
        *(_QWORD *)a1 = &off_101AB6880; /*0x100897200*/
        *(_QWORD *)(a1 + 8) = 4; /*0x100897203*/
        *(_QWORD *)(a1 + 16) = &anon_0868f19ff3e9f3569e732f60bdb020cc_891; /*0x100897212*/
        *(_QWORD *)(a1 + 24) = 6; /*0x100897216*/
        *(_WORD *)(a1 + 32) = 256; /*0x10089721e*/
        *(_DWORD *)(a1 + 34) = 0; /*0x100897225*/
      }
      else
      {
        *(_BYTE *)(a1 + 37) = 2; /*0x100897232*/
      }
    }
  }
LABEL_10:
  if ( v9 ) /*0x100896f76*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x100896f8a*/
  return result; /*0x100896f80*/
}