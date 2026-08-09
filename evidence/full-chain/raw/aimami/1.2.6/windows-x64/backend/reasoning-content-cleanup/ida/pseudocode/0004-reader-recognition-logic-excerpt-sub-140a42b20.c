/*
 * honest excerpt (NOT full function) from sub_140A42B20 @0x140a42b20, size=0xc100 (49408 bytes / ~48KB)
 * this is a giant multi-purpose dispatch function spanning MANY unrelated features
 * (Doubao provider request building, voice-transcription post-processing system prompt,
 *  tool_use/web_search_call field dispatch, etc.) merged together by the compiler/linker;
 * it was NOT renamed as a whole because no single confident name covers its full scope.
 *
 * the block below (raw ASM ground-truth at 0x140a42ed9-0x140a42f65, see evidence.md) is the
 * ONLY part relevant to reasoning-content-cleanup: it detects the private carrier prefix
 * 'aimami-anthropic-thinking-v1:' written by set_anthropic_thinking_carrier(0x140a28fb0)
 * inside an 'encrypted_content' field of a 'reasoning'-typed item, using the exact byte-length
 * template (9/'reasoning', 17/'encrypted_content', 29/prefix) requested by the task, matching
 * mac-side response_item_id_compat::is_unusable_store_false_reasoning_item(0x10024df90).
 *
 * pseudocode variable names below (v15/v16/v1391 etc.) are function-LOCAL Hex-Rays SSA temps
 * reused across many unrelated branches of this 48KB function; do not assume cross-branch
 * continuity of these names outside this excerpt.
 */

 v198;
              v1394.m256i_i64[2] = v228;
              v1394.m256i_i64[3] = v399;
              v400 = v198;
              if ( v227 )
              {
                v401 = v198 + 32;
                do
                {
                  v400 = v401;
                  v402 = *(_BYTE *)(v401 - 32);
                  if ( v402 == -1 )
                    break;
                  v403 = v400 - 32;
                  v1391[0] = v402;
                  v404 = _mm_loadu_si128((const __m128i *)(v400 - 32 + 1));
                  *(__m128i *)&v1391[16] = _mm_loadu_si128((const __m128i *)(v400 - 32 + 16));
                  *(__m128i *)&v1391[1] = v404;
                  v1389 = v400;
                  sub_140A21BF0(&v1269, v185, v1402, v1391);
                  v400 = v1389;
                  v401 = v1389 + 32;
                }
                while ( v403 + 32 != v399 );
                v1394.m256i_i64[1] = v400;
              }
              v1384 = v228;
              v1377 = v198;
              v1398 = (__m128i *)((unsigned __int64)(v399 - v400) >> 5);
              v1389 = v400;
              v405 = v400;
              v1402 = 0;
              while ( v1398 != (__m128i *)v1402 )
              {
                ++v1402;
                v406 = v405 + 32;
                ((void (*)(void))sub_1403FF680)();
                v405 = v406;
              }
              if ( v1384 )
                sub_140001660(v1377, 32 * v1384, 8);
              v23 = v24;
            }
          }
        }
        else
        {                                       // 【中文证据注释】识别/清理侧(读取) private carrier 前缀的具体字节位置，在 sub_140A42B20(0x140a42b20, 0xc100=49408字节巨型多用途分发函数, 未整体重命名, 理由见下) 内部。本段(0x140a42ed9-0x140a42f65)与 mac 侧 response_item_id_compat::is_unusable_store_false_reasoning_item(0x10024df90) 行为模板逐字节对应: ① cmp rdi,9 + xor 比对 8+1 字节常量 0x6E696E6F73616572/0x67 = 字符串值=="reasoning"(9字节, 对应 mac 侧 payload.type!='reasoning' 判断, 不匹配跳 loc_140A42F8E 保留)；② 0x140a42f12 mov edx,11h + lea rcx,aEncryptedConte_0 调用 sub_1414D4800查字段 "encrypted_content"(17字节, 对应 mac 侧 17字节字段名); ③ 0x140a42f39 cmp r9,1Dh 长度>=29检查(对应 mac 侧 <29 保留判断); ④ 0x140a42f43-0x140a42f60 双16字节SIMD重叠比对(bytes[0:16)对xmm9、bytes[13:29)对xmm13)实现 29字节完整比对私有前缀 'aimami-anthropic-thinking-v1:'(@0x141855e45, 实测两段字节与该地址字节完全匹配, 根据 get_bytes 实测确认); ⑤ 0xFFFF全匹配后 jz loc_140A45BC1: r8+=0x1D(29)/r9-=0x1D 定位前缀后的 base64 后缀, 调用 sub_140B9FFD0(推断为 UTF-8 校验/构造 owned 字符串) + sub_14086E7A0(推断为 base64 解码) 尝试重建原始 Anthropic thinking/redacted_thinking 内容块。【与 mac 侧的差异】mac 侧 is_unusable_store_false_reasoning_item 是纯布尔判定函数(仅用于 store:false 请求清理时判定是否丢弃)；win 侧本段在前缀匹配后执行的是【解码重建】而非纯布尔丢弃——未能在本函数内找到与 mac 侧完全等价的纯判定-丢弃分支, 如实标注不臃造。sub_140A42B20 本身同时包含Doubao请求构建/语音转写后处理系统提示词等与本话题无关的分支, 因此未整体改名。完整字节级证据见 evidence.md 及 gate-report.json。
          if ( v28 != 9 || *(_QWORD *)v27 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v27 + 8) ^ 0x67LL )
            goto LABEL_33;
          v1388 = v1396;
          v31 = sub_1414D4800(aEncryptedConte_0, 17, v1386);
          if ( v31 )
          {
            if ( *(_BYTE *)v31 == 3 )
            {
              v32 = *