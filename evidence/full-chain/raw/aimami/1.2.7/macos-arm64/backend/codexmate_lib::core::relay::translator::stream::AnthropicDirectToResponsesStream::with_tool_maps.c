// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_maps::hfb91061ccf0df0c4; addr: 0x1002a7af0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:54Z
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_maps::hfb91061ccf0df0c4(
        __int64 a1,
        const void *a2,
        size_t a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // bl
  size_t v15; // r15
  bool v16; // zf
  __int64 v17; // r15
  size_t v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // r13
  __int64 v22; // r15
  __int64 (__fastcall **v23)(); // r13
  __int64 v24; // r15
  int v25; // eax
  int v26; // esi
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  size_t v31; // rsi
  _QWORD v33[2]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+28h] [rbp-A8h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+30h] [rbp-A0h]
  __int64 v38; // [rsp+38h] [rbp-98h]
  __int64 v39; // [rsp+40h] [rbp-90h]
  unsigned __int64 v40; // [rsp+48h] [rbp-88h]
  __int64 v41; // [rsp+50h] [rbp-80h]
  __int64 v42; // [rsp+58h] [rbp-78h]
  __int64 v43; // [rsp+60h] [rbp-70h]
  __int64 v44; // [rsp+68h] [rbp-68h]
  __int64 v45; // [rsp+70h] [rbp-60h]
  _QWORD *v46; // [rsp+78h] [rbp-58h] BYREF
  __int64 v47; // [rsp+80h] [rbp-50h]
  unsigned __int64 v48; // [rsp+88h] [rbp-48h]
  _QWORD *v49; // [rsp+90h] [rbp-40h]
  unsigned __int64 v50; // [rsp+98h] [rbp-38h]
  size_t __n; // [rsp+A0h] [rbp-30h]

  v49 = a5; /*0x1002a7b04*/
  v9 = a4[4]; /*0x1002a7b14*/
  v10 = a4[5]; /*0x1002a7b18*/
  v11 = v9; /*0x1002a7b1e*/
  if ( v9 ) /*0x1002a7b27*/
    v11 = a4[6]; /*0x1002a7b29*/
  v36 = v9 != 0; /*0x1002a7b2d*/
  v37 = nullptr; /*0x1002a7b34*/
  v38 = v9; /*0x1002a7b3f*/
  v39 = v10; /*0x1002a7b46*/
  v40 = v36; /*0x1002a7b4d*/
  v41 = 0; /*0x1002a7b54*/
  v42 = v9; /*0x1002a7b5c*/
  v43 = v10; /*0x1002a7b60*/
  v44 = v11; /*0x1002a7b64*/
  v12 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h911b51e154d918a0(&v36); /*0x1002a7b6f*/
  __n = a3; /*0x1002a7b74*/
  if ( v12 == 0 || v13 == 0 ) /*0x1002a7b81*/
  {
    v14 = 0; /*0x1002a7bfa*/
    v15 = __n; /*0x1002a7bfc*/
    v16 = __n == 0; /*0x1002a7c00*/
    if ( (__n & 0x8000000000000000LL) == 0LL ) /*0x1002a7c03*/
      goto LABEL_12; /*0x1002a7c03*/
LABEL_9:
    v17 = 0; /*0x1002a7be6*/
    goto LABEL_10; /*0x1002a7be6*/
  }
  do /*0x1002a7bdb*/
  {
    if ( *(_QWORD *)(v13 + 40) == 6 /*0x1002a7bc3*/
      && !(anon_5fc5982723cbea77922f0a3a965b6f67_179 ^ **(_DWORD **)(v13 + 32)
         | *(_WORD *)(*(_QWORD *)(v13 + 32) + 4LL) ^ 0x6D6F) )
    {
      v14 = 1; /*0x1002a80dc*/
      v15 = __n; /*0x1002a80de*/
      v16 = __n == 0; /*0x1002a80e2*/
      if ( (__n & 0x8000000000000000LL) == 0LL ) /*0x1002a80e5*/
        goto LABEL_12; /*0x1002a80e5*/
      goto LABEL_9; /*0x1002a80e5*/
    }
    v14 = 0; /*0x1002a7bd1*/
  }
  while ( _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h911b51e154d918a0(&v36) /*0x1002a7bdb*/
       && v13 );
  v15 = __n; /*0x1002a7bdd*/
  v16 = __n == 0; /*0x1002a7be1*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1002a7be4*/
    goto LABEL_9; /*0x1002a7be4*/
LABEL_12:
  v35 = v49[3]; /*0x1002a7c05*/
  if ( !v16 ) /*0x1002a7c14*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v36); /*0x1002a7c16*/
    v18 = v15; /*0x1002a7c1b*/
    v17 = 1; /*0x1002a7c1e*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x1002a7c29*/
    if ( v19 ) /*0x1002a7c31*/
    {
      v20 = v19; /*0x1002a7c33*/
      v15 = __n; /*0x1002a7c36*/
      goto LABEL_16; /*0x1002a7c3a*/
    }
LABEL_10:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, __n); /*0x1002a7be9*/
  }
  v20 = 1; /*0x1002a7c3c*/
LABEL_16:
  v45 = v20; /*0x1002a7c41*/
  memcpy((void *)v20, a2, v15); /*0x1002a7c4b*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v36); /*0x1002a7c57*/
  v33[1] = v37; /*0x1002a7c6a*/
  v33[0] = v36; /*0x1002a7c71*/
  v46 = nullptr; /*0x1002a7c78*/
  v47 = 1; /*0x1002a7c80*/
  v48 = 0; /*0x1002a7c88*/
  v38 = 1610612768; /*0x1002a7c90*/
  v36 = (unsigned __int64)&v46; /*0x1002a7c9f*/
  v37 = &anon_5a43fe550916ced6ff2b8ab69a2876c4_1319; /*0x1002a7cad*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v33, &v36) ) /*0x1002a7cc2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002a8111*/
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1320,
      55,
      v34,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1333,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1322);
  v21 = v46; /*0x1002a7ccf*/
  v22 = v47; /*0x1002a7cd3*/
  if ( v48 <= 0x10 ) /*0x1002a7cdf*/
  {
    if ( v48 != 16 ) /*0x1002a7d03*/
LABEL_19:
      core::str::slice_error_fail::h480e51fbd8b15eba(v47, v48, 0, 16, &off_101BF2310); /*0x1002a7ce8*/
  }
  else if ( *(char *)(v47 + 16) < -64 ) /*0x1002a7ce6*/
  {
    goto LABEL_19; /*0x1002a7ce6*/
  }
  v34[0] = v47; /*0x1002a7d05*/
  v34[1] = 16; /*0x1002a7d0c*/
  v46 = v34; /*0x1002a7d1e*/
  v47 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1002a7d29*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_101A2CBA8, &v46); /*0x1002a7d3f*/
  if ( v21 ) /*0x1002a7d47*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x1002a7d54*/
  v50 = v36; /*0x1002a7d60*/
  v23 = v37; /*0x1002a7d64*/
  v24 = v38; /*0x1002a7d6b*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v36); /*0x1002a7d79*/
  v25 = ((int)v36 >> 13) - 1; /*0x1002a7d89*/
  v26 = 0; /*0x1002a7d8c*/
  if ( (int)v36 >> 13 <= 0 ) /*0x1002a7d90*/
  {
    v27 = (1 - ((int)v36 >> 13)) / 0x190u + 1; /*0x1002a7da4*/
    v25 += 400 * v27; /*0x1002a7dac*/
    v26 = -146097 * v27; /*0x1002a7dae*/
  }
  v28 = 0x8000000000000001LL; /*0x1002a7df7*/
  if ( v35 ) /*0x1002a7dfb*/
    v28 = 0x8000000000000000LL; /*0x1002a7dfb*/
  if ( v14 ) /*0x1002a7e01*/
    v28 = 0x8000000000000000LL; /*0x1002a7e01*/
  v29 = HIDWORD(v36) /*0x1002a7e24*/
      + 86400LL
      * (int)(((v25 / 100) >> 2) + ((1461 * v25) >> 2) + v26 + (((unsigned int)v36 >> 4) & 0x1FF) - v25 / 100 - 719163);
  *(_QWORD *)(a1 + 336) = a4[7]; /*0x1002a7e2b*/
  *(_QWORD *)(a1 + 328) = a4[6]; /*0x1002a7e37*/
  *(_QWORD *)(a1 + 320) = a4[5]; /*0x1002a7e43*/
  *(_QWORD *)(a1 + 312) = a4[4]; /*0x1002a7e4f*/
  *(_QWORD *)(a1 + 304) = a4[3]; /*0x1002a7e5b*/
  *(_QWORD *)(a1 + 296) = a4[2]; /*0x1002a7e67*/
  *(_QWORD *)(a1 + 288) = a4[1]; /*0x1002a7e73*/
  *(_QWORD *)(a1 + 280) = *a4; /*0x1002a7e7e*/
  v30 = v49; /*0x1002a7e86*/
  *(_QWORD *)(a1 + 624) = v49[5]; /*0x1002a7e8e*/
  *(_QWORD *)(a1 + 616) = v30[4]; /*0x1002a7e9a*/
  *(_QWORD *)(a1 + 608) = v30[3]; /*0x1002a7ea6*/
  *(_QWORD *)(a1 + 600) = v30[2]; /*0x1002a7eb2*/
  *(_QWORD *)(a1 + 592) = v30[1]; /*0x1002a7ebe*/
  *(_QWORD *)(a1 + 584) = *v30; /*0x1002a7ec9*/
  *(_QWORD *)(a1 + 632) = 0; /*0x1002a7ed1*/
  v31 = __n; /*0x1002a7edd*/
  *(_QWORD *)(a1 + 64) = __n; /*0x1002a7ee1*/
  *(_QWORD *)(a1 + 72) = v45; /*0x1002a7eea*/
  *(_QWORD *)(a1 + 80) = v31; /*0x1002a7eef*/
  *(_QWORD *)(a1 + 88) = v50; /*0x1002a7ef8*/
  *(_QWORD *)(a1 + 96) = v23; /*0x1002a7efd*/
  *(_QWORD *)(a1 + 104) = v24; /*0x1002a7f02*/
  *(_QWORD *)(a1 + 640) = v29; /*0x1002a7f07*/
  *(_BYTE *)(a1 + 780) = 0; /*0x1002a7f0f*/
  *(_QWORD *)(a1 + 648) = 0; /*0x1002a7f18*/
  *(_QWORD *)(a1 + 664) = 0; /*0x1002a7f24*/
  *(_QWORD *)(a1 + 160) = 0x8000000000000000LL; /*0x1002a7f30*/
  *(_QWORD *)(a1 + 112) = 0; /*0x1002a7f38*/
  *(_QWORD *)(a1 + 120) = 8; /*0x1002a7f41*/
  *(_QWORD *)(a1 + 128) = 0; /*0x1002a7f4a*/
  *(_QWORD *)(a1 + 672) = 0; /*0x1002a7f56*/
  *(_QWORD *)(a1 + 736) = 0; /*0x1002a7f62*/
  *(_QWORD *)(a1 + 688) = 0; /*0x1002a7f6e*/
  *(_QWORD *)(a1 + 696) = 0; /*0x1002a7f7a*/
  *(_QWORD *)(a1 + 720) = 0; /*0x1002a7f86*/
  *(_QWORD *)(a1 + 712) = 0; /*0x1002a7f92*/
  *(_QWORD *)(a1 + 368) = v28; /*0x1002a7f9e*/
  *(_BYTE *)(a1 + 392) = 0; /*0x1002a7fa6*/
  *(_QWORD *)(a1 + 424) = 0; /*0x1002a7faf*/
  *(_BYTE *)(a1 + 512) = 0; /*0x1002a7fbb*/
  *(_BYTE *)(a1 + 781) = 0; /*0x1002a7fc4*/
  *(_QWORD *)(a1 + 440) = 0; /*0x1002a7fcd*/
  *(_QWORD *)(a1 + 448) = 0; /*0x1002a7fd9*/
  *(_QWORD *)(a1 + 464) = 0; /*0x1002a7fe5*/
  *(_QWORD *)(a1 + 472) = 0; /*0x1002a7ff1*/
  *(_QWORD *)(a1 + 496) = 0; /*0x1002a7ffd*/
  *(_QWORD *)(a1 + 488) = 0; /*0x1002a8009*/
  *(_BYTE *)(a1 + 552) = 6; /*0x1002a8015*/
  *(_BYTE *)(a1 + 520) = 5; /*0x1002a801e*/
  *(_QWORD *)(a1 + 528) = 0; /*0x1002a8027*/
  *(_QWORD *)(a1 + 544) = 0; /*0x1002a8033*/
  *(_QWORD *)(a1 + 136) = 0; /*0x1002a803f*/
  *(_QWORD *)(a1 + 144) = 8; /*0x1002a804b*/
  *(_QWORD *)(a1 + 152) = 0; /*0x1002a8057*/
  *(_DWORD *)(a1 + 776) = 0; /*0x1002a8063*/
  *(_BYTE *)(a1 + 782) = 0; /*0x1002a806f*/
  *(_QWORD *)(a1 + 344) = 0x8000000000000000LL; /*0x1002a8078*/
  *(_QWORD *)(a1 + 744) = 0; /*0x1002a8080*/
  *(_QWORD *)a1 = 0; /*0x1002a808c*/
  *(_QWORD *)(a1 + 16) = 0; /*0x1002a8094*/
  *(_QWORD *)(a1 + 32) = 0; /*0x1002a809d*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1002a80a6*/
  *(_QWORD *)(a1 + 768) = 0; /*0x1002a80af*/
  *(_QWORD *)(a1 + 760) = 0; /*0x1002a80bb*/
  return a1; /*0x1002a80ca*/
}