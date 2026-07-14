// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x10105ac40 depth=2
_QWORD *__fastcall _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        double a4,
        double a5,
        double a6)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // eax
  size_t v12; // r15
  __int64 v13; // rsi
  const void *v14; // rbx
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  size_t v18; // r9
  _QWORD *v19; // r15
  void *v20; // rdi
  const void *v21; // rsi
  size_t v22; // rbx
  size_t v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // r15
  _QWORD v27[4]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+28h] [rbp-38h]
  _QWORD *v29; // [rsp+30h] [rbp-30h]

  v29 = a3; /*0x10105ac51*/
  v28 = a1; /*0x10105ac58*/
  while ( 1 ) /*0x10105ac60*/
  {
    v7 = a2[2]; /*0x10105ac60*/
    serde_json::read::SliceRead::skip_to_escape::hd549389233ff43ee(a2); /*0x10105ac67*/
    v8 = a2[1]; /*0x10105ac6c*/
    v9 = a2[2]; /*0x10105ac70*/
    if ( v9 == v8 ) /*0x10105ac77*/
    {
      v27[0] = 4; /*0x10105ad8f*/
LABEL_18:
      v25 = v28; /*0x10105ada8*/
      serde_json::read::error::h0a43b4e7c9054be0(v28, a2, v27); /*0x10105adb6*/
      return v25; /*0x10105adbb*/
    }
    if ( v9 >= v8 ) /*0x10105ac7d*/
      core::panicking::panic_bounds_check::h56740b1198b22635(a2[2], a2[1], (__int64)&off_1015ABCD0); /*0x10105ae76*/
    v10 = *a2; /*0x10105ac83*/
    v11 = *(unsigned __int8 *)(*a2 + v9); /*0x10105ac86*/
    if ( v11 != 92 ) /*0x10105ac8e*/
      break; /*0x10105ac8e*/
    v12 = v9 - v7; /*0x10105ac97*/
    if ( v9 < v7 ) /*0x10105ac9a*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v7, a2[2], v8, &off_1015ABD18, a4, a5, a6); /*0x10105ae12*/
    v13 = v29[2]; /*0x10105aca7*/
    if ( v12 > *v29 - v13 ) /*0x10105acb1*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::hdad09ea92d410a19(v29, v13, v9 - v7, 1, 1); /*0x10105ad07*/
      v13 = v29[2]; /*0x10105ad10*/
    }
    v14 = (const void *)(v7 + v10); /*0x10105acb3*/
    v15 = v29; /*0x10105acb6*/
    memcpy((void *)(v29[1] + v13), v14, v12); /*0x10105acc7*/
    v29[2] += v12; /*0x10105accc*/
    a2[2] = v9 + 1; /*0x10105acd3*/
    v16 = serde_json::read::parse_escape::hbc99868345c93110(a2, 1, v15); /*0x10105ace2*/
    if ( v16 ) /*0x10105acea*/
    {
      v25 = v28; /*0x10105adbd*/
      v28[1] = v16; /*0x10105adc1*/
      *v25 = 2; /*0x10105adc5*/
      return v25; /*0x10105adcc*/
    }
  }
  if ( v11 != 34 ) /*0x10105ad19*/
  {
    a2[2] = v9 + 1; /*0x10105ad9c*/
    v27[0] = 16; /*0x10105ada0*/
    goto LABEL_18; /*0x10105ada0*/
  }
  v17 = v29[2]; /*0x10105ad1f*/
  if ( v17 ) /*0x10105ad26*/
  {
    v18 = v9 - v7; /*0x10105ad2f*/
    if ( v9 < v7 ) /*0x10105ad32*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v7, a2[2], v8, &off_1015ABD00, a4, a5, a6); /*0x10105ae24*/
    if ( v18 > *v29 - v17 ) /*0x10105ad45*/
    {
      v27[3] = v9 - v7; /*0x10105ae50*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::hdad09ea92d410a19(v29, v17, v9 - v7, 1, 1); /*0x10105ae54*/
      v18 = v9 - v7; /*0x10105ae59*/
      v17 = v29[2]; /*0x10105ae5d*/
    }
    v19 = v29; /*0x10105ad4e*/
    v20 = (void *)(v29[1] + v17); /*0x10105ad56*/
    v21 = (const void *)(v7 + v10); /*0x10105ad59*/
    v22 = v18; /*0x10105ad5f*/
    memcpy(v20, v21, v18); /*0x10105ad62*/
    v23 = v29[2] + v22; /*0x10105ad67*/
    v29[2] = v23; /*0x10105ad6b*/
    a2[2] = v9 + 1; /*0x10105ad72*/
    v24 = v19[1]; /*0x10105ad76*/
    v25 = v28; /*0x10105ad7a*/
    *v28 = 1; /*0x10105ad7e*/
    v25[1] = v24; /*0x10105ad85*/
    v25[2] = v23; /*0x10105ad89*/
  }
  else
  {
    if ( v9 < v7 ) /*0x10105add4*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v7, a2[2], v8, &off_1015ABCE8, a4, a5, a6); /*0x10105ae36*/
    a2[2] = v9 + 1; /*0x10105addc*/
    v25 = v28; /*0x10105ade0*/
    *v28 = 0; /*0x10105ade4*/
    v25[1] = v7 + v10; /*0x10105adeb*/
    v25[2] = v9 - v7; /*0x10105adef*/
  }
  return v25; /*0x10105adf6*/
}