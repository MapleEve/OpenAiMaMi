// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x1010a93b0 depth=1
// std4path4Path15_with_file_name
size_t *__fastcall std::path::Path::_with_file_name::h86e79e0aa4e97973(
        size_t *a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r13
  size_t v9; // rax
  size_t v11; // [rsp+0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+8h] [rbp-38h]
  size_t v13; // [rsp+10h] [rbp-30h]

  if ( a3 ) /*0x1010a93d0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a93d5*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x1010a93ea*/
    if ( !v8 ) /*0x1010a93f0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1010a93fa*/
  }
  else
  {
    v8 = 1; /*0x1010a93ff*/
  }
  memcpy((void *)v8, a2, a3); /*0x1010a940b*/
  v11 = a3; /*0x1010a9410*/
  v12 = v8; /*0x1010a9414*/
  v13 = a3; /*0x1010a9418*/
  std::path::PathBuf::_set_file_name::h117a53bdfc57ef23(&v11, a4, a5); /*0x1010a9426*/
  a1[2] = v13; /*0x1010a942f*/
  v9 = v11; /*0x1010a9433*/
  a1[1] = v12; /*0x1010a943b*/
  *a1 = v9; /*0x1010a943f*/
  return a1; /*0x1010a9445*/
}