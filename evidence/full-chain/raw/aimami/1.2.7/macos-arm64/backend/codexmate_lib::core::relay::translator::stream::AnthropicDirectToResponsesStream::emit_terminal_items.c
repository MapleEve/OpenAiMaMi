// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_terminal_items::hd9e34d556615016b; addr: 0x1002aa210; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:50Z
unsigned __int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_terminal_items::hd9e34d556615016b(
        void **a1,
        char a2,
        _QWORD *a3)
{
  unsigned __int64 result; // rax
  char *v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  void *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  _DWORD *v25; // rax
  void *v26; // rax
  void *v27; // rax
  size_t v28; // rax
  _DWORD *v29; // rax
  void *v30; // rax
  _DWORD *v31; // rax
  void *v32; // r15
  size_t v33; // rbx
  _QWORD *v34; // rdx
  __int64 v35; // r12
  _QWORD *v36; // r14
  _QWORD *v37; // r14
  unsigned __int64 v38; // r12
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  void *v46; // rax
  _BYTE *v47; // r14
  _QWORD *v48; // r13
  void *v49; // rax
  char v50[8]; // [rsp+10h] [rbp-100h] BYREF
  __int64 v51; // [rsp+18h] [rbp-F8h]
  __int64 v52; // [rsp+20h] [rbp-F0h]
  __int64 v53; // [rsp+28h] [rbp-E8h]
  char *v54; // [rsp+30h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+38h] [rbp-D8h]
  void **v56; // [rsp+40h] [rbp-D0h]
  _QWORD *v57; // [rsp+48h] [rbp-C8h]
  __int64 *v58; // [rsp+50h] [rbp-C0h]
  _QWORD *v59; // [rsp+58h] [rbp-B8h]
  _QWORD v60[2]; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-A0h]
  unsigned int v62; // [rsp+7Ch] [rbp-94h]
  __int64 v63; // [rsp+80h] [rbp-90h] BYREF
  _DWORD *v64; // [rsp+88h] [rbp-88h]
  __int64 v65; // [rsp+90h] [rbp-80h]
  void *v66; // [rsp+98h] [rbp-78h] BYREF
  void *v67; // [rsp+A0h] [rbp-70h]
  size_t v68; // [rsp+A8h] [rbp-68h]
  __int64 v69; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-58h]
  __int64 v71; // [rsp+C0h] [rbp-50h]
  void *v72; // [rsp+C8h] [rbp-48h] BYREF
  void *__src; // [rsp+D0h] [rbp-40h]
  size_t __n; // [rsp+D8h] [rbp-38h]
  __int64 v75; // [rsp+E0h] [rbp-30h]

  v57 = a3; /*0x1002aa224*/
  result = (unsigned __int64)a1[93]; /*0x1002aa22b*/
  v71 = 0; /*0x1002aa232*/
  v4 = (char *)a1[95]; /*0x1002aa240*/
  if ( result != 0 && v4 != nullptr ) /*0x1002aa24a*/
  {
    v5 = (unsigned __int64)a1[94]; /*0x1002aa25b*/
    v6 = v71; /*0x1002aa262*/
    LOBYTE(v6) = result != 0; /*0x1002aa266*/
    v71 = v6; /*0x1002aa268*/
    if ( a2 ) /*0x1002aa26f*/
    {
      v56 = a1 + 35; /*0x1002aa27c*/
      v59 = a1 + 79; /*0x1002aa28a*/
      v58 = (__int64 *)(a1 + 96); /*0x1002aa298*/
      v7 = 0; /*0x1002aa29f*/
      while ( 1 ) /*0x1002aa2d8*/
      {
        if ( v7 || (v71 & 1) == 0 ) /*0x1002aa2e1*/
        {
          if ( (v71 & 1) == 0 ) /*0x1002aa324*/
            goto LABEL_110; /*0x1002aa324*/
          if ( v5 >= *(unsigned __int16 *)(v7 + 406) ) /*0x1002aa335*/
            goto LABEL_21; /*0x1002aa335*/
          goto LABEL_16; /*0x1002aa335*/
        }
        v71 = 1; /*0x1002aa2e8*/
        if ( !v5 ) /*0x1002aa2ef*/
        {
          v7 = result; /*0x1002aa342*/
          goto LABEL_20; /*0x1002aa345*/
        }
        v7 = result; /*0x1002aa2f4*/
        if ( (v5 & 7) == 0 ) /*0x1002aa2fb*/
          break; /*0x1002aa2fb*/
        v8 = 0; /*0x1002aa2fd*/
        do /*0x1002aa30d*/
        {
          v7 = *(_QWORD *)(v7 + 408); /*0x1002aa300*/
          ++v8; /*0x1002aa307*/
        }
        while ( (v5 & 7) != v8 ); /*0x1002aa30d*/
        v9 = v5 - v8; /*0x1002aa312*/
        if ( v5 >= 8 ) /*0x1002aa319*/
          goto LABEL_19; /*0x1002aa319*/
LABEL_20:
        v5 = 0; /*0x1002aa38e*/
        result = 0; /*0x1002aa390*/
        if ( !*(_WORD *)(v7 + 406) ) /*0x1002aa392*/
        {
LABEL_21:
          while ( 1 ) /*0x1002aa3a0*/
          {
            v10 = *(_QWORD *)(v7 + 352); /*0x1002aa3a0*/
            if ( !v10 ) /*0x1002aa3aa*/
              break; /*0x1002aa3aa*/
            ++result; /*0x1002aa3b0*/
            v11 = *(unsigned __int16 *)(v7 + 404); /*0x1002aa3b3*/
            v7 = *(_QWORD *)(v7 + 352); /*0x1002aa3bb*/
            if ( (unsigned __int16)v11 < *(_WORD *)(v10 + 406) ) /*0x1002aa3c6*/
              goto LABEL_23; /*0x1002aa3c6*/
          }
LABEL_114:
          core::option::unwrap_failed::h44626cade04bbf1e(&off_101BF2AE8); /*0x1002aad16*/
        }
LABEL_16:
        v10 = v7; /*0x1002aa337*/
        v11 = v5; /*0x1002aa33a*/
LABEL_23:
        v54 = v4; /*0x1002aa3c8*/
        if ( !result ) /*0x1002aa3d2*/
        {
          v5 = v11 + 1; /*0x1002aa460*/
          v7 = v10; /*0x1002aa465*/
          goto LABEL_31; /*0x1002aa465*/
        }
        v12 = v10 + 8 * v11 + 416; /*0x1002aa3d8*/
        if ( (result & 7) != 0 ) /*0x1002aa3e7*/
        {
          v13 = 0; /*0x1002aa3ed*/
          do /*0x1002aa400*/
          {
            v7 = *(_QWORD *)v12; /*0x1002aa3f0*/
            v12 = *(_QWORD *)v12 + 408LL; /*0x1002aa3f3*/
            ++v13; /*0x1002aa3fa*/
          }
          while ( (result & 7) != v13 ); /*0x1002aa400*/
          v14 = result - v13; /*0x1002aa405*/
          if ( result < 8 ) /*0x1002aa40c*/
            goto LABEL_29; /*0x1002aa40c*/
          do /*0x1002aa44f*/
          {
LABEL_28:
            v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 408LL) /*0x1002aa410*/
                                                                                       + 408LL)
                                                                           + 408LL)
                                                               + 408LL)
                                                   + 408LL)
                                       + 408LL)
                           + 408LL);
            v12 = v7 + 408; /*0x1002aa444*/
            v14 -= 8LL; /*0x1002aa44b*/
          }
          while ( v14 ); /*0x1002aa44f*/
          goto LABEL_29; /*0x1002aa44f*/
        }
        v14 = result; /*0x1002aa5a0*/
        if ( result >= 8 ) /*0x1002aa5a7*/
          goto LABEL_28; /*0x1002aa5a7*/
LABEL_29:
        v5 = 0; /*0x1002aa451*/
LABEL_31:
        codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::stamp_history_item::hf04961f6e0838f4c( /*0x1002aa468*/
          (__int64)v56,
          v10 + 32 * v11);
        v70 = v10 + 32 * v11; /*0x1002aa48d*/
        v15 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa494*/
                          "statuscompleted",
                          6,
                          v70);
        if ( !v15 ) /*0x1002aa49c*/
          v15 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa49e*/
        v16 = v15; /*0x1002aa4a5*/
        if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1002aa4af*/
                                v15,
                                &off_101BF1D80) )
          goto LABEL_34; /*0x1002aa4af*/
        v20 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa530*/
                        "type",
                        4,
                        v70);
        if ( !v20 ) /*0x1002aa538*/
          v20 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa53a*/
        if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1002aa54b*/
                                v20,
                                &off_101BF2118) )
        {
          v21 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa568*/
                            "statuscompleted",
                            6,
                            v70);
          if ( !v21 ) /*0x1002aa570*/
            v21 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa572*/
          v16 = v21; /*0x1002aa579*/
          if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1002aa583*/
                                  v21,
                                  &off_101BF2370) )
          {
LABEL_34:
            v55 = v5; /*0x1002aa4b8*/
            if ( *v59 ) /*0x1002aa4c6*/
            {
              v62 = *(_DWORD *)(v10 + 4 * v11 + 360); /*0x1002aa4d8*/
              v17 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa4ee*/
                                "type",
                                4,
                                v70);
              if ( !v17 ) /*0x1002aa4f6*/
                v17 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa4f8*/
              if ( *(_BYTE *)v17 == 3 ) /*0x1002aa502*/
              {
                v18 = v17[2]; /*0x1002aa508*/
                v19 = v17[3]; /*0x1002aa50c*/
              }
              else
              {
                v18 = 1; /*0x1002aa5b2*/
                v19 = 0; /*0x1002aa5b8*/
              }
              v22 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa5ca*/
                                "phase",
                                5,
                                v70);
              if ( !v22 ) /*0x1002aa5d2*/
                v22 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa5d4*/
              if ( *(_BYTE *)v22 == 3 ) /*0x1002aa5de*/
              {
                v23 = v22[2]; /*0x1002aa5e0*/
                v22 = (_QWORD *)v22[3]; /*0x1002aa5e4*/
              }
              else
              {
                v23 = 0; /*0x1002aa5ea*/
              }
              v16 = v59; /*0x1002aa5fa*/
              codexmate_lib::core::relay::anthropic_trace::Trace::output_item::hd6887119cabe1d1f( /*0x1002aa614*/
                v59,
                "donehighc_idNULL",
                4,
                v62,
                v18,
                v19,
                v23,
                (__int64)v22);
            }
            v60[0] = 0; /*0x1002aa619*/
            v61 = 0; /*0x1002aa624*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16); /*0x1002aa62f*/
            v24 = 4; /*0x1002aa634*/
            v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002aa643*/
            if ( !v25 ) /*0x1002aa64b*/
              goto LABEL_115; /*0x1002aa64b*/
            *v25 = 1701869940; /*0x1002aa654*/
            v63 = 4; /*0x1002aa65a*/
            v64 = v25; /*0x1002aa665*/
            v65 = 4; /*0x1002aa66c*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002aa674*/
            v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x1002aa683*/
            if ( !v26 ) /*0x1002aa68b*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1002aad4c*/
            qmemcpy(v26, "response.output_item.done", 25); /*0x1002aa6b7*/
            LOBYTE(v72) = 3; /*0x1002aa6be*/
            __src = (void *)25; /*0x1002aa6c2*/
            __n = (size_t)v26; /*0x1002aa6ca*/
            v75 = 25; /*0x1002aa6ce*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v66, v60, &v63, &v72); /*0x1002aa6ec*/
            if ( (_BYTE)v66 != 6 ) /*0x1002aa6f5*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x1002aa6fb*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66); /*0x1002aa700*/
            v24 = 12; /*0x1002aa705*/
            v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1002aa714*/
            if ( !v27 ) /*0x1002aa71c*/
              goto LABEL_115; /*0x1002aa71c*/
            qmemcpy(v27, "output_index", 12); /*0x1002aa72c*/
            v63 = 12; /*0x1002aa736*/
            v64 = v27; /*0x1002aa741*/
            v65 = 12; /*0x1002aa748*/
            v28 = *(unsigned int *)(v10 + 4 * v11 + 360); /*0x1002aa750*/
            LOBYTE(v72) = 2; /*0x1002aa758*/
            __src = nullptr; /*0x1002aa75c*/
            __n = v28; /*0x1002aa764*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v66, v60, &v63, &v72); /*0x1002aa77e*/
            if ( (_BYTE)v66 != 6 ) /*0x1002aa787*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x1002aa78d*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66); /*0x1002aa792*/
            v24 = 7; /*0x1002aa797*/
            v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1002aa7a6*/
            if ( !v29 ) /*0x1002aa7ae*/
              goto LABEL_115; /*0x1002aa7ae*/
            *(_DWORD *)((char *)v29 + 3) = 1684627309; /*0x1002aa7b7*/
            *v29 = 1835365481; /*0x1002aa7be*/
            v63 = 7; /*0x1002aa7c4*/
            v64 = v29; /*0x1002aa7cf*/
            v65 = 7; /*0x1002aa7d6*/
            v30 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002aa7ee*/
                            "iderrormessage",
                            2,
                            v70);
            if ( !v30 ) /*0x1002aa7f6*/
              v30 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1002aa7f8*/
            serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x1002aa806*/
              &v72,
              v30);
            if ( (_BYTE)v72 == 6 ) /*0x1002aa80f*/
            {
              v66 = __src; /*0x1002aacc0*/
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002aace2*/
                "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXCha"
                "tgptApikeyPro5xPro20xConfigAuthCatalogThreadProxy",
                43,
                &v66,
                &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
                &off_101BF23B0);
            }
            v69 = v75; /*0x1002aa819*/
            v68 = __n; /*0x1002aa821*/
            v67 = __src; /*0x1002aa82d*/
            v66 = v72; /*0x1002aa831*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v72, v60, &v63, &v66); /*0x1002aa84b*/
            if ( (_BYTE)v72 != 6 ) /*0x1002aa854*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v72); /*0x1002aa85a*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v72); /*0x1002aa85f*/
            v24 = 4; /*0x1002aa864*/
            v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002aa873*/
            if ( !v31 ) /*0x1002aa87b*/
LABEL_115:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x1002aad2c*/
            *v31 = 1835365481; /*0x1002aa884*/
            v63 = 4; /*0x1002aa88a*/
            v64 = v31; /*0x1002aa895*/
            v65 = 4; /*0x1002aa89c*/
            serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x1002aa8ac*/
              &v72,
              v70);
            if ( (_BYTE)v72 == 6 ) /*0x1002aa8b5*/
            {
              v66 = __src; /*0x1002aaced*/
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002aad0f*/
                "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXCha"
                "tgptApikeyPro5xPro20xConfigAuthCatalogThreadProxy",
                43,
                &v66,
                &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
                &off_101BF23B0);
            }
            v69 = v75; /*0x1002aa8bf*/
            v68 = __n; /*0x1002aa8c7*/
            v67 = __src; /*0x1002aa8d3*/
            v66 = v72; /*0x1002aa8d7*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v72, v60, &v63, &v66); /*0x1002aa8f1*/
            if ( (_BYTE)v72 != 6 ) /*0x1002aa8fa*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v72); /*0x1002aa900*/
            v53 = v61; /*0x1002aa913*/
            v52 = v60[1]; /*0x1002aa925*/
            v51 = v60[0]; /*0x1002aa929*/
            v50[0] = 5; /*0x1002aa92c*/
            codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc( /*0x1002aa951*/
              &v72,
              v58,
              (__int64)"response.output_item.done",
              (__int64 (__fastcall *)())0x19,
              v50);
            v32 = __src; /*0x1002aa956*/
            v33 = __n; /*0x1002aa95a*/
            v34 = v57; /*0x1002aa95e*/
            v35 = v57[2]; /*0x1002aa968*/
            if ( __n > *v57 - v35 ) /*0x1002aa972*/
            {
              v37 = v57; /*0x1002aa9bd*/
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59( /*0x1002aa9c6*/
                v57,
                v57[2],
                __n,
                1,
                1);
              v35 = v37[2]; /*0x1002aa9cb*/
              v34 = v37; /*0x1002aa9cf*/
            }
            v36 = v34; /*0x1002aa97b*/
            memcpy((void *)(v35 + v34[1]), v32, v33); /*0x1002aa984*/
            v36[2] = v33 + v35; /*0x1002aa98c*/
            if ( v72 ) /*0x1002aa997*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v72, 1); /*0x1002aa9a5*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v50); /*0x1002aa2b7*/
            v5 = v55; /*0x1002aa2bc*/
          }
        }
        result = 0; /*0x1002aa2c3*/
        v4 = v54 - 1; /*0x1002aa2cf*/
        if ( v54 == (char *)1 ) /*0x1002aa2d2*/
          return result; /*0x1002aa2d2*/
      }
      v9 = v5; /*0x1002aa347*/
      if ( v5 < 8 ) /*0x1002aa34e*/
        goto LABEL_20; /*0x1002aa34e*/
      do /*0x1002aa38c*/
      {
LABEL_19:
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 408) /*0x1002aa350*/
                                                                                               + 408LL)
                                                                                   + 408LL)
                                                                       + 408LL)
                                                           + 408LL)
                                               + 408LL)
                                   + 408LL)
                       + 408LL);
        v9 -= 8LL; /*0x1002aa388*/
      }
      while ( v9 ); /*0x1002aa38c*/
      goto LABEL_20; /*0x1002aa38c*/
    }
    v38 = 0; /*0x1002aa9d4*/
    while ( v38 || (v71 & 1) == 0 ) /*0x1002aa9f7*/
    {
      if ( (v71 & 1) == 0 ) /*0x1002aaa54*/
LABEL_110:
        core::option::unwrap_failed::h44626cade04bbf1e(&off_101BF2B00); /*0x1002aaca4*/
      if ( v5 < *(unsigned __int16 *)(v38 + 406) ) /*0x1002aaa66*/
      {
LABEL_88:
        v41 = v38; /*0x1002aaa6c*/
        v42 = v5; /*0x1002aaa6f*/
        goto LABEL_95; /*0x1002aaa72*/
      }
      do /*0x1002aab18*/
      {
LABEL_93:
        v41 = *(_QWORD *)(v38 + 352); /*0x1002aaaf0*/
        if ( !v41 ) /*0x1002aaafb*/
          goto LABEL_114; /*0x1002aaafb*/
        ++result; /*0x1002aab01*/
        v42 = *(unsigned __int16 *)(v38 + 404); /*0x1002aab04*/
        v38 = *(_QWORD *)(v38 + 352); /*0x1002aab0d*/
      }
      while ( (unsigned __int16)v42 >= *(_WORD *)(v41 + 406) ); /*0x1002aab18*/
LABEL_95:
      if ( !result ) /*0x1002aab1d*/
      {
        v5 = v42 + 1; /*0x1002aabb0*/
        v38 = v41; /*0x1002aabb4*/
        goto LABEL_103; /*0x1002aabb4*/
      }
      v43 = v41 + 8 * v42 + 416; /*0x1002aab23*/
      if ( (result & 7) != 0 ) /*0x1002aab32*/
      {
        v44 = 0; /*0x1002aab38*/
        do /*0x1002aab51*/
        {
          v38 = *(_QWORD *)v43; /*0x1002aab40*/
          v43 = *(_QWORD *)v43 + 408LL; /*0x1002aab43*/
          ++v44; /*0x1002aab4b*/
        }
        while ( (result & 7) != v44 ); /*0x1002aab51*/
        v45 = result - v44; /*0x1002aab56*/
        if ( result < 8 ) /*0x1002aab5d*/
          goto LABEL_101; /*0x1002aab5d*/
        do /*0x1002aaba0*/
        {
LABEL_100:
          v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43 /*0x1002aab60*/
                                                                                                  + 408LL)
                                                                                      + 408LL)
                                                                          + 408LL)
                                                              + 408LL)
                                                  + 408LL)
                                      + 408LL)
                          + 408LL);
          v43 = v38 + 408; /*0x1002aab94*/
          v45 -= 8LL; /*0x1002aab9c*/
        }
        while ( v45 ); /*0x1002aaba0*/
        goto LABEL_101; /*0x1002aaba0*/
      }
      v45 = result; /*0x1002aac80*/
      if ( result >= 8 ) /*0x1002aac87*/
        goto LABEL_100; /*0x1002aac87*/
LABEL_101:
      v5 = 0; /*0x1002aaba2*/
LABEL_103:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1002aabb7*/
      v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1002aabc6*/
      if ( !v46 ) /*0x1002aabce*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1002aad3d*/
      v47 = (_BYTE *)(32 * v42 + v41); /*0x1002aabd8*/
      qmemcpy(v46, "incomplete", 10); /*0x1002aabe5*/
      LOBYTE(v72) = 3; /*0x1002aabee*/
      __src = (void *)10; /*0x1002aabf2*/
      __n = (size_t)v46; /*0x1002aabfa*/
      v75 = 10; /*0x1002aabfe*/
      v48 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1002aac1a*/
                        "statuscompleted",
                        6u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v48); /*0x1002aac20*/
      v48[3] = v75; /*0x1002aac29*/
      v48[2] = __n; /*0x1002aac31*/
      v49 = v72; /*0x1002aac35*/
      v48[1] = __src; /*0x1002aac3d*/
      *v48 = v49; /*0x1002aac41*/
      if ( *v47 != 5 ) /*0x1002aac49*/
        core::option::unwrap_failed::h44626cade04bbf1e(&off_101BF2398); /*0x1002aacb7*/
      a1 = &v72; /*0x1002aac54*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99277105167e0864( /*0x1002aac62*/
        &v72,
        v47 + 8,
        "encrypted_contentresponse.reasoning_summary_part.added",
        17);
      if ( (_BYTE)v72 != 6 ) /*0x1002aac6b*/
      {
        a1 = &v72; /*0x1002aac71*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v72); /*0x1002aac75*/
      }
      result = 0; /*0x1002aa9e0*/
      if ( !--v4 ) /*0x1002aa9e8*/
        return result; /*0x1002aa9e8*/
    }
    v71 = 1; /*0x1002aa9fe*/
    if ( !v5 ) /*0x1002aaa05*/
    {
      v38 = result; /*0x1002aaa77*/
      goto LABEL_92; /*0x1002aaa7a*/
    }
    v38 = result; /*0x1002aaa0a*/
    if ( (v5 & 7) != 0 ) /*0x1002aaa11*/
    {
      v39 = 0; /*0x1002aaa13*/
      do /*0x1002aaa2e*/
      {
        v38 = *(_QWORD *)(v38 + 408); /*0x1002aaa20*/
        ++v39; /*0x1002aaa28*/
      }
      while ( (v5 & 7) != v39 ); /*0x1002aaa2e*/
      v40 = v5 - v39; /*0x1002aaa33*/
      if ( v5 < 8 ) /*0x1002aaa3a*/
      {
LABEL_92:
        v5 = 0; /*0x1002aaacf*/
        result = 0; /*0x1002aaad1*/
        if ( *(_WORD *)(v38 + 406) ) /*0x1002aaad3*/
          goto LABEL_88; /*0x1002aaadf*/
        goto LABEL_93; /*0x1002aaadf*/
      }
    }
    else
    {
      v40 = v5; /*0x1002aaa7c*/
      if ( v5 < 8 ) /*0x1002aaa83*/
        goto LABEL_92; /*0x1002aaa83*/
    }
    do /*0x1002aaacd*/
    {
      v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 408) /*0x1002aaac2*/
                                                                                              + 408LL)
                                                                                  + 408LL)
                                                                      + 408LL)
                                                          + 408LL)
                                              + 408LL)
                                  + 408LL)
                      + 408LL);
      v40 -= 8LL; /*0x1002aaac9*/
    }
    while ( v40 ); /*0x1002aaacd*/
    goto LABEL_92; /*0x1002aaacd*/
  }
  return result; /*0x1002aac92*/
}