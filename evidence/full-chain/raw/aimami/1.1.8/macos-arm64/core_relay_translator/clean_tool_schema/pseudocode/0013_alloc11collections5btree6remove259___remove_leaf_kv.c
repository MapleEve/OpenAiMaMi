// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x1001d9ce0 depth=4
__int64 __fastcall alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_leaf_kv::h8e9896162e5f0e51(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // rdx
  __int64 result; // rax
  __int64 v25; // [rsp+0h] [rbp-100h] BYREF
  __int64 v26; // [rsp+8h] [rbp-F8h]
  __int64 v27; // [rsp+10h] [rbp-F0h]
  __int64 v28; // [rsp+18h] [rbp-E8h]
  __int64 v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  _QWORD v39[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v40; // [rsp+88h] [rbp-78h]
  _BYTE *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]

  v41 = a3; /*0x1001d9cf4*/
  v40 = a1; /*0x1001d9cfb*/
  v3 = *a2; /*0x1001d9cff*/
  v4 = a2[2]; /*0x1001d9d02*/
  v5 = *(unsigned __int16 *)(*a2 + 626LL); /*0x1001d9d06*/
  v6 = (void *)(*a2 + 24 * v4 + 360); /*0x1001d9d12*/
  v44 = *(_QWORD *)(*a2 + 24 * v4 + 376); /*0x1001d9d22*/
  v7 = *(_QWORD *)(v3 + 24 * v4 + 360); /*0x1001d9d26*/
  v43 = *(_QWORD *)(v3 + 24 * v4 + 368); /*0x1001d9d36*/
  v42 = v7; /*0x1001d9d3a*/
  v8 = v5 + ~v4; /*0x1001d9d4c*/
  memmove(v6, (const void *)(v3 + 24 * v4 + 384), 24 * v8); /*0x1001d9d5b*/
  v49 = v4; /*0x1001d9d60*/
  v4 *= 32; /*0x1001d9d64*/
  v9 = *(_QWORD *)(v3 + v4 + 8); /*0x1001d9d70*/
  v45 = *(_QWORD *)(v3 + v4); /*0x1001d9d75*/
  v46 = v9; /*0x1001d9d79*/
  v47 = *(_QWORD *)(v3 + v4 + 16); /*0x1001d9d82*/
  v48 = *(_QWORD *)(v3 + v4 + 24); /*0x1001d9d8b*/
  memmove((void *)(v3 + v4), (const void *)(v3 + v4 + 32), 32 * v8); /*0x1001d9d9b*/
  *(_WORD *)(v3 + 626) = v5 - 1; /*0x1001d9da3*/
  v12 = a2[1]; /*0x1001d9dab*/
  if ( (unsigned __int16)(v5 - 1) > 4u ) /*0x1001d9db4*/
  {
    v20 = v49; /*0x1001d9e30*/
    goto LABEL_17; /*0x1001d9e34*/
  }
  v13 = *(_QWORD *)(v3 + 352); /*0x1001d9db6*/
  if ( v13 ) /*0x1001d9dc0*/
  {
    v14 = v12 + 1; /*0x1001d9dc2*/
    v15 = *(unsigned __int16 *)(v3 + 624); /*0x1001d9dc7*/
    if ( *(_WORD *)(v3 + 624) ) /*0x1001d9dc7*/
    {
      v16 = *(_QWORD *)(v13 + 8 * v15 + 624); /*0x1001d9dd4*/
      v17 = v15 - 1; /*0x1001d9ddc*/
      v32 = *(_QWORD *)(v3 + 352); /*0x1001d9ddf*/
      v33 = v12 + 1; /*0x1001d9de6*/
      v34 = v17; /*0x1001d9ded*/
      v35 = v16; /*0x1001d9df4*/
      v36 = v12; /*0x1001d9dfb*/
      v37 = v3; /*0x1001d9e02*/
      v38 = v12; /*0x1001d9e09*/
      if ( *(unsigned __int16 *)(v16 + 626) + (unsigned int)v5 >= 0xC ) /*0x1001d9e1c*/
      {
        alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_left::hbf04d0a8bdd1aaa5( /*0x1001d9ed3*/
          &v32,
          1,
          v17,
          v14);
        v20 = v49 + 1; /*0x1001d9edc*/
        goto LABEL_14; /*0x1001d9edf*/
      }
      v18 = 1; /*0x1001d9e22*/
      v19 = &v32; /*0x1001d9e27*/
    }
    else
    {
      if ( !*(_WORD *)(v13 + 626) ) /*0x1001d9e4a*/
        core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10125C6DB, 123, (__int64)&off_1015265E0); /*0x1001d9f83*/
      v21 = *(_QWORD *)(v13 + 640); /*0x1001d9e50*/
      v25 = *(_QWORD *)(v3 + 352); /*0x1001d9e57*/
      v26 = v12 + 1; /*0x1001d9e5e*/
      v27 = 0; /*0x1001d9e65*/
      v28 = v3; /*0x1001d9e70*/
      v29 = v12; /*0x1001d9e77*/
      v30 = v21; /*0x1001d9e7e*/
      v31 = v12; /*0x1001d9e85*/
      if ( *(unsigned __int16 *)(v21 + 626) + (unsigned int)v5 >= 0xC ) /*0x1001d9e98*/
      {
        ((void (__fastcall *)(__int64 *, __int64, __int64, __int64))alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::bulk_steal_right::h51c7036a3e2b14eb)( /*0x1001d9eed*/
          &v25,
          1,
          v21,
          v14);
        v20 = v49; /*0x1001d9ef2*/
        goto LABEL_14; /*0x1001d9ef2*/
      }
      v19 = &v25; /*0x1001d9e9a*/
      v18 = 0; /*0x1001d9ea1*/
    }
    alloc::collections::btree::node::BalancingContext$LT$K$C$V$GT$::merge_tracking_child_edge::h728fc930d2a88e1e( /*0x1001d9eae*/
      v39,
      v19,
      v18,
      v49,
      v10,
      v11,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v3 = v39[0]; /*0x1001d9eb3*/
    v12 = v39[1]; /*0x1001d9eba*/
    v20 = v39[2]; /*0x1001d9ec1*/
  }
  else
  {
    v20 = v49; /*0x1001d9e39*/
  }
LABEL_14:
  v22 = *(_QWORD *)(v3 + 352); /*0x1001d9ef6*/
  if ( v22 /*0x1001d9f07*/
    && !(unsigned __int8)alloc::collections::btree::fix::_$LT$impl$u20$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..LeafOrInternal$GT$$GT$::fix_node_and_affected_ancestors::hb1c3399b7bd761e6(
                           v22,
                           v12 + 1) )
  {
    *v41 = 1; /*0x1001d9f14*/
  }
LABEL_17:
  v23 = v40; /*0x1001d9f17*/
  v40[6] = v48; /*0x1001d9f1f*/
  v23[5] = v47; /*0x1001d9f27*/
  v23[4] = v46; /*0x1001d9f2f*/
  v23[3] = v45; /*0x1001d9f37*/
  v23[2] = v44; /*0x1001d9f3f*/
  result = v42; /*0x1001d9f43*/
  v23[1] = v43; /*0x1001d9f4b*/
  *v23 = result; /*0x1001d9f4f*/
  v23[7] = v3; /*0x1001d9f52*/
  v23[8] = v12; /*0x1001d9f56*/
  v23[9] = v20; /*0x1001d9f5a*/
  return result; /*0x1001d9f5e*/
}