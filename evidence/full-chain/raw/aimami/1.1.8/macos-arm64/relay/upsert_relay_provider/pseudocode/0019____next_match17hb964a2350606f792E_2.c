// mac 1.1.8 upsert_relay_provider node va=0x100619520 depth=2
// _::next_match17hb964a2350606f792E_2
__int64 __fastcall _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        __int64 *a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5)
{
  unsigned __int64 v5; // rbx
  size_t v6; // r15
  __int64 result; // rax
  size_t v9; // r8
  unsigned __int8 v10; // r12
  size_t v11; // rax
  size_t v12; // rsi
  __int64 v13; // rdx
  char v14; // al
  size_t v15; // r13
  int v16; // eax
  size_t v17; // rax
  size_t v18; // rsi
  size_t v19; // rdx
  char v20; // al
  void *__s2; // [rsp+8h] [rbp-58h]
  size_t v22; // [rsp+10h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-40h]
  size_t v24; // [rsp+28h] [rbp-38h]
  __int64 *v25; // [rsp+30h] [rbp-30h]

  v5 = a2[3]; /*0x100619535*/
  v22 = a2[1]; /*0x100619539*/
  v6 = a2[2]; /*0x100619543*/
  if ( v5 > v22 || v5 < v6 ) /*0x10061954a*/
  {
    result = 0; /*0x100619551*/
  }
  else
  {
    v23 = *a2; /*0x10061955e*/
    v9 = *((unsigned __int8 *)a2 + 40); /*0x100619562*/
    v10 = *((_BYTE *)a2 + v9 + 31); /*0x100619567*/
    v25 = a1; /*0x100619571*/
    v24 = v9; /*0x100619575*/
    if ( v9 >= 5 ) /*0x100619579*/
    {
      while ( 1 ) /*0x100619679*/
      {
        v17 = v5 - v6; /*0x100619679*/
        v18 = v23 + v6; /*0x100619680*/
        if ( v5 - v6 > 0xF ) /*0x100619688*/
        {
          v20 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v10, v18, v5 - v6); /*0x1006196ac*/
          v9 = v24; /*0x1006196b1*/
        }
        else
        {
          v19 = 0; /*0x10061968a*/
          if ( v17 ) /*0x10061968f*/
          {
            while ( *(_BYTE *)(v18 + v19) != v10 ) /*0x100619695*/
            {
              if ( v17 == ++v19 ) /*0x10061969d*/
              {
                v19 = v5 - v6; /*0x10061969f*/
                v20 = 0; /*0x1006196a2*/
                goto LABEL_24; /*0x1006196a4*/
              }
            }
            v20 = 1; /*0x1006196bb*/
          }
          else
          {
            v20 = 0; /*0x1006196b7*/
          }
        }
LABEL_24:
        if ( (v20 & 1) == 0 ) /*0x1006196c2*/
          break; /*0x1006196c2*/
        v6 += v19 + 1; /*0x1006196c4*/
        a2[2] = v6; /*0x1006196c9*/
        if ( v6 >= v9 && v6 <= v22 ) /*0x1006196d7*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v9, 4, &off_101535638, a3, a4, a5); /*0x10061971b*/
        a1 = v25; /*0x1006196e1*/
        result = 0; /*0x1006196e5*/
        if ( v5 < v6 ) /*0x1006196ea*/
          goto LABEL_29; /*0x1006196ea*/
      }
LABEL_28:
      a2[2] = v5; /*0x1006196ee*/
      result = 0; /*0x1006196f2*/
      a1 = v25; /*0x1006196f4*/
    }
    else
    {
      __s2 = a2 + 4; /*0x100619583*/
      do /*0x100619593*/
      {
        v11 = v5 - v6; /*0x10061959c*/
        v12 = v23 + v6; /*0x1006195a3*/
        if ( v5 - v6 >= 0x10 ) /*0x1006195ab*/
        {
          v14 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v10, v12, v5 - v6); /*0x1006195e6*/
          v9 = v24; /*0x1006195eb*/
          if ( (v14 & 1) == 0 ) /*0x1006195f1*/
            goto LABEL_28; /*0x1006195f1*/
        }
        else
        {
          v13 = 0; /*0x1006195ad*/
          if ( !v11 ) /*0x1006195b2*/
            goto LABEL_28; /*0x1006195b2*/
          while ( *(_BYTE *)(v12 + v13) != v10 ) /*0x1006195c4*/
          {
            if ( v11 == ++v13 ) /*0x1006195cc*/
              goto LABEL_28; /*0x1006195cc*/
          }
        }
        v6 += v13 + 1; /*0x100619610*/
        a2[2] = v6; /*0x100619615*/
        v15 = v6 - v9; /*0x10061961c*/
        if ( v6 >= v9 && v6 <= v22 ) /*0x100619626*/
        {
          v16 = memcmp((const void *)(v23 + v15), __s2, v9); /*0x100619640*/
          v9 = v24; /*0x100619645*/
          if ( !v16 ) /*0x10061964b*/
          {
            a1[1] = v15; /*0x100619655*/
            a1[2] = v6; /*0x100619659*/
            result = 1; /*0x10061965d*/
            goto LABEL_29; /*0x100619662*/
          }
        }
      }
      while ( v5 >= v6 ); /*0x100619593*/
      result = 0; /*0x10061966b*/
    }
  }
LABEL_29:
  *a1 = result; /*0x1006196f8*/
  return result; /*0x1006196fb*/
}