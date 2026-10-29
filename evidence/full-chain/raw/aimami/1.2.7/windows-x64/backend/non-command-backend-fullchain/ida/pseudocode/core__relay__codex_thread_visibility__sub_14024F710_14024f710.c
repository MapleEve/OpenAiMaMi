// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024f710 | name sub_14024F710
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14024F710(__int64 a1, __int128 *a2, unsigned __int64 a3, __int128 *a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  _OWORD *v13; // rcx
  _OWORD v14[5]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v15; // [rsp+98h] [rbp+18h]
  __int128 v16; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+38h]
  __int128 v18; // [rsp+C0h] [rbp+40h]
  __int64 v19; // [rsp+D0h] [rbp+50h]
  _BYTE v20[96]; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v21; // [rsp+140h] [rbp+C0h]
  __int64 v22; // [rsp+148h] [rbp+C8h]
  __int64 v23; // [rsp+150h] [rbp+D0h]
  _QWORD *v24; // [rsp+158h] [rbp+D8h]
  __int64 v25; // [rsp+160h] [rbp+E0h]

  v25 = -2;
  v7 = a6[1];
  v24 = a6;
  v8 = a6[2];
  sub_14024B560((__int64)v14, a2, a3, v7, v8, a4, a5);
  if ( LODWORD(v14[0]) == -1 )
  {
    v13 = v24;
    result = v24[2];
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *v13;
    *(_QWORD *)(a1 + 24) = -1;
  }
  else
  {
    v21 = v8;
    sub_1403DCC10(&v16, v7, v7 + 424 * v8);
    *(_OWORD *)&v20[80] = v15;
    *(_OWORD *)&v20[64] = v14[4];
    *(_OWORD *)&v20[48] = v14[3];
    *(_OWORD *)&v20[32] = v14[2];
    *(_OWORD *)&v20[16] = v14[1];
    *(_OWORD *)v20 = v14[0];
    v19 = v17;
    v9 = v16;
    v18 = v16;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v15 + 1);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v20[72];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v20[56];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v20[40];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v20[24];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v20[8];
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v20;
    *(_OWORD *)a1 = v9;
    v22 = 0;
    v23 = v7;
    v10 = v7;
    while ( v21 != v22 )
    {
      ++v22;
      v11 = v10 + 424;
      sub_14038CC60();
      v10 = v11;
    }
    result = *v24;
    if ( *v24 )
      return sub_140001660(v23, 424 * result, 8);
  }
  return result;
}
