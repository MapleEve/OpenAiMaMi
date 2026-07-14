// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x101064e40 depth=1
_QWORD *__fastcall http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(_QWORD *a1, __int64 a2, size_t a3)
{
  _QWORD *v3; // rbx
  size_t v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  __int64 (__fastcall **v16)(); // rdx
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  _QWORD v25[4]; // [rsp+8h] [rbp-F8h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+68h] [rbp-98h]
  _QWORD v34[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  size_t v37; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-38h]
  _QWORD *v39; // [rsp+D0h] [rbp-30h]

  v3 = a1; /*0x101064e54*/
  if ( !a3 ) /*0x101064e5a*/
    goto LABEL_26; /*0x101064e5a*/
  if ( a3 > 0x40 ) /*0x101064e6a*/
  {
    if ( a3 >= 0x10000 ) /*0x101064e8a*/
      goto LABEL_26; /*0x101064e8a*/
    v39 = a1; /*0x101064e90*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101064e94*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x101064ea1*/
    if ( !v8 ) /*0x101064ea9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1010651a1*/
    _BitScanReverse64(&v9, a3 >> 10); /*0x101064ebb*/
    v35 = v8; /*0x101064ecd*/
    v36 = 0; /*0x101064ed1*/
    v37 = a3; /*0x101064ed9*/
    v38 = 257LL - 4 * ((unsigned int)v9 ^ 0x3F); /*0x101064edd*/
    v10 = 0; /*0x101064ee1*/
    do /*0x101064f2f*/
    {
      if ( !byte_1013D07E8[*(unsigned __int8 *)(a2 + v10)] ) /*0x101064f0c*/
      {
        v3 = v39; /*0x101065034*/
        *v39 = 1; /*0x101065038*/
        _$LT$bytes..bytes_mut..BytesMut$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5c29f993bb64e47e(&v35); /*0x101065043*/
        return v3; /*0x101065048*/
      }
      LOBYTE(v34[0]) = byte_1013D07E8[*(unsigned __int8 *)(a2 + v10)]; /*0x101064f12*/
      _$LT$bytes..bytes_mut..BytesMut$u20$as$u20$bytes..buf..buf_mut..BufMut$GT$::put_slice::h0a00ff29508fa2c0( /*0x101064f24*/
        &v35,
        v34,
        1);
      ++v10; /*0x101064f29*/
    }
    while ( a3 != v10 ); /*0x101064f2f*/
    v13 = v35; /*0x101064f31*/
    v14 = v36; /*0x101064f35*/
    v15 = v38; /*0x101064f39*/
    if ( (v38 & 1) != 0 ) /*0x101064f41*/
    {
      v23 = v38 >> 5; /*0x1010650b4*/
      v26 = (v38 >> 5) + v37; /*0x1010650c5*/
      v27 = v35 - (v38 >> 5); /*0x1010650cc*/
      v28 = (v38 >> 5) + v36; /*0x1010650d3*/
      _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::from::hb3f89e5123ac12e3( /*0x1010650e8*/
        v31,
        &v26,
        v26,
        v27,
        v11,
        v12);
      v30 = v23; /*0x1010650ed*/
      v14 = v32 - v23; /*0x1010650fe*/
      v3 = v39; /*0x101065101*/
      if ( v32 < v23 ) /*0x101065105*/
      {
        v29 = v32; /*0x10106514b*/
        v34[0] = &v30; /*0x101065159*/
        v34[1] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::h28a024d342384352; /*0x101065167*/
        v34[2] = &v29; /*0x101065175*/
        v34[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::h28a024d342384352; /*0x101065179*/
        core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10122648C, (__int64)v34, (__int64)&off_1015AC1B0); /*0x101065192*/
      }
      v13 = v31[1] + v23; /*0x10106510a*/
      v16 = (__int64 (__fastcall **)())v31[0]; /*0x101065111*/
      v15 = v33; /*0x101065118*/
    }
    else
    {
      v16 = &bytes::bytes_mut::SHARED_VTABLE::h902478986e39255f; /*0x101064f47*/
      v3 = v39; /*0x101064f4e*/
    }
    v3[1] = v16; /*0x10106511f*/
    v3[2] = v13; /*0x101065123*/
    v3[3] = v14; /*0x101065127*/
    v3[4] = v15; /*0x10106512b*/
LABEL_31:
    *v3 = 0; /*0x10106512f*/
    return v3; /*0x10106512f*/
  }
  v6 = a3 & 3; /*0x101064e6f*/
  if ( a3 >= 4 ) /*0x101064e76*/
  {
    v17 = 0; /*0x101064f5d*/
    do /*0x101064fc2*/
    {
      *((_BYTE *)v34 + v17) = byte_1013D07E8[*(unsigned __int8 *)(a2 + v17)]; /*0x101064f79*/
      *((_BYTE *)v34 + v17 + 1) = byte_1013D07E8[*(unsigned __int8 *)(a2 + v17 + 1)]; /*0x101064f8b*/
      *((_BYTE *)v34 + v17 + 2) = byte_1013D07E8[*(unsigned __int8 *)(a2 + v17 + 2)]; /*0x101064f9d*/
      v7 = v17 + 4; /*0x101064fa5*/
      *((_BYTE *)v34 + v17 + 3) = byte_1013D07E8[*(unsigned __int8 *)(a2 + v17 + 3)]; /*0x101064fb4*/
      v17 = v7; /*0x101064fbc*/
    }
    while ( (a3 & 0x7C) != v7 ); /*0x101064fc2*/
  }
  else
  {
    v7 = 0; /*0x101064e7c*/
  }
  if ( (a3 & 3) != 0 ) /*0x101064fc7*/
  {
    v18 = v7 + a2; /*0x101064fd1*/
    v19 = 0; /*0x101064fd4*/
    do /*0x101064ff3*/
    {
      *((_BYTE *)v34 + v7 + v19) = byte_1013D07E8[*(unsigned __int8 *)(v18 + v19)]; /*0x101064fe9*/
      ++v19; /*0x101064fed*/
    }
    while ( v6 != v19 ); /*0x101064ff3*/
  }
  v20 = http::header::name::StandardHeader::from_bytes::hac0407398ebf648b(v34, a3); /*0x101064fff*/
  if ( v20 != 81 ) /*0x101065006*/
  {
    v3[1] = 0; /*0x101065024*/
    *((_BYTE *)v3 + 16) = v20; /*0x10106502c*/
    goto LABEL_31; /*0x10106502f*/
  }
  if ( a3 <= 0xF ) /*0x10106500c*/
  {
    v21 = 0; /*0x10106500e*/
    while ( *((_BYTE *)v34 + v21) ) /*0x101065018*/
    {
      if ( a3 == ++v21 ) /*0x101065020*/
        goto LABEL_27; /*0x101065020*/
    }
    goto LABEL_26; /*0x101065018*/
  }
  if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(0, (__int64)v34, a3) != 1 ) /*0x101065062*/
  {
LABEL_27:
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e((__int64)v25, v34, a3); /*0x101065070*/
    v3[4] = v25[3]; /*0x10106508d*/
    v3[3] = v25[2]; /*0x101065098*/
    v22 = v25[0]; /*0x10106509c*/
    v3[2] = v25[1]; /*0x1010650aa*/
    v3[1] = v22; /*0x1010650ae*/
    goto LABEL_31; /*0x1010650b2*/
  }
LABEL_26:
  *v3 = 1; /*0x101065064*/
  return v3; /*0x101065139*/
}