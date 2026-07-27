// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AccountTokenStatusCode>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::hf3abc3f3005ead32 @ 0x100378e20 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::hf3abc3f3005ead32(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-20h]
  __int64 v9; // [rsp+18h] [rbp-18h]

  result = a1;
  v4 = a3 - 5;
  switch ( a3 )
  {
    case 5LL:
      if ( *a2 != 102 || a2[1] != 114 || a2[2] != 101 || a2[3] != 115 || a2[4] != 104 )
        goto LABEL_55;
      *(_WORD *)a1 = 0;
      break;
    case 9LL:
      if ( *a2 != 114
        || a2[1] != 101
        || a2[2] != 102
        || a2[3] != 114
        || a2[4] != 101
        || a2[5] != 115
        || a2[6] != 104
        || a2[7] != 101
        || a2[8] != 100 )
      {
        goto LABEL_55;
      }
      *(_WORD *)a1 = 256;
      break;
    case 13LL:
      if ( *a2 != 114 || a2[1] != 101 || a2[2] != 102 || a2[3] != 114 || a2[4] != 101 || a2[5] != 115 || a2[6] != 104 )
        goto LABEL_55;
      v4 = (unsigned __int8)a2[7];
      if ( (_DWORD)v4 == 70 )
      {
        if ( a2[8] != 97 || a2[9] != 105 || a2[10] != 108 || a2[11] != 101 || a2[12] != 100 )
          goto LABEL_55;
        *(_WORD *)a1 = 1024;
      }
      else
      {
        if ( (_DWORD)v4 != 82 || a2[8] != 101 || a2[9] != 117 || a2[10] != 115 || a2[11] != 101 || a2[12] != 100 )
          goto LABEL_55;
        *(_WORD *)a1 = 768;
      }
      break;
    case 14LL:
      if ( *a2 != 110
        || a2[1] != 111
        || a2[2] != 82
        || a2[3] != 101
        || a2[4] != 102
        || a2[5] != 114
        || a2[6] != 101
        || a2[7] != 115
        || a2[8] != 104
        || a2[9] != 84
        || a2[10] != 111
        || a2[11] != 107
        || a2[12] != 101
        || a2[13] != 110 )
      {
        goto LABEL_55;
      }
      *(_WORD *)a1 = 512;
      break;
    default:
LABEL_55:
      serde_core::private::string::from_utf8_lossy::h0d772f5e1055fc56(&v7, a2, a3, v4);
      v5 = v8;
      v6 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             v8,
             v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_873,
             5);
      result = a1;
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)a1 = 1;
      if ( 2 * v7 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1);
        result = a1;
      }
      break;
  }
  return result;
}
