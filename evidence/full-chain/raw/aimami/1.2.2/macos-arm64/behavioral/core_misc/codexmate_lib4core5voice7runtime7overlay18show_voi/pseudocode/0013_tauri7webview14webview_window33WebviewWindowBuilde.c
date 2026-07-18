// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x100624080 d=1
void *__fastcall tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::inner_size::hf378bab6e794452e(
        void *__dst,
        void *__src,
        double a3,
        double a4)
{
  _BYTE v5[488]; // [rsp+0h] [rbp-580h] BYREF
  _BYTE __srca[384]; // [rsp+1E8h] [rbp-398h] BYREF
  _BYTE __dsta[488]; // [rsp+368h] [rbp-218h] BYREF
  double v8; // [rsp+550h] [rbp-30h]
  double v9; // [rsp+558h] [rbp-28h]

  v8 = a4; /*0x100624092*/
  v9 = a3; /*0x100624097*/
  memcpy(__dsta, __src, sizeof(__dsta)); /*0x1006240ae*/
  memcpy(v5, __src, 0x180u); /*0x1006240c5*/
  _$LT$tauri_runtime_wry..WindowBuilderWrapper$u20$as$u20$tauri_runtime..window..WindowBuilder$GT$::inner_size::hb1f583cd4dd4b125( /*0x1006240de*/
    __srca,
    v5,
    a3,
    a4);
  memcpy(__dsta, __srca, 0x180u); /*0x1006240f9*/
  memcpy(v5, __dsta, sizeof(v5)); /*0x100624110*/
  memcpy(__src, v5, 0x1E8u); /*0x100624120*/
  return memcpy(__dst, __src, 0x438u); /*0x100624135*/
}