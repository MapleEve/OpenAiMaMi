// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x10089bf10 d=1
__int64 __fastcall serde_core::ser::Serializer::collect_seq::h9489e25615bc5a88(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 i; // r15
  __m256i v11; // [rsp+0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 8); /*0x10089bf24*/
  v4 = *(_QWORD *)(a2 + 16); /*0x10089bf28*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d( /*0x10089bf38*/
    &v11,
    1,
    v4);
  if ( __OFSUB__(0, v11.i64[0]) ) /*0x10089bf3f*/
  {
    *(_QWORD *)(a1 + 8) = v11.i64[1]; /*0x10089bf49*/
    *(_BYTE *)a1 = 6; /*0x10089bf4d*/
  }
  else
  {
    v13 = *(__int128 *)((char *)v11.i128 + 8); /*0x10089bf65*/
    v12 = v11.i64[0]; /*0x10089bf69*/
    if ( v4 ) /*0x10089bf70*/
    {
      v5 = 32 * v4; /*0x10089bf72*/
      while ( 1 ) /*0x10089bfc5*/
      {
        serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x10089bfc5*/
          &v11,
          v3);
        if ( v11.i8[0] == 6 ) /*0x10089bfce*/
          break; /*0x10089bfce*/
        v6 = *((_QWORD *)&v13 + 1); /*0x10089bfd0*/
        if ( *((_QWORD *)&v13 + 1) == v12 ) /*0x10089bfd8*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v12); /*0x10089bfde*/
        v3 += 32; /*0x10089bf80*/
        *(__m256i *)(v13 + 32 * v6) = v11; /*0x10089bf9c*/
        *((_QWORD *)&v13 + 1) = v6 + 1; /*0x10089bfb5*/
        v5 -= 32; /*0x10089bfb9*/
        if ( !v5 ) /*0x10089bfbd*/
          goto LABEL_9; /*0x10089bfbd*/
      }
      *(_QWORD *)(a1 + 8) = v11.i64[1]; /*0x10089c026*/
      *(_BYTE *)a1 = 6; /*0x10089c02a*/
      v8 = v13; /*0x10089c02d*/
      for ( i = *((_QWORD *)&v13 + 1) + 1LL; i != 1; --i ) /*0x10089c035*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v8); /*0x10089c04d*/
        v8 += 32; /*0x10089c052*/
      }
      if ( v12 ) /*0x10089c05e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10089c06d*/
    }
    else
    {
LABEL_9:
      *(__int128 *)((char *)v11.i128 + 15) = v13; /*0x10089bfe5*/
      *(__int64 *)((char *)v11.i64 + 7) = v12; /*0x10089bff9*/
      *(_BYTE *)a1 = 4; /*0x10089bffd*/
      v7 = v11.i64[1]; /*0x10089c004*/
      *(_QWORD *)(a1 + 1) = v11.i64[0]; /*0x10089c008*/
      *(_OWORD *)(a1 + 9) = __PAIR128__(v11.u64[2], v7); /*0x10089c00c*/
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v11.i64[2] + 7); /*0x10089c01c*/
    }
  }
  return a1; /*0x10089c075*/
}