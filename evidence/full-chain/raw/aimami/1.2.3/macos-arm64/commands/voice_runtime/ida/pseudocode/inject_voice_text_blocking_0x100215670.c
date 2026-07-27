// __ZN13codexmate_lib8commands13voice_runtime26inject_voice_text_blocking @ 0x100215670 | 基线 same-set
__int64 *__fastcall codexmate_lib::commands::voice_runtime::inject_voice_text_blocking::h12eb513e1156a5a9(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  char v10; // r12
  size_t v11; // rbx
  void *v12; // rax
  __int64 v13; // r14
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-50h]
  __int64 v20; // [rsp+18h] [rbp-48h]
  _QWORD *v21; // [rsp+20h] [rbp-40h]
  __int64 v22; // [rsp+28h] [rbp-38h]
  __int64 *v23; // [rsp+30h] [rbp-30h]

  v23 = a3; /*0x100215681*/
  v5 = a2[1]; /*0x100215688*/
  v21 = a2; /*0x10021568c*/
  v6 = a2[2]; /*0x100215690*/
  v22 = v5; /*0x100215698*/
  if ( v6 >= 0x20 ) /*0x10021569c*/
    core::str::count::do_count_chars::h4875767a8f682eeb(v5, v6); /*0x1002156ab*/
  else
    core::str::count::char_count_general_case::h35f326d7c82e4f55(v5, v6); /*0x1002156a1*/
  v7 = *v23; /*0x1002156b4*/
  if ( *v23 == 0x8000000000000000LL ) /*0x1002156c4*/
  {
    v8 = 0; /*0x1002156c6*/
  }
  else
  {
    v8 = v23[1]; /*0x1002156cb*/
    v3 = v23[2]; /*0x1002156cf*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v3); /*0x1002156d9*/
  }
  v9 = v22; /*0x1002156e2*/
  codexmate_lib::platform::text_injection::inject_text::hb67dfd7c8451aecf(&v18, v22, v6, v8, v3); /*0x1002156ef*/
  if ( v18 == 0x8000000000000000LL )
  {
    v10 = v19; /*0x100215704*/
    v11 = 9LL * (unsigned __int8)v19 + 8; /*0x100215709*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v18, v9); /*0x10021570e*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x10021571b*/
    if ( !v12 ) /*0x100215723*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x1002157d9*/
    v13 = (__int64)v12; /*0x100215729*/
    v14 = (char *)&unk_1015DC8F0; /*0x100215733*/
    if ( v10 )
      v14 = "copiedToClipboardtokio_tungstenite::tls::encryption::rustlsinternal error: entered unreachable code";
    memcpy(v12, v14, v11); /*0x100215747*/
    a1[1] = v11; /*0x10021574c*/
    a1[2] = v13; /*0x100215750*/
    a1[3] = v11; /*0x100215754*/
    v15 = 0; /*0x100215758*/
  }
  else
  {
    a1[3] = v20; /*0x100215760*/
    v16 = v18; /*0x100215764*/
    a1[2] = v19; /*0x10021576c*/
    a1[1] = v16; /*0x100215770*/
    v15 = 1; /*0x100215774*/
  }
  *a1 = v15; /*0x100215779*/
  if ( v7 != 0x8000000000000000LL && v7 ) /*0x100215792*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[1], v7, 1); /*0x1002157a0*/
  if ( *v21 ) /*0x1002157a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, *v21, 1); /*0x1002157ba*/
  return a1; /*0x1002157c2*/
}