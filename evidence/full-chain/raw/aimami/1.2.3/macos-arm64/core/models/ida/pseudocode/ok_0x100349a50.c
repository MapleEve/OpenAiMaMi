// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349a50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8831ad64c2bad91(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349a60*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349a6f*/
  if ( !v2 ) /*0x100349a77*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349b28*/
  v3 = v2; /*0x100349a7d*/
  *v2 = 27503; /*0x100349a80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349a85*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349a94*/
  if ( !v4 ) /*0x100349a9c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349b39*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349aa2*/
  *v4 = 1667462483; /*0x100349aa9*/
  qmemcpy((void *)(a1 + 72), a2, 0x80u); /*0x100349abb*/
  *(_DWORD *)(a1 + 200) = 1; /*0x100349abe*/
  *(_BYTE *)(a1 + 204) = 1; /*0x100349ac9*/
  *(_QWORD *)a1 = 2; /*0x100349ad1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349ad8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100349adc*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100349ae4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100349aec*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100349af0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349af8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100349b00*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349b08*/
  return a1; /*0x100349b17*/
}