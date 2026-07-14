// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x1004a1600 d=1
__int64 __fastcall serde_core::ser::Serializer::collect_seq::hc801605adc45be37(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 i; // r15
  __m256i v14; // [rsp+0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+28h] [rbp-38h]

  v3 = *(unsigned __int8 **)(a2 + 8); /*0x1004a1614*/
  v4 = *(_QWORD *)(a2 + 16); /*0x1004a1618*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d( /*0x1004a1628*/
    &v14,
    1,
    v4);
  if ( __OFSUB__(0, v14.i64[0]) ) /*0x1004a162f*/
  {
    *(_QWORD *)(a1 + 8) = v14.i64[1]; /*0x1004a1639*/
    *(_BYTE *)a1 = 6; /*0x1004a163d*/
  }
  else
  {
    v16 = *(__int128 *)((char *)v14.i128 + 8); /*0x1004a1655*/
    v15 = v14.i64[0]; /*0x1004a1659*/
    if ( v4 ) /*0x1004a1660*/
    {
      v6 = 32 * v4; /*0x1004a1662*/
      while ( 1 ) /*0x1004a16b5*/
      {
        serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h20dffb7c3269d000( /*0x1004a16b5*/
          (__int64)&v14,
          v3,
          v5);
        if ( v14.i8[0] == 6 ) /*0x1004a16be*/
          break; /*0x1004a16be*/
        v9 = *((_QWORD *)&v16 + 1); /*0x1004a16c0*/
        if ( *((_QWORD *)&v16 + 1) == v15 ) /*0x1004a16c8*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v15); /*0x1004a16ce*/
        v3 += 32; /*0x1004a1670*/
        v7 = v16; /*0x1004a1674*/
        v8 = 32 * v9; /*0x1004a167b*/
        *(_OWORD *)(v16 + v8 + 16) = v14.i128[1]; /*0x1004a168c*/
        v5 = v14.i64[0]; /*0x1004a1691*/
        *(_OWORD *)(v7 + v8) = v14.i128[0]; /*0x1004a169e*/
        *((_QWORD *)&v16 + 1) = v9 + 1; /*0x1004a16a5*/
        v6 -= 32; /*0x1004a16a9*/
        if ( !v6 ) /*0x1004a16ad*/
          goto LABEL_9; /*0x1004a16ad*/
      }
      *(_QWORD *)(a1 + 8) = v14.i64[1]; /*0x1004a1716*/
      *(_BYTE *)a1 = 6; /*0x1004a171a*/
      v11 = (_QWORD *)v16; /*0x1004a171d*/
      for ( i = *((_QWORD *)&v16 + 1) + 1LL; i != 1; --i ) /*0x1004a1725*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v11); /*0x1004a173d*/
        v11 += 4; /*0x1004a1742*/
      }
      if ( v15 ) /*0x1004a174e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004a175d*/
    }
    else
    {
LABEL_9:
      *(__int128 *)((char *)v14.i128 + 15) = v16; /*0x1004a16d5*/
      *(__int64 *)((char *)v14.i64 + 7) = v15; /*0x1004a16e9*/
      *(_BYTE *)a1 = 4; /*0x1004a16ed*/
      v10 = v14.i64[1]; /*0x1004a16f4*/
      *(_QWORD *)(a1 + 1) = v14.i64[0]; /*0x1004a16f8*/
      *(_OWORD *)(a1 + 9) = __PAIR128__(v14.u64[2], v10); /*0x1004a16fc*/
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v14.i64[2] + 7); /*0x1004a170c*/
    }
  }
  return a1; /*0x1004a1765*/
}