// __ZN13codexmate_lib4core12debug_bundle17active_transition @ 0x1004c99e0
__int64 __fastcall codexmate_lib::core::debug_bundle::active_transition::h2febcef50222dfea(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  if ( *(_BYTE *)(a1 + 1329) != 1 ) /*0x1004c99eb*/
    return 0; /*0x1004c99eb*/
  result = 0; /*0x1004c99f1*/
  if ( __OFSUB__(0, *(_QWORD *)(a1 + 1256)) ) /*0x1004c99fa*/
    return result; /*0x1004c99fa*/
  v2 = *(unsigned __int64 **)(a1 + 1264); /*0x1004c9a00*/
  v3 = *(_QWORD *)(a1 + 1272); /*0x1004c9a07*/
  switch ( v3 ) /*0x1004c9a12*/
  {
    case 8LL: /*0x1004c9a12*/
      v9 = _byteswap_uint64(*v2); /*0x1004c9a8d*/
      v10 = _byteswap_uint64(anon_b0ee9adff4519c22b647af231a5a39fa_251); /*0x1004c9a90*/
      if ( v9 > v10 != v9 < v10 ) /*0x1004c9a99*/
        return 0; /*0x1004c9aa0*/
      return a1 + 1256; /*0x1004c9aa0*/
    case 11LL: /*0x1004c9a12*/
      v4 = _byteswap_uint64(*v2); /*0x1004c9a45*/
      v5 = _byteswap_uint64(anon_b0ee9adff4519c22b647af231a5a39fa_250); /*0x1004c9a4f*/
      if ( v4 == v5 ) /*0x1004c9a55*/
      {
        v6 = *(unsigned __int64 *)((char *)v2 + 3); /*0x1004c9a57*/
        v7 = *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_250 + 3); /*0x1004c9a5b*/
LABEL_10:
        v4 = _byteswap_uint64(v6); /*0x1004c9a62*/
        v5 = _byteswap_uint64(v7); /*0x1004c9a65*/
        v8 = 0; /*0x1004c9a68*/
        if ( v4 == v5 ) /*0x1004c9a6d*/
          goto LABEL_12; /*0x1004c9a6d*/
      }
      break;
    case 14LL: /*0x1004c9a12*/
      v4 = _byteswap_uint64(*v2); /*0x1004c9a23*/
      v5 = _byteswap_uint64(anon_b0ee9adff4519c22b647af231a5a39fa_249); /*0x1004c9a2d*/
      if ( v4 == v5 ) /*0x1004c9a33*/
      {
        v6 = *(unsigned __int64 *)((char *)v2 + 6); /*0x1004c9a35*/
        v7 = *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_249 + 6); /*0x1004c9a39*/
        goto LABEL_10; /*0x1004c9a40*/
      }
      break;
    default:
      return 0; /*0x1004c9a82*/
  }
  v8 = 2 * (v4 >= v5) - 1; /*0x1004c9a6f*/
LABEL_12:
  if ( v8 ) /*0x1004c9a7d*/
    return 0; /*0x1004c9a7d*/
  return a1 + 1256; /*0x1004c9a81*/
}