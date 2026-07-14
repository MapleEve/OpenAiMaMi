// mac 1.1.8 upsert_relay_provider node va=0x1005093c0 depth=2
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0fe35e1dc24b9a0e(
        unsigned __int64 *a1,
        unsigned __int8 **a2)
{
  unsigned __int64 v2; // r13
  unsigned __int8 *v3; // rbx
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  char v6; // bl
  __int64 v7; // r15
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  unsigned int v14; // esi
  char v15; // si
  unsigned int v16; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int8 *v20; // [rsp+8h] [rbp-58h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h]
  __int64 v24; // [rsp+30h] [rbp-30h]

  v22 = 0; /*0x1005093d5*/
  v23 = 1; /*0x1005093dd*/
  v24 = 0; /*0x1005093e5*/
  v2 = (unsigned __int64)a2[2]; /*0x1005093ed*/
  if ( v2 ) /*0x1005093f4*/
  {
    v3 = *a2; /*0x1005093fe*/
    v20 = a2[1]; /*0x100509401*/
    if ( v20 != *a2 ) /*0x100509408*/
    {
      v19 = ((unsigned __int64)(v20 - *a2) >> 2) - (((((_DWORD)v20 - *(_DWORD *)a2) & 3) == 0) - 1LL); /*0x10050964c*/
      if ( v2 < v19 ) /*0x100509653*/
        v19 = (unsigned __int64)a2[2]; /*0x100509653*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v22, 0, v19, 1, 1u); /*0x100509668*/
    }
    do /*0x10050943b*/
    {
      if ( v3 == v20 ) /*0x10050943f*/
        break; /*0x10050943f*/
      v4 = *v3; /*0x100509445*/
      if ( (v4 & 0x80u) == 0 ) /*0x10050944c*/
      {
        v21 = v3 + 1; /*0x100509451*/
        v5 = 1; /*0x100509455*/
        v6 = 1; /*0x10050945b*/
        v7 = v24; /*0x10050945d*/
        goto LABEL_21; /*0x100509461*/
      }
      v8 = v4 & 0x1F; /*0x100509473*/
      v9 = v3[1] & 0x3F; /*0x10050947a*/
      if ( (unsigned __int8)v4 <= 0xDFu ) /*0x100509481*/
      {
        v4 = v9 | (v8 << 6); /*0x1005094da*/
        v7 = v24; /*0x1005094dd*/
        v21 = v3 + 2; /*0x1005094e8*/
        if ( v4 < 0x80 ) /*0x1005094ec*/
          goto LABEL_15; /*0x1005094ec*/
      }
      else
      {
        v10 = (v9 << 6) | v3[2] & 0x3F; /*0x10050948d*/
        if ( (unsigned __int8)v4 < 0xF0u ) /*0x100509493*/
        {
          v4 = (v8 << 12) | v10; /*0x100509501*/
          v7 = v24; /*0x100509504*/
          v21 = v3 + 3; /*0x10050950f*/
          if ( v4 < 0x80 ) /*0x100509513*/
            goto LABEL_15; /*0x100509513*/
        }
        else
        {
          v4 = ((v4 & 7) << 18) | (v10 << 6) | v3[3] & 0x3F; /*0x1005094aa*/
          if ( v4 == 1114112 ) /*0x1005094b4*/
            break; /*0x1005094b4*/
          v7 = v24; /*0x1005094be*/
          v21 = v3 + 4; /*0x1005094c9*/
          if ( v4 < 0x80 ) /*0x1005094cd*/
          {
LABEL_15:
            v5 = 1; /*0x1005094ee*/
            v6 = 1; /*0x1005094f4*/
            goto LABEL_21; /*0x1005094f6*/
          }
        }
      }
      if ( v4 >= 0x800 ) /*0x10050951c*/
        v5 = 4LL - (v4 < 0x10000); /*0x100509533*/
      else
        v5 = 2; /*0x10050951e*/
      v6 = 0; /*0x100509537*/
LABEL_21:
      v11 = v7; /*0x100509540*/
      if ( v5 > v22 - v7 ) /*0x10050954d*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v22, v7, v5, 1, 1u); /*0x1005095f6*/
        v11 = v24; /*0x1005095fb*/
        v12 = v23; /*0x100509603*/
        if ( !v6 ) /*0x100509609*/
        {
LABEL_23:
          v13 = v4 & 0x3F | 0x80; /*0x10050955f*/
          v14 = v4 >> 6; /*0x10050956b*/
          v3 = v21; /*0x100509575*/
          if ( v4 >= 0x800 ) /*0x100509579*/
          {
            v15 = v14 & 0x3F | 0x80; /*0x100509594*/
            v16 = v4 >> 12; /*0x10050959b*/
            if ( v4 > 0xFFFF ) /*0x1005095a6*/
            {
              *(_BYTE *)(v12 + v11) = (v4 >> 18) | 0xF0; /*0x1005095ce*/
              *(_BYTE *)(v12 + v11 + 1) = v16 & 0x3F | 0x80; /*0x1005095d2*/
              *(_BYTE *)(v12 + v11 + 2) = v15; /*0x1005095d7*/
              *(_BYTE *)(v12 + v11 + 3) = v13; /*0x1005095dc*/
            }
            else
            {
              *(_BYTE *)(v12 + v11) = v16 | 0xE0; /*0x1005095ac*/
              *(_BYTE *)(v12 + v11 + 1) = v15; /*0x1005095b0*/
              *(_BYTE *)(v12 + v11 + 2) = v13; /*0x1005095b5*/
            }
          }
          else
          {
            *(_BYTE *)(v12 + v11) = v14 | 0xC0; /*0x10050957f*/
            *(_BYTE *)(v12 + v11 + 1) = v13; /*0x100509583*/
          }
          goto LABEL_5; /*0x100509587*/
        }
      }
      else
      {
        v12 = v23; /*0x100509553*/
        if ( !v6 ) /*0x100509559*/
          goto LABEL_23; /*0x100509559*/
      }
      *(_BYTE *)(v12 + v11) = v4; /*0x100509420*/
      v3 = v21; /*0x100509424*/
LABEL_5:
      --v2; /*0x100509428*/
      v24 = v7 + v5; /*0x10050942e*/
    }
    while ( v2 ); /*0x10050943b*/
  }
  a1[2] = v24; /*0x100509614*/
  v18 = v22; /*0x100509620*/
  a1[1] = v23; /*0x100509628*/
  *a1 = v18; /*0x10050962c*/
  return a1; /*0x10050962f*/
}