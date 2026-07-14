// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND drop_cross_provider_previous_response_id node 0x1002329f0 depth=2
_QWORD *__fastcall alloc::collections::btree::map::entry::OccupiedEntry$LT$K$C$V$C$A$GT$::remove_kv::ha23963b496fcbc2d(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v7[10]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-50h]
  __int64 v9; // [rsp+58h] [rbp-48h]
  __int64 v10; // [rsp+60h] [rbp-40h]
  __int64 v11; // [rsp+68h] [rbp-38h]
  __int64 v12; // [rsp+70h] [rbp-30h]
  __int64 v13; // [rsp+78h] [rbp-28h]
  __int64 v14; // [rsp+80h] [rbp-20h]
  _BYTE v15[17]; // [rsp+8Fh] [rbp-11h] BYREF

  v15[0] = 0; /*0x100232a04*/
  alloc::collections::btree::remove::_$LT$impl$u20$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..LeafOrInternal$GT$$C$alloc..collections..btree..node..marker..KV$GT$$GT$::remove_kv_tracking::h3bbd74aa003e5c8c( /*0x100232a13*/
    v7,
    a2,
    v15);
  v14 = v7[6]; /*0x100232a1c*/
  v13 = v7[5]; /*0x100232a24*/
  v12 = v7[4]; /*0x100232a2c*/
  v11 = v7[3]; /*0x100232a37*/
  v10 = v7[2]; /*0x100232a42*/
  v9 = v7[1]; /*0x100232a54*/
  v8 = v7[0]; /*0x100232a58*/
  v2 = *(_QWORD **)(a2 + 24); /*0x100232a5c*/
  --v2[2]; /*0x100232a60*/
  if ( v15[0] == 1 )
  {
    if ( !*v2 ) /*0x100232a70*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_596); /*0x100232af3*/
    v3 = v2[1]; /*0x100232a72*/
    if ( !v3 )
      core::panicking::panic::h286e2dd5eab048be(
        (__int64)"assertion failed: self.height > 0assertion failed: src.len() == dst.len()assertion failed: edge.height "
                 "== self.node.height - 1assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_le"
                 "n >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countass"
                 "ertion failed: match track_edge_idx {\n"
                 "    LeftOrRight::Left(idx) => idx <= old_left_len,\n"
                 "    LeftOrRight::Right(idx) => idx <= right_len,\n"
                 "}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
        33,
        (__int64)&anon_0bcfb5f5de49270c5675714f036928d0_610);
    v4 = *(_QWORD *)(*v2 + 632LL); /*0x100232a7b*/
    *v2 = v4; /*0x100232a82*/
    v2[1] = v3 - 1; /*0x100232a88*/
    *(_QWORD *)(v4 + 352) = 0; /*0x100232a8c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100232aa1*/
  }
  a1[6] = v14; /*0x100232aaa*/
  a1[5] = v13; /*0x100232ab2*/
  a1[4] = v12; /*0x100232aba*/
  a1[3] = v11; /*0x100232ac2*/
  a1[2] = v10; /*0x100232aca*/
  v5 = v8; /*0x100232ace*/
  a1[1] = v9; /*0x100232ad6*/
  *a1 = v5; /*0x100232ada*/
  return a1; /*0x100232ae0*/
}