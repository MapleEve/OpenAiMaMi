// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::McpTransport>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h92baf78a1b9c44ba @ 0x100374dd0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..McpTransport$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h92baf78a1b9c44ba(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h]
  __int64 v8; // [rsp+18h] [rbp-18h]

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *a2 != 115 || a2[1] != 115 || a2[2] != 101 )
        goto LABEL_26;
      *(_WORD *)a1 = 512;
      break;
    case 4LL:
      if ( *a2 != 104 || a2[1] != 116 || a2[2] != 116 || a2[3] != 112 )
        goto LABEL_26;
      *(_WORD *)a1 = 256;
      break;
    case 5LL:
      if ( *a2 != 115 || a2[1] != 116 || a2[2] != 100 || a2[3] != 105 || a2[4] != 111 )
        goto LABEL_26;
      *(_WORD *)a1 = 0;
      break;
    case 7LL:
      if ( *a2 != 117 || a2[1] != 110 || a2[2] != 107 || a2[3] != 110 || a2[4] != 111 || a2[5] != 119 || a2[6] != 110 )
        goto LABEL_26;
      *(_WORD *)a1 = 768;
      break;
    default:
LABEL_26:
      serde_core::private::string::from_utf8_lossy::h0d772f5e1055fc56(&v6, a2, a3, a3 - 3);
      v4 = v7;
      v5 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             v7,
             v8,
             &anon_b0ee9adff4519c22b647af231a5a39fa_1012,
             4);
      result = a1;
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)a1 = 1;
      if ( 2 * v6 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, 1);
        result = a1;
      }
      break;
  }
  return result;
}
