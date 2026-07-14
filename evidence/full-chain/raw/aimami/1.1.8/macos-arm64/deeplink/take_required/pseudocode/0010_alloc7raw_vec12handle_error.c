// mac 1.1.8 BACKEND-ONLY take_required node 0x10112fd51 depth=2
// alloc7raw_vec12handle_error
void __fastcall __noreturn alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__int64 a1, __int64 a2)
{
  if ( !a1 ) /*0x10112fd58*/
    alloc::raw_vec::capacity_overflow::h552f8d1ab53f9d61(); /*0x10112fd5a*/
  alloc::alloc::handle_alloc_error::h450e44845847d219(a1, a2); /*0x10112fd5f*/
}