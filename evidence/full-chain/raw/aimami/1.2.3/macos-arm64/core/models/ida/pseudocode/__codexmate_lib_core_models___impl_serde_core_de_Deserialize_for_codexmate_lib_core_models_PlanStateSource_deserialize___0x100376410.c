// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::PlanStateSource>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_bytes::h7ebf0b6e0f37abaa @ 0x100376410 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanStateSource$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_bytes::h7ebf0b6e0f37abaa(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-20h]
  __int64 v9; // [rsp+18h] [rbp-18h]

  result = a1;
  if ( a3 == 3 )
  {
    if ( *a2 == 106 && a2[1] == 119 && a2[2] == 116 )
    {
      *(_WORD *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 6 )
  {
    if ( *a2 == 114 && a2[1] == 101 && a2[2] == 109 && a2[3] == 111 && a2[4] == 116 && a2[5] == 101 )
    {
      *(_WORD *)a1 = 256;
      return result;
    }
  }
  else if ( a3 == 5 && *a2 == 117 && a2[1] == 115 && a2[2] == 97 && a2[3] == 103 && a2[4] == 101 )
  {
    *(_WORD *)a1 = 512;
    return result;
  }
  serde_core::private::string::from_utf8_lossy::h0d772f5e1055fc56(&v7, a2, a3, a4);
  v5 = v8;
  v6 = serde_core::de::Error::unknown_variant::haeda023a80886faa(v8, v9, &anon_b0ee9adff4519c22b647af231a5a39fa_645, 3);
  result = a1;
  *(_QWORD *)(a1 + 8) = v6;
  *(_BYTE *)a1 = 1;
  if ( 2 * v7 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1);
    return a1;
  }
  return result;
}
