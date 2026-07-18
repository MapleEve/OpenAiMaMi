// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1008eff00 d=2
void __fastcall _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb44de6d37d090585(
        _QWORD *a1,
        unsigned __int64 **a2)
{
  __int64 v2; // r12
  __int64 v3; // r9
  unsigned __int64 *v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // dl
  unsigned int v11; // esi
  char v12; // si
  unsigned int v13; // r8d
  __int64 v14; // [rsp+10h] [rbp-30h]

  v2 = *a1; /*0x1008eff11*/
  v3 = a1[1]; /*0x1008eff14*/
  if ( *a1 != v3 ) /*0x1008eff1b*/
  {
    v4 = *a2; /*0x1008eff2c*/
    v5 = (*a2)[2]; /*0x1008eff2f*/
    do /*0x1008eff53*/
    {
      v6 = *((_DWORD *)a1 + v2 + 4); /*0x1008eff53*/
      v7 = 1; /*0x1008eff58*/
      if ( v6 >= 0x80 ) /*0x1008eff65*/
      {
        v7 = 2; /*0x1008eff67*/
        if ( v6 >= 0x800 ) /*0x1008eff74*/
          v7 = 4LL - (v6 < 0x10000); /*0x1008eff83*/
      }
      v8 = v5; /*0x1008eff8d*/
      if ( v7 > *v4 - v5 ) /*0x1008eff93*/
      {
        v14 = v3; /*0x1008f003d*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(v4, v5, v7, 1, 1u); /*0x1008f0041*/
        v3 = v14; /*0x1008f0046*/
        v8 = v4[2]; /*0x1008f004e*/
        v9 = v4[1]; /*0x1008f0052*/
        if ( v6 >= 0x80 ) /*0x1008f005d*/
        {
LABEL_11:
          v10 = v6 & 0x3F | 0x80; /*0x1008effa6*/
          v11 = v6 >> 6; /*0x1008effb2*/
          if ( v6 >= 0x800 ) /*0x1008effbc*/
          {
            v12 = v11 & 0x3F | 0x80; /*0x1008effd4*/
            v13 = v6 >> 12; /*0x1008effdb*/
            if ( v6 > 0xFFFF ) /*0x1008effe6*/
            {
              *(_BYTE *)(v9 + v8) = (v6 >> 18) | 0xF0; /*0x1008f000e*/
              *(_BYTE *)(v9 + v8 + 1) = v13 & 0x3F | 0x80; /*0x1008f0012*/
              *(_BYTE *)(v9 + v8 + 2) = v12; /*0x1008f0017*/
              *(_BYTE *)(v9 + v8 + 3) = v10; /*0x1008f001c*/
            }
            else
            {
              *(_BYTE *)(v9 + v8) = v13 | 0xE0; /*0x1008effec*/
              *(_BYTE *)(v9 + v8 + 1) = v12; /*0x1008efff0*/
              *(_BYTE *)(v9 + v8 + 2) = v10; /*0x1008efff5*/
            }
          }
          else
          {
            *(_BYTE *)(v9 + v8) = v11 | 0xC0; /*0x1008effc2*/
            *(_BYTE *)(v9 + v8 + 1) = v10; /*0x1008effc6*/
          }
          goto LABEL_5; /*0x1008effca*/
        }
      }
      else
      {
        v9 = v4[1]; /*0x1008eff99*/
        if ( v6 >= 0x80 ) /*0x1008effa4*/
          goto LABEL_11; /*0x1008effa4*/
      }
      *(_BYTE *)(v9 + v8) = v6; /*0x1008eff40*/
LABEL_5:
      ++v2; /*0x1008eff44*/
      v5 += v7; /*0x1008eff47*/
      v4[2] = v5; /*0x1008eff4a*/
    }
    while ( v3 != v2 ); /*0x1008eff53*/
  }
}