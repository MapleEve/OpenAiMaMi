// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x1002325b0 depth=1
__int64 __fastcall alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+8h] [rbp-68h] BYREF
  __int128 v17; // [rsp+10h] [rbp-60h]
  _QWORD v18[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v19[7]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2[4] ) /*0x1002325c8*/
  {
    v19[2] = a2[6]; /*0x1002325d7*/
    v5 = a2[4]; /*0x1002325db*/
    v19[1] = a2[5]; /*0x1002325e2*/
    v19[0] = v5; /*0x1002325e6*/
    v18[2] = a2[2]; /*0x1002325ee*/
    v6 = *a2; /*0x1002325f2*/
    v18[1] = a2[1]; /*0x1002325f9*/
    v18[0] = v6; /*0x1002325fd*/
    alloc::collections::btree::node::Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..Edge$GT$::insert_recursing::he18b2b1bbbdad6ac( /*0x100232618*/
      &v16,
      v19,
      v18,
      a3,
      a2 + 3,
      a2 + 7);
    v7 = (__int64 *)a2[3]; /*0x10023261d*/
    v8 = v16; /*0x100232621*/
    v9 = v17; /*0x100232625*/
  }
  else
  {
    v7 = (__int64 *)a2[3]; /*0x10023262e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100232632*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x100232641*/
    if ( !v8 ) /*0x100232649*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x1002326e0*/
    *(_QWORD *)(v8 + 352) = 0; /*0x10023264f*/
    *v7 = v8; /*0x10023265a*/
    v7[1] = 0; /*0x10023265e*/
    v10 = *a2; /*0x100232667*/
    v11 = a2[1]; /*0x10023266a*/
    v12 = a2[2]; /*0x10023266e*/
    *(_WORD *)(v8 + 626) = 1; /*0x100232672*/
    *(_QWORD *)(v8 + 360) = v10; /*0x10023267b*/
    *(_QWORD *)(v8 + 368) = v11; /*0x100232682*/
    *(_QWORD *)(v8 + 376) = v12; /*0x100232689*/
    v13 = a3[1]; /*0x100232693*/
    *(_QWORD *)v8 = *a3; /*0x100232697*/
    *(_QWORD *)(v8 + 8) = v13; /*0x10023269a*/
    *(_QWORD *)(v8 + 16) = a3[2]; /*0x1002326a2*/
    *(_QWORD *)(v8 + 24) = a3[3]; /*0x1002326aa*/
    v9 = 0; /*0x1002326ae*/
  }
  ++v7[2]; /*0x1002326b1*/
  v14 = a2[3]; /*0x1002326b6*/
  *(_QWORD *)a1 = v8; /*0x1002326ba*/
  *(_OWORD *)(a1 + 8) = v9; /*0x1002326bd*/
  *(_QWORD *)(a1 + 24) = v14; /*0x1002326c2*/
  return a1; /*0x1002326c9*/
}