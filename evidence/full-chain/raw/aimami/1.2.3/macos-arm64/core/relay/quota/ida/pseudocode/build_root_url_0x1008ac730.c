// __ZN13codexmate_lib4core5relay5quota14build_root_url @ 0x1008ac730 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::build_root_url::h9fbfb677ca1e6b74(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rsi
  char *v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // r14
  char *v11; // rdx
  int v12; // ecx
  char v13; // si
  char v14; // di
  char v15; // r8
  char *v16; // rdx
  int v17; // edi
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r15
  signed __int64 v21; // r14
  char *v23; // r12
  __int64 v24; // rax
  _QWORD v25[4]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v26[2]; // [rsp+28h] [rbp-48h] BYREF
  signed __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  signed __int64 v29; // [rsp+48h] [rbp-28h]

  v26[0] = a4; /*0x1008ac742*/
  v26[1] = a5; /*0x1008ac746*/
  v7 = a3; /*0x1008ac74d*/
  v8 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008ac750*/
  do /*0x1008ac7d1*/
  {
    while ( 1 ) /*0x1008ac76b*/
    {
      if ( !v9 ) /*0x1008ac76e*/
      {
        v20 = 1; /*0x1008ac7e6*/
        v10 = 0; /*0x1008ac7ec*/
        goto LABEL_16; /*0x1008ac7ec*/
      }
      v10 = v9; /*0x1008ac770*/
      v11 = &v8[v9]; /*0x1008ac773*/
      v12 = *(v11 - 1); /*0x1008ac776*/
      if ( v12 < 0 ) /*0x1008ac77c*/
        break; /*0x1008ac77c*/
      v9 = v11 - 1 - v8; /*0x1008ac763*/
      if ( v12 != 47 ) /*0x1008ac769*/
        goto LABEL_12; /*0x1008ac769*/
    }
    v13 = *(v11 - 2); /*0x1008ac77e*/
    if ( v13 >= -64 ) /*0x1008ac786*/
    {
      v16 = v11 - 2; /*0x1008ac7ab*/
      v18 = v13 & 0x1F; /*0x1008ac7af*/
    }
    else
    {
      v14 = *(v11 - 3); /*0x1008ac788*/
      if ( v14 >= -64 ) /*0x1008ac790*/
      {
        v16 = v11 - 3; /*0x1008ac7b4*/
        v17 = v14 & 0xF; /*0x1008ac7b8*/
      }
      else
      {
        v15 = *(v11 - 4); /*0x1008ac792*/
        v16 = v11 - 4; /*0x1008ac797*/
        v17 = ((v15 & 7) << 6) | v14 & 0x3F; /*0x1008ac7a6*/
      }
      a2 = (unsigned int)(v17 << 6); /*0x1008ac7bb*/
      v18 = a2 | v13 & 0x3F; /*0x1008ac7c1*/
    }
    v7 = (unsigned int)(v18 << 6); /*0x1008ac7c3*/
    v9 = v16 - v8; /*0x1008ac7cb*/
  }
  while ( ((unsigned int)v7 | v12 & 0x3F) == 0x2F ); /*0x1008ac7d1*/
LABEL_12:
  if ( v10 < 0 ) /*0x1008ac7d6*/
  {
    v19 = 0; /*0x1008ac7dc*/
    goto LABEL_14; /*0x1008ac7dc*/
  }
  v23 = v8; /*0x1008ac8b3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v7); /*0x1008ac8b6*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1008ac8c3*/
  v19 = 1; /*0x1008ac8c8*/
  if ( !v24 ) /*0x1008ac8d0*/
LABEL_14:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v10); /*0x1008ac7de*/
  v20 = v24; /*0x1008ac8d6*/
  v8 = v23; /*0x1008ac8d9*/
LABEL_16:
  memcpy((void *)v20, v8, v10); /*0x1008ac7ef*/
  v27 = v10; /*0x1008ac7fd*/
  v28 = v20; /*0x1008ac801*/
  v29 = v10; /*0x1008ac805*/
  if ( (unsigned __int64)v10 >= 3 && !(*(_WORD *)(v20 + v10 - 3) ^ 0x762F | *(unsigned __int8 *)(v20 + v10 - 1) ^ 0x31) ) /*0x1008ac823*/
  {
    v21 = v10 - 3; /*0x1008ac828*/
    if ( v21 && *(char *)(v20 + v21) <= -65 ) /*0x1008ac833*/
      core::panicking::panic::h286e2dd5eab048be( /*0x1008ac8ac*/
        &anon_10420c9971c21f44d230d15b39fb3fec_1001,
        48,
        &anon_10420c9971c21f44d230d15b39fb3fec_840);
    v29 = v21; /*0x1008ac835*/
  }
  v25[0] = &v27; /*0x1008ac83d*/
  v25[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ac848*/
  v25[2] = v26; /*0x1008ac850*/
  v25[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ac85b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_280, v25); /*0x1008ac86d*/
  if ( v27 ) /*0x1008ac879*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1008ac884*/
  return a1; /*0x1008ac88c*/
}