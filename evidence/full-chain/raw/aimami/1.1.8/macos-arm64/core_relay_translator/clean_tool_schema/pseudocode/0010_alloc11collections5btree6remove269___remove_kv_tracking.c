// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x1001da4e0 depth=3
_QWORD *__fastcall alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..LeafOrInternal$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_kv_tracking::h3bbd74aa003e5c8c(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD v32[3]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v33[3]; // [rsp+18h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-90h]
  __int64 v35; // [rsp+38h] [rbp-88h]
  __int64 v36; // [rsp+40h] [rbp-80h]
  __int64 v37; // [rsp+48h] [rbp-78h]
  __int64 v38; // [rsp+50h] [rbp-70h]
  __int64 v39; // [rsp+58h] [rbp-68h]
  __int64 v40; // [rsp+60h] [rbp-60h]
  __int64 v41; // [rsp+68h] [rbp-58h] BYREF
  __int64 v42; // [rsp+70h] [rbp-50h]
  __int64 v43; // [rsp+78h] [rbp-48h]
  __int64 v44; // [rsp+80h] [rbp-40h]
  __int64 v45; // [rsp+88h] [rbp-38h]
  __int64 v46; // [rsp+90h] [rbp-30h]
  __int64 v47; // [rsp+98h] [rbp-28h]
  __int64 v48; // [rsp+A0h] [rbp-20h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-18h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-10h]

  v3 = a2[1]; /*0x1001da4f2*/
  v4 = a2[2]; /*0x1001da4f6*/
  if ( v3 ) /*0x1001da4fd*/
  {
    v5 = *(_QWORD *)(*a2 + 8 * v4 + 632); /*0x1001da503*/
    v6 = v3 - 1; /*0x1001da50e*/
    if ( v3 != 1 ) /*0x1001da511*/
    {
      v7 = v3 - 2; /*0x1001da517*/
      if ( (v6 & 7) != 0 ) /*0x1001da522*/
      {
        v8 = 0; /*0x1001da524*/
        do /*0x1001da546*/
        {
          v5 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v5 + 626) + 632); /*0x1001da538*/
          ++v8; /*0x1001da540*/
        }
        while ( (v6 & 7) != v8 ); /*0x1001da546*/
        v6 -= v8; /*0x1001da548*/
      }
      if ( v7 >= 7 ) /*0x1001da54f*/
      {
        do /*0x1001da5dc*/
        {
          v9 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v5 + 626) + 632); /*0x1001da567*/
          v10 = *(_QWORD *)(v9 + 8LL * *(unsigned __int16 *)(v9 + 626) + 632); /*0x1001da576*/
          v11 = *(_QWORD *)(v10 + 8LL * *(unsigned __int16 *)(v10 + 626) + 632); /*0x1001da585*/
          v12 = *(_QWORD *)(v11 + 8LL * *(unsigned __int16 *)(v11 + 626) + 632); /*0x1001da594*/
          v13 = *(_QWORD *)(v12 + 8LL * *(unsigned __int16 *)(v12 + 626) + 632); /*0x1001da5a3*/
          v14 = *(_QWORD *)(v13 + 8LL * *(unsigned __int16 *)(v13 + 626) + 632); /*0x1001da5b2*/
          v15 = *(_QWORD *)(v14 + 8LL * *(unsigned __int16 *)(v14 + 626) + 632); /*0x1001da5c1*/
          v5 = *(_QWORD *)(v15 + 8LL * *(unsigned __int16 *)(v15 + 626) + 632); /*0x1001da5d0*/
          v6 -= 8; /*0x1001da5d8*/
        }
        while ( v6 ); /*0x1001da5dc*/
      }
    }
    v16 = *(unsigned __int16 *)(v5 + 626) - 1LL; /*0x1001da5e5*/
    v32[0] = v5; /*0x1001da5e8*/
    v32[1] = 0; /*0x1001da5ef*/
    v32[2] = v16; /*0x1001da5fa*/
    alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_leaf_kv::h8e9896162e5f0e51( /*0x1001da60c*/
      &v41,
      v32);
    v40 = v47; /*0x1001da615*/
    v39 = v46; /*0x1001da61d*/
    v38 = v45; /*0x1001da625*/
    v37 = v44; /*0x1001da62d*/
    v36 = v43; /*0x1001da635*/
    v35 = v42; /*0x1001da641*/
    v34 = v41; /*0x1001da648*/
    v17 = v48; /*0x1001da64f*/
    v18 = v49; /*0x1001da653*/
    v19 = v50; /*0x1001da657*/
    if ( v50 >= *(unsigned __int16 *)(v48 + 626) ) /*0x1001da665*/
    {
      do /*0x1001da688*/
      {
        v19 = *(unsigned __int16 *)(v17 + 624); /*0x1001da670*/
        v17 = *(_QWORD *)(v17 + 352); /*0x1001da677*/
        ++v18; /*0x1001da67e*/
      }
      while ( (unsigned __int16)v19 >= *(_WORD *)(v17 + 626) ); /*0x1001da688*/
    }
    v20 = 3 * v19; /*0x1001da68a*/
    v21 = 32 * v19; /*0x1001da691*/
    v43 = *(_QWORD *)(v17 + 24 * v19 + 376); /*0x1001da69d*/
    v22 = *(_QWORD *)(v17 + 24 * v19 + 360); /*0x1001da6a1*/
    v42 = *(_QWORD *)(v17 + 24 * v19 + 368); /*0x1001da6b1*/
    v41 = v22; /*0x1001da6b5*/
    *(_QWORD *)(v17 + 8 * v20 + 376) = v36; /*0x1001da6bd*/
    v23 = v34; /*0x1001da6c5*/
    *(_QWORD *)(v17 + 8 * v20 + 368) = v35; /*0x1001da6d3*/
    *(_QWORD *)(v17 + 8 * v20 + 360) = v23; /*0x1001da6db*/
    v47 = *(_QWORD *)(v17 + 32 * v19 + 24); /*0x1001da6e8*/
    v46 = *(_QWORD *)(v17 + 32 * v19 + 16); /*0x1001da6f1*/
    v24 = *(_QWORD *)(v17 + 32 * v19); /*0x1001da6f5*/
    v45 = *(_QWORD *)(v17 + 32 * v19 + 8); /*0x1001da6fe*/
    v44 = v24; /*0x1001da702*/
    *(_QWORD *)(v17 + v21 + 24) = v40; /*0x1001da70a*/
    *(_QWORD *)(v17 + v21 + 16) = v39; /*0x1001da713*/
    v25 = v37; /*0x1001da718*/
    *(_QWORD *)(v17 + v21 + 8) = v38; /*0x1001da720*/
    *(_QWORD *)(v17 + v21) = v25; /*0x1001da725*/
    if ( v18 ) /*0x1001da72c*/
    {
      v26 = v17 + 8 * v19 + 640; /*0x1001da72e*/
      if ( (v18 & 7) != 0 ) /*0x1001da73d*/
      {
        v27 = 0; /*0x1001da73f*/
        do /*0x1001da760*/
        {
          v17 = *(_QWORD *)v26; /*0x1001da750*/
          v26 = *(_QWORD *)v26 + 632LL; /*0x1001da753*/
          ++v27; /*0x1001da75a*/
        }
        while ( (v18 & 7) != v27 ); /*0x1001da760*/
        v28 = v18 - v27; /*0x1001da765*/
        v29 = 0; /*0x1001da768*/
        if ( v18 < 8 ) /*0x1001da76e*/
          goto LABEL_21; /*0x1001da76e*/
        goto LABEL_20; /*0x1001da76e*/
      }
      v28 = v18; /*0x1001da7a4*/
      v29 = 0; /*0x1001da7a7*/
      if ( v18 >= 8 ) /*0x1001da7ad*/
      {
        do /*0x1001da7ef*/
        {
LABEL_20:
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 /*0x1001da7b0*/
                                                                                                  + 632LL)
                                                                                      + 632LL)
                                                                          + 632LL)
                                                              + 632LL)
                                                  + 632LL)
                                      + 632LL)
                          + 632LL);
          v26 = v17 + 632; /*0x1001da7e4*/
          v28 -= 8LL; /*0x1001da7eb*/
        }
        while ( v28 ); /*0x1001da7ef*/
      }
    }
    else
    {
      v29 = v19 + 1; /*0x1001da79f*/
    }
LABEL_21:
    a1[6] = v47; /*0x1001da7f1*/
    a1[5] = v46; /*0x1001da7fd*/
    a1[4] = v45; /*0x1001da805*/
    a1[3] = v44; /*0x1001da80d*/
    a1[2] = v43; /*0x1001da815*/
    v30 = v41; /*0x1001da819*/
    a1[1] = v42; /*0x1001da821*/
    *a1 = v30; /*0x1001da825*/
    a1[7] = v17; /*0x1001da828*/
    a1[8] = 0; /*0x1001da82c*/
    a1[9] = v29; /*0x1001da834*/
    return a1; /*0x1001da834*/
  }
  v33[0] = *a2; /*0x1001da772*/
  v33[1] = 0; /*0x1001da779*/
  v33[2] = v4; /*0x1001da784*/
  alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_leaf_kv::h8e9896162e5f0e51( /*0x1001da795*/
    a1,
    v33);
  return a1; /*0x1001da83b*/
}