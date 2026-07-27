// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x100344f00 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h1844899531e42e93(
        _QWORD *__dst,
        void *__src,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100344f17*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100344f26*/
  if ( !v4 ) /*0x100344f2e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034500d*/
  v5 = v4; /*0x100344f34*/
  *v4 = 27503; /*0x100344f37*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100344f3c*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100344f4b*/
  if ( !v6 ) /*0x100344f53*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034501e*/
  v7 = v6; /*0x100344f59*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x100344f5c*/
  *v6 = 1667462483; /*0x100344f63*/
  __dst[88] = a3[2]; /*0x100344f6d*/
  v8 = *a3; /*0x100344f75*/
  __dst[87] = a3[1]; /*0x100344f7c*/
  __dst[86] = v8; /*0x100344f84*/
  memcpy(__dst, __src, 0x280u); /*0x100344f97*/
  *((_DWORD *)__dst + 178) = 1; /*0x100344f9c*/
  *((_BYTE *)__dst + 716) = 1; /*0x100344fa8*/
  __dst[80] = 2; /*0x100344fb1*/
  __dst[81] = v5; /*0x100344fbd*/
  __dst[82] = 2; /*0x100344fc5*/
  __dst[83] = 7; /*0x100344fd1*/
  __dst[84] = v7; /*0x100344fdd*/
  __dst[85] = 7; /*0x100344fe5*/
  return __dst; /*0x100344ff8*/
}