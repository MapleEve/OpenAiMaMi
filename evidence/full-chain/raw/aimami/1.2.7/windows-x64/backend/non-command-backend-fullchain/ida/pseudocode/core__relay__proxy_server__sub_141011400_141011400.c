// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x141011400 | name sub_141011400
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141011400(__m128i *a1, __int64 a2, unsigned int a3, char a4)
{
  int v6; // r12d
  unsigned int v7; // edi
  __int64 *v9; // rax
  unsigned int *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  _QWORD v13[114]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v14; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  __m128i v16[42]; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v17; // [rsp+9E8h] [rbp+968h]
  int v18; // [rsp+9F0h] [rbp+970h]
  __int64 v19; // [rsp+A08h] [rbp+988h]
  int v20; // [rsp+A10h] [rbp+990h]
  __int64 v21; // [rsp+A78h] [rbp+9F8h]
  __m128i v22[42]; // [rsp+AD0h] [rbp+A50h] BYREF
  __int64 v23; // [rsp+D78h] [rbp+CF8h]
  int v24; // [rsp+D80h] [rbp+D00h]
  char v25; // [rsp+DB8h] [rbp+D38h] BYREF
  char v26; // [rsp+DC0h] [rbp+D40h] BYREF
  __int64 v27; // [rsp+DC8h] [rbp+D48h] BYREF
  int v28; // [rsp+DD0h] [rbp+D50h] BYREF
  __int64 v29; // [rsp+E08h] [rbp+D88h]
  _QWORD v30[10]; // [rsp+E60h] [rbp+DE0h] BYREF

  v30[3] = -2;
  v6 = 2;
  if ( a3 >= 0x3B9ACA00 )
    v6 = a3 - 1000000000;
  if ( v6 == 1 )
  {
    sub_14126A8B0(v22);
    v27 = 12;
    v28 = 0;
    v23 = 12;
    v24 = 0;
    v29 = 6;
    if ( !a4 )
    {
LABEL_5:
      sub_1418F44E0(&v14, v22, 0x390u);
      goto LABEL_11;
    }
  }
  else
  {
    v7 = a3;
    sub_14126A8B0(v16);
    v17 = 30;
    v18 = 0;
    v21 = 10;
    v19 = 60;
    v20 = 0;
    sub_1418F44E0(v22, v16, 0x390u);
    if ( v6 )
    {
      v9 = (__int64 *)&v25;
      v10 = (unsigned int *)&v26;
    }
    else
    {
      v9 = &v27;
      v10 = (unsigned int *)&v28;
      v7 = 0;
      a2 = 30;
    }
    *v9 = a2;
    *v10 = v7;
    if ( !a4 )
      goto LABEL_5;
  }
  sub_1412676B0(&v14, v22);
LABEL_11:
  v30[0] = 0;
  v30[1] = 1;
  v30[2] = &unk_141A6F498;
  sub_1412677D0(v13, &v14, v30);
  result = sub_141261060(v13);
  if ( result == 1 )
  {
    v30[0] = sub_14122E700(v12);
    v13[0] = v30;
    v13[1] = sub_14122E940;
    sub_1416ABFD0(&v14, &unk_141A6CEC5, v13);
    sub_140192750(v30[0]);
    result = v15;
    a1[1].m128i_i64[0] = v15;
    *a1 = v14;
  }
  else
  {
    a1->m128i_i64[1] = v12;
    a1->m128i_i64[0] = -1;
  }
  return result;
}
