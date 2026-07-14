// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b29170 depth=2
void *__fastcall reqwest::error::Error::new::h3da67a71aa4363ce(__int64 *a1, const void *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  void *v10; // rax
  void *v11; // rbx
  _QWORD __src[28]; // [rsp+0h] [rbp-E0h] BYREF

  __src[22] = a1[4]; /*0x100b29188*/
  __src[21] = a1[3]; /*0x100b29190*/
  __src[20] = a1[2]; /*0x100b29198*/
  v3 = *a1; /*0x100b2919c*/
  __src[19] = a1[1]; /*0x100b291a3*/
  __src[18] = v3; /*0x100b291a7*/
  if ( a2 ) /*0x100b291ae*/
  {
    if ( a3 < 0 ) /*0x100b291b6*/
    {
      v5 = 0; /*0x100b291b8*/
      goto LABEL_4; /*0x100b291b8*/
    }
    if ( a3 ) /*0x100b291d2*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b291d7*/
      v5 = 1; /*0x100b291dc*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x100b291ea*/
      if ( !v7 ) /*0x100b291f2*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, a3); /*0x100b291bb*/
      v8 = v7; /*0x100b291f4*/
    }
    else
    {
      v8 = 1; /*0x100b291fc*/
    }
    memcpy((void *)v8, a2, a3); /*0x100b29208*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b2920d*/
    v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100b2921c*/
    if ( !v6 ) /*0x100b29224*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100b292e2*/
    *v6 = a3; /*0x100b2922a*/
    v6[1] = v8; /*0x100b2922d*/
    v6[2] = a3; /*0x100b29231*/
  }
  else
  {
    v6 = nullptr; /*0x100b291cb*/
  }
  __src[15] = a1[4]; /*0x100b2923c*/
  __src[14] = a1[3]; /*0x100b29244*/
  __src[13] = a1[2]; /*0x100b2924c*/
  v9 = *a1; /*0x100b29250*/
  __src[12] = a1[1]; /*0x100b29257*/
  __src[11] = v9; /*0x100b2925b*/
  __src[16] = v6; /*0x100b29262*/
  __src[17] = &anon_516a4e103f9b0f210a1636c17ba041ef_65; /*0x100b2926d*/
  __src[0] = 0x8000000000000000LL; /*0x100b2927b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b29282*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x90u, 8u); /*0x100b29291*/
  if ( !v10 ) /*0x100b29299*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 144); /*0x100b292d1*/
  v11 = v10; /*0x100b292aa*/
  memcpy(v10, __src, 0x90u); /*0x100b292ad*/
  return v11; /*0x100b292b5*/
}