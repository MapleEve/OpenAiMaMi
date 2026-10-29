// aimami 1.2.7 mac truly_undone deep reverse — cluster core/repository/build_account_token_status
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::repository::build_account_token_status::h5275456e85dd9a7a @ 0x100270790 size=176 lines=47 =====
__int64 __fastcall codexmate_lib::core::repository::build_account_token_status::h5275456e85dd9a7a(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  int v6; // edx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdx
  char v10; // r15
  char v12[8]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  int v15; // [rsp+28h] [rbp-38h]
  __int64 *v16; // [rsp+30h] [rbp-30h]

  v16 = a2;
  v14 = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2, a3, a4);
  v15 = v6;
  v7 = 0;
  std::time::SystemTime::duration_since::had059553cab94f96(v12, &v14, 0, 0);
  v8 = 0;
  if ( !v12[0] )
    v8 = v13;
  if ( !__OFSUB__(0, *(_QWORD *)(a3 + 72)) )
  {
    if ( (codexmate_lib::core::oauth_refresh::token_remaining_seconds::h44a131ba6534d5b8(*(_QWORD *)(a3 + 80)) & 1) != 0 )
    {
      v4 = v8 + v9;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
  }
  v10 = 4;
  if ( *v16 < 0 )
    v10 = *v16;
  codexmate_lib::core::auth::credential_generation::h62ee2c51d26382c6(a1 + 16, a3);
  *(_BYTE *)(a1 + 40) = v10;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}

