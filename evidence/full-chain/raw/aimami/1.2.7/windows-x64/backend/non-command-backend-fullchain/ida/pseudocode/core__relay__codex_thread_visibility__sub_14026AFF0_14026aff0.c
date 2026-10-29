// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14026aff0 | name sub_14026AFF0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_14026AFF0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _OWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v10[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v11; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v12; // [rsp+F0h] [rbp+70h]
  _QWORD v13[6]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v14[2]; // [rsp+128h] [rbp+A8h] BYREF
  __int128 *v15; // [rsp+138h] [rbp+B8h]
  __int64 v16; // [rsp+140h] [rbp+C0h]

  v16 = -2;
  v15 = a2;
  v14[0] = aModelCatalog;
  v14[1] = 13;
  sub_1402555D0(v9, a3, a4);
  if ( LODWORD(v9[0]) == -1 )
  {
    result = v15;
    *(_OWORD *)(a1 + 80) = v15[5];
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
    v13[0] = v15;
    v13[1] = sub_14104A7D0;
    v13[2] = v14;
    v13[3] = sub_140186EE0;
    v13[4] = v10;
    v13[5] = sub_14104A7D0;
    sub_1416ABFD0(&v11, &unk_1419E073E, v13);
    *(_QWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = 10;
    sub_1401954F0(v10);
    return (__int128 *)sub_1401954F0(v15);
  }
  return result;
}
