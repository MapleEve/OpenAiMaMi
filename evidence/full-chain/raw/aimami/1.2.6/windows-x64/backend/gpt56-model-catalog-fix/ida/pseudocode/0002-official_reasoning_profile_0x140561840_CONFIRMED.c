// codexmate_lib::core::relay::codex_catalog::official_reasoning_profile (Windows 对应体，红线24确认)
// win EA 0x140561840, size 304B (0x130), Windows x64, AiMaMi 1.2.6 win64.exe
// mac 对应符号: codexmate_lib::core::relay::codex_catalog::official_reasoning_profile::h642ff1ca7077d1da
//   (mac EA 0x100adcb30, size 307B) —— 两侧函数大小几乎完全一致(304B vs 307B)
// 符号来源: stripped build 无 demangled 符号；本轮通过红线24 三层恢复法第三层
//   "精确字符串/字段名定位法"——xref "default_reasoning_level" 字符串常量（排除内嵌 JSON
//   大字面量中的同名子串命中）定位到本函数，逐行结构比对 mac 侧确认。
// 已在 win IDB 中执行 rename(sub_140561840 -> official_reasoning_profile) + append_comments，
// idb_save 完成。这是本轮 8 个目标中与 mac 侧结构匹配度最高的一个（近乎逐行对应）。
//
// 完整反编译（decompile()，无截断，红线20核验：本函数体完整，无 "[N chars total]" 截断标记）：

__int64 __fastcall official_reasoning_profile(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5;     // rdi
  __int64 v6;     // rdx
  __int64 v7;     // r15
  __int64 v8, v9, v10, v11; // rdx/rcx/r8/r9
  __int64 v12, v13, v14; // rbx/r14/rax
  __int64 v15, v16;
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int128 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19;  // [rsp+38h] [rbp-38h]
  _BYTE v20[23]; // [rsp+41h] [rbp-2Fh]
  __int64 v21, v22, v23; // [rsp+58h]..[rsp+68h]
  __int64 v24;  // [rsp+70h] [rbp+0h]

  v24 = -2;
  // 第一次 index_into：字段名 "default_reasoning_level"，长度 23 字节
  // —— 与 mac 侧 index_into("default_reasoning_levelsupported_reasoning_levels", 23, a2) 完全对应
  //    （mac 用相邻常量拼接技巧只取前23字节；win 侧直接用独立的23字节常量 aDefaultReasoni_0）
  result = sub_1414D4800(aDefaultReasoni_0, 23, a2);
  if ( result
    && *(_BYTE *)result == 3   /* tag==3 即 str 变体，与 mac 完全一致 */
    && (v5 = sub_140A82F20(*(_QWORD *)(result + 16), *(_QWORD *)(result + 24)), /* trim_matches 等价 */
        v7 = v6,
        // 第二次 index_into：字段名 "supported_reasoning_levels"，长度 26 字节
        // —— 与 mac 侧 index_into("supported_reasoning_levels", 26, a2) 完全对应
        (result = sub_1414D4800(&xmmword_141812099, 26, a2)) != 0)
    && *(_BYTE *)result == 4   /* tag==4 即 array 变体，与 mac 完全一致 */
    && v7
    && *(_QWORD *)(result + 24) )
  {
    if ( v7 < 0 ) { v12 = 0; goto err; }
    v13 = result;
    v14 = sub_140001650(v7, 1);   // rust_alloc 等价
    if ( !v14 ) { err: sub_14176E54B(v12, v7); }
    v22 = v14;
    sub_14172B820(v14, v5, v7);   // memcpy 拷贝 default_reasoning_level 字符串本体
    v23 = v7;
    sub_140465C50(&v18, v13 + 8); // Vec::clone 等价 —— clone supported_reasoning_levels 数组
    v21 = v19;
    *(_OWORD *)&v20[7] = v18;
    *(_QWORD *)a1 = v23;
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = v15;
    *(_BYTE *)(a1 + 24) = 4;      // Struct{default_level:String, levels:Vec<Level>} tag=4 组装
    result = *(_QWORD *)&v20[15];
    v16 = v21;
    *(_OWORD *)(a1 + 25) = *(_OWORD *)v20;
    *(_QWORD *)(a1 + 40) = result;
    *(_QWORD *)(a1 + 48) = v16;
  }
  else
  {
    *(_QWORD *)a1 = -1;   // 两字段任一缺失/类型不符 -> None，与 mac 完全一致
  }
  return result;
}

/*
行为结论（与 mac 侧逐项对照，结构近乎完全一致）：
official_reasoning_profile 从传入的 JSON Value（catalog_models 同源的目录数据）中
提取 default_reasoning_level 字符串 + supported_reasoning_levels 数组，组装成
(默认档位, 支持档位列表) 二元结构返回；任一字段缺失/类型不匹配则整体返回 None。
字段名字符串长度(23/26字节)、tag 校验值(3=str/4=array)、Vec::clone 调用点、
结构体 tag=4 组装方式与 mac 完全对应。这是本轮红线24三层恢复法中信心最高的一例。
*/
