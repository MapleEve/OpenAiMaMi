// 函数: codexmate_lib::core::relay::anthropic_reasoning::model_matches_family
// 地址: 0x100b3bb10  大小: 0x111 (273B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: model_profile(0007) 的子例程 —— 判定"归一化后的模型名"是否以"词边界"方式包含某个
//        family token 子串, 类似正则 (?:^|[-.])family(?:$|[-.]) 的手写实现:
//        用 core::str::pattern::StrSearcher 找到 family 子串在 haystack 中的每个匹配位置后,
//        分别检查匹配前一个字符(若存在)和匹配后一个字符(若存在)是否都属于"边界字符"集合
//        (通过 bitmask 0x82005 对 (byte-45) 做位测试, 命中的是 '-'(45) 一类分隔符及范围内其它几个符号),
//        只有真正落在边界上的匹配才返回 true, 避免 "opus-4-5" 誤配到 "sonnet-4-56" 之类子串误判。
char __fastcall codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int8 v6; // cl
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  bool v9; // cf
  unsigned int v10; // ecx
  int v11; // edx
  _BYTE v13[104]; // [rsp+8h] [rbp-A8h] BYREF
  int v14; // [rsp+70h] [rbp-40h] BYREF
  __int64 v15; // [rsp+78h] [rbp-38h]

  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v13, a1, a2, a3, a4); /*0x100b3bb43*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100b3bb4f*/
    &v14,
    v13);
  if ( v14 != 1 ) /*0x100b3bb58*/
    return 0; /*0x100b3bbea*/
  while ( 1 ) /*0x100b3bb77*/
  {
    if ( v15 ) /*0x100b3bb77*/
    {
      if ( v15 - 1 >= a2 ) /*0x100b3bb80*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v15 - 1, a2, &off_101A208C8); /*0x100b3bc0d*/
      v6 = *(_BYTE *)(a1 + v15 - 1) - 45; /*0x100b3bb87*/
      if ( v6 >= 0x14u ) /*0x100b3bb8d*/
      {
        LOBYTE(v7) = 0; /*0x100b3bbb0*/
        v8 = a4 + v15; /*0x100b3bbb2*/
        v9 = a4 + v15 < a2; /*0x100b3bbb5*/
        if ( a4 + v15 == a2 ) /*0x100b3bbb8*/
          goto LABEL_13; /*0x100b3bbb8*/
      }
      else
      {
        v7 = 0x82005u >> v6; /*0x100b3bb94*/
        v8 = a4 + v15; /*0x100b3bb96*/
        v9 = a4 + v15 < a2; /*0x100b3bb99*/
        if ( a4 + v15 == a2 ) /*0x100b3bb9c*/
          goto LABEL_13; /*0x100b3bb9c*/
      }
    }
    else
    {
      LOBYTE(v7) = 1; /*0x100b3bba0*/
      v8 = a4; /*0x100b3bba2*/
      v9 = a4 < a2; /*0x100b3bba5*/
      if ( a4 == a2 ) /*0x100b3bba8*/
        goto LABEL_13; /*0x100b3bba8*/
    }
    if ( !v9 ) /*0x100b3bbba*/
      core::panicking::panic_bounds_check::h56740b1198b22635(v8, a2, &off_101A208E0); /*0x100b3bc1c*/
    v10 = *(unsigned __int8 *)(a1 + v8) - 45; /*0x100b3bbc1*/
    if ( v10 > 0x13 ) /*0x100b3bbc7*/
      goto LABEL_14; /*0x100b3bbc7*/
    v11 = 532485; /*0x100b3bbc9*/
    if ( !_bittest(&v11, v10) ) /*0x100b3bbce*/
      goto LABEL_14; /*0x100b3bbd1*/
LABEL_13:
    if ( (v7 & 1) != 0 ) /*0x100b3bbd5*/
      return 1; /*0x100b3bbee*/
LABEL_14:
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100b3bbd7*/
      &v14,
      v13);
    if ( !(_BYTE)v14 ) /*0x100b3bbe6*/
      return 0; /*0x100b3bbe6*/
  }
}
