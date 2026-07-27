// __ZN13codexmate_lib4core5relay12proxy_server25codex_router_lookup_model @ 0x10025ef90 | 基线 same-set
size_t *__fastcall codexmate_lib::core::relay::proxy_server::codex_router_lookup_model::h57b1d0b4e84703cb(
        size_t *a1,
        char *a2,
        __int64 a3,
        int a4)
{
  size_t v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // edx
  signed __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  void *v15; // rax

  v4 = a3; /*0x10025ef9e*/
  if ( a4 ) /*0x10025efa6*/
  {
    if ( (unsigned __int64)a3 >= 0xF ) /*0x10025efac*/
    {
      v6 = 0x2D6F70656E61692DLL; /*0x10025efcf*/
      v7 = _byteswap_uint64(*(_QWORD *)&a2[a3 - 15]); /*0x10025efde*/
      if ( v7 != 0x2D6F70656E61692DLL /*0x10025effd*/
        || (v6 = 0x2D636F6D70616374LL, v7 = _byteswap_uint64(*(_QWORD *)&a2[a3 - 8]), v8 = 0, v7 != 0x2D636F6D70616374LL) )
      {
        v8 = 2 * (v6 >= v7) - 1; /*0x10025f007*/
      }
      v9 = v4 - 15; /*0x10025f00e*/
      if ( v4 != 15 && !v8 ) /*0x10025f016*/
      {
        if ( v9 >= 0 ) /*0x10025f01b*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025f0b4*/
          v10 = 1; /*0x10025f0b9*/
          v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10025f0c7*/
          if ( v15 ) /*0x10025f0cf*/
          {
            v12 = (__int64)v15; /*0x10025f0d5*/
            memcpy(v15, a2, v9); /*0x10025f0e1*/
            v4 -= 15LL; /*0x10025f0e6*/
            goto LABEL_23; /*0x10025f0e9*/
          }
        }
        else
        {
          v10 = 0; /*0x10025f021*/
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10025f02a*/
      }
    }
    else if ( !a3 ) /*0x10025efb1*/
    {
      goto LABEL_21; /*0x10025efb1*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025f032*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10025f03f*/
    if ( !v11 ) /*0x10025f047*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x10025f0f3*/
    v12 = v11; /*0x10025f04d*/
    goto LABEL_22; /*0x10025f053*/
  }
  if ( a3 < 0 ) /*0x10025efbb*/
  {
    v5 = 0; /*0x10025efc1*/
    goto LABEL_7; /*0x10025efc1*/
  }
  if ( !a3 ) /*0x10025f055*/
  {
LABEL_21:
    v12 = 1; /*0x10025f083*/
    goto LABEL_22; /*0x10025f083*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025f05a*/
  v5 = 1; /*0x10025f05f*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10025f06d*/
  if ( !v13 ) /*0x10025f075*/
LABEL_7:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x10025efc4*/
  v12 = v13; /*0x10025f07b*/
LABEL_22:
  memcpy((void *)v12, a2, v4); /*0x10025f089*/
LABEL_23:
  *a1 = v4; /*0x10025f094*/
  a1[1] = v12; /*0x10025f097*/
  a1[2] = v4; /*0x10025f09b*/
  return a1; /*0x10025f0a6*/
}