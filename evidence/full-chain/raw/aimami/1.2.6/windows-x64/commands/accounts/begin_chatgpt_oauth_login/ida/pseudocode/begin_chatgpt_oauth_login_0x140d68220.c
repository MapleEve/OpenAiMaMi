// Pseudocode for begin_chatgpt_oauth_login (EA: 0x140d68220, size: 0x568)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: 【1.2.6 sibling命令begin_chatgpt_oauth_login的win handler】命令名字符串xref 0x1418870a6(aBeginChatgptOa)→此函数,证实win用直接字符串xref分发。cancel_chatgpt_oauth_login在win侧find_bytes全名26字节=0=非注册命令(内部函数),与mac侧一致(mac有符号无命令名字符串)
// Tauri命令handler:发起ChatGPT OAuth登录,返回CoreEnvelope<OauthLoginPayload>(授权URL等),经core::oauth_login完成。归属:命令名串精确命中+callee锚src\commands\account_oauth.rs(mac符号一致)。
char __fastcall begin_chatgpt_oauth_login(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v13; // cl
  char result; // al
  __int64 v15; // rdi
  __int64 *v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+38h] [rbp-48h]
  __int128 v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  __int128 v28; // [rsp+78h] [rbp-8h]
  __int128 v29; // [rsp+88h] [rbp+8h]
  __int128 v30; // [rsp+98h] [rbp+18h]
  __int128 v31; // [rsp+A8h] [rbp+28h]
  __int128 v32; // [rsp+B8h] [rbp+38h]
  __int64 v33; // [rsp+198h] [rbp+118h] BYREF
  __int128 v34; // [rsp+1A0h] [rbp+120h]
  __int128 v35; // [rsp+1B0h] [rbp+130h]
  _QWORD v36[8]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v37; // [rsp+200h] [rbp+180h]
  __int128 v38; // [rsp+210h] [rbp+190h]
  __int128 v39; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v40; // [rsp+230h] [rbp+1B0h]
  __int128 v41; // [rsp+240h] [rbp+1C0h]
  __int128 v42; // [rsp+250h] [rbp+1D0h]
  __int128 v43; // [rsp+260h] [rbp+1E0h]
  __int128 v44; // [rsp+270h] [rbp+1F0h]
  __int128 v45; // [rsp+280h] [rbp+200h]
  __int128 v46; // [rsp+290h] [rbp+210h]
  __int128 v47; // [rsp+2A0h] [rbp+220h]
  __int128 v48; // [rsp+2B0h] [rbp+230h]
  __int128 v49; // [rsp+2C0h] [rbp+240h]
  __int64 v50; // [rsp+2D8h] [rbp+258h]
  _QWORD *v51; // [rsp+2E0h] [rbp+260h]
  __int64 v52; // [rsp+2E8h] [rbp+268h]
  __int64 v53; // [rsp+2F0h] [rbp+270h]
  __int64 *v54; // [rsp+2F8h] [rbp+278h]
  __int64 v55; // [rsp+300h] [rbp+280h]
  __int64 v56; // [rsp+308h] [rbp+288h]
  __int64 v57; // [rsp+310h] [rbp+290h]

  v57 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 10544);
  v56 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 10545) = 257;
      *(_BYTE *)(a1 + 10547) = 1;
      v53 = a1 + 5464;
      sub_14172B820(a1 + 5464, a1 + 392, 5072);
      switch ( *(_BYTE *)(v3 + 10528) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v53 = a1 + 5464;
      switch ( *(_BYTE *)(a1 + 10528) )
      {
        case 0:
LABEL_4:
          v5 = (__int64 *)(v3 + 5984);
          v36[6] = 0;
          v36[0] = aBeginChatgptOa;
          v36[1] = 25;
          v36[2] = aApp_4;
          v36[3] = 3;
          v36[4] = v53;
          v36[5] = v5;
          sub_1401A9630((__int64)&v23, (__int64)v36);
          v48 = v24;
          v49 = v25;
          if ( v23 == -1 )
          {
            v54 = v5;
            v46 = v48;
            v47 = v49;
            sub_140CAB140(v53);
            if ( *v54 == -1 )
            {
              v11 = 1;
              v15 = v56;
              goto LABEL_21;
            }
            v51 = (_QWORD *)(v56 + 5992);
            v19 = *(_QWORD *)(v56 + 5992);
            v52 = *(_QWORD *)(v56 + 6000);
            v55 = 0;
            v50 = v19;
            while ( v52 != v55 )
            {
              ++v55;
              v20 = v19 + 96;
              sub_140401FB0();
              v19 = v20;
            }
            v18 = *v54;
            v11 = 1;
            v15 = v56;
            if ( !*v54 )
              goto LABEL_21;
LABEL_19:
            sub_140001660(*v51, 96 * v18, 8);
            goto LABEL_21;
          }
          v45 = v32;
          v44 = v31;
          v43 = v30;
          v42 = v29;
          v41 = v28;
          v40 = v27;
          v39 = v26;
          v3 = v56;
          v6 = v56 + 6008;
          *(_QWORD *)(v56 + 6008) = v23;
          v7 = v49;
          *(_OWORD *)(v3 + 6016) = v48;
          *(_OWORD *)(v3 + 6032) = v7;
          v8 = v40;
          v9 = v41;
          v10 = v42;
          *(_OWORD *)(v3 + 6048) = v39;
          *(_OWORD *)(v3 + 6064) = v8;
          *(_OWORD *)(v3 + 6080) = v9;
          *(_OWORD *)(v3 + 6096) = v10;
          *(_OWORD *)(v3 + 6112) = v43;
          *(_OWORD *)(v3 + 6128) = v44;
          *(_OWORD *)(v3 + 6144) = v45;
          *(_BYTE *)(v3 + 7504) = 0;
          sub_14172B820(v3 + 7512, v6, 1504);
          *(_BYTE *)(v3 + 10520) = 0;
LABEL_6:
          v55 = v3 + 7512;
          sub_140CAD3E0(&v23, v3 + 7512, a2);
          v11 = v23;
          if ( v23 == 2 )
          {
            v12 = v56;
            *(_BYTE *)(v56 + 10528) = 3;
            v13 = 3;
            result = 1;
            goto LABEL_22;
          }
          v47 = v25;
          v46 = v24;
          sub_140C7EFD0(v55);
          sub_140CAB140(v53);
          v15 = v56;
          if ( *(_QWORD *)(v56 + 5984) != -1 )
          {
            v51 = (_QWORD *)(v56 + 5992);
            v16 = *(__int64 **)(v56 + 5992);
            v52 = *(_QWORD *)(v56 + 6000);
            v55 = 0;
            v54 = v16;
            while ( v52 != v55 )
            {
              ++v55;
              v17 = v16 + 12;
              sub_140401FB0();
              v16 = v17;
            }
            v15 = v56;
            v18 = *(_QWORD *)(v56 + 5984);
            if ( v18 )
              goto LABEL_19;
          }
LABEL_21:
          v38 = v47;
          v37 = v46;
          *(_BYTE *)(v15 + 10528) = 1;
          sub_140C9CC10(v53);
          v35 = v38;
          v34 = v37;
          v33 = v11;
          v21 = v56;
          *(_BYTE *)(v56 + 10547) = 0;
          sub_14172B820(&v23, v21, 360);
          *(_BYTE *)(v21 + 10546) = 0;
          v22 = *(_QWORD *)(v21 + 384);
          *(_BYTE *)(v21 + 10545) = 0;
          *(_QWORD *)&v40 = *(_QWORD *)(v21 + 376);
          v39 = *(_OWORD *)(v21 + 360);
          sub_140AFFC30((__int64)&v23, v22, (__int64)&v33, &v39, *(_DWORD *)(v21 + 10536), *(_DWORD *)(v21 + 10540));
          v13 = 1;
          result = 0;
          v12 = v56;
LABEL_22:
          *(_BYTE *)(v12 + 10544) = v13;
          return result;
        case 1:
LABEL_26:
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_25:
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
}
