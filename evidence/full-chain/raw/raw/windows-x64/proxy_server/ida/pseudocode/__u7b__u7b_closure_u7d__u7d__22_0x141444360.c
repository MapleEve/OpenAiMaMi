// module: codexmate_lib/core/relay/proxy_server
// addr: 0x141444360
// name: __u7b__u7b_closure_u7d__u7d__22
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::inject_hint_into_error::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__22(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 (__fastcall **v9)(); // rdx
  unsigned __int64 v10; // rdi
  _QWORD v12[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[5]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v16[2]; // [rsp+78h] [rbp-8h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+8h]
  unsigned __int64 v18; // [rsp+90h] [rbp+10h]
  unsigned __int64 v19; // [rsp+98h] [rbp+18h]
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+28h]
  __int64 v22; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v23; // [rsp+B8h] [rbp+38h]
  char v24; // [rsp+C7h] [rbp+47h]
  __int64 v25; // [rsp+C8h] [rbp+48h]

  v25 = -2;
  nullsub_1(a1);
  v4 = sub_140001650(20, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 20);
  v20 = v4;
  v21 = 0;
  v22 = 20;
  v23 = 1;
  v24 = 1;
  v5 = sub_141445490(a2, v13);
  v24 = 1;
  sub_1414461E0(&v20, (char *)v13 + v5, 20 - v5);
  v6 = v20;
  v7 = v21;
  v8 = v23;
  if ( (v23 & 1) != 0 )
  {
    v10 = v23 >> 5;
    v12[0] = (v23 >> 5) + v22;
    v12[1] = v20 - (v23 >> 5);
    v12[2] = (v23 >> 5) + v21;
    v24 = 0;
    sub_141447740(v16, v12);
    v15 = v10;
    v7 = v17 - v10;
    if ( v17 < v10 )
    {
      v19 = v17;
      v14 = v17;
      v13[0] = &v15;
      v13[1] = sub_1401C5400;
      v13[2] = &v14;
      v13[3] = sub_1401C5400;
      sub_1416C32C0(&unk_141A12481, v13, &off_141A12510);
    }
    v6 = v16[1] + v10;
    v9 = (__int64 (__fastcall **)())v16[0];
    v8 = v18;
  }
  else
  {
    v9 = off_141EC9020[0];
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v8;
  *(_BYTE *)(a1 + 32) = 0;
  return a1;
}