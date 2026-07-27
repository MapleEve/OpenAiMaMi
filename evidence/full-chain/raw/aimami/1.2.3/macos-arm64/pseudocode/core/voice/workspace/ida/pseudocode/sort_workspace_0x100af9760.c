// __ZN13codexmate_lib4core5voice9workspace14sort_workspace @ 0x100af9760 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  char v17; // [rsp+Fh] [rbp-31h] BYREF
  _QWORD v18[6]; // [rsp+10h] [rbp-30h] BYREF

  v1 = a1[1]; /*0x100af9771*/
  v2 = a1[2]; /*0x100af9775*/
  v18[0] = &v17; /*0x100af977d*/
  if ( v2 >= 2 ) /*0x100af9785*/
  {
    if ( v2 >= 0x15 ) /*0x100af97d8*/
    {
      result = core::slice::sort::stable::driftsort_main::h23712da69952832c(v1, v2, v18); /*0x100af98b2*/
    }
    else
    {
      v9 = 112; /*0x100af97e2*/
      do /*0x100af9801*/
      {
        result = core::slice::sort::shared::smallsort::insert_tail::h0eea80cd4d6d79a9(v1, v1 + v9); /*0x100af97f2*/
        v9 += 112; /*0x100af97fa*/
      }
      while ( 112 * v2 != v9 ); /*0x100af9801*/
    }
  }
  v3 = a1[4]; /*0x100af9787*/
  v4 = a1[5]; /*0x100af978b*/
  v18[0] = &v17; /*0x100af978f*/
  if ( v4 >= 2 ) /*0x100af9797*/
  {
    if ( v4 >= 0x15 ) /*0x100af9809*/
    {
      result = core::slice::sort::stable::driftsort_main::h50ab58767c1bd640(v3, v4, v18); /*0x100af98c9*/
    }
    else
    {
      v11 = 160; /*0x100af9817*/
      do /*0x100af9839*/
      {
        result = core::slice::sort::shared::smallsort::insert_tail::h2ec8ee7c52e55035(v3, v3 + v11); /*0x100af9827*/
        v11 += 160; /*0x100af982f*/
      }
      while ( 160 * v4 != v11 ); /*0x100af9839*/
    }
  }
  v5 = a1[7]; /*0x100af9799*/
  v6 = a1[8]; /*0x100af979d*/
  v18[0] = &v17; /*0x100af97a1*/
  if ( v6 >= 2 ) /*0x100af97a9*/
  {
    if ( v6 >= 0x15 ) /*0x100af9844*/
    {
      result = core::slice::sort::stable::driftsort_main::hd416db13940c9458(v5, v6, v18); /*0x100af98e0*/
    }
    else
    {
      v12 = 72; /*0x100af9852*/
      do /*0x100af9871*/
      {
        result = core::slice::sort::shared::smallsort::insert_tail::h349b4330e22db40f(v5, v5 + v12); /*0x100af9862*/
        v12 += 72; /*0x100af986a*/
      }
      while ( 72 * v6 != v12 ); /*0x100af9871*/
    }
  }
  v7 = a1[10]; /*0x100af97af*/
  v8 = a1[11]; /*0x100af97b3*/
  v18[0] = &v17; /*0x100af97b7*/
  if ( v8 >= 2 ) /*0x100af97bf*/
  {
    if ( v8 > 0x14 ) /*0x100af987c*/
    {
      result = core::slice::sort::stable::driftsort_main::he1cff8c1f6d4efc7(v7, v8, v18); /*0x100af98fa*/
      if ( v8 >= 0x28 ) /*0x100af9903*/
      {
        a1[11] = 40; /*0x100af9909*/
        v15 = v8 - 40; /*0x100af9911*/
        if ( v15 ) /*0x100af9915*/
        {
          v16 = v7 + 17600; /*0x100af991b*/
          do /*0x100af9934*/
          {
            result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v16); /*0x100af9925*/
            v16 += 440; /*0x100af992a*/
            --v15; /*0x100af9931*/
          }
          while ( v15 ); /*0x100af9934*/
        }
      }
    }
    else
    {
      v13 = 440 * v8; /*0x100af987e*/
      v14 = 440; /*0x100af9885*/
      do /*0x100af98a1*/
      {
        result = core::slice::sort::shared::smallsort::insert_tail::h0919086d140c0380(v7, v7 + v14); /*0x100af9892*/
        v14 += 440; /*0x100af9897*/
      }
      while ( v13 != v14 ); /*0x100af98a1*/
    }
  }
  return result; /*0x100af97c5*/
}