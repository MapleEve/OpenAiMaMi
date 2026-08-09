// codexmate_lib::core::relay::codex_catalog::official_reasoning_profile::h642ff1ca7077d1da
// EA 0x100adcb30, size 0x133 (307B), macOS, AiMaMi 1.2.6
// 符号来源: mac IDB 精确 demangled 符号
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_catalog::official_reasoning_profile::h642ff1ca7077d1da(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  const void *v3; // r15
  signed __int64 v4; // rdx
  signed __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 result; // rax
  void *v9; // rax
  void *v10; // r12
  unsigned __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+8h] [rbp-68h] BYREF
  _BYTE v13[31]; // [rsp+21h] [rbp-4Fh]
  __int64 v14; // [rsp+40h] [rbp-30h]

  /* 复合索引字符串常量 "default_reasoning_levelsupported_reasoning_levels"（两个字段名相邻内嵌，
     index_into 内部按传入长度 23 只取前23字节 "default_reasoning_level"），
     依次读取 JSON Value 的 default_reasoning_level（tag==3, str）
     与 supported_reasoning_levels（tag==4, array）两个字段 */
  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "default_reasoning_levelsupported_reasoning_levels",
         23,
         a2);
  if ( v2
    && *(_BYTE *)v2 == 3
    && (v3 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(
                             *(_QWORD *)(v2 + 16),
                             *(_QWORD *)(v2 + 24)),
        v5 = v4,
        (v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "supported_reasoning_levels",
                26,
                a2)) != 0)
    && *(_BYTE *)v6 == 4
    && v5
    && *(_QWORD *)(v6 + 24) )
  {
    if ( v5 < 0 )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v14 = v6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("supported_reasoning_levels", 26);
    v7 = 1;
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1);
    if ( !v9 )
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v5);
    v10 = v9;
    memcpy(v9, v3, v5); /* 拷贝 default_reasoning_level 字符串本体 */
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h46129033bc30b0e4(v12, v14 + 8); /* clone supported_reasoning_levels 数组 */
    *(_QWORD *)&v13[23] = v12[2];
    *(_QWORD *)&v13[15] = v12[1];
    *(_QWORD *)&v13[7] = v12[0];
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v5;
    *(_BYTE *)(a1 + 24) = 4; /* Struct{default_level:String, levels:Vec<Level>} 组装 */
    v11 = *(_QWORD *)&v13[8];
    *(_QWORD *)(a1 + 25) = *(_QWORD *)v13;
    *(_OWORD *)(a1 + 33) = __PAIR128__(*(unsigned __int64 *)&v13[16], v11);
    result = *(_QWORD *)&v13[23];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v13[23];
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000000LL; /* 两字段任一缺失/类型不符 -> None */
    return 0x8000000000000000LL;
  }
  return result;
}

/*
行为结论：official_reasoning_profile 从传入的 JSON Value（catalog_models 同源的目录数据）中
提取 default_reasoning_level 字符串 + supported_reasoning_levels 数组，组装成
(默认档位, 支持档位列表) 二元结构返回；任一字段缺失/类型不匹配则整体返回 None。
与 Windows 侧发现的内嵌默认 JSON 字段
{"default_reasoning_level":"low","supported_reasoning_levels":[{...low...},{...medium...},
{...high...},{...xhigh...},{...max...},{...ultra...}]} 完全对应（6 档：low/medium/high/xhigh/max/ultra）。
*/
