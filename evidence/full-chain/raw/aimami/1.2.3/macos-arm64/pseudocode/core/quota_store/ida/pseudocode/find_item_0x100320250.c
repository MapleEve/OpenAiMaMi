// __ZN13codexmate_lib4core11quota_store9find_item @ 0x100320250
__int64 __fastcall codexmate_lib::core::quota_store::find_item::h07979f80f47473f9(
        __int64 a1,
        const void *a2,
        size_t a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r12

  v3 = *(_QWORD *)(a1 + 16); /*0x10032025b*/
  if ( !v3 ) /*0x100320262*/
    return 0; /*0x1003202b1*/
  v5 = *(_QWORD *)(a1 + 8); /*0x10032026a*/
  v6 = 160 * v3; /*0x100320272*/
  while ( *(_QWORD *)(v5 + 136) != a3 || memcmp(*(const void **)(v5 + 128), a2, a3) ) /*0x1003202ad*/
  {
    v5 += 160; /*0x100320280*/
    v6 -= 160; /*0x100320287*/
    if ( !v6 ) /*0x10032028e*/
      return 0; /*0x10032028e*/
  }
  return v5; /*0x1003202b6*/
}