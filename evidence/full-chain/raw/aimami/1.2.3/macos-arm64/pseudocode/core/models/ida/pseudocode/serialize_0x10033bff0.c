// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceCaptureState$GT$9serialize @ 0x10033bff0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceCaptureState$GT$::serialize::h6ff8750e8f0e08e0(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10033bffa*/
  switch ( *a1 ) /*0x10033c00c*/
  {
    case 0: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_689; /*0x10033c00e*/
      v5 = 4; /*0x10033c015*/
      break; /*0x10033c01a*/
    case 1: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_690; /*0x10033c046*/
      v5 = 8; /*0x10033c04d*/
      break; /*0x10033c052*/
    case 2: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_691; /*0x10033c02a*/
      v5 = 9; /*0x10033c031*/
      break; /*0x10033c036*/
    case 3: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_692; /*0x10033c038*/
      v5 = 8; /*0x10033c03f*/
      break; /*0x10033c044*/
    case 4: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_693; /*0x10033c01c*/
      v5 = 10; /*0x10033c023*/
      break; /*0x10033c028*/
    case 5: /*0x10033c00c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_338; /*0x10033c054*/
      v5 = 5; /*0x10033c05b*/
      break; /*0x10033c05b*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x10033c063*/
  if ( v6 ) /*0x10033c06b*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10033c075*/
  else
    return 0; /*0x10033c06d*/
}