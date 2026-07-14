// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x10106d320 depth=1
__int64 __fastcall bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(__int64 a1, const void *a2, size_t a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD v8[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( a3 ) /*0x10106d336*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10106d33b*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x10106d348*/
    if ( !v5 ) /*0x10106d350*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x10106d395*/
    v6 = v5; /*0x10106d352*/
  }
  else
  {
    v6 = 1; /*0x10106d35a*/
  }
  v8[0] = a3; /*0x10106d35f*/
  v8[1] = v6; /*0x10106d363*/
  memcpy((void *)v6, a2, a3); /*0x10106d36a*/
  v8[2] = a3; /*0x10106d36f*/
  ((void (__fastcall *)(__int64, _QWORD *))_$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::from::hb3f89e5123ac12e3)( /*0x10106d37a*/
    a1,
    v8);
  return a1; /*0x10106d382*/
}