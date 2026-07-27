// module: codexmate_lib/core/relay/manager
// addr: 0x140846d10
// name: transition_paths
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::transition_paths | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall transition_paths(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _QWORD *v8; // [rsp+28h] [rbp-58h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-10h]
  __int128 v14; // [rsp+80h] [rbp+0h]
  char v15[888]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+408h] [rbp+388h]
  __int128 v17; // [rsp+410h] [rbp+390h]
  unsigned __int8 v18; // [rsp+428h] [rbp+3A8h]
  _QWORD *v19; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v20; // [rsp+438h] [rbp+3B8h]
  __int128 v21; // [rsp+448h] [rbp+3C8h]
  __int128 v22; // [rsp+458h] [rbp+3D8h]
  __int128 v23; // [rsp+468h] [rbp+3E8h]
  __int128 v24; // [rsp+478h] [rbp+3F8h]
  __int128 v25; // [rsp+488h] [rbp+408h]
  char v26[928]; // [rsp+498h] [rbp+418h] BYREF
  _BYTE v27[24]; // [rsp+838h] [rbp+7B8h] BYREF
  _QWORD v28[2]; // [rsp+850h] [rbp+7D0h] BYREF
  __int128 v29; // [rsp+860h] [rbp+7E0h] BYREF
  __int128 v30; // [rsp+870h] [rbp+7F0h]
  __int128 v31; // [rsp+880h] [rbp+800h]
  __int128 v32; // [rsp+890h] [rbp+810h]
  __int128 v33; // [rsp+8A0h] [rbp+820h]
  __int128 v34; // [rsp+8B0h] [rbp+830h]
  __int64 v35; // [rsp+8C8h] [rbp+848h]

  v35 = -2;
  sub_14047C8E0((__int64)&v19, (_QWORD *)(a2 + 16), 1);
  v3 = v19;
  v29 = v20;
  v30 = v21;
  v31 = v22;
  v32 = v23;
  v33 = v24;
  v34 = v25;
  if ( v19 == (_QWORD *)-1LL )
  {
    *(_OWORD *)(a1 + 88) = v34;
    *(_OWORD *)(a1 + 72) = v33;
    v5 = v29;
    v6 = v30;
    v7 = v31;
    *(_OWORD *)(a1 + 56) = v32;
    *(_OWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    sub_141684120(v15, v26, 928);
    v9 = v29;
    v10 = v30;
    v11 = v31;
    v12 = v32;
    v13 = v33;
    v14 = v34;
    v8 = v3;
    v4 = qword_1417997D0[v18];
    v28[0] = (char *)dword_1417997F0 + dword_1417997F0[v18];
    v28[1] = v4;
    v29 = v17;
    v19 = v28;
    *(_QWORD *)&v20 = sub_14041F680;
    *((_QWORD *)&v20 + 1) = &v29;
    *(_QWORD *)&v21 = sub_14148F3A0;
    sub_14149C0F0(v27, &unk_141796820, &v19);
    sub_1403565C0((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStateDbSelecte, 17, (__int64)v27);
    sub_1407BC950(&v19, &v8);
    sub_141684120(a1, &v19, 992);
    sub_140016620(&v8);
    if ( v16 )
      sub_140001660(v17, v16, 1);
  }
}