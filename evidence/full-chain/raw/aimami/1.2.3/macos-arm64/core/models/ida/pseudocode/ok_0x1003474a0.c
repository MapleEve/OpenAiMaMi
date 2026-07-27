// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003474a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hbccf9fcf38e62029(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003474b0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003474bf*/
  if ( !v2 ) /*0x1003474c7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034757a*/
  v3 = v2; /*0x1003474cd*/
  *v2 = 27503; /*0x1003474d0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003474d5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003474e4*/
  if ( !v4 ) /*0x1003474ec*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034758b*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003474f2*/
  *v4 = 1667462483; /*0x1003474f9*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100347503*/
  v5 = *a2; /*0x100347507*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x10034750e*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100347512*/
  *(_DWORD *)(a1 + 96) = 1; /*0x100347516*/
  *(_BYTE *)(a1 + 100) = 1; /*0x10034751e*/
  *(_QWORD *)a1 = 2; /*0x100347523*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10034752a*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034752e*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347536*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034753e*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347542*/
  *(_QWORD *)(a1 + 48) = 0; /*0x10034754a*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347552*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034755a*/
  return a1; /*0x100347569*/
}