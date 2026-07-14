// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x101130a02 depth=1
// _memcpy
// attributes: thunk
void *__cdecl memcpy(void *__dst, const void *__src, size_t __n)
{
  return _memcpy(__dst, __src, __n);
}