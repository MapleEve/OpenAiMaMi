// __ZN13codexmate_lib4core5relay23codex_thread_visibility38read_rollout_providers_for_convergence @ 0x100aef780 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::read_rollout_providers_for_convergence::h78b940472c5aade1(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  double result; // xmm0_8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _BYTE v20[88]; // [rsp+10h] [rbp-190h] BYREF
  __int64 v21; // [rsp+68h] [rbp-138h]
  _QWORD *v22[11]; // [rsp+70h] [rbp-130h] BYREF
  _QWORD v23[2]; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-C8h] BYREF
  _BYTE v25[96]; // [rsp+E0h] [rbp-C0h] BYREF
  _QWORD *v26; // [rsp+140h] [rbp-60h]
  _QWORD *v27; // [rsp+148h] [rbp-58h] BYREF
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // [rsp+150h] [rbp-50h]
  __int64 v29; // [rsp+158h] [rbp-48h]
  _QWORD *v30; // [rsp+160h] [rbp-40h]
  __int64 v31; // [rsp+168h] [rbp-38h]
  __int64 v32; // [rsp+170h] [rbp-30h]

  result = codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc( /*0x100aef7a4*/
             &v24,
             a2,
             a3);
  v7 = *(_QWORD *)v25; /*0x100aef7af*/
  qmemcpy(v20, &v25[8], sizeof(v20)); /*0x100aef7c9*/
  if ( (_DWORD)v24 == 1 ) /*0x100aef7cf*/
  {
    qmemcpy(a1 + 1, v20, 0x58u); /*0x100aef7e1*/
    *a1 = v7; /*0x100aef7e4*/
    return result; /*0x100aef7e7*/
  }
  if ( __OFSUB__(-*(_QWORD *)v25, 1) ) /*0x100aef7ef*/
  {
    v23[0] = a2; /*0x100aef7f4*/
    v23[1] = a3; /*0x100aef7fb*/
    v27 = v23; /*0x100aef809*/
    v28 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aef814*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017CB979, &v27); /*0x100aef82d*/
    qmemcpy(a1 + 1, v25, 0x58u); /*0x100aef83e*/
    *a1 = 9; /*0x100aef846*/
    return result; /*0x100aef849*/
  }
  qmemcpy(v22, v20, sizeof(v22)); /*0x100aef861*/
  v21 = *(_QWORD *)v25; /*0x100aef864*/
  v30 = v22[0]; /*0x100aef88f*/
  result = codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100aef899*/
             &v24,
             v22[0],
             (__int64 (__fastcall *)())v22[1],
             (__int64)a2,
             a3,
             (__int64)"firstrouter_model_restore.json",
             5);
  v8 = v24; /*0x100aef89e*/
  v9 = *(_QWORD *)v25; /*0x100aef8a5*/
  v10 = *(_QWORD *)&v25[8]; /*0x100aef8ac*/
  v11 = *(_QWORD *)&v25[16]; /*0x100aef8b3*/
  if ( v24 == 11 ) /*0x100aef8be*/
  {
    v31 = *(_QWORD *)&v25[8]; /*0x100aef8c4*/
    v32 = *(_QWORD *)v25; /*0x100aef8c8*/
    v26 = v22[6]; /*0x100aef8f0*/
    result = codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100aef8fa*/
               &v24,
               v22[6],
               (__int64 (__fastcall *)())v22[7],
               (__int64)a2,
               a3,
               (__int64)&unk_10167BC38,
               4);
    v12 = v24; /*0x100aef8ff*/
    v13 = a1 + 4; /*0x100aef90d*/
    v27 = *(_QWORD **)v25; /*0x100aef911*/
    v28 = *(__int64 (__fastcall **)(_QWORD, _QWORD))&v25[8]; /*0x100aef91c*/
    v29 = *(_QWORD *)&v25[16]; /*0x100aef927*/
    if ( v24 == 11 ) /*0x100aef92f*/
    {
      a1[6] = v29; /*0x100aef939*/
      v14 = v27; /*0x100aef93d*/
      a1[5] = v28; /*0x100aef945*/
      *v13 = v14; /*0x100aef949*/
      a1[1] = v32; /*0x100aef950*/
      a1[2] = v31; /*0x100aef958*/
      a1[3] = v11; /*0x100aef95c*/
      *a1 = 11; /*0x100aef960*/
    }
    else
    {
      a1[11] = *(_QWORD *)&v25[80]; /*0x100aefa05*/
      a1[10] = *(_QWORD *)&v25[72]; /*0x100aefa0d*/
      a1[9] = *(_QWORD *)&v25[64]; /*0x100aefa15*/
      a1[8] = *(_QWORD *)&v25[56]; /*0x100aefa20*/
      a1[7] = *(_QWORD *)&v25[48]; /*0x100aefa2b*/
      a1[6] = *(_QWORD *)&v25[40]; /*0x100aefa36*/
      v18 = *(_QWORD *)&v25[24]; /*0x100aefa3a*/
      a1[5] = *(_QWORD *)&v25[32]; /*0x100aefa48*/
      *v13 = v18; /*0x100aefa4c*/
      a1[3] = v29; /*0x100aefa53*/
      v19 = v27; /*0x100aefa57*/
      a1[2] = v28; /*0x100aefa5f*/
      a1[1] = v19; /*0x100aefa63*/
      *a1 = v12; /*0x100aefa67*/
      if ( v32 ) /*0x100aefa75*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v32, 1); /*0x100aefa7c*/
    }
    if ( v7 ) /*0x100aefa84*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v7, 1); /*0x100aefa92*/
    v16 = v22[5]; /*0x100aefa97*/
    if ( v22[5] ) /*0x100aefaa1*/
    {
      v17 = v26; /*0x100aefaa8*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100aefaa8*/
    }
  }
  else
  {
    a1[11] = *(_QWORD *)&v25[80]; /*0x100aef970*/
    a1[10] = *(_QWORD *)&v25[72]; /*0x100aef978*/
    a1[9] = *(_QWORD *)&v25[64]; /*0x100aef980*/
    a1[8] = *(_QWORD *)&v25[56]; /*0x100aef98b*/
    a1[7] = *(_QWORD *)&v25[48]; /*0x100aef996*/
    a1[6] = *(_QWORD *)&v25[40]; /*0x100aef9a1*/
    v15 = *(_QWORD *)&v25[24]; /*0x100aef9a5*/
    a1[5] = *(_QWORD *)&v25[32]; /*0x100aef9b3*/
    a1[4] = v15; /*0x100aef9b7*/
    a1[1] = v9; /*0x100aef9bb*/
    a1[2] = v10; /*0x100aef9bf*/
    a1[3] = v11; /*0x100aef9c3*/
    *a1 = v8; /*0x100aef9c7*/
    if ( v7 ) /*0x100aef9cd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v7, 1); /*0x100aef9db*/
    v16 = v22[5]; /*0x100aef9e0*/
    if ( v22[5] ) /*0x100aef9ea*/
    {
      v17 = v22[6]; /*0x100aef9f0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100aefaac*/
    }
  }
  return result; /*0x100aefab1*/
}