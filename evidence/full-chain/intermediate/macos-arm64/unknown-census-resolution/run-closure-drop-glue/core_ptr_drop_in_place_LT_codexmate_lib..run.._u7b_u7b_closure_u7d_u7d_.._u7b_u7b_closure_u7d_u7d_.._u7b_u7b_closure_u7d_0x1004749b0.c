// IDA Hex-Rays decompile evidence
// addr: 0x1004749b0
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb52061c4936998c3(
        __int64 a1)
{
  __int64 *v2; // r12
  int v3; // eax
  __int64 v4; // rsi
  double result; // xmm0_8
  _QWORD *v6; // r13
  __int64 v7; // rdi
  __int64 i; // r15
  __int64 v9; // rdi
  __int64 j; // r15
  __int64 *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r13
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi

  if ( *(_BYTE *)(a1 + 5304) ) /*0x1004749c1*/
  {
    if ( *(_BYTE *)(a1 + 5304) != 3 ) /*0x1004749d3*/
      return result; /*0x1004749d3*/
    if ( *(_BYTE *)(a1 + 5296) == 3 ) /*0x1004749ed*/
    {
      v2 = (__int64 *)(a1 + 3712); /*0x100474b06*/
      v3 = *(unsigned __int8 *)(a1 + 5288); /*0x100474b0d*/
      if ( v3 != 3 ) /*0x100474b19*/
      {
LABEL_6:
        if ( v3 ) /*0x100474a12*/
          goto LABEL_9; /*0x100474a12*/
        v4 = *v2; /*0x100474a14*/
        if ( !*v2 ) /*0x100474a14*/
          goto LABEL_9; /*0x100474a1b*/
LABEL_8:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[1], v4, 1); /*0x100474a1d*/
        goto LABEL_9; /*0x100474a27*/
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 5296) ) /*0x1004749e3*/
      {
LABEL_9:
        core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(a1); /*0x100474a2c*/
        if ( *(_QWORD *)(a1 + 520) == 0x8000000000000000LL ) /*0x100474a3b*/
          return result; /*0x100474a3b*/
        v6 = (_QWORD *)(a1 + 520); /*0x100474a41*/
        v7 = *(_QWORD *)(a1 + 528); /*0x100474a4f*/
        for ( i = *(_QWORD *)(a1 + 536) + 1LL; i != 1; --i ) /*0x100474a5d*/
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v7); /*0x100474a6d*/
          v7 += 96; /*0x100474a72*/
        }
        goto LABEL_17; /*0x100474a64*/
      }
      v2 = (__int64 *)(a1 + 2128); /*0x1004749f7*/
      v3 = *(unsigned __int8 *)(a1 + 3704); /*0x1004749fe*/
      if ( v3 != 3 ) /*0x100474a0a*/
        goto LABEL_6; /*0x100474a0a*/
    }
    if ( *((_BYTE *)v2 + 1568) != 3 ) /*0x100474b28*/
    {
LABEL_89:
      v2 += 5; /*0x100474f2b*/
      v4 = *v2; /*0x100474f2f*/
      if ( !*v2 ) /*0x100474f2f*/
        goto LABEL_9; /*0x100474f36*/
      goto LABEL_8; /*0x100474f36*/
    }
    v11 = v2 + 42; /*0x100474b2e*/
    v12 = *((unsigned __int8 *)v2 + 577); /*0x100474b36*/
    switch ( v12 ) /*0x100474b42*/
    {
      case 5: /*0x100474b42*/
        if ( *((_BYTE *)v2 + 1424) == 3 ) /*0x100474c0d*/
        {
          v17 = *((unsigned __int8 *)v2 + 704); /*0x100474c13*/
          if ( v17 == 4 ) /*0x100474c1f*/
          {
            if ( *((_BYTE *)v2 + 1416) == 3 ) /*0x100474d14*/
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v2 + 124); /*0x100474e80*/
            }
            else if ( !*((_BYTE *)v2 + 1416) ) /*0x100474d08*/
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v2 + 107); /*0x100474d2a*/
            }
          }
          else if ( v17 == 3 ) /*0x100474c28*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v2[89], v2[90]); /*0x100474c3e*/
          }
          v29 = v2[79]; /*0x100474e85*/
          if ( v29 ) /*0x100474e90*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[80], v29, 1); /*0x100474e9f*/
        }
        if ( v2[64] == 0x8000000000000000LL ) /*0x100474eac*/
          *((_BYTE *)v2 + 576) = 0; /*0x100474eae*/
        break;
      case 4: /*0x100474b42*/
        if ( *((_BYTE *)v2 + 1424) == 3 ) /*0x100474bc9*/
        {
          v16 = *((unsigned __int8 *)v2 + 704); /*0x100474bcf*/
          if ( v16 == 4 ) /*0x100474bdb*/
          {
            if ( *((_BYTE *)v2 + 1416) == 3 ) /*0x100474c9e*/
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v2 + 124); /*0x100474e52*/
            }
            else if ( !*((_BYTE *)v2 + 1416) ) /*0x100474c92*/
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v2 + 107); /*0x100474cb4*/
            }
          }
          else if ( v16 == 3 ) /*0x100474be4*/
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v2[89], v2[90]); /*0x100474bfa*/
          }
          v28 = v2[79]; /*0x100474e57*/
          if ( v28 ) /*0x100474e62*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[80], v28, 1); /*0x100474e71*/
        }
        break;
      case 3: /*0x100474b42*/
        switch ( *((_BYTE *)v2 + 712) ) /*0x100474b79*/
        {
          case 3: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1560) == 3 ) /*0x100474d3d*/
            {
              v21 = *((unsigned __int8 *)v2 + 840); /*0x100474d43*/
              v19 = 96; /*0x100474d4c*/
              if ( v21 == 4 ) /*0x100474d55*/
              {
                if ( *((_BYTE *)v2 + 1552) == 3 ) /*0x100474fc1*/
                {
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v2 + 141); /*0x100475024*/
                }
                else if ( !*((_BYTE *)v2 + 1552) ) /*0x100474fb5*/
                {
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v2 + 124); /*0x100474fcf*/
                }
              }
              else if ( v21 == 3 ) /*0x100474d5e*/
              {
                core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x100474d74*/
                  v2[106],
                  v2[107]);
              }
              goto LABEL_109; /*0x100474d79*/
            }
            break; /*0x100474d79*/
          case 4: /*0x100474b79*/
          case 7: /*0x100474b79*/
          case 8: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1520) == 3 ) /*0x100474b84*/
            {
              v13 = *((unsigned __int8 *)v2 + 800); /*0x100474b8a*/
              if ( v13 == 3 ) /*0x100474b96*/
                goto LABEL_72; /*0x100474b96*/
              if ( v13 == 4 ) /*0x100474b9f*/
              {
                v14 = *((unsigned __int8 *)v2 + 1512); /*0x100474ba5*/
                if ( *((_BYTE *)v2 + 1512) ) /*0x100474ba5*/
                {
                  v15 = 94; /*0x100474bb6*/
                  goto LABEL_62; /*0x100474bbb*/
                }
                v24 = 77; /*0x100474fae*/
                goto LABEL_105; /*0x100474fb3*/
              }
            }
            break; /*0x100474fb3*/
          case 5: /*0x100474b79*/
          case 6: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1561) == 3 ) /*0x100474c51*/
            {
              v18 = *((unsigned __int8 *)v2 + 768); /*0x100474c57*/
              v19 = 190; /*0x100474c60*/
              if ( v18 != 4 ) /*0x100474c69*/
              {
                if ( v18 != 3 ) /*0x100474c72*/
                  goto LABEL_109; /*0x100474c72*/
                goto LABEL_42; /*0x100474c72*/
              }
              if ( *((_BYTE *)v2 + 1480) == 3 ) /*0x100474f4d*/
                goto LABEL_106; /*0x100474f4d*/
              if ( *((_BYTE *)v2 + 1480) ) /*0x100474f41*/
                goto LABEL_109; /*0x100474f55*/
              goto LABEL_93; /*0x100474f55*/
            }
            break; /*0x100474f55*/
          case 9: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1521) == 3 ) /*0x100474dd9*/
            {
              v23 = *((unsigned __int8 *)v2 + 768); /*0x100474ddf*/
              if ( v23 == 3 ) /*0x100474deb*/
                goto LABEL_94; /*0x100474deb*/
              if ( v23 == 4 ) /*0x100474df4*/
              {
                v14 = *((unsigned __int8 *)v2 + 1480); /*0x100474dfa*/
                if ( *((_BYTE *)v2 + 1480) ) /*0x100474dfa*/
                  goto LABEL_61; /*0x100474e05*/
                goto LABEL_68; /*0x100474e05*/
              }
            }
            break; /*0x100474e05*/
          case 0xA: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1521) == 3 ) /*0x100474d87*/
            {
              v22 = *((unsigned __int8 *)v2 + 768); /*0x100474d8d*/
              if ( v22 == 3 ) /*0x100474d99*/
              {
LABEL_94:
                v26 = 56; /*0x100474f6d*/
                v27 = 55; /*0x100474f72*/
                goto LABEL_95; /*0x100474f72*/
              }
              if ( v22 == 4 ) /*0x100474da2*/
              {
                v14 = *((unsigned __int8 *)v2 + 1480); /*0x100474da8*/
                if ( !*((_BYTE *)v2 + 1480) ) /*0x100474db3*/
                {
LABEL_68:
                  v24 = 73; /*0x100474e07*/
                  goto LABEL_105; /*0x100474e0c*/
                }
LABEL_61:
                v15 = 90; /*0x100474db5*/
LABEL_62:
                if ( v14 == 3 ) /*0x100474dbd*/
                  goto LABEL_63; /*0x100474dbd*/
              }
            }
            break; /*0x100474dbd*/
          case 0xB: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1520) == 3 ) /*0x100474e1a*/
            {
              v25 = *((unsigned __int8 *)v2 + 800); /*0x100474e20*/
              if ( v25 == 4 ) /*0x100474e2c*/
              {
                if ( *((_BYTE *)v2 + 1512) == 3 ) /*0x100474fe2*/
                {
                  v15 = 94; /*0x10047504a*/
LABEL_63:
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(&v11[v15]); /*0x100474dc3*/
                }
                else
                {
                  v24 = 77; /*0x100474fe4*/
                  if ( !*((_BYTE *)v2 + 1512) ) /*0x100474fd6*/
LABEL_105:
                    core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(&v11[v24]); /*0x100474ff1*/
                }
              }
              else if ( v25 == 3 ) /*0x100474e35*/
              {
LABEL_72:
                v26 = 60; /*0x100474e3b*/
                v27 = 59; /*0x100474e40*/
LABEL_95:
                core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x100474f77*/
                  v11[v27],
                  v11[v26]);
              }
            }
            break; /*0x100474f84*/
          case 0xC: /*0x100474b79*/
          case 0xD: /*0x100474b79*/
            if ( *((_BYTE *)v2 + 1560) == 3 ) /*0x100474cc7*/
            {
              v20 = *((unsigned __int8 *)v2 + 768); /*0x100474ccd*/
              v19 = 190; /*0x100474cd6*/
              if ( v20 == 4 ) /*0x100474cdf*/
              {
                if ( *((_BYTE *)v2 + 1480) == 3 ) /*0x100474f95*/
                {
LABEL_106:
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v2 + 132); /*0x100474ffe*/
                }
                else if ( !*((_BYTE *)v2 + 1480) ) /*0x100474f89*/
                {
LABEL_93:
                  core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v2 + 115); /*0x100474f5b*/
                }
              }
              else if ( v20 == 3 ) /*0x100474ce8*/
              {
LABEL_42:
                core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v2[97], v2[98]); /*0x100474c78*/
              }
LABEL_109:
              v32 = v2[v19]; /*0x100475029*/
              if ( v32 ) /*0x100475030*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[v19 + 1], v32, 1); /*0x100475040*/
            }
            break; /*0x100475045*/
          default:
            break;
        }
LABEL_82:
        v30 = v2[61]; /*0x100474ec0*/
        if ( v30 ) /*0x100474ecb*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[62], v30, 1); /*0x100474eda*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v2[60]) ) /*0x100474ee7*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(v2 + 60, v30); /*0x100474ef5*/
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v2 + 42); /*0x100474efd*/
        v31 = v2[57]; /*0x100474f02*/
        if ( v31 ) /*0x100474f0d*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2[58], v31, 1); /*0x100474f1c*/
        goto LABEL_88; /*0x100474f1c*/
      default:
LABEL_88:
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v2 + 13); /*0x100474f21*/
        goto LABEL_89; /*0x100474f26*/
    }
    *((_BYTE *)v2 + 576) = 0; /*0x100474eb7*/
    goto LABEL_82; /*0x100474eb7*/
  }
  core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(a1); /*0x100474a7a*/
  if ( __OFSUB__(0, *(_QWORD *)(a1 + 520)) ) /*0x100474a88*/
    return result; /*0x100474a88*/
  v6 = (_QWORD *)(a1 + 520); /*0x100474a8a*/
  v9 = *(_QWORD *)(a1 + 528); /*0x100474a98*/
  for ( j = *(_QWORD *)(a1 + 536) + 1LL; j != 1; --j ) /*0x100474aa6*/
  {
    core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v9); /*0x100474abd*/
    v9 += 96; /*0x100474ac2*/
  }
LABEL_17:
  if ( *v6 ) /*0x100474ac7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 528), 96LL * *v6, 8); /*0x100474af2*/
  return result; /*0x100474ae8*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100489590  __ZN4core3ptr46drop_in_place$LT$tauri..ipc..InvokeMessage$GT$17hb81016c6923bcafbE_4
// 0x1007e0f80  __ZN4core3ptr64drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$17h5ed8c42e5a0b657cE_0
// 0x100491130  __ZN4core3ptr96drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$17he09c21e64e830488E_3
// 0x10048c7f0  __ZN4core3ptr60drop_in_place$LT$reqwest..async_impl..response..Response$GT$17h21f3ce44ac02ee4aE_3
// 0x10048b350  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_3
// 0x100eeae30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he53e89bcba3b87c6E
// 0x100489930  __ZN4core3ptr49drop_in_place$LT$http..header..map..HeaderMap$GT$17hb91855b753871e5fE_4
// 0x10048ea70  __ZN4core3ptr70drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$17hff9b9095308c72b3E_4
