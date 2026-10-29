// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::feed_line::h4e47b76d8889a9d4; addr: 0x100995e40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::feed_line::h4e47b76d8889a9d4(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int64 v6; // r12
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int8 *v13; // r12
  int v14; // eax
  char v15; // cl
  char v16; // dl
  char v17; // di
  unsigned __int8 *v18; // r12
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD v27[5]; // [rsp+8h] [rbp-E8h] BYREF
  _QWORD v28[3]; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-A0h]
  __int64 v31; // [rsp+58h] [rbp-98h]
  __int64 v32; // [rsp+60h] [rbp-90h] BYREF
  __int64 v33; // [rsp+68h] [rbp-88h] BYREF
  __int64 v34; // [rsp+70h] [rbp-80h]
  __int64 v35; // [rsp+78h] [rbp-78h]
  __int64 v36; // [rsp+80h] [rbp-70h] BYREF
  __int64 v37; // [rsp+88h] [rbp-68h]
  __int64 v38; // [rsp+90h] [rbp-60h]
  __int64 v39; // [rsp+98h] [rbp-58h]
  __int64 v40; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-48h]
  __int64 v42; // [rsp+B0h] [rbp-40h]
  char *v43; // [rsp+B8h] [rbp-38h]
  __int64 v44; // [rsp+C0h] [rbp-30h]
  __int64 v45; // [rsp+C8h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 477) ) /*0x100995e55*/
  {
LABEL_2:
    *a1 = 0; /*0x100995e5e*/
    a1[1] = 1; /*0x100995e65*/
    a1[2] = 0; /*0x100995e6d*/
    return a1; /*0x100995e6d*/
  }
  v6 = a4; /*0x100995e88*/
  v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a3, a4); /*0x100995e97*/
  if ( v10 != 12 || *(_QWORD *)v9 ^ 0x65203A746E657665LL | *((unsigned int *)v9 + 2) ^ 0x726F7272LL ) /*0x100995ebc*/
  {
    while ( v6 ) /*0x100995f6e*/
    {
      v12 = v6; /*0x100995f74*/
      v13 = &a3[v6]; /*0x100995f77*/
      v14 = (char)*(v13 - 1); /*0x100995f7a*/
      if ( v14 >= 0 ) /*0x100995f82*/
      {
        v6 = v13 - 1 - a3; /*0x100995f63*/
        if ( v14 != 13 ) /*0x100995f69*/
          goto LABEL_19; /*0x100995f69*/
      }
      else
      {
        v15 = *(v13 - 2); /*0x100995f84*/
        if ( v15 >= -64 ) /*0x100995f8d*/
        {
          v18 = v13 - 2; /*0x100995fb1*/
          v20 = v15 & 0x1F; /*0x100995fb5*/
        }
        else
        {
          v16 = *(v13 - 3); /*0x100995f8f*/
          if ( v16 >= -64 ) /*0x100995f98*/
          {
            v18 = v13 - 3; /*0x100995fba*/
            v19 = v16 & 0xF; /*0x100995fbe*/
          }
          else
          {
            v17 = *(v13 - 4); /*0x100995f9a*/
            v18 = v13 - 4; /*0x100995fa0*/
            v19 = ((v17 & 7) << 6) | v16 & 0x3F; /*0x100995fad*/
          }
          v20 = (v19 << 6) | v15 & 0x3F; /*0x100995fc7*/
        }
        v6 = v18 - a3; /*0x100995fd1*/
        if ( ((v20 << 6) | v14 & 0x3F) != 0xD ) /*0x100995fd7*/
        {
LABEL_19:
          if ( v12 < 5 ) /*0x100995fdd*/
            goto LABEL_2; /*0x100995fdd*/
          if ( *(_DWORD *)a3 ^ 0x61746164 | a3[4] ^ 0x3A ) /*0x100995ff3*/
            goto LABEL_2; /*0x100995ff3*/
          v21 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h795f3d55ab9b2c58(a3 + 5, v12 - 5); /*0x100996006*/
          if ( v22 == 0 || v21 == 0 ) /*0x100996014*/
            goto LABEL_2; /*0x10099601b*/
          if ( v22 == 6 && !(*(_DWORD *)v21 ^ 0x4E4F445B | *(unsigned __int16 *)(v21 + 4) ^ 0x5D45) ) /*0x10099603a*/
          {
            v26 = 0; /*0x1009961e2*/
            if ( !__OFSUB__(0, *(_QWORD *)(a2 + 296)) ) /*0x1009961f2*/
              v26 = *(_QWORD *)(a2 + 304); /*0x1009961f4*/
            codexmate_lib::core::relay::translator::completion::ResponseCompletion::from_finish::h31ee6bed80e28324( /*0x100996202*/
              &v40,
              v26);
            codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::finish_response::h6d962b2a48e269f4( /*0x100996210*/
              a1,
              a2,
              &v40);
          }
          else
          {
            v40 = v21; /*0x100996040*/
            v41 = v22; /*0x100996044*/
            v42 = 0; /*0x100996048*/
            v43 = nullptr; /*0x100996050*/
            v44 = v21; /*0x100996058*/
            v45 = v22; /*0x10099605c*/
            serde_json::de::from_trait::hb66530a7a5e497bc(&v32, &v40); /*0x10099606b*/
            if ( (_BYTE)v32 == 6 ) /*0x100996077*/
            {
              codexmate_lib::core::relay::models::sanitize_error_for_display::hdbcea9e98cd3bcf7( /*0x100996090*/
                &v29,
                "Invalid JSON in Chat SSE dataupstream_errorUpstream Chat emitted an error eventchat.completion.chunkmess"
                "age_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop",
                29);
              v23 = v30; /*0x100996095*/
              v40 = v30; /*0x1009960a6*/
              v41 = v30 + v31; /*0x1009960aa*/
              v42 = 512; /*0x1009960ae*/
              _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h9a1536ab64182627( /*0x1009960c1*/
                v28,
                &v40);
              v43 = "upstream_protocol_errorChat content or conflicting finish_reason arrived after completionid"; /*0x1009960cd*/
              v44 = 23; /*0x1009960d1*/
              v40 = v28[0]; /*0x1009960e7*/
              v41 = v28[1]; /*0x1009960eb*/
              v42 = v28[2]; /*0x1009960f6*/
              if ( v29 ) /*0x100996104*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v29, 1); /*0x10099610e*/
              codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::finish_response::h6d962b2a48e269f4( /*0x10099611d*/
                a1,
                a2,
                &v40);
              core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(&v33); /*0x100996129*/
            }
            else
            {
              v39 = v35; /*0x100996137*/
              v38 = v34; /*0x10099613f*/
              v37 = v33; /*0x100996151*/
              v36 = v32; /*0x100996155*/
              codexmate_lib::core::relay::translator::completion::ResponseCompletion::upstream_error::h8396ed53e1e3698e( /*0x100996161*/
                &v40,
                &v36);
              if ( v40 == 0x8000000000000002LL ) /*0x100996178*/
              {
                v24 = a2; /*0x100996181*/
                codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_chunk::hada324bc5aaba61a( /*0x100996184*/
                  a1,
                  a2,
                  &v36);
              }
              else
              {
                v27[4] = v44; /*0x10099618f*/
                v27[3] = v43; /*0x10099619a*/
                v27[2] = v42; /*0x1009961a5*/
                v27[1] = v41; /*0x1009961b4*/
                v27[0] = v40; /*0x1009961bb*/
                v24 = a2; /*0x1009961cc*/
                codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::finish_response::h6d962b2a48e269f4( /*0x1009961cf*/
                  a1,
                  a2,
                  v27);
              }
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v36, v24, v25); /*0x1009961d8*/
            }
          }
          return a1; /*0x10099612e*/
        }
      }
    }
    goto LABEL_2; /*0x100995f6e*/
  }
  codexmate_lib::core::relay::models::sanitize_error_for_display::hdbcea9e98cd3bcf7( /*0x100995ed8*/
    &v32,
    "Upstream Chat emitted an error eventchat.completion.chunkmessage_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop",
    36);
  v11 = v33; /*0x100995edd*/
  v40 = v33; /*0x100995eeb*/
  v41 = v33 + v34; /*0x100995eef*/
  v42 = 512; /*0x100995ef3*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h9a1536ab64182627( /*0x100995f03*/
    &v36,
    &v40);
  v43 = "upstream_errorUpstream Chat emitted an error eventchat.completion.chunkmessage_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x100995f0f*/
  v44 = 14; /*0x100995f13*/
  v40 = v36; /*0x100995f23*/
  v41 = v37; /*0x100995f27*/
  v42 = v38; /*0x100995f2f*/
  if ( v32 ) /*0x100995f3d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v32, 1); /*0x100995f47*/
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::finish_response::h6d962b2a48e269f4( /*0x100995f56*/
    a1,
    a2,
    &v40);
  return a1; /*0x100995e78*/
}