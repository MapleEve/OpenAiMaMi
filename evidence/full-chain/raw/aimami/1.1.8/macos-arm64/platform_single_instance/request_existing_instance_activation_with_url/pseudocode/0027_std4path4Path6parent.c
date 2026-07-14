// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x1010a97e0 depth=2
// std4path4Path6parent
__int64 __fastcall std::path::Path::parent::h4c3ac26770731fbb(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  bool v6; // al
  char v8; // [rsp-80h] [rbp-80h] BYREF
  _QWORD v9[2]; // [rsp-48h] [rbp-48h] BYREF
  char v10; // [rsp-38h] [rbp-38h]
  __int16 v11; // [rsp-10h] [rbp-10h]
  bool v12; // [rsp-Eh] [rbp-Eh]

  if ( a2 ) /*0x1010a97e3*/
    v6 = *a1 == 47; /*0x1010a97e8*/
  else
    v6 = 0; /*0x1010a97ed*/
  v9[0] = a1; /*0x1010a97fa*/
  v9[1] = a2; /*0x1010a97fe*/
  v10 = 6; /*0x1010a9802*/
  v12 = v6; /*0x1010a9806*/
  v11 = 513; /*0x1010a9809*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010a9817*/
    &v8,
    v9,
    a3,
    a4,
    a5,
    a6);
  if ( (unsigned __int8)(v8 - 7) >= 3u ) /*0x1010a9824*/
    return 0; /*0x1010a9838*/
  else
    return std::path::Components::as_path::he4876f57fa839c0b(v9); /*0x1010a982a*/
}