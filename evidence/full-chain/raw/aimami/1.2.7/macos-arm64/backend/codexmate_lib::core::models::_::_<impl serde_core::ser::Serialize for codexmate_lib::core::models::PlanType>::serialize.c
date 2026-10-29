// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::models::_::_<impl serde_core::ser::Serialize for codexmate_lib::core::models::PlanType>::serialize::h75a71d3e8534a5f0; addr: 0x100277210; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::serialize::h75a71d3e8534a5f0(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10027721a*/
  switch ( *a1 ) /*0x10027722c*/
  {
    case 0: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1064; /*0x10027722e*/
      goto LABEL_11; /*0x100277235*/
    case 1: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1065; /*0x100277278*/
      v5 = 2; /*0x10027727f*/
      break; /*0x100277284*/
    case 2: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1066; /*0x100277253*/
      goto LABEL_11; /*0x10027725a*/
    case 3: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1067; /*0x10027725c*/
      v5 = 5; /*0x100277263*/
      break; /*0x100277268*/
    case 4: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1068; /*0x100277237*/
      v5 = 6; /*0x10027723e*/
      break; /*0x100277243*/
    case 5: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1069; /*0x100277286*/
      v5 = 6; /*0x10027728d*/
      break; /*0x100277292*/
    case 6: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1070; /*0x100277294*/
LABEL_11:
      v5 = 4; /*0x10027729b*/
      break; /*0x1002772a0*/
    case 7: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1071; /*0x10027726a*/
      v5 = 8; /*0x100277271*/
      break; /*0x100277276*/
    case 8: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1072; /*0x1002772b0*/
      v5 = 10; /*0x1002772b7*/
      break; /*0x1002772b7*/
    case 9: /*0x10027722c*/
      v4 = (int *)&anon_8cf26f36e03587b9a54b9e7945b707cc_1073; /*0x100277245*/
      v5 = 3; /*0x10027724c*/
      break; /*0x100277251*/
    case 0xA: /*0x10027722c*/
      v4 = &anon_8cf26f36e03587b9a54b9e7945b707cc_301; /*0x1002772a2*/
      v5 = 7; /*0x1002772a9*/
      break; /*0x1002772ae*/
  }
  v6 = serde_json::ser::format_escaped_str::h0a402b2cc0a935bd(a2, v3, v4, v5); /*0x1002772bc*/
  if ( v6 ) /*0x1002772c7*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x1002772d1*/
  else
    return 0; /*0x1002772c9*/
}