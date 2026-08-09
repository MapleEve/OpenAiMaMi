/* addr=0x1008c9e00 cleanname=translator_stream_driver group=stream-drivers
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=622 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$futures_util..stream..unfold..Unfold$LT$T$C$F$C$Fut$GT$$u20$as$u20$futures_core..stream..Stream$GT$::poll_next::he15ccdcb8347d6c3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v4; // r12
  _QWORD *v6; // r15
  char v7; // al
  size_t v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  void *v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  void *v15; // r14
  __int64 v16; // r12
  _QWORD *v17; // rax
  int v18; // eax
  __m128i inserted; // xmm0
  void *v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r9
  size_t v25; // r13
  __int64 v26; // r12
  size_t v27; // r14
  size_t v28; // r14
  __int64 *v29; // rsi
  void *v30; // r14
  __int64 v31; // r12
  _QWORD *v32; // rax
  signed __int64 v33; // r14
  __int64 v34; // r14
  void *v35; // rsi
  const void *v36; // r14
  size_t v37; // r13
  __int64 v38; // rsi
  size_t v39; // r13
  char *v40; // r14
  size_t v41; // rsi
  __int64 v42; // r12
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  size_t v45; // rax
  char *v46; // rcx
  __int64 v47; // r9
  size_t v48; // r14
  size_t v49; // r12
  size_t v50; // rsi
  __int64 v51; // r9
  __int64 v52; // r14
  __int64 v54; // rcx
  void *v55; // r12
  void *v56; // rax
  _QWORD *v57; // rsi
  __int64 (__fastcall **v58)(); // rax
  _BYTE v59[360]; // [rsp+8h] [rbp-718h] BYREF
  _BYTE v60[360]; // [rsp+170h] [rbp-5B0h] BYREF
  _BYTE v61[360]; // [rsp+2D8h] [rbp-448h] BYREF
  __int128 v62; // [rsp+440h] [rbp-2E0h]
  void *v63; // [rsp+458h] [rbp-2C8h] BYREF
  _QWORD __dst[49]; // [rsp+460h] [rbp-2C0h] BYREF
  char v65; // [rsp+5E8h] [rbp-138h]
  __int128 v66; // [rsp+5F0h] [rbp-130h]
  __int64 v67; // [rsp+600h] [rbp-120h]
  __int64 v68; // [rsp+608h] [rbp-118h]
  __int64 v69; // [rsp+610h] [rbp-110h]
  __int64 v70; // [rsp+618h] [rbp-108h]
  __int64 v71; // [rsp+620h] [rbp-100h]
  __int64 v72; // [rsp+628h] [rbp-F8h]
  __int64 v73; // [rsp+630h] [rbp-F0h]
  __int64 v74; // [rsp+638h] [rbp-E8h]
  __int128 v75; // [rsp+640h] [rbp-E0h]
  __int64 v76; // [rsp+650h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+658h] [rbp-C8h]
  __int64 v78; // [rsp+660h] [rbp-C0h]
  __int64 v79; // [rsp+668h] [rbp-B8h] BYREF
  void *v80; // [rsp+670h] [rbp-B0h]
  __int64 *v81; // [rsp+678h] [rbp-A8h] BYREF
  size_t v82; // [rsp+680h] [rbp-A0h]
  __int128 __n; // [rsp+688h] [rbp-98h]
  __int64 v84; // [rsp+698h] [rbp-88h]
  void *v85; // [rsp+6A0h] [rbp-80h]
  __int64 v86; // [rsp+6A8h] [rbp-78h] BYREF
  __int64 v87; // [rsp+6B0h] [rbp-70h]
  size_t v88; // [rsp+6B8h] [rbp-68h]
  void *v89[2]; // [rsp+6C0h] [rbp-60h]
  int v90; // [rsp+6D4h] [rbp-4Ch]
  void *__src; // [rsp+6D8h] [rbp-48h]
  void **v92; // [rsp+6E0h] [rbp-40h]
  size_t v93; // [rsp+6E8h] [rbp-38h]
  _BYTE *v94; // [rsp+6F0h] [rbp-30h]

  v6 = a1;
  if ( *(_QWORD *)a2 )
  {
    if ( (unsigned int)*(_QWORD *)a2 == 1 )
    {
      v8 = a2 + 425;
      v9 = *(unsigned __int8 *)(a2 + 425);
      v92 = (void **)(a2 + 8);
      switch ( v9 )
      {
        case 0LL:
          goto LABEL_6;
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10196DAE8);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10196DAE8);
        case 3LL:
          v11 = **(_QWORD **)(a2 + 416);
          goto LABEL_11;
      }
    }
    core::panicking::panic::h286e2dd5eab048be(&unk_1016765D7, 63, &off_10196D750);
  }
  *(_QWORD *)a2 = 2;
  if ( *(__int64 *)(a2 + 8) < 0 )
    core::panicking::panic::h286e2dd5eab048be(&anon_155c4da9b5393270cfa7378e2b52c417_4, 40, &off_10196D8B8);
  v7 = *(_BYTE *)(a2 + 408);
  *(_QWORD *)a2 = 1;
  *(_BYTE *)(a2 + 424) = v7;
  v8 = a2 + 425;
  *(_BYTE *)(a2 + 425) = 0;
  v92 = (void **)(a2 + 8);
LABEL_6:
  *(_BYTE *)(a2 + 428) = 1;
  *(_WORD *)(a2 + 426) = 257;
  if ( *(_BYTE *)(a2 + 424) && *(_QWORD *)(a2 + 32) == 0x8000000000000000LL )
  {
    v94 = (_BYTE *)v8;
    v10 = 0x8000000000000000LL;
    goto LABEL_37;
  }
  v11 = *(_QWORD *)(a2 + 400);
  *(_QWORD *)(a2 + 408) = v11;
  *(_QWORD *)(a2 + 416) = a2 + 408;
LABEL_11:
  _$LT$futures_util..stream..unfold..Unfold$LT$T$C$F$C$Fut$GT$$u20$as$u20$futures_core..stream..Stream$GT$::poll_next::h4e0cedd8ccbfb390(
    (__int64)&v63,
    v11,
    a3,
    a4);
  v12 = v63;
  if ( v63 == (void *)2 )
  {
    *(_BYTE *)v8 = 3;
LABEL_87:
    *v6 = 2;
    return v6;
  }
  v71 = __dst[2];
  v72 = __dst[3];
  v94 = (_BYTE *)v8;
  if ( ((unsigned __int8)v63 & 1) != 0 )
  {
    if ( !__dst[0] )
    {
      v76 = __dst[1];
      v81 = &v76;
      v82 = (size_t)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63, aUpstreamAnthro, &v81);
      v30 = v63;
      v31 = __dst[0];
      v8 = __dst[1];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v63, aUpstreamAnthro);
      v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v32 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      *v32 = v30;
      v32[1] = v31;
      v32[2] = v8;
      v93 = std::io::error::Error::_new::h73f9b193369f24ba(40, v32, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
      __src = *(void **)(a2 + 400);
      *(_WORD *)(a2 + 426) = 0;
      v10 = *(_QWORD *)(a2 + 8);
      v84 = *(_QWORD *)(a2 + 16);
      v33 = *(_QWORD *)(a2 + 24);
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v76);
      inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)""), v33, 0);
      *(__m128i *)v89 = inserted;
      LOBYTE(v8) = 1;
      v85 = nullptr;
      if ( !*(_BYTE *)(a2 + 428) )
      {
LABEL_37:
        if ( *(_BYTE *)(a2 + 427) )
        {
          LODWORD(v80) = v8;
          v34 = *(_QWORD *)(a2 + 400);
          core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v34);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 64, 8);
          v6 = a1;
          LOBYTE(v8) = (_BYTE)v80;
        }
        if ( !*(_BYTE *)(a2 + 426) )
          goto LABEL_86;
        v35 = *v92;
        if ( !*v92 )
          goto LABEL_86;
LABEL_85:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 16), v35, 1);
        goto LABEL_86;
      }
LABEL_35:
      if ( *(_QWORD *)(a2 + 32) != 0x8000000000000000LL )
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..AnthropicDirectToResponsesStream$GT$::hac333e91d2a7cdb1(
          a2 + 32,
          *(double *)inserted.i64);
      goto LABEL_37;
    }
    v80 = v63;
    v70 = v72;
    v69 = v71;
    v67 = __dst[0];
    v68 = __dst[1];
    v86 = 0;
    v87 = 1;
    v88 = 0;
    v79 = v72;
    v78 = v71;
    v77 = __dst[1];
    v74 = __dst[0];
    v76 = __dst[0];
    v73 = __dst[1];
    core::str::converts::from_utf8::hb32deb9559450f6e(&v63, __dst[1], v71);
    if ( (_DWORD)v63 == 1 )
    {
      v14 = *(_QWORD *)(a2 + 24);
      if ( v14 > 0x4000000 )
      {
LABEL_17:
        v81 = (__int64 *)&unk_101676500;
        v82 = (size_t)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63, aUpstreamAnthro_0, &v81);
        v15 = v63;
        v8 = __dst[0];
        v16 = __dst[1];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v63, aUpstreamAnthro_0);
        v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v17 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        *v17 = v15;
        v17[1] = v8;
        v17[2] = v16;
        v93 = std::io::error::Error::_new::h73f9b193369f24ba(40, v17, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
        *(_BYTE *)(a2 + 427) = 0;
        __src = *(void **)(a2 + 400);
        v18 = (int)__src;
        inserted = _mm_load_si128((const __m128i *)"");
        *(__m128i *)v89 = inserted;
        LOBYTE(v18) = 1;
        v90 = v18;
        v84 = 1;
        v85 = nullptr;
        v10 = 0;
        LOBYTE(v8) = 1;
        goto LABEL_19;
      }
    }
    else
    {
      v4 = 0x8000000000000000LL;
      v36 = (const void *)__dst[0];
      v37 = __dst[1];
      v38 = *(_QWORD *)(a2 + 24);
      if ( __dst[1] > (unsigned __int64)(*(_QWORD *)(a2 + 8) - v38) )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          v92,
          v38,
          __dst[1],
          1,
          1,
          v13);
        v38 = *(_QWORD *)(a2 + 24);
      }
      memcpy((void *)(*(_QWORD *)(a2 + 16) + v38), v36, v37);
      v14 = *(_QWORD *)(a2 + 24) + v37;
      *(_QWORD *)(a2 + 24) = v14;
      if ( v14 > 0x4000000 )
        goto LABEL_17;
    }
    v89[0] = (void *)(a2 + 32);
    __src = (void *)1;
    v93 = 0;
    while ( 1 )
    {
      v63 = *(void **)(a2 + 16);
      __dst[0] = v14;
      __dst[1] = 0;
      __dst[2] = v14;
      LOBYTE(__dst[4]) = 1;
      __dst[3] = 0xA0000000ALL;
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        &v81,
        &v63);
      if ( (_DWORD)v81 != 1 )
        break;
      v39 = v82;
      v40 = *(char **)(a2 + 16);
      if ( v82 )
      {
        v41 = *(_QWORD *)(a2 + 24);
        if ( v82 >= v41 )
        {
          if ( v82 != v41 )
LABEL_116:
            core::str::slice_error_fail::h480e51fbd8b15eba(*(_QWORD *)(a2 + 16), v41, 0, v82, &off_10196DB00);
        }
        else if ( v40[v82] <= -65 )
        {
          goto LABEL_116;
        }
        if ( (v82 & 0x8000000000000000LL) != 0LL )
        {
          v50 = v4;
          v42 = 0;
          goto LABEL_70;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v81, v41);
        v42 = 1;
        v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1);
        if ( !v43 )
        {
          v50 = v39;
LABEL_70:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v50);
        }
        v4 = v43;
      }
      else
      {
        v4 = 1;
      }
      memcpy((void *)v4, v40, v39);
      v44 = *(_QWORD *)(a2 + 24);
      if ( v39 >= v44 )
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v39, v44, &off_10196DB18);
      v45 = v39 + 1;
      v46 = *(char **)(a2 + 16);
      if ( v39 + 1 < v44 && v46[v45] <= -65 )
        core::panicking::panic::h286e2dd5eab048be(&anon_10420c9971c21f44d230d15b39fb3fec_1000, 44, &off_10196DB18);
      __dst[1] = v92;
      __dst[2] = 0;
      __dst[3] = v39 + 1;
      v63 = v46;
      __dst[0] = &v46[v45];
      _$LT$alloc..string..Drain$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd05ba89ce6855ec4(&v63);
      if ( *(_QWORD *)v89[0] != 0x8000000000000000LL )
      {
        codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::feed_line::hf1c9f8d83c5513ae(
          &v63,
          (__int64)v89[0],
          v4,
          v39,
          *(double *)a4.i64);
        v48 = __dst[1];
        if ( __dst[1] )
        {
          v85 = (void *)__dst[0];
          v84 = v4;
          if ( __dst[1] > v86 - v93 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v86,
              v93,
              __dst[1],
              1,
              1,
              v47);
            __src = (void *)v87;
            v93 = v88;
          }
          v49 = v93;
          memcpy((char *)__src + v93, v85, v48);
          v93 = v48 + v49;
          v88 = v48 + v49;
          v4 = v84;
        }
        if ( v63 )
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0], v63, 1);
      }
      if ( v39 )
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v39, 1);
      v14 = *(_QWORD *)(a2 + 24);
    }
    v55 = *(void **)(a2 + 400);
    *(_WORD *)(a2 + 426) = 0;
    __dst[1] = v92[2];
    v56 = *v92;
    __dst[0] = v92[1];
    v63 = v56;
    *(_BYTE *)(a2 + 428) = 0;
    memcpy(&__dst[2], v89[0], 0x170u);
    __dst[48] = v55;
    v65 = 0;
    __src = v55;
    if ( v93 )
    {
      _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
        &v81,
        &v86);
      v85 = v81;
      v93 = v82;
      v75 = __n;
      v84 = __dst[0];
      inserted.i64[0] = __dst[1];
      *(_OWORD *)v89 = *(_OWORD *)&__dst[1];
      v57 = &__dst[3];
      v90 = 0;
    }
    else
    {
      v75 = 0;
      v84 = __dst[0];
      inserted.i64[0] = __dst[1];
      *(_OWORD *)v89 = *(_OWORD *)&__dst[1];
      v57 = (_QWORD *)(a2 + 40);
      v93 = 1;
      v58 = &off_10196E4B8;
      v85 = &off_10196E4B8;
      LOBYTE(v58) = 1;
      v90 = (int)v58;
    }
    v10 = (unsigned __int64)v63;
    memcpy(v59, v57, sizeof(v59));
    LODWORD(v8) = 0;
LABEL_19:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v76 + 32))(&v79, v77, v78);
    if ( (_BYTE)v90 && v86 )
      *(double *)inserted.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1);
    if ( !*(_BYTE *)(a2 + 428) )
      goto LABEL_37;
    goto LABEL_35;
  }
  v67 = 0;
  v86 = 0;
  v87 = 1;
  v88 = 0;
  v20 = *(void **)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0x8000000000000000LL;
  if ( v20 == (void *)0x8000000000000000LL )
    goto LABEL_25;
  v80 = v12;
  v63 = v20;
  memcpy(__dst, (const void *)(a2 + 40), 0x168u);
  v22 = *(_QWORD *)(a2 + 24);
  if ( v22 )
  {
    v89[0] = *(void **)(a2 + 8);
    v23 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 24) = 0;
    v93 = v23;
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::feed_line::hf1c9f8d83c5513ae(
      &v81,
      (__int64)&v63,
      v23,
      v22,
      *(double *)a4.i64);
    v25 = __n;
    if ( (_QWORD)__n )
    {
      __src = (void *)v82;
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v86, 0, __n, 1, 1, v24);
      v26 = v87;
      v27 = v88;
      memcpy((void *)(v87 + v88), __src, v25);
      v28 = v25 + v27;
      v88 = v28;
      v29 = v81;
      if ( !v81 )
        goto LABEL_31;
    }
    else
    {
      v26 = 1;
      v28 = 0;
      v29 = v81;
      if ( !v81 )
      {
LABEL_31:
        if ( v89[0] )
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v89[0], 1);
        goto LABEL_72;
      }
    }
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v29, 1);
    goto LABEL_31;
  }
  v26 = 1;
  v28 = 0;
LABEL_72:
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::flush::hbbf48238264a5f19(
    &v81,
    (__int64)&v63);
  v8 = __n;
  if ( (_QWORD)__n )
  {
    v89[0] = (void *)v82;
    if ( (unsigned __int64)__n > v86 - v28 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v86, v28, __n, 1, 1, v51);
      v26 = v87;
      v28 = v88;
    }
    memcpy((void *)(v28 + v26), v89[0], v8);
    v28 += v8;
    v88 = v28;
  }
  if ( v81 )
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v81, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..AnthropicDirectToResponsesStream$GT$::hac333e91d2a7cdb1(
    &v63,
    *(double *)a4.i64);
  if ( v28 )
  {
    _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
      &v63,
      &v86);
    v85 = v63;
    v93 = __dst[0];
    v75 = *(_OWORD *)&__dst[1];
    __src = *(void **)(a2 + 400);
    *(_WORD *)(a2 + 426) = 0;
    v10 = *(_QWORD *)(a2 + 8);
    v84 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    v21 = a2 + 32;
    if ( *(_QWORD *)(a2 + 32) == 0x8000000000000000LL )
      goto LABEL_81;
    goto LABEL_80;
  }
  if ( v86 )
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1);
LABEL_25:
  v10 = 0x8000000000000000LL;
  v21 = a2 + 32;
  if ( *(_QWORD *)(a2 + 32) == 0x8000000000000000LL )
    goto LABEL_81;
LABEL_80:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..AnthropicDirectToResponsesStream$GT$::hac333e91d2a7cdb1(
    v21,
    *(double *)a4.i64);
LABEL_81:
  if ( *(_BYTE *)(a2 + 427) )
  {
    v89[0] = (void *)v8;
    v52 = *(_QWORD *)(a2 + 400);
    core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v52);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 64, 8);
    v8 = (size_t)v89[0];
  }
  *(__m128i *)v89 = _mm_insert_epi64(_mm_load_si128((const __m128i *)""), v8, 0);
  LOBYTE(v8) = 1;
  if ( *(_BYTE *)(a2 + 426) )
  {
    v35 = *v92;
    LOBYTE(v8) = 1;
    if ( *v92 )
      goto LABEL_85;
  }
LABEL_86:
  v62 = v75;
  memcpy(v60, v59, sizeof(v60));
  *v94 = 1;
  if ( v10 == 0x8000000000000001LL )
    goto LABEL_87;
  v66 = v62;
  memcpy(v61, v60, sizeof(v61));
  if ( v10 == 0x8000000000000000LL )
  {
    if ( *(_QWORD *)a2 == 1 )
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_anthropic_direct_to_responses_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7b8cac61b79458c8(
        (__int64)v92,
        *(double *)&v62);
    }
    else if ( !*(_QWORD *)a2 )
    {
      core::ptr::drop_in_place$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..AnthropicDirectToResponsesStream$GT$$C$bool$RP$$GT$::hdbb418dd6b945ce3(v92);
    }
    *(_QWORD *)a2 = 2;
    *v6 = 0;
  }
  else
  {
    v63 = v85;
    __dst[0] = v93;
    *(_OWORD *)&__dst[1] = v66;
    if ( *(_QWORD *)a2 == 1 )
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_anthropic_direct_to_responses_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7b8cac61b79458c8(
        (__int64)v92,
        *(double *)&v62);
    }
    else if ( !*(_QWORD *)a2 )
    {
      core::ptr::drop_in_place$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..AnthropicDirectToResponsesStream$GT$$C$bool$RP$$GT$::hdbb418dd6b945ce3(v92);
    }
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = v10;
    *(_QWORD *)(a2 + 16) = v84;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)v89;
    memcpy((void *)(a2 + 40), v61, 0x168u);
    *(_QWORD *)(a2 + 400) = __src;
    *(_BYTE *)(a2 + 408) = v8;
    v54 = __dst[0];
    v6[1] = v63;
    v6[2] = v54;
    v6[3] = __dst[1];
    v6[4] = __dst[2];
    *v6 = 1;
  }
  return v6;
}
