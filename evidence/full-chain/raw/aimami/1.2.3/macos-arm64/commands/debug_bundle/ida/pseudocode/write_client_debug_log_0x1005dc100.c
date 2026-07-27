// __ZN13codexmate_lib8commands12debug_bundle22write_client_debug_log @ 0x1005dc100 | 基线 same-set
double __fastcall codexmate_lib::commands::debug_bundle::write_client_debug_log::h404eabbe19560404(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rsi
  double result; // xmm0_8
  _QWORD v17[3]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-68h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-50h] BYREF
  __int64 v20; // [rsp+70h] [rbp-30h]

  v19[2] = a1[2]; /*0x1005dc115*/
  v1 = *a1; /*0x1005dc119*/
  v19[1] = a1[1]; /*0x1005dc120*/
  v19[0] = v1; /*0x1005dc124*/
  v18[2] = a1[5]; /*0x1005dc12c*/
  v2 = a1[3]; /*0x1005dc130*/
  v18[1] = a1[4]; /*0x1005dc138*/
  v18[0] = v2; /*0x1005dc13c*/
  v17[2] = a1[8]; /*0x1005dc144*/
  v3 = a1[6]; /*0x1005dc148*/
  v17[1] = a1[7]; /*0x1005dc150*/
  v17[0] = v3; /*0x1005dc154*/
  v4 = a1[9]; /*0x1005dc158*/
  v5 = a1[10]; /*0x1005dc15c*/
  v6 = 0; /*0x1005dc160*/
  v7 = v5; /*0x1005dc168*/
  if ( __OFSUB__(-v4, 1) ) /*0x1005dc165*/
    v7 = 0; /*0x1005dc16b*/
  v8 = a1[11]; /*0x1005dc16f*/
  v9 = a1[12]; /*0x1005dc173*/
  v10 = a1[13]; /*0x1005dc17d*/
  v11 = v10; /*0x1005dc181*/
  if ( __OFSUB__(-v9, 1) ) /*0x1005dc17a*/
    v11 = 0; /*0x1005dc184*/
  v12 = a1[14]; /*0x1005dc188*/
  v13 = a1[15]; /*0x1005dc18c*/
  v14 = a1[16]; /*0x1005dc196*/
  v15 = a1[17]; /*0x1005dc19d*/
  v20 = v14; /*0x1005dc1a4*/
  if ( !__OFSUB__(-v13, 1) ) /*0x1005dc1a8*/
    v6 = v14; /*0x1005dc1a8*/
  codexmate_lib::platform::debug_log::write_client_event::hdbe9d4c85335e4fd( /*0x1005dc1c6*/
    (unsigned int)v19,
    (unsigned int)v18,
    (unsigned int)v17,
    v7,
    v8,
    v11,
    v12,
    v6,
    v15);
  if ( 2 * v4 ) /*0x1005dc1cb*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1005dc20c*/
    if ( !(2 * v9) ) /*0x1005dc21c*/
    {
LABEL_9:
      if ( !(2 * v13) ) /*0x1005dc1e5*/
        return result; /*0x1005dc1f0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v13, 1); /*0x1005dc247*/
    }
  }
  else if ( !(2 * v9) ) /*0x1005dc1d8*/
  {
    goto LABEL_9; /*0x1005dc1e3*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1005dc229*/
  if ( 2 * v13 ) /*0x1005dc22e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v13, 1); /*0x1005dc239*/
  return result; /*0x1005dc1f2*/
}