// module: codexmate_lib/core/relay/manager
// addr: 0x1404dfaf0
// name: sub_1404DFAF0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404DFAF0(__int64 a1, __int64 a2)
{
  char v4; // bl
  char v5; // r14
  char v6; // r15
  int v7; // r12d
  __int128 v8; // xmm6
  __int128 v9; // xmm7
  __int64 result; // rax
  char v11; // cl
  __int64 v12; // [rsp+28h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+80h] [rbp+0h] BYREF
  __int64 v20; // [rsp+90h] [rbp+10h]
  __int128 v21; // [rsp+98h] [rbp+18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+28h]
  __int128 v23; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+40h]
  __int128 v25; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h]
  __int128 v27; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+70h]
  __int64 v29; // [rsp+F8h] [rbp+78h]

  v29 = -2;
  sub_14149C500(&v27, a2);
  sub_14149C500(&v25, a2 + 24);
  sub_14149C500(&v23, a2 + 48);
  sub_14149C500(&v21, a2 + 72);
  v4 = *(_BYTE *)(a2 + 228);
  sub_14149C500(&v19, a2 + 96);
  v5 = *(_BYTE *)(a2 + 230);
  v6 = *(_BYTE *)(a2 + 231);
  sub_1403318E0((__int64)&v15, a2 + 120);
  sub_14149C500(&v17, a2 + 144);
  v7 = *(_DWORD *)(a2 + 224);
  v8 = *(_OWORD *)(a2 + 192);
  v9 = *(_OWORD *)(a2 + 208);
  if ( *(_QWORD *)(a2 + 168) == -1 )
  {
    result = -1;
  }
  else
  {
    sub_14149C500(&v12, a2 + 168);
    result = v12;
    v14 = v13;
  }
  v11 = *(_BYTE *)(a2 + 229);
  *(_QWORD *)(a1 + 16) = v28;
  *(_OWORD *)a1 = v27;
  *(_QWORD *)(a1 + 40) = v26;
  *(_OWORD *)(a1 + 24) = v25;
  *(_OWORD *)(a1 + 48) = v23;
  *(_QWORD *)(a1 + 64) = v24;
  *(_OWORD *)(a1 + 72) = v21;
  *(_QWORD *)(a1 + 88) = v22;
  *(_BYTE *)(a1 + 228) = v4;
  *(_QWORD *)(a1 + 112) = v20;
  *(_OWORD *)(a1 + 96) = v19;
  *(_BYTE *)(a1 + 230) = v5;
  *(_BYTE *)(a1 + 231) = v6;
  *(_OWORD *)(a1 + 120) = v15;
  *(_QWORD *)(a1 + 136) = v16;
  *(_OWORD *)(a1 + 144) = v17;
  *(_QWORD *)(a1 + 160) = v18;
  *(_DWORD *)(a1 + 224) = v7;
  *(_OWORD *)(a1 + 192) = v8;
  *(_OWORD *)(a1 + 208) = v9;
  *(_QWORD *)(a1 + 168) = result;
  *(_OWORD *)(a1 + 176) = v14;
  *(_BYTE *)(a1 + 229) = v11;
  return result;
}