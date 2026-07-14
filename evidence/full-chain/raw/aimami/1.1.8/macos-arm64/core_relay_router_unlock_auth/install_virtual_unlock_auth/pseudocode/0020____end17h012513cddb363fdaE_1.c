// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1006b4840 d=1
unsigned __int64 __fastcall _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h012513cddb363fda(
        __int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 *v2; // rbx
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // r12
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)a1 && *(_BYTE *)(a1 + 1) ) /*0x1006b4849*/
  {
    v1 = *(_QWORD *)(a1 + 8); /*0x1006b4861*/
    v2 = *(unsigned __int64 **)v1; /*0x1006b4865*/
    v3 = *(_QWORD *)(v1 + 24) - 1LL; /*0x1006b486e*/
    *(_QWORD *)(v1 + 24) = v3; /*0x1006b4871*/
    if ( *(_BYTE *)(v1 + 32) ) /*0x1006b4876*/
    {
      v4 = v2[2]; /*0x1006b487e*/
      if ( *v2 == v4 ) /*0x1006b4885*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v2[2], 1, 1, 1u); /*0x1006b4959*/
        v4 = v2[2]; /*0x1006b495e*/
      }
      *(_BYTE *)(v2[1] + v4) = 10; /*0x1006b488f*/
      v5 = v4 + 1; /*0x1006b4894*/
      v2[2] = v5; /*0x1006b4897*/
      if ( v3 ) /*0x1006b489e*/
      {
        v6 = *(const void **)(v1 + 8); /*0x1006b48a0*/
        v7 = *(_QWORD *)(v1 + 16); /*0x1006b48a5*/
        do /*0x1006b48d7*/
        {
          if ( v7 > *v2 - v5 ) /*0x1006b48b9*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v5, v7, 1, 1u); /*0x1006b48ef*/
            v5 = v2[2]; /*0x1006b48f4*/
          }
          memcpy((void *)(v5 + v2[1]), v6, v7); /*0x1006b48c8*/
          v5 += v7; /*0x1006b48cd*/
          v2[2] = v5; /*0x1006b48d0*/
          --v3; /*0x1006b48d4*/
        }
        while ( v3 ); /*0x1006b48d7*/
      }
    }
    else
    {
      v5 = v2[2]; /*0x1006b48fa*/
    }
    if ( *v2 == v5 ) /*0x1006b4901*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v2, v5, 1, 1, 1u); /*0x1006b4938*/
      v5 = v2[2]; /*0x1006b493d*/
    }
    result = v2[1]; /*0x1006b4903*/
    *(_BYTE *)(result + v5) = 125; /*0x1006b4907*/
    v2[2] = v5 + 1; /*0x1006b490f*/
  }
  return result; /*0x1006b4921*/
}