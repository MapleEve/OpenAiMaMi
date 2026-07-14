// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b28840 depth=2
__int64 __fastcall reqwest::tls::Certificate::add_to_rustls::h3efc0066a1fcbfde(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // r12
  __int64 v22; // r14
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  unsigned __int64 v26; // r15
  _BYTE v27[64]; // [rsp+0h] [rbp-160h] BYREF
  _BYTE v28[64]; // [rsp+40h] [rbp-120h] BYREF
  __int64 v29; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+88h] [rbp-D8h]
  __int64 v31; // [rsp+90h] [rbp-D0h]
  __int64 v32; // [rsp+98h] [rbp-C8h]
  __int64 v33; // [rsp+A0h] [rbp-C0h]
  __int64 v34; // [rsp+A8h] [rbp-B8h]
  __int64 v35; // [rsp+B0h] [rbp-B0h]
  __int64 v36; // [rsp+B8h] [rbp-A8h]
  __int64 v37; // [rsp+C0h] [rbp-A0h]
  __int64 v38; // [rsp+C8h] [rbp-98h]
  __int64 v39; // [rsp+D0h] [rbp-90h]
  _QWORD *v40; // [rsp+D8h] [rbp-88h]
  char v41; // [rsp+E0h] [rbp-80h]
  _QWORD v42[4]; // [rsp+E8h] [rbp-78h] BYREF
  __int64 v43; // [rsp+108h] [rbp-58h] BYREF
  __int64 v44; // [rsp+110h] [rbp-50h]
  __int64 v45; // [rsp+118h] [rbp-48h]
  __int64 v46; // [rsp+120h] [rbp-40h]
  __int64 v47; // [rsp+128h] [rbp-38h]
  __int64 v48; // [rsp+130h] [rbp-30h]

  v2 = (__int64 *)(a1 + 8); /*0x100b28857*/
  if ( *(_DWORD *)a1 != 1 ) /*0x100b2885e*/
  {
    v31 = *(_QWORD *)(a1 + 24); /*0x100b289a4*/
    v11 = *v2; /*0x100b289ab*/
    v30 = *(_QWORD *)(a1 + 16); /*0x100b289b2*/
    v29 = v11; /*0x100b289b9*/
    rustls::webpki::anchors::RootCertStore::add::h892427c39a7aed48(v28, a2, &v29); /*0x100b289d1*/
    if ( v28[0] != 22 ) /*0x100b289dd*/
    {
      LOWORD(v29) = 0; /*0x100b289e3*/
      return reqwest::error::Error::new::h932ebcfbd56c1104(&v29, v28); /*0x100b28a02*/
    }
    return 0; /*0x100b289dd*/
  }
  v42[2] = *(_QWORD *)(a1 + 24); /*0x100b28868*/
  v3 = *v2; /*0x100b2886c*/
  v42[1] = *(_QWORD *)(a1 + 16); /*0x100b28873*/
  v42[0] = v3; /*0x100b28877*/
  v42[3] = 0; /*0x100b2887b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b28883*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000u, 1u); /*0x100b28892*/
  if ( !v4 ) /*0x100b2889a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100b28c1d*/
  v5 = v4; /*0x100b288a0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b288a3*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x50u, 1u); /*0x100b288b2*/
  if ( !v6 ) /*0x100b288ba*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 80); /*0x100b28c2e*/
  v7 = v6; /*0x100b288c0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b288c3*/
  v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x400u, 1u); /*0x100b288d2*/
  if ( !v8 ) /*0x100b288da*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1024); /*0x100b28c3f*/
  v39 = 0; /*0x100b288e0*/
  v38 = 0; /*0x100b288eb*/
  v37 = 0; /*0x100b288f6*/
  v40 = v42; /*0x100b28905*/
  v29 = 80; /*0x100b2890c*/
  v30 = v7; /*0x100b28917*/
  v31 = 0; /*0x100b2891e*/
  v32 = 1024; /*0x100b28929*/
  v33 = v8; /*0x100b28934*/
  v34 = 0; /*0x100b2893b*/
  v35 = v5; /*0x100b28946*/
  v36 = 0x2000; /*0x100b2894d*/
  v41 = 0; /*0x100b28958*/
  core::iter::adapters::try_process::had8e9f8cf58424f5(&v43, &v29); /*0x100b28967*/
  v9 = v43; /*0x100b2896c*/
  v10 = v44; /*0x100b28970*/
  if ( !__OFSUB__(-v43, 1) ) /*0x100b2897a*/
  {
    v12 = v45; /*0x100b28a07*/
    v13 = 24 * v45; /*0x100b28a13*/
    v14 = v44 + 24 * v45; /*0x100b28a17*/
    v43 = v44; /*0x100b28a1b*/
    v45 = v9; /*0x100b28a23*/
    v47 = v14; /*0x100b28a27*/
    v46 = v14; /*0x100b28a2b*/
    v15 = v44; /*0x100b28a2f*/
    if ( v12 ) /*0x100b28a35*/
    {
      v48 = v9; /*0x100b28a3b*/
      v16 = 0; /*0x100b28a46*/
      while ( 1 ) /*0x100b28a50*/
      {
        v17 = *(_QWORD *)(v10 + v16); /*0x100b28a50*/
        if ( v17 == 0x8000000000000000LL ) /*0x100b28a61*/
        {
          v15 = v10 + v16 + 24; /*0x100b28aae*/
          goto LABEL_17; /*0x100b28aae*/
        }
        v18 = *(_QWORD *)(v10 + v16 + 8); /*0x100b28a63*/
        v31 = *(_QWORD *)(v10 + v16 + 16); /*0x100b28a6d*/
        v30 = v18; /*0x100b28a71*/
        v29 = v17; /*0x100b28a75*/
        rustls::webpki::anchors::RootCertStore::add::h892427c39a7aed48(v27, a2, &v29); /*0x100b28a8d*/
        if ( v27[0] != 22 ) /*0x100b28a99*/
          break; /*0x100b28a99*/
        v16 += 24; /*0x100b28a9f*/
        if ( v13 == v16 ) /*0x100b28aa6*/
        {
          v15 = v47; /*0x100b28aa8*/
LABEL_17:
          v44 = v15; /*0x100b28ab3*/
          v9 = v48; /*0x100b28ab7*/
          goto LABEL_18; /*0x100b28ab7*/
        }
      }
      v44 = v10 + v16 + 24; /*0x100b28b61*/
      LOWORD(v29) = 0; /*0x100b28b65*/
      v22 = reqwest::error::Error::new::h932ebcfbd56c1104(&v29, v27); /*0x100b28b81*/
      v23 = v48; /*0x100b28b8b*/
      if ( v13 - 24 != v16 ) /*0x100b28b8f*/
      {
        v24 = v13 - v16 - 24; /*0x100b28b94*/
        v25 = v10 + v16 + 32; /*0x100b28b98*/
        v26 = v24 / 0x18; /*0x100b28bb0*/
        do /*0x100b28bc7*/
        {
          if ( *(_QWORD *)(v25 - 8) ) /*0x100b28bc9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b28bdc*/
          v25 += 24; /*0x100b28bc0*/
          --v26; /*0x100b28bc4*/
        }
        while ( v26 ); /*0x100b28bc7*/
      }
      if ( v23 ) /*0x100b28be6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b28bf9*/
      v10 = v22; /*0x100b28bfe*/
      if ( v42[0] ) /*0x100b28c08*/
        goto LABEL_7; /*0x100b28c08*/
      return v10; /*0x100b28c08*/
    }
LABEL_18:
    if ( v47 != v15 ) /*0x100b28ad5*/
    {
      v19 = (v47 - v15) / 0x18uLL; /*0x100b28ada*/
      v20 = v15 + 8; /*0x100b28ade*/
      do /*0x100b28af7*/
      {
        if ( *(_QWORD *)(v20 - 8) ) /*0x100b28af9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b28b0c*/
        v20 += 24; /*0x100b28af0*/
        --v19; /*0x100b28af4*/
      }
      while ( v19 ); /*0x100b28af7*/
    }
    if ( v9 ) /*0x100b28b16*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b28b29*/
    if ( v42[0] ) /*0x100b28b35*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b28b40*/
    return 0; /*0x100b28b45*/
  }
  if ( v42[0] ) /*0x100b28987*/
LABEL_7:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2898d*/
  return v10; /*0x100b28b4a*/
}