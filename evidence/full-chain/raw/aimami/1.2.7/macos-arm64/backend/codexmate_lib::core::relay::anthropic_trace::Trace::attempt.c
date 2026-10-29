// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::attempt::h0690b17a06f1c211; addr: 0x1005dab70; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::attempt::h0690b17a06f1c211(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  _BYTE *v7; // rdx
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // rdx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  char v18; // al
  _BYTE *v19; // r12
  _QWORD v20[3]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-90h]
  __int64 v23; // [rsp+38h] [rbp-88h] BYREF
  __int64 v24; // [rsp+40h] [rbp-80h]
  __int64 v25; // [rsp+48h] [rbp-78h]
  __int64 v26; // [rsp+50h] [rbp-70h]
  __int64 v27; // [rsp+58h] [rbp-68h] BYREF
  __int64 v28; // [rsp+60h] [rbp-60h]
  __int64 v29; // [rsp+68h] [rbp-58h]
  __int64 v30; // [rsp+70h] [rbp-50h]
  __int64 v31; // [rsp+78h] [rbp-48h] BYREF
  _DWORD *v32; // [rsp+80h] [rbp-40h]
  __int64 v33; // [rsp+88h] [rbp-38h]
  __int64 v34; // [rsp+90h] [rbp-30h]

  v5 = *a1; /*0x1005dab8a*/
  v6 = *(_QWORD *)(*a1 + 56); /*0x1005dab8d*/
  if ( !v6 ) /*0x1005dab94*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v5 + 56); /*0x1005dae3f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x1005dab9a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005dabaa*/
  {
    v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6); /*0x1005dae47*/
    v8 = *(_DWORD *)(v5 + 352) + 1; /*0x1005dae57*/
    *(_DWORD *)(v5 + 352) = v8; /*0x1005dae5a*/
    if ( !v18 ) /*0x1005dae63*/
      goto LABEL_5; /*0x1005dae63*/
    v7 = (_BYTE *)(v5 + 64); /*0x1005dae69*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005dae7e*/
      goto LABEL_5; /*0x1005dae7e*/
  }
  else
  {
    v7 = (_BYTE *)(v5 + 64); /*0x1005dabb6*/
    v8 = *(_DWORD *)(v5 + 352) + 1; /*0x1005dabc5*/
    *(_DWORD *)(v5 + 352) = v8; /*0x1005dabc8*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005dabe0*/
      goto LABEL_5; /*0x1005dabe0*/
  }
  v19 = v7; /*0x1005dae84*/
  if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6) ) /*0x1005dae87*/
    *v19 = 1; /*0x1005dae94*/
LABEL_5:
  v9 = *(_QWORD *)(v5 + 56); /*0x1005dabe6*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v9); /*0x1005dabea*/
  v21[0] = 0; /*0x1005dabef*/
  v22 = 0; /*0x1005dabfa*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, a2, v10); /*0x1005dac05*/
  v11 = 7; /*0x1005dac0a*/
  v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005dac1a*/
  if ( !v12 ) /*0x1005dac22*/
    goto LABEL_21; /*0x1005dac22*/
  *(_DWORD *)((char *)v12 + 3) = 1953525093; /*0x1005dac28*/
  *v12 = 1702130785; /*0x1005dac2f*/
  v31 = 7; /*0x1005dac35*/
  v32 = v12; /*0x1005dac3d*/
  v33 = 7; /*0x1005dac41*/
  LOBYTE(v23) = 2; /*0x1005dac4c*/
  v24 = 0; /*0x1005dac53*/
  v25 = v8; /*0x1005dac5b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v27, v21, &v31, &v23); /*0x1005dac75*/
  if ( (_BYTE)v27 != 6 ) /*0x1005dac7e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v27); /*0x1005dac84*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v27, v21, v13); /*0x1005dac89*/
  v11 = 12; /*0x1005dac8e*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005dac9e*/
  if ( !v14 ) /*0x1005daca6*/
    goto LABEL_21; /*0x1005daca6*/
  qmemcpy(v14, "continuation", 12); /*0x1005dacb6*/
  v31 = 12; /*0x1005dacc0*/
  v32 = v14; /*0x1005dacc8*/
  v33 = 12; /*0x1005daccc*/
  LOBYTE(v23) = 1; /*0x1005dacd4*/
  BYTE1(v23) = a3; /*0x1005dacdb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v27, v21, &v31, &v23); /*0x1005dacf8*/
  if ( (_BYTE)v27 != 6 ) /*0x1005dad01*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v27); /*0x1005dad07*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v27, v21, v15); /*0x1005dad0c*/
  v11 = 5; /*0x1005dad11*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005dad21*/
  if ( !v16 ) /*0x1005dad29*/
LABEL_21:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v11); /*0x1005daed3*/
  *(_BYTE *)(v16 + 4) = 101; /*0x1005dad32*/
  *(_DWORD *)v16 = 1885431923; /*0x1005dad36*/
  v20[0] = 5; /*0x1005dad3c*/
  v20[1] = v16; /*0x1005dad47*/
  v20[2] = 5; /*0x1005dad4e*/
  codexmate_lib::core::relay::anthropic_trace::request_shape::h669d07fb314d728d(&v23, a2, 1u); /*0x1005dad68*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h36f13a05a36237ce( /*0x1005dad78*/
    &v27,
    &v23);
  if ( (_BYTE)v27 == 6 ) /*0x1005dad81*/
  {
    v31 = v28; /*0x1005daea2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005daec4*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
      43,
      &v31,
      &off_101AACF78,
      &off_101AAC6C8);
  }
  v34 = v30; /*0x1005dad8b*/
  v33 = v29; /*0x1005dad93*/
  v32 = (_DWORD *)v28; /*0x1005dad9f*/
  v31 = v27; /*0x1005dada3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v27, v21, v20, &v31); /*0x1005dadbd*/
  if ( (_BYTE)v27 != 6 ) /*0x1005dadc6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v27); /*0x1005dadcc*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v23); /*0x1005dadd8*/
  v24 = v21[0]; /*0x1005dadeb*/
  v25 = v21[1]; /*0x1005dadef*/
  v26 = v22; /*0x1005dadfa*/
  LOBYTE(v23) = 5; /*0x1005dadfe*/
  return codexmate_lib::core::relay::anthropic_trace::Inner::emit::h84842d22e12e8a46( /*0x1005dae24*/
           v5 + 16,
           (__int64)"sendtailload&lt;&gt;list\r\n\r\nsizeheadHttp",
           4,
           (__int64)&v23);
}