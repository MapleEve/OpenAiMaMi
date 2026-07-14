// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x10105a810 depth=4
// serde_json4read5error
_QWORD *__fastcall serde_json::read::error::h0a43b4e7c9054be0(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        double a4,
        double a5,
        double a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char **v12; // rcx
  __int64 v13; // rax
  _QWORD *result; // rax

  v6 = a2[2]; /*0x10105a822*/
  v7 = a2[1]; /*0x10105a826*/
  if ( v6 > v7 ) /*0x10105a82d*/
  {
    v12 = &anon_abe04cc3e28f8d11082d563363c2ff71_7; /*0x10105a8b8*/
LABEL_8:
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v6, v7, v12, a4, a5, a6); /*0x10105a8bf*/
  }
  v8 = *a2; /*0x10105a836*/
  if ( (memchr::arch::x86_64::memchr::memrchr_raw::FN::h7edc06033e10b4f5() & 1) != 0 ) /*0x10105a854*/
  {
    v10 = v9 - v8; /*0x10105a856*/
    v11 = v10 + 1; /*0x10105a859*/
    if ( v10 >= v7 ) /*0x10105a860*/
    {
      v12 = &anon_abe04cc3e28f8d11082d563363c2ff71_6; /*0x10105a862*/
      v6 = v10 + 1; /*0x10105a869*/
      goto LABEL_8; /*0x10105a86c*/
    }
  }
  else
  {
    v11 = 0; /*0x10105a86e*/
  }
  v13 = memchr::arch::x86_64::memchr::count_raw::FN::hd63946b3172d0983(); /*0x10105a887*/
  result = serde_json::error::Error::syntax::hf7c449ec16fad968(a3, v13 + 1, v6 - v11); /*0x10105a899*/
  a1[1] = result; /*0x10105a89e*/
  *a1 = 2; /*0x10105a8a2*/
  return result; /*0x10105a8ad*/
}