// __ZN13codexmate_lib4core6models9CoreError16is_network_error @ 0x100349e40
char __fastcall codexmate_lib::core::models::CoreError::is_network_error::h264cac2060111438(_DWORD *a1)
{
  _DWORD *v1; // rdi
  char v2; // cl
  char result; // al

  if ( *a1 != 6 ) /*0x100349e49*/
    return 0; /*0x100349e6d*/
  v1 = a1 + 2; /*0x100349e4b*/
  v2 = reqwest::error::Error::is_connect::hb890ef19b00685f7(v1); /*0x100349e57*/
  result = 1; /*0x100349e59*/
  if ( !v2 ) /*0x100349e5d*/
    return reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(v1); /*0x100349e68*/
  return result; /*0x100349e66*/
}