// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x100428fd0 depth=1
// rusqlite10Connection15open_with_flags
char __fastcall rusqlite::Connection::open_with_flags::hf63a0b71e0beca46(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rax
  _BYTE *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rcx
  _BYTE *v11; // [rsp+10h] [rbp-80h]
  __int64 v12; // [rsp+18h] [rbp-78h]
  __int64 v13; // [rsp+20h] [rbp-70h]
  __int64 v14; // [rsp+28h] [rbp-68h] BYREF
  _BYTE *v15; // [rsp+30h] [rbp-60h]
  __int64 v16; // [rsp+38h] [rbp-58h]
  __int64 v17; // [rsp+40h] [rbp-50h]
  __int64 v18; // [rsp+48h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-40h]
  __int64 v20; // [rsp+58h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp-30h]

  rusqlite::path_to_cstring::h3a6b3c588767bae1(&v14); /*0x100428ff5*/
  v5 = v14; /*0x100428ffa*/
  v6 = v15; /*0x100428ffe*/
  v7 = v16; /*0x100429002*/
  if ( v14 != 0x8000000000000016LL ) /*0x100429009*/
  {
    *(_QWORD *)(a1 + 56) = v21; /*0x1004290f7*/
    *(_QWORD *)(a1 + 48) = v20; /*0x1004290ff*/
    *(_QWORD *)(a1 + 40) = v19; /*0x100429107*/
    v9 = v17; /*0x10042910b*/
    *(_QWORD *)(a1 + 32) = v18; /*0x100429113*/
    *(_QWORD *)(a1 + 24) = v9; /*0x100429117*/
    *(_QWORD *)a1 = v5; /*0x10042911b*/
    *(_QWORD *)(a1 + 8) = v6; /*0x10042911e*/
    *(_QWORD *)(a1 + 16) = v7; /*0x100429122*/
    *(_BYTE *)(a1 + 104) = 3; /*0x100429126*/
    return v5; /*0x100429126*/
  }
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e(&v14, v15, v16, a4, 0); /*0x10042901f*/
  if ( v14 != 0x8000000000000016LL ) /*0x100429028*/
  {
    *(_QWORD *)(a1 + 56) = v21; /*0x10042913e*/
    *(_QWORD *)(a1 + 48) = v20; /*0x100429146*/
    *(_QWORD *)(a1 + 40) = v19; /*0x10042914e*/
    *(_QWORD *)(a1 + 32) = v18; /*0x100429156*/
    *(_QWORD *)(a1 + 24) = v17; /*0x10042915e*/
    *(_QWORD *)(a1 + 16) = v16; /*0x100429166*/
    v5 = v14; /*0x10042916a*/
    *(_QWORD *)(a1 + 8) = v15; /*0x100429172*/
    *(_QWORD *)a1 = v5; /*0x100429176*/
    LOBYTE(v5) = 3; /*0x100429179*/
    *(_BYTE *)(a1 + 104) = 3; /*0x10042917b*/
    *v6 = 0; /*0x10042917f*/
    if ( !v7 ) /*0x100429186*/
      return v5; /*0x100429186*/
    goto LABEL_10; /*0x100429186*/
  }
  v13 = v17; /*0x100429032*/
  v12 = v16; /*0x10042903e*/
  v11 = v15; /*0x100429042*/
  v8 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x100429056*/
  if ( byte_1015B7310 != 2 ) /*0x100429066*/
    foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x1004291a6*/
  *(_QWORD *)(a1 + 24) = v13; /*0x100429070*/
  *(_QWORD *)(a1 + 16) = v12; /*0x100429078*/
  *(_QWORD *)(a1 + 8) = v11; /*0x100429087*/
  *(_QWORD *)a1 = 0; /*0x10042908b*/
  *(_QWORD *)(a1 + 80) = 0; /*0x10042908e*/
  *(_QWORD *)(a1 + 88) = 0; /*0x100429096*/
  *(_QWORD *)(a1 + 32) = 0; /*0x10042909e*/
  *(_QWORD *)(a1 + 40) = &xmmword_10125CF30; /*0x1004290ad*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004290b8*/
  *(_QWORD *)(a1 + 56) = 0; /*0x1004290c3*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004290ce*/
  *(_QWORD *)(a1 + 72) = v8; /*0x1004290d2*/
  *(_QWORD *)(a1 + 96) = 16; /*0x1004290d6*/
  LOBYTE(v5) = 0; /*0x1004290de*/
  *(_BYTE *)(a1 + 104) = 0; /*0x1004290e0*/
  *v6 = 0; /*0x1004290e4*/
  if ( v7 ) /*0x1004290eb*/
LABEL_10:
    LOBYTE(v5) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100429188*/
  return v5; /*0x10042912b*/
}