// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x101360010 d=1
__int64 __fastcall std::path::Path::extension::hbb56a39ecf8d3771(_BYTE *a1, __int64 a2)
{
  bool v2; // al
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char v7; // [rsp-80h] [rbp-80h] BYREF
  _WORD *v8; // [rsp-78h] [rbp-78h]
  __int64 v9; // [rsp-70h] [rbp-70h]
  _QWORD v10[2]; // [rsp-48h] [rbp-48h] BYREF
  char v11; // [rsp-38h] [rbp-38h]
  __int16 v12; // [rsp-10h] [rbp-10h]
  bool v13; // [rsp-Eh] [rbp-Eh]

  if ( a2 ) /*0x101360013*/
    v2 = *a1 == 47; /*0x101360018*/
  else
    v2 = 0; /*0x10136001d*/
  v10[0] = a1; /*0x10136002a*/
  v10[1] = a2; /*0x10136002e*/
  v11 = 6; /*0x101360032*/
  v13 = v2; /*0x101360036*/
  v12 = 513; /*0x101360039*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x101360047*/
    &v7,
    v10);
  result = 0; /*0x10136004c*/
  if ( v7 == 9 ) /*0x10136005b*/
  {
    if ( v9 == 2 && *v8 == 11822 ) /*0x101360070*/
    {
      return 0; /*0x101360072*/
    }
    else
    {
      result = 0; /*0x10136007d*/
      v4 = v9; /*0x10136007f*/
      while ( (_WORD *)((char *)v8 + v4) != v8 ) /*0x101360097*/
      {
        v5 = v4 - 1; /*0x101360099*/
        if ( *((_BYTE *)v8 + --v4) == 46 ) /*0x10136009d*/
        {
          result = (__int64)v8 + v5 + 1; /*0x1013600b0*/
          if ( !v5 ) /*0x1013600b8*/
            return 0; /*0x1013600b8*/
          return result; /*0x1013600b8*/
        }
      }
    }
  }
  return result; /*0x10136007c*/
}