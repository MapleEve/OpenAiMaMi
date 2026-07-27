// __ZN13codexmate_lib8commands8accounts17push_core_warning @ 0x100695970
__int64 __fastcall codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(
        _QWORD *a1,
        const void *a2,
        signed __int64 a3,
        _QWORD *a4)
{
  const void *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // [rsp+0h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-50h]
  size_t __n; // [rsp+38h] [rbp-48h]
  void *__s2; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]

  v5 = a2; /*0x100695988*/
  v6 = a1[1]; /*0x10069598b*/
  v12 = a1; /*0x10069598f*/
  v18 = a1[2]; /*0x100695997*/
  if ( !v18 ) /*0x10069599e*/
  {
LABEL_10:
    if ( a3 < 0 ) /*0x100695a44*/
    {
      v9 = 0; /*0x100695a46*/
      goto LABEL_12; /*0x100695a46*/
    }
    if ( a3 ) /*0x100695a56*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100695a58*/
      v9 = 1; /*0x100695a5d*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100695a6b*/
      if ( !v10 ) /*0x100695a73*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a3); /*0x100695a49*/
      v11 = v10; /*0x100695a75*/
    }
    else
    {
      v11 = 1; /*0x100695a7a*/
    }
    memcpy((void *)v11, v5, a3); /*0x100695a88*/
    v13 = *a4; /*0x100695a98*/
    v14 = a4[1]; /*0x100695a9c*/
    v15 = a4[2]; /*0x100695aa4*/
    if ( v18 == *v12 ) /*0x100695abf*/
    {
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(v12); /*0x100695ac4*/
      v6 = v12[1]; /*0x100695ac9*/
    }
    result = 48 * v18; /*0x100695ad5*/
    *(_QWORD *)(v6 + result + 40) = v15; /*0x100695add*/
    *(_QWORD *)(v6 + result + 32) = v14; /*0x100695ae6*/
    *(_QWORD *)(v6 + result + 24) = v13; /*0x100695aef*/
    *(_QWORD *)(v6 + result + 16) = a3; /*0x100695af8*/
    *(_QWORD *)(v6 + result + 8) = v11; /*0x100695b05*/
    *(_QWORD *)(v6 + result) = a3; /*0x100695b0a*/
    v12[2] = v18 + 1; /*0x100695b12*/
    return result; /*0x100695b12*/
  }
  __s2 = (void *)a4[1]; /*0x1006959b8*/
  __n = a4[2]; /*0x1006959c0*/
  v7 = 0; /*0x1006959c4*/
  while ( 1 ) /*0x1006959d9*/
  {
    if ( *(_QWORD *)(v6 + v7 + 16) == a3 ) /*0x1006959de*/
    {
      a1 = *(_QWORD **)(v6 + v7 + 8); /*0x1006959e0*/
      a2 = v5; /*0x1006959e5*/
      if ( !memcmp(a1, v5, a3) && *(_QWORD *)(v6 + v7 + 40) == __n ) /*0x1006959fd*/
      {
        a1 = *(_QWORD **)(v6 + v7 + 32); /*0x1006959ff*/
        a2 = __s2; /*0x100695a04*/
        if ( !memcmp(a1, __s2, __n) ) /*0x100695a0c*/
          break; /*0x100695a0c*/
      }
    }
    v7 += 48; /*0x1006959d0*/
    if ( 48 * v18 == v7 ) /*0x1006959d7*/
      goto LABEL_10; /*0x1006959d7*/
  }
  result = (__int64)a4; /*0x100695a15*/
  if ( *a4 ) /*0x100695a19*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, *a4, 1); /*0x100695a3c*/
  return result; /*0x100695a2e*/
}