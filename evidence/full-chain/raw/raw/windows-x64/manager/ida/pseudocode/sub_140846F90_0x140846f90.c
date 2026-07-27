// module: codexmate_lib/core/relay/manager
// addr: 0x140846f90
// name: sub_140846F90
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140846F90(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  char v21; // [rsp+144h] [rbp+C4h]
  _OWORD v22[6]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v23[6]; // [rsp+1A8h] [rbp+128h] BYREF
  char v24; // [rsp+1D8h] [rbp+158h]
  __int64 v25; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v26; // [rsp+1E8h] [rbp+168h]
  __int64 v27; // [rsp+1F0h] [rbp+170h]
  __int64 v28; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v29; // [rsp+200h] [rbp+180h]
  __int64 v30; // [rsp+208h] [rbp+188h]
  __int64 v31; // [rsp+210h] [rbp+190h] BYREF
  __int64 v32; // [rsp+218h] [rbp+198h]
  __int64 v33; // [rsp+220h] [rbp+1A0h]
  __int64 v34; // [rsp+228h] [rbp+1A8h]
  __int64 v35; // [rsp+230h] [rbp+1B0h]
  __int64 v36; // [rsp+238h] [rbp+1B8h]
  __int64 v37; // [rsp+240h] [rbp+1C0h]

  v37 = -2;
  sub_14085A1E0((__int64)&v18, (__int64)a2);
  sub_140319B20(&v31, v19, v19 + 232 * v20);
  sub_140578870((__int64)&v28, &v18);
  sub_140846450(&v25, a2[3]);
  v4 = *a2 + 16LL;
  v5 = v32;
  v6 = v33;
  v7 = v29;
  v8 = v30;
  v9 = 0;
  v36 = v25;
  v35 = v26;
  if ( v25 != -1 )
    v9 = v26;
  v23[0] = v32;
  v23[1] = v33;
  v23[2] = v29;
  v23[3] = v30;
  v23[4] = v9;
  v23[5] = v27;
  v24 = v21;
  reconcile((__int64)v22, v4, v23);
  v34 = v6;
  if ( v36 > 0 )
    sub_140001660(v35, v36, 1);
  if ( v8 )
  {
    v10 = (_QWORD *)(v7 + 8);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        sub_140001660(*v10, v11, 1);
      v10 += 3;
      --v8;
    }
    while ( v8 );
  }
  if ( v28 )
    sub_140001660(v7, 24 * v28, 8);
  v36 = 0;
  v35 = v5;
  v12 = v5;
  while ( v34 != v36 )
  {
    ++v36;
    v13 = v12 + 232;
    sub_140018960(v12);
    v12 = v13;
  }
  if ( v31 )
    sub_140001660(v35, 232 * v31, 8);
  sub_140018740(&v18);
  if ( LODWORD(v22[0]) == -1 )
  {
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v22[5];
    *(_OWORD *)(a1 + 64) = v22[4];
    v14 = v22[0];
    v15 = v22[1];
    v16 = v22[2];
    *(_OWORD *)(a1 + 48) = v22[3];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
  }
  return a1;
}