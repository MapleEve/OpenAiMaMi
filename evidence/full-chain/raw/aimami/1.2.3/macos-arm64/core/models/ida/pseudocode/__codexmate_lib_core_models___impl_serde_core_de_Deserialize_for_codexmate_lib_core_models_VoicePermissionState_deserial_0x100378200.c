// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoicePermissionState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::hb348a7f0bfa80d3d @ 0x100378200 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoicePermissionState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::hb348a7f0bfa80d3d(
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
  v4 = a3 - 6;
  switch ( a3 )
  {
    case 6LL:
      if ( *a2 != 100 || a2[1] != 101 || a2[2] != 110 || a2[3] != 105 || a2[4] != 101 || a2[5] != 100 )
        goto LABEL_58;
      *(_WORD *)a1 = 256;
      break;
    case 10LL:
      v4 = *a2;
      if ( (_DWORD)v4 == 97 )
      {
        if ( a2[1] != 117
          || a2[2] != 116
          || a2[3] != 104
          || a2[4] != 111
          || a2[5] != 114
          || a2[6] != 105
          || a2[7] != 122
          || a2[8] != 101
          || a2[9] != 100 )
        {
          goto LABEL_58;
        }
        *(_WORD *)a1 = 0;
      }
      else
      {
        if ( (_DWORD)v4 != 114
          || a2[1] != 101
          || a2[2] != 115
          || a2[3] != 116
          || a2[4] != 114
          || a2[5] != 105
          || a2[6] != 99
          || a2[7] != 116
          || a2[8] != 101
          || a2[9] != 100 )
        {
          goto LABEL_58;
        }
        *(_WORD *)a1 = 512;
      }
      break;
    case 11LL:
      if ( *a2 != 117
        || a2[1] != 110
        || a2[2] != 115
        || a2[3] != 117
        || a2[4] != 112
        || a2[5] != 112
        || a2[6] != 111
        || a2[7] != 114
        || a2[8] != 116
        || a2[9] != 101
        || a2[10] != 100 )
      {
        goto LABEL_58;
      }
      *(_WORD *)a1 = 1024;
      break;
    case 13LL:
      if ( *a2 != 110
        || a2[1] != 111
        || a2[2] != 116
        || a2[3] != 68
        || a2[4] != 101
        || a2[5] != 116
        || a2[6] != 101
        || a2[7] != 114
        || a2[8] != 109
        || a2[9] != 105
        || a2[10] != 110
        || a2[11] != 101
        || a2[12] != 100 )
      {
        goto LABEL_58;
      }
      *(_WORD *)a1 = 768;
      break;
    default:
LABEL_58:
      serde_core::private::string::from_utf8_lossy::h0d772f5e1055fc56(&v7, a2, a3, v4);
      v5 = v8;
      v6 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             v8,
             v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_817,
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
