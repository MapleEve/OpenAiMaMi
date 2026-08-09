// windows-x64 / AiMaMi 1.2.6 win64.exe / codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier
// EA: 0x140a28fb0  size: 0x1f9 (509 bytes)
// IDA MCP decompile() 原始返回, 未截断 (无 [TRUNCATED] 标记)。已在 win IDB 中改名 + 归目录
// (codexmate_lib/core/relay/translator) + append_comments 中文证据注释 + idb_save。
// mac 侧对应函数: raw/aimami/1.2.6/macos-arm64/backend/reasoning-content-cleanup/manifest.json
//   -> role=carrier_writer, symbol=translator::set_anthropic_thinking_carrier, addr=0x100a1cdd0

__int64 __fastcall set_anthropic_thinking_carrier(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  const __m128i *v5; // rcx
  __m128i v6; // xmm0
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __m128i v8; // [rsp+28h] [rbp-58h] BYREF
  char **v9; // [rsp+38h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-40h]
  __m128i v11; // [rsp+50h] [rbp-30h] BYREF
  __m128i *v12; // [rsp+68h] [rbp-18h]
  char **v13; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v14[24]; // [rsp+78h] [rbp-8h] BYREF
  char v15; // [rsp+97h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+18h]

  v16 = -2; /*0x140a28fc2*/
  result = sub_1414D4800(aType_8, 4, a2); /*0x140a28fdf*/  // get_field(a2, "type", 4)
  if ( result && *(_BYTE *)result == 3 ) /*0x140a28ff0*/   // 结果是 JSON 字符串 (tag==3)
  {
    v5 = *(const __m128i **)(result + 16); /*0x140a28ff6*/
    result = *(_QWORD *)(result + 24); /*0x140a28ffa*/     // 字符串长度
    if ( result == 17 ) /*0x140a29002*/                    // len==17 -> 候选 "redacted_thinking"
    {
      result = (unsigned int)_mm_movemask_epi8( /*0x140a2905f*/
                               _mm_and_si128(
                                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(v5[1].m128i_u8[0]), (__m128i)xmmword_1417EBD30),
                                 _mm_cmpeq_epi8(_mm_loadu_si128(v5), (__m128i)xmmword_141801AA0)));
      if ( (_DWORD)result != 0xFFFF ) /*0x140a29068*/      // 16+1 字节 SIMD 全等比对未命中 -> 提前返回
        return result; /*0x140a29068*/
      result = sub_1414D4800("data", 4, a2); /*0x140a2907d*/  // type=="redacted_thinking" -> 读 data 字段
      if ( !result ) /*0x140a29085*/
        return result; /*0x140a29085*/
    }
    else
    {
      if ( result != 8 ) /*0x140a29008*/                   // len!=8 -> 既非 "thinking" 也非 "redacted_thinking"
        return result; /*0x140a29008*/
      result = 0x676E696B6E696874LL; /*0x140a2900e*/        // 字面量 "thinking" 的小端 8 字节表示
      if ( v5->m128i_i64[0] != 0x676E696B6E696874LL ) /*0x140a2901b*/
        return result; /*0x140a2901b*/
      result = sub_1414D4800(aSignature, 9, a2); /*0x140a29030*/ // type=="thinking" -> 读 signature 字段
      if ( !result ) /*0x140a29038*/
        return result; /*0x140a29038*/
    }
    if ( *(_BYTE *)result == 3 && *(_QWORD *)(result + 24) ) /*0x140a29094*/ // 目标字段是非空字符串
    {
      sub_140961DC0(&v13, a2); /*0x140a290a6*/              // 序列化 content block 为字节流 (serde_json::to_vec 等价)
      if ( v13 == (char **)-1LL ) /*0x140a290b3*/           // 序列化失败
      {
        return sub_140865D40(-1, *(_QWORD *)v14); /*0x140a29198*/
      }
      else
      {
        v10 = *(_OWORD *)v14; /*0x140a290c0*/
        v9 = v13; /*0x140a290c4*/
        sub_1409A6990(&v11, &v9); /*0x140a290d3*/           // base64 编码序列化字节流
        v13 = &off_141855FB0; /*0x140a290df*/               // 私有前缀切片描述符 -> "aimami-anthropic-thinking-v1:"
        *(_QWORD *)v14 = sub_1402DDC10; /*0x140a290ea*/     // fmt::Arguments piece 0 (前缀字面量)
        *(_QWORD *)&v14[8] = &v11; /*0x140a290ee*/          // fmt::Arguments piece 1 (base64 结果引用)
        *(_QWORD *)&v14[16] = sub_1400015F0; /*0x140a290f9*/
        sub_141543AF0(&v7, &unk_1418512F7, &v13); /*0x140a2910c*/ // format!() 实现: 拼接 "aimami-anthropic-thinking-v1:{base64}"
        if ( v11.m128i_i64[0] ) /*0x140a29119*/
          sub_140001660(v11.m128i_i64[1], v11.m128i_i64[0], 1); /*0x140a29125*/ // 释放 base64 缓冲区
        result = v7; /*0x140a2912a*/
        v11 = _mm_loadu_si128(&v8); /*0x140a29133*/
        if ( v7 != -1 ) /*0x140a2913c*/                     // format! 成功
        {
          *(__m128i *)&v14[8] = v11; /*0x140a29142*/
          *(_QWORD *)v14 = v7; /*0x140a29146*/
          LOBYTE(v13) = 3; /*0x140a2914a*/                  // 构造 JSON 字符串 Value (tag==3)
          v15 = 1; /*0x140a2914e*/
          v12 = (__m128i *)sub_1414D4900(aEncryptedConte_0, 17, a1); /*0x140a29167*/ // index_or_insert(a1, "encrypted_content", 17)
          sub_1401FF690(v12); /*0x140a2916e*/               // drop 旧值(如有)
          v6 = _mm_loadu_si128((const __m128i *)&v13); /*0x140a29174*/
          result = (__int64)v12; /*0x140a2917e*/
          v12[1] = _mm_loadu_si128((const __m128i *)&v14[8]); /*0x140a29182*/
          *(__m128i *)result = v6; /*0x140a29187*/          // 写入新的字符串 Value 到 encrypted_content 字段
        }
      }
    }
  }
  return result; /*0x140a2919e*/
}

/* refs:
 * 0x1414d4800 sub_1414D4800           - JSON 对象字段读取 helper: get_field(obj, key, key_len)
 * 0x14184f5d8 aType_8      "type"
 * 0x1417ebd30 xmmword_1417EBD30       - SIMD 比对常量分片 (redacted_thinking 后半)
 * 0x141801aa0 xmmword_141801AA0       - SIMD 比对常量分片 (redacted_thinking 前16字节)
 * 0x141855a70 aData_1      "data"
 * 0x141855fa5 aSignature   "signature"
 * 0x140961dc0 sub_140961DC0           - serde_json 序列化 Value -> Vec<u8>
 * 0x140865d40 sub_140865D40           - 序列化失败错误路径处理
 * 0x1409a6990 sub_1409A6990           - base64 编码 (STANDARD/URL_SAFE engine, 未在本轮细分)
 * 0x141855fb0 off_141855FB0           - &str 切片描述符 {ptr=0x141855e45, len=29} -> "aimami-anthropic-thinking-v1:"
 * 0x1402ddc10 sub_1402DDC10           - fmt::Arguments piece vtable/thunk (前缀字面量)
 * 0x1400015f0 sub_1400015F0           - fmt::Arguments piece vtable/thunk (base64 结果)
 * 0x141543af0 sub_141543AF0           - core::fmt::format 实现 (format!() 落地)
 * 0x1418512f7 unk_1418512F7           - fmt::Arguments 元数据(pieces 数组描述符)
 * 0x140001660 sub_140001660           - 释放临时 Vec<u8>/String 缓冲区 (dealloc)
 * 0x1414d4900 sub_1414D4900           - JSON 对象字段写入 helper: index_or_insert(obj, key, key_len)
 * 0x141855508 aEncryptedConte_0 "encrypted_content"
 * 0x1401ff690 sub_1401FF690           - drop 旧字段值
 */
