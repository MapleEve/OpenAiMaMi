// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND drop_cross_provider_previous_response_id node 0x1001ccb70 depth=5
bool __fastcall alloc::collections::btree::fix::_$LT$impl$u20$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..LeafOrInternal$GT$$GT$::fix_node_and_affected_ancestors::hb1c3399b7bd761e6(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v5; // rbx
  unsigned __int16 *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int16 v12; // dx
  unsigned __int16 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r13
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42[7]; // [rsp+0h] [rbp-F0h] BYREF
  __int64 v43[7]; // [rsp+38h] [rbp-B8h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp-80h]
  size_t __len; // [rsp+78h] [rbp-78h]
  unsigned __int64 v46; // [rsp+80h] [rbp-70h]
  __int64 v47; // [rsp+88h] [rbp-68h]
  __int64 v48; // [rsp+90h] [rbp-60h]
  __int64 v49; // [rsp+98h] [rbp-58h]
  __int64 v50; // [rsp+A0h] [rbp-50h]
  void *__src; // [rsp+A8h] [rbp-48h]
  __int64 v52; // [rsp+B0h] [rbp-40h]
  __int64 v53; // [rsp+B8h] [rbp-38h]
  __int64 v54; // [rsp+C0h] [rbp-30h]

  v2 = *(_WORD *)(a1 + 626); /*0x1001ccb84*/
  if ( v2 > 4u ) /*0x1001ccb8f*/
    return 1; /*0x1001ccba4*/
  v5 = a1; /*0x1001ccba8*/
  while ( 1 )
  {
    v6 = (unsigned __int16 *)v5; /*0x1001ccbca*/
    v5 = *(_QWORD *)(v5 + 352); /*0x1001ccbd0*/
    if ( !v5 ) /*0x1001ccbda*/
      break; /*0x1001ccbda*/
    v7 = v6[312]; /*0x1001ccbe4*/
    v44 = a2 + 1; /*0x1001ccbef*/
    if ( v7 )
    {
      v8 = *(_QWORD *)(v5 + 8 * v7 + 624); /*0x1001ccbf9*/
      v9 = v7 - 1; /*0x1001ccc01*/
      v43[0] = v5; /*0x1001ccc04*/
      v43[1] = a2 + 1; /*0x1001ccc0b*/
      v43[2] = v9; /*0x1001ccc12*/
      v43[3] = v8; /*0x1001ccc19*/
      v43[4] = a2; /*0x1001ccc20*/
      v43[5] = (__int64)v6; /*0x1001ccc27*/
      v43[6] = a2; /*0x1001ccc2e*/
      v10 = *(unsigned __int16 *)(v8 + 626); /*0x1001ccc35*/
      if ( v2 + (unsigned int)v10 + 1 >= 0xC ) /*0x1001ccc45*/
      {
        alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_left::hbf04d0a8bdd1aaa5( /*0x1001cd089*/
          v43,
          5LL - v2);
        return 1; /*0x1001cd08e*/
      }
      v11 = v10 + v2 + 1; /*0x1001ccc4b*/
      if ( v11 >= 0xC )
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
          42,
          (__int64)&off_101526718);
      v12 = *(_WORD *)(v5 + 626); /*0x1001ccc5a*/
      v54 = v10 + 1; /*0x1001ccc65*/
      __src = v6; /*0x1001ccc69*/
      v52 = v2; /*0x1001ccc6d*/
      v53 = v10; /*0x1001ccc71*/
    }
    else
    {
      v12 = *(_WORD *)(v5 + 626); /*0x1001ccc80*/
      if ( !v12 ) /*0x1001ccc8a*/
        core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10125C6DB, 123, (__int64)&off_1015265E0); /*0x1001cd0ef*/
      v13 = *(unsigned __int16 **)(v5 + 640); /*0x1001ccc90*/
      v42[0] = v5; /*0x1001ccc97*/
      v42[1] = a2 + 1; /*0x1001ccc9e*/
      v42[2] = 0; /*0x1001ccca5*/
      v42[3] = (__int64)v6; /*0x1001cccb0*/
      v42[4] = a2; /*0x1001cccb7*/
      v42[5] = (__int64)v13; /*0x1001cccbe*/
      v42[6] = a2; /*0x1001cccc5*/
      v14 = v13[313]; /*0x1001ccccc*/
      v11 = v2 + v14 + 1; /*0x1001cccd4*/
      if ( v11 >= 0xC ) /*0x1001cccdd*/
      {
        alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_right::h51c7036a3e2b14eb( /*0x1001cd0a2*/
          v42,
          5LL - v2);
        return 1; /*0x1001cd0a7*/
      }
      v54 = v2 + 1LL; /*0x1001ccce7*/
      v8 = (__int64)v6; /*0x1001ccceb*/
      __src = v13; /*0x1001cccee*/
      v9 = 0; /*0x1001cccf2*/
      v53 = v2; /*0x1001cccf5*/
      v52 = v14; /*0x1001cccf9*/
    }
    v15 = v12; /*0x1001cccfd*/
    v46 = v11; /*0x1001ccd01*/
    *(_WORD *)(v8 + 626) = v11; /*0x1001ccd05*/
    v49 = *(_QWORD *)(v5 + 24 * v9 + 376); /*0x1001ccd21*/
    v16 = *(_QWORD *)(v5 + 24 * v9 + 360); /*0x1001ccd25*/
    v48 = *(_QWORD *)(v5 + 24 * v9 + 368); /*0x1001ccd35*/
    v47 = v16; /*0x1001ccd39*/
    v17 = v12 + ~v9; /*0x1001ccd4b*/
    __len = 8 * v17; /*0x1001ccd56*/
    memmove((void *)(v5 + 24 * v9 + 360), (const void *)(v5 + 24 * v9 + 384), 24 * v17); /*0x1001ccd5e*/
    v18 = 3 * v53; /*0x1001ccd67*/
    v19 = v48; /*0x1001ccd6f*/
    *(_QWORD *)(v8 + 8 * v18 + 360) = v47; /*0x1001ccd73*/
    *(_QWORD *)(v8 + 8 * v18 + 368) = v19; /*0x1001ccd7b*/
    *(_QWORD *)(v8 + 8 * v18 + 376) = v49; /*0x1001ccd87*/
    memcpy((void *)(v8 + 24 * v54 + 360), (char *)__src + 360, 3LL * (unsigned int)(8 * v52)); /*0x1001ccdb9*/
    v50 = *(_QWORD *)(v5 + 32 * v9 + 24); /*0x1001ccdce*/
    v49 = *(_QWORD *)(v5 + 32 * v9 + 16); /*0x1001ccdd7*/
    v20 = *(_QWORD *)(v5 + 32 * v9); /*0x1001ccddb*/
    v48 = *(_QWORD *)(v5 + 32 * v9 + 8); /*0x1001ccde4*/
    v47 = v20; /*0x1001ccde8*/
    memmove((void *)(v5 + 32 * v9), (const void *)(v5 + 32 * v9 + 32), 32 * v17); /*0x1001ccdf8*/
    v21 = (unsigned int)(32 * v53); /*0x1001cce01*/
    v22 = v48; /*0x1001cce08*/
    *(_QWORD *)(v8 + v21) = v47; /*0x1001cce0c*/
    *(_QWORD *)(v8 + v21 + 8) = v22; /*0x1001cce10*/
    *(_QWORD *)(v8 + v21 + 16) = v49; /*0x1001cce19*/
    *(_QWORD *)(v8 + v21 + 24) = v50; /*0x1001cce22*/
    memcpy((void *)(v8 + (unsigned int)(32 * v54)), __src, (unsigned int)(32 * v52)); /*0x1001cce3c*/
    v23 = v9 + 1; /*0x1001cce41*/
    memmove((void *)(v5 + 8 * v9 + 640), (const void *)(v5 + 8 * v9 + 648), __len); /*0x1001cce5a*/
    if ( v15 > v9 + 1 ) /*0x1001cce62*/
    {
      v24 = ((_BYTE)v15 - (_BYTE)v23) & 3; /*0x1001cce6e*/
      if ( (((_BYTE)v15 - (_BYTE)v23) & 3) != 0 ) /*0x1001cce71*/
      {
        do /*0x1001ccea1*/
        {
          v25 = v23 + 1; /*0x1001cce80*/
          v26 = *(_QWORD *)(v5 + 8 * v23 + 632); /*0x1001cce84*/
          *(_QWORD *)(v26 + 352) = v5; /*0x1001cce8c*/
          *(_WORD *)(v26 + 624) = v23++; /*0x1001cce93*/
          --v24; /*0x1001cce9e*/
        }
        while ( v24 ); /*0x1001ccea1*/
        if ( v15 - v9 - 2 < 3 ) /*0x1001cceaf*/
          goto LABEL_18; /*0x1001cceaf*/
        do /*0x1001ccf28*/
        {
LABEL_17:
          v27 = *(_QWORD *)(v5 + 8 * v25 + 632); /*0x1001ccec0*/
          *(_QWORD *)(v27 + 352) = v5; /*0x1001ccec8*/
          *(_WORD *)(v27 + 624) = v25; /*0x1001ccecf*/
          v28 = *(_QWORD *)(v5 + 8 * v25 + 640); /*0x1001cced6*/
          *(_QWORD *)(v28 + 352) = v5; /*0x1001ccede*/
          *(_WORD *)(v28 + 624) = v25 + 1; /*0x1001ccee8*/
          v29 = *(_QWORD *)(v5 + 8 * v25 + 648); /*0x1001cceef*/
          *(_QWORD *)(v29 + 352) = v5; /*0x1001ccef7*/
          *(_WORD *)(v29 + 624) = v25 + 2; /*0x1001ccf01*/
          v30 = *(_QWORD *)(v5 + 8 * v25 + 656); /*0x1001ccf08*/
          *(_QWORD *)(v30 + 352) = v5; /*0x1001ccf10*/
          *(_WORD *)(v30 + 624) = v25 + 3; /*0x1001ccf1a*/
          v25 += 4; /*0x1001ccf21*/
        }
        while ( v25 != v15 ); /*0x1001ccf28*/
        goto LABEL_18; /*0x1001ccf28*/
      }
      v25 = v9 + 1; /*0x1001cd050*/
      if ( v15 - v9 - 2 >= 3 ) /*0x1001cd05f*/
        goto LABEL_17; /*0x1001cd05f*/
    }
LABEL_18:
    --*(_WORD *)(v5 + 626); /*0x1001ccf2a*/
    a2 = v44; /*0x1001ccf36*/
    if ( v44 >= 2 )
    {
      if ( v52 + 1 != v46 - v53 )
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"assertion failed: src.len() == dst.len()assertion failed: edge.height == self.node.height - 1assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
          40,
          (__int64)&off_101526610);
      v31 = v54; /*0x1001ccf67*/
      memcpy((void *)(v8 + 632 + 8 * v54), (char *)__src + 632, (unsigned int)(8 * (v52 + 1))); /*0x1001ccf7a*/
      v32 = v46; /*0x1001ccf7f*/
      v33 = v54; /*0x1001ccf8a*/
      v34 = ((_BYTE)v46 - (_BYTE)v54 + 1) & 3; /*0x1001ccf8d*/
      if ( (((_BYTE)v46 - (_BYTE)v54 + 1) & 3) != 0 ) /*0x1001ccf90*/
      {
        v35 = v54; /*0x1001ccf92*/
        do /*0x1001ccfc0*/
        {
          v33 = v35 + 1; /*0x1001ccfa0*/
          v36 = *(_QWORD *)(v8 + 8 * v35 + 632); /*0x1001ccfa4*/
          *(_QWORD *)(v36 + 352) = v8; /*0x1001ccfac*/
          *(_WORD *)(v36 + 624) = v35++; /*0x1001ccfb3*/
          --v34; /*0x1001ccfbd*/
        }
        while ( v34 ); /*0x1001ccfc0*/
      }
      if ( v32 - v31 >= 3 ) /*0x1001ccfd1*/
      {
        do /*0x1001cd049*/
        {
          v37 = *(_QWORD *)(v8 + 8 * v33 + 632); /*0x1001ccfe0*/
          *(_QWORD *)(v37 + 352) = v8; /*0x1001ccfe8*/
          *(_WORD *)(v37 + 624) = v33; /*0x1001ccfef*/
          v38 = *(_QWORD *)(v8 + 8 * v33 + 640); /*0x1001ccff6*/
          *(_QWORD *)(v38 + 352) = v8; /*0x1001ccffe*/
          *(_WORD *)(v38 + 624) = v33 + 1; /*0x1001cd008*/
          v39 = *(_QWORD *)(v8 + 8 * v33 + 648); /*0x1001cd00f*/
          *(_QWORD *)(v39 + 352) = v8; /*0x1001cd017*/
          *(_WORD *)(v39 + 624) = v33 + 2; /*0x1001cd021*/
          v40 = *(_QWORD *)(v8 + 8 * v33 + 656); /*0x1001cd028*/
          *(_QWORD *)(v40 + 352) = v8; /*0x1001cd030*/
          v41 = v33 + 3; /*0x1001cd037*/
          *(_WORD *)(v40 + 624) = v33 + 3; /*0x1001cd03b*/
          v33 += 4; /*0x1001cd042*/
        }
        while ( v41 != v32 ); /*0x1001cd049*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ccbb8*/
    v2 = *(_WORD *)(v5 + 626); /*0x1001ccbbd*/
    if ( v2 > 4u ) /*0x1001ccbc8*/
      return 1; /*0x1001ccbc8*/
  }
  return v2 != 0; /*0x1001ccb93*/
}