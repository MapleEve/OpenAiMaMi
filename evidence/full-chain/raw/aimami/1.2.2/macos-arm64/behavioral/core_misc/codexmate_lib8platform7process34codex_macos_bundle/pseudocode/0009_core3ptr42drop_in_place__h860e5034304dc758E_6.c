// mac 1.2.2 NEW codexmate_lib8platform7process34codex_macos_bundle 0x1009bc9c0 d=2
unsigned __int8 __fastcall core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(__int64 a1)
{
  __int64 v2; // rsi
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 result; // al

  v2 = *(_QWORD *)(a1 + 136); /*0x1009bc9d4*/
  **(_BYTE **)(a1 + 128) = 0; /*0x1009bc9db*/
  if ( v2 ) /*0x1009bc9e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bc9e8*/
  _$LT$std..sys..process..unix..common..cstring_array..CStringArray$u20$as$u20$core..ops..drop..Drop$GT$::drop::h592902080c93a71d(a1); /*0x1009bc9f0*/
  if ( *(_QWORD *)a1 ) /*0x1009bc9f5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bca0a*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hffc20983f65dddc2(a1 + 96); /*0x1009bca13*/
  v3 = *(_BYTE **)(a1 + 144); /*0x1009bca18*/
  if ( v3 ) /*0x1009bca22*/
  {
    v4 = *(_QWORD *)(a1 + 152); /*0x1009bca24*/
    *v3 = 0; /*0x1009bca2b*/
    if ( v4 ) /*0x1009bca31*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bca38*/
  }
  v5 = *(_BYTE **)(a1 + 160); /*0x1009bca3d*/
  if ( v5 ) /*0x1009bca47*/
  {
    v6 = *(_QWORD *)(a1 + 168); /*0x1009bca49*/
    *v5 = 0; /*0x1009bca50*/
    if ( v6 ) /*0x1009bca56*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bca5d*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd307b1fb43f76c69(a1 + 24); /*0x1009bca69*/
  if ( *(_QWORD *)(a1 + 24) ) /*0x1009bca6e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bca83*/
  result = *(_QWORD *)(a1 + 176) == 0; /*0x1009bca99*/
  if ( result | (*(_QWORD *)(a1 + 184) == 0) ) /*0x1009bcaa2*/
  {
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x1009bcaaa*/
      goto LABEL_15; /*0x1009bcaaa*/
  }
  else
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009bcad3*/
    if ( *(_DWORD *)(a1 + 72) != 3 ) /*0x1009bcadc*/
    {
LABEL_15:
      if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x1009bcab0*/
        goto LABEL_16; /*0x1009bcab0*/
      goto LABEL_20; /*0x1009bcab0*/
    }
  }
  result = close_NOCANCEL(*(unsigned int *)(a1 + 76)); /*0x1009bcae1*/
  if ( *(_DWORD *)(a1 + 80) != 3 ) /*0x1009bcaea*/
  {
LABEL_16:
    if ( *(_DWORD *)(a1 + 88) != 3 ) /*0x1009bcab6*/
      return result; /*0x1009bcab6*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x1009bcab6*/
  }
LABEL_20:
  result = close_NOCANCEL(*(unsigned int *)(a1 + 84)); /*0x1009bcaec*/
  if ( *(_DWORD *)(a1 + 88) == 3 ) /*0x1009bcaf8*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 92)); /*0x1009bcab8*/
  return result; /*0x1009bcabf*/
}