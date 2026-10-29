// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e334f0 | name sub_140E334F0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140E334F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  signed __int64 v6; // rbx
  const __m128i *v7; // rsi
  __int64 v8; // rdi
  const __m128i *v9; // rcx
  const __m128i *v10; // rdx
  signed __int64 v11; // rbx
  const __m128i *v12; // r15
  unsigned __int64 v13; // r14
  const __m128i *v14; // rax
  unsigned __int64 v15[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h]
  const __m128i *v18; // [rsp+40h] [rbp-40h]
  signed __int64 v19; // [rsp+48h] [rbp-38h]
  unsigned __int64 v20[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  const __m128i *v23; // [rsp+78h] [rbp-8h]
  const __m128i *v24; // [rsp+80h] [rbp+0h]
  const __m128i *v25; // [rsp+88h] [rbp+8h]
  const __m128i *v26; // [rsp+90h] [rbp+10h]
  char v27; // [rsp+9Fh] [rbp+1Fh]
  __int64 v28; // [rsp+A0h] [rbp+20h]

  v28 = -2;
  if ( *(_BYTE *)(a1 + 176) )
  {
    if ( *(_BYTE *)(a1 + 176) != 1 )
      return;
    v26 = *(const __m128i **)(a1 + 152);
    v4 = *(_QWORD *)(a1 + 160);
    v5 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 160) = 1;
    *(_QWORD *)(a1 + 168) = 0;
    *(_BYTE *)(a1 + 176) = 2;
    v24 = (const __m128i *)v4;
    sub_1402F5700(v15, v4, v5);
    if ( v15[0] == -1 )
    {
      v27 = 1;
      v12 = v24;
      sub_140300E30(v20, (__int64)v24, v5);
      v13 = v20[0];
      v14 = v26;
      v25 = v12;
      if ( v20[0] != -1 )
      {
        v25 = (const __m128i *)v20[1];
        v5 = v20[2];
        if ( v26 )
          sub_140001660(v12, v26, 1);
        v14 = (const __m128i *)v13;
      }
      v23 = v14;
      if ( v5 )
      {
        sub_140E322D0(a1, v25, v5, a2);
        sub_140E30B70(a1, a2);
      }
      v10 = v23;
      if ( v23 )
      {
        v9 = v25;
        goto LABEL_26;
      }
    }
    else
    {
      v21 = v15[0];
      v25 = (const __m128i *)v15[1];
      v22 = v17;
      v23 = v18;
      v6 = v19;
      if ( v16 )
      {
        sub_140E322D0(a1, v25, v16, a2);
        sub_140E30B70(a1, a2);
      }
      if ( v6 )
        sub_140E2EC90(a1, v23, v6, a2);
      v7 = v26;
      if ( v22 )
        sub_140001660(v23, v22, 1);
      v8 = (__int64)v24;
      if ( v21 )
        sub_140001660(v25, v21, 1);
      if ( v7 )
      {
        v9 = (const __m128i *)v8;
        v10 = v7;
LABEL_26:
        sub_140001660(v9, v10, 1);
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 176) = 2;
    v24 = *(const __m128i **)(a1 + 152);
    v26 = *(const __m128i **)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 160) = 1;
    *(_QWORD *)(a1 + 168) = 0;
    if ( v11 )
    {
      sub_140E30B70(a1, a2);
      sub_140E2EC90(a1, v26, v11, a2);
    }
    if ( v24 )
      sub_140001660(v26, v24, 1);
  }
}
