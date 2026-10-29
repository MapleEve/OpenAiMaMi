// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::restore::h04afebf5dcc99ccb; addr: 0x1007f54d0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:21Z
void __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::restore::h04afebf5dcc99ccb(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  size_t v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  _QWORD *v14; // r15
  _QWORD *v15; // r14
  __int64 v18; // [rsp+18h] [rbp-68h]
  __int64 v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 32); /*0x1007f54ed*/
  if ( v4 ) /*0x1007f54f4*/
  {
    v20 = *(_QWORD *)(a1 + 40); /*0x1007f54fe*/
LABEL_3:
    v5 = v4 + 8; /*0x1007f5502*/
    v18 = v4; /*0x1007f550d*/
    v6 = (_QWORD *)(v4 + 248); /*0x1007f5511*/
    v19 = *(unsigned __int16 *)(v4 + 1066); /*0x1007f5518*/
    v7 = 3LL * (unsigned int)(8 * v19); /*0x1007f5523*/
    v8 = -1; /*0x1007f5527*/
    do /*0x1007f557c*/
    {
      if ( !v7 ) /*0x1007f5533*/
      {
        v8 = v19; /*0x1007f5590*/
LABEL_13:
        if ( !v20 ) /*0x1007f55a0*/
          return; /*0x1007f55a0*/
        --v20; /*0x1007f55a6*/
        v4 = *(_QWORD *)(v18 + 8 * v8 + 1072); /*0x1007f55aa*/
        goto LABEL_3; /*0x1007f55b2*/
      }
      v9 = v5 + 24; /*0x1007f5535*/
      v10 = *(_QWORD *)(v5 + 16); /*0x1007f553d*/
      v11 = a4 - v10; /*0x1007f5548*/
      if ( a4 < v10 ) /*0x1007f554b*/
        v10 = a4; /*0x1007f554b*/
      v12 = memcmp(a3, *(const void **)(v5 + 8), v10); /*0x1007f5553*/
      if ( v12 ) /*0x1007f555c*/
        v11 = v12; /*0x1007f555c*/
      v13 = (v11 > 0) - (v11 < 0); /*0x1007f5569*/
      v6 += 9; /*0x1007f556b*/
      ++v8; /*0x1007f556f*/
      v7 -= 24; /*0x1007f5572*/
      v5 = v9; /*0x1007f5576*/
    }
    while ( v13 == 1 ); /*0x1007f557c*/
    if ( v13 ) /*0x1007f5583*/
      goto LABEL_13; /*0x1007f5583*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v22, v6 - 6); /*0x1007f55bf*/
    LOBYTE(v21) = 3; /*0x1007f55c4*/
    v14 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1007f55dd*/
                      &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                      4u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v14); /*0x1007f55e3*/
    v14[3] = v24; /*0x1007f55ec*/
    v14[2] = v23; /*0x1007f55f4*/
    v14[1] = v22; /*0x1007f5600*/
    *v14 = v21; /*0x1007f5604*/
    if ( !__OFSUB__(0, *v6) ) /*0x1007f560c*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v22, v6); /*0x1007f5615*/
      LOBYTE(v21) = 3; /*0x1007f561a*/
      v15 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1007f5633*/
                        &anon_5fc5982723cbea77922f0a3a965b6f67_180,
                        9u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v15); /*0x1007f5639*/
      v15[3] = v24; /*0x1007f5642*/
      v15[2] = v23; /*0x1007f564a*/
      v15[1] = v22; /*0x1007f5656*/
      *v15 = v21; /*0x1007f565a*/
    }
  }
}