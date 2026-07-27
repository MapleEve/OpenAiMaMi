// __ZN13codexmate_lib4core5relay5quota8get_json28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000e0820 | 基线 same-set
char __fastcall codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(
        __int64 *a1,
        __int64 a2,
        __int64 (__fastcall **a3)())
{
  __int64 (__fastcall **v3)(); // r13
  __int64 *v5; // r14
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  const void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 (__fastcall **v13)(); // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r15
  char result; // al
  __int64 (__fastcall **v18)(); // r12
  __int64 v19; // r14
  __int16 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r14
  _QWORD *v23; // r12
  __int64 (__fastcall **v24)(); // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int16 v27; // dx
  _QWORD *v28; // r15
  __int64 *v29; // rsi
  __int64 v30; // rcx
  _BYTE v31[96]; // [rsp+8h] [rbp-448h] BYREF
  __int64 v32; // [rsp+68h] [rbp-3E8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-3E0h]
  __int64 __dst; // [rsp+178h] [rbp-2D8h] BYREF
  __int64 v35; // [rsp+180h] [rbp-2D0h]
  __int64 v36; // [rsp+188h] [rbp-2C8h]
  __int64 *__src; // [rsp+288h] [rbp-1C8h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+290h] [rbp-1C0h]
  __int64 v39; // [rsp+298h] [rbp-1B8h]
  __int64 v40; // [rsp+2A0h] [rbp-1B0h]
  __int64 v41; // [rsp+2A8h] [rbp-1A8h]
  _QWORD v42[12]; // [rsp+2B0h] [rbp-1A0h] BYREF
  _QWORD v43[3]; // [rsp+398h] [rbp-B8h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+3B0h] [rbp-A0h]
  __int64 v45; // [rsp+3B8h] [rbp-98h]
  __int64 v46; // [rsp+3C0h] [rbp-90h]
  __int64 v47; // [rsp+3C8h] [rbp-88h]
  __int64 v48; // [rsp+3D0h] [rbp-80h]
  __int64 v49; // [rsp+3D8h] [rbp-78h]
  _QWORD v50[3]; // [rsp+3E0h] [rbp-70h] BYREF
  __int64 v51; // [rsp+3F8h] [rbp-58h]
  __int64 v52; // [rsp+400h] [rbp-50h]
  __int64 *v53; // [rsp+408h] [rbp-48h]
  const void *v54; // [rsp+410h] [rbp-40h]
  __int16 v55; // [rsp+41Eh] [rbp-32h]
  __int64 (__fastcall **v56)(); // [rsp+420h] [rbp-30h]

  v3 = a3; /*0x1000e0834*/
  v5 = a1; /*0x1000e083a*/
  switch ( *(_BYTE *)(a2 + 48) ) /*0x1000e084f*/
  {
    case 0: /*0x1000e084f*/
      v56 = a3; /*0x1000e0851*/
      v53 = a1; /*0x1000e0855*/
      v6 = *(_QWORD *)(a2 + 40); /*0x1000e086c*/
      reqwest::async_impl::client::Client::request::h7c49bfd56329fb46( /*0x1000e0881*/
        &__src,
        **(_QWORD **)a2,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_25,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16));
      reqwest::async_impl::request::RequestBuilder::bearer_auth::h25b09f3e95024f5c(&__dst, &__src); /*0x1000e089a*/
      v7 = *(_QWORD *)(v6 + 80); /*0x1000e089f*/
      if ( v7 >> 62 != 0 || 4 * v7 > 0x7FFFFFFFFFFFFFFELL ) /*0x1000e08c2*/
      {
        v8 = 0; /*0x1000e08c9*/
        goto LABEL_4; /*0x1000e08c9*/
      }
      v55 = *(_WORD *)(v6 + 88); /*0x1000e08e1*/
      v9 = *(const void **)(v6 + 72); /*0x1000e08e5*/
      if ( 4 * v7 ) /*0x1000e08a3*/
      {
        v54 = *(const void **)(v6 + 72); /*0x1000e08ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst, v9); /*0x1000e08f2*/
        v8 = 2; /*0x1000e08f7*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v7, 2); /*0x1000e0905*/
        if ( !v10 ) /*0x1000e090d*/
LABEL_4:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, 4 * v7); /*0x1000e08cc*/
        v11 = v10; /*0x1000e090f*/
        v9 = v54; /*0x1000e0912*/
      }
      else
      {
        v11 = 2; /*0x1000e0918*/
      }
      v54 = (const void *)v11; /*0x1000e091d*/
      memcpy((void *)v11, v9, 4 * v7); /*0x1000e0924*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(v43, v6 + 24); /*0x1000e0934*/
      v3 = v56; /*0x1000e0939*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(v50, v6 + 48); /*0x1000e0945*/
      v12 = *(__int64 **)v6; /*0x1000e094a*/
      if ( *(_QWORD *)v6 >= 2u ) /*0x1000e0951*/
      {
        v13 = *(__int64 (__fastcall ***)())(v6 + 8); /*0x1000e0953*/
        v45 = *(_QWORD *)(v6 + 16); /*0x1000e095b*/
        v44 = v13; /*0x1000e0962*/
      }
      LOWORD(v42[6]) = v55; /*0x1000e096d*/
      v42[4] = v54; /*0x1000e0978*/
      v42[5] = v7; /*0x1000e097f*/
      v40 = v43[0]; /*0x1000e0994*/
      v41 = v43[1]; /*0x1000e099b*/
      v42[0] = v43[2]; /*0x1000e09a9*/
      v42[1] = v50[0]; /*0x1000e09b8*/
      v42[2] = v50[1]; /*0x1000e09bf*/
      v42[3] = v50[2]; /*0x1000e09ca*/
      __src = v12; /*0x1000e09d1*/
      v38 = v44; /*0x1000e09e6*/
      v39 = v45; /*0x1000e09ed*/
      reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(&v32, &__dst); /*0x1000e0a09*/
      v14 = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(&v32); /*0x1000e0a15*/
      v5 = v53; /*0x1000e0a1a*/
      *(_QWORD *)(a2 + 56) = v14; /*0x1000e0a1e*/
      *(_QWORD *)(a2 + 64) = v15; /*0x1000e0a22*/
LABEL_12:
      _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d( /*0x1000e0a26*/
        &__src,
        a2 + 56,
        v3);
      v16 = __src; /*0x1000e0a39*/
      if ( __src == (__int64 *)4 ) /*0x1000e0a44*/
      {
        *v5 = 2; /*0x1000e0a46*/
        result = 3; /*0x1000e0a4d*/
        goto LABEL_37; /*0x1000e0a4f*/
      }
      v53 = v5; /*0x1000e0a54*/
      v18 = v38; /*0x1000e0a58*/
      v19 = v39; /*0x1000e0a5f*/
      v48 = v40; /*0x1000e0a6d*/
      v49 = v41; /*0x1000e0a78*/
      qmemcpy(v31, v42, sizeof(v31)); /*0x1000e0a8f*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000e0a9a*/
        *(_QWORD *)(a2 + 56),
        *(_QWORD *)(a2 + 64));
      if ( (_DWORD)v16 == 3 ) /*0x1000e0aa3*/
      {
        v50[0] = v18; /*0x1000e0aa9*/
        __dst = 0; /*0x1000e0aad*/
        v35 = 1; /*0x1000e0ab8*/
        v36 = 0; /*0x1000e0ac3*/
        v39 = 1610612768; /*0x1000e0ace*/
        __src = &__dst; /*0x1000e0ae0*/
        v38 = &off_101952F18; /*0x1000e0aee*/
        if ( (unsigned __int8)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11( /*0x1000e0b00*/
                                v50,
                                &__src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v32, &unk_101952FE0, &off_101952F48); /*0x1000e0e5f*/
        v19 = __dst; /*0x1000e0b14*/
        v32 = v35; /*0x1000e0b22*/
        v33 = v36; /*0x1000e0b29*/
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v18); /*0x1000e0b33*/
        v51 = v32; /*0x1000e0b46*/
        v52 = v33; /*0x1000e0b4a*/
        v20 = 1; /*0x1000e0b4e*/
LABEL_30:
        LODWORD(v25) = 0; /*0x1000e0d6e*/
        v26 = 1; /*0x1000e0d70*/
        goto LABEL_35; /*0x1000e0d75*/
      }
      v56 = v3; /*0x1000e0b58*/
      *(_QWORD *)(a2 + 64) = v16; /*0x1000e0b67*/
      *(_WORD *)(a2 + 72) = (_WORD)v18; /*0x1000e0b6b*/
      *(_WORD *)(a2 + 78) = HIWORD(v18); /*0x1000e0b74*/
      *(_DWORD *)(a2 + 74) = (unsigned __int64)v18 >> 16; /*0x1000e0b79*/
      *(_QWORD *)(a2 + 80) = v19; /*0x1000e0b7c*/
      v21 = v49; /*0x1000e0b84*/
      *(_QWORD *)(a2 + 88) = v48; /*0x1000e0b88*/
      *(_QWORD *)(a2 + 96) = v21; /*0x1000e0b8c*/
      qmemcpy((void *)(a2 + 104), v31, 0x60u); /*0x1000e0ba0*/
      LODWORD(v3) = *(_DWORD *)(a2 + 168); /*0x1000e0ba3*/
      *(_WORD *)(a2 + 56) = (_WORD)v3; /*0x1000e0baa*/
      if ( (unsigned __int16)((_WORD)v3 - 200) < 0x64u ) /*0x1000e0bbc*/
      {
        memcpy((void *)(a2 + 200), (const void *)(a2 + 64), 0x88u); /*0x1000e0bd1*/
        *(_BYTE *)(a2 + 760) = 0; /*0x1000e0bd6*/
        v5 = v53; /*0x1000e0bdd*/
        v3 = v56; /*0x1000e0be1*/
LABEL_19:
        reqwest::async_impl::response::Response::json::_$u7b$$u7b$closure$u7d$$u7d$::h9733780444b61ab2( /*0x1000e0be5*/
          &__src,
          a2 + 200,
          v3);
        v20 = (unsigned __int8)__src; /*0x1000e0bfe*/
        if ( (unsigned __int8)__src == 7 ) /*0x1000e0c0b*/
        {
          *v5 = 2; /*0x1000e0c0d*/
          result = 4; /*0x1000e0c14*/
          goto LABEL_37; /*0x1000e0c16*/
        }
        v53 = v5; /*0x1000e0c1b*/
        LODWORD(v54) = BYTE1(__src); /*0x1000e0c26*/
        v22 = *(unsigned int *)((char *)&__src + 2); /*0x1000e0c29*/
        v3 = (__int64 (__fastcall **)())HIWORD(__src); /*0x1000e0c30*/
        v56 = v38; /*0x1000e0c3f*/
        v46 = v39; /*0x1000e0c4a*/
        v47 = v40; /*0x1000e0c58*/
        if ( *(_BYTE *)(a2 + 760) == 3 ) /*0x1000e0c69*/
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 336); /*0x1000e0cb1*/
        }
        else if ( !*(_BYTE *)(a2 + 760) ) /*0x1000e0c5f*/
        {
          core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a2 + 200); /*0x1000e0c72*/
          v23 = *(_QWORD **)(a2 + 328); /*0x1000e0c77*/
          if ( *v23 ) /*0x1000e0c7e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[1], *v23, 1); /*0x1000e0c91*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 88, 8); /*0x1000e0ca3*/
        }
        if ( (_BYTE)v20 != 6 ) /*0x1000e0cba*/
        {
          v3 = (__int64 (__fastcall **)())(v22 | ((_QWORD)v3 << 32)); /*0x1000e0d7b*/
          v25 = (unsigned __int64)v3 >> 16; /*0x1000e0d81*/
          v52 = v47; /*0x1000e0d93*/
          v51 = v46; /*0x1000e0d97*/
          v27 = (_WORD)v54 << 8; /*0x1000e0d9f*/
          v26 = 0; /*0x1000e0da2*/
          v19 = (__int64)v56; /*0x1000e0da4*/
          goto LABEL_36; /*0x1000e0da8*/
        }
        v24 = v56; /*0x1000e0cc0*/
        v50[0] = v56; /*0x1000e0cc4*/
        __dst = 0; /*0x1000e0cc8*/
        v35 = 1; /*0x1000e0cd3*/
        v36 = 0; /*0x1000e0cde*/
        v39 = 1610612768; /*0x1000e0ce9*/
        __src = &__dst; /*0x1000e0cfb*/
        v38 = &off_101952F18; /*0x1000e0d09*/
        if ( (unsigned __int8)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11( /*0x1000e0d1b*/
                                v50,
                                &__src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v32, &unk_101952FE0, &off_101952F48); /*0x1000e0e87*/
        v19 = __dst; /*0x1000e0d2f*/
        v32 = v35; /*0x1000e0d3d*/
        v33 = v36; /*0x1000e0d44*/
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v24); /*0x1000e0d4e*/
        v51 = v32; /*0x1000e0d61*/
        v52 = v33; /*0x1000e0d65*/
        v20 = 2; /*0x1000e0d69*/
        goto LABEL_30; /*0x1000e0d69*/
      }
      core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a2 + 64); /*0x1000e0dad*/
      v28 = *(_QWORD **)(a2 + 192); /*0x1000e0db2*/
      if ( *v28 ) /*0x1000e0db9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28[1], *v28, 1); /*0x1000e0dca*/
      LODWORD(v25) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 88, 8); /*0x1000e0ddc*/
      v26 = 1; /*0x1000e0de1*/
      v20 = 0; /*0x1000e0de6*/
LABEL_35:
      v27 = 0; /*0x1000e0de9*/
LABEL_36:
      v29 = v53; /*0x1000e0deb*/
      *v53 = v26; /*0x1000e0def*/
      *((_WORD *)v29 + 4) = v27 | v20; /*0x1000e0df8*/
      *((_WORD *)v29 + 7) = WORD1(v25); /*0x1000e0e0c*/
      *(_DWORD *)((char *)v29 + 10) = ((_DWORD)v25 << 16) | (unsigned __int16)v3; /*0x1000e0e10*/
      v29[2] = v19; /*0x1000e0e13*/
      v30 = v52; /*0x1000e0e1b*/
      v29[3] = v51; /*0x1000e0e1f*/
      v29[4] = v30; /*0x1000e0e23*/
      result = 1; /*0x1000e0e27*/
LABEL_37:
      *(_BYTE *)(a2 + 48) = result; /*0x1000e0e29*/
      return result;
    case 1: /*0x1000e084f*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019525D0); /*0x1000e0ea1*/
    case 2: /*0x1000e084f*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019525D0); /*0x1000e0e95*/
    case 3: /*0x1000e084f*/
      goto LABEL_12;
    case 4: /*0x1000e084f*/
      goto LABEL_19;
  }
}