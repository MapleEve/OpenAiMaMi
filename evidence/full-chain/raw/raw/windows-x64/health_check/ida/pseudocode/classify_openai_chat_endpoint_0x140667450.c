// module: codexmate_lib/core/relay/health_check
// addr: 0x140667450
// name: classify_openai_chat_endpoint
// win 1.2.3 | = mac codexmate_lib::core::relay::health_check::classify_openai_chat_endpoint | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall classify_openai_chat_endpoint(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]

  v11 = -2;
  v3 = sub_14033BC10(a1, a2);
  sub_14149A6B0(&v7, v3, v4);
  v5 = v9;
  if ( v9 )
  {
    v10 = v8;
    LOBYTE(v2) = 1;
    if ( !(unsigned __int8)sub_140681590(aEmbedding, 9, v8)
      && !(unsigned __int8)sub_140681590(aEmbed, 5, v10)
      && (v5 < 3 || *(_WORD *)v10 ^ 0x336D | *(unsigned __int8 *)(v10 + 2) ^ 0x65) )
    {
      v2 = sub_140681590(aBge, 4, v10);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( v7 )
    sub_140001660(v8, v7, 1);
  return v2;
}