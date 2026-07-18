// mac 1.2.2 NEW codexmate_lib4core12debug_bundle20header_names_sum 0x101222970 d=1
__int64 __fastcall core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  char *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-1050h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1028h]
  unsigned __int64 v13; // [rsp+1000h] [rbp-50h]
  __int64 v14; // [rsp+1008h] [rbp-48h]
  __int64 v15; // [rsp+1010h] [rbp-40h]
  __int64 v16; // [rsp+1018h] [rbp-38h]
  unsigned __int64 v17; // [rsp+1020h] [rbp-30h]

  v12 = 0; /*0x101222984*/
  v4 = a2 - (a2 >> 1); /*0x10122299c*/
  v5 = 333333; /*0x1012229a6*/
  if ( a2 < 0x51615 ) /*0x1012229ac*/
    v5 = a2; /*0x1012229ac*/
  if ( v5 <= v4 ) /*0x1012229b3*/
    v5 = a2 - (a2 >> 1); /*0x1012229b3*/
  if ( v5 < 0xAB ) /*0x1012229be*/
  {
    v7 = &v11; /*0x1012229e9*/
    v8 = 170; /*0x1012229f0*/
  }
  else
  {
    if ( v4 > 0x555555555555555LL ) /*0x1012229d9*/
    {
      v6 = 0; /*0x1012229db*/
      goto LABEL_8; /*0x1012229db*/
    }
    v16 = a1; /*0x1012229f7*/
    v17 = a2; /*0x1012229fb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1012229ff*/
    v6 = 8; /*0x101222a04*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v5, 8u); /*0x101222a12*/
    if ( !v9 ) /*0x101222a1a*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6); /*0x1012229de*/
    v7 = (char *)v9; /*0x101222a1c*/
    v13 = v5; /*0x101222a1f*/
    v14 = v9; /*0x101222a23*/
    v15 = 0; /*0x101222a27*/
    v8 = v5; /*0x101222a2f*/
    a2 = v17; /*0x101222a32*/
    a1 = v16; /*0x101222a36*/
  }
  result = core::slice::sort::stable::drift::sort::h0a33c5d45a147c4d(a1, a2, v7, v8, a2 < 0x41, a3); /*0x101222a4b*/
  if ( v5 > 0xAA ) /*0x101222a57*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101222a6a*/
  return result; /*0x101222a6f*/
}