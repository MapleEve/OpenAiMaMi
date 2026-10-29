// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h6a3d592ee0171feb; addr: 0x10031b9e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h6a3d592ee0171feb(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  _BYTE *v21; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-D0h]
  __int64 v26; // [rsp+18h] [rbp-C8h]
  __int64 v27; // [rsp+20h] [rbp-C0h]
  __int64 v28; // [rsp+28h] [rbp-B8h]
  __int64 v29; // [rsp+30h] [rbp-B0h]
  _QWORD v30[8]; // [rsp+A0h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 32); /*0x10031b9f2*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v24, v2, *(_QWORD *)(a1 + 40)); /*0x10031ba07*/
  if ( (_DWORD)v24 == 1 ) /*0x10031ba13*/
  {
    if ( (v25 & 3) == 1 ) /*0x10031ba24*/
    {
      v3 = v25 - 1; /*0x10031ba26*/
      v4 = *(_QWORD *)(v25 - 1); /*0x10031ba2a*/
      v5 = *(_QWORD *)(v25 + 7); /*0x10031ba2e*/
      if ( *(_QWORD *)v5 ) /*0x10031ba32*/
        (*(void (__fastcall **)(__int64))v5)(v4); /*0x10031ba3e*/
      v6 = *(_QWORD *)(v5 + 8); /*0x10031ba40*/
      if ( v6 ) /*0x10031ba48*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x10031ba52*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x10031ba64*/
    }
    return 0; /*0x10031ba69*/
  }
  else
  {
    v7 = v2; /*0x10031ba78*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v24); /*0x10031ba7e*/
    v8 = v24; /*0x10031ba83*/
    if ( __OFSUB__(-v24, 1) ) /*0x10031ba8d*/
    {
      if ( (v25 & 3) == 1 ) /*0x10031baa1*/
      {
        v9 = v25 - 1; /*0x10031baa3*/
        v10 = *(_QWORD *)(v25 - 1); /*0x10031baa7*/
        v11 = *(_QWORD *)(v25 + 7); /*0x10031baab*/
        if ( *(_QWORD *)v11 ) /*0x10031baaf*/
          (*(void (__fastcall **)(__int64, __int64))v11)(v10, v7); /*0x10031babb*/
        v12 = *(_QWORD *)(v11 + 8); /*0x10031babd*/
        if ( v12 ) /*0x10031bac5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10031bacf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x10031bae1*/
      }
      LOBYTE(v1) = 4; /*0x10031bae6*/
    }
    else
    {
      v13 = v25; /*0x10031baee*/
      v24 = v25; /*0x10031bafc*/
      v25 = v26; /*0x10031bb03*/
      v26 = 0; /*0x10031bb0a*/
      v27 = 0; /*0x10031bb15*/
      v28 = v24; /*0x10031bb20*/
      v29 = v25; /*0x10031bb27*/
      serde_json::de::from_trait::hb66530a7a5e497bc(v30, &v24); /*0x10031bb39*/
      if ( LOBYTE(v30[0]) == 6 ) /*0x10031bb42*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h4c10ab9eca38c556(v30); /*0x10031bb48*/
        LOBYTE(v1) = 4; /*0x10031bb4d*/
      }
      else
      {
        v27 = v30[3]; /*0x10031bb59*/
        v26 = v30[2]; /*0x10031bb64*/
        v25 = v30[1]; /*0x10031bb73*/
        v24 = v30[0]; /*0x10031bb7a*/
        v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10031bb94*/
                "auth_modeOPENAI_API_KEYtokens",
                9,
                &v24);
        if ( !v14 /*0x10031bd46*/
          || *(_BYTE *)v14 != 3
          || (v15 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(
                               *(_QWORD *)(v14 + 16),
                               *(_QWORD *)(v14 + 24)),
              v16 != 6)
          || (*v15 | (unsigned __int8)(32 * ((unsigned __int8)(*v15 - 65) < 0x1Au))) != 97
          || (v15[1] | (unsigned __int8)(32 * ((unsigned __int8)(v15[1] - 65) < 0x1Au))) != 112
          || (v15[2] | (unsigned __int8)(32 * ((unsigned __int8)(v15[2] - 65) < 0x1Au))) != 105
          || (v15[3] | (unsigned __int8)(32 * ((unsigned __int8)(v15[3] - 65) < 0x1Au))) != 107
          || (v15[4] | (unsigned __int8)(32 * ((unsigned __int8)(v15[4] - 65) < 0x1Au))) != 101
          || (v15[5] | (unsigned __int8)(32 * ((unsigned __int8)(v15[5] - 65) < 0x1Au))) != 121
          || (v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "OPENAI_API_KEYtokens",
                      14,
                      &v24)) == 0
          || *(_BYTE *)v17 != 3
          || (v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(
                      *(_QWORD *)(v17 + 16),
                      *(_QWORD *)(v17 + 24)),
              v18 == 0 || v19 < 0x17)
          || (v20 = _mm_or_si128(
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v18), (__m128i)xmmword_1016E9A90),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v18 + 7)), (__m128i)xmmword_1016E9A80)),
              !_mm_testz_si128(v20, v20))
          || (v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "tokens",
                      6,
                      &v24),
              LOBYTE(v1) = 1,
              v23)
          && *(_BYTE *)v23 == 5
          && *(_QWORD *)(v23 + 24) )
        {
          v21 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10031bcd2*/
                           "aimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
                           25,
                           &v24);
          LOBYTE(v1) = 3; /*0x10031bcd7*/
          if ( v21 ) /*0x10031bcdd*/
          {
            if ( *v21 == 1 ) /*0x10031bce2*/
            {
              v1 = (unsigned __int8)v21[1]; /*0x10031bce4*/
              LOBYTE(v1) = v1 ^ 3; /*0x10031bce9*/
            }
          }
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v24); /*0x10031bcf4*/
      }
      if ( v8 ) /*0x10031bcfc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v8, 1); /*0x10031bd09*/
    }
  }
  return v1; /*0x10031bd11*/
}
