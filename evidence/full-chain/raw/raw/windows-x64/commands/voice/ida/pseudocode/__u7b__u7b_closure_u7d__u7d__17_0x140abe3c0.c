// module: codexmate_lib/commands/voice
// addr: 0x140abe3c0
// name: __u7b__u7b_closure_u7d__u7d__17
// win 1.2.3 | tree_not_on_disk gapfill (residual census close) | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::commands::voice::generate_voice_prompt::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
unsigned __int64 __fastcall _u7b__u7b_closure_u7d__u7d__17(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  _QWORD v10[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v11[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( a3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v5 = *a1;
  if ( a3 )
  {
    nullsub_1(a1);
    v4 = 1;
    v7 = sub_140001650(a3, 1);
    if ( !v7 )
LABEL_3:
      sub_1416C2D4B(v4, a3);
    v8 = v7;
    sub_141684120(v7, a2, a3);
  }
  else
  {
    v8 = 1;
  }
  v10[0] = a3;
  v10[1] = v8;
  v10[2] = a3;
  result = sub_140063A40((unsigned int)v11, v5, (unsigned int)aVoiceLlmToken, 15, (__int64)v10);
  if ( v11[0] != -1 )
    return sub_140A8E080(v11);
  return result;
}
