// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x1003bd770 d=1
unsigned __int64 __fastcall alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  bool v15; // zf
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx

  v3 = *(_QWORD *)(a2 + 64); /*0x1003bd781*/
  if ( v3 ) /*0x1003bd788*/
  {
    *(_QWORD *)(a2 + 64) = v3 - 1; /*0x1003bd791*/
    if ( *(_DWORD *)a2 != 1 ) /*0x1003bd798*/
      core::option::unwrap_failed::h44626cade04bbf1e(&off_10188C390); /*0x1003bdb33*/
    v4 = *(_QWORD *)(a2 + 8); /*0x1003bd79e*/
    if ( v4 ) /*0x1003bd7a5*/
    {
      result = *(_QWORD *)(a2 + 16); /*0x1003bd7ab*/
      v6 = *(_QWORD *)(a2 + 24); /*0x1003bd7af*/
      if ( v6 < *(unsigned __int16 *)(v4 + 274) ) /*0x1003bd7bd*/
        goto LABEL_5; /*0x1003bd7bd*/
      goto LABEL_26; /*0x1003bd7bd*/
    }
    v4 = *(_QWORD *)(a2 + 16); /*0x1003bd8ba*/
    v21 = *(_QWORD *)(a2 + 24); /*0x1003bd8be*/
    if ( v21 ) /*0x1003bd8c5*/
    {
      if ( (v21 & 7) == 0 ) /*0x1003bd8ce*/
      {
        v23 = *(_QWORD *)(a2 + 24); /*0x1003bda87*/
        if ( v21 < 8 ) /*0x1003bda8e*/
          goto LABEL_25; /*0x1003bda8e*/
        goto LABEL_24; /*0x1003bda8e*/
      }
      v22 = 0; /*0x1003bd8d4*/
      do /*0x1003bd8ed*/
      {
        v4 = *(_QWORD *)(v4 + 280); /*0x1003bd8e0*/
        ++v22; /*0x1003bd8e7*/
      }
      while ( (*(_QWORD *)(a2 + 24) & 7LL) != v22 ); /*0x1003bd8ed*/
      v23 = v21 - v22; /*0x1003bd8f2*/
      if ( v21 >= 8 ) /*0x1003bd8f9*/
      {
        do /*0x1003bd93c*/
        {
LABEL_24:
          v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 280) /*0x1003bd900*/
                                                                                                 + 280LL)
                                                                                     + 280LL)
                                                                         + 280LL)
                                                             + 280LL)
                                                 + 280LL)
                                     + 280LL)
                         + 280LL);
          v23 -= 8; /*0x1003bd938*/
        }
        while ( v23 ); /*0x1003bd93c*/
      }
    }
LABEL_25:
    *(_QWORD *)a2 = 1; /*0x1003bd93e*/
    *(_QWORD *)(a2 + 8) = v4; /*0x1003bd945*/
    *(_QWORD *)(a2 + 24) = 0; /*0x1003bd949*/
    *(_QWORD *)(a2 + 16) = 0; /*0x1003bd951*/
    v6 = 0; /*0x1003bd958*/
    result = 0; /*0x1003bd95b*/
    if ( *(_WORD *)(v4 + 274) ) /*0x1003bd95d*/
    {
LABEL_5:
      v7 = result; /*0x1003bd7c3*/
      v8 = v4; /*0x1003bd7c6*/
      if ( result ) /*0x1003bd7cc*/
      {
LABEL_6:
        v9 = v8 + 8 * v6 + 288; /*0x1003bd7d2*/
        if ( (v7 & 7) != 0 ) /*0x1003bd7e1*/
        {
          v10 = 0; /*0x1003bd7e7*/
          do /*0x1003bd800*/
          {
            result = *(_QWORD *)v9; /*0x1003bd7f0*/
            v9 = *(_QWORD *)v9 + 280LL; /*0x1003bd7f3*/
            ++v10; /*0x1003bd7fa*/
          }
          while ( (v7 & 7) != v10 ); /*0x1003bd800*/
          v11 = v7 - v10; /*0x1003bd805*/
          v12 = 0; /*0x1003bd808*/
          if ( v7 < 8 ) /*0x1003bd80e*/
            goto LABEL_32; /*0x1003bd80e*/
          goto LABEL_31; /*0x1003bd80e*/
        }
        v11 = v7; /*0x1003bd9d7*/
        v12 = 0; /*0x1003bd9da*/
        if ( v7 >= 8 ) /*0x1003bd9e0*/
        {
          do /*0x1003bda2f*/
          {
LABEL_31:
            result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 280LL) /*0x1003bd9f0*/
                                                                                           + 280LL)
                                                                               + 280LL)
                                                                   + 280LL)
                                                       + 280LL)
                                           + 280LL)
                               + 280LL);
            v9 = result + 280; /*0x1003bda24*/
            v11 -= 8LL; /*0x1003bda2b*/
          }
          while ( v11 ); /*0x1003bda2f*/
        }
LABEL_32:
        *a1 = v8; /*0x1003bda31*/
        a1[1] = v7; /*0x1003bda35*/
        a1[2] = v6; /*0x1003bda39*/
        *(_QWORD *)(a2 + 8) = result; /*0x1003bda3d*/
        *(_QWORD *)(a2 + 16) = 0; /*0x1003bda41*/
        *(_QWORD *)(a2 + 24) = v12; /*0x1003bda49*/
        return result; /*0x1003bda5b*/
      }
LABEL_29:
      v12 = v6 + 1; /*0x1003bd9ce*/
      result = v8; /*0x1003bd9d2*/
      goto LABEL_32; /*0x1003bd9d5*/
    }
    do /*0x1003bd9bc*/
    {
LABEL_26:
      v8 = *(_QWORD *)v4; /*0x1003bd980*/
      if ( !*(_QWORD *)v4 ) /*0x1003bd986*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003bdb19*/
        core::option::unwrap_failed::h44626cade04bbf1e(&off_10188C330); /*0x1003bdb25*/
      }
      v7 = result + 1; /*0x1003bd98c*/
      v6 = *(unsigned __int16 *)(v4 + 272); /*0x1003bd990*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003bd9a9*/
      v4 = v8; /*0x1003bd9ae*/
      result = v7; /*0x1003bd9b1*/
    }
    while ( (unsigned __int16)v6 >= *(_WORD *)(v8 + 274) ); /*0x1003bd9bc*/
    if ( v7 ) /*0x1003bd9c8*/
      goto LABEL_6; /*0x1003bd9c8*/
    goto LABEL_29; /*0x1003bd9c8*/
  }
  v13 = *(_QWORD **)(a2 + 8); /*0x1003bd819*/
  v14 = *(_QWORD **)(a2 + 16); /*0x1003bd81d*/
  result = *(_QWORD *)(a2 + 24); /*0x1003bd821*/
  v15 = (*(_BYTE *)a2 & 1) == 0; /*0x1003bd825*/
  *(_QWORD *)a2 = 0; /*0x1003bd828*/
  if ( !v15 ) /*0x1003bd82f*/
  {
    if ( v13 ) /*0x1003bd834*/
    {
      v16 = v14; /*0x1003bd83a*/
      v14 = v13; /*0x1003bd83d*/
    }
    else if ( result ) /*0x1003bda5f*/
    {
      if ( (result & 7) != 0 ) /*0x1003bda68*/
      {
        v24 = 0; /*0x1003bda6a*/
        do /*0x1003bda7d*/
        {
          v14 = (_QWORD *)v14[35]; /*0x1003bda70*/
          ++v24; /*0x1003bda77*/
        }
        while ( (result & 7) != v24 ); /*0x1003bda7d*/
        v25 = result - v24; /*0x1003bda82*/
      }
      else
      {
        v25 = result; /*0x1003bdaa1*/
      }
      v16 = nullptr; /*0x1003bdaa4*/
      if ( result >= 8 ) /*0x1003bdaab*/
      {
        do /*0x1003bdafc*/
        {
          v14 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[35] + 280LL) /*0x1003bdaf1*/
                                                                                       + 280LL)
                                                                           + 280LL)
                                                               + 280LL)
                                                   + 280LL)
                                       + 280LL)
                           + 280LL);
          v25 -= 8LL; /*0x1003bdaf8*/
        }
        while ( v25 ); /*0x1003bdafc*/
      }
    }
    else
    {
      v16 = nullptr; /*0x1003bda99*/
    }
    v17 = (_QWORD *)*v14; /*0x1003bd840*/
    if ( *v14 ) /*0x1003bd840*/
    {
      v18 = v16; /*0x1003bd850*/
      do /*0x1003bd87d*/
      {
        v19 = v17; /*0x1003bd860*/
        v20 = (_QWORD *)((char *)v18 + 1); /*0x1003bd863*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003bd878*/
        v17 = (_QWORD *)*v19; /*0x1003bd87d*/
        v18 = v20; /*0x1003bd883*/
      }
      while ( *v19 ); /*0x1003bd87d*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003bd8a4*/
  }
  *a1 = 0; /*0x1003bd8a9*/
  return result; /*0x1003bda51*/
}