// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::models::_::_<impl serde_core::ser::Serialize for codexmate_lib::core::models::PlanType>::serialize::hb323fa4f8ba5e504; addr: 0x100277310; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::serialize::hb323fa4f8ba5e504(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10027731a*/
  switch ( *a1 ) /*0x10027732c*/
  {
    case 0: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1064; /*0x10027732e*/
      goto LABEL_11; /*0x100277335*/
    case 1: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1065; /*0x100277378*/
      v5 = 2; /*0x10027737f*/
      break; /*0x100277384*/
    case 2: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1066; /*0x100277353*/
      goto LABEL_11; /*0x10027735a*/
    case 3: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1067; /*0x10027735c*/
      v5 = 5; /*0x100277363*/
      break; /*0x100277368*/
    case 4: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1068; /*0x100277337*/
      v5 = 6; /*0x10027733e*/
      break; /*0x100277343*/
    case 5: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1069; /*0x100277386*/
      v5 = 6; /*0x10027738d*/
      break; /*0x100277392*/
    case 6: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1070; /*0x100277394*/
LABEL_11:
      v5 = 4; /*0x10027739b*/
      break; /*0x1002773a0*/
    case 7: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1071; /*0x10027736a*/
      v5 = 8; /*0x100277371*/
      break; /*0x100277376*/
    case 8: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1072; /*0x1002773b0*/
      v5 = 10; /*0x1002773b7*/
      break; /*0x1002773b7*/
    case 9: /*0x10027732c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1073; /*0x100277345*/
      v5 = 3; /*0x10027734c*/
      break; /*0x100277351*/
    case 0xA: /*0x10027732c*/
      v4 = &anon_8cf26f36e03587b9a54b9e7945b707cc_301; /*0x1002773a2*/
      v5 = 7; /*0x1002773a9*/
      break; /*0x1002773ae*/
  }
  v6 = serde_json::ser::format_escaped_str::h15fd1e57d675e88a(a2, v3, v4, v5); /*0x1002773bc*/
  if ( v6 ) /*0x1002773c7*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x1002773d1*/
  else
    return 0; /*0x1002773c9*/
}