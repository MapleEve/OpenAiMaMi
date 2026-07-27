// __ZN13codexmate_lib4core6models1_94_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$9serialize @ 0x100343900 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::serialize::h8b95128b52c5d4ef(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10034390a*/
  switch ( *a1 ) /*0x10034391c*/
  {
    case 0: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_57; /*0x10034391e*/
      goto LABEL_8; /*0x100343925*/
    case 1: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_58; /*0x10034395a*/
      goto LABEL_8; /*0x10034395a*/
    case 2: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_970; /*0x100343930*/
      v5 = 5; /*0x100343937*/
      break; /*0x10034393c*/
    case 3: /*0x10034391c*/
      v4 = "pro20x"; /*0x10034393e*/
      v5 = 6; /*0x100343945*/
      break; /*0x10034394a*/
    case 4: /*0x10034391c*/
      v4 = "team"; /*0x100343927*/
LABEL_8:
      v5 = 4; /*0x100343961*/
      break; /*0x100343966*/
    case 5: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_82; /*0x100343968*/
      v5 = 8; /*0x10034396f*/
      break; /*0x100343974*/
    case 6: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_83; /*0x100343976*/
      v5 = 10; /*0x10034397d*/
      break; /*0x100343982*/
    case 7: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_84; /*0x10034394c*/
      v5 = 3; /*0x100343953*/
      break; /*0x100343958*/
    case 8: /*0x10034391c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_50; /*0x100343984*/
      v5 = 7; /*0x10034398b*/
      break; /*0x10034398b*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x100343990*/
  if ( v6 ) /*0x10034399b*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x1003439a5*/
  else
    return 0; /*0x10034399d*/
}