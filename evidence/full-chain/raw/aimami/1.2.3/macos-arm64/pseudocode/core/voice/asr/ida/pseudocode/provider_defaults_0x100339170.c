// __ZN13codexmate_lib4core5voice3asr17provider_defaults @ 0x100339170 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::asr::provider_defaults::h00df75381d488375(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  void *v4; // rax
  __int64 v5; // r14
  void *v6; // rax
  __int64 v7; // r13
  void *v8; // rax
  __int64 v9; // r12
  __int128 v10; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rcx
  void *v13; // rax
  void *v14; // rax
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+8h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-40h]
  __int64 v22; // [rsp+18h] [rbp-38h]
  void *v23; // [rsp+20h] [rbp-30h]

  codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(&v19, a2, a3); /*0x100339188*/
  v22 = v20; /*0x100339199*/
  if ( v21 != 6 ) /*0x10033919d*/
  {
    if ( v21 == 12 && !(*(_QWORD *)v20 ^ 0x75466E7579696C61LL | *(unsigned int *)(v20 + 8) ^ 0x7273416ELL) ) /*0x1003391c9*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v19, a2); /*0x1003391d2*/
      v3 = 12; /*0x1003391d7*/
      v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1003391e7*/
      if ( v4 ) /*0x1003391ef*/
      {
        v5 = (__int64)v4; /*0x1003391f5*/
        qmemcpy(v4, "aliyunFunAsr", 12); /*0x1003391f8*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x100339202*/
        v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100339211*/
        if ( !v6 ) /*0x100339219*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x1003394ef*/
        v23 = v6; /*0x100339237*/
        qmemcpy(v6, "fun-asr-realtime", 16); /*0x10033923b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(16, 1); /*0x10033923e*/
        v7 = 49; /*0x100339243*/
        v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x100339253*/
        if ( !v8 ) /*0x10033925b*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x100339511*/
        v9 = (__int64)v8; /*0x100339261*/
        qmemcpy(v8, "wss://dashscope.aliyuncs.com/api-ws/v1/inference/", 49); /*0x1003392b9*/
        v10 = xmmword_1015E3620; /*0x1003392c3*/
        v11 = 16; /*0x1003392ca*/
        v12 = 12; /*0x1003392cf*/
        v13 = v23; /*0x1003392d4*/
        goto LABEL_12; /*0x1003392d8*/
      }
LABEL_19:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x1003394c5*/
    }
    goto LABEL_9; /*0x1003391cc*/
  }
  if ( *(_DWORD *)v20 ^ 0x6E65706F | *(unsigned __int16 *)(v20 + 4) ^ 0x6961 ) /*0x1003392f1*/
  {
LABEL_9:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v19, a2); /*0x1003392f9*/
    v3 = 11; /*0x1003392fe*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10033930e*/
    if ( !v14 ) /*0x100339316*/
      goto LABEL_19; /*0x100339316*/
    v5 = (__int64)v14; /*0x10033931c*/
    qmemcpy(v14, "appleSpeech", 11); /*0x100339329*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1); /*0x100339334*/
    v11 = 12; /*0x100339339*/
    v9 = 1; /*0x10033933e*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x10033934e*/
    if ( !v13 ) /*0x100339356*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1003394de*/
    qmemcpy(v13, "Apple Speech", 12); /*0x100339366*/
    v10 = 0xCu; /*0x100339370*/
    v12 = 11; /*0x100339378*/
    v7 = 0; /*0x10033937d*/
    goto LABEL_12; /*0x10033937d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v19, a2); /*0x1003393e1*/
  v3 = 6; /*0x1003393e6*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1003393f6*/
  if ( !v16 ) /*0x1003393fe*/
    goto LABEL_19; /*0x1003393fe*/
  v5 = v16; /*0x100339404*/
  *(_WORD *)(v16 + 4) = 26977; /*0x100339407*/
  *(_DWORD *)v16 = 1852141679; /*0x10033940d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100339413*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x100339422*/
  if ( !v17 ) /*0x10033942a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100339500*/
  qmemcpy(v17, "gpt-4o-transcribe", 17); /*0x100339448*/
  v23 = v17; /*0x10033944b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x100339453*/
  v7 = 25; /*0x100339458*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x100339468*/
  if ( !v18 ) /*0x100339470*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x100339522*/
  v9 = (__int64)v18; /*0x100339476*/
  qmemcpy(v18, "https://api.openai.com/v1", 25); /*0x1003394a1*/
  v10 = xmmword_1015E3610; /*0x1003394ab*/
  v11 = 17; /*0x1003394b2*/
  v12 = 6; /*0x1003394b7*/
  v13 = v23; /*0x1003394bc*/
LABEL_12:
  *(_QWORD *)a1 = v12; /*0x100339380*/
  *(_QWORD *)(a1 + 8) = v5; /*0x100339383*/
  *(_QWORD *)(a1 + 16) = v12; /*0x100339387*/
  *(_QWORD *)(a1 + 24) = 0; /*0x10033938b*/
  *(_QWORD *)(a1 + 32) = 1; /*0x100339393*/
  *(_QWORD *)(a1 + 40) = 0; /*0x10033939b*/
  *(_QWORD *)(a1 + 48) = v11; /*0x1003393a3*/
  *(_QWORD *)(a1 + 56) = v13; /*0x1003393a7*/
  *(_OWORD *)(a1 + 64) = v10; /*0x1003393ab*/
  *(_QWORD *)(a1 + 80) = v9; /*0x1003393b0*/
  *(_QWORD *)(a1 + 88) = v7; /*0x1003393b4*/
  if ( v19 ) /*0x1003393bf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v19, 1); /*0x1003393ca*/
  return a1; /*0x1003393d2*/
}