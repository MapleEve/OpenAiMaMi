// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x10089c500 d=1
__int64 __fastcall serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r13
  signed __int64 v6; // r15
  const void *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+8h] [rbp-78h]
  __int64 v17; // [rsp+10h] [rbp-70h]
  const void *v18; // [rsp+18h] [rbp-68h]
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+28h] [rbp-58h]
  __m256i v21; // [rsp+38h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 8); /*0x10089c514*/
  v3 = *(_QWORD *)(a2 + 16); /*0x10089c518*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d( /*0x10089c528*/
    &v21,
    1,
    v3);
  if ( __OFSUB__(0, v21.i64[0]) ) /*0x10089c52f*/
  {
    *(_QWORD *)(a1 + 8) = v21.i64[1]; /*0x10089c539*/
    *(_BYTE *)a1 = 6; /*0x10089c53d*/
  }
  else
  {
    v20 = *(__int128 *)((char *)v21.i128 + 8); /*0x10089c555*/
    v19 = v21.i64[0]; /*0x10089c559*/
    if ( v3 ) /*0x10089c560*/
    {
      v4 = 24 * v3; /*0x10089c56a*/
      v5 = 0; /*0x10089c56e*/
      do /*0x10089c624*/
      {
        v6 = *(_QWORD *)(v2 + v5 + 16); /*0x10089c571*/
        if ( v6 < 0 ) /*0x10089c579*/
        {
          v8 = 0; /*0x10089c677*/
LABEL_16:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8); /*0x10089c67a*/
        }
        v17 = v4; /*0x10089c57f*/
        v16 = v2; /*0x10089c583*/
        v7 = *(const void **)(v2 + v5 + 8); /*0x10089c587*/
        if ( v6 ) /*0x10089c58c*/
        {
          v18 = *(const void **)(v2 + v5 + 8); /*0x10089c58e*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10089c592*/
          v8 = 1; /*0x10089c597*/
          v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x10089c5a5*/
          if ( !v9 ) /*0x10089c5ad*/
            goto LABEL_16; /*0x10089c5ad*/
          v10 = v9; /*0x10089c5b3*/
          v7 = v18; /*0x10089c5b6*/
        }
        else
        {
          v10 = 1; /*0x10089c5bc*/
        }
        memcpy((void *)v10, v7, v6); /*0x10089c5c8*/
        v21.i8[0] = 3; /*0x10089c5cd*/
        v21.i64[1] = v6; /*0x10089c5d1*/
        v21.i64[2] = v10; /*0x10089c5d5*/
        v21.i64[3] = v6; /*0x10089c5d9*/
        v11 = *((_QWORD *)&v20 + 1); /*0x10089c5dd*/
        if ( *((_QWORD *)&v20 + 1) == v19 ) /*0x10089c5e5*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v19); /*0x10089c5eb*/
        v12 = v20; /*0x10089c5f0*/
        v13 = 32 * v11; /*0x10089c5f7*/
        *(_BYTE *)(v20 + v13) = 3; /*0x10089c5fb*/
        *(_QWORD *)(v12 + v13 + 8) = v6; /*0x10089c5ff*/
        *(_QWORD *)(v12 + v13 + 16) = v10; /*0x10089c604*/
        *(_QWORD *)(v12 + v13 + 24) = v6; /*0x10089c609*/
        *((_QWORD *)&v20 + 1) = v11 + 1; /*0x10089c611*/
        v5 += 24; /*0x10089c615*/
        v4 = v17; /*0x10089c619*/
        v2 = v16; /*0x10089c620*/
      }
      while ( v17 != v5 ); /*0x10089c624*/
    }
    *(__int128 *)((char *)v21.i128 + 15) = v20; /*0x10089c63a*/
    *(__int64 *)((char *)v21.i64 + 7) = v19; /*0x10089c63e*/
    *(_BYTE *)a1 = 4; /*0x10089c642*/
    v14 = v21.i64[1]; /*0x10089c649*/
    *(_QWORD *)(a1 + 1) = v21.i64[0]; /*0x10089c64d*/
    *(_OWORD *)(a1 + 9) = __PAIR128__(v21.u64[2], v14); /*0x10089c651*/
    *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v21.i64[2] + 7); /*0x10089c661*/
  }
  return a1; /*0x10089c668*/
}