// __ZN13codexmate_lib4core5relay5quota17unsupported_known @ 0x1008acf20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::unsupported_known::h92d5f78f93820493(
        __int64 a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        const void *a5,
        size_t a6)
{
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  const void *v14; // rsi
  size_t v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD v25[3]; // [rsp+0h] [rbp-60h] BYREF
  _DWORD v26[3]; // [rsp+1Ch] [rbp-44h] BYREF
  size_t __n; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, a2); /*0x1008acf44*/
  if ( a4 < 0 ) /*0x1008acf4c*/
  {
    v11 = 0; /*0x1008acf4e*/
    goto LABEL_3; /*0x1008acf4e*/
  }
  __n = a6; /*0x1008acf5e*/
  if ( a4 ) /*0x1008acf62*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, a2); /*0x1008acf64*/
    v11 = 1; /*0x1008acf69*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1008acf77*/
    if ( !v12 ) /*0x1008acf7f*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, a4); /*0x1008acf51*/
    v13 = v12; /*0x1008acf81*/
  }
  else
  {
    v13 = 1; /*0x1008acf86*/
  }
  v28 = v13; /*0x1008acf8b*/
  v14 = a3; /*0x1008acf8f*/
  memcpy((void *)v13, a3, a4); /*0x1008acf95*/
  v15 = __n; /*0x1008acf9a*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008acfa1*/
  {
    v16 = 0; /*0x1008acfa3*/
    goto LABEL_10; /*0x1008acfa3*/
  }
  if ( __n ) /*0x1008acfb3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x1008acfb5*/
    v16 = 1; /*0x1008acfba*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1008acfc8*/
    if ( !v17 ) /*0x1008acfd0*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x1008acfa6*/
    v18 = v17; /*0x1008acfd2*/
  }
  else
  {
    v18 = 1; /*0x1008acfd7*/
  }
  memcpy((void *)v18, a5, v15); /*0x1008acfe6*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v26); /*0x1008acfef*/
  v19 = (v26[0] >> 13) - 1; /*0x1008acffc*/
  v20 = 0; /*0x1008acfff*/
  if ( v26[0] >> 13 <= 0 ) /*0x1008ad003*/
  {
    v21 = (1 - (v26[0] >> 13)) / 0x190u + 1; /*0x1008ad017*/
    v19 += 400 * v21; /*0x1008ad01f*/
    v20 = -146097 * v21; /*0x1008ad021*/
  }
  v22 = 1000 /*0x1008ad083*/
      * (v26[1]
       + 86400LL * (((v19 / 100) >> 2) + ((1461 * v19) >> 2) + v20 + ((v26[0] >> 4) & 0x1FF) - v19 / 100 - 719163))
      + v26[2] / 0xF4240uLL;
  *(_QWORD *)(a1 + 16) = v25[2]; /*0x1008ad08a*/
  v23 = v25[0]; /*0x1008ad08f*/
  *(_QWORD *)(a1 + 8) = v25[1]; /*0x1008ad097*/
  *(_QWORD *)a1 = v23; /*0x1008ad09c*/
  *(_QWORD *)(a1 + 24) = a4; /*0x1008ad0a0*/
  *(_QWORD *)(a1 + 32) = v28; /*0x1008ad0a9*/
  *(_QWORD *)(a1 + 40) = a4; /*0x1008ad0ae*/
  *(_BYTE *)(a1 + 128) = 1; /*0x1008ad0b3*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x1008ad0c6*/
  *(_QWORD *)(a1 + 48) = v15; /*0x1008ad0cb*/
  *(_QWORD *)(a1 + 56) = v18; /*0x1008ad0d0*/
  *(_QWORD *)(a1 + 64) = v15; /*0x1008ad0d5*/
  *(_QWORD *)(a1 + 120) = v22; /*0x1008ad0da*/
  *(_QWORD *)(a1 + 96) = 0x8000000000000000LL; /*0x1008ad0df*/
  return a1; /*0x1008ad0e7*/
}