// __ZN13codexmate_lib4core5relay18transition_journal5clear @ 0x10032a890 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // r15
  void *v6; // rbx
  size_t v7; // r14
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-D8h]
  __int64 v22; // [rsp+28h] [rbp-C8h]
  __int64 v23; // [rsp+30h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+50h] [rbp-A0h]
  __int64 v25; // [rsp+A8h] [rbp-48h] BYREF
  void *__src; // [rsp+B0h] [rbp-40h]
  size_t __n; // [rsp+B8h] [rbp-38h]
  __int64 v28; // [rsp+C0h] [rbp-30h]

  codexmate_lib::core::relay::transition_journal::read::h98e7602a0e4c21b7(&v20, a1); /*0x10032a8b1*/
  if ( __OFSUB__(0, v20) ) /*0x10032a8b8*/
  {
    v1 = *(_QWORD *)(a1 + 584); /*0x10032a8c1*/
    v2 = *(_QWORD *)(a1 + 592); /*0x10032a8c8*/
  }
  else
  {
    v3 = v20; /*0x10032a8d4*/
    v4 = v21; /*0x10032a8db*/
    v5 = v22; /*0x10032a8e2*/
    v28 = v23; /*0x10032a8f0*/
    v1 = *(_QWORD *)(a1 + 584); /*0x10032a8fb*/
    v2 = *(_QWORD *)(a1 + 592); /*0x10032a902*/
    codexmate_lib::core::relay::transition_journal::append_event::h7266986f42fdaeea( /*0x10032a92b*/
      v1,
      v2,
      v24,
      "clearedaimai1",
      7,
      "transition completed or already stableclearedaimai1",
      38);
    if ( v3 ) /*0x10032a933*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x10032a940*/
    if ( 2 * v5 ) /*0x10032a945*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v5, 1); /*0x10032a95e*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v25, v1, v2, &unk_1015E43EF, 30); /*0x10032a97a*/
  v6 = __src; /*0x10032a97f*/
  v7 = __n; /*0x10032a983*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v20, __src, __n); /*0x10032a994*/
  if ( (_BYTE)v20 ) /*0x10032a9a0*/
  {
    result = v21; /*0x10032a9a2*/
    if ( (v21 & 3) == 1 ) /*0x10032a9b1*/
    {
      v13 = v21 - 1; /*0x10032aa0f*/
      v14 = *(_QWORD *)(v21 - 1); /*0x10032aa13*/
      v15 = *(_QWORD *)(v21 + 7); /*0x10032aa17*/
      if ( *(_QWORD *)v15 ) /*0x10032aa1b*/
        (*(void (__fastcall **)(__int64))v15)(v14); /*0x10032aa27*/
      v16 = *(_QWORD *)(v15 + 8); /*0x10032aa29*/
      if ( v16 ) /*0x10032aa30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x10032aa39*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x10032aa4b*/
      v9 = v25; /*0x10032aa50*/
      if ( v25 ) /*0x10032aa57*/
        goto LABEL_10; /*0x10032aa57*/
    }
    else
    {
      v9 = v25; /*0x10032a9b3*/
      if ( v25 ) /*0x10032a9ba*/
      {
LABEL_10:
        v10 = 1; /*0x10032a9bc*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v9, v10); /*0x10032a9c1*/
      }
    }
  }
  else
  {
    v11 = v25; /*0x10032a9cb*/
    v12 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v6, v7); /*0x10032a9da*/
    if ( v11 ) /*0x10032a9e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v11, 1); /*0x10032a9ed*/
    result = v12 & 3; /*0x10032a9f5*/
    if ( (_DWORD)result == 1 ) /*0x10032a9fb*/
    {
      v6 = (void *)(v12 - 1); /*0x10032aa62*/
      v17 = *(_QWORD *)(v12 - 1); /*0x10032aa65*/
      v18 = *(_QWORD *)(v12 + 7); /*0x10032aa69*/
      if ( *(_QWORD *)v18 ) /*0x10032aa6d*/
        (*(void (__fastcall **)(_QWORD))v18)(*(_QWORD *)(v12 - 1)); /*0x10032aa79*/
      v19 = *(_QWORD *)(v18 + 8); /*0x10032aa7b*/
      if ( v19 ) /*0x10032aa83*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x10032aa8d*/
      v9 = 24; /*0x10032aa92*/
      v10 = 8; /*0x10032aa97*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v9, v10); /*0x10032aa9c*/
    }
  }
  return result; /*0x10032a9fd*/
}