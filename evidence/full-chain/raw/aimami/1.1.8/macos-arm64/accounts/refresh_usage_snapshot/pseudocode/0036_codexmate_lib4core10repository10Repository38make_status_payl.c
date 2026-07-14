// mac 1.1.8 refresh_usage_snapshot node va=0x100535b40 depth=2
// codexmate_lib4core10repository10Repository38make_status_payload_with_service_state
_DWORD *__fastcall codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h18db59bf6472a78a(
        _DWORD *__dst,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v4; // ebx
  int v6; // r12d
  int v7; // r15d
  void *v8; // rax
  size_t v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // bl
  char v13; // r13
  int v14; // r15d
  int v15; // r12d
  size_t v16; // rcx
  _QWORD __dsta[42]; // [rsp+0h] [rbp-3F0h] BYREF
  _BYTE v19[176]; // [rsp+150h] [rbp-2A0h] BYREF
  size_t __src[42]; // [rsp+200h] [rbp-1F0h] BYREF
  size_t v21; // [rsp+350h] [rbp-A0h]
  size_t v22; // [rsp+358h] [rbp-98h]
  __int64 v23; // [rsp+360h] [rbp-90h]
  __int64 v24; // [rsp+368h] [rbp-88h]
  size_t v25; // [rsp+370h] [rbp-80h]
  size_t v26; // [rsp+378h] [rbp-78h]
  size_t v27; // [rsp+380h] [rbp-70h]
  __int64 v28; // [rsp+388h] [rbp-68h]
  size_t v29; // [rsp+390h] [rbp-60h]
  size_t v30; // [rsp+398h] [rbp-58h]
  int v31; // [rsp+3A0h] [rbp-50h]
  int v32; // [rsp+3A4h] [rbp-4Ch]
  void *v33; // [rsp+3A8h] [rbp-48h]
  size_t v34; // [rsp+3B0h] [rbp-40h]
  size_t v35; // [rsp+3B8h] [rbp-38h]
  char v36; // [rsp+3C5h] [rbp-2Bh]
  char v37; // [rsp+3C6h] [rbp-2Ah]
  char v38; // [rsp+3C7h] [rbp-29h]

  v4 = a4; /*0x100535b54*/
  v36 = *(_BYTE *)(a3 + 728); /*0x100535b63*/
  v6 = *(_DWORD *)(a3 + 720); /*0x100535b66*/
  v7 = *(_DWORD *)(a3 + 724); /*0x100535b6d*/
  if ( (_BYTE)a4 == 4 ) /*0x100535b77*/
    v4 = codexmate_lib::platform::daemon::check_daemon_state::h0fbeb3d43845c30f( /*0x100535b8c*/
           *(_QWORD *)(a2 + 632),
           *(_QWORD *)(a2 + 640));
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100535b8e*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x16u, 1u); /*0x100535b9d*/
  if ( !v8 ) /*0x100535ba5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100535eaf*/
  v31 = v7; /*0x100535bab*/
  v33 = v8; /*0x100535bd5*/
  qmemcpy(v8, "dev.aimami.auto-switch", 22); /*0x100535bd9*/
  _$LT$codexmate_lib..core..models..AppPathState$u20$as$u20$core..clone..Clone$GT$::clone::hdafaaf8402976f61( /*0x100535bea*/
    v19,
    a3 + 488);
  v9 = 0x8000000000000000LL; /*0x100535bef*/
  v23 = *(_QWORD *)(a3 + 800); /*0x100535c00*/
  v24 = *(_QWORD *)(a3 + 152); /*0x100535c0e*/
  v32 = v4; /*0x100535c19*/
  if ( v24 == 2 ) /*0x100535c1c*/
  {
    v28 = *(_QWORD *)(a3 + 912); /*0x100535c25*/
    __dsta[0] = 2; /*0x100535c29*/
    v34 = 0x8000000000000000LL; /*0x100535c34*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 328); /*0x100535c48*/
    v34 = __src[0]; /*0x100535c5b*/
    v29 = __src[1]; /*0x100535c66*/
    v26 = __src[2]; /*0x100535c71*/
    v28 = *(_QWORD *)(a3 + 912); /*0x100535c7c*/
    _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x100535c87*/
      __src,
      a3 + 152,
      v10,
      v11);
    memcpy(__dsta, __src, sizeof(__dsta)); /*0x100535c9f*/
  }
  v12 = *(_BYTE *)(a3 + 482); /*0x100535ca4*/
  v37 = *(_BYTE *)(a3 + 136); /*0x100535cb4*/
  if ( *(_QWORD *)(a3 + 112) != 0x8000000000000000LL ) /*0x100535cbb*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 112); /*0x100535ce2*/
    v35 = __src[0]; /*0x100535cee*/
    v30 = __src[1]; /*0x100535cf9*/
    v27 = __src[2]; /*0x100535d04*/
    v38 = *(_BYTE *)(a3 + 920); /*0x100535d10*/
    if ( *(_QWORD *)(a3 + 888) == 0x8000000000000000LL ) /*0x100535d1a*/
      goto LABEL_12; /*0x100535d1a*/
    goto LABEL_11; /*0x100535d1a*/
  }
  v35 = 0x8000000000000000LL; /*0x100535cbd*/
  v38 = *(_BYTE *)(a3 + 920); /*0x100535cc9*/
  if ( *(_QWORD *)(a3 + 888) != 0x8000000000000000LL ) /*0x100535cd3*/
  {
LABEL_11:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a3 + 888); /*0x100535d1c*/
    v9 = __src[0]; /*0x100535d32*/
    v21 = __src[1]; /*0x100535d40*/
    v22 = __src[2]; /*0x100535d4e*/
  }
LABEL_12:
  v25 = v9; /*0x100535d55*/
  v13 = v36 & 1; /*0x100535d60*/
  if ( v36 == 2 ) /*0x100535d69*/
    v6 = 0; /*0x100535d69*/
  v14 = v6; /*0x100535d6d*/
  v15 = v31; /*0x100535d70*/
  if ( v36 == 2 ) /*0x100535d74*/
    v15 = 0; /*0x100535d74*/
  if ( (_DWORD)v24 == 2 ) /*0x100535d82*/
    v12 = 0; /*0x100535d82*/
  memcpy(__dst + 84, v19, 0xB0u); /*0x100535d98*/
  __dst[162] = v23; /*0x100535da4*/
  *((_QWORD *)__dst + 69) = v34; /*0x100535daf*/
  *((_QWORD *)__dst + 70) = v29; /*0x100535dba*/
  *((_QWORD *)__dst + 71) = v26; /*0x100535dc5*/
  *((_QWORD *)__dst + 80) = v28; /*0x100535dd0*/
  memcpy(__dst, __dsta, 0x150u); /*0x100535de6*/
  *((_BYTE *)__dst + 652) = v12; /*0x100535deb*/
  *((_QWORD *)__dst + 64) = 22; /*0x100535df2*/
  *((_QWORD *)__dst + 65) = v33; /*0x100535e01*/
  *((_QWORD *)__dst + 66) = 22; /*0x100535e08*/
  __dst[134] = v14; /*0x100535e13*/
  __dst[135] = v15; /*0x100535e1a*/
  *((_BYTE *)__dst + 544) = v13; /*0x100535e21*/
  *((_BYTE *)__dst + 545) = v32; /*0x100535e2b*/
  *((_QWORD *)__dst + 72) = v35; /*0x100535e36*/
  *((_QWORD *)__dst + 73) = v30; /*0x100535e41*/
  *((_QWORD *)__dst + 74) = v27; /*0x100535e4c*/
  *((_BYTE *)__dst + 600) = v37; /*0x100535e57*/
  *((_QWORD *)__dst + 76) = v25; /*0x100535e62*/
  v16 = v22; /*0x100535e70*/
  *((_QWORD *)__dst + 77) = v21; /*0x100535e77*/
  *((_QWORD *)__dst + 78) = v16; /*0x100535e7e*/
  *((_BYTE *)__dst + 632) = v38; /*0x100535e89*/
  return __dst; /*0x100535e93*/
}