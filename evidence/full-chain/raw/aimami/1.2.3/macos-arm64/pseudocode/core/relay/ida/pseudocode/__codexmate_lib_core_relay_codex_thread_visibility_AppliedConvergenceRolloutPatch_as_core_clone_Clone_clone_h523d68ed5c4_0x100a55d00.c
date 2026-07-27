// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::codex_thread_visibility::AppliedConvergenceRolloutPatch as core::clone::Clone>::clone::h523d68ed5c49ca83 @ 0x100a55d00 | full-body via IDA decompiler
size_t __fastcall _$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$u20$as$u20$core..clone..Clone$GT$::clone::h523d68ed5c49ca83(
        size_t *a1,
        _QWORD *a2)
{
  const void *v3; // r13
  size_t v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  size_t v9; // [rsp+8h] [rbp-B8h]
  size_t v10; // [rsp+10h] [rbp-B0h]
  size_t v11; // [rsp+18h] [rbp-A8h]
  size_t v12; // [rsp+20h] [rbp-A0h]
  size_t v13; // [rsp+28h] [rbp-98h]
  unsigned __int64 v14; // [rsp+30h] [rbp-90h]
  size_t v15; // [rsp+38h] [rbp-88h]
  size_t v16; // [rsp+40h] [rbp-80h]
  size_t v17; // [rsp+48h] [rbp-78h]
  size_t v18; // [rsp+50h] [rbp-70h]
  size_t v19; // [rsp+58h] [rbp-68h]
  size_t v20; // [rsp+60h] [rbp-60h] BYREF
  size_t v21; // [rsp+68h] [rbp-58h]
  size_t v22; // [rsp+70h] [rbp-50h]
  unsigned __int64 v23; // [rsp+78h] [rbp-48h] BYREF
  size_t v24; // [rsp+80h] [rbp-40h]
  size_t v25; // [rsp+88h] [rbp-38h]
  __int64 v26; // [rsp+90h] [rbp-30h]

  v3 = (const void *)a2[1];
  v4 = a2[2];
  if ( v4 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1);
    if ( !v5 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4);
  }
  else
  {
    v5 = 1;
  }
  v6 = 0x8000000000000000LL;
  v26 = v5;
  memcpy((void *)v5, v3, v4);
  if ( __OFSUB__(0, a2[3]) )
  {
    v14 = 0x8000000000000000LL;
    v7 = v26;
    if ( a2[9] == 0x8000000000000000LL )
      goto LABEL_10;
    goto LABEL_9;
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, a2 + 3);
  v7 = v26;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v20, a2 + 6);
  v16 = v25;
  v15 = v24;
  v14 = v23;
  v17 = v20;
  v18 = v21;
  v19 = v22;
  if ( a2[9] != 0x8000000000000000LL )
  {
LABEL_9:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, a2 + 9);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v20, a2 + 12);
    v6 = v23;
    v9 = v24;
    v10 = v25;
    v11 = v20;
    v12 = v21;
    v13 = v22;
  }
LABEL_10:
  *a1 = v4;
  a1[1] = v7;
  a1[2] = v4;
  a1[3] = v14;
  a1[4] = v15;
  a1[5] = v16;
  a1[6] = v17;
  a1[7] = v18;
  a1[8] = v19;
  a1[9] = v6;
  a1[10] = v9;
  a1[11] = v10;
  a1[12] = v11;
  a1[13] = v12;
  a1[14] = v13;
  return v13;
}
