// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x1003bb490 d=1
__int64 __fastcall alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r14
  _QWORD *v6; // rcx
  size_t v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  _QWORD *v11; // r14
  size_t v12; // rdx
  __int64 v13; // r12
  int v14; // eax
  char v15; // cl
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  char v30[24]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v31[3]; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v33; // [rsp+40h] [rbp-D0h]
  _QWORD *v34; // [rsp+48h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+50h] [rbp-C0h]
  _QWORD v36[4]; // [rsp+58h] [rbp-B8h] BYREF
  void *__s1; // [rsp+78h] [rbp-98h] BYREF
  _QWORD *v38; // [rsp+80h] [rbp-90h]
  unsigned __int64 *v39; // [rsp+88h] [rbp-88h]
  _QWORD *v40; // [rsp+90h] [rbp-80h]
  __int64 v41; // [rsp+98h] [rbp-78h]
  _QWORD *v42; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v43; // [rsp+A8h] [rbp-68h] BYREF
  _QWORD *v44; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-58h]
  _QWORD *v46; // [rsp+C0h] [rbp-50h]
  _QWORD *v47; // [rsp+C8h] [rbp-48h]
  __int64 v48; // [rsp+D0h] [rbp-40h]
  __int64 v49; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v50; // [rsp+E0h] [rbp-30h]

  v5 = a1; /*0x1003bb4a7*/
  v6 = (_QWORD *)*a2; /*0x1003bb4b4*/
  if ( *a2 ) /*0x1003bb4b4*/
  {
    v42 = a4; /*0x1003bb4c0*/
    v41 = a1; /*0x1003bb4c4*/
    v38 = a2; /*0x1003bb4c8*/
    v50 = a2[1]; /*0x1003bb4d3*/
    __s1 = *(void **)(a3 + 8); /*0x1003bb4db*/
    v39 = (unsigned __int64 *)a3; /*0x1003bb4e2*/
    v7 = *(_QWORD *)(a3 + 16); /*0x1003bb4e9*/
    while ( 2 ) /*0x1003bb4ed*/
    {
      v8 = v6 + 45; /*0x1003bb4ed*/
      v40 = v6; /*0x1003bb4f4*/
      v32 = *((unsigned __int16 *)v6 + 313); /*0x1003bb4ff*/
      v9 = 3LL * (unsigned int)(8 * v32); /*0x1003bb50d*/
      v10 = -1; /*0x1003bb511*/
      do /*0x1003bb567*/
      {
        if ( !v9 ) /*0x1003bb523*/
        {
          v10 = v32; /*0x1003bb580*/
          goto LABEL_13; /*0x1003bb580*/
        }
        v11 = v8 + 3; /*0x1003bb525*/
        v12 = v8[2]; /*0x1003bb52d*/
        v13 = v7 - v12; /*0x1003bb534*/
        if ( v7 < v12 ) /*0x1003bb537*/
          v12 = v7; /*0x1003bb537*/
        v14 = memcmp(__s1, (const void *)v8[1], v12); /*0x1003bb542*/
        if ( v14 ) /*0x1003bb54b*/
          v13 = v14; /*0x1003bb54b*/
        v15 = (v13 > 0) - (v13 < 0); /*0x1003bb558*/
        ++v10; /*0x1003bb55a*/
        v9 -= 24; /*0x1003bb55d*/
        v8 = v11; /*0x1003bb561*/
      }
      while ( v15 == 1 ); /*0x1003bb567*/
      if ( !v15 ) /*0x1003bb56e*/
      {
        v16 = v40; /*0x1003bb5aa*/
        v44 = v40; /*0x1003bb5ae*/
        v45 = v50; /*0x1003bb5b6*/
        v46 = (_QWORD *)v10; /*0x1003bb5ba*/
        v47 = v38; /*0x1003bb5c5*/
        v43 = 0x8000000000000000LL; /*0x1003bb5d3*/
        if ( *v39 ) /*0x1003bb5de*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003bb5f2*/
          v5 = v41; /*0x1003bb5f7*/
          a4 = v42; /*0x1003bb5fb*/
          goto LABEL_18; /*0x1003bb603*/
        }
        v5 = v41; /*0x1003bb640*/
        a4 = v42; /*0x1003bb644*/
        goto LABEL_20; /*0x1003bb644*/
      }
LABEL_13:
      if ( v50 ) /*0x1003bb593*/
      {
        --v50; /*0x1003bb599*/
        v6 = (_QWORD *)v40[v10 + 79]; /*0x1003bb59d*/
        continue; /*0x1003bb5a5*/
      }
      break;
    }
    v47 = v40; /*0x1003bb69c*/
    v48 = 0; /*0x1003bb6a0*/
    v49 = v10; /*0x1003bb6a8*/
    v22 = v39[1]; /*0x1003bb6b6*/
    v43 = *v39; /*0x1003bb6ba*/
    v44 = (_QWORD *)v22; /*0x1003bb6be*/
    v45 = v39[2]; /*0x1003bb6c6*/
    v10 = (__int64)v38; /*0x1003bb6ca*/
    v46 = v38; /*0x1003bb6d1*/
    v5 = v41; /*0x1003bb6d5*/
    a4 = v42; /*0x1003bb6d9*/
    if ( v43 == 0x8000000000000000LL ) /*0x1003bb6eb*/
      goto LABEL_18; /*0x1003bb6eb*/
    goto LABEL_22; /*0x1003bb6eb*/
  }
  v45 = *(_QWORD *)(a3 + 16); /*0x1003bb60e*/
  v17 = *(_QWORD *)a3; /*0x1003bb612*/
  v44 = *(_QWORD **)(a3 + 8); /*0x1003bb619*/
  v43 = v17; /*0x1003bb61d*/
  v46 = a2; /*0x1003bb621*/
  v47 = nullptr; /*0x1003bb625*/
  v10 = (__int64)a2; /*0x1003bb62d*/
  if ( v17 != 0x8000000000000000LL ) /*0x1003bb634*/
  {
LABEL_22:
    v36[3] = v49; /*0x1003bb6f1*/
    v36[2] = v48; /*0x1003bb700*/
    v36[1] = v47; /*0x1003bb70b*/
    v36[0] = v46; /*0x1003bb716*/
    v35 = v45; /*0x1003bb721*/
    v34 = v44; /*0x1003bb730*/
    v33 = v43; /*0x1003bb737*/
    if ( v47 ) /*0x1003bb741*/
    {
      v31[2] = v49; /*0x1003bb747*/
      v31[1] = v48; /*0x1003bb756*/
      v31[0] = v47; /*0x1003bb75d*/
      alloc::collections::btree::node::Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..Edge$GT$::insert_recursing::h4e8570785588ef0b( /*0x1003bb787*/
        v30,
        v31,
        &v43,
        a4,
        v36,
        &__s1);
      v23 = (__int64 *)v36[0]; /*0x1003bb78c*/
    }
    else
    {
      v23 = (__int64 *)v36[0]; /*0x1003bb798*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003bb79f*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x1003bb7ae*/
      if ( !v24 ) /*0x1003bb7b6*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x1003bb84e*/
      *(_QWORD *)(v24 + 352) = 0; /*0x1003bb7bc*/
      *v23 = v24; /*0x1003bb7c7*/
      v23[1] = 0; /*0x1003bb7ca*/
      v25 = v33; /*0x1003bb7d2*/
      v26 = v34; /*0x1003bb7d9*/
      v27 = v35; /*0x1003bb7e0*/
      *(_WORD *)(v24 + 626) = 1; /*0x1003bb7e7*/
      *(_QWORD *)(v24 + 360) = v25; /*0x1003bb7f0*/
      *(_QWORD *)(v24 + 368) = v26; /*0x1003bb7f7*/
      *(_QWORD *)(v24 + 376) = v27; /*0x1003bb7fe*/
      v28 = a4[1]; /*0x1003bb809*/
      *(_QWORD *)v24 = *a4; /*0x1003bb80e*/
      *(_QWORD *)(v24 + 8) = v28; /*0x1003bb811*/
      *(_QWORD *)(v24 + 16) = a4[2]; /*0x1003bb81a*/
      *(_QWORD *)(v24 + 24) = a4[3]; /*0x1003bb823*/
    }
    ++v23[2]; /*0x1003bb827*/
    *(_BYTE *)v5 = 6; /*0x1003bb82b*/
    return v5; /*0x1003bb82b*/
  }
LABEL_18:
  v16 = v44; /*0x1003bb63a*/
LABEL_20:
  v18 = 4 * v10; /*0x1003bb648*/
  *(_QWORD *)(v5 + 24) = v16[v18 + 3]; /*0x1003bb651*/
  *(_QWORD *)(v5 + 16) = v16[v18 + 2]; /*0x1003bb65a*/
  v19 = v16[v18]; /*0x1003bb65e*/
  v20 = v16; /*0x1003bb662*/
  *(_QWORD *)(v5 + 8) = v16[v18 + 1]; /*0x1003bb66a*/
  *(_QWORD *)v5 = v19; /*0x1003bb66e*/
  v21 = a4[1]; /*0x1003bb675*/
  v20[v18] = *a4; /*0x1003bb67a*/
  v20[v18 + 1] = v21; /*0x1003bb67e*/
  v20[v18 + 2] = a4[2]; /*0x1003bb688*/
  v20[v18 + 3] = a4[3]; /*0x1003bb692*/
  return v5; /*0x1003bb832*/
}