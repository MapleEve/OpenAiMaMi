// module: codexmate_lib/core/relay/translator
// addr: 0x140a1fac0
// name: anthropic_web_search_tool_with_type
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::anthropic_web_search_tool_with_type | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall anthropic_web_search_tool_with_type(unsigned __int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  const char *v5; // rbx
  unsigned __int64 v6; // rax
  int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 result; // rax
  _BYTE v19[32]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  char v22[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+80h] [rbp+0h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp+8h]
  __int64 v29; // [rsp+90h] [rbp+10h]
  __int64 v30; // [rsp+98h] [rbp+18h]

  v30 = -2;
  v3 = a1;
  if ( a3 >= 0xD )
  {
    v6 = _byteswap_uint64(*a2);
    a1 = 0x7765625F73656172LL;
    if ( v6 != 0x7765625F73656172LL
      || (v6 = _byteswap_uint64(*(unsigned __int64 *)((char *)a2 + 5)),
          a1 = 0x65617263685F3230LL,
          v7 = 0,
          v6 != 0x65617263685F3230LL) )
    {
      v7 = 2 * (a1 >= v6) - 1;
    }
    v5 = "web_search_20250305";
    if ( !v7 )
      v5 = (const char *)a2;
    v4 = 19;
    if ( !v7 )
      v4 = a3;
  }
  else
  {
    v4 = 19;
    v5 = "web_search_20250305";
  }
  *(_QWORD *)&v20 = 0;
  v21 = 0;
  nullsub_1(a1);
  v8 = (_DWORD *)sub_140001650(4, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 4);
  *v8 = 1701869940;
  v27 = 4;
  v28 = v8;
  v29 = 4;
  nullsub_1(v9);
  v10 = sub_140001650(v4, 1);
  v26 = v10;
  if ( !v10 )
    sub_1416C2D4B(1, v4);
  v11 = v10;
  sub_141684120(v10, v5, v4);
  v22[0] = 3;
  v23 = v4;
  v24 = v11;
  v25 = v4;
  sub_140307860(v19, &v20, &v27, v22);
  if ( v19[0] != 0xFF )
    sub_1400104F0(v19);
  nullsub_1(v12);
  v13 = (_DWORD *)sub_140001650(4, 1);
  if ( !v13 )
    sub_1416C2D4B(1, 4);
  *v13 = 1701667182;
  v27 = 4;
  v28 = v13;
  v29 = 4;
  nullsub_1(v14);
  v15 = (void *)sub_140001650(10, 1);
  v26 = (__int64)v15;
  if ( !v15 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v15, "web_search", 10);
  v22[0] = 3;
  v23 = 10;
  v24 = (__int64)v15;
  v25 = 10;
  sub_140307860(v19, &v20, &v27, v22);
  if ( v19[0] != 0xFF )
    sub_1400104F0(v19);
  nullsub_1(v16);
  v17 = (_QWORD *)sub_140001650(8, 1);
  if ( !v17 )
    sub_1416C2D4B(1, 8);
  *v17 = 0x736573755F78616DLL;
  v27 = 8;
  v28 = v17;
  v29 = 8;
  v22[0] = 2;
  v23 = 0;
  v24 = 5;
  sub_140307860(v19, &v20, &v27, v22);
  if ( v19[0] != 0xFF )
    sub_1400104F0(v19);
  result = v21;
  *(_QWORD *)(v3 + 24) = v21;
  *(_OWORD *)(v3 + 8) = v20;
  *(_BYTE *)v3 = 5;
  return result;
}