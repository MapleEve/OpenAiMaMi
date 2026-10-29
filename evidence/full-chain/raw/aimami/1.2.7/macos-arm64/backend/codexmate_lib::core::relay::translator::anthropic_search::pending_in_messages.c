// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::pending_in_messages::h730577d6f44d3d9d; addr: 0x100ac8f50; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:19Z
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_search::pending_in_messages::h730577d6f44d3d9d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _Unwind_Exception *v3; // r12
  __int64 v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // r15
  _Unwind_Exception *v7; // r14
  _Unwind_Exception *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  _QWORD *v13; // rax
  signed __int64 v14; // rdx
  const void *v15; // r13
  __int64 v16; // rax
  __m128i v17; // xmm1
  _QWORD *v18; // rax
  const void *v19; // rsi
  signed __int64 v20; // r13
  _Unwind_Exception_Class exception_class; // rax
  void (__cdecl *exception_cleanup)(_Unwind_Reason_Code, _Unwind_Exception *); // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  __int64 result; // rax
  _BYTE v26[104]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v27[3]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+88h] [rbp-88h]
  __int64 v29; // [rsp+90h] [rbp-80h]
  _QWORD *v30; // [rsp+98h] [rbp-78h]
  _QWORD v31[2]; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-60h]
  __int64 v33; // [rsp+B8h] [rbp-58h]
  _Unwind_Exception_Class v34; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v35[2]; // [rsp+C8h] [rbp-48h] BYREF
  uintptr_t private_2; // [rsp+D8h] [rbp-38h]
  signed __int64 v37; // [rsp+E0h] [rbp-30h]

  v30 = a1; /*0x100ac8f64*/
  v31[0] = 0; /*0x100ac8f68*/
  v32 = 0; /*0x100ac8f70*/
  if ( a3 ) /*0x100ac8f7b*/
  {
    v4 = a2; /*0x100ac8f81*/
    v29 = a2 + 32 * a3; /*0x100ac8f8e*/
    while ( 1 ) /*0x100ac8fc0*/
    {
      v5 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac8fc0*/
                      "content",
                      7,
                      v4);
      if ( !v5 ) /*0x100ac8fc8*/
        v5 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac8fca*/
      v28 = v4 + 32; /*0x100ac8fd5*/
      v6 = v5 + 8; /*0x100ac8fdf*/
      if ( *v5 != 4 ) /*0x100ac8fe8*/
        v6 = nullptr; /*0x100ac8fe8*/
      v7 = nullptr; /*0x100ac8fec*/
      while ( v7 && v7 != v3 ) /*0x100ac8ff8*/
      {
        v8 = v7; /*0x100ac8ffa*/
LABEL_15:
        v9 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac901f*/
                         "typereasoningcompleted",
                         4,
                         v8);
        if ( !v9 ) /*0x100ac9032*/
          v9 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9034*/
        v7 = v8 + 1; /*0x100ac903b*/
        if ( *(_BYTE *)v9 == 3 ) /*0x100ac9042*/
        {
          v10 = v9[2]; /*0x100ac9044*/
          v11 = v9[3]; /*0x100ac9048*/
          if ( v11 == 22 ) /*0x100ac9050*/
          {
            v17 = _mm_or_si128( /*0x100ac913f*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v10 + 6)), (__m128i)xmmword_10181FD70),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v10), (__m128i)xmmword_10181FD80));
            if ( _mm_testz_si128(v17, v17) ) /*0x100ac9143*/
            {
              v18 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac915d*/
                                "tool_use_idweb_searchfailed",
                                11,
                                v8);
              if ( !v18 ) /*0x100ac9165*/
                v18 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9167*/
              if ( *(_BYTE *)v18 == 3 ) /*0x100ac9171*/
              {
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99277105167e0864( /*0x100ac9187*/
                  &v34,
                  v31,
                  v18[2],
                  v18[3]);
                if ( (_BYTE)v34 != 6 ) /*0x100ac9190*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v34); /*0x100ac919a*/
              }
            }
          }
          else if ( v11 == 15 && !(*(_QWORD *)v10 ^ 0x745F726576726573LL | *(_QWORD *)(v10 + 7) ^ 0x6573755F6C6F6F74LL) ) /*0x100ac907d*/
          {
            v12 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac9095*/
                            "namechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a r"
                            "eal accountchatgpt_account_id",
                            4,
                            v8);
            if ( !v12 ) /*0x100ac909d*/
              v12 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac909f*/
            if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac90b0*/
                                    v12,
                                    &off_101C08B08) )
            {
              v13 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac90cc*/
                                &anon_934eb766a8cad5eebd2cfa1275fd1b1a_214,
                                2,
                                v8);
              if ( !v13 ) /*0x100ac90d4*/
                v13 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac90d6*/
              if ( *(_BYTE *)v13 == 3 ) /*0x100ac90e0*/
              {
                v14 = v13[3]; /*0x100ac90e6*/
                if ( v14 < 0 ) /*0x100ac90ed*/
                {
                  v23 = 0; /*0x100ac92c7*/
                  goto LABEL_52; /*0x100ac92c7*/
                }
                v15 = (const void *)v13[2]; /*0x100ac90f3*/
                v37 = v13[3]; /*0x100ac90f7*/
                if ( v14 ) /*0x100ac90fb*/
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_934eb766a8cad5eebd2cfa1275fd1b1a_214); /*0x100ac9101*/
                  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1); /*0x100ac910f*/
                  if ( !v16 ) /*0x100ac9117*/
                  {
                    v33 = v37; /*0x100ac9313*/
                    v23 = 1; /*0x100ac9317*/
LABEL_52:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v33); /*0x100ac92c9*/
                  }
                  v14 = v37; /*0x100ac911d*/
                }
                else
                {
                  v16 = 1; /*0x100ac91a4*/
                }
                v33 = v16; /*0x100ac91a9*/
                v19 = v15; /*0x100ac91b0*/
                v20 = v14; /*0x100ac91b3*/
                memcpy((void *)v16, v19, v14); /*0x100ac91b6*/
                v27[0] = v20; /*0x100ac91bb*/
                v27[1] = v33; /*0x100ac91c6*/
                v27[2] = v20; /*0x100ac91cd*/
                switch ( LOBYTE(v8->exception_class) ) /*0x100ac91e5*/
                {
                  case 0: /*0x100ac91e5*/
                    LOBYTE(v34) = 0; /*0x100ac9226*/
                    break; /*0x100ac9226*/
                  case 1: /*0x100ac91e5*/
                  case 2: /*0x100ac91e5*/
                    private_2 = v8->private_2; /*0x100ac91eb*/
                    v35[1] = v8->private_1; /*0x100ac91f3*/
                    exception_class = v8->exception_class; /*0x100ac91f7*/
                    v35[0] = v8->exception_cleanup; /*0x100ac91fe*/
                    v34 = exception_class; /*0x100ac9202*/
                    break; /*0x100ac9206*/
                  case 3: /*0x100ac91e5*/
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100ac923e*/
                      v35,
                      &v8->exception_cleanup);
                    LOBYTE(v34) = 3; /*0x100ac924a*/
                    break; /*0x100ac924e*/
                  case 4: /*0x100ac91e5*/
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7792aaf1fd665bd1( /*0x100ac9214*/
                      v35,
                      v8->private_1,
                      v8->private_2);
                    LOBYTE(v34) = 4; /*0x100ac9220*/
                    break; /*0x100ac9224*/
                  case 5: /*0x100ac91e5*/
                    if ( v8->private_2 ) /*0x100ac9250*/
                    {
                      exception_cleanup = v8->exception_cleanup; /*0x100ac925e*/
                      if ( !exception_cleanup ) /*0x100ac9265*/
                        core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_808); /*0x100ac9308*/
                      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h2436c8696ffdecf8( /*0x100ac9273*/
                        v35,
                        exception_cleanup,
                        v8->private_1);
                    }
                    else
                    {
                      v35[0] = 0; /*0x100ac927a*/
                      private_2 = 0; /*0x100ac9282*/
                    }
                    LOBYTE(v34) = 5; /*0x100ac928a*/
                    break; /*0x100ac928a*/
                  case 6: /*0x100ac91e5*/
                    (*(void (__fastcall **)(_Unwind_Exception_Class *, __int64, __int64))(LOBYTE(v8->exception_class) /*0x100ecb2df*/
                                                                                        + 0x20LL))(
                      &v34,
                      v32,
                      v33);
                    _Unwind_Resume(v8); /*0x100ecb2e5*/
                    return result; /*0x100ecb2e5*/
                }
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28( /*0x100ac92a4*/
                  v26,
                  v31,
                  v27,
                  &v34);
                if ( v26[0] != 6 ) /*0x100ac92b0*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v26); /*0x100ac92bd*/
              }
            }
          }
        }
      }
      if ( v6 ) /*0x100ac9003*/
      {
        v8 = *((_Unwind_Exception **)v6 + 1); /*0x100ac9005*/
        v3 = &v8[*((_QWORD *)v6 + 2)]; /*0x100ac9014*/
        if ( *((_QWORD *)v6 + 2) ) /*0x100ac9009*/
          break; /*0x100ac9009*/
      }
      v4 = v28; /*0x100ac8fa0*/
      if ( v28 == v29 ) /*0x100ac8fab*/
        goto LABEL_53; /*0x100ac8fab*/
    }
    v6 = nullptr; /*0x100ac901c*/
    goto LABEL_15; /*0x100ac901c*/
  }
LABEL_53:
  v24 = v30; /*0x100ac92d4*/
  v30[2] = v32; /*0x100ac92dc*/
  result = v31[0]; /*0x100ac92e0*/
  v24[1] = v31[1]; /*0x100ac92e8*/
  *v24 = result; /*0x100ac92ec*/
  return result; /*0x100ac92ef*/
}