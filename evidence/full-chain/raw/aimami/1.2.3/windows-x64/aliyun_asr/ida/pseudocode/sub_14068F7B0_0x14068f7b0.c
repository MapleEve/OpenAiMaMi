// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14068f7b0
// name: sub_14068F7B0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14068F7B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 896) == 0xFF )
  {
    v18 = *(_QWORD *)(a1 + 904);
    v19 = *(_QWORD *)(a1 + 912);
    if ( *(_QWORD *)v19 )
      (*(void (__fastcall **)(__int64))v19)(v18);
    v1 = *(_QWORD *)(v19 + 8);
    if ( v1 )
      sub_140001660(v18, v1, *(_QWORD *)(v19 + 16));
  }
  else
  {
    sub_14068B2C0((unsigned __int8 *)(a1 + 896));
  }
  sub_140528FE0((_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 840);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 848), 40 * v2, 8);
  v3 = *(_QWORD *)(a1 + 1024);
  if ( v3 )
    sub_140001660(*(_QWORD *)(a1 + 1032), v3, 1);
  v4 = *(_QWORD *)(a1 + 1008);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1000);
    v6 = *(_QWORD *)(a1 + 984);
    v7 = *(_QWORD *)(a1 + 992);
    v8 = v6;
    if ( v5 < v6 )
      v8 = 0;
    v9 = v6 - (v5 - v8);
    v10 = v5 - v8 + v4;
    v11 = v4 - v9;
    if ( v4 < v9 )
      v11 = 0;
    if ( v4 > v9 )
      v10 = *(_QWORD *)(a1 + 984);
    v12 = v10 - (v5 - v8);
    if ( v12 )
    {
      v16 = (_QWORD *)(24 * v5 - 24 * v8 + v7 + 8);
      do
      {
        v17 = *(v16 - 1);
        if ( v17 )
          sub_140001660(*v16, v17, 1);
        v16 += 3;
        --v12;
      }
      while ( v12 );
    }
    if ( v9 < v4 )
    {
      v13 = (_QWORD *)(v7 + 8);
      do
      {
        v14 = *(v13 - 1);
        if ( v14 )
          sub_140001660(*v13, v14, 1);
        v13 += 3;
        --v11;
      }
      while ( v11 );
    }
  }
  result = *(_QWORD *)(a1 + 984);
  if ( result )
    return sub_140001660(*(_QWORD *)(a1 + 992), 24 * result, 8);
  return result;
}