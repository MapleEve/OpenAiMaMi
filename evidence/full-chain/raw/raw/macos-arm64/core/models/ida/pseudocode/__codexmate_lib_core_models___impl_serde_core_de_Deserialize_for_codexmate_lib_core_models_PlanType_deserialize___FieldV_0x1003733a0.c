// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::PlanType>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h297d4e1a38f84c39 @ 0x1003733a0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h297d4e1a38f84c39(
        __int64 a1,
        unsigned __int8 *a2,
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
  v4 = a3 - 3;
  switch ( a3 )
  {
    case 3LL:
      if ( *a2 != 101 || a2[1] != 100 || a2[2] != 117 )
        goto LABEL_63;
      *(_WORD *)a1 = 1792;
      break;
    case 4LL:
      v4 = *a2;
      if ( (_DWORD)v4 == 102 )
      {
        if ( a2[1] != 114 || a2[2] != 101 || a2[3] != 101 )
          goto LABEL_63;
        *(_WORD *)a1 = 0;
      }
      else if ( (_DWORD)v4 == 112 )
      {
        if ( a2[1] != 108 || a2[2] != 117 || a2[3] != 115 )
          goto LABEL_63;
        *(_WORD *)a1 = 256;
      }
      else
      {
        if ( (_DWORD)v4 != 116 || a2[1] != 101 || a2[2] != 97 || a2[3] != 109 )
          goto LABEL_63;
        *(_WORD *)a1 = 1024;
      }
      break;
    case 5LL:
      if ( *a2 != 112 || a2[1] != 114 || a2[2] != 111 || a2[3] != 53 || a2[4] != 120 )
        goto LABEL_63;
      *(_WORD *)a1 = 512;
      break;
    case 6LL:
      if ( *a2 != 112 || a2[1] != 114 || a2[2] != 111 || a2[3] != 50 || a2[4] != 48 || a2[5] != 120 )
        goto LABEL_63;
      *(_WORD *)a1 = 768;
      break;
    case 7LL:
      if ( *a2 != 117 || a2[1] != 110 || a2[2] != 107 || a2[3] != 110 || a2[4] != 111 || a2[5] != 119 || a2[6] != 110 )
        goto LABEL_63;
      *(_WORD *)a1 = 2048;
      break;
    case 8LL:
      if ( *a2 != 98
        || a2[1] != 117
        || a2[2] != 115
        || a2[3] != 105
        || a2[4] != 110
        || a2[5] != 101
        || a2[6] != 115
        || a2[7] != 115 )
      {
        goto LABEL_63;
      }
      *(_WORD *)a1 = 1280;
      break;
    case 10LL:
      if ( *a2 != 101
        || a2[1] != 110
        || a2[2] != 116
        || a2[3] != 101
        || a2[4] != 114
        || a2[5] != 112
        || a2[6] != 114
        || a2[7] != 105
        || a2[8] != 115
        || a2[9] != 101 )
      {
        goto LABEL_63;
      }
      *(_WORD *)a1 = 1536;
      break;
    default:
LABEL_63:
      serde_core::private::string::from_utf8_lossy::h0d772f5e1055fc56(&v7, a2, a3, v4);
      v5 = v8;
      v6 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             v8,
             v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_973,
             9);
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
