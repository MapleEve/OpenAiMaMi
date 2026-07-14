// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b6a410 depth=3
__int64 __fastcall http::header::map::HeaderMap$LT$T$GT$::try_with_capacity::h5c96bb7d54fc6522(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  char v5; // cl
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax

  if ( a2 ) /*0x100b6a427*/
  {
    v3 = a2 + a2 / 3; /*0x100b6a43c*/
    if ( !__CFADD__(a2, a2 / 3) ) /*0x100b6a43f*/
    {
      _BitScanReverse64(&v4, v3 - 1); /*0x100b6a445*/
      v5 = ~(_BYTE)v4; /*0x100b6a449*/
      v6 = 0; /*0x100b6a455*/
      if ( v3 >= 2 ) /*0x100b6a45c*/
        v6 = 0xFFFFFFFFFFFFFFFFLL >> v5; /*0x100b6a45c*/
      if ( v6 != -1 ) /*0x100b6a464*/
      {
        v7 = v6 + 1; /*0x100b6a466*/
        if ( v6 + 1 <= 0x8000 ) /*0x100b6a471*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b6a4d9*/
          v8 = 2; /*0x100b6a4de*/
          v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v7, 2u); /*0x100b6a4e6*/
          if ( !v9 ) /*0x100b6a4ee*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(2, 4 * v7); /*0x100b6a619*/
          v10 = v9; /*0x100b6a4f4*/
          if ( v7 >= 2 ) /*0x100b6a4fb*/
          {
            v11 = 1; /*0x100b6a4fd*/
            if ( v6 >= 8 ) /*0x100b6a509*/
            {
              v9 += v6 & 0xFFFFFFFFFFFFFFF8LL; /*0x100b6a512*/
              v11 = (v6 & 0xFFFFFFFFFFFFFFF8LL) + 1; /*0x100b6a516*/
              v8 = 0; /*0x100b6a51a*/
              do /*0x100b6a542*/
              {
                *(_OWORD *)&v10[v8] = xmmword_1012D50C0; /*0x100b6a530*/
                *(_OWORD *)&v10[v8 + 4] = xmmword_1012D50C0; /*0x100b6a535*/
                v8 += 8; /*0x100b6a53b*/
              }
              while ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != v8 ); /*0x100b6a542*/
            }
            v12 = v6 - v11 + 1; /*0x100b6a54a*/
            do /*0x100b6a55d*/
            {
              *v9++ = 0xFFFF; /*0x100b6a550*/
              --v12; /*0x100b6a55a*/
            }
            while ( v12 ); /*0x100b6a55d*/
          }
          *v9 = 0xFFFF; /*0x100b6a563*/
          v13 = v7 - (v7 >> 2); /*0x100b6a573*/
          if ( v13 <= 0x13B13B13B13B13BLL ) /*0x100b6a583*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b6a59b*/
            v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(104 * v13, 8u); /*0x100b6a5a9*/
            v14 = 8; /*0x100b6a5ae*/
            v8 = 104 * v13; /*0x100b6a5b3*/
            if ( v15 ) /*0x100b6a5ba*/
            {
              *(_QWORD *)a1 = 0; /*0x100b6a5c3*/
              *(_QWORD *)(a1 + 24) = v13; /*0x100b6a5ca*/
              *(_QWORD *)(a1 + 32) = v15; /*0x100b6a5ce*/
              *(_QWORD *)(a1 + 40) = 0; /*0x100b6a5d2*/
              *(_QWORD *)(a1 + 48) = 0; /*0x100b6a5da*/
              *(_QWORD *)(a1 + 56) = 8; /*0x100b6a5e2*/
              *(_QWORD *)(a1 + 64) = 0; /*0x100b6a5ea*/
              *(_QWORD *)(a1 + 72) = v10; /*0x100b6a5f2*/
              *(_QWORD *)(a1 + 80) = v7; /*0x100b6a5f6*/
              *(_WORD *)(a1 + 88) = v6; /*0x100b6a5fa*/
              return a1; /*0x100b6a5fa*/
            }
          }
          else
          {
            v14 = 0; /*0x100b6a585*/
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v8); /*0x100b6a587*/
        }
      }
    }
    *(_QWORD *)a1 = 3; /*0x100b6a473*/
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0; /*0x100b6a47f*/
    *(_QWORD *)(a1 + 40) = 0; /*0x100b6a487*/
    *(_QWORD *)a1 = 0; /*0x100b6a48f*/
    *(_QWORD *)(a1 + 24) = 0; /*0x100b6a496*/
    *(_QWORD *)(a1 + 32) = 8; /*0x100b6a49e*/
    *(_QWORD *)(a1 + 56) = 8; /*0x100b6a4a6*/
    *(_QWORD *)(a1 + 64) = 0; /*0x100b6a4ae*/
    *(_QWORD *)(a1 + 72) = 2; /*0x100b6a4b6*/
    *(_QWORD *)(a1 + 80) = 0; /*0x100b6a4be*/
    *(_WORD *)(a1 + 88) = 0; /*0x100b6a4c6*/
  }
  return a1; /*0x100b6a602*/
}