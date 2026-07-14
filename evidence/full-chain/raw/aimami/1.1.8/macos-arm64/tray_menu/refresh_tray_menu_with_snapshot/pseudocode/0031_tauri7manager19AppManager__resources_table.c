// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x1003661c0 depth=2
// tauri7manager19AppManager::resources_table
__int64 __fastcall tauri::manager::AppManager$LT$R$GT$::resources_table::hddcaae36eed2e8cc(__int64 a1)
{
  __int64 v1; // r14
  pthread_mutex_t *v2; // rdi
  bool v3; // dl
  __int64 v5; // [rsp+0h] [rbp-20h] BYREF
  bool v6; // [rsp+8h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 4896); /*0x1003661cb*/
  v2 = *(pthread_mutex_t **)(v1 + 16); /*0x1003661d6*/
  if ( !v2 ) /*0x1003661dd*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)(v1 + 16)); /*0x100366215*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x1003661df*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1003661ee*/
  {
    v3 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100366221*/
    if ( !*(_BYTE *)(v1 + 24) ) /*0x10036622b*/
      return v1 + 16; /*0x10036622b*/
LABEL_7:
    v5 = v1 + 16; /*0x10036622d*/
    v6 = v3; /*0x100366231*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100366252*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_905,
      23,
      (__int64)&v5,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_694,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_913);
  }
  v3 = 0; /*0x1003661f6*/
  if ( *(_BYTE *)(v1 + 24) ) /*0x1003661f8*/
    goto LABEL_7; /*0x1003661ff*/
  return v1 + 16; /*0x100366204*/
}