// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x100533af0 depth=0
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_mcp_servers::hccfa7c77ae33aa93(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6)
{
  _UNKNOWN **v7; // rax
  void *v8; // r13
  size_t v9; // r15
  int v10; // edx
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // r13
  size_t v16; // r14
  char **v17; // r14
  __int64 __src[115]; // [rsp+8h] [rbp-798h] BYREF
  _QWORD __dst[115]; // [rsp+3A0h] [rbp-400h] BYREF
  int v21; // [rsp+738h] [rbp-68h]
  _QWORD v22[3]; // [rsp+740h] [rbp-60h] BYREF
  void *v23; // [rsp+758h] [rbp-48h]
  __int64 v24; // [rsp+760h] [rbp-40h] BYREF
  void *__buf; // [rsp+768h] [rbp-38h]
  size_t __nbyte; // [rsp+770h] [rbp-30h]

  v7 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x100533b10*/
  if ( v7 ) /*0x100533b18*/
  {
    *a1 = 2; /*0x100533b1a*/
    a1[1] = v7; /*0x100533b21*/
  }
  else
  {
    v8 = *(void **)(a2 + 464); /*0x100533b2a*/
    v9 = *(_QWORD *)(a2 + 472); /*0x100533b31*/
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(__src, v8, v9); /*0x100533b45*/
    v24 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100533b4f*/
    LODWORD(__buf) = v10; /*0x100533b53*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__dst, (__int64)&v24, 0, 0); /*0x100533b65*/
    if ( LOBYTE(__dst[0]) ) /*0x100533b71*/
      v11 = 0; /*0x100533b7c*/
    else
      v11 = __dst[1]; /*0x100533b73*/
    __src[0] = 1; /*0x100533b7e*/
    __src[1] = v11; /*0x100533b89*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd7585f8da36c5de6(v22, a3); /*0x100533b97*/
    v23 = v8; /*0x100533b9c*/
    v12 = *(_DWORD *)(a3 + 56); /*0x100533ba0*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((size_t *)&v24, a3 + 24); /*0x100533bae*/
    v13 = *(_QWORD *)(a3 + 48); /*0x100533bb3*/
    __dst[2] = v22[2]; /*0x100533bbc*/
    __dst[1] = v22[1]; /*0x100533bcb*/
    __dst[0] = v22[0]; /*0x100533bd2*/
    __dst[3] = v24; /*0x100533be1*/
    __dst[4] = __buf; /*0x100533be8*/
    __dst[5] = __nbyte; /*0x100533bf3*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..McpServerListPayload$GT$$GT$::ha92737fbdd27ed42(&__src[99]); /*0x100533c04*/
    __src[104] = __dst[5]; /*0x100533c10*/
    __src[103] = __dst[4]; /*0x100533c1c*/
    __src[102] = __dst[3]; /*0x100533c28*/
    __src[101] = __dst[2]; /*0x100533c34*/
    __src[100] = __dst[1]; /*0x100533c47*/
    __src[99] = __dst[0]; /*0x100533c4c*/
    __src[105] = v13; /*0x100533c50*/
    LODWORD(__src[106]) = v12; /*0x100533c57*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100533c74*/
    v21 = 1; /*0x100533c79*/
    serde_json::ser::to_vec::he041d2f67f554c3b(&v24, __dst); /*0x100533c87*/
    v14 = v24; /*0x100533c8c*/
    v15 = (char *)__buf; /*0x100533c90*/
    if ( __OFSUB__(-v24, 1) ) /*0x100533c97*/
    {
      *a1 = 3; /*0x100533c9c*/
      a1[1] = v15; /*0x100533ca3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__dst); /*0x100533cae*/
    }
    else
    {
      v16 = __nbyte; /*0x100533cb5*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__dst); /*0x100533cc0*/
      v17 = std::fs::write::inner::had0c1bee0a2c1e21(v23, v9, v15, v16, a4, a5, a6); /*0x100533cd7*/
      if ( v14 ) /*0x100533cdd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100533cea*/
      if ( v17 ) /*0x100533cf2*/
      {
        *a1 = 2; /*0x100533cf4*/
        a1[1] = v17; /*0x100533cfb*/
      }
      else
      {
        *a1 = 10; /*0x100533d01*/
      }
    }
  }
  return a1; /*0x100533d0b*/
}