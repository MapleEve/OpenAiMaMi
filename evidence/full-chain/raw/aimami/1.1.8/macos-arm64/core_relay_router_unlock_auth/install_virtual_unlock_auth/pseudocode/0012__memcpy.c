// mac 1.1.8 behavioral install_virtual_unlock_auth 0x101130a02 d=1
// attributes: thunk
void *__cdecl memcpy(void *__dst, const void *__src, size_t __n)
{
  return _memcpy(__dst, __src, __n);
}