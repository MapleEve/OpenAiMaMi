// mac 1.2.2 NEW write_client_debug_log 0x101361610 d=3
const char *__fastcall std::thread::thread::Thread::name::h45d326ef0fad982b(__int64 a1)
{
  const char *result; // rax

  result = *(const char **)(*(_QWORD *)a1 + 24LL); /*0x101361617*/
  if ( !result ) /*0x10136161e*/
  {
    result = nullptr; /*0x101361630*/
    if ( std::thread::main_thread::MAIN::h48e239647dfc8aeb ) /*0x101361635*/
    {
      if ( std::thread::main_thread::MAIN::h48e239647dfc8aeb == *(_QWORD *)(*(_QWORD *)a1 + 16LL) ) /*0x101361642*/
        return "mainhighstophttpJsonrectMovemovecell"; /*0x101361642*/
    }
  }
  return result; /*0x101361627*/
}