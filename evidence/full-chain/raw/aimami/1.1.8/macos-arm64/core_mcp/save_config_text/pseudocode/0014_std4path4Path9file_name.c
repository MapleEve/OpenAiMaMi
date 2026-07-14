// mac 1.1.8 behavioral save_config_text 0x1010a9af0 d=2
__int64 __fastcall std::path::Path::file_name::hf6c2daad91e50ebf(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  bool v6; // al
  char v8; // [rsp-80h] [rbp-80h] BYREF
  __int64 v9; // [rsp-78h] [rbp-78h]
  _QWORD v10[2]; // [rsp-48h] [rbp-48h] BYREF
  char v11; // [rsp-38h] [rbp-38h]
  __int16 v12; // [rsp-10h] [rbp-10h]
  bool v13; // [rsp-Eh] [rbp-Eh]

  if ( a2 ) /*0x1010a9af3*/
    v6 = *a1 == 47; /*0x1010a9af8*/
  else
    v6 = 0; /*0x1010a9afd*/
  v10[0] = a1; /*0x1010a9b0a*/
  v10[1] = a2; /*0x1010a9b0e*/
  v11 = 6; /*0x1010a9b12*/
  v13 = v6; /*0x1010a9b16*/
  v12 = 513; /*0x1010a9b19*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010a9b27*/
    &v8,
    v10,
    a3,
    a4,
    a5,
    a6);
  if ( v8 == 9 ) /*0x1010a9b34*/
    return v9; /*0x1010a9b36*/
  else
    return 0; /*0x1010a9b43*/
}