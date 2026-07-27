// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404c3c90
// name: sub_1404C3C90
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404C3C90(__int64 a1, __int128 *a2, unsigned __int64 a3, __int128 *a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int128 v9; // xmm0
  __int64 result; // rax
  _OWORD *v11; // rcx
  _OWORD v12[5]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v13; // [rsp+88h] [rbp+8h]
  __int128 v14; // [rsp+98h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h]
  __int128 v16; // [rsp+B0h] [rbp+30h]
  __int64 v17; // [rsp+C0h] [rbp+40h]
  _BYTE v18[96]; // [rsp+C8h] [rbp+48h]
  __int64 v19; // [rsp+130h] [rbp+B0h]
  _QWORD *v20; // [rsp+138h] [rbp+B8h]
  __int64 v21; // [rsp+140h] [rbp+C0h]

  v21 = -2;
  v7 = a6[1];
  v20 = a6;
  v8 = a6[2];
  sub_1404C0750((__int64)v12, a2, a3, v7, v8, a4);
  if ( LODWORD(v12[0]) == -1 )
  {
    v11 = v20;
    result = v20[2];
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *v11;
    *(_QWORD *)(a1 + 24) = -1;
  }
  else
  {
    v19 = v7;
    sub_140319830(&v14, v7, v7 + 200 * v8);
    *(_OWORD *)&v18[80] = v13;
    *(_OWORD *)&v18[64] = v12[4];
    *(_OWORD *)&v18[48] = v12[3];
    *(_OWORD *)&v18[32] = v12[2];
    *(_OWORD *)&v18[16] = v12[1];
    *(_OWORD *)v18 = v12[0];
    v17 = v15;
    v9 = v14;
    v16 = v14;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v13 + 1);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v18[72];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v18[56];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v18[40];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v18[24];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[8];
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v18;
    *(_OWORD *)a1 = v9;
    sub_140335300((__int64)v20);
    result = *v20;
    if ( *v20 )
      return sub_140001660(v19, 200 * result, 8);
  }
  return result;
}