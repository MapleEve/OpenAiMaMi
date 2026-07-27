// __ZN13codexmate_lib4core5relay7manager12RelayManager24set_codex_router_enabled28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100915240 | 基线 same-set
_BYTE **__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h62a10431b75f1e55(
        _QWORD **a1,
        void *a2,
        signed __int64 a3)
{
  _BYTE **result; // rax
  _BYTE *v4; // rcx
  char v5; // r13
  __int64 *v6; // rcx
  __int64 v7; // r14
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD v13[3]; // [rsp+0h] [rbp-60h] BYREF
  char v14; // [rsp+18h] [rbp-48h]
  char v15; // [rsp+19h] [rbp-47h]
  void *__src; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+28h] [rbp-38h]
  char v18; // [rsp+37h] [rbp-29h]

  result = (_BYTE **)*a1; /*0x100915251*/
  v4 = (_BYTE *)**a1; /*0x100915254*/
  v5 = *v4 + 1; /*0x10091525b*/
  *v4 = v5; /*0x10091525e*/
  v6 = (__int64 *)result[1]; /*0x100915261*/
  v7 = *v6; /*0x100915265*/
  if ( *v6 ) /*0x100915265*/
  {
    if ( a3 < 0 ) /*0x100915277*/
    {
      v9 = 0; /*0x100915279*/
      goto LABEL_4; /*0x100915279*/
    }
    v10 = v6[1]; /*0x100915287*/
    v18 = *result[2]; /*0x100915292*/
    if ( a3 ) /*0x100915295*/
    {
      v17 = v10; /*0x100915297*/
      __src = a2; /*0x10091529b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10091529f*/
      v9 = 1; /*0x1009152a4*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1009152b2*/
      if ( !v11 ) /*0x1009152ba*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a3); /*0x10091527c*/
      v12 = v11; /*0x1009152bc*/
      a2 = __src; /*0x1009152bf*/
      v10 = v17; /*0x1009152c3*/
    }
    else
    {
      v12 = 1; /*0x1009152c9*/
    }
    memcpy((void *)v12, a2, a3); /*0x1009152d5*/
    v13[0] = a3; /*0x1009152da*/
    v13[1] = v12; /*0x1009152de*/
    v13[2] = a3; /*0x1009152e2*/
    v14 = v5; /*0x1009152e6*/
    v15 = v18; /*0x1009152ee*/
    return (_BYTE **)(*(__int64 (__fastcall **)(__int64, _QWORD *))(v10 + 40))(v7, v13); /*0x1009152f8*/
  }
  return result; /*0x1009152fd*/
}