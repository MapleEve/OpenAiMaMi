// mac 1.2.2 NEW write_client_debug_log 0x101361b50 d=3
__int64 std::thread::current::current::hd610940328775657()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // rt0

  std::thread::current::CURRENT::h27998f77ab2217d4(); /*0x101361b5b*/
  v1 = *v0; /*0x101361b5d*/
  if ( v1 <= 2 ) /*0x101361b64*/
    return std::thread::current::init_current::hd6a81d13ca34ced7(v1); /*0x101361b77*/
  v2 = _InterlockedIncrement64((volatile signed __int64 *)(v1 - 16)); /*0x101361b66*/
  if ( (v2 < 0) ^ __OFSUB__(v1, 2) | (v2 == 0) ) /*0x101361b6b*/
    BUG(); /*0x101361b7c*/
  return v1 - 16; /*0x101361b71*/
}