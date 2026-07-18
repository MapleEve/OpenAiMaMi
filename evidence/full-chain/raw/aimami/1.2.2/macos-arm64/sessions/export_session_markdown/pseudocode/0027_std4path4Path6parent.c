// mac 1.2.2 NEW export_session_markdown 0x10135fdc0 d=1
__int64 __fastcall std::path::Path::parent::h4c3ac26770731fbb(_BYTE *a1, __int64 a2)
{
  bool v2; // al
  char v4; // [rsp-80h] [rbp-80h] BYREF
  _QWORD v5[2]; // [rsp-48h] [rbp-48h] BYREF
  char v6; // [rsp-38h] [rbp-38h]
  __int16 v7; // [rsp-10h] [rbp-10h]
  bool v8; // [rsp-Eh] [rbp-Eh]

  if ( a2 ) /*0x10135fdc3*/
    v2 = *a1 == 47; /*0x10135fdc8*/
  else
    v2 = 0; /*0x10135fdcd*/
  v5[0] = a1; /*0x10135fdda*/
  v5[1] = a2; /*0x10135fdde*/
  v6 = 6; /*0x10135fde2*/
  v8 = v2; /*0x10135fde6*/
  v7 = 513; /*0x10135fde9*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x10135fdf7*/
    &v4,
    v5);
  if ( (unsigned __int8)(v4 - 7) >= 3u ) /*0x10135fe04*/
    return 0; /*0x10135fe18*/
  else
    return std::path::Components::as_path::he4876f57fa839c0b(v5); /*0x10135fe0a*/
}