// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x100bb1450 d=1
unsigned __int64 *__fastcall rusqlite::path_to_cstring::h3a6b3c588767bae1(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-28h]
  unsigned __int64 v10; // [rsp+10h] [rbp-20h]
  unsigned __int64 v11; // [rsp+18h] [rbp-18h]

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x100bb146c*/
    &v8,
    a2,
    a3);
  v3 = v8; /*0x100bb1471*/
  v4 = v9; /*0x100bb1475*/
  if ( __OFSUB__(-(__int64)v8, 1) ) /*0x100bb147c*/
  {
    v5 = 0x8000000000000016LL; /*0x100bb1485*/
    v3 = v9; /*0x100bb1489*/
    v4 = v10; /*0x100bb148c*/
  }
  else
  {
    v6 = v11; /*0x100bb1491*/
    a1[3] = v10; /*0x100bb1495*/
    a1[4] = v6; /*0x100bb1499*/
    v5 = 0x8000000000000005LL; /*0x100bb149d*/
  }
  a1[1] = v3; /*0x100bb14a1*/
  a1[2] = v4; /*0x100bb14a5*/
  *a1 = v5; /*0x100bb14a9*/
  return a1; /*0x100bb14af*/
}