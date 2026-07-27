// __ZN13codexmate_lib4core5relay7manager12RelayManager21resolve_draft_api_key @ 0x100276cb0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::resolve_draft_api_key::h25394278458b5ae9(
        unsigned __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        size_t a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 v7; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v22; // rcx
  int v23; // eax
  _QWORD *v24; // [rsp+18h] [rbp-88h]
  __int64 v25; // [rsp+28h] [rbp-78h]
  __int64 v26; // [rsp+30h] [rbp-70h]
  _QWORD *v27; // [rsp+38h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-60h]
  _QWORD *v29; // [rsp+48h] [rbp-58h]
  _QWORD *v30; // [rsp+50h] [rbp-50h]
  _QWORD *v31; // [rsp+58h] [rbp-48h]
  unsigned __int64 v32; // [rsp+60h] [rbp-40h]
  _QWORD *v33; // [rsp+68h] [rbp-38h]
  int v34; // [rsp+74h] [rbp-2Ch]

  v5 = a3; /*0x100276cc1*/
  if ( !a3[2] ) /*0x100276ccc*/
  {
    if ( !a4 ) /*0x100276cef*/
    {
      v18 = 1; /*0x100276dd5*/
      v13 = 0; /*0x100276dda*/
      v32 = 0; /*0x100276ddd*/
      goto LABEL_23; /*0x100276de5*/
    }
    v24 = a2; /*0x100276cf8*/
    v10 = a2[1]; /*0x100276cff*/
    v31 = (_QWORD *)(v10 + 16); /*0x100276d07*/
    v26 = v10; /*0x100276d0b*/
    v11 = *(_QWORD **)(v10 + 16); /*0x100276d0f*/
    if ( !v11 ) /*0x100276d16*/
      v11 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v31); /*0x100276f78*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x100276d1c*/
    v13 = 0x8000000000000000LL; /*0x100276d21*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100276d40*/
    {
      v23 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, 0x7FFFFFFFFFFFFFFFLL); /*0x100276f80*/
      LOBYTE(v23) = v23 ^ 1; /*0x100276f85*/
      v34 = v23; /*0x100276f87*/
      v14 = v26; /*0x100276f8a*/
      if ( !*(_BYTE *)(v26 + 24) ) /*0x100276f94*/
      {
LABEL_8:
        v15 = *(_QWORD *)(v14 + 48); /*0x100276d5d*/
        if ( v15 ) /*0x100276d64*/
        {
          v33 = v5; /*0x100276d6a*/
          v16 = 232 * v15; /*0x100276d72*/
          v17 = *(_QWORD *)(v14 + 40) + 72LL; /*0x100276d79*/
          while ( 1 ) /*0x100276d90*/
          {
            if ( *(_QWORD *)(v17 - 56) == a5 ) /*0x100276d94*/
            {
              v11 = *(_QWORD **)(v17 - 64); /*0x100276d96*/
              a2 = a4; /*0x100276d9a*/
              if ( !memcmp(v11, a4, a5) ) /*0x100276da0*/
                break; /*0x100276da0*/
            }
            v17 += 232; /*0x100276d80*/
            v16 -= 232; /*0x100276d87*/
            if ( !v16 ) /*0x100276d8e*/
            {
              v13 = 0x8000000000000000LL; /*0x100276dea*/
              v5 = v33; /*0x100276df4*/
              goto LABEL_17; /*0x100276df4*/
            }
          }
          v11 = &v27; /*0x100276da9*/
          a2 = (_QWORD *)v17; /*0x100276dad*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v27, v17); /*0x100276db0*/
          v13 = (unsigned __int64)v27; /*0x100276db5*/
          v5 = v33; /*0x100276dc6*/
          if ( v27 == (_QWORD *)0x8000000000000000LL ) /*0x100276dca*/
          {
            v13 = 0x8000000000000000LL; /*0x100276dd0*/
          }
          else
          {
            v11 = v28; /*0x100276f0f*/
            if ( v29 ) /*0x100276f1a*/
            {
              v32 = (unsigned __int64)v29; /*0x100276f1c*/
              v25 = (__int64)v28; /*0x100276f20*/
            }
            else
            {
              if ( v27 ) /*0x100276f49*/
              {
                a2 = v27; /*0x100276f50*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100276f53*/
              }
              v32 = 0; /*0x100276f58*/
              v13 = 0x8000000000000000LL; /*0x100276f60*/
            }
          }
        }
LABEL_17:
        if ( !(_BYTE)v34 /*0x100276fd1*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, v14) )
        {
          *(_BYTE *)(v26 + 24) = 1; /*0x100276fe2*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v31); /*0x100276e1b*/
        v18 = v25; /*0x100276e2d*/
        if ( v13 == 0x8000000000000000LL ) /*0x100276e31*/
        {
          codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53(&v27, *v24 + 16LL, a4, a5); /*0x100276e4b*/
          if ( (_DWORD)v27 == 1 ) /*0x100276e54*/
          {
            if ( v28 ) /*0x100276e5d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x100276e68*/
          }
          else
          {
            v20 = v28; /*0x100276e88*/
            if ( v28 != (_QWORD *)0x8000000000000001LL ) /*0x100276eb3*/
            {
              v28 = v30; /*0x100276ec3*/
              v27 = v29; /*0x100276ec7*/
              if ( v20 != (_QWORD *)0x8000000000000000LL ) /*0x100276ece*/
              {
                *a1 = (unsigned __int64)v20; /*0x100276f29*/
                v22 = v28; /*0x100276f30*/
                a1[1] = (unsigned __int64)v27; /*0x100276f34*/
                a1[2] = (unsigned __int64)v22; /*0x100276f38*/
                v19 = *v5; /*0x100276f3c*/
                if ( !*v5 ) /*0x100276f3c*/
                  return a1; /*0x100276f42*/
                goto LABEL_28; /*0x100276f42*/
              }
            }
          }
          *a1 = 0; /*0x100276ed0*/
          a1[1] = 1; /*0x100276ed7*/
          a1[2] = 0; /*0x100276edf*/
          v19 = *v5; /*0x100276ee7*/
          if ( !*v5 ) /*0x100276eed*/
            return a1; /*0x100276eed*/
LABEL_28:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5[1], v19, 1); /*0x100276eef*/
          return a1; /*0x100276ef8*/
        }
LABEL_23:
        *a1 = v13; /*0x100276e6f*/
        a1[1] = v18; /*0x100276e72*/
        a1[2] = v32; /*0x100276e7a*/
        v19 = *v5; /*0x100276e7e*/
        if ( !*v5 ) /*0x100276e7e*/
          return a1; /*0x100276e84*/
        goto LABEL_28; /*0x100276e84*/
      }
    }
    else
    {
      v34 = 0; /*0x100276d46*/
      v14 = v26; /*0x100276d4d*/
      if ( !*(_BYTE *)(v26 + 24) ) /*0x100276d51*/
        goto LABEL_8; /*0x100276d57*/
    }
    v33 = v5; /*0x100276f9a*/
    v27 = v31; /*0x100276fa2*/
    LOBYTE(v28) = v34; /*0x100276fa9*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, &v27, &off_10195E740, &off_10195DBB8); /*0x100276fca*/
  }
  a1[2] = a3[2]; /*0x100276cd2*/
  v7 = *a3; /*0x100276cd6*/
  a1[1] = a3[1]; /*0x100276cdd*/
  *a1 = v7; /*0x100276ce1*/
  return a1; /*0x100276f00*/
}