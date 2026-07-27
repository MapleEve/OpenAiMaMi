// __ZN13codexmate_lib8platform19voice_trigger_macos15tap_watchdog_cb @ 0x1005e2580 | 基线 same-set
void __fastcall codexmate_lib::platform::voice_trigger_macos::tap_watchdog_cb::hdd5897f20aea84a2(
        CFRunLoopTimerRef a1,
        __CFMachPort **a2)
{
  __CFMachPort *v2; // r14
  __CFRunLoop *v3; // rbx

  if ( a2 ) /*0x1005e258a*/
  {
    v2 = *a2; /*0x1005e258c*/
    v3 = a2[1]; /*0x1005e258f*/
    if ( *a2 != nullptr && v3 != nullptr ) /*0x1005e259c*/
    {
      if ( !CFMachPortIsValid(*a2) || !CGEventTapIsEnabled(v2) && (CGEventTapEnable(v2, 1), !CGEventTapIsEnabled(v2)) ) /*0x1005e25d0*/
        CFRunLoopStop(v3); /*0x1005e25e0*/
    }
  }
}