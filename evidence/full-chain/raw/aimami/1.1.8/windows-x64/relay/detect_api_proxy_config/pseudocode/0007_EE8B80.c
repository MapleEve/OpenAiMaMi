// win 1.1.8 detect_api_proxy_config node va=0x140ee8b80 depth=1
// EE8B80
bool __fastcall sub_140EE8B80(volatile signed __int64 *a1)
{
  return _InterlockedCompareExchange64(a1, 132, 204) != 204; /*0x140ee8b92*/
}