// __ZN13codexmate_lib4core5relay12proxy_server18record_codex_route @ 0x100259230 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::record_codex_route::h0d853fc1531bef50(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        void *a7,
        size_t a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r13
  char *v16; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  __int64 v43; // [rsp+20h] [rbp-F0h]
  __int64 v44; // [rsp+28h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+40h] [rbp-D0h]
  __int64 v46; // [rsp+48h] [rbp-C8h]
  __int64 v47; // [rsp+50h] [rbp-C0h]
  _DWORD v48[2]; // [rsp+5Ch] [rbp-B4h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-ACh]
  void *__src; // [rsp+68h] [rbp-A8h]
  __int64 v51; // [rsp+70h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+78h] [rbp-98h]
  __int64 v53; // [rsp+80h] [rbp-90h]
  __int64 v54; // [rsp+88h] [rbp-88h]
  __int64 v55; // [rsp+90h] [rbp-80h]
  int v56; // [rsp+98h] [rbp-78h]
  int v57; // [rsp+9Ch] [rbp-74h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-68h]
  __int64 v60; // [rsp+B0h] [rbp-60h]
  _QWORD *v61; // [rsp+B8h] [rbp-58h]
  __int64 v62; // [rsp+C0h] [rbp-50h]
  size_t __n; // [rsp+C8h] [rbp-48h]
  size_t v64; // [rsp+D0h] [rbp-40h]
  size_t v65; // [rsp+D8h] [rbp-38h]
  int v66; // [rsp+E4h] [rbp-2Ch]

  v12 = a6; /*0x100259244*/
  if ( a6 ) /*0x100259266*/
  {
    v16 = *(char **)(a6 + 8); /*0x100259268*/
    a6 = *(_QWORD *)(a6 + 16); /*0x10025926c*/
  }
  else
  {
    v16 = nullptr; /*0x100259272*/
  }
  v65 = a8; /*0x100259279*/
  __src = a7; /*0x100259281*/
  v56 = a10; /*0x1002592a0*/
  v57 = a9; /*0x1002592a7*/
  __n = a3; /*0x1002592b0*/
  v64 = a5; /*0x1002592ba*/
  codexmate_lib::core::relay::proxy_server::log_route_result::h15fcdab5b1b9c19e( /*0x1002592c1*/
    (__int64)a2,
    a3,
    (__int64)a4,
    a5,
    v16,
    a6,
    a9,
    a10,
    a11,
    a12);
  v18 = *a1; /*0x1002592c6*/
  v61 = (_QWORD *)(*a1 + 16LL); /*0x1002592cd*/
  v19 = *(_QWORD *)(v18 + 16); /*0x1002592d1*/
  if ( v19 ) /*0x1002592d8*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v19); /*0x1002592da*/
    if ( !(_BYTE)result ) /*0x1002592e1*/
      return result; /*0x1002592e1*/
  }
  else
  {
    v19 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v61); /*0x10025935c*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v19); /*0x10025935f*/
    if ( !(_BYTE)result ) /*0x100259366*/
      return result; /*0x100259366*/
  }
  v52 = 0x8000000000000000LL; /*0x1002592fb*/
  v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x100259302*/
  v51 = 0x7FFFFFFFFFFFFFFFLL; /*0x100259305*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10025930f*/
  {
    v23 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19, a3, v21, 0x7FFFFFFFFFFFFFFFLL); /*0x100259371*/
    LOBYTE(v23) = v23 ^ 1; /*0x100259376*/
    v66 = v23; /*0x100259378*/
    if ( *(_BYTE *)(v18 + 24) ) /*0x10025937b*/
    {
LABEL_8:
      if ( !(_BYTE)v66 /*0x100259723*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v51) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19, a3, v21, v22) )
      {
        *(_BYTE *)(v18 + 24) = 1; /*0x100259730*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v61); /*0x10025934e*/
    }
  }
  else
  {
    v66 = 0; /*0x100259311*/
    if ( *(_BYTE *)(v18 + 24) ) /*0x100259318*/
      goto LABEL_8; /*0x10025931e*/
  }
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v48); /*0x10025938a*/
  v24 = (v48[0] >> 13) - 1; /*0x10025939a*/
  v25 = 0; /*0x10025939d*/
  if ( v48[0] >> 13 <= 0 ) /*0x1002593a1*/
  {
    v26 = (1 - (v48[0] >> 13)) / 0x190u + 1; /*0x1002593b5*/
    v24 += 400 * v26; /*0x1002593bd*/
    v25 = -146097 * v26; /*0x1002593bf*/
  }
  v27 = (unsigned int)((1461 * v24) >> 2); /*0x1002593e2*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10025942f*/
  {
    v28 = 0; /*0x100259431*/
    goto LABEL_18; /*0x100259431*/
  }
  v45 = 1000 * (v48[1] + 86400LL * (int)(((v24 / 100) >> 2) + v27 + v25 + ((v48[0] >> 4) & 0x1FF) - v24 / 100 - 719163)) /*0x100259445*/
      + v49 / 0xF4240uLL;
  if ( __n ) /*0x10025944c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v27); /*0x10025944e*/
    v28 = 1; /*0x100259453*/
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100259462*/
    if ( !v29 ) /*0x10025946a*/
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, __n); /*0x100259434*/
    v30 = v29; /*0x10025946c*/
  }
  else
  {
    v30 = 1; /*0x100259478*/
  }
  v53 = v30; /*0x10025947d*/
  memcpy((void *)v30, a2, __n); /*0x10025948b*/
  if ( (v64 & 0x8000000000000000LL) != 0LL ) /*0x100259495*/
  {
    v31 = 0; /*0x100259497*/
    goto LABEL_25; /*0x100259497*/
  }
  if ( v64 ) /*0x1002594ab*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, a2); /*0x1002594ad*/
    v31 = 1; /*0x1002594b2*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v64, 1); /*0x1002594c1*/
    if ( !v32 ) /*0x1002594c9*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v64); /*0x10025949a*/
    v33 = v32; /*0x1002594cb*/
  }
  else
  {
    v33 = 1; /*0x1002594d0*/
  }
  v54 = v33; /*0x1002594d5*/
  v34 = (__int64)a4; /*0x1002594dc*/
  memcpy((void *)v33, a4, v64); /*0x1002594e3*/
  if ( !v12 ) /*0x1002594eb*/
  {
    v36 = 0x8000000000000000LL; /*0x100259559*/
    v35 = 0x8000000000000000LL; /*0x100259563*/
    if ( __src ) /*0x10025956e*/
      goto LABEL_32; /*0x10025956e*/
LABEL_36:
    v65 = 0x8000000000000000LL; /*0x100259570*/
    goto LABEL_42; /*0x10025957e*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v58, v12); /*0x1002594f4*/
  v35 = v58; /*0x1002594f9*/
  v62 = v59; /*0x100259501*/
  v46 = v60; /*0x100259509*/
  v12 += 24; /*0x100259510*/
  v33 = (__int64)&v58; /*0x100259514*/
  v34 = v12; /*0x100259518*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v58, v12); /*0x10025951b*/
  v36 = v58; /*0x100259520*/
  v55 = v59; /*0x100259528*/
  v47 = v60; /*0x100259530*/
  if ( !__src ) /*0x10025953f*/
    goto LABEL_36; /*0x10025953f*/
LABEL_32:
  if ( (v65 & 0x8000000000000000LL) != 0LL ) /*0x100259546*/
  {
    v37 = 0; /*0x100259548*/
    goto LABEL_34; /*0x100259548*/
  }
  if ( v65 ) /*0x100259580*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34); /*0x100259582*/
    v37 = 1; /*0x100259587*/
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1); /*0x100259596*/
    if ( !v38 ) /*0x10025959e*/
LABEL_34:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v37, v65); /*0x10025954b*/
    v12 = v38; /*0x1002595a0*/
  }
  else
  {
    v12 = 1; /*0x1002595ac*/
  }
  memcpy((void *)v12, __src, v65); /*0x1002595c0*/
LABEL_42:
  if ( a11 ) /*0x1002595cf*/
  {
    codexmate_lib::core::relay::models::sanitize_error_for_display::h90525d8d08e331fa(&v58, a11, a12); /*0x1002595dc*/
    v52 = v58; /*0x1002595e5*/
    v43 = v59; /*0x1002595f0*/
    v44 = v60; /*0x1002595fb*/
  }
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h32a69f25f89abb94(v18 + 160); /*0x100259609*/
  v40 = __n; /*0x10025960e*/
  *(_QWORD *)(v18 + 160) = __n; /*0x100259612*/
  *(_QWORD *)(v18 + 168) = v53; /*0x100259620*/
  *(_QWORD *)(v18 + 176) = v40; /*0x100259627*/
  v41 = v64; /*0x10025962e*/
  *(_QWORD *)(v18 + 184) = v64; /*0x100259632*/
  *(_QWORD *)(v18 + 192) = v54; /*0x100259640*/
  *(_QWORD *)(v18 + 200) = v41; /*0x100259647*/
  *(_QWORD *)(v18 + 208) = v35; /*0x10025964e*/
  *(_QWORD *)(v18 + 216) = v62; /*0x100259659*/
  *(_QWORD *)(v18 + 224) = v46; /*0x100259667*/
  *(_QWORD *)(v18 + 232) = v36; /*0x10025966e*/
  *(_QWORD *)(v18 + 240) = v55; /*0x100259679*/
  *(_QWORD *)(v18 + 248) = v47; /*0x100259687*/
  v42 = v65; /*0x10025968e*/
  *(_QWORD *)(v18 + 256) = v65; /*0x100259692*/
  *(_QWORD *)(v18 + 264) = v12; /*0x100259699*/
  *(_QWORD *)(v18 + 272) = v42; /*0x1002596a0*/
  *(_QWORD *)(v18 + 280) = v52; /*0x1002596ae*/
  *(_QWORD *)(v18 + 288) = v43; /*0x1002596c3*/
  *(_QWORD *)(v18 + 296) = v44; /*0x1002596ca*/
  *(_QWORD *)(v18 + 304) = v45; /*0x1002596d8*/
  *(_WORD *)(v18 + 312) = v57; /*0x1002596e2*/
  *(_WORD *)(v18 + 314) = v56; /*0x1002596ec*/
  if ( !(_BYTE)v66 /*0x100259739*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v51) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18 + 160, a11, v39, v44) )
  {
    *(_BYTE *)(v18 + 24) = 1; /*0x100259742*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v61); /*0x10025933d*/
}