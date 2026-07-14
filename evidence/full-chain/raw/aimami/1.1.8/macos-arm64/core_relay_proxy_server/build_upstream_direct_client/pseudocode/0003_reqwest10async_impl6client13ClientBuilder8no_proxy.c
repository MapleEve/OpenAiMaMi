// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x100b34ed0 depth=1
void *__fastcall reqwest::async_impl::client::ClientBuilder::no_proxy::h90b4f44fee852247(void *__dst, _QWORD *__src)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // r12

  v3 = __src[73]; /*0x100b34ee4*/
  v4 = __src[74]; /*0x100b34eeb*/
  __src[74] = 0; /*0x100b34ef2*/
  for ( i = v4 + 1; i != 1; --i ) /*0x100b34efd*/
  {
    core::ptr::drop_in_place$LT$reqwest..proxy..Matcher$GT$::he79c42ba748c7da0(v3); /*0x100b34f10*/
    v3 += 464; /*0x100b34f15*/
  }
  *((_BYTE *)__src + 900) = 0; /*0x100b34f1a*/
  memcpy(__dst, __src, 0x3A8u); /*0x100b34f2c*/
  return __dst; /*0x100b34f38*/
}