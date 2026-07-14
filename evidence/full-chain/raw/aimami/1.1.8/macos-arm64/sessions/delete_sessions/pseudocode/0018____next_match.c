// mac 1.1.8 delete_sessions node va=0x1001e0390 depth=1
// _::next_match
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

  v5 = a2[3]; /*0x1001e03a5*/
  v22 = a2[1]; /*0x1001e03a9*/
  v6 = a2[2]; /*0x1001e03b3*/
  if ( v5 > v22 || v5 < v6 ) /*0x1001e03ba*/
  {
    result = 0; /*0x1001e03c1*/
  }
  else
  {
    v23 = *a2; /*0x1001e03ce*/
    v9 = *((unsigned __int8 *)a2 + 40); /*0x1001e03d2*/
    v10 = *((_BYTE *)a2 + v9 + 31); /*0x1001e03d7*/
    v25 = a1; /*0x1001e03e1*/
    v24 = v9; /*0x1001e03e5*/
    if ( v9 >= 5 ) /*0x1001e03e9*/
    {
      while ( 1 ) /*0x1001e04e9*/
      {
        v17 = v5 - v6; /*0x1001e04e9*/
        v18 = v23 + v6; /*0x1001e04f0*/
        if ( v5 - v6 > 0xF ) /*0x1001e04f8*/
        {
          v20 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v10, v18, v5 - v6); /*0x1001e051c*/
          v9 = v24; /*0x1001e0521*/
        }
        else
        {
          v19 = 0; /*0x1001e04fa*/
          if ( v17 ) /*0x1001e04ff*/
          {
            while ( *(_BYTE *)(v18 + v19) != v10 ) /*0x1001e0505*/
            {
              if ( v17 == ++v19 ) /*0x1001e050d*/
              {
                v19 = v5 - v6; /*0x1001e050f*/
                v20 = 0; /*0x1001e0512*/
                goto LABEL_24; /*0x1001e0514*/
              }
            }
            v20 = 1; /*0x1001e052b*/
          }
          else
          {
            v20 = 0; /*0x1001e0527*/
          }
        }
LABEL_24:
        if ( (v20 & 1) == 0 ) /*0x1001e0532*/
          break; /*0x1001e0532*/
        v6 += v19 + 1; /*0x1001e0534*/
        a2[2] = v6; /*0x1001e0539*/
        if ( v6 >= v9 && v6 <= v22 ) /*0x1001e0547*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v9, 4, &off_101526790, a3, a4, a5); /*0x1001e058b*/
        a1 = v25; /*0x1001e0551*/
        result = 0; /*0x1001e0555*/
        if ( v5 < v6 ) /*0x1001e055a*/
          goto LABEL_29; /*0x1001e055a*/
      }
LABEL_28:
      a2[2] = v5; /*0x1001e055e*/
      result = 0; /*0x1001e0562*/
      a1 = v25; /*0x1001e0564*/
    }
    else
    {
      __s2 = a2 + 4; /*0x1001e03f3*/
      do /*0x1001e0403*/
      {
        v11 = v5 - v6; /*0x1001e040c*/
        v12 = v23 + v6; /*0x1001e0413*/
        if ( v5 - v6 >= 0x10 ) /*0x1001e041b*/
        {
          v14 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v10, v12, v5 - v6); /*0x1001e0456*/
          v9 = v24; /*0x1001e045b*/
          if ( (v14 & 1) == 0 ) /*0x1001e0461*/
            goto LABEL_28; /*0x1001e0461*/
        }
        else
        {
          v13 = 0; /*0x1001e041d*/
          if ( !v11 ) /*0x1001e0422*/
            goto LABEL_28; /*0x1001e0422*/
          while ( *(_BYTE *)(v12 + v13) != v10 ) /*0x1001e0434*/
          {
            if ( v11 == ++v13 ) /*0x1001e043c*/
              goto LABEL_28; /*0x1001e043c*/
          }
        }
        v6 += v13 + 1; /*0x1001e0480*/
        a2[2] = v6; /*0x1001e0485*/
        v15 = v6 - v9; /*0x1001e048c*/
        if ( v6 >= v9 && v6 <= v22 ) /*0x1001e0496*/
        {
          v16 = memcmp((const void *)(v23 + v15), __s2, v9); /*0x1001e04b0*/
          v9 = v24; /*0x1001e04b5*/
          if ( !v16 ) /*0x1001e04bb*/
          {
            a1[1] = v15; /*0x1001e04c5*/
            a1[2] = v6; /*0x1001e04c9*/
            result = 1; /*0x1001e04cd*/
            goto LABEL_29; /*0x1001e04d2*/
          }
        }
      }
      while ( v5 >= v6 ); /*0x1001e0403*/
      result = 0; /*0x1001e04db*/
    }
  }
LABEL_29:
  *a1 = result; /*0x1001e0568*/
  return result; /*0x1001e056b*/
}