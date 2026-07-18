// mac 1.2.2 NEW export_session_markdown 0x100a5ac90 d=1
__int64 __fastcall alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hd138e1ac11e788b5(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = a1[2]; /*0x100a5aca0*/
  if ( v2 == *a1 ) /*0x100a5aca7*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he1dc941f57474ec4(a1); /*0x100a5acac*/
  result = a1[1]; /*0x100a5acb1*/
  v4 = v2 << 6; /*0x100a5acb8*/
  *(_QWORD *)(result + v4 + 56) = a2[7]; /*0x100a5acc0*/
  *(_QWORD *)(result + v4 + 48) = a2[6]; /*0x100a5acc9*/
  *(_QWORD *)(result + v4 + 40) = a2[5]; /*0x100a5acd2*/
  *(_QWORD *)(result + v4 + 32) = a2[4]; /*0x100a5acdb*/
  *(_QWORD *)(result + v4 + 24) = a2[3]; /*0x100a5ace4*/
  *(_QWORD *)(result + v4 + 16) = a2[2]; /*0x100a5aced*/
  v5 = *a2; /*0x100a5acf2*/
  *(_QWORD *)(result + v4 + 8) = a2[1]; /*0x100a5acf9*/
  *(_QWORD *)(result + v4) = v5; /*0x100a5acfe*/
  a1[2] = v2 + 1; /*0x100a5ad05*/
  return result; /*0x100a5ad0d*/
}