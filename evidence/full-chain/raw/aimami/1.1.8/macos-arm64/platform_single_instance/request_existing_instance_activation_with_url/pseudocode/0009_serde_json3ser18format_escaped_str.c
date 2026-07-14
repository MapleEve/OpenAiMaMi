// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x1003cbd10 depth=1
// serde_json3ser18format_escaped_str
__int64 __fastcall serde_json::ser::format_escaped_str::h29316bfe5256814d(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  unsigned __int64 *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r9
  _BYTE *v9; // rdx
  __int64 v10; // r14
  unsigned __int8 *v11; // r13
  __int64 v12; // r12
  char v13; // bl
  size_t v14; // rdx
  char v15; // bl
  char v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _BYTE *v19; // r12
  __int64 v20; // rbx
  __int64 v22; // [rsp+8h] [rbp-38h]
  unsigned __int64 *v23; // [rsp+10h] [rbp-30h]

  v6 = *a1; /*0x1003cbd27*/
  v7 = (*a1)[2]; /*0x1003cbd2a*/
  v23 = *a1; /*0x1003cbd31*/
  if ( **a1 == v7 ) /*0x1003cbd35*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v7, 1, 1, 1u); /*0x1003cbf79*/
    v6 = v23; /*0x1003cbf7e*/
    v7 = v23[2]; /*0x1003cbf85*/
  }
  *(_BYTE *)(v6[1] + v7) = 34; /*0x1003cbd3f*/
  v8 = v7 + 1; /*0x1003cbd44*/
  v6[2] = v8; /*0x1003cbd47*/
  v9 = &serde_json::ser::Formatter::write_char_escape::HEX_DIGITS::h26c9572b93365f00; /*0x1003cbd52*/
LABEL_4:
  v10 = 1; /*0x1003cbd59*/
  v11 = a3; /*0x1003cbd5f*/
  while ( a4 + v10 != 1 ) /*0x1003cbd78*/
  {
    v12 = *v11; /*0x1003cbd7e*/
    v13 = serde_json::ser::ESCAPE::h37a8aded3b3e32f2[v12]; /*0x1003cbd83*/
    ++v11; /*0x1003cbd88*/
    --v10; /*0x1003cbd8b*/
    if ( v13 ) /*0x1003cbd90*/
    {
      if ( v10 ) /*0x1003cbd95*/
      {
        v14 = -v10; /*0x1003cbd9a*/
        if ( -v10 > *v6 - v8 ) /*0x1003cbda6*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v8, v14, 1, 1u); /*0x1003cbe7c*/
          v14 = -v10; /*0x1003cbe81*/
          v8 = v23[2]; /*0x1003cbe8d*/
        }
        v22 = v8; /*0x1003cbdac*/
        memcpy((void *)(v8 + v23[1]), a3, v14); /*0x1003cbdbb*/
        v6 = v23; /*0x1003cbdc4*/
        v8 = v22 - v10; /*0x1003cbdc8*/
        v23[2] = v22 - v10; /*0x1003cbdcb*/
        v9 = &serde_json::ser::Formatter::write_char_escape::HEX_DIGITS::h26c9572b93365f00; /*0x1003cbdd6*/
      }
      a4 = a4 + v10 - 1; /*0x1003cbddd*/
      if ( v13 == 117 ) /*0x1003cbde5*/
      {
        v15 = v9[(unsigned int)v12 >> 4]; /*0x1003cbdf1*/
        v16 = v9[v12 & 0xF]; /*0x1003cbdf6*/
        if ( *v6 - v8 <= 5 ) /*0x1003cbe05*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v8, 6, 1, 1u); /*0x1003cbeb0*/
          v9 = &serde_json::ser::Formatter::write_char_escape::HEX_DIGITS::h26c9572b93365f00; /*0x1003cbeb5*/
          v6 = v23; /*0x1003cbebf*/
          v8 = v23[2]; /*0x1003cbec3*/
        }
        v17 = v6[1]; /*0x1003cbe0b*/
        *(_DWORD *)(v17 + v8) = 808482140; /*0x1003cbe0f*/
        *(_BYTE *)(v17 + v8 + 4) = v15; /*0x1003cbe17*/
        *(_BYTE *)(v17 + v8 + 5) = v16; /*0x1003cbe1c*/
        v8 += 6; /*0x1003cbe21*/
      }
      else
      {
        if ( *v6 - v8 <= 1 ) /*0x1003cbe3a*/
        {
          v19 = v9; /*0x1003cbecc*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v8, 2, 1, 1u); /*0x1003cbee9*/
          v9 = v19; /*0x1003cbeee*/
          v6 = v23; /*0x1003cbef4*/
          v8 = v23[2]; /*0x1003cbef8*/
        }
        v18 = v6[1]; /*0x1003cbe40*/
        *(_BYTE *)(v18 + v8) = 92; /*0x1003cbe44*/
        *(_BYTE *)(v18 + v8 + 1) = v13; /*0x1003cbe49*/
        v8 += 2; /*0x1003cbe4e*/
      }
      v6[2] = v8; /*0x1003cbe52*/
      a3 = v11; /*0x1003cbe56*/
      goto LABEL_4; /*0x1003cbe59*/
    }
  }
  if ( a4 ) /*0x1003cbf04*/
  {
    if ( a4 > *v6 - v8 ) /*0x1003cbf0f*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v8, a4, 1, 1u); /*0x1003cbfcc*/
      v8 = v23[2]; /*0x1003cbfd8*/
    }
    v20 = v8; /*0x1003cbf23*/
    memcpy((void *)(v8 + v23[1]), a3, a4); /*0x1003cbf26*/
    v6 = v23; /*0x1003cbf2e*/
    v8 = a4 + v20; /*0x1003cbf32*/
    v23[2] = a4 + v20; /*0x1003cbf35*/
  }
  if ( *v6 == v8 ) /*0x1003cbf3c*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v23, v8, 1, 1, 1u); /*0x1003cbfa5*/
    v6 = v23; /*0x1003cbfaa*/
    v8 = v23[2]; /*0x1003cbfae*/
  }
  *(_BYTE *)(v6[1] + v8) = 34; /*0x1003cbf42*/
  v6[2] = v8 + 1; /*0x1003cbf4a*/
  return 0; /*0x1003cbf50*/
}