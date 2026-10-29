// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d598e0 | name sub_140D598E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D598E0(__int64 a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 v5; // xmm0
  char *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+48h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-28h]
  __int128 v16; // [rsp+68h] [rbp-18h]
  __int128 v17; // [rsp+78h] [rbp-8h]
  __int128 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+98h] [rbp+18h]
  __int128 v20; // [rsp+A0h] [rbp+20h]
  __int128 v21; // [rsp+B0h] [rbp+30h]
  __int128 v22; // [rsp+C0h] [rbp+40h]
  __int128 v23; // [rsp+D0h] [rbp+50h]
  __int128 v24; // [rsp+E0h] [rbp+60h]
  __int128 v25; // [rsp+F0h] [rbp+70h]
  __int128 v26; // [rsp+100h] [rbp+80h]
  __int64 v27; // [rsp+110h] [rbp+90h]
  char *v28; // [rsp+118h] [rbp+98h]
  __int64 v29; // [rsp+120h] [rbp+A0h]

  v29 = -2;
  v3 = (unsigned __int8)*a2;
  v28 = a2;
  switch ( v3 )
  {
    case 0LL:
      a2[1] = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A495F8);
    case 2LL:
      sub_141939400(&off_141A495F8);
    case 3LL:
      if ( a2[1] )
      {
        if ( a2[1] == 1 )
          sub_1419393E0(&off_141A48560);
        sub_141939400(&off_141A48560);
      }
      return result;
  }
  LOWORD(a2) = 400;
  sub_140DAFCE0(
    (unsigned int)&v12,
    (_DWORD)a2,
    (unsigned int)"中转模型请使用 ChatGPT 原生上下文压缩；请更新 ChatGPT 并重新打开任务。AiMaMi 不再生成兼容性伪摘要。router.native_compaction_required/respon"
                  "ses/responses/compact",
    136,
    (__int64)"router.native_compaction_required/responses/responses/compact",
    33);
  v4 = v12;
  v21 = v13;
  v22 = v14;
  v23 = v15;
  v24 = v16;
  v25 = v17;
  v26 = v18;
  v27 = v19;
  v5 = v20;
  v6 = v28;
  v28[1] = 1;
  if ( v4 == -1 )
  {
    v10 = 3;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = v27;
    *(_OWORD *)(a1 + 88) = v26;
    *(_OWORD *)(a1 + 72) = v25;
    v7 = v21;
    v8 = v22;
    v9 = v23;
    *(_OWORD *)(a1 + 56) = v24;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_OWORD *)(a1 + 112) = v5;
    v10 = 1;
  }
  *(_QWORD *)a1 = v4;
  *v6 = v10;
  return a1;
}
