// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14066a270
// name: chat_to_responses_response
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::chat_to_responses_response | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall chat_to_responses_response(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  int v15; // eax
  char v16; // cl
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r15
  int v34; // eax
  char v35; // cl
  bool v36; // cf
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // r13
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r14
  __int64 v48; // r14
  int v49; // eax
  char v50; // cl
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // r13
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rsi
  __int64 v62; // rsi
  int v63; // eax
  char v64; // cl
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v68; // [rsp+28h] [rbp-58h] BYREF
  __int64 v69; // [rsp+30h] [rbp-50h]
  __int64 v70; // [rsp+38h] [rbp-48h]
  __int64 v71; // [rsp+40h] [rbp-40h]
  __int64 v72; // [rsp+48h] [rbp-38h]
  __int64 v73; // [rsp+50h] [rbp-30h]
  __int64 v74; // [rsp+58h] [rbp-28h]
  __int64 v75; // [rsp+60h] [rbp-20h]
  __int128 v76; // [rsp+68h] [rbp-18h] BYREF
  __int64 v77; // [rsp+78h] [rbp-8h]
  __int64 v78; // [rsp+80h] [rbp+0h]
  __int64 v79; // [rsp+88h] [rbp+8h]
  __int64 v80; // [rsp+90h] [rbp+10h]

  v80 = -2;
  v2 = a1;
  v3 = *(unsigned __int8 *)a2;
  if ( v3 == 3 )
  {
    sub_14149C500(a1, a2 + 1);
  }
  else if ( v3 == 4 )
  {
    sub_140315170(&v68, a2[2], a2[2] + 32LL * a2[3]);
    v17 = v69;
    v18 = v70;
    sub_140440300((unsigned int)&v76, v69, v70, (unsigned int)&unk_141767EA8, 1);
    *(_QWORD *)(v2 + 16) = v77;
    *(_OWORD *)v2 = v76;
    if ( v18 )
    {
      v19 = (_QWORD *)(v17 + 8);
      do
      {
        v20 = *(v19 - 1);
        if ( v20 )
          sub_140001660(*v19, v20, 1);
        v19 += 3;
        --v18;
      }
      while ( v18 );
    }
    if ( v68 )
      sub_140001660(v17, 24 * v68, 8);
  }
  else
  {
    if ( v3 == 5 )
    {
      v4 = a2[1];
      if ( v4 )
      {
        v75 = a1;
        v74 = a2[2];
        v79 = v74;
        v78 = v4;
        v5 = v4;
        while ( 2 )
        {
          v6 = v5 + 360;
          v7 = *(unsigned __int16 *)(v5 + 626);
          v71 = v5;
          v8 = v5 - 32;
          v72 = v7;
          v9 = 3LL * (unsigned int)(8 * v7);
          v10 = -1;
          while ( v9 )
          {
            v11 = v6 + 24;
            v12 = *(_QWORD *)(v6 + 16);
            v13 = v12 - 4;
            if ( v12 >= 4 )
              v12 = 4;
            v14 = -(__int64)v13;
            v15 = sub_1416847B0(aText_5, *(_QWORD *)(v6 + 8), v12);
            if ( v15 )
              v14 = v15;
            v16 = (v14 > 0) - (v14 < 0);
            v8 += 32;
            ++v10;
            v9 -= 24;
            v6 = v11;
            if ( v16 != 1 )
            {
              if ( v16 )
                goto LABEL_16;
              chat_to_responses_response(&v76, v8);
              v21 = *((_QWORD *)&v76 + 1);
              v73 = *((_QWORD *)&v76 + 1);
              sub_14033BC10(*((_QWORD *)&v76 + 1), v77);
              v2 = v75;
              if ( !v22 )
              {
                if ( (_QWORD)v76 )
                  sub_140001660(v21, v76, 1);
                goto LABEL_29;
              }
              goto LABEL_75;
            }
          }
          v10 = v72;
LABEL_16:
          if ( v79 )
          {
            --v79;
            v5 = *(_QWORD *)(v71 + 8 * v10 + 632);
            continue;
          }
          break;
        }
LABEL_29:
        v23 = v74;
        v24 = v78;
        while ( 2 )
        {
          v25 = v24 + 360;
          v26 = v24 - 32;
          v79 = *(unsigned __int16 *)(v24 + 626);
          v27 = 3LL * (unsigned int)(8 * v79);
          v28 = -1;
          do
          {
            if ( !v27 )
            {
              v28 = v79;
              goto LABEL_40;
            }
            v29 = v25 + 24;
            v30 = *(_QWORD *)(v25 + 8);
            v31 = *(_QWORD *)(v25 + 16);
            v32 = 10;
            if ( v31 < 0xA )
              v32 = v31;
            v33 = 10 - v31;
            v34 = sub_1416847B0(aInputText_0, v30, v32);
            if ( v34 )
              v33 = v34;
            v35 = (v33 > 0) - (v33 < 0);
            v26 += 32;
            ++v28;
            v27 -= 24;
            v25 = v29;
          }
          while ( v35 == 1 );
          if ( v35 )
          {
LABEL_40:
            v36 = v23-- == 0;
            if ( !v36 )
            {
              v24 = *(_QWORD *)(v24 + 8 * v28 + 632);
              continue;
            }
            goto LABEL_45;
          }
          break;
        }
        chat_to_responses_response(&v76, v26);
        v37 = *((_QWORD *)&v76 + 1);
        v73 = *((_QWORD *)&v76 + 1);
        sub_14033BC10(*((_QWORD *)&v76 + 1), v77);
        v2 = v75;
        if ( v38 )
          goto LABEL_75;
        if ( (_QWORD)v76 )
          sub_140001660(v37, v76, 1);
LABEL_45:
        v79 = v74;
        v39 = v78;
        while ( 2 )
        {
          v40 = v39 + 360;
          v41 = *(unsigned __int16 *)(v39 + 626);
          v71 = v39;
          v42 = v39 - 32;
          v72 = v41;
          v43 = 3LL * (unsigned int)(8 * v41);
          v44 = -1;
          do
          {
            if ( !v43 )
            {
              v44 = v72;
              goto LABEL_56;
            }
            v45 = v40 + 24;
            v46 = *(_QWORD *)(v40 + 16);
            v47 = v46 - 11;
            if ( v46 >= 0xB )
              v46 = 11;
            v48 = -(__int64)v47;
            v49 = sub_1416847B0(&unk_14177C491, *(_QWORD *)(v40 + 8), v46);
            if ( v49 )
              v48 = v49;
            v50 = (v48 > 0) - (v48 < 0);
            v42 += 32;
            ++v44;
            v43 -= 24;
            v40 = v45;
          }
          while ( v50 == 1 );
          if ( v50 )
          {
LABEL_56:
            v51 = v78;
            if ( v79 )
            {
              --v79;
              v39 = *(_QWORD *)(v71 + 8 * v44 + 632);
              continue;
            }
            goto LABEL_62;
          }
          break;
        }
        chat_to_responses_response(&v76, v42);
        v52 = *((_QWORD *)&v76 + 1);
        v73 = *((_QWORD *)&v76 + 1);
        sub_14033BC10(*((_QWORD *)&v76 + 1), v77);
        v2 = v75;
        if ( v53 )
          goto LABEL_75;
        if ( (_QWORD)v76 )
          sub_140001660(v52, v76, 1);
        v51 = v78;
LABEL_62:
        v54 = v51 + 360;
        v55 = *(unsigned __int16 *)(v51 + 626);
        v78 = v51;
        v56 = v51 - 32;
        v79 = v55;
        v57 = 3LL * (unsigned int)(8 * v55);
        v58 = -1;
        do
        {
          if ( !v57 )
          {
            v58 = v79;
LABEL_72:
            v2 = v75;
            v36 = v74-- == 0;
            if ( v36 )
              goto LABEL_78;
            v51 = *(_QWORD *)(v78 + 8 * v58 + 632);
            goto LABEL_62;
          }
          v59 = v54 + 24;
          v60 = *(_QWORD *)(v54 + 16);
          v61 = v60 - 6;
          if ( v60 >= 6 )
            v60 = 6;
          v62 = -(__int64)v61;
          v63 = sub_1416847B0(aOutput_0, *(_QWORD *)(v54 + 8), v60);
          if ( v63 )
            v62 = v63;
          v64 = (v62 > 0) - (v62 < 0);
          v56 += 32;
          ++v58;
          v57 -= 24;
          v54 = v59;
        }
        while ( v64 == 1 );
        if ( v64 )
          goto LABEL_72;
        chat_to_responses_response(&v76, v56);
        v65 = *((_QWORD *)&v76 + 1);
        v73 = *((_QWORD *)&v76 + 1);
        sub_14033BC10(*((_QWORD *)&v76 + 1), v77);
        v2 = v75;
        if ( v66 )
        {
LABEL_75:
          *(_QWORD *)(v2 + 16) = v77;
          *(_OWORD *)v2 = v76;
          return v2;
        }
        if ( (_QWORD)v76 )
          sub_140001660(v65, v76, 1);
      }
    }
LABEL_78:
    *(_QWORD *)v2 = 0;
    *(_QWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = 0;
  }
  return v2;
}