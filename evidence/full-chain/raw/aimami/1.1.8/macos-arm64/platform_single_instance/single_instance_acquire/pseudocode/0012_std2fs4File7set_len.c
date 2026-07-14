// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x10109b420 depth=1
// std2fs4File7set_len
__int64 __fastcall std::fs::File::set_len::h17c826d1834dc19c(int *a1, off_t a2)
{
  int v2; // r15d
  __int64 v3; // r14
  __int64 v4; // rax

  if ( a2 < 0 ) /*0x10109b42d*/
    return std::io::error::Error::new::h860294db57bd1429(20); /*0x10109b486*/
  v2 = *a1; /*0x10109b432*/
  v3 = 0; /*0x10109b435*/
  while ( ftruncate(v2, a2) == -1 ) /*0x10109b44e*/
  {
    v4 = *__error(); /*0x10109b455*/
    if ( v4 != 4 ) /*0x10109b45c*/
      return (v4 << 32) | 2; /*0x10109b466*/
  }
  return v3; /*0x10109b470*/
}