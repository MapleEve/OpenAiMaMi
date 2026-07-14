// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1010d9a50 depth=1
// alloc3fmt6format12format_inner
size_t *__fastcall alloc::fmt::format::format_inner::h3c16c74008a310d4(
        size_t *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  unsigned __int8 *v6; // rcx
  unsigned __int64 v7; // r12
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  size_t v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  size_t v13; // rax
  bool v15; // sf
  size_t v16; // [rsp+8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-40h]
  size_t v18; // [rsp+18h] [rbp-38h]
  char v19[41]; // [rsp+27h] [rbp-29h] BYREF

  if ( (a3 & 1) != 0 ) /*0x1010d9a6e*/
  {
    v10 = a3 >> 1; /*0x1010d9b04*/
  }
  else
  {
    v4 = *a2; /*0x1010d9a74*/
    if ( !*a2 ) /*0x1010d9a7a*/
    {
LABEL_16:
      v12 = 1; /*0x1010d9b3f*/
      v10 = 0; /*0x1010d9b44*/
      goto LABEL_17; /*0x1010d9b44*/
    }
    v5 = 0; /*0x1010d9a80*/
    v6 = a2; /*0x1010d9a82*/
    v7 = 0; /*0x1010d9a85*/
    do /*0x1010d9a9e*/
    {
      v8 = (unsigned __int16 *)(v6 + 1); /*0x1010d9aa0*/
      if ( (v4 & 0x80u) == 0 ) /*0x1010d9aa5*/
      {
        v7 += v4; /*0x1010d9a93*/
        v6 = (unsigned __int8 *)v8 + v4; /*0x1010d9a96*/
      }
      else if ( __OFSUB__(-v4, 1) ) /*0x1010d9aa9*/
      {
        v9 = *v8; /*0x1010d9aae*/
        v7 += v9; /*0x1010d9ab1*/
        v6 = (unsigned __int8 *)v8 + v9 + 2; /*0x1010d9ab4*/
      }
      else
      {
        v5 |= v7 == 0; /*0x1010d9ac2*/
        v6 = (unsigned __int8 *)v8 /*0x1010d9afc*/
           + ((v4 >> 1) & 2)
           + ((v4 >> 2) & 2)
           + ((unsigned __int8)((v4 << 7) | (32 * v4) & 0x40) >> 5);
      }
      v4 = *v6; /*0x1010d9a99*/
    }
    while ( *v6 ); /*0x1010d9a9e*/
    if ( ((v7 < 0x10) & v5) != 0 ) /*0x1010d9b12*/
    {
      v10 = 0; /*0x1010d9b18*/
    }
    else
    {
      v15 = (v7 & 0x4000000000000000LL) != 0; /*0x1010d9b9a*/
      v10 = 2 * v7; /*0x1010d9b9a*/
      if ( v15 ) /*0x1010d9b9d*/
      {
        v11 = 0; /*0x1010d9ba3*/
        goto LABEL_21; /*0x1010d9ba3*/
      }
    }
  }
  if ( !v10 ) /*0x1010d9b1e*/
    goto LABEL_16; /*0x1010d9b1e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010d9b20*/
  v11 = 1; /*0x1010d9b25*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1u); /*0x1010d9b33*/
  if ( !v12 ) /*0x1010d9b3b*/
LABEL_21:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x1010d9ba6*/
LABEL_17:
  v16 = v10; /*0x1010d9b47*/
  v17 = v12; /*0x1010d9b4b*/
  v18 = 0; /*0x1010d9b4f*/
  if ( (unsigned __int8)core::fmt::write::h2e5a8157a38fb62d(&v16, &off_1015AFCB8, a2, a3) ) /*0x1010d9b68*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010d9bcf*/
      (__int64)"a formatting trait implementation returned an error when the underlying stream did notcapacity overflowLayoutError",
      86,
      (__int64)v19,
      (__int64)&unk_1015AFC60,
      (__int64)&off_1015AFCE8);
  a1[2] = v18; /*0x1010d9b75*/
  v13 = v16; /*0x1010d9b79*/
  a1[1] = v17; /*0x1010d9b81*/
  *a1 = v13; /*0x1010d9b85*/
  return a1; /*0x1010d9b8b*/
}