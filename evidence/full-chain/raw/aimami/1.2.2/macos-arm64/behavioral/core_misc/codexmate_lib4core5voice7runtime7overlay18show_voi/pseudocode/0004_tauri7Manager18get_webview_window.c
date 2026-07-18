// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x100546320 d=1
_QWORD *__fastcall tauri::Manager::get_webview_window::he0735f023a9a1cd3(_QWORD *__dst, __int64 a2)
{
  _BYTE v3[896]; // [rsp+8h] [rbp-878h] BYREF
  _DWORD __src[90]; // [rsp+388h] [rbp-4F8h] BYREF
  _BYTE v5[536]; // [rsp+4F0h] [rbp-390h] BYREF
  _BYTE __dsta[376]; // [rsp+708h] [rbp-178h] BYREF

  tauri::manager::AppManager$LT$R$GT$::get_webview::hfb62e084fe971774(__src, *(_QWORD *)(a2 + 136) + 16LL); /*0x100546343*/
  if ( __src[0] == 3 ) /*0x10054634f*/
  {
    *__dst = 3; /*0x100546351*/
  }
  else
  {
    memcpy(__dsta, __src, 0x168u); /*0x100546373*/
    tauri::webview::Webview$LT$R$GT$::window::h84dee69862aaa650(v5); /*0x100546382*/
    if ( (unsigned __int8)tauri::window::Window$LT$R$GT$::is_webview_window::hd3b6e97a492a4491(v5, __src) ) /*0x10054638e*/
    {
      memcpy(v3, v5, 0x218u); /*0x1005463ad*/
      memcpy(&v3[536], __dsta, 0x168u); /*0x1005463c5*/
      memcpy(__dst, v3, 0x380u); /*0x1005463d5*/
    }
    else
    {
      *__dst = 3; /*0x1005463dc*/
      core::ptr::drop_in_place$LT$tauri..window..Window$GT$::hfe47e84740130a13(v5); /*0x1005463ea*/
      core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(__dsta); /*0x1005463f6*/
    }
  }
  return __dst; /*0x1005463fe*/
}