// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1006255f0 d=1
__int64 __fastcall tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::new::h62f6dc3c9d9f2a15(
        char *__dst,
        __int64 a2,
        const void *a3,
        size_t a4,
        const void *a5)
{
  void *v7; // rax
  void *v8; // r14
  const void *v9; // r14
  __int64 v10; // rax
  _QWORD __dsta[61]; // [rsp+0h] [rbp-3D0h] BYREF
  _QWORD __src[48]; // [rsp+1E8h] [rbp-1E8h] BYREF
  _QWORD v14[3]; // [rsp+368h] [rbp-68h] BYREF
  size_t v15; // [rsp+380h] [rbp-50h] BYREF
  __int64 v16; // [rsp+388h] [rbp-48h]
  __int64 v17; // [rsp+390h] [rbp-40h]
  const void *v18; // [rsp+398h] [rbp-38h]
  void *v19; // [rsp+3A0h] [rbp-30h]

  v18 = a5; /*0x100625604*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100625614*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x100625621*/
  if ( !v7 ) /*0x100625629*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1006258a0*/
  v8 = v7; /*0x10062562f*/
  memcpy(v7, a3, a4); /*0x10062563b*/
  v14[0] = a4; /*0x100625640*/
  v19 = v8; /*0x100625644*/
  v14[1] = v8; /*0x100625648*/
  v14[2] = a4; /*0x10062564c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v15, (__int64)v14); /*0x100625658*/
  v9 = v18; /*0x100625664*/
  _$LT$tauri_runtime_wry..WindowBuilderWrapper$u20$as$u20$tauri_runtime..window..WindowBuilder$GT$::new::hde6338afb8f44543(__src); /*0x100625668*/
  __dsta[57] = a2; /*0x10062566d*/
  __dsta[54] = v15; /*0x10062567c*/
  __dsta[55] = v16; /*0x100625683*/
  __dsta[56] = v17; /*0x10062568e*/
  memcpy(__dsta, __src, 0x180u); /*0x1006256a8*/
  __dsta[58] = 0; /*0x1006256ad*/
  __dsta[59] = 0; /*0x1006256b8*/
  __dsta[48] = 2; /*0x1006256c3*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v15, (__int64)v14); /*0x1006256de*/
  qmemcpy(__dst + 488, v9, 0x60u); /*0x1006256f3*/
  *(_QWORD *)((char *)&__src[2] + 4) = v17; /*0x1006256fa*/
  *(_QWORD *)((char *)&__src[1] + 4) = v16; /*0x100625709*/
  *(_QWORD *)((char *)__src + 4) = v15; /*0x100625710*/
  memcpy(__dst, __dsta, 0x1E8u); /*0x100625726*/
  *((_QWORD *)__dst + 73) = 2; /*0x10062572b*/
  *((_QWORD *)__dst + 79) = 0; /*0x100625737*/
  *((_QWORD *)__dst + 80) = 8; /*0x100625743*/
  *((_QWORD *)__dst + 81) = 0; /*0x10062574f*/
  *((_QWORD *)__dst + 82) = 0x8000000000000000LL; /*0x100625765*/
  *((_QWORD *)__dst + 85) = 0x8000000000000000LL; /*0x10062576d*/
  *((_QWORD *)__dst + 88) = 0x8000000000000000LL; /*0x100625775*/
  *((_QWORD *)__dst + 91) = 0x8000000000000000LL; /*0x10062577d*/
  *((_QWORD *)__dst + 102) = 0x8000000000000000LL; /*0x100625785*/
  *((_DWORD *)__dst + 210) = 2; /*0x10062578d*/
  *((_DWORD *)__dst + 222) = 2; /*0x100625799*/
  *((_QWORD *)__dst + 114) = 0; /*0x1006257a5*/
  __dst[920] = 1; /*0x1006257b1*/
  *(_DWORD *)(__dst + 921) = 0; /*0x1006257ba*/
  __dst[925] = 1; /*0x1006257c6*/
  *(_DWORD *)(__dst + 926) = 0; /*0x1006257cf*/
  *((_WORD *)__dst + 473) = 0; /*0x1006257db*/
  *((_DWORD *)__dst + 238) = 50462976; /*0x1006257e6*/
  *((_DWORD *)__dst + 245) = __src[3]; /*0x1006257f8*/
  *(_QWORD *)(__dst + 972) = __src[2]; /*0x100625807*/
  v10 = __src[0]; /*0x10062580f*/
  *(_QWORD *)(__dst + 964) = __src[1]; /*0x10062581d*/
  *(_QWORD *)(__dst + 956) = v10; /*0x100625825*/
  *((_QWORD *)__dst + 123) = 0; /*0x10062582d*/
  *((_QWORD *)__dst + 125) = 0; /*0x100625839*/
  *((_QWORD *)__dst + 127) = 0; /*0x100625845*/
  *((_QWORD *)__dst + 129) = 0; /*0x100625851*/
  *((_QWORD *)__dst + 131) = 0; /*0x10062585d*/
  *((_QWORD *)__dst + 133) = 0; /*0x100625869*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100625886*/
}