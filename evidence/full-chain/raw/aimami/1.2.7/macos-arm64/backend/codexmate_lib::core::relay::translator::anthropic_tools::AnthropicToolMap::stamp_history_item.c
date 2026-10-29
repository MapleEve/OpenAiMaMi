// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::stamp_history_item::hf04961f6e0838f4c; addr: 0x1007f4c40; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::stamp_history_item::hf04961f6e0838f4c(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rax
  __int64 result; // rax
  char v4; // r12
  _QWORD *v5; // r15
  __int64 v6; // rax
  char v7; // al
  _QWORD *v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax
  _QWORD v12[4]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v13[4]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v14; // [rsp+40h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-50h]
  __int64 v17; // [rsp+58h] [rbp-48h]
  __int64 v18; // [rsp+60h] [rbp-40h] BYREF
  __int64 v19; // [rsp+68h] [rbp-38h]
  __int64 v20; // [rsp+70h] [rbp-30h]
  __int64 v21; // [rsp+78h] [rbp-28h]

  v2 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f4c67*/
                 &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                 4,
                 a2);
  if ( !v2 ) /*0x1007f4c6f*/
    v2 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f4c71*/
  result = serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1007f4c82*/
             v2,
             &off_101C01D90);
  if ( (_BYTE)result ) /*0x1007f4c89*/
  {
    result = codexmate_lib::core::relay::translator::anthropic_thinking_carrier::hca081ecbe5cf702d(v12, a2); /*0x1007f4c99*/
    if ( LOBYTE(v12[0]) != 6 ) /*0x1007f4ca5*/
    {
      v13[3] = v12[3]; /*0x1007f4cb2*/
      v13[2] = v12[2]; /*0x1007f4cbd*/
      v13[1] = v12[1]; /*0x1007f4ccf*/
      v13[0] = v12[0]; /*0x1007f4cd3*/
      if ( *(_BYTE *)(a1 + 58) ) /*0x1007f4cd7*/
      {
        v4 = *(_BYTE *)(a1 + 56); /*0x1007f4ce2*/
        LOBYTE(v14) = 2; /*0x1007f4cf3*/
        v15 = 0; /*0x1007f4cf7*/
        v16 = (v4 != 2) + 1LL; /*0x1007f4cff*/
        v5 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1007f4d18*/
                         &unk_1018CBA74,
                         0x12u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v5); /*0x1007f4d1e*/
        v5[3] = v17; /*0x1007f4d27*/
        v5[2] = v16; /*0x1007f4d2f*/
        v6 = v14; /*0x1007f4d33*/
        v5[1] = v15; /*0x1007f4d3b*/
        *v5 = v6; /*0x1007f4d3f*/
        if ( v4 != 2 ) /*0x1007f4d46*/
        {
          v7 = *(_BYTE *)(a1 + 57); /*0x1007f4d4c*/
          LOBYTE(v18) = v4; /*0x1007f4d51*/
          BYTE1(v18) = v7; /*0x1007f4d55*/
          codexmate_lib::core::relay::translator::anthropic_replay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..translator..anthropic_replay..ReplayPolicy$GT$::serialize::h658bb56d9a600cc0( /*0x1007f4d60*/
            &v14,
            &v18);
          if ( (_BYTE)v14 == 6 ) /*0x1007f4d69*/
          {
            v18 = v15; /*0x1007f4ea0*/
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1018CBF8E, 30, &v18, &off_101C03980, &off_101C01ED8); /*0x1007f4ec2*/
          }
          v21 = v17; /*0x1007f4d73*/
          v20 = v16; /*0x1007f4d7b*/
          v19 = v15; /*0x1007f4d87*/
          v18 = v14; /*0x1007f4d8b*/
          v8 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1007f4da4*/
                           &unk_1018CBFAC,
                           0x14u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v8); /*0x1007f4daa*/
          v8[3] = v21; /*0x1007f4db3*/
          v8[2] = v20; /*0x1007f4dbb*/
          v9 = v18; /*0x1007f4dbf*/
          v8[1] = v19; /*0x1007f4dc7*/
          *v8 = v9; /*0x1007f4dcb*/
        }
      }
      if ( !__OFSUB__(0, *(_QWORD *)a1) ) /*0x1007f4dd3*/
      {
        codexmate_lib::core::relay::translator::anthropic_replay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..translator..anthropic_replay..SearchContext$GT$::serialize::h869f46ffb60c0509( /*0x1007f4ddc*/
          &v14,
          a1);
        if ( (_BYTE)v14 == 6 ) /*0x1007f4de5*/
        {
          v18 = v15; /*0x1007f4e73*/
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1018CC2B8, 31, &v18, &off_101C03980, &off_101C01F30); /*0x1007f4e95*/
        }
        v21 = v17; /*0x1007f4def*/
        v20 = v16; /*0x1007f4df7*/
        v19 = v15; /*0x1007f4e03*/
        v18 = v14; /*0x1007f4e07*/
        v10 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1007f4e20*/
                          &unk_1018CC1C2,
                          0x15u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v10); /*0x1007f4e26*/
        v10[3] = v21; /*0x1007f4e2f*/
        v10[2] = v20; /*0x1007f4e37*/
        v11 = v18; /*0x1007f4e3b*/
        v10[1] = v19; /*0x1007f4e43*/
        *v10 = v11; /*0x1007f4e47*/
      }
      codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier::hc88e604b2a3caac1(a2, v13); /*0x1007f4e51*/
      return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v13); /*0x1007f4e5a*/
    }
  }
  return result; /*0x1007f4e5f*/
}