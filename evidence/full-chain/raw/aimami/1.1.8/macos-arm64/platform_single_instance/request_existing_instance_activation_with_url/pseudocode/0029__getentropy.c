// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x101130930 depth=2
// _getentropy
// attributes: thunk
int __cdecl getentropy(void *buffer, size_t size)
{
  return _getentropy(buffer, size);
}