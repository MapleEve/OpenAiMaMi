// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::responses_to_sse_payload | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall responses_to_sse_payload(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rax
  __int128 v11; // xmm0
  _OWORD *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int128 v19; // kr00_16
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r13
  _DWORD *v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __i... [52233 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 362/362 retrieved (all pages fetched: True)
// disasm instructions: 1909/1909 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x1409ebc30-0x1409ebc89 size=89 type=1 succ=['0x1409ebc89', '0x1409ebca3', '0x1409ebccb', '0x1409ebcd4', '0x1409ebcf5'] pred=[]
// BB 0x1409ebc89-0x1409ebca3 size=26 type=0 succ=['0x1409ebd43'] pred=['0x1409ebc30']
// BB 0x1409ebca3-0x1409ebcbc size=25 type=0 succ=['0x1409ebcbc'] pred=['0x1409ebc30']
// BB 0x1409ebcbc-0x1409ebccb size=15 type=0 succ=['0x1409ebd43'] pred=['0x1409ebca3']
// BB 0x1409ebccb-0x1409ebcd4 size=9 type=0 succ=['0x1409ebd43'] pred=['0x1409ebc30']
// BB 0x1409ebcd4-0x1409ebcf5 size=33 type=0 succ=['0x1409ebd43'] pred=['0x1409ebc30']
// BB 0x1409ebcf5-0x1409ebcfc size=7 type=0 succ=['0x1409ebcfc', '0x1409ebd26'] pred=['0x1409ebc30']
// BB 0x1409ebcfc-0x1409ebd0c size=16 type=0 succ=['0x1409ebd0c', '0x1409ede4d'] pred=['0x1409ebcf5']
// BB 0x1409ebd0c-0x1409ebd26 size=26 type=0 succ=['0x1409ebd3c'] pred=['0x1409ebcfc']
// BB 0x1409ebd26-0x1409ebd3c size=22 type=0 succ=['0x1409ebd3c'] pred=['0x1409ebcf5']
// BB 0x1409ebd3c-0x1409ebd43 size=7 type=0 succ=['0x1409ebd43'] pred=['0x1409ebd0c', '0x1409ebd26']
// BB 0x1409ebd43-0x1409ebd60 size=29 type=0 succ=['0x1409ebd60', '0x1409edf0e'] pred=['0x1409ebc89', '0x1409ebcbc', '0x1409ebccb', '0x1409ebcd4', '0x1409ebd3c']
// BB 0x1409ebd60-0x1409ebd9c size=60 type=0 succ=['0x1409ebd9c'] pred=['0x1409ebd43']
// BB 0x1409ebd9c-0x1409ebdb5 size=25 type=0 succ=['0x1409ebdb5'] pred=['0x1409ebd60']
// BB 0x1409ebdb5-0x1409ebe24 size=111 type=0 succ=['0x1409ebe24', '0x1409edf23'] pred=['0x1409ebd9c']
// BB 0x1409ebe24-0x1409ebe5f size=59 type=0 succ=['0x1409ebe5f', '0x1409edf38'] pred=['0x1409ebdb5']
// BB 0x1409ebe5f-0x1409ebe8d size=46 type=0 succ=['0x1409ebe8d'] pred=['0x1409ebe24']
// BB 0x1409ebe8d-0x1409ebeb4 size=39 type=0 succ=['0x1409ebeb4', '0x1409ebec1'] pred=['0x1409ebe5f']
// BB 0x1409ebeb4-0x1409ebec1 size=13 type=0 succ=['0x1409ebec1'] pred=['0x1409ebe8d']
// BB 0x1409ebec1-0x1409ebede size=29 type=0 succ=['0x1409ebede', '0x1409edf4d'] pred=['0x1409ebe8d', '0x1409ebeb4']
// BB 0x1409ebede-0x1409ebf06 size=40 type=0 succ=['0x1409ebf06'] pred=['0x1409ebec1']
// BB 0x1409ebf06-0x1409ebf24 size=30 type=0 succ=['0x1409ebf24', '0x1409edcc0'] pred=['0x1409ebede']
// BB 0x1409ebf24-0x1409ebf71 size=77 type=0 succ=['0x1409ebf71', '0x1409ebf7e'] pred=['0x1409ebf06']
// BB 0x1409ebf71-0x1409ebf7e size=13 type=0 succ=['0x1409ebf7e'] pred=['0x1409ebf24']
// BB 0x1409ebf7e-0x1409ebfb0 size=50 type=0 succ=['0x1409ebfb0'] pred=['0x1409ebf24', '0x1409ebf71']
// BB 0x1409ebfb0-0x1409ebfc7 size=23 type=0 succ=['0x1409ebfc7'] pred=['0x1409ebf7e']
// BB 0x1409ebfc7-0x1409ebff2 size=43 type=0 succ=['0x1409ebff2', '0x1409edcff'] pred=['0x1409ebfb0']
// BB 0x1409ebff2-0x1409ec000 size=14 type=0 succ=['0x1409ec000', '0x1409ec00f'] pred=['0x1409ebfc7']
// BB 0x1409ec000-0x1409ec00f size=15 type=0 succ=['0x1409ec00f'] pred=['0x1409ebff2', '0x1409edd25']
// BB 0x1409ec00f-0x1409ec02e size=31 type=0 succ=['0x1409ec02e', '0x1409ed990'] pred=['0x1409ebff2', '0x1409ec000', '0x1409edd53']
// BB 0x1409ec02e-0x1409ec037 size=9 type=0 succ=['0x1409ec037', '0x1409ed990'] pred=['0x1409ec00f']
// BB 0x1409ec037-0x1409ec070 size=57 type=0 succ=['0x1409ec070'] pred=['0x1409ec02e']
// BB 0x1409ec070-0x1409ec07e size=14 type=0 succ=['0x1409ec07e', '0x1409ed990'] pred=['0x1409ec037', '0x1409ed585', '0x1409ed59e']
// BB 0x1409ec07e-0x1409ec09b size=29 type=0 succ=['0x1409ec09b', '0x1409ec0b0'] pred=['0x1409ec070']
// BB 0x1409ec09b-0x1409ec0a0 size=5 type=0 succ=['0x1409ec0a0', '0x1409ec0b0'] pred=['0x1409ec07e']
// BB 0x1409ec0a0-0x1409ec0aa size=10 type=0 succ=['0x1409ec0b3'] pred=['0x1409ec09b']
// BB 0x1409ec0b0-0x1409ec0b3 size=3 type=0 succ=['0x1409ec0b3'] pred=['0x1409ec07e', '0x1409ec09b']
// BB 0x1409ec0b3-0x1409ec0e0 size=45 type=0 succ=['0x1409ec0e0', '0x1409edea5'] pred=['0x1409ec0a0', '0x1409ec0b0']
// BB 0x1409ec0e0-0x1409ec124 size=68 type=0 succ=['0x1409ec124', '0x1409ede66'] pred=['0x1409ec0b3']
// BB 0x1409ec124-0x1409ec15d size=57 type=0 succ=['0x1409ec15d'] pred=['0x1409ec0e0']
// BB 0x1409ec15d-0x1409ec17d size=32 type=0 succ=['0x1409ec17d', '0x1409ec186'] pred=['0x1409ec124']
// BB 0x1409ec17d-0x1409ec186 size=9 type=0 succ=['0x1409ec186'] pred=['0x1409ec15d']
// BB 0x1409ec186-0x1409ec1a3 size=29 type=0 succ=['0x1409ec1a3', '0x1409ede7b'] pred=['0x1409ec15d', '0x1409ec17d']
// BB 0x1409ec1a3-0x1409ec211 size=110 type=0 succ=['0x1409ec211', '0x1409ec21a'] pred=['0x1409ec186']
// BB 0x1409ec211-0x1409ec21a size=9 type=0 succ=['0x1409ec21a'] pred=['0x1409ec1a3']
// BB 0x1409ec21a-0x1409ec237 size=29 type=0 succ=['0x1409ec237', '0x1409ede90'] pred=['0x1409ec1a3', '0x1409ec211']
// BB 0x1409ec237-0x1409ec261 size=42 type=0 succ=['0x1409ec261'] pred=['0x1409ec21a']
// BB 0x1409ec261-0x1409ec27b size=26 type=0 succ=['0x1409ec27b', '0x1409edc42'] pred=['0x1409ec237']
// BB 0x1409ec27b-0x1409ec2be size=67 type=0 succ=['0x1409ec2be', '0x1409ec2c7'] pred=['0x1409ec261']
// BB 0x1409ec2be-0x1409ec2c7 size=9 type=0 succ=['0x1409ec2c7'] pred=['0x1409ec27b']
// BB 0x1409ec2c7-0x1409ec2f6 size=47 type=0 succ=['0x1409ec2f6'] pred=['0x1409ec27b', '0x1409ec2be']
// BB 0x1409ec2f6-0x1409ec309 size=19 type=0 succ=['0x1409ec309'] pred=['0x1409ec2c7']
// BB 0x1409ec309-0x1409ec312 size=9 type=0 succ=['0x1409ec312'] pred=['0x1409ec2f6']
// BB 0x1409ec312-0x1409ec33f size=45 type=0 succ=['0x1409ec33f', '0x1409ed8f0'] pred=['0x1409ec309']
// BB 0x1409ec33f-0x1409ec344 size=5 type=0 succ=['0x1409ec344', '0x1409ec357'] pred=['0x1409ec312']
// BB 0x1409ec344-0x1409ec357 size=19 type=0 succ=['0x1409ec357'] pred=['0x1409ec33f', '0x1409ed8f0']
// BB 0x1409ec357-0x1409ec363 size=12 type=0 succ=['0x1409ec363', '0x1409ec375'] pred=['0x1409ec33f', '0x1409ec344']
// BB 0x1409ec363-0x1409ec375 size=18 type=0 succ=['0x1409ec375'] pred=['0x1409ec357']
// BB 0x1409ec375-0x1409ec37f size=10 type=0 succ=['0x1409ec37f', '0x1409ed2c0'] pred=['0x1409ec357', '0x1409ec363']
// BB 0x1409ec37f-0x1409ec389 size=10 type=0 succ=['0x1409ec389', '0x1409ed2ea'] pred=['0x1409ec375']
// BB 0x1409ec389-0x1409ec3a6 size=29 type=0 succ=['0x1409ec3a6', '0x1409ed2ea'] pred=['0x1409ec37f']
// BB 0x1409ec3a6-0x1409ec3c5 size=31 type=0 succ=['0x1409ec3c5', '0x1409ed2ea'] pred=['0x1409ec389']
// BB 0x1409ec3c5-0x1409ec3ce size=9 type=0 succ=['0x1409ec3ce', '0x1409ed2ea'] pred=['0x1409ec3a6']
// BB 0x1409ec3ce-0x1409ec3f0 size=34 type=0 succ=['0x1409ec3f0'] pred=['0x1409ec3c5']
// BB 0x1409ec3f0-0x1409ec3fa size=10 type=0 succ=['0x1409ec3fa', '0x1409ed2ea'] pred=['0x1409ec3ce', '0x1409ed1b1', '0x1409ed1c9']
// BB 0x1409ec3fa-0x1409ec427 size=45 type=0 succ=['0x1409ec427', '0x1409edff5'] pred=['0x1409ec3f0']
// BB 0x1409ec427-0x1409ec46b size=68 type=0 succ=['0x1409ec46b', '0x1409edfe0'] pred=['0x1409ec3fa']
// BB 0x1409ec46b-0x1409ec4a4 size=57 type=0 succ=['0x1409ec4a4'] pred=['0x1409ec427']
// BB 0x1409ec4a4-0x1409ec4c4 size=32 type=0 succ=['0x1409ec4c4', '0x1409ec4cd'] pred=['0x1409ec46b']
// BB 0x1409ec4c4-0x1409ec4cd size=9 type=0 succ=['0x1409ec4cd'] pred=['0x1409ec4a4']
// BB 0x1409ec4cd-0x1409ec4ea size=29 type=0 succ=['0x1409ec4ea', '0x1409edfcb'] pred=['0x1409ec4a4', '0x1409ec4c4']
// BB 0x1409ec4ea-0x1409ec558 size=110 type=0 succ=['0x1409ec558', '0x1409ec561'] pred=['0x1409ec4cd']
// BB 0x1409ec558-0x1409ec561 size=9 type=0 succ=['0x1409ec561'] pred=['0x1409ec4ea']
// BB 0x1409ec561-0x1409ec57e size=29 type=0 succ=['0x1409ec57e', '0x1409edfb6'] pred=['0x1409ec4ea', '0x1409ec558']
// BB 0x1409ec57e-0x1409ec5f3 size=117 type=0 succ=['0x1409ec5f3', '0x1409ec5fc'] pred=['0x1409ec561']
// BB 0x1409ec5f3-0x1409ec5fc size=9 type=0 succ=['0x1409ec5fc'] pred=['0x1409ec57e']
// BB 0x1409ec5fc-0x1409ec619 size=29 type=0 succ=['0x1409ec619', '0x1409edfa1'] pred=['0x1409ec57e', '0x1409ec5f3']
// BB 0x1409ec619-0x1409ec643 size=42 type=0 succ=['0x1409ec643'] pred=['0x1409ec5fc']
// BB 0x1409ec643-0x1409ec65c size=25 type=0 succ=['0x1409ec65c', '0x1409eddcf'] pred=['0x1409ec619']
// BB 0x1409ec65c-0x1409ec69f size=67 type=0 succ=['0x1409ec69f', '0x1409ec6a8'] pred=['0x1409ec643']
// BB 0x1409ec69f-0x1409ec6a8 size=9 type=0 succ=['0x1409ec6a8'] pred=['0x1409ec65c']
// BB 0x1409ec6a8-0x1409ec6d7 size=47 type=0 succ=['0x1409ec6d7'] pred=['0x1409ec65c', '0x1409ec69f']
// BB 0x1409ec6d7-0x1409ec6ea size=19 type=0 succ=['0x1409ec6ea'] pred=['0x1409ec6a8']
// BB 0x1409ec6ea-0x1409ec6f3 size=9 type=0 succ=['0x1409ec6f3'] pred=['0x1409ec6d7']
// BB 0x1409ec6f3-0x1409ec718 size=37 type=0 succ=['0x1409ec718', '0x1409ed1df'] pred=['0x1409ec6ea']
// BB 0x1409ec718-0x1409ec71d size=5 type=0 succ=['0x1409ec71d', '0x1409ec72f'] pred=['0x1409ec6f3']
// BB 0x1409ec71d-0x1409ec72f size=18 type=0 succ=['0x1409ec72f'] pred=['0x1409ec718', '0x1409ed1df']
// BB 0x1409ec72f-0x1409ec73b size=12 type=0 succ=['0x1409ec73b', '0x1409ec74d'] pred=['0x1409ec718', '0x1409ec71d']
// BB 0x1409ec73b-0x1409ec74d size=18 type=0 succ=['0x1409ec74d'] pred=['0x1409ec72f']
// BB 0x1409ec74d-0x1409ec76b size=30 type=0 succ=['0x1409ec76b', '0x1409ece80'] pred=['0x1409ec72f', '0x1409ec73b']
// BB 0x1409ec76b-0x1409ec774 size=9 type=0 succ=['0x1409ec774', '0x1409ece80'] pred=['0x1409ec74d']
// BB 0x1409ec774-0x1409ec7ad size=57 type=0 succ=['0x1409ec7ad', '0x1409ee118'] pred=['0x1409ec76b']
// BB 0x1409ec7ad-0x1409ec7f1 size=68 type=0 succ=['0x1409ec7f1', '0x1409ee106'] pred=['0x1409ec774']
// BB 0x1409ec7f1-0x1409ec82a size=57 type=0 succ=['0x1409ec82a'] pred=['0x1409ec7ad']
// BB 0x1409ec82a-0x1409ec84a size=32 type=0 succ=['0x1409ec84a', '0x1409ec853'] pred=['0x1409ec7f1']
// BB 0x1409ec84a-0x1409ec853 size=9 type=0 succ=['0x1409ec853'] pred=['0x1409ec82a']
// BB 0x1409ec853-0x1409ec870 size=29 type=0 succ=['0x1409ec870', '0x1409ee0f1'] pred=['0x1409ec82a', '0x1409ec84a']
// BB 0x1409ec870-0x1409ec8de size=110 type=0 succ=['0x1409ec8de', '0x1409ec8e7'] pred=['0x1409ec853']
// BB 0x1409ec8de-0x1409ec8e7 size=9 type=0 succ=['0x1409ec8e7'] pred=['0x1409ec870']
// BB 0x1409ec8e7-0x1409ec904 size=29 type=0 succ=['0x1409ec904', '0x1409ee0dc'] pred=['0x1409ec870', '0x1409ec8de']
// BB 0x1409ec904-0x1409ec979 size=117 type=0 succ=['0x1409ec979', '0x1409ec982'] pred=['0x1409ec8e7']
// BB 0x1409ec979-0x1409ec982 size=9 type=0 succ=['0x1409ec982'] pred=['0x1409ec904']
// BB 0x1409ec982-0x1409ec99f size=29 type=0 succ=['0x1409ec99f', '0x1409ee0c7'] pred=['0x1409ec904', '0x1409ec979']
// BB 0x1409ec99f-0x1409ec9cf size=48 type=0 succ=['0x1409ec9cf', '0x1409edc2a'] pred=['0x1409ec982']
// BB 0x1409ec9cf-0x1409ec9d1 size=2 type=0 succ=['0x1409ec9d1', '0x1409eca0e'] pred=['0x1409ec99f']
// BB 0x1409ec9d1-0x1409ec9f6 size=37 type=0 succ=['0x1409ec9f6', '0x1409edc2d'] pred=['0x1409ec9cf']
// BB 0x1409ec9f6-0x1409eca0e size=24 type=0 succ=['0x1409eca14'] pred=['0x1409ec9d1']
// BB 0x1409eca0e-0x1409eca14 size=6 type=0 succ=['0x1409eca14'] pred=['0x1409ec9cf']
// BB 0x1409eca14-0x1409eca34 size=32 type=0 succ=['0x1409eca34'] pred=['0x1409ec9f6', '0x1409eca0e']
// BB 0x1409eca34-0x1409eca54 size=32 type=0 succ=['0x1409eca54', '0x1409eca5d'] pred=['0x1409eca14']
// BB 0x1409eca54-0x1409eca5d size=9 type=0 succ=['0x1409eca5d'] pred=['0x1409eca34']
// BB 0x1409eca5d-0x1409eca8f size=50 type=0 succ=['0x1409eca8f'] pred=['0x1409eca34', '0x1409eca54']
// BB 0x1409eca8f-0x1409ecaa2 size=19 type=0 succ=['0x1409ecaa2'] pred=['0x1409eca5d']
// BB 0x1409ecaa2-0x1409ecaab size=9 type=0 succ=['0x1409ecaab'] pred=['0x1409eca8f']
// BB 0x1409ecaab-0x1409ecad4 size=41 type=0 succ=['0x1409ecad4', '0x1409ed24f'] pred=['0x1409ecaa2']
// BB 0x1409ecad4-0x1409ecad9 size=5 type=0 succ=['0x1409ecad9', '0x1409ecaec'] pred=['0x1409ecaab']
// BB 0x1409ecad9-0x1409ecaec size=19 type=0 succ=['0x1409ecaec'] pred=['0x1409ecad4', '0x1409ed24f']
// BB 0x1409ecaec-0x1409ecaf8 size=12 type=0 succ=['0x1409ecaf8', '0x1409ecb0a'] pred=['0x1409ecad4', '0x1409ecad9']
// BB 0x1409ecaf8-0x1409ecb0a size=18 type=0 succ=['0x1409ecb0a'] pred=['0x1409ecaec']
// BB 0x1409ecb0a-0x1409ecb37 size=45 type=0 succ=['0x1409ecb37', '0x1409ee172'] pred=['0x1409ecaec', '0x1409ecaf8']
// BB 0x1409ecb37-0x1409ecb7b size=68 type=0 succ=['0x1409ecb7b', '0x1409ee160'] pred=['0x1409ecb0a']
// BB 0x1409ecb7b-0x1409ecbb4 size=57 type=0 succ=['0x1409ecbb4'] pred=['0x1409ecb37']
// BB 0x1409ecbb4-0x1409ecbd4 size=32 type=0 succ=['0x1409ecbd4', '0x1409ecbdd'] pred=['0x1409ecb7b']
// BB 0x1409ecbd4-0x1409ecbdd size=9 type=0 succ=['0x1409ecbdd'] pred=['0x1409ecbb4']
// BB 0x1409ecbdd-0x1409ecbfa size=29 type=0 succ=['0x1409ecbfa', '0x1409ee14e'] pred=['0x1409ecbb4', '0x1409ecbd4']
// BB 0x1409ecbfa-0x1409ecc68 size=110 type=0 succ=['0x1409ecc68', '0x1409ecc71'] pred=['0x1409ecbdd']
// BB 0x1409ecc68-0x1409ecc71 size=9 type=0 succ=['0x1409ecc71'] pred=['0x1409ecbfa']
// BB 0x1409ecc71-0x1409ecc8e size=29 type=0 succ=['0x1409ecc8e', '0x1409ee13c'] pred=['0x1409ecbfa', '0x1409ecc68']
// BB 0x1409ecc8e-0x1409ecd03 size=117 type=0 succ=['0x1409ecd03', '0x1409ecd0c'] pred=['0x1409ecc71']
// BB 0x1409ecd03-0x1409ecd0c size=9 type=0 succ=['0x1409ecd0c'] pred=['0x1409ecc8e']
// BB 0x1409ecd0c-0x1409ecd29 size=29 type=0 succ=['0x1409ecd29', '0x1409ee12a'] pred=['0x1409ecc8e', '0x1409ecd03']
// BB 0x1409ecd29-0x1409ecd51 size=40 type=0 succ=['0x1409ecd51', '0x1409ecd80'] pred=['0x1409ecd0c']
// BB 0x1409ecd51-0x1409ecd6c size=27 type=0 succ=['0x1409ecd6c', '0x1409ee184'] pred=['0x1409ecd29']
// BB 0x1409ecd6c-0x1409ecd80 size=20 type=0 succ=['0x1409ecd85'] pred=['0x1409ecd51']
// BB 0x1409ecd80-0x1409ecd85 size=5 type=0 succ=['0x1409ecd85'] pred=['0x1409ecd29']
// BB 0x1409ecd85-0x1409ecda5 size=32 type=0 succ=['0x1409ecda5'] pred=['0x1409ecd6c', '0x1409ecd80']
// BB 0x1409ecda5-0x1409ecdc5 size=32 type=0 succ=['0x1409ecdc5', '0x1409ecdce'] pred=['0x1409ecd85']
// BB 0x1409ecdc5-0x1409ecdce size=9 type=0 succ=['0x1409ecdce'] pred=['0x1409ecda5']
// BB 0x1409ecdce-0x1409ecdfd size=47 type=0 succ=['0x1409ecdfd'] pred=['0x1409ecda5', '0x1409ecdc5']
// BB 0x1409ecdfd-0x1409ece10 size=19 type=0 succ=['0x1409ece10'] pred=['0x1409ecdce']
// BB 0x1409ece10-0x1409ece19 size=9 type=0 succ=['0x1409ece19'] pred=['0x1409ecdfd']
// BB 0x1409ece19-0x1409ece3e size=37 type=0 succ=['0x1409ece3e', '0x1409ed27f'] pred=['0x1409ece10']
// BB 0x1409ece3e-0x1409ece43 size=5 type=0 succ=['0x1409ece43', '0x1409ece55'] pred=['0x1409ece19']
// BB 0x1409ece43-0x1409ece55 size=18 type=0 succ=['0x1409ece55'] pred=['0x1409ece3e', '0x1409ed27f']
// BB 0x1409ece55-0x1409ece61 size=12 type=0 succ=['0x1409ece61', '0x1409ece80'] pred=['0x1409ece3e', '0x1409ece43']
// BB 0x1409ece61-0x1409ece80 size=31 type=0 succ=['0x1409ece80'] pred=['0x1409ece55']
// BB 0x1409ece80-0x1409ecead size=45 type=0 succ=['0x1409ecead', '0x1409ee05e'] pred=['0x1409ec74d', '0x1409ec76b', '0x1409ece55', '0x1409ece61']
// BB 0x1409ecead-0x1409ecef1 size=68 type=0 succ=['0x1409ecef1', '0x1409ee049'] pred=['0x1409ece80']
// BB 0x1409ecef1-0x1409ecf2a size=57 type=0 succ=['0x1409ecf2a'] pred=['0x1409ecead']
// BB 0x1409ecf2a-0x1409ecf4a size=32 type=0 succ=['0x1409ecf4a', '0x1409ecf53'] pred=['0x1409ecef1']
// BB 0x1409ecf4a-0x1409ecf53 size=9 type=0 succ=['0x1409ecf53'] pred=['0x1409ecf2a']
// BB 0x1409ecf53-0x1409ecf70 size=29 type=0 succ=['0x1409ecf70', '0x1409ee034'] pred=['0x1409ecf2a', '0x1409ecf4a']
// BB 0x1409ecf70-0x1409ecfde size=110 type=0 succ=['0x1409ecfde', '0x1409ecfe7'] pred=['0x1409ecf53']
// BB 0x1409ecfde-0x1409ecfe7 size=9 type=0 succ=['0x1409ecfe7'] pred=['0x1409ecf70']
// BB 0x1409ecfe7-0x1409ed004 size=29 type=0 succ=['0x1409ed004', '0x1409ee01f'] pred=['0x1409ecf70', '0x1409ecfde']
// BB 0x1409ed004-0x1409ed079 size=117 type=0 succ=['0x1409ed079', '0x1409ed082'] pred=['0x1409ecfe7']
// BB 0x1409ed079-0x1409ed082 size=9 type=0 succ=['0x1409ed082'] pred=['0x1409ed004']
// BB 0x1409ed082-0x1409ed09f size=29 type=0 succ=['0x1409ed09f', '0x1409ee00a'] pred=['0x1409ed004', '0x1409ed079']
// BB 0x1409ed09f-0x1409ed0c9 size=42 type=0 succ=['0x1409ed0c9'] pred=['0x1409ed082']
// BB 0x1409ed0c9-0x1409ed0e2 size=25 type=0 succ=['0x1409ed0e2', '0x1409ede0e'] pred=['0x1409ed09f']
// BB 0x1409ed0e2-0x1409ed125 size=67 type=0 succ=['0x1409ed125', '0x1409ed12e'] pred=['0x1409ed0c9']
// BB 0x1409ed125-0x1409ed12e size=9 type=0 succ=['0x1409ed12e'] pred=['0x1409ed0e2']
// BB 0x1409ed12e-0x1409ed15d size=47 type=0 succ=['0x1409ed15d'] pred=['0x1409ed0e2', '0x1409ed125']
// BB 0x1409ed15d-0x1409ed170 size=19 type=0 succ=['0x1409ed170'] pred=['0x1409ed12e']
// BB 0x1409ed170-0x1409ed179 size=9 type=0 succ=['0x1409ed179'] pred=['0x1409ed15d']
// BB 0x1409ed179-0x1409ed19a size=33 type=0 succ=['0x1409ed19a', '0x1409ed217'] pred=['0x1409ed170']
// BB 0x1409ed19a-0x1409ed19f size=5 type=0 succ=['0x1409ed19f', '0x1409ed1b1'] pred=['0x1409ed179']
// BB 0x1409ed19f-0x1409ed1b1 size=18 type=0 succ=['0x1409ed1b1'] pred=['0x1409ed19a', '0x1409ed217']
// BB 0x1409ed1b1-0x1409ed1c9 size=24 type=0 succ=['0x1409ec3f0', '0x1409ed1c9'] pred=['0x1409ed19a', '0x1409ed19f']
// BB 0x1409ed1c9-0x1409ed1df size=22 type=0 succ=['0x1409ec3f0'] pred=['0x1409ed1b1']
// BB 0x1409ed1df-0x1409ed217 size=56 type=0 succ=['0x1409ec71d'] pred=['0x1409ec6f3']
// BB 0x1409ed217-0x1409ed24f size=56 type=0 succ=['0x1409ed19f'] pred=['0x1409ed179']
// BB 0x1409ed24f-0x1409ed27f size=48 type=0 succ=['0x1409ecad9'] pred=['0x1409ecaab']
// BB 0x1409ed27f-0x1409ed2b7 size=56 type=0 succ=['0x1409ece43'] pred=['0x1409ece19']
// BB 0x1409ed2c0-0x1409ed2ea size=42 type=0 succ=['0x1409ed2ea', '0x1409ed5b4'] pred=['0x1409ec375']
// BB 0x1409ed2ea-0x1409ed317 size=45 type=0 succ=['0x1409ed317', '0x1409edef9'] pred=['0x1409ec37f', '0x1409ec389', '0x1409ec3a6', '0x1409ec3c5', '0x1409ec3f0', '0x1409ed2c0', '0x1409ed8ca', '0x1409ed8da']
// BB 0x1409ed317-0x1409ed35b size=68 type=0 succ=['0x1409ed35b', '0x1409edee4'] pred=['0x1409ed2ea']
// BB 0x1409ed35b-0x1409ed394 size=57 type=0 succ=['0x1409ed394'] pred=['0x1409ed317']
// BB 0x1409ed394-0x1409ed3b4 size=32 type=0 succ=['0x1409ed3b4', '0x1409ed3bd'] pred=['0x1409ed35b']
// BB 0x1409ed3b4-0x1409ed3bd size=9 type=0 succ=['0x1409ed3bd'] pred=['0x1409ed394']
// BB 0x1409ed3bd-0x1409ed3da size=29 type=0 succ=['0x1409ed3da', '0x1409edecf'] pred=['0x1409ed394', '0x1409ed3b4']
// BB 0x1409ed3da-0x1409ed448 size=110 type=0 succ=['0x1409ed448', '0x1409ed451'] pred=['0x1409ed3bd']
// BB 0x1409ed448-0x1409ed451 size=9 type=0 succ=['0x1409ed451'] pred=['0x1409ed3da']
// BB 0x1409ed451-0x1409ed46e size=29 type=0 succ=['0x1409ed46e', '0x1409edeba'] pred=['0x1409ed3da', '0x1409ed448']
// BB 0x1409ed46e-0x1409ed498 size=42 type=0 succ=['0x1409ed498'] pred=['0x1409ed451']
// BB 0x1409ed498-0x1409ed4b2 size=26 type=0 succ=['0x1409ed4b2', '0x1409edc81'] pred=['0x1409ed46e']
// BB 0x1409ed4b2-0x1409ed4f5 size=67 type=0 succ=['0x1409ed4f5', '0x1409ed4fe'] pred=['0x1409ed498']
// BB 0x1409ed4f5-0x1409ed4fe size=9 type=0 succ=['0x1409ed4fe'] pred=['0x1409ed4b2']
// BB 0x1409ed4fe-0x1409ed52d size=47 type=0 succ=['0x1409ed52d'] pred=['0x1409ed4b2', '0x1409ed4f5']
// BB 0x1409ed52d-0x1409ed540 size=19 type=0 succ=['0x1409ed540'] pred=['0x1409ed4fe']
// BB 0x1409ed540-0x1409ed549 size=9 type=0 succ=['0x1409ed549'] pred=['0x1409ed52d']
// BB 0x1409ed549-0x1409ed56e size=37 type=0 succ=['0x1409ed56e', '0x1409ed920'] pred=['0x1409ed540']
// BB 0x1409ed56e-0x1409ed573 size=5 type=0 succ=['0x1409ed573', '0x1409ed585'] pred=['0x1409ed549']
// BB 0x1409ed573-0x1409ed585 size=18 type=0 succ=['0x1409ed585'] pred=['0x1409ed56e', '0x1409ed920']
// BB 0x1409ed585-0x1409ed59e size=25 type=0 succ=['0x1409ec070', '0x1409ed59e'] pred=['0x1409ed56e', '0x1409ed573']
// BB 0x1409ed59e-0x1409ed5b4 size=22 type=0 succ=['0x1409ec070'] pred=['0x1409ed585']
// BB 0x1409ed5b4-0x1409ed5d5 size=33 type=0 succ=['0x1409ed5d5', '0x1409ed5eb'] pred=['0x1409ed2c0']
// BB 0x1409ed5d5-0x1409ed5e1 size=12 type=0 succ=['0x1409ed5e1', '0x1409ed5f2'] pred=['0x1409ed5b4']
// BB 0x1409ed5e1-0x1409ed5eb size=10 type=0 succ=['0x1409ed5f2'] pred=['0x1409ed5d5']
// BB 0x1409ed5eb-0x1409ed5f2 size=7 type=0 succ=['0x1409ed5f2'] pred=['0x1409ed5b4']
// BB 0x1409ed5f2-0x1409ed61f size=45 type=0 succ=['0x1409ed61f', '0x1409ee0b2'] pred=['0x1409ed5d5', '0x1409ed5e1', '0x1409ed5eb']
// BB 0x1409ed61f-0x1409ed663 size=68 type=0 succ=['0x1409ed663', '0x1409ee09d'] pred=['0x1409ed5f2']
// BB 0x1409ed663-0x1409ed6ad size=74 type=0 succ=['0x1409ed6ad'] pred=['0x1409ed61f']
// BB 0x1409ed6ad-0x1409ed6cd size=32 type=0 succ=['0x1409ed6cd', '0x1409ed6d6'] pred=['0x1409ed663']
// BB 0x1409ed6cd-0x1409ed6d6 size=9 type=0 succ=['0x1409ed6d6'] pred=['0x1409ed6ad']
// BB 0x1409ed6d6-0x1409ed6f3 size=29 type=0 succ=['0x1409ed6f3', '0x1409ee088'] pred=['0x1409ed6ad', '0x1409ed6cd']
// BB 0x1409ed6f3-0x1409ed761 size=110 type=0 succ=['0x1409ed761', '0x1409ed76a'] pred=['0x1409ed6d6']
// BB 0x1409ed761-0x1409ed76a size=9 type=0 succ=['0x1409ed76a'] pred=['0x1409ed6f3']
// BB 0x1409ed76a-0x1409ed787 size=29 type=0 succ=['0x1409ed787', '0x1409ee073'] pred=['0x1409ed6f3', '0x1409ed761']
// BB 0x1409ed787-0x1409ed7be size=55 type=0 succ=['0x1409ed7be', '0x1409edc12'] pred=['0x1409ed76a']
// BB 0x1409ed7be-0x1409ed7c0 size=2 type=0 succ=['0x1409ed7c0', '0x1409ed7f4'] pred=['0x1409ed787']
// BB 0x1409ed7c0-0x1409ed7e1 size=33 type=0 succ=['0x1409ed7e1', '0x1409edc15'] pred=['0x1409ed7be']
// BB 0x1409ed7e1-0x1409ed7f4 size=19 type=0 succ=['0x1409ed7fa'] pred=['0x1409ed7c0']
// BB 0x1409ed7f4-0x1409ed7fa size=6 type=0 succ=['0x1409ed7fa'] pred=['0x1409ed7be']
// BB 0x1409ed7fa-0x1409ed81a size=32 type=0 succ=['0x1409ed81a'] pred=['0x1409ed7e1', '0x1409ed7f4']
// BB 0x1409ed81a-0x1409ed83a size=32 type=0 succ=['0x1409ed83a', '0x1409ed843'] pred=['0x1409ed7fa']
// BB 0x1409ed83a-0x1409ed843 size=9 type=0 succ=['0x1409ed843'] pred=['0x1409ed81a']
// BB 0x1409ed843-0x1409ed872 size=47 type=0 succ=['0x1409ed872'] pred=['0x1409ed81a', '0x1409ed83a']
// BB 0x1409ed872-0x1409ed885 size=19 type=0 succ=['0x1409ed885'] pred=['0x1409ed843']
// BB 0x1409ed885-0x1409ed88e size=9 type=0 succ=['0x1409ed88e'] pred=['0x1409ed872']
// BB 0x1409ed88e-0x1409ed8b3 size=37 type=0 succ=['0x1409ed8b3', '0x1409ed958'] pred=['0x1409ed885']
// BB 0x1409ed8b3-0x1409ed8b8 size=5 type=0 succ=['0x1409ed8b8', '0x1409ed8ca'] pred=['0x1409ed88e']
// BB 0x1409ed8b8-0x1409ed8ca size=18 type=0 succ=['0x1409ed8ca'] pred=['0x1409ed8b3', '0x1409ed958']
// BB 0x1409ed8ca-0x1409ed8da size=16 type=0 succ=['0x1409ed2ea', '0x1409ed8da'] pred=['0x1409ed8b3', '0x1409ed8b8']
// BB 0x1409ed8da-0x1409ed8f0 size=22 type=0 succ=['0x1409ed2ea'] pred=['0x1409ed8ca']
// BB 0x1409ed8f0-0x1409ed920 size=48 type=0 succ=['0x1409ec344'] pred=['0x1409ec312']
// BB 0x1409ed920-0x1409ed958 size=56 type=0 succ=['0x1409ed573'] pred=['0x1409ed549']
// BB 0x1409ed958-0x1409ed990 size=56 type=0 succ=['0x1409ed8b8'] pred=['0x1409ed88e']
// BB 0x1409ed990-0x1409ed9c3 size=51 type=0 succ=['0x1409ed9c3', '0x1409edf62'] pred=['0x1409ec00f', '0x1409ec02e', '0x1409ec070']
// BB 0x1409ed9c3-0x1409ed9fe size=59 type=0 succ=['0x1409ed9fe', '0x1409edf77'] pred=['0x1409ed990']
// BB 0x1409ed9fe-0x1409eda32 size=52 type=0 succ=['0x1409eda32'] pred=['0x1409ed9c3']
// BB 0x1409eda32-0x1409eda59 size=39 type=0 succ=['0x1409eda59', '0x1409eda66'] pred=['0x1409ed9fe']
// BB 0x1409eda59-0x1409eda66 size=13 type=0 succ=['0x1409eda66'] pred=['0x1409eda32']
// BB 0x1409eda66-0x1409eda83 size=29 type=0 succ=['0x1409eda83', '0x1409edf8c'] pred=['0x1409eda32', '0x1409eda59']
// BB 0x1409eda83-0x1409edaab size=40 type=0 succ=['0x1409edaab'] pred=['0x1409eda66']
// BB 0x1409edaab-0x1409edac9 size=30 type=0 succ=['0x1409edac9', '0x1409edd58'] pred=['0x1409eda83']
// BB 0x1409edac9-0x1409edb16 size=77 type=0 succ=['0x1409edb16', '0x1409edb23'] pred=['0x1409edaab']
// BB 0x1409edb16-0x1409edb23 size=13 type=0 succ=['0x1409edb23'] pred=['0x1409edac9']
// BB 0x1409edb23-0x1409edb55 size=50 type=0 succ=['0x1409edb55'] pred=['0x1409edac9', '0x1409edb16']
// BB 0x1409edb55-0x1409edb6c size=23 type=0 succ=['0x1409edb6c'] pred=['0x1409edb23']
// BB 0x1409edb6c-0x1409edb79 size=13 type=0 succ=['0x1409edb79'] pred=['0x1409edb55']
// BB 0x1409edb79-0x1409edba2 size=41 type=0 succ=['0x1409edba2', '0x1409edd97'] pred=['0x1409edb6c']
// BB 0x1409edba2-0x1409edba7 size=5 type=0 succ=['0x1409edba7', '0x1409edbb9'] pred=['0x1409edb79']
// BB 0x1409edba7-0x1409edbb9 size=18 type=0 succ=['0x1409edbb9'] pred=['0x1409edba2', '0x1409edd97']
// BB 0x1409edbb9-0x1409edbc5 size=12 type=0 succ=['0x1409edbc5', '0x1409edbd6'] pred=['0x1409edba2', '0x1409edba7']
// BB 0x1409edbc5-0x1409edbd6 size=17 type=0 succ=['0x1409edbd6'] pred=['0x1409edbb9']
// BB 0x1409edbd6-0x1409edbf0 size=26 type=0 succ=['0x1409edbf0'] pred=['0x1409edbb9', '0x1409edbc5']
// BB 0x1409edbf0-0x1409edc12 size=34 type=2 succ=[] pred=['0x1409edbd6']
// BB 0x1409edc12-0x1409edc15 size=3 type=0 succ=['0x1409edc15'] pred=['0x1409ed787']
// BB 0x1409edc15-0x1409edc19 size=4 type=0 succ=['0x1409edc19'] pred=['0x1409ed7c0', '0x1409edc12']
// BB 0x1409edc19-0x1409edc24 size=11 type=4 succ=[] pred=['0x1409edc15']
// BB 0x1409edc25-0x1409edc2a size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edc2a-0x1409edc2d size=3 type=0 succ=['0x1409edc2d'] pred=['0x1409ec99f']
// BB 0x1409edc2d-0x1409edc31 size=4 type=0 succ=['0x1409edc31'] pred=['0x1409ec9d1', '0x1409edc2a']
// BB 0x1409edc31-0x1409edc3c size=11 type=4 succ=[] pred=['0x1409edc2d']
// BB 0x1409edc3d-0x1409edc42 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edc42-0x1409edc50 size=14 type=0 succ=['0x1409edc50'] pred=['0x1409ec261']
// BB 0x1409edc50-0x1409edc7b size=43 type=4 succ=[] pred=['0x1409edc42']
// BB 0x1409edc7c-0x1409edc81 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edc81-0x1409edc8f size=14 type=0 succ=['0x1409edc8f'] pred=['0x1409ed498']
// BB 0x1409edc8f-0x1409edcba size=43 type=4 succ=[] pred=['0x1409edc81']
// BB 0x1409edcbb-0x1409edcc0 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edcc0-0x1409edcce size=14 type=0 succ=['0x1409edcce'] pred=['0x1409ebf06']
// BB 0x1409edcce-0x1409edcf9 size=43 type=4 succ=[] pred=['0x1409edcc0']
// BB 0x1409edcfa-0x1409edcff size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edcff-0x1409edd25 size=38 type=0 succ=['0x1409edd25'] pred=['0x1409ebfc7']
// BB 0x1409edd25-0x1409edd53 size=46 type=0 succ=['0x1409ec000', '0x1409edd53'] pred=['0x1409edcff']
// BB 0x1409edd53-0x1409edd58 size=5 type=0 succ=['0x1409ec00f'] pred=['0x1409edd25']
// BB 0x1409edd58-0x1409edd66 size=14 type=0 succ=['0x1409edd66'] pred=['0x1409edaab']
// BB 0x1409edd66-0x1409edd91 size=43 type=4 succ=[] pred=['0x1409edd58']
// BB 0x1409edd92-0x1409edd97 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edd97-0x1409eddcf size=56 type=0 succ=['0x1409edba7'] pred=['0x1409edb79']
// BB 0x1409eddcf-0x1409edddd size=14 type=0 succ=['0x1409edddd'] pred=['0x1409ec643']
// BB 0x1409edddd-0x1409ede08 size=43 type=4 succ=[] pred=['0x1409eddcf']
// BB 0x1409ede09-0x1409ede0e size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ede0e-0x1409ede1c size=14 type=0 succ=['0x1409ede1c'] pred=['0x1409ed0c9']
// BB 0x1409ede1c-0x1409ede47 size=43 type=4 succ=[] pred=['0x1409ede0e']
// BB 0x1409ede48-0x1409ede4d size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ede4d-0x1409ede54 size=7 type=0 succ=['0x1409ede54'] pred=['0x1409ebcfc']
// BB 0x1409ede54-0x1409ede60 size=12 type=4 succ=[] pred=['0x1409ede4d']
// BB 0x1409ede61-0x1409ede66 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ede66-0x1409ede75 size=15 type=4 succ=[] pred=['0x1409ec0e0']
// BB 0x1409ede76-0x1409ede7b size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ede7b-0x1409ede8a size=15 type=4 succ=[] pred=['0x1409ec186']
// BB 0x1409ede8b-0x1409ede90 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ede90-0x1409ede9f size=15 type=4 succ=[] pred=['0x1409ec21a']
// BB 0x1409edea0-0x1409edea5 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edea5-0x1409edeb4 size=15 type=4 succ=[] pred=['0x1409ec0b3']
// BB 0x1409edeb5-0x1409edeba size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edeba-0x1409edec9 size=15 type=4 succ=[] pred=['0x1409ed451']
// BB 0x1409edeca-0x1409edecf size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edecf-0x1409edede size=15 type=4 succ=[] pred=['0x1409ed3bd']
// BB 0x1409ededf-0x1409edee4 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edee4-0x1409edef3 size=15 type=4 succ=[] pred=['0x1409ed317']
// BB 0x1409edef4-0x1409edef9 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edef9-0x1409edf08 size=15 type=4 succ=[] pred=['0x1409ed2ea']
// BB 0x1409edf09-0x1409edf0e size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf0e-0x1409edf1d size=15 type=4 succ=[] pred=['0x1409ebd43']
// BB 0x1409edf1e-0x1409edf23 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf23-0x1409edf32 size=15 type=4 succ=[] pred=['0x1409ebdb5']
// BB 0x1409edf33-0x1409edf38 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf38-0x1409edf47 size=15 type=4 succ=[] pred=['0x1409ebe24']
// BB 0x1409edf48-0x1409edf4d size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf4d-0x1409edf5c size=15 type=4 succ=[] pred=['0x1409ebec1']
// BB 0x1409edf5d-0x1409edf62 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf62-0x1409edf71 size=15 type=4 succ=[] pred=['0x1409ed990']
// BB 0x1409edf72-0x1409edf77 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf77-0x1409edf86 size=15 type=4 succ=[] pred=['0x1409ed9c3']
// BB 0x1409edf87-0x1409edf8c size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edf8c-0x1409edf9b size=15 type=4 succ=[] pred=['0x1409eda66']
// BB 0x1409edf9c-0x1409edfa1 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edfa1-0x1409edfb0 size=15 type=4 succ=[] pred=['0x1409ec5fc']
// BB 0x1409edfb1-0x1409edfb6 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edfb6-0x1409edfc5 size=15 type=4 succ=[] pred=['0x1409ec561']
// BB 0x1409edfc6-0x1409edfcb size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edfcb-0x1409edfda size=15 type=4 succ=[] pred=['0x1409ec4cd']
// BB 0x1409edfdb-0x1409edfe0 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edfe0-0x1409edfef size=15 type=4 succ=[] pred=['0x1409ec427']
// BB 0x1409edff0-0x1409edff5 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409edff5-0x1409ee004 size=15 type=4 succ=[] pred=['0x1409ec3fa']
// BB 0x1409ee005-0x1409ee00a size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee00a-0x1409ee019 size=15 type=4 succ=[] pred=['0x1409ed082']
// BB 0x1409ee01a-0x1409ee01f size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee01f-0x1409ee02e size=15 type=4 succ=[] pred=['0x1409ecfe7']
// BB 0x1409ee02f-0x1409ee034 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee034-0x1409ee043 size=15 type=4 succ=[] pred=['0x1409ecf53']
// BB 0x1409ee044-0x1409ee049 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee049-0x1409ee058 size=15 type=4 succ=[] pred=['0x1409ecead']
// BB 0x1409ee059-0x1409ee05e size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee05e-0x1409ee06d size=15 type=4 succ=[] pred=['0x1409ece80']
// BB 0x1409ee06e-0x1409ee073 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee073-0x1409ee082 size=15 type=4 succ=[] pred=['0x1409ed76a']
// BB 0x1409ee083-0x1409ee088 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee088-0x1409ee097 size=15 type=4 succ=[] pred=['0x1409ed6d6']
// BB 0x1409ee098-0x1409ee09d size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee09d-0x1409ee0ac size=15 type=4 succ=[] pred=['0x1409ed61f']
// BB 0x1409ee0ad-0x1409ee0b2 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee0b2-0x1409ee0c1 size=15 type=4 succ=[] pred=['0x1409ed5f2']
// BB 0x1409ee0c2-0x1409ee0c7 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee0c7-0x1409ee0d6 size=15 type=4 succ=[] pred=['0x1409ec982']
// BB 0x1409ee0d7-0x1409ee0dc size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee0dc-0x1409ee0eb size=15 type=4 succ=[] pred=['0x1409ec8e7']
// BB 0x1409ee0ec-0x1409ee0f1 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee0f1-0x1409ee100 size=15 type=4 succ=[] pred=['0x1409ec853']
// BB 0x1409ee101-0x1409ee106 size=5 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee106-0x1409ee115 size=15 type=4 succ=[] pred=['0x1409ec7ad']
// BB 0x1409ee116-0x1409ee118 size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee118-0x1409ee127 size=15 type=4 succ=[] pred=['0x1409ec774']
// BB 0x1409ee128-0x1409ee12a size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee12a-0x1409ee139 size=15 type=4 succ=[] pred=['0x1409ecd0c']
// BB 0x1409ee13a-0x1409ee13c size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee13c-0x1409ee14b size=15 type=4 succ=[] pred=['0x1409ecc71']
// BB 0x1409ee14c-0x1409ee14e size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee14e-0x1409ee15d size=15 type=4 succ=[] pred=['0x1409ecbdd']
// BB 0x1409ee15e-0x1409ee160 size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee160-0x1409ee16f size=15 type=4 succ=[] pred=['0x1409ecb37']
// BB 0x1409ee170-0x1409ee172 size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee172-0x1409ee181 size=15 type=4 succ=[] pred=['0x1409ecb0a']
// BB 0x1409ee182-0x1409ee184 size=2 type=0 succ=['0x1409ee196'] pred=[]
// BB 0x1409ee184-0x1409ee188 size=4 type=0 succ=['0x1409ee188'] pred=['0x1409ecd51']
// BB 0x1409ee188-0x1409ee195 size=13 type=4 succ=[] pred=['0x1409ee184']
// BB 0x1409ee196-0x1409ee198 size=2 type=0 succ=[] pred=['0x1409edc25', '0x1409edc3d', '0x1409edc7c', '0x1409edcbb', '0x1409edcfa', '0x1409edd92', '0x1409ede09', '0x1409ede48', '0x1409ede61', '0x1409ede76', '0x1409ede8b', '0x1409edea0', '0x1409edeb5', '0x1409edeca', '0x1409ededf', '0x1409edef4', '0x1409edf09', '0x1409edf1e', '0x1409edf33', '0x1409edf48', '0x1409edf5d', '0x1409edf72', '0x1409edf87', '0x1409edf9c', '0x1409edfb1', '0x1409edfc6', '0x1409edfdb', '0x1409edff0', '0x1409ee005', '0x1409ee01a', '0x1409ee02f', '0x1409ee044', '0x1409ee059', '0x1409ee06e', '0x1409ee083', '0x1409ee098', '0x1409ee0ad', '0x1409ee0c2', '0x1409ee0d7', '0x1409ee0ec', '0x1409ee101', '0x1409ee116', '0x1409ee128', '0x1409ee13a', '0x1409ee14c', '0x1409ee15e', '0x1409ee170', '0x1409ee182']

// --- full disassembly ---
/*1409ebc30*/ responses_to_sse_payload: push rbp
/*1409ebc31*/  push r15
/*1409ebc33*/  push r14
/*1409ebc35*/  push r13
/*1409ebc37*/  push r12
/*1409ebc39*/  push rsi
/*1409ebc3a*/  push rdi
/*1409ebc3b*/  push rbx
/*1409ebc3c*/  sub rsp, 178h
/*1409ebc43*/  lea rbp, [rsp+80h]
/*1409ebc4b*/  mov [rbp+130h+var_40], 0FFFFFFFFFFFFFFFEh
/*1409ebc56*/  mov [rbp+130h+var_148], rcx
/*1409ebc5a*/  mov qword ptr [rbp+130h+var_108], 0
/*1409ebc62*/  mov qword ptr [rbp+130h+var_108+8], 1
/*1409ebc6a*/  mov [rbp+130h+var_F8], 0
/*1409ebc72*/  movzx eax, byte ptr [rdx]
/*1409ebc75*/  lea rcx, jpt_1409EBC87
/*1409ebc7c*/  movsxd rax, ds:(jpt_1409EBC87 - 1417AADE0h)[rcx+rax*4]; switch 6 cases  // switch 6 cases
/*1409ebc80*/  add rax, rcx
/*1409ebc83*/  mov [rbp+130h+var_150], rdx
/*1409ebc87*/  jmp rax; switch jump  // switch jump
/*1409ebc89*/ loc_1409EBC89: movups xmm0, xmmword ptr [rdx]; jumptable 00000001409EBC87 cases 1,2  // jumptable 00000001409EBC87 cases 1,2
/*1409ebc8c*/  movups xmm1, xmmword ptr [rdx+10h]
/*1409ebc90*/  movaps [rbp+130h+var_A0], xmm1
/*1409ebc97*/  movaps [rbp+130h+var_B0], xmm0
/*1409ebc9e*/  jmp loc_1409EBD43
/*1409ebca3*/ loc_1409EBCA3: lea rcx, [rbp+130h+var_B0+8]; jumptable 00000001409EBC87 case 4  // jumptable 00000001409EBC87 case 4
/*1409ebcaa*/  mov rax, rdx
/*1409ebcad*/  mov rdx, [rdx+10h]
/*1409ebcb1*/  mov r8, [rax+18h]
/*1409ebcb5*/  mov [rbp+130h+var_41], 1
/*1409ebcbc*/ loc_1409EBCBC: call sub_1402CE260
/*1409ebcc1*/  nop
/*1409ebcc2*/  mov byte ptr [rbp+130h+var_B0], 4
/*1409ebcc9*/  jmp short loc_1409EBD43
/*1409ebccb*/ loc_1409EBCCB: mov byte ptr [rbp+130h+var_B0], 0; jumptable 00000001409EBC87 case 0  // jumptable 00000001409EBC87 case 0
/*1409ebcd2*/  jmp short loc_1409EBD43
/*1409ebcd4*/ loc_1409EBCD4: add rdx, 8; jumptable 00000001409EBC87 case 3  // jumptable 00000001409EBC87 case 3
/*1409ebcd8*/  lea rcx, [rbp+130h+var_B0+8]
/*1409ebcdf*/  mov [rbp+130h+var_41], 1
/*1409ebce6*/  call sub_14149C500
/*1409ebceb*/  nop
/*1409ebcec*/  mov byte ptr [rbp+130h+var_B0], 3
/*1409ebcf3*/  jmp short loc_1409EBD43
/*1409ebcf5*/ loc_1409EBCF5: cmp qword ptr [rdx+18h], 0; jumptable 00000001409EBC87 case 5  // jumptable 00000001409EBC87 case 5
/*1409ebcfa*/  jz short loc_1409EBD26
/*1409ebcfc*/  mov rax, rdx
/*1409ebcff*/  mov rdx, [rdx+8]
/*1409ebd03*/  test rdx, rdx
/*1409ebd06*/  jz loc_1409EDE4D
/*1409ebd0c*/  lea rcx, [rbp+130h+var_B0+8]
/*1409ebd13*/  mov r8, [rax+10h]
/*1409ebd17*/  mov [rbp+130h+var_41], 1
/*1409ebd1e*/  call sub_1402CCD80
/*1409ebd23*/  nop
/*1409ebd24*/  jmp short loc_1409EBD3C
/*1409ebd26*/ loc_1409EBD26: mov qword ptr [rbp+130h+var_B0+8], 0
/*1409ebd31*/  mov qword ptr [rbp+130h+var_A0+8], 0
/*1409ebd3c*/ loc_1409EBD3C: mov byte ptr [rbp+130h+var_B0], 5
/*1409ebd43*/ loc_1409EBD43: call nullsub_1
/*1409ebd48*/  mov ecx, 0Bh
/*1409ebd4d*/  mov edx, 1
/*1409ebd52*/  call sub_140001650
/*1409ebd57*/  test rax, rax
/*1409ebd5a*/  jz loc_1409EDF0E
/*1409ebd60*/  mov rcx, 72676F72705F6E69h
/*1409ebd6a*/  mov [rax], rcx
/*1409ebd6d*/  mov dword ptr [rax+7], 73736572h
/*1409ebd74*/  mov qword ptr [rbp+130h+var_80+8], 0Bh
/*1409ebd7f*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ebd86*/  mov qword ptr [rbp+130h+var_70+8], 0Bh
/*1409ebd91*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ebd98*/  mov [rbp+130h+var_B9], 1
/*1409ebd9c*/ loc_1409EBD9C: lea rcx, aStatus_6; "status"
/*1409ebda3*/  lea r8, [rbp+130h+var_B0]
/*1409ebdaa*/  mov edx, 6
/*1409ebdaf*/  call sub_141433E50
/*1409ebdb4*/  nop
/*1409ebdb5*/ loc_1409EBDB5: mov [rbp+130h+var_C8], rax
/*1409ebdb9*/  mov rcx, rax
/*1409ebdbc*/  call sub_1400104F0
/*1409ebdc1*/  nop
/*1409ebdc2*/  movups xmm0, [rbp+130h+var_80]
/*1409ebdc9*/  movups xmm1, [rbp+130h+var_70]
/*1409ebdd0*/  mov rax, [rbp+130h+var_C8]
/*1409ebdd4*/  movups xmmword ptr [rax+10h], xmm1
/*1409ebdd8*/  movups xmmword ptr [rax], xmm0
/*1409ebddb*/  movaps xmm0, [rbp+130h+var_B0]
/*1409ebde2*/  movaps xmm1, [rbp+130h+var_A0]
/*1409ebde9*/  movaps [rbp+130h+var_180], xmm0
/*1409ebded*/  movaps [rbp+130h+var_170], xmm1
/*1409ebdf1*/  mov qword ptr [rbp+130h+var_60], 0
/*1409ebdfc*/  mov [rbp+130h+var_50], 0
/*1409ebe07*/  call nullsub_1
/*1409ebe0c*/  mov ecx, 4
/*1409ebe11*/  mov edx, 1
/*1409ebe16*/  call sub_140001650
/*1409ebe1b*/  test rax, rax
/*1409ebe1e*/  jz loc_1409EDF23
/*1409ebe24*/  mov dword ptr [rax], 65707974h
/*1409ebe2a*/  mov [rbp+130h+var_130], 4
/*1409ebe32*/  mov [rbp+130h+var_128], rax
/*1409ebe36*/  mov [rbp+130h+var_120], 4
/*1409ebe3e*/  call nullsub_1
/*1409ebe43*/  mov ecx, 10h
/*1409ebe48*/  mov edx, 1
/*1409ebe4d*/  call sub_140001650
/*1409ebe52*/  test rax, rax
/*1409ebe55*/  mov [rbp+130h+var_C8], rax
/*1409ebe59*/  jz loc_1409EDF38
/*1409ebe5f*/  movups xmm0, xmmword ptr cs:aResponseCreate; "response.created"
/*1409ebe66*/  movups xmmword ptr [rax], xmm0
/*1409ebe69*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ebe70*/  mov qword ptr [rbp+130h+var_80+8], 10h
/*1409ebe7b*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ebe82*/  mov qword ptr [rbp+130h+var_70+8], 10h
/*1409ebe8d*/ loc_1409EBE8D: lea rcx, [rbp+130h+var_B0]
/*1409ebe94*/  lea rdx, [rbp+130h+var_60]
/*1409ebe9b*/  mov r8, rbp
/*1409ebe9e*/  lea r9, [rbp+130h+var_80]
/*1409ebea5*/  call sub_140307860
/*1409ebeaa*/  nop
/*1409ebeab*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ebeb2*/  jz short loc_1409EBEC1
/*1409ebeb4*/ loc_1409EBEB4: lea rcx, [rbp+130h+var_B0]
/*1409ebebb*/  call sub_1400104F0
/*1409ebec0*/  nop
/*1409ebec1*/ loc_1409EBEC1: call nullsub_1
/*1409ebec6*/  mov ecx, 8
/*1409ebecb*/  mov edx, 1
/*1409ebed0*/  call sub_140001650
/*1409ebed5*/  test rax, rax
/*1409ebed8*/  jz loc_1409EDF4D
/*1409ebede*/  mov rcx, 65736E6F70736572h
/*1409ebee8*/  mov [rax], rcx
/*1409ebeeb*/  mov [rbp+130h+var_130], 8
/*1409ebef3*/  mov [rbp+130h+var_128], rax
/*1409ebef7*/  mov [rbp+130h+var_120], 8
/*1409ebeff*/  mov [rbp+130h+var_81], 1
/*1409ebf06*/ loc_1409EBF06: lea rcx, [rbp+130h+var_80]
/*1409ebf0d*/  lea rdx, [rbp+130h+var_180]
/*1409ebf11*/  call sub_140B842D0
/*1409ebf16*/  nop
/*1409ebf17*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ebf1e*/  jz loc_1409EDCC0
/*1409ebf24*/  movups xmm0, [rbp+130h+var_80]
/*1409ebf2b*/  movups xmm1, [rbp+130h+var_70]
/*1409ebf32*/  movaps [rbp+130h+var_A0], xmm1
/*1409ebf39*/  movaps [rbp+130h+var_B0], xmm0
/*1409ebf40*/  mov [rbp+130h+var_81], 0
/*1409ebf47*/  lea rsi, [rbp+130h+var_80]
/*1409ebf4e*/  lea rdx, [rbp+130h+var_60]
/*1409ebf55*/  mov r8, rbp
/*1409ebf58*/  lea r9, [rbp+130h+var_B0]
/*1409ebf5f*/  mov rcx, rsi
/*1409ebf62*/  call sub_140307860
/*1409ebf67*/  nop
/*1409ebf68*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ebf6f*/  jz short loc_1409EBF7E
/*1409ebf71*/ loc_1409EBF71: lea rcx, [rbp+130h+var_80]
/*1409ebf78*/  call sub_1400104F0
/*1409ebf7d*/  nop
/*1409ebf7e*/ loc_1409EBF7E: movups xmm0, [rbp+130h+var_60]
/*1409ebf85*/  movups [rbp+130h+var_80+8], xmm0
/*1409ebf8c*/  mov rax, [rbp+130h+var_50]
/*1409ebf93*/  mov qword ptr [rbp+130h+var_70+8], rax
/*1409ebf9a*/  mov byte ptr [rbp+130h+var_80], 5
/*1409ebfa1*/  mov [rbp+130h+var_130], rsi
/*1409ebfa5*/  lea rax, sub_14142EA10
/*1409ebfac*/  mov [rbp+130h+var_128], rax
/*1409ebfb0*/ loc_1409EBFB0: lea rdx, unk_1417A78D0
/*1409ebfb7*/  lea rcx, [rbp+130h+var_B0]
/*1409ebfbe*/  mov r8, rbp
/*1409ebfc1*/  call sub_14149C0F0
/*1409ebfc6*/  nop
/*1409ebfc7*/ loc_1409EBFC7: lea rcx, [rbp+130h+var_80]
/*1409ebfce*/  call sub_1400104F0
/*1409ebfd3*/  nop
/*1409ebfd4*/  mov rdx, qword ptr [rbp+130h+var_B0]
/*1409ebfdb*/  mov rbx, qword ptr [rbp+130h+var_B0+8]
/*1409ebfe2*/  mov rsi, qword ptr [rbp+130h+var_A0]
/*1409ebfe9*/  test rsi, rsi
/*1409ebfec*/  jnz loc_1409EDCFF
/*1409ebff2*/  xor edi, edi
/*1409ebff4*/  add rdi, rsi
/*1409ebff7*/  mov [rbp+130h+var_F8], rdi
/*1409ebffb*/  test rdx, rdx
/*1409ebffe*/  jz short loc_1409EC00F
/*1409ec000*/ loc_1409EC000: mov r8d, 1
/*1409ec006*/  mov rcx, rbx
/*1409ec009*/  call sub_140001660
/*1409ec00e*/  nop
/*1409ec00f*/ loc_1409EC00F: lea rcx, aOutput_1; "output"
/*1409ec016*/  mov edx, 6
/*1409ec01b*/  mov r8, [rbp+130h+var_150]
/*1409ec01f*/  call sub_141433D50
/*1409ec024*/  nop
/*1409ec025*/  test rax, rax
/*1409ec028*/  jz loc_1409ED990
/*1409ec02e*/  cmp byte ptr [rax], 4
/*1409ec031*/  jnz loc_1409ED990
/*1409ec037*/  mov rcx, [rax+10h]
/*1409ec03b*/  mov rax, [rax+18h]
/*1409ec03f*/  shl rax, 5
/*1409ec043*/  mov [rbp+130h+var_C8], rcx
/*1409ec047*/  add rax, rcx
/*1409ec04a*/  mov [rbp+130h+var_158], rax
/*1409ec04e*/  lea r12, [rbp+130h+var_B0]
/*1409ec055*/  lea rsi, [rbp+130h+var_80]
/*1409ec05c*/  mov [rbp+130h+var_110], 0
/*1409ec064*/  nop word ptr [rax+rax+00000000h]
/*1409ec070*/ loc_1409EC070: mov r8, [rbp+130h+var_C8]
/*1409ec074*/  cmp r8, [rbp+130h+var_158]
/*1409ec078*/  jz loc_1409ED990
/*1409ec07e*/  mov edx, 4
/*1409ec083*/  lea rcx, aType_8; "type"
/*1409ec08a*/  call sub_141433D50
/*1409ec08f*/  nop
/*1409ec090*/  mov r15d, 1
/*1409ec096*/  test rax, rax
/*1409ec099*/  jz short loc_1409EC0B0
/*1409ec09b*/  cmp byte ptr [rax], 3
/*1409ec09e*/  jnz short loc_1409EC0B0
/*1409ec0a0*/  mov r15, [rax+10h]
/*1409ec0a4*/  mov r13, [rax+18h]
/*1409ec0a8*/  jmp short loc_1409EC0B3
/*1409ec0b0*/ loc_1409EC0B0: xor r13d, r13d
/*1409ec0b3*/ loc_1409EC0B3: mov qword ptr [rbp+130h+var_E0], 0
/*1409ec0bb*/  mov [rbp+130h+var_D0], 0
/*1409ec0c3*/  call nullsub_1
/*1409ec0c8*/  mov ecx, 4
/*1409ec0cd*/  mov edx, 1
/*1409ec0d2*/  call sub_140001650
/*1409ec0d7*/  test rax, rax
/*1409ec0da*/  jz loc_1409EDEA5
/*1409ec0e0*/  mov dword ptr [rax], 65707974h
/*1409ec0e6*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec0f1*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec0f8*/  mov [rbp+130h+var_50], 4
/*1409ec103*/  call nullsub_1
/*1409ec108*/  mov ecx, 1Ah
/*1409ec10d*/  mov edx, 1
/*1409ec112*/  call sub_140001650
/*1409ec117*/  test rax, rax
/*1409ec11a*/  mov [rbp+130h+var_B8], rax
/*1409ec11e*/  jz loc_1409EDE66
/*1409ec124*/  movups xmm0, cs:xmmword_1417A5D88+0Ah
/*1409ec12b*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ec12f*/  movups xmm0, cs:xmmword_1417A5D88
/*1409ec136*/  movups xmmword ptr [rax], xmm0
/*1409ec139*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec140*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ec14b*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec152*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
/*1409ec15d*/ loc_1409EC15D: mov rcx, r12
/*1409ec160*/  lea rdx, [rbp+130h+var_E0]
/*1409ec164*/  lea r8, [rbp+130h+var_60]
/*1409ec16b*/  mov r9, rsi
/*1409ec16e*/  call sub_140307860
/*1409ec173*/  nop
/*1409ec174*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec17b*/  jz short loc_1409EC186
/*1409ec17d*/ loc_1409EC17D: mov rcx, r12
/*1409ec180*/  call sub_1400104F0
/*1409ec185*/  nop
/*1409ec186*/ loc_1409EC186: call nullsub_1
/*1409ec18b*/  mov ecx, 0Ch
/*1409ec190*/  mov edx, 1
/*1409ec195*/  call sub_140001650
/*1409ec19a*/  test rax, rax
/*1409ec19d*/  jz loc_1409EDE7B
/*1409ec1a3*/  mov rcx, 695F74757074756Fh
/*1409ec1ad*/  mov [rax], rcx
/*1409ec1b0*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec1b7*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec1c2*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec1c9*/  mov [rbp+130h+var_50], 0Ch
/*1409ec1d4*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec1db*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec1e6*/  mov rax, [rbp+130h+var_110]
/*1409ec1ea*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec1f1*/  mov rcx, r12
/*1409ec1f4*/  lea rdx, [rbp+130h+var_E0]
/*1409ec1f8*/  lea r8, [rbp+130h+var_60]
/*1409ec1ff*/  mov r9, rsi
/*1409ec202*/  call sub_140307860
/*1409ec207*/  nop
/*1409ec208*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec20f*/  jz short loc_1409EC21A
/*1409ec211*/  mov rcx, r12
/*1409ec214*/  call sub_1400104F0
/*1409ec219*/  nop
/*1409ec21a*/ loc_1409EC21A: call nullsub_1
/*1409ec21f*/  mov ecx, 4
/*1409ec224*/  mov edx, 1
/*1409ec229*/  call sub_140001650
/*1409ec22e*/  test rax, rax
/*1409ec231*/  jz loc_1409EDE90
/*1409ec237*/  mov dword ptr [rax], 6D657469h
/*1409ec23d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec248*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec24f*/  mov [rbp+130h+var_50], 4
/*1409ec25a*/  mov [rbp+130h+var_82], 1
/*1409ec261*/ loc_1409EC261: mov rcx, rsi
/*1409ec264*/  mov rdx, [rbp+130h+var_C8]
/*1409ec268*/  call sub_140B842D0
/*1409ec26d*/  nop
/*1409ec26e*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec275*/  jz loc_1409EDC42
/*1409ec27b*/  movups xmm0, [rbp+130h+var_80]
/*1409ec282*/  movups xmm1, [rbp+130h+var_70]
/*1409ec289*/  movaps [rbp+130h+var_A0], xmm1
/*1409ec290*/  movaps [rbp+130h+var_B0], xmm0
/*1409ec297*/  mov [rbp+130h+var_82], 0
/*1409ec29e*/  mov rcx, rsi
/*1409ec2a1*/  lea rdx, [rbp+130h+var_E0]
/*1409ec2a5*/  lea r8, [rbp+130h+var_60]
/*1409ec2ac*/  mov r9, r12
/*1409ec2af*/  call sub_140307860
/*1409ec2b4*/  nop
/*1409ec2b5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec2bc*/  jz short loc_1409EC2C7
/*1409ec2be*/ loc_1409EC2BE: mov rcx, rsi
/*1409ec2c1*/  call sub_1400104F0
/*1409ec2c6*/  nop
/*1409ec2c7*/ loc_1409EC2C7: mov rax, [rbp+130h+var_D0]
/*1409ec2cb*/  lea rcx, [rbp+130h+var_128]
/*1409ec2cf*/  mov [rcx+10h], rax
/*1409ec2d3*/  movups xmm0, [rbp+130h+var_E0]
/*1409ec2d7*/  movups xmmword ptr [rcx], xmm0
/*1409ec2da*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ec2de*/  mov rdi, rbp
/*1409ec2e1*/  mov qword ptr [rbp+130h+var_B0], rdi
/*1409ec2e8*/  lea rax, sub_14142EA10
/*1409ec2ef*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ec2f6*/ loc_1409EC2F6: mov rcx, rsi
/*1409ec2f9*/  lea rdx, unk_1417A7910
/*1409ec300*/  mov r8, r12
/*1409ec303*/  call sub_14149C0F0
/*1409ec308*/  nop
/*1409ec309*/ loc_1409EC309: mov rcx, rdi
/*1409ec30c*/  call sub_1400104F0
/*1409ec311*/  nop
/*1409ec312*/ loc_1409EC312: mov r14, qword ptr [rbp+130h+var_80]
/*1409ec319*/  mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ec320*/  mov [rbp+130h+var_B8], rax
/*1409ec324*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ec32b*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ec32f*/  mov rdi, [rbp+130h+var_F8]
/*1409ec333*/  sub rax, rdi
/*1409ec336*/  cmp rbx, rax
/*1409ec339*/  ja loc_1409ED8F0
/*1409ec33f*/  test rbx, rbx
/*1409ec342*/  jz short loc_1409EC357
/*1409ec344*/ loc_1409EC344: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ec348*/  add rcx, rdi
/*1409ec34b*/  mov rdx, [rbp+130h+var_B8]
/*1409ec34f*/  mov r8, rbx
/*1409ec352*/  call sub_141684120
/*1409ec357*/ loc_1409EC357: add rdi, rbx
/*1409ec35a*/  mov [rbp+130h+var_F8], rdi
/*1409ec35e*/  test r14, r14
/*1409ec361*/  jz short loc_1409EC375
/*1409ec363*/  mov r8d, 1
/*1409ec369*/  mov rcx, [rbp+130h+var_B8]
/*1409ec36d*/  mov rdx, r14
/*1409ec370*/  call sub_140001660
/*1409ec375*/ loc_1409EC375: cmp r13, 0Dh
/*1409ec379*/  jz loc_1409ED2C0
/*1409ec37f*/  cmp r13, 7
/*1409ec383*/  jnz loc_1409ED2EA
/*1409ec389*/  mov eax, [r15]
/*1409ec38c*/  mov ecx, 7373656Dh
/*1409ec391*/  xor eax, ecx
/*1409ec393*/  mov ecx, [r15+3]
/*1409ec397*/  mov edx, 65676173h
/*1409ec39c*/  xor ecx, edx
/*1409ec39e*/  or ecx, eax
/*1409ec3a0*/  jnz loc_1409ED2EA
/*1409ec3a6*/ loc_1409EC3A6: mov edx, 7
/*1409ec3ab*/  lea rcx, aContent_6; "content"
/*1409ec3b2*/  mov r8, [rbp+130h+var_C8]
/*1409ec3b6*/  call sub_141433D50
/*1409ec3bb*/  nop
/*1409ec3bc*/  test rax, rax
/*1409ec3bf*/  jz loc_1409ED2EA
/*1409ec3c5*/  cmp byte ptr [rax], 4
/*1409ec3c8*/  jnz loc_1409ED2EA
/*1409ec3ce*/  mov r15, [rax+10h]
/*1409ec3d2*/  mov rax, [rax+18h]
/*1409ec3d6*/  shl rax, 5
/*1409ec3da*/  add rax, r15
/*1409ec3dd*/  mov [rbp+130h+var_138], rax
/*1409ec3e1*/  mov [rbp+130h+var_B8], 0
/*1409ec3e9*/  nop dword ptr [rax+00000000h]
/*1409ec3f0*/ loc_1409EC3F0: cmp r15, [rbp+130h+var_138]
/*1409ec3f4*/  jz loc_1409ED2EA
/*1409ec3fa*/  mov qword ptr [rbp+130h+var_E0], 0
/*1409ec402*/  mov [rbp+130h+var_D0], 0
/*1409ec40a*/  call nullsub_1
/*1409ec40f*/  mov ecx, 4
/*1409ec414*/  mov edx, 1
/*1409ec419*/  call sub_140001650
/*1409ec41e*/  test rax, rax
/*1409ec421*/  jz loc_1409EDFF5
/*1409ec427*/  mov dword ptr [rax], 65707974h
/*1409ec42d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec438*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec43f*/  mov [rbp+130h+var_50], 4
/*1409ec44a*/  call nullsub_1
/*1409ec44f*/  mov ecx, 1Bh
/*1409ec454*/  mov edx, 1
/*1409ec459*/  call sub_140001650
/*1409ec45e*/  test rax, rax
/*1409ec461*/  mov qword ptr [rbp+130h+var_F0], rax
/*1409ec465*/  jz loc_1409EDFE0
/*1409ec46b*/  movups xmm0, cs:xmmword_1417A5DB8+0Bh
/*1409ec472*/  movups xmmword ptr [rax+0Bh], xmm0
/*1409ec476*/  movups xmm0, cs:xmmword_1417A5DB8
/*1409ec47d*/  movups xmmword ptr [rax], xmm0
/*1409ec480*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec487*/  mov qword ptr [rbp+130h+var_80+8], 1Bh
/*1409ec492*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec499*/  mov qword ptr [rbp+130h+var_70+8], 1Bh
/*1409ec4a4*/ loc_1409EC4A4: mov rcx, r12
/*1409ec4a7*/  lea rdx, [rbp+130h+var_E0]
/*1409ec4ab*/  lea r8, [rbp+130h+var_60]
/*1409ec4b2*/  mov r9, rsi
/*1409ec4b5*/  call sub_140307860
/*1409ec4ba*/  nop
/*1409ec4bb*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec4c2*/  jz short loc_1409EC4CD
/*1409ec4c4*/ loc_1409EC4C4: mov rcx, r12
/*1409ec4c7*/  call sub_1400104F0
/*1409ec4cc*/  nop
/*1409ec4cd*/ loc_1409EC4CD: call nullsub_1
/*1409ec4d2*/  mov ecx, 0Ch
/*1409ec4d7*/  mov edx, 1
/*1409ec4dc*/  call sub_140001650
/*1409ec4e1*/  test rax, rax
/*1409ec4e4*/  jz loc_1409EDFCB
/*1409ec4ea*/  mov rcx, 695F74757074756Fh
/*1409ec4f4*/  mov [rax], rcx
/*1409ec4f7*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec4fe*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec509*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec510*/  mov [rbp+130h+var_50], 0Ch
/*1409ec51b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec522*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec52d*/  mov rax, [rbp+130h+var_110]
/*1409ec531*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec538*/  mov rcx, r12
/*1409ec53b*/  lea rdx, [rbp+130h+var_E0]
/*1409ec53f*/  lea r8, [rbp+130h+var_60]
/*1409ec546*/  mov r9, rsi
/*1409ec549*/  call sub_140307860
/*1409ec54e*/  nop
/*1409ec54f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec556*/  jz short loc_1409EC561
/*1409ec558*/  mov rcx, r12
/*1409ec55b*/  call sub_1400104F0
/*1409ec560*/  nop
/*1409ec561*/ loc_1409EC561: call nullsub_1
/*1409ec566*/  mov ecx, 0Dh
/*1409ec56b*/  mov edx, 1
/*1409ec570*/  call sub_140001650
/*1409ec575*/  test rax, rax
/*1409ec578*/  jz loc_1409EDFB6
/*1409ec57e*/  mov rcx, 7865646E695F746Eh
/*1409ec588*/  mov [rax+5], rcx
/*1409ec58c*/  mov rcx, 5F746E65746E6F63h
/*1409ec596*/  mov [rax], rcx
/*1409ec599*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ec5a4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec5ab*/  mov [rbp+130h+var_50], 0Dh
/*1409ec5b6*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec5bd*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec5c8*/  mov rax, [rbp+130h+var_B8]
/*1409ec5cc*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec5d3*/  mov rcx, r12
/*1409ec5d6*/  lea rdx, [rbp+130h+var_E0]
/*1409ec5da*/  lea r8, [rbp+130h+var_60]
/*1409ec5e1*/  mov r9, rsi
/*1409ec5e4*/  call sub_140307860
/*1409ec5e9*/  nop
/*1409ec5ea*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec5f1*/  jz short loc_1409EC5FC
/*1409ec5f3*/  mov rcx, r12
/*1409ec5f6*/  call sub_1400104F0
/*1409ec5fb*/  nop
/*1409ec5fc*/ loc_1409EC5FC: call nullsub_1
/*1409ec601*/  mov ecx, 4
/*1409ec606*/  mov edx, 1
/*1409ec60b*/  call sub_140001650
/*1409ec610*/  test rax, rax
/*1409ec613*/  jz loc_1409EDFA1
/*1409ec619*/  mov dword ptr [rax], 74726170h
/*1409ec61f*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec62a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec631*/  mov [rbp+130h+var_50], 4
/*1409ec63c*/  mov [rbp+130h+var_83], 1
/*1409ec643*/ loc_1409EC643: mov rcx, rsi
/*1409ec646*/  mov rdx, r15
/*1409ec649*/  call sub_140B842D0
/*1409ec64e*/  nop
/*1409ec64f*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec656*/  jz loc_1409EDDCF
/*1409ec65c*/  movups xmm0, [rbp+130h+var_80]
/*1409ec663*/  movups xmm1, [rbp+130h+var_70]
/*1409ec66a*/  movaps [rbp+130h+var_A0], xmm1
/*1409ec671*/  movaps [rbp+130h+var_B0], xmm0
/*1409ec678*/  mov [rbp+130h+var_83], 0
/*1409ec67f*/  mov rcx, rsi
/*1409ec682*/  lea rdx, [rbp+130h+var_E0]
/*1409ec686*/  lea r8, [rbp+130h+var_60]
/*1409ec68d*/  mov r9, r12
/*1409ec690*/  call sub_140307860
/*1409ec695*/  nop
/*1409ec696*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec69d*/  jz short loc_1409EC6A8
/*1409ec69f*/ loc_1409EC69F: mov rcx, rsi
/*1409ec6a2*/  call sub_1400104F0
/*1409ec6a7*/  nop
/*1409ec6a8*/ loc_1409EC6A8: mov rax, [rbp+130h+var_D0]
/*1409ec6ac*/  lea rcx, [rbp+130h+var_128]
/*1409ec6b0*/  mov [rcx+10h], rax
/*1409ec6b4*/  movups xmm0, [rbp+130h+var_E0]
/*1409ec6b8*/  movups xmmword ptr [rcx], xmm0
/*1409ec6bb*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ec6bf*/  mov rbx, rbp
/*1409ec6c2*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ec6c9*/  lea rax, sub_14142EA10
/*1409ec6d0*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ec6d7*/ loc_1409EC6D7: mov rcx, rsi
/*1409ec6da*/  lea rdx, unk_1417A7990
/*1409ec6e1*/  mov r8, r12
/*1409ec6e4*/  call sub_14149C0F0
/*1409ec6e9*/  nop
/*1409ec6ea*/ loc_1409EC6EA: mov rcx, rbx
/*1409ec6ed*/  call sub_1400104F0
/*1409ec6f2*/  nop
/*1409ec6f3*/ loc_1409EC6F3: mov r14, qword ptr [rbp+130h+var_80]
/*1409ec6fa*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ec701*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ec708*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ec70c*/  sub rax, rdi
/*1409ec70f*/  cmp rbx, rax
/*1409ec712*/  ja loc_1409ED1DF
/*1409ec718*/  test rbx, rbx
/*1409ec71b*/  jz short loc_1409EC72F
/*1409ec71d*/ loc_1409EC71D: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ec721*/  add rcx, rdi
/*1409ec724*/  mov rdx, r13
/*1409ec727*/  mov r8, rbx
/*1409ec72a*/  call sub_141684120
/*1409ec72f*/ loc_1409EC72F: add rdi, rbx
/*1409ec732*/  mov [rbp+130h+var_F8], rdi
/*1409ec736*/  test r14, r14
/*1409ec739*/  jz short loc_1409EC74D
/*1409ec73b*/  mov r8d, 1
/*1409ec741*/  mov rcx, r13
/*1409ec744*/  mov rdx, r14
/*1409ec747*/  call sub_140001660
/*1409ec74c*/  nop
/*1409ec74d*/ loc_1409EC74D: mov edx, 4
/*1409ec752*/  lea rcx, aText_10; "text"
/*1409ec759*/  mov r8, r15
/*1409ec75c*/  call sub_141433D50
/*1409ec761*/  nop
/*1409ec762*/  test rax, rax
/*1409ec765*/  jz loc_1409ECE80
/*1409ec76b*/  cmp byte ptr [rax], 3
/*1409ec76e*/  jnz loc_1409ECE80
/*1409ec774*/  mov rcx, [rax+10h]
/*1409ec778*/  mov qword ptr [rbp+130h+var_F0], rcx
/*1409ec77c*/  mov rbx, [rax+18h]
/*1409ec780*/  mov qword ptr [rbp+130h+var_E0], 0
/*1409ec788*/  mov [rbp+130h+var_D0], 0
/*1409ec790*/  call nullsub_1
/*1409ec795*/  mov ecx, 4
/*1409ec79a*/  mov edx, 1
/*1409ec79f*/  call sub_140001650
/*1409ec7a4*/  test rax, rax
/*1409ec7a7*/  jz loc_1409EE118
/*1409ec7ad*/  mov dword ptr [rax], 65707974h
/*1409ec7b3*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec7be*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec7c5*/  mov [rbp+130h+var_50], 4
/*1409ec7d0*/  call nullsub_1
/*1409ec7d5*/  mov ecx, 1Ah
/*1409ec7da*/  mov edx, 1
/*1409ec7df*/  call sub_140001650
/*1409ec7e4*/  test rax, rax
/*1409ec7e7*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ec7eb*/  jz loc_1409EE106
/*1409ec7f1*/  movups xmm0, cs:xmmword_1417A5E08+0Ah
/*1409ec7f8*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ec7fc*/  movups xmm0, cs:xmmword_1417A5E08
/*1409ec803*/  movups xmmword ptr [rax], xmm0
/*1409ec806*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec80d*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ec818*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec81f*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
/*1409ec82a*/ loc_1409EC82A: mov rcx, r12
/*1409ec82d*/  lea rdx, [rbp+130h+var_E0]
/*1409ec831*/  lea r8, [rbp+130h+var_60]
/*1409ec838*/  mov r9, rsi
/*1409ec83b*/  call sub_140307860
/*1409ec840*/  nop
/*1409ec841*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec848*/  jz short loc_1409EC853
/*1409ec84a*/ loc_1409EC84A: mov rcx, r12
/*1409ec84d*/  call sub_1400104F0
/*1409ec852*/  nop
/*1409ec853*/ loc_1409EC853: call nullsub_1
/*1409ec858*/  mov ecx, 0Ch
/*1409ec85d*/  mov edx, 1
/*1409ec862*/  call sub_140001650
/*1409ec867*/  test rax, rax
/*1409ec86a*/  jz loc_1409EE0F1
/*1409ec870*/  mov rcx, 695F74757074756Fh
/*1409ec87a*/  mov [rax], rcx
/*1409ec87d*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec884*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec88f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec896*/  mov [rbp+130h+var_50], 0Ch
/*1409ec8a1*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec8a8*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec8b3*/  mov rax, [rbp+130h+var_110]
/*1409ec8b7*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec8be*/  mov rcx, r12
/*1409ec8c1*/  lea rdx, [rbp+130h+var_E0]
/*1409ec8c5*/  lea r8, [rbp+130h+var_60]
/*1409ec8cc*/  mov r9, rsi
/*1409ec8cf*/  call sub_140307860
/*1409ec8d4*/  nop
/*1409ec8d5*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec8dc*/  jz short loc_1409EC8E7
/*1409ec8de*/  mov rcx, r12
/*1409ec8e1*/  call sub_1400104F0
/*1409ec8e6*/  nop
/*1409ec8e7*/ loc_1409EC8E7: call nullsub_1
/*1409ec8ec*/  mov ecx, 0Dh
/*1409ec8f1*/  mov edx, 1
/*1409ec8f6*/  call sub_140001650
/*1409ec8fb*/  test rax, rax
/*1409ec8fe*/  jz loc_1409EE0DC
/*1409ec904*/  mov rcx, 7865646E695F746Eh
/*1409ec90e*/  mov [rax+5], rcx
/*1409ec912*/  mov rcx, 5F746E65746E6F63h
/*1409ec91c*/  mov [rax], rcx
/*1409ec91f*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ec92a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec931*/  mov [rbp+130h+var_50], 0Dh
/*1409ec93c*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec943*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec94e*/  mov rax, [rbp+130h+var_B8]
/*1409ec952*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec959*/  mov rcx, r12
/*1409ec95c*/  lea rdx, [rbp+130h+var_E0]
/*1409ec960*/  lea r8, [rbp+130h+var_60]
/*1409ec967*/  mov r9, rsi
/*1409ec96a*/  call sub_140307860
/*1409ec96f*/  nop
/*1409ec970*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec977*/  jz short loc_1409EC982
/*1409ec979*/  mov rcx, r12
/*1409ec97c*/  call sub_1400104F0
/*1409ec981*/  nop
/*1409ec982*/ loc_1409EC982: call nullsub_1
/*1409ec987*/  mov ecx, 5
/*1409ec98c*/  mov edx, 1
/*1409ec991*/  call sub_140001650
/*1409ec996*/  test rax, rax
/*1409ec999*/  jz loc_1409EE0C7
/*1409ec99f*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409ec9a3*/  mov dword ptr [rax], 746C6564h
/*1409ec9a9*/  mov qword ptr [rbp+130h+var_60], 5
/*1409ec9b4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec9bb*/  mov [rbp+130h+var_50], 5
/*1409ec9c6*/  test rbx, rbx
/*1409ec9c9*/  js loc_1409EDC2A
/*1409ec9cf*/  jz short loc_1409ECA0E
/*1409ec9d1*/  mov qword ptr [rbp+130h+var_F0+8], r15
/*1409ec9d5*/  call nullsub_1
/*1409ec9da*/  mov r15d, 1
/*1409ec9e0*/  mov edx, 1
/*1409ec9e5*/  mov rcx, rbx
/*1409ec9e8*/  call sub_140001650
/*1409ec9ed*/  test rax, rax
/*1409ec9f0*/  jz loc_1409EDC2D
/*1409ec9f6*/  mov r13, rax
/*1409ec9f9*/  mov rcx, rax
/*1409ec9fc*/  mov rdx, qword ptr [rbp+130h+var_F0]
/*1409eca00*/  mov r8, rbx
/*1409eca03*/  call sub_141684120
/*1409eca08*/  mov r15, qword ptr [rbp+130h+var_F0+8]
/*1409eca0c*/  jmp short loc_1409ECA14
/*1409eca0e*/ loc_1409ECA0E: mov r13d, 1
/*1409eca14*/ loc_1409ECA14: mov byte ptr [rbp+130h+var_80], 3
/*1409eca1b*/  mov qword ptr [rbp+130h+var_80+8], rbx
/*1409eca22*/  mov qword ptr [rbp+130h+var_70], r13
/*1409eca29*/  mov qword ptr [rbp+130h+var_70+8], rbx
/*1409eca30*/  mov [rbp+130h+var_BB], 0
/*1409eca34*/ loc_1409ECA34: mov rcx, r12
/*1409eca37*/  lea rdx, [rbp+130h+var_E0]
/*1409eca3b*/  lea r8, [rbp+130h+var_60]
/*1409eca42*/  mov r9, rsi
/*1409eca45*/  call sub_140307860
/*1409eca4a*/  nop
/*1409eca4b*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409eca52*/  jz short loc_1409ECA5D
/*1409eca54*/ loc_1409ECA54: mov rcx, r12
/*1409eca57*/  call sub_1400104F0
/*1409eca5c*/  nop
/*1409eca5d*/ loc_1409ECA5D: mov r13, rbx
/*1409eca60*/  mov rax, [rbp+130h+var_D0]
/*1409eca64*/  lea rcx, [rbp+130h+var_128]
/*1409eca68*/  mov [rcx+10h], rax
/*1409eca6c*/  movups xmm0, [rbp+130h+var_E0]
/*1409eca70*/  movups xmmword ptr [rcx], xmm0
/*1409eca73*/  mov byte ptr [rbp+130h+var_130], 5
/*1409eca77*/  mov rbx, rbp
/*1409eca7a*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409eca81*/  lea rax, sub_14142EA10
/*1409eca88*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409eca8f*/ loc_1409ECA8F: mov rcx, rsi
/*1409eca92*/  lea rdx, unk_1417A79BF
/*1409eca99*/  mov r8, r12
/*1409eca9c*/  call sub_14149C0F0
/*1409ecaa1*/  nop
/*1409ecaa2*/ loc_1409ECAA2: mov rcx, rbx
/*1409ecaa5*/  call sub_1400104F0
/*1409ecaaa*/  nop
/*1409ecaab*/ loc_1409ECAAB: mov r14, qword ptr [rbp+130h+var_80]
/*1409ecab2*/  mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ecab9*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ecabd*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ecac4*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ecac8*/  sub rax, rdi
/*1409ecacb*/  cmp rbx, rax
/*1409ecace*/  ja loc_1409ED24F
/*1409ecad4*/  test rbx, rbx
/*1409ecad7*/  jz short loc_1409ECAEC
/*1409ecad9*/ loc_1409ECAD9: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ecadd*/  add rcx, rdi
/*1409ecae0*/  mov rdx, qword ptr [rbp+130h+var_F0+8]
/*1409ecae4*/  mov r8, rbx
/*1409ecae7*/  call sub_141684120
/*1409ecaec*/ loc_1409ECAEC: add rdi, rbx
/*1409ecaef*/  mov [rbp+130h+var_F8], rdi
/*1409ecaf3*/  test r14, r14
/*1409ecaf6*/  jz short loc_1409ECB0A
/*1409ecaf8*/  mov r8d, 1
/*1409ecafe*/  mov rcx, qword ptr [rbp+130h+var_F0+8]
/*1409ecb02*/  mov rdx, r14
/*1409ecb05*/  call sub_140001660
/*1409ecb0a*/ loc_1409ECB0A: mov qword ptr [rbp+130h+var_E0], 0
/*1409ecb12*/  mov [rbp+130h+var_D0], 0
/*1409ecb1a*/  call nullsub_1
/*1409ecb1f*/  mov ecx, 4
/*1409ecb24*/  mov edx, 1
/*1409ecb29*/  call sub_140001650
/*1409ecb2e*/  test rax, rax
/*1409ecb31*/  jz loc_1409EE172
/*1409ecb37*/  mov dword ptr [rax], 65707974h
/*1409ecb3d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecb48*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecb4f*/  mov [rbp+130h+var_50], 4
/*1409ecb5a*/  call nullsub_1
/*1409ecb5f*/  mov ecx, 19h
/*1409ecb64*/  mov edx, 1
/*1409ecb69*/  call sub_140001650
/*1409ecb6e*/  test rax, rax
/*1409ecb71*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ecb75*/  jz loc_1409EE160
/*1409ecb7b*/  movups xmm0, cs:xmmword_1417A5BE0+9
/*1409ecb82*/  movups xmmword ptr [rax+9], xmm0
/*1409ecb86*/  movups xmm0, cs:xmmword_1417A5BE0
/*1409ecb8d*/  movups xmmword ptr [rax], xmm0
/*1409ecb90*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ecb97*/  mov qword ptr [rbp+130h+var_80+8], 19h
/*1409ecba2*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecba9*/  mov qword ptr [rbp+130h+var_70+8], 19h
/*1409ecbb4*/ loc_1409ECBB4: mov rcx, r12
/*1409ecbb7*/  lea rdx, [rbp+130h+var_E0]
/*1409ecbbb*/  lea r8, [rbp+130h+var_60]
/*1409ecbc2*/  mov r9, rsi
/*1409ecbc5*/  call sub_140307860
/*1409ecbca*/  nop
/*1409ecbcb*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecbd2*/  jz short loc_1409ECBDD
/*1409ecbd4*/ loc_1409ECBD4: mov rcx, r12
/*1409ecbd7*/  call sub_1400104F0
/*1409ecbdc*/  nop
/*1409ecbdd*/ loc_1409ECBDD: call nullsub_1
/*1409ecbe2*/  mov ecx, 0Ch
/*1409ecbe7*/  mov edx, 1
/*1409ecbec*/  call sub_140001650
/*1409ecbf1*/  test rax, rax
/*1409ecbf4*/  jz loc_1409EE14E
/*1409ecbfa*/  mov rcx, 695F74757074756Fh
/*1409ecc04*/  mov [rax], rcx
/*1409ecc07*/  mov dword ptr [rax+8], 7865646Eh
/*1409ecc0e*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ecc19*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecc20*/  mov [rbp+130h+var_50], 0Ch
/*1409ecc2b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecc32*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ecc3d*/  mov rax, [rbp+130h+var_110]
/*1409ecc41*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecc48*/  mov rcx, r12
/*1409ecc4b*/  lea rdx, [rbp+130h+var_E0]
/*1409ecc4f*/  lea r8, [rbp+130h+var_60]
/*1409ecc56*/  mov r9, rsi
/*1409ecc59*/  call sub_140307860
/*1409ecc5e*/  nop
/*1409ecc5f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecc66*/  jz short loc_1409ECC71
/*1409ecc68*/  mov rcx, r12
/*1409ecc6b*/  call sub_1400104F0
/*1409ecc70*/  nop
/*1409ecc71*/ loc_1409ECC71: call nullsub_1
/*1409ecc76*/  mov ecx, 0Dh
/*1409ecc7b*/  mov edx, 1
/*1409ecc80*/  call sub_140001650
/*1409ecc85*/  test rax, rax
/*1409ecc88*/  jz loc_1409EE13C
/*1409ecc8e*/  mov rcx, 7865646E695F746Eh
/*1409ecc98*/  mov [rax+5], rcx
/*1409ecc9c*/  mov rcx, 5F746E65746E6F63h
/*1409ecca6*/  mov [rax], rcx
/*1409ecca9*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409eccb4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409eccbb*/  mov [rbp+130h+var_50], 0Dh
/*1409eccc6*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecccd*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409eccd8*/  mov rax, [rbp+130h+var_B8]
/*1409eccdc*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecce3*/  mov rcx, r12
/*1409ecce6*/  lea rdx, [rbp+130h+var_E0]
/*1409eccea*/  lea r8, [rbp+130h+var_60]
/*1409eccf1*/  mov r9, rsi
/*1409eccf4*/  call sub_140307860
/*1409eccf9*/  nop
/*1409eccfa*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecd01*/  jz short loc_1409ECD0C
/*1409ecd03*/  mov rcx, r12
/*1409ecd06*/  call sub_1400104F0
/*1409ecd0b*/  nop
/*1409ecd0c*/ loc_1409ECD0C: call nullsub_1
/*1409ecd11*/  mov ecx, 4
/*1409ecd16*/  mov edx, 1
/*1409ecd1b*/  call sub_140001650
/*1409ecd20*/  test rax, rax
/*1409ecd23*/  jz loc_1409EE12A
/*1409ecd29*/  mov dword ptr [rax], 74786574h
/*1409ecd2f*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecd3a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecd41*/  mov [rbp+130h+var_50], 4
/*1409ecd4c*/  test r13, r13
/*1409ecd4f*/  jz short loc_1409ECD80
/*1409ecd51*/  call nullsub_1
/*1409ecd56*/  mov edx, 1
/*1409ecd5b*/  mov rcx, r13
/*1409ecd5e*/  call sub_140001650
/*1409ecd63*/  test rax, rax
/*1409ecd66*/  jz loc_1409EE184
/*1409ecd6c*/  mov rbx, rax
/*1409ecd6f*/  mov rcx, rax
/*1409ecd72*/  mov rdx, qword ptr [rbp+130h+var_F0]
/*1409ecd76*/  mov r8, r13
/*1409ecd79*/  call sub_141684120
/*1409ecd7e*/  jmp short loc_1409ECD85
/*1409ecd80*/ loc_1409ECD80: mov ebx, 1
/*1409ecd85*/ loc_1409ECD85: mov byte ptr [rbp+130h+var_80], 3
/*1409ecd8c*/  mov qword ptr [rbp+130h+var_80+8], r13
/*1409ecd93*/  mov qword ptr [rbp+130h+var_70], rbx
/*1409ecd9a*/  mov qword ptr [rbp+130h+var_70+8], r13
/*1409ecda1*/  mov [rbp+130h+var_BC], 0
/*1409ecda5*/ loc_1409ECDA5: mov rcx, r12
/*1409ecda8*/  lea rdx, [rbp+130h+var_E0]
/*1409ecdac*/  lea r8, [rbp+130h+var_60]
/*1409ecdb3*/  mov r9, rsi
/*1409ecdb6*/  call sub_140307860
/*1409ecdbb*/  nop
/*1409ecdbc*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecdc3*/  jz short loc_1409ECDCE
/*1409ecdc5*/ loc_1409ECDC5: mov rcx, r12
/*1409ecdc8*/  call sub_1400104F0
/*1409ecdcd*/  nop
/*1409ecdce*/ loc_1409ECDCE: mov rax, [rbp+130h+var_D0]
/*1409ecdd2*/  lea rcx, [rbp+130h+var_128]
/*1409ecdd6*/  mov [rcx+10h], rax
/*1409ecdda*/  movups xmm0, [rbp+130h+var_E0]
/*1409ecdde*/  movups xmmword ptr [rcx], xmm0
/*1409ecde1*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ecde5*/  mov rbx, rbp
/*1409ecde8*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ecdef*/  lea rax, sub_14142EA10
/*1409ecdf6*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ecdfd*/ loc_1409ECDFD: mov rcx, rsi
/*1409ece00*/  lea rdx, unk_1417A79ED
/*1409ece07*/  mov r8, r12
/*1409ece0a*/  call sub_14149C0F0
/*1409ece0f*/  nop
/*1409ece10*/ loc_1409ECE10: mov rcx, rbx
/*1409ece13*/  call sub_1400104F0
/*1409ece18*/  nop
/*1409ece19*/ loc_1409ECE19: mov r14, qword ptr [rbp+130h+var_80]
/*1409ece20*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ece27*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ece2e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ece32*/  sub rax, rdi
/*1409ece35*/  cmp rbx, rax
/*1409ece38*/  ja loc_1409ED27F
/*1409ece3e*/  test rbx, rbx
/*1409ece41*/  jz short loc_1409ECE55
/*1409ece43*/ loc_1409ECE43: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ece47*/  add rcx, rdi
/*1409ece4a*/  mov rdx, r13
/*1409ece4d*/  mov r8, rbx
/*1409ece50*/  call sub_141684120
/*1409ece55*/ loc_1409ECE55: add rdi, rbx
/*1409ece58*/  mov [rbp+130h+var_F8], rdi
/*1409ece5c*/  test r14, r14
/*1409ece5f*/  jz short loc_1409ECE80
/*1409ece61*/  mov r8d, 1
/*1409ece67*/  mov rcx, r13
/*1409ece6a*/  mov rdx, r14
/*1409ece6d*/  call sub_140001660
/*1409ece72*/  nop word ptr [rax+rax+00000000h]
/*1409ece80*/ loc_1409ECE80: mov qword ptr [rbp+130h+var_E0], 0
/*1409ece88*/  mov [rbp+130h+var_D0], 0
/*1409ece90*/  call nullsub_1
/*1409ece95*/  mov ecx, 4
/*1409ece9a*/  mov edx, 1
/*1409ece9f*/  call sub_140001650
/*1409ecea4*/  test rax, rax
/*1409ecea7*/  jz loc_1409EE05E
/*1409ecead*/  mov dword ptr [rax], 65707974h
/*1409eceb3*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecebe*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecec5*/  mov [rbp+130h+var_50], 4
/*1409eced0*/  call nullsub_1
/*1409eced5*/  mov ecx, 1Ah
/*1409eceda*/  mov edx, 1
/*1409ecedf*/  call sub_140001650
/*1409ecee4*/  test rax, rax
/*1409ecee7*/  mov qword ptr [rbp+130h+var_F0], rax
/*1409eceeb*/  jz loc_1409EE049
/*1409ecef1*/  movups xmm0, cs:xmmword_1417A5BF9+0Ah
/*1409ecef8*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ecefc*/  movups xmm0, cs:xmmword_1417A5BF9
/*1409ecf03*/  movups xmmword ptr [rax], xmm0
/*1409ecf06*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ecf0d*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ecf18*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecf1f*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
/*1409ecf2a*/ loc_1409ECF2A: mov rcx, r12
/*1409ecf2d*/  lea rdx, [rbp+130h+var_E0]
/*1409ecf31*/  lea r8, [rbp+130h+var_60]
/*1409ecf38*/  mov r9, rsi
/*1409ecf3b*/  call sub_140307860
/*1409ecf40*/  nop
/*1409ecf41*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecf48*/  jz short loc_1409ECF53
/*1409ecf4a*/ loc_1409ECF4A: mov rcx, r12
/*1409ecf4d*/  call sub_1400104F0
/*1409ecf52*/  nop
/*1409ecf53*/ loc_1409ECF53: call nullsub_1
/*1409ecf58*/  mov ecx, 0Ch
/*1409ecf5d*/  mov edx, 1
/*1409ecf62*/  call sub_140001650
/*1409ecf67*/  test rax, rax
/*1409ecf6a*/  jz loc_1409EE034
/*1409ecf70*/  mov rcx, 695F74757074756Fh
/*1409ecf7a*/  mov [rax], rcx
/*1409ecf7d*/  mov dword ptr [rax+8], 7865646Eh
/*1409ecf84*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ecf8f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecf96*/  mov [rbp+130h+var_50], 0Ch
/*1409ecfa1*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecfa8*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ecfb3*/  mov rax, [rbp+130h+var_110]
/*1409ecfb7*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecfbe*/  mov rcx, r12
/*1409ecfc1*/  lea rdx, [rbp+130h+var_E0]
/*1409ecfc5*/  lea r8, [rbp+130h+var_60]
/*1409ecfcc*/  mov r9, rsi
/*1409ecfcf*/  call sub_140307860
/*1409ecfd4*/  nop
/*1409ecfd5*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecfdc*/  jz short loc_1409ECFE7
/*1409ecfde*/  mov rcx, r12
/*1409ecfe1*/  call sub_1400104F0
/*1409ecfe6*/  nop
/*1409ecfe7*/ loc_1409ECFE7: call nullsub_1
/*1409ecfec*/  mov ecx, 0Dh
/*1409ecff1*/  mov edx, 1
/*1409ecff6*/  call sub_140001650
/*1409ecffb*/  test rax, rax
/*1409ecffe*/  jz loc_1409EE01F
/*1409ed004*/  mov rcx, 7865646E695F746Eh
/*1409ed00e*/  mov [rax+5], rcx
/*1409ed012*/  mov rcx, 5F746E65746E6F63h
/*1409ed01c*/  mov [rax], rcx
/*1409ed01f*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ed02a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed031*/  mov [rbp+130h+var_50], 0Dh
/*1409ed03c*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed043*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed04e*/  mov rax, [rbp+130h+var_B8]
/*1409ed052*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed059*/  mov rcx, r12
/*1409ed05c*/  lea rdx, [rbp+130h+var_E0]
/*1409ed060*/  lea r8, [rbp+130h+var_60]
/*1409ed067*/  mov r9, rsi
/*1409ed06a*/  call sub_140307860
/*1409ed06f*/  nop
/*1409ed070*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed077*/  jz short loc_1409ED082
/*1409ed079*/  mov rcx, r12
/*1409ed07c*/  call sub_1400104F0
/*1409ed081*/  nop
/*1409ed082*/ loc_1409ED082: call nullsub_1
/*1409ed087*/  mov ecx, 4
/*1409ed08c*/  mov edx, 1
/*1409ed091*/  call sub_140001650
/*1409ed096*/  test rax, rax
/*1409ed099*/  jz loc_1409EE00A
/*1409ed09f*/  mov dword ptr [rax], 74726170h
/*1409ed0a5*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed0b0*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed0b7*/  mov [rbp+130h+var_50], 4
/*1409ed0c2*/  mov [rbp+130h+var_84], 1
/*1409ed0c9*/ loc_1409ED0C9: mov rcx, rsi
/*1409ed0cc*/  mov rdx, r15
/*1409ed0cf*/  call sub_140B842D0
/*1409ed0d4*/  nop
/*1409ed0d5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed0dc*/  jz loc_1409EDE0E
/*1409ed0e2*/  movups xmm0, [rbp+130h+var_80]
/*1409ed0e9*/  movups xmm1, [rbp+130h+var_70]
/*1409ed0f0*/  movaps [rbp+130h+var_A0], xmm1
/*1409ed0f7*/  movaps [rbp+130h+var_B0], xmm0
/*1409ed0fe*/  mov [rbp+130h+var_84], 0
/*1409ed105*/  mov rcx, rsi
/*1409ed108*/  lea rdx, [rbp+130h+var_E0]
/*1409ed10c*/  lea r8, [rbp+130h+var_60]
/*1409ed113*/  mov r9, r12
/*1409ed116*/  call sub_140307860
/*1409ed11b*/  nop
/*1409ed11c*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed123*/  jz short loc_1409ED12E
/*1409ed125*/ loc_1409ED125: mov rcx, rsi
/*1409ed128*/  call sub_1400104F0
/*1409ed12d*/  nop
/*1409ed12e*/ loc_1409ED12E: mov rax, [rbp+130h+var_D0]
/*1409ed132*/  lea rcx, [rbp+130h+var_128]
/*1409ed136*/  mov [rcx+10h], rax
/*1409ed13a*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed13e*/  movups xmmword ptr [rcx], xmm0
/*1409ed141*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed145*/  mov rbx, rbp
/*1409ed148*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed14f*/  lea rax, sub_14142EA10
/*1409ed156*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ed15d*/ loc_1409ED15D: mov rcx, rsi
/*1409ed160*/  lea rdx, unk_1417A7A38
/*1409ed167*/  mov r8, r12
/*1409ed16a*/  call sub_14149C0F0
/*1409ed16f*/  nop
/*1409ed170*/ loc_1409ED170: mov rcx, rbx
/*1409ed173*/  call sub_1400104F0
/*1409ed178*/  nop
/*1409ed179*/ loc_1409ED179: mov r14, qword ptr [rbp+130h+var_80]
/*1409ed180*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ed187*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed18e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed192*/  sub rax, rdi
/*1409ed195*/  cmp rbx, rax
/*1409ed198*/  ja short loc_1409ED217
/*1409ed19a*/  test rbx, rbx
/*1409ed19d*/  jz short loc_1409ED1B1
/*1409ed19f*/ loc_1409ED19F: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed1a3*/  add rcx, rdi
/*1409ed1a6*/  mov rdx, r13
/*1409ed1a9*/  mov r8, rbx
/*1409ed1ac*/  call sub_141684120
/*1409ed1b1*/ loc_1409ED1B1: add r15, 20h ; ' '
/*1409ed1b5*/  inc [rbp+130h+var_B8]
/*1409ed1b9*/  add rdi, rbx
/*1409ed1bc*/  mov [rbp+130h+var_F8], rdi
/*1409ed1c0*/  test r14, r14
/*1409ed1c3*/  jz loc_1409EC3F0
/*1409ed1c9*/  mov r8d, 1
/*1409ed1cf*/  mov rcx, r13
/*1409ed1d2*/  mov rdx, r14
/*1409ed1d5*/  call sub_140001660
/*1409ed1da*/  jmp loc_1409EC3F0
/*1409ed1df*/ loc_1409ED1DF: mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed1e3*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed1e7*/  mov [rsp+1B0h+var_190], 1
/*1409ed1f0*/  mov r9d, 1
/*1409ed1f6*/  lea rcx, [rbp+130h+var_108]
/*1409ed1fa*/  mov rdx, rdi
/*1409ed1fd*/  mov r8, rbx
/*1409ed200*/  call sub_141688D30
/*1409ed205*/  nop
/*1409ed206*/  mov rdi, [rbp+130h+var_F8]
/*1409ed20a*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed20e*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed212*/  jmp loc_1409EC71D
/*1409ed217*/ loc_1409ED217: mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed21b*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed21f*/  mov [rsp+1B0h+var_190], 1
/*1409ed228*/  mov r9d, 1
/*1409ed22e*/  lea rcx, [rbp+130h+var_108]
/*1409ed232*/  mov rdx, rdi
/*1409ed235*/  mov r8, rbx
/*1409ed238*/  call sub_141688D30
/*1409ed23d*/  nop
/*1409ed23e*/  mov rdi, [rbp+130h+var_F8]
/*1409ed242*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed246*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed24a*/  jmp loc_1409ED19F
/*1409ed24f*/ loc_1409ED24F: mov [rbp+130h+var_140], r14
/*1409ed253*/  mov [rsp+1B0h+var_190], 1
/*1409ed25c*/  mov r9d, 1
/*1409ed262*/  lea rcx, [rbp+130h+var_108]
/*1409ed266*/  mov rdx, rdi
/*1409ed269*/  mov r8, rbx
/*1409ed26c*/  call sub_141688D30
/*1409ed271*/  nop
/*1409ed272*/  mov rdi, [rbp+130h+var_F8]
/*1409ed276*/  mov r14, [rbp+130h+var_140]
/*1409ed27a*/  jmp loc_1409ECAD9
/*1409ed27f*/ loc_1409ED27F: mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed283*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed287*/  mov [rsp+1B0h+var_190], 1
/*1409ed290*/  mov r9d, 1
/*1409ed296*/  lea rcx, [rbp+130h+var_108]
/*1409ed29a*/  mov rdx, rdi
/*1409ed29d*/  mov r8, rbx
/*1409ed2a0*/  call sub_141688D30
/*1409ed2a5*/  nop
/*1409ed2a6*/  mov rdi, [rbp+130h+var_F8]
/*1409ed2aa*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed2ae*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed2b2*/  jmp loc_1409ECE43
/*1409ed2c0*/ loc_1409ED2C0: mov rax, [r15]
/*1409ed2c3*/  mov rcx, 6E6F6974636E7566h
/*1409ed2cd*/  xor rax, rcx
/*1409ed2d0*/  mov rcx, [r15+5]
/*1409ed2d4*/  mov rdx, 6C6C61635F6E6F69h
/*1409ed2de*/  xor rcx, rdx
/*1409ed2e1*/  or rcx, rax
/*1409ed2e4*/  jz loc_1409ED5B4
/*1409ed2ea*/ loc_1409ED2EA: mov qword ptr [rbp+130h+var_E0], 0
/*1409ed2f2*/  mov [rbp+130h+var_D0], 0
/*1409ed2fa*/  call nullsub_1
/*1409ed2ff*/  mov ecx, 4
/*1409ed304*/  mov edx, 1
/*1409ed309*/  call sub_140001650
/*1409ed30e*/  test rax, rax
/*1409ed311*/  jz loc_1409EDEF9
/*1409ed317*/  mov dword ptr [rax], 65707974h
/*1409ed31d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed328*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed32f*/  mov [rbp+130h+var_50], 4
/*1409ed33a*/  call nullsub_1
/*1409ed33f*/  mov ecx, 19h
/*1409ed344*/  mov edx, 1
/*1409ed349*/  call sub_140001650
/*1409ed34e*/  test rax, rax
/*1409ed351*/  mov [rbp+130h+var_B8], rax
/*1409ed355*/  jz loc_1409EDEE4
/*1409ed35b*/  movups xmm0, cs:xmmword_1417A5C30+9
/*1409ed362*/  movups xmmword ptr [rax+9], xmm0
/*1409ed366*/  movups xmm0, cs:xmmword_1417A5C30
/*1409ed36d*/  movups xmmword ptr [rax], xmm0
/*1409ed370*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ed377*/  mov qword ptr [rbp+130h+var_80+8], 19h
/*1409ed382*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed389*/  mov qword ptr [rbp+130h+var_70+8], 19h
/*1409ed394*/ loc_1409ED394: mov rcx, r12
/*1409ed397*/  lea rdx, [rbp+130h+var_E0]
/*1409ed39b*/  lea r8, [rbp+130h+var_60]
/*1409ed3a2*/  mov r9, rsi
/*1409ed3a5*/  call sub_140307860
/*1409ed3aa*/  nop
/*1409ed3ab*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed3b2*/  jz short loc_1409ED3BD
/*1409ed3b4*/ loc_1409ED3B4: mov rcx, r12
/*1409ed3b7*/  call sub_1400104F0
/*1409ed3bc*/  nop
/*1409ed3bd*/ loc_1409ED3BD: call nullsub_1
/*1409ed3c2*/  mov ecx, 0Ch
/*1409ed3c7*/  mov edx, 1
/*1409ed3cc*/  call sub_140001650
/*1409ed3d1*/  test rax, rax
/*1409ed3d4*/  jz loc_1409EDECF
/*1409ed3da*/  mov rcx, 695F74757074756Fh
/*1409ed3e4*/  mov [rax], rcx
/*1409ed3e7*/  mov dword ptr [rax+8], 7865646Eh
/*1409ed3ee*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ed3f9*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed400*/  mov [rbp+130h+var_50], 0Ch
/*1409ed40b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed412*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed41d*/  mov rax, [rbp+130h+var_110]
/*1409ed421*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed428*/  mov rcx, r12
/*1409ed42b*/  lea rdx, [rbp+130h+var_E0]
/*1409ed42f*/  lea r8, [rbp+130h+var_60]
/*1409ed436*/  mov r9, rsi
/*1409ed439*/  call sub_140307860
/*1409ed43e*/  nop
/*1409ed43f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed446*/  jz short loc_1409ED451
/*1409ed448*/  mov rcx, r12
/*1409ed44b*/  call sub_1400104F0
/*1409ed450*/  nop
/*1409ed451*/ loc_1409ED451: call nullsub_1
/*1409ed456*/  mov ecx, 4
/*1409ed45b*/  mov edx, 1
/*1409ed460*/  call sub_140001650
/*1409ed465*/  test rax, rax
/*1409ed468*/  jz loc_1409EDEBA
/*1409ed46e*/  mov dword ptr [rax], 6D657469h
/*1409ed474*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed47f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed486*/  mov [rbp+130h+var_50], 4
/*1409ed491*/  mov [rbp+130h+var_85], 1
/*1409ed498*/ loc_1409ED498: mov rcx, rsi
/*1409ed49b*/  mov rdx, [rbp+130h+var_C8]
/*1409ed49f*/  call sub_140B842D0
/*1409ed4a4*/  nop
/*1409ed4a5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed4ac*/  jz loc_1409EDC81
/*1409ed4b2*/  movups xmm0, [rbp+130h+var_80]
/*1409ed4b9*/  movups xmm1, [rbp+130h+var_70]
/*1409ed4c0*/  movaps [rbp+130h+var_A0], xmm1
/*1409ed4c7*/  movaps [rbp+130h+var_B0], xmm0
/*1409ed4ce*/  mov [rbp+130h+var_85], 0
/*1409ed4d5*/  mov rcx, rsi
/*1409ed4d8*/  lea rdx, [rbp+130h+var_E0]
/*1409ed4dc*/  lea r8, [rbp+130h+var_60]
/*1409ed4e3*/  mov r9, r12
/*1409ed4e6*/  call sub_140307860
/*1409ed4eb*/  nop
/*1409ed4ec*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed4f3*/  jz short loc_1409ED4FE
/*1409ed4f5*/ loc_1409ED4F5: mov rcx, rsi
/*1409ed4f8*/  call sub_1400104F0
/*1409ed4fd*/  nop
/*1409ed4fe*/ loc_1409ED4FE: mov rax, [rbp+130h+var_D0]
/*1409ed502*/  lea rcx, [rbp+130h+var_128]
/*1409ed506*/  mov [rcx+10h], rax
/*1409ed50a*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed50e*/  movups xmmword ptr [rcx], xmm0
/*1409ed511*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed515*/  mov rbx, rbp
/*1409ed518*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed51f*/  lea rax, sub_14142EA10
/*1409ed526*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ed52d*/ loc_1409ED52D: mov rcx, rsi
/*1409ed530*/  lea rdx, unk_1417A7A80
/*1409ed537*/  mov r8, r12
/*1409ed53a*/  call sub_14149C0F0
/*1409ed53f*/  nop
/*1409ed540*/ loc_1409ED540: mov rcx, rbx
/*1409ed543*/  call sub_1400104F0
/*1409ed548*/  nop
/*1409ed549*/ loc_1409ED549: mov r14, qword ptr [rbp+130h+var_80]
/*1409ed550*/  mov r15, qword ptr [rbp+130h+var_80+8]
/*1409ed557*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed55e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed562*/  sub rax, rdi
/*1409ed565*/  cmp rbx, rax
/*1409ed568*/  ja loc_1409ED920
/*1409ed56e*/  test rbx, rbx
/*1409ed571*/  jz short loc_1409ED585
/*1409ed573*/ loc_1409ED573: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed577*/  add rcx, rdi
/*1409ed57a*/  mov rdx, r15
/*1409ed57d*/  mov r8, rbx
/*1409ed580*/  call sub_141684120
/*1409ed585*/ loc_1409ED585: add [rbp+130h+var_C8], 20h ; ' '
/*1409ed58a*/  inc [rbp+130h+var_110]
/*1409ed58e*/  add rdi, rbx
/*1409ed591*/  mov [rbp+130h+var_F8], rdi
/*1409ed595*/  test r14, r14
/*1409ed598*/  jz loc_1409EC070
/*1409ed59e*/  mov r8d, 1
/*1409ed5a4*/  mov rcx, r15
/*1409ed5a7*/  mov rdx, r14
/*1409ed5aa*/  call sub_140001660
/*1409ed5af*/  jmp loc_1409EC070
/*1409ed5b4*/ loc_1409ED5B4: mov edx, 9
/*1409ed5b9*/  lea rcx, aArguments_1; "arguments"
/*1409ed5c0*/  mov r8, [rbp+130h+var_C8]
/*1409ed5c4*/  call sub_141433D50
/*1409ed5c9*/  nop
/*1409ed5ca*/  mov r14d, 2
/*1409ed5d0*/  test rax, rax
/*1409ed5d3*/  jz short loc_1409ED5EB
/*1409ed5d5*/  cmp byte ptr [rax], 3
/*1409ed5d8*/  lea rbx, asc_1417A4EB5; "{}"
/*1409ed5df*/  jnz short loc_1409ED5F2
/*1409ed5e1*/  mov rbx, [rax+10h]
/*1409ed5e5*/  mov r14, [rax+18h]
/*1409ed5e9*/  jmp short loc_1409ED5F2
/*1409ed5eb*/ loc_1409ED5EB: lea rbx, asc_1417A4EB5; "{}"
/*1409ed5f2*/ loc_1409ED5F2: mov qword ptr [rbp+130h+var_E0], 0
/*1409ed5fa*/  mov [rbp+130h+var_D0], 0
/*1409ed602*/  call nullsub_1
/*1409ed607*/  mov ecx, 4
/*1409ed60c*/  mov edx, 1
/*1409ed611*/  call sub_140001650
/*1409ed616*/  test rax, rax
/*1409ed619*/  jz loc_1409EE0B2
/*1409ed61f*/  mov dword ptr [rax], 65707974h
/*1409ed625*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed630*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed637*/  mov [rbp+130h+var_50], 4
/*1409ed642*/  call nullsub_1
/*1409ed647*/  mov ecx, 25h ; '%'
/*1409ed64c*/  mov edx, 1
/*1409ed651*/  call sub_140001650
/*1409ed656*/  test rax, rax
/*1409ed659*/  mov [rbp+130h+var_B8], rax
/*1409ed65d*/  jz loc_1409EE09D
/*1409ed663*/  mov r10, rax
/*1409ed666*/  movups xmm0, cs:xmmword_1417A5C88
/*1409ed66d*/  movups xmmword ptr [rax+10h], xmm0
/*1409ed671*/  movups xmm0, cs:xmmword_1417A5C78
/*1409ed678*/  movups xmmword ptr [rax], xmm0
/*1409ed67b*/  mov rax, 656E6F642E73746Eh
/*1409ed685*/  mov [r10+1Dh], rax
/*1409ed689*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ed690*/  mov qword ptr [rbp+130h+var_80+8], 25h ; '%'
/*1409ed69b*/  mov qword ptr [rbp+130h+var_70], r10
/*1409ed6a2*/  mov qword ptr [rbp+130h+var_70+8], 25h ; '%'
/*1409ed6ad*/ loc_1409ED6AD: mov rcx, r12
/*1409ed6b0*/  lea rdx, [rbp+130h+var_E0]
/*1409ed6b4*/  lea r8, [rbp+130h+var_60]
/*1409ed6bb*/  mov r9, rsi
/*1409ed6be*/  call sub_140307860
/*1409ed6c3*/  nop
/*1409ed6c4*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed6cb*/  jz short loc_1409ED6D6
/*1409ed6cd*/ loc_1409ED6CD: mov rcx, r12
/*1409ed6d0*/  call sub_1400104F0
/*1409ed6d5*/  nop
/*1409ed6d6*/ loc_1409ED6D6: call nullsub_1
/*1409ed6db*/  mov ecx, 0Ch
/*1409ed6e0*/  mov edx, 1
/*1409ed6e5*/  call sub_140001650
/*1409ed6ea*/  test rax, rax
/*1409ed6ed*/  jz loc_1409EE088
/*1409ed6f3*/  mov rcx, 695F74757074756Fh
/*1409ed6fd*/  mov [rax], rcx
/*1409ed700*/  mov dword ptr [rax+8], 7865646Eh
/*1409ed707*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ed712*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed719*/  mov [rbp+130h+var_50], 0Ch
/*1409ed724*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed72b*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed736*/  mov rax, [rbp+130h+var_110]
/*1409ed73a*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed741*/  mov rcx, r12
/*1409ed744*/  lea rdx, [rbp+130h+var_E0]
/*1409ed748*/  lea r8, [rbp+130h+var_60]
/*1409ed74f*/  mov r9, rsi
/*1409ed752*/  call sub_140307860
/*1409ed757*/  nop
/*1409ed758*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed75f*/  jz short loc_1409ED76A
/*1409ed761*/  mov rcx, r12
/*1409ed764*/  call sub_1400104F0
/*1409ed769*/  nop
/*1409ed76a*/ loc_1409ED76A: call nullsub_1
/*1409ed76f*/  mov ecx, 9
/*1409ed774*/  mov edx, 1
/*1409ed779*/  call sub_140001650
/*1409ed77e*/  test rax, rax
/*1409ed781*/  jz loc_1409EE073
/*1409ed787*/  mov rcx, 746E656D75677261h
/*1409ed791*/  mov [rax], rcx
/*1409ed794*/  mov byte ptr [rax+8], 73h ; 's'
/*1409ed798*/  mov qword ptr [rbp+130h+var_60], 9
/*1409ed7a3*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed7aa*/  mov [rbp+130h+var_50], 9
/*1409ed7b5*/  test r14, r14
/*1409ed7b8*/  js loc_1409EDC12
/*1409ed7be*/  jz short loc_1409ED7F4
/*1409ed7c0*/  call nullsub_1
/*1409ed7c5*/  mov r15d, 1
/*1409ed7cb*/  mov edx, 1
/*1409ed7d0*/  mov rcx, r14
/*1409ed7d3*/  call sub_140001650
/*1409ed7d8*/  test rax, rax
/*1409ed7db*/  jz loc_1409EDC15
/*1409ed7e1*/  mov r13, rax
/*1409ed7e4*/  mov rcx, rax
/*1409ed7e7*/  mov rdx, rbx
/*1409ed7ea*/  mov r8, r14
/*1409ed7ed*/  call sub_141684120
/*1409ed7f2*/  jmp short loc_1409ED7FA
/*1409ed7f4*/ loc_1409ED7F4: mov r13d, 1
/*1409ed7fa*/ loc_1409ED7FA: mov byte ptr [rbp+130h+var_80], 3
/*1409ed801*/  mov qword ptr [rbp+130h+var_80+8], r14
/*1409ed808*/  mov qword ptr [rbp+130h+var_70], r13
/*1409ed80f*/  mov qword ptr [rbp+130h+var_70+8], r14
/*1409ed816*/  mov [rbp+130h+var_BA], 0
/*1409ed81a*/ loc_1409ED81A: mov rcx, r12
/*1409ed81d*/  lea rdx, [rbp+130h+var_E0]
/*1409ed821*/  lea r8, [rbp+130h+var_60]
/*1409ed828*/  mov r9, rsi
/*1409ed82b*/  call sub_140307860
/*1409ed830*/  nop
/*1409ed831*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed838*/  jz short loc_1409ED843
/*1409ed83a*/ loc_1409ED83A: mov rcx, r12
/*1409ed83d*/  call sub_1400104F0
/*1409ed842*/  nop
/*1409ed843*/ loc_1409ED843: mov rax, [rbp+130h+var_D0]
/*1409ed847*/  lea rcx, [rbp+130h+var_128]
/*1409ed84b*/  mov [rcx+10h], rax
/*1409ed84f*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed853*/  movups xmmword ptr [rcx], xmm0
/*1409ed856*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed85a*/  mov rbx, rbp
/*1409ed85d*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed864*/  lea rax, sub_14142EA10
/*1409ed86b*/  mov qword ptr [rbp+130h+var_B0+8], rax
/*1409ed872*/ loc_1409ED872: mov rcx, rsi
/*1409ed875*/  lea rdx, unk_1417A793E
/*1409ed87c*/  mov r8, r12
/*1409ed87f*/  call sub_14149C0F0
/*1409ed884*/  nop
/*1409ed885*/ loc_1409ED885: mov rcx, rbx
/*1409ed888*/  call sub_1400104F0
/*1409ed88d*/  nop
/*1409ed88e*/ loc_1409ED88E: mov r14, qword ptr [rbp+130h+var_80]
/*1409ed895*/  mov r15, qword ptr [rbp+130h+var_80+8]
/*1409ed89c*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed8a3*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed8a7*/  sub rax, rdi
/*1409ed8aa*/  cmp rbx, rax
/*1409ed8ad*/  ja loc_1409ED958
/*1409ed8b3*/  test rbx, rbx
/*1409ed8b6*/  jz short loc_1409ED8CA
/*1409ed8b8*/ loc_1409ED8B8: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed8bc*/  add rcx, rdi
/*1409ed8bf*/  mov rdx, r15
/*1409ed8c2*/  mov r8, rbx
/*1409ed8c5*/  call sub_141684120
/*1409ed8ca*/ loc_1409ED8CA: add rdi, rbx
/*1409ed8cd*/  mov [rbp+130h+var_F8], rdi
/*1409ed8d1*/  test r14, r14
/*1409ed8d4*/  jz loc_1409ED2EA
/*1409ed8da*/  mov r8d, 1
/*1409ed8e0*/  mov rcx, r15
/*1409ed8e3*/  mov rdx, r14
/*1409ed8e6*/  call sub_140001660
/*1409ed8eb*/  jmp loc_1409ED2EA
/*1409ed8f0*/ loc_1409ED8F0: mov [rbp+130h+var_138], r14
/*1409ed8f4*/  mov [rsp+1B0h+var_190], 1
/*1409ed8fd*/  mov r9d, 1
/*1409ed903*/  lea rcx, [rbp+130h+var_108]
/*1409ed907*/  mov rdx, rdi
/*1409ed90a*/  mov r8, rbx
/*1409ed90d*/  call sub_141688D30
/*1409ed912*/  nop
/*1409ed913*/  mov rdi, [rbp+130h+var_F8]
/*1409ed917*/  mov r14, [rbp+130h+var_138]
/*1409ed91b*/  jmp loc_1409EC344
/*1409ed920*/ loc_1409ED920: mov [rbp+130h+var_138], r15
/*1409ed924*/  mov [rbp+130h+var_B8], r14
/*1409ed928*/  mov [rsp+1B0h+var_190], 1
/*1409ed931*/  mov r9d, 1
/*1409ed937*/  lea rcx, [rbp+130h+var_108]
/*1409ed93b*/  mov rdx, rdi
/*1409ed93e*/  mov r8, rbx
/*1409ed941*/  call sub_141688D30
/*1409ed946*/  nop
/*1409ed947*/  mov rdi, [rbp+130h+var_F8]
/*1409ed94b*/  mov r14, [rbp+130h+var_B8]
/*1409ed94f*/  mov r15, [rbp+130h+var_138]
/*1409ed953*/  jmp loc_1409ED573
/*1409ed958*/ loc_1409ED958: mov [rbp+130h+var_138], r15
/*1409ed95c*/  mov [rbp+130h+var_B8], r14
/*1409ed960*/  mov [rsp+1B0h+var_190], 1
/*1409ed969*/  mov r9d, 1
/*1409ed96f*/  lea rcx, [rbp+130h+var_108]
/*1409ed973*/  mov rdx, rdi
/*1409ed976*/  mov r8, rbx
/*1409ed979*/  call sub_141688D30
/*1409ed97e*/  nop
/*1409ed97f*/  mov rdi, [rbp+130h+var_F8]
/*1409ed983*/  mov r14, [rbp+130h+var_B8]
/*1409ed987*/  mov r15, [rbp+130h+var_138]
/*1409ed98b*/  jmp loc_1409ED8B8
/*1409ed990*/ loc_1409ED990: mov qword ptr [rbp+130h+var_60], 0
/*1409ed99b*/  mov [rbp+130h+var_50], 0
/*1409ed9a6*/  call nullsub_1
/*1409ed9ab*/  mov ecx, 4
/*1409ed9b0*/  mov edx, 1
/*1409ed9b5*/  call sub_140001650
/*1409ed9ba*/  test rax, rax
/*1409ed9bd*/  jz loc_1409EDF62
/*1409ed9c3*/  mov dword ptr [rax], 65707974h
/*1409ed9c9*/  mov [rbp+130h+var_130], 4
/*1409ed9d1*/  mov [rbp+130h+var_128], rax
/*1409ed9d5*/  mov [rbp+130h+var_120], 4
/*1409ed9dd*/  call nullsub_1
/*1409ed9e2*/  mov ecx, 12h
/*1409ed9e7*/  mov edx, 1
/*1409ed9ec*/  call sub_140001650
/*1409ed9f1*/  test rax, rax
/*1409ed9f4*/  mov [rbp+130h+var_C8], rax
/*1409ed9f8*/  jz loc_1409EDF77
/*1409ed9fe*/  movups xmm0, xmmword ptr cs:aResponseComple; "response.completed"
/*1409eda05*/  movups xmmword ptr [rax], xmm0
/*1409eda08*/  mov word ptr [rax+10h], 6465h
/*1409eda0e*/  mov byte ptr [rbp+130h+var_80], 3
/*1409eda15*/  mov qword ptr [rbp+130h+var_80+8], 12h
/*1409eda20*/  mov qword ptr [rbp+130h+var_70], rax
/*1409eda27*/  mov qword ptr [rbp+130h+var_70+8], 12h
/*1409eda32*/ loc_1409EDA32: lea rcx, [rbp+130h+var_B0]
/*1409eda39*/  lea rdx, [rbp+130h+var_60]
/*1409eda40*/  mov r8, rbp
/*1409eda43*/  lea r9, [rbp+130h+var_80]
/*1409eda4a*/  call sub_140307860
/*1409eda4f*/  nop
/*1409eda50*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409eda57*/  jz short loc_1409EDA66
/*1409eda59*/ loc_1409EDA59: lea rcx, [rbp+130h+var_B0]
/*1409eda60*/  call sub_1400104F0
/*1409eda65*/  nop
/*1409eda66*/ loc_1409EDA66: call nullsub_1
/*1409eda6b*/  mov ecx, 8
/*1409eda70*/  mov edx, 1
/*1409eda75*/  call sub_140001650
/*1409eda7a*/  test rax, rax
/*1409eda7d*/  jz loc_1409EDF8C
/*1409eda83*/  mov rcx, 65736E6F70736572h
/*1409eda8d*/  mov [rax], rcx
/*1409eda90*/  mov [rbp+130h+var_130], 8
/*1409eda98*/  mov [rbp+130h+var_128], rax
/*1409eda9c*/  mov [rbp+130h+var_120], 8
/*1409edaa4*/  mov [rbp+130h+var_86], 1
/*1409edaab*/ loc_1409EDAAB: lea rcx, [rbp+130h+var_80]
/*1409edab2*/  mov rdx, [rbp+130h+var_150]
/*1409edab6*/  call sub_140B842D0
/*1409edabb*/  nop
/*1409edabc*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409edac3*/  jz loc_1409EDD58
/*1409edac9*/  movups xmm0, [rbp+130h+var_80]
/*1409edad0*/  movups xmm1, [rbp+130h+var_70]
/*1409edad7*/  movaps [rbp+130h+var_A0], xmm1
/*1409edade*/  movaps [rbp+130h+var_B0], xmm0
/*1409edae5*/  mov [rbp+130h+var_86], 0
/*1409edaec*/  lea rsi, [rbp+130h+var_80]
/*1409edaf3*/  lea rdx, [rbp+130h+var_60]
/*1409edafa*/  mov r8, rbp
/*1409edafd*/  lea r9, [rbp+130h+var_B0]
/*1409edb04*/  mov rcx, rsi
/*1409edb07*/  call sub_140307860
/*1409edb0c*/  nop
/*1409edb0d*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409edb14*/  jz short loc_1409EDB23
/*1409edb16*/ loc_1409EDB16: lea rcx, [rbp+130h+var_80]
/*1409edb1d*/  call sub_1400104F0
/*1409edb22*/  nop
/*1409edb23*/ loc_1409EDB23: movups xmm0, [rbp+130h+var_60]
/*1409edb2a*/  movups [rbp+130h+var_80+8], xmm0
/*1409edb31*/  mov rax, [rbp+130h+var_50]
/*1409edb38*/  mov qword ptr [rbp+130h+var_70+8], rax
/*1409edb3f*/  mov byte ptr [rbp+130h+var_80], 5
/*1409edb46*/  mov [rbp+130h+var_130], rsi
/*1409edb4a*/  lea rax, sub_14142EA10
/*1409edb51*/  mov [rbp+130h+var_128], rax
/*1409edb55*/ loc_1409EDB55: lea rdx, unk_1417A7AC8
/*1409edb5c*/  lea rcx, [rbp+130h+var_B0]
/*1409edb63*/  mov r8, rbp
/*1409edb66*/  call sub_14149C0F0
/*1409edb6b*/  nop
/*1409edb6c*/ loc_1409EDB6C: lea rcx, [rbp+130h+var_80]
/*1409edb73*/  call sub_1400104F0
/*1409edb78*/  nop
/*1409edb79*/ loc_1409EDB79: mov rbx, qword ptr [rbp+130h+var_B0]
/*1409edb80*/  mov r14, qword ptr [rbp+130h+var_B0+8]
/*1409edb87*/  mov rsi, qword ptr [rbp+130h+var_A0]
/*1409edb8e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409edb92*/  mov rdi, [rbp+130h+var_F8]
/*1409edb96*/  sub rax, rdi
/*1409edb99*/  cmp rsi, rax
/*1409edb9c*/  ja loc_1409EDD97
/*1409edba2*/  test rsi, rsi
/*1409edba5*/  jz short loc_1409EDBB9
/*1409edba7*/ loc_1409EDBA7: mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409edbab*/  add rcx, rdi
/*1409edbae*/  mov rdx, r14
/*1409edbb1*/  mov r8, rsi
/*1409edbb4*/  call sub_141684120
/*1409edbb9*/ loc_1409EDBB9: add rdi, rsi
/*1409edbbc*/  mov [rbp+130h+var_F8], rdi
/*1409edbc0*/  test rbx, rbx
/*1409edbc3*/  jz short loc_1409EDBD6
/*1409edbc5*/  mov r8d, 1
/*1409edbcb*/  mov rcx, r14
/*1409edbce*/  mov rdx, rbx
/*1409edbd1*/  call sub_140001660
/*1409edbd6*/ loc_1409EDBD6: mov rax, [rbp+130h+var_F8]
/*1409edbda*/  mov rcx, [rbp+130h+var_148]
/*1409edbde*/  mov [rcx+10h], rax
/*1409edbe2*/  movups xmm0, [rbp+130h+var_108]
/*1409edbe6*/  movups xmmword ptr [rcx], xmm0
/*1409edbe9*/  mov [rbp+130h+var_41], 0
/*1409edbf0*/ loc_1409EDBF0: lea rcx, [rbp+130h+var_180]
/*1409edbf4*/  call sub_1400104F0
/*1409edbf9*/  nop
/*1409edbfa*/  mov rax, [rbp+130h+var_148]
/*1409edbfe*/  add rsp, 178h
/*1409edc05*/  pop rbx
/*1409edc06*/  pop rdi
/*1409edc07*/  pop rsi
/*1409edc08*/  pop r12
/*1409edc0a*/  pop r13
/*1409edc0c*/  pop r14
/*1409edc0e*/  pop r15
/*1409edc10*/  pop rbp
/*1409edc11*/  retn
/*1409edc12*/ loc_1409EDC12: xor r15d, r15d
/*1409edc15*/ loc_1409EDC15: mov [rbp+130h+var_BA], 1
/*1409edc19*/ loc_1409EDC19: mov rcx, r15
/*1409edc1c*/  mov rdx, r14
/*1409edc1f*/  call sub_1416C2D4B
/*1409edc25*/  jmp loc_1409EE196
/*1409edc2a*/ loc_1409EDC2A: xor r15d, r15d
/*1409edc2d*/ loc_1409EDC2D: mov [rbp+130h+var_BB], 1
/*1409edc31*/ loc_1409EDC31: mov rcx, r15
/*1409edc34*/  mov rdx, rbx
/*1409edc37*/  call sub_1416C2D4B
/*1409edc3d*/  jmp loc_1409EE196
/*1409edc42*/ loc_1409EDC42: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edc49*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409edc50*/ loc_1409EDC50: lea rax, off_1417A78F8; "src\\core\\relay\\translator.rs"
/*1409edc57*/  mov [rsp+1B0h+var_190], rax
/*1409edc5c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edc63*/  lea r9, off_1417A5560
/*1409edc6a*/  lea r8, [rbp+130h+var_B0]
/*1409edc71*/  mov edx, 2Bh ; '+'
/*1409edc76*/  call sub_1416C3060
/*1409edc7c*/  jmp loc_1409EE196
/*1409edc81*/ loc_1409EDC81: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edc88*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409edc8f*/ loc_1409EDC8F: lea rax, off_1417A7A68; "src\\core\\relay\\translator.rs"
/*1409edc96*/  mov [rsp+1B0h+var_190], rax
/*1409edc9b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edca2*/  lea r9, off_1417A5560
/*1409edca9*/  lea r8, [rbp+130h+var_B0]
/*1409edcb0*/  mov edx, 2Bh ; '+'
/*1409edcb5*/  call sub_1416C3060
/*1409edcbb*/  jmp loc_1409EE196
/*1409edcc0*/ loc_1409EDCC0: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edcc7*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409edcce*/ loc_1409EDCCE: lea rax, off_1417A78B8; "src\\core\\relay\\translator.rs"
/*1409edcd5*/  mov [rsp+1B0h+var_190], rax
/*1409edcda*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edce1*/  lea r9, off_1417A5560
/*1409edce8*/  lea r8, [rbp+130h+var_B0]
/*1409edcef*/  mov edx, 2Bh ; '+'
/*1409edcf4*/  call sub_1416C3060
/*1409edcfa*/  jmp loc_1409EE196
/*1409edcff*/ loc_1409EDCFF: mov [rbp+130h+var_110], rbx
/*1409edd03*/  mov [rbp+130h+var_C8], rdx
/*1409edd07*/  mov [rsp+1B0h+var_190], 1
/*1409edd10*/  lea rcx, [rbp+130h+var_108]
/*1409edd14*/  mov r9d, 1
/*1409edd1a*/  xor edx, edx
/*1409edd1c*/  mov r8, rsi
/*1409edd1f*/  call sub_141688D30
/*1409edd24*/  nop
/*1409edd25*/ loc_1409EDD25: mov rdi, [rbp+130h+var_F8]
/*1409edd29*/  mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409edd2d*/  add rcx, rdi
/*1409edd30*/  mov rbx, [rbp+130h+var_110]
/*1409edd34*/  mov rdx, rbx
/*1409edd37*/  mov r8, rsi
/*1409edd3a*/  call sub_141684120
/*1409edd3f*/  mov rdx, [rbp+130h+var_C8]
/*1409edd43*/  add rdi, rsi
/*1409edd46*/  mov [rbp+130h+var_F8], rdi
/*1409edd4a*/  test rdx, rdx
/*1409edd4d*/  jnz loc_1409EC000
/*1409edd53*/  jmp loc_1409EC00F
/*1409edd58*/ loc_1409EDD58: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edd5f*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409edd66*/ loc_1409EDD66: lea rax, off_1417A7AB0; "src\\core\\relay\\translator.rs"
/*1409edd6d*/  mov [rsp+1B0h+var_190], rax
/*1409edd72*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edd79*/  lea r9, off_1417A5560
/*1409edd80*/  lea r8, [rbp+130h+var_B0]
/*1409edd87*/  mov edx, 2Bh ; '+'
/*1409edd8c*/  call sub_1416C3060
/*1409edd92*/  jmp loc_1409EE196
/*1409edd97*/ loc_1409EDD97: mov [rbp+130h+var_110], r14
/*1409edd9b*/  mov [rbp+130h+var_C8], rbx
/*1409edd9f*/  mov [rsp+1B0h+var_190], 1
/*1409edda8*/  lea rcx, [rbp+130h+var_108]
/*1409eddac*/  mov r9d, 1
/*1409eddb2*/  mov rdx, rdi
/*1409eddb5*/  mov r8, rsi
/*1409eddb8*/  call sub_141688D30
/*1409eddbd*/  nop
/*1409eddbe*/  mov rdi, [rbp+130h+var_F8]
/*1409eddc2*/  mov rbx, [rbp+130h+var_C8]
/*1409eddc6*/  mov r14, [rbp+130h+var_110]
/*1409eddca*/  jmp loc_1409EDBA7
/*1409eddcf*/ loc_1409EDDCF: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409eddd6*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409edddd*/ loc_1409EDDDD: lea rax, off_1417A7978; "src\\core\\relay\\translator.rs"
/*1409edde4*/  mov [rsp+1B0h+var_190], rax
/*1409edde9*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409eddf0*/  lea r9, off_1417A5560
/*1409eddf7*/  lea r8, [rbp+130h+var_B0]
/*1409eddfe*/  mov edx, 2Bh ; '+'
/*1409ede03*/  call sub_1416C3060
/*1409ede09*/  jmp loc_1409EE196
/*1409ede0e*/ loc_1409EDE0E: mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ede15*/  mov qword ptr [rbp+130h+var_B0], rax
/*1409ede1c*/ loc_1409EDE1C: lea rax, off_1417A7A20; "src\\core\\relay\\translator.rs"
/*1409ede23*/  mov [rsp+1B0h+var_190], rax
/*1409ede28*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409ede2f*/  lea r9, off_1417A5560
/*1409ede36*/  lea r8, [rbp+130h+var_B0]
/*1409ede3d*/  mov edx, 2Bh ; '+'
/*1409ede42*/  call sub_1416C3060
/*1409ede48*/  jmp loc_1409EE196
/*1409ede4d*/ loc_1409EDE4D: mov [rbp+130h+var_41], 1
/*1409ede54*/ loc_1409EDE54: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409ede5b*/  call sub_1416C3040
/*1409ede61*/  jmp loc_1409EE196
/*1409ede66*/ loc_1409EDE66: mov ecx, 1
/*1409ede6b*/  mov edx, 1Ah
/*1409ede70*/  call sub_1416C2D4B
/*1409ede76*/  jmp loc_1409EE196
/*1409ede7b*/ loc_1409EDE7B: mov ecx, 1
/*1409ede80*/  mov edx, 0Ch
/*1409ede85*/  call sub_1416C2D4B
/*1409ede8b*/  jmp loc_1409EE196
/*1409ede90*/ loc_1409EDE90: mov ecx, 1
/*1409ede95*/  mov edx, 4
/*1409ede9a*/  call sub_1416C2D4B
/*1409edea0*/  jmp loc_1409EE196
/*1409edea5*/ loc_1409EDEA5: mov ecx, 1
/*1409edeaa*/  mov edx, 4
/*1409edeaf*/  call sub_1416C2D4B
/*1409edeb5*/  jmp loc_1409EE196
/*1409edeba*/ loc_1409EDEBA: mov ecx, 1
/*1409edebf*/  mov edx, 4
/*1409edec4*/  call sub_1416C2D4B
/*1409edeca*/  jmp loc_1409EE196
/*1409edecf*/ loc_1409EDECF: mov ecx, 1
/*1409eded4*/  mov edx, 0Ch
/*1409eded9*/  call sub_1416C2D4B
/*1409ededf*/  jmp loc_1409EE196
/*1409edee4*/ loc_1409EDEE4: mov ecx, 1
/*1409edee9*/  mov edx, 19h
/*1409edeee*/  call sub_1416C2D4B
/*1409edef4*/  jmp loc_1409EE196
/*1409edef9*/ loc_1409EDEF9: mov ecx, 1
/*1409edefe*/  mov edx, 4
/*1409edf03*/  call sub_1416C2D4B
/*1409edf09*/  jmp loc_1409EE196
/*1409edf0e*/ loc_1409EDF0E: mov ecx, 1
/*1409edf13*/  mov edx, 0Bh
/*1409edf18*/  call sub_1416C2D4B
/*1409edf1e*/  jmp loc_1409EE196
/*1409edf23*/ loc_1409EDF23: mov ecx, 1
/*1409edf28*/  mov edx, 4
/*1409edf2d*/  call sub_1416C2D4B
/*1409edf33*/  jmp loc_1409EE196
/*1409edf38*/ loc_1409EDF38: mov ecx, 1
/*1409edf3d*/  mov edx, 10h
/*1409edf42*/  call sub_1416C2D4B
/*1409edf48*/  jmp loc_1409EE196
/*1409edf4d*/ loc_1409EDF4D: mov ecx, 1
/*1409edf52*/  mov edx, 8
/*1409edf57*/  call sub_1416C2D4B
/*1409edf5d*/  jmp loc_1409EE196
/*1409edf62*/ loc_1409EDF62: mov ecx, 1
/*1409edf67*/  mov edx, 4
/*1409edf6c*/  call sub_1416C2D4B
/*1409edf72*/  jmp loc_1409EE196
/*1409edf77*/ loc_1409EDF77: mov ecx, 1
/*1409edf7c*/  mov edx, 12h
/*1409edf81*/  call sub_1416C2D4B
/*1409edf87*/  jmp loc_1409EE196
/*1409edf8c*/ loc_1409EDF8C: mov ecx, 1
/*1409edf91*/  mov edx, 8
/*1409edf96*/  call sub_1416C2D4B
/*1409edf9c*/  jmp loc_1409EE196
/*1409edfa1*/ loc_1409EDFA1: mov ecx, 1
/*1409edfa6*/  mov edx, 4
/*1409edfab*/  call sub_1416C2D4B
/*1409edfb1*/  jmp loc_1409EE196
/*1409edfb6*/ loc_1409EDFB6: mov ecx, 1
/*1409edfbb*/  mov edx, 0Dh
/*1409edfc0*/  call sub_1416C2D4B
/*1409edfc6*/  jmp loc_1409EE196
/*1409edfcb*/ loc_1409EDFCB: mov ecx, 1
/*1409edfd0*/  mov edx, 0Ch
/*1409edfd5*/  call sub_1416C2D4B
/*1409edfdb*/  jmp loc_1409EE196
/*1409edfe0*/ loc_1409EDFE0: mov ecx, 1
/*1409edfe5*/  mov edx, 1Bh
/*1409edfea*/  call sub_1416C2D4B
/*1409edff0*/  jmp loc_1409EE196
/*1409edff5*/ loc_1409EDFF5: mov ecx, 1
/*1409edffa*/  mov edx, 4
/*1409edfff*/  call sub_1416C2D4B
/*1409ee005*/  jmp loc_1409EE196
/*1409ee00a*/ loc_1409EE00A: mov ecx, 1
/*1409ee00f*/  mov edx, 4
/*1409ee014*/  call sub_1416C2D4B
/*1409ee01a*/  jmp loc_1409EE196
/*1409ee01f*/ loc_1409EE01F: mov ecx, 1
/*1409ee024*/  mov edx, 0Dh
/*1409ee029*/  call sub_1416C2D4B
/*1409ee02f*/  jmp loc_1409EE196
/*1409ee034*/ loc_1409EE034: mov ecx, 1
/*1409ee039*/  mov edx, 0Ch
/*1409ee03e*/  call sub_1416C2D4B
/*1409ee044*/  jmp loc_1409EE196
/*1409ee049*/ loc_1409EE049: mov ecx, 1
/*1409ee04e*/  mov edx, 1Ah
/*1409ee053*/  call sub_1416C2D4B
/*1409ee059*/  jmp loc_1409EE196
/*1409ee05e*/ loc_1409EE05E: mov ecx, 1
/*1409ee063*/  mov edx, 4
/*1409ee068*/  call sub_1416C2D4B
/*1409ee06e*/  jmp loc_1409EE196
/*1409ee073*/ loc_1409EE073: mov ecx, 1
/*1409ee078*/  mov edx, 9
/*1409ee07d*/  call sub_1416C2D4B
/*1409ee083*/  jmp loc_1409EE196
/*1409ee088*/ loc_1409EE088: mov ecx, 1
/*1409ee08d*/  mov edx, 0Ch
/*1409ee092*/  call sub_1416C2D4B
/*1409ee098*/  jmp loc_1409EE196
/*1409ee09d*/ loc_1409EE09D: mov ecx, 1
/*1409ee0a2*/  mov edx, 25h ; '%'
/*1409ee0a7*/  call sub_1416C2D4B
/*1409ee0ad*/  jmp loc_1409EE196
/*1409ee0b2*/ loc_1409EE0B2: mov ecx, 1
/*1409ee0b7*/  mov edx, 4
/*1409ee0bc*/  call sub_1416C2D4B
/*1409ee0c2*/  jmp loc_1409EE196
/*1409ee0c7*/ loc_1409EE0C7: mov ecx, 1
/*1409ee0cc*/  mov edx, 5
/*1409ee0d1*/  call sub_1416C2D4B
/*1409ee0d7*/  jmp loc_1409EE196
/*1409ee0dc*/ loc_1409EE0DC: mov ecx, 1
/*1409ee0e1*/  mov edx, 0Dh
/*1409ee0e6*/  call sub_1416C2D4B
/*1409ee0ec*/  jmp loc_1409EE196
/*1409ee0f1*/ loc_1409EE0F1: mov ecx, 1
/*1409ee0f6*/  mov edx, 0Ch
/*1409ee0fb*/  call sub_1416C2D4B
/*1409ee101*/  jmp loc_1409EE196
/*1409ee106*/ loc_1409EE106: mov ecx, 1
/*1409ee10b*/  mov edx, 1Ah
/*1409ee110*/  call sub_1416C2D4B
/*1409ee116*/  jmp short loc_1409EE196
/*1409ee118*/ loc_1409EE118: mov ecx, 1
/*1409ee11d*/  mov edx, 4
/*1409ee122*/  call sub_1416C2D4B
/*1409ee128*/  jmp short loc_1409EE196
/*1409ee12a*/ loc_1409EE12A: mov ecx, 1
/*1409ee12f*/  mov edx, 4
/*1409ee134*/  call sub_1416C2D4B
/*1409ee13a*/  jmp short loc_1409EE196
/*1409ee13c*/ loc_1409EE13C: mov ecx, 1
/*1409ee141*/  mov edx, 0Dh
/*1409ee146*/  call sub_1416C2D4B
/*1409ee14c*/  jmp short loc_1409EE196
/*1409ee14e*/ loc_1409EE14E: mov ecx, 1
/*1409ee153*/  mov edx, 0Ch
/*1409ee158*/  call sub_1416C2D4B
/*1409ee15e*/  jmp short loc_1409EE196
/*1409ee160*/ loc_1409EE160: mov ecx, 1
/*1409ee165*/  mov edx, 19h
/*1409ee16a*/  call sub_1416C2D4B
/*1409ee170*/  jmp short loc_1409EE196
/*1409ee172*/ loc_1409EE172: mov ecx, 1
/*1409ee177*/  mov edx, 4
/*1409ee17c*/  call sub_1416C2D4B
/*1409ee182*/  jmp short loc_1409EE196
/*1409ee184*/ loc_1409EE184: mov [rbp+130h+var_BC], 1
/*1409ee188*/ loc_1409EE188: mov ecx, 1
/*1409ee18d*/  mov rdx, r13
/*1409ee190*/  call sub_1416C2D4B
/*1409ee196*/ loc_1409EE196: ud2
