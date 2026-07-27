/* addr=0x1008c8210 cleanname=translator_stream_driver group=stream-drivers
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=631 brace_balanced=True truncation_markers=[]
 */
__int64 __fastcall _$LT$futures_util..stream..unfold..Unfold$LT$T$C$F$C$Fut$GT$$u20$as$u20$futures_core..stream..Stream$GT$::poll_next::h2b393a4bfbd48d30(
        __int64 a1,
        __int64 *a2,
        double a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  int v6; // eax
  _BYTE *v7; // r13
  __int64 (__fastcall **v8)(); // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int128 v15; // kr00_16
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // eax
  __int64 (__fastcall *v19)(); // rax
  __int64 v20; // r14
  double v21; // xmm0_8
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r9
  size_t v28; // r15
  void *v29; // r14
  __int64 v30; // r13
  size_t v31; // r12
  size_t v32; // r12
  __int64 (__fastcall **v33)(); // rsi
  __int128 v34; // kr10_16
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  const void *v38; // r14
  size_t v39; // r13
  __int64 v40; // rsi
  _QWORD *v41; // r14
  char *v42; // r13
  const void *v43; // rsi
  void *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // r12
  const void *v47; // r14
  unsigned __int64 v48; // rdx
  char *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // r12
  __int64 v52; // r9
  size_t v53; // r14
  __int64 v54; // r15
  __int64 v55; // rdi
  __int64 v56; // r9
  void *v57; // r14
  size_t v58; // r15
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 *v64; // rcx
  __int64 v65; // r14
  __int64 v66; // rax
  char *v67; // rsi
  _BYTE v68[424]; // [rsp+8h] [rbp-828h] BYREF
  _BYTE v69[424]; // [rsp+1B0h] [rbp-680h] BYREF
  _BYTE v70[424]; // [rsp+358h] [rbp-4D8h] BYREF
  __int128 v71; // [rsp+500h] [rbp-330h]
  _OWORD v72[27]; // [rsp+518h] [rbp-318h] BYREF
  __int64 v73; // [rsp+6C8h] [rbp-168h]
  void *v74; // [rsp+6D0h] [rbp-160h]
  __int64 v75; // [rsp+6D8h] [rbp-158h]
  __int64 v76; // [rsp+6E0h] [rbp-150h]
  char v77; // [rsp+6E8h] [rbp-148h]
  __int128 v78; // [rsp+6F0h] [rbp-140h]
  __int64 v79; // [rsp+700h] [rbp-130h]
  __int64 v80; // [rsp+708h] [rbp-128h]
  __int64 v81; // [rsp+710h] [rbp-120h]
  __int64 v82; // [rsp+718h] [rbp-118h]
  __int64 v83; // [rsp+720h] [rbp-110h]
  __int64 v84; // [rsp+728h] [rbp-108h]
  __int64 v85; // [rsp+730h] [rbp-100h]
  __int64 v86; // [rsp+738h] [rbp-F8h]
  __int128 v87; // [rsp+740h] [rbp-F0h]
  __int64 v88; // [rsp+758h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+760h] [rbp-D0h]
  __int64 v90; // [rsp+768h] [rbp-C8h]
  __int64 v91; // [rsp+770h] [rbp-C0h] BYREF
  __int64 v92; // [rsp+778h] [rbp-B8h]
  __int64 v93; // [rsp+780h] [rbp-B0h]
  __int64 v94; // [rsp+788h] [rbp-A8h]
  __int64 (__fastcall **v95)(); // [rsp+790h] [rbp-A0h] BYREF
  void *__src; // [rsp+798h] [rbp-98h]
  __int128 __n; // [rsp+7A0h] [rbp-90h]
  __int64 v98; // [rsp+7B0h] [rbp-80h] BYREF
  __int64 v99; // [rsp+7B8h] [rbp-78h]
  size_t v100; // [rsp+7C0h] [rbp-70h]
  __int64 v101; // [rsp+7C8h] [rbp-68h]
  __int64 v102; // [rsp+7D0h] [rbp-60h]
  void *v103; // [rsp+7D8h] [rbp-58h]
  __int64 v104; // [rsp+7E0h] [rbp-50h]
  __int64 v105; // [rsp+7E8h] [rbp-48h]
  _BYTE *v106; // [rsp+7F0h] [rbp-40h]
  void *v107; // [rsp+7F8h] [rbp-38h]
  int v108; // [rsp+804h] [rbp-2Ch]

  v4 = a1;
  if ( *a2 )
  {
    if ( (unsigned int)*a2 == 1 )
    {
      v7 = (char *)a2 + 489;
      v6 = *((unsigned __int8 *)a2 + 489);
      v8 = (__int64 (__fastcall **)())(a2 + 1);
      switch ( *((_BYTE *)a2 + 489) )
      {
        case 0:
          goto LABEL_6;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10196DAA0);
        case 2:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10196DAA0);
        case 3:
          v10 = *(_QWORD *)a2[60];
          goto LABEL_11;
      }
    }
    core::panicking::panic::h286e2dd5eab048be(&unk_1016765D7, 63, &off_10196D750);
  }
  v5 = a2[1];
  *a2 = 2;
  if ( v5 >= 3 )
    core::panicking::panic::h286e2dd5eab048be(&anon_155c4da9b5393270cfa7378e2b52c417_4, 40, &off_10196D8B8);
  v6 = *((unsigned __int8 *)a2 + 472);
  *a2 = 1;
  *((_BYTE *)a2 + 488) = v6;
  v7 = (char *)a2 + 489;
  *((_BYTE *)a2 + 489) = 0;
  v8 = (__int64 (__fastcall **)())(a2 + 1);
LABEL_6:
  *((_WORD *)a2 + 245) = 257;
  *((_BYTE *)a2 + 492) = 1;
  if ( *((_BYTE *)a2 + 488) && *(_DWORD *)v8 == 2 )
  {
    v107 = v8;
    v106 = v7;
    v9 = 3;
    LODWORD(v104) = v6;
    goto LABEL_76;
  }
  v10 = a2[58];
  a2[59] = v10;
  a2[60] = (__int64)(a2 + 59);
LABEL_11:
  _$LT$futures_util..stream..unfold..Unfold$LT$T$C$F$C$Fut$GT$$u20$as$u20$futures_core..stream..Stream$GT$::poll_next::h4e0cedd8ccbfb390(
    v72,
    v10);
  v11 = *(_QWORD *)&v72[0];
  if ( *(_QWORD *)&v72[0] == 2 )
  {
    *v7 = 3;
LABEL_82:
    *(_QWORD *)v4 = 2;
    return v4;
  }
  v101 = a1;
  v12 = *((_QWORD *)&v72[0] + 1);
  v83 = *((_QWORD *)&v72[1] + 1);
  v84 = *(_QWORD *)&v72[2];
  v107 = v8;
  if ( (v72[0] & 1) == 0 )
  {
    v79 = 0;
    v98 = 0;
    v99 = 1;
    v100 = 0;
    v19 = *v8;
    *v8 = (__int64 (__fastcall *)())2;
    if ( v19 == (__int64 (__fastcall *)())2 )
    {
      v20 = a2[58];
      core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v20);
      v4 = v101;
      v21 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 64, 8);
      v22 = a2[55];
      if ( v22 )
        v21 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[56], v22, 1);
      *((_BYTE *)a2 + 489) = 1;
      v23 = *a2;
      if ( (unsigned int)*a2 != 1 )
        goto LABEL_85;
      goto LABEL_27;
    }
    v86 = v11;
    *(_QWORD *)&v72[0] = v19;
    memcpy((char *)v72 + 8, a2 + 2, 0x1A8u);
    v24 = a2[57];
    v106 = v7;
    if ( !v24 )
    {
      v30 = 1;
      v32 = 0;
LABEL_67:
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush::h38a984e37508801f(
        &v95,
        (__int64)v72);
      v57 = __src;
      v58 = __n;
      if ( (unsigned __int64)__n > v98 - v32 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v98,
          v32,
          __n,
          1,
          1,
          v56);
        v30 = v99;
        v32 = v100;
      }
      memcpy((void *)(v32 + v30), v57, v58);
      v100 = v58 + v32;
      if ( v95 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v95, 1);
      _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
        &v95,
        &v98);
      v4 = v101;
      v8 = v95;
      v105 = (__int64)__src;
      v87 = __n;
      v102 = a2[58];
      *(_WORD *)((char *)a2 + 491) = 0;
      v93 = a2[55];
      v103 = (void *)a2[56];
      v94 = a2[57];
      v59 = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..ChatToResponsesStream$GT$::h2e9175531c7d396f(
              v72,
              a3);
      LOBYTE(v59) = 1;
      LODWORD(v104) = v59;
      v9 = 2;
LABEL_72:
      if ( !*((_BYTE *)a2 + 490) )
        goto LABEL_76;
      goto LABEL_73;
    }
    v25 = a2[55];
    v26 = a2[56];
    a2[55] = 0;
    a2[56] = 1;
    a2[57] = 0;
    v104 = v26;
    codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::feed_line::h9292eaaf05ba8703(
      &v95,
      v72,
      v26,
      v24);
    v28 = __n;
    if ( (_QWORD)__n )
    {
      v105 = v25;
      v29 = __src;
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v98, 0, __n, 1, 1, v27);
      v30 = v99;
      v31 = v100;
      memcpy((void *)(v99 + v100), v29, v28);
      v32 = v28 + v31;
      v100 = v32;
      v25 = v105;
      v33 = v95;
      if ( !v95 )
        goto LABEL_32;
    }
    else
    {
      v30 = 1;
      v32 = 0;
      v33 = v95;
      if ( !v95 )
      {
LABEL_32:
        if ( v25 )
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v25, 1);
        goto LABEL_67;
      }
    }
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v33, 1);
    goto LABEL_32;
  }
  v106 = v7;
  if ( *((_QWORD *)&v72[0] + 1) )
  {
    v86 = *(_QWORD *)&v72[0];
    v82 = v84;
    v81 = v83;
    v79 = *((_QWORD *)&v72[0] + 1);
    v80 = *(_QWORD *)&v72[1];
    v98 = 0;
    v99 = 1;
    v100 = 0;
    v91 = v84;
    v90 = v83;
    v89 = *(_QWORD *)&v72[1];
    v88 = *((_QWORD *)&v72[0] + 1);
    v85 = *(_QWORD *)&v72[1];
    core::str::converts::from_utf8::hb32deb9559450f6e(v72, *(_QWORD *)&v72[1], v83);
    if ( LODWORD(v72[0]) == 1 )
    {
      v14 = a2[57];
      if ( v14 > 0x4000000 )
      {
LABEL_17:
        v95 = (__int64 (__fastcall **)())&unk_101676500;
        __src = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, a5upstreamChatS, &v95);
        v15 = v72[0];
        v16 = *(_QWORD *)&v72[1];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v72, a5upstreamChatS);
        v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v17 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        *(_OWORD *)v17 = v15;
        *(_QWORD *)(v17 + 16) = v16;
        v105 = std::io::error::Error::_new::h73f9b193369f24ba(40, v17, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
        *((_BYTE *)a2 + 492) = 0;
        v102 = a2[58];
        v18 = v102;
        v9 = 2;
        LOBYTE(v18) = 1;
        v108 = v18;
        v103 = (void *)1;
        v93 = 0;
        v94 = 0;
        v8 = nullptr;
        LODWORD(v104) = 1;
LABEL_19:
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(v88 + 32))(&v91, v89, v90);
        if ( !(_BYTE)v108 )
        {
          v4 = v101;
          if ( !*((_BYTE *)a2 + 490) )
            goto LABEL_76;
          goto LABEL_73;
        }
        v4 = v101;
        if ( v98 )
        {
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1);
          if ( !*((_BYTE *)a2 + 490) )
            goto LABEL_76;
          goto LABEL_73;
        }
        goto LABEL_72;
      }
    }
    else
    {
      v38 = *((const void **)&v72[0] + 1);
      v39 = *(_QWORD *)&v72[1];
      v40 = a2[57];
      if ( *(_QWORD *)&v72[1] > (unsigned __int64)(a2[55] - v40) )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          a2 + 55,
          v40,
          *(_QWORD *)&v72[1],
          1,
          1,
          v13);
        v40 = a2[57];
      }
      memcpy((void *)(a2[56] + v40), v38, v39);
      v14 = a2[57] + v39;
      a2[57] = v14;
      if ( v14 > 0x4000000 )
        goto LABEL_17;
    }
    v41 = a2 + 55;
    v102 = 1;
    v105 = 0;
    while ( 1 )
    {
      *(_QWORD *)&v72[0] = a2[56];
      *((_QWORD *)&v72[0] + 1) = v14;
      *(_QWORD *)&v72[1] = 0;
      *((_QWORD *)&v72[1] + 1) = v14;
      BYTE8(v72[2]) = 1;
      *(_QWORD *)&v72[2] = 0xA0000000ALL;
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        &v95,
        v72);
      if ( (_DWORD)v95 != 1 )
        break;
      v42 = (char *)__src;
      v43 = (const void *)a2[56];
      if ( __src )
      {
        v44 = (void *)a2[57];
        if ( __src >= v44 )
        {
          if ( __src != v44 )
LABEL_108:
            core::str::slice_error_fail::h480e51fbd8b15eba(a2[56], a2[57], 0, __src, &off_10196DAB8);
        }
        else if ( *((char *)__src + (_QWORD)v43) <= -65 )
        {
          goto LABEL_108;
        }
        if ( (__int64)__src < 0 )
        {
          v55 = 0;
          goto LABEL_65;
        }
        v46 = v41;
        v47 = (const void *)a2[56];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v95, v43);
        v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1);
        if ( !v45 )
        {
          v104 = (__int64)v42;
          v55 = 1;
LABEL_65:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v55, v104);
        }
        v43 = v47;
        v41 = v46;
      }
      else
      {
        v45 = 1;
      }
      v104 = v45;
      memcpy((void *)v45, v43, (size_t)v42);
      v48 = a2[57];
      if ( (unsigned __int64)v42 >= v48 )
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v42, v48, &off_10196DAD0);
      v49 = v42 + 1;
      v50 = a2[56];
      if ( (unsigned __int64)(v42 + 1) < v48 && v49[v50] <= -65 )
        core::panicking::panic::h286e2dd5eab048be(&anon_10420c9971c21f44d230d15b39fb3fec_1000, 44, &off_10196DAD0);
      v72[1] = (unsigned __int64)v41;
      *(_QWORD *)&v72[2] = v42 + 1;
      *(_QWORD *)&v72[0] = v50;
      *((_QWORD *)&v72[0] + 1) = &v49[v50];
      _$LT$alloc..string..Drain$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd05ba89ce6855ec4(v72);
      if ( *(_DWORD *)v107 != 2 )
      {
        v51 = v41;
        codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::feed_line::h9292eaaf05ba8703(
          v72,
          v107,
          v104,
          (unsigned __int64)v42);
        v53 = *(_QWORD *)&v72[1];
        if ( *(_QWORD *)&v72[1] )
        {
          v103 = *((void **)&v72[0] + 1);
          v92 = v12;
          if ( *(_QWORD *)&v72[1] > (unsigned __int64)(v98 - v105) )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v98,
              v105,
              *(_QWORD *)&v72[1],
              1,
              1,
              v52);
            v102 = v99;
            v105 = v100;
          }
          v54 = v105;
          memcpy((void *)(v102 + v105), v103, v53);
          v105 = v53 + v54;
          v100 = v53 + v54;
          v12 = v92;
        }
        v41 = v51;
        if ( *(_QWORD *)&v72[0] )
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v72[0] + 1), *(_QWORD *)&v72[0], 1);
      }
      if ( v42 )
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v42, 1);
      v14 = a2[57];
    }
    v64 = v41;
    v65 = a2[58];
    *(_WORD *)((char *)a2 + 491) = 0;
    v75 = v64[2];
    v66 = *v64;
    v74 = (void *)v64[1];
    v73 = v66;
    *((_BYTE *)a2 + 490) = 0;
    memcpy(v72, v107, sizeof(v72));
    v76 = v65;
    v77 = 0;
    v102 = v65;
    if ( v105 )
    {
      _$LT$bytes..bytes..Bytes$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h4971f0278192659f(
        &v95,
        &v98);
      v8 = v95;
      v105 = (__int64)__src;
      v87 = __n;
      v67 = (char *)v72 + 8;
      v108 = 0;
    }
    else
    {
      a3 = 0.0;
      v87 = 0;
      v67 = (char *)(a2 + 2);
      v105 = 1;
      v8 = &off_10196E4B8;
      v108 = 1;
    }
    v9 = *(_QWORD *)&v72[0];
    memcpy(v68, v67, sizeof(v68));
    v93 = v73;
    v103 = v74;
    v94 = v75;
    LODWORD(v104) = 0;
    goto LABEL_19;
  }
  v88 = *(_QWORD *)&v72[1];
  v95 = (__int64 (__fastcall **)())&v88;
  __src = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, byte_1017C7254, &v95);
  v34 = v72[0];
  v35 = *(_QWORD *)&v72[1];
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v72, byte_1017C7254);
  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v36 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  *(_OWORD *)v36 = v34;
  *(_QWORD *)(v36 + 16) = v35;
  v105 = std::io::error::Error::_new::h73f9b193369f24ba(40, v36, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_580);
  v102 = a2[58];
  *(_WORD *)((char *)a2 + 491) = 0;
  v93 = a2[55];
  v103 = (void *)a2[56];
  v94 = a2[57];
  v37 = core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v88);
  v4 = v101;
  LOBYTE(v37) = 1;
  LODWORD(v104) = v37;
  v9 = 2;
  v8 = nullptr;
  if ( *((_BYTE *)a2 + 490) )
  {
LABEL_73:
    if ( *(_DWORD *)v107 != 2 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..translator..stream..ChatToResponsesStream$GT$::h2e9175531c7d396f(
        v107,
        a3);
  }
LABEL_76:
  if ( *((_BYTE *)a2 + 492) )
  {
    v60 = a2[58];
    core::ptr::drop_in_place$LT$futures_util..unfold_state..UnfoldState$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf6a204d5ca1d99a6(v60);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 64, 8);
  }
  if ( *((_BYTE *)a2 + 491) )
  {
    v61 = a2[55];
    if ( v61 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[56], v61, 1);
  }
  v71 = v87;
  memcpy(v69, v68, sizeof(v69));
  *v106 = 1;
  if ( v9 == 4 )
    goto LABEL_82;
  v21 = *(double *)&v71;
  v78 = v71;
  memcpy(v70, v69, sizeof(v70));
  v23 = *a2;
  if ( v9 == 3 )
  {
    v8 = (__int64 (__fastcall **)())v107;
    if ( (_DWORD)v23 != 1 )
    {
LABEL_85:
      if ( !v23 )
        core::ptr::drop_in_place$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..ChatToResponsesStream$GT$$C$bool$RP$$GT$::h1a5a1fc16a1f0602((__int64)v8);
      goto LABEL_87;
    }
LABEL_27:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_chat_to_responses_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h86ce2edb87b6674c(
      (__int64)v8,
      v21);
LABEL_87:
    *a2 = 2;
    *(_QWORD *)v4 = 0;
    return v4;
  }
  *(_QWORD *)&v72[0] = v8;
  *((_QWORD *)&v72[0] + 1) = v105;
  v72[1] = v78;
  if ( (_DWORD)v23 == 1 )
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..sse_chat_to_responses_stream$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h86ce2edb87b6674c(
      (__int64)v107,
      *(double *)&v71);
  }
  else if ( !v23 )
  {
    core::ptr::drop_in_place$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$futures_util..stream..unfold..Unfold$LT$$LP$core..pin..Pin$LT$alloc..boxed..Box$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$$C$alloc..vec..Vec$LT$u8$GT$$C$bool$RP$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$C$codexmate_lib..core..relay..proxy_server..utf8_boundary_chunks$LT$http_body_util..stream..BodyDataStream$LT$http_body_util..combinators..map_err..MapErr$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$C$reqwest..error..decode$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$alloc..string..String$C$core..option..Option$LT$codexmate_lib..core..relay..translator..stream..ChatToResponsesStream$GT$$C$bool$RP$$GT$::h1a5a1fc16a1f0602((__int64)v107);
  }
  *a2 = 0;
  a2[1] = v9;
  memcpy(a2 + 2, v70, 0x1A8u);
  a2[55] = v93;
  a2[56] = (__int64)v103;
  a2[57] = v94;
  a2[58] = v102;
  *((_BYTE *)a2 + 472) = v104;
  v62 = *((_QWORD *)&v72[0] + 1);
  *(_QWORD *)(v4 + 8) = *(_QWORD *)&v72[0];
  *(_QWORD *)(v4 + 16) = v62;
  *(_OWORD *)(v4 + 24) = v72[1];
  *(_QWORD *)v4 = 1;
  return v4;
}
