// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_created 0x1003768a0 d=2
size_t *__fastcall serde_json::map::Map$LT$alloc..string..String$C$serde_json..value..Value$GT$::entry::h23f83060cf843b6c(
        size_t *a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  size_t v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  const void *v7; // rbx
  __int64 v8; // rax
  const void *v9; // r12
  size_t v10; // rdx
  size_t v11; // rdi
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r15
  size_t v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  char v18; // cl
  size_t v19; // rdx
  __int64 v21; // [rsp+8h] [rbp-58h]
  __int64 v23; // [rsp+18h] [rbp-48h]
  size_t v24; // [rsp+20h] [rbp-40h]
  size_t __n; // [rsp+28h] [rbp-38h]
  size_t v26; // [rsp+30h] [rbp-30h]

  v4 = a4; /*0x1003768b1*/
  if ( a4 < 0 ) /*0x1003768b7*/
  {
    v5 = 0; /*0x1003768b9*/
    goto LABEL_3; /*0x1003768b9*/
  }
  v6 = a2; /*0x1003768c7*/
  if ( a4 ) /*0x1003768ce*/
  {
    v7 = a3; /*0x1003768d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003768d6*/
    v5 = 1; /*0x1003768db*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x1003768e9*/
    if ( !v8 ) /*0x1003768f1*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1003768bc*/
    a3 = v7; /*0x1003768f3*/
    v6 = a2; /*0x1003768f6*/
  }
  else
  {
    v8 = 1; /*0x1003768fb*/
  }
  v9 = (const void *)v8; /*0x100376900*/
  memcpy((void *)v8, a3, v4); /*0x10037690c*/
  v10 = *(_QWORD *)v6; /*0x100376911*/
  v23 = v6; /*0x100376917*/
  if ( *(_QWORD *)v6 ) /*0x100376911*/
  {
    __n = v4; /*0x100376921*/
    v26 = *(_QWORD *)(v6 + 8); /*0x100376929*/
    v11 = (size_t)v9; /*0x10037692d*/
LABEL_10:
    v12 = v10 + 360; /*0x100376930*/
    v24 = v10; /*0x100376937*/
    v21 = *(unsigned __int16 *)(v10 + 626); /*0x100376942*/
    v13 = 3LL * (unsigned int)(8 * v21); /*0x10037694d*/
    v6 = -1; /*0x100376951*/
    do /*0x1003769aa*/
    {
      if ( !v13 ) /*0x100376963*/
      {
        v6 = v21; /*0x1003769c0*/
LABEL_20:
        v4 = __n; /*0x1003769c4*/
        v19 = v24; /*0x1003769c8*/
        if ( !v26 ) /*0x1003769d4*/
          goto LABEL_26; /*0x1003769d4*/
        --v26; /*0x1003769d6*/
        v10 = *(_QWORD *)(v24 + 8 * v6 + 632); /*0x1003769da*/
        goto LABEL_10; /*0x1003769e2*/
      }
      v14 = v12 + 24; /*0x100376965*/
      v15 = *(_QWORD *)(v12 + 16); /*0x10037696d*/
      v16 = __n - v15; /*0x100376978*/
      if ( __n < v15 ) /*0x10037697b*/
        v15 = __n; /*0x10037697b*/
      v17 = memcmp(v9, *(const void **)(v12 + 8), v15); /*0x100376982*/
      v11 = (size_t)v9; /*0x100376987*/
      if ( v17 ) /*0x10037698e*/
        v16 = v17; /*0x10037698e*/
      v18 = (v16 > 0) - (v16 < 0); /*0x10037699b*/
      ++v6; /*0x10037699d*/
      v13 -= 24; /*0x1003769a0*/
      v12 = v14; /*0x1003769a4*/
    }
    while ( v18 == 1 ); /*0x1003769aa*/
    if ( v18 ) /*0x1003769b1*/
      goto LABEL_20; /*0x1003769b1*/
    if ( __n ) /*0x1003769f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003769fd*/
    a1[1] = v24; /*0x100376a06*/
    a1[2] = v26; /*0x100376a0a*/
    a1[3] = v6; /*0x100376a0e*/
    a1[4] = v23; /*0x100376a16*/
    *a1 = 0x8000000000000000LL; /*0x100376a24*/
    return a1; /*0x100376a02*/
  }
  else
  {
    v19 = 0; /*0x100376a29*/
    v11 = (size_t)v9; /*0x100376a2b*/
LABEL_26:
    *a1 = v4; /*0x100376a2e*/
    a1[1] = v11; /*0x100376a35*/
    a1[2] = v4; /*0x100376a39*/
    a1[3] = v23; /*0x100376a41*/
    a1[4] = v19; /*0x100376a45*/
    a1[5] = 0; /*0x100376a49*/
    a1[6] = v6; /*0x100376a51*/
    return a1; /*0x100376a2e*/
  }
}