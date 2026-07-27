// module: codexmate_lib/core/relay/translator
// addr: 0x140a1c9b0
// name: encode_anthropic_thinking_payload
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::encode_anthropic_thinking_payload | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall encode_anthropic_thinking_payload(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  bool v5; // zf
  char *v6; // rdx
  __int128 v7; // [rsp+28h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h]
  _QWORD v9[3]; // [rsp+40h] [rbp-40h] BYREF
  char **v10; // [rsp+58h] [rbp-28h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+60h] [rbp-20h]
  _QWORD *v12; // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v14)(); // [rsp+78h] [rbp-8h]
  char **v15; // [rsp+80h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+8h]

  v16 = -2;
  sub_140985700(&v10, a2);
  if ( v10 == (char **)-1LL )
  {
    v4 = *(_QWORD *)v11;
    v5 = *(_QWORD *)v11 == 1;
    v15 = (char **)v11;
    if ( v5 )
    {
      sub_140018650((char *)v11 + 8);
    }
    else if ( !v4 )
    {
      v6 = v15[2];
      if ( v6 )
        sub_140001660(v15[1], v6, 1);
    }
    result = sub_140001660(v15, 40, 8);
    *a1 = -1;
  }
  else
  {
    v15 = v10;
    v14 = v11;
    sub_140443D50(v9, &unk_1417A4B6D, v11, v12);
    if ( v15 )
      sub_140001660(v14, v15, 1);
    v10 = &off_1417A8430;
    v11 = sub_14041F680;
    v12 = v9;
    v13 = sub_1400015F0;
    sub_14149C0F0(&v7, &unk_1417A4F77, &v10);
    if ( v9[0] )
      sub_140001660(v9[1], v9[0], 1);
    result = v8;
    a1[2] = v8;
    *(_OWORD *)a1 = v7;
  }
  return result;
}