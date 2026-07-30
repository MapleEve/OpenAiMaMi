// __ZN13codexmate_lib4core5relay17router_reconciler12RouterOnPlan10from_state @ 0x1008c2ab0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::RouterOnPlan::from_state::h2034138848607fa3(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+10h] [rbp-60h] BYREF
  __int64 v10; // [rsp+18h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha2b5bf0b978d3860( /*0x1008c2ad9*/
    &v15,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 232LL * *(_QWORD *)(a2 + 16));
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h101a7c327f6af5d5(&v12, a2); /*0x1008c2ae5*/
  v4 = codexmate_lib::core::relay::router_unlock_auth::should_use_no_account_mode::h13335b2659e146b3( /*0x1008c2afa*/
         a3,
         *(unsigned __int8 *)(a2 + 317));
  if ( v4 ) /*0x1008c2aff*/
  {
    codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference::h2650e5fed1d457cb( /*0x1008c2b2f*/
      &v9,
      v16,
      v17,
      v13,
      v14,
      *(_QWORD *)(a2 + 136),
      *(_QWORD *)(a2 + 144),
      1);
  }
  else
  {
    v9 = 0; /*0x1008c2b36*/
    v10 = 8; /*0x1008c2b3e*/
    v11 = 0; /*0x1008c2b46*/
  }
  *(_QWORD *)(a1 + 16) = v17; /*0x1008c2b52*/
  v5 = v15; /*0x1008c2b56*/
  *(_QWORD *)(a1 + 8) = v16; /*0x1008c2b5e*/
  *(_QWORD *)a1 = v5; /*0x1008c2b62*/
  v6 = v13; /*0x1008c2b69*/
  *(_QWORD *)(a1 + 24) = v12; /*0x1008c2b6d*/
  *(_QWORD *)(a1 + 32) = v6; /*0x1008c2b71*/
  *(_QWORD *)(a1 + 40) = v14; /*0x1008c2b79*/
  *(_BYTE *)(a1 + 72) = v4; /*0x1008c2b7d*/
  v7 = v10; /*0x1008c2b85*/
  *(_QWORD *)(a1 + 48) = v9; /*0x1008c2b89*/
  *(_QWORD *)(a1 + 56) = v7; /*0x1008c2b8d*/
  *(_QWORD *)(a1 + 64) = v11; /*0x1008c2b95*/
  return a1; /*0x1008c2b9c*/
}