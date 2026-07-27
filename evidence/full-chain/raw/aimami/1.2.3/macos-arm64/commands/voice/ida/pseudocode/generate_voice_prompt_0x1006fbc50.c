// __ZN13codexmate_lib8commands5voice21generate_voice_prompt28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fbc50 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::voice::generate_voice_prompt::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9e9c7bb83655b6d0(
        __int64 *a1,
        const void *a2,
        signed __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF

  if ( a3 < 0 ) /*0x1006fbc67*/
  {
    v4 = 0; /*0x1006fbc69*/
    goto LABEL_3; /*0x1006fbc69*/
  }
  v5 = *a1; /*0x1006fbc77*/
  if ( a3 ) /*0x1006fbc7a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1006fbc7f*/
    v4 = 1; /*0x1006fbc84*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1006fbc92*/
    if ( !v6 ) /*0x1006fbc9a*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x1006fbc6c*/
    v7 = v6; /*0x1006fbc9c*/
  }
  else
  {
    v7 = 1; /*0x1006fbca4*/
  }
  memcpy((void *)v7, a2, a3); /*0x1006fbcb0*/
  v10[0] = a3; /*0x1006fbcb5*/
  v10[1] = v7; /*0x1006fbcb9*/
  v10[2] = a3; /*0x1006fbcbd*/
  tauri::Emitter::emit::h9faa5bc1843d0d3a(v9, v5, "voice-llm-token", 15, v10); /*0x1006fbcd8*/
  result = 0x8000000000000025LL; /*0x1006fbcdd*/
  if ( v9[0] != 0x8000000000000025LL ) /*0x1006fbceb*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v9); /*0x1006fbcf1*/
  return result; /*0x1006fbcf6*/
}