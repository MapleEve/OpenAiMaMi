__int64 __fastcall codexmate_lib::core::repository::registry_item_has_managed_virtual_snapshot::h28c6df3f86f0f1a6(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r15
  signed __int64 v6; // rbx
  __int64 v7; // r12
  const void *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD __src[22]; // [rsp+0h] [rbp-180h] BYREF
  _QWORD __dst[26]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = a1[17]; /*0x10053fcc5*/
  v3 = a1[18]; /*0x10053fccc*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(__dst, v2, v3, &anon_e90f81edc9eb47f28b006fedbc3b914a_65, 2); /*0x10053fcf0*/
  v4 = __src; /*0x10053fcf5*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10053fcff*/
    __src,
    __dst);
  if ( LODWORD(__src[0]) == 1 /*0x10053fd60*/
    && (v4 = (_QWORD *)__src[2], v3 - __src[2] == 36)
    && (v5 = __src[1],
        v4 = (_QWORD *)(v2 + __src[2]),
        memcmp((const void *)(v2 + __src[2]), &anon_e90f81edc9eb47f28b006fedbc3b914a_66, 0x24u) == 0 && v5 >= 7)
    && !(*(_DWORD *)(v2 + v5 - 7) ^ anon_e90f81edc9eb47f28b006fedbc3b914a_67
       | *(_DWORD *)(v2 + v5 - 4) ^ *(int *)((char *)&anon_e90f81edc9eb47f28b006fedbc3b914a_67 + 3)) )
  {
    LOBYTE(v5) = 1; /*0x10053ff52*/
  }
  else
  {
    v6 = a1[21]; /*0x10053fd66*/
    if ( v6 < 0 ) /*0x10053fd70*/
    {
      v7 = 0; /*0x10053fd72*/
      goto LABEL_7; /*0x10053fd72*/
    }
    v8 = (const void *)a1[20]; /*0x10053fd80*/
    if ( v6 ) /*0x10053fd87*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4); /*0x10053fd89*/
      v7 = 1; /*0x10053fd8e*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x10053fd9c*/
      if ( !v9 ) /*0x10053fda4*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10053fd75*/
      v10 = v9; /*0x10053fda6*/
    }
    else
    {
      v10 = 1; /*0x10053fdab*/
    }
    memcpy((void *)v10, v8, v6); /*0x10053fdba*/
    codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(__src, v10, v6); /*0x10053fdcc*/
    if ( __src[0] == 0x8000000000000001LL ) /*0x10053fde7*/
    {
      qmemcpy(__dst, &__src[1], 0x60u); /*0x10053fdfc*/
      if ( __dst[0] == 10 ) /*0x10053fe07*/
      {
        LODWORD(v5) = LOBYTE(__dst[1]); /*0x10053fe0d*/
      }
      else
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x10053ff22*/
        LODWORD(v5) = 0; /*0x10053ff27*/
      }
    }
    else
    {
      memcpy(__dst, __src, 0xB0u); /*0x10053fe30*/
      LODWORD(v5) = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::he8e0079a2a6340b0(__dst); /*0x10053fe3d*/
      if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10053fe4f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10053fe5d*/
      if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10053fe71*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10053fe7f*/
      if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10053fe93*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10053fea1*/
      if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10053feb5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10053fec0*/
      if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10053fed1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10053fedc*/
      if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x10053feed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10053fef8*/
      if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x10053ff09*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10053ff14*/
    }
    if ( v6 ) /*0x10053ff2d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v6, 1); /*0x10053ff3a*/
  }
  return (unsigned int)v5; /*0x10053ff42*/
}