// __ZN13codexmate_lib4core5relay18router_unlock_auth30managed_api_key_marker_matches @ 0x10056d800 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h41b8ff8f11868916(
        __int64 *a1)
{
  __int64 v1; // rbx
  size_t v2; // r13
  void *v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  size_t v8; // rcx
  __int64 v9; // rsi
  size_t v10; // r15
  __int64 v12; // [rsp+0h] [rbp-A0h] BYREF
  void *v13; // [rsp+8h] [rbp-98h]
  size_t __n; // [rsp+10h] [rbp-90h]
  __int64 v15; // [rsp+18h] [rbp-88h]
  __int64 v16; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-70h]
  __int64 v18; // [rsp+38h] [rbp-68h]
  size_t v19; // [rsp+58h] [rbp-48h]
  __int64 v20; // [rsp+60h] [rbp-40h]
  void *__s1; // [rsp+68h] [rbp-38h]
  void *__s2; // [rsp+70h] [rbp-30h]

  codexmate_lib::core::relay::router_unlock_auth::managed_api_key::h206b580a266c76f4((size_t *)&v12, a1[4], a1[5]); /*0x10056d823*/
  v1 = v12; /*0x10056d828*/
  if ( __OFSUB__(-v12, 1) ) /*0x10056d832*/
  {
    LODWORD(v2) = 0; /*0x10056d837*/
    return (unsigned int)v2; /*0x10056d83a*/
  }
  v3 = v13; /*0x10056d83f*/
  v2 = __n; /*0x10056d846*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::hf41ab369f1f8ea12(&v12, a1[73], a1[74]); /*0x10056d862*/
  v4 = 0x8000000000000000LL; /*0x10056d867*/
  v5 = v12; /*0x10056d871*/
  if ( v12 == 0x8000000000000001LL ) /*0x10056d880*/
  {
    LODWORD(v2) = 0; /*0x10056d882*/
    if ( !v1 ) /*0x10056d888*/
      goto LABEL_18; /*0x10056d888*/
    goto LABEL_17; /*0x10056d888*/
  }
  __s2 = v3; /*0x10056d893*/
  v6 = v17; /*0x10056d89e*/
  v7 = v18; /*0x10056d8a2*/
  __s1 = v13; /*0x10056d8ad*/
  v8 = __n; /*0x10056d8b1*/
  if ( 2 * v15 ) /*0x10056d8b8*/
  {
    v20 = v18; /*0x10056d8e8*/
    v19 = __n; /*0x10056d8f5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10056d8f9*/
    v7 = v20; /*0x10056d8fe*/
    v8 = v19; /*0x10056d902*/
    if ( !(2 * v6) ) /*0x10056d911*/
    {
LABEL_8:
      if ( v5 == 0x8000000000000000LL ) /*0x10056d8d5*/
        goto LABEL_9; /*0x10056d8d5*/
      goto LABEL_13; /*0x10056d8d5*/
    }
  }
  else if ( !(2 * v17) ) /*0x10056d8c5*/
  {
    goto LABEL_8; /*0x10056d8d0*/
  }
  v9 = v6; /*0x10056d918*/
  v10 = v8; /*0x10056d91b*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, 1); /*0x10056d91e*/
  v8 = v10; /*0x10056d923*/
  if ( v5 == 0x8000000000000000LL ) /*0x10056d929*/
  {
LABEL_9:
    LODWORD(v2) = 0; /*0x10056d8d7*/
    v3 = __s2; /*0x10056d8da*/
    if ( v1 ) /*0x10056d8e1*/
      goto LABEL_17; /*0x10056d8e1*/
    goto LABEL_18; /*0x10056d8e1*/
  }
LABEL_13:
  v3 = __s2; /*0x10056d92b*/
  if ( v8 != v2 ) /*0x10056d936*/
  {
    LODWORD(v2) = 0; /*0x10056d953*/
    v4 = v5; /*0x10056d956*/
    if ( !v1 ) /*0x10056d95c*/
      goto LABEL_18; /*0x10056d95c*/
    goto LABEL_17; /*0x10056d95c*/
  }
  LOBYTE(v2) = memcmp(__s1, __s2, v2) == 0; /*0x10056d945*/
  v4 = v5; /*0x10056d949*/
  if ( v1 ) /*0x10056d94f*/
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v1, 1); /*0x10056d95e*/
LABEL_18:
  if ( 2 * v4 ) /*0x10056d96e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v4, 1); /*0x10056d987*/
  return (unsigned int)v2; /*0x10056d98f*/
}