// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_router_lookup_model node 0x1005abf60 depth=0
size_t *__fastcall codexmate_lib::core::relay::proxy_server::codex_router_lookup_model::h1697226fd2cc16b2(
        size_t *a1,
        char *a2,
        __int64 a3,
        int a4)
{
  size_t v4; // r14
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  void *v13; // rax

  v4 = a3; /*0x1005abf6e*/
  if ( a4 ) /*0x1005abf76*/
  {
    if ( (unsigned __int64)a3 >= 0xF ) /*0x1005abf7c*/
    {
      v6 = 0; /*0x1005abfbd*/
      v7 = a3 - 15; /*0x1005abfc8*/
      if ( a3 != 15 ) /*0x1005abfcc*/
      {
        LOBYTE(v6) = (*(_QWORD *)&a2[a3 - 15] ^ 0x2D69616E65706F2DLL | *(_QWORD *)&a2[a3 - 8] ^ 0x746361706D6F632DLL) != 0; /*0x1005abfce*/
        if ( !v6 ) /*0x1005abfd2*/
        {
          if ( v7 >= 0 ) /*0x1005abfd7*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ac070*/
            v8 = 1; /*0x1005ac075*/
            v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x1005ac083*/
            if ( v13 ) /*0x1005ac08b*/
            {
              v10 = (__int64)v13; /*0x1005ac091*/
              memcpy(v13, a2, v7); /*0x1005ac09d*/
              v4 = v7; /*0x1005ac0a2*/
              goto LABEL_20; /*0x1005ac0a5*/
            }
          }
          else
          {
            v8 = 0; /*0x1005abfdd*/
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1005abfe6*/
        }
      }
    }
    else if ( !a3 ) /*0x1005abf81*/
    {
      goto LABEL_18; /*0x1005abf81*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005abfee*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x1005abffb*/
    if ( !v9 ) /*0x1005ac003*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1005ac0af*/
    v10 = v9; /*0x1005ac009*/
    goto LABEL_19; /*0x1005ac00f*/
  }
  if ( a3 < 0 ) /*0x1005abf8b*/
  {
    v5 = 0; /*0x1005abf91*/
    goto LABEL_7; /*0x1005abf91*/
  }
  if ( !a3 ) /*0x1005ac011*/
  {
LABEL_18:
    v10 = 1; /*0x1005ac03f*/
    goto LABEL_19; /*0x1005ac03f*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ac016*/
  v5 = 1; /*0x1005ac01b*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x1005ac029*/
  if ( !v11 ) /*0x1005ac031*/
LABEL_7:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1005abf94*/
  v10 = v11; /*0x1005ac037*/
LABEL_19:
  memcpy((void *)v10, a2, v4); /*0x1005ac045*/
LABEL_20:
  *a1 = v4; /*0x1005ac050*/
  a1[1] = v10; /*0x1005ac053*/
  a1[2] = v4; /*0x1005ac057*/
  return a1; /*0x1005ac062*/
}