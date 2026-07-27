// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::config_takeover::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::config_takeover::TakeoverBackup>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h4eb4bfd6778be883 @ 0x10091b1f0 | full-body via IDA decompiler
char __fastcall _$LT$codexmate_lib..core..relay..config_takeover.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h4eb4bfd6778be883(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  char result; // al

  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x73726576 | *(_DWORD *)(a2 + 3) ^ 0x6E6F6973 )
        goto LABEL_10;
      a1[1] = 0;
      *a1 = 0;
      result = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461657263LL | *(_QWORD *)(a2 + 3) ^ 0x734D744164657461LL )
        goto LABEL_10;
      a1[1] = 1;
      *a1 = 0;
      result = 1;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6C6576654C706F74LL | *(_QWORD *)(a2 + 5) ^ 0x73656E694C6C6576LL )
      {
        if ( *(_QWORD *)a2 ^ 0x426E6F6974636573LL | *(_QWORD *)(a2 + 5) ^ 0x736B636F6C426E6FLL )
          goto LABEL_10;
        a1[1] = 3;
        *a1 = 0;
        result = 3;
      }
      else
      {
        a1[1] = 2;
        *a1 = 0;
        result = 2;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x6C616E696769726FLL | *(_QWORD *)(a2 + 6) ^ 0x6769666E6F436C61LL )
        goto LABEL_10;
      a1[1] = 4;
      *a1 = 0;
      result = 4;
      break;
    default:
LABEL_10:
      a1[1] = 5;
      *a1 = 0;
      result = 5;
      break;
  }
  return result;
}
