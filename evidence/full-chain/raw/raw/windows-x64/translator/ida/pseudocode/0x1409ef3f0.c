// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_1409EF3F0(_OWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  const __m128i *v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // rdi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r9
  const __m128i *v24; // rbx
  __int64 v25; // r13
  __m128i si128; // xmm6
  __m128i v27; // xmm7
  __m128i v28; // xmm8
  __m128i v29; // xmm9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  const char *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  void *v39; // rsi... [259834 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 1651/1651 retrieved (all pages fetched: True)
// disasm instructions: 7534/7534 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x1409ef3f0-0x1409ef477 size=135 type=0 succ=['0x1409ef477'] pred=[]
// BB 0x1409ef477-0x1409ef499 size=34 type=0 succ=['0x1409ef499', '0x1409ef712'] pred=['0x1409ef3f0']
// BB 0x1409ef499-0x1409ef4a2 size=9 type=0 succ=['0x1409ef4a2', '0x1409ef712'] pred=['0x1409ef477']
// BB 0x1409ef4a2-0x1409ef4c7 size=37 type=0 succ=['0x1409ef4c7', '0x1409ef6f3'] pred=['0x1409ef499']
// BB 0x1409ef4c7-0x1409ef4fa size=51 type=0 succ=['0x1409ef4fa', '0x1409f8569'] pred=['0x1409ef4a2']
// BB 0x1409ef4fa-0x1409ef541 size=71 type=0 succ=['0x1409ef541', '0x1409f857e'] pred=['0x1409ef4c7']
// BB 0x1409ef541-0x1409ef571 size=48 type=0 succ=['0x1409ef571'] pred=['0x1409ef4fa']
// BB 0x1409ef571-0x1409ef59c size=43 type=0 succ=['0x1409ef59c', '0x1409ef5a9'] pred=['0x1409ef541']
// BB 0x1409ef59c-0x1409ef5a9 size=13 type=0 succ=['0x1409ef5a9'] pred=['0x1409ef571']
// BB 0x1409ef5a9-0x1409ef5c6 size=29 type=0 succ=['0x1409ef5c6', '0x1409f8593'] pred=['0x1409ef571', '0x1409ef59c']
// BB 0x1409ef5c6-0x1409ef619 size=83 type=0 succ=['0x1409ef619', '0x1409f85a8'] pred=['0x1409ef5a9']
// BB 0x1409ef619-0x1409ef646 size=45 type=0 succ=['0x1409ef646'] pred=['0x1409ef5c6']
// BB 0x1409ef646-0x1409ef671 size=43 type=0 succ=['0x1409ef671', '0x1409ef67e'] pred=['0x1409ef619']
// BB 0x1409ef671-0x1409ef67e size=13 type=0 succ=['0x1409ef67e'] pred=['0x1409ef646']
// BB 0x1409ef67e-0x1409ef6b3 size=53 type=0 succ=['0x1409ef6b3', '0x1409ef6c0'] pred=['0x1409ef646', '0x1409ef671']
// BB 0x1409ef6b3-0x1409ef6c0 size=13 type=0 succ=['0x1409ef6c0'] pred=['0x1409ef67e']
// BB 0x1409ef6c0-0x1409ef6f3 size=51 type=0 succ=['0x1409ef6f3'] pred=['0x1409ef67e', '0x1409ef6b3']
// BB 0x1409ef6f3-0x1409ef6ff size=12 type=0 succ=['0x1409ef6ff', '0x1409ef712'] pred=['0x1409ef4a2', '0x1409ef6c0']
// BB 0x1409ef6ff-0x1409ef712 size=19 type=0 succ=['0x1409ef712'] pred=['0x1409ef6f3']
// BB 0x1409ef712-0x1409ef734 size=34 type=0 succ=['0x1409ef734', '0x1409f3514'] pred=['0x1409ef477', '0x1409ef499', '0x1409ef6f3', '0x1409ef6ff']
// BB 0x1409ef734-0x1409ef73d size=9 type=0 succ=['0x1409ef73d', '0x1409f3514'] pred=['0x1409ef712']
// BB 0x1409ef73d-0x1409ef780 size=67 type=0 succ=['0x1409ef780'] pred=['0x1409ef734']
// BB 0x1409ef780-0x1409ef78f size=15 type=0 succ=['0x1409ef78f', '0x1409f34fb'] pred=['0x1409ef73d', '0x1409ef7a0', '0x1409ef7cb', '0x1409ef7d6', '0x1409ef7ea', '0x1409ef80b', '0x1409ef8a8', '0x1409ef929', '0x1409ef9af', '0x1409efa4f', '0x1409efa76', '0x1409efaa8', '0x1409efb53', '0x1409efb75', '0x1409efb95', '0x1409f005c', '0x1409f04a7', '0x1409f04e5', '0x1409f0510', '0x1409f13d4', '0x1409f13ea', '0x1409f1f74', '0x1409f2aa0', '0x1409f2ac8', '0x1409f309f']
// BB 0x1409ef78f-0x1409ef7a0 size=17 type=0 succ=['0x1409ef7a0'] pred=['0x1409ef780']
// BB 0x1409ef7a0-0x1409ef7cb size=43 type=0 succ=['0x1409ef780', '0x1409ef7cb'] pred=['0x1409ef78f']
// BB 0x1409ef7cb-0x1409ef7d6 size=11 type=0 succ=['0x1409ef780', '0x1409ef7d6'] pred=['0x1409ef7a0']
// BB 0x1409ef7d6-0x1409ef7ea size=20 type=0 succ=['0x1409ef780', '0x1409ef7ea'] pred=['0x1409ef7cb']
// BB 0x1409ef7ea-0x1409ef80b size=33 type=1 succ=['0x1409ef780', '0x1409ef80b', '0x1409ef8a8', '0x1409ef929', '0x1409ef9af', '0x1409efa4f', '0x1409efb95'] pred=['0x1409ef7d6']
// BB 0x1409ef80b-0x1409ef82c size=33 type=0 succ=['0x1409ef780', '0x1409ef82c'] pred=['0x1409ef7ea']
// BB 0x1409ef82c-0x1409ef857 size=43 type=0 succ=['0x1409ef857', '0x1409efc16'] pred=['0x1409ef80b']
// BB 0x1409ef857-0x1409ef860 size=9 type=0 succ=['0x1409ef860', '0x1409efc16'] pred=['0x1409ef82c']
// BB 0x1409ef860-0x1409ef872 size=18 type=0 succ=['0x1409ef872', '0x1409f100e'] pred=['0x1409ef857']
// BB 0x1409ef872-0x1409ef895 size=35 type=0 succ=['0x1409ef895', '0x1409f1914'] pred=['0x1409ef860']
// BB 0x1409ef895-0x1409ef8a8 size=19 type=0 succ=['0x1409efc27'] pred=['0x1409ef872']
// BB 0x1409ef8a8-0x1409ef8d3 size=43 type=0 succ=['0x1409ef780', '0x1409ef8d3'] pred=['0x1409ef7ea']
// BB 0x1409ef8d3-0x1409ef8fd size=42 type=0 succ=['0x1409ef8fd', '0x1409efcdb'] pred=['0x1409ef8a8']
// BB 0x1409ef8fd-0x1409ef90d size=16 type=0 succ=['0x1409ef90d', '0x1409efce2'] pred=['0x1409ef8d3']
// BB 0x1409ef90d-0x1409ef91a size=13 type=0 succ=['0x1409ef91a', '0x1409f38e2'] pred=['0x1409ef8fd']
// BB 0x1409ef91a-0x1409ef920 size=6 type=0 succ=['0x1409ef920', '0x1409f3460'] pred=['0x1409ef90d']
// BB 0x1409ef920-0x1409ef929 size=9 type=0 succ=['0x1409efce2'] pred=['0x1409ef91a']
// BB 0x1409ef929-0x1409ef959 size=48 type=0 succ=['0x1409ef780', '0x1409ef959'] pred=['0x1409ef7ea']
// BB 0x1409ef959-0x1409ef983 size=42 type=0 succ=['0x1409ef983', '0x1409f0092'] pred=['0x1409ef929']
// BB 0x1409ef983-0x1409ef993 size=16 type=0 succ=['0x1409ef993', '0x1409f0099'] pred=['0x1409ef959']
// BB 0x1409ef993-0x1409ef9a0 size=13 type=0 succ=['0x1409ef9a0', '0x1409f38bc'] pred=['0x1409ef983']
// BB 0x1409ef9a0-0x1409ef9a6 size=6 type=0 succ=['0x1409ef9a6', '0x1409f347f'] pred=['0x1409ef993']
// BB 0x1409ef9a6-0x1409ef9af size=9 type=0 succ=['0x1409f0099'] pred=['0x1409ef9a0']
// BB 0x1409ef9af-0x1409ef9cc size=29 type=0 succ=['0x1409ef780', '0x1409ef9cc'] pred=['0x1409ef7ea']
// BB 0x1409ef9cc-0x1409ef9ed size=33 type=0 succ=['0x1409ef9ed', '0x1409ef9f2'] pred=['0x1409ef9af']
// BB 0x1409ef9ed-0x1409ef9f2 size=5 type=0 succ=['0x1409ef9f2', '0x1409efa33'] pred=['0x1409ef9cc']
// BB 0x1409ef9f2-0x1409efa23 size=49 type=0 succ=['0x1409efa23', '0x1409f051c'] pred=['0x1409ef9cc', '0x1409ef9ed']
// BB 0x1409efa23-0x1409efa33 size=16 type=0 succ=['0x1409efa33', '0x1409f0523'] pred=['0x1409ef9f2']
// BB 0x1409efa33-0x1409efa40 size=13 type=0 succ=['0x1409efa40', '0x1409f3870'] pred=['0x1409ef9ed', '0x1409efa23']
// BB 0x1409efa40-0x1409efa46 size=6 type=0 succ=['0x1409efa46', '0x1409f2af3'] pred=['0x1409efa33']
// BB 0x1409efa46-0x1409efa4f size=9 type=0 succ=['0x1409f0523'] pred=['0x1409efa40']
// BB 0x1409efa4f-0x1409efa76 size=39 type=0 succ=['0x1409ef780', '0x1409efa76'] pred=['0x1409ef7ea']
// BB 0x1409efa76-0x1409efaa8 size=50 type=0 succ=['0x1409ef780', '0x1409efaa8'] pred=['0x1409efa4f']
// BB 0x1409efaa8-0x1409efab7 size=15 type=0 succ=['0x1409ef780', '0x1409efab7'] pred=['0x1409efa76']
// BB 0x1409efab7-0x1409efae8 size=49 type=0 succ=['0x1409efae8'] pred=['0x1409efaa8']
// BB 0x1409efae8-0x1409efb2d size=69 type=0 succ=['0x1409efb2d', '0x1409efb43'] pred=['0x1409efab7']
// BB 0x1409efb2d-0x1409efb43 size=22 type=0 succ=['0x1409efb43'] pred=['0x1409efae8']
// BB 0x1409efb43-0x1409efb53 size=16 type=0 succ=['0x1409efb53', '0x1409f13d4'] pred=['0x1409efae8', '0x1409efb2d']
// BB 0x1409efb53-0x1409efb75 size=34 type=0 succ=['0x1409ef780', '0x1409efb75'] pred=['0x1409efb43']
// BB 0x1409efb75-0x1409efb95 size=32 type=0 succ=['0x1409ef780'] pred=['0x1409efb53']
// BB 0x1409efb95-0x1409efbc0 size=43 type=0 succ=['0x1409ef780', '0x1409efbc0'] pred=['0x1409ef7ea']
// BB 0x1409efbc0-0x1409efbc7 size=7 type=0 succ=['0x1409efbc7'] pred=['0x1409efb95']
// BB 0x1409efbc7-0x1409efbea size=35 type=0 succ=['0x1409efbea', '0x1409f0133'] pred=['0x1409efbc0']
// BB 0x1409efbea-0x1409efbfa size=16 type=0 succ=['0x1409efbfa', '0x1409f013a'] pred=['0x1409efbc7']
// BB 0x1409efbfa-0x1409efc07 size=13 type=0 succ=['0x1409efc07', '0x1409f3896'] pred=['0x1409efbea']
// BB 0x1409efc07-0x1409efc0d size=6 type=0 succ=['0x1409efc0d', '0x1409f349e'] pred=['0x1409efbfa']
// BB 0x1409efc0d-0x1409efc16 size=9 type=0 succ=['0x1409f013a'] pred=['0x1409efc07']
// BB 0x1409efc16-0x1409efc27 size=17 type=0 succ=['0x1409efc27'] pred=['0x1409ef82c', '0x1409ef857']
// BB 0x1409efc27-0x1409efc4f size=40 type=0 succ=['0x1409efc4f', '0x1409efc95'] pred=['0x1409ef895', '0x1409efc16', '0x1409f100e', '0x1409f1914']
// BB 0x1409efc4f-0x1409efc5b size=12 type=0 succ=['0x1409efc5b', '0x1409f066a'] pred=['0x1409efc27']
// BB 0x1409efc5b-0x1409efc60 size=5 type=0 succ=['0x1409efc60', '0x1409efc95'] pred=['0x1409efc4f']
// BB 0x1409efc60-0x1409efc67 size=7 type=0 succ=['0x1409efc67', '0x1409efc95'] pred=['0x1409efc5b']
// BB 0x1409efc67-0x1409efc89 size=34 type=0 succ=['0x1409efc89'] pred=['0x1409efc60']
// BB 0x1409efc89-0x1409efc95 size=12 type=0 succ=['0x1409f2d28'] pred=['0x1409efc67']
// BB 0x1409efc95-0x1409efc9c size=7 type=0 succ=['0x1409efc9c'] pred=['0x1409efc27', '0x1409efc5b', '0x1409efc60']
// BB 0x1409efc9c-0x1409efca9 size=13 type=0 succ=['0x1409efca9', '0x1409f04f5'] pred=['0x1409efc95', '0x1409f2d1b']
// BB 0x1409efca9-0x1409efcd3 size=42 type=0 succ=['0x1409efcd3', '0x1409f1088'] pred=['0x1409efc9c']
// BB 0x1409efcd3-0x1409efcdb size=8 type=0 succ=['0x1409f04fc'] pred=['0x1409efca9']
// BB 0x1409efcdb-0x1409efce2 size=7 type=0 succ=['0x1409efce2'] pred=['0x1409ef8d3']
// BB 0x1409efce2-0x1409efd03 size=33 type=0 succ=['0x1409efd03', '0x1409f86fe'] pred=['0x1409ef8fd', '0x1409ef920', '0x1409efcdb']
// BB 0x1409efd03-0x1409efd21 size=30 type=0 succ=['0x1409efd21'] pred=['0x1409efce2']
// BB 0x1409efd21-0x1409efd79 size=88 type=0 succ=['0x1409efd79', '0x1409f86b7'] pred=['0x1409efd03', '0x1409f3460']
// BB 0x1409efd79-0x1409efdc0 size=71 type=0 succ=['0x1409efdc0', '0x1409f8745'] pred=['0x1409efd21']
// BB 0x1409efdc0-0x1409efdea size=42 type=0 succ=['0x1409efdea'] pred=['0x1409efd79']
// BB 0x1409efdea-0x1409efe15 size=43 type=0 succ=['0x1409efe15', '0x1409efe22'] pred=['0x1409efdc0']
// BB 0x1409efe15-0x1409efe22 size=13 type=0 succ=['0x1409efe22'] pred=['0x1409efdea']
// BB 0x1409efe22-0x1409efe3f size=29 type=0 succ=['0x1409efe3f', '0x1409f86e9'] pred=['0x1409efdea', '0x1409efe15']
// BB 0x1409efe3f-0x1409efe81 size=66 type=0 succ=['0x1409efe81', '0x1409efeb1'] pred=['0x1409efe22']
// BB 0x1409efe81-0x1409efe9c size=27 type=0 succ=['0x1409efe9c', '0x1409f886e'] pred=['0x1409efe3f']
// BB 0x1409efe9c-0x1409efeb1 size=21 type=0 succ=['0x1409efeb1'] pred=['0x1409efe81']
// BB 0x1409efeb1-0x1409efed4 size=35 type=0 succ=['0x1409efed4'] pred=['0x1409efe3f', '0x1409efe9c']
// BB 0x1409efed4-0x1409efeff size=43 type=0 succ=['0x1409efeff', '0x1409eff0c'] pred=['0x1409efeb1']
// BB 0x1409efeff-0x1409eff0c size=13 type=0 succ=['0x1409eff0c'] pred=['0x1409efed4']
// BB 0x1409eff0c-0x1409eff29 size=29 type=0 succ=['0x1409eff29', '0x1409f86a2'] pred=['0x1409efed4', '0x1409efeff']
// BB 0x1409eff29-0x1409eff5a size=49 type=0 succ=['0x1409eff5a'] pred=['0x1409eff0c']
// BB 0x1409eff5a-0x1409eff7b size=33 type=0 succ=['0x1409eff7b', '0x1409f7f2e'] pred=['0x1409eff29']
// BB 0x1409eff7b-0x1409effcd size=82 type=0 succ=['0x1409effcd', '0x1409effda'] pred=['0x1409eff5a']
// BB 0x1409effcd-0x1409effda size=13 type=0 succ=['0x1409effda'] pred=['0x1409eff7b']
// BB 0x1409effda-0x1409f000f size=53 type=0 succ=['0x1409f000f', '0x1409f001c'] pred=['0x1409eff7b', '0x1409effcd']
// BB 0x1409f000f-0x1409f001c size=13 type=0 succ=['0x1409f001c'] pred=['0x1409effda']
// BB 0x1409f001c-0x1409f004f size=51 type=0 succ=['0x1409f004f'] pred=['0x1409effda', '0x1409f000f']
// BB 0x1409f004f-0x1409f005c size=13 type=0 succ=['0x1409f005c'] pred=['0x1409f001c']
// BB 0x1409f005c-0x1409f0080 size=36 type=0 succ=['0x1409ef780', '0x1409f0080'] pred=['0x1409f004f']
// BB 0x1409f0080-0x1409f0092 size=18 type=0 succ=['0x1409f04e5'] pred=['0x1409f005c']
// BB 0x1409f0092-0x1409f0099 size=7 type=0 succ=['0x1409f0099'] pred=['0x1409ef959']
// BB 0x1409f0099-0x1409f00ba size=33 type=0 succ=['0x1409f00ba', '0x1409f86cc'] pred=['0x1409ef983', '0x1409ef9a6', '0x1409f0092']
// BB 0x1409f00ba-0x1409f00d9 size=31 type=0 succ=['0x1409f00d9'] pred=['0x1409f0099']
// BB 0x1409f00d9-0x1409f00e4 size=11 type=0 succ=['0x1409f00e4'] pred=['0x1409f00ba', '0x1409f347f']
// BB 0x1409f00e4-0x1409f00f9 size=21 type=0 succ=['0x1409f00f9'] pred=['0x1409f00d9']
// BB 0x1409f00f9-0x1409f0107 size=14 type=0 succ=['0x1409f0107', '0x1409f05b2'] pred=['0x1409f00e4']
// BB 0x1409f0107-0x1409f0117 size=16 type=0 succ=['0x1409f0117', '0x1409f05b9'] pred=['0x1409f00f9']
// BB 0x1409f0117-0x1409f0124 size=13 type=0 succ=['0x1409f0124', '0x1409f3e94'] pred=['0x1409f0107']
// BB 0x1409f0124-0x1409f012a size=6 type=0 succ=['0x1409f012a', '0x1409f34bd'] pred=['0x1409f0117']
// BB 0x1409f012a-0x1409f0133 size=9 type=0 succ=['0x1409f05b9'] pred=['0x1409f0124']
// BB 0x1409f0133-0x1409f013a size=7 type=0 succ=['0x1409f013a'] pred=['0x1409efbc7']
// BB 0x1409f013a-0x1409f015b size=33 type=0 succ=['0x1409f015b', '0x1409f875a'] pred=['0x1409efbea', '0x1409efc0d', '0x1409f0133']
// BB 0x1409f015b-0x1409f0179 size=30 type=0 succ=['0x1409f0179'] pred=['0x1409f013a']
// BB 0x1409f0179-0x1409f01d1 size=88 type=0 succ=['0x1409f01d1', '0x1409f86d4'] pred=['0x1409f015b', '0x1409f349e']
// BB 0x1409f01d1-0x1409f0218 size=71 type=0 succ=['0x1409f0218', '0x1409f8730'] pred=['0x1409f0179']
// BB 0x1409f0218-0x1409f0242 size=42 type=0 succ=['0x1409f0242'] pred=['0x1409f01d1']
// BB 0x1409f0242-0x1409f026d size=43 type=0 succ=['0x1409f026d', '0x1409f027a'] pred=['0x1409f0218']
// BB 0x1409f026d-0x1409f027a size=13 type=0 succ=['0x1409f027a'] pred=['0x1409f0242']
// BB 0x1409f027a-0x1409f0297 size=29 type=0 succ=['0x1409f0297', '0x1409f871b'] pred=['0x1409f0242', '0x1409f026d']
// BB 0x1409f0297-0x1409f02d9 size=66 type=0 succ=['0x1409f02d9', '0x1409f0309'] pred=['0x1409f027a']
// BB 0x1409f02d9-0x1409f02f4 size=27 type=0 succ=['0x1409f02f4', '0x1409f8854'] pred=['0x1409f0297']
// BB 0x1409f02f4-0x1409f0309 size=21 type=0 succ=['0x1409f0309'] pred=['0x1409f02d9']
// BB 0x1409f0309-0x1409f032c size=35 type=0 succ=['0x1409f032c'] pred=['0x1409f0297', '0x1409f02f4']
// BB 0x1409f032c-0x1409f0357 size=43 type=0 succ=['0x1409f0357', '0x1409f0364'] pred=['0x1409f0309']
// BB 0x1409f0357-0x1409f0364 size=13 type=0 succ=['0x1409f0364'] pred=['0x1409f032c']
// BB 0x1409f0364-0x1409f0381 size=29 type=0 succ=['0x1409f0381', '0x1409f8706'] pred=['0x1409f032c', '0x1409f0357']
// BB 0x1409f0381-0x1409f03b2 size=49 type=0 succ=['0x1409f03b2'] pred=['0x1409f0364']
// BB 0x1409f03b2-0x1409f03d3 size=33 type=0 succ=['0x1409f03d3', '0x1409f7eef'] pred=['0x1409f0381']
// BB 0x1409f03d3-0x1409f0425 size=82 type=0 succ=['0x1409f0425', '0x1409f0432'] pred=['0x1409f03b2']
// BB 0x1409f0425-0x1409f0432 size=13 type=0 succ=['0x1409f0432'] pred=['0x1409f03d3']
// BB 0x1409f0432-0x1409f0467 size=53 type=0 succ=['0x1409f0467', '0x1409f0474'] pred=['0x1409f03d3', '0x1409f0425']
// BB 0x1409f0467-0x1409f0474 size=13 type=0 succ=['0x1409f0474'] pred=['0x1409f0432']
// BB 0x1409f0474-0x1409f04a7 size=51 type=0 succ=['0x1409f04a7'] pred=['0x1409f0432', '0x1409f0467']
// BB 0x1409f04a7-0x1409f04d8 size=49 type=0 succ=['0x1409ef780', '0x1409f04d8'] pred=['0x1409f0474']
// BB 0x1409f04d8-0x1409f04e5 size=13 type=0 succ=['0x1409f04e5'] pred=['0x1409f04a7']
// BB 0x1409f04e5-0x1409f04f5 size=16 type=0 succ=['0x1409ef780'] pred=['0x1409f0080', '0x1409f04d8', '0x1409f1f8a']
// BB 0x1409f04f5-0x1409f04fc size=7 type=0 succ=['0x1409f04fc'] pred=['0x1409efc9c']
// BB 0x1409f04fc-0x1409f0503 size=7 type=0 succ=['0x1409f0503'] pred=['0x1409efcd3', '0x1409f04f5', '0x1409f1088', '0x1409f137a', '0x1409f13bd']
// BB 0x1409f0503-0x1409f0510 size=13 type=0 succ=['0x1409f0510'] pred=['0x1409f04fc']
// BB 0x1409f0510-0x1409f051c size=12 type=0 succ=['0x1409ef780'] pred=['0x1409f0503']
// BB 0x1409f051c-0x1409f0523 size=7 type=0 succ=['0x1409f0523'] pred=['0x1409ef9f2']
// BB 0x1409f0523-0x1409f0544 size=33 type=0 succ=['0x1409f0544', '0x1409f87a1'] pred=['0x1409efa23', '0x1409efa46', '0x1409f051c']
// BB 0x1409f0544-0x1409f0562 size=30 type=0 succ=['0x1409f0562'] pred=['0x1409f0523']
// BB 0x1409f0562-0x1409f0577 size=21 type=0 succ=['0x1409f0577'] pred=['0x1409f0544', '0x1409f2af3']
// BB 0x1409f0577-0x1409f0586 size=15 type=0 succ=['0x1409f0586', '0x1409f0eb4'] pred=['0x1409f0562']
// BB 0x1409f0586-0x1409f0596 size=16 type=0 succ=['0x1409f0596', '0x1409f0ebb'] pred=['0x1409f0577']
// BB 0x1409f0596-0x1409f05a3 size=13 type=0 succ=['0x1409f05a3', '0x1409f3ed2'] pred=['0x1409f0586']
// BB 0x1409f05a3-0x1409f05a9 size=6 type=0 succ=['0x1409f05a9', '0x1409f34dc'] pred=['0x1409f0596']
// BB 0x1409f05a9-0x1409f05b2 size=9 type=0 succ=['0x1409f0ebb'] pred=['0x1409f05a3']
// BB 0x1409f05b2-0x1409f05b9 size=7 type=0 succ=['0x1409f05b9'] pred=['0x1409f00f9']
// BB 0x1409f05b9-0x1409f05da size=33 type=0 succ=['0x1409f05da', '0x1409f87ad'] pred=['0x1409f0107', '0x1409f012a', '0x1409f05b2']
// BB 0x1409f05da-0x1409f05f8 size=30 type=0 succ=['0x1409f05f8'] pred=['0x1409f05b9']
// BB 0x1409f05f8-0x1409f0606 size=14 type=0 succ=['0x1409f0606'] pred=['0x1409f05da', '0x1409f34bd']
// BB 0x1409f0606-0x1409f0624 size=30 type=0 succ=['0x1409f0624', '0x1409f0fd3'] pred=['0x1409f05f8']
// BB 0x1409f0624-0x1409f062d size=9 type=0 succ=['0x1409f062d', '0x1409f101d'] pred=['0x1409f0606']
// BB 0x1409f062d-0x1409f066a size=61 type=0 succ=['0x1409f204a'] pred=['0x1409f0624']
// BB 0x1409f066a-0x1409f06b0 size=70 type=0 succ=['0x1409f06b0'] pred=['0x1409efc4f']
// BB 0x1409f06b0-0x1409f06b9 size=9 type=0 succ=['0x1409f06b9', '0x1409f0e58'] pred=['0x1409f066a', '0x1409f06b9', '0x1409f06da', '0x1409f06ed', '0x1409f06f3', '0x1409f0742', '0x1409f076c', '0x1409f078a', '0x1409f0bda', '0x1409f0bf4', '0x1409f0c12', '0x1409f0c1b', '0x1409f0e20']
// BB 0x1409f06b9-0x1409f06da size=33 type=0 succ=['0x1409f06b0', '0x1409f06da'] pred=['0x1409f06b0']
// BB 0x1409f06da-0x1409f06df size=5 type=0 succ=['0x1409f06b0', '0x1409f06df'] pred=['0x1409f06b9']
// BB 0x1409f06df-0x1409f06ed size=14 type=0 succ=['0x1409f06ed', '0x1409f0718'] pred=['0x1409f06da']
// BB 0x1409f06ed-0x1409f06f3 size=6 type=0 succ=['0x1409f06b0', '0x1409f06f3'] pred=['0x1409f06df']
// BB 0x1409f06f3-0x1409f0713 size=32 type=0 succ=['0x1409f06b0', '0x1409f0713'] pred=['0x1409f06ed']
// BB 0x1409f0713-0x1409f0718 size=5 type=0 succ=['0x1409f0bf4'] pred=['0x1409f06f3']
// BB 0x1409f0718-0x1409f0742 size=42 type=0 succ=['0x1409f0742', '0x1409f0bf4'] pred=['0x1409f06df']
// BB 0x1409f0742-0x1409f076c size=42 type=0 succ=['0x1409f06b0', '0x1409f076c'] pred=['0x1409f0718']
// BB 0x1409f076c-0x1409f078a size=30 type=0 succ=['0x1409f06b0', '0x1409f078a'] pred=['0x1409f0742']
// BB 0x1409f078a-0x1409f0793 size=9 type=0 succ=['0x1409f06b0', '0x1409f0793'] pred=['0x1409f076c']
// BB 0x1409f0793-0x1409f07d3 size=64 type=0 succ=['0x1409f07d3', '0x1409f8bf5'] pred=['0x1409f078a']
// BB 0x1409f07d3-0x1409f0800 size=45 type=0 succ=['0x1409f0800'] pred=['0x1409f0793']
// BB 0x1409f0800-0x1409f0821 size=33 type=0 succ=['0x1409f0821', '0x1409f835a'] pred=['0x1409f07d3']
// BB 0x1409f0821-0x1409f0873 size=82 type=0 succ=['0x1409f0873', '0x1409f0880'] pred=['0x1409f0800']
// BB 0x1409f0873-0x1409f0880 size=13 type=0 succ=['0x1409f0880'] pred=['0x1409f0821']
// BB 0x1409f0880-0x1409f08a5 size=37 type=0 succ=['0x1409f08a5'] pred=['0x1409f0821', '0x1409f0873']
// BB 0x1409f08a5-0x1409f08ba size=21 type=0 succ=['0x1409f08ba'] pred=['0x1409f0880']
// BB 0x1409f08ba-0x1409f08c3 size=9 type=0 succ=['0x1409f08c3', '0x1409f09b6'] pred=['0x1409f08a5']
// BB 0x1409f08c3-0x1409f08cc size=9 type=0 succ=['0x1409f08cc', '0x1409f09b6'] pred=['0x1409f08ba']
// BB 0x1409f08cc-0x1409f0910 size=68 type=0 succ=['0x1409f0910', '0x1409f8476'] pred=['0x1409f08c3']
// BB 0x1409f0910-0x1409f091c size=12 type=0 succ=['0x1409f091c', '0x1409f094a'] pred=['0x1409f08cc']
// BB 0x1409f091c-0x1409f094a size=46 type=0 succ=['0x1409f094a'] pred=['0x1409f0910']
// BB 0x1409f094a-0x1409f096d size=35 type=0 succ=['0x1409f096d'] pred=['0x1409f0910', '0x1409f091c']
// BB 0x1409f096d-0x1409f0986 size=25 type=0 succ=['0x1409f0986'] pred=['0x1409f094a']
// BB 0x1409f0986-0x1409f09b6 size=48 type=0 succ=['0x1409f09b6'] pred=['0x1409f096d']
// BB 0x1409f09b6-0x1409f09e9 size=51 type=0 succ=['0x1409f09e9', '0x1409f8c0a'] pred=['0x1409f08ba', '0x1409f08c3', '0x1409f0986']
// BB 0x1409f09e9-0x1409f0a13 size=42 type=0 succ=['0x1409f0a13'] pred=['0x1409f09b6']
// BB 0x1409f0a13-0x1409f0a34 size=33 type=0 succ=['0x1409f0a34', '0x1409f8399'] pred=['0x1409f09e9']
// BB 0x1409f0a34-0x1409f0a86 size=82 type=0 succ=['0x1409f0a86', '0x1409f0a93'] pred=['0x1409f0a13']
// BB 0x1409f0a86-0x1409f0a93 size=13 type=0 succ=['0x1409f0a93'] pred=['0x1409f0a34']
// BB 0x1409f0a93-0x1409f0ab0 size=29 type=0 succ=['0x1409f0ab0', '0x1409f8c1f'] pred=['0x1409f0a34', '0x1409f0a86']
// BB 0x1409f0ab0-0x1409f0ae5 size=53 type=0 succ=['0x1409f0ae5'] pred=['0x1409f0a93']
// BB 0x1409f0ae5-0x1409f0b06 size=33 type=0 succ=['0x1409f0b06', '0x1409f83d8'] pred=['0x1409f0ab0']
// BB 0x1409f0b06-0x1409f0b58 size=82 type=0 succ=['0x1409f0b58', '0x1409f0b65'] pred=['0x1409f0ae5']
// BB 0x1409f0b58-0x1409f0b65 size=13 type=0 succ=['0x1409f0b65'] pred=['0x1409f0b06']
// BB 0x1409f0b65-0x1409f0b9a size=53 type=0 succ=['0x1409f0b9a', '0x1409f0ba7'] pred=['0x1409f0b06', '0x1409f0b58']
// BB 0x1409f0b9a-0x1409f0ba7 size=13 type=0 succ=['0x1409f0ba7'] pred=['0x1409f0b65']
// BB 0x1409f0ba7-0x1409f0bda size=51 type=0 succ=['0x1409f0bda'] pred=['0x1409f0b65', '0x1409f0b9a']
// BB 0x1409f0bda-0x1409f0bf4 size=26 type=0 succ=['0x1409f06b0'] pred=['0x1409f0ba7']
// BB 0x1409f0bf4-0x1409f0c12 size=30 type=0 succ=['0x1409f06b0', '0x1409f0c12'] pred=['0x1409f0713', '0x1409f0718']
// BB 0x1409f0c12-0x1409f0c1b size=9 type=0 succ=['0x1409f06b0', '0x1409f0c1b'] pred=['0x1409f0bf4']
// BB 0x1409f0c1b-0x1409f0c3a size=31 type=0 succ=['0x1409f06b0', '0x1409f0c3a'] pred=['0x1409f0c12']
// BB 0x1409f0c3a-0x1409f0c6d size=51 type=0 succ=['0x1409f0c6d', '0x1409f8a8d'] pred=['0x1409f0c1b']
// BB 0x1409f0c6d-0x1409f0c97 size=42 type=0 succ=['0x1409f0c97'] pred=['0x1409f0c3a']
// BB 0x1409f0c97-0x1409f0cb8 size=33 type=0 succ=['0x1409f0cb8', '0x1409f818c'] pred=['0x1409f0c6d']
// BB 0x1409f0cb8-0x1409f0d0a size=82 type=0 succ=['0x1409f0d0a', '0x1409f0d17'] pred=['0x1409f0c97']
// BB 0x1409f0d0a-0x1409f0d17 size=13 type=0 succ=['0x1409f0d17'] pred=['0x1409f0cb8']
// BB 0x1409f0d17-0x1409f0d34 size=29 type=0 succ=['0x1409f0d34', '0x1409f8aa2'] pred=['0x1409f0cb8', '0x1409f0d0a']
// BB 0x1409f0d34-0x1409f0d5e size=42 type=0 succ=['0x1409f0d5e'] pred=['0x1409f0d17']
// BB 0x1409f0d5e-0x1409f0d7f size=33 type=0 succ=['0x1409f0d7f', '0x1409f81cb'] pred=['0x1409f0d34']
// BB 0x1409f0d7f-0x1409f0dd1 size=82 type=0 succ=['0x1409f0dd1', '0x1409f0dde'] pred=['0x1409f0d5e']
// BB 0x1409f0dd1-0x1409f0dde size=13 type=0 succ=['0x1409f0dde'] pred=['0x1409f0d7f']
// BB 0x1409f0dde-0x1409f0e13 size=53 type=0 succ=['0x1409f0e13', '0x1409f0e20'] pred=['0x1409f0d7f', '0x1409f0dd1']
// BB 0x1409f0e13-0x1409f0e20 size=13 type=0 succ=['0x1409f0e20'] pred=['0x1409f0dde']
// BB 0x1409f0e20-0x1409f0e58 size=56 type=0 succ=['0x1409f06b0'] pred=['0x1409f0dde', '0x1409f0e13']
// BB 0x1409f0e58-0x1409f0e68 size=16 type=0 succ=['0x1409f0e68', '0x1409f1406'] pred=['0x1409f06b0']
// BB 0x1409f0e68-0x1409f0e81 size=25 type=0 succ=['0x1409f0e81', '0x1409f1412'] pred=['0x1409f0e58']
// BB 0x1409f0e81-0x1409f0e8a size=9 type=0 succ=['0x1409f0e8a', '0x1409f19c8'] pred=['0x1409f0e68']
// BB 0x1409f0e8a-0x1409f0eb4 size=42 type=0 succ=['0x1409f2d28'] pred=['0x1409f0e81']
// BB 0x1409f0eb4-0x1409f0ebb size=7 type=0 succ=['0x1409f0ebb'] pred=['0x1409f0577']
// BB 0x1409f0ebb-0x1409f0edc size=33 type=0 succ=['0x1409f0edc', '0x1409f8848'] pred=['0x1409f0586', '0x1409f05a9', '0x1409f0eb4']
// BB 0x1409f0edc-0x1409f0efb size=31 type=0 succ=['0x1409f0efb'] pred=['0x1409f0ebb']
// BB 0x1409f0efb-0x1409f0f10 size=21 type=0 succ=['0x1409f0f10'] pred=['0x1409f0edc', '0x1409f34dc']
// BB 0x1409f0f10-0x1409f0f1b size=11 type=0 succ=['0x1409f0f1b', '0x1409f0f2a'] pred=['0x1409f0efb']
// BB 0x1409f0f1b-0x1409f0f20 size=5 type=0 succ=['0x1409f0f20', '0x1409f0f2a'] pred=['0x1409f0f10']
// BB 0x1409f0f20-0x1409f0f2a size=10 type=0 succ=['0x1409f0f2c'] pred=['0x1409f0f1b']
// BB 0x1409f0f2a-0x1409f0f2c size=2 type=0 succ=['0x1409f0f2c'] pred=['0x1409f0f10', '0x1409f0f1b']
// BB 0x1409f0f2c-0x1409f0f5f size=51 type=0 succ=['0x1409f0f5f', '0x1409f8833'] pred=['0x1409f0f20', '0x1409f0f2a']
// BB 0x1409f0f5f-0x1409f0f8f size=48 type=0 succ=['0x1409f0f8f', '0x1409f3eb7'] pred=['0x1409f0f2c']
// BB 0x1409f0f8f-0x1409f0f9c size=13 type=0 succ=['0x1409f0f9c', '0x1409f1465'] pred=['0x1409f0f5f']
// BB 0x1409f0f9c-0x1409f0fbd size=33 type=0 succ=['0x1409f0fbd', '0x1409f3eba'] pred=['0x1409f0f8f']
// BB 0x1409f0fbd-0x1409f0fd3 size=22 type=0 succ=['0x1409f146b'] pred=['0x1409f0f9c']
// BB 0x1409f0fd3-0x1409f0ff0 size=29 type=0 succ=['0x1409f0ff0', '0x1409f8936'] pred=['0x1409f0606']
// BB 0x1409f0ff0-0x1409f100e size=30 type=0 succ=['0x1409f204a'] pred=['0x1409f0fd3']
// BB 0x1409f100e-0x1409f101d size=15 type=0 succ=['0x1409efc27'] pred=['0x1409ef860']
// BB 0x1409f101d-0x1409f1024 size=7 type=0 succ=['0x1409f1024'] pred=['0x1409f0624']
// BB 0x1409f1024-0x1409f1034 size=16 type=0 succ=['0x1409f1034'] pred=['0x1409f101d']
// BB 0x1409f1034-0x1409f1060 size=44 type=0 succ=['0x1409f1060', '0x1409f1930'] pred=['0x1409f1024']
// BB 0x1409f1060-0x1409f1088 size=40 type=0 succ=['0x1409f202f'] pred=['0x1409f1034']
// BB 0x1409f1088-0x1409f1099 size=17 type=0 succ=['0x1409f04fc', '0x1409f1099'] pred=['0x1409efca9']
// BB 0x1409f1099-0x1409f10ef size=86 type=0 succ=['0x1409f10ef', '0x1409f8b1e'] pred=['0x1409f1088']
// BB 0x1409f10ef-0x1409f1119 size=42 type=0 succ=['0x1409f1119'] pred=['0x1409f1099']
// BB 0x1409f1119-0x1409f113a size=33 type=0 succ=['0x1409f113a', '0x1409f820a'] pred=['0x1409f10ef']
// BB 0x1409f113a-0x1409f118c size=82 type=0 succ=['0x1409f118c', '0x1409f1199'] pred=['0x1409f1119']
// BB 0x1409f118c-0x1409f1199 size=13 type=0 succ=['0x1409f1199'] pred=['0x1409f113a']
// BB 0x1409f1199-0x1409f11b6 size=29 type=0 succ=['0x1409f11b6', '0x1409f8b09'] pred=['0x1409f113a', '0x1409f118c']
// BB 0x1409f11b6-0x1409f11e7 size=49 type=0 succ=['0x1409f11e7'] pred=['0x1409f1199']
// BB 0x1409f11e7-0x1409f1208 size=33 type=0 succ=['0x1409f1208', '0x1409f8249'] pred=['0x1409f11b6']
// BB 0x1409f1208-0x1409f125a size=82 type=0 succ=['0x1409f125a', '0x1409f1267'] pred=['0x1409f11e7']
// BB 0x1409f125a-0x1409f1267 size=13 type=0 succ=['0x1409f1267'] pred=['0x1409f1208']
// BB 0x1409f1267-0x1409f1284 size=29 type=0 succ=['0x1409f1284', '0x1409f8af4'] pred=['0x1409f1208', '0x1409f125a']
// BB 0x1409f1284-0x1409f12b8 size=52 type=0 succ=['0x1409f12b8'] pred=['0x1409f1267']
// BB 0x1409f12b8-0x1409f12d9 size=33 type=0 succ=['0x1409f12d9', '0x1409f8288'] pred=['0x1409f1284']
// BB 0x1409f12d9-0x1409f132b size=82 type=0 succ=['0x1409f132b', '0x1409f1338'] pred=['0x1409f12b8']
// BB 0x1409f132b-0x1409f1338 size=13 type=0 succ=['0x1409f1338'] pred=['0x1409f12d9']
// BB 0x1409f1338-0x1409f136d size=53 type=0 succ=['0x1409f136d', '0x1409f137a'] pred=['0x1409f12d9', '0x1409f132b']
// BB 0x1409f136d-0x1409f137a size=13 type=0 succ=['0x1409f137a'] pred=['0x1409f1338']
// BB 0x1409f137a-0x1409f13bd size=67 type=0 succ=['0x1409f04fc', '0x1409f13bd'] pred=['0x1409f1338', '0x1409f136d']
// BB 0x1409f13bd-0x1409f13d4 size=23 type=0 succ=['0x1409f04fc'] pred=['0x1409f137a']
// BB 0x1409f13d4-0x1409f13ea size=22 type=0 succ=['0x1409ef780', '0x1409f13ea'] pred=['0x1409efb43']
// BB 0x1409f13ea-0x1409f1406 size=28 type=0 succ=['0x1409ef780'] pred=['0x1409f13d4']
// BB 0x1409f1406-0x1409f1412 size=12 type=0 succ=['0x1409f2ca4'] pred=['0x1409f0e58']
// BB 0x1409f1412-0x1409f1419 size=7 type=0 succ=['0x1409f1419'] pred=['0x1409f0e68']
// BB 0x1409f1419-0x1409f1434 size=27 type=0 succ=['0x1409f1434', '0x1409f1f9f'] pred=['0x1409f1412']
// BB 0x1409f1434-0x1409f1447 size=19 type=1 succ=['0x1409f1447', '0x1409f2bdb', '0x1409f2bf9', '0x1409f2c02', '0x1409f2c1f'] pred=['0x1409f1419']
// BB 0x1409f1447-0x1409f1465 size=30 type=0 succ=['0x1409f2c3a'] pred=['0x1409f1434']
// BB 0x1409f1465-0x1409f146b size=6 type=0 succ=['0x1409f146b'] pred=['0x1409f0f8f']
// BB 0x1409f146b-0x1409f148e size=35 type=0 succ=['0x1409f148e'] pred=['0x1409f0fbd', '0x1409f1465']
// BB 0x1409f148e-0x1409f14b9 size=43 type=0 succ=['0x1409f14b9', '0x1409f14c6'] pred=['0x1409f146b']
// BB 0x1409f14b9-0x1409f14c6 size=13 type=0 succ=['0x1409f14c6'] pred=['0x1409f148e']
// BB 0x1409f14c6-0x1409f1533 size=109 type=0 succ=['0x1409f1533'] pred=['0x1409f148e', '0x1409f14b9']
// BB 0x1409f1533-0x1409f154f size=28 type=0 succ=['0x1409f154f', '0x1409f80c1'] pred=['0x1409f14c6']
// BB 0x1409f154f-0x1409f1572 size=35 type=0 succ=['0x1409f1572'] pred=['0x1409f1533']
// BB 0x1409f1572-0x1409f157f size=13 type=0 succ=['0x1409f157f'] pred=['0x1409f154f']
// BB 0x1409f157f-0x1409f15b2 size=51 type=0 succ=['0x1409f15b2', '0x1409f8991'] pred=['0x1409f1572']
// BB 0x1409f15b2-0x1409f15e6 size=52 type=0 succ=['0x1409f15e6', '0x1409f1616'] pred=['0x1409f157f']
// BB 0x1409f15e6-0x1409f1601 size=27 type=0 succ=['0x1409f1601', '0x1409f8b33'] pred=['0x1409f15b2']
// BB 0x1409f1601-0x1409f1616 size=21 type=0 succ=['0x1409f1616'] pred=['0x1409f15e6']
// BB 0x1409f1616-0x1409f1639 size=35 type=0 succ=['0x1409f1639'] pred=['0x1409f15b2', '0x1409f1601']
// BB 0x1409f1639-0x1409f1664 size=43 type=0 succ=['0x1409f1664', '0x1409f1671'] pred=['0x1409f1616']
// BB 0x1409f1664-0x1409f1671 size=13 type=0 succ=['0x1409f1671'] pred=['0x1409f1639']
// BB 0x1409f1671-0x1409f168e size=29 type=0 succ=['0x1409f168e', '0x1409f897c'] pred=['0x1409f1639', '0x1409f1664']
// BB 0x1409f168e-0x1409f16d2 size=68 type=0 succ=['0x1409f16d2', '0x1409f8967'] pred=['0x1409f1671']
// BB 0x1409f16d2-0x1409f1706 size=52 type=0 succ=['0x1409f1706'] pred=['0x1409f168e']
// BB 0x1409f1706-0x1409f1731 size=43 type=0 succ=['0x1409f1731', '0x1409f173e'] pred=['0x1409f16d2']
// BB 0x1409f1731-0x1409f173e size=13 type=0 succ=['0x1409f173e'] pred=['0x1409f1706']
// BB 0x1409f173e-0x1409f1762 size=36 type=0 succ=['0x1409f1762', '0x1409f8952'] pred=['0x1409f1706', '0x1409f1731']
// BB 0x1409f1762-0x1409f17c6 size=100 type=0 succ=['0x1409f17c6', '0x1409f89a6'] pred=['0x1409f173e']
// BB 0x1409f17c6-0x1409f17f4 size=46 type=0 succ=['0x1409f17f4', '0x1409f1824'] pred=['0x1409f1762']
// BB 0x1409f17f4-0x1409f180f size=27 type=0 succ=['0x1409f180f', '0x1409f8ada'] pred=['0x1409f17c6']
// BB 0x1409f180f-0x1409f1824 size=21 type=0 succ=['0x1409f1824'] pred=['0x1409f17f4']
// BB 0x1409f1824-0x1409f1847 size=35 type=0 succ=['0x1409f1847'] pred=['0x1409f17c6', '0x1409f180f']
// BB 0x1409f1847-0x1409f1872 size=43 type=0 succ=['0x1409f1872', '0x1409f187f'] pred=['0x1409f1824']
// BB 0x1409f1872-0x1409f187f size=13 type=0 succ=['0x1409f187f'] pred=['0x1409f1847']
// BB 0x1409f187f-0x1409f189c size=29 type=0 succ=['0x1409f189c', '0x1409f89bb'] pred=['0x1409f1847', '0x1409f1872']
// BB 0x1409f189c-0x1409f18d3 size=55 type=0 succ=['0x1409f18d3', '0x1409f7d79'] pred=['0x1409f187f']
// BB 0x1409f18d3-0x1409f18d9 size=6 type=0 succ=['0x1409f18d9', '0x1409f1a7d'] pred=['0x1409f189c']
// BB 0x1409f18d9-0x1409f18fa size=33 type=0 succ=['0x1409f18fa', '0x1409f7d7c'] pred=['0x1409f18d3']
// BB 0x1409f18fa-0x1409f1914 size=26 type=0 succ=['0x1409f1a83'] pred=['0x1409f18d9']
// BB 0x1409f1914-0x1409f1930 size=28 type=0 succ=['0x1409efc27'] pred=['0x1409ef872']
// BB 0x1409f1930-0x1409f1957 size=39 type=0 succ=['0x1409f1957', '0x1409f8be0'] pred=['0x1409f1034']
// BB 0x1409f1957-0x1409f1990 size=57 type=0 succ=['0x1409f1990', '0x1409f1ffd'] pred=['0x1409f1930']
// BB 0x1409f1990-0x1409f1999 size=9 type=0 succ=['0x1409f1999', '0x1409f2007'] pred=['0x1409f1957']
// BB 0x1409f1999-0x1409f19ad size=20 type=0 succ=['0x1409f19ad', '0x1409f2007'] pred=['0x1409f1990']
// BB 0x1409f19ad-0x1409f19c8 size=27 type=0 succ=['0x1409f2007'] pred=['0x1409f1999']
// BB 0x1409f19c8-0x1409f19d6 size=14 type=0 succ=['0x1409f19d6'] pred=['0x1409f0e81']
// BB 0x1409f19d6-0x1409f19f1 size=27 type=0 succ=['0x1409f19f1'] pred=['0x1409f19c8']
// BB 0x1409f19f1-0x1409f1a3d size=76 type=0 succ=['0x1409f1a3d', '0x1409f1a53'] pred=['0x1409f19d6']
// BB 0x1409f1a3d-0x1409f1a53 size=22 type=0 succ=['0x1409f1a53'] pred=['0x1409f19f1']
// BB 0x1409f1a53-0x1409f1a7d size=42 type=0 succ=['0x1409f2ca4'] pred=['0x1409f19f1', '0x1409f1a3d']
// BB 0x1409f1a7d-0x1409f1a83 size=6 type=0 succ=['0x1409f1a83'] pred=['0x1409f18d3']
// BB 0x1409f1a83-0x1409f1aa6 size=35 type=0 succ=['0x1409f1aa6'] pred=['0x1409f18fa', '0x1409f1a7d']
// BB 0x1409f1aa6-0x1409f1ad1 size=43 type=0 succ=['0x1409f1ad1', '0x1409f1ade'] pred=['0x1409f1a83']
// BB 0x1409f1ad1-0x1409f1ade size=13 type=0 succ=['0x1409f1ade'] pred=['0x1409f1aa6']
// BB 0x1409f1ade-0x1409f1b0a size=44 type=0 succ=['0x1409f1b0a'] pred=['0x1409f1aa6', '0x1409f1ad1']
// BB 0x1409f1b0a-0x1409f1b35 size=43 type=0 succ=['0x1409f1b35', '0x1409f1b42'] pred=['0x1409f1ade']
// BB 0x1409f1b35-0x1409f1b42 size=13 type=0 succ=['0x1409f1b42'] pred=['0x1409f1b0a']
// BB 0x1409f1b42-0x1409f1b73 size=49 type=0 succ=['0x1409f1b73', '0x1409f1bda'] pred=['0x1409f1b0a', '0x1409f1b35']
// BB 0x1409f1b73-0x1409f1b8b size=24 type=0 succ=['0x1409f1b8b', '0x1409f1bda'] pred=['0x1409f1b42']
// BB 0x1409f1b8b-0x1409f1b92 size=7 type=0 succ=['0x1409f1b92'] pred=['0x1409f1b73']
// BB 0x1409f1b92-0x1409f1ba9 size=23 type=0 succ=['0x1409f1ba9', '0x1409f1bda'] pred=['0x1409f1b8b']
// BB 0x1409f1ba9-0x1409f1bae size=5 type=0 succ=['0x1409f1bae', '0x1409f1bda'] pred=['0x1409f1b92']
// BB 0x1409f1bae-0x1409f1bb5 size=7 type=0 succ=['0x1409f1bb5', '0x1409f1bda'] pred=['0x1409f1ba9']
// BB 0x1409f1bb5-0x1409f1bda size=37 type=0 succ=['0x1409f1bda', '0x1409f3226'] pred=['0x1409f1bae']
// BB 0x1409f1bda-0x1409f1c0d size=51 type=0 succ=['0x1409f1c0d', '0x1409f8b62'] pred=['0x1409f1b42', '0x1409f1b73', '0x1409f1b92', '0x1409f1ba9', '0x1409f1bae', '0x1409f1bb5']
// BB 0x1409f1c0d-0x1409f1c54 size=71 type=0 succ=['0x1409f1c54', '0x1409f8b8c'] pred=['0x1409f1bda']
// BB 0x1409f1c54-0x1409f1c8d size=57 type=0 succ=['0x1409f1c8d'] pred=['0x1409f1c0d']
// BB 0x1409f1c8d-0x1409f1cb8 size=43 type=0 succ=['0x1409f1cb8', '0x1409f1cc5'] pred=['0x1409f1c54']
// BB 0x1409f1cb8-0x1409f1cc5 size=13 type=0 succ=['0x1409f1cc5'] pred=['0x1409f1c8d']
// BB 0x1409f1cc5-0x1409f1ce2 size=29 type=0 succ=['0x1409f1ce2', '0x1409f8b77'] pred=['0x1409f1c8d', '0x1409f1cb8']
// BB 0x1409f1ce2-0x1409f1d13 size=49 type=0 succ=['0x1409f1d13'] pred=['0x1409f1cc5']
// BB 0x1409f1d13-0x1409f1d34 size=33 type=0 succ=['0x1409f1d34', '0x1409f82c7'] pred=['0x1409f1ce2']
// BB 0x1409f1d34-0x1409f1d86 size=82 type=0 succ=['0x1409f1d86', '0x1409f1d93'] pred=['0x1409f1d13']
// BB 0x1409f1d86-0x1409f1d93 size=13 type=0 succ=['0x1409f1d93'] pred=['0x1409f1d34']
// BB 0x1409f1d93-0x1409f1db0 size=29 type=0 succ=['0x1409f1db0', '0x1409f8b4d'] pred=['0x1409f1d34', '0x1409f1d86']
// BB 0x1409f1db0-0x1409f1e04 size=84 type=0 succ=['0x1409f1e04', '0x1409f8131'] pred=['0x1409f1d93']
// BB 0x1409f1e04-0x1409f1e25 size=33 type=0 succ=['0x1409f1e25', '0x1409f8306'] pred=['0x1409f1db0']
// BB 0x1409f1e25-0x1409f1e70 size=75 type=0 succ=['0x1409f1e70'] pred=['0x1409f1e04']
// BB 0x1409f1e70-0x1409f1e9b size=43 type=0 succ=['0x1409f1e9b', '0x1409f1ea8'] pred=['0x1409f1e25']
// BB 0x1409f1e9b-0x1409f1ea8 size=13 type=0 succ=['0x1409f1ea8'] pred=['0x1409f1e70']
// BB 0x1409f1ea8-0x1409f1edd size=53 type=0 succ=['0x1409f1edd', '0x1409f1eea'] pred=['0x1409f1e70', '0x1409f1e9b']
// BB 0x1409f1edd-0x1409f1eea size=13 type=0 succ=['0x1409f1eea'] pred=['0x1409f1ea8']
// BB 0x1409f1eea-0x1409f1f1d size=51 type=0 succ=['0x1409f1f1d'] pred=['0x1409f1ea8', '0x1409f1edd']
// BB 0x1409f1f1d-0x1409f1f36 size=25 type=0 succ=['0x1409f1f36', '0x1409f1f48'] pred=['0x1409f1eea', '0x1409f3226', '0x1409f342b']
// BB 0x1409f1f36-0x1409f1f48 size=18 type=0 succ=['0x1409f1f48'] pred=['0x1409f1f1d', '0x1409f32b2']
// BB 0x1409f1f48-0x1409f1f62 size=26 type=0 succ=['0x1409f1f62', '0x1409f1f74'] pred=['0x1409f1f1d', '0x1409f1f36', '0x1409f32ef']
// BB 0x1409f1f62-0x1409f1f74 size=18 type=0 succ=['0x1409f1f74'] pred=['0x1409f1f48']
// BB 0x1409f1f74-0x1409f1f8a size=22 type=0 succ=['0x1409ef780', '0x1409f1f8a'] pred=['0x1409f1f48', '0x1409f1f62']
// BB 0x1409f1f8a-0x1409f1f9f size=21 type=0 succ=['0x1409f04e5'] pred=['0x1409f1f74']
// BB 0x1409f1f9f-0x1409f1ffd size=94 type=0 succ=['0x1409f2ca4'] pred=['0x1409f1419']
// BB 0x1409f1ffd-0x1409f2001 size=4 type=0 succ=['0x1409f2001'] pred=['0x1409f1957']
// BB 0x1409f2001-0x1409f2007 size=6 type=0 succ=['0x1409f2007'] pred=['0x1409f1ffd']
// BB 0x1409f2007-0x1409f202f size=40 type=0 succ=['0x1409f202f'] pred=['0x1409f1990', '0x1409f1999', '0x1409f19ad', '0x1409f2001']
// BB 0x1409f202f-0x1409f203d size=14 type=0 succ=['0x1409f203d'] pred=['0x1409f1060', '0x1409f2007']
// BB 0x1409f203d-0x1409f204a size=13 type=0 succ=['0x1409f204a'] pred=['0x1409f202f']
// BB 0x1409f204a-0x1409f2084 size=58 type=0 succ=['0x1409f2084', '0x1409f87df'] pred=['0x1409f062d', '0x1409f0ff0', '0x1409f203d']
// BB 0x1409f2084-0x1409f20b8 size=52 type=0 succ=['0x1409f20b8', '0x1409f20e8'] pred=['0x1409f204a']
// BB 0x1409f20b8-0x1409f20d3 size=27 type=0 succ=['0x1409f20d3', '0x1409f889d'] pred=['0x1409f2084']
// BB 0x1409f20d3-0x1409f20e8 size=21 type=0 succ=['0x1409f20e8'] pred=['0x1409f20b8']
// BB 0x1409f20e8-0x1409f210b size=35 type=0 succ=['0x1409f210b'] pred=['0x1409f2084', '0x1409f20d3']
// BB 0x1409f210b-0x1409f2136 size=43 type=0 succ=['0x1409f2136', '0x1409f2143'] pred=['0x1409f20e8']
// BB 0x1409f2136-0x1409f2143 size=13 type=0 succ=['0x1409f2143'] pred=['0x1409f210b']
// BB 0x1409f2143-0x1409f2160 size=29 type=0 succ=['0x1409f2160', '0x1409f87f4'] pred=['0x1409f210b', '0x1409f2136']
// BB 0x1409f2160-0x1409f21a7 size=71 type=0 succ=['0x1409f21a7', '0x1409f881e'] pred=['0x1409f2143']
// BB 0x1409f21a7-0x1409f21db size=52 type=0 succ=['0x1409f21db'] pred=['0x1409f2160']
// BB 0x1409f21db-0x1409f2206 size=43 type=0 succ=['0x1409f2206', '0x1409f2213'] pred=['0x1409f21a7']
// BB 0x1409f2206-0x1409f2213 size=13 type=0 succ=['0x1409f2213'] pred=['0x1409f21db']
// BB 0x1409f2213-0x1409f2230 size=29 type=0 succ=['0x1409f2230', '0x1409f8809'] pred=['0x1409f21db', '0x1409f2206']
// BB 0x1409f2230-0x1409f228d size=93 type=0 succ=['0x1409f228d', '0x1409f87ca'] pred=['0x1409f2213']
// BB 0x1409f228d-0x1409f22c2 size=53 type=0 succ=['0x1409f22c2', '0x1409f22f2'] pred=['0x1409f2230']
// BB 0x1409f22c2-0x1409f22dd size=27 type=0 succ=['0x1409f22dd', '0x1409f88b7'] pred=['0x1409f228d']
// BB 0x1409f22dd-0x1409f22f2 size=21 type=0 succ=['0x1409f22f2'] pred=['0x1409f22c2']
// BB 0x1409f22f2-0x1409f2315 size=35 type=0 succ=['0x1409f2315'] pred=['0x1409f228d', '0x1409f22dd']
// BB 0x1409f2315-0x1409f2340 size=43 type=0 succ=['0x1409f2340', '0x1409f234d'] pred=['0x1409f22f2']
// BB 0x1409f2340-0x1409f234d size=13 type=0 succ=['0x1409f234d'] pred=['0x1409f2315']
// BB 0x1409f234d-0x1409f236a size=29 type=0 succ=['0x1409f236a', '0x1409f87b5'] pred=['0x1409f2315', '0x1409f2340']
// BB 0x1409f236a-0x1409f23a1 size=55 type=0 succ=['0x1409f23a1', '0x1409f3908'] pred=['0x1409f234d']
// BB 0x1409f23a1-0x1409f23a3 size=2 type=0 succ=['0x1409f23a3', '0x1409f23db'] pred=['0x1409f236a']
// BB 0x1409f23a3-0x1409f23c4 size=33 type=0 succ=['0x1409f23c4', '0x1409f390b'] pred=['0x1409f23a1']
// BB 0x1409f23c4-0x1409f23db size=23 type=0 succ=['0x1409f23e1'] pred=['0x1409f23a3']
// BB 0x1409f23db-0x1409f23e1 size=6 type=0 succ=['0x1409f23e1'] pred=['0x1409f23a1']
// BB 0x1409f23e1-0x1409f2404 size=35 type=0 succ=['0x1409f2404'] pred=['0x1409f23c4', '0x1409f23db']
// BB 0x1409f2404-0x1409f242f size=43 type=0 succ=['0x1409f242f', '0x1409f243c'] pred=['0x1409f23e1']
// BB 0x1409f242f-0x1409f243c size=13 type=0 succ=['0x1409f243c'] pred=['0x1409f2404']
// BB 0x1409f243c-0x1409f2468 size=44 type=0 succ=['0x1409f2468'] pred=['0x1409f2404', '0x1409f242f']
// BB 0x1409f2468-0x1409f2493 size=43 type=0 succ=['0x1409f2493', '0x1409f24a0'] pred=['0x1409f243c']
// BB 0x1409f2493-0x1409f24a0 size=13 type=0 succ=['0x1409f24a0'] pred=['0x1409f2468']
// BB 0x1409f24a0-0x1409f24f2 size=82 type=0 succ=['0x1409f24f2', '0x1409f2597'] pred=['0x1409f2468', '0x1409f2493']
// BB 0x1409f24f2-0x1409f24f9 size=7 type=0 succ=['0x1409f24f9'] pred=['0x1409f24a0']
// BB 0x1409f24f9-0x1409f250e size=21 type=0 succ=['0x1409f250e'] pred=['0x1409f24f2']
// BB 0x1409f250e-0x1409f2521 size=19 type=0 succ=['0x1409f2521', '0x1409f2590'] pred=['0x1409f24f9']
// BB 0x1409f2521-0x1409f2526 size=5 type=0 succ=['0x1409f2526', '0x1409f2590'] pred=['0x1409f250e']
// BB 0x1409f2526-0x1409f2539 size=19 type=0 succ=['0x1409f2539', '0x1409f2597'] pred=['0x1409f2521']
// BB 0x1409f2539-0x1409f2572 size=57 type=0 succ=['0x1409f2572', '0x1409f845a'] pred=['0x1409f2526']
// BB 0x1409f2572-0x1409f2590 size=30 type=0 succ=['0x1409f2597'] pred=['0x1409f2539']
// BB 0x1409f2590-0x1409f2597 size=7 type=0 succ=['0x1409f2597'] pred=['0x1409f250e', '0x1409f2521']
// BB 0x1409f2597-0x1409f25aa size=19 type=0 succ=['0x1409f25aa', '0x1409f261f'] pred=['0x1409f24a0', '0x1409f2526', '0x1409f2572', '0x1409f2590']
// BB 0x1409f25aa-0x1409f25c2 size=24 type=0 succ=['0x1409f25c2', '0x1409f261f'] pred=['0x1409f2597']
// BB 0x1409f25c2-0x1409f25d0 size=14 type=0 succ=['0x1409f25d0'] pred=['0x1409f25aa']
// BB 0x1409f25d0-0x1409f25ee size=30 type=0 succ=['0x1409f25ee', '0x1409f261f'] pred=['0x1409f25c2']
// BB 0x1409f25ee-0x1409f25f3 size=5 type=0 succ=['0x1409f25f3', '0x1409f261f'] pred=['0x1409f25d0']
// BB 0x1409f25f3-0x1409f25fa size=7 type=0 succ=['0x1409f25fa', '0x1409f261f'] pred=['0x1409f25ee']
// BB 0x1409f25fa-0x1409f261f size=37 type=0 succ=['0x1409f261f', '0x1409f2b12'] pred=['0x1409f25f3']
// BB 0x1409f261f-0x1409f2652 size=51 type=0 succ=['0x1409f2652', '0x1409f8910'] pred=['0x1409f2597', '0x1409f25aa', '0x1409f25d0', '0x1409f25ee', '0x1409f25f3', '0x1409f25fa']
// BB 0x1409f2652-0x1409f2699 size=71 type=0 succ=['0x1409f2699', '0x1409f88fb'] pred=['0x1409f261f']
// BB 0x1409f2699-0x1409f26d2 size=57 type=0 succ=['0x1409f26d2'] pred=['0x1409f2652']
// BB 0x1409f26d2-0x1409f26fd size=43 type=0 succ=['0x1409f26fd', '0x1409f270a'] pred=['0x1409f2699']
// BB 0x1409f26fd-0x1409f270a size=13 type=0 succ=['0x1409f270a'] pred=['0x1409f26d2']
// BB 0x1409f270a-0x1409f2727 size=29 type=0 succ=['0x1409f2727', '0x1409f88e6'] pred=['0x1409f26d2', '0x1409f26fd']
// BB 0x1409f2727-0x1409f2758 size=49 type=0 succ=['0x1409f2758'] pred=['0x1409f270a']
// BB 0x1409f2758-0x1409f2779 size=33 type=0 succ=['0x1409f2779', '0x1409f8007'] pred=['0x1409f2727']
// BB 0x1409f2779-0x1409f27cb size=82 type=0 succ=['0x1409f27cb', '0x1409f27d8'] pred=['0x1409f2758']
// BB 0x1409f27cb-0x1409f27d8 size=13 type=0 succ=['0x1409f27d8'] pred=['0x1409f2779']
// BB 0x1409f27d8-0x1409f27f5 size=29 type=0 succ=['0x1409f27f5', '0x1409f88d1'] pred=['0x1409f2779', '0x1409f27cb']
// BB 0x1409f27f5-0x1409f2849 size=84 type=0 succ=['0x1409f2849', '0x1409f7fd9'] pred=['0x1409f27d8']
// BB 0x1409f2849-0x1409f286a size=33 type=0 succ=['0x1409f286a', '0x1409f8046'] pred=['0x1409f27f5']
// BB 0x1409f286a-0x1409f28b5 size=75 type=0 succ=['0x1409f28b5'] pred=['0x1409f2849']
// BB 0x1409f28b5-0x1409f28e7 size=50 type=0 succ=['0x1409f28e7', '0x1409f28f4'] pred=['0x1409f286a']
// BB 0x1409f28e7-0x1409f28f4 size=13 type=0 succ=['0x1409f28f4'] pred=['0x1409f28b5']
// BB 0x1409f28f4-0x1409f291f size=43 type=0 succ=['0x1409f291f', '0x1409f299e'] pred=['0x1409f28b5', '0x1409f28e7']
// BB 0x1409f291f-0x1409f2949 size=42 type=0 succ=['0x1409f2949'] pred=['0x1409f28f4']
// BB 0x1409f2949-0x1409f2962 size=25 type=0 succ=['0x1409f2962'] pred=['0x1409f291f']
// BB 0x1409f2962-0x1409f299e size=60 type=0 succ=['0x1409f29a6'] pred=['0x1409f2949']
// BB 0x1409f299e-0x1409f29a6 size=8 type=0 succ=['0x1409f29a6'] pred=['0x1409f28f4']
// BB 0x1409f29a6-0x1409f29d6 size=48 type=0 succ=['0x1409f29d6', '0x1409f29e3'] pred=['0x1409f2962', '0x1409f299e']
// BB 0x1409f29d6-0x1409f29e3 size=13 type=0 succ=['0x1409f29e3'] pred=['0x1409f29a6']
// BB 0x1409f29e3-0x1409f2a37 size=84 type=0 succ=['0x1409f2a37', '0x1409f2a45'] pred=['0x1409f29a6', '0x1409f29d6']
// BB 0x1409f2a37-0x1409f2a45 size=14 type=0 succ=['0x1409f2a45'] pred=['0x1409f29e3', '0x1409f320c']
// BB 0x1409f2a45-0x1409f2a50 size=11 type=0 succ=['0x1409f2a50'] pred=['0x1409f29e3', '0x1409f2a37', '0x1409f3221', '0x1409f3371']
// BB 0x1409f2a50-0x1409f2a5d size=13 type=0 succ=['0x1409f2a5d'] pred=['0x1409f2a45']
// BB 0x1409f2a5d-0x1409f2a69 size=12 type=0 succ=['0x1409f2a69', '0x1409f2a7b'] pred=['0x1409f2a50', '0x1409f3381']
// BB 0x1409f2a69-0x1409f2a7b size=18 type=0 succ=['0x1409f2a7b'] pred=['0x1409f2a5d']
// BB 0x1409f2a7b-0x1409f2a8e size=19 type=0 succ=['0x1409f2a8e', '0x1409f2aa0'] pred=['0x1409f2a5d', '0x1409f2a69']
// BB 0x1409f2a8e-0x1409f2aa0 size=18 type=0 succ=['0x1409f2aa0'] pred=['0x1409f2a7b']
// BB 0x1409f2aa0-0x1409f2ac8 size=40 type=0 succ=['0x1409ef780', '0x1409f2ac8'] pred=['0x1409f2a7b', '0x1409f2a8e']
// BB 0x1409f2ac8-0x1409f2af3 size=43 type=0 succ=['0x1409ef780'] pred=['0x1409f2aa0']
// BB 0x1409f2af3-0x1409f2b12 size=31 type=0 succ=['0x1409f0562'] pred=['0x1409efa40']
// BB 0x1409f2b12-0x1409f2b22 size=16 type=0 succ=['0x1409f2b22', '0x1409f320c'] pred=['0x1409f25fa']
// BB 0x1409f2b22-0x1409f2b43 size=33 type=0 succ=['0x1409f2b43'] pred=['0x1409f2b12']
// BB 0x1409f2b43-0x1409f2b61 size=30 type=0 succ=['0x1409f2b61', '0x1409f30b8'] pred=['0x1409f2b22']
// BB 0x1409f2b61-0x1409f2b6a size=9 type=0 succ=['0x1409f2b6a', '0x1409f30b8'] pred=['0x1409f2b43']
// BB 0x1409f2b6a-0x1409f2b94 size=42 type=0 succ=['0x1409f2b94', '0x1409f2ba6'] pred=['0x1409f2b61']
// BB 0x1409f2b94-0x1409f2ba6 size=18 type=0 succ=['0x1409f2ba6'] pred=['0x1409f2b6a']
// BB 0x1409f2ba6-0x1409f2bdb size=53 type=0 succ=['0x1409f3190'] pred=['0x1409f2b6a', '0x1409f2b94']
// BB 0x1409f2bdb-0x1409f2be3 size=8 type=0 succ=['0x1409f2be3'] pred=['0x1409f1434']
// BB 0x1409f2be3-0x1409f2bf9 size=22 type=0 succ=['0x1409f2c3a'] pred=['0x1409f2bdb']
// BB 0x1409f2bf9-0x1409f2c02 size=9 type=0 succ=['0x1409f2c3a'] pred=['0x1409f1434']
// BB 0x1409f2c02-0x1409f2c1f size=29 type=0 succ=['0x1409f2c3a'] pred=['0x1409f1434']
// BB 0x1409f2c1f-0x1409f2c3a size=27 type=0 succ=['0x1409f2c3a'] pred=['0x1409f1434']
// BB 0x1409f2c3a-0x1409f2ca4 size=106 type=0 succ=['0x1409f2ca4'] pred=['0x1409f1447', '0x1409f2be3', '0x1409f2bf9', '0x1409f2c02', '0x1409f2c1f']
// BB 0x1409f2ca4-0x1409f2cd0 size=44 type=0 succ=['0x1409f2cd0'] pred=['0x1409f1406', '0x1409f1a53', '0x1409f1f9f', '0x1409f2c3a']
// BB 0x1409f2cd0-0x1409f2ce0 size=16 type=0 succ=['0x1409f2ce0', '0x1409f2cf9'] pred=['0x1409f2ca4', '0x1409f2cf4']
// BB 0x1409f2ce0-0x1409f2cee size=14 type=0 succ=['0x1409f2cee'] pred=['0x1409f2cd0']
// BB 0x1409f2cee-0x1409f2cf4 size=6 type=0 succ=['0x1409f2cf4'] pred=['0x1409f2ce0']
// BB 0x1409f2cf4-0x1409f2cf9 size=5 type=0 succ=['0x1409f2cd0'] pred=['0x1409f2cee']
// BB 0x1409f2cf9-0x1409f2d05 size=12 type=0 succ=['0x1409f2d05', '0x1409f2d1b'] pred=['0x1409f2cd0']
// BB 0x1409f2d05-0x1409f2d1b size=22 type=0 succ=['0x1409f2d1b'] pred=['0x1409f2cf9']
// BB 0x1409f2d1b-0x1409f2d28 size=13 type=0 succ=['0x1409efc9c', '0x1409f2d28'] pred=['0x1409f2cf9', '0x1409f2d05']
// BB 0x1409f2d28-0x1409f2d5b size=51 type=0 succ=['0x1409f2d5b', '0x1409f8888'] pred=['0x1409efc89', '0x1409f0e8a', '0x1409f2d1b']
// BB 0x1409f2d5b-0x1409f2d87 size=44 type=0 succ=['0x1409f2d87', '0x1409f3eea'] pred=['0x1409f2d28']
// BB 0x1409f2d87-0x1409f2d89 size=2 type=0 succ=['0x1409f2d89', '0x1409f2dbd'] pred=['0x1409f2d5b']
// BB 0x1409f2d89-0x1409f2daa size=33 type=0 succ=['0x1409f2daa', '0x1409f3eed'] pred=['0x1409f2d87']
// BB 0x1409f2daa-0x1409f2dbd size=19 type=0 succ=['0x1409f2dc2'] pred=['0x1409f2d89']
// BB 0x1409f2dbd-0x1409f2dc2 size=5 type=0 succ=['0x1409f2dc2'] pred=['0x1409f2d87']
// BB 0x1409f2dc2-0x1409f2de5 size=35 type=0 succ=['0x1409f2de5'] pred=['0x1409f2daa', '0x1409f2dbd']
// BB 0x1409f2de5-0x1409f2e10 size=43 type=0 succ=['0x1409f2e10', '0x1409f2e1d'] pred=['0x1409f2dc2']
// BB 0x1409f2e10-0x1409f2e1d size=13 type=0 succ=['0x1409f2e1d'] pred=['0x1409f2de5']
// BB 0x1409f2e1d-0x1409f2e3a size=29 type=0 succ=['0x1409f2e3a', '0x1409f89f3'] pred=['0x1409f2de5', '0x1409f2e10']
// BB 0x1409f2e3a-0x1409f2e6b size=49 type=0 succ=['0x1409f2e6b'] pred=['0x1409f2e1d']
// BB 0x1409f2e6b-0x1409f2e8c size=33 type=0 succ=['0x1409f2e8c', '0x1409f80f2'] pred=['0x1409f2e3a']
// BB 0x1409f2e8c-0x1409f2ede size=82 type=0 succ=['0x1409f2ede', '0x1409f2eeb'] pred=['0x1409f2e6b']
// BB 0x1409f2ede-0x1409f2eeb size=13 type=0 succ=['0x1409f2eeb'] pred=['0x1409f2e8c']
// BB 0x1409f2eeb-0x1409f2f1d size=50 type=0 succ=['0x1409f2f1d', '0x1409f2feb'] pred=['0x1409f2e8c', '0x1409f2ede']
// BB 0x1409f2f1d-0x1409f2f4a size=45 type=0 succ=['0x1409f2f4a', '0x1409f2f56'] pred=['0x1409f2eeb']
// BB 0x1409f2f4a-0x1409f2f56 size=12 type=0 succ=['0x1409f2feb'] pred=['0x1409f2f1d']
// BB 0x1409f2f56-0x1409f2f60 size=10 type=0 succ=['0x1409f2f60', '0x1409f2fe0'] pred=['0x1409f2f1d']
// BB 0x1409f2f60-0x1409f2f8a size=42 type=0 succ=['0x1409f2f8a'] pred=['0x1409f2f56']
// BB 0x1409f2f8a-0x1409f2fa3 size=25 type=0 succ=['0x1409f2fa3'] pred=['0x1409f2f60']
// BB 0x1409f2fa3-0x1409f2fe0 size=61 type=0 succ=['0x1409f2feb'] pred=['0x1409f2f8a']
// BB 0x1409f2fe0-0x1409f2feb size=11 type=0 succ=['0x1409f2feb'] pred=['0x1409f2f56']
// BB 0x1409f2feb-0x1409f3051 size=102 type=0 succ=['0x1409f3051', '0x1409f305e'] pred=['0x1409f2eeb', '0x1409f2f4a', '0x1409f2fa3', '0x1409f2fe0']
// BB 0x1409f3051-0x1409f305e size=13 type=0 succ=['0x1409f305e'] pred=['0x1409f2feb']
// BB 0x1409f305e-0x1409f309f size=65 type=0 succ=['0x1409f309f'] pred=['0x1409f2feb', '0x1409f3051']
// BB 0x1409f309f-0x1409f30b8 size=25 type=0 succ=['0x1409ef780'] pred=['0x1409f305e']
// BB 0x1409f30b8-0x1409f30dc size=36 type=0 succ=['0x1409f30dc', '0x1409f85bb'] pred=['0x1409f2b43', '0x1409f2b61']
// BB 0x1409f30dc-0x1409f30fd size=33 type=0 succ=['0x1409f30fd', '0x1409f85f3'] pred=['0x1409f30b8']
// BB 0x1409f30fd-0x1409f3148 size=75 type=0 succ=['0x1409f3148'] pred=['0x1409f30dc']
// BB 0x1409f3148-0x1409f315d size=21 type=0 succ=['0x1409f315d'] pred=['0x1409f30fd']
// BB 0x1409f315d-0x1409f3190 size=51 type=0 succ=['0x1409f3190'] pred=['0x1409f3148']
// BB 0x1409f3190-0x1409f319e size=14 type=0 succ=['0x1409f319e', '0x1409f3371'] pred=['0x1409f2ba6', '0x1409f315d']
// BB 0x1409f319e-0x1409f31ac size=14 type=0 succ=['0x1409f31ac'] pred=['0x1409f3190']
// BB 0x1409f31ac-0x1409f31ca size=30 type=0 succ=['0x1409f31ca', '0x1409f32f4'] pred=['0x1409f319e']
// BB 0x1409f31ca-0x1409f31d3 size=9 type=0 succ=['0x1409f31d3', '0x1409f32f4'] pred=['0x1409f31ac']
// BB 0x1409f31d3-0x1409f31de size=11 type=0 succ=['0x1409f31de', '0x1409f32f4'] pred=['0x1409f31ca']
// BB 0x1409f31de-0x1409f31f5 size=23 type=0 succ=['0x1409f31f5', '0x1409f3371'] pred=['0x1409f31d3']
// BB 0x1409f31f5-0x1409f320c size=23 type=0 succ=['0x1409f3371'] pred=['0x1409f31de']
// BB 0x1409f320c-0x1409f3221 size=21 type=0 succ=['0x1409f2a37', '0x1409f3221'] pred=['0x1409f2b12']
// BB 0x1409f3221-0x1409f3226 size=5 type=0 succ=['0x1409f2a45'] pred=['0x1409f320c']
// BB 0x1409f3226-0x1409f3236 size=16 type=0 succ=['0x1409f1f1d', '0x1409f3236'] pred=['0x1409f1bb5']
// BB 0x1409f3236-0x1409f3250 size=26 type=0 succ=['0x1409f3250'] pred=['0x1409f3226']
// BB 0x1409f3250-0x1409f3271 size=33 type=0 succ=['0x1409f3271', '0x1409f3386'] pred=['0x1409f3236']
// BB 0x1409f3271-0x1409f327b size=10 type=0 succ=['0x1409f327b', '0x1409f3386'] pred=['0x1409f3250']
// BB 0x1409f327b-0x1409f32a5 size=42 type=0 succ=['0x1409f32a5', '0x1409f32b2'] pred=['0x1409f3271']
// BB 0x1409f32a5-0x1409f32b2 size=13 type=0 succ=['0x1409f32b2'] pred=['0x1409f327b']
// BB 0x1409f32b2-0x1409f32ef size=61 type=0 succ=['0x1409f1f36', '0x1409f32ef'] pred=['0x1409f327b', '0x1409f32a5']
// BB 0x1409f32ef-0x1409f32f4 size=5 type=0 succ=['0x1409f1f48'] pred=['0x1409f32b2']
// BB 0x1409f32f4-0x1409f3325 size=49 type=0 succ=['0x1409f3325'] pred=['0x1409f31ac', '0x1409f31ca', '0x1409f31d3']
// BB 0x1409f3325-0x1409f333a size=21 type=0 succ=['0x1409f333a'] pred=['0x1409f32f4']
// BB 0x1409f333a-0x1409f3371 size=55 type=0 succ=['0x1409f3371'] pred=['0x1409f3325']
// BB 0x1409f3371-0x1409f3381 size=16 type=0 succ=['0x1409f2a45', '0x1409f3381'] pred=['0x1409f3190', '0x1409f31de', '0x1409f31f5', '0x1409f333a']
// BB 0x1409f3381-0x1409f3386 size=5 type=0 succ=['0x1409f2a5d'] pred=['0x1409f3371']
// BB 0x1409f3386-0x1409f33aa size=36 type=0 succ=['0x1409f33aa', '0x1409f8647'] pred=['0x1409f3250', '0x1409f3271']
// BB 0x1409f33aa-0x1409f33cb size=33 type=0 succ=['0x1409f33cb', '0x1409f8762'] pred=['0x1409f3386']
// BB 0x1409f33cb-0x1409f3416 size=75 type=0 succ=['0x1409f3416'] pred=['0x1409f33aa']
// BB 0x1409f3416-0x1409f342b size=21 type=0 succ=['0x1409f342b'] pred=['0x1409f33cb']
// BB 0x1409f342b-0x1409f3460 size=53 type=0 succ=['0x1409f1f1d'] pred=['0x1409f3416']
// BB 0x1409f3460-0x1409f347f size=31 type=0 succ=['0x1409efd21'] pred=['0x1409ef91a']
// BB 0x1409f347f-0x1409f349e size=31 type=0 succ=['0x1409f00d9'] pred=['0x1409ef9a0']
// BB 0x1409f349e-0x1409f34bd size=31 type=0 succ=['0x1409f0179'] pred=['0x1409efc07']
// BB 0x1409f34bd-0x1409f34dc size=31 type=0 succ=['0x1409f05f8'] pred=['0x1409f0124']
// BB 0x1409f34dc-0x1409f34fb size=31 type=0 succ=['0x1409f0efb'] pred=['0x1409f05a3']
// BB 0x1409f34fb-0x1409f3505 size=10 type=0 succ=['0x1409f3505', '0x1409f3514'] pred=['0x1409ef780']
// BB 0x1409f3505-0x1409f3514 size=15 type=0 succ=['0x1409f3514'] pred=['0x1409f34fb']
// BB 0x1409f3514-0x1409f3532 size=30 type=0 succ=['0x1409f3532', '0x1409f354d'] pred=['0x1409ef712', '0x1409ef734', '0x1409f34fb', '0x1409f3505']
// BB 0x1409f3532-0x1409f3537 size=5 type=0 succ=['0x1409f3537', '0x1409f354d'] pred=['0x1409f3514']
// BB 0x1409f3537-0x1409f354d size=22 type=0 succ=['0x1409f354d'] pred=['0x1409f3532']
// BB 0x1409f354d-0x1409f3557 size=10 type=0 succ=['0x1409f3557', '0x1409f3571'] pred=['0x1409f3514', '0x1409f3532', '0x1409f3537']
// BB 0x1409f3557-0x1409f3560 size=9 type=0 succ=['0x1409f3560'] pred=['0x1409f354d']
// BB 0x1409f3560-0x1409f356b size=11 type=4 succ=[] pred=['0x1409f3557', '0x1409f3573']
// BB 0x1409f356c-0x1409f3571 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3571-0x1409f3573 size=2 type=0 succ=['0x1409f3573', '0x1409f35b1'] pred=['0x1409f354d']
// BB 0x1409f3573-0x1409f3596 size=35 type=0 succ=['0x1409f3560', '0x1409f3596'] pred=['0x1409f3571']
// BB 0x1409f3596-0x1409f35b1 size=27 type=0 succ=['0x1409f35bd'] pred=['0x1409f3573']
// BB 0x1409f35b1-0x1409f35bd size=12 type=0 succ=['0x1409f35bd'] pred=['0x1409f3571']
// BB 0x1409f35bd-0x1409f35f5 size=56 type=0 succ=['0x1409f35f5', '0x1409f8488'] pred=['0x1409f3596', '0x1409f35b1']
// BB 0x1409f35f5-0x1409f3628 size=51 type=0 succ=['0x1409f3628', '0x1409f3658'] pred=['0x1409f35bd']
// BB 0x1409f3628-0x1409f3643 size=27 type=0 succ=['0x1409f3643', '0x1409f854f'] pred=['0x1409f35f5']
// BB 0x1409f3643-0x1409f3658 size=21 type=0 succ=['0x1409f3658'] pred=['0x1409f3628']
// BB 0x1409f3658-0x1409f367b size=35 type=0 succ=['0x1409f367b'] pred=['0x1409f35f5', '0x1409f3643']
// BB 0x1409f367b-0x1409f36a6 size=43 type=0 succ=['0x1409f36a6', '0x1409f36b3'] pred=['0x1409f3658']
// BB 0x1409f36a6-0x1409f36b3 size=13 type=0 succ=['0x1409f36b3'] pred=['0x1409f367b']
// BB 0x1409f36b3-0x1409f36d0 size=29 type=0 succ=['0x1409f36d0', '0x1409f849d'] pred=['0x1409f367b', '0x1409f36a6']
// BB 0x1409f36d0-0x1409f3701 size=49 type=0 succ=['0x1409f3701'] pred=['0x1409f36b3']
// BB 0x1409f3701-0x1409f3722 size=33 type=0 succ=['0x1409f3722', '0x1409f7de9'] pred=['0x1409f36d0']
// BB 0x1409f3722-0x1409f3772 size=80 type=0 succ=['0x1409f3772', '0x1409f377f'] pred=['0x1409f3701']
// BB 0x1409f3772-0x1409f377f size=13 type=0 succ=['0x1409f377f'] pred=['0x1409f3722']
// BB 0x1409f377f-0x1409f37a4 size=37 type=0 succ=['0x1409f37a4'] pred=['0x1409f3722', '0x1409f3772']
// BB 0x1409f37a4-0x1409f37c6 size=34 type=0 succ=['0x1409f37c6', '0x1409f398e'] pred=['0x1409f377f']
// BB 0x1409f37c6-0x1409f37d9 size=19 type=1 succ=['0x1409f37d9', '0x1409f37f5', '0x1409f3816', '0x1409f3822', '0x1409f3842'] pred=['0x1409f37a4']
// BB 0x1409f37d9-0x1409f37f5 size=28 type=0 succ=['0x1409f3940'] pred=['0x1409f37c6']
// BB 0x1409f37f5-0x1409f3816 size=33 type=0 succ=['0x1409f3940'] pred=['0x1409f37c6']
// BB 0x1409f3816-0x1409f3822 size=12 type=0 succ=['0x1409f3940'] pred=['0x1409f37c6']
// BB 0x1409f3822-0x1409f3842 size=32 type=0 succ=['0x1409f3940'] pred=['0x1409f37c6']
// BB 0x1409f3842-0x1409f384d size=11 type=0 succ=['0x1409f384d', '0x1409f3923'] pred=['0x1409f37c6']
// BB 0x1409f384d-0x1409f385a size=13 type=0 succ=['0x1409f385a', '0x1409f7f6d'] pred=['0x1409f3842']
// BB 0x1409f385a-0x1409f3870 size=22 type=0 succ=['0x1409f3939'] pred=['0x1409f384d']
// BB 0x1409f3870-0x1409f3873 size=3 type=0 succ=['0x1409f3873'] pred=['0x1409efa33']
// BB 0x1409f3873-0x1409f3881 size=14 type=0 succ=['0x1409f3881'] pred=['0x1409f3870', '0x1409f87a1']
// BB 0x1409f3881-0x1409f3890 size=15 type=4 succ=[] pred=['0x1409f3873']
// BB 0x1409f3891-0x1409f3896 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3896-0x1409f38a0 size=10 type=0 succ=['0x1409f38a0'] pred=['0x1409efbfa']
// BB 0x1409f38a0-0x1409f38b6 size=22 type=4 succ=[] pred=['0x1409f3896', '0x1409f875a']
// BB 0x1409f38b7-0x1409f38bc size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f38bc-0x1409f38c6 size=10 type=0 succ=['0x1409f38c6'] pred=['0x1409ef993']
// BB 0x1409f38c6-0x1409f38dc size=22 type=4 succ=[] pred=['0x1409f38bc', '0x1409f86cc']
// BB 0x1409f38dd-0x1409f38e2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f38e2-0x1409f38ec size=10 type=0 succ=['0x1409f38ec'] pred=['0x1409ef90d']
// BB 0x1409f38ec-0x1409f3902 size=22 type=4 succ=[] pred=['0x1409f38e2', '0x1409f86fe']
// BB 0x1409f3903-0x1409f3908 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3908-0x1409f390b size=3 type=0 succ=['0x1409f390b'] pred=['0x1409f236a']
// BB 0x1409f390b-0x1409f3912 size=7 type=0 succ=['0x1409f3912'] pred=['0x1409f23a3', '0x1409f3908']
// BB 0x1409f3912-0x1409f391d size=11 type=4 succ=[] pred=['0x1409f390b']
// BB 0x1409f391e-0x1409f3923 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3923-0x1409f3939 size=22 type=0 succ=['0x1409f3939'] pred=['0x1409f3842']
// BB 0x1409f3939-0x1409f3940 size=7 type=0 succ=['0x1409f3940'] pred=['0x1409f385a', '0x1409f3923']
// BB 0x1409f3940-0x1409f3947 size=7 type=0 succ=['0x1409f3947'] pred=['0x1409f37d9', '0x1409f37f5', '0x1409f3816', '0x1409f3822', '0x1409f3939']
// BB 0x1409f3947-0x1409f3960 size=25 type=0 succ=['0x1409f3960'] pred=['0x1409f3940']
// BB 0x1409f3960-0x1409f398e size=46 type=0 succ=['0x1409f398e'] pred=['0x1409f3947']
// BB 0x1409f398e-0x1409f39b0 size=34 type=0 succ=['0x1409f39b0', '0x1409f3ab5'] pred=['0x1409f37a4', '0x1409f3960']
// BB 0x1409f39b0-0x1409f39c3 size=19 type=1 succ=['0x1409f39c3', '0x1409f39df', '0x1409f39fd', '0x1409f3a06', '0x1409f3a23'] pred=['0x1409f398e']
// BB 0x1409f39c3-0x1409f39df size=28 type=0 succ=['0x1409f3a67'] pred=['0x1409f39b0']
// BB 0x1409f39df-0x1409f39fd size=30 type=0 succ=['0x1409f3a67'] pred=['0x1409f39b0']
// BB 0x1409f39fd-0x1409f3a06 size=9 type=0 succ=['0x1409f3a67'] pred=['0x1409f39b0']
// BB 0x1409f3a06-0x1409f3a23 size=29 type=0 succ=['0x1409f3a67'] pred=['0x1409f39b0']
// BB 0x1409f3a23-0x1409f3a2a size=7 type=0 succ=['0x1409f3a2a', '0x1409f3a4a'] pred=['0x1409f39b0']
// BB 0x1409f3a2a-0x1409f3a37 size=13 type=0 succ=['0x1409f3a37', '0x1409f7f7f'] pred=['0x1409f3a23']
// BB 0x1409f3a37-0x1409f3a4a size=19 type=0 succ=['0x1409f3a60'] pred=['0x1409f3a2a']
// BB 0x1409f3a4a-0x1409f3a60 size=22 type=0 succ=['0x1409f3a60'] pred=['0x1409f3a23']
// BB 0x1409f3a60-0x1409f3a67 size=7 type=0 succ=['0x1409f3a67'] pred=['0x1409f3a37', '0x1409f3a4a']
// BB 0x1409f3a67-0x1409f3a6e size=7 type=0 succ=['0x1409f3a6e'] pred=['0x1409f39c3', '0x1409f39df', '0x1409f39fd', '0x1409f3a06', '0x1409f3a60']
// BB 0x1409f3a6e-0x1409f3a87 size=25 type=0 succ=['0x1409f3a87'] pred=['0x1409f3a67']
// BB 0x1409f3a87-0x1409f3ab5 size=46 type=0 succ=['0x1409f3ab5'] pred=['0x1409f3a6e']
// BB 0x1409f3ab5-0x1409f3ad7 size=34 type=0 succ=['0x1409f3ad7', '0x1409f3bdc'] pred=['0x1409f398e', '0x1409f3a87']
// BB 0x1409f3ad7-0x1409f3aea size=19 type=1 succ=['0x1409f3aea', '0x1409f3b06', '0x1409f3b24', '0x1409f3b2d', '0x1409f3b4a'] pred=['0x1409f3ab5']
// BB 0x1409f3aea-0x1409f3b06 size=28 type=0 succ=['0x1409f3b8e'] pred=['0x1409f3ad7']
// BB 0x1409f3b06-0x1409f3b24 size=30 type=0 succ=['0x1409f3b8e'] pred=['0x1409f3ad7']
// BB 0x1409f3b24-0x1409f3b2d size=9 type=0 succ=['0x1409f3b8e'] pred=['0x1409f3ad7']
// BB 0x1409f3b2d-0x1409f3b4a size=29 type=0 succ=['0x1409f3b8e'] pred=['0x1409f3ad7']
// BB 0x1409f3b4a-0x1409f3b51 size=7 type=0 succ=['0x1409f3b51', '0x1409f3b71'] pred=['0x1409f3ad7']
// BB 0x1409f3b51-0x1409f3b5e size=13 type=0 succ=['0x1409f3b5e', '0x1409f7f91'] pred=['0x1409f3b4a']
// BB 0x1409f3b5e-0x1409f3b71 size=19 type=0 succ=['0x1409f3b87'] pred=['0x1409f3b51']
// BB 0x1409f3b71-0x1409f3b87 size=22 type=0 succ=['0x1409f3b87'] pred=['0x1409f3b4a']
// BB 0x1409f3b87-0x1409f3b8e size=7 type=0 succ=['0x1409f3b8e'] pred=['0x1409f3b5e', '0x1409f3b71']
// BB 0x1409f3b8e-0x1409f3b95 size=7 type=0 succ=['0x1409f3b95'] pred=['0x1409f3aea', '0x1409f3b06', '0x1409f3b24', '0x1409f3b2d', '0x1409f3b87']
// BB 0x1409f3b95-0x1409f3bae size=25 type=0 succ=['0x1409f3bae'] pred=['0x1409f3b8e']
// BB 0x1409f3bae-0x1409f3bdc size=46 type=0 succ=['0x1409f3bdc'] pred=['0x1409f3b95']
// BB 0x1409f3bdc-0x1409f3bfe size=34 type=0 succ=['0x1409f3bfe', '0x1409f3d03'] pred=['0x1409f3ab5', '0x1409f3bae']
// BB 0x1409f3bfe-0x1409f3c11 size=19 type=1 succ=['0x1409f3c11', '0x1409f3c2d', '0x1409f3c4b', '0x1409f3c54', '0x1409f3c71'] pred=['0x1409f3bdc']
// BB 0x1409f3c11-0x1409f3c2d size=28 type=0 succ=['0x1409f3cb5'] pred=['0x1409f3bfe']
// BB 0x1409f3c2d-0x1409f3c4b size=30 type=0 succ=['0x1409f3cb5'] pred=['0x1409f3bfe']
// BB 0x1409f3c4b-0x1409f3c54 size=9 type=0 succ=['0x1409f3cb5'] pred=['0x1409f3bfe']
// BB 0x1409f3c54-0x1409f3c71 size=29 type=0 succ=['0x1409f3cb5'] pred=['0x1409f3bfe']
// BB 0x1409f3c71-0x1409f3c78 size=7 type=0 succ=['0x1409f3c78', '0x1409f3c98'] pred=['0x1409f3bfe']
// BB 0x1409f3c78-0x1409f3c85 size=13 type=0 succ=['0x1409f3c85', '0x1409f7fa3'] pred=['0x1409f3c71']
// BB 0x1409f3c85-0x1409f3c98 size=19 type=0 succ=['0x1409f3cae'] pred=['0x1409f3c78']
// BB 0x1409f3c98-0x1409f3cae size=22 type=0 succ=['0x1409f3cae'] pred=['0x1409f3c71']
// BB 0x1409f3cae-0x1409f3cb5 size=7 type=0 succ=['0x1409f3cb5'] pred=['0x1409f3c85', '0x1409f3c98']
// BB 0x1409f3cb5-0x1409f3cbc size=7 type=0 succ=['0x1409f3cbc'] pred=['0x1409f3c11', '0x1409f3c2d', '0x1409f3c4b', '0x1409f3c54', '0x1409f3cae']
// BB 0x1409f3cbc-0x1409f3cd5 size=25 type=0 succ=['0x1409f3cd5'] pred=['0x1409f3cb5']
// BB 0x1409f3cd5-0x1409f3d03 size=46 type=0 succ=['0x1409f3d03'] pred=['0x1409f3cbc']
// BB 0x1409f3d03-0x1409f3d28 size=37 type=0 succ=['0x1409f3d28', '0x1409f3fbf'] pred=['0x1409f3bdc', '0x1409f3cd5']
// BB 0x1409f3d28-0x1409f3d40 size=24 type=0 succ=['0x1409f3d40', '0x1409f3d6f'] pred=['0x1409f3d03']
// BB 0x1409f3d40-0x1409f3d53 size=19 type=1 succ=['0x1409f3d53', '0x1409f3d9e', '0x1409f3de0', '0x1409f3df8', '0x1409f3e38'] pred=['0x1409f3d28']
// BB 0x1409f3d53-0x1409f3d6f size=28 type=0 succ=['0x1409f3f22'] pred=['0x1409f3d40']
// BB 0x1409f3d6f-0x1409f3d82 size=19 type=1 succ=['0x1409f3d82', '0x1409f3dbf', '0x1409f3dec', '0x1409f3e18', '0x1409f3e66'] pred=['0x1409f3d28']
// BB 0x1409f3d82-0x1409f3d9e size=28 type=0 succ=['0x1409f3f71'] pred=['0x1409f3d6f']
// BB 0x1409f3d9e-0x1409f3dbf size=33 type=0 succ=['0x1409f3f22'] pred=['0x1409f3d40']
// BB 0x1409f3dbf-0x1409f3de0 size=33 type=0 succ=['0x1409f3f71'] pred=['0x1409f3d6f']
// BB 0x1409f3de0-0x1409f3dec size=12 type=0 succ=['0x1409f3f22'] pred=['0x1409f3d40']
// BB 0x1409f3dec-0x1409f3df8 size=12 type=0 succ=['0x1409f3f71'] pred=['0x1409f3d6f']
// BB 0x1409f3df8-0x1409f3e18 size=32 type=0 succ=['0x1409f3f22'] pred=['0x1409f3d40']
// BB 0x1409f3e18-0x1409f3e38 size=32 type=0 succ=['0x1409f3f71'] pred=['0x1409f3d6f']
// BB 0x1409f3e38-0x1409f3e43 size=11 type=0 succ=['0x1409f3e43', '0x1409f3f05'] pred=['0x1409f3d40']
// BB 0x1409f3e43-0x1409f3e50 size=13 type=0 succ=['0x1409f3e50', '0x1409f809d'] pred=['0x1409f3e38']
// BB 0x1409f3e50-0x1409f3e66 size=22 type=0 succ=['0x1409f3f1b'] pred=['0x1409f3e43']
// BB 0x1409f3e66-0x1409f3e71 size=11 type=0 succ=['0x1409f3e71', '0x1409f3f54'] pred=['0x1409f3d6f']
// BB 0x1409f3e71-0x1409f3e7e size=13 type=0 succ=['0x1409f3e7e', '0x1409f80af'] pred=['0x1409f3e66']
// BB 0x1409f3e7e-0x1409f3e94 size=22 type=0 succ=['0x1409f3f6a'] pred=['0x1409f3e71']
// BB 0x1409f3e94-0x1409f3e9e size=10 type=0 succ=['0x1409f3e9e'] pred=['0x1409f0117']
// BB 0x1409f3e9e-0x1409f3ea9 size=11 type=0 succ=['0x1409f3ea9'] pred=['0x1409f3e94', '0x1409f87ad']
// BB 0x1409f3ea9-0x1409f3eb1 size=8 type=4 succ=[] pred=['0x1409f3e9e']
// BB 0x1409f3eb2-0x1409f3eb7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3eb7-0x1409f3eba size=3 type=0 succ=['0x1409f3eba'] pred=['0x1409f0f5f']
// BB 0x1409f3eba-0x1409f3ec1 size=7 type=0 succ=['0x1409f3ec1'] pred=['0x1409f0f9c', '0x1409f3eb7']
// BB 0x1409f3ec1-0x1409f3ecc size=11 type=4 succ=[] pred=['0x1409f3eba']
// BB 0x1409f3ecd-0x1409f3ed2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3ed2-0x1409f3ed5 size=3 type=0 succ=['0x1409f3ed5'] pred=['0x1409f0596']
// BB 0x1409f3ed5-0x1409f3ee4 size=15 type=4 succ=[] pred=['0x1409f3ed2', '0x1409f8848']
// BB 0x1409f3ee5-0x1409f3eea size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3eea-0x1409f3eed size=3 type=0 succ=['0x1409f3eed'] pred=['0x1409f2d5b']
// BB 0x1409f3eed-0x1409f3ef4 size=7 type=0 succ=['0x1409f3ef4'] pred=['0x1409f2d89', '0x1409f3eea']
// BB 0x1409f3ef4-0x1409f3eff size=11 type=4 succ=[] pred=['0x1409f3eed']
// BB 0x1409f3f00-0x1409f3f05 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f3f05-0x1409f3f1b size=22 type=0 succ=['0x1409f3f1b'] pred=['0x1409f3e38']
// BB 0x1409f3f1b-0x1409f3f22 size=7 type=0 succ=['0x1409f3f22'] pred=['0x1409f3e50', '0x1409f3f05']
// BB 0x1409f3f22-0x1409f3f29 size=7 type=0 succ=['0x1409f3f29'] pred=['0x1409f3d53', '0x1409f3d9e', '0x1409f3de0', '0x1409f3df8', '0x1409f3f1b']
// BB 0x1409f3f29-0x1409f3f42 size=25 type=0 succ=['0x1409f3f42'] pred=['0x1409f3f22']
// BB 0x1409f3f42-0x1409f3f54 size=18 type=0 succ=['0x1409f3fa1'] pred=['0x1409f3f29']
// BB 0x1409f3f54-0x1409f3f6a size=22 type=0 succ=['0x1409f3f6a'] pred=['0x1409f3e66']
// BB 0x1409f3f6a-0x1409f3f71 size=7 type=0 succ=['0x1409f3f71'] pred=['0x1409f3e7e', '0x1409f3f54']
// BB 0x1409f3f71-0x1409f3f78 size=7 type=0 succ=['0x1409f3f78'] pred=['0x1409f3d82', '0x1409f3dbf', '0x1409f3dec', '0x1409f3e18', '0x1409f3f6a']
// BB 0x1409f3f78-0x1409f3f91 size=25 type=0 succ=['0x1409f3f91'] pred=['0x1409f3f71']
// BB 0x1409f3f91-0x1409f3fa1 size=16 type=0 succ=['0x1409f3fa1'] pred=['0x1409f3f78']
// BB 0x1409f3fa1-0x1409f3fbf size=30 type=0 succ=['0x1409f3fbf'] pred=['0x1409f3f42', '0x1409f3f91']
// BB 0x1409f3fbf-0x1409f3fe1 size=34 type=0 succ=['0x1409f3fe1', '0x1409f40e6'] pred=['0x1409f3d03', '0x1409f3fa1']
// BB 0x1409f3fe1-0x1409f3ff4 size=19 type=1 succ=['0x1409f3ff4', '0x1409f4010', '0x1409f402e', '0x1409f4037', '0x1409f4054'] pred=['0x1409f3fbf']
// BB 0x1409f3ff4-0x1409f4010 size=28 type=0 succ=['0x1409f4098'] pred=['0x1409f3fe1']
// BB 0x1409f4010-0x1409f402e size=30 type=0 succ=['0x1409f4098'] pred=['0x1409f3fe1']
// BB 0x1409f402e-0x1409f4037 size=9 type=0 succ=['0x1409f4098'] pred=['0x1409f3fe1']
// BB 0x1409f4037-0x1409f4054 size=29 type=0 succ=['0x1409f4098'] pred=['0x1409f3fe1']
// BB 0x1409f4054-0x1409f405b size=7 type=0 succ=['0x1409f405b', '0x1409f407b'] pred=['0x1409f3fe1']
// BB 0x1409f405b-0x1409f4068 size=13 type=0 succ=['0x1409f4068', '0x1409f7fb5'] pred=['0x1409f4054']
// BB 0x1409f4068-0x1409f407b size=19 type=0 succ=['0x1409f4091'] pred=['0x1409f405b']
// BB 0x1409f407b-0x1409f4091 size=22 type=0 succ=['0x1409f4091'] pred=['0x1409f4054']
// BB 0x1409f4091-0x1409f4098 size=7 type=0 succ=['0x1409f4098'] pred=['0x1409f4068', '0x1409f407b']
// BB 0x1409f4098-0x1409f409f size=7 type=0 succ=['0x1409f409f'] pred=['0x1409f3ff4', '0x1409f4010', '0x1409f402e', '0x1409f4037', '0x1409f4091']
// BB 0x1409f409f-0x1409f40b8 size=25 type=0 succ=['0x1409f40b8'] pred=['0x1409f4098']
// BB 0x1409f40b8-0x1409f40e6 size=46 type=0 succ=['0x1409f40e6'] pred=['0x1409f409f']
// BB 0x1409f40e6-0x1409f4108 size=34 type=0 succ=['0x1409f4108', '0x1409f420d'] pred=['0x1409f3fbf', '0x1409f40b8']
// BB 0x1409f4108-0x1409f411b size=19 type=1 succ=['0x1409f411b', '0x1409f4137', '0x1409f4155', '0x1409f415e', '0x1409f417b'] pred=['0x1409f40e6']
// BB 0x1409f411b-0x1409f4137 size=28 type=0 succ=['0x1409f41bf'] pred=['0x1409f4108']
// BB 0x1409f4137-0x1409f4155 size=30 type=0 succ=['0x1409f41bf'] pred=['0x1409f4108']
// BB 0x1409f4155-0x1409f415e size=9 type=0 succ=['0x1409f41bf'] pred=['0x1409f4108']
// BB 0x1409f415e-0x1409f417b size=29 type=0 succ=['0x1409f41bf'] pred=['0x1409f4108']
// BB 0x1409f417b-0x1409f4182 size=7 type=0 succ=['0x1409f4182', '0x1409f41a2'] pred=['0x1409f4108']
// BB 0x1409f4182-0x1409f418f size=13 type=0 succ=['0x1409f418f', '0x1409f7fc7'] pred=['0x1409f417b']
// BB 0x1409f418f-0x1409f41a2 size=19 type=0 succ=['0x1409f41b8'] pred=['0x1409f4182']
// BB 0x1409f41a2-0x1409f41b8 size=22 type=0 succ=['0x1409f41b8'] pred=['0x1409f417b']
// BB 0x1409f41b8-0x1409f41bf size=7 type=0 succ=['0x1409f41bf'] pred=['0x1409f418f', '0x1409f41a2']
// BB 0x1409f41bf-0x1409f41c6 size=7 type=0 succ=['0x1409f41c6'] pred=['0x1409f411b', '0x1409f4137', '0x1409f4155', '0x1409f415e', '0x1409f41b8']
// BB 0x1409f41c6-0x1409f41df size=25 type=0 succ=['0x1409f41df'] pred=['0x1409f41bf']
// BB 0x1409f41df-0x1409f420d size=46 type=0 succ=['0x1409f420d'] pred=['0x1409f41c6']
// BB 0x1409f420d-0x1409f4220 size=19 type=0 succ=['0x1409f4220', '0x1409f7e28'] pred=['0x1409f40e6', '0x1409f41df']
// BB 0x1409f4220-0x1409f4227 size=7 type=0 succ=['0x1409f4227'] pred=['0x1409f420d']
// BB 0x1409f4227-0x1409f425c size=53 type=0 succ=['0x1409f425c'] pred=['0x1409f4220', '0x1409f7e28']
// BB 0x1409f425c-0x1409f427e size=34 type=0 succ=['0x1409f427e', '0x1409f5ba3'] pred=['0x1409f4227']
// BB 0x1409f427e-0x1409f4287 size=9 type=0 succ=['0x1409f4287', '0x1409f5ba3'] pred=['0x1409f425c']
// BB 0x1409f4287-0x1409f42b2 size=43 type=0 succ=['0x1409f42b2'] pred=['0x1409f427e']
// BB 0x1409f42b2-0x1409f42c2 size=16 type=0 succ=['0x1409f42c2', '0x1409f7e66'] pred=['0x1409f4287']
// BB 0x1409f42c2-0x1409f42cc size=10 type=0 succ=['0x1409f42cc'] pred=['0x1409f42b2']
// BB 0x1409f42cc-0x1409f4320 size=84 type=0 succ=['0x1409f4320'] pred=['0x1409f42c2', '0x1409f7e6d']
// BB 0x1409f4320-0x1409f4329 size=9 type=0 succ=['0x1409f4329', '0x1409f45b9'] pred=['0x1409f42cc', '0x1409f4333', '0x1409f434d', '0x1409f4352', '0x1409f4359', '0x1409f437a', '0x1409f4397', '0x1409f43b0']
// BB 0x1409f4329-0x1409f4333 size=10 type=0 succ=['0x1409f4333'] pred=['0x1409f4320']
// BB 0x1409f4333-0x1409f434d size=26 type=0 succ=['0x1409f4320', '0x1409f434d'] pred=['0x1409f4329']
// BB 0x1409f434d-0x1409f4352 size=5 type=0 succ=['0x1409f4320', '0x1409f4352'] pred=['0x1409f4333']
// BB 0x1409f4352-0x1409f4359 size=7 type=0 succ=['0x1409f4320', '0x1409f4359'] pred=['0x1409f434d']
// BB 0x1409f4359-0x1409f437a size=33 type=0 succ=['0x1409f4320', '0x1409f437a'] pred=['0x1409f4352']
// BB 0x1409f437a-0x1409f4397 size=29 type=0 succ=['0x1409f4320', '0x1409f4397'] pred=['0x1409f4359']
// BB 0x1409f4397-0x1409f439c size=5 type=0 succ=['0x1409f4320', '0x1409f439c'] pred=['0x1409f437a']
// BB 0x1409f439c-0x1409f43b0 size=20 type=0 succ=['0x1409f43b0'] pred=['0x1409f4397']
// BB 0x1409f43b0-0x1409f43b9 size=9 type=0 succ=['0x1409f4320', '0x1409f43b9'] pred=['0x1409f439c', '0x1409f43d5', '0x1409f43de', '0x1409f4576']
// BB 0x1409f43b9-0x1409f43d5 size=28 type=0 succ=['0x1409f43d5'] pred=['0x1409f43b0']
// BB 0x1409f43d5-0x1409f43de size=9 type=0 succ=['0x1409f43b0', '0x1409f43de'] pred=['0x1409f43b9']
// BB 0x1409f43de-0x1409f43e3 size=5 type=0 succ=['0x1409f43b0', '0x1409f43e3'] pred=['0x1409f43d5']
// BB 0x1409f43e3-0x1409f43f0 size=13 type=0 succ=['0x1409f43f0', '0x1409f7dbc'] pred=['0x1409f43de']
// BB 0x1409f43f0-0x1409f43f2 size=2 type=0 succ=['0x1409f43f2', '0x1409f4450'] pred=['0x1409f43e3']
// BB 0x1409f43f2-0x1409f4423 size=49 type=0 succ=['0x1409f4423', '0x1409f8cdf'] pred=['0x1409f43f0']
// BB 0x1409f4423-0x1409f4450 size=45 type=0 succ=['0x1409f4455'] pred=['0x1409f43f2']
// BB 0x1409f4450-0x1409f4455 size=5 type=0 succ=['0x1409f4455'] pred=['0x1409f43f0']
// BB 0x1409f4455-0x1409f4478 size=35 type=0 succ=['0x1409f4478'] pred=['0x1409f4423', '0x1409f4450']
// BB 0x1409f4478-0x1409f44ab size=51 type=0 succ=['0x1409f44ab', '0x1409f4576'] pred=['0x1409f4455']
// BB 0x1409f44ab-0x1409f44ed size=66 type=0 succ=['0x1409f44ed', '0x1409f457f'] pred=['0x1409f4478']
// BB 0x1409f44ed-0x1409f4505 size=24 type=0 succ=['0x1409f4505', '0x1409f45a2'] pred=['0x1409f44ab', '0x1409f4584']
// BB 0x1409f4505-0x1409f4576 size=113 type=0 succ=['0x1409f4576'] pred=['0x1409f44ed', '0x1409f45a2']
// BB 0x1409f4576-0x1409f457f size=9 type=0 succ=['0x1409f43b0'] pred=['0x1409f4478', '0x1409f4505']
// BB 0x1409f457f-0x1409f4584 size=5 type=0 succ=['0x1409f4584'] pred=['0x1409f44ab']
// BB 0x1409f4584-0x1409f45a0 size=28 type=0 succ=['0x1409f44ed', '0x1409f45a0'] pred=['0x1409f457f', '0x1409f45a0']
// BB 0x1409f45a0-0x1409f45a2 size=2 type=0 succ=['0x1409f4584'] pred=['0x1409f4584']
// BB 0x1409f45a2-0x1409f45b9 size=23 type=0 succ=['0x1409f4505'] pred=['0x1409f44ed']
// BB 0x1409f45b9-0x1409f45c0 size=7 type=0 succ=['0x1409f45c3'] pred=['0x1409f4320']
// BB 0x1409f45c0-0x1409f45c3 size=3 type=0 succ=['0x1409f45c3'] pred=['0x1409f46ad', '0x1409f46c0']
// BB 0x1409f45c3-0x1409f45cc size=9 type=0 succ=['0x1409f45cc', '0x1409f558e'] pred=['0x1409f45b9', '0x1409f45c0', '0x1409f473f', '0x1409f5586']
// BB 0x1409f45cc-0x1409f45f1 size=37 type=0 succ=['0x1409f45f1', '0x1409f4622'] pred=['0x1409f45c3']
// BB 0x1409f45f1-0x1409f45f6 size=5 type=0 succ=['0x1409f45f6', '0x1409f4622'] pred=['0x1409f45cc']
// BB 0x1409f45f6-0x1409f45fd size=7 type=0 succ=['0x1409f45fd', '0x1409f4622'] pred=['0x1409f45f1']
// BB 0x1409f45fd-0x1409f4622 size=37 type=0 succ=['0x1409f4622', '0x1409f46da'] pred=['0x1409f45f6']
// BB 0x1409f4622-0x1409f4639 size=23 type=0 succ=['0x1409f4639'] pred=['0x1409f45cc', '0x1409f45f1', '0x1409f45f6', '0x1409f45fd']
// BB 0x1409f4639-0x1409f468f size=86 type=0 succ=['0x1409f468f', '0x1409f47ee'] pred=['0x1409f4622']
// BB 0x1409f468f-0x1409f4694 size=5 type=0 succ=['0x1409f4694', '0x1409f46ad'] pred=['0x1409f4639']
// BB 0x1409f4694-0x1409f46ad size=25 type=0 succ=['0x1409f46ad'] pred=['0x1409f468f', '0x1409f4810']
// BB 0x1409f46ad-0x1409f46c0 size=19 type=0 succ=['0x1409f45c0', '0x1409f46c0'] pred=['0x1409f468f', '0x1409f4694']
// BB 0x1409f46c0-0x1409f46da size=26 type=0 succ=['0x1409f45c0'] pred=['0x1409f46ad']
// BB 0x1409f46da-0x1409f46e1 size=7 type=0 succ=['0x1409f46e1'] pred=['0x1409f45fd']
// BB 0x1409f46e1-0x1409f4700 size=31 type=0 succ=['0x1409f4700', '0x1409f470f'] pred=['0x1409f46da']
// BB 0x1409f4700-0x1409f4705 size=5 type=0 succ=['0x1409f4705', '0x1409f470f'] pred=['0x1409f46e1']
// BB 0x1409f4705-0x1409f470f size=10 type=0 succ=['0x1409f4711'] pred=['0x1409f4700']
// BB 0x1409f470f-0x1409f4711 size=2 type=0 succ=['0x1409f4711'] pred=['0x1409f46e1', '0x1409f4700']
// BB 0x1409f4711-0x1409f473a size=41 type=0 succ=['0x1409f473a', '0x1409f473f'] pred=['0x1409f4705', '0x1409f470f']
// BB 0x1409f473a-0x1409f473f size=5 type=0 succ=['0x1409f473f', '0x1409f4747'] pred=['0x1409f4711']
// BB 0x1409f473f-0x1409f4747 size=8 type=0 succ=['0x1409f45c3'] pred=['0x1409f4711', '0x1409f473a']
// BB 0x1409f4747-0x1409f4751 size=10 type=0 succ=['0x1409f4751', '0x1409f477c'] pred=['0x1409f473a']
// BB 0x1409f4751-0x1409f4756 size=5 type=0 succ=['0x1409f4756', '0x1409f478d'] pred=['0x1409f4747']
// BB 0x1409f4756-0x1409f477c size=38 type=0 succ=['0x1409f4863'] pred=['0x1409f4751']
// BB 0x1409f477c-0x1409f478d size=17 type=0 succ=['0x1409f478d', '0x1409f481c'] pred=['0x1409f4747']
// BB 0x1409f478d-0x1409f47ee size=97 type=0 succ=['0x1409f4863'] pred=['0x1409f4751', '0x1409f477c']
// BB 0x1409f47ee-0x1409f4810 size=34 type=0 succ=['0x1409f4810'] pred=['0x1409f4639']
// BB 0x1409f4810-0x1409f481c size=12 type=0 succ=['0x1409f4694'] pred=['0x1409f47ee']
// BB 0x1409f481c-0x1409f483a size=30 type=0 succ=['0x1409f483a', '0x1409f8cb6'] pred=['0x1409f477c']
// BB 0x1409f483a-0x1409f4863 size=41 type=0 succ=['0x1409f4863'] pred=['0x1409f481c']
// BB 0x1409f4863-0x1409f487e size=27 type=0 succ=['0x1409f487e', '0x1409f4890'] pred=['0x1409f4756', '0x1409f478d', '0x1409f483a']
// BB 0x1409f487e-0x1409f4883 size=5 type=0 succ=['0x1409f5568'] pred=['0x1409f4863']
// BB 0x1409f4883-0x1409f4890 size=13 type=0 succ=['0x1409f4890', '0x1409f5568'] pred=['0x1409f4890', '0x1409f48aa', '0x1409f54fb', '0x1409f5539']
// BB 0x1409f4890-0x1409f48aa size=26 type=0 succ=['0x1409f4883', '0x1409f48aa'] pred=['0x1409f4863', '0x1409f4883', '0x1409f5549']
// BB 0x1409f48aa-0x1409f48af size=5 type=0 succ=['0x1409f4883', '0x1409f48af'] pred=['0x1409f4890']
// BB 0x1409f48af-0x1409f48cf size=32 type=0 succ=['0x1409f48cf', '0x1409f4957'] pred=['0x1409f48aa']
// BB 0x1409f48cf-0x1409f48d4 size=5 type=0 succ=['0x1409f48d4', '0x1409f48e7'] pred=['0x1409f48af']
// BB 0x1409f48d4-0x1409f48e7 size=19 type=0 succ=['0x1409f48e7', '0x1409f4957'] pred=['0x1409f48cf']
// BB 0x1409f48e7-0x1409f4937 size=80 type=0 succ=['0x1409f4937'] pred=['0x1409f48cf', '0x1409f48d4']
// BB 0x1409f4937-0x1409f4957 size=32 type=0 succ=['0x1409f49b1'] pred=['0x1409f48e7']
// BB 0x1409f4957-0x1409f4960 size=9 type=0 succ=['0x1409f4960', '0x1409f7d94'] pred=['0x1409f48af', '0x1409f48d4']
// BB 0x1409f4960-0x1409f4962 size=2 type=0 succ=['0x1409f4962', '0x1409f4990'] pred=['0x1409f4957']
// BB 0x1409f4962-0x1409f497d size=27 type=0 succ=['0x1409f497d', '0x1409f8c86'] pred=['0x1409f4960']
// BB 0x1409f497d-0x1409f4990 size=19 type=0 succ=['0x1409f4995'] pred=['0x1409f4962']
// BB 0x1409f4990-0x1409f4995 size=5 type=0 succ=['0x1409f4995'] pred=['0x1409f4960']
// BB 0x1409f4995-0x1409f49b1 size=28 type=0 succ=['0x1409f49b1'] pred=['0x1409f497d', '0x1409f4990']
// BB 0x1409f49b1-0x1409f49bf size=14 type=0 succ=['0x1409f49bf', '0x1409f4aa7'] pred=['0x1409f4937', '0x1409f4995']
// BB 0x1409f49bf-0x1409f4a02 size=67 type=0 succ=['0x1409f4a02'] pred=['0x1409f49b1']
// BB 0x1409f4a02-0x1409f4a1f size=29 type=0 succ=['0x1409f4a1f', '0x1409f4a82'] pred=['0x1409f49bf', '0x1409f4a97']
// BB 0x1409f4a1f-0x1409f4a34 size=21 type=0 succ=['0x1409f4a34'] pred=['0x1409f4a02']
// BB 0x1409f4a34-0x1409f4a4c size=24 type=0 succ=['0x1409f4a4c', '0x1409f4a5f'] pred=['0x1409f4a1f', '0x1409f4a5f']
// BB 0x1409f4a4c-0x1409f4a5f size=19 type=0 succ=['0x1409f4a5f', '0x1409f4ab0'] pred=['0x1409f4a34']
// BB 0x1409f4a5f-0x1409f4a82 size=35 type=0 succ=['0x1409f4a34', '0x1409f4a82'] pred=['0x1409f4a34', '0x1409f4a4c']
// BB 0x1409f4a82-0x1409f4a97 size=21 type=0 succ=['0x1409f4a97', '0x1409f4aa7'] pred=['0x1409f4a02', '0x1409f4a5f']
// BB 0x1409f4a97-0x1409f4aa7 size=16 type=0 succ=['0x1409f4a02'] pred=['0x1409f4a82']
// BB 0x1409f4aa7-0x1409f4ab0 size=9 type=0 succ=['0x1409f4ac5'] pred=['0x1409f49b1', '0x1409f4a82']
// BB 0x1409f4ab0-0x1409f4ac5 size=21 type=0 succ=['0x1409f4ac5', '0x1409f4b2f'] pred=['0x1409f4a4c']
// BB 0x1409f4ac5-0x1409f4ad1 size=12 type=0 succ=['0x1409f4ad1', '0x1409f4b2f'] pred=['0x1409f4aa7', '0x1409f4ab0']
// BB 0x1409f4ad1-0x1409f4ad6 size=5 type=0 succ=['0x1409f4ad6', '0x1409f4ae2'] pred=['0x1409f4ac5']
// BB 0x1409f4ad6-0x1409f4adb size=5 type=0 succ=['0x1409f4adb', '0x1409f4af5'] pred=['0x1409f4ad1']
// BB 0x1409f4adb-0x1409f4ae2 size=7 type=0 succ=['0x1409f4b21'] pred=['0x1409f4ad6']
// BB 0x1409f4ae2-0x1409f4af5 size=19 type=0 succ=['0x1409f4af5', '0x1409f4b2f'] pred=['0x1409f4ad1']
// BB 0x1409f4af5-0x1409f4b10 size=27 type=0 succ=['0x1409f4b10', '0x1409f8c34'] pred=['0x1409f4ad6', '0x1409f4ae2']
// BB 0x1409f4b10-0x1409f4b21 size=17 type=0 succ=['0x1409f4b21'] pred=['0x1409f4af5']
// BB 0x1409f4b21-0x1409f4b2f size=14 type=0 succ=['0x1409f4b4b'] pred=['0x1409f4adb', '0x1409f4b10']
// BB 0x1409f4b2f-0x1409f4b36 size=7 type=0 succ=['0x1409f4b36'] pred=['0x1409f4ab0', '0x1409f4ac5', '0x1409f4ae2']
// BB 0x1409f4b36-0x1409f4b4b size=21 type=0 succ=['0x1409f4b4b'] pred=['0x1409f4b2f']
// BB 0x1409f4b4b-0x1409f4b54 size=9 type=0 succ=['0x1409f4b54', '0x1409f4b6f'] pred=['0x1409f4b21', '0x1409f4b36']
// BB 0x1409f4b54-0x1409f4b6f size=27 type=0 succ=['0x1409f4b6f', '0x1409f4e48'] pred=['0x1409f4b4b']
// BB 0x1409f4b6f-0x1409f4b7d size=14 type=0 succ=['0x1409f4b7d'] pred=['0x1409f4b4b', '0x1409f4b54']
// BB 0x1409f4b7d-0x1409f4be9 size=108 type=0 succ=['0x1409f4be9', '0x1409f4c00'] pred=['0x1409f4b6f']
// BB 0x1409f4be9-0x1409f4bee size=5 type=0 succ=['0x1409f4bee', '0x1409f4c00'] pred=['0x1409f4b7d']
// BB 0x1409f4bee-0x1409f4c00 size=18 type=0 succ=['0x1409f4c00'] pred=['0x1409f4be9']
// BB 0x1409f4c00-0x1409f4c02 size=2 type=0 succ=['0x1409f4c02'] pred=['0x1409f4b7d', '0x1409f4be9', '0x1409f4bee']
// BB 0x1409f4c02-0x1409f4c29 size=39 type=0 succ=['0x1409f4c29', '0x1409f4c34'] pred=['0x1409f4c00', '0x1409f4e48']
// BB 0x1409f4c29-0x1409f4c2e size=5 type=0 succ=['0x1409f4c2e', '0x1409f4c38'] pred=['0x1409f4c02']
// BB 0x1409f4c2e-0x1409f4c34 size=6 type=0 succ=['0x1409f4c3a'] pred=['0x1409f4c29']
// BB 0x1409f4c34-0x1409f4c38 size=4 type=0 succ=['0x1409f4c3e'] pred=['0x1409f4c02']
// BB 0x1409f4c38-0x1409f4c3a size=2 type=0 succ=['0x1409f4c3a'] pred=['0x1409f4c29']
// BB 0x1409f4c3a-0x1409f4c3e size=4 type=0 succ=['0x1409f4c3e'] pred=['0x1409f4c2e', '0x1409f4c38']
// BB 0x1409f4c3e-0x1409f4c6b size=45 type=0 succ=['0x1409f4c6b', '0x1409f4c9a'] pred=['0x1409f4c34', '0x1409f4c3a']
// BB 0x1409f4c6b-0x1409f4c7e size=19 type=1 succ=['0x1409f4c7e', '0x1409f4e4f', '0x1409f4e7d', '0x1409f4e86', '0x1409f4eb0'] pred=['0x1409f4c3e']
// BB 0x1409f4c7e-0x1409f4c9a size=28 type=0 succ=['0x1409f4f01'] pred=['0x1409f4c6b']
// BB 0x1409f4c9a-0x1409f4ccd size=51 type=0 succ=['0x1409f4ccd', '0x1409f8ba1'] pred=['0x1409f4c3e']
// BB 0x1409f4ccd-0x1409f4d14 size=71 type=0 succ=['0x1409f4d14', '0x1409f8bb6'] pred=['0x1409f4c9a']
// BB 0x1409f4d14-0x1409f4d44 size=48 type=0 succ=['0x1409f4d44'] pred=['0x1409f4ccd']
// BB 0x1409f4d44-0x1409f4d6f size=43 type=0 succ=['0x1409f4d6f', '0x1409f4d7c'] pred=['0x1409f4d14']
// BB 0x1409f4d6f-0x1409f4d7c size=13 type=0 succ=['0x1409f4d7c'] pred=['0x1409f4d44']
// BB 0x1409f4d7c-0x1409f4d99 size=29 type=0 succ=['0x1409f4d99', '0x1409f8bcb'] pred=['0x1409f4d44', '0x1409f4d6f']
// BB 0x1409f4d99-0x1409f4e11 size=120 type=0 succ=['0x1409f4e11', '0x1409f4e1e'] pred=['0x1409f4d7c']
// BB 0x1409f4e11-0x1409f4e1e size=13 type=0 succ=['0x1409f4e1e'] pred=['0x1409f4d99']
// BB 0x1409f4e1e-0x1409f4e48 size=42 type=0 succ=['0x1409f4f57'] pred=['0x1409f4d99', '0x1409f4e11']
// BB 0x1409f4e48-0x1409f4e4f size=7 type=0 succ=['0x1409f4c02'] pred=['0x1409f4b54']
// BB 0x1409f4e4f-0x1409f4e64 size=21 type=0 succ=['0x1409f4e64'] pred=['0x1409f4c6b']
// BB 0x1409f4e64-0x1409f4e7d size=25 type=0 succ=['0x1409f4f01'] pred=['0x1409f4e4f']
// BB 0x1409f4e7d-0x1409f4e86 size=9 type=0 succ=['0x1409f4f01'] pred=['0x1409f4c6b']
// BB 0x1409f4e86-0x1409f4eb0 size=42 type=0 succ=['0x1409f4f01'] pred=['0x1409f4c6b']
// BB 0x1409f4eb0-0x1409f4eb7 size=7 type=0 succ=['0x1409f4eb7', '0x1409f4ee4'] pred=['0x1409f4c6b']
// BB 0x1409f4eb7-0x1409f4ec4 size=13 type=0 succ=['0x1409f4ec4', '0x1409f84b2'] pred=['0x1409f4eb0']
// BB 0x1409f4ec4-0x1409f4ee4 size=32 type=0 succ=['0x1409f4efa'] pred=['0x1409f4eb7']
// BB 0x1409f4ee4-0x1409f4efa size=22 type=0 succ=['0x1409f4efa'] pred=['0x1409f4eb0']
// BB 0x1409f4efa-0x1409f4f01 size=7 type=0 succ=['0x1409f4f01'] pred=['0x1409f4ec4', '0x1409f4ee4']
// BB 0x1409f4f01-0x1409f4f57 size=86 type=0 succ=['0x1409f4f57'] pred=['0x1409f4c7e', '0x1409f4e64', '0x1409f4e7d', '0x1409f4e86', '0x1409f4efa']
// BB 0x1409f4f57-0x1409f4f65 size=14 type=0 succ=['0x1409f4f65'] pred=['0x1409f4e1e', '0x1409f4f01']
// BB 0x1409f4f65-0x1409f4fa6 size=65 type=0 succ=['0x1409f4fa6', '0x1409f89d0'] pred=['0x1409f4f57']
// BB 0x1409f4fa6-0x1409f4ff6 size=80 type=0 succ=['0x1409f4ff6'] pred=['0x1409f4f65']
// BB 0x1409f4ff6-0x1409f501e size=40 type=0 succ=['0x1409f501e', '0x1409f5039'] pred=['0x1409f4fa6']
// BB 0x1409f501e-0x1409f5039 size=27 type=0 succ=['0x1409f5039'] pred=['0x1409f4ff6']
// BB 0x1409f5039-0x1409f5042 size=9 type=0 succ=['0x1409f5042', '0x1409f5142'] pred=['0x1409f4ff6', '0x1409f501e']
// BB 0x1409f5042-0x1409f5066 size=36 type=0 succ=['0x1409f5066', '0x1409f8ab7'] pred=['0x1409f5039']
// BB 0x1409f5066-0x1409f50a0 size=58 type=0 succ=['0x1409f50a0', '0x1409f7da8'] pred=['0x1409f5042']
// BB 0x1409f50a0-0x1409f50a2 size=2 type=0 succ=['0x1409f50a2', '0x1409f50d0'] pred=['0x1409f5066']
// BB 0x1409f50a2-0x1409f50bd size=27 type=0 succ=['0x1409f50bd', '0x1409f8c97'] pred=['0x1409f50a0']
// BB 0x1409f50bd-0x1409f50d0 size=19 type=0 succ=['0x1409f50d5'] pred=['0x1409f50a2']
// BB 0x1409f50d0-0x1409f50d5 size=5 type=0 succ=['0x1409f50d5'] pred=['0x1409f50a0']
// BB 0x1409f50d5-0x1409f50ff size=42 type=0 succ=['0x1409f50ff'] pred=['0x1409f50bd', '0x1409f50d0']
// BB 0x1409f50ff-0x1409f5127 size=40 type=0 succ=['0x1409f5127', '0x1409f5142'] pred=['0x1409f50d5']
// BB 0x1409f5127-0x1409f5135 size=14 type=0 succ=['0x1409f5135'] pred=['0x1409f50ff']
// BB 0x1409f5135-0x1409f5142 size=13 type=0 succ=['0x1409f5142'] pred=['0x1409f5127']
// BB 0x1409f5142-0x1409f515f size=29 type=0 succ=['0x1409f515f', '0x1409f8a4e'] pred=['0x1409f5039', '0x1409f50ff', '0x1409f5135']
// BB 0x1409f515f-0x1409f51e3 size=132 type=0 succ=['0x1409f51e3', '0x1409f51fe'] pred=['0x1409f5142']
// BB 0x1409f51e3-0x1409f51fe size=27 type=0 succ=['0x1409f51fe'] pred=['0x1409f515f']
// BB 0x1409f51fe-0x1409f522a size=44 type=0 succ=['0x1409f522a', '0x1409f52df'] pred=['0x1409f515f', '0x1409f51e3']
// BB 0x1409f522a-0x1409f5233 size=9 type=0 succ=['0x1409f5233', '0x1409f52df'] pred=['0x1409f51fe']
// BB 0x1409f5233-0x1409f523f size=12 type=0 succ=['0x1409f523f', '0x1409f52df'] pred=['0x1409f522a']
// BB 0x1409f523f-0x1409f525c size=29 type=0 succ=['0x1409f525c', '0x1409f8c63'] pred=['0x1409f5233']
// BB 0x1409f525c-0x1409f52c4 size=104 type=0 succ=['0x1409f52c4', '0x1409f52df'] pred=['0x1409f523f']
// BB 0x1409f52c4-0x1409f52df size=27 type=0 succ=['0x1409f52df'] pred=['0x1409f525c']
// BB 0x1409f52df-0x1409f530c size=45 type=0 succ=['0x1409f530c', '0x1409f8a71'] pred=['0x1409f51fe', '0x1409f522a', '0x1409f5233', '0x1409f525c', '0x1409f52c4']
// BB 0x1409f530c-0x1409f5353 size=71 type=0 succ=['0x1409f5353', '0x1409f8a1d'] pred=['0x1409f52df']
// BB 0x1409f5353-0x1409f5387 size=52 type=0 succ=['0x1409f5387'] pred=['0x1409f530c']
// BB 0x1409f5387-0x1409f53af size=40 type=0 succ=['0x1409f53af', '0x1409f53c3'] pred=['0x1409f5353']
// BB 0x1409f53af-0x1409f53b6 size=7 type=0 succ=['0x1409f53b6'] pred=['0x1409f5387']
// BB 0x1409f53b6-0x1409f53c3 size=13 type=0 succ=['0x1409f53c3'] pred=['0x1409f53af']
// BB 0x1409f53c3-0x1409f53e0 size=29 type=0 succ=['0x1409f53e0', '0x1409f8a32'] pred=['0x1409f5387', '0x1409f53b6']
// BB 0x1409f53e0-0x1409f5430 size=80 type=0 succ=['0x1409f5430'] pred=['0x1409f53c3']
// BB 0x1409f5430-0x1409f5451 size=33 type=0 succ=['0x1409f5451', '0x1409f814d'] pred=['0x1409f53e0']
// BB 0x1409f5451-0x1409f549e size=77 type=0 succ=['0x1409f549e', '0x1409f54ab'] pred=['0x1409f5430']
// BB 0x1409f549e-0x1409f54ab size=13 type=0 succ=['0x1409f54ab'] pred=['0x1409f5451']
// BB 0x1409f54ab-0x1409f54b2 size=7 type=0 succ=['0x1409f54b2'] pred=['0x1409f5451', '0x1409f549e']
// BB 0x1409f54b2-0x1409f54ee size=60 type=0 succ=['0x1409f54ee', '0x1409f54fb'] pred=['0x1409f54ab']
// BB 0x1409f54ee-0x1409f54fb size=13 type=0 succ=['0x1409f54fb'] pred=['0x1409f54b2']
// BB 0x1409f54fb-0x1409f5539 size=62 type=0 succ=['0x1409f4883', '0x1409f5539'] pred=['0x1409f54b2', '0x1409f54ee']
// BB 0x1409f5539-0x1409f5549 size=16 type=0 succ=['0x1409f4883', '0x1409f5549'] pred=['0x1409f54fb']
// BB 0x1409f5549-0x1409f5568 size=31 type=0 succ=['0x1409f4890', '0x1409f5568'] pred=['0x1409f5539']
// BB 0x1409f5568-0x1409f5574 size=12 type=0 succ=['0x1409f5574', '0x1409f5586'] pred=['0x1409f487e', '0x1409f4883', '0x1409f5549']
// BB 0x1409f5574-0x1409f5586 size=18 type=0 succ=['0x1409f5586'] pred=['0x1409f5568']
// BB 0x1409f5586-0x1409f558e size=8 type=0 succ=['0x1409f45c3'] pred=['0x1409f5568', '0x1409f5574']
// BB 0x1409f558e-0x1409f55ad size=31 type=0 succ=['0x1409f55ad'] pred=['0x1409f45c3']
// BB 0x1409f55ad-0x1409f55bd size=16 type=0 succ=['0x1409f55bd', '0x1409f7e8f'] pred=['0x1409f558e']
// BB 0x1409f55bd-0x1409f55c4 size=7 type=0 succ=['0x1409f55c4'] pred=['0x1409f55ad']
// BB 0x1409f55c4-0x1409f55f9 size=53 type=0 succ=['0x1409f55f9', '0x1409f562a'] pred=['0x1409f55bd', '0x1409f7e96']
// BB 0x1409f55f9-0x1409f5610 size=23 type=0 succ=['0x1409f5610', '0x1409f562f'] pred=['0x1409f55c4']
// BB 0x1409f5610-0x1409f5617 size=7 type=0 succ=['0x1409f5617'] pred=['0x1409f55f9']
// BB 0x1409f5617-0x1409f5624 size=13 type=4 succ=[] pred=['0x1409f5610']
// BB 0x1409f5625-0x1409f562a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f562a-0x1409f562f size=5 type=0 succ=['0x1409f562f'] pred=['0x1409f55c4']
// BB 0x1409f562f-0x1409f56a8 size=121 type=0 succ=['0x1409f56a8', '0x1409f58b9'] pred=['0x1409f55f9', '0x1409f562a']
// BB 0x1409f56a8-0x1409f56d8 size=48 type=0 succ=['0x1409f56d8', '0x1409f58be'] pred=['0x1409f562f', '0x1409f586a']
// BB 0x1409f56d8-0x1409f56fc size=36 type=0 succ=['0x1409f56fc'] pred=['0x1409f56a8']
// BB 0x1409f56fc-0x1409f5716 size=26 type=0 succ=['0x1409f5716', '0x1409f5810'] pred=['0x1409f56d8']
// BB 0x1409f5716-0x1409f572e size=24 type=0 succ=['0x1409f572e'] pred=['0x1409f56fc']
// BB 0x1409f572e-0x1409f5737 size=9 type=0 succ=['0x1409f5737', '0x1409f5810'] pred=['0x1409f5716']
// BB 0x1409f5737-0x1409f5740 size=9 type=0 succ=['0x1409f5740', '0x1409f5810'] pred=['0x1409f572e']
// BB 0x1409f5740-0x1409f574d size=13 type=0 succ=['0x1409f574d', '0x1409f589a'] pred=['0x1409f5737']
// BB 0x1409f574d-0x1409f575a size=13 type=0 succ=['0x1409f575a', '0x1409f5810'] pred=['0x1409f5740']
// BB 0x1409f575a-0x1409f5791 size=55 type=0 succ=['0x1409f5791', '0x1409f8d4f'] pred=['0x1409f574d']
// BB 0x1409f5791-0x1409f57e6 size=85 type=0 succ=['0x1409f57e6'] pred=['0x1409f575a']
// BB 0x1409f57e6-0x1409f57fe size=24 type=0 succ=['0x1409f57fe', '0x1409f587b'] pred=['0x1409f5791']
// BB 0x1409f57fe-0x1409f5809 size=11 type=0 succ=['0x1409f586a'] pred=['0x1409f57e6']
// BB 0x1409f5810-0x1409f582c size=28 type=0 succ=['0x1409f582c', '0x1409f5839'] pred=['0x1409f56fc', '0x1409f572e', '0x1409f5737', '0x1409f574d']
// BB 0x1409f582c-0x1409f5839 size=13 type=0 succ=['0x1409f5839'] pred=['0x1409f5810']
// BB 0x1409f5839-0x1409f586a size=49 type=0 succ=['0x1409f586a'] pred=['0x1409f5810', '0x1409f582c', '0x1409f587b', '0x1409f588b']
// BB 0x1409f586a-0x1409f5879 size=15 type=0 succ=['0x1409f56a8', '0x1409f5879'] pred=['0x1409f57fe', '0x1409f5839']
// BB 0x1409f5879-0x1409f587b size=2 type=0 succ=['0x1409f58b9'] pred=['0x1409f586a']
// BB 0x1409f587b-0x1409f588b size=16 type=0 succ=['0x1409f5839', '0x1409f588b'] pred=['0x1409f57e6']
// BB 0x1409f588b-0x1409f589a size=15 type=0 succ=['0x1409f5839'] pred=['0x1409f587b']
// BB 0x1409f589a-0x1409f589d size=3 type=0 succ=['0x1409f589d'] pred=['0x1409f5740']
// BB 0x1409f589d-0x1409f58a4 size=7 type=0 succ=['0x1409f58a4'] pred=['0x1409f589a', '0x1409f8d4f']
// BB 0x1409f58a4-0x1409f58b3 size=15 type=4 succ=[] pred=['0x1409f589d']
// BB 0x1409f58b4-0x1409f58b9 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f58b9-0x1409f58be size=5 type=0 succ=['0x1409f58c1'] pred=['0x1409f562f', '0x1409f5879']
// BB 0x1409f58be-0x1409f58c1 size=3 type=0 succ=['0x1409f58c1'] pred=['0x1409f56a8']
// BB 0x1409f58c1-0x1409f58f0 size=47 type=0 succ=['0x1409f58f0'] pred=['0x1409f58b9', '0x1409f58be']
// BB 0x1409f58f0-0x1409f5900 size=16 type=0 succ=['0x1409f5900', '0x1409f5919'] pred=['0x1409f58c1', '0x1409f590e']
// BB 0x1409f5900-0x1409f590e size=14 type=0 succ=['0x1409f590e'] pred=['0x1409f58f0']
// BB 0x1409f590e-0x1409f5919 size=11 type=0 succ=['0x1409f58f0'] pred=['0x1409f5900']
// BB 0x1409f5919-0x1409f5925 size=12 type=0 succ=['0x1409f5925', '0x1409f593b'] pred=['0x1409f58f0']
// BB 0x1409f5925-0x1409f593b size=22 type=0 succ=['0x1409f593b'] pred=['0x1409f5919']
// BB 0x1409f593b-0x1409f5960 size=37 type=0 succ=['0x1409f5960', '0x1409f5a3f'] pred=['0x1409f5919', '0x1409f5925']
// BB 0x1409f5960-0x1409f5977 size=23 type=0 succ=['0x1409f5977', '0x1409f5a07'] pred=['0x1409f593b']
// BB 0x1409f5977-0x1409f5991 size=26 type=0 succ=['0x1409f59af'] pred=['0x1409f5960']
// BB 0x1409f59a0-0x1409f59af size=15 type=0 succ=['0x1409f59af', '0x1409f5a07'] pred=['0x1409f59dd', '0x1409f59f2']
// BB 0x1409f59af-0x1409f59b4 size=5 type=0 succ=['0x1409f59b4', '0x1409f59dd'] pred=['0x1409f5977', '0x1409f59a0']
// BB 0x1409f59b4-0x1409f59c0 size=12 type=0 succ=['0x1409f59c0'] pred=['0x1409f59af']
// BB 0x1409f59c0-0x1409f59dd size=29 type=0 succ=['0x1409f59dd', '0x1409f59c0'] pred=['0x1409f59b4', '0x1409f59c0']
// BB 0x1409f59dd-0x1409f59f2 size=21 type=0 succ=['0x1409f59a0', '0x1409f59f2'] pred=['0x1409f59af', '0x1409f59c0']
// BB 0x1409f59f2-0x1409f5a07 size=21 type=0 succ=['0x1409f59a0'] pred=['0x1409f59dd']
// BB 0x1409f5a07-0x1409f5a27 size=32 type=0 succ=['0x1409f5a27', '0x1409f5a3f'] pred=['0x1409f5960', '0x1409f59a0']
// BB 0x1409f5a27-0x1409f5a3f size=24 type=0 succ=['0x1409f5a3f'] pred=['0x1409f5a07']
// BB 0x1409f5a3f-0x1409f5a44 size=5 type=0 succ=['0x1409f5a44', '0x1409f5ab0'] pred=['0x1409f593b', '0x1409f5a07', '0x1409f5a27']
// BB 0x1409f5a44-0x1409f5a67 size=35 type=0 succ=['0x1409f5a67'] pred=['0x1409f5a3f']
// BB 0x1409f5a67-0x1409f5a80 size=25 type=0 succ=['0x1409f5a80'] pred=['0x1409f5a44']
// BB 0x1409f5a80-0x1409f5ab0 size=48 type=0 succ=['0x1409f5aca'] pred=['0x1409f5a67']
// BB 0x1409f5ab0-0x1409f5ab5 size=5 type=0 succ=['0x1409f5ab5', '0x1409f5aca'] pred=['0x1409f5a3f']
// BB 0x1409f5ab5-0x1409f5aca size=21 type=0 succ=['0x1409f5aca'] pred=['0x1409f5ab0']
// BB 0x1409f5aca-0x1409f5ada size=16 type=0 succ=['0x1409f5ada', '0x1409f5ba3'] pred=['0x1409f5a80', '0x1409f5ab0', '0x1409f5ab5']
// BB 0x1409f5ada-0x1409f5aea size=16 type=0 succ=['0x1409f5aea', '0x1409f5b76'] pred=['0x1409f5aca']
// BB 0x1409f5aea-0x1409f5b03 size=25 type=0 succ=['0x1409f5b22'] pred=['0x1409f5ada']
// BB 0x1409f5b10-0x1409f5b22 size=18 type=0 succ=['0x1409f5b22', '0x1409f5b76'] pred=['0x1409f5b4e', '0x1409f5b65']
// BB 0x1409f5b22-0x1409f5b28 size=6 type=0 succ=['0x1409f5b28', '0x1409f5b4e'] pred=['0x1409f5aea', '0x1409f5b10']
// BB 0x1409f5b28-0x1409f5b30 size=8 type=0 succ=['0x1409f5b30'] pred=['0x1409f5b22']
// BB 0x1409f5b30-0x1409f5b4e size=30 type=0 succ=['0x1409f5b4e', '0x1409f5b30'] pred=['0x1409f5b28', '0x1409f5b30']
// BB 0x1409f5b4e-0x1409f5b65 size=23 type=0 succ=['0x1409f5b10', '0x1409f5b65'] pred=['0x1409f5b22', '0x1409f5b30']
// BB 0x1409f5b65-0x1409f5b76 size=17 type=0 succ=['0x1409f5b10'] pred=['0x1409f5b4e']
// BB 0x1409f5b76-0x1409f5b86 size=16 type=0 succ=['0x1409f5b86', '0x1409f5ba3'] pred=['0x1409f5ada', '0x1409f5b10']
// BB 0x1409f5b86-0x1409f5ba3 size=29 type=0 succ=['0x1409f5ba3'] pred=['0x1409f5b76']
// BB 0x1409f5ba3-0x1409f5bc1 size=30 type=0 succ=['0x1409f5bc1', '0x1409f5bd6'] pred=['0x1409f425c', '0x1409f427e', '0x1409f5aca', '0x1409f5b76', '0x1409f5b86']
// BB 0x1409f5bc1-0x1409f5bc6 size=5 type=0 succ=['0x1409f5bc6', '0x1409f5bd6'] pred=['0x1409f5ba3']
// BB 0x1409f5bc6-0x1409f5bd4 size=14 type=0 succ=['0x1409f5bd4', '0x1409f5bdd'] pred=['0x1409f5bc1']
// BB 0x1409f5bd4-0x1409f5bd6 size=2 type=0 succ=['0x1409f5c1d'] pred=['0x1409f5bc6']
// BB 0x1409f5bd6-0x1409f5bdd size=7 type=0 succ=['0x1409f5bdd', '0x1409f5c1d'] pred=['0x1409f5ba3', '0x1409f5bc1']
// BB 0x1409f5bdd-0x1409f5be6 size=9 type=0 succ=['0x1409f5be6', '0x1409f5c1d'] pred=['0x1409f5bc6', '0x1409f5bd6']
// BB 0x1409f5be6-0x1409f5c10 size=42 type=0 succ=['0x1409f5c10', '0x1409f5c1d'] pred=['0x1409f5bdd']
// BB 0x1409f5c10-0x1409f5c1d size=13 type=0 succ=['0x1409f5c1d'] pred=['0x1409f5be6']
// BB 0x1409f5c1d-0x1409f5c26 size=9 type=0 succ=['0x1409f5c26', '0x1409f628d'] pred=['0x1409f5bd4', '0x1409f5bd6', '0x1409f5bdd', '0x1409f5be6', '0x1409f5c10']
// BB 0x1409f5c26-0x1409f5c48 size=34 type=0 succ=['0x1409f5c48', '0x1409f628d'] pred=['0x1409f5c1d']
// BB 0x1409f5c48-0x1409f5c50 size=8 type=0 succ=['0x1409f5c50', '0x1409f5c8d'] pred=['0x1409f5c26']
// BB 0x1409f5c50-0x1409f5c59 size=9 type=0 succ=['0x1409f5c59', '0x1409f628d'] pred=['0x1409f5c48']
// BB 0x1409f5c59-0x1409f5c6b size=18 type=0 succ=['0x1409f5c6b', '0x1409f5f82'] pred=['0x1409f5c50']
// BB 0x1409f5c6b-0x1409f5c75 size=10 type=0 succ=['0x1409f5c75', '0x1409f628d'] pred=['0x1409f5c59']
// BB 0x1409f5c75-0x1409f5c88 size=19 type=0 succ=['0x1409f5c88', '0x1409f628d'] pred=['0x1409f5c6b']
// BB 0x1409f5c88-0x1409f5c8d size=5 type=0 succ=['0x1409f5f96'] pred=['0x1409f5c75']
// BB 0x1409f5c8d-0x1409f5cae size=33 type=0 succ=['0x1409f5cae', '0x1409f628d'] pred=['0x1409f5c48']
// BB 0x1409f5cae-0x1409f5cb7 size=9 type=0 succ=['0x1409f5cb7', '0x1409f628d'] pred=['0x1409f5c8d']
// BB 0x1409f5cb7-0x1409f5cc2 size=11 type=0 succ=['0x1409f5cc2', '0x1409f628d'] pred=['0x1409f5cae']
// BB 0x1409f5cc2-0x1409f5cdc size=26 type=0 succ=['0x1409f5cdc', '0x1409f628d'] pred=['0x1409f5cb7']
// BB 0x1409f5cdc-0x1409f5cf7 size=27 type=0 succ=['0x1409f5cf7', '0x1409f628d'] pred=['0x1409f5cc2']
// BB 0x1409f5cf7-0x1409f5d00 size=9 type=0 succ=['0x1409f5d00', '0x1409f628d'] pred=['0x1409f5cdc']
// BB 0x1409f5d00-0x1409f5d40 size=64 type=0 succ=['0x1409f5d40', '0x1409f8cf7'] pred=['0x1409f5cf7']
// BB 0x1409f5d40-0x1409f5d6a size=42 type=0 succ=['0x1409f5d6a'] pred=['0x1409f5d00']
// BB 0x1409f5d6a-0x1409f5d8b size=33 type=0 succ=['0x1409f5d8b', '0x1409f84d1'] pred=['0x1409f5d40']
// BB 0x1409f5d8b-0x1409f5ddb size=80 type=0 succ=['0x1409f5ddb', '0x1409f5de8'] pred=['0x1409f5d6a']
// BB 0x1409f5ddb-0x1409f5de8 size=13 type=0 succ=['0x1409f5de8'] pred=['0x1409f5d8b']
// BB 0x1409f5de8-0x1409f5e05 size=29 type=0 succ=['0x1409f5e05', '0x1409f8d09'] pred=['0x1409f5d8b', '0x1409f5ddb']
// BB 0x1409f5e05-0x1409f5e58 size=83 type=0 succ=['0x1409f5e58', '0x1409f8d1b'] pred=['0x1409f5de8']
// BB 0x1409f5e58-0x1409f5e82 size=42 type=0 succ=['0x1409f5e82'] pred=['0x1409f5e05']
// BB 0x1409f5e82-0x1409f5ea3 size=33 type=0 succ=['0x1409f5ea3', '0x1409f8510'] pred=['0x1409f5e58']
// BB 0x1409f5ea3-0x1409f5ef3 size=80 type=0 succ=['0x1409f5ef3', '0x1409f5f00'] pred=['0x1409f5e82']
// BB 0x1409f5ef3-0x1409f5f00 size=13 type=0 succ=['0x1409f5f00'] pred=['0x1409f5ea3']
// BB 0x1409f5f00-0x1409f5f2c size=44 type=0 succ=['0x1409f5f2c'] pred=['0x1409f5ea3', '0x1409f5ef3']
// BB 0x1409f5f2c-0x1409f5f57 size=43 type=0 succ=['0x1409f5f57', '0x1409f5f64'] pred=['0x1409f5f00']
// BB 0x1409f5f57-0x1409f5f64 size=13 type=0 succ=['0x1409f5f64'] pred=['0x1409f5f2c']
// BB 0x1409f5f64-0x1409f5f82 size=30 type=0 succ=['0x1409f5fc6'] pred=['0x1409f5f2c', '0x1409f5f57']
// BB 0x1409f5f82-0x1409f5f8a size=8 type=0 succ=['0x1409f5f8a', '0x1409f5f96'] pred=['0x1409f5c59']
// BB 0x1409f5f8a-0x1409f5f96 size=12 type=0 succ=['0x1409f5f96', '0x1409f628d'] pred=['0x1409f5f82']
// BB 0x1409f5f96-0x1409f5fc6 size=48 type=0 succ=['0x1409f5fc6'] pred=['0x1409f5c88', '0x1409f5f82', '0x1409f5f8a']
// BB 0x1409f5fc6-0x1409f602a size=100 type=0 succ=['0x1409f602a'] pred=['0x1409f5f64', '0x1409f5f96']
// BB 0x1409f602a-0x1409f604f size=37 type=0 succ=['0x1409f604f', '0x1409f6221'] pred=['0x1409f5fc6']
// BB 0x1409f604f-0x1409f606b size=28 type=0 succ=['0x1409f606b'] pred=['0x1409f602a']
// BB 0x1409f606b-0x1409f6074 size=9 type=0 succ=['0x1409f6074', '0x1409f6221'] pred=['0x1409f604f']
// BB 0x1409f6074-0x1409f607d size=9 type=0 succ=['0x1409f607d', '0x1409f6221'] pred=['0x1409f606b']
// BB 0x1409f607d-0x1409f60ba size=61 type=0 succ=['0x1409f60ba', '0x1409f8441'] pred=['0x1409f6074']
// BB 0x1409f60ba-0x1409f60cd size=19 type=0 succ=['0x1409f60cd', '0x1409f60db'] pred=['0x1409f607d']
// BB 0x1409f60cd-0x1409f60db size=14 type=0 succ=['0x1409f60db'] pred=['0x1409f60ba']
// BB 0x1409f60db-0x1409f60f2 size=23 type=0 succ=['0x1409f60f2', '0x1409f6203'] pred=['0x1409f60ba', '0x1409f60cd']
// BB 0x1409f60f2-0x1409f610c size=26 type=0 succ=['0x1409f611f'] pred=['0x1409f60db']
// BB 0x1409f610c-0x1409f611f size=19 type=0 succ=['0x1409f611f', '0x1409f6203'] pred=['0x1409f614f', '0x1409f6166']
// BB 0x1409f611f-0x1409f6125 size=6 type=0 succ=['0x1409f6125', '0x1409f614f'] pred=['0x1409f60f2', '0x1409f610c']
// BB 0x1409f6125-0x1409f6130 size=11 type=0 succ=['0x1409f6130'] pred=['0x1409f611f']
// BB 0x1409f6130-0x1409f614f size=31 type=0 succ=['0x1409f614f', '0x1409f6130'] pred=['0x1409f6125', '0x1409f6130']
// BB 0x1409f614f-0x1409f6166 size=23 type=0 succ=['0x1409f610c', '0x1409f6166'] pred=['0x1409f611f', '0x1409f6130']
// BB 0x1409f6166-0x1409f6180 size=26 type=0 succ=['0x1409f610c', '0x1409f6180'] pred=['0x1409f614f']
// BB 0x1409f6180-0x1409f6184 size=4 type=0 succ=['0x1409f6184'] pred=['0x1409f6166']
// BB 0x1409f6184-0x1409f61c0 size=60 type=0 succ=['0x1409f61c0'] pred=['0x1409f6180']
// BB 0x1409f61c0-0x1409f61d5 size=21 type=0 succ=['0x1409f61d5'] pred=['0x1409f6184']
// BB 0x1409f61d5-0x1409f6203 size=46 type=0 succ=['0x1409f6203'] pred=['0x1409f61c0']
// BB 0x1409f6203-0x1409f620f size=12 type=0 succ=['0x1409f620f', '0x1409f6221'] pred=['0x1409f60db', '0x1409f610c', '0x1409f61d5']
// BB 0x1409f620f-0x1409f6221 size=18 type=0 succ=['0x1409f6221'] pred=['0x1409f6203']
// BB 0x1409f6221-0x1409f6246 size=37 type=0 succ=['0x1409f6246'] pred=['0x1409f602a', '0x1409f606b', '0x1409f6074', '0x1409f6203', '0x1409f620f']
// BB 0x1409f6246-0x1409f625f size=25 type=0 succ=['0x1409f625f'] pred=['0x1409f6221']
// BB 0x1409f625f-0x1409f628d size=46 type=0 succ=['0x1409f628d'] pred=['0x1409f6246']
// BB 0x1409f628d-0x1409f62de size=81 type=0 succ=['0x1409f62de', '0x1409f63e3'] pred=['0x1409f5c1d', '0x1409f5c26', '0x1409f5c50', '0x1409f5c6b', '0x1409f5c75', '0x1409f5c8d', '0x1409f5cae', '0x1409f5cb7', '0x1409f5cc2', '0x1409f5cdc', '0x1409f5cf7', '0x1409f5f8a', '0x1409f625f']
// BB 0x1409f62de-0x1409f62f1 size=19 type=1 succ=['0x1409f62f1', '0x1409f630d', '0x1409f632b', '0x1409f6334', '0x1409f6351'] pred=['0x1409f628d']
// BB 0x1409f62f1-0x1409f630d size=28 type=0 succ=['0x1409f6395'] pred=['0x1409f62de']
// BB 0x1409f630d-0x1409f632b size=30 type=0 succ=['0x1409f6395'] pred=['0x1409f62de']
// BB 0x1409f632b-0x1409f6334 size=9 type=0 succ=['0x1409f6395'] pred=['0x1409f62de']
// BB 0x1409f6334-0x1409f6351 size=29 type=0 succ=['0x1409f6395'] pred=['0x1409f62de']
// BB 0x1409f6351-0x1409f6358 size=7 type=0 succ=['0x1409f6358', '0x1409f6378'] pred=['0x1409f62de']
// BB 0x1409f6358-0x1409f6365 size=13 type=0 succ=['0x1409f6365', '0x1409f7ff5'] pred=['0x1409f6351']
// BB 0x1409f6365-0x1409f6378 size=19 type=0 succ=['0x1409f638e'] pred=['0x1409f6358']
// BB 0x1409f6378-0x1409f638e size=22 type=0 succ=['0x1409f638e'] pred=['0x1409f6351']
// BB 0x1409f638e-0x1409f6395 size=7 type=0 succ=['0x1409f6395'] pred=['0x1409f6365', '0x1409f6378']
// BB 0x1409f6395-0x1409f639c size=7 type=0 succ=['0x1409f639c'] pred=['0x1409f62f1', '0x1409f630d', '0x1409f632b', '0x1409f6334', '0x1409f638e']
// BB 0x1409f639c-0x1409f63b5 size=25 type=0 succ=['0x1409f63b5'] pred=['0x1409f6395']
// BB 0x1409f63b5-0x1409f63e3 size=46 type=0 succ=['0x1409f63e3'] pred=['0x1409f639c']
// BB 0x1409f63e3-0x1409f6405 size=34 type=0 succ=['0x1409f6405', '0x1409f6539'] pred=['0x1409f628d', '0x1409f63b5']
// BB 0x1409f6405-0x1409f640e size=9 type=0 succ=['0x1409f640e', '0x1409f6539'] pred=['0x1409f63e3']
// BB 0x1409f640e-0x1409f641a size=12 type=0 succ=['0x1409f641a', '0x1409f6539'] pred=['0x1409f6405']
// BB 0x1409f641a-0x1409f644d size=51 type=0 succ=['0x1409f644d', '0x1409f8632'] pred=['0x1409f640e']
// BB 0x1409f644d-0x1409f648e size=65 type=0 succ=['0x1409f648e'] pred=['0x1409f641a']
// BB 0x1409f648e-0x1409f64b9 size=43 type=0 succ=['0x1409f64b9', '0x1409f64c6'] pred=['0x1409f644d']
// BB 0x1409f64b9-0x1409f64c6 size=13 type=0 succ=['0x1409f64c6'] pred=['0x1409f648e']
// BB 0x1409f64c6-0x1409f64f2 size=44 type=0 succ=['0x1409f64f2'] pred=['0x1409f648e', '0x1409f64b9']
// BB 0x1409f64f2-0x1409f650b size=25 type=0 succ=['0x1409f650b'] pred=['0x1409f64c6']
// BB 0x1409f650b-0x1409f6539 size=46 type=0 succ=['0x1409f6539'] pred=['0x1409f64f2']
// BB 0x1409f6539-0x1409f65d0 size=151 type=0 succ=['0x1409f65d0'] pred=['0x1409f63e3', '0x1409f6405', '0x1409f640e', '0x1409f650b']
// BB 0x1409f65d0-0x1409f65da size=10 type=0 succ=['0x1409f65da', '0x1409f670c'] pred=['0x1409f6539', '0x1409f65f2', '0x1409f66d6']
// BB 0x1409f65da-0x1409f65f2 size=24 type=0 succ=['0x1409f65f2'] pred=['0x1409f65d0']
// BB 0x1409f65f2-0x1409f660d size=27 type=0 succ=['0x1409f65d0', '0x1409f660d'] pred=['0x1409f65da']
// BB 0x1409f660d-0x1409f6619 size=12 type=1 succ=['0x1409f6619', '0x1409f6635', '0x1409f664f', '0x1409f6658', '0x1409f6671'] pred=['0x1409f65f2']
// BB 0x1409f6619-0x1409f6635 size=28 type=0 succ=['0x1409f66c0'] pred=['0x1409f660d']
// BB 0x1409f6635-0x1409f664f size=26 type=0 succ=['0x1409f66c0'] pred=['0x1409f660d']
// BB 0x1409f664f-0x1409f6658 size=9 type=0 succ=['0x1409f66c0'] pred=['0x1409f660d']
// BB 0x1409f6658-0x1409f6671 size=25 type=0 succ=['0x1409f66c0'] pred=['0x1409f660d']
// BB 0x1409f6671-0x1409f6678 size=7 type=0 succ=['0x1409f6678', '0x1409f6694'] pred=['0x1409f660d']
// BB 0x1409f6678-0x1409f6685 size=13 type=0 succ=['0x1409f6685', '0x1409f7dd7'] pred=['0x1409f6671']
// BB 0x1409f6685-0x1409f6694 size=15 type=0 succ=['0x1409f66aa'] pred=['0x1409f6678']
// BB 0x1409f6694-0x1409f66aa size=22 type=0 succ=['0x1409f66aa'] pred=['0x1409f6671']
// BB 0x1409f66aa-0x1409f66c0 size=22 type=0 succ=['0x1409f66c0'] pred=['0x1409f6685', '0x1409f6694']
// BB 0x1409f66c0-0x1409f66c7 size=7 type=0 succ=['0x1409f66c7'] pred=['0x1409f6619', '0x1409f6635', '0x1409f664f', '0x1409f6658', '0x1409f66aa']
// BB 0x1409f66c7-0x1409f66d6 size=15 type=0 succ=['0x1409f66d6'] pred=['0x1409f66c0']
// BB 0x1409f66d6-0x1409f670c size=54 type=0 succ=['0x1409f65d0'] pred=['0x1409f66c7']
// BB 0x1409f670c-0x1409f6731 size=37 type=0 succ=['0x1409f6731', '0x1409f75c4'] pred=['0x1409f65d0']
// BB 0x1409f6731-0x1409f673a size=9 type=0 succ=['0x1409f673a', '0x1409f75c4'] pred=['0x1409f670c']
// BB 0x1409f673a-0x1409f674d size=19 type=0 succ=['0x1409f674d', '0x1409f7eb5'] pred=['0x1409f6731']
// BB 0x1409f674d-0x1409f6754 size=7 type=0 succ=['0x1409f6754'] pred=['0x1409f673a']
// BB 0x1409f6754-0x1409f679b size=71 type=0 succ=['0x1409f6ae1'] pred=['0x1409f674d', '0x1409f7eb5']
// BB 0x1409f67a0-0x1409f67aa size=10 type=0 succ=['0x1409f67aa', '0x1409f6cd7'] pred=['0x1409f69c1', '0x1409f6ae1']
// BB 0x1409f67aa-0x1409f67b1 size=7 type=0 succ=['0x1409f67b1'] pred=['0x1409f67a0']
// BB 0x1409f67b1-0x1409f67cc size=27 type=0 succ=['0x1409f67cc', '0x1409f69f0'] pred=['0x1409f67aa']
// BB 0x1409f67cc-0x1409f67d5 size=9 type=0 succ=['0x1409f67d5', '0x1409f69f0'] pred=['0x1409f67b1']
// BB 0x1409f67d5-0x1409f67e7 size=18 type=0 succ=['0x1409f67e7', '0x1409f69c6'] pred=['0x1409f67cc']
// BB 0x1409f67e7-0x1409f67f3 size=12 type=0 succ=['0x1409f67f3', '0x1409f69f0'] pred=['0x1409f67d5']
// BB 0x1409f67f3-0x1409f6800 size=13 type=0 succ=['0x1409f6800', '0x1409f8345'] pred=['0x1409f67e7']
// BB 0x1409f6800-0x1409f6819 size=25 type=0 succ=['0x1409f6819'] pred=['0x1409f67f3']
// BB 0x1409f6819-0x1409f6823 size=10 type=0 succ=['0x1409f6823', '0x1409f6840'] pred=['0x1409f6800']
// BB 0x1409f6823-0x1409f6828 size=5 type=0 succ=['0x1409f6828', '0x1409f6840'] pred=['0x1409f6819']
// BB 0x1409f6828-0x1409f683a size=18 type=0 succ=['0x1409f683a', '0x1409f6851'] pred=['0x1409f6823']
// BB 0x1409f683a-0x1409f683f size=5 type=0 succ=['0x1409f6920'] pred=['0x1409f6828']
// BB 0x1409f6840-0x1409f6851 size=17 type=0 succ=['0x1409f6851', '0x1409f6920'] pred=['0x1409f6819', '0x1409f6823']
// BB 0x1409f6851-0x1409f688d size=60 type=0 succ=['0x1409f688d'] pred=['0x1409f6828', '0x1409f6840']
// BB 0x1409f688d-0x1409f68a8 size=27 type=0 succ=['0x1409f68a8', '0x1409f6900'] pred=['0x1409f6851', '0x1409f690e']
// BB 0x1409f68a8-0x1409f68af size=7 type=0 succ=['0x1409f68af'] pred=['0x1409f688d']
// BB 0x1409f68af-0x1409f68c7 size=24 type=0 succ=['0x1409f68c7', '0x1409f68e2'] pred=['0x1409f68a8', '0x1409f68e2']
// BB 0x1409f68c7-0x1409f68e2 size=27 type=0 succ=['0x1409f68e2', '0x1409f6ad0'] pred=['0x1409f68af']
// BB 0x1409f68e2-0x1409f68f3 size=17 type=0 succ=['0x1409f68af', '0x1409f68f3'] pred=['0x1409f68af', '0x1409f68c7']
// BB 0x1409f68f3-0x1409f6900 size=13 type=0 succ=['0x1409f6900'] pred=['0x1409f68e2']
// BB 0x1409f6900-0x1409f690e size=14 type=0 succ=['0x1409f690e', '0x1409f6920'] pred=['0x1409f688d', '0x1409f68f3']
// BB 0x1409f690e-0x1409f691e size=16 type=0 succ=['0x1409f688d'] pred=['0x1409f6900']
// BB 0x1409f6920-0x1409f693b size=27 type=0 succ=['0x1409f693b', '0x1409f8429'] pred=['0x1409f683a', '0x1409f6840', '0x1409f6900']
// BB 0x1409f693b-0x1409f6990 size=85 type=0 succ=['0x1409f6990', '0x1409f8429'] pred=['0x1409f6920']
// BB 0x1409f6990-0x1409f69b4 size=36 type=0 succ=['0x1409f69b4'] pred=['0x1409f693b']
// BB 0x1409f69b4-0x1409f69c1 size=13 type=0 succ=['0x1409f69c1'] pred=['0x1409f6990']
// BB 0x1409f69c1-0x1409f69c6 size=5 type=0 succ=['0x1409f67a0'] pred=['0x1409f69b4']
// BB 0x1409f69c6-0x1409f69cc size=6 type=0 succ=['0x1409f69cc', '0x1409f69f0'] pred=['0x1409f67d5']
// BB 0x1409f69cc-0x1409f69ed size=33 type=0 succ=['0x1409f69ed', '0x1409f6b01'] pred=['0x1409f69c6']
// BB 0x1409f69ed-0x1409f69f0 size=3 type=0 succ=['0x1409f69f0'] pred=['0x1409f69cc']
// BB 0x1409f69f0-0x1409f6a00 size=16 type=0 succ=['0x1409f6a00', '0x1409f6ad0'] pred=['0x1409f67b1', '0x1409f67cc', '0x1409f67e7', '0x1409f69c6', '0x1409f69ed']
// BB 0x1409f6a00-0x1409f6a1a size=26 type=0 succ=['0x1409f6a2c'] pred=['0x1409f69f0']
// BB 0x1409f6a20-0x1409f6a2c size=12 type=0 succ=['0x1409f6a2c', '0x1409f6a86'] pred=['0x1409f6a5c', '0x1409f6a71']
// BB 0x1409f6a2c-0x1409f6a31 size=5 type=0 succ=['0x1409f6a31', '0x1409f6a5c'] pred=['0x1409f6a00', '0x1409f6a20']
// BB 0x1409f6a31-0x1409f6a40 size=15 type=0 succ=['0x1409f6a40'] pred=['0x1409f6a2c']
// BB 0x1409f6a40-0x1409f6a5c size=28 type=0 succ=['0x1409f6a5c', '0x1409f6a40'] pred=['0x1409f6a31', '0x1409f6a40']
// BB 0x1409f6a5c-0x1409f6a71 size=21 type=0 succ=['0x1409f6a20', '0x1409f6a71'] pred=['0x1409f6a2c', '0x1409f6a40']
// BB 0x1409f6a71-0x1409f6a86 size=21 type=0 succ=['0x1409f6a20'] pred=['0x1409f6a5c']
// BB 0x1409f6a86-0x1409f6a92 size=12 type=0 succ=['0x1409f6a92', '0x1409f6abc'] pred=['0x1409f6a20']
// BB 0x1409f6a92-0x1409f6abc size=42 type=0 succ=['0x1409f6abe'] pred=['0x1409f6a86']
// BB 0x1409f6abc-0x1409f6abe size=2 type=0 succ=['0x1409f6abe'] pred=['0x1409f6a86']
// BB 0x1409f6abe-0x1409f6ad0 size=18 type=0 succ=['0x1409f6ad0'] pred=['0x1409f6a92', '0x1409f6abc']
// BB 0x1409f6ad0-0x1409f6ae1 size=17 type=0 succ=['0x1409f6ae1'] pred=['0x1409f68c7', '0x1409f69f0', '0x1409f6abe']
// BB 0x1409f6ae1-0x1409f6b01 size=32 type=0 succ=['0x1409f67a0'] pred=['0x1409f6754', '0x1409f6ad0', '0x1409f6ccf']
// BB 0x1409f6b01-0x1409f6b11 size=16 type=0 succ=['0x1409f6b11', '0x1409f6bde'] pred=['0x1409f69cc']
// BB 0x1409f6b11-0x1409f6b2b size=26 type=0 succ=['0x1409f6b37'] pred=['0x1409f6b01']
// BB 0x1409f6b2b-0x1409f6b37 size=12 type=0 succ=['0x1409f6b37', '0x1409f6b8d'] pred=['0x1409f6b5c', '0x1409f6b71']
// BB 0x1409f6b37-0x1409f6b3c size=5 type=0 succ=['0x1409f6b3c', '0x1409f6b5c'] pred=['0x1409f6b11', '0x1409f6b2b']
// BB 0x1409f6b3c-0x1409f6b40 size=4 type=0 succ=['0x1409f6b40'] pred=['0x1409f6b37']
// BB 0x1409f6b40-0x1409f6b5c size=28 type=0 succ=['0x1409f6b5c', '0x1409f6b40'] pred=['0x1409f6b3c', '0x1409f6b40']
// BB 0x1409f6b5c-0x1409f6b71 size=21 type=0 succ=['0x1409f6b2b', '0x1409f6b71'] pred=['0x1409f6b37', '0x1409f6b40']
// BB 0x1409f6b71-0x1409f6b8d size=28 type=0 succ=['0x1409f6b2b'] pred=['0x1409f6b5c']
// BB 0x1409f6b8d-0x1409f6b99 size=12 type=0 succ=['0x1409f6b99', '0x1409f6bc3'] pred=['0x1409f6b2b']
// BB 0x1409f6b99-0x1409f6bc3 size=42 type=0 succ=['0x1409f6bc5'] pred=['0x1409f6b8d']
// BB 0x1409f6bc3-0x1409f6bc5 size=2 type=0 succ=['0x1409f6bc5'] pred=['0x1409f6b8d']
// BB 0x1409f6bc5-0x1409f6bde size=25 type=0 succ=['0x1409f6bde'] pred=['0x1409f6b99', '0x1409f6bc3']
// BB 0x1409f6bde-0x1409f6beb size=13 type=0 succ=['0x1409f6beb', '0x1409f8c4e'] pred=['0x1409f6b01', '0x1409f6bc5']
// BB 0x1409f6beb-0x1409f6bef size=4 type=0 succ=['0x1409f6bef'] pred=['0x1409f6bde']
// BB 0x1409f6bef-0x1409f6c0d size=30 type=0 succ=['0x1409f6c0d', '0x1409f6ccf'] pred=['0x1409f6beb']
// BB 0x1409f6c0d-0x1409f6c16 size=9 type=0 succ=['0x1409f6c16', '0x1409f6ccf'] pred=['0x1409f6bef']
// BB 0x1409f6c16-0x1409f6c25 size=15 type=0 succ=['0x1409f6c25'] pred=['0x1409f6c0d']
// BB 0x1409f6c25-0x1409f6c2e size=9 type=0 succ=['0x1409f6c2e', '0x1409f6ccf'] pred=['0x1409f6c16', '0x1409f6c43', '0x1409f6c4c', '0x1409f6cb6']
// BB 0x1409f6c2e-0x1409f6c43 size=21 type=0 succ=['0x1409f6c43'] pred=['0x1409f6c25']
// BB 0x1409f6c43-0x1409f6c4c size=9 type=0 succ=['0x1409f6c25', '0x1409f6c4c'] pred=['0x1409f6c2e']
// BB 0x1409f6c4c-0x1409f6c51 size=5 type=0 succ=['0x1409f6c25', '0x1409f6c51'] pred=['0x1409f6c43']
// BB 0x1409f6c51-0x1409f6c5e size=13 type=0 succ=['0x1409f6c5e', '0x1409f7e3e'] pred=['0x1409f6c4c']
// BB 0x1409f6c5e-0x1409f6c60 size=2 type=0 succ=['0x1409f6c60', '0x1409f6c95'] pred=['0x1409f6c51']
// BB 0x1409f6c60-0x1409f6c7f size=31 type=0 succ=['0x1409f6c7f', '0x1409f8d3e'] pred=['0x1409f6c5e']
// BB 0x1409f6c7f-0x1409f6c95 size=22 type=0 succ=['0x1409f6c9a'] pred=['0x1409f6c60']
// BB 0x1409f6c95-0x1409f6c9a size=5 type=0 succ=['0x1409f6c9a'] pred=['0x1409f6c5e']
// BB 0x1409f6c9a-0x1409f6cb6 size=28 type=0 succ=['0x1409f6cb6'] pred=['0x1409f6c7f', '0x1409f6c95']
// BB 0x1409f6cb6-0x1409f6ccf size=25 type=0 succ=['0x1409f6c25'] pred=['0x1409f6c9a']
// BB 0x1409f6ccf-0x1409f6cd7 size=8 type=0 succ=['0x1409f6ae1'] pred=['0x1409f6bef', '0x1409f6c0d', '0x1409f6c25']
// BB 0x1409f6cd7-0x1409f6ce7 size=16 type=0 succ=['0x1409f6ce7', '0x1409f6dae'] pred=['0x1409f67a0']
// BB 0x1409f6ce7-0x1409f6cf7 size=16 type=0 succ=['0x1409f6cf7', '0x1409f6d76'] pred=['0x1409f6cd7']
// BB 0x1409f6cf7-0x1409f6d0f size=24 type=0 succ=['0x1409f6d1f'] pred=['0x1409f6ce7']
// BB 0x1409f6d10-0x1409f6d1f size=15 type=0 succ=['0x1409f6d1f', '0x1409f6d76'] pred=['0x1409f6d4c', '0x1409f6d61']
// BB 0x1409f6d1f-0x1409f6d24 size=5 type=0 succ=['0x1409f6d24', '0x1409f6d4c'] pred=['0x1409f6cf7', '0x1409f6d10']
// BB 0x1409f6d24-0x1409f6d30 size=12 type=0 succ=['0x1409f6d30'] pred=['0x1409f6d1f']
// BB 0x1409f6d30-0x1409f6d4c size=28 type=0 succ=['0x1409f6d4c', '0x1409f6d30'] pred=['0x1409f6d24', '0x1409f6d30']
// BB 0x1409f6d4c-0x1409f6d61 size=21 type=0 succ=['0x1409f6d10', '0x1409f6d61'] pred=['0x1409f6d1f', '0x1409f6d30']
// BB 0x1409f6d61-0x1409f6d76 size=21 type=0 succ=['0x1409f6d10'] pred=['0x1409f6d4c']
// BB 0x1409f6d76-0x1409f6d96 size=32 type=0 succ=['0x1409f6d96', '0x1409f6dae'] pred=['0x1409f6ce7', '0x1409f6d10']
// BB 0x1409f6d96-0x1409f6dae size=24 type=0 succ=['0x1409f6dae'] pred=['0x1409f6d76']
// BB 0x1409f6dae-0x1409f6dcc size=30 type=0 succ=['0x1409f6dcc', '0x1409f6e10'] pred=['0x1409f6cd7', '0x1409f6d76', '0x1409f6d96']
// BB 0x1409f6dcc-0x1409f6dd5 size=9 type=0 succ=['0x1409f6dd5', '0x1409f75c4'] pred=['0x1409f6dae', '0x1409f6e00', '0x1409f73f9']
// BB 0x1409f6dd5-0x1409f6df2 size=29 type=0 succ=['0x1409f742d'] pred=['0x1409f6dcc']
// BB 0x1409f6e00-0x1409f6e10 size=16 type=0 succ=['0x1409f6dcc', '0x1409f6e10'] pred=['0x1409f6e1a', '0x1409f6e30', '0x1409f6e35', '0x1409f6e3c', '0x1409f6e6a', '0x1409f6e8c', '0x1409f6e95']
// BB 0x1409f6e10-0x1409f6e1a size=10 type=0 succ=['0x1409f6e1a'] pred=['0x1409f6dae', '0x1409f6e00', '0x1409f73de']
// BB 0x1409f6e1a-0x1409f6e30 size=22 type=0 succ=['0x1409f6e00', '0x1409f6e30'] pred=['0x1409f6e10']
// BB 0x1409f6e30-0x1409f6e35 size=5 type=0 succ=['0x1409f6e00', '0x1409f6e35'] pred=['0x1409f6e1a']
// BB 0x1409f6e35-0x1409f6e3c size=7 type=0 succ=['0x1409f6e00', '0x1409f6e3c'] pred=['0x1409f6e30']
// BB 0x1409f6e3c-0x1409f6e5d size=33 type=0 succ=['0x1409f6e00', '0x1409f6e5d'] pred=['0x1409f6e35']
// BB 0x1409f6e5d-0x1409f6e6a size=13 type=0 succ=['0x1409f6e6a', '0x1409f85de'] pred=['0x1409f6e3c']
// BB 0x1409f6e6a-0x1409f6e8c size=34 type=0 succ=['0x1409f6e00', '0x1409f6e8c'] pred=['0x1409f6e5d']
// BB 0x1409f6e8c-0x1409f6e95 size=9 type=0 succ=['0x1409f6e00', '0x1409f6e95'] pred=['0x1409f6e6a']
// BB 0x1409f6e95-0x1409f6ea0 size=11 type=0 succ=['0x1409f6e00', '0x1409f6ea0'] pred=['0x1409f6e8c']
// BB 0x1409f6ea0-0x1409f6ead size=13 type=0 succ=['0x1409f6ead', '0x1409f8ca4'] pred=['0x1409f6e95']
// BB 0x1409f6ead-0x1409f6ecf size=34 type=0 succ=['0x1409f6ecf', '0x1409f8417'] pred=['0x1409f6ea0']
// BB 0x1409f6ecf-0x1409f6ed8 size=9 type=0 succ=['0x1409f6ed8', '0x1409f8417'] pred=['0x1409f6ead']
// BB 0x1409f6ed8-0x1409f6ef4 size=28 type=0 succ=['0x1409f6ef4'] pred=['0x1409f6ecf']
// BB 0x1409f6ef4-0x1409f6f07 size=19 type=0 succ=['0x1409f6f07', '0x1409f73fe'] pred=['0x1409f6ed8']
// BB 0x1409f6f07-0x1409f6f0e size=7 type=0 succ=['0x1409f6f0e'] pred=['0x1409f6ef4']
// BB 0x1409f6f0e-0x1409f6f33 size=37 type=0 succ=['0x1409f6f33'] pred=['0x1409f6f07', '0x1409f73fe']
// BB 0x1409f6f33-0x1409f6f40 size=13 type=0 succ=['0x1409f6f40', '0x1409f7043'] pred=['0x1409f6f0e', '0x1409f6faf', '0x1409f6fb8', '0x1409f7023']
// BB 0x1409f6f40-0x1409f6f4e size=14 type=0 succ=['0x1409f6f4e'] pred=['0x1409f6f33']
// BB 0x1409f6f4e-0x1409f6f65 size=23 type=0 succ=['0x1409f6f65', '0x1409f7043'] pred=['0x1409f6f40']
// BB 0x1409f6f65-0x1409f6f6e size=9 type=0 succ=['0x1409f6f6e', '0x1409f7043'] pred=['0x1409f6f4e']
// BB 0x1409f6f6e-0x1409f6f79 size=11 type=0 succ=['0x1409f6f79', '0x1409f7043'] pred=['0x1409f6f65']
// BB 0x1409f6f79-0x1409f6f89 size=16 type=0 succ=['0x1409f6f89', '0x1409f7043'] pred=['0x1409f6f6e']
// BB 0x1409f6f89-0x1409f6f96 size=13 type=0 succ=['0x1409f6f96', '0x1409f8a08'] pred=['0x1409f6f79']
// BB 0x1409f6f96-0x1409f6faf size=25 type=0 succ=['0x1409f6faf'] pred=['0x1409f6f89']
// BB 0x1409f6faf-0x1409f6fb8 size=9 type=0 succ=['0x1409f6f33', '0x1409f6fb8'] pred=['0x1409f6f96']
// BB 0x1409f6fb8-0x1409f6fc1 size=9 type=0 succ=['0x1409f6f33', '0x1409f6fc1'] pred=['0x1409f6faf']
// BB 0x1409f6fc1-0x1409f6fce size=13 type=0 succ=['0x1409f6fce', '0x1409f7e52'] pred=['0x1409f6fb8']
// BB 0x1409f6fce-0x1409f6fd0 size=2 type=0 succ=['0x1409f6fd0', '0x1409f7002'] pred=['0x1409f6fc1']
// BB 0x1409f6fd0-0x1409f6fef size=31 type=0 succ=['0x1409f6fef', '0x1409f8d2d'] pred=['0x1409f6fce']
// BB 0x1409f6fef-0x1409f7002 size=19 type=0 succ=['0x1409f7007'] pred=['0x1409f6fd0']
// BB 0x1409f7002-0x1409f7007 size=5 type=0 succ=['0x1409f7007'] pred=['0x1409f6fce']
// BB 0x1409f7007-0x1409f7023 size=28 type=0 succ=['0x1409f7023'] pred=['0x1409f6fef', '0x1409f7002']
// BB 0x1409f7023-0x1409f7043 size=32 type=0 succ=['0x1409f6f33'] pred=['0x1409f7007']
// BB 0x1409f7043-0x1409f7099 size=86 type=0 succ=['0x1409f7099', '0x1409f71d7'] pred=['0x1409f6f33', '0x1409f6f4e', '0x1409f6f65', '0x1409f6f6e', '0x1409f6f79']
// BB 0x1409f7099-0x1409f70f9 size=96 type=0 succ=['0x1409f712b'] pred=['0x1409f7043']
// BB 0x1409f70f9-0x1409f712b size=50 type=0 succ=['0x1409f712b'] pred=['0x1409f71a4', '0x1409f71c2']
// BB 0x1409f712b-0x1409f7134 size=9 type=0 succ=['0x1409f7134', '0x1409f7216'] pred=['0x1409f7099', '0x1409f70f9']
// BB 0x1409f7134-0x1409f714b size=23 type=0 succ=['0x1409f714b', '0x1409f7219'] pred=['0x1409f712b']
// BB 0x1409f714b-0x1409f718b size=64 type=0 succ=['0x1409f718b', '0x1409f8085'] pred=['0x1409f7134']
// BB 0x1409f718b-0x1409f7197 size=12 type=0 succ=['0x1409f7197', '0x1409f71a4'] pred=['0x1409f714b']
// BB 0x1409f7197-0x1409f71a4 size=13 type=0 succ=['0x1409f71a4'] pred=['0x1409f718b']
// BB 0x1409f71a4-0x1409f71c2 size=30 type=0 succ=['0x1409f70f9', '0x1409f71c2'] pred=['0x1409f718b', '0x1409f7197']
// BB 0x1409f71c2-0x1409f71d7 size=21 type=0 succ=['0x1409f70f9'] pred=['0x1409f71a4']
// BB 0x1409f71d7-0x1409f71fb size=36 type=0 succ=['0x1409f71fb', '0x1409f72a9'] pred=['0x1409f7043']
// BB 0x1409f71fb-0x1409f7216 size=27 type=0 succ=['0x1409f72a9'] pred=['0x1409f71d7']
// BB 0x1409f7216-0x1409f7219 size=3 type=0 succ=['0x1409f7219'] pred=['0x1409f712b']
// BB 0x1409f7219-0x1409f7243 size=42 type=0 succ=['0x1409f7243'] pred=['0x1409f7134', '0x1409f7216']
// BB 0x1409f7243-0x1409f7253 size=16 type=0 succ=['0x1409f7253', '0x1409f726c'] pred=['0x1409f7219', '0x1409f7261']
// BB 0x1409f7253-0x1409f7261 size=14 type=0 succ=['0x1409f7261'] pred=['0x1409f7243']
// BB 0x1409f7261-0x1409f726c size=11 type=0 succ=['0x1409f7243'] pred=['0x1409f7253']
// BB 0x1409f726c-0x1409f7278 size=12 type=0 succ=['0x1409f7278', '0x1409f728e'] pred=['0x1409f7243']
// BB 0x1409f7278-0x1409f728e size=22 type=0 succ=['0x1409f728e'] pred=['0x1409f726c']
// BB 0x1409f728e-0x1409f72a9 size=27 type=0 succ=['0x1409f72a9'] pred=['0x1409f726c', '0x1409f7278']
// BB 0x1409f72a9-0x1409f72b9 size=16 type=0 succ=['0x1409f72b9', '0x1409f7388'] pred=['0x1409f71d7', '0x1409f71fb', '0x1409f728e']
// BB 0x1409f72b9-0x1409f72d3 size=26 type=0 succ=['0x1409f72d3', '0x1409f7345'] pred=['0x1409f72a9']
// BB 0x1409f72d3-0x1409f72eb size=24 type=0 succ=['0x1409f72fa'] pred=['0x1409f72b9']
// BB 0x1409f72eb-0x1409f72fa size=15 type=0 succ=['0x1409f72fa', '0x1409f7345'] pred=['0x1409f731b', '0x1409f7330']
// BB 0x1409f72fa-0x1409f72ff size=5 type=0 succ=['0x1409f72ff', '0x1409f731b'] pred=['0x1409f72d3', '0x1409f72eb']
// BB 0x1409f72ff-0x1409f7300 size=1 type=0 succ=['0x1409f7300'] pred=['0x1409f72fa']
// BB 0x1409f7300-0x1409f731b size=27 type=0 succ=['0x1409f731b', '0x1409f7300'] pred=['0x1409f72ff', '0x1409f7300']
// BB 0x1409f731b-0x1409f7330 size=21 type=0 succ=['0x1409f72eb', '0x1409f7330'] pred=['0x1409f72fa', '0x1409f7300']
// BB 0x1409f7330-0x1409f7345 size=21 type=0 succ=['0x1409f72eb'] pred=['0x1409f731b']
// BB 0x1409f7345-0x1409f7373 size=46 type=0 succ=['0x1409f7373', '0x1409f7388'] pred=['0x1409f72b9', '0x1409f72eb']
// BB 0x1409f7373-0x1409f7388 size=21 type=0 succ=['0x1409f7388'] pred=['0x1409f7345']
// BB 0x1409f7388-0x1409f7394 size=12 type=0 succ=['0x1409f7394', '0x1409f73bc'] pred=['0x1409f72a9', '0x1409f7345', '0x1409f7373']
// BB 0x1409f7394-0x1409f739a size=6 type=0 succ=['0x1409f73a3'] pred=['0x1409f7388']
// BB 0x1409f739a-0x1409f73a3 size=9 type=0 succ=['0x1409f73a3', '0x1409f73bc'] pred=['0x1409f73a3', '0x1409f73ac']
// BB 0x1409f73a3-0x1409f73ac size=9 type=0 succ=['0x1409f739a', '0x1409f73ac'] pred=['0x1409f7394', '0x1409f739a']
// BB 0x1409f73ac-0x1409f73bc size=16 type=0 succ=['0x1409f739a'] pred=['0x1409f73a3']
// BB 0x1409f73bc-0x1409f73c8 size=12 type=0 succ=['0x1409f73c8', '0x1409f73de'] pred=['0x1409f7388', '0x1409f739a']
// BB 0x1409f73c8-0x1409f73de size=22 type=0 succ=['0x1409f73de'] pred=['0x1409f73bc']
// BB 0x1409f73de-0x1409f73f9 size=27 type=0 succ=['0x1409f6e10', '0x1409f73f9'] pred=['0x1409f73bc', '0x1409f73c8']
// BB 0x1409f73f9-0x1409f73fe size=5 type=0 succ=['0x1409f6dcc'] pred=['0x1409f73de']
// BB 0x1409f73fe-0x1409f7414 size=22 type=0 succ=['0x1409f6f0e'] pred=['0x1409f6ef4']
// BB 0x1409f7420-0x1409f742d size=13 type=0 succ=['0x1409f742d', '0x1409f75c4'] pred=['0x1409f742d', '0x1409f7443', '0x1409f7448', '0x1409f744f', '0x1409f7470', '0x1409f7486', '0x1409f748b']
// BB 0x1409f742d-0x1409f7443 size=22 type=0 succ=['0x1409f7420', '0x1409f7443'] pred=['0x1409f6dd5', '0x1409f7420']
// BB 0x1409f7443-0x1409f7448 size=5 type=0 succ=['0x1409f7420', '0x1409f7448'] pred=['0x1409f742d']
// BB 0x1409f7448-0x1409f744f size=7 type=0 succ=['0x1409f7420', '0x1409f744f'] pred=['0x1409f7443']
// BB 0x1409f744f-0x1409f7470 size=33 type=0 succ=['0x1409f7420', '0x1409f7470'] pred=['0x1409f7448']
// BB 0x1409f7470-0x1409f7486 size=22 type=0 succ=['0x1409f7420', '0x1409f7486'] pred=['0x1409f744f']
// BB 0x1409f7486-0x1409f748b size=5 type=0 succ=['0x1409f7420', '0x1409f748b'] pred=['0x1409f7470']
// BB 0x1409f748b-0x1409f7492 size=7 type=0 succ=['0x1409f7420', '0x1409f7492'] pred=['0x1409f7486']
// BB 0x1409f7492-0x1409f74aa size=24 type=0 succ=['0x1409f74aa'] pred=['0x1409f748b']
// BB 0x1409f74aa-0x1409f74b3 size=9 type=0 succ=['0x1409f74b3', '0x1409f75c4'] pred=['0x1409f7492', '0x1409f74b3', '0x1409f74d0', '0x1409f74d5', '0x1409f74dc', '0x1409f7518', '0x1409f7591']
// BB 0x1409f74b3-0x1409f74d0 size=29 type=0 succ=['0x1409f74aa', '0x1409f74d0'] pred=['0x1409f74aa']
// BB 0x1409f74d0-0x1409f74d5 size=5 type=0 succ=['0x1409f74aa', '0x1409f74d5'] pred=['0x1409f74b3']
// BB 0x1409f74d5-0x1409f74dc size=7 type=0 succ=['0x1409f74aa', '0x1409f74dc'] pred=['0x1409f74d0']
// BB 0x1409f74dc-0x1409f74fd size=33 type=0 succ=['0x1409f74aa', '0x1409f74fd'] pred=['0x1409f74d5']
// BB 0x1409f74fd-0x1409f7513 size=22 type=0 succ=['0x1409f7513', '0x1409f751f'] pred=['0x1409f74dc']
// BB 0x1409f7513-0x1409f7518 size=5 type=0 succ=['0x1409f7518', '0x1409f751f'] pred=['0x1409f74fd']
// BB 0x1409f7518-0x1409f751f size=7 type=0 succ=['0x1409f74aa', '0x1409f751f'] pred=['0x1409f7513']
// BB 0x1409f751f-0x1409f753c size=29 type=0 succ=['0x1409f753c', '0x1409f8ccd'] pred=['0x1409f74fd', '0x1409f7513', '0x1409f7518']
// BB 0x1409f753c-0x1409f7580 size=68 type=0 succ=['0x1409f7580'] pred=['0x1409f751f']
// BB 0x1409f7580-0x1409f7591 size=17 type=0 succ=['0x1409f7591'] pred=['0x1409f753c']
// BB 0x1409f7591-0x1409f75c4 size=51 type=0 succ=['0x1409f74aa'] pred=['0x1409f7580']
// BB 0x1409f75c4-0x1409f75e9 size=37 type=0 succ=['0x1409f75e9', '0x1409f7c68'] pred=['0x1409f670c', '0x1409f6731', '0x1409f6dcc', '0x1409f7420', '0x1409f74aa']
// BB 0x1409f75e9-0x1409f75f2 size=9 type=0 succ=['0x1409f75f2', '0x1409f7c68'] pred=['0x1409f75c4']
// BB 0x1409f75f2-0x1409f769d size=171 type=0 succ=['0x1409f769d', '0x1409f76e7'] pred=['0x1409f75e9']
// BB 0x1409f769d-0x1409f76a2 size=5 type=0 succ=['0x1409f7873'] pred=['0x1409f75f2']
// BB 0x1409f76b0-0x1409f76e7 size=55 type=0 succ=['0x1409f76e7', '0x1409f7873'] pred=['0x1409f7760', '0x1409f7774']
// BB 0x1409f76e7-0x1409f7719 size=50 type=0 succ=['0x1409f7719'] pred=['0x1409f75f2', '0x1409f76b0', '0x1409f785e']
// BB 0x1409f7719-0x1409f772f size=22 type=0 succ=['0x1409f772f', '0x1409f7760'] pred=['0x1409f76e7']
// BB 0x1409f772f-0x1409f7734 size=5 type=0 succ=['0x1409f7734', '0x1409f7760'] pred=['0x1409f7719']
// BB 0x1409f7734-0x1409f773b size=7 type=0 succ=['0x1409f773b', '0x1409f7760'] pred=['0x1409f772f']
// BB 0x1409f773b-0x1409f7755 size=26 type=0 succ=['0x1409f7755', '0x1409f7782'] pred=['0x1409f7734']
// BB 0x1409f7755-0x1409f7760 size=11 type=0 succ=['0x1409f7760'] pred=['0x1409f773b']
// BB 0x1409f7760-0x1409f7774 size=20 type=0 succ=['0x1409f76b0', '0x1409f7774'] pred=['0x1409f7719', '0x1409f772f', '0x1409f7734', '0x1409f7755']
// BB 0x1409f7774-0x1409f7782 size=14 type=0 succ=['0x1409f76b0'] pred=['0x1409f7760']
// BB 0x1409f7782-0x1409f7789 size=7 type=0 succ=['0x1409f7789'] pred=['0x1409f773b']
// BB 0x1409f7789-0x1409f779e size=21 type=0 succ=['0x1409f779e'] pred=['0x1409f7782']
// BB 0x1409f779e-0x1409f77a7 size=9 type=0 succ=['0x1409f77a7', '0x1409f785e'] pred=['0x1409f7789']
// BB 0x1409f77a7-0x1409f77b0 size=9 type=0 succ=['0x1409f77b0', '0x1409f785e'] pred=['0x1409f779e']
// BB 0x1409f77b0-0x1409f77bd size=13 type=0 succ=['0x1409f77bd', '0x1409f785e'] pred=['0x1409f77a7']
// BB 0x1409f77bd-0x1409f77c3 size=6 type=0 succ=['0x1409f77c3', '0x1409f7a6e'] pred=['0x1409f77b0']
// BB 0x1409f77c3-0x1409f77e9 size=38 type=0 succ=['0x1409f77e9', '0x1409f8925'] pred=['0x1409f77bd']
// BB 0x1409f77e9-0x1409f7819 size=48 type=0 succ=['0x1409f7819', '0x1409f7826'] pred=['0x1409f77c3']
// BB 0x1409f7819-0x1409f7826 size=13 type=0 succ=['0x1409f7826'] pred=['0x1409f77e9']
// BB 0x1409f7826-0x1409f785e size=56 type=0 succ=['0x1409f785e'] pred=['0x1409f77e9', '0x1409f7819']
// BB 0x1409f785e-0x1409f7873 size=21 type=0 succ=['0x1409f76e7', '0x1409f7873'] pred=['0x1409f779e', '0x1409f77a7', '0x1409f77b0', '0x1409f7826']
// BB 0x1409f7873-0x1409f787a size=7 type=0 succ=['0x1409f787a'] pred=['0x1409f769d', '0x1409f76b0', '0x1409f785e']
// BB 0x1409f787a-0x1409f7895 size=27 type=0 succ=['0x1409f7895', '0x1409f7a33'] pred=['0x1409f7873']
// BB 0x1409f7895-0x1409f78c8 size=51 type=0 succ=['0x1409f78c8', '0x1409f8663'] pred=['0x1409f787a']
// BB 0x1409f78c8-0x1409f790f size=71 type=0 succ=['0x1409f790f', '0x1409f8678'] pred=['0x1409f7895']
// BB 0x1409f790f-0x1409f793f size=48 type=0 succ=['0x1409f793f'] pred=['0x1409f78c8']
// BB 0x1409f793f-0x1409f796a size=43 type=0 succ=['0x1409f796a', '0x1409f7977'] pred=['0x1409f790f']
// BB 0x1409f796a-0x1409f7977 size=13 type=0 succ=['0x1409f7977'] pred=['0x1409f793f']
// BB 0x1409f7977-0x1409f7994 size=29 type=0 succ=['0x1409f7994', '0x1409f868d'] pred=['0x1409f793f', '0x1409f796a']
// BB 0x1409f7994-0x1409f79d3 size=63 type=0 succ=['0x1409f79d3'] pred=['0x1409f7977']
// BB 0x1409f79d3-0x1409f7a18 size=69 type=0 succ=['0x1409f7a18', '0x1409f7a3c'] pred=['0x1409f7994']
// BB 0x1409f7a18-0x1409f7a1b size=3 type=0 succ=['0x1409f7a1b'] pred=['0x1409f79d3']
// BB 0x1409f7a1b-0x1409f7a22 size=7 type=0 succ=['0x1409f7a22'] pred=['0x1409f7a18', '0x1409f7a3e']
// BB 0x1409f7a22-0x1409f7a2d size=11 type=4 succ=[] pred=['0x1409f7a1b']
// BB 0x1409f7a2e-0x1409f7a33 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7a33-0x1409f7a3c size=9 type=0 succ=['0x1409f7b6f'] pred=['0x1409f787a']
// BB 0x1409f7a3c-0x1409f7a3e size=2 type=0 succ=['0x1409f7a3e', '0x1409f7a89'] pred=['0x1409f79d3']
// BB 0x1409f7a3e-0x1409f7a5b size=29 type=0 succ=['0x1409f7a1b', '0x1409f7a5b'] pred=['0x1409f7a3c']
// BB 0x1409f7a5b-0x1409f7a6e size=19 type=0 succ=['0x1409f7a8f'] pred=['0x1409f7a3e']
// BB 0x1409f7a6e-0x1409f7a70 size=2 type=0 succ=['0x1409f7a70'] pred=['0x1409f77bd']
// BB 0x1409f7a70-0x1409f7a77 size=7 type=0 succ=['0x1409f7a77'] pred=['0x1409f7a6e', '0x1409f8925']
// BB 0x1409f7a77-0x1409f7a83 size=12 type=4 succ=[] pred=['0x1409f7a70']
// BB 0x1409f7a84-0x1409f7a89 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7a89-0x1409f7a8f size=6 type=0 succ=['0x1409f7a8f'] pred=['0x1409f7a3c']
// BB 0x1409f7a8f-0x1409f7ab2 size=35 type=0 succ=['0x1409f7ab2'] pred=['0x1409f7a5b', '0x1409f7a89']
// BB 0x1409f7ab2-0x1409f7add size=43 type=0 succ=['0x1409f7add', '0x1409f7aea'] pred=['0x1409f7a8f']
// BB 0x1409f7add-0x1409f7aea size=13 type=0 succ=['0x1409f7aea'] pred=['0x1409f7ab2']
// BB 0x1409f7aea-0x1409f7af6 size=12 type=0 succ=['0x1409f7af6', '0x1409f7b08'] pred=['0x1409f7ab2', '0x1409f7add']
// BB 0x1409f7af6-0x1409f7b08 size=18 type=0 succ=['0x1409f7b08'] pred=['0x1409f7aea']
// BB 0x1409f7b08-0x1409f7b37 size=47 type=0 succ=['0x1409f7b37', '0x1409f7b44'] pred=['0x1409f7aea', '0x1409f7af6']
// BB 0x1409f7b37-0x1409f7b44 size=13 type=0 succ=['0x1409f7b44'] pred=['0x1409f7b08']
// BB 0x1409f7b44-0x1409f7b6f size=43 type=0 succ=['0x1409f7b6f'] pred=['0x1409f7b08', '0x1409f7b37']
// BB 0x1409f7b6f-0x1409f7bc1 size=82 type=0 succ=['0x1409f7bc1', '0x1409f7ecb'] pred=['0x1409f7a33', '0x1409f7b44']
// BB 0x1409f7bc1-0x1409f7bc6 size=5 type=0 succ=['0x1409f7bc6', '0x1409f7bdc'] pred=['0x1409f7b6f']
// BB 0x1409f7bc6-0x1409f7bdc size=22 type=0 succ=['0x1409f7bdc'] pred=['0x1409f7bc1', '0x1409f7ecb']
// BB 0x1409f7bdc-0x1409f7be8 size=12 type=0 succ=['0x1409f7be8', '0x1409f7bfd'] pred=['0x1409f7bc1', '0x1409f7bc6']
// BB 0x1409f7be8-0x1409f7bfd size=21 type=0 succ=['0x1409f7bfd'] pred=['0x1409f7bdc']
// BB 0x1409f7bfd-0x1409f7c09 size=12 type=0 succ=['0x1409f7c09', '0x1409f7c42'] pred=['0x1409f7bdc', '0x1409f7be8']
// BB 0x1409f7c09-0x1409f7c16 size=13 type=0 succ=['0x1409f7c29'] pred=['0x1409f7bfd']
// BB 0x1409f7c20-0x1409f7c29 size=9 type=0 succ=['0x1409f7c29', '0x1409f7c42'] pred=['0x1409f7c29', '0x1409f7c32']
// BB 0x1409f7c29-0x1409f7c32 size=9 type=0 succ=['0x1409f7c20', '0x1409f7c32'] pred=['0x1409f7c09', '0x1409f7c20']
// BB 0x1409f7c32-0x1409f7c42 size=16 type=0 succ=['0x1409f7c20'] pred=['0x1409f7c29']
// BB 0x1409f7c42-0x1409f7c4e size=12 type=0 succ=['0x1409f7c4e', '0x1409f7c68'] pred=['0x1409f7bfd', '0x1409f7c20']
// BB 0x1409f7c4e-0x1409f7c68 size=26 type=0 succ=['0x1409f7c68'] pred=['0x1409f7c42']
// BB 0x1409f7c68-0x1409f7cae size=70 type=0 succ=['0x1409f7cae', '0x1409f7cc0'] pred=['0x1409f75c4', '0x1409f75e9', '0x1409f7c42', '0x1409f7c4e']
// BB 0x1409f7cae-0x1409f7cc0 size=18 type=0 succ=['0x1409f7cc0'] pred=['0x1409f7c68']
// BB 0x1409f7cc0-0x1409f7cf0 size=48 type=0 succ=['0x1409f7cf0'] pred=['0x1409f7c68', '0x1409f7cae']
// BB 0x1409f7cf0-0x1409f7d00 size=16 type=0 succ=['0x1409f7d00', '0x1409f7d19'] pred=['0x1409f7cc0', '0x1409f7d0e']
// BB 0x1409f7d00-0x1409f7d0e size=14 type=0 succ=['0x1409f7d0e'] pred=['0x1409f7cf0']
// BB 0x1409f7d0e-0x1409f7d19 size=11 type=0 succ=['0x1409f7cf0'] pred=['0x1409f7d00']
// BB 0x1409f7d19-0x1409f7d25 size=12 type=0 succ=['0x1409f7d25', '0x1409f7d3b'] pred=['0x1409f7cf0']
// BB 0x1409f7d25-0x1409f7d3b size=22 type=0 succ=['0x1409f7d3b'] pred=['0x1409f7d19']
// BB 0x1409f7d3b-0x1409f7d79 size=62 type=2 succ=[] pred=['0x1409f7d19', '0x1409f7d25']
// BB 0x1409f7d79-0x1409f7d7c size=3 type=0 succ=['0x1409f7d7c'] pred=['0x1409f189c']
// BB 0x1409f7d7c-0x1409f7d83 size=7 type=0 succ=['0x1409f7d83'] pred=['0x1409f18d9', '0x1409f7d79']
// BB 0x1409f7d83-0x1409f7d8e size=11 type=4 succ=[] pred=['0x1409f7d7c']
// BB 0x1409f7d8f-0x1409f7d94 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7d94-0x1409f7d96 size=2 type=0 succ=['0x1409f7d96'] pred=['0x1409f4957']
// BB 0x1409f7d96-0x1409f7da2 size=12 type=4 succ=[] pred=['0x1409f7d94', '0x1409f8c86']
// BB 0x1409f7da3-0x1409f7da8 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7da8-0x1409f7daa size=2 type=0 succ=['0x1409f7daa'] pred=['0x1409f5066']
// BB 0x1409f7daa-0x1409f7db1 size=7 type=0 succ=['0x1409f7db1'] pred=['0x1409f7da8', '0x1409f8c97']
// BB 0x1409f7db1-0x1409f7db6 size=5 type=4 succ=[] pred=['0x1409f7daa']
// BB 0x1409f7db7-0x1409f7dbc size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7dbc-0x1409f7dbe size=2 type=0 succ=['0x1409f7dbe'] pred=['0x1409f43e3']
// BB 0x1409f7dbe-0x1409f7dc5 size=7 type=0 succ=['0x1409f7dc5'] pred=['0x1409f7dbc', '0x1409f8cdf']
// BB 0x1409f7dc5-0x1409f7dd1 size=12 type=4 succ=[] pred=['0x1409f7dbe']
// BB 0x1409f7dd2-0x1409f7dd7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7dd7-0x1409f7de3 size=12 type=4 succ=[] pred=['0x1409f6678']
// BB 0x1409f7de4-0x1409f7de9 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7de9-0x1409f7df7 size=14 type=0 succ=['0x1409f7df7'] pred=['0x1409f3701']
// BB 0x1409f7df7-0x1409f7e22 size=43 type=4 succ=[] pred=['0x1409f7de9']
// BB 0x1409f7e23-0x1409f7e28 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7e28-0x1409f7e3e size=22 type=0 succ=['0x1409f4227'] pred=['0x1409f420d']
// BB 0x1409f7e3e-0x1409f7e40 size=2 type=0 succ=['0x1409f7e40'] pred=['0x1409f6c51']
// BB 0x1409f7e40-0x1409f7e4c size=12 type=4 succ=[] pred=['0x1409f7e3e', '0x1409f8d3e']
// BB 0x1409f7e4d-0x1409f7e52 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7e52-0x1409f7e54 size=2 type=0 succ=['0x1409f7e54'] pred=['0x1409f6fc1']
// BB 0x1409f7e54-0x1409f7e60 size=12 type=4 succ=[] pred=['0x1409f7e52', '0x1409f8d2d']
// BB 0x1409f7e61-0x1409f7e66 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7e66-0x1409f7e6d size=7 type=0 succ=['0x1409f7e6d'] pred=['0x1409f42b2']
// BB 0x1409f7e6d-0x1409f7e8f size=34 type=0 succ=['0x1409f42cc'] pred=['0x1409f7e66']
// BB 0x1409f7e8f-0x1409f7e96 size=7 type=0 succ=['0x1409f7e96'] pred=['0x1409f55ad']
// BB 0x1409f7e96-0x1409f7eb5 size=31 type=0 succ=['0x1409f55c4'] pred=['0x1409f7e8f']
// BB 0x1409f7eb5-0x1409f7ecb size=22 type=0 succ=['0x1409f6754'] pred=['0x1409f673a']
// BB 0x1409f7ecb-0x1409f7eef size=36 type=0 succ=['0x1409f7bc6'] pred=['0x1409f7b6f']
// BB 0x1409f7eef-0x1409f7efd size=14 type=0 succ=['0x1409f7efd'] pred=['0x1409f03b2']
// BB 0x1409f7efd-0x1409f7f28 size=43 type=4 succ=[] pred=['0x1409f7eef']
// BB 0x1409f7f29-0x1409f7f2e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7f2e-0x1409f7f3c size=14 type=0 succ=['0x1409f7f3c'] pred=['0x1409eff5a']
// BB 0x1409f7f3c-0x1409f7f67 size=43 type=4 succ=[] pred=['0x1409f7f2e']
// BB 0x1409f7f68-0x1409f7f6d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7f6d-0x1409f7f79 size=12 type=4 succ=[] pred=['0x1409f384d']
// BB 0x1409f7f7a-0x1409f7f7f size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7f7f-0x1409f7f8b size=12 type=4 succ=[] pred=['0x1409f3a2a']
// BB 0x1409f7f8c-0x1409f7f91 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7f91-0x1409f7f9d size=12 type=4 succ=[] pred=['0x1409f3b51']
// BB 0x1409f7f9e-0x1409f7fa3 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7fa3-0x1409f7faf size=12 type=4 succ=[] pred=['0x1409f3c78']
// BB 0x1409f7fb0-0x1409f7fb5 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7fb5-0x1409f7fc1 size=12 type=4 succ=[] pred=['0x1409f405b']
// BB 0x1409f7fc2-0x1409f7fc7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7fc7-0x1409f7fd3 size=12 type=4 succ=[] pred=['0x1409f4182']
// BB 0x1409f7fd4-0x1409f7fd9 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7fd9-0x1409f7fe0 size=7 type=0 succ=['0x1409f7fe0'] pred=['0x1409f27f5']
// BB 0x1409f7fe0-0x1409f7fef size=15 type=4 succ=[] pred=['0x1409f7fd9']
// BB 0x1409f7ff0-0x1409f7ff5 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f7ff5-0x1409f8001 size=12 type=4 succ=[] pred=['0x1409f6358']
// BB 0x1409f8002-0x1409f8007 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8007-0x1409f8015 size=14 type=0 succ=['0x1409f8015'] pred=['0x1409f2758']
// BB 0x1409f8015-0x1409f8040 size=43 type=4 succ=[] pred=['0x1409f8007']
// BB 0x1409f8041-0x1409f8046 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8046-0x1409f8054 size=14 type=0 succ=['0x1409f8054'] pred=['0x1409f2849']
// BB 0x1409f8054-0x1409f807f size=43 type=4 succ=[] pred=['0x1409f8046']
// BB 0x1409f8080-0x1409f8085 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8085-0x1409f8097 size=18 type=4 succ=[] pred=['0x1409f714b']
// BB 0x1409f8098-0x1409f809d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f809d-0x1409f80a9 size=12 type=4 succ=[] pred=['0x1409f3e43']
// BB 0x1409f80aa-0x1409f80af size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f80af-0x1409f80bb size=12 type=4 succ=[] pred=['0x1409f3e71']
// BB 0x1409f80bc-0x1409f80c1 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f80c1-0x1409f80ec size=43 type=4 succ=[] pred=['0x1409f1533']
// BB 0x1409f80ed-0x1409f80f2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f80f2-0x1409f8100 size=14 type=0 succ=['0x1409f8100'] pred=['0x1409f2e6b']
// BB 0x1409f8100-0x1409f812b size=43 type=4 succ=[] pred=['0x1409f80f2']
// BB 0x1409f812c-0x1409f8131 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8131-0x1409f8138 size=7 type=0 succ=['0x1409f8138'] pred=['0x1409f1db0']
// BB 0x1409f8138-0x1409f8147 size=15 type=4 succ=[] pred=['0x1409f8131']
// BB 0x1409f8148-0x1409f814d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f814d-0x1409f815b size=14 type=0 succ=['0x1409f815b'] pred=['0x1409f5430']
// BB 0x1409f815b-0x1409f8186 size=43 type=4 succ=[] pred=['0x1409f814d']
// BB 0x1409f8187-0x1409f818c size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f818c-0x1409f819a size=14 type=0 succ=['0x1409f819a'] pred=['0x1409f0c97']
// BB 0x1409f819a-0x1409f81c5 size=43 type=4 succ=[] pred=['0x1409f818c']
// BB 0x1409f81c6-0x1409f81cb size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f81cb-0x1409f81d9 size=14 type=0 succ=['0x1409f81d9'] pred=['0x1409f0d5e']
// BB 0x1409f81d9-0x1409f8204 size=43 type=4 succ=[] pred=['0x1409f81cb']
// BB 0x1409f8205-0x1409f820a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f820a-0x1409f8218 size=14 type=0 succ=['0x1409f8218'] pred=['0x1409f1119']
// BB 0x1409f8218-0x1409f8243 size=43 type=4 succ=[] pred=['0x1409f820a']
// BB 0x1409f8244-0x1409f8249 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8249-0x1409f8257 size=14 type=0 succ=['0x1409f8257'] pred=['0x1409f11e7']
// BB 0x1409f8257-0x1409f8282 size=43 type=4 succ=[] pred=['0x1409f8249']
// BB 0x1409f8283-0x1409f8288 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8288-0x1409f8296 size=14 type=0 succ=['0x1409f8296'] pred=['0x1409f12b8']
// BB 0x1409f8296-0x1409f82c1 size=43 type=4 succ=[] pred=['0x1409f8288']
// BB 0x1409f82c2-0x1409f82c7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f82c7-0x1409f82d5 size=14 type=0 succ=['0x1409f82d5'] pred=['0x1409f1d13']
// BB 0x1409f82d5-0x1409f8300 size=43 type=4 succ=[] pred=['0x1409f82c7']
// BB 0x1409f8301-0x1409f8306 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8306-0x1409f8314 size=14 type=0 succ=['0x1409f8314'] pred=['0x1409f1e04']
// BB 0x1409f8314-0x1409f833f size=43 type=4 succ=[] pred=['0x1409f8306']
// BB 0x1409f8340-0x1409f8345 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8345-0x1409f8354 size=15 type=4 succ=[] pred=['0x1409f67f3']
// BB 0x1409f8355-0x1409f835a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f835a-0x1409f8368 size=14 type=0 succ=['0x1409f8368'] pred=['0x1409f0800']
// BB 0x1409f8368-0x1409f8393 size=43 type=4 succ=[] pred=['0x1409f835a']
// BB 0x1409f8394-0x1409f8399 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8399-0x1409f83a7 size=14 type=0 succ=['0x1409f83a7'] pred=['0x1409f0a13']
// BB 0x1409f83a7-0x1409f83d2 size=43 type=4 succ=[] pred=['0x1409f8399']
// BB 0x1409f83d3-0x1409f83d8 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f83d8-0x1409f83e6 size=14 type=0 succ=['0x1409f83e6'] pred=['0x1409f0ae5']
// BB 0x1409f83e6-0x1409f8411 size=43 type=4 succ=[] pred=['0x1409f83d8']
// BB 0x1409f8412-0x1409f8417 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8417-0x1409f8423 size=12 type=4 succ=[] pred=['0x1409f6ead', '0x1409f6ecf']
// BB 0x1409f8424-0x1409f8429 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8429-0x1409f843b size=18 type=4 succ=[] pred=['0x1409f6920', '0x1409f693b']
// BB 0x1409f843c-0x1409f8441 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8441-0x1409f844f size=14 type=0 succ=['0x1409f844f'] pred=['0x1409f607d']
// BB 0x1409f844f-0x1409f8454 size=5 type=4 succ=[] pred=['0x1409f8441']
// BB 0x1409f8455-0x1409f845a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f845a-0x1409f8468 size=14 type=0 succ=['0x1409f8468'] pred=['0x1409f2539']
// BB 0x1409f8468-0x1409f8470 size=8 type=4 succ=[] pred=['0x1409f845a']
// BB 0x1409f8471-0x1409f8476 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8476-0x1409f847d size=7 type=0 succ=['0x1409f847d'] pred=['0x1409f08cc']
// BB 0x1409f847d-0x1409f8482 size=5 type=4 succ=[] pred=['0x1409f8476']
// BB 0x1409f8483-0x1409f8488 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8488-0x1409f8497 size=15 type=4 succ=[] pred=['0x1409f35bd']
// BB 0x1409f8498-0x1409f849d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f849d-0x1409f84ac size=15 type=4 succ=[] pred=['0x1409f36b3']
// BB 0x1409f84ad-0x1409f84b2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f84b2-0x1409f84bf size=13 type=0 succ=['0x1409f84bf'] pred=['0x1409f4eb7']
// BB 0x1409f84bf-0x1409f84cb size=12 type=4 succ=[] pred=['0x1409f84b2']
// BB 0x1409f84cc-0x1409f84d1 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f84d1-0x1409f84df size=14 type=0 succ=['0x1409f84df'] pred=['0x1409f5d6a']
// BB 0x1409f84df-0x1409f850a size=43 type=4 succ=[] pred=['0x1409f84d1']
// BB 0x1409f850b-0x1409f8510 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8510-0x1409f851e size=14 type=0 succ=['0x1409f851e'] pred=['0x1409f5e82']
// BB 0x1409f851e-0x1409f8549 size=43 type=4 succ=[] pred=['0x1409f8510']
// BB 0x1409f854a-0x1409f854f size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f854f-0x1409f8556 size=7 type=0 succ=['0x1409f8556'] pred=['0x1409f3628']
// BB 0x1409f8556-0x1409f8563 size=13 type=4 succ=[] pred=['0x1409f854f']
// BB 0x1409f8564-0x1409f8569 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8569-0x1409f8578 size=15 type=4 succ=[] pred=['0x1409ef4c7']
// BB 0x1409f8579-0x1409f857e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f857e-0x1409f858d size=15 type=4 succ=[] pred=['0x1409ef4fa']
// BB 0x1409f858e-0x1409f8593 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8593-0x1409f85a2 size=15 type=4 succ=[] pred=['0x1409ef5a9']
// BB 0x1409f85a3-0x1409f85a8 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f85a8-0x1409f85b5 size=13 type=4 succ=[] pred=['0x1409ef5c6']
// BB 0x1409f85b6-0x1409f85bb size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f85bb-0x1409f85c9 size=14 type=0 succ=['0x1409f85c9'] pred=['0x1409f30b8']
// BB 0x1409f85c9-0x1409f85d8 size=15 type=4 succ=[] pred=['0x1409f85bb']
// BB 0x1409f85d9-0x1409f85de size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f85de-0x1409f85ed size=15 type=4 succ=[] pred=['0x1409f6e5d']
// BB 0x1409f85ee-0x1409f85f3 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f85f3-0x1409f8601 size=14 type=0 succ=['0x1409f8601'] pred=['0x1409f30dc']
// BB 0x1409f8601-0x1409f862c size=43 type=4 succ=[] pred=['0x1409f85f3']
// BB 0x1409f862d-0x1409f8632 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8632-0x1409f8641 size=15 type=4 succ=[] pred=['0x1409f641a']
// BB 0x1409f8642-0x1409f8647 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8647-0x1409f864e size=7 type=0 succ=['0x1409f864e'] pred=['0x1409f3386']
// BB 0x1409f864e-0x1409f865d size=15 type=4 succ=[] pred=['0x1409f8647']
// BB 0x1409f865e-0x1409f8663 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8663-0x1409f8672 size=15 type=4 succ=[] pred=['0x1409f7895']
// BB 0x1409f8673-0x1409f8678 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8678-0x1409f8687 size=15 type=4 succ=[] pred=['0x1409f78c8']
// BB 0x1409f8688-0x1409f868d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f868d-0x1409f869c size=15 type=4 succ=[] pred=['0x1409f7977']
// BB 0x1409f869d-0x1409f86a2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f86a2-0x1409f86b1 size=15 type=4 succ=[] pred=['0x1409eff0c']
// BB 0x1409f86b2-0x1409f86b7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f86b7-0x1409f86c6 size=15 type=4 succ=[] pred=['0x1409efd21']
// BB 0x1409f86c7-0x1409f86cc size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f86cc-0x1409f86d4 size=8 type=0 succ=['0x1409f38c6'] pred=['0x1409f0099']
// BB 0x1409f86d4-0x1409f86e3 size=15 type=4 succ=[] pred=['0x1409f0179']
// BB 0x1409f86e4-0x1409f86e9 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f86e9-0x1409f86f8 size=15 type=4 succ=[] pred=['0x1409efe22']
// BB 0x1409f86f9-0x1409f86fe size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f86fe-0x1409f8706 size=8 type=0 succ=['0x1409f38ec'] pred=['0x1409efce2']
// BB 0x1409f8706-0x1409f8715 size=15 type=4 succ=[] pred=['0x1409f0364']
// BB 0x1409f8716-0x1409f871b size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f871b-0x1409f872a size=15 type=4 succ=[] pred=['0x1409f027a']
// BB 0x1409f872b-0x1409f8730 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8730-0x1409f873f size=15 type=4 succ=[] pred=['0x1409f01d1']
// BB 0x1409f8740-0x1409f8745 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8745-0x1409f8754 size=15 type=4 succ=[] pred=['0x1409efd79']
// BB 0x1409f8755-0x1409f875a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f875a-0x1409f8762 size=8 type=0 succ=['0x1409f38a0'] pred=['0x1409f013a']
// BB 0x1409f8762-0x1409f8770 size=14 type=0 succ=['0x1409f8770'] pred=['0x1409f33aa']
// BB 0x1409f8770-0x1409f879b size=43 type=4 succ=[] pred=['0x1409f8762']
// BB 0x1409f879c-0x1409f87a1 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f87a1-0x1409f87ad size=12 type=0 succ=['0x1409f3873'] pred=['0x1409f0523']
// BB 0x1409f87ad-0x1409f87b5 size=8 type=0 succ=['0x1409f3e9e'] pred=['0x1409f05b9']
// BB 0x1409f87b5-0x1409f87c4 size=15 type=4 succ=[] pred=['0x1409f234d']
// BB 0x1409f87c5-0x1409f87ca size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f87ca-0x1409f87d9 size=15 type=4 succ=[] pred=['0x1409f2230']
// BB 0x1409f87da-0x1409f87df size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f87df-0x1409f87ee size=15 type=4 succ=[] pred=['0x1409f204a']
// BB 0x1409f87ef-0x1409f87f4 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f87f4-0x1409f8803 size=15 type=4 succ=[] pred=['0x1409f2143']
// BB 0x1409f8804-0x1409f8809 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8809-0x1409f8818 size=15 type=4 succ=[] pred=['0x1409f2213']
// BB 0x1409f8819-0x1409f881e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f881e-0x1409f882d size=15 type=4 succ=[] pred=['0x1409f2160']
// BB 0x1409f882e-0x1409f8833 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8833-0x1409f8842 size=15 type=4 succ=[] pred=['0x1409f0f2c']
// BB 0x1409f8843-0x1409f8848 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8848-0x1409f8854 size=12 type=0 succ=['0x1409f3ed5'] pred=['0x1409f0ebb']
// BB 0x1409f8854-0x1409f885b size=7 type=0 succ=['0x1409f885b'] pred=['0x1409f02d9']
// BB 0x1409f885b-0x1409f8868 size=13 type=4 succ=[] pred=['0x1409f8854']
// BB 0x1409f8869-0x1409f886e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f886e-0x1409f8875 size=7 type=0 succ=['0x1409f8875'] pred=['0x1409efe81']
// BB 0x1409f8875-0x1409f8882 size=13 type=4 succ=[] pred=['0x1409f886e']
// BB 0x1409f8883-0x1409f8888 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8888-0x1409f8897 size=15 type=4 succ=[] pred=['0x1409f2d28']
// BB 0x1409f8898-0x1409f889d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f889d-0x1409f88a4 size=7 type=0 succ=['0x1409f88a4'] pred=['0x1409f20b8']
// BB 0x1409f88a4-0x1409f88b1 size=13 type=4 succ=[] pred=['0x1409f889d']
// BB 0x1409f88b2-0x1409f88b7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f88b7-0x1409f88be size=7 type=0 succ=['0x1409f88be'] pred=['0x1409f22c2']
// BB 0x1409f88be-0x1409f88cb size=13 type=4 succ=[] pred=['0x1409f88b7']
// BB 0x1409f88cc-0x1409f88d1 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f88d1-0x1409f88e0 size=15 type=4 succ=[] pred=['0x1409f27d8']
// BB 0x1409f88e1-0x1409f88e6 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f88e6-0x1409f88f5 size=15 type=4 succ=[] pred=['0x1409f270a']
// BB 0x1409f88f6-0x1409f88fb size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f88fb-0x1409f890a size=15 type=4 succ=[] pred=['0x1409f2652']
// BB 0x1409f890b-0x1409f8910 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8910-0x1409f891f size=15 type=4 succ=[] pred=['0x1409f261f']
// BB 0x1409f8920-0x1409f8925 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8925-0x1409f8936 size=17 type=0 succ=['0x1409f7a70'] pred=['0x1409f77c3']
// BB 0x1409f8936-0x1409f893d size=7 type=0 succ=['0x1409f893d'] pred=['0x1409f0fd3']
// BB 0x1409f893d-0x1409f894c size=15 type=4 succ=[] pred=['0x1409f8936']
// BB 0x1409f894d-0x1409f8952 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8952-0x1409f8961 size=15 type=4 succ=[] pred=['0x1409f173e']
// BB 0x1409f8962-0x1409f8967 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8967-0x1409f8976 size=15 type=4 succ=[] pred=['0x1409f168e']
// BB 0x1409f8977-0x1409f897c size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f897c-0x1409f898b size=15 type=4 succ=[] pred=['0x1409f1671']
// BB 0x1409f898c-0x1409f8991 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8991-0x1409f89a0 size=15 type=4 succ=[] pred=['0x1409f157f']
// BB 0x1409f89a1-0x1409f89a6 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f89a6-0x1409f89b5 size=15 type=4 succ=[] pred=['0x1409f1762']
// BB 0x1409f89b6-0x1409f89bb size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f89bb-0x1409f89ca size=15 type=4 succ=[] pred=['0x1409f187f']
// BB 0x1409f89cb-0x1409f89d0 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f89d0-0x1409f89de size=14 type=0 succ=['0x1409f89de'] pred=['0x1409f4f65']
// BB 0x1409f89de-0x1409f89ed size=15 type=4 succ=[] pred=['0x1409f89d0']
// BB 0x1409f89ee-0x1409f89f3 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f89f3-0x1409f8a02 size=15 type=4 succ=[] pred=['0x1409f2e1d']
// BB 0x1409f8a03-0x1409f8a08 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a08-0x1409f8a17 size=15 type=4 succ=[] pred=['0x1409f6f89']
// BB 0x1409f8a18-0x1409f8a1d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a1d-0x1409f8a2c size=15 type=4 succ=[] pred=['0x1409f530c']
// BB 0x1409f8a2d-0x1409f8a32 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a32-0x1409f8a39 size=7 type=0 succ=['0x1409f8a39'] pred=['0x1409f53c3']
// BB 0x1409f8a39-0x1409f8a48 size=15 type=4 succ=[] pred=['0x1409f8a32']
// BB 0x1409f8a49-0x1409f8a4e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a4e-0x1409f8a5c size=14 type=0 succ=['0x1409f8a5c'] pred=['0x1409f5142']
// BB 0x1409f8a5c-0x1409f8a6b size=15 type=4 succ=[] pred=['0x1409f8a4e']
// BB 0x1409f8a6c-0x1409f8a71 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a71-0x1409f8a78 size=7 type=0 succ=['0x1409f8a78'] pred=['0x1409f52df']
// BB 0x1409f8a78-0x1409f8a87 size=15 type=4 succ=[] pred=['0x1409f8a71']
// BB 0x1409f8a88-0x1409f8a8d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8a8d-0x1409f8a9c size=15 type=4 succ=[] pred=['0x1409f0c3a']
// BB 0x1409f8a9d-0x1409f8aa2 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8aa2-0x1409f8ab1 size=15 type=4 succ=[] pred=['0x1409f0d17']
// BB 0x1409f8ab2-0x1409f8ab7 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8ab7-0x1409f8ac5 size=14 type=0 succ=['0x1409f8ac5'] pred=['0x1409f5042']
// BB 0x1409f8ac5-0x1409f8ad4 size=15 type=4 succ=[] pred=['0x1409f8ab7']
// BB 0x1409f8ad5-0x1409f8ada size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8ada-0x1409f8ae1 size=7 type=0 succ=['0x1409f8ae1'] pred=['0x1409f17f4']
// BB 0x1409f8ae1-0x1409f8aee size=13 type=4 succ=[] pred=['0x1409f8ada']
// BB 0x1409f8aef-0x1409f8af4 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8af4-0x1409f8b03 size=15 type=4 succ=[] pred=['0x1409f1267']
// BB 0x1409f8b04-0x1409f8b09 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b09-0x1409f8b18 size=15 type=4 succ=[] pred=['0x1409f1199']
// BB 0x1409f8b19-0x1409f8b1e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b1e-0x1409f8b2d size=15 type=4 succ=[] pred=['0x1409f1099']
// BB 0x1409f8b2e-0x1409f8b33 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b33-0x1409f8b3a size=7 type=0 succ=['0x1409f8b3a'] pred=['0x1409f15e6']
// BB 0x1409f8b3a-0x1409f8b47 size=13 type=4 succ=[] pred=['0x1409f8b33']
// BB 0x1409f8b48-0x1409f8b4d size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b4d-0x1409f8b5c size=15 type=4 succ=[] pred=['0x1409f1d93']
// BB 0x1409f8b5d-0x1409f8b62 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b62-0x1409f8b71 size=15 type=4 succ=[] pred=['0x1409f1bda']
// BB 0x1409f8b72-0x1409f8b77 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b77-0x1409f8b86 size=15 type=4 succ=[] pred=['0x1409f1cc5']
// BB 0x1409f8b87-0x1409f8b8c size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8b8c-0x1409f8b9b size=15 type=4 succ=[] pred=['0x1409f1c0d']
// BB 0x1409f8b9c-0x1409f8ba1 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8ba1-0x1409f8bb0 size=15 type=4 succ=[] pred=['0x1409f4c9a']
// BB 0x1409f8bb1-0x1409f8bb6 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8bb6-0x1409f8bc5 size=15 type=4 succ=[] pred=['0x1409f4ccd']
// BB 0x1409f8bc6-0x1409f8bcb size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8bcb-0x1409f8bda size=15 type=4 succ=[] pred=['0x1409f4d7c']
// BB 0x1409f8bdb-0x1409f8be0 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8be0-0x1409f8bef size=15 type=4 succ=[] pred=['0x1409f1930']
// BB 0x1409f8bf0-0x1409f8bf5 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8bf5-0x1409f8c04 size=15 type=4 succ=[] pred=['0x1409f0793']
// BB 0x1409f8c05-0x1409f8c0a size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c0a-0x1409f8c19 size=15 type=4 succ=[] pred=['0x1409f09b6']
// BB 0x1409f8c1a-0x1409f8c1f size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c1f-0x1409f8c2e size=15 type=4 succ=[] pred=['0x1409f0a93']
// BB 0x1409f8c2f-0x1409f8c34 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c34-0x1409f8c3b size=7 type=0 succ=['0x1409f8c3b'] pred=['0x1409f4af5']
// BB 0x1409f8c3b-0x1409f8c48 size=13 type=4 succ=[] pred=['0x1409f8c34']
// BB 0x1409f8c49-0x1409f8c4e size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c4e-0x1409f8c5d size=15 type=4 succ=[] pred=['0x1409f6bde']
// BB 0x1409f8c5e-0x1409f8c63 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c63-0x1409f8c71 size=14 type=0 succ=['0x1409f8c71'] pred=['0x1409f523f']
// BB 0x1409f8c71-0x1409f8c80 size=15 type=4 succ=[] pred=['0x1409f8c63']
// BB 0x1409f8c81-0x1409f8c86 size=5 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8c86-0x1409f8c97 size=17 type=0 succ=['0x1409f7d96'] pred=['0x1409f4962']
// BB 0x1409f8c97-0x1409f8ca4 size=13 type=0 succ=['0x1409f7daa'] pred=['0x1409f50a2']
// BB 0x1409f8ca4-0x1409f8cb3 size=15 type=4 succ=[] pred=['0x1409f6ea0']
// BB 0x1409f8cb4-0x1409f8cb6 size=2 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8cb6-0x1409f8cbd size=7 type=0 succ=['0x1409f8cbd'] pred=['0x1409f481c']
// BB 0x1409f8cbd-0x1409f8cca size=13 type=4 succ=[] pred=['0x1409f8cb6']
// BB 0x1409f8ccb-0x1409f8ccd size=2 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8ccd-0x1409f8cdc size=15 type=4 succ=[] pred=['0x1409f751f']
// BB 0x1409f8cdd-0x1409f8cdf size=2 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8cdf-0x1409f8cf7 size=24 type=0 succ=['0x1409f7dbe'] pred=['0x1409f43f2']
// BB 0x1409f8cf7-0x1409f8d06 size=15 type=4 succ=[] pred=['0x1409f5d00']
// BB 0x1409f8d07-0x1409f8d09 size=2 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8d09-0x1409f8d18 size=15 type=4 succ=[] pred=['0x1409f5de8']
// BB 0x1409f8d19-0x1409f8d1b size=2 type=0 succ=['0x1409f8d2b'] pred=[]
// BB 0x1409f8d1b-0x1409f8d2a size=15 type=4 succ=[] pred=['0x1409f5e05']
// BB 0x1409f8d2b-0x1409f8d2d size=2 type=0 succ=[] pred=['0x1409f356c', '0x1409f3891', '0x1409f38b7', '0x1409f38dd', '0x1409f3903', '0x1409f391e', '0x1409f3eb2', '0x1409f3ecd', '0x1409f3ee5', '0x1409f3f00', '0x1409f5625', '0x1409f58b4', '0x1409f7a2e', '0x1409f7a84', '0x1409f7d8f', '0x1409f7da3', '0x1409f7db7', '0x1409f7dd2', '0x1409f7de4', '0x1409f7e23', '0x1409f7e4d', '0x1409f7e61', '0x1409f7f29', '0x1409f7f68', '0x1409f7f7a', '0x1409f7f8c', '0x1409f7f9e', '0x1409f7fb0', '0x1409f7fc2', '0x1409f7fd4', '0x1409f7ff0', '0x1409f8002', '0x1409f8041', '0x1409f8080', '0x1409f8098', '0x1409f80aa', '0x1409f80bc', '0x1409f80ed', '0x1409f812c', '0x1409f8148', '0x1409f8187', '0x1409f81c6', '0x1409f8205', '0x1409f8244', '0x1409f8283', '0x1409f82c2', '0x1409f8301', '0x1409f8340', '0x1409f8355', '0x1409f8394', '0x1409f83d3', '0x1409f8412', '0x1409f8424', '0x1409f843c', '0x1409f8455', '0x1409f8471', '0x1409f8483', '0x1409f8498', '0x1409f84ad', '0x1409f84cc', '0x1409f850b', '0x1409f854a', '0x1409f8564', '0x1409f8579', '0x1409f858e', '0x1409f85a3', '0x1409f85b6', '0x1409f85d9', '0x1409f85ee', '0x1409f862d', '0x1409f8642', '0x1409f865e', '0x1409f8673', '0x1409f8688', '0x1409f869d', '0x1409f86b2', '0x1409f86c7', '0x1409f86e4', '0x1409f86f9', '0x1409f8716', '0x1409f872b', '0x1409f8740', '0x1409f8755', '0x1409f879c', '0x1409f87c5', '0x1409f87da', '0x1409f87ef', '0x1409f8804', '0x1409f8819', '0x1409f882e', '0x1409f8843', '0x1409f8869', '0x1409f8883', '0x1409f8898', '0x1409f88b2', '0x1409f88cc', '0x1409f88e1', '0x1409f88f6', '0x1409f890b', '0x1409f8920', '0x1409f894d', '0x1409f8962', '0x1409f8977', '0x1409f898c', '0x1409f89a1', '0x1409f89b6', '0x1409f89cb', '0x1409f89ee', '0x1409f8a03', '0x1409f8a18', '0x1409f8a2d', '0x1409f8a49', '0x1409f8a6c', '0x1409f8a88', '0x1409f8a9d', '0x1409f8ab2', '0x1409f8ad5', '0x1409f8aef', '0x1409f8b04', '0x1409f8b19', '0x1409f8b2e', '0x1409f8b48', '0x1409f8b5d', '0x1409f8b72', '0x1409f8b87', '0x1409f8b9c', '0x1409f8bb1', '0x1409f8bc6', '0x1409f8bdb', '0x1409f8bf0', '0x1409f8c05', '0x1409f8c1a', '0x1409f8c2f', '0x1409f8c49', '0x1409f8c5e', '0x1409f8c81', '0x1409f8cb4', '0x1409f8ccb', '0x1409f8cdd', '0x1409f8d07', '0x1409f8d19']
// BB 0x1409f8d2d-0x1409f8d3e size=17 type=0 succ=['0x1409f7e54'] pred=['0x1409f6fd0']
// BB 0x1409f8d3e-0x1409f8d4f size=17 type=0 succ=['0x1409f7e40'] pred=['0x1409f6c60']
// BB 0x1409f8d4f-0x1409f8d62 size=19 type=0 succ=['0x1409f589d'] pred=['0x1409f575a']

// --- full disassembly ---
/*1409ef3f0*/ sub_1409EF3F0: push rbp
/*1409ef3f1*/  push r15
/*1409ef3f3*/  push r14
/*1409ef3f5*/  push r13
/*1409ef3f7*/  push r12
/*1409ef3f9*/  push rsi
/*1409ef3fa*/  push rdi
/*1409ef3fb*/  push rbx
/*1409ef3fc*/  sub rsp, 498h
/*1409ef403*/  lea rbp, [rsp+80h]
/*1409ef40b*/  movdqa [rbp+450h+var_50], xmm10
/*1409ef414*/  movdqa [rbp+450h+var_60], xmm9
/*1409ef41d*/  movdqa [rbp+450h+var_70], xmm8
/*1409ef426*/  movdqa [rbp+450h+var_80], xmm7
/*1409ef42e*/  movdqa [rbp+450h+var_90], xmm6
/*1409ef436*/  mov [rbp+450h+var_98], 0FFFFFFFFFFFFFFFEh
/*1409ef441*/  mov [rbp+450h+var_2F0], r9
/*1409ef448*/  mov [rbp+450h+var_220], r8
/*1409ef44f*/  mov r8, rdx
/*1409ef452*/  mov [rbp+450h+var_418], rcx
/*1409ef456*/  mov [rbp+450h+var_2A0], 0
/*1409ef461*/  mov [rbp+450h+var_298], 8
/*1409ef46c*/  mov [rbp+450h+var_290], 0
/*1409ef477*/ loc_1409EF477: lea rcx, aInstructions; "instructions"
/*1409ef47e*/  mov edx, 0Ch
/*1409ef483*/  mov [rbp+450h+var_1D8], r8
/*1409ef48a*/  call sub_141433D50
/*1409ef48f*/  nop
/*1409ef490*/  test rax, rax
/*1409ef493*/  jz loc_1409EF712
/*1409ef499*/  cmp byte ptr [rax], 3
/*1409ef49c*/  jnz loc_1409EF712
/*1409ef4a2*/  mov rdx, [rax+10h]
/*1409ef4a6*/  mov r8, [rax+18h]
/*1409ef4aa*/  lea rcx, [rbp+450h+var_140]
/*1409ef4b1*/  call sub_1409EACD0
/*1409ef4b6*/  nop
/*1409ef4b7*/  mov rsi, qword ptr [rbp+450h+var_130]
/*1409ef4be*/  test rsi, rsi
/*1409ef4c1*/  jz loc_1409EF6F3
/*1409ef4c7*/  mov qword ptr [rbp+450h+var_170], 0
/*1409ef4d2*/  mov qword ptr [rbp+450h+var_160], 0
/*1409ef4dd*/  call nullsub_1
/*1409ef4e2*/  mov ecx, 4
/*1409ef4e7*/  mov edx, 1
/*1409ef4ec*/  call sub_140001650
/*1409ef4f1*/  test rax, rax
/*1409ef4f4*/  jz loc_1409F8569
/*1409ef4fa*/  mov dword ptr [rax], 656C6F72h
/*1409ef500*/  mov qword ptr [rbp+450h+var_280], 4
/*1409ef50b*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409ef512*/  mov qword ptr [rbp+450h+var_270], 4
/*1409ef51d*/  call nullsub_1
/*1409ef522*/  mov ecx, 6
/*1409ef527*/  mov edx, 1
/*1409ef52c*/  call sub_140001650
/*1409ef531*/  test rax, rax
/*1409ef534*/  mov [rbp+450h+var_A8], rax
/*1409ef53b*/  jz loc_1409F857E
/*1409ef541*/  mov word ptr [rax+4], 6D65h
/*1409ef547*/  mov dword ptr [rax], 74737973h
/*1409ef54d*/  mov byte ptr [rbp+450h+var_110], 3
/*1409ef554*/  mov qword ptr [rbp+450h+var_110+8], 6
/*1409ef55f*/  mov qword ptr [rbp+450h+var_100], rax
/*1409ef566*/  mov qword ptr [rbp+450h+var_100+8], 6
/*1409ef571*/ loc_1409EF571: lea rcx, [rbp+450h+var_1B0]
/*1409ef578*/  lea rdx, [rbp+450h+var_170]
/*1409ef57f*/  lea r8, [rbp+450h+var_280]
/*1409ef586*/  lea r9, [rbp+450h+var_110]
/*1409ef58d*/  call sub_140307860
/*1409ef592*/  nop
/*1409ef593*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409ef59a*/  jz short loc_1409EF5A9
/*1409ef59c*/ loc_1409EF59C: lea rcx, [rbp+450h+var_1B0]
/*1409ef5a3*/  call sub_1400104F0
/*1409ef5a8*/  nop
/*1409ef5a9*/ loc_1409EF5A9: call nullsub_1
/*1409ef5ae*/  mov ecx, 7
/*1409ef5b3*/  mov edx, 1
/*1409ef5b8*/  call sub_140001650
/*1409ef5bd*/  test rax, rax
/*1409ef5c0*/  jz loc_1409F8593
/*1409ef5c6*/  mov dword ptr [rax+3], 746E6574h
/*1409ef5cd*/  mov dword ptr [rax], 746E6F63h
/*1409ef5d3*/  mov qword ptr [rbp+450h+var_280], 7
/*1409ef5de*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409ef5e5*/  mov qword ptr [rbp+450h+var_270], 7
/*1409ef5f0*/  mov r14, qword ptr [rbp+450h+var_140+8]
/*1409ef5f7*/  call nullsub_1
/*1409ef5fc*/  mov edx, 1
/*1409ef601*/  mov rcx, rsi
/*1409ef604*/  call sub_140001650
/*1409ef609*/  test rax, rax
/*1409ef60c*/  mov [rbp+450h+var_A8], rax
/*1409ef613*/  jz loc_1409F85A8
/*1409ef619*/  mov rdi, rax
/*1409ef61c*/  mov rcx, rax
/*1409ef61f*/  mov rdx, r14
/*1409ef622*/  mov r8, rsi
/*1409ef625*/  call sub_141684120
/*1409ef62a*/  mov byte ptr [rbp+450h+var_110], 3
/*1409ef631*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409ef638*/  mov qword ptr [rbp+450h+var_100], rdi
/*1409ef63f*/  mov qword ptr [rbp+450h+var_100+8], rsi
/*1409ef646*/ loc_1409EF646: lea rcx, [rbp+450h+var_1B0]
/*1409ef64d*/  lea rdx, [rbp+450h+var_170]
/*1409ef654*/  lea r8, [rbp+450h+var_280]
/*1409ef65b*/  lea r9, [rbp+450h+var_110]
/*1409ef662*/  call sub_140307860
/*1409ef667*/  nop
/*1409ef668*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409ef66f*/  jz short loc_1409EF67E
/*1409ef671*/ loc_1409EF671: lea rcx, [rbp+450h+var_1B0]
/*1409ef678*/  call sub_1400104F0
/*1409ef67d*/  nop
/*1409ef67e*/ loc_1409EF67E: movdqu xmm0, [rbp+450h+var_170]
/*1409ef686*/  movdqu [rbp+450h+var_110+8], xmm0
/*1409ef68e*/  mov rax, qword ptr [rbp+450h+var_160]
/*1409ef695*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409ef69c*/  mov byte ptr [rbp+450h+var_110], 5
/*1409ef6a3*/  mov rsi, [rbp+450h+var_290]
/*1409ef6aa*/  cmp rsi, [rbp+450h+var_2A0]
/*1409ef6b1*/  jnz short loc_1409EF6C0
/*1409ef6b3*/ loc_1409EF6B3: lea rcx, [rbp+450h+var_2A0]
/*1409ef6ba*/  call sub_1416890A0
/*1409ef6bf*/  nop
/*1409ef6c0*/ loc_1409EF6C0: mov rax, [rbp+450h+var_298]
/*1409ef6c7*/  mov rcx, rsi
/*1409ef6ca*/  shl rcx, 5
/*1409ef6ce*/  movdqu xmm0, [rbp+450h+var_110]
/*1409ef6d6*/  movdqu xmm1, [rbp+450h+var_100]
/*1409ef6de*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409ef6e4*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409ef6e9*/  inc rsi
/*1409ef6ec*/  mov [rbp+450h+var_290], rsi
/*1409ef6f3*/ loc_1409EF6F3: mov rdx, qword ptr [rbp+450h+var_140]
/*1409ef6fa*/  test rdx, rdx
/*1409ef6fd*/  jz short loc_1409EF712
/*1409ef6ff*/  mov rcx, qword ptr [rbp+450h+var_140+8]
/*1409ef706*/  mov r8d, 1
/*1409ef70c*/  call sub_140001660
/*1409ef711*/  nop
/*1409ef712*/ loc_1409EF712: lea rcx, aInput_2; "input"
/*1409ef719*/  mov edx, 5
/*1409ef71e*/  mov r8, [rbp+450h+var_1D8]
/*1409ef725*/  call sub_141433D50
/*1409ef72a*/  nop
/*1409ef72b*/  test rax, rax
/*1409ef72e*/  jz loc_1409F3514
/*1409ef734*/  cmp byte ptr [rax], 4
/*1409ef737*/  jnz loc_1409F3514
/*1409ef73d*/  mov r12, [rax+10h]
/*1409ef741*/  mov rbx, [rax+18h]
/*1409ef745*/  shl rbx, 5
/*1409ef749*/  add rbx, r12
/*1409ef74c*/  mov r13, 0FFFFFFFFFFFFFFFFh
/*1409ef753*/  movdqa xmm6, cs:xmmword_1417562D0
/*1409ef75b*/  movd xmm7, cs:dword_1417640B0
/*1409ef763*/  movdqa xmm8, cs:xmmword_1417640C0
/*1409ef76c*/  movdqa xmm9, cs:xmmword_1417A2D60
/*1409ef775*/  nop word ptr [rax+rax+00000000h]
/*1409ef780*/ def_1409EF809: mov rsi, r13; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22  // jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef783*/  mov rcx, r9
/*1409ef786*/  cmp r12, rbx
/*1409ef789*/  jz loc_1409F34FB
/*1409ef78f*/  mov r14, r12
/*1409ef792*/  mov [rbp+450h+var_A8], rcx
/*1409ef799*/  mov [rbp+450h+var_210], rsi
/*1409ef7a0*/ loc_1409EF7A0: mov edx, 4
/*1409ef7a5*/  lea rcx, aType_8; "type"
/*1409ef7ac*/  mov r8, r12
/*1409ef7af*/  call sub_141433D50
/*1409ef7b4*/  nop
/*1409ef7b5*/  lea r12, [r14+20h]
/*1409ef7b9*/  mov r8, [rbp+450h+var_A8]
/*1409ef7c0*/  mov r9, r8
/*1409ef7c3*/  mov r13, rsi
/*1409ef7c6*/  test rax, rax
/*1409ef7c9*/  jz short def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef7cb*/  cmp byte ptr [rax], 3
/*1409ef7ce*/  mov r9, r8
/*1409ef7d1*/  mov r13, rsi
/*1409ef7d4*/  jnz short def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef7d6*/  mov rdx, [rax+18h]
/*1409ef7da*/  add rdx, 0FFFFFFFFFFFFFFF9h; switch 17 cases  // switch 17 cases
/*1409ef7de*/  mov r9, r8
/*1409ef7e1*/  mov r13, rsi
/*1409ef7e4*/  cmp rdx, 10h
/*1409ef7e8*/  ja short def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef7ea*/  mov rax, [rax+10h]
/*1409ef7ee*/  lea rcx, jpt_1409EF809
/*1409ef7f5*/  movsxd rdx, ds:(jpt_1409EF809 - 1417AADF8h)[rcx+rdx*4]
/*1409ef7f9*/  add rdx, rcx
/*1409ef7fc*/  mov r9, r8
/*1409ef7ff*/  mov r13, rsi
/*1409ef802*/  mov [rbp+450h+var_B8], rsi
/*1409ef809*/  jmp rdx; switch jump  // switch jump
/*1409ef80b*/ loc_1409EF80B: mov ecx, [rax]; jumptable 00000001409EF809 case 7  // jumptable 00000001409EF809 case 7
/*1409ef80d*/  mov edx, 7373656Dh
/*1409ef812*/  xor ecx, edx
/*1409ef814*/  mov eax, [rax+3]
/*1409ef817*/  mov edx, 65676173h
/*1409ef81c*/  xor eax, edx
/*1409ef81e*/  or eax, ecx
/*1409ef820*/  mov r9, r8
/*1409ef823*/  mov r13, rsi
/*1409ef826*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef82c*/  mov [rbp+450h+var_210], rsi
/*1409ef833*/  mov edx, 4
/*1409ef838*/  lea rcx, aRole_4; "role"
/*1409ef83f*/  mov r8, r14
/*1409ef842*/  call sub_141433D50
/*1409ef847*/  nop
/*1409ef848*/  mov r15d, 4
/*1409ef84e*/  test rax, rax
/*1409ef851*/  jz loc_1409EFC16
/*1409ef857*/  cmp byte ptr [rax], 3
/*1409ef85a*/  jnz loc_1409EFC16
/*1409ef860*/  mov r13, [rax+10h]
/*1409ef864*/  mov r15, [rax+18h]
/*1409ef868*/  cmp r15, 9
/*1409ef86c*/  jnz loc_1409F100E
/*1409ef872*/  mov rax, [r13+0]
/*1409ef876*/  mov rcx, 65706F6C65766564h
/*1409ef880*/  xor rax, rcx
/*1409ef883*/  movzx ecx, byte ptr [r13+8]
/*1409ef888*/  xor rcx, 72h
/*1409ef88c*/  or rcx, rax
/*1409ef88f*/  jz loc_1409F1914
/*1409ef895*/  mov al, 1
/*1409ef897*/  mov dword ptr [rbp+450h+var_1B8], eax
/*1409ef89d*/  mov r15d, 9
/*1409ef8a3*/  jmp loc_1409EFC27
/*1409ef8a8*/ loc_1409EF8A8: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409EF809 case 20  // jumptable 00000001409EF809 case 20
/*1409ef8ac*/  pcmpeqb xmm0, xmm8
/*1409ef8b1*/  movd xmm1, dword ptr [rax+10h]
/*1409ef8b6*/  pcmpeqb xmm1, xmm7
/*1409ef8ba*/  pand xmm1, xmm0
/*1409ef8be*/  pmovmskb eax, xmm1
/*1409ef8c2*/  mov r9, r8
/*1409ef8c5*/  mov r13, rsi
/*1409ef8c8*/  cmp eax, 0FFFFh
/*1409ef8cd*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef8d3*/  mov [rbp+450h+var_210], rsi
/*1409ef8da*/  mov edx, 7
/*1409ef8df*/  lea rcx, aCallId; "call_id"
/*1409ef8e6*/  mov r8, r14
/*1409ef8e9*/  call sub_141433D50
/*1409ef8ee*/  nop
/*1409ef8ef*/  mov edi, 0Ch
/*1409ef8f4*/  test rax, rax
/*1409ef8f7*/  jz loc_1409EFCDB
/*1409ef8fd*/  cmp byte ptr [rax], 3
/*1409ef900*/  lea rsi, unk_1417A7B30
/*1409ef907*/  jnz loc_1409EFCE2
/*1409ef90d*/  mov rdi, [rax+18h]
/*1409ef911*/  test rdi, rdi
/*1409ef914*/  js loc_1409F38E2
/*1409ef91a*/  jz loc_1409F3460
/*1409ef920*/  mov rsi, [rax+10h]
/*1409ef924*/  jmp loc_1409EFCE2
/*1409ef929*/ loc_1409EF929: mov rcx, [rax]; jumptable 00000001409EF809 case 13  // jumptable 00000001409EF809 case 13
/*1409ef92c*/  mov rdx, 6E6F6974636E7566h
/*1409ef936*/  xor rcx, rdx
/*1409ef939*/  mov rax, [rax+5]
/*1409ef93d*/  mov rdx, 6C6C61635F6E6F69h
/*1409ef947*/  xor rax, rdx
/*1409ef94a*/  or rax, rcx
/*1409ef94d*/  mov r9, r8
/*1409ef950*/  mov r13, rsi
/*1409ef953*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef959*/  mov [rbp+450h+var_210], rsi
/*1409ef960*/  mov edx, 7
/*1409ef965*/  lea rcx, aCallId; "call_id"
/*1409ef96c*/  mov r8, r14
/*1409ef96f*/  call sub_141433D50
/*1409ef974*/  nop
/*1409ef975*/  mov edi, 0Ch
/*1409ef97a*/  test rax, rax
/*1409ef97d*/  jz loc_1409F0092
/*1409ef983*/  cmp byte ptr [rax], 3
/*1409ef986*/  lea rsi, unk_1417A7B30
/*1409ef98d*/  jnz loc_1409F0099
/*1409ef993*/  mov rdi, [rax+18h]
/*1409ef997*/  test rdi, rdi
/*1409ef99a*/  js loc_1409F38BC
/*1409ef9a0*/  jz loc_1409F347F
/*1409ef9a6*/  mov rsi, [rax+10h]
/*1409ef9aa*/  jmp loc_1409F0099
/*1409ef9af*/ loc_1409EF9AF: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409EF809 case 16  // jumptable 00000001409EF809 case 16
/*1409ef9b3*/  pcmpeqb xmm0, xmm6
/*1409ef9b7*/  pmovmskb eax, xmm0
/*1409ef9bb*/  mov r9, r8
/*1409ef9be*/  mov r13, rsi
/*1409ef9c1*/  cmp eax, 0FFFFh
/*1409ef9c6*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409ef9cc*/  mov [rbp+450h+var_210], rsi
/*1409ef9d3*/  mov edx, 7
/*1409ef9d8*/  lea rcx, aCallId; "call_id"
/*1409ef9df*/  mov r8, r14
/*1409ef9e2*/  call sub_141433D50
/*1409ef9e7*/  nop
/*1409ef9e8*/  test rax, rax
/*1409ef9eb*/  jz short loc_1409EF9F2
/*1409ef9ed*/  cmp byte ptr [rax], 3
/*1409ef9f0*/  jz short loc_1409EFA33
/*1409ef9f2*/ loc_1409EF9F2: mov rax, [rbp+450h+var_B8]
/*1409ef9f9*/  mov [rbp+450h+var_210], rax
/*1409efa00*/  mov edx, 2
/*1409efa05*/  lea rcx, aId_6; "id"
/*1409efa0c*/  mov r8, r14
/*1409efa0f*/  call sub_141433D50
/*1409efa14*/  nop
/*1409efa15*/  mov edi, 0Ch
/*1409efa1a*/  test rax, rax
/*1409efa1d*/  jz loc_1409F051C
/*1409efa23*/  cmp byte ptr [rax], 3
/*1409efa26*/  lea rsi, unk_1417A7B30
/*1409efa2d*/  jnz loc_1409F0523
/*1409efa33*/ loc_1409EFA33: mov rdi, [rax+18h]
/*1409efa37*/  test rdi, rdi
/*1409efa3a*/  js loc_1409F3870
/*1409efa40*/  jz loc_1409F2AF3
/*1409efa46*/  mov rsi, [rax+10h]
/*1409efa4a*/  jmp loc_1409F0523
/*1409efa4f*/ loc_1409EFA4F: mov rcx, [rax]; jumptable 00000001409EF809 case 9  // jumptable 00000001409EF809 case 9
/*1409efa52*/  mov rdx, 6E696E6F73616572h
/*1409efa5c*/  xor rcx, rdx
/*1409efa5f*/  movzx eax, byte ptr [rax+8]
/*1409efa63*/  xor rax, 67h
/*1409efa67*/  or rax, rcx
/*1409efa6a*/  mov r9, r8
/*1409efa6d*/  mov r13, rsi
/*1409efa70*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efa76*/  mov [rbp+450h+var_210], rsi
/*1409efa7d*/  mov edx, 7
/*1409efa82*/  lea rcx, aSummary_3; "summary"
/*1409efa89*/  mov r8, r14
/*1409efa8c*/  call sub_141433D50
/*1409efa91*/  nop
/*1409efa92*/  mov rdx, [rbp+450h+var_A8]
/*1409efa99*/  mov r9, rdx
/*1409efa9c*/  mov r13, rsi
/*1409efa9f*/  test rax, rax
/*1409efaa2*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efaa8*/  cmp byte ptr [rax], 4
/*1409efaab*/  mov r9, rdx
/*1409efaae*/  mov r13, rsi
/*1409efab1*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efab7*/  mov rdx, [rax+10h]
/*1409efabb*/  mov r8, [rax+18h]
/*1409efabf*/  shl r8, 5
/*1409efac3*/  add r8, rdx
/*1409efac6*/  mov [rbp+450h+var_210], rsi
/*1409efacd*/  lea rcx, [rbp+450h+var_1B0]
/*1409efad4*/  call sub_14031C820
/*1409efad9*/  nop
/*1409efada*/  mov rdx, qword ptr [rbp+450h+var_1B0+8]
/*1409efae1*/  mov r8, qword ptr [rbp+450h+var_1A0]
/*1409efae8*/ loc_1409EFAE8: mov [rsp+4D0h+var_4B0], 1
/*1409efaf1*/  lea rcx, [rbp+450h+var_110]
/*1409efaf8*/  mov [rbp+450h+var_148], rdx
/*1409efaff*/  lea r9, asc_1417A47C8; "\n"
/*1409efb06*/  call sub_1404408C0
/*1409efb0b*/  nop
/*1409efb0c*/  mov rsi, qword ptr [rbp+450h+var_110]
/*1409efb13*/  mov r14, qword ptr [rbp+450h+var_110+8]
/*1409efb1a*/  mov rdi, qword ptr [rbp+450h+var_100]
/*1409efb21*/  mov rdx, qword ptr [rbp+450h+var_1B0]
/*1409efb28*/  test rdx, rdx
/*1409efb2b*/  jz short loc_1409EFB43
/*1409efb2d*/  shl rdx, 4
/*1409efb31*/  mov r8d, 8
/*1409efb37*/  mov rcx, [rbp+450h+var_148]
/*1409efb3e*/  call sub_140001660
/*1409efb43*/ loc_1409EFB43: test rdi, rdi
/*1409efb46*/  mov r15, [rbp+450h+var_B8]
/*1409efb4d*/  jz loc_1409F13D4
/*1409efb53*/  lea rax, [r15-1]
/*1409efb57*/  mov [rbp+450h+var_398], rdi
/*1409efb5e*/  mov r9, r14
/*1409efb61*/  mov r13, rsi
/*1409efb64*/  cmp rax, 0FFFFFFFFFFFFFFFDh
/*1409efb68*/  mov rcx, [rbp+450h+var_A8]
/*1409efb6f*/  ja def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efb75*/  mov r8d, 1
/*1409efb7b*/  mov rdx, r15
/*1409efb7e*/  call sub_140001660
/*1409efb83*/  mov [rbp+450h+var_398], rdi
/*1409efb8a*/  mov r9, r14
/*1409efb8d*/  mov r13, rsi
/*1409efb90*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efb95*/ loc_1409EFB95: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409EF809 case 23  // jumptable 00000001409EF809 case 23
/*1409efb99*/  movdqu xmm1, xmmword ptr [rax+7]
/*1409efb9e*/  pcmpeqb xmm1, xmm9
/*1409efba3*/  pcmpeqb xmm0, xmm6
/*1409efba7*/  pand xmm0, xmm1
/*1409efbab*/  pmovmskb eax, xmm0
/*1409efbaf*/  mov r9, r8
/*1409efbb2*/  mov r13, rsi
/*1409efbb5*/  cmp eax, 0FFFFh
/*1409efbba*/  jnz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409efbc0*/  mov [rbp+450h+var_210], rsi
/*1409efbc7*/ loc_1409EFBC7: mov edx, 7
/*1409efbcc*/  lea rcx, aCallId; "call_id"
/*1409efbd3*/  mov r8, r14
/*1409efbd6*/  call sub_141433D50
/*1409efbdb*/  nop
/*1409efbdc*/  mov edi, 0Ch
/*1409efbe1*/  test rax, rax
/*1409efbe4*/  jz loc_1409F0133
/*1409efbea*/  cmp byte ptr [rax], 3
/*1409efbed*/  lea rsi, unk_1417A7B30
/*1409efbf4*/  jnz loc_1409F013A
/*1409efbfa*/  mov rdi, [rax+18h]
/*1409efbfe*/  test rdi, rdi
/*1409efc01*/  js loc_1409F3896
/*1409efc07*/  jz loc_1409F349E
/*1409efc0d*/  mov rsi, [rax+10h]
/*1409efc11*/  jmp loc_1409F013A
/*1409efc16*/ loc_1409EFC16: mov dword ptr [rbp+450h+var_1B8], 0
/*1409efc20*/  lea r13, unk_1417A3EF7
/*1409efc27*/ loc_1409EFC27: mov rax, [rbp+450h+var_B8]
/*1409efc2e*/  mov [rbp+450h+var_210], rax
/*1409efc35*/  mov edx, 7
/*1409efc3a*/  lea rcx, aContent_6; "content"
/*1409efc41*/  mov r8, r14
/*1409efc44*/  call sub_141433D50
/*1409efc49*/  nop
/*1409efc4a*/  test rax, rax
/*1409efc4d*/  jz short loc_1409EFC95
/*1409efc4f*/  movzx ecx, byte ptr [rax]
/*1409efc52*/  cmp ecx, 4
/*1409efc55*/  jz loc_1409F066A
/*1409efc5b*/  cmp ecx, 3
/*1409efc5e*/  jnz short loc_1409EFC95
/*1409efc60*/  cmp qword ptr [rax+18h], 0
/*1409efc65*/  jz short loc_1409EFC95
/*1409efc67*/  add rax, 8
/*1409efc6b*/  mov rcx, [rbp+450h+var_B8]
/*1409efc72*/  mov [rbp+450h+var_210], rcx
/*1409efc79*/  lea rcx, [rbp+450h+var_140+8]
/*1409efc80*/  mov rdx, rax
/*1409efc83*/  call sub_14149C500
/*1409efc88*/  nop
/*1409efc89*/ loc_1409EFC89: mov byte ptr [rbp+450h+var_140], 3
/*1409efc90*/  jmp loc_1409F2D28
/*1409efc95*/ loc_1409EFC95: mov byte ptr [rbp+450h+var_140], 0
/*1409efc9c*/ loc_1409EFC9C: cmp byte ptr [rbp+450h+var_1B8], 0
/*1409efca3*/  jz loc_1409F04F5
/*1409efca9*/  mov rax, [r13+0]
/*1409efcad*/  mov rcx, 6E61747369737361h
/*1409efcb7*/  xor rax, rcx
/*1409efcba*/  movzx ecx, byte ptr [r13+8]
/*1409efcbf*/  xor rcx, 74h
/*1409efcc3*/  or rcx, rax
/*1409efcc6*/  mov rax, [rbp+450h+var_B8]
/*1409efccd*/  jz loc_1409F1088
/*1409efcd3*/  mov r13, rax
/*1409efcd6*/  jmp loc_1409F04FC
/*1409efcdb*/ loc_1409EFCDB: lea rsi, unk_1417A7B30
/*1409efce2*/ loc_1409EFCE2: call nullsub_1
/*1409efce7*/  mov r15d, 1
/*1409efced*/  mov edx, 1
/*1409efcf2*/  mov rcx, rdi
/*1409efcf5*/  call sub_140001650
/*1409efcfa*/  test rax, rax
/*1409efcfd*/  jz loc_1409F86FE
/*1409efd03*/  mov [rbp+450h+var_2F8], rax
/*1409efd0a*/  mov rcx, rax
/*1409efd0d*/  mov rdx, rsi
/*1409efd10*/  mov [rbp+450h+var_148], rdi
/*1409efd17*/  mov r8, rdi
/*1409efd1a*/  call sub_141684120
/*1409efd1f*/  xor edi, edi
/*1409efd21*/ loc_1409EFD21: mov edx, 6
/*1409efd26*/  lea rcx, aOutput_1; "output"
/*1409efd2d*/  mov r8, r14
/*1409efd30*/  call sub_141433D50
/*1409efd35*/  nop
/*1409efd36*/  lea rcx, [rbp+450h+var_170]
/*1409efd3d*/  mov rdx, rax
/*1409efd40*/  call flatten_function_call_output
/*1409efd45*/  nop
/*1409efd46*/  mov qword ptr [rbp+450h+var_200], 0
/*1409efd51*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409efd5c*/  call nullsub_1
/*1409efd61*/  mov ecx, 4
/*1409efd66*/  mov edx, 1
/*1409efd6b*/  call sub_140001650
/*1409efd70*/  test rax, rax
/*1409efd73*/  jz loc_1409F86B7
/*1409efd79*/  mov dword ptr [rax], 656C6F72h
/*1409efd7f*/  mov qword ptr [rbp+450h+var_140], 4
/*1409efd8a*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409efd91*/  mov qword ptr [rbp+450h+var_130], 4
/*1409efd9c*/  call nullsub_1
/*1409efda1*/  mov ecx, 4
/*1409efda6*/  mov edx, 1
/*1409efdab*/  call sub_140001650
/*1409efdb0*/  test rax, rax
/*1409efdb3*/  mov [rbp+450h+var_208], rax
/*1409efdba*/  jz loc_1409F8745
/*1409efdc0*/  mov dword ptr [rax], 6C6F6F74h
/*1409efdc6*/  mov byte ptr [rbp+450h+var_110], 3
/*1409efdcd*/  mov qword ptr [rbp+450h+var_110+8], 4
/*1409efdd8*/  mov qword ptr [rbp+450h+var_100], rax
/*1409efddf*/  mov qword ptr [rbp+450h+var_100+8], 4
/*1409efdea*/ loc_1409EFDEA: lea rcx, [rbp+450h+var_1B0]
/*1409efdf1*/  lea rdx, [rbp+450h+var_200]
/*1409efdf8*/  lea r8, [rbp+450h+var_140]
/*1409efdff*/  lea r9, [rbp+450h+var_110]
/*1409efe06*/  call sub_140307860
/*1409efe0b*/  nop
/*1409efe0c*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409efe13*/  jz short loc_1409EFE22
/*1409efe15*/ loc_1409EFE15: lea rcx, [rbp+450h+var_1B0]
/*1409efe1c*/  call sub_1400104F0
/*1409efe21*/  nop
/*1409efe22*/ loc_1409EFE22: call nullsub_1
/*1409efe27*/  mov ecx, 0Ch
/*1409efe2c*/  mov edx, 1
/*1409efe31*/  call sub_140001650
/*1409efe36*/  test rax, rax
/*1409efe39*/  jz loc_1409F86E9
/*1409efe3f*/  mov rcx, 6C61635F6C6F6F74h
/*1409efe49*/  mov [rax], rcx
/*1409efe4c*/  mov dword ptr [rax+8], 64695F6Ch
/*1409efe53*/  mov qword ptr [rbp+450h+var_140], 0Ch
/*1409efe5e*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409efe65*/  mov qword ptr [rbp+450h+var_130], 0Ch
/*1409efe70*/  mov esi, 1
/*1409efe75*/  test dil, dil
/*1409efe78*/  mov rdi, [rbp+450h+var_148]
/*1409efe7f*/  jnz short loc_1409EFEB1
/*1409efe81*/  call nullsub_1
/*1409efe86*/  mov edx, 1
/*1409efe8b*/  mov rcx, rdi
/*1409efe8e*/  call sub_140001650
/*1409efe93*/  test rax, rax
/*1409efe96*/  jz loc_1409F886E
/*1409efe9c*/  mov rsi, rax
/*1409efe9f*/  mov rcx, rax
/*1409efea2*/  mov rdx, [rbp+450h+var_2F8]
/*1409efea9*/  mov r8, rdi
/*1409efeac*/  call sub_141684120
/*1409efeb1*/ loc_1409EFEB1: mov byte ptr [rbp+450h+var_110], 3
/*1409efeb8*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409efebf*/  mov qword ptr [rbp+450h+var_100], rsi
/*1409efec6*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409efecd*/  mov [rbp+450h+var_228], 0
/*1409efed4*/ loc_1409EFED4: lea rcx, [rbp+450h+var_1B0]
/*1409efedb*/  lea rdx, [rbp+450h+var_200]
/*1409efee2*/  lea r8, [rbp+450h+var_140]
/*1409efee9*/  lea r9, [rbp+450h+var_110]
/*1409efef0*/  call sub_140307860
/*1409efef5*/  nop
/*1409efef6*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409efefd*/  jz short loc_1409EFF0C
/*1409efeff*/ loc_1409EFEFF: lea rcx, [rbp+450h+var_1B0]
/*1409eff06*/  call sub_1400104F0
/*1409eff0b*/  nop
/*1409eff0c*/ loc_1409EFF0C: call nullsub_1
/*1409eff11*/  mov ecx, 7
/*1409eff16*/  mov edx, 1
/*1409eff1b*/  call sub_140001650
/*1409eff20*/  test rax, rax
/*1409eff23*/  jz loc_1409F86A2
/*1409eff29*/  mov dword ptr [rax+3], 746E6574h
/*1409eff30*/  mov dword ptr [rax], 746E6F63h
/*1409eff36*/  mov qword ptr [rbp+450h+var_140], 7
/*1409eff41*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409eff48*/  mov qword ptr [rbp+450h+var_130], 7
/*1409eff53*/  mov [rbp+450h+var_1BB], 1
/*1409eff5a*/ loc_1409EFF5A: lea rcx, [rbp+450h+var_110]
/*1409eff61*/  lea rdx, [rbp+450h+var_170]
/*1409eff68*/  call sub_140B842D0
/*1409eff6d*/  nop
/*1409eff6e*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409eff75*/  jz loc_1409F7F2E
/*1409eff7b*/  movdqu xmm0, [rbp+450h+var_110]
/*1409eff83*/  movdqu xmm1, [rbp+450h+var_100]
/*1409eff8b*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409eff93*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409eff9b*/  mov [rbp+450h+var_1BB], 0
/*1409effa2*/  lea rcx, [rbp+450h+var_110]
/*1409effa9*/  lea rdx, [rbp+450h+var_200]
/*1409effb0*/  lea r8, [rbp+450h+var_140]
/*1409effb7*/  lea r9, [rbp+450h+var_1B0]
/*1409effbe*/  call sub_140307860
/*1409effc3*/  nop
/*1409effc4*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409effcb*/  jz short loc_1409EFFDA
/*1409effcd*/ loc_1409EFFCD: lea rcx, [rbp+450h+var_110]
/*1409effd4*/  call sub_1400104F0
/*1409effd9*/  nop
/*1409effda*/ loc_1409EFFDA: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409effe1*/  lea rcx, [rbp+450h+var_280+8]
/*1409effe8*/  mov [rcx+10h], rax
/*1409effec*/  movdqu xmm0, [rbp+450h+var_200]
/*1409efff4*/  movdqu xmmword ptr [rcx], xmm0
/*1409efff8*/  mov byte ptr [rbp+450h+var_280], 5
/*1409effff*/  mov rsi, [rbp+450h+var_290]
/*1409f0006*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f000d*/  jnz short loc_1409F001C
/*1409f000f*/ loc_1409F000F: lea rcx, [rbp+450h+var_2A0]
/*1409f0016*/  call sub_1416890A0
/*1409f001b*/  nop
/*1409f001c*/ loc_1409F001C: mov rax, [rbp+450h+var_298]
/*1409f0023*/  mov rcx, rsi
/*1409f0026*/  shl rcx, 5
/*1409f002a*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f0032*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f003a*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f0040*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f0045*/  inc rsi
/*1409f0048*/  mov [rbp+450h+var_290], rsi
/*1409f004f*/ loc_1409F004F: lea rcx, [rbp+450h+var_170]
/*1409f0056*/  call sub_1400104F0
/*1409f005b*/  nop
/*1409f005c*/ loc_1409F005C: mov rsi, [rbp+450h+var_A8]
/*1409f0063*/  mov r9, rsi
/*1409f0066*/  mov rdi, [rbp+450h+var_B8]
/*1409f006d*/  mov r13, rdi
/*1409f0070*/  mov rdx, [rbp+450h+var_148]
/*1409f0077*/  test rdx, rdx
/*1409f007a*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f0080*/  mov r8d, 1
/*1409f0086*/  mov rcx, [rbp+450h+var_2F8]
/*1409f008d*/  jmp loc_1409F04E5
/*1409f0092*/ loc_1409F0092: lea rsi, unk_1417A7B30
/*1409f0099*/ loc_1409F0099: call nullsub_1
/*1409f009e*/  mov r15d, 1
/*1409f00a4*/  mov edx, 1
/*1409f00a9*/  mov rcx, rdi
/*1409f00ac*/  call sub_140001650
/*1409f00b1*/  test rax, rax
/*1409f00b4*/  jz loc_1409F86CC
/*1409f00ba*/  mov [rbp+450h+var_308], rax
/*1409f00c1*/  mov rcx, rax
/*1409f00c4*/  mov rdx, rsi
/*1409f00c7*/  mov [rbp+450h+var_148], rdi
/*1409f00ce*/  mov r8, rdi
/*1409f00d1*/  call sub_141684120
/*1409f00d6*/  xor r13d, r13d
/*1409f00d9*/ loc_1409F00D9: mov rax, [rbp+450h+var_B8]
/*1409f00e0*/  mov [rbp+450h+var_3F8], rax
/*1409f00e4*/ loc_1409F00E4: mov edx, 4
/*1409f00e9*/  lea rcx, aName_7; "name"
/*1409f00f0*/  mov r8, r14
/*1409f00f3*/  call sub_141433D50
/*1409f00f8*/  nop
/*1409f00f9*/ loc_1409F00F9: mov edi, 4
/*1409f00fe*/  test rax, rax
/*1409f0101*/  jz loc_1409F05B2
/*1409f0107*/  cmp byte ptr [rax], 3
/*1409f010a*/  lea rsi, aTool; "tool"
/*1409f0111*/  jnz loc_1409F05B9
/*1409f0117*/  mov rdi, [rax+18h]
/*1409f011b*/  test rdi, rdi
/*1409f011e*/  js loc_1409F3E94
/*1409f0124*/  jz loc_1409F34BD
/*1409f012a*/  mov rsi, [rax+10h]
/*1409f012e*/  jmp loc_1409F05B9
/*1409f0133*/ loc_1409F0133: lea rsi, unk_1417A7B30
/*1409f013a*/ loc_1409F013A: call nullsub_1
/*1409f013f*/  mov r15d, 1
/*1409f0145*/  mov edx, 1
/*1409f014a*/  mov rcx, rdi
/*1409f014d*/  call sub_140001650
/*1409f0152*/  test rax, rax
/*1409f0155*/  jz loc_1409F875A
/*1409f015b*/  mov [rbp+450h+var_300], rax
/*1409f0162*/  mov rcx, rax
/*1409f0165*/  mov rdx, rsi
/*1409f0168*/  mov [rbp+450h+var_148], rdi
/*1409f016f*/  mov r8, rdi
/*1409f0172*/  call sub_141684120
/*1409f0177*/  xor edi, edi
/*1409f0179*/ loc_1409F0179: mov edx, 6
/*1409f017e*/  lea rcx, aOutput_1; "output"
/*1409f0185*/  mov r8, r14
/*1409f0188*/  call sub_141433D50
/*1409f018d*/  nop
/*1409f018e*/  lea rcx, [rbp+450h+var_170]
/*1409f0195*/  mov rdx, rax
/*1409f0198*/  call flatten_function_call_output
/*1409f019d*/  nop
/*1409f019e*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f01a9*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f01b4*/  call nullsub_1
/*1409f01b9*/  mov ecx, 4
/*1409f01be*/  mov edx, 1
/*1409f01c3*/  call sub_140001650
/*1409f01c8*/  test rax, rax
/*1409f01cb*/  jz loc_1409F86D4
/*1409f01d1*/  mov dword ptr [rax], 656C6F72h
/*1409f01d7*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f01e2*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f01e9*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f01f4*/  call nullsub_1
/*1409f01f9*/  mov ecx, 4
/*1409f01fe*/  mov edx, 1
/*1409f0203*/  call sub_140001650
/*1409f0208*/  test rax, rax
/*1409f020b*/  mov [rbp+450h+var_208], rax
/*1409f0212*/  jz loc_1409F8730
/*1409f0218*/  mov dword ptr [rax], 6C6F6F74h
/*1409f021e*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f0225*/  mov qword ptr [rbp+450h+var_110+8], 4
/*1409f0230*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f0237*/  mov qword ptr [rbp+450h+var_100+8], 4
/*1409f0242*/ loc_1409F0242: lea rcx, [rbp+450h+var_1B0]
/*1409f0249*/  lea rdx, [rbp+450h+var_200]
/*1409f0250*/  lea r8, [rbp+450h+var_140]
/*1409f0257*/  lea r9, [rbp+450h+var_110]
/*1409f025e*/  call sub_140307860
/*1409f0263*/  nop
/*1409f0264*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f026b*/  jz short loc_1409F027A
/*1409f026d*/ loc_1409F026D: lea rcx, [rbp+450h+var_1B0]
/*1409f0274*/  call sub_1400104F0
/*1409f0279*/  nop
/*1409f027a*/ loc_1409F027A: call nullsub_1
/*1409f027f*/  mov ecx, 0Ch
/*1409f0284*/  mov edx, 1
/*1409f0289*/  call sub_140001650
/*1409f028e*/  test rax, rax
/*1409f0291*/  jz loc_1409F871B
/*1409f0297*/  mov rcx, 6C61635F6C6F6F74h
/*1409f02a1*/  mov [rax], rcx
/*1409f02a4*/  mov dword ptr [rax+8], 64695F6Ch
/*1409f02ab*/  mov qword ptr [rbp+450h+var_140], 0Ch
/*1409f02b6*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f02bd*/  mov qword ptr [rbp+450h+var_130], 0Ch
/*1409f02c8*/  mov esi, 1
/*1409f02cd*/  test dil, dil
/*1409f02d0*/  mov rdi, [rbp+450h+var_148]
/*1409f02d7*/  jnz short loc_1409F0309
/*1409f02d9*/  call nullsub_1
/*1409f02de*/  mov edx, 1
/*1409f02e3*/  mov rcx, rdi
/*1409f02e6*/  call sub_140001650
/*1409f02eb*/  test rax, rax
/*1409f02ee*/  jz loc_1409F8854
/*1409f02f4*/  mov rsi, rax
/*1409f02f7*/  mov rcx, rax
/*1409f02fa*/  mov rdx, [rbp+450h+var_300]
/*1409f0301*/  mov r8, rdi
/*1409f0304*/  call sub_141684120
/*1409f0309*/ loc_1409F0309: mov byte ptr [rbp+450h+var_110], 3
/*1409f0310*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f0317*/  mov qword ptr [rbp+450h+var_100], rsi
/*1409f031e*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f0325*/  mov [rbp+450h+var_221], 0
/*1409f032c*/ loc_1409F032C: lea rcx, [rbp+450h+var_1B0]
/*1409f0333*/  lea rdx, [rbp+450h+var_200]
/*1409f033a*/  lea r8, [rbp+450h+var_140]
/*1409f0341*/  lea r9, [rbp+450h+var_110]
/*1409f0348*/  call sub_140307860
/*1409f034d*/  nop
/*1409f034e*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f0355*/  jz short loc_1409F0364
/*1409f0357*/ loc_1409F0357: lea rcx, [rbp+450h+var_1B0]
/*1409f035e*/  call sub_1400104F0
/*1409f0363*/  nop
/*1409f0364*/ loc_1409F0364: call nullsub_1
/*1409f0369*/  mov ecx, 7
/*1409f036e*/  mov edx, 1
/*1409f0373*/  call sub_140001650
/*1409f0378*/  test rax, rax
/*1409f037b*/  jz loc_1409F8706
/*1409f0381*/  mov dword ptr [rax+3], 746E6574h
/*1409f0388*/  mov dword ptr [rax], 746E6F63h
/*1409f038e*/  mov qword ptr [rbp+450h+var_140], 7
/*1409f0399*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f03a0*/  mov qword ptr [rbp+450h+var_130], 7
/*1409f03ab*/  mov [rbp+450h+var_1B9], 1
/*1409f03b2*/ loc_1409F03B2: lea rcx, [rbp+450h+var_110]
/*1409f03b9*/  lea rdx, [rbp+450h+var_170]
/*1409f03c0*/  call sub_140B842D0
/*1409f03c5*/  nop
/*1409f03c6*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f03cd*/  jz loc_1409F7EEF
/*1409f03d3*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f03db*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f03e3*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f03eb*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f03f3*/  mov [rbp+450h+var_1B9], 0
/*1409f03fa*/  lea rcx, [rbp+450h+var_110]
/*1409f0401*/  lea rdx, [rbp+450h+var_200]
/*1409f0408*/  lea r8, [rbp+450h+var_140]
/*1409f040f*/  lea r9, [rbp+450h+var_1B0]
/*1409f0416*/  call sub_140307860
/*1409f041b*/  nop
/*1409f041c*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0423*/  jz short loc_1409F0432
/*1409f0425*/ loc_1409F0425: lea rcx, [rbp+450h+var_110]
/*1409f042c*/  call sub_1400104F0
/*1409f0431*/  nop
/*1409f0432*/ loc_1409F0432: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f0439*/  lea rcx, [rbp+450h+var_280+8]
/*1409f0440*/  mov [rcx+10h], rax
/*1409f0444*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f044c*/  movdqu xmmword ptr [rcx], xmm0
/*1409f0450*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f0457*/  mov rsi, [rbp+450h+var_290]
/*1409f045e*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f0465*/  jnz short loc_1409F0474
/*1409f0467*/ loc_1409F0467: lea rcx, [rbp+450h+var_2A0]
/*1409f046e*/  call sub_1416890A0
/*1409f0473*/  nop
/*1409f0474*/ loc_1409F0474: mov rax, [rbp+450h+var_298]
/*1409f047b*/  mov rcx, rsi
/*1409f047e*/  shl rcx, 5
/*1409f0482*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f048a*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f0492*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f0498*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f049d*/  inc rsi
/*1409f04a0*/  mov [rbp+450h+var_290], rsi
/*1409f04a7*/ loc_1409F04A7: lea rcx, [rbp+450h+var_170]
/*1409f04ae*/  call sub_1400104F0
/*1409f04b3*/  nop
/*1409f04b4*/  mov rsi, [rbp+450h+var_A8]
/*1409f04bb*/  mov r9, rsi
/*1409f04be*/  mov rdi, [rbp+450h+var_B8]
/*1409f04c5*/  mov r13, rdi
/*1409f04c8*/  mov rdx, [rbp+450h+var_148]
/*1409f04cf*/  test rdx, rdx
/*1409f04d2*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f04d8*/  mov r8d, 1
/*1409f04de*/  mov rcx, [rbp+450h+var_300]
/*1409f04e5*/ loc_1409F04E5: call sub_140001660
/*1409f04ea*/  mov r9, rsi
/*1409f04ed*/  mov r13, rdi
/*1409f04f0*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f04f5*/ loc_1409F04F5: mov r13, [rbp+450h+var_B8]
/*1409f04fc*/ loc_1409F04FC: mov [rbp+450h+var_210], r13
/*1409f0503*/ loc_1409F0503: lea rcx, [rbp+450h+var_140]
/*1409f050a*/  call sub_1400104F0
/*1409f050f*/  nop
/*1409f0510*/ loc_1409F0510: mov r9, [rbp+450h+var_A8]
/*1409f0517*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f051c*/ loc_1409F051C: lea rsi, unk_1417A7B30
/*1409f0523*/ loc_1409F0523: call nullsub_1
/*1409f0528*/  mov r15d, 1
/*1409f052e*/  mov edx, 1
/*1409f0533*/  mov rcx, rdi
/*1409f0536*/  call sub_140001650
/*1409f053b*/  test rax, rax
/*1409f053e*/  jz loc_1409F87A1
/*1409f0544*/  mov [rbp+450h+var_340], rax
/*1409f054b*/  mov rcx, rax
/*1409f054e*/  mov rdx, rsi
/*1409f0551*/  mov [rbp+450h+var_148], rdi
/*1409f0558*/  mov r8, rdi
/*1409f055b*/  call sub_141684120
/*1409f0560*/  xor edi, edi
/*1409f0562*/ loc_1409F0562: mov edx, 4
/*1409f0567*/  lea rcx, aName_7; "name"
/*1409f056e*/  mov r8, r14
/*1409f0571*/  call sub_141433D50
/*1409f0576*/  nop
/*1409f0577*/ loc_1409F0577: mov r13d, 4
/*1409f057d*/  test rax, rax
/*1409f0580*/  jz loc_1409F0EB4
/*1409f0586*/  cmp byte ptr [rax], 3
/*1409f0589*/  lea rsi, aTool; "tool"
/*1409f0590*/  jnz loc_1409F0EBB
/*1409f0596*/  mov r13, [rax+18h]
/*1409f059a*/  test r13, r13
/*1409f059d*/  js loc_1409F3ED2
/*1409f05a3*/  jz loc_1409F34DC
/*1409f05a9*/  mov rsi, [rax+10h]
/*1409f05ad*/  jmp loc_1409F0EBB
/*1409f05b2*/ loc_1409F05B2: lea rsi, aTool; "tool"
/*1409f05b9*/ loc_1409F05B9: call nullsub_1
/*1409f05be*/  mov r15d, 1
/*1409f05c4*/  mov edx, 1
/*1409f05c9*/  mov rcx, rdi
/*1409f05cc*/  call sub_140001650
/*1409f05d1*/  test rax, rax
/*1409f05d4*/  jz loc_1409F87AD
/*1409f05da*/  mov [rbp+450h+var_368], rax
/*1409f05e1*/  mov rcx, rax
/*1409f05e4*/  mov rdx, rsi
/*1409f05e7*/  mov [rbp+450h+var_208], rdi
/*1409f05ee*/  mov r8, rdi
/*1409f05f1*/  call sub_141684120
/*1409f05f6*/  xor edi, edi
/*1409f05f8*/ loc_1409F05F8: mov rsi, [rbp+450h+var_B8]
/*1409f05ff*/  mov [rbp+450h+var_310], rsi
/*1409f0606*/ loc_1409F0606: mov edx, 9
/*1409f060b*/  lea rcx, aArguments_1; "arguments"
/*1409f0612*/  mov r8, r14
/*1409f0615*/  call sub_141433D50
/*1409f061a*/  nop
/*1409f061b*/  test rax, rax
/*1409f061e*/  jz loc_1409F0FD3
/*1409f0624*/  cmp byte ptr [rax], 3
/*1409f0627*/  jnz loc_1409F101D
/*1409f062d*/  mov rdx, [rax+10h]
/*1409f0631*/  mov r8, [rax+18h]
/*1409f0635*/  mov [rbp+450h+var_310], rsi
/*1409f063c*/  lea rcx, [rbp+450h+var_280]
/*1409f0643*/  call sub_140A10FF0
/*1409f0648*/  nop
/*1409f0649*/  mov rax, qword ptr [rbp+450h+var_280]
/*1409f0650*/  mov [rbp+450h+var_1B8], rax
/*1409f0657*/  mov r15, qword ptr [rbp+450h+var_280+8]
/*1409f065e*/  mov rsi, qword ptr [rbp+450h+var_270]
/*1409f0665*/  jmp loc_1409F204A
/*1409f066a*/ loc_1409F066A: mov qword ptr [rbp+450h+var_2C0], 0
/*1409f0675*/  mov qword ptr [rbp+450h+var_2C0+8], 8
/*1409f0680*/  mov qword ptr [rbp+450h+var_2B0], 0
/*1409f068b*/  mov rdi, [rax+10h]
/*1409f068f*/  mov r14, [rax+18h]
/*1409f0693*/  shl r14, 5
/*1409f0697*/  add r14, rdi
/*1409f069a*/  mov dword ptr [rbp+450h+var_148], 0
/*1409f06a4*/  nop word ptr [rax+rax+00000000h]
/*1409f06b0*/ loc_1409F06B0: cmp rdi, r14
/*1409f06b3*/  jz loc_1409F0E58
/*1409f06b9*/ loc_1409F06B9: mov rsi, rdi
/*1409f06bc*/  mov edx, 4
/*1409f06c1*/  lea rcx, aType_8; "type"
/*1409f06c8*/  mov r8, rdi
/*1409f06cb*/  call sub_141433D50
/*1409f06d0*/  nop
/*1409f06d1*/  lea rdi, [rsi+20h]
/*1409f06d5*/  test rax, rax
/*1409f06d8*/  jz short loc_1409F06B0
/*1409f06da*/  cmp byte ptr [rax], 3
/*1409f06dd*/  jnz short loc_1409F06B0
/*1409f06df*/  mov rcx, [rax+10h]
/*1409f06e3*/  mov rax, [rax+18h]
/*1409f06e7*/  cmp rax, 0Bh
/*1409f06eb*/  jz short loc_1409F0718
/*1409f06ed*/  cmp rax, 0Ah
/*1409f06f1*/  jnz short loc_1409F06B0
/*1409f06f3*/  mov rax, [rcx]
/*1409f06f6*/  mov rdx, 65745F7475706E69h
/*1409f0700*/  xor rax, rdx
/*1409f0703*/  movzx ecx, word ptr [rcx+8]
/*1409f0707*/  xor rcx, 7478h
/*1409f070e*/  or rcx, rax
/*1409f0711*/  jnz short loc_1409F06B0
/*1409f0713*/  jmp loc_1409F0BF4
/*1409f0718*/ loc_1409F0718: mov rax, [rcx]
/*1409f071b*/  mov rdx, 745F74757074756Fh
/*1409f0725*/  xor rax, rdx
/*1409f0728*/  mov rdx, [rcx+3]
/*1409f072c*/  mov r8, 747865745F747570h
/*1409f0736*/  xor rdx, r8
/*1409f0739*/  or rdx, rax
/*1409f073c*/  jz loc_1409F0BF4
/*1409f0742*/  mov rax, [rcx]
/*1409f0745*/  mov rdx, 6D695F7475706E69h
/*1409f074f*/  xor rax, rdx
/*1409f0752*/  mov rcx, [rcx+3]
/*1409f0756*/  mov rdx, 6567616D695F7475h
/*1409f0760*/  xor rcx, rdx
/*1409f0763*/  or rcx, rax
/*1409f0766*/  jnz loc_1409F06B0
/*1409f076c*/  mov edx, 9
/*1409f0771*/  lea rcx, aImageUrl; "image_url"
/*1409f0778*/  mov r8, rsi
/*1409f077b*/  call sub_141433D50
/*1409f0780*/  nop
/*1409f0781*/  test rax, rax
/*1409f0784*/  jz loc_1409F06B0
/*1409f078a*/  cmp byte ptr [rax], 3
/*1409f078d*/  jnz loc_1409F06B0
/*1409f0793*/  movdqu xmm0, xmmword ptr [rax+10h]
/*1409f0798*/  movdqu [rbp+450h+var_328], xmm0
/*1409f07a0*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f07ab*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f07b6*/  call nullsub_1
/*1409f07bb*/  mov ecx, 3
/*1409f07c0*/  mov edx, 1
/*1409f07c5*/  call sub_140001650
/*1409f07ca*/  test rax, rax
/*1409f07cd*/  jz loc_1409F8BF5
/*1409f07d3*/  mov byte ptr [rax+2], 6Ch ; 'l'
/*1409f07d7*/  mov word ptr [rax], 7275h
/*1409f07dc*/  mov qword ptr [rbp+450h+var_280], 3
/*1409f07e7*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f07ee*/  mov qword ptr [rbp+450h+var_270], 3
/*1409f07f9*/  mov [rbp+450h+var_1BF], 1
/*1409f0800*/ loc_1409F0800: lea rcx, [rbp+450h+var_110]
/*1409f0807*/  lea rdx, [rbp+450h+var_328]
/*1409f080e*/  call sub_140B56640
/*1409f0813*/  nop
/*1409f0814*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f081b*/  jz loc_1409F835A
/*1409f0821*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f0829*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f0831*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f0839*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f0841*/  mov [rbp+450h+var_1BF], 0
/*1409f0848*/  lea rcx, [rbp+450h+var_110]
/*1409f084f*/  lea rdx, [rbp+450h+var_200]
/*1409f0856*/  lea r8, [rbp+450h+var_280]
/*1409f085d*/  lea r9, [rbp+450h+var_1B0]
/*1409f0864*/  call sub_140307860
/*1409f0869*/  nop
/*1409f086a*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0871*/  jz short loc_1409F0880
/*1409f0873*/ loc_1409F0873: lea rcx, [rbp+450h+var_110]
/*1409f087a*/  call sub_1400104F0
/*1409f087f*/  nop
/*1409f0880*/ loc_1409F0880: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f0887*/  lea rcx, [rbp+450h+var_170+8]
/*1409f088e*/  mov [rcx+10h], rax
/*1409f0892*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f089a*/  movdqu xmmword ptr [rcx], xmm0
/*1409f089e*/  mov byte ptr [rbp+450h+var_170], 5
/*1409f08a5*/ loc_1409F08A5: mov edx, 6
/*1409f08aa*/  lea rcx, aDetail; "detail"
/*1409f08b1*/  mov r8, rsi
/*1409f08b4*/  call sub_141433D50
/*1409f08b9*/  nop
/*1409f08ba*/ loc_1409F08BA: test rax, rax
/*1409f08bd*/  jz loc_1409F09B6
/*1409f08c3*/  cmp byte ptr [rax], 3
/*1409f08c6*/  jnz loc_1409F09B6
/*1409f08cc*/  mov rcx, [rax+10h]
/*1409f08d0*/  mov [rbp+450h+var_148], rcx
/*1409f08d7*/  mov rsi, [rax+18h]
/*1409f08db*/  mov [rsp+4D0h+var_4B0], 1
/*1409f08e4*/  mov r9d, 1
/*1409f08ea*/  lea rcx, [rbp+450h+var_110]
/*1409f08f1*/  mov rdx, rsi
/*1409f08f4*/  xor r8d, r8d
/*1409f08f7*/  call sub_140388B60
/*1409f08fc*/  mov rcx, qword ptr [rbp+450h+var_110+8]
/*1409f0903*/  cmp dword ptr [rbp+450h+var_110], 1
/*1409f090a*/  jz loc_1409F8476
/*1409f0910*/  mov rax, qword ptr [rbp+450h+var_100]
/*1409f0917*/  test rsi, rsi
/*1409f091a*/  jz short loc_1409F094A
/*1409f091c*/  mov [rbp+450h+var_208], rcx
/*1409f0923*/  mov rcx, rax
/*1409f0926*/  mov rdx, [rbp+450h+var_148]
/*1409f092d*/  mov r8, rsi
/*1409f0930*/  mov [rbp+450h+var_148], rax
/*1409f0937*/  call sub_141684120
/*1409f093c*/  mov rax, [rbp+450h+var_148]
/*1409f0943*/  mov rcx, [rbp+450h+var_208]
/*1409f094a*/ loc_1409F094A: mov qword ptr [rbp+450h+var_110+8], rcx
/*1409f0951*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f0958*/  mov qword ptr [rbp+450h+var_100+8], rsi
/*1409f095f*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f0966*/  mov [rbp+450h+var_230], 1
/*1409f096d*/ loc_1409F096D: mov edx, 6
/*1409f0972*/  lea rcx, aDetail; "detail"
/*1409f0979*/  lea r8, [rbp+450h+var_170]
/*1409f0980*/  call sub_141433E50
/*1409f0985*/  nop
/*1409f0986*/ loc_1409F0986: mov [rbp+450h+var_148], rax
/*1409f098d*/  mov rcx, rax
/*1409f0990*/  call sub_1400104F0
/*1409f0995*/  nop
/*1409f0996*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f099e*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f09a6*/  mov rax, [rbp+450h+var_148]
/*1409f09ad*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f09b2*/  movdqu xmmword ptr [rax], xmm0
/*1409f09b6*/ loc_1409F09B6: mov qword ptr [rbp+450h+var_2E0], 0
/*1409f09c1*/  mov qword ptr [rbp+450h+var_2D0], 0
/*1409f09cc*/  call nullsub_1
/*1409f09d1*/  mov ecx, 4
/*1409f09d6*/  mov edx, 1
/*1409f09db*/  call sub_140001650
/*1409f09e0*/  test rax, rax
/*1409f09e3*/  jz loc_1409F8C0A
/*1409f09e9*/  mov dword ptr [rax], 65707974h
/*1409f09ef*/  mov qword ptr [rbp+450h+var_200], 4
/*1409f09fa*/  mov qword ptr [rbp+450h+var_200+8], rax
/*1409f0a01*/  mov qword ptr [rbp+450h+var_1F0], 4
/*1409f0a0c*/  mov [rbp+450h+var_1C0], 1
/*1409f0a13*/ loc_1409F0A13: lea rcx, [rbp+450h+var_110]
/*1409f0a1a*/  lea rdx, off_1417A4930; "image_url"
/*1409f0a21*/  call sub_140B56640
/*1409f0a26*/  nop
/*1409f0a27*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0a2e*/  jz loc_1409F8399
/*1409f0a34*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f0a3c*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f0a44*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f0a4c*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f0a54*/  mov [rbp+450h+var_1C0], 0
/*1409f0a5b*/  lea rcx, [rbp+450h+var_110]
/*1409f0a62*/  lea rdx, [rbp+450h+var_2E0]
/*1409f0a69*/  lea r8, [rbp+450h+var_200]
/*1409f0a70*/  lea r9, [rbp+450h+var_1B0]
/*1409f0a77*/  call sub_140307860
/*1409f0a7c*/  nop
/*1409f0a7d*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0a84*/  jz short loc_1409F0A93
/*1409f0a86*/ loc_1409F0A86: lea rcx, [rbp+450h+var_110]
/*1409f0a8d*/  call sub_1400104F0
/*1409f0a92*/  nop
/*1409f0a93*/ loc_1409F0A93: call nullsub_1
/*1409f0a98*/  mov ecx, 9
/*1409f0a9d*/  mov edx, 1
/*1409f0aa2*/  call sub_140001650
/*1409f0aa7*/  test rax, rax
/*1409f0aaa*/  jz loc_1409F8C1F
/*1409f0ab0*/  mov rcx, 72755F6567616D69h
/*1409f0aba*/  mov [rax], rcx
/*1409f0abd*/  mov byte ptr [rax+8], 6Ch ; 'l'
/*1409f0ac1*/  mov qword ptr [rbp+450h+var_200], 9
/*1409f0acc*/  mov qword ptr [rbp+450h+var_200+8], rax
/*1409f0ad3*/  mov qword ptr [rbp+450h+var_1F0], 9
/*1409f0ade*/  mov [rbp+450h+var_1C1], 1
/*1409f0ae5*/ loc_1409F0AE5: lea rcx, [rbp+450h+var_110]
/*1409f0aec*/  lea rdx, [rbp+450h+var_170]
/*1409f0af3*/  call sub_140B842D0
/*1409f0af8*/  nop
/*1409f0af9*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0b00*/  jz loc_1409F83D8
/*1409f0b06*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f0b0e*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f0b16*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f0b1e*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f0b26*/  mov [rbp+450h+var_1C1], 0
/*1409f0b2d*/  lea rcx, [rbp+450h+var_110]
/*1409f0b34*/  lea rdx, [rbp+450h+var_2E0]
/*1409f0b3b*/  lea r8, [rbp+450h+var_200]
/*1409f0b42*/  lea r9, [rbp+450h+var_1B0]
/*1409f0b49*/  call sub_140307860
/*1409f0b4e*/  nop
/*1409f0b4f*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0b56*/  jz short loc_1409F0B65
/*1409f0b58*/ loc_1409F0B58: lea rcx, [rbp+450h+var_110]
/*1409f0b5f*/  call sub_1400104F0
/*1409f0b64*/  nop
/*1409f0b65*/ loc_1409F0B65: mov rax, qword ptr [rbp+450h+var_2D0]
/*1409f0b6c*/  lea rcx, [rbp+450h+var_280+8]
/*1409f0b73*/  mov [rcx+10h], rax
/*1409f0b77*/  movdqu xmm0, [rbp+450h+var_2E0]
/*1409f0b7f*/  movdqu xmmword ptr [rcx], xmm0
/*1409f0b83*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f0b8a*/  mov rsi, qword ptr [rbp+450h+var_2B0]
/*1409f0b91*/  cmp rsi, qword ptr [rbp+450h+var_2C0]
/*1409f0b98*/  jnz short loc_1409F0BA7
/*1409f0b9a*/ loc_1409F0B9A: lea rcx, [rbp+450h+var_2C0]
/*1409f0ba1*/  call sub_1416890A0
/*1409f0ba6*/  nop
/*1409f0ba7*/ loc_1409F0BA7: mov rax, qword ptr [rbp+450h+var_2C0+8]
/*1409f0bae*/  mov rcx, rsi
/*1409f0bb1*/  shl rcx, 5
/*1409f0bb5*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f0bbd*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f0bc5*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f0bcb*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f0bd0*/  inc rsi
/*1409f0bd3*/  mov qword ptr [rbp+450h+var_2B0], rsi
/*1409f0bda*/ loc_1409F0BDA: lea rcx, [rbp+450h+var_170]
/*1409f0be1*/  call sub_1400104F0
/*1409f0be6*/  nop
/*1409f0be7*/  mov al, 1
/*1409f0be9*/  mov dword ptr [rbp+450h+var_148], eax
/*1409f0bef*/  jmp loc_1409F06B0
/*1409f0bf4*/ loc_1409F0BF4: mov edx, 4
/*1409f0bf9*/  lea rcx, aText_10; "text"
/*1409f0c00*/  mov r8, rsi
/*1409f0c03*/  call sub_141433D50
/*1409f0c08*/  nop
/*1409f0c09*/  test rax, rax
/*1409f0c0c*/  jz loc_1409F06B0
/*1409f0c12*/  cmp byte ptr [rax], 3
/*1409f0c15*/  jnz loc_1409F06B0
/*1409f0c1b*/  mov rcx, [rax+10h]
/*1409f0c1f*/  mov rax, [rax+18h]
/*1409f0c23*/  mov qword ptr [rbp+450h+var_2E0], rcx
/*1409f0c2a*/  mov qword ptr [rbp+450h+var_2E0+8], rax
/*1409f0c31*/  test rax, rax
/*1409f0c34*/  jz loc_1409F06B0
/*1409f0c3a*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f0c45*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f0c50*/  call nullsub_1
/*1409f0c55*/  mov ecx, 4
/*1409f0c5a*/  mov edx, 1
/*1409f0c5f*/  call sub_140001650
/*1409f0c64*/  test rax, rax
/*1409f0c67*/  jz loc_1409F8A8D
/*1409f0c6d*/  mov dword ptr [rax], 65707974h
/*1409f0c73*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f0c7e*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f0c85*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f0c90*/  mov [rbp+450h+var_1C2], 1
/*1409f0c97*/ loc_1409F0C97: lea rcx, [rbp+450h+var_110]
/*1409f0c9e*/  lea rdx, off_1417A4688; "text"
/*1409f0ca5*/  call sub_140B56640
/*1409f0caa*/  nop
/*1409f0cab*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0cb2*/  jz loc_1409F818C
/*1409f0cb8*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f0cc0*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f0cc8*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f0cd0*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f0cd8*/  mov [rbp+450h+var_1C2], 0
/*1409f0cdf*/  lea rcx, [rbp+450h+var_110]
/*1409f0ce6*/  lea rdx, [rbp+450h+var_200]
/*1409f0ced*/  lea r8, [rbp+450h+var_170]
/*1409f0cf4*/  lea r9, [rbp+450h+var_1B0]
/*1409f0cfb*/  call sub_140307860
/*1409f0d00*/  nop
/*1409f0d01*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0d08*/  jz short loc_1409F0D17
/*1409f0d0a*/ loc_1409F0D0A: lea rcx, [rbp+450h+var_110]
/*1409f0d11*/  call sub_1400104F0
/*1409f0d16*/  nop
/*1409f0d17*/ loc_1409F0D17: call nullsub_1
/*1409f0d1c*/  mov ecx, 4
/*1409f0d21*/  mov edx, 1
/*1409f0d26*/  call sub_140001650
/*1409f0d2b*/  test rax, rax
/*1409f0d2e*/  jz loc_1409F8AA2
/*1409f0d34*/  mov dword ptr [rax], 74786574h
/*1409f0d3a*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f0d45*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f0d4c*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f0d57*/  mov [rbp+450h+var_1C3], 1
/*1409f0d5e*/ loc_1409F0D5E: lea rcx, [rbp+450h+var_110]
/*1409f0d65*/  lea rdx, [rbp+450h+var_2E0]
/*1409f0d6c*/  call sub_140B56640
/*1409f0d71*/  nop
/*1409f0d72*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0d79*/  jz loc_1409F81CB
/*1409f0d7f*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f0d87*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f0d8f*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f0d97*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f0d9f*/  mov [rbp+450h+var_1C3], 0
/*1409f0da6*/  lea rcx, [rbp+450h+var_110]
/*1409f0dad*/  lea rdx, [rbp+450h+var_200]
/*1409f0db4*/  lea r8, [rbp+450h+var_170]
/*1409f0dbb*/  lea r9, [rbp+450h+var_1B0]
/*1409f0dc2*/  call sub_140307860
/*1409f0dc7*/  nop
/*1409f0dc8*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f0dcf*/  jz short loc_1409F0DDE
/*1409f0dd1*/ loc_1409F0DD1: lea rcx, [rbp+450h+var_110]
/*1409f0dd8*/  call sub_1400104F0
/*1409f0ddd*/  nop
/*1409f0dde*/ loc_1409F0DDE: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f0de5*/  lea rcx, [rbp+450h+var_280+8]
/*1409f0dec*/  mov [rcx+10h], rax
/*1409f0df0*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f0df8*/  movdqu xmmword ptr [rcx], xmm0
/*1409f0dfc*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f0e03*/  mov rsi, qword ptr [rbp+450h+var_2B0]
/*1409f0e0a*/  cmp rsi, qword ptr [rbp+450h+var_2C0]
/*1409f0e11*/  jnz short loc_1409F0E20
/*1409f0e13*/ loc_1409F0E13: lea rcx, [rbp+450h+var_2C0]
/*1409f0e1a*/  call sub_1416890A0
/*1409f0e1f*/  nop
/*1409f0e20*/ loc_1409F0E20: mov rax, qword ptr [rbp+450h+var_2C0+8]
/*1409f0e27*/  mov rcx, rsi
/*1409f0e2a*/  shl rcx, 5
/*1409f0e2e*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f0e36*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f0e3e*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f0e44*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f0e49*/  inc rsi
/*1409f0e4c*/  mov qword ptr [rbp+450h+var_2B0], rsi
/*1409f0e53*/  jmp loc_1409F06B0
/*1409f0e58*/ loc_1409F0E58: mov r8, qword ptr [rbp+450h+var_2B0]
/*1409f0e5f*/  test r8, r8
/*1409f0e62*/  jz loc_1409F1406
/*1409f0e68*/  cmp r8, 1
/*1409f0e6c*/  setz al
/*1409f0e6f*/  mov edx, dword ptr [rbp+450h+var_148]
/*1409f0e75*/  mov ecx, edx
/*1409f0e77*/  not cl
/*1409f0e79*/  test cl, al
/*1409f0e7b*/  jnz loc_1409F1412
/*1409f0e81*/  test dl, 1
/*1409f0e84*/  jz loc_1409F19C8
/*1409f0e8a*/  mov rax, qword ptr [rbp+450h+var_2B0]
/*1409f0e91*/  lea rcx, [rbp+450h+var_140+8]
/*1409f0e98*/  mov [rcx+10h], rax
/*1409f0e9c*/  movdqu xmm0, [rbp+450h+var_2C0]
/*1409f0ea4*/  movdqu xmmword ptr [rcx], xmm0
/*1409f0ea8*/  mov byte ptr [rbp+450h+var_140], 4
/*1409f0eaf*/  jmp loc_1409F2D28
/*1409f0eb4*/ loc_1409F0EB4: lea rsi, aTool; "tool"
/*1409f0ebb*/ loc_1409F0EBB: call nullsub_1
/*1409f0ec0*/  mov r15d, 1
/*1409f0ec6*/  mov edx, 1
/*1409f0ecb*/  mov rcx, r13
/*1409f0ece*/  call sub_140001650
/*1409f0ed3*/  test rax, rax
/*1409f0ed6*/  jz loc_1409F8848
/*1409f0edc*/  mov [rbp+450h+var_338], rax
/*1409f0ee3*/  mov rcx, rax
/*1409f0ee6*/  mov rdx, rsi
/*1409f0ee9*/  mov [rbp+450h+var_208], r13
/*1409f0ef0*/  mov r8, r13
/*1409f0ef3*/  call sub_141684120
/*1409f0ef8*/  xor r15d, r15d
/*1409f0efb*/ loc_1409F0EFB: mov edx, 5
/*1409f0f00*/  lea rcx, aInput_2; "input"
/*1409f0f07*/  mov r8, r14
/*1409f0f0a*/  call sub_141433D50
/*1409f0f0f*/  nop
/*1409f0f10*/ loc_1409F0F10: mov r14d, 1
/*1409f0f16*/  test rax, rax
/*1409f0f19*/  jz short loc_1409F0F2A
/*1409f0f1b*/  cmp byte ptr [rax], 3
/*1409f0f1e*/  jnz short loc_1409F0F2A
/*1409f0f20*/  mov r14, [rax+10h]
/*1409f0f24*/  mov rsi, [rax+18h]
/*1409f0f28*/  jmp short loc_1409F0F2C
/*1409f0f2a*/ loc_1409F0F2A: xor esi, esi
/*1409f0f2c*/ loc_1409F0F2C: mov qword ptr [rbp+450h+var_140], 0
/*1409f0f37*/  mov qword ptr [rbp+450h+var_130], 0
/*1409f0f42*/  call nullsub_1
/*1409f0f47*/  mov ecx, 5
/*1409f0f4c*/  mov edx, 1
/*1409f0f51*/  call sub_140001650
/*1409f0f56*/  test rax, rax
/*1409f0f59*/  jz loc_1409F8833
/*1409f0f5f*/  mov byte ptr [rax+4], 74h ; 't'
/*1409f0f63*/  mov dword ptr [rax], 75706E69h
/*1409f0f69*/  mov qword ptr [rbp+450h+var_170], 5
/*1409f0f74*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f0f7b*/  mov qword ptr [rbp+450h+var_160], 5
/*1409f0f86*/  test rsi, rsi
/*1409f0f89*/  js loc_1409F3EB7
/*1409f0f8f*/  mov dword ptr [rbp+450h+var_1B8], r15d
/*1409f0f96*/  jz loc_1409F1465
/*1409f0f9c*/  call nullsub_1
/*1409f0fa1*/  mov r13d, 1
/*1409f0fa7*/  mov edx, 1
/*1409f0fac*/  mov rcx, rsi
/*1409f0faf*/  call sub_140001650
/*1409f0fb4*/  test rax, rax
/*1409f0fb7*/  jz loc_1409F3EBA
/*1409f0fbd*/  mov r15, rax
/*1409f0fc0*/  mov rcx, rax
/*1409f0fc3*/  mov rdx, r14
/*1409f0fc6*/  mov r8, rsi
/*1409f0fc9*/  call sub_141684120
/*1409f0fce*/  jmp loc_1409F146B
/*1409f0fd3*/ loc_1409F0FD3: call nullsub_1
/*1409f0fd8*/  mov ecx, 2
/*1409f0fdd*/  mov edx, 1
/*1409f0fe2*/  call sub_140001650
/*1409f0fe7*/  test rax, rax
/*1409f0fea*/  jz loc_1409F8936
/*1409f0ff0*/  mov r15, rax
/*1409f0ff3*/  mov word ptr [rax], 7D7Bh
/*1409f0ff8*/  mov esi, 2
/*1409f0ffd*/  mov eax, 2
/*1409f1002*/  mov [rbp+450h+var_1B8], rax
/*1409f1009*/  jmp loc_1409F204A
/*1409f100e*/ loc_1409F100E: mov dword ptr [rbp+450h+var_1B8], 0
/*1409f1018*/  jmp loc_1409EFC27
/*1409f101d*/ loc_1409F101D: mov [rbp+450h+var_310], rsi
/*1409f1024*/ loc_1409F1024: lea rcx, [rbp+450h+var_110]
/*1409f102b*/  mov rdx, rax
/*1409f102e*/  call sub_1409EB540
/*1409f1033*/  nop
/*1409f1034*/ loc_1409F1034: lea rcx, [rbp+450h+var_1B0]
/*1409f103b*/  lea rdx, [rbp+450h+var_110]
/*1409f1042*/  call sub_140985700
/*1409f1047*/  nop
/*1409f1048*/  mov rax, qword ptr [rbp+450h+var_1B0]
/*1409f104f*/  mov r15, qword ptr [rbp+450h+var_1B0+8]
/*1409f1056*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1409f105a*/  jz loc_1409F1930
/*1409f1060*/  mov rsi, qword ptr [rbp+450h+var_1A0]
/*1409f1067*/  mov [rbp+450h+var_1B8], rax
/*1409f106e*/  mov qword ptr [rbp+450h+var_280], rax
/*1409f1075*/  mov qword ptr [rbp+450h+var_280+8], r15
/*1409f107c*/  mov qword ptr [rbp+450h+var_270], rsi
/*1409f1083*/  jmp loc_1409F202F
/*1409f1088*/ loc_1409F1088: mov r13, 0FFFFFFFFFFFFFFFFh
/*1409f108f*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1409f1093*/  jz loc_1409F04FC
/*1409f1099*/  mov qword ptr [rbp+450h+var_2E0], rax
/*1409f10a0*/  mov rax, [rbp+450h+var_A8]
/*1409f10a7*/  mov qword ptr [rbp+450h+var_2E0+8], rax
/*1409f10ae*/  mov rax, [rbp+450h+var_398]
/*1409f10b5*/  mov qword ptr [rbp+450h+var_2D0], rax
/*1409f10bc*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f10c7*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f10d2*/  call nullsub_1
/*1409f10d7*/  mov ecx, 4
/*1409f10dc*/  mov edx, 1
/*1409f10e1*/  call sub_140001650
/*1409f10e6*/  test rax, rax
/*1409f10e9*/  jz loc_1409F8B1E
/*1409f10ef*/  mov dword ptr [rax], 656C6F72h
/*1409f10f5*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f1100*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f1107*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f1112*/  mov [rbp+450h+var_1C4], 1
/*1409f1119*/ loc_1409F1119: lea rcx, [rbp+450h+var_110]
/*1409f1120*/  lea rdx, off_1417A4ED8; "assistant"
/*1409f1127*/  call sub_140B56640
/*1409f112c*/  nop
/*1409f112d*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1134*/  jz loc_1409F820A
/*1409f113a*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f1142*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f114a*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f1152*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f115a*/  mov [rbp+450h+var_1C4], 0
/*1409f1161*/  lea rcx, [rbp+450h+var_110]
/*1409f1168*/  lea rdx, [rbp+450h+var_200]
/*1409f116f*/  lea r8, [rbp+450h+var_170]
/*1409f1176*/  lea r9, [rbp+450h+var_1B0]
/*1409f117d*/  call sub_140307860
/*1409f1182*/  nop
/*1409f1183*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f118a*/  jz short loc_1409F1199
/*1409f118c*/ loc_1409F118C: lea rcx, [rbp+450h+var_110]
/*1409f1193*/  call sub_1400104F0
/*1409f1198*/  nop
/*1409f1199*/ loc_1409F1199: call nullsub_1
/*1409f119e*/  mov ecx, 7
/*1409f11a3*/  mov edx, 1
/*1409f11a8*/  call sub_140001650
/*1409f11ad*/  test rax, rax
/*1409f11b0*/  jz loc_1409F8B09
/*1409f11b6*/  mov dword ptr [rax+3], 746E6574h
/*1409f11bd*/  mov dword ptr [rax], 746E6F63h
/*1409f11c3*/  mov qword ptr [rbp+450h+var_170], 7
/*1409f11ce*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f11d5*/  mov qword ptr [rbp+450h+var_160], 7
/*1409f11e0*/  mov [rbp+450h+var_1C5], 1
/*1409f11e7*/ loc_1409F11E7: lea rcx, [rbp+450h+var_110]
/*1409f11ee*/  lea rdx, unk_1417A7B90
/*1409f11f5*/  call sub_140B842D0
/*1409f11fa*/  nop
/*1409f11fb*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1202*/  jz loc_1409F8249
/*1409f1208*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f1210*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f1218*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f1220*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f1228*/  mov [rbp+450h+var_1C5], 0
/*1409f122f*/  lea rcx, [rbp+450h+var_110]
/*1409f1236*/  lea rdx, [rbp+450h+var_200]
/*1409f123d*/  lea r8, [rbp+450h+var_170]
/*1409f1244*/  lea r9, [rbp+450h+var_1B0]
/*1409f124b*/  call sub_140307860
/*1409f1250*/  nop
/*1409f1251*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1258*/  jz short loc_1409F1267
/*1409f125a*/ loc_1409F125A: lea rcx, [rbp+450h+var_110]
/*1409f1261*/  call sub_1400104F0
/*1409f1266*/  nop
/*1409f1267*/ loc_1409F1267: call nullsub_1
/*1409f126c*/  mov ecx, 11h
/*1409f1271*/  mov edx, 1
/*1409f1276*/  call sub_140001650
/*1409f127b*/  test rax, rax
/*1409f127e*/  jz loc_1409F8AF4
/*1409f1284*/  movdqu xmm0, xmmword ptr cs:aReasoningConte; "reasoning_content"
/*1409f128c*/  movdqu xmmword ptr [rax], xmm0
/*1409f1290*/  mov byte ptr [rax+10h], 74h ; 't'
/*1409f1294*/  mov qword ptr [rbp+450h+var_170], 11h
/*1409f129f*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f12a6*/  mov qword ptr [rbp+450h+var_160], 11h
/*1409f12b1*/  mov [rbp+450h+var_1C6], 1
/*1409f12b8*/ loc_1409F12B8: lea rcx, [rbp+450h+var_110]
/*1409f12bf*/  lea rdx, [rbp+450h+var_2E0]
/*1409f12c6*/  call sub_140B56520
/*1409f12cb*/  nop
/*1409f12cc*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f12d3*/  jz loc_1409F8288
/*1409f12d9*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f12e1*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f12e9*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f12f1*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f12f9*/  mov [rbp+450h+var_1C6], 0
/*1409f1300*/  lea rcx, [rbp+450h+var_110]
/*1409f1307*/  lea rdx, [rbp+450h+var_200]
/*1409f130e*/  lea r8, [rbp+450h+var_170]
/*1409f1315*/  lea r9, [rbp+450h+var_1B0]
/*1409f131c*/  call sub_140307860
/*1409f1321*/  nop
/*1409f1322*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1329*/  jz short loc_1409F1338
/*1409f132b*/ loc_1409F132B: lea rcx, [rbp+450h+var_110]
/*1409f1332*/  call sub_1400104F0
/*1409f1337*/  nop
/*1409f1338*/ loc_1409F1338: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f133f*/  lea rcx, [rbp+450h+var_280+8]
/*1409f1346*/  mov [rcx+10h], rax
/*1409f134a*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f1352*/  movdqu xmmword ptr [rcx], xmm0
/*1409f1356*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f135d*/  mov rsi, [rbp+450h+var_290]
/*1409f1364*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f136b*/  jnz short loc_1409F137A
/*1409f136d*/ loc_1409F136D: lea rcx, [rbp+450h+var_2A0]
/*1409f1374*/  call sub_1416890A0
/*1409f1379*/  nop
/*1409f137a*/ loc_1409F137A: mov rax, [rbp+450h+var_298]
/*1409f1381*/  mov rcx, rsi
/*1409f1384*/  shl rcx, 5
/*1409f1388*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f1390*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f1398*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f139e*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f13a3*/  inc rsi
/*1409f13a6*/  mov [rbp+450h+var_290], rsi
/*1409f13ad*/  mov rdx, [rbp+450h+var_B8]
/*1409f13b4*/  test rdx, rdx
/*1409f13b7*/  jz loc_1409F04FC
/*1409f13bd*/  mov r8d, 1
/*1409f13c3*/  mov rcx, [rbp+450h+var_A8]
/*1409f13ca*/  call sub_140001660
/*1409f13cf*/  jmp loc_1409F04FC
/*1409f13d4*/ loc_1409F13D4: mov rdi, [rbp+450h+var_A8]
/*1409f13db*/  mov r9, rdi
/*1409f13de*/  mov r13, r15
/*1409f13e1*/  test rsi, rsi
/*1409f13e4*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f13ea*/  mov r8d, 1
/*1409f13f0*/  mov rcx, r14
/*1409f13f3*/  mov rdx, rsi
/*1409f13f6*/  call sub_140001660
/*1409f13fb*/  mov r9, rdi
/*1409f13fe*/  mov r13, r15
/*1409f1401*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f1406*/ loc_1409F1406: mov byte ptr [rbp+450h+var_140], 0
/*1409f140d*/  jmp loc_1409F2CA4
/*1409f1412*/ loc_1409F1412: mov r8, qword ptr [rbp+450h+var_2C0+8]
/*1409f1419*/ loc_1409F1419: mov edx, 4
/*1409f141e*/  lea rcx, aText_10; "text"
/*1409f1425*/  call sub_141433D50
/*1409f142a*/  nop
/*1409f142b*/  test rax, rax
/*1409f142e*/  jz loc_1409F1F9F
/*1409f1434*/  movzx ecx, byte ptr [rax]
/*1409f1437*/  lea rdx, jpt_1409F1445
/*1409f143e*/  movsxd rcx, ds:(jpt_1409F1445 - 1417AAE3Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f1442*/  add rcx, rdx
/*1409f1445*/  jmp rcx; switch jump  // switch jump
/*1409f1447*/ loc_1409F1447: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F1445 cases 1,2  // jumptable 00000001409F1445 cases 1,2
/*1409f144b*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409f1450*/  movdqa [rbp+450h+var_100], xmm1
/*1409f1458*/  movdqa [rbp+450h+var_110], xmm0
/*1409f1460*/  jmp loc_1409F2C3A
/*1409f1465*/ loc_1409F1465: mov r15d, 1
/*1409f146b*/ loc_1409F146B: mov byte ptr [rbp+450h+var_110], 3
/*1409f1472*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409f1479*/  mov qword ptr [rbp+450h+var_100], r15
/*1409f1480*/  mov qword ptr [rbp+450h+var_100+8], rsi
/*1409f1487*/  mov [rbp+450h+var_222], 0
/*1409f148e*/ loc_1409F148E: lea rcx, [rbp+450h+var_1B0]
/*1409f1495*/  lea rdx, [rbp+450h+var_140]
/*1409f149c*/  lea r8, [rbp+450h+var_170]
/*1409f14a3*/  lea r9, [rbp+450h+var_110]
/*1409f14aa*/  call sub_140307860
/*1409f14af*/  nop
/*1409f14b0*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f14b7*/  jz short loc_1409F14C6
/*1409f14b9*/ loc_1409F14B9: lea rcx, [rbp+450h+var_1B0]
/*1409f14c0*/  call sub_1400104F0
/*1409f14c5*/  nop
/*1409f14c6*/ loc_1409F14C6: mov rax, qword ptr [rbp+450h+var_130]
/*1409f14cd*/  lea rcx, [rbp+450h+var_280+8]
/*1409f14d4*/  mov [rcx+10h], rax
/*1409f14d8*/  movdqu xmm0, [rbp+450h+var_140]
/*1409f14e0*/  movdqu xmmword ptr [rcx], xmm0
/*1409f14e4*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f14eb*/  mov qword ptr [rbp+450h+var_1B0], 0
/*1409f14f6*/  mov qword ptr [rbp+450h+var_1B0+8], 1
/*1409f1501*/  mov qword ptr [rbp+450h+var_1A0], 0
/*1409f150c*/  mov qword ptr [rbp+450h+var_100], 60000020h
/*1409f1517*/  lea rax, [rbp+450h+var_1B0]
/*1409f151e*/  mov qword ptr [rbp+450h+var_110], rax
/*1409f1525*/  lea rax, off_1417A9B00
/*1409f152c*/  mov qword ptr [rbp+450h+var_110+8], rax
/*1409f1533*/ loc_1409F1533: lea rcx, [rbp+450h+var_280]
/*1409f153a*/  lea rdx, [rbp+450h+var_110]
/*1409f1541*/  call sub_14142EA10
/*1409f1546*/  nop
/*1409f1547*/  test al, al
/*1409f1549*/  jnz loc_1409F80C1
/*1409f154f*/  mov rax, qword ptr [rbp+450h+var_1B0]
/*1409f1556*/  mov [rbp+450h+var_2E8], rax
/*1409f155d*/  mov rax, qword ptr [rbp+450h+var_1B0+8]
/*1409f1564*/  mov [rbp+450h+var_288], rax
/*1409f156b*/  mov rsi, qword ptr [rbp+450h+var_1A0]
/*1409f1572*/ loc_1409F1572: lea rcx, [rbp+450h+var_280]
/*1409f1579*/  call sub_1400104F0
/*1409f157e*/  nop
/*1409f157f*/ loc_1409F157F: mov qword ptr [rbp+450h+var_2C0], 0
/*1409f158a*/  mov qword ptr [rbp+450h+var_2B0], 0
/*1409f1595*/  call nullsub_1
/*1409f159a*/  mov ecx, 2
/*1409f159f*/  mov edx, 1
/*1409f15a4*/  call sub_140001650
/*1409f15a9*/  test rax, rax
/*1409f15ac*/  jz loc_1409F8991
/*1409f15b2*/  mov word ptr [rax], 6469h
/*1409f15b7*/  mov qword ptr [rbp+450h+var_280], 2
/*1409f15c2*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f15c9*/  mov qword ptr [rbp+450h+var_270], 2
/*1409f15d4*/  mov r14d, 1
/*1409f15da*/  test dil, dil
/*1409f15dd*/  mov rdi, [rbp+450h+var_148]
/*1409f15e4*/  jnz short loc_1409F1616
/*1409f15e6*/  call nullsub_1
/*1409f15eb*/  mov edx, 1
/*1409f15f0*/  mov rcx, rdi
/*1409f15f3*/  call sub_140001650
/*1409f15f8*/  test rax, rax
/*1409f15fb*/  jz loc_1409F8B33
/*1409f1601*/  mov r14, rax
/*1409f1604*/  mov rcx, rax
/*1409f1607*/  mov rdx, [rbp+450h+var_340]
/*1409f160e*/  mov r8, rdi
/*1409f1611*/  call sub_141684120
/*1409f1616*/ loc_1409F1616: mov byte ptr [rbp+450h+var_110], 3
/*1409f161d*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f1624*/  mov qword ptr [rbp+450h+var_100], r14
/*1409f162b*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f1632*/  mov [rbp+450h+var_223], 0
/*1409f1639*/ loc_1409F1639: lea rcx, [rbp+450h+var_1B0]
/*1409f1640*/  lea rdx, [rbp+450h+var_2C0]
/*1409f1647*/  lea r8, [rbp+450h+var_280]
/*1409f164e*/  lea r9, [rbp+450h+var_110]
/*1409f1655*/  call sub_140307860
/*1409f165a*/  nop
/*1409f165b*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f1662*/  jz short loc_1409F1671
/*1409f1664*/ loc_1409F1664: lea rcx, [rbp+450h+var_1B0]
/*1409f166b*/  call sub_1400104F0
/*1409f1670*/  nop
/*1409f1671*/ loc_1409F1671: call nullsub_1
/*1409f1676*/  mov ecx, 4
/*1409f167b*/  mov edx, 1
/*1409f1680*/  call sub_140001650
/*1409f1685*/  test rax, rax
/*1409f1688*/  jz loc_1409F897C
/*1409f168e*/  mov dword ptr [rax], 65707974h
/*1409f1694*/  mov qword ptr [rbp+450h+var_280], 4
/*1409f169f*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f16a6*/  mov qword ptr [rbp+450h+var_270], 4
/*1409f16b1*/  call nullsub_1
/*1409f16b6*/  mov ecx, 8
/*1409f16bb*/  mov edx, 1
/*1409f16c0*/  call sub_140001650
/*1409f16c5*/  test rax, rax
/*1409f16c8*/  mov [rbp+450h+var_448], rax
/*1409f16cc*/  jz loc_1409F8967
/*1409f16d2*/  mov r10, rax
/*1409f16d5*/  mov rax, 6E6F6974636E7566h
/*1409f16df*/  mov [r10], rax
/*1409f16e2*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f16e9*/  mov qword ptr [rbp+450h+var_110+8], 8
/*1409f16f4*/  mov qword ptr [rbp+450h+var_100], r10
/*1409f16fb*/  mov qword ptr [rbp+450h+var_100+8], 8
/*1409f1706*/ loc_1409F1706: lea rcx, [rbp+450h+var_1B0]
/*1409f170d*/  lea rdx, [rbp+450h+var_2C0]
/*1409f1714*/  lea r8, [rbp+450h+var_280]
/*1409f171b*/  lea r9, [rbp+450h+var_110]
/*1409f1722*/  call sub_140307860
/*1409f1727*/  nop
/*1409f1728*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f172f*/  jz short loc_1409F173E
/*1409f1731*/ loc_1409F1731: lea rcx, [rbp+450h+var_1B0]
/*1409f1738*/  call sub_1400104F0
/*1409f173d*/  nop
/*1409f173e*/ loc_1409F173E: call nullsub_1
/*1409f1743*/  mov ecx, 8
/*1409f1748*/  mov edx, 1
/*1409f174d*/  call sub_140001650
/*1409f1752*/  test rax, rax
/*1409f1755*/  mov r15d, dword ptr [rbp+450h+var_1B8]
/*1409f175c*/  jz loc_1409F8952
/*1409f1762*/  mov rcx, 6E6F6974636E7566h
/*1409f176c*/  mov [rax], rcx
/*1409f176f*/  mov qword ptr [rbp+450h+var_2E0], 8
/*1409f177a*/  mov qword ptr [rbp+450h+var_2E0+8], rax
/*1409f1781*/  mov qword ptr [rbp+450h+var_2D0], 8
/*1409f178c*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f1797*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f17a2*/  call nullsub_1
/*1409f17a7*/  mov ecx, 4
/*1409f17ac*/  mov edx, 1
/*1409f17b1*/  call sub_140001650
/*1409f17b6*/  test rax, rax
/*1409f17b9*/  mov rdi, [rbp+450h+var_208]
/*1409f17c0*/  jz loc_1409F89A6
/*1409f17c6*/  mov dword ptr [rax], 656D616Eh
/*1409f17cc*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f17d7*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f17de*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f17e9*/  mov r14d, 1
/*1409f17ef*/  test r15b, r15b
/*1409f17f2*/  jnz short loc_1409F1824
/*1409f17f4*/  call nullsub_1
/*1409f17f9*/  mov edx, 1
/*1409f17fe*/  mov rcx, rdi
/*1409f1801*/  call sub_140001650
/*1409f1806*/  test rax, rax
/*1409f1809*/  jz loc_1409F8ADA
/*1409f180f*/  mov r14, rax
/*1409f1812*/  mov rcx, rax
/*1409f1815*/  mov rdx, [rbp+450h+var_338]
/*1409f181c*/  mov r8, rdi
/*1409f181f*/  call sub_141684120
/*1409f1824*/ loc_1409F1824: mov byte ptr [rbp+450h+var_110], 3
/*1409f182b*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f1832*/  mov qword ptr [rbp+450h+var_100], r14
/*1409f1839*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f1840*/  mov [rbp+450h+var_224], 0
/*1409f1847*/ loc_1409F1847: lea rcx, [rbp+450h+var_1B0]
/*1409f184e*/  lea rdx, [rbp+450h+var_200]
/*1409f1855*/  lea r8, [rbp+450h+var_140]
/*1409f185c*/  lea r9, [rbp+450h+var_110]
/*1409f1863*/  call sub_140307860
/*1409f1868*/  nop
/*1409f1869*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f1870*/  jz short loc_1409F187F
/*1409f1872*/ loc_1409F1872: lea rcx, [rbp+450h+var_1B0]
/*1409f1879*/  call sub_1400104F0
/*1409f187e*/  nop
/*1409f187f*/ loc_1409F187F: call nullsub_1
/*1409f1884*/  mov ecx, 9
/*1409f1889*/  mov edx, 1
/*1409f188e*/  call sub_140001650
/*1409f1893*/  test rax, rax
/*1409f1896*/  jz loc_1409F89BB
/*1409f189c*/  mov rcx, 746E656D75677261h
/*1409f18a6*/  mov [rax], rcx
/*1409f18a9*/  mov byte ptr [rax+8], 73h ; 's'
/*1409f18ad*/  mov qword ptr [rbp+450h+var_140], 9
/*1409f18b8*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f18bf*/  mov qword ptr [rbp+450h+var_130], 9
/*1409f18ca*/  test rsi, rsi
/*1409f18cd*/  js loc_1409F7D79
/*1409f18d3*/  jz loc_1409F1A7D
/*1409f18d9*/  call nullsub_1
/*1409f18de*/  mov r15d, 1
/*1409f18e4*/  mov edx, 1
/*1409f18e9*/  mov rcx, rsi
/*1409f18ec*/  call sub_140001650
/*1409f18f1*/  test rax, rax
/*1409f18f4*/  jz loc_1409F7D7C
/*1409f18fa*/  mov r14, rax
/*1409f18fd*/  mov rcx, rax
/*1409f1900*/  mov rdx, [rbp+450h+var_288]
/*1409f1907*/  mov r8, rsi
/*1409f190a*/  call sub_141684120
/*1409f190f*/  jmp loc_1409F1A83
/*1409f1914*/ loc_1409F1914: mov r15d, 6
/*1409f191a*/  mov dword ptr [rbp+450h+var_1B8], 0
/*1409f1924*/  lea r13, aSystem_0; "system"
/*1409f192b*/  jmp loc_1409EFC27
/*1409f1930*/ loc_1409F1930: mov qword ptr [rbp+450h+var_1B0], r15
/*1409f1937*/  mov rsi, r15
/*1409f193a*/  call nullsub_1
/*1409f193f*/  mov ecx, 2
/*1409f1944*/  mov edx, 1
/*1409f1949*/  call sub_140001650
/*1409f194e*/  test rax, rax
/*1409f1951*/  jz loc_1409F8BE0
/*1409f1957*/  mov r15, rax
/*1409f195a*/  mov word ptr [rax], 7D7Bh
/*1409f195f*/  mov qword ptr [rbp+450h+var_280], 2
/*1409f196a*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f1971*/  mov qword ptr [rbp+450h+var_270], 2
/*1409f197c*/  mov rax, [rsi]
/*1409f197f*/  cmp rax, 1
/*1409f1983*/  mov [rbp+450h+var_2E8], rsi
/*1409f198a*/  jz loc_1409F1FFD
/*1409f1990*/  test rax, rax
/*1409f1993*/  jnz loc_1409F2007
/*1409f1999*/  mov rax, [rbp+450h+var_2E8]
/*1409f19a0*/  mov rdx, [rax+10h]
/*1409f19a4*/  test rdx, rdx
/*1409f19a7*/  jz loc_1409F2007
/*1409f19ad*/  mov rax, [rbp+450h+var_2E8]
/*1409f19b4*/  mov rcx, [rax+8]
/*1409f19b8*/  mov r8d, 1
/*1409f19be*/  call sub_140001660
/*1409f19c3*/  jmp loc_1409F2007
/*1409f19c8*/ loc_1409F19C8: mov rdx, qword ptr [rbp+450h+var_2C0+8]
/*1409f19cf*/  shl r8, 5
/*1409f19d3*/  add r8, rdx
/*1409f19d6*/ loc_1409F19D6: lea rcx, [rbp+450h+var_1B0]
/*1409f19dd*/  call sub_14031BC90
/*1409f19e2*/  nop
/*1409f19e3*/  mov rdx, qword ptr [rbp+450h+var_1B0+8]
/*1409f19ea*/  mov r8, qword ptr [rbp+450h+var_1A0]
/*1409f19f1*/ loc_1409F19F1: mov [rsp+4D0h+var_4B0], 1
/*1409f19fa*/  lea rcx, [rbp+450h+var_110]
/*1409f1a01*/  mov [rbp+450h+var_148], rdx
/*1409f1a08*/  lea r9, asc_1417A47C8; "\n"
/*1409f1a0f*/  call sub_1404408C0
/*1409f1a14*/  nop
/*1409f1a15*/  mov rax, qword ptr [rbp+450h+var_100]
/*1409f1a1c*/  mov qword ptr [rbp+450h+var_270], rax
/*1409f1a23*/  movups xmm0, [rbp+450h+var_110]
/*1409f1a2a*/  movaps [rbp+450h+var_280], xmm0
/*1409f1a31*/  mov rdx, qword ptr [rbp+450h+var_1B0]
/*1409f1a38*/  test rdx, rdx
/*1409f1a3b*/  jz short loc_1409F1A53
/*1409f1a3d*/  shl rdx, 4
/*1409f1a41*/  mov r8d, 8
/*1409f1a47*/  mov rcx, [rbp+450h+var_148]
/*1409f1a4e*/  call sub_140001660
/*1409f1a53*/ loc_1409F1A53: mov rax, qword ptr [rbp+450h+var_270]
/*1409f1a5a*/  lea rcx, [rbp+450h+var_140+8]
/*1409f1a61*/  mov [rcx+10h], rax
/*1409f1a65*/  movdqa xmm0, [rbp+450h+var_280]
/*1409f1a6d*/  movdqu xmmword ptr [rcx], xmm0
/*1409f1a71*/  mov byte ptr [rbp+450h+var_140], 3
/*1409f1a78*/  jmp loc_1409F2CA4
/*1409f1a7d*/ loc_1409F1A7D: mov r14d, 1
/*1409f1a83*/ loc_1409F1A83: mov byte ptr [rbp+450h+var_110], 3
/*1409f1a8a*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409f1a91*/  mov qword ptr [rbp+450h+var_100], r14
/*1409f1a98*/  mov qword ptr [rbp+450h+var_100+8], rsi
/*1409f1a9f*/  mov [rbp+450h+var_225], 0
/*1409f1aa6*/ loc_1409F1AA6: lea rcx, [rbp+450h+var_1B0]
/*1409f1aad*/  lea rdx, [rbp+450h+var_200]
/*1409f1ab4*/  lea r8, [rbp+450h+var_140]
/*1409f1abb*/  lea r9, [rbp+450h+var_110]
/*1409f1ac2*/  call sub_140307860
/*1409f1ac7*/  nop
/*1409f1ac8*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f1acf*/  jz short loc_1409F1ADE
/*1409f1ad1*/ loc_1409F1AD1: lea rcx, [rbp+450h+var_1B0]
/*1409f1ad8*/  call sub_1400104F0
/*1409f1add*/  nop
/*1409f1ade*/ loc_1409F1ADE: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f1ae5*/  lea rcx, [rbp+450h+var_280+8]
/*1409f1aec*/  mov [rcx+10h], rax
/*1409f1af0*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f1af8*/  movdqu xmmword ptr [rcx], xmm0
/*1409f1afc*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f1b03*/  mov [rbp+450h+var_226], 0
/*1409f1b0a*/ loc_1409F1B0A: lea rcx, [rbp+450h+var_110]
/*1409f1b11*/  lea rdx, [rbp+450h+var_2C0]
/*1409f1b18*/  lea r8, [rbp+450h+var_2E0]
/*1409f1b1f*/  lea r9, [rbp+450h+var_280]
/*1409f1b26*/  call sub_140307860
/*1409f1b2b*/  nop
/*1409f1b2c*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1b33*/  jz short loc_1409F1B42
/*1409f1b35*/ loc_1409F1B35: lea rcx, [rbp+450h+var_110]
/*1409f1b3c*/  call sub_1400104F0
/*1409f1b41*/  nop
/*1409f1b42*/ loc_1409F1B42: mov rax, qword ptr [rbp+450h+var_2B0]
/*1409f1b49*/  lea rcx, [rbp+450h+var_170+8]
/*1409f1b50*/  mov [rcx+10h], rax
/*1409f1b54*/  movdqu xmm0, [rbp+450h+var_2C0]
/*1409f1b5c*/  movdqu xmmword ptr [rcx], xmm0
/*1409f1b60*/  mov byte ptr [rbp+450h+var_170], 5
/*1409f1b67*/  mov rax, [rbp+450h+var_290]
/*1409f1b6e*/  test rax, rax
/*1409f1b71*/  jz short loc_1409F1BDA
/*1409f1b73*/  mov rcx, [rbp+450h+var_298]
/*1409f1b7a*/  shl rax, 5
/*1409f1b7e*/  lea r8, [rcx+rax]
/*1409f1b82*/  add r8, 0FFFFFFFFFFFFFFE0h
/*1409f1b86*/  test r8, r8
/*1409f1b89*/  jz short loc_1409F1BDA
/*1409f1b8b*/  mov [rbp+450h+var_AD], 1
/*1409f1b92*/ loc_1409F1B92: mov edx, 4
/*1409f1b97*/  lea rcx, aRole_4; "role"
/*1409f1b9e*/  call sub_141433D50
/*1409f1ba3*/  nop
/*1409f1ba4*/  test rax, rax
/*1409f1ba7*/  jz short loc_1409F1BDA
/*1409f1ba9*/  cmp byte ptr [rax], 3
/*1409f1bac*/  jnz short loc_1409F1BDA
/*1409f1bae*/  cmp qword ptr [rax+18h], 9
/*1409f1bb3*/  jnz short loc_1409F1BDA
/*1409f1bb5*/  mov rax, [rax+10h]
/*1409f1bb9*/  mov rcx, [rax]
/*1409f1bbc*/  mov rdx, 6E61747369737361h
/*1409f1bc6*/  xor rcx, rdx
/*1409f1bc9*/  movzx eax, byte ptr [rax+8]
/*1409f1bcd*/  xor rax, 74h
/*1409f1bd1*/  or rax, rcx
/*1409f1bd4*/  jz loc_1409F3226
/*1409f1bda*/ loc_1409F1BDA: mov qword ptr [rbp+450h+var_200], 0
/*1409f1be5*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f1bf0*/  call nullsub_1
/*1409f1bf5*/  mov ecx, 4
/*1409f1bfa*/  mov edx, 1
/*1409f1bff*/  call sub_140001650
/*1409f1c04*/  test rax, rax
/*1409f1c07*/  jz loc_1409F8B62
/*1409f1c0d*/  mov dword ptr [rax], 656C6F72h
/*1409f1c13*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f1c1e*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f1c25*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f1c30*/  call nullsub_1
/*1409f1c35*/  mov ecx, 9
/*1409f1c3a*/  mov edx, 1
/*1409f1c3f*/  call sub_140001650
/*1409f1c44*/  test rax, rax
/*1409f1c47*/  mov [rbp+450h+var_1B8], rax
/*1409f1c4e*/  jz loc_1409F8B8C
/*1409f1c54*/  mov r10, rax
/*1409f1c57*/  mov rax, 6E61747369737361h
/*1409f1c61*/  mov [r10], rax
/*1409f1c64*/  mov byte ptr [r10+8], 74h ; 't'
/*1409f1c69*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f1c70*/  mov qword ptr [rbp+450h+var_110+8], 9
/*1409f1c7b*/  mov qword ptr [rbp+450h+var_100], r10
/*1409f1c82*/  mov qword ptr [rbp+450h+var_100+8], 9
/*1409f1c8d*/ loc_1409F1C8D: lea rcx, [rbp+450h+var_1B0]
/*1409f1c94*/  lea rdx, [rbp+450h+var_200]
/*1409f1c9b*/  lea r8, [rbp+450h+var_140]
/*1409f1ca2*/  lea r9, [rbp+450h+var_110]
/*1409f1ca9*/  call sub_140307860
/*1409f1cae*/  nop
/*1409f1caf*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f1cb6*/  jz short loc_1409F1CC5
/*1409f1cb8*/ loc_1409F1CB8: lea rcx, [rbp+450h+var_1B0]
/*1409f1cbf*/  call sub_1400104F0
/*1409f1cc4*/  nop
/*1409f1cc5*/ loc_1409F1CC5: call nullsub_1
/*1409f1cca*/  mov ecx, 7
/*1409f1ccf*/  mov edx, 1
/*1409f1cd4*/  call sub_140001650
/*1409f1cd9*/  test rax, rax
/*1409f1cdc*/  jz loc_1409F8B77
/*1409f1ce2*/  mov dword ptr [rax+3], 746E6574h
/*1409f1ce9*/  mov dword ptr [rax], 746E6F63h
/*1409f1cef*/  mov qword ptr [rbp+450h+var_140], 7
/*1409f1cfa*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f1d01*/  mov qword ptr [rbp+450h+var_130], 7
/*1409f1d0c*/  mov [rbp+450h+var_1BA], 1
/*1409f1d13*/ loc_1409F1D13: lea rcx, [rbp+450h+var_110]
/*1409f1d1a*/  lea rdx, unk_1417A7B90
/*1409f1d21*/  call sub_140B842D0
/*1409f1d26*/  nop
/*1409f1d27*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1d2e*/  jz loc_1409F82C7
/*1409f1d34*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f1d3c*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f1d44*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f1d4c*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f1d54*/  mov [rbp+450h+var_1BA], 0
/*1409f1d5b*/  lea rcx, [rbp+450h+var_110]
/*1409f1d62*/  lea rdx, [rbp+450h+var_200]
/*1409f1d69*/  lea r8, [rbp+450h+var_140]
/*1409f1d70*/  lea r9, [rbp+450h+var_1B0]
/*1409f1d77*/  call sub_140307860
/*1409f1d7c*/  nop
/*1409f1d7d*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1d84*/  jz short loc_1409F1D93
/*1409f1d86*/ loc_1409F1D86: lea rcx, [rbp+450h+var_110]
/*1409f1d8d*/  call sub_1400104F0
/*1409f1d92*/  nop
/*1409f1d93*/ loc_1409F1D93: call nullsub_1
/*1409f1d98*/  mov ecx, 0Ah
/*1409f1d9d*/  mov edx, 1
/*1409f1da2*/  call sub_140001650
/*1409f1da7*/  test rax, rax
/*1409f1daa*/  jz loc_1409F8B4D
/*1409f1db0*/  mov rcx, 6C61635F6C6F6F74h
/*1409f1dba*/  mov [rax], rcx
/*1409f1dbd*/  mov word ptr [rax+8], 736Ch
/*1409f1dc3*/  mov qword ptr [rbp+450h+var_140], 0Ah
/*1409f1dce*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f1dd5*/  mov qword ptr [rbp+450h+var_130], 0Ah
/*1409f1de0*/  call nullsub_1
/*1409f1de5*/  mov ecx, 20h ; ' '
/*1409f1dea*/  mov edx, 8
/*1409f1def*/  call sub_140001650
/*1409f1df4*/  mov [rbp+450h+var_1B8], rax
/*1409f1dfb*/  test rax, rax
/*1409f1dfe*/  jz loc_1409F8131
/*1409f1e04*/ loc_1409F1E04: lea rcx, [rbp+450h+var_110]
/*1409f1e0b*/  lea rdx, [rbp+450h+var_170]
/*1409f1e12*/  call sub_140B842D0
/*1409f1e17*/  nop
/*1409f1e18*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f1e1f*/  jz loc_1409F8306
/*1409f1e25*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f1e2d*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f1e35*/  mov rax, [rbp+450h+var_1B8]
/*1409f1e3c*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f1e41*/  movdqu xmmword ptr [rax], xmm0
/*1409f1e45*/  mov qword ptr [rbp+450h+var_110+8], 1
/*1409f1e50*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f1e57*/  mov qword ptr [rbp+450h+var_100+8], 1
/*1409f1e62*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f1e69*/  mov [rbp+450h+var_1D9], 0
/*1409f1e70*/ loc_1409F1E70: lea rcx, [rbp+450h+var_1B0]
/*1409f1e77*/  lea rdx, [rbp+450h+var_200]
/*1409f1e7e*/  lea r8, [rbp+450h+var_140]
/*1409f1e85*/  lea r9, [rbp+450h+var_110]
/*1409f1e8c*/  call sub_140307860
/*1409f1e91*/  nop
/*1409f1e92*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f1e99*/  jz short loc_1409F1EA8
/*1409f1e9b*/ loc_1409F1E9B: lea rcx, [rbp+450h+var_1B0]
/*1409f1ea2*/  call sub_1400104F0
/*1409f1ea7*/  nop
/*1409f1ea8*/ loc_1409F1EA8: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f1eaf*/  lea rcx, [rbp+450h+var_280+8]
/*1409f1eb6*/  mov [rcx+10h], rax
/*1409f1eba*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f1ec2*/  movdqu xmmword ptr [rcx], xmm0
/*1409f1ec6*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f1ecd*/  mov rsi, [rbp+450h+var_290]
/*1409f1ed4*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f1edb*/  jnz short loc_1409F1EEA
/*1409f1edd*/ loc_1409F1EDD: lea rcx, [rbp+450h+var_2A0]
/*1409f1ee4*/  call sub_1416890A0
/*1409f1ee9*/  nop
/*1409f1eea*/ loc_1409F1EEA: mov rax, [rbp+450h+var_298]
/*1409f1ef1*/  mov rcx, rsi
/*1409f1ef4*/  shl rcx, 5
/*1409f1ef8*/  movdqu xmm0, [rbp+450h+var_280]
/*1409f1f00*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f1f08*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f1f0e*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f1f13*/  inc rsi
/*1409f1f16*/  mov [rbp+450h+var_290], rsi
/*1409f1f1d*/ loc_1409F1F1D: lea rcx, [rbp+450h+var_170]
/*1409f1f24*/  call sub_1400104F0
/*1409f1f29*/  nop
/*1409f1f2a*/  mov rdx, [rbp+450h+var_2E8]
/*1409f1f31*/  test rdx, rdx
/*1409f1f34*/  jz short loc_1409F1F48
/*1409f1f36*/ loc_1409F1F36: mov r8d, 1
/*1409f1f3c*/  mov rcx, [rbp+450h+var_288]
/*1409f1f43*/  call sub_140001660
/*1409f1f48*/ loc_1409F1F48: mov rdx, [rbp+450h+var_208]
/*1409f1f4f*/  test rdx, rdx
/*1409f1f52*/  mov rdi, [rbp+450h+var_B8]
/*1409f1f59*/  mov r14, [rbp+450h+var_148]
/*1409f1f60*/  jz short loc_1409F1F74
/*1409f1f62*/  mov r8d, 1
/*1409f1f68*/  mov rcx, [rbp+450h+var_338]
/*1409f1f6f*/  call sub_140001660
/*1409f1f74*/ loc_1409F1F74: mov rsi, [rbp+450h+var_A8]
/*1409f1f7b*/  mov r9, rsi
/*1409f1f7e*/  mov r13, rdi
/*1409f1f81*/  test r14, r14
/*1409f1f84*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f1f8a*/  mov r8d, 1
/*1409f1f90*/  mov rcx, [rbp+450h+var_340]
/*1409f1f97*/  mov rdx, r14
/*1409f1f9a*/  jmp loc_1409F04E5
/*1409f1f9f*/ loc_1409F1F9F: mov byte ptr [rbp+450h+var_110], 0
/*1409f1fa6*/  movdqu xmm0, [rbp+450h+var_100]
/*1409f1fae*/  movdqa [rbp+450h+var_130], xmm0
/*1409f1fb6*/  movzx eax, byte ptr [rbp+450h+var_110]
/*1409f1fbd*/  mov byte ptr [rbp+450h+var_140], al
/*1409f1fc3*/  mov rax, qword ptr [rbp+450h+var_110+1]
/*1409f1fca*/  mov qword ptr [rbp+450h+var_140+1], rax
/*1409f1fd1*/  mov eax, dword ptr [rbp+450h+var_110+9]
/*1409f1fd7*/  mov dword ptr [rbp+450h+var_140+9], eax
/*1409f1fdd*/  movzx eax, word ptr [rbp+450h+var_110+0Dh]
/*1409f1fe4*/  mov word ptr [rbp+450h+var_140+0Dh], ax
/*1409f1feb*/  movzx eax, byte ptr [rbp+450h+var_110+0Fh]
/*1409f1ff2*/  mov byte ptr [rbp+450h+var_140+0Fh], al
/*1409f1ff8*/  jmp loc_1409F2CA4
/*1409f1ffd*/ loc_1409F1FFD: lea rcx, [rsi+8]
/*1409f2001*/ loc_1409F2001: call sub_140018650
/*1409f2006*/  nop
/*1409f2007*/ loc_1409F2007: mov edx, 28h ; '('
/*1409f200c*/  mov r8d, 8
/*1409f2012*/  mov rcx, [rbp+450h+var_2E8]
/*1409f2019*/  call sub_140001660
/*1409f201e*/  mov esi, 2
/*1409f2023*/  mov eax, 2
/*1409f2028*/  mov [rbp+450h+var_1B8], rax
/*1409f202f*/ loc_1409F202F: mov rax, [rbp+450h+var_B8]
/*1409f2036*/  mov [rbp+450h+var_310], rax
/*1409f203d*/ loc_1409F203D: lea rcx, [rbp+450h+var_110]
/*1409f2044*/  call sub_1400104F0
/*1409f2049*/  nop
/*1409f204a*/ loc_1409F204A: mov [rbp+450h+var_2E8], r15
/*1409f2051*/  mov qword ptr [rbp+450h+var_2C0], 0
/*1409f205c*/  mov qword ptr [rbp+450h+var_2B0], 0
/*1409f2067*/  call nullsub_1
/*1409f206c*/  mov ecx, 2
/*1409f2071*/  mov edx, 1
/*1409f2076*/  call sub_140001650
/*1409f207b*/  test rax, rax
/*1409f207e*/  jz loc_1409F87DF
/*1409f2084*/  mov word ptr [rax], 6469h
/*1409f2089*/  mov qword ptr [rbp+450h+var_280], 2
/*1409f2094*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f209b*/  mov qword ptr [rbp+450h+var_270], 2
/*1409f20a6*/  mov r15d, 1
/*1409f20ac*/  test r13b, r13b
/*1409f20af*/  mov r13, [rbp+450h+var_148]
/*1409f20b6*/  jnz short loc_1409F20E8
/*1409f20b8*/  call nullsub_1
/*1409f20bd*/  mov edx, 1
/*1409f20c2*/  mov rcx, r13
/*1409f20c5*/  call sub_140001650
/*1409f20ca*/  test rax, rax
/*1409f20cd*/  jz loc_1409F889D
/*1409f20d3*/  mov r15, rax
/*1409f20d6*/  mov rcx, rax
/*1409f20d9*/  mov rdx, [rbp+450h+var_308]
/*1409f20e0*/  mov r8, r13
/*1409f20e3*/  call sub_141684120
/*1409f20e8*/ loc_1409F20E8: mov byte ptr [rbp+450h+var_110], 3
/*1409f20ef*/  mov qword ptr [rbp+450h+var_110+8], r13
/*1409f20f6*/  mov qword ptr [rbp+450h+var_100], r15
/*1409f20fd*/  mov qword ptr [rbp+450h+var_100+8], r13
/*1409f2104*/  mov [rbp+450h+var_229], 0
/*1409f210b*/ loc_1409F210B: lea rcx, [rbp+450h+var_1B0]
/*1409f2112*/  lea rdx, [rbp+450h+var_2C0]
/*1409f2119*/  lea r8, [rbp+450h+var_280]
/*1409f2120*/  lea r9, [rbp+450h+var_110]
/*1409f2127*/  call sub_140307860
/*1409f212c*/  nop
/*1409f212d*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f2134*/  jz short loc_1409F2143
/*1409f2136*/ loc_1409F2136: lea rcx, [rbp+450h+var_1B0]
/*1409f213d*/  call sub_1400104F0
/*1409f2142*/  nop
/*1409f2143*/ loc_1409F2143: call nullsub_1
/*1409f2148*/  mov ecx, 4
/*1409f214d*/  mov edx, 1
/*1409f2152*/  call sub_140001650
/*1409f2157*/  test rax, rax
/*1409f215a*/  jz loc_1409F87F4
/*1409f2160*/  mov dword ptr [rax], 65707974h
/*1409f2166*/  mov qword ptr [rbp+450h+var_280], 4
/*1409f2171*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f2178*/  mov qword ptr [rbp+450h+var_270], 4
/*1409f2183*/  call nullsub_1
/*1409f2188*/  mov ecx, 8
/*1409f218d*/  mov edx, 1
/*1409f2192*/  call sub_140001650
/*1409f2197*/  test rax, rax
/*1409f219a*/  mov [rbp+450h+var_288], rax
/*1409f21a1*/  jz loc_1409F881E
/*1409f21a7*/  mov r10, rax
/*1409f21aa*/  mov rax, 6E6F6974636E7566h
/*1409f21b4*/  mov [r10], rax
/*1409f21b7*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f21be*/  mov qword ptr [rbp+450h+var_110+8], 8
/*1409f21c9*/  mov qword ptr [rbp+450h+var_100], r10
/*1409f21d0*/  mov qword ptr [rbp+450h+var_100+8], 8
/*1409f21db*/ loc_1409F21DB: lea rcx, [rbp+450h+var_1B0]
/*1409f21e2*/  lea rdx, [rbp+450h+var_2C0]
/*1409f21e9*/  lea r8, [rbp+450h+var_280]
/*1409f21f0*/  lea r9, [rbp+450h+var_110]
/*1409f21f7*/  call sub_140307860
/*1409f21fc*/  nop
/*1409f21fd*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f2204*/  jz short loc_1409F2213
/*1409f2206*/ loc_1409F2206: lea rcx, [rbp+450h+var_1B0]
/*1409f220d*/  call sub_1400104F0
/*1409f2212*/  nop
/*1409f2213*/ loc_1409F2213: call nullsub_1
/*1409f2218*/  mov ecx, 8
/*1409f221d*/  mov edx, 1
/*1409f2222*/  call sub_140001650
/*1409f2227*/  test rax, rax
/*1409f222a*/  jz loc_1409F8809
/*1409f2230*/  mov rcx, 6E6F6974636E7566h
/*1409f223a*/  mov [rax], rcx
/*1409f223d*/  mov qword ptr [rbp+450h+var_2E0], 8
/*1409f2248*/  mov qword ptr [rbp+450h+var_2E0+8], rax
/*1409f224f*/  mov qword ptr [rbp+450h+var_2D0], 8
/*1409f225a*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f2265*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f2270*/  call nullsub_1
/*1409f2275*/  mov ecx, 4
/*1409f227a*/  mov edx, 1
/*1409f227f*/  call sub_140001650
/*1409f2284*/  test rax, rax
/*1409f2287*/  jz loc_1409F87CA
/*1409f228d*/  mov dword ptr [rax], 656D616Eh
/*1409f2293*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f229e*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f22a5*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f22b0*/  mov r15d, 1
/*1409f22b6*/  test dil, dil
/*1409f22b9*/  mov rdi, [rbp+450h+var_208]
/*1409f22c0*/  jnz short loc_1409F22F2
/*1409f22c2*/  call nullsub_1
/*1409f22c7*/  mov edx, 1
/*1409f22cc*/  mov rcx, rdi
/*1409f22cf*/  call sub_140001650
/*1409f22d4*/  test rax, rax
/*1409f22d7*/  jz loc_1409F88B7
/*1409f22dd*/  mov r15, rax
/*1409f22e0*/  mov rcx, rax
/*1409f22e3*/  mov rdx, [rbp+450h+var_368]
/*1409f22ea*/  mov r8, rdi
/*1409f22ed*/  call sub_141684120
/*1409f22f2*/ loc_1409F22F2: mov byte ptr [rbp+450h+var_110], 3
/*1409f22f9*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f2300*/  mov qword ptr [rbp+450h+var_100], r15
/*1409f2307*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f230e*/  mov [rbp+450h+var_22A], 0
/*1409f2315*/ loc_1409F2315: lea rcx, [rbp+450h+var_1B0]
/*1409f231c*/  lea rdx, [rbp+450h+var_200]
/*1409f2323*/  lea r8, [rbp+450h+var_140]
/*1409f232a*/  lea r9, [rbp+450h+var_110]
/*1409f2331*/  call sub_140307860
/*1409f2336*/  nop
/*1409f2337*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f233e*/  jz short loc_1409F234D
/*1409f2340*/ loc_1409F2340: lea rcx, [rbp+450h+var_1B0]
/*1409f2347*/  call sub_1400104F0
/*1409f234c*/  nop
/*1409f234d*/ loc_1409F234D: call nullsub_1
/*1409f2352*/  mov ecx, 9
/*1409f2357*/  mov edx, 1
/*1409f235c*/  call sub_140001650
/*1409f2361*/  test rax, rax
/*1409f2364*/  jz loc_1409F87B5
/*1409f236a*/  mov rcx, 746E656D75677261h
/*1409f2374*/  mov [rax], rcx
/*1409f2377*/  mov byte ptr [rax+8], 73h ; 's'
/*1409f237b*/  mov qword ptr [rbp+450h+var_140], 9
/*1409f2386*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f238d*/  mov qword ptr [rbp+450h+var_130], 9
/*1409f2398*/  test rsi, rsi
/*1409f239b*/  js loc_1409F3908
/*1409f23a1*/  jz short loc_1409F23DB
/*1409f23a3*/  call nullsub_1
/*1409f23a8*/  mov r13d, 1
/*1409f23ae*/  mov edx, 1
/*1409f23b3*/  mov rcx, rsi
/*1409f23b6*/  call sub_140001650
/*1409f23bb*/  test rax, rax
/*1409f23be*/  jz loc_1409F390B
/*1409f23c4*/  mov r15, rax
/*1409f23c7*/  mov rcx, rax
/*1409f23ca*/  mov rdx, [rbp+450h+var_2E8]
/*1409f23d1*/  mov r8, rsi
/*1409f23d4*/  call sub_141684120
/*1409f23d9*/  jmp short loc_1409F23E1
/*1409f23db*/ loc_1409F23DB: mov r15d, 1
/*1409f23e1*/ loc_1409F23E1: mov byte ptr [rbp+450h+var_110], 3
/*1409f23e8*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409f23ef*/  mov qword ptr [rbp+450h+var_100], r15
/*1409f23f6*/  mov qword ptr [rbp+450h+var_100+8], rsi
/*1409f23fd*/  mov [rbp+450h+var_22B], 0
/*1409f2404*/ loc_1409F2404: lea rcx, [rbp+450h+var_1B0]
/*1409f240b*/  lea rdx, [rbp+450h+var_200]
/*1409f2412*/  lea r8, [rbp+450h+var_140]
/*1409f2419*/  lea r9, [rbp+450h+var_110]
/*1409f2420*/  call sub_140307860
/*1409f2425*/  nop
/*1409f2426*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f242d*/  jz short loc_1409F243C
/*1409f242f*/ loc_1409F242F: lea rcx, [rbp+450h+var_1B0]
/*1409f2436*/  call sub_1400104F0
/*1409f243b*/  nop
/*1409f243c*/ loc_1409F243C: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f2443*/  lea rcx, [rbp+450h+var_280+8]
/*1409f244a*/  mov [rcx+10h], rax
/*1409f244e*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f2456*/  movdqu xmmword ptr [rcx], xmm0
/*1409f245a*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f2461*/  mov [rbp+450h+var_22C], 0
/*1409f2468*/ loc_1409F2468: lea rcx, [rbp+450h+var_110]
/*1409f246f*/  lea rdx, [rbp+450h+var_2C0]
/*1409f2476*/  lea r8, [rbp+450h+var_2E0]
/*1409f247d*/  lea r9, [rbp+450h+var_280]
/*1409f2484*/  call sub_140307860
/*1409f2489*/  nop
/*1409f248a*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f2491*/  jz short loc_1409F24A0
/*1409f2493*/ loc_1409F2493: lea rcx, [rbp+450h+var_110]
/*1409f249a*/  call sub_1400104F0
/*1409f249f*/  nop
/*1409f24a0*/ loc_1409F24A0: mov rax, qword ptr [rbp+450h+var_2B0]
/*1409f24a7*/  lea rcx, [rbp+450h+var_170+8]
/*1409f24ae*/  mov [rcx+10h], rax
/*1409f24b2*/  movdqu xmm0, [rbp+450h+var_2C0]
/*1409f24ba*/  movdqu xmmword ptr [rcx], xmm0
/*1409f24be*/  mov byte ptr [rbp+450h+var_170], 5
/*1409f24c5*/  mov rdi, [rbp+450h+var_398]
/*1409f24cc*/  mov rax, [rbp+450h+var_A8]
/*1409f24d3*/  mov [rbp+450h+var_288], rax
/*1409f24da*/  mov r15, [rbp+450h+var_B8]
/*1409f24e1*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1409f24e5*/  mov rsi, [rbp+450h+var_218]
/*1409f24ec*/  jnz loc_1409F2597
/*1409f24f2*/  mov [rbp+450h+var_171], 1
/*1409f24f9*/ loc_1409F24F9: mov edx, 11h
/*1409f24fe*/  lea rcx, aReasoningConte; "reasoning_content"
/*1409f2505*/  mov r8, r14
/*1409f2508*/  call sub_141433D50
/*1409f250d*/  nop
/*1409f250e*/ loc_1409F250E: mov r15, 0FFFFFFFFFFFFFFFFh
/*1409f2515*/  test rax, rax
/*1409f2518*/  mov rdi, [rbp+450h+var_360]
/*1409f251f*/  jz short loc_1409F2590
/*1409f2521*/  cmp byte ptr [rax], 3
/*1409f2524*/  jnz short loc_1409F2590
/*1409f2526*/  mov rcx, rsi
/*1409f2529*/  mov rsi, [rax+18h]
/*1409f252d*/  mov [rbp+450h+var_288], rcx
/*1409f2534*/  test rsi, rsi
/*1409f2537*/  jz short loc_1409F2597
/*1409f2539*/  mov r14, [rax+10h]
/*1409f253d*/  mov [rsp+4D0h+var_4B0], 1
/*1409f2546*/  mov r9d, 1
/*1409f254c*/  lea rcx, [rbp+450h+var_110]
/*1409f2553*/  mov rdx, rsi
/*1409f2556*/  xor r8d, r8d
/*1409f2559*/  call sub_140388B60
/*1409f255e*/  mov r15, qword ptr [rbp+450h+var_110+8]
/*1409f2565*/  cmp dword ptr [rbp+450h+var_110], 1
/*1409f256c*/  jz loc_1409F845A
/*1409f2572*/  mov rcx, qword ptr [rbp+450h+var_100]
/*1409f2579*/  mov [rbp+450h+var_288], rcx
/*1409f2580*/  mov rdx, r14
/*1409f2583*/  mov r8, rsi
/*1409f2586*/  call sub_141684120
/*1409f258b*/  mov rdi, rsi
/*1409f258e*/  jmp short loc_1409F2597
/*1409f2590*/ loc_1409F2590: mov [rbp+450h+var_288], rsi
/*1409f2597*/ loc_1409F2597: mov [rbp+450h+var_B8], r15
/*1409f259e*/  mov rax, [rbp+450h+var_290]
/*1409f25a5*/  test rax, rax
/*1409f25a8*/  jz short loc_1409F261F
/*1409f25aa*/  mov rcx, [rbp+450h+var_298]
/*1409f25b1*/  shl rax, 5
/*1409f25b5*/  lea r8, [rcx+rax]
/*1409f25b9*/  add r8, 0FFFFFFFFFFFFFFE0h
/*1409f25bd*/  test r8, r8
/*1409f25c0*/  jz short loc_1409F261F
/*1409f25c2*/  mov [rbp+450h+var_A9], 1
/*1409f25c9*/  mov [rbp+450h+var_AA], 1
/*1409f25d0*/ loc_1409F25D0: mov edx, 4
/*1409f25d5*/  lea rcx, aRole_4; "role"
/*1409f25dc*/  call sub_141433D50
/*1409f25e1*/  nop
/*1409f25e2*/  test rax, rax
/*1409f25e5*/  mov rdx, [rbp+450h+var_B8]
/*1409f25ec*/  jz short loc_1409F261F
/*1409f25ee*/  cmp byte ptr [rax], 3
/*1409f25f1*/  jnz short loc_1409F261F
/*1409f25f3*/  cmp qword ptr [rax+18h], 9
/*1409f25f8*/  jnz short loc_1409F261F
/*1409f25fa*/  mov rax, [rax+10h]
/*1409f25fe*/  mov rcx, [rax]
/*1409f2601*/  mov r8, 6E61747369737361h
/*1409f260b*/  xor rcx, r8
/*1409f260e*/  movzx eax, byte ptr [rax+8]
/*1409f2612*/  xor rax, 74h
/*1409f2616*/  or rax, rcx
/*1409f2619*/  jz loc_1409F2B12
/*1409f261f*/ loc_1409F261F: mov qword ptr [rbp+450h+var_200], 0
/*1409f262a*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f2635*/  call nullsub_1
/*1409f263a*/  mov ecx, 4
/*1409f263f*/  mov edx, 1
/*1409f2644*/  call sub_140001650
/*1409f2649*/  test rax, rax
/*1409f264c*/  jz loc_1409F8910
/*1409f2652*/  mov dword ptr [rax], 656C6F72h
/*1409f2658*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f2663*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f266a*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f2675*/  call nullsub_1
/*1409f267a*/  mov ecx, 9
/*1409f267f*/  mov edx, 1
/*1409f2684*/  call sub_140001650
/*1409f2689*/  test rax, rax
/*1409f268c*/  mov [rbp+450h+var_218], rax
/*1409f2693*/  jz loc_1409F88FB
/*1409f2699*/  mov r10, rax
/*1409f269c*/  mov rax, 6E61747369737361h
/*1409f26a6*/  mov [r10], rax
/*1409f26a9*/  mov byte ptr [r10+8], 74h ; 't'
/*1409f26ae*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f26b5*/  mov qword ptr [rbp+450h+var_110+8], 9
/*1409f26c0*/  mov qword ptr [rbp+450h+var_100], r10
/*1409f26c7*/  mov qword ptr [rbp+450h+var_100+8], 9
/*1409f26d2*/ loc_1409F26D2: lea rcx, [rbp+450h+var_1B0]
/*1409f26d9*/  lea rdx, [rbp+450h+var_200]
/*1409f26e0*/  lea r8, [rbp+450h+var_140]
/*1409f26e7*/  lea r9, [rbp+450h+var_110]
/*1409f26ee*/  call sub_140307860
/*1409f26f3*/  nop
/*1409f26f4*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f26fb*/  jz short loc_1409F270A
/*1409f26fd*/ loc_1409F26FD: lea rcx, [rbp+450h+var_1B0]
/*1409f2704*/  call sub_1400104F0
/*1409f2709*/  nop
/*1409f270a*/ loc_1409F270A: call nullsub_1
/*1409f270f*/  mov ecx, 7
/*1409f2714*/  mov edx, 1
/*1409f2719*/  call sub_140001650
/*1409f271e*/  test rax, rax
/*1409f2721*/  jz loc_1409F88E6
/*1409f2727*/  mov dword ptr [rax+3], 746E6574h
/*1409f272e*/  mov dword ptr [rax], 746E6F63h
/*1409f2734*/  mov qword ptr [rbp+450h+var_140], 7
/*1409f273f*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f2746*/  mov qword ptr [rbp+450h+var_130], 7
/*1409f2751*/  mov [rbp+450h+var_1BC], 1
/*1409f2758*/ loc_1409F2758: lea rcx, [rbp+450h+var_110]
/*1409f275f*/  lea rdx, unk_1417A7B90
/*1409f2766*/  call sub_140B842D0
/*1409f276b*/  nop
/*1409f276c*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f2773*/  jz loc_1409F8007
/*1409f2779*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f2781*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f2789*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f2791*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f2799*/  mov [rbp+450h+var_1BC], 0
/*1409f27a0*/  lea rcx, [rbp+450h+var_110]
/*1409f27a7*/  lea rdx, [rbp+450h+var_200]
/*1409f27ae*/  lea r8, [rbp+450h+var_140]
/*1409f27b5*/  lea r9, [rbp+450h+var_1B0]
/*1409f27bc*/  call sub_140307860
/*1409f27c1*/  nop
/*1409f27c2*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f27c9*/  jz short loc_1409F27D8
/*1409f27cb*/ loc_1409F27CB: lea rcx, [rbp+450h+var_110]
/*1409f27d2*/  call sub_1400104F0
/*1409f27d7*/  nop
/*1409f27d8*/ loc_1409F27D8: call nullsub_1
/*1409f27dd*/  mov ecx, 0Ah
/*1409f27e2*/  mov edx, 1
/*1409f27e7*/  call sub_140001650
/*1409f27ec*/  test rax, rax
/*1409f27ef*/  jz loc_1409F88D1
/*1409f27f5*/  mov rcx, 6C61635F6C6F6F74h
/*1409f27ff*/  mov [rax], rcx
/*1409f2802*/  mov word ptr [rax+8], 736Ch
/*1409f2808*/  mov qword ptr [rbp+450h+var_140], 0Ah
/*1409f2813*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f281a*/  mov qword ptr [rbp+450h+var_130], 0Ah
/*1409f2825*/  call nullsub_1
/*1409f282a*/  mov ecx, 20h ; ' '
/*1409f282f*/  mov edx, 8
/*1409f2834*/  call sub_140001650
/*1409f2839*/  mov [rbp+450h+var_218], rax
/*1409f2840*/  test rax, rax
/*1409f2843*/  jz loc_1409F7FD9
/*1409f2849*/ loc_1409F2849: lea rcx, [rbp+450h+var_110]
/*1409f2850*/  lea rdx, [rbp+450h+var_170]
/*1409f2857*/  call sub_140B842D0
/*1409f285c*/  nop
/*1409f285d*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f2864*/  jz loc_1409F8046
/*1409f286a*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f2872*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f287a*/  mov rax, [rbp+450h+var_218]
/*1409f2881*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f2886*/  movdqu xmmword ptr [rax], xmm0
/*1409f288a*/  mov qword ptr [rbp+450h+var_110+8], 1
/*1409f2895*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f289c*/  mov qword ptr [rbp+450h+var_100+8], 1
/*1409f28a7*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f28ae*/  mov [rbp+450h+var_1DA], 0
/*1409f28b5*/ loc_1409F28B5: lea rcx, [rbp+450h+var_1B0]
/*1409f28bc*/  lea rdx, [rbp+450h+var_200]
/*1409f28c3*/  lea r8, [rbp+450h+var_140]
/*1409f28ca*/  lea r9, [rbp+450h+var_110]
/*1409f28d1*/  call sub_140307860
/*1409f28d6*/  nop
/*1409f28d7*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f28de*/  mov rsi, [rbp+450h+var_B8]
/*1409f28e5*/  jz short loc_1409F28F4
/*1409f28e7*/ loc_1409F28E7: lea rcx, [rbp+450h+var_1B0]
/*1409f28ee*/  call sub_1400104F0
/*1409f28f3*/  nop
/*1409f28f4*/ loc_1409F28F4: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f28fb*/  lea rcx, [rbp+450h+var_280+8]
/*1409f2902*/  mov [rcx+10h], rax
/*1409f2906*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f290e*/  movdqu xmmword ptr [rcx], xmm0
/*1409f2912*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f2919*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1409f291d*/  jz short loc_1409F299E
/*1409f291f*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409f2926*/  mov rax, [rbp+450h+var_288]
/*1409f292d*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f2934*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f293b*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f2942*/  mov [rbp+450h+var_22D], 1
/*1409f2949*/ loc_1409F2949: mov edx, 11h
/*1409f294e*/  lea rcx, aReasoningConte; "reasoning_content"
/*1409f2955*/  lea r8, [rbp+450h+var_280]
/*1409f295c*/  call sub_141433E50
/*1409f2961*/  nop
/*1409f2962*/ loc_1409F2962: mov [rbp+450h+var_218], rax
/*1409f2969*/  mov rcx, rax
/*1409f296c*/  call sub_1400104F0
/*1409f2971*/  nop
/*1409f2972*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f297a*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f2982*/  mov rax, [rbp+450h+var_218]
/*1409f2989*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f298e*/  movdqu xmmword ptr [rax], xmm0
/*1409f2992*/  mov dword ptr [rbp+450h+var_218], 0
/*1409f299c*/  jmp short loc_1409F29A6
/*1409f299e*/ loc_1409F299E: mov al, 1
/*1409f29a0*/  mov dword ptr [rbp+450h+var_218], eax
/*1409f29a6*/ loc_1409F29A6: movdqu xmm0, [rbp+450h+var_280]
/*1409f29ae*/  movdqu xmm1, [rbp+450h+var_270]
/*1409f29b6*/  movdqa [rbp+450h+var_100], xmm1
/*1409f29be*/  movdqa [rbp+450h+var_110], xmm0
/*1409f29c6*/  mov rsi, [rbp+450h+var_290]
/*1409f29cd*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f29d4*/  jnz short loc_1409F29E3
/*1409f29d6*/ loc_1409F29D6: lea rcx, [rbp+450h+var_2A0]
/*1409f29dd*/  call sub_1416890A0
/*1409f29e2*/  nop
/*1409f29e3*/ loc_1409F29E3: mov rax, [rbp+450h+var_298]
/*1409f29ea*/  mov rcx, rsi
/*1409f29ed*/  shl rcx, 5
/*1409f29f1*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f29f9*/  movdqa xmm1, [rbp+450h+var_100]
/*1409f2a01*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f2a07*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f2a0c*/  inc rsi
/*1409f2a0f*/  mov [rbp+450h+var_290], rsi
/*1409f2a16*/  mov rdx, [rbp+450h+var_B8]
/*1409f2a1d*/  lea rax, [rdx-1]
/*1409f2a21*/  cmp rax, 0FFFFFFFFFFFFFFFEh
/*1409f2a25*/  setb al
/*1409f2a28*/  test byte ptr [rbp+450h+var_218], al
/*1409f2a2e*/  mov r15, [rbp+450h+var_288]
/*1409f2a35*/  jz short loc_1409F2A45
/*1409f2a37*/ loc_1409F2A37: mov r8d, 1
/*1409f2a3d*/  mov rcx, r15
/*1409f2a40*/  call sub_140001660
/*1409f2a45*/ loc_1409F2A45: mov [rbp+450h+var_3A0], 0FFFFFFFFFFFFFFFFh
/*1409f2a50*/ loc_1409F2A50: lea rcx, [rbp+450h+var_170]
/*1409f2a57*/  call sub_1400104F0
/*1409f2a5c*/  nop
/*1409f2a5d*/ loc_1409F2A5D: mov rdx, [rbp+450h+var_1B8]
/*1409f2a64*/  test rdx, rdx
/*1409f2a67*/  jz short loc_1409F2A7B
/*1409f2a69*/  mov r8d, 1
/*1409f2a6f*/  mov rcx, [rbp+450h+var_2E8]
/*1409f2a76*/  call sub_140001660
/*1409f2a7b*/ loc_1409F2A7B: mov rdx, [rbp+450h+var_208]
/*1409f2a82*/  test rdx, rdx
/*1409f2a85*/  mov r14, [rbp+450h+var_148]
/*1409f2a8c*/  jz short loc_1409F2AA0
/*1409f2a8e*/  mov r8d, 1
/*1409f2a94*/  mov rcx, [rbp+450h+var_368]
/*1409f2a9b*/  call sub_140001660
/*1409f2aa0*/ loc_1409F2AA0: mov [rbp+450h+var_360], rdi
/*1409f2aa7*/  mov [rbp+450h+var_218], r15
/*1409f2aae*/  mov rsi, [rbp+450h+var_A8]
/*1409f2ab5*/  mov r9, rsi
/*1409f2ab8*/  mov r13, 0FFFFFFFFFFFFFFFFh
/*1409f2abf*/  test r14, r14
/*1409f2ac2*/  jz def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f2ac8*/  mov r8d, 1
/*1409f2ace*/  mov rcx, [rbp+450h+var_308]
/*1409f2ad5*/  mov rdx, r14
/*1409f2ad8*/  call sub_140001660
/*1409f2add*/  mov [rbp+450h+var_360], rdi
/*1409f2ae4*/  mov [rbp+450h+var_218], r15
/*1409f2aeb*/  mov r9, rsi
/*1409f2aee*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f2af3*/ loc_1409F2AF3: mov eax, 1
/*1409f2af8*/  mov [rbp+450h+var_340], rax
/*1409f2aff*/  mov dil, 1
/*1409f2b02*/  mov [rbp+450h+var_148], 0
/*1409f2b0d*/  jmp loc_1409F0562
/*1409f2b12*/ loc_1409F2B12: mov rax, [rbp+450h+var_290]
/*1409f2b19*/  test rax, rax
/*1409f2b1c*/  jz loc_1409F320C
/*1409f2b22*/  mov rcx, [rbp+450h+var_298]
/*1409f2b29*/  shl rax, 5
/*1409f2b2d*/  lea rsi, [rcx+rax]
/*1409f2b31*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*1409f2b35*/  mov [rbp+450h+var_A9], 1
/*1409f2b3c*/  mov [rbp+450h+var_AA], 1
/*1409f2b43*/ loc_1409F2B43: mov edx, 0Ah
/*1409f2b48*/  lea rcx, aToolCalls; "tool_calls"
/*1409f2b4f*/  mov r8, rsi
/*1409f2b52*/  call sub_141433D50
/*1409f2b57*/  nop
/*1409f2b58*/  test rax, rax
/*1409f2b5b*/  jz loc_1409F30B8
/*1409f2b61*/  cmp byte ptr [rax], 4
/*1409f2b64*/  jnz loc_1409F30B8
/*1409f2b6a*/  movdqu xmm0, [rbp+450h+var_170]
/*1409f2b72*/  movdqu xmm1, [rbp+450h+var_160]
/*1409f2b7a*/  movdqa [rbp+450h+var_100], xmm1
/*1409f2b82*/  movdqa [rbp+450h+var_110], xmm0
/*1409f2b8a*/  mov r14, [rax+18h]
/*1409f2b8e*/  cmp r14, [rax+8]
/*1409f2b92*/  jnz short loc_1409F2BA6
/*1409f2b94*/ loc_1409F2B94: mov rcx, rax
/*1409f2b97*/  add rcx, 8
/*1409f2b9b*/  mov r15, rax
/*1409f2b9e*/  call sub_1416890A0
/*1409f2ba3*/  mov rax, r15
/*1409f2ba6*/ loc_1409F2BA6: mov rcx, [rax+10h]
/*1409f2baa*/  mov rdx, r14
/*1409f2bad*/  shl rdx, 5
/*1409f2bb1*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f2bb9*/  movdqa xmm1, [rbp+450h+var_100]
/*1409f2bc1*/  movdqu xmmword ptr [rcx+rdx+10h], xmm1
/*1409f2bc7*/  movdqu xmmword ptr [rcx+rdx], xmm0
/*1409f2bcc*/  inc r14
/*1409f2bcf*/  mov [rax+18h], r14
/*1409f2bd3*/  xor r14d, r14d
/*1409f2bd6*/  jmp loc_1409F3190
/*1409f2bdb*/ loc_1409F2BDB: mov rdx, [rax+10h]; jumptable 00000001409F1445 case 4  // jumptable 00000001409F1445 case 4
/*1409f2bdf*/  mov r8, [rax+18h]
/*1409f2be3*/ loc_1409F2BE3: lea rcx, [rbp+450h+var_110+8]
/*1409f2bea*/  call sub_1402CE260
/*1409f2bef*/  nop
/*1409f2bf0*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f2bf7*/  jmp short loc_1409F2C3A
/*1409f2bf9*/ loc_1409F2BF9: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F1445 case 0  // jumptable 00000001409F1445 case 0
/*1409f2c00*/  jmp short loc_1409F2C3A
/*1409f2c02*/ loc_1409F2C02: add rax, 8; jumptable 00000001409F1445 case 3  // jumptable 00000001409F1445 case 3
/*1409f2c06*/  lea rcx, [rbp+450h+var_110+8]
/*1409f2c0d*/  mov rdx, rax
/*1409f2c10*/  call sub_14149C500
/*1409f2c15*/  nop
/*1409f2c16*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f2c1d*/  jmp short loc_1409F2C3A
/*1409f2c1f*/ loc_1409F2C1F: add rax, 8; jumptable 00000001409F1445 case 5  // jumptable 00000001409F1445 case 5
/*1409f2c23*/  lea rcx, [rbp+450h+var_110+8]
/*1409f2c2a*/  mov rdx, rax
/*1409f2c2d*/  call sub_140323EA0
/*1409f2c32*/  nop
/*1409f2c33*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f2c3a*/ loc_1409F2C3A: movzx eax, byte ptr [rbp+450h+var_110]
/*1409f2c41*/  mov rcx, qword ptr [rbp+450h+var_110+1]
/*1409f2c48*/  mov edx, dword ptr [rbp+450h+var_110+9]
/*1409f2c4e*/  movzx r8d, word ptr [rbp+450h+var_110+0Dh]
/*1409f2c56*/  movzx r9d, byte ptr [rbp+450h+var_110+0Fh]
/*1409f2c5e*/  movdqa xmm0, [rbp+450h+var_100]
/*1409f2c66*/  movdqa [rbp+450h+var_130], xmm0
/*1409f2c6e*/  mov byte ptr [rbp+450h+var_140], al
/*1409f2c74*/  mov qword ptr [rbp+450h+var_140+1], rcx
/*1409f2c7b*/  mov dword ptr [rbp+450h+var_140+9], edx
/*1409f2c81*/  mov word ptr [rbp+450h+var_140+0Dh], r8w
/*1409f2c89*/  mov byte ptr [rbp+450h+var_140+0Fh], r9b
/*1409f2c90*/  mov byte ptr [rbp+450h+var_110], 0
/*1409f2c97*/  lea rcx, [rbp+450h+var_110]
/*1409f2c9e*/  call sub_1400104F0
/*1409f2ca3*/  nop
/*1409f2ca4*/ loc_1409F2CA4: mov rcx, qword ptr [rbp+450h+var_2C0+8]
/*1409f2cab*/  mov rax, qword ptr [rbp+450h+var_2B0]
/*1409f2cb2*/  mov [rbp+450h+var_208], rax
/*1409f2cb9*/  mov [rbp+450h+var_2E8], rcx
/*1409f2cc0*/  mov [rbp+450h+var_148], 0
/*1409f2ccb*/  nop dword ptr [rax+rax+00h]
/*1409f2cd0*/ loc_1409F2CD0: mov rax, [rbp+450h+var_148]
/*1409f2cd7*/  cmp [rbp+450h+var_208], rax
/*1409f2cde*/  jz short loc_1409F2CF9
/*1409f2ce0*/  inc rax
/*1409f2ce3*/  mov [rbp+450h+var_148], rax
/*1409f2cea*/  lea rsi, [rcx+20h]
/*1409f2cee*/ loc_1409F2CEE: call sub_1402C3260
/*1409f2cf3*/  nop
/*1409f2cf4*/ loc_1409F2CF4: mov rcx, rsi
/*1409f2cf7*/  jmp short loc_1409F2CD0
/*1409f2cf9*/ loc_1409F2CF9: mov rdx, qword ptr [rbp+450h+var_2C0]
/*1409f2d00*/  test rdx, rdx
/*1409f2d03*/  jz short loc_1409F2D1B
/*1409f2d05*/  mov rcx, qword ptr [rbp+450h+var_2C0+8]
/*1409f2d0c*/  shl rdx, 5
/*1409f2d10*/  mov r8d, 8
/*1409f2d16*/  call sub_140001660
/*1409f2d1b*/ loc_1409F2D1B: cmp byte ptr [rbp+450h+var_140], 0
/*1409f2d22*/  jz loc_1409EFC9C
/*1409f2d28*/ loc_1409F2D28: mov qword ptr [rbp+450h+var_200], 0
/*1409f2d33*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f2d3e*/  call nullsub_1
/*1409f2d43*/  mov ecx, 4
/*1409f2d48*/  mov edx, 1
/*1409f2d4d*/  call sub_140001650
/*1409f2d52*/  test rax, rax
/*1409f2d55*/  jz loc_1409F8888
/*1409f2d5b*/  mov dword ptr [rax], 656C6F72h
/*1409f2d61*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f2d6c*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f2d73*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f2d7e*/  test r15, r15
/*1409f2d81*/  js loc_1409F3EEA
/*1409f2d87*/  jz short loc_1409F2DBD
/*1409f2d89*/  call nullsub_1
/*1409f2d8e*/  mov r14d, 1
/*1409f2d94*/  mov edx, 1
/*1409f2d99*/  mov rcx, r15
/*1409f2d9c*/  call sub_140001650
/*1409f2da1*/  test rax, rax
/*1409f2da4*/  jz loc_1409F3EED
/*1409f2daa*/  mov rsi, rax
/*1409f2dad*/  mov rcx, rax
/*1409f2db0*/  mov rdx, r13
/*1409f2db3*/  mov r8, r15
/*1409f2db6*/  call sub_141684120
/*1409f2dbb*/  jmp short loc_1409F2DC2
/*1409f2dbd*/ loc_1409F2DBD: mov esi, 1
/*1409f2dc2*/ loc_1409F2DC2: mov byte ptr [rbp+450h+var_110], 3
/*1409f2dc9*/  mov qword ptr [rbp+450h+var_110+8], r15
/*1409f2dd0*/  mov qword ptr [rbp+450h+var_100], rsi
/*1409f2dd7*/  mov qword ptr [rbp+450h+var_100+8], r15
/*1409f2dde*/  mov [rbp+450h+var_231], 0
/*1409f2de5*/ loc_1409F2DE5: lea rcx, [rbp+450h+var_1B0]
/*1409f2dec*/  lea rdx, [rbp+450h+var_200]
/*1409f2df3*/  lea r8, [rbp+450h+var_170]
/*1409f2dfa*/  lea r9, [rbp+450h+var_110]
/*1409f2e01*/  call sub_140307860
/*1409f2e06*/  nop
/*1409f2e07*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f2e0e*/  jz short loc_1409F2E1D
/*1409f2e10*/ loc_1409F2E10: lea rcx, [rbp+450h+var_1B0]
/*1409f2e17*/  call sub_1400104F0
/*1409f2e1c*/  nop
/*1409f2e1d*/ loc_1409F2E1D: call nullsub_1
/*1409f2e22*/  mov ecx, 7
/*1409f2e27*/  mov edx, 1
/*1409f2e2c*/  call sub_140001650
/*1409f2e31*/  test rax, rax
/*1409f2e34*/  jz loc_1409F89F3
/*1409f2e3a*/  mov dword ptr [rax+3], 746E6574h
/*1409f2e41*/  mov dword ptr [rax], 746E6F63h
/*1409f2e47*/  mov qword ptr [rbp+450h+var_170], 7
/*1409f2e52*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f2e59*/  mov qword ptr [rbp+450h+var_160], 7
/*1409f2e64*/  mov [rbp+450h+var_1C7], 1
/*1409f2e6b*/ loc_1409F2E6B: lea rcx, [rbp+450h+var_110]
/*1409f2e72*/  lea rdx, [rbp+450h+var_140]
/*1409f2e79*/  call sub_140B842D0
/*1409f2e7e*/  nop
/*1409f2e7f*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f2e86*/  jz loc_1409F80F2
/*1409f2e8c*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f2e94*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f2e9c*/  movdqa [rbp+450h+var_1A0], xmm1
/*1409f2ea4*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f2eac*/  mov [rbp+450h+var_1C7], 0
/*1409f2eb3*/  lea rcx, [rbp+450h+var_110]
/*1409f2eba*/  lea rdx, [rbp+450h+var_200]
/*1409f2ec1*/  lea r8, [rbp+450h+var_170]
/*1409f2ec8*/  lea r9, [rbp+450h+var_1B0]
/*1409f2ecf*/  call sub_140307860
/*1409f2ed4*/  nop
/*1409f2ed5*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f2edc*/  jz short loc_1409F2EEB
/*1409f2ede*/ loc_1409F2EDE: lea rcx, [rbp+450h+var_110]
/*1409f2ee5*/  call sub_1400104F0
/*1409f2eea*/  nop
/*1409f2eeb*/ loc_1409F2EEB: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f2ef2*/  lea rcx, [rbp+450h+var_280+8]
/*1409f2ef9*/  mov [rcx+10h], rax
/*1409f2efd*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f2f05*/  movdqu xmmword ptr [rcx], xmm0
/*1409f2f09*/  mov byte ptr [rbp+450h+var_280], 5
/*1409f2f10*/  cmp byte ptr [rbp+450h+var_1B8], 0
/*1409f2f17*/  jz loc_1409F2FEB
/*1409f2f1d*/  mov rax, [r13+0]
/*1409f2f21*/  mov rcx, 6E61747369737361h
/*1409f2f2b*/  xor rax, rcx
/*1409f2f2e*/  movzx ecx, byte ptr [r13+8]
/*1409f2f33*/  xor rcx, 74h
/*1409f2f37*/  or rcx, rax
/*1409f2f3a*/  mov rcx, [rbp+450h+var_B8]
/*1409f2f41*/  mov rdx, [rbp+450h+var_398]
/*1409f2f48*/  jz short loc_1409F2F56
/*1409f2f4a*/  mov [rbp+450h+var_B8], rcx
/*1409f2f51*/  jmp loc_1409F2FEB
/*1409f2f56*/ loc_1409F2F56: cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1409f2f5a*/  jz loc_1409F2FE0
/*1409f2f60*/  mov rax, [rbp+450h+var_A8]
/*1409f2f67*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f2f6e*/  mov qword ptr [rbp+450h+var_100+8], rdx
/*1409f2f75*/  mov qword ptr [rbp+450h+var_110+8], rcx
/*1409f2f7c*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f2f83*/  mov [rbp+450h+var_232], 1
/*1409f2f8a*/ loc_1409F2F8A: mov edx, 11h
/*1409f2f8f*/  lea rcx, aReasoningConte; "reasoning_content"
/*1409f2f96*/  lea r8, [rbp+450h+var_280]
/*1409f2f9d*/  call sub_141433E50
/*1409f2fa2*/  nop
/*1409f2fa3*/ loc_1409F2FA3: mov [rbp+450h+var_148], rax
/*1409f2faa*/  mov rcx, rax
/*1409f2fad*/  call sub_1400104F0
/*1409f2fb2*/  nop
/*1409f2fb3*/  mov [rbp+450h+var_B8], 0FFFFFFFFFFFFFFFFh
/*1409f2fbe*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f2fc6*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f2fce*/  mov rax, [rbp+450h+var_148]
/*1409f2fd5*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f2fda*/  movdqu xmmword ptr [rax], xmm0
/*1409f2fde*/  jmp short loc_1409F2FEB
/*1409f2fe0*/ loc_1409F2FE0: mov [rbp+450h+var_B8], 0FFFFFFFFFFFFFFFFh
/*1409f2feb*/ loc_1409F2FEB: movzx eax, byte ptr [rbp+450h+var_280]
/*1409f2ff2*/  mov rcx, qword ptr [rbp+450h+var_280+1]
/*1409f2ff9*/  mov edx, dword ptr [rbp+450h+var_280+9]
/*1409f2fff*/  movzx r8d, word ptr [rbp+450h+var_280+0Dh]
/*1409f3007*/  movzx r9d, byte ptr [rbp+450h+var_280+0Fh]
/*1409f300f*/  movdqu xmm0, [rbp+450h+var_270]
/*1409f3017*/  movdqa [rbp+450h+var_100], xmm0
/*1409f301f*/  mov byte ptr [rbp+450h+var_110], al
/*1409f3025*/  mov qword ptr [rbp+450h+var_110+1], rcx
/*1409f302c*/  mov dword ptr [rbp+450h+var_110+9], edx
/*1409f3032*/  mov word ptr [rbp+450h+var_110+0Dh], r8w
/*1409f303a*/  mov byte ptr [rbp+450h+var_110+0Fh], r9b
/*1409f3041*/  mov rsi, [rbp+450h+var_290]
/*1409f3048*/  cmp rsi, [rbp+450h+var_2A0]
/*1409f304f*/  jnz short loc_1409F305E
/*1409f3051*/ loc_1409F3051: lea rcx, [rbp+450h+var_2A0]
/*1409f3058*/  call sub_1416890A0
/*1409f305d*/  nop
/*1409f305e*/ loc_1409F305E: mov rax, [rbp+450h+var_298]
/*1409f3065*/  mov rcx, rsi
/*1409f3068*/  shl rcx, 5
/*1409f306c*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f3074*/  movdqa xmm1, [rbp+450h+var_100]
/*1409f307c*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f3082*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f3087*/  inc rsi
/*1409f308a*/  mov [rbp+450h+var_290], rsi
/*1409f3091*/  mov r13, [rbp+450h+var_B8]
/*1409f3098*/  mov [rbp+450h+var_210], r13
/*1409f309f*/ loc_1409F309F: lea rcx, [rbp+450h+var_140]
/*1409f30a6*/  call sub_1400104F0
/*1409f30ab*/  nop
/*1409f30ac*/  mov r9, [rbp+450h+var_A8]
/*1409f30b3*/  jmp def_1409EF809; jumptable 00000001409EF809 default case, cases 8,10-12,14,15,17-19,21,22
/*1409f30b8*/ loc_1409F30B8: call nullsub_1
/*1409f30bd*/  mov ecx, 20h ; ' '
/*1409f30c2*/  mov edx, 8
/*1409f30c7*/  call sub_140001650
/*1409f30cc*/  mov [rbp+450h+var_218], rax
/*1409f30d3*/  test rax, rax
/*1409f30d6*/  jz loc_1409F85BB
/*1409f30dc*/ loc_1409F30DC: lea rcx, [rbp+450h+var_110]
/*1409f30e3*/  lea rdx, [rbp+450h+var_170]
/*1409f30ea*/  call sub_140B842D0
/*1409f30ef*/  nop
/*1409f30f0*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f30f7*/  jz loc_1409F85F3
/*1409f30fd*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f3105*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f310d*/  mov rax, [rbp+450h+var_218]
/*1409f3114*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f3119*/  movdqu xmmword ptr [rax], xmm0
/*1409f311d*/  mov qword ptr [rbp+450h+var_110+8], 1
/*1409f3128*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f312f*/  mov qword ptr [rbp+450h+var_100+8], 1
/*1409f313a*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3141*/  mov [rbp+450h+var_22E], 1
/*1409f3148*/ loc_1409F3148: mov edx, 0Ah
/*1409f314d*/  lea rcx, aToolCalls; "tool_calls"
/*1409f3154*/  mov r8, rsi
/*1409f3157*/  call sub_141433E50
/*1409f315c*/  nop
/*1409f315d*/ loc_1409F315D: mov [rbp+450h+var_218], rax
/*1409f3164*/  mov rcx, rax
/*1409f3167*/  call sub_1400104F0
/*1409f316c*/  nop
/*1409f316d*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f3175*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f317d*/  mov rax, [rbp+450h+var_218]
/*1409f3184*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f3189*/  movdqu xmmword ptr [rax], xmm0
/*1409f318d*/  mov r14b, 1
/*1409f3190*/ loc_1409F3190: cmp [rbp+450h+var_B8], 0FFFFFFFFFFFFFFFFh
/*1409f3198*/  jz loc_1409F3371
/*1409f319e*/  mov dword ptr [rbp+450h+var_218], r14d
/*1409f31a5*/  mov [rbp+450h+var_1DB], 1
/*1409f31ac*/ loc_1409F31AC: mov edx, 11h
/*1409f31b1*/  lea rcx, aReasoningConte; "reasoning_content"
/*1409f31b8*/  mov r8, rsi
/*1409f31bb*/  call sub_141433D50
/*1409f31c0*/  nop
/*1409f31c1*/  test rax, rax
/*1409f31c4*/  jz loc_1409F32F4
/*1409f31ca*/  cmp byte ptr [rax], 3
/*1409f31cd*/  jnz loc_1409F32F4
/*1409f31d3*/  cmp qword ptr [rax+18h], 0
/*1409f31d8*/  jz loc_1409F32F4
/*1409f31de*/  mov rdx, [rbp+450h+var_B8]
/*1409f31e5*/  test rdx, rdx
/*1409f31e8*/  mov r14d, dword ptr [rbp+450h+var_218]
/*1409f31ef*/  jz loc_1409F3371
/*1409f31f5*/  mov r8d, 1
/*1409f31fb*/  mov rcx, [rbp+450h+var_288]
/*1409f3202*/  call sub_140001660
/*1409f3207*/  jmp loc_1409F3371
/*1409f320c*/ loc_1409F320C: lea rax, [rdx-1]
/*1409f3210*/  cmp rax, 0FFFFFFFFFFFFFFFEh
/*1409f3214*/  mov r15, [rbp+450h+var_288]
/*1409f321b*/  jb loc_1409F2A37
/*1409f3221*/  jmp loc_1409F2A45
/*1409f3226*/ loc_1409F3226: mov rax, [rbp+450h+var_290]
/*1409f322d*/  test rax, rax
/*1409f3230*/  jz loc_1409F1F1D
/*1409f3236*/  mov rcx, [rbp+450h+var_298]
/*1409f323d*/  shl rax, 5
/*1409f3241*/  lea rsi, [rcx+rax]
/*1409f3245*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*1409f3249*/  mov [rbp+450h+var_AD], 1
/*1409f3250*/ loc_1409F3250: mov edx, 0Ah
/*1409f3255*/  lea rcx, aToolCalls; "tool_calls"
/*1409f325c*/  mov r8, rsi
/*1409f325f*/  call sub_141433D50
/*1409f3264*/  nop
/*1409f3265*/  mov r14, rax
/*1409f3268*/  test rax, rax
/*1409f326b*/  jz loc_1409F3386
/*1409f3271*/  cmp byte ptr [r14], 4
/*1409f3275*/  jnz loc_1409F3386
/*1409f327b*/  movdqu xmm0, [rbp+450h+var_170]
/*1409f3283*/  movdqu xmm1, [rbp+450h+var_160]
/*1409f328b*/  movdqa [rbp+450h+var_100], xmm1
/*1409f3293*/  movdqa [rbp+450h+var_110], xmm0
/*1409f329b*/  mov rsi, [r14+18h]
/*1409f329f*/  cmp rsi, [r14+8]
/*1409f32a3*/  jnz short loc_1409F32B2
/*1409f32a5*/ loc_1409F32A5: mov rcx, r14
/*1409f32a8*/  add rcx, 8
/*1409f32ac*/  call sub_1416890A0
/*1409f32b1*/  nop
/*1409f32b2*/ loc_1409F32B2: mov rax, [r14+10h]
/*1409f32b6*/  mov rcx, rsi
/*1409f32b9*/  shl rcx, 5
/*1409f32bd*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f32c5*/  movdqa xmm1, [rbp+450h+var_100]
/*1409f32cd*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*1409f32d3*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f32d8*/  inc rsi
/*1409f32db*/  mov [r14+18h], rsi
/*1409f32df*/  mov rdx, [rbp+450h+var_2E8]
/*1409f32e6*/  test rdx, rdx
/*1409f32e9*/  jnz loc_1409F1F36
/*1409f32ef*/  jmp loc_1409F1F48
/*1409f32f4*/ loc_1409F32F4: mov rax, [rbp+450h+var_B8]
/*1409f32fb*/  mov qword ptr [rbp+450h+var_110+8], rax
/*1409f3302*/  mov rax, [rbp+450h+var_288]
/*1409f3309*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f3310*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f3317*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f331e*/  mov [rbp+450h+var_22F], 1
/*1409f3325*/ loc_1409F3325: mov edx, 11h
/*1409f332a*/  lea rcx, aReasoningConte; "reasoning_content"
/*1409f3331*/  mov r8, rsi
/*1409f3334*/  call sub_141433E50
/*1409f3339*/  nop
/*1409f333a*/ loc_1409F333A: mov [rbp+450h+var_360], rax
/*1409f3341*/  mov rcx, rax
/*1409f3344*/  call sub_1400104F0
/*1409f3349*/  nop
/*1409f334a*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f3352*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f335a*/  mov rax, [rbp+450h+var_360]
/*1409f3361*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f3366*/  movdqu xmmword ptr [rax], xmm0
/*1409f336a*/  mov r14d, dword ptr [rbp+450h+var_218]
/*1409f3371*/ loc_1409F3371: test r14b, r14b
/*1409f3374*/  mov r15, [rbp+450h+var_288]
/*1409f337b*/  jnz loc_1409F2A45
/*1409f3381*/  jmp loc_1409F2A5D
/*1409f3386*/ loc_1409F3386: call nullsub_1
/*1409f338b*/  mov ecx, 20h ; ' '
/*1409f3390*/  mov edx, 8
/*1409f3395*/  call sub_140001650
/*1409f339a*/  mov [rbp+450h+var_1B8], rax
/*1409f33a1*/  test rax, rax
/*1409f33a4*/  jz loc_1409F8647
/*1409f33aa*/ loc_1409F33AA: lea rcx, [rbp+450h+var_110]
/*1409f33b1*/  lea rdx, [rbp+450h+var_170]
/*1409f33b8*/  call sub_140B842D0
/*1409f33bd*/  nop
/*1409f33be*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f33c5*/  jz loc_1409F8762
/*1409f33cb*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f33d3*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f33db*/  mov rax, [rbp+450h+var_1B8]
/*1409f33e2*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f33e7*/  movdqu xmmword ptr [rax], xmm0
/*1409f33eb*/  mov qword ptr [rbp+450h+var_110+8], 1
/*1409f33f6*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f33fd*/  mov qword ptr [rbp+450h+var_100+8], 1
/*1409f3408*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f340f*/  mov [rbp+450h+var_227], 1
/*1409f3416*/ loc_1409F3416: mov edx, 0Ah
/*1409f341b*/  lea rcx, aToolCalls; "tool_calls"
/*1409f3422*/  mov r8, rsi
/*1409f3425*/  call sub_141433E50
/*1409f342a*/  nop
/*1409f342b*/ loc_1409F342B: mov [rbp+450h+var_1B8], rax
/*1409f3432*/  mov rcx, rax
/*1409f3435*/  call sub_1400104F0
/*1409f343a*/  nop
/*1409f343b*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f3443*/  movdqu xmm1, [rbp+450h+var_100]
/*1409f344b*/  mov rax, [rbp+450h+var_1B8]
/*1409f3452*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409f3457*/  movdqu xmmword ptr [rax], xmm0
/*1409f345b*/  jmp loc_1409F1F1D
/*1409f3460*/ loc_1409F3460: mov eax, 1
/*1409f3465*/  mov [rbp+450h+var_2F8], rax
/*1409f346c*/  mov dil, 1
/*1409f346f*/  mov [rbp+450h+var_148], 0
/*1409f347a*/  jmp loc_1409EFD21
/*1409f347f*/ loc_1409F347F: mov eax, 1
/*1409f3484*/  mov [rbp+450h+var_308], rax
/*1409f348b*/  mov r13b, 1
/*1409f348e*/  mov [rbp+450h+var_148], 0
/*1409f3499*/  jmp loc_1409F00D9
/*1409f349e*/ loc_1409F349E: mov eax, 1
/*1409f34a3*/  mov [rbp+450h+var_300], rax
/*1409f34aa*/  mov dil, 1
/*1409f34ad*/  mov [rbp+450h+var_148], 0
/*1409f34b8*/  jmp loc_1409F0179
/*1409f34bd*/ loc_1409F34BD: mov eax, 1
/*1409f34c2*/  mov [rbp+450h+var_368], rax
/*1409f34c9*/  mov dil, 1
/*1409f34cc*/  mov [rbp+450h+var_208], 0
/*1409f34d7*/  jmp loc_1409F05F8
/*1409f34dc*/ loc_1409F34DC: mov eax, 1
/*1409f34e1*/  mov [rbp+450h+var_338], rax
/*1409f34e8*/  mov r15b, 1
/*1409f34eb*/  mov [rbp+450h+var_208], 0
/*1409f34f6*/  jmp loc_1409F0EFB
/*1409f34fb*/ loc_1409F34FB: lea rax, [rsi-1]
/*1409f34ff*/  cmp rax, 0FFFFFFFFFFFFFFFDh
/*1409f3503*/  ja short loc_1409F3514
/*1409f3505*/  mov r8d, 1
/*1409f350b*/  mov rdx, rsi
/*1409f350e*/  call sub_140001660
/*1409f3513*/  nop
/*1409f3514*/ loc_1409F3514: lea rcx, aModel_6; "model"
/*1409f351b*/  mov edx, 5
/*1409f3520*/  mov r8, [rbp+450h+var_1D8]
/*1409f3527*/  call sub_141433D50
/*1409f352c*/  nop
/*1409f352d*/  test rax, rax
/*1409f3530*/  jz short loc_1409F354D
/*1409f3532*/  cmp byte ptr [rax], 3
/*1409f3535*/  jnz short loc_1409F354D
/*1409f3537*/  mov rcx, [rax+18h]
/*1409f353b*/  mov [rbp+450h+var_2F0], rcx
/*1409f3542*/  mov rax, [rax+10h]
/*1409f3546*/  mov [rbp+450h+var_220], rax
/*1409f354d*/ loc_1409F354D: cmp [rbp+450h+var_2F0], 0
/*1409f3555*/  jns short loc_1409F3571
/*1409f3557*/  xor esi, esi
/*1409f3559*/  mov rdi, [rbp+450h+var_2F0]
/*1409f3560*/ loc_1409F3560: mov rcx, rsi
/*1409f3563*/  mov rdx, rdi
/*1409f3566*/  call sub_1416C2D4B
/*1409f356c*/ loc_1409F356C: jmp loc_1409F8D2B
/*1409f3571*/ loc_1409F3571: jz short loc_1409F35B1
/*1409f3573*/  call nullsub_1
/*1409f3578*/  mov esi, 1
/*1409f357d*/  mov edx, 1
/*1409f3582*/  mov rdi, [rbp+450h+var_2F0]
/*1409f3589*/  mov rcx, rdi
/*1409f358c*/  call sub_140001650
/*1409f3591*/  test rax, rax
/*1409f3594*/  jz short loc_1409F3560
/*1409f3596*/  mov [rbp+450h+var_148], rax
/*1409f359d*/  mov rcx, rax
/*1409f35a0*/  mov rdx, [rbp+450h+var_220]
/*1409f35a7*/  mov r8, rdi
/*1409f35aa*/  call sub_141684120
/*1409f35af*/  jmp short loc_1409F35BD
/*1409f35b1*/ loc_1409F35B1: mov eax, 1
/*1409f35b6*/  mov [rbp+450h+var_148], rax
/*1409f35bd*/ loc_1409F35BD: mov qword ptr [rbp+450h+var_170], 0
/*1409f35c8*/  mov qword ptr [rbp+450h+var_160], 0
/*1409f35d3*/  call nullsub_1
/*1409f35d8*/  mov esi, 1
/*1409f35dd*/  mov ecx, 5
/*1409f35e2*/  mov edx, 1
/*1409f35e7*/  call sub_140001650
/*1409f35ec*/  test rax, rax
/*1409f35ef*/  jz loc_1409F8488
/*1409f35f5*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*1409f35f9*/  mov dword ptr [rax], 65646F6Dh
/*1409f35ff*/  mov qword ptr [rbp+450h+var_280], 5
/*1409f360a*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f3611*/  mov qword ptr [rbp+450h+var_270], 5
/*1409f361c*/  mov rdi, [rbp+450h+var_2F0]
/*1409f3623*/  test rdi, rdi
/*1409f3626*/  jz short loc_1409F3658
/*1409f3628*/  call nullsub_1
/*1409f362d*/  mov edx, 1
/*1409f3632*/  mov rcx, rdi
/*1409f3635*/  call sub_140001650
/*1409f363a*/  test rax, rax
/*1409f363d*/  jz loc_1409F854F
/*1409f3643*/  mov rsi, rax
/*1409f3646*/  mov rcx, rax
/*1409f3649*/  mov rdx, [rbp+450h+var_148]
/*1409f3650*/  mov r8, rdi
/*1409f3653*/  call sub_141684120
/*1409f3658*/ loc_1409F3658: mov byte ptr [rbp+450h+var_110], 3
/*1409f365f*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f3666*/  mov qword ptr [rbp+450h+var_100], rsi
/*1409f366d*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f3674*/  mov [rbp+450h+var_233], 0
/*1409f367b*/ loc_1409F367B: lea rcx, [rbp+450h+var_1B0]
/*1409f3682*/  lea rdx, [rbp+450h+var_170]
/*1409f3689*/  lea r8, [rbp+450h+var_280]
/*1409f3690*/  lea r9, [rbp+450h+var_110]
/*1409f3697*/  call sub_140307860
/*1409f369c*/  nop
/*1409f369d*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f36a4*/  jz short loc_1409F36B3
/*1409f36a6*/ loc_1409F36A6: lea rcx, [rbp+450h+var_1B0]
/*1409f36ad*/  call sub_1400104F0
/*1409f36b2*/  nop
/*1409f36b3*/ loc_1409F36B3: call nullsub_1
/*1409f36b8*/  mov ecx, 8
/*1409f36bd*/  mov edx, 1
/*1409f36c2*/  call sub_140001650
/*1409f36c7*/  test rax, rax
/*1409f36ca*/  jz loc_1409F849D
/*1409f36d0*/  mov rcx, 736567617373656Dh
/*1409f36da*/  mov [rax], rcx
/*1409f36dd*/  mov qword ptr [rbp+450h+var_280], 8
/*1409f36e8*/  mov qword ptr [rbp+450h+var_280+8], rax
/*1409f36ef*/  mov qword ptr [rbp+450h+var_270], 8
/*1409f36fa*/  mov [rbp+450h+var_1C9], 1
/*1409f3701*/ loc_1409F3701: lea rcx, [rbp+450h+var_110]
/*1409f3708*/  lea rdx, [rbp+450h+var_2A0]
/*1409f370f*/  call sub_140467C90
/*1409f3714*/  nop
/*1409f3715*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f371c*/  jz loc_1409F7DE9
/*1409f3722*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f372a*/  movups xmm1, [rbp+450h+var_100]
/*1409f3731*/  movaps [rbp+450h+var_1A0], xmm1
/*1409f3738*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f3740*/  mov [rbp+450h+var_1C9], 0
/*1409f3747*/  lea rcx, [rbp+450h+var_110]
/*1409f374e*/  lea rdx, [rbp+450h+var_170]
/*1409f3755*/  lea r8, [rbp+450h+var_280]
/*1409f375c*/  lea r9, [rbp+450h+var_1B0]
/*1409f3763*/  call sub_140307860
/*1409f3768*/  nop
/*1409f3769*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f3770*/  jz short loc_1409F377F
/*1409f3772*/ loc_1409F3772: lea rcx, [rbp+450h+var_110]
/*1409f3779*/  call sub_1400104F0
/*1409f377e*/  nop
/*1409f377f*/ loc_1409F377F: movdqu xmm0, [rbp+450h+var_170]
/*1409f3787*/  movdqu [rbp+450h+var_2C0+8], xmm0
/*1409f378f*/  mov rax, qword ptr [rbp+450h+var_160]
/*1409f3796*/  mov qword ptr [rbp+450h+var_2B0+8], rax
/*1409f379d*/  mov byte ptr [rbp+450h+var_2C0], 5
/*1409f37a4*/ loc_1409F37A4: lea rcx, aStream_0; "stream"
/*1409f37ab*/  mov edx, 6
/*1409f37b0*/  mov r8, [rbp+450h+var_1D8]
/*1409f37b7*/  call sub_141433D50
/*1409f37bc*/  nop
/*1409f37bd*/  test rax, rax
/*1409f37c0*/  jz loc_1409F398E
/*1409f37c6*/  movzx ecx, byte ptr [rax]
/*1409f37c9*/  lea rdx, jpt_1409F37D7
/*1409f37d0*/  movsxd rcx, ds:(jpt_1409F37D7 - 1417AAE54h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f37d4*/  add rcx, rdx
/*1409f37d7*/  jmp rcx; switch jump  // switch jump
/*1409f37d9*/ loc_1409F37D9: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F37D7 cases 1,2  // jumptable 00000001409F37D7 cases 1,2
/*1409f37dd*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f37e1*/  movaps [rbp+450h+var_100], xmm1
/*1409f37e8*/  movdqa [rbp+450h+var_110], xmm0
/*1409f37f0*/  jmp loc_1409F3940
/*1409f37f5*/ loc_1409F37F5: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F37D7 case 4  // jumptable 00000001409F37D7 case 4
/*1409f37fc*/  mov rdx, [rax+10h]
/*1409f3800*/  mov r8, [rax+18h]
/*1409f3804*/  call sub_1402CE260
/*1409f3809*/  nop
/*1409f380a*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3811*/  jmp loc_1409F3940
/*1409f3816*/ loc_1409F3816: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F37D7 case 0  // jumptable 00000001409F37D7 case 0
/*1409f381d*/  jmp loc_1409F3940
/*1409f3822*/ loc_1409F3822: add rax, 8; jumptable 00000001409F37D7 case 3  // jumptable 00000001409F37D7 case 3
/*1409f3826*/  lea rcx, [rbp+450h+var_110+8]
/*1409f382d*/  mov rdx, rax
/*1409f3830*/  call sub_14149C500
/*1409f3835*/  nop
/*1409f3836*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f383d*/  jmp loc_1409F3940
/*1409f3842*/ loc_1409F3842: cmp qword ptr [rax+18h], 0; jumptable 00000001409F37D7 case 5  // jumptable 00000001409F37D7 case 5
/*1409f3847*/  jz loc_1409F3923
/*1409f384d*/  mov rdx, [rax+8]
/*1409f3851*/  test rdx, rdx
/*1409f3854*/  jz loc_1409F7F6D
/*1409f385a*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3861*/  mov r8, [rax+10h]
/*1409f3865*/  call sub_1402CCD80
/*1409f386a*/  nop
/*1409f386b*/  jmp loc_1409F3939
/*1409f3870*/ loc_1409F3870: xor r15d, r15d
/*1409f3873*/ loc_1409F3873: mov rax, [rbp+450h+var_B8]
/*1409f387a*/  mov [rbp+450h+var_210], rax
/*1409f3881*/ loc_1409F3881: mov rcx, r15
/*1409f3884*/  mov rdx, [rbp+450h+var_340]
/*1409f388b*/  call sub_1416C2D4B
/*1409f3891*/  jmp loc_1409F8D2B
/*1409f3896*/ loc_1409F3896: xor r15d, r15d
/*1409f3899*/  mov rdx, [rbp+450h+var_300]
/*1409f38a0*/ loc_1409F38A0: mov rax, [rbp+450h+var_B8]
/*1409f38a7*/  mov [rbp+450h+var_210], rax
/*1409f38ae*/  mov rcx, r15
/*1409f38b1*/  call sub_1416C2D4B
/*1409f38b7*/  jmp loc_1409F8D2B
/*1409f38bc*/ loc_1409F38BC: xor r15d, r15d
/*1409f38bf*/  mov rdx, [rbp+450h+var_308]
/*1409f38c6*/ loc_1409F38C6: mov rax, [rbp+450h+var_B8]
/*1409f38cd*/  mov [rbp+450h+var_210], rax
/*1409f38d4*/  mov rcx, r15
/*1409f38d7*/  call sub_1416C2D4B
/*1409f38dd*/  jmp loc_1409F8D2B
/*1409f38e2*/ loc_1409F38E2: xor r15d, r15d
/*1409f38e5*/  mov rdx, [rbp+450h+var_2F8]
/*1409f38ec*/ loc_1409F38EC: mov rax, [rbp+450h+var_B8]
/*1409f38f3*/  mov [rbp+450h+var_210], rax
/*1409f38fa*/  mov rcx, r15
/*1409f38fd*/  call sub_1416C2D4B
/*1409f3903*/  jmp loc_1409F8D2B
/*1409f3908*/ loc_1409F3908: xor r13d, r13d
/*1409f390b*/ loc_1409F390B: mov [rbp+450h+var_22B], 1
/*1409f3912*/ loc_1409F3912: mov rcx, r13
/*1409f3915*/  mov rdx, rsi
/*1409f3918*/  call sub_1416C2D4B
/*1409f391e*/  jmp loc_1409F8D2B
/*1409f3923*/ loc_1409F3923: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f392e*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3939*/ loc_1409F3939: mov byte ptr [rbp+450h+var_110], 5
/*1409f3940*/ loc_1409F3940: mov [rbp+450h+var_234], 1
/*1409f3947*/ loc_1409F3947: lea rcx, aStream_0; "stream"
/*1409f394e*/  lea r8, [rbp+450h+var_2C0]
/*1409f3955*/  mov edx, 6
/*1409f395a*/  call sub_141433E50
/*1409f395f*/  nop
/*1409f3960*/ loc_1409F3960: mov [rbp+450h+var_A8], rax
/*1409f3967*/  mov rcx, rax
/*1409f396a*/  call sub_1400104F0
/*1409f396f*/  nop
/*1409f3970*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f3978*/  movaps xmm1, [rbp+450h+var_100]
/*1409f397f*/  mov rax, [rbp+450h+var_A8]
/*1409f3986*/  movups xmmword ptr [rax+10h], xmm1
/*1409f398a*/  movdqu xmmword ptr [rax], xmm0
/*1409f398e*/ loc_1409F398E: lea rcx, aParallelToolCa; "parallel_tool_calls"
/*1409f3995*/  mov edx, 13h
/*1409f399a*/  mov r8, [rbp+450h+var_1D8]
/*1409f39a1*/  call sub_141433D50
/*1409f39a6*/  nop
/*1409f39a7*/  test rax, rax
/*1409f39aa*/  jz loc_1409F3AB5
/*1409f39b0*/  movzx ecx, byte ptr [rax]
/*1409f39b3*/  lea rdx, jpt_1409F39C1
/*1409f39ba*/  movsxd rcx, ds:(jpt_1409F39C1 - 1417AAE6Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f39be*/  add rcx, rdx
/*1409f39c1*/  jmp rcx; switch jump  // switch jump
/*1409f39c3*/ loc_1409F39C3: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F39C1 cases 1,2  // jumptable 00000001409F39C1 cases 1,2
/*1409f39c7*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f39cb*/  movaps [rbp+450h+var_100], xmm1
/*1409f39d2*/  movdqa [rbp+450h+var_110], xmm0
/*1409f39da*/  jmp loc_1409F3A67
/*1409f39df*/ loc_1409F39DF: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F39C1 case 4  // jumptable 00000001409F39C1 case 4
/*1409f39e6*/  mov rdx, [rax+10h]
/*1409f39ea*/  mov r8, [rax+18h]
/*1409f39ee*/  call sub_1402CE260
/*1409f39f3*/  nop
/*1409f39f4*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f39fb*/  jmp short loc_1409F3A67
/*1409f39fd*/ loc_1409F39FD: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F39C1 case 0  // jumptable 00000001409F39C1 case 0
/*1409f3a04*/  jmp short loc_1409F3A67
/*1409f3a06*/ loc_1409F3A06: add rax, 8; jumptable 00000001409F39C1 case 3  // jumptable 00000001409F39C1 case 3
/*1409f3a0a*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3a11*/  mov rdx, rax
/*1409f3a14*/  call sub_14149C500
/*1409f3a19*/  nop
/*1409f3a1a*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f3a21*/  jmp short loc_1409F3A67
/*1409f3a23*/ loc_1409F3A23: cmp qword ptr [rax+18h], 0; jumptable 00000001409F39C1 case 5  // jumptable 00000001409F39C1 case 5
/*1409f3a28*/  jz short loc_1409F3A4A
/*1409f3a2a*/  mov rdx, [rax+8]
/*1409f3a2e*/  test rdx, rdx
/*1409f3a31*/  jz loc_1409F7F7F
/*1409f3a37*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3a3e*/  mov r8, [rax+10h]
/*1409f3a42*/  call sub_1402CCD80
/*1409f3a47*/  nop
/*1409f3a48*/  jmp short loc_1409F3A60
/*1409f3a4a*/ loc_1409F3A4A: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f3a55*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3a60*/ loc_1409F3A60: mov byte ptr [rbp+450h+var_110], 5
/*1409f3a67*/ loc_1409F3A67: mov [rbp+450h+var_235], 1
/*1409f3a6e*/ loc_1409F3A6E: lea rcx, aParallelToolCa; "parallel_tool_calls"
/*1409f3a75*/  lea r8, [rbp+450h+var_2C0]
/*1409f3a7c*/  mov edx, 13h
/*1409f3a81*/  call sub_141433E50
/*1409f3a86*/  nop
/*1409f3a87*/ loc_1409F3A87: mov [rbp+450h+var_A8], rax
/*1409f3a8e*/  mov rcx, rax
/*1409f3a91*/  call sub_1400104F0
/*1409f3a96*/  nop
/*1409f3a97*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f3a9f*/  movaps xmm1, [rbp+450h+var_100]
/*1409f3aa6*/  mov rax, [rbp+450h+var_A8]
/*1409f3aad*/  movups xmmword ptr [rax+10h], xmm1
/*1409f3ab1*/  movdqu xmmword ptr [rax], xmm0
/*1409f3ab5*/ loc_1409F3AB5: lea rcx, aTemperature; "temperature"
/*1409f3abc*/  mov edx, 0Bh
/*1409f3ac1*/  mov r8, [rbp+450h+var_1D8]
/*1409f3ac8*/  call sub_141433D50
/*1409f3acd*/  nop
/*1409f3ace*/  test rax, rax
/*1409f3ad1*/  jz loc_1409F3BDC
/*1409f3ad7*/  movzx ecx, byte ptr [rax]
/*1409f3ada*/  lea rdx, jpt_1409F3AE8
/*1409f3ae1*/  movsxd rcx, ds:(jpt_1409F3AE8 - 1417AAE84h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f3ae5*/  add rcx, rdx
/*1409f3ae8*/  jmp rcx; switch jump  // switch jump
/*1409f3aea*/ loc_1409F3AEA: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F3AE8 cases 1,2  // jumptable 00000001409F3AE8 cases 1,2
/*1409f3aee*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f3af2*/  movaps [rbp+450h+var_100], xmm1
/*1409f3af9*/  movdqa [rbp+450h+var_110], xmm0
/*1409f3b01*/  jmp loc_1409F3B8E
/*1409f3b06*/ loc_1409F3B06: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F3AE8 case 4  // jumptable 00000001409F3AE8 case 4
/*1409f3b0d*/  mov rdx, [rax+10h]
/*1409f3b11*/  mov r8, [rax+18h]
/*1409f3b15*/  call sub_1402CE260
/*1409f3b1a*/  nop
/*1409f3b1b*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3b22*/  jmp short loc_1409F3B8E
/*1409f3b24*/ loc_1409F3B24: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F3AE8 case 0  // jumptable 00000001409F3AE8 case 0
/*1409f3b2b*/  jmp short loc_1409F3B8E
/*1409f3b2d*/ loc_1409F3B2D: add rax, 8; jumptable 00000001409F3AE8 case 3  // jumptable 00000001409F3AE8 case 3
/*1409f3b31*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3b38*/  mov rdx, rax
/*1409f3b3b*/  call sub_14149C500
/*1409f3b40*/  nop
/*1409f3b41*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f3b48*/  jmp short loc_1409F3B8E
/*1409f3b4a*/ loc_1409F3B4A: cmp qword ptr [rax+18h], 0; jumptable 00000001409F3AE8 case 5  // jumptable 00000001409F3AE8 case 5
/*1409f3b4f*/  jz short loc_1409F3B71
/*1409f3b51*/  mov rdx, [rax+8]
/*1409f3b55*/  test rdx, rdx
/*1409f3b58*/  jz loc_1409F7F91
/*1409f3b5e*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3b65*/  mov r8, [rax+10h]
/*1409f3b69*/  call sub_1402CCD80
/*1409f3b6e*/  nop
/*1409f3b6f*/  jmp short loc_1409F3B87
/*1409f3b71*/ loc_1409F3B71: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f3b7c*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3b87*/ loc_1409F3B87: mov byte ptr [rbp+450h+var_110], 5
/*1409f3b8e*/ loc_1409F3B8E: mov [rbp+450h+var_236], 1
/*1409f3b95*/ loc_1409F3B95: lea rcx, aTemperature; "temperature"
/*1409f3b9c*/  lea r8, [rbp+450h+var_2C0]
/*1409f3ba3*/  mov edx, 0Bh
/*1409f3ba8*/  call sub_141433E50
/*1409f3bad*/  nop
/*1409f3bae*/ loc_1409F3BAE: mov [rbp+450h+var_A8], rax
/*1409f3bb5*/  mov rcx, rax
/*1409f3bb8*/  call sub_1400104F0
/*1409f3bbd*/  nop
/*1409f3bbe*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f3bc6*/  movaps xmm1, [rbp+450h+var_100]
/*1409f3bcd*/  mov rax, [rbp+450h+var_A8]
/*1409f3bd4*/  movups xmmword ptr [rax+10h], xmm1
/*1409f3bd8*/  movdqu xmmword ptr [rax], xmm0
/*1409f3bdc*/ loc_1409F3BDC: lea rcx, aTopP; "top_p"
/*1409f3be3*/  mov edx, 5
/*1409f3be8*/  mov r8, [rbp+450h+var_1D8]
/*1409f3bef*/  call sub_141433D50
/*1409f3bf4*/  nop
/*1409f3bf5*/  test rax, rax
/*1409f3bf8*/  jz loc_1409F3D03
/*1409f3bfe*/  movzx ecx, byte ptr [rax]
/*1409f3c01*/  lea rdx, jpt_1409F3C0F
/*1409f3c08*/  movsxd rcx, ds:(jpt_1409F3C0F - 1417AAE9Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f3c0c*/  add rcx, rdx
/*1409f3c0f*/  jmp rcx; switch jump  // switch jump
/*1409f3c11*/ loc_1409F3C11: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F3C0F cases 1,2  // jumptable 00000001409F3C0F cases 1,2
/*1409f3c15*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f3c19*/  movaps [rbp+450h+var_100], xmm1
/*1409f3c20*/  movdqa [rbp+450h+var_110], xmm0
/*1409f3c28*/  jmp loc_1409F3CB5
/*1409f3c2d*/ loc_1409F3C2D: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F3C0F case 4  // jumptable 00000001409F3C0F case 4
/*1409f3c34*/  mov rdx, [rax+10h]
/*1409f3c38*/  mov r8, [rax+18h]
/*1409f3c3c*/  call sub_1402CE260
/*1409f3c41*/  nop
/*1409f3c42*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3c49*/  jmp short loc_1409F3CB5
/*1409f3c4b*/ loc_1409F3C4B: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F3C0F case 0  // jumptable 00000001409F3C0F case 0
/*1409f3c52*/  jmp short loc_1409F3CB5
/*1409f3c54*/ loc_1409F3C54: add rax, 8; jumptable 00000001409F3C0F case 3  // jumptable 00000001409F3C0F case 3
/*1409f3c58*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3c5f*/  mov rdx, rax
/*1409f3c62*/  call sub_14149C500
/*1409f3c67*/  nop
/*1409f3c68*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f3c6f*/  jmp short loc_1409F3CB5
/*1409f3c71*/ loc_1409F3C71: cmp qword ptr [rax+18h], 0; jumptable 00000001409F3C0F case 5  // jumptable 00000001409F3C0F case 5
/*1409f3c76*/  jz short loc_1409F3C98
/*1409f3c78*/  mov rdx, [rax+8]
/*1409f3c7c*/  test rdx, rdx
/*1409f3c7f*/  jz loc_1409F7FA3
/*1409f3c85*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3c8c*/  mov r8, [rax+10h]
/*1409f3c90*/  call sub_1402CCD80
/*1409f3c95*/  nop
/*1409f3c96*/  jmp short loc_1409F3CAE
/*1409f3c98*/ loc_1409F3C98: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f3ca3*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3cae*/ loc_1409F3CAE: mov byte ptr [rbp+450h+var_110], 5
/*1409f3cb5*/ loc_1409F3CB5: mov [rbp+450h+var_237], 1
/*1409f3cbc*/ loc_1409F3CBC: lea rcx, aTopP; "top_p"
/*1409f3cc3*/  lea r8, [rbp+450h+var_2C0]
/*1409f3cca*/  mov edx, 5
/*1409f3ccf*/  call sub_141433E50
/*1409f3cd4*/  nop
/*1409f3cd5*/ loc_1409F3CD5: mov [rbp+450h+var_A8], rax
/*1409f3cdc*/  mov rcx, rax
/*1409f3cdf*/  call sub_1400104F0
/*1409f3ce4*/  nop
/*1409f3ce5*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f3ced*/  movaps xmm1, [rbp+450h+var_100]
/*1409f3cf4*/  mov rax, [rbp+450h+var_A8]
/*1409f3cfb*/  movups xmmword ptr [rax+10h], xmm1
/*1409f3cff*/  movdqu xmmword ptr [rax], xmm0
/*1409f3d03*/ loc_1409F3D03: lea rcx, aMaxOutputToken; "max_output_tokens"
/*1409f3d0a*/  mov edx, 11h
/*1409f3d0f*/  mov r8, [rbp+450h+var_1D8]
/*1409f3d16*/  call sub_141433D50
/*1409f3d1b*/  nop
/*1409f3d1c*/  mov rsi, rax
/*1409f3d1f*/  test rax, rax
/*1409f3d22*/  jz loc_1409F3FBF
/*1409f3d28*/  mov rcx, [rbp+450h+var_148]
/*1409f3d2f*/  mov rdx, [rbp+450h+var_2F0]
/*1409f3d36*/  call sub_1406B2610
/*1409f3d3b*/  nop
/*1409f3d3c*/  test al, al
/*1409f3d3e*/  jz short loc_1409F3D6F
/*1409f3d40*/  movzx eax, byte ptr [rsi]
/*1409f3d43*/  lea rcx, jpt_1409F3D51
/*1409f3d4a*/  movsxd rax, ds:(jpt_1409F3D51 - 1417AAECCh)[rcx+rax*4]; switch 6 cases  // switch 6 cases
/*1409f3d4e*/  add rax, rcx
/*1409f3d51*/  jmp rax; switch jump  // switch jump
/*1409f3d53*/ loc_1409F3D53: movdqu xmm0, xmmword ptr [rsi]; jumptable 00000001409F3D51 cases 1,2  // jumptable 00000001409F3D51 cases 1,2
/*1409f3d57*/  movups xmm1, xmmword ptr [rsi+10h]
/*1409f3d5b*/  movaps [rbp+450h+var_100], xmm1
/*1409f3d62*/  movdqa [rbp+450h+var_110], xmm0
/*1409f3d6a*/  jmp loc_1409F3F22
/*1409f3d6f*/ loc_1409F3D6F: movzx eax, byte ptr [rsi]
/*1409f3d72*/  lea rcx, jpt_1409F3D80
/*1409f3d79*/  movsxd rax, ds:(jpt_1409F3D80 - 1417AAEB4h)[rcx+rax*4]; switch 6 cases  // switch 6 cases
/*1409f3d7d*/  add rax, rcx
/*1409f3d80*/  jmp rax; switch jump  // switch jump
/*1409f3d82*/ loc_1409F3D82: movdqu xmm0, xmmword ptr [rsi]; jumptable 00000001409F3D80 cases 1,2  // jumptable 00000001409F3D80 cases 1,2
/*1409f3d86*/  movups xmm1, xmmword ptr [rsi+10h]
/*1409f3d8a*/  movaps [rbp+450h+var_100], xmm1
/*1409f3d91*/  movdqa [rbp+450h+var_110], xmm0
/*1409f3d99*/  jmp loc_1409F3F71
/*1409f3d9e*/ loc_1409F3D9E: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F3D51 case 4  // jumptable 00000001409F3D51 case 4
/*1409f3da5*/  mov rdx, [rsi+10h]
/*1409f3da9*/  mov r8, [rsi+18h]
/*1409f3dad*/  call sub_1402CE260
/*1409f3db2*/  nop
/*1409f3db3*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3dba*/  jmp loc_1409F3F22
/*1409f3dbf*/ loc_1409F3DBF: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F3D80 case 4  // jumptable 00000001409F3D80 case 4
/*1409f3dc6*/  mov rdx, [rsi+10h]
/*1409f3dca*/  mov r8, [rsi+18h]
/*1409f3dce*/  call sub_1402CE260
/*1409f3dd3*/  nop
/*1409f3dd4*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f3ddb*/  jmp loc_1409F3F71
/*1409f3de0*/ loc_1409F3DE0: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F3D51 case 0  // jumptable 00000001409F3D51 case 0
/*1409f3de7*/  jmp loc_1409F3F22
/*1409f3dec*/ loc_1409F3DEC: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F3D80 case 0  // jumptable 00000001409F3D80 case 0
/*1409f3df3*/  jmp loc_1409F3F71
/*1409f3df8*/ loc_1409F3DF8: add rsi, 8; jumptable 00000001409F3D51 case 3  // jumptable 00000001409F3D51 case 3
/*1409f3dfc*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3e03*/  mov rdx, rsi
/*1409f3e06*/  call sub_14149C500
/*1409f3e0b*/  nop
/*1409f3e0c*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f3e13*/  jmp loc_1409F3F22
/*1409f3e18*/ loc_1409F3E18: add rsi, 8; jumptable 00000001409F3D80 case 3  // jumptable 00000001409F3D80 case 3
/*1409f3e1c*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3e23*/  mov rdx, rsi
/*1409f3e26*/  call sub_14149C500
/*1409f3e2b*/  nop
/*1409f3e2c*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f3e33*/  jmp loc_1409F3F71
/*1409f3e38*/ loc_1409F3E38: cmp qword ptr [rsi+18h], 0; jumptable 00000001409F3D51 case 5  // jumptable 00000001409F3D51 case 5
/*1409f3e3d*/  jz loc_1409F3F05
/*1409f3e43*/  mov rdx, [rsi+8]
/*1409f3e47*/  test rdx, rdx
/*1409f3e4a*/  jz loc_1409F809D
/*1409f3e50*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3e57*/  mov r8, [rsi+10h]
/*1409f3e5b*/  call sub_1402CCD80
/*1409f3e60*/  nop
/*1409f3e61*/  jmp loc_1409F3F1B
/*1409f3e66*/ loc_1409F3E66: cmp qword ptr [rsi+18h], 0; jumptable 00000001409F3D80 case 5  // jumptable 00000001409F3D80 case 5
/*1409f3e6b*/  jz loc_1409F3F54
/*1409f3e71*/  mov rdx, [rsi+8]
/*1409f3e75*/  test rdx, rdx
/*1409f3e78*/  jz loc_1409F80AF
/*1409f3e7e*/  lea rcx, [rbp+450h+var_110+8]
/*1409f3e85*/  mov r8, [rsi+10h]
/*1409f3e89*/  call sub_1402CCD80
/*1409f3e8e*/  nop
/*1409f3e8f*/  jmp loc_1409F3F6A
/*1409f3e94*/ loc_1409F3E94: xor r15d, r15d
/*1409f3e97*/  mov rdx, [rbp+450h+var_368]
/*1409f3e9e*/ loc_1409F3E9E: mov rax, [rbp+450h+var_B8]
/*1409f3ea5*/  mov [rbp+450h+var_3F8], rax
/*1409f3ea9*/ loc_1409F3EA9: mov rcx, r15
/*1409f3eac*/  call sub_1416C2D4B
/*1409f3eb2*/  jmp loc_1409F8D2B
/*1409f3eb7*/ loc_1409F3EB7: xor r13d, r13d
/*1409f3eba*/ loc_1409F3EBA: mov [rbp+450h+var_222], 1
/*1409f3ec1*/ loc_1409F3EC1: mov rcx, r13
/*1409f3ec4*/  mov rdx, rsi
/*1409f3ec7*/  call sub_1416C2D4B
/*1409f3ecd*/  jmp loc_1409F8D2B
/*1409f3ed2*/ loc_1409F3ED2: xor r15d, r15d
/*1409f3ed5*/ loc_1409F3ED5: mov rcx, r15
/*1409f3ed8*/  mov rdx, [rbp+450h+var_338]
/*1409f3edf*/  call sub_1416C2D4B
/*1409f3ee5*/  jmp loc_1409F8D2B
/*1409f3eea*/ loc_1409F3EEA: xor r14d, r14d
/*1409f3eed*/ loc_1409F3EED: mov [rbp+450h+var_231], 1
/*1409f3ef4*/ loc_1409F3EF4: mov rcx, r14
/*1409f3ef7*/  mov rdx, r15
/*1409f3efa*/  call sub_1416C2D4B
/*1409f3f00*/  jmp loc_1409F8D2B
/*1409f3f05*/ loc_1409F3F05: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f3f10*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3f1b*/ loc_1409F3F1B: mov byte ptr [rbp+450h+var_110], 5
/*1409f3f22*/ loc_1409F3F22: mov [rbp+450h+var_239], 1
/*1409f3f29*/ loc_1409F3F29: lea rcx, aMaxCompletionT; "max_completion_tokens"
/*1409f3f30*/  lea r8, [rbp+450h+var_2C0]
/*1409f3f37*/  mov edx, 15h
/*1409f3f3c*/  call sub_141433E50
/*1409f3f41*/  nop
/*1409f3f42*/ loc_1409F3F42: mov [rbp+450h+var_A8], rax
/*1409f3f49*/  mov rcx, rax
/*1409f3f4c*/  call sub_1400104F0
/*1409f3f51*/  nop
/*1409f3f52*/  jmp short loc_1409F3FA1
/*1409f3f54*/ loc_1409F3F54: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f3f5f*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f3f6a*/ loc_1409F3F6A: mov byte ptr [rbp+450h+var_110], 5
/*1409f3f71*/ loc_1409F3F71: mov [rbp+450h+var_238], 1
/*1409f3f78*/ loc_1409F3F78: lea rcx, aMaxTokens; "max_tokens"
/*1409f3f7f*/  lea r8, [rbp+450h+var_2C0]
/*1409f3f86*/  mov edx, 0Ah
/*1409f3f8b*/  call sub_141433E50
/*1409f3f90*/  nop
/*1409f3f91*/ loc_1409F3F91: mov [rbp+450h+var_A8], rax
/*1409f3f98*/  mov rcx, rax
/*1409f3f9b*/  call sub_1400104F0
/*1409f3fa0*/  nop
/*1409f3fa1*/ loc_1409F3FA1: movdqa xmm0, [rbp+450h+var_110]
/*1409f3fa9*/  movaps xmm1, [rbp+450h+var_100]
/*1409f3fb0*/  mov rax, [rbp+450h+var_A8]
/*1409f3fb7*/  movups xmmword ptr [rax+10h], xmm1
/*1409f3fbb*/  movdqu xmmword ptr [rax], xmm0
/*1409f3fbf*/ loc_1409F3FBF: lea rcx, aMaxTokens; "max_tokens"
/*1409f3fc6*/  mov edx, 0Ah
/*1409f3fcb*/  mov r8, [rbp+450h+var_1D8]
/*1409f3fd2*/  call sub_141433D50
/*1409f3fd7*/  nop
/*1409f3fd8*/  test rax, rax
/*1409f3fdb*/  jz loc_1409F40E6
/*1409f3fe1*/  movzx ecx, byte ptr [rax]
/*1409f3fe4*/  lea rdx, jpt_1409F3FF2
/*1409f3feb*/  movsxd rcx, ds:(jpt_1409F3FF2 - 1417AAEE4h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f3fef*/  add rcx, rdx
/*1409f3ff2*/  jmp rcx; switch jump  // switch jump
/*1409f3ff4*/ loc_1409F3FF4: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F3FF2 cases 1,2  // jumptable 00000001409F3FF2 cases 1,2
/*1409f3ff8*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f3ffc*/  movaps [rbp+450h+var_100], xmm1
/*1409f4003*/  movdqa [rbp+450h+var_110], xmm0
/*1409f400b*/  jmp loc_1409F4098
/*1409f4010*/ loc_1409F4010: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F3FF2 case 4  // jumptable 00000001409F3FF2 case 4
/*1409f4017*/  mov rdx, [rax+10h]
/*1409f401b*/  mov r8, [rax+18h]
/*1409f401f*/  call sub_1402CE260
/*1409f4024*/  nop
/*1409f4025*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f402c*/  jmp short loc_1409F4098
/*1409f402e*/ loc_1409F402E: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F3FF2 case 0  // jumptable 00000001409F3FF2 case 0
/*1409f4035*/  jmp short loc_1409F4098
/*1409f4037*/ loc_1409F4037: add rax, 8; jumptable 00000001409F3FF2 case 3  // jumptable 00000001409F3FF2 case 3
/*1409f403b*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4042*/  mov rdx, rax
/*1409f4045*/  call sub_14149C500
/*1409f404a*/  nop
/*1409f404b*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f4052*/  jmp short loc_1409F4098
/*1409f4054*/ loc_1409F4054: cmp qword ptr [rax+18h], 0; jumptable 00000001409F3FF2 case 5  // jumptable 00000001409F3FF2 case 5
/*1409f4059*/  jz short loc_1409F407B
/*1409f405b*/  mov rdx, [rax+8]
/*1409f405f*/  test rdx, rdx
/*1409f4062*/  jz loc_1409F7FB5
/*1409f4068*/  lea rcx, [rbp+450h+var_110+8]
/*1409f406f*/  mov r8, [rax+10h]
/*1409f4073*/  call sub_1402CCD80
/*1409f4078*/  nop
/*1409f4079*/  jmp short loc_1409F4091
/*1409f407b*/ loc_1409F407B: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f4086*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f4091*/ loc_1409F4091: mov byte ptr [rbp+450h+var_110], 5
/*1409f4098*/ loc_1409F4098: mov [rbp+450h+var_23A], 1
/*1409f409f*/ loc_1409F409F: lea rcx, aMaxTokens; "max_tokens"
/*1409f40a6*/  lea r8, [rbp+450h+var_2C0]
/*1409f40ad*/  mov edx, 0Ah
/*1409f40b2*/  call sub_141433E50
/*1409f40b7*/  nop
/*1409f40b8*/ loc_1409F40B8: mov [rbp+450h+var_A8], rax
/*1409f40bf*/  mov rcx, rax
/*1409f40c2*/  call sub_1400104F0
/*1409f40c7*/  nop
/*1409f40c8*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f40d0*/  movaps xmm1, [rbp+450h+var_100]
/*1409f40d7*/  mov rax, [rbp+450h+var_A8]
/*1409f40de*/  movups xmmword ptr [rax+10h], xmm1
/*1409f40e2*/  movdqu xmmword ptr [rax], xmm0
/*1409f40e6*/ loc_1409F40E6: lea rcx, aMaxCompletionT; "max_completion_tokens"
/*1409f40ed*/  mov edx, 15h
/*1409f40f2*/  mov r8, [rbp+450h+var_1D8]
/*1409f40f9*/  call sub_141433D50
/*1409f40fe*/  nop
/*1409f40ff*/  test rax, rax
/*1409f4102*/  jz loc_1409F420D
/*1409f4108*/  movzx ecx, byte ptr [rax]
/*1409f410b*/  lea rdx, jpt_1409F4119
/*1409f4112*/  movsxd rcx, ds:(jpt_1409F4119 - 1417AAEFCh)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f4116*/  add rcx, rdx
/*1409f4119*/  jmp rcx; switch jump  // switch jump
/*1409f411b*/ loc_1409F411B: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F4119 cases 1,2  // jumptable 00000001409F4119 cases 1,2
/*1409f411f*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f4123*/  movaps [rbp+450h+var_100], xmm1
/*1409f412a*/  movdqa [rbp+450h+var_110], xmm0
/*1409f4132*/  jmp loc_1409F41BF
/*1409f4137*/ loc_1409F4137: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F4119 case 4  // jumptable 00000001409F4119 case 4
/*1409f413e*/  mov rdx, [rax+10h]
/*1409f4142*/  mov r8, [rax+18h]
/*1409f4146*/  call sub_1402CE260
/*1409f414b*/  nop
/*1409f414c*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f4153*/  jmp short loc_1409F41BF
/*1409f4155*/ loc_1409F4155: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F4119 case 0  // jumptable 00000001409F4119 case 0
/*1409f415c*/  jmp short loc_1409F41BF
/*1409f415e*/ loc_1409F415E: add rax, 8; jumptable 00000001409F4119 case 3  // jumptable 00000001409F4119 case 3
/*1409f4162*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4169*/  mov rdx, rax
/*1409f416c*/  call sub_14149C500
/*1409f4171*/  nop
/*1409f4172*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f4179*/  jmp short loc_1409F41BF
/*1409f417b*/ loc_1409F417B: cmp qword ptr [rax+18h], 0; jumptable 00000001409F4119 case 5  // jumptable 00000001409F4119 case 5
/*1409f4180*/  jz short loc_1409F41A2
/*1409f4182*/  mov rdx, [rax+8]
/*1409f4186*/  test rdx, rdx
/*1409f4189*/  jz loc_1409F7FC7
/*1409f418f*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4196*/  mov r8, [rax+10h]
/*1409f419a*/  call sub_1402CCD80
/*1409f419f*/  nop
/*1409f41a0*/  jmp short loc_1409F41B8
/*1409f41a2*/ loc_1409F41A2: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f41ad*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f41b8*/ loc_1409F41B8: mov byte ptr [rbp+450h+var_110], 5
/*1409f41bf*/ loc_1409F41BF: mov [rbp+450h+var_23B], 1
/*1409f41c6*/ loc_1409F41C6: lea rcx, aMaxCompletionT; "max_completion_tokens"
/*1409f41cd*/  lea r8, [rbp+450h+var_2C0]
/*1409f41d4*/  mov edx, 15h
/*1409f41d9*/  call sub_141433E50
/*1409f41de*/  nop
/*1409f41df*/ loc_1409F41DF: mov [rbp+450h+var_A8], rax
/*1409f41e6*/  mov rcx, rax
/*1409f41e9*/  call sub_1400104F0
/*1409f41ee*/  nop
/*1409f41ef*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f41f7*/  movaps xmm1, [rbp+450h+var_100]
/*1409f41fe*/  mov rax, [rbp+450h+var_A8]
/*1409f4205*/  movups xmmword ptr [rax+10h], xmm1
/*1409f4209*/  movdqu xmmword ptr [rax], xmm0
/*1409f420d*/ loc_1409F420D: call sub_141470CD0
/*1409f4212*/  nop
/*1409f4213*/  mov rsi, rax
/*1409f4216*/  cmp byte ptr [rax+10h], 1
/*1409f421a*/  jnz loc_1409F7E28
/*1409f4220*/  mov rax, [rsi]
/*1409f4223*/  mov rdx, [rsi+8]
/*1409f4227*/ loc_1409F4227: lea rcx, [rax+1]
/*1409f422b*/  mov [rsi], rcx
/*1409f422e*/  movdqu xmm6, cs:xmmword_1417A47A0
/*1409f4236*/  movdqa [rbp+450h+var_270], xmm6
/*1409f423e*/  movdqu xmm7, xmmword ptr cs:off_1417A4790
/*1409f4246*/  movdqa [rbp+450h+var_280], xmm7
/*1409f424e*/  mov qword ptr [rbp+450h+var_260], rax
/*1409f4255*/  mov qword ptr [rbp+450h+var_260+8], rdx
/*1409f425c*/ loc_1409F425C: lea rcx, aTools_1; "tools"
/*1409f4263*/  mov edx, 5
/*1409f4268*/  mov r8, [rbp+450h+var_1D8]
/*1409f426f*/  call sub_141433D50
/*1409f4274*/  nop
/*1409f4275*/  test rax, rax
/*1409f4278*/  jz loc_1409F5BA3
/*1409f427e*/  cmp byte ptr [rax], 4
/*1409f4281*/  jnz loc_1409F5BA3
/*1409f4287*/  mov rsi, rax
/*1409f428a*/  mov qword ptr [rbp+450h+var_358], 0
/*1409f4295*/  mov qword ptr [rbp+450h+var_358+8], 8
/*1409f42a0*/  mov [rbp+450h+var_348], 0
/*1409f42ab*/  mov [rbp+450h+var_1DC], 1
/*1409f42b2*/ loc_1409F42B2: call sub_141470CD0
/*1409f42b7*/  nop
/*1409f42b8*/  cmp byte ptr [rax+10h], 1
/*1409f42bc*/  jnz loc_1409F7E66
/*1409f42c2*/  mov r8, rsi
/*1409f42c5*/  mov rcx, [rax]
/*1409f42c8*/  mov rdx, [rax+8]
/*1409f42cc*/ loc_1409F42CC: lea r9, [rcx+1]
/*1409f42d0*/  mov [rax], r9
/*1409f42d3*/  movdqa [rbp+450h+var_1A0], xmm6
/*1409f42db*/  movdqa [rbp+450h+var_1B0], xmm7
/*1409f42e3*/  mov [rbp+450h+var_190], rcx
/*1409f42ea*/  mov [rbp+450h+var_188], rdx
/*1409f42f1*/  mov rsi, [r8+10h]
/*1409f42f5*/  mov r15, [r8+18h]
/*1409f42f9*/  shl r15, 5
/*1409f42fd*/  add r15, rsi
/*1409f4300*/  lea rbx, aType_8; "type"
/*1409f4307*/  lea r14, aTools_1; "tools"
/*1409f430e*/  movaps xmm8, cs:xmmword_141748CD0
/*1409f4316*/  mov rdi, rsi
/*1409f4319*/  nop dword ptr [rax+00000000h]
/*1409f4320*/ loc_1409F4320: cmp rdi, r15
/*1409f4323*/  jz loc_1409F45B9
/*1409f4329*/  mov r13, rdi
/*1409f432c*/  mov [rbp+450h+var_99], 1
/*1409f4333*/ loc_1409F4333: mov edx, 4
/*1409f4338*/  mov rcx, rbx
/*1409f433b*/  mov r8, rdi
/*1409f433e*/  call sub_141433D50
/*1409f4343*/  nop
/*1409f4344*/  lea rdi, [r13+20h]
/*1409f4348*/  test rax, rax
/*1409f434b*/  jz short loc_1409F4320
/*1409f434d*/  cmp byte ptr [rax], 3
/*1409f4350*/  jnz short loc_1409F4320
/*1409f4352*/  cmp qword ptr [rax+18h], 9
/*1409f4357*/  jnz short loc_1409F4320
/*1409f4359*/  mov rax, [rax+10h]
/*1409f435d*/  mov rcx, [rax]
/*1409f4360*/  mov rdx, 63617073656D616Eh
/*1409f436a*/  xor rcx, rdx
/*1409f436d*/  movzx eax, byte ptr [rax+8]
/*1409f4371*/  xor rax, 65h
/*1409f4375*/  or rax, rcx
/*1409f4378*/  jnz short loc_1409F4320
/*1409f437a*/  mov [rbp+450h+var_99], 1
/*1409f4381*/  mov edx, 5
/*1409f4386*/  mov rcx, r14
/*1409f4389*/  mov r8, r13
/*1409f438c*/  call sub_141433D50
/*1409f4391*/  nop
/*1409f4392*/  test rax, rax
/*1409f4395*/  jz short loc_1409F4320
/*1409f4397*/  cmp byte ptr [rax], 4
/*1409f439a*/  jnz short loc_1409F4320
/*1409f439c*/  mov r13, [rax+10h]
/*1409f43a0*/  mov r12, [rax+18h]
/*1409f43a4*/  shl r12, 5
/*1409f43a8*/  add r12, r13
/*1409f43ab*/  nop dword ptr [rax+rax+00h]
/*1409f43b0*/ loc_1409F43B0: cmp r13, r12
/*1409f43b3*/  jz loc_1409F4320
/*1409f43b9*/  mov [rbp+450h+var_99], 1
/*1409f43c0*/  mov edx, 4
/*1409f43c5*/  lea rcx, aName_7; "name"
/*1409f43cc*/  mov r8, r13
/*1409f43cf*/  call sub_141433D50
/*1409f43d4*/  nop
/*1409f43d5*/ loc_1409F43D5: add r13, 20h ; ' '
/*1409f43d9*/  test rax, rax
/*1409f43dc*/  jz short loc_1409F43B0
/*1409f43de*/  cmp byte ptr [rax], 3
/*1409f43e1*/  jnz short loc_1409F43B0
/*1409f43e3*/  mov rcx, [rax+18h]
/*1409f43e7*/  test rcx, rcx
/*1409f43ea*/  js loc_1409F7DBC
/*1409f43f0*/  jz short loc_1409F4450
/*1409f43f2*/  mov rax, [rax+10h]
/*1409f43f6*/  mov [rbp+450h+var_A8], rax
/*1409f43fd*/  mov [rbp+450h+var_B8], rcx
/*1409f4404*/  call nullsub_1
/*1409f4409*/  mov edx, 1
/*1409f440e*/  mov rcx, [rbp+450h+var_B8]
/*1409f4415*/  call sub_140001650
/*1409f441a*/  test rax, rax
/*1409f441d*/  jz loc_1409F8CDF
/*1409f4423*/  mov rcx, rax
/*1409f4426*/  mov rdx, [rbp+450h+var_A8]
/*1409f442d*/  mov r8, [rbp+450h+var_B8]
/*1409f4434*/  mov [rbp+450h+var_A8], rax
/*1409f443b*/  call sub_141684120
/*1409f4440*/  mov rax, [rbp+450h+var_A8]
/*1409f4447*/  mov rcx, [rbp+450h+var_B8]
/*1409f444e*/  jmp short loc_1409F4455
/*1409f4450*/ loc_1409F4450: mov eax, 1
/*1409f4455*/ loc_1409F4455: mov qword ptr [rbp+450h+var_170], rcx
/*1409f445c*/  mov [rbp+450h+var_A8], rax
/*1409f4463*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f446a*/  mov qword ptr [rbp+450h+var_160], rcx
/*1409f4471*/  mov [rbp+450h+var_99], 1
/*1409f4478*/ loc_1409F4478: lea rcx, [rbp+450h+var_110]
/*1409f447f*/  lea rdx, [rbp+450h+var_1B0]
/*1409f4486*/  lea r8, [rbp+450h+var_170]
/*1409f448d*/  call sub_14046D090
/*1409f4492*/  nop
/*1409f4493*/  mov rcx, qword ptr [rbp+450h+var_110]
/*1409f449a*/  mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f44a1*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1409f44a5*/  jz loc_1409F4576
/*1409f44ab*/  mov [rbp+450h+var_208], rcx
/*1409f44b2*/  mov [rbp+450h+var_220], rax
/*1409f44b9*/  mov rax, qword ptr [rbp+450h+var_100+8]
/*1409f44c0*/  mov r9, [rbp+450h+var_F0]
/*1409f44c7*/  mov r8, [rax]
/*1409f44ca*/  mov [rbp+450h+var_B8], rax
/*1409f44d1*/  mov r10, [rax+8]
/*1409f44d5*/  mov r11, r10
/*1409f44d8*/  and r11, r9
/*1409f44db*/  movdqu xmm0, xmmword ptr [r8+r11]
/*1409f44e1*/  pmovmskb ecx, xmm0
/*1409f44e5*/  test ecx, ecx
/*1409f44e7*/  jz loc_1409F457F
/*1409f44ed*/ loc_1409F44ED: tzcnt ecx, ecx
/*1409f44f1*/  add rcx, r11
/*1409f44f4*/  and rcx, r10
/*1409f44f7*/  movzx r11d, byte ptr [r8+rcx]
/*1409f44fc*/  test r11b, r11b
/*1409f44ff*/  jns loc_1409F45A2
/*1409f4505*/ loc_1409F4505: mov rdx, qword ptr [rbp+450h+var_100]
/*1409f450c*/  shr r9, 39h
/*1409f4510*/  lea rax, [rcx-10h]
/*1409f4514*/  and rax, r10
/*1409f4517*/  mov [r8+rcx], r9b
/*1409f451b*/  mov [r8+rax+10h], r9b
/*1409f4520*/  shl rcx, 5
/*1409f4524*/  mov rax, r8
/*1409f4527*/  sub rax, rcx
/*1409f452a*/  and r11b, 1
/*1409f452e*/  neg rcx
/*1409f4531*/  mov r9, [rbp+450h+var_208]
/*1409f4538*/  mov [r8+rcx-20h], r9
/*1409f453d*/  mov rcx, [rbp+450h+var_220]
/*1409f4544*/  mov [rax-18h], rcx
/*1409f4548*/  mov [rax-10h], rdx
/*1409f454c*/  mov qword ptr [rax-8], 0
/*1409f4554*/  mov rdx, [rbp+450h+var_B8]
/*1409f455b*/  movdqu xmm0, xmmword ptr [rdx+10h]
/*1409f4560*/  movzx ecx, r11b
/*1409f4564*/  movd xmm1, ecx
/*1409f4568*/  shufps xmm1, xmm8, 0E4h
/*1409f456d*/  psubq xmm0, xmm1
/*1409f4571*/  movdqu xmmword ptr [rdx+10h], xmm0
/*1409f4576*/ loc_1409F4576: inc qword ptr [rax-8]
/*1409f457a*/  jmp loc_1409F43B0
/*1409f457f*/ loc_1409F457F: mov eax, 10h
/*1409f4584*/ loc_1409F4584: add r11, rax
/*1409f4587*/  and r11, r10
/*1409f458a*/  movdqu xmm0, xmmword ptr [r8+r11]
/*1409f4590*/  pmovmskb ecx, xmm0
/*1409f4594*/  add rax, 10h
/*1409f4598*/  test ecx, ecx
/*1409f459a*/  jnz loc_1409F44ED
/*1409f45a0*/  jmp short loc_1409F4584
/*1409f45a2*/ loc_1409F45A2: movdqa xmm0, xmmword ptr [r8]
/*1409f45a7*/  pmovmskb ecx, xmm0
/*1409f45ab*/  tzcnt ecx, ecx
/*1409f45af*/  movzx r11d, byte ptr [r8+rcx]
/*1409f45b4*/  jmp loc_1409F4505
/*1409f45b9*/ loc_1409F45B9: pcmpeqd xmm8, xmm8
/*1409f45be*/  jmp short loc_1409F45C3
/*1409f45c0*/ loc_1409F45C0: mov rsi, rdi
/*1409f45c3*/ loc_1409F45C3: cmp rsi, r15
/*1409f45c6*/  jz loc_1409F558E
/*1409f45cc*/  mov [rbp+450h+var_99], 1
/*1409f45d3*/  mov edx, 4
/*1409f45d8*/  lea rcx, aType_8; "type"
/*1409f45df*/  mov r8, rsi
/*1409f45e2*/  call sub_141433D50
/*1409f45e7*/  nop
/*1409f45e8*/  lea rdi, [rsi+20h]
/*1409f45ec*/  test rax, rax
/*1409f45ef*/  jz short loc_1409F4622
/*1409f45f1*/  cmp byte ptr [rax], 3
/*1409f45f4*/  jnz short loc_1409F4622
/*1409f45f6*/  cmp qword ptr [rax+18h], 9
/*1409f45fb*/  jnz short loc_1409F4622
/*1409f45fd*/  mov rax, [rax+10h]
/*1409f4601*/  mov rcx, [rax]
/*1409f4604*/  mov rdx, 63617073656D616Eh
/*1409f460e*/  xor rcx, rdx
/*1409f4611*/  movzx eax, byte ptr [rax+8]
/*1409f4615*/  xor rax, 65h
/*1409f4619*/  or rax, rcx
/*1409f461c*/  jz loc_1409F46DA
/*1409f4622*/ loc_1409F4622: mov [rbp+450h+var_99], 1
/*1409f4629*/  lea rcx, [rbp+450h+var_170]
/*1409f4630*/  mov rdx, rsi
/*1409f4633*/  call sub_140A09C80
/*1409f4638*/  nop
/*1409f4639*/ loc_1409F4639: mov rsi, qword ptr [rbp+450h+var_170]
/*1409f4640*/  mov r14, qword ptr [rbp+450h+var_170+8]
/*1409f4647*/  mov rbx, qword ptr [rbp+450h+var_160]
/*1409f464e*/  mov r13, rbx
/*1409f4651*/  shl r13, 5
/*1409f4655*/  lea rax, [r14+r13]
/*1409f4659*/  mov qword ptr [rbp+450h+var_110], r14
/*1409f4660*/  mov qword ptr [rbp+450h+var_100], rsi
/*1409f4667*/  mov qword ptr [rbp+450h+var_110+8], r14
/*1409f466e*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f4675*/  mov rax, qword ptr [rbp+450h+var_358]
/*1409f467c*/  mov r12, [rbp+450h+var_348]
/*1409f4683*/  sub rax, r12
/*1409f4686*/  cmp rbx, rax
/*1409f4689*/  ja loc_1409F47EE
/*1409f468f*/  test rbx, rbx
/*1409f4692*/  jz short loc_1409F46AD
/*1409f4694*/ loc_1409F4694: mov rcx, r12
/*1409f4697*/  shl rcx, 5
/*1409f469b*/  add rcx, qword ptr [rbp+450h+var_358+8]
/*1409f46a2*/  mov rdx, r14
/*1409f46a5*/  mov r8, r13
/*1409f46a8*/  call sub_141684120
/*1409f46ad*/ loc_1409F46AD: add r12, rbx
/*1409f46b0*/  mov [rbp+450h+var_348], r12
/*1409f46b7*/  test rsi, rsi
/*1409f46ba*/  jz loc_1409F45C0
/*1409f46c0*/  shl rsi, 5
/*1409f46c4*/  mov r8d, 8
/*1409f46ca*/  mov rcx, r14
/*1409f46cd*/  mov rdx, rsi
/*1409f46d0*/  call sub_140001660
/*1409f46d5*/  jmp loc_1409F45C0
/*1409f46da*/ loc_1409F46DA: mov [rbp+450h+var_99], 1
/*1409f46e1*/ loc_1409F46E1: mov edx, 4
/*1409f46e6*/  lea rcx, aName_7; "name"
/*1409f46ed*/  mov r8, rsi
/*1409f46f0*/  call sub_141433D50
/*1409f46f5*/  nop
/*1409f46f6*/  mov ecx, 1
/*1409f46fb*/  test rax, rax
/*1409f46fe*/  jz short loc_1409F470F
/*1409f4700*/  cmp byte ptr [rax], 3
/*1409f4703*/  jnz short loc_1409F470F
/*1409f4705*/  mov rcx, [rax+10h]
/*1409f4709*/  mov rax, [rax+18h]
/*1409f470d*/  jmp short loc_1409F4711
/*1409f470f*/ loc_1409F470F: xor eax, eax
/*1409f4711*/ loc_1409F4711: mov [rbp+450h+var_440], rcx
/*1409f4715*/  mov [rbp+450h+var_438], rax
/*1409f4719*/  mov [rbp+450h+var_99], 1
/*1409f4720*/  mov edx, 5
/*1409f4725*/  lea rcx, aTools_1; "tools"
/*1409f472c*/  mov r8, rsi
/*1409f472f*/  call sub_141433D50
/*1409f4734*/  nop
/*1409f4735*/  test rax, rax
/*1409f4738*/  jz short loc_1409F473F
/*1409f473a*/  cmp byte ptr [rax], 4
/*1409f473d*/  jz short loc_1409F4747
/*1409f473f*/ loc_1409F473F: mov rsi, rdi
/*1409f4742*/  jmp loc_1409F45C3
/*1409f4747*/ loc_1409F4747: mov rsi, [rbp+450h+var_438]
/*1409f474b*/  cmp rsi, 2
/*1409f474f*/  jnb short loc_1409F477C
/*1409f4751*/  test rsi, rsi
/*1409f4754*/  jnz short loc_1409F478D
/*1409f4756*/  mov qword ptr [rbp+450h+var_390], 0
/*1409f4761*/  mov qword ptr [rbp+450h+var_390+8], 1
/*1409f476c*/  mov [rbp+450h+var_380], 0
/*1409f4777*/  jmp loc_1409F4863
/*1409f477c*/ loc_1409F477C: mov rbx, [rbp+450h+var_440]
/*1409f4780*/  cmp word ptr [rbx+rsi-2], 5F5Fh
/*1409f4787*/  jz loc_1409F481C
/*1409f478d*/ loc_1409F478D: lea rcx, [rbp+450h+var_440]
/*1409f4791*/  mov qword ptr [rbp+450h+var_170], rcx
/*1409f4798*/  lea rcx, sub_14041F680
/*1409f479f*/  mov qword ptr [rbp+450h+var_170+8], rcx
/*1409f47a6*/  mov [rbp+450h+var_99], 1
/*1409f47ad*/  lea rcx, [rbp+450h+var_110]
/*1409f47b4*/  lea rdx, unk_1417A7C86
/*1409f47bb*/  lea r8, [rbp+450h+var_170]
/*1409f47c2*/  mov rsi, rax
/*1409f47c5*/  call sub_14149C0F0
/*1409f47ca*/  nop
/*1409f47cb*/  mov rax, rsi
/*1409f47ce*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f47d6*/  movdqa [rbp+450h+var_390], xmm0
/*1409f47de*/  mov rcx, qword ptr [rbp+450h+var_100]
/*1409f47e5*/  mov [rbp+450h+var_380], rcx
/*1409f47ec*/  jmp short loc_1409F4863
/*1409f47ee*/ loc_1409F47EE: mov [rsp+4D0h+var_4B0], 20h ; ' '
/*1409f47f7*/  mov r9d, 8
/*1409f47fd*/  lea rcx, [rbp+450h+var_358]
/*1409f4804*/  mov rdx, r12
/*1409f4807*/  mov r8, rbx
/*1409f480a*/  call sub_141688D30
/*1409f480f*/  nop
/*1409f4810*/ loc_1409F4810: mov r12, [rbp+450h+var_348]
/*1409f4817*/  jmp loc_1409F4694
/*1409f481c*/ loc_1409F481C: mov r12, rax
/*1409f481f*/  call nullsub_1
/*1409f4824*/  mov edx, 1
/*1409f4829*/  mov rcx, rsi
/*1409f482c*/  call sub_140001650
/*1409f4831*/  test rax, rax
/*1409f4834*/  jz loc_1409F8CB6
/*1409f483a*/  mov r14, rax
/*1409f483d*/  mov rcx, rax
/*1409f4840*/  mov rdx, rbx
/*1409f4843*/  mov r8, rsi
/*1409f4846*/  call sub_141684120
/*1409f484b*/  mov qword ptr [rbp+450h+var_390], rsi
/*1409f4852*/  mov qword ptr [rbp+450h+var_390+8], r14
/*1409f4859*/  mov [rbp+450h+var_380], rsi
/*1409f4860*/  mov rax, r12
/*1409f4863*/ loc_1409F4863: mov r12, [rax+10h]
/*1409f4867*/  mov r14, [rax+18h]
/*1409f486b*/  shl r14, 5
/*1409f486f*/  add r14, r12
/*1409f4872*/  mov [rbp+450h+var_B8], r14
/*1409f4879*/  cmp r12, r14
/*1409f487c*/  jnz short loc_1409F4890
/*1409f487e*/  jmp loc_1409F5568
/*1409f4883*/ loc_1409F4883: add r12, 20h ; ' '
/*1409f4887*/  cmp r12, r14
/*1409f488a*/  jz loc_1409F5568
/*1409f4890*/ loc_1409F4890: mov edx, 4
/*1409f4895*/  lea rcx, aName_7; "name"
/*1409f489c*/  mov r8, r12
/*1409f489f*/  call sub_141433D50
/*1409f48a4*/  nop
/*1409f48a5*/  test rax, rax
/*1409f48a8*/  jz short loc_1409F4883
/*1409f48aa*/  cmp byte ptr [rax], 3
/*1409f48ad*/  jnz short loc_1409F4883
/*1409f48af*/  mov r13, [rax+10h]
/*1409f48b3*/  mov rsi, [rax+18h]
/*1409f48b7*/  mov [rbp+450h+var_480], r13
/*1409f48bb*/  mov [rbp+450h+var_478], rsi
/*1409f48bf*/  mov r8, [rbp+450h+var_380]
/*1409f48c6*/  test r8, r8
/*1409f48c9*/  jz loc_1409F4957
/*1409f48cf*/  cmp rsi, r8
/*1409f48d2*/  jb short loc_1409F48E7
/*1409f48d4*/  mov rcx, qword ptr [rbp+450h+var_390+8]
/*1409f48db*/  mov rdx, r13
/*1409f48de*/  call sub_1416847B0
/*1409f48e3*/  test eax, eax
/*1409f48e5*/  jz short loc_1409F4957
/*1409f48e7*/ loc_1409F48E7: lea rax, [rbp+450h+var_390]
/*1409f48ee*/  mov qword ptr [rbp+450h+var_110], rax
/*1409f48f5*/  lea rax, sub_1400015F0
/*1409f48fc*/  mov qword ptr [rbp+450h+var_110+8], rax
/*1409f4903*/  lea rax, [rbp+450h+var_480]
/*1409f4907*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f490e*/  lea rax, sub_14041F680
/*1409f4915*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f491c*/  lea rcx, [rbp+450h+var_170]
/*1409f4923*/  lea rdx, unk_1417A4F77
/*1409f492a*/  lea r8, [rbp+450h+var_110]
/*1409f4931*/  call sub_14149C0F0
/*1409f4936*/  nop
/*1409f4937*/ loc_1409F4937: movdqu xmm0, [rbp+450h+var_170]
/*1409f493f*/  movdqa [rbp+450h+var_3D0], xmm0
/*1409f4947*/  mov rax, qword ptr [rbp+450h+var_160]
/*1409f494e*/  mov [rbp+450h+var_3C0], rax
/*1409f4955*/  jmp short loc_1409F49B1
/*1409f4957*/ loc_1409F4957: test rsi, rsi
/*1409f495a*/  js loc_1409F7D94
/*1409f4960*/  jz short loc_1409F4990
/*1409f4962*/  call nullsub_1
/*1409f4967*/  mov edx, 1
/*1409f496c*/  mov rcx, rsi
/*1409f496f*/  call sub_140001650
/*1409f4974*/  test rax, rax
/*1409f4977*/  jz loc_1409F8C86
/*1409f497d*/  mov rbx, rax
/*1409f4980*/  mov rcx, rax
/*1409f4983*/  mov rdx, r13
/*1409f4986*/  mov r8, rsi
/*1409f4989*/  call sub_141684120
/*1409f498e*/  jmp short loc_1409F4995
/*1409f4990*/ loc_1409F4990: mov ebx, 1
/*1409f4995*/ loc_1409F4995: mov qword ptr [rbp+450h+var_3D0], rsi
/*1409f499c*/  mov [rbp+450h+var_2F8], rbx
/*1409f49a3*/  mov qword ptr [rbp+450h+var_3D0+8], rbx
/*1409f49aa*/  mov [rbp+450h+var_3C0], rsi
/*1409f49b1*/ loc_1409F49B1: cmp qword ptr [rbp+450h+var_1A0+8], 0
/*1409f49b9*/  jz loc_1409F4AA7
/*1409f49bf*/  mov [rbp+450h+var_A8], r12
/*1409f49c6*/  lea rcx, [rbp+450h+var_190]
/*1409f49cd*/  mov rdx, r13
/*1409f49d0*/  mov r8, rsi
/*1409f49d3*/  call sub_1403795A0
/*1409f49d8*/  mov r14, rax
/*1409f49db*/  shr rax, 39h
/*1409f49df*/  mov rbx, qword ptr [rbp+450h+var_1B0]
/*1409f49e6*/  mov rcx, qword ptr [rbp+450h+var_1B0+8]
/*1409f49ed*/  movd xmm0, eax
/*1409f49f1*/  punpcklbw xmm0, xmm0
/*1409f49f5*/  pshuflw xmm0, xmm0, 0
/*1409f49fa*/  pshufd xmm9, xmm0, 44h ; 'D'
/*1409f4a00*/  xor edx, edx
/*1409f4a02*/ loc_1409F4A02: and r14, rcx
/*1409f4a05*/  movdqu xmm10, xmmword ptr [rbx+r14]
/*1409f4a0b*/  movdqa xmm0, xmm10
/*1409f4a10*/  pcmpeqb xmm0, xmm9
/*1409f4a15*/  pmovmskb r12d, xmm0
/*1409f4a1a*/  test r12d, r12d
/*1409f4a1d*/  jz short loc_1409F4A82
/*1409f4a1f*/  mov [rbp+450h+var_220], rbx
/*1409f4a26*/  mov [rbp+450h+var_1B8], rcx
/*1409f4a2d*/  mov [rbp+450h+var_300], rdx
/*1409f4a34*/ loc_1409F4A34: tzcnt eax, r12d
/*1409f4a39*/  add rax, r14
/*1409f4a3c*/  and rax, rcx
/*1409f4a3f*/  shl rax, 5
/*1409f4a43*/  sub rbx, rax
/*1409f4a46*/  cmp rsi, [rbx-10h]
/*1409f4a4a*/  jnz short loc_1409F4A5F
/*1409f4a4c*/  mov rdx, [rbx-18h]
/*1409f4a50*/  mov rcx, r13
/*1409f4a53*/  mov r8, rsi
/*1409f4a56*/  call sub_1416847B0
/*1409f4a5b*/  test eax, eax
/*1409f4a5d*/  jz short loc_1409F4AB0
/*1409f4a5f*/ loc_1409F4A5F: lea eax, [r12-1]
/*1409f4a64*/  and ax, r12w
/*1409f4a68*/  mov r12d, eax
/*1409f4a6b*/  mov rbx, [rbp+450h+var_220]
/*1409f4a72*/  mov rcx, [rbp+450h+var_1B8]
/*1409f4a79*/  mov rdx, [rbp+450h+var_300]
/*1409f4a80*/  jnz short loc_1409F4A34
/*1409f4a82*/ loc_1409F4A82: pcmpeqb xmm10, xmm8
/*1409f4a87*/  pmovmskb eax, xmm10
/*1409f4a8c*/  test eax, eax
/*1409f4a8e*/  mov r12, [rbp+450h+var_A8]
/*1409f4a95*/  jnz short loc_1409F4AA7
/*1409f4a97*/  add r14, rdx
/*1409f4a9a*/  add r14, 10h
/*1409f4a9e*/  add rdx, 10h
/*1409f4aa2*/  jmp loc_1409F4A02
/*1409f4aa7*/ loc_1409F4AA7: mov r14, [rbp+450h+var_B8]
/*1409f4aae*/  jmp short loc_1409F4AC5
/*1409f4ab0*/ loc_1409F4AB0: cmp qword ptr [rbx-8], 2
/*1409f4ab5*/  mov r12, [rbp+450h+var_A8]
/*1409f4abc*/  mov r14, [rbp+450h+var_B8]
/*1409f4ac3*/  jnb short loc_1409F4B2F
/*1409f4ac5*/ loc_1409F4AC5: mov r8, [rbp+450h+var_380]
/*1409f4acc*/  test r8, r8
/*1409f4acf*/  jz short loc_1409F4B2F
/*1409f4ad1*/  cmp rsi, r8
/*1409f4ad4*/  jnb short loc_1409F4AE2
/*1409f4ad6*/  test rsi, rsi
/*1409f4ad9*/  jnz short loc_1409F4AF5
/*1409f4adb*/  mov ebx, 1
/*1409f4ae0*/  jmp short loc_1409F4B21
/*1409f4ae2*/ loc_1409F4AE2: mov rcx, qword ptr [rbp+450h+var_390+8]
/*1409f4ae9*/  mov rdx, r13
/*1409f4aec*/  call sub_1416847B0
/*1409f4af1*/  test eax, eax
/*1409f4af3*/  jz short loc_1409F4B2F
/*1409f4af5*/ loc_1409F4AF5: call nullsub_1
/*1409f4afa*/  mov edx, 1
/*1409f4aff*/  mov rcx, rsi
/*1409f4b02*/  call sub_140001650
/*1409f4b07*/  test rax, rax
/*1409f4b0a*/  jz loc_1409F8C34
/*1409f4b10*/  mov rbx, rax
/*1409f4b13*/  mov rcx, rax
/*1409f4b16*/  mov rdx, r13
/*1409f4b19*/  mov r8, rsi
/*1409f4b1c*/  call sub_141684120
/*1409f4b21*/ loc_1409F4B21: mov qword ptr [rbp+450h+var_410], rsi
/*1409f4b25*/  mov qword ptr [rbp+450h+var_410+8], rbx
/*1409f4b29*/  mov [rbp+450h+var_400], rsi
/*1409f4b2d*/  jmp short loc_1409F4B4B
/*1409f4b2f*/ loc_1409F4B2F: mov [rbp+450h+var_1CA], 1
/*1409f4b36*/ loc_1409F4B36: lea rcx, [rbp+450h+var_410]
/*1409f4b3a*/  lea rdx, [rbp+450h+var_3D0]
/*1409f4b41*/  call sub_14149C500
/*1409f4b46*/  nop
/*1409f4b47*/  mov rsi, [rbp+450h+var_400]
/*1409f4b4b*/ loc_1409F4B4B: cmp rsi, [rbp+450h+var_3C0]
/*1409f4b52*/  jnz short loc_1409F4B6F
/*1409f4b54*/  mov rdx, qword ptr [rbp+450h+var_3D0+8]
/*1409f4b5b*/  mov rcx, qword ptr [rbp+450h+var_410+8]
/*1409f4b5f*/  mov r8, rsi
/*1409f4b62*/  call sub_1416847B0
/*1409f4b67*/  test eax, eax
/*1409f4b69*/  jz loc_1409F4E48
/*1409f4b6f*/ loc_1409F4B6F: mov [rbp+450h+var_AB], 1
/*1409f4b76*/  mov [rbp+450h+var_AC], 1
/*1409f4b7d*/ loc_1409F4B7D: lea rcx, [rbp+450h+var_170]
/*1409f4b84*/  lea rdx, [rbp+450h+var_410]
/*1409f4b88*/  call sub_14149C500
/*1409f4b8d*/  nop
/*1409f4b8e*/  mov rax, [rbp+450h+var_3C0]
/*1409f4b95*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f4b9c*/  movdqa xmm0, [rbp+450h+var_3D0]
/*1409f4ba4*/  movdqa [rbp+450h+var_110], xmm0
/*1409f4bac*/  mov [rbp+450h+var_AB], 0
/*1409f4bb3*/  mov [rbp+450h+var_AC], 1
/*1409f4bba*/  lea rcx, [rbp+450h+var_140]
/*1409f4bc1*/  lea rdx, [rbp+450h+var_280]
/*1409f4bc8*/  lea r8, [rbp+450h+var_170]
/*1409f4bcf*/  lea r9, [rbp+450h+var_110]
/*1409f4bd6*/  call sub_140470E80
/*1409f4bdb*/  nop
/*1409f4bdc*/  mov rdx, qword ptr [rbp+450h+var_140]
/*1409f4be3*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1409f4be7*/  jz short loc_1409F4C00
/*1409f4be9*/  test rdx, rdx
/*1409f4bec*/  jz short loc_1409F4C00
/*1409f4bee*/  mov rcx, qword ptr [rbp+450h+var_140+8]
/*1409f4bf5*/  mov r8d, 1
/*1409f4bfb*/  call sub_140001660
/*1409f4c00*/ loc_1409F4C00: xor ebx, ebx
/*1409f4c02*/ loc_1409F4C02: mov [rbp+450h+var_AB], bl
/*1409f4c08*/  mov [rbp+450h+var_AC], 1
/*1409f4c0f*/  mov edx, 0Bh
/*1409f4c14*/  lea rcx, aDescription_2; "description"
/*1409f4c1b*/  mov r8, r12
/*1409f4c1e*/  call sub_141433D50
/*1409f4c23*/  nop
/*1409f4c24*/  test rax, rax
/*1409f4c27*/  jz short loc_1409F4C34
/*1409f4c29*/  cmp byte ptr [rax], 3
/*1409f4c2c*/  jnz short loc_1409F4C38
/*1409f4c2e*/  mov rsi, [rax+10h]
/*1409f4c32*/  jmp short loc_1409F4C3A
/*1409f4c34*/ loc_1409F4C34: xor esi, esi
/*1409f4c36*/  jmp short loc_1409F4C3E
/*1409f4c38*/ loc_1409F4C38: xor esi, esi
/*1409f4c3a*/ loc_1409F4C3A: mov r13, [rax+18h]
/*1409f4c3e*/ loc_1409F4C3E: mov [rbp+450h+var_AB], bl
/*1409f4c44*/  mov [rbp+450h+var_AC], 1
/*1409f4c4b*/  mov edx, 0Ah
/*1409f4c50*/  lea rcx, aParameters_0; "parameters"
/*1409f4c57*/  mov r8, r12
/*1409f4c5a*/  call sub_141433D50
/*1409f4c5f*/  nop
/*1409f4c60*/  test rax, rax
/*1409f4c63*/  mov dword ptr [rbp+450h+var_A8], ebx
/*1409f4c69*/  jz short loc_1409F4C9A
/*1409f4c6b*/  movzx ecx, byte ptr [rax]
/*1409f4c6e*/  lea rdx, jpt_1409F4C7C
/*1409f4c75*/  movsxd rcx, ds:(jpt_1409F4C7C - 1417AAF14h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f4c79*/  add rcx, rdx
/*1409f4c7c*/  jmp rcx; switch jump  // switch jump
/*1409f4c7e*/ loc_1409F4C7E: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F4C7C cases 1,2  // jumptable 00000001409F4C7C cases 1,2
/*1409f4c82*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f4c86*/  movaps [rbp+450h+var_100], xmm1
/*1409f4c8d*/  movdqa [rbp+450h+var_110], xmm0
/*1409f4c95*/  jmp loc_1409F4F01
/*1409f4c9a*/ loc_1409F4C9A: mov qword ptr [rbp+450h+var_200], 0
/*1409f4ca5*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f4cb0*/  call nullsub_1
/*1409f4cb5*/  mov ecx, 4
/*1409f4cba*/  mov edx, 1
/*1409f4cbf*/  call sub_140001650
/*1409f4cc4*/  test rax, rax
/*1409f4cc7*/  jz loc_1409F8BA1
/*1409f4ccd*/  mov dword ptr [rax], 65707974h
/*1409f4cd3*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f4cde*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f4ce5*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f4cf0*/  call nullsub_1
/*1409f4cf5*/  mov ecx, 6
/*1409f4cfa*/  mov edx, 1
/*1409f4cff*/  call sub_140001650
/*1409f4d04*/  test rax, rax
/*1409f4d07*/  mov [rbp+450h+var_220], rax
/*1409f4d0e*/  jz loc_1409F8BB6
/*1409f4d14*/  mov word ptr [rax+4], 7463h
/*1409f4d1a*/  mov dword ptr [rax], 656A626Fh
/*1409f4d20*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f4d27*/  mov qword ptr [rbp+450h+var_110+8], 6
/*1409f4d32*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f4d39*/  mov qword ptr [rbp+450h+var_100+8], 6
/*1409f4d44*/ loc_1409F4D44: lea rcx, [rbp+450h+var_170]
/*1409f4d4b*/  lea rdx, [rbp+450h+var_200]
/*1409f4d52*/  lea r8, [rbp+450h+var_140]
/*1409f4d59*/  lea r9, [rbp+450h+var_110]
/*1409f4d60*/  call sub_140307860
/*1409f4d65*/  nop
/*1409f4d66*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f4d6d*/  jz short loc_1409F4D7C
/*1409f4d6f*/ loc_1409F4D6F: lea rcx, [rbp+450h+var_170]
/*1409f4d76*/  call sub_1400104F0
/*1409f4d7b*/  nop
/*1409f4d7c*/ loc_1409F4D7C: call nullsub_1
/*1409f4d81*/  mov ecx, 0Ah
/*1409f4d86*/  mov edx, 1
/*1409f4d8b*/  call sub_140001650
/*1409f4d90*/  test rax, rax
/*1409f4d93*/  jz loc_1409F8BCB
/*1409f4d99*/  mov rcx, 69747265706F7270h
/*1409f4da3*/  mov [rax], rcx
/*1409f4da6*/  mov word ptr [rax+8], 7365h
/*1409f4dac*/  mov qword ptr [rbp+450h+var_140], 0Ah
/*1409f4db7*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f4dbe*/  mov qword ptr [rbp+450h+var_130], 0Ah
/*1409f4dc9*/  mov qword ptr [rbp+450h+var_110+8], 0
/*1409f4dd4*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f4ddf*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f4de6*/  lea rcx, [rbp+450h+var_170]
/*1409f4ded*/  lea rdx, [rbp+450h+var_200]
/*1409f4df4*/  lea r8, [rbp+450h+var_140]
/*1409f4dfb*/  lea r9, [rbp+450h+var_110]
/*1409f4e02*/  call sub_140307860
/*1409f4e07*/  nop
/*1409f4e08*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f4e0f*/  jz short loc_1409F4E1E
/*1409f4e11*/  lea rcx, [rbp+450h+var_170]
/*1409f4e18*/  call sub_1400104F0
/*1409f4e1d*/  nop
/*1409f4e1e*/ loc_1409F4E1E: mov rax, qword ptr [rbp+450h+var_1F0]
/*1409f4e25*/  lea rcx, [rbp+450h+var_2E0+8]
/*1409f4e2c*/  mov [rcx+10h], rax
/*1409f4e30*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f4e38*/  movdqu xmmword ptr [rcx], xmm0
/*1409f4e3c*/  mov byte ptr [rbp+450h+var_2E0], 5
/*1409f4e43*/  jmp loc_1409F4F57
/*1409f4e48*/ loc_1409F4E48: mov bl, 1
/*1409f4e4a*/  jmp loc_1409F4C02
/*1409f4e4f*/ loc_1409F4E4F: mov rdx, [rax+10h]; jumptable 00000001409F4C7C case 4  // jumptable 00000001409F4C7C case 4
/*1409f4e53*/  mov r8, [rax+18h]
/*1409f4e57*/  mov [rbp+450h+var_AB], bl
/*1409f4e5d*/  mov [rbp+450h+var_AC], 1
/*1409f4e64*/ loc_1409F4E64: lea rcx, [rbp+450h+var_110+8]
/*1409f4e6b*/  call sub_1402CE260
/*1409f4e70*/  nop
/*1409f4e71*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f4e78*/  jmp loc_1409F4F01
/*1409f4e7d*/ loc_1409F4E7D: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F4C7C case 0  // jumptable 00000001409F4C7C case 0
/*1409f4e84*/  jmp short loc_1409F4F01
/*1409f4e86*/ loc_1409F4E86: add rax, 8; jumptable 00000001409F4C7C case 3  // jumptable 00000001409F4C7C case 3
/*1409f4e8a*/  mov [rbp+450h+var_AB], bl
/*1409f4e90*/  mov [rbp+450h+var_AC], 1
/*1409f4e97*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4e9e*/  mov rdx, rax
/*1409f4ea1*/  call sub_14149C500
/*1409f4ea6*/  nop
/*1409f4ea7*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f4eae*/  jmp short loc_1409F4F01
/*1409f4eb0*/ loc_1409F4EB0: cmp qword ptr [rax+18h], 0; jumptable 00000001409F4C7C case 5  // jumptable 00000001409F4C7C case 5
/*1409f4eb5*/  jz short loc_1409F4EE4
/*1409f4eb7*/  mov rdx, [rax+8]
/*1409f4ebb*/  test rdx, rdx
/*1409f4ebe*/  jz loc_1409F84B2
/*1409f4ec4*/  mov r8, [rax+10h]
/*1409f4ec8*/  mov [rbp+450h+var_AB], bl
/*1409f4ece*/  mov [rbp+450h+var_AC], 1
/*1409f4ed5*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4edc*/  call sub_1402CCD80
/*1409f4ee1*/  nop
/*1409f4ee2*/  jmp short loc_1409F4EFA
/*1409f4ee4*/ loc_1409F4EE4: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f4eef*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f4efa*/ loc_1409F4EFA: mov byte ptr [rbp+450h+var_110], 5
/*1409f4f01*/ loc_1409F4F01: movzx eax, byte ptr [rbp+450h+var_110]
/*1409f4f08*/  mov rcx, qword ptr [rbp+450h+var_110+1]
/*1409f4f0f*/  mov edx, dword ptr [rbp+450h+var_110+9]
/*1409f4f15*/  movzx r8d, word ptr [rbp+450h+var_110+0Dh]
/*1409f4f1d*/  movzx r9d, byte ptr [rbp+450h+var_110+0Fh]
/*1409f4f25*/  movdqa xmm0, [rbp+450h+var_100]
/*1409f4f2d*/  movdqa [rbp+450h+var_2D0], xmm0
/*1409f4f35*/  mov byte ptr [rbp+450h+var_2E0], al
/*1409f4f3b*/  mov qword ptr [rbp+450h+var_2E0+1], rcx
/*1409f4f42*/  mov dword ptr [rbp+450h+var_2E0+9], edx
/*1409f4f48*/  mov word ptr [rbp+450h+var_2E0+0Dh], r8w
/*1409f4f50*/  mov byte ptr [rbp+450h+var_2E0+0Fh], r9b
/*1409f4f57*/ loc_1409F4F57: mov [rbp+450h+var_1DE], 1
/*1409f4f5e*/  mov [rbp+450h+var_1DF], 1
/*1409f4f65*/ loc_1409F4F65: lea rcx, [rbp+450h+var_2E0]
/*1409f4f6c*/  call sub_1409EA6C0
/*1409f4f71*/  nop
/*1409f4f72*/  mov qword ptr [rbp+450h+var_430], 0
/*1409f4f7a*/  mov [rbp+450h+var_420], 0
/*1409f4f82*/  call nullsub_1
/*1409f4f87*/  mov ecx, 4
/*1409f4f8c*/  mov edx, 1
/*1409f4f91*/  call sub_140001650
/*1409f4f96*/  test rax, rax
/*1409f4f99*/  setz byte ptr [rbp+450h+var_220]
/*1409f4fa0*/  jz loc_1409F89D0
/*1409f4fa6*/  mov dword ptr [rax], 656D616Eh
/*1409f4fac*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f4fb7*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f4fbe*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f4fc9*/  mov rax, [rbp+450h+var_400]
/*1409f4fcd*/  lea rcx, [rbp+450h+var_110+8]
/*1409f4fd4*/  mov [rcx+10h], rax
/*1409f4fd8*/  movdqu xmm0, [rbp+450h+var_410]
/*1409f4fdd*/  movdqu xmmword ptr [rcx], xmm0
/*1409f4fe1*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f4fe8*/  mov [rbp+450h+var_9A], 1
/*1409f4fef*/  mov [rbp+450h+var_9B], 1
/*1409f4ff6*/ loc_1409F4FF6: lea rcx, [rbp+450h+var_170]
/*1409f4ffd*/  lea rdx, [rbp+450h+var_430]
/*1409f5001*/  lea r8, [rbp+450h+var_140]
/*1409f5008*/  lea r9, [rbp+450h+var_110]
/*1409f500f*/  call sub_140307860
/*1409f5014*/  nop
/*1409f5015*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f501c*/  jz short loc_1409F5039
/*1409f501e*/  mov [rbp+450h+var_9A], 1
/*1409f5025*/  mov [rbp+450h+var_9B], 1
/*1409f502c*/  lea rcx, [rbp+450h+var_170]
/*1409f5033*/  call sub_1400104F0
/*1409f5038*/  nop
/*1409f5039*/ loc_1409F5039: test rsi, rsi
/*1409f503c*/  jz loc_1409F5142
/*1409f5042*/  call nullsub_1
/*1409f5047*/  mov ecx, 0Bh
/*1409f504c*/  mov edx, 1
/*1409f5051*/  call sub_140001650
/*1409f5056*/  test rax, rax
/*1409f5059*/  mov rdx, [rbp+450h+var_208]
/*1409f5060*/  jz loc_1409F8AB7
/*1409f5066*/  mov rcx, 7470697263736564h
/*1409f5070*/  mov [rax], rcx
/*1409f5073*/  mov dword ptr [rax+7], 6E6F6974h
/*1409f507a*/  mov qword ptr [rbp+450h+var_140], 0Bh
/*1409f5085*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f508c*/  mov qword ptr [rbp+450h+var_130], 0Bh
/*1409f5097*/  test r13, r13
/*1409f509a*/  js loc_1409F7DA8
/*1409f50a0*/  jz short loc_1409F50D0
/*1409f50a2*/  call nullsub_1
/*1409f50a7*/  mov edx, 1
/*1409f50ac*/  mov rcx, r13
/*1409f50af*/  call sub_140001650
/*1409f50b4*/  test rax, rax
/*1409f50b7*/  jz loc_1409F8C97
/*1409f50bd*/  mov rbx, rax
/*1409f50c0*/  mov rcx, rax
/*1409f50c3*/  mov rdx, rsi
/*1409f50c6*/  mov r8, r13
/*1409f50c9*/  call sub_141684120
/*1409f50ce*/  jmp short loc_1409F50D5
/*1409f50d0*/ loc_1409F50D0: mov ebx, 1
/*1409f50d5*/ loc_1409F50D5: mov qword ptr [rbp+450h+var_110+8], r13
/*1409f50dc*/  mov [rbp+450h+var_208], rbx
/*1409f50e3*/  mov qword ptr [rbp+450h+var_100], rbx
/*1409f50ea*/  mov qword ptr [rbp+450h+var_100+8], r13
/*1409f50f1*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f50f8*/  mov [rbp+450h+var_23D], 0
/*1409f50ff*/ loc_1409F50FF: lea rcx, [rbp+450h+var_170]
/*1409f5106*/  lea rdx, [rbp+450h+var_430]
/*1409f510a*/  lea r8, [rbp+450h+var_140]
/*1409f5111*/  lea r9, [rbp+450h+var_110]
/*1409f5118*/  call sub_140307860
/*1409f511d*/  nop
/*1409f511e*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f5125*/  jz short loc_1409F5142
/*1409f5127*/  mov [rbp+450h+var_9A], 1
/*1409f512e*/  mov [rbp+450h+var_9B], 1
/*1409f5135*/ loc_1409F5135: lea rcx, [rbp+450h+var_170]
/*1409f513c*/  call sub_1400104F0
/*1409f5141*/  nop
/*1409f5142*/ loc_1409F5142: call nullsub_1
/*1409f5147*/  mov ecx, 0Ah
/*1409f514c*/  mov edx, 1
/*1409f5151*/  call sub_140001650
/*1409f5156*/  test rax, rax
/*1409f5159*/  jz loc_1409F8A4E
/*1409f515f*/  mov rcx, 6574656D61726170h
/*1409f5169*/  mov [rax], rcx
/*1409f516c*/  mov word ptr [rax+8], 7372h
/*1409f5172*/  mov qword ptr [rbp+450h+var_140], 0Ah
/*1409f517d*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f5184*/  mov qword ptr [rbp+450h+var_130], 0Ah
/*1409f518f*/  movdqa xmm0, [rbp+450h+var_2E0]
/*1409f5197*/  movaps xmm1, [rbp+450h+var_2D0]
/*1409f519e*/  movaps [rbp+450h+var_100], xmm1
/*1409f51a5*/  movdqa [rbp+450h+var_110], xmm0
/*1409f51ad*/  mov [rbp+450h+var_9A], 1
/*1409f51b4*/  mov [rbp+450h+var_9B], 0
/*1409f51bb*/  lea rcx, [rbp+450h+var_170]
/*1409f51c2*/  lea rdx, [rbp+450h+var_430]
/*1409f51c6*/  lea r8, [rbp+450h+var_140]
/*1409f51cd*/  lea r9, [rbp+450h+var_110]
/*1409f51d4*/  call sub_140307860
/*1409f51d9*/  nop
/*1409f51da*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f51e1*/  jz short loc_1409F51FE
/*1409f51e3*/  mov [rbp+450h+var_9A], 1
/*1409f51ea*/  mov [rbp+450h+var_9B], 0
/*1409f51f1*/  lea rcx, [rbp+450h+var_170]
/*1409f51f8*/  call sub_1400104F0
/*1409f51fd*/  nop
/*1409f51fe*/ loc_1409F51FE: mov [rbp+450h+var_9A], 1
/*1409f5205*/  mov [rbp+450h+var_9B], 0
/*1409f520c*/  mov edx, 6
/*1409f5211*/  lea rcx, aStrict_0; "strict"
/*1409f5218*/  mov r8, r12
/*1409f521b*/  call sub_141433D50
/*1409f5220*/  nop
/*1409f5221*/  test rax, rax
/*1409f5224*/  jz loc_1409F52DF
/*1409f522a*/  cmp byte ptr [rax], 1
/*1409f522d*/  jnz loc_1409F52DF
/*1409f5233*/  movzx eax, byte ptr [rax+1]
/*1409f5237*/  and al, 1
/*1409f5239*/  jz loc_1409F52DF
/*1409f523f*/  call nullsub_1
/*1409f5244*/  mov ecx, 6
/*1409f5249*/  mov edx, 1
/*1409f524e*/  call sub_140001650
/*1409f5253*/  test rax, rax
/*1409f5256*/  jz loc_1409F8C63
/*1409f525c*/  mov word ptr [rax+4], 7463h
/*1409f5262*/  mov dword ptr [rax], 69727473h
/*1409f5268*/  mov qword ptr [rbp+450h+var_140], 6
/*1409f5273*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f527a*/  mov qword ptr [rbp+450h+var_130], 6
/*1409f5285*/  mov word ptr [rbp+450h+var_110], 101h
/*1409f528e*/  mov [rbp+450h+var_9A], 1
/*1409f5295*/  mov [rbp+450h+var_9B], 0
/*1409f529c*/  lea rcx, [rbp+450h+var_170]
/*1409f52a3*/  lea rdx, [rbp+450h+var_430]
/*1409f52a7*/  lea r8, [rbp+450h+var_140]
/*1409f52ae*/  lea r9, [rbp+450h+var_110]
/*1409f52b5*/  call sub_140307860
/*1409f52ba*/  nop
/*1409f52bb*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f52c2*/  jz short loc_1409F52DF
/*1409f52c4*/  mov [rbp+450h+var_9A], 1
/*1409f52cb*/  mov [rbp+450h+var_9B], 0
/*1409f52d2*/  lea rcx, [rbp+450h+var_170]
/*1409f52d9*/  call sub_1400104F0
/*1409f52de*/  nop
/*1409f52df*/ loc_1409F52DF: mov qword ptr [rbp+450h+var_3F0], 0
/*1409f52e7*/  mov [rbp+450h+var_3E0], 0
/*1409f52ef*/  call nullsub_1
/*1409f52f4*/  mov ecx, 4
/*1409f52f9*/  mov edx, 1
/*1409f52fe*/  call sub_140001650
/*1409f5303*/  test rax, rax
/*1409f5306*/  jz loc_1409F8A71
/*1409f530c*/  mov dword ptr [rax], 65707974h
/*1409f5312*/  mov qword ptr [rbp+450h+var_140], 4
/*1409f531d*/  mov qword ptr [rbp+450h+var_140+8], rax
/*1409f5324*/  mov qword ptr [rbp+450h+var_130], 4
/*1409f532f*/  call nullsub_1
/*1409f5334*/  mov ecx, 8
/*1409f5339*/  mov edx, 1
/*1409f533e*/  call sub_140001650
/*1409f5343*/  test rax, rax
/*1409f5346*/  mov [rbp+450h+var_1B8], rax
/*1409f534d*/  jz loc_1409F8A1D
/*1409f5353*/  mov r10, rax
/*1409f5356*/  mov rax, 6E6F6974636E7566h
/*1409f5360*/  mov [r10], rax
/*1409f5363*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f536a*/  mov qword ptr [rbp+450h+var_110+8], 8
/*1409f5375*/  mov qword ptr [rbp+450h+var_100], r10
/*1409f537c*/  mov qword ptr [rbp+450h+var_100+8], 8
/*1409f5387*/ loc_1409F5387: lea rcx, [rbp+450h+var_170]
/*1409f538e*/  lea rdx, [rbp+450h+var_3F0]
/*1409f5392*/  lea r8, [rbp+450h+var_140]
/*1409f5399*/  lea r9, [rbp+450h+var_110]
/*1409f53a0*/  call sub_140307860
/*1409f53a5*/  nop
/*1409f53a6*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f53ad*/  jz short loc_1409F53C3
/*1409f53af*/  mov [rbp+450h+var_111], 1
/*1409f53b6*/ loc_1409F53B6: lea rcx, [rbp+450h+var_170]
/*1409f53bd*/  call sub_1400104F0
/*1409f53c2*/  nop
/*1409f53c3*/ loc_1409F53C3: call nullsub_1
/*1409f53c8*/  mov ecx, 8
/*1409f53cd*/  mov edx, 1
/*1409f53d2*/  call sub_140001650
/*1409f53d7*/  test rax, rax
/*1409f53da*/  jz loc_1409F8A32
/*1409f53e0*/  mov rcx, 6E6F6974636E7566h
/*1409f53ea*/  mov [rax], rcx
/*1409f53ed*/  mov qword ptr [rbp+450h+var_328], 8
/*1409f53f8*/  mov qword ptr [rbp+450h+var_328+8], rax
/*1409f53ff*/  mov [rbp+450h+var_318], 8
/*1409f540a*/  mov rax, [rbp+450h+var_420]
/*1409f540e*/  lea rcx, [rbp+450h+var_110+8]
/*1409f5415*/  mov [rcx+10h], rax
/*1409f5419*/  movdqu xmm0, [rbp+450h+var_430]
/*1409f541e*/  movdqu xmmword ptr [rcx], xmm0
/*1409f5422*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f5429*/  mov [rbp+450h+var_1CB], 1
/*1409f5430*/ loc_1409F5430: lea rcx, [rbp+450h+var_170]
/*1409f5437*/  lea rdx, [rbp+450h+var_110]
/*1409f543e*/  call sub_140B842D0
/*1409f5443*/  nop
/*1409f5444*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f544b*/  jz loc_1409F814D
/*1409f5451*/  movdqu xmm0, [rbp+450h+var_170]
/*1409f5459*/  movups xmm1, [rbp+450h+var_160]
/*1409f5460*/  movaps [rbp+450h+var_130], xmm1
/*1409f5467*/  movdqa [rbp+450h+var_140], xmm0
/*1409f546f*/  mov [rbp+450h+var_1CB], 0
/*1409f5476*/  lea rcx, [rbp+450h+var_170]
/*1409f547d*/  lea rdx, [rbp+450h+var_3F0]
/*1409f5481*/  lea r8, [rbp+450h+var_328]
/*1409f5488*/  lea r9, [rbp+450h+var_140]
/*1409f548f*/  call sub_140307860
/*1409f5494*/  nop
/*1409f5495*/  cmp byte ptr [rbp+450h+var_170], 0FFh
/*1409f549c*/  jz short loc_1409F54AB
/*1409f549e*/ loc_1409F549E: lea rcx, [rbp+450h+var_170]
/*1409f54a5*/  call sub_1400104F0
/*1409f54aa*/  nop
/*1409f54ab*/ loc_1409F54AB: mov [rbp+450h+var_111], 0
/*1409f54b2*/ loc_1409F54B2: lea rcx, [rbp+450h+var_110]
/*1409f54b9*/  call sub_1400104F0
/*1409f54be*/  nop
/*1409f54bf*/  mov rax, [rbp+450h+var_3E0]
/*1409f54c3*/  lea rcx, [rbp+450h+var_200+8]
/*1409f54ca*/  mov [rcx+10h], rax
/*1409f54ce*/  movdqu xmm0, [rbp+450h+var_3F0]
/*1409f54d3*/  movdqu xmmword ptr [rcx], xmm0
/*1409f54d7*/  mov byte ptr [rbp+450h+var_200], 5
/*1409f54de*/  mov rsi, [rbp+450h+var_348]
/*1409f54e5*/  cmp rsi, qword ptr [rbp+450h+var_358]
/*1409f54ec*/  jnz short loc_1409F54FB
/*1409f54ee*/ loc_1409F54EE: lea rcx, [rbp+450h+var_358]
/*1409f54f5*/  call sub_1416890A0
/*1409f54fa*/  nop
/*1409f54fb*/ loc_1409F54FB: mov rax, qword ptr [rbp+450h+var_358+8]
/*1409f5502*/  mov rcx, rsi
/*1409f5505*/  shl rcx, 5
/*1409f5509*/  movdqu xmm0, [rbp+450h+var_200]
/*1409f5511*/  movups xmm1, [rbp+450h+var_1F0]
/*1409f5518*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1409f551d*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f5522*/  inc rsi
/*1409f5525*/  mov [rbp+450h+var_348], rsi
/*1409f552c*/  cmp byte ptr [rbp+450h+var_A8], 0
/*1409f5533*/  jz loc_1409F4883
/*1409f5539*/  mov rdx, qword ptr [rbp+450h+var_3D0]
/*1409f5540*/  test rdx, rdx
/*1409f5543*/  jz loc_1409F4883
/*1409f5549*/  mov rcx, qword ptr [rbp+450h+var_3D0+8]
/*1409f5550*/  mov r8d, 1
/*1409f5556*/  call sub_140001660
/*1409f555b*/  add r12, 20h ; ' '
/*1409f555f*/  cmp r12, r14
/*1409f5562*/  jnz loc_1409F4890
/*1409f5568*/ loc_1409F5568: mov rdx, qword ptr [rbp+450h+var_390]
/*1409f556f*/  test rdx, rdx
/*1409f5572*/  jz short loc_1409F5586
/*1409f5574*/  mov rcx, qword ptr [rbp+450h+var_390+8]
/*1409f557b*/  mov r8d, 1
/*1409f5581*/  call sub_140001660
/*1409f5586*/ loc_1409F5586: mov rsi, rdi
/*1409f5589*/  jmp loc_1409F45C3
/*1409f558e*/ loc_1409F558E: mov rax, [rbp+450h+var_348]
/*1409f5595*/  mov [rbp+450h+var_3E0], rax
/*1409f5599*/  movdqu xmm0, [rbp+450h+var_358]
/*1409f55a1*/  movdqa [rbp+450h+var_3F0], xmm0
/*1409f55a6*/  mov [rbp+450h+var_1DD], 1
/*1409f55ad*/ loc_1409F55AD: call sub_141470CD0
/*1409f55b2*/  nop
/*1409f55b3*/  cmp byte ptr [rax+10h], 1
/*1409f55b7*/  jnz loc_1409F7E8F
/*1409f55bd*/  mov rcx, [rax]
/*1409f55c0*/  mov rdx, [rax+8]
/*1409f55c4*/ loc_1409F55C4: lea r8, [rcx+1]
/*1409f55c8*/  mov [rax], r8
/*1409f55cb*/  movdqa [rbp+450h+var_100], xmm6
/*1409f55d3*/  movdqa [rbp+450h+var_110], xmm7
/*1409f55db*/  mov [rbp+450h+var_F0], rcx
/*1409f55e2*/  mov [rbp+450h+var_E8], rdx
/*1409f55e9*/  mov rsi, [rbp+450h+var_3E0]
/*1409f55ed*/  mov r12, rsi
/*1409f55f0*/  shl r12, 5
/*1409f55f4*/  test rsi, rsi
/*1409f55f7*/  jz short loc_1409F562A
/*1409f55f9*/  call nullsub_1
/*1409f55fe*/  mov edx, 8
/*1409f5603*/  mov rcx, r12
/*1409f5606*/  call sub_140001650
/*1409f560b*/  test rax, rax
/*1409f560e*/  jnz short loc_1409F562F
/*1409f5610*/  mov [rbp+450h+var_23C], 1
/*1409f5617*/ loc_1409F5617: mov ecx, 8
/*1409f561c*/  mov rdx, r12
/*1409f561f*/  call sub_1416C2D4B
/*1409f5625*/  jmp loc_1409F8D2B
/*1409f562a*/ loc_1409F562A: mov eax, 8
/*1409f562f*/ loc_1409F562F: mov qword ptr [rbp+450h+var_328], rsi
/*1409f5636*/  mov qword ptr [rbp+450h+var_328+8], rax
/*1409f563d*/  mov [rbp+450h+var_318], 0
/*1409f5648*/  mov rax, qword ptr [rbp+450h+var_3F0]
/*1409f564c*/  mov rcx, qword ptr [rbp+450h+var_3F0+8]
/*1409f5650*/  add r12, rcx
/*1409f5653*/  mov qword ptr [rbp+450h+var_140], rcx
/*1409f565a*/  mov qword ptr [rbp+450h+var_140+8], rcx
/*1409f5661*/  mov [rbp+450h+var_220], rax
/*1409f5668*/  mov qword ptr [rbp+450h+var_130], rax
/*1409f566f*/  mov qword ptr [rbp+450h+var_130+8], r12
/*1409f5676*/  lea rdi, [rbp+450h+var_170+1]
/*1409f567d*/  lea rsi, aFunction_0; "function"
/*1409f5684*/  lea rbx, [rbp+450h+var_170]
/*1409f568b*/  lea r15, aName_7; "name"
/*1409f5692*/  mov [rbp+450h+var_208], rcx
/*1409f5699*/  mov rax, rcx
/*1409f569c*/  mov r13, r12
/*1409f569f*/  cmp rax, r12
/*1409f56a2*/  jz loc_1409F58B9
/*1409f56a8*/ loc_1409F56A8: lea rcx, [rax+20h]
/*1409f56ac*/  mov r14, rcx
/*1409f56af*/  mov qword ptr [rbp+450h+var_140+8], rcx
/*1409f56b6*/  movzx ecx, byte ptr [rax]
/*1409f56b9*/  movups xmm0, xmmword ptr [rax+10h]
/*1409f56bd*/  movups [rbp+450h+var_200+0Fh], xmm0
/*1409f56c4*/  movups xmm0, xmmword ptr [rax+1]
/*1409f56c8*/  movaps [rbp+450h+var_200], xmm0
/*1409f56cf*/  cmp cl, 0FFh
/*1409f56d2*/  jz def_1409F62EF; jumptable 00000001409F62EF default case
/*1409f56d8*/  mov byte ptr [rbp+450h+var_170], cl
/*1409f56de*/  movups xmm0, [rbp+450h+var_200+0Fh]
/*1409f56e5*/  movups xmmword ptr [rdi+0Fh], xmm0
/*1409f56e9*/  movdqa xmm0, [rbp+450h+var_200]
/*1409f56f1*/  movdqu xmmword ptr [rdi], xmm0
/*1409f56f5*/  mov [rbp+450h+var_172], 1
/*1409f56fc*/ loc_1409F56FC: mov edx, 8
/*1409f5701*/  mov rcx, rsi
/*1409f5704*/  mov r8, rbx
/*1409f5707*/  call sub_141433D50
/*1409f570c*/  nop
/*1409f570d*/  test rax, rax
/*1409f5710*/  jz loc_1409F5810
/*1409f5716*/  mov [rbp+450h+var_172], 1
/*1409f571d*/  mov edx, 4
/*1409f5722*/  mov rcx, r15
/*1409f5725*/  mov r8, rax
/*1409f5728*/  call sub_141433D50
/*1409f572d*/  nop
/*1409f572e*/ loc_1409F572E: test rax, rax
/*1409f5731*/  jz loc_1409F5810
/*1409f5737*/  cmp byte ptr [rax], 3
/*1409f573a*/  jnz loc_1409F5810
/*1409f5740*/  mov rcx, [rax+18h]
/*1409f5744*/  test rcx, rcx
/*1409f5747*/  js loc_1409F589A
/*1409f574d*/  mov [rbp+450h+var_B8], rcx
/*1409f5754*/  jz loc_1409F5810
/*1409f575a*/  mov rax, [rax+10h]
/*1409f575e*/  mov [rbp+450h+var_1B8], rax
/*1409f5765*/  call nullsub_1
/*1409f576a*/  mov r12d, 1
/*1409f5770*/  mov edx, 1
/*1409f5775*/  mov rcx, [rbp+450h+var_B8]
/*1409f577c*/  call sub_140001650
/*1409f5781*/  mov [rbp+450h+var_A8], rax
/*1409f5788*/  test rax, rax
/*1409f578b*/  jz loc_1409F8D4F
/*1409f5791*/  mov rcx, [rbp+450h+var_A8]
/*1409f5798*/  mov rdx, [rbp+450h+var_1B8]
/*1409f579f*/  mov r12, [rbp+450h+var_B8]
/*1409f57a6*/  mov r8, r12
/*1409f57a9*/  call sub_141684120
/*1409f57ae*/  mov qword ptr [rbp+450h+var_2E0], r12
/*1409f57b5*/  mov rax, [rbp+450h+var_A8]
/*1409f57bc*/  mov qword ptr [rbp+450h+var_2E0+8], rax
/*1409f57c3*/  mov qword ptr [rbp+450h+var_2D0], r12
/*1409f57ca*/  mov [rbp+450h+var_173], 0
/*1409f57d1*/  mov [rbp+450h+var_370], rax
/*1409f57d8*/  mov [rbp+450h+var_378], r12
/*1409f57df*/  mov [rbp+450h+var_174], 1
/*1409f57e6*/ loc_1409F57E6: lea rcx, [rbp+450h+var_110]
/*1409f57ed*/  lea rdx, [rbp+450h+var_2E0]
/*1409f57f4*/  call sub_140474440
/*1409f57f9*/  nop
/*1409f57fa*/  test al, al
/*1409f57fc*/  jz short loc_1409F587B
/*1409f57fe*/ loc_1409F57FE: mov rcx, rbx
/*1409f5801*/  call sub_1400104F0
/*1409f5806*/  nop
/*1409f5807*/  jmp short loc_1409F586A
/*1409f5810*/ loc_1409F5810: mov r12, [rbp+450h+var_318]
/*1409f5817*/  mov eax, 1
/*1409f581c*/  mov [rbp+450h+var_A8], rax
/*1409f5823*/  cmp r12, qword ptr [rbp+450h+var_328]
/*1409f582a*/  jnz short loc_1409F5839
/*1409f582c*/ loc_1409F582C: lea rcx, [rbp+450h+var_328]
/*1409f5833*/  call sub_1416890A0
/*1409f5838*/  nop
/*1409f5839*/ loc_1409F5839: mov rax, qword ptr [rbp+450h+var_328+8]
/*1409f5840*/  mov rcx, r12
/*1409f5843*/  shl rcx, 5
/*1409f5847*/  movdqu xmm0, [rbp+450h+var_170]
/*1409f584f*/  movups xmm1, [rbp+450h+var_160]
/*1409f5856*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1409f585b*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f5860*/  inc r12
/*1409f5863*/  mov [rbp+450h+var_318], r12
/*1409f586a*/ loc_1409F586A: mov rax, r14
/*1409f586d*/  mov r12, r13
/*1409f5870*/  cmp rax, r12
/*1409f5873*/  jnz loc_1409F56A8
/*1409f5879*/  jmp short loc_1409F58B9
/*1409f587b*/ loc_1409F587B: mov r12, [rbp+450h+var_318]
/*1409f5882*/  cmp r12, qword ptr [rbp+450h+var_328]
/*1409f5889*/  jnz short loc_1409F5839
/*1409f588b*/ loc_1409F588B: lea rcx, [rbp+450h+var_328]
/*1409f5892*/  call sub_1416890A0
/*1409f5897*/  nop
/*1409f5898*/  jmp short loc_1409F5839
/*1409f589a*/ loc_1409F589A: xor r12d, r12d
/*1409f589d*/ loc_1409F589D: mov [rbp+450h+var_172], 1
/*1409f58a4*/ loc_1409F58A4: mov rcx, r12
/*1409f58a7*/  mov rdx, [rbp+450h+var_A8]
/*1409f58ae*/  call sub_1416C2D4B
/*1409f58b4*/  jmp loc_1409F8D2B
/*1409f58b9*/ loc_1409F58B9: mov rcx, r12
/*1409f58bc*/  jmp short loc_1409F58C1
/*1409f58be*/ def_1409F62EF: mov rcx, r14; jumptable 00000001409F62EF default case  // jumptable 00000001409F62EF default case
jumptable 00000001409F6617 default case
/*1409f58c1*/ loc_1409F58C1: sub r12, rcx
/*1409f58c4*/  shr r12, 5
/*1409f58c8*/  mov [rbp+450h+var_B8], r12
/*1409f58cf*/  mov [rbp+450h+var_A8], 0
/*1409f58da*/  mov [rbp+450h+var_1B8], rcx
/*1409f58e1*/  nop word ptr [rax+rax+00000000h]
/*1409f58f0*/ loc_1409F58F0: mov rax, [rbp+450h+var_A8]
/*1409f58f7*/  cmp [rbp+450h+var_B8], rax
/*1409f58fe*/  jz short loc_1409F5919
/*1409f5900*/  inc rax
/*1409f5903*/  mov [rbp+450h+var_A8], rax
/*1409f590a*/  lea rsi, [rcx+20h]
/*1409f590e*/ loc_1409F590E: call sub_1402C3260
/*1409f5913*/  nop
/*1409f5914*/  mov rcx, rsi
/*1409f5917*/  jmp short loc_1409F58F0
/*1409f5919*/ loc_1409F5919: mov rdx, [rbp+450h+var_220]
/*1409f5920*/  test rdx, rdx
/*1409f5923*/  jz short loc_1409F593B
/*1409f5925*/  shl rdx, 5
/*1409f5929*/  mov r8d, 8
/*1409f592f*/  mov rcx, [rbp+450h+var_208]
/*1409f5936*/  call sub_140001660
/*1409f593b*/ loc_1409F593B: mov rsi, qword ptr [rbp+450h+var_328]
/*1409f5942*/  mov rbx, qword ptr [rbp+450h+var_328+8]
/*1409f5949*/  mov rdi, [rbp+450h+var_318]
/*1409f5950*/  mov r14, qword ptr [rbp+450h+var_110+8]
/*1409f5957*/  test r14, r14
/*1409f595a*/  jz loc_1409F5A3F
/*1409f5960*/  mov [rbp+450h+var_A8], rbx
/*1409f5967*/  mov r15, qword ptr [rbp+450h+var_100+8]
/*1409f596e*/  test r15, r15
/*1409f5971*/  jz loc_1409F5A07
/*1409f5977*/  mov r12, qword ptr [rbp+450h+var_110]
/*1409f597e*/  movdqa xmm0, xmmword ptr [r12]
/*1409f5984*/  lea r13, [r12+10h]
/*1409f5989*/  pmovmskb ebx, xmm0
/*1409f598d*/  not ebx
/*1409f598f*/  jmp short loc_1409F59AF
/*1409f59a0*/ loc_1409F59A0: dec r15
/*1409f59a3*/  lea eax, [rbx-1]
/*1409f59a6*/  and eax, ebx
/*1409f59a8*/  mov ebx, eax
/*1409f59aa*/  test r15, r15
/*1409f59ad*/  jz short loc_1409F5A07
/*1409f59af*/ loc_1409F59AF: test bx, bx
/*1409f59b2*/  jnz short loc_1409F59DD
/*1409f59b4*/  nop word ptr [rax+rax+00000000h]
/*1409f59c0*/ loc_1409F59C0: movdqa xmm0, xmmword ptr [r13+0]
/*1409f59c6*/  add r12, 0FFFFFFFFFFFFFE80h
/*1409f59cd*/  add r13, 10h
/*1409f59d1*/  pmovmskb ebx, xmm0
/*1409f59d5*/  xor ebx, 0FFFFh
/*1409f59db*/  jz short loc_1409F59C0
/*1409f59dd*/ loc_1409F59DD: tzcnt eax, ebx
/*1409f59e1*/  neg rax
/*1409f59e4*/  lea rax, [rax+rax*2]
/*1409f59e8*/  mov rdx, [r12+rax*8-18h]
/*1409f59ed*/  test rdx, rdx
/*1409f59f0*/  jz short loc_1409F59A0
/*1409f59f2*/  lea rax, [r12+rax*8]
/*1409f59f6*/  mov rcx, [rax-10h]
/*1409f59fa*/  mov r8d, 1
/*1409f5a00*/  call sub_140001660
/*1409f5a05*/  jmp short loc_1409F59A0
/*1409f5a07*/ loc_1409F5A07: lea rax, [r14+r14*2]
/*1409f5a0b*/  lea rax, ds:27h[rax*8]
/*1409f5a13*/  and rax, 0FFFFFFFFFFFFFFF0h
/*1409f5a17*/  add r14, rax
/*1409f5a1a*/  add r14, 11h
/*1409f5a1e*/  mov rbx, [rbp+450h+var_A8]
/*1409f5a25*/  jz short loc_1409F5A3F
/*1409f5a27*/  mov rcx, qword ptr [rbp+450h+var_110]
/*1409f5a2e*/  sub rcx, rax
/*1409f5a31*/  mov r8d, 10h
/*1409f5a37*/  mov rdx, r14
/*1409f5a3a*/  call sub_140001660
/*1409f5a3f*/ loc_1409F5A3F: test rdi, rdi
/*1409f5a42*/  jz short loc_1409F5AB0
/*1409f5a44*/  mov qword ptr [rbp+450h+var_110+8], rsi
/*1409f5a4b*/  mov qword ptr [rbp+450h+var_100], rbx
/*1409f5a52*/  mov qword ptr [rbp+450h+var_100+8], rdi
/*1409f5a59*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f5a60*/  mov [rbp+450h+var_23E], 1
/*1409f5a67*/ loc_1409F5A67: lea rcx, aTools_1; "tools"
/*1409f5a6e*/  lea r8, [rbp+450h+var_2C0]
/*1409f5a75*/  mov edx, 5
/*1409f5a7a*/  call sub_141433E50
/*1409f5a7f*/  nop
/*1409f5a80*/ loc_1409F5A80: mov [rbp+450h+var_A8], rax
/*1409f5a87*/  mov rcx, rax
/*1409f5a8a*/  call sub_1400104F0
/*1409f5a8f*/  nop
/*1409f5a90*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f5a98*/  movups xmm1, [rbp+450h+var_100]
/*1409f5a9f*/  mov rax, [rbp+450h+var_A8]
/*1409f5aa6*/  movups xmmword ptr [rax+10h], xmm1
/*1409f5aaa*/  movdqu xmmword ptr [rax], xmm0
/*1409f5aae*/  jmp short loc_1409F5ACA
/*1409f5ab0*/ loc_1409F5AB0: test rsi, rsi
/*1409f5ab3*/  jz short loc_1409F5ACA
/*1409f5ab5*/  shl rsi, 5
/*1409f5ab9*/  mov r8d, 8
/*1409f5abf*/  mov rcx, rbx
/*1409f5ac2*/  mov rdx, rsi
/*1409f5ac5*/  call sub_140001660
/*1409f5aca*/ loc_1409F5ACA: mov rsi, qword ptr [rbp+450h+var_1B0+8]
/*1409f5ad1*/  test rsi, rsi
/*1409f5ad4*/  jz loc_1409F5BA3
/*1409f5ada*/  mov rdi, qword ptr [rbp+450h+var_1A0+8]
/*1409f5ae1*/  test rdi, rdi
/*1409f5ae4*/  jz loc_1409F5B76
/*1409f5aea*/  mov rbx, qword ptr [rbp+450h+var_1B0]
/*1409f5af1*/  movdqa xmm0, xmmword ptr [rbx]
/*1409f5af5*/  lea r14, [rbx+10h]
/*1409f5af9*/  pmovmskb r15d, xmm0
/*1409f5afe*/  not r15d
/*1409f5b01*/  jmp short loc_1409F5B22
/*1409f5b10*/ loc_1409F5B10: dec rdi
/*1409f5b13*/  lea eax, [r15-1]
/*1409f5b17*/  and eax, r15d
/*1409f5b1a*/  mov r15d, eax
/*1409f5b1d*/  test rdi, rdi
/*1409f5b20*/  jz short loc_1409F5B76
/*1409f5b22*/ loc_1409F5B22: test r15w, r15w
/*1409f5b26*/  jnz short loc_1409F5B4E
/*1409f5b28*/  nop dword ptr [rax+rax+00000000h]
/*1409f5b30*/ loc_1409F5B30: movdqa xmm0, xmmword ptr [r14]
/*1409f5b35*/  add rbx, 0FFFFFFFFFFFFFE00h
/*1409f5b3c*/  add r14, 10h
/*1409f5b40*/  pmovmskb r15d, xmm0
/*1409f5b45*/  xor r15d, 0FFFFh
/*1409f5b4c*/  jz short loc_1409F5B30
/*1409f5b4e*/ loc_1409F5B4E: tzcnt ecx, r15d
/*1409f5b53*/  shl ecx, 5
/*1409f5b56*/  mov rax, rbx
/*1409f5b59*/  sub rax, rcx
/*1409f5b5c*/  mov rdx, [rax-20h]
/*1409f5b60*/  test rdx, rdx
/*1409f5b63*/  jz short loc_1409F5B10
/*1409f5b65*/  mov rcx, [rax-18h]
/*1409f5b69*/  mov r8d, 1
/*1409f5b6f*/  call sub_140001660
/*1409f5b74*/  jmp short loc_1409F5B10
/*1409f5b76*/ loc_1409F5B76: mov rax, rsi
/*1409f5b79*/  shl rax, 5
/*1409f5b7d*/  add rsi, rax
/*1409f5b80*/  add rsi, 31h ; '1'
/*1409f5b84*/  jz short loc_1409F5BA3
/*1409f5b86*/  mov rcx, qword ptr [rbp+450h+var_1B0]
/*1409f5b8d*/  sub rcx, rax
/*1409f5b90*/  add rcx, 0FFFFFFFFFFFFFFE0h
/*1409f5b94*/  mov r8d, 10h
/*1409f5b9a*/  mov rdx, rsi
/*1409f5b9d*/  call sub_140001660
/*1409f5ba2*/  nop
/*1409f5ba3*/ loc_1409F5BA3: lea rcx, aTools_1; "tools"
/*1409f5baa*/  lea r8, [rbp+450h+var_2C0]
/*1409f5bb1*/  mov edx, 5
/*1409f5bb6*/  call sub_141433D50
/*1409f5bbb*/  nop
/*1409f5bbc*/  test rax, rax
/*1409f5bbf*/  jz short loc_1409F5BD6
/*1409f5bc1*/  cmp byte ptr [rax], 4
/*1409f5bc4*/  jnz short loc_1409F5BD6
/*1409f5bc6*/  cmp qword ptr [rax+18h], 0
/*1409f5bcb*/  setnz sil
/*1409f5bcf*/  test sil, sil
/*1409f5bd2*/  jz short loc_1409F5BDD
/*1409f5bd4*/  jmp short loc_1409F5C1D
/*1409f5bd6*/ loc_1409F5BD6: xor esi, esi
/*1409f5bd8*/  test sil, sil
/*1409f5bdb*/  jnz short loc_1409F5C1D
/*1409f5bdd*/ loc_1409F5BDD: cmp byte ptr [rbp+450h+var_2C0], 5
/*1409f5be4*/  jnz short loc_1409F5C1D
/*1409f5be6*/  lea rdx, [rbp+450h+var_2C0+8]
/*1409f5bed*/  lea r8, aParallelToolCa; "parallel_tool_calls"
/*1409f5bf4*/  lea rcx, [rbp+450h+var_110]
/*1409f5bfb*/  mov r9d, 13h
/*1409f5c01*/  call sub_1402B4580
/*1409f5c06*/  nop
/*1409f5c07*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f5c0e*/  jz short loc_1409F5C1D
/*1409f5c10*/  lea rcx, [rbp+450h+var_110]
/*1409f5c17*/  call sub_1400104F0
/*1409f5c1c*/  nop
/*1409f5c1d*/ loc_1409F5C1D: test sil, sil
/*1409f5c20*/  jz loc_1409F628D
/*1409f5c26*/  lea rcx, aToolChoice; "tool_choice"
/*1409f5c2d*/  mov edx, 0Bh
/*1409f5c32*/  mov r8, [rbp+450h+var_1D8]
/*1409f5c39*/  call sub_141433D50
/*1409f5c3e*/  nop
/*1409f5c3f*/  test rax, rax
/*1409f5c42*/  jz loc_1409F628D
/*1409f5c48*/  movzx esi, byte ptr [rax]
/*1409f5c4b*/  cmp esi, 5
/*1409f5c4e*/  jz short loc_1409F5C8D
/*1409f5c50*/  cmp esi, 3
/*1409f5c53*/  jnz loc_1409F628D
/*1409f5c59*/  mov rcx, [rax+10h]
/*1409f5c5d*/  mov rdx, [rax+18h]
/*1409f5c61*/  cmp rdx, 4
/*1409f5c65*/  jz loc_1409F5F82
/*1409f5c6b*/  cmp rdx, 8
/*1409f5c6f*/  jnz loc_1409F628D
/*1409f5c75*/  mov rdx, 6465726975716572h
/*1409f5c7f*/  cmp [rcx], rdx
/*1409f5c82*/  jnz loc_1409F628D
/*1409f5c88*/  jmp loc_1409F5F96
/*1409f5c8d*/ loc_1409F5C8D: lea rcx, aType_8; "type"
/*1409f5c94*/  mov edx, 4
/*1409f5c99*/  mov r8, rax
/*1409f5c9c*/  mov rdi, rax
/*1409f5c9f*/  call sub_141433D50
/*1409f5ca4*/  nop
/*1409f5ca5*/  test rax, rax
/*1409f5ca8*/  jz loc_1409F628D
/*1409f5cae*/  cmp byte ptr [rax], 3
/*1409f5cb1*/  jnz loc_1409F628D
/*1409f5cb7*/  cmp qword ptr [rax+18h], 8
/*1409f5cbc*/  jnz loc_1409F628D
/*1409f5cc2*/  mov r8, rdi
/*1409f5cc5*/  mov rax, [rax+10h]
/*1409f5cc9*/  mov rdi, 6E6F6974636E7566h
/*1409f5cd3*/  cmp [rax], rdi
/*1409f5cd6*/  jnz loc_1409F628D
/*1409f5cdc*/  lea rcx, aName_7; "name"
/*1409f5ce3*/  mov edx, 4
/*1409f5ce8*/  call sub_141433D50
/*1409f5ced*/  nop
/*1409f5cee*/  test rax, rax
/*1409f5cf1*/  jz loc_1409F628D
/*1409f5cf7*/  cmp byte ptr [rax], 3
/*1409f5cfa*/  jnz loc_1409F628D
/*1409f5d00*/  movdqu xmm0, xmmword ptr [rax+10h]
/*1409f5d05*/  movdqu [rbp+450h+var_328], xmm0
/*1409f5d0d*/  mov qword ptr [rbp+450h+var_2E0], 0
/*1409f5d18*/  mov qword ptr [rbp+450h+var_2D0], 0
/*1409f5d23*/  call nullsub_1
/*1409f5d28*/  mov ecx, 4
/*1409f5d2d*/  mov edx, 1
/*1409f5d32*/  call sub_140001650
/*1409f5d37*/  test rax, rax
/*1409f5d3a*/  jz loc_1409F8CF7
/*1409f5d40*/  mov dword ptr [rax], 65707974h
/*1409f5d46*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f5d51*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f5d58*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f5d63*/  mov [rbp+450h+var_1CC], 1
/*1409f5d6a*/ loc_1409F5D6A: lea rdx, off_1417A4F98; "function"
/*1409f5d71*/  lea rcx, [rbp+450h+var_110]
/*1409f5d78*/  call sub_140B56640
/*1409f5d7d*/  nop
/*1409f5d7e*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f5d85*/  jz loc_1409F84D1
/*1409f5d8b*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f5d93*/  movups xmm1, [rbp+450h+var_100]
/*1409f5d9a*/  movaps [rbp+450h+var_1A0], xmm1
/*1409f5da1*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f5da9*/  mov [rbp+450h+var_1CC], 0
/*1409f5db0*/  lea rcx, [rbp+450h+var_110]
/*1409f5db7*/  lea rdx, [rbp+450h+var_2E0]
/*1409f5dbe*/  lea r8, [rbp+450h+var_170]
/*1409f5dc5*/  lea r9, [rbp+450h+var_1B0]
/*1409f5dcc*/  call sub_140307860
/*1409f5dd1*/  nop
/*1409f5dd2*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f5dd9*/  jz short loc_1409F5DE8
/*1409f5ddb*/ loc_1409F5DDB: lea rcx, [rbp+450h+var_110]
/*1409f5de2*/  call sub_1400104F0
/*1409f5de7*/  nop
/*1409f5de8*/ loc_1409F5DE8: call nullsub_1
/*1409f5ded*/  mov ecx, 8
/*1409f5df2*/  mov edx, 1
/*1409f5df7*/  call sub_140001650
/*1409f5dfc*/  test rax, rax
/*1409f5dff*/  jz loc_1409F8D09
/*1409f5e05*/  mov [rax], rdi
/*1409f5e08*/  mov qword ptr [rbp+450h+var_200], 8
/*1409f5e13*/  mov qword ptr [rbp+450h+var_200+8], rax
/*1409f5e1a*/  mov qword ptr [rbp+450h+var_1F0], 8
/*1409f5e25*/  mov qword ptr [rbp+450h+var_140], 0
/*1409f5e30*/  mov qword ptr [rbp+450h+var_130], 0
/*1409f5e3b*/  call nullsub_1
/*1409f5e40*/  mov ecx, 4
/*1409f5e45*/  mov edx, 1
/*1409f5e4a*/  call sub_140001650
/*1409f5e4f*/  test rax, rax
/*1409f5e52*/  jz loc_1409F8D1B
/*1409f5e58*/  mov dword ptr [rax], 656D616Eh
/*1409f5e5e*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f5e69*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f5e70*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f5e7b*/  mov [rbp+450h+var_1CD], 1
/*1409f5e82*/ loc_1409F5E82: lea rcx, [rbp+450h+var_110]
/*1409f5e89*/  lea rdx, [rbp+450h+var_328]
/*1409f5e90*/  call sub_140B56640
/*1409f5e95*/  nop
/*1409f5e96*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f5e9d*/  jz loc_1409F8510
/*1409f5ea3*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f5eab*/  movups xmm1, [rbp+450h+var_100]
/*1409f5eb2*/  movaps [rbp+450h+var_1A0], xmm1
/*1409f5eb9*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f5ec1*/  mov [rbp+450h+var_1CD], 0
/*1409f5ec8*/  lea rcx, [rbp+450h+var_110]
/*1409f5ecf*/  lea rdx, [rbp+450h+var_140]
/*1409f5ed6*/  lea r8, [rbp+450h+var_170]
/*1409f5edd*/  lea r9, [rbp+450h+var_1B0]
/*1409f5ee4*/  call sub_140307860
/*1409f5ee9*/  nop
/*1409f5eea*/  cmp byte ptr [rbp+450h+var_110], 0FFh
/*1409f5ef1*/  jz short loc_1409F5F00
/*1409f5ef3*/ loc_1409F5EF3: lea rcx, [rbp+450h+var_110]
/*1409f5efa*/  call sub_1400104F0
/*1409f5eff*/  nop
/*1409f5f00*/ loc_1409F5F00: movdqu xmm0, [rbp+450h+var_140]
/*1409f5f08*/  movdqu [rbp+450h+var_110+8], xmm0
/*1409f5f10*/  mov rax, qword ptr [rbp+450h+var_130]
/*1409f5f17*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f5f1e*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f5f25*/  mov [rbp+450h+var_23F], 0
/*1409f5f2c*/ loc_1409F5F2C: lea rcx, [rbp+450h+var_1B0]
/*1409f5f33*/  lea rdx, [rbp+450h+var_2E0]
/*1409f5f3a*/  lea r8, [rbp+450h+var_200]
/*1409f5f41*/  lea r9, [rbp+450h+var_110]
/*1409f5f48*/  call sub_140307860
/*1409f5f4d*/  nop
/*1409f5f4e*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f5f55*/  jz short loc_1409F5F64
/*1409f5f57*/ loc_1409F5F57: lea rcx, [rbp+450h+var_1B0]
/*1409f5f5e*/  call sub_1400104F0
/*1409f5f63*/  nop
/*1409f5f64*/ loc_1409F5F64: mov rax, qword ptr [rbp+450h+var_2D0]
/*1409f5f6b*/  movups xmm0, [rbp+450h+var_2E0]
/*1409f5f72*/  movups [rbp+450h+var_110+7], xmm0
/*1409f5f79*/  mov qword ptr [rbp+450h+var_100+7], rax
/*1409f5f80*/  jmp short loc_1409F5FC6
/*1409f5f82*/ loc_1409F5F82: cmp dword ptr [rcx], 6F747561h
/*1409f5f88*/  jz short loc_1409F5F96
/*1409f5f8a*/  cmp dword ptr [rcx], 656E6F6Eh
/*1409f5f90*/  jnz loc_1409F628D
/*1409f5f96*/ loc_1409F5F96: add rax, 8
/*1409f5f9a*/  lea rcx, [rbp+450h+var_1B0]
/*1409f5fa1*/  mov rdx, rax
/*1409f5fa4*/  call sub_14149C500
/*1409f5fa9*/  nop
/*1409f5faa*/  mov rax, qword ptr [rbp+450h+var_1A0]
/*1409f5fb1*/  mov qword ptr [rbp+450h+var_100+7], rax
/*1409f5fb8*/  movups xmm0, [rbp+450h+var_1B0]
/*1409f5fbf*/  movups [rbp+450h+var_110+7], xmm0
/*1409f5fc6*/ loc_1409F5FC6: movups xmm0, [rbp+450h+var_110]
/*1409f5fcd*/  movaps [rbp+450h+var_170], xmm0
/*1409f5fd4*/  mov rax, qword ptr [rbp+450h+var_110+0Fh]
/*1409f5fdb*/  mov qword ptr [rbp+450h+var_170+0Fh], rax
/*1409f5fe2*/  mov rax, qword ptr [rbp+450h+var_100+7]
/*1409f5fe9*/  mov qword ptr [rbp+450h+var_160+7], rax
/*1409f5ff0*/  mov byte ptr [rbp+450h+var_1B0], sil
/*1409f5ff7*/  movdqa xmm0, [rbp+450h+var_170]
/*1409f5fff*/  movdqu [rbp+450h+var_1B0+1], xmm0
/*1409f6007*/  mov rax, qword ptr [rbp+450h+var_170+0Fh]
/*1409f600e*/  mov qword ptr [rbp+450h+var_1A0], rax
/*1409f6015*/  mov rax, qword ptr [rbp+450h+var_160+7]
/*1409f601c*/  mov qword ptr [rbp+450h+var_1A0+8], rax
/*1409f6023*/  mov [rbp+450h+var_113], 1
/*1409f602a*/ loc_1409F602A: lea rcx, aFunction_0; "function"
/*1409f6031*/  lea r8, [rbp+450h+var_1B0]
/*1409f6038*/  mov edx, 8
/*1409f603d*/  call sub_141433D50
/*1409f6042*/  nop
/*1409f6043*/  mov rsi, rax
/*1409f6046*/  test rax, rax
/*1409f6049*/  jz loc_1409F6221
/*1409f604f*/  mov [rbp+450h+var_113], 1
/*1409f6056*/  lea rcx, aName_7; "name"
/*1409f605d*/  mov edx, 4
/*1409f6062*/  mov r8, rsi
/*1409f6065*/  call sub_141433D50
/*1409f606a*/  nop
/*1409f606b*/ loc_1409F606B: test rax, rax
/*1409f606e*/  jz loc_1409F6221
/*1409f6074*/  cmp byte ptr [rax], 3
/*1409f6077*/  jnz loc_1409F6221
/*1409f607d*/  mov r14, [rax+10h]
/*1409f6081*/  mov rbx, [rax+18h]
/*1409f6085*/  mov [rsp+4D0h+var_4B0], 1
/*1409f608e*/  lea rcx, [rbp+450h+var_110]
/*1409f6095*/  mov r9d, 1
/*1409f609b*/  mov rdx, rbx
/*1409f609e*/  xor r8d, r8d
/*1409f60a1*/  call sub_140388B60
/*1409f60a6*/  mov rcx, qword ptr [rbp+450h+var_110+8]
/*1409f60ad*/  cmp dword ptr [rbp+450h+var_110], 1
/*1409f60b4*/  jz loc_1409F8441
/*1409f60ba*/  mov [rbp+450h+var_B8], rcx
/*1409f60c1*/  mov rdi, qword ptr [rbp+450h+var_100]
/*1409f60c8*/  test rbx, rbx
/*1409f60cb*/  jz short loc_1409F60DB
/*1409f60cd*/  mov rcx, rdi
/*1409f60d0*/  mov rdx, r14
/*1409f60d3*/  mov r8, rbx
/*1409f60d6*/  call sub_141684120
/*1409f60db*/ loc_1409F60DB: mov [rbp+450h+var_A8], rdi
/*1409f60e2*/  mov rdi, qword ptr [rbp+450h+var_270+8]
/*1409f60e9*/  test rdi, rdi
/*1409f60ec*/  jz loc_1409F6203
/*1409f60f2*/  mov r15, qword ptr [rbp+450h+var_280]
/*1409f60f9*/  movdqa xmm0, xmmword ptr [r15]
/*1409f60fe*/  pmovmskb r13d, xmm0
/*1409f6103*/  not r13d
/*1409f6106*/  lea r12, [r15+10h]
/*1409f610a*/  jmp short loc_1409F611F
/*1409f610c*/ loc_1409F610C: lea eax, [r13-1]
/*1409f6110*/  and eax, r13d
/*1409f6113*/  mov r13d, eax
/*1409f6116*/  dec rdi
/*1409f6119*/  jz loc_1409F6203
/*1409f611f*/ loc_1409F611F: test r13w, r13w
/*1409f6123*/  jnz short loc_1409F614F
/*1409f6125*/  nop word ptr [rax+rax+00000000h]
/*1409f6130*/ loc_1409F6130: movdqa xmm0, xmmword ptr [r12]
/*1409f6136*/  add r15, 0FFFFFFFFFFFFFD00h
/*1409f613d*/  add r12, 10h
/*1409f6141*/  pmovmskb r13d, xmm0
/*1409f6146*/  xor r13d, 0FFFFh
/*1409f614d*/  jz short loc_1409F6130
/*1409f614f*/ loc_1409F614F: tzcnt eax, r13d
/*1409f6154*/  neg rax
/*1409f6157*/  lea r14, [rax+rax*2]
/*1409f615b*/  shl r14, 4
/*1409f615f*/  cmp [r15+r14-8], rbx
/*1409f6164*/  jnz short loc_1409F610C
/*1409f6166*/  add r14, r15
/*1409f6169*/  mov rcx, [r14-10h]
/*1409f616d*/  mov rdx, [rbp+450h+var_A8]
/*1409f6174*/  mov r8, rbx
/*1409f6177*/  call sub_1416847B0
/*1409f617c*/  test eax, eax
/*1409f617e*/  jnz short loc_1409F610C
/*1409f6180*/  add r14, 0FFFFFFFFFFFFFFD0h
/*1409f6184*/ loc_1409F6184: lea rcx, [rbp+450h+var_140]
/*1409f618b*/  mov rdx, r14
/*1409f618e*/  call sub_14149C500
/*1409f6193*/  nop
/*1409f6194*/  mov rax, qword ptr [rbp+450h+var_130]
/*1409f619b*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f61a2*/  movdqu xmm0, [rbp+450h+var_140]
/*1409f61aa*/  movdqu [rbp+450h+var_110+8], xmm0
/*1409f61b2*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f61b9*/  mov [rbp+450h+var_240], 1
/*1409f61c0*/ loc_1409F61C0: lea rcx, aName_7; "name"
/*1409f61c7*/  mov edx, 4
/*1409f61cc*/  mov r8, rsi
/*1409f61cf*/  call sub_141433E50
/*1409f61d4*/  nop
/*1409f61d5*/ loc_1409F61D5: mov [rbp+450h+var_220], rax
/*1409f61dc*/  mov rcx, rax
/*1409f61df*/  call sub_1400104F0
/*1409f61e4*/  nop
/*1409f61e5*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f61ed*/  movups xmm1, [rbp+450h+var_100]
/*1409f61f4*/  mov rax, [rbp+450h+var_220]
/*1409f61fb*/  movups xmmword ptr [rax+10h], xmm1
/*1409f61ff*/  movdqu xmmword ptr [rax], xmm0
/*1409f6203*/ loc_1409F6203: mov rdx, [rbp+450h+var_B8]
/*1409f620a*/  test rdx, rdx
/*1409f620d*/  jz short loc_1409F6221
/*1409f620f*/  mov r8d, 1
/*1409f6215*/  mov rcx, [rbp+450h+var_A8]
/*1409f621c*/  call sub_140001660
/*1409f6221*/ loc_1409F6221: movdqu xmm0, [rbp+450h+var_1B0]
/*1409f6229*/  movups xmm1, [rbp+450h+var_1A0]
/*1409f6230*/  movaps [rbp+450h+var_100], xmm1
/*1409f6237*/  movdqa [rbp+450h+var_110], xmm0
/*1409f623f*/  mov [rbp+450h+var_241], 1
/*1409f6246*/ loc_1409F6246: lea rcx, aToolChoice; "tool_choice"
/*1409f624d*/  lea r8, [rbp+450h+var_2C0]
/*1409f6254*/  mov edx, 0Bh
/*1409f6259*/  call sub_141433E50
/*1409f625e*/  nop
/*1409f625f*/ loc_1409F625F: mov [rbp+450h+var_A8], rax
/*1409f6266*/  mov rcx, rax
/*1409f6269*/  call sub_1400104F0
/*1409f626e*/  nop
/*1409f626f*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f6277*/  movaps xmm1, [rbp+450h+var_100]
/*1409f627e*/  mov rax, [rbp+450h+var_A8]
/*1409f6285*/  movups xmmword ptr [rax+10h], xmm1
/*1409f6289*/  movdqu xmmword ptr [rax], xmm0
/*1409f628d*/ loc_1409F628D: movzx r8d, [rbp+450h+arg_20]
/*1409f6295*/  mov rax, [rbp+450h+var_2F0]
/*1409f629c*/  mov [rsp+4D0h+var_4B0], rax
/*1409f62a1*/  lea rcx, [rbp+450h+var_2C0]
/*1409f62a8*/  mov rdx, [rbp+450h+var_1D8]
/*1409f62af*/  mov r9, [rbp+450h+var_148]
/*1409f62b6*/  call sub_140AE7DE0
/*1409f62bb*/  nop
/*1409f62bc*/  lea rcx, aStopSequences; "stop_sequences"
/*1409f62c3*/  mov edx, 0Eh
/*1409f62c8*/  mov r8, [rbp+450h+var_1D8]
/*1409f62cf*/  call sub_141433D50
/*1409f62d4*/  nop
/*1409f62d5*/  test rax, rax
/*1409f62d8*/  jz loc_1409F63E3
/*1409f62de*/  movzx ecx, byte ptr [rax]
/*1409f62e1*/  lea rdx, jpt_1409F62EF
/*1409f62e8*/  movsxd rcx, ds:(jpt_1409F62EF - 1417AAF2Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f62ec*/  add rcx, rdx
/*1409f62ef*/  jmp rcx; switch jump  // switch jump
/*1409f62f1*/ loc_1409F62F1: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F62EF cases 1,2  // jumptable 00000001409F62EF cases 1,2
/*1409f62f5*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f62f9*/  movaps [rbp+450h+var_100], xmm1
/*1409f6300*/  movdqa [rbp+450h+var_110], xmm0
/*1409f6308*/  jmp loc_1409F6395
/*1409f630d*/ loc_1409F630D: lea rcx, [rbp+450h+var_110+8]; jumptable 00000001409F62EF case 4  // jumptable 00000001409F62EF case 4
/*1409f6314*/  mov rdx, [rax+10h]
/*1409f6318*/  mov r8, [rax+18h]
/*1409f631c*/  call sub_1402CE260
/*1409f6321*/  nop
/*1409f6322*/  mov byte ptr [rbp+450h+var_110], 4
/*1409f6329*/  jmp short loc_1409F6395
/*1409f632b*/ loc_1409F632B: mov byte ptr [rbp+450h+var_110], 0; jumptable 00000001409F62EF case 0  // jumptable 00000001409F62EF case 0
/*1409f6332*/  jmp short loc_1409F6395
/*1409f6334*/ loc_1409F6334: add rax, 8; jumptable 00000001409F62EF case 3  // jumptable 00000001409F62EF case 3
/*1409f6338*/  lea rcx, [rbp+450h+var_110+8]
/*1409f633f*/  mov rdx, rax
/*1409f6342*/  call sub_14149C500
/*1409f6347*/  nop
/*1409f6348*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f634f*/  jmp short loc_1409F6395
/*1409f6351*/ loc_1409F6351: cmp qword ptr [rax+18h], 0; jumptable 00000001409F62EF case 5  // jumptable 00000001409F62EF case 5
/*1409f6356*/  jz short loc_1409F6378
/*1409f6358*/  mov rdx, [rax+8]
/*1409f635c*/  test rdx, rdx
/*1409f635f*/  jz loc_1409F7FF5
/*1409f6365*/  lea rcx, [rbp+450h+var_110+8]
/*1409f636c*/  mov r8, [rax+10h]
/*1409f6370*/  call sub_1402CCD80
/*1409f6375*/  nop
/*1409f6376*/  jmp short loc_1409F638E
/*1409f6378*/ loc_1409F6378: mov qword ptr [rbp+450h+var_110+8], 0
/*1409f6383*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f638e*/ loc_1409F638E: mov byte ptr [rbp+450h+var_110], 5
/*1409f6395*/ loc_1409F6395: mov [rbp+450h+var_242], 1
/*1409f639c*/ loc_1409F639C: lea rcx, aStop; "stop"
/*1409f63a3*/  lea r8, [rbp+450h+var_2C0]
/*1409f63aa*/  mov edx, 4
/*1409f63af*/  call sub_141433E50
/*1409f63b4*/  nop
/*1409f63b5*/ loc_1409F63B5: mov [rbp+450h+var_A8], rax
/*1409f63bc*/  mov rcx, rax
/*1409f63bf*/  call sub_1400104F0
/*1409f63c4*/  nop
/*1409f63c5*/  movdqa xmm0, [rbp+450h+var_110]
/*1409f63cd*/  movaps xmm1, [rbp+450h+var_100]
/*1409f63d4*/  mov rax, [rbp+450h+var_A8]
/*1409f63db*/  movups xmmword ptr [rax+10h], xmm1
/*1409f63df*/  movdqu xmmword ptr [rax], xmm0
/*1409f63e3*/ loc_1409F63E3: lea rcx, aStream_0; "stream"
/*1409f63ea*/  mov edx, 6
/*1409f63ef*/  mov r8, [rbp+450h+var_1D8]
/*1409f63f6*/  call sub_141433D50
/*1409f63fb*/  nop
/*1409f63fc*/  test rax, rax
/*1409f63ff*/  jz loc_1409F6539
/*1409f6405*/  cmp byte ptr [rax], 1
/*1409f6408*/  jnz loc_1409F6539
/*1409f640e*/  movzx eax, byte ptr [rax+1]
/*1409f6412*/  and al, 1
/*1409f6414*/  jz loc_1409F6539
/*1409f641a*/  mov qword ptr [rbp+450h+var_140], 0
/*1409f6425*/  mov qword ptr [rbp+450h+var_130], 0
/*1409f6430*/  call nullsub_1
/*1409f6435*/  mov ecx, 0Dh
/*1409f643a*/  mov edx, 1
/*1409f643f*/  call sub_140001650
/*1409f6444*/  test rax, rax
/*1409f6447*/  jz loc_1409F8632
/*1409f644d*/  mov rcx, 65676173755F6564h
/*1409f6457*/  mov [rax+5], rcx
/*1409f645b*/  mov rcx, 5F6564756C636E69h
/*1409f6465*/  mov [rax], rcx
/*1409f6468*/  mov qword ptr [rbp+450h+var_170], 0Dh
/*1409f6473*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f647a*/  mov qword ptr [rbp+450h+var_160], 0Dh
/*1409f6485*/  mov word ptr [rbp+450h+var_110], 101h
/*1409f648e*/ loc_1409F648E: lea rcx, [rbp+450h+var_1B0]
/*1409f6495*/  lea rdx, [rbp+450h+var_140]
/*1409f649c*/  lea r8, [rbp+450h+var_170]
/*1409f64a3*/  lea r9, [rbp+450h+var_110]
/*1409f64aa*/  call sub_140307860
/*1409f64af*/  nop
/*1409f64b0*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f64b7*/  jz short loc_1409F64C6
/*1409f64b9*/  lea rcx, [rbp+450h+var_1B0]
/*1409f64c0*/  call sub_1400104F0
/*1409f64c5*/  nop
/*1409f64c6*/ loc_1409F64C6: movdqu xmm0, [rbp+450h+var_140]
/*1409f64ce*/  movdqu [rbp+450h+var_110+8], xmm0
/*1409f64d6*/  mov rax, qword ptr [rbp+450h+var_130]
/*1409f64dd*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f64e4*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f64eb*/  mov [rbp+450h+var_243], 1
/*1409f64f2*/ loc_1409F64F2: lea rcx, aStreamOptions; "stream_options"
/*1409f64f9*/  lea r8, [rbp+450h+var_2C0]
/*1409f6500*/  mov edx, 0Eh
/*1409f6505*/  call sub_141433E50
/*1409f650a*/  nop
/*1409f650b*/ loc_1409F650B: mov [rbp+450h+var_A8], rax
/*1409f6512*/  mov rcx, rax
/*1409f6515*/  call sub_1400104F0
/*1409f651a*/  nop
/*1409f651b*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f6523*/  movups xmm1, [rbp+450h+var_100]
/*1409f652a*/  mov rax, [rbp+450h+var_A8]
/*1409f6531*/  movups xmmword ptr [rax+10h], xmm1
/*1409f6535*/  movdqu xmmword ptr [rax], xmm0
/*1409f6539*/ loc_1409F6539: mov qword ptr [rbp+450h+var_110+8], 4
/*1409f6544*/  lea rdi, [rbp+450h+var_100]
/*1409f654b*/  lea rax, aFrequencyPenal; "frequency_penalty"
/*1409f6552*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f6559*/  mov qword ptr [rbp+450h+var_100+8], 11h
/*1409f6564*/  lea rax, aPresencePenalt; "presence_penalty"
/*1409f656b*/  mov [rbp+450h+var_F0], rax
/*1409f6572*/  mov [rbp+450h+var_E8], 10h
/*1409f657d*/  lea rax, aSeed; "seed"
/*1409f6584*/  mov [rbp+450h+var_E0], rax
/*1409f658b*/  mov [rbp+450h+var_D8], 4
/*1409f6596*/  lea rax, aResponseFormat; "response_format"
/*1409f659d*/  mov [rbp+450h+var_D0], rax
/*1409f65a4*/  mov [rbp+450h+var_C8], 0Fh
/*1409f65af*/  lea rsi, [rbp+450h+var_1B0+8]
/*1409f65b6*/  xor ecx, ecx
/*1409f65b8*/  lea r12, jpt_1409F6617
/*1409f65bf*/  lea rbx, [rbp+450h+var_2C0]
/*1409f65c6*/  nop word ptr [rax+rax+00000000h]
/*1409f65d0*/ loc_1409F65D0: cmp rcx, 4
/*1409f65d4*/  jz loc_1409F670C
/*1409f65da*/  lea r13, [rcx+1]
/*1409f65de*/  mov qword ptr [rbp+450h+var_110], r13
/*1409f65e5*/  shl rcx, 4
/*1409f65e9*/  mov r14, [rdi+rcx]
/*1409f65ed*/  mov r15, [rdi+rcx+8]
/*1409f65f2*/ loc_1409F65F2: mov rcx, r14
/*1409f65f5*/  mov rdx, r15
/*1409f65f8*/  mov r8, [rbp+450h+var_1D8]
/*1409f65ff*/  call sub_141433D50
/*1409f6604*/  nop
/*1409f6605*/  mov rcx, r13
/*1409f6608*/  test rax, rax
/*1409f660b*/  jz short loc_1409F65D0
/*1409f660d*/  movzx ecx, byte ptr [rax]
/*1409f6610*/  movsxd rcx, ds:(jpt_1409F6617 - 1417AAF44h)[r12+rcx*4]; switch 6 cases  // switch 6 cases
/*1409f6614*/  add rcx, r12
/*1409f6617*/  jmp rcx; switch jump  // switch jump
/*1409f6619*/ loc_1409F6619: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409F6617 cases 1,2  // jumptable 00000001409F6617 cases 1,2
/*1409f661d*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f6621*/  movaps [rbp+450h+var_1A0], xmm1
/*1409f6628*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f6630*/  jmp loc_1409F66C0
/*1409f6635*/ loc_1409F6635: mov rdx, [rax+10h]; jumptable 00000001409F6617 case 4  // jumptable 00000001409F6617 case 4
/*1409f6639*/  mov r8, [rax+18h]
/*1409f663d*/  mov rcx, rsi
/*1409f6640*/  call sub_1402CE260
/*1409f6645*/  nop
/*1409f6646*/  mov byte ptr [rbp+450h+var_1B0], 4
/*1409f664d*/  jmp short loc_1409F66C0
/*1409f664f*/ loc_1409F664F: mov byte ptr [rbp+450h+var_1B0], 0; jumptable 00000001409F6617 case 0  // jumptable 00000001409F6617 case 0
/*1409f6656*/  jmp short loc_1409F66C0
/*1409f6658*/ loc_1409F6658: add rax, 8; jumptable 00000001409F6617 case 3  // jumptable 00000001409F6617 case 3
/*1409f665c*/  mov rcx, rsi
/*1409f665f*/  mov rdx, rax
/*1409f6662*/  call sub_14149C500
/*1409f6667*/  nop
/*1409f6668*/  mov byte ptr [rbp+450h+var_1B0], 3
/*1409f666f*/  jmp short loc_1409F66C0
/*1409f6671*/ loc_1409F6671: cmp qword ptr [rax+18h], 0; jumptable 00000001409F6617 case 5  // jumptable 00000001409F6617 case 5
/*1409f6676*/  jz short loc_1409F6694
/*1409f6678*/  mov rdx, [rax+8]
/*1409f667c*/  test rdx, rdx
/*1409f667f*/  jz loc_1409F7DD7
/*1409f6685*/  mov r8, [rax+10h]
/*1409f6689*/  mov rcx, rsi
/*1409f668c*/  call sub_1402CCD80
/*1409f6691*/  nop
/*1409f6692*/  jmp short loc_1409F66AA
/*1409f6694*/ loc_1409F6694: mov qword ptr [rbp+450h+var_1B0+8], 0
/*1409f669f*/  mov qword ptr [rbp+450h+var_1A0+8], 0
/*1409f66aa*/ loc_1409F66AA: mov byte ptr [rbp+450h+var_1B0], 5
/*1409f66b1*/  nop word ptr [rax+rax+00000000h]
/*1409f66c0*/ loc_1409F66C0: mov [rbp+450h+var_246], 1
/*1409f66c7*/ loc_1409F66C7: mov rcx, r14
/*1409f66ca*/  mov rdx, r15
/*1409f66cd*/  mov r8, rbx
/*1409f66d0*/  call sub_141433E50
/*1409f66d5*/  nop
/*1409f66d6*/ loc_1409F66D6: mov [rbp+450h+var_A8], rax
/*1409f66dd*/  mov rcx, rax
/*1409f66e0*/  call sub_1400104F0
/*1409f66e5*/  nop
/*1409f66e6*/  movdqa xmm0, [rbp+450h+var_1B0]
/*1409f66ee*/  movaps xmm1, [rbp+450h+var_1A0]
/*1409f66f5*/  mov rax, [rbp+450h+var_A8]
/*1409f66fc*/  movups xmmword ptr [rax+10h], xmm1
/*1409f6700*/  movdqu xmmword ptr [rax], xmm0
/*1409f6704*/  mov rcx, r13
/*1409f6707*/  jmp loc_1409F65D0
/*1409f670c*/ loc_1409F670C: lea rcx, aMessages; "messages"
/*1409f6713*/  lea r8, [rbp+450h+var_2C0]
/*1409f671a*/  mov edx, 8
/*1409f671f*/  call sub_141433D50
/*1409f6724*/  nop
/*1409f6725*/  mov rdi, rax
/*1409f6728*/  test rax, rax
/*1409f672b*/  jz loc_1409F75C4
/*1409f6731*/  cmp byte ptr [rdi], 4
/*1409f6734*/  jnz loc_1409F75C4
/*1409f673a*/  call sub_141470CD0
/*1409f673f*/  nop
/*1409f6740*/  mov rsi, rax
/*1409f6743*/  cmp byte ptr [rax+10h], 1
/*1409f6747*/  jnz loc_1409F7EB5
/*1409f674d*/  mov rax, [rsi]
/*1409f6750*/  mov rdx, [rsi+8]
/*1409f6754*/ loc_1409F6754: mov rcx, rdi
/*1409f6757*/  add rcx, 8
/*1409f675b*/  mov [rbp+450h+var_208], rcx
/*1409f6762*/  lea rcx, [rax+1]
/*1409f6766*/  mov [rsi], rcx
/*1409f6769*/  movdqa [rbp+450h+var_100], xmm6
/*1409f6771*/  movdqa [rbp+450h+var_110], xmm7
/*1409f6779*/  mov [rbp+450h+var_F0], rax
/*1409f6780*/  mov [rbp+450h+var_E8], rdx
/*1409f6787*/  xor r12d, r12d
/*1409f678a*/  pcmpeqd xmm8, xmm8
/*1409f678f*/  mov [rbp+450h+var_A8], rdi
/*1409f6796*/  jmp loc_1409F6AE1
/*1409f67a0*/ loc_1409F67A0: cmp r12, [rdi+18h]
/*1409f67a4*/  jnb loc_1409F6CD7
/*1409f67aa*/  mov r8, [rdi+10h]
/*1409f67ae*/  add r8, r14
/*1409f67b1*/ loc_1409F67B1: mov edx, 4
/*1409f67b6*/  lea rcx, aRole_4; "role"
/*1409f67bd*/  call sub_141433D50
/*1409f67c2*/  nop
/*1409f67c3*/  test rax, rax
/*1409f67c6*/  jz loc_1409F69F0
/*1409f67cc*/  cmp byte ptr [rax], 3
/*1409f67cf*/  jnz loc_1409F69F0
/*1409f67d5*/  mov rcx, [rax+10h]
/*1409f67d9*/  mov rax, [rax+18h]
/*1409f67dd*/  cmp rax, 4
/*1409f67e1*/  jnz loc_1409F69C6
/*1409f67e7*/  cmp dword ptr [rcx], 6C6F6F74h
/*1409f67ed*/  jnz loc_1409F69F0
/*1409f67f3*/  mov rdx, [rdi+18h]
/*1409f67f7*/  cmp r12, rdx
/*1409f67fa*/  jnb loc_1409F8345
/*1409f6800*/  mov r8, [rdi+10h]
/*1409f6804*/  add r8, r14
/*1409f6807*/  mov edx, 0Ch
/*1409f680c*/  lea rcx, aToolCallId; "tool_call_id"
/*1409f6813*/  call sub_141433D50
/*1409f6818*/  nop
/*1409f6819*/ loc_1409F6819: mov esi, 1
/*1409f681e*/  test rax, rax
/*1409f6821*/  jz short loc_1409F6840
/*1409f6823*/  cmp byte ptr [rax], 3
/*1409f6826*/  jnz short loc_1409F6840
/*1409f6828*/  mov rsi, [rax+10h]
/*1409f682c*/  mov r15, [rax+18h]
/*1409f6830*/  cmp qword ptr [rbp+450h+var_100+8], 0
/*1409f6838*/  jnz short loc_1409F6851
/*1409f683a*/  jmp loc_1409F6920
/*1409f6840*/ loc_1409F6840: xor r15d, r15d
/*1409f6843*/  cmp qword ptr [rbp+450h+var_100+8], 0
/*1409f684b*/  jz loc_1409F6920
/*1409f6851*/ loc_1409F6851: lea rcx, [rbp+450h+var_F0]
/*1409f6858*/  mov rdx, rsi
/*1409f685b*/  mov r8, r15
/*1409f685e*/  call sub_1403795A0
/*1409f6863*/  mov r13, rax
/*1409f6866*/  shr rax, 39h
/*1409f686a*/  mov rdi, qword ptr [rbp+450h+var_110]
/*1409f6871*/  mov r12, qword ptr [rbp+450h+var_110+8]
/*1409f6878*/  movd xmm0, eax
/*1409f687c*/  punpcklbw xmm0, xmm0
/*1409f6880*/  pshuflw xmm0, xmm0, 0
/*1409f6885*/  pshufd xmm9, xmm0, 44h ; 'D'
/*1409f688b*/  xor ecx, ecx
/*1409f688d*/ loc_1409F688D: and r13, r12
/*1409f6890*/  movdqu xmm10, xmmword ptr [rdi+r13]
/*1409f6896*/  movdqa xmm0, xmm10
/*1409f689b*/  pcmpeqb xmm0, xmm9
/*1409f68a0*/  pmovmskb ebx, xmm0
/*1409f68a4*/  test ebx, ebx
/*1409f68a6*/  jz short loc_1409F6900
/*1409f68a8*/  mov [rbp+450h+var_220], rcx
/*1409f68af*/ loc_1409F68AF: tzcnt eax, ebx
/*1409f68b3*/  add rax, r13
/*1409f68b6*/  and rax, r12
/*1409f68b9*/  neg rax
/*1409f68bc*/  lea rax, [rax+rax*2]
/*1409f68c0*/  cmp r15, [rdi+rax*8-8]
/*1409f68c5*/  jnz short loc_1409F68E2
/*1409f68c7*/  lea rax, [rdi+rax*8]
/*1409f68cb*/  mov rdx, [rax-10h]
/*1409f68cf*/  mov rcx, rsi
/*1409f68d2*/  mov r8, r15
/*1409f68d5*/  call sub_1416847B0
/*1409f68da*/  test eax, eax
/*1409f68dc*/  jz loc_1409F6AD0
/*1409f68e2*/ loc_1409F68E2: lea eax, [rbx-1]
/*1409f68e5*/  and ax, bx
/*1409f68e8*/  mov ebx, eax
/*1409f68ea*/  mov rcx, [rbp+450h+var_220]
/*1409f68f1*/  jnz short loc_1409F68AF
/*1409f68f3*/  nop word ptr [rax+rax+00000000h]
/*1409f6900*/ loc_1409F6900: pcmpeqb xmm10, xmm8
/*1409f6905*/  pmovmskb eax, xmm10
/*1409f690a*/  test eax, eax
/*1409f690c*/  jnz short loc_1409F6920
/*1409f690e*/  add r13, rcx
/*1409f6911*/  add r13, 10h
/*1409f6915*/  add rcx, 10h
/*1409f6919*/  jmp loc_1409F688D
/*1409f6920*/ loc_1409F6920: mov rdi, [rbp+450h+var_A8]
/*1409f6927*/  mov rsi, [rdi+18h]
/*1409f692b*/  mov r12, [rbp+450h+var_1D8]
/*1409f6932*/  cmp r12, rsi
/*1409f6935*/  jnb loc_1409F8429
/*1409f693b*/  mov rax, [rdi+10h]
/*1409f693f*/  lea rcx, [rax+r14]
/*1409f6943*/  movzx ebx, byte ptr [rax+r14]
/*1409f6948*/  movups xmm0, xmmword ptr [rax+r14+10h]
/*1409f694e*/  movups [rbp+450h+var_170+0Fh], xmm0
/*1409f6955*/  movdqu xmm0, xmmword ptr [rax+r14+1]
/*1409f695c*/  movdqa [rbp+450h+var_170], xmm0
/*1409f6964*/  lea rdx, [rax+r14]
/*1409f6968*/  add rdx, 20h ; ' '
/*1409f696c*/  mov rax, [rbp+450h+var_B8]
/*1409f6973*/  lea r8, [rsi+rax]
/*1409f6977*/  shl r8, 5
/*1409f697b*/  call sub_141684120
/*1409f6980*/  dec rsi
/*1409f6983*/  mov [rdi+18h], rsi
/*1409f6987*/  cmp bl, 0FFh
/*1409f698a*/  jz loc_1409F8429
/*1409f6990*/  mov byte ptr [rbp+450h+var_1B0], bl
/*1409f6996*/  movups xmm0, [rbp+450h+var_170+0Fh]
/*1409f699d*/  lea rax, [rbp+450h+var_1B0+1]
/*1409f69a4*/  movups xmmword ptr [rax+0Fh], xmm0
/*1409f69a8*/  movdqa xmm0, [rbp+450h+var_170]
/*1409f69b0*/  movdqu xmmword ptr [rax], xmm0
/*1409f69b4*/ loc_1409F69B4: lea rcx, [rbp+450h+var_1B0]
/*1409f69bb*/  call sub_1400104F0
/*1409f69c0*/  nop
/*1409f69c1*/ loc_1409F69C1: jmp loc_1409F67A0
/*1409f69c6*/ loc_1409F69C6: cmp rax, 9
/*1409f69ca*/  jnz short loc_1409F69F0
/*1409f69cc*/  mov rax, [rcx]
/*1409f69cf*/  mov rdx, 6E61747369737361h
/*1409f69d9*/  xor rax, rdx
/*1409f69dc*/  movzx ecx, byte ptr [rcx+8]
/*1409f69e0*/  xor rcx, 74h
/*1409f69e4*/  or rcx, rax
/*1409f69e7*/  jz loc_1409F6B01
/*1409f69ed*/  nop dword ptr [rax]
/*1409f69f0*/ loc_1409F69F0: mov rbx, qword ptr [rbp+450h+var_100+8]
/*1409f69f7*/  test rbx, rbx
/*1409f69fa*/  jz loc_1409F6AD0
/*1409f6a00*/  mov rsi, qword ptr [rbp+450h+var_110]
/*1409f6a07*/  movdqa xmm0, xmmword ptr [rsi]
/*1409f6a0b*/  lea r14, [rsi+10h]
/*1409f6a0f*/  pmovmskb edi, xmm0
/*1409f6a13*/  not edi
/*1409f6a15*/  mov r15, rsi
/*1409f6a18*/  jmp short loc_1409F6A2C
/*1409f6a20*/ loc_1409F6A20: lea eax, [rdi-1]
/*1409f6a23*/  and eax, edi
/*1409f6a25*/  mov edi, eax
/*1409f6a27*/  dec rbx
/*1409f6a2a*/  jz short loc_1409F6A86
/*1409f6a2c*/ loc_1409F6A2C: test di, di
/*1409f6a2f*/  jnz short loc_1409F6A5C
/*1409f6a31*/  nop word ptr [rax+rax+00000000h]
/*1409f6a40*/ loc_1409F6A40: movdqa xmm0, xmmword ptr [r14]
/*1409f6a45*/  add r15, 0FFFFFFFFFFFFFE80h
/*1409f6a4c*/  add r14, 10h
/*1409f6a50*/  pmovmskb edi, xmm0
/*1409f6a54*/  xor edi, 0FFFFh
/*1409f6a5a*/  jz short loc_1409F6A40
/*1409f6a5c*/ loc_1409F6A5C: tzcnt eax, edi
/*1409f6a60*/  neg rax
/*1409f6a63*/  lea rax, [rax+rax*2]
/*1409f6a67*/  mov rdx, [r15+rax*8-18h]
/*1409f6a6c*/  test rdx, rdx
/*1409f6a6f*/  jz short loc_1409F6A20
/*1409f6a71*/  lea rax, [r15+rax*8]
/*1409f6a75*/  mov rcx, [rax-10h]
/*1409f6a79*/  mov r8d, 1
/*1409f6a7f*/  call sub_140001660
/*1409f6a84*/  jmp short loc_1409F6A20
/*1409f6a86*/ loc_1409F6A86: mov rdi, qword ptr [rbp+450h+var_110+8]
/*1409f6a8d*/  test rdi, rdi
/*1409f6a90*/  jz short loc_1409F6ABC
/*1409f6a92*/  lea r8, [rdi+11h]
/*1409f6a96*/  mov rcx, rsi
/*1409f6a99*/  mov dl, 0FFh
/*1409f6a9b*/  call sub_1416848B0
/*1409f6aa0*/  lea rax, [rdi+1]
/*1409f6aa4*/  mov rcx, rax
/*1409f6aa7*/  shr rcx, 3
/*1409f6aab*/  and rax, 0FFFFFFFFFFFFFFF8h
/*1409f6aaf*/  sub rax, rcx
/*1409f6ab2*/  cmp rdi, 8
/*1409f6ab6*/  cmovb rax, rdi
/*1409f6aba*/  jmp short loc_1409F6ABE
/*1409f6abc*/ loc_1409F6ABC: xor eax, eax
/*1409f6abe*/ loc_1409F6ABE: mov qword ptr [rbp+450h+var_100+8], 0
/*1409f6ac9*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f6ad0*/ loc_1409F6AD0: mov r12, [rbp+450h+var_1D8]
/*1409f6ad7*/  inc r12
/*1409f6ada*/  mov rdi, [rbp+450h+var_A8]
/*1409f6ae1*/ loc_1409F6AE1: mov rax, r12
/*1409f6ae4*/  not rax
/*1409f6ae7*/  mov [rbp+450h+var_B8], rax
/*1409f6aee*/  mov r14, r12
/*1409f6af1*/  shl r14, 5
/*1409f6af5*/  mov [rbp+450h+var_1D8], r12
/*1409f6afc*/  jmp loc_1409F67A0
/*1409f6b01*/ loc_1409F6B01: mov rbx, qword ptr [rbp+450h+var_100+8]
/*1409f6b08*/  test rbx, rbx
/*1409f6b0b*/  jz loc_1409F6BDE
/*1409f6b11*/  mov rsi, qword ptr [rbp+450h+var_110]
/*1409f6b18*/  movdqa xmm0, xmmword ptr [rsi]
/*1409f6b1c*/  lea r15, [rsi+10h]
/*1409f6b20*/  pmovmskb edi, xmm0
/*1409f6b24*/  not edi
/*1409f6b26*/  mov r13, rsi
/*1409f6b29*/  jmp short loc_1409F6B37
/*1409f6b2b*/ loc_1409F6B2B: lea eax, [rdi-1]
/*1409f6b2e*/  and eax, edi
/*1409f6b30*/  mov edi, eax
/*1409f6b32*/  dec rbx
/*1409f6b35*/  jz short loc_1409F6B8D
/*1409f6b37*/ loc_1409F6B37: test di, di
/*1409f6b3a*/  jnz short loc_1409F6B5C
/*1409f6b3c*/  nop dword ptr [rax+00h]
/*1409f6b40*/ loc_1409F6B40: movdqa xmm0, xmmword ptr [r15]
/*1409f6b45*/  add r13, 0FFFFFFFFFFFFFE80h
/*1409f6b4c*/  add r15, 10h
/*1409f6b50*/  pmovmskb edi, xmm0
/*1409f6b54*/  xor edi, 0FFFFh
/*1409f6b5a*/  jz short loc_1409F6B40
/*1409f6b5c*/ loc_1409F6B5C: tzcnt eax, edi
/*1409f6b60*/  neg rax
/*1409f6b63*/  lea rax, [rax+rax*2]
/*1409f6b67*/  mov rdx, [r13+rax*8-18h]
/*1409f6b6c*/  test rdx, rdx
/*1409f6b6f*/  jz short loc_1409F6B2B
/*1409f6b71*/  lea rax, ds:0[rax*8]
/*1409f6b79*/  add rax, r13
/*1409f6b7c*/  mov rcx, [rax-10h]
/*1409f6b80*/  mov r8d, 1
/*1409f6b86*/  call sub_140001660
/*1409f6b8b*/  jmp short loc_1409F6B2B
/*1409f6b8d*/ loc_1409F6B8D: mov rdi, qword ptr [rbp+450h+var_110+8]
/*1409f6b94*/  test rdi, rdi
/*1409f6b97*/  jz short loc_1409F6BC3
/*1409f6b99*/  lea r8, [rdi+11h]
/*1409f6b9d*/  mov rcx, rsi
/*1409f6ba0*/  mov dl, 0FFh
/*1409f6ba2*/  call sub_1416848B0
/*1409f6ba7*/  lea rax, [rdi+1]
/*1409f6bab*/  mov rcx, rax
/*1409f6bae*/  shr rcx, 3
/*1409f6bb2*/  and rax, 0FFFFFFFFFFFFFFF8h
/*1409f6bb6*/  sub rax, rcx
/*1409f6bb9*/  cmp rdi, 8
/*1409f6bbd*/  cmovb rax, rdi
/*1409f6bc1*/  jmp short loc_1409F6BC5
/*1409f6bc3*/ loc_1409F6BC3: xor eax, eax
/*1409f6bc5*/ loc_1409F6BC5: mov rdi, [rbp+450h+var_A8]
/*1409f6bcc*/  mov qword ptr [rbp+450h+var_100+8], 0
/*1409f6bd7*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f6bde*/ loc_1409F6BDE: mov rdx, [rdi+18h]
/*1409f6be2*/  cmp r12, rdx
/*1409f6be5*/  jnb loc_1409F8C4E
/*1409f6beb*/  add r14, [rdi+10h]
/*1409f6bef*/ loc_1409F6BEF: mov edx, 0Ah
/*1409f6bf4*/  lea rcx, aToolCalls; "tool_calls"
/*1409f6bfb*/  mov r8, r14
/*1409f6bfe*/  call sub_141433D50
/*1409f6c03*/  nop
/*1409f6c04*/  test rax, rax
/*1409f6c07*/  jz loc_1409F6CCF
/*1409f6c0d*/  cmp byte ptr [rax], 4
/*1409f6c10*/  jnz loc_1409F6CCF
/*1409f6c16*/  mov rsi, [rax+10h]
/*1409f6c1a*/  mov rbx, [rax+18h]
/*1409f6c1e*/  shl rbx, 5
/*1409f6c22*/  add rbx, rsi
/*1409f6c25*/ loc_1409F6C25: cmp rsi, rbx
/*1409f6c28*/  jz loc_1409F6CCF
/*1409f6c2e*/  mov edx, 2
/*1409f6c33*/  lea rcx, aId_6; "id"
/*1409f6c3a*/  mov r8, rsi
/*1409f6c3d*/  call sub_141433D50
/*1409f6c42*/  nop
/*1409f6c43*/ loc_1409F6C43: add rsi, 20h ; ' '
/*1409f6c47*/  test rax, rax
/*1409f6c4a*/  jz short loc_1409F6C25
/*1409f6c4c*/  cmp byte ptr [rax], 3
/*1409f6c4f*/  jnz short loc_1409F6C25
/*1409f6c51*/  mov r14, [rax+18h]
/*1409f6c55*/  test r14, r14
/*1409f6c58*/  js loc_1409F7E3E
/*1409f6c5e*/  jz short loc_1409F6C95
/*1409f6c60*/  mov r15, [rax+10h]
/*1409f6c64*/  call nullsub_1
/*1409f6c69*/  mov edx, 1
/*1409f6c6e*/  mov rcx, r14
/*1409f6c71*/  call sub_140001650
/*1409f6c76*/  test rax, rax
/*1409f6c79*/  jz loc_1409F8D3E
/*1409f6c7f*/  mov rcx, rax
/*1409f6c82*/  mov rdx, r15
/*1409f6c85*/  mov r8, r14
/*1409f6c88*/  mov r15, rax
/*1409f6c8b*/  call sub_141684120
/*1409f6c90*/  mov rax, r15
/*1409f6c93*/  jmp short loc_1409F6C9A
/*1409f6c95*/ loc_1409F6C95: mov eax, 1
/*1409f6c9a*/ loc_1409F6C9A: mov qword ptr [rbp+450h+var_1B0], r14
/*1409f6ca1*/  mov [rbp+450h+var_1B8], rax
/*1409f6ca8*/  mov qword ptr [rbp+450h+var_1B0+8], rax
/*1409f6caf*/  mov qword ptr [rbp+450h+var_1A0], r14
/*1409f6cb6*/ loc_1409F6CB6: lea rcx, [rbp+450h+var_110]
/*1409f6cbd*/  lea rdx, [rbp+450h+var_1B0]
/*1409f6cc4*/  call sub_140474440
/*1409f6cc9*/  nop
/*1409f6cca*/  jmp loc_1409F6C25
/*1409f6ccf*/ loc_1409F6CCF: inc r12
/*1409f6cd2*/  jmp loc_1409F6AE1
/*1409f6cd7*/ loc_1409F6CD7: mov rsi, qword ptr [rbp+450h+var_110+8]
/*1409f6cde*/  test rsi, rsi
/*1409f6ce1*/  jz loc_1409F6DAE
/*1409f6ce7*/  mov rbx, qword ptr [rbp+450h+var_100+8]
/*1409f6cee*/  test rbx, rbx
/*1409f6cf1*/  jz loc_1409F6D76
/*1409f6cf7*/  mov r14, qword ptr [rbp+450h+var_110]
/*1409f6cfe*/  movdqa xmm0, xmmword ptr [r14]
/*1409f6d03*/  lea r15, [r14+10h]
/*1409f6d07*/  pmovmskb edi, xmm0
/*1409f6d0b*/  not edi
/*1409f6d0d*/  jmp short loc_1409F6D1F
/*1409f6d10*/ loc_1409F6D10: dec rbx
/*1409f6d13*/  lea eax, [rdi-1]
/*1409f6d16*/  and eax, edi
/*1409f6d18*/  mov edi, eax
/*1409f6d1a*/  test rbx, rbx
/*1409f6d1d*/  jz short loc_1409F6D76
/*1409f6d1f*/ loc_1409F6D1F: test di, di
/*1409f6d22*/  jnz short loc_1409F6D4C
/*1409f6d24*/  nop word ptr [rax+rax+00000000h]
/*1409f6d30*/ loc_1409F6D30: movdqa xmm0, xmmword ptr [r15]
/*1409f6d35*/  add r14, 0FFFFFFFFFFFFFE80h
/*1409f6d3c*/  add r15, 10h
/*1409f6d40*/  pmovmskb edi, xmm0
/*1409f6d44*/  xor edi, 0FFFFh
/*1409f6d4a*/  jz short loc_1409F6D30
/*1409f6d4c*/ loc_1409F6D4C: tzcnt eax, edi
/*1409f6d50*/  neg rax
/*1409f6d53*/  lea rax, [rax+rax*2]
/*1409f6d57*/  mov rdx, [r14+rax*8-18h]
/*1409f6d5c*/  test rdx, rdx
/*1409f6d5f*/  jz short loc_1409F6D10
/*1409f6d61*/  lea rax, [r14+rax*8]
/*1409f6d65*/  mov rcx, [rax-10h]
/*1409f6d69*/  mov r8d, 1
/*1409f6d6f*/  call sub_140001660
/*1409f6d74*/  jmp short loc_1409F6D10
/*1409f6d76*/ loc_1409F6D76: lea rax, [rsi+rsi*2]
/*1409f6d7a*/  lea rax, ds:27h[rax*8]
/*1409f6d82*/  and rax, 0FFFFFFFFFFFFFFF0h
/*1409f6d86*/  add rsi, rax
/*1409f6d89*/  add rsi, 11h
/*1409f6d8d*/  mov rdi, [rbp+450h+var_A8]
/*1409f6d94*/  jz short loc_1409F6DAE
/*1409f6d96*/  mov rcx, qword ptr [rbp+450h+var_110]
/*1409f6d9d*/  sub rcx, rax
/*1409f6da0*/  mov r8d, 10h
/*1409f6da6*/  mov rdx, rsi
/*1409f6da9*/  call sub_140001660
/*1409f6dae*/ loc_1409F6DAE: lea r14, [rbp+450h+var_170+1]
/*1409f6db5*/  lea r15, aRole_4; "role"
/*1409f6dbc*/  xor r12d, r12d
/*1409f6dbf*/  mov rsi, [rdi+10h]
/*1409f6dc3*/  mov r13, [rdi+18h]
/*1409f6dc7*/  cmp r12, r13
/*1409f6dca*/  jb short loc_1409F6E10
/*1409f6dcc*/ loc_1409F6DCC: test r13, r13
/*1409f6dcf*/  jz loc_1409F75C4
/*1409f6dd5*/  shl r13, 5
/*1409f6dd9*/  add r13, rsi
/*1409f6ddc*/  lea rdi, aRole_4; "role"
/*1409f6de3*/  lea rbx, aReasoningConte; "reasoning_content"
/*1409f6dea*/  mov r14, rsi
/*1409f6ded*/  jmp loc_1409F742D
/*1409f6e00*/ loc_1409F6E00: inc r12
/*1409f6e03*/  mov rsi, [rdi+10h]
/*1409f6e07*/  mov r13, [rdi+18h]
/*1409f6e0b*/  cmp r12, r13
/*1409f6e0e*/  jnb short loc_1409F6DCC
/*1409f6e10*/ loc_1409F6E10: mov rbx, r12
/*1409f6e13*/  shl rbx, 5
/*1409f6e17*/  add rsi, rbx
/*1409f6e1a*/ loc_1409F6E1A: mov edx, 4
/*1409f6e1f*/  mov rcx, r15
/*1409f6e22*/  mov r8, rsi
/*1409f6e25*/  call sub_141433D50
/*1409f6e2a*/  nop
/*1409f6e2b*/  test rax, rax
/*1409f6e2e*/  jz short loc_1409F6E00
/*1409f6e30*/  cmp byte ptr [rax], 3
/*1409f6e33*/  jnz short loc_1409F6E00
/*1409f6e35*/  cmp qword ptr [rax+18h], 9
/*1409f6e3a*/  jnz short loc_1409F6E00
/*1409f6e3c*/  mov rax, [rax+10h]
/*1409f6e40*/  mov rcx, [rax]
/*1409f6e43*/  mov rdx, 6E61747369737361h
/*1409f6e4d*/  xor rcx, rdx
/*1409f6e50*/  movzx eax, byte ptr [rax+8]
/*1409f6e54*/  xor rax, 74h
/*1409f6e58*/  or rax, rcx
/*1409f6e5b*/  jnz short loc_1409F6E00
/*1409f6e5d*/  mov rdx, [rdi+18h]
/*1409f6e61*/  cmp r12, rdx
/*1409f6e64*/  jnb loc_1409F85DE
/*1409f6e6a*/  mov r8, [rdi+10h]
/*1409f6e6e*/  add r8, rbx
/*1409f6e71*/  mov edx, 0Ah
/*1409f6e76*/  lea rcx, aToolCalls; "tool_calls"
/*1409f6e7d*/  call sub_141433D50
/*1409f6e82*/  nop
/*1409f6e83*/  test rax, rax
/*1409f6e86*/  jz loc_1409F6E00
/*1409f6e8c*/  cmp byte ptr [rax], 4
/*1409f6e8f*/  jnz loc_1409F6E00
/*1409f6e95*/  cmp qword ptr [rax+18h], 0
/*1409f6e9a*/  jz loc_1409F6E00
/*1409f6ea0*/  mov rdx, [rdi+18h]
/*1409f6ea4*/  cmp r12, rdx
/*1409f6ea7*/  jnb loc_1409F8CA4
/*1409f6ead*/  add rbx, [rdi+10h]
/*1409f6eb1*/  mov edx, 0Ah
/*1409f6eb6*/  lea rcx, aToolCalls; "tool_calls"
/*1409f6ebd*/  mov r8, rbx
/*1409f6ec0*/  call sub_141433D50
/*1409f6ec5*/  nop
/*1409f6ec6*/  test rax, rax
/*1409f6ec9*/  jz loc_1409F8417
/*1409f6ecf*/  cmp byte ptr [rax], 4
/*1409f6ed2*/  jnz loc_1409F8417
/*1409f6ed8*/  mov rdx, [rax+10h]
/*1409f6edc*/  mov r8, [rax+18h]
/*1409f6ee0*/  shl r8, 5
/*1409f6ee4*/  add r8, rdx
/*1409f6ee7*/  lea rcx, [rbp+450h+var_200]
/*1409f6eee*/  call sub_140311000
/*1409f6ef3*/  nop
/*1409f6ef4*/ loc_1409F6EF4: call sub_141470CD0
/*1409f6ef9*/  nop
/*1409f6efa*/  mov rsi, rax
/*1409f6efd*/  cmp byte ptr [rax+10h], 1
/*1409f6f01*/  jnz loc_1409F73FE
/*1409f6f07*/  mov rax, [rsi]
/*1409f6f0a*/  mov rdx, [rsi+8]
/*1409f6f0e*/ loc_1409F6F0E: lea rcx, [rax+1]
/*1409f6f12*/  mov [rsi], rcx
/*1409f6f15*/  movdqa [rbp+450h+var_100], xmm6
/*1409f6f1d*/  movdqa [rbp+450h+var_110], xmm7
/*1409f6f25*/  mov [rbp+450h+var_F0], rax
/*1409f6f2c*/  mov [rbp+450h+var_E8], rdx
/*1409f6f33*/ loc_1409F6F33: inc r12
/*1409f6f36*/  cmp r12, [rdi+18h]
/*1409f6f3a*/  jnb loc_1409F7043
/*1409f6f40*/  mov rsi, r12
/*1409f6f43*/  shl rsi, 5
/*1409f6f47*/  mov r8, [rdi+10h]
/*1409f6f4b*/  add r8, rsi
/*1409f6f4e*/ loc_1409F6F4E: mov edx, 4
/*1409f6f53*/  mov rcx, r15
/*1409f6f56*/  call sub_141433D50
/*1409f6f5b*/  nop
/*1409f6f5c*/  test rax, rax
/*1409f6f5f*/  jz loc_1409F7043
/*1409f6f65*/  cmp byte ptr [rax], 3
/*1409f6f68*/  jnz loc_1409F7043
/*1409f6f6e*/  cmp qword ptr [rax+18h], 4
/*1409f6f73*/  jnz loc_1409F7043
/*1409f6f79*/  mov rax, [rax+10h]
/*1409f6f7d*/  cmp dword ptr [rax], 6C6F6F74h
/*1409f6f83*/  jnz loc_1409F7043
/*1409f6f89*/  mov rdx, [rdi+18h]
/*1409f6f8d*/  cmp r12, rdx
/*1409f6f90*/  jnb loc_1409F8A08
/*1409f6f96*/  add rsi, [rdi+10h]
/*1409f6f9a*/  mov edx, 0Ch
/*1409f6f9f*/  lea rcx, aToolCallId; "tool_call_id"
/*1409f6fa6*/  mov r8, rsi
/*1409f6fa9*/  call sub_141433D50
/*1409f6fae*/  nop
/*1409f6faf*/ loc_1409F6FAF: test rax, rax
/*1409f6fb2*/  jz loc_1409F6F33
/*1409f6fb8*/  cmp byte ptr [rax], 3
/*1409f6fbb*/  jnz loc_1409F6F33
/*1409f6fc1*/  mov rsi, [rax+18h]
/*1409f6fc5*/  test rsi, rsi
/*1409f6fc8*/  js loc_1409F7E52
/*1409f6fce*/  jz short loc_1409F7002
/*1409f6fd0*/  mov rbx, [rax+10h]
/*1409f6fd4*/  call nullsub_1
/*1409f6fd9*/  mov edx, 1
/*1409f6fde*/  mov rcx, rsi
/*1409f6fe1*/  call sub_140001650
/*1409f6fe6*/  test rax, rax
/*1409f6fe9*/  jz loc_1409F8D2D
/*1409f6fef*/  mov rdi, rax
/*1409f6ff2*/  mov rcx, rax
/*1409f6ff5*/  mov rdx, rbx
/*1409f6ff8*/  mov r8, rsi
/*1409f6ffb*/  call sub_141684120
/*1409f7000*/  jmp short loc_1409F7007
/*1409f7002*/ loc_1409F7002: mov edi, 1
/*1409f7007*/ loc_1409F7007: mov qword ptr [rbp+450h+var_1B0], rsi
/*1409f700e*/  mov [rbp+450h+var_308], rdi
/*1409f7015*/  mov qword ptr [rbp+450h+var_1B0+8], rdi
/*1409f701c*/  mov qword ptr [rbp+450h+var_1A0], rsi
/*1409f7023*/ loc_1409F7023: lea rcx, [rbp+450h+var_110]
/*1409f702a*/  lea rdx, [rbp+450h+var_1B0]
/*1409f7031*/  call sub_140474440
/*1409f7036*/  nop
/*1409f7037*/  mov rdi, [rbp+450h+var_A8]
/*1409f703e*/  jmp loc_1409F6F33
/*1409f7043*/ loc_1409F7043: mov rax, qword ptr [rbp+450h+var_200+8]
/*1409f704a*/  mov rbx, qword ptr [rbp+450h+var_1F0]
/*1409f7051*/  lea rcx, [rbx+rbx*2]
/*1409f7055*/  lea rcx, [rax+rcx*8]
/*1409f7059*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f7060*/  mov qword ptr [rbp+450h+var_1B0+8], rcx
/*1409f7067*/  lea rax, [rbp+450h+var_110]
/*1409f706e*/  mov qword ptr [rbp+450h+var_1A0], rax
/*1409f7075*/  lea rcx, [rbp+450h+var_140]
/*1409f707c*/  lea rdx, [rbp+450h+var_1B0]
/*1409f7083*/  call sub_140316010
/*1409f7088*/  nop
/*1409f7089*/  mov rdx, qword ptr [rbp+450h+var_130]
/*1409f7090*/  test rdx, rdx
/*1409f7093*/  jz loc_1409F71D7
/*1409f7099*/  mov rax, qword ptr [rbp+450h+var_140]
/*1409f70a0*/  mov rcx, qword ptr [rbp+450h+var_140+8]
/*1409f70a7*/  shl rdx, 5
/*1409f70ab*/  mov [rbp+450h+var_2F8], rdx
/*1409f70b2*/  add rdx, rcx
/*1409f70b5*/  mov qword ptr [rbp+450h+var_1B0], rcx
/*1409f70bc*/  mov qword ptr [rbp+450h+var_1B0+8], rcx
/*1409f70c3*/  mov [rbp+450h+var_220], rax
/*1409f70ca*/  mov qword ptr [rbp+450h+var_1A0], rax
/*1409f70d1*/  mov qword ptr [rbp+450h+var_1A0+8], rdx
/*1409f70d8*/  mov [rbp+450h+var_190], 0
/*1409f70e3*/  xor r14d, r14d
/*1409f70e6*/  mov [rbp+450h+var_1B8], rcx
/*1409f70ed*/  mov rax, rcx
/*1409f70f0*/  mov [rbp+450h+var_B8], rdx
/*1409f70f7*/  jmp short loc_1409F712B
/*1409f70f9*/ loc_1409F70F9: movdqu xmm0, [rbp+450h+var_170]
/*1409f7101*/  movups xmm1, [rbp+450h+var_160]
/*1409f7108*/  movups xmmword ptr [rsi+10h], xmm1
/*1409f710c*/  movdqu xmmword ptr [rsi], xmm0
/*1409f7110*/  inc rbx
/*1409f7113*/  mov rax, [rbp+450h+var_A8]
/*1409f711a*/  mov [rax+18h], rbx
/*1409f711e*/  mov r14, rdi
/*1409f7121*/  mov rax, r13
/*1409f7124*/  mov rdx, [rbp+450h+var_B8]
/*1409f712b*/ loc_1409F712B: cmp rax, rdx
/*1409f712e*/  jz loc_1409F7216
/*1409f7134*/  lea r13, [rax+20h]
/*1409f7138*/  mov qword ptr [rbp+450h+var_1B0+8], r13
/*1409f713f*/  movzx ecx, byte ptr [rax]
/*1409f7142*/  cmp cl, 0FFh
/*1409f7145*/  jz loc_1409F7219
/*1409f714b*/  movdqu xmm0, xmmword ptr [rax+1]
/*1409f7150*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f7154*/  lea rax, [rbp+450h+var_170+1]
/*1409f715b*/  movups xmmword ptr [rax+0Fh], xmm1
/*1409f715f*/  movdqu xmmword ptr [rax], xmm0
/*1409f7163*/  lea rdi, [r14+1]
/*1409f7167*/  mov [rbp+450h+var_190], rdi
/*1409f716e*/  mov byte ptr [rbp+450h+var_170], cl
/*1409f7174*/  add r14, r12
/*1409f7177*/  mov rax, [rbp+450h+var_A8]
/*1409f717e*/  mov rbx, [rax+18h]
/*1409f7182*/  cmp rbx, r14
/*1409f7185*/  jb loc_1409F8085
/*1409f718b*/  mov rax, [rbp+450h+var_208]
/*1409f7192*/  cmp rbx, [rax]
/*1409f7195*/  jnz short loc_1409F71A4
/*1409f7197*/ loc_1409F7197: mov rcx, [rbp+450h+var_208]
/*1409f719e*/  call sub_1416890A0
/*1409f71a3*/  nop
/*1409f71a4*/ loc_1409F71A4: mov rsi, r14
/*1409f71a7*/  shl rsi, 5
/*1409f71ab*/  mov rax, [rbp+450h+var_A8]
/*1409f71b2*/  add rsi, [rax+10h]
/*1409f71b6*/  mov r8, rbx
/*1409f71b9*/  sub r8, r14
/*1409f71bc*/  jbe loc_1409F70F9
/*1409f71c2*/  lea rcx, [rsi+20h]
/*1409f71c6*/  shl r8, 5
/*1409f71ca*/  mov rdx, rsi
/*1409f71cd*/  call sub_141684120
/*1409f71d2*/  jmp loc_1409F70F9
/*1409f71d7*/ loc_1409F71D7: mov rdx, qword ptr [rbp+450h+var_140]
/*1409f71de*/  mov rax, rbx
/*1409f71e1*/  sub rax, qword ptr [rbp+450h+var_100+8]
/*1409f71e8*/  mov r13d, 0
/*1409f71ee*/  cmovnb r13, rax
/*1409f71f2*/  test rdx, rdx
/*1409f71f5*/  jz loc_1409F72A9
/*1409f71fb*/  mov rcx, qword ptr [rbp+450h+var_140+8]
/*1409f7202*/  shl rdx, 5
/*1409f7206*/  mov r8d, 8
/*1409f720c*/  call sub_140001660
/*1409f7211*/  jmp loc_1409F72A9
/*1409f7216*/ loc_1409F7216: mov r13, rdx
/*1409f7219*/ loc_1409F7219: sub rdx, r13
/*1409f721c*/  shr rdx, 5
/*1409f7220*/  mov [rbp+450h+var_B8], rdx
/*1409f7227*/  mov [rbp+450h+var_300], r13
/*1409f722e*/  mov rcx, r13
/*1409f7231*/  mov [rbp+450h+var_1D8], 0
/*1409f723c*/  lea r14, [rbp+450h+var_170+1]
/*1409f7243*/ loc_1409F7243: mov rax, [rbp+450h+var_1D8]
/*1409f724a*/  cmp [rbp+450h+var_B8], rax
/*1409f7251*/  jz short loc_1409F726C
/*1409f7253*/  inc rax
/*1409f7256*/  mov [rbp+450h+var_1D8], rax
/*1409f725d*/  lea rsi, [rcx+20h]
/*1409f7261*/ loc_1409F7261: call sub_1402C3260
/*1409f7266*/  nop
/*1409f7267*/  mov rcx, rsi
/*1409f726a*/  jmp short loc_1409F7243
/*1409f726c*/ loc_1409F726C: mov rdx, [rbp+450h+var_220]
/*1409f7273*/  test rdx, rdx
/*1409f7276*/  jz short loc_1409F728E
/*1409f7278*/  shl rdx, 5
/*1409f727c*/  mov r8d, 8
/*1409f7282*/  mov rcx, [rbp+450h+var_1B8]
/*1409f7289*/  call sub_140001660
/*1409f728e*/ loc_1409F728E: mov rbx, qword ptr [rbp+450h+var_1F0]
/*1409f7295*/  mov rax, rbx
/*1409f7298*/  sub rax, qword ptr [rbp+450h+var_100+8]
/*1409f729f*/  mov r13d, 0
/*1409f72a5*/  cmovnb r13, rax
/*1409f72a9*/ loc_1409F72A9: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f72b0*/  test rax, rax
/*1409f72b3*/  jz loc_1409F7388
/*1409f72b9*/  mov [rbp+450h+var_B8], rax
/*1409f72c0*/  mov [rbp+450h+var_1D8], r13
/*1409f72c7*/  mov r13, qword ptr [rbp+450h+var_100+8]
/*1409f72ce*/  test r13, r13
/*1409f72d1*/  jz short loc_1409F7345
/*1409f72d3*/  mov r14, qword ptr [rbp+450h+var_110]
/*1409f72da*/  movdqa xmm0, xmmword ptr [r14]
/*1409f72df*/  lea rsi, [r14+10h]
/*1409f72e3*/  pmovmskb edi, xmm0
/*1409f72e7*/  not edi
/*1409f72e9*/  jmp short loc_1409F72FA
/*1409f72eb*/ loc_1409F72EB: dec r13
/*1409f72ee*/  lea eax, [rdi-1]
/*1409f72f1*/  and eax, edi
/*1409f72f3*/  mov edi, eax
/*1409f72f5*/  test r13, r13
/*1409f72f8*/  jz short loc_1409F7345
/*1409f72fa*/ loc_1409F72FA: test di, di
/*1409f72fd*/  jnz short loc_1409F731B
/*1409f72ff*/  nop
/*1409f7300*/ loc_1409F7300: movdqa xmm0, xmmword ptr [rsi]
/*1409f7304*/  add r14, 0FFFFFFFFFFFFFE80h
/*1409f730b*/  add rsi, 10h
/*1409f730f*/  pmovmskb edi, xmm0
/*1409f7313*/  xor edi, 0FFFFh
/*1409f7319*/  jz short loc_1409F7300
/*1409f731b*/ loc_1409F731B: tzcnt eax, edi
/*1409f731f*/  neg rax
/*1409f7322*/  lea rax, [rax+rax*2]
/*1409f7326*/  mov rdx, [r14+rax*8-18h]
/*1409f732b*/  test rdx, rdx
/*1409f732e*/  jz short loc_1409F72EB
/*1409f7330*/  lea rax, [r14+rax*8]
/*1409f7334*/  mov rcx, [rax-10h]
/*1409f7338*/  mov r8d, 1
/*1409f733e*/  call sub_140001660
/*1409f7343*/  jmp short loc_1409F72EB
/*1409f7345*/ loc_1409F7345: mov rdx, [rbp+450h+var_B8]
/*1409f734c*/  lea rax, [rdx+rdx*2]
/*1409f7350*/  lea rax, ds:27h[rax*8]
/*1409f7358*/  and rax, 0FFFFFFFFFFFFFFF0h
/*1409f735c*/  add rdx, rax
/*1409f735f*/  add rdx, 11h
/*1409f7363*/  lea r14, [rbp+450h+var_170+1]
/*1409f736a*/  mov r13, [rbp+450h+var_1D8]
/*1409f7371*/  jz short loc_1409F7388
/*1409f7373*/  mov rcx, qword ptr [rbp+450h+var_110]
/*1409f737a*/  sub rcx, rax
/*1409f737d*/  mov r8d, 10h
/*1409f7383*/  call sub_140001660
/*1409f7388*/ loc_1409F7388: mov rsi, qword ptr [rbp+450h+var_200+8]
/*1409f738f*/  test rbx, rbx
/*1409f7392*/  jz short loc_1409F73BC
/*1409f7394*/  lea rdi, [rsi+8]
/*1409f7398*/  jmp short loc_1409F73A3
/*1409f739a*/ loc_1409F739A: add rdi, 18h
/*1409f739e*/  dec rbx
/*1409f73a1*/  jz short loc_1409F73BC
/*1409f73a3*/ loc_1409F73A3: mov rdx, [rdi-8]
/*1409f73a7*/  test rdx, rdx
/*1409f73aa*/  jz short loc_1409F739A
/*1409f73ac*/  mov rcx, [rdi]
/*1409f73af*/  mov r8d, 1
/*1409f73b5*/  call sub_140001660
/*1409f73ba*/  jmp short loc_1409F739A
/*1409f73bc*/ loc_1409F73BC: mov rax, qword ptr [rbp+450h+var_200]
/*1409f73c3*/  test rax, rax
/*1409f73c6*/  jz short loc_1409F73DE
/*1409f73c8*/  shl rax, 3
/*1409f73cc*/  lea rdx, [rax+rax*2]
/*1409f73d0*/  mov r8d, 8
/*1409f73d6*/  mov rcx, rsi
/*1409f73d9*/  call sub_140001660
/*1409f73de*/ loc_1409F73DE: add r12, r13
/*1409f73e1*/  mov rdi, [rbp+450h+var_A8]
/*1409f73e8*/  mov rsi, [rdi+10h]
/*1409f73ec*/  mov r13, [rdi+18h]
/*1409f73f0*/  cmp r12, r13
/*1409f73f3*/  jb loc_1409F6E10
/*1409f73f9*/  jmp loc_1409F6DCC
/*1409f73fe*/ loc_1409F73FE: call sub_141486EF0
/*1409f7403*/  nop
/*1409f7404*/  mov [rsi], rax
/*1409f7407*/  mov [rsi+8], rdx
/*1409f740b*/  mov byte ptr [rsi+10h], 1
/*1409f740f*/  jmp loc_1409F6F0E
/*1409f7420*/ loc_1409F7420: add r14, 20h ; ' '
/*1409f7424*/  cmp r14, r13
/*1409f7427*/  jz loc_1409F75C4
/*1409f742d*/ loc_1409F742D: mov edx, 4
/*1409f7432*/  mov rcx, rdi
/*1409f7435*/  mov r8, r14
/*1409f7438*/  call sub_141433D50
/*1409f743d*/  nop
/*1409f743e*/  test rax, rax
/*1409f7441*/  jz short loc_1409F7420
/*1409f7443*/  cmp byte ptr [rax], 3
/*1409f7446*/  jnz short loc_1409F7420
/*1409f7448*/  cmp qword ptr [rax+18h], 9
/*1409f744d*/  jnz short loc_1409F7420
/*1409f744f*/  mov rax, [rax+10h]
/*1409f7453*/  mov rcx, [rax]
/*1409f7456*/  mov rdx, 6E61747369737361h
/*1409f7460*/  xor rcx, rdx
/*1409f7463*/  movzx eax, byte ptr [rax+8]
/*1409f7467*/  xor rax, 74h
/*1409f746b*/  or rax, rcx
/*1409f746e*/  jnz short loc_1409F7420
/*1409f7470*/  mov edx, 11h
/*1409f7475*/  mov rcx, rbx
/*1409f7478*/  mov r8, r14
/*1409f747b*/  call sub_141433D50
/*1409f7480*/  nop
/*1409f7481*/  test rax, rax
/*1409f7484*/  jz short loc_1409F7420
/*1409f7486*/  cmp byte ptr [rax], 3
/*1409f7489*/  jnz short loc_1409F7420
/*1409f748b*/  cmp qword ptr [rax+18h], 0
/*1409f7490*/  jz short loc_1409F7420
/*1409f7492*/  lea rdi, aRole_4; "role"
/*1409f7499*/  lea rbx, aReasoningConte; "reasoning_content"
/*1409f74a0*/  mov r15, 2965646F6D20676Eh
/*1409f74aa*/ loc_1409F74AA: cmp rsi, r13
/*1409f74ad*/  jz loc_1409F75C4
/*1409f74b3*/  mov r14, rsi
/*1409f74b6*/  mov edx, 4
/*1409f74bb*/  mov rcx, rdi
/*1409f74be*/  mov r8, rsi
/*1409f74c1*/  call sub_141433D50
/*1409f74c6*/  nop
/*1409f74c7*/  lea rsi, [r14+20h]
/*1409f74cb*/  test rax, rax
/*1409f74ce*/  jz short loc_1409F74AA
/*1409f74d0*/  cmp byte ptr [rax], 3
/*1409f74d3*/  jnz short loc_1409F74AA
/*1409f74d5*/  cmp qword ptr [rax+18h], 9
/*1409f74da*/  jnz short loc_1409F74AA
/*1409f74dc*/  mov rax, [rax+10h]
/*1409f74e0*/  mov rcx, [rax]
/*1409f74e3*/  mov rdx, 6E61747369737361h
/*1409f74ed*/  xor rcx, rdx
/*1409f74f0*/  movzx eax, byte ptr [rax+8]
/*1409f74f4*/  xor rax, 74h
/*1409f74f8*/  or rax, rcx
/*1409f74fb*/  jnz short loc_1409F74AA
/*1409f74fd*/  mov edx, 11h
/*1409f7502*/  mov rcx, rbx
/*1409f7505*/  mov r8, r14
/*1409f7508*/  call sub_141433D50
/*1409f750d*/  nop
/*1409f750e*/  test rax, rax
/*1409f7511*/  jz short loc_1409F751F
/*1409f7513*/  cmp byte ptr [rax], 3
/*1409f7516*/  jnz short loc_1409F751F
/*1409f7518*/  cmp qword ptr [rax+18h], 0
/*1409f751d*/  jnz short loc_1409F74AA
/*1409f751f*/ loc_1409F751F: call nullsub_1
/*1409f7524*/  mov ecx, 25h ; '%'
/*1409f7529*/  mov edx, 1
/*1409f752e*/  call sub_140001650
/*1409f7533*/  test rax, rax
/*1409f7536*/  jz loc_1409F8CCD
/*1409f753c*/  movups xmm0, cs:xmmword_1417A7D78
/*1409f7543*/  movups xmmword ptr [rax+10h], xmm0
/*1409f7547*/  movups xmm0, cs:xmmword_1417A7D68
/*1409f754e*/  movups xmmword ptr [rax], xmm0
/*1409f7551*/  mov [rax+1Dh], r15
/*1409f7555*/  mov qword ptr [rbp+450h+var_110+8], 25h ; '%'
/*1409f7560*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f7567*/  mov qword ptr [rbp+450h+var_100+8], 25h ; '%'
/*1409f7572*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f7579*/  mov [rbp+450h+var_245], 1
/*1409f7580*/ loc_1409F7580: mov edx, 11h
/*1409f7585*/  mov rcx, rbx
/*1409f7588*/  mov r8, r14
/*1409f758b*/  call sub_141433E50
/*1409f7590*/  nop
/*1409f7591*/ loc_1409F7591: mov [rbp+450h+var_1D8], rax
/*1409f7598*/  mov rcx, rax
/*1409f759b*/  call sub_1400104F0
/*1409f75a0*/  nop
/*1409f75a1*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f75a9*/  movups xmm1, [rbp+450h+var_100]
/*1409f75b0*/  mov rax, [rbp+450h+var_1D8]
/*1409f75b7*/  movups xmmword ptr [rax+10h], xmm1
/*1409f75bb*/  movdqu xmmword ptr [rax], xmm0
/*1409f75bf*/  jmp loc_1409F74AA
/*1409f75c4*/ loc_1409F75C4: lea rcx, aMessages; "messages"
/*1409f75cb*/  lea r8, [rbp+450h+var_2C0]
/*1409f75d2*/  mov edx, 8
/*1409f75d7*/  call sub_141433D50
/*1409f75dc*/  nop
/*1409f75dd*/  mov rsi, rax
/*1409f75e0*/  test rax, rax
/*1409f75e3*/  jz loc_1409F7C68
/*1409f75e9*/  cmp byte ptr [rsi], 4
/*1409f75ec*/  jnz loc_1409F7C68
/*1409f75f2*/  mov rdx, rsi
/*1409f75f5*/  add rdx, 8
/*1409f75f9*/  mov qword ptr [rbp+450h+var_2E0], 0
/*1409f7604*/  mov qword ptr [rbp+450h+var_2E0+8], 8
/*1409f760f*/  mov qword ptr [rbp+450h+var_2D0], 0
/*1409f761a*/  mov qword ptr [rbp+450h+var_200], 0
/*1409f7625*/  mov qword ptr [rbp+450h+var_200+8], 8
/*1409f7630*/  mov qword ptr [rbp+450h+var_1F0], 0
/*1409f763b*/  mov rax, [rsi+10h]
/*1409f763f*/  mov rcx, [rsi+18h]
/*1409f7643*/  mov qword ptr [rsi+18h], 0
/*1409f764b*/  mov rdi, rcx
/*1409f764e*/  shl rdi, 5
/*1409f7652*/  add rdi, rax
/*1409f7655*/  mov qword ptr [rbp+450h+var_110], rax
/*1409f765c*/  mov qword ptr [rbp+450h+var_110+8], rdi
/*1409f7663*/  mov [rbp+450h+var_1D8], rdx
/*1409f766a*/  mov qword ptr [rbp+450h+var_100], rdx
/*1409f7671*/  mov qword ptr [rbp+450h+var_100+8], rcx
/*1409f7678*/  mov [rbp+450h+var_F0], 0
/*1409f7683*/  lea rbx, aRole_4; "role"
/*1409f768a*/  lea r14, [rbp+450h+var_1B0]
/*1409f7691*/  lea r15, [rbp+450h+var_200]
/*1409f7698*/  cmp rax, rdi
/*1409f769b*/  jnz short loc_1409F76E7
/*1409f769d*/  jmp loc_1409F7873
/*1409f76b0*/ loc_1409F76B0: mov rax, qword ptr [rbp+450h+var_200+8]
/*1409f76b7*/  mov rcx, r13
/*1409f76ba*/  shl rcx, 5
/*1409f76be*/  movdqa xmm0, [rbp+450h+var_470]
/*1409f76c3*/  movaps xmm1, [rbp+450h+var_460]
/*1409f76c7*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1409f76cc*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f76d1*/  inc r13
/*1409f76d4*/  mov qword ptr [rbp+450h+var_1F0], r13
/*1409f76db*/  mov rax, r12
/*1409f76de*/  cmp rax, rdi
/*1409f76e1*/  jz loc_1409F7873
/*1409f76e7*/ loc_1409F76E7: lea r12, [rax+20h]
/*1409f76eb*/  mov qword ptr [rbp+450h+var_110], r12
/*1409f76f2*/  movdqu xmm0, xmmword ptr [rax]
/*1409f76f6*/  movups xmm1, xmmword ptr [rax+10h]
/*1409f76fa*/  movdqa [rbp+450h+var_470], xmm0
/*1409f76ff*/  movaps [rbp+450h+var_460], xmm1
/*1409f7703*/  movaps [rbp+450h+var_1A0], xmm1
/*1409f770a*/  movdqa [rbp+450h+var_1B0], xmm0
/*1409f7712*/  mov [rbp+450h+var_114], 1
/*1409f7719*/ loc_1409F7719: mov edx, 4
/*1409f771e*/  mov rcx, rbx
/*1409f7721*/  mov r8, r14
/*1409f7724*/  call sub_141433D50
/*1409f7729*/  nop
/*1409f772a*/  test rax, rax
/*1409f772d*/  jz short loc_1409F7760
/*1409f772f*/  cmp byte ptr [rax], 3
/*1409f7732*/  jnz short loc_1409F7760
/*1409f7734*/  cmp qword ptr [rax+18h], 6
/*1409f7739*/  jnz short loc_1409F7760
/*1409f773b*/  mov rax, [rax+10h]
/*1409f773f*/  mov ecx, [rax]
/*1409f7741*/  mov edx, 74737973h
/*1409f7746*/  xor ecx, edx
/*1409f7748*/  movzx eax, word ptr [rax+4]
/*1409f774c*/  xor eax, 6D65h
/*1409f7751*/  or eax, ecx
/*1409f7753*/  jz short loc_1409F7782
/*1409f7755*/  nop word ptr [rax+rax+00000000h]
/*1409f7760*/ loc_1409F7760: mov r13, qword ptr [rbp+450h+var_1F0]
/*1409f7767*/  cmp r13, qword ptr [rbp+450h+var_200]
/*1409f776e*/  jnz loc_1409F76B0
/*1409f7774*/ loc_1409F7774: mov rcx, r15
/*1409f7777*/  call sub_1416890A0
/*1409f777c*/  nop
/*1409f777d*/  jmp loc_1409F76B0
/*1409f7782*/ loc_1409F7782: mov [rbp+450h+var_114], 1
/*1409f7789*/ loc_1409F7789: mov edx, 7
/*1409f778e*/  lea rcx, aContent_6; "content"
/*1409f7795*/  mov r8, r14
/*1409f7798*/  call sub_141433D50
/*1409f779d*/  nop
/*1409f779e*/ loc_1409F779E: test rax, rax
/*1409f77a1*/  jz loc_1409F785E
/*1409f77a7*/  cmp byte ptr [rax], 3
/*1409f77aa*/  jnz loc_1409F785E
/*1409f77b0*/  mov r13, [rax+18h]
/*1409f77b4*/  test r13, r13
/*1409f77b7*/  jz loc_1409F785E
/*1409f77bd*/  js loc_1409F7A6E
/*1409f77c3*/  mov rax, [rax+10h]
/*1409f77c7*/  mov [rbp+450h+var_B8], rax
/*1409f77ce*/  call nullsub_1
/*1409f77d3*/  mov edx, 1
/*1409f77d8*/  mov rcx, r13
/*1409f77db*/  call sub_140001650
/*1409f77e0*/  test rax, rax
/*1409f77e3*/  jz loc_1409F8925
/*1409f77e9*/  mov [rbp+450h+var_A8], rax
/*1409f77f0*/  mov rcx, rax
/*1409f77f3*/  mov rdx, [rbp+450h+var_B8]
/*1409f77fa*/  mov [rbp+450h+var_B8], r13
/*1409f7801*/  mov r8, r13
/*1409f7804*/  call sub_141684120
/*1409f7809*/  mov r13, qword ptr [rbp+450h+var_2D0]
/*1409f7810*/  cmp r13, qword ptr [rbp+450h+var_2E0]
/*1409f7817*/  jnz short loc_1409F7826
/*1409f7819*/ loc_1409F7819: lea rcx, [rbp+450h+var_2E0]
/*1409f7820*/  call sub_141689AB0
/*1409f7825*/  nop
/*1409f7826*/ loc_1409F7826: mov rax, qword ptr [rbp+450h+var_2E0+8]
/*1409f782d*/  lea rcx, ds:0[r13*2]
/*1409f7835*/  add rcx, r13
/*1409f7838*/  mov r8, [rbp+450h+var_B8]
/*1409f783f*/  mov [rax+rcx*8], r8
/*1409f7843*/  mov rdx, [rbp+450h+var_A8]
/*1409f784a*/  mov [rax+rcx*8+8], rdx
/*1409f784f*/  mov [rax+rcx*8+10h], r8
/*1409f7854*/  inc r13
/*1409f7857*/  mov qword ptr [rbp+450h+var_2D0], r13
/*1409f785e*/ loc_1409F785E: mov rcx, r14
/*1409f7861*/  call sub_1400104F0
/*1409f7866*/  nop
/*1409f7867*/  mov rax, r12
/*1409f786a*/  cmp rax, rdi
/*1409f786d*/  jnz loc_1409F76E7
/*1409f7873*/ loc_1409F7873: mov [rbp+450h+var_112], 1
/*1409f787a*/ loc_1409F787A: lea rcx, [rbp+450h+var_110]
/*1409f7881*/  call sub_1404DF4C0
/*1409f7886*/  nop
/*1409f7887*/  cmp qword ptr [rbp+450h+var_2D0], 0
/*1409f788f*/  jz loc_1409F7A33
/*1409f7895*/  mov qword ptr [rbp+450h+var_140], 0
/*1409f78a0*/  mov qword ptr [rbp+450h+var_130], 0
/*1409f78ab*/  call nullsub_1
/*1409f78b0*/  mov ecx, 4
/*1409f78b5*/  mov edx, 1
/*1409f78ba*/  call sub_140001650
/*1409f78bf*/  test rax, rax
/*1409f78c2*/  jz loc_1409F8663
/*1409f78c8*/  mov dword ptr [rax], 656C6F72h
/*1409f78ce*/  mov qword ptr [rbp+450h+var_170], 4
/*1409f78d9*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f78e0*/  mov qword ptr [rbp+450h+var_160], 4
/*1409f78eb*/  call nullsub_1
/*1409f78f0*/  mov ecx, 6
/*1409f78f5*/  mov edx, 1
/*1409f78fa*/  call sub_140001650
/*1409f78ff*/  test rax, rax
/*1409f7902*/  mov [rbp+450h+var_A8], rax
/*1409f7909*/  jz loc_1409F8678
/*1409f790f*/  mov word ptr [rax+4], 6D65h
/*1409f7915*/  mov dword ptr [rax], 74737973h
/*1409f791b*/  mov byte ptr [rbp+450h+var_110], 3
/*1409f7922*/  mov qword ptr [rbp+450h+var_110+8], 6
/*1409f792d*/  mov qword ptr [rbp+450h+var_100], rax
/*1409f7934*/  mov qword ptr [rbp+450h+var_100+8], 6
/*1409f793f*/ loc_1409F793F: lea rcx, [rbp+450h+var_1B0]
/*1409f7946*/  lea rdx, [rbp+450h+var_140]
/*1409f794d*/  lea r8, [rbp+450h+var_170]
/*1409f7954*/  lea r9, [rbp+450h+var_110]
/*1409f795b*/  call sub_140307860
/*1409f7960*/  nop
/*1409f7961*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f7968*/  jz short loc_1409F7977
/*1409f796a*/ loc_1409F796A: lea rcx, [rbp+450h+var_1B0]
/*1409f7971*/  call sub_1400104F0
/*1409f7976*/  nop
/*1409f7977*/ loc_1409F7977: call nullsub_1
/*1409f797c*/  mov ecx, 7
/*1409f7981*/  mov edx, 1
/*1409f7986*/  call sub_140001650
/*1409f798b*/  test rax, rax
/*1409f798e*/  jz loc_1409F868D
/*1409f7994*/  mov dword ptr [rax+3], 746E6574h
/*1409f799b*/  mov dword ptr [rax], 746E6F63h
/*1409f79a1*/  mov qword ptr [rbp+450h+var_170], 7
/*1409f79ac*/  mov [rbp+450h+var_A8], rax
/*1409f79b3*/  mov qword ptr [rbp+450h+var_170+8], rax
/*1409f79ba*/  mov qword ptr [rbp+450h+var_160], 7
/*1409f79c5*/  mov rdx, qword ptr [rbp+450h+var_2E0+8]
/*1409f79cc*/  mov r8, qword ptr [rbp+450h+var_2D0]
/*1409f79d3*/ loc_1409F79D3: mov [rsp+4D0h+var_4B0], 2
/*1409f79dc*/  lea r9, unk_1417A7860
/*1409f79e3*/  lea rcx, [rbp+450h+var_110]
/*1409f79ea*/  call sub_140440300
/*1409f79ef*/  nop
/*1409f79f0*/  mov rax, qword ptr [rbp+450h+var_110]
/*1409f79f7*/  mov rdi, qword ptr [rbp+450h+var_110+8]
/*1409f79fe*/  mov rbx, qword ptr [rbp+450h+var_100]
/*1409f7a05*/  test rbx, rbx
/*1409f7a08*/  mov [rbp+450h+var_A8], rax
/*1409f7a0f*/  mov [rbp+450h+var_B8], rdi
/*1409f7a16*/  jns short loc_1409F7A3C
/*1409f7a18*/  xor r15d, r15d
/*1409f7a1b*/ loc_1409F7A1B: mov [rbp+450h+var_244], 1
/*1409f7a22*/ loc_1409F7A22: mov rcx, r15
/*1409f7a25*/  mov rdx, rbx
/*1409f7a28*/  call sub_1416C2D4B
/*1409f7a2e*/ loc_1409F7A2E: jmp loc_1409F8D2B
/*1409f7a33*/ loc_1409F7A33: mov rbx, [rsi+18h]
/*1409f7a37*/  jmp loc_1409F7B6F
/*1409f7a3c*/ loc_1409F7A3C: jz short loc_1409F7A89
/*1409f7a3e*/  call nullsub_1
/*1409f7a43*/  mov r15d, 1
/*1409f7a49*/  mov edx, 1
/*1409f7a4e*/  mov rcx, rbx
/*1409f7a51*/  call sub_140001650
/*1409f7a56*/  test rax, rax
/*1409f7a59*/  jz short loc_1409F7A1B
/*1409f7a5b*/  mov r14, rax
/*1409f7a5e*/  mov rcx, rax
/*1409f7a61*/  mov rdx, rdi
/*1409f7a64*/  mov r8, rbx
/*1409f7a67*/  call sub_141684120
/*1409f7a6c*/  jmp short loc_1409F7A8F
/*1409f7a6e*/ loc_1409F7A6E: xor ecx, ecx
/*1409f7a70*/ loc_1409F7A70: mov [rbp+450h+var_114], 1
/*1409f7a77*/ loc_1409F7A77: mov rdx, [rbp+450h+var_A8]
/*1409f7a7e*/  call sub_1416C2D4B
/*1409f7a84*/  jmp loc_1409F8D2B
/*1409f7a89*/ loc_1409F7A89: mov r14d, 1
/*1409f7a8f*/ loc_1409F7A8F: mov byte ptr [rbp+450h+var_110], 3
/*1409f7a96*/  mov qword ptr [rbp+450h+var_110+8], rbx
/*1409f7a9d*/  mov qword ptr [rbp+450h+var_100], r14
/*1409f7aa4*/  mov qword ptr [rbp+450h+var_100+8], rbx
/*1409f7aab*/  mov [rbp+450h+var_244], 0
/*1409f7ab2*/ loc_1409F7AB2: lea rcx, [rbp+450h+var_1B0]
/*1409f7ab9*/  lea rdx, [rbp+450h+var_140]
/*1409f7ac0*/  lea r8, [rbp+450h+var_170]
/*1409f7ac7*/  lea r9, [rbp+450h+var_110]
/*1409f7ace*/  call sub_140307860
/*1409f7ad3*/  nop
/*1409f7ad4*/  cmp byte ptr [rbp+450h+var_1B0], 0FFh
/*1409f7adb*/  jz short loc_1409F7AEA
/*1409f7add*/ loc_1409F7ADD: lea rcx, [rbp+450h+var_1B0]
/*1409f7ae4*/  call sub_1400104F0
/*1409f7ae9*/  nop
/*1409f7aea*/ loc_1409F7AEA: mov rdx, [rbp+450h+var_A8]
/*1409f7af1*/  test rdx, rdx
/*1409f7af4*/  jz short loc_1409F7B08
/*1409f7af6*/  mov r8d, 1
/*1409f7afc*/  mov rcx, [rbp+450h+var_B8]
/*1409f7b03*/  call sub_140001660
/*1409f7b08*/ loc_1409F7B08: movdqu xmm0, [rbp+450h+var_140]
/*1409f7b10*/  movdqu [rbp+450h+var_110+8], xmm0
/*1409f7b18*/  mov rax, qword ptr [rbp+450h+var_130]
/*1409f7b1f*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f7b26*/  mov byte ptr [rbp+450h+var_110], 5
/*1409f7b2d*/  mov rbx, [rsi+18h]
/*1409f7b31*/  cmp rbx, [rsi+8]
/*1409f7b35*/  jnz short loc_1409F7B44
/*1409f7b37*/ loc_1409F7B37: mov rcx, [rbp+450h+var_1D8]
/*1409f7b3e*/  call sub_1416890A0
/*1409f7b43*/  nop
/*1409f7b44*/ loc_1409F7B44: mov rax, [rsi+10h]
/*1409f7b48*/  mov rcx, rbx
/*1409f7b4b*/  shl rcx, 5
/*1409f7b4f*/  movdqu xmm0, [rbp+450h+var_110]
/*1409f7b57*/  movups xmm1, [rbp+450h+var_100]
/*1409f7b5e*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1409f7b63*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1409f7b68*/  inc rbx
/*1409f7b6b*/  mov [rsi+18h], rbx
/*1409f7b6f*/ loc_1409F7B6F: mov r14, qword ptr [rbp+450h+var_200]
/*1409f7b76*/  mov r15, qword ptr [rbp+450h+var_200+8]
/*1409f7b7d*/  mov r12, qword ptr [rbp+450h+var_1F0]
/*1409f7b84*/  mov r13, r12
/*1409f7b87*/  shl r13, 5
/*1409f7b8b*/  lea rax, [r15+r13]
/*1409f7b8f*/  mov qword ptr [rbp+450h+var_110], r15
/*1409f7b96*/  mov qword ptr [rbp+450h+var_100], r14
/*1409f7b9d*/  mov qword ptr [rbp+450h+var_110+8], r15
/*1409f7ba4*/  mov qword ptr [rbp+450h+var_100+8], rax
/*1409f7bab*/  mov rcx, [rbp+450h+var_1D8]
/*1409f7bb2*/  mov rax, [rcx]
/*1409f7bb5*/  sub rax, rbx
/*1409f7bb8*/  cmp r12, rax
/*1409f7bbb*/  ja loc_1409F7ECB
/*1409f7bc1*/  test r12, r12
/*1409f7bc4*/  jz short loc_1409F7BDC
/*1409f7bc6*/ loc_1409F7BC6: mov rcx, rbx
/*1409f7bc9*/  shl rcx, 5
/*1409f7bcd*/  add rcx, [rsi+10h]
/*1409f7bd1*/  mov rdx, r15
/*1409f7bd4*/  mov r8, r13
/*1409f7bd7*/  call sub_141684120
/*1409f7bdc*/ loc_1409F7BDC: add rbx, r12
/*1409f7bdf*/  mov [rsi+18h], rbx
/*1409f7be3*/  test r14, r14
/*1409f7be6*/  jz short loc_1409F7BFD
/*1409f7be8*/  shl r14, 5
/*1409f7bec*/  mov r8d, 8
/*1409f7bf2*/  mov rcx, r15
/*1409f7bf5*/  mov rdx, r14
/*1409f7bf8*/  call sub_140001660
/*1409f7bfd*/ loc_1409F7BFD: mov rsi, qword ptr [rbp+450h+var_2D0]
/*1409f7c04*/  test rsi, rsi
/*1409f7c07*/  jz short loc_1409F7C42
/*1409f7c09*/  mov rdi, qword ptr [rbp+450h+var_2E0+8]
/*1409f7c10*/  add rdi, 8
/*1409f7c14*/  jmp short loc_1409F7C29
/*1409f7c20*/ loc_1409F7C20: add rdi, 18h
/*1409f7c24*/  dec rsi
/*1409f7c27*/  jz short loc_1409F7C42
/*1409f7c29*/ loc_1409F7C29: mov rdx, [rdi-8]
/*1409f7c2d*/  test rdx, rdx
/*1409f7c30*/  jz short loc_1409F7C20
/*1409f7c32*/  mov rcx, [rdi]
/*1409f7c35*/  mov r8d, 1
/*1409f7c3b*/  call sub_140001660
/*1409f7c40*/  jmp short loc_1409F7C20
/*1409f7c42*/ loc_1409F7C42: mov rax, qword ptr [rbp+450h+var_2E0]
/*1409f7c49*/  test rax, rax
/*1409f7c4c*/  jz short loc_1409F7C68
/*1409f7c4e*/  mov rcx, qword ptr [rbp+450h+var_2E0+8]
/*1409f7c55*/  shl rax, 3
/*1409f7c59*/  lea rdx, [rax+rax*2]
/*1409f7c5d*/  mov r8d, 8
/*1409f7c63*/  call sub_140001660
/*1409f7c68*/ loc_1409F7C68: movups xmm0, [rbp+450h+var_2C0]
/*1409f7c6f*/  movups xmm1, [rbp+450h+var_2B0]
/*1409f7c76*/  mov rax, [rbp+450h+var_418]
/*1409f7c7a*/  movups xmmword ptr [rax+10h], xmm1
/*1409f7c7e*/  movups xmmword ptr [rax], xmm0
/*1409f7c81*/  movaps xmm0, [rbp+450h+var_280]
/*1409f7c88*/  movaps xmm1, [rbp+450h+var_270]
/*1409f7c8f*/  movaps xmm2, [rbp+450h+var_260]
/*1409f7c96*/  movups xmmword ptr [rax+20h], xmm0
/*1409f7c9a*/  movups xmmword ptr [rax+30h], xmm1
/*1409f7c9e*/  movups xmmword ptr [rax+40h], xmm2
/*1409f7ca2*/  mov rdx, [rbp+450h+var_2F0]
/*1409f7ca9*/  test rdx, rdx
/*1409f7cac*/  jz short loc_1409F7CC0
/*1409f7cae*/  mov r8d, 1
/*1409f7cb4*/  mov rcx, [rbp+450h+var_148]
/*1409f7cbb*/  call sub_140001660
/*1409f7cc0*/ loc_1409F7CC0: mov rcx, [rbp+450h+var_298]
/*1409f7cc7*/  mov rax, [rbp+450h+var_290]
/*1409f7cce*/  mov [rbp+450h+var_A8], rax
/*1409f7cd5*/  mov [rbp+450h+var_1D8], 0
/*1409f7ce0*/  mov [rbp+450h+var_2F0], rcx
/*1409f7ce7*/  nop word ptr [rax+rax+00000000h]
/*1409f7cf0*/ loc_1409F7CF0: mov rax, [rbp+450h+var_1D8]
/*1409f7cf7*/  cmp [rbp+450h+var_A8], rax
/*1409f7cfe*/  jz short loc_1409F7D19
/*1409f7d00*/  inc rax
/*1409f7d03*/  mov [rbp+450h+var_1D8], rax
/*1409f7d0a*/  lea rsi, [rcx+20h]
/*1409f7d0e*/ loc_1409F7D0E: call sub_1402C3260
/*1409f7d13*/  nop
/*1409f7d14*/  mov rcx, rsi
/*1409f7d17*/  jmp short loc_1409F7CF0
/*1409f7d19*/ loc_1409F7D19: mov rdx, [rbp+450h+var_2A0]
/*1409f7d20*/  test rdx, rdx
/*1409f7d23*/  jz short loc_1409F7D3B
/*1409f7d25*/  mov rcx, [rbp+450h+var_298]
/*1409f7d2c*/  shl rdx, 5
/*1409f7d30*/  mov r8d, 8
/*1409f7d36*/  call sub_140001660
/*1409f7d3b*/ loc_1409F7D3B: mov rax, [rbp+450h+var_418]
/*1409f7d3f*/  movaps xmm6, [rbp+450h+var_90]
/*1409f7d46*/  movaps xmm7, [rbp+450h+var_80]
/*1409f7d4d*/  movaps xmm8, [rbp+450h+var_70]
/*1409f7d55*/  movaps xmm9, [rbp+450h+var_60]
/*1409f7d5d*/  movaps xmm10, [rbp+450h+var_50]
/*1409f7d65*/  add rsp, 498h
/*1409f7d6c*/  pop rbx
/*1409f7d6d*/  pop rdi
/*1409f7d6e*/  pop rsi
/*1409f7d6f*/  pop r12
/*1409f7d71*/  pop r13
/*1409f7d73*/  pop r14
/*1409f7d75*/  pop r15
/*1409f7d77*/  pop rbp
/*1409f7d78*/  retn
/*1409f7d79*/ loc_1409F7D79: xor r15d, r15d
/*1409f7d7c*/ loc_1409F7D7C: mov [rbp+450h+var_225], 1
/*1409f7d83*/ loc_1409F7D83: mov rcx, r15
/*1409f7d86*/  mov rdx, rsi
/*1409f7d89*/  call sub_1416C2D4B
/*1409f7d8f*/  jmp loc_1409F8D2B
/*1409f7d94*/ loc_1409F7D94: xor ecx, ecx
/*1409f7d96*/ loc_1409F7D96: mov rdx, [rbp+450h+var_2F8]
/*1409f7d9d*/  call sub_1416C2D4B
/*1409f7da3*/  jmp loc_1409F8D2B
/*1409f7da8*/ loc_1409F7DA8: xor ecx, ecx
/*1409f7daa*/ loc_1409F7DAA: mov [rbp+450h+var_23D], 1
/*1409f7db1*/ loc_1409F7DB1: call sub_1416C2D4B
/*1409f7db7*/  jmp loc_1409F8D2B
/*1409f7dbc*/ loc_1409F7DBC: xor ecx, ecx
/*1409f7dbe*/ loc_1409F7DBE: mov [rbp+450h+var_99], 1
/*1409f7dc5*/ loc_1409F7DC5: mov rdx, [rbp+450h+var_A8]
/*1409f7dcc*/  call sub_1416C2D4B
/*1409f7dd2*/  jmp loc_1409F8D2B
/*1409f7dd7*/ loc_1409F7DD7: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7dde*/  call sub_1416C3040
/*1409f7de4*/  jmp loc_1409F8D2B
/*1409f7de9*/ loc_1409F7DE9: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f7df0*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f7df7*/ loc_1409F7DF7: lea rax, off_1417A7C40; "src\\core\\relay\\translator.rs"
/*1409f7dfe*/  mov [rsp+4D0h+var_4B0], rax
/*1409f7e03*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f7e0a*/  lea r9, off_1417A5560
/*1409f7e11*/  lea r8, [rbp+450h+var_1B0]
/*1409f7e18*/  mov edx, 2Bh ; '+'
/*1409f7e1d*/  call sub_1416C3060
/*1409f7e23*/  jmp loc_1409F8D2B
/*1409f7e28*/ loc_1409F7E28: call sub_141486EF0
/*1409f7e2d*/  nop
/*1409f7e2e*/  mov [rsi], rax
/*1409f7e31*/  mov [rsi+8], rdx
/*1409f7e35*/  mov byte ptr [rsi+10h], 1
/*1409f7e39*/  jmp loc_1409F4227
/*1409f7e3e*/ loc_1409F7E3E: xor ecx, ecx
/*1409f7e40*/ loc_1409F7E40: mov rdx, [rbp+450h+var_1B8]
/*1409f7e47*/  call sub_1416C2D4B
/*1409f7e4d*/  jmp loc_1409F8D2B
/*1409f7e52*/ loc_1409F7E52: xor ecx, ecx
/*1409f7e54*/ loc_1409F7E54: mov rdx, [rbp+450h+var_308]
/*1409f7e5b*/  call sub_1416C2D4B
/*1409f7e61*/  jmp loc_1409F8D2B
/*1409f7e66*/ loc_1409F7E66: mov [rbp+450h+var_1DC], 1
/*1409f7e6d*/ loc_1409F7E6D: mov rdi, rax
/*1409f7e70*/  call sub_141486EF0
/*1409f7e75*/  nop
/*1409f7e76*/  mov rcx, rax
/*1409f7e79*/  mov rax, rdi
/*1409f7e7c*/  mov [rdi], rcx
/*1409f7e7f*/  mov [rdi+8], rdx
/*1409f7e83*/  mov byte ptr [rdi+10h], 1
/*1409f7e87*/  mov r8, rsi
/*1409f7e8a*/  jmp loc_1409F42CC
/*1409f7e8f*/ loc_1409F7E8F: mov [rbp+450h+var_1DD], 1
/*1409f7e96*/ loc_1409F7E96: mov rsi, rax
/*1409f7e99*/  call sub_141486EF0
/*1409f7e9e*/  nop
/*1409f7e9f*/  mov rcx, rax
/*1409f7ea2*/  mov rax, rsi
/*1409f7ea5*/  mov [rsi], rcx
/*1409f7ea8*/  mov [rsi+8], rdx
/*1409f7eac*/  mov byte ptr [rsi+10h], 1
/*1409f7eb0*/  jmp loc_1409F55C4
/*1409f7eb5*/ loc_1409F7EB5: call sub_141486EF0
/*1409f7eba*/  nop
/*1409f7ebb*/  mov [rsi], rax
/*1409f7ebe*/  mov [rsi+8], rdx
/*1409f7ec2*/  mov byte ptr [rsi+10h], 1
/*1409f7ec6*/  jmp loc_1409F6754
/*1409f7ecb*/ loc_1409F7ECB: mov [rsp+4D0h+var_4B0], 20h ; ' '
/*1409f7ed4*/  mov r9d, 8
/*1409f7eda*/  mov rdx, rbx
/*1409f7edd*/  mov r8, r12
/*1409f7ee0*/  call sub_141688D30
/*1409f7ee5*/  nop
/*1409f7ee6*/  mov rbx, [rsi+18h]
/*1409f7eea*/  jmp loc_1409F7BC6
/*1409f7eef*/ loc_1409F7EEF: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f7ef6*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f7efd*/ loc_1409F7EFD: lea rax, off_1417A7B50; "src\\core\\relay\\translator.rs"
/*1409f7f04*/  mov [rsp+4D0h+var_4B0], rax
/*1409f7f09*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f7f10*/  lea r9, off_1417A5560
/*1409f7f17*/  lea r8, [rbp+450h+var_1B0]
/*1409f7f1e*/  mov edx, 2Bh ; '+'
/*1409f7f23*/  call sub_1416C3060
/*1409f7f29*/  jmp loc_1409F8D2B
/*1409f7f2e*/ loc_1409F7F2E: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f7f35*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f7f3c*/ loc_1409F7F3C: lea rax, off_1417A7BC8; "src\\core\\relay\\translator.rs"
/*1409f7f43*/  mov [rsp+4D0h+var_4B0], rax
/*1409f7f48*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f7f4f*/  lea r9, off_1417A5560
/*1409f7f56*/  lea r8, [rbp+450h+var_1B0]
/*1409f7f5d*/  mov edx, 2Bh ; '+'
/*1409f7f62*/  call sub_1416C3060
/*1409f7f68*/  jmp loc_1409F8D2B
/*1409f7f6d*/ loc_1409F7F6D: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7f74*/  call sub_1416C3040
/*1409f7f7a*/  jmp loc_1409F8D2B
/*1409f7f7f*/ loc_1409F7F7F: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7f86*/  call sub_1416C3040
/*1409f7f8c*/  jmp loc_1409F8D2B
/*1409f7f91*/ loc_1409F7F91: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7f98*/  call sub_1416C3040
/*1409f7f9e*/  jmp loc_1409F8D2B
/*1409f7fa3*/ loc_1409F7FA3: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7faa*/  call sub_1416C3040
/*1409f7fb0*/  jmp loc_1409F8D2B
/*1409f7fb5*/ loc_1409F7FB5: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7fbc*/  call sub_1416C3040
/*1409f7fc2*/  jmp loc_1409F8D2B
/*1409f7fc7*/ loc_1409F7FC7: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7fce*/  call sub_1416C3040
/*1409f7fd4*/  jmp loc_1409F8D2B
/*1409f7fd9*/ loc_1409F7FD9: mov [rbp+450h+var_1DA], 1
/*1409f7fe0*/ loc_1409F7FE0: mov ecx, 8
/*1409f7fe5*/  mov edx, 20h ; ' '
/*1409f7fea*/  call sub_1416C2D31
/*1409f7ff0*/  jmp loc_1409F8D2B
/*1409f7ff5*/ loc_1409F7FF5: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f7ffc*/  call sub_1416C3040
/*1409f8002*/  jmp loc_1409F8D2B
/*1409f8007*/ loc_1409F8007: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f800e*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8015*/ loc_1409F8015: lea rax, off_1417A7BE0; "src\\core\\relay\\translator.rs"
/*1409f801c*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8021*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8028*/  lea r9, off_1417A5560
/*1409f802f*/  lea r8, [rbp+450h+var_1B0]
/*1409f8036*/  mov edx, 2Bh ; '+'
/*1409f803b*/  call sub_1416C3060
/*1409f8041*/  jmp loc_1409F8D2B
/*1409f8046*/ loc_1409F8046: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f804d*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8054*/ loc_1409F8054: lea rax, off_1417A7BE0; "src\\core\\relay\\translator.rs"
/*1409f805b*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8060*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8067*/  lea r9, off_1417A5560
/*1409f806e*/  lea r8, [rbp+450h+var_1B0]
/*1409f8075*/  mov edx, 2Bh ; '+'
/*1409f807a*/  call sub_1416C3060
/*1409f8080*/  jmp loc_1409F8D2B
/*1409f8085*/ loc_1409F8085: lea r8, off_1417A8250; "src\\core\\relay\\translator.rs"
/*1409f808c*/  mov rcx, r14
/*1409f808f*/  mov rdx, rbx
/*1409f8092*/  call sub_1416C2D94
/*1409f8098*/  jmp loc_1409F8D2B
/*1409f809d*/ loc_1409F809D: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f80a4*/  call sub_1416C3040
/*1409f80aa*/  jmp loc_1409F8D2B
/*1409f80af*/ loc_1409F80AF: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f80b6*/  call sub_1416C3040
/*1409f80bc*/  jmp loc_1409F8D2B
/*1409f80c1*/ loc_1409F80C1: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f80c8*/  mov [rsp+4D0h+var_4B0], rax
/*1409f80cd*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409f80d4*/  lea r9, unk_1417A5580
/*1409f80db*/  lea r8, [rbp+450h+var_329]
/*1409f80e2*/  mov edx, 37h ; '7'
/*1409f80e7*/  call sub_1416C3060
/*1409f80ed*/  jmp loc_1409F8D2B
/*1409f80f2*/ loc_1409F80F2: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f80f9*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8100*/ loc_1409F8100: lea rax, off_1417A7C28; "src\\core\\relay\\translator.rs"
/*1409f8107*/  mov [rsp+4D0h+var_4B0], rax
/*1409f810c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8113*/  lea r9, off_1417A5560
/*1409f811a*/  lea r8, [rbp+450h+var_1B0]
/*1409f8121*/  mov edx, 2Bh ; '+'
/*1409f8126*/  call sub_1416C3060
/*1409f812c*/  jmp loc_1409F8D2B
/*1409f8131*/ loc_1409F8131: mov [rbp+450h+var_1D9], 1
/*1409f8138*/ loc_1409F8138: mov ecx, 8
/*1409f813d*/  mov edx, 20h ; ' '
/*1409f8142*/  call sub_1416C2D31
/*1409f8148*/  jmp loc_1409F8D2B
/*1409f814d*/ loc_1409F814D: mov rax, qword ptr [rbp+450h+var_170+8]
/*1409f8154*/  mov qword ptr [rbp+450h+var_140], rax
/*1409f815b*/ loc_1409F815B: lea rax, off_1417A7C90; "src\\core\\relay\\translator.rs"
/*1409f8162*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8167*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f816e*/  lea r9, off_1417A5560
/*1409f8175*/  lea r8, [rbp+450h+var_140]
/*1409f817c*/  mov edx, 2Bh ; '+'
/*1409f8181*/  call sub_1416C3060
/*1409f8187*/  jmp loc_1409F8D2B
/*1409f818c*/ loc_1409F818C: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8193*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f819a*/ loc_1409F819A: lea rax, off_1417A7758; "src\\core\\relay\\translator.rs"
/*1409f81a1*/  mov [rsp+4D0h+var_4B0], rax
/*1409f81a6*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f81ad*/  lea r9, off_1417A5560
/*1409f81b4*/  lea r8, [rbp+450h+var_1B0]
/*1409f81bb*/  mov edx, 2Bh ; '+'
/*1409f81c0*/  call sub_1416C3060
/*1409f81c6*/  jmp loc_1409F8D2B
/*1409f81cb*/ loc_1409F81CB: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f81d2*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f81d9*/ loc_1409F81D9: lea rax, off_1417A7758; "src\\core\\relay\\translator.rs"
/*1409f81e0*/  mov [rsp+4D0h+var_4B0], rax
/*1409f81e5*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f81ec*/  lea r9, off_1417A5560
/*1409f81f3*/  lea r8, [rbp+450h+var_1B0]
/*1409f81fa*/  mov edx, 2Bh ; '+'
/*1409f81ff*/  call sub_1416C3060
/*1409f8205*/  jmp loc_1409F8D2B
/*1409f820a*/ loc_1409F820A: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8211*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8218*/ loc_1409F8218: lea rax, off_1417A7C10; "src\\core\\relay\\translator.rs"
/*1409f821f*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8224*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f822b*/  lea r9, off_1417A5560
/*1409f8232*/  lea r8, [rbp+450h+var_1B0]
/*1409f8239*/  mov edx, 2Bh ; '+'
/*1409f823e*/  call sub_1416C3060
/*1409f8244*/  jmp loc_1409F8D2B
/*1409f8249*/ loc_1409F8249: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8250*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8257*/ loc_1409F8257: lea rax, off_1417A7C10; "src\\core\\relay\\translator.rs"
/*1409f825e*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8263*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f826a*/  lea r9, off_1417A5560
/*1409f8271*/  lea r8, [rbp+450h+var_1B0]
/*1409f8278*/  mov edx, 2Bh ; '+'
/*1409f827d*/  call sub_1416C3060
/*1409f8283*/  jmp loc_1409F8D2B
/*1409f8288*/ loc_1409F8288: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f828f*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8296*/ loc_1409F8296: lea rax, off_1417A7C10; "src\\core\\relay\\translator.rs"
/*1409f829d*/  mov [rsp+4D0h+var_4B0], rax
/*1409f82a2*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f82a9*/  lea r9, off_1417A5560
/*1409f82b0*/  lea r8, [rbp+450h+var_1B0]
/*1409f82b7*/  mov edx, 2Bh ; '+'
/*1409f82bc*/  call sub_1416C3060
/*1409f82c2*/  jmp loc_1409F8D2B
/*1409f82c7*/ loc_1409F82C7: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f82ce*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f82d5*/ loc_1409F82D5: lea rax, off_1417A7B78; "src\\core\\relay\\translator.rs"
/*1409f82dc*/  mov [rsp+4D0h+var_4B0], rax
/*1409f82e1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f82e8*/  lea r9, off_1417A5560
/*1409f82ef*/  lea r8, [rbp+450h+var_1B0]
/*1409f82f6*/  mov edx, 2Bh ; '+'
/*1409f82fb*/  call sub_1416C3060
/*1409f8301*/  jmp loc_1409F8D2B
/*1409f8306*/ loc_1409F8306: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f830d*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8314*/ loc_1409F8314: lea rax, off_1417A7B78; "src\\core\\relay\\translator.rs"
/*1409f831b*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8320*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8327*/  lea r9, off_1417A5560
/*1409f832e*/  lea r8, [rbp+450h+var_1B0]
/*1409f8335*/  mov edx, 2Bh ; '+'
/*1409f833a*/  call sub_1416C3060
/*1409f8340*/  jmp loc_1409F8D2B
/*1409f8345*/ loc_1409F8345: lea r8, off_1417A7E38; "src\\core\\relay\\translator.rs"
/*1409f834c*/  mov rcx, r12
/*1409f834f*/  call sub_1416C30E3
/*1409f8355*/  jmp loc_1409F8D2B
/*1409f835a*/ loc_1409F835A: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8361*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8368*/ loc_1409F8368: lea rax, off_1417A7720; "src\\core\\relay\\translator.rs"
/*1409f836f*/  mov [rsp+4D0h+var_4B0], rax
/*1409f8374*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f837b*/  lea r9, off_1417A5560
/*1409f8382*/  lea r8, [rbp+450h+var_1B0]
/*1409f8389*/  mov edx, 2Bh ; '+'
/*1409f838e*/  call sub_1416C3060
/*1409f8394*/  jmp loc_1409F8D2B
/*1409f8399*/ loc_1409F8399: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f83a0*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f83a7*/ loc_1409F83A7: lea rax, off_1417A7740; "src\\core\\relay\\translator.rs"
/*1409f83ae*/  mov [rsp+4D0h+var_4B0], rax
/*1409f83b3*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f83ba*/  lea r9, off_1417A5560
/*1409f83c1*/  lea r8, [rbp+450h+var_1B0]
/*1409f83c8*/  mov edx, 2Bh ; '+'
/*1409f83cd*/  call sub_1416C3060
/*1409f83d3*/  jmp loc_1409F8D2B
/*1409f83d8*/ loc_1409F83D8: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f83df*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f83e6*/ loc_1409F83E6: lea rax, off_1417A7740; "src\\core\\relay\\translator.rs"
/*1409f83ed*/  mov [rsp+4D0h+var_4B0], rax
/*1409f83f2*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f83f9*/  lea r9, off_1417A5560
/*1409f8400*/  lea r8, [rbp+450h+var_1B0]
/*1409f8407*/  mov edx, 2Bh ; '+'
/*1409f840c*/  call sub_1416C3060
/*1409f8412*/  jmp loc_1409F8D2B
/*1409f8417*/ loc_1409F8417: lea rcx, off_1417A8268; "src\\core\\relay\\translator.rs"
/*1409f841e*/  call sub_1416C3040
/*1409f8424*/  jmp loc_1409F8D2B
/*1409f8429*/ loc_1409F8429: lea r8, off_1417A7E50; "src\\core\\relay\\translator.rs"
/*1409f8430*/  mov rcx, r12
/*1409f8433*/  mov rdx, rsi
/*1409f8436*/  call sub_1416C2E1B
/*1409f843c*/  jmp loc_1409F8D2B
/*1409f8441*/ loc_1409F8441: mov rdx, qword ptr [rbp+450h+var_100]
/*1409f8448*/  mov [rbp+450h+var_113], 1
/*1409f844f*/ loc_1409F844F: call sub_1416C2D4B
/*1409f8455*/  jmp loc_1409F8D2B
/*1409f845a*/ loc_1409F845A: mov rdx, qword ptr [rbp+450h+var_100]
/*1409f8461*/  mov [rbp+450h+var_171], 1
/*1409f8468*/ loc_1409F8468: mov rcx, r15
/*1409f846b*/  call sub_1416C2D4B
/*1409f8471*/  jmp loc_1409F8D2B
/*1409f8476*/ loc_1409F8476: mov rdx, qword ptr [rbp+450h+var_100]
/*1409f847d*/ loc_1409F847D: call sub_1416C2D4B
/*1409f8483*/  jmp loc_1409F8D2B
/*1409f8488*/ loc_1409F8488: mov ecx, 1
/*1409f848d*/  mov edx, 5
/*1409f8492*/  call sub_1416C2D4B
/*1409f8498*/  jmp loc_1409F8D2B
/*1409f849d*/ loc_1409F849D: mov ecx, 1
/*1409f84a2*/  mov edx, 8
/*1409f84a7*/  call sub_1416C2D4B
/*1409f84ad*/  jmp loc_1409F8D2B
/*1409f84b2*/ loc_1409F84B2: mov [rbp+450h+var_AB], bl
/*1409f84b8*/  mov [rbp+450h+var_AC], 1
/*1409f84bf*/ loc_1409F84BF: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409f84c6*/  call sub_1416C3040
/*1409f84cc*/  jmp loc_1409F8D2B
/*1409f84d1*/ loc_1409F84D1: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f84d8*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f84df*/ loc_1409F84DF: lea rax, off_1417A8168; "src\\core\\relay\\translator.rs"
/*1409f84e6*/  mov [rsp+4D0h+var_4B0], rax
/*1409f84eb*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f84f2*/  lea r9, off_1417A5560
/*1409f84f9*/  lea r8, [rbp+450h+var_1B0]
/*1409f8500*/  mov edx, 2Bh ; '+'
/*1409f8505*/  call sub_1416C3060
/*1409f850b*/  jmp loc_1409F8D2B
/*1409f8510*/ loc_1409F8510: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8517*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f851e*/ loc_1409F851E: lea rax, off_1417A8168; "src\\core\\relay\\translator.rs"
/*1409f8525*/  mov [rsp+4D0h+var_4B0], rax
/*1409f852a*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8531*/  lea r9, off_1417A5560
/*1409f8538*/  lea r8, [rbp+450h+var_1B0]
/*1409f853f*/  mov edx, 2Bh ; '+'
/*1409f8544*/  call sub_1416C3060
/*1409f854a*/  jmp loc_1409F8D2B
/*1409f854f*/ loc_1409F854F: mov [rbp+450h+var_233], 1
/*1409f8556*/ loc_1409F8556: mov ecx, 1
/*1409f855b*/  mov rdx, rdi
/*1409f855e*/  call sub_1416C2D4B
/*1409f8564*/  jmp loc_1409F8D2B
/*1409f8569*/ loc_1409F8569: mov ecx, 1
/*1409f856e*/  mov edx, 4
/*1409f8573*/  call sub_1416C2D4B
/*1409f8579*/  jmp loc_1409F8D2B
/*1409f857e*/ loc_1409F857E: mov ecx, 1
/*1409f8583*/  mov edx, 6
/*1409f8588*/  call sub_1416C2D4B
/*1409f858e*/  jmp loc_1409F8D2B
/*1409f8593*/ loc_1409F8593: mov ecx, 1
/*1409f8598*/  mov edx, 7
/*1409f859d*/  call sub_1416C2D4B
/*1409f85a3*/  jmp loc_1409F8D2B
/*1409f85a8*/ loc_1409F85A8: mov ecx, 1
/*1409f85ad*/  mov rdx, rsi
/*1409f85b0*/  call sub_1416C2D4B
/*1409f85b6*/  jmp loc_1409F8D2B
/*1409f85bb*/ loc_1409F85BB: mov [rbp+450h+var_A9], 1
/*1409f85c2*/  mov [rbp+450h+var_AA], 1
/*1409f85c9*/ loc_1409F85C9: mov ecx, 8
/*1409f85ce*/  mov edx, 20h ; ' '
/*1409f85d3*/  call sub_1416C2D31
/*1409f85d9*/  jmp loc_1409F8D2B
/*1409f85de*/ loc_1409F85DE: lea r8, off_1417A8208; "src\\core\\relay\\translator.rs"
/*1409f85e5*/  mov rcx, r12
/*1409f85e8*/  call sub_1416C30E3
/*1409f85ee*/  jmp loc_1409F8D2B
/*1409f85f3*/ loc_1409F85F3: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f85fa*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8601*/ loc_1409F8601: lea rax, off_1417A7BF8; "src\\core\\relay\\translator.rs"
/*1409f8608*/  mov [rsp+4D0h+var_4B0], rax
/*1409f860d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8614*/  lea r9, off_1417A5560
/*1409f861b*/  lea r8, [rbp+450h+var_1B0]
/*1409f8622*/  mov edx, 2Bh ; '+'
/*1409f8627*/  call sub_1416C3060
/*1409f862d*/  jmp loc_1409F8D2B
/*1409f8632*/ loc_1409F8632: mov ecx, 1
/*1409f8637*/  mov edx, 0Dh
/*1409f863c*/  call sub_1416C2D4B
/*1409f8642*/  jmp loc_1409F8D2B
/*1409f8647*/ loc_1409F8647: mov [rbp+450h+var_AD], 1
/*1409f864e*/ loc_1409F864E: mov ecx, 8
/*1409f8653*/  mov edx, 20h ; ' '
/*1409f8658*/  call sub_1416C2D31
/*1409f865e*/  jmp loc_1409F8D2B
/*1409f8663*/ loc_1409F8663: mov ecx, 1
/*1409f8668*/  mov edx, 4
/*1409f866d*/  call sub_1416C2D4B
/*1409f8673*/  jmp loc_1409F8D2B
/*1409f8678*/ loc_1409F8678: mov ecx, 1
/*1409f867d*/  mov edx, 6
/*1409f8682*/  call sub_1416C2D4B
/*1409f8688*/  jmp loc_1409F8D2B
/*1409f868d*/ loc_1409F868D: mov ecx, 1
/*1409f8692*/  mov edx, 7
/*1409f8697*/  call sub_1416C2D4B
/*1409f869d*/  jmp loc_1409F8D2B
/*1409f86a2*/ loc_1409F86A2: mov ecx, 1
/*1409f86a7*/  mov edx, 7
/*1409f86ac*/  call sub_1416C2D4B
/*1409f86b2*/  jmp loc_1409F8D2B
/*1409f86b7*/ loc_1409F86B7: mov ecx, 1
/*1409f86bc*/  mov edx, 4
/*1409f86c1*/  call sub_1416C2D4B
/*1409f86c7*/  jmp loc_1409F8D2B
/*1409f86cc*/ loc_1409F86CC: mov rdx, rdi
/*1409f86cf*/  jmp loc_1409F38C6
/*1409f86d4*/ loc_1409F86D4: mov ecx, 1
/*1409f86d9*/  mov edx, 4
/*1409f86de*/  call sub_1416C2D4B
/*1409f86e4*/  jmp loc_1409F8D2B
/*1409f86e9*/ loc_1409F86E9: mov ecx, 1
/*1409f86ee*/  mov edx, 0Ch
/*1409f86f3*/  call sub_1416C2D4B
/*1409f86f9*/  jmp loc_1409F8D2B
/*1409f86fe*/ loc_1409F86FE: mov rdx, rdi
/*1409f8701*/  jmp loc_1409F38EC
/*1409f8706*/ loc_1409F8706: mov ecx, 1
/*1409f870b*/  mov edx, 7
/*1409f8710*/  call sub_1416C2D4B
/*1409f8716*/  jmp loc_1409F8D2B
/*1409f871b*/ loc_1409F871B: mov ecx, 1
/*1409f8720*/  mov edx, 0Ch
/*1409f8725*/  call sub_1416C2D4B
/*1409f872b*/  jmp loc_1409F8D2B
/*1409f8730*/ loc_1409F8730: mov ecx, 1
/*1409f8735*/  mov edx, 4
/*1409f873a*/  call sub_1416C2D4B
/*1409f8740*/  jmp loc_1409F8D2B
/*1409f8745*/ loc_1409F8745: mov ecx, 1
/*1409f874a*/  mov edx, 4
/*1409f874f*/  call sub_1416C2D4B
/*1409f8755*/  jmp loc_1409F8D2B
/*1409f875a*/ loc_1409F875A: mov rdx, rdi
/*1409f875d*/  jmp loc_1409F38A0
/*1409f8762*/ loc_1409F8762: mov rax, qword ptr [rbp+450h+var_110+8]
/*1409f8769*/  mov qword ptr [rbp+450h+var_1B0], rax
/*1409f8770*/ loc_1409F8770: lea rax, off_1417A7BB0; "src\\core\\relay\\translator.rs"
/*1409f8777*/  mov [rsp+4D0h+var_4B0], rax
/*1409f877c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409f8783*/  lea r9, off_1417A5560
/*1409f878a*/  lea r8, [rbp+450h+var_1B0]
/*1409f8791*/  mov edx, 2Bh ; '+'
/*1409f8796*/  call sub_1416C3060
/*1409f879c*/  jmp loc_1409F8D2B
/*1409f87a1*/ loc_1409F87A1: mov [rbp+450h+var_340], rdi
/*1409f87a8*/  jmp loc_1409F3873
/*1409f87ad*/ loc_1409F87AD: mov rdx, rdi
/*1409f87b0*/  jmp loc_1409F3E9E
/*1409f87b5*/ loc_1409F87B5: mov ecx, 1
/*1409f87ba*/  mov edx, 9
/*1409f87bf*/  call sub_1416C2D4B
/*1409f87c5*/  jmp loc_1409F8D2B
/*1409f87ca*/ loc_1409F87CA: mov ecx, 1
/*1409f87cf*/  mov edx, 4
/*1409f87d4*/  call sub_1416C2D4B
/*1409f87da*/  jmp loc_1409F8D2B
/*1409f87df*/ loc_1409F87DF: mov ecx, 1
/*1409f87e4*/  mov edx, 2
/*1409f87e9*/  call sub_1416C2D4B
/*1409f87ef*/  jmp loc_1409F8D2B
/*1409f87f4*/ loc_1409F87F4: mov ecx, 1
/*1409f87f9*/  mov edx, 4
/*1409f87fe*/  call sub_1416C2D4B
/*1409f8804*/  jmp loc_1409F8D2B
/*1409f8809*/ loc_1409F8809: mov ecx, 1
/*1409f880e*/  mov edx, 8
/*1409f8813*/  call sub_1416C2D4B
/*1409f8819*/  jmp loc_1409F8D2B
/*1409f881e*/ loc_1409F881E: mov ecx, 1
/*1409f8823*/  mov edx, 8
/*1409f8828*/  call sub_1416C2D4B
/*1409f882e*/  jmp loc_1409F8D2B
/*1409f8833*/ loc_1409F8833: mov ecx, 1
/*1409f8838*/  mov edx, 5
/*1409f883d*/  call sub_1416C2D4B
/*1409f8843*/  jmp loc_1409F8D2B
/*1409f8848*/ loc_1409F8848: mov [rbp+450h+var_338], r13
/*1409f884f*/  jmp loc_1409F3ED5
/*1409f8854*/ loc_1409F8854: mov [rbp+450h+var_221], 1
/*1409f885b*/ loc_1409F885B: mov ecx, 1
/*1409f8860*/  mov rdx, rdi
/*1409f8863*/  call sub_1416C2D4B
/*1409f8869*/  jmp loc_1409F8D2B
/*1409f886e*/ loc_1409F886E: mov [rbp+450h+var_228], 1
/*1409f8875*/ loc_1409F8875: mov ecx, 1
/*1409f887a*/  mov rdx, rdi
/*1409f887d*/  call sub_1416C2D4B
/*1409f8883*/  jmp loc_1409F8D2B
/*1409f8888*/ loc_1409F8888: mov ecx, 1
/*1409f888d*/  mov edx, 4
/*1409f8892*/  call sub_1416C2D4B
/*1409f8898*/  jmp loc_1409F8D2B
/*1409f889d*/ loc_1409F889D: mov [rbp+450h+var_229], 1
/*1409f88a4*/ loc_1409F88A4: mov ecx, 1
/*1409f88a9*/  mov rdx, r13
/*1409f88ac*/  call sub_1416C2D4B
/*1409f88b2*/  jmp loc_1409F8D2B
/*1409f88b7*/ loc_1409F88B7: mov [rbp+450h+var_22A], 1
/*1409f88be*/ loc_1409F88BE: mov ecx, 1
/*1409f88c3*/  mov rdx, rdi
/*1409f88c6*/  call sub_1416C2D4B
/*1409f88cc*/  jmp loc_1409F8D2B
/*1409f88d1*/ loc_1409F88D1: mov ecx, 1
/*1409f88d6*/  mov edx, 0Ah
/*1409f88db*/  call sub_1416C2D4B
/*1409f88e1*/  jmp loc_1409F8D2B
/*1409f88e6*/ loc_1409F88E6: mov ecx, 1
/*1409f88eb*/  mov edx, 7
/*1409f88f0*/  call sub_1416C2D4B
/*1409f88f6*/  jmp loc_1409F8D2B
/*1409f88fb*/ loc_1409F88FB: mov ecx, 1
/*1409f8900*/  mov edx, 9
/*1409f8905*/  call sub_1416C2D4B
/*1409f890b*/  jmp loc_1409F8D2B
/*1409f8910*/ loc_1409F8910: mov ecx, 1
/*1409f8915*/  mov edx, 4
/*1409f891a*/  call sub_1416C2D4B
/*1409f8920*/  jmp loc_1409F8D2B
/*1409f8925*/ loc_1409F8925: mov [rbp+450h+var_A8], r13
/*1409f892c*/  mov ecx, 1
/*1409f8931*/  jmp loc_1409F7A70
/*1409f8936*/ loc_1409F8936: mov [rbp+450h+var_310], rsi
/*1409f893d*/ loc_1409F893D: mov ecx, 1
/*1409f8942*/  mov edx, 2
/*1409f8947*/  call sub_1416C2D4B
/*1409f894d*/  jmp loc_1409F8D2B
/*1409f8952*/ loc_1409F8952: mov ecx, 1
/*1409f8957*/  mov edx, 8
/*1409f895c*/  call sub_1416C2D4B
/*1409f8962*/  jmp loc_1409F8D2B
/*1409f8967*/ loc_1409F8967: mov ecx, 1
/*1409f896c*/  mov edx, 8
/*1409f8971*/  call sub_1416C2D4B
/*1409f8977*/  jmp loc_1409F8D2B
/*1409f897c*/ loc_1409F897C: mov ecx, 1
/*1409f8981*/  mov edx, 4
/*1409f8986*/  call sub_1416C2D4B
/*1409f898c*/  jmp loc_1409F8D2B
/*1409f8991*/ loc_1409F8991: mov ecx, 1
/*1409f8996*/  mov edx, 2
/*1409f899b*/  call sub_1416C2D4B
/*1409f89a1*/  jmp loc_1409F8D2B
/*1409f89a6*/ loc_1409F89A6: mov ecx, 1
/*1409f89ab*/  mov edx, 4
/*1409f89b0*/  call sub_1416C2D4B
/*1409f89b6*/  jmp loc_1409F8D2B
/*1409f89bb*/ loc_1409F89BB: mov ecx, 1
/*1409f89c0*/  mov edx, 9
/*1409f89c5*/  call sub_1416C2D4B
/*1409f89cb*/  jmp loc_1409F8D2B
/*1409f89d0*/ loc_1409F89D0: mov [rbp+450h+var_9A], 1
/*1409f89d7*/  mov [rbp+450h+var_9B], 1
/*1409f89de*/ loc_1409F89DE: mov ecx, 1
/*1409f89e3*/  mov edx, 4
/*1409f89e8*/  call sub_1416C2D4B
/*1409f89ee*/  jmp loc_1409F8D2B
/*1409f89f3*/ loc_1409F89F3: mov ecx, 1
/*1409f89f8*/  mov edx, 7
/*1409f89fd*/  call sub_1416C2D4B
/*1409f8a03*/  jmp loc_1409F8D2B
/*1409f8a08*/ loc_1409F8A08: lea r8, off_1417A8238; "src\\core\\relay\\translator.rs"
/*1409f8a0f*/  mov rcx, r12
/*1409f8a12*/  call sub_1416C30E3
/*1409f8a18*/  jmp loc_1409F8D2B
/*1409f8a1d*/ loc_1409F8A1D: mov ecx, 1
/*1409f8a22*/  mov edx, 8
/*1409f8a27*/  call sub_1416C2D4B
/*1409f8a2d*/  jmp loc_1409F8D2B
/*1409f8a32*/ loc_1409F8A32: mov [rbp+450h+var_111], 1
/*1409f8a39*/ loc_1409F8A39: mov ecx, 1
/*1409f8a3e*/  mov edx, 8
/*1409f8a43*/  call sub_1416C2D4B
/*1409f8a49*/  jmp loc_1409F8D2B
/*1409f8a4e*/ loc_1409F8A4E: mov [rbp+450h+var_9A], 1
/*1409f8a55*/  mov [rbp+450h+var_9B], 1
/*1409f8a5c*/ loc_1409F8A5C: mov ecx, 1
/*1409f8a61*/  mov edx, 0Ah
/*1409f8a66*/  call sub_1416C2D4B
/*1409f8a6c*/  jmp loc_1409F8D2B
/*1409f8a71*/ loc_1409F8A71: mov [rbp+450h+var_111], 1
/*1409f8a78*/ loc_1409F8A78: mov ecx, 1
/*1409f8a7d*/  mov edx, 4
/*1409f8a82*/  call sub_1416C2D4B
/*1409f8a88*/  jmp loc_1409F8D2B
/*1409f8a8d*/ loc_1409F8A8D: mov ecx, 1
/*1409f8a92*/  mov edx, 4
/*1409f8a97*/  call sub_1416C2D4B
/*1409f8a9d*/  jmp loc_1409F8D2B
/*1409f8aa2*/ loc_1409F8AA2: mov ecx, 1
/*1409f8aa7*/  mov edx, 4
/*1409f8aac*/  call sub_1416C2D4B
/*1409f8ab2*/  jmp loc_1409F8D2B
/*1409f8ab7*/ loc_1409F8AB7: mov [rbp+450h+var_9A], 1
/*1409f8abe*/  mov [rbp+450h+var_9B], 1
/*1409f8ac5*/ loc_1409F8AC5: mov ecx, 1
/*1409f8aca*/  mov edx, 0Bh
/*1409f8acf*/  call sub_1416C2D4B
/*1409f8ad5*/  jmp loc_1409F8D2B
/*1409f8ada*/ loc_1409F8ADA: mov [rbp+450h+var_224], 1
/*1409f8ae1*/ loc_1409F8AE1: mov ecx, 1
/*1409f8ae6*/  mov rdx, rdi
/*1409f8ae9*/  call sub_1416C2D4B
/*1409f8aef*/  jmp loc_1409F8D2B
/*1409f8af4*/ loc_1409F8AF4: mov ecx, 1
/*1409f8af9*/  mov edx, 11h
/*1409f8afe*/  call sub_1416C2D4B
/*1409f8b04*/  jmp loc_1409F8D2B
/*1409f8b09*/ loc_1409F8B09: mov ecx, 1
/*1409f8b0e*/  mov edx, 7
/*1409f8b13*/  call sub_1416C2D4B
/*1409f8b19*/  jmp loc_1409F8D2B
/*1409f8b1e*/ loc_1409F8B1E: mov ecx, 1
/*1409f8b23*/  mov edx, 4
/*1409f8b28*/  call sub_1416C2D4B
/*1409f8b2e*/  jmp loc_1409F8D2B
/*1409f8b33*/ loc_1409F8B33: mov [rbp+450h+var_223], 1
/*1409f8b3a*/ loc_1409F8B3A: mov ecx, 1
/*1409f8b3f*/  mov rdx, rdi
/*1409f8b42*/  call sub_1416C2D4B
/*1409f8b48*/  jmp loc_1409F8D2B
/*1409f8b4d*/ loc_1409F8B4D: mov ecx, 1
/*1409f8b52*/  mov edx, 0Ah
/*1409f8b57*/  call sub_1416C2D4B
/*1409f8b5d*/  jmp loc_1409F8D2B
/*1409f8b62*/ loc_1409F8B62: mov ecx, 1
/*1409f8b67*/  mov edx, 4
/*1409f8b6c*/  call sub_1416C2D4B
/*1409f8b72*/  jmp loc_1409F8D2B
/*1409f8b77*/ loc_1409F8B77: mov ecx, 1
/*1409f8b7c*/  mov edx, 7
/*1409f8b81*/  call sub_1416C2D4B
/*1409f8b87*/  jmp loc_1409F8D2B
/*1409f8b8c*/ loc_1409F8B8C: mov ecx, 1
/*1409f8b91*/  mov edx, 9
/*1409f8b96*/  call sub_1416C2D4B
/*1409f8b9c*/  jmp loc_1409F8D2B
/*1409f8ba1*/ loc_1409F8BA1: mov ecx, 1
/*1409f8ba6*/  mov edx, 4
/*1409f8bab*/  call sub_1416C2D4B
/*1409f8bb1*/  jmp loc_1409F8D2B
/*1409f8bb6*/ loc_1409F8BB6: mov ecx, 1
/*1409f8bbb*/  mov edx, 6
/*1409f8bc0*/  call sub_1416C2D4B
/*1409f8bc6*/  jmp loc_1409F8D2B
/*1409f8bcb*/ loc_1409F8BCB: mov ecx, 1
/*1409f8bd0*/  mov edx, 0Ah
/*1409f8bd5*/  call sub_1416C2D4B
/*1409f8bdb*/  jmp loc_1409F8D2B
/*1409f8be0*/ loc_1409F8BE0: mov ecx, 1
/*1409f8be5*/  mov edx, 2
/*1409f8bea*/  call sub_1416C2D4B
/*1409f8bf0*/  jmp loc_1409F8D2B
/*1409f8bf5*/ loc_1409F8BF5: mov ecx, 1
/*1409f8bfa*/  mov edx, 3
/*1409f8bff*/  call sub_1416C2D4B
/*1409f8c05*/  jmp loc_1409F8D2B
/*1409f8c0a*/ loc_1409F8C0A: mov ecx, 1
/*1409f8c0f*/  mov edx, 4
/*1409f8c14*/  call sub_1416C2D4B
/*1409f8c1a*/  jmp loc_1409F8D2B
/*1409f8c1f*/ loc_1409F8C1F: mov ecx, 1
/*1409f8c24*/  mov edx, 9
/*1409f8c29*/  call sub_1416C2D4B
/*1409f8c2f*/  jmp loc_1409F8D2B
/*1409f8c34*/ loc_1409F8C34: mov [rbp+450h+var_1CA], 1
/*1409f8c3b*/ loc_1409F8C3B: mov ecx, 1
/*1409f8c40*/  mov rdx, rsi
/*1409f8c43*/  call sub_1416C2D4B
/*1409f8c49*/  jmp loc_1409F8D2B
/*1409f8c4e*/ loc_1409F8C4E: lea r8, off_1417A7E68; "src\\core\\relay\\translator.rs"
/*1409f8c55*/  mov rcx, r12
/*1409f8c58*/  call sub_1416C30E3
/*1409f8c5e*/  jmp loc_1409F8D2B
/*1409f8c63*/ loc_1409F8C63: mov [rbp+450h+var_9A], 1
/*1409f8c6a*/  mov [rbp+450h+var_9B], 0
/*1409f8c71*/ loc_1409F8C71: mov ecx, 1
/*1409f8c76*/  mov edx, 6
/*1409f8c7b*/  call sub_1416C2D4B
/*1409f8c81*/  jmp loc_1409F8D2B
/*1409f8c86*/ loc_1409F8C86: mov [rbp+450h+var_2F8], rsi
/*1409f8c8d*/  mov ecx, 1
/*1409f8c92*/  jmp loc_1409F7D96
/*1409f8c97*/ loc_1409F8C97: mov rdx, r13
/*1409f8c9a*/  mov ecx, 1
/*1409f8c9f*/  jmp loc_1409F7DAA
/*1409f8ca4*/ loc_1409F8CA4: lea r8, off_1417A8220; "src\\core\\relay\\translator.rs"
/*1409f8cab*/  mov rcx, r12
/*1409f8cae*/  call sub_1416C30E3
/*1409f8cb4*/  jmp short loc_1409F8D2B
/*1409f8cb6*/ loc_1409F8CB6: mov [rbp+450h+var_99], 1
/*1409f8cbd*/ loc_1409F8CBD: mov ecx, 1
/*1409f8cc2*/  mov rdx, rsi
/*1409f8cc5*/  call sub_1416C2D4B
/*1409f8ccb*/  jmp short loc_1409F8D2B
/*1409f8ccd*/ loc_1409F8CCD: mov ecx, 1
/*1409f8cd2*/  mov edx, 25h ; '%'
/*1409f8cd7*/  call sub_1416C2D4B
/*1409f8cdd*/  jmp short loc_1409F8D2B
/*1409f8cdf*/ loc_1409F8CDF: mov rax, [rbp+450h+var_B8]
/*1409f8ce6*/  mov [rbp+450h+var_A8], rax
/*1409f8ced*/  mov ecx, 1
/*1409f8cf2*/  jmp loc_1409F7DBE
/*1409f8cf7*/ loc_1409F8CF7: mov ecx, 1
/*1409f8cfc*/  mov edx, 4
/*1409f8d01*/  call sub_1416C2D4B
/*1409f8d07*/  jmp short loc_1409F8D2B
/*1409f8d09*/ loc_1409F8D09: mov ecx, 1
/*1409f8d0e*/  mov edx, 8
/*1409f8d13*/  call sub_1416C2D4B
/*1409f8d19*/  jmp short loc_1409F8D2B
/*1409f8d1b*/ loc_1409F8D1B: mov ecx, 1
/*1409f8d20*/  mov edx, 4
/*1409f8d25*/  call sub_1416C2D4B
/*1409f8d2b*/ loc_1409F8D2B: ud2
/*1409f8d2d*/ loc_1409F8D2D: mov [rbp+450h+var_308], rsi
/*1409f8d34*/  mov ecx, 1
/*1409f8d39*/  jmp loc_1409F7E54
/*1409f8d3e*/ loc_1409F8D3E: mov [rbp+450h+var_1B8], r14
/*1409f8d45*/  mov ecx, 1
/*1409f8d4a*/  jmp loc_1409F7E40
/*1409f8d4f*/ loc_1409F8D4F: mov rax, [rbp+450h+var_B8]
/*1409f8d56*/  mov [rbp+450h+var_A8], rax
/*1409f8d5d*/  jmp loc_1409F589D
