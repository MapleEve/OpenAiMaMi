// __ZN13codexmate_lib4core6models1_94_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$9serialize @ 0x100343830 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::serialize::h342874421f3557df(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10034383a*/
  switch ( *a1 ) /*0x10034384c*/
  {
    case 0: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_57; /*0x10034384e*/
      goto LABEL_8; /*0x100343855*/
    case 1: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_58; /*0x10034388a*/
      goto LABEL_8; /*0x10034388a*/
    case 2: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_970; /*0x100343860*/
      v5 = 5; /*0x100343867*/
      break; /*0x10034386c*/
    case 3: /*0x10034384c*/
      v4 = "pro20x"; /*0x10034386e*/
      v5 = 6; /*0x100343875*/
      break; /*0x10034387a*/
    case 4: /*0x10034384c*/
      v4 = "team"; /*0x100343857*/
LABEL_8:
      v5 = 4; /*0x100343891*/
      break; /*0x100343896*/
    case 5: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_82; /*0x100343898*/
      v5 = 8; /*0x10034389f*/
      break; /*0x1003438a4*/
    case 6: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_83; /*0x1003438a6*/
      v5 = 10; /*0x1003438ad*/
      break; /*0x1003438b2*/
    case 7: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_84; /*0x10034387c*/
      v5 = 3; /*0x100343883*/
      break; /*0x100343888*/
    case 8: /*0x10034384c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_50; /*0x1003438b4*/
      v5 = 7; /*0x1003438bb*/
      break; /*0x1003438bb*/
  }
  v6 = serde_json::ser::format_escaped_str::h598a256d856e248a(a2, v3, v4, v5); /*0x1003438c0*/
  if ( v6 ) /*0x1003438cb*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x1003438d5*/
  else
    return 0; /*0x1003438cd*/
}