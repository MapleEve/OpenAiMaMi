// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::json_usage::ha5410469ebf9da60; addr: 0x1005d7890; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::json_usage::ha5410469ebf9da60(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  char v16; // r9
  int v17; // r8d
  int v18; // edi
  char v19; // r9
  int v20; // edi
  __int64 v21; // r13
  unsigned int v22; // edx
  unsigned int v23; // r12d
  _BYTE *v24; // rax
  unsigned __int64 *v27; // [rsp+10h] [rbp-40h]
  __int64 *v28; // [rsp+18h] [rbp-38h]
  char v29; // [rsp+24h] [rbp-2Ch]

  v3 = *a1; /*0x1005d78a4*/
  v28 = (__int64 *)(*a1 + 56LL); /*0x1005d78ab*/
  v4 = *v28; /*0x1005d78af*/
  if ( !*v28 ) /*0x1005d78af*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v28); /*0x1005d7b95*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x1005d78bc*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005d78cb*/
  {
    v29 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) ^ 1; /*0x1005d7ba4*/
    if ( *(_BYTE *)(v3 + 356) ) /*0x1005d7bab*/
      goto LABEL_46; /*0x1005d7bb2*/
    goto LABEL_5; /*0x1005d7bb2*/
  }
  v29 = 0; /*0x1005d78d7*/
  if ( !*(_BYTE *)(v3 + 356) ) /*0x1005d78e2*/
  {
LABEL_5:
    v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016FD4FA, 7, a2); /*0x1005d78ef*/
    if ( !v5 || *(_BYTE *)v5 != 4 ) /*0x1005d7913*/
      goto LABEL_45; /*0x1005d7913*/
    if ( *(_DWORD *)(v3 + 104) == 1 ) /*0x1005d791d*/
    {
      v27 = (unsigned __int64 *)(v3 + 112); /*0x1005d7923*/
      v6 = *(_QWORD *)(v5 + 24); /*0x1005d7927*/
      if ( !v6 ) /*0x1005d792e*/
        goto LABEL_45; /*0x1005d792e*/
    }
    else
    {
      *(_QWORD *)(v3 + 104) = 1; /*0x1005d7935*/
      v27 = (unsigned __int64 *)(v3 + 112); /*0x1005d7941*/
      *(_QWORD *)(v3 + 112) = 0; /*0x1005d7945*/
      *(_QWORD *)(v3 + 120) = 0; /*0x1005d794d*/
      v6 = *(_QWORD *)(v5 + 24); /*0x1005d7955*/
      if ( !v6 ) /*0x1005d795c*/
      {
LABEL_45:
        v21 = std::time::Instant::elapsed::h457f209775ed485c(v3 + 40); /*0x1005d7aec*/
        v23 = v22; /*0x1005d7af8*/
        v24 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d7b0b*/
                         "usagecached_tokenstopephemeralcache_controlassistant",
                         5,
                         a2);
        v4 = v3 + 72; /*0x1005d7b13*/
        codexmate_lib::core::relay::anthropic_trace::record_usage::hf204f1e9b8800680( /*0x1005d7b4e*/
          v3 + 72,
          (_DWORD *)((1000 * v21 + v23 / 0xF4240uLL)
                   | -(__int64)((0x3E8 * (unsigned __int128)(unsigned __int64)v21 + v23 / 0xF4240uLL) >> 64 != 0)),
          &unk_1016E9904,
          4u,
          v24);
        goto LABEL_46; /*0x1005d7b4e*/
      }
    }
    v7 = *(_QWORD *)(v5 + 16); /*0x1005d7962*/
    v8 = v7 + 32 * v6; /*0x1005d796a*/
    while ( 1 ) /*0x1005d79a8*/
    {
      v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d79a8*/
             &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178,
             4,
             v7);
      if ( v9 ) /*0x1005d79b0*/
      {
        if ( *(_BYTE *)v9 == 3 && *(_QWORD *)(v9 + 24) == 4 && **(_DWORD **)(v9 + 16) == 1954047348 ) /*0x1005d79c8*/
        {
          v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d79d9*/
                  "textNoneSome",
                  4,
                  v7);
          if ( v10 ) /*0x1005d79e1*/
          {
            if ( *(_BYTE *)v10 == 3 ) /*0x1005d79e6*/
            {
              v11 = *(_QWORD *)(v10 + 24); /*0x1005d79e8*/
              if ( v11 ) /*0x1005d79ef*/
                break; /*0x1005d79ef*/
            }
          }
        }
      }
LABEL_13:
      v7 += 32; /*0x1005d7990*/
      if ( v7 == v8 ) /*0x1005d7997*/
        goto LABEL_45; /*0x1005d7997*/
    }
    v12 = *(char **)(v10 + 16); /*0x1005d79f1*/
    v13 = &v12[v11]; /*0x1005d79f5*/
    v14 = *(_QWORD *)(v3 + 112); /*0x1005d79f8*/
    v15 = *(_QWORD *)(v3 + 120); /*0x1005d79fc*/
    while ( 1 ) /*0x1005d7a34*/
    {
      v16 = *v12; /*0x1005d7a34*/
      if ( *v12 >= 0 ) /*0x1005d7a3b*/
        break; /*0x1005d7a3b*/
      if ( (unsigned __int8)v16 < 0xE0u ) /*0x1005d7a41*/
      {
        v12 += 2; /*0x1005d7a8a*/
        goto LABEL_23; /*0x1005d7a8e*/
      }
      v17 = v16 & 0x1F; /*0x1005d7a46*/
      v18 = ((v12[1] & 0x3F) << 6) | v12[2] & 0x3F; /*0x1005d7a5e*/
      if ( (unsigned __int8)v16 < 0xF0u ) /*0x1005d7a65*/
      {
        v12 += 3; /*0x1005d7a90*/
        v20 = (v17 << 12) | v18; /*0x1005d7a98*/
      }
      else
      {
        v19 = v12[3]; /*0x1005d7a67*/
        v12 += 4; /*0x1005d7a6c*/
        v20 = ((v17 & 7) << 18) | (v18 << 6) | v19 & 0x3F; /*0x1005d7a85*/
      }
      if ( !++v14 ) /*0x1005d7aaf*/
        v14 = -1; /*0x1005d7aaf*/
      if ( v14 >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d7ab6*/
        v14 = 0x1FFFFFFFFFFFFFLL; /*0x1005d7ab6*/
      if ( v20 == 65533 ) /*0x1005d7ac0*/
      {
        if ( !++v15 ) /*0x1005d7acc*/
          v15 = -1; /*0x1005d7acc*/
        if ( v15 >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d7ad3*/
          v15 = 0x1FFFFFFFFFFFFFLL; /*0x1005d7ad3*/
        *(_QWORD *)(v3 + 120) = v15; /*0x1005d7ad7*/
      }
LABEL_27:
      if ( v12 == v13 ) /*0x1005d7a2e*/
      {
        *v27 = v14; /*0x1005d7981*/
        goto LABEL_13; /*0x1005d7981*/
      }
    }
    ++v12; /*0x1005d7a10*/
LABEL_23:
    if ( !++v14 ) /*0x1005d7a16*/
      v14 = -1; /*0x1005d7a16*/
    if ( v14 >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d7a27*/
      v14 = 0x1FFFFFFFFFFFFFLL; /*0x1005d7a27*/
    goto LABEL_27; /*0x1005d7a27*/
  }
LABEL_46:
  if ( !v29 /*0x1005d7bba*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4) )
  {
    *(_BYTE *)(v3 + 64) = 1; /*0x1005d7bc3*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v28); /*0x1005d7b79*/
}