// mac 1.1.8 test_relay_provider_stream node va=0x1006e44b0 depth=3
// core3ptr96drop_in_place::b::d
void __fastcall core::ptr::drop_in_place$LT$$u5b$http..header..map..Bucket$LT$http..header..value..HeaderValue$GT$$u5d$$GT$::h2cb5ff9d3370c342(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // r15
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v9; // rax

  for ( i = a1 + 104; a2-- != 0; i += 104 ) /*0x1006e44c1*/
  {
    v9 = *(_QWORD *)(i - 40); /*0x1006e44f3*/
    if ( v9 ) /*0x1006e44fa*/
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v9 + 32))(i - 16, *(_QWORD *)(i - 32), *(_QWORD *)(i - 24)); /*0x1006e4508*/
    v4 = *(_QWORD *)(i - 80); /*0x1006e44d0*/
    v5 = *(_QWORD *)(i - 72); /*0x1006e44d4*/
    v6 = i - 56; /*0x1006e44d8*/
    v7 = *(_QWORD *)(i - 64); /*0x1006e44dc*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(v4 + 32))(v6, v5, v7); /*0x1006e44e4*/
  }
}