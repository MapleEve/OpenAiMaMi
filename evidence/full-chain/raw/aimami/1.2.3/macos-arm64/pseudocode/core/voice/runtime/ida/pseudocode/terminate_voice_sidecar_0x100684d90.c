// __ZN13codexmate_lib4core5voice7runtime23terminate_voice_sidecar @ 0x100684d90 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::voice::runtime::terminate_voice_sidecar::h6420d3143bb30077(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  volatile signed __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r14
  unsigned int v20; // edx
  unsigned int v21; // r12d
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rax
  int *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  volatile signed __int64 **v36; // rdi
  volatile signed __int64 **v37; // rdi
  volatile signed __int64 *result; // rax
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  int *v42; // r14
  __int64 v43; // r15
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // rsi
  int v50; // eax
  int v51; // [rsp+8h] [rbp-58h] BYREF
  char v52; // [rsp+Ch] [rbp-54h]
  __int64 v53; // [rsp+10h] [rbp-50h]
  volatile signed __int64 **v54; // [rsp+18h] [rbp-48h]
  volatile signed __int64 **v55; // [rsp+20h] [rbp-40h]
  _QWORD *v56; // [rsp+28h] [rbp-38h]
  int v57; // [rsp+34h] [rbp-2Ch]

  v54 = (volatile signed __int64 **)a1; /*0x100684da7*/
  v4 = *(_QWORD *)(a1 + 8); /*0x100684dab*/
  v5 = *(_QWORD *)(v4 + 16); /*0x100684db3*/
  if ( !v5 ) /*0x100684dba*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 16); /*0x100684e12*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100684dbc*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100684dcb*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x100684e1f*/
    if ( *(_BYTE *)(v4 + 24) ) /*0x100684e23*/
      goto LABEL_5; /*0x100684e29*/
  }
  else
  {
    v8 = 0; /*0x100684dd3*/
    if ( *(_BYTE *)(v4 + 24) ) /*0x100684dd6*/
    {
LABEL_5:
      if ( !v8 /*0x1006851c1*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v5,
                               a2,
                               v6,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v4 + 24) = 1; /*0x1006851ce*/
      }
      goto LABEL_12; /*0x1006851d2*/
    }
  }
  v9 = (_QWORD *)(v4 + 28); /*0x100684e2b*/
  v10 = std::io::Write::write_all::h3ce78d18b5b98128(v4 + 28, a2, a3); /*0x100684e35*/
  if ( (v10 & 3) != 1 ) /*0x100684e42*/
  {
    if ( v8 ) /*0x100684e4b*/
      goto LABEL_12; /*0x100684e4b*/
    goto LABEL_11; /*0x100684e4b*/
  }
  v56 = (_QWORD *)(v10 - 1); /*0x1006850b5*/
  v39 = *(_QWORD *)(v10 - 1); /*0x1006850b9*/
  v40 = *(_QWORD *)(v10 + 7); /*0x1006850bd*/
  if ( *(_QWORD *)v40 ) /*0x1006850c1*/
    (*(void (__fastcall **)(__int64))v40)(v39); /*0x1006850cd*/
  v41 = *(_QWORD *)(v40 + 8); /*0x1006850cf*/
  if ( v41 ) /*0x1006850d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v41, *(_QWORD *)(v40 + 16)); /*0x1006850df*/
  a2 = 24; /*0x1006850e4*/
  v9 = v56; /*0x1006850ee*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24, 8); /*0x1006850f2*/
  if ( !v8 ) /*0x1006850fa*/
  {
LABEL_11:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006851ed*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v9,
                             a2,
                             v11,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v4 + 24) = 1; /*0x1006851fa*/
    }
  }
LABEL_12:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 16)); /*0x100684e6a*/
  v12 = *v54; /*0x100684e76*/
  v56 = *v54 + 2; /*0x100684e7d*/
  v13 = *((_QWORD *)v12 + 2); /*0x100684e81*/
  if ( !v13 ) /*0x100684e88*/
    v13 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v56); /*0x1006851aa*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v13); /*0x100684e8e*/
  v16 = 0x7FFFFFFFFFFFFFFFLL; /*0x100684e9d*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100684eaa*/
  {
    v50 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13, a2, v14, 0x7FFFFFFFFFFFFFFFLL); /*0x1006851b2*/
    LOBYTE(v50) = v50 ^ 1; /*0x1006851b7*/
    v57 = v50; /*0x1006851b9*/
  }
  else
  {
    v57 = 0; /*0x100684eb0*/
  }
  v55 = v54 + 1; /*0x100684ebf*/
  if ( !*((_BYTE *)v12 + 24) ) /*0x100684ec9*/
  {
    v17 = std::time::Instant::now::hda76af2c3a449055(v13, a2, v14, v16, v15); /*0x100684eff*/
    v19 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100684f18*/
            v17,
            v18,
            1,
            500000000);
    v21 = v20; /*0x100684f1b*/
    while ( 1 ) /*0x100684f48*/
    {
      v22 = (char *)v12 + 28; /*0x100684f48*/
      std::process::Child::try_wait::h2083f420dd3f491c(&v51, (char *)v12 + 28); /*0x100684f4b*/
      if ( v51 == 1 ) /*0x100684f54*/
        break; /*0x100684f54*/
      if ( v52 ) /*0x100684f5a*/
      {
        if ( !(_BYTE)v57 /*0x100685219*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 &v51,
                                 v22,
                                 v23,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)v12 + 24) = 1; /*0x100685226*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x100685096*/
        v36 = v54; /*0x10068509b*/
        if ( !_InterlockedDecrement64(*v54) ) /*0x1006850a2*/
          goto LABEL_41; /*0x1006850a6*/
        goto LABEL_42; /*0x1006850a6*/
      }
      v26 = std::time::Instant::now::hda76af2c3a449055(&v51, v22, v23, v24, v25); /*0x100684f60*/
      if ( v26 == v19 ) /*0x100684f68*/
      {
        if ( v27 >= v21 ) /*0x100684f6d*/
          goto LABEL_34; /*0x100684f6d*/
      }
      else if ( v26 >= v19 ) /*0x100684f33*/
      {
        goto LABEL_34; /*0x100684f33*/
      }
      std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x100684f40*/
    }
    if ( (v53 & 3) == 1 ) /*0x100684f7d*/
    {
      v28 = v53 - 1; /*0x100684f7f*/
      v29 = *(_QWORD *)(v53 - 1); /*0x100684f83*/
      v30 = *(_QWORD *)(v53 + 7); /*0x100684f87*/
      if ( *(_QWORD *)v30 ) /*0x100684f8b*/
        (*(void (__fastcall **)(__int64))v30)(v29); /*0x100684f97*/
      v31 = *(_QWORD *)(v30 + 8); /*0x100684f99*/
      if ( v31 ) /*0x100684fa1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x100684fab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x100684fbd*/
    }
LABEL_34:
    v32 = std::process::Child::kill::h216e7437f57b667c((char *)v12 + 28); /*0x100684fc2*/
    if ( (v32 & 3) == 1 ) /*0x100684fd2*/
    {
      v46 = v32 - 1; /*0x10068515a*/
      v47 = *(_QWORD *)(v32 - 1); /*0x10068515d*/
      v48 = *(_QWORD *)(v32 + 7); /*0x100685161*/
      if ( *(_QWORD *)v48 ) /*0x100685165*/
        (*(void (__fastcall **)(__int64))v48)(v47); /*0x100685171*/
      v49 = *(_QWORD *)(v48 + 8); /*0x100685173*/
      if ( v49 ) /*0x10068517b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v49, *(_QWORD *)(v48 + 16)); /*0x100685185*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x100685197*/
    }
    v33 = &v51; /*0x100684fd8*/
    v34 = (__int64)v12 + 28; /*0x100684fdc*/
    std::process::Child::wait::hb8726838914c9ff8(&v51, (char *)v12 + 28); /*0x100684fdf*/
    if ( v51 && (v53 & 3) == 1 ) /*0x100684ff6*/
    {
      v42 = (int *)(v53 - 1); /*0x100685105*/
      v43 = *(_QWORD *)(v53 - 1); /*0x100685109*/
      v44 = *(_QWORD *)(v53 + 7); /*0x10068510d*/
      if ( *(_QWORD *)v44 ) /*0x100685111*/
        (*(void (__fastcall **)(__int64))v44)(v43); /*0x10068511d*/
      v45 = *(_QWORD *)(v44 + 8); /*0x10068511f*/
      if ( v45 ) /*0x100685127*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v45, *(_QWORD *)(v44 + 16)); /*0x100685131*/
      v34 = 24; /*0x100685136*/
      v33 = v42; /*0x100685140*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 24, 8); /*0x100685143*/
      if ( (_BYTE)v57 ) /*0x10068514c*/
        goto LABEL_39; /*0x10068514c*/
    }
    else if ( (_BYTE)v57 ) /*0x100685000*/
    {
LABEL_39:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x10068501f*/
      goto LABEL_40; /*0x100685026*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100685203*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v33,
                             v34,
                             v35,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v12 + 24) = 1; /*0x100685210*/
    }
    goto LABEL_39; /*0x100685214*/
  }
  if ( !(_BYTE)v57 /*0x1006851d7*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v13,
                           a2,
                           v14,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v12 + 24) = 1; /*0x1006851e4*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x100684ef5*/
LABEL_40:
  v36 = v54; /*0x10068502b*/
  if ( !_InterlockedDecrement64(*v54) ) /*0x100685032*/
LABEL_41:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(v36); /*0x100685038*/
LABEL_42:
  v37 = v55; /*0x10068503d*/
  result = *v55; /*0x100685041*/
  if ( !_InterlockedDecrement64(*v55) ) /*0x100685044*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v37); /*0x100685058*/
  return result; /*0x10068504a*/
}