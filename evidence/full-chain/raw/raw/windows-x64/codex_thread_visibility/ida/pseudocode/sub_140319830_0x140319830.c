// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140319830
// name: sub_140319830
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140319830(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  _OWORD *v7; // rax
  _OWORD *v8; // r14
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _OWORD v20[8]; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v21[8]; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v22; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v23; // [rsp+138h] [rbp+B8h]
  __int64 v24; // [rsp+140h] [rbp+C0h]

  v24 = -2;
  if ( a2 == a3 )
  {
LABEL_18:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return a1;
  }
  v5 = a2;
  while ( *(_QWORD *)(v5 + 72) == -1 )
  {
    *(_QWORD *)&v21[0] = -1;
LABEL_4:
    v5 += 200;
    if ( v5 == a3 )
      goto LABEL_18;
  }
  sub_1404DDDC0(v21, v5 + 72);
  if ( *(_QWORD *)&v21[0] == -1 )
    goto LABEL_4;
  nullsub_1(v6);
  v7 = (_OWORD *)sub_140001650(512, 8);
  if ( !v7 )
    sub_1416C2D4B(8, 512);
  v8 = v7;
  v9 = v5 + 200;
  v7[7] = v21[7];
  v7[6] = v21[6];
  v7[5] = v21[5];
  v7[4] = v21[4];
  v10 = v21[0];
  v11 = v21[1];
  v12 = v21[2];
  v7[3] = v21[3];
  v7[2] = v12;
  v7[1] = v11;
  *v7 = v10;
  *(_QWORD *)&v22 = 4;
  *((_QWORD *)&v22 + 1) = v7;
  v13 = 1;
LABEL_9:
  v23 = v13;
LABEL_11:
  v14 = v9;
  while ( v14 != a3 )
  {
    v9 = v14 + 200;
    if ( *(_QWORD *)(v14 + 72) == -1 )
    {
      *(_QWORD *)&v20[0] = -1;
      goto LABEL_11;
    }
    sub_1404DDDC0(v20, v14 + 72);
    v14 = v9;
    if ( *(_QWORD *)&v20[0] != -1 )
    {
      if ( v13 == (_QWORD)v22 )
      {
        sub_141688D30((unsigned int)&v22, v13, 1, 8, 128);
        v8 = *((_OWORD **)&v22 + 1);
      }
      v15 = v13 << 7;
      *(_OWORD *)((char *)v8 + v15 + 112) = v20[7];
      *(_OWORD *)((char *)v8 + v15 + 96) = v20[6];
      *(_OWORD *)((char *)v8 + v15 + 80) = v20[5];
      *(_OWORD *)((char *)v8 + v15 + 64) = v20[4];
      v16 = v20[0];
      v17 = v20[1];
      v18 = v20[2];
      *(_OWORD *)((char *)v8 + v15 + 48) = v20[3];
      *(_OWORD *)((char *)v8 + v15 + 32) = v18;
      *(_OWORD *)((char *)v8 + v15 + 16) = v17;
      *(_OWORD *)((char *)v8 + v15) = v16;
      ++v13;
      goto LABEL_9;
    }
  }
  a1[2] = v23;
  *(_OWORD *)a1 = v22;
  return a1;
}