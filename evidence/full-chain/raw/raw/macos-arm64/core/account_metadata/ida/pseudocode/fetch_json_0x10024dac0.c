// __ZN13codexmate_lib4core16account_metadata10fetch_json @ 0x10024dac0
__int64 __fastcall codexmate_lib::core::account_metadata::fetch_json::h0f198d6016886ca2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // rax
  char v20; // al
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _BYTE __dst[328]; // [rsp+10h] [rbp-480h] BYREF
  _BYTE v26[24]; // [rsp+158h] [rbp-338h] BYREF
  _OWORD v27[20]; // [rsp+170h] [rbp-320h] BYREF
  _QWORD __src[41]; // [rsp+2B8h] [rbp-1D8h] BYREF
  _QWORD v29[3]; // [rsp+400h] [rbp-90h] BYREF
  __int64 v30; // [rsp+418h] [rbp-78h] BYREF
  __int64 v31; // [rsp+420h] [rbp-70h]
  __int64 v32; // [rsp+428h] [rbp-68h]
  __int64 v33; // [rsp+430h] [rbp-60h]
  __int128 v34; // [rsp+438h] [rbp-58h] BYREF
  __int64 v35; // [rsp+448h] [rbp-48h]
  __int64 v36; // [rsp+450h] [rbp-40h] BYREF
  __int64 v37; // [rsp+458h] [rbp-38h]
  unsigned __int64 v38; // [rsp+460h] [rbp-30h]

  codexmate_lib::core::api_client::http_client::hd6199412cc486f7f(__src, a5); /*0x10024daed*/
  result = __src[0]; /*0x10024daf2*/
  v27[0] = *(_OWORD *)&__src[1]; /*0x10024db00*/
  *(_QWORD *)&v27[1] = __src[3]; /*0x10024db1c*/
  if ( __src[0] != 11 ) /*0x10024db27*/
  {
    *(_QWORD *)(a1 + 88) = __src[11]; /*0x10024dd96*/
    *(_QWORD *)(a1 + 80) = __src[10]; /*0x10024dda1*/
    *(_QWORD *)(a1 + 72) = __src[9]; /*0x10024ddac*/
    *(_QWORD *)(a1 + 64) = __src[8]; /*0x10024ddb7*/
    *(_QWORD *)(a1 + 56) = __src[7]; /*0x10024ddc2*/
    *(_QWORD *)(a1 + 48) = __src[6]; /*0x10024ddcd*/
    v13 = __src[4]; /*0x10024ddd1*/
    *(_QWORD *)(a1 + 40) = __src[5]; /*0x10024dddf*/
    *(_QWORD *)(a1 + 32) = v13; /*0x10024dde3*/
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v27[1]; /*0x10024ddee*/
    *(_OWORD *)(a1 + 8) = v27[0]; /*0x10024de04*/
    *(_QWORD *)a1 = result; /*0x10024de08*/
    return result; /*0x10024de0b*/
  }
  v34 = v27[0]; /*0x10024db3b*/
  v35 = *(_QWORD *)&v27[1]; /*0x10024db4a*/
  memset(v27, 1, 24); /*0x10024db66*/
  reqwest::blocking::client::Client::request::h7c2f6eecf4bb7488(__src); /*0x10024db85*/
  reqwest::blocking::request::RequestBuilder::timeout::hb8eadb3e43e5e543(v27, __src); /*0x10024db9f*/
  __src[0] = a4; /*0x10024dba4*/
  __src[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10024dbb2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017B931C, __src); /*0x10024dbce*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(__src, v27); /*0x10024dbf7*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h6eed384825c3beec(v27, __src); /*0x10024dc1d*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__src, v27, 0); /*0x10024dc50*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(v27, __src, 0); /*0x10024dc83*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__src, v27, 0); /*0x10024dcb6*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, __src, 0); /*0x10024dce9*/
  if ( a6 ) /*0x10024dcf1*/
  {
    v9 = *(_QWORD *)(a4 + 32); /*0x10024dcf3*/
    v10 = *(_QWORD *)(a4 + 40); /*0x10024dcf7*/
    *(_QWORD *)&v27[0] = "account_id"; /*0x10024dd02*/
    *((_QWORD *)&v27[0] + 1) = 10; /*0x10024dd09*/
    *(_QWORD *)&v27[1] = v9; /*0x10024dd14*/
    *((_QWORD *)&v27[1] + 1) = v10; /*0x10024dd1b*/
    reqwest::blocking::request::RequestBuilder::query::h447414f572561733(__src, __dst); /*0x10024dd37*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10024dd4f*/
  }
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(__src, __dst); /*0x10024dd62*/
  *(_QWORD *)&v11 = __src[0]; /*0x10024dd67*/
  if ( __src[0] == 3 ) /*0x10024dd72*/
  {
    v12 = __src[1]; /*0x10024dd78*/
    *(_QWORD *)a1 = 6; /*0x10024dd7f*/
    *(_QWORD *)(a1 + 8) = v12; /*0x10024dd86*/
  }
  else
  {
    *((_QWORD *)&v11 + 1) = __src[1]; /*0x10024de17*/
    qmemcpy((char *)&v27[1] + 8, &__src[3], 0x50u); /*0x10024de31*/
    qmemcpy((char *)&v27[6] + 8, &__src[13], 0x48u); /*0x10024de47*/
    v27[0] = v11; /*0x10024de4a*/
    *(_QWORD *)&v27[1] = __src[2]; /*0x10024de58*/
    if ( (unsigned __int16)(WORD4(v27[6]) - 200) >= 0x64u ) /*0x10024de6f*/
    {
      LOWORD(v30) = WORD4(v27[6]); /*0x10024df24*/
      __src[0] = &v30; /*0x10024df2c*/
      __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10024df3a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v29, &unk_1017B9326, __src); /*0x10024df56*/
      *(_QWORD *)(a1 + 24) = v29[2]; /*0x10024df5f*/
      v17 = v29[0]; /*0x10024df63*/
      *(_QWORD *)(a1 + 16) = v29[1]; /*0x10024df71*/
      *(_QWORD *)(a1 + 8) = v17; /*0x10024df75*/
      *(_QWORD *)a1 = 10; /*0x10024df79*/
    }
    else
    {
      v14 = reqwest::blocking::response::Response::content_length::hf7ed9fda65e5734e(v27); /*0x10024de7c*/
      if ( ((v15 >= 0x40001) & v14) == 0 ) /*0x10024de8d*/
      {
        v36 = 0; /*0x10024dfb1*/
        v37 = 1; /*0x10024dfb9*/
        v38 = 0; /*0x10024dfc1*/
        memcpy(__src, v27, 0xB0u); /*0x10024dfdf*/
        __src[22] = 262145; /*0x10024dfe4*/
        __src[23] = 262145; /*0x10024dfef*/
        if ( (std::io::default_read_to_end::hea609f3c6996a6a8(__src, &v36, 0) & 1) != 0 ) /*0x10024e00a*/
        {
          *(_QWORD *)a1 = 2; /*0x10024e00c*/
          *(_QWORD *)(a1 + 8) = v18; /*0x10024e013*/
          core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__src); /*0x10024e01e*/
        }
        else
        {
          core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__src); /*0x10024e02f*/
          if ( v38 <= 0x40000 ) /*0x10024e03e*/
          {
            __src[0] = v37; /*0x10024e0d9*/
            *(_OWORD *)&__src[1] = v38; /*0x10024e0e0*/
            __src[3] = 0; /*0x10024e0f2*/
            serde_json::de::from_trait::ha73f8db442141d1f(&v30, __src); /*0x10024e108*/
            v20 = v30; /*0x10024e10d*/
            if ( (_BYTE)v30 == 6 ) /*0x10024e113*/
            {
              v21 = v31; /*0x10024e115*/
              *(_QWORD *)a1 = 3; /*0x10024e119*/
              *(_QWORD *)(a1 + 8) = v21; /*0x10024e120*/
            }
            else
            {
              v22 = *(_DWORD *)((char *)&v30 + 1); /*0x10024e126*/
              *(_DWORD *)(a1 + 12) = HIDWORD(v30); /*0x10024e12c*/
              *(_DWORD *)(a1 + 9) = v22; /*0x10024e12f*/
              v23 = v31; /*0x10024e132*/
              v24 = v32; /*0x10024e136*/
              *(_QWORD *)(a1 + 32) = v33; /*0x10024e13e*/
              *(_QWORD *)(a1 + 24) = v24; /*0x10024e142*/
              *(_BYTE *)(a1 + 8) = v20; /*0x10024e146*/
              *(_QWORD *)(a1 + 16) = v23; /*0x10024e149*/
              *(_QWORD *)a1 = 11; /*0x10024e14d*/
            }
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, &v36); /*0x10024e044*/
            v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x10024e053*/
            if ( !v19 ) /*0x10024e05b*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x10024e18f*/
            qmemcpy(v19, "account metadata response exceeded the size limit", 49); /*0x10024e0b1*/
            *(_QWORD *)a1 = 9; /*0x10024e0b8*/
            *(_QWORD *)(a1 + 8) = 49; /*0x10024e0bf*/
            *(_QWORD *)(a1 + 16) = v19; /*0x10024e0c7*/
            *(_QWORD *)(a1 + 24) = 49; /*0x10024e0cb*/
          }
        }
        if ( v36 ) /*0x10024e15b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x10024e16a*/
        goto LABEL_13; /*0x10024e16f*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, &__src[22]); /*0x10024de93*/
      v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x10024dea2*/
      if ( !v16 ) /*0x10024deaa*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x10024e17e*/
      qmemcpy(v16, "account metadata response exceeded the size limit", 49); /*0x10024df00*/
      *(_QWORD *)a1 = 9; /*0x10024df07*/
      *(_QWORD *)(a1 + 8) = 49; /*0x10024df0e*/
      *(_QWORD *)(a1 + 16) = v16; /*0x10024df16*/
      *(_QWORD *)(a1 + 24) = 49; /*0x10024df1a*/
    }
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(v27); /*0x10024df87*/
  }
LABEL_13:
  result = v34; /*0x10024df8c*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v34) ) /*0x10024df90*/
    return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v34); /*0x10024df9a*/
  return result; /*0x10024df9f*/
}