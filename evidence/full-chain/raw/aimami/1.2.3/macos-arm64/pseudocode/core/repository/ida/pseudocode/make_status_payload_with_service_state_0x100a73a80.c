// __ZN13codexmate_lib4core10repository10Repository38make_status_payload_with_service_state @ 0x100a73a80 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h05def326631eb6ea(
        __int64 __dst,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  _DWORD *v6; // r14
  int v7; // r13d
  void *v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  char v11; // cl
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // r15
  char v16; // r12
  int v17; // ebx
  int v18; // r13d
  __int64 v19; // rcx
  _QWORD __dsta[44]; // [rsp+0h] [rbp-490h] BYREF
  _QWORD __src[44]; // [rsp+160h] [rbp-330h] BYREF
  _QWORD v23[22]; // [rsp+2C0h] [rbp-1D0h] BYREF
  _QWORD v24[3]; // [rsp+370h] [rbp-120h] BYREF
  _QWORD v25[3]; // [rsp+388h] [rbp-108h] BYREF
  _QWORD v26[3]; // [rsp+3A0h] [rbp-F0h] BYREF
  _QWORD v27[3]; // [rsp+3B8h] [rbp-D8h] BYREF
  _QWORD v28[3]; // [rsp+3D0h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+3E8h] [rbp-A8h]
  __int64 v30; // [rsp+3F0h] [rbp-A0h]
  __int64 v31; // [rsp+3F8h] [rbp-98h]
  __int64 v32; // [rsp+400h] [rbp-90h]
  unsigned __int64 v33; // [rsp+408h] [rbp-88h]
  __int64 v34; // [rsp+410h] [rbp-80h]
  __int64 v35; // [rsp+418h] [rbp-78h]
  __int64 v36; // [rsp+420h] [rbp-70h]
  __int64 v37; // [rsp+428h] [rbp-68h]
  __int64 v38; // [rsp+430h] [rbp-60h]
  int v39; // [rsp+43Ch] [rbp-54h]
  int v40; // [rsp+440h] [rbp-50h]
  int v41; // [rsp+444h] [rbp-4Ch]
  void *v42; // [rsp+448h] [rbp-48h]
  unsigned __int64 v43; // [rsp+450h] [rbp-40h]
  unsigned __int64 v44; // [rsp+458h] [rbp-38h]
  char v45; // [rsp+465h] [rbp-2Bh]
  char v46; // [rsp+466h] [rbp-2Ah]
  char v47; // [rsp+467h] [rbp-29h]

  v4 = a4; /*0x100a73a94*/
  v6 = (_DWORD *)__dst; /*0x100a73a99*/
  v45 = *(_BYTE *)(a3 + 744); /*0x100a73aa3*/
  v39 = *(_DWORD *)(a3 + 736); /*0x100a73aac*/
  v7 = *(_DWORD *)(a3 + 740); /*0x100a73aaf*/
  if ( (_BYTE)a4 == 4 ) /*0x100a73ab9*/
  {
    __dst = *(_QWORD *)(a2 + 632); /*0x100a73abb*/
    a2 = *(_QWORD *)(a2 + 640); /*0x100a73ac2*/
    v4 = codexmate_lib::platform::daemon::check_daemon_state::hcbc03433a17a641c(__dst, a2); /*0x100a73ace*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2); /*0x100a73ad0*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100a73adf*/
  if ( !v8 ) /*0x100a73ae7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100a73fba*/
  qmemcpy(v8, "dev.aimami.auto-switch", 22); /*0x100a73b16*/
  v42 = v8; /*0x100a73b28*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v28, a3 + 504); /*0x100a73b2c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v27, a3 + 528); /*0x100a73b40*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, a3 + 552); /*0x100a73b54*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v25, a3 + 576); /*0x100a73b68*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a3 + 600); /*0x100a73b7c*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dsta, a3 + 624); /*0x100a73b90*/
  v41 = v7; /*0x100a73b95*/
  v40 = v4; /*0x100a73b99*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 648); /*0x100a73bab*/
  v9 = 0x8000000000000000LL; /*0x100a73bb0*/
  v10 = *(_WORD *)(a3 + 672); /*0x100a73bba*/
  v11 = *(_BYTE *)(a3 + 674); /*0x100a73bc3*/
  v23[0] = v28[0]; /*0x100a73bda*/
  v23[1] = v28[1]; /*0x100a73be1*/
  v23[2] = v28[2]; /*0x100a73bef*/
  v23[3] = v27[0]; /*0x100a73c04*/
  v23[4] = v27[1]; /*0x100a73c0b*/
  v23[5] = v27[2]; /*0x100a73c19*/
  v23[6] = v26[0]; /*0x100a73c2e*/
  v23[7] = v26[1]; /*0x100a73c35*/
  v23[8] = v26[2]; /*0x100a73c43*/
  v23[11] = v25[2]; /*0x100a73c51*/
  v23[10] = v25[1]; /*0x100a73c66*/
  v23[9] = v25[0]; /*0x100a73c6d*/
  v23[12] = v24[0]; /*0x100a73c82*/
  v23[13] = v24[1]; /*0x100a73c89*/
  v23[14] = v24[2]; /*0x100a73c97*/
  v23[15] = __dsta[0]; /*0x100a73cac*/
  v23[16] = __dsta[1]; /*0x100a73cb3*/
  v23[17] = __dsta[2]; /*0x100a73cc1*/
  v23[20] = __src[2]; /*0x100a73ccf*/
  v23[19] = __src[1]; /*0x100a73ce4*/
  v23[18] = __src[0]; /*0x100a73ceb*/
  LOWORD(v23[21]) = v10; /*0x100a73cf2*/
  BYTE2(v23[21]) = v11; /*0x100a73cf9*/
  v12 = *(_QWORD *)(a3 + 824); /*0x100a73cff*/
  v31 = *(_QWORD *)(a3 + 152); /*0x100a73d0f*/
  if ( v31 == 2 ) /*0x100a73d1a*/
  {
    v36 = *(_QWORD *)(a3 + 1056); /*0x100a73d24*/
    __dsta[0] = 2; /*0x100a73d28*/
    v43 = 0x8000000000000000LL; /*0x100a73d33*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 336); /*0x100a73d48*/
    v43 = __src[0]; /*0x100a73d5c*/
    v37 = __src[1]; /*0x100a73d67*/
    v34 = __src[2]; /*0x100a73d72*/
    v36 = *(_QWORD *)(a3 + 1056); /*0x100a73d7e*/
    _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a73d89*/
      __src,
      a3 + 152,
      v13,
      v14);
    memcpy(__dsta, __src, sizeof(__dsta)); /*0x100a73da1*/
  }
  v15 = *(_BYTE *)(a3 + 490); /*0x100a73da6*/
  v46 = *(_BYTE *)(a3 + 136); /*0x100a73db8*/
  if ( *(_QWORD *)(a3 + 112) == 0x8000000000000000LL ) /*0x100a73dc0*/
  {
    v44 = 0x8000000000000000LL; /*0x100a73dc2*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 112); /*0x100a73dd4*/
    v44 = __src[0]; /*0x100a73de0*/
    v38 = __src[1]; /*0x100a73deb*/
    v35 = __src[2]; /*0x100a73df6*/
  }
  v32 = v12; /*0x100a73dfa*/
  v47 = *(_BYTE *)(a3 + 1064); /*0x100a73e0a*/
  if ( *(_QWORD *)(a3 + 912) != 0x8000000000000000LL ) /*0x100a73e15*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 912); /*0x100a73e28*/
    v9 = __src[0]; /*0x100a73e2d*/
    v29 = __src[1]; /*0x100a73e3b*/
    v30 = __src[2]; /*0x100a73e49*/
  }
  v33 = v9; /*0x100a73e50*/
  v16 = v45 & 1; /*0x100a73e5e*/
  v17 = v39; /*0x100a73e69*/
  if ( v45 == 2 ) /*0x100a73e6c*/
    v17 = 15; /*0x100a73e6c*/
  v18 = v41; /*0x100a73e74*/
  if ( v45 == 2 ) /*0x100a73e78*/
    v18 = 10; /*0x100a73e78*/
  if ( (_DWORD)v31 == 2 ) /*0x100a73e89*/
    v15 = 0; /*0x100a73e89*/
  memcpy(v6 + 88, v23, 0xB0u); /*0x100a73ea0*/
  v6[166] = v32; /*0x100a73eac*/
  *((_QWORD *)v6 + 71) = v43; /*0x100a73eb7*/
  *((_QWORD *)v6 + 72) = v37; /*0x100a73ec2*/
  *((_QWORD *)v6 + 73) = v34; /*0x100a73ecd*/
  *((_QWORD *)v6 + 82) = v36; /*0x100a73ed8*/
  memcpy(v6, __dsta, 0x160u); /*0x100a73eee*/
  *((_BYTE *)v6 + 668) = v15; /*0x100a73ef3*/
  *((_QWORD *)v6 + 66) = 22; /*0x100a73efa*/
  *((_QWORD *)v6 + 67) = v42; /*0x100a73f09*/
  *((_QWORD *)v6 + 68) = 22; /*0x100a73f10*/
  v6[138] = v17; /*0x100a73f1b*/
  v6[139] = v18; /*0x100a73f22*/
  *((_BYTE *)v6 + 560) = v16; /*0x100a73f29*/
  *((_BYTE *)v6 + 561) = v40; /*0x100a73f33*/
  *((_QWORD *)v6 + 74) = v44; /*0x100a73f3e*/
  *((_QWORD *)v6 + 75) = v38; /*0x100a73f49*/
  *((_QWORD *)v6 + 76) = v35; /*0x100a73f54*/
  *((_BYTE *)v6 + 616) = v46; /*0x100a73f5f*/
  *((_QWORD *)v6 + 78) = v33; /*0x100a73f6d*/
  v19 = v30; /*0x100a73f7b*/
  *((_QWORD *)v6 + 79) = v29; /*0x100a73f82*/
  *((_QWORD *)v6 + 80) = v19; /*0x100a73f89*/
  *((_BYTE *)v6 + 648) = v47; /*0x100a73f94*/
  return v6; /*0x100a73f9e*/
}