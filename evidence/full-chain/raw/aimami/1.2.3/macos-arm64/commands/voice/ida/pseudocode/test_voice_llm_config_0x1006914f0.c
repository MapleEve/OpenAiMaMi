// __ZN13codexmate_lib8commands5voice21test_voice_llm_config @ 0x1006914f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::test_voice_llm_config::h496f86901bbb45f4(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        double a6,
        double a7)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  void *v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  void *v21; // rax
  _QWORD v22[13]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v23[3]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]

  v26 = a2[2]; /*0x100691509*/
  v8 = *a2; /*0x10069150d*/
  v9 = a2[1]; /*0x100691510*/
  v25 = v9; /*0x100691514*/
  v24 = v8; /*0x100691518*/
  v29 = a3[2]; /*0x100691520*/
  v10 = *a3; /*0x100691524*/
  v28 = a3[1]; /*0x10069152b*/
  v27 = v10; /*0x10069152f*/
  v11 = a4[1]; /*0x100691536*/
  v30 = *a4; /*0x10069153a*/
  v31 = v11; /*0x10069153e*/
  v32 = a4[2]; /*0x100691546*/
  v35 = a5[2]; /*0x10069154e*/
  v12 = *a5; /*0x100691552*/
  v34 = a5[1]; /*0x100691559*/
  v33 = v12; /*0x10069155d*/
  if ( !(unsigned __int8)codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(&v24) ) /*0x10069156c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v24, v9); /*0x1006915ba*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1006915c9*/
    if ( !v16 ) /*0x1006915d1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100691775*/
    qmemcpy(v16, "LLM config is incomplete", 24); /*0x1006915fd*/
    a1[1] = 24; /*0x100691600*/
    a1[2] = v16; /*0x100691608*/
    a1[3] = 24; /*0x10069160c*/
    goto LABEL_6; /*0x10069160c*/
  }
  codexmate_lib::core::voice::llm::call_llm::h6022ef50e8dbad9a(v22, &v24, &unk_101604682, 0x12u, a6, a7); /*0x100691585*/
  v13 = v22[1]; /*0x10069158a*/
  v14 = v22[2]; /*0x100691591*/
  v15 = v22[3]; /*0x100691598*/
  if ( LODWORD(v22[0]) == 1 ) /*0x1006915a6*/
  {
    a1[1] = v22[1]; /*0x1006915ac*/
    a1[2] = v14; /*0x1006915b0*/
    a1[3] = v15; /*0x1006915b4*/
LABEL_6:
    *a1 = 0x8000000000000000LL; /*0x100691614*/
    goto LABEL_7; /*0x10069161e*/
  }
  v18 = v22[2]; /*0x100691690*/
  v19 = v22[3]; /*0x100691693*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v22[2], v22[3]); /*0x100691696*/
  if ( v20 ) /*0x10069169e*/
  {
    v23[0] = v13; /*0x1006916a0*/
    v23[1] = v14; /*0x1006916a7*/
    v23[2] = v15; /*0x1006916ae*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72((__int64)v22, v23); /*0x1006916c3*/
    qmemcpy(a1, v22, 0x68u); /*0x1006916d7*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v19); /*0x1006916df*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1006916ee*/
    if ( !v21 ) /*0x1006916f6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100691786*/
    qmemcpy(v21, "LLM returned empty response", 27); /*0x100691722*/
    a1[1] = 27; /*0x10069172c*/
    a1[2] = v21; /*0x100691734*/
    a1[3] = 27; /*0x100691738*/
    *a1 = 0x8000000000000000LL; /*0x10069174a*/
    if ( v13 ) /*0x100691750*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100691761*/
  }
LABEL_7:
  if ( v24 ) /*0x100691628*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x100691633*/
  if ( v27 ) /*0x10069163f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x10069164a*/
  if ( v30 ) /*0x100691656*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1); /*0x100691661*/
  if ( v33 ) /*0x10069166d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100691678*/
  return a1; /*0x100691680*/
}