// __ZN13codexmate_lib4core5relay5quota11unsupported @ 0x1008ac2d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::unsupported::hd29da747289b020c(__int64 a1, __int64 a2)
{
  void *v2; // rax
  void *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r15
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-40h] BYREF
  _DWORD v13[9]; // [rsp+1Ch] [rbp-24h] BYREF

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v12, a2); /*0x1008ac2e4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, a2); /*0x1008ac2e9*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1008ac2f8*/
  if ( !v2 ) /*0x1008ac300*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x1008ac4a7*/
  v3 = v2; /*0x1008ac306*/
  qmemcpy(v2, "unsupported", 11); /*0x1008ac313*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1); /*0x1008ac31d*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1); /*0x1008ac32c*/
  if ( !v4 ) /*0x1008ac334*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 50); /*0x1008ac4b8*/
  v5 = v4; /*0x1008ac33a*/
  *(_QWORD *)(v4 + 40) = 0xE5A58EE69DA2E999LL; /*0x1008ac347*/
  *(_QWORD *)(v4 + 32) = 0xBDE4B996E698AEE5LL; /*0x1008ac355*/
  qmemcpy((void *)(v4 + 16), "API / Sub2API / ", 16); /*0x1008ac371*/
  *(_QWORD *)(v4 + 8) = 0x77654E20B088E58BLL; /*0x1008ac37f*/
  *(_QWORD *)v4 = 0xB5E680A3E6AA9CE6LL; /*0x1008ac38d*/
  *(_WORD *)(v4 + 48) = -23665; /*0x1008ac390*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v13); /*0x1008ac39b*/
  v6 = (v13[0] >> 13) - 1; /*0x1008ac3a8*/
  v7 = 0; /*0x1008ac3ab*/
  if ( v13[0] >> 13 <= 0 ) /*0x1008ac3af*/
  {
    v8 = (1 - (v13[0] >> 13)) / 0x190u + 1; /*0x1008ac3c3*/
    v6 += 400 * v8; /*0x1008ac3cb*/
    v7 = -146097 * v8; /*0x1008ac3cd*/
  }
  v9 = 1000 /*0x1008ac42f*/
     * (v13[1] + 86400LL * (((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((v13[0] >> 4) & 0x1FF) - v6 / 100 - 719163))
     + v13[2] / 0xF4240uLL;
  *(_QWORD *)(a1 + 16) = v12[2]; /*0x1008ac436*/
  v10 = v12[0]; /*0x1008ac43a*/
  *(_QWORD *)(a1 + 8) = v12[1]; /*0x1008ac442*/
  *(_QWORD *)a1 = v10; /*0x1008ac446*/
  *(_QWORD *)(a1 + 24) = 11; /*0x1008ac449*/
  *(_QWORD *)(a1 + 32) = v3; /*0x1008ac451*/
  *(_QWORD *)(a1 + 40) = 11; /*0x1008ac455*/
  *(_BYTE *)(a1 + 128) = 1; /*0x1008ac45d*/
  *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x1008ac46f*/
  *(_QWORD *)(a1 + 48) = 50; /*0x1008ac473*/
  *(_QWORD *)(a1 + 56) = v5; /*0x1008ac47b*/
  *(_QWORD *)(a1 + 64) = 50; /*0x1008ac47f*/
  *(_QWORD *)(a1 + 120) = v9; /*0x1008ac487*/
  *(_QWORD *)(a1 + 96) = 0x8000000000000000LL; /*0x1008ac48b*/
  return a1; /*0x1008ac492*/
}