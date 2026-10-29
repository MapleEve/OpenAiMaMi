// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::response_text::h1b699bf6bd8c9947; addr: 0x1005d85a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::response_text::h1b699bf6bd8c9947(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rcx
  __int64 v22; // rdx
  int v23; // esi
  int v24; // edx
  unsigned __int8 v25; // di
  int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v31; // [rsp+8h] [rbp-58h]
  __int64 *v32; // [rsp+10h] [rbp-50h]
  _BYTE *v33; // [rsp+18h] [rbp-48h]
  __int64 v34; // [rsp+20h] [rbp-40h]
  __int64 v35; // [rsp+28h] [rbp-38h]
  char v36; // [rsp+34h] [rbp-2Ch]

  v4 = *a1; /*0x1005d85b4*/
  v32 = (__int64 *)(*a1 + 56LL); /*0x1005d85bb*/
  v5 = *v32; /*0x1005d85bf*/
  if ( !*v32 ) /*0x1005d85bf*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v32); /*0x1005d8913*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x1005d85cc*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005d85db*/
  {
    v36 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5) ^ 1; /*0x1005d8922*/
    if ( *(_BYTE *)(v4 + 356) ) /*0x1005d8929*/
      goto LABEL_55; /*0x1005d8930*/
  }
  else
  {
    v36 = 0; /*0x1005d85e7*/
    if ( *(_BYTE *)(v4 + 356) ) /*0x1005d85f2*/
      goto LABEL_55; /*0x1005d85f9*/
  }
  v5 = (__int64)"output"; /*0x1005d85ff*/
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("output", 6, a2); /*0x1005d860e*/
  if ( v6 && *(_BYTE *)v6 == 4 ) /*0x1005d861f*/
  {
    v9 = *(_QWORD *)(v6 + 24); /*0x1005d8625*/
    if ( v9 ) /*0x1005d862c*/
    {
      v10 = *(_QWORD *)(v6 + 16); /*0x1005d8632*/
      v11 = v10 + 32 * v9; /*0x1005d863a*/
      v35 = 0; /*0x1005d863d*/
      v34 = 0; /*0x1005d8645*/
      while ( 1 ) /*0x1005d8655*/
      {
        v5 = (__int64)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178; /*0x1005d8655*/
        v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d865f*/
                &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178,
                4,
                v10);
        if ( v12 ) /*0x1005d8667*/
        {
          if ( *(_BYTE *)v12 == 3 /*0x1005d868c*/
            && *(_QWORD *)(v12 + 24) == 7
            && !(**(_DWORD **)(v12 + 16) ^ 0x7373656D | *(_DWORD *)(*(_QWORD *)(v12 + 16) + 3LL) ^ 0x65676173) )
          {
            break; /*0x1005d868c*/
          }
        }
        v10 += 32; /*0x1005d8690*/
LABEL_14:
        if ( v10 == v11 ) /*0x1005d8697*/
        {
          v29 = 1; /*0x1005d88a4*/
          v8 = v34; /*0x1005d88a9*/
          v7 = v35; /*0x1005d88ad*/
          goto LABEL_54; /*0x1005d88b1*/
        }
      }
      v5 = (__int64)&unk_1016FD4FA; /*0x1005d86a3*/
      v13 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d86ad*/
                       &unk_1016FD4FA,
                       7,
                       v10);
      if ( v13 ) /*0x1005d86b5*/
      {
        v14 = v13 + 8; /*0x1005d86ba*/
        if ( *v13 != 4 ) /*0x1005d86c6*/
          v14 = nullptr; /*0x1005d86c6*/
        v33 = v14; /*0x1005d86ca*/
      }
      else
      {
        v33 = nullptr; /*0x1005d86d0*/
      }
      v10 += 32; /*0x1005d86d8*/
      v31 = 0; /*0x1005d86dc*/
      while ( 1 ) /*0x1005d87b2*/
      {
LABEL_22:
        v15 = v31; /*0x1005d86f0*/
        if ( !v31 || v31 == v3 ) /*0x1005d86fc*/
        {
          if ( !v33 ) /*0x1005d8705*/
            goto LABEL_14; /*0x1005d8705*/
          v15 = *((_QWORD *)v33 + 1); /*0x1005d8707*/
          v16 = *((_QWORD *)v33 + 2); /*0x1005d870b*/
          v3 = v15 + 32 * v16; /*0x1005d8716*/
          if ( !v16 ) /*0x1005d871c*/
            goto LABEL_14; /*0x1005d871c*/
          v33 = nullptr; /*0x1005d8722*/
        }
        v5 = (__int64)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178; /*0x1005d872f*/
        v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d8739*/
                &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_178,
                4,
                v15);
        v31 = v15 + 32; /*0x1005d8742*/
        if ( v17 ) /*0x1005d8749*/
        {
          if ( *(_BYTE *)v17 == 3 /*0x1005d877c*/
            && *(_QWORD *)(v17 + 24) == 11
            && !(**(_QWORD **)(v17 + 16) ^ 0x745F74757074756FLL
               | *(_QWORD *)(*(_QWORD *)(v17 + 16) + 3LL) ^ 0x747865745F747570LL) )
          {
            v5 = (__int64)"textNoneSome"; /*0x1005d878a*/
            v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005d8794*/
                    "textNoneSome",
                    4,
                    v15);
            if ( v18 ) /*0x1005d879c*/
            {
              if ( *(_BYTE *)v18 == 3 ) /*0x1005d87a5*/
              {
                v19 = *(_QWORD *)(v18 + 24); /*0x1005d87ab*/
                if ( v19 ) /*0x1005d87b2*/
                  break; /*0x1005d87b2*/
              }
            }
          }
        }
      }
      v20 = *(unsigned __int8 **)(v18 + 16); /*0x1005d87b8*/
      v21 = &v20[v19]; /*0x1005d87bc*/
      while ( 1 ) /*0x1005d87f4*/
      {
        v5 = *v20; /*0x1005d87f4*/
        if ( (v5 & 0x80u) == 0LL ) /*0x1005d87fa*/
          break; /*0x1005d87fa*/
        if ( (unsigned __int8)v5 < 0xE0u ) /*0x1005d8800*/
        {
          v20 += 2; /*0x1005d8840*/
          goto LABEL_36; /*0x1005d8844*/
        }
        v23 = v5 & 0x1F; /*0x1005d8804*/
        v24 = ((v20[1] & 0x3F) << 6) | v20[2] & 0x3F; /*0x1005d881b*/
        if ( (unsigned __int8)v5 < 0xF0u ) /*0x1005d8822*/
        {
          v20 += 3; /*0x1005d8849*/
          v26 = (v23 << 12) | v24; /*0x1005d8850*/
        }
        else
        {
          v25 = v20[3]; /*0x1005d8824*/
          v20 += 4; /*0x1005d8828*/
          v26 = ((v23 & 7) << 18) | (v24 << 6) | v25 & 0x3F; /*0x1005d883c*/
        }
        v27 = v35 + 1; /*0x1005d8856*/
        v5 = -1; /*0x1005d8859*/
        if ( (unsigned __int64)(v35 + 1) >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d8871*/
          v27 = 0x1FFFFFFFFFFFFFLL; /*0x1005d8871*/
        v35 = v27; /*0x1005d8875*/
        if ( v26 == 65533 ) /*0x1005d887f*/
        {
          v28 = v34 + 1; /*0x1005d8889*/
          if ( (unsigned __int64)(v34 + 1) >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d8893*/
            v28 = 0x1FFFFFFFFFFFFFLL; /*0x1005d8893*/
          v34 = v28; /*0x1005d8897*/
        }
LABEL_39:
        if ( v20 == v21 ) /*0x1005d87ee*/
          goto LABEL_22; /*0x1005d87ee*/
      }
      ++v20; /*0x1005d87c1*/
LABEL_36:
      v22 = v35 + 1; /*0x1005d87c4*/
      if ( (unsigned __int64)(v35 + 1) >= 0x1FFFFFFFFFFFFFLL ) /*0x1005d87e3*/
        v22 = 0x1FFFFFFFFFFFFFLL; /*0x1005d87e3*/
      v35 = v22; /*0x1005d87e7*/
      goto LABEL_39; /*0x1005d87e7*/
    }
    v8 = 0; /*0x1005d88b3*/
    v7 = 0; /*0x1005d88b5*/
    v29 = 1; /*0x1005d88b7*/
  }
  else
  {
    v29 = 0; /*0x1005d88a0*/
  }
LABEL_54:
  *(_QWORD *)(v4 + 128) = v29; /*0x1005d88bc*/
  *(_QWORD *)(v4 + 136) = v7; /*0x1005d88c3*/
  *(_QWORD *)(v4 + 144) = v8; /*0x1005d88ca*/
LABEL_55:
  if ( !v36 /*0x1005d8938*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5) )
  {
    *(_BYTE *)(v4 + 64) = 1; /*0x1005d8941*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v32); /*0x1005d88f7*/
}