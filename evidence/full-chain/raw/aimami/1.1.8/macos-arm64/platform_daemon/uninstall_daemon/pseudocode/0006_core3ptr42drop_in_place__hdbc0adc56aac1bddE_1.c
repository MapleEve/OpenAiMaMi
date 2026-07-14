// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x10022c260 depth=1
// core3ptr42drop_in_place::hdbc0adc56aac1bddE_1
unsigned __int8 __fastcall core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(__int64 a1)
{
  __int64 v2; // rsi
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 result; // al

  v2 = *(_QWORD *)(a1 + 136); /*0x10022c274*/
  **(_BYTE **)(a1 + 128) = 0; /*0x10022c27b*/
  if ( v2 ) /*0x10022c281*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c288*/
  _$LT$std..sys..process..unix..common..cstring_array..CStringArray$u20$as$u20$core..ops..drop..Drop$GT$::drop::h592902080c93a71d(a1); /*0x10022c290*/
  if ( *(_QWORD *)a1 ) /*0x10022c295*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c2aa*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b67788ff456eb2d(a1 + 96); /*0x10022c2b3*/
  v3 = *(_BYTE **)(a1 + 144); /*0x10022c2b8*/
  if ( v3 ) /*0x10022c2c2*/
  {
    v4 = *(_QWORD *)(a1 + 152); /*0x10022c2c4*/
    *v3 = 0; /*0x10022c2cb*/
    if ( v4 ) /*0x10022c2d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c2d8*/
  }
  v5 = *(_BYTE **)(a1 + 160); /*0x10022c2dd*/
  if ( v5 ) /*0x10022c2e7*/
  {
    v6 = *(_QWORD *)(a1 + 168); /*0x10022c2e9*/
    *v5 = 0; /*0x10022c2f0*/
    if ( v6 ) /*0x10022c2f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c2fd*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfa89aadb3a713bf0(a1 + 24); /*0x10022c309*/
  if ( *(_QWORD *)(a1 + 24) ) /*0x10022c30e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c323*/
  result = *(_QWORD *)(a1 + 176) == 0; /*0x10022c339*/
  if ( result | (*(_QWORD *)(a1 + 184) == 0) ) /*0x10022c342*/
  {
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x10022c34a*/
      goto LABEL_15; /*0x10022c34a*/
  }
  else
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10022c373*/
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x10022c37c*/
    {
LABEL_15:
      if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x10022c350*/
        goto LABEL_16; /*0x10022c350*/
      goto LABEL_20; /*0x10022c350*/
    }
  }
  result = close_NOCANCEL(*(unsigned int *)(a1 + 76)); /*0x10022c381*/
  if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x10022c38a*/
  {
LABEL_16:
    if ( *(_DWORD *)(a1 + 88) != 3 ) /*0x10022c356*/
      return result; /*0x10022c356*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x10022c356*/
  }
LABEL_20:
  result = close_NOCANCEL(*(unsigned int *)(a1 + 84)); /*0x10022c38c*/
  if ( *(_DWORD *)(a1 + 88) == 3 ) /*0x10022c398*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x10022c358*/
  return result; /*0x10022c35f*/
}