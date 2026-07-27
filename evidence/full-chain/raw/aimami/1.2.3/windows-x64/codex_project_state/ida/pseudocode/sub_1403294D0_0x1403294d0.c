// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x1403294d0
// name: sub_1403294D0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1403294D0(unsigned __int64 *a1, _QWORD *a2)
{
  __int128 *v3; // r13
  __int128 *v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  _OWORD *v11; // rcx
  unsigned __int64 v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rax
  _BYTE v16[31]; // [rsp+29h] [rbp-27h]
  _QWORD *v17; // [rsp+48h] [rbp-8h]

  v3 = (__int128 *)a2[1];
  v4 = (__int128 *)a2[3];
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)((char *)v4 - (char *)v3) >> 3);
  v6 = 0x5555555555555560LL * ((unsigned __int64)((char *)v4 - (char *)v3) >> 3);
  v7 = 0x7FFFFFFFFFFFFFF8LL;
  LOBYTE(v7) = (unsigned __int64)((char *)v4 - (char *)v3) > 0xBFFFFFFFFFFFFFE8uLL || v6 > 0x7FFFFFFFFFFFFFF8LL;
  if ( (_BYTE)v7 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  if ( !v6 )
  {
    v10 = 8;
    v5 = 0;
    if ( v3 != v4 )
      goto LABEL_7;
LABEL_13:
    v12 = 0;
    v14 = a2[2];
    if ( !v14 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v17 = a2;
  nullsub_1(v7);
  v8 = 8;
  v9 = sub_140001650(v6, 8);
  if ( !v9 )
LABEL_3:
    sub_1416C2D4B(v8, v6);
  v10 = v9;
  a2 = v17;
  if ( v3 == v4 )
    goto LABEL_13;
LABEL_7:
  v11 = (_OWORD *)(v10 + 1);
  v12 = 0;
  do
  {
    *(_QWORD *)&v16[23] = *((_QWORD *)v3 + 2);
    v13 = *v3;
    v3 = (__int128 *)((char *)v3 + 24);
    *(_OWORD *)&v16[7] = v13;
    *((_BYTE *)v11 - 1) = 3;
    *v11 = *(_OWORD *)v16;
    *(_OWORD *)((char *)v11 + 15) = *(_OWORD *)&v16[15];
    ++v12;
    v11 += 2;
  }
  while ( v3 != v4 );
  v14 = a2[2];
  if ( v14 )
LABEL_10:
    sub_140001660(*a2, 24 * v14, 8);
LABEL_11:
  *a1 = v5;
  a1[1] = v10;
  a1[2] = v12;
  return a1;
}