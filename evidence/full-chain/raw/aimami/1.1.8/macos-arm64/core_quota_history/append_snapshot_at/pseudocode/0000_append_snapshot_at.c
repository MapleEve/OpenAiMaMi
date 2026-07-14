// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x1003d16c0 depth=0
_QWORD *__fastcall codexmate_lib::core::quota_history::append_snapshot_at::h9c34268f9f5917b8(
        _QWORD *a1,
        _BYTE *a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v10; // r15
  _BYTE *v14; // rax
  char *v15; // rdx
  _UNKNOWN **v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 (__fastcall *v28)(); // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  _QWORD v32[8]; // [rsp+8h] [rbp-C8h] BYREF
  size_t v33; // [rsp+48h] [rbp-88h]
  const void *v34; // [rsp+50h] [rbp-80h]
  _QWORD v35[3]; // [rsp+58h] [rbp-78h] BYREF
  __int64 v36; // [rsp+70h] [rbp-60h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+78h] [rbp-58h]
  __int64 v38; // [rsp+80h] [rbp-50h]
  _TBYTE v39; // [rsp+88h] [rbp-48h] BYREF
  __int16 v40; // [rsp+92h] [rbp-3Eh]
  _QWORD *v41; // [rsp+98h] [rbp-38h]
  _DWORD v42[11]; // [rsp+A4h] [rbp-2Ch] BYREF

  v10 = a1; /*0x1003d16d4*/
  if ( !(a9 | a6) ) /*0x1003d16de*/
  {
    *a1 = 10; /*0x1003d16e3*/
    return v10; /*0x1003d16ea*/
  }
  v34 = a2; /*0x1003d16f8*/
  v33 = a3; /*0x1003d16ff*/
  v14 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(a2, a3, a3, (__int64)a4, a5, a6); /*0x1003d1709*/
  if ( v14 ) /*0x1003d1711*/
  {
    LOWORD(v32[0]) = 511; /*0x1003d1713*/
    BYTE2(v32[0]) = 1; /*0x1003d171c*/
    v16 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)v32, v14, v15); /*0x1003d172d*/
    if ( v16 ) /*0x1003d1735*/
    {
      *a1 = 2; /*0x1003d1737*/
      a1[1] = v16; /*0x1003d173e*/
      return v10; /*0x1003d1742*/
    }
  }
  if ( a5 < 0 ) /*0x1003d174a*/
  {
    v17 = 0; /*0x1003d174c*/
    goto LABEL_8; /*0x1003d174c*/
  }
  v41 = a1; /*0x1003d175a*/
  if ( a5 ) /*0x1003d175e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003d1760*/
    v17 = 1; /*0x1003d1768*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1u); /*0x1003d1773*/
    if ( !v18 ) /*0x1003d177b*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, a5); /*0x1003d174f*/
    v19 = v18; /*0x1003d177d*/
  }
  else
  {
    v19 = 1; /*0x1003d1782*/
  }
  memcpy((void *)v19, a4, a5); /*0x1003d1790*/
  if ( a6 ) /*0x1003d1798*/
  {
    a7 = *(double *)(a6 + 24); /*0x1003d179a*/
    v20 = 1; /*0x1003d17a0*/
    v21 = a10; /*0x1003d17a5*/
    if ( a9 ) /*0x1003d17ac*/
    {
LABEL_15:
      a8 = *(double *)(a9 + 24); /*0x1003d17ae*/
      v22 = 1; /*0x1003d17b3*/
      goto LABEL_18; /*0x1003d17b8*/
    }
  }
  else
  {
    v20 = 0; /*0x1003d17ba*/
    v21 = a10; /*0x1003d17bc*/
    if ( a9 ) /*0x1003d17c3*/
      goto LABEL_15; /*0x1003d17c3*/
  }
  v22 = 0; /*0x1003d17c5*/
LABEL_18:
  v32[7] = v21; /*0x1003d17c7*/
  v32[4] = a5; /*0x1003d17ce*/
  v32[5] = v19; /*0x1003d17d5*/
  v32[6] = a5; /*0x1003d17dc*/
  v32[0] = v20; /*0x1003d17e3*/
  *(double *)&v32[1] = a7; /*0x1003d17ea*/
  v32[2] = v22; /*0x1003d17f2*/
  *(double *)&v32[3] = a8; /*0x1003d17f9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003d1801*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x1003d1810*/
  if ( !v23 ) /*0x1003d1818*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1003d19c6*/
  v36 = 128; /*0x1003d181e*/
  v37 = (__int64 (__fastcall *)())v23; /*0x1003d1826*/
  v38 = 0; /*0x1003d182a*/
  *(_QWORD *)&v39 = &v36; /*0x1003d1836*/
  v24 = codexmate_lib::core::quota_history::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$::serialize::heda5e40859142c4b( /*0x1003d184a*/
          v32,
          &v39);
  if ( v24 ) /*0x1003d1850*/
  {
    if ( v36 ) /*0x1003d1859*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003d1864*/
    goto LABEL_23; /*0x1003d1869*/
  }
  v25 = v36; /*0x1003d186b*/
  v24 = (__int64)v37; /*0x1003d186f*/
  if ( !__OFSUB__(-v36, 1) ) /*0x1003d1879*/
  {
    v35[0] = v36; /*0x1003d18bc*/
    v35[1] = v37; /*0x1003d18c0*/
    v35[2] = v38; /*0x1003d18c4*/
    LODWORD(v39) = 0; /*0x1003d18c8*/
    WORD2(v39) = 438; /*0x1003d18cf*/
    v40 = 1; /*0x1003d18d5*/
    *(_DWORD *)((char *)&v39 + 6) = 0x10000; /*0x1003d18db*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)&v36, (__int64)&v39, v34, v33); /*0x1003d18fd*/
    if ( (_DWORD)v36 == 1 ) /*0x1003d1906*/
    {
      v28 = v37; /*0x1003d1908*/
      v29 = v41; /*0x1003d190c*/
      *v41 = 2; /*0x1003d1910*/
      v29[1] = v28; /*0x1003d1917*/
    }
    else
    {
      v42[0] = HIDWORD(v36); /*0x1003d1920*/
      v36 = (__int64)v35; /*0x1003d1927*/
      v37 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003d1932*/
      v30 = std::io::default_write_fmt::hf62afa4a4e97fcee((__int64)v42, "\xC0\x01\n", (unsigned __int64)&v36); /*0x1003d1945*/
      if ( !v30 ) /*0x1003d194d*/
      {
        *v41 = 10; /*0x1003d198d*/
        close_NOCANCEL(v42[0]); /*0x1003d1997*/
        if ( !v35[0] ) /*0x1003d19a3*/
          goto LABEL_24; /*0x1003d19a3*/
        goto LABEL_33; /*0x1003d19a3*/
      }
      v31 = v41; /*0x1003d194f*/
      *v41 = 2; /*0x1003d1953*/
      v31[1] = v30; /*0x1003d195a*/
      close_NOCANCEL(v42[0]); /*0x1003d1961*/
      v25 = v35[0]; /*0x1003d1966*/
    }
    if ( !v25 ) /*0x1003d196d*/
      goto LABEL_24; /*0x1003d196d*/
LABEL_33:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003d1973*/
    goto LABEL_24; /*0x1003d1984*/
  }
LABEL_23:
  v26 = v41; /*0x1003d187b*/
  *v41 = 3; /*0x1003d187f*/
  v26[1] = v24; /*0x1003d1886*/
LABEL_24:
  if ( a5 ) /*0x1003d188d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003d189a*/
  return v41; /*0x1003d18a6*/
}