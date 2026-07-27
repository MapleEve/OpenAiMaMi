// __ZN13codexmate_lib4core5relay5quota6failed @ 0x1008ae810 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
        __int64 a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        const void *a5,
        size_t a6,
        void *__src,
        signed __int64 a8)
{
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  const void *v16; // rsi
  size_t v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  const void *v20; // rsi
  size_t v21; // r8
  unsigned int v22; // r15d
  int v23; // edx
  int v24; // r13d
  bool v25; // zf
  __int64 v26; // r14
  unsigned int v27; // eax
  __int64 v28; // r10
  unsigned int v29; // r9d
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // r13
  size_t v33; // r15
  __int64 v34; // rcx
  size_t v35; // rax
  _QWORD v37[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v38; // [rsp+20h] [rbp-60h]
  int v39; // [rsp+2Ch] [rbp-54h] BYREF
  unsigned int v40; // [rsp+30h] [rbp-50h]
  unsigned int v41; // [rsp+34h] [rbp-4Ch]
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  int v44; // [rsp+48h] [rbp-38h]
  unsigned int v45; // [rsp+4Ch] [rbp-34h]
  size_t __n; // [rsp+50h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v37, a2); /*0x1008ae834*/
  if ( a4 < 0 ) /*0x1008ae83c*/
  {
    v13 = 0; /*0x1008ae83e*/
    goto LABEL_3; /*0x1008ae83e*/
  }
  __n = a6; /*0x1008ae851*/
  if ( a4 ) /*0x1008ae855*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, a2); /*0x1008ae857*/
    v13 = 1; /*0x1008ae85c*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1008ae86a*/
    if ( !v14 ) /*0x1008ae872*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, a4); /*0x1008ae841*/
    v15 = v14; /*0x1008ae874*/
  }
  else
  {
    v15 = 1; /*0x1008ae879*/
  }
  v42 = v15; /*0x1008ae87e*/
  v16 = a3; /*0x1008ae882*/
  memcpy((void *)v15, a3, a4); /*0x1008ae888*/
  v17 = __n; /*0x1008ae88d*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008ae894*/
  {
    v18 = 0; /*0x1008ae896*/
    goto LABEL_10; /*0x1008ae896*/
  }
  if ( __n ) /*0x1008ae8a6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16); /*0x1008ae8a8*/
    v18 = 1; /*0x1008ae8ad*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x1008ae8bb*/
    if ( !v19 ) /*0x1008ae8c3*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x1008ae899*/
  }
  else
  {
    v19 = 1; /*0x1008ae8c7*/
  }
  v43 = v19; /*0x1008ae8cc*/
  v20 = a5; /*0x1008ae8d3*/
  memcpy((void *)v19, a5, v17); /*0x1008ae8d9*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v39); /*0x1008ae8e2*/
  v21 = a8; /*0x1008ae8e7*/
  v22 = v39; /*0x1008ae8eb*/
  v23 = (v39 >> 13) - 1; /*0x1008ae8f5*/
  v24 = 0; /*0x1008ae8f8*/
  if ( v39 >> 13 <= 0 ) /*0x1008ae8fd*/
  {
    v27 = (1 - (v39 >> 13)) / 0x190u + 1; /*0x1008ae926*/
    v23 += 400 * v27; /*0x1008ae92e*/
    v24 = -146097 * v27; /*0x1008ae930*/
    v25 = a8 == 0; /*0x1008ae937*/
    if ( a8 < 0 ) /*0x1008ae93a*/
      goto LABEL_17; /*0x1008ae93a*/
  }
  else
  {
    v25 = a8 == 0; /*0x1008ae8ff*/
    if ( a8 < 0 ) /*0x1008ae902*/
    {
LABEL_17:
      v26 = 0; /*0x1008ae904*/
      goto LABEL_18; /*0x1008ae904*/
    }
  }
  v28 = v40; /*0x1008ae93c*/
  v29 = v41; /*0x1008ae940*/
  if ( v25 ) /*0x1008ae944*/
  {
    v30 = 1; /*0x1008ae980*/
  }
  else
  {
    v38 = v40; /*0x1008ae946*/
    v45 = v41; /*0x1008ae94a*/
    v44 = v23; /*0x1008ae94e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, v20); /*0x1008ae951*/
    v26 = 1; /*0x1008ae956*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a8, 1); /*0x1008ae965*/
    v21 = a8; /*0x1008ae96a*/
    if ( !v30 ) /*0x1008ae971*/
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v21); /*0x1008ae907*/
    v23 = v44; /*0x1008ae973*/
    v29 = v45; /*0x1008ae976*/
    v28 = v38; /*0x1008ae97a*/
  }
  v31 = 1000 /*0x1008ae9ea*/
      * (v28
       + 86400LL * (int)(((v23 / 100) >> 2) + ((1461 * v23) >> 2) + v24 + ((v22 >> 4) & 0x1FF) - v23 / 100 - 719163))
      + v29 / 0xF4240uLL;
  v32 = v30; /*0x1008ae9ed*/
  v33 = v21; /*0x1008ae9f6*/
  memcpy((void *)v30, __src, v21); /*0x1008ae9f9*/
  v34 = v37[1]; /*0x1008aea02*/
  *(_QWORD *)a1 = v37[0]; /*0x1008aea06*/
  *(_QWORD *)(a1 + 8) = v34; /*0x1008aea0a*/
  *(_QWORD *)(a1 + 16) = v37[2]; /*0x1008aea13*/
  *(_QWORD *)(a1 + 24) = a4; /*0x1008aea18*/
  *(_QWORD *)(a1 + 32) = v42; /*0x1008aea21*/
  *(_QWORD *)(a1 + 40) = a4; /*0x1008aea26*/
  *(_BYTE *)(a1 + 128) = 2; /*0x1008aea2b*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x1008aea3e*/
  v35 = __n; /*0x1008aea43*/
  *(_QWORD *)(a1 + 48) = __n; /*0x1008aea47*/
  *(_QWORD *)(a1 + 56) = v43; /*0x1008aea50*/
  *(_QWORD *)(a1 + 64) = v35; /*0x1008aea55*/
  *(_QWORD *)(a1 + 120) = v31; /*0x1008aea5a*/
  *(_QWORD *)(a1 + 96) = v33; /*0x1008aea5f*/
  *(_QWORD *)(a1 + 104) = v32; /*0x1008aea64*/
  *(_QWORD *)(a1 + 112) = v33; /*0x1008aea69*/
  return a1; /*0x1008aea71*/
}