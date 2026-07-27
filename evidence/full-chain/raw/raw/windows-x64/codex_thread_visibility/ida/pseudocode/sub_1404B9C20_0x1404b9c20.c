// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404b9c20
// name: sub_1404B9C20
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_1404B9C20(__int64 a1, __int128 *a2, char a3, __int64 a4, __int64 a5)
{
  __int128 *result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD v11[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v12[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v13; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v14; // [rsp+F8h] [rbp+78h]
  _QWORD v15[4]; // [rsp+100h] [rbp+80h] BYREF
  __int128 *v16; // [rsp+120h] [rbp+A0h]
  __int64 v17; // [rsp+128h] [rbp+A8h]

  v17 = -2;
  v16 = a2;
  sub_1404C7150(v11, a4, a5);
  if ( LODWORD(v11[0]) == -1 )
  {
    result = v16;
    *(_OWORD *)(a1 + 80) = v16[5];
    *(_OWORD *)(a1 + 64) = result[4];
    v8 = *result;
    v9 = result[1];
    v10 = result[2];
    *(_OWORD *)(a1 + 48) = result[3];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    *(_BYTE *)(a1 + 96) = a3;
  }
  else
  {
    v12[5] = v11[5];
    v12[4] = v11[4];
    v12[3] = v11[3];
    v12[2] = v11[2];
    v12[1] = v11[1];
    v12[0] = v11[0];
    v15[0] = v16;
    v15[1] = sub_140B036A0;
    v15[2] = v12;
    v15[3] = sub_140B036A0;
    sub_14149C0F0(&v13, &unk_14175C274, v15);
    *(_QWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 10;
    *(_BYTE *)(a1 + 96) = 0;
    sub_14043E650(v12);
    return (__int128 *)sub_14043E650(v16);
  }
  return result;
}