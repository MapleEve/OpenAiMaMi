// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x100626f50 d=1
void *__fastcall tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::position::h86000f74c4553f64(
        void *__dst,
        void *__src)
{
  _BYTE v3[488]; // [rsp+0h] [rbp-570h] BYREF
  _BYTE __srca[384]; // [rsp+1E8h] [rbp-388h] BYREF
  _BYTE __dsta[488]; // [rsp+368h] [rbp-208h] BYREF

  memcpy(__dsta, __src, sizeof(__dsta)); /*0x100626f74*/
  memcpy(v3, __src, 0x180u); /*0x100626f8b*/
  _$LT$tauri_runtime_wry..WindowBuilderWrapper$u20$as$u20$tauri_runtime..window..WindowBuilder$GT$::position::h679b98ba0b2e8fab( /*0x100626fa0*/
    __srca,
    v3,
    0.0,
    0.0);
  memcpy(__dsta, __srca, 0x180u); /*0x100626fbb*/
  memcpy(v3, __dsta, sizeof(v3)); /*0x100626fd2*/
  memcpy(__src, v3, 0x1E8u); /*0x100626fe2*/
  return memcpy(__dst, __src, 0x438u); /*0x100626ff7*/
}