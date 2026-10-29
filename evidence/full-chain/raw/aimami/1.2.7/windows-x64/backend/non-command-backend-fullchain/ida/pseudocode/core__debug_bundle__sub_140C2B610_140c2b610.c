// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c2b610 | name sub_140C2B610
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C2B610(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v6; // edx

  if ( *(_BYTE *)(a1 + 1689) != 1 || *(_QWORD *)(a1 + 1616) == -1 )
    return 0;
  result = 0;
  v2 = *(_QWORD *)(a1 + 1624);
  switch ( *(_QWORD *)(a1 + 1632) )
  {
    case 8LL:
      v3 = _byteswap_uint64(*(_QWORD *)v2);
      if ( v3 > 0x7265747279696E67LL != v3 < 0x7265747279696E67LL )
        return 0;
      goto LABEL_5;
    case 0xALL:
      v4 = _byteswap_uint64(*(_QWORD *)v2);
      v5 = 0x636F6D6D69747469LL;
      if ( v4 != 0x636F6D6D69747469LL )
        goto LABEL_14;
      v4 = (unsigned __int16)__ROL2__(*(_WORD *)(v2 + 8), 8);
      v6 = 0;
      if ( (unsigned __int16)v4 != 28263 )
      {
        v5 = 28263;
LABEL_14:
        v6 = 2 * (v4 >= v5) - 1;
      }
LABEL_15:
      if ( v6 )
        return 0;
LABEL_5:
      result = a1 + 1616;
      break;
    case 0xBLL:
      v4 = _byteswap_uint64(*(_QWORD *)v2);
      v5 = 0x7265636F6E63696CLL;
      if ( v4 != 0x7265636F6E63696CLL )
        goto LABEL_14;
      v4 = _byteswap_uint64(*(_QWORD *)(v2 + 3));
      v5 = 0x6F6E63696C696E67LL;
      v6 = 0;
      if ( v4 != 0x6F6E63696C696E67LL )
        goto LABEL_14;
      goto LABEL_15;
    case 0xELL:
      v4 = _byteswap_uint64(*(_QWORD *)v2);
      v5 = 0x73746F7070696E67LL;
      if ( v4 != 0x73746F7070696E67LL )
        goto LABEL_14;
      v4 = _byteswap_uint64(*(_QWORD *)(v2 + 6));
      v5 = 0x6E675F636F646578LL;
      v6 = 0;
      if ( v4 != 0x6E675F636F646578LL )
        goto LABEL_14;
      goto LABEL_15;
    default:
      return result;
  }
  return result;
}
