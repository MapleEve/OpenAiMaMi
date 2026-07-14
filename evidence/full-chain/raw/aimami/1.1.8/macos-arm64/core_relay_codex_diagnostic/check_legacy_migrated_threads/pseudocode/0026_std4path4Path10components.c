// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1010a8ac0 depth=2
// std4path4Path10components
__int64 __fastcall std::path::Path::components::he8b0f71a48373be5(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // cl

  result = a1; /*0x1010a8ac4*/
  if ( a3 ) /*0x1010a8aca*/
    v4 = *a2 == 47; /*0x1010a8acf*/
  else
    v4 = 0; /*0x1010a8ad4*/
  *(_QWORD *)a1 = a2; /*0x1010a8ad6*/
  *(_QWORD *)(a1 + 8) = a3; /*0x1010a8ad9*/
  *(_BYTE *)(a1 + 16) = 6; /*0x1010a8add*/
  *(_BYTE *)(a1 + 58) = v4; /*0x1010a8ae1*/
  *(_WORD *)(a1 + 56) = 513; /*0x1010a8ae4*/
  return result; /*0x1010a8aea*/
}