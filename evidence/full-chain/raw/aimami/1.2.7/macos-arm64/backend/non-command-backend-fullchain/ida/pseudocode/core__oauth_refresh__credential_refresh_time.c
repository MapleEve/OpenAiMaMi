// aimami 1.2.7 mac truly_undone deep reverse — cluster core/oauth_refresh/credential_refresh_time
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::oauth_refresh::credential_refresh_time::hb61850e25205e518 @ 0x1007f0040 size=703 lines=148 =====
unsigned __int64 __fastcall codexmate_lib::core::oauth_refresh::credential_refresh_time::hb61850e25205e518(
        unsigned int *a1,
        _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+10h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]

  result = 0;
  if ( __OFSUB__(0, a2[18]) )
  {
LABEL_2:
    *a1 = 0;
    return result;
  }
  v5 = a2[19];
  v6 = a2[20];
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
    &v22,
    v5,
    v6);
  v7 = v22;
  if ( (_DWORD)v22 )
  {
    v8 = HIDWORD(v22);
    v9 = v23;
    result = 0x8000000000000000LL;
    if ( a2[9] == 0x8000000000000000LL )
      goto LABEL_33;
  }
  else
  {
    result = codexmate_lib::core::auth::parse_iso_timestamp::h3ad70238e40015bf(v5, v6);
    if ( (result & 1) == 0 )
      goto LABEL_2;
    v14 = v13;
    v15 = v13 / 86400;
    v16 = (v14 - 86400 * v15) >> 63;
    v8 = v14 - 86400 * v15 + 86400;
    if ( v14 - 86400 * v15 >= 0 )
      v8 = v14 - 86400 * v15;
    result = v16 + v15 - 2146764485;
    if ( result < 0xFFFFFFFF00000000LL )
      goto LABEL_2;
    result = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v15 + v16 + 719163));
    if ( !(_DWORD)result )
      goto LABEL_2;
    v7 = result;
    v9 = 0;
    result = 0x8000000000000000LL;
    if ( a2[9] == 0x8000000000000000LL )
      goto LABEL_33;
  }
  result = codexmate_lib::core::oauth_refresh::decode_jwt_payload::hb265b49a8e090b45(v21, a2[10], a2[11]);
  if ( LOBYTE(v21[0]) != 6 )
  {
    v25 = v21[3];
    v24 = v21[2];
    v23 = v21[1];
    v22 = v21[0];
    v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "iat[AiMaMi][oauth-refresh] active auth ownership changed before refreshcodexmate_lib::core::oauth_refresh",
            3,
            &v22);
    if ( !v10 || *(_BYTE *)v10 != 2 )
      goto LABEL_18;
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      v26 = *(_QWORD *)(v10 + 16);
      v12 = v26 >= 0;
      goto LABEL_19;
    }
    if ( (_DWORD)v11 == 1 )
    {
      v26 = *(_QWORD *)(v10 + 16);
      v12 = 1;
    }
    else
    {
LABEL_18:
      v12 = 0;
    }
LABEL_19:
    v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("exp", 3, &v22);
    if ( v17 )
    {
      if ( *(_BYTE *)v17 == 2 )
      {
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 != 2 )
        {
          if ( (_DWORD)v18 == 1 )
          {
            v19 = *(_QWORD *)(v17 + 16);
            goto LABEL_26;
          }
          v19 = *(_QWORD *)(v17 + 16);
          if ( v19 >= 0 )
          {
LABEL_26:
            v20 = v19 - v26;
            if ( __OFSUB__(v19, v26) )
              v20 = (v19 - v26 >= 0) + 0x7FFFFFFFFFFFFFFFLL;
            if ( v26 > 0
              && v12
              && v20 > 3600
              && ((v19 - 3600 == v8
                               + 86400LL
                               * (int)(chrono::naive::date::NaiveDate::num_days_from_ce::h4ac4bdebbf1792ee(v7) - 719163))
                & (unsigned __int8)~__OFADD__(-3600, v19)
                & (v9 == 0)) == 1 )
            {
              chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::he58df7911c7a9a58(a1, v26);
              return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v21);
            }
          }
        }
      }
    }
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v21);
  }
LABEL_33:
  *a1 = v7;
  a1[1] = v8;
  a1[2] = v9;
  return result;
}

