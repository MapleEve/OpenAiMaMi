// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404bfef0
// name: sub_1404BFEF0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_1404BFEF0(__int64 a1, int a2, __int64 a3, __int128 *a4)
{
  __int128 *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _OWORD v9[6]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v10[6]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v11; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v12; // [rsp+100h] [rbp+80h]
  _QWORD v13[4]; // [rsp+108h] [rbp+88h] BYREF
  __int128 *v14; // [rsp+128h] [rbp+A8h]
  __int64 v15; // [rsp+130h] [rbp+B0h]

  v15 = -2;
  v14 = a4;
  sub_1404C38B0((unsigned int)v9, (unsigned int)aThreadConverge, 15, a2, a3);
  if ( LODWORD(v9[0]) == -1 )
  {
    result = v14;
    *(_OWORD *)(a1 + 80) = v14[5];
    *(_OWORD *)(a1 + 64) = result[4];
    v6 = *result;
    v7 = result[1];
    v8 = result[2];
    *(_OWORD *)(a1 + 48) = result[3];
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  else
  {
    v10[5] = v9[5];
    v10[4] = v9[4];
    v10[3] = v9[3];
    v10[2] = v9[2];
    v10[1] = v9[1];
    v10[0] = v9[0];
    v13[0] = v14;
    v13[1] = sub_140B036A0;
    v13[2] = v10;
    v13[3] = sub_140B036A0;
    sub_14149C0F0(&v11, &unk_14175C5F8, v13);
    *(_QWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = 10;
    sub_14043E650(v10);
    return (__int128 *)sub_14043E650(v14);
  }
  return result;
}