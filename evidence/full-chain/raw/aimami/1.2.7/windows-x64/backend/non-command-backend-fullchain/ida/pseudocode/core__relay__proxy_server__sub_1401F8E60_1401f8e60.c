// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1401f8e60 | name sub_1401F8E60
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401F8E60(_QWORD *a1, const __m128i *a2, signed __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __m128i *v9; // rax
  __int64 v10; // r14
  _BYTE v12[32]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  signed __int64 v15; // [rsp+70h] [rbp-10h]
  char v16[8]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v17; // [rsp+80h] [rbp+0h]
  signed __int64 v18; // [rsp+90h] [rbp+10h]
  char v19; // [rsp+9Fh] [rbp+1Fh]
  __int64 v20; // [rsp+A0h] [rbp+20h]

  v20 = -2;
  *(_QWORD *)&v14 = 0;
  v15 = 0;
  nullsub_1(a1);
  v6 = sub_140001650(6, 1);
  if ( !v6 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v6 + 4) = 28271;
  *(_DWORD *)v6 = 1935762802;
  v13[0] = 6;
  v13[1] = v6;
  v13[2] = 6;
  if ( a3 < 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( a3 )
  {
    nullsub_1(v7);
    v8 = 1;
    v9 = (__m128i *)sub_140001650(a3, 1);
    if ( !v9 )
    {
LABEL_4:
      v19 = 1;
      sub_141938D2B(v8, a3);
    }
    v10 = (__int64)v9;
    sub_1418F44E0(v9, a2, a3);
  }
  else
  {
    v10 = 1;
  }
  v16[0] = 3;
  *(_QWORD *)&v17 = a3;
  *((_QWORD *)&v17 + 1) = v10;
  v18 = a3;
  v19 = 0;
  sub_140E72AA0(v12, &v14, v13, v16);
  if ( v12[0] != 0xFF )
    sub_14002F9D0(v12);
  v17 = v14;
  v18 = v15;
  v16[0] = 5;
  return sub_1401C5C50(*a1 + 16LL, (int)aRetry, 5, (__int64)v16);
}
