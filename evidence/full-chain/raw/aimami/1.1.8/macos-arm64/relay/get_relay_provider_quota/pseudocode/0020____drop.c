// mac 1.1.8 get_relay_provider_quota node va=0x100b06120 depth=4
// _::drop
void __fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7d19d717653625ea(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 i; // r12
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 16); /*0x100b0612f*/
  for ( i = *(_QWORD *)(a1 + 8) + 104LL; v1-- != 0; i += 104 ) /*0x100b06133*/
  {
    v8 = *(_QWORD *)(i - 40); /*0x100b06163*/
    if ( v8 ) /*0x100b0616b*/
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v8 + 32))(i - 16, *(_QWORD *)(i - 32), *(_QWORD *)(i - 24)); /*0x100b06179*/
    v3 = *(_QWORD *)(i - 80); /*0x100b06140*/
    v4 = *(_QWORD *)(i - 72); /*0x100b06144*/
    v5 = i - 56; /*0x100b06148*/
    v6 = *(_QWORD *)(i - 64); /*0x100b0614c*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(v3 + 32))(v5, v4, v6); /*0x100b06154*/
  }
}