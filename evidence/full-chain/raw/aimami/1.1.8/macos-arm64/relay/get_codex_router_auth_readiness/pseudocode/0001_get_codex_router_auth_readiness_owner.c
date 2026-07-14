// owner_va=0x1004c7050
// owner_symbol=codexmate_lib::commands::relay::get_codex_router_auth_readiness::hbc73a173c4a6e170
// source: 反编译器 MCP (mac) decompile, live 1.1.8 universal.app x86_64 slice, 反编译就绪=true
// module=commands::relay (owner-map-118.jsonl line 28, source=func_query_clean_top_level_symbol)

__int64 __fastcall codexmate_lib::commands::relay::get_codex_router_auth_readiness::hbc73a173c4a6e170(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  _WORD *v4; // rax
  _WORD *v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+8h] [rbp-198h] BYREF
  __int64 v10; // [rsp+10h] [rbp-190h]
  char v11; // [rsp+15Dh] [rbp-43h]
  _QWORD v12[3]; // [rsp+160h] [rbp-40h] BYREF
  __int64 v13; // [rsp+178h] [rbp-28h]

  codexmate_lib::core::relay::router_unlock_auth::readiness::habfee8ab9ec6894c(v12, *a2 + 16LL); /*0x1004c7073*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(&v9, a2); /*0x1004c7082*/
  if ( v11 ) /*0x1004c708b*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v9); /*0x1004c7094*/
    BYTE1(v13) = 1; /*0x1004c7099*/
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v9); /*0x1004c70a6*/
  }
  v2 = v12[0]; /*0x1004c70ab*/
  v3 = v12[1]; /*0x1004c70af*/
  v9 = v12[2]; /*0x1004c70b7*/
  v10 = v13; /*0x1004c70c2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v9); /*0x1004c70c9*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004c70d8*/
  if ( !v4 ) /*0x1004c70e0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004c719d*/
  v5 = v4; /*0x1004c70e6*/
  *v4 = 27503; /*0x1004c70e9  -> ASCII little-endian bytes = "ok" */
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004c70ee*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c70fd*/
  if ( !v6 ) /*0x1004c7105*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004c71ae*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x1004c710b -> overlapping write, combined buffer = "Success" (7 bytes) */
  *v6 = 1667462483; /*0x1004c7112*/
  *(_QWORD *)(a1 + 72) = v2; /*0x1004c7118   -- ptr("niuniu@woyao.pro") */
  *(_QWORD *)(a1 + 80) = v3; /*0x1004c711c  -- len=16 */
  v7 = v10; /*0x1004c7127*/
  *(_QWORD *)(a1 + 88) = v9; /*0x1004c712e*/
  *(_QWORD *)(a1 + 96) = v7; /*0x1004c7132*/
  *(_QWORD *)a1 = 2; /*0x1004c7136          -- response/enum discriminant = 2 */
  *(_QWORD *)(a1 + 8) = v5; /*0x1004c713d   -- ptr("ok") */
  *(_QWORD *)(a1 + 16) = 2; /*0x1004c7141   -- len("ok")=2 */
  *(_QWORD *)(a1 + 24) = 7; /*0x1004c7149   -- len? (paired w/ "Success") */
  *(_QWORD *)(a1 + 32) = v6; /*0x1004c7151  -- ptr("Success") */
  *(_QWORD *)(a1 + 40) = 7; /*0x1004c7155   -- len("Success")=7 */
  *(_QWORD *)(a1 + 48) = 0; /*0x1004c715d*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004c7165*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004c716d*/
  *(_DWORD *)(a1 + 104) = 1; /*0x1004c7175   -- packed 4x u8 flags, see readiness() SIMD build:
                                                  byte0=has_usable_real_oauth_login,
                                                  byte1=has_usable_real_oauth_login^1 (== willUseVirtualAuth candidate),
                                                  byte2=(live_auth_state==1),
                                                  byte3=can_restore_previous_auth */
  *(_BYTE *)(a1 + 108) = 1; /*0x1004c717c*/
  return a1; /*0x1004c7183*/
}

/* refs (direct callees):
   0x100690a80 codexmate_lib::core::relay::router_unlock_auth::readiness::habfee8ab9ec6894c
   0x1005cdf60 codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3
   0x1005f0940 core::ptr::drop_in_place<RelayState>::ha31523a10c4e8151
   0x100001470 __rust_no_alloc_shim_is_unstable_v2
   0x100001430 __rust_alloc
   0x10112fd51 alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f
*/
