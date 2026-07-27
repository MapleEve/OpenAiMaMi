// __ZN13codexmate_lib4core5relay7storage17lazy_load_api_key @ 0x1008aeff0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::storage::lazy_load_api_key::h1b51e8f1fd913730(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // [rsp-40h] [rbp-40h] BYREF
  __int64 v9; // [rsp-38h] [rbp-38h]
  __int64 v10; // [rsp-30h] [rbp-30h]
  __int64 v11; // [rsp-28h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 88) ) /*0x1008aeff0*/
    return 0; /*0x1008aeff9*/
  codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53( /*0x1008af01c*/
    &v8,
    a1,
    *(unsigned __int8 **)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  if ( (_BYTE)v8 ) /*0x1008af025*/
  {
    v4 = v9; /*0x1008af027*/
    goto LABEL_5; /*0x1008af027*/
  }
  v4 = v9; /*0x1008af040*/
  if ( __OFSUB__(-v9, 1) ) /*0x1008af047*/
    return 0; /*0x1008af04c*/
  if ( !v11 ) /*0x1008af05e*/
  {
LABEL_5:
    if ( v4 ) /*0x1008af02e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v4, 1); /*0x1008af039*/
    return 0; /*0x1008af03e*/
  }
  v5 = a2; /*0x1008af060*/
  v6 = *(_QWORD *)(a2 + 72); /*0x1008af06b*/
  if ( v6 ) /*0x1008af071*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 80), v6, 1); /*0x1008af07c*/
    v5 = a2; /*0x1008af081*/
  }
  *(_QWORD *)(a2 + 88) = v11; /*0x1008af088*/
  v7 = v9; /*0x1008af08c*/
  *(_QWORD *)(a2 + 80) = v10; /*0x1008af093*/
  *(_QWORD *)(a2 + 72) = v7; /*0x1008af097*/
  result = 1; /*0x1008af09a*/
  if ( !*(_BYTE *)(v5 + 228) ) /*0x1008af09c*/
    *(_BYTE *)(v5 + 228) = 1; /*0x1008af0a5*/
  return result; /*0x1008aeff9*/
}