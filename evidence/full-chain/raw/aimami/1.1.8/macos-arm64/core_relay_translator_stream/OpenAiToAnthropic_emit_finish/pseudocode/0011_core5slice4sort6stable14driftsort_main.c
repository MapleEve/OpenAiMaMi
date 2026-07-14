// mac 1.1.8 behavioral OpenAiToAnthropic_emit_finish 0x1004f6b90 d=1
__int64 __fastcall core::slice::sort::stable::driftsort_main::h3b1adbb0993cbbfb(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-1030h] BYREF
  __int64 v12; // [rsp+8h] [rbp-1028h]
  unsigned __int64 v13; // [rsp+1000h] [rbp-30h]

  v12 = 0; /*0x1004f6ba4*/
  v11 = v3; /*0x1004f6bac*/
  v5 = a2 - (a2 >> 1); /*0x1004f6bb9*/
  v6 = 2000000; /*0x1004f6bc3*/
  if ( a2 < 0x1E8480 ) /*0x1004f6bc8*/
    v6 = a2; /*0x1004f6bc8*/
  if ( v6 <= v5 ) /*0x1004f6bcf*/
    v6 = a2 - (a2 >> 1); /*0x1004f6bcf*/
  if ( v6 < 0x401 ) /*0x1004f6bda*/
  {
    v7 = &v11; /*0x1004f6bdc*/
    v8 = 1024; /*0x1004f6be3*/
    goto LABEL_11; /*0x1004f6be8*/
  }
  if ( v5 >> 62 != 0 || 4 * v6 > 0x7FFFFFFFFFFFFFFCLL ) /*0x1004f6c06*/
  {
    v9 = 0; /*0x1004f6c0d*/
    goto LABEL_9; /*0x1004f6c0d*/
  }
  v13 = a2; /*0x1004f6c1b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004f6c22*/
  v9 = 4; /*0x1004f6c27*/
  v7 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v6, 4u); /*0x1004f6c41*/
  v8 = v6; /*0x1004f6c44*/
  if ( !v7 ) /*0x1004f6c4a*/
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, 4 * v6); /*0x1004f6c10*/
LABEL_11:
  result = core::slice::sort::stable::drift::sort::h017dddd23d7284a0(a1, a2, v7, v8, a2 < 0x41, a3, v11, v12); /*0x1004f6c4c*/
  if ( v6 > 0x400 ) /*0x1004f6c69*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f6c7a*/
  return result; /*0x1004f6c86*/
}