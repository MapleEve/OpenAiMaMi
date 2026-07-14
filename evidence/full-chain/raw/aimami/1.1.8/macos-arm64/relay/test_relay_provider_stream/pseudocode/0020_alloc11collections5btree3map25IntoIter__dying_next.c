// mac 1.1.8 test_relay_provider_stream node va=0x1001cf2f0 depth=4
// alloc11collections5btree3map25IntoIter::dying_next
unsigned __int64 *__fastcall alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *v20; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 *v23; // r15
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx

  v3 = *(_QWORD *)(a2 + 64); /*0x1001cf301*/
  if ( v3 ) /*0x1001cf308*/
  {
    *(_QWORD *)(a2 + 64) = v3 - 1; /*0x1001cf311*/
    if ( *(_DWORD *)a2 != 1 ) /*0x1001cf318*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101526760); /*0x1001cf6ac*/
    if ( *(_QWORD *)(a2 + 8) ) /*0x1001cf31e*/
    {
LABEL_11:
      v8 = *(_QWORD *)(a2 + 8); /*0x1001cf3c8*/
      result = *(unsigned __int64 **)(a2 + 16); /*0x1001cf3cc*/
      v10 = *(_QWORD *)(a2 + 24); /*0x1001cf3d0*/
      v11 = *(unsigned __int16 *)(v8 + 626); /*0x1001cf3d4*/
      if ( v10 >= v11 ) /*0x1001cf3de*/
      {
        do /*0x1001cf500*/
        {
          v13 = *(_QWORD *)(v8 + 352); /*0x1001cf4c0*/
          if ( !v13 ) /*0x1001cf4ca*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cf692*/
            core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101526730); /*0x1001cf69e*/
          }
          v12 = (unsigned __int64)result + 1; /*0x1001cf4d0*/
          v10 = *(unsigned __int16 *)(v8 + 624); /*0x1001cf4d4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cf4ed*/
          v8 = v13; /*0x1001cf4f2*/
          result = (unsigned __int64 *)v12; /*0x1001cf4f5*/
        }
        while ( (unsigned __int16)v10 >= *(_WORD *)(v13 + 626) ); /*0x1001cf500*/
        if ( v12 ) /*0x1001cf50c*/
          goto LABEL_13; /*0x1001cf50c*/
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 16); /*0x1001cf3e4*/
        v13 = *(_QWORD *)(a2 + 8); /*0x1001cf3e7*/
        if ( result ) /*0x1001cf3ed*/
        {
LABEL_13:
          result = (unsigned __int64 *)(v13 + 8 * v10 + 640); /*0x1001cf3f3*/
          if ( (v12 & 7) != 0 ) /*0x1001cf402*/
          {
            v14 = 0; /*0x1001cf408*/
            do /*0x1001cf420*/
            {
              v11 = *result; /*0x1001cf410*/
              result = (unsigned __int64 *)(*result + 632); /*0x1001cf413*/
              ++v14; /*0x1001cf41a*/
            }
            while ( (v12 & 7) != v14 ); /*0x1001cf420*/
            v15 = v12 - v14; /*0x1001cf425*/
            v16 = 0; /*0x1001cf428*/
            if ( v12 < 8 ) /*0x1001cf42e*/
              goto LABEL_29; /*0x1001cf42e*/
            goto LABEL_28; /*0x1001cf42e*/
          }
          v15 = v12; /*0x1001cf51b*/
          v16 = 0; /*0x1001cf51e*/
          if ( v12 >= 8 ) /*0x1001cf524*/
          {
            do /*0x1001cf56f*/
            {
LABEL_28:
              v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*result + 632) /*0x1001cf530*/
                                                                                          + 632LL)
                                                                              + 632LL)
                                                                  + 632LL)
                                                      + 632LL)
                                          + 632LL)
                              + 632LL);
              result = (unsigned __int64 *)(v11 + 632); /*0x1001cf564*/
              v15 -= 8LL; /*0x1001cf56b*/
            }
            while ( v15 ); /*0x1001cf56f*/
          }
LABEL_29:
          *(_QWORD *)(a2 + 8) = v11; /*0x1001cf571*/
          *(_QWORD *)(a2 + 16) = 0; /*0x1001cf575*/
          *(_QWORD *)(a2 + 24) = v16; /*0x1001cf57d*/
          *a1 = v13; /*0x1001cf581*/
          a1[1] = v12; /*0x1001cf585*/
          a1[2] = v10; /*0x1001cf589*/
          return result; /*0x1001cf58d*/
        }
      }
      v16 = v10 + 1; /*0x1001cf512*/
      v11 = v13; /*0x1001cf516*/
      goto LABEL_29; /*0x1001cf519*/
    }
    v4 = *(_QWORD *)(a2 + 16); /*0x1001cf32d*/
    v5 = *(_QWORD *)(a2 + 24); /*0x1001cf331*/
    if ( v5 ) /*0x1001cf338*/
    {
      if ( (v5 & 7) != 0 ) /*0x1001cf341*/
      {
        v6 = 0; /*0x1001cf347*/
        do /*0x1001cf35d*/
        {
          v4 = *(_QWORD *)(v4 + 632); /*0x1001cf350*/
          ++v6; /*0x1001cf357*/
        }
        while ( (*(_QWORD *)(a2 + 24) & 7LL) != v6 ); /*0x1001cf35d*/
        v7 = v5 - v6; /*0x1001cf362*/
        if ( v5 < 8 ) /*0x1001cf369*/
          goto LABEL_10; /*0x1001cf369*/
        goto LABEL_9; /*0x1001cf369*/
      }
      v7 = *(_QWORD *)(a2 + 24); /*0x1001cf5cf*/
      if ( v5 >= 8 ) /*0x1001cf5d6*/
      {
        do /*0x1001cf3ac*/
        {
LABEL_9:
          v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 632) /*0x1001cf370*/
                                                                                                 + 632LL)
                                                                                     + 632LL)
                                                                         + 632LL)
                                                             + 632LL)
                                                 + 632LL)
                                     + 632LL)
                         + 632LL);
          v7 -= 8; /*0x1001cf3a8*/
        }
        while ( v7 ); /*0x1001cf3ac*/
      }
    }
LABEL_10:
    *(_QWORD *)a2 = 1; /*0x1001cf3ae*/
    *(_QWORD *)(a2 + 8) = v4; /*0x1001cf3b5*/
    *(_QWORD *)(a2 + 24) = 0; /*0x1001cf3b9*/
    *(_QWORD *)(a2 + 16) = 0; /*0x1001cf3c1*/
    goto LABEL_11; /*0x1001cf3c1*/
  }
  v17 = *(_QWORD *)(a2 + 8); /*0x1001cf439*/
  result = *(unsigned __int64 **)(a2 + 16); /*0x1001cf43d*/
  v18 = *(_QWORD *)(a2 + 24); /*0x1001cf441*/
  v19 = (*(_BYTE *)a2 & 1) == 0; /*0x1001cf445*/
  *(_QWORD *)a2 = 0; /*0x1001cf448*/
  if ( !v19 ) /*0x1001cf44f*/
  {
    if ( v17 ) /*0x1001cf458*/
    {
      v20 = result; /*0x1001cf45e*/
      i = *(_QWORD *)(v17 + 352); /*0x1001cf461*/
      if ( i ) /*0x1001cf46b*/
        goto LABEL_21; /*0x1001cf46b*/
      goto LABEL_42; /*0x1001cf46b*/
    }
    if ( !v18 ) /*0x1001cf595*/
      goto LABEL_35; /*0x1001cf595*/
    if ( (v18 & 7) != 0 ) /*0x1001cf59e*/
    {
      v24 = 0; /*0x1001cf5a0*/
      do /*0x1001cf5bd*/
      {
        result = (unsigned __int64 *)result[79]; /*0x1001cf5b0*/
        ++v24; /*0x1001cf5b7*/
      }
      while ( (v18 & 7) != v24 ); /*0x1001cf5bd*/
      v25 = v18 - v24; /*0x1001cf5c2*/
      if ( v18 < 8 ) /*0x1001cf5c9*/
        goto LABEL_35; /*0x1001cf5c9*/
    }
    else
    {
      v25 = v18; /*0x1001cf5e1*/
      if ( v18 < 8 ) /*0x1001cf5e8*/
      {
LABEL_35:
        v20 = nullptr; /*0x1001cf5cb*/
        goto LABEL_41; /*0x1001cf5cd*/
      }
    }
    v20 = nullptr; /*0x1001cf5ea*/
    do /*0x1001cf62c*/
    {
      result = *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result[79] + 632) /*0x1001cf621*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL);
      v25 -= 8LL; /*0x1001cf628*/
    }
    while ( v25 ); /*0x1001cf62c*/
LABEL_41:
    for ( i = result[44]; i; v20 = v23 ) /*0x1001cf63b*/
    {
LABEL_21:
      v22 = i; /*0x1001cf480*/
      v23 = (unsigned __int64 *)((char *)v20 + 1); /*0x1001cf483*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cf498*/
      i = *(_QWORD *)(v22 + 352); /*0x1001cf49d*/
    }
LABEL_42:
    result = (unsigned __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001cf658*/
  }
  *a1 = 0; /*0x1001cf665*/
  return result; /*0x1001cf671*/
}