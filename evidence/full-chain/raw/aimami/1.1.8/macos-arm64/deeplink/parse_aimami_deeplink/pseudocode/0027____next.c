// mac 1.1.8 parse_aimami_deeplink node va=0x10108cd40 depth=2
// _::next
size_t *__fastcall _$LT$form_urlencoded..ParseIntoOwned$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h27f65271964bff85(
        size_t *a1)
{
  size_t v2; // r12
  size_t v3; // r14
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  void *v9; // rsi
  __int64 v10; // r13
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // rax
  __int64 v14; // r15
  _QWORD v16[2]; // [rsp+0h] [rbp-70h] BYREF
  size_t __n; // [rsp+10h] [rbp-60h]
  __int64 v18; // [rsp+18h] [rbp-58h]
  void *v19; // [rsp+20h] [rbp-50h]
  size_t v20; // [rsp+28h] [rbp-48h]
  size_t v21; // [rsp+30h] [rbp-40h]
  void *__src; // [rsp+38h] [rbp-38h]
  void *v23; // [rsp+40h] [rbp-30h]

  _$LT$form_urlencoded..Parse$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f4a03a90f1739ce(v16); /*0x10108cd62*/
  v2 = v16[0]; /*0x10108cd67*/
  if ( v16[0] != 0x8000000000000001LL ) /*0x10108cd72*/
  {
    __src = (void *)v16[1]; /*0x10108cd80*/
    v3 = __n; /*0x10108cd84*/
    v4 = v18; /*0x10108cd88*/
    v23 = v19; /*0x10108cd90*/
    v5 = v20; /*0x10108cd94*/
    if ( v16[0] == 0x8000000000000000LL ) /*0x10108cd9b*/
    {
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10108cda0*/
      {
        v6 = 0; /*0x10108cda2*/
        goto LABEL_6; /*0x10108cda2*/
      }
      v21 = v20; /*0x10108cdae*/
      if ( __n ) /*0x10108cdb2*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10108cdb4*/
        v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x10108cdc1*/
        v6 = 1; /*0x10108cdc6*/
        if ( !v7 ) /*0x10108cdce*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v3); /*0x10108cda4*/
        v8 = v7; /*0x10108cdd0*/
      }
      else
      {
        v8 = 1; /*0x10108cdd5*/
      }
      memcpy((void *)v8, __src, v3); /*0x10108cde5*/
      __src = (void *)v8; /*0x10108cdea*/
      v2 = v3; /*0x10108cdee*/
      v5 = v21; /*0x10108cdf1*/
    }
    if ( v4 == 0x8000000000000000LL ) /*0x10108cdf8*/
    {
      v9 = v23; /*0x10108cdfd*/
      if ( v5 < 0 ) /*0x10108ce01*/
      {
        v10 = 0; /*0x10108ce03*/
        goto LABEL_15; /*0x10108ce03*/
      }
      if ( v5 ) /*0x10108ce19*/
      {
        v12 = v5; /*0x10108ce1b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10108ce1e*/
        v10 = 1; /*0x10108ce23*/
        v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1u); /*0x10108ce31*/
        v5 = v12; /*0x10108ce36*/
        if ( !v13 ) /*0x10108ce3c*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v5); /*0x10108ce06*/
        v9 = v23; /*0x10108ce3e*/
      }
      else
      {
        v13 = 1; /*0x10108ce44*/
      }
      v21 = v13; /*0x10108ce4c*/
      v14 = v5; /*0x10108ce50*/
      memcpy((void *)v13, v9, v5); /*0x10108ce53*/
      v5 = v14; /*0x10108ce58*/
      v4 = v14; /*0x10108ce5b*/
      v11 = v21; /*0x10108ce5e*/
    }
    else
    {
      v11 = (size_t)v23; /*0x10108ce13*/
    }
    *a1 = v2; /*0x10108ce62*/
    a1[1] = (size_t)__src; /*0x10108ce69*/
    a1[2] = v3; /*0x10108ce6d*/
    a1[3] = v4; /*0x10108ce71*/
    a1[4] = v11; /*0x10108ce75*/
    a1[5] = v5; /*0x10108ce79*/
    return a1; /*0x10108ce79*/
  }
  *a1 = 0x8000000000000000LL; /*0x10108cd74*/
  return a1; /*0x10108ce80*/
}