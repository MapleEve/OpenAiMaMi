// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d81d50 | name sub_140D81D50
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D81D50(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  _BYTE v17[104]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v18[55]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v19; // [rsp+408h] [rbp+388h]
  __int128 v20; // [rsp+410h] [rbp+390h]
  unsigned __int8 v21; // [rsp+428h] [rbp+3A8h]
  _BYTE v22[104]; // [rsp+430h] [rbp+3B0h] BYREF
  __m128i v23[58]; // [rsp+498h] [rbp+418h] BYREF
  _BYTE v24[24]; // [rsp+838h] [rbp+7B8h] BYREF
  _QWORD v25[2]; // [rsp+850h] [rbp+7D0h] BYREF
  __int128 v26; // [rsp+860h] [rbp+7E0h] BYREF
  __int128 v27; // [rsp+870h] [rbp+7F0h]
  __int128 v28; // [rsp+880h] [rbp+800h]
  __int128 v29; // [rsp+890h] [rbp+810h]
  __int128 v30; // [rsp+8A0h] [rbp+820h]
  __int128 v31; // [rsp+8B0h] [rbp+830h]
  __int64 v32; // [rsp+8C0h] [rbp+840h]

  v32 = -2;
  v4 = *a2;
  v5 = *a2 + 16;
  result = sub_140C751D0((__int64)v22, v5);
  if ( *(_DWORD *)v22 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v22[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v22[64];
    v7 = *(_OWORD *)v22;
    v8 = *(_OWORD *)&v22[16];
    v9 = *(_OWORD *)&v22[32];
    v10 = *(_OWORD *)&v22[48];
LABEL_3:
    *(_OWORD *)(a1 + 56) = v10;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = -1;
    return result;
  }
  sub_140D9A5F0(v22, a2);
  sub_140D8B880(v17, v4, v22);
  if ( *(_DWORD *)v17 == -1 )
  {
    sub_1407ADB20(v22);
    LOBYTE(v14) = 1;
    result = sub_140C1F580(v22, v5, v14);
    v15 = *(_QWORD *)v22;
    v26 = *(_OWORD *)&v22[8];
    v27 = *(_OWORD *)&v22[24];
    v28 = *(_OWORD *)&v22[40];
    v29 = *(_OWORD *)&v22[56];
    v30 = *(_OWORD *)&v22[72];
    v31 = *(_OWORD *)&v22[88];
    if ( *(_QWORD *)v22 == -1 )
    {
      *(_OWORD *)(a1 + 88) = v31;
      *(_OWORD *)(a1 + 72) = v30;
      v7 = v26;
      v8 = v27;
      v9 = v28;
      v10 = v29;
      goto LABEL_3;
    }
    sub_1418F44E0(v18, v23, 0x3A0u);
    *(_OWORD *)&v17[8] = v26;
    *(_OWORD *)&v17[24] = v27;
    *(_OWORD *)&v17[40] = v28;
    *(_OWORD *)&v17[56] = v29;
    *(_OWORD *)&v17[72] = v30;
    *(_OWORD *)&v17[88] = v31;
    *(_QWORD *)v17 = v15;
    v16 = qword_141A50710[v21];
    v25[0] = (char *)dword_141A50730 + dword_141A50730[v21];
    v25[1] = v16;
    v26 = v20;
    *(_QWORD *)v22 = v25;
    *(_QWORD *)&v22[8] = sub_140186EE0;
    *(_QWORD *)&v22[16] = &v26;
    *(_QWORD *)&v22[24] = sub_14169F630;
    sub_1416ABFD0(v24, &unk_141A4A308, v22);
    sub_14019B500((unsigned int)aRouterTransiti, 17, (unsigned int)aStateDbSelecte, 17, (__int64)v24);
    sub_14028DE70((__int64)v22, (__int64)v17);
    sub_1418F44E0((__m128i *)a1, (const __m128i *)v22, 0x3E0u);
    result = sub_140034990(v17);
    if ( v19 )
      return sub_140001660(v20, v19, 1);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v17[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v17[64];
    v11 = *(_OWORD *)v17;
    v12 = *(_OWORD *)&v17[16];
    v13 = *(_OWORD *)&v17[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v17[48];
    *(_OWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = -1;
    return sub_1407ADB20(v22);
  }
  return result;
}
