// Windows 1.2.6 对应 mac codexmate_lib::core::relay::storage::migrate_legacy_deepseek_v4_flash_official_protocol
// (mac EA 0x100778c20) 的实现，win EA 0x140b5f590（原始无符号名 sub_140B5F590，本轮已重命名）。
// 反编译方式：mcp__ida-pro-mcp-win__decompile（live IDB, hexrays_ready=true），函数体完整未截断（size 0x491=1169 字节）
//
// 中文说明：
// Windows 侧该函数与 mac 版本逻辑完全等价，但 is_deepseek_v4_flash_model 的判定逻辑被 Rust
// 编译器内联进了本函数内部（无独立符号），出现 3 处内联调用点：
//   0x140b5f87d / 0x140b5f922 / 0x140b5f9bf —— 均调用共享 helper sub_140A839D0(ptr,len,"deepseek-v4-flash",17)
// 做 17 字节 ASCII 大小写不敏感比较（SIMD 实现，见 0002-ascii-eq-ignore-case-simd-helper），
// 等价于 mac 版本手写的逐字节 |32 大小写折叠比较。
//
// 结构体字段偏移与 mac 完全一致（inferred，未与源码交叉核实）：
//   条目 stride=232，base_url @ +56/+64，models 指针/计数 @ +128/+136（子项 stride=96，
//   model_id @ +24/+32，model 级迁移标志 @ +88），条目默认模型字段 @ +104/+112，
//   条目级迁移标志 @ +230。
//
// scheme 校验：DWORD 0x70747468 == 'h','t','t','p' (小端) + 第5字节 ^ 0x73=='s' —— 即校验 "https"，
// 与 mac 版本 memcmp(...,"https",5) 等价。
// host 校验：16 字节与 xmmword_141859630 逐字节相等（pcmpeq+movmask==0xFFFF），已用 get_bytes 核实
// 该常量 == "api.deepseek.com"，与 mac 版本 xmmword_1016EEE80 字节完全相同。
// path 校验：trim_end_matches('/') 后长度==0（根路径）或 ==3 且字节匹配 "/v1"（同一套 0x762F/0x31 字节比较）。
//
// ⚠ 副作用：与 mac 版本相同，直接原地写迁移标志字节 (offset+88 / offset+230)。
//
// 字符串证据（find_regex 搜集，未推断编造）：
//   0x1418638d7 "deepseek-v4-flash"（本函数字面量参数，17 字节）
//   0x14180a888 "api.deepseek.com"（与 xmmword_141859630 内容对应）
//   0x141863ba9 附近 "...legacy DeepSeek V4 Flash official model protocol(s) to openai-responses"
//     —— 疑似该迁移函数对应的运行时日志文案（Rust fmt! 字面量分段，前导 "H" 疑为长度前缀字节非可打印字符），
//     未在本函数体内直接定位到该字符串的 xref（fmt::Arguments 字面量表可能不走直接 data_ref），
//     诚实标注：该字符串与本函数存在语义关联但未做字节级 xref 闭环验证。
//
// 调用方：sub_140B5D9D0 (0x140b5d9d0, size 0x15b7) 内 0x140b5e54c 处调用一次，疑为 storage::load 的
// Windows 对应位置（未做完整验证，未重命名，仅作调用链索引）。

__int64 __fastcall migrate_legacy_deepseek_v4_flash_official_protocol(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  __m128i si128; // xmm6
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // esi
  bool v18; // al
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int128 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int128 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int128 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v34; // [rsp+30h] [rbp-50h] BYREF
  __int128 v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+50h] [rbp-30h]
  __int128 v37; // [rsp+60h] [rbp-20h]
  __int128 v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+80h] [rbp+0h]
  __int64 v40; // [rsp+88h] [rbp+8h]
  __m128i v41; // [rsp+90h] [rbp+10h] BYREF
  __int128 v42; // [rsp+A0h] [rbp+20h]
  __int128 v43; // [rsp+B0h] [rbp+30h]
  __int128 v44; // [rsp+C0h] [rbp+40h]
  __int128 v45; // [rsp+D0h] [rbp+50h]
  __int64 v46; // [rsp+E0h] [rbp+60h]
  __int64 v47; // [rsp+E8h] [rbp+68h]
  __int64 v48; // [rsp+F0h] [rbp+70h]
  __int64 v49; // [rsp+F8h] [rbp+78h]

  v49 = -2; /*0x140b5f5b2*/
  v2 = a1; /*0x140b5f5ba*/
  v3 = a1 + 232 * a2; /*0x140b5f5c4*/
  v4 = 0; /*0x140b5f5c7*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141859630); /*0x140b5f5d7*/
  while ( v2 != v3 ) /*0x140b5f5e3*/
  {
    v6 = v2; /*0x140b5f5e9*/
    v2 += 232; /*0x140b5f5ec*/
    v7 = sub_140A82F20(*(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64)); /*0x140b5f5fb*/ // trim_matches('/') 等价
    *(_QWORD *)&v36 = 0; /*0x140b5f603*/
    v34.m128i_i64[0] = 0; /*0x140b5f60b*/
    *(_QWORD *)&v35 = 0; /*0x140b5f613*/
    sub_1414EF350(&v41, &v34, v7, v8); /*0x140b5f624*/ // url::ParseOptions::parse 等价
    if ( v41.m128i_i64[0] != -1 ) /*0x140b5f62e*/
    {
      v39 = v46; /*0x140b5f634*/
      v38 = v45; /*0x140b5f63c*/
      v9 = _mm_loadu_si128(&v41); /*0x140b5f640*/
      v37 = v44; /*0x140b5f651*/
      v36 = v43; /*0x140b5f655*/
      v35 = v42; /*0x140b5f659*/
      v34 = v9; /*0x140b5f65d*/
      v48 = v9.m128i_i64[1]; /*0x140b5f66a*/
      if ( !HIDWORD(v43) ) /*0x140b5f671*/
        goto LABEL_17; /*0x140b5f671*/
      if ( (unsigned __int64)v35 <= HIDWORD(v43) ) /*0x140b5f67e*/
      {
        if ( (_QWORD)v35 != HIDWORD(v43) ) /*0x140b5f690*/
LABEL_43:
          sub_14176E760(v48, v35, 0, HIDWORD(v43), (__int64)&off_141864D88); /*0x140b5fa06*/
      }
      else if ( *(char *)(v48 + HIDWORD(v43)) <= -65 ) /*0x140b5f689*/
      {
        goto LABEL_43; /*0x140b5f689*/
      }
      if ( HIDWORD(v43) != 5 /*0x140b5f71a*/
        || *(_DWORD *)v48 ^ 0x70747468 | *(unsigned __int8 *)(v48 + 4) ^ 0x73  // "https" 字节比较
        || (sub_1414F3400(&v34), v10)   // username 非空则短路
        || sub_1414F2850(&v34)          // password
        || sub_1414F2630(&v34)          // query
        || sub_1414F2770(&v34)          // fragment
        || (v11 = (const __m128i *)sub_1414F27D0(&v34), v11 == nullptr || v12 != 16)  // host_str, 需 16 字节
        || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v11), si128)) != 0xFFFF ) // host == "api.deepseek.com"
      {
LABEL_17:
        if ( v34.m128i_i64[0] ) /*0x140b5f727*/
          sub_140001660(v48, v34.m128i_i64[0], 1); /*0x140b5f737*/ // __rust_dealloc 等价
      }
      else
      {
        v13 = sub_1414F2570(&v34); /*0x140b5f744*/ // url::Url::path 等价
        v15 = sub_140A837D0(v13, v14, 47); /*0x140b5f753*/ // trim_end_matches('/') 等价
        if ( v16 == 3 ) /*0x140b5f75c*/
        {
          v47 = v4; /*0x140b5f77d*/
          v17 = 0; /*0x140b5f791*/
          v18 = (*(_WORD *)v15 ^ 0x762F | *(unsigned __int8 *)(v15 + 2) ^ 0x31) != 0; /*0x140b5f796*/ // "/v1" 字节比较
          if ( v34.m128i_i64[0] ) /*0x140b5f7a0*/
          {
            v19 = v48; /*0x140b5f7a8*/
            LOBYTE(v48) = v18; /*0x140b5f7ac*/
            sub_140001660(v19, v34.m128i_i64[0], 1); /*0x140b5f7af*/
            v18 = v48; /*0x140b5f7b4*/
          }
          LOBYTE(v17) = v18; /*0x140b5f7b8*/
          v20 = v17 == 0; /*0x140b5f7bb*/
          v4 = v47; /*0x140b5f7bd*/
          if ( v20 ) /*0x140b5f7c1*/
            goto LABEL_26; /*0x140b5f7c1*/
        }
        else
        {
          if ( v16 ) /*0x140b5f761*/
            goto LABEL_17; /*0x140b5f761*/
          if ( v34.m128i_i64[0] ) /*0x140b5f76a*/
            sub_140001660(v48, v34.m128i_i64[0], 1); /*0x140b5f776*/
LABEL_26:
          v21 = *(_QWORD *)(v6 + 136); /*0x140b5f7c7*/  // models 计数
          if ( v21 ) /*0x140b5f7d1*/
          {
            v47 = v4; /*0x140b5f7d7*/
            v22 = *(_QWORD *)(v6 + 128); /*0x140b5f7db*/ // models 指针
            v40 = 96 * v21; /*0x140b5f7ea*/
            v23 = 0; /*0x140b5f7ee*/
            v48 = v22; /*0x140b5f7f0*/
            do /*0x140b5f802*/
            {
              *(_QWORD *)&v24 = sub_140A82F20(*(_QWORD *)(v22 + v23 + 24), *(_QWORD *)(v22 + v23 + 32)); /*0x140b5f812*/ // trim_matches('/') on model_id
              v41.m128i_i64[0] = 0; /*0x140b5f817*/
              v41.m128i_i64[1] = *((_QWORD *)&v24 + 1); /*0x140b5f81f*/
              v42 = v24; /*0x140b5f823*/
              *(_QWORD *)&v43 = 0; /*0x140b5f82b*/
              *((_QWORD *)&v43 + 1) = *((_QWORD *)&v24 + 1); /*0x140b5f833*/
              *(_QWORD *)&v44 = 0x2F0000002FLL; /*0x140b5f841*/
              BYTE8(v44) = 1; /*0x140b5f845*/
              LOWORD(v45) = 1; /*0x140b5f849*/
              v25 = sub_140AFFB20(&v41); /*0x140b5f852*/ // split.next_back('/') 等价
              if ( v26 == 17 && v25 != 0 && (unsigned __int8)sub_140A839D0(v25, 17, aDeepseekV4Flas, 17) ) /*0x140b5f87d*/
              {
                // is_deepseek_v4_flash_model 内联判定点 #1（models 循环内）
                v22 = v48; /*0x140b5f88a*/
                if ( !*(_BYTE *)(v48 + v23 + 88) ) /*0x140b5f88e*/
                {
                  *(_BYTE *)(v48 + v23 + 88) = 1; /*0x140b5f899*/
                  ++v47; /*0x140b5f89e*/
                }
              }
              else
              {
                v22 = v48; /*0x140b5f7f6*/
              }
              v23 += 96; /*0x140b5f7fa*/
            }
            while ( v40 != v23 ); /*0x140b5f802*/
            *(_QWORD *)&v27 = sub_140A82F20(*(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112)); /*0x140b5f8af*/
            v41.m128i_i64[0] = 0; /*0x140b5f8b4*/
            v41.m128i_i64[1] = *((_QWORD *)&v27 + 1); /*0x140b5f8bc*/
            v42 = v27; /*0x140b5f8c0*/
            *(_QWORD *)&v43 = 0; /*0x140b5f8c8*/
            *((_QWORD *)&v43 + 1) = *((_QWORD *)&v27 + 1); /*0x140b5f8d0*/
            *(_QWORD *)&v44 = 0x2F0000002FLL; /*0x140b5f8de*/
            BYTE8(v44) = 1; /*0x140b5f8e2*/
            LOWORD(v45) = 1; /*0x140b5f8e6*/
            v28 = sub_140AFFB20(&v41); /*0x140b5f8ef*/
            v4 = v47; /*0x140b5f903*/
            if ( v29 == 17 /*0x140b5f92f*/
              && v28 != 0
              && (unsigned __int8)sub_140A839D0(v28, 17, aDeepseekV4Flas, 17) // 内联判定点 #2（models 非空分支的条目默认字段）
              && !*(_BYTE *)(v6 + 230) )
            {
              *(_BYTE *)(v6 + 230) = 1; /*0x140b5f93c*/
            }
          }
          else
          {
            *(_QWORD *)&v30 = sub_140A82F20(*(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112)); /*0x140b5f950*/
            v41.m128i_i64[0] = 0; /*0x140b5f955*/
            v41.m128i_i64[1] = *((_QWORD *)&v30 + 1); /*0x140b5f95d*/
            v42 = v30; /*0x140b5f961*/
            *(_QWORD *)&v43 = 0; /*0x140b5f969*/
            *((_QWORD *)&v43 + 1) = *((_QWORD *)&v30 + 1); /*0x140b5f971*/
            *(_QWORD *)&v44 = 0x2F0000002FLL; /*0x140b5f97f*/
            BYTE8(v44) = 1; /*0x140b5f983*/
            LOWORD(v45) = 1; /*0x140b5f987*/
            v31 = sub_140AFFB20(&v41); /*0x140b5f990*/
            if ( v32 == 17 /*0x140b5f9cc*/
              && v31 != 0
              && (unsigned __int8)sub_140A839D0(v31, 17, aDeepseekV4Flas, 17) // 内联判定点 #3（models 为空分支）
              && !*(_BYTE *)(v6 + 230) )
            {
              *(_BYTE *)(v6 + 230) = 1; /*0x140b5f9d9*/
              ++v4; /*0x140b5f9e0*/
            }
          }
        }
      }
    }
  }
  return v4; /*0x140b5f9eb*/
}

// refs: xmmword_141859630(=="api.deepseek.com"), sub_140A82F20(trim_matches), sub_1414EF350(url parse),
// sub_14176E760(slice_error_fail), off_141864D88, sub_140001660(rust_dealloc), sub_1414F2570(Url::path),
// sub_140A837D0(trim_end_matches), sub_140AFFB20(split.next_back), sub_140A839D0(ascii_eq_ignore_case SIMD helper),
// aDeepseekV4Flas(0x1418638d7=="deepseek-v4-flash"), sub_1414F3400/2850/2630/2770/27D0(username/password/query/fragment/host_str)
