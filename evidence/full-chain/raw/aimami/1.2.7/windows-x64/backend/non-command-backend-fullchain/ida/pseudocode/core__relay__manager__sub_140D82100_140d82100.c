// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d82100 | name sub_140D82100
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140D82100(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  char v15[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+B0h] [rbp+30h]
  char v19; // [rsp+194h] [rbp+114h]
  char v20; // [rsp+1A6h] [rbp+126h]
  __m128i v21; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v22; // [rsp+1B8h] [rbp+138h]
  __int64 v23; // [rsp+1C0h] [rbp+140h]
  __int64 v24; // [rsp+1C8h] [rbp+148h]
  __int64 v25; // [rsp+1D0h] [rbp+150h]
  __int128 v26; // [rsp+1D8h] [rbp+158h]
  char v27; // [rsp+1E8h] [rbp+168h]
  char v28; // [rsp+1E9h] [rbp+169h]
  __int64 v29; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v30; // [rsp+1F8h] [rbp+178h]
  __int64 v31; // [rsp+200h] [rbp+180h]
  __int64 v32; // [rsp+208h] [rbp+188h] BYREF
  __int64 v33; // [rsp+210h] [rbp+190h]
  __int64 v34; // [rsp+218h] [rbp+198h]
  __int64 v35; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v36; // [rsp+228h] [rbp+1A8h]
  __int64 v37; // [rsp+230h] [rbp+1B0h]
  __int64 v38; // [rsp+238h] [rbp+1B8h]
  __int64 v39; // [rsp+240h] [rbp+1C0h]
  __int64 v40; // [rsp+248h] [rbp+1C8h]
  __int64 v41; // [rsp+250h] [rbp+1D0h]

  v41 = -2;
  sub_140D9A5F0(v15, a2);
  sub_1403DCEA0(&v35, v16, v16 + (v17 << 8));
  sub_140229570(&v32, v15);
  sub_140D81460(&v29, a2[3]);
  v4 = (_QWORD *)(*a2 + 16LL);
  v5 = v36;
  v6 = v37;
  v7 = v33;
  v8 = v34;
  v9 = v30;
  v40 = v29;
  v39 = v30;
  if ( v29 == -1 )
    v9 = 0;
  v22 = v36;
  v23 = v37;
  v24 = v33;
  v25 = v34;
  v21.m128i_i64[0] = v9;
  v21.m128i_i64[1] = v31;
  v27 = v19;
  v28 = v20;
  v26 = v18;
  sub_14017A0F0(a1, v4, &v21, nullptr);
  v38 = v6;
  if ( v40 > 0 )
    sub_140001660(v39, v40, 1);
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
  if ( v32 )
    sub_140001660(v7, 24 * v32, 8);
  v40 = 0;
  v39 = v5;
  v12 = v5;
  while ( v38 != v40 )
  {
    ++v40;
    v13 = v12 + 256;
    sub_14038CFC0(v12);
    v12 = v13;
  }
  if ( v35 )
    sub_140001660(v39, v35 << 8, 8);
  sub_1407ADB20(v15);
  return a1;
}
