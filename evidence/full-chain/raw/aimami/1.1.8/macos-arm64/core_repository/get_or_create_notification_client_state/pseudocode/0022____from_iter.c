// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x1006be2d0 depth=2
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6752ec8e8eac1c67(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // rbx
  unsigned __int64 *result; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  char v21[8]; // [rsp+8h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+10h] [rbp-E0h]
  __int64 v23; // [rsp+20h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-C8h]
  __int64 v25; // [rsp+38h] [rbp-B8h]
  __int64 v26; // [rsp+40h] [rbp-B0h]
  __int64 v27; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-A0h]
  __int64 v29; // [rsp+58h] [rbp-98h]
  __int64 v30; // [rsp+60h] [rbp-90h]
  __int64 v31; // [rsp+68h] [rbp-88h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-80h]
  __int64 v33; // [rsp+78h] [rbp-78h]
  _QWORD *v34; // [rsp+80h] [rbp-70h]
  _QWORD *v35; // [rsp+88h] [rbp-68h]
  __int64 v36; // [rsp+90h] [rbp-60h]
  __int64 v37; // [rsp+98h] [rbp-58h]
  __int128 v38; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v39; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-38h]
  __int64 v41; // [rsp+C0h] [rbp-30h]

  v35 = a1; /*0x1006be2e7*/
  v2 = (__int64 *)a2[1]; /*0x1006be2eb*/
  v3 = (__int64 *)a2[3]; /*0x1006be2ef*/
  if ( v2 == v3 ) /*0x1006be2f6*/
  {
LABEL_4:
    v6 = v35; /*0x1006be35b*/
    *v35 = 0; /*0x1006be35f*/
    v6[1] = 8; /*0x1006be366*/
    v6[2] = 0; /*0x1006be36e*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2493b1aa827ad809(a2); /*0x1006be379*/
    return v6; /*0x1006be37e*/
  }
  else
  {
    while ( 1 ) /*0x1006be304*/
    {
      v30 = v2[3]; /*0x1006be304*/
      v29 = v2[2]; /*0x1006be30f*/
      v4 = *v2; /*0x1006be316*/
      v28 = v2[1]; /*0x1006be31d*/
      v27 = v4; /*0x1006be324*/
      v2 += 4; /*0x1006be32b*/
      a2[1] = (__int64)v2; /*0x1006be32f*/
      core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::h3394043cb301ec31( /*0x1006be344*/
        &v23,
        &v31,
        &v27);
      v5 = v23; /*0x1006be349*/
      if ( v23 != 2 ) /*0x1006be354*/
        break; /*0x1006be354*/
      if ( v2 == v3 ) /*0x1006be359*/
        goto LABEL_4; /*0x1006be359*/
    }
    v38 = v24; /*0x1006be394*/
    v8 = v25; /*0x1006be398*/
    v9 = v26; /*0x1006be39f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006be3a6*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xA0u, 8u); /*0x1006be3b5*/
    if ( !v10 ) /*0x1006be3bd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 160); /*0x1006be56d*/
    *(_QWORD *)v10 = v5; /*0x1006be3c3*/
    *(_OWORD *)(v10 + 8) = v38; /*0x1006be3ca*/
    *(_QWORD *)(v10 + 24) = v8; /*0x1006be3ce*/
    *(_QWORD *)(v10 + 32) = v9; /*0x1006be3d2*/
    v39 = 4; /*0x1006be3d6*/
    v36 = v10; /*0x1006be3de*/
    v40 = v10; /*0x1006be3e2*/
    v41 = 1; /*0x1006be3e6*/
    v11 = (_QWORD *)a2[3]; /*0x1006be3ee*/
    v34 = v11; /*0x1006be3f2*/
    v33 = a2[2]; /*0x1006be3fa*/
    v12 = *a2; /*0x1006be3fe*/
    v13 = (_QWORD *)a2[1]; /*0x1006be401*/
    v32 = v13; /*0x1006be405*/
    v31 = v12; /*0x1006be409*/
    if ( v13 != v11 ) /*0x1006be413*/
    {
      *(_QWORD *)&v38 = 1; /*0x1006be41e*/
      do /*0x1006be481*/
      {
        while ( 1 ) /*0x1006be434*/
        {
          v30 = v13[3]; /*0x1006be434*/
          v29 = v13[2]; /*0x1006be43f*/
          v14 = *v13; /*0x1006be446*/
          v28 = v13[1]; /*0x1006be44d*/
          v27 = v14; /*0x1006be454*/
          core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::h3394043cb301ec31( /*0x1006be468*/
            &v23,
            v21,
            &v27);
          v15 = v23; /*0x1006be46d*/
          v13 += 4; /*0x1006be474*/
          if ( v23 == 2 ) /*0x1006be47c*/
            break; /*0x1006be47c*/
          v32 = v13; /*0x1006be488*/
          v22 = v24; /*0x1006be493*/
          v37 = v25; /*0x1006be4a1*/
          v16 = v26; /*0x1006be4a5*/
          v17 = v38; /*0x1006be4ac*/
          if ( (_QWORD)v38 == v39 ) /*0x1006be4b4*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1006be4d1*/
              &v39,
              v38,
              1,
              8,
              0x28u);
            v36 = v40; /*0x1006be4da*/
            v17 = v38; /*0x1006be4de*/
          }
          v18 = 5 * v17; /*0x1006be4e2*/
          v19 = v36; /*0x1006be4e6*/
          *(_QWORD *)(v36 + 8 * v18) = v15; /*0x1006be4ea*/
          *(_OWORD *)(v19 + 8 * v18 + 8) = v22; /*0x1006be4f5*/
          *(_QWORD *)(v19 + 8 * v18 + 24) = v37; /*0x1006be4fe*/
          *(_QWORD *)(v19 + 8 * v18 + 32) = v16; /*0x1006be503*/
          *(_QWORD *)&v38 = v17 + 1; /*0x1006be50b*/
          v41 = v17 + 1; /*0x1006be50f*/
          v13 = v32; /*0x1006be513*/
          v11 = v34; /*0x1006be517*/
          if ( v32 == v34 ) /*0x1006be51e*/
            goto LABEL_14; /*0x1006be51e*/
        }
      }
      while ( v13 != v11 ); /*0x1006be481*/
      v32 = v13; /*0x1006be526*/
    }
LABEL_14:
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2493b1aa827ad809(&v31); /*0x1006be52a*/
    result = v35; /*0x1006be53a*/
    v35[2] = v41; /*0x1006be53e*/
    v20 = v39; /*0x1006be542*/
    result[1] = v40; /*0x1006be54a*/
    *result = v20; /*0x1006be54e*/
  }
  return result; /*0x1006be551*/
}