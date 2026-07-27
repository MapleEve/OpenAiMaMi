// __ZN13codexmate_lib8platform19voice_trigger_macos37disable_tap_then_stop_current_runloop @ 0x1005e4da0 | 基线 same-set
void __fastcall codexmate_lib::platform::voice_trigger_macos::disable_tap_then_stop_current_runloop::h2acb8d65b7dd0e61(
        __CFMachPort *a1)
{
  __CFRunLoop *Current; // rax

  if ( a1 ) /*0x1005e4da7*/
    CGEventTapEnable(a1, 0); /*0x1005e4dab*/
  Current = CFRunLoopGetCurrent(); /*0x1005e4db0*/
  CFRunLoopStop(Current); /*0x1005e4db9*/
}