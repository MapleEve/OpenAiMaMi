// __ZN13codexmate_lib4core5relay7breaker9new_store @ 0x100915110 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::breaker::new_store::h503f38586f412c42(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  void *result; // rax
  _QWORD v9[10]; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v10[23]; // [rsp+51h] [rbp-2Fh]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100915120*/
  v5 = v2; /*0x100915122*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x100915129*/
  {
    v6 = *(_QWORD *)v2; /*0x10091512f*/
    v7 = *(_QWORD *)(v5 + 8); /*0x100915132*/
  }
  else
  {
    v6 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1009151e0*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v3,
           v4);
    *(_QWORD *)v5 = v6; /*0x1009151e5*/
    *(_QWORD *)(v5 + 8) = v7; /*0x1009151e8*/
    *(_BYTE *)(v5 + 16) = 1; /*0x1009151ec*/
  }
  *(_QWORD *)v5 = v6 + 1; /*0x10091513a*/
  v12 = 0; /*0x100915144*/
  v11 = 0; /*0x10091514f*/
  *(_QWORD *)&v10[15] = 0; /*0x10091515a*/
  *(_QWORD *)&v10[7] = anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x100915165*/
  v9[0] = 1; /*0x100915169*/
  v9[1] = 1; /*0x100915171*/
  v9[2] = 0; /*0x100915179*/
  LOBYTE(v9[3]) = 0; /*0x100915181*/
  *(_OWORD *)((char *)&v9[3] + 1) = *(_OWORD *)v10; /*0x100915189*/
  *(_QWORD *)((char *)&v9[5] + 1) = 0; /*0x10091519d*/
  *(_QWORD *)((char *)&v9[6] + 1) = 0; /*0x1009151a1*/
  v9[7] = 0; /*0x1009151a5*/
  v9[8] = v6; /*0x1009151a9*/
  v9[9] = v7; /*0x1009151ad*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1009151b1*/
    &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
    0);
  result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8); /*0x1009151c0*/
  if ( !result ) /*0x1009151c8*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80); /*0x1009151ff*/
  qmemcpy(result, v9, 0x50u); /*0x1009151d6*/
  return result; /*0x1009151d9*/
}