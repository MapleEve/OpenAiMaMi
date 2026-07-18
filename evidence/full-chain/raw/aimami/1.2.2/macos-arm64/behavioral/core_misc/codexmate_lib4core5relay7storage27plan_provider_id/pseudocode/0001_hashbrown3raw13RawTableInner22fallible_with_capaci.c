// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x1006af4c0 d=1
void *__fastcall hashbrown::raw::RawTableInner::fallible_with_capacity::h7286bde701ec8808(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v6; // r14
  void *result; // rax
  unsigned __int64 v8; // rcx
  size_t v9; // r15
  size_t v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r13
  void *v13; // r13
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // [rsp+8h] [rbp-38h]
  unsigned __int8 v17; // [rsp+14h] [rbp-2Ch]

  *((_QWORD *)&v4 + 1) = a3; /*0x1006af4c0*/
  if ( !*((_QWORD *)&v4 + 1) ) /*0x1006af4d7*/
  {
    a1[3] = 0; /*0x1006af502*/
    a1[2] = 0; /*0x1006af50d*/
    a1[1] = 0; /*0x1006af518*/
    *a1 = anon_ff51a8651aab3676c852b8266a775073_407; /*0x1006af523*/
    return anon_ff51a8651aab3676c852b8266a775073_407; /*0x1006af526*/
  }
  if ( *((_QWORD *)&v4 + 1) >= 0xFu ) /*0x1006af4e0*/
  {
    if ( *((_QWORD *)&v4 + 1) >> 61 ) /*0x1006af52e*/
    {
LABEL_12:
      result = (void *)hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4, a2, *((_QWORD *)&v4 + 1)); /*0x1006af5a5*/
LABEL_13:
      a1[1] = result; /*0x1006af5ae*/
      a1[2] = v11; /*0x1006af5b2*/
      *a1 = 0; /*0x1006af5b6*/
      return result; /*0x1006af5bd*/
    }
    _BitScanReverse64(&v8, 8LL * *((_QWORD *)&v4 + 1) / 7uLL - 1); /*0x1006af55b*/
    v6 = (0xFFFFFFFFFFFFFFFFLL >> ~(_BYTE)v8) + 1; /*0x1006af56b*/
  }
  else
  {
    v6 = 4; /*0x1006af4ef*/
    if ( *((_QWORD *)&v4 + 1) >= 4u ) /*0x1006af4f5*/
      v6 = (BYTE8(v4) & 8) + 8LL; /*0x1006af4f5*/
  }
  v4 = v6 * (unsigned __int128)a2; /*0x1006af571*/
  if ( !is_mul_ok(v6, a2) ) /*0x1006af571*/
    goto LABEL_12; /*0x1006af571*/
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFF0LL ) /*0x1006af57a*/
    goto LABEL_12; /*0x1006af57a*/
  *(_QWORD *)&v4 = (v4 + 15) & 0xFFFFFFFFFFFFFFF0LL; /*0x1006af580*/
  v9 = v6 + 16; /*0x1006af584*/
  v10 = v6 + 16 + v4; /*0x1006af58b*/
  *((_QWORD *)&v4 + 1) = 0x7FFFFFFFFFFFFFF0LL; /*0x1006af591*/
  BYTE8(v4) = __CFADD__(v6 + 16, (_QWORD)v4) || v10 > 0x7FFFFFFFFFFFFFF0LL; /*0x1006af5a1*/
  if ( BYTE8(v4) ) /*0x1006af5a3*/
    goto LABEL_12; /*0x1006af5a3*/
  if ( v10 ) /*0x1006af5c5*/
  {
    v17 = a4; /*0x1006af5c7*/
    v16 = v4; /*0x1006af5cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006af5cf*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 0x10u); /*0x1006af5e1*/
    *(_QWORD *)&v4 = v16; /*0x1006af5e4*/
    if ( !v12 ) /*0x1006af5eb*/
    {
      result = (void *)hashbrown::raw::Fallibility::alloc_err::hcaa6512332942e5a(v17, 16, v10); /*0x1006af5f9*/
      goto LABEL_13; /*0x1006af5fe*/
    }
  }
  else
  {
    v12 = 16; /*0x1006af600*/
  }
  v13 = (void *)(v4 + v12); /*0x1006af606*/
  v14 = v6 - 1; /*0x1006af609*/
  v15 = (v6 & 0xFFFFFFFFFFFFFFF8LL) - (v6 >> 3); /*0x1006af618*/
  if ( v14 < 8 ) /*0x1006af61f*/
    v15 = v14; /*0x1006af61f*/
  result = memset(v13, 255, v9); /*0x1006af62e*/
  *a1 = v13; /*0x1006af633*/
  a1[1] = v14; /*0x1006af636*/
  a1[2] = v15; /*0x1006af63a*/
  a1[3] = 0; /*0x1006af63e*/
  return result; /*0x1006af646*/
}