// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::anthropic_to_responses_response_with_tool_map | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall anthropic_to_responses_response_with_too(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; //... [188020 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 1211/1211 retrieved (all pages fetched: True)
// disasm instructions: 6273/6273 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x1409b7dd0-0x1409b7e20 size=80 type=0 succ=['0x1409b7e20'] pred=[]
// BB 0x1409b7e20-0x1409b7e3b size=27 type=0 succ=['0x1409b7e3b', '0x1409bd8c2'] pred=['0x1409b7dd0']
// BB 0x1409b7e3b-0x1409b7e44 size=9 type=0 succ=['0x1409b7e44', '0x1409bd8c2'] pred=['0x1409b7e20']
// BB 0x1409b7e44-0x1409b7e56 size=18 type=0 succ=['0x1409b7e56', '0x1409bd8c2'] pred=['0x1409b7e3b']
// BB 0x1409b7e56-0x1409b7e6a size=20 type=1 succ=['0x1409b7e6a', '0x1409b7e8f', '0x1409b7efe', '0x1409b8052', '0x1409bd8c2'] pred=['0x1409b7e44']
// BB 0x1409b7e6a-0x1409b7e8a size=32 type=0 succ=['0x1409b7e8a', '0x1409bd8c2'] pred=['0x1409b7e56']
// BB 0x1409b7e8a-0x1409b7e8f size=5 type=0 succ=['0x1409b7f3f'] pred=['0x1409b7e6a']
// BB 0x1409b7e8f-0x1409b7ebe size=47 type=0 succ=['0x1409b7ebe', '0x1409bd8c2'] pred=['0x1409b7e56']
// BB 0x1409b7ebe-0x1409b7edc size=30 type=0 succ=['0x1409b7edc', '0x1409b823e'] pred=['0x1409b7e8f']
// BB 0x1409b7edc-0x1409b7eee size=18 type=0 succ=['0x1409b7eee', '0x1409b7ef2'] pred=['0x1409b7ebe']
// BB 0x1409b7eee-0x1409b7ef2 size=4 type=0 succ=['0x1409b7ef2'] pred=['0x1409b7edc']
// BB 0x1409b7ef2-0x1409b7efe size=12 type=0 succ=['0x1409b8240'] pred=['0x1409b7edc', '0x1409b7eee']
// BB 0x1409b7efe-0x1409b7f25 size=39 type=0 succ=['0x1409b7f25', '0x1409b80ea'] pred=['0x1409b7e56']
// BB 0x1409b7f25-0x1409b7f3f size=26 type=0 succ=['0x1409b7f3f', '0x1409bd8c2'] pred=['0x1409b7efe']
// BB 0x1409b7f3f-0x1409b7f59 size=26 type=0 succ=['0x1409b7f59', '0x1409b7f65'] pred=['0x1409b7e8a', '0x1409b7f25']
// BB 0x1409b7f59-0x1409b7f65 size=12 type=0 succ=['0x1409b7f65'] pred=['0x1409b7f3f']
// BB 0x1409b7f65-0x1409b7f6f size=10 type=0 succ=['0x1409b7f6f', '0x1409bd8c2'] pred=['0x1409b7f3f', '0x1409b7f59']
// BB 0x1409b7f6f-0x1409b7f8f size=32 type=0 succ=['0x1409b7f8f', '0x1409bd8c2'] pred=['0x1409b7f65']
// BB 0x1409b7f8f-0x1409b7f9c size=13 type=0 succ=['0x1409b7f9c', '0x1409bd8c2'] pred=['0x1409b7f6f']
// BB 0x1409b7f9c-0x1409b7fe3 size=71 type=0 succ=['0x1409b7fe3'] pred=['0x1409b7f8f']
// BB 0x1409b7fe3-0x1409b800b size=40 type=0 succ=['0x1409b800b', '0x1409bed1d'] pred=['0x1409b7f9c']
// BB 0x1409b800b-0x1409b8010 size=5 type=0 succ=['0x1409b8010', '0x1409b8025'] pred=['0x1409b7fe3']
// BB 0x1409b8010-0x1409b8025 size=21 type=0 succ=['0x1409b8025'] pred=['0x1409b800b', '0x1409bed1d']
// BB 0x1409b8025-0x1409b803f size=26 type=0 succ=['0x1409b803f', '0x1409bd8c2'] pred=['0x1409b800b', '0x1409b8010']
// BB 0x1409b803f-0x1409b8052 size=19 type=0 succ=['0x1409bd8c2'] pred=['0x1409b8025']
// BB 0x1409b8052-0x1409b807e size=44 type=0 succ=['0x1409b807e', '0x1409b81ff'] pred=['0x1409b7e56']
// BB 0x1409b807e-0x1409b80aa size=44 type=0 succ=['0x1409b80aa', '0x1409bd8c2'] pred=['0x1409b8052']
// BB 0x1409b80aa-0x1409b80c8 size=30 type=0 succ=['0x1409b80c8', '0x1409b8dbe'] pred=['0x1409b807e']
// BB 0x1409b80c8-0x1409b80da size=18 type=0 succ=['0x1409b80da', '0x1409b80de'] pred=['0x1409b80aa']
// BB 0x1409b80da-0x1409b80de size=4 type=0 succ=['0x1409b80de'] pred=['0x1409b80c8']
// BB 0x1409b80de-0x1409b80ea size=12 type=0 succ=['0x1409b8dc0'] pred=['0x1409b80c8', '0x1409b80da']
// BB 0x1409b80ea-0x1409b8108 size=30 type=0 succ=['0x1409b8108', '0x1409b81aa'] pred=['0x1409b7efe']
// BB 0x1409b8108-0x1409b811d size=21 type=0 succ=['0x1409b811d'] pred=['0x1409b80ea']
// BB 0x1409b811d-0x1409b8126 size=9 type=0 succ=['0x1409b8126', '0x1409b81aa'] pred=['0x1409b8108']
// BB 0x1409b8126-0x1409b813a size=20 type=0 succ=['0x1409b813a', '0x1409b81aa'] pred=['0x1409b811d']
// BB 0x1409b813a-0x1409b8173 size=57 type=0 succ=['0x1409b8173', '0x1409bf0d9'] pred=['0x1409b8126']
// BB 0x1409b8173-0x1409b8190 size=29 type=0 succ=['0x1409b8190', '0x1409b819f'] pred=['0x1409b813a']
// BB 0x1409b8190-0x1409b819f size=15 type=0 succ=['0x1409b819f'] pred=['0x1409b8173']
// BB 0x1409b819f-0x1409b81aa size=11 type=0 succ=['0x1409b81aa'] pred=['0x1409b8173', '0x1409b8190']
// BB 0x1409b81aa-0x1409b81c4 size=26 type=0 succ=['0x1409b81c4', '0x1409b81ea'] pred=['0x1409b80ea', '0x1409b811d', '0x1409b8126', '0x1409b819f']
// BB 0x1409b81c4-0x1409b81de size=26 type=0 succ=['0x1409b81de', '0x1409b81ea'] pred=['0x1409b81aa']
// BB 0x1409b81de-0x1409b81ea size=12 type=0 succ=['0x1409b81ea'] pred=['0x1409b81c4']
// BB 0x1409b81ea-0x1409b81ff size=21 type=0 succ=['0x1409bd8c2'] pred=['0x1409b81aa', '0x1409b81c4', '0x1409b81de']
// BB 0x1409b81ff-0x1409b821d size=30 type=0 succ=['0x1409b821d', '0x1409b8d13'] pred=['0x1409b8052']
// BB 0x1409b821d-0x1409b822e size=17 type=0 succ=['0x1409b822e', '0x1409b8232'] pred=['0x1409b81ff']
// BB 0x1409b822e-0x1409b8232 size=4 type=0 succ=['0x1409b8232'] pred=['0x1409b821d']
// BB 0x1409b8232-0x1409b823e size=12 type=0 succ=['0x1409b8d15'] pred=['0x1409b821d', '0x1409b822e']
// BB 0x1409b823e-0x1409b8240 size=2 type=0 succ=['0x1409b8240'] pred=['0x1409b7ebe']
// BB 0x1409b8240-0x1409b824b size=11 type=0 succ=['0x1409b824b', '0x1409b827d'] pred=['0x1409b7ef2', '0x1409b823e']
// BB 0x1409b824b-0x1409b826d size=34 type=0 succ=['0x1409b826d', '0x1409b827d'] pred=['0x1409b8240']
// BB 0x1409b826d-0x1409b827d size=16 type=0 succ=['0x1409b827d'] pred=['0x1409b824b']
// BB 0x1409b827d-0x1409b828e size=17 type=0 succ=['0x1409b828e', '0x1409b82af'] pred=['0x1409b8240', '0x1409b824b', '0x1409b826d']
// BB 0x1409b828e-0x1409b829f size=17 type=0 succ=['0x1409b829f', '0x1409b82af'] pred=['0x1409b827d']
// BB 0x1409b829f-0x1409b82af size=16 type=0 succ=['0x1409b82af'] pred=['0x1409b828e']
// BB 0x1409b82af-0x1409b82ea size=59 type=0 succ=['0x1409b82ea', '0x1409bd8c2'] pred=['0x1409b827d', '0x1409b828e', '0x1409b829f']
// BB 0x1409b82ea-0x1409b8356 size=108 type=0 succ=['0x1409b8356', '0x1409b9388'] pred=['0x1409b82af']
// BB 0x1409b8356-0x1409b8372 size=28 type=0 succ=['0x1409b8372'] pred=['0x1409b82ea']
// BB 0x1409b8372-0x1409b83eb size=121 type=0 succ=['0x1409b83eb', '0x1409c0240'] pred=['0x1409b8356']
// BB 0x1409b83eb-0x1409b8415 size=42 type=0 succ=['0x1409b8415'] pred=['0x1409b8372']
// BB 0x1409b8415-0x1409b8436 size=33 type=0 succ=['0x1409b8436', '0x1409bed59'] pred=['0x1409b83eb']
// BB 0x1409b8436-0x1409b8488 size=82 type=0 succ=['0x1409b8488', '0x1409b8495'] pred=['0x1409b8415']
// BB 0x1409b8488-0x1409b8495 size=13 type=0 succ=['0x1409b8495'] pred=['0x1409b8436']
// BB 0x1409b8495-0x1409b84b2 size=29 type=0 succ=['0x1409b84b2', '0x1409c0255'] pred=['0x1409b8436', '0x1409b8488']
// BB 0x1409b84b2-0x1409b852e size=124 type=0 succ=['0x1409b852e', '0x1409b853b'] pred=['0x1409b8495']
// BB 0x1409b852e-0x1409b853b size=13 type=0 succ=['0x1409b853b'] pred=['0x1409b84b2']
// BB 0x1409b853b-0x1409b8558 size=29 type=0 succ=['0x1409b8558', '0x1409c026a'] pred=['0x1409b84b2', '0x1409b852e']
// BB 0x1409b8558-0x1409b8589 size=49 type=0 succ=['0x1409b8589'] pred=['0x1409b853b']
// BB 0x1409b8589-0x1409b85aa size=33 type=0 succ=['0x1409b85aa', '0x1409bed98'] pred=['0x1409b8558']
// BB 0x1409b85aa-0x1409b85fc size=82 type=0 succ=['0x1409b85fc', '0x1409b8609'] pred=['0x1409b8589']
// BB 0x1409b85fc-0x1409b8609 size=13 type=0 succ=['0x1409b8609'] pred=['0x1409b85aa']
// BB 0x1409b8609-0x1409b8626 size=29 type=0 succ=['0x1409b8626', '0x1409c027f'] pred=['0x1409b85aa', '0x1409b85fc']
// BB 0x1409b8626-0x1409b865b size=53 type=0 succ=['0x1409b865b'] pred=['0x1409b8609']
// BB 0x1409b865b-0x1409b8676 size=27 type=0 succ=['0x1409b8676'] pred=['0x1409b8626']
// BB 0x1409b8676-0x1409b8697 size=33 type=0 succ=['0x1409b8697', '0x1409bedd7'] pred=['0x1409b865b']
// BB 0x1409b8697-0x1409b86ec size=85 type=0 succ=['0x1409b86ec', '0x1409b86f9'] pred=['0x1409b8676']
// BB 0x1409b86ec-0x1409b86f9 size=13 type=0 succ=['0x1409b86f9'] pred=['0x1409b8697']
// BB 0x1409b86f9-0x1409b870c size=19 type=0 succ=['0x1409b870c', '0x1409b871e'] pred=['0x1409b8697', '0x1409b86ec']
// BB 0x1409b870c-0x1409b871e size=18 type=0 succ=['0x1409b871e'] pred=['0x1409b86f9']
// BB 0x1409b871e-0x1409b8743 size=37 type=0 succ=['0x1409b8743'] pred=['0x1409b86f9', '0x1409b870c']
// BB 0x1409b8743-0x1409b8765 size=34 type=0 succ=['0x1409b8765'] pred=['0x1409b871e']
// BB 0x1409b8765-0x1409b878d size=40 type=0 succ=['0x1409b878d', '0x1409bee16'] pred=['0x1409b8743']
// BB 0x1409b878d-0x1409b8792 size=5 type=0 succ=['0x1409b8792', '0x1409b87ae'] pred=['0x1409b8765']
// BB 0x1409b8792-0x1409b87ae size=28 type=0 succ=['0x1409b87ae'] pred=['0x1409b878d', '0x1409bee16']
// BB 0x1409b87ae-0x1409b87c4 size=22 type=0 succ=['0x1409b87c4', '0x1409b87d3'] pred=['0x1409b878d', '0x1409b8792']
// BB 0x1409b87c4-0x1409b87d3 size=15 type=0 succ=['0x1409b87d3'] pred=['0x1409b87ae']
// BB 0x1409b87d3-0x1409b8813 size=64 type=0 succ=['0x1409b8813', '0x1409c0294'] pred=['0x1409b87ae', '0x1409b87c4']
// BB 0x1409b8813-0x1409b883d size=42 type=0 succ=['0x1409b883d'] pred=['0x1409b87d3']
// BB 0x1409b883d-0x1409b885e size=33 type=0 succ=['0x1409b885e', '0x1409bee4f'] pred=['0x1409b8813']
// BB 0x1409b885e-0x1409b88b0 size=82 type=0 succ=['0x1409b88b0', '0x1409b88bd'] pred=['0x1409b883d']
// BB 0x1409b88b0-0x1409b88bd size=13 type=0 succ=['0x1409b88bd'] pred=['0x1409b885e']
// BB 0x1409b88bd-0x1409b88da size=29 type=0 succ=['0x1409b88da', '0x1409c02a9'] pred=['0x1409b885e', '0x1409b88b0']
// BB 0x1409b88da-0x1409b8903 size=41 type=0 succ=['0x1409b8903'] pred=['0x1409b88bd']
// BB 0x1409b8903-0x1409b8924 size=33 type=0 succ=['0x1409b8924', '0x1409bee8e'] pred=['0x1409b88da']
// BB 0x1409b8924-0x1409b8976 size=82 type=0 succ=['0x1409b8976', '0x1409b8983'] pred=['0x1409b8903']
// BB 0x1409b8976-0x1409b8983 size=13 type=0 succ=['0x1409b8983'] pred=['0x1409b8924']
// BB 0x1409b8983-0x1409b89a0 size=29 type=0 succ=['0x1409b89a0', '0x1409c02be'] pred=['0x1409b8924', '0x1409b8976']
// BB 0x1409b89a0-0x1409b89d0 size=48 type=0 succ=['0x1409b89d0'] pred=['0x1409b8983']
// BB 0x1409b89d0-0x1409b89f1 size=33 type=0 succ=['0x1409b89f1', '0x1409beecd'] pred=['0x1409b89a0']
// BB 0x1409b89f1-0x1409b8a43 size=82 type=0 succ=['0x1409b8a43', '0x1409b8a50'] pred=['0x1409b89d0']
// BB 0x1409b8a43-0x1409b8a50 size=13 type=0 succ=['0x1409b8a50'] pred=['0x1409b89f1']
// BB 0x1409b8a50-0x1409b8a6d size=29 type=0 succ=['0x1409b8a6d', '0x1409c02d3'] pred=['0x1409b89f1', '0x1409b8a43']
// BB 0x1409b8a6d-0x1409b8aa5 size=56 type=0 succ=['0x1409b8aa5'] pred=['0x1409b8a50']
// BB 0x1409b8aa5-0x1409b8abf size=26 type=0 succ=['0x1409b8abf', '0x1409bef0c'] pred=['0x1409b8a6d']
// BB 0x1409b8abf-0x1409b8b11 size=82 type=0 succ=['0x1409b8b11', '0x1409b8b1e'] pred=['0x1409b8aa5']
// BB 0x1409b8b11-0x1409b8b1e size=13 type=0 succ=['0x1409b8b1e'] pred=['0x1409b8abf']
// BB 0x1409b8b1e-0x1409b8b3b size=29 type=0 succ=['0x1409b8b3b', '0x1409c02e8'] pred=['0x1409b8abf', '0x1409b8b11']
// BB 0x1409b8b3b-0x1409b8b65 size=42 type=0 succ=['0x1409b8b65'] pred=['0x1409b8b1e']
// BB 0x1409b8b65-0x1409b8b83 size=30 type=0 succ=['0x1409b8b83', '0x1409bef4b'] pred=['0x1409b8b3b']
// BB 0x1409b8b83-0x1409b8bd5 size=82 type=0 succ=['0x1409b8bd5', '0x1409b8be2'] pred=['0x1409b8b65']
// BB 0x1409b8bd5-0x1409b8be2 size=13 type=0 succ=['0x1409b8be2'] pred=['0x1409b8b83']
// BB 0x1409b8be2-0x1409b8bff size=29 type=0 succ=['0x1409b8bff', '0x1409c02fd'] pred=['0x1409b8b83', '0x1409b8bd5']
// BB 0x1409b8bff-0x1409b8c2a size=43 type=0 succ=['0x1409b8c2a'] pred=['0x1409b8be2']
// BB 0x1409b8c2a-0x1409b8c4b size=33 type=0 succ=['0x1409b8c4b', '0x1409bef8a'] pred=['0x1409b8bff']
// BB 0x1409b8c4b-0x1409b8c9d size=82 type=0 succ=['0x1409b8c9d', '0x1409b8caa'] pred=['0x1409b8c2a']
// BB 0x1409b8c9d-0x1409b8caa size=13 type=0 succ=['0x1409b8caa'] pred=['0x1409b8c4b']
// BB 0x1409b8caa-0x1409b8cd6 size=44 type=0 succ=['0x1409b8cd6'] pred=['0x1409b8c4b', '0x1409b8c9d']
// BB 0x1409b8cd6-0x1409b8cf8 size=34 type=0 succ=['0x1409b8cf8', '0x1409b8e70'] pred=['0x1409b8caa']
// BB 0x1409b8cf8-0x1409b8d13 size=27 type=0 succ=['0x1409b8e79'] pred=['0x1409b8cd6']
// BB 0x1409b8d13-0x1409b8d15 size=2 type=0 succ=['0x1409b8d15'] pred=['0x1409b81ff']
// BB 0x1409b8d15-0x1409b8d2f size=26 type=0 succ=['0x1409b8d2f', '0x1409b8d60'] pred=['0x1409b8232', '0x1409b8d13']
// BB 0x1409b8d2f-0x1409b8d42 size=19 type=1 succ=['0x1409b8d42', '0x1409b9399', '0x1409b93b7', '0x1409b93c0', '0x1409b93dd'] pred=['0x1409b8d15']
// BB 0x1409b8d42-0x1409b8d60 size=30 type=0 succ=['0x1409b93f8'] pred=['0x1409b8d2f']
// BB 0x1409b8d60-0x1409b8dbe size=94 type=0 succ=['0x1409b9462'] pred=['0x1409b8d15']
// BB 0x1409b8dbe-0x1409b8dc0 size=2 type=0 succ=['0x1409b8dc0'] pred=['0x1409b80aa']
// BB 0x1409b8dc0-0x1409b8ddc size=28 type=0 succ=['0x1409b8ddc'] pred=['0x1409b80de', '0x1409b8dbe']
// BB 0x1409b8ddc-0x1409b8de1 size=5 type=0 succ=['0x1409b8de1', '0x1409b8e12'] pred=['0x1409b8dc0']
// BB 0x1409b8de1-0x1409b8df4 size=19 type=1 succ=['0x1409b8df4', '0x1409b996f', '0x1409b998d', '0x1409b9996', '0x1409b99b3'] pred=['0x1409b8ddc']
// BB 0x1409b8df4-0x1409b8e12 size=30 type=0 succ=['0x1409b99ce'] pred=['0x1409b8de1']
// BB 0x1409b8e12-0x1409b8e70 size=94 type=0 succ=['0x1409b9a38'] pred=['0x1409b8ddc']
// BB 0x1409b8e70-0x1409b8e79 size=9 type=0 succ=['0x1409b8e79'] pred=['0x1409b8cd6']
// BB 0x1409b8e79-0x1409b8eb5 size=60 type=0 succ=['0x1409b8eb5', '0x1409befc9'] pred=['0x1409b8cf8', '0x1409b8e70']
// BB 0x1409b8eb5-0x1409b8ec1 size=12 type=0 succ=['0x1409b8ec1', '0x1409b8ecf'] pred=['0x1409b8e79']
// BB 0x1409b8ec1-0x1409b8ecf size=14 type=0 succ=['0x1409b8ecf'] pred=['0x1409b8eb5']
// BB 0x1409b8ecf-0x1409b8edd size=14 type=0 succ=['0x1409b8edd'] pred=['0x1409b8eb5', '0x1409b8ec1']
// BB 0x1409b8edd-0x1409b8f2a size=77 type=0 succ=['0x1409b8f2a', '0x1409c0312'] pred=['0x1409b8ecf']
// BB 0x1409b8f2a-0x1409b8f54 size=42 type=0 succ=['0x1409b8f54'] pred=['0x1409b8edd']
// BB 0x1409b8f54-0x1409b8f75 size=33 type=0 succ=['0x1409b8f75', '0x1409befe9'] pred=['0x1409b8f2a']
// BB 0x1409b8f75-0x1409b8fc7 size=82 type=0 succ=['0x1409b8fc7', '0x1409b8fd4'] pred=['0x1409b8f54']
// BB 0x1409b8fc7-0x1409b8fd4 size=13 type=0 succ=['0x1409b8fd4'] pred=['0x1409b8f75']
// BB 0x1409b8fd4-0x1409b8ff1 size=29 type=0 succ=['0x1409b8ff1', '0x1409c0327'] pred=['0x1409b8f75', '0x1409b8fc7']
// BB 0x1409b8ff1-0x1409b9066 size=117 type=0 succ=['0x1409b9066', '0x1409b9073'] pred=['0x1409b8fd4']
// BB 0x1409b9066-0x1409b9073 size=13 type=0 succ=['0x1409b9073'] pred=['0x1409b8ff1']
// BB 0x1409b9073-0x1409b9090 size=29 type=0 succ=['0x1409b9090', '0x1409c033c'] pred=['0x1409b8ff1', '0x1409b9066']
// BB 0x1409b9090-0x1409b90c1 size=49 type=0 succ=['0x1409b90c1'] pred=['0x1409b9073']
// BB 0x1409b90c1-0x1409b90e2 size=33 type=0 succ=['0x1409b90e2', '0x1409bf028'] pred=['0x1409b9090']
// BB 0x1409b90e2-0x1409b9134 size=82 type=0 succ=['0x1409b9134', '0x1409b9141'] pred=['0x1409b90c1']
// BB 0x1409b9134-0x1409b9141 size=13 type=0 succ=['0x1409b9141'] pred=['0x1409b90e2']
// BB 0x1409b9141-0x1409b915e size=29 type=0 succ=['0x1409b915e', '0x1409c0351'] pred=['0x1409b90e2', '0x1409b9134']
// BB 0x1409b915e-0x1409b9188 size=42 type=0 succ=['0x1409b9188'] pred=['0x1409b9141']
// BB 0x1409b9188-0x1409b91a9 size=33 type=0 succ=['0x1409b91a9', '0x1409bf067'] pred=['0x1409b915e']
// BB 0x1409b91a9-0x1409b91fe size=85 type=0 succ=['0x1409b91fe', '0x1409b920b'] pred=['0x1409b9188']
// BB 0x1409b91fe-0x1409b920b size=13 type=0 succ=['0x1409b920b'] pred=['0x1409b91a9']
// BB 0x1409b920b-0x1409b9230 size=37 type=0 succ=['0x1409b9230'] pred=['0x1409b91a9', '0x1409b91fe']
// BB 0x1409b9230-0x1409b9252 size=34 type=0 succ=['0x1409b9252'] pred=['0x1409b920b']
// BB 0x1409b9252-0x1409b927a size=40 type=0 succ=['0x1409b927a', '0x1409bf0a6'] pred=['0x1409b9230']
// BB 0x1409b927a-0x1409b927f size=5 type=0 succ=['0x1409b927f', '0x1409b929b'] pred=['0x1409b9252']
// BB 0x1409b927f-0x1409b929b size=28 type=0 succ=['0x1409b929b'] pred=['0x1409b927a', '0x1409bf0a6']
// BB 0x1409b929b-0x1409b92b1 size=22 type=0 succ=['0x1409b92b1', '0x1409b92bf'] pred=['0x1409b927a', '0x1409b927f']
// BB 0x1409b92b1-0x1409b92bf size=14 type=0 succ=['0x1409b92bf'] pred=['0x1409b929b']
// BB 0x1409b92bf-0x1409b92c6 size=7 type=0 succ=['0x1409b92c6'] pred=['0x1409b929b', '0x1409b92b1']
// BB 0x1409b92c6-0x1409b92fd size=55 type=0 succ=['0x1409b92fd', '0x1409b9307'] pred=['0x1409b92bf']
// BB 0x1409b92fd-0x1409b9307 size=10 type=0 succ=['0x1409b9307'] pred=['0x1409b92c6']
// BB 0x1409b9307-0x1409b9340 size=57 type=0 succ=['0x1409b9340', '0x1409b9352'] pred=['0x1409b92c6', '0x1409b92fd']
// BB 0x1409b9340-0x1409b9352 size=18 type=0 succ=['0x1409b9352'] pred=['0x1409b9307']
// BB 0x1409b9352-0x1409b935e size=12 type=0 succ=['0x1409b935e', '0x1409b9370'] pred=['0x1409b9307', '0x1409b9340']
// BB 0x1409b935e-0x1409b9370 size=18 type=0 succ=['0x1409b9370'] pred=['0x1409b9352']
// BB 0x1409b9370-0x1409b9379 size=9 type=0 succ=['0x1409b9379', '0x1409b9388'] pred=['0x1409b9352', '0x1409b935e']
// BB 0x1409b9379-0x1409b9388 size=15 type=0 succ=['0x1409b9388'] pred=['0x1409b9370']
// BB 0x1409b9388-0x1409b9399 size=17 type=0 succ=['0x1409bd8c2'] pred=['0x1409b82ea', '0x1409b9370', '0x1409b9379']
// BB 0x1409b9399-0x1409b93a8 size=15 type=0 succ=['0x1409b93a8'] pred=['0x1409b8d2f']
// BB 0x1409b93a8-0x1409b93b7 size=15 type=0 succ=['0x1409b93f8'] pred=['0x1409b9399']
// BB 0x1409b93b7-0x1409b93c0 size=9 type=0 succ=['0x1409b93f8'] pred=['0x1409b8d2f']
// BB 0x1409b93c0-0x1409b93dd size=29 type=0 succ=['0x1409b93f8'] pred=['0x1409b8d2f']
// BB 0x1409b93dd-0x1409b93f8 size=27 type=0 succ=['0x1409b93f8'] pred=['0x1409b8d2f']
// BB 0x1409b93f8-0x1409b9462 size=106 type=0 succ=['0x1409b9462'] pred=['0x1409b8d42', '0x1409b93a8', '0x1409b93b7', '0x1409b93c0', '0x1409b93dd']
// BB 0x1409b9462-0x1409b9480 size=30 type=0 succ=['0x1409b9480', '0x1409b94a4'] pred=['0x1409b8d60', '0x1409b93f8']
// BB 0x1409b9480-0x1409b94a4 size=36 type=0 succ=['0x1409b94bb'] pred=['0x1409b9462']
// BB 0x1409b94a4-0x1409b94bb size=23 type=0 succ=['0x1409b94bb'] pred=['0x1409b9462']
// BB 0x1409b94bb-0x1409b94e0 size=37 type=0 succ=['0x1409b94e0', '0x1409bd8b5'] pred=['0x1409b9480', '0x1409b94a4']
// BB 0x1409b94e0-0x1409b94f0 size=16 type=1 succ=['0x1409b94f0', '0x1409b960c', '0x1409b971d', '0x1409b97a0', '0x1409bd8b5'] pred=['0x1409b94bb']
// BB 0x1409b94f0-0x1409b9503 size=19 type=0 succ=['0x1409b9503', '0x1409bd8b5'] pred=['0x1409b94e0']
// BB 0x1409b9503-0x1409b9599 size=150 type=0 succ=['0x1409b9599'] pred=['0x1409b94f0']
// BB 0x1409b9599-0x1409b95b5 size=28 type=0 succ=['0x1409b95b5', '0x1409bf503'] pred=['0x1409b9503']
// BB 0x1409b95b5-0x1409b95e2 size=45 type=0 succ=['0x1409b95e2', '0x1409bbaa5'] pred=['0x1409b9599']
// BB 0x1409b95e2-0x1409b95ec size=10 type=0 succ=['0x1409b95ec', '0x1409bbaab'] pred=['0x1409b95b5']
// BB 0x1409b95ec-0x1409b9606 size=26 type=4 succ=[] pred=['0x1409b95e2', '0x1409bbaa5']
// BB 0x1409b9607-0x1409b960c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409b960c-0x1409b9637 size=43 type=0 succ=['0x1409b9637', '0x1409bd8b5'] pred=['0x1409b94e0']
// BB 0x1409b9637-0x1409b9659 size=34 type=0 succ=['0x1409b9659', '0x1409bd8b5'] pred=['0x1409b960c']
// BB 0x1409b9659-0x1409b9662 size=9 type=0 succ=['0x1409b9662', '0x1409bd8b5'] pred=['0x1409b9637']
// BB 0x1409b9662-0x1409b966d size=11 type=0 succ=['0x1409b966d', '0x1409bd8b5'] pred=['0x1409b9659']
// BB 0x1409b966d-0x1409b9691 size=36 type=0 succ=['0x1409b9691', '0x1409bd8b5'] pred=['0x1409b9662']
// BB 0x1409b9691-0x1409b96f3 size=98 type=0 succ=['0x1409b96f3', '0x1409bdd7d'] pred=['0x1409b966d']
// BB 0x1409b96f3-0x1409b96fd size=10 type=0 succ=['0x1409b96fd', '0x1409bdd83'] pred=['0x1409b9691']
// BB 0x1409b96fd-0x1409b9717 size=26 type=4 succ=[] pred=['0x1409b96f3', '0x1409bdd7d']
// BB 0x1409b9718-0x1409b971d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409b971d-0x1409b9737 size=26 type=0 succ=['0x1409b9737', '0x1409b97d6'] pred=['0x1409b94e0']
// BB 0x1409b9737-0x1409b9751 size=26 type=0 succ=['0x1409b9751', '0x1409bd8b5'] pred=['0x1409b971d']
// BB 0x1409b9751-0x1409b9763 size=18 type=0 succ=['0x1409b9763'] pred=['0x1409b9737']
// BB 0x1409b9763-0x1409b9785 size=34 type=0 succ=['0x1409b9785', '0x1409bcbe2'] pred=['0x1409b9751']
// BB 0x1409b9785-0x1409b97a0 size=27 type=0 succ=['0x1409bcbeb'] pred=['0x1409b9763']
// BB 0x1409b97a0-0x1409b97d6 size=54 type=0 succ=['0x1409b97d6', '0x1409bd8b5'] pred=['0x1409b94e0']
// BB 0x1409b97d6-0x1409b984d size=119 type=0 succ=['0x1409b984d'] pred=['0x1409b971d', '0x1409b97a0']
// BB 0x1409b984d-0x1409b9869 size=28 type=0 succ=['0x1409b9869', '0x1409bf0ee'] pred=['0x1409b97d6']
// BB 0x1409b9869-0x1409b988f size=38 type=0 succ=['0x1409b988f', '0x1409b98b5'] pred=['0x1409b984d']
// BB 0x1409b988f-0x1409b9895 size=6 type=0 succ=['0x1409b9895', '0x1409b98b7'] pred=['0x1409b9869']
// BB 0x1409b9895-0x1409b98af size=26 type=4 succ=[] pred=['0x1409b988f', '0x1409b98b5']
// BB 0x1409b98b0-0x1409b98b5 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409b98b5-0x1409b98b7 size=2 type=0 succ=['0x1409b9895', '0x1409b98b7'] pred=['0x1409b9869']
// BB 0x1409b98b7-0x1409b9909 size=82 type=0 succ=['0x1409b9909', '0x1409b991b'] pred=['0x1409b988f', '0x1409b98b5']
// BB 0x1409b9909-0x1409b991b size=18 type=0 succ=['0x1409b991b'] pred=['0x1409b98b7']
// BB 0x1409b991b-0x1409b9933 size=24 type=0 succ=['0x1409b9933'] pred=['0x1409b98b7', '0x1409b9909']
// BB 0x1409b9933-0x1409b9955 size=34 type=0 succ=['0x1409b9955', '0x1409b9fd2'] pred=['0x1409b991b']
// BB 0x1409b9955-0x1409b996f size=26 type=0 succ=['0x1409b9fda'] pred=['0x1409b9933']
// BB 0x1409b996f-0x1409b997e size=15 type=0 succ=['0x1409b997e'] pred=['0x1409b8de1']
// BB 0x1409b997e-0x1409b998d size=15 type=0 succ=['0x1409b99ce'] pred=['0x1409b996f']
// BB 0x1409b998d-0x1409b9996 size=9 type=0 succ=['0x1409b99ce'] pred=['0x1409b8de1']
// BB 0x1409b9996-0x1409b99b3 size=29 type=0 succ=['0x1409b99ce'] pred=['0x1409b8de1']
// BB 0x1409b99b3-0x1409b99ce size=27 type=0 succ=['0x1409b99ce'] pred=['0x1409b8de1']
// BB 0x1409b99ce-0x1409b9a38 size=106 type=0 succ=['0x1409b9a38'] pred=['0x1409b8df4', '0x1409b997e', '0x1409b998d', '0x1409b9996', '0x1409b99b3']
// BB 0x1409b9a38-0x1409b9a5a size=34 type=0 succ=['0x1409b9a5a', '0x1409bba93'] pred=['0x1409b8e12', '0x1409b99ce']
// BB 0x1409b9a5a-0x1409b9a63 size=9 type=0 succ=['0x1409b9a63', '0x1409bba93'] pred=['0x1409b9a38']
// BB 0x1409b9a63-0x1409b9a75 size=18 type=0 succ=['0x1409b9a75', '0x1409bba93'] pred=['0x1409b9a5a']
// BB 0x1409b9a75-0x1409b9a89 size=20 type=1 succ=['0x1409b9a89', '0x1409bb497', '0x1409bb540', '0x1409bba78', '0x1409bba93'] pred=['0x1409b9a63']
// BB 0x1409b9a89-0x1409b9aa9 size=32 type=0 succ=['0x1409b9aa9', '0x1409bba93'] pred=['0x1409b9a75']
// BB 0x1409b9aa9-0x1409b9ac2 size=25 type=0 succ=['0x1409b9ac2'] pred=['0x1409b9a89']
// BB 0x1409b9ac2-0x1409b9acb size=9 type=0 succ=['0x1409b9acb', '0x1409bba93'] pred=['0x1409b9aa9']
// BB 0x1409b9acb-0x1409b9ad4 size=9 type=0 succ=['0x1409b9ad4', '0x1409bba93'] pred=['0x1409b9ac2']
// BB 0x1409b9ad4-0x1409b9af3 size=31 type=0 succ=['0x1409b9af3', '0x1409bba93'] pred=['0x1409b9acb']
// BB 0x1409b9af3-0x1409b9b01 size=14 type=0 succ=['0x1409b9b01', '0x1409bba93'] pred=['0x1409b9ad4']
// BB 0x1409b9b01-0x1409b9b1b size=26 type=0 succ=['0x1409b9b1b', '0x1409bff10'] pred=['0x1409b9af3']
// BB 0x1409b9b1b-0x1409b9b6a size=79 type=0 succ=['0x1409b9b6a', '0x1409c08e5'] pred=['0x1409b9b01', '0x1409bff10']
// BB 0x1409b9b6a-0x1409b9b94 size=42 type=0 succ=['0x1409b9b94'] pred=['0x1409b9b1b']
// BB 0x1409b9b94-0x1409b9bb5 size=33 type=0 succ=['0x1409b9bb5', '0x1409bff88'] pred=['0x1409b9b6a']
// BB 0x1409b9bb5-0x1409b9c07 size=82 type=0 succ=['0x1409b9c07', '0x1409b9c14'] pred=['0x1409b9b94']
// BB 0x1409b9c07-0x1409b9c14 size=13 type=0 succ=['0x1409b9c14'] pred=['0x1409b9bb5']
// BB 0x1409b9c14-0x1409b9c31 size=29 type=0 succ=['0x1409b9c31', '0x1409c090f'] pred=['0x1409b9bb5', '0x1409b9c07']
// BB 0x1409b9c31-0x1409b9cac size=123 type=0 succ=['0x1409b9cac', '0x1409b9cb9'] pred=['0x1409b9c14']
// BB 0x1409b9cac-0x1409b9cb9 size=13 type=0 succ=['0x1409b9cb9'] pred=['0x1409b9c31']
// BB 0x1409b9cb9-0x1409b9cd6 size=29 type=0 succ=['0x1409b9cd6', '0x1409c0939'] pred=['0x1409b9c31', '0x1409b9cac']
// BB 0x1409b9cd6-0x1409b9d0e size=56 type=0 succ=['0x1409b9d0e'] pred=['0x1409b9cb9']
// BB 0x1409b9d0e-0x1409b9d28 size=26 type=0 succ=['0x1409b9d28', '0x1409c0006'] pred=['0x1409b9cd6']
// BB 0x1409b9d28-0x1409b9d7a size=82 type=0 succ=['0x1409b9d7a', '0x1409b9d87'] pred=['0x1409b9d0e']
// BB 0x1409b9d7a-0x1409b9d87 size=13 type=0 succ=['0x1409b9d87'] pred=['0x1409b9d28']
// BB 0x1409b9d87-0x1409b9da4 size=29 type=0 succ=['0x1409b9da4', '0x1409c0963'] pred=['0x1409b9d28', '0x1409b9d7a']
// BB 0x1409b9da4-0x1409b9e1a size=118 type=0 succ=['0x1409b9e1a', '0x1409b9e27'] pred=['0x1409b9d87']
// BB 0x1409b9e1a-0x1409b9e27 size=13 type=0 succ=['0x1409b9e27'] pred=['0x1409b9da4']
// BB 0x1409b9e27-0x1409b9e44 size=29 type=0 succ=['0x1409b9e44', '0x1409c0987'] pred=['0x1409b9da4', '0x1409b9e1a']
// BB 0x1409b9e44-0x1409b9e72 size=46 type=0 succ=['0x1409b9e72'] pred=['0x1409b9e27']
// BB 0x1409b9e72-0x1409b9e93 size=33 type=0 succ=['0x1409b9e93', '0x1409c0084'] pred=['0x1409b9e44']
// BB 0x1409b9e93-0x1409b9ee8 size=85 type=0 succ=['0x1409b9ee8', '0x1409b9ef5'] pred=['0x1409b9e72']
// BB 0x1409b9ee8-0x1409b9ef5 size=13 type=0 succ=['0x1409b9ef5'] pred=['0x1409b9e93']
// BB 0x1409b9ef5-0x1409b9f21 size=44 type=0 succ=['0x1409b9f21'] pred=['0x1409b9e93', '0x1409b9ee8']
// BB 0x1409b9f21-0x1409b9f43 size=34 type=0 succ=['0x1409b9f43'] pred=['0x1409b9ef5']
// BB 0x1409b9f43-0x1409b9f72 size=47 type=0 succ=['0x1409b9f72', '0x1409c0102'] pred=['0x1409b9f21']
// BB 0x1409b9f72-0x1409b9f77 size=5 type=0 succ=['0x1409b9f77', '0x1409b9f97'] pred=['0x1409b9f43']
// BB 0x1409b9f77-0x1409b9f97 size=32 type=0 succ=['0x1409b9f97'] pred=['0x1409b9f72', '0x1409c0102']
// BB 0x1409b9f97-0x1409b9fad size=22 type=0 succ=['0x1409b9fad', '0x1409b9fc0'] pred=['0x1409b9f72', '0x1409b9f77']
// BB 0x1409b9fad-0x1409b9fc0 size=19 type=0 succ=['0x1409b9fc0'] pred=['0x1409b9f97']
// BB 0x1409b9fc0-0x1409b9fcd size=13 type=0 succ=['0x1409b9fcd'] pred=['0x1409b9f97', '0x1409b9fad']
// BB 0x1409b9fcd-0x1409b9fd2 size=5 type=0 succ=['0x1409bba93'] pred=['0x1409b9fc0']
// BB 0x1409b9fd2-0x1409b9fda size=8 type=0 succ=['0x1409b9fda'] pred=['0x1409b9933']
// BB 0x1409b9fda-0x1409ba00f size=53 type=0 succ=['0x1409ba00f', '0x1409bf11f'] pred=['0x1409b9955', '0x1409b9fd2']
// BB 0x1409ba00f-0x1409ba01b size=12 type=0 succ=['0x1409ba01b', '0x1409ba029'] pred=['0x1409b9fda']
// BB 0x1409ba01b-0x1409ba029 size=14 type=0 succ=['0x1409ba029'] pred=['0x1409ba00f']
// BB 0x1409ba029-0x1409ba039 size=16 type=0 succ=['0x1409ba039'] pred=['0x1409ba00f', '0x1409ba01b']
// BB 0x1409ba039-0x1409ba052 size=25 type=0 succ=['0x1409ba052'] pred=['0x1409ba029']
// BB 0x1409ba052-0x1409ba057 size=5 type=0 succ=['0x1409ba057', '0x1409ba06e'] pred=['0x1409ba039']
// BB 0x1409ba057-0x1409ba06e size=23 type=0 succ=['0x1409ba076'] pred=['0x1409ba052']
// BB 0x1409ba06e-0x1409ba076 size=8 type=0 succ=['0x1409ba076'] pred=['0x1409ba052']
// BB 0x1409ba076-0x1409ba0af size=57 type=0 succ=['0x1409ba0af', '0x1409bf134'] pred=['0x1409ba057', '0x1409ba06e']
// BB 0x1409ba0af-0x1409ba0bb size=12 type=0 succ=['0x1409ba0bb', '0x1409ba0ca'] pred=['0x1409ba076']
// BB 0x1409ba0bb-0x1409ba0ca size=15 type=0 succ=['0x1409ba0ca'] pred=['0x1409ba0af']
// BB 0x1409ba0ca-0x1409ba0e7 size=29 type=0 succ=['0x1409ba0e7'] pred=['0x1409ba0af', '0x1409ba0bb']
// BB 0x1409ba0e7-0x1409ba0ec size=5 type=0 succ=['0x1409ba0ec', '0x1409ba104'] pred=['0x1409ba0ca']
// BB 0x1409ba0ec-0x1409ba104 size=24 type=0 succ=['0x1409ba10d'] pred=['0x1409ba0e7']
// BB 0x1409ba104-0x1409ba10d size=9 type=0 succ=['0x1409ba10d'] pred=['0x1409ba0e7']
// BB 0x1409ba10d-0x1409ba146 size=57 type=0 succ=['0x1409ba146', '0x1409bf14e'] pred=['0x1409ba0ec', '0x1409ba104']
// BB 0x1409ba146-0x1409ba152 size=12 type=0 succ=['0x1409ba152', '0x1409ba160'] pred=['0x1409ba10d']
// BB 0x1409ba152-0x1409ba160 size=14 type=0 succ=['0x1409ba160'] pred=['0x1409ba146']
// BB 0x1409ba160-0x1409ba197 size=55 type=0 succ=['0x1409ba197', '0x1409c0366'] pred=['0x1409ba146', '0x1409ba152']
// BB 0x1409ba197-0x1409ba1c1 size=42 type=0 succ=['0x1409ba1c1'] pred=['0x1409ba160']
// BB 0x1409ba1c1-0x1409ba1e2 size=33 type=0 succ=['0x1409ba1e2', '0x1409bf164'] pred=['0x1409ba197']
// BB 0x1409ba1e2-0x1409ba234 size=82 type=0 succ=['0x1409ba234', '0x1409ba241'] pred=['0x1409ba1c1']
// BB 0x1409ba234-0x1409ba241 size=13 type=0 succ=['0x1409ba241'] pred=['0x1409ba1e2']
// BB 0x1409ba241-0x1409ba25e size=29 type=0 succ=['0x1409ba25e', '0x1409c037b'] pred=['0x1409ba1e2', '0x1409ba234']
// BB 0x1409ba25e-0x1409ba2d7 size=121 type=0 succ=['0x1409ba2d7', '0x1409ba2e4'] pred=['0x1409ba241']
// BB 0x1409ba2d7-0x1409ba2e4 size=13 type=0 succ=['0x1409ba2e4'] pred=['0x1409ba25e']
// BB 0x1409ba2e4-0x1409ba301 size=29 type=0 succ=['0x1409ba301', '0x1409c0390'] pred=['0x1409ba25e', '0x1409ba2d7']
// BB 0x1409ba301-0x1409ba33d size=60 type=0 succ=['0x1409ba33d'] pred=['0x1409ba2e4']
// BB 0x1409ba33d-0x1409ba35e size=33 type=0 succ=['0x1409ba35e', '0x1409bf1a3'] pred=['0x1409ba301']
// BB 0x1409ba35e-0x1409ba3b0 size=82 type=0 succ=['0x1409ba3b0', '0x1409ba3bd'] pred=['0x1409ba33d']
// BB 0x1409ba3b0-0x1409ba3bd size=13 type=0 succ=['0x1409ba3bd'] pred=['0x1409ba35e']
// BB 0x1409ba3bd-0x1409ba3da size=29 type=0 succ=['0x1409ba3da', '0x1409c03a5'] pred=['0x1409ba35e', '0x1409ba3b0']
// BB 0x1409ba3da-0x1409ba430 size=86 type=0 succ=['0x1409ba430', '0x1409c03ba'] pred=['0x1409ba3bd']
// BB 0x1409ba430-0x1409ba45a size=42 type=0 succ=['0x1409ba45a'] pred=['0x1409ba3da']
// BB 0x1409ba45a-0x1409ba47b size=33 type=0 succ=['0x1409ba47b', '0x1409bf1e2'] pred=['0x1409ba430']
// BB 0x1409ba47b-0x1409ba4cd size=82 type=0 succ=['0x1409ba4cd', '0x1409ba4da'] pred=['0x1409ba45a']
// BB 0x1409ba4cd-0x1409ba4da size=13 type=0 succ=['0x1409ba4da'] pred=['0x1409ba47b']
// BB 0x1409ba4da-0x1409ba4f7 size=29 type=0 succ=['0x1409ba4f7', '0x1409c03cf'] pred=['0x1409ba47b', '0x1409ba4cd']
// BB 0x1409ba4f7-0x1409ba524 size=45 type=0 succ=['0x1409ba524'] pred=['0x1409ba4da']
// BB 0x1409ba524-0x1409ba542 size=30 type=0 succ=['0x1409ba542', '0x1409bf221'] pred=['0x1409ba4f7']
// BB 0x1409ba542-0x1409ba594 size=82 type=0 succ=['0x1409ba594', '0x1409ba5a1'] pred=['0x1409ba524']
// BB 0x1409ba594-0x1409ba5a1 size=13 type=0 succ=['0x1409ba5a1'] pred=['0x1409ba542']
// BB 0x1409ba5a1-0x1409ba5be size=29 type=0 succ=['0x1409ba5be', '0x1409c03e4'] pred=['0x1409ba542', '0x1409ba594']
// BB 0x1409ba5be-0x1409ba5ee size=48 type=0 succ=['0x1409ba5ee'] pred=['0x1409ba5a1']
// BB 0x1409ba5ee-0x1409ba60f size=33 type=0 succ=['0x1409ba60f', '0x1409bf260'] pred=['0x1409ba5be']
// BB 0x1409ba60f-0x1409ba661 size=82 type=0 succ=['0x1409ba661', '0x1409ba66e'] pred=['0x1409ba5ee']
// BB 0x1409ba661-0x1409ba66e size=13 type=0 succ=['0x1409ba66e'] pred=['0x1409ba60f']
// BB 0x1409ba66e-0x1409ba68b size=29 type=0 succ=['0x1409ba68b', '0x1409c03f9'] pred=['0x1409ba60f', '0x1409ba661']
// BB 0x1409ba68b-0x1409ba708 size=125 type=0 succ=['0x1409ba708', '0x1409ba715'] pred=['0x1409ba66e']
// BB 0x1409ba708-0x1409ba715 size=13 type=0 succ=['0x1409ba715'] pred=['0x1409ba68b']
// BB 0x1409ba715-0x1409ba732 size=29 type=0 succ=['0x1409ba732', '0x1409c040e'] pred=['0x1409ba68b', '0x1409ba708']
// BB 0x1409ba732-0x1409ba791 size=95 type=0 succ=['0x1409ba791', '0x1409ba79e'] pred=['0x1409ba715']
// BB 0x1409ba791-0x1409ba79e size=13 type=0 succ=['0x1409ba79e'] pred=['0x1409ba732']
// BB 0x1409ba79e-0x1409ba7ca size=44 type=0 succ=['0x1409ba7ca'] pred=['0x1409ba732', '0x1409ba791']
// BB 0x1409ba7ca-0x1409ba7f8 size=46 type=0 succ=['0x1409ba7f8', '0x1409ba805'] pred=['0x1409ba79e']
// BB 0x1409ba7f8-0x1409ba805 size=13 type=0 succ=['0x1409ba805'] pred=['0x1409ba7ca']
// BB 0x1409ba805-0x1409ba831 size=44 type=0 succ=['0x1409ba831'] pred=['0x1409ba7ca', '0x1409ba7f8']
// BB 0x1409ba831-0x1409ba850 size=31 type=0 succ=['0x1409ba850'] pred=['0x1409ba805']
// BB 0x1409ba850-0x1409ba87f size=47 type=0 succ=['0x1409ba87f', '0x1409bf29f'] pred=['0x1409ba831']
// BB 0x1409ba87f-0x1409ba884 size=5 type=0 succ=['0x1409ba884', '0x1409ba8a4'] pred=['0x1409ba850']
// BB 0x1409ba884-0x1409ba8a4 size=32 type=0 succ=['0x1409ba8a4'] pred=['0x1409ba87f', '0x1409bf29f']
// BB 0x1409ba8a4-0x1409ba8ba size=22 type=0 succ=['0x1409ba8ba', '0x1409ba8cd'] pred=['0x1409ba87f', '0x1409ba884']
// BB 0x1409ba8ba-0x1409ba8cd size=19 type=0 succ=['0x1409ba8cd'] pred=['0x1409ba8a4']
// BB 0x1409ba8cd-0x1409ba8e4 size=23 type=0 succ=['0x1409ba8e4', '0x1409ba91a'] pred=['0x1409ba8a4', '0x1409ba8ba']
// BB 0x1409ba8e4-0x1409ba91a size=54 type=0 succ=['0x1409ba91a', '0x1409baf2f'] pred=['0x1409ba8cd']
// BB 0x1409ba91a-0x1409ba94d size=51 type=0 succ=['0x1409ba94d', '0x1409c0423'] pred=['0x1409ba8cd', '0x1409ba8e4']
// BB 0x1409ba94d-0x1409ba977 size=42 type=0 succ=['0x1409ba977'] pred=['0x1409ba91a']
// BB 0x1409ba977-0x1409ba998 size=33 type=0 succ=['0x1409ba998', '0x1409bf2ca'] pred=['0x1409ba94d']
// BB 0x1409ba998-0x1409ba9ea size=82 type=0 succ=['0x1409ba9ea', '0x1409ba9f7'] pred=['0x1409ba977']
// BB 0x1409ba9ea-0x1409ba9f7 size=13 type=0 succ=['0x1409ba9f7'] pred=['0x1409ba998']
// BB 0x1409ba9f7-0x1409baa14 size=29 type=0 succ=['0x1409baa14', '0x1409c0438'] pred=['0x1409ba998', '0x1409ba9ea']
// BB 0x1409baa14-0x1409baa8d size=121 type=0 succ=['0x1409baa8d', '0x1409baa9a'] pred=['0x1409ba9f7']
// BB 0x1409baa8d-0x1409baa9a size=13 type=0 succ=['0x1409baa9a'] pred=['0x1409baa14']
// BB 0x1409baa9a-0x1409baab7 size=29 type=0 succ=['0x1409baab7', '0x1409c044d'] pred=['0x1409baa14', '0x1409baa8d']
// BB 0x1409baab7-0x1409baaef size=56 type=0 succ=['0x1409baaef'] pred=['0x1409baa9a']
// BB 0x1409baaef-0x1409bab10 size=33 type=0 succ=['0x1409bab10', '0x1409bf309'] pred=['0x1409baab7']
// BB 0x1409bab10-0x1409bab62 size=82 type=0 succ=['0x1409bab62', '0x1409bab6f'] pred=['0x1409baaef']
// BB 0x1409bab62-0x1409bab6f size=13 type=0 succ=['0x1409bab6f'] pred=['0x1409bab10']
// BB 0x1409bab6f-0x1409bab8c size=29 type=0 succ=['0x1409bab8c', '0x1409c0462'] pred=['0x1409bab10', '0x1409bab62']
// BB 0x1409bab8c-0x1409bac02 size=118 type=0 succ=['0x1409bac02', '0x1409bac0f'] pred=['0x1409bab6f']
// BB 0x1409bac02-0x1409bac0f size=13 type=0 succ=['0x1409bac0f'] pred=['0x1409bab8c']
// BB 0x1409bac0f-0x1409bac2c size=29 type=0 succ=['0x1409bac2c', '0x1409c0477'] pred=['0x1409bab8c', '0x1409bac02']
// BB 0x1409bac2c-0x1409bac82 size=86 type=0 succ=['0x1409bac82', '0x1409c048c'] pred=['0x1409bac0f']
// BB 0x1409bac82-0x1409bacac size=42 type=0 succ=['0x1409bacac'] pred=['0x1409bac2c']
// BB 0x1409bacac-0x1409baccd size=33 type=0 succ=['0x1409baccd', '0x1409bf348'] pred=['0x1409bac82']
// BB 0x1409baccd-0x1409bad1f size=82 type=0 succ=['0x1409bad1f', '0x1409bad2c'] pred=['0x1409bacac']
// BB 0x1409bad1f-0x1409bad2c size=13 type=0 succ=['0x1409bad2c'] pred=['0x1409baccd']
// BB 0x1409bad2c-0x1409bad49 size=29 type=0 succ=['0x1409bad49', '0x1409c04a1'] pred=['0x1409baccd', '0x1409bad1f']
// BB 0x1409bad49-0x1409bad73 size=42 type=0 succ=['0x1409bad73'] pred=['0x1409bad2c']
// BB 0x1409bad73-0x1409bad94 size=33 type=0 succ=['0x1409bad94', '0x1409bf387'] pred=['0x1409bad49']
// BB 0x1409bad94-0x1409bade6 size=82 type=0 succ=['0x1409bade6', '0x1409badf3'] pred=['0x1409bad73']
// BB 0x1409bade6-0x1409badf3 size=13 type=0 succ=['0x1409badf3'] pred=['0x1409bad94']
// BB 0x1409badf3-0x1409bae1f size=44 type=0 succ=['0x1409bae1f'] pred=['0x1409bad94', '0x1409bade6']
// BB 0x1409bae1f-0x1409bae4d size=46 type=0 succ=['0x1409bae4d', '0x1409bae5a'] pred=['0x1409badf3']
// BB 0x1409bae4d-0x1409bae5a size=13 type=0 succ=['0x1409bae5a'] pred=['0x1409bae1f']
// BB 0x1409bae5a-0x1409bae7f size=37 type=0 succ=['0x1409bae7f'] pred=['0x1409bae1f', '0x1409bae4d']
// BB 0x1409bae7f-0x1409baea5 size=38 type=0 succ=['0x1409baea5'] pred=['0x1409bae5a']
// BB 0x1409baea5-0x1409baed4 size=47 type=0 succ=['0x1409baed4', '0x1409bf3c6'] pred=['0x1409bae7f']
// BB 0x1409baed4-0x1409baed9 size=5 type=0 succ=['0x1409baed9', '0x1409baef9'] pred=['0x1409baea5']
// BB 0x1409baed9-0x1409baef9 size=32 type=0 succ=['0x1409baef9'] pred=['0x1409baed4', '0x1409bf3c6']
// BB 0x1409baef9-0x1409baf0f size=22 type=0 succ=['0x1409baf0f', '0x1409baf22'] pred=['0x1409baed4', '0x1409baed9']
// BB 0x1409baf0f-0x1409baf22 size=19 type=0 succ=['0x1409baf22'] pred=['0x1409baef9']
// BB 0x1409baf22-0x1409baf2f size=13 type=0 succ=['0x1409baf2f'] pred=['0x1409baef9', '0x1409baf0f']
// BB 0x1409baf2f-0x1409baf3c size=13 type=0 succ=['0x1409baf3c', '0x1409bb3c6'] pred=['0x1409ba8e4', '0x1409baf22']
// BB 0x1409baf3c-0x1409baf6f size=51 type=0 succ=['0x1409baf6f', '0x1409c04b6'] pred=['0x1409baf2f']
// BB 0x1409baf6f-0x1409baf99 size=42 type=0 succ=['0x1409baf99'] pred=['0x1409baf3c']
// BB 0x1409baf99-0x1409bafba size=33 type=0 succ=['0x1409bafba', '0x1409bf40d'] pred=['0x1409baf6f']
// BB 0x1409bafba-0x1409bb00c size=82 type=0 succ=['0x1409bb00c', '0x1409bb019'] pred=['0x1409baf99']
// BB 0x1409bb00c-0x1409bb019 size=13 type=0 succ=['0x1409bb019'] pred=['0x1409bafba']
// BB 0x1409bb019-0x1409bb036 size=29 type=0 succ=['0x1409bb036', '0x1409c04cb'] pred=['0x1409bafba', '0x1409bb00c']
// BB 0x1409bb036-0x1409bb0af size=121 type=0 succ=['0x1409bb0af', '0x1409bb0bc'] pred=['0x1409bb019']
// BB 0x1409bb0af-0x1409bb0bc size=13 type=0 succ=['0x1409bb0bc'] pred=['0x1409bb036']
// BB 0x1409bb0bc-0x1409bb0d9 size=29 type=0 succ=['0x1409bb0d9', '0x1409c04e0'] pred=['0x1409bb036', '0x1409bb0af']
// BB 0x1409bb0d9-0x1409bb111 size=56 type=0 succ=['0x1409bb111'] pred=['0x1409bb0bc']
// BB 0x1409bb111-0x1409bb132 size=33 type=0 succ=['0x1409bb132', '0x1409bf44c'] pred=['0x1409bb0d9']
// BB 0x1409bb132-0x1409bb184 size=82 type=0 succ=['0x1409bb184', '0x1409bb191'] pred=['0x1409bb111']
// BB 0x1409bb184-0x1409bb191 size=13 type=0 succ=['0x1409bb191'] pred=['0x1409bb132']
// BB 0x1409bb191-0x1409bb1ae size=29 type=0 succ=['0x1409bb1ae', '0x1409c04f5'] pred=['0x1409bb132', '0x1409bb184']
// BB 0x1409bb1ae-0x1409bb224 size=118 type=0 succ=['0x1409bb224', '0x1409bb231'] pred=['0x1409bb191']
// BB 0x1409bb224-0x1409bb231 size=13 type=0 succ=['0x1409bb231'] pred=['0x1409bb1ae']
// BB 0x1409bb231-0x1409bb24e size=29 type=0 succ=['0x1409bb24e', '0x1409c050a'] pred=['0x1409bb1ae', '0x1409bb224']
// BB 0x1409bb24e-0x1409bb27c size=46 type=0 succ=['0x1409bb27c'] pred=['0x1409bb231']
// BB 0x1409bb27c-0x1409bb29a size=30 type=0 succ=['0x1409bb29a', '0x1409bf48b'] pred=['0x1409bb24e']
// BB 0x1409bb29a-0x1409bb2ef size=85 type=0 succ=['0x1409bb2ef', '0x1409bb2fc'] pred=['0x1409bb27c']
// BB 0x1409bb2ef-0x1409bb2fc size=13 type=0 succ=['0x1409bb2fc'] pred=['0x1409bb29a']
// BB 0x1409bb2fc-0x1409bb321 size=37 type=0 succ=['0x1409bb321'] pred=['0x1409bb29a', '0x1409bb2ef']
// BB 0x1409bb321-0x1409bb347 size=38 type=0 succ=['0x1409bb347'] pred=['0x1409bb2fc']
// BB 0x1409bb347-0x1409bb36f size=40 type=0 succ=['0x1409bb36f', '0x1409bf4ca'] pred=['0x1409bb321']
// BB 0x1409bb36f-0x1409bb374 size=5 type=0 succ=['0x1409bb374', '0x1409bb390'] pred=['0x1409bb347']
// BB 0x1409bb374-0x1409bb390 size=28 type=0 succ=['0x1409bb390'] pred=['0x1409bb36f', '0x1409bf4ca']
// BB 0x1409bb390-0x1409bb3a6 size=22 type=0 succ=['0x1409bb3a6', '0x1409bb3b5'] pred=['0x1409bb36f', '0x1409bb374']
// BB 0x1409bb3a6-0x1409bb3b5 size=15 type=0 succ=['0x1409bb3b5'] pred=['0x1409bb390']
// BB 0x1409bb3b5-0x1409bb3c6 size=17 type=0 succ=['0x1409bb3c6'] pred=['0x1409bb390', '0x1409bb3a6']
// BB 0x1409bb3c6-0x1409bb3d0 size=10 type=0 succ=['0x1409bb3d0', '0x1409bb406'] pred=['0x1409baf2f', '0x1409bb3b5']
// BB 0x1409bb3d0-0x1409bb406 size=54 type=0 succ=['0x1409bb409'] pred=['0x1409bb3c6']
// BB 0x1409bb406-0x1409bb409 size=3 type=0 succ=['0x1409bb409'] pred=['0x1409bb3c6']
// BB 0x1409bb409-0x1409bb497 size=142 type=0 succ=['0x1409bd8b5'] pred=['0x1409bb3d0', '0x1409bb406']
// BB 0x1409bb497-0x1409bb4bb size=36 type=0 succ=['0x1409bb4bb', '0x1409bba93'] pred=['0x1409b9a75']
// BB 0x1409bb4bb-0x1409bb4d4 size=25 type=0 succ=['0x1409bb4d4'] pred=['0x1409bb497']
// BB 0x1409bb4d4-0x1409bb4dd size=9 type=0 succ=['0x1409bb4dd', '0x1409bba93'] pred=['0x1409bb4bb']
// BB 0x1409bb4dd-0x1409bb4e6 size=9 type=0 succ=['0x1409bb4e6', '0x1409bba93'] pred=['0x1409bb4d4']
// BB 0x1409bb4e6-0x1409bb4f1 size=11 type=0 succ=['0x1409bb4f1', '0x1409bba93'] pred=['0x1409bb4dd']
// BB 0x1409bb4f1-0x1409bb510 size=31 type=0 succ=['0x1409bb510', '0x1409bfee8'] pred=['0x1409bb4e6']
// BB 0x1409bb510-0x1409bb515 size=5 type=0 succ=['0x1409bb515', '0x1409bb531'] pred=['0x1409bb4f1']
// BB 0x1409bb515-0x1409bb531 size=28 type=0 succ=['0x1409bb531'] pred=['0x1409bb510', '0x1409bfee8']
// BB 0x1409bb531-0x1409bb540 size=15 type=0 succ=['0x1409bba93'] pred=['0x1409bb510', '0x1409bb515']
// BB 0x1409bb540-0x1409bb564 size=36 type=0 succ=['0x1409bb564', '0x1409bba93'] pred=['0x1409b9a75']
// BB 0x1409bb564-0x1409bb57d size=25 type=0 succ=['0x1409bb57d'] pred=['0x1409bb540']
// BB 0x1409bb57d-0x1409bb586 size=9 type=0 succ=['0x1409bb586', '0x1409bba93'] pred=['0x1409bb564']
// BB 0x1409bb586-0x1409bb58f size=9 type=0 succ=['0x1409bb58f', '0x1409bba93'] pred=['0x1409bb57d']
// BB 0x1409bb58f-0x1409bb5ae size=31 type=0 succ=['0x1409bb5ae', '0x1409bba93'] pred=['0x1409bb586']
// BB 0x1409bb5ae-0x1409bb5b9 size=11 type=0 succ=['0x1409bb5b9', '0x1409bba93'] pred=['0x1409bb58f']
// BB 0x1409bb5b9-0x1409bb5cd size=20 type=0 succ=['0x1409bb5cd', '0x1409bff3b'] pred=['0x1409bb5ae']
// BB 0x1409bb5cd-0x1409bb616 size=73 type=0 succ=['0x1409bb616', '0x1409c08fa'] pred=['0x1409bb5b9', '0x1409bff3b']
// BB 0x1409bb616-0x1409bb640 size=42 type=0 succ=['0x1409bb640'] pred=['0x1409bb5cd']
// BB 0x1409bb640-0x1409bb661 size=33 type=0 succ=['0x1409bb661', '0x1409bffc7'] pred=['0x1409bb616']
// BB 0x1409bb661-0x1409bb6b3 size=82 type=0 succ=['0x1409bb6b3', '0x1409bb6c0'] pred=['0x1409bb640']
// BB 0x1409bb6b3-0x1409bb6c0 size=13 type=0 succ=['0x1409bb6c0'] pred=['0x1409bb661']
// BB 0x1409bb6c0-0x1409bb6dd size=29 type=0 succ=['0x1409bb6dd', '0x1409c0924'] pred=['0x1409bb661', '0x1409bb6b3']
// BB 0x1409bb6dd-0x1409bb758 size=123 type=0 succ=['0x1409bb758', '0x1409bb765'] pred=['0x1409bb6c0']
// BB 0x1409bb758-0x1409bb765 size=13 type=0 succ=['0x1409bb765'] pred=['0x1409bb6dd']
// BB 0x1409bb765-0x1409bb782 size=29 type=0 succ=['0x1409bb782', '0x1409c094e'] pred=['0x1409bb6dd', '0x1409bb758']
// BB 0x1409bb782-0x1409bb7b7 size=53 type=0 succ=['0x1409bb7b7'] pred=['0x1409bb765']
// BB 0x1409bb7b7-0x1409bb7d1 size=26 type=0 succ=['0x1409bb7d1', '0x1409c0045'] pred=['0x1409bb782']
// BB 0x1409bb7d1-0x1409bb823 size=82 type=0 succ=['0x1409bb823', '0x1409bb830'] pred=['0x1409bb7b7']
// BB 0x1409bb823-0x1409bb830 size=13 type=0 succ=['0x1409bb830'] pred=['0x1409bb7d1']
// BB 0x1409bb830-0x1409bb84d size=29 type=0 succ=['0x1409bb84d', '0x1409c0975'] pred=['0x1409bb7d1', '0x1409bb823']
// BB 0x1409bb84d-0x1409bb8c3 size=118 type=0 succ=['0x1409bb8c3', '0x1409bb8d0'] pred=['0x1409bb830']
// BB 0x1409bb8c3-0x1409bb8d0 size=13 type=0 succ=['0x1409bb8d0'] pred=['0x1409bb84d']
// BB 0x1409bb8d0-0x1409bb8ed size=29 type=0 succ=['0x1409bb8ed', '0x1409c0999'] pred=['0x1409bb84d', '0x1409bb8c3']
// BB 0x1409bb8ed-0x1409bb91b size=46 type=0 succ=['0x1409bb91b'] pred=['0x1409bb8d0']
// BB 0x1409bb91b-0x1409bb93c size=33 type=0 succ=['0x1409bb93c', '0x1409c00c3'] pred=['0x1409bb8ed']
// BB 0x1409bb93c-0x1409bb991 size=85 type=0 succ=['0x1409bb991', '0x1409bb99e'] pred=['0x1409bb91b']
// BB 0x1409bb991-0x1409bb99e size=13 type=0 succ=['0x1409bb99e'] pred=['0x1409bb93c']
// BB 0x1409bb99e-0x1409bb9ca size=44 type=0 succ=['0x1409bb9ca'] pred=['0x1409bb93c', '0x1409bb991']
// BB 0x1409bb9ca-0x1409bb9ec size=34 type=0 succ=['0x1409bb9ec'] pred=['0x1409bb99e']
// BB 0x1409bb9ec-0x1409bba1b size=47 type=0 succ=['0x1409bba1b', '0x1409c012d'] pred=['0x1409bb9ca']
// BB 0x1409bba1b-0x1409bba20 size=5 type=0 succ=['0x1409bba20', '0x1409bba40'] pred=['0x1409bb9ec']
// BB 0x1409bba20-0x1409bba40 size=32 type=0 succ=['0x1409bba40'] pred=['0x1409bba1b', '0x1409c012d']
// BB 0x1409bba40-0x1409bba56 size=22 type=0 succ=['0x1409bba56', '0x1409bba69'] pred=['0x1409bba1b', '0x1409bba20']
// BB 0x1409bba56-0x1409bba69 size=19 type=0 succ=['0x1409bba69'] pred=['0x1409bba40']
// BB 0x1409bba69-0x1409bba78 size=15 type=0 succ=['0x1409bba93'] pred=['0x1409bba40', '0x1409bba56']
// BB 0x1409bba78-0x1409bba93 size=27 type=0 succ=['0x1409bba93', '0x1409bd8eb'] pred=['0x1409b9a75']
// BB 0x1409bba93-0x1409bbaa5 size=18 type=0 succ=['0x1409bd8c2'] pred=['0x1409b9a38', '0x1409b9a5a', '0x1409b9a63', '0x1409b9a75', '0x1409b9a89', '0x1409b9ac2', '0x1409b9acb', '0x1409b9ad4', '0x1409b9af3', '0x1409b9fcd', '0x1409bb497', '0x1409bb4d4', '0x1409bb4dd', '0x1409bb4e6', '0x1409bb531', '0x1409bb540', '0x1409bb57d', '0x1409bb586', '0x1409bb58f', '0x1409bb5ae', '0x1409bba69', '0x1409bba78', '0x1409bd8eb', '0x1409bd90d', '0x1409bd916', '0x1409bd949', '0x1409bd969', '0x1409bdd6b']
// BB 0x1409bbaa5-0x1409bbaab size=6 type=0 succ=['0x1409b95ec', '0x1409bbaab'] pred=['0x1409b95b5']
// BB 0x1409bbaab-0x1409bbad9 size=46 type=0 succ=['0x1409bbad9'] pred=['0x1409b95e2', '0x1409bbaa5']
// BB 0x1409bbad9-0x1409bbb00 size=39 type=0 succ=['0x1409bbb00', '0x1409bbb12'] pred=['0x1409bbaab']
// BB 0x1409bbb00-0x1409bbb12 size=18 type=0 succ=['0x1409bbb12'] pred=['0x1409bbad9']
// BB 0x1409bbb12-0x1409bbb57 size=69 type=0 succ=['0x1409bbb57', '0x1409c051f'] pred=['0x1409bbad9', '0x1409bbb00']
// BB 0x1409bbb57-0x1409bbb81 size=42 type=0 succ=['0x1409bbb81'] pred=['0x1409bbb12']
// BB 0x1409bbb81-0x1409bbba2 size=33 type=0 succ=['0x1409bbba2', '0x1409bf534'] pred=['0x1409bbb57']
// BB 0x1409bbba2-0x1409bbbf1 size=79 type=0 succ=['0x1409bbbf1', '0x1409bbbfe'] pred=['0x1409bbb81']
// BB 0x1409bbbf1-0x1409bbbfe size=13 type=0 succ=['0x1409bbbfe'] pred=['0x1409bbba2']
// BB 0x1409bbbfe-0x1409bbc1b size=29 type=0 succ=['0x1409bbc1b', '0x1409c0534'] pred=['0x1409bbba2', '0x1409bbbf1']
// BB 0x1409bbc1b-0x1409bbc8d size=114 type=0 succ=['0x1409bbc8d', '0x1409bbc9a'] pred=['0x1409bbbfe']
// BB 0x1409bbc8d-0x1409bbc9a size=13 type=0 succ=['0x1409bbc9a'] pred=['0x1409bbc1b']
// BB 0x1409bbc9a-0x1409bbcb7 size=29 type=0 succ=['0x1409bbcb7', '0x1409c0549'] pred=['0x1409bbc1b', '0x1409bbc8d']
// BB 0x1409bbcb7-0x1409bbcf3 size=60 type=0 succ=['0x1409bbcf3'] pred=['0x1409bbc9a']
// BB 0x1409bbcf3-0x1409bbd14 size=33 type=0 succ=['0x1409bbd14', '0x1409bf573'] pred=['0x1409bbcb7']
// BB 0x1409bbd14-0x1409bbd63 size=79 type=0 succ=['0x1409bbd63', '0x1409bbd70'] pred=['0x1409bbcf3']
// BB 0x1409bbd63-0x1409bbd70 size=13 type=0 succ=['0x1409bbd70'] pred=['0x1409bbd14']
// BB 0x1409bbd70-0x1409bbd8d size=29 type=0 succ=['0x1409bbd8d', '0x1409c055e'] pred=['0x1409bbd14', '0x1409bbd63']
// BB 0x1409bbd8d-0x1409bbdda size=77 type=0 succ=['0x1409bbdda', '0x1409c0573'] pred=['0x1409bbd70']
// BB 0x1409bbdda-0x1409bbe04 size=42 type=0 succ=['0x1409bbe04'] pred=['0x1409bbd8d']
// BB 0x1409bbe04-0x1409bbe25 size=33 type=0 succ=['0x1409bbe25', '0x1409bf5b2'] pred=['0x1409bbdda']
// BB 0x1409bbe25-0x1409bbe77 size=82 type=0 succ=['0x1409bbe77', '0x1409bbe84'] pred=['0x1409bbe04']
// BB 0x1409bbe77-0x1409bbe84 size=13 type=0 succ=['0x1409bbe84'] pred=['0x1409bbe25']
// BB 0x1409bbe84-0x1409bbea1 size=29 type=0 succ=['0x1409bbea1', '0x1409c0588'] pred=['0x1409bbe25', '0x1409bbe77']
// BB 0x1409bbea1-0x1409bbed1 size=48 type=0 succ=['0x1409bbed1'] pred=['0x1409bbe84']
// BB 0x1409bbed1-0x1409bbef2 size=33 type=0 succ=['0x1409bbef2', '0x1409bf5f1'] pred=['0x1409bbea1']
// BB 0x1409bbef2-0x1409bbf44 size=82 type=0 succ=['0x1409bbf44', '0x1409bbf51'] pred=['0x1409bbed1']
// BB 0x1409bbf44-0x1409bbf51 size=13 type=0 succ=['0x1409bbf51'] pred=['0x1409bbef2']
// BB 0x1409bbf51-0x1409bbf6e size=29 type=0 succ=['0x1409bbf6e', '0x1409c059d'] pred=['0x1409bbef2', '0x1409bbf44']
// BB 0x1409bbf6e-0x1409bbf98 size=42 type=0 succ=['0x1409bbf98'] pred=['0x1409bbf51']
// BB 0x1409bbf98-0x1409bbfb9 size=33 type=0 succ=['0x1409bbfb9', '0x1409bf630'] pred=['0x1409bbf6e']
// BB 0x1409bbfb9-0x1409bc00b size=82 type=0 succ=['0x1409bc00b', '0x1409bc018'] pred=['0x1409bbf98']
// BB 0x1409bc00b-0x1409bc018 size=13 type=0 succ=['0x1409bc018'] pred=['0x1409bbfb9']
// BB 0x1409bc018-0x1409bc035 size=29 type=0 succ=['0x1409bc035', '0x1409c05b2'] pred=['0x1409bbfb9', '0x1409bc00b']
// BB 0x1409bc035-0x1409bc065 size=48 type=0 succ=['0x1409bc065'] pred=['0x1409bc018']
// BB 0x1409bc065-0x1409bc086 size=33 type=0 succ=['0x1409bc086', '0x1409bf66f'] pred=['0x1409bc035']
// BB 0x1409bc086-0x1409bc0d8 size=82 type=0 succ=['0x1409bc0d8', '0x1409bc0e5'] pred=['0x1409bc065']
// BB 0x1409bc0d8-0x1409bc0e5 size=13 type=0 succ=['0x1409bc0e5'] pred=['0x1409bc086']
// BB 0x1409bc0e5-0x1409bc102 size=29 type=0 succ=['0x1409bc102', '0x1409c05c7'] pred=['0x1409bc086', '0x1409bc0d8']
// BB 0x1409bc102-0x1409bc149 size=71 type=0 succ=['0x1409bc149', '0x1409bf3f1'] pred=['0x1409bc0e5']
// BB 0x1409bc149-0x1409bc183 size=58 type=0 succ=['0x1409bc183', '0x1409c05dc'] pred=['0x1409bc102']
// BB 0x1409bc183-0x1409bc1ad size=42 type=0 succ=['0x1409bc1ad'] pred=['0x1409bc149']
// BB 0x1409bc1ad-0x1409bc1ce size=33 type=0 succ=['0x1409bc1ce', '0x1409bf6ae'] pred=['0x1409bc183']
// BB 0x1409bc1ce-0x1409bc220 size=82 type=0 succ=['0x1409bc220', '0x1409bc22d'] pred=['0x1409bc1ad']
// BB 0x1409bc220-0x1409bc22d size=13 type=0 succ=['0x1409bc22d'] pred=['0x1409bc1ce']
// BB 0x1409bc22d-0x1409bc24a size=29 type=0 succ=['0x1409bc24a', '0x1409c05f1'] pred=['0x1409bc1ce', '0x1409bc220']
// BB 0x1409bc24a-0x1409bc274 size=42 type=0 succ=['0x1409bc274'] pred=['0x1409bc22d']
// BB 0x1409bc274-0x1409bc295 size=33 type=0 succ=['0x1409bc295', '0x1409bf6ed'] pred=['0x1409bc24a']
// BB 0x1409bc295-0x1409bc2e7 size=82 type=0 succ=['0x1409bc2e7', '0x1409bc2f4'] pred=['0x1409bc274']
// BB 0x1409bc2e7-0x1409bc2f4 size=13 type=0 succ=['0x1409bc2f4'] pred=['0x1409bc295']
// BB 0x1409bc2f4-0x1409bc368 size=116 type=0 succ=['0x1409bc368'] pred=['0x1409bc295', '0x1409bc2e7']
// BB 0x1409bc368-0x1409bc393 size=43 type=0 succ=['0x1409bc393', '0x1409bc3a0'] pred=['0x1409bc2f4']
// BB 0x1409bc393-0x1409bc3a0 size=13 type=0 succ=['0x1409bc3a0'] pred=['0x1409bc368']
// BB 0x1409bc3a0-0x1409bc3cc size=44 type=0 succ=['0x1409bc3cc'] pred=['0x1409bc368', '0x1409bc393']
// BB 0x1409bc3cc-0x1409bc3f4 size=40 type=0 succ=['0x1409bc3f4', '0x1409bc401'] pred=['0x1409bc3a0']
// BB 0x1409bc3f4-0x1409bc401 size=13 type=0 succ=['0x1409bc401'] pred=['0x1409bc3cc']
// BB 0x1409bc401-0x1409bc427 size=38 type=0 succ=['0x1409bc427'] pred=['0x1409bc3cc', '0x1409bc3f4']
// BB 0x1409bc427-0x1409bc449 size=34 type=0 succ=['0x1409bc449'] pred=['0x1409bc401']
// BB 0x1409bc449-0x1409bc478 size=47 type=0 succ=['0x1409bc478', '0x1409bf72c'] pred=['0x1409bc427']
// BB 0x1409bc478-0x1409bc47d size=5 type=0 succ=['0x1409bc47d', '0x1409bc49d'] pred=['0x1409bc449']
// BB 0x1409bc47d-0x1409bc49d size=32 type=0 succ=['0x1409bc49d'] pred=['0x1409bc478', '0x1409bf72c']
// BB 0x1409bc49d-0x1409bc4b3 size=22 type=0 succ=['0x1409bc4b3', '0x1409bc4c6'] pred=['0x1409bc478', '0x1409bc47d']
// BB 0x1409bc4b3-0x1409bc4c6 size=19 type=0 succ=['0x1409bc4c6'] pred=['0x1409bc49d']
// BB 0x1409bc4c6-0x1409bc506 size=64 type=0 succ=['0x1409bc506', '0x1409c0606'] pred=['0x1409bc49d', '0x1409bc4b3']
// BB 0x1409bc506-0x1409bc530 size=42 type=0 succ=['0x1409bc530'] pred=['0x1409bc4c6']
// BB 0x1409bc530-0x1409bc551 size=33 type=0 succ=['0x1409bc551', '0x1409bf757'] pred=['0x1409bc506']
// BB 0x1409bc551-0x1409bc5a3 size=82 type=0 succ=['0x1409bc5a3', '0x1409bc5b0'] pred=['0x1409bc530']
// BB 0x1409bc5a3-0x1409bc5b0 size=13 type=0 succ=['0x1409bc5b0'] pred=['0x1409bc551']
// BB 0x1409bc5b0-0x1409bc5cd size=29 type=0 succ=['0x1409bc5cd', '0x1409c061b'] pred=['0x1409bc551', '0x1409bc5a3']
// BB 0x1409bc5cd-0x1409bc638 size=107 type=0 succ=['0x1409bc638', '0x1409bc645'] pred=['0x1409bc5b0']
// BB 0x1409bc638-0x1409bc645 size=13 type=0 succ=['0x1409bc645'] pred=['0x1409bc5cd']
// BB 0x1409bc645-0x1409bc662 size=29 type=0 succ=['0x1409bc662', '0x1409c0630'] pred=['0x1409bc5cd', '0x1409bc638']
// BB 0x1409bc662-0x1409bc69a size=56 type=0 succ=['0x1409bc69a'] pred=['0x1409bc645']
// BB 0x1409bc69a-0x1409bc6bb size=33 type=0 succ=['0x1409bc6bb', '0x1409bf796'] pred=['0x1409bc662']
// BB 0x1409bc6bb-0x1409bc70d size=82 type=0 succ=['0x1409bc70d', '0x1409bc71a'] pred=['0x1409bc69a']
// BB 0x1409bc70d-0x1409bc71a size=13 type=0 succ=['0x1409bc71a'] pred=['0x1409bc6bb']
// BB 0x1409bc71a-0x1409bc737 size=29 type=0 succ=['0x1409bc737', '0x1409c0645'] pred=['0x1409bc6bb', '0x1409bc70d']
// BB 0x1409bc737-0x1409bc7ad size=118 type=0 succ=['0x1409bc7ad', '0x1409bc7ba'] pred=['0x1409bc71a']
// BB 0x1409bc7ad-0x1409bc7ba size=13 type=0 succ=['0x1409bc7ba'] pred=['0x1409bc737']
// BB 0x1409bc7ba-0x1409bc7d7 size=29 type=0 succ=['0x1409bc7d7', '0x1409c065a'] pred=['0x1409bc737', '0x1409bc7ad']
// BB 0x1409bc7d7-0x1409bc82d size=86 type=0 succ=['0x1409bc82d', '0x1409c066f'] pred=['0x1409bc7ba']
// BB 0x1409bc82d-0x1409bc857 size=42 type=0 succ=['0x1409bc857'] pred=['0x1409bc7d7']
// BB 0x1409bc857-0x1409bc878 size=33 type=0 succ=['0x1409bc878', '0x1409bf7d5'] pred=['0x1409bc82d']
// BB 0x1409bc878-0x1409bc8ca size=82 type=0 succ=['0x1409bc8ca', '0x1409bc8d7'] pred=['0x1409bc857']
// BB 0x1409bc8ca-0x1409bc8d7 size=13 type=0 succ=['0x1409bc8d7'] pred=['0x1409bc878']
// BB 0x1409bc8d7-0x1409bc8f4 size=29 type=0 succ=['0x1409bc8f4', '0x1409c0684'] pred=['0x1409bc878', '0x1409bc8ca']
// BB 0x1409bc8f4-0x1409bc91e size=42 type=0 succ=['0x1409bc91e'] pred=['0x1409bc8d7']
// BB 0x1409bc91e-0x1409bc93f size=33 type=0 succ=['0x1409bc93f', '0x1409bf814'] pred=['0x1409bc8f4']
// BB 0x1409bc93f-0x1409bc991 size=82 type=0 succ=['0x1409bc991', '0x1409bc99e'] pred=['0x1409bc91e']
// BB 0x1409bc991-0x1409bc99e size=13 type=0 succ=['0x1409bc99e'] pred=['0x1409bc93f']
// BB 0x1409bc99e-0x1409bc9bb size=29 type=0 succ=['0x1409bc9bb', '0x1409c0699'] pred=['0x1409bc93f', '0x1409bc991']
// BB 0x1409bc9bb-0x1409bca3f size=132 type=0 succ=['0x1409bca3f', '0x1409bca4c'] pred=['0x1409bc99e']
// BB 0x1409bca3f-0x1409bca4c size=13 type=0 succ=['0x1409bca4c'] pred=['0x1409bc9bb']
// BB 0x1409bca4c-0x1409bca78 size=44 type=0 succ=['0x1409bca78'] pred=['0x1409bc9bb', '0x1409bca3f']
// BB 0x1409bca78-0x1409bcaa6 size=46 type=0 succ=['0x1409bcaa6', '0x1409bcab3'] pred=['0x1409bca4c']
// BB 0x1409bcaa6-0x1409bcab3 size=13 type=0 succ=['0x1409bcab3'] pred=['0x1409bca78']
// BB 0x1409bcab3-0x1409bcad8 size=37 type=0 succ=['0x1409bcad8'] pred=['0x1409bca78', '0x1409bcaa6']
// BB 0x1409bcad8-0x1409bcafa size=34 type=0 succ=['0x1409bcafa'] pred=['0x1409bcab3']
// BB 0x1409bcafa-0x1409bcb22 size=40 type=0 succ=['0x1409bcb22', '0x1409bf853'] pred=['0x1409bcad8']
// BB 0x1409bcb22-0x1409bcb27 size=5 type=0 succ=['0x1409bcb27', '0x1409bcb43'] pred=['0x1409bcafa']
// BB 0x1409bcb27-0x1409bcb43 size=28 type=0 succ=['0x1409bcb43'] pred=['0x1409bcb22', '0x1409bf853']
// BB 0x1409bcb43-0x1409bcb59 size=22 type=0 succ=['0x1409bcb59', '0x1409bcb68'] pred=['0x1409bcb22', '0x1409bcb27']
// BB 0x1409bcb59-0x1409bcb68 size=15 type=0 succ=['0x1409bcb68'] pred=['0x1409bcb43']
// BB 0x1409bcb68-0x1409bcb75 size=13 type=0 succ=['0x1409bcb75'] pred=['0x1409bcb43', '0x1409bcb59']
// BB 0x1409bcb75-0x1409bcbe2 size=109 type=0 succ=['0x1409bd8b5'] pred=['0x1409bcb68']
// BB 0x1409bcbe2-0x1409bcbeb size=9 type=0 succ=['0x1409bcbeb'] pred=['0x1409b9763']
// BB 0x1409bcbeb-0x1409bcc20 size=53 type=0 succ=['0x1409bcc20', '0x1409bf88c'] pred=['0x1409b9785', '0x1409bcbe2']
// BB 0x1409bcc20-0x1409bcc2c size=12 type=0 succ=['0x1409bcc2c', '0x1409bcc3a'] pred=['0x1409bcbeb']
// BB 0x1409bcc2c-0x1409bcc3a size=14 type=0 succ=['0x1409bcc3a'] pred=['0x1409bcc20']
// BB 0x1409bcc3a-0x1409bcc4d size=19 type=0 succ=['0x1409bcc4d'] pred=['0x1409bcc20', '0x1409bcc2c']
// BB 0x1409bcc4d-0x1409bcc66 size=25 type=0 succ=['0x1409bcc66'] pred=['0x1409bcc3a']
// BB 0x1409bcc66-0x1409bcc6b size=5 type=0 succ=['0x1409bcc6b', '0x1409bcc83'] pred=['0x1409bcc4d']
// BB 0x1409bcc6b-0x1409bcc83 size=24 type=0 succ=['0x1409bcc8c'] pred=['0x1409bcc66']
// BB 0x1409bcc83-0x1409bcc8c size=9 type=0 succ=['0x1409bcc8c'] pred=['0x1409bcc66']
// BB 0x1409bcc8c-0x1409bccc5 size=57 type=0 succ=['0x1409bccc5', '0x1409bf8a1'] pred=['0x1409bcc6b', '0x1409bcc83']
// BB 0x1409bccc5-0x1409bccd1 size=12 type=0 succ=['0x1409bccd1', '0x1409bccdf'] pred=['0x1409bcc8c']
// BB 0x1409bccd1-0x1409bccdf size=14 type=0 succ=['0x1409bccdf'] pred=['0x1409bccc5']
// BB 0x1409bccdf-0x1409bcd41 size=98 type=0 succ=['0x1409bcd41', '0x1409bf8be'] pred=['0x1409bccc5', '0x1409bccd1']
// BB 0x1409bcd41-0x1409bcd4d size=12 type=0 succ=['0x1409bcd4d', '0x1409bcd5b'] pred=['0x1409bccdf']
// BB 0x1409bcd4d-0x1409bcd5b size=14 type=0 succ=['0x1409bcd5b'] pred=['0x1409bcd41']
// BB 0x1409bcd5b-0x1409bcd84 size=41 type=0 succ=['0x1409bcd84'] pred=['0x1409bcd41', '0x1409bcd4d']
// BB 0x1409bcd84-0x1409bcdd7 size=83 type=0 succ=['0x1409bcdd7', '0x1409bcdfd'] pred=['0x1409bcd5b']
// BB 0x1409bcdd7-0x1409bcddd size=6 type=0 succ=['0x1409bcddd', '0x1409bcdff'] pred=['0x1409bcd84']
// BB 0x1409bcddd-0x1409bcdf7 size=26 type=4 succ=[] pred=['0x1409bcdd7', '0x1409bcdfd']
// BB 0x1409bcdf8-0x1409bcdfd size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bcdfd-0x1409bcdff size=2 type=0 succ=['0x1409bcddd', '0x1409bcdff'] pred=['0x1409bcd84']
// BB 0x1409bcdff-0x1409bce54 size=85 type=0 succ=['0x1409bce54', '0x1409bce66'] pred=['0x1409bcdd7', '0x1409bcdfd']
// BB 0x1409bce54-0x1409bce66 size=18 type=0 succ=['0x1409bce66'] pred=['0x1409bcdff']
// BB 0x1409bce66-0x1409bceb7 size=81 type=0 succ=['0x1409bceb7', '0x1409c06ae'] pred=['0x1409bcdff', '0x1409bce54']
// BB 0x1409bceb7-0x1409bcee1 size=42 type=0 succ=['0x1409bcee1'] pred=['0x1409bce66']
// BB 0x1409bcee1-0x1409bcf02 size=33 type=0 succ=['0x1409bcf02', '0x1409bf8da'] pred=['0x1409bceb7']
// BB 0x1409bcf02-0x1409bcf54 size=82 type=0 succ=['0x1409bcf54', '0x1409bcf61'] pred=['0x1409bcee1']
// BB 0x1409bcf54-0x1409bcf61 size=13 type=0 succ=['0x1409bcf61'] pred=['0x1409bcf02']
// BB 0x1409bcf61-0x1409bcf7e size=29 type=0 succ=['0x1409bcf7e', '0x1409c06c3'] pred=['0x1409bcf02', '0x1409bcf54']
// BB 0x1409bcf7e-0x1409bcfb5 size=55 type=0 succ=['0x1409bcfb5'] pred=['0x1409bcf61']
// BB 0x1409bcfb5-0x1409bcfd6 size=33 type=0 succ=['0x1409bcfd6', '0x1409bf919'] pred=['0x1409bcf7e']
// BB 0x1409bcfd6-0x1409bd028 size=82 type=0 succ=['0x1409bd028', '0x1409bd035'] pred=['0x1409bcfb5']
// BB 0x1409bd028-0x1409bd035 size=13 type=0 succ=['0x1409bd035'] pred=['0x1409bcfd6']
// BB 0x1409bd035-0x1409bd052 size=29 type=0 succ=['0x1409bd052', '0x1409c06d8'] pred=['0x1409bcfd6', '0x1409bd028']
// BB 0x1409bd052-0x1409bd082 size=48 type=0 succ=['0x1409bd082'] pred=['0x1409bd035']
// BB 0x1409bd082-0x1409bd0a3 size=33 type=0 succ=['0x1409bd0a3', '0x1409bf958'] pred=['0x1409bd052']
// BB 0x1409bd0a3-0x1409bd0f5 size=82 type=0 succ=['0x1409bd0f5', '0x1409bd102'] pred=['0x1409bd082']
// BB 0x1409bd0f5-0x1409bd102 size=13 type=0 succ=['0x1409bd102'] pred=['0x1409bd0a3']
// BB 0x1409bd102-0x1409bd11f size=29 type=0 succ=['0x1409bd11f', '0x1409c06ed'] pred=['0x1409bd0a3', '0x1409bd0f5']
// BB 0x1409bd11f-0x1409bd15b size=60 type=0 succ=['0x1409bd15b'] pred=['0x1409bd102']
// BB 0x1409bd15b-0x1409bd17c size=33 type=0 succ=['0x1409bd17c', '0x1409bf997'] pred=['0x1409bd11f']
// BB 0x1409bd17c-0x1409bd1ce size=82 type=0 succ=['0x1409bd1ce', '0x1409bd1db'] pred=['0x1409bd15b']
// BB 0x1409bd1ce-0x1409bd1db size=13 type=0 succ=['0x1409bd1db'] pred=['0x1409bd17c']
// BB 0x1409bd1db-0x1409bd1f8 size=29 type=0 succ=['0x1409bd1f8', '0x1409c0702'] pred=['0x1409bd17c', '0x1409bd1ce']
// BB 0x1409bd1f8-0x1409bd22d size=53 type=0 succ=['0x1409bd22d'] pred=['0x1409bd1db']
// BB 0x1409bd22d-0x1409bd24e size=33 type=0 succ=['0x1409bd24e', '0x1409bf9d6'] pred=['0x1409bd1f8']
// BB 0x1409bd24e-0x1409bd2a0 size=82 type=0 succ=['0x1409bd2a0', '0x1409bd2ad'] pred=['0x1409bd22d']
// BB 0x1409bd2a0-0x1409bd2ad size=13 type=0 succ=['0x1409bd2ad'] pred=['0x1409bd24e']
// BB 0x1409bd2ad-0x1409bd2ca size=29 type=0 succ=['0x1409bd2ca', '0x1409c0717'] pred=['0x1409bd24e', '0x1409bd2a0']
// BB 0x1409bd2ca-0x1409bd2ff size=53 type=0 succ=['0x1409bd2ff'] pred=['0x1409bd2ad']
// BB 0x1409bd2ff-0x1409bd320 size=33 type=0 succ=['0x1409bd320', '0x1409bfa15'] pred=['0x1409bd2ca']
// BB 0x1409bd320-0x1409bd372 size=82 type=0 succ=['0x1409bd372', '0x1409bd37f'] pred=['0x1409bd2ff']
// BB 0x1409bd372-0x1409bd37f size=13 type=0 succ=['0x1409bd37f'] pred=['0x1409bd320']
// BB 0x1409bd37f-0x1409bd3ba size=59 type=0 succ=['0x1409bd3ba'] pred=['0x1409bd320', '0x1409bd372']
// BB 0x1409bd3ba-0x1409bd3fa size=64 type=0 succ=['0x1409bd3fa', '0x1409c072c'] pred=['0x1409bd37f']
// BB 0x1409bd3fa-0x1409bd424 size=42 type=0 succ=['0x1409bd424'] pred=['0x1409bd3ba']
// BB 0x1409bd424-0x1409bd445 size=33 type=0 succ=['0x1409bd445', '0x1409bfa54'] pred=['0x1409bd3fa']
// BB 0x1409bd445-0x1409bd497 size=82 type=0 succ=['0x1409bd497', '0x1409bd4a4'] pred=['0x1409bd424']
// BB 0x1409bd497-0x1409bd4a4 size=13 type=0 succ=['0x1409bd4a4'] pred=['0x1409bd445']
// BB 0x1409bd4a4-0x1409bd4c1 size=29 type=0 succ=['0x1409bd4c1', '0x1409c0741'] pred=['0x1409bd445', '0x1409bd497']
// BB 0x1409bd4c1-0x1409bd53a size=121 type=0 succ=['0x1409bd53a', '0x1409bd547'] pred=['0x1409bd4a4']
// BB 0x1409bd53a-0x1409bd547 size=13 type=0 succ=['0x1409bd547'] pred=['0x1409bd4c1']
// BB 0x1409bd547-0x1409bd564 size=29 type=0 succ=['0x1409bd564', '0x1409c0756'] pred=['0x1409bd4c1', '0x1409bd53a']
// BB 0x1409bd564-0x1409bd599 size=53 type=0 succ=['0x1409bd599'] pred=['0x1409bd547']
// BB 0x1409bd599-0x1409bd5b7 size=30 type=0 succ=['0x1409bd5b7', '0x1409bfa93'] pred=['0x1409bd564']
// BB 0x1409bd5b7-0x1409bd609 size=82 type=0 succ=['0x1409bd609', '0x1409bd616'] pred=['0x1409bd599']
// BB 0x1409bd609-0x1409bd616 size=13 type=0 succ=['0x1409bd616'] pred=['0x1409bd5b7']
// BB 0x1409bd616-0x1409bd633 size=29 type=0 succ=['0x1409bd633', '0x1409c076b'] pred=['0x1409bd5b7', '0x1409bd609']
// BB 0x1409bd633-0x1409bd65d size=42 type=0 succ=['0x1409bd65d'] pred=['0x1409bd616']
// BB 0x1409bd65d-0x1409bd67e size=33 type=0 succ=['0x1409bd67e', '0x1409bfad2'] pred=['0x1409bd633']
// BB 0x1409bd67e-0x1409bd6d3 size=85 type=0 succ=['0x1409bd6d3', '0x1409bd6e0'] pred=['0x1409bd65d']
// BB 0x1409bd6d3-0x1409bd6e0 size=13 type=0 succ=['0x1409bd6e0'] pred=['0x1409bd67e']
// BB 0x1409bd6e0-0x1409bd70c size=44 type=0 succ=['0x1409bd70c'] pred=['0x1409bd67e', '0x1409bd6d3']
// BB 0x1409bd70c-0x1409bd72b size=31 type=0 succ=['0x1409bd72b'] pred=['0x1409bd6e0']
// BB 0x1409bd72b-0x1409bd75a size=47 type=0 succ=['0x1409bd75a', '0x1409bfb11'] pred=['0x1409bd70c']
// BB 0x1409bd75a-0x1409bd75f size=5 type=0 succ=['0x1409bd75f', '0x1409bd77b'] pred=['0x1409bd72b']
// BB 0x1409bd75f-0x1409bd77b size=28 type=0 succ=['0x1409bd77b'] pred=['0x1409bd75a', '0x1409bfb11']
// BB 0x1409bd77b-0x1409bd791 size=22 type=0 succ=['0x1409bd791', '0x1409bd79f'] pred=['0x1409bd75a', '0x1409bd75f']
// BB 0x1409bd791-0x1409bd79f size=14 type=0 succ=['0x1409bd79f'] pred=['0x1409bd77b']
// BB 0x1409bd79f-0x1409bd7a6 size=7 type=0 succ=['0x1409bd7a6'] pred=['0x1409bd77b', '0x1409bd791']
// BB 0x1409bd7a6-0x1409bd87c size=214 type=0 succ=['0x1409bd87c', '0x1409bd888'] pred=['0x1409bd79f']
// BB 0x1409bd87c-0x1409bd888 size=12 type=0 succ=['0x1409bd888'] pred=['0x1409bd7a6']
// BB 0x1409bd888-0x1409bd88f size=7 type=0 succ=['0x1409bd88f'] pred=['0x1409bd7a6', '0x1409bd87c']
// BB 0x1409bd88f-0x1409bd89c size=13 type=0 succ=['0x1409bd89c'] pred=['0x1409bd888']
// BB 0x1409bd89c-0x1409bd8a5 size=9 type=0 succ=['0x1409bd8a5', '0x1409bd8b5'] pred=['0x1409bd88f', '0x1409bed08']
// BB 0x1409bd8a5-0x1409bd8b5 size=16 type=0 succ=['0x1409bd8b5'] pred=['0x1409bd89c']
// BB 0x1409bd8b5-0x1409bd8c2 size=13 type=0 succ=['0x1409bd8c2'] pred=['0x1409b94bb', '0x1409b94e0', '0x1409b94f0', '0x1409b960c', '0x1409b9637', '0x1409b9659', '0x1409b9662', '0x1409b966d', '0x1409b9737', '0x1409b97a0', '0x1409bb409', '0x1409bcb75', '0x1409bd89c', '0x1409bd8a5']
// BB 0x1409bd8c2-0x1409bd8eb size=41 type=2 succ=[] pred=['0x1409b7e20', '0x1409b7e3b', '0x1409b7e44', '0x1409b7e56', '0x1409b7e6a', '0x1409b7e8f', '0x1409b7f25', '0x1409b7f65', '0x1409b7f6f', '0x1409b7f8f', '0x1409b8025', '0x1409b803f', '0x1409b807e', '0x1409b81ea', '0x1409b82af', '0x1409b9388', '0x1409bba93', '0x1409bd8b5']
// BB 0x1409bd8eb-0x1409bd90d size=34 type=0 succ=['0x1409bba93', '0x1409bd90d'] pred=['0x1409bba78']
// BB 0x1409bd90d-0x1409bd916 size=9 type=0 succ=['0x1409bba93', '0x1409bd916'] pred=['0x1409bd8eb']
// BB 0x1409bd916-0x1409bd935 size=31 type=0 succ=['0x1409bba93', '0x1409bd935'] pred=['0x1409bd90d']
// BB 0x1409bd935-0x1409bd949 size=20 type=0 succ=['0x1409bd949'] pred=['0x1409bd916']
// BB 0x1409bd949-0x1409bd955 size=12 type=0 succ=['0x1409bba93', '0x1409bd955'] pred=['0x1409bd935']
// BB 0x1409bd955-0x1409bd969 size=20 type=0 succ=['0x1409bd969', '0x1409bff60'] pred=['0x1409bd949']
// BB 0x1409bd969-0x1409bd989 size=32 type=0 succ=['0x1409bba93', '0x1409bd989'] pred=['0x1409bd955', '0x1409bff60']
// BB 0x1409bd989-0x1409bd9bc size=51 type=0 succ=['0x1409bd9bc', '0x1409c09ab'] pred=['0x1409bd969']
// BB 0x1409bd9bc-0x1409bd9e6 size=42 type=0 succ=['0x1409bd9e6'] pred=['0x1409bd989']
// BB 0x1409bd9e6-0x1409bda07 size=33 type=0 succ=['0x1409bda07', '0x1409c0158'] pred=['0x1409bd9bc']
// BB 0x1409bda07-0x1409bda59 size=82 type=0 succ=['0x1409bda59', '0x1409bda66'] pred=['0x1409bd9e6']
// BB 0x1409bda59-0x1409bda66 size=13 type=0 succ=['0x1409bda66'] pred=['0x1409bda07']
// BB 0x1409bda66-0x1409bda83 size=29 type=0 succ=['0x1409bda83', '0x1409c09bd'] pred=['0x1409bda07', '0x1409bda59']
// BB 0x1409bda83-0x1409bdafb size=120 type=0 succ=['0x1409bdafb', '0x1409bdb08'] pred=['0x1409bda66']
// BB 0x1409bdafb-0x1409bdb08 size=13 type=0 succ=['0x1409bdb08'] pred=['0x1409bda83']
// BB 0x1409bdb08-0x1409bdb25 size=29 type=0 succ=['0x1409bdb25', '0x1409c09cf'] pred=['0x1409bda83', '0x1409bdafb']
// BB 0x1409bdb25-0x1409bdb56 size=49 type=0 succ=['0x1409bdb56'] pred=['0x1409bdb08']
// BB 0x1409bdb56-0x1409bdb73 size=29 type=0 succ=['0x1409bdb73', '0x1409c0197'] pred=['0x1409bdb25']
// BB 0x1409bdb73-0x1409bdbc5 size=82 type=0 succ=['0x1409bdbc5', '0x1409bdbd2'] pred=['0x1409bdb56']
// BB 0x1409bdbc5-0x1409bdbd2 size=13 type=0 succ=['0x1409bdbd2'] pred=['0x1409bdb73']
// BB 0x1409bdbd2-0x1409bdbef size=29 type=0 succ=['0x1409bdbef', '0x1409c09e1'] pred=['0x1409bdb73', '0x1409bdbc5']
// BB 0x1409bdbef-0x1409bdc1d size=46 type=0 succ=['0x1409bdc1d'] pred=['0x1409bdbd2']
// BB 0x1409bdc1d-0x1409bdc3e size=33 type=0 succ=['0x1409bdc3e', '0x1409c01d6'] pred=['0x1409bdbef']
// BB 0x1409bdc3e-0x1409bdc93 size=85 type=0 succ=['0x1409bdc93', '0x1409bdca0'] pred=['0x1409bdc1d']
// BB 0x1409bdc93-0x1409bdca0 size=13 type=0 succ=['0x1409bdca0'] pred=['0x1409bdc3e']
// BB 0x1409bdca0-0x1409bdccc size=44 type=0 succ=['0x1409bdccc'] pred=['0x1409bdc3e', '0x1409bdc93']
// BB 0x1409bdccc-0x1409bdcee size=34 type=0 succ=['0x1409bdcee'] pred=['0x1409bdca0']
// BB 0x1409bdcee-0x1409bdd1d size=47 type=0 succ=['0x1409bdd1d', '0x1409c0215'] pred=['0x1409bdccc']
// BB 0x1409bdd1d-0x1409bdd22 size=5 type=0 succ=['0x1409bdd22', '0x1409bdd42'] pred=['0x1409bdcee']
// BB 0x1409bdd22-0x1409bdd42 size=32 type=0 succ=['0x1409bdd42'] pred=['0x1409bdd1d', '0x1409c0215']
// BB 0x1409bdd42-0x1409bdd58 size=22 type=0 succ=['0x1409bdd58', '0x1409bdd6b'] pred=['0x1409bdd1d', '0x1409bdd22']
// BB 0x1409bdd58-0x1409bdd6b size=19 type=0 succ=['0x1409bdd6b'] pred=['0x1409bdd42']
// BB 0x1409bdd6b-0x1409bdd7d size=18 type=0 succ=['0x1409bba93'] pred=['0x1409bdd42', '0x1409bdd58']
// BB 0x1409bdd7d-0x1409bdd83 size=6 type=0 succ=['0x1409b96fd', '0x1409bdd83'] pred=['0x1409b9691']
// BB 0x1409bdd83-0x1409bddb1 size=46 type=0 succ=['0x1409bddb1'] pred=['0x1409b96f3', '0x1409bdd7d']
// BB 0x1409bddb1-0x1409bddd8 size=39 type=0 succ=['0x1409bddd8', '0x1409bddea'] pred=['0x1409bdd83']
// BB 0x1409bddd8-0x1409bddea size=18 type=0 succ=['0x1409bddea'] pred=['0x1409bddb1']
// BB 0x1409bddea-0x1409bde35 size=75 type=0 succ=['0x1409bde35', '0x1409c0780'] pred=['0x1409bddb1', '0x1409bddd8']
// BB 0x1409bde35-0x1409bde5f size=42 type=0 succ=['0x1409bde5f'] pred=['0x1409bddea']
// BB 0x1409bde5f-0x1409bde80 size=33 type=0 succ=['0x1409bde80', '0x1409bfb51'] pred=['0x1409bde35']
// BB 0x1409bde80-0x1409bded2 size=82 type=0 succ=['0x1409bded2', '0x1409bdedf'] pred=['0x1409bde5f']
// BB 0x1409bded2-0x1409bdedf size=13 type=0 succ=['0x1409bdedf'] pred=['0x1409bde80']
// BB 0x1409bdedf-0x1409bdefc size=29 type=0 succ=['0x1409bdefc', '0x1409c0795'] pred=['0x1409bde80', '0x1409bded2']
// BB 0x1409bdefc-0x1409bdf71 size=117 type=0 succ=['0x1409bdf71', '0x1409bdf7e'] pred=['0x1409bdedf']
// BB 0x1409bdf71-0x1409bdf7e size=13 type=0 succ=['0x1409bdf7e'] pred=['0x1409bdefc']
// BB 0x1409bdf7e-0x1409bdf9b size=29 type=0 succ=['0x1409bdf9b', '0x1409c07aa'] pred=['0x1409bdefc', '0x1409bdf71']
// BB 0x1409bdf9b-0x1409bdfd7 size=60 type=0 succ=['0x1409bdfd7'] pred=['0x1409bdf7e']
// BB 0x1409bdfd7-0x1409bdff8 size=33 type=0 succ=['0x1409bdff8', '0x1409bfb90'] pred=['0x1409bdf9b']
// BB 0x1409bdff8-0x1409be04a size=82 type=0 succ=['0x1409be04a', '0x1409be057'] pred=['0x1409bdfd7']
// BB 0x1409be04a-0x1409be057 size=13 type=0 succ=['0x1409be057'] pred=['0x1409bdff8']
// BB 0x1409be057-0x1409be074 size=29 type=0 succ=['0x1409be074', '0x1409c07bf'] pred=['0x1409bdff8', '0x1409be04a']
// BB 0x1409be074-0x1409be0ca size=86 type=0 succ=['0x1409be0ca', '0x1409c07d4'] pred=['0x1409be057']
// BB 0x1409be0ca-0x1409be0f4 size=42 type=0 succ=['0x1409be0f4'] pred=['0x1409be074']
// BB 0x1409be0f4-0x1409be115 size=33 type=0 succ=['0x1409be115', '0x1409bfbcf'] pred=['0x1409be0ca']
// BB 0x1409be115-0x1409be167 size=82 type=0 succ=['0x1409be167', '0x1409be174'] pred=['0x1409be0f4']
// BB 0x1409be167-0x1409be174 size=13 type=0 succ=['0x1409be174'] pred=['0x1409be115']
// BB 0x1409be174-0x1409be191 size=29 type=0 succ=['0x1409be191', '0x1409c07e9'] pred=['0x1409be115', '0x1409be167']
// BB 0x1409be191-0x1409be1be size=45 type=0 succ=['0x1409be1be'] pred=['0x1409be174']
// BB 0x1409be1be-0x1409be1dc size=30 type=0 succ=['0x1409be1dc', '0x1409bfc0e'] pred=['0x1409be191']
// BB 0x1409be1dc-0x1409be22e size=82 type=0 succ=['0x1409be22e', '0x1409be23b'] pred=['0x1409be1be']
// BB 0x1409be22e-0x1409be23b size=13 type=0 succ=['0x1409be23b'] pred=['0x1409be1dc']
// BB 0x1409be23b-0x1409be258 size=29 type=0 succ=['0x1409be258', '0x1409c07fe'] pred=['0x1409be1dc', '0x1409be22e']
// BB 0x1409be258-0x1409be288 size=48 type=0 succ=['0x1409be288'] pred=['0x1409be23b']
// BB 0x1409be288-0x1409be2a9 size=33 type=0 succ=['0x1409be2a9', '0x1409bfc4d'] pred=['0x1409be258']
// BB 0x1409be2a9-0x1409be2fb size=82 type=0 succ=['0x1409be2fb', '0x1409be308'] pred=['0x1409be288']
// BB 0x1409be2fb-0x1409be308 size=13 type=0 succ=['0x1409be308'] pred=['0x1409be2a9']
// BB 0x1409be308-0x1409be334 size=44 type=0 succ=['0x1409be334'] pred=['0x1409be2a9', '0x1409be2fb']
// BB 0x1409be334-0x1409be362 size=46 type=0 succ=['0x1409be362', '0x1409be36f'] pred=['0x1409be308']
// BB 0x1409be362-0x1409be36f size=13 type=0 succ=['0x1409be36f'] pred=['0x1409be334']
// BB 0x1409be36f-0x1409be39b size=44 type=0 succ=['0x1409be39b'] pred=['0x1409be334', '0x1409be362']
// BB 0x1409be39b-0x1409be3bd size=34 type=0 succ=['0x1409be3bd'] pred=['0x1409be36f']
// BB 0x1409be3bd-0x1409be3ec size=47 type=0 succ=['0x1409be3ec', '0x1409bfc8c'] pred=['0x1409be39b']
// BB 0x1409be3ec-0x1409be3f1 size=5 type=0 succ=['0x1409be3f1', '0x1409be411'] pred=['0x1409be3bd']
// BB 0x1409be3f1-0x1409be411 size=32 type=0 succ=['0x1409be411'] pred=['0x1409be3ec', '0x1409bfc8c']
// BB 0x1409be411-0x1409be427 size=22 type=0 succ=['0x1409be427', '0x1409be43a'] pred=['0x1409be3ec', '0x1409be3f1']
// BB 0x1409be427-0x1409be43a size=19 type=0 succ=['0x1409be43a'] pred=['0x1409be411']
// BB 0x1409be43a-0x1409be47a size=64 type=0 succ=['0x1409be47a', '0x1409c0813'] pred=['0x1409be411', '0x1409be427']
// BB 0x1409be47a-0x1409be4a4 size=42 type=0 succ=['0x1409be4a4'] pred=['0x1409be43a']
// BB 0x1409be4a4-0x1409be4c5 size=33 type=0 succ=['0x1409be4c5', '0x1409bfcb7'] pred=['0x1409be47a']
// BB 0x1409be4c5-0x1409be517 size=82 type=0 succ=['0x1409be517', '0x1409be524'] pred=['0x1409be4a4']
// BB 0x1409be517-0x1409be524 size=13 type=0 succ=['0x1409be524'] pred=['0x1409be4c5']
// BB 0x1409be524-0x1409be541 size=29 type=0 succ=['0x1409be541', '0x1409c0828'] pred=['0x1409be4c5', '0x1409be517']
// BB 0x1409be541-0x1409be5ac size=107 type=0 succ=['0x1409be5ac', '0x1409be5b9'] pred=['0x1409be524']
// BB 0x1409be5ac-0x1409be5b9 size=13 type=0 succ=['0x1409be5b9'] pred=['0x1409be541']
// BB 0x1409be5b9-0x1409be5d6 size=29 type=0 succ=['0x1409be5d6', '0x1409c083d'] pred=['0x1409be541', '0x1409be5ac']
// BB 0x1409be5d6-0x1409be60e size=56 type=0 succ=['0x1409be60e'] pred=['0x1409be5b9']
// BB 0x1409be60e-0x1409be62f size=33 type=0 succ=['0x1409be62f', '0x1409bfcf6'] pred=['0x1409be5d6']
// BB 0x1409be62f-0x1409be681 size=82 type=0 succ=['0x1409be681', '0x1409be68e'] pred=['0x1409be60e']
// BB 0x1409be681-0x1409be68e size=13 type=0 succ=['0x1409be68e'] pred=['0x1409be62f']
// BB 0x1409be68e-0x1409be6ab size=29 type=0 succ=['0x1409be6ab', '0x1409c0852'] pred=['0x1409be62f', '0x1409be681']
// BB 0x1409be6ab-0x1409be701 size=86 type=0 succ=['0x1409be701', '0x1409c0867'] pred=['0x1409be68e']
// BB 0x1409be701-0x1409be72b size=42 type=0 succ=['0x1409be72b'] pred=['0x1409be6ab']
// BB 0x1409be72b-0x1409be74c size=33 type=0 succ=['0x1409be74c', '0x1409bfd35'] pred=['0x1409be701']
// BB 0x1409be74c-0x1409be79e size=82 type=0 succ=['0x1409be79e', '0x1409be7ab'] pred=['0x1409be72b']
// BB 0x1409be79e-0x1409be7ab size=13 type=0 succ=['0x1409be7ab'] pred=['0x1409be74c']
// BB 0x1409be7ab-0x1409be7c8 size=29 type=0 succ=['0x1409be7c8', '0x1409c087c'] pred=['0x1409be74c', '0x1409be79e']
// BB 0x1409be7c8-0x1409be7f5 size=45 type=0 succ=['0x1409be7f5'] pred=['0x1409be7ab']
// BB 0x1409be7f5-0x1409be813 size=30 type=0 succ=['0x1409be813', '0x1409bfd74'] pred=['0x1409be7c8']
// BB 0x1409be813-0x1409be865 size=82 type=0 succ=['0x1409be865', '0x1409be872'] pred=['0x1409be7f5']
// BB 0x1409be865-0x1409be872 size=13 type=0 succ=['0x1409be872'] pred=['0x1409be813']
// BB 0x1409be872-0x1409be88f size=29 type=0 succ=['0x1409be88f', '0x1409c0891'] pred=['0x1409be813', '0x1409be865']
// BB 0x1409be88f-0x1409be8bf size=48 type=0 succ=['0x1409be8bf'] pred=['0x1409be872']
// BB 0x1409be8bf-0x1409be8e0 size=33 type=0 succ=['0x1409be8e0', '0x1409bfdb3'] pred=['0x1409be88f']
// BB 0x1409be8e0-0x1409be932 size=82 type=0 succ=['0x1409be932', '0x1409be93f'] pred=['0x1409be8bf']
// BB 0x1409be932-0x1409be93f size=13 type=0 succ=['0x1409be93f'] pred=['0x1409be8e0']
// BB 0x1409be93f-0x1409be96b size=44 type=0 succ=['0x1409be96b'] pred=['0x1409be8e0', '0x1409be932']
// BB 0x1409be96b-0x1409be999 size=46 type=0 succ=['0x1409be999', '0x1409be9a6'] pred=['0x1409be93f']
// BB 0x1409be999-0x1409be9a6 size=13 type=0 succ=['0x1409be9a6'] pred=['0x1409be96b']
// BB 0x1409be9a6-0x1409be9cb size=37 type=0 succ=['0x1409be9cb'] pred=['0x1409be96b', '0x1409be999']
// BB 0x1409be9cb-0x1409be9ed size=34 type=0 succ=['0x1409be9ed'] pred=['0x1409be9a6']
// BB 0x1409be9ed-0x1409bea15 size=40 type=0 succ=['0x1409bea15', '0x1409bfdf2'] pred=['0x1409be9cb']
// BB 0x1409bea15-0x1409bea1a size=5 type=0 succ=['0x1409bea1a', '0x1409bea36'] pred=['0x1409be9ed']
// BB 0x1409bea1a-0x1409bea36 size=28 type=0 succ=['0x1409bea36'] pred=['0x1409bea15', '0x1409bfdf2']
// BB 0x1409bea36-0x1409bea4c size=22 type=0 succ=['0x1409bea4c', '0x1409bea5b'] pred=['0x1409bea15', '0x1409bea1a']
// BB 0x1409bea4c-0x1409bea5b size=15 type=0 succ=['0x1409bea5b'] pred=['0x1409bea36']
// BB 0x1409bea5b-0x1409bea9b size=64 type=0 succ=['0x1409bea9b', '0x1409c08a6'] pred=['0x1409bea36', '0x1409bea4c']
// BB 0x1409bea9b-0x1409beac5 size=42 type=0 succ=['0x1409beac5'] pred=['0x1409bea5b']
// BB 0x1409beac5-0x1409beae6 size=33 type=0 succ=['0x1409beae6', '0x1409bfe2b'] pred=['0x1409bea9b']
// BB 0x1409beae6-0x1409beb38 size=82 type=0 succ=['0x1409beb38', '0x1409beb45'] pred=['0x1409beac5']
// BB 0x1409beb38-0x1409beb45 size=13 type=0 succ=['0x1409beb45'] pred=['0x1409beae6']
// BB 0x1409beb45-0x1409beb62 size=29 type=0 succ=['0x1409beb62', '0x1409c08bb'] pred=['0x1409beae6', '0x1409beb38']
// BB 0x1409beb62-0x1409beb92 size=48 type=0 succ=['0x1409beb92'] pred=['0x1409beb45']
// BB 0x1409beb92-0x1409bebb3 size=33 type=0 succ=['0x1409bebb3', '0x1409bfe6a'] pred=['0x1409beb62']
// BB 0x1409bebb3-0x1409bec05 size=82 type=0 succ=['0x1409bec05', '0x1409bec12'] pred=['0x1409beb92']
// BB 0x1409bec05-0x1409bec12 size=13 type=0 succ=['0x1409bec12'] pred=['0x1409bebb3']
// BB 0x1409bec12-0x1409bec2f size=29 type=0 succ=['0x1409bec2f', '0x1409c08d0'] pred=['0x1409bebb3', '0x1409bec05']
// BB 0x1409bec2f-0x1409bec5f size=48 type=0 succ=['0x1409bec5f'] pred=['0x1409bec12']
// BB 0x1409bec5f-0x1409bec80 size=33 type=0 succ=['0x1409bec80', '0x1409bfea9'] pred=['0x1409bec2f']
// BB 0x1409bec80-0x1409becd2 size=82 type=0 succ=['0x1409becd2', '0x1409becdf'] pred=['0x1409bec5f']
// BB 0x1409becd2-0x1409becdf size=13 type=0 succ=['0x1409becdf'] pred=['0x1409bec80']
// BB 0x1409becdf-0x1409bed08 size=41 type=0 succ=['0x1409bed08'] pred=['0x1409bec80', '0x1409becd2']
// BB 0x1409bed08-0x1409bed1d size=21 type=0 succ=['0x1409bd89c'] pred=['0x1409becdf']
// BB 0x1409bed1d-0x1409bed59 size=60 type=0 succ=['0x1409b8010'] pred=['0x1409b7fe3']
// BB 0x1409bed59-0x1409bed67 size=14 type=0 succ=['0x1409bed67'] pred=['0x1409b8415']
// BB 0x1409bed67-0x1409bed92 size=43 type=4 succ=[] pred=['0x1409bed59']
// BB 0x1409bed93-0x1409bed98 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bed98-0x1409beda6 size=14 type=0 succ=['0x1409beda6'] pred=['0x1409b8589']
// BB 0x1409beda6-0x1409bedd1 size=43 type=4 succ=[] pred=['0x1409bed98']
// BB 0x1409bedd2-0x1409bedd7 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bedd7-0x1409bede5 size=14 type=0 succ=['0x1409bede5'] pred=['0x1409b8676']
// BB 0x1409bede5-0x1409bee10 size=43 type=4 succ=[] pred=['0x1409bedd7']
// BB 0x1409bee11-0x1409bee16 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bee16-0x1409bee4f size=57 type=0 succ=['0x1409b8792'] pred=['0x1409b8765']
// BB 0x1409bee4f-0x1409bee5d size=14 type=0 succ=['0x1409bee5d'] pred=['0x1409b883d']
// BB 0x1409bee5d-0x1409bee88 size=43 type=4 succ=[] pred=['0x1409bee4f']
// BB 0x1409bee89-0x1409bee8e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bee8e-0x1409bee9c size=14 type=0 succ=['0x1409bee9c'] pred=['0x1409b8903']
// BB 0x1409bee9c-0x1409beec7 size=43 type=4 succ=[] pred=['0x1409bee8e']
// BB 0x1409beec8-0x1409beecd size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409beecd-0x1409beedb size=14 type=0 succ=['0x1409beedb'] pred=['0x1409b89d0']
// BB 0x1409beedb-0x1409bef06 size=43 type=4 succ=[] pred=['0x1409beecd']
// BB 0x1409bef07-0x1409bef0c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bef0c-0x1409bef1a size=14 type=0 succ=['0x1409bef1a'] pred=['0x1409b8aa5']
// BB 0x1409bef1a-0x1409bef45 size=43 type=4 succ=[] pred=['0x1409bef0c']
// BB 0x1409bef46-0x1409bef4b size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bef4b-0x1409bef59 size=14 type=0 succ=['0x1409bef59'] pred=['0x1409b8b65']
// BB 0x1409bef59-0x1409bef84 size=43 type=4 succ=[] pred=['0x1409bef4b']
// BB 0x1409bef85-0x1409bef8a size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bef8a-0x1409bef98 size=14 type=0 succ=['0x1409bef98'] pred=['0x1409b8c2a']
// BB 0x1409bef98-0x1409befc3 size=43 type=4 succ=[] pred=['0x1409bef8a']
// BB 0x1409befc4-0x1409befc9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409befc9-0x1409befd7 size=14 type=0 succ=['0x1409befd7'] pred=['0x1409b8e79']
// BB 0x1409befd7-0x1409befe3 size=12 type=4 succ=[] pred=['0x1409befc9']
// BB 0x1409befe4-0x1409befe9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409befe9-0x1409beff7 size=14 type=0 succ=['0x1409beff7'] pred=['0x1409b8f54']
// BB 0x1409beff7-0x1409bf022 size=43 type=4 succ=[] pred=['0x1409befe9']
// BB 0x1409bf023-0x1409bf028 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf028-0x1409bf036 size=14 type=0 succ=['0x1409bf036'] pred=['0x1409b90c1']
// BB 0x1409bf036-0x1409bf061 size=43 type=4 succ=[] pred=['0x1409bf028']
// BB 0x1409bf062-0x1409bf067 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf067-0x1409bf075 size=14 type=0 succ=['0x1409bf075'] pred=['0x1409b9188']
// BB 0x1409bf075-0x1409bf0a0 size=43 type=4 succ=[] pred=['0x1409bf067']
// BB 0x1409bf0a1-0x1409bf0a6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf0a6-0x1409bf0d9 size=51 type=0 succ=['0x1409b927f'] pred=['0x1409b9252']
// BB 0x1409bf0d9-0x1409bf0e0 size=7 type=0 succ=['0x1409bf0e0'] pred=['0x1409b813a']
// BB 0x1409bf0e0-0x1409bf0e8 size=8 type=4 succ=[] pred=['0x1409bf0d9']
// BB 0x1409bf0e9-0x1409bf0ee size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf0ee-0x1409bf119 size=43 type=4 succ=[] pred=['0x1409b984d']
// BB 0x1409bf11a-0x1409bf11f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf11f-0x1409bf126 size=7 type=0 succ=['0x1409bf126'] pred=['0x1409b9fda']
// BB 0x1409bf126-0x1409bf12e size=8 type=4 succ=[] pred=['0x1409bf11f']
// BB 0x1409bf12f-0x1409bf134 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf134-0x1409bf13f size=11 type=0 succ=['0x1409bf13f'] pred=['0x1409ba076']
// BB 0x1409bf13f-0x1409bf148 size=9 type=4 succ=[] pred=['0x1409bf134']
// BB 0x1409bf149-0x1409bf14e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf14e-0x1409bf155 size=7 type=0 succ=['0x1409bf155'] pred=['0x1409ba10d']
// BB 0x1409bf155-0x1409bf15e size=9 type=4 succ=[] pred=['0x1409bf14e']
// BB 0x1409bf15f-0x1409bf164 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf164-0x1409bf172 size=14 type=0 succ=['0x1409bf172'] pred=['0x1409ba1c1']
// BB 0x1409bf172-0x1409bf19d size=43 type=4 succ=[] pred=['0x1409bf164']
// BB 0x1409bf19e-0x1409bf1a3 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf1a3-0x1409bf1b1 size=14 type=0 succ=['0x1409bf1b1'] pred=['0x1409ba33d']
// BB 0x1409bf1b1-0x1409bf1dc size=43 type=4 succ=[] pred=['0x1409bf1a3']
// BB 0x1409bf1dd-0x1409bf1e2 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf1e2-0x1409bf1f0 size=14 type=0 succ=['0x1409bf1f0'] pred=['0x1409ba45a']
// BB 0x1409bf1f0-0x1409bf21b size=43 type=4 succ=[] pred=['0x1409bf1e2']
// BB 0x1409bf21c-0x1409bf221 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf221-0x1409bf22f size=14 type=0 succ=['0x1409bf22f'] pred=['0x1409ba524']
// BB 0x1409bf22f-0x1409bf25a size=43 type=4 succ=[] pred=['0x1409bf221']
// BB 0x1409bf25b-0x1409bf260 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf260-0x1409bf26e size=14 type=0 succ=['0x1409bf26e'] pred=['0x1409ba5ee']
// BB 0x1409bf26e-0x1409bf299 size=43 type=4 succ=[] pred=['0x1409bf260']
// BB 0x1409bf29a-0x1409bf29f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf29f-0x1409bf2ca size=43 type=0 succ=['0x1409ba884'] pred=['0x1409ba850']
// BB 0x1409bf2ca-0x1409bf2d8 size=14 type=0 succ=['0x1409bf2d8'] pred=['0x1409ba977']
// BB 0x1409bf2d8-0x1409bf303 size=43 type=4 succ=[] pred=['0x1409bf2ca']
// BB 0x1409bf304-0x1409bf309 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf309-0x1409bf317 size=14 type=0 succ=['0x1409bf317'] pred=['0x1409baaef']
// BB 0x1409bf317-0x1409bf342 size=43 type=4 succ=[] pred=['0x1409bf309']
// BB 0x1409bf343-0x1409bf348 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf348-0x1409bf356 size=14 type=0 succ=['0x1409bf356'] pred=['0x1409bacac']
// BB 0x1409bf356-0x1409bf381 size=43 type=4 succ=[] pred=['0x1409bf348']
// BB 0x1409bf382-0x1409bf387 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf387-0x1409bf395 size=14 type=0 succ=['0x1409bf395'] pred=['0x1409bad73']
// BB 0x1409bf395-0x1409bf3c0 size=43 type=4 succ=[] pred=['0x1409bf387']
// BB 0x1409bf3c1-0x1409bf3c6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf3c6-0x1409bf3f1 size=43 type=0 succ=['0x1409baed9'] pred=['0x1409baea5']
// BB 0x1409bf3f1-0x1409bf3f8 size=7 type=0 succ=['0x1409bf3f8'] pred=['0x1409bc102']
// BB 0x1409bf3f8-0x1409bf407 size=15 type=4 succ=[] pred=['0x1409bf3f1']
// BB 0x1409bf408-0x1409bf40d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf40d-0x1409bf41b size=14 type=0 succ=['0x1409bf41b'] pred=['0x1409baf99']
// BB 0x1409bf41b-0x1409bf446 size=43 type=4 succ=[] pred=['0x1409bf40d']
// BB 0x1409bf447-0x1409bf44c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf44c-0x1409bf45a size=14 type=0 succ=['0x1409bf45a'] pred=['0x1409bb111']
// BB 0x1409bf45a-0x1409bf485 size=43 type=4 succ=[] pred=['0x1409bf44c']
// BB 0x1409bf486-0x1409bf48b size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf48b-0x1409bf499 size=14 type=0 succ=['0x1409bf499'] pred=['0x1409bb27c']
// BB 0x1409bf499-0x1409bf4c4 size=43 type=4 succ=[] pred=['0x1409bf48b']
// BB 0x1409bf4c5-0x1409bf4ca size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf4ca-0x1409bf503 size=57 type=0 succ=['0x1409bb374'] pred=['0x1409bb347']
// BB 0x1409bf503-0x1409bf52e size=43 type=4 succ=[] pred=['0x1409b9599']
// BB 0x1409bf52f-0x1409bf534 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf534-0x1409bf542 size=14 type=0 succ=['0x1409bf542'] pred=['0x1409bbb81']
// BB 0x1409bf542-0x1409bf56d size=43 type=4 succ=[] pred=['0x1409bf534']
// BB 0x1409bf56e-0x1409bf573 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf573-0x1409bf581 size=14 type=0 succ=['0x1409bf581'] pred=['0x1409bbcf3']
// BB 0x1409bf581-0x1409bf5ac size=43 type=4 succ=[] pred=['0x1409bf573']
// BB 0x1409bf5ad-0x1409bf5b2 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf5b2-0x1409bf5c0 size=14 type=0 succ=['0x1409bf5c0'] pred=['0x1409bbe04']
// BB 0x1409bf5c0-0x1409bf5eb size=43 type=4 succ=[] pred=['0x1409bf5b2']
// BB 0x1409bf5ec-0x1409bf5f1 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf5f1-0x1409bf5ff size=14 type=0 succ=['0x1409bf5ff'] pred=['0x1409bbed1']
// BB 0x1409bf5ff-0x1409bf62a size=43 type=4 succ=[] pred=['0x1409bf5f1']
// BB 0x1409bf62b-0x1409bf630 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf630-0x1409bf63e size=14 type=0 succ=['0x1409bf63e'] pred=['0x1409bbf98']
// BB 0x1409bf63e-0x1409bf669 size=43 type=4 succ=[] pred=['0x1409bf630']
// BB 0x1409bf66a-0x1409bf66f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf66f-0x1409bf67d size=14 type=0 succ=['0x1409bf67d'] pred=['0x1409bc065']
// BB 0x1409bf67d-0x1409bf6a8 size=43 type=4 succ=[] pred=['0x1409bf66f']
// BB 0x1409bf6a9-0x1409bf6ae size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf6ae-0x1409bf6bc size=14 type=0 succ=['0x1409bf6bc'] pred=['0x1409bc1ad']
// BB 0x1409bf6bc-0x1409bf6e7 size=43 type=4 succ=[] pred=['0x1409bf6ae']
// BB 0x1409bf6e8-0x1409bf6ed size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf6ed-0x1409bf6fb size=14 type=0 succ=['0x1409bf6fb'] pred=['0x1409bc274']
// BB 0x1409bf6fb-0x1409bf726 size=43 type=4 succ=[] pred=['0x1409bf6ed']
// BB 0x1409bf727-0x1409bf72c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf72c-0x1409bf757 size=43 type=0 succ=['0x1409bc47d'] pred=['0x1409bc449']
// BB 0x1409bf757-0x1409bf765 size=14 type=0 succ=['0x1409bf765'] pred=['0x1409bc530']
// BB 0x1409bf765-0x1409bf790 size=43 type=4 succ=[] pred=['0x1409bf757']
// BB 0x1409bf791-0x1409bf796 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf796-0x1409bf7a4 size=14 type=0 succ=['0x1409bf7a4'] pred=['0x1409bc69a']
// BB 0x1409bf7a4-0x1409bf7cf size=43 type=4 succ=[] pred=['0x1409bf796']
// BB 0x1409bf7d0-0x1409bf7d5 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf7d5-0x1409bf7e3 size=14 type=0 succ=['0x1409bf7e3'] pred=['0x1409bc857']
// BB 0x1409bf7e3-0x1409bf80e size=43 type=4 succ=[] pred=['0x1409bf7d5']
// BB 0x1409bf80f-0x1409bf814 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf814-0x1409bf822 size=14 type=0 succ=['0x1409bf822'] pred=['0x1409bc91e']
// BB 0x1409bf822-0x1409bf84d size=43 type=4 succ=[] pred=['0x1409bf814']
// BB 0x1409bf84e-0x1409bf853 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf853-0x1409bf88c size=57 type=0 succ=['0x1409bcb27'] pred=['0x1409bcafa']
// BB 0x1409bf88c-0x1409bf893 size=7 type=0 succ=['0x1409bf893'] pred=['0x1409bcbeb']
// BB 0x1409bf893-0x1409bf89b size=8 type=4 succ=[] pred=['0x1409bf88c']
// BB 0x1409bf89c-0x1409bf8a1 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf8a1-0x1409bf8af size=14 type=0 succ=['0x1409bf8af'] pred=['0x1409bcc8c']
// BB 0x1409bf8af-0x1409bf8b8 size=9 type=4 succ=[] pred=['0x1409bf8a1']
// BB 0x1409bf8b9-0x1409bf8be size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf8be-0x1409bf8cc size=14 type=0 succ=['0x1409bf8cc'] pred=['0x1409bccdf']
// BB 0x1409bf8cc-0x1409bf8d4 size=8 type=4 succ=[] pred=['0x1409bf8be']
// BB 0x1409bf8d5-0x1409bf8da size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf8da-0x1409bf8e8 size=14 type=0 succ=['0x1409bf8e8'] pred=['0x1409bcee1']
// BB 0x1409bf8e8-0x1409bf913 size=43 type=4 succ=[] pred=['0x1409bf8da']
// BB 0x1409bf914-0x1409bf919 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf919-0x1409bf927 size=14 type=0 succ=['0x1409bf927'] pred=['0x1409bcfb5']
// BB 0x1409bf927-0x1409bf952 size=43 type=4 succ=[] pred=['0x1409bf919']
// BB 0x1409bf953-0x1409bf958 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf958-0x1409bf966 size=14 type=0 succ=['0x1409bf966'] pred=['0x1409bd082']
// BB 0x1409bf966-0x1409bf991 size=43 type=4 succ=[] pred=['0x1409bf958']
// BB 0x1409bf992-0x1409bf997 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf997-0x1409bf9a5 size=14 type=0 succ=['0x1409bf9a5'] pred=['0x1409bd15b']
// BB 0x1409bf9a5-0x1409bf9d0 size=43 type=4 succ=[] pred=['0x1409bf997']
// BB 0x1409bf9d1-0x1409bf9d6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bf9d6-0x1409bf9e4 size=14 type=0 succ=['0x1409bf9e4'] pred=['0x1409bd22d']
// BB 0x1409bf9e4-0x1409bfa0f size=43 type=4 succ=[] pred=['0x1409bf9d6']
// BB 0x1409bfa10-0x1409bfa15 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfa15-0x1409bfa23 size=14 type=0 succ=['0x1409bfa23'] pred=['0x1409bd2ff']
// BB 0x1409bfa23-0x1409bfa4e size=43 type=4 succ=[] pred=['0x1409bfa15']
// BB 0x1409bfa4f-0x1409bfa54 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfa54-0x1409bfa62 size=14 type=0 succ=['0x1409bfa62'] pred=['0x1409bd424']
// BB 0x1409bfa62-0x1409bfa8d size=43 type=4 succ=[] pred=['0x1409bfa54']
// BB 0x1409bfa8e-0x1409bfa93 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfa93-0x1409bfaa1 size=14 type=0 succ=['0x1409bfaa1'] pred=['0x1409bd599']
// BB 0x1409bfaa1-0x1409bfacc size=43 type=4 succ=[] pred=['0x1409bfa93']
// BB 0x1409bfacd-0x1409bfad2 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfad2-0x1409bfae0 size=14 type=0 succ=['0x1409bfae0'] pred=['0x1409bd65d']
// BB 0x1409bfae0-0x1409bfb0b size=43 type=4 succ=[] pred=['0x1409bfad2']
// BB 0x1409bfb0c-0x1409bfb11 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfb11-0x1409bfb51 size=64 type=0 succ=['0x1409bd75f'] pred=['0x1409bd72b']
// BB 0x1409bfb51-0x1409bfb5f size=14 type=0 succ=['0x1409bfb5f'] pred=['0x1409bde5f']
// BB 0x1409bfb5f-0x1409bfb8a size=43 type=4 succ=[] pred=['0x1409bfb51']
// BB 0x1409bfb8b-0x1409bfb90 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfb90-0x1409bfb9e size=14 type=0 succ=['0x1409bfb9e'] pred=['0x1409bdfd7']
// BB 0x1409bfb9e-0x1409bfbc9 size=43 type=4 succ=[] pred=['0x1409bfb90']
// BB 0x1409bfbca-0x1409bfbcf size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfbcf-0x1409bfbdd size=14 type=0 succ=['0x1409bfbdd'] pred=['0x1409be0f4']
// BB 0x1409bfbdd-0x1409bfc08 size=43 type=4 succ=[] pred=['0x1409bfbcf']
// BB 0x1409bfc09-0x1409bfc0e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfc0e-0x1409bfc1c size=14 type=0 succ=['0x1409bfc1c'] pred=['0x1409be1be']
// BB 0x1409bfc1c-0x1409bfc47 size=43 type=4 succ=[] pred=['0x1409bfc0e']
// BB 0x1409bfc48-0x1409bfc4d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfc4d-0x1409bfc5b size=14 type=0 succ=['0x1409bfc5b'] pred=['0x1409be288']
// BB 0x1409bfc5b-0x1409bfc86 size=43 type=4 succ=[] pred=['0x1409bfc4d']
// BB 0x1409bfc87-0x1409bfc8c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfc8c-0x1409bfcb7 size=43 type=0 succ=['0x1409be3f1'] pred=['0x1409be3bd']
// BB 0x1409bfcb7-0x1409bfcc5 size=14 type=0 succ=['0x1409bfcc5'] pred=['0x1409be4a4']
// BB 0x1409bfcc5-0x1409bfcf0 size=43 type=4 succ=[] pred=['0x1409bfcb7']
// BB 0x1409bfcf1-0x1409bfcf6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfcf6-0x1409bfd04 size=14 type=0 succ=['0x1409bfd04'] pred=['0x1409be60e']
// BB 0x1409bfd04-0x1409bfd2f size=43 type=4 succ=[] pred=['0x1409bfcf6']
// BB 0x1409bfd30-0x1409bfd35 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfd35-0x1409bfd43 size=14 type=0 succ=['0x1409bfd43'] pred=['0x1409be72b']
// BB 0x1409bfd43-0x1409bfd6e size=43 type=4 succ=[] pred=['0x1409bfd35']
// BB 0x1409bfd6f-0x1409bfd74 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfd74-0x1409bfd82 size=14 type=0 succ=['0x1409bfd82'] pred=['0x1409be7f5']
// BB 0x1409bfd82-0x1409bfdad size=43 type=4 succ=[] pred=['0x1409bfd74']
// BB 0x1409bfdae-0x1409bfdb3 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfdb3-0x1409bfdc1 size=14 type=0 succ=['0x1409bfdc1'] pred=['0x1409be8bf']
// BB 0x1409bfdc1-0x1409bfdec size=43 type=4 succ=[] pred=['0x1409bfdb3']
// BB 0x1409bfded-0x1409bfdf2 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfdf2-0x1409bfe2b size=57 type=0 succ=['0x1409bea1a'] pred=['0x1409be9ed']
// BB 0x1409bfe2b-0x1409bfe39 size=14 type=0 succ=['0x1409bfe39'] pred=['0x1409beac5']
// BB 0x1409bfe39-0x1409bfe64 size=43 type=4 succ=[] pred=['0x1409bfe2b']
// BB 0x1409bfe65-0x1409bfe6a size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfe6a-0x1409bfe78 size=14 type=0 succ=['0x1409bfe78'] pred=['0x1409beb92']
// BB 0x1409bfe78-0x1409bfea3 size=43 type=4 succ=[] pred=['0x1409bfe6a']
// BB 0x1409bfea4-0x1409bfea9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfea9-0x1409bfeb7 size=14 type=0 succ=['0x1409bfeb7'] pred=['0x1409bec5f']
// BB 0x1409bfeb7-0x1409bfee2 size=43 type=4 succ=[] pred=['0x1409bfea9']
// BB 0x1409bfee3-0x1409bfee8 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bfee8-0x1409bff10 size=40 type=0 succ=['0x1409bb515'] pred=['0x1409bb4f1']
// BB 0x1409bff10-0x1409bff3b size=43 type=0 succ=['0x1409b9b1b'] pred=['0x1409b9b01']
// BB 0x1409bff3b-0x1409bff60 size=37 type=0 succ=['0x1409bb5cd'] pred=['0x1409bb5b9']
// BB 0x1409bff60-0x1409bff88 size=40 type=0 succ=['0x1409bd969'] pred=['0x1409bd955']
// BB 0x1409bff88-0x1409bff96 size=14 type=0 succ=['0x1409bff96'] pred=['0x1409b9b94']
// BB 0x1409bff96-0x1409bffc1 size=43 type=4 succ=[] pred=['0x1409bff88']
// BB 0x1409bffc2-0x1409bffc7 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409bffc7-0x1409bffd5 size=14 type=0 succ=['0x1409bffd5'] pred=['0x1409bb640']
// BB 0x1409bffd5-0x1409c0000 size=43 type=4 succ=[] pred=['0x1409bffc7']
// BB 0x1409c0001-0x1409c0006 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0006-0x1409c0014 size=14 type=0 succ=['0x1409c0014'] pred=['0x1409b9d0e']
// BB 0x1409c0014-0x1409c003f size=43 type=4 succ=[] pred=['0x1409c0006']
// BB 0x1409c0040-0x1409c0045 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0045-0x1409c0053 size=14 type=0 succ=['0x1409c0053'] pred=['0x1409bb7b7']
// BB 0x1409c0053-0x1409c007e size=43 type=4 succ=[] pred=['0x1409c0045']
// BB 0x1409c007f-0x1409c0084 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0084-0x1409c0092 size=14 type=0 succ=['0x1409c0092'] pred=['0x1409b9e72']
// BB 0x1409c0092-0x1409c00bd size=43 type=4 succ=[] pred=['0x1409c0084']
// BB 0x1409c00be-0x1409c00c3 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c00c3-0x1409c00d1 size=14 type=0 succ=['0x1409c00d1'] pred=['0x1409bb91b']
// BB 0x1409c00d1-0x1409c00fc size=43 type=4 succ=[] pred=['0x1409c00c3']
// BB 0x1409c00fd-0x1409c0102 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0102-0x1409c012d size=43 type=0 succ=['0x1409b9f77'] pred=['0x1409b9f43']
// BB 0x1409c012d-0x1409c0158 size=43 type=0 succ=['0x1409bba20'] pred=['0x1409bb9ec']
// BB 0x1409c0158-0x1409c0166 size=14 type=0 succ=['0x1409c0166'] pred=['0x1409bd9e6']
// BB 0x1409c0166-0x1409c0191 size=43 type=4 succ=[] pred=['0x1409c0158']
// BB 0x1409c0192-0x1409c0197 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0197-0x1409c01a5 size=14 type=0 succ=['0x1409c01a5'] pred=['0x1409bdb56']
// BB 0x1409c01a5-0x1409c01d0 size=43 type=4 succ=[] pred=['0x1409c0197']
// BB 0x1409c01d1-0x1409c01d6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c01d6-0x1409c01e4 size=14 type=0 succ=['0x1409c01e4'] pred=['0x1409bdc1d']
// BB 0x1409c01e4-0x1409c020f size=43 type=4 succ=[] pred=['0x1409c01d6']
// BB 0x1409c0210-0x1409c0215 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0215-0x1409c0240 size=43 type=0 succ=['0x1409bdd22'] pred=['0x1409bdcee']
// BB 0x1409c0240-0x1409c024f size=15 type=4 succ=[] pred=['0x1409b8372']
// BB 0x1409c0250-0x1409c0255 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0255-0x1409c0264 size=15 type=4 succ=[] pred=['0x1409b8495']
// BB 0x1409c0265-0x1409c026a size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c026a-0x1409c0279 size=15 type=4 succ=[] pred=['0x1409b853b']
// BB 0x1409c027a-0x1409c027f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c027f-0x1409c028e size=15 type=4 succ=[] pred=['0x1409b8609']
// BB 0x1409c028f-0x1409c0294 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0294-0x1409c02a3 size=15 type=4 succ=[] pred=['0x1409b87d3']
// BB 0x1409c02a4-0x1409c02a9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c02a9-0x1409c02b8 size=15 type=4 succ=[] pred=['0x1409b88bd']
// BB 0x1409c02b9-0x1409c02be size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c02be-0x1409c02cd size=15 type=4 succ=[] pred=['0x1409b8983']
// BB 0x1409c02ce-0x1409c02d3 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c02d3-0x1409c02e2 size=15 type=4 succ=[] pred=['0x1409b8a50']
// BB 0x1409c02e3-0x1409c02e8 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c02e8-0x1409c02f7 size=15 type=4 succ=[] pred=['0x1409b8b1e']
// BB 0x1409c02f8-0x1409c02fd size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c02fd-0x1409c030c size=15 type=4 succ=[] pred=['0x1409b8be2']
// BB 0x1409c030d-0x1409c0312 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0312-0x1409c0321 size=15 type=4 succ=[] pred=['0x1409b8edd']
// BB 0x1409c0322-0x1409c0327 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0327-0x1409c0336 size=15 type=4 succ=[] pred=['0x1409b8fd4']
// BB 0x1409c0337-0x1409c033c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c033c-0x1409c034b size=15 type=4 succ=[] pred=['0x1409b9073']
// BB 0x1409c034c-0x1409c0351 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0351-0x1409c0360 size=15 type=4 succ=[] pred=['0x1409b9141']
// BB 0x1409c0361-0x1409c0366 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0366-0x1409c0375 size=15 type=4 succ=[] pred=['0x1409ba160']
// BB 0x1409c0376-0x1409c037b size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c037b-0x1409c038a size=15 type=4 succ=[] pred=['0x1409ba241']
// BB 0x1409c038b-0x1409c0390 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0390-0x1409c039f size=15 type=4 succ=[] pred=['0x1409ba2e4']
// BB 0x1409c03a0-0x1409c03a5 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c03a5-0x1409c03b4 size=15 type=4 succ=[] pred=['0x1409ba3bd']
// BB 0x1409c03b5-0x1409c03ba size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c03ba-0x1409c03c9 size=15 type=4 succ=[] pred=['0x1409ba3da']
// BB 0x1409c03ca-0x1409c03cf size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c03cf-0x1409c03de size=15 type=4 succ=[] pred=['0x1409ba4da']
// BB 0x1409c03df-0x1409c03e4 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c03e4-0x1409c03f3 size=15 type=4 succ=[] pred=['0x1409ba5a1']
// BB 0x1409c03f4-0x1409c03f9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c03f9-0x1409c0408 size=15 type=4 succ=[] pred=['0x1409ba66e']
// BB 0x1409c0409-0x1409c040e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c040e-0x1409c041d size=15 type=4 succ=[] pred=['0x1409ba715']
// BB 0x1409c041e-0x1409c0423 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0423-0x1409c0432 size=15 type=4 succ=[] pred=['0x1409ba91a']
// BB 0x1409c0433-0x1409c0438 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0438-0x1409c0447 size=15 type=4 succ=[] pred=['0x1409ba9f7']
// BB 0x1409c0448-0x1409c044d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c044d-0x1409c045c size=15 type=4 succ=[] pred=['0x1409baa9a']
// BB 0x1409c045d-0x1409c0462 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0462-0x1409c0471 size=15 type=4 succ=[] pred=['0x1409bab6f']
// BB 0x1409c0472-0x1409c0477 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0477-0x1409c0486 size=15 type=4 succ=[] pred=['0x1409bac0f']
// BB 0x1409c0487-0x1409c048c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c048c-0x1409c049b size=15 type=4 succ=[] pred=['0x1409bac2c']
// BB 0x1409c049c-0x1409c04a1 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c04a1-0x1409c04b0 size=15 type=4 succ=[] pred=['0x1409bad2c']
// BB 0x1409c04b1-0x1409c04b6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c04b6-0x1409c04c5 size=15 type=4 succ=[] pred=['0x1409baf3c']
// BB 0x1409c04c6-0x1409c04cb size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c04cb-0x1409c04da size=15 type=4 succ=[] pred=['0x1409bb019']
// BB 0x1409c04db-0x1409c04e0 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c04e0-0x1409c04ef size=15 type=4 succ=[] pred=['0x1409bb0bc']
// BB 0x1409c04f0-0x1409c04f5 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c04f5-0x1409c0504 size=15 type=4 succ=[] pred=['0x1409bb191']
// BB 0x1409c0505-0x1409c050a size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c050a-0x1409c0519 size=15 type=4 succ=[] pred=['0x1409bb231']
// BB 0x1409c051a-0x1409c051f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c051f-0x1409c052e size=15 type=4 succ=[] pred=['0x1409bbb12']
// BB 0x1409c052f-0x1409c0534 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0534-0x1409c0543 size=15 type=4 succ=[] pred=['0x1409bbbfe']
// BB 0x1409c0544-0x1409c0549 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0549-0x1409c0558 size=15 type=4 succ=[] pred=['0x1409bbc9a']
// BB 0x1409c0559-0x1409c055e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c055e-0x1409c056d size=15 type=4 succ=[] pred=['0x1409bbd70']
// BB 0x1409c056e-0x1409c0573 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0573-0x1409c0582 size=15 type=4 succ=[] pred=['0x1409bbd8d']
// BB 0x1409c0583-0x1409c0588 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0588-0x1409c0597 size=15 type=4 succ=[] pred=['0x1409bbe84']
// BB 0x1409c0598-0x1409c059d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c059d-0x1409c05ac size=15 type=4 succ=[] pred=['0x1409bbf51']
// BB 0x1409c05ad-0x1409c05b2 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c05b2-0x1409c05c1 size=15 type=4 succ=[] pred=['0x1409bc018']
// BB 0x1409c05c2-0x1409c05c7 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c05c7-0x1409c05d6 size=15 type=4 succ=[] pred=['0x1409bc0e5']
// BB 0x1409c05d7-0x1409c05dc size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c05dc-0x1409c05eb size=15 type=4 succ=[] pred=['0x1409bc149']
// BB 0x1409c05ec-0x1409c05f1 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c05f1-0x1409c0600 size=15 type=4 succ=[] pred=['0x1409bc22d']
// BB 0x1409c0601-0x1409c0606 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0606-0x1409c0615 size=15 type=4 succ=[] pred=['0x1409bc4c6']
// BB 0x1409c0616-0x1409c061b size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c061b-0x1409c062a size=15 type=4 succ=[] pred=['0x1409bc5b0']
// BB 0x1409c062b-0x1409c0630 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0630-0x1409c063f size=15 type=4 succ=[] pred=['0x1409bc645']
// BB 0x1409c0640-0x1409c0645 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0645-0x1409c0654 size=15 type=4 succ=[] pred=['0x1409bc71a']
// BB 0x1409c0655-0x1409c065a size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c065a-0x1409c0669 size=15 type=4 succ=[] pred=['0x1409bc7ba']
// BB 0x1409c066a-0x1409c066f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c066f-0x1409c067e size=15 type=4 succ=[] pred=['0x1409bc7d7']
// BB 0x1409c067f-0x1409c0684 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0684-0x1409c0693 size=15 type=4 succ=[] pred=['0x1409bc8d7']
// BB 0x1409c0694-0x1409c0699 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0699-0x1409c06a8 size=15 type=4 succ=[] pred=['0x1409bc99e']
// BB 0x1409c06a9-0x1409c06ae size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c06ae-0x1409c06bd size=15 type=4 succ=[] pred=['0x1409bce66']
// BB 0x1409c06be-0x1409c06c3 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c06c3-0x1409c06d2 size=15 type=4 succ=[] pred=['0x1409bcf61']
// BB 0x1409c06d3-0x1409c06d8 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c06d8-0x1409c06e7 size=15 type=4 succ=[] pred=['0x1409bd035']
// BB 0x1409c06e8-0x1409c06ed size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c06ed-0x1409c06fc size=15 type=4 succ=[] pred=['0x1409bd102']
// BB 0x1409c06fd-0x1409c0702 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0702-0x1409c0711 size=15 type=4 succ=[] pred=['0x1409bd1db']
// BB 0x1409c0712-0x1409c0717 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0717-0x1409c0726 size=15 type=4 succ=[] pred=['0x1409bd2ad']
// BB 0x1409c0727-0x1409c072c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c072c-0x1409c073b size=15 type=4 succ=[] pred=['0x1409bd3ba']
// BB 0x1409c073c-0x1409c0741 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0741-0x1409c0750 size=15 type=4 succ=[] pred=['0x1409bd4a4']
// BB 0x1409c0751-0x1409c0756 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0756-0x1409c0765 size=15 type=4 succ=[] pred=['0x1409bd547']
// BB 0x1409c0766-0x1409c076b size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c076b-0x1409c077a size=15 type=4 succ=[] pred=['0x1409bd616']
// BB 0x1409c077b-0x1409c0780 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0780-0x1409c078f size=15 type=4 succ=[] pred=['0x1409bddea']
// BB 0x1409c0790-0x1409c0795 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0795-0x1409c07a4 size=15 type=4 succ=[] pred=['0x1409bdedf']
// BB 0x1409c07a5-0x1409c07aa size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c07aa-0x1409c07b9 size=15 type=4 succ=[] pred=['0x1409bdf7e']
// BB 0x1409c07ba-0x1409c07bf size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c07bf-0x1409c07ce size=15 type=4 succ=[] pred=['0x1409be057']
// BB 0x1409c07cf-0x1409c07d4 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c07d4-0x1409c07e3 size=15 type=4 succ=[] pred=['0x1409be074']
// BB 0x1409c07e4-0x1409c07e9 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c07e9-0x1409c07f8 size=15 type=4 succ=[] pred=['0x1409be174']
// BB 0x1409c07f9-0x1409c07fe size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c07fe-0x1409c080d size=15 type=4 succ=[] pred=['0x1409be23b']
// BB 0x1409c080e-0x1409c0813 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0813-0x1409c0822 size=15 type=4 succ=[] pred=['0x1409be43a']
// BB 0x1409c0823-0x1409c0828 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0828-0x1409c0837 size=15 type=4 succ=[] pred=['0x1409be524']
// BB 0x1409c0838-0x1409c083d size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c083d-0x1409c084c size=15 type=4 succ=[] pred=['0x1409be5b9']
// BB 0x1409c084d-0x1409c0852 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0852-0x1409c0861 size=15 type=4 succ=[] pred=['0x1409be68e']
// BB 0x1409c0862-0x1409c0867 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0867-0x1409c0876 size=15 type=4 succ=[] pred=['0x1409be6ab']
// BB 0x1409c0877-0x1409c087c size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c087c-0x1409c088b size=15 type=4 succ=[] pred=['0x1409be7ab']
// BB 0x1409c088c-0x1409c0891 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0891-0x1409c08a0 size=15 type=4 succ=[] pred=['0x1409be872']
// BB 0x1409c08a1-0x1409c08a6 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c08a6-0x1409c08b5 size=15 type=4 succ=[] pred=['0x1409bea5b']
// BB 0x1409c08b6-0x1409c08bb size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c08bb-0x1409c08ca size=15 type=4 succ=[] pred=['0x1409beb45']
// BB 0x1409c08cb-0x1409c08d0 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c08d0-0x1409c08df size=15 type=4 succ=[] pred=['0x1409bec12']
// BB 0x1409c08e0-0x1409c08e5 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c08e5-0x1409c08f4 size=15 type=4 succ=[] pred=['0x1409b9b1b']
// BB 0x1409c08f5-0x1409c08fa size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c08fa-0x1409c0909 size=15 type=4 succ=[] pred=['0x1409bb5cd']
// BB 0x1409c090a-0x1409c090f size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c090f-0x1409c091e size=15 type=4 succ=[] pred=['0x1409b9c14']
// BB 0x1409c091f-0x1409c0924 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0924-0x1409c0933 size=15 type=4 succ=[] pred=['0x1409bb6c0']
// BB 0x1409c0934-0x1409c0939 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0939-0x1409c0948 size=15 type=4 succ=[] pred=['0x1409b9cb9']
// BB 0x1409c0949-0x1409c094e size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c094e-0x1409c095d size=15 type=4 succ=[] pred=['0x1409bb765']
// BB 0x1409c095e-0x1409c0963 size=5 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0963-0x1409c0972 size=15 type=4 succ=[] pred=['0x1409b9d87']
// BB 0x1409c0973-0x1409c0975 size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0975-0x1409c0984 size=15 type=4 succ=[] pred=['0x1409bb830']
// BB 0x1409c0985-0x1409c0987 size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0987-0x1409c0996 size=15 type=4 succ=[] pred=['0x1409b9e27']
// BB 0x1409c0997-0x1409c0999 size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c0999-0x1409c09a8 size=15 type=4 succ=[] pred=['0x1409bb8d0']
// BB 0x1409c09a9-0x1409c09ab size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c09ab-0x1409c09ba size=15 type=4 succ=[] pred=['0x1409bd989']
// BB 0x1409c09bb-0x1409c09bd size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c09bd-0x1409c09cc size=15 type=4 succ=[] pred=['0x1409bda66']
// BB 0x1409c09cd-0x1409c09cf size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c09cf-0x1409c09de size=15 type=4 succ=[] pred=['0x1409bdb08']
// BB 0x1409c09df-0x1409c09e1 size=2 type=0 succ=['0x1409c09f1'] pred=[]
// BB 0x1409c09e1-0x1409c09f0 size=15 type=4 succ=[] pred=['0x1409bdbd2']
// BB 0x1409c09f1-0x1409c09f3 size=2 type=0 succ=[] pred=['0x1409b9607', '0x1409b9718', '0x1409b98b0', '0x1409bcdf8', '0x1409bed93', '0x1409bedd2', '0x1409bee11', '0x1409bee89', '0x1409beec8', '0x1409bef07', '0x1409bef46', '0x1409bef85', '0x1409befc4', '0x1409befe4', '0x1409bf023', '0x1409bf062', '0x1409bf0a1', '0x1409bf0e9', '0x1409bf11a', '0x1409bf12f', '0x1409bf149', '0x1409bf15f', '0x1409bf19e', '0x1409bf1dd', '0x1409bf21c', '0x1409bf25b', '0x1409bf29a', '0x1409bf304', '0x1409bf343', '0x1409bf382', '0x1409bf3c1', '0x1409bf408', '0x1409bf447', '0x1409bf486', '0x1409bf4c5', '0x1409bf52f', '0x1409bf56e', '0x1409bf5ad', '0x1409bf5ec', '0x1409bf62b', '0x1409bf66a', '0x1409bf6a9', '0x1409bf6e8', '0x1409bf727', '0x1409bf791', '0x1409bf7d0', '0x1409bf80f', '0x1409bf84e', '0x1409bf89c', '0x1409bf8b9', '0x1409bf8d5', '0x1409bf914', '0x1409bf953', '0x1409bf992', '0x1409bf9d1', '0x1409bfa10', '0x1409bfa4f', '0x1409bfa8e', '0x1409bfacd', '0x1409bfb0c', '0x1409bfb8b', '0x1409bfbca', '0x1409bfc09', '0x1409bfc48', '0x1409bfc87', '0x1409bfcf1', '0x1409bfd30', '0x1409bfd6f', '0x1409bfdae', '0x1409bfded', '0x1409bfe65', '0x1409bfea4', '0x1409bfee3', '0x1409bffc2', '0x1409c0001', '0x1409c0040', '0x1409c007f', '0x1409c00be', '0x1409c00fd', '0x1409c0192', '0x1409c01d1', '0x1409c0210', '0x1409c0250', '0x1409c0265', '0x1409c027a', '0x1409c028f', '0x1409c02a4', '0x1409c02b9', '0x1409c02ce', '0x1409c02e3', '0x1409c02f8', '0x1409c030d', '0x1409c0322', '0x1409c0337', '0x1409c034c', '0x1409c0361', '0x1409c0376', '0x1409c038b', '0x1409c03a0', '0x1409c03b5', '0x1409c03ca', '0x1409c03df', '0x1409c03f4', '0x1409c0409', '0x1409c041e', '0x1409c0433', '0x1409c0448', '0x1409c045d', '0x1409c0472', '0x1409c0487', '0x1409c049c', '0x1409c04b1', '0x1409c04c6', '0x1409c04db', '0x1409c04f0', '0x1409c0505', '0x1409c051a', '0x1409c052f', '0x1409c0544', '0x1409c0559', '0x1409c056e', '0x1409c0583', '0x1409c0598', '0x1409c05ad', '0x1409c05c2', '0x1409c05d7', '0x1409c05ec', '0x1409c0601', '0x1409c0616', '0x1409c062b', '0x1409c0640', '0x1409c0655', '0x1409c066a', '0x1409c067f', '0x1409c0694', '0x1409c06a9', '0x1409c06be', '0x1409c06d3', '0x1409c06e8', '0x1409c06fd', '0x1409c0712', '0x1409c0727', '0x1409c073c', '0x1409c0751', '0x1409c0766', '0x1409c077b', '0x1409c0790', '0x1409c07a5', '0x1409c07ba', '0x1409c07cf', '0x1409c07e4', '0x1409c07f9', '0x1409c080e', '0x1409c0823', '0x1409c0838', '0x1409c084d', '0x1409c0862', '0x1409c0877', '0x1409c088c', '0x1409c08a1', '0x1409c08b6', '0x1409c08cb', '0x1409c08e0', '0x1409c08f5', '0x1409c090a', '0x1409c091f', '0x1409c0934', '0x1409c0949', '0x1409c095e', '0x1409c0973', '0x1409c0985', '0x1409c0997', '0x1409c09a9', '0x1409c09bb', '0x1409c09cd', '0x1409c09df']

// --- full disassembly ---
/*1409b7dd0*/ anthropic_to_responses_response_with_too: push rbp
/*1409b7dd1*/  push r15
/*1409b7dd3*/  push r14
/*1409b7dd5*/  push r13
/*1409b7dd7*/  push r12
/*1409b7dd9*/  push rsi
/*1409b7dda*/  push rdi
/*1409b7ddb*/  push rbx
/*1409b7ddc*/  sub rsp, 308h
/*1409b7de3*/  lea rbp, [rsp+80h]
/*1409b7deb*/  mov [rbp+2C0h+var_40], 0FFFFFFFFFFFFFFFEh
/*1409b7df6*/  mov r14, r8
/*1409b7df9*/  mov rdi, rdx
/*1409b7dfc*/  mov rsi, rcx
/*1409b7dff*/  mov qword ptr [rbp+2C0h+var_1E8], 0
/*1409b7e0a*/  mov qword ptr [rbp+2C0h+var_1E8+8], 1
/*1409b7e15*/  mov [rbp+2C0h+var_1D8], 0
/*1409b7e20*/ loc_1409B7E20: lea rcx, aType_8; "type"
/*1409b7e27*/  mov edx, 4
/*1409b7e2c*/  call sub_141433D50
/*1409b7e31*/  nop
/*1409b7e32*/  test rax, rax
/*1409b7e35*/  jz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7e3b*/  cmp byte ptr [rax], 3
/*1409b7e3e*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7e44*/  mov r15, [rax+18h]
/*1409b7e48*/  lea rcx, [r15-0Ch]; switch 8 cases  // switch 8 cases
/*1409b7e4c*/  cmp rcx, 7
/*1409b7e50*/  ja def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7e56*/  mov rbx, [rax+10h]
/*1409b7e5a*/  lea rax, jpt_1409B7E68
/*1409b7e61*/  movsxd rcx, ds:(jpt_1409B7E68 - 1417AA644h)[rax+rcx*4]
/*1409b7e65*/  add rcx, rax
/*1409b7e68*/  jmp rcx; switch jump  // switch jump
/*1409b7e6a*/ loc_1409B7E6A: mov rax, 5F6567617373656Dh; jumptable 00000001409B7E68 case 12  // jumptable 00000001409B7E68 case 12
/*1409b7e74*/  xor rax, [rbx]
/*1409b7e77*/  mov ecx, [rbx+8]
/*1409b7e7a*/  xor rcx, 706F7473h
/*1409b7e81*/  or rcx, rax
/*1409b7e84*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7e8a*/  jmp loc_1409B7F3F
/*1409b7e8f*/ loc_1409B7E8F: movdqu xmm0, xmmword ptr [rbx]; jumptable 00000001409B7E68 case 18  // jumptable 00000001409B7E68 case 18
/*1409b7e93*/  movzx eax, word ptr [rbx+10h]
/*1409b7e97*/  movd xmm1, eax
/*1409b7e9b*/  pcmpeqb xmm0, cs:xmmword_1417A2CD0
/*1409b7ea3*/  pcmpeqb xmm1, cs:xmmword_1417A2CE0
/*1409b7eab*/  pand xmm1, xmm0
/*1409b7eaf*/  pmovmskb eax, xmm1
/*1409b7eb3*/  cmp eax, 0FFFFh
/*1409b7eb8*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7ebe*/  lea rcx, aIndex_0; "index"
/*1409b7ec5*/  mov edx, 5
/*1409b7eca*/  mov r8, r14
/*1409b7ecd*/  call sub_141433D50
/*1409b7ed2*/  nop
/*1409b7ed3*/  test rax, rax
/*1409b7ed6*/  jz loc_1409B823E
/*1409b7edc*/  movzx edx, byte ptr [rax]
/*1409b7edf*/  xor ecx, ecx
/*1409b7ee1*/  cmp qword ptr [rax+8], 0
/*1409b7ee6*/  mov r8d, 0
/*1409b7eec*/  jnz short loc_1409B7EF2
/*1409b7eee*/  mov r8, [rax+10h]
/*1409b7ef2*/ loc_1409B7EF2: cmp dl, 2
/*1409b7ef5*/  cmovz rcx, r8
/*1409b7ef9*/  jmp loc_1409B8240
/*1409b7efe*/ loc_1409B7EFE: mov rax, 5F6567617373656Dh; jumptable 00000001409B7E68 case 13  // jumptable 00000001409B7E68 case 13
/*1409b7f08*/  mov rcx, [rbx]
/*1409b7f0b*/  xor rcx, rax
/*1409b7f0e*/  mov rdx, 74726174735F6567h
/*1409b7f18*/  xor rdx, [rbx+5]
/*1409b7f1c*/  or rdx, rcx
/*1409b7f1f*/  jz loc_1409B80EA
/*1409b7f25*/  xor rax, [rbx]
/*1409b7f28*/  mov rcx, 61746C65645F6567h
/*1409b7f32*/  xor rcx, [rbx+5]
/*1409b7f36*/  or rcx, rax
/*1409b7f39*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7f3f*/ loc_1409B7F3F: lea rcx, aUsage_2; "usage"
/*1409b7f46*/  mov edx, 5
/*1409b7f4b*/  mov r8, r14
/*1409b7f4e*/  call sub_141433D50
/*1409b7f53*/  nop
/*1409b7f54*/  test rax, rax
/*1409b7f57*/  jz short loc_1409B7F65
/*1409b7f59*/  mov rcx, rdi
/*1409b7f5c*/  mov rdx, rax
/*1409b7f5f*/  call sub_1409C55E0
/*1409b7f64*/  nop
/*1409b7f65*/ loc_1409B7F65: cmp r15, 0Ch
/*1409b7f69*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7f6f*/  mov rax, 5F6567617373656Dh
/*1409b7f79*/  xor rax, [rbx]
/*1409b7f7c*/  mov ecx, [rbx+8]
/*1409b7f7f*/  xor rcx, 706F7473h
/*1409b7f86*/  or rcx, rax
/*1409b7f89*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7f8f*/  cmp byte ptr [rdi+16Dh], 0
/*1409b7f96*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b7f9c*/  mov byte ptr [rdi+16Dh], 1
/*1409b7fa3*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b7faa*/  mov rcx, rdi
/*1409b7fad*/  call sub_1409CB5A0
/*1409b7fb2*/  nop
/*1409b7fb3*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b7fba*/  mov rcx, rdi
/*1409b7fbd*/  call sub_1409C69B0
/*1409b7fc2*/  nop
/*1409b7fc3*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b7fca*/  mov rcx, rdi
/*1409b7fcd*/  call sub_1409C8F60
/*1409b7fd2*/  nop
/*1409b7fd3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b7fda*/  mov rdx, rdi
/*1409b7fdd*/  call sub_1409C5790
/*1409b7fe2*/  nop
/*1409b7fe3*/ loc_1409B7FE3: mov r14, qword ptr [rbp+2C0h+var_F0+8]
/*1409b7fea*/  mov rdi, qword ptr [rbp+2C0h+var_E0]
/*1409b7ff1*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409b7ff8*/  mov rbx, [rbp+2C0h+var_1D8]
/*1409b7fff*/  sub rax, rbx
/*1409b8002*/  cmp rdi, rax
/*1409b8005*/  ja loc_1409BED1D
/*1409b800b*/  test rdi, rdi
/*1409b800e*/  jz short loc_1409B8025
/*1409b8010*/ loc_1409B8010: mov rcx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409b8017*/  add rcx, rbx
/*1409b801a*/  mov rdx, r14
/*1409b801d*/  mov r8, rdi
/*1409b8020*/  call sub_141684120
/*1409b8025*/ loc_1409B8025: add rbx, rdi
/*1409b8028*/  mov [rbp+2C0h+var_1D8], rbx
/*1409b802f*/  mov rdx, qword ptr [rbp+2C0h+var_F0]
/*1409b8036*/  test rdx, rdx
/*1409b8039*/  jz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b803f*/  mov r8d, 1
/*1409b8045*/  mov rcx, r14
/*1409b8048*/  call sub_140001660
/*1409b804d*/  jmp def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b8052*/ loc_1409B8052: movdqu xmm0, xmmword ptr [rbx]; jumptable 00000001409B7E68 case 19  // jumptable 00000001409B7E68 case 19
/*1409b8056*/  movdqu xmm1, xmmword ptr [rbx+3]
/*1409b805b*/  pcmpeqb xmm1, cs:xmmword_1417A2CF0
/*1409b8063*/  pcmpeqb xmm0, cs:xmmword_1417A2CD0
/*1409b806b*/  pand xmm0, xmm1
/*1409b806f*/  pmovmskb eax, xmm0
/*1409b8073*/  cmp eax, 0FFFFh
/*1409b8078*/  jz loc_1409B81FF
/*1409b807e*/  movdqu xmm0, xmmword ptr [rbx]
/*1409b8082*/  movdqu xmm1, xmmword ptr [rbx+3]
/*1409b8087*/  pcmpeqb xmm1, cs:xmmword_141764070
/*1409b808f*/  pcmpeqb xmm0, cs:xmmword_141764080
/*1409b8097*/  pand xmm0, xmm1
/*1409b809b*/  pmovmskb eax, xmm0
/*1409b809f*/  cmp eax, 0FFFFh
/*1409b80a4*/  jnz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b80aa*/ loc_1409B80AA: lea rcx, aIndex_0; "index"
/*1409b80b1*/  mov edx, 5
/*1409b80b6*/  mov r8, r14
/*1409b80b9*/  call sub_141433D50
/*1409b80be*/  nop
/*1409b80bf*/  test rax, rax
/*1409b80c2*/  jz loc_1409B8DBE
/*1409b80c8*/  movzx edx, byte ptr [rax]
/*1409b80cb*/  xor ecx, ecx
/*1409b80cd*/  cmp qword ptr [rax+8], 0
/*1409b80d2*/  mov r8d, 0
/*1409b80d8*/  jnz short loc_1409B80DE
/*1409b80da*/  mov r8, [rax+10h]
/*1409b80de*/ loc_1409B80DE: cmp dl, 2
/*1409b80e1*/  cmovz rcx, r8
/*1409b80e5*/  jmp loc_1409B8DC0
/*1409b80ea*/ loc_1409B80EA: lea rcx, aMessage_2; "message"
/*1409b80f1*/  mov edx, 7
/*1409b80f6*/  mov r8, r14
/*1409b80f9*/  call sub_141433D50
/*1409b80fe*/  nop
/*1409b80ff*/  test rax, rax
/*1409b8102*/  jz loc_1409B81AA
/*1409b8108*/  lea rcx, aModel_6; "model"
/*1409b810f*/  mov edx, 5
/*1409b8114*/  mov r8, rax
/*1409b8117*/  call sub_141433D50
/*1409b811c*/  nop
/*1409b811d*/ loc_1409B811D: test rax, rax
/*1409b8120*/  jz loc_1409B81AA
/*1409b8126*/  cmp byte ptr [rax], 3
/*1409b8129*/  setnz cl
/*1409b812c*/  mov rbx, [rax+18h]
/*1409b8130*/  test rbx, rbx
/*1409b8133*/  setz dl
/*1409b8136*/  or dl, cl
/*1409b8138*/  jnz short loc_1409B81AA
/*1409b813a*/  mov r12, [rax+10h]
/*1409b813e*/  mov [rsp+340h+var_320], 1
/*1409b8147*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b814e*/  mov r9d, 1
/*1409b8154*/  mov rdx, rbx
/*1409b8157*/  xor r8d, r8d
/*1409b815a*/  call sub_140388B60
/*1409b815f*/  mov r15, qword ptr [rbp+2C0h+var_F0+8]
/*1409b8166*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409b816d*/  jz loc_1409BF0D9
/*1409b8173*/  mov r13, qword ptr [rbp+2C0h+var_E0]
/*1409b817a*/  mov rcx, r13
/*1409b817d*/  mov rdx, r12
/*1409b8180*/  mov r8, rbx
/*1409b8183*/  call sub_141684120
/*1409b8188*/  mov rdx, [rdi]
/*1409b818b*/  test rdx, rdx
/*1409b818e*/  jz short loc_1409B819F
/*1409b8190*/  mov rcx, [rdi+8]
/*1409b8194*/  mov r8d, 1
/*1409b819a*/  call sub_140001660
/*1409b819f*/ loc_1409B819F: mov [rdi], r15
/*1409b81a2*/  mov [rdi+8], r13
/*1409b81a6*/  mov [rdi+10h], rbx
/*1409b81aa*/ loc_1409B81AA: lea rcx, aMessage_2; "message"
/*1409b81b1*/  mov edx, 7
/*1409b81b6*/  mov r8, r14
/*1409b81b9*/  call sub_141433D50
/*1409b81be*/  nop
/*1409b81bf*/  test rax, rax
/*1409b81c2*/  jz short loc_1409B81EA
/*1409b81c4*/  lea rcx, aUsage_2; "usage"
/*1409b81cb*/  mov edx, 5
/*1409b81d0*/  mov r8, rax
/*1409b81d3*/  call sub_141433D50
/*1409b81d8*/  nop
/*1409b81d9*/  test rax, rax
/*1409b81dc*/  jz short loc_1409B81EA
/*1409b81de*/  mov rcx, rdi
/*1409b81e1*/  mov rdx, rax
/*1409b81e4*/  call sub_1409C55E0
/*1409b81e9*/  nop
/*1409b81ea*/ loc_1409B81EA: lea rdx, [rbp+2C0h+var_1E8]
/*1409b81f1*/  mov rcx, rdi
/*1409b81f4*/  call sub_1409C6650
/*1409b81f9*/  nop
/*1409b81fa*/  jmp def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b81ff*/ loc_1409B81FF: lea rcx, aIndex_0; "index"
/*1409b8206*/  mov edx, 5
/*1409b820b*/  mov r8, r14
/*1409b820e*/  call sub_141433D50
/*1409b8213*/  nop
/*1409b8214*/  test rax, rax
/*1409b8217*/  jz loc_1409B8D13
/*1409b821d*/  movzx ecx, byte ptr [rax]
/*1409b8220*/  xor ebx, ebx
/*1409b8222*/  cmp qword ptr [rax+8], 0
/*1409b8227*/  mov edx, 0
/*1409b822c*/  jnz short loc_1409B8232
/*1409b822e*/  mov rdx, [rax+10h]
/*1409b8232*/ loc_1409B8232: cmp cl, 2
/*1409b8235*/  cmovz rbx, rdx
/*1409b8239*/  jmp loc_1409B8D15
/*1409b823e*/ loc_1409B823E: xor ecx, ecx
/*1409b8240*/ loc_1409B8240: mov qword ptr [rbp+2C0h+var_280], rcx
/*1409b8244*/  cmp qword ptr [rdi+48h], 0FFFFFFFFFFFFFFFFh
/*1409b8249*/  jz short loc_1409B827D
/*1409b824b*/  lea rcx, [rdi+0E8h]
/*1409b8252*/  lea rdx, [rbp+2C0h+var_280]
/*1409b8256*/  call sub_14042AD00
/*1409b825b*/  nop
/*1409b825c*/  cmp qword ptr [rdi+0B0h], 0FFFFFFFFFFFFFFFFh
/*1409b8264*/  setnz cl
/*1409b8267*/  or al, cl
/*1409b8269*/  cmp al, 1
/*1409b826b*/  jz short loc_1409B827D
/*1409b826d*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b8274*/  mov rcx, rdi
/*1409b8277*/  call sub_1409CB5A0
/*1409b827c*/  nop
/*1409b827d*/ loc_1409B827D: lea rbx, [rdi+0E8h]
/*1409b8284*/  cmp qword ptr [rdi+0B0h], 0FFFFFFFFFFFFFFFFh
/*1409b828c*/  jz short loc_1409B82AF
/*1409b828e*/  lea rdx, [rbp+2C0h+var_280]
/*1409b8292*/  mov rcx, rbx
/*1409b8295*/  call sub_14042AD00
/*1409b829a*/  nop
/*1409b829b*/  test al, al
/*1409b829d*/  jnz short loc_1409B82AF
/*1409b829f*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b82a6*/  mov rcx, rdi
/*1409b82a9*/  call sub_1409C69B0
/*1409b82ae*/  nop
/*1409b82af*/ loc_1409B82AF: lea rcx, [rdi+108h]
/*1409b82b6*/  lea r14, [rbp+2C0h+var_280]
/*1409b82ba*/  mov rdx, r14
/*1409b82bd*/  call sub_140378FA0
/*1409b82c2*/  nop
/*1409b82c3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b82ca*/  mov rdx, rbx
/*1409b82cd*/  mov r8, rax
/*1409b82d0*/  mov r9, r14
/*1409b82d3*/  call sub_1405A5750
/*1409b82d8*/  nop
/*1409b82d9*/  mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409b82e0*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1409b82e4*/  jz def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b82ea*/  movups xmm0, [rbp+2C0h+var_90]
/*1409b82f1*/  movups [rbp+2C0h+var_178], xmm0
/*1409b82f8*/  movups xmm0, [rbp+2C0h+var_A0]
/*1409b82ff*/  movups [rbp+2C0h+var_188], xmm0
/*1409b8306*/  movdqu xmm0, [rbp+2C0h+var_E0]
/*1409b830e*/  movdqu xmm1, [rbp+2C0h+var_D0]
/*1409b8316*/  movups xmm2, [rbp+2C0h+var_C0]
/*1409b831d*/  movups xmm3, [rbp+2C0h+var_B0]
/*1409b8324*/  movups [rbp+2C0h+var_198], xmm3
/*1409b832b*/  movups [rbp+2C0h+var_1A8], xmm2
/*1409b8332*/  movdqu [rbp+2C0h+var_1C0+8], xmm1
/*1409b833a*/  movdqu [rbp+2C0h+var_1D0+8], xmm0
/*1409b8342*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409b8349*/  cmp byte ptr [rbp+2C0h+var_178+0Ch], 0
/*1409b8350*/  jz loc_1409B9388
/*1409b8356*/  mov rdx, qword ptr [rbp+2C0h+var_198]
/*1409b835d*/  mov r8, qword ptr [rbp+2C0h+var_198+8]
/*1409b8364*/  mov r9, qword ptr [rbp+2C0h+var_188+8]
/*1409b836b*/  mov rax, qword ptr [rbp+2C0h+var_178]
/*1409b8372*/ loc_1409B8372: mov [rsp+340h+var_320], rax
/*1409b8377*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b837e*/  call normalize_anthropic_tool_call_for_respon
/*1409b8383*/  nop
/*1409b8384*/  mov rax, qword ptr [rbp+2C0h+var_E0]
/*1409b838b*/  mov [rbp+2C0h+var_250], rax
/*1409b838f*/  movups xmm0, [rbp+2C0h+var_F0]
/*1409b8396*/  movaps [rbp+2C0h+var_260], xmm0
/*1409b839a*/  mov rax, qword ptr [rbp+2C0h+var_D0+8]
/*1409b83a1*/  mov [rbp+2C0h+var_210], rax
/*1409b83a8*/  movdqu xmm0, [rbp+2C0h+var_E0+8]
/*1409b83b0*/  movdqa [rbp+2C0h+var_220], xmm0
/*1409b83b8*/  mov qword ptr [rbp+2C0h+var_208], 0
/*1409b83c3*/  mov [rbp+2C0h+var_1F8], 0
/*1409b83ce*/  call nullsub_1
/*1409b83d3*/  mov ecx, 4
/*1409b83d8*/  mov edx, 1
/*1409b83dd*/  call sub_140001650
/*1409b83e2*/  test rax, rax
/*1409b83e5*/  jz loc_1409C0240
/*1409b83eb*/  mov dword ptr [rax], 65707974h
/*1409b83f1*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409b83fc*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b8403*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409b840e*/  mov [rbp+2C0h+var_121], 1
/*1409b8415*/ loc_1409B8415: lea rdx, off_1417A5CA0
/*1409b841c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8423*/  call sub_140B56640
/*1409b8428*/  nop
/*1409b8429*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8430*/  jz loc_1409BED59
/*1409b8436*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b843e*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8446*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b844e*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8456*/  mov [rbp+2C0h+var_121], 0
/*1409b845d*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8464*/  lea rdx, [rbp+2C0h+var_208]
/*1409b846b*/  lea r8, [rbp+2C0h+var_120]
/*1409b8472*/  lea r9, [rbp+2C0h+var_60]
/*1409b8479*/  call sub_140307860
/*1409b847e*/  nop
/*1409b847f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8486*/  jz short loc_1409B8495
/*1409b8488*/ loc_1409B8488: lea rcx, [rbp+2C0h+var_F0]
/*1409b848f*/  call sub_1400104F0
/*1409b8494*/  nop
/*1409b8495*/ loc_1409B8495: call nullsub_1
/*1409b849a*/  mov ecx, 0Ch
/*1409b849f*/  mov edx, 1
/*1409b84a4*/  call sub_140001650
/*1409b84a9*/  test rax, rax
/*1409b84ac*/  jz loc_1409C0255
/*1409b84b2*/  mov rcx, 695F74757074756Fh
/*1409b84bc*/  mov [rax], rcx
/*1409b84bf*/  mov dword ptr [rax+8], 7865646Eh
/*1409b84c6*/  mov qword ptr [rbp+2C0h+var_120], 0Ch
/*1409b84d1*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b84d8*/  mov qword ptr [rbp+2C0h+var_110], 0Ch
/*1409b84e3*/  mov r12d, dword ptr [rbp+2C0h+var_178+8]
/*1409b84ea*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409b84f1*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409b84fc*/  mov qword ptr [rbp+2C0h+var_E0], r12
/*1409b8503*/  lea rcx, [rbp+2C0h+var_60]
/*1409b850a*/  lea rdx, [rbp+2C0h+var_208]
/*1409b8511*/  lea r8, [rbp+2C0h+var_120]
/*1409b8518*/  lea r9, [rbp+2C0h+var_F0]
/*1409b851f*/  call sub_140307860
/*1409b8524*/  nop
/*1409b8525*/  cmp byte ptr [rbp+2C0h+var_60], 0FFh
/*1409b852c*/  jz short loc_1409B853B
/*1409b852e*/  lea rcx, [rbp+2C0h+var_60]
/*1409b8535*/  call sub_1400104F0
/*1409b853a*/  nop
/*1409b853b*/ loc_1409B853B: call nullsub_1
/*1409b8540*/  mov ecx, 7
/*1409b8545*/  mov edx, 1
/*1409b854a*/  call sub_140001650
/*1409b854f*/  test rax, rax
/*1409b8552*/  jz loc_1409C026A
/*1409b8558*/  mov dword ptr [rax+3], 64695F6Dh
/*1409b855f*/  mov dword ptr [rax], 6D657469h
/*1409b8565*/  mov qword ptr [rbp+2C0h+var_120], 7
/*1409b8570*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b8577*/  mov qword ptr [rbp+2C0h+var_110], 7
/*1409b8582*/  mov [rbp+2C0h+var_122], 1
/*1409b8589*/ loc_1409B8589: lea rcx, [rbp+2C0h+var_F0]
/*1409b8590*/  lea rdx, [rbp+2C0h+var_1D0]
/*1409b8597*/  call sub_140B56520
/*1409b859c*/  nop
/*1409b859d*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b85a4*/  jz loc_1409BED98
/*1409b85aa*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b85b2*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b85ba*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b85c2*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b85ca*/  mov [rbp+2C0h+var_122], 0
/*1409b85d1*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b85d8*/  lea rdx, [rbp+2C0h+var_208]
/*1409b85df*/  lea r8, [rbp+2C0h+var_120]
/*1409b85e6*/  lea r9, [rbp+2C0h+var_60]
/*1409b85ed*/  call sub_140307860
/*1409b85f2*/  nop
/*1409b85f3*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b85fa*/  jz short loc_1409B8609
/*1409b85fc*/ loc_1409B85FC: lea rcx, [rbp+2C0h+var_F0]
/*1409b8603*/  call sub_1400104F0
/*1409b8608*/  nop
/*1409b8609*/ loc_1409B8609: call nullsub_1
/*1409b860e*/  mov ecx, 9
/*1409b8613*/  mov edx, 1
/*1409b8618*/  call sub_140001650
/*1409b861d*/  test rax, rax
/*1409b8620*/  jz loc_1409C027F
/*1409b8626*/  mov r15, 746E656D75677261h
/*1409b8630*/  mov [rax], r15
/*1409b8633*/  mov byte ptr [rax+8], 73h ; 's'
/*1409b8637*/  mov qword ptr [rbp+2C0h+var_80], 9
/*1409b8642*/  mov [rbp+2C0h+var_F8], rax
/*1409b8649*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409b8650*/  mov [rbp+2C0h+var_70], 9
/*1409b865b*/ loc_1409B865B: lea rcx, [rbp+2C0h+var_120]
/*1409b8662*/  lea rdx, [rbp+2C0h+var_220]
/*1409b8669*/  call sub_14149C500
/*1409b866e*/  nop
/*1409b866f*/  mov [rbp+2C0h+var_123], 1
/*1409b8676*/ loc_1409B8676: lea rcx, [rbp+2C0h+var_F0]
/*1409b867d*/  lea rdx, [rbp+2C0h+var_120]
/*1409b8684*/  call sub_140B56520
/*1409b8689*/  nop
/*1409b868a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8691*/  jz loc_1409BEDD7
/*1409b8697*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b869f*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b86a7*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b86af*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b86b7*/  mov [rbp+2C0h+var_123], 0
/*1409b86be*/  lea r14, [rbp+2C0h+var_F0]
/*1409b86c5*/  lea rdx, [rbp+2C0h+var_208]
/*1409b86cc*/  lea r8, [rbp+2C0h+var_80]
/*1409b86d3*/  lea r9, [rbp+2C0h+var_60]
/*1409b86da*/  mov rcx, r14
/*1409b86dd*/  call sub_140307860
/*1409b86e2*/  nop
/*1409b86e3*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b86ea*/  jz short loc_1409B86F9
/*1409b86ec*/ loc_1409B86EC: lea rcx, [rbp+2C0h+var_F0]
/*1409b86f3*/  call sub_1400104F0
/*1409b86f8*/  nop
/*1409b86f9*/ loc_1409B86F9: lea rbx, [rdi+160h]
/*1409b8700*/  mov rdx, qword ptr [rbp+2C0h+var_120]
/*1409b8707*/  test rdx, rdx
/*1409b870a*/  jz short loc_1409B871E
/*1409b870c*/  mov rcx, qword ptr [rbp+2C0h+var_120+8]
/*1409b8713*/  mov r8d, 1
/*1409b8719*/  call sub_140001660
/*1409b871e*/ loc_1409B871E: movdqu xmm0, [rbp+2C0h+var_208]
/*1409b8726*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409b872e*/  mov rax, [rbp+2C0h+var_1F8]
/*1409b8735*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409b873c*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409b8743*/ loc_1409B8743: mov [rsp+340h+var_320], r14
/*1409b8748*/  lea r8, xmmword_1417A5C78
/*1409b874f*/  lea rcx, [rbp+2C0h+var_60]
/*1409b8756*/  mov r9d, 25h ; '%'
/*1409b875c*/  mov rdx, rbx
/*1409b875f*/  call sub_1409C6750
/*1409b8764*/  nop
/*1409b8765*/ loc_1409B8765: mov r13, qword ptr [rbp+2C0h+var_60+8]
/*1409b876c*/  mov r14, qword ptr [rbp+2C0h+var_50]
/*1409b8773*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409b877a*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b8781*/  sub rax, rdx
/*1409b8784*/  cmp r14, rax
/*1409b8787*/  ja loc_1409BEE16
/*1409b878d*/  test r14, r14
/*1409b8790*/  jz short loc_1409B87AE
/*1409b8792*/ loc_1409B8792: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409b8799*/  mov rcx, rdx
/*1409b879c*/  mov rdx, r13
/*1409b879f*/  mov r8, r14
/*1409b87a2*/  call sub_141684120
/*1409b87a7*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b87ae*/ loc_1409B87AE: add rdx, r14
/*1409b87b1*/  mov [rbp+2C0h+var_1D8], rdx
/*1409b87b8*/  mov rdx, qword ptr [rbp+2C0h+var_60]
/*1409b87bf*/  test rdx, rdx
/*1409b87c2*/  jz short loc_1409B87D3
/*1409b87c4*/  mov r8d, 1
/*1409b87ca*/  mov rcx, r13
/*1409b87cd*/  call sub_140001660
/*1409b87d2*/  nop
/*1409b87d3*/ loc_1409B87D3: lea rcx, [rbp+2C0h+var_F0]
/*1409b87da*/  call sub_1400104F0
/*1409b87df*/  nop
/*1409b87e0*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409b87eb*/  mov [rbp+2C0h+var_70], 0
/*1409b87f6*/  call nullsub_1
/*1409b87fb*/  mov ecx, 4
/*1409b8800*/  mov edx, 1
/*1409b8805*/  call sub_140001650
/*1409b880a*/  test rax, rax
/*1409b880d*/  jz loc_1409C0294
/*1409b8813*/  mov dword ptr [rax], 65707974h
/*1409b8819*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409b8824*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b882b*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409b8836*/  mov [rbp+2C0h+var_124], 1
/*1409b883d*/ loc_1409B883D: lea rdx, off_1417A5CC0; "function_call"
/*1409b8844*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b884b*/  call sub_140B56640
/*1409b8850*/  nop
/*1409b8851*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8858*/  jz loc_1409BEE4F
/*1409b885e*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b8866*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b886e*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8876*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b887e*/  mov [rbp+2C0h+var_124], 0
/*1409b8885*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b888c*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8893*/  lea r8, [rbp+2C0h+var_120]
/*1409b889a*/  lea r9, [rbp+2C0h+var_60]
/*1409b88a1*/  call sub_140307860
/*1409b88a6*/  nop
/*1409b88a7*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b88ae*/  jz short loc_1409B88BD
/*1409b88b0*/ loc_1409B88B0: lea rcx, [rbp+2C0h+var_F0]
/*1409b88b7*/  call sub_1400104F0
/*1409b88bc*/  nop
/*1409b88bd*/ loc_1409B88BD: call nullsub_1
/*1409b88c2*/  mov ecx, 2
/*1409b88c7*/  mov edx, 1
/*1409b88cc*/  call sub_140001650
/*1409b88d1*/  test rax, rax
/*1409b88d4*/  jz loc_1409C02A9
/*1409b88da*/  mov word ptr [rax], 6469h
/*1409b88df*/  mov qword ptr [rbp+2C0h+var_120], 2
/*1409b88ea*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b88f1*/  mov qword ptr [rbp+2C0h+var_110], 2
/*1409b88fc*/  mov [rbp+2C0h+var_125], 1
/*1409b8903*/ loc_1409B8903: lea rcx, [rbp+2C0h+var_F0]
/*1409b890a*/  lea rdx, [rbp+2C0h+var_1D0]
/*1409b8911*/  call sub_140B56520
/*1409b8916*/  nop
/*1409b8917*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b891e*/  jz loc_1409BEE8E
/*1409b8924*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b892c*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8934*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b893c*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8944*/  mov [rbp+2C0h+var_125], 0
/*1409b894b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8952*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8959*/  lea r8, [rbp+2C0h+var_120]
/*1409b8960*/  lea r9, [rbp+2C0h+var_60]
/*1409b8967*/  call sub_140307860
/*1409b896c*/  nop
/*1409b896d*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8974*/  jz short loc_1409B8983
/*1409b8976*/ loc_1409B8976: lea rcx, [rbp+2C0h+var_F0]
/*1409b897d*/  call sub_1400104F0
/*1409b8982*/  nop
/*1409b8983*/ loc_1409B8983: call nullsub_1
/*1409b8988*/  mov ecx, 6
/*1409b898d*/  mov edx, 1
/*1409b8992*/  call sub_140001650
/*1409b8997*/  test rax, rax
/*1409b899a*/  jz loc_1409C02BE
/*1409b89a0*/  mov word ptr [rax+4], 7375h
/*1409b89a6*/  mov dword ptr [rax], 74617473h
/*1409b89ac*/  mov qword ptr [rbp+2C0h+var_120], 6
/*1409b89b7*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b89be*/  mov qword ptr [rbp+2C0h+var_110], 6
/*1409b89c9*/  mov [rbp+2C0h+var_126], 1
/*1409b89d0*/ loc_1409B89D0: lea rdx, off_1417A5B58; "completed"
/*1409b89d7*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b89de*/  call sub_140B56640
/*1409b89e3*/  nop
/*1409b89e4*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b89eb*/  jz loc_1409BEECD
/*1409b89f1*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b89f9*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8a01*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8a09*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8a11*/  mov [rbp+2C0h+var_126], 0
/*1409b8a18*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8a1f*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8a26*/  lea r8, [rbp+2C0h+var_120]
/*1409b8a2d*/  lea r9, [rbp+2C0h+var_60]
/*1409b8a34*/  call sub_140307860
/*1409b8a39*/  nop
/*1409b8a3a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8a41*/  jz short loc_1409B8A50
/*1409b8a43*/ loc_1409B8A43: lea rcx, [rbp+2C0h+var_F0]
/*1409b8a4a*/  call sub_1400104F0
/*1409b8a4f*/  nop
/*1409b8a50*/ loc_1409B8A50: call nullsub_1
/*1409b8a55*/  mov ecx, 7
/*1409b8a5a*/  mov edx, 1
/*1409b8a5f*/  call sub_140001650
/*1409b8a64*/  test rax, rax
/*1409b8a67*/  jz loc_1409C02D3
/*1409b8a6d*/  mov dword ptr [rax+3], 64695F6Ch
/*1409b8a74*/  mov dword ptr [rax], 6C6C6163h
/*1409b8a7a*/  mov qword ptr [rbp+2C0h+var_120], 7
/*1409b8a85*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b8a8c*/  mov qword ptr [rbp+2C0h+var_110], 7
/*1409b8a97*/  lea rdx, [rbp+2C0h+var_1C0+8]
/*1409b8a9e*/  mov [rbp+2C0h+var_127], 1
/*1409b8aa5*/ loc_1409B8AA5: lea rcx, [rbp+2C0h+var_F0]
/*1409b8aac*/  call sub_140B56520
/*1409b8ab1*/  nop
/*1409b8ab2*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8ab9*/  jz loc_1409BEF0C
/*1409b8abf*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b8ac7*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8acf*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8ad7*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8adf*/  mov [rbp+2C0h+var_127], 0
/*1409b8ae6*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8aed*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8af4*/  lea r8, [rbp+2C0h+var_120]
/*1409b8afb*/  lea r9, [rbp+2C0h+var_60]
/*1409b8b02*/  call sub_140307860
/*1409b8b07*/  nop
/*1409b8b08*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8b0f*/  jz short loc_1409B8B1E
/*1409b8b11*/ loc_1409B8B11: lea rcx, [rbp+2C0h+var_F0]
/*1409b8b18*/  call sub_1400104F0
/*1409b8b1d*/  nop
/*1409b8b1e*/ loc_1409B8B1E: call nullsub_1
/*1409b8b23*/  mov ecx, 4
/*1409b8b28*/  mov edx, 1
/*1409b8b2d*/  call sub_140001650
/*1409b8b32*/  test rax, rax
/*1409b8b35*/  jz loc_1409C02E8
/*1409b8b3b*/  mov dword ptr [rax], 656D616Eh
/*1409b8b41*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409b8b4c*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b8b53*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409b8b5e*/  mov [rbp+2C0h+var_128], 1
/*1409b8b65*/ loc_1409B8B65: lea rcx, [rbp+2C0h+var_F0]
/*1409b8b6c*/  lea rdx, [rbp+2C0h+var_260]
/*1409b8b70*/  call sub_140B56520
/*1409b8b75*/  nop
/*1409b8b76*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8b7d*/  jz loc_1409BEF4B
/*1409b8b83*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b8b8b*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8b93*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8b9b*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8ba3*/  mov [rbp+2C0h+var_128], 0
/*1409b8baa*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8bb1*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8bb8*/  lea r8, [rbp+2C0h+var_120]
/*1409b8bbf*/  lea r9, [rbp+2C0h+var_60]
/*1409b8bc6*/  call sub_140307860
/*1409b8bcb*/  nop
/*1409b8bcc*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8bd3*/  jz short loc_1409B8BE2
/*1409b8bd5*/ loc_1409B8BD5: lea rcx, [rbp+2C0h+var_F0]
/*1409b8bdc*/  call sub_1400104F0
/*1409b8be1*/  nop
/*1409b8be2*/ loc_1409B8BE2: call nullsub_1
/*1409b8be7*/  mov ecx, 9
/*1409b8bec*/  mov edx, 1
/*1409b8bf1*/  call sub_140001650
/*1409b8bf6*/  test rax, rax
/*1409b8bf9*/  jz loc_1409C02FD
/*1409b8bff*/  mov [rax], r15
/*1409b8c02*/  mov byte ptr [rax+8], 73h ; 's'
/*1409b8c06*/  mov qword ptr [rbp+2C0h+var_120], 9
/*1409b8c11*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b8c18*/  mov qword ptr [rbp+2C0h+var_110], 9
/*1409b8c23*/  mov [rbp+2C0h+var_129], 1
/*1409b8c2a*/ loc_1409B8C2A: lea rcx, [rbp+2C0h+var_F0]
/*1409b8c31*/  lea rdx, [rbp+2C0h+var_220]
/*1409b8c38*/  call sub_140B56520
/*1409b8c3d*/  nop
/*1409b8c3e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8c45*/  jz loc_1409BEF8A
/*1409b8c4b*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b8c53*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8c5b*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8c63*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8c6b*/  mov [rbp+2C0h+var_129], 0
/*1409b8c72*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8c79*/  lea rdx, [rbp+2C0h+var_80]
/*1409b8c80*/  lea r8, [rbp+2C0h+var_120]
/*1409b8c87*/  lea r9, [rbp+2C0h+var_60]
/*1409b8c8e*/  call sub_140307860
/*1409b8c93*/  nop
/*1409b8c94*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8c9b*/  jz short loc_1409B8CAA
/*1409b8c9d*/ loc_1409B8C9D: lea rcx, [rbp+2C0h+var_F0]
/*1409b8ca4*/  call sub_1400104F0
/*1409b8ca9*/  nop
/*1409b8caa*/ loc_1409B8CAA: movdqu xmm0, [rbp+2C0h+var_80]
/*1409b8cb2*/  movdqu [rbp+2C0h+var_120+8], xmm0
/*1409b8cba*/  mov rax, [rbp+2C0h+var_70]
/*1409b8cc1*/  mov qword ptr [rbp+2C0h+var_110+8], rax
/*1409b8cc8*/  mov byte ptr [rbp+2C0h+var_120], 5
/*1409b8ccf*/  mov [rbp+2C0h+var_1E9], 1
/*1409b8cd6*/ loc_1409B8CD6: lea rcx, aName_7; "name"
/*1409b8cdd*/  lea r8, [rbp+2C0h+var_120]
/*1409b8ce4*/  mov edx, 4
/*1409b8ce9*/  call sub_141433D50
/*1409b8cee*/  nop
/*1409b8cef*/  test rax, rax
/*1409b8cf2*/  jz loc_1409B8E70
/*1409b8cf8*/  xor r14d, r14d
/*1409b8cfb*/  cmp byte ptr [rax], 3
/*1409b8cfe*/  cmovz r14, [rax+18h]
/*1409b8d03*/  mov r15d, 1
/*1409b8d09*/  cmovz r15, [rax+10h]
/*1409b8d0e*/  jmp loc_1409B8E79
/*1409b8d13*/ loc_1409B8D13: xor ebx, ebx
/*1409b8d15*/ loc_1409B8D15: lea rcx, aContentBlock; "content_block"
/*1409b8d1c*/  mov edx, 0Dh
/*1409b8d21*/  mov r8, r14
/*1409b8d24*/  call sub_141433D50
/*1409b8d29*/  nop
/*1409b8d2a*/  test rax, rax
/*1409b8d2d*/  jz short loc_1409B8D60
/*1409b8d2f*/  movzx ecx, byte ptr [rax]
/*1409b8d32*/  lea rdx, jpt_1409B8D40
/*1409b8d39*/  movsxd rcx, ds:(jpt_1409B8D40 - 1417AA698h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409b8d3d*/  add rcx, rdx
/*1409b8d40*/  jmp rcx; switch jump  // switch jump
/*1409b8d42*/ loc_1409B8D42: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409B8D40 cases 1,2  // jumptable 00000001409B8D40 cases 1,2
/*1409b8d46*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409b8d4b*/  movdqa [rbp+2C0h+var_E0], xmm1
/*1409b8d53*/  movdqa [rbp+2C0h+var_F0], xmm0
/*1409b8d5b*/  jmp loc_1409B93F8
/*1409b8d60*/ loc_1409B8D60: mov byte ptr [rbp+2C0h+var_F0], 0
/*1409b8d67*/  movdqu xmm0, [rbp+2C0h+var_E0]
/*1409b8d6f*/  movdqa [rbp+2C0h+var_110], xmm0
/*1409b8d77*/  movzx eax, byte ptr [rbp+2C0h+var_F0]
/*1409b8d7e*/  mov byte ptr [rbp+2C0h+var_120], al
/*1409b8d84*/  mov rax, qword ptr [rbp+2C0h+var_F0+1]
/*1409b8d8b*/  mov qword ptr [rbp+2C0h+var_120+1], rax
/*1409b8d92*/  mov eax, dword ptr [rbp+2C0h+var_F0+9]
/*1409b8d98*/  mov dword ptr [rbp+2C0h+var_120+9], eax
/*1409b8d9e*/  movzx eax, word ptr [rbp+2C0h+var_F0+0Dh]
/*1409b8da5*/  mov word ptr [rbp+2C0h+var_120+0Dh], ax
/*1409b8dac*/  movzx eax, byte ptr [rbp+2C0h+var_F0+0Fh]
/*1409b8db3*/  mov byte ptr [rbp+2C0h+var_120+0Fh], al
/*1409b8db9*/  jmp loc_1409B9462
/*1409b8dbe*/ loc_1409B8DBE: xor ecx, ecx
/*1409b8dc0*/ loc_1409B8DC0: mov qword ptr [rbp+2C0h+var_220], rcx
/*1409b8dc7*/  lea rcx, aDelta_2; "delta"
/*1409b8dce*/  mov edx, 5
/*1409b8dd3*/  mov r8, r14
/*1409b8dd6*/  call sub_141433D50
/*1409b8ddb*/  nop
/*1409b8ddc*/ loc_1409B8DDC: test rax, rax
/*1409b8ddf*/  jz short loc_1409B8E12
/*1409b8de1*/  movzx ecx, byte ptr [rax]
/*1409b8de4*/  lea rdx, jpt_1409B8DF2
/*1409b8deb*/  movsxd rcx, ds:(jpt_1409B8DF2 - 1417AA664h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409b8def*/  add rcx, rdx
/*1409b8df2*/  jmp rcx; switch jump  // switch jump
/*1409b8df4*/ loc_1409B8DF4: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409B8DF2 cases 1,2  // jumptable 00000001409B8DF2 cases 1,2
/*1409b8df8*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409b8dfd*/  movdqa [rbp+2C0h+var_E0], xmm1
/*1409b8e05*/  movdqa [rbp+2C0h+var_F0], xmm0
/*1409b8e0d*/  jmp loc_1409B99CE
/*1409b8e12*/ loc_1409B8E12: mov byte ptr [rbp+2C0h+var_F0], 0
/*1409b8e19*/  movdqu xmm0, [rbp+2C0h+var_E0]
/*1409b8e21*/  movdqa [rbp+2C0h+var_50], xmm0
/*1409b8e29*/  movzx eax, byte ptr [rbp+2C0h+var_F0]
/*1409b8e30*/  mov byte ptr [rbp+2C0h+var_60], al
/*1409b8e36*/  mov rax, qword ptr [rbp+2C0h+var_F0+1]
/*1409b8e3d*/  mov qword ptr [rbp+2C0h+var_60+1], rax
/*1409b8e44*/  mov eax, dword ptr [rbp+2C0h+var_F0+9]
/*1409b8e4a*/  mov dword ptr [rbp+2C0h+var_60+9], eax
/*1409b8e50*/  movzx eax, word ptr [rbp+2C0h+var_F0+0Dh]
/*1409b8e57*/  mov word ptr [rbp+2C0h+var_60+0Dh], ax
/*1409b8e5e*/  movzx eax, byte ptr [rbp+2C0h+var_F0+0Fh]
/*1409b8e65*/  mov byte ptr [rbp+2C0h+var_60+0Fh], al
/*1409b8e6b*/  jmp loc_1409B9A38
/*1409b8e70*/ loc_1409B8E70: mov r15d, 1
/*1409b8e76*/  xor r14d, r14d
/*1409b8e79*/ loc_1409B8E79: mov [rsp+340h+var_320], 1
/*1409b8e82*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8e89*/  mov r9d, 1
/*1409b8e8f*/  mov rdx, r14
/*1409b8e92*/  xor r8d, r8d
/*1409b8e95*/  call sub_140388B60
/*1409b8e9a*/  mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409b8ea1*/  mov [rbp+2C0h+var_F8], rax
/*1409b8ea8*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409b8eaf*/  jz loc_1409BEFC9
/*1409b8eb5*/  mov r13, qword ptr [rbp+2C0h+var_E0]
/*1409b8ebc*/  test r14, r14
/*1409b8ebf*/  jz short loc_1409B8ECF
/*1409b8ec1*/  mov rcx, r13
/*1409b8ec4*/  mov rdx, r15
/*1409b8ec7*/  mov r8, r14
/*1409b8eca*/  call sub_141684120
/*1409b8ecf*/ loc_1409B8ECF: lea r9, [rdi+118h]
/*1409b8ed6*/  mov [rbp+2C0h+var_F9], 1
/*1409b8edd*/ loc_1409B8EDD: lea rcx, [rbp+2C0h+var_120]
/*1409b8ee4*/  mov [rbp+2C0h+var_238], r13
/*1409b8eeb*/  mov rdx, r13
/*1409b8eee*/  mov r8, r14
/*1409b8ef1*/  call sub_140A0E950
/*1409b8ef6*/  nop
/*1409b8ef7*/  mov qword ptr [rbp+2C0h+var_208], 0
/*1409b8f02*/  mov [rbp+2C0h+var_1F8], 0
/*1409b8f0d*/  call nullsub_1
/*1409b8f12*/  mov ecx, 4
/*1409b8f17*/  mov edx, 1
/*1409b8f1c*/  call sub_140001650
/*1409b8f21*/  test rax, rax
/*1409b8f24*/  jz loc_1409C0312
/*1409b8f2a*/  mov dword ptr [rax], 65707974h
/*1409b8f30*/  mov qword ptr [rbp+2C0h+var_80], 4
/*1409b8f3b*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409b8f42*/  mov [rbp+2C0h+var_70], 4
/*1409b8f4d*/  mov [rbp+2C0h+var_12A], 1
/*1409b8f54*/ loc_1409B8F54: lea rdx, off_1417A5C50
/*1409b8f5b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8f62*/  call sub_140B56640
/*1409b8f67*/  nop
/*1409b8f68*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8f6f*/  jz loc_1409BEFE9
/*1409b8f75*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b8f7d*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b8f85*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b8f8d*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b8f95*/  mov [rbp+2C0h+var_12A], 0
/*1409b8f9c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b8fa3*/  lea rdx, [rbp+2C0h+var_208]
/*1409b8faa*/  lea r8, [rbp+2C0h+var_80]
/*1409b8fb1*/  lea r9, [rbp+2C0h+var_60]
/*1409b8fb8*/  call sub_140307860
/*1409b8fbd*/  nop
/*1409b8fbe*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b8fc5*/  jz short loc_1409B8FD4
/*1409b8fc7*/ loc_1409B8FC7: lea rcx, [rbp+2C0h+var_F0]
/*1409b8fce*/  call sub_1400104F0
/*1409b8fd3*/  nop
/*1409b8fd4*/ loc_1409B8FD4: call nullsub_1
/*1409b8fd9*/  mov ecx, 0Ch
/*1409b8fde*/  mov edx, 1
/*1409b8fe3*/  call sub_140001650
/*1409b8fe8*/  test rax, rax
/*1409b8feb*/  jz loc_1409C0327
/*1409b8ff1*/  mov rcx, 695F74757074756Fh
/*1409b8ffb*/  mov [rax], rcx
/*1409b8ffe*/  mov dword ptr [rax+8], 7865646Eh
/*1409b9005*/  mov qword ptr [rbp+2C0h+var_80], 0Ch
/*1409b9010*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409b9017*/  mov [rbp+2C0h+var_70], 0Ch
/*1409b9022*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409b9029*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409b9034*/  mov qword ptr [rbp+2C0h+var_E0], r12
/*1409b903b*/  lea rcx, [rbp+2C0h+var_60]
/*1409b9042*/  lea rdx, [rbp+2C0h+var_208]
/*1409b9049*/  lea r8, [rbp+2C0h+var_80]
/*1409b9050*/  lea r9, [rbp+2C0h+var_F0]
/*1409b9057*/  call sub_140307860
/*1409b905c*/  nop
/*1409b905d*/  cmp byte ptr [rbp+2C0h+var_60], 0FFh
/*1409b9064*/  jz short loc_1409B9073
/*1409b9066*/  lea rcx, [rbp+2C0h+var_60]
/*1409b906d*/  call sub_1400104F0
/*1409b9072*/  nop
/*1409b9073*/ loc_1409B9073: call nullsub_1
/*1409b9078*/  mov ecx, 7
/*1409b907d*/  mov edx, 1
/*1409b9082*/  call sub_140001650
/*1409b9087*/  test rax, rax
/*1409b908a*/  jz loc_1409C033C
/*1409b9090*/  mov dword ptr [rax+3], 64695F6Dh
/*1409b9097*/  mov dword ptr [rax], 6D657469h
/*1409b909d*/  mov qword ptr [rbp+2C0h+var_80], 7
/*1409b90a8*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409b90af*/  mov [rbp+2C0h+var_70], 7
/*1409b90ba*/  mov [rbp+2C0h+var_12B], 1
/*1409b90c1*/ loc_1409B90C1: lea rcx, [rbp+2C0h+var_F0]
/*1409b90c8*/  lea rdx, [rbp+2C0h+var_1D0]
/*1409b90cf*/  call sub_140B56520
/*1409b90d4*/  nop
/*1409b90d5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b90dc*/  jz loc_1409BF028
/*1409b90e2*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b90ea*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b90f2*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b90fa*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b9102*/  mov [rbp+2C0h+var_12B], 0
/*1409b9109*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9110*/  lea rdx, [rbp+2C0h+var_208]
/*1409b9117*/  lea r8, [rbp+2C0h+var_80]
/*1409b911e*/  lea r9, [rbp+2C0h+var_60]
/*1409b9125*/  call sub_140307860
/*1409b912a*/  nop
/*1409b912b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9132*/  jz short loc_1409B9141
/*1409b9134*/ loc_1409B9134: lea rcx, [rbp+2C0h+var_F0]
/*1409b913b*/  call sub_1400104F0
/*1409b9140*/  nop
/*1409b9141*/ loc_1409B9141: call nullsub_1
/*1409b9146*/  mov ecx, 4
/*1409b914b*/  mov edx, 1
/*1409b9150*/  call sub_140001650
/*1409b9155*/  test rax, rax
/*1409b9158*/  jz loc_1409C0351
/*1409b915e*/  mov dword ptr [rax], 6D657469h
/*1409b9164*/  mov qword ptr [rbp+2C0h+var_80], 4
/*1409b916f*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409b9176*/  mov [rbp+2C0h+var_70], 4
/*1409b9181*/  mov [rbp+2C0h+var_12C], 1
/*1409b9188*/ loc_1409B9188: lea rcx, [rbp+2C0h+var_F0]
/*1409b918f*/  lea rdx, [rbp+2C0h+var_120]
/*1409b9196*/  call sub_140B842D0
/*1409b919b*/  nop
/*1409b919c*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b91a3*/  jz loc_1409BF067
/*1409b91a9*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b91b1*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b91b9*/  movdqa [rbp+2C0h+var_50], xmm1
/*1409b91c1*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b91c9*/  mov [rbp+2C0h+var_12C], 0
/*1409b91d0*/  lea r14, [rbp+2C0h+var_F0]
/*1409b91d7*/  lea rdx, [rbp+2C0h+var_208]
/*1409b91de*/  lea r8, [rbp+2C0h+var_80]
/*1409b91e5*/  lea r9, [rbp+2C0h+var_60]
/*1409b91ec*/  mov rcx, r14
/*1409b91ef*/  call sub_140307860
/*1409b91f4*/  nop
/*1409b91f5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b91fc*/  jz short loc_1409B920B
/*1409b91fe*/ loc_1409B91FE: lea rcx, [rbp+2C0h+var_F0]
/*1409b9205*/  call sub_1400104F0
/*1409b920a*/  nop
/*1409b920b*/ loc_1409B920B: movdqu xmm0, [rbp+2C0h+var_208]
/*1409b9213*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409b921b*/  mov rax, [rbp+2C0h+var_1F8]
/*1409b9222*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409b9229*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409b9230*/ loc_1409B9230: mov [rsp+340h+var_320], r14
/*1409b9235*/  lea r8, xmmword_1417A5C30
/*1409b923c*/  lea rcx, [rbp+2C0h+var_60]
/*1409b9243*/  mov r9d, 19h
/*1409b9249*/  mov rdx, rbx
/*1409b924c*/  call sub_1409C6750
/*1409b9251*/  nop
/*1409b9252*/ loc_1409B9252: mov r14, qword ptr [rbp+2C0h+var_60+8]
/*1409b9259*/  mov rbx, qword ptr [rbp+2C0h+var_50]
/*1409b9260*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409b9267*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b926e*/  sub rax, rdx
/*1409b9271*/  cmp rbx, rax
/*1409b9274*/  ja loc_1409BF0A6
/*1409b927a*/  test rbx, rbx
/*1409b927d*/  jz short loc_1409B929B
/*1409b927f*/ loc_1409B927F: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409b9286*/  mov rcx, rdx
/*1409b9289*/  mov rdx, r14
/*1409b928c*/  mov r8, rbx
/*1409b928f*/  call sub_141684120
/*1409b9294*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b929b*/ loc_1409B929B: add rdx, rbx
/*1409b929e*/  mov [rbp+2C0h+var_1D8], rdx
/*1409b92a5*/  mov rdx, qword ptr [rbp+2C0h+var_60]
/*1409b92ac*/  test rdx, rdx
/*1409b92af*/  jz short loc_1409B92BF
/*1409b92b1*/  mov r8d, 1
/*1409b92b7*/  mov rcx, r14
/*1409b92ba*/  call sub_140001660
/*1409b92bf*/ loc_1409B92BF: mov [rbp+2C0h+var_F9], 1
/*1409b92c6*/ loc_1409B92C6: lea rcx, [rbp+2C0h+var_F0]
/*1409b92cd*/  call sub_1400104F0
/*1409b92d2*/  nop
/*1409b92d3*/  movdqu xmm0, [rbp+2C0h+var_120]
/*1409b92db*/  movdqu xmm1, [rbp+2C0h+var_110]
/*1409b92e3*/  movdqa [rbp+2C0h+var_E0], xmm1
/*1409b92eb*/  movdqa [rbp+2C0h+var_F0], xmm0
/*1409b92f3*/  mov rbx, [rdi+40h]
/*1409b92f7*/  cmp rbx, [rdi+30h]
/*1409b92fb*/  jnz short loc_1409B9307
/*1409b92fd*/ loc_1409B92FD: lea rcx, [rdi+30h]
/*1409b9301*/  call sub_1416890A0
/*1409b9306*/  nop
/*1409b9307*/ loc_1409B9307: mov rax, [rdi+38h]
/*1409b930b*/  mov rcx, rbx
/*1409b930e*/  shl rcx, 5
/*1409b9312*/  movdqa xmm0, [rbp+2C0h+var_F0]
/*1409b931a*/  movdqa xmm1, [rbp+2C0h+var_E0]
/*1409b9322*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409b9328*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409b932d*/  inc rbx
/*1409b9330*/  mov [rdi+40h], rbx
/*1409b9334*/  mov rdx, [rbp+2C0h+var_F8]
/*1409b933b*/  test rdx, rdx
/*1409b933e*/  jz short loc_1409B9352
/*1409b9340*/  mov r8d, 1
/*1409b9346*/  mov rcx, [rbp+2C0h+var_238]
/*1409b934d*/  call sub_140001660
/*1409b9352*/ loc_1409B9352: mov rdx, qword ptr [rbp+2C0h+var_220]
/*1409b9359*/  test rdx, rdx
/*1409b935c*/  jz short loc_1409B9370
/*1409b935e*/  mov rcx, qword ptr [rbp+2C0h+var_220+8]
/*1409b9365*/  mov r8d, 1
/*1409b936b*/  call sub_140001660
/*1409b9370*/ loc_1409B9370: mov rdx, qword ptr [rbp+2C0h+var_260]
/*1409b9374*/  test rdx, rdx
/*1409b9377*/  jz short loc_1409B9388
/*1409b9379*/  mov rcx, qword ptr [rbp+2C0h+var_260+8]
/*1409b937d*/  mov r8d, 1
/*1409b9383*/  call sub_140001660
/*1409b9388*/ loc_1409B9388: lea rcx, [rbp+2C0h+var_1D0]
/*1409b938f*/  call sub_1402C6460
/*1409b9394*/  jmp def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409b9399*/ loc_1409B9399: lea rcx, [rbp+2C0h+var_F0+8]; jumptable 00000001409B8D40 case 4  // jumptable 00000001409B8D40 case 4
/*1409b93a0*/  mov rdx, [rax+10h]
/*1409b93a4*/  mov r8, [rax+18h]
/*1409b93a8*/ loc_1409B93A8: call sub_1402CE260
/*1409b93ad*/  nop
/*1409b93ae*/  mov byte ptr [rbp+2C0h+var_F0], 4
/*1409b93b5*/  jmp short loc_1409B93F8
/*1409b93b7*/ loc_1409B93B7: mov byte ptr [rbp+2C0h+var_F0], 0; jumptable 00000001409B8D40 case 0  // jumptable 00000001409B8D40 case 0
/*1409b93be*/  jmp short loc_1409B93F8
/*1409b93c0*/ loc_1409B93C0: add rax, 8; jumptable 00000001409B8D40 case 3  // jumptable 00000001409B8D40 case 3
/*1409b93c4*/  lea rcx, [rbp+2C0h+var_F0+8]
/*1409b93cb*/  mov rdx, rax
/*1409b93ce*/  call sub_14149C500
/*1409b93d3*/  nop
/*1409b93d4*/  mov byte ptr [rbp+2C0h+var_F0], 3
/*1409b93db*/  jmp short loc_1409B93F8
/*1409b93dd*/ loc_1409B93DD: add rax, 8; jumptable 00000001409B8D40 case 5  // jumptable 00000001409B8D40 case 5
/*1409b93e1*/  lea rcx, [rbp+2C0h+var_F0+8]
/*1409b93e8*/  mov rdx, rax
/*1409b93eb*/  call sub_140323EA0
/*1409b93f0*/  nop
/*1409b93f1*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409b93f8*/ loc_1409B93F8: movzx eax, byte ptr [rbp+2C0h+var_F0]
/*1409b93ff*/  mov rcx, qword ptr [rbp+2C0h+var_F0+1]
/*1409b9406*/  mov edx, dword ptr [rbp+2C0h+var_F0+9]
/*1409b940c*/  movzx r8d, word ptr [rbp+2C0h+var_F0+0Dh]
/*1409b9414*/  movzx r9d, byte ptr [rbp+2C0h+var_F0+0Fh]
/*1409b941c*/  movdqa xmm0, [rbp+2C0h+var_E0]
/*1409b9424*/  movdqa [rbp+2C0h+var_110], xmm0
/*1409b942c*/  mov byte ptr [rbp+2C0h+var_120], al
/*1409b9432*/  mov qword ptr [rbp+2C0h+var_120+1], rcx
/*1409b9439*/  mov dword ptr [rbp+2C0h+var_120+9], edx
/*1409b943f*/  mov word ptr [rbp+2C0h+var_120+0Dh], r8w
/*1409b9447*/  mov byte ptr [rbp+2C0h+var_120+0Fh], r9b
/*1409b944e*/  mov byte ptr [rbp+2C0h+var_F0], 0
/*1409b9455*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b945c*/  call sub_1400104F0
/*1409b9461*/  nop
/*1409b9462*/ loc_1409B9462: lea rcx, aType_8; "type"
/*1409b9469*/  lea r8, [rbp+2C0h+var_120]
/*1409b9470*/  mov edx, 4
/*1409b9475*/  call sub_141433D50
/*1409b947a*/  nop
/*1409b947b*/  test rax, rax
/*1409b947e*/  jz short loc_1409B94A4
/*1409b9480*/  xor ecx, ecx
/*1409b9482*/  cmp byte ptr [rax], 3
/*1409b9485*/  cmovz rcx, [rax+18h]
/*1409b948a*/  mov [rbp+2C0h+var_F8], rcx
/*1409b9491*/  mov ecx, 1
/*1409b9496*/  cmovz rcx, [rax+10h]
/*1409b949b*/  mov [rbp+2C0h+var_238], rcx
/*1409b94a2*/  jmp short loc_1409B94BB
/*1409b94a4*/ loc_1409B94A4: mov eax, 1
/*1409b94a9*/  mov [rbp+2C0h+var_238], rax
/*1409b94b0*/  mov [rbp+2C0h+var_F8], 0
/*1409b94bb*/ loc_1409B94BB: lea rdx, [rbp+2C0h+var_1E8]
/*1409b94c2*/  mov rcx, rdi
/*1409b94c5*/  call sub_1409C6650
/*1409b94ca*/  nop
/*1409b94cb*/  mov rax, [rbp+2C0h+var_F8]
/*1409b94d2*/  add rax, 0FFFFFFFFFFFFFFFCh; switch 14 cases  // switch 14 cases
/*1409b94d6*/  cmp rax, 0Dh
/*1409b94da*/  ja def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b94e0*/  lea rcx, jpt_1409B94EE
/*1409b94e7*/  movsxd rax, ds:(jpt_1409B94EE - 1417AA6B0h)[rcx+rax*4]
/*1409b94eb*/  add rax, rcx
/*1409b94ee*/  jmp rax; switch jump  // switch jump
/*1409b94f0*/ loc_1409B94F0: mov rax, [rbp+2C0h+var_238]; jumptable 00000001409B94EE case 4  // jumptable 00000001409B94EE case 4
/*1409b94f7*/  cmp dword ptr [rax], 74786574h
/*1409b94fd*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9503*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b950a*/  mov rcx, rdi
/*1409b950d*/  call sub_1409CB5A0
/*1409b9512*/  nop
/*1409b9513*/  lea rdx, [rbp+2C0h+var_1E8]
/*1409b951a*/  mov rcx, rdi
/*1409b951d*/  call sub_1409C69B0
/*1409b9522*/  nop
/*1409b9523*/  mov r15d, [rdi+168h]
/*1409b952a*/  lea eax, [r15+1]
/*1409b952e*/  mov [rdi+168h], eax
/*1409b9534*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b953b*/  call sub_141356270
/*1409b9540*/  nop
/*1409b9541*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b9549*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b9551*/  mov qword ptr [rbp+2C0h+var_1D0], 0
/*1409b955c*/  mov qword ptr [rbp+2C0h+var_1D0+8], 1
/*1409b9567*/  mov qword ptr [rbp+2C0h+var_1C0], 0
/*1409b9572*/  mov qword ptr [rbp+2C0h+var_E0], 60000020h
/*1409b957d*/  lea rax, [rbp+2C0h+var_1D0]
/*1409b9584*/  mov qword ptr [rbp+2C0h+var_F0], rax
/*1409b958b*/  lea rax, off_1417A9B00
/*1409b9592*/  mov qword ptr [rbp+2C0h+var_F0+8], rax
/*1409b9599*/ loc_1409B9599: lea rcx, [rbp+2C0h+var_60]
/*1409b95a0*/  lea rdx, [rbp+2C0h+var_F0]
/*1409b95a7*/  call sub_1413567D0
/*1409b95ac*/  nop
/*1409b95ad*/  test al, al
/*1409b95af*/  jnz loc_1409BF503
/*1409b95b5*/  mov rax, qword ptr [rbp+2C0h+var_1D0]
/*1409b95bc*/  mov [rbp+2C0h+var_F8], rax
/*1409b95c3*/  mov rcx, qword ptr [rbp+2C0h+var_1D0+8]
/*1409b95ca*/  mov rdx, qword ptr [rbp+2C0h+var_1C0]
/*1409b95d1*/  cmp rdx, 0Ch
/*1409b95d5*/  mov [rbp+2C0h+var_238], rcx
/*1409b95dc*/  jbe loc_1409BBAA5
/*1409b95e2*/  cmp byte ptr [rcx+0Ch], 0BFh
/*1409b95e6*/  jg loc_1409BBAAB
/*1409b95ec*/ loc_1409B95EC: lea rax, off_1417A62C8; "src\\core\\relay\\translator.rs"
/*1409b95f3*/  mov [rsp+340h+var_320], rax
/*1409b95f8*/  mov r9d, 0Ch
/*1409b95fe*/  xor r8d, r8d
/*1409b9601*/  call sub_1416C2F60
/*1409b9607*/  jmp loc_1409C09F1
/*1409b960c*/ loc_1409B960C: mov rax, 745F726576726573h; jumptable 00000001409B94EE case 15  // jumptable 00000001409B94EE case 15
/*1409b9616*/  mov rdx, [rbp+2C0h+var_238]
/*1409b961d*/  xor rax, [rdx]
/*1409b9620*/  mov rcx, 6573755F6C6F6F74h
/*1409b962a*/  xor rcx, [rdx+7]
/*1409b962e*/  or rcx, rax
/*1409b9631*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9637*/ loc_1409B9637: lea rcx, aName_7; "name"
/*1409b963e*/  lea r8, [rbp+2C0h+var_120]
/*1409b9645*/  mov edx, 4
/*1409b964a*/  call sub_141433D50
/*1409b964f*/  nop
/*1409b9650*/  test rax, rax
/*1409b9653*/  jz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9659*/  cmp byte ptr [rax], 3
/*1409b965c*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9662*/  cmp qword ptr [rax+18h], 0Ah
/*1409b9667*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b966d*/  mov rax, [rax+10h]
/*1409b9671*/  mov rcx, 726165735F626577h
/*1409b967b*/  xor rcx, [rax]
/*1409b967e*/  movzx eax, word ptr [rax+8]
/*1409b9682*/  xor rax, 6863h
/*1409b9688*/  or rax, rcx
/*1409b968b*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9691*/  mov r12d, [rdi+168h]
/*1409b9698*/  lea eax, [r12+1]
/*1409b969d*/  mov [rdi+168h], eax
/*1409b96a3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b96aa*/  call sub_141356270
/*1409b96af*/  nop
/*1409b96b0*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b96b8*/  movdqa [rbp+2C0h+var_80], xmm0
/*1409b96c0*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b96c7*/  lea rdx, [rbp+2C0h+var_80]
/*1409b96ce*/  call sub_140A681A0
/*1409b96d3*/  nop
/*1409b96d4*/  mov rcx, qword ptr [rbp+2C0h+var_F0+8]
/*1409b96db*/  mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409b96e2*/  cmp rdx, 0Ch
/*1409b96e6*/  mov [rbp+2C0h+var_F8], rcx
/*1409b96ed*/  jbe loc_1409BDD7D
/*1409b96f3*/  cmp byte ptr [rcx+0Ch], 0BFh
/*1409b96f7*/  jg loc_1409BDD83
/*1409b96fd*/ loc_1409B96FD: lea rax, off_1417A61F8; "src\\core\\relay\\translator.rs"
/*1409b9704*/  mov [rsp+340h+var_320], rax
/*1409b9709*/  mov r9d, 0Ch
/*1409b970f*/  xor r8d, r8d
/*1409b9712*/  call sub_1416C2F60
/*1409b9718*/  jmp loc_1409C09F1
/*1409b971d*/ loc_1409B971D: mov rax, 676E696B6E696874h; jumptable 00000001409B94EE case 8  // jumptable 00000001409B94EE case 8
/*1409b9727*/  mov rcx, [rbp+2C0h+var_238]
/*1409b972e*/  cmp [rcx], rax
/*1409b9731*/  jz loc_1409B97D6
/*1409b9737*/  mov rax, 6573755F6C6F6F74h
/*1409b9741*/  mov rcx, [rbp+2C0h+var_238]
/*1409b9748*/  cmp [rcx], rax
/*1409b974b*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b9751*/  mov eax, [rdi+168h]
/*1409b9757*/  mov [rbp+2C0h+var_268], rax
/*1409b975b*/  inc eax
/*1409b975d*/  mov [rdi+168h], eax
/*1409b9763*/ loc_1409B9763: lea rcx, aId_6; "id"
/*1409b976a*/  lea r8, [rbp+2C0h+var_120]
/*1409b9771*/  mov edx, 2
/*1409b9776*/  call sub_141433D50
/*1409b977b*/  nop
/*1409b977c*/  test rax, rax
/*1409b977f*/  jz loc_1409BCBE2
/*1409b9785*/  xor r14d, r14d
/*1409b9788*/  cmp byte ptr [rax], 3
/*1409b978b*/  cmovz r14, [rax+18h]
/*1409b9790*/  mov r15d, 1
/*1409b9796*/  cmovz r15, [rax+10h]
/*1409b979b*/  jmp loc_1409BCBEB
/*1409b97a0*/ loc_1409B97A0: mov rax, [rbp+2C0h+var_238]; jumptable 00000001409B94EE case 17  // jumptable 00000001409B94EE case 17
/*1409b97a7*/  movdqu xmm0, xmmword ptr [rax]
/*1409b97ab*/  movzx eax, byte ptr [rax+10h]
/*1409b97af*/  movd xmm1, eax
/*1409b97b3*/  pcmpeqb xmm0, cs:xmmword_1417A2D10
/*1409b97bb*/  pcmpeqb xmm1, cs:xmmword_141763F50
/*1409b97c3*/  pand xmm1, xmm0
/*1409b97c7*/  pmovmskb eax, xmm1
/*1409b97cb*/  cmp eax, 0FFFFh
/*1409b97d0*/  jnz def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409b97d6*/ loc_1409B97D6: mov eax, [rdi+168h]
/*1409b97dc*/  mov [rbp+2C0h+var_268], rax
/*1409b97e0*/  inc eax
/*1409b97e2*/  mov [rdi+168h], eax
/*1409b97e8*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b97ef*/  call sub_141356270
/*1409b97f4*/  nop
/*1409b97f5*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b97fd*/  movdqa [rbp+2C0h+var_60], xmm0
/*1409b9805*/  mov qword ptr [rbp+2C0h+var_1D0], 0
/*1409b9810*/  mov qword ptr [rbp+2C0h+var_1D0+8], 1
/*1409b981b*/  mov qword ptr [rbp+2C0h+var_1C0], 0
/*1409b9826*/  mov qword ptr [rbp+2C0h+var_E0], 60000020h
/*1409b9831*/  lea rax, [rbp+2C0h+var_1D0]
/*1409b9838*/  mov qword ptr [rbp+2C0h+var_F0], rax
/*1409b983f*/  lea rax, off_1417A9B00
/*1409b9846*/  mov qword ptr [rbp+2C0h+var_F0+8], rax
/*1409b984d*/ loc_1409B984D: lea rcx, [rbp+2C0h+var_60]
/*1409b9854*/  lea rdx, [rbp+2C0h+var_F0]
/*1409b985b*/  call sub_1413567D0
/*1409b9860*/  nop
/*1409b9861*/  test al, al
/*1409b9863*/  jnz loc_1409BF0EE
/*1409b9869*/  mov rax, qword ptr [rbp+2C0h+var_1D0]
/*1409b9870*/  mov rcx, qword ptr [rbp+2C0h+var_1D0+8]
/*1409b9877*/  mov rdx, qword ptr [rbp+2C0h+var_1C0]
/*1409b987e*/  cmp rdx, 0Ch
/*1409b9882*/  mov [rbp+2C0h+var_248], rax
/*1409b9886*/  mov [rbp+2C0h+var_230], rcx
/*1409b988d*/  jbe short loc_1409B98B5
/*1409b988f*/  cmp byte ptr [rcx+0Ch], 0BFh
/*1409b9893*/  jg short loc_1409B98B7
/*1409b9895*/ loc_1409B9895: lea rax, off_1417A6310; "src\\core\\relay\\translator.rs"
/*1409b989c*/  mov [rsp+340h+var_320], rax
/*1409b98a1*/  mov r9d, 0Ch
/*1409b98a7*/  xor r8d, r8d
/*1409b98aa*/  call sub_1416C2F60
/*1409b98b0*/  jmp loc_1409C09F1
/*1409b98b5*/ loc_1409B98B5: jnz short loc_1409B9895
/*1409b98b7*/ loc_1409B98B7: mov qword ptr [rbp+2C0h+var_80], rcx
/*1409b98be*/  mov qword ptr [rbp+2C0h+var_80+8], 0Ch
/*1409b98c9*/  lea rax, [rbp+2C0h+var_80]
/*1409b98d0*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409b98d7*/  lea rax, sub_14041F680
/*1409b98de*/  mov qword ptr [rbp+2C0h+var_1D0+8], rax
/*1409b98e5*/  lea rdx, unk_1417A5EC8
/*1409b98ec*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b98f3*/  lea r8, [rbp+2C0h+var_1D0]
/*1409b98fa*/  call sub_14149C0F0
/*1409b98ff*/  nop
/*1409b9900*/  mov rdx, [rbp+2C0h+var_248]
/*1409b9904*/  test rdx, rdx
/*1409b9907*/  jz short loc_1409B991B
/*1409b9909*/  mov r8d, 1
/*1409b990f*/  mov rcx, [rbp+2C0h+var_230]
/*1409b9916*/  call sub_140001660
/*1409b991b*/ loc_1409B991B: movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b9923*/  movdqa [rbp+2C0h+var_280], xmm0
/*1409b9928*/  mov rax, qword ptr [rbp+2C0h+var_E0]
/*1409b992f*/  mov [rbp+2C0h+var_270], rax
/*1409b9933*/ loc_1409B9933: lea rcx, aThinking_0; "thinking"
/*1409b993a*/  lea r8, [rbp+2C0h+var_120]
/*1409b9941*/  mov edx, 8
/*1409b9946*/  call sub_141433D50
/*1409b994b*/  nop
/*1409b994c*/  test rax, rax
/*1409b994f*/  jz loc_1409B9FD2
/*1409b9955*/  xor r15d, r15d
/*1409b9958*/  cmp byte ptr [rax], 3
/*1409b995b*/  cmovz r15, [rax+18h]
/*1409b9960*/  mov ebx, 1
/*1409b9965*/  cmovz rbx, [rax+10h]
/*1409b996a*/  jmp loc_1409B9FDA
/*1409b996f*/ loc_1409B996F: lea rcx, [rbp+2C0h+var_F0+8]; jumptable 00000001409B8DF2 case 4  // jumptable 00000001409B8DF2 case 4
/*1409b9976*/  mov rdx, [rax+10h]
/*1409b997a*/  mov r8, [rax+18h]
/*1409b997e*/ loc_1409B997E: call sub_1402CE260
/*1409b9983*/  nop
/*1409b9984*/  mov byte ptr [rbp+2C0h+var_F0], 4
/*1409b998b*/  jmp short loc_1409B99CE
/*1409b998d*/ loc_1409B998D: mov byte ptr [rbp+2C0h+var_F0], 0; jumptable 00000001409B8DF2 case 0  // jumptable 00000001409B8DF2 case 0
/*1409b9994*/  jmp short loc_1409B99CE
/*1409b9996*/ loc_1409B9996: add rax, 8; jumptable 00000001409B8DF2 case 3  // jumptable 00000001409B8DF2 case 3
/*1409b999a*/  lea rcx, [rbp+2C0h+var_F0+8]
/*1409b99a1*/  mov rdx, rax
/*1409b99a4*/  call sub_14149C500
/*1409b99a9*/  nop
/*1409b99aa*/  mov byte ptr [rbp+2C0h+var_F0], 3
/*1409b99b1*/  jmp short loc_1409B99CE
/*1409b99b3*/ loc_1409B99B3: add rax, 8; jumptable 00000001409B8DF2 case 5  // jumptable 00000001409B8DF2 case 5
/*1409b99b7*/  lea rcx, [rbp+2C0h+var_F0+8]
/*1409b99be*/  mov rdx, rax
/*1409b99c1*/  call sub_140323EA0
/*1409b99c6*/  nop
/*1409b99c7*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409b99ce*/ loc_1409B99CE: movzx eax, byte ptr [rbp+2C0h+var_F0]
/*1409b99d5*/  mov rcx, qword ptr [rbp+2C0h+var_F0+1]
/*1409b99dc*/  mov edx, dword ptr [rbp+2C0h+var_F0+9]
/*1409b99e2*/  movzx r8d, word ptr [rbp+2C0h+var_F0+0Dh]
/*1409b99ea*/  movzx r9d, byte ptr [rbp+2C0h+var_F0+0Fh]
/*1409b99f2*/  movdqa xmm0, [rbp+2C0h+var_E0]
/*1409b99fa*/  movdqa [rbp+2C0h+var_50], xmm0
/*1409b9a02*/  mov byte ptr [rbp+2C0h+var_60], al
/*1409b9a08*/  mov qword ptr [rbp+2C0h+var_60+1], rcx
/*1409b9a0f*/  mov dword ptr [rbp+2C0h+var_60+9], edx
/*1409b9a15*/  mov word ptr [rbp+2C0h+var_60+0Dh], r8w
/*1409b9a1d*/  mov byte ptr [rbp+2C0h+var_60+0Fh], r9b
/*1409b9a24*/  mov byte ptr [rbp+2C0h+var_F0], 0
/*1409b9a2b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9a32*/  call sub_1400104F0
/*1409b9a37*/  nop
/*1409b9a38*/ loc_1409B9A38: lea rcx, aType_8; "type"
/*1409b9a3f*/  lea r8, [rbp+2C0h+var_60]
/*1409b9a46*/  mov edx, 4
/*1409b9a4b*/  call sub_141433D50
/*1409b9a50*/  nop
/*1409b9a51*/  test rax, rax
/*1409b9a54*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9a5a*/  cmp byte ptr [rax], 3
/*1409b9a5d*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9a63*/  mov rcx, [rax+18h]
/*1409b9a67*/  add rcx, 0FFFFFFFFFFFFFFF6h; switch 7 cases  // switch 7 cases
/*1409b9a6b*/  cmp rcx, 6
/*1409b9a6f*/  ja def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9a75*/  mov rax, [rax+10h]
/*1409b9a79*/  lea rdx, jpt_1409B9A87
/*1409b9a80*/  movsxd rcx, ds:(jpt_1409B9A87 - 1417AA67Ch)[rdx+rcx*4]
/*1409b9a84*/  add rcx, rdx
/*1409b9a87*/  jmp rcx; switch jump  // switch jump
/*1409b9a89*/ loc_1409B9A89: mov rcx, 6C65645F74786574h; jumptable 00000001409B9A87 case 10  // jumptable 00000001409B9A87 case 10
/*1409b9a93*/  xor rcx, [rax]
/*1409b9a96*/  movzx eax, word ptr [rax+8]
/*1409b9a9a*/  xor rax, 6174h
/*1409b9aa0*/  or rax, rcx
/*1409b9aa3*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9aa9*/  lea rcx, aText_10; "text"
/*1409b9ab0*/  lea r8, [rbp+2C0h+var_60]
/*1409b9ab7*/  mov edx, 4
/*1409b9abc*/  call sub_141433D50
/*1409b9ac1*/  nop
/*1409b9ac2*/ loc_1409B9AC2: test rax, rax
/*1409b9ac5*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9acb*/  cmp byte ptr [rax], 3
/*1409b9ace*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9ad4*/  mov r14, [rax+10h]
/*1409b9ad8*/  mov rbx, [rax+18h]
/*1409b9adc*/  mov qword ptr [rbp+2C0h+var_208], r14
/*1409b9ae3*/  mov qword ptr [rbp+2C0h+var_208+8], rbx
/*1409b9aea*/  test rbx, rbx
/*1409b9aed*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9af3*/  cmp qword ptr [rdi+0B0h], 0FFFFFFFFFFFFFFFFh
/*1409b9afb*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9b01*/  mov rax, [rdi+0C8h]
/*1409b9b08*/  mov rdx, [rdi+0D8h]
/*1409b9b0f*/  sub rax, rdx
/*1409b9b12*/  cmp rbx, rax
/*1409b9b15*/  ja loc_1409BFF10
/*1409b9b1b*/ loc_1409B9B1B: add rdx, [rdi+0D0h]
/*1409b9b22*/  mov rcx, rdx
/*1409b9b25*/  mov rdx, r14
/*1409b9b28*/  mov r8, rbx
/*1409b9b2b*/  call sub_141684120
/*1409b9b30*/  add [rdi+0D8h], rbx
/*1409b9b37*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409b9b42*/  mov [rbp+2C0h+var_70], 0
/*1409b9b4d*/  call nullsub_1
/*1409b9b52*/  mov ecx, 4
/*1409b9b57*/  mov edx, 1
/*1409b9b5c*/  call sub_140001650
/*1409b9b61*/  test rax, rax
/*1409b9b64*/  jz loc_1409C08E5
/*1409b9b6a*/  mov dword ptr [rax], 65707974h
/*1409b9b70*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409b9b7b*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b9b82*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409b9b8d*/  mov [rbp+2C0h+var_130], 1
/*1409b9b94*/ loc_1409B9B94: lea rdx, off_1417A5E28
/*1409b9b9b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9ba2*/  call sub_140B56640
/*1409b9ba7*/  nop
/*1409b9ba8*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9baf*/  jz loc_1409BFF88
/*1409b9bb5*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b9bbd*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b9bc5*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409b9bcd*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409b9bd5*/  mov [rbp+2C0h+var_130], 0
/*1409b9bdc*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9be3*/  lea rdx, [rbp+2C0h+var_80]
/*1409b9bea*/  lea r8, [rbp+2C0h+var_120]
/*1409b9bf1*/  lea r9, [rbp+2C0h+var_1D0]
/*1409b9bf8*/  call sub_140307860
/*1409b9bfd*/  nop
/*1409b9bfe*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9c05*/  jz short loc_1409B9C14
/*1409b9c07*/ loc_1409B9C07: lea rcx, [rbp+2C0h+var_F0]
/*1409b9c0e*/  call sub_1400104F0
/*1409b9c13*/  nop
/*1409b9c14*/ loc_1409B9C14: call nullsub_1
/*1409b9c19*/  mov ecx, 0Ch
/*1409b9c1e*/  mov edx, 1
/*1409b9c23*/  call sub_140001650
/*1409b9c28*/  test rax, rax
/*1409b9c2b*/  jz loc_1409C090F
/*1409b9c31*/  mov rcx, 695F74757074756Fh
/*1409b9c3b*/  mov [rax], rcx
/*1409b9c3e*/  mov dword ptr [rax+8], 7865646Eh
/*1409b9c45*/  mov qword ptr [rbp+2C0h+var_120], 0Ch
/*1409b9c50*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b9c57*/  mov qword ptr [rbp+2C0h+var_110], 0Ch
/*1409b9c62*/  mov eax, [rdi+0E0h]
/*1409b9c68*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409b9c6f*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409b9c7a*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409b9c81*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409b9c88*/  lea rdx, [rbp+2C0h+var_80]
/*1409b9c8f*/  lea r8, [rbp+2C0h+var_120]
/*1409b9c96*/  lea r9, [rbp+2C0h+var_F0]
/*1409b9c9d*/  call sub_140307860
/*1409b9ca2*/  nop
/*1409b9ca3*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409b9caa*/  jz short loc_1409B9CB9
/*1409b9cac*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409b9cb3*/  call sub_1400104F0
/*1409b9cb8*/  nop
/*1409b9cb9*/ loc_1409B9CB9: call nullsub_1
/*1409b9cbe*/  mov ecx, 7
/*1409b9cc3*/  mov edx, 1
/*1409b9cc8*/  call sub_140001650
/*1409b9ccd*/  test rax, rax
/*1409b9cd0*/  jz loc_1409C0939
/*1409b9cd6*/  lea rdx, [rdi+0B0h]
/*1409b9cdd*/  mov dword ptr [rax+3], 64695F6Dh
/*1409b9ce4*/  mov dword ptr [rax], 6D657469h
/*1409b9cea*/  mov qword ptr [rbp+2C0h+var_120], 7
/*1409b9cf5*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b9cfc*/  mov qword ptr [rbp+2C0h+var_110], 7
/*1409b9d07*/  mov [rbp+2C0h+var_131], 1
/*1409b9d0e*/ loc_1409B9D0E: lea rcx, [rbp+2C0h+var_F0]
/*1409b9d15*/  call sub_140B56520
/*1409b9d1a*/  nop
/*1409b9d1b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9d22*/  jz loc_1409C0006
/*1409b9d28*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b9d30*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b9d38*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409b9d40*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409b9d48*/  mov [rbp+2C0h+var_131], 0
/*1409b9d4f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9d56*/  lea rdx, [rbp+2C0h+var_80]
/*1409b9d5d*/  lea r8, [rbp+2C0h+var_120]
/*1409b9d64*/  lea r9, [rbp+2C0h+var_1D0]
/*1409b9d6b*/  call sub_140307860
/*1409b9d70*/  nop
/*1409b9d71*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9d78*/  jz short loc_1409B9D87
/*1409b9d7a*/ loc_1409B9D7A: lea rcx, [rbp+2C0h+var_F0]
/*1409b9d81*/  call sub_1400104F0
/*1409b9d86*/  nop
/*1409b9d87*/ loc_1409B9D87: call nullsub_1
/*1409b9d8c*/  mov ecx, 0Dh
/*1409b9d91*/  mov edx, 1
/*1409b9d96*/  call sub_140001650
/*1409b9d9b*/  test rax, rax
/*1409b9d9e*/  jz loc_1409C0963
/*1409b9da4*/  mov rcx, 7865646E695F746Eh
/*1409b9dae*/  mov [rax+5], rcx
/*1409b9db2*/  mov rcx, 5F746E65746E6F63h
/*1409b9dbc*/  mov [rax], rcx
/*1409b9dbf*/  mov qword ptr [rbp+2C0h+var_120], 0Dh
/*1409b9dca*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b9dd1*/  mov qword ptr [rbp+2C0h+var_110], 0Dh
/*1409b9ddc*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409b9de3*/  pxor xmm0, xmm0
/*1409b9de7*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409b9def*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409b9df6*/  lea rdx, [rbp+2C0h+var_80]
/*1409b9dfd*/  lea r8, [rbp+2C0h+var_120]
/*1409b9e04*/  lea r9, [rbp+2C0h+var_F0]
/*1409b9e0b*/  call sub_140307860
/*1409b9e10*/  nop
/*1409b9e11*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409b9e18*/  jz short loc_1409B9E27
/*1409b9e1a*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409b9e21*/  call sub_1400104F0
/*1409b9e26*/  nop
/*1409b9e27*/ loc_1409B9E27: call nullsub_1
/*1409b9e2c*/  mov ecx, 5
/*1409b9e31*/  mov edx, 1
/*1409b9e36*/  call sub_140001650
/*1409b9e3b*/  test rax, rax
/*1409b9e3e*/  jz loc_1409C0987
/*1409b9e44*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409b9e48*/  mov dword ptr [rax], 746C6564h
/*1409b9e4e*/  mov qword ptr [rbp+2C0h+var_120], 5
/*1409b9e59*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409b9e60*/  mov qword ptr [rbp+2C0h+var_110], 5
/*1409b9e6b*/  mov [rbp+2C0h+var_132], 1
/*1409b9e72*/ loc_1409B9E72: lea rcx, [rbp+2C0h+var_F0]
/*1409b9e79*/  lea rdx, [rbp+2C0h+var_208]
/*1409b9e80*/  call sub_140B56640
/*1409b9e85*/  nop
/*1409b9e86*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9e8d*/  jz loc_1409C0084
/*1409b9e93*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409b9e9b*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409b9ea3*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409b9eab*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409b9eb3*/  mov [rbp+2C0h+var_132], 0
/*1409b9eba*/  lea rbx, [rbp+2C0h+var_F0]
/*1409b9ec1*/  lea rdx, [rbp+2C0h+var_80]
/*1409b9ec8*/  lea r8, [rbp+2C0h+var_120]
/*1409b9ecf*/  lea r9, [rbp+2C0h+var_1D0]
/*1409b9ed6*/  mov rcx, rbx
/*1409b9ed9*/  call sub_140307860
/*1409b9ede*/  nop
/*1409b9edf*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409b9ee6*/  jz short loc_1409B9EF5
/*1409b9ee8*/ loc_1409B9EE8: lea rcx, [rbp+2C0h+var_F0]
/*1409b9eef*/  call sub_1400104F0
/*1409b9ef4*/  nop
/*1409b9ef5*/ loc_1409B9EF5: add rdi, 160h
/*1409b9efc*/  movdqu xmm0, [rbp+2C0h+var_80]
/*1409b9f04*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409b9f0c*/  mov rax, [rbp+2C0h+var_70]
/*1409b9f13*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409b9f1a*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409b9f21*/ loc_1409B9F21: mov [rsp+340h+var_320], rbx
/*1409b9f26*/  lea r8, xmmword_1417A5E08
/*1409b9f2d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409b9f34*/  mov r9d, 1Ah
/*1409b9f3a*/  mov rdx, rdi
/*1409b9f3d*/  call sub_1409C6750
/*1409b9f42*/  nop
/*1409b9f43*/ loc_1409B9F43: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409b9f4a*/  mov [rbp+2C0h+var_F8], rax
/*1409b9f51*/  mov rdi, qword ptr [rbp+2C0h+var_1C0]
/*1409b9f58*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409b9f5f*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b9f66*/  sub rax, rdx
/*1409b9f69*/  cmp rdi, rax
/*1409b9f6c*/  ja loc_1409C0102
/*1409b9f72*/  test rdi, rdi
/*1409b9f75*/  jz short loc_1409B9F97
/*1409b9f77*/ loc_1409B9F77: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409b9f7e*/  mov rcx, rdx
/*1409b9f81*/  mov rdx, [rbp+2C0h+var_F8]
/*1409b9f88*/  mov r8, rdi
/*1409b9f8b*/  call sub_141684120
/*1409b9f90*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409b9f97*/ loc_1409B9F97: add rdx, rdi
/*1409b9f9a*/  mov [rbp+2C0h+var_1D8], rdx
/*1409b9fa1*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409b9fa8*/  test rdx, rdx
/*1409b9fab*/  jz short loc_1409B9FC0
/*1409b9fad*/  mov r8d, 1
/*1409b9fb3*/  mov rcx, [rbp+2C0h+var_F8]
/*1409b9fba*/  call sub_140001660
/*1409b9fbf*/  nop
/*1409b9fc0*/ loc_1409B9FC0: lea rcx, [rbp+2C0h+var_F0]
/*1409b9fc7*/  call sub_1400104F0
/*1409b9fcc*/  nop
/*1409b9fcd*/ loc_1409B9FCD: jmp def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409b9fd2*/ loc_1409B9FD2: mov ebx, 1
/*1409b9fd7*/  xor r15d, r15d
/*1409b9fda*/ loc_1409B9FDA: mov [rsp+340h+var_320], 1
/*1409b9fe3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409b9fea*/  mov r9d, 1
/*1409b9ff0*/  mov rdx, r15
/*1409b9ff3*/  xor r8d, r8d
/*1409b9ff6*/  call sub_140388B60
/*1409b9ffb*/  mov r14, qword ptr [rbp+2C0h+var_F0+8]
/*1409ba002*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409ba009*/  jz loc_1409BF11F
/*1409ba00f*/  mov r12, qword ptr [rbp+2C0h+var_E0]
/*1409ba016*/  test r15, r15
/*1409ba019*/  jz short loc_1409BA029
/*1409ba01b*/  mov rcx, r12
/*1409ba01e*/  mov rdx, rbx
/*1409ba021*/  mov r8, r15
/*1409ba024*/  call sub_141684120
/*1409ba029*/ loc_1409BA029: mov qword ptr [rbp+2C0h+var_260], r14
/*1409ba02d*/  mov qword ptr [rbp+2C0h+var_260+8], r12
/*1409ba031*/  mov [rbp+2C0h+var_250], r15
/*1409ba035*/  mov [rbp+2C0h+var_298], r14
/*1409ba039*/ loc_1409BA039: lea rcx, aSignature; "signature"
/*1409ba040*/  lea r8, [rbp+2C0h+var_120]
/*1409ba047*/  mov edx, 9
/*1409ba04c*/  call sub_141433D50
/*1409ba051*/  nop
/*1409ba052*/ loc_1409BA052: test rax, rax
/*1409ba055*/  jz short loc_1409BA06E
/*1409ba057*/  xor ebx, ebx
/*1409ba059*/  cmp byte ptr [rax], 3
/*1409ba05c*/  cmovz rbx, [rax+18h]
/*1409ba061*/  mov r12d, 1
/*1409ba067*/  cmovz r12, [rax+10h]
/*1409ba06c*/  jmp short loc_1409BA076
/*1409ba06e*/ loc_1409BA06E: mov r12d, 1
/*1409ba074*/  xor ebx, ebx
/*1409ba076*/ loc_1409BA076: mov [rsp+340h+var_320], 1
/*1409ba07f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba086*/  mov r9d, 1
/*1409ba08c*/  mov rdx, rbx
/*1409ba08f*/  xor r8d, r8d
/*1409ba092*/  call sub_140388B60
/*1409ba097*/  mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409ba09e*/  mov [rbp+2C0h+var_290], rax
/*1409ba0a2*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409ba0a9*/  jz loc_1409BF134
/*1409ba0af*/  mov r14, qword ptr [rbp+2C0h+var_E0]
/*1409ba0b6*/  test rbx, rbx
/*1409ba0b9*/  jz short loc_1409BA0CA
/*1409ba0bb*/  mov rcx, r14
/*1409ba0be*/  mov rdx, r12
/*1409ba0c1*/  mov r8, rbx
/*1409ba0c4*/  call sub_141684120
/*1409ba0c9*/  nop
/*1409ba0ca*/ loc_1409BA0CA: mov [rbp+2C0h+var_2B8], r14
/*1409ba0ce*/  lea rcx, aData_0; "data"
/*1409ba0d5*/  lea r8, [rbp+2C0h+var_120]
/*1409ba0dc*/  mov edx, 4
/*1409ba0e1*/  call sub_141433D50
/*1409ba0e6*/  nop
/*1409ba0e7*/ loc_1409BA0E7: test rax, rax
/*1409ba0ea*/  jz short loc_1409BA104
/*1409ba0ec*/  xor r14d, r14d
/*1409ba0ef*/  cmp byte ptr [rax], 3
/*1409ba0f2*/  cmovz r14, [rax+18h]
/*1409ba0f7*/  mov r12d, 1
/*1409ba0fd*/  cmovz r12, [rax+10h]
/*1409ba102*/  jmp short loc_1409BA10D
/*1409ba104*/ loc_1409BA104: mov r12d, 1
/*1409ba10a*/  xor r14d, r14d
/*1409ba10d*/ loc_1409BA10D: mov [rsp+340h+var_320], 1
/*1409ba116*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba11d*/  mov r9d, 1
/*1409ba123*/  mov rdx, r14
/*1409ba126*/  xor r8d, r8d
/*1409ba129*/  call sub_140388B60
/*1409ba12e*/  mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409ba135*/  mov [rbp+2C0h+var_288], rax
/*1409ba139*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409ba140*/  jz loc_1409BF14E
/*1409ba146*/  mov r13, qword ptr [rbp+2C0h+var_E0]
/*1409ba14d*/  test r14, r14
/*1409ba150*/  jz short loc_1409BA160
/*1409ba152*/  mov rcx, r13
/*1409ba155*/  mov rdx, r12
/*1409ba158*/  mov r8, r14
/*1409ba15b*/  call sub_141684120
/*1409ba160*/ loc_1409BA160: mov [rbp+2C0h+var_248], r13
/*1409ba164*/  mov qword ptr [rbp+2C0h+var_220], 0
/*1409ba16f*/  mov [rbp+2C0h+var_210], 0
/*1409ba17a*/  call nullsub_1
/*1409ba17f*/  mov ecx, 4
/*1409ba184*/  mov edx, 1
/*1409ba189*/  call sub_140001650
/*1409ba18e*/  test rax, rax
/*1409ba191*/  jz loc_1409C0366
/*1409ba197*/  mov dword ptr [rax], 65707974h
/*1409ba19d*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409ba1a8*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba1af*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409ba1ba*/  mov [rbp+2C0h+var_159], 1
/*1409ba1c1*/ loc_1409BA1C1: lea rdx, off_1417A5DA8
/*1409ba1c8*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba1cf*/  call sub_140B56640
/*1409ba1d4*/  nop
/*1409ba1d5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba1dc*/  jz loc_1409BF164
/*1409ba1e2*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba1ea*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba1f2*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba1fa*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba202*/  mov [rbp+2C0h+var_159], 0
/*1409ba209*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba210*/  lea rdx, [rbp+2C0h+var_220]
/*1409ba217*/  lea r8, [rbp+2C0h+var_60]
/*1409ba21e*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba225*/  call sub_140307860
/*1409ba22a*/  nop
/*1409ba22b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba232*/  jz short loc_1409BA241
/*1409ba234*/ loc_1409BA234: lea rcx, [rbp+2C0h+var_F0]
/*1409ba23b*/  call sub_1400104F0
/*1409ba240*/  nop
/*1409ba241*/ loc_1409BA241: call nullsub_1
/*1409ba246*/  mov ecx, 0Ch
/*1409ba24b*/  mov edx, 1
/*1409ba250*/  call sub_140001650
/*1409ba255*/  test rax, rax
/*1409ba258*/  jz loc_1409C037B
/*1409ba25e*/  mov rcx, 695F74757074756Fh
/*1409ba268*/  mov [rax], rcx
/*1409ba26b*/  mov dword ptr [rax+8], 7865646Eh
/*1409ba272*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409ba27d*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba284*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409ba28f*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409ba296*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409ba2a1*/  mov rax, [rbp+2C0h+var_268]
/*1409ba2a5*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409ba2ac*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba2b3*/  lea rdx, [rbp+2C0h+var_220]
/*1409ba2ba*/  lea r8, [rbp+2C0h+var_60]
/*1409ba2c1*/  lea r9, [rbp+2C0h+var_F0]
/*1409ba2c8*/  call sub_140307860
/*1409ba2cd*/  nop
/*1409ba2ce*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409ba2d5*/  jz short loc_1409BA2E4
/*1409ba2d7*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba2de*/  call sub_1400104F0
/*1409ba2e3*/  nop
/*1409ba2e4*/ loc_1409BA2E4: call nullsub_1
/*1409ba2e9*/  mov ecx, 7
/*1409ba2ee*/  mov edx, 1
/*1409ba2f3*/  call sub_140001650
/*1409ba2f8*/  test rax, rax
/*1409ba2fb*/  jz loc_1409C0390
/*1409ba301*/  mov dword ptr [rax+3], 64695F6Dh
/*1409ba308*/  mov dword ptr [rax], 6D657469h
/*1409ba30e*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409ba319*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba320*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409ba32b*/  lea r12, [rbp+2C0h+var_280]
/*1409ba32f*/  mov qword ptr [rbp+2C0h+var_80], r12
/*1409ba336*/  mov [rbp+2C0h+var_15A], 1
/*1409ba33d*/ loc_1409BA33D: lea rcx, [rbp+2C0h+var_F0]
/*1409ba344*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba34b*/  call sub_140B565B0
/*1409ba350*/  nop
/*1409ba351*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba358*/  jz loc_1409BF1A3
/*1409ba35e*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba366*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba36e*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba376*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba37e*/  mov [rbp+2C0h+var_15A], 0
/*1409ba385*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba38c*/  lea rdx, [rbp+2C0h+var_220]
/*1409ba393*/  lea r8, [rbp+2C0h+var_60]
/*1409ba39a*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba3a1*/  call sub_140307860
/*1409ba3a6*/  nop
/*1409ba3a7*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba3ae*/  jz short loc_1409BA3BD
/*1409ba3b0*/ loc_1409BA3B0: lea rcx, [rbp+2C0h+var_F0]
/*1409ba3b7*/  call sub_1400104F0
/*1409ba3bc*/  nop
/*1409ba3bd*/ loc_1409BA3BD: call nullsub_1
/*1409ba3c2*/  mov ecx, 4
/*1409ba3c7*/  mov edx, 1
/*1409ba3cc*/  call sub_140001650
/*1409ba3d1*/  test rax, rax
/*1409ba3d4*/  jz loc_1409C03A5
/*1409ba3da*/  mov dword ptr [rax], 6D657469h
/*1409ba3e0*/  mov qword ptr [rbp+2C0h+var_208], 4
/*1409ba3eb*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409ba3f2*/  mov [rbp+2C0h+var_1F8], 4
/*1409ba3fd*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409ba408*/  mov [rbp+2C0h+var_70], 0
/*1409ba413*/  call nullsub_1
/*1409ba418*/  mov ecx, 4
/*1409ba41d*/  mov edx, 1
/*1409ba422*/  call sub_140001650
/*1409ba427*/  test rax, rax
/*1409ba42a*/  jz loc_1409C03BA
/*1409ba430*/  mov dword ptr [rax], 65707974h
/*1409ba436*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409ba441*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba448*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409ba453*/  mov [rbp+2C0h+var_15B], 1
/*1409ba45a*/ loc_1409BA45A: lea rdx, off_1417A5E60; "reasoning"
/*1409ba461*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba468*/  call sub_140B56640
/*1409ba46d*/  nop
/*1409ba46e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba475*/  jz loc_1409BF1E2
/*1409ba47b*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba483*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba48b*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba493*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba49b*/  mov [rbp+2C0h+var_15B], 0
/*1409ba4a2*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba4a9*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba4b0*/  lea r8, [rbp+2C0h+var_60]
/*1409ba4b7*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba4be*/  call sub_140307860
/*1409ba4c3*/  nop
/*1409ba4c4*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba4cb*/  jz short loc_1409BA4DA
/*1409ba4cd*/ loc_1409BA4CD: lea rcx, [rbp+2C0h+var_F0]
/*1409ba4d4*/  call sub_1400104F0
/*1409ba4d9*/  nop
/*1409ba4da*/ loc_1409BA4DA: call nullsub_1
/*1409ba4df*/  mov ecx, 2
/*1409ba4e4*/  mov edx, 1
/*1409ba4e9*/  call sub_140001650
/*1409ba4ee*/  test rax, rax
/*1409ba4f1*/  jz loc_1409C03CF
/*1409ba4f7*/  mov word ptr [rax], 6469h
/*1409ba4fc*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409ba507*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba50e*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409ba519*/  mov qword ptr [rbp+2C0h+var_2B0], r12
/*1409ba51d*/  mov [rbp+2C0h+var_15C], 1
/*1409ba524*/ loc_1409BA524: lea rcx, [rbp+2C0h+var_F0]
/*1409ba52b*/  lea rdx, [rbp+2C0h+var_2B0]
/*1409ba52f*/  call sub_140B565B0
/*1409ba534*/  nop
/*1409ba535*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba53c*/  jz loc_1409BF221
/*1409ba542*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba54a*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba552*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba55a*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba562*/  mov [rbp+2C0h+var_15C], 0
/*1409ba569*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba570*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba577*/  lea r8, [rbp+2C0h+var_60]
/*1409ba57e*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba585*/  call sub_140307860
/*1409ba58a*/  nop
/*1409ba58b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba592*/  jz short loc_1409BA5A1
/*1409ba594*/ loc_1409BA594: lea rcx, [rbp+2C0h+var_F0]
/*1409ba59b*/  call sub_1400104F0
/*1409ba5a0*/  nop
/*1409ba5a1*/ loc_1409BA5A1: call nullsub_1
/*1409ba5a6*/  mov ecx, 6
/*1409ba5ab*/  mov edx, 1
/*1409ba5b0*/  call sub_140001650
/*1409ba5b5*/  test rax, rax
/*1409ba5b8*/  jz loc_1409C03E4
/*1409ba5be*/  mov word ptr [rax+4], 7375h
/*1409ba5c4*/  mov dword ptr [rax], 74617473h
/*1409ba5ca*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409ba5d5*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba5dc*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409ba5e7*/  mov [rbp+2C0h+var_15D], 1
/*1409ba5ee*/ loc_1409BA5EE: lea rdx, off_1417A5BB8; "in_progress"
/*1409ba5f5*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba5fc*/  call sub_140B56640
/*1409ba601*/  nop
/*1409ba602*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba609*/  jz loc_1409BF260
/*1409ba60f*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba617*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba61f*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba627*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba62f*/  mov [rbp+2C0h+var_15D], 0
/*1409ba636*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba63d*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba644*/  lea r8, [rbp+2C0h+var_60]
/*1409ba64b*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba652*/  call sub_140307860
/*1409ba657*/  nop
/*1409ba658*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba65f*/  jz short loc_1409BA66E
/*1409ba661*/ loc_1409BA661: lea rcx, [rbp+2C0h+var_F0]
/*1409ba668*/  call sub_1400104F0
/*1409ba66d*/  nop
/*1409ba66e*/ loc_1409BA66E: call nullsub_1
/*1409ba673*/  mov ecx, 7
/*1409ba678*/  mov edx, 1
/*1409ba67d*/  call sub_140001650
/*1409ba682*/  test rax, rax
/*1409ba685*/  jz loc_1409C03F9
/*1409ba68b*/  mov dword ptr [rax+3], 7972616Dh
/*1409ba692*/  mov dword ptr [rax], 6D6D7573h
/*1409ba698*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409ba6a3*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba6aa*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409ba6b5*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409ba6c0*/  mov qword ptr [rbp+2C0h+var_E0], 8
/*1409ba6cb*/  mov qword ptr [rbp+2C0h+var_E0+8], 0
/*1409ba6d6*/  mov byte ptr [rbp+2C0h+var_F0], 4
/*1409ba6dd*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba6e4*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba6eb*/  lea r8, [rbp+2C0h+var_60]
/*1409ba6f2*/  lea r9, [rbp+2C0h+var_F0]
/*1409ba6f9*/  call sub_140307860
/*1409ba6fe*/  nop
/*1409ba6ff*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409ba706*/  jz short loc_1409BA715
/*1409ba708*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba70f*/  call sub_1400104F0
/*1409ba714*/  nop
/*1409ba715*/ loc_1409BA715: call nullsub_1
/*1409ba71a*/  mov ecx, 11h
/*1409ba71f*/  mov edx, 1
/*1409ba724*/  call sub_140001650
/*1409ba729*/  test rax, rax
/*1409ba72c*/  jz loc_1409C040E
/*1409ba732*/  movdqu xmm0, xmmword ptr cs:aEncryptedConte_0; "encrypted_content"
/*1409ba73a*/  movdqu xmmword ptr [rax], xmm0
/*1409ba73e*/  mov byte ptr [rax+10h], 74h ; 't'
/*1409ba742*/  mov qword ptr [rbp+2C0h+var_60], 11h
/*1409ba74d*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba754*/  mov qword ptr [rbp+2C0h+var_50], 11h
/*1409ba75f*/  mov byte ptr [rbp+2C0h+var_F0], 0
/*1409ba766*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba76d*/  lea rdx, [rbp+2C0h+var_80]
/*1409ba774*/  lea r8, [rbp+2C0h+var_60]
/*1409ba77b*/  lea r9, [rbp+2C0h+var_F0]
/*1409ba782*/  call sub_140307860
/*1409ba787*/  nop
/*1409ba788*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409ba78f*/  jz short loc_1409BA79E
/*1409ba791*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba798*/  call sub_1400104F0
/*1409ba79d*/  nop
/*1409ba79e*/ loc_1409BA79E: movdqu xmm0, [rbp+2C0h+var_80]
/*1409ba7a6*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409ba7ae*/  mov rax, [rbp+2C0h+var_70]
/*1409ba7b5*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409ba7bc*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409ba7c3*/  mov [rbp+2C0h+var_226], 0
/*1409ba7ca*/ loc_1409BA7CA: lea rcx, [rbp+2C0h+var_1D0]
/*1409ba7d1*/  lea rdx, [rbp+2C0h+var_220]
/*1409ba7d8*/  lea r8, [rbp+2C0h+var_208]
/*1409ba7df*/  lea r13, [rbp+2C0h+var_F0]
/*1409ba7e6*/  mov r9, r13
/*1409ba7e9*/  call sub_140307860
/*1409ba7ee*/  nop
/*1409ba7ef*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409ba7f6*/  jz short loc_1409BA805
/*1409ba7f8*/ loc_1409BA7F8: lea rcx, [rbp+2C0h+var_1D0]
/*1409ba7ff*/  call sub_1400104F0
/*1409ba804*/  nop
/*1409ba805*/ loc_1409BA805: lea rdx, [rdi+160h]
/*1409ba80c*/  movdqu xmm0, [rbp+2C0h+var_220]
/*1409ba814*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409ba81c*/  mov rax, [rbp+2C0h+var_210]
/*1409ba823*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409ba82a*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409ba831*/ loc_1409BA831: mov [rsp+340h+var_320], r13
/*1409ba836*/  lea r8, xmmword_1417A5D88
/*1409ba83d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409ba844*/  mov r9d, 1Ah
/*1409ba84a*/  call sub_1409C6750
/*1409ba84f*/  nop
/*1409ba850*/ loc_1409BA850: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409ba857*/  mov [rbp+2C0h+var_230], rax
/*1409ba85e*/  mov r13, qword ptr [rbp+2C0h+var_1C0]
/*1409ba865*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409ba86c*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409ba873*/  sub rax, rdx
/*1409ba876*/  cmp r13, rax
/*1409ba879*/  ja loc_1409BF29F
/*1409ba87f*/  test r13, r13
/*1409ba882*/  jz short loc_1409BA8A4
/*1409ba884*/ loc_1409BA884: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409ba88b*/  mov rcx, rdx
/*1409ba88e*/  mov rdx, [rbp+2C0h+var_230]
/*1409ba895*/  mov r8, r13
/*1409ba898*/  call sub_141684120
/*1409ba89d*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409ba8a4*/ loc_1409BA8A4: add rdx, r13
/*1409ba8a7*/  mov [rbp+2C0h+var_1D8], rdx
/*1409ba8ae*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409ba8b5*/  test rdx, rdx
/*1409ba8b8*/  jz short loc_1409BA8CD
/*1409ba8ba*/  mov r8d, 1
/*1409ba8c0*/  mov rcx, [rbp+2C0h+var_230]
/*1409ba8c7*/  call sub_140001660
/*1409ba8cc*/  nop
/*1409ba8cd*/ loc_1409BA8CD: lea rcx, [rbp+2C0h+var_F0]
/*1409ba8d4*/  call sub_1400104F0
/*1409ba8d9*/  nop
/*1409ba8da*/  cmp [rbp+2C0h+var_F8], 11h
/*1409ba8e2*/  jnz short loc_1409BA91A
/*1409ba8e4*/  mov rax, [rbp+2C0h+var_238]
/*1409ba8eb*/  movdqu xmm0, xmmword ptr [rax]
/*1409ba8ef*/  movzx eax, byte ptr [rax+10h]
/*1409ba8f3*/  movd xmm1, eax
/*1409ba8f7*/  pcmpeqb xmm0, cs:xmmword_1417A2D10
/*1409ba8ff*/  pcmpeqb xmm1, cs:xmmword_141763F50
/*1409ba907*/  pand xmm1, xmm0
/*1409ba90b*/  pmovmskb eax, xmm1
/*1409ba90f*/  cmp eax, 0FFFFh
/*1409ba914*/  jz loc_1409BAF2F
/*1409ba91a*/ loc_1409BA91A: mov qword ptr [rbp+2C0h+var_220], 0
/*1409ba925*/  mov [rbp+2C0h+var_210], 0
/*1409ba930*/  call nullsub_1
/*1409ba935*/  mov ecx, 4
/*1409ba93a*/  mov edx, 1
/*1409ba93f*/  call sub_140001650
/*1409ba944*/  test rax, rax
/*1409ba947*/  jz loc_1409C0423
/*1409ba94d*/  mov dword ptr [rax], 65707974h
/*1409ba953*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409ba95e*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409ba965*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409ba970*/  mov [rbp+2C0h+var_15E], 1
/*1409ba977*/ loc_1409BA977: lea rdx, off_1417A6398; "response.reasoning_summary_part.added"
/*1409ba97e*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba985*/  call sub_140B56640
/*1409ba98a*/  nop
/*1409ba98b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba992*/  jz loc_1409BF2CA
/*1409ba998*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409ba9a0*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409ba9a8*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409ba9b0*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409ba9b8*/  mov [rbp+2C0h+var_15E], 0
/*1409ba9bf*/  lea rcx, [rbp+2C0h+var_F0]
/*1409ba9c6*/  lea rdx, [rbp+2C0h+var_220]
/*1409ba9cd*/  lea r8, [rbp+2C0h+var_60]
/*1409ba9d4*/  lea r9, [rbp+2C0h+var_1D0]
/*1409ba9db*/  call sub_140307860
/*1409ba9e0*/  nop
/*1409ba9e1*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409ba9e8*/  jz short loc_1409BA9F7
/*1409ba9ea*/ loc_1409BA9EA: lea rcx, [rbp+2C0h+var_F0]
/*1409ba9f1*/  call sub_1400104F0
/*1409ba9f6*/  nop
/*1409ba9f7*/ loc_1409BA9F7: call nullsub_1
/*1409ba9fc*/  mov ecx, 0Ch
/*1409baa01*/  mov edx, 1
/*1409baa06*/  call sub_140001650
/*1409baa0b*/  test rax, rax
/*1409baa0e*/  jz loc_1409C0438
/*1409baa14*/  mov rcx, 695F74757074756Fh
/*1409baa1e*/  mov [rax], rcx
/*1409baa21*/  mov dword ptr [rax+8], 7865646Eh
/*1409baa28*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409baa33*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409baa3a*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409baa45*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409baa4c*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409baa57*/  mov rax, [rbp+2C0h+var_268]
/*1409baa5b*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409baa62*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409baa69*/  lea rdx, [rbp+2C0h+var_220]
/*1409baa70*/  lea r8, [rbp+2C0h+var_60]
/*1409baa77*/  lea r9, [rbp+2C0h+var_F0]
/*1409baa7e*/  call sub_140307860
/*1409baa83*/  nop
/*1409baa84*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409baa8b*/  jz short loc_1409BAA9A
/*1409baa8d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409baa94*/  call sub_1400104F0
/*1409baa99*/  nop
/*1409baa9a*/ loc_1409BAA9A: call nullsub_1
/*1409baa9f*/  mov ecx, 7
/*1409baaa4*/  mov edx, 1
/*1409baaa9*/  call sub_140001650
/*1409baaae*/  test rax, rax
/*1409baab1*/  jz loc_1409C044D
/*1409baab7*/  mov dword ptr [rax+3], 64695F6Dh
/*1409baabe*/  mov dword ptr [rax], 6D657469h
/*1409baac4*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409baacf*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409baad6*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409baae1*/  mov qword ptr [rbp+2C0h+var_80], r12
/*1409baae8*/  mov [rbp+2C0h+var_15F], 1
/*1409baaef*/ loc_1409BAAEF: lea rcx, [rbp+2C0h+var_F0]
/*1409baaf6*/  lea rdx, [rbp+2C0h+var_80]
/*1409baafd*/  call sub_140B565B0
/*1409bab02*/  nop
/*1409bab03*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bab0a*/  jz loc_1409BF309
/*1409bab10*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bab18*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bab20*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bab28*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bab30*/  mov [rbp+2C0h+var_15F], 0
/*1409bab37*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bab3e*/  lea rdx, [rbp+2C0h+var_220]
/*1409bab45*/  lea r8, [rbp+2C0h+var_60]
/*1409bab4c*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bab53*/  call sub_140307860
/*1409bab58*/  nop
/*1409bab59*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bab60*/  jz short loc_1409BAB6F
/*1409bab62*/ loc_1409BAB62: lea rcx, [rbp+2C0h+var_F0]
/*1409bab69*/  call sub_1400104F0
/*1409bab6e*/  nop
/*1409bab6f*/ loc_1409BAB6F: call nullsub_1
/*1409bab74*/  mov ecx, 0Dh
/*1409bab79*/  mov edx, 1
/*1409bab7e*/  call sub_140001650
/*1409bab83*/  test rax, rax
/*1409bab86*/  jz loc_1409C0462
/*1409bab8c*/  mov rcx, 7865646E695F7972h
/*1409bab96*/  mov [rax+5], rcx
/*1409bab9a*/  mov rcx, 5F7972616D6D7573h
/*1409baba4*/  mov [rax], rcx
/*1409baba7*/  mov qword ptr [rbp+2C0h+var_60], 0Dh
/*1409babb2*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409babb9*/  mov qword ptr [rbp+2C0h+var_50], 0Dh
/*1409babc4*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409babcb*/  pxor xmm0, xmm0
/*1409babcf*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409babd7*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409babde*/  lea rdx, [rbp+2C0h+var_220]
/*1409babe5*/  lea r8, [rbp+2C0h+var_60]
/*1409babec*/  lea r9, [rbp+2C0h+var_F0]
/*1409babf3*/  call sub_140307860
/*1409babf8*/  nop
/*1409babf9*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bac00*/  jz short loc_1409BAC0F
/*1409bac02*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bac09*/  call sub_1400104F0
/*1409bac0e*/  nop
/*1409bac0f*/ loc_1409BAC0F: call nullsub_1
/*1409bac14*/  mov ecx, 4
/*1409bac19*/  mov edx, 1
/*1409bac1e*/  call sub_140001650
/*1409bac23*/  test rax, rax
/*1409bac26*/  jz loc_1409C0477
/*1409bac2c*/  mov dword ptr [rax], 74726170h
/*1409bac32*/  mov qword ptr [rbp+2C0h+var_208], 4
/*1409bac3d*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409bac44*/  mov [rbp+2C0h+var_1F8], 4
/*1409bac4f*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bac5a*/  mov [rbp+2C0h+var_70], 0
/*1409bac65*/  call nullsub_1
/*1409bac6a*/  mov ecx, 4
/*1409bac6f*/  mov edx, 1
/*1409bac74*/  call sub_140001650
/*1409bac79*/  test rax, rax
/*1409bac7c*/  jz loc_1409C048C
/*1409bac82*/  mov dword ptr [rax], 65707974h
/*1409bac88*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bac93*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bac9a*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409baca5*/  mov [rbp+2C0h+var_160], 1
/*1409bacac*/ loc_1409BACAC: lea rdx, off_1417A5E88; "summary_text"
/*1409bacb3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bacba*/  call sub_140B56640
/*1409bacbf*/  nop
/*1409bacc0*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bacc7*/  jz loc_1409BF348
/*1409baccd*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bacd5*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bacdd*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bace5*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409baced*/  mov [rbp+2C0h+var_160], 0
/*1409bacf4*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bacfb*/  lea rdx, [rbp+2C0h+var_80]
/*1409bad02*/  lea r8, [rbp+2C0h+var_60]
/*1409bad09*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bad10*/  call sub_140307860
/*1409bad15*/  nop
/*1409bad16*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bad1d*/  jz short loc_1409BAD2C
/*1409bad1f*/ loc_1409BAD1F: lea rcx, [rbp+2C0h+var_F0]
/*1409bad26*/  call sub_1400104F0
/*1409bad2b*/  nop
/*1409bad2c*/ loc_1409BAD2C: call nullsub_1
/*1409bad31*/  mov ecx, 4
/*1409bad36*/  mov edx, 1
/*1409bad3b*/  call sub_140001650
/*1409bad40*/  test rax, rax
/*1409bad43*/  jz loc_1409C04A1
/*1409bad49*/  mov dword ptr [rax], 74786574h
/*1409bad4f*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bad5a*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bad61*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bad6c*/  mov [rbp+2C0h+var_161], 1
/*1409bad73*/ loc_1409BAD73: lea rdx, unk_1417A5900
/*1409bad7a*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bad81*/  call sub_140B56640
/*1409bad86*/  nop
/*1409bad87*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bad8e*/  jz loc_1409BF387
/*1409bad94*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bad9c*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bada4*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409badac*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409badb4*/  mov [rbp+2C0h+var_161], 0
/*1409badbb*/  lea rcx, [rbp+2C0h+var_F0]
/*1409badc2*/  lea rdx, [rbp+2C0h+var_80]
/*1409badc9*/  lea r8, [rbp+2C0h+var_60]
/*1409badd0*/  lea r9, [rbp+2C0h+var_1D0]
/*1409badd7*/  call sub_140307860
/*1409baddc*/  nop
/*1409baddd*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bade4*/  jz short loc_1409BADF3
/*1409bade6*/ loc_1409BADE6: lea rcx, [rbp+2C0h+var_F0]
/*1409baded*/  call sub_1400104F0
/*1409badf2*/  nop
/*1409badf3*/ loc_1409BADF3: movdqu xmm0, [rbp+2C0h+var_80]
/*1409badfb*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bae03*/  mov rax, [rbp+2C0h+var_70]
/*1409bae0a*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bae11*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bae18*/  mov [rbp+2C0h+var_227], 0
/*1409bae1f*/ loc_1409BAE1F: lea rcx, [rbp+2C0h+var_1D0]
/*1409bae26*/  lea rdx, [rbp+2C0h+var_220]
/*1409bae2d*/  lea r8, [rbp+2C0h+var_208]
/*1409bae34*/  lea r13, [rbp+2C0h+var_F0]
/*1409bae3b*/  mov r9, r13
/*1409bae3e*/  call sub_140307860
/*1409bae43*/  nop
/*1409bae44*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bae4b*/  jz short loc_1409BAE5A
/*1409bae4d*/ loc_1409BAE4D: lea rcx, [rbp+2C0h+var_1D0]
/*1409bae54*/  call sub_1400104F0
/*1409bae59*/  nop
/*1409bae5a*/ loc_1409BAE5A: movdqu xmm0, [rbp+2C0h+var_220]
/*1409bae62*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bae6a*/  mov rax, [rbp+2C0h+var_210]
/*1409bae71*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bae78*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bae7f*/ loc_1409BAE7F: mov [rsp+340h+var_320], r13
/*1409bae84*/  lea r8, aResponseReason; "response.reasoning_summary_part.added"
/*1409bae8b*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bae92*/  mov r9d, 25h ; '%'
/*1409bae98*/  lea rdx, [rdi+160h]
/*1409bae9f*/  call sub_1409C6750
/*1409baea4*/  nop
/*1409baea5*/ loc_1409BAEA5: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409baeac*/  mov [rbp+2C0h+var_230], rax
/*1409baeb3*/  mov r13, qword ptr [rbp+2C0h+var_1C0]
/*1409baeba*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409baec1*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409baec8*/  sub rax, rdx
/*1409baecb*/  cmp r13, rax
/*1409baece*/  ja loc_1409BF3C6
/*1409baed4*/  test r13, r13
/*1409baed7*/  jz short loc_1409BAEF9
/*1409baed9*/ loc_1409BAED9: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409baee0*/  mov rcx, rdx
/*1409baee3*/  mov rdx, [rbp+2C0h+var_230]
/*1409baeea*/  mov r8, r13
/*1409baeed*/  call sub_141684120
/*1409baef2*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409baef9*/ loc_1409BAEF9: add rdx, r13
/*1409baefc*/  mov [rbp+2C0h+var_1D8], rdx
/*1409baf03*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409baf0a*/  test rdx, rdx
/*1409baf0d*/  jz short loc_1409BAF22
/*1409baf0f*/  mov r8d, 1
/*1409baf15*/  mov rcx, [rbp+2C0h+var_230]
/*1409baf1c*/  call sub_140001660
/*1409baf21*/  nop
/*1409baf22*/ loc_1409BAF22: lea rcx, [rbp+2C0h+var_F0]
/*1409baf29*/  call sub_1400104F0
/*1409baf2e*/  nop
/*1409baf2f*/ loc_1409BAF2F: test r15, r15
/*1409baf32*/  mov r13, [rbp+2C0h+var_248]
/*1409baf36*/  jz loc_1409BB3C6
/*1409baf3c*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409baf47*/  mov [rbp+2C0h+var_70], 0
/*1409baf52*/  call nullsub_1
/*1409baf57*/  mov ecx, 4
/*1409baf5c*/  mov edx, 1
/*1409baf61*/  call sub_140001650
/*1409baf66*/  test rax, rax
/*1409baf69*/  jz loc_1409C04B6
/*1409baf6f*/  mov dword ptr [rax], 65707974h
/*1409baf75*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409baf80*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409baf87*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409baf92*/  mov [rbp+2C0h+var_162], 1
/*1409baf99*/ loc_1409BAF99: lea rdx, off_1417A5F10
/*1409bafa0*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bafa7*/  call sub_140B56640
/*1409bafac*/  nop
/*1409bafad*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bafb4*/  jz loc_1409BF40D
/*1409bafba*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bafc2*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bafca*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bafd2*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bafda*/  mov [rbp+2C0h+var_162], 0
/*1409bafe1*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bafe8*/  lea rdx, [rbp+2C0h+var_80]
/*1409bafef*/  lea r8, [rbp+2C0h+var_60]
/*1409baff6*/  lea r9, [rbp+2C0h+var_1D0]
/*1409baffd*/  call sub_140307860
/*1409bb002*/  nop
/*1409bb003*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb00a*/  jz short loc_1409BB019
/*1409bb00c*/ loc_1409BB00C: lea rcx, [rbp+2C0h+var_F0]
/*1409bb013*/  call sub_1400104F0
/*1409bb018*/  nop
/*1409bb019*/ loc_1409BB019: call nullsub_1
/*1409bb01e*/  mov ecx, 0Ch
/*1409bb023*/  mov edx, 1
/*1409bb028*/  call sub_140001650
/*1409bb02d*/  test rax, rax
/*1409bb030*/  jz loc_1409C04CB
/*1409bb036*/  mov rcx, 695F74757074756Fh
/*1409bb040*/  mov [rax], rcx
/*1409bb043*/  mov dword ptr [rax+8], 7865646Eh
/*1409bb04a*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409bb055*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bb05c*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409bb067*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bb06e*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bb079*/  mov rax, [rbp+2C0h+var_268]
/*1409bb07d*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bb084*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb08b*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb092*/  lea r8, [rbp+2C0h+var_60]
/*1409bb099*/  lea r9, [rbp+2C0h+var_F0]
/*1409bb0a0*/  call sub_140307860
/*1409bb0a5*/  nop
/*1409bb0a6*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bb0ad*/  jz short loc_1409BB0BC
/*1409bb0af*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb0b6*/  call sub_1400104F0
/*1409bb0bb*/  nop
/*1409bb0bc*/ loc_1409BB0BC: call nullsub_1
/*1409bb0c1*/  mov ecx, 7
/*1409bb0c6*/  mov edx, 1
/*1409bb0cb*/  call sub_140001650
/*1409bb0d0*/  test rax, rax
/*1409bb0d3*/  jz loc_1409C04E0
/*1409bb0d9*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bb0e0*/  mov dword ptr [rax], 6D657469h
/*1409bb0e6*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409bb0f1*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bb0f8*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409bb103*/  mov qword ptr [rbp+2C0h+var_208], r12
/*1409bb10a*/  mov [rbp+2C0h+var_163], 1
/*1409bb111*/ loc_1409BB111: lea rcx, [rbp+2C0h+var_F0]
/*1409bb118*/  lea rdx, [rbp+2C0h+var_208]
/*1409bb11f*/  call sub_140B565B0
/*1409bb124*/  nop
/*1409bb125*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb12c*/  jz loc_1409BF44C
/*1409bb132*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bb13a*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bb142*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bb14a*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bb152*/  mov [rbp+2C0h+var_163], 0
/*1409bb159*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bb160*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb167*/  lea r8, [rbp+2C0h+var_60]
/*1409bb16e*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bb175*/  call sub_140307860
/*1409bb17a*/  nop
/*1409bb17b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb182*/  jz short loc_1409BB191
/*1409bb184*/ loc_1409BB184: lea rcx, [rbp+2C0h+var_F0]
/*1409bb18b*/  call sub_1400104F0
/*1409bb190*/  nop
/*1409bb191*/ loc_1409BB191: call nullsub_1
/*1409bb196*/  mov ecx, 0Dh
/*1409bb19b*/  mov edx, 1
/*1409bb1a0*/  call sub_140001650
/*1409bb1a5*/  test rax, rax
/*1409bb1a8*/  jz loc_1409C04F5
/*1409bb1ae*/  mov rcx, 7865646E695F7972h
/*1409bb1b8*/  mov [rax+5], rcx
/*1409bb1bc*/  mov rcx, 5F7972616D6D7573h
/*1409bb1c6*/  mov [rax], rcx
/*1409bb1c9*/  mov qword ptr [rbp+2C0h+var_60], 0Dh
/*1409bb1d4*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bb1db*/  mov qword ptr [rbp+2C0h+var_50], 0Dh
/*1409bb1e6*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bb1ed*/  pxor xmm0, xmm0
/*1409bb1f1*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bb1f9*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb200*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb207*/  lea r8, [rbp+2C0h+var_60]
/*1409bb20e*/  lea r9, [rbp+2C0h+var_F0]
/*1409bb215*/  call sub_140307860
/*1409bb21a*/  nop
/*1409bb21b*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bb222*/  jz short loc_1409BB231
/*1409bb224*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb22b*/  call sub_1400104F0
/*1409bb230*/  nop
/*1409bb231*/ loc_1409BB231: call nullsub_1
/*1409bb236*/  mov ecx, 5
/*1409bb23b*/  mov edx, 1
/*1409bb240*/  call sub_140001650
/*1409bb245*/  test rax, rax
/*1409bb248*/  jz loc_1409C050A
/*1409bb24e*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409bb252*/  mov dword ptr [rax], 746C6564h
/*1409bb258*/  mov qword ptr [rbp+2C0h+var_60], 5
/*1409bb263*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bb26a*/  mov qword ptr [rbp+2C0h+var_50], 5
/*1409bb275*/  mov [rbp+2C0h+var_164], 1
/*1409bb27c*/ loc_1409BB27C: lea rcx, [rbp+2C0h+var_F0]
/*1409bb283*/  lea rdx, [rbp+2C0h+var_260]
/*1409bb287*/  call sub_140B56520
/*1409bb28c*/  nop
/*1409bb28d*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb294*/  jz loc_1409BF48B
/*1409bb29a*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bb2a2*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bb2aa*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bb2b2*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bb2ba*/  mov [rbp+2C0h+var_164], 0
/*1409bb2c1*/  lea r15, [rbp+2C0h+var_F0]
/*1409bb2c8*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb2cf*/  lea r8, [rbp+2C0h+var_60]
/*1409bb2d6*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bb2dd*/  mov rcx, r15
/*1409bb2e0*/  call sub_140307860
/*1409bb2e5*/  nop
/*1409bb2e6*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb2ed*/  jz short loc_1409BB2FC
/*1409bb2ef*/ loc_1409BB2EF: lea rcx, [rbp+2C0h+var_F0]
/*1409bb2f6*/  call sub_1400104F0
/*1409bb2fb*/  nop
/*1409bb2fc*/ loc_1409BB2FC: movdqu xmm0, [rbp+2C0h+var_80]
/*1409bb304*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bb30c*/  mov rax, [rbp+2C0h+var_70]
/*1409bb313*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bb31a*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bb321*/ loc_1409BB321: mov [rsp+340h+var_320], r15
/*1409bb326*/  lea r8, xmmword_1417A5EE8
/*1409bb32d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb334*/  mov r9d, 25h ; '%'
/*1409bb33a*/  lea rdx, [rdi+160h]
/*1409bb341*/  call sub_1409C6750
/*1409bb346*/  nop
/*1409bb347*/ loc_1409BB347: mov r12, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bb34e*/  mov r15, qword ptr [rbp+2C0h+var_1C0]
/*1409bb355*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bb35c*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bb363*/  sub rax, rdx
/*1409bb366*/  cmp r15, rax
/*1409bb369*/  ja loc_1409BF4CA
/*1409bb36f*/  test r15, r15
/*1409bb372*/  jz short loc_1409BB390
/*1409bb374*/ loc_1409BB374: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bb37b*/  mov rcx, rdx
/*1409bb37e*/  mov rdx, r12
/*1409bb381*/  mov r8, r15
/*1409bb384*/  call sub_141684120
/*1409bb389*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bb390*/ loc_1409BB390: add rdx, r15
/*1409bb393*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bb39a*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bb3a1*/  test rdx, rdx
/*1409bb3a4*/  jz short loc_1409BB3B5
/*1409bb3a6*/  mov r8d, 1
/*1409bb3ac*/  mov rcx, r12
/*1409bb3af*/  call sub_140001660
/*1409bb3b4*/  nop
/*1409bb3b5*/ loc_1409BB3B5: lea rcx, [rbp+2C0h+var_F0]
/*1409bb3bc*/  call sub_1400104F0
/*1409bb3c1*/  nop
/*1409bb3c2*/  mov r13, [rbp+2C0h+var_248]
/*1409bb3c6*/ loc_1409BB3C6: cmp [rbp+2C0h+var_F8], 11h
/*1409bb3ce*/  jnz short loc_1409BB406
/*1409bb3d0*/  mov rax, [rbp+2C0h+var_238]
/*1409bb3d7*/  movdqu xmm0, xmmword ptr [rax]
/*1409bb3db*/  movzx eax, byte ptr [rax+10h]
/*1409bb3df*/  movd xmm1, eax
/*1409bb3e3*/  pcmpeqb xmm0, cs:xmmword_1417A2D10
/*1409bb3eb*/  pcmpeqb xmm1, cs:xmmword_141763F50
/*1409bb3f3*/  pand xmm1, xmm0
/*1409bb3f7*/  pmovmskb eax, xmm1
/*1409bb3fb*/  cmp eax, 0FFFFh
/*1409bb400*/  setz r15b
/*1409bb404*/  jmp short loc_1409BB409
/*1409bb406*/ loc_1409BB406: xor r15d, r15d
/*1409bb409*/ loc_1409BB409: mov rax, [rbp+2C0h+var_270]
/*1409bb40d*/  mov qword ptr [rbp+2C0h+var_2E0], rax
/*1409bb411*/  movaps xmm0, [rbp+2C0h+var_280]
/*1409bb415*/  movaps [rbp+2C0h+var_2F0], xmm0
/*1409bb419*/  movups xmm0, [rbp+2C0h+var_260]
/*1409bb41d*/  movups [rbp+2C0h+var_2E0+8], xmm0
/*1409bb421*/  mov rax, [rbp+2C0h+var_250]
/*1409bb425*/  mov [rbp+2C0h+var_2C8], rax
/*1409bb429*/  lea rcx, [rdi+48h]
/*1409bb42d*/  call sub_1409809F0
/*1409bb432*/  movdqa xmm0, [rbp+2C0h+var_2F0]
/*1409bb437*/  movdqa xmm1, [rbp+2C0h+var_2E0]
/*1409bb43c*/  movaps xmm2, xmmword ptr [rbp-10h]
/*1409bb440*/  movups xmmword ptr [rdi+68h], xmm2
/*1409bb444*/  movdqu xmmword ptr [rdi+58h], xmm1
/*1409bb449*/  movdqu xmmword ptr [rdi+48h], xmm0
/*1409bb44e*/  mov rax, [rbp+2C0h+var_290]
/*1409bb452*/  mov [rdi+78h], rax
/*1409bb456*/  mov rax, [rbp+2C0h+var_2B8]
/*1409bb45a*/  mov [rdi+80h], rax
/*1409bb461*/  mov [rdi+88h], rbx
/*1409bb468*/  mov rax, [rbp+2C0h+var_288]
/*1409bb46c*/  mov [rdi+90h], rax
/*1409bb473*/  mov [rdi+98h], r13
/*1409bb47a*/  mov [rdi+0A0h], r14
/*1409bb481*/  mov rax, [rbp+2C0h+var_268]
/*1409bb485*/  mov [rdi+0A8h], eax
/*1409bb48b*/  mov [rdi+0ACh], r15b
/*1409bb492*/  jmp def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409bb497*/ loc_1409BB497: mov rcx, 727574616E676973h; jumptable 00000001409B9A87 case 15  // jumptable 00000001409B9A87 case 15
/*1409bb4a1*/  xor rcx, [rax]
/*1409bb4a4*/  mov rdx, 61746C65645F6572h
/*1409bb4ae*/  xor rdx, [rax+7]
/*1409bb4b2*/  or rdx, rcx
/*1409bb4b5*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb4bb*/ loc_1409BB4BB: lea rcx, aSignature; "signature"
/*1409bb4c2*/  lea r8, [rbp+2C0h+var_60]
/*1409bb4c9*/  mov edx, 9
/*1409bb4ce*/  call sub_141433D50
/*1409bb4d3*/  nop
/*1409bb4d4*/ loc_1409BB4D4: test rax, rax
/*1409bb4d7*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb4dd*/  cmp byte ptr [rax], 3
/*1409bb4e0*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb4e6*/  cmp qword ptr [rdi+48h], 0FFFFFFFFFFFFFFFFh
/*1409bb4eb*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb4f1*/  mov r14, [rax+10h]
/*1409bb4f5*/  mov rbx, [rax+18h]
/*1409bb4f9*/  mov rax, [rdi+78h]
/*1409bb4fd*/  mov rdx, [rdi+88h]
/*1409bb504*/  sub rax, rdx
/*1409bb507*/  cmp rbx, rax
/*1409bb50a*/  ja loc_1409BFEE8
/*1409bb510*/  test rbx, rbx
/*1409bb513*/  jz short loc_1409BB531
/*1409bb515*/ loc_1409BB515: add rdx, [rdi+80h]
/*1409bb51c*/  mov rcx, rdx
/*1409bb51f*/  mov rdx, r14
/*1409bb522*/  mov r8, rbx
/*1409bb525*/  call sub_141684120
/*1409bb52a*/  mov rdx, [rdi+88h]
/*1409bb531*/ loc_1409BB531: add rdx, rbx
/*1409bb534*/  mov [rdi+88h], rdx
/*1409bb53b*/  jmp def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb540*/ loc_1409BB540: mov rcx, 676E696B6E696874h; jumptable 00000001409B9A87 case 14  // jumptable 00000001409B9A87 case 14
/*1409bb54a*/  xor rcx, [rax]
/*1409bb54d*/  mov rdx, 61746C65645F676Eh
/*1409bb557*/  xor rdx, [rax+6]
/*1409bb55b*/  or rdx, rcx
/*1409bb55e*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb564*/ loc_1409BB564: lea rcx, aThinking_0; "thinking"
/*1409bb56b*/  lea r8, [rbp+2C0h+var_60]
/*1409bb572*/  mov edx, 8
/*1409bb577*/  call sub_141433D50
/*1409bb57c*/  nop
/*1409bb57d*/ loc_1409BB57D: test rax, rax
/*1409bb580*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb586*/  cmp byte ptr [rax], 3
/*1409bb589*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb58f*/  mov r14, [rax+10h]
/*1409bb593*/  mov rbx, [rax+18h]
/*1409bb597*/  mov qword ptr [rbp+2C0h+var_208], r14
/*1409bb59e*/  mov qword ptr [rbp+2C0h+var_208+8], rbx
/*1409bb5a5*/  test rbx, rbx
/*1409bb5a8*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb5ae*/  cmp qword ptr [rdi+48h], 0FFFFFFFFFFFFFFFFh
/*1409bb5b3*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bb5b9*/  mov rax, [rdi+60h]
/*1409bb5bd*/  mov rdx, [rdi+70h]
/*1409bb5c1*/  sub rax, rdx
/*1409bb5c4*/  cmp rbx, rax
/*1409bb5c7*/  ja loc_1409BFF3B
/*1409bb5cd*/ loc_1409BB5CD: add rdx, [rdi+68h]
/*1409bb5d1*/  mov rcx, rdx
/*1409bb5d4*/  mov rdx, r14
/*1409bb5d7*/  mov r8, rbx
/*1409bb5da*/  call sub_141684120
/*1409bb5df*/  add [rdi+70h], rbx
/*1409bb5e3*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bb5ee*/  mov [rbp+2C0h+var_70], 0
/*1409bb5f9*/  call nullsub_1
/*1409bb5fe*/  mov ecx, 4
/*1409bb603*/  mov edx, 1
/*1409bb608*/  call sub_140001650
/*1409bb60d*/  test rax, rax
/*1409bb610*/  jz loc_1409C08FA
/*1409bb616*/  mov dword ptr [rax], 65707974h
/*1409bb61c*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409bb627*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bb62e*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409bb639*/  mov [rbp+2C0h+var_133], 1
/*1409bb640*/ loc_1409BB640: lea rdx, off_1417A5F10
/*1409bb647*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bb64e*/  call sub_140B56640
/*1409bb653*/  nop
/*1409bb654*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb65b*/  jz loc_1409BFFC7
/*1409bb661*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bb669*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bb671*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bb679*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bb681*/  mov [rbp+2C0h+var_133], 0
/*1409bb688*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bb68f*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb696*/  lea r8, [rbp+2C0h+var_120]
/*1409bb69d*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bb6a4*/  call sub_140307860
/*1409bb6a9*/  nop
/*1409bb6aa*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb6b1*/  jz short loc_1409BB6C0
/*1409bb6b3*/ loc_1409BB6B3: lea rcx, [rbp+2C0h+var_F0]
/*1409bb6ba*/  call sub_1400104F0
/*1409bb6bf*/  nop
/*1409bb6c0*/ loc_1409BB6C0: call nullsub_1
/*1409bb6c5*/  mov ecx, 0Ch
/*1409bb6ca*/  mov edx, 1
/*1409bb6cf*/  call sub_140001650
/*1409bb6d4*/  test rax, rax
/*1409bb6d7*/  jz loc_1409C0924
/*1409bb6dd*/  mov rcx, 695F74757074756Fh
/*1409bb6e7*/  mov [rax], rcx
/*1409bb6ea*/  mov dword ptr [rax+8], 7865646Eh
/*1409bb6f1*/  mov qword ptr [rbp+2C0h+var_120], 0Ch
/*1409bb6fc*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bb703*/  mov qword ptr [rbp+2C0h+var_110], 0Ch
/*1409bb70e*/  mov eax, [rdi+0A8h]
/*1409bb714*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bb71b*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bb726*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bb72d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb734*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb73b*/  lea r8, [rbp+2C0h+var_120]
/*1409bb742*/  lea r9, [rbp+2C0h+var_F0]
/*1409bb749*/  call sub_140307860
/*1409bb74e*/  nop
/*1409bb74f*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bb756*/  jz short loc_1409BB765
/*1409bb758*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb75f*/  call sub_1400104F0
/*1409bb764*/  nop
/*1409bb765*/ loc_1409BB765: call nullsub_1
/*1409bb76a*/  mov ecx, 7
/*1409bb76f*/  mov edx, 1
/*1409bb774*/  call sub_140001650
/*1409bb779*/  test rax, rax
/*1409bb77c*/  jz loc_1409C094E
/*1409bb782*/  lea rdx, [rdi+48h]
/*1409bb786*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bb78d*/  mov dword ptr [rax], 6D657469h
/*1409bb793*/  mov qword ptr [rbp+2C0h+var_120], 7
/*1409bb79e*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bb7a5*/  mov qword ptr [rbp+2C0h+var_110], 7
/*1409bb7b0*/  mov [rbp+2C0h+var_134], 1
/*1409bb7b7*/ loc_1409BB7B7: lea rcx, [rbp+2C0h+var_F0]
/*1409bb7be*/  call sub_140B56520
/*1409bb7c3*/  nop
/*1409bb7c4*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb7cb*/  jz loc_1409C0045
/*1409bb7d1*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bb7d9*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bb7e1*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bb7e9*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bb7f1*/  mov [rbp+2C0h+var_134], 0
/*1409bb7f8*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bb7ff*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb806*/  lea r8, [rbp+2C0h+var_120]
/*1409bb80d*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bb814*/  call sub_140307860
/*1409bb819*/  nop
/*1409bb81a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb821*/  jz short loc_1409BB830
/*1409bb823*/ loc_1409BB823: lea rcx, [rbp+2C0h+var_F0]
/*1409bb82a*/  call sub_1400104F0
/*1409bb82f*/  nop
/*1409bb830*/ loc_1409BB830: call nullsub_1
/*1409bb835*/  mov ecx, 0Dh
/*1409bb83a*/  mov edx, 1
/*1409bb83f*/  call sub_140001650
/*1409bb844*/  test rax, rax
/*1409bb847*/  jz loc_1409C0975
/*1409bb84d*/  mov rcx, 7865646E695F7972h
/*1409bb857*/  mov [rax+5], rcx
/*1409bb85b*/  mov rcx, 5F7972616D6D7573h
/*1409bb865*/  mov [rax], rcx
/*1409bb868*/  mov qword ptr [rbp+2C0h+var_120], 0Dh
/*1409bb873*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bb87a*/  mov qword ptr [rbp+2C0h+var_110], 0Dh
/*1409bb885*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bb88c*/  pxor xmm0, xmm0
/*1409bb890*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bb898*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb89f*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb8a6*/  lea r8, [rbp+2C0h+var_120]
/*1409bb8ad*/  lea r9, [rbp+2C0h+var_F0]
/*1409bb8b4*/  call sub_140307860
/*1409bb8b9*/  nop
/*1409bb8ba*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bb8c1*/  jz short loc_1409BB8D0
/*1409bb8c3*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb8ca*/  call sub_1400104F0
/*1409bb8cf*/  nop
/*1409bb8d0*/ loc_1409BB8D0: call nullsub_1
/*1409bb8d5*/  mov ecx, 5
/*1409bb8da*/  mov edx, 1
/*1409bb8df*/  call sub_140001650
/*1409bb8e4*/  test rax, rax
/*1409bb8e7*/  jz loc_1409C0999
/*1409bb8ed*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409bb8f1*/  mov dword ptr [rax], 746C6564h
/*1409bb8f7*/  mov qword ptr [rbp+2C0h+var_120], 5
/*1409bb902*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bb909*/  mov qword ptr [rbp+2C0h+var_110], 5
/*1409bb914*/  mov [rbp+2C0h+var_135], 1
/*1409bb91b*/ loc_1409BB91B: lea rcx, [rbp+2C0h+var_F0]
/*1409bb922*/  lea rdx, [rbp+2C0h+var_208]
/*1409bb929*/  call sub_140B56640
/*1409bb92e*/  nop
/*1409bb92f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb936*/  jz loc_1409C00C3
/*1409bb93c*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bb944*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bb94c*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bb954*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bb95c*/  mov [rbp+2C0h+var_135], 0
/*1409bb963*/  lea rbx, [rbp+2C0h+var_F0]
/*1409bb96a*/  lea rdx, [rbp+2C0h+var_80]
/*1409bb971*/  lea r8, [rbp+2C0h+var_120]
/*1409bb978*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bb97f*/  mov rcx, rbx
/*1409bb982*/  call sub_140307860
/*1409bb987*/  nop
/*1409bb988*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bb98f*/  jz short loc_1409BB99E
/*1409bb991*/ loc_1409BB991: lea rcx, [rbp+2C0h+var_F0]
/*1409bb998*/  call sub_1400104F0
/*1409bb99d*/  nop
/*1409bb99e*/ loc_1409BB99E: add rdi, 160h
/*1409bb9a5*/  movdqu xmm0, [rbp+2C0h+var_80]
/*1409bb9ad*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bb9b5*/  mov rax, [rbp+2C0h+var_70]
/*1409bb9bc*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bb9c3*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bb9ca*/ loc_1409BB9CA: mov [rsp+340h+var_320], rbx
/*1409bb9cf*/  lea r8, xmmword_1417A5EE8
/*1409bb9d6*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bb9dd*/  mov r9d, 25h ; '%'
/*1409bb9e3*/  mov rdx, rdi
/*1409bb9e6*/  call sub_1409C6750
/*1409bb9eb*/  nop
/*1409bb9ec*/ loc_1409BB9EC: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bb9f3*/  mov [rbp+2C0h+var_F8], rax
/*1409bb9fa*/  mov rdi, qword ptr [rbp+2C0h+var_1C0]
/*1409bba01*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bba08*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bba0f*/  sub rax, rdx
/*1409bba12*/  cmp rdi, rax
/*1409bba15*/  ja loc_1409C012D
/*1409bba1b*/  test rdi, rdi
/*1409bba1e*/  jz short loc_1409BBA40
/*1409bba20*/ loc_1409BBA20: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bba27*/  mov rcx, rdx
/*1409bba2a*/  mov rdx, [rbp+2C0h+var_F8]
/*1409bba31*/  mov r8, rdi
/*1409bba34*/  call sub_141684120
/*1409bba39*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bba40*/ loc_1409BBA40: add rdx, rdi
/*1409bba43*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bba4a*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bba51*/  test rdx, rdx
/*1409bba54*/  jz short loc_1409BBA69
/*1409bba56*/  mov r8d, 1
/*1409bba5c*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bba63*/  call sub_140001660
/*1409bba68*/  nop
/*1409bba69*/ loc_1409BBA69: lea rcx, [rbp+2C0h+var_F0]
/*1409bba70*/  call sub_1400104F0
/*1409bba75*/  nop
/*1409bba76*/  jmp short def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bba78*/ loc_1409BBA78: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409B9A87 case 16  // jumptable 00000001409B9A87 case 16
/*1409bba7c*/  pcmpeqb xmm0, cs:xmmword_1417A2D00
/*1409bba84*/  pmovmskb eax, xmm0
/*1409bba88*/  cmp eax, 0FFFFh
/*1409bba8d*/  jz loc_1409BD8EB
/*1409bba93*/ def_1409B9A87: lea rcx, [rbp+2C0h+var_60]; jumptable 00000001409B9A87 default case, cases 11-13  // jumptable 00000001409B9A87 default case, cases 11-13
/*1409bba9a*/  call sub_1400104F0
/*1409bba9f*/  nop
/*1409bbaa0*/  jmp def_1409B7E68; jumptable 00000001409B7E68 default case, cases 14-17
/*1409bbaa5*/ loc_1409BBAA5: jnz loc_1409B95EC
/*1409bbaab*/ loc_1409BBAAB: mov qword ptr [rbp+2C0h+var_80], rcx
/*1409bbab2*/  mov qword ptr [rbp+2C0h+var_80+8], 0Ch
/*1409bbabd*/  lea rax, [rbp+2C0h+var_80]
/*1409bbac4*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bbacb*/  lea rax, sub_14041F680
/*1409bbad2*/  mov qword ptr [rbp+2C0h+var_1D0+8], rax
/*1409bbad9*/ loc_1409BBAD9: lea rdx, unk_1417A59B0
/*1409bbae0*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbae7*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bbaee*/  call sub_14149C0F0
/*1409bbaf3*/  nop
/*1409bbaf4*/  mov rdx, [rbp+2C0h+var_F8]
/*1409bbafb*/  test rdx, rdx
/*1409bbafe*/  jz short loc_1409BBB12
/*1409bbb00*/  mov r8d, 1
/*1409bbb06*/  mov rcx, [rbp+2C0h+var_238]
/*1409bbb0d*/  call sub_140001660
/*1409bbb12*/ loc_1409BBB12: movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbb1a*/  movdqa [rbp+2C0h+var_2B0], xmm0
/*1409bbb1f*/  mov rax, qword ptr [rbp+2C0h+var_E0]
/*1409bbb26*/  mov [rbp+2C0h+var_2A0], rax
/*1409bbb2a*/  mov qword ptr [rbp+2C0h+var_280], 0
/*1409bbb32*/  mov [rbp+2C0h+var_270], 0
/*1409bbb3a*/  call nullsub_1
/*1409bbb3f*/  mov ecx, 4
/*1409bbb44*/  mov edx, 1
/*1409bbb49*/  call sub_140001650
/*1409bbb4e*/  test rax, rax
/*1409bbb51*/  jz loc_1409C051F
/*1409bbb57*/  mov dword ptr [rax], 65707974h
/*1409bbb5d*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bbb68*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbb6f*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bbb7a*/  mov [rbp+2C0h+var_14D], 1
/*1409bbb81*/ loc_1409BBB81: lea rdx, off_1417A5DA8
/*1409bbb88*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbb8f*/  call sub_140B56640
/*1409bbb94*/  nop
/*1409bbb95*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbb9c*/  jz loc_1409BF534
/*1409bbba2*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbbaa*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bbbb2*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bbbba*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bbbc2*/  mov [rbp+2C0h+var_14D], 0
/*1409bbbc9*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbbd0*/  lea rdx, [rbp+2C0h+var_280]
/*1409bbbd4*/  lea r8, [rbp+2C0h+var_60]
/*1409bbbdb*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bbbe2*/  call sub_140307860
/*1409bbbe7*/  nop
/*1409bbbe8*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbbef*/  jz short loc_1409BBBFE
/*1409bbbf1*/ loc_1409BBBF1: lea rcx, [rbp+2C0h+var_F0]
/*1409bbbf8*/  call sub_1400104F0
/*1409bbbfd*/  nop
/*1409bbbfe*/ loc_1409BBBFE: call nullsub_1
/*1409bbc03*/  mov ecx, 0Ch
/*1409bbc08*/  mov edx, 1
/*1409bbc0d*/  call sub_140001650
/*1409bbc12*/  test rax, rax
/*1409bbc15*/  jz loc_1409C0534
/*1409bbc1b*/  mov r12, 695F74757074756Fh
/*1409bbc25*/  mov [rax], r12
/*1409bbc28*/  mov dword ptr [rax+8], 7865646Eh
/*1409bbc2f*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409bbc3a*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbc41*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409bbc4c*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bbc53*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bbc5e*/  mov qword ptr [rbp+2C0h+var_E0], r15
/*1409bbc65*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bbc6c*/  lea rdx, [rbp+2C0h+var_280]
/*1409bbc70*/  lea r8, [rbp+2C0h+var_60]
/*1409bbc77*/  lea r9, [rbp+2C0h+var_F0]
/*1409bbc7e*/  call sub_140307860
/*1409bbc83*/  nop
/*1409bbc84*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bbc8b*/  jz short loc_1409BBC9A
/*1409bbc8d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bbc94*/  call sub_1400104F0
/*1409bbc99*/  nop
/*1409bbc9a*/ loc_1409BBC9A: call nullsub_1
/*1409bbc9f*/  mov ecx, 7
/*1409bbca4*/  mov edx, 1
/*1409bbca9*/  call sub_140001650
/*1409bbcae*/  test rax, rax
/*1409bbcb1*/  jz loc_1409C0549
/*1409bbcb7*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bbcbe*/  mov dword ptr [rax], 6D657469h
/*1409bbcc4*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409bbccf*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbcd6*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409bbce1*/  lea r13, [rbp+2C0h+var_2B0]
/*1409bbce5*/  mov qword ptr [rbp+2C0h+var_80], r13
/*1409bbcec*/  mov [rbp+2C0h+var_14E], 1
/*1409bbcf3*/ loc_1409BBCF3: lea rcx, [rbp+2C0h+var_F0]
/*1409bbcfa*/  lea rdx, [rbp+2C0h+var_80]
/*1409bbd01*/  call sub_140B565B0
/*1409bbd06*/  nop
/*1409bbd07*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbd0e*/  jz loc_1409BF573
/*1409bbd14*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbd1c*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bbd24*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bbd2c*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bbd34*/  mov [rbp+2C0h+var_14E], 0
/*1409bbd3b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbd42*/  lea rdx, [rbp+2C0h+var_280]
/*1409bbd46*/  lea r8, [rbp+2C0h+var_60]
/*1409bbd4d*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bbd54*/  call sub_140307860
/*1409bbd59*/  nop
/*1409bbd5a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbd61*/  jz short loc_1409BBD70
/*1409bbd63*/ loc_1409BBD63: lea rcx, [rbp+2C0h+var_F0]
/*1409bbd6a*/  call sub_1400104F0
/*1409bbd6f*/  nop
/*1409bbd70*/ loc_1409BBD70: call nullsub_1
/*1409bbd75*/  mov ecx, 4
/*1409bbd7a*/  mov edx, 1
/*1409bbd7f*/  call sub_140001650
/*1409bbd84*/  test rax, rax
/*1409bbd87*/  jz loc_1409C055E
/*1409bbd8d*/  mov dword ptr [rax], 6D657469h
/*1409bbd93*/  mov qword ptr [rbp+2C0h+var_260], 4
/*1409bbd9b*/  mov qword ptr [rbp+2C0h+var_260+8], rax
/*1409bbd9f*/  mov [rbp+2C0h+var_250], 4
/*1409bbda7*/  mov qword ptr [rbp+2C0h+var_220], 0
/*1409bbdb2*/  mov [rbp+2C0h+var_210], 0
/*1409bbdbd*/  call nullsub_1
/*1409bbdc2*/  mov ecx, 4
/*1409bbdc7*/  mov edx, 1
/*1409bbdcc*/  call sub_140001650
/*1409bbdd1*/  test rax, rax
/*1409bbdd4*/  jz loc_1409C0573
/*1409bbdda*/  mov dword ptr [rax], 65707974h
/*1409bbde0*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bbdeb*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbdf2*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bbdfd*/  mov [rbp+2C0h+var_14F], 1
/*1409bbe04*/ loc_1409BBE04: lea rdx, off_1417A4660; "message"
/*1409bbe0b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbe12*/  call sub_140B56640
/*1409bbe17*/  nop
/*1409bbe18*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbe1f*/  jz loc_1409BF5B2
/*1409bbe25*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbe2d*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bbe35*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bbe3d*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bbe45*/  mov [rbp+2C0h+var_14F], 0
/*1409bbe4c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbe53*/  lea rdx, [rbp+2C0h+var_220]
/*1409bbe5a*/  lea r8, [rbp+2C0h+var_60]
/*1409bbe61*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bbe68*/  call sub_140307860
/*1409bbe6d*/  nop
/*1409bbe6e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbe75*/  jz short loc_1409BBE84
/*1409bbe77*/ loc_1409BBE77: lea rcx, [rbp+2C0h+var_F0]
/*1409bbe7e*/  call sub_1400104F0
/*1409bbe83*/  nop
/*1409bbe84*/ loc_1409BBE84: call nullsub_1
/*1409bbe89*/  mov ecx, 2
/*1409bbe8e*/  mov edx, 1
/*1409bbe93*/  call sub_140001650
/*1409bbe98*/  test rax, rax
/*1409bbe9b*/  jz loc_1409C0588
/*1409bbea1*/  mov word ptr [rax], 6469h
/*1409bbea6*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409bbeb1*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbeb8*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409bbec3*/  mov qword ptr [rbp+2C0h+var_80], r13
/*1409bbeca*/  mov [rbp+2C0h+var_150], 1
/*1409bbed1*/ loc_1409BBED1: lea rcx, [rbp+2C0h+var_F0]
/*1409bbed8*/  lea rdx, [rbp+2C0h+var_80]
/*1409bbedf*/  call sub_140B565B0
/*1409bbee4*/  nop
/*1409bbee5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbeec*/  jz loc_1409BF5F1
/*1409bbef2*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbefa*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bbf02*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bbf0a*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bbf12*/  mov [rbp+2C0h+var_150], 0
/*1409bbf19*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbf20*/  lea rdx, [rbp+2C0h+var_220]
/*1409bbf27*/  lea r8, [rbp+2C0h+var_60]
/*1409bbf2e*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bbf35*/  call sub_140307860
/*1409bbf3a*/  nop
/*1409bbf3b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbf42*/  jz short loc_1409BBF51
/*1409bbf44*/ loc_1409BBF44: lea rcx, [rbp+2C0h+var_F0]
/*1409bbf4b*/  call sub_1400104F0
/*1409bbf50*/  nop
/*1409bbf51*/ loc_1409BBF51: call nullsub_1
/*1409bbf56*/  mov ecx, 4
/*1409bbf5b*/  mov edx, 1
/*1409bbf60*/  call sub_140001650
/*1409bbf65*/  test rax, rax
/*1409bbf68*/  jz loc_1409C059D
/*1409bbf6e*/  mov dword ptr [rax], 656C6F72h
/*1409bbf74*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bbf7f*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bbf86*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bbf91*/  mov [rbp+2C0h+var_151], 1
/*1409bbf98*/ loc_1409BBF98: lea rdx, off_1417A4ED8; "assistant"
/*1409bbf9f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbfa6*/  call sub_140B56640
/*1409bbfab*/  nop
/*1409bbfac*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bbfb3*/  jz loc_1409BF630
/*1409bbfb9*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bbfc1*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bbfc9*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bbfd1*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bbfd9*/  mov [rbp+2C0h+var_151], 0
/*1409bbfe0*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bbfe7*/  lea rdx, [rbp+2C0h+var_220]
/*1409bbfee*/  lea r8, [rbp+2C0h+var_60]
/*1409bbff5*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bbffc*/  call sub_140307860
/*1409bc001*/  nop
/*1409bc002*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc009*/  jz short loc_1409BC018
/*1409bc00b*/ loc_1409BC00B: lea rcx, [rbp+2C0h+var_F0]
/*1409bc012*/  call sub_1400104F0
/*1409bc017*/  nop
/*1409bc018*/ loc_1409BC018: call nullsub_1
/*1409bc01d*/  mov ecx, 6
/*1409bc022*/  mov edx, 1
/*1409bc027*/  call sub_140001650
/*1409bc02c*/  test rax, rax
/*1409bc02f*/  jz loc_1409C05B2
/*1409bc035*/  mov word ptr [rax+4], 7375h
/*1409bc03b*/  mov dword ptr [rax], 74617473h
/*1409bc041*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409bc04c*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc053*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409bc05e*/  mov [rbp+2C0h+var_152], 1
/*1409bc065*/ loc_1409BC065: lea rdx, off_1417A5BB8; "in_progress"
/*1409bc06c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc073*/  call sub_140B56640
/*1409bc078*/  nop
/*1409bc079*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc080*/  jz loc_1409BF66F
/*1409bc086*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc08e*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc096*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc09e*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc0a6*/  mov [rbp+2C0h+var_152], 0
/*1409bc0ad*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc0b4*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc0bb*/  lea r8, [rbp+2C0h+var_60]
/*1409bc0c2*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc0c9*/  call sub_140307860
/*1409bc0ce*/  nop
/*1409bc0cf*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc0d6*/  jz short loc_1409BC0E5
/*1409bc0d8*/ loc_1409BC0D8: lea rcx, [rbp+2C0h+var_F0]
/*1409bc0df*/  call sub_1400104F0
/*1409bc0e4*/  nop
/*1409bc0e5*/ loc_1409BC0E5: call nullsub_1
/*1409bc0ea*/  mov ecx, 7
/*1409bc0ef*/  mov edx, 1
/*1409bc0f4*/  call sub_140001650
/*1409bc0f9*/  test rax, rax
/*1409bc0fc*/  jz loc_1409C05C7
/*1409bc102*/  mov dword ptr [rax+3], 746E6574h
/*1409bc109*/  mov dword ptr [rax], 746E6F63h
/*1409bc10f*/  mov qword ptr [rbp+2C0h+var_208], 7
/*1409bc11a*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409bc121*/  mov [rbp+2C0h+var_1F8], 7
/*1409bc12c*/  call nullsub_1
/*1409bc131*/  mov ecx, 20h ; ' '
/*1409bc136*/  mov edx, 8
/*1409bc13b*/  call sub_140001650
/*1409bc140*/  test rax, rax
/*1409bc143*/  jz loc_1409BF3F1
/*1409bc149*/  mov [rbp+2C0h+var_F8], rax
/*1409bc150*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bc15b*/  mov [rbp+2C0h+var_70], 0
/*1409bc166*/  call nullsub_1
/*1409bc16b*/  mov ecx, 4
/*1409bc170*/  mov edx, 1
/*1409bc175*/  call sub_140001650
/*1409bc17a*/  test rax, rax
/*1409bc17d*/  jz loc_1409C05DC
/*1409bc183*/  mov dword ptr [rax], 65707974h
/*1409bc189*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bc194*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc19b*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bc1a6*/  mov [rbp+2C0h+var_153], 1
/*1409bc1ad*/ loc_1409BC1AD: lea rdx, off_1417A5C20; "output_text"
/*1409bc1b4*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc1bb*/  call sub_140B56640
/*1409bc1c0*/  nop
/*1409bc1c1*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc1c8*/  jz loc_1409BF6AE
/*1409bc1ce*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc1d6*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc1de*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc1e6*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc1ee*/  mov [rbp+2C0h+var_153], 0
/*1409bc1f5*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc1fc*/  lea rdx, [rbp+2C0h+var_80]
/*1409bc203*/  lea r8, [rbp+2C0h+var_60]
/*1409bc20a*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc211*/  call sub_140307860
/*1409bc216*/  nop
/*1409bc217*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc21e*/  jz short loc_1409BC22D
/*1409bc220*/ loc_1409BC220: lea rcx, [rbp+2C0h+var_F0]
/*1409bc227*/  call sub_1400104F0
/*1409bc22c*/  nop
/*1409bc22d*/ loc_1409BC22D: call nullsub_1
/*1409bc232*/  mov ecx, 4
/*1409bc237*/  mov edx, 1
/*1409bc23c*/  call sub_140001650
/*1409bc241*/  test rax, rax
/*1409bc244*/  jz loc_1409C05F1
/*1409bc24a*/  mov dword ptr [rax], 74786574h
/*1409bc250*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bc25b*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc262*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bc26d*/  mov [rbp+2C0h+var_154], 1
/*1409bc274*/ loc_1409BC274: lea rdx, unk_1417A5900
/*1409bc27b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc282*/  call sub_140B56640
/*1409bc287*/  nop
/*1409bc288*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc28f*/  jz loc_1409BF6ED
/*1409bc295*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc29d*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc2a5*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc2ad*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc2b5*/  mov [rbp+2C0h+var_154], 0
/*1409bc2bc*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc2c3*/  lea rdx, [rbp+2C0h+var_80]
/*1409bc2ca*/  lea r8, [rbp+2C0h+var_60]
/*1409bc2d1*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc2d8*/  call sub_140307860
/*1409bc2dd*/  nop
/*1409bc2de*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc2e5*/  jz short loc_1409BC2F4
/*1409bc2e7*/ loc_1409BC2E7: lea rcx, [rbp+2C0h+var_F0]
/*1409bc2ee*/  call sub_1400104F0
/*1409bc2f3*/  nop
/*1409bc2f4*/ loc_1409BC2F4: mov rax, [rbp+2C0h+var_70]
/*1409bc2fb*/  movups xmm0, [rbp+2C0h+var_80]
/*1409bc302*/  movups [rbp+2C0h+var_F0+7], xmm0
/*1409bc309*/  mov qword ptr [rbp+2C0h+var_E0+7], rax
/*1409bc310*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bc317*/  mov byte ptr [rcx], 5
/*1409bc31a*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc322*/  mov rax, qword ptr [rbp+2C0h+var_F0+0Fh]
/*1409bc329*/  mov [rcx+10h], rax
/*1409bc32d*/  mov rax, qword ptr [rbp+2C0h+var_E0+7]
/*1409bc334*/  mov [rcx+18h], rax
/*1409bc338*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409bc33d*/  mov qword ptr [rbp+2C0h+var_F0+8], 1
/*1409bc348*/  mov qword ptr [rbp+2C0h+var_E0], rcx
/*1409bc34f*/  mov qword ptr [rbp+2C0h+var_E0+8], 1
/*1409bc35a*/  mov byte ptr [rbp+2C0h+var_F0], 4
/*1409bc361*/  mov [rbp+2C0h+var_1EB], 0
/*1409bc368*/ loc_1409BC368: lea rcx, [rbp+2C0h+var_1D0]
/*1409bc36f*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc376*/  lea r8, [rbp+2C0h+var_208]
/*1409bc37d*/  lea r9, [rbp+2C0h+var_F0]
/*1409bc384*/  call sub_140307860
/*1409bc389*/  nop
/*1409bc38a*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bc391*/  jz short loc_1409BC3A0
/*1409bc393*/ loc_1409BC393: lea rcx, [rbp+2C0h+var_1D0]
/*1409bc39a*/  call sub_1400104F0
/*1409bc39f*/  nop
/*1409bc3a0*/ loc_1409BC3A0: movdqu xmm0, [rbp+2C0h+var_220]
/*1409bc3a8*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bc3b0*/  mov rax, [rbp+2C0h+var_210]
/*1409bc3b7*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bc3be*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bc3c5*/  mov [rbp+2C0h+var_224], 0
/*1409bc3cc*/ loc_1409BC3CC: lea rcx, [rbp+2C0h+var_1D0]
/*1409bc3d3*/  lea rdx, [rbp+2C0h+var_280]
/*1409bc3d7*/  lea r8, [rbp+2C0h+var_260]
/*1409bc3db*/  lea r14, [rbp+2C0h+var_F0]
/*1409bc3e2*/  mov r9, r14
/*1409bc3e5*/  call sub_140307860
/*1409bc3ea*/  nop
/*1409bc3eb*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bc3f2*/  jz short loc_1409BC401
/*1409bc3f4*/ loc_1409BC3F4: lea rcx, [rbp+2C0h+var_1D0]
/*1409bc3fb*/  call sub_1400104F0
/*1409bc400*/  nop
/*1409bc401*/ loc_1409BC401: lea rbx, [rdi+160h]
/*1409bc408*/  movdqu xmm0, [rbp+2C0h+var_280]
/*1409bc40d*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bc415*/  mov rax, [rbp+2C0h+var_270]
/*1409bc419*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bc420*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bc427*/ loc_1409BC427: mov [rsp+340h+var_320], r14
/*1409bc42c*/  lea r8, xmmword_1417A5D88
/*1409bc433*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bc43a*/  mov r9d, 1Ah
/*1409bc440*/  mov rdx, rbx
/*1409bc443*/  call sub_1409C6750
/*1409bc448*/  nop
/*1409bc449*/ loc_1409BC449: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bc450*/  mov [rbp+2C0h+var_F8], rax
/*1409bc457*/  mov r14, qword ptr [rbp+2C0h+var_1C0]
/*1409bc45e*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bc465*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bc46c*/  sub rax, rdx
/*1409bc46f*/  cmp r14, rax
/*1409bc472*/  ja loc_1409BF72C
/*1409bc478*/  test r14, r14
/*1409bc47b*/  jz short loc_1409BC49D
/*1409bc47d*/ loc_1409BC47D: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bc484*/  mov rcx, rdx
/*1409bc487*/  mov rdx, [rbp+2C0h+var_F8]
/*1409bc48e*/  mov r8, r14
/*1409bc491*/  call sub_141684120
/*1409bc496*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bc49d*/ loc_1409BC49D: add rdx, r14
/*1409bc4a0*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bc4a7*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bc4ae*/  test rdx, rdx
/*1409bc4b1*/  jz short loc_1409BC4C6
/*1409bc4b3*/  mov r8d, 1
/*1409bc4b9*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bc4c0*/  call sub_140001660
/*1409bc4c5*/  nop
/*1409bc4c6*/ loc_1409BC4C6: lea rcx, [rbp+2C0h+var_F0]
/*1409bc4cd*/  call sub_1400104F0
/*1409bc4d2*/  nop
/*1409bc4d3*/  mov qword ptr [rbp+2C0h+var_220], 0
/*1409bc4de*/  mov [rbp+2C0h+var_210], 0
/*1409bc4e9*/  call nullsub_1
/*1409bc4ee*/  mov ecx, 4
/*1409bc4f3*/  mov edx, 1
/*1409bc4f8*/  call sub_140001650
/*1409bc4fd*/  test rax, rax
/*1409bc500*/  jz loc_1409C0606
/*1409bc506*/  mov dword ptr [rax], 65707974h
/*1409bc50c*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bc517*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc51e*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bc529*/  mov [rbp+2C0h+var_155], 1
/*1409bc530*/ loc_1409BC530: lea rdx, off_1417A5DD8
/*1409bc537*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc53e*/  call sub_140B56640
/*1409bc543*/  nop
/*1409bc544*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc54b*/  jz loc_1409BF757
/*1409bc551*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc559*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc561*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc569*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc571*/  mov [rbp+2C0h+var_155], 0
/*1409bc578*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc57f*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc586*/  lea r8, [rbp+2C0h+var_60]
/*1409bc58d*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc594*/  call sub_140307860
/*1409bc599*/  nop
/*1409bc59a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc5a1*/  jz short loc_1409BC5B0
/*1409bc5a3*/ loc_1409BC5A3: lea rcx, [rbp+2C0h+var_F0]
/*1409bc5aa*/  call sub_1400104F0
/*1409bc5af*/  nop
/*1409bc5b0*/ loc_1409BC5B0: call nullsub_1
/*1409bc5b5*/  mov ecx, 0Ch
/*1409bc5ba*/  mov edx, 1
/*1409bc5bf*/  call sub_140001650
/*1409bc5c4*/  test rax, rax
/*1409bc5c7*/  jz loc_1409C061B
/*1409bc5cd*/  mov [rax], r12
/*1409bc5d0*/  mov dword ptr [rax+8], 7865646Eh
/*1409bc5d7*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409bc5e2*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc5e9*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409bc5f4*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bc5fb*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bc606*/  mov qword ptr [rbp+2C0h+var_E0], r15
/*1409bc60d*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bc614*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc61b*/  lea r8, [rbp+2C0h+var_60]
/*1409bc622*/  lea r9, [rbp+2C0h+var_F0]
/*1409bc629*/  call sub_140307860
/*1409bc62e*/  nop
/*1409bc62f*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bc636*/  jz short loc_1409BC645
/*1409bc638*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bc63f*/  call sub_1400104F0
/*1409bc644*/  nop
/*1409bc645*/ loc_1409BC645: call nullsub_1
/*1409bc64a*/  mov ecx, 7
/*1409bc64f*/  mov edx, 1
/*1409bc654*/  call sub_140001650
/*1409bc659*/  test rax, rax
/*1409bc65c*/  jz loc_1409C0630
/*1409bc662*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bc669*/  mov dword ptr [rax], 6D657469h
/*1409bc66f*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409bc67a*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc681*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409bc68c*/  mov qword ptr [rbp+2C0h+var_80], r13
/*1409bc693*/  mov [rbp+2C0h+var_156], 1
/*1409bc69a*/ loc_1409BC69A: lea rcx, [rbp+2C0h+var_F0]
/*1409bc6a1*/  lea rdx, [rbp+2C0h+var_80]
/*1409bc6a8*/  call sub_140B565B0
/*1409bc6ad*/  nop
/*1409bc6ae*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc6b5*/  jz loc_1409BF796
/*1409bc6bb*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc6c3*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc6cb*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc6d3*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc6db*/  mov [rbp+2C0h+var_156], 0
/*1409bc6e2*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc6e9*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc6f0*/  lea r8, [rbp+2C0h+var_60]
/*1409bc6f7*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc6fe*/  call sub_140307860
/*1409bc703*/  nop
/*1409bc704*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc70b*/  jz short loc_1409BC71A
/*1409bc70d*/ loc_1409BC70D: lea rcx, [rbp+2C0h+var_F0]
/*1409bc714*/  call sub_1400104F0
/*1409bc719*/  nop
/*1409bc71a*/ loc_1409BC71A: call nullsub_1
/*1409bc71f*/  mov ecx, 0Dh
/*1409bc724*/  mov edx, 1
/*1409bc729*/  call sub_140001650
/*1409bc72e*/  test rax, rax
/*1409bc731*/  jz loc_1409C0645
/*1409bc737*/  mov rcx, 7865646E695F746Eh
/*1409bc741*/  mov [rax+5], rcx
/*1409bc745*/  mov rcx, 5F746E65746E6F63h
/*1409bc74f*/  mov [rax], rcx
/*1409bc752*/  mov qword ptr [rbp+2C0h+var_60], 0Dh
/*1409bc75d*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc764*/  mov qword ptr [rbp+2C0h+var_50], 0Dh
/*1409bc76f*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bc776*/  pxor xmm0, xmm0
/*1409bc77a*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bc782*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bc789*/  lea rdx, [rbp+2C0h+var_220]
/*1409bc790*/  lea r8, [rbp+2C0h+var_60]
/*1409bc797*/  lea r9, [rbp+2C0h+var_F0]
/*1409bc79e*/  call sub_140307860
/*1409bc7a3*/  nop
/*1409bc7a4*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bc7ab*/  jz short loc_1409BC7BA
/*1409bc7ad*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bc7b4*/  call sub_1400104F0
/*1409bc7b9*/  nop
/*1409bc7ba*/ loc_1409BC7BA: call nullsub_1
/*1409bc7bf*/  mov ecx, 4
/*1409bc7c4*/  mov edx, 1
/*1409bc7c9*/  call sub_140001650
/*1409bc7ce*/  test rax, rax
/*1409bc7d1*/  jz loc_1409C065A
/*1409bc7d7*/  mov dword ptr [rax], 74726170h
/*1409bc7dd*/  mov qword ptr [rbp+2C0h+var_208], 4
/*1409bc7e8*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409bc7ef*/  mov [rbp+2C0h+var_1F8], 4
/*1409bc7fa*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bc805*/  mov [rbp+2C0h+var_70], 0
/*1409bc810*/  call nullsub_1
/*1409bc815*/  mov ecx, 4
/*1409bc81a*/  mov edx, 1
/*1409bc81f*/  call sub_140001650
/*1409bc824*/  test rax, rax
/*1409bc827*/  jz loc_1409C066F
/*1409bc82d*/  mov dword ptr [rax], 65707974h
/*1409bc833*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bc83e*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc845*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bc850*/  mov [rbp+2C0h+var_157], 1
/*1409bc857*/ loc_1409BC857: lea rdx, off_1417A5C20; "output_text"
/*1409bc85e*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc865*/  call sub_140B56640
/*1409bc86a*/  nop
/*1409bc86b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc872*/  jz loc_1409BF7D5
/*1409bc878*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc880*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc888*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc890*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc898*/  mov [rbp+2C0h+var_157], 0
/*1409bc89f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc8a6*/  lea rdx, [rbp+2C0h+var_80]
/*1409bc8ad*/  lea r8, [rbp+2C0h+var_60]
/*1409bc8b4*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc8bb*/  call sub_140307860
/*1409bc8c0*/  nop
/*1409bc8c1*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc8c8*/  jz short loc_1409BC8D7
/*1409bc8ca*/ loc_1409BC8CA: lea rcx, [rbp+2C0h+var_F0]
/*1409bc8d1*/  call sub_1400104F0
/*1409bc8d6*/  nop
/*1409bc8d7*/ loc_1409BC8D7: call nullsub_1
/*1409bc8dc*/  mov ecx, 4
/*1409bc8e1*/  mov edx, 1
/*1409bc8e6*/  call sub_140001650
/*1409bc8eb*/  test rax, rax
/*1409bc8ee*/  jz loc_1409C0684
/*1409bc8f4*/  mov dword ptr [rax], 74786574h
/*1409bc8fa*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bc905*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc90c*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bc917*/  mov [rbp+2C0h+var_158], 1
/*1409bc91e*/ loc_1409BC91E: lea rdx, unk_1417A5900
/*1409bc925*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc92c*/  call sub_140B56640
/*1409bc931*/  nop
/*1409bc932*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc939*/  jz loc_1409BF814
/*1409bc93f*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bc947*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bc94f*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bc957*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bc95f*/  mov [rbp+2C0h+var_158], 0
/*1409bc966*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bc96d*/  lea rdx, [rbp+2C0h+var_80]
/*1409bc974*/  lea r8, [rbp+2C0h+var_60]
/*1409bc97b*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bc982*/  call sub_140307860
/*1409bc987*/  nop
/*1409bc988*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bc98f*/  jz short loc_1409BC99E
/*1409bc991*/ loc_1409BC991: lea rcx, [rbp+2C0h+var_F0]
/*1409bc998*/  call sub_1400104F0
/*1409bc99d*/  nop
/*1409bc99e*/ loc_1409BC99E: call nullsub_1
/*1409bc9a3*/  mov ecx, 0Bh
/*1409bc9a8*/  mov edx, 1
/*1409bc9ad*/  call sub_140001650
/*1409bc9b2*/  test rax, rax
/*1409bc9b5*/  jz loc_1409C0699
/*1409bc9bb*/  mov rcx, 697461746F6E6E61h
/*1409bc9c5*/  mov [rax], rcx
/*1409bc9c8*/  mov dword ptr [rax+7], 736E6F69h
/*1409bc9cf*/  mov qword ptr [rbp+2C0h+var_60], 0Bh
/*1409bc9da*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bc9e1*/  mov qword ptr [rbp+2C0h+var_50], 0Bh
/*1409bc9ec*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bc9f7*/  mov qword ptr [rbp+2C0h+var_E0], 8
/*1409bca02*/  mov qword ptr [rbp+2C0h+var_E0+8], 0
/*1409bca0d*/  mov byte ptr [rbp+2C0h+var_F0], 4
/*1409bca14*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bca1b*/  lea rdx, [rbp+2C0h+var_80]
/*1409bca22*/  lea r8, [rbp+2C0h+var_60]
/*1409bca29*/  lea r9, [rbp+2C0h+var_F0]
/*1409bca30*/  call sub_140307860
/*1409bca35*/  nop
/*1409bca36*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bca3d*/  jz short loc_1409BCA4C
/*1409bca3f*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bca46*/  call sub_1400104F0
/*1409bca4b*/  nop
/*1409bca4c*/ loc_1409BCA4C: movdqu xmm0, [rbp+2C0h+var_80]
/*1409bca54*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bca5c*/  mov rax, [rbp+2C0h+var_70]
/*1409bca63*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bca6a*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bca71*/  mov [rbp+2C0h+var_225], 0
/*1409bca78*/ loc_1409BCA78: lea rcx, [rbp+2C0h+var_1D0]
/*1409bca7f*/  lea rdx, [rbp+2C0h+var_220]
/*1409bca86*/  lea r8, [rbp+2C0h+var_208]
/*1409bca8d*/  lea r14, [rbp+2C0h+var_F0]
/*1409bca94*/  mov r9, r14
/*1409bca97*/  call sub_140307860
/*1409bca9c*/  nop
/*1409bca9d*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bcaa4*/  jz short loc_1409BCAB3
/*1409bcaa6*/ loc_1409BCAA6: lea rcx, [rbp+2C0h+var_1D0]
/*1409bcaad*/  call sub_1400104F0
/*1409bcab2*/  nop
/*1409bcab3*/ loc_1409BCAB3: movdqu xmm0, [rbp+2C0h+var_220]
/*1409bcabb*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bcac3*/  mov rax, [rbp+2C0h+var_210]
/*1409bcaca*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bcad1*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bcad8*/ loc_1409BCAD8: mov [rsp+340h+var_320], r14
/*1409bcadd*/  lea r8, xmmword_1417A5DB8
/*1409bcae4*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bcaeb*/  mov r9d, 1Bh
/*1409bcaf1*/  mov rdx, rbx
/*1409bcaf4*/  call sub_1409C6750
/*1409bcaf9*/  nop
/*1409bcafa*/ loc_1409BCAFA: mov r14, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bcb01*/  mov rbx, qword ptr [rbp+2C0h+var_1C0]
/*1409bcb08*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bcb0f*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bcb16*/  sub rax, rdx
/*1409bcb19*/  cmp rbx, rax
/*1409bcb1c*/  ja loc_1409BF853
/*1409bcb22*/  test rbx, rbx
/*1409bcb25*/  jz short loc_1409BCB43
/*1409bcb27*/ loc_1409BCB27: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bcb2e*/  mov rcx, rdx
/*1409bcb31*/  mov rdx, r14
/*1409bcb34*/  mov r8, rbx
/*1409bcb37*/  call sub_141684120
/*1409bcb3c*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bcb43*/ loc_1409BCB43: add rdx, rbx
/*1409bcb46*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bcb4d*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bcb54*/  test rdx, rdx
/*1409bcb57*/  jz short loc_1409BCB68
/*1409bcb59*/  mov r8d, 1
/*1409bcb5f*/  mov rcx, r14
/*1409bcb62*/  call sub_140001660
/*1409bcb67*/  nop
/*1409bcb68*/ loc_1409BCB68: lea rcx, [rbp+2C0h+var_F0]
/*1409bcb6f*/  call sub_1400104F0
/*1409bcb74*/  nop
/*1409bcb75*/ loc_1409BCB75: mov rax, [rbp+2C0h+var_2A0]
/*1409bcb79*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bcb80*/  movaps xmm0, [rbp+2C0h+var_2B0]
/*1409bcb84*/  movaps [rbp+2C0h+var_F0], xmm0
/*1409bcb8b*/  lea rcx, [rdi+0B0h]
/*1409bcb92*/  call sub_140009030
/*1409bcb97*/  mov rax, qword ptr [rbp+2C0h+var_E0]
/*1409bcb9e*/  mov [rdi+0C0h], rax
/*1409bcba5*/  movdqa xmm0, [rbp+2C0h+var_F0]
/*1409bcbad*/  movdqu xmmword ptr [rdi+0B0h], xmm0
/*1409bcbb5*/  mov qword ptr [rdi+0C8h], 0
/*1409bcbc0*/  mov qword ptr [rdi+0D0h], 1
/*1409bcbcb*/  mov qword ptr [rdi+0D8h], 0
/*1409bcbd6*/  mov [rdi+0E0h], r15d
/*1409bcbdd*/  jmp def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409bcbe2*/ loc_1409BCBE2: mov r15d, 1
/*1409bcbe8*/  xor r14d, r14d
/*1409bcbeb*/ loc_1409BCBEB: mov [rsp+340h+var_320], 1
/*1409bcbf4*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bcbfb*/  mov r9d, 1
/*1409bcc01*/  mov rdx, r14
/*1409bcc04*/  xor r8d, r8d
/*1409bcc07*/  call sub_140388B60
/*1409bcc0c*/  mov r12, qword ptr [rbp+2C0h+var_F0+8]
/*1409bcc13*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409bcc1a*/  jz loc_1409BF88C
/*1409bcc20*/  mov r13, qword ptr [rbp+2C0h+var_E0]
/*1409bcc27*/  test r14, r14
/*1409bcc2a*/  jz short loc_1409BCC3A
/*1409bcc2c*/  mov rcx, r13
/*1409bcc2f*/  mov rdx, r15
/*1409bcc32*/  mov r8, r14
/*1409bcc35*/  call sub_141684120
/*1409bcc3a*/ loc_1409BCC3A: mov qword ptr [rbp+2C0h+var_280], r12
/*1409bcc3e*/  mov qword ptr [rbp+2C0h+var_280+8], r13
/*1409bcc42*/  mov [rbp+2C0h+var_270], r14
/*1409bcc46*/  mov [rbp+2C0h+var_143], 1
/*1409bcc4d*/ loc_1409BCC4D: lea rcx, aName_7; "name"
/*1409bcc54*/  lea r8, [rbp+2C0h+var_120]
/*1409bcc5b*/  mov edx, 4
/*1409bcc60*/  call sub_141433D50
/*1409bcc65*/  nop
/*1409bcc66*/ loc_1409BCC66: test rax, rax
/*1409bcc69*/  jz short loc_1409BCC83
/*1409bcc6b*/  xor r13d, r13d
/*1409bcc6e*/  cmp byte ptr [rax], 3
/*1409bcc71*/  cmovz r13, [rax+18h]
/*1409bcc76*/  mov r15d, 1
/*1409bcc7c*/  cmovz r15, [rax+10h]
/*1409bcc81*/  jmp short loc_1409BCC8C
/*1409bcc83*/ loc_1409BCC83: mov r15d, 1
/*1409bcc89*/  xor r13d, r13d
/*1409bcc8c*/ loc_1409BCC8C: mov [rsp+340h+var_320], 1
/*1409bcc95*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bcc9c*/  mov r9d, 1
/*1409bcca2*/  mov rdx, r13
/*1409bcca5*/  xor r8d, r8d
/*1409bcca8*/  call sub_140388B60
/*1409bccad*/  mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bccb4*/  mov [rbp+2C0h+var_248], rax
/*1409bccb8*/  cmp dword ptr [rbp+2C0h+var_F0], 1
/*1409bccbf*/  jz loc_1409BF8A1
/*1409bccc5*/  mov r14, qword ptr [rbp+2C0h+var_E0]
/*1409bcccc*/  test r13, r13
/*1409bcccf*/  jz short loc_1409BCCDF
/*1409bccd1*/  mov rcx, r14
/*1409bccd4*/  mov rdx, r15
/*1409bccd7*/  mov r8, r13
/*1409bccda*/  call sub_141684120
/*1409bccdf*/ loc_1409BCCDF: mov rcx, r14
/*1409bcce2*/  mov rdx, r13
/*1409bcce5*/  call claude_code_alias_target_name
/*1409bccea*/  mov r12, rax
/*1409bcced*/  test rax, rax
/*1409bccf0*/  mov r15d, 0Ch
/*1409bccf6*/  mov [rbp+2C0h+var_238], r13
/*1409bccfd*/  cmovz r15, r13
/*1409bcd01*/  mov [rbp+2C0h+var_F8], r14
/*1409bcd08*/  cmovz r12, r14
/*1409bcd0c*/  mov [rsp+340h+var_320], 1
/*1409bcd15*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bcd1c*/  mov r9d, 1
/*1409bcd22*/  mov rdx, r15
/*1409bcd25*/  xor r8d, r8d
/*1409bcd28*/  call sub_140388B60
/*1409bcd2d*/  mov r13, qword ptr [rbp+2C0h+var_F0+8]
/*1409bcd34*/  cmp byte ptr [rbp+2C0h+var_F0], 0
/*1409bcd3b*/  jnz loc_1409BF8BE
/*1409bcd41*/  mov r14, qword ptr [rbp+2C0h+var_E0]
/*1409bcd48*/  test r15, r15
/*1409bcd4b*/  jz short loc_1409BCD5B
/*1409bcd4d*/  mov rcx, r14
/*1409bcd50*/  mov rdx, r12
/*1409bcd53*/  mov r8, r15
/*1409bcd56*/  call sub_141684120
/*1409bcd5b*/ loc_1409BCD5B: mov qword ptr [rbp+2C0h+var_260], r13
/*1409bcd5f*/  mov qword ptr [rbp+2C0h+var_260+8], r14
/*1409bcd63*/  mov [rbp+2C0h+var_250], r15
/*1409bcd67*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bcd6e*/  mov rdx, [rbp+2C0h+var_238]
/*1409bcd75*/  call claude_code_alias_target_name
/*1409bcd7a*/  mov r15, rax
/*1409bcd7d*/  mov [rbp+2C0h+var_FA], 1
/*1409bcd84*/ loc_1409BCD84: lea rcx, [rbp+2C0h+var_F0]
/*1409bcd8b*/  call sub_141356270
/*1409bcd90*/  nop
/*1409bcd91*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bcd99*/  movdqa [rbp+2C0h+var_80], xmm0
/*1409bcda1*/  mov [rbp+2C0h+var_FA], 1
/*1409bcda8*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bcdaf*/  lea rdx, [rbp+2C0h+var_80]
/*1409bcdb6*/  call sub_140A681A0
/*1409bcdbb*/  nop
/*1409bcdbc*/  mov rcx, qword ptr [rbp+2C0h+var_F0+8]
/*1409bcdc3*/  mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bcdca*/  cmp rdx, 0Ch
/*1409bcdce*/  mov [rbp+2C0h+var_230], rcx
/*1409bcdd5*/  jbe short loc_1409BCDFD
/*1409bcdd7*/  cmp byte ptr [rcx+0Ch], 0BFh
/*1409bcddb*/  jg short loc_1409BCDFF
/*1409bcddd*/ loc_1409BCDDD: lea rax, off_1417A6280; "src\\core\\relay\\translator.rs"
/*1409bcde4*/  mov [rsp+340h+var_320], rax
/*1409bcde9*/  mov r9d, 0Ch
/*1409bcdef*/  xor r8d, r8d
/*1409bcdf2*/  call sub_1416C2F60
/*1409bcdf8*/  jmp loc_1409C09F1
/*1409bcdfd*/ loc_1409BCDFD: jnz short loc_1409BCDDD
/*1409bcdff*/ loc_1409BCDFF: mov qword ptr [rbp+2C0h+var_208], rcx
/*1409bce06*/  mov qword ptr [rbp+2C0h+var_208+8], 0Ch
/*1409bce11*/  lea rax, [rbp+2C0h+var_208]
/*1409bce18*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bce1f*/  lea rax, sub_14041F680
/*1409bce26*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bce2d*/  lea rdx, unk_1417A5F38
/*1409bce34*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bce3b*/  lea r8, [rbp+2C0h+var_60]
/*1409bce42*/  call sub_14149C0F0
/*1409bce47*/  nop
/*1409bce48*/  mov rdx, qword ptr [rbp+2C0h+var_F0]
/*1409bce4f*/  test rdx, rdx
/*1409bce52*/  jz short loc_1409BCE66
/*1409bce54*/  mov r8d, 1
/*1409bce5a*/  mov rcx, [rbp+2C0h+var_230]
/*1409bce61*/  call sub_140001660
/*1409bce66*/ loc_1409BCE66: movdqu xmm0, [rbp+2C0h+var_1D0]
/*1409bce6e*/  movdqa [rbp+2C0h+var_220], xmm0
/*1409bce76*/  mov rax, qword ptr [rbp+2C0h+var_1C0]
/*1409bce7d*/  mov [rbp+2C0h+var_210], rax
/*1409bce84*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bce8f*/  mov [rbp+2C0h+var_70], 0
/*1409bce9a*/  call nullsub_1
/*1409bce9f*/  mov ecx, 4
/*1409bcea4*/  mov edx, 1
/*1409bcea9*/  call sub_140001650
/*1409bceae*/  test rax, rax
/*1409bceb1*/  jz loc_1409C06AE
/*1409bceb7*/  mov dword ptr [rax], 65707974h
/*1409bcebd*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bcec8*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bcecf*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bceda*/  mov [rbp+2C0h+var_144], 1
/*1409bcee1*/ loc_1409BCEE1: lea rdx, off_1417A5CC0; "function_call"
/*1409bcee8*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bceef*/  call sub_140B56640
/*1409bcef4*/  nop
/*1409bcef5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bcefc*/  jz loc_1409BF8DA
/*1409bcf02*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bcf0a*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bcf12*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bcf1a*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bcf22*/  mov [rbp+2C0h+var_144], 0
/*1409bcf29*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bcf30*/  lea rdx, [rbp+2C0h+var_80]
/*1409bcf37*/  lea r8, [rbp+2C0h+var_60]
/*1409bcf3e*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bcf45*/  call sub_140307860
/*1409bcf4a*/  nop
/*1409bcf4b*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bcf52*/  jz short loc_1409BCF61
/*1409bcf54*/ loc_1409BCF54: lea rcx, [rbp+2C0h+var_F0]
/*1409bcf5b*/  call sub_1400104F0
/*1409bcf60*/  nop
/*1409bcf61*/ loc_1409BCF61: call nullsub_1
/*1409bcf66*/  mov ecx, 2
/*1409bcf6b*/  mov edx, 1
/*1409bcf70*/  call sub_140001650
/*1409bcf75*/  test rax, rax
/*1409bcf78*/  jz loc_1409C06C3
/*1409bcf7e*/  mov word ptr [rax], 6469h
/*1409bcf83*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409bcf8e*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bcf95*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409bcfa0*/  lea r14, [rbp+2C0h+var_220]
/*1409bcfa7*/  mov qword ptr [rbp+2C0h+var_208], r14
/*1409bcfae*/  mov [rbp+2C0h+var_145], 1
/*1409bcfb5*/ loc_1409BCFB5: lea rcx, [rbp+2C0h+var_F0]
/*1409bcfbc*/  lea rdx, [rbp+2C0h+var_208]
/*1409bcfc3*/  call sub_140B565B0
/*1409bcfc8*/  nop
/*1409bcfc9*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bcfd0*/  jz loc_1409BF919
/*1409bcfd6*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bcfde*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bcfe6*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bcfee*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bcff6*/  mov [rbp+2C0h+var_145], 0
/*1409bcffd*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd004*/  lea rdx, [rbp+2C0h+var_80]
/*1409bd00b*/  lea r8, [rbp+2C0h+var_60]
/*1409bd012*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd019*/  call sub_140307860
/*1409bd01e*/  nop
/*1409bd01f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd026*/  jz short loc_1409BD035
/*1409bd028*/ loc_1409BD028: lea rcx, [rbp+2C0h+var_F0]
/*1409bd02f*/  call sub_1400104F0
/*1409bd034*/  nop
/*1409bd035*/ loc_1409BD035: call nullsub_1
/*1409bd03a*/  mov ecx, 6
/*1409bd03f*/  mov edx, 1
/*1409bd044*/  call sub_140001650
/*1409bd049*/  test rax, rax
/*1409bd04c*/  jz loc_1409C06D8
/*1409bd052*/  mov word ptr [rax+4], 7375h
/*1409bd058*/  mov dword ptr [rax], 74617473h
/*1409bd05e*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409bd069*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bd070*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409bd07b*/  mov [rbp+2C0h+var_146], 1
/*1409bd082*/ loc_1409BD082: lea rdx, off_1417A5BB8; "in_progress"
/*1409bd089*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd090*/  call sub_140B56640
/*1409bd095*/  nop
/*1409bd096*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd09d*/  jz loc_1409BF958
/*1409bd0a3*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd0ab*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd0b3*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd0bb*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd0c3*/  mov [rbp+2C0h+var_146], 0
/*1409bd0ca*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd0d1*/  lea rdx, [rbp+2C0h+var_80]
/*1409bd0d8*/  lea r8, [rbp+2C0h+var_60]
/*1409bd0df*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd0e6*/  call sub_140307860
/*1409bd0eb*/  nop
/*1409bd0ec*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd0f3*/  jz short loc_1409BD102
/*1409bd0f5*/ loc_1409BD0F5: lea rcx, [rbp+2C0h+var_F0]
/*1409bd0fc*/  call sub_1400104F0
/*1409bd101*/  nop
/*1409bd102*/ loc_1409BD102: call nullsub_1
/*1409bd107*/  mov ecx, 7
/*1409bd10c*/  mov edx, 1
/*1409bd111*/  call sub_140001650
/*1409bd116*/  test rax, rax
/*1409bd119*/  jz loc_1409C06ED
/*1409bd11f*/  mov dword ptr [rax+3], 64695F6Ch
/*1409bd126*/  mov dword ptr [rax], 6C6C6163h
/*1409bd12c*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409bd137*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bd13e*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409bd149*/  lea rax, [rbp+2C0h+var_280]
/*1409bd14d*/  mov qword ptr [rbp+2C0h+var_208], rax
/*1409bd154*/  mov [rbp+2C0h+var_147], 1
/*1409bd15b*/ loc_1409BD15B: lea rcx, [rbp+2C0h+var_F0]
/*1409bd162*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd169*/  call sub_140B565B0
/*1409bd16e*/  nop
/*1409bd16f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd176*/  jz loc_1409BF997
/*1409bd17c*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd184*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd18c*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd194*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd19c*/  mov [rbp+2C0h+var_147], 0
/*1409bd1a3*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd1aa*/  lea rdx, [rbp+2C0h+var_80]
/*1409bd1b1*/  lea r8, [rbp+2C0h+var_60]
/*1409bd1b8*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd1bf*/  call sub_140307860
/*1409bd1c4*/  nop
/*1409bd1c5*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd1cc*/  jz short loc_1409BD1DB
/*1409bd1ce*/ loc_1409BD1CE: lea rcx, [rbp+2C0h+var_F0]
/*1409bd1d5*/  call sub_1400104F0
/*1409bd1da*/  nop
/*1409bd1db*/ loc_1409BD1DB: call nullsub_1
/*1409bd1e0*/  mov ecx, 4
/*1409bd1e5*/  mov edx, 1
/*1409bd1ea*/  call sub_140001650
/*1409bd1ef*/  test rax, rax
/*1409bd1f2*/  jz loc_1409C0702
/*1409bd1f8*/  mov dword ptr [rax], 656D616Eh
/*1409bd1fe*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bd209*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bd210*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bd21b*/  lea rax, [rbp+2C0h+var_260]
/*1409bd21f*/  mov qword ptr [rbp+2C0h+var_208], rax
/*1409bd226*/  mov [rbp+2C0h+var_148], 1
/*1409bd22d*/ loc_1409BD22D: lea rcx, [rbp+2C0h+var_F0]
/*1409bd234*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd23b*/  call sub_140B565B0
/*1409bd240*/  nop
/*1409bd241*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd248*/  jz loc_1409BF9D6
/*1409bd24e*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd256*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd25e*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd266*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd26e*/  mov [rbp+2C0h+var_148], 0
/*1409bd275*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd27c*/  lea rdx, [rbp+2C0h+var_80]
/*1409bd283*/  lea r8, [rbp+2C0h+var_60]
/*1409bd28a*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd291*/  call sub_140307860
/*1409bd296*/  nop
/*1409bd297*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd29e*/  jz short loc_1409BD2AD
/*1409bd2a0*/ loc_1409BD2A0: lea rcx, [rbp+2C0h+var_F0]
/*1409bd2a7*/  call sub_1400104F0
/*1409bd2ac*/  nop
/*1409bd2ad*/ loc_1409BD2AD: call nullsub_1
/*1409bd2b2*/  mov ecx, 9
/*1409bd2b7*/  mov edx, 1
/*1409bd2bc*/  call sub_140001650
/*1409bd2c1*/  test rax, rax
/*1409bd2c4*/  jz loc_1409C0717
/*1409bd2ca*/  mov rcx, 746E656D75677261h
/*1409bd2d4*/  mov [rax], rcx
/*1409bd2d7*/  mov byte ptr [rax+8], 73h ; 's'
/*1409bd2db*/  mov qword ptr [rbp+2C0h+var_60], 9
/*1409bd2e6*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bd2ed*/  mov qword ptr [rbp+2C0h+var_50], 9
/*1409bd2f8*/  mov [rbp+2C0h+var_149], 1
/*1409bd2ff*/ loc_1409BD2FF: lea rdx, unk_1417A5900
/*1409bd306*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd30d*/  call sub_140B56640
/*1409bd312*/  nop
/*1409bd313*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd31a*/  jz loc_1409BFA15
/*1409bd320*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd328*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd330*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd338*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd340*/  mov [rbp+2C0h+var_149], 0
/*1409bd347*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd34e*/  lea rdx, [rbp+2C0h+var_80]
/*1409bd355*/  lea r8, [rbp+2C0h+var_60]
/*1409bd35c*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd363*/  call sub_140307860
/*1409bd368*/  nop
/*1409bd369*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd370*/  jz short loc_1409BD37F
/*1409bd372*/ loc_1409BD372: lea rcx, [rbp+2C0h+var_F0]
/*1409bd379*/  call sub_1400104F0
/*1409bd37e*/  nop
/*1409bd37f*/ loc_1409BD37F: movdqu xmm0, [rbp+2C0h+var_80]
/*1409bd387*/  movdqu [rbp+2C0h+var_60+8], xmm0
/*1409bd38f*/  mov rax, [rbp+2C0h+var_70]
/*1409bd396*/  mov qword ptr [rbp+2C0h+var_50+8], rax
/*1409bd39d*/  mov byte ptr [rbp+2C0h+var_60], 5
/*1409bd3a4*/  mov rdx, qword ptr [rbp+2C0h+var_260+8]
/*1409bd3a8*/  mov r8, [rbp+2C0h+var_250]
/*1409bd3ac*/  lea r9, [rdi+118h]
/*1409bd3b3*/  mov [rbp+2C0h+var_FB], 1
/*1409bd3ba*/ loc_1409BD3BA: lea rcx, [rbp+2C0h+var_60]
/*1409bd3c1*/  call sub_140A0E950
/*1409bd3c6*/  nop
/*1409bd3c7*/  mov qword ptr [rbp+2C0h+var_208], 0
/*1409bd3d2*/  mov [rbp+2C0h+var_1F8], 0
/*1409bd3dd*/  call nullsub_1
/*1409bd3e2*/  mov ecx, 4
/*1409bd3e7*/  mov edx, 1
/*1409bd3ec*/  call sub_140001650
/*1409bd3f1*/  test rax, rax
/*1409bd3f4*/  jz loc_1409C072C
/*1409bd3fa*/  mov dword ptr [rax], 65707974h
/*1409bd400*/  mov qword ptr [rbp+2C0h+var_80], 4
/*1409bd40b*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409bd412*/  mov [rbp+2C0h+var_70], 4
/*1409bd41d*/  mov [rbp+2C0h+var_14A], 1
/*1409bd424*/ loc_1409BD424: lea rdx, off_1417A5DA8
/*1409bd42b*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd432*/  call sub_140B56640
/*1409bd437*/  nop
/*1409bd438*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd43f*/  jz loc_1409BFA54
/*1409bd445*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd44d*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd455*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd45d*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd465*/  mov [rbp+2C0h+var_14A], 0
/*1409bd46c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd473*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd47a*/  lea r8, [rbp+2C0h+var_80]
/*1409bd481*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd488*/  call sub_140307860
/*1409bd48d*/  nop
/*1409bd48e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd495*/  jz short loc_1409BD4A4
/*1409bd497*/ loc_1409BD497: lea rcx, [rbp+2C0h+var_F0]
/*1409bd49e*/  call sub_1400104F0
/*1409bd4a3*/  nop
/*1409bd4a4*/ loc_1409BD4A4: call nullsub_1
/*1409bd4a9*/  mov ecx, 0Ch
/*1409bd4ae*/  mov edx, 1
/*1409bd4b3*/  call sub_140001650
/*1409bd4b8*/  test rax, rax
/*1409bd4bb*/  jz loc_1409C0741
/*1409bd4c1*/  mov rcx, 695F74757074756Fh
/*1409bd4cb*/  mov [rax], rcx
/*1409bd4ce*/  mov dword ptr [rax+8], 7865646Eh
/*1409bd4d5*/  mov qword ptr [rbp+2C0h+var_80], 0Ch
/*1409bd4e0*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409bd4e7*/  mov [rbp+2C0h+var_70], 0Ch
/*1409bd4f2*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bd4f9*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bd504*/  mov rax, [rbp+2C0h+var_268]
/*1409bd508*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bd50f*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bd516*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd51d*/  lea r8, [rbp+2C0h+var_80]
/*1409bd524*/  lea r9, [rbp+2C0h+var_F0]
/*1409bd52b*/  call sub_140307860
/*1409bd530*/  nop
/*1409bd531*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bd538*/  jz short loc_1409BD547
/*1409bd53a*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bd541*/  call sub_1400104F0
/*1409bd546*/  nop
/*1409bd547*/ loc_1409BD547: call nullsub_1
/*1409bd54c*/  mov ecx, 7
/*1409bd551*/  mov edx, 1
/*1409bd556*/  call sub_140001650
/*1409bd55b*/  test rax, rax
/*1409bd55e*/  jz loc_1409C0756
/*1409bd564*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bd56b*/  mov dword ptr [rax], 6D657469h
/*1409bd571*/  mov qword ptr [rbp+2C0h+var_80], 7
/*1409bd57c*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409bd583*/  mov [rbp+2C0h+var_70], 7
/*1409bd58e*/  mov qword ptr [rbp+2C0h+var_2B0], r14
/*1409bd592*/  mov [rbp+2C0h+var_14B], 1
/*1409bd599*/ loc_1409BD599: lea rcx, [rbp+2C0h+var_F0]
/*1409bd5a0*/  lea rdx, [rbp+2C0h+var_2B0]
/*1409bd5a4*/  call sub_140B565B0
/*1409bd5a9*/  nop
/*1409bd5aa*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd5b1*/  jz loc_1409BFA93
/*1409bd5b7*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd5bf*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd5c7*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd5cf*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd5d7*/  mov [rbp+2C0h+var_14B], 0
/*1409bd5de*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd5e5*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd5ec*/  lea r8, [rbp+2C0h+var_80]
/*1409bd5f3*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd5fa*/  call sub_140307860
/*1409bd5ff*/  nop
/*1409bd600*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd607*/  jz short loc_1409BD616
/*1409bd609*/ loc_1409BD609: lea rcx, [rbp+2C0h+var_F0]
/*1409bd610*/  call sub_1400104F0
/*1409bd615*/  nop
/*1409bd616*/ loc_1409BD616: call nullsub_1
/*1409bd61b*/  mov ecx, 4
/*1409bd620*/  mov edx, 1
/*1409bd625*/  call sub_140001650
/*1409bd62a*/  test rax, rax
/*1409bd62d*/  jz loc_1409C076B
/*1409bd633*/  mov dword ptr [rax], 6D657469h
/*1409bd639*/  mov qword ptr [rbp+2C0h+var_80], 4
/*1409bd644*/  mov qword ptr [rbp+2C0h+var_80+8], rax
/*1409bd64b*/  mov [rbp+2C0h+var_70], 4
/*1409bd656*/  mov [rbp+2C0h+var_14C], 1
/*1409bd65d*/ loc_1409BD65D: lea rcx, [rbp+2C0h+var_F0]
/*1409bd664*/  lea rdx, [rbp+2C0h+var_60]
/*1409bd66b*/  call sub_140B842D0
/*1409bd670*/  nop
/*1409bd671*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd678*/  jz loc_1409BFAD2
/*1409bd67e*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bd686*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bd68e*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bd696*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bd69e*/  mov [rbp+2C0h+var_14C], 0
/*1409bd6a5*/  lea r12, [rbp+2C0h+var_F0]
/*1409bd6ac*/  lea rdx, [rbp+2C0h+var_208]
/*1409bd6b3*/  lea r8, [rbp+2C0h+var_80]
/*1409bd6ba*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bd6c1*/  mov rcx, r12
/*1409bd6c4*/  call sub_140307860
/*1409bd6c9*/  nop
/*1409bd6ca*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bd6d1*/  jz short loc_1409BD6E0
/*1409bd6d3*/ loc_1409BD6D3: lea rcx, [rbp+2C0h+var_F0]
/*1409bd6da*/  call sub_1400104F0
/*1409bd6df*/  nop
/*1409bd6e0*/ loc_1409BD6E0: lea rdx, [rdi+160h]
/*1409bd6e7*/  movdqu xmm0, [rbp+2C0h+var_208]
/*1409bd6ef*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bd6f7*/  mov rax, [rbp+2C0h+var_1F8]
/*1409bd6fe*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bd705*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bd70c*/ loc_1409BD70C: mov [rsp+340h+var_320], r12
/*1409bd711*/  lea r8, xmmword_1417A5D88
/*1409bd718*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bd71f*/  mov r9d, 1Ah
/*1409bd725*/  call sub_1409C6750
/*1409bd72a*/  nop
/*1409bd72b*/ loc_1409BD72B: mov r13, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bd732*/  mov r12, qword ptr [rbp+2C0h+var_1C0]
/*1409bd739*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bd740*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bd747*/  sub rax, rdx
/*1409bd74a*/  cmp r12, rax
/*1409bd74d*/  mov r14, [rbp+2C0h+var_238]
/*1409bd754*/  ja loc_1409BFB11
/*1409bd75a*/  test r12, r12
/*1409bd75d*/  jz short loc_1409BD77B
/*1409bd75f*/ loc_1409BD75F: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bd766*/  mov rcx, rdx
/*1409bd769*/  mov rdx, r13
/*1409bd76c*/  mov r8, r12
/*1409bd76f*/  call sub_141684120
/*1409bd774*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bd77b*/ loc_1409BD77B: add rdx, r12
/*1409bd77e*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bd785*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bd78c*/  test rdx, rdx
/*1409bd78f*/  jz short loc_1409BD79F
/*1409bd791*/  mov r8d, 1
/*1409bd797*/  mov rcx, r13
/*1409bd79a*/  call sub_140001660
/*1409bd79f*/ loc_1409BD79F: mov [rbp+2C0h+var_FB], 1
/*1409bd7a6*/ loc_1409BD7A6: lea rcx, [rbp+2C0h+var_F0]
/*1409bd7ad*/  call sub_1400104F0
/*1409bd7b2*/  nop
/*1409bd7b3*/  test r15, r15
/*1409bd7b6*/  mov rax, [rbp+2C0h+var_210]
/*1409bd7bd*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bd7c4*/  movaps xmm0, [rbp+2C0h+var_220]
/*1409bd7cb*/  movaps [rbp+2C0h+var_F0], xmm0
/*1409bd7d2*/  movdqu xmm0, [rbp+2C0h+var_280]
/*1409bd7d7*/  movdqu [rbp+2C0h+var_E0+8], xmm0
/*1409bd7df*/  mov rax, [rbp+2C0h+var_270]
/*1409bd7e3*/  mov qword ptr [rbp+2C0h+var_D0+8], rax
/*1409bd7ea*/  mov rax, [rbp+2C0h+var_248]
/*1409bd7ee*/  mov qword ptr [rbp+2C0h+var_C0], rax
/*1409bd7f5*/  mov rax, [rbp+2C0h+var_F8]
/*1409bd7fc*/  mov qword ptr [rbp+2C0h+var_C0+8], rax
/*1409bd803*/  mov qword ptr [rbp+2C0h+var_B0], r14
/*1409bd80a*/  mov rax, [rbp+2C0h+var_268]
/*1409bd80e*/  mov dword ptr [rbp+2C0h+var_90], eax
/*1409bd814*/  mov qword ptr [rbp+2C0h+var_B0+8], 0
/*1409bd81f*/  mov qword ptr [rbp+2C0h+var_A0], 1
/*1409bd82a*/  mov qword ptr [rbp+2C0h+var_A0+8], 0
/*1409bd835*/  mov byte ptr [rbp+2C0h+var_90+4], 1
/*1409bd83c*/  setnz byte ptr [rbp+2C0h+var_90+5]
/*1409bd843*/  mov byte ptr [rbp+2C0h+var_90+6], 0
/*1409bd84a*/  add rdi, 0E8h
/*1409bd851*/  mov [rbp+2C0h+var_FB], 0
/*1409bd858*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bd85f*/  lea r9, [rbp+2C0h+var_F0]
/*1409bd866*/  mov rdx, rdi
/*1409bd869*/  mov r8, rbx
/*1409bd86c*/  call sub_140476900
/*1409bd871*/  nop
/*1409bd872*/  cmp qword ptr [rbp+2C0h+var_1D0], 0FFFFFFFFFFFFFFFFh
/*1409bd87a*/  jz short loc_1409BD888
/*1409bd87c*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bd883*/  call sub_1402C6460
/*1409bd888*/ loc_1409BD888: mov [rbp+2C0h+var_1EA], 0
/*1409bd88f*/ loc_1409BD88F: lea rcx, [rbp+2C0h+var_60]
/*1409bd896*/  call sub_1400104F0
/*1409bd89b*/  nop
/*1409bd89c*/ loc_1409BD89C: mov rdx, qword ptr [rbp+2C0h+var_260]
/*1409bd8a0*/  test rdx, rdx
/*1409bd8a3*/  jz short def_1409B94EE; jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409bd8a5*/  mov rcx, qword ptr [rbp+2C0h+var_260+8]
/*1409bd8a9*/  mov r8d, 1
/*1409bd8af*/  call sub_140001660
/*1409bd8b4*/  nop
/*1409bd8b5*/ def_1409B94EE: lea rcx, [rbp+2C0h+var_120]; jumptable 00000001409B94EE default case, cases 5-7,9-14,16  // jumptable 00000001409B94EE default case, cases 5-7,9-14,16
/*1409bd8bc*/  call sub_1400104F0
/*1409bd8c1*/  nop
/*1409bd8c2*/ def_1409B7E68: mov rax, [rbp+2C0h+var_1D8]; jumptable 00000001409B7E68 default case, cases 14-17  // jumptable 00000001409B7E68 default case, cases 14-17
/*1409bd8c9*/  mov [rsi+10h], rax
/*1409bd8cd*/  movups xmm0, [rbp+2C0h+var_1E8]
/*1409bd8d4*/  movups xmmword ptr [rsi], xmm0
/*1409bd8d7*/  add rsp, 308h
/*1409bd8de*/  pop rbx
/*1409bd8df*/  pop rdi
/*1409bd8e0*/  pop rsi
/*1409bd8e1*/  pop r12
/*1409bd8e3*/  pop r13
/*1409bd8e5*/  pop r14
/*1409bd8e7*/  pop r15
/*1409bd8e9*/  pop rbp
/*1409bd8ea*/  retn
/*1409bd8eb*/ loc_1409BD8EB: lea rcx, aPartialJson; "partial_json"
/*1409bd8f2*/  lea r8, [rbp+2C0h+var_60]
/*1409bd8f9*/  mov edx, 0Ch
/*1409bd8fe*/  call sub_141433D50
/*1409bd903*/  nop
/*1409bd904*/  test rax, rax
/*1409bd907*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bd90d*/  cmp byte ptr [rax], 3
/*1409bd910*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bd916*/  mov r15, [rax+10h]
/*1409bd91a*/  mov r14, [rax+18h]
/*1409bd91e*/  mov qword ptr [rbp+2C0h+var_208], r15
/*1409bd925*/  mov qword ptr [rbp+2C0h+var_208+8], r14
/*1409bd92c*/  test r14, r14
/*1409bd92f*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bd935*/  lea rcx, [rdi+0E8h]
/*1409bd93c*/  lea rdx, [rbp+2C0h+var_220]
/*1409bd943*/  call sub_14042ADC0
/*1409bd948*/  nop
/*1409bd949*/ loc_1409BD949: mov rbx, rax
/*1409bd94c*/  test rax, rax
/*1409bd94f*/  jz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bd955*/  mov rax, [rbx+48h]
/*1409bd959*/  mov rdx, [rbx+58h]
/*1409bd95d*/  sub rax, rdx
/*1409bd960*/  cmp r14, rax
/*1409bd963*/  ja loc_1409BFF60
/*1409bd969*/ loc_1409BD969: add rdx, [rbx+50h]
/*1409bd96d*/  mov rcx, rdx
/*1409bd970*/  mov rdx, r15
/*1409bd973*/  mov r8, r14
/*1409bd976*/  call sub_141684120
/*1409bd97b*/  add [rbx+58h], r14
/*1409bd97f*/  cmp byte ptr [rbx+65h], 0
/*1409bd983*/  jnz def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bd989*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bd994*/  mov [rbp+2C0h+var_70], 0
/*1409bd99f*/  call nullsub_1
/*1409bd9a4*/  mov ecx, 4
/*1409bd9a9*/  mov edx, 1
/*1409bd9ae*/  call sub_140001650
/*1409bd9b3*/  test rax, rax
/*1409bd9b6*/  jz loc_1409C09AB
/*1409bd9bc*/  mov dword ptr [rax], 65707974h
/*1409bd9c2*/  mov qword ptr [rbp+2C0h+var_120], 4
/*1409bd9cd*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bd9d4*/  mov qword ptr [rbp+2C0h+var_110], 4
/*1409bd9df*/  mov [rbp+2C0h+var_12D], 1
/*1409bd9e6*/ loc_1409BD9E6: lea rdx, off_1417A5FC8
/*1409bd9ed*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bd9f4*/  call sub_140B56640
/*1409bd9f9*/  nop
/*1409bd9fa*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bda01*/  jz loc_1409C0158
/*1409bda07*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bda0f*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bda17*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bda1f*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bda27*/  mov [rbp+2C0h+var_12D], 0
/*1409bda2e*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bda35*/  lea rdx, [rbp+2C0h+var_80]
/*1409bda3c*/  lea r8, [rbp+2C0h+var_120]
/*1409bda43*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bda4a*/  call sub_140307860
/*1409bda4f*/  nop
/*1409bda50*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bda57*/  jz short loc_1409BDA66
/*1409bda59*/ loc_1409BDA59: lea rcx, [rbp+2C0h+var_F0]
/*1409bda60*/  call sub_1400104F0
/*1409bda65*/  nop
/*1409bda66*/ loc_1409BDA66: call nullsub_1
/*1409bda6b*/  mov ecx, 0Ch
/*1409bda70*/  mov edx, 1
/*1409bda75*/  call sub_140001650
/*1409bda7a*/  test rax, rax
/*1409bda7d*/  jz loc_1409C09BD
/*1409bda83*/  mov rcx, 695F74757074756Fh
/*1409bda8d*/  mov [rax], rcx
/*1409bda90*/  mov dword ptr [rax+8], 7865646Eh
/*1409bda97*/  mov qword ptr [rbp+2C0h+var_120], 0Ch
/*1409bdaa2*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bdaa9*/  mov qword ptr [rbp+2C0h+var_110], 0Ch
/*1409bdab4*/  mov eax, [rbx+60h]
/*1409bdab7*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bdabe*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bdac9*/  mov qword ptr [rbp+2C0h+var_E0], rax
/*1409bdad0*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bdad7*/  lea rdx, [rbp+2C0h+var_80]
/*1409bdade*/  lea r8, [rbp+2C0h+var_120]
/*1409bdae5*/  lea r9, [rbp+2C0h+var_F0]
/*1409bdaec*/  call sub_140307860
/*1409bdaf1*/  nop
/*1409bdaf2*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bdaf9*/  jz short loc_1409BDB08
/*1409bdafb*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bdb02*/  call sub_1400104F0
/*1409bdb07*/  nop
/*1409bdb08*/ loc_1409BDB08: call nullsub_1
/*1409bdb0d*/  mov ecx, 7
/*1409bdb12*/  mov edx, 1
/*1409bdb17*/  call sub_140001650
/*1409bdb1c*/  test rax, rax
/*1409bdb1f*/  jz loc_1409C09CF
/*1409bdb25*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bdb2c*/  mov dword ptr [rax], 6D657469h
/*1409bdb32*/  mov qword ptr [rbp+2C0h+var_120], 7
/*1409bdb3d*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bdb44*/  mov qword ptr [rbp+2C0h+var_110], 7
/*1409bdb4f*/  mov [rbp+2C0h+var_12E], 1
/*1409bdb56*/ loc_1409BDB56: lea rcx, [rbp+2C0h+var_F0]
/*1409bdb5d*/  mov rdx, rbx
/*1409bdb60*/  call sub_140B56520
/*1409bdb65*/  nop
/*1409bdb66*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bdb6d*/  jz loc_1409C0197
/*1409bdb73*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bdb7b*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bdb83*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bdb8b*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bdb93*/  mov [rbp+2C0h+var_12E], 0
/*1409bdb9a*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bdba1*/  lea rdx, [rbp+2C0h+var_80]
/*1409bdba8*/  lea r8, [rbp+2C0h+var_120]
/*1409bdbaf*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bdbb6*/  call sub_140307860
/*1409bdbbb*/  nop
/*1409bdbbc*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bdbc3*/  jz short loc_1409BDBD2
/*1409bdbc5*/ loc_1409BDBC5: lea rcx, [rbp+2C0h+var_F0]
/*1409bdbcc*/  call sub_1400104F0
/*1409bdbd1*/  nop
/*1409bdbd2*/ loc_1409BDBD2: call nullsub_1
/*1409bdbd7*/  mov ecx, 5
/*1409bdbdc*/  mov edx, 1
/*1409bdbe1*/  call sub_140001650
/*1409bdbe6*/  test rax, rax
/*1409bdbe9*/  jz loc_1409C09E1
/*1409bdbef*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409bdbf3*/  mov dword ptr [rax], 746C6564h
/*1409bdbf9*/  mov qword ptr [rbp+2C0h+var_120], 5
/*1409bdc04*/  mov qword ptr [rbp+2C0h+var_120+8], rax
/*1409bdc0b*/  mov qword ptr [rbp+2C0h+var_110], 5
/*1409bdc16*/  mov [rbp+2C0h+var_12F], 1
/*1409bdc1d*/ loc_1409BDC1D: lea rcx, [rbp+2C0h+var_F0]
/*1409bdc24*/  lea rdx, [rbp+2C0h+var_208]
/*1409bdc2b*/  call sub_140B56640
/*1409bdc30*/  nop
/*1409bdc31*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bdc38*/  jz loc_1409C01D6
/*1409bdc3e*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bdc46*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bdc4e*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bdc56*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bdc5e*/  mov [rbp+2C0h+var_12F], 0
/*1409bdc65*/  lea rbx, [rbp+2C0h+var_F0]
/*1409bdc6c*/  lea rdx, [rbp+2C0h+var_80]
/*1409bdc73*/  lea r8, [rbp+2C0h+var_120]
/*1409bdc7a*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bdc81*/  mov rcx, rbx
/*1409bdc84*/  call sub_140307860
/*1409bdc89*/  nop
/*1409bdc8a*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bdc91*/  jz short loc_1409BDCA0
/*1409bdc93*/ loc_1409BDC93: lea rcx, [rbp+2C0h+var_F0]
/*1409bdc9a*/  call sub_1400104F0
/*1409bdc9f*/  nop
/*1409bdca0*/ loc_1409BDCA0: add rdi, 160h
/*1409bdca7*/  movdqu xmm0, [rbp+2C0h+var_80]
/*1409bdcaf*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409bdcb7*/  mov rax, [rbp+2C0h+var_70]
/*1409bdcbe*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bdcc5*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bdccc*/ loc_1409BDCCC: mov [rsp+340h+var_320], rbx
/*1409bdcd1*/  lea r8, xmmword_1417A5FA0
/*1409bdcd8*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bdcdf*/  mov r9d, 26h ; '&'
/*1409bdce5*/  mov rdx, rdi
/*1409bdce8*/  call sub_1409C6750
/*1409bdced*/  nop
/*1409bdcee*/ loc_1409BDCEE: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409bdcf5*/  mov [rbp+2C0h+var_F8], rax
/*1409bdcfc*/  mov rdi, qword ptr [rbp+2C0h+var_1C0]
/*1409bdd03*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bdd0a*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bdd11*/  sub rax, rdx
/*1409bdd14*/  cmp rdi, rax
/*1409bdd17*/  ja loc_1409C0215
/*1409bdd1d*/  test rdi, rdi
/*1409bdd20*/  jz short loc_1409BDD42
/*1409bdd22*/ loc_1409BDD22: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bdd29*/  mov rcx, rdx
/*1409bdd2c*/  mov rdx, [rbp+2C0h+var_F8]
/*1409bdd33*/  mov r8, rdi
/*1409bdd36*/  call sub_141684120
/*1409bdd3b*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bdd42*/ loc_1409BDD42: add rdx, rdi
/*1409bdd45*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bdd4c*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bdd53*/  test rdx, rdx
/*1409bdd56*/  jz short loc_1409BDD6B
/*1409bdd58*/  mov r8d, 1
/*1409bdd5e*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bdd65*/  call sub_140001660
/*1409bdd6a*/  nop
/*1409bdd6b*/ loc_1409BDD6B: lea rcx, [rbp+2C0h+var_F0]
/*1409bdd72*/  call sub_1400104F0
/*1409bdd77*/  nop
/*1409bdd78*/  jmp def_1409B9A87; jumptable 00000001409B9A87 default case, cases 11-13
/*1409bdd7d*/ loc_1409BDD7D: jnz loc_1409B96FD
/*1409bdd83*/ loc_1409BDD83: mov qword ptr [rbp+2C0h+var_208], rcx
/*1409bdd8a*/  mov qword ptr [rbp+2C0h+var_208+8], 0Ch
/*1409bdd95*/  lea rax, [rbp+2C0h+var_208]
/*1409bdd9c*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bdda3*/  lea rax, sub_14041F680
/*1409bddaa*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bddb1*/ loc_1409BDDB1: lea rdx, unk_1417A6210
/*1409bddb8*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bddbf*/  lea r8, [rbp+2C0h+var_60]
/*1409bddc6*/  call sub_14149C0F0
/*1409bddcb*/  nop
/*1409bddcc*/  mov rdx, qword ptr [rbp+2C0h+var_F0]
/*1409bddd3*/  test rdx, rdx
/*1409bddd6*/  jz short loc_1409BDDEA
/*1409bddd8*/  mov r8d, 1
/*1409bddde*/  mov rcx, [rbp+2C0h+var_F8]
/*1409bdde5*/  call sub_140001660
/*1409bddea*/ loc_1409BDDEA: movdqu xmm0, [rbp+2C0h+var_1D0]
/*1409bddf2*/  movdqa [rbp+2C0h+var_260], xmm0
/*1409bddf7*/  mov rax, qword ptr [rbp+2C0h+var_1C0]
/*1409bddfe*/  mov [rbp+2C0h+var_250], rax
/*1409bde02*/  mov qword ptr [rbp+2C0h+var_220], 0
/*1409bde0d*/  mov [rbp+2C0h+var_210], 0
/*1409bde18*/  call nullsub_1
/*1409bde1d*/  mov ecx, 4
/*1409bde22*/  mov edx, 1
/*1409bde27*/  call sub_140001650
/*1409bde2c*/  test rax, rax
/*1409bde2f*/  jz loc_1409C0780
/*1409bde35*/  mov dword ptr [rax], 65707974h
/*1409bde3b*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409bde46*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bde4d*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409bde58*/  mov [rbp+2C0h+var_136], 1
/*1409bde5f*/ loc_1409BDE5F: lea rdx, off_1417A5DA8
/*1409bde66*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bde6d*/  call sub_140B56640
/*1409bde72*/  nop
/*1409bde73*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bde7a*/  jz loc_1409BFB51
/*1409bde80*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bde88*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bde90*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bde98*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bdea0*/  mov [rbp+2C0h+var_136], 0
/*1409bdea7*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bdeae*/  lea rdx, [rbp+2C0h+var_220]
/*1409bdeb5*/  lea r8, [rbp+2C0h+var_60]
/*1409bdebc*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bdec3*/  call sub_140307860
/*1409bdec8*/  nop
/*1409bdec9*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bded0*/  jz short loc_1409BDEDF
/*1409bded2*/ loc_1409BDED2: lea rcx, [rbp+2C0h+var_F0]
/*1409bded9*/  call sub_1400104F0
/*1409bdede*/  nop
/*1409bdedf*/ loc_1409BDEDF: call nullsub_1
/*1409bdee4*/  mov ecx, 0Ch
/*1409bdee9*/  mov edx, 1
/*1409bdeee*/  call sub_140001650
/*1409bdef3*/  test rax, rax
/*1409bdef6*/  jz loc_1409C0795
/*1409bdefc*/  mov r13, 695F74757074756Fh
/*1409bdf06*/  mov [rax], r13
/*1409bdf09*/  mov dword ptr [rax+8], 7865646Eh
/*1409bdf10*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409bdf1b*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bdf22*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409bdf2d*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409bdf34*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409bdf3f*/  mov qword ptr [rbp+2C0h+var_E0], r12
/*1409bdf46*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bdf4d*/  lea rdx, [rbp+2C0h+var_220]
/*1409bdf54*/  lea r8, [rbp+2C0h+var_60]
/*1409bdf5b*/  lea r9, [rbp+2C0h+var_F0]
/*1409bdf62*/  call sub_140307860
/*1409bdf67*/  nop
/*1409bdf68*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409bdf6f*/  jz short loc_1409BDF7E
/*1409bdf71*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409bdf78*/  call sub_1400104F0
/*1409bdf7d*/  nop
/*1409bdf7e*/ loc_1409BDF7E: call nullsub_1
/*1409bdf83*/  mov ecx, 7
/*1409bdf88*/  mov edx, 1
/*1409bdf8d*/  call sub_140001650
/*1409bdf92*/  test rax, rax
/*1409bdf95*/  jz loc_1409C07AA
/*1409bdf9b*/  mov dword ptr [rax+3], 64695F6Dh
/*1409bdfa2*/  mov dword ptr [rax], 6D657469h
/*1409bdfa8*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409bdfb3*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bdfba*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409bdfc5*/  lea r15, [rbp+2C0h+var_260]
/*1409bdfc9*/  mov qword ptr [rbp+2C0h+var_80], r15
/*1409bdfd0*/  mov [rbp+2C0h+var_137], 1
/*1409bdfd7*/ loc_1409BDFD7: lea rcx, [rbp+2C0h+var_F0]
/*1409bdfde*/  lea rdx, [rbp+2C0h+var_80]
/*1409bdfe5*/  call sub_140B565B0
/*1409bdfea*/  nop
/*1409bdfeb*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bdff2*/  jz loc_1409BFB90
/*1409bdff8*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be000*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be008*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be010*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be018*/  mov [rbp+2C0h+var_137], 0
/*1409be01f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be026*/  lea rdx, [rbp+2C0h+var_220]
/*1409be02d*/  lea r8, [rbp+2C0h+var_60]
/*1409be034*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be03b*/  call sub_140307860
/*1409be040*/  nop
/*1409be041*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be048*/  jz short loc_1409BE057
/*1409be04a*/ loc_1409BE04A: lea rcx, [rbp+2C0h+var_F0]
/*1409be051*/  call sub_1400104F0
/*1409be056*/  nop
/*1409be057*/ loc_1409BE057: call nullsub_1
/*1409be05c*/  mov ecx, 4
/*1409be061*/  mov edx, 1
/*1409be066*/  call sub_140001650
/*1409be06b*/  test rax, rax
/*1409be06e*/  jz loc_1409C07BF
/*1409be074*/  mov dword ptr [rax], 6D657469h
/*1409be07a*/  mov qword ptr [rbp+2C0h+var_208], 4
/*1409be085*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409be08c*/  mov [rbp+2C0h+var_1F8], 4
/*1409be097*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409be0a2*/  mov [rbp+2C0h+var_70], 0
/*1409be0ad*/  call nullsub_1
/*1409be0b2*/  mov ecx, 4
/*1409be0b7*/  mov edx, 1
/*1409be0bc*/  call sub_140001650
/*1409be0c1*/  test rax, rax
/*1409be0c4*/  jz loc_1409C07D4
/*1409be0ca*/  mov dword ptr [rax], 65707974h
/*1409be0d0*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409be0db*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be0e2*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409be0ed*/  mov [rbp+2C0h+var_138], 1
/*1409be0f4*/ loc_1409BE0F4: lea rdx, off_1417A6240; "web_search_call"
/*1409be0fb*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be102*/  call sub_140B56640
/*1409be107*/  nop
/*1409be108*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be10f*/  jz loc_1409BFBCF
/*1409be115*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be11d*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be125*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be12d*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be135*/  mov [rbp+2C0h+var_138], 0
/*1409be13c*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be143*/  lea rdx, [rbp+2C0h+var_80]
/*1409be14a*/  lea r8, [rbp+2C0h+var_60]
/*1409be151*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be158*/  call sub_140307860
/*1409be15d*/  nop
/*1409be15e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be165*/  jz short loc_1409BE174
/*1409be167*/ loc_1409BE167: lea rcx, [rbp+2C0h+var_F0]
/*1409be16e*/  call sub_1400104F0
/*1409be173*/  nop
/*1409be174*/ loc_1409BE174: call nullsub_1
/*1409be179*/  mov ecx, 2
/*1409be17e*/  mov edx, 1
/*1409be183*/  call sub_140001650
/*1409be188*/  test rax, rax
/*1409be18b*/  jz loc_1409C07E9
/*1409be191*/  mov word ptr [rax], 6469h
/*1409be196*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409be1a1*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be1a8*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409be1b3*/  mov qword ptr [rbp+2C0h+var_280], r15
/*1409be1b7*/  mov [rbp+2C0h+var_139], 1
/*1409be1be*/ loc_1409BE1BE: lea rcx, [rbp+2C0h+var_F0]
/*1409be1c5*/  lea rdx, [rbp+2C0h+var_280]
/*1409be1c9*/  call sub_140B565B0
/*1409be1ce*/  nop
/*1409be1cf*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be1d6*/  jz loc_1409BFC0E
/*1409be1dc*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be1e4*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be1ec*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be1f4*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be1fc*/  mov [rbp+2C0h+var_139], 0
/*1409be203*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be20a*/  lea rdx, [rbp+2C0h+var_80]
/*1409be211*/  lea r8, [rbp+2C0h+var_60]
/*1409be218*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be21f*/  call sub_140307860
/*1409be224*/  nop
/*1409be225*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be22c*/  jz short loc_1409BE23B
/*1409be22e*/ loc_1409BE22E: lea rcx, [rbp+2C0h+var_F0]
/*1409be235*/  call sub_1400104F0
/*1409be23a*/  nop
/*1409be23b*/ loc_1409BE23B: call nullsub_1
/*1409be240*/  mov ecx, 6
/*1409be245*/  mov edx, 1
/*1409be24a*/  call sub_140001650
/*1409be24f*/  test rax, rax
/*1409be252*/  jz loc_1409C07FE
/*1409be258*/  mov word ptr [rax+4], 7375h
/*1409be25e*/  mov dword ptr [rax], 74617473h
/*1409be264*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409be26f*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be276*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409be281*/  mov [rbp+2C0h+var_13A], 1
/*1409be288*/ loc_1409BE288: lea rdx, off_1417A5BB8; "in_progress"
/*1409be28f*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be296*/  call sub_140B56640
/*1409be29b*/  nop
/*1409be29c*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be2a3*/  jz loc_1409BFC4D
/*1409be2a9*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be2b1*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be2b9*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be2c1*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be2c9*/  mov [rbp+2C0h+var_13A], 0
/*1409be2d0*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be2d7*/  lea rdx, [rbp+2C0h+var_80]
/*1409be2de*/  lea r8, [rbp+2C0h+var_60]
/*1409be2e5*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be2ec*/  call sub_140307860
/*1409be2f1*/  nop
/*1409be2f2*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be2f9*/  jz short loc_1409BE308
/*1409be2fb*/ loc_1409BE2FB: lea rcx, [rbp+2C0h+var_F0]
/*1409be302*/  call sub_1400104F0
/*1409be307*/  nop
/*1409be308*/ loc_1409BE308: movdqu xmm0, [rbp+2C0h+var_80]
/*1409be310*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409be318*/  mov rax, [rbp+2C0h+var_70]
/*1409be31f*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409be326*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409be32d*/  mov [rbp+2C0h+var_221], 0
/*1409be334*/ loc_1409BE334: lea rcx, [rbp+2C0h+var_1D0]
/*1409be33b*/  lea rdx, [rbp+2C0h+var_220]
/*1409be342*/  lea r8, [rbp+2C0h+var_208]
/*1409be349*/  lea r14, [rbp+2C0h+var_F0]
/*1409be350*/  mov r9, r14
/*1409be353*/  call sub_140307860
/*1409be358*/  nop
/*1409be359*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409be360*/  jz short loc_1409BE36F
/*1409be362*/ loc_1409BE362: lea rcx, [rbp+2C0h+var_1D0]
/*1409be369*/  call sub_1400104F0
/*1409be36e*/  nop
/*1409be36f*/ loc_1409BE36F: lea rbx, [rdi+160h]
/*1409be376*/  movdqu xmm0, [rbp+2C0h+var_220]
/*1409be37e*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409be386*/  mov rax, [rbp+2C0h+var_210]
/*1409be38d*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409be394*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409be39b*/ loc_1409BE39B: mov [rsp+340h+var_320], r14
/*1409be3a0*/  lea r8, xmmword_1417A5D88
/*1409be3a7*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409be3ae*/  mov r9d, 1Ah
/*1409be3b4*/  mov rdx, rbx
/*1409be3b7*/  call sub_1409C6750
/*1409be3bc*/  nop
/*1409be3bd*/ loc_1409BE3BD: mov rax, qword ptr [rbp+2C0h+var_1D0+8]
/*1409be3c4*/  mov [rbp+2C0h+var_F8], rax
/*1409be3cb*/  mov r14, qword ptr [rbp+2C0h+var_1C0]
/*1409be3d2*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409be3d9*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409be3e0*/  sub rax, rdx
/*1409be3e3*/  cmp r14, rax
/*1409be3e6*/  ja loc_1409BFC8C
/*1409be3ec*/  test r14, r14
/*1409be3ef*/  jz short loc_1409BE411
/*1409be3f1*/ loc_1409BE3F1: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409be3f8*/  mov rcx, rdx
/*1409be3fb*/  mov rdx, [rbp+2C0h+var_F8]
/*1409be402*/  mov r8, r14
/*1409be405*/  call sub_141684120
/*1409be40a*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409be411*/ loc_1409BE411: add rdx, r14
/*1409be414*/  mov [rbp+2C0h+var_1D8], rdx
/*1409be41b*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409be422*/  test rdx, rdx
/*1409be425*/  jz short loc_1409BE43A
/*1409be427*/  mov r8d, 1
/*1409be42d*/  mov rcx, [rbp+2C0h+var_F8]
/*1409be434*/  call sub_140001660
/*1409be439*/  nop
/*1409be43a*/ loc_1409BE43A: lea rcx, [rbp+2C0h+var_F0]
/*1409be441*/  call sub_1400104F0
/*1409be446*/  nop
/*1409be447*/  mov qword ptr [rbp+2C0h+var_220], 0
/*1409be452*/  mov [rbp+2C0h+var_210], 0
/*1409be45d*/  call nullsub_1
/*1409be462*/  mov ecx, 4
/*1409be467*/  mov edx, 1
/*1409be46c*/  call sub_140001650
/*1409be471*/  test rax, rax
/*1409be474*/  jz loc_1409C0813
/*1409be47a*/  mov dword ptr [rax], 65707974h
/*1409be480*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409be48b*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be492*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409be49d*/  mov [rbp+2C0h+var_13B], 1
/*1409be4a4*/ loc_1409BE4A4: lea rdx, off_1417A5C50
/*1409be4ab*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be4b2*/  call sub_140B56640
/*1409be4b7*/  nop
/*1409be4b8*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be4bf*/  jz loc_1409BFCB7
/*1409be4c5*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be4cd*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be4d5*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be4dd*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be4e5*/  mov [rbp+2C0h+var_13B], 0
/*1409be4ec*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be4f3*/  lea rdx, [rbp+2C0h+var_220]
/*1409be4fa*/  lea r8, [rbp+2C0h+var_60]
/*1409be501*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be508*/  call sub_140307860
/*1409be50d*/  nop
/*1409be50e*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be515*/  jz short loc_1409BE524
/*1409be517*/ loc_1409BE517: lea rcx, [rbp+2C0h+var_F0]
/*1409be51e*/  call sub_1400104F0
/*1409be523*/  nop
/*1409be524*/ loc_1409BE524: call nullsub_1
/*1409be529*/  mov ecx, 0Ch
/*1409be52e*/  mov edx, 1
/*1409be533*/  call sub_140001650
/*1409be538*/  test rax, rax
/*1409be53b*/  jz loc_1409C0828
/*1409be541*/  mov [rax], r13
/*1409be544*/  mov dword ptr [rax+8], 7865646Eh
/*1409be54b*/  mov qword ptr [rbp+2C0h+var_60], 0Ch
/*1409be556*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be55d*/  mov qword ptr [rbp+2C0h+var_50], 0Ch
/*1409be568*/  mov byte ptr [rbp+2C0h+var_F0], 2
/*1409be56f*/  mov qword ptr [rbp+2C0h+var_F0+8], 0
/*1409be57a*/  mov qword ptr [rbp+2C0h+var_E0], r12
/*1409be581*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409be588*/  lea rdx, [rbp+2C0h+var_220]
/*1409be58f*/  lea r8, [rbp+2C0h+var_60]
/*1409be596*/  lea r9, [rbp+2C0h+var_F0]
/*1409be59d*/  call sub_140307860
/*1409be5a2*/  nop
/*1409be5a3*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409be5aa*/  jz short loc_1409BE5B9
/*1409be5ac*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409be5b3*/  call sub_1400104F0
/*1409be5b8*/  nop
/*1409be5b9*/ loc_1409BE5B9: call nullsub_1
/*1409be5be*/  mov ecx, 7
/*1409be5c3*/  mov edx, 1
/*1409be5c8*/  call sub_140001650
/*1409be5cd*/  test rax, rax
/*1409be5d0*/  jz loc_1409C083D
/*1409be5d6*/  mov dword ptr [rax+3], 64695F6Dh
/*1409be5dd*/  mov dword ptr [rax], 6D657469h
/*1409be5e3*/  mov qword ptr [rbp+2C0h+var_60], 7
/*1409be5ee*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be5f5*/  mov qword ptr [rbp+2C0h+var_50], 7
/*1409be600*/  mov qword ptr [rbp+2C0h+var_80], r15
/*1409be607*/  mov [rbp+2C0h+var_13C], 1
/*1409be60e*/ loc_1409BE60E: lea rcx, [rbp+2C0h+var_F0]
/*1409be615*/  lea rdx, [rbp+2C0h+var_80]
/*1409be61c*/  call sub_140B565B0
/*1409be621*/  nop
/*1409be622*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be629*/  jz loc_1409BFCF6
/*1409be62f*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be637*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be63f*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be647*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be64f*/  mov [rbp+2C0h+var_13C], 0
/*1409be656*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be65d*/  lea rdx, [rbp+2C0h+var_220]
/*1409be664*/  lea r8, [rbp+2C0h+var_60]
/*1409be66b*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be672*/  call sub_140307860
/*1409be677*/  nop
/*1409be678*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be67f*/  jz short loc_1409BE68E
/*1409be681*/ loc_1409BE681: lea rcx, [rbp+2C0h+var_F0]
/*1409be688*/  call sub_1400104F0
/*1409be68d*/  nop
/*1409be68e*/ loc_1409BE68E: call nullsub_1
/*1409be693*/  mov ecx, 4
/*1409be698*/  mov edx, 1
/*1409be69d*/  call sub_140001650
/*1409be6a2*/  test rax, rax
/*1409be6a5*/  jz loc_1409C0852
/*1409be6ab*/  mov dword ptr [rax], 6D657469h
/*1409be6b1*/  mov qword ptr [rbp+2C0h+var_208], 4
/*1409be6bc*/  mov qword ptr [rbp+2C0h+var_208+8], rax
/*1409be6c3*/  mov [rbp+2C0h+var_1F8], 4
/*1409be6ce*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409be6d9*/  mov [rbp+2C0h+var_70], 0
/*1409be6e4*/  call nullsub_1
/*1409be6e9*/  mov ecx, 4
/*1409be6ee*/  mov edx, 1
/*1409be6f3*/  call sub_140001650
/*1409be6f8*/  test rax, rax
/*1409be6fb*/  jz loc_1409C0867
/*1409be701*/  mov dword ptr [rax], 65707974h
/*1409be707*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409be712*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be719*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409be724*/  mov [rbp+2C0h+var_13D], 1
/*1409be72b*/ loc_1409BE72B: lea rdx, off_1417A6240; "web_search_call"
/*1409be732*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be739*/  call sub_140B56640
/*1409be73e*/  nop
/*1409be73f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be746*/  jz loc_1409BFD35
/*1409be74c*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be754*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be75c*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be764*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be76c*/  mov [rbp+2C0h+var_13D], 0
/*1409be773*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be77a*/  lea rdx, [rbp+2C0h+var_80]
/*1409be781*/  lea r8, [rbp+2C0h+var_60]
/*1409be788*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be78f*/  call sub_140307860
/*1409be794*/  nop
/*1409be795*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be79c*/  jz short loc_1409BE7AB
/*1409be79e*/ loc_1409BE79E: lea rcx, [rbp+2C0h+var_F0]
/*1409be7a5*/  call sub_1400104F0
/*1409be7aa*/  nop
/*1409be7ab*/ loc_1409BE7AB: call nullsub_1
/*1409be7b0*/  mov ecx, 2
/*1409be7b5*/  mov edx, 1
/*1409be7ba*/  call sub_140001650
/*1409be7bf*/  test rax, rax
/*1409be7c2*/  jz loc_1409C087C
/*1409be7c8*/  mov word ptr [rax], 6469h
/*1409be7cd*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409be7d8*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be7df*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409be7ea*/  mov qword ptr [rbp+2C0h+var_280], r15
/*1409be7ee*/  mov [rbp+2C0h+var_13E], 1
/*1409be7f5*/ loc_1409BE7F5: lea rcx, [rbp+2C0h+var_F0]
/*1409be7fc*/  lea rdx, [rbp+2C0h+var_280]
/*1409be800*/  call sub_140B565B0
/*1409be805*/  nop
/*1409be806*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be80d*/  jz loc_1409BFD74
/*1409be813*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be81b*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be823*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be82b*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be833*/  mov [rbp+2C0h+var_13E], 0
/*1409be83a*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be841*/  lea rdx, [rbp+2C0h+var_80]
/*1409be848*/  lea r8, [rbp+2C0h+var_60]
/*1409be84f*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be856*/  call sub_140307860
/*1409be85b*/  nop
/*1409be85c*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be863*/  jz short loc_1409BE872
/*1409be865*/ loc_1409BE865: lea rcx, [rbp+2C0h+var_F0]
/*1409be86c*/  call sub_1400104F0
/*1409be871*/  nop
/*1409be872*/ loc_1409BE872: call nullsub_1
/*1409be877*/  mov ecx, 6
/*1409be87c*/  mov edx, 1
/*1409be881*/  call sub_140001650
/*1409be886*/  test rax, rax
/*1409be889*/  jz loc_1409C0891
/*1409be88f*/  mov word ptr [rax+4], 7375h
/*1409be895*/  mov dword ptr [rax], 74617473h
/*1409be89b*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409be8a6*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409be8ad*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409be8b8*/  mov [rbp+2C0h+var_13F], 1
/*1409be8bf*/ loc_1409BE8BF: lea rdx, off_1417A5B58; "completed"
/*1409be8c6*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be8cd*/  call sub_140B56640
/*1409be8d2*/  nop
/*1409be8d3*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be8da*/  jz loc_1409BFDB3
/*1409be8e0*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409be8e8*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409be8f0*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409be8f8*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409be900*/  mov [rbp+2C0h+var_13F], 0
/*1409be907*/  lea rcx, [rbp+2C0h+var_F0]
/*1409be90e*/  lea rdx, [rbp+2C0h+var_80]
/*1409be915*/  lea r8, [rbp+2C0h+var_60]
/*1409be91c*/  lea r9, [rbp+2C0h+var_1D0]
/*1409be923*/  call sub_140307860
/*1409be928*/  nop
/*1409be929*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409be930*/  jz short loc_1409BE93F
/*1409be932*/ loc_1409BE932: lea rcx, [rbp+2C0h+var_F0]
/*1409be939*/  call sub_1400104F0
/*1409be93e*/  nop
/*1409be93f*/ loc_1409BE93F: movdqu xmm0, [rbp+2C0h+var_80]
/*1409be947*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409be94f*/  mov rax, [rbp+2C0h+var_70]
/*1409be956*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409be95d*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409be964*/  mov [rbp+2C0h+var_222], 0
/*1409be96b*/ loc_1409BE96B: lea rcx, [rbp+2C0h+var_1D0]
/*1409be972*/  lea rdx, [rbp+2C0h+var_220]
/*1409be979*/  lea r8, [rbp+2C0h+var_208]
/*1409be980*/  lea r14, [rbp+2C0h+var_F0]
/*1409be987*/  mov r9, r14
/*1409be98a*/  call sub_140307860
/*1409be98f*/  nop
/*1409be990*/  cmp byte ptr [rbp+2C0h+var_1D0], 0FFh
/*1409be997*/  jz short loc_1409BE9A6
/*1409be999*/ loc_1409BE999: lea rcx, [rbp+2C0h+var_1D0]
/*1409be9a0*/  call sub_1400104F0
/*1409be9a5*/  nop
/*1409be9a6*/ loc_1409BE9A6: movdqu xmm0, [rbp+2C0h+var_220]
/*1409be9ae*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409be9b6*/  mov rax, [rbp+2C0h+var_210]
/*1409be9bd*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409be9c4*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409be9cb*/ loc_1409BE9CB: mov [rsp+340h+var_320], r14
/*1409be9d0*/  lea r8, xmmword_1417A5C30
/*1409be9d7*/  lea rcx, [rbp+2C0h+var_1D0]
/*1409be9de*/  mov r9d, 19h
/*1409be9e4*/  mov rdx, rbx
/*1409be9e7*/  call sub_1409C6750
/*1409be9ec*/  nop
/*1409be9ed*/ loc_1409BE9ED: mov r14, qword ptr [rbp+2C0h+var_1D0+8]
/*1409be9f4*/  mov rbx, qword ptr [rbp+2C0h+var_1C0]
/*1409be9fb*/  mov rax, qword ptr [rbp+2C0h+var_1E8]
/*1409bea02*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bea09*/  sub rax, rdx
/*1409bea0c*/  cmp rbx, rax
/*1409bea0f*/  ja loc_1409BFDF2
/*1409bea15*/  test rbx, rbx
/*1409bea18*/  jz short loc_1409BEA36
/*1409bea1a*/ loc_1409BEA1A: add rdx, qword ptr [rbp+2C0h+var_1E8+8]
/*1409bea21*/  mov rcx, rdx
/*1409bea24*/  mov rdx, r14
/*1409bea27*/  mov r8, rbx
/*1409bea2a*/  call sub_141684120
/*1409bea2f*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bea36*/ loc_1409BEA36: add rdx, rbx
/*1409bea39*/  mov [rbp+2C0h+var_1D8], rdx
/*1409bea40*/  mov rdx, qword ptr [rbp+2C0h+var_1D0]
/*1409bea47*/  test rdx, rdx
/*1409bea4a*/  jz short loc_1409BEA5B
/*1409bea4c*/  mov r8d, 1
/*1409bea52*/  mov rcx, r14
/*1409bea55*/  call sub_140001660
/*1409bea5a*/  nop
/*1409bea5b*/ loc_1409BEA5B: lea rcx, [rbp+2C0h+var_F0]
/*1409bea62*/  call sub_1400104F0
/*1409bea67*/  nop
/*1409bea68*/  mov qword ptr [rbp+2C0h+var_80], 0
/*1409bea73*/  mov [rbp+2C0h+var_70], 0
/*1409bea7e*/  call nullsub_1
/*1409bea83*/  mov ecx, 4
/*1409bea88*/  mov edx, 1
/*1409bea8d*/  call sub_140001650
/*1409bea92*/  test rax, rax
/*1409bea95*/  jz loc_1409C08A6
/*1409bea9b*/  mov dword ptr [rax], 65707974h
/*1409beaa1*/  mov qword ptr [rbp+2C0h+var_60], 4
/*1409beaac*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409beab3*/  mov qword ptr [rbp+2C0h+var_50], 4
/*1409beabe*/  mov [rbp+2C0h+var_140], 1
/*1409beac5*/ loc_1409BEAC5: lea rdx, off_1417A6240; "web_search_call"
/*1409beacc*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bead3*/  call sub_140B56640
/*1409bead8*/  nop
/*1409bead9*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409beae0*/  jz loc_1409BFE2B
/*1409beae6*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409beaee*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409beaf6*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409beafe*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409beb06*/  mov [rbp+2C0h+var_140], 0
/*1409beb0d*/  lea rcx, [rbp+2C0h+var_F0]
/*1409beb14*/  lea rdx, [rbp+2C0h+var_80]
/*1409beb1b*/  lea r8, [rbp+2C0h+var_60]
/*1409beb22*/  lea r9, [rbp+2C0h+var_1D0]
/*1409beb29*/  call sub_140307860
/*1409beb2e*/  nop
/*1409beb2f*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409beb36*/  jz short loc_1409BEB45
/*1409beb38*/ loc_1409BEB38: lea rcx, [rbp+2C0h+var_F0]
/*1409beb3f*/  call sub_1400104F0
/*1409beb44*/  nop
/*1409beb45*/ loc_1409BEB45: call nullsub_1
/*1409beb4a*/  mov ecx, 2
/*1409beb4f*/  mov edx, 1
/*1409beb54*/  call sub_140001650
/*1409beb59*/  test rax, rax
/*1409beb5c*/  jz loc_1409C08BB
/*1409beb62*/  mov word ptr [rax], 6469h
/*1409beb67*/  mov qword ptr [rbp+2C0h+var_60], 2
/*1409beb72*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409beb79*/  mov qword ptr [rbp+2C0h+var_50], 2
/*1409beb84*/  mov qword ptr [rbp+2C0h+var_208], r15
/*1409beb8b*/  mov [rbp+2C0h+var_141], 1
/*1409beb92*/ loc_1409BEB92: lea rcx, [rbp+2C0h+var_F0]
/*1409beb99*/  lea rdx, [rbp+2C0h+var_208]
/*1409beba0*/  call sub_140B565B0
/*1409beba5*/  nop
/*1409beba6*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bebad*/  jz loc_1409BFE6A
/*1409bebb3*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bebbb*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bebc3*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bebcb*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409bebd3*/  mov [rbp+2C0h+var_141], 0
/*1409bebda*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bebe1*/  lea rdx, [rbp+2C0h+var_80]
/*1409bebe8*/  lea r8, [rbp+2C0h+var_60]
/*1409bebef*/  lea r9, [rbp+2C0h+var_1D0]
/*1409bebf6*/  call sub_140307860
/*1409bebfb*/  nop
/*1409bebfc*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bec03*/  jz short loc_1409BEC12
/*1409bec05*/ loc_1409BEC05: lea rcx, [rbp+2C0h+var_F0]
/*1409bec0c*/  call sub_1400104F0
/*1409bec11*/  nop
/*1409bec12*/ loc_1409BEC12: call nullsub_1
/*1409bec17*/  mov ecx, 6
/*1409bec1c*/  mov edx, 1
/*1409bec21*/  call sub_140001650
/*1409bec26*/  test rax, rax
/*1409bec29*/  jz loc_1409C08D0
/*1409bec2f*/  mov word ptr [rax+4], 7375h
/*1409bec35*/  mov dword ptr [rax], 74617473h
/*1409bec3b*/  mov qword ptr [rbp+2C0h+var_60], 6
/*1409bec46*/  mov qword ptr [rbp+2C0h+var_60+8], rax
/*1409bec4d*/  mov qword ptr [rbp+2C0h+var_50], 6
/*1409bec58*/  mov [rbp+2C0h+var_142], 1
/*1409bec5f*/ loc_1409BEC5F: lea rdx, off_1417A5B58; "completed"
/*1409bec66*/  lea rcx, [rbp+2C0h+var_F0]
/*1409bec6d*/  call sub_140B56640
/*1409bec72*/  nop
/*1409bec73*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409bec7a*/  jz loc_1409BFEA9
/*1409bec80*/  movdqu xmm0, [rbp+2C0h+var_F0]
/*1409bec88*/  movdqu xmm1, [rbp+2C0h+var_E0]
/*1409bec90*/  movdqa [rbp+2C0h+var_1C0], xmm1
/*1409bec98*/  movdqa [rbp+2C0h+var_1D0], xmm0
/*1409beca0*/  mov [rbp+2C0h+var_142], 0
/*1409beca7*/  lea rcx, [rbp+2C0h+var_F0]
/*1409becae*/  lea rdx, [rbp+2C0h+var_80]
/*1409becb5*/  lea r8, [rbp+2C0h+var_60]
/*1409becbc*/  lea r9, [rbp+2C0h+var_1D0]
/*1409becc3*/  call sub_140307860
/*1409becc8*/  nop
/*1409becc9*/  cmp byte ptr [rbp+2C0h+var_F0], 0FFh
/*1409becd0*/  jz short loc_1409BECDF
/*1409becd2*/ loc_1409BECD2: lea rcx, [rbp+2C0h+var_F0]
/*1409becd9*/  call sub_1400104F0
/*1409becde*/  nop
/*1409becdf*/ loc_1409BECDF: add rdi, 30h ; '0'
/*1409bece3*/  movdqu xmm0, [rbp+2C0h+var_80]
/*1409beceb*/  movdqu [rbp+2C0h+var_F0+8], xmm0
/*1409becf3*/  mov rax, [rbp+2C0h+var_70]
/*1409becfa*/  mov qword ptr [rbp+2C0h+var_E0+8], rax
/*1409bed01*/  mov byte ptr [rbp+2C0h+var_F0], 5
/*1409bed08*/ loc_1409BED08: lea rdx, [rbp+2C0h+var_F0]
/*1409bed0f*/  mov rcx, rdi
/*1409bed12*/  call sub_1409CF090
/*1409bed17*/  nop
/*1409bed18*/  jmp loc_1409BD89C
/*1409bed1d*/ loc_1409BED1D: mov [rbp+2C0h+var_F8], r14
/*1409bed24*/  mov [rsp+340h+var_320], 1
/*1409bed2d*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bed34*/  mov r9d, 1
/*1409bed3a*/  mov rdx, rbx
/*1409bed3d*/  mov r8, rdi
/*1409bed40*/  call sub_141688D30
/*1409bed45*/  nop
/*1409bed46*/  mov rbx, [rbp+2C0h+var_1D8]
/*1409bed4d*/  mov r14, [rbp+2C0h+var_F8]
/*1409bed54*/  jmp loc_1409B8010
/*1409bed59*/ loc_1409BED59: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bed60*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bed67*/ loc_1409BED67: lea rax, off_1417A6138; "src\\core\\relay\\translator.rs"
/*1409bed6e*/  mov [rsp+340h+var_320], rax
/*1409bed73*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bed7a*/  lea r9, off_1417A5560
/*1409bed81*/  lea r8, [rbp+2C0h+var_60]
/*1409bed88*/  mov edx, 2Bh ; '+'
/*1409bed8d*/  call sub_1416C3060
/*1409bed93*/  jmp loc_1409C09F1
/*1409bed98*/ loc_1409BED98: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bed9f*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409beda6*/ loc_1409BEDA6: lea rax, off_1417A6138; "src\\core\\relay\\translator.rs"
/*1409bedad*/  mov [rsp+340h+var_320], rax
/*1409bedb2*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bedb9*/  lea r9, off_1417A5560
/*1409bedc0*/  lea r8, [rbp+2C0h+var_60]
/*1409bedc7*/  mov edx, 2Bh ; '+'
/*1409bedcc*/  call sub_1416C3060
/*1409bedd2*/  jmp loc_1409C09F1
/*1409bedd7*/ loc_1409BEDD7: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bedde*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bede5*/ loc_1409BEDE5: lea rax, off_1417A6138; "src\\core\\relay\\translator.rs"
/*1409bedec*/  mov [rsp+340h+var_320], rax
/*1409bedf1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bedf8*/  lea r9, off_1417A5560
/*1409bedff*/  lea r8, [rbp+2C0h+var_60]
/*1409bee06*/  mov edx, 2Bh ; '+'
/*1409bee0b*/  call sub_1416C3060
/*1409bee11*/  jmp loc_1409C09F1
/*1409bee16*/ loc_1409BEE16: mov [rbp+2C0h+var_F8], r13
/*1409bee1d*/  mov [rsp+340h+var_320], 1
/*1409bee26*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bee2d*/  mov r9d, 1
/*1409bee33*/  mov r8, r14
/*1409bee36*/  call sub_141688D30
/*1409bee3b*/  nop
/*1409bee3c*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bee43*/  mov r13, [rbp+2C0h+var_F8]
/*1409bee4a*/  jmp loc_1409B8792
/*1409bee4f*/ loc_1409BEE4F: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bee56*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bee5d*/ loc_1409BEE5D: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409bee64*/  mov [rsp+340h+var_320], rax
/*1409bee69*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bee70*/  lea r9, off_1417A5560
/*1409bee77*/  lea r8, [rbp+2C0h+var_60]
/*1409bee7e*/  mov edx, 2Bh ; '+'
/*1409bee83*/  call sub_1416C3060
/*1409bee89*/  jmp loc_1409C09F1
/*1409bee8e*/ loc_1409BEE8E: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bee95*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bee9c*/ loc_1409BEE9C: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409beea3*/  mov [rsp+340h+var_320], rax
/*1409beea8*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409beeaf*/  lea r9, off_1417A5560
/*1409beeb6*/  lea r8, [rbp+2C0h+var_60]
/*1409beebd*/  mov edx, 2Bh ; '+'
/*1409beec2*/  call sub_1416C3060
/*1409beec8*/  jmp loc_1409C09F1
/*1409beecd*/ loc_1409BEECD: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409beed4*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409beedb*/ loc_1409BEEDB: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409beee2*/  mov [rsp+340h+var_320], rax
/*1409beee7*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409beeee*/  lea r9, off_1417A5560
/*1409beef5*/  lea r8, [rbp+2C0h+var_60]
/*1409beefc*/  mov edx, 2Bh ; '+'
/*1409bef01*/  call sub_1416C3060
/*1409bef07*/  jmp loc_1409C09F1
/*1409bef0c*/ loc_1409BEF0C: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bef13*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bef1a*/ loc_1409BEF1A: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409bef21*/  mov [rsp+340h+var_320], rax
/*1409bef26*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bef2d*/  lea r9, off_1417A5560
/*1409bef34*/  lea r8, [rbp+2C0h+var_60]
/*1409bef3b*/  mov edx, 2Bh ; '+'
/*1409bef40*/  call sub_1416C3060
/*1409bef46*/  jmp loc_1409C09F1
/*1409bef4b*/ loc_1409BEF4B: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bef52*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bef59*/ loc_1409BEF59: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409bef60*/  mov [rsp+340h+var_320], rax
/*1409bef65*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bef6c*/  lea r9, off_1417A5560
/*1409bef73*/  lea r8, [rbp+2C0h+var_60]
/*1409bef7a*/  mov edx, 2Bh ; '+'
/*1409bef7f*/  call sub_1416C3060
/*1409bef85*/  jmp loc_1409C09F1
/*1409bef8a*/ loc_1409BEF8A: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bef91*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bef98*/ loc_1409BEF98: lea rax, off_1417A6150; "src\\core\\relay\\translator.rs"
/*1409bef9f*/  mov [rsp+340h+var_320], rax
/*1409befa4*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409befab*/  lea r9, off_1417A5560
/*1409befb2*/  lea r8, [rbp+2C0h+var_60]
/*1409befb9*/  mov edx, 2Bh ; '+'
/*1409befbe*/  call sub_1416C3060
/*1409befc4*/  jmp loc_1409C09F1
/*1409befc9*/ loc_1409BEFC9: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409befd0*/  mov [rbp+2C0h+var_1E9], 1
/*1409befd7*/ loc_1409BEFD7: mov rcx, [rbp+2C0h+var_F8]
/*1409befde*/  call sub_1416C2D4B
/*1409befe4*/  jmp loc_1409C09F1
/*1409befe9*/ loc_1409BEFE9: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409beff0*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409beff7*/ loc_1409BEFF7: lea rax, off_1417A6168; "src\\core\\relay\\translator.rs"
/*1409beffe*/  mov [rsp+340h+var_320], rax
/*1409bf003*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf00a*/  lea r9, off_1417A5560
/*1409bf011*/  lea r8, [rbp+2C0h+var_60]
/*1409bf018*/  mov edx, 2Bh ; '+'
/*1409bf01d*/  call sub_1416C3060
/*1409bf023*/  jmp loc_1409C09F1
/*1409bf028*/ loc_1409BF028: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf02f*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bf036*/ loc_1409BF036: lea rax, off_1417A6168; "src\\core\\relay\\translator.rs"
/*1409bf03d*/  mov [rsp+340h+var_320], rax
/*1409bf042*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf049*/  lea r9, off_1417A5560
/*1409bf050*/  lea r8, [rbp+2C0h+var_60]
/*1409bf057*/  mov edx, 2Bh ; '+'
/*1409bf05c*/  call sub_1416C3060
/*1409bf062*/  jmp loc_1409C09F1
/*1409bf067*/ loc_1409BF067: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf06e*/  mov qword ptr [rbp+2C0h+var_60], rax
/*1409bf075*/ loc_1409BF075: lea rax, off_1417A6168; "src\\core\\relay\\translator.rs"
/*1409bf07c*/  mov [rsp+340h+var_320], rax
/*1409bf081*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf088*/  lea r9, off_1417A5560
/*1409bf08f*/  lea r8, [rbp+2C0h+var_60]
/*1409bf096*/  mov edx, 2Bh ; '+'
/*1409bf09b*/  call sub_1416C3060
/*1409bf0a1*/  jmp loc_1409C09F1
/*1409bf0a6*/ loc_1409BF0A6: mov [rbp+2C0h+var_268], r14
/*1409bf0aa*/  mov [rsp+340h+var_320], 1
/*1409bf0b3*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf0ba*/  mov r9d, 1
/*1409bf0c0*/  mov r8, rbx
/*1409bf0c3*/  call sub_141688D30
/*1409bf0c8*/  nop
/*1409bf0c9*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf0d0*/  mov r14, [rbp+2C0h+var_268]
/*1409bf0d4*/  jmp loc_1409B927F
/*1409bf0d9*/ loc_1409BF0D9: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf0e0*/ loc_1409BF0E0: mov rcx, r15
/*1409bf0e3*/  call sub_1416C2D4B
/*1409bf0e9*/  jmp loc_1409C09F1
/*1409bf0ee*/ loc_1409BF0EE: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409bf0f5*/  mov [rsp+340h+var_320], rax
/*1409bf0fa*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409bf101*/  lea r9, unk_1417A5580
/*1409bf108*/  lea r8, [rbp+2C0h+var_239]
/*1409bf10f*/  mov edx, 37h ; '7'
/*1409bf114*/  call sub_1416C3060
/*1409bf11a*/  jmp loc_1409C09F1
/*1409bf11f*/ loc_1409BF11F: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf126*/ loc_1409BF126: mov rcx, r14
/*1409bf129*/  call sub_1416C2D4B
/*1409bf12f*/  jmp loc_1409C09F1
/*1409bf134*/ loc_1409BF134: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf13b*/  mov [rbp+2C0h+var_298], r14
/*1409bf13f*/ loc_1409BF13F: mov rcx, [rbp+2C0h+var_290]
/*1409bf143*/  call sub_1416C2D4B
/*1409bf149*/  jmp loc_1409C09F1
/*1409bf14e*/ loc_1409BF14E: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf155*/ loc_1409BF155: mov rcx, [rbp+2C0h+var_288]
/*1409bf159*/  call sub_1416C2D4B
/*1409bf15f*/  jmp loc_1409C09F1
/*1409bf164*/ loc_1409BF164: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf16b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf172*/ loc_1409BF172: lea rax, off_1417A6330; "src\\core\\relay\\translator.rs"
/*1409bf179*/  mov [rsp+340h+var_320], rax
/*1409bf17e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf185*/  lea r9, off_1417A5560
/*1409bf18c*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf193*/  mov edx, 2Bh ; '+'
/*1409bf198*/  call sub_1416C3060
/*1409bf19e*/  jmp loc_1409C09F1
/*1409bf1a3*/ loc_1409BF1A3: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf1aa*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf1b1*/ loc_1409BF1B1: lea rax, off_1417A6330; "src\\core\\relay\\translator.rs"
/*1409bf1b8*/  mov [rsp+340h+var_320], rax
/*1409bf1bd*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf1c4*/  lea r9, off_1417A5560
/*1409bf1cb*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf1d2*/  mov edx, 2Bh ; '+'
/*1409bf1d7*/  call sub_1416C3060
/*1409bf1dd*/  jmp loc_1409C09F1
/*1409bf1e2*/ loc_1409BF1E2: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf1e9*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf1f0*/ loc_1409BF1F0: lea rax, off_1417A6330; "src\\core\\relay\\translator.rs"
/*1409bf1f7*/  mov [rsp+340h+var_320], rax
/*1409bf1fc*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf203*/  lea r9, off_1417A5560
/*1409bf20a*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf211*/  mov edx, 2Bh ; '+'
/*1409bf216*/  call sub_1416C3060
/*1409bf21c*/  jmp loc_1409C09F1
/*1409bf221*/ loc_1409BF221: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf228*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf22f*/ loc_1409BF22F: lea rax, off_1417A6330; "src\\core\\relay\\translator.rs"
/*1409bf236*/  mov [rsp+340h+var_320], rax
/*1409bf23b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf242*/  lea r9, off_1417A5560
/*1409bf249*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf250*/  mov edx, 2Bh ; '+'
/*1409bf255*/  call sub_1416C3060
/*1409bf25b*/  jmp loc_1409C09F1
/*1409bf260*/ loc_1409BF260: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf267*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf26e*/ loc_1409BF26E: lea rax, off_1417A6330; "src\\core\\relay\\translator.rs"
/*1409bf275*/  mov [rsp+340h+var_320], rax
/*1409bf27a*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf281*/  lea r9, off_1417A5560
/*1409bf288*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf28f*/  mov edx, 2Bh ; '+'
/*1409bf294*/  call sub_1416C3060
/*1409bf29a*/  jmp loc_1409C09F1
/*1409bf29f*/ loc_1409BF29F: mov [rsp+340h+var_320], 1
/*1409bf2a8*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf2af*/  mov r9d, 1
/*1409bf2b5*/  mov r8, r13
/*1409bf2b8*/  call sub_141688D30
/*1409bf2bd*/  nop
/*1409bf2be*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf2c5*/  jmp loc_1409BA884
/*1409bf2ca*/ loc_1409BF2CA: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf2d1*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf2d8*/ loc_1409BF2D8: lea rax, off_1417A63A8; "src\\core\\relay\\translator.rs"
/*1409bf2df*/  mov [rsp+340h+var_320], rax
/*1409bf2e4*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf2eb*/  lea r9, off_1417A5560
/*1409bf2f2*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf2f9*/  mov edx, 2Bh ; '+'
/*1409bf2fe*/  call sub_1416C3060
/*1409bf304*/  jmp loc_1409C09F1
/*1409bf309*/ loc_1409BF309: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf310*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf317*/ loc_1409BF317: lea rax, off_1417A63A8; "src\\core\\relay\\translator.rs"
/*1409bf31e*/  mov [rsp+340h+var_320], rax
/*1409bf323*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf32a*/  lea r9, off_1417A5560
/*1409bf331*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf338*/  mov edx, 2Bh ; '+'
/*1409bf33d*/  call sub_1416C3060
/*1409bf343*/  jmp loc_1409C09F1
/*1409bf348*/ loc_1409BF348: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf34f*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf356*/ loc_1409BF356: lea rax, off_1417A63A8; "src\\core\\relay\\translator.rs"
/*1409bf35d*/  mov [rsp+340h+var_320], rax
/*1409bf362*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf369*/  lea r9, off_1417A5560
/*1409bf370*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf377*/  mov edx, 2Bh ; '+'
/*1409bf37c*/  call sub_1416C3060
/*1409bf382*/  jmp loc_1409C09F1
/*1409bf387*/ loc_1409BF387: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf38e*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf395*/ loc_1409BF395: lea rax, off_1417A63A8; "src\\core\\relay\\translator.rs"
/*1409bf39c*/  mov [rsp+340h+var_320], rax
/*1409bf3a1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf3a8*/  lea r9, off_1417A5560
/*1409bf3af*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf3b6*/  mov edx, 2Bh ; '+'
/*1409bf3bb*/  call sub_1416C3060
/*1409bf3c1*/  jmp loc_1409C09F1
/*1409bf3c6*/ loc_1409BF3C6: mov [rsp+340h+var_320], 1
/*1409bf3cf*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf3d6*/  mov r9d, 1
/*1409bf3dc*/  mov r8, r13
/*1409bf3df*/  call sub_141688D30
/*1409bf3e4*/  nop
/*1409bf3e5*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf3ec*/  jmp loc_1409BAED9
/*1409bf3f1*/ loc_1409BF3F1: mov [rbp+2C0h+var_1EB], 1
/*1409bf3f8*/ loc_1409BF3F8: mov ecx, 8
/*1409bf3fd*/  mov edx, 20h ; ' '
/*1409bf402*/  call sub_1416C2D31
/*1409bf408*/  jmp loc_1409C09F1
/*1409bf40d*/ loc_1409BF40D: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf414*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf41b*/ loc_1409BF41B: lea rax, off_1417A63C0; "src\\core\\relay\\translator.rs"
/*1409bf422*/  mov [rsp+340h+var_320], rax
/*1409bf427*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf42e*/  lea r9, off_1417A5560
/*1409bf435*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf43c*/  mov edx, 2Bh ; '+'
/*1409bf441*/  call sub_1416C3060
/*1409bf447*/  jmp loc_1409C09F1
/*1409bf44c*/ loc_1409BF44C: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf453*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf45a*/ loc_1409BF45A: lea rax, off_1417A63C0; "src\\core\\relay\\translator.rs"
/*1409bf461*/  mov [rsp+340h+var_320], rax
/*1409bf466*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf46d*/  lea r9, off_1417A5560
/*1409bf474*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf47b*/  mov edx, 2Bh ; '+'
/*1409bf480*/  call sub_1416C3060
/*1409bf486*/  jmp loc_1409C09F1
/*1409bf48b*/ loc_1409BF48B: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf492*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf499*/ loc_1409BF499: lea rax, off_1417A63C0; "src\\core\\relay\\translator.rs"
/*1409bf4a0*/  mov [rsp+340h+var_320], rax
/*1409bf4a5*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf4ac*/  lea r9, off_1417A5560
/*1409bf4b3*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf4ba*/  mov edx, 2Bh ; '+'
/*1409bf4bf*/  call sub_1416C3060
/*1409bf4c5*/  jmp loc_1409C09F1
/*1409bf4ca*/ loc_1409BF4CA: mov [rbp+2C0h+var_230], r12
/*1409bf4d1*/  mov [rsp+340h+var_320], 1
/*1409bf4da*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf4e1*/  mov r9d, 1
/*1409bf4e7*/  mov r8, r15
/*1409bf4ea*/  call sub_141688D30
/*1409bf4ef*/  nop
/*1409bf4f0*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf4f7*/  mov r12, [rbp+2C0h+var_230]
/*1409bf4fe*/  jmp loc_1409BB374
/*1409bf503*/ loc_1409BF503: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409bf50a*/  mov [rsp+340h+var_320], rax
/*1409bf50f*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409bf516*/  lea r9, unk_1417A5580
/*1409bf51d*/  lea r8, [rbp+2C0h+var_239]
/*1409bf524*/  mov edx, 37h ; '7'
/*1409bf529*/  call sub_1416C3060
/*1409bf52f*/  jmp loc_1409C09F1
/*1409bf534*/ loc_1409BF534: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf53b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf542*/ loc_1409BF542: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf549*/  mov [rsp+340h+var_320], rax
/*1409bf54e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf555*/  lea r9, off_1417A5560
/*1409bf55c*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf563*/  mov edx, 2Bh ; '+'
/*1409bf568*/  call sub_1416C3060
/*1409bf56e*/  jmp loc_1409C09F1
/*1409bf573*/ loc_1409BF573: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf57a*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf581*/ loc_1409BF581: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf588*/  mov [rsp+340h+var_320], rax
/*1409bf58d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf594*/  lea r9, off_1417A5560
/*1409bf59b*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf5a2*/  mov edx, 2Bh ; '+'
/*1409bf5a7*/  call sub_1416C3060
/*1409bf5ad*/  jmp loc_1409C09F1
/*1409bf5b2*/ loc_1409BF5B2: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf5b9*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf5c0*/ loc_1409BF5C0: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf5c7*/  mov [rsp+340h+var_320], rax
/*1409bf5cc*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf5d3*/  lea r9, off_1417A5560
/*1409bf5da*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf5e1*/  mov edx, 2Bh ; '+'
/*1409bf5e6*/  call sub_1416C3060
/*1409bf5ec*/  jmp loc_1409C09F1
/*1409bf5f1*/ loc_1409BF5F1: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf5f8*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf5ff*/ loc_1409BF5FF: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf606*/  mov [rsp+340h+var_320], rax
/*1409bf60b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf612*/  lea r9, off_1417A5560
/*1409bf619*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf620*/  mov edx, 2Bh ; '+'
/*1409bf625*/  call sub_1416C3060
/*1409bf62b*/  jmp loc_1409C09F1
/*1409bf630*/ loc_1409BF630: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf637*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf63e*/ loc_1409BF63E: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf645*/  mov [rsp+340h+var_320], rax
/*1409bf64a*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf651*/  lea r9, off_1417A5560
/*1409bf658*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf65f*/  mov edx, 2Bh ; '+'
/*1409bf664*/  call sub_1416C3060
/*1409bf66a*/  jmp loc_1409C09F1
/*1409bf66f*/ loc_1409BF66F: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf676*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf67d*/ loc_1409BF67D: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf684*/  mov [rsp+340h+var_320], rax
/*1409bf689*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf690*/  lea r9, off_1417A5560
/*1409bf697*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf69e*/  mov edx, 2Bh ; '+'
/*1409bf6a3*/  call sub_1416C3060
/*1409bf6a9*/  jmp loc_1409C09F1
/*1409bf6ae*/ loc_1409BF6AE: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf6b5*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf6bc*/ loc_1409BF6BC: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf6c3*/  mov [rsp+340h+var_320], rax
/*1409bf6c8*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf6cf*/  lea r9, off_1417A5560
/*1409bf6d6*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf6dd*/  mov edx, 2Bh ; '+'
/*1409bf6e2*/  call sub_1416C3060
/*1409bf6e8*/  jmp loc_1409C09F1
/*1409bf6ed*/ loc_1409BF6ED: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf6f4*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf6fb*/ loc_1409BF6FB: lea rax, off_1417A62E0; "src\\core\\relay\\translator.rs"
/*1409bf702*/  mov [rsp+340h+var_320], rax
/*1409bf707*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf70e*/  lea r9, off_1417A5560
/*1409bf715*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf71c*/  mov edx, 2Bh ; '+'
/*1409bf721*/  call sub_1416C3060
/*1409bf727*/  jmp loc_1409C09F1
/*1409bf72c*/ loc_1409BF72C: mov [rsp+340h+var_320], 1
/*1409bf735*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf73c*/  mov r9d, 1
/*1409bf742*/  mov r8, r14
/*1409bf745*/  call sub_141688D30
/*1409bf74a*/  nop
/*1409bf74b*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf752*/  jmp loc_1409BC47D
/*1409bf757*/ loc_1409BF757: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf75e*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf765*/ loc_1409BF765: lea rax, off_1417A62F8; "src\\core\\relay\\translator.rs"
/*1409bf76c*/  mov [rsp+340h+var_320], rax
/*1409bf771*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf778*/  lea r9, off_1417A5560
/*1409bf77f*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf786*/  mov edx, 2Bh ; '+'
/*1409bf78b*/  call sub_1416C3060
/*1409bf791*/  jmp loc_1409C09F1
/*1409bf796*/ loc_1409BF796: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf79d*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf7a4*/ loc_1409BF7A4: lea rax, off_1417A62F8; "src\\core\\relay\\translator.rs"
/*1409bf7ab*/  mov [rsp+340h+var_320], rax
/*1409bf7b0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf7b7*/  lea r9, off_1417A5560
/*1409bf7be*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf7c5*/  mov edx, 2Bh ; '+'
/*1409bf7ca*/  call sub_1416C3060
/*1409bf7d0*/  jmp loc_1409C09F1
/*1409bf7d5*/ loc_1409BF7D5: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf7dc*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf7e3*/ loc_1409BF7E3: lea rax, off_1417A62F8; "src\\core\\relay\\translator.rs"
/*1409bf7ea*/  mov [rsp+340h+var_320], rax
/*1409bf7ef*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf7f6*/  lea r9, off_1417A5560
/*1409bf7fd*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf804*/  mov edx, 2Bh ; '+'
/*1409bf809*/  call sub_1416C3060
/*1409bf80f*/  jmp loc_1409C09F1
/*1409bf814*/ loc_1409BF814: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf81b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf822*/ loc_1409BF822: lea rax, off_1417A62F8; "src\\core\\relay\\translator.rs"
/*1409bf829*/  mov [rsp+340h+var_320], rax
/*1409bf82e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf835*/  lea r9, off_1417A5560
/*1409bf83c*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf843*/  mov edx, 2Bh ; '+'
/*1409bf848*/  call sub_1416C3060
/*1409bf84e*/  jmp loc_1409C09F1
/*1409bf853*/ loc_1409BF853: mov [rbp+2C0h+var_F8], r14
/*1409bf85a*/  mov [rsp+340h+var_320], 1
/*1409bf863*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bf86a*/  mov r9d, 1
/*1409bf870*/  mov r8, rbx
/*1409bf873*/  call sub_141688D30
/*1409bf878*/  nop
/*1409bf879*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bf880*/  mov r14, [rbp+2C0h+var_F8]
/*1409bf887*/  jmp loc_1409BCB27
/*1409bf88c*/ loc_1409BF88C: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf893*/ loc_1409BF893: mov rcx, r12
/*1409bf896*/  call sub_1416C2D4B
/*1409bf89c*/  jmp loc_1409C09F1
/*1409bf8a1*/ loc_1409BF8A1: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf8a8*/  mov [rbp+2C0h+var_143], 1
/*1409bf8af*/ loc_1409BF8AF: mov rcx, [rbp+2C0h+var_248]
/*1409bf8b3*/  call sub_1416C2D4B
/*1409bf8b9*/  jmp loc_1409C09F1
/*1409bf8be*/ loc_1409BF8BE: mov rdx, qword ptr [rbp+2C0h+var_E0]
/*1409bf8c5*/  mov [rbp+2C0h+var_223], 1
/*1409bf8cc*/ loc_1409BF8CC: mov rcx, r13
/*1409bf8cf*/  call sub_1416C2D4B
/*1409bf8d5*/  jmp loc_1409C09F1
/*1409bf8da*/ loc_1409BF8DA: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf8e1*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf8e8*/ loc_1409BF8E8: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bf8ef*/  mov [rsp+340h+var_320], rax
/*1409bf8f4*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf8fb*/  lea r9, off_1417A5560
/*1409bf902*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf909*/  mov edx, 2Bh ; '+'
/*1409bf90e*/  call sub_1416C3060
/*1409bf914*/  jmp loc_1409C09F1
/*1409bf919*/ loc_1409BF919: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf920*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf927*/ loc_1409BF927: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bf92e*/  mov [rsp+340h+var_320], rax
/*1409bf933*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf93a*/  lea r9, off_1417A5560
/*1409bf941*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf948*/  mov edx, 2Bh ; '+'
/*1409bf94d*/  call sub_1416C3060
/*1409bf953*/  jmp loc_1409C09F1
/*1409bf958*/ loc_1409BF958: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf95f*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf966*/ loc_1409BF966: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bf96d*/  mov [rsp+340h+var_320], rax
/*1409bf972*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf979*/  lea r9, off_1417A5560
/*1409bf980*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf987*/  mov edx, 2Bh ; '+'
/*1409bf98c*/  call sub_1416C3060
/*1409bf992*/  jmp loc_1409C09F1
/*1409bf997*/ loc_1409BF997: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf99e*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf9a5*/ loc_1409BF9A5: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bf9ac*/  mov [rsp+340h+var_320], rax
/*1409bf9b1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf9b8*/  lea r9, off_1417A5560
/*1409bf9bf*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bf9c6*/  mov edx, 2Bh ; '+'
/*1409bf9cb*/  call sub_1416C3060
/*1409bf9d1*/  jmp loc_1409C09F1
/*1409bf9d6*/ loc_1409BF9D6: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bf9dd*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bf9e4*/ loc_1409BF9E4: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bf9eb*/  mov [rsp+340h+var_320], rax
/*1409bf9f0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bf9f7*/  lea r9, off_1417A5560
/*1409bf9fe*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfa05*/  mov edx, 2Bh ; '+'
/*1409bfa0a*/  call sub_1416C3060
/*1409bfa10*/  jmp loc_1409C09F1
/*1409bfa15*/ loc_1409BFA15: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfa1c*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfa23*/ loc_1409BFA23: lea rax, off_1417A6298; "src\\core\\relay\\translator.rs"
/*1409bfa2a*/  mov [rsp+340h+var_320], rax
/*1409bfa2f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfa36*/  lea r9, off_1417A5560
/*1409bfa3d*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfa44*/  mov edx, 2Bh ; '+'
/*1409bfa49*/  call sub_1416C3060
/*1409bfa4f*/  jmp loc_1409C09F1
/*1409bfa54*/ loc_1409BFA54: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfa5b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfa62*/ loc_1409BFA62: lea rax, off_1417A62B0; "src\\core\\relay\\translator.rs"
/*1409bfa69*/  mov [rsp+340h+var_320], rax
/*1409bfa6e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfa75*/  lea r9, off_1417A5560
/*1409bfa7c*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfa83*/  mov edx, 2Bh ; '+'
/*1409bfa88*/  call sub_1416C3060
/*1409bfa8e*/  jmp loc_1409C09F1
/*1409bfa93*/ loc_1409BFA93: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfa9a*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfaa1*/ loc_1409BFAA1: lea rax, off_1417A62B0; "src\\core\\relay\\translator.rs"
/*1409bfaa8*/  mov [rsp+340h+var_320], rax
/*1409bfaad*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfab4*/  lea r9, off_1417A5560
/*1409bfabb*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfac2*/  mov edx, 2Bh ; '+'
/*1409bfac7*/  call sub_1416C3060
/*1409bfacd*/  jmp loc_1409C09F1
/*1409bfad2*/ loc_1409BFAD2: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfad9*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfae0*/ loc_1409BFAE0: lea rax, off_1417A62B0; "src\\core\\relay\\translator.rs"
/*1409bfae7*/  mov [rsp+340h+var_320], rax
/*1409bfaec*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfaf3*/  lea r9, off_1417A5560
/*1409bfafa*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfb01*/  mov edx, 2Bh ; '+'
/*1409bfb06*/  call sub_1416C3060
/*1409bfb0c*/  jmp loc_1409C09F1
/*1409bfb11*/ loc_1409BFB11: mov [rbp+2C0h+var_230], r13
/*1409bfb18*/  mov [rsp+340h+var_320], 1
/*1409bfb21*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bfb28*/  mov r9d, 1
/*1409bfb2e*/  mov r8, r12
/*1409bfb31*/  call sub_141688D30
/*1409bfb36*/  nop
/*1409bfb37*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bfb3e*/  mov r14, [rbp+2C0h+var_238]
/*1409bfb45*/  mov r13, [rbp+2C0h+var_230]
/*1409bfb4c*/  jmp loc_1409BD75F
/*1409bfb51*/ loc_1409BFB51: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfb58*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfb5f*/ loc_1409BFB5F: lea rax, off_1417A6218; "src\\core\\relay\\translator.rs"
/*1409bfb66*/  mov [rsp+340h+var_320], rax
/*1409bfb6b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfb72*/  lea r9, off_1417A5560
/*1409bfb79*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfb80*/  mov edx, 2Bh ; '+'
/*1409bfb85*/  call sub_1416C3060
/*1409bfb8b*/  jmp loc_1409C09F1
/*1409bfb90*/ loc_1409BFB90: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfb97*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfb9e*/ loc_1409BFB9E: lea rax, off_1417A6218; "src\\core\\relay\\translator.rs"
/*1409bfba5*/  mov [rsp+340h+var_320], rax
/*1409bfbaa*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfbb1*/  lea r9, off_1417A5560
/*1409bfbb8*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfbbf*/  mov edx, 2Bh ; '+'
/*1409bfbc4*/  call sub_1416C3060
/*1409bfbca*/  jmp loc_1409C09F1
/*1409bfbcf*/ loc_1409BFBCF: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfbd6*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfbdd*/ loc_1409BFBDD: lea rax, off_1417A6218; "src\\core\\relay\\translator.rs"
/*1409bfbe4*/  mov [rsp+340h+var_320], rax
/*1409bfbe9*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfbf0*/  lea r9, off_1417A5560
/*1409bfbf7*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfbfe*/  mov edx, 2Bh ; '+'
/*1409bfc03*/  call sub_1416C3060
/*1409bfc09*/  jmp loc_1409C09F1
/*1409bfc0e*/ loc_1409BFC0E: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfc15*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfc1c*/ loc_1409BFC1C: lea rax, off_1417A6218; "src\\core\\relay\\translator.rs"
/*1409bfc23*/  mov [rsp+340h+var_320], rax
/*1409bfc28*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfc2f*/  lea r9, off_1417A5560
/*1409bfc36*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfc3d*/  mov edx, 2Bh ; '+'
/*1409bfc42*/  call sub_1416C3060
/*1409bfc48*/  jmp loc_1409C09F1
/*1409bfc4d*/ loc_1409BFC4D: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfc54*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfc5b*/ loc_1409BFC5B: lea rax, off_1417A6218; "src\\core\\relay\\translator.rs"
/*1409bfc62*/  mov [rsp+340h+var_320], rax
/*1409bfc67*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfc6e*/  lea r9, off_1417A5560
/*1409bfc75*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfc7c*/  mov edx, 2Bh ; '+'
/*1409bfc81*/  call sub_1416C3060
/*1409bfc87*/  jmp loc_1409C09F1
/*1409bfc8c*/ loc_1409BFC8C: mov [rsp+340h+var_320], 1
/*1409bfc95*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bfc9c*/  mov r9d, 1
/*1409bfca2*/  mov r8, r14
/*1409bfca5*/  call sub_141688D30
/*1409bfcaa*/  nop
/*1409bfcab*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bfcb2*/  jmp loc_1409BE3F1
/*1409bfcb7*/ loc_1409BFCB7: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfcbe*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfcc5*/ loc_1409BFCC5: lea rax, off_1417A6250; "src\\core\\relay\\translator.rs"
/*1409bfccc*/  mov [rsp+340h+var_320], rax
/*1409bfcd1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfcd8*/  lea r9, off_1417A5560
/*1409bfcdf*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfce6*/  mov edx, 2Bh ; '+'
/*1409bfceb*/  call sub_1416C3060
/*1409bfcf1*/  jmp loc_1409C09F1
/*1409bfcf6*/ loc_1409BFCF6: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfcfd*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfd04*/ loc_1409BFD04: lea rax, off_1417A6250; "src\\core\\relay\\translator.rs"
/*1409bfd0b*/  mov [rsp+340h+var_320], rax
/*1409bfd10*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfd17*/  lea r9, off_1417A5560
/*1409bfd1e*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfd25*/  mov edx, 2Bh ; '+'
/*1409bfd2a*/  call sub_1416C3060
/*1409bfd30*/  jmp loc_1409C09F1
/*1409bfd35*/ loc_1409BFD35: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfd3c*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfd43*/ loc_1409BFD43: lea rax, off_1417A6250; "src\\core\\relay\\translator.rs"
/*1409bfd4a*/  mov [rsp+340h+var_320], rax
/*1409bfd4f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfd56*/  lea r9, off_1417A5560
/*1409bfd5d*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfd64*/  mov edx, 2Bh ; '+'
/*1409bfd69*/  call sub_1416C3060
/*1409bfd6f*/  jmp loc_1409C09F1
/*1409bfd74*/ loc_1409BFD74: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfd7b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfd82*/ loc_1409BFD82: lea rax, off_1417A6250; "src\\core\\relay\\translator.rs"
/*1409bfd89*/  mov [rsp+340h+var_320], rax
/*1409bfd8e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfd95*/  lea r9, off_1417A5560
/*1409bfd9c*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfda3*/  mov edx, 2Bh ; '+'
/*1409bfda8*/  call sub_1416C3060
/*1409bfdae*/  jmp loc_1409C09F1
/*1409bfdb3*/ loc_1409BFDB3: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfdba*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfdc1*/ loc_1409BFDC1: lea rax, off_1417A6250; "src\\core\\relay\\translator.rs"
/*1409bfdc8*/  mov [rsp+340h+var_320], rax
/*1409bfdcd*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfdd4*/  lea r9, off_1417A5560
/*1409bfddb*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfde2*/  mov edx, 2Bh ; '+'
/*1409bfde7*/  call sub_1416C3060
/*1409bfded*/  jmp loc_1409C09F1
/*1409bfdf2*/ loc_1409BFDF2: mov [rbp+2C0h+var_F8], r14
/*1409bfdf9*/  mov [rsp+340h+var_320], 1
/*1409bfe02*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409bfe09*/  mov r9d, 1
/*1409bfe0f*/  mov r8, rbx
/*1409bfe12*/  call sub_141688D30
/*1409bfe17*/  nop
/*1409bfe18*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409bfe1f*/  mov r14, [rbp+2C0h+var_F8]
/*1409bfe26*/  jmp loc_1409BEA1A
/*1409bfe2b*/ loc_1409BFE2B: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfe32*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfe39*/ loc_1409BFE39: lea rax, off_1417A6268; "src\\core\\relay\\translator.rs"
/*1409bfe40*/  mov [rsp+340h+var_320], rax
/*1409bfe45*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfe4c*/  lea r9, off_1417A5560
/*1409bfe53*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfe5a*/  mov edx, 2Bh ; '+'
/*1409bfe5f*/  call sub_1416C3060
/*1409bfe65*/  jmp loc_1409C09F1
/*1409bfe6a*/ loc_1409BFE6A: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfe71*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfe78*/ loc_1409BFE78: lea rax, off_1417A6268; "src\\core\\relay\\translator.rs"
/*1409bfe7f*/  mov [rsp+340h+var_320], rax
/*1409bfe84*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfe8b*/  lea r9, off_1417A5560
/*1409bfe92*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfe99*/  mov edx, 2Bh ; '+'
/*1409bfe9e*/  call sub_1416C3060
/*1409bfea4*/  jmp loc_1409C09F1
/*1409bfea9*/ loc_1409BFEA9: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bfeb0*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bfeb7*/ loc_1409BFEB7: lea rax, off_1417A6268; "src\\core\\relay\\translator.rs"
/*1409bfebe*/  mov [rsp+340h+var_320], rax
/*1409bfec3*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bfeca*/  lea r9, off_1417A5560
/*1409bfed1*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfed8*/  mov edx, 2Bh ; '+'
/*1409bfedd*/  call sub_1416C3060
/*1409bfee3*/  jmp loc_1409C09F1
/*1409bfee8*/ loc_1409BFEE8: lea rcx, [rdi+78h]
/*1409bfeec*/  mov [rsp+340h+var_320], 1
/*1409bfef5*/  mov r9d, 1
/*1409bfefb*/  mov r8, rbx
/*1409bfefe*/  call sub_141688D30
/*1409bff03*/  nop
/*1409bff04*/  mov rdx, [rdi+88h]
/*1409bff0b*/  jmp loc_1409BB515
/*1409bff10*/ loc_1409BFF10: lea rcx, [rdi+0C8h]
/*1409bff17*/  mov [rsp+340h+var_320], 1
/*1409bff20*/  mov r9d, 1
/*1409bff26*/  mov r8, rbx
/*1409bff29*/  call sub_141688D30
/*1409bff2e*/  nop
/*1409bff2f*/  mov rdx, [rdi+0D8h]
/*1409bff36*/  jmp loc_1409B9B1B
/*1409bff3b*/ loc_1409BFF3B: lea rcx, [rdi+60h]
/*1409bff3f*/  mov [rsp+340h+var_320], 1
/*1409bff48*/  mov r9d, 1
/*1409bff4e*/  mov r8, rbx
/*1409bff51*/  call sub_141688D30
/*1409bff56*/  nop
/*1409bff57*/  mov rdx, [rdi+70h]
/*1409bff5b*/  jmp loc_1409BB5CD
/*1409bff60*/ loc_1409BFF60: mov rcx, rbx
/*1409bff63*/  add rcx, 48h ; 'H'
/*1409bff67*/  mov [rsp+340h+var_320], 1
/*1409bff70*/  mov r9d, 1
/*1409bff76*/  mov r8, r14
/*1409bff79*/  call sub_141688D30
/*1409bff7e*/  nop
/*1409bff7f*/  mov rdx, [rbx+58h]
/*1409bff83*/  jmp loc_1409BD969
/*1409bff88*/ loc_1409BFF88: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bff8f*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bff96*/ loc_1409BFF96: lea rax, off_1417A6198; "src\\core\\relay\\translator.rs"
/*1409bff9d*/  mov [rsp+340h+var_320], rax
/*1409bffa2*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bffa9*/  lea r9, off_1417A5560
/*1409bffb0*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bffb7*/  mov edx, 2Bh ; '+'
/*1409bffbc*/  call sub_1416C3060
/*1409bffc2*/  jmp loc_1409C09F1
/*1409bffc7*/ loc_1409BFFC7: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409bffce*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409bffd5*/ loc_1409BFFD5: lea rax, off_1417A61C0; "src\\core\\relay\\translator.rs"
/*1409bffdc*/  mov [rsp+340h+var_320], rax
/*1409bffe1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409bffe8*/  lea r9, off_1417A5560
/*1409bffef*/  lea r8, [rbp+2C0h+var_1D0]
/*1409bfff6*/  mov edx, 2Bh ; '+'
/*1409bfffb*/  call sub_1416C3060
/*1409c0001*/  jmp loc_1409C09F1
/*1409c0006*/ loc_1409C0006: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c000d*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c0014*/ loc_1409C0014: lea rax, off_1417A6198; "src\\core\\relay\\translator.rs"
/*1409c001b*/  mov [rsp+340h+var_320], rax
/*1409c0020*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c0027*/  lea r9, off_1417A5560
/*1409c002e*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c0035*/  mov edx, 2Bh ; '+'
/*1409c003a*/  call sub_1416C3060
/*1409c0040*/  jmp loc_1409C09F1
/*1409c0045*/ loc_1409C0045: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c004c*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c0053*/ loc_1409C0053: lea rax, off_1417A61C0; "src\\core\\relay\\translator.rs"
/*1409c005a*/  mov [rsp+340h+var_320], rax
/*1409c005f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c0066*/  lea r9, off_1417A5560
/*1409c006d*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c0074*/  mov edx, 2Bh ; '+'
/*1409c0079*/  call sub_1416C3060
/*1409c007f*/  jmp loc_1409C09F1
/*1409c0084*/ loc_1409C0084: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c008b*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c0092*/ loc_1409C0092: lea rax, off_1417A6198; "src\\core\\relay\\translator.rs"
/*1409c0099*/  mov [rsp+340h+var_320], rax
/*1409c009e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c00a5*/  lea r9, off_1417A5560
/*1409c00ac*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c00b3*/  mov edx, 2Bh ; '+'
/*1409c00b8*/  call sub_1416C3060
/*1409c00be*/  jmp loc_1409C09F1
/*1409c00c3*/ loc_1409C00C3: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c00ca*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c00d1*/ loc_1409C00D1: lea rax, off_1417A61C0; "src\\core\\relay\\translator.rs"
/*1409c00d8*/  mov [rsp+340h+var_320], rax
/*1409c00dd*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c00e4*/  lea r9, off_1417A5560
/*1409c00eb*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c00f2*/  mov edx, 2Bh ; '+'
/*1409c00f7*/  call sub_1416C3060
/*1409c00fd*/  jmp loc_1409C09F1
/*1409c0102*/ loc_1409C0102: mov [rsp+340h+var_320], 1
/*1409c010b*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409c0112*/  mov r9d, 1
/*1409c0118*/  mov r8, rdi
/*1409c011b*/  call sub_141688D30
/*1409c0120*/  nop
/*1409c0121*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409c0128*/  jmp loc_1409B9F77
/*1409c012d*/ loc_1409C012D: mov [rsp+340h+var_320], 1
/*1409c0136*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409c013d*/  mov r9d, 1
/*1409c0143*/  mov r8, rdi
/*1409c0146*/  call sub_141688D30
/*1409c014b*/  nop
/*1409c014c*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409c0153*/  jmp loc_1409BBA20
/*1409c0158*/ loc_1409C0158: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c015f*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c0166*/ loc_1409C0166: lea rax, off_1417A6180; "src\\core\\relay\\translator.rs"
/*1409c016d*/  mov [rsp+340h+var_320], rax
/*1409c0172*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c0179*/  lea r9, off_1417A5560
/*1409c0180*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c0187*/  mov edx, 2Bh ; '+'
/*1409c018c*/  call sub_1416C3060
/*1409c0192*/  jmp loc_1409C09F1
/*1409c0197*/ loc_1409C0197: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c019e*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c01a5*/ loc_1409C01A5: lea rax, off_1417A6180; "src\\core\\relay\\translator.rs"
/*1409c01ac*/  mov [rsp+340h+var_320], rax
/*1409c01b1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c01b8*/  lea r9, off_1417A5560
/*1409c01bf*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c01c6*/  mov edx, 2Bh ; '+'
/*1409c01cb*/  call sub_1416C3060
/*1409c01d1*/  jmp loc_1409C09F1
/*1409c01d6*/ loc_1409C01D6: mov rax, qword ptr [rbp+2C0h+var_F0+8]
/*1409c01dd*/  mov qword ptr [rbp+2C0h+var_1D0], rax
/*1409c01e4*/ loc_1409C01E4: lea rax, off_1417A6180; "src\\core\\relay\\translator.rs"
/*1409c01eb*/  mov [rsp+340h+var_320], rax
/*1409c01f0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409c01f7*/  lea r9, off_1417A5560
/*1409c01fe*/  lea r8, [rbp+2C0h+var_1D0]
/*1409c0205*/  mov edx, 2Bh ; '+'
/*1409c020a*/  call sub_1416C3060
/*1409c0210*/  jmp loc_1409C09F1
/*1409c0215*/ loc_1409C0215: mov [rsp+340h+var_320], 1
/*1409c021e*/  lea rcx, [rbp+2C0h+var_1E8]
/*1409c0225*/  mov r9d, 1
/*1409c022b*/  mov r8, rdi
/*1409c022e*/  call sub_141688D30
/*1409c0233*/  nop
/*1409c0234*/  mov rdx, [rbp+2C0h+var_1D8]
/*1409c023b*/  jmp loc_1409BDD22
/*1409c0240*/ loc_1409C0240: mov ecx, 1
/*1409c0245*/  mov edx, 4
/*1409c024a*/  call sub_1416C2D4B
/*1409c0250*/  jmp loc_1409C09F1
/*1409c0255*/ loc_1409C0255: mov ecx, 1
/*1409c025a*/  mov edx, 0Ch
/*1409c025f*/  call sub_1416C2D4B
/*1409c0265*/  jmp loc_1409C09F1
/*1409c026a*/ loc_1409C026A: mov ecx, 1
/*1409c026f*/  mov edx, 7
/*1409c0274*/  call sub_1416C2D4B
/*1409c027a*/  jmp loc_1409C09F1
/*1409c027f*/ loc_1409C027F: mov ecx, 1
/*1409c0284*/  mov edx, 9
/*1409c0289*/  call sub_1416C2D4B
/*1409c028f*/  jmp loc_1409C09F1
/*1409c0294*/ loc_1409C0294: mov ecx, 1
/*1409c0299*/  mov edx, 4
/*1409c029e*/  call sub_1416C2D4B
/*1409c02a4*/  jmp loc_1409C09F1
/*1409c02a9*/ loc_1409C02A9: mov ecx, 1
/*1409c02ae*/  mov edx, 2
/*1409c02b3*/  call sub_1416C2D4B
/*1409c02b9*/  jmp loc_1409C09F1
/*1409c02be*/ loc_1409C02BE: mov ecx, 1
/*1409c02c3*/  mov edx, 6
/*1409c02c8*/  call sub_1416C2D4B
/*1409c02ce*/  jmp loc_1409C09F1
/*1409c02d3*/ loc_1409C02D3: mov ecx, 1
/*1409c02d8*/  mov edx, 7
/*1409c02dd*/  call sub_1416C2D4B
/*1409c02e3*/  jmp loc_1409C09F1
/*1409c02e8*/ loc_1409C02E8: mov ecx, 1
/*1409c02ed*/  mov edx, 4
/*1409c02f2*/  call sub_1416C2D4B
/*1409c02f8*/  jmp loc_1409C09F1
/*1409c02fd*/ loc_1409C02FD: mov ecx, 1
/*1409c0302*/  mov edx, 9
/*1409c0307*/  call sub_1416C2D4B
/*1409c030d*/  jmp loc_1409C09F1
/*1409c0312*/ loc_1409C0312: mov ecx, 1
/*1409c0317*/  mov edx, 4
/*1409c031c*/  call sub_1416C2D4B
/*1409c0322*/  jmp loc_1409C09F1
/*1409c0327*/ loc_1409C0327: mov ecx, 1
/*1409c032c*/  mov edx, 0Ch
/*1409c0331*/  call sub_1416C2D4B
/*1409c0337*/  jmp loc_1409C09F1
/*1409c033c*/ loc_1409C033C: mov ecx, 1
/*1409c0341*/  mov edx, 7
/*1409c0346*/  call sub_1416C2D4B
/*1409c034c*/  jmp loc_1409C09F1
/*1409c0351*/ loc_1409C0351: mov ecx, 1
/*1409c0356*/  mov edx, 4
/*1409c035b*/  call sub_1416C2D4B
/*1409c0361*/  jmp loc_1409C09F1
/*1409c0366*/ loc_1409C0366: mov ecx, 1
/*1409c036b*/  mov edx, 4
/*1409c0370*/  call sub_1416C2D4B
/*1409c0376*/  jmp loc_1409C09F1
/*1409c037b*/ loc_1409C037B: mov ecx, 1
/*1409c0380*/  mov edx, 0Ch
/*1409c0385*/  call sub_1416C2D4B
/*1409c038b*/  jmp loc_1409C09F1
/*1409c0390*/ loc_1409C0390: mov ecx, 1
/*1409c0395*/  mov edx, 7
/*1409c039a*/  call sub_1416C2D4B
/*1409c03a0*/  jmp loc_1409C09F1
/*1409c03a5*/ loc_1409C03A5: mov ecx, 1
/*1409c03aa*/  mov edx, 4
/*1409c03af*/  call sub_1416C2D4B
/*1409c03b5*/  jmp loc_1409C09F1
/*1409c03ba*/ loc_1409C03BA: mov ecx, 1
/*1409c03bf*/  mov edx, 4
/*1409c03c4*/  call sub_1416C2D4B
/*1409c03ca*/  jmp loc_1409C09F1
/*1409c03cf*/ loc_1409C03CF: mov ecx, 1
/*1409c03d4*/  mov edx, 2
/*1409c03d9*/  call sub_1416C2D4B
/*1409c03df*/  jmp loc_1409C09F1
/*1409c03e4*/ loc_1409C03E4: mov ecx, 1
/*1409c03e9*/  mov edx, 6
/*1409c03ee*/  call sub_1416C2D4B
/*1409c03f4*/  jmp loc_1409C09F1
/*1409c03f9*/ loc_1409C03F9: mov ecx, 1
/*1409c03fe*/  mov edx, 7
/*1409c0403*/  call sub_1416C2D4B
/*1409c0409*/  jmp loc_1409C09F1
/*1409c040e*/ loc_1409C040E: mov ecx, 1
/*1409c0413*/  mov edx, 11h
/*1409c0418*/  call sub_1416C2D4B
/*1409c041e*/  jmp loc_1409C09F1
/*1409c0423*/ loc_1409C0423: mov ecx, 1
/*1409c0428*/  mov edx, 4
/*1409c042d*/  call sub_1416C2D4B
/*1409c0433*/  jmp loc_1409C09F1
/*1409c0438*/ loc_1409C0438: mov ecx, 1
/*1409c043d*/  mov edx, 0Ch
/*1409c0442*/  call sub_1416C2D4B
/*1409c0448*/  jmp loc_1409C09F1
/*1409c044d*/ loc_1409C044D: mov ecx, 1
/*1409c0452*/  mov edx, 7
/*1409c0457*/  call sub_1416C2D4B
/*1409c045d*/  jmp loc_1409C09F1
/*1409c0462*/ loc_1409C0462: mov ecx, 1
/*1409c0467*/  mov edx, 0Dh
/*1409c046c*/  call sub_1416C2D4B
/*1409c0472*/  jmp loc_1409C09F1
/*1409c0477*/ loc_1409C0477: mov ecx, 1
/*1409c047c*/  mov edx, 4
/*1409c0481*/  call sub_1416C2D4B
/*1409c0487*/  jmp loc_1409C09F1
/*1409c048c*/ loc_1409C048C: mov ecx, 1
/*1409c0491*/  mov edx, 4
/*1409c0496*/  call sub_1416C2D4B
/*1409c049c*/  jmp loc_1409C09F1
/*1409c04a1*/ loc_1409C04A1: mov ecx, 1
/*1409c04a6*/  mov edx, 4
/*1409c04ab*/  call sub_1416C2D4B
/*1409c04b1*/  jmp loc_1409C09F1
/*1409c04b6*/ loc_1409C04B6: mov ecx, 1
/*1409c04bb*/  mov edx, 4
/*1409c04c0*/  call sub_1416C2D4B
/*1409c04c6*/  jmp loc_1409C09F1
/*1409c04cb*/ loc_1409C04CB: mov ecx, 1
/*1409c04d0*/  mov edx, 0Ch
/*1409c04d5*/  call sub_1416C2D4B
/*1409c04db*/  jmp loc_1409C09F1
/*1409c04e0*/ loc_1409C04E0: mov ecx, 1
/*1409c04e5*/  mov edx, 7
/*1409c04ea*/  call sub_1416C2D4B
/*1409c04f0*/  jmp loc_1409C09F1
/*1409c04f5*/ loc_1409C04F5: mov ecx, 1
/*1409c04fa*/  mov edx, 0Dh
/*1409c04ff*/  call sub_1416C2D4B
/*1409c0505*/  jmp loc_1409C09F1
/*1409c050a*/ loc_1409C050A: mov ecx, 1
/*1409c050f*/  mov edx, 5
/*1409c0514*/  call sub_1416C2D4B
/*1409c051a*/  jmp loc_1409C09F1
/*1409c051f*/ loc_1409C051F: mov ecx, 1
/*1409c0524*/  mov edx, 4
/*1409c0529*/  call sub_1416C2D4B
/*1409c052f*/  jmp loc_1409C09F1
/*1409c0534*/ loc_1409C0534: mov ecx, 1
/*1409c0539*/  mov edx, 0Ch
/*1409c053e*/  call sub_1416C2D4B
/*1409c0544*/  jmp loc_1409C09F1
/*1409c0549*/ loc_1409C0549: mov ecx, 1
/*1409c054e*/  mov edx, 7
/*1409c0553*/  call sub_1416C2D4B
/*1409c0559*/  jmp loc_1409C09F1
/*1409c055e*/ loc_1409C055E: mov ecx, 1
/*1409c0563*/  mov edx, 4
/*1409c0568*/  call sub_1416C2D4B
/*1409c056e*/  jmp loc_1409C09F1
/*1409c0573*/ loc_1409C0573: mov ecx, 1
/*1409c0578*/  mov edx, 4
/*1409c057d*/  call sub_1416C2D4B
/*1409c0583*/  jmp loc_1409C09F1
/*1409c0588*/ loc_1409C0588: mov ecx, 1
/*1409c058d*/  mov edx, 2
/*1409c0592*/  call sub_1416C2D4B
/*1409c0598*/  jmp loc_1409C09F1
/*1409c059d*/ loc_1409C059D: mov ecx, 1
/*1409c05a2*/  mov edx, 4
/*1409c05a7*/  call sub_1416C2D4B
/*1409c05ad*/  jmp loc_1409C09F1
/*1409c05b2*/ loc_1409C05B2: mov ecx, 1
/*1409c05b7*/  mov edx, 6
/*1409c05bc*/  call sub_1416C2D4B
/*1409c05c2*/  jmp loc_1409C09F1
/*1409c05c7*/ loc_1409C05C7: mov ecx, 1
/*1409c05cc*/  mov edx, 7
/*1409c05d1*/  call sub_1416C2D4B
/*1409c05d7*/  jmp loc_1409C09F1
/*1409c05dc*/ loc_1409C05DC: mov ecx, 1
/*1409c05e1*/  mov edx, 4
/*1409c05e6*/  call sub_1416C2D4B
/*1409c05ec*/  jmp loc_1409C09F1
/*1409c05f1*/ loc_1409C05F1: mov ecx, 1
/*1409c05f6*/  mov edx, 4
/*1409c05fb*/  call sub_1416C2D4B
/*1409c0601*/  jmp loc_1409C09F1
/*1409c0606*/ loc_1409C0606: mov ecx, 1
/*1409c060b*/  mov edx, 4
/*1409c0610*/  call sub_1416C2D4B
/*1409c0616*/  jmp loc_1409C09F1
/*1409c061b*/ loc_1409C061B: mov ecx, 1
/*1409c0620*/  mov edx, 0Ch
/*1409c0625*/  call sub_1416C2D4B
/*1409c062b*/  jmp loc_1409C09F1
/*1409c0630*/ loc_1409C0630: mov ecx, 1
/*1409c0635*/  mov edx, 7
/*1409c063a*/  call sub_1416C2D4B
/*1409c0640*/  jmp loc_1409C09F1
/*1409c0645*/ loc_1409C0645: mov ecx, 1
/*1409c064a*/  mov edx, 0Dh
/*1409c064f*/  call sub_1416C2D4B
/*1409c0655*/  jmp loc_1409C09F1
/*1409c065a*/ loc_1409C065A: mov ecx, 1
/*1409c065f*/  mov edx, 4
/*1409c0664*/  call sub_1416C2D4B
/*1409c066a*/  jmp loc_1409C09F1
/*1409c066f*/ loc_1409C066F: mov ecx, 1
/*1409c0674*/  mov edx, 4
/*1409c0679*/  call sub_1416C2D4B
/*1409c067f*/  jmp loc_1409C09F1
/*1409c0684*/ loc_1409C0684: mov ecx, 1
/*1409c0689*/  mov edx, 4
/*1409c068e*/  call sub_1416C2D4B
/*1409c0694*/  jmp loc_1409C09F1
/*1409c0699*/ loc_1409C0699: mov ecx, 1
/*1409c069e*/  mov edx, 0Bh
/*1409c06a3*/  call sub_1416C2D4B
/*1409c06a9*/  jmp loc_1409C09F1
/*1409c06ae*/ loc_1409C06AE: mov ecx, 1
/*1409c06b3*/  mov edx, 4
/*1409c06b8*/  call sub_1416C2D4B
/*1409c06be*/  jmp loc_1409C09F1
/*1409c06c3*/ loc_1409C06C3: mov ecx, 1
/*1409c06c8*/  mov edx, 2
/*1409c06cd*/  call sub_1416C2D4B
/*1409c06d3*/  jmp loc_1409C09F1
/*1409c06d8*/ loc_1409C06D8: mov ecx, 1
/*1409c06dd*/  mov edx, 6
/*1409c06e2*/  call sub_1416C2D4B
/*1409c06e8*/  jmp loc_1409C09F1
/*1409c06ed*/ loc_1409C06ED: mov ecx, 1
/*1409c06f2*/  mov edx, 7
/*1409c06f7*/  call sub_1416C2D4B
/*1409c06fd*/  jmp loc_1409C09F1
/*1409c0702*/ loc_1409C0702: mov ecx, 1
/*1409c0707*/  mov edx, 4
/*1409c070c*/  call sub_1416C2D4B
/*1409c0712*/  jmp loc_1409C09F1
/*1409c0717*/ loc_1409C0717: mov ecx, 1
/*1409c071c*/  mov edx, 9
/*1409c0721*/  call sub_1416C2D4B
/*1409c0727*/  jmp loc_1409C09F1
/*1409c072c*/ loc_1409C072C: mov ecx, 1
/*1409c0731*/  mov edx, 4
/*1409c0736*/  call sub_1416C2D4B
/*1409c073c*/  jmp loc_1409C09F1
/*1409c0741*/ loc_1409C0741: mov ecx, 1
/*1409c0746*/  mov edx, 0Ch
/*1409c074b*/  call sub_1416C2D4B
/*1409c0751*/  jmp loc_1409C09F1
/*1409c0756*/ loc_1409C0756: mov ecx, 1
/*1409c075b*/  mov edx, 7
/*1409c0760*/  call sub_1416C2D4B
/*1409c0766*/  jmp loc_1409C09F1
/*1409c076b*/ loc_1409C076B: mov ecx, 1
/*1409c0770*/  mov edx, 4
/*1409c0775*/  call sub_1416C2D4B
/*1409c077b*/  jmp loc_1409C09F1
/*1409c0780*/ loc_1409C0780: mov ecx, 1
/*1409c0785*/  mov edx, 4
/*1409c078a*/  call sub_1416C2D4B
/*1409c0790*/  jmp loc_1409C09F1
/*1409c0795*/ loc_1409C0795: mov ecx, 1
/*1409c079a*/  mov edx, 0Ch
/*1409c079f*/  call sub_1416C2D4B
/*1409c07a5*/  jmp loc_1409C09F1
/*1409c07aa*/ loc_1409C07AA: mov ecx, 1
/*1409c07af*/  mov edx, 7
/*1409c07b4*/  call sub_1416C2D4B
/*1409c07ba*/  jmp loc_1409C09F1
/*1409c07bf*/ loc_1409C07BF: mov ecx, 1
/*1409c07c4*/  mov edx, 4
/*1409c07c9*/  call sub_1416C2D4B
/*1409c07cf*/  jmp loc_1409C09F1
/*1409c07d4*/ loc_1409C07D4: mov ecx, 1
/*1409c07d9*/  mov edx, 4
/*1409c07de*/  call sub_1416C2D4B
/*1409c07e4*/  jmp loc_1409C09F1
/*1409c07e9*/ loc_1409C07E9: mov ecx, 1
/*1409c07ee*/  mov edx, 2
/*1409c07f3*/  call sub_1416C2D4B
/*1409c07f9*/  jmp loc_1409C09F1
/*1409c07fe*/ loc_1409C07FE: mov ecx, 1
/*1409c0803*/  mov edx, 6
/*1409c0808*/  call sub_1416C2D4B
/*1409c080e*/  jmp loc_1409C09F1
/*1409c0813*/ loc_1409C0813: mov ecx, 1
/*1409c0818*/  mov edx, 4
/*1409c081d*/  call sub_1416C2D4B
/*1409c0823*/  jmp loc_1409C09F1
/*1409c0828*/ loc_1409C0828: mov ecx, 1
/*1409c082d*/  mov edx, 0Ch
/*1409c0832*/  call sub_1416C2D4B
/*1409c0838*/  jmp loc_1409C09F1
/*1409c083d*/ loc_1409C083D: mov ecx, 1
/*1409c0842*/  mov edx, 7
/*1409c0847*/  call sub_1416C2D4B
/*1409c084d*/  jmp loc_1409C09F1
/*1409c0852*/ loc_1409C0852: mov ecx, 1
/*1409c0857*/  mov edx, 4
/*1409c085c*/  call sub_1416C2D4B
/*1409c0862*/  jmp loc_1409C09F1
/*1409c0867*/ loc_1409C0867: mov ecx, 1
/*1409c086c*/  mov edx, 4
/*1409c0871*/  call sub_1416C2D4B
/*1409c0877*/  jmp loc_1409C09F1
/*1409c087c*/ loc_1409C087C: mov ecx, 1
/*1409c0881*/  mov edx, 2
/*1409c0886*/  call sub_1416C2D4B
/*1409c088c*/  jmp loc_1409C09F1
/*1409c0891*/ loc_1409C0891: mov ecx, 1
/*1409c0896*/  mov edx, 6
/*1409c089b*/  call sub_1416C2D4B
/*1409c08a1*/  jmp loc_1409C09F1
/*1409c08a6*/ loc_1409C08A6: mov ecx, 1
/*1409c08ab*/  mov edx, 4
/*1409c08b0*/  call sub_1416C2D4B
/*1409c08b6*/  jmp loc_1409C09F1
/*1409c08bb*/ loc_1409C08BB: mov ecx, 1
/*1409c08c0*/  mov edx, 2
/*1409c08c5*/  call sub_1416C2D4B
/*1409c08cb*/  jmp loc_1409C09F1
/*1409c08d0*/ loc_1409C08D0: mov ecx, 1
/*1409c08d5*/  mov edx, 6
/*1409c08da*/  call sub_1416C2D4B
/*1409c08e0*/  jmp loc_1409C09F1
/*1409c08e5*/ loc_1409C08E5: mov ecx, 1
/*1409c08ea*/  mov edx, 4
/*1409c08ef*/  call sub_1416C2D4B
/*1409c08f5*/  jmp loc_1409C09F1
/*1409c08fa*/ loc_1409C08FA: mov ecx, 1
/*1409c08ff*/  mov edx, 4
/*1409c0904*/  call sub_1416C2D4B
/*1409c090a*/  jmp loc_1409C09F1
/*1409c090f*/ loc_1409C090F: mov ecx, 1
/*1409c0914*/  mov edx, 0Ch
/*1409c0919*/  call sub_1416C2D4B
/*1409c091f*/  jmp loc_1409C09F1
/*1409c0924*/ loc_1409C0924: mov ecx, 1
/*1409c0929*/  mov edx, 0Ch
/*1409c092e*/  call sub_1416C2D4B
/*1409c0934*/  jmp loc_1409C09F1
/*1409c0939*/ loc_1409C0939: mov ecx, 1
/*1409c093e*/  mov edx, 7
/*1409c0943*/  call sub_1416C2D4B
/*1409c0949*/  jmp loc_1409C09F1
/*1409c094e*/ loc_1409C094E: mov ecx, 1
/*1409c0953*/  mov edx, 7
/*1409c0958*/  call sub_1416C2D4B
/*1409c095e*/  jmp loc_1409C09F1
/*1409c0963*/ loc_1409C0963: mov ecx, 1
/*1409c0968*/  mov edx, 0Dh
/*1409c096d*/  call sub_1416C2D4B
/*1409c0973*/  jmp short loc_1409C09F1
/*1409c0975*/ loc_1409C0975: mov ecx, 1
/*1409c097a*/  mov edx, 0Dh
/*1409c097f*/  call sub_1416C2D4B
/*1409c0985*/  jmp short loc_1409C09F1
/*1409c0987*/ loc_1409C0987: mov ecx, 1
/*1409c098c*/  mov edx, 5
/*1409c0991*/  call sub_1416C2D4B
/*1409c0997*/  jmp short loc_1409C09F1
/*1409c0999*/ loc_1409C0999: mov ecx, 1
/*1409c099e*/  mov edx, 5
/*1409c09a3*/  call sub_1416C2D4B
/*1409c09a9*/  jmp short loc_1409C09F1
/*1409c09ab*/ loc_1409C09AB: mov ecx, 1
/*1409c09b0*/  mov edx, 4
/*1409c09b5*/  call sub_1416C2D4B
/*1409c09bb*/  jmp short loc_1409C09F1
/*1409c09bd*/ loc_1409C09BD: mov ecx, 1
/*1409c09c2*/  mov edx, 0Ch
/*1409c09c7*/  call sub_1416C2D4B
/*1409c09cd*/  jmp short loc_1409C09F1
/*1409c09cf*/ loc_1409C09CF: mov ecx, 1
/*1409c09d4*/  mov edx, 7
/*1409c09d9*/  call sub_1416C2D4B
/*1409c09df*/  jmp short loc_1409C09F1
/*1409c09e1*/ loc_1409C09E1: mov ecx, 1
/*1409c09e6*/  mov edx, 5
/*1409c09eb*/  call sub_1416C2D4B
/*1409c09f1*/ loc_1409C09F1: ud2
