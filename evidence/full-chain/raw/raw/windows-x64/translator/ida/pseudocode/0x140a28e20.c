// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A28E20(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  const char *v16; // r12
  __m128i si128; // xmm6
  __m128i v18; // xmm7
  __m128i v19; // xmm9
  __m128i v20; // xmm10
  __m128i v21; // xmm12
  __m128i v22; // xmm13
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r8d
  unsigned __int16 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r13
  void *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  void *v40; // rsi
... [256659 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 1569/1569 retrieved (all pages fetched: True)
// disasm instructions: 7515/7515 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x140a28e20-0x140a28ee9 size=201 type=0 succ=['0x140a28ee9'] pred=[]
// BB 0x140a28ee9-0x140a28f36 size=77 type=0 succ=['0x140a28f36'] pred=['0x140a28e20']
// BB 0x140a28f36-0x140a28f5b size=37 type=0 succ=['0x140a28f5b', '0x140a28fae'] pred=['0x140a28ee9']
// BB 0x140a28f5b-0x140a28f60 size=5 type=0 succ=['0x140a28f60', '0x140a28fae'] pred=['0x140a28f36']
// BB 0x140a28f60-0x140a28f9e size=62 type=0 succ=['0x140a28f9e', '0x140a2cfef'] pred=['0x140a28f5b']
// BB 0x140a28f9e-0x140a28fae size=16 type=0 succ=['0x140a28fae'] pred=['0x140a28f60']
// BB 0x140a28fae-0x140a28ff3 size=69 type=0 succ=['0x140a28ff3', '0x140a2d08b'] pred=['0x140a28f36', '0x140a28f5b', '0x140a28f9e', '0x140a2cfef', '0x140a2cfff']
// BB 0x140a28ff3-0x140a28ffc size=9 type=0 succ=['0x140a28ffc', '0x140a2d08b'] pred=['0x140a28fae']
// BB 0x140a28ffc-0x140a29080 size=132 type=0 succ=['0x140a29080'] pred=['0x140a28ff3']
// BB 0x140a29080-0x140a29089 size=9 type=0 succ=['0x140a29089', '0x140a2cda3'] pred=['0x140a28ffc', '0x140a2909a', '0x140a290b4', '0x140a290b9', '0x140a290c7', '0x140a290db', '0x140a29194', '0x140a2921c', '0x140a292a0', '0x140a292c1', '0x140a292ed', '0x140a292f6', '0x140a29304', '0x140a2932e', '0x140a2a6a4', '0x140a2a6b4', '0x140a2b857', '0x140a2b867', '0x140a2bd69', '0x140a2bd79', '0x140a2bff2', '0x140a2c2a8', '0x140a2c2fd', '0x140a2c8b6', '0x140a2cd05']
// BB 0x140a29089-0x140a2909a size=17 type=0 succ=['0x140a2909a'] pred=['0x140a29080']
// BB 0x140a2909a-0x140a290b4 size=26 type=0 succ=['0x140a29080', '0x140a290b4'] pred=['0x140a29089']
// BB 0x140a290b4-0x140a290b9 size=5 type=0 succ=['0x140a29080', '0x140a290b9'] pred=['0x140a2909a']
// BB 0x140a290b9-0x140a290c7 size=14 type=0 succ=['0x140a29080', '0x140a290c7'] pred=['0x140a290b4']
// BB 0x140a290c7-0x140a290db size=20 type=1 succ=['0x140a29080', '0x140a290db', '0x140a29194', '0x140a2921c', '0x140a292a0'] pred=['0x140a290b9']
// BB 0x140a290db-0x140a290f2 size=23 type=0 succ=['0x140a29080', '0x140a290f2'] pred=['0x140a290c7']
// BB 0x140a290f2-0x140a2911e size=44 type=0 succ=['0x140a2911e', '0x140a293e8'] pred=['0x140a290db']
// BB 0x140a2911e-0x140a29127 size=9 type=0 succ=['0x140a29127', '0x140a293e8'] pred=['0x140a290f2']
// BB 0x140a29127-0x140a29139 size=18 type=0 succ=['0x140a29139', '0x140a2aa0b'] pred=['0x140a2911e']
// BB 0x140a29139-0x140a29143 size=10 type=0 succ=['0x140a29143', '0x140a2aa22'] pred=['0x140a29127']
// BB 0x140a29143-0x140a29164 size=33 type=0 succ=['0x140a29164', '0x140a2aa3f'] pred=['0x140a29139']
// BB 0x140a29164-0x140a2918f size=43 type=0 succ=['0x140a2918f', '0x140a293f9'] pred=['0x140a29143']
// BB 0x140a2918f-0x140a29194 size=5 type=0 succ=['0x140a296ee'] pred=['0x140a29164']
// BB 0x140a29194-0x140a291be size=42 type=0 succ=['0x140a29080', '0x140a291be'] pred=['0x140a290c7']
// BB 0x140a291be-0x140a291f0 size=50 type=0 succ=['0x140a291f0', '0x140a29ff4'] pred=['0x140a29194']
// BB 0x140a291f0-0x140a29200 size=16 type=0 succ=['0x140a29200', '0x140a29ffb'] pred=['0x140a291be']
// BB 0x140a29200-0x140a2920d size=13 type=0 succ=['0x140a2920d', '0x140a2d353'] pred=['0x140a291f0']
// BB 0x140a2920d-0x140a29213 size=6 type=0 succ=['0x140a29213', '0x140a2cd48'] pred=['0x140a29200']
// BB 0x140a29213-0x140a2921c size=9 type=0 succ=['0x140a29ffb'] pred=['0x140a2920d']
// BB 0x140a2921c-0x140a29242 size=38 type=0 succ=['0x140a29080', '0x140a29242'] pred=['0x140a290c7']
// BB 0x140a29242-0x140a29274 size=50 type=0 succ=['0x140a29274', '0x140a2a095'] pred=['0x140a2921c']
// BB 0x140a29274-0x140a29284 size=16 type=0 succ=['0x140a29284', '0x140a2a09c'] pred=['0x140a29242']
// BB 0x140a29284-0x140a29291 size=13 type=0 succ=['0x140a29291', '0x140a2d378'] pred=['0x140a29274']
// BB 0x140a29291-0x140a29297 size=6 type=0 succ=['0x140a29297', '0x140a2cd66'] pred=['0x140a29284']
// BB 0x140a29297-0x140a292a0 size=9 type=0 succ=['0x140a2a09c'] pred=['0x140a29291']
// BB 0x140a292a0-0x140a292c1 size=33 type=0 succ=['0x140a29080', '0x140a292c1'] pred=['0x140a290c7']
// BB 0x140a292c1-0x140a292ed size=44 type=0 succ=['0x140a29080', '0x140a292ed'] pred=['0x140a292a0']
// BB 0x140a292ed-0x140a292f6 size=9 type=0 succ=['0x140a29080', '0x140a292f6'] pred=['0x140a292c1']
// BB 0x140a292f6-0x140a29304 size=14 type=0 succ=['0x140a29080', '0x140a29304'] pred=['0x140a292ed']
// BB 0x140a29304-0x140a2932e size=42 type=0 succ=['0x140a29080', '0x140a2932e'] pred=['0x140a292f6']
// BB 0x140a2932e-0x140a29369 size=59 type=0 succ=['0x140a29080', '0x140a29369'] pred=['0x140a29304']
// BB 0x140a29369-0x140a2939f size=54 type=0 succ=['0x140a2939f'] pred=['0x140a2932e']
// BB 0x140a2939f-0x140a293c3 size=36 type=0 succ=['0x140a293c3', '0x140a2bfc7'] pred=['0x140a29369']
// BB 0x140a293c3-0x140a293e8 size=37 type=0 succ=['0x140a2bfd4'] pred=['0x140a2939f']
// BB 0x140a293e8-0x140a293f9 size=17 type=0 succ=['0x140a293f9'] pred=['0x140a290f2', '0x140a2911e']
// BB 0x140a293f9-0x140a29407 size=14 type=0 succ=['0x140a29407', '0x140a296ee'] pred=['0x140a29164', '0x140a293e8']
// BB 0x140a29407-0x140a2943a size=51 type=0 succ=['0x140a2943a', '0x140a2e22a'] pred=['0x140a293f9', '0x140a2aa22']
// BB 0x140a2943a-0x140a29481 size=71 type=0 succ=['0x140a29481', '0x140a2e215'] pred=['0x140a29407']
// BB 0x140a29481-0x140a294ba size=57 type=0 succ=['0x140a294ba'] pred=['0x140a2943a']
// BB 0x140a294ba-0x140a294e5 size=43 type=0 succ=['0x140a294e5', '0x140a294f2'] pred=['0x140a29481']
// BB 0x140a294e5-0x140a294f2 size=13 type=0 succ=['0x140a294f2'] pred=['0x140a294ba']
// BB 0x140a294f2-0x140a2950f size=29 type=0 succ=['0x140a2950f', '0x140a2e200'] pred=['0x140a294ba', '0x140a294e5']
// BB 0x140a2950f-0x140a2957f size=112 type=0 succ=['0x140a2957f'] pred=['0x140a294f2']
// BB 0x140a2957f-0x140a295a0 size=33 type=0 succ=['0x140a295a0', '0x140a2de3c'] pred=['0x140a2950f']
// BB 0x140a295a0-0x140a295f2 size=82 type=0 succ=['0x140a295f2', '0x140a295ff'] pred=['0x140a2957f']
// BB 0x140a295f2-0x140a295ff size=13 type=0 succ=['0x140a295ff'] pred=['0x140a295a0']
// BB 0x140a295ff-0x140a29630 size=49 type=0 succ=['0x140a29630'] pred=['0x140a295a0', '0x140a295f2']
// BB 0x140a29630-0x140a29640 size=16 type=0 succ=['0x140a29640', '0x140a29659'] pred=['0x140a295ff', '0x140a2964e']
// BB 0x140a29640-0x140a2964e size=14 type=0 succ=['0x140a2964e'] pred=['0x140a29630']
// BB 0x140a2964e-0x140a29659 size=11 type=0 succ=['0x140a29630'] pred=['0x140a29640']
// BB 0x140a29659-0x140a29665 size=12 type=0 succ=['0x140a29665', '0x140a2967b'] pred=['0x140a29630']
// BB 0x140a29665-0x140a2967b size=22 type=0 succ=['0x140a2967b'] pred=['0x140a29659']
// BB 0x140a2967b-0x140a296ae size=51 type=0 succ=['0x140a296ae', '0x140a296bb'] pred=['0x140a29659', '0x140a29665']
// BB 0x140a296ae-0x140a296bb size=13 type=0 succ=['0x140a296bb'] pred=['0x140a2967b']
// BB 0x140a296bb-0x140a296ee size=51 type=0 succ=['0x140a296ee'] pred=['0x140a2967b', '0x140a296ae']
// BB 0x140a296ee-0x140a29703 size=21 type=0 succ=['0x140a29703'] pred=['0x140a2918f', '0x140a293f9', '0x140a296bb', '0x140a2aa3a']
// BB 0x140a29703-0x140a29721 size=30 type=0 succ=['0x140a29721', '0x140a29fce'] pred=['0x140a296ee']
// BB 0x140a29721-0x140a2972d size=12 type=0 succ=['0x140a2972d', '0x140a2a759'] pred=['0x140a29703']
// BB 0x140a2972d-0x140a29736 size=9 type=0 succ=['0x140a29736', '0x140a29fce'] pred=['0x140a29721']
// BB 0x140a29736-0x140a29770 size=58 type=0 succ=['0x140a29770'] pred=['0x140a2972d']
// BB 0x140a29770-0x140a29779 size=9 type=0 succ=['0x140a29779', '0x140a2a9e8'] pred=['0x140a29736', '0x140a29779', '0x140a29796', '0x140a297a9', '0x140a297af', '0x140a297fe', '0x140a29828', '0x140a29846', '0x140a2984f', '0x140a2985d', '0x140a29879', '0x140a29d59', '0x140a29d77', '0x140a29d80', '0x140a29fb4']
// BB 0x140a29779-0x140a29796 size=29 type=0 succ=['0x140a29770', '0x140a29796'] pred=['0x140a29770']
// BB 0x140a29796-0x140a2979b size=5 type=0 succ=['0x140a29770', '0x140a2979b'] pred=['0x140a29779']
// BB 0x140a2979b-0x140a297a9 size=14 type=0 succ=['0x140a297a9', '0x140a297d4'] pred=['0x140a29796']
// BB 0x140a297a9-0x140a297af size=6 type=0 succ=['0x140a29770', '0x140a297af'] pred=['0x140a2979b']
// BB 0x140a297af-0x140a297cf size=32 type=0 succ=['0x140a29770', '0x140a297cf'] pred=['0x140a297a9']
// BB 0x140a297cf-0x140a297d4 size=5 type=0 succ=['0x140a29d59'] pred=['0x140a297af']
// BB 0x140a297d4-0x140a297fe size=42 type=0 succ=['0x140a297fe', '0x140a29d59'] pred=['0x140a2979b']
// BB 0x140a297fe-0x140a29828 size=42 type=0 succ=['0x140a29770', '0x140a29828'] pred=['0x140a297d4']
// BB 0x140a29828-0x140a29846 size=30 type=0 succ=['0x140a29770', '0x140a29846'] pred=['0x140a297fe']
// BB 0x140a29846-0x140a2984f size=9 type=0 succ=['0x140a29770', '0x140a2984f'] pred=['0x140a29828']
// BB 0x140a2984f-0x140a2985d size=14 type=0 succ=['0x140a29770', '0x140a2985d'] pred=['0x140a29846']
// BB 0x140a2985d-0x140a29879 size=28 type=0 succ=['0x140a29770', '0x140a29879'] pred=['0x140a2984f']
// BB 0x140a29879-0x140a298c5 size=76 type=0 succ=['0x140a29770', '0x140a298c5'] pred=['0x140a2985d']
// BB 0x140a298c5-0x140a29928 size=99 type=0 succ=['0x140a29928', '0x140a2e59c'] pred=['0x140a29879']
// BB 0x140a29928-0x140a29952 size=42 type=0 succ=['0x140a29952'] pred=['0x140a298c5']
// BB 0x140a29952-0x140a29973 size=33 type=0 succ=['0x140a29973', '0x140a2e022'] pred=['0x140a29928']
// BB 0x140a29973-0x140a299c5 size=82 type=0 succ=['0x140a299c5', '0x140a299d2'] pred=['0x140a29952']
// BB 0x140a299c5-0x140a299d2 size=13 type=0 succ=['0x140a299d2'] pred=['0x140a29973']
// BB 0x140a299d2-0x140a299ef size=29 type=0 succ=['0x140a299ef', '0x140a2e587'] pred=['0x140a29973', '0x140a299c5']
// BB 0x140a299ef-0x140a29a4b size=92 type=0 succ=['0x140a29a4b', '0x140a2e5b1'] pred=['0x140a299d2']
// BB 0x140a29a4b-0x140a29a75 size=42 type=0 succ=['0x140a29a75'] pred=['0x140a299ef']
// BB 0x140a29a75-0x140a29a96 size=33 type=0 succ=['0x140a29a96', '0x140a2e0a0'] pred=['0x140a29a4b']
// BB 0x140a29a96-0x140a29ae8 size=82 type=0 succ=['0x140a29ae8', '0x140a29af5'] pred=['0x140a29a75']
// BB 0x140a29ae8-0x140a29af5 size=13 type=0 succ=['0x140a29af5'] pred=['0x140a29a96']
// BB 0x140a29af5-0x140a29b12 size=29 type=0 succ=['0x140a29b12', '0x140a2e5c6'] pred=['0x140a29a96', '0x140a29ae8']
// BB 0x140a29b12-0x140a29b49 size=55 type=0 succ=['0x140a29b49'] pred=['0x140a29af5']
// BB 0x140a29b49-0x140a29b6a size=33 type=0 succ=['0x140a29b6a', '0x140a2e061'] pred=['0x140a29b12']
// BB 0x140a29b6a-0x140a29bbc size=82 type=0 succ=['0x140a29bbc', '0x140a29bc9'] pred=['0x140a29b49']
// BB 0x140a29bbc-0x140a29bc9 size=13 type=0 succ=['0x140a29bc9'] pred=['0x140a29b6a']
// BB 0x140a29bc9-0x140a29be6 size=29 type=0 succ=['0x140a29be6', '0x140a2e572'] pred=['0x140a29b6a', '0x140a29bbc']
// BB 0x140a29be6-0x140a29c10 size=42 type=0 succ=['0x140a29c10'] pred=['0x140a29bc9']
// BB 0x140a29c10-0x140a29c31 size=33 type=0 succ=['0x140a29c31', '0x140a2e0df'] pred=['0x140a29be6']
// BB 0x140a29c31-0x140a29c83 size=82 type=0 succ=['0x140a29c83', '0x140a29c90'] pred=['0x140a29c10']
// BB 0x140a29c83-0x140a29c90 size=13 type=0 succ=['0x140a29c90'] pred=['0x140a29c31']
// BB 0x140a29c90-0x140a29cbc size=44 type=0 succ=['0x140a29cbc'] pred=['0x140a29c31', '0x140a29c83']
// BB 0x140a29cbc-0x140a29ce7 size=43 type=0 succ=['0x140a29ce7', '0x140a29cf4'] pred=['0x140a29c90']
// BB 0x140a29ce7-0x140a29cf4 size=13 type=0 succ=['0x140a29cf4'] pred=['0x140a29cbc']
// BB 0x140a29cf4-0x140a29d29 size=53 type=0 succ=['0x140a29d29', '0x140a29d36'] pred=['0x140a29cbc', '0x140a29ce7']
// BB 0x140a29d29-0x140a29d36 size=13 type=0 succ=['0x140a29d36'] pred=['0x140a29cf4']
// BB 0x140a29d36-0x140a29d59 size=35 type=0 succ=['0x140a29fb4'] pred=['0x140a29cf4', '0x140a29d29']
// BB 0x140a29d59-0x140a29d77 size=30 type=0 succ=['0x140a29770', '0x140a29d77'] pred=['0x140a297cf', '0x140a297d4']
// BB 0x140a29d77-0x140a29d80 size=9 type=0 succ=['0x140a29770', '0x140a29d80'] pred=['0x140a29d59']
// BB 0x140a29d80-0x140a29d8d size=13 type=0 succ=['0x140a29770', '0x140a29d8d'] pred=['0x140a29d77']
// BB 0x140a29d8d-0x140a29dc4 size=55 type=0 succ=['0x140a29dc4', '0x140a2e50d'] pred=['0x140a29d80']
// BB 0x140a29dc4-0x140a29e0b size=71 type=0 succ=['0x140a29e0b', '0x140a2e522'] pred=['0x140a29d8d']
// BB 0x140a29e0b-0x140a29e35 size=42 type=0 succ=['0x140a29e35'] pred=['0x140a29dc4']
// BB 0x140a29e35-0x140a29e60 size=43 type=0 succ=['0x140a29e60', '0x140a29e6d'] pred=['0x140a29e0b']
// BB 0x140a29e60-0x140a29e6d size=13 type=0 succ=['0x140a29e6d'] pred=['0x140a29e35']
// BB 0x140a29e6d-0x140a29e8a size=29 type=0 succ=['0x140a29e8a', '0x140a2e537'] pred=['0x140a29e35', '0x140a29e60']
// BB 0x140a29e8a-0x140a29eb6 size=44 type=0 succ=['0x140a29eb6', '0x140a2dcb0'] pred=['0x140a29e6d']
// BB 0x140a29eb6-0x140a29edd size=39 type=0 succ=['0x140a29edd', '0x140a2dcb2'] pred=['0x140a29e8a']
// BB 0x140a29edd-0x140a29f15 size=56 type=0 succ=['0x140a29f15'] pred=['0x140a29eb6']
// BB 0x140a29f15-0x140a29f47 size=50 type=0 succ=['0x140a29f47', '0x140a29f54'] pred=['0x140a29edd']
// BB 0x140a29f47-0x140a29f54 size=13 type=0 succ=['0x140a29f54'] pred=['0x140a29f15']
// BB 0x140a29f54-0x140a29f89 size=53 type=0 succ=['0x140a29f89', '0x140a29f96'] pred=['0x140a29f15', '0x140a29f47']
// BB 0x140a29f89-0x140a29f96 size=13 type=0 succ=['0x140a29f96'] pred=['0x140a29f54']
// BB 0x140a29f96-0x140a29fb4 size=30 type=0 succ=['0x140a29fb4'] pred=['0x140a29f54', '0x140a29f89']
// BB 0x140a29fb4-0x140a29fce size=26 type=0 succ=['0x140a29770'] pred=['0x140a29d36', '0x140a29f96']
// BB 0x140a29fce-0x140a29ff4 size=38 type=0 succ=['0x140a2b947'] pred=['0x140a29703', '0x140a2972d']
// BB 0x140a29ff4-0x140a29ffb size=7 type=0 succ=['0x140a29ffb'] pred=['0x140a291be']
// BB 0x140a29ffb-0x140a2a01b size=32 type=0 succ=['0x140a2a01b', '0x140a2e1b1'] pred=['0x140a291f0', '0x140a29213', '0x140a29ff4']
// BB 0x140a2a01b-0x140a2a039 size=30 type=0 succ=['0x140a2a039'] pred=['0x140a29ffb']
// BB 0x140a2a039-0x140a2a04e size=21 type=0 succ=['0x140a2a04e'] pred=['0x140a2a01b', '0x140a2cd48']
// BB 0x140a2a04e-0x140a2a05d size=15 type=0 succ=['0x140a2a05d', '0x140a2a6cb'] pred=['0x140a2a039']
// BB 0x140a2a05d-0x140a2a06d size=16 type=0 succ=['0x140a2a06d', '0x140a2a6d2'] pred=['0x140a2a04e']
// BB 0x140a2a06d-0x140a2a07a size=13 type=0 succ=['0x140a2a07a', '0x140a2d39d'] pred=['0x140a2a05d']
// BB 0x140a2a07a-0x140a2a086 size=12 type=0 succ=['0x140a2a086', '0x140a2cd84'] pred=['0x140a2a06d']
// BB 0x140a2a086-0x140a2a095 size=15 type=0 succ=['0x140a2a6d2'] pred=['0x140a2a07a']
// BB 0x140a2a095-0x140a2a09c size=7 type=0 succ=['0x140a2a09c'] pred=['0x140a29242']
// BB 0x140a2a09c-0x140a2a0bc size=32 type=0 succ=['0x140a2a0bc', '0x140a2e1b9'] pred=['0x140a29274', '0x140a29297', '0x140a2a095']
// BB 0x140a2a0bc-0x140a2a0da size=30 type=0 succ=['0x140a2a0da'] pred=['0x140a2a09c']
// BB 0x140a2a0da-0x140a2a132 size=88 type=0 succ=['0x140a2a132', '0x140a2e187'] pred=['0x140a2a0bc', '0x140a2cd66']
// BB 0x140a2a132-0x140a2a179 size=71 type=0 succ=['0x140a2a179', '0x140a2e172'] pred=['0x140a2a0da']
// BB 0x140a2a179-0x140a2a1b5 size=60 type=0 succ=['0x140a2a1b5'] pred=['0x140a2a132']
// BB 0x140a2a1b5-0x140a2a1e0 size=43 type=0 succ=['0x140a2a1e0', '0x140a2a1ed'] pred=['0x140a2a179']
// BB 0x140a2a1e0-0x140a2a1ed size=13 type=0 succ=['0x140a2a1ed'] pred=['0x140a2a1b5']
// BB 0x140a2a1ed-0x140a2a20a size=29 type=0 succ=['0x140a2a20a', '0x140a2e19c'] pred=['0x140a2a1b5', '0x140a2a1e0']
// BB 0x140a2a20a-0x140a2a24b size=65 type=0 succ=['0x140a2a24b', '0x140a2a27b'] pred=['0x140a2a1ed']
// BB 0x140a2a24b-0x140a2a26d size=34 type=0 succ=['0x140a2a26d', '0x140a2e288'] pred=['0x140a2a20a']
// BB 0x140a2a26d-0x140a2a27b size=14 type=0 succ=['0x140a2a27b'] pred=['0x140a2a24b']
// BB 0x140a2a27b-0x140a2a29e size=35 type=0 succ=['0x140a2a29e'] pred=['0x140a2a20a', '0x140a2a26d']
// BB 0x140a2a29e-0x140a2a2c9 size=43 type=0 succ=['0x140a2a2c9', '0x140a2a2d6'] pred=['0x140a2a27b']
// BB 0x140a2a2c9-0x140a2a2d6 size=13 type=0 succ=['0x140a2a2d6'] pred=['0x140a2a29e']
// BB 0x140a2a2d6-0x140a2a2f3 size=29 type=0 succ=['0x140a2a2f3', '0x140a2e15d'] pred=['0x140a2a29e', '0x140a2a2c9']
// BB 0x140a2a2f3-0x140a2a324 size=49 type=0 succ=['0x140a2a324'] pred=['0x140a2a2d6']
// BB 0x140a2a324-0x140a2a345 size=33 type=0 succ=['0x140a2a345', '0x140a2ddbe'] pred=['0x140a2a2f3']
// BB 0x140a2a345-0x140a2a397 size=82 type=0 succ=['0x140a2a397', '0x140a2a3a4'] pred=['0x140a2a324']
// BB 0x140a2a397-0x140a2a3a4 size=13 type=0 succ=['0x140a2a3a4'] pred=['0x140a2a345']
// BB 0x140a2a3a4-0x140a2a3d5 size=49 type=0 succ=['0x140a2a3d5', '0x140a2a42a'] pred=['0x140a2a345', '0x140a2a397']
// BB 0x140a2a3d5-0x140a2a3ed size=24 type=0 succ=['0x140a2a3ed', '0x140a2a42a'] pred=['0x140a2a3a4']
// BB 0x140a2a3ed-0x140a2a3f4 size=7 type=0 succ=['0x140a2a3f4'] pred=['0x140a2a3d5']
// BB 0x140a2a3f4-0x140a2a40e size=26 type=0 succ=['0x140a2a40e', '0x140a2a42a'] pred=['0x140a2a3ed']
// BB 0x140a2a40e-0x140a2a413 size=5 type=0 succ=['0x140a2a413', '0x140a2a42a'] pred=['0x140a2a3f4']
// BB 0x140a2a413-0x140a2a41a size=7 type=0 succ=['0x140a2a41a', '0x140a2a42a'] pred=['0x140a2a40e']
// BB 0x140a2a41a-0x140a2a42a size=16 type=0 succ=['0x140a2a42a', '0x140a2bd94'] pred=['0x140a2a413']
// BB 0x140a2a42a-0x140a2a45d size=51 type=0 succ=['0x140a2a45d', '0x140a2e1c1'] pred=['0x140a2a3a4', '0x140a2a3d5', '0x140a2a3f4', '0x140a2a40e', '0x140a2a413', '0x140a2a41a', '0x140a2bd9b', '0x140a2bdb9', '0x140a2bdc2']
// BB 0x140a2a45d-0x140a2a4a4 size=71 type=0 succ=['0x140a2a4a4', '0x140a2e1eb'] pred=['0x140a2a42a']
// BB 0x140a2a4a4-0x140a2a4ce size=42 type=0 succ=['0x140a2a4ce'] pred=['0x140a2a45d']
// BB 0x140a2a4ce-0x140a2a4f9 size=43 type=0 succ=['0x140a2a4f9', '0x140a2a506'] pred=['0x140a2a4a4']
// BB 0x140a2a4f9-0x140a2a506 size=13 type=0 succ=['0x140a2a506'] pred=['0x140a2a4ce']
// BB 0x140a2a506-0x140a2a523 size=29 type=0 succ=['0x140a2a523', '0x140a2e1d6'] pred=['0x140a2a4ce', '0x140a2a4f9']
// BB 0x140a2a523-0x140a2a571 size=78 type=0 succ=['0x140a2a571', '0x140a2dd63'] pred=['0x140a2a506']
// BB 0x140a2a571-0x140a2a592 size=33 type=0 succ=['0x140a2a592', '0x140a2ddfd'] pred=['0x140a2a523']
// BB 0x140a2a592-0x140a2a5dd size=75 type=0 succ=['0x140a2a5dd'] pred=['0x140a2a571']
// BB 0x140a2a5dd-0x140a2a608 size=43 type=0 succ=['0x140a2a608', '0x140a2a615'] pred=['0x140a2a592']
// BB 0x140a2a608-0x140a2a615 size=13 type=0 succ=['0x140a2a615'] pred=['0x140a2a5dd']
// BB 0x140a2a615-0x140a2a64a size=53 type=0 succ=['0x140a2a64a', '0x140a2a657'] pred=['0x140a2a5dd', '0x140a2a608']
// BB 0x140a2a64a-0x140a2a657 size=13 type=0 succ=['0x140a2a657'] pred=['0x140a2a615']
// BB 0x140a2a657-0x140a2a68a size=51 type=0 succ=['0x140a2a68a'] pred=['0x140a2a615', '0x140a2a64a']
// BB 0x140a2a68a-0x140a2a697 size=13 type=0 succ=['0x140a2a697'] pred=['0x140a2a657', '0x140a2bdfb', '0x140a2be0b', '0x140a2be40']
// BB 0x140a2a697-0x140a2a6a4 size=13 type=0 succ=['0x140a2a6a4'] pred=['0x140a2a68a', '0x140a2be85']
// BB 0x140a2a6a4-0x140a2a6b4 size=16 type=0 succ=['0x140a29080', '0x140a2a6b4'] pred=['0x140a2a697']
// BB 0x140a2a6b4-0x140a2a6cb size=23 type=0 succ=['0x140a29080'] pred=['0x140a2a6a4']
// BB 0x140a2a6cb-0x140a2a6d2 size=7 type=0 succ=['0x140a2a6d2'] pred=['0x140a2a04e']
// BB 0x140a2a6d2-0x140a2a6f8 size=38 type=0 succ=['0x140a2a6f8', '0x140a2e27c'] pred=['0x140a2a05d', '0x140a2a086', '0x140a2a6cb']
// BB 0x140a2a6f8-0x140a2a717 size=31 type=0 succ=['0x140a2a717'] pred=['0x140a2a6d2']
// BB 0x140a2a717-0x140a2a735 size=30 type=0 succ=['0x140a2a735', '0x140a2a901'] pred=['0x140a2a6f8', '0x140a2cd84']
// BB 0x140a2a735-0x140a2a759 size=36 type=0 succ=['0x140a2a90d'] pred=['0x140a2a717']
// BB 0x140a2a759-0x140a2a764 size=11 type=0 succ=['0x140a2a764', '0x140a2aaae'] pred=['0x140a29721']
// BB 0x140a2a764-0x140a2a784 size=32 type=0 succ=['0x140a2a784', '0x140a2df75'] pred=['0x140a2a759']
// BB 0x140a2a784-0x140a2a7c1 size=61 type=0 succ=['0x140a2a7c1', '0x140a2e37e'] pred=['0x140a2a764']
// BB 0x140a2a7c1-0x140a2a808 size=71 type=0 succ=['0x140a2a808', '0x140a2e393'] pred=['0x140a2a784']
// BB 0x140a2a808-0x140a2a832 size=42 type=0 succ=['0x140a2a832'] pred=['0x140a2a7c1']
// BB 0x140a2a832-0x140a2a85d size=43 type=0 succ=['0x140a2a85d', '0x140a2a86a'] pred=['0x140a2a808']
// BB 0x140a2a85d-0x140a2a86a size=13 type=0 succ=['0x140a2a86a'] pred=['0x140a2a832']
// BB 0x140a2a86a-0x140a2a887 size=29 type=0 succ=['0x140a2a887', '0x140a2e3a8'] pred=['0x140a2a832', '0x140a2a85d']
// BB 0x140a2a887-0x140a2a8ba size=51 type=0 succ=['0x140a2a8ba', '0x140a2dc7a'] pred=['0x140a2a86a']
// BB 0x140a2a8ba-0x140a2a8c0 size=6 type=0 succ=['0x140a2a8c0', '0x140a2b87e'] pred=['0x140a2a887']
// BB 0x140a2a8c0-0x140a2a8e8 size=40 type=0 succ=['0x140a2a8e8', '0x140a2dc7d'] pred=['0x140a2a8ba']
// BB 0x140a2a8e8-0x140a2a901 size=25 type=0 succ=['0x140a2b883'] pred=['0x140a2a8c0']
// BB 0x140a2a901-0x140a2a90d size=12 type=0 succ=['0x140a2a90d'] pred=['0x140a2a717']
// BB 0x140a2a90d-0x140a2a935 size=40 type=0 succ=['0x140a2a935'] pred=['0x140a2a735', '0x140a2a901']
// BB 0x140a2a935-0x140a2a949 size=20 type=0 succ=['0x140a2a949'] pred=['0x140a2a90d']
// BB 0x140a2a949-0x140a2a952 size=9 type=0 succ=['0x140a2a952', '0x140a2a98c'] pred=['0x140a2a935']
// BB 0x140a2a952-0x140a2a987 size=53 type=0 succ=['0x140a2a987', '0x140a2ab4e'] pred=['0x140a2a949']
// BB 0x140a2a987-0x140a2a98c size=5 type=0 succ=['0x140a2ac38'] pred=['0x140a2a952']
// BB 0x140a2a98c-0x140a2a9a3 size=23 type=0 succ=['0x140a2a9a3', '0x140a2dc66'] pred=['0x140a2a949']
// BB 0x140a2a9a3-0x140a2a9b0 size=13 type=0 succ=['0x140a2a9b0', '0x140a2aaba'] pred=['0x140a2a98c']
// BB 0x140a2a9b0-0x140a2a9cb size=27 type=0 succ=['0x140a2a9cb', '0x140a2e561'] pred=['0x140a2a9a3']
// BB 0x140a2a9cb-0x140a2a9e8 size=29 type=0 succ=['0x140a2aabf'] pred=['0x140a2a9b0']
// BB 0x140a2a9e8-0x140a2aa0b size=35 type=0 succ=['0x140a2b947'] pred=['0x140a29770']
// BB 0x140a2aa0b-0x140a2aa22 size=23 type=0 succ=['0x140a2aa22', '0x140a2aa3f'] pred=['0x140a29127']
// BB 0x140a2aa22-0x140a2aa3a size=24 type=0 succ=['0x140a29407', '0x140a2aa3a'] pred=['0x140a29139', '0x140a2aa0b']
// BB 0x140a2aa3a-0x140a2aa3f size=5 type=0 succ=['0x140a296ee'] pred=['0x140a2aa22']
// BB 0x140a2aa3f-0x140a2aa4d size=14 type=0 succ=['0x140a2aa4d'] pred=['0x140a29143', '0x140a2aa0b']
// BB 0x140a2aa4d-0x140a2aa6b size=30 type=0 succ=['0x140a2aa6b', '0x140a2ae5d'] pred=['0x140a2aa3f']
// BB 0x140a2aa6b-0x140a2aa7e size=19 type=0 succ=['0x140a2aa7e', '0x140a2beb7'] pred=['0x140a2aa4d']
// BB 0x140a2aa7e-0x140a2aa87 size=9 type=0 succ=['0x140a2aa87', '0x140a2ae64'] pred=['0x140a2aa6b']
// BB 0x140a2aa87-0x140a2aaae size=39 type=0 succ=['0x140a2cbf0'] pred=['0x140a2aa7e']
// BB 0x140a2aaae-0x140a2aaba size=12 type=0 succ=['0x140a2b932'] pred=['0x140a2a759']
// BB 0x140a2aaba-0x140a2aabf size=5 type=0 succ=['0x140a2aabf'] pred=['0x140a2a9a3']
// BB 0x140a2aabf-0x140a2aaeb size=44 type=0 succ=['0x140a2aaeb', '0x140a2ab18'] pred=['0x140a2a9cb', '0x140a2aaba']
// BB 0x140a2aaeb-0x140a2aaf0 size=5 type=0 succ=['0x140a2aaf0', '0x140a2ab22'] pred=['0x140a2aabf']
// BB 0x140a2aaf0-0x140a2ab00 size=16 type=0 succ=['0x140a2ab00', '0x140a2ab22'] pred=['0x140a2aaeb']
// BB 0x140a2ab00-0x140a2ab18 size=24 type=0 succ=['0x140a2ab22'] pred=['0x140a2aaf0']
// BB 0x140a2ab18-0x140a2ab1c size=4 type=0 succ=['0x140a2ab1c'] pred=['0x140a2aabf']
// BB 0x140a2ab1c-0x140a2ab22 size=6 type=0 succ=['0x140a2ab22'] pred=['0x140a2ab18']
// BB 0x140a2ab22-0x140a2ab4e size=44 type=0 succ=['0x140a2ab4e', '0x140a2ac38'] pred=['0x140a2aaeb', '0x140a2aaf0', '0x140a2ab00', '0x140a2ab1c']
// BB 0x140a2ab4e-0x140a2ab95 size=71 type=0 succ=['0x140a2ab95'] pred=['0x140a2a952', '0x140a2ab22']
// BB 0x140a2ab95-0x140a2abb2 size=29 type=0 succ=['0x140a2abb2', '0x140a2ac17'] pred=['0x140a2ab4e', '0x140a2ac28']
// BB 0x140a2abb2-0x140a2abb9 size=7 type=0 succ=['0x140a2abb9'] pred=['0x140a2ab95']
// BB 0x140a2abb9-0x140a2abdc size=35 type=0 succ=['0x140a2abdc', '0x140a2abff'] pred=['0x140a2abb2', '0x140a2abff']
// BB 0x140a2abdc-0x140a2abff size=35 type=0 succ=['0x140a2abff', '0x140a2ac9a'] pred=['0x140a2abb9']
// BB 0x140a2abff-0x140a2ac17 size=24 type=0 succ=['0x140a2abb9', '0x140a2ac17'] pred=['0x140a2abb9', '0x140a2abdc']
// BB 0x140a2ac17-0x140a2ac28 size=17 type=0 succ=['0x140a2ac28', '0x140a2ac38'] pred=['0x140a2ab95', '0x140a2abff']
// BB 0x140a2ac28-0x140a2ac38 size=16 type=0 succ=['0x140a2ab95'] pred=['0x140a2ac17']
// BB 0x140a2ac38-0x140a2ac45 size=13 type=0 succ=['0x140a2ac45', '0x140a2ac72'] pred=['0x140a2a987', '0x140a2ab22', '0x140a2ac17']
// BB 0x140a2ac45-0x140a2ac72 size=45 type=0 succ=['0x140a2ac72', '0x140a2ac9a'] pred=['0x140a2ac38']
// BB 0x140a2ac72-0x140a2ac9a size=40 type=0 succ=['0x140a2aebe'] pred=['0x140a2ac38', '0x140a2ac45']
// BB 0x140a2ac9a-0x140a2acb0 size=22 type=0 succ=['0x140a2acb0', '0x140a2ad93'] pred=['0x140a2abdc', '0x140a2ac45']
// BB 0x140a2acb0-0x140a2acbc size=12 type=0 succ=['0x140a2acbc', '0x140a2b3c8'] pred=['0x140a2ac9a']
// BB 0x140a2acbc-0x140a2accc size=16 type=0 succ=['0x140a2accc', '0x140a2ae77'] pred=['0x140a2acb0']
// BB 0x140a2accc-0x140a2acd3 size=7 type=0 succ=['0x140a2acd3'] pred=['0x140a2acbc']
// BB 0x140a2acd3-0x140a2ad01 size=46 type=0 succ=['0x140a2ad01'] pred=['0x140a2accc', '0x140a2ad86']
// BB 0x140a2ad01-0x140a2ad06 size=5 type=0 succ=['0x140a2ad06', '0x140a2ad67'] pred=['0x140a2acd3', '0x140a2ad06']
// BB 0x140a2ad06-0x140a2ad53 size=77 type=0 succ=['0x140a2ad01', '0x140a2ad53'] pred=['0x140a2ad01']
// BB 0x140a2ad53-0x140a2ad65 size=18 type=0 succ=['0x140a2ad65', '0x140a2ae99'] pred=['0x140a2ad06']
// BB 0x140a2ad65-0x140a2ad67 size=2 type=0 succ=['0x140a2ad75'] pred=['0x140a2ad53']
// BB 0x140a2ad67-0x140a2ad75 size=14 type=0 succ=['0x140a2ad75'] pred=['0x140a2ad01']
// BB 0x140a2ad75-0x140a2ad86 size=17 type=0 succ=['0x140a2ad86', '0x140a2ae77'] pred=['0x140a2ad65', '0x140a2ad67']
// BB 0x140a2ad86-0x140a2ad93 size=13 type=0 succ=['0x140a2acd3'] pred=['0x140a2ad75']
// BB 0x140a2ad93-0x140a2ade9 size=86 type=0 succ=['0x140a2ade9', '0x140a2e54c'] pred=['0x140a2ac9a']
// BB 0x140a2ade9-0x140a2ae19 size=48 type=0 succ=['0x140a2ae19', '0x140a2dcca'] pred=['0x140a2ad93']
// BB 0x140a2ae19-0x140a2ae1f size=6 type=0 succ=['0x140a2ae1f', '0x140a2c0bb'] pred=['0x140a2ade9']
// BB 0x140a2ae1f-0x140a2ae40 size=33 type=0 succ=['0x140a2ae40', '0x140a2dccd'] pred=['0x140a2ae19']
// BB 0x140a2ae40-0x140a2ae5d size=29 type=0 succ=['0x140a2c0c3'] pred=['0x140a2ae1f']
// BB 0x140a2ae5d-0x140a2ae64 size=7 type=0 succ=['0x140a2ae64'] pred=['0x140a2aa4d']
// BB 0x140a2ae64-0x140a2ae77 size=19 type=0 succ=['0x140a2cd05'] pred=['0x140a2aa7e', '0x140a2ae5d']
// BB 0x140a2ae77-0x140a2ae99 size=34 type=0 succ=['0x140a2ae99', '0x140a2b3c8'] pred=['0x140a2acbc', '0x140a2ad75']
// BB 0x140a2ae99-0x140a2aebe size=37 type=0 succ=['0x140a2aebe'] pred=['0x140a2ad53', '0x140a2ae77']
// BB 0x140a2aebe-0x140a2aec4 size=6 type=0 succ=['0x140a2aec4'] pred=['0x140a2ac72', '0x140a2ae99']
// BB 0x140a2aec4-0x140a2aef7 size=51 type=0 succ=['0x140a2aef7', '0x140a2e2cc'] pred=['0x140a2aebe', '0x140a2bfb5', '0x140a2c124', '0x140a2c159']
// BB 0x140a2aef7-0x140a2af3e size=71 type=0 succ=['0x140a2af3e', '0x140a2e2e1'] pred=['0x140a2aec4']
// BB 0x140a2af3e-0x140a2af72 size=52 type=0 succ=['0x140a2af72'] pred=['0x140a2aef7']
// BB 0x140a2af72-0x140a2af9d size=43 type=0 succ=['0x140a2af9d', '0x140a2afaa'] pred=['0x140a2af3e']
// BB 0x140a2af9d-0x140a2afaa size=13 type=0 succ=['0x140a2afaa'] pred=['0x140a2af72']
// BB 0x140a2afaa-0x140a2afc7 size=29 type=0 succ=['0x140a2afc7', '0x140a2e2b7'] pred=['0x140a2af72', '0x140a2af9d']
// BB 0x140a2afc7-0x140a2aff9 size=50 type=0 succ=['0x140a2aff9', '0x140a2b029'] pred=['0x140a2afaa']
// BB 0x140a2aff9-0x140a2b014 size=27 type=0 succ=['0x140a2b014', '0x140a2e34a'] pred=['0x140a2afc7']
// BB 0x140a2b014-0x140a2b029 size=21 type=0 succ=['0x140a2b029'] pred=['0x140a2aff9']
// BB 0x140a2b029-0x140a2b04c size=35 type=0 succ=['0x140a2b04c'] pred=['0x140a2afc7', '0x140a2b014']
// BB 0x140a2b04c-0x140a2b077 size=43 type=0 succ=['0x140a2b077', '0x140a2b084'] pred=['0x140a2b029']
// BB 0x140a2b077-0x140a2b084 size=13 type=0 succ=['0x140a2b084'] pred=['0x140a2b04c']
// BB 0x140a2b084-0x140a2b0a1 size=29 type=0 succ=['0x140a2b0a1', '0x140a2e2a2'] pred=['0x140a2b04c', '0x140a2b077']
// BB 0x140a2b0a1-0x140a2b0d9 size=56 type=0 succ=['0x140a2b0d9', '0x140a2b109'] pred=['0x140a2b084']
// BB 0x140a2b0d9-0x140a2b0f4 size=27 type=0 succ=['0x140a2b0f4', '0x140a2e364'] pred=['0x140a2b0a1']
// BB 0x140a2b0f4-0x140a2b109 size=21 type=0 succ=['0x140a2b109'] pred=['0x140a2b0d9']
// BB 0x140a2b109-0x140a2b12c size=35 type=0 succ=['0x140a2b12c'] pred=['0x140a2b0a1', '0x140a2b0f4']
// BB 0x140a2b12c-0x140a2b157 size=43 type=0 succ=['0x140a2b157', '0x140a2b164'] pred=['0x140a2b109']
// BB 0x140a2b157-0x140a2b164 size=13 type=0 succ=['0x140a2b164'] pred=['0x140a2b12c']
// BB 0x140a2b164-0x140a2b181 size=29 type=0 succ=['0x140a2b181', '0x140a2e2f6'] pred=['0x140a2b12c', '0x140a2b157']
// BB 0x140a2b181-0x140a2b1af size=46 type=0 succ=['0x140a2b1af'] pred=['0x140a2b164']
// BB 0x140a2b1af-0x140a2b1d0 size=33 type=0 succ=['0x140a2b1d0', '0x140a2deba'] pred=['0x140a2b181']
// BB 0x140a2b1d0-0x140a2b222 size=82 type=0 succ=['0x140a2b222', '0x140a2b22f'] pred=['0x140a2b1af']
// BB 0x140a2b222-0x140a2b22f size=13 type=0 succ=['0x140a2b22f'] pred=['0x140a2b1d0']
// BB 0x140a2b22f-0x140a2b260 size=49 type=0 succ=['0x140a2b260', '0x140a2b286'] pred=['0x140a2b1d0', '0x140a2b222']
// BB 0x140a2b260-0x140a2b286 size=38 type=0 succ=['0x140a2b32d'] pred=['0x140a2b22f']
// BB 0x140a2b286-0x140a2b292 size=12 type=0 succ=['0x140a2b292', '0x140a2b2fc'] pred=['0x140a2b22f']
// BB 0x140a2b292-0x140a2b2aa size=24 type=0 succ=['0x140a2b2aa', '0x140a2b2fc'] pred=['0x140a2b286']
// BB 0x140a2b2aa-0x140a2b2b1 size=7 type=0 succ=['0x140a2b2b1'] pred=['0x140a2b292']
// BB 0x140a2b2b1-0x140a2b2cb size=26 type=0 succ=['0x140a2b2cb', '0x140a2b2fc'] pred=['0x140a2b2aa']
// BB 0x140a2b2cb-0x140a2b2d0 size=5 type=0 succ=['0x140a2b2d0', '0x140a2b2fc'] pred=['0x140a2b2b1']
// BB 0x140a2b2d0-0x140a2b2d7 size=7 type=0 succ=['0x140a2b2d7', '0x140a2b2fc'] pred=['0x140a2b2cb']
// BB 0x140a2b2d7-0x140a2b2fc size=37 type=0 succ=['0x140a2b2fc', '0x140a2c170'] pred=['0x140a2b2d0']
// BB 0x140a2b2fc-0x140a2b32d size=49 type=0 succ=['0x140a2b32d', '0x140a2b51a'] pred=['0x140a2b286', '0x140a2b292', '0x140a2b2b1', '0x140a2b2cb', '0x140a2b2d0', '0x140a2b2d7', '0x140a2c177', '0x140a2c195', '0x140a2c19e']
// BB 0x140a2b32d-0x140a2b33b size=14 type=0 succ=['0x140a2b33b'] pred=['0x140a2b260', '0x140a2b2fc']
// BB 0x140a2b33b-0x140a2b35c size=33 type=0 succ=['0x140a2b35c'] pred=['0x140a2b32d']
// BB 0x140a2b35c-0x140a2b3c3 size=103 type=0 succ=['0x140a2b3c3', '0x140a2b53c'] pred=['0x140a2b33b']
// BB 0x140a2b3c3-0x140a2b3c8 size=5 type=0 succ=['0x140a2b549'] pred=['0x140a2b35c']
// BB 0x140a2b3c8-0x140a2b41b size=83 type=0 succ=['0x140a2b41b', '0x140a2e4f8'] pred=['0x140a2acb0', '0x140a2ae77']
// BB 0x140a2b41b-0x140a2b491 size=118 type=0 succ=['0x140a2b491'] pred=['0x140a2b3c8']
// BB 0x140a2b491-0x140a2b4a5 size=20 type=0 succ=['0x140a2b4a5'] pred=['0x140a2b41b']
// BB 0x140a2b4a5-0x140a2b4ad size=8 type=0 succ=['0x140a2b4ad', '0x140a2df98'] pred=['0x140a2b491']
// BB 0x140a2b4ad-0x140a2b4d9 size=44 type=0 succ=['0x140a2b4d9', '0x140a2dc95'] pred=['0x140a2b4a5']
// BB 0x140a2b4d9-0x140a2b4df size=6 type=0 succ=['0x140a2b4df', '0x140a2bf05'] pred=['0x140a2b4ad']
// BB 0x140a2b4df-0x140a2b500 size=33 type=0 succ=['0x140a2b500', '0x140a2dc98'] pred=['0x140a2b4d9']
// BB 0x140a2b500-0x140a2b51a size=26 type=0 succ=['0x140a2bf0a'] pred=['0x140a2b4df']
// BB 0x140a2b51a-0x140a2b53c size=34 type=0 succ=['0x140a2b53c'] pred=['0x140a2b2fc']
// BB 0x140a2b53c-0x140a2b549 size=13 type=0 succ=['0x140a2b549'] pred=['0x140a2b35c', '0x140a2b51a']
// BB 0x140a2b549-0x140a2b5af size=102 type=0 succ=['0x140a2b5af', '0x140a2e30b'] pred=['0x140a2b3c3', '0x140a2b53c']
// BB 0x140a2b5af-0x140a2b5f6 size=71 type=0 succ=['0x140a2b5f6', '0x140a2e335'] pred=['0x140a2b549']
// BB 0x140a2b5f6-0x140a2b62f size=57 type=0 succ=['0x140a2b62f'] pred=['0x140a2b5af']
// BB 0x140a2b62f-0x140a2b65a size=43 type=0 succ=['0x140a2b65a', '0x140a2b667'] pred=['0x140a2b5f6']
// BB 0x140a2b65a-0x140a2b667 size=13 type=0 succ=['0x140a2b667'] pred=['0x140a2b62f']
// BB 0x140a2b667-0x140a2b684 size=29 type=0 succ=['0x140a2b684', '0x140a2e320'] pred=['0x140a2b62f', '0x140a2b65a']
// BB 0x140a2b684-0x140a2b6b5 size=49 type=0 succ=['0x140a2b6b5'] pred=['0x140a2b667']
// BB 0x140a2b6b5-0x140a2b6d6 size=33 type=0 succ=['0x140a2b6d6', '0x140a2def9'] pred=['0x140a2b684']
// BB 0x140a2b6d6-0x140a2b728 size=82 type=0 succ=['0x140a2b728', '0x140a2b735'] pred=['0x140a2b6b5']
// BB 0x140a2b728-0x140a2b735 size=13 type=0 succ=['0x140a2b735'] pred=['0x140a2b6d6']
// BB 0x140a2b735-0x140a2b76a size=53 type=0 succ=['0x140a2b76a', '0x140a2b777'] pred=['0x140a2b6d6', '0x140a2b728']
// BB 0x140a2b76a-0x140a2b777 size=13 type=0 succ=['0x140a2b777'] pred=['0x140a2b735']
// BB 0x140a2b777-0x140a2b7e0 size=105 type=0 succ=['0x140a2b7e0'] pred=['0x140a2b735', '0x140a2b76a']
// BB 0x140a2b7e0-0x140a2b7f0 size=16 type=0 succ=['0x140a2b7f0', '0x140a2b809'] pred=['0x140a2b777', '0x140a2b7fe']
// BB 0x140a2b7f0-0x140a2b7fe size=14 type=0 succ=['0x140a2b7fe'] pred=['0x140a2b7e0']
// BB 0x140a2b7fe-0x140a2b809 size=11 type=0 succ=['0x140a2b7e0'] pred=['0x140a2b7f0']
// BB 0x140a2b809-0x140a2b815 size=12 type=0 succ=['0x140a2b815', '0x140a2b82c'] pred=['0x140a2b7e0']
// BB 0x140a2b815-0x140a2b82c size=23 type=0 succ=['0x140a2b82c'] pred=['0x140a2b809']
// BB 0x140a2b82c-0x140a2b845 size=25 type=0 succ=['0x140a2b845', '0x140a2b857'] pred=['0x140a2b809', '0x140a2b815', '0x140a2c23f', '0x140a2c8c8']
// BB 0x140a2b845-0x140a2b857 size=18 type=0 succ=['0x140a2b857'] pred=['0x140a2b82c']
// BB 0x140a2b857-0x140a2b867 size=16 type=0 succ=['0x140a29080', '0x140a2b867'] pred=['0x140a2b82c', '0x140a2b845']
// BB 0x140a2b867-0x140a2b87e size=23 type=0 succ=['0x140a29080'] pred=['0x140a2b857']
// BB 0x140a2b87e-0x140a2b883 size=5 type=0 succ=['0x140a2b883'] pred=['0x140a2a8ba']
// BB 0x140a2b883-0x140a2b8a6 size=35 type=0 succ=['0x140a2b8a6'] pred=['0x140a2a8e8', '0x140a2b87e']
// BB 0x140a2b8a6-0x140a2b8d1 size=43 type=0 succ=['0x140a2b8d1', '0x140a2b8de'] pred=['0x140a2b883']
// BB 0x140a2b8d1-0x140a2b8de size=13 type=0 succ=['0x140a2b8de'] pred=['0x140a2b8a6']
// BB 0x140a2b8de-0x140a2b932 size=84 type=0 succ=['0x140a2b932'] pred=['0x140a2b8a6', '0x140a2b8d1']
// BB 0x140a2b932-0x140a2b947 size=21 type=0 succ=['0x140a2b947'] pred=['0x140a2aaae', '0x140a2b8de']
// BB 0x140a2b947-0x140a2b95b size=20 type=0 succ=['0x140a2b95b', '0x140a2bad5'] pred=['0x140a29fce', '0x140a2a9e8', '0x140a2b932']
// BB 0x140a2b95b-0x140a2b97f size=36 type=0 succ=['0x140a2b97f', '0x140a2ba82'] pred=['0x140a2b947']
// BB 0x140a2b97f-0x140a2b98d size=14 type=0 succ=['0x140a2b98d', '0x140a2ba82'] pred=['0x140a2b95b']
// BB 0x140a2b98d-0x140a2ba1b size=142 type=0 succ=['0x140a2ba1b', '0x140a2c8da'] pred=['0x140a2b97f']
// BB 0x140a2ba1b-0x140a2ba20 size=5 type=0 succ=['0x140a2ba20', '0x140a2ba39'] pred=['0x140a2b98d']
// BB 0x140a2ba20-0x140a2ba39 size=25 type=0 succ=['0x140a2ba39'] pred=['0x140a2ba1b', '0x140a2c8da']
// BB 0x140a2ba39-0x140a2ba48 size=15 type=0 succ=['0x140a2ba48', '0x140a2ba5d'] pred=['0x140a2ba1b', '0x140a2ba20']
// BB 0x140a2ba48-0x140a2ba5d size=21 type=0 succ=['0x140a2ba5d'] pred=['0x140a2ba39']
// BB 0x140a2ba5d-0x140a2ba82 size=37 type=0 succ=['0x140a2ba82'] pred=['0x140a2ba39', '0x140a2ba48']
// BB 0x140a2ba82-0x140a2ba92 size=16 type=0 succ=['0x140a2ba92', '0x140a2bd1a'] pred=['0x140a2b95b', '0x140a2b97f', '0x140a2ba5d']
// BB 0x140a2ba92-0x140a2bad5 size=67 type=0 succ=['0x140a2baf1'] pred=['0x140a2ba82']
// BB 0x140a2bad5-0x140a2baf1 size=28 type=0 succ=['0x140a2baf1', '0x140a2bd1a'] pred=['0x140a2b947']
// BB 0x140a2baf1-0x140a2bb24 size=51 type=0 succ=['0x140a2bb24', '0x140a2e252'] pred=['0x140a2ba92', '0x140a2bad5']
// BB 0x140a2bb24-0x140a2bb69 size=69 type=0 succ=['0x140a2bb69', '0x140a2e23f'] pred=['0x140a2baf1']
// BB 0x140a2bb69-0x140a2bb96 size=45 type=0 succ=['0x140a2bb96'] pred=['0x140a2bb24']
// BB 0x140a2bb96-0x140a2bbc1 size=43 type=0 succ=['0x140a2bbc1', '0x140a2bbce'] pred=['0x140a2bb69']
// BB 0x140a2bbc1-0x140a2bbce size=13 type=0 succ=['0x140a2bbce'] pred=['0x140a2bb96']
// BB 0x140a2bbce-0x140a2bbeb size=29 type=0 succ=['0x140a2bbeb', '0x140a2e267'] pred=['0x140a2bb96', '0x140a2bbc1']
// BB 0x140a2bbeb-0x140a2bc1c size=49 type=0 succ=['0x140a2bc1c'] pred=['0x140a2bbce']
// BB 0x140a2bc1c-0x140a2bc3d size=33 type=0 succ=['0x140a2bc3d', '0x140a2de7b'] pred=['0x140a2bbeb']
// BB 0x140a2bc3d-0x140a2bc8f size=82 type=0 succ=['0x140a2bc8f', '0x140a2bc9c'] pred=['0x140a2bc1c']
// BB 0x140a2bc8f-0x140a2bc9c size=13 type=0 succ=['0x140a2bc9c'] pred=['0x140a2bc3d']
// BB 0x140a2bc9c-0x140a2bcd1 size=53 type=0 succ=['0x140a2bcd1', '0x140a2bcde'] pred=['0x140a2bc3d', '0x140a2bc8f']
// BB 0x140a2bcd1-0x140a2bcde size=13 type=0 succ=['0x140a2bcde'] pred=['0x140a2bc9c']
// BB 0x140a2bcde-0x140a2bd1a size=60 type=0 succ=['0x140a2bd25'] pred=['0x140a2bc9c', '0x140a2bcd1']
// BB 0x140a2bd1a-0x140a2bd25 size=11 type=0 succ=['0x140a2bd25'] pred=['0x140a2ba82', '0x140a2bad5']
// BB 0x140a2bd25-0x140a2bd40 size=27 type=0 succ=['0x140a2bd40'] pred=['0x140a2bcde', '0x140a2bd1a']
// BB 0x140a2bd40-0x140a2bd50 size=16 type=0 succ=['0x140a2bd50', '0x140a2bd69'] pred=['0x140a2bd25', '0x140a2bd5e']
// BB 0x140a2bd50-0x140a2bd5e size=14 type=0 succ=['0x140a2bd5e'] pred=['0x140a2bd40']
// BB 0x140a2bd5e-0x140a2bd69 size=11 type=0 succ=['0x140a2bd40'] pred=['0x140a2bd50']
// BB 0x140a2bd69-0x140a2bd79 size=16 type=0 succ=['0x140a29080', '0x140a2bd79'] pred=['0x140a2bd40']
// BB 0x140a2bd79-0x140a2bd94 size=27 type=0 succ=['0x140a29080'] pred=['0x140a2bd69']
// BB 0x140a2bd94-0x140a2bd9b size=7 type=0 succ=['0x140a2bd9b'] pred=['0x140a2a41a']
// BB 0x140a2bd9b-0x140a2bdb9 size=30 type=0 succ=['0x140a2a42a', '0x140a2bdb9'] pred=['0x140a2bd94']
// BB 0x140a2bdb9-0x140a2bdc2 size=9 type=0 succ=['0x140a2a42a', '0x140a2bdc2'] pred=['0x140a2bd9b']
// BB 0x140a2bdc2-0x140a2bdfb size=57 type=0 succ=['0x140a2a42a', '0x140a2bdfb'] pred=['0x140a2bdb9']
// BB 0x140a2bdfb-0x140a2be0b size=16 type=0 succ=['0x140a2a68a', '0x140a2be0b'] pred=['0x140a2bdc2']
// BB 0x140a2be0b-0x140a2be40 size=53 type=0 succ=['0x140a2a68a', '0x140a2be40'] pred=['0x140a2bdfb']
// BB 0x140a2be40-0x140a2be49 size=9 type=0 succ=['0x140a2a68a', '0x140a2be49'] pred=['0x140a2be0b']
// BB 0x140a2be49-0x140a2be73 size=42 type=0 succ=['0x140a2be73', '0x140a2be85'] pred=['0x140a2be40']
// BB 0x140a2be73-0x140a2be85 size=18 type=0 succ=['0x140a2be85'] pred=['0x140a2be49']
// BB 0x140a2be85-0x140a2beb7 size=50 type=0 succ=['0x140a2a697'] pred=['0x140a2be49', '0x140a2be73']
// BB 0x140a2beb7-0x140a2bee8 size=49 type=0 succ=['0x140a2bee8', '0x140a2cbc3'] pred=['0x140a2aa6b']
// BB 0x140a2bee8-0x140a2bf05 size=29 type=0 succ=['0x140a2c978'] pred=['0x140a2beb7']
// BB 0x140a2bf05-0x140a2bf0a size=5 type=0 succ=['0x140a2bf0a'] pred=['0x140a2b4d9']
// BB 0x140a2bf0a-0x140a2bf2d size=35 type=0 succ=['0x140a2bf2d'] pred=['0x140a2b500', '0x140a2bf05']
// BB 0x140a2bf2d-0x140a2bf5e size=49 type=0 succ=['0x140a2bf5e', '0x140a2bf6b'] pred=['0x140a2bf0a']
// BB 0x140a2bf5e-0x140a2bf6b size=13 type=0 succ=['0x140a2bf6b'] pred=['0x140a2bf2d']
// BB 0x140a2bf6b-0x140a2bf77 size=12 type=0 succ=['0x140a2bf77', '0x140a2bf89'] pred=['0x140a2bf2d', '0x140a2bf5e']
// BB 0x140a2bf77-0x140a2bf89 size=18 type=0 succ=['0x140a2bf89'] pred=['0x140a2bf6b']
// BB 0x140a2bf89-0x140a2bfb5 size=44 type=0 succ=['0x140a2bfb5'] pred=['0x140a2bf6b', '0x140a2bf77']
// BB 0x140a2bfb5-0x140a2bfc7 size=18 type=0 succ=['0x140a2aec4'] pred=['0x140a2bf89']
// BB 0x140a2bfc7-0x140a2bfd4 size=13 type=0 succ=['0x140a2bfd4'] pred=['0x140a2939f']
// BB 0x140a2bfd4-0x140a2bfe0 size=12 type=0 succ=['0x140a2bfe0', '0x140a2bff2'] pred=['0x140a293c3', '0x140a2bfc7']
// BB 0x140a2bfe0-0x140a2bff2 size=18 type=0 succ=['0x140a2bff2'] pred=['0x140a2bfd4']
// BB 0x140a2bff2-0x140a2bffb size=9 type=0 succ=['0x140a29080', '0x140a2bffb'] pred=['0x140a2bfd4', '0x140a2bfe0']
// BB 0x140a2bffb-0x140a2c020 size=37 type=0 succ=['0x140a2c020'] pred=['0x140a2bff2']
// BB 0x140a2c020-0x140a2c043 size=35 type=0 succ=['0x140a2c043', '0x140a2c29a'] pred=['0x140a2bffb']
// BB 0x140a2c043-0x140a2c04c size=9 type=0 succ=['0x140a2c04c', '0x140a2c29a'] pred=['0x140a2c020']
// BB 0x140a2c04c-0x140a2c05e size=18 type=0 succ=['0x140a2c05e', '0x140a2c271'] pred=['0x140a2c043']
// BB 0x140a2c05e-0x140a2c068 size=10 type=0 succ=['0x140a2c068', '0x140a2c29a'] pred=['0x140a2c04c']
// BB 0x140a2c068-0x140a2c07b size=19 type=0 succ=['0x140a2c07b', '0x140a2c29a'] pred=['0x140a2c05e']
// BB 0x140a2c07b-0x140a2c0a5 size=42 type=0 succ=['0x140a2c0a5', '0x140a2c577'] pred=['0x140a2c068']
// BB 0x140a2c0a5-0x140a2c0ae size=9 type=0 succ=['0x140a2c0ae', '0x140a2c577'] pred=['0x140a2c07b']
// BB 0x140a2c0ae-0x140a2c0bb size=13 type=0 succ=['0x140a2c579'] pred=['0x140a2c0a5']
// BB 0x140a2c0bb-0x140a2c0c3 size=8 type=0 succ=['0x140a2c0c3'] pred=['0x140a2ae19']
// BB 0x140a2c0c3-0x140a2c0e6 size=35 type=0 succ=['0x140a2c0e6'] pred=['0x140a2ae40', '0x140a2c0bb']
// BB 0x140a2c0e6-0x140a2c117 size=49 type=0 succ=['0x140a2c117', '0x140a2c124'] pred=['0x140a2c0c3']
// BB 0x140a2c117-0x140a2c124 size=13 type=0 succ=['0x140a2c124'] pred=['0x140a2c0e6']
// BB 0x140a2c124-0x140a2c159 size=53 type=0 succ=['0x140a2aec4', '0x140a2c159'] pred=['0x140a2c0e6', '0x140a2c117']
// BB 0x140a2c159-0x140a2c170 size=23 type=0 succ=['0x140a2aec4'] pred=['0x140a2c124']
// BB 0x140a2c170-0x140a2c177 size=7 type=0 succ=['0x140a2c177'] pred=['0x140a2b2d7']
// BB 0x140a2c177-0x140a2c195 size=30 type=0 succ=['0x140a2b2fc', '0x140a2c195'] pred=['0x140a2c170']
// BB 0x140a2c195-0x140a2c19e size=9 type=0 succ=['0x140a2b2fc', '0x140a2c19e'] pred=['0x140a2c177']
// BB 0x140a2c19e-0x140a2c1d7 size=57 type=0 succ=['0x140a2b2fc', '0x140a2c1d7'] pred=['0x140a2c195']
// BB 0x140a2c1d7-0x140a2c1e7 size=16 type=0 succ=['0x140a2c1e7', '0x140a2c8c8'] pred=['0x140a2c19e']
// BB 0x140a2c1e7-0x140a2c21f size=56 type=0 succ=['0x140a2c21f', '0x140a2c8c8'] pred=['0x140a2c1d7']
// BB 0x140a2c21f-0x140a2c228 size=9 type=0 succ=['0x140a2c228', '0x140a2c8c8'] pred=['0x140a2c1e7']
// BB 0x140a2c228-0x140a2c232 size=10 type=0 succ=['0x140a2c232', '0x140a2c23f'] pred=['0x140a2c21f']
// BB 0x140a2c232-0x140a2c23f size=13 type=0 succ=['0x140a2c23f'] pred=['0x140a2c228']
// BB 0x140a2c23f-0x140a2c271 size=50 type=0 succ=['0x140a2b82c'] pred=['0x140a2c228', '0x140a2c232']
// BB 0x140a2c271-0x140a2c29a size=41 type=0 succ=['0x140a2c29a', '0x140a2c335'] pred=['0x140a2c04c']
// BB 0x140a2c29a-0x140a2c2a8 size=14 type=0 succ=['0x140a2c2a8'] pred=['0x140a2c020', '0x140a2c043', '0x140a2c05e', '0x140a2c068', '0x140a2c271', '0x140a2c523', '0x140a2c851']
// BB 0x140a2c2a8-0x140a2c2be size=22 type=0 succ=['0x140a29080', '0x140a2c2be'] pred=['0x140a2c29a']
// BB 0x140a2c2be-0x140a2c2f0 size=50 type=0 succ=['0x140a2c2f0', '0x140a2c2fd'] pred=['0x140a2c2a8']
// BB 0x140a2c2f0-0x140a2c2fd size=13 type=0 succ=['0x140a2c2fd'] pred=['0x140a2c2be']
// BB 0x140a2c2fd-0x140a2c335 size=56 type=0 succ=['0x140a29080'] pred=['0x140a2c2be', '0x140a2c2f0']
// BB 0x140a2c335-0x140a2c357 size=34 type=0 succ=['0x140a2c357', '0x140a2c8a8'] pred=['0x140a2c271']
// BB 0x140a2c357-0x140a2c360 size=9 type=0 succ=['0x140a2c360', '0x140a2c8a8'] pred=['0x140a2c335']
// BB 0x140a2c360-0x140a2c37f size=31 type=0 succ=['0x140a2c37f', '0x140a2c8a8'] pred=['0x140a2c357']
// BB 0x140a2c37f-0x140a2c3b2 size=51 type=0 succ=['0x140a2c3b2', '0x140a2e62f'] pred=['0x140a2c360']
// BB 0x140a2c3b2-0x140a2c3dc size=42 type=0 succ=['0x140a2c3dc'] pred=['0x140a2c37f']
// BB 0x140a2c3dc-0x140a2c3fd size=33 type=0 succ=['0x140a2c3fd', '0x140a2e43b'] pred=['0x140a2c3b2']
// BB 0x140a2c3fd-0x140a2c44f size=82 type=0 succ=['0x140a2c44f', '0x140a2c45c'] pred=['0x140a2c3dc']
// BB 0x140a2c44f-0x140a2c45c size=13 type=0 succ=['0x140a2c45c'] pred=['0x140a2c3fd']
// BB 0x140a2c45c-0x140a2c479 size=29 type=0 succ=['0x140a2c479', '0x140a2e5db'] pred=['0x140a2c3fd', '0x140a2c44f']
// BB 0x140a2c479-0x140a2c4a3 size=42 type=0 succ=['0x140a2c4a3'] pred=['0x140a2c45c']
// BB 0x140a2c4a3-0x140a2c4c4 size=33 type=0 succ=['0x140a2c4c4', '0x140a2e4b9'] pred=['0x140a2c479']
// BB 0x140a2c4c4-0x140a2c516 size=82 type=0 succ=['0x140a2c516', '0x140a2c523'] pred=['0x140a2c4a3']
// BB 0x140a2c516-0x140a2c523 size=13 type=0 succ=['0x140a2c523'] pred=['0x140a2c4c4']
// BB 0x140a2c523-0x140a2c577 size=84 type=0 succ=['0x140a2c29a'] pred=['0x140a2c4c4', '0x140a2c516']
// BB 0x140a2c577-0x140a2c579 size=2 type=0 succ=['0x140a2c579'] pred=['0x140a2c07b', '0x140a2c0a5']
// BB 0x140a2c579-0x140a2c587 size=14 type=0 succ=['0x140a2c587'] pred=['0x140a2c0ae', '0x140a2c577']
// BB 0x140a2c587-0x140a2c5ac size=37 type=0 succ=['0x140a2c5ac', '0x140a2c8a8'] pred=['0x140a2c579']
// BB 0x140a2c5ac-0x140a2c5b5 size=9 type=0 succ=['0x140a2c5b5', '0x140a2c8a8'] pred=['0x140a2c587']
// BB 0x140a2c5b5-0x140a2c5d4 size=31 type=0 succ=['0x140a2c5d4', '0x140a2c8a8'] pred=['0x140a2c5ac']
// BB 0x140a2c5d4-0x140a2c607 size=51 type=0 succ=['0x140a2c607', '0x140a2e5f0'] pred=['0x140a2c5b5']
// BB 0x140a2c607-0x140a2c631 size=42 type=0 succ=['0x140a2c631'] pred=['0x140a2c5d4']
// BB 0x140a2c631-0x140a2c652 size=33 type=0 succ=['0x140a2c652', '0x140a2e47a'] pred=['0x140a2c607']
// BB 0x140a2c652-0x140a2c6a4 size=82 type=0 succ=['0x140a2c6a4', '0x140a2c6b1'] pred=['0x140a2c631']
// BB 0x140a2c6a4-0x140a2c6b1 size=13 type=0 succ=['0x140a2c6b1'] pred=['0x140a2c652']
// BB 0x140a2c6b1-0x140a2c6ce size=29 type=0 succ=['0x140a2c6ce', '0x140a2e605'] pred=['0x140a2c652', '0x140a2c6a4']
// BB 0x140a2c6ce-0x140a2c6ff size=49 type=0 succ=['0x140a2c6ff'] pred=['0x140a2c6b1']
// BB 0x140a2c6ff-0x140a2c720 size=33 type=0 succ=['0x140a2c720', '0x140a2e3fc'] pred=['0x140a2c6ce']
// BB 0x140a2c720-0x140a2c772 size=82 type=0 succ=['0x140a2c772', '0x140a2c77f'] pred=['0x140a2c6ff']
// BB 0x140a2c772-0x140a2c77f size=13 type=0 succ=['0x140a2c77f'] pred=['0x140a2c720']
// BB 0x140a2c77f-0x140a2c79c size=29 type=0 succ=['0x140a2c79c', '0x140a2e61a'] pred=['0x140a2c720', '0x140a2c772']
// BB 0x140a2c79c-0x140a2c7d1 size=53 type=0 succ=['0x140a2c7d1'] pred=['0x140a2c77f']
// BB 0x140a2c7d1-0x140a2c7f2 size=33 type=0 succ=['0x140a2c7f2', '0x140a2e3bd'] pred=['0x140a2c79c']
// BB 0x140a2c7f2-0x140a2c844 size=82 type=0 succ=['0x140a2c844', '0x140a2c851'] pred=['0x140a2c7d1']
// BB 0x140a2c844-0x140a2c851 size=13 type=0 succ=['0x140a2c851'] pred=['0x140a2c7f2']
// BB 0x140a2c851-0x140a2c8a8 size=87 type=0 succ=['0x140a2c29a'] pred=['0x140a2c7f2', '0x140a2c844']
// BB 0x140a2c8a8-0x140a2c8b6 size=14 type=0 succ=['0x140a2c8b6'] pred=['0x140a2c335', '0x140a2c357', '0x140a2c360', '0x140a2c587', '0x140a2c5ac', '0x140a2c5b5']
// BB 0x140a2c8b6-0x140a2c8c8 size=18 type=0 succ=['0x140a29080'] pred=['0x140a2c8a8']
// BB 0x140a2c8c8-0x140a2c8da size=18 type=0 succ=['0x140a2b82c'] pred=['0x140a2c1d7', '0x140a2c1e7', '0x140a2c21f']
// BB 0x140a2c8da-0x140a2c908 size=46 type=0 succ=['0x140a2ba20'] pred=['0x140a2b98d']
// BB 0x140a2c908-0x140a2c92a size=34 type=0 succ=['0x140a2c92a'] pred=['0x140a2cb04']
// BB 0x140a2c92a-0x140a2c931 size=7 type=0 succ=['0x140a2c931'] pred=['0x140a2c908']
// BB 0x140a2c931-0x140a2c952 size=33 type=0 succ=['0x140a2c952'] pred=['0x140a2c92a', '0x140a2cb13']
// BB 0x140a2c952-0x140a2c95c size=10 type=0 succ=['0x140a2c95c'] pred=['0x140a2c931', '0x140a2cb1c']
// BB 0x140a2c95c-0x140a2c96a size=14 type=0 succ=['0x140a2c96a'] pred=['0x140a2c952', '0x140a2cad7']
// BB 0x140a2c96a-0x140a2c978 size=14 type=0 succ=['0x140a2c978', '0x140a2cbc3'] pred=['0x140a2c95c', '0x140a2c978', '0x140a2c98e', '0x140a2c9a1', '0x140a2c9a7', '0x140a2c9f2', '0x140a2ca54', '0x140a2ca72']
// BB 0x140a2c978-0x140a2c98e size=22 type=0 succ=['0x140a2c96a', '0x140a2c98e'] pred=['0x140a2bee8', '0x140a2c96a']
// BB 0x140a2c98e-0x140a2c993 size=5 type=0 succ=['0x140a2c96a', '0x140a2c993'] pred=['0x140a2c978']
// BB 0x140a2c993-0x140a2c9a1 size=14 type=0 succ=['0x140a2c9a1', '0x140a2c9cc'] pred=['0x140a2c98e']
// BB 0x140a2c9a1-0x140a2c9a7 size=6 type=0 succ=['0x140a2c96a', '0x140a2c9a7'] pred=['0x140a2c993']
// BB 0x140a2c9a7-0x140a2c9c7 size=32 type=0 succ=['0x140a2c96a', '0x140a2c9c7'] pred=['0x140a2c9a1']
// BB 0x140a2c9c7-0x140a2c9cc size=5 type=0 succ=['0x140a2ca54'] pred=['0x140a2c9a7']
// BB 0x140a2c9cc-0x140a2c9f2 size=38 type=0 succ=['0x140a2c9f2', '0x140a2ca54'] pred=['0x140a2c993']
// BB 0x140a2c9f2-0x140a2ca1c size=42 type=0 succ=['0x140a2c96a', '0x140a2ca1c'] pred=['0x140a2c9cc']
// BB 0x140a2ca1c-0x140a2ca33 size=23 type=0 succ=['0x140a2ca33', '0x140a2cacb'] pred=['0x140a2c9f2']
// BB 0x140a2ca33-0x140a2ca3c size=9 type=0 succ=['0x140a2ca3c', '0x140a2cb4f'] pred=['0x140a2ca1c']
// BB 0x140a2ca3c-0x140a2ca54 size=24 type=0 succ=['0x140a2cace'] pred=['0x140a2ca33', '0x140a2cb4f']
// BB 0x140a2ca54-0x140a2ca72 size=30 type=0 succ=['0x140a2c96a', '0x140a2ca72'] pred=['0x140a2c9c7', '0x140a2c9cc']
// BB 0x140a2ca72-0x140a2ca7b size=9 type=0 succ=['0x140a2c96a', '0x140a2ca7b'] pred=['0x140a2ca54']
// BB 0x140a2ca7b-0x140a2caa4 size=41 type=0 succ=['0x140a2caa4', '0x140a2cb02'] pred=['0x140a2ca72']
// BB 0x140a2caa4-0x140a2caad size=9 type=0 succ=['0x140a2caad', '0x140a2cb87'] pred=['0x140a2ca7b']
// BB 0x140a2caad-0x140a2cacb size=30 type=0 succ=['0x140a2cb04'] pred=['0x140a2caa4', '0x140a2cb87']
// BB 0x140a2cacb-0x140a2cace size=3 type=0 succ=['0x140a2cace'] pred=['0x140a2ca1c']
// BB 0x140a2cace-0x140a2cad7 size=9 type=0 succ=['0x140a2cad7', '0x140a2cb21'] pred=['0x140a2ca3c', '0x140a2cacb']
// BB 0x140a2cad7-0x140a2cb02 size=43 type=0 succ=['0x140a2c95c'] pred=['0x140a2cace', '0x140a2cb21']
// BB 0x140a2cb02-0x140a2cb04 size=2 type=0 succ=['0x140a2cb04'] pred=['0x140a2ca7b']
// BB 0x140a2cb04-0x140a2cb13 size=15 type=0 succ=['0x140a2c908', '0x140a2cb13'] pred=['0x140a2caad', '0x140a2cb02']
// BB 0x140a2cb13-0x140a2cb1c size=9 type=0 succ=['0x140a2c931', '0x140a2cb1c'] pred=['0x140a2cb04']
// BB 0x140a2cb1c-0x140a2cb21 size=5 type=0 succ=['0x140a2c952'] pred=['0x140a2cb13']
// BB 0x140a2cb21-0x140a2cb4f size=46 type=0 succ=['0x140a2cad7'] pred=['0x140a2cace']
// BB 0x140a2cb4f-0x140a2cb87 size=56 type=0 succ=['0x140a2ca3c'] pred=['0x140a2ca33']
// BB 0x140a2cb87-0x140a2cbc3 size=60 type=0 succ=['0x140a2caad'] pred=['0x140a2caa4']
// BB 0x140a2cbc3-0x140a2cbf0 size=45 type=0 succ=['0x140a2cbf0'] pred=['0x140a2beb7', '0x140a2c96a']
// BB 0x140a2cbf0-0x140a2cc00 size=16 type=0 succ=['0x140a2cc00', '0x140a2ccc2'] pred=['0x140a2aa87', '0x140a2cbc3']
// BB 0x140a2cc00-0x140a2cc0e size=14 type=0 succ=['0x140a2cc0e', '0x140a2ccf7'] pred=['0x140a2cbf0']
// BB 0x140a2cc0e-0x140a2cc1e size=16 type=0 succ=['0x140a2cc1e', '0x140a2cd1f'] pred=['0x140a2cc00']
// BB 0x140a2cc1e-0x140a2cc72 size=84 type=0 succ=['0x140a2cc72'] pred=['0x140a2cc0e']
// BB 0x140a2cc72-0x140a2ccae size=60 type=0 succ=['0x140a2ccae', '0x140a2ccd7'] pred=['0x140a2cc1e']
// BB 0x140a2ccae-0x140a2ccc2 size=20 type=0 succ=['0x140a2ccd7'] pred=['0x140a2cc72']
// BB 0x140a2ccc2-0x140a2ccd7 size=21 type=0 succ=['0x140a2ccd7'] pred=['0x140a2cbf0']
// BB 0x140a2ccd7-0x140a2cce3 size=12 type=0 succ=['0x140a2cce3', '0x140a2cd05'] pred=['0x140a2cc72', '0x140a2ccae', '0x140a2ccc2']
// BB 0x140a2cce3-0x140a2ccf0 size=13 type=0 succ=['0x140a2ccf0'] pred=['0x140a2ccd7']
// BB 0x140a2ccf0-0x140a2ccf7 size=7 type=0 succ=['0x140a2cd05'] pred=['0x140a2cce3', '0x140a2cd39']
// BB 0x140a2ccf7-0x140a2cd05 size=14 type=0 succ=['0x140a2cd05'] pred=['0x140a2cc00']
// BB 0x140a2cd05-0x140a2cd1f size=26 type=0 succ=['0x140a29080'] pred=['0x140a2ae64', '0x140a2ccd7', '0x140a2ccf0', '0x140a2ccf7', '0x140a2cd1f']
// BB 0x140a2cd1f-0x140a2cd39 size=26 type=0 succ=['0x140a2cd05', '0x140a2cd39'] pred=['0x140a2cc0e']
// BB 0x140a2cd39-0x140a2cd48 size=15 type=0 succ=['0x140a2ccf0'] pred=['0x140a2cd1f']
// BB 0x140a2cd48-0x140a2cd66 size=30 type=0 succ=['0x140a2a039'] pred=['0x140a2920d']
// BB 0x140a2cd66-0x140a2cd84 size=30 type=0 succ=['0x140a2a0da'] pred=['0x140a29291']
// BB 0x140a2cd84-0x140a2cda3 size=31 type=0 succ=['0x140a2a717'] pred=['0x140a2a07a']
// BB 0x140a2cda3-0x140a2cdb1 size=14 type=0 succ=['0x140a2cdb1', '0x140a2d016'] pred=['0x140a29080']
// BB 0x140a2cdb1-0x140a2cde4 size=51 type=0 succ=['0x140a2cde4', '0x140a2e11e'] pred=['0x140a2cda3']
// BB 0x140a2cde4-0x140a2ce2b size=71 type=0 succ=['0x140a2ce2b', '0x140a2e133'] pred=['0x140a2cdb1']
// BB 0x140a2ce2b-0x140a2ce64 size=57 type=0 succ=['0x140a2ce64'] pred=['0x140a2cde4']
// BB 0x140a2ce64-0x140a2ce8f size=43 type=0 succ=['0x140a2ce8f', '0x140a2ce9c'] pred=['0x140a2ce2b']
// BB 0x140a2ce8f-0x140a2ce9c size=13 type=0 succ=['0x140a2ce9c'] pred=['0x140a2ce64']
// BB 0x140a2ce9c-0x140a2ceb9 size=29 type=0 succ=['0x140a2ceb9', '0x140a2e148'] pred=['0x140a2ce64', '0x140a2ce8f']
// BB 0x140a2ceb9-0x140a2ceea size=49 type=0 succ=['0x140a2ceea'] pred=['0x140a2ce9c']
// BB 0x140a2ceea-0x140a2cf0b size=33 type=0 succ=['0x140a2cf0b', '0x140a2dd7f'] pred=['0x140a2ceb9']
// BB 0x140a2cf0b-0x140a2cf5d size=82 type=0 succ=['0x140a2cf5d', '0x140a2cf6a'] pred=['0x140a2ceea']
// BB 0x140a2cf5d-0x140a2cf6a size=13 type=0 succ=['0x140a2cf6a'] pred=['0x140a2cf0b']
// BB 0x140a2cf6a-0x140a2cf9f size=53 type=0 succ=['0x140a2cf9f', '0x140a2cfac'] pred=['0x140a2cf0b', '0x140a2cf5d']
// BB 0x140a2cf9f-0x140a2cfac size=13 type=0 succ=['0x140a2cfac'] pred=['0x140a2cf6a']
// BB 0x140a2cfac-0x140a2cfef size=67 type=0 succ=['0x140a2d021'] pred=['0x140a2cf6a', '0x140a2cf9f']
// BB 0x140a2cfef-0x140a2cfff size=16 type=0 succ=['0x140a28fae', '0x140a2cfff'] pred=['0x140a28f60']
// BB 0x140a2cfff-0x140a2d016 size=23 type=0 succ=['0x140a28fae'] pred=['0x140a2cfef']
// BB 0x140a2d016-0x140a2d021 size=11 type=0 succ=['0x140a2d021'] pred=['0x140a2cda3']
// BB 0x140a2d021-0x140a2d040 size=31 type=0 succ=['0x140a2d040'] pred=['0x140a2cfac', '0x140a2d016']
// BB 0x140a2d040-0x140a2d050 size=16 type=0 succ=['0x140a2d050', '0x140a2d069'] pred=['0x140a2d021', '0x140a2d05e']
// BB 0x140a2d050-0x140a2d05e size=14 type=0 succ=['0x140a2d05e'] pred=['0x140a2d040']
// BB 0x140a2d05e-0x140a2d069 size=11 type=0 succ=['0x140a2d040'] pred=['0x140a2d050']
// BB 0x140a2d069-0x140a2d075 size=12 type=0 succ=['0x140a2d075', '0x140a2d08b'] pred=['0x140a2d040']
// BB 0x140a2d075-0x140a2d08b size=22 type=0 succ=['0x140a2d08b'] pred=['0x140a2d069']
// BB 0x140a2d08b-0x140a2d0bc size=49 type=0 succ=['0x140a2d0bc'] pred=['0x140a28fae', '0x140a28ff3', '0x140a2d069', '0x140a2d075']
// BB 0x140a2d0bc-0x140a2d0da size=30 type=0 succ=['0x140a2d0da', '0x140a2d130'] pred=['0x140a2d08b']
// BB 0x140a2d0da-0x140a2d0f4 size=26 type=0 succ=['0x140a2d0f4', '0x140a2d103'] pred=['0x140a2d0bc']
// BB 0x140a2d0f4-0x140a2d103 size=15 type=0 succ=['0x140a2d103'] pred=['0x140a2d0da']
// BB 0x140a2d103-0x140a2d108 size=5 type=0 succ=['0x140a2d108', '0x140a2d14a'] pred=['0x140a2d0da', '0x140a2d0f4']
// BB 0x140a2d108-0x140a2d10a size=2 type=0 succ=['0x140a2d10a'] pred=['0x140a2d103', '0x140a2d130']
// BB 0x140a2d10a-0x140a2d12a size=32 type=4 succ=[] pred=['0x140a2d108', '0x140a2d153']
// BB 0x140a2d12b-0x140a2d130 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2d130-0x140a2d14a size=26 type=0 succ=['0x140a2d108', '0x140a2d14a'] pred=['0x140a2d0bc']
// BB 0x140a2d14a-0x140a2d153 size=9 type=0 succ=['0x140a2d153', '0x140a2d18a'] pred=['0x140a2d103', '0x140a2d130']
// BB 0x140a2d153-0x140a2d16f size=28 type=0 succ=['0x140a2d10a', '0x140a2d16f'] pred=['0x140a2d14a']
// BB 0x140a2d16f-0x140a2d18a size=27 type=0 succ=['0x140a2d196'] pred=['0x140a2d153']
// BB 0x140a2d18a-0x140a2d196 size=12 type=0 succ=['0x140a2d196'] pred=['0x140a2d14a']
// BB 0x140a2d196-0x140a2d19d size=7 type=0 succ=['0x140a2d19d'] pred=['0x140a2d16f', '0x140a2d18a']
// BB 0x140a2d19d-0x140a2d1bb size=30 type=0 succ=['0x140a2d1bb', '0x140a2d1e4'] pred=['0x140a2d196']
// BB 0x140a2d1bb-0x140a2d1e4 size=41 type=0 succ=['0x140a2d1e4', '0x140a2d2d1'] pred=['0x140a2d19d']
// BB 0x140a2d1e4-0x140a2d1fa size=22 type=1 succ=['0x140a2d1fa', '0x140a2d25b', '0x140a2d27b', '0x140a2d2b0', '0x140a2d3ca'] pred=['0x140a2d19d', '0x140a2d1bb']
// BB 0x140a2d1fa-0x140a2d256 size=92 type=0 succ=['0x140a2d256', '0x140a2d447'] pred=['0x140a2d1e4']
// BB 0x140a2d256-0x140a2d25b size=5 type=0 succ=['0x140a2d2ee'] pred=['0x140a2d1fa']
// BB 0x140a2d25b-0x140a2d27b size=32 type=0 succ=['0x140a2d3ca'] pred=['0x140a2d1e4']
// BB 0x140a2d27b-0x140a2d286 size=11 type=0 succ=['0x140a2d286', '0x140a2d3b4'] pred=['0x140a2d1e4']
// BB 0x140a2d286-0x140a2d293 size=13 type=0 succ=['0x140a2d293', '0x140a2df38'] pred=['0x140a2d27b']
// BB 0x140a2d293-0x140a2d2b0 size=29 type=0 succ=['0x140a2d3ca'] pred=['0x140a2d286']
// BB 0x140a2d2b0-0x140a2d2d1 size=33 type=0 succ=['0x140a2d3ca'] pred=['0x140a2d1e4']
// BB 0x140a2d2d1-0x140a2d2ee size=29 type=0 succ=['0x140a2d2ee'] pred=['0x140a2d1bb']
// BB 0x140a2d2ee-0x140a2d353 size=101 type=0 succ=['0x140a2d4b3'] pred=['0x140a2d256', '0x140a2d2d1']
// BB 0x140a2d353-0x140a2d35c size=9 type=0 succ=['0x140a2d35c'] pred=['0x140a29200']
// BB 0x140a2d35c-0x140a2d36a size=14 type=0 succ=['0x140a2d36a'] pred=['0x140a2d353', '0x140a2e1b1']
// BB 0x140a2d36a-0x140a2d372 size=8 type=4 succ=[] pred=['0x140a2d35c']
// BB 0x140a2d373-0x140a2d378 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2d378-0x140a2d381 size=9 type=0 succ=['0x140a2d381'] pred=['0x140a29284']
// BB 0x140a2d381-0x140a2d397 size=22 type=4 succ=[] pred=['0x140a2d378', '0x140a2e1b9']
// BB 0x140a2d398-0x140a2d39d size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2d39d-0x140a2d39f size=2 type=0 succ=['0x140a2d39f'] pred=['0x140a2a06d']
// BB 0x140a2d39f-0x140a2d3ae size=15 type=4 succ=[] pred=['0x140a2d39d', '0x140a2e27c']
// BB 0x140a2d3af-0x140a2d3b4 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2d3b4-0x140a2d3ca size=22 type=0 succ=['0x140a2d3ca'] pred=['0x140a2d27b']
// BB 0x140a2d3ca-0x140a2d447 size=125 type=0 succ=['0x140a2d447'] pred=['0x140a2d1e4', '0x140a2d25b', '0x140a2d293', '0x140a2d2b0', '0x140a2d3b4']
// BB 0x140a2d447-0x140a2d4a6 size=95 type=0 succ=['0x140a2d4a6'] pred=['0x140a2d1fa', '0x140a2d3ca']
// BB 0x140a2d4a6-0x140a2d4b3 size=13 type=0 succ=['0x140a2d4b3'] pred=['0x140a2d447']
// BB 0x140a2d4b3-0x140a2d4eb size=56 type=0 succ=['0x140a2d4eb', '0x140a2dfc9'] pred=['0x140a2d2ee', '0x140a2d4a6']
// BB 0x140a2d4eb-0x140a2d51e size=51 type=0 succ=['0x140a2d51e', '0x140a2d54e'] pred=['0x140a2d4b3']
// BB 0x140a2d51e-0x140a2d539 size=27 type=0 succ=['0x140a2d539', '0x140a2e008'] pred=['0x140a2d4eb']
// BB 0x140a2d539-0x140a2d54e size=21 type=0 succ=['0x140a2d54e'] pred=['0x140a2d51e']
// BB 0x140a2d54e-0x140a2d571 size=35 type=0 succ=['0x140a2d571'] pred=['0x140a2d4eb', '0x140a2d539']
// BB 0x140a2d571-0x140a2d59c size=43 type=0 succ=['0x140a2d59c', '0x140a2d5a9'] pred=['0x140a2d54e']
// BB 0x140a2d59c-0x140a2d5a9 size=13 type=0 succ=['0x140a2d5a9'] pred=['0x140a2d571']
// BB 0x140a2d5a9-0x140a2d5c6 size=29 type=0 succ=['0x140a2d5c6', '0x140a2dfde'] pred=['0x140a2d571', '0x140a2d59c']
// BB 0x140a2d5c6-0x140a2d5f7 size=49 type=0 succ=['0x140a2d5f7'] pred=['0x140a2d5a9']
// BB 0x140a2d5f7-0x140a2d618 size=33 type=0 succ=['0x140a2d618', '0x140a2dce5'] pred=['0x140a2d5c6']
// BB 0x140a2d618-0x140a2d66a size=82 type=0 succ=['0x140a2d66a', '0x140a2d677'] pred=['0x140a2d5f7']
// BB 0x140a2d66a-0x140a2d677 size=13 type=0 succ=['0x140a2d677'] pred=['0x140a2d618']
// BB 0x140a2d677-0x140a2d694 size=29 type=0 succ=['0x140a2d694', '0x140a2dff3'] pred=['0x140a2d618', '0x140a2d66a']
// BB 0x140a2d694-0x140a2d6cb size=55 type=0 succ=['0x140a2d6cb'] pred=['0x140a2d677']
// BB 0x140a2d6cb-0x140a2d6ec size=33 type=0 succ=['0x140a2d6ec', '0x140a2dd24'] pred=['0x140a2d694']
// BB 0x140a2d6ec-0x140a2d744 size=88 type=0 succ=['0x140a2d744', '0x140a2d751'] pred=['0x140a2d6cb']
// BB 0x140a2d744-0x140a2d751 size=13 type=0 succ=['0x140a2d751'] pred=['0x140a2d6ec']
// BB 0x140a2d751-0x140a2d78b size=58 type=0 succ=['0x140a2d78b', '0x140a2d80c'] pred=['0x140a2d6ec', '0x140a2d744']
// BB 0x140a2d78b-0x140a2d7c3 size=56 type=0 succ=['0x140a2d7c3'] pred=['0x140a2d751']
// BB 0x140a2d7c3-0x140a2d7dc size=25 type=0 succ=['0x140a2d7dc'] pred=['0x140a2d78b']
// BB 0x140a2d7dc-0x140a2d80c size=48 type=0 succ=['0x140a2d80c'] pred=['0x140a2d7c3']
// BB 0x140a2d80c-0x140a2d82e size=34 type=0 succ=['0x140a2d82e', '0x140a2d937'] pred=['0x140a2d751', '0x140a2d7dc']
// BB 0x140a2d82e-0x140a2d841 size=19 type=1 succ=['0x140a2d841', '0x140a2d85f', '0x140a2d87d', '0x140a2d886', '0x140a2d8a3'] pred=['0x140a2d80c']
// BB 0x140a2d841-0x140a2d85f size=30 type=0 succ=['0x140a2d8e7'] pred=['0x140a2d82e']
// BB 0x140a2d85f-0x140a2d87d size=30 type=0 succ=['0x140a2d8e7'] pred=['0x140a2d82e']
// BB 0x140a2d87d-0x140a2d886 size=9 type=0 succ=['0x140a2d8e7'] pred=['0x140a2d82e']
// BB 0x140a2d886-0x140a2d8a3 size=29 type=0 succ=['0x140a2d8e7'] pred=['0x140a2d82e']
// BB 0x140a2d8a3-0x140a2d8aa size=7 type=0 succ=['0x140a2d8aa', '0x140a2d8ca'] pred=['0x140a2d82e']
// BB 0x140a2d8aa-0x140a2d8b7 size=13 type=0 succ=['0x140a2d8b7', '0x140a2df51'] pred=['0x140a2d8a3']
// BB 0x140a2d8b7-0x140a2d8ca size=19 type=0 succ=['0x140a2d8e0'] pred=['0x140a2d8aa']
// BB 0x140a2d8ca-0x140a2d8e0 size=22 type=0 succ=['0x140a2d8e0'] pred=['0x140a2d8a3']
// BB 0x140a2d8e0-0x140a2d8e7 size=7 type=0 succ=['0x140a2d8e7'] pred=['0x140a2d8b7', '0x140a2d8ca']
// BB 0x140a2d8e7-0x140a2d8ee size=7 type=0 succ=['0x140a2d8ee'] pred=['0x140a2d841', '0x140a2d85f', '0x140a2d87d', '0x140a2d886', '0x140a2d8e0']
// BB 0x140a2d8ee-0x140a2d907 size=25 type=0 succ=['0x140a2d907'] pred=['0x140a2d8e7']
// BB 0x140a2d907-0x140a2d937 size=48 type=0 succ=['0x140a2d937'] pred=['0x140a2d8ee']
// BB 0x140a2d937-0x140a2d959 size=34 type=0 succ=['0x140a2d959', '0x140a2da62'] pred=['0x140a2d80c', '0x140a2d907']
// BB 0x140a2d959-0x140a2d96c size=19 type=1 succ=['0x140a2d96c', '0x140a2d98a', '0x140a2d9a8', '0x140a2d9b1', '0x140a2d9ce'] pred=['0x140a2d937']
// BB 0x140a2d96c-0x140a2d98a size=30 type=0 succ=['0x140a2da12'] pred=['0x140a2d959']
// BB 0x140a2d98a-0x140a2d9a8 size=30 type=0 succ=['0x140a2da12'] pred=['0x140a2d959']
// BB 0x140a2d9a8-0x140a2d9b1 size=9 type=0 succ=['0x140a2da12'] pred=['0x140a2d959']
// BB 0x140a2d9b1-0x140a2d9ce size=29 type=0 succ=['0x140a2da12'] pred=['0x140a2d959']
// BB 0x140a2d9ce-0x140a2d9d5 size=7 type=0 succ=['0x140a2d9d5', '0x140a2d9f5'] pred=['0x140a2d959']
// BB 0x140a2d9d5-0x140a2d9e2 size=13 type=0 succ=['0x140a2d9e2', '0x140a2df63'] pred=['0x140a2d9ce']
// BB 0x140a2d9e2-0x140a2d9f5 size=19 type=0 succ=['0x140a2da0b'] pred=['0x140a2d9d5']
// BB 0x140a2d9f5-0x140a2da0b size=22 type=0 succ=['0x140a2da0b'] pred=['0x140a2d9ce']
// BB 0x140a2da0b-0x140a2da12 size=7 type=0 succ=['0x140a2da12'] pred=['0x140a2d9e2', '0x140a2d9f5']
// BB 0x140a2da12-0x140a2da19 size=7 type=0 succ=['0x140a2da19'] pred=['0x140a2d96c', '0x140a2d98a', '0x140a2d9a8', '0x140a2d9b1', '0x140a2da0b']
// BB 0x140a2da19-0x140a2da32 size=25 type=0 succ=['0x140a2da32'] pred=['0x140a2da12']
// BB 0x140a2da32-0x140a2da62 size=48 type=0 succ=['0x140a2da62'] pred=['0x140a2da19']
// BB 0x140a2da62-0x140a2da6e size=12 type=0 succ=['0x140a2da6e', '0x140a2da77'] pred=['0x140a2d937', '0x140a2da32']
// BB 0x140a2da6e-0x140a2da77 size=9 type=0 succ=['0x140a2dae7'] pred=['0x140a2da62']
// BB 0x140a2da77-0x140a2da95 size=30 type=0 succ=['0x140a2da95', '0x140a2dab4'] pred=['0x140a2da62']
// BB 0x140a2da95-0x140a2daaf size=26 type=0 succ=['0x140a2daaf', '0x140a2dab4'] pred=['0x140a2da77']
// BB 0x140a2daaf-0x140a2dab4 size=5 type=0 succ=['0x140a2dab4', '0x140a2dadf'] pred=['0x140a2da95']
// BB 0x140a2dab4-0x140a2dad6 size=34 type=0 succ=['0x140a2dad6', '0x140a2ef0e'] pred=['0x140a2da77', '0x140a2da95', '0x140a2daaf']
// BB 0x140a2dad6-0x140a2dadf size=9 type=0 succ=['0x140a2dadf', '0x140a2ef0e'] pred=['0x140a2dab4']
// BB 0x140a2dadf-0x140a2dae7 size=8 type=0 succ=['0x140a2dae7'] pred=['0x140a2daaf', '0x140a2dad6']
// BB 0x140a2dae7-0x140a2daf5 size=14 type=0 succ=['0x140a2daf5', '0x140a2db09'] pred=['0x140a2da6e', '0x140a2dadf']
// BB 0x140a2daf5-0x140a2daf8 size=3 type=0 succ=['0x140a2daf8'] pred=['0x140a2dae7']
// BB 0x140a2daf8-0x140a2db03 size=11 type=4 succ=[] pred=['0x140a2daf5', '0x140a2db12']
// BB 0x140a2db04-0x140a2db09 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2db09-0x140a2db12 size=9 type=0 succ=['0x140a2db12', '0x140a2ef0e'] pred=['0x140a2dae7']
// BB 0x140a2db12-0x140a2db32 size=32 type=0 succ=['0x140a2daf8', '0x140a2db32'] pred=['0x140a2db09']
// BB 0x140a2db32-0x140a2db49 size=23 type=0 succ=['0x140a2db49', '0x140a2db50'] pred=['0x140a2db12']
// BB 0x140a2db49-0x140a2db50 size=7 type=0 succ=['0x140a2e644'] pred=['0x140a2db32']
// BB 0x140a2db50-0x140a2db56 size=6 type=0 succ=['0x140a2db56', '0x140a2db5d'] pred=['0x140a2db32']
// BB 0x140a2db56-0x140a2db5d size=7 type=0 succ=['0x140a2dbfd'] pred=['0x140a2db50']
// BB 0x140a2db5d-0x140a2db90 size=51 type=0 succ=['0x140a2db90'] pred=['0x140a2db50']
// BB 0x140a2db90-0x140a2dbeb size=91 type=0 succ=['0x140a2dbeb', '0x140a2db90'] pred=['0x140a2db5d', '0x140a2db90']
// BB 0x140a2dbeb-0x140a2dbf4 size=9 type=0 succ=['0x140a2dbf4', '0x140a2e663'] pred=['0x140a2db90']
// BB 0x140a2dbf4-0x140a2dbfd size=9 type=0 succ=['0x140a2dbfd', '0x140a2e644'] pred=['0x140a2dbeb']
// BB 0x140a2dbfd-0x140a2dc30 size=51 type=0 succ=['0x140a2dc30'] pred=['0x140a2db56', '0x140a2dbf4']
// BB 0x140a2dc30-0x140a2dc61 size=49 type=0 succ=['0x140a2dc61', '0x140a2dc30'] pred=['0x140a2dbfd', '0x140a2dc30']
// BB 0x140a2dc61-0x140a2dc66 size=5 type=0 succ=['0x140a2e65e'] pred=['0x140a2dc30']
// BB 0x140a2dc66-0x140a2dc68 size=2 type=0 succ=['0x140a2dc68'] pred=['0x140a2a98c']
// BB 0x140a2dc68-0x140a2dc74 size=12 type=4 succ=[] pred=['0x140a2dc66', '0x140a2e561']
// BB 0x140a2dc75-0x140a2dc7a size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dc7a-0x140a2dc7d size=3 type=0 succ=['0x140a2dc7d'] pred=['0x140a2a887']
// BB 0x140a2dc7d-0x140a2dc84 size=7 type=0 succ=['0x140a2dc84'] pred=['0x140a2a8c0', '0x140a2dc7a']
// BB 0x140a2dc84-0x140a2dc8f size=11 type=4 succ=[] pred=['0x140a2dc7d']
// BB 0x140a2dc90-0x140a2dc95 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dc95-0x140a2dc98 size=3 type=0 succ=['0x140a2dc98'] pred=['0x140a2b4ad']
// BB 0x140a2dc98-0x140a2dc9f size=7 type=0 succ=['0x140a2dc9f'] pred=['0x140a2b4df', '0x140a2dc95']
// BB 0x140a2dc9f-0x140a2dcaa size=11 type=4 succ=[] pred=['0x140a2dc98']
// BB 0x140a2dcab-0x140a2dcb0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dcb0-0x140a2dcb2 size=2 type=0 succ=['0x140a2dcb2'] pred=['0x140a29e8a']
// BB 0x140a2dcb2-0x140a2dcb9 size=7 type=0 succ=['0x140a2dcb9'] pred=['0x140a29eb6', '0x140a2dcb0']
// BB 0x140a2dcb9-0x140a2dcc4 size=11 type=4 succ=[] pred=['0x140a2dcb2']
// BB 0x140a2dcc5-0x140a2dcca size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dcca-0x140a2dccd size=3 type=0 succ=['0x140a2dccd'] pred=['0x140a2ade9']
// BB 0x140a2dccd-0x140a2dcd4 size=7 type=0 succ=['0x140a2dcd4'] pred=['0x140a2ae1f', '0x140a2dcca']
// BB 0x140a2dcd4-0x140a2dcdf size=11 type=4 succ=[] pred=['0x140a2dccd']
// BB 0x140a2dce0-0x140a2dce5 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dce5-0x140a2dcf3 size=14 type=0 succ=['0x140a2dcf3'] pred=['0x140a2d5f7']
// BB 0x140a2dcf3-0x140a2dd1e size=43 type=4 succ=[] pred=['0x140a2dce5']
// BB 0x140a2dd1f-0x140a2dd24 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dd24-0x140a2dd32 size=14 type=0 succ=['0x140a2dd32'] pred=['0x140a2d6cb']
// BB 0x140a2dd32-0x140a2dd5d size=43 type=4 succ=[] pred=['0x140a2dd24']
// BB 0x140a2dd5e-0x140a2dd63 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dd63-0x140a2dd6a size=7 type=0 succ=['0x140a2dd6a'] pred=['0x140a2a523']
// BB 0x140a2dd6a-0x140a2dd79 size=15 type=4 succ=[] pred=['0x140a2dd63']
// BB 0x140a2dd7a-0x140a2dd7f size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dd7f-0x140a2dd8d size=14 type=0 succ=['0x140a2dd8d'] pred=['0x140a2ceea']
// BB 0x140a2dd8d-0x140a2ddb8 size=43 type=4 succ=[] pred=['0x140a2dd7f']
// BB 0x140a2ddb9-0x140a2ddbe size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2ddbe-0x140a2ddcc size=14 type=0 succ=['0x140a2ddcc'] pred=['0x140a2a324']
// BB 0x140a2ddcc-0x140a2ddf7 size=43 type=4 succ=[] pred=['0x140a2ddbe']
// BB 0x140a2ddf8-0x140a2ddfd size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2ddfd-0x140a2de0b size=14 type=0 succ=['0x140a2de0b'] pred=['0x140a2a571']
// BB 0x140a2de0b-0x140a2de36 size=43 type=4 succ=[] pred=['0x140a2ddfd']
// BB 0x140a2de37-0x140a2de3c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2de3c-0x140a2de4a size=14 type=0 succ=['0x140a2de4a'] pred=['0x140a2957f']
// BB 0x140a2de4a-0x140a2de75 size=43 type=4 succ=[] pred=['0x140a2de3c']
// BB 0x140a2de76-0x140a2de7b size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2de7b-0x140a2de89 size=14 type=0 succ=['0x140a2de89'] pred=['0x140a2bc1c']
// BB 0x140a2de89-0x140a2deb4 size=43 type=4 succ=[] pred=['0x140a2de7b']
// BB 0x140a2deb5-0x140a2deba size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2deba-0x140a2dec8 size=14 type=0 succ=['0x140a2dec8'] pred=['0x140a2b1af']
// BB 0x140a2dec8-0x140a2def3 size=43 type=4 succ=[] pred=['0x140a2deba']
// BB 0x140a2def4-0x140a2def9 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2def9-0x140a2df07 size=14 type=0 succ=['0x140a2df07'] pred=['0x140a2b6b5']
// BB 0x140a2df07-0x140a2df32 size=43 type=4 succ=[] pred=['0x140a2def9']
// BB 0x140a2df33-0x140a2df38 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2df38-0x140a2df3f size=7 type=0 succ=['0x140a2df3f'] pred=['0x140a2d286']
// BB 0x140a2df3f-0x140a2df4b size=12 type=4 succ=[] pred=['0x140a2df38']
// BB 0x140a2df4c-0x140a2df51 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2df51-0x140a2df5d size=12 type=4 succ=[] pred=['0x140a2d8aa']
// BB 0x140a2df5e-0x140a2df63 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2df63-0x140a2df6f size=12 type=4 succ=[] pred=['0x140a2d9d5']
// BB 0x140a2df70-0x140a2df75 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2df75-0x140a2df83 size=14 type=0 succ=['0x140a2df83'] pred=['0x140a2a764']
// BB 0x140a2df83-0x140a2df92 size=15 type=4 succ=[] pred=['0x140a2df75']
// BB 0x140a2df93-0x140a2df98 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2df98-0x140a2dfc3 size=43 type=4 succ=[] pred=['0x140a2b4a5']
// BB 0x140a2dfc4-0x140a2dfc9 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dfc9-0x140a2dfd8 size=15 type=4 succ=[] pred=['0x140a2d4b3']
// BB 0x140a2dfd9-0x140a2dfde size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dfde-0x140a2dfed size=15 type=4 succ=[] pred=['0x140a2d5a9']
// BB 0x140a2dfee-0x140a2dff3 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2dff3-0x140a2e002 size=15 type=4 succ=[] pred=['0x140a2d677']
// BB 0x140a2e003-0x140a2e008 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e008-0x140a2e00f size=7 type=0 succ=['0x140a2e00f'] pred=['0x140a2d51e']
// BB 0x140a2e00f-0x140a2e01c size=13 type=4 succ=[] pred=['0x140a2e008']
// BB 0x140a2e01d-0x140a2e022 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e022-0x140a2e030 size=14 type=0 succ=['0x140a2e030'] pred=['0x140a29952']
// BB 0x140a2e030-0x140a2e05b size=43 type=4 succ=[] pred=['0x140a2e022']
// BB 0x140a2e05c-0x140a2e061 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e061-0x140a2e06f size=14 type=0 succ=['0x140a2e06f'] pred=['0x140a29b49']
// BB 0x140a2e06f-0x140a2e09a size=43 type=4 succ=[] pred=['0x140a2e061']
// BB 0x140a2e09b-0x140a2e0a0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e0a0-0x140a2e0ae size=14 type=0 succ=['0x140a2e0ae'] pred=['0x140a29a75']
// BB 0x140a2e0ae-0x140a2e0d9 size=43 type=4 succ=[] pred=['0x140a2e0a0']
// BB 0x140a2e0da-0x140a2e0df size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e0df-0x140a2e0ed size=14 type=0 succ=['0x140a2e0ed'] pred=['0x140a29c10']
// BB 0x140a2e0ed-0x140a2e118 size=43 type=4 succ=[] pred=['0x140a2e0df']
// BB 0x140a2e119-0x140a2e11e size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e11e-0x140a2e12d size=15 type=4 succ=[] pred=['0x140a2cdb1']
// BB 0x140a2e12e-0x140a2e133 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e133-0x140a2e142 size=15 type=4 succ=[] pred=['0x140a2cde4']
// BB 0x140a2e143-0x140a2e148 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e148-0x140a2e157 size=15 type=4 succ=[] pred=['0x140a2ce9c']
// BB 0x140a2e158-0x140a2e15d size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e15d-0x140a2e16c size=15 type=4 succ=[] pred=['0x140a2a2d6']
// BB 0x140a2e16d-0x140a2e172 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e172-0x140a2e181 size=15 type=4 succ=[] pred=['0x140a2a132']
// BB 0x140a2e182-0x140a2e187 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e187-0x140a2e196 size=15 type=4 succ=[] pred=['0x140a2a0da']
// BB 0x140a2e197-0x140a2e19c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e19c-0x140a2e1ab size=15 type=4 succ=[] pred=['0x140a2a1ed']
// BB 0x140a2e1ac-0x140a2e1b1 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e1b1-0x140a2e1b9 size=8 type=0 succ=['0x140a2d35c'] pred=['0x140a29ffb']
// BB 0x140a2e1b9-0x140a2e1c1 size=8 type=0 succ=['0x140a2d381'] pred=['0x140a2a09c']
// BB 0x140a2e1c1-0x140a2e1d0 size=15 type=4 succ=[] pred=['0x140a2a42a']
// BB 0x140a2e1d1-0x140a2e1d6 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e1d6-0x140a2e1e5 size=15 type=4 succ=[] pred=['0x140a2a506']
// BB 0x140a2e1e6-0x140a2e1eb size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e1eb-0x140a2e1fa size=15 type=4 succ=[] pred=['0x140a2a45d']
// BB 0x140a2e1fb-0x140a2e200 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e200-0x140a2e20f size=15 type=4 succ=[] pred=['0x140a294f2']
// BB 0x140a2e210-0x140a2e215 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e215-0x140a2e224 size=15 type=4 succ=[] pred=['0x140a2943a']
// BB 0x140a2e225-0x140a2e22a size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e22a-0x140a2e239 size=15 type=4 succ=[] pred=['0x140a29407']
// BB 0x140a2e23a-0x140a2e23f size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e23f-0x140a2e24c size=13 type=4 succ=[] pred=['0x140a2bb24']
// BB 0x140a2e24d-0x140a2e252 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e252-0x140a2e261 size=15 type=4 succ=[] pred=['0x140a2baf1']
// BB 0x140a2e262-0x140a2e267 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e267-0x140a2e276 size=15 type=4 succ=[] pred=['0x140a2bbce']
// BB 0x140a2e277-0x140a2e27c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e27c-0x140a2e288 size=12 type=0 succ=['0x140a2d39f'] pred=['0x140a2a6d2']
// BB 0x140a2e288-0x140a2e28f size=7 type=0 succ=['0x140a2e28f'] pred=['0x140a2a24b']
// BB 0x140a2e28f-0x140a2e29c size=13 type=4 succ=[] pred=['0x140a2e288']
// BB 0x140a2e29d-0x140a2e2a2 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e2a2-0x140a2e2b1 size=15 type=4 succ=[] pred=['0x140a2b084']
// BB 0x140a2e2b2-0x140a2e2b7 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e2b7-0x140a2e2c6 size=15 type=4 succ=[] pred=['0x140a2afaa']
// BB 0x140a2e2c7-0x140a2e2cc size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e2cc-0x140a2e2db size=15 type=4 succ=[] pred=['0x140a2aec4']
// BB 0x140a2e2dc-0x140a2e2e1 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e2e1-0x140a2e2f0 size=15 type=4 succ=[] pred=['0x140a2aef7']
// BB 0x140a2e2f1-0x140a2e2f6 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e2f6-0x140a2e305 size=15 type=4 succ=[] pred=['0x140a2b164']
// BB 0x140a2e306-0x140a2e30b size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e30b-0x140a2e31a size=15 type=4 succ=[] pred=['0x140a2b549']
// BB 0x140a2e31b-0x140a2e320 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e320-0x140a2e32f size=15 type=4 succ=[] pred=['0x140a2b667']
// BB 0x140a2e330-0x140a2e335 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e335-0x140a2e344 size=15 type=4 succ=[] pred=['0x140a2b5af']
// BB 0x140a2e345-0x140a2e34a size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e34a-0x140a2e351 size=7 type=0 succ=['0x140a2e351'] pred=['0x140a2aff9']
// BB 0x140a2e351-0x140a2e35e size=13 type=4 succ=[] pred=['0x140a2e34a']
// BB 0x140a2e35f-0x140a2e364 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e364-0x140a2e36b size=7 type=0 succ=['0x140a2e36b'] pred=['0x140a2b0d9']
// BB 0x140a2e36b-0x140a2e378 size=13 type=4 succ=[] pred=['0x140a2e364']
// BB 0x140a2e379-0x140a2e37e size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e37e-0x140a2e38d size=15 type=4 succ=[] pred=['0x140a2a784']
// BB 0x140a2e38e-0x140a2e393 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e393-0x140a2e3a2 size=15 type=4 succ=[] pred=['0x140a2a7c1']
// BB 0x140a2e3a3-0x140a2e3a8 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e3a8-0x140a2e3b7 size=15 type=4 succ=[] pred=['0x140a2a86a']
// BB 0x140a2e3b8-0x140a2e3bd size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e3bd-0x140a2e3cb size=14 type=0 succ=['0x140a2e3cb'] pred=['0x140a2c7d1']
// BB 0x140a2e3cb-0x140a2e3f6 size=43 type=4 succ=[] pred=['0x140a2e3bd']
// BB 0x140a2e3f7-0x140a2e3fc size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e3fc-0x140a2e40a size=14 type=0 succ=['0x140a2e40a'] pred=['0x140a2c6ff']
// BB 0x140a2e40a-0x140a2e435 size=43 type=4 succ=[] pred=['0x140a2e3fc']
// BB 0x140a2e436-0x140a2e43b size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e43b-0x140a2e449 size=14 type=0 succ=['0x140a2e449'] pred=['0x140a2c3dc']
// BB 0x140a2e449-0x140a2e474 size=43 type=4 succ=[] pred=['0x140a2e43b']
// BB 0x140a2e475-0x140a2e47a size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e47a-0x140a2e488 size=14 type=0 succ=['0x140a2e488'] pred=['0x140a2c631']
// BB 0x140a2e488-0x140a2e4b3 size=43 type=4 succ=[] pred=['0x140a2e47a']
// BB 0x140a2e4b4-0x140a2e4b9 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e4b9-0x140a2e4c7 size=14 type=0 succ=['0x140a2e4c7'] pred=['0x140a2c4a3']
// BB 0x140a2e4c7-0x140a2e4f2 size=43 type=4 succ=[] pred=['0x140a2e4b9']
// BB 0x140a2e4f3-0x140a2e4f8 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e4f8-0x140a2e507 size=15 type=4 succ=[] pred=['0x140a2b3c8']
// BB 0x140a2e508-0x140a2e50d size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e50d-0x140a2e51c size=15 type=4 succ=[] pred=['0x140a29d8d']
// BB 0x140a2e51d-0x140a2e522 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e522-0x140a2e531 size=15 type=4 succ=[] pred=['0x140a29dc4']
// BB 0x140a2e532-0x140a2e537 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e537-0x140a2e546 size=15 type=4 succ=[] pred=['0x140a29e6d']
// BB 0x140a2e547-0x140a2e54c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e54c-0x140a2e55b size=15 type=4 succ=[] pred=['0x140a2ad93']
// BB 0x140a2e55c-0x140a2e561 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e561-0x140a2e572 size=17 type=0 succ=['0x140a2dc68'] pred=['0x140a2a9b0']
// BB 0x140a2e572-0x140a2e581 size=15 type=4 succ=[] pred=['0x140a29bc9']
// BB 0x140a2e582-0x140a2e587 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e587-0x140a2e596 size=15 type=4 succ=[] pred=['0x140a299d2']
// BB 0x140a2e597-0x140a2e59c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e59c-0x140a2e5ab size=15 type=4 succ=[] pred=['0x140a298c5']
// BB 0x140a2e5ac-0x140a2e5b1 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e5b1-0x140a2e5c0 size=15 type=4 succ=[] pred=['0x140a299ef']
// BB 0x140a2e5c1-0x140a2e5c6 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e5c6-0x140a2e5d5 size=15 type=4 succ=[] pred=['0x140a29af5']
// BB 0x140a2e5d6-0x140a2e5db size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e5db-0x140a2e5ea size=15 type=4 succ=[] pred=['0x140a2c45c']
// BB 0x140a2e5eb-0x140a2e5f0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e5f0-0x140a2e5ff size=15 type=4 succ=[] pred=['0x140a2c5d4']
// BB 0x140a2e600-0x140a2e605 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e605-0x140a2e614 size=15 type=4 succ=[] pred=['0x140a2c6b1']
// BB 0x140a2e615-0x140a2e61a size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e61a-0x140a2e629 size=15 type=4 succ=[] pred=['0x140a2c77f']
// BB 0x140a2e62a-0x140a2e62f size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e62f-0x140a2e63e size=15 type=4 succ=[] pred=['0x140a2c37f']
// BB 0x140a2e63f-0x140a2e644 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2e644-0x140a2e65e size=26 type=0 succ=['0x140a2e65e'] pred=['0x140a2db49', '0x140a2dbf4', '0x140a2e65e']
// BB 0x140a2e65e-0x140a2e663 size=5 type=0 succ=['0x140a2e644', '0x140a2e663'] pred=['0x140a2dc61', '0x140a2e644']
// BB 0x140a2e663-0x140a2e671 size=14 type=0 succ=['0x140a2e671', '0x140a2e7c5'] pred=['0x140a2dbeb', '0x140a2e65e']
// BB 0x140a2e671-0x140a2e681 size=16 type=1 succ=['0x140a2e681', '0x140a2e6c7', '0x140a2e709', '0x140a2e75b', '0x140a2e78a', '0x140a2e7b0', '0x140a2e7c5'] pred=['0x140a2e663']
// BB 0x140a2e681-0x140a2e6a1 size=32 type=0 succ=['0x140a2e6a1', '0x140a2e7e4'] pred=['0x140a2e671']
// BB 0x140a2e6a1-0x140a2e6bb size=26 type=0 succ=['0x140a2e6bb', '0x140a2e7c5'] pred=['0x140a2e681']
// BB 0x140a2e6bb-0x140a2e6c7 size=12 type=0 succ=['0x140a2e806'] pred=['0x140a2e6a1']
// BB 0x140a2e6c7-0x140a2e6e5 size=30 type=0 succ=['0x140a2e6e5', '0x140a2e7db'] pred=['0x140a2e671']
// BB 0x140a2e6e5-0x140a2e6fd size=24 type=0 succ=['0x140a2e6fd', '0x140a2e7c5'] pred=['0x140a2e6c7']
// BB 0x140a2e6fd-0x140a2e709 size=12 type=0 succ=['0x140a2e806'] pred=['0x140a2e6e5']
// BB 0x140a2e709-0x140a2e738 size=47 type=0 succ=['0x140a2e738', '0x140a2e806'] pred=['0x140a2e671']
// BB 0x140a2e738-0x140a2e756 size=30 type=0 succ=['0x140a2e756', '0x140a2e7c5'] pred=['0x140a2e709']
// BB 0x140a2e756-0x140a2e75b size=5 type=0 succ=['0x140a2e806'] pred=['0x140a2e738']
// BB 0x140a2e75b-0x140a2e768 size=13 type=0 succ=['0x140a2e768', '0x140a2e7ed'] pred=['0x140a2e671']
// BB 0x140a2e768-0x140a2e775 size=13 type=0 succ=['0x140a2e775', '0x140a2eb62'] pred=['0x140a2e75b']
// BB 0x140a2e775-0x140a2e77e size=9 type=0 succ=['0x140a2e77e', '0x140a2e7c5'] pred=['0x140a2e768']
// BB 0x140a2e77e-0x140a2e78a size=12 type=0 succ=['0x140a2eb69'] pred=['0x140a2e775']
// BB 0x140a2e78a-0x140a2e7a1 size=23 type=0 succ=['0x140a2e7a1', '0x140a2e7c5'] pred=['0x140a2e671']
// BB 0x140a2e7a1-0x140a2e7b0 size=15 type=0 succ=['0x140a2e806'] pred=['0x140a2e78a']
// BB 0x140a2e7b0-0x140a2e7c5 size=21 type=0 succ=['0x140a2e7c5', '0x140a2e7f9'] pred=['0x140a2e671']
// BB 0x140a2e7c5-0x140a2e7db size=22 type=0 succ=['0x140a2ef0e'] pred=['0x140a2e663', '0x140a2e671', '0x140a2e6a1', '0x140a2e6e5', '0x140a2e738', '0x140a2e775', '0x140a2e78a', '0x140a2e7b0']
// BB 0x140a2e7db-0x140a2e7e4 size=9 type=0 succ=['0x140a2e806'] pred=['0x140a2e6c7']
// BB 0x140a2e7e4-0x140a2e7ed size=9 type=0 succ=['0x140a2e806'] pred=['0x140a2e681']
// BB 0x140a2e7ed-0x140a2e7f9 size=12 type=0 succ=['0x140a2eb69'] pred=['0x140a2e75b']
// BB 0x140a2e7f9-0x140a2e806 size=13 type=0 succ=['0x140a2e806'] pred=['0x140a2e7b0']
// BB 0x140a2e806-0x140a2e81e size=24 type=0 succ=['0x140a2e81e'] pred=['0x140a2e6bb', '0x140a2e6fd', '0x140a2e709', '0x140a2e756', '0x140a2e7a1', '0x140a2e7db', '0x140a2e7e4', '0x140a2e7f9']
// BB 0x140a2e81e-0x140a2e833 size=21 type=0 succ=['0x140a2e833', '0x140a2ea61'] pred=['0x140a2e806', '0x140a2eb69']
// BB 0x140a2e833-0x140a2e866 size=51 type=0 succ=['0x140a2e866', '0x140a31286'] pred=['0x140a2e81e']
// BB 0x140a2e866-0x140a2e8ad size=71 type=0 succ=['0x140a2e8ad', '0x140a3129b'] pred=['0x140a2e833']
// BB 0x140a2e8ad-0x140a2e8de size=49 type=0 succ=['0x140a2e8de'] pred=['0x140a2e866']
// BB 0x140a2e8de-0x140a2e909 size=43 type=0 succ=['0x140a2e909', '0x140a2e916'] pred=['0x140a2e8ad']
// BB 0x140a2e909-0x140a2e916 size=13 type=0 succ=['0x140a2e916'] pred=['0x140a2e8de']
// BB 0x140a2e916-0x140a2e942 size=44 type=0 succ=['0x140a2e942'] pred=['0x140a2e8de', '0x140a2e909']
// BB 0x140a2e942-0x140a2e95b size=25 type=0 succ=['0x140a2e95b'] pred=['0x140a2e916']
// BB 0x140a2e95b-0x140a2e9c3 size=104 type=0 succ=['0x140a2e9c3', '0x140a312b0'] pred=['0x140a2e942']
// BB 0x140a2e9c3-0x140a2ea08 size=69 type=0 succ=['0x140a2ea08', '0x140a2ee12'] pred=['0x140a2e95b']
// BB 0x140a2ea08-0x140a2ea18 size=16 type=1 succ=['0x140a2ea18', '0x140a2eac6', '0x140a2eb0b', '0x140a2eb30', '0x140a2ee12'] pred=['0x140a2e9c3']
// BB 0x140a2ea18-0x140a2ea30 size=24 type=0 succ=['0x140a2ea30', '0x140a2ee06'] pred=['0x140a2ea08']
// BB 0x140a2ea30-0x140a2ea48 size=24 type=0 succ=['0x140a2ea48', '0x140a2ee12'] pred=['0x140a2ea18']
// BB 0x140a2ea48-0x140a2ea4f size=7 type=0 succ=['0x140a2ea4f'] pred=['0x140a2ea30']
// BB 0x140a2ea4f-0x140a2ea61 size=18 type=0 succ=['0x140a2edeb'] pred=['0x140a2ea48']
// BB 0x140a2ea61-0x140a2ea7d size=28 type=0 succ=['0x140a2ea7d', '0x140a2ef0e'] pred=['0x140a2e81e']
// BB 0x140a2ea7d-0x140a2ea91 size=20 type=1 succ=['0x140a2ea91', '0x140a2ed2f', '0x140a2ed50', '0x140a2ed86', '0x140a2eda9'] pred=['0x140a2ea61']
// BB 0x140a2ea91-0x140a2eaa9 size=24 type=0 succ=['0x140a2eaa9', '0x140a30b76'] pred=['0x140a2ea7d']
// BB 0x140a2eaa9-0x140a2eac1 size=24 type=0 succ=['0x140a2eac1', '0x140a2ef0e'] pred=['0x140a2ea91']
// BB 0x140a2eac1-0x140a2eac6 size=5 type=0 succ=['0x140a2ed7c'] pred=['0x140a2eaa9']
// BB 0x140a2eac6-0x140a2eadc size=22 type=0 succ=['0x140a2eadc', '0x140a2edd7'] pred=['0x140a2ea08']
// BB 0x140a2eadc-0x140a2eaf2 size=22 type=0 succ=['0x140a2eaf2', '0x140a2ee12'] pred=['0x140a2eac6']
// BB 0x140a2eaf2-0x140a2eaf9 size=7 type=0 succ=['0x140a2eaf9'] pred=['0x140a2eadc']
// BB 0x140a2eaf9-0x140a2eb0b size=18 type=0 succ=['0x140a2edeb'] pred=['0x140a2eaf2']
// BB 0x140a2eb0b-0x140a2eb17 size=12 type=0 succ=['0x140a2eb17', '0x140a2edf8'] pred=['0x140a2ea08']
// BB 0x140a2eb17-0x140a2eb30 size=25 type=0 succ=['0x140a2eb52'] pred=['0x140a2eb0b']
// BB 0x140a2eb30-0x140a2eb52 size=34 type=0 succ=['0x140a2eb52'] pred=['0x140a2ea08']
// BB 0x140a2eb52-0x140a2eb62 size=16 type=0 succ=['0x140a2ee12'] pred=['0x140a2eb17', '0x140a2eb30']
// BB 0x140a2eb62-0x140a2eb69 size=7 type=0 succ=['0x140a2eb69'] pred=['0x140a2e768']
// BB 0x140a2eb69-0x140a2eb98 size=47 type=0 succ=['0x140a2e81e', '0x140a2eb98'] pred=['0x140a2e77e', '0x140a2e7ed', '0x140a2eb62']
// BB 0x140a2eb98-0x140a2eba9 size=17 type=0 succ=['0x140a2eba9', '0x140a2ebc5'] pred=['0x140a2eb69']
// BB 0x140a2eba9-0x140a2ebc5 size=28 type=0 succ=['0x140a2ebc5', '0x140a2ef0e'] pred=['0x140a2eb98']
// BB 0x140a2ebc5-0x140a2ebf8 size=51 type=0 succ=['0x140a2ebf8', '0x140a31372'] pred=['0x140a2eb98', '0x140a2eba9']
// BB 0x140a2ebf8-0x140a2ec3f size=71 type=0 succ=['0x140a2ec3f', '0x140a31387'] pred=['0x140a2ebc5']
// BB 0x140a2ec3f-0x140a2ec70 size=49 type=0 succ=['0x140a2ec70'] pred=['0x140a2ebf8']
// BB 0x140a2ec70-0x140a2ec9b size=43 type=0 succ=['0x140a2ec9b', '0x140a2eca8'] pred=['0x140a2ec3f']
// BB 0x140a2ec9b-0x140a2eca8 size=13 type=0 succ=['0x140a2eca8'] pred=['0x140a2ec70']
// BB 0x140a2eca8-0x140a2ecd4 size=44 type=0 succ=['0x140a2ecd4'] pred=['0x140a2ec70', '0x140a2ec9b']
// BB 0x140a2ecd4-0x140a2eced size=25 type=0 succ=['0x140a2eced'] pred=['0x140a2eca8']
// BB 0x140a2eced-0x140a2ed1d size=48 type=0 succ=['0x140a2ed1d'] pred=['0x140a2ecd4']
// BB 0x140a2ed1d-0x140a2ed2f size=18 type=0 succ=['0x140a2ef0e'] pred=['0x140a2eced']
// BB 0x140a2ed2f-0x140a2ed46 size=23 type=0 succ=['0x140a2ed46', '0x140a2ef0e'] pred=['0x140a2ea7d']
// BB 0x140a2ed46-0x140a2ed50 size=10 type=0 succ=['0x140a30b7b'] pred=['0x140a2ed2f']
// BB 0x140a2ed50-0x140a2ed66 size=22 type=0 succ=['0x140a2ed66', '0x140a30b6f'] pred=['0x140a2ea7d']
// BB 0x140a2ed66-0x140a2ed7c size=22 type=0 succ=['0x140a2ed7c', '0x140a2ef0e'] pred=['0x140a2ed50']
// BB 0x140a2ed7c-0x140a2ed86 size=10 type=0 succ=['0x140a30b7b'] pred=['0x140a2eac1', '0x140a2ed66']
// BB 0x140a2ed86-0x140a2ed9f size=25 type=0 succ=['0x140a2ed9f', '0x140a2ef0e'] pred=['0x140a2ea7d']
// BB 0x140a2ed9f-0x140a2eda9 size=10 type=0 succ=['0x140a30b7b'] pred=['0x140a2ed86']
// BB 0x140a2eda9-0x140a2edb5 size=12 type=0 succ=['0x140a2edb5', '0x140a2ef0e'] pred=['0x140a2ea7d']
// BB 0x140a2edb5-0x140a2edc1 size=12 type=0 succ=['0x140a2edc1', '0x140a2ef0e'] pred=['0x140a2eda9']
// BB 0x140a2edc1-0x140a2edcd size=12 type=0 succ=['0x140a2edcd', '0x140a2ef0e'] pred=['0x140a2edb5']
// BB 0x140a2edcd-0x140a2edd7 size=10 type=0 succ=['0x140a30b7b'] pred=['0x140a2edc1']
// BB 0x140a2edd7-0x140a2edde size=7 type=0 succ=['0x140a2edde'] pred=['0x140a2eac6']
// BB 0x140a2edde-0x140a2edeb size=13 type=0 succ=['0x140a2edeb'] pred=['0x140a2edd7']
// BB 0x140a2edeb-0x140a2edef size=4 type=0 succ=['0x140a2edef', '0x140a2edf8'] pred=['0x140a2ea4f', '0x140a2eaf9', '0x140a2edde']
// BB 0x140a2edef-0x140a2edf8 size=9 type=0 succ=['0x140a2ee0d'] pred=['0x140a2edeb']
// BB 0x140a2edf8-0x140a2ee06 size=14 type=0 succ=['0x140a2ee12'] pred=['0x140a2eb0b', '0x140a2edeb']
// BB 0x140a2ee06-0x140a2ee0d size=7 type=0 succ=['0x140a2ee0d'] pred=['0x140a2ea18']
// BB 0x140a2ee0d-0x140a2ee12 size=5 type=0 succ=['0x140a2ee12'] pred=['0x140a2edef', '0x140a2ee06']
// BB 0x140a2ee12-0x140a2ee2d size=27 type=0 succ=['0x140a2ee2d', '0x140a312c5'] pred=['0x140a2e9c3', '0x140a2ea08', '0x140a2ea30', '0x140a2eadc', '0x140a2eb52', '0x140a2edf8', '0x140a2ee0d']
// BB 0x140a2ee2d-0x140a2ee61 size=52 type=0 succ=['0x140a2ee61'] pred=['0x140a2ee12']
// BB 0x140a2ee61-0x140a2ee8c size=43 type=0 succ=['0x140a2ee8c', '0x140a2ee99'] pred=['0x140a2ee2d']
// BB 0x140a2ee8c-0x140a2ee99 size=13 type=0 succ=['0x140a2ee99'] pred=['0x140a2ee61']
// BB 0x140a2ee99-0x140a2eec5 size=44 type=0 succ=['0x140a2eec5'] pred=['0x140a2ee61', '0x140a2ee8c']
// BB 0x140a2eec5-0x140a2eede size=25 type=0 succ=['0x140a2eede'] pred=['0x140a2ee99']
// BB 0x140a2eede-0x140a2eeee size=16 type=0 succ=['0x140a2eeee'] pred=['0x140a2eec5']
// BB 0x140a2eeee-0x140a2ef0e size=32 type=0 succ=['0x140a2ef0e'] pred=['0x140a2eede', '0x140a30df5']
// BB 0x140a2ef0e-0x140a2ef21 size=19 type=0 succ=['0x140a2ef21', '0x140a31114'] pred=['0x140a2dab4', '0x140a2dad6', '0x140a2db09', '0x140a2e7c5', '0x140a2ea61', '0x140a2eaa9', '0x140a2eba9', '0x140a2ed1d', '0x140a2ed2f', '0x140a2ed66', '0x140a2ed86', '0x140a2eda9', '0x140a2edb5', '0x140a2edc1', '0x140a2eeee', '0x140a30dac']
// BB 0x140a2ef21-0x140a2ef28 size=7 type=0 succ=['0x140a2ef28'] pred=['0x140a2ef0e']
// BB 0x140a2ef28-0x140a2ef5d size=53 type=0 succ=['0x140a2ef5d'] pred=['0x140a2ef21', '0x140a31114']
// BB 0x140a2ef5d-0x140a2ef7f size=34 type=0 succ=['0x140a2ef7f', '0x140a2f2f4'] pred=['0x140a2ef28']
// BB 0x140a2ef7f-0x140a2ef88 size=9 type=0 succ=['0x140a2ef88', '0x140a2f2f4'] pred=['0x140a2ef5d']
// BB 0x140a2ef88-0x140a2efb8 size=48 type=0 succ=['0x140a2efb8'] pred=['0x140a2ef7f']
// BB 0x140a2efb8-0x140a2efc8 size=16 type=0 succ=['0x140a2efc8', '0x140a3113e'] pred=['0x140a2ef88']
// BB 0x140a2efc8-0x140a2efcf size=7 type=0 succ=['0x140a2efcf'] pred=['0x140a2efb8']
// BB 0x140a2efcf-0x140a2effb size=44 type=0 succ=['0x140a2effb'] pred=['0x140a2efc8', '0x140a31145']
// BB 0x140a2effb-0x140a2f00b size=16 type=0 succ=['0x140a2f00b', '0x140a31164'] pred=['0x140a2efcf']
// BB 0x140a2f00b-0x140a2f012 size=7 type=0 succ=['0x140a2f012'] pred=['0x140a2effb']
// BB 0x140a2f012-0x140a2f060 size=78 type=0 succ=['0x140a2f060'] pred=['0x140a2f00b', '0x140a3116b']
// BB 0x140a2f060-0x140a2f069 size=9 type=0 succ=['0x140a2f069', '0x140a2f448'] pred=['0x140a2f012', '0x140a2f073', '0x140a2f08d', '0x140a2f092', '0x140a2f099', '0x140a2f0ba', '0x140a2f0d7', '0x140a2f0eb']
// BB 0x140a2f069-0x140a2f073 size=10 type=0 succ=['0x140a2f073'] pred=['0x140a2f060']
// BB 0x140a2f073-0x140a2f08d size=26 type=0 succ=['0x140a2f060', '0x140a2f08d'] pred=['0x140a2f069']
// BB 0x140a2f08d-0x140a2f092 size=5 type=0 succ=['0x140a2f060', '0x140a2f092'] pred=['0x140a2f073']
// BB 0x140a2f092-0x140a2f099 size=7 type=0 succ=['0x140a2f060', '0x140a2f099'] pred=['0x140a2f08d']
// BB 0x140a2f099-0x140a2f0ba size=33 type=0 succ=['0x140a2f060', '0x140a2f0ba'] pred=['0x140a2f092']
// BB 0x140a2f0ba-0x140a2f0d7 size=29 type=0 succ=['0x140a2f060', '0x140a2f0d7'] pred=['0x140a2f099']
// BB 0x140a2f0d7-0x140a2f0dc size=5 type=0 succ=['0x140a2f060', '0x140a2f0dc'] pred=['0x140a2f0ba']
// BB 0x140a2f0dc-0x140a2f0eb size=15 type=0 succ=['0x140a2f0eb'] pred=['0x140a2f0d7']
// BB 0x140a2f0eb-0x140a2f0f4 size=9 type=0 succ=['0x140a2f060', '0x140a2f0f4'] pred=['0x140a2f0dc', '0x140a2f110', '0x140a2f119', '0x140a2f2b1']
// BB 0x140a2f0f4-0x140a2f110 size=28 type=0 succ=['0x140a2f110'] pred=['0x140a2f0eb']
// BB 0x140a2f110-0x140a2f119 size=9 type=0 succ=['0x140a2f0eb', '0x140a2f119'] pred=['0x140a2f0f4']
// BB 0x140a2f119-0x140a2f11e size=5 type=0 succ=['0x140a2f0eb', '0x140a2f11e'] pred=['0x140a2f110']
// BB 0x140a2f11e-0x140a2f12b size=13 type=0 succ=['0x140a2f12b', '0x140a30e0a'] pred=['0x140a2f119']
// BB 0x140a2f12b-0x140a2f12d size=2 type=0 succ=['0x140a2f12d', '0x140a2f18b'] pred=['0x140a2f11e']
// BB 0x140a2f12d-0x140a2f15e size=49 type=0 succ=['0x140a2f15e', '0x140a313c3'] pred=['0x140a2f12b']
// BB 0x140a2f15e-0x140a2f18b size=45 type=0 succ=['0x140a2f190'] pred=['0x140a2f12d']
// BB 0x140a2f18b-0x140a2f190 size=5 type=0 succ=['0x140a2f190'] pred=['0x140a2f12b']
// BB 0x140a2f190-0x140a2f1b3 size=35 type=0 succ=['0x140a2f1b3'] pred=['0x140a2f15e', '0x140a2f18b']
// BB 0x140a2f1b3-0x140a2f1e6 size=51 type=0 succ=['0x140a2f1e6', '0x140a2f2b1'] pred=['0x140a2f190']
// BB 0x140a2f1e6-0x140a2f228 size=66 type=0 succ=['0x140a2f228', '0x140a2f2ba'] pred=['0x140a2f1b3']
// BB 0x140a2f228-0x140a2f240 size=24 type=0 succ=['0x140a2f240', '0x140a2f2dd'] pred=['0x140a2f1e6', '0x140a2f2bf']
// BB 0x140a2f240-0x140a2f2b1 size=113 type=0 succ=['0x140a2f2b1'] pred=['0x140a2f228', '0x140a2f2dd']
// BB 0x140a2f2b1-0x140a2f2ba size=9 type=0 succ=['0x140a2f0eb'] pred=['0x140a2f1b3', '0x140a2f240']
// BB 0x140a2f2ba-0x140a2f2bf size=5 type=0 succ=['0x140a2f2bf'] pred=['0x140a2f1e6']
// BB 0x140a2f2bf-0x140a2f2db size=28 type=0 succ=['0x140a2f228', '0x140a2f2db'] pred=['0x140a2f2ba', '0x140a2f2db']
// BB 0x140a2f2db-0x140a2f2dd size=2 type=0 succ=['0x140a2f2bf'] pred=['0x140a2f2bf']
// BB 0x140a2f2dd-0x140a2f2f4 size=23 type=0 succ=['0x140a2f240'] pred=['0x140a2f228']
// BB 0x140a2f2f4-0x140a2f2f7 size=3 type=0 succ=['0x140a2f2f7'] pred=['0x140a2ef5d', '0x140a2ef7f']
// BB 0x140a2f2f7-0x140a2f31c size=37 type=0 succ=['0x140a2f31c', '0x140a302ca'] pred=['0x140a2f2f4', '0x140a3097b', '0x140a309b0', '0x140a309c0']
// BB 0x140a2f31c-0x140a2f328 size=12 type=0 succ=['0x140a2f328', '0x140a2fe26'] pred=['0x140a2f2f7']
// BB 0x140a2f328-0x140a2f331 size=9 type=0 succ=['0x140a2f331', '0x140a302ca'] pred=['0x140a2f31c']
// BB 0x140a2f331-0x140a2f343 size=18 type=0 succ=['0x140a2f343', '0x140a30116'] pred=['0x140a2f328']
// BB 0x140a2f343-0x140a2f34d size=10 type=0 succ=['0x140a2f34d', '0x140a302ca'] pred=['0x140a2f331']
// BB 0x140a2f34d-0x140a2f360 size=19 type=0 succ=['0x140a2f360', '0x140a302ca'] pred=['0x140a2f343']
// BB 0x140a2f360-0x140a2f393 size=51 type=0 succ=['0x140a2f393', '0x140a312df'] pred=['0x140a2f34d']
// BB 0x140a2f393-0x140a2f3da size=71 type=0 succ=['0x140a2f3da', '0x140a31309'] pred=['0x140a2f360']
// BB 0x140a2f3da-0x140a2f407 size=45 type=0 succ=['0x140a2f407'] pred=['0x140a2f393']
// BB 0x140a2f407-0x140a2f436 size=47 type=0 succ=['0x140a2f436', '0x140a301fe'] pred=['0x140a2f3da']
// BB 0x140a2f436-0x140a2f448 size=18 type=0 succ=['0x140a301fe'] pred=['0x140a2f407']
// BB 0x140a2f448-0x140a2f487 size=63 type=0 succ=['0x140a2f4bd'] pred=['0x140a2f060']
// BB 0x140a2f490-0x140a2f4bd size=45 type=0 succ=['0x140a2f4bd'] pred=['0x140a2f5ae', '0x140a2f5c2']
// BB 0x140a2f4bd-0x140a2f4c0 size=3 type=0 succ=['0x140a2f4c0'] pred=['0x140a2f448', '0x140a2f490', '0x140a2f5d7', '0x140a2f60d', '0x140a2f684', '0x140a2f6b7', '0x140a2fd52', '0x140a2fd62']
// BB 0x140a2f4c0-0x140a2f4c9 size=9 type=0 succ=['0x140a2f4c9', '0x140a2fd79'] pred=['0x140a2f4bd', '0x140a2f58e']
// BB 0x140a2f4c9-0x140a2f4d0 size=7 type=0 succ=['0x140a2f4d0'] pred=['0x140a2f4c0']
// BB 0x140a2f4d0-0x140a2f4ee size=30 type=0 succ=['0x140a2f4ee', '0x140a2f58e'] pred=['0x140a2f4c9']
// BB 0x140a2f4ee-0x140a2f4f7 size=9 type=0 succ=['0x140a2f4f7', '0x140a2f58e'] pred=['0x140a2f4d0']
// BB 0x140a2f4f7-0x140a2f505 size=14 type=0 succ=['0x140a2f505', '0x140a2f51e'] pred=['0x140a2f4ee']
// BB 0x140a2f505-0x140a2f50b size=6 type=0 succ=['0x140a2f50b', '0x140a2f548'] pred=['0x140a2f4f7']
// BB 0x140a2f50b-0x140a2f51e size=19 type=0 succ=['0x140a2f589'] pred=['0x140a2f505']
// BB 0x140a2f51e-0x140a2f543 size=37 type=0 succ=['0x140a2f543', '0x140a2f572'] pred=['0x140a2f4f7']
// BB 0x140a2f543-0x140a2f548 size=5 type=0 succ=['0x140a2f5d0'] pred=['0x140a2f51e']
// BB 0x140a2f548-0x140a2f54a size=2 type=0 succ=['0x140a2f54a', '0x140a2f572'] pred=['0x140a2f505']
// BB 0x140a2f54a-0x140a2f550 size=6 type=0 succ=['0x140a2f550', '0x140a2f58e'] pred=['0x140a2f548']
// BB 0x140a2f550-0x140a2f56d size=29 type=0 succ=['0x140a2f56d', '0x140a2f58e'] pred=['0x140a2f54a']
// BB 0x140a2f56d-0x140a2f572 size=5 type=0 succ=['0x140a2f64d'] pred=['0x140a2f550']
// BB 0x140a2f572-0x140a2f589 size=23 type=0 succ=['0x140a2f589'] pred=['0x140a2f51e', '0x140a2f548']
// BB 0x140a2f589-0x140a2f58e size=5 type=0 succ=['0x140a2f58e', '0x140a2f5d0'] pred=['0x140a2f50b', '0x140a2f572']
// BB 0x140a2f58e-0x140a2f5ae size=32 type=0 succ=['0x140a2f4c0', '0x140a2f5ae'] pred=['0x140a2f4d0', '0x140a2f4ee', '0x140a2f54a', '0x140a2f550', '0x140a2f589']
// BB 0x140a2f5ae-0x140a2f5c2 size=20 type=0 succ=['0x140a2f490', '0x140a2f5c2'] pred=['0x140a2f58e']
// BB 0x140a2f5c2-0x140a2f5d0 size=14 type=0 succ=['0x140a2f490'] pred=['0x140a2f5ae']
// BB 0x140a2f5d0-0x140a2f5d7 size=7 type=0 succ=['0x140a2f5d7'] pred=['0x140a2f543', '0x140a2f589']
// BB 0x140a2f5d7-0x140a2f5f4 size=29 type=0 succ=['0x140a2f4bd', '0x140a2f5f4'] pred=['0x140a2f5d0']
// BB 0x140a2f5f4-0x140a2f604 size=16 type=0 succ=['0x140a2f604', '0x140a2f60d'] pred=['0x140a2f5d7']
// BB 0x140a2f604-0x140a2f60d size=9 type=0 succ=['0x140a2f60d'] pred=['0x140a2f5f4']
// BB 0x140a2f60d-0x140a2f64d size=64 type=0 succ=['0x140a2f4bd'] pred=['0x140a2f5f4', '0x140a2f604']
// BB 0x140a2f64d-0x140a2f654 size=7 type=0 succ=['0x140a2f654'] pred=['0x140a2f56d']
// BB 0x140a2f654-0x140a2f673 size=31 type=0 succ=['0x140a2f673', '0x140a2f682'] pred=['0x140a2f64d']
// BB 0x140a2f673-0x140a2f678 size=5 type=0 succ=['0x140a2f678', '0x140a2f682'] pred=['0x140a2f654']
// BB 0x140a2f678-0x140a2f682 size=10 type=0 succ=['0x140a2f684'] pred=['0x140a2f673']
// BB 0x140a2f682-0x140a2f684 size=2 type=0 succ=['0x140a2f684'] pred=['0x140a2f654', '0x140a2f673']
// BB 0x140a2f684-0x140a2f6b7 size=51 type=0 succ=['0x140a2f4bd', '0x140a2f6b7'] pred=['0x140a2f678', '0x140a2f682']
// BB 0x140a2f6b7-0x140a2f6c0 size=9 type=0 succ=['0x140a2f4bd', '0x140a2f6c0'] pred=['0x140a2f684']
// BB 0x140a2f6c0-0x140a2f6cd size=13 type=0 succ=['0x140a2f6cd', '0x140a2f6f8'] pred=['0x140a2f6b7']
// BB 0x140a2f6cd-0x140a2f6d2 size=5 type=0 succ=['0x140a2f6d2', '0x140a2f708'] pred=['0x140a2f6c0']
// BB 0x140a2f6d2-0x140a2f6f8 size=38 type=0 succ=['0x140a2f7d1'] pred=['0x140a2f6cd']
// BB 0x140a2f6f8-0x140a2f708 size=16 type=0 succ=['0x140a2f708', '0x140a2f76c'] pred=['0x140a2f6c0']
// BB 0x140a2f708-0x140a2f749 size=65 type=0 succ=['0x140a2f749'] pred=['0x140a2f6cd', '0x140a2f6f8']
// BB 0x140a2f749-0x140a2f76c size=35 type=0 succ=['0x140a2f7d1'] pred=['0x140a2f708']
// BB 0x140a2f76c-0x140a2f795 size=41 type=0 succ=['0x140a2f795', '0x140a313db'] pred=['0x140a2f6f8']
// BB 0x140a2f795-0x140a2f7d1 size=60 type=0 succ=['0x140a2f7d1'] pred=['0x140a2f76c']
// BB 0x140a2f7d1-0x140a2f7e7 size=22 type=0 succ=['0x140a2f7e7'] pred=['0x140a2f6d2', '0x140a2f749', '0x140a2f795']
// BB 0x140a2f7e7-0x140a2f7f4 size=13 type=0 succ=['0x140a2f7f4', '0x140a2fd52'] pred=['0x140a2f7d1', '0x140a2f7f4', '0x140a2f815', '0x140a2fd13', '0x140a2fd31']
// BB 0x140a2f7f4-0x140a2f815 size=33 type=0 succ=['0x140a2f7e7', '0x140a2f815'] pred=['0x140a2f7e7']
// BB 0x140a2f815-0x140a2f81a size=5 type=0 succ=['0x140a2f7e7', '0x140a2f81a'] pred=['0x140a2f7f4']
// BB 0x140a2f81a-0x140a2f847 size=45 type=0 succ=['0x140a2f847', '0x140a2f8eb'] pred=['0x140a2f815']
// BB 0x140a2f847-0x140a2f84c size=5 type=0 succ=['0x140a2f84c', '0x140a2f87f'] pred=['0x140a2f81a']
// BB 0x140a2f84c-0x140a2f87f size=51 type=0 succ=['0x140a2f87f', '0x140a2f8eb'] pred=['0x140a2f847']
// BB 0x140a2f87f-0x140a2f8d2 size=83 type=0 succ=['0x140a2f8d2'] pred=['0x140a2f847', '0x140a2f84c']
// BB 0x140a2f8d2-0x140a2f8eb size=25 type=0 succ=['0x140a2f96a'] pred=['0x140a2f87f']
// BB 0x140a2f8eb-0x140a2f8f4 size=9 type=0 succ=['0x140a2f8f4', '0x140a3112a'] pred=['0x140a2f81a', '0x140a2f84c']
// BB 0x140a2f8f4-0x140a2f904 size=16 type=0 succ=['0x140a2f904', '0x140a2f942'] pred=['0x140a2f8eb']
// BB 0x140a2f904-0x140a2f923 size=31 type=0 succ=['0x140a2f923', '0x140a3140d'] pred=['0x140a2f8f4']
// BB 0x140a2f923-0x140a2f942 size=31 type=0 succ=['0x140a2f94e'] pred=['0x140a2f904']
// BB 0x140a2f942-0x140a2f94e size=12 type=0 succ=['0x140a2f94e'] pred=['0x140a2f8f4']
// BB 0x140a2f94e-0x140a2f96a size=28 type=0 succ=['0x140a2f96a'] pred=['0x140a2f923', '0x140a2f942']
// BB 0x140a2f96a-0x140a2f99b size=49 type=0 succ=['0x140a2f99b', '0x140a2fad3'] pred=['0x140a2f8d2', '0x140a2f94e']
// BB 0x140a2f99b-0x140a2f9e4 size=73 type=0 succ=['0x140a2f9e4'] pred=['0x140a2f96a']
// BB 0x140a2f9e4-0x140a2fa03 size=31 type=0 succ=['0x140a2fa03', '0x140a2fa8f'] pred=['0x140a2f99b', '0x140a2faa7']
// BB 0x140a2fa03-0x140a2fa18 size=21 type=0 succ=['0x140a2fa18'] pred=['0x140a2f9e4']
// BB 0x140a2fa18-0x140a2fa40 size=40 type=0 succ=['0x140a2fa40', '0x140a2fa69'] pred=['0x140a2fa03', '0x140a2fa69']
// BB 0x140a2fa40-0x140a2fa69 size=41 type=0 succ=['0x140a2fa69', '0x140a2fac8'] pred=['0x140a2fa18']
// BB 0x140a2fa69-0x140a2fa8f size=38 type=0 succ=['0x140a2fa18', '0x140a2fa8f'] pred=['0x140a2fa18', '0x140a2fa40']
// BB 0x140a2fa8f-0x140a2faa7 size=24 type=0 succ=['0x140a2faa7', '0x140a2fad3'] pred=['0x140a2f9e4', '0x140a2fa69']
// BB 0x140a2faa7-0x140a2fac8 size=33 type=0 succ=['0x140a2f9e4'] pred=['0x140a2fa8f']
// BB 0x140a2fac8-0x140a2fad3 size=11 type=0 succ=['0x140a2fad3', '0x140a2fb73'] pred=['0x140a2fa40']
// BB 0x140a2fad3-0x140a2fae3 size=16 type=0 succ=['0x140a2fae3', '0x140a2fb73'] pred=['0x140a2f96a', '0x140a2fa8f', '0x140a2fac8']
// BB 0x140a2fae3-0x140a2fae8 size=5 type=0 succ=['0x140a2fae8', '0x140a2fafb'] pred=['0x140a2fad3']
// BB 0x140a2fae8-0x140a2faed size=5 type=0 succ=['0x140a2faed', '0x140a2fb12'] pred=['0x140a2fae3']
// BB 0x140a2faed-0x140a2fafb size=14 type=0 succ=['0x140a2fb4e'] pred=['0x140a2fae8']
// BB 0x140a2fafb-0x140a2fb12 size=23 type=0 succ=['0x140a2fb12', '0x140a2fb73'] pred=['0x140a2fae3']
// BB 0x140a2fb12-0x140a2fb31 size=31 type=0 succ=['0x140a2fb31', '0x140a313f2'] pred=['0x140a2fae8', '0x140a2fafb']
// BB 0x140a2fb31-0x140a2fb4e size=29 type=0 succ=['0x140a2fb4e'] pred=['0x140a2fb12']
// BB 0x140a2fb4e-0x140a2fb73 size=37 type=0 succ=['0x140a2fb95'] pred=['0x140a2faed', '0x140a2fb31']
// BB 0x140a2fb73-0x140a2fb7a size=7 type=0 succ=['0x140a2fb7a'] pred=['0x140a2fac8', '0x140a2fad3', '0x140a2fafb']
// BB 0x140a2fb7a-0x140a2fb95 size=27 type=0 succ=['0x140a2fb95'] pred=['0x140a2fb73']
// BB 0x140a2fb95-0x140a2fba5 size=16 type=0 succ=['0x140a2fba5', '0x140a2fbce'] pred=['0x140a2fb4e', '0x140a2fb7a']
// BB 0x140a2fba5-0x140a2fbce size=41 type=0 succ=['0x140a2fbce', '0x140a2fd3d'] pred=['0x140a2fb95']
// BB 0x140a2fbce-0x140a2fbd5 size=7 type=0 succ=['0x140a2fbd5'] pred=['0x140a2fb95', '0x140a2fba5']
// BB 0x140a2fbd5-0x140a2fc3d size=104 type=0 succ=['0x140a2fc3d', '0x140a2fc64'] pred=['0x140a2fbce']
// BB 0x140a2fc3d-0x140a2fc49 size=12 type=0 succ=['0x140a2fc49', '0x140a2fc6b'] pred=['0x140a2fbd5']
// BB 0x140a2fc49-0x140a2fc64 size=27 type=0 succ=['0x140a2fc6b'] pred=['0x140a2fc3d']
// BB 0x140a2fc64-0x140a2fc6b size=7 type=0 succ=['0x140a2fc6b'] pred=['0x140a2fbd5']
// BB 0x140a2fc6b-0x140a2fc74 size=9 type=0 succ=['0x140a2fc74'] pred=['0x140a2fc3d', '0x140a2fc49', '0x140a2fc64']
// BB 0x140a2fc74-0x140a2fc9a size=38 type=0 succ=['0x140a2fc9a', '0x140a2fce0'] pred=['0x140a2fc6b', '0x140a2fd3d']
// BB 0x140a2fc9a-0x140a2fcaa size=16 type=0 succ=['0x140a2fcaa', '0x140a2fcb3'] pred=['0x140a2fc74']
// BB 0x140a2fcaa-0x140a2fcb3 size=9 type=0 succ=['0x140a2fcb3'] pred=['0x140a2fc9a']
// BB 0x140a2fcb3-0x140a2fce0 size=45 type=0 succ=['0x140a2fce0'] pred=['0x140a2fc9a', '0x140a2fcaa']
// BB 0x140a2fce0-0x140a2fcec size=12 type=0 succ=['0x140a2fcec', '0x140a2fcfe'] pred=['0x140a2fc74', '0x140a2fcb3']
// BB 0x140a2fcec-0x140a2fcfe size=18 type=0 succ=['0x140a2fcfe'] pred=['0x140a2fce0']
// BB 0x140a2fcfe-0x140a2fd07 size=9 type=0 succ=['0x140a2fd07', '0x140a2fd31'] pred=['0x140a2fce0', '0x140a2fcec']
// BB 0x140a2fd07-0x140a2fd13 size=12 type=0 succ=['0x140a2fd13', '0x140a2fd31'] pred=['0x140a2fcfe']
// BB 0x140a2fd13-0x140a2fd31 size=30 type=0 succ=['0x140a2f7e7'] pred=['0x140a2fd07']
// BB 0x140a2fd31-0x140a2fd3d size=12 type=0 succ=['0x140a2f7e7'] pred=['0x140a2fcfe', '0x140a2fd07']
// BB 0x140a2fd3d-0x140a2fd52 size=21 type=0 succ=['0x140a2fc74'] pred=['0x140a2fba5']
// BB 0x140a2fd52-0x140a2fd62 size=16 type=0 succ=['0x140a2f4bd', '0x140a2fd62'] pred=['0x140a2f7e7']
// BB 0x140a2fd62-0x140a2fd79 size=23 type=0 succ=['0x140a2f4bd'] pred=['0x140a2fd52']
// BB 0x140a2fd79-0x140a2fd9e size=37 type=0 succ=['0x140a2fd9e'] pred=['0x140a2f4c0']
// BB 0x140a2fd9e-0x140a2fdae size=16 type=0 succ=['0x140a2fdae', '0x140a3118a'] pred=['0x140a2fd79']
// BB 0x140a2fdae-0x140a2fdb5 size=7 type=0 succ=['0x140a2fdb5'] pred=['0x140a2fd9e']
// BB 0x140a2fdb5-0x140a2fdf1 size=60 type=0 succ=['0x140a2fdf1', '0x140a2fec1'] pred=['0x140a2fdae', '0x140a31191']
// BB 0x140a2fdf1-0x140a2fe0c size=27 type=0 succ=['0x140a2fe0c', '0x140a2fec6'] pred=['0x140a2fdb5']
// BB 0x140a2fe0c-0x140a2fe13 size=7 type=0 succ=['0x140a2fe13'] pred=['0x140a2fdf1']
// BB 0x140a2fe13-0x140a2fe20 size=13 type=4 succ=[] pred=['0x140a2fe0c']
// BB 0x140a2fe21-0x140a2fe26 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a2fe26-0x140a2fe44 size=30 type=0 succ=['0x140a2fe44', '0x140a302ca'] pred=['0x140a2f31c']
// BB 0x140a2fe44-0x140a2fe4d size=9 type=0 succ=['0x140a2fe4d', '0x140a302ca'] pred=['0x140a2fe26']
// BB 0x140a2fe4d-0x140a2fe58 size=11 type=0 succ=['0x140a2fe58', '0x140a302ca'] pred=['0x140a2fe44']
// BB 0x140a2fe58-0x140a2fe6f size=23 type=0 succ=['0x140a2fe6f', '0x140a302ca'] pred=['0x140a2fe4d']
// BB 0x140a2fe6f-0x140a2fe8d size=30 type=0 succ=['0x140a2fe8d', '0x140a309db'] pred=['0x140a2fe58']
// BB 0x140a2fe8d-0x140a2feab size=30 type=0 succ=['0x140a2feab', '0x140a309db'] pred=['0x140a2fe6f']
// BB 0x140a2feab-0x140a2feb4 size=9 type=0 succ=['0x140a2feb4', '0x140a309db'] pred=['0x140a2fe8d']
// BB 0x140a2feb4-0x140a2fec1 size=13 type=0 succ=['0x140a309dd'] pred=['0x140a2feab']
// BB 0x140a2fec1-0x140a2fec6 size=5 type=0 succ=['0x140a2fec6'] pred=['0x140a2fdb5']
// BB 0x140a2fec6-0x140a2ff45 size=127 type=0 succ=['0x140a2ff45', '0x140a30606'] pred=['0x140a2fdf1', '0x140a2fec1']
// BB 0x140a2ff45-0x140a2ff75 size=48 type=0 succ=['0x140a2ff75', '0x140a3060b'] pred=['0x140a2fec6', '0x140a300cc']
// BB 0x140a2ff75-0x140a2ff99 size=36 type=0 succ=['0x140a2ff99'] pred=['0x140a2ff45']
// BB 0x140a2ff99-0x140a2ffaa size=17 type=0 succ=['0x140a2ffaa'] pred=['0x140a2ff75']
// BB 0x140a2ffaa-0x140a2ffb3 size=9 type=0 succ=['0x140a2ffb3', '0x140a30074'] pred=['0x140a2ff99']
// BB 0x140a2ffb3-0x140a2ffbc size=9 type=0 succ=['0x140a2ffbc', '0x140a30074'] pred=['0x140a2ffaa']
// BB 0x140a2ffbc-0x140a2ffc9 size=13 type=0 succ=['0x140a2ffc9', '0x140a300fb'] pred=['0x140a2ffb3']
// BB 0x140a2ffc9-0x140a2ffd6 size=13 type=0 succ=['0x140a2ffd6', '0x140a30074'] pred=['0x140a2ffbc']
// BB 0x140a2ffd6-0x140a30000 size=42 type=0 succ=['0x140a30000', '0x140a31425'] pred=['0x140a2ffc9']
// BB 0x140a30000-0x140a30051 size=81 type=0 succ=['0x140a30051'] pred=['0x140a2ffd6']
// BB 0x140a30051-0x140a30069 size=24 type=0 succ=['0x140a30069', '0x140a300e0'] pred=['0x140a30000']
// BB 0x140a30069-0x140a30074 size=11 type=0 succ=['0x140a300cc'] pred=['0x140a30051']
// BB 0x140a30074-0x140a30090 size=28 type=0 succ=['0x140a30090', '0x140a30099'] pred=['0x140a2ffaa', '0x140a2ffb3', '0x140a2ffc9']
// BB 0x140a30090-0x140a30099 size=9 type=0 succ=['0x140a30099'] pred=['0x140a30074']
// BB 0x140a30099-0x140a300cc size=51 type=0 succ=['0x140a300cc'] pred=['0x140a30074', '0x140a30090', '0x140a300e0', '0x140a300f0']
// BB 0x140a300cc-0x140a300db size=15 type=0 succ=['0x140a2ff45', '0x140a300db'] pred=['0x140a30069', '0x140a30099']
// BB 0x140a300db-0x140a300e0 size=5 type=0 succ=['0x140a30606'] pred=['0x140a300cc']
// BB 0x140a300e0-0x140a300f0 size=16 type=0 succ=['0x140a30099', '0x140a300f0'] pred=['0x140a30051']
// BB 0x140a300f0-0x140a300fb size=11 type=0 succ=['0x140a30099'] pred=['0x140a300e0']
// BB 0x140a300fb-0x140a300fd size=2 type=0 succ=['0x140a300fd'] pred=['0x140a2ffbc']
// BB 0x140a300fd-0x140a30104 size=7 type=0 succ=['0x140a30104'] pred=['0x140a300fb', '0x140a31425']
// BB 0x140a30104-0x140a30110 size=12 type=4 succ=[] pred=['0x140a300fd']
// BB 0x140a30111-0x140a30116 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a30116-0x140a30122 size=12 type=0 succ=['0x140a30122', '0x140a302ca'] pred=['0x140a2f331']
// BB 0x140a30122-0x140a30155 size=51 type=0 succ=['0x140a30155', '0x140a312f4'] pred=['0x140a30116']
// BB 0x140a30155-0x140a3019c size=71 type=0 succ=['0x140a3019c', '0x140a3131e'] pred=['0x140a30122']
// BB 0x140a3019c-0x140a301c6 size=42 type=0 succ=['0x140a301c6'] pred=['0x140a30155']
// BB 0x140a301c6-0x140a301f1 size=43 type=0 succ=['0x140a301f1', '0x140a301fe'] pred=['0x140a3019c']
// BB 0x140a301f1-0x140a301fe size=13 type=0 succ=['0x140a301fe'] pred=['0x140a301c6']
// BB 0x140a301fe-0x140a30248 size=74 type=0 succ=['0x140a30248'] pred=['0x140a2f407', '0x140a2f436', '0x140a301c6', '0x140a301f1']
// BB 0x140a30248-0x140a30281 size=57 type=0 succ=['0x140a30281'] pred=['0x140a301fe', '0x140a31106']
// BB 0x140a30281-0x140a3029a size=25 type=0 succ=['0x140a3029a'] pred=['0x140a30248']
// BB 0x140a3029a-0x140a302ca size=48 type=0 succ=['0x140a302ca'] pred=['0x140a30281']
// BB 0x140a302ca-0x140a302d4 size=10 type=0 succ=['0x140a302d4', '0x140a30430'] pred=['0x140a2f2f7', '0x140a2f328', '0x140a2f343', '0x140a2f34d', '0x140a2fe26', '0x140a2fe44', '0x140a2fe4d', '0x140a2fe58', '0x140a30116', '0x140a3029a', '0x140a309e6', '0x140a3110f']
// BB 0x140a302d4-0x140a302ed size=25 type=0 succ=['0x140a302ed'] pred=['0x140a302ca']
// BB 0x140a302ed-0x140a3030b size=30 type=0 succ=['0x140a3030b', '0x140a3035d'] pred=['0x140a302d4']
// BB 0x140a3030b-0x140a30310 size=5 type=0 succ=['0x140a30310', '0x140a3035d'] pred=['0x140a302ed']
// BB 0x140a30310-0x140a3035b size=75 type=0 succ=['0x140a3035b'] pred=['0x140a3030b']
// BB 0x140a3035b-0x140a3035d size=2 type=0 succ=['0x140a303af'] pred=['0x140a30310']
// BB 0x140a3035d-0x140a3037a size=29 type=0 succ=['0x140a3037a', '0x140a31271'] pred=['0x140a302ed', '0x140a3030b']
// BB 0x140a3037a-0x140a303af size=53 type=0 succ=['0x140a303af'] pred=['0x140a3035d']
// BB 0x140a303af-0x140a303e7 size=56 type=0 succ=['0x140a303e7'] pred=['0x140a3035b', '0x140a3037a']
// BB 0x140a303e7-0x140a30400 size=25 type=0 succ=['0x140a30400'] pred=['0x140a303af']
// BB 0x140a30400-0x140a30430 size=48 type=0 succ=['0x140a30430'] pred=['0x140a303e7']
// BB 0x140a30430-0x140a30460 size=48 type=0 succ=['0x140a30460', '0x140a30489'] pred=['0x140a302ca', '0x140a30400']
// BB 0x140a30460-0x140a3047a size=26 type=0 succ=['0x140a3047a', '0x140a30489'] pred=['0x140a30430']
// BB 0x140a3047a-0x140a3047f size=5 type=0 succ=['0x140a3047f', '0x140a30489'] pred=['0x140a30460']
// BB 0x140a3047f-0x140a30489 size=10 type=0 succ=['0x140a3048b'] pred=['0x140a3047a']
// BB 0x140a30489-0x140a3048b size=2 type=0 succ=['0x140a3048b'] pred=['0x140a30430', '0x140a30460', '0x140a3047a']
// BB 0x140a3048b-0x140a3049c size=17 type=0 succ=['0x140a3049c', '0x140a304af'] pred=['0x140a3047f', '0x140a30489']
// BB 0x140a3049c-0x140a3049e size=2 type=0 succ=['0x140a3049e'] pred=['0x140a3048b']
// BB 0x140a3049e-0x140a304a9 size=11 type=4 succ=[] pred=['0x140a3049c', '0x140a304b8']
// BB 0x140a304aa-0x140a304af size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a304af-0x140a304b8 size=9 type=0 succ=['0x140a304b8', '0x140a31505'] pred=['0x140a3048b']
// BB 0x140a304b8-0x140a304d7 size=31 type=0 succ=['0x140a3049e', '0x140a304d7'] pred=['0x140a304af']
// BB 0x140a304d7-0x140a304ee size=23 type=0 succ=['0x140a304ee', '0x140a304f5'] pred=['0x140a304b8']
// BB 0x140a304ee-0x140a304f5 size=7 type=0 succ=['0x140a3143f'] pred=['0x140a304d7']
// BB 0x140a304f5-0x140a304fb size=6 type=0 succ=['0x140a304fb', '0x140a30502'] pred=['0x140a304d7']
// BB 0x140a304fb-0x140a30502 size=7 type=0 succ=['0x140a3059d'] pred=['0x140a304f5']
// BB 0x140a30502-0x140a30530 size=46 type=0 succ=['0x140a30530'] pred=['0x140a304f5']
// BB 0x140a30530-0x140a3058b size=91 type=0 succ=['0x140a3058b', '0x140a30530'] pred=['0x140a30502', '0x140a30530']
// BB 0x140a3058b-0x140a30594 size=9 type=0 succ=['0x140a30594', '0x140a3145e'] pred=['0x140a30530']
// BB 0x140a30594-0x140a3059d size=9 type=0 succ=['0x140a3059d', '0x140a3143f'] pred=['0x140a3058b']
// BB 0x140a3059d-0x140a305d0 size=51 type=0 succ=['0x140a305d0'] pred=['0x140a304fb', '0x140a30594']
// BB 0x140a305d0-0x140a30601 size=49 type=0 succ=['0x140a30601', '0x140a305d0'] pred=['0x140a3059d', '0x140a305d0']
// BB 0x140a30601-0x140a30606 size=5 type=0 succ=['0x140a31459'] pred=['0x140a305d0']
// BB 0x140a30606-0x140a3060b size=5 type=0 succ=['0x140a3060e'] pred=['0x140a2fec6', '0x140a300db']
// BB 0x140a3060b-0x140a3060e size=3 type=0 succ=['0x140a3060e'] pred=['0x140a2ff45']
// BB 0x140a3060e-0x140a30640 size=50 type=0 succ=['0x140a30640'] pred=['0x140a30606', '0x140a3060b']
// BB 0x140a30640-0x140a30650 size=16 type=0 succ=['0x140a30650', '0x140a30669'] pred=['0x140a3060e', '0x140a3065e']
// BB 0x140a30650-0x140a3065e size=14 type=0 succ=['0x140a3065e'] pred=['0x140a30640']
// BB 0x140a3065e-0x140a30669 size=11 type=0 succ=['0x140a30640'] pred=['0x140a30650']
// BB 0x140a30669-0x140a30675 size=12 type=0 succ=['0x140a30675', '0x140a3068b'] pred=['0x140a30640']
// BB 0x140a30675-0x140a3068b size=22 type=0 succ=['0x140a3068b'] pred=['0x140a30669']
// BB 0x140a3068b-0x140a306b9 size=46 type=0 succ=['0x140a306b9', '0x140a30781'] pred=['0x140a30669', '0x140a30675']
// BB 0x140a306b9-0x140a306c9 size=16 type=0 succ=['0x140a306c9', '0x140a30749'] pred=['0x140a3068b']
// BB 0x140a306c9-0x140a306e2 size=25 type=0 succ=['0x140a306f4'] pred=['0x140a306b9']
// BB 0x140a306e2-0x140a306f4 size=18 type=0 succ=['0x140a306f4', '0x140a30749'] pred=['0x140a3071e', '0x140a30734']
// BB 0x140a306f4-0x140a306fa size=6 type=0 succ=['0x140a306fa', '0x140a3071e'] pred=['0x140a306c9', '0x140a306e2']
// BB 0x140a306fa-0x140a30700 size=6 type=0 succ=['0x140a30700'] pred=['0x140a306f4']
// BB 0x140a30700-0x140a3071e size=30 type=0 succ=['0x140a3071e', '0x140a30700'] pred=['0x140a306fa', '0x140a30700']
// BB 0x140a3071e-0x140a30734 size=22 type=0 succ=['0x140a306e2', '0x140a30734'] pred=['0x140a306f4', '0x140a30700']
// BB 0x140a30734-0x140a30749 size=21 type=0 succ=['0x140a306e2'] pred=['0x140a3071e']
// BB 0x140a30749-0x140a30769 size=32 type=0 succ=['0x140a30769', '0x140a30781'] pred=['0x140a306b9', '0x140a306e2']
// BB 0x140a30769-0x140a30781 size=24 type=0 succ=['0x140a30781'] pred=['0x140a30749']
// BB 0x140a30781-0x140a307e0 size=95 type=0 succ=['0x140a307e0', '0x140a308ac'] pred=['0x140a3068b', '0x140a30749', '0x140a30769']
// BB 0x140a307e0-0x140a307f3 size=19 type=0 succ=['0x140a307f3', '0x140a30876'] pred=['0x140a30781']
// BB 0x140a307f3-0x140a3080d size=26 type=0 succ=['0x140a30820'] pred=['0x140a307e0']
// BB 0x140a3080d-0x140a30820 size=19 type=0 succ=['0x140a30820', '0x140a30876'] pred=['0x140a3084e', '0x140a30865']
// BB 0x140a30820-0x140a30826 size=6 type=0 succ=['0x140a30826', '0x140a3084e'] pred=['0x140a307f3', '0x140a3080d']
// BB 0x140a30826-0x140a30830 size=10 type=0 succ=['0x140a30830'] pred=['0x140a30820']
// BB 0x140a30830-0x140a3084e size=30 type=0 succ=['0x140a3084e', '0x140a30830'] pred=['0x140a30826', '0x140a30830']
// BB 0x140a3084e-0x140a30865 size=23 type=0 succ=['0x140a3080d', '0x140a30865'] pred=['0x140a30820', '0x140a30830']
// BB 0x140a30865-0x140a30876 size=17 type=0 succ=['0x140a3080d'] pred=['0x140a3084e']
// BB 0x140a30876-0x140a30890 size=26 type=0 succ=['0x140a30890', '0x140a308ac'] pred=['0x140a307e0', '0x140a3080d']
// BB 0x140a30890-0x140a308ac size=28 type=0 succ=['0x140a308ac'] pred=['0x140a30876']
// BB 0x140a308ac-0x140a308e8 size=60 type=0 succ=['0x140a308e8'] pred=['0x140a30781', '0x140a30876', '0x140a30890']
// BB 0x140a308e8-0x140a30936 size=78 type=0 succ=['0x140a30936', '0x140a309b0'] pred=['0x140a308ac']
// BB 0x140a30936-0x140a30962 size=44 type=0 succ=['0x140a30962'] pred=['0x140a308e8']
// BB 0x140a30962-0x140a3097b size=25 type=0 succ=['0x140a3097b'] pred=['0x140a30936']
// BB 0x140a3097b-0x140a309b0 size=53 type=0 succ=['0x140a2f2f7'] pred=['0x140a30962']
// BB 0x140a309b0-0x140a309c0 size=16 type=0 succ=['0x140a2f2f7', '0x140a309c0'] pred=['0x140a308e8']
// BB 0x140a309c0-0x140a309db size=27 type=0 succ=['0x140a2f2f7'] pred=['0x140a309b0']
// BB 0x140a309db-0x140a309dd size=2 type=0 succ=['0x140a309dd'] pred=['0x140a2fe6f', '0x140a2fe8d', '0x140a2feab']
// BB 0x140a309dd-0x140a309e6 size=9 type=0 succ=['0x140a309e6'] pred=['0x140a2feb4', '0x140a309db']
// BB 0x140a309e6-0x140a309f2 size=12 type=0 succ=['0x140a302ca', '0x140a309f2'] pred=['0x140a309dd']
// BB 0x140a309f2-0x140a30a2e size=60 type=0 succ=['0x140a30a2e', '0x140a311b0'] pred=['0x140a309e6']
// BB 0x140a30a2e-0x140a30a3a size=12 type=0 succ=['0x140a30a3a', '0x140a30a48'] pred=['0x140a309f2']
// BB 0x140a30a3a-0x140a30a48 size=14 type=0 succ=['0x140a30a48'] pred=['0x140a30a2e']
// BB 0x140a30a48-0x140a30a58 size=16 type=0 succ=['0x140a30a58', '0x140a30e3d'] pred=['0x140a30a2e', '0x140a30a3a']
// BB 0x140a30a58-0x140a30a83 size=43 type=0 succ=['0x140a30a97'] pred=['0x140a30a48']
// BB 0x140a30a83-0x140a30a97 size=20 type=0 succ=['0x140a30a97', '0x140a30e25'] pred=['0x140a30abe', '0x140a30ad5']
// BB 0x140a30a97-0x140a30a9d size=6 type=0 succ=['0x140a30a9d', '0x140a30abe'] pred=['0x140a30a58', '0x140a30a83']
// BB 0x140a30a9d-0x140a30aa0 size=3 type=0 succ=['0x140a30aa0'] pred=['0x140a30a97']
// BB 0x140a30aa0-0x140a30abe size=30 type=0 succ=['0x140a30abe', '0x140a30aa0'] pred=['0x140a30a9d', '0x140a30aa0']
// BB 0x140a30abe-0x140a30ad5 size=23 type=0 succ=['0x140a30a83', '0x140a30ad5'] pred=['0x140a30a97', '0x140a30aa0']
// BB 0x140a30ad5-0x140a30aef size=26 type=0 succ=['0x140a30a83', '0x140a30aef'] pred=['0x140a30abe']
// BB 0x140a30aef-0x140a30b0f size=32 type=0 succ=['0x140a30b0f'] pred=['0x140a30ad5']
// BB 0x140a30b0f-0x140a30b3c size=45 type=0 succ=['0x140a30b3c', '0x140a30b4e'] pred=['0x140a30aef']
// BB 0x140a30b3c-0x140a30b4e size=18 type=0 succ=['0x140a30b4e'] pred=['0x140a30b0f']
// BB 0x140a30b4e-0x140a30b6f size=33 type=0 succ=['0x140a30e3d'] pred=['0x140a30b0f', '0x140a30b3c']
// BB 0x140a30b6f-0x140a30b76 size=7 type=0 succ=['0x140a30b7b'] pred=['0x140a2ed50']
// BB 0x140a30b76-0x140a30b7b size=5 type=0 succ=['0x140a30b7b'] pred=['0x140a2ea91']
// BB 0x140a30b7b-0x140a30bae size=51 type=0 succ=['0x140a30bae', '0x140a31333'] pred=['0x140a2ed46', '0x140a2ed7c', '0x140a2ed9f', '0x140a2edcd', '0x140a30b6f', '0x140a30b76']
// BB 0x140a30bae-0x140a30bf5 size=71 type=0 succ=['0x140a30bf5', '0x140a31348'] pred=['0x140a30b7b']
// BB 0x140a30bf5-0x140a30c26 size=49 type=0 succ=['0x140a30c26'] pred=['0x140a30bae']
// BB 0x140a30c26-0x140a30c51 size=43 type=0 succ=['0x140a30c51', '0x140a30c5e'] pred=['0x140a30bf5']
// BB 0x140a30c51-0x140a30c5e size=13 type=0 succ=['0x140a30c5e'] pred=['0x140a30c26']
// BB 0x140a30c5e-0x140a30c7b size=29 type=0 succ=['0x140a30c7b', '0x140a3135d'] pred=['0x140a30c26', '0x140a30c51']
// BB 0x140a30c7b-0x140a30cf7 size=124 type=0 succ=['0x140a30cf7', '0x140a30d04'] pred=['0x140a30c5e']
// BB 0x140a30cf7-0x140a30d04 size=13 type=0 succ=['0x140a30d04'] pred=['0x140a30c7b']
// BB 0x140a30d04-0x140a30d30 size=44 type=0 succ=['0x140a30d30'] pred=['0x140a30c7b', '0x140a30cf7']
// BB 0x140a30d30-0x140a30d49 size=25 type=0 succ=['0x140a30d49'] pred=['0x140a30d04']
// BB 0x140a30d49-0x140a30d79 size=48 type=0 succ=['0x140a30d79'] pred=['0x140a30d30']
// BB 0x140a30d79-0x140a30d9c size=35 type=0 succ=['0x140a30d9c', '0x140a30dac'] pred=['0x140a30d49']
// BB 0x140a30d9c-0x140a30da1 size=5 type=0 succ=['0x140a30da1', '0x140a30dac'] pred=['0x140a30d79']
// BB 0x140a30da1-0x140a30da8 size=7 type=0 succ=['0x140a30da8', '0x140a30dac'] pred=['0x140a30d9c']
// BB 0x140a30da8-0x140a30dac size=4 type=0 succ=['0x140a30dac'] pred=['0x140a30da1']
// BB 0x140a30dac-0x140a30db5 size=9 type=0 succ=['0x140a2ef0e', '0x140a30db5'] pred=['0x140a30d79', '0x140a30d9c', '0x140a30da1', '0x140a30da8']
// BB 0x140a30db5-0x140a30ddc size=39 type=0 succ=['0x140a30ddc'] pred=['0x140a30dac']
// BB 0x140a30ddc-0x140a30df5 size=25 type=0 succ=['0x140a30df5'] pred=['0x140a30db5']
// BB 0x140a30df5-0x140a30e0a size=21 type=0 succ=['0x140a2eeee'] pred=['0x140a30ddc']
// BB 0x140a30e0a-0x140a30e0c size=2 type=0 succ=['0x140a30e0c'] pred=['0x140a2f11e']
// BB 0x140a30e0c-0x140a30e13 size=7 type=0 succ=['0x140a30e13'] pred=['0x140a30e0a', '0x140a313c3']
// BB 0x140a30e13-0x140a30e1f size=12 type=4 succ=[] pred=['0x140a30e0c']
// BB 0x140a30e20-0x140a30e25 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a30e25-0x140a30e3d size=24 type=0 succ=['0x140a30e3d'] pred=['0x140a30a83']
// BB 0x140a30e3d-0x140a30e80 size=67 type=0 succ=['0x140a30e80', '0x140a311c9'] pred=['0x140a30a48', '0x140a30b4e', '0x140a30e25']
// BB 0x140a30e80-0x140a30e97 size=23 type=0 succ=['0x140a30e97', '0x140a310c9'] pred=['0x140a30e3d']
// BB 0x140a30e97-0x140a30efe size=103 type=0 succ=['0x140a30efe', '0x140a3139c'] pred=['0x140a30e80']
// BB 0x140a30efe-0x140a30f28 size=42 type=0 succ=['0x140a30f28'] pred=['0x140a30e97']
// BB 0x140a30f28-0x140a30f49 size=33 type=0 succ=['0x140a30f49', '0x140a311f3'] pred=['0x140a30efe']
// BB 0x140a30f49-0x140a30f9b size=82 type=0 succ=['0x140a30f9b', '0x140a30fa8'] pred=['0x140a30f28']
// BB 0x140a30f9b-0x140a30fa8 size=13 type=0 succ=['0x140a30fa8'] pred=['0x140a30f49']
// BB 0x140a30fa8-0x140a30fc5 size=29 type=0 succ=['0x140a30fc5', '0x140a313b1'] pred=['0x140a30f49', '0x140a30f9b']
// BB 0x140a30fc5-0x140a30fef size=42 type=0 succ=['0x140a30fef'] pred=['0x140a30fa8']
// BB 0x140a30fef-0x140a31010 size=33 type=0 succ=['0x140a31010', '0x140a31232'] pred=['0x140a30fc5']
// BB 0x140a31010-0x140a31062 size=82 type=0 succ=['0x140a31062', '0x140a3106f'] pred=['0x140a30fef']
// BB 0x140a31062-0x140a3106f size=13 type=0 succ=['0x140a3106f'] pred=['0x140a31010']
// BB 0x140a3106f-0x140a310c9 size=90 type=0 succ=['0x140a310d2'] pred=['0x140a31010', '0x140a31062']
// BB 0x140a310c9-0x140a310d2 size=9 type=0 succ=['0x140a310d2'] pred=['0x140a30e80']
// BB 0x140a310d2-0x140a310d7 size=5 type=0 succ=['0x140a310d7', '0x140a310ec'] pred=['0x140a3106f', '0x140a310c9']
// BB 0x140a310d7-0x140a310ec size=21 type=0 succ=['0x140a310ec'] pred=['0x140a310d2']
// BB 0x140a310ec-0x140a310f8 size=12 type=0 succ=['0x140a310f8', '0x140a31106'] pred=['0x140a310d2', '0x140a310d7']
// BB 0x140a310f8-0x140a31106 size=14 type=0 succ=['0x140a31106'] pred=['0x140a310ec']
// BB 0x140a31106-0x140a3110f size=9 type=0 succ=['0x140a30248', '0x140a3110f'] pred=['0x140a310ec', '0x140a310f8']
// BB 0x140a3110f-0x140a31114 size=5 type=0 succ=['0x140a302ca'] pred=['0x140a31106']
// BB 0x140a31114-0x140a3112a size=22 type=0 succ=['0x140a2ef28'] pred=['0x140a2ef0e']
// BB 0x140a3112a-0x140a3112c size=2 type=0 succ=['0x140a3112c'] pred=['0x140a2f8eb']
// BB 0x140a3112c-0x140a31138 size=12 type=4 succ=[] pred=['0x140a3112a', '0x140a3140d']
// BB 0x140a31139-0x140a3113e size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3113e-0x140a31145 size=7 type=0 succ=['0x140a31145'] pred=['0x140a2efb8']
// BB 0x140a31145-0x140a31164 size=31 type=0 succ=['0x140a2efcf'] pred=['0x140a3113e']
// BB 0x140a31164-0x140a3116b size=7 type=0 succ=['0x140a3116b'] pred=['0x140a2effb']
// BB 0x140a3116b-0x140a3118a size=31 type=0 succ=['0x140a2f012'] pred=['0x140a31164']
// BB 0x140a3118a-0x140a31191 size=7 type=0 succ=['0x140a31191'] pred=['0x140a2fd9e']
// BB 0x140a31191-0x140a311b0 size=31 type=0 succ=['0x140a2fdb5'] pred=['0x140a3118a']
// BB 0x140a311b0-0x140a311b7 size=7 type=0 succ=['0x140a311b7'] pred=['0x140a309f2']
// BB 0x140a311b7-0x140a311c3 size=12 type=4 succ=[] pred=['0x140a311b0']
// BB 0x140a311c4-0x140a311c9 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a311c9-0x140a311e5 size=28 type=0 succ=['0x140a311e5'] pred=['0x140a30e3d']
// BB 0x140a311e5-0x140a311ed size=8 type=4 succ=[] pred=['0x140a311c9']
// BB 0x140a311ee-0x140a311f3 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a311f3-0x140a31201 size=14 type=0 succ=['0x140a31201'] pred=['0x140a30f28']
// BB 0x140a31201-0x140a3122c size=43 type=4 succ=[] pred=['0x140a311f3']
// BB 0x140a3122d-0x140a31232 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31232-0x140a31240 size=14 type=0 succ=['0x140a31240'] pred=['0x140a30fef']
// BB 0x140a31240-0x140a3126b size=43 type=4 succ=[] pred=['0x140a31232']
// BB 0x140a3126c-0x140a31271 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31271-0x140a31280 size=15 type=4 succ=[] pred=['0x140a3035d']
// BB 0x140a31281-0x140a31286 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31286-0x140a31295 size=15 type=4 succ=[] pred=['0x140a2e833']
// BB 0x140a31296-0x140a3129b size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3129b-0x140a312aa size=15 type=4 succ=[] pred=['0x140a2e866']
// BB 0x140a312ab-0x140a312b0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a312b0-0x140a312bf size=15 type=4 succ=[] pred=['0x140a2e95b']
// BB 0x140a312c0-0x140a312c5 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a312c5-0x140a312cc size=7 type=0 succ=['0x140a312cc'] pred=['0x140a2ee12']
// BB 0x140a312cc-0x140a312d9 size=13 type=4 succ=[] pred=['0x140a312c5']
// BB 0x140a312da-0x140a312df size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a312df-0x140a312ee size=15 type=4 succ=[] pred=['0x140a2f360']
// BB 0x140a312ef-0x140a312f4 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a312f4-0x140a31303 size=15 type=4 succ=[] pred=['0x140a30122']
// BB 0x140a31304-0x140a31309 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31309-0x140a31318 size=15 type=4 succ=[] pred=['0x140a2f393']
// BB 0x140a31319-0x140a3131e size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3131e-0x140a3132d size=15 type=4 succ=[] pred=['0x140a30155']
// BB 0x140a3132e-0x140a31333 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31333-0x140a31342 size=15 type=4 succ=[] pred=['0x140a30b7b']
// BB 0x140a31343-0x140a31348 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31348-0x140a31357 size=15 type=4 succ=[] pred=['0x140a30bae']
// BB 0x140a31358-0x140a3135d size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3135d-0x140a3136c size=15 type=4 succ=[] pred=['0x140a30c5e']
// BB 0x140a3136d-0x140a31372 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31372-0x140a31381 size=15 type=4 succ=[] pred=['0x140a2ebc5']
// BB 0x140a31382-0x140a31387 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31387-0x140a31396 size=15 type=4 succ=[] pred=['0x140a2ebf8']
// BB 0x140a31397-0x140a3139c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3139c-0x140a313ab size=15 type=4 succ=[] pred=['0x140a30e97']
// BB 0x140a313ac-0x140a313b1 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a313b1-0x140a313c0 size=15 type=4 succ=[] pred=['0x140a30fa8']
// BB 0x140a313c1-0x140a313c3 size=2 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a313c3-0x140a313db size=24 type=0 succ=['0x140a30e0c'] pred=['0x140a2f12d']
// BB 0x140a313db-0x140a313e2 size=7 type=0 succ=['0x140a313e2'] pred=['0x140a2f76c']
// BB 0x140a313e2-0x140a313ef size=13 type=4 succ=[] pred=['0x140a313db']
// BB 0x140a313f0-0x140a313f2 size=2 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a313f2-0x140a313f9 size=7 type=0 succ=['0x140a313f9'] pred=['0x140a2fb12']
// BB 0x140a313f9-0x140a3140a size=17 type=4 succ=[] pred=['0x140a313f2']
// BB 0x140a3140b-0x140a3140d size=2 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a3140d-0x140a31425 size=24 type=0 succ=['0x140a3112c'] pred=['0x140a2f904']
// BB 0x140a31425-0x140a3143d size=24 type=0 succ=['0x140a300fd'] pred=['0x140a2ffd6']
// BB 0x140a3143d-0x140a3143f size=2 type=0 succ=[] pred=['0x140a2d12b', '0x140a2d373', '0x140a2d398', '0x140a2d3af', '0x140a2db04', '0x140a2dc75', '0x140a2dc90', '0x140a2dcab', '0x140a2dcc5', '0x140a2dce0', '0x140a2dd1f', '0x140a2dd5e', '0x140a2dd7a', '0x140a2ddb9', '0x140a2ddf8', '0x140a2de37', '0x140a2de76', '0x140a2deb5', '0x140a2def4', '0x140a2df33', '0x140a2df4c', '0x140a2df5e', '0x140a2df70', '0x140a2df93', '0x140a2dfc4', '0x140a2dfd9', '0x140a2dfee', '0x140a2e003', '0x140a2e01d', '0x140a2e05c', '0x140a2e09b', '0x140a2e0da', '0x140a2e119', '0x140a2e12e', '0x140a2e143', '0x140a2e158', '0x140a2e16d', '0x140a2e182', '0x140a2e197', '0x140a2e1ac', '0x140a2e1d1', '0x140a2e1e6', '0x140a2e1fb', '0x140a2e210', '0x140a2e225', '0x140a2e23a', '0x140a2e24d', '0x140a2e262', '0x140a2e277', '0x140a2e29d', '0x140a2e2b2', '0x140a2e2c7', '0x140a2e2dc', '0x140a2e2f1', '0x140a2e306', '0x140a2e31b', '0x140a2e330', '0x140a2e345', '0x140a2e35f', '0x140a2e379', '0x140a2e38e', '0x140a2e3a3', '0x140a2e3b8', '0x140a2e3f7', '0x140a2e436', '0x140a2e475', '0x140a2e4b4', '0x140a2e4f3', '0x140a2e508', '0x140a2e51d', '0x140a2e532', '0x140a2e547', '0x140a2e55c', '0x140a2e582', '0x140a2e597', '0x140a2e5ac', '0x140a2e5c1', '0x140a2e5d6', '0x140a2e5eb', '0x140a2e600', '0x140a2e615', '0x140a2e62a', '0x140a2e63f', '0x140a2fe21', '0x140a30111', '0x140a304aa', '0x140a30e20', '0x140a31139', '0x140a311c4', '0x140a311ee', '0x140a3122d', '0x140a3126c', '0x140a31281', '0x140a31296', '0x140a312ab', '0x140a312c0', '0x140a312da', '0x140a312ef', '0x140a31304', '0x140a31319', '0x140a3132e', '0x140a31343', '0x140a31358', '0x140a3136d', '0x140a31382', '0x140a31397', '0x140a313ac', '0x140a313c1', '0x140a313f0', '0x140a3140b', '0x140a31594', '0x140a31beb', '0x140a32994', '0x140a329ad', '0x140a329c6', '0x140a329db', '0x140a32a1a', '0x140a32a59', '0x140a32a98', '0x140a32aad', '0x140a32ac2', '0x140a32ad7', '0x140a32aec', '0x140a32b01', '0x140a32b1d', '0x140a32b32', '0x140a32b47', '0x140a32b5c', '0x140a32b7f']
// BB 0x140a3143f-0x140a31459 size=26 type=0 succ=['0x140a31459'] pred=['0x140a304ee', '0x140a30594', '0x140a31459']
// BB 0x140a31459-0x140a3145e size=5 type=0 succ=['0x140a3143f', '0x140a3145e'] pred=['0x140a30601', '0x140a3143f']
// BB 0x140a3145e-0x140a31472 size=20 type=0 succ=['0x140a31472', '0x140a31495'] pred=['0x140a3058b', '0x140a31459']
// BB 0x140a31472-0x140a31478 size=6 type=0 succ=['0x140a31478', '0x140a314eb'] pred=['0x140a3145e']
// BB 0x140a31478-0x140a31493 size=27 type=0 succ=['0x140a31493', '0x140a314eb'] pred=['0x140a31472']
// BB 0x140a31493-0x140a31495 size=2 type=0 succ=['0x140a3149e'] pred=['0x140a31478']
// BB 0x140a31495-0x140a3149e size=9 type=0 succ=['0x140a3149e', '0x140a314eb'] pred=['0x140a3145e']
// BB 0x140a3149e-0x140a314a7 size=9 type=0 succ=['0x140a314a7', '0x140a314de'] pred=['0x140a31493', '0x140a31495']
// BB 0x140a314a7-0x140a314d1 size=42 type=0 succ=['0x140a314d1', '0x140a314de'] pred=['0x140a3149e']
// BB 0x140a314d1-0x140a314de size=13 type=0 succ=['0x140a314de'] pred=['0x140a314a7']
// BB 0x140a314de-0x140a314eb size=13 type=0 succ=['0x140a314eb'] pred=['0x140a3149e', '0x140a314a7', '0x140a314d1']
// BB 0x140a314eb-0x140a31505 size=26 type=0 succ=['0x140a31505'] pred=['0x140a31472', '0x140a31478', '0x140a31495', '0x140a314de']
// BB 0x140a31505-0x140a31527 size=34 type=0 succ=['0x140a31527', '0x140a317ef'] pred=['0x140a304af', '0x140a314eb']
// BB 0x140a31527-0x140a3154a size=35 type=0 succ=['0x140a3154a', '0x140a31573'] pred=['0x140a31505']
// BB 0x140a3154a-0x140a31564 size=26 type=0 succ=['0x140a31564', '0x140a31573'] pred=['0x140a31527']
// BB 0x140a31564-0x140a31569 size=5 type=0 succ=['0x140a31569', '0x140a31573'] pred=['0x140a3154a']
// BB 0x140a31569-0x140a31573 size=10 type=0 succ=['0x140a31575'] pred=['0x140a31564']
// BB 0x140a31573-0x140a31575 size=2 type=0 succ=['0x140a31575'] pred=['0x140a31527', '0x140a3154a', '0x140a31564']
// BB 0x140a31575-0x140a31586 size=17 type=0 succ=['0x140a31586', '0x140a31599'] pred=['0x140a31569', '0x140a31573']
// BB 0x140a31586-0x140a31588 size=2 type=0 succ=['0x140a31588'] pred=['0x140a31575']
// BB 0x140a31588-0x140a31593 size=11 type=4 succ=[] pred=['0x140a31586', '0x140a315a2']
// BB 0x140a31594-0x140a31599 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31599-0x140a315a2 size=9 type=0 succ=['0x140a315a2', '0x140a317ef'] pred=['0x140a31575']
// BB 0x140a315a2-0x140a315c1 size=31 type=0 succ=['0x140a31588', '0x140a315c1'] pred=['0x140a31599']
// BB 0x140a315c1-0x140a315d8 size=23 type=0 succ=['0x140a315d8', '0x140a315df'] pred=['0x140a315a2']
// BB 0x140a315d8-0x140a315df size=7 type=0 succ=['0x140a316e3'] pred=['0x140a315c1']
// BB 0x140a315df-0x140a315e5 size=6 type=0 succ=['0x140a315e5', '0x140a315ec'] pred=['0x140a315c1']
// BB 0x140a315e5-0x140a315ec size=7 type=0 succ=['0x140a3167c'] pred=['0x140a315df']
// BB 0x140a315ec-0x140a31613 size=39 type=0 succ=['0x140a31613'] pred=['0x140a315df']
// BB 0x140a31613-0x140a3166e size=91 type=0 succ=['0x140a3166e', '0x140a31613'] pred=['0x140a315ec', '0x140a31613']
// BB 0x140a3166e-0x140a31677 size=9 type=0 succ=['0x140a31677', '0x140a31702'] pred=['0x140a31613']
// BB 0x140a31677-0x140a3167c size=5 type=0 succ=['0x140a3167c', '0x140a316e3'] pred=['0x140a3166e']
// BB 0x140a3167c-0x140a316b0 size=52 type=0 succ=['0x140a316b0'] pred=['0x140a315e5', '0x140a31677']
// BB 0x140a316b0-0x140a316e1 size=49 type=0 succ=['0x140a316e1', '0x140a316b0'] pred=['0x140a3167c', '0x140a316b0']
// BB 0x140a316e1-0x140a316e3 size=2 type=0 succ=['0x140a316fd'] pred=['0x140a316b0']
// BB 0x140a316e3-0x140a316fd size=26 type=0 succ=['0x140a316fd'] pred=['0x140a315d8', '0x140a31677', '0x140a316fd']
// BB 0x140a316fd-0x140a31702 size=5 type=0 succ=['0x140a316e3', '0x140a31702'] pred=['0x140a316e1', '0x140a316e3']
// BB 0x140a31702-0x140a31708 size=6 type=0 succ=['0x140a31708', '0x140a31748'] pred=['0x140a3166e', '0x140a316fd']
// BB 0x140a31708-0x140a3170e size=6 type=0 succ=['0x140a3170e', '0x140a31733'] pred=['0x140a31702']
// BB 0x140a3170e-0x140a31718 size=10 type=0 succ=['0x140a31718', '0x140a317de'] pred=['0x140a31708']
// BB 0x140a31718-0x140a31731 size=25 type=0 succ=['0x140a31731', '0x140a317de'] pred=['0x140a3170e']
// BB 0x140a31731-0x140a31733 size=2 type=0 succ=['0x140a31755'] pred=['0x140a31718']
// BB 0x140a31733-0x140a31746 size=19 type=0 succ=['0x140a31746', '0x140a317de'] pred=['0x140a31708']
// BB 0x140a31746-0x140a31748 size=2 type=0 succ=['0x140a31755'] pred=['0x140a31733']
// BB 0x140a31748-0x140a31755 size=13 type=0 succ=['0x140a31755', '0x140a317de'] pred=['0x140a31702']
// BB 0x140a31755-0x140a31787 size=50 type=0 succ=['0x140a31787'] pred=['0x140a31731', '0x140a31746', '0x140a31748']
// BB 0x140a31787-0x140a317a0 size=25 type=0 succ=['0x140a317a0'] pred=['0x140a31755']
// BB 0x140a317a0-0x140a317de size=62 type=0 succ=['0x140a317de'] pred=['0x140a31787']
// BB 0x140a317de-0x140a317ef size=17 type=0 succ=['0x140a317ef'] pred=['0x140a3170e', '0x140a31718', '0x140a31733', '0x140a31748', '0x140a317a0']
// BB 0x140a317ef-0x140a31822 size=51 type=0 succ=['0x140a31822', '0x140a32a9d'] pred=['0x140a31505', '0x140a31599', '0x140a317de']
// BB 0x140a31822-0x140a31869 size=71 type=0 succ=['0x140a31869', '0x140a32ab2'] pred=['0x140a317ef']
// BB 0x140a31869-0x140a3189e size=53 type=0 succ=['0x140a3189e'] pred=['0x140a31822']
// BB 0x140a3189e-0x140a318c9 size=43 type=0 succ=['0x140a318c9', '0x140a318d6'] pred=['0x140a31869']
// BB 0x140a318c9-0x140a318d6 size=13 type=0 succ=['0x140a318d6'] pred=['0x140a3189e']
// BB 0x140a318d6-0x140a31902 size=44 type=0 succ=['0x140a31902'] pred=['0x140a3189e', '0x140a318c9']
// BB 0x140a31902-0x140a31924 size=34 type=0 succ=['0x140a31924', '0x140a31fda'] pred=['0x140a318d6']
// BB 0x140a31924-0x140a31937 size=19 type=1 succ=['0x140a31937', '0x140a31955', '0x140a3197a', '0x140a31983', '0x140a319a7'] pred=['0x140a31902']
// BB 0x140a31937-0x140a31955 size=30 type=0 succ=['0x140a319f2'] pred=['0x140a31924']
// BB 0x140a31955-0x140a3197a size=37 type=0 succ=['0x140a319f2'] pred=['0x140a31924']
// BB 0x140a3197a-0x140a31983 size=9 type=0 succ=['0x140a319f2'] pred=['0x140a31924']
// BB 0x140a31983-0x140a319a7 size=36 type=0 succ=['0x140a319f2'] pred=['0x140a31924']
// BB 0x140a319a7-0x140a319ae size=7 type=0 succ=['0x140a319ae', '0x140a319d5'] pred=['0x140a31924']
// BB 0x140a319ae-0x140a319bb size=13 type=0 succ=['0x140a319bb', '0x140a32999'] pred=['0x140a319a7']
// BB 0x140a319bb-0x140a319d5 size=26 type=0 succ=['0x140a319eb'] pred=['0x140a319ae']
// BB 0x140a319d5-0x140a319eb size=22 type=0 succ=['0x140a319eb'] pred=['0x140a319a7']
// BB 0x140a319eb-0x140a319f2 size=7 type=0 succ=['0x140a319f2'] pred=['0x140a319bb', '0x140a319d5']
// BB 0x140a319f2-0x140a31a58 size=102 type=0 succ=['0x140a31a58', '0x140a31bf0'] pred=['0x140a31937', '0x140a31955', '0x140a3197a', '0x140a31983', '0x140a319eb']
// BB 0x140a31a58-0x140a31a61 size=9 type=0 succ=['0x140a31a61', '0x140a31fbc'] pred=['0x140a319f2']
// BB 0x140a31a61-0x140a31aa7 size=70 type=0 succ=['0x140a31aa7', '0x140a32984'] pred=['0x140a31a58']
// BB 0x140a31aa7-0x140a31ae4 size=61 type=0 succ=['0x140a31ae4', '0x140a32ac7'] pred=['0x140a31a61']
// BB 0x140a31ae4-0x140a31b2b size=71 type=0 succ=['0x140a31b2b', '0x140a32adc'] pred=['0x140a31aa7']
// BB 0x140a31b2b-0x140a31b55 size=42 type=0 succ=['0x140a31b55'] pred=['0x140a31ae4']
// BB 0x140a31b55-0x140a31b80 size=43 type=0 succ=['0x140a31b80', '0x140a31b8d'] pred=['0x140a31b2b']
// BB 0x140a31b80-0x140a31b8d size=13 type=0 succ=['0x140a31b8d'] pred=['0x140a31b55']
// BB 0x140a31b8d-0x140a31baa size=29 type=0 succ=['0x140a31baa', '0x140a32af1'] pred=['0x140a31b55', '0x140a31b80']
// BB 0x140a31baa-0x140a31bd6 size=44 type=0 succ=['0x140a31bd6', '0x140a31c80'] pred=['0x140a31b8d']
// BB 0x140a31bd6-0x140a31bd8 size=2 type=0 succ=['0x140a31bd8'] pred=['0x140a31baa']
// BB 0x140a31bd8-0x140a31bdf size=7 type=0 succ=['0x140a31bdf'] pred=['0x140a31bd6', '0x140a31c82']
// BB 0x140a31bdf-0x140a31bea size=11 type=4 succ=[] pred=['0x140a31bd8']
// BB 0x140a31beb-0x140a31bf0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a31bf0-0x140a31c4f size=95 type=0 succ=['0x140a31c4f', '0x140a31da2'] pred=['0x140a319f2']
// BB 0x140a31c4f-0x140a31c65 size=22 type=0 succ=['0x140a31c65', '0x140a31fbc'] pred=['0x140a31bf0']
// BB 0x140a31c65-0x140a31c80 size=27 type=0 succ=['0x140a31fbc'] pred=['0x140a31c4f']
// BB 0x140a31c80-0x140a31c82 size=2 type=0 succ=['0x140a31c82', '0x140a31cb9'] pred=['0x140a31baa']
// BB 0x140a31c82-0x140a31ca2 size=32 type=0 succ=['0x140a31bd8', '0x140a31ca2'] pred=['0x140a31c80']
// BB 0x140a31ca2-0x140a31cb9 size=23 type=0 succ=['0x140a31cbe'] pred=['0x140a31c82']
// BB 0x140a31cb9-0x140a31cbe size=5 type=0 succ=['0x140a31cbe'] pred=['0x140a31c80']
// BB 0x140a31cbe-0x140a31ce1 size=35 type=0 succ=['0x140a31ce1'] pred=['0x140a31ca2', '0x140a31cb9']
// BB 0x140a31ce1-0x140a31d0c size=43 type=0 succ=['0x140a31d0c', '0x140a31d19'] pred=['0x140a31cbe']
// BB 0x140a31d0c-0x140a31d19 size=13 type=0 succ=['0x140a31d19'] pred=['0x140a31ce1']
// BB 0x140a31d19-0x140a31d90 size=119 type=0 succ=['0x140a31d90', '0x140a31da2'] pred=['0x140a31ce1', '0x140a31d0c']
// BB 0x140a31d90-0x140a31da2 size=18 type=0 succ=['0x140a31da2'] pred=['0x140a31d19']
// BB 0x140a31da2-0x140a31db8 size=22 type=0 succ=['0x140a31db8', '0x140a31f41'] pred=['0x140a31bf0', '0x140a31d19', '0x140a31d90']
// BB 0x140a31db8-0x140a31dd5 size=29 type=0 succ=['0x140a31dd5', '0x140a32b06'] pred=['0x140a31da2']
// BB 0x140a31dd5-0x140a31e24 size=79 type=1 succ=['0x140a31e24', '0x140a31e49', '0x140a31e77', '0x140a31e80', '0x140a31ea4'] pred=['0x140a31db8']
// BB 0x140a31e24-0x140a31e49 size=37 type=0 succ=['0x140a31ef8'] pred=['0x140a31dd5']
// BB 0x140a31e49-0x140a31e65 size=28 type=0 succ=['0x140a31e65'] pred=['0x140a31dd5']
// BB 0x140a31e65-0x140a31e77 size=18 type=0 succ=['0x140a31ef8'] pred=['0x140a31e49']
// BB 0x140a31e77-0x140a31e80 size=9 type=0 succ=['0x140a31ef8'] pred=['0x140a31dd5']
// BB 0x140a31e80-0x140a31ea4 size=36 type=0 succ=['0x140a31ef8'] pred=['0x140a31dd5']
// BB 0x140a31ea4-0x140a31eae size=10 type=0 succ=['0x140a31eae', '0x140a31edb'] pred=['0x140a31dd5']
// BB 0x140a31eae-0x140a31ebe size=16 type=0 succ=['0x140a31ebe', '0x140a329b2'] pred=['0x140a31ea4']
// BB 0x140a31ebe-0x140a31edb size=29 type=0 succ=['0x140a31ef1'] pred=['0x140a31eae']
// BB 0x140a31edb-0x140a31ef1 size=22 type=0 succ=['0x140a31ef1'] pred=['0x140a31ea4']
// BB 0x140a31ef1-0x140a31ef8 size=7 type=0 succ=['0x140a31ef8'] pred=['0x140a31ebe', '0x140a31edb']
// BB 0x140a31ef8-0x140a31f2d size=53 type=0 succ=['0x140a31f2d', '0x140a31f41'] pred=['0x140a31e24', '0x140a31e65', '0x140a31e77', '0x140a31e80', '0x140a31ef1']
// BB 0x140a31f2d-0x140a31f34 size=7 type=0 succ=['0x140a31f34'] pred=['0x140a31ef8']
// BB 0x140a31f34-0x140a31f41 size=13 type=0 succ=['0x140a31f41'] pred=['0x140a31f2d']
// BB 0x140a31f41-0x140a31f6d size=44 type=0 succ=['0x140a31f6d'] pred=['0x140a31da2', '0x140a31ef8', '0x140a31f34']
// BB 0x140a31f6d-0x140a31f86 size=25 type=0 succ=['0x140a31f86'] pred=['0x140a31f41']
// BB 0x140a31f86-0x140a31fbc size=54 type=0 succ=['0x140a31fbc'] pred=['0x140a31f6d']
// BB 0x140a31fbc-0x140a31fc6 size=10 type=0 succ=['0x140a31fc6', '0x140a31fda'] pred=['0x140a31a58', '0x140a31c4f', '0x140a31c65', '0x140a31f86']
// BB 0x140a31fc6-0x140a31fcd size=7 type=0 succ=['0x140a31fcd'] pred=['0x140a31fbc']
// BB 0x140a31fcd-0x140a31fda size=13 type=0 succ=['0x140a31fda'] pred=['0x140a31fc6']
// BB 0x140a31fda-0x140a32003 size=41 type=0 succ=['0x140a32003', '0x140a32735'] pred=['0x140a31902', '0x140a31fbc', '0x140a31fcd']
// BB 0x140a32003-0x140a3200c size=9 type=0 succ=['0x140a3200c', '0x140a32735'] pred=['0x140a31fda']
// BB 0x140a3200c-0x140a32019 size=13 type=0 succ=['0x140a32019', '0x140a32735'] pred=['0x140a32003']
// BB 0x140a32019-0x140a3202d size=20 type=0 succ=['0x140a32039'] pred=['0x140a3200c']
// BB 0x140a32030-0x140a32039 size=9 type=0 succ=['0x140a32039', '0x140a32735'] pred=['0x140a32039', '0x140a3205a', '0x140a3205f', '0x140a32066']
// BB 0x140a32039-0x140a3205a size=33 type=0 succ=['0x140a32030', '0x140a3205a'] pred=['0x140a32019', '0x140a32030']
// BB 0x140a3205a-0x140a3205f size=5 type=0 succ=['0x140a32030', '0x140a3205f'] pred=['0x140a32039']
// BB 0x140a3205f-0x140a32066 size=7 type=0 succ=['0x140a32030', '0x140a32066'] pred=['0x140a3205a']
// BB 0x140a32066-0x140a32085 size=31 type=0 succ=['0x140a32030', '0x140a32085'] pred=['0x140a3205f']
// BB 0x140a32085-0x140a320aa size=37 type=0 succ=['0x140a320aa', '0x140a32735'] pred=['0x140a32066']
// BB 0x140a320aa-0x140a320bd size=19 type=1 succ=['0x140a320bd', '0x140a320d8', '0x140a320fd', '0x140a32106', '0x140a3212a'] pred=['0x140a32085']
// BB 0x140a320bd-0x140a320d8 size=27 type=0 succ=['0x140a3214c'] pred=['0x140a320aa']
// BB 0x140a320d8-0x140a320fd size=37 type=0 succ=['0x140a3214c'] pred=['0x140a320aa']
// BB 0x140a320fd-0x140a32106 size=9 type=0 succ=['0x140a3214c'] pred=['0x140a320aa']
// BB 0x140a32106-0x140a3212a size=36 type=0 succ=['0x140a3214c'] pred=['0x140a320aa']
// BB 0x140a3212a-0x140a3214c size=34 type=0 succ=['0x140a3214c'] pred=['0x140a320aa']
// BB 0x140a3214c-0x140a321b2 size=102 type=0 succ=['0x140a321b2', '0x140a322db'] pred=['0x140a320bd', '0x140a320d8', '0x140a320fd', '0x140a32106', '0x140a3212a']
// BB 0x140a321b2-0x140a321bb size=9 type=0 succ=['0x140a321bb', '0x140a3267e'] pred=['0x140a3214c']
// BB 0x140a321bb-0x140a321e4 size=41 type=0 succ=['0x140a321e4', '0x140a32686'] pred=['0x140a321b2']
// BB 0x140a321e4-0x140a32200 size=28 type=0 succ=['0x140a32200', '0x140a3268c'] pred=['0x140a321bb']
// BB 0x140a32200-0x140a3221d size=29 type=0 succ=['0x140a3221d', '0x140a32b61'] pred=['0x140a321e4']
// BB 0x140a3221d-0x140a3228a size=109 type=0 succ=['0x140a3228a'] pred=['0x140a32200']
// BB 0x140a3228a-0x140a322b1 size=39 type=0 succ=['0x140a322b1', '0x140a322cc'] pred=['0x140a3221d']
// BB 0x140a322b1-0x140a322cc size=27 type=0 succ=['0x140a322cc'] pred=['0x140a3228a']
// BB 0x140a322cc-0x140a322db size=15 type=0 succ=['0x140a3268c'] pred=['0x140a3228a', '0x140a322b1']
// BB 0x140a322db-0x140a32314 size=57 type=0 succ=['0x140a32314', '0x140a329cb'] pred=['0x140a3214c']
// BB 0x140a32314-0x140a3234e size=58 type=0 succ=['0x140a3234e', '0x140a32b22'] pred=['0x140a322db']
// BB 0x140a3234e-0x140a32378 size=42 type=0 succ=['0x140a32378'] pred=['0x140a32314']
// BB 0x140a32378-0x140a32399 size=33 type=0 succ=['0x140a32399', '0x140a329e0'] pred=['0x140a3234e']
// BB 0x140a32399-0x140a323eb size=82 type=0 succ=['0x140a323eb', '0x140a323f8'] pred=['0x140a32378']
// BB 0x140a323eb-0x140a323f8 size=13 type=0 succ=['0x140a323f8'] pred=['0x140a32399']
// BB 0x140a323f8-0x140a32415 size=29 type=0 succ=['0x140a32415', '0x140a32b37'] pred=['0x140a32399', '0x140a323eb']
// BB 0x140a32415-0x140a32446 size=49 type=0 succ=['0x140a32446'] pred=['0x140a323f8']
// BB 0x140a32446-0x140a32460 size=26 type=0 succ=['0x140a32460', '0x140a32a1f'] pred=['0x140a32415']
// BB 0x140a32460-0x140a324b2 size=82 type=0 succ=['0x140a324b2', '0x140a324bf'] pred=['0x140a32446']
// BB 0x140a324b2-0x140a324bf size=13 type=0 succ=['0x140a324bf'] pred=['0x140a32460']
// BB 0x140a324bf-0x140a324dc size=29 type=0 succ=['0x140a324dc', '0x140a32b4c'] pred=['0x140a32460', '0x140a324b2']
// BB 0x140a324dc-0x140a3251b size=63 type=0 succ=['0x140a3251b'] pred=['0x140a324bf']
// BB 0x140a3251b-0x140a3253c size=33 type=0 succ=['0x140a3253c', '0x140a32a5e'] pred=['0x140a324dc']
// BB 0x140a3253c-0x140a3258e size=82 type=0 succ=['0x140a3258e', '0x140a3259b'] pred=['0x140a3251b']
// BB 0x140a3258e-0x140a3259b size=13 type=0 succ=['0x140a3259b'] pred=['0x140a3253c']
// BB 0x140a3259b-0x140a3260f size=116 type=0 succ=['0x140a3260f'] pred=['0x140a3253c', '0x140a3258e']
// BB 0x140a3260f-0x140a32624 size=21 type=0 succ=['0x140a32624'] pred=['0x140a3259b']
// BB 0x140a32624-0x140a32667 size=67 type=0 succ=['0x140a32667', '0x140a32703'] pred=['0x140a3260f']
// BB 0x140a32667-0x140a3267e size=23 type=0 succ=['0x140a32703'] pred=['0x140a32624']
// BB 0x140a3267e-0x140a32686 size=8 type=0 succ=['0x140a3270a'] pred=['0x140a321b2']
// BB 0x140a32686-0x140a3268c size=6 type=0 succ=['0x140a3268c'] pred=['0x140a321bb']
// BB 0x140a3268c-0x140a326b8 size=44 type=0 succ=['0x140a326b8'] pred=['0x140a321e4', '0x140a322cc', '0x140a32686']
// BB 0x140a326b8-0x140a326cd size=21 type=0 succ=['0x140a326cd'] pred=['0x140a3268c']
// BB 0x140a326cd-0x140a32703 size=54 type=0 succ=['0x140a32703'] pred=['0x140a326b8']
// BB 0x140a32703-0x140a3270a size=7 type=0 succ=['0x140a3270a'] pred=['0x140a32624', '0x140a32667', '0x140a326cd']
// BB 0x140a3270a-0x140a32715 size=11 type=0 succ=['0x140a32715', '0x140a32730'] pred=['0x140a3267e', '0x140a32703']
// BB 0x140a32715-0x140a3271c size=7 type=0 succ=['0x140a3271c', '0x140a32730'] pred=['0x140a3270a']
// BB 0x140a3271c-0x140a32723 size=7 type=0 succ=['0x140a32723'] pred=['0x140a32715']
// BB 0x140a32723-0x140a32730 size=13 type=0 succ=['0x140a32730'] pred=['0x140a3271c']
// BB 0x140a32730-0x140a32735 size=5 type=0 succ=['0x140a32735', '0x140a32742'] pred=['0x140a3270a', '0x140a32715', '0x140a32723']
// BB 0x140a32735-0x140a32742 size=13 type=0 succ=['0x140a32742'] pred=['0x140a31fda', '0x140a32003', '0x140a3200c', '0x140a32030', '0x140a32085', '0x140a32730']
// BB 0x140a32742-0x140a32792 size=80 type=0 succ=['0x140a32792'] pred=['0x140a32730', '0x140a32735']
// BB 0x140a32792-0x140a327ab size=25 type=0 succ=['0x140a327ab', '0x140a327bd'] pred=['0x140a32742']
// BB 0x140a327ab-0x140a327bd size=18 type=0 succ=['0x140a327bd'] pred=['0x140a32792']
// BB 0x140a327bd-0x140a327cd size=16 type=0 succ=['0x140a327cd', '0x140a3289a'] pred=['0x140a32792', '0x140a327ab']
// BB 0x140a327cd-0x140a327dd size=16 type=0 succ=['0x140a327dd', '0x140a32869'] pred=['0x140a327bd']
// BB 0x140a327dd-0x140a327f6 size=25 type=0 succ=['0x140a32812'] pred=['0x140a327cd']
// BB 0x140a32800-0x140a32812 size=18 type=0 succ=['0x140a32812', '0x140a32869'] pred=['0x140a3283e', '0x140a32854']
// BB 0x140a32812-0x140a32818 size=6 type=0 succ=['0x140a32818', '0x140a3283e'] pred=['0x140a327dd', '0x140a32800']
// BB 0x140a32818-0x140a32820 size=8 type=0 succ=['0x140a32820'] pred=['0x140a32812']
// BB 0x140a32820-0x140a3283e size=30 type=0 succ=['0x140a3283e', '0x140a32820'] pred=['0x140a32818', '0x140a32820']
// BB 0x140a3283e-0x140a32854 size=22 type=0 succ=['0x140a32800', '0x140a32854'] pred=['0x140a32812', '0x140a32820']
// BB 0x140a32854-0x140a32869 size=21 type=0 succ=['0x140a32800'] pred=['0x140a3283e']
// BB 0x140a32869-0x140a32882 size=25 type=0 succ=['0x140a32882', '0x140a3289a'] pred=['0x140a327cd', '0x140a32800']
// BB 0x140a32882-0x140a3289a size=24 type=0 succ=['0x140a3289a'] pred=['0x140a32869']
// BB 0x140a3289a-0x140a328d0 size=54 type=0 succ=['0x140a328d0'] pred=['0x140a327bd', '0x140a32869', '0x140a32882']
// BB 0x140a328d0-0x140a328e0 size=16 type=0 succ=['0x140a328e0', '0x140a328f9'] pred=['0x140a3289a', '0x140a328ee']
// BB 0x140a328e0-0x140a328ee size=14 type=0 succ=['0x140a328ee'] pred=['0x140a328d0']
// BB 0x140a328ee-0x140a328f9 size=11 type=0 succ=['0x140a328d0'] pred=['0x140a328e0']
// BB 0x140a328f9-0x140a32905 size=12 type=0 succ=['0x140a32905', '0x140a3291b'] pred=['0x140a328d0']
// BB 0x140a32905-0x140a3291b size=22 type=0 succ=['0x140a3291b'] pred=['0x140a328f9']
// BB 0x140a3291b-0x140a32984 size=105 type=2 succ=[] pred=['0x140a328f9', '0x140a32905']
// BB 0x140a32984-0x140a32993 size=15 type=4 succ=[] pred=['0x140a31a61']
// BB 0x140a32994-0x140a32999 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32999-0x140a329a0 size=7 type=0 succ=['0x140a329a0'] pred=['0x140a319ae']
// BB 0x140a329a0-0x140a329ac size=12 type=4 succ=[] pred=['0x140a32999']
// BB 0x140a329ad-0x140a329b2 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a329b2-0x140a329b9 size=7 type=0 succ=['0x140a329b9'] pred=['0x140a31eae']
// BB 0x140a329b9-0x140a329c5 size=12 type=4 succ=[] pred=['0x140a329b2']
// BB 0x140a329c6-0x140a329cb size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a329cb-0x140a329da size=15 type=4 succ=[] pred=['0x140a322db']
// BB 0x140a329db-0x140a329e0 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a329e0-0x140a329ee size=14 type=0 succ=['0x140a329ee'] pred=['0x140a32378']
// BB 0x140a329ee-0x140a32a19 size=43 type=4 succ=[] pred=['0x140a329e0']
// BB 0x140a32a1a-0x140a32a1f size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32a1f-0x140a32a2d size=14 type=0 succ=['0x140a32a2d'] pred=['0x140a32446']
// BB 0x140a32a2d-0x140a32a58 size=43 type=4 succ=[] pred=['0x140a32a1f']
// BB 0x140a32a59-0x140a32a5e size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32a5e-0x140a32a6c size=14 type=0 succ=['0x140a32a6c'] pred=['0x140a3251b']
// BB 0x140a32a6c-0x140a32a97 size=43 type=4 succ=[] pred=['0x140a32a5e']
// BB 0x140a32a98-0x140a32a9d size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32a9d-0x140a32aac size=15 type=4 succ=[] pred=['0x140a317ef']
// BB 0x140a32aad-0x140a32ab2 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32ab2-0x140a32ac1 size=15 type=4 succ=[] pred=['0x140a31822']
// BB 0x140a32ac2-0x140a32ac7 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32ac7-0x140a32ad6 size=15 type=4 succ=[] pred=['0x140a31aa7']
// BB 0x140a32ad7-0x140a32adc size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32adc-0x140a32aeb size=15 type=4 succ=[] pred=['0x140a31ae4']
// BB 0x140a32aec-0x140a32af1 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32af1-0x140a32b00 size=15 type=4 succ=[] pred=['0x140a31b8d']
// BB 0x140a32b01-0x140a32b06 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32b06-0x140a32b0d size=7 type=0 succ=['0x140a32b0d'] pred=['0x140a31db8']
// BB 0x140a32b0d-0x140a32b1c size=15 type=4 succ=[] pred=['0x140a32b06']
// BB 0x140a32b1d-0x140a32b22 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32b22-0x140a32b31 size=15 type=4 succ=[] pred=['0x140a32314']
// BB 0x140a32b32-0x140a32b37 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32b37-0x140a32b46 size=15 type=4 succ=[] pred=['0x140a323f8']
// BB 0x140a32b47-0x140a32b4c size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32b4c-0x140a32b5b size=15 type=4 succ=[] pred=['0x140a324bf']
// BB 0x140a32b5c-0x140a32b61 size=5 type=0 succ=['0x140a3143d'] pred=[]
// BB 0x140a32b61-0x140a32b6f size=14 type=0 succ=['0x140a32b6f'] pred=['0x140a32200']
// BB 0x140a32b6f-0x140a32b7e size=15 type=4 succ=[] pred=['0x140a32b61']
// BB 0x140a32b7f-0x140a32b84 size=5 type=0 succ=['0x140a3143d'] pred=[]

// --- full disassembly ---
/*140a28e20*/ sub_140A28E20: push rbp
/*140a28e21*/  push r15
/*140a28e23*/  push r14
/*140a28e25*/  push r13
/*140a28e27*/  push r12
/*140a28e29*/  push rsi
/*140a28e2a*/  push rdi
/*140a28e2b*/  push rbx
/*140a28e2c*/  sub rsp, 5C8h
/*140a28e33*/  lea rbp, [rsp+80h]
/*140a28e3b*/  movdqa [rbp+580h+var_50], xmm15
/*140a28e44*/  movdqa [rbp+580h+var_60], xmm14
/*140a28e4d*/  movdqa [rbp+580h+var_70], xmm13
/*140a28e56*/  movdqa [rbp+580h+var_80], xmm12
/*140a28e5f*/  movdqa [rbp+580h+var_90], xmm11
/*140a28e68*/  movdqa [rbp+580h+var_A0], xmm10
/*140a28e71*/  movdqa [rbp+580h+var_B0], xmm9
/*140a28e7a*/  movdqa [rbp+580h+var_C0], xmm8
/*140a28e83*/  movdqa [rbp+580h+var_D0], xmm7
/*140a28e8b*/  movdqa [rbp+580h+var_E0], xmm6
/*140a28e93*/  mov [rbp+580h+var_E8], 0FFFFFFFFFFFFFFFEh
/*140a28e9e*/  mov [rbp+580h+var_370], r9
/*140a28ea5*/  mov [rbp+580h+var_400], r8
/*140a28eac*/  mov r8, rdx
/*140a28eaf*/  mov [rbp+580h+var_450], rcx
/*140a28eb6*/  mov [rbp+580h+var_360], 0
/*140a28ec1*/  mov [rbp+580h+var_358], 8
/*140a28ecc*/  mov [rbp+580h+var_350], 0
/*140a28ed7*/  mov [rbp+580h+var_438], 0FFFFFFFFFFFFFFFFh
/*140a28ee2*/  mov [rbp+580h+var_271], 1
/*140a28ee9*/ loc_140A28EE9: lea rcx, aTools_1; "tools"
/*140a28ef0*/  mov edx, 5
/*140a28ef5*/  mov [rbp+580h+var_188], r8
/*140a28efc*/  call sub_141433D50
/*140a28f01*/  nop
/*140a28f02*/  mov [rbp+580h+var_438], 0FFFFFFFFFFFFFFFFh
/*140a28f0d*/  mov [rbp+580h+var_271], 1
/*140a28f14*/  lea rcx, [rbp+580h+var_4D8]
/*140a28f1b*/  mov rdx, rax
/*140a28f1e*/  call sub_140A1FE60
/*140a28f23*/  nop
/*140a28f24*/  mov [rbp+580h+var_3B0], 0FFFFFFFFFFFFFFFFh
/*140a28f2f*/  mov [rbp+580h+var_FB], 1
/*140a28f36*/ loc_140A28F36: lea rcx, aInstructions; "instructions"
/*140a28f3d*/  mov edx, 0Ch
/*140a28f42*/  mov r8, [rbp+580h+var_188]
/*140a28f49*/  call sub_141433D50
/*140a28f4e*/  nop
/*140a28f4f*/  mov rsi, 0FFFFFFFFFFFFFFFFh
/*140a28f56*/  test rax, rax
/*140a28f59*/  jz short loc_140A28FAE
/*140a28f5b*/  cmp byte ptr [rax], 3
/*140a28f5e*/  jnz short loc_140A28FAE
/*140a28f60*/  mov rdx, [rax+10h]
/*140a28f64*/  mov r8, [rax+18h]
/*140a28f68*/  mov [rbp+580h+var_3B0], 0FFFFFFFFFFFFFFFFh
/*140a28f73*/  mov [rbp+580h+var_FB], 1
/*140a28f7a*/  lea rcx, [rbp+580h+var_180]
/*140a28f81*/  call sub_1409EACD0
/*140a28f86*/  nop
/*140a28f87*/  mov rax, qword ptr [rbp+580h+var_170]
/*140a28f8e*/  mov [rbp+580h+var_110], rax
/*140a28f95*/  test rax, rax
/*140a28f98*/  jz loc_140A2CFEF
/*140a28f9e*/  mov rsi, qword ptr [rbp+580h+var_180]
/*140a28fa5*/  mov rax, qword ptr [rbp+580h+var_180+8]
/*140a28fac*/  jmp short $+2
/*140a28fae*/ loc_140A28FAE: mov [rbp+580h+var_348], rax
/*140a28fb5*/  mov [rbp+580h+var_3C0], rax
/*140a28fbc*/  mov [rbp+580h+var_1C8], rsi
/*140a28fc3*/  mov [rbp+580h+var_3B0], rsi
/*140a28fca*/  mov [rbp+580h+var_FB], 1
/*140a28fd1*/  lea rcx, aInput_2; "input"
/*140a28fd8*/  mov edx, 5
/*140a28fdd*/  mov r8, [rbp+580h+var_188]
/*140a28fe4*/  call sub_141433D50
/*140a28fe9*/  nop
/*140a28fea*/  test rax, rax
/*140a28fed*/  jz loc_140A2D08B
/*140a28ff3*/  cmp byte ptr [rax], 4
/*140a28ff6*/  jnz loc_140A2D08B
/*140a28ffc*/  mov qword ptr [rbp+580h+var_310], 0
/*140a29007*/  mov qword ptr [rbp+580h+var_310+8], 8
/*140a29012*/  mov [rbp+580h+var_300], 0
/*140a2901d*/  mov rdi, [rax+10h]
/*140a29021*/  mov r15, [rax+18h]
/*140a29025*/  shl r15, 5
/*140a29029*/  add r15, rdi
/*140a2902c*/  lea r12, aType_8; "type"
/*140a29033*/  movdqa xmm6, cs:xmmword_141742420
/*140a2903b*/  movdqa xmm7, cs:xmmword_141742430
/*140a29043*/  pxor xmm8, xmm8
/*140a29048*/  movdqa xmm9, cs:xmmword_1417A2D10
/*140a29051*/  movd xmm10, cs:dword_141764030
/*140a2905a*/  pcmpeqd xmm11, xmm11
/*140a2905f*/  movd xmm12, cs:dword_1417640B0
/*140a29068*/  movdqa xmm13, cs:xmmword_1417640C0
/*140a29071*/  nop word ptr [rax+rax+00000000h]
/*140a29080*/ def_140A290D9: cmp rdi, r15; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19  // jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a29083*/  jz loc_140A2CDA3
/*140a29089*/  mov r14, rdi
/*140a2908c*/  mov rax, [rbp+580h+var_1C8]
/*140a29093*/  mov [rbp+580h+var_270], rax
/*140a2909a*/ loc_140A2909A: mov edx, 4
/*140a2909f*/  mov rcx, r12
/*140a290a2*/  mov r8, rdi
/*140a290a5*/  call sub_141433D50
/*140a290aa*/  nop
/*140a290ab*/  lea rdi, [r14+20h]
/*140a290af*/  test rax, rax
/*140a290b2*/  jz short def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a290b4*/  cmp byte ptr [rax], 3
/*140a290b7*/  jnz short def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a290b9*/  mov rcx, [rax+18h]
/*140a290bd*/  add rcx, 0FFFFFFFFFFFFFFF9h; switch 14 cases  // switch 14 cases
/*140a290c1*/  cmp rcx, 0Dh
/*140a290c5*/  ja short def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a290c7*/  mov rax, [rax+10h]
/*140a290cb*/  lea rdx, jpt_140A290D9
/*140a290d2*/  movsxd rcx, ds:(jpt_140A290D9 - 1417AB220h)[rdx+rcx*4]
/*140a290d6*/  add rcx, rdx
/*140a290d9*/  jmp rcx; switch jump  // switch jump
/*140a290db*/ loc_140A290DB: mov ecx, [rax]; jumptable 0000000140A290D9 case 7  // jumptable 0000000140A290D9 case 7
/*140a290dd*/  mov edx, 7373656Dh
/*140a290e2*/  xor ecx, edx
/*140a290e4*/  mov eax, [rax+3]
/*140a290e7*/  mov edx, 65676173h
/*140a290ec*/  xor eax, edx
/*140a290ee*/  or eax, ecx
/*140a290f0*/  jnz short def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a290f2*/  mov rax, [rbp+580h+var_1C8]
/*140a290f9*/  mov [rbp+580h+var_270], rax
/*140a29100*/  mov edx, 4
/*140a29105*/  lea rcx, aRole_4; "role"
/*140a2910c*/  mov r8, r14
/*140a2910f*/  call sub_141433D50
/*140a29114*/  nop
/*140a29115*/  test rax, rax
/*140a29118*/  jz loc_140A293E8
/*140a2911e*/  cmp byte ptr [rax], 3
/*140a29121*/  jnz loc_140A293E8
/*140a29127*/  mov rbx, [rax+10h]
/*140a2912b*/  mov rax, [rax+18h]
/*140a2912f*/  cmp rax, 6
/*140a29133*/  jz loc_140A2AA0B
/*140a29139*/  cmp rax, 9
/*140a2913d*/  jnz loc_140A2AA22
/*140a29143*/  mov rax, [rbx]
/*140a29146*/  mov rcx, 65706F6C65766564h
/*140a29150*/  xor rax, rcx
/*140a29153*/  movzx ecx, byte ptr [rbx+8]
/*140a29157*/  xor rcx, 72h
/*140a2915b*/  or rcx, rax
/*140a2915e*/  jz loc_140A2AA3F
/*140a29164*/  mov rax, [rbx]
/*140a29167*/  mov rcx, 6E61747369737361h
/*140a29171*/  xor rax, rcx
/*140a29174*/  movzx ecx, byte ptr [rbx+8]
/*140a29178*/  xor rcx, 74h
/*140a2917c*/  mov r8b, 1
/*140a2917f*/  mov dword ptr [rbp+580h+var_268], r8d
/*140a29186*/  or rcx, rax
/*140a29189*/  jnz loc_140A293F9
/*140a2918f*/  jmp loc_140A296EE
/*140a29194*/ loc_140A29194: mov rcx, [rax]; jumptable 0000000140A290D9 case 13  // jumptable 0000000140A290D9 case 13
/*140a29197*/  mov rdx, 6E6F6974636E7566h
/*140a291a1*/  xor rcx, rdx
/*140a291a4*/  mov rax, [rax+5]
/*140a291a8*/  mov rdx, 6C6C61635F6E6F69h
/*140a291b2*/  xor rax, rdx
/*140a291b5*/  or rax, rcx
/*140a291b8*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a291be*/  mov rax, [rbp+580h+var_1C8]
/*140a291c5*/  mov [rbp+580h+var_270], rax
/*140a291cc*/  mov edx, 7
/*140a291d1*/  lea rcx, aCallId; "call_id"
/*140a291d8*/  mov r8, r14
/*140a291db*/  call sub_141433D50
/*140a291e0*/  nop
/*140a291e1*/  mov r13d, 0Dh
/*140a291e7*/  test rax, rax
/*140a291ea*/  jz loc_140A29FF4
/*140a291f0*/  cmp byte ptr [rax], 3
/*140a291f3*/  lea rsi, unk_1417A844B
/*140a291fa*/  jnz loc_140A29FFB
/*140a29200*/  mov r13, [rax+18h]
/*140a29204*/  test r13, r13
/*140a29207*/  js loc_140A2D353
/*140a2920d*/  jz loc_140A2CD48
/*140a29213*/  mov rsi, [rax+10h]
/*140a29217*/  jmp loc_140A29FFB
/*140a2921c*/ loc_140A2921C: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A290D9 case 20  // jumptable 0000000140A290D9 case 20
/*140a29220*/  pcmpeqb xmm0, xmm13
/*140a29225*/  movd xmm1, dword ptr [rax+10h]
/*140a2922a*/  pcmpeqb xmm1, xmm12
/*140a2922f*/  pand xmm1, xmm0
/*140a29233*/  pmovmskb eax, xmm1
/*140a29237*/  cmp eax, 0FFFFh
/*140a2923c*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a29242*/  mov rax, [rbp+580h+var_1C8]
/*140a29249*/  mov [rbp+580h+var_270], rax
/*140a29250*/  mov edx, 7
/*140a29255*/  lea rcx, aCallId; "call_id"
/*140a2925c*/  mov r8, r14
/*140a2925f*/  call sub_141433D50
/*140a29264*/  nop
/*140a29265*/  mov r13d, 0Dh
/*140a2926b*/  test rax, rax
/*140a2926e*/  jz loc_140A2A095
/*140a29274*/  cmp byte ptr [rax], 3
/*140a29277*/  lea rsi, unk_1417A844B
/*140a2927e*/  jnz loc_140A2A09C
/*140a29284*/  mov r13, [rax+18h]
/*140a29288*/  test r13, r13
/*140a2928b*/  js loc_140A2D378
/*140a29291*/  jz loc_140A2CD66
/*140a29297*/  mov rsi, [rax+10h]
/*140a2929b*/  jmp loc_140A2A09C
/*140a292a0*/ loc_140A292A0: mov rcx, [rax]; jumptable 0000000140A290D9 case 9  // jumptable 0000000140A290D9 case 9
/*140a292a3*/  mov rdx, 6E696E6F73616572h
/*140a292ad*/  xor rcx, rdx
/*140a292b0*/  movzx eax, byte ptr [rax+8]
/*140a292b4*/  xor rax, 67h
/*140a292b8*/  or rax, rcx
/*140a292bb*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a292c1*/  mov rax, [rbp+580h+var_1C8]
/*140a292c8*/  mov [rbp+580h+var_270], rax
/*140a292cf*/  mov edx, 11h
/*140a292d4*/  lea rcx, aEncryptedConte_0; "encrypted_content"
/*140a292db*/  mov r8, r14
/*140a292de*/  call sub_141433D50
/*140a292e3*/  nop
/*140a292e4*/  test rax, rax
/*140a292e7*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a292ed*/  cmp byte ptr [rax], 3
/*140a292f0*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a292f6*/  mov r9, [rax+18h]
/*140a292fa*/  cmp r9, 1Dh
/*140a292fe*/  jb def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a29304*/  mov r8, [rax+10h]
/*140a29308*/  movdqu xmm0, xmmword ptr [r8]
/*140a2930d*/  pcmpeqb xmm0, xmm7
/*140a29311*/  movdqu xmm1, xmmword ptr [r8+0Dh]
/*140a29317*/  pcmpeqb xmm1, xmm6
/*140a2931b*/  pand xmm1, xmm0
/*140a2931f*/  pmovmskb eax, xmm1
/*140a29323*/  cmp eax, 0FFFFh
/*140a29328*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2932e*/  add r9, 0FFFFFFFFFFFFFFE3h
/*140a29332*/  add r8, 1Dh
/*140a29336*/  mov rax, [rbp+580h+var_1C8]
/*140a2933d*/  mov [rbp+580h+var_270], rax
/*140a29344*/  lea rcx, [rbp+580h+var_180]
/*140a2934b*/  lea rdx, unk_1417A4B6D
/*140a29352*/  call sub_140443B90
/*140a29357*/  nop
/*140a29358*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2935f*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*140a29363*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a29369*/  mov [rbp+580h+var_108], rax
/*140a29370*/  mov rcx, qword ptr [rbp+580h+var_180+8]
/*140a29377*/  mov rax, qword ptr [rbp+580h+var_170]
/*140a2937e*/  mov [rbp+580h+var_F8], rcx
/*140a29385*/  mov qword ptr [rbp+580h+var_180], rcx
/*140a2938c*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a29393*/  lea rax, [rbp+580h+var_170]
/*140a2939a*/  movdqu xmmword ptr [rax], xmm8
/*140a2939f*/ loc_140A2939F: lea rcx, [rbp+580h+var_1C0]
/*140a293a6*/  lea rdx, [rbp+580h+var_180]
/*140a293ad*/  call sub_1408A8DF0
/*140a293b2*/  nop
/*140a293b3*/  movzx ebx, byte ptr [rbp+580h+var_1C0]
/*140a293ba*/  cmp bl, 0FFh
/*140a293bd*/  jz loc_140A2BFC7
/*140a293c3*/  lea rax, [rbp+580h+var_1C0+1]
/*140a293ca*/  movdqu xmm0, xmmword ptr [rax]
/*140a293ce*/  movdqu xmm1, xmmword ptr [rax+0Fh]
/*140a293d3*/  movdqu [rbp+580h+var_2B0+0Fh], xmm1
/*140a293db*/  movdqa [rbp+580h+var_2B0], xmm0
/*140a293e3*/  jmp loc_140A2BFD4
/*140a293e8*/ loc_140A293E8: mov dword ptr [rbp+580h+var_268], 0
/*140a293f2*/  lea rbx, unk_1417A3EF7
/*140a293f9*/ loc_140A293F9: cmp [rbp+580h+var_300], 0
/*140a29401*/  jz loc_140A296EE
/*140a29407*/ loc_140A29407: mov qword ptr [rbp+580h+var_240], 0
/*140a29412*/  mov [rbp+580h+var_230], 0
/*140a2941d*/  call nullsub_1
/*140a29422*/  mov ecx, 4
/*140a29427*/  mov edx, 1
/*140a2942c*/  call sub_140001650
/*140a29431*/  test rax, rax
/*140a29434*/  jz loc_140A2E22A
/*140a2943a*/  mov dword ptr [rax], 656C6F72h
/*140a29440*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a2944b*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a29452*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a2945d*/  call nullsub_1
/*140a29462*/  mov ecx, 9
/*140a29467*/  mov edx, 1
/*140a2946c*/  call sub_140001650
/*140a29471*/  test rax, rax
/*140a29474*/  mov [rbp+580h+var_108], rax
/*140a2947b*/  jz loc_140A2E215
/*140a29481*/  mov r10, rax
/*140a29484*/  mov rax, 6E61747369737361h
/*140a2948e*/  mov [r10], rax
/*140a29491*/  mov byte ptr [r10+8], 74h ; 't'
/*140a29496*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2949d*/  mov qword ptr [rbp+580h+var_180+8], 9
/*140a294a8*/  mov qword ptr [rbp+580h+var_170], r10
/*140a294af*/  mov qword ptr [rbp+580h+var_170+8], 9
/*140a294ba*/ loc_140A294BA: lea rcx, [rbp+580h+var_1C0]
/*140a294c1*/  lea rdx, [rbp+580h+var_240]
/*140a294c8*/  lea r8, [rbp+580h+var_2B0]
/*140a294cf*/  lea r9, [rbp+580h+var_180]
/*140a294d6*/  call sub_140307860
/*140a294db*/  nop
/*140a294dc*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a294e3*/  jz short loc_140A294F2
/*140a294e5*/ loc_140A294E5: lea rcx, [rbp+580h+var_1C0]
/*140a294ec*/  call sub_1400104F0
/*140a294f1*/  nop
/*140a294f2*/ loc_140A294F2: call nullsub_1
/*140a294f7*/  mov ecx, 7
/*140a294fc*/  mov edx, 1
/*140a29501*/  call sub_140001650
/*140a29506*/  test rax, rax
/*140a29509*/  jz loc_140A2E200
/*140a2950f*/  mov dword ptr [rax+3], 746E6574h
/*140a29516*/  mov dword ptr [rax], 746E6F63h
/*140a2951c*/  mov qword ptr [rbp+580h+var_260], 7
/*140a29527*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2952e*/  mov qword ptr [rbp+580h+var_250], 7
/*140a29539*/  mov rax, [rbp+580h+var_300]
/*140a29540*/  mov qword ptr [rbp+580h+var_2A0], rax
/*140a29547*/  movdqu xmm0, [rbp+580h+var_310]
/*140a2954f*/  movdqa [rbp+580h+var_2B0], xmm0
/*140a29557*/  mov qword ptr [rbp+580h+var_310], 0
/*140a29562*/  mov qword ptr [rbp+580h+var_310+8], 8
/*140a2956d*/  mov [rbp+580h+var_300], 0
/*140a29578*/  mov [rbp+580h+var_209], 1
/*140a2957f*/ loc_140A2957F: lea rcx, [rbp+580h+var_180]
/*140a29586*/  lea rdx, [rbp+580h+var_2B0]
/*140a2958d*/  call sub_140467C90
/*140a29592*/  nop
/*140a29593*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2959a*/  jz loc_140A2DE3C
/*140a295a0*/  movdqu xmm0, [rbp+580h+var_180]
/*140a295a8*/  movdqu xmm1, [rbp+580h+var_170]
/*140a295b0*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a295b8*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a295c0*/  mov [rbp+580h+var_209], 0
/*140a295c7*/  lea rcx, [rbp+580h+var_180]
/*140a295ce*/  lea rdx, [rbp+580h+var_240]
/*140a295d5*/  lea r8, [rbp+580h+var_260]
/*140a295dc*/  lea r9, [rbp+580h+var_1C0]
/*140a295e3*/  call sub_140307860
/*140a295e8*/  nop
/*140a295e9*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a295f0*/  jz short loc_140A295FF
/*140a295f2*/ loc_140A295F2: lea rcx, [rbp+580h+var_180]
/*140a295f9*/  call sub_1400104F0
/*140a295fe*/  nop
/*140a295ff*/ loc_140A295FF: mov rcx, qword ptr [rbp+580h+var_2B0+8]
/*140a29606*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2960d*/  mov [rbp+580h+var_F8], rax
/*140a29614*/  mov [rbp+580h+var_368], rcx
/*140a2961b*/  mov [rbp+580h+var_108], 0
/*140a29626*/  nop word ptr [rax+rax+00000000h]
/*140a29630*/ loc_140A29630: mov rax, [rbp+580h+var_108]
/*140a29637*/  cmp [rbp+580h+var_F8], rax
/*140a2963e*/  jz short loc_140A29659
/*140a29640*/  inc rax
/*140a29643*/  mov [rbp+580h+var_108], rax
/*140a2964a*/  lea rsi, [rcx+20h]
/*140a2964e*/ loc_140A2964E: call sub_1402C3260
/*140a29653*/  nop
/*140a29654*/  mov rcx, rsi
/*140a29657*/  jmp short loc_140A29630
/*140a29659*/ loc_140A29659: mov rdx, qword ptr [rbp+580h+var_2B0]
/*140a29660*/  test rdx, rdx
/*140a29663*/  jz short loc_140A2967B
/*140a29665*/  mov rcx, qword ptr [rbp+580h+var_2B0+8]
/*140a2966c*/  shl rdx, 5
/*140a29670*/  mov r8d, 8
/*140a29676*/  call sub_140001660
/*140a2967b*/ loc_140A2967B: mov rax, [rbp+580h+var_230]
/*140a29682*/  lea rcx, [rbp+580h+var_200+8]
/*140a29689*/  mov [rcx+10h], rax
/*140a2968d*/  movups xmm0, [rbp+580h+var_240]
/*140a29694*/  movups xmmword ptr [rcx], xmm0
/*140a29697*/  mov byte ptr [rbp+580h+var_200], 5
/*140a2969e*/  mov rsi, [rbp+580h+var_350]
/*140a296a5*/  cmp rsi, [rbp+580h+var_360]
/*140a296ac*/  jnz short loc_140A296BB
/*140a296ae*/ loc_140A296AE: lea rcx, [rbp+580h+var_360]
/*140a296b5*/  call sub_1416890A0
/*140a296ba*/  nop
/*140a296bb*/ loc_140A296BB: mov rax, [rbp+580h+var_358]
/*140a296c2*/  mov rcx, rsi
/*140a296c5*/  shl rcx, 5
/*140a296c9*/  movdqu xmm0, [rbp+580h+var_200]
/*140a296d1*/  movdqu xmm1, [rbp+580h+var_1F0]
/*140a296d9*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a296df*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a296e4*/  inc rsi
/*140a296e7*/  mov [rbp+580h+var_350], rsi
/*140a296ee*/ loc_140A296EE: mov [rbp+580h+var_108], rbx
/*140a296f5*/  mov rax, [rbp+580h+var_1C8]
/*140a296fc*/  mov [rbp+580h+var_270], rax
/*140a29703*/ loc_140A29703: mov edx, 7
/*140a29708*/  lea rcx, aContent_6; "content"
/*140a2970f*/  mov r8, r14
/*140a29712*/  call sub_141433D50
/*140a29717*/  nop
/*140a29718*/  test rax, rax
/*140a2971b*/  jz loc_140A29FCE
/*140a29721*/  movzx ecx, byte ptr [rax]
/*140a29724*/  cmp ecx, 3
/*140a29727*/  jz loc_140A2A759
/*140a2972d*/  cmp ecx, 4
/*140a29730*/  jnz loc_140A29FCE
/*140a29736*/  mov qword ptr [rbp+580h+var_330], 0
/*140a29741*/  mov qword ptr [rbp+580h+var_330+8], 8
/*140a2974c*/  mov qword ptr [rbp+580h+var_330+10h], 0
/*140a29757*/  mov r14, [rax+10h]
/*140a2975b*/  mov r13, [rax+18h]
/*140a2975f*/  shl r13, 5
/*140a29763*/  add r13, r14
/*140a29766*/  nop word ptr [rax+rax+00000000h]
/*140a29770*/ loc_140A29770: cmp r14, r13
/*140a29773*/  jz loc_140A2A9E8
/*140a29779*/ loc_140A29779: mov rsi, r14
/*140a2977c*/  mov edx, 4
/*140a29781*/  mov rcx, r12
/*140a29784*/  mov r8, r14
/*140a29787*/  call sub_141433D50
/*140a2978c*/  nop
/*140a2978d*/  lea r14, [rsi+20h]
/*140a29791*/  test rax, rax
/*140a29794*/  jz short loc_140A29770
/*140a29796*/  cmp byte ptr [rax], 3
/*140a29799*/  jnz short loc_140A29770
/*140a2979b*/  mov rcx, [rax+10h]
/*140a2979f*/  mov rax, [rax+18h]
/*140a297a3*/  cmp rax, 0Bh
/*140a297a7*/  jz short loc_140A297D4
/*140a297a9*/  cmp rax, 0Ah
/*140a297ad*/  jnz short loc_140A29770
/*140a297af*/  mov rax, [rcx]
/*140a297b2*/  mov rdx, 65745F7475706E69h
/*140a297bc*/  xor rax, rdx
/*140a297bf*/  movzx ecx, word ptr [rcx+8]
/*140a297c3*/  xor rcx, 7478h
/*140a297ca*/  or rcx, rax
/*140a297cd*/  jnz short loc_140A29770
/*140a297cf*/  jmp loc_140A29D59
/*140a297d4*/ loc_140A297D4: mov rax, [rcx]
/*140a297d7*/  mov rdx, 745F74757074756Fh
/*140a297e1*/  xor rax, rdx
/*140a297e4*/  mov rdx, [rcx+3]
/*140a297e8*/  mov r8, 747865745F747570h
/*140a297f2*/  xor rdx, r8
/*140a297f5*/  or rdx, rax
/*140a297f8*/  jz loc_140A29D59
/*140a297fe*/  mov rax, [rcx]
/*140a29801*/  mov rdx, 6D695F7475706E69h
/*140a2980b*/  xor rax, rdx
/*140a2980e*/  mov rcx, [rcx+3]
/*140a29812*/  mov rdx, 6567616D695F7475h
/*140a2981c*/  xor rcx, rdx
/*140a2981f*/  or rcx, rax
/*140a29822*/  jnz loc_140A29770
/*140a29828*/  mov edx, 9
/*140a2982d*/  lea rcx, aImageUrl; "image_url"
/*140a29834*/  mov r8, rsi
/*140a29837*/  call sub_141433D50
/*140a2983c*/  nop
/*140a2983d*/  test rax, rax
/*140a29840*/  jz loc_140A29770
/*140a29846*/  cmp byte ptr [rax], 3
/*140a29849*/  jnz loc_140A29770
/*140a2984f*/  mov rsi, [rax+18h]
/*140a29853*/  cmp rsi, 5
/*140a29857*/  jb loc_140A29770
/*140a2985d*/  mov rbx, [rax+10h]
/*140a29861*/  mov eax, [rbx]
/*140a29863*/  mov ecx, 61746164h
/*140a29868*/  xor eax, ecx
/*140a2986a*/  movzx ecx, byte ptr [rbx+4]
/*140a2986e*/  xor ecx, 3Ah
/*140a29871*/  or ecx, eax
/*140a29873*/  jnz loc_140A29770
/*140a29879*/  add rsi, 0FFFFFFFFFFFFFFFBh
/*140a2987d*/  add rbx, 5
/*140a29881*/  mov [rsp+600h+var_5E0], 8
/*140a2988a*/  lea rcx, [rbp+580h+var_180]
/*140a29891*/  mov rdx, rbx
/*140a29894*/  mov r8, rsi
/*140a29897*/  lea r9, aBase64_0; ";base64,"
/*140a2989e*/  call sub_1414A2990
/*140a298a3*/  nop
/*140a298a4*/  lea rcx, [rbp+580h+var_1C0]
/*140a298ab*/  lea rdx, [rbp+580h+var_180]
/*140a298b2*/  call sub_140A6C6F0
/*140a298b7*/  nop
/*140a298b8*/  cmp byte ptr [rbp+580h+var_1C0], 0
/*140a298bf*/  jz loc_140A29770
/*140a298c5*/  mov rax, qword ptr [rbp+580h+var_1C0+8]
/*140a298cc*/  mov rcx, qword ptr [rbp+580h+var_1B0]
/*140a298d3*/  sub rsi, rcx
/*140a298d6*/  add rcx, rbx
/*140a298d9*/  mov qword ptr [rbp+580h+var_430], rbx
/*140a298e0*/  mov qword ptr [rbp+580h+var_430+8], rax
/*140a298e7*/  mov qword ptr [rbp+580h+var_3A0], rcx
/*140a298ee*/  mov qword ptr [rbp+580h+var_3A0+8], rsi
/*140a298f5*/  mov qword ptr [rbp+580h+var_3E0], 0
/*140a29900*/  mov qword ptr [rbp+580h+var_3D0], 0
/*140a2990b*/  call nullsub_1
/*140a29910*/  mov ecx, 4
/*140a29915*/  mov edx, 1
/*140a2991a*/  call sub_140001650
/*140a2991f*/  test rax, rax
/*140a29922*/  jz loc_140A2E59C
/*140a29928*/  mov dword ptr [rax], 65707974h
/*140a2992e*/  mov qword ptr [rbp+580h+var_200], 4
/*140a29939*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a29940*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2994b*/  mov [rbp+580h+var_20A], 1
/*140a29952*/ loc_140A29952: lea rcx, [rbp+580h+var_180]
/*140a29959*/  lea rdx, off_1417A81C8; "image"
/*140a29960*/  call sub_140B56640
/*140a29965*/  nop
/*140a29966*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2996d*/  jz loc_140A2E022
/*140a29973*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2997b*/  movdqu xmm1, [rbp+580h+var_170]
/*140a29983*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2998b*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a29993*/  mov [rbp+580h+var_20A], 0
/*140a2999a*/  lea rcx, [rbp+580h+var_180]
/*140a299a1*/  lea rdx, [rbp+580h+var_3E0]
/*140a299a8*/  lea r8, [rbp+580h+var_200]
/*140a299af*/  lea r9, [rbp+580h+var_1C0]
/*140a299b6*/  call sub_140307860
/*140a299bb*/  nop
/*140a299bc*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a299c3*/  jz short loc_140A299D2
/*140a299c5*/ loc_140A299C5: lea rcx, [rbp+580h+var_180]
/*140a299cc*/  call sub_1400104F0
/*140a299d1*/  nop
/*140a299d2*/ loc_140A299D2: call nullsub_1
/*140a299d7*/  mov ecx, 6
/*140a299dc*/  mov edx, 1
/*140a299e1*/  call sub_140001650
/*140a299e6*/  test rax, rax
/*140a299e9*/  jz loc_140A2E587
/*140a299ef*/  mov word ptr [rax+4], 6563h
/*140a299f5*/  mov dword ptr [rax], 72756F73h
/*140a299fb*/  mov qword ptr [rbp+580h+var_2F8], 6
/*140a29a06*/  mov qword ptr [rbp+580h+var_2F8+8], rax
/*140a29a0d*/  mov qword ptr [rbp+580h+var_2E8], 6
/*140a29a18*/  mov qword ptr [rbp+580h+var_240], 0
/*140a29a23*/  mov [rbp+580h+var_230], 0
/*140a29a2e*/  call nullsub_1
/*140a29a33*/  mov ecx, 4
/*140a29a38*/  mov edx, 1
/*140a29a3d*/  call sub_140001650
/*140a29a42*/  test rax, rax
/*140a29a45*/  jz loc_140A2E5B1
/*140a29a4b*/  mov dword ptr [rax], 65707974h
/*140a29a51*/  mov qword ptr [rbp+580h+var_260], 4
/*140a29a5c*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a29a63*/  mov qword ptr [rbp+580h+var_250], 4
/*140a29a6e*/  mov [rbp+580h+var_20B], 1
/*140a29a75*/ loc_140A29A75: lea rcx, [rbp+580h+var_180]
/*140a29a7c*/  lea rdx, off_1417A81F8; "base64"
/*140a29a83*/  call sub_140B56640
/*140a29a88*/  nop
/*140a29a89*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29a90*/  jz loc_140A2E0A0
/*140a29a96*/  movdqu xmm0, [rbp+580h+var_180]
/*140a29a9e*/  movdqu xmm1, [rbp+580h+var_170]
/*140a29aa6*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a29aae*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a29ab6*/  mov [rbp+580h+var_20B], 0
/*140a29abd*/  lea rcx, [rbp+580h+var_180]
/*140a29ac4*/  lea rdx, [rbp+580h+var_240]
/*140a29acb*/  lea r8, [rbp+580h+var_260]
/*140a29ad2*/  lea r9, [rbp+580h+var_1C0]
/*140a29ad9*/  call sub_140307860
/*140a29ade*/  nop
/*140a29adf*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29ae6*/  jz short loc_140A29AF5
/*140a29ae8*/ loc_140A29AE8: lea rcx, [rbp+580h+var_180]
/*140a29aef*/  call sub_1400104F0
/*140a29af4*/  nop
/*140a29af5*/ loc_140A29AF5: call nullsub_1
/*140a29afa*/  mov ecx, 0Ah
/*140a29aff*/  mov edx, 1
/*140a29b04*/  call sub_140001650
/*140a29b09*/  test rax, rax
/*140a29b0c*/  jz loc_140A2E5C6
/*140a29b12*/  mov rcx, 79745F616964656Dh
/*140a29b1c*/  mov [rax], rcx
/*140a29b1f*/  mov word ptr [rax+8], 6570h
/*140a29b25*/  mov qword ptr [rbp+580h+var_260], 0Ah
/*140a29b30*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a29b37*/  mov qword ptr [rbp+580h+var_250], 0Ah
/*140a29b42*/  mov [rbp+580h+var_20C], 1
/*140a29b49*/ loc_140A29B49: lea rcx, [rbp+580h+var_180]
/*140a29b50*/  lea rdx, [rbp+580h+var_430]
/*140a29b57*/  call sub_140B56640
/*140a29b5c*/  nop
/*140a29b5d*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29b64*/  jz loc_140A2E061
/*140a29b6a*/  movdqu xmm0, [rbp+580h+var_180]
/*140a29b72*/  movdqu xmm1, [rbp+580h+var_170]
/*140a29b7a*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a29b82*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a29b8a*/  mov [rbp+580h+var_20C], 0
/*140a29b91*/  lea rcx, [rbp+580h+var_180]
/*140a29b98*/  lea rdx, [rbp+580h+var_240]
/*140a29b9f*/  lea r8, [rbp+580h+var_260]
/*140a29ba6*/  lea r9, [rbp+580h+var_1C0]
/*140a29bad*/  call sub_140307860
/*140a29bb2*/  nop
/*140a29bb3*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29bba*/  jz short loc_140A29BC9
/*140a29bbc*/ loc_140A29BBC: lea rcx, [rbp+580h+var_180]
/*140a29bc3*/  call sub_1400104F0
/*140a29bc8*/  nop
/*140a29bc9*/ loc_140A29BC9: call nullsub_1
/*140a29bce*/  mov ecx, 4
/*140a29bd3*/  mov edx, 1
/*140a29bd8*/  call sub_140001650
/*140a29bdd*/  test rax, rax
/*140a29be0*/  jz loc_140A2E572
/*140a29be6*/  mov dword ptr [rax], 61746164h
/*140a29bec*/  mov qword ptr [rbp+580h+var_260], 4
/*140a29bf7*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a29bfe*/  mov qword ptr [rbp+580h+var_250], 4
/*140a29c09*/  mov [rbp+580h+var_20D], 1
/*140a29c10*/ loc_140A29C10: lea rcx, [rbp+580h+var_180]
/*140a29c17*/  lea rdx, [rbp+580h+var_3A0]
/*140a29c1e*/  call sub_140B56640
/*140a29c23*/  nop
/*140a29c24*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29c2b*/  jz loc_140A2E0DF
/*140a29c31*/  movdqu xmm0, [rbp+580h+var_180]
/*140a29c39*/  movdqu xmm1, [rbp+580h+var_170]
/*140a29c41*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a29c49*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a29c51*/  mov [rbp+580h+var_20D], 0
/*140a29c58*/  lea rcx, [rbp+580h+var_180]
/*140a29c5f*/  lea rdx, [rbp+580h+var_240]
/*140a29c66*/  lea r8, [rbp+580h+var_260]
/*140a29c6d*/  lea r9, [rbp+580h+var_1C0]
/*140a29c74*/  call sub_140307860
/*140a29c79*/  nop
/*140a29c7a*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29c81*/  jz short loc_140A29C90
/*140a29c83*/ loc_140A29C83: lea rcx, [rbp+580h+var_180]
/*140a29c8a*/  call sub_1400104F0
/*140a29c8f*/  nop
/*140a29c90*/ loc_140A29C90: mov rax, [rbp+580h+var_230]
/*140a29c97*/  lea rcx, [rbp+580h+var_200+8]
/*140a29c9e*/  mov [rcx+10h], rax
/*140a29ca2*/  movdqu xmm0, [rbp+580h+var_240]
/*140a29caa*/  movdqu xmmword ptr [rcx], xmm0
/*140a29cae*/  mov byte ptr [rbp+580h+var_200], 5
/*140a29cb5*/  mov [rbp+580h+var_2BF], 0
/*140a29cbc*/ loc_140A29CBC: lea rcx, [rbp+580h+var_180]
/*140a29cc3*/  lea rdx, [rbp+580h+var_3E0]
/*140a29cca*/  lea r8, [rbp+580h+var_2F8]
/*140a29cd1*/  lea r9, [rbp+580h+var_200]
/*140a29cd8*/  call sub_140307860
/*140a29cdd*/  nop
/*140a29cde*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a29ce5*/  jz short loc_140A29CF4
/*140a29ce7*/ loc_140A29CE7: lea rcx, [rbp+580h+var_180]
/*140a29cee*/  call sub_1400104F0
/*140a29cf3*/  nop
/*140a29cf4*/ loc_140A29CF4: mov rax, qword ptr [rbp+580h+var_3D0]
/*140a29cfb*/  lea rcx, [rbp+580h+var_2B0+8]
/*140a29d02*/  mov [rcx+10h], rax
/*140a29d06*/  movdqu xmm0, [rbp+580h+var_3E0]
/*140a29d0e*/  movdqu xmmword ptr [rcx], xmm0
/*140a29d12*/  mov byte ptr [rbp+580h+var_2B0], 5
/*140a29d19*/  mov rsi, qword ptr [rbp+580h+var_330+10h]
/*140a29d20*/  cmp rsi, qword ptr [rbp+580h+var_330]
/*140a29d27*/  jnz short loc_140A29D36
/*140a29d29*/ loc_140A29D29: lea rcx, [rbp+580h+var_330]
/*140a29d30*/  call sub_1416890A0
/*140a29d35*/  nop
/*140a29d36*/ loc_140A29D36: mov rax, qword ptr [rbp+580h+var_330+8]
/*140a29d3d*/  mov rcx, rsi
/*140a29d40*/  shl rcx, 5
/*140a29d44*/  movdqu xmm0, [rbp+580h+var_2B0]
/*140a29d4c*/  movdqu xmm1, [rbp+580h+var_2A0]
/*140a29d54*/  jmp loc_140A29FB4
/*140a29d59*/ loc_140A29D59: mov edx, 4
/*140a29d5e*/  lea rcx, aText_10; "text"
/*140a29d65*/  mov r8, rsi
/*140a29d68*/  call sub_141433D50
/*140a29d6d*/  nop
/*140a29d6e*/  test rax, rax
/*140a29d71*/  jz loc_140A29770
/*140a29d77*/  cmp byte ptr [rax], 3
/*140a29d7a*/  jnz loc_140A29770
/*140a29d80*/  mov rbx, [rax+18h]
/*140a29d84*/  test rbx, rbx
/*140a29d87*/  jz loc_140A29770
/*140a29d8d*/  mov rsi, [rax+10h]
/*140a29d91*/  mov qword ptr [rbp+580h+var_260], 0
/*140a29d9c*/  mov qword ptr [rbp+580h+var_250], 0
/*140a29da7*/  call nullsub_1
/*140a29dac*/  mov ecx, 4
/*140a29db1*/  mov edx, 1
/*140a29db6*/  call sub_140001650
/*140a29dbb*/  test rax, rax
/*140a29dbe*/  jz loc_140A2E50D
/*140a29dc4*/  mov dword ptr [rax], 65707974h
/*140a29dca*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a29dd5*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a29ddc*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a29de7*/  call nullsub_1
/*140a29dec*/  mov ecx, 4
/*140a29df1*/  mov edx, 1
/*140a29df6*/  call sub_140001650
/*140a29dfb*/  test rax, rax
/*140a29dfe*/  mov [rbp+580h+var_F8], rax
/*140a29e05*/  jz loc_140A2E522
/*140a29e0b*/  mov dword ptr [rax], 74786574h
/*140a29e11*/  mov byte ptr [rbp+580h+var_180], 3
/*140a29e18*/  mov qword ptr [rbp+580h+var_180+8], 4
/*140a29e23*/  mov qword ptr [rbp+580h+var_170], rax
/*140a29e2a*/  mov qword ptr [rbp+580h+var_170+8], 4
/*140a29e35*/ loc_140A29E35: lea rcx, [rbp+580h+var_1C0]
/*140a29e3c*/  lea rdx, [rbp+580h+var_260]
/*140a29e43*/  lea r8, [rbp+580h+var_2B0]
/*140a29e4a*/  lea r9, [rbp+580h+var_180]
/*140a29e51*/  call sub_140307860
/*140a29e56*/  nop
/*140a29e57*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a29e5e*/  jz short loc_140A29E6D
/*140a29e60*/ loc_140A29E60: lea rcx, [rbp+580h+var_1C0]
/*140a29e67*/  call sub_1400104F0
/*140a29e6c*/  nop
/*140a29e6d*/ loc_140A29E6D: call nullsub_1
/*140a29e72*/  mov ecx, 4
/*140a29e77*/  mov edx, 1
/*140a29e7c*/  call sub_140001650
/*140a29e81*/  test rax, rax
/*140a29e84*/  jz loc_140A2E537
/*140a29e8a*/  mov dword ptr [rax], 74786574h
/*140a29e90*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a29e9b*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a29ea2*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a29ead*/  test rbx, rbx
/*140a29eb0*/  js loc_140A2DCB0
/*140a29eb6*/  mov [rbp+580h+var_F8], rsi
/*140a29ebd*/  call nullsub_1
/*140a29ec2*/  mov esi, 1
/*140a29ec7*/  mov edx, 1
/*140a29ecc*/  mov rcx, rbx
/*140a29ecf*/  call sub_140001650
/*140a29ed4*/  test rax, rax
/*140a29ed7*/  jz loc_140A2DCB2
/*140a29edd*/  mov r12, rax
/*140a29ee0*/  mov rcx, rax
/*140a29ee3*/  mov rdx, [rbp+580h+var_F8]
/*140a29eea*/  mov r8, rbx
/*140a29eed*/  call sub_141684120
/*140a29ef2*/  mov byte ptr [rbp+580h+var_180], 3
/*140a29ef9*/  mov qword ptr [rbp+580h+var_180+8], rbx
/*140a29f00*/  mov qword ptr [rbp+580h+var_170], r12
/*140a29f07*/  mov qword ptr [rbp+580h+var_170+8], rbx
/*140a29f0e*/  mov [rbp+580h+var_2C0], 0
/*140a29f15*/ loc_140A29F15: lea rcx, [rbp+580h+var_1C0]
/*140a29f1c*/  lea rdx, [rbp+580h+var_260]
/*140a29f23*/  lea r8, [rbp+580h+var_2B0]
/*140a29f2a*/  lea r9, [rbp+580h+var_180]
/*140a29f31*/  call sub_140307860
/*140a29f36*/  nop
/*140a29f37*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a29f3e*/  lea r12, aType_8; "type"
/*140a29f45*/  jz short loc_140A29F54
/*140a29f47*/ loc_140A29F47: lea rcx, [rbp+580h+var_1C0]
/*140a29f4e*/  call sub_1400104F0
/*140a29f53*/  nop
/*140a29f54*/ loc_140A29F54: mov rax, qword ptr [rbp+580h+var_250]
/*140a29f5b*/  lea rcx, [rbp+580h+var_200+8]
/*140a29f62*/  mov [rcx+10h], rax
/*140a29f66*/  movdqu xmm0, [rbp+580h+var_260]
/*140a29f6e*/  movdqu xmmword ptr [rcx], xmm0
/*140a29f72*/  mov byte ptr [rbp+580h+var_200], 5
/*140a29f79*/  mov rsi, qword ptr [rbp+580h+var_330+10h]
/*140a29f80*/  cmp rsi, qword ptr [rbp+580h+var_330]
/*140a29f87*/  jnz short loc_140A29F96
/*140a29f89*/ loc_140A29F89: lea rcx, [rbp+580h+var_330]
/*140a29f90*/  call sub_1416890A0
/*140a29f95*/  nop
/*140a29f96*/ loc_140A29F96: mov rax, qword ptr [rbp+580h+var_330+8]
/*140a29f9d*/  mov rcx, rsi
/*140a29fa0*/  shl rcx, 5
/*140a29fa4*/  movdqu xmm0, [rbp+580h+var_200]
/*140a29fac*/  movdqu xmm1, [rbp+580h+var_1F0]
/*140a29fb4*/ loc_140A29FB4: movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a29fba*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a29fbf*/  inc rsi
/*140a29fc2*/  mov qword ptr [rbp+580h+var_330+10h], rsi
/*140a29fc9*/  jmp loc_140A29770
/*140a29fce*/ loc_140A29FCE: mov qword ptr [rbp+580h+var_240], 0
/*140a29fd9*/  mov qword ptr [rbp+580h+var_240+8], 8
/*140a29fe4*/  mov [rbp+580h+var_230], 0
/*140a29fef*/  jmp loc_140A2B947
/*140a29ff4*/ loc_140A29FF4: lea rsi, unk_1417A844B
/*140a29ffb*/ loc_140A29FFB: call nullsub_1
/*140a2a000*/  mov ebx, 1
/*140a2a005*/  mov edx, 1
/*140a2a00a*/  mov rcx, r13
/*140a2a00d*/  call sub_140001650
/*140a2a012*/  test rax, rax
/*140a2a015*/  jz loc_140A2E1B1
/*140a2a01b*/  mov [rbp+580h+var_3A8], rax
/*140a2a022*/  mov rcx, rax
/*140a2a025*/  mov rdx, rsi
/*140a2a028*/  mov [rbp+580h+var_368], r13
/*140a2a02f*/  mov r8, r13
/*140a2a032*/  call sub_141684120
/*140a2a037*/  xor ebx, ebx
/*140a2a039*/ loc_140A2A039: mov edx, 4
/*140a2a03e*/  lea rcx, aName_7; "name"
/*140a2a045*/  mov r8, r14
/*140a2a048*/  call sub_141433D50
/*140a2a04d*/  nop
/*140a2a04e*/ loc_140A2A04E: mov r13d, 4
/*140a2a054*/  test rax, rax
/*140a2a057*/  jz loc_140A2A6CB
/*140a2a05d*/  cmp byte ptr [rax], 3
/*140a2a060*/  lea rsi, aTool; "tool"
/*140a2a067*/  jnz loc_140A2A6D2
/*140a2a06d*/  mov r13, [rax+18h]
/*140a2a071*/  test r13, r13
/*140a2a074*/  js loc_140A2D39D
/*140a2a07a*/  mov dword ptr [rbp+580h+var_108], ebx
/*140a2a080*/  jz loc_140A2CD84
/*140a2a086*/  mov rsi, [rax+10h]
/*140a2a08a*/  mov ebx, dword ptr [rbp+580h+var_108]
/*140a2a090*/  jmp loc_140A2A6D2
/*140a2a095*/ loc_140A2A095: lea rsi, unk_1417A844B
/*140a2a09c*/ loc_140A2A09C: call nullsub_1
/*140a2a0a1*/  mov ebx, 1
/*140a2a0a6*/  mov edx, 1
/*140a2a0ab*/  mov rcx, r13
/*140a2a0ae*/  call sub_140001650
/*140a2a0b3*/  test rax, rax
/*140a2a0b6*/  jz loc_140A2E1B9
/*140a2a0bc*/  mov [rbp+580h+var_2B8], rax
/*140a2a0c3*/  mov rcx, rax
/*140a2a0c6*/  mov rdx, rsi
/*140a2a0c9*/  mov [rbp+580h+var_108], r13
/*140a2a0d0*/  mov r8, r13
/*140a2a0d3*/  call sub_141684120
/*140a2a0d8*/  xor ebx, ebx
/*140a2a0da*/ loc_140A2A0DA: mov edx, 6
/*140a2a0df*/  lea rcx, aOutput_1; "output"
/*140a2a0e6*/  mov r8, r14
/*140a2a0e9*/  call sub_141433D50
/*140a2a0ee*/  nop
/*140a2a0ef*/  lea rcx, [rbp+580h+var_260]
/*140a2a0f6*/  mov rdx, rax
/*140a2a0f9*/  call flatten_function_call_output
/*140a2a0fe*/  nop
/*140a2a0ff*/  mov qword ptr [rbp+580h+var_240], 0
/*140a2a10a*/  mov [rbp+580h+var_230], 0
/*140a2a115*/  call nullsub_1
/*140a2a11a*/  mov ecx, 4
/*140a2a11f*/  mov edx, 1
/*140a2a124*/  call sub_140001650
/*140a2a129*/  test rax, rax
/*140a2a12c*/  jz loc_140A2E187
/*140a2a132*/  mov dword ptr [rax], 65707974h
/*140a2a138*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2a143*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2a14a*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2a155*/  call nullsub_1
/*140a2a15a*/  mov ecx, 0Bh
/*140a2a15f*/  mov edx, 1
/*140a2a164*/  call sub_140001650
/*140a2a169*/  test rax, rax
/*140a2a16c*/  mov [rbp+580h+var_F8], rax
/*140a2a173*/  jz loc_140A2E172
/*140a2a179*/  mov r10, rax
/*140a2a17c*/  mov rax, 7365725F6C6F6F74h
/*140a2a186*/  mov [r10], rax
/*140a2a189*/  mov dword ptr [r10+7], 746C7573h
/*140a2a191*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2a198*/  mov qword ptr [rbp+580h+var_180+8], 0Bh
/*140a2a1a3*/  mov qword ptr [rbp+580h+var_170], r10
/*140a2a1aa*/  mov qword ptr [rbp+580h+var_170+8], 0Bh
/*140a2a1b5*/ loc_140A2A1B5: lea rcx, [rbp+580h+var_1C0]
/*140a2a1bc*/  lea rdx, [rbp+580h+var_240]
/*140a2a1c3*/  lea r8, [rbp+580h+var_200]
/*140a2a1ca*/  lea r9, [rbp+580h+var_180]
/*140a2a1d1*/  call sub_140307860
/*140a2a1d6*/  nop
/*140a2a1d7*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a1de*/  jz short loc_140A2A1ED
/*140a2a1e0*/ loc_140A2A1E0: lea rcx, [rbp+580h+var_1C0]
/*140a2a1e7*/  call sub_1400104F0
/*140a2a1ec*/  nop
/*140a2a1ed*/ loc_140A2A1ED: call nullsub_1
/*140a2a1f2*/  mov ecx, 0Bh
/*140a2a1f7*/  mov edx, 1
/*140a2a1fc*/  call sub_140001650
/*140a2a201*/  test rax, rax
/*140a2a204*/  jz loc_140A2E19C
/*140a2a20a*/  mov rcx, 6573755F6C6F6F74h
/*140a2a214*/  mov [rax], rcx
/*140a2a217*/  mov dword ptr [rax+7], 64695F65h
/*140a2a21e*/  mov qword ptr [rbp+580h+var_200], 0Bh
/*140a2a229*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2a230*/  mov qword ptr [rbp+580h+var_1F0], 0Bh
/*140a2a23b*/  mov esi, 1
/*140a2a240*/  test bl, bl
/*140a2a242*/  mov rbx, [rbp+580h+var_108]
/*140a2a249*/  jnz short loc_140A2A27B
/*140a2a24b*/  call nullsub_1
/*140a2a250*/  mov edx, 1
/*140a2a255*/  mov rcx, rbx
/*140a2a258*/  call sub_140001650
/*140a2a25d*/  test rax, rax
/*140a2a260*/  mov rdx, [rbp+580h+var_2B8]
/*140a2a267*/  jz loc_140A2E288
/*140a2a26d*/  mov rsi, rax
/*140a2a270*/  mov rcx, rax
/*140a2a273*/  mov r8, rbx
/*140a2a276*/  call sub_141684120
/*140a2a27b*/ loc_140A2A27B: mov byte ptr [rbp+580h+var_180], 3
/*140a2a282*/  mov qword ptr [rbp+580h+var_180+8], rbx
/*140a2a289*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a2a290*/  mov qword ptr [rbp+580h+var_170+8], rbx
/*140a2a297*/  mov [rbp+580h+var_2B9], 0
/*140a2a29e*/ loc_140A2A29E: lea rcx, [rbp+580h+var_1C0]
/*140a2a2a5*/  lea rdx, [rbp+580h+var_240]
/*140a2a2ac*/  lea r8, [rbp+580h+var_200]
/*140a2a2b3*/  lea r9, [rbp+580h+var_180]
/*140a2a2ba*/  call sub_140307860
/*140a2a2bf*/  nop
/*140a2a2c0*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a2c7*/  jz short loc_140A2A2D6
/*140a2a2c9*/ loc_140A2A2C9: lea rcx, [rbp+580h+var_1C0]
/*140a2a2d0*/  call sub_1400104F0
/*140a2a2d5*/  nop
/*140a2a2d6*/ loc_140A2A2D6: call nullsub_1
/*140a2a2db*/  mov ecx, 7
/*140a2a2e0*/  mov edx, 1
/*140a2a2e5*/  call sub_140001650
/*140a2a2ea*/  test rax, rax
/*140a2a2ed*/  jz loc_140A2E15D
/*140a2a2f3*/  mov dword ptr [rax+3], 746E6574h
/*140a2a2fa*/  mov dword ptr [rax], 746E6F63h
/*140a2a300*/  mov qword ptr [rbp+580h+var_200], 7
/*140a2a30b*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2a312*/  mov qword ptr [rbp+580h+var_1F0], 7
/*140a2a31d*/  mov [rbp+580h+var_206], 1
/*140a2a324*/ loc_140A2A324: lea rcx, [rbp+580h+var_180]
/*140a2a32b*/  lea rdx, [rbp+580h+var_260]
/*140a2a332*/  call sub_140B842D0
/*140a2a337*/  nop
/*140a2a338*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2a33f*/  jz loc_140A2DDBE
/*140a2a345*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2a34d*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2a355*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2a35d*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2a365*/  mov [rbp+580h+var_206], 0
/*140a2a36c*/  lea rcx, [rbp+580h+var_180]
/*140a2a373*/  lea rdx, [rbp+580h+var_240]
/*140a2a37a*/  lea r8, [rbp+580h+var_200]
/*140a2a381*/  lea r9, [rbp+580h+var_1C0]
/*140a2a388*/  call sub_140307860
/*140a2a38d*/  nop
/*140a2a38e*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2a395*/  jz short loc_140A2A3A4
/*140a2a397*/ loc_140A2A397: lea rcx, [rbp+580h+var_180]
/*140a2a39e*/  call sub_1400104F0
/*140a2a3a3*/  nop
/*140a2a3a4*/ loc_140A2A3A4: mov rax, [rbp+580h+var_230]
/*140a2a3ab*/  lea rcx, [rbp+580h+var_2B0+8]
/*140a2a3b2*/  mov [rcx+10h], rax
/*140a2a3b6*/  movdqu xmm0, [rbp+580h+var_240]
/*140a2a3be*/  movdqu xmmword ptr [rcx], xmm0
/*140a2a3c2*/  mov byte ptr [rbp+580h+var_2B0], 5
/*140a2a3c9*/  mov rax, [rbp+580h+var_350]
/*140a2a3d0*/  test rax, rax
/*140a2a3d3*/  jz short loc_140A2A42A
/*140a2a3d5*/  mov rcx, [rbp+580h+var_358]
/*140a2a3dc*/  shl rax, 5
/*140a2a3e0*/  lea rsi, [rcx+rax]
/*140a2a3e4*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*140a2a3e8*/  test rsi, rsi
/*140a2a3eb*/  jz short loc_140A2A42A
/*140a2a3ed*/  mov [rbp+580h+var_F9], 1
/*140a2a3f4*/ loc_140A2A3F4: mov edx, 4
/*140a2a3f9*/  lea rcx, aRole_4; "role"
/*140a2a400*/  mov r8, rsi
/*140a2a403*/  call sub_141433D50
/*140a2a408*/  nop
/*140a2a409*/  test rax, rax
/*140a2a40c*/  jz short loc_140A2A42A
/*140a2a40e*/  cmp byte ptr [rax], 3
/*140a2a411*/  jnz short loc_140A2A42A
/*140a2a413*/  cmp qword ptr [rax+18h], 4
/*140a2a418*/  jnz short loc_140A2A42A
/*140a2a41a*/  mov rax, [rax+10h]
/*140a2a41e*/  cmp dword ptr [rax], 72657375h
/*140a2a424*/  jz loc_140A2BD94
/*140a2a42a*/ loc_140A2A42A: mov qword ptr [rbp+580h+var_2F8], 0
/*140a2a435*/  mov qword ptr [rbp+580h+var_2E8], 0
/*140a2a440*/  call nullsub_1
/*140a2a445*/  mov ecx, 4
/*140a2a44a*/  mov edx, 1
/*140a2a44f*/  call sub_140001650
/*140a2a454*/  test rax, rax
/*140a2a457*/  jz loc_140A2E1C1
/*140a2a45d*/  mov dword ptr [rax], 656C6F72h
/*140a2a463*/  mov qword ptr [rbp+580h+var_240], 4
/*140a2a46e*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a2a475*/  mov [rbp+580h+var_230], 4
/*140a2a480*/  call nullsub_1
/*140a2a485*/  mov ecx, 4
/*140a2a48a*/  mov edx, 1
/*140a2a48f*/  call sub_140001650
/*140a2a494*/  test rax, rax
/*140a2a497*/  mov [rbp+580h+var_F8], rax
/*140a2a49e*/  jz loc_140A2E1EB
/*140a2a4a4*/  mov dword ptr [rax], 72657375h
/*140a2a4aa*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2a4b1*/  mov qword ptr [rbp+580h+var_180+8], 4
/*140a2a4bc*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2a4c3*/  mov qword ptr [rbp+580h+var_170+8], 4
/*140a2a4ce*/ loc_140A2A4CE: lea rcx, [rbp+580h+var_1C0]
/*140a2a4d5*/  lea rdx, [rbp+580h+var_2F8]
/*140a2a4dc*/  lea r8, [rbp+580h+var_240]
/*140a2a4e3*/  lea r9, [rbp+580h+var_180]
/*140a2a4ea*/  call sub_140307860
/*140a2a4ef*/  nop
/*140a2a4f0*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a4f7*/  jz short loc_140A2A506
/*140a2a4f9*/ loc_140A2A4F9: lea rcx, [rbp+580h+var_1C0]
/*140a2a500*/  call sub_1400104F0
/*140a2a505*/  nop
/*140a2a506*/ loc_140A2A506: call nullsub_1
/*140a2a50b*/  mov ecx, 7
/*140a2a510*/  mov edx, 1
/*140a2a515*/  call sub_140001650
/*140a2a51a*/  test rax, rax
/*140a2a51d*/  jz loc_140A2E1D6
/*140a2a523*/  mov dword ptr [rax+3], 746E6574h
/*140a2a52a*/  mov dword ptr [rax], 746E6F63h
/*140a2a530*/  mov qword ptr [rbp+580h+var_240], 7
/*140a2a53b*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a2a542*/  mov [rbp+580h+var_230], 7
/*140a2a54d*/  call nullsub_1
/*140a2a552*/  mov ecx, 20h ; ' '
/*140a2a557*/  mov edx, 8
/*140a2a55c*/  call sub_140001650
/*140a2a561*/  mov [rbp+580h+var_F8], rax
/*140a2a568*/  test rax, rax
/*140a2a56b*/  jz loc_140A2DD63
/*140a2a571*/ loc_140A2A571: lea rcx, [rbp+580h+var_180]
/*140a2a578*/  lea rdx, [rbp+580h+var_2B0]
/*140a2a57f*/  call sub_140B842D0
/*140a2a584*/  nop
/*140a2a585*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2a58c*/  jz loc_140A2DDFD
/*140a2a592*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2a59a*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2a5a2*/  mov rax, [rbp+580h+var_F8]
/*140a2a5a9*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2a5ae*/  movdqu xmmword ptr [rax], xmm0
/*140a2a5b2*/  mov qword ptr [rbp+580h+var_180+8], 1
/*140a2a5bd*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2a5c4*/  mov qword ptr [rbp+580h+var_170+8], 1
/*140a2a5cf*/  mov byte ptr [rbp+580h+var_180], 4
/*140a2a5d6*/  mov [rbp+580h+var_272], 0
/*140a2a5dd*/ loc_140A2A5DD: lea rcx, [rbp+580h+var_1C0]
/*140a2a5e4*/  lea rdx, [rbp+580h+var_2F8]
/*140a2a5eb*/  lea r8, [rbp+580h+var_240]
/*140a2a5f2*/  lea r9, [rbp+580h+var_180]
/*140a2a5f9*/  call sub_140307860
/*140a2a5fe*/  nop
/*140a2a5ff*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a606*/  jz short loc_140A2A615
/*140a2a608*/ loc_140A2A608: lea rcx, [rbp+580h+var_1C0]
/*140a2a60f*/  call sub_1400104F0
/*140a2a614*/  nop
/*140a2a615*/ loc_140A2A615: mov rax, qword ptr [rbp+580h+var_2E8]
/*140a2a61c*/  lea rcx, [rbp+580h+var_200+8]
/*140a2a623*/  mov [rcx+10h], rax
/*140a2a627*/  movdqu xmm0, [rbp+580h+var_2F8]
/*140a2a62f*/  movdqu xmmword ptr [rcx], xmm0
/*140a2a633*/  mov byte ptr [rbp+580h+var_200], 5
/*140a2a63a*/  mov rsi, [rbp+580h+var_350]
/*140a2a641*/  cmp rsi, [rbp+580h+var_360]
/*140a2a648*/  jnz short loc_140A2A657
/*140a2a64a*/ loc_140A2A64A: lea rcx, [rbp+580h+var_360]
/*140a2a651*/  call sub_1416890A0
/*140a2a656*/  nop
/*140a2a657*/ loc_140A2A657: mov rax, [rbp+580h+var_358]
/*140a2a65e*/  mov rcx, rsi
/*140a2a661*/  shl rcx, 5
/*140a2a665*/  movdqu xmm0, [rbp+580h+var_200]
/*140a2a66d*/  movdqu xmm1, [rbp+580h+var_1F0]
/*140a2a675*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2a67b*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2a680*/  inc rsi
/*140a2a683*/  mov [rbp+580h+var_350], rsi
/*140a2a68a*/ loc_140A2A68A: lea rcx, [rbp+580h+var_2B0]
/*140a2a691*/  call sub_1400104F0
/*140a2a696*/  nop
/*140a2a697*/ loc_140A2A697: lea rcx, [rbp+580h+var_260]
/*140a2a69e*/  call sub_1400104F0
/*140a2a6a3*/  nop
/*140a2a6a4*/ loc_140A2A6A4: mov rdx, [rbp+580h+var_108]
/*140a2a6ab*/  test rdx, rdx
/*140a2a6ae*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2a6b4*/  mov r8d, 1
/*140a2a6ba*/  mov rcx, [rbp+580h+var_2B8]
/*140a2a6c1*/  call sub_140001660
/*140a2a6c6*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2a6cb*/ loc_140A2A6CB: lea rsi, aTool; "tool"
/*140a2a6d2*/ loc_140A2A6D2: mov dword ptr [rbp+580h+var_108], ebx
/*140a2a6d8*/  call nullsub_1
/*140a2a6dd*/  mov ebx, 1
/*140a2a6e2*/  mov edx, 1
/*140a2a6e7*/  mov rcx, r13
/*140a2a6ea*/  call sub_140001650
/*140a2a6ef*/  test rax, rax
/*140a2a6f2*/  jz loc_140A2E27C
/*140a2a6f8*/  mov [rbp+580h+var_340], rax
/*140a2a6ff*/  mov rcx, rax
/*140a2a702*/  mov rdx, rsi
/*140a2a705*/  mov [rbp+580h+var_268], r13
/*140a2a70c*/  mov r8, r13
/*140a2a70f*/  call sub_141684120
/*140a2a714*/  xor r13d, r13d
/*140a2a717*/ loc_140A2A717: mov edx, 9
/*140a2a71c*/  lea rcx, aArguments_1; "arguments"
/*140a2a723*/  mov r8, r14
/*140a2a726*/  call sub_141433D50
/*140a2a72b*/  nop
/*140a2a72c*/  test rax, rax
/*140a2a72f*/  jz loc_140A2A901
/*140a2a735*/  cmp byte ptr [rax], 3
/*140a2a738*/  mov rsi, [rax+18h]
/*140a2a73c*/  mov ecx, 2
/*140a2a741*/  cmovnz rsi, rcx
/*140a2a745*/  mov r14, [rax+10h]
/*140a2a749*/  lea rax, asc_1417A4EB5; "{}"
/*140a2a750*/  cmovnz r14, rax
/*140a2a754*/  jmp loc_140A2A90D
/*140a2a759*/ loc_140A2A759: cmp qword ptr [rax+18h], 0
/*140a2a75e*/  jz loc_140A2AAAE
/*140a2a764*/  mov rsi, rax
/*140a2a767*/  call nullsub_1
/*140a2a76c*/  mov ecx, 20h ; ' '
/*140a2a771*/  mov edx, 8
/*140a2a776*/  call sub_140001650
/*140a2a77b*/  test rax, rax
/*140a2a77e*/  jz loc_140A2DF75
/*140a2a784*/  mov rbx, rax
/*140a2a787*/  mov qword ptr [rbp+580h+var_260], 0
/*140a2a792*/  mov qword ptr [rbp+580h+var_250], 0
/*140a2a79d*/  call nullsub_1
/*140a2a7a2*/  mov ecx, 4
/*140a2a7a7*/  mov edx, 1
/*140a2a7ac*/  call sub_140001650
/*140a2a7b1*/  test rax, rax
/*140a2a7b4*/  mov [rbp+580h+var_F8], rbx
/*140a2a7bb*/  jz loc_140A2E37E
/*140a2a7c1*/  mov dword ptr [rax], 65707974h
/*140a2a7c7*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a2a7d2*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2a7d9*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a2a7e4*/  call nullsub_1
/*140a2a7e9*/  mov ecx, 4
/*140a2a7ee*/  mov edx, 1
/*140a2a7f3*/  call sub_140001650
/*140a2a7f8*/  test rax, rax
/*140a2a7fb*/  mov [rbp+580h+var_368], rax
/*140a2a802*/  jz loc_140A2E393
/*140a2a808*/  mov dword ptr [rax], 74786574h
/*140a2a80e*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2a815*/  mov qword ptr [rbp+580h+var_180+8], 4
/*140a2a820*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2a827*/  mov qword ptr [rbp+580h+var_170+8], 4
/*140a2a832*/ loc_140A2A832: lea rcx, [rbp+580h+var_1C0]
/*140a2a839*/  lea rdx, [rbp+580h+var_260]
/*140a2a840*/  lea r8, [rbp+580h+var_2B0]
/*140a2a847*/  lea r9, [rbp+580h+var_180]
/*140a2a84e*/  call sub_140307860
/*140a2a853*/  nop
/*140a2a854*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a85b*/  jz short loc_140A2A86A
/*140a2a85d*/ loc_140A2A85D: lea rcx, [rbp+580h+var_1C0]
/*140a2a864*/  call sub_1400104F0
/*140a2a869*/  nop
/*140a2a86a*/ loc_140A2A86A: call nullsub_1
/*140a2a86f*/  mov ecx, 4
/*140a2a874*/  mov edx, 1
/*140a2a879*/  call sub_140001650
/*140a2a87e*/  test rax, rax
/*140a2a881*/  jz loc_140A2E3A8
/*140a2a887*/  mov dword ptr [rax], 74786574h
/*140a2a88d*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a2a898*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2a89f*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a2a8aa*/  mov rax, rsi
/*140a2a8ad*/  mov rsi, [rsi+18h]
/*140a2a8b1*/  test rsi, rsi
/*140a2a8b4*/  js loc_140A2DC7A
/*140a2a8ba*/  jz loc_140A2B87E
/*140a2a8c0*/  mov r13, r12
/*140a2a8c3*/  mov r14, [rax+10h]
/*140a2a8c7*/  call nullsub_1
/*140a2a8cc*/  mov r12d, 1
/*140a2a8d2*/  mov edx, 1
/*140a2a8d7*/  mov rcx, rsi
/*140a2a8da*/  call sub_140001650
/*140a2a8df*/  test rax, rax
/*140a2a8e2*/  jz loc_140A2DC7D
/*140a2a8e8*/  mov rbx, rax
/*140a2a8eb*/  mov rcx, rax
/*140a2a8ee*/  mov rdx, r14
/*140a2a8f1*/  mov r8, rsi
/*140a2a8f4*/  call sub_141684120
/*140a2a8f9*/  mov r12, r13
/*140a2a8fc*/  jmp loc_140A2B883
/*140a2a901*/ loc_140A2A901: mov esi, 2
/*140a2a906*/  lea r14, asc_1417A4EB5; "{}"
/*140a2a90d*/ loc_140A2A90D: mov qword ptr [rbp+580h+var_180], r14
/*140a2a914*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2a91b*/  lea rax, [rbp+580h+var_170]
/*140a2a922*/  movdqu xmmword ptr [rax], xmm8
/*140a2a927*/  mov [rbp+580h+var_160], r14
/*140a2a92e*/  mov qword ptr [rbp+580h+var_158], rsi
/*140a2a935*/ loc_140A2A935: lea rcx, [rbp+580h+var_1C0]
/*140a2a93c*/  lea rdx, [rbp+580h+var_180]
/*140a2a943*/  call sub_1408A6200
/*140a2a948*/  nop
/*140a2a949*/ loc_140A2A949: cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2a950*/  jz short loc_140A2A98C
/*140a2a952*/  mov dword ptr [rbp+580h+var_F8], r13d
/*140a2a959*/  movdqu xmm0, [rbp+580h+var_1C0]
/*140a2a961*/  movdqu xmm1, [rbp+580h+var_1B0]
/*140a2a969*/  movdqa [rbp+580h+var_2A0], xmm1
/*140a2a971*/  movdqa [rbp+580h+var_2B0], xmm0
/*140a2a979*/  cmp [rbp+580h+var_4C0], 0
/*140a2a981*/  jnz loc_140A2AB4E
/*140a2a987*/  jmp loc_140A2AC38
/*140a2a98c*/ loc_140A2A98C: mov rcx, qword ptr [rbp+580h+var_1C0+8]
/*140a2a993*/  mov qword ptr [rbp+580h+var_180], rcx
/*140a2a99a*/  test rsi, rsi
/*140a2a99d*/  js loc_140A2DC66
/*140a2a9a3*/  mov [rbp+580h+var_338], rcx
/*140a2a9aa*/  jz loc_140A2AABA
/*140a2a9b0*/  call nullsub_1
/*140a2a9b5*/  mov edx, 1
/*140a2a9ba*/  mov rcx, rsi
/*140a2a9bd*/  call sub_140001650
/*140a2a9c2*/  test rax, rax
/*140a2a9c5*/  jz loc_140A2E561
/*140a2a9cb*/  mov rbx, rax
/*140a2a9ce*/  mov rcx, rax
/*140a2a9d1*/  mov rdx, r14
/*140a2a9d4*/  mov r8, rsi
/*140a2a9d7*/  call sub_141684120
/*140a2a9dc*/  mov rcx, [rbp+580h+var_338]
/*140a2a9e3*/  jmp loc_140A2AABF
/*140a2a9e8*/ loc_140A2A9E8: mov rax, qword ptr [rbp+580h+var_330+10h]
/*140a2a9ef*/  mov [rbp+580h+var_230], rax
/*140a2a9f6*/  movdqu xmm0, xmmword ptr [rbp+580h+var_330]
/*140a2a9fe*/  movdqa [rbp+580h+var_240], xmm0
/*140a2aa06*/  jmp loc_140A2B947
/*140a2aa0b*/ loc_140A2AA0B: mov eax, [rbx]
/*140a2aa0d*/  mov ecx, 74737973h
/*140a2aa12*/  xor eax, ecx
/*140a2aa14*/  movzx ecx, word ptr [rbx+4]
/*140a2aa18*/  xor ecx, 6D65h
/*140a2aa1e*/  or ecx, eax
/*140a2aa20*/  jz short loc_140A2AA3F
/*140a2aa22*/ loc_140A2AA22: mov dword ptr [rbp+580h+var_268], 0
/*140a2aa2c*/  cmp [rbp+580h+var_300], 0
/*140a2aa34*/  jnz loc_140A29407
/*140a2aa3a*/  jmp loc_140A296EE
/*140a2aa3f*/ loc_140A2AA3F: mov rax, [rbp+580h+var_1C8]
/*140a2aa46*/  mov [rbp+580h+var_270], rax
/*140a2aa4d*/ loc_140A2AA4D: mov edx, 7
/*140a2aa52*/  lea rcx, aContent_6; "content"
/*140a2aa59*/  mov r8, r14
/*140a2aa5c*/  call sub_141433D50
/*140a2aa61*/  nop
/*140a2aa62*/  test rax, rax
/*140a2aa65*/  jz loc_140A2AE5D
/*140a2aa6b*/  movzx ecx, byte ptr [rax]
/*140a2aa6e*/  cmp ecx, 4
/*140a2aa71*/  mov rsi, [rbp+580h+var_110]
/*140a2aa78*/  jz loc_140A2BEB7
/*140a2aa7e*/  cmp ecx, 3
/*140a2aa81*/  jnz loc_140A2AE64
/*140a2aa87*/  add rax, 8
/*140a2aa8b*/  mov rcx, [rbp+580h+var_1C8]
/*140a2aa92*/  mov [rbp+580h+var_270], rcx
/*140a2aa99*/  lea rcx, [rbp+580h+var_2B0]
/*140a2aaa0*/  mov rdx, rax
/*140a2aaa3*/  call sub_14149C500
/*140a2aaa8*/  nop
/*140a2aaa9*/  jmp loc_140A2CBF0
/*140a2aaae*/ loc_140A2AAAE: mov ecx, 8
/*140a2aab3*/  xor eax, eax
/*140a2aab5*/  jmp loc_140A2B932
/*140a2aaba*/ loc_140A2AABA: mov ebx, 1
/*140a2aabf*/ loc_140A2AABF: mov qword ptr [rbp+580h+var_2B0+8], rsi
/*140a2aac6*/  mov [rbp+580h+var_418], rbx
/*140a2aacd*/  mov qword ptr [rbp+580h+var_2A0], rbx
/*140a2aad4*/  mov qword ptr [rbp+580h+var_2A0+8], rsi
/*140a2aadb*/  mov byte ptr [rbp+580h+var_2B0], 3
/*140a2aae2*/  mov rax, [rcx]
/*140a2aae5*/  cmp rax, 1
/*140a2aae9*/  jz short loc_140A2AB18
/*140a2aaeb*/  test rax, rax
/*140a2aaee*/  jnz short loc_140A2AB22
/*140a2aaf0*/  mov rax, [rbp+580h+var_338]
/*140a2aaf7*/  mov rdx, [rax+10h]
/*140a2aafb*/  test rdx, rdx
/*140a2aafe*/  jz short loc_140A2AB22
/*140a2ab00*/  mov rax, [rbp+580h+var_338]
/*140a2ab07*/  mov rcx, [rax+8]
/*140a2ab0b*/  mov r8d, 1
/*140a2ab11*/  call sub_140001660
/*140a2ab16*/  jmp short loc_140A2AB22
/*140a2ab18*/ loc_140A2AB18: add rcx, 8
/*140a2ab1c*/ loc_140A2AB1C: call sub_140018650
/*140a2ab21*/  nop
/*140a2ab22*/ loc_140A2AB22: mov dword ptr [rbp+580h+var_F8], r13d
/*140a2ab29*/  mov edx, 28h ; '('
/*140a2ab2e*/  mov r8d, 8
/*140a2ab34*/  mov rcx, [rbp+580h+var_338]
/*140a2ab3b*/  call sub_140001660
/*140a2ab40*/  cmp [rbp+580h+var_4C0], 0
/*140a2ab48*/  jz loc_140A2AC38
/*140a2ab4e*/ loc_140A2AB4E: mov r13, r12
/*140a2ab51*/  lea rcx, [rbp+580h+var_4B8]
/*140a2ab58*/  mov rdx, [rbp+580h+var_340]
/*140a2ab5f*/  mov r8, [rbp+580h+var_268]
/*140a2ab66*/  call sub_1403795A0
/*140a2ab6b*/  mov rcx, rax
/*140a2ab6e*/  shr rcx, 39h
/*140a2ab72*/  mov rsi, [rbp+580h+var_4D8]
/*140a2ab79*/  mov rbx, [rbp+580h+var_4D0]
/*140a2ab80*/  movd xmm0, ecx
/*140a2ab84*/  punpcklbw xmm0, xmm0
/*140a2ab88*/  pshuflw xmm0, xmm0, 0
/*140a2ab8d*/  pshufd xmm14, xmm0, 44h ; 'D'
/*140a2ab93*/  xor edx, edx
/*140a2ab95*/ loc_140A2AB95: and rax, rbx
/*140a2ab98*/  movdqu xmm15, xmmword ptr [rsi+rax]
/*140a2ab9e*/  movdqa xmm0, xmm15
/*140a2aba3*/  pcmpeqb xmm0, xmm14
/*140a2aba8*/  pmovmskb r12d, xmm0
/*140a2abad*/  test r12d, r12d
/*140a2abb0*/  jz short loc_140A2AC17
/*140a2abb2*/  mov [rbp+580h+var_338], rdx
/*140a2abb9*/ loc_140A2ABB9: tzcnt ecx, r12d
/*140a2abbe*/  mov r14, rax
/*140a2abc1*/  add rcx, rax
/*140a2abc4*/  and rcx, rbx
/*140a2abc7*/  neg rcx
/*140a2abca*/  lea rax, [rcx+rcx*2]
/*140a2abce*/  mov rcx, [rbp+580h+var_268]
/*140a2abd5*/  cmp rcx, [rsi+rax*8-8]
/*140a2abda*/  jnz short loc_140A2ABFF
/*140a2abdc*/  lea rax, [rsi+rax*8]
/*140a2abe0*/  mov rdx, [rax-10h]
/*140a2abe4*/  mov rcx, [rbp+580h+var_340]
/*140a2abeb*/  mov r8, [rbp+580h+var_268]
/*140a2abf2*/  call sub_1416847B0
/*140a2abf7*/  test eax, eax
/*140a2abf9*/  jz loc_140A2AC9A
/*140a2abff*/ loc_140A2ABFF: lea eax, [r12-1]
/*140a2ac04*/  and ax, r12w
/*140a2ac08*/  mov r12d, eax
/*140a2ac0b*/  mov rax, r14
/*140a2ac0e*/  mov rdx, [rbp+580h+var_338]
/*140a2ac15*/  jnz short loc_140A2ABB9
/*140a2ac17*/ loc_140A2AC17: pcmpeqb xmm15, xmm11
/*140a2ac1c*/  pmovmskb ecx, xmm15
/*140a2ac21*/  test ecx, ecx
/*140a2ac23*/  mov r12, r13
/*140a2ac26*/  jnz short loc_140A2AC38
/*140a2ac28*/  add rax, rdx
/*140a2ac2b*/  add rax, 10h
/*140a2ac2f*/  add rdx, 10h
/*140a2ac33*/  jmp loc_140A2AB95
/*140a2ac38*/ loc_140A2AC38: mov r13, r12
/*140a2ac3b*/  cmp [rbp+580h+var_268], 0Bh
/*140a2ac43*/  jnz short loc_140A2AC72
/*140a2ac45*/  mov rcx, [rbp+580h+var_340]
/*140a2ac4c*/  mov rax, [rcx]
/*140a2ac4f*/  mov rdx, 61705F796C707061h
/*140a2ac59*/  xor rax, rdx
/*140a2ac5c*/  mov rcx, [rcx+3]
/*140a2ac60*/  mov rdx, 68637461705F796Ch
/*140a2ac6a*/  xor rcx, rdx
/*140a2ac6d*/  or rcx, rax
/*140a2ac70*/  jz short loc_140A2AC9A
/*140a2ac72*/ loc_140A2AC72: movdqa xmm0, [rbp+580h+var_2B0]
/*140a2ac7a*/  movdqa xmm1, [rbp+580h+var_2A0]
/*140a2ac82*/  movdqa [rbp+580h+var_250], xmm1
/*140a2ac8a*/  movdqa [rbp+580h+var_260], xmm0
/*140a2ac92*/  mov r12, r13
/*140a2ac95*/  jmp loc_140A2AEBE
/*140a2ac9a*/ loc_140A2AC9A: movzx ebx, byte ptr [rbp+580h+var_2B0]
/*140a2aca1*/  cmp ebx, 3
/*140a2aca4*/  mov dword ptr [rbp+580h+var_338], ebx
/*140a2acaa*/  jz loc_140A2AD93
/*140a2acb0*/  cmp ebx, 5
/*140a2acb3*/  mov r12, r13
/*140a2acb6*/  jnz loc_140A2B3C8
/*140a2acbc*/  mov rcx, qword ptr [rbp+580h+var_2B0+8]
/*140a2acc3*/  test rcx, rcx
/*140a2acc6*/  jz loc_140A2AE77
/*140a2accc*/  mov rbx, qword ptr [rbp+580h+var_2A0]
/*140a2acd3*/ loc_140A2ACD3: lea rax, [rcx+168h]
/*140a2acda*/  mov qword ptr [rbp+580h+var_380], rcx
/*140a2ace1*/  movzx ecx, word ptr [rcx+272h]
/*140a2ace8*/  mov qword ptr [rbp+580h+var_380+8], rcx
/*140a2acef*/  lea ecx, ds:0[rcx*8]
/*140a2acf6*/  lea r12, [rcx+rcx*2]
/*140a2acfa*/  mov r14, 0FFFFFFFFFFFFFFFFh
/*140a2ad01*/ loc_140A2AD01: test r12, r12
/*140a2ad04*/  jz short loc_140A2AD67
/*140a2ad06*/  lea r13, [rax+18h]
/*140a2ad0a*/  mov rdx, [rax+8]
/*140a2ad0e*/  mov r8, [rax+10h]
/*140a2ad12*/  mov rsi, r8
/*140a2ad15*/  sub rsi, 5
/*140a2ad19*/  mov eax, 5
/*140a2ad1e*/  cmovnb r8, rax
/*140a2ad22*/  neg rsi
/*140a2ad25*/  lea rcx, aInput_2; "input"
/*140a2ad2c*/  call sub_1416847B0
/*140a2ad31*/  cdqe
/*140a2ad33*/  test eax, eax
/*140a2ad35*/  cmovnz rsi, rax
/*140a2ad39*/  test rsi, rsi
/*140a2ad3c*/  sets al
/*140a2ad3f*/  setnle cl
/*140a2ad42*/  sub cl, al
/*140a2ad44*/  inc r14
/*140a2ad47*/  add r12, 0FFFFFFFFFFFFFFE8h
/*140a2ad4b*/  mov rax, r13
/*140a2ad4e*/  cmp cl, 1
/*140a2ad51*/  jz short loc_140A2AD01
/*140a2ad53*/  movzx eax, cl
/*140a2ad56*/  test eax, eax
/*140a2ad58*/  lea r12, aType_8; "type"
/*140a2ad5f*/  jz loc_140A2AE99
/*140a2ad65*/  jmp short loc_140A2AD75
/*140a2ad67*/ loc_140A2AD67: mov r14, qword ptr [rbp+580h+var_380+8]
/*140a2ad6e*/  lea r12, aType_8; "type"
/*140a2ad75*/ loc_140A2AD75: sub rbx, 1
/*140a2ad79*/  mov rcx, qword ptr [rbp+580h+var_380]
/*140a2ad80*/  jb loc_140A2AE77
/*140a2ad86*/  mov rcx, [rcx+r14*8+278h]
/*140a2ad8e*/  jmp loc_140A2ACD3
/*140a2ad93*/ loc_140A2AD93: mov r14, qword ptr [rbp+580h+var_2B0+8]
/*140a2ad9a*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2ada1*/  mov qword ptr [rbp+580h+var_380+8], rax
/*140a2ada8*/  mov rsi, qword ptr [rbp+580h+var_2A0+8]
/*140a2adaf*/  mov qword ptr [rbp+580h+var_240], 0
/*140a2adba*/  mov [rbp+580h+var_230], 0
/*140a2adc5*/  call nullsub_1
/*140a2adca*/  mov ecx, 5
/*140a2adcf*/  mov edx, 1
/*140a2add4*/  call sub_140001650
/*140a2add9*/  test rax, rax
/*140a2addc*/  mov qword ptr [rbp+580h+var_380], r14
/*140a2ade3*/  jz loc_140A2E54C
/*140a2ade9*/  mov byte ptr [rax+4], 74h ; 't'
/*140a2aded*/  mov dword ptr [rax], 75706E69h
/*140a2adf3*/  mov qword ptr [rbp+580h+var_200], 5
/*140a2adfe*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2ae05*/  mov qword ptr [rbp+580h+var_1F0], 5
/*140a2ae10*/  test rsi, rsi
/*140a2ae13*/  js loc_140A2DCCA
/*140a2ae19*/  jz loc_140A2C0BB
/*140a2ae1f*/  call nullsub_1
/*140a2ae24*/  mov r14d, 1
/*140a2ae2a*/  mov edx, 1
/*140a2ae2f*/  mov rcx, rsi
/*140a2ae32*/  call sub_140001650
/*140a2ae37*/  test rax, rax
/*140a2ae3a*/  jz loc_140A2DCCD
/*140a2ae40*/  mov rbx, rax
/*140a2ae43*/  mov r12, r13
/*140a2ae46*/  mov rcx, rax
/*140a2ae49*/  mov rdx, qword ptr [rbp+580h+var_380+8]
/*140a2ae50*/  mov r8, rsi
/*140a2ae53*/  call sub_141684120
/*140a2ae58*/  jmp loc_140A2C0C3
/*140a2ae5d*/ loc_140A2AE5D: mov rsi, [rbp+580h+var_110]
/*140a2ae64*/ loc_140A2AE64: mov r14, [rbp+580h+var_348]
/*140a2ae6b*/  mov rbx, [rbp+580h+var_1C8]
/*140a2ae72*/  jmp loc_140A2CD05
/*140a2ae77*/ loc_140A2AE77: mov r8d, 5
/*140a2ae7d*/  lea rcx, [rbp+580h+var_2B0+8]
/*140a2ae84*/  lea rdx, aPatch_1; "patch"
/*140a2ae8b*/  call sub_1402B3A40
/*140a2ae90*/  test rax, rax
/*140a2ae93*/  jz loc_140A2B3C8
/*140a2ae99*/ loc_140A2AE99: lea rcx, [rbp+580h+var_2B0+8]
/*140a2aea0*/  mov rax, [rcx+10h]
/*140a2aea4*/  lea rdx, [rbp+580h+var_260+8]
/*140a2aeab*/  mov [rdx+10h], rax
/*140a2aeaf*/  movdqu xmm0, xmmword ptr [rcx]
/*140a2aeb3*/  movdqu xmmword ptr [rdx], xmm0
/*140a2aeb7*/  mov byte ptr [rbp+580h+var_260], 5
/*140a2aebe*/ loc_140A2AEBE: mov ebx, dword ptr [rbp+580h+var_108]
/*140a2aec4*/ loc_140A2AEC4: mov qword ptr [rbp+580h+var_2B0], 0
/*140a2aecf*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2aeda*/  call nullsub_1
/*140a2aedf*/  mov ecx, 4
/*140a2aee4*/  mov edx, 1
/*140a2aee9*/  call sub_140001650
/*140a2aeee*/  test rax, rax
/*140a2aef1*/  jz loc_140A2E2CC
/*140a2aef7*/  mov dword ptr [rax], 65707974h
/*140a2aefd*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2af08*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2af0f*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2af1a*/  call nullsub_1
/*140a2af1f*/  mov ecx, 8
/*140a2af24*/  mov edx, 1
/*140a2af29*/  call sub_140001650
/*140a2af2e*/  test rax, rax
/*140a2af31*/  mov [rbp+580h+var_338], rax
/*140a2af38*/  jz loc_140A2E2E1
/*140a2af3e*/  mov r10, rax
/*140a2af41*/  mov rax, 6573755F6C6F6F74h
/*140a2af4b*/  mov [r10], rax
/*140a2af4e*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2af55*/  mov qword ptr [rbp+580h+var_180+8], 8
/*140a2af60*/  mov qword ptr [rbp+580h+var_170], r10
/*140a2af67*/  mov qword ptr [rbp+580h+var_170+8], 8
/*140a2af72*/ loc_140A2AF72: lea rcx, [rbp+580h+var_1C0]
/*140a2af79*/  lea rdx, [rbp+580h+var_2B0]
/*140a2af80*/  lea r8, [rbp+580h+var_200]
/*140a2af87*/  lea r9, [rbp+580h+var_180]
/*140a2af8e*/  call sub_140307860
/*140a2af93*/  nop
/*140a2af94*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2af9b*/  jz short loc_140A2AFAA
/*140a2af9d*/ loc_140A2AF9D: lea rcx, [rbp+580h+var_1C0]
/*140a2afa4*/  call sub_1400104F0
/*140a2afa9*/  nop
/*140a2afaa*/ loc_140A2AFAA: call nullsub_1
/*140a2afaf*/  mov ecx, 2
/*140a2afb4*/  mov edx, 1
/*140a2afb9*/  call sub_140001650
/*140a2afbe*/  test rax, rax
/*140a2afc1*/  jz loc_140A2E2B7
/*140a2afc7*/  mov word ptr [rax], 6469h
/*140a2afcc*/  mov qword ptr [rbp+580h+var_200], 2
/*140a2afd7*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2afde*/  mov qword ptr [rbp+580h+var_1F0], 2
/*140a2afe9*/  mov esi, 1
/*140a2afee*/  test bl, bl
/*140a2aff0*/  mov rbx, [rbp+580h+var_368]
/*140a2aff7*/  jnz short loc_140A2B029
/*140a2aff9*/  call nullsub_1
/*140a2affe*/  mov edx, 1
/*140a2b003*/  mov rcx, rbx
/*140a2b006*/  call sub_140001650
/*140a2b00b*/  test rax, rax
/*140a2b00e*/  jz loc_140A2E34A
/*140a2b014*/  mov rsi, rax
/*140a2b017*/  mov rcx, rax
/*140a2b01a*/  mov rdx, [rbp+580h+var_3A8]
/*140a2b021*/  mov r8, rbx
/*140a2b024*/  call sub_141684120
/*140a2b029*/ loc_140A2B029: mov byte ptr [rbp+580h+var_180], 3
/*140a2b030*/  mov qword ptr [rbp+580h+var_180+8], rbx
/*140a2b037*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a2b03e*/  mov qword ptr [rbp+580h+var_170+8], rbx
/*140a2b045*/  mov [rbp+580h+var_2BC], 0
/*140a2b04c*/ loc_140A2B04C: lea rcx, [rbp+580h+var_1C0]
/*140a2b053*/  lea rdx, [rbp+580h+var_2B0]
/*140a2b05a*/  lea r8, [rbp+580h+var_200]
/*140a2b061*/  lea r9, [rbp+580h+var_180]
/*140a2b068*/  call sub_140307860
/*140a2b06d*/  nop
/*140a2b06e*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2b075*/  jz short loc_140A2B084
/*140a2b077*/ loc_140A2B077: lea rcx, [rbp+580h+var_1C0]
/*140a2b07e*/  call sub_1400104F0
/*140a2b083*/  nop
/*140a2b084*/ loc_140A2B084: call nullsub_1
/*140a2b089*/  mov ecx, 4
/*140a2b08e*/  mov edx, 1
/*140a2b093*/  call sub_140001650
/*140a2b098*/  test rax, rax
/*140a2b09b*/  jz loc_140A2E2A2
/*140a2b0a1*/  mov dword ptr [rax], 656D616Eh
/*140a2b0a7*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2b0b2*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2b0b9*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2b0c4*/  mov esi, 1
/*140a2b0c9*/  cmp byte ptr [rbp+580h+var_F8], 0
/*140a2b0d0*/  mov rbx, [rbp+580h+var_268]
/*140a2b0d7*/  jnz short loc_140A2B109
/*140a2b0d9*/  call nullsub_1
/*140a2b0de*/  mov edx, 1
/*140a2b0e3*/  mov rcx, rbx
/*140a2b0e6*/  call sub_140001650
/*140a2b0eb*/  test rax, rax
/*140a2b0ee*/  jz loc_140A2E364
/*140a2b0f4*/  mov rsi, rax
/*140a2b0f7*/  mov rcx, rax
/*140a2b0fa*/  mov rdx, [rbp+580h+var_340]
/*140a2b101*/  mov r8, rbx
/*140a2b104*/  call sub_141684120
/*140a2b109*/ loc_140A2B109: mov byte ptr [rbp+580h+var_180], 3
/*140a2b110*/  mov qword ptr [rbp+580h+var_180+8], rbx
/*140a2b117*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a2b11e*/  mov qword ptr [rbp+580h+var_170+8], rbx
/*140a2b125*/  mov [rbp+580h+var_2BD], 0
/*140a2b12c*/ loc_140A2B12C: lea rcx, [rbp+580h+var_1C0]
/*140a2b133*/  lea rdx, [rbp+580h+var_2B0]
/*140a2b13a*/  lea r8, [rbp+580h+var_200]
/*140a2b141*/  lea r9, [rbp+580h+var_180]
/*140a2b148*/  call sub_140307860
/*140a2b14d*/  nop
/*140a2b14e*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2b155*/  jz short loc_140A2B164
/*140a2b157*/ loc_140A2B157: lea rcx, [rbp+580h+var_1C0]
/*140a2b15e*/  call sub_1400104F0
/*140a2b163*/  nop
/*140a2b164*/ loc_140A2B164: call nullsub_1
/*140a2b169*/  mov ecx, 5
/*140a2b16e*/  mov edx, 1
/*140a2b173*/  call sub_140001650
/*140a2b178*/  test rax, rax
/*140a2b17b*/  jz loc_140A2E2F6
/*140a2b181*/  mov byte ptr [rax+4], 74h ; 't'
/*140a2b185*/  mov dword ptr [rax], 75706E69h
/*140a2b18b*/  mov qword ptr [rbp+580h+var_200], 5
/*140a2b196*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2b19d*/  mov qword ptr [rbp+580h+var_1F0], 5
/*140a2b1a8*/  mov [rbp+580h+var_207], 1
/*140a2b1af*/ loc_140A2B1AF: lea rcx, [rbp+580h+var_180]
/*140a2b1b6*/  lea rdx, [rbp+580h+var_260]
/*140a2b1bd*/  call sub_140B842D0
/*140a2b1c2*/  nop
/*140a2b1c3*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2b1ca*/  jz loc_140A2DEBA
/*140a2b1d0*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2b1d8*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2b1e0*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2b1e8*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2b1f0*/  mov [rbp+580h+var_207], 0
/*140a2b1f7*/  lea rcx, [rbp+580h+var_180]
/*140a2b1fe*/  lea rdx, [rbp+580h+var_2B0]
/*140a2b205*/  lea r8, [rbp+580h+var_200]
/*140a2b20c*/  lea r9, [rbp+580h+var_1C0]
/*140a2b213*/  call sub_140307860
/*140a2b218*/  nop
/*140a2b219*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2b220*/  jz short loc_140A2B22F
/*140a2b222*/ loc_140A2B222: lea rcx, [rbp+580h+var_180]
/*140a2b229*/  call sub_1400104F0
/*140a2b22e*/  nop
/*140a2b22f*/ loc_140A2B22F: mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2b236*/  lea rcx, [rbp+580h+var_470+8]
/*140a2b23d*/  mov [rcx+10h], rax
/*140a2b241*/  movdqu xmm0, [rbp+580h+var_2B0]
/*140a2b249*/  movdqu xmmword ptr [rcx], xmm0
/*140a2b24d*/  mov byte ptr [rbp+580h+var_470], 5
/*140a2b254*/  mov rsi, [rbp+580h+var_300]
/*140a2b25b*/  test rsi, rsi
/*140a2b25e*/  jz short loc_140A2B286
/*140a2b260*/  mov qword ptr [rbp+580h+var_2F8], 0
/*140a2b26b*/  mov qword ptr [rbp+580h+var_2F8+8], 8
/*140a2b276*/  mov qword ptr [rbp+580h+var_2E8], 0
/*140a2b281*/  jmp loc_140A2B32D
/*140a2b286*/ loc_140A2B286: mov rax, [rbp+580h+var_350]
/*140a2b28d*/  test rax, rax
/*140a2b290*/  jz short loc_140A2B2FC
/*140a2b292*/  mov rcx, [rbp+580h+var_358]
/*140a2b299*/  shl rax, 5
/*140a2b29d*/  lea rsi, [rcx+rax]
/*140a2b2a1*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*140a2b2a5*/  test rsi, rsi
/*140a2b2a8*/  jz short loc_140A2B2FC
/*140a2b2aa*/  mov [rbp+580h+var_FC], 1
/*140a2b2b1*/ loc_140A2B2B1: mov edx, 4
/*140a2b2b6*/  lea rcx, aRole_4; "role"
/*140a2b2bd*/  mov r8, rsi
/*140a2b2c0*/  call sub_141433D50
/*140a2b2c5*/  nop
/*140a2b2c6*/  test rax, rax
/*140a2b2c9*/  jz short loc_140A2B2FC
/*140a2b2cb*/  cmp byte ptr [rax], 3
/*140a2b2ce*/  jnz short loc_140A2B2FC
/*140a2b2d0*/  cmp qword ptr [rax+18h], 9
/*140a2b2d5*/  jnz short loc_140A2B2FC
/*140a2b2d7*/  mov rax, [rax+10h]
/*140a2b2db*/  mov rcx, [rax]
/*140a2b2de*/  mov rdx, 6E61747369737361h
/*140a2b2e8*/  xor rcx, rdx
/*140a2b2eb*/  movzx eax, byte ptr [rax+8]
/*140a2b2ef*/  xor rax, 74h
/*140a2b2f3*/  or rax, rcx
/*140a2b2f6*/  jz loc_140A2C170
/*140a2b2fc*/ loc_140A2B2FC: mov rsi, [rbp+580h+var_300]
/*140a2b303*/  mov qword ptr [rbp+580h+var_2F8], 0
/*140a2b30e*/  mov qword ptr [rbp+580h+var_2F8+8], 8
/*140a2b319*/  mov qword ptr [rbp+580h+var_2E8], 0
/*140a2b324*/  test rsi, rsi
/*140a2b327*/  jz loc_140A2B51A
/*140a2b32d*/ loc_140A2B32D: mov rbx, qword ptr [rbp+580h+var_310+8]
/*140a2b334*/  mov [rbp+580h+var_189], 1
/*140a2b33b*/ loc_140A2B33B: mov [rsp+600h+var_5E0], 20h ; ' '
/*140a2b344*/  mov r9d, 8
/*140a2b34a*/  lea rcx, [rbp+580h+var_2F8]
/*140a2b351*/  xor edx, edx
/*140a2b353*/  mov r8, rsi
/*140a2b356*/  call sub_141688D30
/*140a2b35b*/  nop
/*140a2b35c*/ loc_140A2B35C: mov rcx, qword ptr [rbp+580h+var_2E8]
/*140a2b363*/  shl rcx, 5
/*140a2b367*/  add rcx, qword ptr [rbp+580h+var_2F8+8]
/*140a2b36e*/  mov r8, rsi
/*140a2b371*/  shl r8, 5
/*140a2b375*/  mov rdx, rbx
/*140a2b378*/  call sub_141684120
/*140a2b37d*/  add rsi, qword ptr [rbp+580h+var_2E8]
/*140a2b384*/  mov qword ptr [rbp+580h+var_2E8], rsi
/*140a2b38b*/  mov [rbp+580h+var_300], 0
/*140a2b396*/  movdqu xmm0, [rbp+580h+var_470]
/*140a2b39e*/  movdqu xmm1, [rbp+580h+var_460]
/*140a2b3a6*/  movdqa [rbp+580h+var_170], xmm1
/*140a2b3ae*/  movdqa [rbp+580h+var_180], xmm0
/*140a2b3b6*/  cmp rsi, qword ptr [rbp+580h+var_2F8]
/*140a2b3bd*/  jz loc_140A2B53C
/*140a2b3c3*/  jmp loc_140A2B549
/*140a2b3c8*/ loc_140A2B3C8: movdqa xmm0, [rbp+580h+var_2B0]
/*140a2b3d0*/  movdqa xmm1, [rbp+580h+var_2A0]
/*140a2b3d8*/  movdqa [rbp+580h+var_1F0], xmm1
/*140a2b3e0*/  movdqa [rbp+580h+var_200], xmm0
/*140a2b3e8*/  mov qword ptr [rbp+580h+var_2F8], 0
/*140a2b3f3*/  mov qword ptr [rbp+580h+var_2E8], 0
/*140a2b3fe*/  call nullsub_1
/*140a2b403*/  mov ecx, 5
/*140a2b408*/  mov edx, 1
/*140a2b40d*/  call sub_140001650
/*140a2b412*/  test rax, rax
/*140a2b415*/  jz loc_140A2E4F8
/*140a2b41b*/  mov byte ptr [rax+4], 74h ; 't'
/*140a2b41f*/  mov dword ptr [rax], 75706E69h
/*140a2b425*/  mov qword ptr [rbp+580h+var_240], 5
/*140a2b430*/  mov qword ptr [rbp+580h+var_380], rax
/*140a2b437*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a2b43e*/  mov [rbp+580h+var_230], 5
/*140a2b449*/  mov qword ptr [rbp+580h+var_1C0], 0
/*140a2b454*/  mov qword ptr [rbp+580h+var_1C0+8], 1
/*140a2b45f*/  mov qword ptr [rbp+580h+var_1B0], 0
/*140a2b46a*/  mov qword ptr [rbp+580h+var_170], 60000020h
/*140a2b475*/  lea rax, [rbp+580h+var_1C0]
/*140a2b47c*/  mov qword ptr [rbp+580h+var_180], rax
/*140a2b483*/  lea rax, off_1417A9B00
/*140a2b48a*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a2b491*/ loc_140A2B491: lea rcx, [rbp+580h+var_200]
/*140a2b498*/  lea rdx, [rbp+580h+var_180]
/*140a2b49f*/  call sub_14142EA10
/*140a2b4a4*/  nop
/*140a2b4a5*/ loc_140A2B4A5: test al, al
/*140a2b4a7*/  jnz loc_140A2DF98
/*140a2b4ad*/  mov r13, qword ptr [rbp+580h+var_1C0]
/*140a2b4b4*/  mov rax, qword ptr [rbp+580h+var_1C0+8]
/*140a2b4bb*/  mov qword ptr [rbp+580h+var_380+8], rax
/*140a2b4c2*/  mov rsi, qword ptr [rbp+580h+var_1B0]
/*140a2b4c9*/  test rsi, rsi
/*140a2b4cc*/  mov qword ptr [rbp+580h+var_380], r13
/*140a2b4d3*/  js loc_140A2DC95
/*140a2b4d9*/  jz loc_140A2BF05
/*140a2b4df*/  call nullsub_1
/*140a2b4e4*/  mov r14d, 1
/*140a2b4ea*/  mov edx, 1
/*140a2b4ef*/  mov rcx, rsi
/*140a2b4f2*/  call sub_140001650
/*140a2b4f7*/  test rax, rax
/*140a2b4fa*/  jz loc_140A2DC98
/*140a2b500*/  mov rbx, rax
/*140a2b503*/  mov rcx, rax
/*140a2b506*/  mov rdx, qword ptr [rbp+580h+var_380+8]
/*140a2b50d*/  mov r8, rsi
/*140a2b510*/  call sub_141684120
/*140a2b515*/  jmp loc_140A2BF0A
/*140a2b51a*/ loc_140A2B51A: movdqu xmm0, [rbp+580h+var_470]
/*140a2b522*/  movdqu xmm1, [rbp+580h+var_460]
/*140a2b52a*/  movdqa [rbp+580h+var_170], xmm1
/*140a2b532*/  movdqa [rbp+580h+var_180], xmm0
/*140a2b53a*/  xor esi, esi
/*140a2b53c*/ loc_140A2B53C: lea rcx, [rbp+580h+var_2F8]
/*140a2b543*/  call sub_1416890A0
/*140a2b548*/  nop
/*140a2b549*/ loc_140A2B549: mov rax, qword ptr [rbp+580h+var_2F8+8]
/*140a2b550*/  mov rcx, rsi
/*140a2b553*/  shl rcx, 5
/*140a2b557*/  movdqa xmm0, [rbp+580h+var_180]
/*140a2b55f*/  movdqa xmm1, [rbp+580h+var_170]
/*140a2b567*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2b56d*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2b572*/  inc rsi
/*140a2b575*/  mov qword ptr [rbp+580h+var_2E8], rsi
/*140a2b57c*/  mov qword ptr [rbp+580h+var_240], 0
/*140a2b587*/  mov [rbp+580h+var_230], 0
/*140a2b592*/  call nullsub_1
/*140a2b597*/  mov ecx, 4
/*140a2b59c*/  mov edx, 1
/*140a2b5a1*/  call sub_140001650
/*140a2b5a6*/  test rax, rax
/*140a2b5a9*/  jz loc_140A2E30B
/*140a2b5af*/  mov dword ptr [rax], 656C6F72h
/*140a2b5b5*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a2b5c0*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2b5c7*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a2b5d2*/  call nullsub_1
/*140a2b5d7*/  mov ecx, 9
/*140a2b5dc*/  mov edx, 1
/*140a2b5e1*/  call sub_140001650
/*140a2b5e6*/  test rax, rax
/*140a2b5e9*/  mov [rbp+580h+var_108], rax
/*140a2b5f0*/  jz loc_140A2E335
/*140a2b5f6*/  mov r10, rax
/*140a2b5f9*/  mov rax, 6E61747369737361h
/*140a2b603*/  mov [r10], rax
/*140a2b606*/  mov byte ptr [r10+8], 74h ; 't'
/*140a2b60b*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2b612*/  mov qword ptr [rbp+580h+var_180+8], 9
/*140a2b61d*/  mov qword ptr [rbp+580h+var_170], r10
/*140a2b624*/  mov qword ptr [rbp+580h+var_170+8], 9
/*140a2b62f*/ loc_140A2B62F: lea rcx, [rbp+580h+var_1C0]
/*140a2b636*/  lea rdx, [rbp+580h+var_240]
/*140a2b63d*/  lea r8, [rbp+580h+var_2B0]
/*140a2b644*/  lea r9, [rbp+580h+var_180]
/*140a2b64b*/  call sub_140307860
/*140a2b650*/  nop
/*140a2b651*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2b658*/  jz short loc_140A2B667
/*140a2b65a*/ loc_140A2B65A: lea rcx, [rbp+580h+var_1C0]
/*140a2b661*/  call sub_1400104F0
/*140a2b666*/  nop
/*140a2b667*/ loc_140A2B667: call nullsub_1
/*140a2b66c*/  mov ecx, 7
/*140a2b671*/  mov edx, 1
/*140a2b676*/  call sub_140001650
/*140a2b67b*/  test rax, rax
/*140a2b67e*/  jz loc_140A2E320
/*140a2b684*/  mov dword ptr [rax+3], 746E6574h
/*140a2b68b*/  mov dword ptr [rax], 746E6F63h
/*140a2b691*/  mov qword ptr [rbp+580h+var_2B0], 7
/*140a2b69c*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2b6a3*/  mov qword ptr [rbp+580h+var_2A0], 7
/*140a2b6ae*/  mov [rbp+580h+var_208], 1
/*140a2b6b5*/ loc_140A2B6B5: lea rcx, [rbp+580h+var_180]
/*140a2b6bc*/  lea rdx, [rbp+580h+var_2F8]
/*140a2b6c3*/  call sub_140467C90
/*140a2b6c8*/  nop
/*140a2b6c9*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2b6d0*/  jz loc_140A2DEF9
/*140a2b6d6*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2b6de*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2b6e6*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2b6ee*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2b6f6*/  mov [rbp+580h+var_208], 0
/*140a2b6fd*/  lea rcx, [rbp+580h+var_180]
/*140a2b704*/  lea rdx, [rbp+580h+var_240]
/*140a2b70b*/  lea r8, [rbp+580h+var_2B0]
/*140a2b712*/  lea r9, [rbp+580h+var_1C0]
/*140a2b719*/  call sub_140307860
/*140a2b71e*/  nop
/*140a2b71f*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2b726*/  jz short loc_140A2B735
/*140a2b728*/ loc_140A2B728: lea rcx, [rbp+580h+var_180]
/*140a2b72f*/  call sub_1400104F0
/*140a2b734*/  nop
/*140a2b735*/ loc_140A2B735: mov rax, [rbp+580h+var_230]
/*140a2b73c*/  lea rcx, [rbp+580h+var_200+8]
/*140a2b743*/  mov [rcx+10h], rax
/*140a2b747*/  movdqu xmm0, [rbp+580h+var_240]
/*140a2b74f*/  movdqu xmmword ptr [rcx], xmm0
/*140a2b753*/  mov byte ptr [rbp+580h+var_200], 5
/*140a2b75a*/  mov rsi, [rbp+580h+var_350]
/*140a2b761*/  cmp rsi, [rbp+580h+var_360]
/*140a2b768*/  jnz short loc_140A2B777
/*140a2b76a*/ loc_140A2B76A: lea rcx, [rbp+580h+var_360]
/*140a2b771*/  call sub_1416890A0
/*140a2b776*/  nop
/*140a2b777*/ loc_140A2B777: mov rax, [rbp+580h+var_358]
/*140a2b77e*/  mov rcx, rsi
/*140a2b781*/  shl rcx, 5
/*140a2b785*/  movdqu xmm0, [rbp+580h+var_200]
/*140a2b78d*/  movdqu xmm1, [rbp+580h+var_1F0]
/*140a2b795*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2b79b*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2b7a0*/  inc rsi
/*140a2b7a3*/  mov [rbp+580h+var_350], rsi
/*140a2b7aa*/  mov rcx, qword ptr [rbp+580h+var_2F8+8]
/*140a2b7b1*/  mov rax, qword ptr [rbp+580h+var_2E8]
/*140a2b7b8*/  mov [rbp+580h+var_F8], rax
/*140a2b7bf*/  mov [rbp+580h+var_338], rcx
/*140a2b7c6*/  mov [rbp+580h+var_108], 0
/*140a2b7d1*/  nop word ptr [rax+rax+00000000h]
/*140a2b7e0*/ loc_140A2B7E0: mov rax, [rbp+580h+var_108]
/*140a2b7e7*/  cmp [rbp+580h+var_F8], rax
/*140a2b7ee*/  jz short loc_140A2B809
/*140a2b7f0*/  inc rax
/*140a2b7f3*/  mov [rbp+580h+var_108], rax
/*140a2b7fa*/  lea rsi, [rcx+20h]
/*140a2b7fe*/ loc_140A2B7FE: call sub_1402C3260
/*140a2b803*/  nop
/*140a2b804*/  mov rcx, rsi
/*140a2b807*/  jmp short loc_140A2B7E0
/*140a2b809*/ loc_140A2B809: mov rdx, qword ptr [rbp+580h+var_2F8]
/*140a2b810*/  test rdx, rdx
/*140a2b813*/  jz short loc_140A2B82C
/*140a2b815*/  mov rcx, qword ptr [rbp+580h+var_2F8+8]
/*140a2b81c*/  shl rdx, 5
/*140a2b820*/  mov r8d, 8
/*140a2b826*/  call sub_140001660
/*140a2b82b*/  nop
/*140a2b82c*/ loc_140A2B82C: lea rcx, [rbp+580h+var_260]
/*140a2b833*/  call sub_1400104F0
/*140a2b838*/  nop
/*140a2b839*/  mov rdx, [rbp+580h+var_268]
/*140a2b840*/  test rdx, rdx
/*140a2b843*/  jz short loc_140A2B857
/*140a2b845*/  mov r8d, 1
/*140a2b84b*/  mov rcx, [rbp+580h+var_340]
/*140a2b852*/  call sub_140001660
/*140a2b857*/ loc_140A2B857: mov rdx, [rbp+580h+var_368]
/*140a2b85e*/  test rdx, rdx
/*140a2b861*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2b867*/  mov r8d, 1
/*140a2b86d*/  mov rcx, [rbp+580h+var_3A8]
/*140a2b874*/  call sub_140001660
/*140a2b879*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2b87e*/ loc_140A2B87E: mov ebx, 1
/*140a2b883*/ loc_140A2B883: mov byte ptr [rbp+580h+var_180], 3
/*140a2b88a*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2b891*/  mov qword ptr [rbp+580h+var_170], rbx
/*140a2b898*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a2b89f*/  mov [rbp+580h+var_2BE], 0
/*140a2b8a6*/ loc_140A2B8A6: lea rcx, [rbp+580h+var_1C0]
/*140a2b8ad*/  lea rdx, [rbp+580h+var_260]
/*140a2b8b4*/  lea r8, [rbp+580h+var_2B0]
/*140a2b8bb*/  lea r9, [rbp+580h+var_180]
/*140a2b8c2*/  call sub_140307860
/*140a2b8c7*/  nop
/*140a2b8c8*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2b8cf*/  jz short loc_140A2B8DE
/*140a2b8d1*/ loc_140A2B8D1: lea rcx, [rbp+580h+var_1C0]
/*140a2b8d8*/  call sub_1400104F0
/*140a2b8dd*/  nop
/*140a2b8de*/ loc_140A2B8DE: movups xmm0, [rbp+580h+var_260]
/*140a2b8e5*/  movaps [rbp+580h+var_180], xmm0
/*140a2b8ec*/  mov rax, qword ptr [rbp+580h+var_250]
/*140a2b8f3*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2b8fa*/  lea rcx, [rbp+580h+var_200+8]
/*140a2b901*/  mov [rcx+0Fh], rax
/*140a2b905*/  movups xmmword ptr [rcx-1], xmm0
/*140a2b909*/  mov rcx, [rbp+580h+var_F8]
/*140a2b910*/  mov byte ptr [rcx], 5
/*140a2b913*/  movdqu xmm0, [rbp+580h+var_200]
/*140a2b91b*/  movdqu xmm1, [rbp+580h+var_200+0Fh]
/*140a2b923*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a2b928*/  movdqu xmmword ptr [rcx+10h], xmm1
/*140a2b92d*/  mov eax, 1
/*140a2b932*/ loc_140A2B932: mov qword ptr [rbp+580h+var_240], rax
/*140a2b939*/  mov qword ptr [rbp+580h+var_240+8], rcx
/*140a2b940*/  mov [rbp+580h+var_230], rax
/*140a2b947*/ loc_140A2B947: cmp byte ptr [rbp+580h+var_268], 0
/*140a2b94e*/  mov rax, [rbp+580h+var_108]
/*140a2b955*/  jz loc_140A2BAD5
/*140a2b95b*/  mov rdx, rax
/*140a2b95e*/  mov rax, [rax]
/*140a2b961*/  mov rcx, 6E61747369737361h
/*140a2b96b*/  xor rax, rcx
/*140a2b96e*/  movzx ecx, byte ptr [rdx+8]
/*140a2b972*/  xor rcx, 74h
/*140a2b976*/  or rcx, rax
/*140a2b979*/  jnz loc_140A2BA82
/*140a2b97f*/  cmp [rbp+580h+var_300], 0
/*140a2b987*/  jz loc_140A2BA82
/*140a2b98d*/  mov r13, [rbp+580h+var_300]
/*140a2b994*/  mov qword ptr [rbp+580h+var_1B0], r13
/*140a2b99b*/  movdqu xmm0, [rbp+580h+var_310]
/*140a2b9a3*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2b9ab*/  mov qword ptr [rbp+580h+var_310], 0
/*140a2b9b6*/  mov qword ptr [rbp+580h+var_310+8], 8
/*140a2b9c1*/  mov [rbp+580h+var_300], 0
/*140a2b9cc*/  mov rsi, qword ptr [rbp+580h+var_240]
/*140a2b9d3*/  mov r14, qword ptr [rbp+580h+var_240+8]
/*140a2b9da*/  mov rbx, [rbp+580h+var_230]
/*140a2b9e1*/  mov r12, rbx
/*140a2b9e4*/  shl r12, 5
/*140a2b9e8*/  lea rax, [r14+r12]
/*140a2b9ec*/  mov qword ptr [rbp+580h+var_180], r14
/*140a2b9f3*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a2b9fa*/  mov qword ptr [rbp+580h+var_180+8], r14
/*140a2ba01*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2ba08*/  mov rax, qword ptr [rbp+580h+var_1C0]
/*140a2ba0f*/  sub rax, r13
/*140a2ba12*/  cmp rbx, rax
/*140a2ba15*/  ja loc_140A2C8DA
/*140a2ba1b*/  test rbx, rbx
/*140a2ba1e*/  jz short loc_140A2BA39
/*140a2ba20*/ loc_140A2BA20: mov rcx, r13
/*140a2ba23*/  shl rcx, 5
/*140a2ba27*/  add rcx, qword ptr [rbp+580h+var_1C0+8]
/*140a2ba2e*/  mov rdx, r14
/*140a2ba31*/  mov r8, r12
/*140a2ba34*/  call sub_141684120
/*140a2ba39*/ loc_140A2BA39: add r13, rbx
/*140a2ba3c*/  mov qword ptr [rbp+580h+var_1B0], r13
/*140a2ba43*/  test rsi, rsi
/*140a2ba46*/  jz short loc_140A2BA5D
/*140a2ba48*/  shl rsi, 5
/*140a2ba4c*/  mov r8d, 8
/*140a2ba52*/  mov rcx, r14
/*140a2ba55*/  mov rdx, rsi
/*140a2ba58*/  call sub_140001660
/*140a2ba5d*/ loc_140A2BA5D: movdqa xmm0, [rbp+580h+var_1C0]
/*140a2ba65*/  movdqa [rbp+580h+var_240], xmm0
/*140a2ba6d*/  mov rax, qword ptr [rbp+580h+var_1B0]
/*140a2ba74*/  mov [rbp+580h+var_230], rax
/*140a2ba7b*/  lea r12, aType_8; "type"
/*140a2ba82*/ loc_140A2BA82: mov rbx, [rbp+580h+var_230]
/*140a2ba89*/  test rbx, rbx
/*140a2ba8c*/  jz loc_140A2BD1A
/*140a2ba92*/  mov rdx, [rbp+580h+var_108]
/*140a2ba99*/  mov rax, [rdx]
/*140a2ba9c*/  mov rcx, 6E61747369737361h
/*140a2baa6*/  xor rax, rcx
/*140a2baa9*/  movzx ecx, byte ptr [rdx+8]
/*140a2baad*/  xor rcx, 74h
/*140a2bab1*/  xor edx, edx
/*140a2bab3*/  or rcx, rax
/*140a2bab6*/  setz dl
/*140a2bab9*/  lea r14, unk_1417A3EF7
/*140a2bac0*/  lea rax, aAssistant; "assistant"
/*140a2bac7*/  cmovz r14, rax
/*140a2bacb*/  lea rsi, [rdx+rdx*4]
/*140a2bacf*/  add rsi, 4
/*140a2bad3*/  jmp short loc_140A2BAF1
/*140a2bad5*/ loc_140A2BAD5: mov rbx, [rbp+580h+var_230]
/*140a2badc*/  mov esi, 4
/*140a2bae1*/  lea r14, unk_1417A3EF7
/*140a2bae8*/  test rbx, rbx
/*140a2baeb*/  jz loc_140A2BD1A
/*140a2baf1*/ loc_140A2BAF1: mov qword ptr [rbp+580h+var_260], 0
/*140a2bafc*/  mov qword ptr [rbp+580h+var_250], 0
/*140a2bb07*/  call nullsub_1
/*140a2bb0c*/  mov ecx, 4
/*140a2bb11*/  mov edx, 1
/*140a2bb16*/  call sub_140001650
/*140a2bb1b*/  test rax, rax
/*140a2bb1e*/  jz loc_140A2E252
/*140a2bb24*/  mov dword ptr [rax], 656C6F72h
/*140a2bb2a*/  mov qword ptr [rbp+580h+var_2B0], 4
/*140a2bb35*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2bb3c*/  mov qword ptr [rbp+580h+var_2A0], 4
/*140a2bb47*/  call nullsub_1
/*140a2bb4c*/  mov edx, 1
/*140a2bb51*/  mov rcx, rsi
/*140a2bb54*/  call sub_140001650
/*140a2bb59*/  test rax, rax
/*140a2bb5c*/  mov [rbp+580h+var_108], rax
/*140a2bb63*/  jz loc_140A2E23F
/*140a2bb69*/  mov r13, rax
/*140a2bb6c*/  mov rcx, rax
/*140a2bb6f*/  mov rdx, r14
/*140a2bb72*/  mov r8, rsi
/*140a2bb75*/  call sub_141684120
/*140a2bb7a*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2bb81*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2bb88*/  mov qword ptr [rbp+580h+var_170], r13
/*140a2bb8f*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a2bb96*/ loc_140A2BB96: lea rcx, [rbp+580h+var_1C0]
/*140a2bb9d*/  lea rdx, [rbp+580h+var_260]
/*140a2bba4*/  lea r8, [rbp+580h+var_2B0]
/*140a2bbab*/  lea r9, [rbp+580h+var_180]
/*140a2bbb2*/  call sub_140307860
/*140a2bbb7*/  nop
/*140a2bbb8*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2bbbf*/  jz short loc_140A2BBCE
/*140a2bbc1*/ loc_140A2BBC1: lea rcx, [rbp+580h+var_1C0]
/*140a2bbc8*/  call sub_1400104F0
/*140a2bbcd*/  nop
/*140a2bbce*/ loc_140A2BBCE: call nullsub_1
/*140a2bbd3*/  mov ecx, 7
/*140a2bbd8*/  mov edx, 1
/*140a2bbdd*/  call sub_140001650
/*140a2bbe2*/  test rax, rax
/*140a2bbe5*/  jz loc_140A2E267
/*140a2bbeb*/  mov dword ptr [rax+3], 746E6574h
/*140a2bbf2*/  mov dword ptr [rax], 746E6F63h
/*140a2bbf8*/  mov qword ptr [rbp+580h+var_2B0], 7
/*140a2bc03*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2bc0a*/  mov qword ptr [rbp+580h+var_2A0], 7
/*140a2bc15*/  mov [rbp+580h+var_20E], 1
/*140a2bc1c*/ loc_140A2BC1C: lea rcx, [rbp+580h+var_180]
/*140a2bc23*/  lea rdx, [rbp+580h+var_240]
/*140a2bc2a*/  call sub_140467C90
/*140a2bc2f*/  nop
/*140a2bc30*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2bc37*/  jz loc_140A2DE7B
/*140a2bc3d*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2bc45*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2bc4d*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2bc55*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2bc5d*/  mov [rbp+580h+var_20E], 0
/*140a2bc64*/  lea rcx, [rbp+580h+var_180]
/*140a2bc6b*/  lea rdx, [rbp+580h+var_260]
/*140a2bc72*/  lea r8, [rbp+580h+var_2B0]
/*140a2bc79*/  lea r9, [rbp+580h+var_1C0]
/*140a2bc80*/  call sub_140307860
/*140a2bc85*/  nop
/*140a2bc86*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2bc8d*/  jz short loc_140A2BC9C
/*140a2bc8f*/ loc_140A2BC8F: lea rcx, [rbp+580h+var_180]
/*140a2bc96*/  call sub_1400104F0
/*140a2bc9b*/  nop
/*140a2bc9c*/ loc_140A2BC9C: mov rax, qword ptr [rbp+580h+var_250]
/*140a2bca3*/  lea rcx, [rbp+580h+var_200+8]
/*140a2bcaa*/  mov [rcx+10h], rax
/*140a2bcae*/  movdqu xmm0, [rbp+580h+var_260]
/*140a2bcb6*/  movdqu xmmword ptr [rcx], xmm0
/*140a2bcba*/  mov byte ptr [rbp+580h+var_200], 5
/*140a2bcc1*/  mov rsi, [rbp+580h+var_350]
/*140a2bcc8*/  cmp rsi, [rbp+580h+var_360]
/*140a2bccf*/  jnz short loc_140A2BCDE
/*140a2bcd1*/ loc_140A2BCD1: lea rcx, [rbp+580h+var_360]
/*140a2bcd8*/  call sub_1416890A0
/*140a2bcdd*/  nop
/*140a2bcde*/ loc_140A2BCDE: mov [rbp+580h+var_F8], rbx
/*140a2bce5*/  mov rax, [rbp+580h+var_358]
/*140a2bcec*/  mov rcx, rsi
/*140a2bcef*/  shl rcx, 5
/*140a2bcf3*/  movdqu xmm0, [rbp+580h+var_200]
/*140a2bcfb*/  movdqu xmm1, [rbp+580h+var_1F0]
/*140a2bd03*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2bd09*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2bd0e*/  inc rsi
/*140a2bd11*/  mov [rbp+580h+var_350], rsi
/*140a2bd18*/  jmp short loc_140A2BD25
/*140a2bd1a*/ loc_140A2BD1A: mov [rbp+580h+var_F8], 0
/*140a2bd25*/ loc_140A2BD25: mov rcx, qword ptr [rbp+580h+var_240+8]
/*140a2bd2c*/  mov [rbp+580h+var_268], rcx
/*140a2bd33*/  mov [rbp+580h+var_108], 0
/*140a2bd3e*/  xchg ax, ax
/*140a2bd40*/ loc_140A2BD40: mov rax, [rbp+580h+var_108]
/*140a2bd47*/  cmp [rbp+580h+var_F8], rax
/*140a2bd4e*/  jz short loc_140A2BD69
/*140a2bd50*/  inc rax
/*140a2bd53*/  mov [rbp+580h+var_108], rax
/*140a2bd5a*/  lea rsi, [rcx+20h]
/*140a2bd5e*/ loc_140A2BD5E: call sub_1402C3260
/*140a2bd63*/  nop
/*140a2bd64*/  mov rcx, rsi
/*140a2bd67*/  jmp short loc_140A2BD40
/*140a2bd69*/ loc_140A2BD69: mov rdx, qword ptr [rbp+580h+var_240]
/*140a2bd70*/  test rdx, rdx
/*140a2bd73*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2bd79*/  mov rcx, qword ptr [rbp+580h+var_240+8]
/*140a2bd80*/  shl rdx, 5
/*140a2bd84*/  mov r8d, 8
/*140a2bd8a*/  call sub_140001660
/*140a2bd8f*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2bd94*/ loc_140A2BD94: mov [rbp+580h+var_F9], 1
/*140a2bd9b*/ loc_140A2BD9B: mov edx, 7
/*140a2bda0*/  lea rcx, aContent_6; "content"
/*140a2bda7*/  mov r8, rsi
/*140a2bdaa*/  call sub_141433D50
/*140a2bdaf*/  nop
/*140a2bdb0*/  test rax, rax
/*140a2bdb3*/  jz loc_140A2A42A
/*140a2bdb9*/  cmp byte ptr [rax], 4
/*140a2bdbc*/  jnz loc_140A2A42A
/*140a2bdc2*/  mov rcx, [rax+10h]
/*140a2bdc6*/  mov rax, [rax+18h]
/*140a2bdca*/  shl rax, 5
/*140a2bdce*/  add rax, rcx
/*140a2bdd1*/  mov qword ptr [rbp+580h+var_180], rcx
/*140a2bdd8*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a2bddf*/  mov [rbp+580h+var_F9], 1
/*140a2bde6*/  lea rcx, [rbp+580h+var_180]
/*140a2bded*/  call sub_1409991F0
/*140a2bdf2*/  nop
/*140a2bdf3*/  test al, al
/*140a2bdf5*/  jz loc_140A2A42A
/*140a2bdfb*/  mov rax, [rbp+580h+var_350]
/*140a2be02*/  test rax, rax
/*140a2be05*/  jz loc_140A2A68A
/*140a2be0b*/  mov rcx, [rbp+580h+var_358]
/*140a2be12*/  shl rax, 5
/*140a2be16*/  lea r8, [rcx+rax]
/*140a2be1a*/  add r8, 0FFFFFFFFFFFFFFE0h
/*140a2be1e*/  mov [rbp+580h+var_F9], 1
/*140a2be25*/  mov edx, 7
/*140a2be2a*/  lea rcx, aContent_6; "content"
/*140a2be31*/  call sub_141433D50
/*140a2be36*/  nop
/*140a2be37*/  test rax, rax
/*140a2be3a*/  jz loc_140A2A68A
/*140a2be40*/  cmp byte ptr [rax], 4
/*140a2be43*/  jnz loc_140A2A68A
/*140a2be49*/  movdqu xmm0, [rbp+580h+var_2B0]
/*140a2be51*/  movdqu xmm1, [rbp+580h+var_2A0]
/*140a2be59*/  movdqa [rbp+580h+var_170], xmm1
/*140a2be61*/  movdqa [rbp+580h+var_180], xmm0
/*140a2be69*/  mov rsi, [rax+18h]
/*140a2be6d*/  cmp rsi, [rax+8]
/*140a2be71*/  jnz short loc_140A2BE85
/*140a2be73*/ loc_140A2BE73: mov rcx, rax
/*140a2be76*/  add rcx, 8
/*140a2be7a*/  mov rbx, rax
/*140a2be7d*/  call sub_1416890A0
/*140a2be82*/  mov rax, rbx
/*140a2be85*/ loc_140A2BE85: mov rcx, [rax+10h]
/*140a2be89*/  mov rdx, rsi
/*140a2be8c*/  shl rdx, 5
/*140a2be90*/  movdqa xmm0, [rbp+580h+var_180]
/*140a2be98*/  movdqa xmm1, [rbp+580h+var_170]
/*140a2bea0*/  movdqu xmmword ptr [rcx+rdx+10h], xmm1
/*140a2bea6*/  movdqu xmmword ptr [rcx+rdx], xmm0
/*140a2beab*/  inc rsi
/*140a2beae*/  mov [rax+18h], rsi
/*140a2beb2*/  jmp loc_140A2A697
/*140a2beb7*/ loc_140A2BEB7: mov r13, r12
/*140a2beba*/  mov qword ptr [rbp+580h+var_180], 0
/*140a2bec5*/  mov qword ptr [rbp+580h+var_180+8], 1
/*140a2bed0*/  mov qword ptr [rbp+580h+var_170], 0
/*140a2bedb*/  mov rbx, [rax+18h]
/*140a2bedf*/  test rbx, rbx
/*140a2bee2*/  jz loc_140A2CBC3
/*140a2bee8*/  mov r14, [rax+10h]
/*140a2beec*/  shl rbx, 5
/*140a2bef0*/  mov esi, 1
/*140a2bef5*/  mov [rbp+580h+var_108], 0
/*140a2bf00*/  jmp loc_140A2C978
/*140a2bf05*/ loc_140A2BF05: mov ebx, 1
/*140a2bf0a*/ loc_140A2BF0A: mov byte ptr [rbp+580h+var_180], 3
/*140a2bf11*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2bf18*/  mov qword ptr [rbp+580h+var_170], rbx
/*140a2bf1f*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a2bf26*/  mov [rbp+580h+var_2BB], 0
/*140a2bf2d*/ loc_140A2BF2D: lea rcx, [rbp+580h+var_1C0]
/*140a2bf34*/  lea rdx, [rbp+580h+var_2F8]
/*140a2bf3b*/  lea r8, [rbp+580h+var_240]
/*140a2bf42*/  lea r9, [rbp+580h+var_180]
/*140a2bf49*/  call sub_140307860
/*140a2bf4e*/  nop
/*140a2bf4f*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2bf56*/  mov ebx, dword ptr [rbp+580h+var_108]
/*140a2bf5c*/  jz short loc_140A2BF6B
/*140a2bf5e*/ loc_140A2BF5E: lea rcx, [rbp+580h+var_1C0]
/*140a2bf65*/  call sub_1400104F0
/*140a2bf6a*/  nop
/*140a2bf6b*/ loc_140A2BF6B: mov rdx, qword ptr [rbp+580h+var_380]
/*140a2bf72*/  test rdx, rdx
/*140a2bf75*/  jz short loc_140A2BF89
/*140a2bf77*/  mov r8d, 1
/*140a2bf7d*/  mov rcx, qword ptr [rbp+580h+var_380+8]
/*140a2bf84*/  call sub_140001660
/*140a2bf89*/ loc_140A2BF89: mov rax, qword ptr [rbp+580h+var_2E8]
/*140a2bf90*/  lea rcx, [rbp+580h+var_260+8]
/*140a2bf97*/  mov [rcx+10h], rax
/*140a2bf9b*/  movdqu xmm0, [rbp+580h+var_2F8]
/*140a2bfa3*/  movdqu xmmword ptr [rcx], xmm0
/*140a2bfa7*/  mov byte ptr [rbp+580h+var_260], 5
/*140a2bfae*/  mov [rbp+580h+var_273], 0
/*140a2bfb5*/ loc_140A2BFB5: lea rcx, [rbp+580h+var_200]
/*140a2bfbc*/  call sub_1400104F0
/*140a2bfc1*/  nop
/*140a2bfc2*/  jmp loc_140A2AEC4
/*140a2bfc7*/ loc_140A2BFC7: lea rcx, [rbp+580h+var_1C0]
/*140a2bfce*/  call sub_140348CF0
/*140a2bfd3*/  nop
/*140a2bfd4*/ loc_140A2BFD4: mov rdx, [rbp+580h+var_108]
/*140a2bfdb*/  test rdx, rdx
/*140a2bfde*/  jz short loc_140A2BFF2
/*140a2bfe0*/  mov r8d, 1
/*140a2bfe6*/  mov rcx, [rbp+580h+var_F8]
/*140a2bfed*/  call sub_140001660
/*140a2bff2*/ loc_140A2BFF2: cmp bl, 0FFh
/*140a2bff5*/  jz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2bffb*/  movups xmm0, [rbp+580h+var_2B0+0Fh]
/*140a2c002*/  lea rax, [rbp+580h+var_200+8]
/*140a2c009*/  movups xmmword ptr [rax+8], xmm0
/*140a2c00d*/  movdqa xmm0, [rbp+580h+var_2B0]
/*140a2c015*/  movdqu xmmword ptr [rax-7], xmm0
/*140a2c01a*/  mov byte ptr [rbp+580h+var_200], bl
/*140a2c020*/ loc_140A2C020: mov edx, 4
/*140a2c025*/  mov rcx, r12
/*140a2c028*/  lea r8, [rbp+580h+var_200]
/*140a2c02f*/  call sub_141433D50
/*140a2c034*/  nop
/*140a2c035*/  mov bl, 0FFh
/*140a2c037*/  mov sil, 1
/*140a2c03a*/  test rax, rax
/*140a2c03d*/  jz loc_140A2C29A
/*140a2c043*/  cmp byte ptr [rax], 3
/*140a2c046*/  jnz loc_140A2C29A
/*140a2c04c*/  mov rcx, [rax+10h]
/*140a2c050*/  mov rax, [rax+18h]
/*140a2c054*/  cmp rax, 11h
/*140a2c058*/  jz loc_140A2C271
/*140a2c05e*/  cmp rax, 8
/*140a2c062*/  jnz loc_140A2C29A
/*140a2c068*/  mov rax, 676E696B6E696874h
/*140a2c072*/  cmp [rcx], rax
/*140a2c075*/  jnz loc_140A2C29A
/*140a2c07b*/  mov edx, 8
/*140a2c080*/  lea rcx, aThinking_0; "thinking"
/*140a2c087*/  lea r8, [rbp+580h+var_200]
/*140a2c08e*/  call sub_141433D50
/*140a2c093*/  nop
/*140a2c094*/  mov r14, r12
/*140a2c097*/  mov ecx, 1
/*140a2c09c*/  test rax, rax
/*140a2c09f*/  jz loc_140A2C577
/*140a2c0a5*/  cmp byte ptr [rax], 3
/*140a2c0a8*/  jnz loc_140A2C577
/*140a2c0ae*/  mov rcx, [rax+10h]
/*140a2c0b2*/  mov rax, [rax+18h]
/*140a2c0b6*/  jmp loc_140A2C579
/*140a2c0bb*/ loc_140A2C0BB: mov ebx, 1
/*140a2c0c0*/  mov r12, r13
/*140a2c0c3*/ loc_140A2C0C3: mov byte ptr [rbp+580h+var_180], 3
/*140a2c0ca*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2c0d1*/  mov qword ptr [rbp+580h+var_170], rbx
/*140a2c0d8*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a2c0df*/  mov [rbp+580h+var_2BA], 0
/*140a2c0e6*/ loc_140A2C0E6: lea rcx, [rbp+580h+var_1C0]
/*140a2c0ed*/  lea rdx, [rbp+580h+var_240]
/*140a2c0f4*/  lea r8, [rbp+580h+var_200]
/*140a2c0fb*/  lea r9, [rbp+580h+var_180]
/*140a2c102*/  call sub_140307860
/*140a2c107*/  nop
/*140a2c108*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2c10f*/  mov ebx, dword ptr [rbp+580h+var_108]
/*140a2c115*/  jz short loc_140A2C124
/*140a2c117*/ loc_140A2C117: lea rcx, [rbp+580h+var_1C0]
/*140a2c11e*/  call sub_1400104F0
/*140a2c123*/  nop
/*140a2c124*/ loc_140A2C124: mov rax, [rbp+580h+var_230]
/*140a2c12b*/  lea rcx, [rbp+580h+var_260+8]
/*140a2c132*/  mov [rcx+10h], rax
/*140a2c136*/  movdqu xmm0, [rbp+580h+var_240]
/*140a2c13e*/  movdqu xmmword ptr [rcx], xmm0
/*140a2c142*/  mov byte ptr [rbp+580h+var_260], 5
/*140a2c149*/  mov rdx, qword ptr [rbp+580h+var_380]
/*140a2c150*/  test rdx, rdx
/*140a2c153*/  jz loc_140A2AEC4
/*140a2c159*/  mov r8d, 1
/*140a2c15f*/  mov rcx, qword ptr [rbp+580h+var_380+8]
/*140a2c166*/  call sub_140001660
/*140a2c16b*/  jmp loc_140A2AEC4
/*140a2c170*/ loc_140A2C170: mov [rbp+580h+var_FC], 1
/*140a2c177*/ loc_140A2C177: mov edx, 7
/*140a2c17c*/  lea rcx, aContent_6; "content"
/*140a2c183*/  mov r8, rsi
/*140a2c186*/  call sub_141433D50
/*140a2c18b*/  nop
/*140a2c18c*/  test rax, rax
/*140a2c18f*/  jz loc_140A2B2FC
/*140a2c195*/  cmp byte ptr [rax], 4
/*140a2c198*/  jnz loc_140A2B2FC
/*140a2c19e*/  mov rcx, [rax+10h]
/*140a2c1a2*/  mov rax, [rax+18h]
/*140a2c1a6*/  shl rax, 5
/*140a2c1aa*/  add rax, rcx
/*140a2c1ad*/  mov qword ptr [rbp+580h+var_180], rcx
/*140a2c1b4*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a2c1bb*/  mov [rbp+580h+var_FC], 1
/*140a2c1c2*/  lea rcx, [rbp+580h+var_180]
/*140a2c1c9*/  call sub_140999170
/*140a2c1ce*/  nop
/*140a2c1cf*/  test al, al
/*140a2c1d1*/  jz loc_140A2B2FC
/*140a2c1d7*/  mov rax, [rbp+580h+var_350]
/*140a2c1de*/  test rax, rax
/*140a2c1e1*/  jz loc_140A2C8C8
/*140a2c1e7*/  mov rcx, [rbp+580h+var_358]
/*140a2c1ee*/  shl rax, 5
/*140a2c1f2*/  lea r8, [rcx+rax]
/*140a2c1f6*/  add r8, 0FFFFFFFFFFFFFFE0h
/*140a2c1fa*/  mov [rbp+580h+var_FC], 1
/*140a2c201*/  mov edx, 7
/*140a2c206*/  lea rcx, aContent_6; "content"
/*140a2c20d*/  call sub_141433D50
/*140a2c212*/  nop
/*140a2c213*/  mov rsi, rax
/*140a2c216*/  test rax, rax
/*140a2c219*/  jz loc_140A2C8C8
/*140a2c21f*/  cmp byte ptr [rsi], 4
/*140a2c222*/  jnz loc_140A2C8C8
/*140a2c228*/  mov rbx, [rsi+18h]
/*140a2c22c*/  cmp rbx, [rsi+8]
/*140a2c230*/  jnz short loc_140A2C23F
/*140a2c232*/ loc_140A2C232: mov rcx, rsi
/*140a2c235*/  add rcx, 8
/*140a2c239*/  call sub_1416890A0
/*140a2c23e*/  nop
/*140a2c23f*/ loc_140A2C23F: mov rax, [rsi+10h]
/*140a2c243*/  mov rcx, rbx
/*140a2c246*/  shl rcx, 5
/*140a2c24a*/  movdqu xmm0, [rbp+580h+var_470]
/*140a2c252*/  movdqu xmm1, [rbp+580h+var_460]
/*140a2c25a*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2c260*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2c265*/  inc rbx
/*140a2c268*/  mov [rsi+18h], rbx
/*140a2c26c*/  jmp loc_140A2B82C
/*140a2c271*/ loc_140A2C271: movdqu xmm0, xmmword ptr [rcx]
/*140a2c275*/  pcmpeqb xmm0, xmm9
/*140a2c27a*/  movzx eax, byte ptr [rcx+10h]
/*140a2c27e*/  movd xmm1, eax
/*140a2c282*/  pcmpeqb xmm1, xmm10
/*140a2c287*/  pand xmm1, xmm0
/*140a2c28b*/  pmovmskb eax, xmm1
/*140a2c28f*/  cmp eax, 0FFFFh
/*140a2c294*/  jz loc_140A2C335
/*140a2c29a*/ loc_140A2C29A: mov rax, [rbp+580h+var_1C8]
/*140a2c2a1*/  mov [rbp+580h+var_270], rax
/*140a2c2a8*/ loc_140A2C2A8: lea rcx, [rbp+580h+var_200]
/*140a2c2af*/  call sub_1400104F0
/*140a2c2b4*/  nop
/*140a2c2b5*/  test sil, sil
/*140a2c2b8*/  jnz def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2c2be*/  mov byte ptr [rbp+580h+var_180], bl
/*140a2c2c4*/  movups xmm0, [rbp+580h+var_1C0+0Fh]
/*140a2c2cb*/  lea rax, [rbp+580h+var_170]
/*140a2c2d2*/  movups xmmword ptr [rax], xmm0
/*140a2c2d5*/  movaps xmm0, [rbp+580h+var_1C0]
/*140a2c2dc*/  movups xmmword ptr [rax-0Fh], xmm0
/*140a2c2e0*/  mov rsi, [rbp+580h+var_300]
/*140a2c2e7*/  cmp rsi, qword ptr [rbp+580h+var_310]
/*140a2c2ee*/  jnz short loc_140A2C2FD
/*140a2c2f0*/ loc_140A2C2F0: lea rcx, [rbp+580h+var_310]
/*140a2c2f7*/  call sub_1416890A0
/*140a2c2fc*/  nop
/*140a2c2fd*/ loc_140A2C2FD: mov rax, qword ptr [rbp+580h+var_310+8]
/*140a2c304*/  mov rcx, rsi
/*140a2c307*/  shl rcx, 5
/*140a2c30b*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c313*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c31b*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2c321*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2c326*/  inc rsi
/*140a2c329*/  mov [rbp+580h+var_300], rsi
/*140a2c330*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2c335*/ loc_140A2C335: mov edx, 4
/*140a2c33a*/  lea rcx, aData_0; "data"
/*140a2c341*/  lea r8, [rbp+580h+var_200]
/*140a2c348*/  call sub_141433D50
/*140a2c34d*/  nop
/*140a2c34e*/  test rax, rax
/*140a2c351*/  jz loc_140A2C8A8
/*140a2c357*/  cmp byte ptr [rax], 3
/*140a2c35a*/  jnz loc_140A2C8A8
/*140a2c360*/  mov rcx, [rax+10h]
/*140a2c364*/  mov rax, [rax+18h]
/*140a2c368*/  mov qword ptr [rbp+580h+var_2F8], rcx
/*140a2c36f*/  mov qword ptr [rbp+580h+var_2F8+8], rax
/*140a2c376*/  test rax, rax
/*140a2c379*/  jz loc_140A2C8A8
/*140a2c37f*/  mov qword ptr [rbp+580h+var_240], 0
/*140a2c38a*/  mov [rbp+580h+var_230], 0
/*140a2c395*/  call nullsub_1
/*140a2c39a*/  mov ecx, 4
/*140a2c39f*/  mov edx, 1
/*140a2c3a4*/  call sub_140001650
/*140a2c3a9*/  test rax, rax
/*140a2c3ac*/  jz loc_140A2E62F
/*140a2c3b2*/  mov dword ptr [rax], 65707974h
/*140a2c3b8*/  mov qword ptr [rbp+580h+var_260], 4
/*140a2c3c3*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2c3ca*/  mov qword ptr [rbp+580h+var_250], 4
/*140a2c3d5*/  mov [rbp+580h+var_201], 1
/*140a2c3dc*/ loc_140A2C3DC: lea rcx, [rbp+580h+var_180]
/*140a2c3e3*/  lea rdx, off_1417A6360; "redacted_thinking"
/*140a2c3ea*/  call sub_140B56640
/*140a2c3ef*/  nop
/*140a2c3f0*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c3f7*/  jz loc_140A2E43B
/*140a2c3fd*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c405*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c40d*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2c415*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c41d*/  mov [rbp+580h+var_201], 0
/*140a2c424*/  lea rcx, [rbp+580h+var_180]
/*140a2c42b*/  lea rdx, [rbp+580h+var_240]
/*140a2c432*/  lea r8, [rbp+580h+var_260]
/*140a2c439*/  lea r9, [rbp+580h+var_1C0]
/*140a2c440*/  call sub_140307860
/*140a2c445*/  nop
/*140a2c446*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c44d*/  jz short loc_140A2C45C
/*140a2c44f*/ loc_140A2C44F: lea rcx, [rbp+580h+var_180]
/*140a2c456*/  call sub_1400104F0
/*140a2c45b*/  nop
/*140a2c45c*/ loc_140A2C45C: call nullsub_1
/*140a2c461*/  mov ecx, 4
/*140a2c466*/  mov edx, 1
/*140a2c46b*/  call sub_140001650
/*140a2c470*/  test rax, rax
/*140a2c473*/  jz loc_140A2E5DB
/*140a2c479*/  mov dword ptr [rax], 61746164h
/*140a2c47f*/  mov qword ptr [rbp+580h+var_260], 4
/*140a2c48a*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2c491*/  mov qword ptr [rbp+580h+var_250], 4
/*140a2c49c*/  mov [rbp+580h+var_202], 1
/*140a2c4a3*/ loc_140A2C4A3: lea rcx, [rbp+580h+var_180]
/*140a2c4aa*/  lea rdx, [rbp+580h+var_2F8]
/*140a2c4b1*/  call sub_140B56640
/*140a2c4b6*/  nop
/*140a2c4b7*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c4be*/  jz loc_140A2E4B9
/*140a2c4c4*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c4cc*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c4d4*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2c4dc*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c4e4*/  mov [rbp+580h+var_202], 0
/*140a2c4eb*/  lea rcx, [rbp+580h+var_180]
/*140a2c4f2*/  lea rdx, [rbp+580h+var_240]
/*140a2c4f9*/  lea r8, [rbp+580h+var_260]
/*140a2c500*/  lea r9, [rbp+580h+var_1C0]
/*140a2c507*/  call sub_140307860
/*140a2c50c*/  nop
/*140a2c50d*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c514*/  jz short loc_140A2C523
/*140a2c516*/ loc_140A2C516: lea rcx, [rbp+580h+var_180]
/*140a2c51d*/  call sub_1400104F0
/*140a2c522*/  nop
/*140a2c523*/ loc_140A2C523: movups xmm0, [rbp+580h+var_240]
/*140a2c52a*/  movaps [rbp+580h+var_180], xmm0
/*140a2c531*/  mov rax, [rbp+580h+var_230]
/*140a2c538*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2c53f*/  lea rcx, [rbp+580h+var_2B0+8]
/*140a2c546*/  mov [rcx+0Fh], rax
/*140a2c54a*/  movups xmmword ptr [rcx-1], xmm0
/*140a2c54e*/  movdqu xmm0, [rbp+580h+var_2B0]
/*140a2c556*/  movdqu xmm1, [rbp+580h+var_2B0+0Fh]
/*140a2c55e*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c566*/  movdqu [rbp+580h+var_1C0+0Fh], xmm1
/*140a2c56e*/  mov bl, 5
/*140a2c570*/  xor esi, esi
/*140a2c572*/  jmp loc_140A2C29A
/*140a2c577*/ loc_140A2C577: xor eax, eax
/*140a2c579*/ loc_140A2C579: mov qword ptr [rbp+580h+var_3E0], rcx
/*140a2c580*/  mov qword ptr [rbp+580h+var_3E0+8], rax
/*140a2c587*/ loc_140A2C587: mov edx, 9
/*140a2c58c*/  lea rcx, aSignature; "signature"
/*140a2c593*/  lea r8, [rbp+580h+var_200]
/*140a2c59a*/  call sub_141433D50
/*140a2c59f*/  nop
/*140a2c5a0*/  mov r12, r14
/*140a2c5a3*/  test rax, rax
/*140a2c5a6*/  jz loc_140A2C8A8
/*140a2c5ac*/  cmp byte ptr [rax], 3
/*140a2c5af*/  jnz loc_140A2C8A8
/*140a2c5b5*/  mov rcx, [rax+10h]
/*140a2c5b9*/  mov rax, [rax+18h]
/*140a2c5bd*/  mov qword ptr [rbp+580h+var_2F8], rcx
/*140a2c5c4*/  mov qword ptr [rbp+580h+var_2F8+8], rax
/*140a2c5cb*/  test rax, rax
/*140a2c5ce*/  jz loc_140A2C8A8
/*140a2c5d4*/  mov qword ptr [rbp+580h+var_240], 0
/*140a2c5df*/  mov [rbp+580h+var_230], 0
/*140a2c5ea*/  call nullsub_1
/*140a2c5ef*/  mov ecx, 4
/*140a2c5f4*/  mov edx, 1
/*140a2c5f9*/  call sub_140001650
/*140a2c5fe*/  test rax, rax
/*140a2c601*/  jz loc_140A2E5F0
/*140a2c607*/  mov dword ptr [rax], 65707974h
/*140a2c60d*/  mov qword ptr [rbp+580h+var_260], 4
/*140a2c618*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2c61f*/  mov qword ptr [rbp+580h+var_250], 4
/*140a2c62a*/  mov [rbp+580h+var_203], 1
/*140a2c631*/ loc_140A2C631: lea rcx, [rbp+580h+var_180]
/*140a2c638*/  lea rdx, off_1417A6478; "thinking"
/*140a2c63f*/  call sub_140B56640
/*140a2c644*/  nop
/*140a2c645*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c64c*/  jz loc_140A2E47A
/*140a2c652*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c65a*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c662*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2c66a*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c672*/  mov [rbp+580h+var_203], 0
/*140a2c679*/  lea rcx, [rbp+580h+var_180]
/*140a2c680*/  lea rdx, [rbp+580h+var_240]
/*140a2c687*/  lea r8, [rbp+580h+var_260]
/*140a2c68e*/  lea r9, [rbp+580h+var_1C0]
/*140a2c695*/  call sub_140307860
/*140a2c69a*/  nop
/*140a2c69b*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c6a2*/  jz short loc_140A2C6B1
/*140a2c6a4*/ loc_140A2C6A4: lea rcx, [rbp+580h+var_180]
/*140a2c6ab*/  call sub_1400104F0
/*140a2c6b0*/  nop
/*140a2c6b1*/ loc_140A2C6B1: call nullsub_1
/*140a2c6b6*/  mov ecx, 8
/*140a2c6bb*/  mov edx, 1
/*140a2c6c0*/  call sub_140001650
/*140a2c6c5*/  test rax, rax
/*140a2c6c8*/  jz loc_140A2E605
/*140a2c6ce*/  mov rcx, 676E696B6E696874h
/*140a2c6d8*/  mov [rax], rcx
/*140a2c6db*/  mov qword ptr [rbp+580h+var_260], 8
/*140a2c6e6*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2c6ed*/  mov qword ptr [rbp+580h+var_250], 8
/*140a2c6f8*/  mov [rbp+580h+var_204], 1
/*140a2c6ff*/ loc_140A2C6FF: lea rcx, [rbp+580h+var_180]
/*140a2c706*/  lea rdx, [rbp+580h+var_3E0]
/*140a2c70d*/  call sub_140B56640
/*140a2c712*/  nop
/*140a2c713*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c71a*/  jz loc_140A2E3FC
/*140a2c720*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c728*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c730*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2c738*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c740*/  mov [rbp+580h+var_204], 0
/*140a2c747*/  lea rcx, [rbp+580h+var_180]
/*140a2c74e*/  lea rdx, [rbp+580h+var_240]
/*140a2c755*/  lea r8, [rbp+580h+var_260]
/*140a2c75c*/  lea r9, [rbp+580h+var_1C0]
/*140a2c763*/  call sub_140307860
/*140a2c768*/  nop
/*140a2c769*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c770*/  jz short loc_140A2C77F
/*140a2c772*/ loc_140A2C772: lea rcx, [rbp+580h+var_180]
/*140a2c779*/  call sub_1400104F0
/*140a2c77e*/  nop
/*140a2c77f*/ loc_140A2C77F: call nullsub_1
/*140a2c784*/  mov ecx, 9
/*140a2c789*/  mov edx, 1
/*140a2c78e*/  call sub_140001650
/*140a2c793*/  test rax, rax
/*140a2c796*/  jz loc_140A2E61A
/*140a2c79c*/  mov rcx, 727574616E676973h
/*140a2c7a6*/  mov [rax], rcx
/*140a2c7a9*/  mov byte ptr [rax+8], 65h ; 'e'
/*140a2c7ad*/  mov qword ptr [rbp+580h+var_260], 9
/*140a2c7b8*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2c7bf*/  mov qword ptr [rbp+580h+var_250], 9
/*140a2c7ca*/  mov [rbp+580h+var_205], 1
/*140a2c7d1*/ loc_140A2C7D1: lea rcx, [rbp+580h+var_180]
/*140a2c7d8*/  lea rdx, [rbp+580h+var_2F8]
/*140a2c7df*/  call sub_140B56640
/*140a2c7e4*/  nop
/*140a2c7e5*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c7ec*/  jz loc_140A2E3BD
/*140a2c7f2*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2c7fa*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2c802*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2c80a*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c812*/  mov [rbp+580h+var_205], 0
/*140a2c819*/  lea rcx, [rbp+580h+var_180]
/*140a2c820*/  lea rdx, [rbp+580h+var_240]
/*140a2c827*/  lea r8, [rbp+580h+var_260]
/*140a2c82e*/  lea r9, [rbp+580h+var_1C0]
/*140a2c835*/  call sub_140307860
/*140a2c83a*/  nop
/*140a2c83b*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2c842*/  jz short loc_140A2C851
/*140a2c844*/ loc_140A2C844: lea rcx, [rbp+580h+var_180]
/*140a2c84b*/  call sub_1400104F0
/*140a2c850*/  nop
/*140a2c851*/ loc_140A2C851: movups xmm0, [rbp+580h+var_240]
/*140a2c858*/  movaps [rbp+580h+var_180], xmm0
/*140a2c85f*/  mov rax, [rbp+580h+var_230]
/*140a2c866*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2c86d*/  lea rcx, [rbp+580h+var_2B0+8]
/*140a2c874*/  mov [rcx+0Fh], rax
/*140a2c878*/  movups xmmword ptr [rcx-1], xmm0
/*140a2c87c*/  movdqu xmm0, [rbp+580h+var_2B0]
/*140a2c884*/  movdqu xmm1, [rbp+580h+var_2B0+0Fh]
/*140a2c88c*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2c894*/  movdqu [rbp+580h+var_1C0+0Fh], xmm1
/*140a2c89c*/  mov bl, 5
/*140a2c89e*/  xor esi, esi
/*140a2c8a0*/  mov r12, r14
/*140a2c8a3*/  jmp loc_140A2C29A
/*140a2c8a8*/ loc_140A2C8A8: mov rax, [rbp+580h+var_1C8]
/*140a2c8af*/  mov [rbp+580h+var_270], rax
/*140a2c8b6*/ loc_140A2C8B6: lea rcx, [rbp+580h+var_200]
/*140a2c8bd*/  call sub_1400104F0
/*140a2c8c2*/  nop
/*140a2c8c3*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2c8c8*/ loc_140A2C8C8: lea rcx, [rbp+580h+var_470]
/*140a2c8cf*/  call sub_1400104F0
/*140a2c8d4*/  nop
/*140a2c8d5*/  jmp loc_140A2B82C
/*140a2c8da*/ loc_140A2C8DA: mov [rsp+600h+var_5E0], 20h ; ' '
/*140a2c8e3*/  mov r9d, 8
/*140a2c8e9*/  lea rcx, [rbp+580h+var_1C0]
/*140a2c8f0*/  mov rdx, r13
/*140a2c8f3*/  mov r8, rbx
/*140a2c8f6*/  call sub_141688D30
/*140a2c8fb*/  nop
/*140a2c8fc*/  mov r13, qword ptr [rbp+580h+var_1B0]
/*140a2c903*/  jmp loc_140A2BA20
/*140a2c908*/ loc_140A2C908: mov [rsp+600h+var_5E0], 1
/*140a2c911*/  mov r9d, 1
/*140a2c917*/  lea rcx, [rbp+580h+var_180]
/*140a2c91e*/  mov rdx, r12
/*140a2c921*/  mov r8, rsi
/*140a2c924*/  call sub_141688D30
/*140a2c929*/  nop
/*140a2c92a*/ loc_140A2C92A: mov r12, qword ptr [rbp+580h+var_170]
/*140a2c931*/ loc_140A2C931: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2c938*/  mov [rbp+580h+var_F8], rax
/*140a2c93f*/  lea rcx, [rax+r12]
/*140a2c943*/  mov rdx, [rbp+580h+var_268]
/*140a2c94a*/  mov r8, rsi
/*140a2c94d*/  call sub_141684120
/*140a2c952*/ loc_140A2C952: add r12, rsi
/*140a2c955*/  mov rsi, [rbp+580h+var_F8]
/*140a2c95c*/ loc_140A2C95C: mov [rbp+580h+var_108], r12
/*140a2c963*/  mov qword ptr [rbp+580h+var_170], r12
/*140a2c96a*/ loc_140A2C96A: add r14, 20h ; ' '
/*140a2c96e*/  add rbx, 0FFFFFFFFFFFFFFE0h
/*140a2c972*/  jz loc_140A2CBC3
/*140a2c978*/ loc_140A2C978: mov edx, 4
/*140a2c97d*/  mov rcx, r13
/*140a2c980*/  mov r8, r14
/*140a2c983*/  call sub_141433D50
/*140a2c988*/  nop
/*140a2c989*/  test rax, rax
/*140a2c98c*/  jz short loc_140A2C96A
/*140a2c98e*/  cmp byte ptr [rax], 3
/*140a2c991*/  jnz short loc_140A2C96A
/*140a2c993*/  mov rcx, [rax+10h]
/*140a2c997*/  mov rax, [rax+18h]
/*140a2c99b*/  cmp rax, 0Bh
/*140a2c99f*/  jz short loc_140A2C9CC
/*140a2c9a1*/  cmp rax, 0Ah
/*140a2c9a5*/  jnz short loc_140A2C96A
/*140a2c9a7*/  mov rax, [rcx]
/*140a2c9aa*/  mov rdx, 65745F7475706E69h
/*140a2c9b4*/  xor rax, rdx
/*140a2c9b7*/  movzx ecx, word ptr [rcx+8]
/*140a2c9bb*/  xor rcx, 7478h
/*140a2c9c2*/  or rcx, rax
/*140a2c9c5*/  jnz short loc_140A2C96A
/*140a2c9c7*/  jmp loc_140A2CA54
/*140a2c9cc*/ loc_140A2C9CC: mov rax, [rcx]
/*140a2c9cf*/  mov rdx, 745F74757074756Fh
/*140a2c9d9*/  xor rax, rdx
/*140a2c9dc*/  mov rdx, [rcx+3]
/*140a2c9e0*/  mov r8, 747865745F747570h
/*140a2c9ea*/  xor rdx, r8
/*140a2c9ed*/  or rdx, rax
/*140a2c9f0*/  jz short loc_140A2CA54
/*140a2c9f2*/  mov rax, [rcx]
/*140a2c9f5*/  mov rdx, 6D695F7475706E69h
/*140a2c9ff*/  xor rax, rdx
/*140a2ca02*/  mov rcx, [rcx+3]
/*140a2ca06*/  mov rdx, 6567616D695F7475h
/*140a2ca10*/  xor rcx, rdx
/*140a2ca13*/  or rcx, rax
/*140a2ca16*/  jnz loc_140A2C96A
/*140a2ca1c*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2ca23*/  mov r12, [rbp+580h+var_108]
/*140a2ca2a*/  test r12, r12
/*140a2ca2d*/  jz loc_140A2CACB
/*140a2ca33*/  cmp rax, r12
/*140a2ca36*/  jz loc_140A2CB4F
/*140a2ca3c*/ loc_140A2CA3C: mov byte ptr [rsi+r12], 0Ah
/*140a2ca41*/  inc r12
/*140a2ca44*/  mov qword ptr [rbp+580h+var_170], r12
/*140a2ca4b*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2ca52*/  jmp short loc_140A2CACE
/*140a2ca54*/ loc_140A2CA54: mov edx, 4
/*140a2ca59*/  lea rcx, aText_10; "text"
/*140a2ca60*/  mov r8, r14
/*140a2ca63*/  call sub_141433D50
/*140a2ca68*/  nop
/*140a2ca69*/  test rax, rax
/*140a2ca6c*/  jz loc_140A2C96A
/*140a2ca72*/  cmp byte ptr [rax], 3
/*140a2ca75*/  jnz loc_140A2C96A
/*140a2ca7b*/  mov [rbp+580h+var_F8], rsi
/*140a2ca82*/  mov rcx, [rax+10h]
/*140a2ca86*/  mov [rbp+580h+var_268], rcx
/*140a2ca8d*/  mov rsi, [rax+18h]
/*140a2ca91*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2ca98*/  mov rdx, [rbp+580h+var_108]
/*140a2ca9f*/  test rdx, rdx
/*140a2caa2*/  jz short loc_140A2CB02
/*140a2caa4*/  cmp rax, rdx
/*140a2caa7*/  jz loc_140A2CB87
/*140a2caad*/ loc_140A2CAAD: mov rax, [rbp+580h+var_F8]
/*140a2cab4*/  mov byte ptr [rax+rdx], 0Ah
/*140a2cab8*/  inc rdx
/*140a2cabb*/  mov qword ptr [rbp+580h+var_170], rdx
/*140a2cac2*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2cac9*/  jmp short loc_140A2CB04
/*140a2cacb*/ loc_140A2CACB: xor r12d, r12d
/*140a2cace*/ loc_140A2CACE: sub rax, r12
/*140a2cad1*/  cmp rax, 1Eh
/*140a2cad5*/  jbe short loc_140A2CB21
/*140a2cad7*/ loc_140A2CAD7: mov rsi, qword ptr [rbp+580h+var_180+8]
/*140a2cade*/  movups xmm0, cs:xmmword_1417A7898+0Fh
/*140a2cae5*/  movups xmmword ptr [rsi+r12+0Fh], xmm0
/*140a2caeb*/  movdqu xmm0, cs:xmmword_1417A7898
/*140a2caf3*/  movdqu xmmword ptr [rsi+r12], xmm0
/*140a2caf9*/  add r12, 1Fh
/*140a2cafd*/  jmp loc_140A2C95C
/*140a2cb02*/ loc_140A2CB02: xor edx, edx
/*140a2cb04*/ loc_140A2CB04: mov r12, rdx
/*140a2cb07*/  sub rax, rdx
/*140a2cb0a*/  cmp rsi, rax
/*140a2cb0d*/  ja loc_140A2C908
/*140a2cb13*/  test rsi, rsi
/*140a2cb16*/  jnz loc_140A2C931
/*140a2cb1c*/  jmp loc_140A2C952
/*140a2cb21*/ loc_140A2CB21: mov [rsp+600h+var_5E0], 1
/*140a2cb2a*/  mov r8d, 1Fh
/*140a2cb30*/  mov r9d, 1
/*140a2cb36*/  lea rcx, [rbp+580h+var_180]
/*140a2cb3d*/  mov rdx, r12
/*140a2cb40*/  call sub_141688D30
/*140a2cb45*/  nop
/*140a2cb46*/  mov r12, qword ptr [rbp+580h+var_170]
/*140a2cb4d*/  jmp short loc_140A2CAD7
/*140a2cb4f*/ loc_140A2CB4F: mov [rsp+600h+var_5E0], 1
/*140a2cb58*/  mov r8d, 1
/*140a2cb5e*/  mov r9d, 1
/*140a2cb64*/  lea rcx, [rbp+580h+var_180]
/*140a2cb6b*/  mov rdx, r12
/*140a2cb6e*/  call sub_141688D30
/*140a2cb73*/  nop
/*140a2cb74*/  mov rsi, qword ptr [rbp+580h+var_180+8]
/*140a2cb7b*/  mov r12, [rbp+580h+var_108]
/*140a2cb82*/  jmp loc_140A2CA3C
/*140a2cb87*/ loc_140A2CB87: mov [rsp+600h+var_5E0], 1
/*140a2cb90*/  mov r8d, 1
/*140a2cb96*/  mov r9d, 1
/*140a2cb9c*/  lea rcx, [rbp+580h+var_180]
/*140a2cba3*/  call sub_141688D30
/*140a2cba8*/  nop
/*140a2cba9*/  mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2cbb0*/  mov [rbp+580h+var_F8], rax
/*140a2cbb7*/  mov rdx, [rbp+580h+var_108]
/*140a2cbbe*/  jmp loc_140A2CAAD
/*140a2cbc3*/ loc_140A2CBC3: mov rax, qword ptr [rbp+580h+var_170]
/*140a2cbca*/  mov qword ptr [rbp+580h+var_2A0], rax
/*140a2cbd1*/  mov rax, qword ptr [rbp+580h+var_180]
/*140a2cbd8*/  mov qword ptr [rbp+580h+var_2B0], rax
/*140a2cbdf*/  mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2cbe6*/  mov qword ptr [rbp+580h+var_2B0+8], rax
/*140a2cbed*/  mov r12, r13
/*140a2cbf0*/ loc_140A2CBF0: mov rsi, qword ptr [rbp+580h+var_2A0]
/*140a2cbf7*/  test rsi, rsi
/*140a2cbfa*/  jz loc_140A2CCC2
/*140a2cc00*/  cmp [rbp+580h+var_1C8], 0FFFFFFFFFFFFFFFFh
/*140a2cc08*/  jz loc_140A2CCF7
/*140a2cc0e*/  mov rcx, [rbp+580h+var_110]
/*140a2cc15*/  test rcx, rcx
/*140a2cc18*/  jz loc_140A2CD1F
/*140a2cc1e*/  mov rax, [rbp+580h+var_1C8]
/*140a2cc25*/  mov qword ptr [rbp+580h+var_200], rax
/*140a2cc2c*/  mov rax, [rbp+580h+var_348]
/*140a2cc33*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2cc3a*/  mov qword ptr [rbp+580h+var_1F0], rcx
/*140a2cc41*/  lea rax, [rbp+580h+var_200]
/*140a2cc48*/  mov qword ptr [rbp+580h+var_180], rax
/*140a2cc4f*/  lea rcx, sub_1400015F0
/*140a2cc56*/  mov qword ptr [rbp+580h+var_180+8], rcx
/*140a2cc5d*/  lea rax, [rbp+580h+var_2B0]
/*140a2cc64*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2cc6b*/  mov qword ptr [rbp+580h+var_170+8], rcx
/*140a2cc72*/ loc_140A2CC72: lea rcx, [rbp+580h+var_1C0]
/*140a2cc79*/  lea rdx, unk_1417A85B0
/*140a2cc80*/  lea r8, [rbp+580h+var_180]
/*140a2cc87*/  call sub_14149C0F0
/*140a2cc8c*/  nop
/*140a2cc8d*/  mov rbx, qword ptr [rbp+580h+var_1C0]
/*140a2cc94*/  mov r14, qword ptr [rbp+580h+var_1C0+8]
/*140a2cc9b*/  mov rsi, qword ptr [rbp+580h+var_1B0]
/*140a2cca2*/  mov rdx, qword ptr [rbp+580h+var_200]
/*140a2cca9*/  test rdx, rdx
/*140a2ccac*/  jz short loc_140A2CCD7
/*140a2ccae*/  mov rcx, qword ptr [rbp+580h+var_200+8]
/*140a2ccb5*/  mov r8d, 1
/*140a2ccbb*/  call sub_140001660
/*140a2ccc0*/  jmp short loc_140A2CCD7
/*140a2ccc2*/ loc_140A2CCC2: mov rsi, [rbp+580h+var_110]
/*140a2ccc9*/  mov r14, [rbp+580h+var_348]
/*140a2ccd0*/  mov rbx, [rbp+580h+var_1C8]
/*140a2ccd7*/ loc_140A2CCD7: mov rdx, qword ptr [rbp+580h+var_2B0]
/*140a2ccde*/  test rdx, rdx
/*140a2cce1*/  jz short loc_140A2CD05
/*140a2cce3*/  mov rcx, qword ptr [rbp+580h+var_2B0+8]
/*140a2ccea*/  mov r8d, 1
/*140a2ccf0*/ loc_140A2CCF0: call sub_140001660
/*140a2ccf5*/  jmp short loc_140A2CD05
/*140a2ccf7*/ loc_140A2CCF7: mov rbx, qword ptr [rbp+580h+var_2B0]
/*140a2ccfe*/  mov r14, qword ptr [rbp+580h+var_2B0+8]
/*140a2cd05*/ loc_140A2CD05: mov [rbp+580h+var_110], rsi
/*140a2cd0c*/  mov [rbp+580h+var_348], r14
/*140a2cd13*/  mov [rbp+580h+var_1C8], rbx
/*140a2cd1a*/  jmp def_140A290D9; jumptable 0000000140A290D9 default case, cases 8,10-12,14-19
/*140a2cd1f*/ loc_140A2CD1F: mov rbx, qword ptr [rbp+580h+var_2B0]
/*140a2cd26*/  mov r14, qword ptr [rbp+580h+var_2B0+8]
/*140a2cd2d*/  mov rdx, [rbp+580h+var_1C8]
/*140a2cd34*/  test rdx, rdx
/*140a2cd37*/  jz short loc_140A2CD05
/*140a2cd39*/  mov r8d, 1
/*140a2cd3f*/  mov rcx, [rbp+580h+var_348]
/*140a2cd46*/  jmp short loc_140A2CCF0
/*140a2cd48*/ loc_140A2CD48: mov eax, 1
/*140a2cd4d*/  mov [rbp+580h+var_3A8], rax
/*140a2cd54*/  mov bl, 1
/*140a2cd56*/  mov [rbp+580h+var_368], 0
/*140a2cd61*/  jmp loc_140A2A039
/*140a2cd66*/ loc_140A2CD66: mov eax, 1
/*140a2cd6b*/  mov [rbp+580h+var_2B8], rax
/*140a2cd72*/  mov bl, 1
/*140a2cd74*/  mov [rbp+580h+var_108], 0
/*140a2cd7f*/  jmp loc_140A2A0DA
/*140a2cd84*/ loc_140A2CD84: mov eax, 1
/*140a2cd89*/  mov [rbp+580h+var_340], rax
/*140a2cd90*/  mov r13b, 1
/*140a2cd93*/  mov [rbp+580h+var_268], 0
/*140a2cd9e*/  jmp loc_140A2A717
/*140a2cda3*/ loc_140A2CDA3: cmp [rbp+580h+var_300], 0
/*140a2cdab*/  jz loc_140A2D016
/*140a2cdb1*/  mov qword ptr [rbp+580h+var_2B0], 0
/*140a2cdbc*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2cdc7*/  call nullsub_1
/*140a2cdcc*/  mov ecx, 4
/*140a2cdd1*/  mov edx, 1
/*140a2cdd6*/  call sub_140001650
/*140a2cddb*/  test rax, rax
/*140a2cdde*/  jz loc_140A2E11E
/*140a2cde4*/  mov dword ptr [rax], 656C6F72h
/*140a2cdea*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2cdf5*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2cdfc*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2ce07*/  call nullsub_1
/*140a2ce0c*/  mov ecx, 9
/*140a2ce11*/  mov edx, 1
/*140a2ce16*/  call sub_140001650
/*140a2ce1b*/  test rax, rax
/*140a2ce1e*/  mov [rbp+580h+var_108], rax
/*140a2ce25*/  jz loc_140A2E133
/*140a2ce2b*/  mov r10, rax
/*140a2ce2e*/  mov rax, 6E61747369737361h
/*140a2ce38*/  mov [r10], rax
/*140a2ce3b*/  mov byte ptr [r10+8], 74h ; 't'
/*140a2ce40*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2ce47*/  mov qword ptr [rbp+580h+var_180+8], 9
/*140a2ce52*/  mov qword ptr [rbp+580h+var_170], r10
/*140a2ce59*/  mov qword ptr [rbp+580h+var_170+8], 9
/*140a2ce64*/ loc_140A2CE64: lea rcx, [rbp+580h+var_1C0]
/*140a2ce6b*/  lea rdx, [rbp+580h+var_2B0]
/*140a2ce72*/  lea r8, [rbp+580h+var_200]
/*140a2ce79*/  lea r9, [rbp+580h+var_180]
/*140a2ce80*/  call sub_140307860
/*140a2ce85*/  nop
/*140a2ce86*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2ce8d*/  jz short loc_140A2CE9C
/*140a2ce8f*/ loc_140A2CE8F: lea rcx, [rbp+580h+var_1C0]
/*140a2ce96*/  call sub_1400104F0
/*140a2ce9b*/  nop
/*140a2ce9c*/ loc_140A2CE9C: call nullsub_1
/*140a2cea1*/  mov ecx, 7
/*140a2cea6*/  mov edx, 1
/*140a2ceab*/  call sub_140001650
/*140a2ceb0*/  test rax, rax
/*140a2ceb3*/  jz loc_140A2E148
/*140a2ceb9*/  mov dword ptr [rax+3], 746E6574h
/*140a2cec0*/  mov dword ptr [rax], 746E6F63h
/*140a2cec6*/  mov qword ptr [rbp+580h+var_200], 7
/*140a2ced1*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2ced8*/  mov qword ptr [rbp+580h+var_1F0], 7
/*140a2cee3*/  mov [rbp+580h+var_210], 1
/*140a2ceea*/ loc_140A2CEEA: lea rcx, [rbp+580h+var_180]
/*140a2cef1*/  lea rdx, [rbp+580h+var_310]
/*140a2cef8*/  call sub_140467C90
/*140a2cefd*/  nop
/*140a2cefe*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2cf05*/  jz loc_140A2DD7F
/*140a2cf0b*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2cf13*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2cf1b*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2cf23*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2cf2b*/  mov [rbp+580h+var_210], 0
/*140a2cf32*/  lea rcx, [rbp+580h+var_180]
/*140a2cf39*/  lea rdx, [rbp+580h+var_2B0]
/*140a2cf40*/  lea r8, [rbp+580h+var_200]
/*140a2cf47*/  lea r9, [rbp+580h+var_1C0]
/*140a2cf4e*/  call sub_140307860
/*140a2cf53*/  nop
/*140a2cf54*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2cf5b*/  jz short loc_140A2CF6A
/*140a2cf5d*/ loc_140A2CF5D: lea rcx, [rbp+580h+var_180]
/*140a2cf64*/  call sub_1400104F0
/*140a2cf69*/  nop
/*140a2cf6a*/ loc_140A2CF6A: movdqu xmm0, [rbp+580h+var_2B0]
/*140a2cf72*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a2cf7a*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2cf81*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2cf88*/  mov byte ptr [rbp+580h+var_180], 5
/*140a2cf8f*/  mov rsi, [rbp+580h+var_350]
/*140a2cf96*/  cmp rsi, [rbp+580h+var_360]
/*140a2cf9d*/  jnz short loc_140A2CFAC
/*140a2cf9f*/ loc_140A2CF9F: lea rcx, [rbp+580h+var_360]
/*140a2cfa6*/  call sub_1416890A0
/*140a2cfab*/  nop
/*140a2cfac*/ loc_140A2CFAC: mov rax, [rbp+580h+var_358]
/*140a2cfb3*/  mov rcx, rsi
/*140a2cfb6*/  shl rcx, 5
/*140a2cfba*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2cfc2*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2cfca*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2cfd0*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2cfd5*/  inc rsi
/*140a2cfd8*/  mov [rbp+580h+var_350], rsi
/*140a2cfdf*/  mov rax, [rbp+580h+var_300]
/*140a2cfe6*/  mov [rbp+580h+var_F8], rax
/*140a2cfed*/  jmp short loc_140A2D021
/*140a2cfef*/ loc_140A2CFEF: mov rdx, qword ptr [rbp+580h+var_180]
/*140a2cff6*/  test rdx, rdx
/*140a2cff9*/  jz loc_140A28FAE
/*140a2cfff*/  mov rcx, qword ptr [rbp+580h+var_180+8]
/*140a2d006*/  mov r8d, 1
/*140a2d00c*/  call sub_140001660
/*140a2d011*/  jmp loc_140A28FAE
/*140a2d016*/ loc_140A2D016: mov [rbp+580h+var_F8], 0
/*140a2d021*/ loc_140A2D021: mov rcx, qword ptr [rbp+580h+var_310+8]
/*140a2d028*/  mov [rbp+580h+var_108], 0
/*140a2d033*/  mov [rbp+580h+var_268], rcx
/*140a2d03a*/  nop word ptr [rax+rax+00h]
/*140a2d040*/ loc_140A2D040: mov rax, [rbp+580h+var_108]
/*140a2d047*/  cmp [rbp+580h+var_F8], rax
/*140a2d04e*/  jz short loc_140A2D069
/*140a2d050*/  inc rax
/*140a2d053*/  mov [rbp+580h+var_108], rax
/*140a2d05a*/  lea rsi, [rcx+20h]
/*140a2d05e*/ loc_140A2D05E: call sub_1402C3260
/*140a2d063*/  nop
/*140a2d064*/  mov rcx, rsi
/*140a2d067*/  jmp short loc_140A2D040
/*140a2d069*/ loc_140A2D069: mov rdx, qword ptr [rbp+580h+var_310]
/*140a2d070*/  test rdx, rdx
/*140a2d073*/  jz short loc_140A2D08B
/*140a2d075*/  mov rcx, qword ptr [rbp+580h+var_310+8]
/*140a2d07c*/  shl rdx, 5
/*140a2d080*/  mov r8d, 8
/*140a2d086*/  call sub_140001660
/*140a2d08b*/ loc_140A2D08B: mov rax, [rbp+580h+var_348]
/*140a2d092*/  mov rcx, [rbp+580h+var_1C8]
/*140a2d099*/  mov [rbp+580h+var_348], rax
/*140a2d0a0*/  mov [rbp+580h+var_3C0], rax
/*140a2d0a7*/  mov [rbp+580h+var_1C8], rcx
/*140a2d0ae*/  mov [rbp+580h+var_3B0], rcx
/*140a2d0b5*/  mov [rbp+580h+var_FB], 1
/*140a2d0bc*/ loc_140A2D0BC: lea rcx, aModel_6; "model"
/*140a2d0c3*/  mov edx, 5
/*140a2d0c8*/  mov r8, [rbp+580h+var_188]
/*140a2d0cf*/  call sub_141433D50
/*140a2d0d4*/  nop
/*140a2d0d5*/  test rax, rax
/*140a2d0d8*/  jz short loc_140A2D130
/*140a2d0da*/  cmp byte ptr [rax], 3
/*140a2d0dd*/  mov rdi, [rbp+580h+var_348]
/*140a2d0e4*/  mov rbx, [rbp+580h+var_1C8]
/*140a2d0eb*/  mov r14, [rbp+580h+var_370]
/*140a2d0f2*/  jnz short loc_140A2D103
/*140a2d0f4*/  mov r14, [rax+18h]
/*140a2d0f8*/  mov rax, [rax+10h]
/*140a2d0fc*/  mov [rbp+580h+var_400], rax
/*140a2d103*/ loc_140A2D103: test r14, r14
/*140a2d106*/  jns short loc_140A2D14A
/*140a2d108*/ loc_140A2D108: xor esi, esi
/*140a2d10a*/ loc_140A2D10A: mov [rbp+580h+var_3C0], rdi
/*140a2d111*/  mov [rbp+580h+var_3B0], rbx
/*140a2d118*/  mov [rbp+580h+var_FB], 1
/*140a2d11f*/  mov rcx, rsi
/*140a2d122*/  mov rdx, r14
/*140a2d125*/  call sub_1416C2D4B
/*140a2d12b*/ loc_140A2D12B: jmp loc_140A3143D
/*140a2d130*/ loc_140A2D130: mov rdi, [rbp+580h+var_348]
/*140a2d137*/  mov rbx, [rbp+580h+var_1C8]
/*140a2d13e*/  mov r14, [rbp+580h+var_370]
/*140a2d145*/  test r14, r14
/*140a2d148*/  js short loc_140A2D108
/*140a2d14a*/ loc_140A2D14A: mov [rbp+580h+var_370], r14
/*140a2d151*/  jz short loc_140A2D18A
/*140a2d153*/  call nullsub_1
/*140a2d158*/  mov esi, 1
/*140a2d15d*/  mov edx, 1
/*140a2d162*/  mov rcx, r14
/*140a2d165*/  call sub_140001650
/*140a2d16a*/  test rax, rax
/*140a2d16d*/  jz short loc_140A2D10A
/*140a2d16f*/  mov [rbp+580h+var_108], rax
/*140a2d176*/  mov rcx, rax
/*140a2d179*/  mov rdx, [rbp+580h+var_400]
/*140a2d180*/  mov r8, r14
/*140a2d183*/  call sub_141684120
/*140a2d188*/  jmp short loc_140A2D196
/*140a2d18a*/ loc_140A2D18A: mov eax, 1
/*140a2d18f*/  mov [rbp+580h+var_108], rax
/*140a2d196*/ loc_140A2D196: mov [rbp+580h+var_FA], 1
/*140a2d19d*/ loc_140A2D19D: lea rcx, aMaxOutputToken; "max_output_tokens"
/*140a2d1a4*/  mov edx, 11h
/*140a2d1a9*/  mov r8, [rbp+580h+var_188]
/*140a2d1b0*/  call sub_141433D50
/*140a2d1b5*/  nop
/*140a2d1b6*/  test rax, rax
/*140a2d1b9*/  jnz short loc_140A2D1E4
/*140a2d1bb*/  mov [rbp+580h+var_FA], 1
/*140a2d1c2*/  lea rcx, aMaxTokens; "max_tokens"
/*140a2d1c9*/  mov edx, 0Ah
/*140a2d1ce*/  mov r8, [rbp+580h+var_188]
/*140a2d1d5*/  call sub_141433D50
/*140a2d1da*/  nop
/*140a2d1db*/  test rax, rax
/*140a2d1de*/  jz loc_140A2D2D1
/*140a2d1e4*/ loc_140A2D1E4: movzx ebx, byte ptr [rax]
/*140a2d1e7*/  movzx ecx, bl
/*140a2d1ea*/  lea rdx, jpt_140A2D1F8
/*140a2d1f1*/  movsxd rcx, ds:(jpt_140A2D1F8 - 1417AB258h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a2d1f5*/  add rcx, rdx
/*140a2d1f8*/  jmp rcx; switch jump  // switch jump
/*140a2d1fa*/ loc_140A2D1FA: movups xmm0, xmmword ptr [rax]; jumptable 0000000140A2D1F8 cases 1,2  // jumptable 0000000140A2D1F8 cases 1,2
/*140a2d1fd*/  movdqu xmm1, xmmword ptr [rax+10h]
/*140a2d202*/  movaps [rbp+580h+var_180], xmm0
/*140a2d209*/  movdqa [rbp+580h+var_170], xmm1
/*140a2d211*/  movzx ebx, byte ptr [rbp+580h+var_180]
/*140a2d218*/  movdqu [rbp+580h+var_1C0+0Fh], xmm1
/*140a2d220*/  movdqu xmm0, [rbp+580h+var_180+1]
/*140a2d228*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2d230*/  mov byte ptr [rbp+580h+var_180], 2
/*140a2d237*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a2d242*/  mov qword ptr [rbp+580h+var_170], 4000h
/*140a2d24d*/  cmp bl, 0FFh
/*140a2d250*/  jnz loc_140A2D447
/*140a2d256*/  jmp loc_140A2D2EE
/*140a2d25b*/ loc_140A2D25B: add rax, 8; jumptable 0000000140A2D1F8 case 3  // jumptable 0000000140A2D1F8 case 3
/*140a2d25f*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d266*/  mov [rbp+580h+var_FA], 1
/*140a2d26d*/  mov rdx, rax
/*140a2d270*/  call sub_14149C500
/*140a2d275*/  nop
/*140a2d276*/  jmp loc_140A2D3CA; jumptable 0000000140A2D1F8 case 0
/*140a2d27b*/ loc_140A2D27B: cmp qword ptr [rax+18h], 0; jumptable 0000000140A2D1F8 case 5  // jumptable 0000000140A2D1F8 case 5
/*140a2d280*/  jz loc_140A2D3B4
/*140a2d286*/  mov rdx, [rax+8]
/*140a2d28a*/  test rdx, rdx
/*140a2d28d*/  jz loc_140A2DF38
/*140a2d293*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d29a*/  mov r8, [rax+10h]
/*140a2d29e*/  mov [rbp+580h+var_FA], 1
/*140a2d2a5*/  call sub_1402CCD80
/*140a2d2aa*/  nop
/*140a2d2ab*/  jmp loc_140A2D3CA; jumptable 0000000140A2D1F8 case 0
/*140a2d2b0*/ loc_140A2D2B0: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A2D1F8 case 4  // jumptable 0000000140A2D1F8 case 4
/*140a2d2b7*/  mov rdx, [rax+10h]
/*140a2d2bb*/  mov r8, [rax+18h]
/*140a2d2bf*/  mov [rbp+580h+var_FA], 1
/*140a2d2c6*/  call sub_1402CE260
/*140a2d2cb*/  nop
/*140a2d2cc*/  jmp loc_140A2D3CA; jumptable 0000000140A2D1F8 case 0
/*140a2d2d1*/ loc_140A2D2D1: mov byte ptr [rbp+580h+var_180], 2
/*140a2d2d8*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a2d2e3*/  mov qword ptr [rbp+580h+var_170], 4000h
/*140a2d2ee*/ loc_140A2D2EE: movzx eax, byte ptr [rbp+580h+var_180]
/*140a2d2f5*/  mov ecx, dword ptr [rbp+580h+var_180+1]
/*140a2d2fb*/  movzx edx, word ptr [rbp+580h+var_180+5]
/*140a2d302*/  movzx r8d, byte ptr [rbp+580h+var_180+7]
/*140a2d30a*/  mov r9, qword ptr [rbp+580h+var_180+8]
/*140a2d311*/  mov r10, qword ptr [rbp+580h+var_170]
/*140a2d318*/  mov qword ptr [rbp+580h+var_3D0], r10
/*140a2d31f*/  mov r10, qword ptr [rbp+580h+var_170+8]
/*140a2d326*/  mov qword ptr [rbp+580h+var_3D0+8], r10
/*140a2d32d*/  mov byte ptr [rbp+580h+var_3E0], al
/*140a2d333*/  mov dword ptr [rbp+580h+var_3E0+1], ecx
/*140a2d339*/  mov word ptr [rbp+580h+var_3E0+5], dx
/*140a2d340*/  mov byte ptr [rbp+580h+var_3E0+7], r8b
/*140a2d347*/  mov qword ptr [rbp+580h+var_3E0+8], r9
/*140a2d34e*/  jmp loc_140A2D4B3
/*140a2d353*/ loc_140A2D353: xor ebx, ebx
/*140a2d355*/  mov rdx, [rbp+580h+var_3A8]
/*140a2d35c*/ loc_140A2D35C: mov rax, [rbp+580h+var_1C8]
/*140a2d363*/  mov [rbp+580h+var_270], rax
/*140a2d36a*/ loc_140A2D36A: mov rcx, rbx
/*140a2d36d*/  call sub_1416C2D4B
/*140a2d373*/  jmp loc_140A3143D
/*140a2d378*/ loc_140A2D378: xor ebx, ebx
/*140a2d37a*/  mov rdx, [rbp+580h+var_2B8]
/*140a2d381*/ loc_140A2D381: mov rax, [rbp+580h+var_1C8]
/*140a2d388*/  mov [rbp+580h+var_270], rax
/*140a2d38f*/  mov rcx, rbx
/*140a2d392*/  call sub_1416C2D4B
/*140a2d398*/  jmp loc_140A3143D
/*140a2d39d*/ loc_140A2D39D: xor ebx, ebx
/*140a2d39f*/ loc_140A2D39F: mov rcx, rbx
/*140a2d3a2*/  mov rdx, [rbp+580h+var_340]
/*140a2d3a9*/  call sub_1416C2D4B
/*140a2d3af*/  jmp loc_140A3143D
/*140a2d3b4*/ loc_140A2D3B4: mov qword ptr [rbp+580h+var_180+8], 0
/*140a2d3bf*/  mov qword ptr [rbp+580h+var_170+8], 0
/*140a2d3ca*/ loc_140A2D3CA: mov eax, dword ptr [rbp+580h+var_180+1]; jumptable 0000000140A2D1F8 case 0  // jumptable 0000000140A2D1F8 case 0
/*140a2d3d0*/  movzx ecx, word ptr [rbp+580h+var_180+5]
/*140a2d3d7*/  movzx edx, byte ptr [rbp+580h+var_180+7]
/*140a2d3de*/  mov r8, qword ptr [rbp+580h+var_180+8]
/*140a2d3e5*/  movzx r9d, byte ptr [rbp+580h+var_170]
/*140a2d3ed*/  mov r10, qword ptr [rbp+580h+var_170]
/*140a2d3f4*/  mov qword ptr [rbp+580h+var_1C0+0Fh], r10
/*140a2d3fb*/  mov r10, qword ptr [rbp+580h+var_170+8]
/*140a2d402*/  mov qword ptr [rbp+580h+var_1B0+7], r10
/*140a2d409*/  mov dword ptr [rbp+580h+var_1C0], eax
/*140a2d40f*/  mov word ptr [rbp+580h+var_1C0+4], cx
/*140a2d416*/  mov byte ptr [rbp+580h+var_1C0+6], dl
/*140a2d41c*/  mov qword ptr [rbp+580h+var_1C0+7], r8
/*140a2d423*/  mov byte ptr [rbp+580h+var_1C0+0Fh], r9b
/*140a2d42a*/  mov byte ptr [rbp+580h+var_180], 2
/*140a2d431*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a2d43c*/  mov qword ptr [rbp+580h+var_170], 4000h
/*140a2d447*/ loc_140A2D447: mov byte ptr [rbp+580h+var_3E0], bl
/*140a2d44d*/  mov eax, dword ptr [rbp+580h+var_1C0]
/*140a2d453*/  mov dword ptr [rbp+580h+var_3E0+1], eax
/*140a2d459*/  movzx eax, word ptr [rbp+580h+var_1C0+4]
/*140a2d460*/  mov word ptr [rbp+580h+var_3E0+5], ax
/*140a2d467*/  movzx eax, byte ptr [rbp+580h+var_1C0+6]
/*140a2d46e*/  mov byte ptr [rbp+580h+var_3E0+7], al
/*140a2d474*/  mov rax, qword ptr [rbp+580h+var_1C0+7]
/*140a2d47b*/  mov qword ptr [rbp+580h+var_3E0+8], rax
/*140a2d482*/  movzx eax, byte ptr [rbp+580h+var_1C0+0Fh]
/*140a2d489*/  mov byte ptr [rbp+580h+var_3D0], al
/*140a2d48f*/  movdqu xmm0, [rbp+580h+var_1C0+0Fh]
/*140a2d497*/  movdqu [rbp+580h+var_3D0], xmm0
/*140a2d49f*/  mov [rbp+580h+var_FA], 1
/*140a2d4a6*/ loc_140A2D4A6: lea rcx, [rbp+580h+var_180]
/*140a2d4ad*/  call sub_1400104F0
/*140a2d4b2*/  nop
/*140a2d4b3*/ loc_140A2D4B3: mov qword ptr [rbp+580h+var_2B0], 0
/*140a2d4be*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2d4c9*/  call nullsub_1
/*140a2d4ce*/  mov esi, 1
/*140a2d4d3*/  mov ecx, 5
/*140a2d4d8*/  mov edx, 1
/*140a2d4dd*/  call sub_140001650
/*140a2d4e2*/  test rax, rax
/*140a2d4e5*/  jz loc_140A2DFC9
/*140a2d4eb*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*140a2d4ef*/  mov dword ptr [rax], 65646F6Dh
/*140a2d4f5*/  mov qword ptr [rbp+580h+var_200], 5
/*140a2d500*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2d507*/  mov qword ptr [rbp+580h+var_1F0], 5
/*140a2d512*/  mov rdi, [rbp+580h+var_370]
/*140a2d519*/  test rdi, rdi
/*140a2d51c*/  jz short loc_140A2D54E
/*140a2d51e*/  call nullsub_1
/*140a2d523*/  mov edx, 1
/*140a2d528*/  mov rcx, rdi
/*140a2d52b*/  call sub_140001650
/*140a2d530*/  test rax, rax
/*140a2d533*/  jz loc_140A2E008
/*140a2d539*/  mov rsi, rax
/*140a2d53c*/  mov rcx, rax
/*140a2d53f*/  mov rdx, [rbp+580h+var_108]
/*140a2d546*/  mov r8, rdi
/*140a2d549*/  call sub_141684120
/*140a2d54e*/ loc_140A2D54E: mov byte ptr [rbp+580h+var_180], 3
/*140a2d555*/  mov qword ptr [rbp+580h+var_180+8], rdi
/*140a2d55c*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a2d563*/  mov qword ptr [rbp+580h+var_170+8], rdi
/*140a2d56a*/  mov [rbp+580h+var_2C1], 0
/*140a2d571*/ loc_140A2D571: lea rcx, [rbp+580h+var_1C0]
/*140a2d578*/  lea rdx, [rbp+580h+var_2B0]
/*140a2d57f*/  lea r8, [rbp+580h+var_200]
/*140a2d586*/  lea r9, [rbp+580h+var_180]
/*140a2d58d*/  call sub_140307860
/*140a2d592*/  nop
/*140a2d593*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2d59a*/  jz short loc_140A2D5A9
/*140a2d59c*/ loc_140A2D59C: lea rcx, [rbp+580h+var_1C0]
/*140a2d5a3*/  call sub_1400104F0
/*140a2d5a8*/  nop
/*140a2d5a9*/ loc_140A2D5A9: call nullsub_1
/*140a2d5ae*/  mov ecx, 8
/*140a2d5b3*/  mov edx, 1
/*140a2d5b8*/  call sub_140001650
/*140a2d5bd*/  test rax, rax
/*140a2d5c0*/  jz loc_140A2DFDE
/*140a2d5c6*/  mov rcx, 736567617373656Dh
/*140a2d5d0*/  mov [rax], rcx
/*140a2d5d3*/  mov qword ptr [rbp+580h+var_200], 8
/*140a2d5de*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2d5e5*/  mov qword ptr [rbp+580h+var_1F0], 8
/*140a2d5f0*/  mov [rbp+580h+var_211], 1
/*140a2d5f7*/ loc_140A2D5F7: lea rcx, [rbp+580h+var_180]
/*140a2d5fe*/  lea rdx, [rbp+580h+var_360]
/*140a2d605*/  call sub_140467C90
/*140a2d60a*/  nop
/*140a2d60b*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2d612*/  jz loc_140A2DCE5
/*140a2d618*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2d620*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2d628*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2d630*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2d638*/  mov [rbp+580h+var_211], 0
/*140a2d63f*/  lea rcx, [rbp+580h+var_180]
/*140a2d646*/  lea rdx, [rbp+580h+var_2B0]
/*140a2d64d*/  lea r8, [rbp+580h+var_200]
/*140a2d654*/  lea r9, [rbp+580h+var_1C0]
/*140a2d65b*/  call sub_140307860
/*140a2d660*/  nop
/*140a2d661*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2d668*/  jz short loc_140A2D677
/*140a2d66a*/ loc_140A2D66A: lea rcx, [rbp+580h+var_180]
/*140a2d671*/  call sub_1400104F0
/*140a2d676*/  nop
/*140a2d677*/ loc_140A2D677: call nullsub_1
/*140a2d67c*/  mov ecx, 0Ah
/*140a2d681*/  mov edx, 1
/*140a2d686*/  call sub_140001650
/*140a2d68b*/  test rax, rax
/*140a2d68e*/  jz loc_140A2DFF3
/*140a2d694*/  mov rcx, 656B6F745F78616Dh
/*140a2d69e*/  mov [rax], rcx
/*140a2d6a1*/  mov word ptr [rax+8], 736Eh
/*140a2d6a7*/  mov qword ptr [rbp+580h+var_200], 0Ah
/*140a2d6b2*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2d6b9*/  mov qword ptr [rbp+580h+var_1F0], 0Ah
/*140a2d6c4*/  mov [rbp+580h+var_212], 1
/*140a2d6cb*/ loc_140A2D6CB: lea rcx, [rbp+580h+var_180]
/*140a2d6d2*/  lea rdx, [rbp+580h+var_3E0]
/*140a2d6d9*/  call sub_140B842D0
/*140a2d6de*/  nop
/*140a2d6df*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2d6e6*/  jz loc_140A2DD24
/*140a2d6ec*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2d6f4*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2d6fc*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a2d704*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a2d70c*/  mov [rbp+580h+var_212], 0
/*140a2d713*/  lea rcx, [rbp+580h+var_180]
/*140a2d71a*/  lea rdx, [rbp+580h+var_2B0]
/*140a2d721*/  lea r12, [rbp+580h+var_200]
/*140a2d728*/  lea r13, [rbp+580h+var_1C0]
/*140a2d72f*/  mov r8, r12
/*140a2d732*/  mov r9, r13
/*140a2d735*/  call sub_140307860
/*140a2d73a*/  nop
/*140a2d73b*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a2d742*/  jz short loc_140A2D751
/*140a2d744*/ loc_140A2D744: lea rcx, [rbp+580h+var_180]
/*140a2d74b*/  call sub_1400104F0
/*140a2d750*/  nop
/*140a2d751*/ loc_140A2D751: movdqu xmm0, [rbp+580h+var_2B0]
/*140a2d759*/  movdqu [rbp+580h+var_2F8+8], xmm0
/*140a2d761*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2d768*/  mov qword ptr [rbp+580h+var_2E8+8], rax
/*140a2d76f*/  mov byte ptr [rbp+580h+var_2F8], 5
/*140a2d776*/  cmp [rbp+580h+var_1C8], 0FFFFFFFFFFFFFFFFh
/*140a2d77e*/  setz byte ptr [rbp+580h+var_400]
/*140a2d785*/  jz loc_140A2D80C
/*140a2d78b*/  mov rax, [rbp+580h+var_1C8]
/*140a2d792*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a2d799*/  mov rax, [rbp+580h+var_348]
/*140a2d7a0*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2d7a7*/  mov rax, [rbp+580h+var_110]
/*140a2d7ae*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2d7b5*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2d7bc*/  mov [rbp+580h+var_2C2], 1
/*140a2d7c3*/ loc_140A2D7C3: lea rcx, aSystem_0; "system"
/*140a2d7ca*/  lea r8, [rbp+580h+var_2F8]
/*140a2d7d1*/  mov edx, 6
/*140a2d7d6*/  call sub_141433E50
/*140a2d7db*/  nop
/*140a2d7dc*/ loc_140A2D7DC: mov [rbp+580h+var_F8], rax
/*140a2d7e3*/  mov rcx, rax
/*140a2d7e6*/  call sub_1400104F0
/*140a2d7eb*/  nop
/*140a2d7ec*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2d7f4*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2d7fc*/  mov rax, [rbp+580h+var_F8]
/*140a2d803*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2d808*/  movdqu xmmword ptr [rax], xmm0
/*140a2d80c*/ loc_140A2D80C: lea rcx, aTemperature; "temperature"
/*140a2d813*/  mov edx, 0Bh
/*140a2d818*/  mov r8, [rbp+580h+var_188]
/*140a2d81f*/  call sub_141433D50
/*140a2d824*/  nop
/*140a2d825*/  test rax, rax
/*140a2d828*/  jz loc_140A2D937
/*140a2d82e*/  movzx ecx, byte ptr [rax]
/*140a2d831*/  lea rdx, jpt_140A2D83F
/*140a2d838*/  movsxd rcx, ds:(jpt_140A2D83F - 1417AB270h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a2d83c*/  add rcx, rdx
/*140a2d83f*/  jmp rcx; switch jump  // switch jump
/*140a2d841*/ loc_140A2D841: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A2D83F cases 1,2  // jumptable 0000000140A2D83F cases 1,2
/*140a2d845*/  movdqu xmm1, xmmword ptr [rax+10h]
/*140a2d84a*/  movdqa [rbp+580h+var_170], xmm1
/*140a2d852*/  movdqa [rbp+580h+var_180], xmm0
/*140a2d85a*/  jmp loc_140A2D8E7
/*140a2d85f*/ loc_140A2D85F: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A2D83F case 4  // jumptable 0000000140A2D83F case 4
/*140a2d866*/  mov rdx, [rax+10h]
/*140a2d86a*/  mov r8, [rax+18h]
/*140a2d86e*/  call sub_1402CE260
/*140a2d873*/  nop
/*140a2d874*/  mov byte ptr [rbp+580h+var_180], 4
/*140a2d87b*/  jmp short loc_140A2D8E7
/*140a2d87d*/ loc_140A2D87D: mov byte ptr [rbp+580h+var_180], 0; jumptable 0000000140A2D83F case 0  // jumptable 0000000140A2D83F case 0
/*140a2d884*/  jmp short loc_140A2D8E7
/*140a2d886*/ loc_140A2D886: add rax, 8; jumptable 0000000140A2D83F case 3  // jumptable 0000000140A2D83F case 3
/*140a2d88a*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d891*/  mov rdx, rax
/*140a2d894*/  call sub_14149C500
/*140a2d899*/  nop
/*140a2d89a*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2d8a1*/  jmp short loc_140A2D8E7
/*140a2d8a3*/ loc_140A2D8A3: cmp qword ptr [rax+18h], 0; jumptable 0000000140A2D83F case 5  // jumptable 0000000140A2D83F case 5
/*140a2d8a8*/  jz short loc_140A2D8CA
/*140a2d8aa*/  mov rdx, [rax+8]
/*140a2d8ae*/  test rdx, rdx
/*140a2d8b1*/  jz loc_140A2DF51
/*140a2d8b7*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d8be*/  mov r8, [rax+10h]
/*140a2d8c2*/  call sub_1402CCD80
/*140a2d8c7*/  nop
/*140a2d8c8*/  jmp short loc_140A2D8E0
/*140a2d8ca*/ loc_140A2D8CA: mov qword ptr [rbp+580h+var_180+8], 0
/*140a2d8d5*/  mov qword ptr [rbp+580h+var_170+8], 0
/*140a2d8e0*/ loc_140A2D8E0: mov byte ptr [rbp+580h+var_180], 5
/*140a2d8e7*/ loc_140A2D8E7: mov [rbp+580h+var_2C3], 1
/*140a2d8ee*/ loc_140A2D8EE: lea rcx, aTemperature; "temperature"
/*140a2d8f5*/  lea r8, [rbp+580h+var_2F8]
/*140a2d8fc*/  mov edx, 0Bh
/*140a2d901*/  call sub_141433E50
/*140a2d906*/  nop
/*140a2d907*/ loc_140A2D907: mov [rbp+580h+var_F8], rax
/*140a2d90e*/  mov rcx, rax
/*140a2d911*/  call sub_1400104F0
/*140a2d916*/  nop
/*140a2d917*/  movdqa xmm0, [rbp+580h+var_180]
/*140a2d91f*/  movdqa xmm1, [rbp+580h+var_170]
/*140a2d927*/  mov rax, [rbp+580h+var_F8]
/*140a2d92e*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2d933*/  movdqu xmmword ptr [rax], xmm0
/*140a2d937*/ loc_140A2D937: lea rcx, aTopP; "top_p"
/*140a2d93e*/  mov edx, 5
/*140a2d943*/  mov r8, [rbp+580h+var_188]
/*140a2d94a*/  call sub_141433D50
/*140a2d94f*/  nop
/*140a2d950*/  test rax, rax
/*140a2d953*/  jz loc_140A2DA62
/*140a2d959*/  movzx ecx, byte ptr [rax]
/*140a2d95c*/  lea rdx, jpt_140A2D96A
/*140a2d963*/  movsxd rcx, ds:(jpt_140A2D96A - 1417AB288h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a2d967*/  add rcx, rdx
/*140a2d96a*/  jmp rcx; switch jump  // switch jump
/*140a2d96c*/ loc_140A2D96C: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A2D96A cases 1,2  // jumptable 0000000140A2D96A cases 1,2
/*140a2d970*/  movdqu xmm1, xmmword ptr [rax+10h]
/*140a2d975*/  movdqa [rbp+580h+var_170], xmm1
/*140a2d97d*/  movdqa [rbp+580h+var_180], xmm0
/*140a2d985*/  jmp loc_140A2DA12
/*140a2d98a*/ loc_140A2D98A: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A2D96A case 4  // jumptable 0000000140A2D96A case 4
/*140a2d991*/  mov rdx, [rax+10h]
/*140a2d995*/  mov r8, [rax+18h]
/*140a2d999*/  call sub_1402CE260
/*140a2d99e*/  nop
/*140a2d99f*/  mov byte ptr [rbp+580h+var_180], 4
/*140a2d9a6*/  jmp short loc_140A2DA12
/*140a2d9a8*/ loc_140A2D9A8: mov byte ptr [rbp+580h+var_180], 0; jumptable 0000000140A2D96A case 0  // jumptable 0000000140A2D96A case 0
/*140a2d9af*/  jmp short loc_140A2DA12
/*140a2d9b1*/ loc_140A2D9B1: add rax, 8; jumptable 0000000140A2D96A case 3  // jumptable 0000000140A2D96A case 3
/*140a2d9b5*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d9bc*/  mov rdx, rax
/*140a2d9bf*/  call sub_14149C500
/*140a2d9c4*/  nop
/*140a2d9c5*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2d9cc*/  jmp short loc_140A2DA12
/*140a2d9ce*/ loc_140A2D9CE: cmp qword ptr [rax+18h], 0; jumptable 0000000140A2D96A case 5  // jumptable 0000000140A2D96A case 5
/*140a2d9d3*/  jz short loc_140A2D9F5
/*140a2d9d5*/  mov rdx, [rax+8]
/*140a2d9d9*/  test rdx, rdx
/*140a2d9dc*/  jz loc_140A2DF63
/*140a2d9e2*/  lea rcx, [rbp+580h+var_180+8]
/*140a2d9e9*/  mov r8, [rax+10h]
/*140a2d9ed*/  call sub_1402CCD80
/*140a2d9f2*/  nop
/*140a2d9f3*/  jmp short loc_140A2DA0B
/*140a2d9f5*/ loc_140A2D9F5: mov qword ptr [rbp+580h+var_180+8], 0
/*140a2da00*/  mov qword ptr [rbp+580h+var_170+8], 0
/*140a2da0b*/ loc_140A2DA0B: mov byte ptr [rbp+580h+var_180], 5
/*140a2da12*/ loc_140A2DA12: mov [rbp+580h+var_2C4], 1
/*140a2da19*/ loc_140A2DA19: lea rcx, aTopP; "top_p"
/*140a2da20*/  lea r8, [rbp+580h+var_2F8]
/*140a2da27*/  mov edx, 5
/*140a2da2c*/  call sub_141433E50
/*140a2da31*/  nop
/*140a2da32*/ loc_140A2DA32: mov [rbp+580h+var_F8], rax
/*140a2da39*/  mov rcx, rax
/*140a2da3c*/  call sub_1400104F0
/*140a2da41*/  nop
/*140a2da42*/  movdqa xmm0, [rbp+580h+var_180]
/*140a2da4a*/  movdqa xmm1, [rbp+580h+var_170]
/*140a2da52*/  mov rax, [rbp+580h+var_F8]
/*140a2da59*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2da5e*/  movdqu xmmword ptr [rax], xmm0
/*140a2da62*/ loc_140A2DA62: mov rcx, [rbp+580h+arg_20]
/*140a2da69*/  test rcx, rcx
/*140a2da6c*/  jz short loc_140A2DA77
/*140a2da6e*/  mov rdx, [rbp+580h+arg_28]
/*140a2da75*/  jmp short loc_140A2DAE7
/*140a2da77*/ loc_140A2DA77: lea rcx, aReasoning_0; "reasoning"
/*140a2da7e*/  mov edx, 9
/*140a2da83*/  mov r8, [rbp+580h+var_188]
/*140a2da8a*/  call sub_141433D50
/*140a2da8f*/  nop
/*140a2da90*/  test rax, rax
/*140a2da93*/  jz short loc_140A2DAB4
/*140a2da95*/  lea rcx, aEffort_0; "effort"
/*140a2da9c*/  mov edx, 6
/*140a2daa1*/  mov r8, rax
/*140a2daa4*/  call sub_141433D50
/*140a2daa9*/  nop
/*140a2daaa*/  test rax, rax
/*140a2daad*/  jz short loc_140A2DAB4
/*140a2daaf*/  cmp byte ptr [rax], 3
/*140a2dab2*/  jz short loc_140A2DADF
/*140a2dab4*/ loc_140A2DAB4: lea rcx, aReasoningEffor_5; "reasoning_effort"
/*140a2dabb*/  mov edx, 10h
/*140a2dac0*/  mov r8, [rbp+580h+var_188]
/*140a2dac7*/  call sub_141433D50
/*140a2dacc*/  nop
/*140a2dacd*/  test rax, rax
/*140a2dad0*/  jz loc_140A2EF0E
/*140a2dad6*/  cmp byte ptr [rax], 3
/*140a2dad9*/  jnz loc_140A2EF0E
/*140a2dadf*/ loc_140A2DADF: mov rcx, [rax+10h]
/*140a2dae3*/  mov rdx, [rax+18h]
/*140a2dae7*/ loc_140A2DAE7: call sub_14033BC10
/*140a2daec*/  nop
/*140a2daed*/  mov rbx, rdx
/*140a2daf0*/  test rdx, rdx
/*140a2daf3*/  jns short loc_140A2DB09
/*140a2daf5*/  xor r14d, r14d
/*140a2daf8*/ loc_140A2DAF8: mov rcx, r14
/*140a2dafb*/  mov rdx, rbx
/*140a2dafe*/  call sub_1416C2D4B
/*140a2db04*/ loc_140A2DB04: jmp loc_140A3143D
/*140a2db09*/ loc_140A2DB09: test rbx, rbx
/*140a2db0c*/  jz loc_140A2EF0E
/*140a2db12*/  mov rsi, rax
/*140a2db15*/  call nullsub_1
/*140a2db1a*/  mov r14d, 1
/*140a2db20*/  mov edx, 1
/*140a2db25*/  mov rcx, rbx
/*140a2db28*/  call sub_140001650
/*140a2db2d*/  test rax, rax
/*140a2db30*/  jz short loc_140A2DAF8
/*140a2db32*/  mov r15, rax
/*140a2db35*/  mov rcx, rax
/*140a2db38*/  mov rdx, rsi
/*140a2db3b*/  mov r8, rbx
/*140a2db3e*/  call sub_141684120
/*140a2db43*/  cmp rbx, 8
/*140a2db47*/  jnb short loc_140A2DB50
/*140a2db49*/  xor eax, eax
/*140a2db4b*/  jmp loc_140A2E644
/*140a2db50*/ loc_140A2DB50: cmp rbx, 20h ; ' '
/*140a2db54*/  jnb short loc_140A2DB5D
/*140a2db56*/  xor eax, eax
/*140a2db58*/  jmp loc_140A2DBFD
/*140a2db5d*/ loc_140A2DB5D: mov rax, 7FFFFFFFFFFFFFE0h
/*140a2db67*/  and rax, rbx
/*140a2db6a*/  xor ecx, ecx
/*140a2db6c*/  movdqa xmm0, cs:xmmword_141742460
/*140a2db74*/  movdqa xmm1, cs:xmmword_1416C62F0
/*140a2db7c*/  movdqa xmm2, cs:xmmword_141742470
/*140a2db84*/  nop word ptr [rax+rax+00000000h]
/*140a2db90*/ loc_140A2DB90: movdqu xmm3, xmmword ptr [r15+rcx]
/*140a2db96*/  movdqu xmm4, xmmword ptr [r15+rcx+10h]
/*140a2db9d*/  movdqa xmm5, xmm3
/*140a2dba1*/  paddb xmm5, xmm0
/*140a2dba5*/  movdqa xmm6, xmm4
/*140a2dba9*/  paddb xmm6, xmm0
/*140a2dbad*/  movdqa xmm7, xmm5
/*140a2dbb1*/  pminub xmm7, xmm1
/*140a2dbb5*/  pcmpeqb xmm7, xmm5
/*140a2dbb9*/  pand xmm7, xmm2
/*140a2dbbd*/  movdqa xmm5, xmm6
/*140a2dbc1*/  pminub xmm5, xmm1
/*140a2dbc5*/  pcmpeqb xmm5, xmm6
/*140a2dbc9*/  pand xmm5, xmm2
/*140a2dbcd*/  por xmm7, xmm3
/*140a2dbd1*/  por xmm5, xmm4
/*140a2dbd5*/  movdqu xmmword ptr [r15+rcx], xmm7
/*140a2dbdb*/  movdqu xmmword ptr [r15+rcx+10h], xmm5
/*140a2dbe2*/  add rcx, 20h ; ' '
/*140a2dbe6*/  cmp rax, rcx
/*140a2dbe9*/  jnz short loc_140A2DB90
/*140a2dbeb*/  cmp rbx, rax
/*140a2dbee*/  jz loc_140A2E663
/*140a2dbf4*/  test bl, 18h
/*140a2dbf7*/  jz loc_140A2E644
/*140a2dbfd*/ loc_140A2DBFD: mov rcx, rax
/*140a2dc00*/  mov rax, 7FFFFFFFFFFFFFF8h
/*140a2dc0a*/  and rax, rbx
/*140a2dc0d*/  movdqa xmm0, cs:xmmword_141742480
/*140a2dc15*/  movdqa xmm1, cs:xmmword_141742490
/*140a2dc1d*/  movdqa xmm2, cs:xmmword_1417424A0
/*140a2dc25*/  nop word ptr [rax+rax+00000000h]
/*140a2dc30*/ loc_140A2DC30: movq xmm3, qword ptr [r15+rcx]
/*140a2dc36*/  movdqa xmm4, xmm3
/*140a2dc3a*/  paddb xmm4, xmm0
/*140a2dc3e*/  movdqa xmm5, xmm4
/*140a2dc42*/  pmaxub xmm5, xmm1
/*140a2dc46*/  pcmpeqb xmm5, xmm4
/*140a2dc4a*/  pandn xmm5, xmm2
/*140a2dc4e*/  por xmm5, xmm3
/*140a2dc52*/  movq qword ptr [r15+rcx], xmm5
/*140a2dc58*/  add rcx, 8
/*140a2dc5c*/  cmp rax, rcx
/*140a2dc5f*/  jnz short loc_140A2DC30
/*140a2dc61*/  jmp loc_140A2E65E
/*140a2dc66*/ loc_140A2DC66: xor ecx, ecx
/*140a2dc68*/ loc_140A2DC68: mov rdx, [rbp+580h+var_418]
/*140a2dc6f*/  call sub_1416C2D4B
/*140a2dc75*/  jmp loc_140A3143D
/*140a2dc7a*/ loc_140A2DC7A: xor r12d, r12d
/*140a2dc7d*/ loc_140A2DC7D: mov [rbp+580h+var_2BE], 1
/*140a2dc84*/ loc_140A2DC84: mov rcx, r12
/*140a2dc87*/  mov rdx, rsi
/*140a2dc8a*/  call sub_1416C2D4B
/*140a2dc90*/  jmp loc_140A3143D
/*140a2dc95*/ loc_140A2DC95: xor r14d, r14d
/*140a2dc98*/ loc_140A2DC98: mov [rbp+580h+var_2BB], 1
/*140a2dc9f*/ loc_140A2DC9F: mov rcx, r14
/*140a2dca2*/  mov rdx, rsi
/*140a2dca5*/  call sub_1416C2D4B
/*140a2dcab*/  jmp loc_140A3143D
/*140a2dcb0*/ loc_140A2DCB0: xor esi, esi
/*140a2dcb2*/ loc_140A2DCB2: mov [rbp+580h+var_2C0], 1
/*140a2dcb9*/ loc_140A2DCB9: mov rcx, rsi
/*140a2dcbc*/  mov rdx, rbx
/*140a2dcbf*/  call sub_1416C2D4B
/*140a2dcc5*/  jmp loc_140A3143D
/*140a2dcca*/ loc_140A2DCCA: xor r14d, r14d
/*140a2dccd*/ loc_140A2DCCD: mov [rbp+580h+var_2BA], 1
/*140a2dcd4*/ loc_140A2DCD4: mov rcx, r14
/*140a2dcd7*/  mov rdx, rsi
/*140a2dcda*/  call sub_1416C2D4B
/*140a2dce0*/  jmp loc_140A3143D
/*140a2dce5*/ loc_140A2DCE5: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2dcec*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2dcf3*/ loc_140A2DCF3: lea rax, off_1417A8660; "src\\core\\relay\\translator.rs"
/*140a2dcfa*/  mov [rsp+600h+var_5E0], rax
/*140a2dcff*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2dd06*/  lea r9, off_1417A5560
/*140a2dd0d*/  lea r8, [rbp+580h+var_1C0]
/*140a2dd14*/  mov edx, 2Bh ; '+'
/*140a2dd19*/  call sub_1416C3060
/*140a2dd1f*/  jmp loc_140A3143D
/*140a2dd24*/ loc_140A2DD24: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2dd2b*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2dd32*/ loc_140A2DD32: lea rax, off_1417A8660; "src\\core\\relay\\translator.rs"
/*140a2dd39*/  mov [rsp+600h+var_5E0], rax
/*140a2dd3e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2dd45*/  lea r9, off_1417A5560
/*140a2dd4c*/  lea r8, [rbp+580h+var_1C0]
/*140a2dd53*/  mov edx, 2Bh ; '+'
/*140a2dd58*/  call sub_1416C3060
/*140a2dd5e*/  jmp loc_140A3143D
/*140a2dd63*/ loc_140A2DD63: mov [rbp+580h+var_272], 1
/*140a2dd6a*/ loc_140A2DD6A: mov ecx, 8
/*140a2dd6f*/  mov edx, 20h ; ' '
/*140a2dd74*/  call sub_1416C2D31
/*140a2dd7a*/  jmp loc_140A3143D
/*140a2dd7f*/ loc_140A2DD7F: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2dd86*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2dd8d*/ loc_140A2DD8D: lea rax, off_1417A8648; "src\\core\\relay\\translator.rs"
/*140a2dd94*/  mov [rsp+600h+var_5E0], rax
/*140a2dd99*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2dda0*/  lea r9, off_1417A5560
/*140a2dda7*/  lea r8, [rbp+580h+var_1C0]
/*140a2ddae*/  mov edx, 2Bh ; '+'
/*140a2ddb3*/  call sub_1416C3060
/*140a2ddb9*/  jmp loc_140A3143D
/*140a2ddbe*/ loc_140A2DDBE: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2ddc5*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2ddcc*/ loc_140A2DDCC: lea rax, off_1417A85B8; "src\\core\\relay\\translator.rs"
/*140a2ddd3*/  mov [rsp+600h+var_5E0], rax
/*140a2ddd8*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2dddf*/  lea r9, off_1417A5560
/*140a2dde6*/  lea r8, [rbp+580h+var_1C0]
/*140a2dded*/  mov edx, 2Bh ; '+'
/*140a2ddf2*/  call sub_1416C3060
/*140a2ddf8*/  jmp loc_140A3143D
/*140a2ddfd*/ loc_140A2DDFD: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2de04*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2de0b*/ loc_140A2DE0B: lea rax, off_1417A85D0; "src\\core\\relay\\translator.rs"
/*140a2de12*/  mov [rsp+600h+var_5E0], rax
/*140a2de17*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2de1e*/  lea r9, off_1417A5560
/*140a2de25*/  lea r8, [rbp+580h+var_1C0]
/*140a2de2c*/  mov edx, 2Bh ; '+'
/*140a2de31*/  call sub_1416C3060
/*140a2de37*/  jmp loc_140A3143D
/*140a2de3c*/ loc_140A2DE3C: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2de43*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2de4a*/ loc_140A2DE4A: lea rax, off_1417A8618; "src\\core\\relay\\translator.rs"
/*140a2de51*/  mov [rsp+600h+var_5E0], rax
/*140a2de56*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2de5d*/  lea r9, off_1417A5560
/*140a2de64*/  lea r8, [rbp+580h+var_1C0]
/*140a2de6b*/  mov edx, 2Bh ; '+'
/*140a2de70*/  call sub_1416C3060
/*140a2de76*/  jmp loc_140A3143D
/*140a2de7b*/ loc_140A2DE7B: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2de82*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2de89*/ loc_140A2DE89: lea rax, off_1417A8630; "src\\core\\relay\\translator.rs"
/*140a2de90*/  mov [rsp+600h+var_5E0], rax
/*140a2de95*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2de9c*/  lea r9, off_1417A5560
/*140a2dea3*/  lea r8, [rbp+580h+var_1C0]
/*140a2deaa*/  mov edx, 2Bh ; '+'
/*140a2deaf*/  call sub_1416C3060
/*140a2deb5*/  jmp loc_140A3143D
/*140a2deba*/ loc_140A2DEBA: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2dec1*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2dec8*/ loc_140A2DEC8: lea rax, off_1417A85E8; "src\\core\\relay\\translator.rs"
/*140a2decf*/  mov [rsp+600h+var_5E0], rax
/*140a2ded4*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2dedb*/  lea r9, off_1417A5560
/*140a2dee2*/  lea r8, [rbp+580h+var_1C0]
/*140a2dee9*/  mov edx, 2Bh ; '+'
/*140a2deee*/  call sub_1416C3060
/*140a2def4*/  jmp loc_140A3143D
/*140a2def9*/ loc_140A2DEF9: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2df00*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2df07*/ loc_140A2DF07: lea rax, off_1417A8600; "src\\core\\relay\\translator.rs"
/*140a2df0e*/  mov [rsp+600h+var_5E0], rax
/*140a2df13*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2df1a*/  lea r9, off_1417A5560
/*140a2df21*/  lea r8, [rbp+580h+var_1C0]
/*140a2df28*/  mov edx, 2Bh ; '+'
/*140a2df2d*/  call sub_1416C3060
/*140a2df33*/  jmp loc_140A3143D
/*140a2df38*/ loc_140A2DF38: mov [rbp+580h+var_FA], 1
/*140a2df3f*/ loc_140A2DF3F: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a2df46*/  call sub_1416C3040
/*140a2df4c*/  jmp loc_140A3143D
/*140a2df51*/ loc_140A2DF51: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a2df58*/  call sub_1416C3040
/*140a2df5e*/  jmp loc_140A3143D
/*140a2df63*/ loc_140A2DF63: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a2df6a*/  call sub_1416C3040
/*140a2df70*/  jmp loc_140A3143D
/*140a2df75*/ loc_140A2DF75: mov rax, [rbp+580h+var_1C8]
/*140a2df7c*/  mov [rbp+580h+var_270], rax
/*140a2df83*/ loc_140A2DF83: mov ecx, 8
/*140a2df88*/  mov edx, 20h ; ' '
/*140a2df8d*/  call sub_1416C2D31
/*140a2df93*/  jmp loc_140A3143D
/*140a2df98*/ loc_140A2DF98: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a2df9f*/  mov [rsp+600h+var_5E0], rax
/*140a2dfa4*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*140a2dfab*/  lea r9, unk_1417A5580
/*140a2dfb2*/  lea r8, [rbp+580h+var_3B1]
/*140a2dfb9*/  mov edx, 37h ; '7'
/*140a2dfbe*/  call sub_1416C3060
/*140a2dfc4*/  jmp loc_140A3143D
/*140a2dfc9*/ loc_140A2DFC9: mov ecx, 1
/*140a2dfce*/  mov edx, 5
/*140a2dfd3*/  call sub_1416C2D4B
/*140a2dfd9*/  jmp loc_140A3143D
/*140a2dfde*/ loc_140A2DFDE: mov ecx, 1
/*140a2dfe3*/  mov edx, 8
/*140a2dfe8*/  call sub_1416C2D4B
/*140a2dfee*/  jmp loc_140A3143D
/*140a2dff3*/ loc_140A2DFF3: mov ecx, 1
/*140a2dff8*/  mov edx, 0Ah
/*140a2dffd*/  call sub_1416C2D4B
/*140a2e003*/  jmp loc_140A3143D
/*140a2e008*/ loc_140A2E008: mov [rbp+580h+var_2C1], 1
/*140a2e00f*/ loc_140A2E00F: mov ecx, 1
/*140a2e014*/  mov rdx, rdi
/*140a2e017*/  call sub_1416C2D4B
/*140a2e01d*/  jmp loc_140A3143D
/*140a2e022*/ loc_140A2E022: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e029*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e030*/ loc_140A2E030: lea rax, off_1417A81D8; "src\\core\\relay\\translator.rs"
/*140a2e037*/  mov [rsp+600h+var_5E0], rax
/*140a2e03c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e043*/  lea r9, off_1417A5560
/*140a2e04a*/  lea r8, [rbp+580h+var_1C0]
/*140a2e051*/  mov edx, 2Bh ; '+'
/*140a2e056*/  call sub_1416C3060
/*140a2e05c*/  jmp loc_140A3143D
/*140a2e061*/ loc_140A2E061: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e068*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e06f*/ loc_140A2E06F: lea rax, off_1417A81D8; "src\\core\\relay\\translator.rs"
/*140a2e076*/  mov [rsp+600h+var_5E0], rax
/*140a2e07b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e082*/  lea r9, off_1417A5560
/*140a2e089*/  lea r8, [rbp+580h+var_1C0]
/*140a2e090*/  mov edx, 2Bh ; '+'
/*140a2e095*/  call sub_1416C3060
/*140a2e09b*/  jmp loc_140A3143D
/*140a2e0a0*/ loc_140A2E0A0: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e0a7*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e0ae*/ loc_140A2E0AE: lea rax, off_1417A81D8; "src\\core\\relay\\translator.rs"
/*140a2e0b5*/  mov [rsp+600h+var_5E0], rax
/*140a2e0ba*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e0c1*/  lea r9, off_1417A5560
/*140a2e0c8*/  lea r8, [rbp+580h+var_1C0]
/*140a2e0cf*/  mov edx, 2Bh ; '+'
/*140a2e0d4*/  call sub_1416C3060
/*140a2e0da*/  jmp loc_140A3143D
/*140a2e0df*/ loc_140A2E0DF: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e0e6*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e0ed*/ loc_140A2E0ED: lea rax, off_1417A81D8; "src\\core\\relay\\translator.rs"
/*140a2e0f4*/  mov [rsp+600h+var_5E0], rax
/*140a2e0f9*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e100*/  lea r9, off_1417A5560
/*140a2e107*/  lea r8, [rbp+580h+var_1C0]
/*140a2e10e*/  mov edx, 2Bh ; '+'
/*140a2e113*/  call sub_1416C3060
/*140a2e119*/  jmp loc_140A3143D
/*140a2e11e*/ loc_140A2E11E: mov ecx, 1
/*140a2e123*/  mov edx, 4
/*140a2e128*/  call sub_1416C2D4B
/*140a2e12e*/  jmp loc_140A3143D
/*140a2e133*/ loc_140A2E133: mov ecx, 1
/*140a2e138*/  mov edx, 9
/*140a2e13d*/  call sub_1416C2D4B
/*140a2e143*/  jmp loc_140A3143D
/*140a2e148*/ loc_140A2E148: mov ecx, 1
/*140a2e14d*/  mov edx, 7
/*140a2e152*/  call sub_1416C2D4B
/*140a2e158*/  jmp loc_140A3143D
/*140a2e15d*/ loc_140A2E15D: mov ecx, 1
/*140a2e162*/  mov edx, 7
/*140a2e167*/  call sub_1416C2D4B
/*140a2e16d*/  jmp loc_140A3143D
/*140a2e172*/ loc_140A2E172: mov ecx, 1
/*140a2e177*/  mov edx, 0Bh
/*140a2e17c*/  call sub_1416C2D4B
/*140a2e182*/  jmp loc_140A3143D
/*140a2e187*/ loc_140A2E187: mov ecx, 1
/*140a2e18c*/  mov edx, 4
/*140a2e191*/  call sub_1416C2D4B
/*140a2e197*/  jmp loc_140A3143D
/*140a2e19c*/ loc_140A2E19C: mov ecx, 1
/*140a2e1a1*/  mov edx, 0Bh
/*140a2e1a6*/  call sub_1416C2D4B
/*140a2e1ac*/  jmp loc_140A3143D
/*140a2e1b1*/ loc_140A2E1B1: mov rdx, r13
/*140a2e1b4*/  jmp loc_140A2D35C
/*140a2e1b9*/ loc_140A2E1B9: mov rdx, r13
/*140a2e1bc*/  jmp loc_140A2D381
/*140a2e1c1*/ loc_140A2E1C1: mov ecx, 1
/*140a2e1c6*/  mov edx, 4
/*140a2e1cb*/  call sub_1416C2D4B
/*140a2e1d1*/  jmp loc_140A3143D
/*140a2e1d6*/ loc_140A2E1D6: mov ecx, 1
/*140a2e1db*/  mov edx, 7
/*140a2e1e0*/  call sub_1416C2D4B
/*140a2e1e6*/  jmp loc_140A3143D
/*140a2e1eb*/ loc_140A2E1EB: mov ecx, 1
/*140a2e1f0*/  mov edx, 4
/*140a2e1f5*/  call sub_1416C2D4B
/*140a2e1fb*/  jmp loc_140A3143D
/*140a2e200*/ loc_140A2E200: mov ecx, 1
/*140a2e205*/  mov edx, 7
/*140a2e20a*/  call sub_1416C2D4B
/*140a2e210*/  jmp loc_140A3143D
/*140a2e215*/ loc_140A2E215: mov ecx, 1
/*140a2e21a*/  mov edx, 9
/*140a2e21f*/  call sub_1416C2D4B
/*140a2e225*/  jmp loc_140A3143D
/*140a2e22a*/ loc_140A2E22A: mov ecx, 1
/*140a2e22f*/  mov edx, 4
/*140a2e234*/  call sub_1416C2D4B
/*140a2e23a*/  jmp loc_140A3143D
/*140a2e23f*/ loc_140A2E23F: mov ecx, 1
/*140a2e244*/  mov rdx, rsi
/*140a2e247*/  call sub_1416C2D4B
/*140a2e24d*/  jmp loc_140A3143D
/*140a2e252*/ loc_140A2E252: mov ecx, 1
/*140a2e257*/  mov edx, 4
/*140a2e25c*/  call sub_1416C2D4B
/*140a2e262*/  jmp loc_140A3143D
/*140a2e267*/ loc_140A2E267: mov ecx, 1
/*140a2e26c*/  mov edx, 7
/*140a2e271*/  call sub_1416C2D4B
/*140a2e277*/  jmp loc_140A3143D
/*140a2e27c*/ loc_140A2E27C: mov [rbp+580h+var_340], r13
/*140a2e283*/  jmp loc_140A2D39F
/*140a2e288*/ loc_140A2E288: mov [rbp+580h+var_2B9], 1
/*140a2e28f*/ loc_140A2E28F: mov ecx, 1
/*140a2e294*/  mov rdx, rbx
/*140a2e297*/  call sub_1416C2D4B
/*140a2e29d*/  jmp loc_140A3143D
/*140a2e2a2*/ loc_140A2E2A2: mov ecx, 1
/*140a2e2a7*/  mov edx, 4
/*140a2e2ac*/  call sub_1416C2D4B
/*140a2e2b2*/  jmp loc_140A3143D
/*140a2e2b7*/ loc_140A2E2B7: mov ecx, 1
/*140a2e2bc*/  mov edx, 2
/*140a2e2c1*/  call sub_1416C2D4B
/*140a2e2c7*/  jmp loc_140A3143D
/*140a2e2cc*/ loc_140A2E2CC: mov ecx, 1
/*140a2e2d1*/  mov edx, 4
/*140a2e2d6*/  call sub_1416C2D4B
/*140a2e2dc*/  jmp loc_140A3143D
/*140a2e2e1*/ loc_140A2E2E1: mov ecx, 1
/*140a2e2e6*/  mov edx, 8
/*140a2e2eb*/  call sub_1416C2D4B
/*140a2e2f1*/  jmp loc_140A3143D
/*140a2e2f6*/ loc_140A2E2F6: mov ecx, 1
/*140a2e2fb*/  mov edx, 5
/*140a2e300*/  call sub_1416C2D4B
/*140a2e306*/  jmp loc_140A3143D
/*140a2e30b*/ loc_140A2E30B: mov ecx, 1
/*140a2e310*/  mov edx, 4
/*140a2e315*/  call sub_1416C2D4B
/*140a2e31b*/  jmp loc_140A3143D
/*140a2e320*/ loc_140A2E320: mov ecx, 1
/*140a2e325*/  mov edx, 7
/*140a2e32a*/  call sub_1416C2D4B
/*140a2e330*/  jmp loc_140A3143D
/*140a2e335*/ loc_140A2E335: mov ecx, 1
/*140a2e33a*/  mov edx, 9
/*140a2e33f*/  call sub_1416C2D4B
/*140a2e345*/  jmp loc_140A3143D
/*140a2e34a*/ loc_140A2E34A: mov [rbp+580h+var_2BC], 1
/*140a2e351*/ loc_140A2E351: mov ecx, 1
/*140a2e356*/  mov rdx, rbx
/*140a2e359*/  call sub_1416C2D4B
/*140a2e35f*/  jmp loc_140A3143D
/*140a2e364*/ loc_140A2E364: mov [rbp+580h+var_2BD], 1
/*140a2e36b*/ loc_140A2E36B: mov ecx, 1
/*140a2e370*/  mov rdx, rbx
/*140a2e373*/  call sub_1416C2D4B
/*140a2e379*/  jmp loc_140A3143D
/*140a2e37e*/ loc_140A2E37E: mov ecx, 1
/*140a2e383*/  mov edx, 4
/*140a2e388*/  call sub_1416C2D4B
/*140a2e38e*/  jmp loc_140A3143D
/*140a2e393*/ loc_140A2E393: mov ecx, 1
/*140a2e398*/  mov edx, 4
/*140a2e39d*/  call sub_1416C2D4B
/*140a2e3a3*/  jmp loc_140A3143D
/*140a2e3a8*/ loc_140A2E3A8: mov ecx, 1
/*140a2e3ad*/  mov edx, 4
/*140a2e3b2*/  call sub_1416C2D4B
/*140a2e3b8*/  jmp loc_140A3143D
/*140a2e3bd*/ loc_140A2E3BD: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e3c4*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e3cb*/ loc_140A2E3CB: lea rax, off_1417A8880; "src\\core\\relay\\translator.rs"
/*140a2e3d2*/  mov [rsp+600h+var_5E0], rax
/*140a2e3d7*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e3de*/  lea r9, off_1417A5560
/*140a2e3e5*/  lea r8, [rbp+580h+var_1C0]
/*140a2e3ec*/  mov edx, 2Bh ; '+'
/*140a2e3f1*/  call sub_1416C3060
/*140a2e3f7*/  jmp loc_140A3143D
/*140a2e3fc*/ loc_140A2E3FC: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e403*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e40a*/ loc_140A2E40A: lea rax, off_1417A8880; "src\\core\\relay\\translator.rs"
/*140a2e411*/  mov [rsp+600h+var_5E0], rax
/*140a2e416*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e41d*/  lea r9, off_1417A5560
/*140a2e424*/  lea r8, [rbp+580h+var_1C0]
/*140a2e42b*/  mov edx, 2Bh ; '+'
/*140a2e430*/  call sub_1416C3060
/*140a2e436*/  jmp loc_140A3143D
/*140a2e43b*/ loc_140A2E43B: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e442*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e449*/ loc_140A2E449: lea rax, off_1417A8868; "src\\core\\relay\\translator.rs"
/*140a2e450*/  mov [rsp+600h+var_5E0], rax
/*140a2e455*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e45c*/  lea r9, off_1417A5560
/*140a2e463*/  lea r8, [rbp+580h+var_1C0]
/*140a2e46a*/  mov edx, 2Bh ; '+'
/*140a2e46f*/  call sub_1416C3060
/*140a2e475*/  jmp loc_140A3143D
/*140a2e47a*/ loc_140A2E47A: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e481*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e488*/ loc_140A2E488: lea rax, off_1417A8880; "src\\core\\relay\\translator.rs"
/*140a2e48f*/  mov [rsp+600h+var_5E0], rax
/*140a2e494*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e49b*/  lea r9, off_1417A5560
/*140a2e4a2*/  lea r8, [rbp+580h+var_1C0]
/*140a2e4a9*/  mov edx, 2Bh ; '+'
/*140a2e4ae*/  call sub_1416C3060
/*140a2e4b4*/  jmp loc_140A3143D
/*140a2e4b9*/ loc_140A2E4B9: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2e4c0*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a2e4c7*/ loc_140A2E4C7: lea rax, off_1417A8868; "src\\core\\relay\\translator.rs"
/*140a2e4ce*/  mov [rsp+600h+var_5E0], rax
/*140a2e4d3*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a2e4da*/  lea r9, off_1417A5560
/*140a2e4e1*/  lea r8, [rbp+580h+var_1C0]
/*140a2e4e8*/  mov edx, 2Bh ; '+'
/*140a2e4ed*/  call sub_1416C3060
/*140a2e4f3*/  jmp loc_140A3143D
/*140a2e4f8*/ loc_140A2E4F8: mov ecx, 1
/*140a2e4fd*/  mov edx, 5
/*140a2e502*/  call sub_1416C2D4B
/*140a2e508*/  jmp loc_140A3143D
/*140a2e50d*/ loc_140A2E50D: mov ecx, 1
/*140a2e512*/  mov edx, 4
/*140a2e517*/  call sub_1416C2D4B
/*140a2e51d*/  jmp loc_140A3143D
/*140a2e522*/ loc_140A2E522: mov ecx, 1
/*140a2e527*/  mov edx, 4
/*140a2e52c*/  call sub_1416C2D4B
/*140a2e532*/  jmp loc_140A3143D
/*140a2e537*/ loc_140A2E537: mov ecx, 1
/*140a2e53c*/  mov edx, 4
/*140a2e541*/  call sub_1416C2D4B
/*140a2e547*/  jmp loc_140A3143D
/*140a2e54c*/ loc_140A2E54C: mov ecx, 1
/*140a2e551*/  mov edx, 5
/*140a2e556*/  call sub_1416C2D4B
/*140a2e55c*/  jmp loc_140A3143D
/*140a2e561*/ loc_140A2E561: mov [rbp+580h+var_418], rsi
/*140a2e568*/  mov ecx, 1
/*140a2e56d*/  jmp loc_140A2DC68
/*140a2e572*/ loc_140A2E572: mov ecx, 1
/*140a2e577*/  mov edx, 4
/*140a2e57c*/  call sub_1416C2D4B
/*140a2e582*/  jmp loc_140A3143D
/*140a2e587*/ loc_140A2E587: mov ecx, 1
/*140a2e58c*/  mov edx, 6
/*140a2e591*/  call sub_1416C2D4B
/*140a2e597*/  jmp loc_140A3143D
/*140a2e59c*/ loc_140A2E59C: mov ecx, 1
/*140a2e5a1*/  mov edx, 4
/*140a2e5a6*/  call sub_1416C2D4B
/*140a2e5ac*/  jmp loc_140A3143D
/*140a2e5b1*/ loc_140A2E5B1: mov ecx, 1
/*140a2e5b6*/  mov edx, 4
/*140a2e5bb*/  call sub_1416C2D4B
/*140a2e5c1*/  jmp loc_140A3143D
/*140a2e5c6*/ loc_140A2E5C6: mov ecx, 1
/*140a2e5cb*/  mov edx, 0Ah
/*140a2e5d0*/  call sub_1416C2D4B
/*140a2e5d6*/  jmp loc_140A3143D
/*140a2e5db*/ loc_140A2E5DB: mov ecx, 1
/*140a2e5e0*/  mov edx, 4
/*140a2e5e5*/  call sub_1416C2D4B
/*140a2e5eb*/  jmp loc_140A3143D
/*140a2e5f0*/ loc_140A2E5F0: mov ecx, 1
/*140a2e5f5*/  mov edx, 4
/*140a2e5fa*/  call sub_1416C2D4B
/*140a2e600*/  jmp loc_140A3143D
/*140a2e605*/ loc_140A2E605: mov ecx, 1
/*140a2e60a*/  mov edx, 8
/*140a2e60f*/  call sub_1416C2D4B
/*140a2e615*/  jmp loc_140A3143D
/*140a2e61a*/ loc_140A2E61A: mov ecx, 1
/*140a2e61f*/  mov edx, 9
/*140a2e624*/  call sub_1416C2D4B
/*140a2e62a*/  jmp loc_140A3143D
/*140a2e62f*/ loc_140A2E62F: mov ecx, 1
/*140a2e634*/  mov edx, 4
/*140a2e639*/  call sub_1416C2D4B
/*140a2e63f*/  jmp loc_140A3143D
/*140a2e644*/ loc_140A2E644: movzx ecx, byte ptr [r15+rax]
/*140a2e649*/  lea edx, [rcx-41h]
/*140a2e64c*/  cmp dl, 1Ah
/*140a2e64f*/  setb dl
/*140a2e652*/  shl dl, 5
/*140a2e655*/  or dl, cl
/*140a2e657*/  mov [r15+rax], dl
/*140a2e65b*/  inc rax
/*140a2e65e*/ loc_140A2E65E: cmp rbx, rax
/*140a2e661*/  jnz short loc_140A2E644
/*140a2e663*/ loc_140A2E663: lea rax, [rbx-3]; switch 8 cases  // switch 8 cases
/*140a2e667*/  cmp rax, 7
/*140a2e66b*/  ja def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e671*/  lea rcx, jpt_140A2E67F
/*140a2e678*/  movsxd rax, ds:(jpt_140A2E67F - 1417AB2A0h)[rcx+rax*4]
/*140a2e67c*/  add rax, rcx
/*140a2e67f*/  jmp rax; switch jump  // switch jump
/*140a2e681*/ loc_140A2E681: movzx eax, word ptr [r15]; jumptable 0000000140A2E67F case 3  // jumptable 0000000140A2E67F case 3
/*140a2e685*/  xor eax, 6F6Ch
/*140a2e68a*/  movzx ecx, byte ptr [r15+2]
/*140a2e68f*/  xor ecx, 77h
/*140a2e692*/  mov r14d, 3
/*140a2e698*/  or cx, ax
/*140a2e69b*/  jz loc_140A2E7E4
/*140a2e6a1*/  movzx eax, word ptr [r15]
/*140a2e6a5*/  xor eax, 616Dh
/*140a2e6aa*/  movzx ecx, byte ptr [r15+2]
/*140a2e6af*/  xor ecx, 78h
/*140a2e6b2*/  or cx, ax
/*140a2e6b5*/  jnz def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e6bb*/  lea rdi, unk_1417A7B05
/*140a2e6c2*/  jmp loc_140A2E806
/*140a2e6c7*/ loc_140A2E6C7: mov eax, 67696878h; jumptable 0000000140A2E67F case 5  // jumptable 0000000140A2E67F case 5
/*140a2e6cc*/  xor eax, [r15]
/*140a2e6cf*/  movzx ecx, byte ptr [r15+4]
/*140a2e6d4*/  xor ecx, 68h
/*140a2e6d7*/  mov r14d, 5
/*140a2e6dd*/  or ecx, eax
/*140a2e6df*/  jz loc_140A2E7DB
/*140a2e6e5*/  mov eax, 72746C75h
/*140a2e6ea*/  xor eax, [r15]
/*140a2e6ed*/  movzx ecx, byte ptr [r15+4]
/*140a2e6f2*/  xor ecx, 61h
/*140a2e6f5*/  or ecx, eax
/*140a2e6f7*/  jnz def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e6fd*/  lea rdi, unk_1417A7B08
/*140a2e704*/  jmp loc_140A2E806
/*140a2e709*/ loc_140A2E709: mov rax, 69685F6172747865h; jumptable 0000000140A2E67F case 10  // jumptable 0000000140A2E67F case 10
/*140a2e713*/  xor rax, [r15]
/*140a2e716*/  movzx ecx, word ptr [r15+8]
/*140a2e71b*/  xor rcx, 6867h
/*140a2e722*/  lea rdi, unk_1417A7B00
/*140a2e729*/  mov r14d, 5
/*140a2e72f*/  or rcx, rax
/*140a2e732*/  jz loc_140A2E806
/*140a2e738*/  mov rax, 69682D6172747865h
/*140a2e742*/  xor rax, [r15]
/*140a2e745*/  movzx ecx, word ptr [r15+8]
/*140a2e74a*/  xor rcx, 6867h
/*140a2e751*/  or rcx, rax
/*140a2e754*/  jnz short def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e756*/  jmp loc_140A2E806
/*140a2e75b*/ loc_140A2E75B: cmp dword ptr [r15], 656E6F6Eh; jumptable 0000000140A2E67F case 4  // jumptable 0000000140A2E67F case 4
/*140a2e762*/  jz loc_140A2E7ED
/*140a2e768*/  cmp dword ptr [r15], 6F747561h
/*140a2e76f*/  jz loc_140A2EB62
/*140a2e775*/  cmp dword ptr [r15], 68676968h
/*140a2e77c*/  jnz short def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e77e*/  lea rdi, unk_1417A7AFC
/*140a2e785*/  jmp loc_140A2EB69
/*140a2e78a*/ loc_140A2E78A: mov eax, 6964656Dh; jumptable 0000000140A2E67F case 6  // jumptable 0000000140A2E67F case 6
/*140a2e78f*/  xor eax, [r15]
/*140a2e792*/  movzx ecx, word ptr [r15+4]
/*140a2e797*/  xor ecx, 6D75h
/*140a2e79d*/  or ecx, eax
/*140a2e79f*/  jnz short def_140A2E67F; jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e7a1*/  lea rdi, unk_1417A507E
/*140a2e7a8*/  mov r14d, 6
/*140a2e7ae*/  jmp short loc_140A2E806
/*140a2e7b0*/ loc_140A2E7B0: mov eax, 696E696Dh; jumptable 0000000140A2E67F case 7  // jumptable 0000000140A2E67F case 7
/*140a2e7b5*/  xor eax, [r15]
/*140a2e7b8*/  mov ecx, 6C616D69h
/*140a2e7bd*/  xor ecx, [r15+3]
/*140a2e7c1*/  or ecx, eax
/*140a2e7c3*/  jz short loc_140A2E7F9
/*140a2e7c5*/ def_140A2E67F: mov r8d, 1; jumptable 0000000140A2E67F default case, cases 8,9  // jumptable 0000000140A2E67F default case, cases 8,9
/*140a2e7cb*/  mov rcx, r15
/*140a2e7ce*/  mov rdx, rbx
/*140a2e7d1*/  call sub_140001660
/*140a2e7d6*/  jmp loc_140A2EF0E
/*140a2e7db*/ loc_140A2E7DB: lea rdi, unk_1417A7B00
/*140a2e7e2*/  jmp short loc_140A2E806
/*140a2e7e4*/ loc_140A2E7E4: lea rdi, unk_1417A7AF9
/*140a2e7eb*/  jmp short loc_140A2E806
/*140a2e7ed*/ loc_140A2E7ED: lea rdi, aNone_10; "none"
/*140a2e7f4*/  jmp loc_140A2EB69
/*140a2e7f9*/ loc_140A2E7F9: lea rdi, unk_1417A7AF2
/*140a2e800*/  mov r14d, 7
/*140a2e806*/ loc_140A2E806: mov r8d, 1
/*140a2e80c*/  mov rcx, r15
/*140a2e80f*/  mov rdx, rbx
/*140a2e812*/  call sub_140001660
/*140a2e817*/  mov rdx, [rbp+580h+var_370]
/*140a2e81e*/ loc_140A2E81E: mov rcx, [rbp+580h+var_108]
/*140a2e825*/  call sub_140A19AA0
/*140a2e82a*/  nop
/*140a2e82b*/  test al, al
/*140a2e82d*/  jz loc_140A2EA61
/*140a2e833*/  mov qword ptr [rbp+580h+var_2B0], 0
/*140a2e83e*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2e849*/  call nullsub_1
/*140a2e84e*/  mov ecx, 4
/*140a2e853*/  mov edx, 1
/*140a2e858*/  call sub_140001650
/*140a2e85d*/  test rax, rax
/*140a2e860*/  jz loc_140A31286
/*140a2e866*/  mov dword ptr [rax], 65707974h
/*140a2e86c*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2e877*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2e87e*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2e889*/  call nullsub_1
/*140a2e88e*/  mov ecx, 8
/*140a2e893*/  mov edx, 1
/*140a2e898*/  call sub_140001650
/*140a2e89d*/  test rax, rax
/*140a2e8a0*/  mov [rbp+580h+var_F8], rax
/*140a2e8a7*/  jz loc_140A3129B
/*140a2e8ad*/  mov rcx, 6576697470616461h
/*140a2e8b7*/  mov [rax], rcx
/*140a2e8ba*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2e8c1*/  mov qword ptr [rbp+580h+var_180+8], 8
/*140a2e8cc*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2e8d3*/  mov qword ptr [rbp+580h+var_170+8], 8
/*140a2e8de*/ loc_140A2E8DE: lea rcx, [rbp+580h+var_1C0]
/*140a2e8e5*/  lea rdx, [rbp+580h+var_2B0]
/*140a2e8ec*/  lea r8, [rbp+580h+var_200]
/*140a2e8f3*/  lea r9, [rbp+580h+var_180]
/*140a2e8fa*/  call sub_140307860
/*140a2e8ff*/  nop
/*140a2e900*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2e907*/  jz short loc_140A2E916
/*140a2e909*/ loc_140A2E909: lea rcx, [rbp+580h+var_1C0]
/*140a2e910*/  call sub_1400104F0
/*140a2e915*/  nop
/*140a2e916*/ loc_140A2E916: movdqu xmm0, [rbp+580h+var_2B0]
/*140a2e91e*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a2e926*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2e92d*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2e934*/  mov byte ptr [rbp+580h+var_180], 5
/*140a2e93b*/  mov [rbp+580h+var_2C7], 1
/*140a2e942*/ loc_140A2E942: lea rcx, aThinking_0; "thinking"
/*140a2e949*/  lea r8, [rbp+580h+var_2F8]
/*140a2e950*/  mov edx, 8
/*140a2e955*/  call sub_141433E50
/*140a2e95a*/  nop
/*140a2e95b*/ loc_140A2E95B: mov [rbp+580h+var_F8], rax
/*140a2e962*/  mov rcx, rax
/*140a2e965*/  call sub_1400104F0
/*140a2e96a*/  nop
/*140a2e96b*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2e973*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2e97b*/  mov rax, [rbp+580h+var_F8]
/*140a2e982*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2e987*/  movdqu xmmword ptr [rax], xmm0
/*140a2e98b*/  mov qword ptr [rbp+580h+var_2B0], 0
/*140a2e996*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2e9a1*/  call nullsub_1
/*140a2e9a6*/  mov esi, 6
/*140a2e9ab*/  mov ecx, 6
/*140a2e9b0*/  mov edx, 1
/*140a2e9b5*/  call sub_140001650
/*140a2e9ba*/  test rax, rax
/*140a2e9bd*/  jz loc_140A312B0
/*140a2e9c3*/  mov word ptr [rax+4], 7472h
/*140a2e9c9*/  mov dword ptr [rax], 6F666665h
/*140a2e9cf*/  mov qword ptr [rbp+580h+var_200], 6
/*140a2e9da*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2e9e1*/  mov qword ptr [rbp+580h+var_1F0], 6
/*140a2e9ec*/  lea rbx, unk_1417A507E
/*140a2e9f3*/  add r14, 0FFFFFFFFFFFFFFFDh; switch 5 cases  // switch 5 cases
/*140a2e9f7*/  cmp r14, 4
/*140a2e9fb*/  mov rdx, [rbp+580h+var_370]
/*140a2ea02*/  ja def_140A2EA16; jumptable 0000000140A2EA16 default case, case 6
/*140a2ea08*/  lea rax, jpt_140A2EA16
/*140a2ea0f*/  movsxd rcx, ds:(jpt_140A2EA16 - 1417AB2D4h)[rax+r14*4]
/*140a2ea13*/  add rcx, rax
/*140a2ea16*/  jmp rcx; switch jump  // switch jump
/*140a2ea18*/ loc_140A2EA18: movzx eax, word ptr [rdi]; jumptable 0000000140A2EA16 case 3  // jumptable 0000000140A2EA16 case 3
/*140a2ea1b*/  xor eax, 6F6Ch
/*140a2ea20*/  movzx ecx, byte ptr [rdi+2]
/*140a2ea24*/  xor ecx, 77h
/*140a2ea27*/  or cx, ax
/*140a2ea2a*/  jz loc_140A2EE06
/*140a2ea30*/  movzx eax, word ptr [rdi]
/*140a2ea33*/  xor eax, 616Dh
/*140a2ea38*/  movzx ecx, byte ptr [rdi+2]
/*140a2ea3c*/  xor ecx, 78h
/*140a2ea3f*/  or cx, ax
/*140a2ea42*/  jnz def_140A2EA16; jumptable 0000000140A2EA16 default case, case 6
/*140a2ea48*/  mov [rbp+580h+var_1C9], 1
/*140a2ea4f*/ loc_140A2EA4F: mov rcx, [rbp+580h+var_108]
/*140a2ea56*/  call sub_140A10D90
/*140a2ea5b*/  nop
/*140a2ea5c*/  jmp loc_140A2EDEB
/*140a2ea61*/ loc_140A2EA61: mov rcx, [rbp+580h+var_108]
/*140a2ea68*/  mov rdx, [rbp+580h+var_370]
/*140a2ea6f*/  call sub_140A1F800
/*140a2ea74*/  nop
/*140a2ea75*/  test al, al
/*140a2ea77*/  jz loc_140A2EF0E
/*140a2ea7d*/  add r14, 0FFFFFFFFFFFFFFFDh
/*140a2ea81*/  lea rax, jpt_140A2EA8F
/*140a2ea88*/  movsxd rcx, ds:(jpt_140A2EA8F - 1417AB2C0h)[rax+r14*4]; switch 5 cases  // switch 5 cases
/*140a2ea8c*/  add rcx, rax
/*140a2ea8f*/  jmp rcx; switch jump  // switch jump
/*140a2ea91*/ loc_140A2EA91: movzx eax, word ptr [rdi]; jumptable 0000000140A2EA8F case 0  // jumptable 0000000140A2EA8F case 0
/*140a2ea94*/  xor eax, 6F6Ch
/*140a2ea99*/  movzx ecx, byte ptr [rdi+2]
/*140a2ea9d*/  xor ecx, 77h
/*140a2eaa0*/  or cx, ax
/*140a2eaa3*/  jz loc_140A30B76
/*140a2eaa9*/  movzx eax, word ptr [rdi]
/*140a2eaac*/  xor eax, 616Dh
/*140a2eab1*/  movzx ecx, byte ptr [rdi+2]
/*140a2eab5*/  xor ecx, 78h
/*140a2eab8*/  or cx, ax
/*140a2eabb*/  jnz loc_140A2EF0E
/*140a2eac1*/  jmp loc_140A2ED7C
/*140a2eac6*/ loc_140A2EAC6: mov eax, 67696878h; jumptable 0000000140A2EA16 case 5  // jumptable 0000000140A2EA16 case 5
/*140a2eacb*/  xor eax, [rdi]
/*140a2eacd*/  movzx ecx, byte ptr [rdi+4]
/*140a2ead1*/  xor ecx, 68h
/*140a2ead4*/  or ecx, eax
/*140a2ead6*/  jz loc_140A2EDD7
/*140a2eadc*/  mov eax, 72746C75h
/*140a2eae1*/  xor eax, [rdi]
/*140a2eae3*/  movzx ecx, byte ptr [rdi+4]
/*140a2eae7*/  xor ecx, 61h
/*140a2eaea*/  or ecx, eax
/*140a2eaec*/  jnz def_140A2EA16; jumptable 0000000140A2EA16 default case, case 6
/*140a2eaf2*/  mov [rbp+580h+var_1C9], 1
/*140a2eaf9*/ loc_140A2EAF9: mov rcx, [rbp+580h+var_108]
/*140a2eb00*/  call sub_140A10D90
/*140a2eb05*/  nop
/*140a2eb06*/  jmp loc_140A2EDEB
/*140a2eb0b*/ loc_140A2EB0B: cmp dword ptr [rdi], 6F747561h; jumptable 0000000140A2EA16 case 4  // jumptable 0000000140A2EA16 case 4
/*140a2eb11*/  jz loc_140A2EDF8
/*140a2eb17*/  xor eax, eax
/*140a2eb19*/  cmp dword ptr [rdi], 68676968h
/*140a2eb1f*/  setnz al
/*140a2eb22*/  lea rsi, [rax+rax+4]
/*140a2eb27*/  lea rax, unk_1417A7AFC
/*140a2eb2e*/  jmp short loc_140A2EB52
/*140a2eb30*/ loc_140A2EB30: mov eax, 696E696Dh; jumptable 0000000140A2EA16 case 7  // jumptable 0000000140A2EA16 case 7
/*140a2eb35*/  xor eax, [rdi]
/*140a2eb37*/  mov ecx, 6C616D69h
/*140a2eb3c*/  xor ecx, [rdi+3]
/*140a2eb3f*/  xor edx, edx
/*140a2eb41*/  or ecx, eax
/*140a2eb43*/  setnz dl
/*140a2eb46*/  lea rsi, [rdx+rdx*2+3]
/*140a2eb4b*/  lea rax, unk_1417A7AF9
/*140a2eb52*/ loc_140A2EB52: lea rbx, unk_1417A507E
/*140a2eb59*/  cmovz rbx, rax
/*140a2eb5d*/  jmp def_140A2EA16; jumptable 0000000140A2EA16 default case, case 6
/*140a2eb62*/ loc_140A2EB62: lea rdi, unk_1417A7AEE
/*140a2eb69*/ loc_140A2EB69: mov rsi, [rbp+580h+var_370]
/*140a2eb70*/  mov r14d, 4
/*140a2eb76*/  mov edx, 4
/*140a2eb7b*/  mov r8d, 1
/*140a2eb81*/  mov rcx, r15
/*140a2eb84*/  call sub_140001660
/*140a2eb89*/  cmp dword ptr [rdi], 656E6F6Eh
/*140a2eb8f*/  mov rdx, rsi
/*140a2eb92*/  jnz loc_140A2E81E
/*140a2eb98*/ loc_140A2EB98: mov rcx, [rbp+580h+var_108]
/*140a2eb9f*/  call sub_140A19AA0
/*140a2eba4*/  nop
/*140a2eba5*/  test al, al
/*140a2eba7*/  jnz short loc_140A2EBC5
/*140a2eba9*/  mov rcx, [rbp+580h+var_108]
/*140a2ebb0*/  mov rdx, [rbp+580h+var_370]
/*140a2ebb7*/  call sub_140A1F800
/*140a2ebbc*/  nop
/*140a2ebbd*/  test al, al
/*140a2ebbf*/  jz loc_140A2EF0E
/*140a2ebc5*/ loc_140A2EBC5: mov qword ptr [rbp+580h+var_2B0], 0
/*140a2ebd0*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a2ebdb*/  call nullsub_1
/*140a2ebe0*/  mov ecx, 4
/*140a2ebe5*/  mov edx, 1
/*140a2ebea*/  call sub_140001650
/*140a2ebef*/  test rax, rax
/*140a2ebf2*/  jz loc_140A31372
/*140a2ebf8*/  mov dword ptr [rax], 65707974h
/*140a2ebfe*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2ec09*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2ec10*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2ec1b*/  call nullsub_1
/*140a2ec20*/  mov ecx, 8
/*140a2ec25*/  mov edx, 1
/*140a2ec2a*/  call sub_140001650
/*140a2ec2f*/  test rax, rax
/*140a2ec32*/  mov [rbp+580h+var_F8], rax
/*140a2ec39*/  jz loc_140A31387
/*140a2ec3f*/  mov rcx, 64656C6261736964h
/*140a2ec49*/  mov [rax], rcx
/*140a2ec4c*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2ec53*/  mov qword ptr [rbp+580h+var_180+8], 8
/*140a2ec5e*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2ec65*/  mov qword ptr [rbp+580h+var_170+8], 8
/*140a2ec70*/ loc_140A2EC70: lea rcx, [rbp+580h+var_1C0]
/*140a2ec77*/  lea rdx, [rbp+580h+var_2B0]
/*140a2ec7e*/  lea r8, [rbp+580h+var_200]
/*140a2ec85*/  lea r9, [rbp+580h+var_180]
/*140a2ec8c*/  call sub_140307860
/*140a2ec91*/  nop
/*140a2ec92*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2ec99*/  jz short loc_140A2ECA8
/*140a2ec9b*/ loc_140A2EC9B: lea rcx, [rbp+580h+var_1C0]
/*140a2eca2*/  call sub_1400104F0
/*140a2eca7*/  nop
/*140a2eca8*/ loc_140A2ECA8: movdqu xmm0, [rbp+580h+var_2B0]
/*140a2ecb0*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a2ecb8*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2ecbf*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2ecc6*/  mov byte ptr [rbp+580h+var_180], 5
/*140a2eccd*/  mov [rbp+580h+var_2C9], 1
/*140a2ecd4*/ loc_140A2ECD4: lea rcx, aThinking_0; "thinking"
/*140a2ecdb*/  lea r8, [rbp+580h+var_2F8]
/*140a2ece2*/  mov edx, 8
/*140a2ece7*/  call sub_141433E50
/*140a2ecec*/  nop
/*140a2eced*/ loc_140A2ECED: mov [rbp+580h+var_F8], rax
/*140a2ecf4*/  mov rcx, rax
/*140a2ecf7*/  call sub_1400104F0
/*140a2ecfc*/  nop
/*140a2ecfd*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2ed05*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2ed0d*/  mov rax, [rbp+580h+var_F8]
/*140a2ed14*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2ed19*/  movdqu xmmword ptr [rax], xmm0
/*140a2ed1d*/ loc_140A2ED1D: lea rcx, [rbp+580h+var_2F8]
/*140a2ed24*/  call sub_140A201F0
/*140a2ed29*/  nop
/*140a2ed2a*/  jmp loc_140A2EF0E
/*140a2ed2f*/ loc_140A2ED2F: mov eax, 696E696Dh; jumptable 0000000140A2EA8F case 4  // jumptable 0000000140A2EA8F case 4
/*140a2ed34*/  xor eax, [rdi]
/*140a2ed36*/  mov ecx, 6C616D69h
/*140a2ed3b*/  xor ecx, [rdi+3]
/*140a2ed3e*/  or ecx, eax
/*140a2ed40*/  jnz loc_140A2EF0E
/*140a2ed46*/  mov esi, 200h
/*140a2ed4b*/  jmp loc_140A30B7B
/*140a2ed50*/ loc_140A2ED50: mov eax, 67696878h; jumptable 0000000140A2EA8F case 2  // jumptable 0000000140A2EA8F case 2
/*140a2ed55*/  xor eax, [rdi]
/*140a2ed57*/  movzx ecx, byte ptr [rdi+4]
/*140a2ed5b*/  xor ecx, 68h
/*140a2ed5e*/  or ecx, eax
/*140a2ed60*/  jz loc_140A30B6F
/*140a2ed66*/  mov eax, 72746C75h
/*140a2ed6b*/  xor eax, [rdi]
/*140a2ed6d*/  movzx ecx, byte ptr [rdi+4]
/*140a2ed71*/  xor ecx, 61h
/*140a2ed74*/  or ecx, eax
/*140a2ed76*/  jnz loc_140A2EF0E
/*140a2ed7c*/ loc_140A2ED7C: mov esi, 1F400h
/*140a2ed81*/  jmp loc_140A30B7B
/*140a2ed86*/ loc_140A2ED86: mov eax, 6964656Dh; jumptable 0000000140A2EA8F case 3  // jumptable 0000000140A2EA8F case 3
/*140a2ed8b*/  xor eax, [rdi]
/*140a2ed8d*/  movzx ecx, word ptr [rdi+4]
/*140a2ed91*/  xor ecx, 6D75h
/*140a2ed97*/  or ecx, eax
/*140a2ed99*/  jnz loc_140A2EF0E
/*140a2ed9f*/  mov esi, 2000h
/*140a2eda4*/  jmp loc_140A30B7B
/*140a2eda9*/ loc_140A2EDA9: cmp dword ptr [rdi], 656E6F6Eh; jumptable 0000000140A2EA8F case 1  // jumptable 0000000140A2EA8F case 1
/*140a2edaf*/  jz loc_140A2EF0E
/*140a2edb5*/  cmp dword ptr [rdi], 6F747561h
/*140a2edbb*/  jz loc_140A2EF0E
/*140a2edc1*/  cmp dword ptr [rdi], 68676968h
/*140a2edc7*/  jnz loc_140A2EF0E
/*140a2edcd*/  mov esi, 6000h
/*140a2edd2*/  jmp loc_140A30B7B
/*140a2edd7*/ loc_140A2EDD7: mov [rbp+580h+var_1C9], 1
/*140a2edde*/ loc_140A2EDDE: mov rcx, [rbp+580h+var_108]
/*140a2ede5*/  call sub_140A10D90
/*140a2edea*/  nop
/*140a2edeb*/ loc_140A2EDEB: test al, al
/*140a2eded*/  jz short loc_140A2EDF8
/*140a2edef*/  lea rbx, unk_1417A7B05
/*140a2edf6*/  jmp short loc_140A2EE0D
/*140a2edf8*/ loc_140A2EDF8: lea rbx, unk_1417A7AFC
/*140a2edff*/  mov esi, 4
/*140a2ee04*/  jmp short def_140A2EA16; jumptable 0000000140A2EA16 default case, case 6
/*140a2ee06*/ loc_140A2EE06: lea rbx, unk_1417A7AF9
/*140a2ee0d*/ loc_140A2EE0D: mov esi, 3
/*140a2ee12*/ def_140A2EA16: call nullsub_1; jumptable 0000000140A2EA16 default case, case 6  // jumptable 0000000140A2EA16 default case, case 6
/*140a2ee17*/  mov edx, 1
/*140a2ee1c*/  mov rcx, rsi
/*140a2ee1f*/  call sub_140001650
/*140a2ee24*/  test rax, rax
/*140a2ee27*/  jz loc_140A312C5
/*140a2ee2d*/  mov r14, rax
/*140a2ee30*/  mov rcx, rax
/*140a2ee33*/  mov rdx, rbx
/*140a2ee36*/  mov r8, rsi
/*140a2ee39*/  call sub_141684120
/*140a2ee3e*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2ee45*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a2ee4c*/  mov qword ptr [rbp+580h+var_170], r14
/*140a2ee53*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a2ee5a*/  mov [rbp+580h+var_1C9], 0
/*140a2ee61*/ loc_140A2EE61: lea rcx, [rbp+580h+var_1C0]
/*140a2ee68*/  lea rdx, [rbp+580h+var_2B0]
/*140a2ee6f*/  lea r8, [rbp+580h+var_200]
/*140a2ee76*/  lea r9, [rbp+580h+var_180]
/*140a2ee7d*/  call sub_140307860
/*140a2ee82*/  nop
/*140a2ee83*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2ee8a*/  jz short loc_140A2EE99
/*140a2ee8c*/ loc_140A2EE8C: lea rcx, [rbp+580h+var_1C0]
/*140a2ee93*/  call sub_1400104F0
/*140a2ee98*/  nop
/*140a2ee99*/ loc_140A2EE99: movdqu xmm0, [rbp+580h+var_2B0]
/*140a2eea1*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a2eea9*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a2eeb0*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2eeb7*/  mov byte ptr [rbp+580h+var_180], 5
/*140a2eebe*/  mov [rbp+580h+var_2C8], 1
/*140a2eec5*/ loc_140A2EEC5: lea rcx, aOutputConfig; "output_config"
/*140a2eecc*/  lea r8, [rbp+580h+var_2F8]
/*140a2eed3*/  mov edx, 0Dh
/*140a2eed8*/  call sub_141433E50
/*140a2eedd*/  nop
/*140a2eede*/ loc_140A2EEDE: mov [rbp+580h+var_F8], rax
/*140a2eee5*/  mov rcx, rax
/*140a2eee8*/  call sub_1400104F0
/*140a2eeed*/  nop
/*140a2eeee*/ loc_140A2EEEE: movdqu xmm0, [rbp+580h+var_180]
/*140a2eef6*/  movdqu xmm1, [rbp+580h+var_170]
/*140a2eefe*/  mov rax, [rbp+580h+var_F8]
/*140a2ef05*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a2ef0a*/  movdqu xmmword ptr [rax], xmm0
/*140a2ef0e*/ loc_140A2EF0E: call sub_141470CD0
/*140a2ef13*/  nop
/*140a2ef14*/  mov rsi, rax
/*140a2ef17*/  cmp byte ptr [rax+10h], 1
/*140a2ef1b*/  jnz loc_140A31114
/*140a2ef21*/  mov rax, [rsi]
/*140a2ef24*/  mov rdx, [rsi+8]
/*140a2ef28*/ loc_140A2EF28: lea rcx, [rax+1]
/*140a2ef2c*/  mov [rsi], rcx
/*140a2ef2f*/  movdqu xmm6, cs:xmmword_1417A47A0
/*140a2ef37*/  movdqa [rbp+580h+var_2A0], xmm6
/*140a2ef3f*/  movdqu xmm7, xmmword ptr cs:off_1417A4790
/*140a2ef47*/  movdqa [rbp+580h+var_2B0], xmm7
/*140a2ef4f*/  mov qword ptr [rbp+580h+var_290], rax
/*140a2ef56*/  mov qword ptr [rbp+580h+var_290+8], rdx
/*140a2ef5d*/ loc_140A2EF5D: lea rcx, aTools_1; "tools"
/*140a2ef64*/  mov edx, 5
/*140a2ef69*/  mov r8, [rbp+580h+var_188]
/*140a2ef70*/  call sub_141433D50
/*140a2ef75*/  nop
/*140a2ef76*/  test rax, rax
/*140a2ef79*/  jz loc_140A2F2F4
/*140a2ef7f*/  cmp byte ptr [rax], 4
/*140a2ef82*/  jnz loc_140A2F2F4
/*140a2ef88*/  mov r15, [rax+10h]
/*140a2ef8c*/  mov rdi, [rax+18h]
/*140a2ef90*/  mov qword ptr [rbp+580h+var_3F8], 0
/*140a2ef9b*/  mov qword ptr [rbp+580h+var_3F8+8], 8
/*140a2efa6*/  mov [rbp+580h+var_3E8], 0
/*140a2efb1*/  mov [rbp+580h+var_274], 1
/*140a2efb8*/ loc_140A2EFB8: call sub_141470CD0
/*140a2efbd*/  nop
/*140a2efbe*/  cmp byte ptr [rax+10h], 1
/*140a2efc2*/  jnz loc_140A3113E
/*140a2efc8*/  mov rcx, [rax]
/*140a2efcb*/  mov rdx, [rax+8]
/*140a2efcf*/ loc_140A2EFCF: lea r8, [rcx+1]
/*140a2efd3*/  mov [rax], r8
/*140a2efd6*/  movdqa [rbp+580h+var_1F0], xmm6
/*140a2efde*/  movdqa [rbp+580h+var_200], xmm7
/*140a2efe6*/  mov qword ptr [rbp+580h+var_1E0], rcx
/*140a2efed*/  mov qword ptr [rbp+580h+var_1E0+8], rdx
/*140a2eff4*/  mov [rbp+580h+var_278], 1
/*140a2effb*/ loc_140A2EFFB: call sub_141470CD0
/*140a2f000*/  nop
/*140a2f001*/  cmp byte ptr [rax+10h], 1
/*140a2f005*/  jnz loc_140A31164
/*140a2f00b*/  mov rcx, [rax]
/*140a2f00e*/  mov rdx, [rax+8]
/*140a2f012*/ loc_140A2F012: lea r8, [rcx+1]
/*140a2f016*/  mov [rax], r8
/*140a2f019*/  movdqa [rbp+580h+var_1B0], xmm6
/*140a2f021*/  movdqa [rbp+580h+var_1C0], xmm7
/*140a2f029*/  mov qword ptr [rbp+580h+var_1A0], rcx
/*140a2f030*/  mov qword ptr [rbp+580h+var_1A0+8], rdx
/*140a2f037*/  shl rdi, 5
/*140a2f03b*/  add rdi, r15
/*140a2f03e*/  lea rbx, aType_8; "type"
/*140a2f045*/  lea rsi, aTools_1; "tools"
/*140a2f04c*/  movaps xmm8, cs:xmmword_141748CD0
/*140a2f054*/  mov r14, r15
/*140a2f057*/  nop word ptr [rax+rax+00000000h]
/*140a2f060*/ loc_140A2F060: cmp r14, rdi
/*140a2f063*/  jz loc_140A2F448
/*140a2f069*/  mov r13, r14
/*140a2f06c*/  mov [rbp+580h+var_EA], 1
/*140a2f073*/ loc_140A2F073: mov edx, 4
/*140a2f078*/  mov rcx, rbx
/*140a2f07b*/  mov r8, r14
/*140a2f07e*/  call sub_141433D50
/*140a2f083*/  nop
/*140a2f084*/  lea r14, [r13+20h]
/*140a2f088*/  test rax, rax
/*140a2f08b*/  jz short loc_140A2F060
/*140a2f08d*/  cmp byte ptr [rax], 3
/*140a2f090*/  jnz short loc_140A2F060
/*140a2f092*/  cmp qword ptr [rax+18h], 9
/*140a2f097*/  jnz short loc_140A2F060
/*140a2f099*/  mov rax, [rax+10h]
/*140a2f09d*/  mov rcx, [rax]
/*140a2f0a0*/  mov rdx, 63617073656D616Eh
/*140a2f0aa*/  xor rcx, rdx
/*140a2f0ad*/  movzx eax, byte ptr [rax+8]
/*140a2f0b1*/  xor rax, 65h
/*140a2f0b5*/  or rax, rcx
/*140a2f0b8*/  jnz short loc_140A2F060
/*140a2f0ba*/  mov [rbp+580h+var_EA], 1
/*140a2f0c1*/  mov edx, 5
/*140a2f0c6*/  mov rcx, rsi
/*140a2f0c9*/  mov r8, r13
/*140a2f0cc*/  call sub_141433D50
/*140a2f0d1*/  nop
/*140a2f0d2*/  test rax, rax
/*140a2f0d5*/  jz short loc_140A2F060
/*140a2f0d7*/  cmp byte ptr [rax], 4
/*140a2f0da*/  jnz short loc_140A2F060
/*140a2f0dc*/  mov r13, [rax+10h]
/*140a2f0e0*/  mov r12, [rax+18h]
/*140a2f0e4*/  shl r12, 5
/*140a2f0e8*/  add r12, r13
/*140a2f0eb*/ loc_140A2F0EB: cmp r13, r12
/*140a2f0ee*/  jz loc_140A2F060
/*140a2f0f4*/  mov [rbp+580h+var_EA], 1
/*140a2f0fb*/  mov edx, 4
/*140a2f100*/  lea rcx, aName_7; "name"
/*140a2f107*/  mov r8, r13
/*140a2f10a*/  call sub_141433D50
/*140a2f10f*/  nop
/*140a2f110*/ loc_140A2F110: add r13, 20h ; ' '
/*140a2f114*/  test rax, rax
/*140a2f117*/  jz short loc_140A2F0EB
/*140a2f119*/  cmp byte ptr [rax], 3
/*140a2f11c*/  jnz short loc_140A2F0EB
/*140a2f11e*/  mov rcx, [rax+18h]
/*140a2f122*/  test rcx, rcx
/*140a2f125*/  js loc_140A30E0A
/*140a2f12b*/  jz short loc_140A2F18B
/*140a2f12d*/  mov rax, [rax+10h]
/*140a2f131*/  mov [rbp+580h+var_F8], rax
/*140a2f138*/  mov [rbp+580h+var_110], rcx
/*140a2f13f*/  call nullsub_1
/*140a2f144*/  mov edx, 1
/*140a2f149*/  mov rcx, [rbp+580h+var_110]
/*140a2f150*/  call sub_140001650
/*140a2f155*/  test rax, rax
/*140a2f158*/  jz loc_140A313C3
/*140a2f15e*/  mov rcx, rax
/*140a2f161*/  mov rdx, [rbp+580h+var_F8]
/*140a2f168*/  mov r8, [rbp+580h+var_110]
/*140a2f16f*/  mov [rbp+580h+var_F8], rax
/*140a2f176*/  call sub_141684120
/*140a2f17b*/  mov rax, [rbp+580h+var_F8]
/*140a2f182*/  mov rcx, [rbp+580h+var_110]
/*140a2f189*/  jmp short loc_140A2F190
/*140a2f18b*/ loc_140A2F18B: mov eax, 1
/*140a2f190*/ loc_140A2F190: mov qword ptr [rbp+580h+var_260], rcx
/*140a2f197*/  mov [rbp+580h+var_F8], rax
/*140a2f19e*/  mov qword ptr [rbp+580h+var_260+8], rax
/*140a2f1a5*/  mov qword ptr [rbp+580h+var_250], rcx
/*140a2f1ac*/  mov [rbp+580h+var_EA], 1
/*140a2f1b3*/ loc_140A2F1B3: lea rcx, [rbp+580h+var_180]
/*140a2f1ba*/  lea rdx, [rbp+580h+var_1C0]
/*140a2f1c1*/  lea r8, [rbp+580h+var_260]
/*140a2f1c8*/  call sub_14046D090
/*140a2f1cd*/  nop
/*140a2f1ce*/  mov rcx, qword ptr [rbp+580h+var_180]
/*140a2f1d5*/  mov rax, qword ptr [rbp+580h+var_180+8]
/*140a2f1dc*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*140a2f1e0*/  jz loc_140A2F2B1
/*140a2f1e6*/  mov [rbp+580h+var_2B8], rcx
/*140a2f1ed*/  mov [rbp+580h+var_268], rax
/*140a2f1f4*/  mov rax, qword ptr [rbp+580h+var_170+8]
/*140a2f1fb*/  mov r9, [rbp+580h+var_160]
/*140a2f202*/  mov r8, [rax]
/*140a2f205*/  mov [rbp+580h+var_110], rax
/*140a2f20c*/  mov r10, [rax+8]
/*140a2f210*/  mov r11, r10
/*140a2f213*/  and r11, r9
/*140a2f216*/  movdqu xmm0, xmmword ptr [r8+r11]
/*140a2f21c*/  pmovmskb ecx, xmm0
/*140a2f220*/  test ecx, ecx
/*140a2f222*/  jz loc_140A2F2BA
/*140a2f228*/ loc_140A2F228: tzcnt ecx, ecx
/*140a2f22c*/  add rcx, r11
/*140a2f22f*/  and rcx, r10
/*140a2f232*/  movzx r11d, byte ptr [r8+rcx]
/*140a2f237*/  test r11b, r11b
/*140a2f23a*/  jns loc_140A2F2DD
/*140a2f240*/ loc_140A2F240: mov rdx, qword ptr [rbp+580h+var_170]
/*140a2f247*/  shr r9, 39h
/*140a2f24b*/  lea rax, [rcx-10h]
/*140a2f24f*/  and rax, r10
/*140a2f252*/  mov [r8+rcx], r9b
/*140a2f256*/  mov [r8+rax+10h], r9b
/*140a2f25b*/  shl rcx, 5
/*140a2f25f*/  mov rax, r8
/*140a2f262*/  sub rax, rcx
/*140a2f265*/  and r11b, 1
/*140a2f269*/  neg rcx
/*140a2f26c*/  mov r9, [rbp+580h+var_2B8]
/*140a2f273*/  mov [r8+rcx-20h], r9
/*140a2f278*/  mov rcx, [rbp+580h+var_268]
/*140a2f27f*/  mov [rax-18h], rcx
/*140a2f283*/  mov [rax-10h], rdx
/*140a2f287*/  mov qword ptr [rax-8], 0
/*140a2f28f*/  mov rdx, [rbp+580h+var_110]
/*140a2f296*/  movdqu xmm0, xmmword ptr [rdx+10h]
/*140a2f29b*/  movzx ecx, r11b
/*140a2f29f*/  movd xmm1, ecx
/*140a2f2a3*/  shufps xmm1, xmm8, 0E4h
/*140a2f2a8*/  psubq xmm0, xmm1
/*140a2f2ac*/  movdqu xmmword ptr [rdx+10h], xmm0
/*140a2f2b1*/ loc_140A2F2B1: inc qword ptr [rax-8]
/*140a2f2b5*/  jmp loc_140A2F0EB
/*140a2f2ba*/ loc_140A2F2BA: mov eax, 10h
/*140a2f2bf*/ loc_140A2F2BF: add r11, rax
/*140a2f2c2*/  and r11, r10
/*140a2f2c5*/  movdqu xmm0, xmmword ptr [r8+r11]
/*140a2f2cb*/  pmovmskb ecx, xmm0
/*140a2f2cf*/  add rax, 10h
/*140a2f2d3*/  test ecx, ecx
/*140a2f2d5*/  jnz loc_140A2F228
/*140a2f2db*/  jmp short loc_140A2F2BF
/*140a2f2dd*/ loc_140A2F2DD: movdqa xmm0, xmmword ptr [r8]
/*140a2f2e2*/  pmovmskb ecx, xmm0
/*140a2f2e6*/  tzcnt ecx, ecx
/*140a2f2ea*/  movzx r11d, byte ptr [r8+rcx]
/*140a2f2ef*/  jmp loc_140A2F240
/*140a2f2f4*/ loc_140A2F2F4: xor r14d, r14d
/*140a2f2f7*/ loc_140A2F2F7: lea rcx, aToolChoice; "tool_choice"
/*140a2f2fe*/  mov edx, 0Bh
/*140a2f303*/  mov r8, [rbp+580h+var_188]
/*140a2f30a*/  call sub_141433D50
/*140a2f30f*/  nop
/*140a2f310*/  mov rsi, rax
/*140a2f313*/  test rax, rax
/*140a2f316*/  jz loc_140A302CA
/*140a2f31c*/  movzx eax, byte ptr [rsi]
/*140a2f31f*/  cmp eax, 5
/*140a2f322*/  jz loc_140A2FE26
/*140a2f328*/  cmp eax, 3
/*140a2f32b*/  jnz loc_140A302CA
/*140a2f331*/  mov rax, [rsi+10h]
/*140a2f335*/  mov rcx, [rsi+18h]
/*140a2f339*/  cmp rcx, 4
/*140a2f33d*/  jz loc_140A30116
/*140a2f343*/  cmp rcx, 8
/*140a2f347*/  jnz loc_140A302CA
/*140a2f34d*/  mov rcx, 6465726975716572h
/*140a2f357*/  cmp [rax], rcx
/*140a2f35a*/  jnz loc_140A302CA
/*140a2f360*/  mov qword ptr [rbp+580h+var_260], 0
/*140a2f36b*/  mov qword ptr [rbp+580h+var_250], 0
/*140a2f376*/  call nullsub_1
/*140a2f37b*/  mov ecx, 4
/*140a2f380*/  mov edx, 1
/*140a2f385*/  call sub_140001650
/*140a2f38a*/  test rax, rax
/*140a2f38d*/  jz loc_140A312DF
/*140a2f393*/  mov dword ptr [rax], 65707974h
/*140a2f399*/  mov qword ptr [rbp+580h+var_200], 4
/*140a2f3a4*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a2f3ab*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a2f3b6*/  call nullsub_1
/*140a2f3bb*/  mov ecx, 3
/*140a2f3c0*/  mov edx, 1
/*140a2f3c5*/  call sub_140001650
/*140a2f3ca*/  test rax, rax
/*140a2f3cd*/  mov [rbp+580h+var_188], rax
/*140a2f3d4*/  jz loc_140A31309
/*140a2f3da*/  mov byte ptr [rax+2], 79h ; 'y'
/*140a2f3de*/  mov word ptr [rax], 6E61h
/*140a2f3e3*/  mov byte ptr [rbp+580h+var_180], 3
/*140a2f3ea*/  mov qword ptr [rbp+580h+var_180+8], 3
/*140a2f3f5*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2f3fc*/  mov qword ptr [rbp+580h+var_170+8], 3
/*140a2f407*/ loc_140A2F407: lea rcx, [rbp+580h+var_1C0]
/*140a2f40e*/  lea rdx, [rbp+580h+var_260]
/*140a2f415*/  lea r8, [rbp+580h+var_200]
/*140a2f41c*/  lea r9, [rbp+580h+var_180]
/*140a2f423*/  call sub_140307860
/*140a2f428*/  nop
/*140a2f429*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a2f430*/  jz loc_140A301FE
/*140a2f436*/ loc_140A2F436: lea rcx, [rbp+580h+var_1C0]
/*140a2f43d*/  call sub_1400104F0
/*140a2f442*/  nop
/*140a2f443*/  jmp loc_140A301FE
/*140a2f448*/ loc_140A2F448: lea r12, aType_8; "type"
/*140a2f44f*/  lea r13, [rbp+580h+var_538]
/*140a2f453*/  lea r14, [rbp+580h+var_3F8]
/*140a2f45a*/  movdqa xmm8, cs:xmmword_1417A2D70
/*140a2f463*/  movd xmm9, dword ptr cs:xmmword_1417488D0
/*140a2f46c*/  mov rbx, 726165735F626577h
/*140a2f476*/  pcmpeqd xmm10, xmm10
/*140a2f47b*/  mov dword ptr [rbp+580h+var_268], 0
/*140a2f485*/  jmp short loc_140A2F4BD
/*140a2f490*/ loc_140A2F490: mov rax, qword ptr [rbp+580h+var_3F8+8]
/*140a2f497*/  mov rcx, rsi
/*140a2f49a*/  shl rcx, 5
/*140a2f49e*/  movdqu xmm0, [rbp+580h+var_538]
/*140a2f4a3*/  movdqu xmm1, [rbp+580h+var_528]
/*140a2f4a8*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2f4ae*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2f4b3*/  inc rsi
/*140a2f4b6*/  mov [rbp+580h+var_3E8], rsi
/*140a2f4bd*/ loc_140A2F4BD: mov rsi, r15
/*140a2f4c0*/ loc_140A2F4C0: cmp rsi, rdi
/*140a2f4c3*/  jz loc_140A2FD79
/*140a2f4c9*/  mov [rbp+580h+var_EA], 1
/*140a2f4d0*/ loc_140A2F4D0: mov edx, 4
/*140a2f4d5*/  mov rcx, r12
/*140a2f4d8*/  mov r8, rsi
/*140a2f4db*/  call sub_141433D50
/*140a2f4e0*/  nop
/*140a2f4e1*/  lea r15, [rsi+20h]
/*140a2f4e5*/  test rax, rax
/*140a2f4e8*/  jz loc_140A2F58E
/*140a2f4ee*/  cmp byte ptr [rax], 3
/*140a2f4f1*/  jnz loc_140A2F58E
/*140a2f4f7*/  mov rcx, [rax+10h]
/*140a2f4fb*/  mov rax, [rax+18h]
/*140a2f4ff*/  cmp rax, 12h
/*140a2f503*/  jz short loc_140A2F51E
/*140a2f505*/  cmp rax, 0Ah
/*140a2f509*/  jnz short loc_140A2F548
/*140a2f50b*/  mov rax, [rcx]
/*140a2f50e*/  xor rax, rbx
/*140a2f511*/  movzx ecx, word ptr [rcx+8]
/*140a2f515*/  xor rcx, 6863h
/*140a2f51c*/  jmp short loc_140A2F589
/*140a2f51e*/ loc_140A2F51E: movdqu xmm0, xmmword ptr [rcx]
/*140a2f522*/  pcmpeqb xmm0, xmm8
/*140a2f527*/  movzx eax, word ptr [rcx+10h]
/*140a2f52b*/  movd xmm1, eax
/*140a2f52f*/  pcmpeqb xmm1, xmm9
/*140a2f534*/  pand xmm1, xmm0
/*140a2f538*/  pmovmskb eax, xmm1
/*140a2f53c*/  cmp eax, 0FFFFh
/*140a2f541*/  jnz short loc_140A2F572
/*140a2f543*/  jmp loc_140A2F5D0
/*140a2f548*/ loc_140A2F548: ja short loc_140A2F572
/*140a2f54a*/  cmp rax, 9
/*140a2f54e*/  jnz short loc_140A2F58E
/*140a2f550*/  mov rax, [rcx]
/*140a2f553*/  mov rdx, 63617073656D616Eh
/*140a2f55d*/  xor rax, rdx
/*140a2f560*/  movzx ecx, byte ptr [rcx+8]
/*140a2f564*/  xor rcx, 65h
/*140a2f568*/  or rcx, rax
/*140a2f56b*/  jnz short loc_140A2F58E
/*140a2f56d*/  jmp loc_140A2F64D
/*140a2f572*/ loc_140A2F572: mov rax, [rcx]
/*140a2f575*/  xor rax, rbx
/*140a2f578*/  mov rcx, [rcx+3]
/*140a2f57c*/  mov rdx, 5F6863726165735Fh
/*140a2f586*/  xor rcx, rdx
/*140a2f589*/ loc_140A2F589: or rcx, rax
/*140a2f58c*/  jz short loc_140A2F5D0
/*140a2f58e*/ loc_140A2F58E: mov [rbp+580h+var_EA], 1
/*140a2f595*/  mov rcx, r13
/*140a2f598*/  mov rdx, rsi
/*140a2f59b*/  call sub_140A15DA0
/*140a2f5a0*/  nop
/*140a2f5a1*/  cmp byte ptr [rbp+580h+var_538], 0FFh
/*140a2f5a5*/  mov rsi, r15
/*140a2f5a8*/  jz loc_140A2F4C0
/*140a2f5ae*/  mov rsi, [rbp+580h+var_3E8]
/*140a2f5b5*/  cmp rsi, qword ptr [rbp+580h+var_3F8]
/*140a2f5bc*/  jnz loc_140A2F490
/*140a2f5c2*/ loc_140A2F5C2: mov rcx, r14
/*140a2f5c5*/  call sub_1416890A0
/*140a2f5ca*/  nop
/*140a2f5cb*/  jmp loc_140A2F490
/*140a2f5d0*/ loc_140A2F5D0: mov [rbp+580h+var_EA], 1
/*140a2f5d7*/ loc_140A2F5D7: lea rcx, [rbp+580h+var_4F8]
/*140a2f5de*/  mov rdx, rsi
/*140a2f5e1*/  call sub_140A15DA0
/*140a2f5e6*/  nop
/*140a2f5e7*/  cmp byte ptr [rbp+580h+var_4F8], 0FFh
/*140a2f5ee*/  jz loc_140A2F4BD
/*140a2f5f4*/  mov rsi, [rbp+580h+var_3E8]
/*140a2f5fb*/  cmp rsi, qword ptr [rbp+580h+var_3F8]
/*140a2f602*/  jnz short loc_140A2F60D
/*140a2f604*/ loc_140A2F604: mov rcx, r14
/*140a2f607*/  call sub_1416890A0
/*140a2f60c*/  nop
/*140a2f60d*/ loc_140A2F60D: mov rax, qword ptr [rbp+580h+var_3F8+8]
/*140a2f614*/  mov rcx, rsi
/*140a2f617*/  shl rcx, 5
/*140a2f61b*/  movdqu xmm0, [rbp+580h+var_4F8]
/*140a2f623*/  movdqu xmm1, [rbp+580h+var_4E8]
/*140a2f62b*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2f631*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2f636*/  inc rsi
/*140a2f639*/  mov [rbp+580h+var_3E8], rsi
/*140a2f640*/  mov al, 1
/*140a2f642*/  mov dword ptr [rbp+580h+var_268], eax
/*140a2f648*/  jmp loc_140A2F4BD
/*140a2f64d*/ loc_140A2F64D: mov [rbp+580h+var_EA], 1
/*140a2f654*/ loc_140A2F654: mov edx, 4
/*140a2f659*/  lea rcx, aName_7; "name"
/*140a2f660*/  mov r8, rsi
/*140a2f663*/  call sub_141433D50
/*140a2f668*/  nop
/*140a2f669*/  mov ecx, 1
/*140a2f66e*/  test rax, rax
/*140a2f671*/  jz short loc_140A2F682
/*140a2f673*/  cmp byte ptr [rax], 3
/*140a2f676*/  jnz short loc_140A2F682
/*140a2f678*/  mov rcx, [rax+10h]
/*140a2f67c*/  mov rax, [rax+18h]
/*140a2f680*/  jmp short loc_140A2F684
/*140a2f682*/ loc_140A2F682: xor eax, eax
/*140a2f684*/ loc_140A2F684: mov [rbp+580h+var_480], rcx
/*140a2f68b*/  mov [rbp+580h+var_478], rax
/*140a2f692*/  mov [rbp+580h+var_EA], 1
/*140a2f699*/  mov edx, 5
/*140a2f69e*/  lea rcx, aTools_1; "tools"
/*140a2f6a5*/  mov r8, rsi
/*140a2f6a8*/  call sub_141433D50
/*140a2f6ad*/  nop
/*140a2f6ae*/  test rax, rax
/*140a2f6b1*/  jz loc_140A2F4BD
/*140a2f6b7*/  cmp byte ptr [rax], 4
/*140a2f6ba*/  jnz loc_140A2F4BD
/*140a2f6c0*/  mov rsi, [rbp+580h+var_478]
/*140a2f6c7*/  cmp rsi, 2
/*140a2f6cb*/  jnb short loc_140A2F6F8
/*140a2f6cd*/  test rsi, rsi
/*140a2f6d0*/  jnz short loc_140A2F708
/*140a2f6d2*/  mov qword ptr [rbp+580h+var_3A0], 0
/*140a2f6dd*/  mov qword ptr [rbp+580h+var_3A0+8], 1
/*140a2f6e8*/  mov [rbp+580h+var_390], 0
/*140a2f6f3*/  jmp loc_140A2F7D1
/*140a2f6f8*/ loc_140A2F6F8: mov rcx, [rbp+580h+var_480]
/*140a2f6ff*/  cmp word ptr [rcx+rsi-2], 5F5Fh
/*140a2f706*/  jz short loc_140A2F76C
/*140a2f708*/ loc_140A2F708: lea rcx, [rbp+580h+var_480]
/*140a2f70f*/  mov qword ptr [rbp+580h+var_260], rcx
/*140a2f716*/  lea rcx, sub_14041F680
/*140a2f71d*/  mov qword ptr [rbp+580h+var_260+8], rcx
/*140a2f724*/  mov [rbp+580h+var_EA], 1
/*140a2f72b*/  lea rcx, [rbp+580h+var_180]
/*140a2f732*/  lea rdx, unk_1417A7C86
/*140a2f739*/  lea r8, [rbp+580h+var_260]
/*140a2f740*/  mov rsi, rax
/*140a2f743*/  call sub_14149C0F0
/*140a2f748*/  nop
/*140a2f749*/ loc_140A2F749: mov rax, rsi
/*140a2f74c*/  movdqu xmm0, [rbp+580h+var_180]
/*140a2f754*/  movdqa [rbp+580h+var_3A0], xmm0
/*140a2f75c*/  mov rcx, qword ptr [rbp+580h+var_170]
/*140a2f763*/  mov [rbp+580h+var_390], rcx
/*140a2f76a*/  jmp short loc_140A2F7D1
/*140a2f76c*/ loc_140A2F76C: mov [rbp+580h+var_110], rcx
/*140a2f773*/  mov [rbp+580h+var_F8], rax
/*140a2f77a*/  call nullsub_1
/*140a2f77f*/  mov edx, 1
/*140a2f784*/  mov rcx, rsi
/*140a2f787*/  call sub_140001650
/*140a2f78c*/  test rax, rax
/*140a2f78f*/  jz loc_140A313DB
/*140a2f795*/  mov rcx, rax
/*140a2f798*/  mov rdx, [rbp+580h+var_110]
/*140a2f79f*/  mov r8, rsi
/*140a2f7a2*/  mov [rbp+580h+var_110], rax
/*140a2f7a9*/  call sub_141684120
/*140a2f7ae*/  mov qword ptr [rbp+580h+var_3A0], rsi
/*140a2f7b5*/  mov rax, [rbp+580h+var_110]
/*140a2f7bc*/  mov qword ptr [rbp+580h+var_3A0+8], rax
/*140a2f7c3*/  mov [rbp+580h+var_390], rsi
/*140a2f7ca*/  mov rax, [rbp+580h+var_F8]
/*140a2f7d1*/ loc_140A2F7D1: mov rcx, [rax+10h]
/*140a2f7d5*/  mov rax, [rax+18h]
/*140a2f7d9*/  shl rax, 5
/*140a2f7dd*/  add rax, rcx
/*140a2f7e0*/  mov [rbp+580h+var_F8], rax
/*140a2f7e7*/ loc_140A2F7E7: cmp rcx, [rbp+580h+var_F8]
/*140a2f7ee*/  jz loc_140A2FD52
/*140a2f7f4*/ loc_140A2F7F4: mov rsi, rcx
/*140a2f7f7*/  mov edx, 4
/*140a2f7fc*/  lea rcx, aName_7; "name"
/*140a2f803*/  mov r8, rsi
/*140a2f806*/  call sub_141433D50
/*140a2f80b*/  nop
/*140a2f80c*/  lea rcx, [rsi+20h]
/*140a2f810*/  test rax, rax
/*140a2f813*/  jz short loc_140A2F7E7
/*140a2f815*/  cmp byte ptr [rax], 3
/*140a2f818*/  jnz short loc_140A2F7E7
/*140a2f81a*/  mov [rbp+580h+var_368], rcx
/*140a2f821*/  mov rdx, [rax+10h]
/*140a2f825*/  mov rcx, [rax+18h]
/*140a2f829*/  mov qword ptr [rbp+580h+var_430], rdx
/*140a2f830*/  mov qword ptr [rbp+580h+var_430+8], rcx
/*140a2f837*/  mov r8, [rbp+580h+var_390]
/*140a2f83e*/  test r8, r8
/*140a2f841*/  jz loc_140A2F8EB
/*140a2f847*/  cmp rcx, r8
/*140a2f84a*/  jb short loc_140A2F87F
/*140a2f84c*/  mov [rbp+580h+var_110], rcx
/*140a2f853*/  mov rcx, qword ptr [rbp+580h+var_3A0+8]
/*140a2f85a*/  mov [rbp+580h+var_2B8], rdx
/*140a2f861*/  mov rdx, [rbp+580h+var_2B8]
/*140a2f868*/  call sub_1416847B0
/*140a2f86d*/  mov rdx, [rbp+580h+var_2B8]
/*140a2f874*/  mov rcx, [rbp+580h+var_110]
/*140a2f87b*/  test eax, eax
/*140a2f87d*/  jz short loc_140A2F8EB
/*140a2f87f*/ loc_140A2F87F: lea rax, [rbp+580h+var_3A0]
/*140a2f886*/  mov qword ptr [rbp+580h+var_180], rax
/*140a2f88d*/  lea rax, sub_1400015F0
/*140a2f894*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a2f89b*/  lea rax, [rbp+580h+var_430]
/*140a2f8a2*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2f8a9*/  lea rax, sub_14041F680
/*140a2f8b0*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a2f8b7*/  lea rcx, [rbp+580h+var_260]
/*140a2f8be*/  lea rdx, unk_1417A4F77
/*140a2f8c5*/  lea r8, [rbp+580h+var_180]
/*140a2f8cc*/  call sub_14149C0F0
/*140a2f8d1*/  nop
/*140a2f8d2*/ loc_140A2F8D2: movdqu xmm0, [rbp+580h+var_260]
/*140a2f8da*/  movdqa [rbp+580h+var_310], xmm0
/*140a2f8e2*/  mov rax, qword ptr [rbp+580h+var_250]
/*140a2f8e9*/  jmp short loc_140A2F96A
/*140a2f8eb*/ loc_140A2F8EB: test rcx, rcx
/*140a2f8ee*/  js loc_140A3112A
/*140a2f8f4*/  mov [rbp+580h+var_2B8], rdx
/*140a2f8fb*/  mov [rbp+580h+var_110], rcx
/*140a2f902*/  jz short loc_140A2F942
/*140a2f904*/  call nullsub_1
/*140a2f909*/  mov edx, 1
/*140a2f90e*/  mov rcx, [rbp+580h+var_110]
/*140a2f915*/  call sub_140001650
/*140a2f91a*/  test rax, rax
/*140a2f91d*/  jz loc_140A3140D
/*140a2f923*/  mov rcx, rax
/*140a2f926*/  mov [rbp+580h+var_340], rax
/*140a2f92d*/  mov rdx, [rbp+580h+var_2B8]
/*140a2f934*/  mov r8, [rbp+580h+var_110]
/*140a2f93b*/  call sub_141684120
/*140a2f940*/  jmp short loc_140A2F94E
/*140a2f942*/ loc_140A2F942: mov eax, 1
/*140a2f947*/  mov [rbp+580h+var_340], rax
/*140a2f94e*/ loc_140A2F94E: mov rax, [rbp+580h+var_110]
/*140a2f955*/  mov qword ptr [rbp+580h+var_310], rax
/*140a2f95c*/  mov rcx, [rbp+580h+var_340]
/*140a2f963*/  mov qword ptr [rbp+580h+var_310+8], rcx
/*140a2f96a*/ loc_140A2F96A: mov [rbp+580h+var_300], rax
/*140a2f971*/  mov rax, qword ptr [rbp+580h+var_430]
/*140a2f978*/  mov [rbp+580h+var_2B8], rax
/*140a2f97f*/  mov r9, qword ptr [rbp+580h+var_430+8]
/*140a2f986*/  cmp qword ptr [rbp+580h+var_1B0+8], 0
/*140a2f98e*/  mov [rbp+580h+var_110], r9
/*140a2f995*/  jz loc_140A2FAD3
/*140a2f99b*/  lea rcx, [rbp+580h+var_1A0]
/*140a2f9a2*/  mov rdx, [rbp+580h+var_2B8]
/*140a2f9a9*/  mov r8, r9
/*140a2f9ac*/  call sub_1403795A0
/*140a2f9b1*/  mov rcx, rax
/*140a2f9b4*/  shr rcx, 39h
/*140a2f9b8*/  mov rdx, qword ptr [rbp+580h+var_1C0]
/*140a2f9bf*/  mov r8, qword ptr [rbp+580h+var_1C0+8]
/*140a2f9c6*/  movd xmm0, ecx
/*140a2f9ca*/  punpcklbw xmm0, xmm0
/*140a2f9ce*/  pshuflw xmm0, xmm0, 0
/*140a2f9d3*/  pshufd xmm11, xmm0, 44h ; 'D'
/*140a2f9d9*/  mov [rbp+580h+var_338], 0
/*140a2f9e4*/ loc_140A2F9E4: and rax, r8
/*140a2f9e7*/  movdqu xmm12, xmmword ptr [rdx+rax]
/*140a2f9ed*/  movdqa xmm0, xmm12
/*140a2f9f2*/  pcmpeqb xmm0, xmm11
/*140a2f9f7*/  pmovmskb ecx, xmm0
/*140a2f9fb*/  test ecx, ecx
/*140a2f9fd*/  jz loc_140A2FA8F
/*140a2fa03*/  mov [rbp+580h+var_418], rax
/*140a2fa0a*/  mov qword ptr [rbp+580h+var_380+8], rdx
/*140a2fa11*/  mov [rbp+580h+var_4A0], r8
/*140a2fa18*/ loc_140A2FA18: mov qword ptr [rbp+580h+var_380], rcx
/*140a2fa1f*/  tzcnt ecx, ecx
/*140a2fa23*/  add rcx, rax
/*140a2fa26*/  and rcx, r8
/*140a2fa29*/  shl rcx, 5
/*140a2fa2d*/  mov rax, rdx
/*140a2fa30*/  sub rax, rcx
/*140a2fa33*/  mov r8, [rbp+580h+var_110]
/*140a2fa3a*/  cmp r8, [rax-10h]
/*140a2fa3e*/  jnz short loc_140A2FA69
/*140a2fa40*/  mov rdx, [rax-18h]
/*140a2fa44*/  mov rcx, [rbp+580h+var_2B8]
/*140a2fa4b*/  mov [rbp+580h+var_3A8], rax
/*140a2fa52*/  call sub_1416847B0
/*140a2fa57*/  mov r9, [rbp+580h+var_110]
/*140a2fa5e*/  test eax, eax
/*140a2fa60*/  mov rax, [rbp+580h+var_3A8]
/*140a2fa67*/  jz short loc_140A2FAC8
/*140a2fa69*/ loc_140A2FA69: mov rcx, qword ptr [rbp+580h+var_380]
/*140a2fa70*/  lea eax, [rcx-1]
/*140a2fa73*/  and ax, cx
/*140a2fa76*/  mov ecx, eax
/*140a2fa78*/  mov rax, [rbp+580h+var_418]
/*140a2fa7f*/  mov rdx, qword ptr [rbp+580h+var_380+8]
/*140a2fa86*/  mov r8, [rbp+580h+var_4A0]
/*140a2fa8d*/  jnz short loc_140A2FA18
/*140a2fa8f*/ loc_140A2FA8F: mov rcx, rax
/*140a2fa92*/  pcmpeqb xmm12, xmm10
/*140a2fa97*/  pmovmskb eax, xmm12
/*140a2fa9c*/  test eax, eax
/*140a2fa9e*/  mov r9, [rbp+580h+var_110]
/*140a2faa5*/  jnz short loc_140A2FAD3
/*140a2faa7*/  mov rax, rcx
/*140a2faaa*/  mov rcx, [rbp+580h+var_338]
/*140a2fab1*/  add rax, rcx
/*140a2fab4*/  add rax, 10h
/*140a2fab8*/  add rcx, 10h
/*140a2fabc*/  mov [rbp+580h+var_338], rcx
/*140a2fac3*/  jmp loc_140A2F9E4
/*140a2fac8*/ loc_140A2FAC8: cmp qword ptr [rax-8], 2
/*140a2facd*/  jnb loc_140A2FB73
/*140a2fad3*/ loc_140A2FAD3: mov r8, [rbp+580h+var_390]
/*140a2fada*/  test r8, r8
/*140a2fadd*/  jz loc_140A2FB73
/*140a2fae3*/  cmp r9, r8
/*140a2fae6*/  jnb short loc_140A2FAFB
/*140a2fae8*/  test r9, r9
/*140a2faeb*/  jnz short loc_140A2FB12
/*140a2faed*/  mov eax, 1
/*140a2faf2*/  mov [rbp+580h+var_3A8], rax
/*140a2faf9*/  jmp short loc_140A2FB4E
/*140a2fafb*/ loc_140A2FAFB: mov rcx, qword ptr [rbp+580h+var_3A0+8]
/*140a2fb02*/  mov rdx, [rbp+580h+var_2B8]
/*140a2fb09*/  call sub_1416847B0
/*140a2fb0e*/  test eax, eax
/*140a2fb10*/  jz short loc_140A2FB73
/*140a2fb12*/ loc_140A2FB12: call nullsub_1
/*140a2fb17*/  mov edx, 1
/*140a2fb1c*/  mov rcx, [rbp+580h+var_110]
/*140a2fb23*/  call sub_140001650
/*140a2fb28*/  test rax, rax
/*140a2fb2b*/  jz loc_140A313F2
/*140a2fb31*/  mov [rbp+580h+var_3A8], rax
/*140a2fb38*/  mov rcx, rax
/*140a2fb3b*/  mov rdx, [rbp+580h+var_2B8]
/*140a2fb42*/  mov r8, [rbp+580h+var_110]
/*140a2fb49*/  call sub_141684120
/*140a2fb4e*/ loc_140A2FB4E: mov rax, [rbp+580h+var_110]
/*140a2fb55*/  mov qword ptr [rbp+580h+var_330], rax
/*140a2fb5c*/  mov rcx, [rbp+580h+var_3A8]
/*140a2fb63*/  mov qword ptr [rbp+580h+var_330+8], rcx
/*140a2fb6a*/  mov qword ptr [rbp+580h+var_330+10h], rax
/*140a2fb71*/  jmp short loc_140A2FB95
/*140a2fb73*/ loc_140A2FB73: mov [rbp+580h+var_276], 1
/*140a2fb7a*/ loc_140A2FB7A: lea rcx, [rbp+580h+var_330]
/*140a2fb81*/  lea rdx, [rbp+580h+var_310]
/*140a2fb88*/  call sub_14149C500
/*140a2fb8d*/  nop
/*140a2fb8e*/  mov rax, qword ptr [rbp+580h+var_330+10h]
/*140a2fb95*/ loc_140A2FB95: mov [rbp+580h+var_110], rax
/*140a2fb9c*/  cmp rax, [rbp+580h+var_300]
/*140a2fba3*/  jnz short loc_140A2FBCE
/*140a2fba5*/  mov rdx, qword ptr [rbp+580h+var_310+8]
/*140a2fbac*/  mov rcx, qword ptr [rbp+580h+var_330+8]
/*140a2fbb3*/  mov [rbp+580h+var_2B8], rcx
/*140a2fbba*/  mov r8, [rbp+580h+var_110]
/*140a2fbc1*/  call sub_1416847B0
/*140a2fbc6*/  test eax, eax
/*140a2fbc8*/  jz loc_140A2FD3D
/*140a2fbce*/ loc_140A2FBCE: mov [rbp+580h+var_277], 1
/*140a2fbd5*/ loc_140A2FBD5: lea rcx, [rbp+580h+var_260]
/*140a2fbdc*/  lea rdx, [rbp+580h+var_330]
/*140a2fbe3*/  call sub_14149C500
/*140a2fbe8*/  nop
/*140a2fbe9*/  mov rax, [rbp+580h+var_300]
/*140a2fbf0*/  mov qword ptr [rbp+580h+var_170], rax
/*140a2fbf7*/  movdqa xmm0, [rbp+580h+var_310]
/*140a2fbff*/  movdqa [rbp+580h+var_180], xmm0
/*140a2fc07*/  mov [rbp+580h+var_277], 0
/*140a2fc0e*/  lea rcx, [rbp+580h+var_240]
/*140a2fc15*/  lea rdx, [rbp+580h+var_200]
/*140a2fc1c*/  lea r8, [rbp+580h+var_260]
/*140a2fc23*/  lea r9, [rbp+580h+var_180]
/*140a2fc2a*/  call sub_140470E80
/*140a2fc2f*/  nop
/*140a2fc30*/  mov rdx, qword ptr [rbp+580h+var_240]
/*140a2fc37*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*140a2fc3b*/  jz short loc_140A2FC64
/*140a2fc3d*/  test rdx, rdx
/*140a2fc40*/  mov r9, [rbp+580h+var_110]
/*140a2fc47*/  jz short loc_140A2FC6B
/*140a2fc49*/  mov rcx, qword ptr [rbp+580h+var_240+8]
/*140a2fc50*/  mov r8d, 1
/*140a2fc56*/  call sub_140001660
/*140a2fc5b*/  mov r9, qword ptr [rbp+580h+var_330+10h]
/*140a2fc62*/  jmp short loc_140A2FC6B
/*140a2fc64*/ loc_140A2FC64: mov r9, [rbp+580h+var_110]
/*140a2fc6b*/ loc_140A2FC6B: mov r8, qword ptr [rbp+580h+var_330+8]
/*140a2fc72*/  xor eax, eax
/*140a2fc74*/ loc_140A2FC74: mov dword ptr [rbp+580h+var_110], eax
/*140a2fc7a*/  mov [rbp+580h+var_277], al
/*140a2fc80*/  lea rcx, [rbp+580h+var_518]
/*140a2fc84*/  mov rdx, rsi
/*140a2fc87*/  mov [rbp+580h+var_2B8], r8
/*140a2fc8e*/  call sub_140A0EC30
/*140a2fc93*/  nop
/*140a2fc94*/  cmp byte ptr [rbp+580h+var_518], 0FFh
/*140a2fc98*/  jz short loc_140A2FCE0
/*140a2fc9a*/  mov rsi, [rbp+580h+var_3E8]
/*140a2fca1*/  cmp rsi, qword ptr [rbp+580h+var_3F8]
/*140a2fca8*/  jnz short loc_140A2FCB3
/*140a2fcaa*/ loc_140A2FCAA: mov rcx, r14
/*140a2fcad*/  call sub_1416890A0
/*140a2fcb2*/  nop
/*140a2fcb3*/ loc_140A2FCB3: mov rax, qword ptr [rbp+580h+var_3F8+8]
/*140a2fcba*/  mov rcx, rsi
/*140a2fcbd*/  shl rcx, 5
/*140a2fcc1*/  movdqu xmm0, [rbp+580h+var_518]
/*140a2fcc6*/  movdqu xmm1, [rbp+580h+var_508]
/*140a2fccb*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a2fcd1*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a2fcd6*/  inc rsi
/*140a2fcd9*/  mov [rbp+580h+var_3E8], rsi
/*140a2fce0*/ loc_140A2FCE0: mov rdx, qword ptr [rbp+580h+var_330]
/*140a2fce7*/  test rdx, rdx
/*140a2fcea*/  jz short loc_140A2FCFE
/*140a2fcec*/  mov r8d, 1
/*140a2fcf2*/  mov rcx, [rbp+580h+var_2B8]
/*140a2fcf9*/  call sub_140001660
/*140a2fcfe*/ loc_140A2FCFE: cmp byte ptr [rbp+580h+var_110], 0
/*140a2fd05*/  jz short loc_140A2FD31
/*140a2fd07*/  mov rdx, qword ptr [rbp+580h+var_310]
/*140a2fd0e*/  test rdx, rdx
/*140a2fd11*/  jz short loc_140A2FD31
/*140a2fd13*/  mov rcx, qword ptr [rbp+580h+var_310+8]
/*140a2fd1a*/  mov r8d, 1
/*140a2fd20*/  call sub_140001660
/*140a2fd25*/  mov rcx, [rbp+580h+var_368]
/*140a2fd2c*/  jmp loc_140A2F7E7
/*140a2fd31*/ loc_140A2FD31: mov rcx, [rbp+580h+var_368]
/*140a2fd38*/  jmp loc_140A2F7E7
/*140a2fd3d*/ loc_140A2FD3D: mov al, 1
/*140a2fd3f*/  mov r9, [rbp+580h+var_110]
/*140a2fd46*/  mov r8, [rbp+580h+var_2B8]
/*140a2fd4d*/  jmp loc_140A2FC74
/*140a2fd52*/ loc_140A2FD52: mov rdx, qword ptr [rbp+580h+var_3A0]
/*140a2fd59*/  test rdx, rdx
/*140a2fd5c*/  jz loc_140A2F4BD
/*140a2fd62*/  mov rcx, qword ptr [rbp+580h+var_3A0+8]
/*140a2fd69*/  mov r8d, 1
/*140a2fd6f*/  call sub_140001660
/*140a2fd74*/  jmp loc_140A2F4BD
/*140a2fd79*/ loc_140A2FD79: mov rax, [rbp+580h+var_3E8]
/*140a2fd80*/  mov [rbp+580h+var_420], rax
/*140a2fd87*/  movdqu xmm0, [rbp+580h+var_3F8]
/*140a2fd8f*/  movdqa [rbp+580h+var_430], xmm0
/*140a2fd97*/  mov [rbp+580h+var_275], 1
/*140a2fd9e*/ loc_140A2FD9E: call sub_141470CD0
/*140a2fda3*/  nop
/*140a2fda4*/  cmp byte ptr [rax+10h], 1
/*140a2fda8*/  jnz loc_140A3118A
/*140a2fdae*/  mov rcx, [rax]
/*140a2fdb1*/  mov rdx, [rax+8]
/*140a2fdb5*/ loc_140A2FDB5: lea r8, [rcx+1]
/*140a2fdb9*/  mov [rax], r8
/*140a2fdbc*/  movdqa [rbp+580h+var_170], xmm6
/*140a2fdc4*/  movdqa [rbp+580h+var_180], xmm7
/*140a2fdcc*/  mov [rbp+580h+var_160], rcx
/*140a2fdd3*/  mov qword ptr [rbp+580h+var_158], rdx
/*140a2fdda*/  mov rsi, [rbp+580h+var_420]
/*140a2fde1*/  mov r13, rsi
/*140a2fde4*/  shl r13, 5
/*140a2fde8*/  test rsi, rsi
/*140a2fdeb*/  jz loc_140A2FEC1
/*140a2fdf1*/  call nullsub_1
/*140a2fdf6*/  mov edx, 8
/*140a2fdfb*/  mov rcx, r13
/*140a2fdfe*/  call sub_140001650
/*140a2fe03*/  test rax, rax
/*140a2fe06*/  jnz loc_140A2FEC6
/*140a2fe0c*/  mov [rbp+580h+var_2CA], 1
/*140a2fe13*/ loc_140A2FE13: mov ecx, 8
/*140a2fe18*/  mov rdx, r13
/*140a2fe1b*/  call sub_1416C2D4B
/*140a2fe21*/  jmp loc_140A3143D
/*140a2fe26*/ loc_140A2FE26: lea rcx, aType_8; "type"
/*140a2fe2d*/  mov edx, 4
/*140a2fe32*/  mov r8, rsi
/*140a2fe35*/  call sub_141433D50
/*140a2fe3a*/  nop
/*140a2fe3b*/  test rax, rax
/*140a2fe3e*/  jz loc_140A302CA
/*140a2fe44*/  cmp byte ptr [rax], 3
/*140a2fe47*/  jnz loc_140A302CA
/*140a2fe4d*/  cmp qword ptr [rax+18h], 8
/*140a2fe52*/  jnz loc_140A302CA
/*140a2fe58*/  mov rax, [rax+10h]
/*140a2fe5c*/  mov rcx, 6E6F6974636E7566h
/*140a2fe66*/  cmp [rax], rcx
/*140a2fe69*/  jnz loc_140A302CA
/*140a2fe6f*/  lea rcx, aFunction_0; "function"
/*140a2fe76*/  mov edx, 8
/*140a2fe7b*/  mov r8, rsi
/*140a2fe7e*/  call sub_141433D50
/*140a2fe83*/  nop
/*140a2fe84*/  test rax, rax
/*140a2fe87*/  jz loc_140A309DB
/*140a2fe8d*/  lea rcx, aName_7; "name"
/*140a2fe94*/  mov edx, 4
/*140a2fe99*/  mov r8, rax
/*140a2fe9c*/  call sub_141433D50
/*140a2fea1*/  nop
/*140a2fea2*/  test rax, rax
/*140a2fea5*/  jz loc_140A309DB
/*140a2feab*/  cmp byte ptr [rax], 3
/*140a2feae*/  jnz loc_140A309DB
/*140a2feb4*/  mov rcx, [rax+10h]
/*140a2feb8*/  mov rdx, [rax+18h]
/*140a2febc*/  jmp loc_140A309DD
/*140a2fec1*/ loc_140A2FEC1: mov eax, 8
/*140a2fec6*/ loc_140A2FEC6: mov qword ptr [rbp+580h+var_3A0], rsi
/*140a2fecd*/  mov qword ptr [rbp+580h+var_3A0+8], rax
/*140a2fed4*/  mov [rbp+580h+var_390], 0
/*140a2fedf*/  mov rax, qword ptr [rbp+580h+var_430]
/*140a2fee6*/  mov rcx, qword ptr [rbp+580h+var_430+8]
/*140a2feed*/  add r13, rcx
/*140a2fef0*/  mov qword ptr [rbp+580h+var_240], rcx
/*140a2fef7*/  mov qword ptr [rbp+580h+var_240+8], rcx
/*140a2fefe*/  mov [rbp+580h+var_2B8], rax
/*140a2ff05*/  mov [rbp+580h+var_230], rax
/*140a2ff0c*/  mov [rbp+580h+var_228], r13
/*140a2ff13*/  lea rdi, [rbp+580h+var_260+1]
/*140a2ff1a*/  lea rsi, aName_7; "name"
/*140a2ff21*/  lea rbx, [rbp+580h+var_260]
/*140a2ff28*/  lea r14, [rbp+580h+var_3A0]
/*140a2ff2f*/  mov [rbp+580h+var_368], rcx
/*140a2ff36*/  mov rax, rcx
/*140a2ff39*/  mov r15, r13
/*140a2ff3c*/  cmp rax, r13
/*140a2ff3f*/  jz loc_140A30606
/*140a2ff45*/ loc_140A2FF45: lea rcx, [rax+20h]
/*140a2ff49*/  mov r12, rcx
/*140a2ff4c*/  mov qword ptr [rbp+580h+var_240+8], rcx
/*140a2ff53*/  movzx ecx, byte ptr [rax]
/*140a2ff56*/  movups xmm0, xmmword ptr [rax+10h]
/*140a2ff5a*/  movups xmmword ptr [rbp+580h+var_330+0Fh], xmm0
/*140a2ff61*/  movups xmm0, xmmword ptr [rax+1]
/*140a2ff65*/  movaps xmmword ptr [rbp+580h+var_330], xmm0
/*140a2ff6c*/  cmp cl, 0FFh
/*140a2ff6f*/  jz loc_140A3060B
/*140a2ff75*/  mov byte ptr [rbp+580h+var_260], cl
/*140a2ff7b*/  movups xmm0, xmmword ptr [rbp+580h+var_330+0Fh]
/*140a2ff82*/  movups xmmword ptr [rdi+0Fh], xmm0
/*140a2ff86*/  movdqa xmm0, xmmword ptr [rbp+580h+var_330]
/*140a2ff8e*/  movdqu xmmword ptr [rdi], xmm0
/*140a2ff92*/  mov [rbp+580h+var_213], 1
/*140a2ff99*/ loc_140A2FF99: mov edx, 4
/*140a2ff9e*/  mov rcx, rsi
/*140a2ffa1*/  mov r8, rbx
/*140a2ffa4*/  call sub_141433D50
/*140a2ffa9*/  nop
/*140a2ffaa*/ loc_140A2FFAA: test rax, rax
/*140a2ffad*/  jz loc_140A30074
/*140a2ffb3*/  cmp byte ptr [rax], 3
/*140a2ffb6*/  jnz loc_140A30074
/*140a2ffbc*/  mov rcx, [rax+18h]
/*140a2ffc0*/  test rcx, rcx
/*140a2ffc3*/  js loc_140A300FB
/*140a2ffc9*/  mov [rbp+580h+var_110], rcx
/*140a2ffd0*/  jz loc_140A30074
/*140a2ffd6*/  mov r13, [rax+10h]
/*140a2ffda*/  call nullsub_1
/*140a2ffdf*/  mov edx, 1
/*140a2ffe4*/  mov rcx, [rbp+580h+var_110]
/*140a2ffeb*/  call sub_140001650
/*140a2fff0*/  mov [rbp+580h+var_F8], rax
/*140a2fff7*/  test rax, rax
/*140a2fffa*/  jz loc_140A31425
/*140a30000*/  mov rcx, [rbp+580h+var_F8]
/*140a30007*/  mov rdx, r13
/*140a3000a*/  mov r13, [rbp+580h+var_110]
/*140a30011*/  mov r8, r13
/*140a30014*/  call sub_141684120
/*140a30019*/  mov qword ptr [rbp+580h+var_310], r13
/*140a30020*/  mov rax, [rbp+580h+var_F8]
/*140a30027*/  mov qword ptr [rbp+580h+var_310+8], rax
/*140a3002e*/  mov [rbp+580h+var_300], r13
/*140a30035*/  mov [rbp+580h+var_1CA], 0
/*140a3003c*/  mov [rbp+580h+var_408], rax
/*140a30043*/  mov [rbp+580h+var_410], r13
/*140a3004a*/  mov [rbp+580h+var_1CB], 1
/*140a30051*/ loc_140A30051: lea rcx, [rbp+580h+var_180]
/*140a30058*/  lea rdx, [rbp+580h+var_310]
/*140a3005f*/  call sub_140474440
/*140a30064*/  nop
/*140a30065*/  test al, al
/*140a30067*/  jz short loc_140A300E0
/*140a30069*/ loc_140A30069: mov rcx, rbx
/*140a3006c*/  call sub_1400104F0
/*140a30071*/  nop
/*140a30072*/  jmp short loc_140A300CC
/*140a30074*/ loc_140A30074: mov r13, [rbp+580h+var_390]
/*140a3007b*/  mov eax, 1
/*140a30080*/  mov [rbp+580h+var_F8], rax
/*140a30087*/  cmp r13, qword ptr [rbp+580h+var_3A0]
/*140a3008e*/  jnz short loc_140A30099
/*140a30090*/ loc_140A30090: mov rcx, r14
/*140a30093*/  call sub_1416890A0
/*140a30098*/  nop
/*140a30099*/ loc_140A30099: mov rax, qword ptr [rbp+580h+var_3A0+8]
/*140a300a0*/  mov rcx, r13
/*140a300a3*/  shl rcx, 5
/*140a300a7*/  movdqu xmm0, [rbp+580h+var_260]
/*140a300af*/  movdqu xmm1, [rbp+580h+var_250]
/*140a300b7*/  movdqu xmmword ptr [rax+rcx+10h], xmm1
/*140a300bd*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a300c2*/  inc r13
/*140a300c5*/  mov [rbp+580h+var_390], r13
/*140a300cc*/ loc_140A300CC: mov rax, r12
/*140a300cf*/  mov r13, r15
/*140a300d2*/  cmp rax, r13
/*140a300d5*/  jnz loc_140A2FF45
/*140a300db*/  jmp loc_140A30606
/*140a300e0*/ loc_140A300E0: mov r13, [rbp+580h+var_390]
/*140a300e7*/  cmp r13, qword ptr [rbp+580h+var_3A0]
/*140a300ee*/  jnz short loc_140A30099
/*140a300f0*/ loc_140A300F0: mov rcx, r14
/*140a300f3*/  call sub_1416890A0
/*140a300f8*/  nop
/*140a300f9*/  jmp short loc_140A30099
/*140a300fb*/ loc_140A300FB: xor ecx, ecx
/*140a300fd*/ loc_140A300FD: mov [rbp+580h+var_213], 1
/*140a30104*/ loc_140A30104: mov rdx, [rbp+580h+var_F8]
/*140a3010b*/  call sub_1416C2D4B
/*140a30111*/  jmp loc_140A3143D
/*140a30116*/ loc_140A30116: cmp dword ptr [rax], 6F747561h
/*140a3011c*/  jnz loc_140A302CA
/*140a30122*/  mov qword ptr [rbp+580h+var_260], 0
/*140a3012d*/  mov qword ptr [rbp+580h+var_250], 0
/*140a30138*/  call nullsub_1
/*140a3013d*/  mov ecx, 4
/*140a30142*/  mov edx, 1
/*140a30147*/  call sub_140001650
/*140a3014c*/  test rax, rax
/*140a3014f*/  jz loc_140A312F4
/*140a30155*/  mov dword ptr [rax], 65707974h
/*140a3015b*/  mov qword ptr [rbp+580h+var_200], 4
/*140a30166*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a3016d*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a30178*/  call nullsub_1
/*140a3017d*/  mov ecx, 4
/*140a30182*/  mov edx, 1
/*140a30187*/  call sub_140001650
/*140a3018c*/  test rax, rax
/*140a3018f*/  mov [rbp+580h+var_188], rax
/*140a30196*/  jz loc_140A3131E
/*140a3019c*/  mov dword ptr [rax], 6F747561h
/*140a301a2*/  mov byte ptr [rbp+580h+var_180], 3
/*140a301a9*/  mov qword ptr [rbp+580h+var_180+8], 4
/*140a301b4*/  mov qword ptr [rbp+580h+var_170], rax
/*140a301bb*/  mov qword ptr [rbp+580h+var_170+8], 4
/*140a301c6*/ loc_140A301C6: lea rcx, [rbp+580h+var_1C0]
/*140a301cd*/  lea rdx, [rbp+580h+var_260]
/*140a301d4*/  lea r8, [rbp+580h+var_200]
/*140a301db*/  lea r9, [rbp+580h+var_180]
/*140a301e2*/  call sub_140307860
/*140a301e7*/  nop
/*140a301e8*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a301ef*/  jz short loc_140A301FE
/*140a301f1*/ loc_140A301F1: lea rcx, [rbp+580h+var_1C0]
/*140a301f8*/  call sub_1400104F0
/*140a301fd*/  nop
/*140a301fe*/ loc_140A301FE: mov rax, qword ptr [rbp+580h+var_250]
/*140a30205*/  movups xmm0, [rbp+580h+var_260]
/*140a3020c*/  movups [rbp+580h+var_180+7], xmm0
/*140a30213*/  mov qword ptr [rbp+580h+var_170+7], rax
/*140a3021a*/  movdqu xmm0, [rbp+580h+var_180]
/*140a30222*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a3022a*/  mov rax, qword ptr [rbp+580h+var_180+0Fh]
/*140a30231*/  mov qword ptr [rbp+580h+var_1C0+0Fh], rax
/*140a30238*/  mov rax, qword ptr [rbp+580h+var_170+7]
/*140a3023f*/  mov qword ptr [rbp+580h+var_1B0+7], rax
/*140a30246*/  mov bl, 5
/*140a30248*/ loc_140A30248: mov rax, qword ptr [rbp+580h+var_1C0+0Fh]
/*140a3024f*/  mov qword ptr [rbp+580h+var_170], rax
/*140a30256*/  mov rax, qword ptr [rbp+580h+var_1B0+7]
/*140a3025d*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a30264*/  movdqa xmm0, [rbp+580h+var_1C0]
/*140a3026c*/  movdqu [rbp+580h+var_180+1], xmm0
/*140a30274*/  mov byte ptr [rbp+580h+var_180], bl
/*140a3027a*/  mov [rbp+580h+var_2CC], 1
/*140a30281*/ loc_140A30281: lea rcx, aToolChoice; "tool_choice"
/*140a30288*/  lea r8, [rbp+580h+var_2F8]
/*140a3028f*/  mov edx, 0Bh
/*140a30294*/  call sub_141433E50
/*140a30299*/  nop
/*140a3029a*/ loc_140A3029A: mov [rbp+580h+var_188], rax
/*140a302a1*/  mov rcx, rax
/*140a302a4*/  call sub_1400104F0
/*140a302a9*/  nop
/*140a302aa*/  movdqu xmm0, [rbp+580h+var_180]
/*140a302b2*/  movdqu xmm1, [rbp+580h+var_170]
/*140a302ba*/  mov rax, [rbp+580h+var_188]
/*140a302c1*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a302c6*/  movdqu xmmword ptr [rax], xmm0
/*140a302ca*/ loc_140A302CA: test r14b, 1
/*140a302ce*/  jz loc_140A30430
/*140a302d4*/  lea rax, aYouHaveAWebSea_0; "You have a web_search tool available. U"...
/*140a302db*/  mov qword ptr [rbp+580h+var_200], rax
/*140a302e2*/  mov qword ptr [rbp+580h+var_200+8], 1CEh
/*140a302ed*/ loc_140A302ED: lea rcx, aSystem_0; "system"
/*140a302f4*/  lea r8, [rbp+580h+var_2F8]
/*140a302fb*/  mov edx, 6
/*140a30300*/  call sub_141433D50
/*140a30305*/  nop
/*140a30306*/  test rax, rax
/*140a30309*/  jz short loc_140A3035D
/*140a3030b*/  cmp byte ptr [rax], 3
/*140a3030e*/  jnz short loc_140A3035D
/*140a30310*/  movdqu xmm0, xmmword ptr [rax+10h]
/*140a30315*/  movdqu [rbp+580h+var_1C0], xmm0
/*140a3031d*/  mov qword ptr [rbp+580h+var_180], r13
/*140a30324*/  lea rax, sub_14041F680
/*140a3032b*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a30332*/  mov qword ptr [rbp+580h+var_170], r12
/*140a30339*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a30340*/  lea rdx, unk_1417A8846
/*140a30347*/  lea rcx, [rbp+580h+var_498]
/*140a3034e*/  lea r8, [rbp+580h+var_180]
/*140a30355*/  call sub_14149C0F0
/*140a3035a*/  nop
/*140a3035b*/ loc_140A3035B: jmp short loc_140A303AF
/*140a3035d*/ loc_140A3035D: call nullsub_1
/*140a30362*/  mov ecx, 1CEh
/*140a30367*/  mov edx, 1
/*140a3036c*/  call sub_140001650
/*140a30371*/  test rax, rax
/*140a30374*/  jz loc_140A31271
/*140a3037a*/  mov rsi, rax
/*140a3037d*/  lea rdx, aYouHaveAWebSea_0; "You have a web_search tool available. U"...
/*140a30384*/  mov r8d, 1CEh
/*140a3038a*/  mov rcx, rax
/*140a3038d*/  call sub_141684120
/*140a30392*/  mov [rbp+580h+var_498], 1CEh
/*140a3039d*/  mov qword ptr [rbp+580h+var_490], rsi
/*140a303a4*/  mov qword ptr [rbp+580h+var_490+8], 1CEh
/*140a303af*/ loc_140A303AF: mov rax, qword ptr [rbp+580h+var_490+8]
/*140a303b6*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a303bd*/  mov rax, [rbp+580h+var_498]
/*140a303c4*/  mov qword ptr [rbp+580h+var_180+8], rax
/*140a303cb*/  mov rax, qword ptr [rbp+580h+var_490]
/*140a303d2*/  mov qword ptr [rbp+580h+var_170], rax
/*140a303d9*/  mov byte ptr [rbp+580h+var_180], 3
/*140a303e0*/  mov [rbp+580h+var_2CD], 1
/*140a303e7*/ loc_140A303E7: lea rcx, aSystem_0; "system"
/*140a303ee*/  lea r8, [rbp+580h+var_2F8]
/*140a303f5*/  mov edx, 6
/*140a303fa*/  call sub_141433E50
/*140a303ff*/  nop
/*140a30400*/ loc_140A30400: mov [rbp+580h+var_188], rax
/*140a30407*/  mov rcx, rax
/*140a3040a*/  call sub_1400104F0
/*140a3040f*/  nop
/*140a30410*/  movdqu xmm0, [rbp+580h+var_180]
/*140a30418*/  movdqu xmm1, [rbp+580h+var_170]
/*140a30420*/  mov rax, [rbp+580h+var_188]
/*140a30427*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a3042c*/  movdqu xmmword ptr [rax], xmm0
/*140a30430*/ loc_140A30430: lea rcx, [rbp+580h+var_2F8]
/*140a30437*/  call sub_140A273E0
/*140a3043c*/  nop
/*140a3043d*/  lea rcx, aToolChoice; "tool_choice"
/*140a30444*/  lea r8, [rbp+580h+var_2F8]
/*140a3044b*/  mov edx, 0Bh
/*140a30450*/  call sub_141433D50
/*140a30455*/  nop
/*140a30456*/  mov esi, 1
/*140a3045b*/  test rax, rax
/*140a3045e*/  jz short loc_140A30489
/*140a30460*/  lea rcx, aType_8; "type"
/*140a30467*/  mov edx, 4
/*140a3046c*/  mov r8, rax
/*140a3046f*/  call sub_141433D50
/*140a30474*/  nop
/*140a30475*/  test rax, rax
/*140a30478*/  jz short loc_140A30489
/*140a3047a*/  cmp byte ptr [rax], 3
/*140a3047d*/  jnz short loc_140A30489
/*140a3047f*/  mov rsi, [rax+10h]
/*140a30483*/  mov rdx, [rax+18h]
/*140a30487*/  jmp short loc_140A3048B
/*140a30489*/ loc_140A30489: xor edx, edx
/*140a3048b*/ loc_140A3048B: mov rcx, rsi
/*140a3048e*/  call sub_14033BC10
/*140a30493*/  nop
/*140a30494*/  mov rbx, rdx
/*140a30497*/  test rdx, rdx
/*140a3049a*/  jns short loc_140A304AF
/*140a3049c*/  xor edi, edi
/*140a3049e*/ loc_140A3049E: mov rcx, rdi
/*140a304a1*/  mov rdx, rbx
/*140a304a4*/  call sub_1416C2D4B
/*140a304aa*/ loc_140A304AA: jmp loc_140A3143D
/*140a304af*/ loc_140A304AF: test rbx, rbx
/*140a304b2*/  jz loc_140A31505
/*140a304b8*/  mov rsi, rax
/*140a304bb*/  call nullsub_1
/*140a304c0*/  mov edi, 1
/*140a304c5*/  mov edx, 1
/*140a304ca*/  mov rcx, rbx
/*140a304cd*/  call sub_140001650
/*140a304d2*/  test rax, rax
/*140a304d5*/  jz short loc_140A3049E
/*140a304d7*/  mov r14, rax
/*140a304da*/  mov rcx, rax
/*140a304dd*/  mov rdx, rsi
/*140a304e0*/  mov r8, rbx
/*140a304e3*/  call sub_141684120
/*140a304e8*/  cmp rbx, 8
/*140a304ec*/  jnb short loc_140A304F5
/*140a304ee*/  xor eax, eax
/*140a304f0*/  jmp loc_140A3143F
/*140a304f5*/ loc_140A304F5: cmp rbx, 20h ; ' '
/*140a304f9*/  jnb short loc_140A30502
/*140a304fb*/  xor eax, eax
/*140a304fd*/  jmp loc_140A3059D
/*140a30502*/ loc_140A30502: mov rax, 7FFFFFFFFFFFFFE0h
/*140a3050c*/  and rax, rbx
/*140a3050f*/  xor ecx, ecx
/*140a30511*/  movdqa xmm0, cs:xmmword_141742460
/*140a30519*/  movdqa xmm1, cs:xmmword_1416C62F0
/*140a30521*/  movdqa xmm2, cs:xmmword_141742470
/*140a30529*/  nop dword ptr [rax+00000000h]
/*140a30530*/ loc_140A30530: movdqu xmm3, xmmword ptr [r14+rcx]
/*140a30536*/  movdqu xmm4, xmmword ptr [r14+rcx+10h]
/*140a3053d*/  movdqa xmm5, xmm3
/*140a30541*/  paddb xmm5, xmm0
/*140a30545*/  movdqa xmm6, xmm4
/*140a30549*/  paddb xmm6, xmm0
/*140a3054d*/  movdqa xmm7, xmm5
/*140a30551*/  pminub xmm7, xmm1
/*140a30555*/  pcmpeqb xmm7, xmm5
/*140a30559*/  pand xmm7, xmm2
/*140a3055d*/  movdqa xmm5, xmm6
/*140a30561*/  pminub xmm5, xmm1
/*140a30565*/  pcmpeqb xmm5, xmm6
/*140a30569*/  pand xmm5, xmm2
/*140a3056d*/  por xmm7, xmm3
/*140a30571*/  por xmm5, xmm4
/*140a30575*/  movdqu xmmword ptr [r14+rcx], xmm7
/*140a3057b*/  movdqu xmmword ptr [r14+rcx+10h], xmm5
/*140a30582*/  add rcx, 20h ; ' '
/*140a30586*/  cmp rax, rcx
/*140a30589*/  jnz short loc_140A30530
/*140a3058b*/  cmp rbx, rax
/*140a3058e*/  jz loc_140A3145E
/*140a30594*/  test bl, 18h
/*140a30597*/  jz loc_140A3143F
/*140a3059d*/ loc_140A3059D: mov rcx, rax
/*140a305a0*/  mov rax, 7FFFFFFFFFFFFFF8h
/*140a305aa*/  and rax, rbx
/*140a305ad*/  movdqa xmm0, cs:xmmword_141742480
/*140a305b5*/  movdqa xmm1, cs:xmmword_141742490
/*140a305bd*/  movdqa xmm2, cs:xmmword_1417424A0
/*140a305c5*/  nop word ptr [rax+rax+00000000h]
/*140a305d0*/ loc_140A305D0: movq xmm3, qword ptr [r14+rcx]
/*140a305d6*/  movdqa xmm4, xmm3
/*140a305da*/  paddb xmm4, xmm0
/*140a305de*/  movdqa xmm5, xmm4
/*140a305e2*/  pmaxub xmm5, xmm1
/*140a305e6*/  pcmpeqb xmm5, xmm4
/*140a305ea*/  pandn xmm5, xmm2
/*140a305ee*/  por xmm5, xmm3
/*140a305f2*/  movq qword ptr [r14+rcx], xmm5
/*140a305f8*/  add rcx, 8
/*140a305fc*/  cmp rax, rcx
/*140a305ff*/  jnz short loc_140A305D0
/*140a30601*/  jmp loc_140A31459
/*140a30606*/ loc_140A30606: mov rcx, r13
/*140a30609*/  jmp short loc_140A3060E
/*140a3060b*/ loc_140A3060B: mov rcx, r12
/*140a3060e*/ loc_140A3060E: sub r13, rcx
/*140a30611*/  shr r13, 5
/*140a30615*/  mov [rbp+580h+var_110], r13
/*140a3061c*/  mov [rbp+580h+var_F8], 0
/*140a30627*/  mov [rbp+580h+var_340], rcx
/*140a3062e*/  lea r12, [rbp+580h+var_200]
/*140a30635*/  mov r14d, dword ptr [rbp+580h+var_268]
/*140a3063c*/  nop dword ptr [rax+00h]
/*140a30640*/ loc_140A30640: mov rax, [rbp+580h+var_F8]
/*140a30647*/  cmp [rbp+580h+var_110], rax
/*140a3064e*/  jz short loc_140A30669
/*140a30650*/  inc rax
/*140a30653*/  mov [rbp+580h+var_F8], rax
/*140a3065a*/  lea rsi, [rcx+20h]
/*140a3065e*/ loc_140A3065E: call sub_1402C3260
/*140a30663*/  nop
/*140a30664*/  mov rcx, rsi
/*140a30667*/  jmp short loc_140A30640
/*140a30669*/ loc_140A30669: mov rdx, [rbp+580h+var_2B8]
/*140a30670*/  test rdx, rdx
/*140a30673*/  jz short loc_140A3068B
/*140a30675*/  shl rdx, 5
/*140a30679*/  mov r8d, 8
/*140a3067f*/  mov rcx, [rbp+580h+var_368]
/*140a30686*/  call sub_140001660
/*140a3068b*/ loc_140A3068B: movdqu xmm0, [rbp+580h+var_3A0]
/*140a30693*/  movdqa [rbp+580h+var_260], xmm0
/*140a3069b*/  mov rax, [rbp+580h+var_390]
/*140a306a2*/  mov qword ptr [rbp+580h+var_250], rax
/*140a306a9*/  mov rsi, qword ptr [rbp+580h+var_180+8]
/*140a306b0*/  test rsi, rsi
/*140a306b3*/  jz loc_140A30781
/*140a306b9*/  mov rdi, qword ptr [rbp+580h+var_170+8]
/*140a306c0*/  test rdi, rdi
/*140a306c3*/  jz loc_140A30749
/*140a306c9*/  mov rbx, qword ptr [rbp+580h+var_180]
/*140a306d0*/  movdqa xmm0, xmmword ptr [rbx]
/*140a306d4*/  lea r14, [rbx+10h]
/*140a306d8*/  pmovmskb r15d, xmm0
/*140a306dd*/  not r15d
/*140a306e0*/  jmp short loc_140A306F4
/*140a306e2*/ loc_140A306E2: dec rdi
/*140a306e5*/  lea eax, [r15-1]
/*140a306e9*/  and eax, r15d
/*140a306ec*/  mov r15d, eax
/*140a306ef*/  test rdi, rdi
/*140a306f2*/  jz short loc_140A30749
/*140a306f4*/ loc_140A306F4: test r15w, r15w
/*140a306f8*/  jnz short loc_140A3071E
/*140a306fa*/  nop word ptr [rax+rax+00h]
/*140a30700*/ loc_140A30700: movdqa xmm0, xmmword ptr [r14]
/*140a30705*/  add rbx, 0FFFFFFFFFFFFFE80h
/*140a3070c*/  add r14, 10h
/*140a30710*/  pmovmskb r15d, xmm0
/*140a30715*/  xor r15d, 0FFFFh
/*140a3071c*/  jz short loc_140A30700
/*140a3071e*/ loc_140A3071E: tzcnt eax, r15d
/*140a30723*/  neg rax
/*140a30726*/  lea rax, [rax+rax*2]
/*140a3072a*/  mov rdx, [rbx+rax*8-18h]
/*140a3072f*/  test rdx, rdx
/*140a30732*/  jz short loc_140A306E2
/*140a30734*/  lea rax, [rbx+rax*8]
/*140a30738*/  mov rcx, [rax-10h]
/*140a3073c*/  mov r8d, 1
/*140a30742*/  call sub_140001660
/*140a30747*/  jmp short loc_140A306E2
/*140a30749*/ loc_140A30749: lea rax, [rsi+rsi*2]
/*140a3074d*/  lea rax, ds:27h[rax*8]
/*140a30755*/  and rax, 0FFFFFFFFFFFFFFF0h
/*140a30759*/  add rsi, rax
/*140a3075c*/  add rsi, 11h
/*140a30760*/  mov r14d, dword ptr [rbp+580h+var_268]
/*140a30767*/  jz short loc_140A30781
/*140a30769*/  mov rcx, qword ptr [rbp+580h+var_180]
/*140a30770*/  sub rcx, rax
/*140a30773*/  mov r8d, 10h
/*140a30779*/  mov rdx, rsi
/*140a3077c*/  call sub_140001660
/*140a30781*/ loc_140A30781: lea rdi, [rbp+580h+var_170+8]
/*140a30788*/  movaps xmm0, [rbp+580h+var_200]
/*140a3078f*/  movaps xmm1, [rbp+580h+var_1F0]
/*140a30796*/  movaps xmm2, [rbp+580h+var_1E0]
/*140a3079d*/  movups [rbp+580h+var_170+8], xmm0
/*140a307a4*/  movups [rbp+580h+var_158], xmm1
/*140a307ab*/  movups [rbp+580h+var_148], xmm2
/*140a307b2*/  movdqa xmm0, [rbp+580h+var_260]
/*140a307ba*/  movdqa [rbp+580h+var_180], xmm0
/*140a307c2*/  mov rax, qword ptr [rbp+580h+var_250]
/*140a307c9*/  mov qword ptr [rbp+580h+var_170], rax
/*140a307d0*/  mov rsi, qword ptr [rbp+580h+var_1C0+8]
/*140a307d7*/  test rsi, rsi
/*140a307da*/  jz loc_140A308AC
/*140a307e0*/  mov r13, r12
/*140a307e3*/  mov rbx, qword ptr [rbp+580h+var_1B0+8]
/*140a307ea*/  test rbx, rbx
/*140a307ed*/  jz loc_140A30876
/*140a307f3*/  mov r14, qword ptr [rbp+580h+var_1C0]
/*140a307fa*/  movdqa xmm0, xmmword ptr [r14]
/*140a307ff*/  lea r15, [r14+10h]
/*140a30803*/  pmovmskb r12d, xmm0
/*140a30808*/  not r12d
/*140a3080b*/  jmp short loc_140A30820
/*140a3080d*/ loc_140A3080D: dec rbx
/*140a30810*/  lea eax, [r12-1]
/*140a30815*/  and eax, r12d
/*140a30818*/  mov r12d, eax
/*140a3081b*/  test rbx, rbx
/*140a3081e*/  jz short loc_140A30876
/*140a30820*/ loc_140A30820: test r12w, r12w
/*140a30824*/  jnz short loc_140A3084E
/*140a30826*/  nop word ptr [rax+rax+00000000h]
/*140a30830*/ loc_140A30830: movdqa xmm0, xmmword ptr [r15]
/*140a30835*/  add r14, 0FFFFFFFFFFFFFE00h
/*140a3083c*/  add r15, 10h
/*140a30840*/  pmovmskb r12d, xmm0
/*140a30845*/  xor r12d, 0FFFFh
/*140a3084c*/  jz short loc_140A30830
/*140a3084e*/ loc_140A3084E: tzcnt ecx, r12d
/*140a30853*/  shl ecx, 5
/*140a30856*/  mov rax, r14
/*140a30859*/  sub rax, rcx
/*140a3085c*/  mov rdx, [rax-20h]
/*140a30860*/  test rdx, rdx
/*140a30863*/  jz short loc_140A3080D
/*140a30865*/  mov rcx, [rax-18h]
/*140a30869*/  mov r8d, 1
/*140a3086f*/  call sub_140001660
/*140a30874*/  jmp short loc_140A3080D
/*140a30876*/ loc_140A30876: mov rax, rsi
/*140a30879*/  shl rax, 5
/*140a3087d*/  add rsi, rax
/*140a30880*/  add rsi, 31h ; '1'
/*140a30884*/  mov r12, r13
/*140a30887*/  mov r14d, dword ptr [rbp+580h+var_268]
/*140a3088e*/  jz short loc_140A308AC
/*140a30890*/  mov rcx, qword ptr [rbp+580h+var_1C0]
/*140a30897*/  sub rcx, rax
/*140a3089a*/  add rcx, 0FFFFFFFFFFFFFFE0h
/*140a3089e*/  mov r8d, 10h
/*140a308a4*/  mov rdx, rsi
/*140a308a7*/  call sub_140001660
/*140a308ac*/ loc_140A308AC: mov rax, qword ptr [rbp+580h+var_170]
/*140a308b3*/  mov qword ptr [rbp+580h+var_1F0], rax
/*140a308ba*/  movaps xmm0, [rbp+580h+var_180]
/*140a308c1*/  movaps [rbp+580h+var_200], xmm0
/*140a308c8*/  movups xmm0, xmmword ptr [rdi]
/*140a308cb*/  movups xmm1, xmmword ptr [rdi+10h]
/*140a308cf*/  movups xmm2, xmmword ptr [rdi+20h]
/*140a308d3*/  movaps [rbp+580h+var_1A0], xmm2
/*140a308da*/  movaps [rbp+580h+var_1B0], xmm1
/*140a308e1*/  movaps [rbp+580h+var_1C0], xmm0
/*140a308e8*/ loc_140A308E8: lea rcx, [rbp+580h+var_2B0]
/*140a308ef*/  call sub_14067EB80
/*140a308f4*/  nop
/*140a308f5*/  movdqa xmm0, [rbp+580h+var_1C0]
/*140a308fd*/  movdqa xmm1, [rbp+580h+var_1B0]
/*140a30905*/  movdqa xmm2, [rbp+580h+var_1A0]
/*140a3090d*/  movdqa [rbp+580h+var_290], xmm2
/*140a30915*/  movdqa [rbp+580h+var_2A0], xmm1
/*140a3091d*/  movdqa [rbp+580h+var_2B0], xmm0
/*140a30925*/  cmp qword ptr [rbp+580h+var_1F0], 0
/*140a3092d*/  lea r13, [rbp+580h+var_1C0]
/*140a30934*/  jz short loc_140A309B0
/*140a30936*/  mov rax, qword ptr [rbp+580h+var_1F0]
/*140a3093d*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a30944*/  movdqa xmm0, [rbp+580h+var_200]
/*140a3094c*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a30954*/  mov byte ptr [rbp+580h+var_180], 4
/*140a3095b*/  mov [rbp+580h+var_2CB], 1
/*140a30962*/ loc_140A30962: lea rcx, aTools_1; "tools"
/*140a30969*/  lea r8, [rbp+580h+var_2F8]
/*140a30970*/  mov edx, 5
/*140a30975*/  call sub_141433E50
/*140a3097a*/  nop
/*140a3097b*/ loc_140A3097B: mov [rbp+580h+var_F8], rax
/*140a30982*/  mov rcx, rax
/*140a30985*/  call sub_1400104F0
/*140a3098a*/  nop
/*140a3098b*/  movdqu xmm0, [rbp+580h+var_180]
/*140a30993*/  movdqu xmm1, [rbp+580h+var_170]
/*140a3099b*/  mov rax, [rbp+580h+var_F8]
/*140a309a2*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a309a7*/  movdqu xmmword ptr [rax], xmm0
/*140a309ab*/  jmp loc_140A2F2F7
/*140a309b0*/ loc_140A309B0: mov rdx, qword ptr [rbp+580h+var_200]
/*140a309b7*/  test rdx, rdx
/*140a309ba*/  jz loc_140A2F2F7
/*140a309c0*/  mov rcx, qword ptr [rbp+580h+var_200+8]
/*140a309c7*/  shl rdx, 5
/*140a309cb*/  mov r8d, 8
/*140a309d1*/  call sub_140001660
/*140a309d6*/  jmp loc_140A2F2F7
/*140a309db*/ loc_140A309DB: xor ecx, ecx
/*140a309dd*/ loc_140A309DD: mov r8, rsi
/*140a309e0*/  call sub_14097BF00
/*140a309e5*/  nop
/*140a309e6*/ loc_140A309E6: mov rdi, rax
/*140a309e9*/  test rax, rax
/*140a309ec*/  jz loc_140A302CA
/*140a309f2*/  mov rsi, rdx
/*140a309f5*/  mov [rsp+600h+var_5E0], 1
/*140a309fe*/  lea rcx, [rbp+580h+var_180]
/*140a30a05*/  mov r9d, 1
/*140a30a0b*/  xor r8d, r8d
/*140a30a0e*/  call sub_140388B60
/*140a30a13*/  mov rax, qword ptr [rbp+580h+var_180+8]
/*140a30a1a*/  mov [rbp+580h+var_F8], rax
/*140a30a21*/  cmp dword ptr [rbp+580h+var_180], 1
/*140a30a28*/  jz loc_140A311B0
/*140a30a2e*/  mov r15, qword ptr [rbp+580h+var_170]
/*140a30a35*/  test rsi, rsi
/*140a30a38*/  jz short loc_140A30A48
/*140a30a3a*/  mov rcx, r15
/*140a30a3d*/  mov rdx, rdi
/*140a30a40*/  mov r8, rsi
/*140a30a43*/  call sub_141684120
/*140a30a48*/ loc_140A30A48: mov rbx, qword ptr [rbp+580h+var_2A0+8]
/*140a30a4f*/  test rbx, rbx
/*140a30a52*/  jz loc_140A30E3D
/*140a30a58*/  mov [rbp+580h+var_188], r15
/*140a30a5f*/  mov dword ptr [rbp+580h+var_268], r14d
/*140a30a66*/  mov r13, r12
/*140a30a69*/  mov r14, qword ptr [rbp+580h+var_2B0]
/*140a30a70*/  movdqa xmm0, xmmword ptr [r14]
/*140a30a75*/  pmovmskb r12d, xmm0
/*140a30a7a*/  not r12d
/*140a30a7d*/  lea r15, [r14+10h]
/*140a30a81*/  jmp short loc_140A30A97
/*140a30a83*/ loc_140A30A83: lea eax, [r12-1]
/*140a30a88*/  and eax, r12d
/*140a30a8b*/  mov r12d, eax
/*140a30a8e*/  dec rbx
/*140a30a91*/  jz loc_140A30E25
/*140a30a97*/ loc_140A30A97: test r12w, r12w
/*140a30a9b*/  jnz short loc_140A30ABE
/*140a30a9d*/  nop dword ptr [rax]
/*140a30aa0*/ loc_140A30AA0: movdqa xmm0, xmmword ptr [r15]
/*140a30aa5*/  add r14, 0FFFFFFFFFFFFFD00h
/*140a30aac*/  add r15, 10h
/*140a30ab0*/  pmovmskb r12d, xmm0
/*140a30ab5*/  xor r12d, 0FFFFh
/*140a30abc*/  jz short loc_140A30AA0
/*140a30abe*/ loc_140A30ABE: tzcnt eax, r12d
/*140a30ac3*/  neg rax
/*140a30ac6*/  lea rdi, [rax+rax*2]
/*140a30aca*/  shl rdi, 4
/*140a30ace*/  cmp [r14+rdi-8], rsi
/*140a30ad3*/  jnz short loc_140A30A83
/*140a30ad5*/  add rdi, r14
/*140a30ad8*/  mov rcx, [rdi-10h]
/*140a30adc*/  mov rdx, [rbp+580h+var_188]
/*140a30ae3*/  mov r8, rsi
/*140a30ae6*/  call sub_1416847B0
/*140a30aeb*/  test eax, eax
/*140a30aed*/  jnz short loc_140A30A83
/*140a30aef*/  add rdi, 0FFFFFFFFFFFFFFD0h
/*140a30af3*/  mov rax, [rbp+580h+var_F8]
/*140a30afa*/  mov [rbp+580h+var_440], rax
/*140a30b01*/  mov rax, [rbp+580h+var_188]
/*140a30b08*/  mov [rbp+580h+var_448], rax
/*140a30b0f*/ loc_140A30B0F: lea rcx, [rbp+580h+var_180]
/*140a30b16*/  mov rdx, rdi
/*140a30b19*/  call sub_14149C500
/*140a30b1e*/  nop
/*140a30b1f*/  mov r12, r13
/*140a30b22*/  lea r13, [rbp+580h+var_1C0]
/*140a30b29*/  mov r14d, dword ptr [rbp+580h+var_268]
/*140a30b30*/  mov rdx, [rbp+580h+var_F8]
/*140a30b37*/  test rdx, rdx
/*140a30b3a*/  jz short loc_140A30B4E
/*140a30b3c*/  mov r8d, 1
/*140a30b42*/  mov rcx, [rbp+580h+var_188]
/*140a30b49*/  call sub_140001660
/*140a30b4e*/ loc_140A30B4E: mov rax, qword ptr [rbp+580h+var_180]
/*140a30b55*/  mov [rbp+580h+var_F8], rax
/*140a30b5c*/  mov r15, qword ptr [rbp+580h+var_180+8]
/*140a30b63*/  mov rsi, qword ptr [rbp+580h+var_170]
/*140a30b6a*/  jmp loc_140A30E3D
/*140a30b6f*/ loc_140A30B6F: mov esi, 8000h
/*140a30b74*/  jmp short loc_140A30B7B
/*140a30b76*/ loc_140A30B76: mov esi, 400h
/*140a30b7b*/ loc_140A30B7B: mov qword ptr [rbp+580h+var_2B0], 0
/*140a30b86*/  mov qword ptr [rbp+580h+var_2A0], 0
/*140a30b91*/  call nullsub_1
/*140a30b96*/  mov ecx, 4
/*140a30b9b*/  mov edx, 1
/*140a30ba0*/  call sub_140001650
/*140a30ba5*/  test rax, rax
/*140a30ba8*/  jz loc_140A31333
/*140a30bae*/  mov dword ptr [rax], 65707974h
/*140a30bb4*/  mov qword ptr [rbp+580h+var_200], 4
/*140a30bbf*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a30bc6*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a30bd1*/  call nullsub_1
/*140a30bd6*/  mov ecx, 7
/*140a30bdb*/  mov edx, 1
/*140a30be0*/  call sub_140001650
/*140a30be5*/  test rax, rax
/*140a30be8*/  mov [rbp+580h+var_F8], rax
/*140a30bef*/  jz loc_140A31348
/*140a30bf5*/  mov dword ptr [rax+3], 64656C62h
/*140a30bfc*/  mov dword ptr [rax], 62616E65h
/*140a30c02*/  mov byte ptr [rbp+580h+var_180], 3
/*140a30c09*/  mov qword ptr [rbp+580h+var_180+8], 7
/*140a30c14*/  mov qword ptr [rbp+580h+var_170], rax
/*140a30c1b*/  mov qword ptr [rbp+580h+var_170+8], 7
/*140a30c26*/ loc_140A30C26: lea rcx, [rbp+580h+var_1C0]
/*140a30c2d*/  lea rdx, [rbp+580h+var_2B0]
/*140a30c34*/  lea r8, [rbp+580h+var_200]
/*140a30c3b*/  lea r9, [rbp+580h+var_180]
/*140a30c42*/  call sub_140307860
/*140a30c47*/  nop
/*140a30c48*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a30c4f*/  jz short loc_140A30C5E
/*140a30c51*/ loc_140A30C51: lea rcx, [rbp+580h+var_1C0]
/*140a30c58*/  call sub_1400104F0
/*140a30c5d*/  nop
/*140a30c5e*/ loc_140A30C5E: call nullsub_1
/*140a30c63*/  mov ecx, 0Dh
/*140a30c68*/  mov edx, 1
/*140a30c6d*/  call sub_140001650
/*140a30c72*/  test rax, rax
/*140a30c75*/  jz loc_140A3135D
/*140a30c7b*/  mov rcx, 736E656B6F745F74h
/*140a30c85*/  mov [rax+5], rcx
/*140a30c89*/  mov rcx, 745F746567647562h
/*140a30c93*/  mov [rax], rcx
/*140a30c96*/  mov qword ptr [rbp+580h+var_200], 0Dh
/*140a30ca1*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a30ca8*/  mov qword ptr [rbp+580h+var_1F0], 0Dh
/*140a30cb3*/  mov byte ptr [rbp+580h+var_180], 2
/*140a30cba*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a30cc5*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a30ccc*/  lea rcx, [rbp+580h+var_1C0]
/*140a30cd3*/  lea rdx, [rbp+580h+var_2B0]
/*140a30cda*/  lea r8, [rbp+580h+var_200]
/*140a30ce1*/  lea r9, [rbp+580h+var_180]
/*140a30ce8*/  call sub_140307860
/*140a30ced*/  nop
/*140a30cee*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a30cf5*/  jz short loc_140A30D04
/*140a30cf7*/  lea rcx, [rbp+580h+var_1C0]
/*140a30cfe*/  call sub_1400104F0
/*140a30d03*/  nop
/*140a30d04*/ loc_140A30D04: movdqu xmm0, [rbp+580h+var_2B0]
/*140a30d0c*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a30d14*/  mov rax, qword ptr [rbp+580h+var_2A0]
/*140a30d1b*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a30d22*/  mov byte ptr [rbp+580h+var_180], 5
/*140a30d29*/  mov [rbp+580h+var_2C5], 1
/*140a30d30*/ loc_140A30D30: lea rcx, aThinking_0; "thinking"
/*140a30d37*/  lea r8, [rbp+580h+var_2F8]
/*140a30d3e*/  mov edx, 8
/*140a30d43*/  call sub_141433E50
/*140a30d48*/  nop
/*140a30d49*/ loc_140A30D49: mov [rbp+580h+var_F8], rax
/*140a30d50*/  mov rcx, rax
/*140a30d53*/  call sub_1400104F0
/*140a30d58*/  nop
/*140a30d59*/  movdqu xmm0, [rbp+580h+var_180]
/*140a30d61*/  movdqu xmm1, [rbp+580h+var_170]
/*140a30d69*/  mov rax, [rbp+580h+var_F8]
/*140a30d70*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a30d75*/  movdqu xmmword ptr [rax], xmm0
/*140a30d79*/ loc_140A30D79: lea rcx, aMaxTokens; "max_tokens"
/*140a30d80*/  lea r8, [rbp+580h+var_2F8]
/*140a30d87*/  mov edx, 0Ah
/*140a30d8c*/  call sub_141433D50
/*140a30d91*/  nop
/*140a30d92*/  mov ecx, 4000h
/*140a30d97*/  test rax, rax
/*140a30d9a*/  jz short loc_140A30DAC
/*140a30d9c*/  cmp byte ptr [rax], 2
/*140a30d9f*/  jnz short loc_140A30DAC
/*140a30da1*/  cmp qword ptr [rax+8], 0
/*140a30da6*/  jnz short loc_140A30DAC
/*140a30da8*/  mov rcx, [rax+10h]
/*140a30dac*/ loc_140A30DAC: cmp rcx, rsi
/*140a30daf*/  ja loc_140A2EF0E
/*140a30db5*/  add rsi, 1000h
/*140a30dbc*/  mov byte ptr [rbp+580h+var_180], 2
/*140a30dc3*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a30dce*/  mov qword ptr [rbp+580h+var_170], rsi
/*140a30dd5*/  mov [rbp+580h+var_2C6], 1
/*140a30ddc*/ loc_140A30DDC: lea rcx, aMaxTokens; "max_tokens"
/*140a30de3*/  lea r8, [rbp+580h+var_2F8]
/*140a30dea*/  mov edx, 0Ah
/*140a30def*/  call sub_141433E50
/*140a30df4*/  nop
/*140a30df5*/ loc_140A30DF5: mov [rbp+580h+var_F8], rax
/*140a30dfc*/  mov rcx, rax
/*140a30dff*/  call sub_1400104F0
/*140a30e04*/  nop
/*140a30e05*/  jmp loc_140A2EEEE
/*140a30e0a*/ loc_140A30E0A: xor ecx, ecx
/*140a30e0c*/ loc_140A30E0C: mov [rbp+580h+var_EA], 1
/*140a30e13*/ loc_140A30E13: mov rdx, [rbp+580h+var_F8]
/*140a30e1a*/  call sub_1416C2D4B
/*140a30e20*/ loc_140A30E20: jmp loc_140A3143D
/*140a30e25*/ loc_140A30E25: mov r12, r13
/*140a30e28*/  lea r13, [rbp+580h+var_1C0]
/*140a30e2f*/  mov r14d, dword ptr [rbp+580h+var_268]
/*140a30e36*/  mov r15, [rbp+580h+var_188]
/*140a30e3d*/ loc_140A30E3D: mov rcx, r15
/*140a30e40*/  mov rdx, rsi
/*140a30e43*/  call sub_140A0FF00
/*140a30e48*/  mov rdi, rax
/*140a30e4b*/  mov rsi, rdx
/*140a30e4e*/  mov [rsp+600h+var_5E0], 1
/*140a30e57*/  lea rcx, [rbp+580h+var_180]
/*140a30e5e*/  mov r9d, 1
/*140a30e64*/  xor r8d, r8d
/*140a30e67*/  call sub_140388B60
/*140a30e6c*/  mov r9, qword ptr [rbp+580h+var_180+8]
/*140a30e73*/  cmp byte ptr [rbp+580h+var_180], 0
/*140a30e7a*/  jnz loc_140A311C9
/*140a30e80*/  mov rbx, qword ptr [rbp+580h+var_170]
/*140a30e87*/  test rsi, rsi
/*140a30e8a*/  mov [rbp+580h+var_110], rbx
/*140a30e91*/  jz loc_140A310C9
/*140a30e97*/  mov [rbp+580h+var_188], r15
/*140a30e9e*/  mov rcx, rbx
/*140a30ea1*/  mov rdx, rdi
/*140a30ea4*/  mov r8, rsi
/*140a30ea7*/  mov rdi, r9
/*140a30eaa*/  call sub_141684120
/*140a30eaf*/  mov [rbp+580h+var_268], rdi
/*140a30eb6*/  mov qword ptr [rbp+580h+var_240], rdi
/*140a30ebd*/  mov qword ptr [rbp+580h+var_240+8], rbx
/*140a30ec4*/  mov [rbp+580h+var_230], rsi
/*140a30ecb*/  mov qword ptr [rbp+580h+var_260], 0
/*140a30ed6*/  mov qword ptr [rbp+580h+var_250], 0
/*140a30ee1*/  call nullsub_1
/*140a30ee6*/  mov ecx, 4
/*140a30eeb*/  mov edx, 1
/*140a30ef0*/  call sub_140001650
/*140a30ef5*/  test rax, rax
/*140a30ef8*/  jz loc_140A3139C
/*140a30efe*/  mov dword ptr [rax], 65707974h
/*140a30f04*/  mov qword ptr [rbp+580h+var_200], 4
/*140a30f0f*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a30f16*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a30f21*/  mov [rbp+580h+var_214], 1
/*140a30f28*/ loc_140A30F28: lea rdx, off_1417A7B40; "tool"
/*140a30f2f*/  lea rcx, [rbp+580h+var_180]
/*140a30f36*/  call sub_140B56640
/*140a30f3b*/  nop
/*140a30f3c*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a30f43*/  jz loc_140A311F3
/*140a30f49*/  movdqu xmm0, [rbp+580h+var_180]
/*140a30f51*/  movdqu xmm1, [rbp+580h+var_170]
/*140a30f59*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a30f61*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a30f69*/  mov [rbp+580h+var_214], 0
/*140a30f70*/  lea rcx, [rbp+580h+var_180]
/*140a30f77*/  lea rdx, [rbp+580h+var_260]
/*140a30f7e*/  lea r8, [rbp+580h+var_200]
/*140a30f85*/  lea r9, [rbp+580h+var_1C0]
/*140a30f8c*/  call sub_140307860
/*140a30f91*/  nop
/*140a30f92*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a30f99*/  jz short loc_140A30FA8
/*140a30f9b*/ loc_140A30F9B: lea rcx, [rbp+580h+var_180]
/*140a30fa2*/  call sub_1400104F0
/*140a30fa7*/  nop
/*140a30fa8*/ loc_140A30FA8: call nullsub_1
/*140a30fad*/  mov ecx, 4
/*140a30fb2*/  mov edx, 1
/*140a30fb7*/  call sub_140001650
/*140a30fbc*/  test rax, rax
/*140a30fbf*/  jz loc_140A313B1
/*140a30fc5*/  mov dword ptr [rax], 656D616Eh
/*140a30fcb*/  mov qword ptr [rbp+580h+var_200], 4
/*140a30fd6*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a30fdd*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a30fe8*/  mov [rbp+580h+var_215], 1
/*140a30fef*/ loc_140A30FEF: lea rcx, [rbp+580h+var_180]
/*140a30ff6*/  lea rdx, [rbp+580h+var_240]
/*140a30ffd*/  call sub_140B56520
/*140a31002*/  nop
/*140a31003*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a3100a*/  jz loc_140A31232
/*140a31010*/  movdqu xmm0, [rbp+580h+var_180]
/*140a31018*/  movdqu xmm1, [rbp+580h+var_170]
/*140a31020*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a31028*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a31030*/  mov [rbp+580h+var_215], 0
/*140a31037*/  lea rcx, [rbp+580h+var_180]
/*140a3103e*/  lea rdx, [rbp+580h+var_260]
/*140a31045*/  lea r8, [rbp+580h+var_200]
/*140a3104c*/  lea r9, [rbp+580h+var_1C0]
/*140a31053*/  call sub_140307860
/*140a31058*/  nop
/*140a31059*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a31060*/  jz short loc_140A3106F
/*140a31062*/ loc_140A31062: lea rcx, [rbp+580h+var_180]
/*140a31069*/  call sub_1400104F0
/*140a3106e*/  nop
/*140a3106f*/ loc_140A3106F: mov rax, qword ptr [rbp+580h+var_250]
/*140a31076*/  movups xmm0, [rbp+580h+var_260]
/*140a3107d*/  movups [rbp+580h+var_180+7], xmm0
/*140a31084*/  mov qword ptr [rbp+580h+var_170+7], rax
/*140a3108b*/  movdqu xmm0, [rbp+580h+var_180]
/*140a31093*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a3109b*/  mov rax, qword ptr [rbp+580h+var_180+0Fh]
/*140a310a2*/  mov qword ptr [rbp+580h+var_1C0+0Fh], rax
/*140a310a9*/  mov rax, qword ptr [rbp+580h+var_170+7]
/*140a310b0*/  mov qword ptr [rbp+580h+var_1B0+7], rax
/*140a310b7*/  mov bl, 5
/*140a310b9*/  mov r15, [rbp+580h+var_188]
/*140a310c0*/  mov r9, [rbp+580h+var_268]
/*140a310c7*/  jmp short loc_140A310D2
/*140a310c9*/ loc_140A310C9: mov qword ptr [rbp+580h+var_240], r9
/*140a310d0*/  mov bl, 0FFh
/*140a310d2*/ loc_140A310D2: test r9, r9
/*140a310d5*/  jz short loc_140A310EC
/*140a310d7*/  mov r8d, 1
/*140a310dd*/  mov rcx, [rbp+580h+var_110]
/*140a310e4*/  mov rdx, r9
/*140a310e7*/  call sub_140001660
/*140a310ec*/ loc_140A310EC: mov rdx, [rbp+580h+var_F8]
/*140a310f3*/  test rdx, rdx
/*140a310f6*/  jz short loc_140A31106
/*140a310f8*/  mov r8d, 1
/*140a310fe*/  mov rcx, r15
/*140a31101*/  call sub_140001660
/*140a31106*/ loc_140A31106: test rsi, rsi
/*140a31109*/  jnz loc_140A30248
/*140a3110f*/  jmp loc_140A302CA
/*140a31114*/ loc_140A31114: call sub_141486EF0
/*140a31119*/  nop
/*140a3111a*/  mov [rsi], rax
/*140a3111d*/  mov [rsi+8], rdx
/*140a31121*/  mov byte ptr [rsi+10h], 1
/*140a31125*/  jmp loc_140A2EF28
/*140a3112a*/ loc_140A3112A: xor ecx, ecx
/*140a3112c*/ loc_140A3112C: mov rdx, [rbp+580h+var_340]
/*140a31133*/  call sub_1416C2D4B
/*140a31139*/  jmp loc_140A3143D
/*140a3113e*/ loc_140A3113E: mov [rbp+580h+var_274], 1
/*140a31145*/ loc_140A31145: mov rsi, rax
/*140a31148*/  call sub_141486EF0
/*140a3114d*/  nop
/*140a3114e*/  mov rcx, rax
/*140a31151*/  mov rax, rsi
/*140a31154*/  mov [rsi], rcx
/*140a31157*/  mov [rsi+8], rdx
/*140a3115b*/  mov byte ptr [rsi+10h], 1
/*140a3115f*/  jmp loc_140A2EFCF
/*140a31164*/ loc_140A31164: mov [rbp+580h+var_278], 1
/*140a3116b*/ loc_140A3116B: mov rsi, rax
/*140a3116e*/  call sub_141486EF0
/*140a31173*/  nop
/*140a31174*/  mov rcx, rax
/*140a31177*/  mov rax, rsi
/*140a3117a*/  mov [rsi], rcx
/*140a3117d*/  mov [rsi+8], rdx
/*140a31181*/  mov byte ptr [rsi+10h], 1
/*140a31185*/  jmp loc_140A2F012
/*140a3118a*/ loc_140A3118A: mov [rbp+580h+var_275], 1
/*140a31191*/ loc_140A31191: mov rsi, rax
/*140a31194*/  call sub_141486EF0
/*140a31199*/  nop
/*140a3119a*/  mov rcx, rax
/*140a3119d*/  mov rax, rsi
/*140a311a0*/  mov [rsi], rcx
/*140a311a3*/  mov [rsi+8], rdx
/*140a311a7*/  mov byte ptr [rsi+10h], 1
/*140a311ab*/  jmp loc_140A2FDB5
/*140a311b0*/ loc_140A311B0: mov rdx, qword ptr [rbp+580h+var_170]
/*140a311b7*/ loc_140A311B7: mov rcx, [rbp+580h+var_F8]
/*140a311be*/  call sub_1416C2D4B
/*140a311c4*/  jmp loc_140A3143D
/*140a311c9*/ loc_140A311C9: mov rdx, qword ptr [rbp+580h+var_170]
/*140a311d0*/  mov rax, [rbp+580h+var_F8]
/*140a311d7*/  mov [rbp+580h+var_440], rax
/*140a311de*/  mov [rbp+580h+var_448], r15
/*140a311e5*/ loc_140A311E5: mov rcx, r9
/*140a311e8*/  call sub_1416C2D4B
/*140a311ee*/  jmp loc_140A3143D
/*140a311f3*/ loc_140A311F3: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a311fa*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a31201*/ loc_140A31201: lea rax, off_1417A84C0; "src\\core\\relay\\translator.rs"
/*140a31208*/  mov [rsp+600h+var_5E0], rax
/*140a3120d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a31214*/  lea r9, off_1417A5560
/*140a3121b*/  lea r8, [rbp+580h+var_1C0]
/*140a31222*/  mov edx, 2Bh ; '+'
/*140a31227*/  call sub_1416C3060
/*140a3122d*/  jmp loc_140A3143D
/*140a31232*/ loc_140A31232: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a31239*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a31240*/ loc_140A31240: lea rax, off_1417A84C0; "src\\core\\relay\\translator.rs"
/*140a31247*/  mov [rsp+600h+var_5E0], rax
/*140a3124c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a31253*/  lea r9, off_1417A5560
/*140a3125a*/  lea r8, [rbp+580h+var_1C0]
/*140a31261*/  mov edx, 2Bh ; '+'
/*140a31266*/  call sub_1416C3060
/*140a3126c*/  jmp loc_140A3143D
/*140a31271*/ loc_140A31271: mov ecx, 1
/*140a31276*/  mov edx, 1CEh
/*140a3127b*/  call sub_1416C2D4B
/*140a31281*/  jmp loc_140A3143D
/*140a31286*/ loc_140A31286: mov ecx, 1
/*140a3128b*/  mov edx, 4
/*140a31290*/  call sub_1416C2D4B
/*140a31296*/  jmp loc_140A3143D
/*140a3129b*/ loc_140A3129B: mov ecx, 1
/*140a312a0*/  mov edx, 8
/*140a312a5*/  call sub_1416C2D4B
/*140a312ab*/  jmp loc_140A3143D
/*140a312b0*/ loc_140A312B0: mov ecx, 1
/*140a312b5*/  mov edx, 6
/*140a312ba*/  call sub_1416C2D4B
/*140a312c0*/  jmp loc_140A3143D
/*140a312c5*/ loc_140A312C5: mov [rbp+580h+var_1C9], 1
/*140a312cc*/ loc_140A312CC: mov ecx, 1
/*140a312d1*/  mov rdx, rsi
/*140a312d4*/  call sub_1416C2D4B
/*140a312da*/  jmp loc_140A3143D
/*140a312df*/ loc_140A312DF: mov ecx, 1
/*140a312e4*/  mov edx, 4
/*140a312e9*/  call sub_1416C2D4B
/*140a312ef*/  jmp loc_140A3143D
/*140a312f4*/ loc_140A312F4: mov ecx, 1
/*140a312f9*/  mov edx, 4
/*140a312fe*/  call sub_1416C2D4B
/*140a31304*/  jmp loc_140A3143D
/*140a31309*/ loc_140A31309: mov ecx, 1
/*140a3130e*/  mov edx, 3
/*140a31313*/  call sub_1416C2D4B
/*140a31319*/  jmp loc_140A3143D
/*140a3131e*/ loc_140A3131E: mov ecx, 1
/*140a31323*/  mov edx, 4
/*140a31328*/  call sub_1416C2D4B
/*140a3132e*/  jmp loc_140A3143D
/*140a31333*/ loc_140A31333: mov ecx, 1
/*140a31338*/  mov edx, 4
/*140a3133d*/  call sub_1416C2D4B
/*140a31343*/  jmp loc_140A3143D
/*140a31348*/ loc_140A31348: mov ecx, 1
/*140a3134d*/  mov edx, 7
/*140a31352*/  call sub_1416C2D4B
/*140a31358*/  jmp loc_140A3143D
/*140a3135d*/ loc_140A3135D: mov ecx, 1
/*140a31362*/  mov edx, 0Dh
/*140a31367*/  call sub_1416C2D4B
/*140a3136d*/  jmp loc_140A3143D
/*140a31372*/ loc_140A31372: mov ecx, 1
/*140a31377*/  mov edx, 4
/*140a3137c*/  call sub_1416C2D4B
/*140a31382*/  jmp loc_140A3143D
/*140a31387*/ loc_140A31387: mov ecx, 1
/*140a3138c*/  mov edx, 8
/*140a31391*/  call sub_1416C2D4B
/*140a31397*/  jmp loc_140A3143D
/*140a3139c*/ loc_140A3139C: mov ecx, 1
/*140a313a1*/  mov edx, 4
/*140a313a6*/  call sub_1416C2D4B
/*140a313ac*/  jmp loc_140A3143D
/*140a313b1*/ loc_140A313B1: mov ecx, 1
/*140a313b6*/  mov edx, 4
/*140a313bb*/  call sub_1416C2D4B
/*140a313c1*/  jmp short loc_140A3143D
/*140a313c3*/ loc_140A313C3: mov rax, [rbp+580h+var_110]
/*140a313ca*/  mov [rbp+580h+var_F8], rax
/*140a313d1*/  mov ecx, 1
/*140a313d6*/  jmp loc_140A30E0C
/*140a313db*/ loc_140A313DB: mov [rbp+580h+var_EA], 1
/*140a313e2*/ loc_140A313E2: mov ecx, 1
/*140a313e7*/  mov rdx, rsi
/*140a313ea*/  call sub_1416C2D4B
/*140a313f0*/  jmp short loc_140A3143D
/*140a313f2*/ loc_140A313F2: mov [rbp+580h+var_276], 1
/*140a313f9*/ loc_140A313F9: mov ecx, 1
/*140a313fe*/  mov rdx, [rbp+580h+var_110]
/*140a31405*/  call sub_1416C2D4B
/*140a3140b*/  jmp short loc_140A3143D
/*140a3140d*/ loc_140A3140D: mov rax, [rbp+580h+var_110]
/*140a31414*/  mov [rbp+580h+var_340], rax
/*140a3141b*/  mov ecx, 1
/*140a31420*/  jmp loc_140A3112C
/*140a31425*/ loc_140A31425: mov rax, [rbp+580h+var_110]
/*140a3142c*/  mov [rbp+580h+var_F8], rax
/*140a31433*/  mov ecx, 1
/*140a31438*/  jmp loc_140A300FD
/*140a3143d*/ loc_140A3143D: ud2
/*140a3143f*/ loc_140A3143F: movzx ecx, byte ptr [r14+rax]
/*140a31444*/  lea edx, [rcx-41h]
/*140a31447*/  cmp dl, 1Ah
/*140a3144a*/  setb dl
/*140a3144d*/  shl dl, 5
/*140a31450*/  or dl, cl
/*140a31452*/  mov [r14+rax], dl
/*140a31456*/  inc rax
/*140a31459*/ loc_140A31459: cmp rbx, rax
/*140a3145c*/  jnz short loc_140A3143F
/*140a3145e*/ loc_140A3145E: cmp rbx, 4
/*140a31462*/  mov [rbp+580h+var_F8], rbx
/*140a31469*/  mov [rbp+580h+var_188], r14
/*140a31470*/  jz short loc_140A31495
/*140a31472*/  cmp rbx, 3
/*140a31476*/  jnz short loc_140A314EB
/*140a31478*/  mov rcx, [rbp+580h+var_188]
/*140a3147f*/  movzx eax, word ptr [rcx]
/*140a31482*/  xor eax, 6E61h
/*140a31487*/  movzx ecx, byte ptr [rcx+2]
/*140a3148b*/  xor ecx, 79h
/*140a3148e*/  or cx, ax
/*140a31491*/  jnz short loc_140A314EB
/*140a31493*/  jmp short loc_140A3149E
/*140a31495*/ loc_140A31495: cmp dword ptr [r14], 6C6F6F74h
/*140a3149c*/  jnz short loc_140A314EB
/*140a3149e*/ loc_140A3149E: cmp byte ptr [rbp+580h+var_2F8], 5
/*140a314a5*/  jnz short loc_140A314DE
/*140a314a7*/ loc_140A314A7: lea rdx, [rbp+580h+var_2F8+8]
/*140a314ae*/  lea r8, aThinking_0; "thinking"
/*140a314b5*/  lea rcx, [rbp+580h+var_180]
/*140a314bc*/  mov r9d, 8
/*140a314c2*/  call sub_1402B4580
/*140a314c7*/  nop
/*140a314c8*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a314cf*/  jz short loc_140A314DE
/*140a314d1*/  lea rcx, [rbp+580h+var_180]
/*140a314d8*/  call sub_1400104F0
/*140a314dd*/  nop
/*140a314de*/ loc_140A314DE: lea rcx, [rbp+580h+var_2F8]
/*140a314e5*/  call sub_140A201F0
/*140a314ea*/  nop
/*140a314eb*/ loc_140A314EB: mov r8d, 1
/*140a314f1*/  mov rcx, [rbp+580h+var_188]
/*140a314f8*/  mov rdx, [rbp+580h+var_F8]
/*140a314ff*/  call sub_140001660
/*140a31504*/  nop
/*140a31505*/ loc_140A31505: lea rcx, aTemperature; "temperature"
/*140a3150c*/  lea r8, [rbp+580h+var_2F8]
/*140a31513*/  mov edx, 0Bh
/*140a31518*/  call sub_141433D50
/*140a3151d*/  nop
/*140a3151e*/  test rax, rax
/*140a31521*/  jz loc_140A317EF
/*140a31527*/  lea rcx, aThinking_0; "thinking"
/*140a3152e*/  lea r8, [rbp+580h+var_2F8]
/*140a31535*/  mov edx, 8
/*140a3153a*/  call sub_141433D50
/*140a3153f*/  nop
/*140a31540*/  mov esi, 1
/*140a31545*/  test rax, rax
/*140a31548*/  jz short loc_140A31573
/*140a3154a*/  lea rcx, aType_8; "type"
/*140a31551*/  mov edx, 4
/*140a31556*/  mov r8, rax
/*140a31559*/  call sub_141433D50
/*140a3155e*/  nop
/*140a3155f*/  test rax, rax
/*140a31562*/  jz short loc_140A31573
/*140a31564*/  cmp byte ptr [rax], 3
/*140a31567*/  jnz short loc_140A31573
/*140a31569*/  mov rsi, [rax+10h]
/*140a3156d*/  mov rdx, [rax+18h]
/*140a31571*/  jmp short loc_140A31575
/*140a31573*/ loc_140A31573: xor edx, edx
/*140a31575*/ loc_140A31575: mov rcx, rsi
/*140a31578*/  call sub_14033BC10
/*140a3157d*/  nop
/*140a3157e*/  mov rbx, rdx
/*140a31581*/  test rdx, rdx
/*140a31584*/  jns short loc_140A31599
/*140a31586*/  xor edi, edi
/*140a31588*/ loc_140A31588: mov rcx, rdi
/*140a3158b*/  mov rdx, rbx
/*140a3158e*/  call sub_1416C2D4B
/*140a31594*/ loc_140A31594: jmp loc_140A3143D
/*140a31599*/ loc_140A31599: test rbx, rbx
/*140a3159c*/  jz loc_140A317EF
/*140a315a2*/  mov rsi, rax
/*140a315a5*/  call nullsub_1
/*140a315aa*/  mov edi, 1
/*140a315af*/  mov edx, 1
/*140a315b4*/  mov rcx, rbx
/*140a315b7*/  call sub_140001650
/*140a315bc*/  test rax, rax
/*140a315bf*/  jz short loc_140A31588
/*140a315c1*/  mov r14, rax
/*140a315c4*/  mov rcx, rax
/*140a315c7*/  mov rdx, rsi
/*140a315ca*/  mov r8, rbx
/*140a315cd*/  call sub_141684120
/*140a315d2*/  cmp rbx, 8
/*140a315d6*/  jnb short loc_140A315DF
/*140a315d8*/  xor eax, eax
/*140a315da*/  jmp loc_140A316E3
/*140a315df*/ loc_140A315DF: cmp rbx, 20h ; ' '
/*140a315e3*/  jnb short loc_140A315EC
/*140a315e5*/  xor eax, eax
/*140a315e7*/  jmp loc_140A3167C
/*140a315ec*/ loc_140A315EC: mov rax, 7FFFFFFFFFFFFFE0h
/*140a315f6*/  and rax, rbx
/*140a315f9*/  xor ecx, ecx
/*140a315fb*/  movdqa xmm0, cs:xmmword_141742460
/*140a31603*/  movdqa xmm1, cs:xmmword_1416C62F0
/*140a3160b*/  movdqa xmm2, cs:xmmword_141742470
/*140a31613*/ loc_140A31613: movdqu xmm3, xmmword ptr [r14+rcx]
/*140a31619*/  movdqu xmm4, xmmword ptr [r14+rcx+10h]
/*140a31620*/  movdqa xmm5, xmm3
/*140a31624*/  paddb xmm5, xmm0
/*140a31628*/  movdqa xmm6, xmm4
/*140a3162c*/  paddb xmm6, xmm0
/*140a31630*/  movdqa xmm7, xmm5
/*140a31634*/  pminub xmm7, xmm1
/*140a31638*/  pcmpeqb xmm7, xmm5
/*140a3163c*/  pand xmm7, xmm2
/*140a31640*/  movdqa xmm5, xmm6
/*140a31644*/  pminub xmm5, xmm1
/*140a31648*/  pcmpeqb xmm5, xmm6
/*140a3164c*/  pand xmm5, xmm2
/*140a31650*/  por xmm7, xmm3
/*140a31654*/  por xmm5, xmm4
/*140a31658*/  movdqu xmmword ptr [r14+rcx], xmm7
/*140a3165e*/  movdqu xmmword ptr [r14+rcx+10h], xmm5
/*140a31665*/  add rcx, 20h ; ' '
/*140a31669*/  cmp rax, rcx
/*140a3166c*/  jnz short loc_140A31613
/*140a3166e*/  cmp rbx, rax
/*140a31671*/  jz loc_140A31702
/*140a31677*/  test bl, 18h
/*140a3167a*/  jz short loc_140A316E3
/*140a3167c*/ loc_140A3167C: mov rcx, rax
/*140a3167f*/  mov rax, 7FFFFFFFFFFFFFF8h
/*140a31689*/  and rax, rbx
/*140a3168c*/  movdqa xmm0, cs:xmmword_141742480
/*140a31694*/  movdqa xmm1, cs:xmmword_141742490
/*140a3169c*/  movdqa xmm2, cs:xmmword_1417424A0
/*140a316a4*/  nop word ptr [rax+rax+00000000h]
/*140a316b0*/ loc_140A316B0: movq xmm3, qword ptr [r14+rcx]
/*140a316b6*/  movdqa xmm4, xmm3
/*140a316ba*/  paddb xmm4, xmm0
/*140a316be*/  movdqa xmm5, xmm4
/*140a316c2*/  pmaxub xmm5, xmm1
/*140a316c6*/  pcmpeqb xmm5, xmm4
/*140a316ca*/  pandn xmm5, xmm2
/*140a316ce*/  por xmm5, xmm3
/*140a316d2*/  movq qword ptr [r14+rcx], xmm5
/*140a316d8*/  add rcx, 8
/*140a316dc*/  cmp rax, rcx
/*140a316df*/  jnz short loc_140A316B0
/*140a316e1*/  jmp short loc_140A316FD
/*140a316e3*/ loc_140A316E3: movzx ecx, byte ptr [r14+rax]
/*140a316e8*/  lea edx, [rcx-41h]
/*140a316eb*/  cmp dl, 1Ah
/*140a316ee*/  setb dl
/*140a316f1*/  shl dl, 5
/*140a316f4*/  or dl, cl
/*140a316f6*/  mov [r14+rax], dl
/*140a316fa*/  inc rax
/*140a316fd*/ loc_140A316FD: cmp rbx, rax
/*140a31700*/  jnz short loc_140A316E3
/*140a31702*/ loc_140A31702: cmp rbx, 4
/*140a31706*/  jz short loc_140A31748
/*140a31708*/  cmp rbx, 8
/*140a3170c*/  jz short loc_140A31733
/*140a3170e*/  cmp rbx, 7
/*140a31712*/  jnz loc_140A317DE
/*140a31718*/  mov eax, 62616E65h
/*140a3171d*/  xor eax, [r14]
/*140a31720*/  mov ecx, 64656C62h
/*140a31725*/  xor ecx, [r14+3]
/*140a31729*/  or ecx, eax
/*140a3172b*/  jnz loc_140A317DE
/*140a31731*/  jmp short loc_140A31755
/*140a31733*/ loc_140A31733: mov rax, 6576697470616461h
/*140a3173d*/  cmp [r14], rax
/*140a31740*/  jnz loc_140A317DE
/*140a31746*/  jmp short loc_140A31755
/*140a31748*/ loc_140A31748: cmp dword ptr [r14], 6F747561h
/*140a3174f*/  jnz loc_140A317DE
/*140a31755*/ loc_140A31755: mov [rbp+580h+var_F8], r14
/*140a3175c*/  mov [rbp+580h+var_188], rbx
/*140a31763*/  mov byte ptr [rbp+580h+var_180], 2
/*140a3176a*/  mov qword ptr [rbp+580h+var_180+8], 0
/*140a31775*/  mov qword ptr [rbp+580h+var_170], 1
/*140a31780*/  mov [rbp+580h+var_2CE], 1
/*140a31787*/ loc_140A31787: lea rcx, aTemperature; "temperature"
/*140a3178e*/  lea r8, [rbp+580h+var_2F8]
/*140a31795*/  mov edx, 0Bh
/*140a3179a*/  call sub_141433E50
/*140a3179f*/  nop
/*140a317a0*/ loc_140A317A0: mov [rbp+580h+var_110], rax
/*140a317a7*/  mov rcx, rax
/*140a317aa*/  call sub_1400104F0
/*140a317af*/  nop
/*140a317b0*/  movdqu xmm0, [rbp+580h+var_180]
/*140a317b8*/  movdqu xmm1, [rbp+580h+var_170]
/*140a317c0*/  mov rax, [rbp+580h+var_110]
/*140a317c7*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a317cc*/  movdqu xmmword ptr [rax], xmm0
/*140a317d0*/  mov rbx, [rbp+580h+var_188]
/*140a317d7*/  mov r14, [rbp+580h+var_F8]
/*140a317de*/ loc_140A317DE: mov r8d, 1
/*140a317e4*/  mov rcx, r14
/*140a317e7*/  mov rdx, rbx
/*140a317ea*/  call sub_140001660
/*140a317ef*/ loc_140A317EF: mov qword ptr [rbp+580h+var_240], 0
/*140a317fa*/  mov [rbp+580h+var_230], 0
/*140a31805*/  call nullsub_1
/*140a3180a*/  mov ecx, 4
/*140a3180f*/  mov edx, 1
/*140a31814*/  call sub_140001650
/*140a31819*/  test rax, rax
/*140a3181c*/  jz loc_140A32A9D
/*140a31822*/  mov dword ptr [rax], 65707974h
/*140a31828*/  mov qword ptr [rbp+580h+var_200], 4
/*140a31833*/  mov qword ptr [rbp+580h+var_200+8], rax
/*140a3183a*/  mov qword ptr [rbp+580h+var_1F0], 4
/*140a31845*/  call nullsub_1
/*140a3184a*/  mov ecx, 9
/*140a3184f*/  mov edx, 1
/*140a31854*/  call sub_140001650
/*140a31859*/  test rax, rax
/*140a3185c*/  mov [rbp+580h+var_188], rax
/*140a31863*/  jz loc_140A32AB2
/*140a31869*/  mov rcx, 6172656D65687065h
/*140a31873*/  mov [rax], rcx
/*140a31876*/  mov byte ptr [rax+8], 6Ch ; 'l'
/*140a3187a*/  mov byte ptr [rbp+580h+var_180], 3
/*140a31881*/  mov qword ptr [rbp+580h+var_180+8], 9
/*140a3188c*/  mov qword ptr [rbp+580h+var_170], rax
/*140a31893*/  mov qword ptr [rbp+580h+var_170+8], 9
/*140a3189e*/ loc_140A3189E: lea rcx, [rbp+580h+var_1C0]
/*140a318a5*/  lea rdx, [rbp+580h+var_240]
/*140a318ac*/  lea r8, [rbp+580h+var_200]
/*140a318b3*/  lea r9, [rbp+580h+var_180]
/*140a318ba*/  call sub_140307860
/*140a318bf*/  nop
/*140a318c0*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a318c7*/  jz short loc_140A318D6
/*140a318c9*/ loc_140A318C9: lea rcx, [rbp+580h+var_1C0]
/*140a318d0*/  call sub_1400104F0
/*140a318d5*/  nop
/*140a318d6*/ loc_140A318D6: movdqu xmm0, [rbp+580h+var_240]
/*140a318de*/  movdqu [rbp+580h+var_260+8], xmm0
/*140a318e6*/  mov rax, [rbp+580h+var_230]
/*140a318ed*/  mov qword ptr [rbp+580h+var_250+8], rax
/*140a318f4*/  mov byte ptr [rbp+580h+var_260], 5
/*140a318fb*/  mov [rbp+580h+var_E9], 1
/*140a31902*/ loc_140A31902: lea rcx, aSystem_0; "system"
/*140a31909*/  lea r8, [rbp+580h+var_2F8]
/*140a31910*/  mov edx, 6
/*140a31915*/  call sub_141433D50
/*140a3191a*/  nop
/*140a3191b*/  test rax, rax
/*140a3191e*/  jz loc_140A31FDA
/*140a31924*/  movzx ecx, byte ptr [rax]
/*140a31927*/  lea rdx, jpt_140A31935
/*140a3192e*/  movsxd rcx, ds:(jpt_140A31935 - 1417AB2E8h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a31932*/  add rcx, rdx
/*140a31935*/  jmp rcx; switch jump  // switch jump
/*140a31937*/ loc_140A31937: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A31935 cases 1,2  // jumptable 0000000140A31935 cases 1,2
/*140a3193b*/  movdqu xmm1, xmmword ptr [rax+10h]
/*140a31940*/  movdqa [rbp+580h+var_170], xmm1
/*140a31948*/  movdqa [rbp+580h+var_180], xmm0
/*140a31950*/  jmp loc_140A319F2
/*140a31955*/ loc_140A31955: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A31935 case 4  // jumptable 0000000140A31935 case 4
/*140a3195c*/  mov rdx, [rax+10h]
/*140a31960*/  mov r8, [rax+18h]
/*140a31964*/  mov [rbp+580h+var_E9], 1
/*140a3196b*/  call sub_1402CE260
/*140a31970*/  nop
/*140a31971*/  mov byte ptr [rbp+580h+var_180], 4
/*140a31978*/  jmp short loc_140A319F2
/*140a3197a*/ loc_140A3197A: mov byte ptr [rbp+580h+var_180], 0; jumptable 0000000140A31935 case 0  // jumptable 0000000140A31935 case 0
/*140a31981*/  jmp short loc_140A319F2
/*140a31983*/ loc_140A31983: add rax, 8; jumptable 0000000140A31935 case 3  // jumptable 0000000140A31935 case 3
/*140a31987*/  lea rcx, [rbp+580h+var_180+8]
/*140a3198e*/  mov [rbp+580h+var_E9], 1
/*140a31995*/  mov rdx, rax
/*140a31998*/  call sub_14149C500
/*140a3199d*/  nop
/*140a3199e*/  mov byte ptr [rbp+580h+var_180], 3
/*140a319a5*/  jmp short loc_140A319F2
/*140a319a7*/ loc_140A319A7: cmp qword ptr [rax+18h], 0; jumptable 0000000140A31935 case 5  // jumptable 0000000140A31935 case 5
/*140a319ac*/  jz short loc_140A319D5
/*140a319ae*/  mov rdx, [rax+8]
/*140a319b2*/  test rdx, rdx
/*140a319b5*/  jz loc_140A32999
/*140a319bb*/  lea rcx, [rbp+580h+var_180+8]
/*140a319c2*/  mov r8, [rax+10h]
/*140a319c6*/  mov [rbp+580h+var_E9], 1
/*140a319cd*/  call sub_1402CCD80
/*140a319d2*/  nop
/*140a319d3*/  jmp short loc_140A319EB
/*140a319d5*/ loc_140A319D5: mov qword ptr [rbp+580h+var_180+8], 0
/*140a319e0*/  mov qword ptr [rbp+580h+var_170+8], 0
/*140a319eb*/ loc_140A319EB: mov byte ptr [rbp+580h+var_180], 5
/*140a319f2*/ loc_140A319F2: movzx eax, byte ptr [rbp+580h+var_180]
/*140a319f9*/  mov rcx, qword ptr [rbp+580h+var_180+1]
/*140a31a00*/  mov edx, dword ptr [rbp+580h+var_180+9]
/*140a31a06*/  movzx r8d, word ptr [rbp+580h+var_180+0Dh]
/*140a31a0e*/  movzx r9d, byte ptr [rbp+580h+var_180+0Fh]
/*140a31a16*/  movdqa xmm0, [rbp+580h+var_170]
/*140a31a1e*/  movdqa [rbp+580h+var_1F0], xmm0
/*140a31a26*/  mov byte ptr [rbp+580h+var_200], al
/*140a31a2c*/  mov qword ptr [rbp+580h+var_200+1], rcx
/*140a31a33*/  mov dword ptr [rbp+580h+var_200+9], edx
/*140a31a39*/  mov word ptr [rbp+580h+var_200+0Dh], r8w
/*140a31a41*/  mov byte ptr [rbp+580h+var_200+0Fh], r9b
/*140a31a48*/  movzx edi, byte ptr [rbp+580h+var_200]
/*140a31a4f*/  cmp edi, 4
/*140a31a52*/  jz loc_140A31BF0
/*140a31a58*/  cmp edi, 3
/*140a31a5b*/  jnz loc_140A31FBC
/*140a31a61*/  mov rbx, qword ptr [rbp+580h+var_200+8]
/*140a31a68*/  mov rax, qword ptr [rbp+580h+var_1F0]
/*140a31a6f*/  mov [rbp+580h+var_268], rax
/*140a31a76*/  mov rsi, qword ptr [rbp+580h+var_1F0+8]
/*140a31a7d*/  call nullsub_1
/*140a31a82*/  mov ecx, 20h ; ' '
/*140a31a87*/  mov edx, 8
/*140a31a8c*/  call sub_140001650
/*140a31a91*/  test rax, rax
/*140a31a94*/  mov dword ptr [rbp+580h+var_188], edi
/*140a31a9a*/  mov [rbp+580h+var_F8], rbx
/*140a31aa1*/  jz loc_140A32984
/*140a31aa7*/  mov r14, rax
/*140a31aaa*/  mov qword ptr [rbp+580h+var_330], 0
/*140a31ab5*/  mov qword ptr [rbp+580h+var_330+10h], 0
/*140a31ac0*/  call nullsub_1
/*140a31ac5*/  mov ecx, 4
/*140a31aca*/  mov edx, 1
/*140a31acf*/  call sub_140001650
/*140a31ad4*/  test rax, rax
/*140a31ad7*/  mov [rbp+580h+var_110], r14
/*140a31ade*/  jz loc_140A32AC7
/*140a31ae4*/  mov dword ptr [rax], 65707974h
/*140a31aea*/  mov qword ptr [rbp+580h+var_240], 4
/*140a31af5*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a31afc*/  mov [rbp+580h+var_230], 4
/*140a31b07*/  call nullsub_1
/*140a31b0c*/  mov ecx, 4
/*140a31b11*/  mov edx, 1
/*140a31b16*/  call sub_140001650
/*140a31b1b*/  test rax, rax
/*140a31b1e*/  mov [rbp+580h+var_2B8], rax
/*140a31b25*/  jz loc_140A32ADC
/*140a31b2b*/  mov dword ptr [rax], 74786574h
/*140a31b31*/  mov byte ptr [rbp+580h+var_180], 3
/*140a31b38*/  mov qword ptr [rbp+580h+var_180+8], 4
/*140a31b43*/  mov qword ptr [rbp+580h+var_170], rax
/*140a31b4a*/  mov qword ptr [rbp+580h+var_170+8], 4
/*140a31b55*/ loc_140A31B55: lea rcx, [rbp+580h+var_1C0]
/*140a31b5c*/  lea rdx, [rbp+580h+var_330]
/*140a31b63*/  lea r8, [rbp+580h+var_240]
/*140a31b6a*/  lea r9, [rbp+580h+var_180]
/*140a31b71*/  call sub_140307860
/*140a31b76*/  nop
/*140a31b77*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a31b7e*/  jz short loc_140A31B8D
/*140a31b80*/ loc_140A31B80: lea rcx, [rbp+580h+var_1C0]
/*140a31b87*/  call sub_1400104F0
/*140a31b8c*/  nop
/*140a31b8d*/ loc_140A31B8D: call nullsub_1
/*140a31b92*/  mov ecx, 4
/*140a31b97*/  mov edx, 1
/*140a31b9c*/  call sub_140001650
/*140a31ba1*/  test rax, rax
/*140a31ba4*/  jz loc_140A32AF1
/*140a31baa*/  mov dword ptr [rax], 74786574h
/*140a31bb0*/  mov qword ptr [rbp+580h+var_240], 4
/*140a31bbb*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a31bc2*/  mov [rbp+580h+var_230], 4
/*140a31bcd*/  test rsi, rsi
/*140a31bd0*/  jns loc_140A31C80
/*140a31bd6*/  xor ebx, ebx
/*140a31bd8*/ loc_140A31BD8: mov [rbp+580h+var_2CF], 1
/*140a31bdf*/ loc_140A31BDF: mov rcx, rbx
/*140a31be2*/  mov rdx, rsi
/*140a31be5*/  call sub_1416C2D4B
/*140a31beb*/ loc_140A31BEB: jmp loc_140A3143D
/*140a31bf0*/ loc_140A31BF0: mov dword ptr [rbp+580h+var_188], edi
/*140a31bf6*/  mov rdi, qword ptr [rbp+580h+var_1F0+8]
/*140a31bfd*/  mov qword ptr [rbp+580h+var_330+10h], rdi
/*140a31c04*/  movzx eax, byte ptr [rbp+580h+var_200+8]
/*140a31c0b*/  mov [rbp+580h+var_330], al
/*140a31c11*/  mov eax, dword ptr [rbp+580h+var_200+9]
/*140a31c17*/  mov dword ptr [rbp+580h+var_330+1], eax
/*140a31c1d*/  movzx eax, word ptr [rbp+580h+var_200+0Dh]
/*140a31c24*/  mov word ptr [rbp+580h+var_330+5], ax
/*140a31c2b*/  movzx eax, byte ptr [rbp+580h+var_200+0Fh]
/*140a31c32*/  mov [rbp+580h+var_330+7], al
/*140a31c38*/  mov rax, qword ptr [rbp+580h+var_1F0]
/*140a31c3f*/  mov qword ptr [rbp+580h+var_330+8], rax
/*140a31c46*/  test rdi, rdi
/*140a31c49*/  jnz loc_140A31DA2
/*140a31c4f*/  mov rdx, qword ptr [rbp+580h+var_330]
/*140a31c56*/  test rdx, rdx
/*140a31c59*/  mov edi, dword ptr [rbp+580h+var_188]
/*140a31c5f*/  jz loc_140A31FBC
/*140a31c65*/  mov rcx, qword ptr [rbp+580h+var_330+8]
/*140a31c6c*/  shl rdx, 5
/*140a31c70*/  mov r8d, 8
/*140a31c76*/  call sub_140001660
/*140a31c7b*/  jmp loc_140A31FBC
/*140a31c80*/ loc_140A31C80: jz short loc_140A31CB9
/*140a31c82*/  call nullsub_1
/*140a31c87*/  mov ebx, 1
/*140a31c8c*/  mov edx, 1
/*140a31c91*/  mov rcx, rsi
/*140a31c94*/  call sub_140001650
/*140a31c99*/  test rax, rax
/*140a31c9c*/  jz loc_140A31BD8
/*140a31ca2*/  mov rdi, rax
/*140a31ca5*/  mov rcx, rax
/*140a31ca8*/  mov rdx, [rbp+580h+var_268]
/*140a31caf*/  mov r8, rsi
/*140a31cb2*/  call sub_141684120
/*140a31cb7*/  jmp short loc_140A31CBE
/*140a31cb9*/ loc_140A31CB9: mov edi, 1
/*140a31cbe*/ loc_140A31CBE: mov byte ptr [rbp+580h+var_180], 3
/*140a31cc5*/  mov qword ptr [rbp+580h+var_180+8], rsi
/*140a31ccc*/  mov qword ptr [rbp+580h+var_170], rdi
/*140a31cd3*/  mov qword ptr [rbp+580h+var_170+8], rsi
/*140a31cda*/  mov [rbp+580h+var_2CF], 0
/*140a31ce1*/ loc_140A31CE1: lea rcx, [rbp+580h+var_1C0]
/*140a31ce8*/  lea rdx, [rbp+580h+var_330]
/*140a31cef*/  lea r8, [rbp+580h+var_240]
/*140a31cf6*/  lea r9, [rbp+580h+var_180]
/*140a31cfd*/  call sub_140307860
/*140a31d02*/  nop
/*140a31d03*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a31d0a*/  jz short loc_140A31D19
/*140a31d0c*/ loc_140A31D0C: lea rcx, [rbp+580h+var_1C0]
/*140a31d13*/  call sub_1400104F0
/*140a31d18*/  nop
/*140a31d19*/ loc_140A31D19: mov rax, qword ptr [rbp+580h+var_330+10h]
/*140a31d20*/  movups xmm0, xmmword ptr [rbp+580h+var_330]
/*140a31d27*/  movups [rbp+580h+var_180+7], xmm0
/*140a31d2e*/  mov qword ptr [rbp+580h+var_170+7], rax
/*140a31d35*/  mov rcx, [rbp+580h+var_110]
/*140a31d3c*/  mov byte ptr [rcx], 5
/*140a31d3f*/  movdqu xmm0, [rbp+580h+var_180]
/*140a31d47*/  mov rax, qword ptr [rbp+580h+var_180+0Fh]
/*140a31d4e*/  mov [rcx+10h], rax
/*140a31d52*/  mov rax, qword ptr [rbp+580h+var_170+7]
/*140a31d59*/  mov [rcx+18h], rax
/*140a31d5d*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a31d62*/  mov qword ptr [rbp+580h+var_330], 1
/*140a31d6d*/  mov qword ptr [rbp+580h+var_330+8], rcx
/*140a31d74*/  mov qword ptr [rbp+580h+var_330+10h], 1
/*140a31d7f*/  mov rdx, [rbp+580h+var_F8]
/*140a31d86*/  mov edi, 1
/*140a31d8b*/  test rdx, rdx
/*140a31d8e*/  jz short loc_140A31DA2
/*140a31d90*/  mov r8d, 1
/*140a31d96*/  mov rcx, [rbp+580h+var_268]
/*140a31d9d*/  call sub_140001660
/*140a31da2*/ loc_140A31DA2: mov rsi, qword ptr [rbp+580h+var_330+8]
/*140a31da9*/  shl rdi, 5
/*140a31dad*/  cmp byte ptr [rsi+rdi-20h], 5
/*140a31db2*/  jnz loc_140A31F41
/*140a31db8*/  call nullsub_1
/*140a31dbd*/  mov ecx, 0Dh
/*140a31dc2*/  mov edx, 1
/*140a31dc7*/  call sub_140001650
/*140a31dcc*/  test rax, rax
/*140a31dcf*/  jz loc_140A32B06
/*140a31dd5*/  mov rcx, 6C6F72746E6F635Fh
/*140a31ddf*/  mov [rax+5], rcx
/*140a31de3*/  mov rcx, 6F635F6568636163h
/*140a31ded*/  mov [rax], rcx
/*140a31df0*/  mov qword ptr [rbp+580h+var_240], 0Dh
/*140a31dfb*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a31e02*/  mov [rbp+580h+var_230], 0Dh
/*140a31e0d*/  movzx eax, byte ptr [rbp+580h+var_260]
/*140a31e14*/  lea rcx, jpt_140A31E22
/*140a31e1b*/  movsxd rax, ds:(jpt_140A31E22 - 1417AB300h)[rcx+rax*4]; switch 6 cases  // switch 6 cases
/*140a31e1f*/  add rax, rcx
/*140a31e22*/  jmp rax; switch jump  // switch jump
/*140a31e24*/ loc_140A31E24: movdqu xmm0, [rbp+580h+var_260]; jumptable 0000000140A31E22 cases 1,2  // jumptable 0000000140A31E22 cases 1,2
/*140a31e2c*/  movdqu xmm1, [rbp+580h+var_250]
/*140a31e34*/  movdqa [rbp+580h+var_170], xmm1
/*140a31e3c*/  movdqa [rbp+580h+var_180], xmm0
/*140a31e44*/  jmp loc_140A31EF8
/*140a31e49*/ loc_140A31E49: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A31E22 case 4  // jumptable 0000000140A31E22 case 4
/*140a31e50*/  mov rdx, qword ptr [rbp+580h+var_250]
/*140a31e57*/  mov r8, qword ptr [rbp+580h+var_250+8]
/*140a31e5e*/  mov [rbp+580h+var_1CC], 1
/*140a31e65*/ loc_140A31E65: call sub_1402CE260
/*140a31e6a*/  nop
/*140a31e6b*/  mov byte ptr [rbp+580h+var_180], 4
/*140a31e72*/  jmp loc_140A31EF8
/*140a31e77*/ loc_140A31E77: mov byte ptr [rbp+580h+var_180], 0; jumptable 0000000140A31E22 case 0  // jumptable 0000000140A31E22 case 0
/*140a31e7e*/  jmp short loc_140A31EF8
/*140a31e80*/ loc_140A31E80: lea rdx, [rbp+580h+var_260+8]; jumptable 0000000140A31E22 case 3  // jumptable 0000000140A31E22 case 3
/*140a31e87*/  lea rcx, [rbp+580h+var_180+8]
/*140a31e8e*/  mov [rbp+580h+var_1CC], 1
/*140a31e95*/  call sub_14149C500
/*140a31e9a*/  nop
/*140a31e9b*/  mov byte ptr [rbp+580h+var_180], 3
/*140a31ea2*/  jmp short loc_140A31EF8
/*140a31ea4*/ loc_140A31EA4: cmp qword ptr [rbp+580h+var_250+8], 0; jumptable 0000000140A31E22 case 5  // jumptable 0000000140A31E22 case 5
/*140a31eac*/  jz short loc_140A31EDB
/*140a31eae*/  mov rdx, qword ptr [rbp+580h+var_260+8]
/*140a31eb5*/  test rdx, rdx
/*140a31eb8*/  jz loc_140A329B2
/*140a31ebe*/  lea rcx, [rbp+580h+var_180+8]
/*140a31ec5*/  mov r8, qword ptr [rbp+580h+var_250]
/*140a31ecc*/  mov [rbp+580h+var_1CC], 1
/*140a31ed3*/  call sub_1402CCD80
/*140a31ed8*/  nop
/*140a31ed9*/  jmp short loc_140A31EF1
/*140a31edb*/ loc_140A31EDB: mov qword ptr [rbp+580h+var_180+8], 0
/*140a31ee6*/  mov qword ptr [rbp+580h+var_170+8], 0
/*140a31ef1*/ loc_140A31EF1: mov byte ptr [rbp+580h+var_180], 5
/*140a31ef8*/ loc_140A31EF8: add rsi, rdi
/*140a31efb*/  add rsi, 0FFFFFFFFFFFFFFE8h
/*140a31eff*/  mov [rbp+580h+var_1CC], 0
/*140a31f06*/  lea rcx, [rbp+580h+var_1C0]
/*140a31f0d*/  lea r8, [rbp+580h+var_240]
/*140a31f14*/  lea r9, [rbp+580h+var_180]
/*140a31f1b*/  mov rdx, rsi
/*140a31f1e*/  call sub_140307860
/*140a31f23*/  nop
/*140a31f24*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a31f2b*/  jz short loc_140A31F41
/*140a31f2d*/  mov [rbp+580h+var_18A], 1
/*140a31f34*/ loc_140A31F34: lea rcx, [rbp+580h+var_1C0]
/*140a31f3b*/  call sub_1400104F0
/*140a31f40*/  nop
/*140a31f41*/ loc_140A31F41: mov rax, qword ptr [rbp+580h+var_330+10h]
/*140a31f48*/  mov qword ptr [rbp+580h+var_170+8], rax
/*140a31f4f*/  movdqa xmm0, xmmword ptr [rbp+580h+var_330]
/*140a31f57*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a31f5f*/  mov byte ptr [rbp+580h+var_180], 4
/*140a31f66*/  mov [rbp+580h+var_2D0], 1
/*140a31f6d*/ loc_140A31F6D: lea rcx, aSystem_0; "system"
/*140a31f74*/  lea r8, [rbp+580h+var_2F8]
/*140a31f7b*/  mov edx, 6
/*140a31f80*/  call sub_141433E50
/*140a31f85*/  nop
/*140a31f86*/ loc_140A31F86: mov [rbp+580h+var_F8], rax
/*140a31f8d*/  mov rcx, rax
/*140a31f90*/  call sub_1400104F0
/*140a31f95*/  nop
/*140a31f96*/  movdqu xmm0, [rbp+580h+var_180]
/*140a31f9e*/  movdqu xmm1, [rbp+580h+var_170]
/*140a31fa6*/  mov rax, [rbp+580h+var_F8]
/*140a31fad*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a31fb2*/  movdqu xmmword ptr [rax], xmm0
/*140a31fb6*/  mov edi, dword ptr [rbp+580h+var_188]
/*140a31fbc*/ loc_140A31FBC: add dil, 0FDh
/*140a31fc0*/  cmp dil, 2
/*140a31fc4*/  jb short loc_140A31FDA
/*140a31fc6*/  mov [rbp+580h+var_E9], 1
/*140a31fcd*/ loc_140A31FCD: lea rcx, [rbp+580h+var_200]
/*140a31fd4*/  call sub_1400104F0
/*140a31fd9*/  nop
/*140a31fda*/ loc_140A31FDA: mov [rbp+580h+var_E9], 1
/*140a31fe1*/  lea rcx, aMessages; "messages"
/*140a31fe8*/  lea r8, [rbp+580h+var_2F8]
/*140a31fef*/  mov edx, 8
/*140a31ff4*/  call sub_141433D50
/*140a31ff9*/  nop
/*140a31ffa*/  test rax, rax
/*140a31ffd*/  jz loc_140A32735
/*140a32003*/  cmp byte ptr [rax], 4
/*140a32006*/  jnz loc_140A32735
/*140a3200c*/  mov rdi, [rax+18h]
/*140a32010*/  test rdi, rdi
/*140a32013*/  jz loc_140A32735
/*140a32019*/  mov rbx, [rax+10h]
/*140a3201d*/  shl rdi, 5
/*140a32021*/  add rdi, rbx
/*140a32024*/  lea rsi, aRole_4; "role"
/*140a3202b*/  jmp short loc_140A32039
/*140a32030*/ loc_140A32030: cmp rbx, rdi
/*140a32033*/  jz loc_140A32735
/*140a32039*/ loc_140A32039: add rdi, 0FFFFFFFFFFFFFFE0h
/*140a3203d*/  mov [rbp+580h+var_E9], 1
/*140a32044*/  mov edx, 4
/*140a32049*/  mov rcx, rsi
/*140a3204c*/  mov r8, rdi
/*140a3204f*/  call sub_141433D50
/*140a32054*/  nop
/*140a32055*/  test rax, rax
/*140a32058*/  jz short loc_140A32030
/*140a3205a*/  cmp byte ptr [rax], 3
/*140a3205d*/  jnz short loc_140A32030
/*140a3205f*/  cmp qword ptr [rax+18h], 4
/*140a32064*/  jnz short loc_140A32030
/*140a32066*/  mov rax, [rax+10h]
/*140a3206a*/  mov eax, [rax]
/*140a3206c*/  bswap eax
/*140a3206e*/  cmp eax, 75736573h
/*140a32073*/  setnb cl
/*140a32076*/  cmp eax, 75736572h
/*140a3207b*/  sbb cl, 0
/*140a3207e*/  movsx eax, cl
/*140a32081*/  test eax, eax
/*140a32083*/  jnz short loc_140A32030
/*140a32085*/  mov [rbp+580h+var_E9], 1
/*140a3208c*/  lea rcx, aContent_6; "content"
/*140a32093*/  mov edx, 7
/*140a32098*/  mov r8, rdi
/*140a3209b*/  call sub_141433D50
/*140a320a0*/  nop
/*140a320a1*/  test rax, rax
/*140a320a4*/  jz loc_140A32735
/*140a320aa*/  movzx ecx, byte ptr [rax]
/*140a320ad*/  lea rdx, jpt_140A320BB
/*140a320b4*/  movsxd rcx, ds:(jpt_140A320BB - 1417AB318h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a320b8*/  add rcx, rdx
/*140a320bb*/  jmp rcx; switch jump  // switch jump
/*140a320bd*/ loc_140A320BD: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A320BB cases 1,2  // jumptable 0000000140A320BB cases 1,2
/*140a320c1*/  movdqu xmm1, xmmword ptr [rax+10h]
/*140a320c6*/  movdqa [rbp+580h+var_170], xmm1
/*140a320ce*/  movdqa [rbp+580h+var_180], xmm0
/*140a320d6*/  jmp short loc_140A3214C
/*140a320d8*/ loc_140A320D8: lea rcx, [rbp+580h+var_180+8]; jumptable 0000000140A320BB case 4  // jumptable 0000000140A320BB case 4
/*140a320df*/  mov rdx, [rax+10h]
/*140a320e3*/  mov r8, [rax+18h]
/*140a320e7*/  mov [rbp+580h+var_E9], 1
/*140a320ee*/  call sub_1402CE260
/*140a320f3*/  nop
/*140a320f4*/  mov byte ptr [rbp+580h+var_180], 4
/*140a320fb*/  jmp short loc_140A3214C
/*140a320fd*/ loc_140A320FD: mov byte ptr [rbp+580h+var_180], 0; jumptable 0000000140A320BB case 0  // jumptable 0000000140A320BB case 0
/*140a32104*/  jmp short loc_140A3214C
/*140a32106*/ loc_140A32106: add rax, 8; jumptable 0000000140A320BB case 3  // jumptable 0000000140A320BB case 3
/*140a3210a*/  lea rcx, [rbp+580h+var_180+8]
/*140a32111*/  mov [rbp+580h+var_E9], 1
/*140a32118*/  mov rdx, rax
/*140a3211b*/  call sub_14149C500
/*140a32120*/  nop
/*140a32121*/  mov byte ptr [rbp+580h+var_180], 3
/*140a32128*/  jmp short loc_140A3214C
/*140a3212a*/ loc_140A3212A: add rax, 8; jumptable 0000000140A320BB case 5  // jumptable 0000000140A320BB case 5
/*140a3212e*/  lea rcx, [rbp+580h+var_180+8]
/*140a32135*/  mov [rbp+580h+var_E9], 1
/*140a3213c*/  mov rdx, rax
/*140a3213f*/  call sub_140323EA0
/*140a32144*/  nop
/*140a32145*/  mov byte ptr [rbp+580h+var_180], 5
/*140a3214c*/ loc_140A3214C: movzx eax, byte ptr [rbp+580h+var_180]
/*140a32153*/  mov rcx, qword ptr [rbp+580h+var_180+1]
/*140a3215a*/  mov edx, dword ptr [rbp+580h+var_180+9]
/*140a32160*/  movzx r8d, word ptr [rbp+580h+var_180+0Dh]
/*140a32168*/  movzx r9d, byte ptr [rbp+580h+var_180+0Fh]
/*140a32170*/  movdqa xmm0, [rbp+580h+var_170]
/*140a32178*/  movdqa [rbp+580h+var_1F0], xmm0
/*140a32180*/  mov byte ptr [rbp+580h+var_200], al
/*140a32186*/  mov qword ptr [rbp+580h+var_200+1], rcx
/*140a3218d*/  mov dword ptr [rbp+580h+var_200+9], edx
/*140a32193*/  mov word ptr [rbp+580h+var_200+0Dh], r8w
/*140a3219b*/  mov byte ptr [rbp+580h+var_200+0Fh], r9b
/*140a321a2*/  movzx eax, byte ptr [rbp+580h+var_200]
/*140a321a9*/  cmp eax, 3
/*140a321ac*/  jz loc_140A322DB
/*140a321b2*/  cmp eax, 4
/*140a321b5*/  jnz loc_140A3267E
/*140a321bb*/  mov rbx, qword ptr [rbp+580h+var_1F0+8]
/*140a321c2*/  mov qword ptr [rbp+580h+var_330+10h], rbx
/*140a321c9*/  movdqu xmm0, [rbp+580h+var_200+8]
/*140a321d1*/  movdqa xmmword ptr [rbp+580h+var_330], xmm0
/*140a321d9*/  mov al, 1
/*140a321db*/  test rbx, rbx
/*140a321de*/  jz loc_140A32686
/*140a321e4*/  mov dword ptr [rbp+580h+var_188], eax
/*140a321ea*/  mov rsi, qword ptr [rbp+580h+var_330+8]
/*140a321f1*/  shl rbx, 5
/*140a321f5*/  cmp byte ptr [rsi+rbx-20h], 5
/*140a321fa*/  jnz loc_140A3268C
/*140a32200*/  call nullsub_1
/*140a32205*/  mov ecx, 0Dh
/*140a3220a*/  mov edx, 1
/*140a3220f*/  call sub_140001650
/*140a32214*/  test rax, rax
/*140a32217*/  jz loc_140A32B61
/*140a3221d*/  add rsi, rbx
/*140a32220*/  add rsi, 0FFFFFFFFFFFFFFE8h
/*140a32224*/  mov rcx, 6C6F72746E6F635Fh
/*140a3222e*/  mov [rax+5], rcx
/*140a32232*/  mov rcx, 6F635F6568636163h
/*140a3223c*/  mov [rax], rcx
/*140a3223f*/  mov qword ptr [rbp+580h+var_240], 0Dh
/*140a3224a*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a32251*/  mov [rbp+580h+var_230], 0Dh
/*140a3225c*/  movdqu xmm0, [rbp+580h+var_260]
/*140a32264*/  movdqu xmm1, [rbp+580h+var_250]
/*140a3226c*/  movdqa [rbp+580h+var_170], xmm1
/*140a32274*/  movdqa [rbp+580h+var_180], xmm0
/*140a3227c*/  mov [rbp+580h+var_1CD], 0
/*140a32283*/  mov [rbp+580h+var_1CE], 1
/*140a3228a*/ loc_140A3228A: lea rcx, [rbp+580h+var_1C0]
/*140a32291*/  lea r8, [rbp+580h+var_240]
/*140a32298*/  lea r9, [rbp+580h+var_180]
/*140a3229f*/  mov rdx, rsi
/*140a322a2*/  call sub_140307860
/*140a322a7*/  nop
/*140a322a8*/  cmp byte ptr [rbp+580h+var_1C0], 0FFh
/*140a322af*/  jz short loc_140A322CC
/*140a322b1*/  mov [rbp+580h+var_1CD], 0
/*140a322b8*/  mov [rbp+580h+var_1CE], 1
/*140a322bf*/  lea rcx, [rbp+580h+var_1C0]
/*140a322c6*/  call sub_1400104F0
/*140a322cb*/  nop
/*140a322cc*/ loc_140A322CC: mov dword ptr [rbp+580h+var_188], 0
/*140a322d6*/  jmp loc_140A3268C
/*140a322db*/ loc_140A322DB: mov rsi, qword ptr [rbp+580h+var_200+8]
/*140a322e2*/  mov rbx, qword ptr [rbp+580h+var_1F0]
/*140a322e9*/  call nullsub_1
/*140a322ee*/  mov ecx, 20h ; ' '
/*140a322f3*/  mov edx, 8
/*140a322f8*/  call sub_140001650
/*140a322fd*/  test rax, rax
/*140a32300*/  mov [rbp+580h+var_188], rsi
/*140a32307*/  mov [rbp+580h+var_110], rbx
/*140a3230e*/  jz loc_140A329CB
/*140a32314*/  mov [rbp+580h+var_F8], rax
/*140a3231b*/  mov qword ptr [rbp+580h+var_330], 0
/*140a32326*/  mov qword ptr [rbp+580h+var_330+10h], 0
/*140a32331*/  call nullsub_1
/*140a32336*/  mov ecx, 4
/*140a3233b*/  mov edx, 1
/*140a32340*/  call sub_140001650
/*140a32345*/  test rax, rax
/*140a32348*/  jz loc_140A32B22
/*140a3234e*/  mov dword ptr [rax], 65707974h
/*140a32354*/  mov qword ptr [rbp+580h+var_240], 4
/*140a3235f*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a32366*/  mov [rbp+580h+var_230], 4
/*140a32371*/  mov [rbp+580h+var_216], 1
/*140a32378*/ loc_140A32378: lea rdx, off_1417A4688; "text"
/*140a3237f*/  lea rcx, [rbp+580h+var_180]
/*140a32386*/  call sub_140B56640
/*140a3238b*/  nop
/*140a3238c*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a32393*/  jz loc_140A329E0
/*140a32399*/  movdqu xmm0, [rbp+580h+var_180]
/*140a323a1*/  movdqu xmm1, [rbp+580h+var_170]
/*140a323a9*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a323b1*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a323b9*/  mov [rbp+580h+var_216], 0
/*140a323c0*/  lea rcx, [rbp+580h+var_180]
/*140a323c7*/  lea rdx, [rbp+580h+var_330]
/*140a323ce*/  lea r8, [rbp+580h+var_240]
/*140a323d5*/  lea r9, [rbp+580h+var_1C0]
/*140a323dc*/  call sub_140307860
/*140a323e1*/  nop
/*140a323e2*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a323e9*/  jz short loc_140A323F8
/*140a323eb*/ loc_140A323EB: lea rcx, [rbp+580h+var_180]
/*140a323f2*/  call sub_1400104F0
/*140a323f7*/  nop
/*140a323f8*/ loc_140A323F8: call nullsub_1
/*140a323fd*/  mov ecx, 4
/*140a32402*/  mov edx, 1
/*140a32407*/  call sub_140001650
/*140a3240c*/  test rax, rax
/*140a3240f*/  jz loc_140A32B37
/*140a32415*/  lea rdx, [rbp+580h+var_200+8]
/*140a3241c*/  mov dword ptr [rax], 74786574h
/*140a32422*/  mov qword ptr [rbp+580h+var_240], 4
/*140a3242d*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a32434*/  mov [rbp+580h+var_230], 4
/*140a3243f*/  mov [rbp+580h+var_217], 1
/*140a32446*/ loc_140A32446: lea rcx, [rbp+580h+var_180]
/*140a3244d*/  call sub_140B56520
/*140a32452*/  nop
/*140a32453*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a3245a*/  jz loc_140A32A1F
/*140a32460*/  movdqu xmm0, [rbp+580h+var_180]
/*140a32468*/  movdqu xmm1, [rbp+580h+var_170]
/*140a32470*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a32478*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a32480*/  mov [rbp+580h+var_217], 0
/*140a32487*/  lea rcx, [rbp+580h+var_180]
/*140a3248e*/  lea rdx, [rbp+580h+var_330]
/*140a32495*/  lea r8, [rbp+580h+var_240]
/*140a3249c*/  lea r9, [rbp+580h+var_1C0]
/*140a324a3*/  call sub_140307860
/*140a324a8*/  nop
/*140a324a9*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a324b0*/  jz short loc_140A324BF
/*140a324b2*/ loc_140A324B2: lea rcx, [rbp+580h+var_180]
/*140a324b9*/  call sub_1400104F0
/*140a324be*/  nop
/*140a324bf*/ loc_140A324BF: call nullsub_1
/*140a324c4*/  mov ecx, 0Dh
/*140a324c9*/  mov edx, 1
/*140a324ce*/  call sub_140001650
/*140a324d3*/  test rax, rax
/*140a324d6*/  jz loc_140A32B4C
/*140a324dc*/  mov rcx, 6C6F72746E6F635Fh
/*140a324e6*/  mov [rax+5], rcx
/*140a324ea*/  mov rcx, 6F635F6568636163h
/*140a324f4*/  mov [rax], rcx
/*140a324f7*/  mov qword ptr [rbp+580h+var_240], 0Dh
/*140a32502*/  mov qword ptr [rbp+580h+var_240+8], rax
/*140a32509*/  mov [rbp+580h+var_230], 0Dh
/*140a32514*/  mov [rbp+580h+var_218], 1
/*140a3251b*/ loc_140A3251B: lea rcx, [rbp+580h+var_180]
/*140a32522*/  lea rdx, [rbp+580h+var_260]
/*140a32529*/  call sub_140B842D0
/*140a3252e*/  nop
/*140a3252f*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a32536*/  jz loc_140A32A5E
/*140a3253c*/  movdqu xmm0, [rbp+580h+var_180]
/*140a32544*/  movdqu xmm1, [rbp+580h+var_170]
/*140a3254c*/  movdqa [rbp+580h+var_1B0], xmm1
/*140a32554*/  movdqa [rbp+580h+var_1C0], xmm0
/*140a3255c*/  mov [rbp+580h+var_218], 0
/*140a32563*/  lea rcx, [rbp+580h+var_180]
/*140a3256a*/  lea rdx, [rbp+580h+var_330]
/*140a32571*/  lea r8, [rbp+580h+var_240]
/*140a32578*/  lea r9, [rbp+580h+var_1C0]
/*140a3257f*/  call sub_140307860
/*140a32584*/  nop
/*140a32585*/  cmp byte ptr [rbp+580h+var_180], 0FFh
/*140a3258c*/  jz short loc_140A3259B
/*140a3258e*/ loc_140A3258E: lea rcx, [rbp+580h+var_180]
/*140a32595*/  call sub_1400104F0
/*140a3259a*/  nop
/*140a3259b*/ loc_140A3259B: mov rax, qword ptr [rbp+580h+var_330+10h]
/*140a325a2*/  movups xmm0, xmmword ptr [rbp+580h+var_330]
/*140a325a9*/  movups [rbp+580h+var_180+7], xmm0
/*140a325b0*/  mov qword ptr [rbp+580h+var_170+7], rax
/*140a325b7*/  mov rcx, [rbp+580h+var_F8]
/*140a325be*/  mov byte ptr [rcx], 5
/*140a325c1*/  movdqu xmm0, [rbp+580h+var_180]
/*140a325c9*/  mov rax, qword ptr [rbp+580h+var_180+0Fh]
/*140a325d0*/  mov [rcx+10h], rax
/*140a325d4*/  mov rax, qword ptr [rbp+580h+var_170+7]
/*140a325db*/  mov [rcx+18h], rax
/*140a325df*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a325e4*/  mov qword ptr [rbp+580h+var_180+8], 1
/*140a325ef*/  mov qword ptr [rbp+580h+var_170], rcx
/*140a325f6*/  mov qword ptr [rbp+580h+var_170+8], 1
/*140a32601*/  mov byte ptr [rbp+580h+var_180], 4
/*140a32608*/  mov [rbp+580h+var_2D1], 1
/*140a3260f*/ loc_140A3260F: lea rcx, aContent_6; "content"
/*140a32616*/  mov edx, 7
/*140a3261b*/  mov r8, rdi
/*140a3261e*/  call sub_141433E50
/*140a32623*/  nop
/*140a32624*/ loc_140A32624: mov [rbp+580h+var_F8], rax
/*140a3262b*/  mov rcx, rax
/*140a3262e*/  call sub_1400104F0
/*140a32633*/  nop
/*140a32634*/  movdqu xmm0, [rbp+580h+var_180]
/*140a3263c*/  movdqu xmm1, [rbp+580h+var_170]
/*140a32644*/  mov rax, [rbp+580h+var_F8]
/*140a3264b*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a32650*/  movdqu xmmword ptr [rax], xmm0
/*140a32654*/  mov sil, 1
/*140a32657*/  mov rdx, [rbp+580h+var_188]
/*140a3265e*/  test rdx, rdx
/*140a32661*/  jz loc_140A32703
/*140a32667*/  mov r8d, 1
/*140a3266d*/  mov rcx, [rbp+580h+var_110]
/*140a32674*/  call sub_140001660
/*140a32679*/  jmp loc_140A32703
/*140a3267e*/ loc_140A3267E: mov sil, 1
/*140a32681*/  jmp loc_140A3270A
/*140a32686*/ loc_140A32686: mov dword ptr [rbp+580h+var_188], eax
/*140a3268c*/ loc_140A3268C: lea rax, [rbp+580h+var_200+8]
/*140a32693*/  mov rcx, [rax+10h]
/*140a32697*/  mov qword ptr [rbp+580h+var_170+8], rcx
/*140a3269e*/  movdqu xmm0, xmmword ptr [rax]
/*140a326a2*/  movdqu [rbp+580h+var_180+8], xmm0
/*140a326aa*/  mov byte ptr [rbp+580h+var_180], 4
/*140a326b1*/  mov [rbp+580h+var_2D2], 1
/*140a326b8*/ loc_140A326B8: lea rcx, aContent_6; "content"
/*140a326bf*/  mov edx, 7
/*140a326c4*/  mov r8, rdi
/*140a326c7*/  call sub_141433E50
/*140a326cc*/  nop
/*140a326cd*/ loc_140A326CD: mov [rbp+580h+var_F8], rax
/*140a326d4*/  mov rcx, rax
/*140a326d7*/  call sub_1400104F0
/*140a326dc*/  nop
/*140a326dd*/  movdqu xmm0, [rbp+580h+var_180]
/*140a326e5*/  movdqu xmm1, [rbp+580h+var_170]
/*140a326ed*/  mov rax, [rbp+580h+var_F8]
/*140a326f4*/  movdqu xmmword ptr [rax+10h], xmm1
/*140a326f9*/  movdqu xmmword ptr [rax], xmm0
/*140a326fd*/  mov esi, dword ptr [rbp+580h+var_188]
/*140a32703*/ loc_140A32703: movzx eax, byte ptr [rbp+580h+var_200]
/*140a3270a*/ loc_140A3270A: movzx eax, al
/*140a3270d*/  lea ecx, [rax-3]
/*140a32710*/  cmp ecx, 2
/*140a32713*/  jb short loc_140A32730
/*140a32715*/  cmp eax, 0FFh
/*140a3271a*/  jz short loc_140A32730
/*140a3271c*/  mov [rbp+580h+var_E9], sil
/*140a32723*/ loc_140A32723: lea rcx, [rbp+580h+var_200]
/*140a3272a*/  call sub_1400104F0
/*140a3272f*/  nop
/*140a32730*/ loc_140A32730: test sil, sil
/*140a32733*/  jz short loc_140A32742
/*140a32735*/ loc_140A32735: lea rcx, [rbp+580h+var_260]
/*140a3273c*/  call sub_1400104F0
/*140a32741*/  nop
/*140a32742*/ loc_140A32742: movups xmm0, [rbp+580h+var_2F8]
/*140a32749*/  movups xmm1, [rbp+580h+var_2E8]
/*140a32750*/  mov rax, [rbp+580h+var_450]
/*140a32757*/  movups xmmword ptr [rax+10h], xmm1
/*140a3275b*/  movups xmmword ptr [rax], xmm0
/*140a3275e*/  movdqa xmm0, [rbp+580h+var_2B0]
/*140a32766*/  movdqa xmm1, [rbp+580h+var_2A0]
/*140a3276e*/  movdqa xmm2, [rbp+580h+var_290]
/*140a32776*/  movdqu xmmword ptr [rax+40h], xmm2
/*140a3277b*/  movdqu xmmword ptr [rax+30h], xmm1
/*140a32780*/  movdqu xmmword ptr [rax+20h], xmm0
/*140a32785*/  movzx eax, byte ptr [rbp+580h+var_400]
/*140a3278c*/  mov [rbp+580h+var_FA], al
/*140a32792*/ loc_140A32792: lea rcx, [rbp+580h+var_3E0]
/*140a32799*/  call sub_1400104F0
/*140a3279e*/  nop
/*140a3279f*/  mov rdx, [rbp+580h+var_370]
/*140a327a6*/  test rdx, rdx
/*140a327a9*/  jz short loc_140A327BD
/*140a327ab*/  mov r8d, 1
/*140a327b1*/  mov rcx, [rbp+580h+var_108]
/*140a327b8*/  call sub_140001660
/*140a327bd*/ loc_140A327BD: mov rsi, [rbp+580h+var_4D0]
/*140a327c4*/  test rsi, rsi
/*140a327c7*/  jz loc_140A3289A
/*140a327cd*/  mov rdi, [rbp+580h+var_4C0]
/*140a327d4*/  test rdi, rdi
/*140a327d7*/  jz loc_140A32869
/*140a327dd*/  mov rbx, [rbp+580h+var_4D8]
/*140a327e4*/  movdqa xmm0, xmmword ptr [rbx]
/*140a327e8*/  lea r14, [rbx+10h]
/*140a327ec*/  pmovmskb r15d, xmm0
/*140a327f1*/  not r15d
/*140a327f4*/  jmp short loc_140A32812
/*140a32800*/ loc_140A32800: dec rdi
/*140a32803*/  lea eax, [r15-1]
/*140a32807*/  and eax, r15d
/*140a3280a*/  mov r15d, eax
/*140a3280d*/  test rdi, rdi
/*140a32810*/  jz short loc_140A32869
/*140a32812*/ loc_140A32812: test r15w, r15w
/*140a32816*/  jnz short loc_140A3283E
/*140a32818*/  nop dword ptr [rax+rax+00000000h]
/*140a32820*/ loc_140A32820: movdqa xmm0, xmmword ptr [r14]
/*140a32825*/  add rbx, 0FFFFFFFFFFFFFE80h
/*140a3282c*/  add r14, 10h
/*140a32830*/  pmovmskb r15d, xmm0
/*140a32835*/  xor r15d, 0FFFFh
/*140a3283c*/  jz short loc_140A32820
/*140a3283e*/ loc_140A3283E: tzcnt eax, r15d
/*140a32843*/  neg rax
/*140a32846*/  lea rax, [rax+rax*2]
/*140a3284a*/  mov rdx, [rbx+rax*8-18h]
/*140a3284f*/  test rdx, rdx
/*140a32852*/  jz short loc_140A32800
/*140a32854*/  lea rax, [rbx+rax*8]
/*140a32858*/  mov rcx, [rax-10h]
/*140a3285c*/  mov r8d, 1
/*140a32862*/  call sub_140001660
/*140a32867*/  jmp short loc_140A32800
/*140a32869*/ loc_140A32869: lea rax, [rsi+rsi*2]
/*140a3286d*/  lea rax, ds:27h[rax*8]
/*140a32875*/  and rax, 0FFFFFFFFFFFFFFF0h
/*140a32879*/  add rsi, rax
/*140a3287c*/  add rsi, 11h
/*140a32880*/  jz short loc_140A3289A
/*140a32882*/  mov rcx, [rbp+580h+var_4D8]
/*140a32889*/  sub rcx, rax
/*140a3288c*/  mov r8d, 10h
/*140a32892*/  mov rdx, rsi
/*140a32895*/  call sub_140001660
/*140a3289a*/ loc_140A3289A: mov rcx, [rbp+580h+var_358]
/*140a328a1*/  mov rax, [rbp+580h+var_350]
/*140a328a8*/  mov [rbp+580h+var_1C8], rax
/*140a328af*/  mov [rbp+580h+var_108], 0
/*140a328ba*/  mov [rbp+580h+var_188], rcx
/*140a328c1*/  nop word ptr [rax+rax+00000000h]
/*140a328d0*/ loc_140A328D0: mov rax, [rbp+580h+var_108]
/*140a328d7*/  cmp [rbp+580h+var_1C8], rax
/*140a328de*/  jz short loc_140A328F9
/*140a328e0*/  inc rax
/*140a328e3*/  mov [rbp+580h+var_108], rax
/*140a328ea*/  lea rsi, [rcx+20h]
/*140a328ee*/ loc_140A328EE: call sub_1402C3260
/*140a328f3*/  nop
/*140a328f4*/  mov rcx, rsi
/*140a328f7*/  jmp short loc_140A328D0
/*140a328f9*/ loc_140A328F9: mov rdx, [rbp+580h+var_360]
/*140a32900*/  test rdx, rdx
/*140a32903*/  jz short loc_140A3291B
/*140a32905*/  mov rcx, [rbp+580h+var_358]
/*140a3290c*/  shl rdx, 5
/*140a32910*/  mov r8d, 8
/*140a32916*/  call sub_140001660
/*140a3291b*/ loc_140A3291B: mov rax, [rbp+580h+var_450]
/*140a32922*/  movaps xmm6, [rbp+580h+var_E0]
/*140a32929*/  movaps xmm7, [rbp+580h+var_D0]
/*140a32930*/  movaps xmm8, [rbp+580h+var_C0]
/*140a32938*/  movaps xmm9, [rbp+580h+var_B0]
/*140a32940*/  movaps xmm10, [rbp+580h+var_A0]
/*140a32948*/  movaps xmm11, [rbp+580h+var_90]
/*140a32950*/  movaps xmm12, [rbp+580h+var_80]
/*140a32958*/  movaps xmm13, [rbp+580h+var_70]
/*140a32960*/  movaps xmm14, [rbp+580h+var_60]
/*140a32968*/  movaps xmm15, [rbp+580h+var_50]
/*140a32970*/  add rsp, 5C8h
/*140a32977*/  pop rbx
/*140a32978*/  pop rdi
/*140a32979*/  pop rsi
/*140a3297a*/  pop r12
/*140a3297c*/  pop r13
/*140a3297e*/  pop r14
/*140a32980*/  pop r15
/*140a32982*/  pop rbp
/*140a32983*/  retn
/*140a32984*/ loc_140A32984: mov ecx, 8
/*140a32989*/  mov edx, 20h ; ' '
/*140a3298e*/  call sub_1416C2D31
/*140a32994*/  jmp loc_140A3143D
/*140a32999*/ loc_140A32999: mov [rbp+580h+var_E9], 1
/*140a329a0*/ loc_140A329A0: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a329a7*/  call sub_1416C3040
/*140a329ad*/  jmp loc_140A3143D
/*140a329b2*/ loc_140A329B2: mov [rbp+580h+var_1CC], 1
/*140a329b9*/ loc_140A329B9: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a329c0*/  call sub_1416C3040
/*140a329c6*/  jmp loc_140A3143D
/*140a329cb*/ loc_140A329CB: mov ecx, 8
/*140a329d0*/  mov edx, 20h ; ' '
/*140a329d5*/  call sub_1416C2D31
/*140a329db*/  jmp loc_140A3143D
/*140a329e0*/ loc_140A329E0: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a329e7*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a329ee*/ loc_140A329EE: lea rax, off_1417A82B0; "src\\core\\relay\\translator.rs"
/*140a329f5*/  mov [rsp+600h+var_5E0], rax
/*140a329fa*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a32a01*/  lea r9, off_1417A5560
/*140a32a08*/  lea r8, [rbp+580h+var_1C0]
/*140a32a0f*/  mov edx, 2Bh ; '+'
/*140a32a14*/  call sub_1416C3060
/*140a32a1a*/  jmp loc_140A3143D
/*140a32a1f*/ loc_140A32A1F: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a32a26*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a32a2d*/ loc_140A32A2D: lea rax, off_1417A82B0; "src\\core\\relay\\translator.rs"
/*140a32a34*/  mov [rsp+600h+var_5E0], rax
/*140a32a39*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a32a40*/  lea r9, off_1417A5560
/*140a32a47*/  lea r8, [rbp+580h+var_1C0]
/*140a32a4e*/  mov edx, 2Bh ; '+'
/*140a32a53*/  call sub_1416C3060
/*140a32a59*/  jmp loc_140A3143D
/*140a32a5e*/ loc_140A32A5E: mov rax, qword ptr [rbp+580h+var_180+8]
/*140a32a65*/  mov qword ptr [rbp+580h+var_1C0], rax
/*140a32a6c*/ loc_140A32A6C: lea rax, off_1417A82B0; "src\\core\\relay\\translator.rs"
/*140a32a73*/  mov [rsp+600h+var_5E0], rax
/*140a32a78*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a32a7f*/  lea r9, off_1417A5560
/*140a32a86*/  lea r8, [rbp+580h+var_1C0]
/*140a32a8d*/  mov edx, 2Bh ; '+'
/*140a32a92*/  call sub_1416C3060
/*140a32a98*/  jmp loc_140A3143D
/*140a32a9d*/ loc_140A32A9D: mov ecx, 1
/*140a32aa2*/  mov edx, 4
/*140a32aa7*/  call sub_1416C2D4B
/*140a32aad*/  jmp loc_140A3143D
/*140a32ab2*/ loc_140A32AB2: mov ecx, 1
/*140a32ab7*/  mov edx, 9
/*140a32abc*/  call sub_1416C2D4B
/*140a32ac2*/  jmp loc_140A3143D
/*140a32ac7*/ loc_140A32AC7: mov ecx, 1
/*140a32acc*/  mov edx, 4
/*140a32ad1*/  call sub_1416C2D4B
/*140a32ad7*/  jmp loc_140A3143D
/*140a32adc*/ loc_140A32ADC: mov ecx, 1
/*140a32ae1*/  mov edx, 4
/*140a32ae6*/  call sub_1416C2D4B
/*140a32aec*/  jmp loc_140A3143D
/*140a32af1*/ loc_140A32AF1: mov ecx, 1
/*140a32af6*/  mov edx, 4
/*140a32afb*/  call sub_1416C2D4B
/*140a32b01*/  jmp loc_140A3143D
/*140a32b06*/ loc_140A32B06: mov [rbp+580h+var_18A], 1
/*140a32b0d*/ loc_140A32B0D: mov ecx, 1
/*140a32b12*/  mov edx, 0Dh
/*140a32b17*/  call sub_1416C2D4B
/*140a32b1d*/  jmp loc_140A3143D
/*140a32b22*/ loc_140A32B22: mov ecx, 1
/*140a32b27*/  mov edx, 4
/*140a32b2c*/  call sub_1416C2D4B
/*140a32b32*/  jmp loc_140A3143D
/*140a32b37*/ loc_140A32B37: mov ecx, 1
/*140a32b3c*/  mov edx, 4
/*140a32b41*/  call sub_1416C2D4B
/*140a32b47*/  jmp loc_140A3143D
/*140a32b4c*/ loc_140A32B4C: mov ecx, 1
/*140a32b51*/  mov edx, 0Dh
/*140a32b56*/  call sub_1416C2D4B
/*140a32b5c*/  jmp loc_140A3143D
/*140a32b61*/ loc_140A32B61: mov [rbp+580h+var_1CD], 1
/*140a32b68*/  mov [rbp+580h+var_1CE], 1
/*140a32b6f*/ loc_140A32B6F: mov ecx, 1
/*140a32b74*/  mov edx, 0Dh
/*140a32b79*/  call sub_1416C2D4B
/*140a32b7f*/ loc_140A32B7F: jmp loc_140A3143D
