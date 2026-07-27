// __ZN13codexmate_lib4core5relay10translator28flatten_function_call_output @ 0x1008677c0 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::flatten_function_call_output::h9e1aa310da980a1b(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  size_t *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  const void *v10; // rsi
  size_t v11; // rdx
  size_t v12; // r14
  __int64 v13; // r14
  int v14; // eax
  char v15; // cl
  __int64 v17; // rsi
  __int64 v18; // rdx
  size_t v19; // r14
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // r15
  size_t v28; // rdx
  size_t v29; // r14
  __int64 v30; // r14
  int v31; // eax
  char v32; // cl
  char v33; // al
  __int64 v34; // rax
  const void *v35; // r15
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // [rsp+8h] [rbp-98h]
  __int64 v39; // [rsp+10h] [rbp-90h]
  __int64 *v40; // [rsp+18h] [rbp-88h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+20h] [rbp-80h]
  __int64 v42; // [rsp+28h] [rbp-78h]
  _QWORD *v43; // [rsp+30h] [rbp-70h]
  __int64 v44; // [rsp+38h] [rbp-68h]
  __int64 v45; // [rsp+40h] [rbp-60h]
  __int64 v46; // [rsp+48h] [rbp-58h]
  _QWORD *v47; // [rsp+50h] [rbp-50h]
  __int64 v48; // [rsp+58h] [rbp-48h] BYREF
  __int64 v49; // [rsp+60h] [rbp-40h]
  __int64 v50; // [rsp+68h] [rbp-38h]
  _BYTE v51[41]; // [rsp+77h] [rbp-29h] BYREF

  v2 = a1; /*0x1008677d1*/
  if ( !a2 ) /*0x1008677d7*/
  {
    a1[1] = 0; /*0x1008678f0*/
    a1[2] = 1; /*0x1008678f8*/
    a1[3] = 0; /*0x100867900*/
    goto LABEL_46; /*0x100867908*/
  }
  v3 = *(unsigned __int8 *)a2; /*0x1008677dd*/
  if ( v3 == 3 ) /*0x1008677e3*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1 + 1, a2 + 1); /*0x10086792e*/
    goto LABEL_46; /*0x100867933*/
  }
  if ( v3 == 4 ) /*0x1008677ec*/
  {
    v17 = a2[2]; /*0x100867910*/
    v18 = a2[3]; /*0x100867914*/
LABEL_21:
    codexmate_lib::core::relay::translator::flatten_content_items_text_only::h9da8e15177d50765(v2 + 1, v17, v18); /*0x100867918*/
    goto LABEL_46; /*0x100867921*/
  }
  if ( v3 != 5 ) /*0x1008677f5*/
  {
    v48 = 0; /*0x100867938*/
    v49 = 1; /*0x100867940*/
    v50 = 0; /*0x100867948*/
    v42 = 1610612768; /*0x100867950*/
    v40 = &v48; /*0x10086795c*/
    v41 = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x10086796a*/
    if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce( /*0x100867978*/
                            a2,
                            &v40) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008679a3*/
        &anon_10420c9971c21f44d230d15b39fb3fec_965,
        55,
        v51,
        &anon_10420c9971c21f44d230d15b39fb3fec_976,
        &anon_10420c9971c21f44d230d15b39fb3fec_967);
    goto LABEL_45; /*0x10086797f*/
  }
  v47 = a1; /*0x1008677fb*/
  v43 = a2; /*0x1008677ff*/
  v4 = a2[1]; /*0x100867803*/
  if ( !v4 ) /*0x10086780a*/
  {
LABEL_44:
    v48 = 0; /*0x100867a98*/
    v49 = 1; /*0x100867aa0*/
    v50 = 0; /*0x100867aa8*/
    v42 = 1610612768; /*0x100867ab0*/
    v40 = &v48; /*0x100867abc*/
    v41 = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x100867aca*/
    v33 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(v43, &v40); /*0x100867ad9*/
    v2 = v47; /*0x100867ae0*/
    if ( v33 ) /*0x100867ae4*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100867b88*/
        &anon_10420c9971c21f44d230d15b39fb3fec_965,
        55,
        v51,
        &anon_10420c9971c21f44d230d15b39fb3fec_976,
        &anon_10420c9971c21f44d230d15b39fb3fec_967);
LABEL_45:
    v2[3] = v50; /*0x100867aea*/
    v34 = v48; /*0x100867af2*/
    v2[2] = v49; /*0x100867afa*/
    v2[1] = v34; /*0x100867afe*/
    goto LABEL_46; /*0x100867afe*/
  }
  v44 = v43[2]; /*0x100867818*/
  v46 = v44; /*0x10086781c*/
  v45 = v4; /*0x100867820*/
  while ( 1 ) /*0x100867824*/
  {
    v5 = v4 + 360; /*0x100867824*/
    v38 = v4; /*0x100867832*/
    v6 = (size_t *)(v4 - 8); /*0x100867839*/
    v39 = *(unsigned __int16 *)(v4 + 626); /*0x10086783d*/
    v7 = 3LL * (unsigned int)(8 * v39); /*0x10086784b*/
    v8 = -1; /*0x10086784f*/
    do /*0x1008678b4*/
    {
      if ( !v7 ) /*0x100867863*/
      {
        v8 = v39; /*0x1008678c3*/
        goto LABEL_17; /*0x1008678c3*/
      }
      v9 = v5 + 24; /*0x100867865*/
      v10 = *(const void **)(v5 + 8); /*0x100867869*/
      v11 = *(_QWORD *)(v5 + 16); /*0x10086786d*/
      v12 = v11 - 7; /*0x100867874*/
      if ( v11 >= 7 ) /*0x10086787d*/
        v11 = 7; /*0x10086787d*/
      v13 = -(__int64)v12; /*0x100867881*/
      v14 = memcmp("contentpattern.output_modehead_limit", v10, v11); /*0x10086788b*/
      if ( v14 ) /*0x100867894*/
        v13 = v14; /*0x100867894*/
      v15 = (v13 > 0) - (v13 < 0); /*0x1008678a1*/
      v6 += 4; /*0x1008678a3*/
      ++v8; /*0x1008678a7*/
      v7 -= 24; /*0x1008678aa*/
      v5 = v9; /*0x1008678ae*/
    }
    while ( v15 == 1 ); /*0x1008678b4*/
    if ( !v15 ) /*0x1008678bb*/
      break; /*0x1008678bb*/
LABEL_17:
    if ( !v46 ) /*0x1008678d2*/
      goto LABEL_29; /*0x1008678d2*/
    --v46; /*0x1008678d8*/
    v4 = *(_QWORD *)(v38 + 8 * v8 + 632); /*0x1008678e3*/
  }
  if ( *((_BYTE *)v6 - 24) != 3 ) /*0x1008679b1*/
  {
LABEL_29:
    v21 = v45; /*0x1008679cd*/
LABEL_30:
    v22 = v21 + 360; /*0x1008679d1*/
    v23 = *(unsigned __int16 *)(v21 + 626); /*0x1008679d8*/
    v45 = v21; /*0x1008679df*/
    v24 = (_QWORD *)(v21 - 8); /*0x1008679e3*/
    v46 = v23; /*0x1008679e7*/
    v25 = 3LL * (unsigned int)(8 * v23); /*0x1008679f2*/
    v26 = -1; /*0x1008679f6*/
    do /*0x100867a54*/
    {
      if ( !v25 ) /*0x100867a03*/
      {
        v26 = v46; /*0x100867a5f*/
LABEL_40:
        if ( !v44 ) /*0x100867a6f*/
          goto LABEL_44; /*0x100867a6f*/
        --v44; /*0x100867a71*/
        v21 = *(_QWORD *)(v45 + 8 * v26 + 632); /*0x100867a75*/
        goto LABEL_30; /*0x100867a7d*/
      }
      v27 = v22 + 24; /*0x100867a05*/
      v28 = *(_QWORD *)(v22 + 16); /*0x100867a0d*/
      v29 = v28 - 13; /*0x100867a14*/
      if ( v28 >= 0xD ) /*0x100867a1d*/
        v28 = 13; /*0x100867a1d*/
      v30 = -(__int64)v29; /*0x100867a21*/
      v31 = memcmp(&unk_10167502A, *(const void **)(v22 + 8), v28); /*0x100867a2b*/
      if ( v31 ) /*0x100867a34*/
        v30 = v31; /*0x100867a34*/
      v32 = (v30 > 0) - (v30 < 0); /*0x100867a41*/
      v24 += 4; /*0x100867a43*/
      ++v26; /*0x100867a47*/
      v25 -= 24; /*0x100867a4a*/
      v22 = v27; /*0x100867a4e*/
    }
    while ( v32 == 1 ); /*0x100867a54*/
    if ( v32 ) /*0x100867a5b*/
      goto LABEL_40; /*0x100867a5b*/
    if ( *((_BYTE *)v24 - 24) == 4 ) /*0x100867a86*/
    {
      v17 = *(v24 - 1); /*0x100867a88*/
      v18 = *v24; /*0x100867a8c*/
      v2 = v47; /*0x100867a8f*/
      goto LABEL_21; /*0x100867a93*/
    }
    goto LABEL_44; /*0x100867a86*/
  }
  v19 = *v6; /*0x1008679b3*/
  if ( (*v6 & 0x8000000000000000LL) != 0LL ) /*0x1008679b9*/
  {
    v20 = 0; /*0x1008679bf*/
    goto LABEL_28; /*0x1008679bf*/
  }
  v35 = (const void *)*(v6 - 1); /*0x100867b14*/
  if ( *v6 ) /*0x1008679b3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("contentpattern.output_modehead_limit", v10); /*0x100867b1a*/
    v20 = 1; /*0x100867b1f*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x100867b2d*/
    v2 = v47; /*0x100867b35*/
    if ( !v36 ) /*0x100867b39*/
LABEL_28:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19); /*0x1008679c2*/
    v37 = v36; /*0x100867b3f*/
  }
  else
  {
    v37 = 1; /*0x100867b44*/
    v2 = v47; /*0x100867b4a*/
  }
  memcpy((void *)v37, v35, v19); /*0x100867b57*/
  v2[1] = v19; /*0x100867b5c*/
  v2[2] = v37; /*0x100867b60*/
  v2[3] = v19; /*0x100867b64*/
LABEL_46:
  *(_BYTE *)v2 = 3; /*0x100867b02*/
}