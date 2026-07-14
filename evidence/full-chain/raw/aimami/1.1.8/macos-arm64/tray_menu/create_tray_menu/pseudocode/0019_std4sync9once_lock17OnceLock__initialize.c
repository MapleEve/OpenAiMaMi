// mac 1.1.8 BACKEND-ONLY create_tray_menu node 0x1010fb7e8 depth=2
// std4sync9once_lock17OnceLock::initialize
signed __int64 __fastcall std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h9d69757b532c22a5(
        volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  _QWORD v2[2]; // [rsp-28h] [rbp-28h] BYREF
  _QWORD *v3; // [rsp-18h] [rbp-18h] BYREF
  char v4; // [rsp-9h] [rbp-9h] BYREF

  result = *a1; /*0x1010fb7e8*/
  if ( *a1 ) /*0x1010fb7e8*/
  {
    v2[0] = a1 + 1; /*0x1010fb801*/
    v2[1] = &v4; /*0x1010fb808*/
    v3 = v2; /*0x1010fb810*/
    return std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x1010fb824*/
             a1,
             1,
             (__int64)&v3,
             (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_344,
             (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_338);
  }
  return result; /*0x1010fb7f0*/
}