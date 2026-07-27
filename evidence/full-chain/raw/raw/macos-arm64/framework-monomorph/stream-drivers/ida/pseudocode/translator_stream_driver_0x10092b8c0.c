/* addr=0x10092b8c0 cleanname=translator_stream_driver group=stream-drivers
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=624 brace_balanced=True truncation_markers=[]
 */
__int64 *__fastcall _$LT$S$u20$as$u20$futures_core..stream..TryStream$GT$::try_poll_next::hde8d413cd10f4df5(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // r13
  char v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  char v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rbx
  _QWORD *v24; // rax
  char v25; // r14
  __int64 v26; // rax
  __int64 v27; // r14
  bool v28; // zf
  __int64 v29; // r14
  signed __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // r12
  __int64 v35; // r13
  __int64 v36; // rbx
  _QWORD *v37; // rax
  signed __int64 v38; // rbx
  const void *v39; // r14
  size_t v40; // r13
  __int64 v41; // rsi
  size_t v42; // r13
  char *v43; // r12
  size_t v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  size_t v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r9
  size_t v50; // r12
  size_t v51; // r14
  __int64 v52; // rdi
  size_t v53; // r13
  size_t v54; // r12
  __int64 v55; // r9
  void *v56; // r12
  size_t v57; // r13
  size_t v58; // r14
  __int64 v59; // r14
  __int64 v60; // r15
  signed __int64 v61; // rbx
  __int64 v62; // r14
  __int64 *result; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  _BYTE *v67; // rsi
  _BYTE v68[104]; // [rsp+0h] [rbp-320h] BYREF
  _QWORD v69[13]; // [rsp+68h] [rbp-2B8h] BYREF
  __int64 v70[14]; // [rsp+D0h] [rbp-250h] BYREF
  __int128 v71; // [rsp+140h] [rbp-1E0h]
  __int128 v72; // [rsp+150h] [rbp-1D0h]
  __int64 v73; // [rsp+168h] [rbp-1B8h]
  __int64 v74; // [rsp+170h] [rbp-1B0h]
  size_t v75; // [rsp+178h] [rbp-1A8h]
  __int64 v76; // [rsp+180h] [rbp-1A0h]
  size_t v77; // [rsp+188h] [rbp-198h]
  __int64 v78; // [rsp+190h] [rbp-190h]
  __int64 v79; // [rsp+198h] [rbp-188h]
  __int64 v80; // [rsp+1A0h] [rbp-180h]
  _BYTE *v81; // [rsp+1A8h] [rbp-178h]
  __int128 v82; // [rsp+1B0h] [rbp-170h]
  __m128i inserted; // [rsp+1C0h] [rbp-160h]
  _BYTE v84[136]; // [rsp+1D0h] [rbp-150h] BYREF
  __int64 v85; // [rsp+258h] [rbp-C8h]
  char v86; // [rsp+260h] [rbp-C0h]
  __int64 v87; // [rsp+268h] [rbp-B8h] BYREF
  void *v88; // [rsp+270h] [rbp-B0h]
  size_t v89; // [rsp+278h] [rbp-A8h]
  __int64 v90; // [rsp+280h] [rbp-A0h] BYREF
  __int64 *v91; // [rsp+288h] [rbp-98h] BYREF
  size_t v92; // [rsp+290h] [rbp-90h]
  __int128 v93; // [rsp+298h] [rbp-88h]
  void *v94; // [rsp+2A8h] [rbp-78h]
  __int64 v95; // [rsp+2B0h] [rbp-70h] BYREF
  __int64 v96; // [rsp+2B8h] [rbp-68h]
  size_t v97; // [rsp+2C0h] [rbp-60h]
  void *v98; // [rsp+2C8h] [rbp-58h]
  signed __int64 v99; // [rsp+2D0h] [rbp-50h]
  __int64 v100; // [rsp+2D8h] [rbp-48h]
  _QWORD *v101; // [rsp+2E0h] [rbp-40h]
  _BYTE *v102; // [rsp+2E8h] [rbp-38h]
  __int64 *v103; // [rsp+2F0h] [rbp-30h]

  v4 = a2;
  v103 = a1;
  v5 = 1;
  if ( *(_QWORD *)a2 )
  {
    if ( (unsigned int)*(_QWORD *)a2 == 1 )
    {
      v11 = a2 + 169;
      v12 = *(unsigned __int8 *)(a2 + 169);
      v101 = (_QWORD *)(a2 + 8);
      switch ( v12 )
      {
        case 0LL:
          v13 = *(_BYTE *)(a2 + 168);
          *(_WORD *)(a2 + 170) = 257;
          *(_BYTE *)(a2 + 172) = 1;
          if ( (v13 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_10;
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10196DA28);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10196DA28);
        case 3LL:
          v15 = **(_QWORD **)(a2 + 160);
          goto LABEL_12;
        case 4LL:
          JUMPOUT(0x100D2EADBLL);
      }
    }
    core::panicking::panic::h286e2dd5eab048be(&unk_1016765D7, 63, &off_10196D750);
  }
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 2;
  if ( v6 < 0 )
    core::panicking::panic::h286e2dd5eab048be(&anon_155c4da9b5393270cfa7378e2b52c417_4, 40, &off_10196D8B8);
  v99 = a3;
  v102 = *(_BYTE **)(a2 + 144);
  v7 = *(_BYTE *)(a2 + 152);
  qmemcpy(v70, (const void *)(a2 + 32), sizeof(v70));
  v8 = *(__int64 **)(a2 + 16);
  v92 = *(_QWORD *)(a2 + 24);
  v91 = v8;
  v9 = *(_QWORD *)(a2 + 24);
  v69[0] = *(_QWORD *)(a2 + 16);
  v69[1] = v9;
  qmemcpy(v84, (const void *)(a2 + 32), 0x70u);
  *(double *)a4.i64 = core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h36a2d9be43162e3f(a2);
  v101 = (_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = v6;
  v10 = v69[0];
  *(_QWORD *)(a2 + 24) = v69[1];
  *(_QWORD *)(a2 + 16) = v10;
  qmemcpy((void *)(a2 + 32), v84, 0x70u);
  *(_QWORD *)(a2 + 144) = v102;
  *(_BYTE *)(a2 + 168) = v7;
  v11 = a2 + 169;
  *(_BYTE *)(a2 + 169) = 0;
  a3 = v99;
  v5 = 1;
  *(_WORD *)(a2 + 170) = 257;
  *(_BYTE *)(a2 + 172) = 1;
  if ( (v7 & 1) != 0 )
  {
LABEL_8:
    if ( *(_QWORD *)(a2 + 32) == 0x8000000000000001LL )
    {
      v102 = (_BYTE *)v11;
      v14 = 0x8000000000000000LL;
      goto LABEL_87;
    }
  }
LABEL_10:
  v15 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(v4 + 152) = v15;
  *(_QWORD *)(v4 + 160) = v4 + 152;
LABEL_12:
  _$LT$futures_util..stream..unfold..Unfold$LT$T$C$F$C$Fut$GT$$u20$as$u20$futures_core..stream..Stream$GT$::poll_next::h4e0cedd8ccbfb390(
    (__int64)v84,
    v15,
    a3,
    a4);
  v16 = *(_QWORD *)v84;
  if ( *(_QWORD *)v84 == 2 )
  {
    *(_BYTE *)v11 = 3;
LABEL_93:
    result = v103;
    *v103 = 2;
    return result;
  }
  v17 = *(_QWORD *)&v84[8];
  v77 = *(_QWORD *)&v84[24];
  v78 = *(_QWORD *)&v84[32];
  if ( (v84[0] & 1) != 0 )
  {
    v102 = (_BYTE *)v11;
    if ( !*(_QWORD *)&v84[8] )
    {
      v33 = v4;
      v87 = *(_QWORD *)&v84[16];
      v91 = &v87;
      v92 = (size_t)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v84, aUpstreamCrossP, &v91);
      v34 = *(_QWORD *)v84;
      v35 = *(_QWORD *)&v84[8];
      v36 = *(_QWORD *)&v84[16];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, aUpstreamCrossP);
      v37 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v37 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      *v37 = v34;
      v37[1] = v35;
      v37[2] = v36;
      v99 = std::io::error::Error::_new::h73f9b193369f24ba(40, v37, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
      v11 = *(_QWORD *)(v33 + 144);
      *(_WORD *)(v33 + 171) = 0;
      v14 = *(_QWORD *)(v33 + 8);
      v98 = *(void **)(v33 + 16);
      v38 = *(_QWORD *)(v33 + 24);
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v87);
      inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_101676450), v38, 0);
      v5 = 1;
      v94 = nullptr;
      v4 = v33;
      goto LABEL_33;
    }
    v80 = *(_QWORD *)v84;
    v76 = v78;
    v75 = v77;
    v73 = *(_QWORD *)&v84[8];
    v74 = *(_QWORD *)&v84[16];
    v95 = 0;
    v96 = 1;
    v97 = 0;
    v90 = v78;
    v89 = v77;
    v88 = *(void **)&v84[16];
    v87 = *(_QWORD *)&v84[8];
    v79 = *(_QWORD *)&v84[16];
    core::str::converts::from_utf8::hb32deb9559450f6e(v84, *(_QWORD *)&v84[16], v77);
    v100 = v17;
    if ( *(_DWORD *)v84 == 1 )
    {
      v19 = *(_QWORD *)(v4 + 24);
      if ( v19 > 0x4000000 )
      {
LABEL_18:
        v20 = v4;
        v91 = (__int64 *)&unk_101676500;
        v92 = (size_t)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v84, aUpstreamCrossP_0, &v91);
        v21 = *(_QWORD *)v84;
        v22 = *(_QWORD *)&v84[8];
        v23 = *(_QWORD *)&v84[16];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, aUpstreamCrossP_0);
        v24 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v24 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        *v24 = v21;
        v24[1] = v22;
        v24[2] = v23;
        v99 = std::io::error::Error::_new::h73f9b193369f24ba(40, v24, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
        v4 = v20;
        *(_BYTE *)(v20 + 172) = 0;
        v11 = *(_QWORD *)(v20 + 144);
        inserted = _mm_load_si128((const __m128i *)&xmmword_101676450);
        v25 = 1;
        v98 = (void *)1;
        v94 = nullptr;
        v14 = 0;
        v5 = 1;
        goto LABEL_20;
      }
    }
    else
    {
      v39 = *(const void **)&v84[8];
      v40 = *(_QWORD *)&v84[16];
      v41 = v101[2];
      if ( *(_QWORD *)&v84[16] > (unsigned __int64)(*v101 - v41) )
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          v101,
          v41,
          *(_QWORD *)&v84[16],
          1,
          1,
          v18);
      memcpy((void *)(*(_QWORD *)(v4 + 24) + *(_QWORD *)(v4 + 16)), v39, v40);
      v19 = *(_QWORD *)(v4 + 24) + v40;
      *(_QWORD *)(v4 + 24) = v19;
      if ( v19 > 0x4000000 )
        goto LABEL_18;
    }
    v99 = v4 + 32;
    v81 = (_BYTE *)(v4 + 40);
    v98 = (void *)0x8000000000000000LL;
    while ( 1 )
    {
      *(_QWORD *)v84 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)&v84[8] = v19;
      *(_QWORD *)&v84[16] = 0;
      *(_QWORD *)&v84[24] = v19;
      v84[40] = 1;
      *(_QWORD *)&v84[32] = 0xA0000000ALL;
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        &v91,
        v84);
      if ( (_DWORD)v91 != 1 )
        break;
      v42 = v92;
      v43 = *(char **)(v4 + 16);
      if ( v92 )
      {
        v44 = *(_QWORD *)(v4 + 24);
        if ( v92 >= v44 )
        {
          if ( v92 != v44 )
LABEL_110:
            core::str::slice_error_fail::h480e51fbd8b15eba(*(_QWORD *)(v4 + 16), v44, 0, v92, &off_10196DA40);
        }
        else if ( v43[v92] <= -65 )
        {
          goto LABEL_110;
        }
        if ( (v92 & 0x8000000000000000LL) != 0LL )
        {
          v52 = 0;
          goto LABEL_66;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v91, v44);
        v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1);
        if ( !v45 )
        {
          v11 = v42;
          v52 = 1;
LABEL_66:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v52, v11);
        }
        v11 = v45;
      }
      else
      {
        v11 = 1;
      }
      memcpy((void *)v11, v43, v42);
      v46 = v101[2];
      if ( v42 >= v46 )
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v42, v46, &off_10196DA58);
      v47 = v42 + 1;
      v48 = v101[1];
      if ( v42 + 1 < v46 && *(char *)(v48 + v47) <= -65 )
        core::panicking::panic::h286e2dd5eab048be(&anon_10420c9971c21f44d230d15b39fb3fec_1000, 44, &off_10196DA58);
      *(_QWORD *)&v84[16] = v101;
      *(_QWORD *)&v84[24] = 0;
      *(_QWORD *)&v84[32] = v42 + 1;
      *(_QWORD *)v84 = v48;
      *(_QWORD *)&v84[8] = v48 + v47;
      _$LT$alloc..string..Drain$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd05ba89ce6855ec4(v84);
      if ( *(_QWORD *)v99 != 0x8000000000000001LL )
      {
        if ( *(void **)v99 == v98 )
          codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::feed_line::hba4c63216357a99f(
            v84,
            (__int64)v81,
            v11,
            v42);
        else
          codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::feed_line::h0833b8a63defd927(
            v84,
            v99,
            v11,
            v42,
            *(double *)a4.i64);
        v50 = *(_QWORD *)&v84[16];
        if ( *(_QWORD *)&v84[16] )
        {
          v94 = *(void **)&v84[8];
          v51 = v97;
          if ( *(_QWORD *)&v84[16] > v95 - v97 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v95,
              v97,
              *(_QWORD *)&v84[16],
              1,
              1,
              v49);
            v51 = v97;
          }
          memcpy((void *)(v51 + v96), v94, v50);
          v97 = v50 + v51;
        }
        if ( *(_QWORD *)v84 )
          *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v84[8], *(_QWORD *)v84, 1);
      }
      if ( v42 )
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v42, 1);
      v19 = *(_QWORD *)(v4 + 24);
    }
    v11 = *(_QWORD *)(v4 + 144);
    *(_WORD *)(v4 + 171) = 0;
    *(_QWORD *)&v84[16] = v101[2];
    v66 = *v101;
    *(_QWORD *)&v84[8] = v101[1];
    *(_QWORD *)v84 = v66;
    *(_BYTE *)(v4 + 170) = 0;
    qmemcpy(&v84[24], (const void *)v99, 0x70u);
    v85 = v11;
    v86 = 0;
    if ( v97 )
    {
      _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
        &v91,
        &v95);
      v94 = v91;
      v99 = v92;
      v82 = v93;
      v98 = *(void **)&v84[8];
      inserted = *(__m128i *)&v84[16];
      v67 = &v84[32];
      v25 = 0;
    }
    else
    {
      v82 = 0;
      v98 = *(void **)&v84[8];
      v99 = 1;
      v94 = &off_10196E4B8;
      v67 = v81;
      v25 = 1;
      inserted = *(__m128i *)&v84[16];
    }
    v14 = *(_QWORD *)v84;
    qmemcpy(v70, v67, 0x68u);
    v5 = 0;
LABEL_20:
    (*(void (__fastcall **)(__int64 *, void *, size_t))(v87 + 32))(&v90, v88, v89);
    if ( v25 && v95 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v95, 1);
      if ( !*(_BYTE *)(v4 + 170) )
        goto LABEL_87;
      goto LABEL_85;
    }
LABEL_33:
    if ( !*(_BYTE *)(v4 + 170) )
      goto LABEL_87;
    goto LABEL_85;
  }
  v73 = 0;
  v95 = 0;
  v96 = 1;
  v97 = 0;
  v26 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 32) = 0x8000000000000001LL;
  if ( v26 == 0x8000000000000001LL )
  {
    v27 = *(_QWORD *)(v4 + 144);
    core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v27);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 64, 8);
    if ( *v101 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101[1], *v101, 1);
    *(_BYTE *)v11 = 1;
    goto LABEL_95;
  }
  v80 = v16;
  *(_QWORD *)v84 = v26;
  qmemcpy(&v84[8], (const void *)(v4 + 40), 0x68u);
  v28 = *(_QWORD *)(v4 + 24) == 0;
  v102 = (_BYTE *)v11;
  if ( !v28 )
  {
    v29 = *(_QWORD *)(v4 + 8);
    v30 = v101[1];
    v31 = v101[2];
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = 1;
    *(_QWORD *)(v4 + 24) = 0;
    v99 = v30;
    if ( v26 == 0x8000000000000000LL )
      codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::feed_line::hba4c63216357a99f(
        &v91,
        (__int64)&v84[8],
        v30,
        v31);
    else
      codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::feed_line::h0833b8a63defd927(
        &v91,
        (__int64)v84,
        v30,
        v31,
        *(double *)a4.i64);
    v53 = v93;
    if ( (_QWORD)v93 )
    {
      v98 = (void *)v92;
      v54 = v97;
      if ( (unsigned __int64)v93 > v95 - v97 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v95,
          v97,
          v93,
          1,
          1,
          v32);
        v54 = v97;
      }
      memcpy((void *)(v54 + v96), v98, v53);
      v97 = v53 + v54;
    }
    if ( v91 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1);
    if ( v29 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v29, 1);
    v26 = *(_QWORD *)v84;
  }
  if ( v26 == 0x8000000000000000LL )
    codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::flush::hd0bb8415045171e1(
      &v87,
      (__int64)&v84[8]);
  else
    codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::flush::h3e0622257d8ea8fb(
      &v87,
      (__int64)v84);
  v56 = v88;
  v57 = v89;
  v58 = v97;
  if ( v89 > v95 - v97 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v95, v97, v89, 1, 1, v55);
    v58 = v97;
  }
  memcpy((void *)(v58 + v96), v56, v57);
  v97 = v57 + v58;
  _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
    &v91,
    &v95);
  v94 = v91;
  v99 = v92;
  v82 = v93;
  v59 = *(_QWORD *)(v4 + 144);
  *(_WORD *)(v4 + 171) = 0;
  v14 = *(_QWORD *)(v4 + 8);
  v98 = *(void **)(v4 + 16);
  v60 = v4;
  v61 = *(_QWORD *)(v4 + 24);
  if ( v87 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v87, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$::h6c54c493097da679((__int64 *)v84);
  inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_101676450), v61, 0);
  v5 = 1;
  v4 = v60;
  v11 = v59;
  if ( *(_BYTE *)(v4 + 170) )
  {
LABEL_85:
    if ( *(_QWORD *)(v4 + 32) != 0x8000000000000001LL )
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$::h6c54c493097da679((__int64 *)(v4 + 32));
  }
LABEL_87:
  if ( *(_BYTE *)(v4 + 172) )
  {
    v62 = *(_QWORD *)(v4 + 144);
    core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v62);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 64, 8);
  }
  if ( *(_BYTE *)(v4 + 171) )
  {
    if ( *v101 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101[1], *v101, 1);
  }
  v71 = v82;
  qmemcpy(v69, v70, sizeof(v69));
  *v102 = 1;
  if ( v14 == 0x8000000000000001LL )
    goto LABEL_93;
  v72 = v71;
  qmemcpy(v68, v69, sizeof(v68));
  if ( v14 != 0x8000000000000000LL )
  {
    *(_QWORD *)v84 = v94;
    *(_QWORD *)&v84[8] = v99;
    *(_OWORD *)&v84[16] = v72;
    core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h36a2d9be43162e3f(v4);
    *(_QWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = v14;
    *(_QWORD *)(v4 + 16) = v98;
    *(__m128i *)(v4 + 24) = inserted;
    qmemcpy((void *)(v4 + 40), v68, 0x68u);
    *(_QWORD *)(v4 + 144) = v11;
    *(_BYTE *)(v4 + 152) = v5;
    v70[3] = *(_QWORD *)&v84[24];
    v70[2] = *(_QWORD *)&v84[16];
    v70[1] = *(_QWORD *)&v84[8];
    v70[0] = *(_QWORD *)v84;
    _$LT$T$u20$as$u20$futures_util..fns..FnMut1$LT$A$GT$$GT$::call_mut::ha92a3499b2082c32(v84, v4 + 176, v70);
    v64 = 1;
    goto LABEL_97;
  }
LABEL_95:
  core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..proxy_server..sse_translate_stream..TranslatorState$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..sse_translate_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h36a2d9be43162e3f(v4);
  *(_QWORD *)v4 = 2;
  v64 = 0;
LABEL_97:
  result = v103;
  *v103 = v64;
  v65 = *(_QWORD *)&v84[8];
  result[1] = *(_QWORD *)v84;
  result[2] = v65;
  result[3] = *(_QWORD *)&v84[16];
  result[4] = *(_QWORD *)&v84[24];
  return result;
}
