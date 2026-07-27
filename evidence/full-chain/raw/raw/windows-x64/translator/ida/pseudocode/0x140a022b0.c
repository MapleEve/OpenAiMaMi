// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
_WORD *__fastcall sub_140A022B0(_WORD *a1, __int64 a2, _QWORD *a3)
{
  const __m128i *v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  _BYTE *v26; // rdx
  __int64 v27; // rsi
  char *v28; // rcx
  __int64 v29; // r15
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _WORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; //... [90323 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 686/686 retrieved (all pages fetched: True)
// disasm instructions: 3255/3255 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x140a022b0-0x140a02311 size=97 type=0 succ=['0x140a02311', '0x140a0233a'] pred=[]
// BB 0x140a02311-0x140a02316 size=5 type=0 succ=['0x140a02316', '0x140a0233a'] pred=['0x140a022b0']
// BB 0x140a02316-0x140a0233a size=36 type=0 succ=['0x140a02357'] pred=['0x140a02311']
// BB 0x140a0233a-0x140a02357 size=29 type=0 succ=['0x140a02357'] pred=['0x140a022b0', '0x140a02311']
// BB 0x140a02357-0x140a02379 size=34 type=0 succ=['0x140a02379'] pred=['0x140a02316', '0x140a0233a']
// BB 0x140a02379-0x140a0239f size=38 type=0 succ=['0x140a0239f', '0x140a023c8'] pred=['0x140a02357']
// BB 0x140a0239f-0x140a023a4 size=5 type=0 succ=['0x140a023a4', '0x140a023c8'] pred=['0x140a02379']
// BB 0x140a023a4-0x140a023ad size=9 type=0 succ=['0x140a023ad', '0x140a023be'] pred=['0x140a0239f']
// BB 0x140a023ad-0x140a023b0 size=3 type=0 succ=['0x140a023b0'] pred=['0x140a023a4']
// BB 0x140a023b0-0x140a023b8 size=8 type=4 succ=[] pred=['0x140a023ad', '0x140a06365']
// BB 0x140a023b9-0x140a023be size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a023be-0x140a023c4 size=6 type=0 succ=['0x140a023c4', '0x140a06838'] pred=['0x140a023a4']
// BB 0x140a023c4-0x140a023c8 size=4 type=0 succ=['0x140a023c8'] pred=['0x140a023be']
// BB 0x140a023c8-0x140a023e9 size=33 type=0 succ=['0x140a023e9', '0x140a06365'] pred=['0x140a02379', '0x140a0239f', '0x140a023c4']
// BB 0x140a023e9-0x140a0240f size=38 type=0 succ=['0x140a0240f'] pred=['0x140a023c8']
// BB 0x140a0240f-0x140a0245c size=77 type=0 succ=['0x140a0245c'] pred=['0x140a023e9', '0x140a06838']
// BB 0x140a0245c-0x140a0247d size=33 type=0 succ=['0x140a0247d', '0x140a024f0'] pred=['0x140a0240f']
// BB 0x140a0247d-0x140a02482 size=5 type=0 succ=['0x140a02482', '0x140a024f0'] pred=['0x140a0245c']
// BB 0x140a02482-0x140a02489 size=7 type=0 succ=['0x140a02489', '0x140a024f0'] pred=['0x140a0247d']
// BB 0x140a02489-0x140a02492 size=9 type=0 succ=['0x140a02492', '0x140a024f0'] pred=['0x140a02482']
// BB 0x140a02492-0x140a024bb size=41 type=0 succ=['0x140a024bb', '0x140a025a4'] pred=['0x140a02489']
// BB 0x140a024bb-0x140a024c4 size=9 type=0 succ=['0x140a024c4', '0x140a025a4'] pred=['0x140a02492']
// BB 0x140a024c4-0x140a024d1 size=13 type=0 succ=['0x140a024d1', '0x140a02937'] pred=['0x140a024bb']
// BB 0x140a024d1-0x140a024d4 size=3 type=0 succ=['0x140a024d4'] pred=['0x140a024c4']
// BB 0x140a024d4-0x140a024ea size=22 type=4 succ=[] pred=['0x140a024d1', '0x140a0293d']
// BB 0x140a024eb-0x140a024f0 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a024f0-0x140a0250c size=28 type=0 succ=['0x140a0250c', '0x140a0518c'] pred=['0x140a0245c', '0x140a0247d', '0x140a02482', '0x140a02489']
// BB 0x140a0250c-0x140a02549 size=61 type=0 succ=['0x140a02549', '0x140a0518c'] pred=['0x140a024f0', '0x140a04e73']
// BB 0x140a02549-0x140a0257c size=51 type=0 succ=['0x140a0257c', '0x140a05185'] pred=['0x140a0250c']
// BB 0x140a0257c-0x140a02585 size=9 type=0 succ=['0x140a02585', '0x140a05185'] pred=['0x140a02549']
// BB 0x140a02585-0x140a02592 size=13 type=0 succ=['0x140a02592', '0x140a0297b'] pred=['0x140a0257c']
// BB 0x140a02592-0x140a0259b size=9 type=0 succ=['0x140a0259b', '0x140a05185'] pred=['0x140a02585']
// BB 0x140a0259b-0x140a025a4 size=9 type=0 succ=['0x140a02988'] pred=['0x140a02592']
// BB 0x140a025a4-0x140a025e1 size=61 type=0 succ=['0x140a025e1', '0x140a04e49'] pred=['0x140a02492', '0x140a024bb', '0x140a02962', '0x140a02ae7']
// BB 0x140a025e1-0x140a02625 size=68 type=0 succ=['0x140a02625', '0x140a02852'] pred=['0x140a025a4']
// BB 0x140a02625-0x140a0263c size=23 type=0 succ=['0x140a0263c', '0x140a03240'] pred=['0x140a025e1', '0x140a02921']
// BB 0x140a0263c-0x140a0267d size=65 type=0 succ=['0x140a0267d', '0x140a064d2'] pred=['0x140a02625']
// BB 0x140a0267d-0x140a026c4 size=71 type=0 succ=['0x140a026c4', '0x140a064e7'] pred=['0x140a0263c']
// BB 0x140a026c4-0x140a02700 size=60 type=0 succ=['0x140a02700'] pred=['0x140a0267d']
// BB 0x140a02700-0x140a0272e size=46 type=0 succ=['0x140a0272e', '0x140a0273b'] pred=['0x140a026c4']
// BB 0x140a0272e-0x140a0273b size=13 type=0 succ=['0x140a0273b'] pred=['0x140a02700']
// BB 0x140a0273b-0x140a02758 size=29 type=0 succ=['0x140a02758', '0x140a064fc'] pred=['0x140a02700', '0x140a0272e']
// BB 0x140a02758-0x140a02781 size=41 type=0 succ=['0x140a02781'] pred=['0x140a0273b']
// BB 0x140a02781-0x140a027df size=94 type=0 succ=['0x140a027df'] pred=['0x140a02758']
// BB 0x140a027df-0x140a027fb size=28 type=0 succ=['0x140a027fb', '0x140a06100'] pred=['0x140a02781']
// BB 0x140a027fb-0x140a02828 size=45 type=0 succ=['0x140a02828', '0x140a029f1'] pred=['0x140a027df']
// BB 0x140a02828-0x140a02832 size=10 type=0 succ=['0x140a02832', '0x140a029f7'] pred=['0x140a027fb']
// BB 0x140a02832-0x140a0284c size=26 type=4 succ=[] pred=['0x140a02828', '0x140a029f1']
// BB 0x140a0284d-0x140a02852 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a02852-0x140a02867 size=21 type=0 succ=['0x140a02867'] pred=['0x140a025e1']
// BB 0x140a02867-0x140a0288c size=37 type=0 succ=['0x140a0288c', '0x140a036a9'] pred=['0x140a02852']
// BB 0x140a0288c-0x140a02895 size=9 type=0 succ=['0x140a02895', '0x140a036a9'] pred=['0x140a02867']
// BB 0x140a02895-0x140a028bf size=42 type=0 succ=['0x140a028bf'] pred=['0x140a0288c']
// BB 0x140a028bf-0x140a028d0 size=17 type=0 succ=['0x140a028d0', '0x140a036a2'] pred=['0x140a02895']
// BB 0x140a028d0-0x140a028ec size=28 type=0 succ=['0x140a028ec', '0x140a03675'] pred=['0x140a028bf']
// BB 0x140a028ec-0x140a02916 size=42 type=0 succ=['0x140a02916', '0x140a02921'] pred=['0x140a028d0']
// BB 0x140a02916-0x140a02921 size=11 type=0 succ=['0x140a02921'] pred=['0x140a028ec']
// BB 0x140a02921-0x140a02932 size=17 type=0 succ=['0x140a02625', '0x140a02932'] pred=['0x140a028ec', '0x140a02916']
// BB 0x140a02932-0x140a02937 size=5 type=0 succ=['0x140a036a9'] pred=['0x140a02921']
// BB 0x140a02937-0x140a0293d size=6 type=0 succ=['0x140a0293d', '0x140a02ae7'] pred=['0x140a024c4']
// BB 0x140a0293d-0x140a02962 size=37 type=0 succ=['0x140a024d4', '0x140a02962'] pred=['0x140a02937']
// BB 0x140a02962-0x140a0297b size=25 type=0 succ=['0x140a025a4'] pred=['0x140a0293d']
// BB 0x140a0297b-0x140a02988 size=13 type=0 succ=['0x140a02988', '0x140a05185'] pred=['0x140a02585']
// BB 0x140a02988-0x140a02995 size=13 type=0 succ=['0x140a02995', '0x140a05185'] pred=['0x140a0259b', '0x140a0297b']
// BB 0x140a02995-0x140a029aa size=21 type=0 succ=['0x140a029aa'] pred=['0x140a02988']
// BB 0x140a029aa-0x140a029d4 size=42 type=0 succ=['0x140a029d4', '0x140a02af3'] pred=['0x140a02995']
// BB 0x140a029d4-0x140a029e4 size=16 type=0 succ=['0x140a029e4', '0x140a02afa'] pred=['0x140a029aa']
// BB 0x140a029e4-0x140a029f1 size=13 type=0 succ=['0x140a02afa'] pred=['0x140a029d4']
// BB 0x140a029f1-0x140a029f7 size=6 type=0 succ=['0x140a02832', '0x140a029f7'] pred=['0x140a027fb']
// BB 0x140a029f7-0x140a02a25 size=46 type=0 succ=['0x140a02a25'] pred=['0x140a02828', '0x140a029f1']
// BB 0x140a02a25-0x140a02a4c size=39 type=0 succ=['0x140a02a4c', '0x140a02a5e'] pred=['0x140a029f7']
// BB 0x140a02a4c-0x140a02a5e size=18 type=0 succ=['0x140a02a5e'] pred=['0x140a02a25']
// BB 0x140a02a5e-0x140a02a86 size=40 type=0 succ=['0x140a02a86', '0x140a02aa1'] pred=['0x140a02a25', '0x140a02a4c']
// BB 0x140a02a86-0x140a02a89 size=3 type=0 succ=['0x140a02a89'] pred=['0x140a02a5e']
// BB 0x140a02a89-0x140a02a90 size=7 type=0 succ=['0x140a02a90'] pred=['0x140a02a86', '0x140a02aaa']
// BB 0x140a02a90-0x140a02a9b size=11 type=4 succ=[] pred=['0x140a02a89']
// BB 0x140a02a9c-0x140a02aa1 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a02aa1-0x140a02aaa size=9 type=0 succ=['0x140a02aaa', '0x140a02d89'] pred=['0x140a02a5e']
// BB 0x140a02aaa-0x140a02aca size=32 type=0 succ=['0x140a02a89', '0x140a02aca'] pred=['0x140a02aa1']
// BB 0x140a02aca-0x140a02ae7 size=29 type=0 succ=['0x140a02d8f'] pred=['0x140a02aaa']
// BB 0x140a02ae7-0x140a02af3 size=12 type=0 succ=['0x140a025a4'] pred=['0x140a02937']
// BB 0x140a02af3-0x140a02afa size=7 type=0 succ=['0x140a02afa'] pred=['0x140a029aa']
// BB 0x140a02afa-0x140a02b52 size=88 type=0 succ=['0x140a02b52'] pred=['0x140a029d4', '0x140a029e4', '0x140a02af3']
// BB 0x140a02b52-0x140a02bc3 size=113 type=0 succ=['0x140a02bc3', '0x140a06511'] pred=['0x140a02afa']
// BB 0x140a02bc3-0x140a02c0a size=71 type=0 succ=['0x140a02c0a', '0x140a06526'] pred=['0x140a02b52']
// BB 0x140a02c0a-0x140a02c3b size=49 type=0 succ=['0x140a02c3b'] pred=['0x140a02bc3']
// BB 0x140a02c3b-0x140a02c66 size=43 type=0 succ=['0x140a02c66', '0x140a02c73'] pred=['0x140a02c0a']
// BB 0x140a02c66-0x140a02c73 size=13 type=0 succ=['0x140a02c73'] pred=['0x140a02c3b']
// BB 0x140a02c73-0x140a02c90 size=29 type=0 succ=['0x140a02c90', '0x140a0653b'] pred=['0x140a02c3b', '0x140a02c66']
// BB 0x140a02c90-0x140a02cb9 size=41 type=0 succ=['0x140a02cb9'] pred=['0x140a02c73']
// BB 0x140a02cb9-0x140a02d35 size=124 type=0 succ=['0x140a02d35', '0x140a02d50'] pred=['0x140a02c90']
// BB 0x140a02d35-0x140a02d38 size=3 type=0 succ=['0x140a02d38'] pred=['0x140a02cb9']
// BB 0x140a02d38-0x140a02d3f size=7 type=0 succ=['0x140a02d3f'] pred=['0x140a02d35', '0x140a02d56']
// BB 0x140a02d3f-0x140a02d4a size=11 type=4 succ=[] pred=['0x140a02d38']
// BB 0x140a02d4b-0x140a02d50 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a02d50-0x140a02d56 size=6 type=0 succ=['0x140a02d56', '0x140a03259'] pred=['0x140a02cb9']
// BB 0x140a02d56-0x140a02d73 size=29 type=0 succ=['0x140a02d38', '0x140a02d73'] pred=['0x140a02d50']
// BB 0x140a02d73-0x140a02d89 size=22 type=0 succ=['0x140a0325f'] pred=['0x140a02d56']
// BB 0x140a02d89-0x140a02d8f size=6 type=0 succ=['0x140a02d8f'] pred=['0x140a02aa1']
// BB 0x140a02d8f-0x140a02db2 size=35 type=0 succ=['0x140a02db2'] pred=['0x140a02aca', '0x140a02d89']
// BB 0x140a02db2-0x140a02de0 size=46 type=0 succ=['0x140a02de0', '0x140a02ded'] pred=['0x140a02d8f']
// BB 0x140a02de0-0x140a02ded size=13 type=0 succ=['0x140a02ded'] pred=['0x140a02db2']
// BB 0x140a02ded-0x140a02df9 size=12 type=0 succ=['0x140a02df9', '0x140a02e0b'] pred=['0x140a02db2', '0x140a02de0']
// BB 0x140a02df9-0x140a02e0b size=18 type=0 succ=['0x140a02e0b'] pred=['0x140a02ded']
// BB 0x140a02e0b-0x140a02e28 size=29 type=0 succ=['0x140a02e28', '0x140a06550'] pred=['0x140a02ded', '0x140a02df9']
// BB 0x140a02e28-0x140a02e75 size=77 type=0 succ=['0x140a02e75', '0x140a06565'] pred=['0x140a02e0b']
// BB 0x140a02e75-0x140a02eaa size=53 type=0 succ=['0x140a02eaa'] pred=['0x140a02e28']
// BB 0x140a02eaa-0x140a02ed5 size=43 type=0 succ=['0x140a02ed5', '0x140a02ee2'] pred=['0x140a02e75']
// BB 0x140a02ed5-0x140a02ee2 size=13 type=0 succ=['0x140a02ee2'] pred=['0x140a02eaa']
// BB 0x140a02ee2-0x140a02eff size=29 type=0 succ=['0x140a02eff', '0x140a0657a'] pred=['0x140a02eaa', '0x140a02ed5']
// BB 0x140a02eff-0x140a02f46 size=71 type=0 succ=['0x140a02f46', '0x140a06131'] pred=['0x140a02ee2']
// BB 0x140a02f46-0x140a02f83 size=61 type=0 succ=['0x140a02f83', '0x140a0658f'] pred=['0x140a02eff']
// BB 0x140a02f83-0x140a02fca size=71 type=0 succ=['0x140a02fca', '0x140a065a4'] pred=['0x140a02f46']
// BB 0x140a02fca-0x140a03002 size=56 type=0 succ=['0x140a03002'] pred=['0x140a02f83']
// BB 0x140a03002-0x140a0302d size=43 type=0 succ=['0x140a0302d', '0x140a0303a'] pred=['0x140a02fca']
// BB 0x140a0302d-0x140a0303a size=13 type=0 succ=['0x140a0303a'] pred=['0x140a03002']
// BB 0x140a0303a-0x140a03057 size=29 type=0 succ=['0x140a03057', '0x140a065b9'] pred=['0x140a03002', '0x140a0302d']
// BB 0x140a03057-0x140a030a3 size=76 type=0 succ=['0x140a030a3', '0x140a065ce'] pred=['0x140a0303a']
// BB 0x140a030a3-0x140a030d4 size=49 type=0 succ=['0x140a030d4'] pred=['0x140a03057']
// BB 0x140a030d4-0x140a030ff size=43 type=0 succ=['0x140a030ff', '0x140a0310c'] pred=['0x140a030a3']
// BB 0x140a030ff-0x140a0310c size=13 type=0 succ=['0x140a0310c'] pred=['0x140a030d4']
// BB 0x140a0310c-0x140a03180 size=116 type=0 succ=['0x140a03180'] pred=['0x140a030d4', '0x140a030ff']
// BB 0x140a03180-0x140a031ab size=43 type=0 succ=['0x140a031ab', '0x140a031b8'] pred=['0x140a0310c']
// BB 0x140a031ab-0x140a031b8 size=13 type=0 succ=['0x140a031b8'] pred=['0x140a03180']
// BB 0x140a031b8-0x140a031ed size=53 type=0 succ=['0x140a031ed', '0x140a031fa'] pred=['0x140a03180', '0x140a031ab']
// BB 0x140a031ed-0x140a031fa size=13 type=0 succ=['0x140a031fa'] pred=['0x140a031b8']
// BB 0x140a031fa-0x140a03240 size=70 type=0 succ=['0x140a03240'] pred=['0x140a031b8', '0x140a031ed']
// BB 0x140a03240-0x140a03249 size=9 type=0 succ=['0x140a03249', '0x140a036a9'] pred=['0x140a02625', '0x140a031fa']
// BB 0x140a03249-0x140a03259 size=16 type=0 succ=['0x140a036a9'] pred=['0x140a03240']
// BB 0x140a03259-0x140a0325f size=6 type=0 succ=['0x140a0325f'] pred=['0x140a02d50']
// BB 0x140a0325f-0x140a03282 size=35 type=0 succ=['0x140a03282'] pred=['0x140a02d73', '0x140a03259']
// BB 0x140a03282-0x140a032ad size=43 type=0 succ=['0x140a032ad', '0x140a032ba'] pred=['0x140a0325f']
// BB 0x140a032ad-0x140a032ba size=13 type=0 succ=['0x140a032ba'] pred=['0x140a03282']
// BB 0x140a032ba-0x140a032c6 size=12 type=0 succ=['0x140a032c6', '0x140a032d8'] pred=['0x140a03282', '0x140a032ad']
// BB 0x140a032c6-0x140a032d8 size=18 type=0 succ=['0x140a032d8'] pred=['0x140a032ba']
// BB 0x140a032d8-0x140a032f5 size=29 type=0 succ=['0x140a032f5', '0x140a0669c'] pred=['0x140a032ba', '0x140a032c6']
// BB 0x140a032f5-0x140a0333c size=71 type=0 succ=['0x140a0333c', '0x140a066b1'] pred=['0x140a032d8']
// BB 0x140a0333c-0x140a03371 size=53 type=0 succ=['0x140a03371'] pred=['0x140a032f5']
// BB 0x140a03371-0x140a0339c size=43 type=0 succ=['0x140a0339c', '0x140a033a9'] pred=['0x140a0333c']
// BB 0x140a0339c-0x140a033a9 size=13 type=0 succ=['0x140a033a9'] pred=['0x140a03371']
// BB 0x140a033a9-0x140a033c6 size=29 type=0 succ=['0x140a033c6', '0x140a066c6'] pred=['0x140a03371', '0x140a0339c']
// BB 0x140a033c6-0x140a03413 size=77 type=0 succ=['0x140a03413', '0x140a066db'] pred=['0x140a033a9']
// BB 0x140a03413-0x140a03448 size=53 type=0 succ=['0x140a03448'] pred=['0x140a033c6']
// BB 0x140a03448-0x140a03473 size=43 type=0 succ=['0x140a03473', '0x140a03480'] pred=['0x140a03413']
// BB 0x140a03473-0x140a03480 size=13 type=0 succ=['0x140a03480'] pred=['0x140a03448']
// BB 0x140a03480-0x140a0349d size=29 type=0 succ=['0x140a0349d', '0x140a066f0'] pred=['0x140a03448', '0x140a03473']
// BB 0x140a0349d-0x140a034e4 size=71 type=0 succ=['0x140a034e4', '0x140a06169'] pred=['0x140a03480']
// BB 0x140a034e4-0x140a03521 size=61 type=0 succ=['0x140a03521', '0x140a06705'] pred=['0x140a0349d']
// BB 0x140a03521-0x140a03568 size=71 type=0 succ=['0x140a03568', '0x140a0671a'] pred=['0x140a034e4']
// BB 0x140a03568-0x140a035a0 size=56 type=0 succ=['0x140a035a0'] pred=['0x140a03521']
// BB 0x140a035a0-0x140a035cb size=43 type=0 succ=['0x140a035cb', '0x140a035d8'] pred=['0x140a03568']
// BB 0x140a035cb-0x140a035d8 size=13 type=0 succ=['0x140a035d8'] pred=['0x140a035a0']
// BB 0x140a035d8-0x140a035f5 size=29 type=0 succ=['0x140a035f5', '0x140a0672f'] pred=['0x140a035a0', '0x140a035cb']
// BB 0x140a035f5-0x140a0361d size=40 type=0 succ=['0x140a0361d', '0x140a03638'] pred=['0x140a035d8']
// BB 0x140a0361d-0x140a03620 size=3 type=0 succ=['0x140a03620'] pred=['0x140a035f5']
// BB 0x140a03620-0x140a03627 size=7 type=0 succ=['0x140a03627'] pred=['0x140a0361d', '0x140a0363e']
// BB 0x140a03627-0x140a03632 size=11 type=4 succ=[] pred=['0x140a03620']
// BB 0x140a03633-0x140a03638 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a03638-0x140a0363e size=6 type=0 succ=['0x140a0363e', '0x140a04ef0'] pred=['0x140a035f5']
// BB 0x140a0363e-0x140a0365b size=29 type=0 succ=['0x140a03620', '0x140a0365b'] pred=['0x140a03638']
// BB 0x140a0365b-0x140a03675 size=26 type=0 succ=['0x140a04ef6'] pred=['0x140a0363e']
// BB 0x140a03675-0x140a03681 size=12 type=0 succ=['0x140a03681', '0x140a0368c'] pred=['0x140a028d0']
// BB 0x140a03681-0x140a0368c size=11 type=0 succ=['0x140a0368c'] pred=['0x140a03675']
// BB 0x140a0368c-0x140a03691 size=5 type=0 succ=['0x140a03691', '0x140a036a2'] pred=['0x140a03675', '0x140a03681']
// BB 0x140a03691-0x140a036a2 size=17 type=0 succ=['0x140a036a2'] pred=['0x140a0368c']
// BB 0x140a036a2-0x140a036a9 size=7 type=0 succ=['0x140a036a9'] pred=['0x140a028bf', '0x140a0368c', '0x140a03691']
// BB 0x140a036a9-0x140a036be size=21 type=0 succ=['0x140a036be'] pred=['0x140a02867', '0x140a0288c', '0x140a02932', '0x140a03240', '0x140a03249', '0x140a036a2']
// BB 0x140a036be-0x140a036e3 size=37 type=0 succ=['0x140a036e3', '0x140a03ffb'] pred=['0x140a036a9']
// BB 0x140a036e3-0x140a036ec size=9 type=0 succ=['0x140a036ec', '0x140a03ffb'] pred=['0x140a036be']
// BB 0x140a036ec-0x140a03719 size=45 type=0 succ=['0x140a03719'] pred=['0x140a036e3']
// BB 0x140a03719-0x140a03723 size=10 type=0 succ=['0x140a03723', '0x140a0375e'] pred=['0x140a036ec']
// BB 0x140a03723-0x140a0372c size=9 type=0 succ=['0x140a0372c', '0x140a0373b'] pred=['0x140a03719']
// BB 0x140a0372c-0x140a0373b size=15 type=0 succ=['0x140a0373b'] pred=['0x140a03723']
// BB 0x140a0373b-0x140a0375e size=35 type=0 succ=['0x140a037e5'] pred=['0x140a03723', '0x140a0372c']
// BB 0x140a0375e-0x140a037a1 size=67 type=0 succ=['0x140a037a1', '0x140a062ff'] pred=['0x140a03719']
// BB 0x140a037a1-0x140a037b4 size=19 type=0 succ=['0x140a037b4', '0x140a037c2'] pred=['0x140a0375e']
// BB 0x140a037b4-0x140a037c2 size=14 type=0 succ=['0x140a037c2'] pred=['0x140a037a1']
// BB 0x140a037c2-0x140a037e5 size=35 type=0 succ=['0x140a037e5'] pred=['0x140a037a1', '0x140a037b4']
// BB 0x140a037e5-0x140a037ee size=9 type=0 succ=['0x140a037ee', '0x140a03fdd'] pred=['0x140a0373b', '0x140a037c2']
// BB 0x140a037ee-0x140a03821 size=51 type=0 succ=['0x140a03821', '0x140a065f4'] pred=['0x140a037e5']
// BB 0x140a03821-0x140a0384b size=42 type=0 succ=['0x140a0384b'] pred=['0x140a037ee']
// BB 0x140a0384b-0x140a0386c size=33 type=0 succ=['0x140a0386c', '0x140a06185'] pred=['0x140a03821']
// BB 0x140a0386c-0x140a038bf size=83 type=0 succ=['0x140a038bf', '0x140a038cc'] pred=['0x140a0384b']
// BB 0x140a038bf-0x140a038cc size=13 type=0 succ=['0x140a038cc'] pred=['0x140a0386c']
// BB 0x140a038cc-0x140a038e9 size=29 type=0 succ=['0x140a038e9', '0x140a06609'] pred=['0x140a0386c', '0x140a038bf']
// BB 0x140a038e9-0x140a03912 size=41 type=0 succ=['0x140a03912'] pred=['0x140a038cc']
// BB 0x140a03912-0x140a03984 size=114 type=0 succ=['0x140a03984'] pred=['0x140a038e9']
// BB 0x140a03984-0x140a039a5 size=33 type=0 succ=['0x140a039a5', '0x140a061c4'] pred=['0x140a03912']
// BB 0x140a039a5-0x140a039f5 size=80 type=0 succ=['0x140a039f5', '0x140a03a02'] pred=['0x140a03984']
// BB 0x140a039f5-0x140a03a02 size=13 type=0 succ=['0x140a03a02'] pred=['0x140a039a5']
// BB 0x140a03a02-0x140a03a0e size=12 type=0 succ=['0x140a03a0e', '0x140a03a20'] pred=['0x140a039a5', '0x140a039f5']
// BB 0x140a03a0e-0x140a03a20 size=18 type=0 succ=['0x140a03a20'] pred=['0x140a03a02']
// BB 0x140a03a20-0x140a03a3d size=29 type=0 succ=['0x140a03a3d', '0x140a0661e'] pred=['0x140a03a02', '0x140a03a0e']
// BB 0x140a03a3d-0x140a03a67 size=42 type=0 succ=['0x140a03a67'] pred=['0x140a03a20']
// BB 0x140a03a67-0x140a03a88 size=33 type=0 succ=['0x140a03a88', '0x140a06203'] pred=['0x140a03a3d']
// BB 0x140a03a88-0x140a03ad8 size=80 type=0 succ=['0x140a03ad8', '0x140a03ae5'] pred=['0x140a03a67']
// BB 0x140a03ad8-0x140a03ae5 size=13 type=0 succ=['0x140a03ae5'] pred=['0x140a03a88']
// BB 0x140a03ae5-0x140a03b02 size=29 type=0 succ=['0x140a03b02', '0x140a06633'] pred=['0x140a03a88', '0x140a03ad8']
// BB 0x140a03b02-0x140a03b32 size=48 type=0 succ=['0x140a03b32'] pred=['0x140a03ae5']
// BB 0x140a03b32-0x140a03b53 size=33 type=0 succ=['0x140a03b53', '0x140a06242'] pred=['0x140a03b02']
// BB 0x140a03b53-0x140a03ba3 size=80 type=0 succ=['0x140a03ba3', '0x140a03bb0'] pred=['0x140a03b32']
// BB 0x140a03ba3-0x140a03bb0 size=13 type=0 succ=['0x140a03bb0'] pred=['0x140a03b53']
// BB 0x140a03bb0-0x140a03bcd size=29 type=0 succ=['0x140a03bcd', '0x140a06648'] pred=['0x140a03b53', '0x140a03ba3']
// BB 0x140a03bcd-0x140a03c14 size=71 type=0 succ=['0x140a03c14', '0x140a0614d'] pred=['0x140a03bb0']
// BB 0x140a03c14-0x140a03c4e size=58 type=0 succ=['0x140a03c4e', '0x140a0665d'] pred=['0x140a03bcd']
// BB 0x140a03c4e-0x140a03c78 size=42 type=0 succ=['0x140a03c78'] pred=['0x140a03c14']
// BB 0x140a03c78-0x140a03c99 size=33 type=0 succ=['0x140a03c99', '0x140a06281'] pred=['0x140a03c4e']
// BB 0x140a03c99-0x140a03ce9 size=80 type=0 succ=['0x140a03ce9', '0x140a03cf6'] pred=['0x140a03c78']
// BB 0x140a03ce9-0x140a03cf6 size=13 type=0 succ=['0x140a03cf6'] pred=['0x140a03c99']
// BB 0x140a03cf6-0x140a03d13 size=29 type=0 succ=['0x140a03d13', '0x140a06672'] pred=['0x140a03c99', '0x140a03ce9']
// BB 0x140a03d13-0x140a03d3d size=42 type=0 succ=['0x140a03d3d'] pred=['0x140a03cf6']
// BB 0x140a03d3d-0x140a03d5e size=33 type=0 succ=['0x140a03d5e', '0x140a062c0'] pred=['0x140a03d13']
// BB 0x140a03d5e-0x140a03dae size=80 type=0 succ=['0x140a03dae', '0x140a03dbb'] pred=['0x140a03d3d']
// BB 0x140a03dae-0x140a03dbb size=13 type=0 succ=['0x140a03dbb'] pred=['0x140a03d5e']
// BB 0x140a03dbb-0x140a03dd8 size=29 type=0 succ=['0x140a03dd8', '0x140a06687'] pred=['0x140a03d5e', '0x140a03dae']
// BB 0x140a03dd8-0x140a03e5c size=132 type=0 succ=['0x140a03e5c', '0x140a03e69'] pred=['0x140a03dbb']
// BB 0x140a03e5c-0x140a03e69 size=13 type=0 succ=['0x140a03e69'] pred=['0x140a03dd8']
// BB 0x140a03e69-0x140a03edd size=116 type=0 succ=['0x140a03edd'] pred=['0x140a03dd8', '0x140a03e5c']
// BB 0x140a03edd-0x140a03f08 size=43 type=0 succ=['0x140a03f08', '0x140a03f15'] pred=['0x140a03e69']
// BB 0x140a03f08-0x140a03f15 size=13 type=0 succ=['0x140a03f15'] pred=['0x140a03edd']
// BB 0x140a03f15-0x140a03f4a size=53 type=0 succ=['0x140a03f4a', '0x140a03f57'] pred=['0x140a03edd', '0x140a03f08']
// BB 0x140a03f4a-0x140a03f57 size=13 type=0 succ=['0x140a03f57'] pred=['0x140a03f15']
// BB 0x140a03f57-0x140a03f8f size=56 type=0 succ=['0x140a03f8f'] pred=['0x140a03f15', '0x140a03f4a']
// BB 0x140a03f8f-0x140a03fb0 size=33 type=0 succ=['0x140a03fb0'] pred=['0x140a03f57']
// BB 0x140a03fb0-0x140a03fdd size=45 type=0 succ=['0x140a03fdd'] pred=['0x140a03f8f']
// BB 0x140a03fdd-0x140a03fe9 size=12 type=0 succ=['0x140a03fe9', '0x140a03ffb'] pred=['0x140a037e5', '0x140a03fb0']
// BB 0x140a03fe9-0x140a03ffb size=18 type=0 succ=['0x140a03ffb'] pred=['0x140a03fdd']
// BB 0x140a03ffb-0x140a04010 size=21 type=0 succ=['0x140a04010'] pred=['0x140a036be', '0x140a036e3', '0x140a03fdd', '0x140a03fe9']
// BB 0x140a04010-0x140a0402e size=30 type=0 succ=['0x140a0402e', '0x140a04e49'] pred=['0x140a03ffb']
// BB 0x140a0402e-0x140a0403e size=16 type=0 succ=['0x140a0403e', '0x140a04e50'] pred=['0x140a04010']
// BB 0x140a0403e-0x140a0407d size=63 type=0 succ=['0x140a0407d'] pred=['0x140a0402e']
// BB 0x140a0407d-0x140a04086 size=9 type=0 succ=['0x140a04086', '0x140a04e50'] pred=['0x140a0403e', '0x140a04dab', '0x140a04dcf']
// BB 0x140a04086-0x140a040b0 size=42 type=0 succ=['0x140a040b0'] pred=['0x140a0407d']
// BB 0x140a040b0-0x140a040ba size=10 type=0 succ=['0x140a040ba', '0x140a040ec'] pred=['0x140a04086']
// BB 0x140a040ba-0x140a040cd size=19 type=0 succ=['0x140a040cd', '0x140a040f3'] pred=['0x140a040b0']
// BB 0x140a040cd-0x140a040da size=13 type=0 succ=['0x140a040da', '0x140a04e78'] pred=['0x140a040ba']
// BB 0x140a040da-0x140a040e3 size=9 type=0 succ=['0x140a040e3', '0x140a04de6'] pred=['0x140a040cd']
// BB 0x140a040e3-0x140a040ec size=9 type=0 succ=['0x140a040f3'] pred=['0x140a040da']
// BB 0x140a040ec-0x140a040f3 size=7 type=0 succ=['0x140a040f3'] pred=['0x140a040b0']
// BB 0x140a040f3-0x140a04117 size=36 type=0 succ=['0x140a04117', '0x140a065e1'] pred=['0x140a040ba', '0x140a040e3', '0x140a040ec']
// BB 0x140a04117-0x140a04135 size=30 type=0 succ=['0x140a04135'] pred=['0x140a040f3']
// BB 0x140a04135-0x140a04159 size=36 type=0 succ=['0x140a04159', '0x140a04188'] pred=['0x140a04117', '0x140a04de6']
// BB 0x140a04159-0x140a0416c size=19 type=1 succ=['0x140a0416c', '0x140a041e4', '0x140a04202', '0x140a0420b', '0x140a04228'] pred=['0x140a04135']
// BB 0x140a0416c-0x140a04188 size=28 type=0 succ=['0x140a0426c'] pred=['0x140a04159']
// BB 0x140a04188-0x140a041e4 size=92 type=0 succ=['0x140a042d0'] pred=['0x140a04135']
// BB 0x140a041e4-0x140a041e8 size=4 type=0 succ=['0x140a041e8'] pred=['0x140a04159']
// BB 0x140a041ea-0x140a041f1 size=7 type=0 succ=['0x140a041f1'] pred=[]
// BB 0x140a041f3-0x140a04202 size=15 type=0 succ=['0x140a0426c'] pred=[]
// BB 0x140a04202-0x140a0420b size=9 type=0 succ=['0x140a0426c'] pred=['0x140a04159']
// BB 0x140a0420b-0x140a0420f size=4 type=0 succ=['0x140a0420f'] pred=['0x140a04159']
// BB 0x140a04210-0x140a04228 size=24 type=0 succ=['0x140a0426c'] pred=[]
// BB 0x140a04228-0x140a0422f size=7 type=0 succ=['0x140a0422f', '0x140a0424f'] pred=['0x140a04159']
// BB 0x140a0422f-0x140a0423c size=13 type=0 succ=['0x140a0423c', '0x140a063c1'] pred=['0x140a04228']
// BB 0x140a0423c-0x140a0424f size=19 type=0 succ=['0x140a04265'] pred=['0x140a0422f']
// BB 0x140a0424f-0x140a04265 size=22 type=0 succ=['0x140a04265'] pred=['0x140a04228']
// BB 0x140a04265-0x140a0426c size=7 type=0 succ=['0x140a0426c'] pred=['0x140a0423c', '0x140a0424f']
// BB 0x140a0426c-0x140a042d0 size=100 type=0 succ=['0x140a042d0'] pred=['0x140a0416c', '0x140a041f3', '0x140a04202', '0x140a04210', '0x140a04265']
// BB 0x140a042d0-0x140a042e9 size=25 type=0 succ=['0x140a042e9'] pred=['0x140a04188', '0x140a0426c']
// BB 0x140a042e9-0x140a042f3 size=10 type=0 succ=['0x140a042f3', '0x140a04318'] pred=['0x140a042d0']
// BB 0x140a042f3-0x140a042ff size=12 type=0 succ=['0x140a042ff', '0x140a0431f'] pred=['0x140a042e9']
// BB 0x140a042ff-0x140a0430c size=13 type=0 succ=['0x140a0430c', '0x140a04ea5'] pred=['0x140a042f3']
// BB 0x140a0430c-0x140a04312 size=6 type=0 succ=['0x140a04312', '0x140a04e05'] pred=['0x140a042ff']
// BB 0x140a04312-0x140a04318 size=6 type=0 succ=['0x140a0431f'] pred=['0x140a0430c']
// BB 0x140a04318-0x140a0431f size=7 type=0 succ=['0x140a0431f'] pred=['0x140a042e9']
// BB 0x140a0431f-0x140a04340 size=33 type=0 succ=['0x140a04340', '0x140a06744'] pred=['0x140a042f3', '0x140a04312', '0x140a04318']
// BB 0x140a04340-0x140a0435b size=27 type=0 succ=['0x140a0435b'] pred=['0x140a0431f']
// BB 0x140a0435b-0x140a04375 size=26 type=0 succ=['0x140a04375'] pred=['0x140a04340', '0x140a04e05']
// BB 0x140a04375-0x140a0438e size=25 type=0 succ=['0x140a0438e'] pred=['0x140a0435b']
// BB 0x140a0438e-0x140a04398 size=10 type=0 succ=['0x140a04398', '0x140a043bd'] pred=['0x140a04375']
// BB 0x140a04398-0x140a043a4 size=12 type=0 succ=['0x140a043a4', '0x140a043c4'] pred=['0x140a0438e']
// BB 0x140a043a4-0x140a043b1 size=13 type=0 succ=['0x140a043b1', '0x140a04ed8'] pred=['0x140a04398']
// BB 0x140a043b1-0x140a043b7 size=6 type=0 succ=['0x140a043b7', '0x140a04e1a'] pred=['0x140a043a4']
// BB 0x140a043b7-0x140a043bd size=6 type=0 succ=['0x140a043c4'] pred=['0x140a043b1']
// BB 0x140a043bd-0x140a043c4 size=7 type=0 succ=['0x140a043c4'] pred=['0x140a0438e']
// BB 0x140a043c4-0x140a043e5 size=33 type=0 succ=['0x140a043e5', '0x140a0677a'] pred=['0x140a04398', '0x140a043b7', '0x140a043bd']
// BB 0x140a043e5-0x140a04412 size=45 type=0 succ=['0x140a04412', '0x140a04443'] pred=['0x140a043c4']
// BB 0x140a04412-0x140a04443 size=49 type=0 succ=['0x140a04443', '0x140a04645'] pred=['0x140a043e5', '0x140a04e1a']
// BB 0x140a04443-0x140a0445a size=23 type=0 succ=['0x140a0445a'] pred=['0x140a043e5', '0x140a04412', '0x140a04e44']
// BB 0x140a0445a-0x140a0448d size=51 type=0 succ=['0x140a0448d', '0x140a06786'] pred=['0x140a04443', '0x140a04645']
// BB 0x140a0448d-0x140a044d4 size=71 type=0 succ=['0x140a044d4', '0x140a06765'] pred=['0x140a0445a']
// BB 0x140a044d4-0x140a04516 size=66 type=0 succ=['0x140a04516'] pred=['0x140a0448d']
// BB 0x140a04516-0x140a0453d size=39 type=0 succ=['0x140a0453d', '0x140a0454a'] pred=['0x140a044d4']
// BB 0x140a0453d-0x140a0454a size=13 type=0 succ=['0x140a0454a'] pred=['0x140a04516']
// BB 0x140a0454a-0x140a04567 size=29 type=0 succ=['0x140a04567', '0x140a06750'] pred=['0x140a04516', '0x140a0453d']
// BB 0x140a04567-0x140a04590 size=41 type=0 succ=['0x140a04590'] pred=['0x140a0454a']
// BB 0x140a04590-0x140a045d4 size=68 type=0 succ=['0x140a045d4'] pred=['0x140a04567']
// BB 0x140a045d4-0x140a04604 size=48 type=0 succ=['0x140a04604', '0x140a04ebd'] pred=['0x140a04590']
// BB 0x140a04604-0x140a0460d size=9 type=0 succ=['0x140a0460d', '0x140a04670'] pred=['0x140a045d4']
// BB 0x140a0460d-0x140a0462e size=33 type=0 succ=['0x140a0462e', '0x140a04ec0'] pred=['0x140a04604']
// BB 0x140a0462e-0x140a04645 size=23 type=0 succ=['0x140a04676'] pred=['0x140a0460d']
// BB 0x140a04645-0x140a04670 size=43 type=0 succ=['0x140a0445a'] pred=['0x140a04412']
// BB 0x140a04670-0x140a04676 size=6 type=0 succ=['0x140a04676'] pred=['0x140a04604']
// BB 0x140a04676-0x140a04699 size=35 type=0 succ=['0x140a04699'] pred=['0x140a0462e', '0x140a04670']
// BB 0x140a04699-0x140a046c4 size=43 type=0 succ=['0x140a046c4', '0x140a046d1'] pred=['0x140a04676']
// BB 0x140a046c4-0x140a046d1 size=13 type=0 succ=['0x140a046d1'] pred=['0x140a04699']
// BB 0x140a046d1-0x140a046dd size=12 type=0 succ=['0x140a046dd', '0x140a046ef'] pred=['0x140a04699', '0x140a046c4']
// BB 0x140a046dd-0x140a046ef size=18 type=0 succ=['0x140a046ef'] pred=['0x140a046d1']
// BB 0x140a046ef-0x140a04713 size=36 type=0 succ=['0x140a04713', '0x140a067d4'] pred=['0x140a046d1', '0x140a046dd']
// BB 0x140a04713-0x140a04748 size=53 type=0 succ=['0x140a04748', '0x140a04778'] pred=['0x140a046ef']
// BB 0x140a04748-0x140a04763 size=27 type=0 succ=['0x140a04763', '0x140a067e6'] pred=['0x140a04713']
// BB 0x140a04763-0x140a04778 size=21 type=0 succ=['0x140a04778'] pred=['0x140a04748']
// BB 0x140a04778-0x140a0479b size=35 type=0 succ=['0x140a0479b'] pred=['0x140a04713', '0x140a04763']
// BB 0x140a0479b-0x140a047c6 size=43 type=0 succ=['0x140a047c6', '0x140a047d3'] pred=['0x140a04778']
// BB 0x140a047c6-0x140a047d3 size=13 type=0 succ=['0x140a047d3'] pred=['0x140a0479b']
// BB 0x140a047d3-0x140a047f0 size=29 type=0 succ=['0x140a047f0', '0x140a067c2'] pred=['0x140a0479b', '0x140a047c6']
// BB 0x140a047f0-0x140a04829 size=57 type=0 succ=['0x140a04829', '0x140a04859'] pred=['0x140a047d3']
// BB 0x140a04829-0x140a04844 size=27 type=0 succ=['0x140a04844', '0x140a067fd'] pred=['0x140a047f0']
// BB 0x140a04844-0x140a04859 size=21 type=0 succ=['0x140a04859'] pred=['0x140a04829']
// BB 0x140a04859-0x140a0487c size=35 type=0 succ=['0x140a0487c'] pred=['0x140a047f0', '0x140a04844']
// BB 0x140a0487c-0x140a048a7 size=43 type=0 succ=['0x140a048a7', '0x140a048b4'] pred=['0x140a04859']
// BB 0x140a048a7-0x140a048b4 size=13 type=0 succ=['0x140a048b4'] pred=['0x140a0487c']
// BB 0x140a048b4-0x140a048d1 size=29 type=0 succ=['0x140a048d1', '0x140a067b0'] pred=['0x140a0487c', '0x140a048a7']
// BB 0x140a048d1-0x140a0490f size=62 type=0 succ=['0x140a0490f', '0x140a06048'] pred=['0x140a048b4']
// BB 0x140a0490f-0x140a04918 size=9 type=0 succ=['0x140a04918', '0x140a0494c'] pred=['0x140a048d1']
// BB 0x140a04918-0x140a04939 size=33 type=0 succ=['0x140a04939', '0x140a0604b'] pred=['0x140a0490f']
// BB 0x140a04939-0x140a0494c size=19 type=0 succ=['0x140a04952'] pred=['0x140a04918']
// BB 0x140a0494c-0x140a04952 size=6 type=0 succ=['0x140a04952'] pred=['0x140a0490f']
// BB 0x140a04952-0x140a0497c size=42 type=0 succ=['0x140a0497c'] pred=['0x140a04939', '0x140a0494c']
// BB 0x140a0497c-0x140a049ae size=50 type=0 succ=['0x140a049ae', '0x140a049bb'] pred=['0x140a04952']
// BB 0x140a049ae-0x140a049bb size=13 type=0 succ=['0x140a049bb'] pred=['0x140a0497c']
// BB 0x140a049bb-0x140a049d8 size=29 type=0 succ=['0x140a049d8', '0x140a06826'] pred=['0x140a0497c', '0x140a049ae']
// BB 0x140a049d8-0x140a04a2c size=84 type=0 succ=['0x140a04a2c', '0x140a06814'] pred=['0x140a049bb']
// BB 0x140a04a2c-0x140a04a65 size=57 type=0 succ=['0x140a04a65'] pred=['0x140a049d8']
// BB 0x140a04a65-0x140a04a89 size=36 type=0 succ=['0x140a04a89', '0x140a04a96'] pred=['0x140a04a2c']
// BB 0x140a04a89-0x140a04a96 size=13 type=0 succ=['0x140a04a96'] pred=['0x140a04a65']
// BB 0x140a04a96-0x140a04ac6 size=48 type=0 succ=['0x140a04ac6', '0x140a04ca5'] pred=['0x140a04a65', '0x140a04a89']
// BB 0x140a04ac6-0x140a04acd size=7 type=0 succ=['0x140a04acd'] pred=['0x140a04a96']
// BB 0x140a04acd-0x140a04ade size=17 type=0 succ=['0x140a04ade'] pred=['0x140a04ac6']
// BB 0x140a04ade-0x140a04af9 size=27 type=0 succ=['0x140a04af9'] pred=['0x140a04acd']
// BB 0x140a04af9-0x140a04b1e size=37 type=0 succ=['0x140a04b1e', '0x140a04b85'] pred=['0x140a04ade', '0x140a04b97']
// BB 0x140a04b1e-0x140a04b25 size=7 type=0 succ=['0x140a04b25'] pred=['0x140a04af9']
// BB 0x140a04b25-0x140a04b4c size=39 type=0 succ=['0x140a04b4c', '0x140a04b74'] pred=['0x140a04b1e', '0x140a04b74']
// BB 0x140a04b4c-0x140a04b74 size=40 type=0 succ=['0x140a04b74', '0x140a04ba7'] pred=['0x140a04b25']
// BB 0x140a04b74-0x140a04b85 size=17 type=0 succ=['0x140a04b25', '0x140a04b85'] pred=['0x140a04b25', '0x140a04b4c']
// BB 0x140a04b85-0x140a04b97 size=18 type=0 succ=['0x140a04b97', '0x140a04ca5'] pred=['0x140a04af9', '0x140a04b74']
// BB 0x140a04b97-0x140a04ba7 size=16 type=0 succ=['0x140a04af9'] pred=['0x140a04b85']
// BB 0x140a04ba7-0x140a04bb7 size=16 type=0 succ=['0x140a04bb7', '0x140a04ca5'] pred=['0x140a04b4c']
// BB 0x140a04bb7-0x140a04bcf size=24 type=0 succ=['0x140a04bcf', '0x140a04ca5'] pred=['0x140a04ba7']
// BB 0x140a04bcf-0x140a04bd8 size=9 type=0 succ=['0x140a04bd8', '0x140a060e1'] pred=['0x140a04bb7']
// BB 0x140a04bd8-0x140a04bda size=2 type=0 succ=['0x140a04bda', '0x140a04c03'] pred=['0x140a04bcf']
// BB 0x140a04bda-0x140a04bfe size=36 type=0 succ=['0x140a04bfe', '0x140a04c0f'] pred=['0x140a04bd8']
// BB 0x140a04bfe-0x140a04c03 size=5 type=0 succ=['0x140a0685c'] pred=['0x140a04bda']
// BB 0x140a04c03-0x140a04c0f size=12 type=0 succ=['0x140a04c0f'] pred=['0x140a04bd8']
// BB 0x140a04c0f-0x140a04c18 size=9 type=0 succ=['0x140a04c18', '0x140a04c2a'] pred=['0x140a04bda', '0x140a04c03']
// BB 0x140a04c18-0x140a04c2a size=18 type=0 succ=['0x140a04c2a'] pred=['0x140a04c0f']
// BB 0x140a04c2a-0x140a04c54 size=42 type=0 succ=['0x140a04c54'] pred=['0x140a04c0f', '0x140a04c18']
// BB 0x140a04c54-0x140a04c73 size=31 type=0 succ=['0x140a04c73'] pred=['0x140a04c2a']
// BB 0x140a04c73-0x140a04ca5 size=50 type=0 succ=['0x140a04ca5'] pred=['0x140a04c54']
// BB 0x140a04ca5-0x140a04d0f size=106 type=0 succ=['0x140a04d0f', '0x140a04d1c'] pred=['0x140a04a96', '0x140a04b85', '0x140a04ba7', '0x140a04bb7', '0x140a04c73']
// BB 0x140a04d0f-0x140a04d1c size=13 type=0 succ=['0x140a04d1c'] pred=['0x140a04ca5']
// BB 0x140a04d1c-0x140a04d59 size=61 type=0 succ=['0x140a04d59', '0x140a04d6b'] pred=['0x140a04ca5', '0x140a04d0f']
// BB 0x140a04d59-0x140a04d6b size=18 type=0 succ=['0x140a04d6b'] pred=['0x140a04d1c']
// BB 0x140a04d6b-0x140a04d7e size=19 type=0 succ=['0x140a04d7e', '0x140a04d90'] pred=['0x140a04d1c', '0x140a04d59']
// BB 0x140a04d7e-0x140a04d90 size=18 type=0 succ=['0x140a04d90'] pred=['0x140a04d6b']
// BB 0x140a04d90-0x140a04d95 size=5 type=0 succ=['0x140a04d95', '0x140a04dab'] pred=['0x140a04d6b', '0x140a04d7e']
// BB 0x140a04d95-0x140a04dab size=22 type=0 succ=['0x140a04dab'] pred=['0x140a04d90']
// BB 0x140a04dab-0x140a04dcf size=36 type=0 succ=['0x140a0407d', '0x140a04dcf'] pred=['0x140a04d90', '0x140a04d95']
// BB 0x140a04dcf-0x140a04de6 size=23 type=0 succ=['0x140a0407d'] pred=['0x140a04dab']
// BB 0x140a04de6-0x140a04e05 size=31 type=0 succ=['0x140a04135'] pred=['0x140a040da']
// BB 0x140a04e05-0x140a04e1a size=21 type=0 succ=['0x140a0435b'] pred=['0x140a0430c']
// BB 0x140a04e1a-0x140a04e44 size=42 type=0 succ=['0x140a04412', '0x140a04e44'] pred=['0x140a043b1']
// BB 0x140a04e44-0x140a04e49 size=5 type=0 succ=['0x140a04443'] pred=['0x140a04e1a']
// BB 0x140a04e49-0x140a04e50 size=7 type=0 succ=['0x140a04e50'] pred=['0x140a025a4', '0x140a04010']
// BB 0x140a04e50-0x140a04e73 size=35 type=0 succ=['0x140a04e73', '0x140a0518c'] pred=['0x140a0402e', '0x140a0407d', '0x140a04e49']
// BB 0x140a04e73-0x140a04e78 size=5 type=0 succ=['0x140a0250c'] pred=['0x140a04e50']
// BB 0x140a04e78-0x140a04e7b size=3 type=0 succ=['0x140a04e7b'] pred=['0x140a040cd']
// BB 0x140a04e7b-0x140a04e90 size=21 type=0 succ=['0x140a04e90'] pred=['0x140a04e78', '0x140a065e1']
// BB 0x140a04e90-0x140a04e9f size=15 type=4 succ=[] pred=['0x140a04e7b']
// BB 0x140a04ea0-0x140a04ea5 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a04ea5-0x140a04ea8 size=3 type=0 succ=['0x140a04ea8'] pred=['0x140a042ff']
// BB 0x140a04ea8-0x140a04eb7 size=15 type=4 succ=[] pred=['0x140a04ea5', '0x140a06744']
// BB 0x140a04eb8-0x140a04ebd size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a04ebd-0x140a04ec0 size=3 type=0 succ=['0x140a04ec0'] pred=['0x140a045d4']
// BB 0x140a04ec0-0x140a04ec7 size=7 type=0 succ=['0x140a04ec7'] pred=['0x140a0460d', '0x140a04ebd']
// BB 0x140a04ec7-0x140a04ed2 size=11 type=4 succ=[] pred=['0x140a04ec0']
// BB 0x140a04ed3-0x140a04ed8 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a04ed8-0x140a04edb size=3 type=0 succ=['0x140a04edb'] pred=['0x140a043a4']
// BB 0x140a04edb-0x140a04eea size=15 type=4 succ=[] pred=['0x140a04ed8', '0x140a0677a']
// BB 0x140a04eeb-0x140a04ef0 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a04ef0-0x140a04ef6 size=6 type=0 succ=['0x140a04ef6'] pred=['0x140a03638']
// BB 0x140a04ef6-0x140a04f19 size=35 type=0 succ=['0x140a04f19'] pred=['0x140a0365b', '0x140a04ef0']
// BB 0x140a04f19-0x140a04f44 size=43 type=0 succ=['0x140a04f44', '0x140a04f51'] pred=['0x140a04ef6']
// BB 0x140a04f44-0x140a04f51 size=13 type=0 succ=['0x140a04f51'] pred=['0x140a04f19']
// BB 0x140a04f51-0x140a04f6e size=29 type=0 succ=['0x140a04f6e', '0x140a0679b'] pred=['0x140a04f19', '0x140a04f44']
// BB 0x140a04f6e-0x140a04ff2 size=132 type=0 succ=['0x140a04ff2', '0x140a04fff'] pred=['0x140a04f51']
// BB 0x140a04ff2-0x140a04fff size=13 type=0 succ=['0x140a04fff'] pred=['0x140a04f6e']
// BB 0x140a04fff-0x140a05073 size=116 type=0 succ=['0x140a05073'] pred=['0x140a04f6e', '0x140a04ff2']
// BB 0x140a05073-0x140a0509e size=43 type=0 succ=['0x140a0509e', '0x140a050ab'] pred=['0x140a04fff']
// BB 0x140a0509e-0x140a050ab size=13 type=0 succ=['0x140a050ab'] pred=['0x140a05073']
// BB 0x140a050ab-0x140a050e0 size=53 type=0 succ=['0x140a050e0', '0x140a050ed'] pred=['0x140a05073', '0x140a0509e']
// BB 0x140a050e0-0x140a050ed size=13 type=0 succ=['0x140a050ed'] pred=['0x140a050ab']
// BB 0x140a050ed-0x140a05138 size=75 type=0 succ=['0x140a05138', '0x140a06330'] pred=['0x140a050ab', '0x140a050e0']
// BB 0x140a05138-0x140a05144 size=12 type=0 succ=['0x140a05144', '0x140a0515d'] pred=['0x140a050ed']
// BB 0x140a05144-0x140a0515d size=25 type=0 succ=['0x140a0515d'] pred=['0x140a05138', '0x140a06330']
// BB 0x140a0515d-0x140a05173 size=22 type=0 succ=['0x140a05173', '0x140a05185'] pred=['0x140a05138', '0x140a05144']
// BB 0x140a05173-0x140a05185 size=18 type=0 succ=['0x140a05185'] pred=['0x140a0515d']
// BB 0x140a05185-0x140a0518c size=7 type=0 succ=['0x140a0518c'] pred=['0x140a02549', '0x140a0257c', '0x140a02592', '0x140a0297b', '0x140a02988', '0x140a0515d', '0x140a05173']
// BB 0x140a0518c-0x140a0519a size=14 type=0 succ=['0x140a0519a'] pred=['0x140a024f0', '0x140a0250c', '0x140a04e50', '0x140a05185']
// BB 0x140a0519a-0x140a051c5 size=43 type=0 succ=['0x140a051c5', '0x140a054b7'] pred=['0x140a0518c']
// BB 0x140a051c5-0x140a051fb size=54 type=0 succ=['0x140a051fb', '0x140a05219'] pred=['0x140a0519a']
// BB 0x140a051fb-0x140a05200 size=5 type=0 succ=['0x140a05200', '0x140a05219'] pred=['0x140a051c5']
// BB 0x140a05200-0x140a0520a size=10 type=0 succ=['0x140a0520a', '0x140a05219'] pred=['0x140a051fb']
// BB 0x140a0520a-0x140a05213 size=9 type=0 succ=['0x140a05213', '0x140a06024'] pred=['0x140a05200']
// BB 0x140a05213-0x140a05219 size=6 type=0 succ=['0x140a0521b'] pred=['0x140a0520a']
// BB 0x140a05219-0x140a0521b size=2 type=0 succ=['0x140a0521b'] pred=['0x140a051c5', '0x140a051fb', '0x140a05200']
// BB 0x140a0521b-0x140a05251 size=54 type=0 succ=['0x140a05251', '0x140a0526f'] pred=['0x140a05213', '0x140a05219', '0x140a06024']
// BB 0x140a05251-0x140a05256 size=5 type=0 succ=['0x140a05256', '0x140a0526f'] pred=['0x140a0521b']
// BB 0x140a05256-0x140a05260 size=10 type=0 succ=['0x140a05260', '0x140a0526f'] pred=['0x140a05251']
// BB 0x140a05260-0x140a05269 size=9 type=0 succ=['0x140a05269', '0x140a06036'] pred=['0x140a05256']
// BB 0x140a05269-0x140a0526f size=6 type=0 succ=['0x140a05271'] pred=['0x140a05260']
// BB 0x140a0526f-0x140a05271 size=2 type=0 succ=['0x140a05271'] pred=['0x140a0521b', '0x140a05251', '0x140a05256']
// BB 0x140a05271-0x140a052a4 size=51 type=0 succ=['0x140a052a4', '0x140a06382'] pred=['0x140a05269', '0x140a0526f', '0x140a06036']
// BB 0x140a052a4-0x140a052f1 size=77 type=0 succ=['0x140a052f1'] pred=['0x140a05271']
// BB 0x140a052f1-0x140a0531c size=43 type=0 succ=['0x140a0531c', '0x140a05329'] pred=['0x140a052a4']
// BB 0x140a0531c-0x140a05329 size=13 type=0 succ=['0x140a05329'] pred=['0x140a052f1']
// BB 0x140a05329-0x140a05346 size=29 type=0 succ=['0x140a05346', '0x140a06397'] pred=['0x140a052f1', '0x140a0531c']
// BB 0x140a05346-0x140a053bb size=117 type=0 succ=['0x140a053bb', '0x140a053c8'] pred=['0x140a05329']
// BB 0x140a053bb-0x140a053c8 size=13 type=0 succ=['0x140a053c8'] pred=['0x140a05346']
// BB 0x140a053c8-0x140a053e5 size=29 type=0 succ=['0x140a053e5', '0x140a063ac'] pred=['0x140a05346', '0x140a053bb']
// BB 0x140a053e5-0x140a05460 size=123 type=0 succ=['0x140a05460', '0x140a0546d'] pred=['0x140a053c8']
// BB 0x140a05460-0x140a0546d size=13 type=0 succ=['0x140a0546d'] pred=['0x140a053e5']
// BB 0x140a0546d-0x140a054b7 size=74 type=0 succ=['0x140a054cd'] pred=['0x140a053e5', '0x140a05460']
// BB 0x140a054b7-0x140a054cd size=22 type=0 succ=['0x140a054cd'] pred=['0x140a0519a']
// BB 0x140a054cd-0x140a054f3 size=38 type=0 succ=['0x140a054f3', '0x140a0552b'] pred=['0x140a0546d', '0x140a054b7']
// BB 0x140a054f3-0x140a0552b size=56 type=0 succ=['0x140a05537'] pred=['0x140a054cd']
// BB 0x140a0552b-0x140a05537 size=12 type=0 succ=['0x140a05537'] pred=['0x140a054cd']
// BB 0x140a05537-0x140a0556a size=51 type=0 succ=['0x140a0556a', '0x140a0636d'] pred=['0x140a054f3', '0x140a0552b']
// BB 0x140a0556a-0x140a05598 size=46 type=0 succ=['0x140a05598', '0x140a055b3'] pred=['0x140a05537']
// BB 0x140a05598-0x140a0559b size=3 type=0 succ=['0x140a0559b'] pred=['0x140a0556a']
// BB 0x140a0559b-0x140a055a2 size=7 type=0 succ=['0x140a055a2'] pred=['0x140a05598', '0x140a055b5']
// BB 0x140a055a2-0x140a055ad size=11 type=4 succ=[] pred=['0x140a0559b']
// BB 0x140a055ae-0x140a055b3 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a055b3-0x140a055b5 size=2 type=0 succ=['0x140a055b5', '0x140a0560e'] pred=['0x140a0556a']
// BB 0x140a055b5-0x140a055e5 size=48 type=0 succ=['0x140a0559b', '0x140a055e5'] pred=['0x140a055b3']
// BB 0x140a055e5-0x140a0560e size=41 type=0 succ=['0x140a05614'] pred=['0x140a055b5']
// BB 0x140a0560e-0x140a05614 size=6 type=0 succ=['0x140a05614'] pred=['0x140a055b3']
// BB 0x140a05614-0x140a05637 size=35 type=0 succ=['0x140a05637'] pred=['0x140a055e5', '0x140a0560e']
// BB 0x140a05637-0x140a05662 size=43 type=0 succ=['0x140a05662', '0x140a0566f'] pred=['0x140a05614']
// BB 0x140a05662-0x140a0566f size=13 type=0 succ=['0x140a0566f'] pred=['0x140a05637']
// BB 0x140a0566f-0x140a0568c size=29 type=0 succ=['0x140a0568c', '0x140a063d3'] pred=['0x140a05637', '0x140a05662']
// BB 0x140a0568c-0x140a056d9 size=77 type=0 succ=['0x140a056d9', '0x140a063e8'] pred=['0x140a0566f']
// BB 0x140a056d9-0x140a0570a size=49 type=0 succ=['0x140a0570a'] pred=['0x140a0568c']
// BB 0x140a0570a-0x140a05735 size=43 type=0 succ=['0x140a05735', '0x140a05742'] pred=['0x140a056d9']
// BB 0x140a05735-0x140a05742 size=13 type=0 succ=['0x140a05742'] pred=['0x140a0570a']
// BB 0x140a05742-0x140a0575f size=29 type=0 succ=['0x140a0575f', '0x140a063fd'] pred=['0x140a0570a', '0x140a05735']
// BB 0x140a0575f-0x140a05796 size=55 type=0 succ=['0x140a05796'] pred=['0x140a05742']
// BB 0x140a05796-0x140a057bb size=37 type=0 succ=['0x140a057bb', '0x140a057e0'] pred=['0x140a0575f']
// BB 0x140a057bb-0x140a057e0 size=37 type=0 succ=['0x140a057e0'] pred=['0x140a05796']
// BB 0x140a057e0-0x140a0587c size=156 type=0 succ=['0x140a0587c', '0x140a05889'] pred=['0x140a05796', '0x140a057bb']
// BB 0x140a0587c-0x140a05889 size=13 type=0 succ=['0x140a05889'] pred=['0x140a057e0']
// BB 0x140a05889-0x140a058a6 size=29 type=0 succ=['0x140a058a6', '0x140a06412'] pred=['0x140a057e0', '0x140a0587c']
// BB 0x140a058a6-0x140a058f1 size=75 type=0 succ=['0x140a058f1', '0x140a06427'] pred=['0x140a05889']
// BB 0x140a058f1-0x140a0591e size=45 type=0 succ=['0x140a0591e'] pred=['0x140a058a6']
// BB 0x140a0591e-0x140a05949 size=43 type=0 succ=['0x140a05949', '0x140a05956'] pred=['0x140a058f1']
// BB 0x140a05949-0x140a05956 size=13 type=0 succ=['0x140a05956'] pred=['0x140a0591e']
// BB 0x140a05956-0x140a05978 size=34 type=0 succ=['0x140a05978', '0x140a0643a'] pred=['0x140a0591e', '0x140a05949']
// BB 0x140a05978-0x140a059a8 size=48 type=0 succ=['0x140a059a8', '0x140a059df'] pred=['0x140a05956']
// BB 0x140a059a8-0x140a059ca size=34 type=0 succ=['0x140a059ca', '0x140a06479'] pred=['0x140a05978']
// BB 0x140a059ca-0x140a059df size=21 type=0 succ=['0x140a059df'] pred=['0x140a059a8']
// BB 0x140a059df-0x140a05a09 size=42 type=0 succ=['0x140a05a09'] pred=['0x140a05978', '0x140a059ca']
// BB 0x140a05a09-0x140a05a34 size=43 type=0 succ=['0x140a05a34', '0x140a05a41'] pred=['0x140a059df']
// BB 0x140a05a34-0x140a05a41 size=13 type=0 succ=['0x140a05a41'] pred=['0x140a05a09']
// BB 0x140a05a41-0x140a05a5e size=29 type=0 succ=['0x140a05a5e', '0x140a0644f'] pred=['0x140a05a09', '0x140a05a34']
// BB 0x140a05a5e-0x140a05a8e size=48 type=0 succ=['0x140a05a8e'] pred=['0x140a05a41']
// BB 0x140a05a8e-0x140a05aaf size=33 type=0 succ=['0x140a05aaf', '0x140a06063'] pred=['0x140a05a5e']
// BB 0x140a05aaf-0x140a05aff size=80 type=0 succ=['0x140a05aff', '0x140a05b0c'] pred=['0x140a05a8e']
// BB 0x140a05aff-0x140a05b0c size=13 type=0 succ=['0x140a05b0c'] pred=['0x140a05aaf']
// BB 0x140a05b0c-0x140a05b29 size=29 type=0 succ=['0x140a05b29', '0x140a06464'] pred=['0x140a05aaf', '0x140a05aff']
// BB 0x140a05b29-0x140a05b5c size=51 type=0 succ=['0x140a05b5c', '0x140a05b77'] pred=['0x140a05b0c']
// BB 0x140a05b5c-0x140a05b5f size=3 type=0 succ=['0x140a05b5f'] pred=['0x140a05b29']
// BB 0x140a05b5f-0x140a05b66 size=7 type=0 succ=['0x140a05b66'] pred=['0x140a05b5c', '0x140a05b79']
// BB 0x140a05b66-0x140a05b71 size=11 type=4 succ=[] pred=['0x140a05b5f']
// BB 0x140a05b72-0x140a05b77 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a05b77-0x140a05b79 size=2 type=0 succ=['0x140a05b79', '0x140a05bb0'] pred=['0x140a05b29']
// BB 0x140a05b79-0x140a05b9d size=36 type=0 succ=['0x140a05b5f', '0x140a05b9d'] pred=['0x140a05b77']
// BB 0x140a05b9d-0x140a05bb0 size=19 type=0 succ=['0x140a05bb5'] pred=['0x140a05b79']
// BB 0x140a05bb0-0x140a05bb5 size=5 type=0 succ=['0x140a05bb5'] pred=['0x140a05b77']
// BB 0x140a05bb5-0x140a05bd8 size=35 type=0 succ=['0x140a05bd8'] pred=['0x140a05b9d', '0x140a05bb0']
// BB 0x140a05bd8-0x140a05c03 size=43 type=0 succ=['0x140a05c03', '0x140a05c10'] pred=['0x140a05bb5']
// BB 0x140a05c03-0x140a05c10 size=13 type=0 succ=['0x140a05c10'] pred=['0x140a05bd8']
// BB 0x140a05c10-0x140a05c2d size=29 type=0 succ=['0x140a05c2d', '0x140a06493'] pred=['0x140a05bd8', '0x140a05c03']
// BB 0x140a05c2d-0x140a05c5b size=46 type=0 succ=['0x140a05c5b'] pred=['0x140a05c10']
// BB 0x140a05c5b-0x140a05c7c size=33 type=0 succ=['0x140a05c7c', '0x140a060a2'] pred=['0x140a05c2d']
// BB 0x140a05c7c-0x140a05ccc size=80 type=0 succ=['0x140a05ccc', '0x140a05cd9'] pred=['0x140a05c5b']
// BB 0x140a05ccc-0x140a05cd9 size=13 type=0 succ=['0x140a05cd9'] pred=['0x140a05c7c']
// BB 0x140a05cd9-0x140a05d07 size=46 type=0 succ=['0x140a05d07', '0x140a05e86'] pred=['0x140a05c7c', '0x140a05ccc']
// BB 0x140a05d07-0x140a05d27 size=32 type=0 succ=['0x140a05d27', '0x140a05e86'] pred=['0x140a05cd9']
// BB 0x140a05d27-0x140a05d5a size=51 type=0 succ=['0x140a05d5a', '0x140a064a8'] pred=['0x140a05d07']
// BB 0x140a05d5a-0x140a05da7 size=77 type=0 succ=['0x140a05da7', '0x140a064bd'] pred=['0x140a05d27']
// BB 0x140a05da7-0x140a05ddb size=52 type=0 succ=['0x140a05ddb'] pred=['0x140a05d5a']
// BB 0x140a05ddb-0x140a05e06 size=43 type=0 succ=['0x140a05e06', '0x140a05e13'] pred=['0x140a05da7']
// BB 0x140a05e06-0x140a05e13 size=13 type=0 succ=['0x140a05e13'] pred=['0x140a05ddb']
// BB 0x140a05e13-0x140a05e3f size=44 type=0 succ=['0x140a05e3f'] pred=['0x140a05ddb', '0x140a05e06']
// BB 0x140a05e3f-0x140a05e58 size=25 type=0 succ=['0x140a05e58'] pred=['0x140a05e13']
// BB 0x140a05e58-0x140a05e86 size=46 type=0 succ=['0x140a05e86'] pred=['0x140a05e3f']
// BB 0x140a05e86-0x140a05ef1 size=107 type=0 succ=['0x140a05ef1'] pred=['0x140a05cd9', '0x140a05d07', '0x140a05e58']
// BB 0x140a05ef1-0x140a05f0a size=25 type=0 succ=['0x140a05f0a', '0x140a05f1c'] pred=['0x140a05e86']
// BB 0x140a05f0a-0x140a05f1c size=18 type=0 succ=['0x140a05f1c'] pred=['0x140a05ef1']
// BB 0x140a05f1c-0x140a05f28 size=12 type=0 succ=['0x140a05f28', '0x140a05f3a'] pred=['0x140a05ef1', '0x140a05f0a']
// BB 0x140a05f28-0x140a05f3a size=18 type=0 succ=['0x140a05f3a'] pred=['0x140a05f1c']
// BB 0x140a05f3a-0x140a05f70 size=54 type=0 succ=['0x140a05f70'] pred=['0x140a05f1c', '0x140a05f28']
// BB 0x140a05f70-0x140a05f80 size=16 type=0 succ=['0x140a05f80', '0x140a05f99'] pred=['0x140a05f3a', '0x140a05f8e']
// BB 0x140a05f80-0x140a05f8e size=14 type=0 succ=['0x140a05f8e'] pred=['0x140a05f70']
// BB 0x140a05f8e-0x140a05f99 size=11 type=0 succ=['0x140a05f70'] pred=['0x140a05f80']
// BB 0x140a05f99-0x140a05fa5 size=12 type=0 succ=['0x140a05fa5', '0x140a05fbb'] pred=['0x140a05f70']
// BB 0x140a05fa5-0x140a05fbb size=22 type=0 succ=['0x140a05fbb'] pred=['0x140a05f99']
// BB 0x140a05fbb-0x140a05fc7 size=12 type=0 succ=['0x140a05fc7', '0x140a05fd9'] pred=['0x140a05f99', '0x140a05fa5']
// BB 0x140a05fc7-0x140a05fd9 size=18 type=0 succ=['0x140a05fd9'] pred=['0x140a05fbb']
// BB 0x140a05fd9-0x140a05fe5 size=12 type=0 succ=['0x140a05fe5', '0x140a05ff7'] pred=['0x140a05fbb', '0x140a05fc7']
// BB 0x140a05fe5-0x140a05ff7 size=18 type=0 succ=['0x140a05ff7'] pred=['0x140a05fd9']
// BB 0x140a05ff7-0x140a06024 size=45 type=2 succ=[] pred=['0x140a05fd9', '0x140a05fe5']
// BB 0x140a06024-0x140a06036 size=18 type=0 succ=['0x140a0521b'] pred=['0x140a0520a']
// BB 0x140a06036-0x140a06048 size=18 type=0 succ=['0x140a05271'] pred=['0x140a05260']
// BB 0x140a06048-0x140a0604b size=3 type=0 succ=['0x140a0604b'] pred=['0x140a048d1']
// BB 0x140a0604b-0x140a06052 size=7 type=0 succ=['0x140a06052'] pred=['0x140a04918', '0x140a06048']
// BB 0x140a06052-0x140a0605d size=11 type=4 succ=[] pred=['0x140a0604b']
// BB 0x140a0605e-0x140a06063 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06063-0x140a06071 size=14 type=0 succ=['0x140a06071'] pred=['0x140a05a8e']
// BB 0x140a06071-0x140a0609c size=43 type=4 succ=[] pred=['0x140a06063']
// BB 0x140a0609d-0x140a060a2 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a060a2-0x140a060b0 size=14 type=0 succ=['0x140a060b0'] pred=['0x140a05c5b']
// BB 0x140a060b0-0x140a060db size=43 type=4 succ=[] pred=['0x140a060a2']
// BB 0x140a060dc-0x140a060e1 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a060e1-0x140a060e4 size=3 type=0 succ=['0x140a060e4'] pred=['0x140a04bcf']
// BB 0x140a060e4-0x140a060eb size=7 type=0 succ=['0x140a060eb'] pred=['0x140a060e1', '0x140a0685c']
// BB 0x140a060eb-0x140a060fa size=15 type=4 succ=[] pred=['0x140a060e4']
// BB 0x140a060fb-0x140a06100 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06100-0x140a0612b size=43 type=4 succ=[] pred=['0x140a027df']
// BB 0x140a0612c-0x140a06131 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06131-0x140a06138 size=7 type=0 succ=['0x140a06138'] pred=['0x140a02eff']
// BB 0x140a06138-0x140a06147 size=15 type=4 succ=[] pred=['0x140a06131']
// BB 0x140a06148-0x140a0614d size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0614d-0x140a06154 size=7 type=0 succ=['0x140a06154'] pred=['0x140a03bcd']
// BB 0x140a06154-0x140a06163 size=15 type=4 succ=[] pred=['0x140a0614d']
// BB 0x140a06164-0x140a06169 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06169-0x140a06170 size=7 type=0 succ=['0x140a06170'] pred=['0x140a0349d']
// BB 0x140a06170-0x140a0617f size=15 type=4 succ=[] pred=['0x140a06169']
// BB 0x140a06180-0x140a06185 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06185-0x140a06193 size=14 type=0 succ=['0x140a06193'] pred=['0x140a0384b']
// BB 0x140a06193-0x140a061be size=43 type=4 succ=[] pred=['0x140a06185']
// BB 0x140a061bf-0x140a061c4 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a061c4-0x140a061d2 size=14 type=0 succ=['0x140a061d2'] pred=['0x140a03984']
// BB 0x140a061d2-0x140a061fd size=43 type=4 succ=[] pred=['0x140a061c4']
// BB 0x140a061fe-0x140a06203 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06203-0x140a06211 size=14 type=0 succ=['0x140a06211'] pred=['0x140a03a67']
// BB 0x140a06211-0x140a0623c size=43 type=4 succ=[] pred=['0x140a06203']
// BB 0x140a0623d-0x140a06242 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06242-0x140a06250 size=14 type=0 succ=['0x140a06250'] pred=['0x140a03b32']
// BB 0x140a06250-0x140a0627b size=43 type=4 succ=[] pred=['0x140a06242']
// BB 0x140a0627c-0x140a06281 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06281-0x140a0628f size=14 type=0 succ=['0x140a0628f'] pred=['0x140a03c78']
// BB 0x140a0628f-0x140a062ba size=43 type=4 succ=[] pred=['0x140a06281']
// BB 0x140a062bb-0x140a062c0 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a062c0-0x140a062ce size=14 type=0 succ=['0x140a062ce'] pred=['0x140a03d3d']
// BB 0x140a062ce-0x140a062f9 size=43 type=4 succ=[] pred=['0x140a062c0']
// BB 0x140a062fa-0x140a062ff size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a062ff-0x140a06322 size=35 type=0 succ=['0x140a06322'] pred=['0x140a0375e']
// BB 0x140a06322-0x140a0632a size=8 type=4 succ=[] pred=['0x140a062ff']
// BB 0x140a0632b-0x140a06330 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06330-0x140a06365 size=53 type=0 succ=['0x140a05144'] pred=['0x140a050ed']
// BB 0x140a06365-0x140a0636d size=8 type=0 succ=['0x140a023b0'] pred=['0x140a023c8']
// BB 0x140a0636d-0x140a0637c size=15 type=4 succ=[] pred=['0x140a05537']
// BB 0x140a0637d-0x140a06382 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06382-0x140a06391 size=15 type=4 succ=[] pred=['0x140a05271']
// BB 0x140a06392-0x140a06397 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06397-0x140a063a6 size=15 type=4 succ=[] pred=['0x140a05329']
// BB 0x140a063a7-0x140a063ac size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a063ac-0x140a063bb size=15 type=4 succ=[] pred=['0x140a053c8']
// BB 0x140a063bc-0x140a063c1 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a063c1-0x140a063cd size=12 type=4 succ=[] pred=['0x140a0422f']
// BB 0x140a063ce-0x140a063d3 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a063d3-0x140a063e2 size=15 type=4 succ=[] pred=['0x140a0566f']
// BB 0x140a063e3-0x140a063e8 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a063e8-0x140a063f7 size=15 type=4 succ=[] pred=['0x140a0568c']
// BB 0x140a063f8-0x140a063fd size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a063fd-0x140a0640c size=15 type=4 succ=[] pred=['0x140a05742']
// BB 0x140a0640d-0x140a06412 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06412-0x140a06421 size=15 type=4 succ=[] pred=['0x140a05889']
// BB 0x140a06422-0x140a06427 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06427-0x140a06434 size=13 type=4 succ=[] pred=['0x140a058a6']
// BB 0x140a06435-0x140a0643a size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0643a-0x140a06449 size=15 type=4 succ=[] pred=['0x140a05956']
// BB 0x140a0644a-0x140a0644f size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0644f-0x140a0645e size=15 type=4 succ=[] pred=['0x140a05a41']
// BB 0x140a0645f-0x140a06464 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06464-0x140a06473 size=15 type=4 succ=[] pred=['0x140a05b0c']
// BB 0x140a06474-0x140a06479 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06479-0x140a06480 size=7 type=0 succ=['0x140a06480'] pred=['0x140a059a8']
// BB 0x140a06480-0x140a0648d size=13 type=4 succ=[] pred=['0x140a06479']
// BB 0x140a0648e-0x140a06493 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06493-0x140a064a2 size=15 type=4 succ=[] pred=['0x140a05c10']
// BB 0x140a064a3-0x140a064a8 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a064a8-0x140a064b7 size=15 type=4 succ=[] pred=['0x140a05d27']
// BB 0x140a064b8-0x140a064bd size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a064bd-0x140a064cc size=15 type=4 succ=[] pred=['0x140a05d5a']
// BB 0x140a064cd-0x140a064d2 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a064d2-0x140a064e1 size=15 type=4 succ=[] pred=['0x140a0263c']
// BB 0x140a064e2-0x140a064e7 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a064e7-0x140a064f6 size=15 type=4 succ=[] pred=['0x140a0267d']
// BB 0x140a064f7-0x140a064fc size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a064fc-0x140a0650b size=15 type=4 succ=[] pred=['0x140a0273b']
// BB 0x140a0650c-0x140a06511 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06511-0x140a06520 size=15 type=4 succ=[] pred=['0x140a02b52']
// BB 0x140a06521-0x140a06526 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06526-0x140a06535 size=15 type=4 succ=[] pred=['0x140a02bc3']
// BB 0x140a06536-0x140a0653b size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0653b-0x140a0654a size=15 type=4 succ=[] pred=['0x140a02c73']
// BB 0x140a0654b-0x140a06550 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06550-0x140a0655f size=15 type=4 succ=[] pred=['0x140a02e0b']
// BB 0x140a06560-0x140a06565 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06565-0x140a06574 size=15 type=4 succ=[] pred=['0x140a02e28']
// BB 0x140a06575-0x140a0657a size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0657a-0x140a06589 size=15 type=4 succ=[] pred=['0x140a02ee2']
// BB 0x140a0658a-0x140a0658f size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0658f-0x140a0659e size=15 type=4 succ=[] pred=['0x140a02f46']
// BB 0x140a0659f-0x140a065a4 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a065a4-0x140a065b3 size=15 type=4 succ=[] pred=['0x140a02f83']
// BB 0x140a065b4-0x140a065b9 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a065b9-0x140a065c8 size=15 type=4 succ=[] pred=['0x140a0303a']
// BB 0x140a065c9-0x140a065ce size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a065ce-0x140a065db size=13 type=4 succ=[] pred=['0x140a03057']
// BB 0x140a065dc-0x140a065e1 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a065e1-0x140a065f4 size=19 type=0 succ=['0x140a04e7b'] pred=['0x140a040f3']
// BB 0x140a065f4-0x140a06603 size=15 type=4 succ=[] pred=['0x140a037ee']
// BB 0x140a06604-0x140a06609 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06609-0x140a06618 size=15 type=4 succ=[] pred=['0x140a038cc']
// BB 0x140a06619-0x140a0661e size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0661e-0x140a0662d size=15 type=4 succ=[] pred=['0x140a03a20']
// BB 0x140a0662e-0x140a06633 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06633-0x140a06642 size=15 type=4 succ=[] pred=['0x140a03ae5']
// BB 0x140a06643-0x140a06648 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06648-0x140a06657 size=15 type=4 succ=[] pred=['0x140a03bb0']
// BB 0x140a06658-0x140a0665d size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0665d-0x140a0666c size=15 type=4 succ=[] pred=['0x140a03c14']
// BB 0x140a0666d-0x140a06672 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06672-0x140a06681 size=15 type=4 succ=[] pred=['0x140a03cf6']
// BB 0x140a06682-0x140a06687 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06687-0x140a06696 size=15 type=4 succ=[] pred=['0x140a03dbb']
// BB 0x140a06697-0x140a0669c size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0669c-0x140a066ab size=15 type=4 succ=[] pred=['0x140a032d8']
// BB 0x140a066ac-0x140a066b1 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a066b1-0x140a066c0 size=15 type=4 succ=[] pred=['0x140a032f5']
// BB 0x140a066c1-0x140a066c6 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a066c6-0x140a066d5 size=15 type=4 succ=[] pred=['0x140a033a9']
// BB 0x140a066d6-0x140a066db size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a066db-0x140a066ea size=15 type=4 succ=[] pred=['0x140a033c6']
// BB 0x140a066eb-0x140a066f0 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a066f0-0x140a066ff size=15 type=4 succ=[] pred=['0x140a03480']
// BB 0x140a06700-0x140a06705 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06705-0x140a06714 size=15 type=4 succ=[] pred=['0x140a034e4']
// BB 0x140a06715-0x140a0671a size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0671a-0x140a06729 size=15 type=4 succ=[] pred=['0x140a03521']
// BB 0x140a0672a-0x140a0672f size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0672f-0x140a0673e size=15 type=4 succ=[] pred=['0x140a035d8']
// BB 0x140a0673f-0x140a06744 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06744-0x140a06750 size=12 type=0 succ=['0x140a04ea8'] pred=['0x140a0431f']
// BB 0x140a06750-0x140a0675f size=15 type=4 succ=[] pred=['0x140a0454a']
// BB 0x140a06760-0x140a06765 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06765-0x140a06774 size=15 type=4 succ=[] pred=['0x140a0448d']
// BB 0x140a06775-0x140a0677a size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0677a-0x140a06786 size=12 type=0 succ=['0x140a04edb'] pred=['0x140a043c4']
// BB 0x140a06786-0x140a06795 size=15 type=4 succ=[] pred=['0x140a0445a']
// BB 0x140a06796-0x140a0679b size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a0679b-0x140a067aa size=15 type=4 succ=[] pred=['0x140a04f51']
// BB 0x140a067ab-0x140a067b0 size=5 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a067b0-0x140a067bf size=15 type=4 succ=[] pred=['0x140a048b4']
// BB 0x140a067c0-0x140a067c2 size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a067c2-0x140a067d1 size=15 type=4 succ=[] pred=['0x140a047d3']
// BB 0x140a067d2-0x140a067d4 size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a067d4-0x140a067e3 size=15 type=4 succ=[] pred=['0x140a046ef']
// BB 0x140a067e4-0x140a067e6 size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a067e6-0x140a067ed size=7 type=0 succ=['0x140a067ed'] pred=['0x140a04748']
// BB 0x140a067ed-0x140a067fa size=13 type=4 succ=[] pred=['0x140a067e6']
// BB 0x140a067fb-0x140a067fd size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a067fd-0x140a06804 size=7 type=0 succ=['0x140a06804'] pred=['0x140a04829']
// BB 0x140a06804-0x140a06811 size=13 type=4 succ=[] pred=['0x140a067fd']
// BB 0x140a06812-0x140a06814 size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06814-0x140a06823 size=15 type=4 succ=[] pred=['0x140a049d8']
// BB 0x140a06824-0x140a06826 size=2 type=0 succ=['0x140a06836'] pred=[]
// BB 0x140a06826-0x140a06835 size=15 type=4 succ=[] pred=['0x140a049bb']
// BB 0x140a06836-0x140a06838 size=2 type=0 succ=[] pred=['0x140a023b9', '0x140a024eb', '0x140a0284d', '0x140a02a9c', '0x140a02d4b', '0x140a03633', '0x140a04ea0', '0x140a04eb8', '0x140a04ed3', '0x140a04eeb', '0x140a055ae', '0x140a05b72', '0x140a0605e', '0x140a0609d', '0x140a060dc', '0x140a060fb', '0x140a0612c', '0x140a06148', '0x140a06164', '0x140a06180', '0x140a061bf', '0x140a061fe', '0x140a0623d', '0x140a0627c', '0x140a062bb', '0x140a062fa', '0x140a0632b', '0x140a0637d', '0x140a06392', '0x140a063a7', '0x140a063bc', '0x140a063ce', '0x140a063e3', '0x140a063f8', '0x140a0640d', '0x140a06422', '0x140a06435', '0x140a0644a', '0x140a0645f', '0x140a06474', '0x140a0648e', '0x140a064a3', '0x140a064b8', '0x140a064cd', '0x140a064e2', '0x140a064f7', '0x140a0650c', '0x140a06521', '0x140a06536', '0x140a0654b', '0x140a06560', '0x140a06575', '0x140a0658a', '0x140a0659f', '0x140a065b4', '0x140a065c9', '0x140a065dc', '0x140a06604', '0x140a06619', '0x140a0662e', '0x140a06643', '0x140a06658', '0x140a0666d', '0x140a06682', '0x140a06697', '0x140a066ac', '0x140a066c1', '0x140a066d6', '0x140a066eb', '0x140a06700', '0x140a06715', '0x140a0672a', '0x140a0673f', '0x140a06760', '0x140a06775', '0x140a06796', '0x140a067ab', '0x140a067c0', '0x140a067d2', '0x140a067e4', '0x140a067fb', '0x140a06812', '0x140a06824']
// BB 0x140a06838-0x140a0685c size=36 type=0 succ=['0x140a0240f'] pred=['0x140a023be']
// BB 0x140a0685c-0x140a06868 size=12 type=0 succ=['0x140a060e4'] pred=['0x140a04bfe']
// BB 0x140a041e8-0x140a041e8 size=0 type=6 succ=[] pred=['0x140a041e4']
// BB 0x140a041f1-0x140a041f1 size=0 type=6 succ=[] pred=['0x140a041ea']
// BB 0x140a0420f-0x140a0420f size=0 type=6 succ=[] pred=['0x140a0420b']

// --- full disassembly ---
/*140a022b0*/ sub_140A022B0: push rbp
/*140a022b1*/  push r15
/*140a022b3*/  push r14
/*140a022b5*/  push r13
/*140a022b7*/  push r12
/*140a022b9*/  push rsi
/*140a022ba*/  push rdi
/*140a022bb*/  push rbx
/*140a022bc*/  sub rsp, 358h
/*140a022c3*/  lea rbp, [rsp+80h]
/*140a022cb*/  movdqa [rbp+310h+var_50], xmm8
/*140a022d4*/  movdqa [rbp+310h+var_60], xmm7
/*140a022dc*/  movdqa [rbp+310h+var_70], xmm6
/*140a022e4*/  mov [rbp+310h+var_78], 0FFFFFFFFFFFFFFFEh
/*140a022ef*/  mov rbx, r8
/*140a022f2*/  mov rdi, rdx
/*140a022f5*/  mov r13, rcx
/*140a022f8*/  lea rcx, aId_6; "id"
/*140a022ff*/  mov edx, 2
/*140a02304*/  mov r8, rdi
/*140a02307*/  call sub_141433D50
/*140a0230c*/  test rax, rax
/*140a0230f*/  jz short loc_140A0233A
/*140a02311*/  cmp byte ptr [rax], 3
/*140a02314*/  jnz short loc_140A0233A
/*140a02316*/  movdqu xmm0, xmmword ptr [rax+10h]
/*140a0231b*/  movdqu [rbp+310h+var_100], xmm0
/*140a02323*/  lea rax, [rbp+310h+var_100]
/*140a0232a*/  mov qword ptr [rbp+310h+var_B0], rax
/*140a02331*/  lea rax, sub_14041F680
/*140a02338*/  jmp short loc_140A02357
/*140a0233a*/ loc_140A0233A: lea r14, [rbp+310h+var_100]
/*140a02341*/  mov rcx, r14
/*140a02344*/  call sub_141356270
/*140a02349*/  mov qword ptr [rbp+310h+var_B0], r14
/*140a02350*/  lea rax, sub_140421AE0
/*140a02357*/ loc_140A02357: mov qword ptr [rbp+310h+var_B0+8], rax
/*140a0235e*/  lea rdx, unk_1417A4F1F
/*140a02365*/  lea rcx, [rbp+310h+var_288]
/*140a0236c*/  lea r8, [rbp+310h+var_B0]
/*140a02373*/  call sub_14149C0F0
/*140a02378*/  nop
/*140a02379*/ loc_140A02379: lea rcx, aModel_6; "model"
/*140a02380*/  mov edx, 5
/*140a02385*/  mov r8, rdi
/*140a02388*/  call sub_141433D50
/*140a0238d*/  nop
/*140a0238e*/  lea r14, unk_1417A4B5D
/*140a02395*/  mov esi, 7
/*140a0239a*/  test rax, rax
/*140a0239d*/  jz short loc_140A023C8
/*140a0239f*/  cmp byte ptr [rax], 3
/*140a023a2*/  jnz short loc_140A023C8
/*140a023a4*/  mov rsi, [rax+18h]
/*140a023a8*/  test rsi, rsi
/*140a023ab*/  jns short loc_140A023BE
/*140a023ad*/  xor r15d, r15d
/*140a023b0*/ loc_140A023B0: mov rcx, r15
/*140a023b3*/  call sub_1416C2D4B
/*140a023b9*/ loc_140A023B9: jmp loc_140A06836
/*140a023be*/ loc_140A023BE: jz loc_140A06838
/*140a023c4*/  mov r14, [rax+10h]
/*140a023c8*/ loc_140A023C8: call nullsub_1
/*140a023cd*/  mov r15d, 1
/*140a023d3*/  mov edx, 1
/*140a023d8*/  mov rcx, rsi
/*140a023db*/  call sub_140001650
/*140a023e0*/  test rax, rax
/*140a023e3*/  jz loc_140A06365
/*140a023e9*/  mov [rbp+310h+var_260], rax
/*140a023f0*/  mov rcx, rax
/*140a023f3*/  mov rdx, r14
/*140a023f6*/  mov [rbp+310h+var_240], rsi
/*140a023fd*/  mov r8, rsi
/*140a02400*/  call sub_141684120
/*140a02405*/  mov dword ptr [rbp+310h+var_1E0], 0
/*140a0240f*/ loc_140A0240F: mov [rbp+310h+var_1D0], 0
/*140a0241a*/  mov [rbp+310h+var_1C8], 8
/*140a02425*/  mov [rbp+310h+var_1C0], 0
/*140a02430*/  mov [rbp+310h+var_230], 0
/*140a0243b*/  mov [rbp+310h+var_228], 1
/*140a02446*/  mov [rbp+310h+var_220], 0
/*140a02451*/  mov [rbp+310h+var_128], 0FFFFFFFFFFFFFFFFh
/*140a0245c*/ loc_140A0245C: lea rcx, aChoices_1; "choices"
/*140a02463*/  mov edx, 7
/*140a02468*/  mov r8, rdi
/*140a0246b*/  call sub_141433D50
/*140a02470*/  nop
/*140a02471*/  mov rsi, 0FFFFFFFFFFFFFFFFh
/*140a02478*/  test rax, rax
/*140a0247b*/  jz short loc_140A024F0
/*140a0247d*/  cmp byte ptr [rax], 4
/*140a02480*/  jnz short loc_140A024F0
/*140a02482*/  cmp qword ptr [rax+18h], 0
/*140a02487*/  jz short loc_140A024F0
/*140a02489*/  mov r14, [rax+10h]
/*140a0248d*/  test r14, r14
/*140a02490*/  jz short loc_140A024F0
/*140a02492*/  mov [rbp+310h+var_128], 0FFFFFFFFFFFFFFFFh
/*140a0249d*/  lea rcx, aFinishReason; "finish_reason"
/*140a024a4*/  mov edx, 0Dh
/*140a024a9*/  mov r8, r14
/*140a024ac*/  call sub_141433D50
/*140a024b1*/  nop
/*140a024b2*/  test rax, rax
/*140a024b5*/  jz loc_140A025A4
/*140a024bb*/  cmp byte ptr [rax], 3
/*140a024be*/  jnz loc_140A025A4
/*140a024c4*/  mov rsi, [rax+18h]
/*140a024c8*/  test rsi, rsi
/*140a024cb*/  jns loc_140A02937
/*140a024d1*/  xor r12d, r12d
/*140a024d4*/ loc_140A024D4: mov [rbp+310h+var_128], 0FFFFFFFFFFFFFFFFh
/*140a024df*/  mov rcx, r12
/*140a024e2*/  mov rdx, rsi
/*140a024e5*/  call sub_1416C2D4B
/*140a024eb*/  jmp loc_140A06836
/*140a024f0*/ loc_140A024F0: cmp [rbp+310h+var_1C0], 0
/*140a024f8*/  mov [rbp+310h+var_108], rsi
/*140a024ff*/  mov [rbp+310h+var_118], rax
/*140a02506*/  jnz loc_140A0518C
/*140a0250c*/ loc_140A0250C: mov [rbp+310h+var_140], rax
/*140a02513*/  mov [rbp+310h+var_128], rsi
/*140a0251a*/  lea rcx, aBaseResp; "base_resp"
/*140a02521*/  mov edx, 9
/*140a02526*/  mov r8, rdi
/*140a02529*/  call sub_141433D50
/*140a0252e*/  nop
/*140a0252f*/  mov rbx, rax
/*140a02532*/  test rax, rax
/*140a02535*/  mov rsi, [rbp+310h+var_108]
/*140a0253c*/  mov rax, [rbp+310h+var_118]
/*140a02543*/  jz loc_140A0518C
/*140a02549*/  mov [rbp+310h+var_140], rax
/*140a02550*/  mov [rbp+310h+var_128], rsi
/*140a02557*/  lea rcx, aStatusCode; "status_code"
/*140a0255e*/  mov edx, 0Bh
/*140a02563*/  mov r8, rbx
/*140a02566*/  call sub_141433D50
/*140a0256b*/  nop
/*140a0256c*/  test rax, rax
/*140a0256f*/  mov rsi, [rbp+310h+var_108]
/*140a02576*/  jz loc_140A05185
/*140a0257c*/  cmp byte ptr [rax], 2
/*140a0257f*/  jnz loc_140A05185
/*140a02585*/  mov rcx, [rax+8]
/*140a02589*/  test rcx, rcx
/*140a0258c*/  jz loc_140A0297B
/*140a02592*/  cmp ecx, 2
/*140a02595*/  jz loc_140A05185
/*140a0259b*/  mov rax, [rax+10h]
/*140a0259f*/  jmp loc_140A02988
/*140a025a4*/ loc_140A025A4: mov [rbp+310h+var_118], rax
/*140a025ab*/  mov [rbp+310h+var_140], rax
/*140a025b2*/  mov [rbp+310h+var_108], rsi
/*140a025b9*/  mov [rbp+310h+var_128], rsi
/*140a025c0*/  lea rcx, aMessage_2; "message"
/*140a025c7*/  mov edx, 7
/*140a025cc*/  mov r8, r14
/*140a025cf*/  call sub_141433D50
/*140a025d4*/  nop
/*140a025d5*/  mov r14, rax
/*140a025d8*/  test rax, rax
/*140a025db*/  jz loc_140A04E49
/*140a025e1*/  mov rax, [rbp+310h+var_118]
/*140a025e8*/  mov [rbp+310h+var_140], rax
/*140a025ef*/  mov rax, [rbp+310h+var_108]
/*140a025f6*/  mov [rbp+310h+var_128], rax
/*140a025fd*/  lea rcx, [rbp+310h+var_200]
/*140a02604*/  mov rdx, r14
/*140a02607*/  call sub_140A5ED90
/*140a0260c*/  nop
/*140a0260d*/  mov rdx, qword ptr [rbp+310h+var_200]
/*140a02614*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*140a02618*/  mov rsi, [rbp+310h+var_108]
/*140a0261f*/  jz loc_140A02852
/*140a02625*/ loc_140A02625: mov rcx, qword ptr [rbp+310h+var_200+8]
/*140a0262c*/  mov r15, [rbp+310h+var_1F0]
/*140a02633*/  test r15, r15
/*140a02636*/  jz loc_140A03240
/*140a0263c*/  mov [rbp+310h+var_160], rcx
/*140a02643*/  mov [rbp+310h+var_168], rdx
/*140a0264a*/  mov qword ptr [rbp+310h+var_1B8], 0
/*140a02655*/  mov [rbp+310h+var_1A8], 0
/*140a02660*/  call nullsub_1
/*140a02665*/  mov ecx, 4
/*140a0266a*/  mov edx, 1
/*140a0266f*/  call sub_140001650
/*140a02674*/  test rax, rax
/*140a02677*/  jz loc_140A064D2
/*140a0267d*/  mov dword ptr [rax], 65707974h
/*140a02683*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a0268e*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02695*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a026a0*/  call nullsub_1
/*140a026a5*/  mov ecx, 9
/*140a026aa*/  mov edx, 1
/*140a026af*/  call sub_140001650
/*140a026b4*/  test rax, rax
/*140a026b7*/  mov qword ptr [rbp+310h+var_138], rax
/*140a026be*/  jz loc_140A064E7
/*140a026c4*/  mov [rbp+310h+var_258], r15
/*140a026cb*/  mov rcx, 6E696E6F73616572h
/*140a026d5*/  mov [rax], rcx
/*140a026d8*/  mov byte ptr [rax+8], 67h ; 'g'
/*140a026dc*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a026e3*/  mov qword ptr [rbp+310h+var_B0+8], 9
/*140a026ee*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a026f5*/  mov qword ptr [rbp+310h+var_A0+8], 9
/*140a02700*/ loc_140A02700: lea r12, [rbp+310h+var_100]
/*140a02707*/  lea rdx, [rbp+310h+var_1B8]
/*140a0270e*/  lea r8, [rbp+310h+var_E0]
/*140a02715*/  lea r9, [rbp+310h+var_B0]
/*140a0271c*/  mov rcx, r12
/*140a0271f*/  call sub_140307860
/*140a02724*/  nop
/*140a02725*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0272c*/  jz short loc_140A0273B
/*140a0272e*/ loc_140A0272E: lea rcx, [rbp+310h+var_100]
/*140a02735*/  call sub_1400104F0
/*140a0273a*/  nop
/*140a0273b*/ loc_140A0273B: call nullsub_1
/*140a02740*/  mov ecx, 2
/*140a02745*/  mov edx, 1
/*140a0274a*/  call sub_140001650
/*140a0274f*/  test rax, rax
/*140a02752*/  jz loc_140A064FC
/*140a02758*/  mov word ptr [rax], 6469h
/*140a0275d*/  mov qword ptr [rbp+310h+var_E0], 2
/*140a02768*/  mov [rbp+310h+var_250], rax
/*140a0276f*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02776*/  mov qword ptr [rbp+310h+var_D0], 2
/*140a02781*/ loc_140A02781: lea rcx, [rbp+310h+var_B0]
/*140a02788*/  call sub_141356270
/*140a0278d*/  nop
/*140a0278e*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a02796*/  movdqa [rbp+310h+var_1A0], xmm0
/*140a0279e*/  mov qword ptr [rbp+310h+var_100], 0
/*140a027a9*/  mov qword ptr [rbp+310h+var_100+8], 1
/*140a027b4*/  mov qword ptr [rbp+310h+var_F0], 0
/*140a027bf*/  mov qword ptr [rbp+310h+var_A0], 60000020h
/*140a027ca*/  mov qword ptr [rbp+310h+var_B0], r12
/*140a027d1*/  lea rax, off_1417A9B00
/*140a027d8*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a027df*/ loc_140A027DF: lea rcx, [rbp+310h+var_1A0]
/*140a027e6*/  lea rdx, [rbp+310h+var_B0]
/*140a027ed*/  call sub_1413567D0
/*140a027f2*/  nop
/*140a027f3*/  test al, al
/*140a027f5*/  jnz loc_140A06100
/*140a027fb*/  mov rax, qword ptr [rbp+310h+var_100]
/*140a02802*/  mov qword ptr [rbp+310h+var_138], rax
/*140a02809*/  mov rcx, qword ptr [rbp+310h+var_100+8]
/*140a02810*/  mov rdx, qword ptr [rbp+310h+var_F0]
/*140a02817*/  cmp rdx, 0Ch
/*140a0281b*/  mov qword ptr [rbp+310h+var_138+8], rcx
/*140a02822*/  jbe loc_140A029F1
/*140a02828*/  cmp byte ptr [rcx+0Ch], 0BFh
/*140a0282c*/  jg loc_140A029F7
/*140a02832*/ loc_140A02832: lea rax, off_1417A7D90; "src\\core\\relay\\translator.rs"
/*140a02839*/  mov [rsp+390h+var_370], rax
/*140a0283e*/  mov r9d, 0Ch
/*140a02844*/  xor r8d, r8d
/*140a02847*/  call sub_1416C2F60
/*140a0284d*/  jmp loc_140A06836
/*140a02852*/ loc_140A02852: mov rax, [rbp+310h+var_118]
/*140a02859*/  mov [rbp+310h+var_140], rax
/*140a02860*/  mov [rbp+310h+var_128], rsi
/*140a02867*/ loc_140A02867: lea rcx, aContent_6; "content"
/*140a0286e*/  mov edx, 7
/*140a02873*/  mov r8, r14
/*140a02876*/  call sub_141433D50
/*140a0287b*/  nop
/*140a0287c*/  test rax, rax
/*140a0287f*/  mov rsi, [rbp+310h+var_108]
/*140a02886*/  jz loc_140A036A9
/*140a0288c*/  cmp byte ptr [rax], 3
/*140a0288f*/  jnz loc_140A036A9
/*140a02895*/  mov rdx, [rax+10h]
/*140a02899*/  mov r8, [rax+18h]
/*140a0289d*/  mov rax, [rbp+310h+var_118]
/*140a028a4*/  mov [rbp+310h+var_140], rax
/*140a028ab*/  mov [rbp+310h+var_128], rsi
/*140a028b2*/  lea rcx, [rbp+310h+var_B0]
/*140a028b9*/  call sub_140A01ED0
/*140a028be*/  nop
/*140a028bf*/ loc_140A028BF: mov r15, qword ptr [rbp+310h+var_B0]
/*140a028c6*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*140a028ca*/  jz loc_140A036A2
/*140a028d0*/  mov rdx, qword ptr [rbp+310h+var_A0+8]
/*140a028d7*/  mov rcx, [rbp+310h+var_90]
/*140a028de*/  cmp qword ptr [rbp+310h+var_A0], 0
/*140a028e6*/  jz loc_140A03675
/*140a028ec*/  mov rax, qword ptr [rbp+310h+var_A0]
/*140a028f3*/  mov [rbp+310h+var_1F0], rax
/*140a028fa*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a02902*/  movdqa [rbp+310h+var_200], xmm0
/*140a0290a*/  test rdx, rdx
/*140a0290d*/  mov rsi, [rbp+310h+var_108]
/*140a02914*/  jz short loc_140A02921
/*140a02916*/  mov r8d, 1
/*140a0291c*/  call sub_140001660
/*140a02921*/ loc_140A02921: mov rdx, qword ptr [rbp+310h+var_200]
/*140a02928*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*140a0292c*/  jnz loc_140A02625
/*140a02932*/  jmp loc_140A036A9
/*140a02937*/ loc_140A02937: jz loc_140A02AE7
/*140a0293d*/  mov r15, [rax+10h]
/*140a02941*/  call nullsub_1
/*140a02946*/  mov r12d, 1
/*140a0294c*/  mov edx, 1
/*140a02951*/  mov rcx, rsi
/*140a02954*/  call sub_140001650
/*140a02959*/  test rax, rax
/*140a0295c*/  jz loc_140A024D4
/*140a02962*/  mov rcx, rax
/*140a02965*/  mov rdx, r15
/*140a02968*/  mov r8, rsi
/*140a0296b*/  mov r15, rax
/*140a0296e*/  call sub_141684120
/*140a02973*/  mov rax, r15
/*140a02976*/  jmp loc_140A025A4
/*140a0297b*/ loc_140A0297B: mov rax, [rax+10h]
/*140a0297f*/  test rax, rax
/*140a02982*/  js loc_140A05185
/*140a02988*/ loc_140A02988: mov [rbp+310h+var_2B8], rax
/*140a0298c*/  test rax, rax
/*140a0298f*/  jz loc_140A05185
/*140a02995*/  mov rax, [rbp+310h+var_118]
/*140a0299c*/  mov [rbp+310h+var_140], rax
/*140a029a3*/  mov [rbp+310h+var_128], rsi
/*140a029aa*/ loc_140A029AA: lea rcx, aStatusMsg; "status_msg"
/*140a029b1*/  mov edx, 0Ah
/*140a029b6*/  mov r8, rbx
/*140a029b9*/  call sub_141433D50
/*140a029be*/  nop
/*140a029bf*/  mov ecx, 16h
/*140a029c4*/  lea rdx, unk_1417A7DDE
/*140a029cb*/  test rax, rax
/*140a029ce*/  jz loc_140A02AF3
/*140a029d4*/  cmp byte ptr [rax], 3
/*140a029d7*/  mov r8, [rbp+310h+var_108]
/*140a029de*/  jnz loc_140A02AFA
/*140a029e4*/  mov rdx, [rax+10h]
/*140a029e8*/  mov rcx, [rax+18h]
/*140a029ec*/  jmp loc_140A02AFA
/*140a029f1*/ loc_140A029F1: jnz loc_140A02832
/*140a029f7*/ loc_140A029F7: mov qword ptr [rbp+310h+var_158], rcx
/*140a029fe*/  mov qword ptr [rbp+310h+var_158+8], 0Ch
/*140a02a09*/  lea rax, [rbp+310h+var_158]
/*140a02a10*/  mov qword ptr [rbp+310h+var_100], rax
/*140a02a17*/  lea rax, sub_14041F680
/*140a02a1e*/  mov qword ptr [rbp+310h+var_100+8], rax
/*140a02a25*/ loc_140A02A25: lea rdx, unk_1417A5EC8
/*140a02a2c*/  lea rcx, [rbp+310h+var_B0]
/*140a02a33*/  lea r8, [rbp+310h+var_100]
/*140a02a3a*/  call sub_14149C0F0
/*140a02a3f*/  nop
/*140a02a40*/  mov rdx, qword ptr [rbp+310h+var_138]
/*140a02a47*/  test rdx, rdx
/*140a02a4a*/  jz short loc_140A02A5E
/*140a02a4c*/  mov r8d, 1
/*140a02a52*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a02a59*/  call sub_140001660
/*140a02a5e*/ loc_140A02A5E: mov rax, qword ptr [rbp+310h+var_B0]
/*140a02a65*/  mov rcx, qword ptr [rbp+310h+var_B0+8]
/*140a02a6c*/  mov qword ptr [rbp+310h+var_138+8], rcx
/*140a02a73*/  mov r12, qword ptr [rbp+310h+var_A0]
/*140a02a7a*/  test r12, r12
/*140a02a7d*/  mov qword ptr [rbp+310h+var_138], rax
/*140a02a84*/  jns short loc_140A02AA1
/*140a02a86*/  xor r14d, r14d
/*140a02a89*/ loc_140A02A89: mov [rbp+310h+var_169], 1
/*140a02a90*/ loc_140A02A90: mov rcx, r14
/*140a02a93*/  mov rdx, r12
/*140a02a96*/  call sub_1416C2D4B
/*140a02a9c*/ loc_140A02A9C: jmp loc_140A06836
/*140a02aa1*/ loc_140A02AA1: mov rsi, r13
/*140a02aa4*/  jz loc_140A02D89
/*140a02aaa*/  mov r15, r14
/*140a02aad*/  call nullsub_1
/*140a02ab2*/  mov r14d, 1
/*140a02ab8*/  mov edx, 1
/*140a02abd*/  mov rcx, r12
/*140a02ac0*/  call sub_140001650
/*140a02ac5*/  test rax, rax
/*140a02ac8*/  jz short loc_140A02A89
/*140a02aca*/  mov r13, rax
/*140a02acd*/  mov rcx, rax
/*140a02ad0*/  mov rdx, qword ptr [rbp+310h+var_138+8]
/*140a02ad7*/  mov r8, r12
/*140a02ada*/  call sub_141684120
/*140a02adf*/  mov r14, r15
/*140a02ae2*/  jmp loc_140A02D8F
/*140a02ae7*/ loc_140A02AE7: mov eax, 1
/*140a02aec*/  xor esi, esi
/*140a02aee*/  jmp loc_140A025A4
/*140a02af3*/ loc_140A02AF3: mov r8, [rbp+310h+var_108]
/*140a02afa*/ loc_140A02AFA: mov qword ptr [rbp+310h+var_200], rdx
/*140a02b01*/  mov qword ptr [rbp+310h+var_200+8], rcx
/*140a02b08*/  lea rax, [rbp+310h+var_2B8]
/*140a02b0c*/  mov qword ptr [rbp+310h+var_B0], rax
/*140a02b13*/  lea rax, sub_1414AC5F0
/*140a02b1a*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a02b21*/  lea rax, [rbp+310h+var_200]
/*140a02b28*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a02b2f*/  lea rax, sub_14041F680
/*140a02b36*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a02b3d*/  mov rax, [rbp+310h+var_118]
/*140a02b44*/  mov [rbp+310h+var_140], rax
/*140a02b4b*/  mov [rbp+310h+var_128], r8
/*140a02b52*/ loc_140A02B52: lea rdx, unk_1417A7DF4
/*140a02b59*/  lea rcx, [rbp+310h+var_100]
/*140a02b60*/  lea r8, [rbp+310h+var_B0]
/*140a02b67*/  call sub_14149C0F0
/*140a02b6c*/  nop
/*140a02b6d*/  mov rax, qword ptr [rbp+310h+var_100]
/*140a02b74*/  mov [rbp+310h+var_160], rax
/*140a02b7b*/  mov rax, qword ptr [rbp+310h+var_100+8]
/*140a02b82*/  mov qword ptr [rbp+310h+var_138], rax
/*140a02b89*/  mov rbx, qword ptr [rbp+310h+var_F0]
/*140a02b90*/  mov qword ptr [rbp+310h+var_1B8], 0
/*140a02b9b*/  mov [rbp+310h+var_1A8], 0
/*140a02ba6*/  call nullsub_1
/*140a02bab*/  mov ecx, 4
/*140a02bb0*/  mov edx, 1
/*140a02bb5*/  call sub_140001650
/*140a02bba*/  test rax, rax
/*140a02bbd*/  jz loc_140A06511
/*140a02bc3*/  mov dword ptr [rax], 65707974h
/*140a02bc9*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a02bd4*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02bdb*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a02be6*/  call nullsub_1
/*140a02beb*/  mov ecx, 7
/*140a02bf0*/  mov edx, 1
/*140a02bf5*/  call sub_140001650
/*140a02bfa*/  test rax, rax
/*140a02bfd*/  mov [rbp+310h+var_168], rax
/*140a02c04*/  jz loc_140A06526
/*140a02c0a*/  mov dword ptr [rax+3], 65676173h
/*140a02c11*/  mov dword ptr [rax], 7373656Dh
/*140a02c17*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a02c1e*/  mov qword ptr [rbp+310h+var_B0+8], 7
/*140a02c29*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a02c30*/  mov qword ptr [rbp+310h+var_A0+8], 7
/*140a02c3b*/ loc_140A02C3B: lea rcx, [rbp+310h+var_100]
/*140a02c42*/  lea rdx, [rbp+310h+var_1B8]
/*140a02c49*/  lea r8, [rbp+310h+var_E0]
/*140a02c50*/  lea r9, [rbp+310h+var_B0]
/*140a02c57*/  call sub_140307860
/*140a02c5c*/  nop
/*140a02c5d*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a02c64*/  jz short loc_140A02C73
/*140a02c66*/ loc_140A02C66: lea rcx, [rbp+310h+var_100]
/*140a02c6d*/  call sub_1400104F0
/*140a02c72*/  nop
/*140a02c73*/ loc_140A02C73: call nullsub_1
/*140a02c78*/  mov ecx, 2
/*140a02c7d*/  mov edx, 1
/*140a02c82*/  call sub_140001650
/*140a02c87*/  test rax, rax
/*140a02c8a*/  jz loc_140A0653B
/*140a02c90*/  mov word ptr [rax], 6469h
/*140a02c95*/  mov qword ptr [rbp+310h+var_E0], 2
/*140a02ca0*/  mov [rbp+310h+var_168], rax
/*140a02ca7*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02cae*/  mov qword ptr [rbp+310h+var_D0], 2
/*140a02cb9*/ loc_140A02CB9: lea rcx, [rbp+310h+var_B0]
/*140a02cc0*/  call sub_141356270
/*140a02cc5*/  nop
/*140a02cc6*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a02cce*/  movdqa [rbp+310h+var_1A0], xmm0
/*140a02cd6*/  lea rax, [rbp+310h+var_1A0]
/*140a02cdd*/  mov qword ptr [rbp+310h+var_100], rax
/*140a02ce4*/  lea rax, sub_140421AE0
/*140a02ceb*/  mov qword ptr [rbp+310h+var_100+8], rax
/*140a02cf2*/  lea rdx, unk_1417A59B0
/*140a02cf9*/  lea rcx, [rbp+310h+var_B0]
/*140a02d00*/  lea r8, [rbp+310h+var_100]
/*140a02d07*/  call sub_14149C0F0
/*140a02d0c*/  nop
/*140a02d0d*/  mov rax, qword ptr [rbp+310h+var_B0]
/*140a02d14*/  mov rsi, qword ptr [rbp+310h+var_B0+8]
/*140a02d1b*/  mov r14, qword ptr [rbp+310h+var_A0]
/*140a02d22*/  test r14, r14
/*140a02d25*/  mov [rbp+310h+var_168], rax
/*140a02d2c*/  mov qword ptr [rbp+310h+var_138+8], rsi
/*140a02d33*/  jns short loc_140A02D50
/*140a02d35*/  xor r12d, r12d
/*140a02d38*/ loc_140A02D38: mov [rbp+310h+var_16F], 1
/*140a02d3f*/ loc_140A02D3F: mov rcx, r12
/*140a02d42*/  mov rdx, r14
/*140a02d45*/  call sub_1416C2D4B
/*140a02d4b*/ loc_140A02D4B: jmp loc_140A06836
/*140a02d50*/ loc_140A02D50: jz loc_140A03259
/*140a02d56*/  call nullsub_1
/*140a02d5b*/  mov r12d, 1
/*140a02d61*/  mov edx, 1
/*140a02d66*/  mov rcx, r14
/*140a02d69*/  call sub_140001650
/*140a02d6e*/  test rax, rax
/*140a02d71*/  jz short loc_140A02D38
/*140a02d73*/  mov r15, rax
/*140a02d76*/  mov rcx, rax
/*140a02d79*/  mov rdx, rsi
/*140a02d7c*/  mov r8, r14
/*140a02d7f*/  call sub_141684120
/*140a02d84*/  jmp loc_140A0325F
/*140a02d89*/ loc_140A02D89: mov r13d, 1
/*140a02d8f*/ loc_140A02D8F: mov byte ptr [rbp+310h+var_B0], 3
/*140a02d96*/  mov qword ptr [rbp+310h+var_B0+8], r12
/*140a02d9d*/  mov qword ptr [rbp+310h+var_A0], r13
/*140a02da4*/  mov qword ptr [rbp+310h+var_A0+8], r12
/*140a02dab*/  mov [rbp+310h+var_169], 0
/*140a02db2*/ loc_140A02DB2: lea rcx, [rbp+310h+var_100]
/*140a02db9*/  lea rdx, [rbp+310h+var_1B8]
/*140a02dc0*/  lea r8, [rbp+310h+var_E0]
/*140a02dc7*/  lea r9, [rbp+310h+var_B0]
/*140a02dce*/  call sub_140307860
/*140a02dd3*/  nop
/*140a02dd4*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a02ddb*/  mov r13, rsi
/*140a02dde*/  jz short loc_140A02DED
/*140a02de0*/ loc_140A02DE0: lea rcx, [rbp+310h+var_100]
/*140a02de7*/  call sub_1400104F0
/*140a02dec*/  nop
/*140a02ded*/ loc_140A02DED: mov rdx, qword ptr [rbp+310h+var_138]
/*140a02df4*/  test rdx, rdx
/*140a02df7*/  jz short loc_140A02E0B
/*140a02df9*/  mov r8d, 1
/*140a02dff*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a02e06*/  call sub_140001660
/*140a02e0b*/ loc_140A02E0B: call nullsub_1
/*140a02e10*/  mov ecx, 6
/*140a02e15*/  mov edx, 1
/*140a02e1a*/  call sub_140001650
/*140a02e1f*/  test rax, rax
/*140a02e22*/  jz loc_140A06550
/*140a02e28*/  mov word ptr [rax+4], 7375h
/*140a02e2e*/  mov dword ptr [rax], 74617473h
/*140a02e34*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a02e3f*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02e46*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a02e51*/  call nullsub_1
/*140a02e56*/  mov ecx, 9
/*140a02e5b*/  mov edx, 1
/*140a02e60*/  call sub_140001650
/*140a02e65*/  test rax, rax
/*140a02e68*/  mov qword ptr [rbp+310h+var_138], rax
/*140a02e6f*/  jz loc_140A06565
/*140a02e75*/  mov rcx, 6574656C706D6F63h
/*140a02e7f*/  mov [rax], rcx
/*140a02e82*/  mov byte ptr [rax+8], 64h ; 'd'
/*140a02e86*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a02e8d*/  mov qword ptr [rbp+310h+var_B0+8], 9
/*140a02e98*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a02e9f*/  mov qword ptr [rbp+310h+var_A0+8], 9
/*140a02eaa*/ loc_140A02EAA: lea rcx, [rbp+310h+var_100]
/*140a02eb1*/  lea rdx, [rbp+310h+var_1B8]
/*140a02eb8*/  lea r8, [rbp+310h+var_E0]
/*140a02ebf*/  lea r9, [rbp+310h+var_B0]
/*140a02ec6*/  call sub_140307860
/*140a02ecb*/  nop
/*140a02ecc*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a02ed3*/  jz short loc_140A02EE2
/*140a02ed5*/ loc_140A02ED5: lea rcx, [rbp+310h+var_100]
/*140a02edc*/  call sub_1400104F0
/*140a02ee1*/  nop
/*140a02ee2*/ loc_140A02EE2: call nullsub_1
/*140a02ee7*/  mov ecx, 7
/*140a02eec*/  mov edx, 1
/*140a02ef1*/  call sub_140001650
/*140a02ef6*/  test rax, rax
/*140a02ef9*/  jz loc_140A0657A
/*140a02eff*/  mov dword ptr [rax+3], 7972616Dh
/*140a02f06*/  mov dword ptr [rax], 6D6D7573h
/*140a02f0c*/  mov qword ptr [rbp+310h+var_158], 7
/*140a02f17*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a02f1e*/  mov [rbp+310h+var_148], 7
/*140a02f29*/  call nullsub_1
/*140a02f2e*/  mov ecx, 20h ; ' '
/*140a02f33*/  mov edx, 8
/*140a02f38*/  call sub_140001650
/*140a02f3d*/  test rax, rax
/*140a02f40*/  jz loc_140A06131
/*140a02f46*/  mov rsi, rax
/*140a02f49*/  mov qword ptr [rbp+310h+var_1A0], 0
/*140a02f54*/  mov qword ptr [rbp+310h+var_190], 0
/*140a02f5f*/  call nullsub_1
/*140a02f64*/  mov ecx, 4
/*140a02f69*/  mov edx, 1
/*140a02f6e*/  call sub_140001650
/*140a02f73*/  test rax, rax
/*140a02f76*/  mov qword ptr [rbp+310h+var_138], rsi
/*140a02f7d*/  jz loc_140A0658F
/*140a02f83*/  mov dword ptr [rax], 65707974h
/*140a02f89*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a02f94*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a02f9b*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a02fa6*/  call nullsub_1
/*140a02fab*/  mov ecx, 0Ch
/*140a02fb0*/  mov edx, 1
/*140a02fb5*/  call sub_140001650
/*140a02fba*/  test rax, rax
/*140a02fbd*/  mov qword ptr [rbp+310h+var_138+8], rax
/*140a02fc4*/  jz loc_140A065A4
/*140a02fca*/  mov rcx, 5F7972616D6D7573h
/*140a02fd4*/  mov [rax], rcx
/*140a02fd7*/  mov dword ptr [rax+8], 74786574h
/*140a02fde*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a02fe5*/  mov qword ptr [rbp+310h+var_B0+8], 0Ch
/*140a02ff0*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a02ff7*/  mov qword ptr [rbp+310h+var_A0+8], 0Ch
/*140a03002*/ loc_140A03002: lea rcx, [rbp+310h+var_100]
/*140a03009*/  lea rdx, [rbp+310h+var_1A0]
/*140a03010*/  lea r8, [rbp+310h+var_E0]
/*140a03017*/  lea r9, [rbp+310h+var_B0]
/*140a0301e*/  call sub_140307860
/*140a03023*/  nop
/*140a03024*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0302b*/  jz short loc_140A0303A
/*140a0302d*/ loc_140A0302D: lea rcx, [rbp+310h+var_100]
/*140a03034*/  call sub_1400104F0
/*140a03039*/  nop
/*140a0303a*/ loc_140A0303A: call nullsub_1
/*140a0303f*/  mov ecx, 4
/*140a03044*/  mov edx, 1
/*140a03049*/  call sub_140001650
/*140a0304e*/  test rax, rax
/*140a03051*/  jz loc_140A065B9
/*140a03057*/  mov dword ptr [rax], 74786574h
/*140a0305d*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03068*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a0306f*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a0307a*/  call nullsub_1
/*140a0307f*/  mov edx, 1
/*140a03084*/  mov rsi, [rbp+310h+var_258]
/*140a0308b*/  mov rcx, rsi
/*140a0308e*/  call sub_140001650
/*140a03093*/  test rax, rax
/*140a03096*/  mov qword ptr [rbp+310h+var_138+8], rax
/*140a0309d*/  jz loc_140A065CE
/*140a030a3*/  mov r15, rax
/*140a030a6*/  mov rcx, rax
/*140a030a9*/  mov rdx, [rbp+310h+var_160]
/*140a030b0*/  mov r8, rsi
/*140a030b3*/  call sub_141684120
/*140a030b8*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a030bf*/  mov qword ptr [rbp+310h+var_B0+8], rsi
/*140a030c6*/  mov qword ptr [rbp+310h+var_A0], r15
/*140a030cd*/  mov qword ptr [rbp+310h+var_A0+8], rsi
/*140a030d4*/ loc_140A030D4: lea rcx, [rbp+310h+var_100]
/*140a030db*/  lea rdx, [rbp+310h+var_1A0]
/*140a030e2*/  lea r8, [rbp+310h+var_E0]
/*140a030e9*/  lea r9, [rbp+310h+var_B0]
/*140a030f0*/  call sub_140307860
/*140a030f5*/  nop
/*140a030f6*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a030fd*/  jz short loc_140A0310C
/*140a030ff*/ loc_140A030FF: lea rcx, [rbp+310h+var_100]
/*140a03106*/  call sub_1400104F0
/*140a0310b*/  nop
/*140a0310c*/ loc_140A0310C: mov rax, qword ptr [rbp+310h+var_190]
/*140a03113*/  movups xmm0, [rbp+310h+var_1A0]
/*140a0311a*/  movups [rbp+310h+var_B0+7], xmm0
/*140a03121*/  mov qword ptr [rbp+310h+var_A0+7], rax
/*140a03128*/  mov rcx, qword ptr [rbp+310h+var_138]
/*140a0312f*/  mov byte ptr [rcx], 5
/*140a03132*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a0313a*/  mov rax, qword ptr [rbp+310h+var_B0+0Fh]
/*140a03141*/  mov [rcx+10h], rax
/*140a03145*/  mov rax, qword ptr [rbp+310h+var_A0+7]
/*140a0314c*/  mov [rcx+18h], rax
/*140a03150*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a03155*/  mov qword ptr [rbp+310h+var_B0+8], 1
/*140a03160*/  mov qword ptr [rbp+310h+var_A0], rcx
/*140a03167*/  mov qword ptr [rbp+310h+var_A0+8], 1
/*140a03172*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a03179*/  mov [rbp+310h+var_119], 0
/*140a03180*/ loc_140A03180: lea rcx, [rbp+310h+var_100]
/*140a03187*/  lea rdx, [rbp+310h+var_1B8]
/*140a0318e*/  lea r8, [rbp+310h+var_158]
/*140a03195*/  lea r9, [rbp+310h+var_B0]
/*140a0319c*/  call sub_140307860
/*140a031a1*/  nop
/*140a031a2*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a031a9*/  jz short loc_140A031B8
/*140a031ab*/ loc_140A031AB: lea rcx, [rbp+310h+var_100]
/*140a031b2*/  call sub_1400104F0
/*140a031b7*/  nop
/*140a031b8*/ loc_140A031B8: movdqu xmm0, [rbp+310h+var_1B8]
/*140a031c0*/  movdqu [rbp+310h+var_B0+8], xmm0
/*140a031c8*/  mov rax, [rbp+310h+var_1A8]
/*140a031cf*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a031d6*/  mov byte ptr [rbp+310h+var_B0], 5
/*140a031dd*/  mov rsi, [rbp+310h+var_1C0]
/*140a031e4*/  cmp rsi, [rbp+310h+var_1D0]
/*140a031eb*/  jnz short loc_140A031FA
/*140a031ed*/ loc_140A031ED: lea rcx, [rbp+310h+var_1D0]
/*140a031f4*/  call sub_1416890A0
/*140a031f9*/  nop
/*140a031fa*/ loc_140A031FA: mov rax, [rbp+310h+var_1C8]
/*140a03201*/  mov rcx, rsi
/*140a03204*/  shl rcx, 5
/*140a03208*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03210*/  movups xmm1, [rbp+310h+var_A0]
/*140a03217*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*140a0321c*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a03221*/  inc rsi
/*140a03224*/  mov [rbp+310h+var_1C0], rsi
/*140a0322b*/  mov rsi, [rbp+310h+var_108]
/*140a03232*/  mov rdx, [rbp+310h+var_168]
/*140a03239*/  mov rcx, [rbp+310h+var_160]
/*140a03240*/ loc_140A03240: test rdx, rdx
/*140a03243*/  jz loc_140A036A9
/*140a03249*/  mov r8d, 1
/*140a0324f*/  call sub_140001660
/*140a03254*/  jmp loc_140A036A9
/*140a03259*/ loc_140A03259: mov r15d, 1
/*140a0325f*/ loc_140A0325F: mov byte ptr [rbp+310h+var_B0], 3
/*140a03266*/  mov qword ptr [rbp+310h+var_B0+8], r14
/*140a0326d*/  mov qword ptr [rbp+310h+var_A0], r15
/*140a03274*/  mov qword ptr [rbp+310h+var_A0+8], r14
/*140a0327b*/  mov [rbp+310h+var_16F], 0
/*140a03282*/ loc_140A03282: lea rcx, [rbp+310h+var_100]
/*140a03289*/  lea rdx, [rbp+310h+var_1B8]
/*140a03290*/  lea r8, [rbp+310h+var_E0]
/*140a03297*/  lea r9, [rbp+310h+var_B0]
/*140a0329e*/  call sub_140307860
/*140a032a3*/  nop
/*140a032a4*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a032ab*/  jz short loc_140A032BA
/*140a032ad*/ loc_140A032AD: lea rcx, [rbp+310h+var_100]
/*140a032b4*/  call sub_1400104F0
/*140a032b9*/  nop
/*140a032ba*/ loc_140A032BA: mov rdx, [rbp+310h+var_168]
/*140a032c1*/  test rdx, rdx
/*140a032c4*/  jz short loc_140A032D8
/*140a032c6*/  mov r8d, 1
/*140a032cc*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a032d3*/  call sub_140001660
/*140a032d8*/ loc_140A032D8: call nullsub_1
/*140a032dd*/  mov ecx, 4
/*140a032e2*/  mov edx, 1
/*140a032e7*/  call sub_140001650
/*140a032ec*/  test rax, rax
/*140a032ef*/  jz loc_140A0669C
/*140a032f5*/  mov dword ptr [rax], 656C6F72h
/*140a032fb*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03306*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a0330d*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03318*/  call nullsub_1
/*140a0331d*/  mov ecx, 9
/*140a03322*/  mov edx, 1
/*140a03327*/  call sub_140001650
/*140a0332c*/  test rax, rax
/*140a0332f*/  mov [rbp+310h+var_168], rax
/*140a03336*/  jz loc_140A066B1
/*140a0333c*/  mov rcx, 6E61747369737361h
/*140a03346*/  mov [rax], rcx
/*140a03349*/  mov byte ptr [rax+8], 74h ; 't'
/*140a0334d*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a03354*/  mov qword ptr [rbp+310h+var_B0+8], 9
/*140a0335f*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a03366*/  mov qword ptr [rbp+310h+var_A0+8], 9
/*140a03371*/ loc_140A03371: lea rcx, [rbp+310h+var_100]
/*140a03378*/  lea rdx, [rbp+310h+var_1B8]
/*140a0337f*/  lea r8, [rbp+310h+var_E0]
/*140a03386*/  lea r9, [rbp+310h+var_B0]
/*140a0338d*/  call sub_140307860
/*140a03392*/  nop
/*140a03393*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0339a*/  jz short loc_140A033A9
/*140a0339c*/ loc_140A0339C: lea rcx, [rbp+310h+var_100]
/*140a033a3*/  call sub_1400104F0
/*140a033a8*/  nop
/*140a033a9*/ loc_140A033A9: call nullsub_1
/*140a033ae*/  mov ecx, 6
/*140a033b3*/  mov edx, 1
/*140a033b8*/  call sub_140001650
/*140a033bd*/  test rax, rax
/*140a033c0*/  jz loc_140A066C6
/*140a033c6*/  mov word ptr [rax+4], 7375h
/*140a033cc*/  mov dword ptr [rax], 74617473h
/*140a033d2*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a033dd*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a033e4*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a033ef*/  call nullsub_1
/*140a033f4*/  mov ecx, 9
/*140a033f9*/  mov edx, 1
/*140a033fe*/  call sub_140001650
/*140a03403*/  test rax, rax
/*140a03406*/  mov [rbp+310h+var_168], rax
/*140a0340d*/  jz loc_140A066DB
/*140a03413*/  mov rcx, 6574656C706D6F63h
/*140a0341d*/  mov [rax], rcx
/*140a03420*/  mov byte ptr [rax+8], 64h ; 'd'
/*140a03424*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a0342b*/  mov qword ptr [rbp+310h+var_B0+8], 9
/*140a03436*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a0343d*/  mov qword ptr [rbp+310h+var_A0+8], 9
/*140a03448*/ loc_140A03448: lea rcx, [rbp+310h+var_100]
/*140a0344f*/  lea rdx, [rbp+310h+var_1B8]
/*140a03456*/  lea r8, [rbp+310h+var_E0]
/*140a0345d*/  lea r9, [rbp+310h+var_B0]
/*140a03464*/  call sub_140307860
/*140a03469*/  nop
/*140a0346a*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a03471*/  jz short loc_140A03480
/*140a03473*/ loc_140A03473: lea rcx, [rbp+310h+var_100]
/*140a0347a*/  call sub_1400104F0
/*140a0347f*/  nop
/*140a03480*/ loc_140A03480: call nullsub_1
/*140a03485*/  mov ecx, 7
/*140a0348a*/  mov edx, 1
/*140a0348f*/  call sub_140001650
/*140a03494*/  test rax, rax
/*140a03497*/  jz loc_140A066F0
/*140a0349d*/  mov dword ptr [rax+3], 746E6574h
/*140a034a4*/  mov dword ptr [rax], 746E6F63h
/*140a034aa*/  mov qword ptr [rbp+310h+var_158], 7
/*140a034b5*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a034bc*/  mov [rbp+310h+var_148], 7
/*140a034c7*/  call nullsub_1
/*140a034cc*/  mov ecx, 20h ; ' '
/*140a034d1*/  mov edx, 8
/*140a034d6*/  call sub_140001650
/*140a034db*/  test rax, rax
/*140a034de*/  jz loc_140A06169
/*140a034e4*/  mov rsi, rax
/*140a034e7*/  mov qword ptr [rbp+310h+var_1A0], 0
/*140a034f2*/  mov qword ptr [rbp+310h+var_190], 0
/*140a034fd*/  call nullsub_1
/*140a03502*/  mov ecx, 4
/*140a03507*/  mov edx, 1
/*140a0350c*/  call sub_140001650
/*140a03511*/  test rax, rax
/*140a03514*/  mov [rbp+310h+var_168], rsi
/*140a0351b*/  jz loc_140A06705
/*140a03521*/  mov dword ptr [rax], 65707974h
/*140a03527*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03532*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03539*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03544*/  call nullsub_1
/*140a03549*/  mov ecx, 0Bh
/*140a0354e*/  mov edx, 1
/*140a03553*/  call sub_140001650
/*140a03558*/  test rax, rax
/*140a0355b*/  mov qword ptr [rbp+310h+var_138+8], rax
/*140a03562*/  jz loc_140A0671A
/*140a03568*/  mov rcx, 745F74757074756Fh
/*140a03572*/  mov [rax], rcx
/*140a03575*/  mov dword ptr [rax+7], 74786574h
/*140a0357c*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a03583*/  mov qword ptr [rbp+310h+var_B0+8], 0Bh
/*140a0358e*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a03595*/  mov qword ptr [rbp+310h+var_A0+8], 0Bh
/*140a035a0*/ loc_140A035A0: lea rcx, [rbp+310h+var_100]
/*140a035a7*/  lea rdx, [rbp+310h+var_1A0]
/*140a035ae*/  lea r8, [rbp+310h+var_E0]
/*140a035b5*/  lea r9, [rbp+310h+var_B0]
/*140a035bc*/  call sub_140307860
/*140a035c1*/  nop
/*140a035c2*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a035c9*/  jz short loc_140A035D8
/*140a035cb*/ loc_140A035CB: lea rcx, [rbp+310h+var_100]
/*140a035d2*/  call sub_1400104F0
/*140a035d7*/  nop
/*140a035d8*/ loc_140A035D8: call nullsub_1
/*140a035dd*/  mov ecx, 4
/*140a035e2*/  mov edx, 1
/*140a035e7*/  call sub_140001650
/*140a035ec*/  test rax, rax
/*140a035ef*/  jz loc_140A0672F
/*140a035f5*/  mov dword ptr [rax], 74786574h
/*140a035fb*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03606*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a0360d*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03618*/  test rbx, rbx
/*140a0361b*/  jns short loc_140A03638
/*140a0361d*/  xor r15d, r15d
/*140a03620*/ loc_140A03620: mov [rbp+310h+var_170], 1
/*140a03627*/ loc_140A03627: mov rcx, r15
/*140a0362a*/  mov rdx, rbx
/*140a0362d*/  call sub_1416C2D4B
/*140a03633*/ loc_140A03633: jmp loc_140A06836
/*140a03638*/ loc_140A03638: jz loc_140A04EF0
/*140a0363e*/  call nullsub_1
/*140a03643*/  mov r15d, 1
/*140a03649*/  mov edx, 1
/*140a0364e*/  mov rcx, rbx
/*140a03651*/  call sub_140001650
/*140a03656*/  test rax, rax
/*140a03659*/  jz short loc_140A03620
/*140a0365b*/  mov r14, rax
/*140a0365e*/  mov rcx, rax
/*140a03661*/  mov rdx, qword ptr [rbp+310h+var_138]
/*140a03668*/  mov r8, rbx
/*140a0366b*/  call sub_141684120
/*140a03670*/  jmp loc_140A04EF6
/*140a03675*/ loc_140A03675: mov r12, qword ptr [rbp+310h+var_B0+8]
/*140a0367c*/  test rdx, rdx
/*140a0367f*/  jz short loc_140A0368C
/*140a03681*/  mov r8d, 1
/*140a03687*/  call sub_140001660
/*140a0368c*/ loc_140A0368C: test r15, r15
/*140a0368f*/  jz short loc_140A036A2
/*140a03691*/  mov r8d, 1
/*140a03697*/  mov rcx, r12
/*140a0369a*/  mov rdx, r15
/*140a0369d*/  call sub_140001660
/*140a036a2*/ loc_140A036A2: mov rsi, [rbp+310h+var_108]
/*140a036a9*/ loc_140A036A9: mov rax, [rbp+310h+var_118]
/*140a036b0*/  mov [rbp+310h+var_140], rax
/*140a036b7*/  mov [rbp+310h+var_128], rsi
/*140a036be*/ loc_140A036BE: lea rcx, aContent_6; "content"
/*140a036c5*/  mov edx, 7
/*140a036ca*/  mov r8, r14
/*140a036cd*/  call sub_141433D50
/*140a036d2*/  nop
/*140a036d3*/  test rax, rax
/*140a036d6*/  mov rsi, [rbp+310h+var_108]
/*140a036dd*/  jz loc_140A03FFB
/*140a036e3*/  cmp byte ptr [rax], 3
/*140a036e6*/  jnz loc_140A03FFB
/*140a036ec*/  mov r12, [rax+10h]
/*140a036f0*/  mov r8, [rax+18h]
/*140a036f4*/  mov rax, [rbp+310h+var_118]
/*140a036fb*/  mov [rbp+310h+var_140], rax
/*140a03702*/  mov [rbp+310h+var_128], rsi
/*140a03709*/  lea rcx, [rbp+310h+var_300]
/*140a0370d*/  mov rdx, r12
/*140a03710*/  mov r15, r8
/*140a03713*/  call sub_140A01ED0
/*140a03718*/  nop
/*140a03719*/ loc_140A03719: mov rdx, [rbp+310h+var_300]
/*140a0371d*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*140a03721*/  jz short loc_140A0375E
/*140a03723*/  lea rsi, [rbp+310h+var_2E8]
/*140a03727*/  test rdx, rdx
/*140a0372a*/  jz short loc_140A0373B
/*140a0372c*/  mov rcx, [rbp+310h+var_2F8]
/*140a03730*/  mov r8d, 1
/*140a03736*/  call sub_140001660
/*140a0373b*/ loc_140A0373B: mov r15, [rsi+10h]
/*140a0373f*/  mov [rbp+310h+var_1F0], r15
/*140a03746*/  movdqu xmm0, xmmword ptr [rsi]
/*140a0374a*/  movdqa [rbp+310h+var_200], xmm0
/*140a03752*/  mov rsi, [rbp+310h+var_108]
/*140a03759*/  jmp loc_140A037E5
/*140a0375e*/ loc_140A0375E: mov [rbp+310h+var_160], r14
/*140a03765*/  mov [rbp+310h+var_208], r13
/*140a0376c*/  mov [rsp+390h+var_370], 1
/*140a03775*/  lea rcx, [rbp+310h+var_B0]
/*140a0377c*/  mov r9d, 1
/*140a03782*/  mov rdx, r15
/*140a03785*/  xor r8d, r8d
/*140a03788*/  call sub_140388B60
/*140a0378d*/  mov r13, qword ptr [rbp+310h+var_B0+8]
/*140a03794*/  cmp dword ptr [rbp+310h+var_B0], 1
/*140a0379b*/  jz loc_140A062FF
/*140a037a1*/  mov r14, qword ptr [rbp+310h+var_A0]
/*140a037a8*/  test r15, r15
/*140a037ab*/  mov rsi, [rbp+310h+var_108]
/*140a037b2*/  jz short loc_140A037C2
/*140a037b4*/  mov rcx, r14
/*140a037b7*/  mov rdx, r12
/*140a037ba*/  mov r8, r15
/*140a037bd*/  call sub_141684120
/*140a037c2*/ loc_140A037C2: mov qword ptr [rbp+310h+var_200], r13
/*140a037c9*/  mov qword ptr [rbp+310h+var_200+8], r14
/*140a037d0*/  mov [rbp+310h+var_1F0], r15
/*140a037d7*/  mov r13, [rbp+310h+var_208]
/*140a037de*/  mov r14, [rbp+310h+var_160]
/*140a037e5*/ loc_140A037E5: test r15, r15
/*140a037e8*/  jz loc_140A03FDD
/*140a037ee*/  mov qword ptr [rbp+310h+var_1B8], 0
/*140a037f9*/  mov [rbp+310h+var_1A8], 0
/*140a03804*/  call nullsub_1
/*140a03809*/  mov ecx, 4
/*140a0380e*/  mov edx, 1
/*140a03813*/  call sub_140001650
/*140a03818*/  test rax, rax
/*140a0381b*/  jz loc_140A065F4
/*140a03821*/  mov dword ptr [rax], 65707974h
/*140a03827*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03832*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03839*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03844*/  mov [rbp+310h+var_109], 1
/*140a0384b*/ loc_140A0384B: lea rdx, off_1417A4660; "message"
/*140a03852*/  lea rcx, [rbp+310h+var_B0]
/*140a03859*/  call sub_140B56640
/*140a0385e*/  nop
/*140a0385f*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03866*/  jz loc_140A06185
/*140a0386c*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03874*/  movups xmm1, [rbp+310h+var_A0]
/*140a0387b*/  movaps [rbp+310h+var_F0], xmm1
/*140a03882*/  movdqa [rbp+310h+var_100], xmm0
/*140a0388a*/  mov [rbp+310h+var_109], 0
/*140a03891*/  lea rcx, [rbp+310h+var_B0]
/*140a03898*/  lea rdx, [rbp+310h+var_1B8]
/*140a0389f*/  lea r12, [rbp+310h+var_E0]
/*140a038a6*/  lea r9, [rbp+310h+var_100]
/*140a038ad*/  mov r8, r12
/*140a038b0*/  call sub_140307860
/*140a038b5*/  nop
/*140a038b6*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a038bd*/  jz short loc_140A038CC
/*140a038bf*/ loc_140A038BF: lea rcx, [rbp+310h+var_B0]
/*140a038c6*/  call sub_1400104F0
/*140a038cb*/  nop
/*140a038cc*/ loc_140A038CC: call nullsub_1
/*140a038d1*/  mov ecx, 2
/*140a038d6*/  mov edx, 1
/*140a038db*/  call sub_140001650
/*140a038e0*/  test rax, rax
/*140a038e3*/  jz loc_140A06609
/*140a038e9*/  mov word ptr [rax], 6469h
/*140a038ee*/  mov qword ptr [rbp+310h+var_1A0], 2
/*140a038f9*/  mov [rbp+310h+var_160], rax
/*140a03900*/  mov qword ptr [rbp+310h+var_1A0+8], rax
/*140a03907*/  mov qword ptr [rbp+310h+var_190], 2
/*140a03912*/ loc_140A03912: lea rcx, [rbp+310h+var_B0]
/*140a03919*/  call sub_141356270
/*140a0391e*/  nop
/*140a0391f*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03927*/  movdqa [rbp+310h+var_E0], xmm0
/*140a0392f*/  mov qword ptr [rbp+310h+var_100], r12
/*140a03936*/  lea rax, sub_140421AE0
/*140a0393d*/  mov qword ptr [rbp+310h+var_100+8], rax
/*140a03944*/  lea rdx, unk_1417A59B0
/*140a0394b*/  lea rcx, [rbp+310h+var_B0]
/*140a03952*/  lea r8, [rbp+310h+var_100]
/*140a03959*/  call sub_14149C0F0
/*140a0395e*/  nop
/*140a0395f*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03967*/  movdqa [rbp+310h+var_E0], xmm0
/*140a0396f*/  mov rax, qword ptr [rbp+310h+var_A0]
/*140a03976*/  mov qword ptr [rbp+310h+var_D0], rax
/*140a0397d*/  mov [rbp+310h+var_10A], 1
/*140a03984*/ loc_140A03984: lea rcx, [rbp+310h+var_B0]
/*140a0398b*/  lea rdx, [rbp+310h+var_E0]
/*140a03992*/  call sub_140B56520
/*140a03997*/  nop
/*140a03998*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a0399f*/  jz loc_140A061C4
/*140a039a5*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a039ad*/  movups xmm1, [rbp+310h+var_A0]
/*140a039b4*/  movaps [rbp+310h+var_F0], xmm1
/*140a039bb*/  movdqa [rbp+310h+var_100], xmm0
/*140a039c3*/  mov [rbp+310h+var_10A], 0
/*140a039ca*/  lea rcx, [rbp+310h+var_B0]
/*140a039d1*/  lea rdx, [rbp+310h+var_1B8]
/*140a039d8*/  lea r8, [rbp+310h+var_1A0]
/*140a039df*/  lea r9, [rbp+310h+var_100]
/*140a039e6*/  call sub_140307860
/*140a039eb*/  nop
/*140a039ec*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a039f3*/  jz short loc_140A03A02
/*140a039f5*/ loc_140A039F5: lea rcx, [rbp+310h+var_B0]
/*140a039fc*/  call sub_1400104F0
/*140a03a01*/  nop
/*140a03a02*/ loc_140A03A02: mov rdx, qword ptr [rbp+310h+var_E0]
/*140a03a09*/  test rdx, rdx
/*140a03a0c*/  jz short loc_140A03A20
/*140a03a0e*/  mov rcx, qword ptr [rbp+310h+var_E0+8]
/*140a03a15*/  mov r8d, 1
/*140a03a1b*/  call sub_140001660
/*140a03a20*/ loc_140A03A20: call nullsub_1
/*140a03a25*/  mov ecx, 4
/*140a03a2a*/  mov edx, 1
/*140a03a2f*/  call sub_140001650
/*140a03a34*/  test rax, rax
/*140a03a37*/  jz loc_140A0661E
/*140a03a3d*/  mov dword ptr [rax], 656C6F72h
/*140a03a43*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03a4e*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03a55*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03a60*/  mov [rbp+310h+var_10B], 1
/*140a03a67*/ loc_140A03A67: lea rdx, off_1417A4ED8; "assistant"
/*140a03a6e*/  lea rcx, [rbp+310h+var_B0]
/*140a03a75*/  call sub_140B56640
/*140a03a7a*/  nop
/*140a03a7b*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03a82*/  jz loc_140A06203
/*140a03a88*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03a90*/  movups xmm1, [rbp+310h+var_A0]
/*140a03a97*/  movaps [rbp+310h+var_F0], xmm1
/*140a03a9e*/  movdqa [rbp+310h+var_100], xmm0
/*140a03aa6*/  mov [rbp+310h+var_10B], 0
/*140a03aad*/  lea rcx, [rbp+310h+var_B0]
/*140a03ab4*/  lea rdx, [rbp+310h+var_1B8]
/*140a03abb*/  lea r8, [rbp+310h+var_E0]
/*140a03ac2*/  lea r9, [rbp+310h+var_100]
/*140a03ac9*/  call sub_140307860
/*140a03ace*/  nop
/*140a03acf*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03ad6*/  jz short loc_140A03AE5
/*140a03ad8*/ loc_140A03AD8: lea rcx, [rbp+310h+var_B0]
/*140a03adf*/  call sub_1400104F0
/*140a03ae4*/  nop
/*140a03ae5*/ loc_140A03AE5: call nullsub_1
/*140a03aea*/  mov ecx, 6
/*140a03aef*/  mov edx, 1
/*140a03af4*/  call sub_140001650
/*140a03af9*/  test rax, rax
/*140a03afc*/  jz loc_140A06633
/*140a03b02*/  mov word ptr [rax+4], 7375h
/*140a03b08*/  mov dword ptr [rax], 74617473h
/*140a03b0e*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a03b19*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03b20*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a03b2b*/  mov [rbp+310h+var_10C], 1
/*140a03b32*/ loc_140A03B32: lea rdx, off_1417A5B58; "completed"
/*140a03b39*/  lea rcx, [rbp+310h+var_B0]
/*140a03b40*/  call sub_140B56640
/*140a03b45*/  nop
/*140a03b46*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03b4d*/  jz loc_140A06242
/*140a03b53*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03b5b*/  movups xmm1, [rbp+310h+var_A0]
/*140a03b62*/  movaps [rbp+310h+var_F0], xmm1
/*140a03b69*/  movdqa [rbp+310h+var_100], xmm0
/*140a03b71*/  mov [rbp+310h+var_10C], 0
/*140a03b78*/  lea rcx, [rbp+310h+var_B0]
/*140a03b7f*/  lea rdx, [rbp+310h+var_1B8]
/*140a03b86*/  lea r8, [rbp+310h+var_E0]
/*140a03b8d*/  lea r9, [rbp+310h+var_100]
/*140a03b94*/  call sub_140307860
/*140a03b99*/  nop
/*140a03b9a*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03ba1*/  jz short loc_140A03BB0
/*140a03ba3*/ loc_140A03BA3: lea rcx, [rbp+310h+var_B0]
/*140a03baa*/  call sub_1400104F0
/*140a03baf*/  nop
/*140a03bb0*/ loc_140A03BB0: call nullsub_1
/*140a03bb5*/  mov ecx, 7
/*140a03bba*/  mov edx, 1
/*140a03bbf*/  call sub_140001650
/*140a03bc4*/  test rax, rax
/*140a03bc7*/  jz loc_140A06648
/*140a03bcd*/  mov dword ptr [rax+3], 746E6574h
/*140a03bd4*/  mov dword ptr [rax], 746E6F63h
/*140a03bda*/  mov qword ptr [rbp+310h+var_158], 7
/*140a03be5*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a03bec*/  mov [rbp+310h+var_148], 7
/*140a03bf7*/  call nullsub_1
/*140a03bfc*/  mov ecx, 20h ; ' '
/*140a03c01*/  mov edx, 8
/*140a03c06*/  call sub_140001650
/*140a03c0b*/  test rax, rax
/*140a03c0e*/  jz loc_140A0614D
/*140a03c14*/  mov [rbp+310h+var_160], rax
/*140a03c1b*/  mov qword ptr [rbp+310h+var_1A0], 0
/*140a03c26*/  mov qword ptr [rbp+310h+var_190], 0
/*140a03c31*/  call nullsub_1
/*140a03c36*/  mov ecx, 4
/*140a03c3b*/  mov edx, 1
/*140a03c40*/  call sub_140001650
/*140a03c45*/  test rax, rax
/*140a03c48*/  jz loc_140A0665D
/*140a03c4e*/  mov dword ptr [rax], 65707974h
/*140a03c54*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03c5f*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03c66*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03c71*/  mov [rbp+310h+var_10D], 1
/*140a03c78*/ loc_140A03C78: lea rdx, off_1417A5C20; "output_text"
/*140a03c7f*/  lea rcx, [rbp+310h+var_B0]
/*140a03c86*/  call sub_140B56640
/*140a03c8b*/  nop
/*140a03c8c*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03c93*/  jz loc_140A06281
/*140a03c99*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03ca1*/  movups xmm1, [rbp+310h+var_A0]
/*140a03ca8*/  movaps [rbp+310h+var_F0], xmm1
/*140a03caf*/  movdqa [rbp+310h+var_100], xmm0
/*140a03cb7*/  mov [rbp+310h+var_10D], 0
/*140a03cbe*/  lea rcx, [rbp+310h+var_B0]
/*140a03cc5*/  lea rdx, [rbp+310h+var_1A0]
/*140a03ccc*/  lea r8, [rbp+310h+var_E0]
/*140a03cd3*/  lea r9, [rbp+310h+var_100]
/*140a03cda*/  call sub_140307860
/*140a03cdf*/  nop
/*140a03ce0*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03ce7*/  jz short loc_140A03CF6
/*140a03ce9*/ loc_140A03CE9: lea rcx, [rbp+310h+var_B0]
/*140a03cf0*/  call sub_1400104F0
/*140a03cf5*/  nop
/*140a03cf6*/ loc_140A03CF6: call nullsub_1
/*140a03cfb*/  mov ecx, 4
/*140a03d00*/  mov edx, 1
/*140a03d05*/  call sub_140001650
/*140a03d0a*/  test rax, rax
/*140a03d0d*/  jz loc_140A06672
/*140a03d13*/  mov dword ptr [rax], 74786574h
/*140a03d19*/  mov qword ptr [rbp+310h+var_E0], 4
/*140a03d24*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03d2b*/  mov qword ptr [rbp+310h+var_D0], 4
/*140a03d36*/  mov [rbp+310h+var_10E], 1
/*140a03d3d*/ loc_140A03D3D: lea rcx, [rbp+310h+var_B0]
/*140a03d44*/  lea rdx, [rbp+310h+var_200]
/*140a03d4b*/  call sub_140B56520
/*140a03d50*/  nop
/*140a03d51*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03d58*/  jz loc_140A062C0
/*140a03d5e*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03d66*/  movups xmm1, [rbp+310h+var_A0]
/*140a03d6d*/  movaps [rbp+310h+var_F0], xmm1
/*140a03d74*/  movdqa [rbp+310h+var_100], xmm0
/*140a03d7c*/  mov [rbp+310h+var_10E], 0
/*140a03d83*/  lea rcx, [rbp+310h+var_B0]
/*140a03d8a*/  lea rdx, [rbp+310h+var_1A0]
/*140a03d91*/  lea r8, [rbp+310h+var_E0]
/*140a03d98*/  lea r9, [rbp+310h+var_100]
/*140a03d9f*/  call sub_140307860
/*140a03da4*/  nop
/*140a03da5*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a03dac*/  jz short loc_140A03DBB
/*140a03dae*/ loc_140A03DAE: lea rcx, [rbp+310h+var_B0]
/*140a03db5*/  call sub_1400104F0
/*140a03dba*/  nop
/*140a03dbb*/ loc_140A03DBB: call nullsub_1
/*140a03dc0*/  mov ecx, 0Bh
/*140a03dc5*/  mov edx, 1
/*140a03dca*/  call sub_140001650
/*140a03dcf*/  test rax, rax
/*140a03dd2*/  jz loc_140A06687
/*140a03dd8*/  mov rcx, 697461746F6E6E61h
/*140a03de2*/  mov [rax], rcx
/*140a03de5*/  mov dword ptr [rax+7], 736E6F69h
/*140a03dec*/  mov qword ptr [rbp+310h+var_E0], 0Bh
/*140a03df7*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a03dfe*/  mov qword ptr [rbp+310h+var_D0], 0Bh
/*140a03e09*/  mov qword ptr [rbp+310h+var_B0+8], 0
/*140a03e14*/  mov qword ptr [rbp+310h+var_A0], 8
/*140a03e1f*/  mov qword ptr [rbp+310h+var_A0+8], 0
/*140a03e2a*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a03e31*/  lea rcx, [rbp+310h+var_100]
/*140a03e38*/  lea rdx, [rbp+310h+var_1A0]
/*140a03e3f*/  lea r8, [rbp+310h+var_E0]
/*140a03e46*/  lea r9, [rbp+310h+var_B0]
/*140a03e4d*/  call sub_140307860
/*140a03e52*/  nop
/*140a03e53*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a03e5a*/  jz short loc_140A03E69
/*140a03e5c*/  lea rcx, [rbp+310h+var_100]
/*140a03e63*/  call sub_1400104F0
/*140a03e68*/  nop
/*140a03e69*/ loc_140A03E69: mov rax, qword ptr [rbp+310h+var_190]
/*140a03e70*/  movups xmm0, [rbp+310h+var_1A0]
/*140a03e77*/  movups [rbp+310h+var_B0+7], xmm0
/*140a03e7e*/  mov qword ptr [rbp+310h+var_A0+7], rax
/*140a03e85*/  mov rcx, [rbp+310h+var_160]
/*140a03e8c*/  mov byte ptr [rcx], 5
/*140a03e8f*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03e97*/  mov rax, qword ptr [rbp+310h+var_B0+0Fh]
/*140a03e9e*/  mov [rcx+10h], rax
/*140a03ea2*/  mov rax, qword ptr [rbp+310h+var_A0+7]
/*140a03ea9*/  mov [rcx+18h], rax
/*140a03ead*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a03eb2*/  mov qword ptr [rbp+310h+var_B0+8], 1
/*140a03ebd*/  mov qword ptr [rbp+310h+var_A0], rcx
/*140a03ec4*/  mov qword ptr [rbp+310h+var_A0+8], 1
/*140a03ecf*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a03ed6*/  mov [rbp+310h+var_11A], 0
/*140a03edd*/ loc_140A03EDD: lea rcx, [rbp+310h+var_100]
/*140a03ee4*/  lea rdx, [rbp+310h+var_1B8]
/*140a03eeb*/  lea r8, [rbp+310h+var_158]
/*140a03ef2*/  lea r9, [rbp+310h+var_B0]
/*140a03ef9*/  call sub_140307860
/*140a03efe*/  nop
/*140a03eff*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a03f06*/  jz short loc_140A03F15
/*140a03f08*/ loc_140A03F08: lea rcx, [rbp+310h+var_100]
/*140a03f0f*/  call sub_1400104F0
/*140a03f14*/  nop
/*140a03f15*/ loc_140A03F15: movdqu xmm0, [rbp+310h+var_1B8]
/*140a03f1d*/  movdqu [rbp+310h+var_B0+8], xmm0
/*140a03f25*/  mov rax, [rbp+310h+var_1A8]
/*140a03f2c*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a03f33*/  mov byte ptr [rbp+310h+var_B0], 5
/*140a03f3a*/  mov rsi, [rbp+310h+var_1C0]
/*140a03f41*/  cmp rsi, [rbp+310h+var_1D0]
/*140a03f48*/  jnz short loc_140A03F57
/*140a03f4a*/ loc_140A03F4A: lea rcx, [rbp+310h+var_1D0]
/*140a03f51*/  call sub_1416890A0
/*140a03f56*/  nop
/*140a03f57*/ loc_140A03F57: mov rax, [rbp+310h+var_1C8]
/*140a03f5e*/  mov rcx, rsi
/*140a03f61*/  shl rcx, 5
/*140a03f65*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a03f6d*/  movups xmm1, [rbp+310h+var_A0]
/*140a03f74*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*140a03f79*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a03f7e*/  inc rsi
/*140a03f81*/  mov [rbp+310h+var_1C0], rsi
/*140a03f88*/  mov r12, qword ptr [rbp+310h+var_200+8]
/*140a03f8f*/ loc_140A03F8F: mov [rsp+390h+var_370], 1
/*140a03f98*/  lea rcx, [rbp+310h+var_230]
/*140a03f9f*/  mov r9d, 1
/*140a03fa5*/  xor edx, edx
/*140a03fa7*/  mov r8, r15
/*140a03faa*/  call sub_141688D30
/*140a03faf*/  nop
/*140a03fb0*/ loc_140A03FB0: mov rsi, [rbp+310h+var_220]
/*140a03fb7*/  mov rcx, [rbp+310h+var_228]
/*140a03fbe*/  add rcx, rsi
/*140a03fc1*/  mov rdx, r12
/*140a03fc4*/  mov r8, r15
/*140a03fc7*/  call sub_141684120
/*140a03fcc*/  add rsi, r15
/*140a03fcf*/  mov [rbp+310h+var_220], rsi
/*140a03fd6*/  mov rsi, [rbp+310h+var_108]
/*140a03fdd*/ loc_140A03FDD: mov rdx, qword ptr [rbp+310h+var_200]
/*140a03fe4*/  test rdx, rdx
/*140a03fe7*/  jz short loc_140A03FFB
/*140a03fe9*/  mov rcx, qword ptr [rbp+310h+var_200+8]
/*140a03ff0*/  mov r8d, 1
/*140a03ff6*/  call sub_140001660
/*140a03ffb*/ loc_140A03FFB: mov rax, [rbp+310h+var_118]
/*140a04002*/  mov [rbp+310h+var_140], rax
/*140a04009*/  mov [rbp+310h+var_128], rsi
/*140a04010*/ loc_140A04010: lea rcx, aToolCalls; "tool_calls"
/*140a04017*/  mov edx, 0Ah
/*140a0401c*/  mov r8, r14
/*140a0401f*/  call sub_141433D50
/*140a04024*/  nop
/*140a04025*/  test rax, rax
/*140a04028*/  jz loc_140A04E49
/*140a0402e*/  cmp byte ptr [rax], 4
/*140a04031*/  mov rsi, [rbp+310h+var_108]
/*140a04038*/  jnz loc_140A04E50
/*140a0403e*/  mov r14, [rax+10h]
/*140a04042*/  mov r15, [rax+18h]
/*140a04046*/  shl r15, 5
/*140a0404a*/  add r15, r14
/*140a0404d*/  mov rax, [rbx+18h]
/*140a04051*/  mov [rbp+310h+var_2A0], rax
/*140a04055*/  lea rax, [rbx+20h]
/*140a04059*/  mov [rbp+310h+var_290], rax
/*140a04060*/  mov rax, [rbx]
/*140a04063*/  mov [rbp+310h+var_250], rax
/*140a0406a*/  mov rax, [rbx+8]
/*140a0406e*/  mov [rbp+310h+var_258], rax
/*140a04075*/  pcmpeqd xmm6, xmm6
/*140a04079*/  mov [rbp+310h+var_298], r15
/*140a0407d*/ loc_140A0407D: cmp r14, r15
/*140a04080*/  jz loc_140A04E50
/*140a04086*/  mov rax, [rbp+310h+var_118]
/*140a0408d*/  mov [rbp+310h+var_140], rax
/*140a04094*/  mov [rbp+310h+var_128], rsi
/*140a0409b*/  mov edx, 2
/*140a040a0*/  lea rcx, aId_6; "id"
/*140a040a7*/  mov r8, r14
/*140a040aa*/  call sub_141433D50
/*140a040af*/  nop
/*140a040b0*/ loc_140A040B0: mov esi, 0Ch
/*140a040b5*/  test rax, rax
/*140a040b8*/  jz short loc_140A040EC
/*140a040ba*/  cmp byte ptr [rax], 3
/*140a040bd*/  lea r12, unk_1417A7B30
/*140a040c4*/  mov rcx, [rbp+310h+var_108]
/*140a040cb*/  jnz short loc_140A040F3
/*140a040cd*/  mov rsi, [rax+18h]
/*140a040d1*/  test rsi, rsi
/*140a040d4*/  js loc_140A04E78
/*140a040da*/  mov rbx, r13
/*140a040dd*/  jz loc_140A04DE6
/*140a040e3*/  mov r12, [rax+10h]
/*140a040e7*/  mov r13, rbx
/*140a040ea*/  jmp short loc_140A040F3
/*140a040ec*/ loc_140A040EC: lea r12, unk_1417A7B30
/*140a040f3*/ loc_140A040F3: mov rbx, r13
/*140a040f6*/  call nullsub_1
/*140a040fb*/  mov r13d, 1
/*140a04101*/  mov edx, 1
/*140a04106*/  mov rcx, rsi
/*140a04109*/  call sub_140001650
/*140a0410e*/  test rax, rax
/*140a04111*/  jz loc_140A065E1
/*140a04117*/  mov qword ptr [rbp+310h+var_138], rax
/*140a0411e*/  mov rcx, rax
/*140a04121*/  mov rdx, r12
/*140a04124*/  mov [rbp+310h+var_160], rsi
/*140a0412b*/  mov r8, rsi
/*140a0412e*/  call sub_141684120
/*140a04133*/  xor esi, esi
/*140a04135*/ loc_140A04135: mov edx, 8
/*140a0413a*/  lea rcx, aFunction_0; "function"
/*140a04141*/  mov r8, r14
/*140a04144*/  call sub_141433D50
/*140a04149*/  nop
/*140a0414a*/  mov r15, rbx
/*140a0414d*/  lea rbx, [rbp+310h+var_B0]
/*140a04154*/  test rax, rax
/*140a04157*/  jz short loc_140A04188
/*140a04159*/  movzx ecx, byte ptr [rax]
/*140a0415c*/  lea rdx, jpt_140A0416A
/*140a04163*/  movsxd rcx, ds:(jpt_140A0416A - 1417AAF5Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a04167*/  add rcx, rdx
/*140a0416a*/  jmp rcx; switch jump  // switch jump
/*140a0416c*/ loc_140A0416C: movdqu xmm0, xmmword ptr [rax]; jumptable 0000000140A0416A cases 1,2  // jumptable 0000000140A0416A cases 1,2
/*140a04170*/  movups xmm1, xmmword ptr [rax+10h]
/*140a04174*/  movaps [rbp+310h+var_A0], xmm1
/*140a0417b*/  movdqa [rbp+310h+var_B0], xmm0
/*140a04183*/  jmp loc_140A0426C
/*140a04188*/ loc_140A04188: mov byte ptr [rbp+310h+var_B0], 0
/*140a0418f*/  movups xmm0, [rbp+310h+var_A0]
/*140a04196*/  movaps [rbp+310h+var_190], xmm0
/*140a0419d*/  movzx eax, byte ptr [rbp+310h+var_B0]
/*140a041a4*/  mov byte ptr [rbp+310h+var_1A0], al
/*140a041aa*/  mov rax, qword ptr [rbp+310h+var_B0+1]
/*140a041b1*/  mov qword ptr [rbp+310h+var_1A0+1], rax
/*140a041b8*/  mov eax, dword ptr [rbp+310h+var_B0+9]
/*140a041be*/  mov dword ptr [rbp+310h+var_1A0+9], eax
/*140a041c4*/  movzx eax, word ptr [rbp+310h+var_B0+0Dh]
/*140a041cb*/  mov word ptr [rbp+310h+var_1A0+0Dh], ax
/*140a041d2*/  movzx eax, byte ptr [rbp+310h+var_B0+0Fh]
/*140a041d9*/  mov byte ptr [rbp+310h+var_1A0+0Fh], al
/*140a041df*/  jmp loc_140A042D0
/*140a041e4*/ loc_140A041E4: mov rdx, [rax+10h]; jumptable 0000000140A0416A case 4  // jumptable 0000000140A0416A case 4
/*140a041ea*/  sbb [rax-73h], cl
/*140a041ee*/  lea ebp, [rax+2]
/*140a041f3*/  call sub_1402CE260
/*140a041f8*/  nop
/*140a041f9*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a04200*/  jmp short loc_140A0426C
/*140a04202*/ loc_140A04202: mov byte ptr [rbp+310h+var_B0], 0; jumptable 0000000140A0416A case 0  // jumptable 0000000140A0416A case 0
/*140a04209*/  jmp short loc_140A0426C
/*140a0420b*/ loc_140A0420B: add rax, 8; jumptable 0000000140A0416A case 3  // jumptable 0000000140A0416A case 3
/*140a04210*/  lea ecx, [rbp+310h+var_B0+8]
/*140a04216*/  mov rdx, rax
/*140a04219*/  call sub_14149C500
/*140a0421e*/  nop
/*140a0421f*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a04226*/  jmp short loc_140A0426C
/*140a04228*/ loc_140A04228: cmp qword ptr [rax+18h], 0; jumptable 0000000140A0416A case 5  // jumptable 0000000140A0416A case 5
/*140a0422d*/  jz short loc_140A0424F
/*140a0422f*/  mov rdx, [rax+8]
/*140a04233*/  test rdx, rdx
/*140a04236*/  jz loc_140A063C1
/*140a0423c*/  mov r8, [rax+10h]
/*140a04240*/  lea rcx, [rbp+310h+var_B0+8]
/*140a04247*/  call sub_1402CCD80
/*140a0424c*/  nop
/*140a0424d*/  jmp short loc_140A04265
/*140a0424f*/ loc_140A0424F: mov qword ptr [rbp+310h+var_B0+8], 0
/*140a0425a*/  mov qword ptr [rbp+310h+var_A0+8], 0
/*140a04265*/ loc_140A04265: mov byte ptr [rbp+310h+var_B0], 5
/*140a0426c*/ loc_140A0426C: movzx eax, byte ptr [rbp+310h+var_B0]
/*140a04273*/  mov rcx, qword ptr [rbp+310h+var_B0+1]
/*140a0427a*/  mov edx, dword ptr [rbp+310h+var_B0+9]
/*140a04280*/  movzx r8d, word ptr [rbp+310h+var_B0+0Dh]
/*140a04288*/  movzx r9d, byte ptr [rbp+310h+var_B0+0Fh]
/*140a04290*/  movaps xmm0, [rbp+310h+var_A0]
/*140a04297*/  movaps [rbp+310h+var_190], xmm0
/*140a0429e*/  mov byte ptr [rbp+310h+var_1A0], al
/*140a042a4*/  mov qword ptr [rbp+310h+var_1A0+1], rcx
/*140a042ab*/  mov dword ptr [rbp+310h+var_1A0+9], edx
/*140a042b1*/  mov word ptr [rbp+310h+var_1A0+0Dh], r8w
/*140a042b9*/  mov byte ptr [rbp+310h+var_1A0+0Fh], r9b
/*140a042c0*/  mov byte ptr [rbp+310h+var_B0], 0
/*140a042c7*/  mov rcx, rbx
/*140a042ca*/  call sub_1400104F0
/*140a042cf*/  nop
/*140a042d0*/ loc_140A042D0: mov edx, 4
/*140a042d5*/  lea rcx, aName_7; "name"
/*140a042dc*/  lea r8, [rbp+310h+var_1A0]
/*140a042e3*/  call sub_141433D50
/*140a042e8*/  nop
/*140a042e9*/ loc_140A042E9: mov ebx, 4
/*140a042ee*/  test rax, rax
/*140a042f1*/  jz short loc_140A04318
/*140a042f3*/  cmp byte ptr [rax], 3
/*140a042f6*/  lea r12, aTool; "tool"
/*140a042fd*/  jnz short loc_140A0431F
/*140a042ff*/  mov rbx, [rax+18h]
/*140a04303*/  test rbx, rbx
/*140a04306*/  js loc_140A04EA5
/*140a0430c*/  jz loc_140A04E05
/*140a04312*/  mov r12, [rax+10h]
/*140a04316*/  jmp short loc_140A0431F
/*140a04318*/ loc_140A04318: lea r12, aTool; "tool"
/*140a0431f*/ loc_140A0431F: call nullsub_1
/*140a04324*/  mov r13d, 1
/*140a0432a*/  mov edx, 1
/*140a0432f*/  mov rcx, rbx
/*140a04332*/  call sub_140001650
/*140a04337*/  test rax, rax
/*140a0433a*/  jz loc_140A06744
/*140a04340*/  mov r13, rax
/*140a04343*/  mov rcx, rax
/*140a04346*/  mov rdx, r12
/*140a04349*/  mov r8, rbx
/*140a0434c*/  call sub_141684120
/*140a04351*/  mov dword ptr [rbp+310h+var_1D8], 0
/*140a0435b*/ loc_140A0435B: mov [rbp+310h+var_2B8], rbx
/*140a0435f*/  mov qword ptr [rbp+310h+var_138+8], r13
/*140a04366*/  mov [rbp+310h+var_2B0], r13
/*140a0436a*/  mov [rbp+310h+var_168], rbx
/*140a04371*/  mov [rbp+310h+var_2A8], rbx
/*140a04375*/ loc_140A04375: mov edx, 9
/*140a0437a*/  lea rcx, aArguments_1; "arguments"
/*140a04381*/  lea r8, [rbp+310h+var_1A0]
/*140a04388*/  call sub_141433D50
/*140a0438d*/  nop
/*140a0438e*/ loc_140A0438E: mov ebx, 2
/*140a04393*/  test rax, rax
/*140a04396*/  jz short loc_140A043BD
/*140a04398*/  cmp byte ptr [rax], 3
/*140a0439b*/  lea r12, asc_1417A4EB5; "{}"
/*140a043a2*/  jnz short loc_140A043C4
/*140a043a4*/  mov rbx, [rax+18h]
/*140a043a8*/  test rbx, rbx
/*140a043ab*/  js loc_140A04ED8
/*140a043b1*/  jz loc_140A04E1A
/*140a043b7*/  mov r12, [rax+10h]
/*140a043bb*/  jmp short loc_140A043C4
/*140a043bd*/ loc_140A043BD: lea r12, asc_1417A4EB5; "{}"
/*140a043c4*/ loc_140A043C4: call nullsub_1
/*140a043c9*/  mov r13d, 1
/*140a043cf*/  mov edx, 1
/*140a043d4*/  mov rcx, rbx
/*140a043d7*/  call sub_140001650
/*140a043dc*/  test rax, rax
/*140a043df*/  jz loc_140A0677A
/*140a043e5*/  mov [rbp+310h+var_210], rax
/*140a043ec*/  mov rcx, rax
/*140a043ef*/  mov rdx, r12
/*140a043f2*/  mov r8, rbx
/*140a043f5*/  call sub_141684120
/*140a043fa*/  cmp [rbp+310h+var_168], 0Bh
/*140a04402*/  lea r12, [rbp+310h+var_B0]
/*140a04409*/  mov [rbp+310h+var_270], rbx
/*140a04410*/  jnz short loc_140A04443
/*140a04412*/ loc_140A04412: mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a04419*/  mov rax, [rcx]
/*140a0441c*/  mov rdx, 61705F796C707061h
/*140a04426*/  xor rax, rdx
/*140a04429*/  mov rcx, [rcx+3]
/*140a0442d*/  mov rdx, 68637461705F796Ch
/*140a04437*/  xor rcx, rdx
/*140a0443a*/  or rcx, rax
/*140a0443d*/  jz loc_140A04645
/*140a04443*/ loc_140A04443: lea rcx, [rbp+310h+var_200]
/*140a0444a*/  mov rdx, [rbp+310h+var_210]
/*140a04451*/  mov r8, rbx
/*140a04454*/  call sub_140A10FF0
/*140a04459*/  nop
/*140a0445a*/ loc_140A0445A: mov qword ptr [rbp+310h+var_1B8], 0
/*140a04465*/  mov [rbp+310h+var_1A8], 0
/*140a04470*/  call nullsub_1
/*140a04475*/  mov ecx, 4
/*140a0447a*/  mov edx, 1
/*140a0447f*/  call sub_140001650
/*140a04484*/  test rax, rax
/*140a04487*/  jz loc_140A06786
/*140a0448d*/  mov dword ptr [rax], 65707974h
/*140a04493*/  mov qword ptr [rbp+310h+var_158], 4
/*140a0449e*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a044a5*/  mov [rbp+310h+var_148], 4
/*140a044b0*/  call nullsub_1
/*140a044b5*/  mov ecx, 0Dh
/*140a044ba*/  mov edx, 1
/*140a044bf*/  call sub_140001650
/*140a044c4*/  test rax, rax
/*140a044c7*/  mov [rbp+310h+var_208], rax
/*140a044ce*/  jz loc_140A06765
/*140a044d4*/  mov r10, rax
/*140a044d7*/  mov rax, 6C6C61635F6E6F69h
/*140a044e1*/  mov [r10+5], rax
/*140a044e5*/  mov rax, 6E6F6974636E7566h
/*140a044ef*/  mov [r10], rax
/*140a044f2*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a044f9*/  mov qword ptr [rbp+310h+var_B0+8], 0Dh
/*140a04504*/  mov qword ptr [rbp+310h+var_A0], r10
/*140a0450b*/  mov qword ptr [rbp+310h+var_A0+8], 0Dh
/*140a04516*/ loc_140A04516: lea rcx, [rbp+310h+var_100]
/*140a0451d*/  lea rdx, [rbp+310h+var_1B8]
/*140a04524*/  lea r8, [rbp+310h+var_158]
/*140a0452b*/  mov r9, r12
/*140a0452e*/  call sub_140307860
/*140a04533*/  nop
/*140a04534*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0453b*/  jz short loc_140A0454A
/*140a0453d*/ loc_140A0453D: lea rcx, [rbp+310h+var_100]
/*140a04544*/  call sub_1400104F0
/*140a04549*/  nop
/*140a0454a*/ loc_140A0454A: call nullsub_1
/*140a0454f*/  mov ecx, 2
/*140a04554*/  mov edx, 1
/*140a04559*/  call sub_140001650
/*140a0455e*/  test rax, rax
/*140a04561*/  jz loc_140A06750
/*140a04567*/  mov word ptr [rax], 6469h
/*140a0456c*/  mov qword ptr [rbp+310h+var_158], 2
/*140a04577*/  mov [rbp+310h+var_208], rax
/*140a0457e*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a04585*/  mov [rbp+310h+var_148], 2
/*140a04590*/ loc_140A04590: mov rcx, r12
/*140a04593*/  call sub_141356270
/*140a04598*/  nop
/*140a04599*/  movups xmm0, [rbp+310h+var_B0]
/*140a045a0*/  movaps [rbp+310h+var_2D0], xmm0
/*140a045a4*/  lea rax, [rbp+310h+var_2D0]
/*140a045a8*/  mov qword ptr [rbp+310h+var_100], rax
/*140a045af*/  lea rax, sub_140421AE0
/*140a045b6*/  mov qword ptr [rbp+310h+var_100+8], rax
/*140a045bd*/  mov rcx, r12
/*140a045c0*/  lea rdx, unk_1417A5F38
/*140a045c7*/  lea r8, [rbp+310h+var_100]
/*140a045ce*/  call sub_14149C0F0
/*140a045d3*/  nop
/*140a045d4*/ loc_140A045D4: add r14, 20h ; ' '
/*140a045d8*/  mov rbx, qword ptr [rbp+310h+var_B0]
/*140a045df*/  mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a045e6*/  mov [rbp+310h+var_268], rax
/*140a045ed*/  mov r12, qword ptr [rbp+310h+var_A0]
/*140a045f4*/  test r12, r12
/*140a045f7*/  mov [rbp+310h+var_248], rbx
/*140a045fe*/  js loc_140A04EBD
/*140a04604*/  mov [rbp+310h+var_208], r15
/*140a0460b*/  jz short loc_140A04670
/*140a0460d*/  call nullsub_1
/*140a04612*/  mov r15d, 1
/*140a04618*/  mov edx, 1
/*140a0461d*/  mov rcx, r12
/*140a04620*/  call sub_140001650
/*140a04625*/  test rax, rax
/*140a04628*/  jz loc_140A04EC0
/*140a0462e*/  mov r13, rax
/*140a04631*/  mov rcx, rax
/*140a04634*/  mov rdx, [rbp+310h+var_268]
/*140a0463b*/  mov r8, r12
/*140a0463e*/  call sub_141684120
/*140a04643*/  jmp short loc_140A04676
/*140a04645*/ loc_140A04645: mov [rsp+390h+var_370], rbx
/*140a0464a*/  mov r8d, 0Bh
/*140a04650*/  lea rcx, [rbp+310h+var_200]
/*140a04657*/  mov rdx, qword ptr [rbp+310h+var_138+8]
/*140a0465e*/  mov r9, [rbp+310h+var_210]
/*140a04665*/  call sub_140A0E760
/*140a0466a*/  nop
/*140a0466b*/  jmp loc_140A0445A
/*140a04670*/ loc_140A04670: mov r13d, 1
/*140a04676*/ loc_140A04676: mov byte ptr [rbp+310h+var_B0], 3
/*140a0467d*/  mov qword ptr [rbp+310h+var_B0+8], r12
/*140a04684*/  mov qword ptr [rbp+310h+var_A0], r13
/*140a0468b*/  mov qword ptr [rbp+310h+var_A0+8], r12
/*140a04692*/  mov [rbp+310h+var_16A], 0
/*140a04699*/ loc_140A04699: lea rcx, [rbp+310h+var_100]
/*140a046a0*/  lea rdx, [rbp+310h+var_1B8]
/*140a046a7*/  lea r8, [rbp+310h+var_158]
/*140a046ae*/  lea r9, [rbp+310h+var_B0]
/*140a046b5*/  call sub_140307860
/*140a046ba*/  nop
/*140a046bb*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a046c2*/  jz short loc_140A046D1
/*140a046c4*/ loc_140A046C4: lea rcx, [rbp+310h+var_100]
/*140a046cb*/  call sub_1400104F0
/*140a046d0*/  nop
/*140a046d1*/ loc_140A046D1: mov rdx, [rbp+310h+var_248]
/*140a046d8*/  test rdx, rdx
/*140a046db*/  jz short loc_140A046EF
/*140a046dd*/  mov r8d, 1
/*140a046e3*/  mov rcx, [rbp+310h+var_268]
/*140a046ea*/  call sub_140001660
/*140a046ef*/ loc_140A046EF: call nullsub_1
/*140a046f4*/  mov ecx, 7
/*140a046f9*/  mov edx, 1
/*140a046fe*/  call sub_140001650
/*140a04703*/  test rax, rax
/*140a04706*/  mov r15, [rbp+310h+var_160]
/*140a0470d*/  jz loc_140A067D4
/*140a04713*/  mov dword ptr [rax+3], 64695F6Ch
/*140a0471a*/  mov dword ptr [rax], 6C6C6163h
/*140a04720*/  mov qword ptr [rbp+310h+var_158], 7
/*140a0472b*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a04732*/  mov [rbp+310h+var_148], 7
/*140a0473d*/  mov r12d, 1
/*140a04743*/  test sil, sil
/*140a04746*/  jnz short loc_140A04778
/*140a04748*/  call nullsub_1
/*140a0474d*/  mov edx, 1
/*140a04752*/  mov rcx, r15
/*140a04755*/  call sub_140001650
/*140a0475a*/  test rax, rax
/*140a0475d*/  jz loc_140A067E6
/*140a04763*/  mov r12, rax
/*140a04766*/  mov rcx, rax
/*140a04769*/  mov rdx, qword ptr [rbp+310h+var_138]
/*140a04770*/  mov r8, r15
/*140a04773*/  call sub_141684120
/*140a04778*/ loc_140A04778: mov byte ptr [rbp+310h+var_B0], 3
/*140a0477f*/  mov qword ptr [rbp+310h+var_B0+8], r15
/*140a04786*/  mov qword ptr [rbp+310h+var_A0], r12
/*140a0478d*/  mov qword ptr [rbp+310h+var_A0+8], r15
/*140a04794*/  mov [rbp+310h+var_16B], 0
/*140a0479b*/ loc_140A0479B: lea rcx, [rbp+310h+var_100]
/*140a047a2*/  lea rdx, [rbp+310h+var_1B8]
/*140a047a9*/  lea r8, [rbp+310h+var_158]
/*140a047b0*/  lea r9, [rbp+310h+var_B0]
/*140a047b7*/  call sub_140307860
/*140a047bc*/  nop
/*140a047bd*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a047c4*/  jz short loc_140A047D3
/*140a047c6*/ loc_140A047C6: lea rcx, [rbp+310h+var_100]
/*140a047cd*/  call sub_1400104F0
/*140a047d2*/  nop
/*140a047d3*/ loc_140A047D3: call nullsub_1
/*140a047d8*/  mov ecx, 4
/*140a047dd*/  mov edx, 1
/*140a047e2*/  call sub_140001650
/*140a047e7*/  test rax, rax
/*140a047ea*/  jz loc_140A067C2
/*140a047f0*/  mov dword ptr [rax], 656D616Eh
/*140a047f6*/  mov qword ptr [rbp+310h+var_158], 4
/*140a04801*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a04808*/  mov [rbp+310h+var_148], 4
/*140a04813*/  mov r12d, 1
/*140a04819*/  cmp byte ptr [rbp+310h+var_1D8], 0
/*140a04820*/  mov rsi, [rbp+310h+var_168]
/*140a04827*/  jnz short loc_140A04859
/*140a04829*/  call nullsub_1
/*140a0482e*/  mov edx, 1
/*140a04833*/  mov rcx, rsi
/*140a04836*/  call sub_140001650
/*140a0483b*/  test rax, rax
/*140a0483e*/  jz loc_140A067FD
/*140a04844*/  mov r12, rax
/*140a04847*/  mov rcx, rax
/*140a0484a*/  mov rdx, qword ptr [rbp+310h+var_138+8]
/*140a04851*/  mov r8, rsi
/*140a04854*/  call sub_141684120
/*140a04859*/ loc_140A04859: mov byte ptr [rbp+310h+var_B0], 3
/*140a04860*/  mov qword ptr [rbp+310h+var_B0+8], rsi
/*140a04867*/  mov qword ptr [rbp+310h+var_A0], r12
/*140a0486e*/  mov qword ptr [rbp+310h+var_A0+8], rsi
/*140a04875*/  mov [rbp+310h+var_16C], 0
/*140a0487c*/ loc_140A0487C: lea rcx, [rbp+310h+var_100]
/*140a04883*/  lea rdx, [rbp+310h+var_1B8]
/*140a0488a*/  lea r8, [rbp+310h+var_158]
/*140a04891*/  lea r9, [rbp+310h+var_B0]
/*140a04898*/  call sub_140307860
/*140a0489d*/  nop
/*140a0489e*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a048a5*/  jz short loc_140A048B4
/*140a048a7*/ loc_140A048A7: lea rcx, [rbp+310h+var_100]
/*140a048ae*/  call sub_1400104F0
/*140a048b3*/  nop
/*140a048b4*/ loc_140A048B4: call nullsub_1
/*140a048b9*/  mov ecx, 9
/*140a048be*/  mov edx, 1
/*140a048c3*/  call sub_140001650
/*140a048c8*/  test rax, rax
/*140a048cb*/  jz loc_140A067B0
/*140a048d1*/  mov rcx, 746E656D75677261h
/*140a048db*/  mov [rax], rcx
/*140a048de*/  mov byte ptr [rax+8], 73h ; 's'
/*140a048e2*/  mov qword ptr [rbp+310h+var_158], 9
/*140a048ed*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a048f4*/  mov [rbp+310h+var_148], 9
/*140a048ff*/  mov r12, [rbp+310h+var_1F0]
/*140a04906*/  test r12, r12
/*140a04909*/  js loc_140A06048
/*140a0490f*/  mov rsi, qword ptr [rbp+310h+var_200+8]
/*140a04916*/  jz short loc_140A0494C
/*140a04918*/  call nullsub_1
/*140a0491d*/  mov r15d, 1
/*140a04923*/  mov edx, 1
/*140a04928*/  mov rcx, r12
/*140a0492b*/  call sub_140001650
/*140a04930*/  test rax, rax
/*140a04933*/  jz loc_140A0604B
/*140a04939*/  mov r13, rax
/*140a0493c*/  mov rcx, rax
/*140a0493f*/  mov rdx, rsi
/*140a04942*/  mov r8, r12
/*140a04945*/  call sub_141684120
/*140a0494a*/  jmp short loc_140A04952
/*140a0494c*/ loc_140A0494C: mov r13d, 1
/*140a04952*/ loc_140A04952: mov [rbp+310h+var_248], rsi
/*140a04959*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a04960*/  mov qword ptr [rbp+310h+var_B0+8], r12
/*140a04967*/  mov qword ptr [rbp+310h+var_A0], r13
/*140a0496e*/  mov qword ptr [rbp+310h+var_A0+8], r12
/*140a04975*/  mov [rbp+310h+var_16D], 0
/*140a0497c*/ loc_140A0497C: lea rcx, [rbp+310h+var_100]
/*140a04983*/  lea rdx, [rbp+310h+var_1B8]
/*140a0498a*/  lea r8, [rbp+310h+var_158]
/*140a04991*/  lea r9, [rbp+310h+var_B0]
/*140a04998*/  call sub_140307860
/*140a0499d*/  nop
/*140a0499e*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a049a5*/  mov r13, [rbp+310h+var_208]
/*140a049ac*/  jz short loc_140A049BB
/*140a049ae*/ loc_140A049AE: lea rcx, [rbp+310h+var_100]
/*140a049b5*/  call sub_1400104F0
/*140a049ba*/  nop
/*140a049bb*/ loc_140A049BB: call nullsub_1
/*140a049c0*/  mov ecx, 6
/*140a049c5*/  mov edx, 1
/*140a049ca*/  call sub_140001650
/*140a049cf*/  test rax, rax
/*140a049d2*/  jz loc_140A06826
/*140a049d8*/  mov word ptr [rax+4], 7375h
/*140a049de*/  mov dword ptr [rax], 74617473h
/*140a049e4*/  mov qword ptr [rbp+310h+var_158], 6
/*140a049ef*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a049f6*/  mov [rbp+310h+var_148], 6
/*140a04a01*/  call nullsub_1
/*140a04a06*/  mov ecx, 9
/*140a04a0b*/  mov edx, 1
/*140a04a10*/  call sub_140001650
/*140a04a15*/  test rax, rax
/*140a04a18*/  lea r9, [rbp+310h+var_B0]
/*140a04a1f*/  mov [rbp+310h+var_1D8], rax
/*140a04a26*/  jz loc_140A06814
/*140a04a2c*/  mov r10, rax
/*140a04a2f*/  mov rax, 6574656C706D6F63h
/*140a04a39*/  mov [r10], rax
/*140a04a3c*/  mov byte ptr [r10+8], 64h ; 'd'
/*140a04a41*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a04a48*/  mov qword ptr [rbp+310h+var_B0+8], 9
/*140a04a53*/  mov qword ptr [rbp+310h+var_A0], r10
/*140a04a5a*/  mov qword ptr [rbp+310h+var_A0+8], 9
/*140a04a65*/ loc_140A04A65: lea rcx, [rbp+310h+var_100]
/*140a04a6c*/  lea rdx, [rbp+310h+var_1B8]
/*140a04a73*/  lea r8, [rbp+310h+var_158]
/*140a04a7a*/  call sub_140307860
/*140a04a7f*/  nop
/*140a04a80*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a04a87*/  jz short loc_140A04A96
/*140a04a89*/ loc_140A04A89: lea rcx, [rbp+310h+var_100]
/*140a04a90*/  call sub_1400104F0
/*140a04a95*/  nop
/*140a04a96*/ loc_140A04A96: mov rax, [rbp+310h+var_1A8]
/*140a04a9d*/  lea rcx, [rbp+310h+var_E0+8]
/*140a04aa4*/  mov [rcx+10h], rax
/*140a04aa8*/  movdqu xmm0, [rbp+310h+var_1B8]
/*140a04ab0*/  movdqu xmmword ptr [rcx], xmm0
/*140a04ab4*/  mov byte ptr [rbp+310h+var_E0], 5
/*140a04abb*/  cmp [rbp+310h+var_2A0], 0
/*140a04ac0*/  jz loc_140A04CA5
/*140a04ac6*/  mov [rbp+310h+var_B1], 1
/*140a04acd*/ loc_140A04ACD: mov rcx, [rbp+310h+var_290]
/*140a04ad4*/  lea rdx, [rbp+310h+var_2B8]
/*140a04ad8*/  call sub_140378810
/*140a04add*/  nop
/*140a04ade*/ loc_140A04ADE: mov r12, rax
/*140a04ae1*/  shr rax, 39h
/*140a04ae5*/  movd xmm0, eax
/*140a04ae9*/  punpcklbw xmm0, xmm0
/*140a04aed*/  pshuflw xmm0, xmm0, 0
/*140a04af2*/  pshufd xmm7, xmm0, 44h ; 'D'
/*140a04af7*/  xor ecx, ecx
/*140a04af9*/ loc_140A04AF9: and r12, [rbp+310h+var_258]
/*140a04b00*/  mov rdx, [rbp+310h+var_250]
/*140a04b07*/  movdqu xmm8, xmmword ptr [rdx+r12]
/*140a04b0d*/  movdqa xmm0, xmm8
/*140a04b12*/  pcmpeqb xmm0, xmm7
/*140a04b16*/  pmovmskb ebx, xmm0
/*140a04b1a*/  test ebx, ebx
/*140a04b1c*/  jz short loc_140A04B85
/*140a04b1e*/  mov [rbp+310h+var_1D8], rcx
/*140a04b25*/ loc_140A04B25: tzcnt eax, ebx
/*140a04b29*/  add rax, r12
/*140a04b2c*/  and rax, [rbp+310h+var_258]
/*140a04b33*/  neg rax
/*140a04b36*/  lea r15, [rax+rax*2]
/*140a04b3a*/  shl r15, 4
/*140a04b3e*/  mov rsi, [rbp+310h+var_168]
/*140a04b45*/  cmp rsi, [rdx+r15-20h]
/*140a04b4a*/  jnz short loc_140A04B74
/*140a04b4c*/  add r15, rdx
/*140a04b4f*/  mov rdx, [r15-28h]
/*140a04b53*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a04b5a*/  mov r8, rsi
/*140a04b5d*/  call sub_1416847B0
/*140a04b62*/  mov rdx, [rbp+310h+var_250]
/*140a04b69*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a04b70*/  test eax, eax
/*140a04b72*/  jz short loc_140A04BA7
/*140a04b74*/ loc_140A04B74: lea eax, [rbx-1]
/*140a04b77*/  and ax, bx
/*140a04b7a*/  mov ebx, eax
/*140a04b7c*/  mov rcx, [rbp+310h+var_1D8]
/*140a04b83*/  jnz short loc_140A04B25
/*140a04b85*/ loc_140A04B85: pcmpeqb xmm8, xmm6
/*140a04b8a*/  pmovmskb eax, xmm8
/*140a04b8f*/  test eax, eax
/*140a04b91*/  jnz loc_140A04CA5
/*140a04b97*/  add r12, rcx
/*140a04b9a*/  add r12, 10h
/*140a04b9e*/  add rcx, 10h
/*140a04ba2*/  jmp loc_140A04AF9
/*140a04ba7*/ loc_140A04BA7: mov rbx, [r15-8]
/*140a04bab*/  mov r12, rbx
/*140a04bae*/  sub r12, rsi
/*140a04bb1*/  jb loc_140A04CA5
/*140a04bb7*/  mov r8, rsi
/*140a04bba*/  mov rsi, [r15-10h]
/*140a04bbe*/  lea rdx, [rsi+r12]
/*140a04bc2*/  call sub_1416847B0
/*140a04bc7*/  test eax, eax
/*140a04bc9*/  jnz loc_140A04CA5
/*140a04bcf*/  test r12, r12
/*140a04bd2*/  js loc_140A060E1
/*140a04bd8*/  jz short loc_140A04C03
/*140a04bda*/  call nullsub_1
/*140a04bdf*/  mov r13d, 1
/*140a04be5*/  mov edx, 1
/*140a04bea*/  mov rcx, r12
/*140a04bed*/  call sub_140001650
/*140a04bf2*/  mov [rbp+310h+var_238], rax
/*140a04bf9*/  test rax, rax
/*140a04bfc*/  jnz short loc_140A04C0F
/*140a04bfe*/  jmp loc_140A0685C
/*140a04c03*/ loc_140A04C03: mov eax, 1
/*140a04c08*/  mov [rbp+310h+var_238], rax
/*140a04c0f*/ loc_140A04C0F: cmp rbx, [rbp+310h+var_168]
/*140a04c16*/  jz short loc_140A04C2A
/*140a04c18*/  mov rcx, [rbp+310h+var_238]
/*140a04c1f*/  mov rdx, rsi
/*140a04c22*/  mov r8, r12
/*140a04c25*/  call sub_141684120
/*140a04c2a*/ loc_140A04C2A: mov qword ptr [rbp+310h+var_B0+8], r12
/*140a04c31*/  mov rax, [rbp+310h+var_238]
/*140a04c38*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a04c3f*/  mov qword ptr [rbp+310h+var_A0+8], r12
/*140a04c46*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a04c4d*/  mov [rbp+310h+var_16E], 1
/*140a04c54*/ loc_140A04C54: mov edx, 9
/*140a04c59*/  lea rcx, aNamespace; "namespace"
/*140a04c60*/  lea r8, [rbp+310h+var_E0]
/*140a04c67*/  call sub_141433E50
/*140a04c6c*/  mov [rbp+310h+var_1D8], rax
/*140a04c73*/ loc_140A04C73: mov rcx, [rbp+310h+var_1D8]
/*140a04c7a*/  call sub_1400104F0
/*140a04c7f*/  nop
/*140a04c80*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a04c88*/  movups xmm1, [rbp+310h+var_A0]
/*140a04c8f*/  mov rax, [rbp+310h+var_1D8]
/*140a04c96*/  movups xmmword ptr [rax+10h], xmm1
/*140a04c9a*/  movdqu xmmword ptr [rax], xmm0
/*140a04c9e*/  mov r13, [rbp+310h+var_208]
/*140a04ca5*/ loc_140A04CA5: movzx eax, byte ptr [rbp+310h+var_E0]
/*140a04cac*/  mov rcx, qword ptr [rbp+310h+var_E0+1]
/*140a04cb3*/  mov edx, dword ptr [rbp+310h+var_E0+9]
/*140a04cb9*/  movzx r8d, word ptr [rbp+310h+var_E0+0Dh]
/*140a04cc1*/  movzx r9d, byte ptr [rbp+310h+var_E0+0Fh]
/*140a04cc9*/  movdqu xmm0, [rbp+310h+var_D0]
/*140a04cd1*/  movdqa [rbp+310h+var_A0], xmm0
/*140a04cd9*/  mov byte ptr [rbp+310h+var_B0], al
/*140a04cdf*/  mov qword ptr [rbp+310h+var_B0+1], rcx
/*140a04ce6*/  mov dword ptr [rbp+310h+var_B0+9], edx
/*140a04cec*/  mov word ptr [rbp+310h+var_B0+0Dh], r8w
/*140a04cf4*/  mov byte ptr [rbp+310h+var_B0+0Fh], r9b
/*140a04cfb*/  mov rsi, [rbp+310h+var_1C0]
/*140a04d02*/  cmp rsi, [rbp+310h+var_1D0]
/*140a04d09*/  mov r15, [rbp+310h+var_298]
/*140a04d0d*/  jnz short loc_140A04D1C
/*140a04d0f*/ loc_140A04D0F: lea rcx, [rbp+310h+var_1D0]
/*140a04d16*/  call sub_1416890A0
/*140a04d1b*/  nop
/*140a04d1c*/ loc_140A04D1C: mov rax, [rbp+310h+var_1C8]
/*140a04d23*/  mov rcx, rsi
/*140a04d26*/  shl rcx, 5
/*140a04d2a*/  movdqa xmm0, [rbp+310h+var_B0]
/*140a04d32*/  movaps xmm1, [rbp+310h+var_A0]
/*140a04d39*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*140a04d3e*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a04d43*/  inc rsi
/*140a04d46*/  mov [rbp+310h+var_1C0], rsi
/*140a04d4d*/  mov rdx, qword ptr [rbp+310h+var_200]
/*140a04d54*/  test rdx, rdx
/*140a04d57*/  jz short loc_140A04D6B
/*140a04d59*/  mov r8d, 1
/*140a04d5f*/  mov rcx, [rbp+310h+var_248]
/*140a04d66*/  call sub_140001660
/*140a04d6b*/ loc_140A04D6B: mov rdx, [rbp+310h+var_270]
/*140a04d72*/  test rdx, rdx
/*140a04d75*/  mov rsi, [rbp+310h+var_168]
/*140a04d7c*/  jz short loc_140A04D90
/*140a04d7e*/  mov r8d, 1
/*140a04d84*/  mov rcx, [rbp+310h+var_210]
/*140a04d8b*/  call sub_140001660
/*140a04d90*/ loc_140A04D90: test rsi, rsi
/*140a04d93*/  jz short loc_140A04DAB
/*140a04d95*/  mov r8d, 1
/*140a04d9b*/  mov rcx, qword ptr [rbp+310h+var_138+8]
/*140a04da2*/  mov rdx, rsi
/*140a04da5*/  call sub_140001660
/*140a04daa*/  nop
/*140a04dab*/ loc_140A04DAB: lea rcx, [rbp+310h+var_1A0]
/*140a04db2*/  call sub_1400104F0
/*140a04db7*/  nop
/*140a04db8*/  mov rdx, [rbp+310h+var_160]
/*140a04dbf*/  test rdx, rdx
/*140a04dc2*/  mov rsi, [rbp+310h+var_108]
/*140a04dc9*/  jz loc_140A0407D
/*140a04dcf*/  mov r8d, 1
/*140a04dd5*/  mov rcx, qword ptr [rbp+310h+var_138]
/*140a04ddc*/  call sub_140001660
/*140a04de1*/  jmp loc_140A0407D
/*140a04de6*/ loc_140A04DE6: mov eax, 1
/*140a04deb*/  mov qword ptr [rbp+310h+var_138], rax
/*140a04df2*/  mov sil, 1
/*140a04df5*/  mov [rbp+310h+var_160], 0
/*140a04e00*/  jmp loc_140A04135
/*140a04e05*/ loc_140A04E05: mov r13d, 1
/*140a04e0b*/  mov al, 1
/*140a04e0d*/  mov dword ptr [rbp+310h+var_1D8], eax
/*140a04e13*/  xor ebx, ebx
/*140a04e15*/  jmp loc_140A0435B
/*140a04e1a*/ loc_140A04E1A: mov eax, 1
/*140a04e1f*/  mov [rbp+310h+var_210], rax
/*140a04e26*/  xor ebx, ebx
/*140a04e28*/  cmp [rbp+310h+var_168], 0Bh
/*140a04e30*/  lea r12, [rbp+310h+var_B0]
/*140a04e37*/  mov [rbp+310h+var_270], rbx
/*140a04e3e*/  jz loc_140A04412
/*140a04e44*/  jmp loc_140A04443
/*140a04e49*/ loc_140A04E49: mov rsi, [rbp+310h+var_108]
/*140a04e50*/ loc_140A04E50: mov rax, [rbp+310h+var_118]
/*140a04e57*/  cmp [rbp+310h+var_1C0], 0
/*140a04e5f*/  mov [rbp+310h+var_108], rsi
/*140a04e66*/  mov [rbp+310h+var_118], rax
/*140a04e6d*/  jnz loc_140A0518C
/*140a04e73*/  jmp loc_140A0250C
/*140a04e78*/ loc_140A04E78: xor r13d, r13d
/*140a04e7b*/ loc_140A04E7B: mov rax, [rbp+310h+var_118]
/*140a04e82*/  mov [rbp+310h+var_140], rax
/*140a04e89*/  mov [rbp+310h+var_128], rcx
/*140a04e90*/ loc_140A04E90: mov rcx, r13
/*140a04e93*/  mov rdx, qword ptr [rbp+310h+var_138]
/*140a04e9a*/  call sub_1416C2D4B
/*140a04ea0*/  jmp loc_140A06836
/*140a04ea5*/ loc_140A04EA5: xor r13d, r13d
/*140a04ea8*/ loc_140A04EA8: mov rcx, r13
/*140a04eab*/  mov rdx, qword ptr [rbp+310h+var_138+8]
/*140a04eb2*/  call sub_1416C2D4B
/*140a04eb8*/  jmp loc_140A06836
/*140a04ebd*/ loc_140A04EBD: xor r15d, r15d
/*140a04ec0*/ loc_140A04EC0: mov [rbp+310h+var_16A], 1
/*140a04ec7*/ loc_140A04EC7: mov rcx, r15
/*140a04eca*/  mov rdx, r12
/*140a04ecd*/  call sub_1416C2D4B
/*140a04ed3*/  jmp loc_140A06836
/*140a04ed8*/ loc_140A04ED8: xor r13d, r13d
/*140a04edb*/ loc_140A04EDB: mov rcx, r13
/*140a04ede*/  mov rdx, [rbp+310h+var_210]
/*140a04ee5*/  call sub_1416C2D4B
/*140a04eeb*/  jmp loc_140A06836
/*140a04ef0*/ loc_140A04EF0: mov r14d, 1
/*140a04ef6*/ loc_140A04EF6: mov byte ptr [rbp+310h+var_B0], 3
/*140a04efd*/  mov qword ptr [rbp+310h+var_B0+8], rbx
/*140a04f04*/  mov qword ptr [rbp+310h+var_A0], r14
/*140a04f0b*/  mov qword ptr [rbp+310h+var_A0+8], rbx
/*140a04f12*/  mov [rbp+310h+var_170], 0
/*140a04f19*/ loc_140A04F19: lea rcx, [rbp+310h+var_100]
/*140a04f20*/  lea rdx, [rbp+310h+var_1A0]
/*140a04f27*/  lea r8, [rbp+310h+var_E0]
/*140a04f2e*/  lea r9, [rbp+310h+var_B0]
/*140a04f35*/  call sub_140307860
/*140a04f3a*/  nop
/*140a04f3b*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a04f42*/  jz short loc_140A04F51
/*140a04f44*/ loc_140A04F44: lea rcx, [rbp+310h+var_100]
/*140a04f4b*/  call sub_1400104F0
/*140a04f50*/  nop
/*140a04f51*/ loc_140A04F51: call nullsub_1
/*140a04f56*/  mov ecx, 0Bh
/*140a04f5b*/  mov edx, 1
/*140a04f60*/  call sub_140001650
/*140a04f65*/  test rax, rax
/*140a04f68*/  jz loc_140A0679B
/*140a04f6e*/  mov rcx, 697461746F6E6E61h
/*140a04f78*/  mov [rax], rcx
/*140a04f7b*/  mov dword ptr [rax+7], 736E6F69h
/*140a04f82*/  mov qword ptr [rbp+310h+var_E0], 0Bh
/*140a04f8d*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a04f94*/  mov qword ptr [rbp+310h+var_D0], 0Bh
/*140a04f9f*/  mov qword ptr [rbp+310h+var_B0+8], 0
/*140a04faa*/  mov qword ptr [rbp+310h+var_A0], 8
/*140a04fb5*/  mov qword ptr [rbp+310h+var_A0+8], 0
/*140a04fc0*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a04fc7*/  lea rcx, [rbp+310h+var_100]
/*140a04fce*/  lea rdx, [rbp+310h+var_1A0]
/*140a04fd5*/  lea r8, [rbp+310h+var_E0]
/*140a04fdc*/  lea r9, [rbp+310h+var_B0]
/*140a04fe3*/  call sub_140307860
/*140a04fe8*/  nop
/*140a04fe9*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a04ff0*/  jz short loc_140A04FFF
/*140a04ff2*/  lea rcx, [rbp+310h+var_100]
/*140a04ff9*/  call sub_1400104F0
/*140a04ffe*/  nop
/*140a04fff*/ loc_140A04FFF: mov rax, qword ptr [rbp+310h+var_190]
/*140a05006*/  movups xmm0, [rbp+310h+var_1A0]
/*140a0500d*/  movups [rbp+310h+var_B0+7], xmm0
/*140a05014*/  mov qword ptr [rbp+310h+var_A0+7], rax
/*140a0501b*/  mov rcx, [rbp+310h+var_168]
/*140a05022*/  mov byte ptr [rcx], 5
/*140a05025*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a0502d*/  mov rax, qword ptr [rbp+310h+var_B0+0Fh]
/*140a05034*/  mov [rcx+10h], rax
/*140a05038*/  mov rax, qword ptr [rbp+310h+var_A0+7]
/*140a0503f*/  mov [rcx+18h], rax
/*140a05043*/  movdqu xmmword ptr [rcx+1], xmm0
/*140a05048*/  mov qword ptr [rbp+310h+var_B0+8], 1
/*140a05053*/  mov qword ptr [rbp+310h+var_A0], rcx
/*140a0505a*/  mov qword ptr [rbp+310h+var_A0+8], 1
/*140a05065*/  mov byte ptr [rbp+310h+var_B0], 4
/*140a0506c*/  mov [rbp+310h+var_11B], 0
/*140a05073*/ loc_140A05073: lea rcx, [rbp+310h+var_100]
/*140a0507a*/  lea rdx, [rbp+310h+var_1B8]
/*140a05081*/  lea r8, [rbp+310h+var_158]
/*140a05088*/  lea r9, [rbp+310h+var_B0]
/*140a0508f*/  call sub_140307860
/*140a05094*/  nop
/*140a05095*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0509c*/  jz short loc_140A050AB
/*140a0509e*/ loc_140A0509E: lea rcx, [rbp+310h+var_100]
/*140a050a5*/  call sub_1400104F0
/*140a050aa*/  nop
/*140a050ab*/ loc_140A050AB: movdqu xmm0, [rbp+310h+var_1B8]
/*140a050b3*/  movdqu [rbp+310h+var_B0+8], xmm0
/*140a050bb*/  mov rax, [rbp+310h+var_1A8]
/*140a050c2*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a050c9*/  mov byte ptr [rbp+310h+var_B0], 5
/*140a050d0*/  mov rsi, [rbp+310h+var_1C0]
/*140a050d7*/  cmp rsi, [rbp+310h+var_1D0]
/*140a050de*/  jnz short loc_140A050ED
/*140a050e0*/ loc_140A050E0: lea rcx, [rbp+310h+var_1D0]
/*140a050e7*/  call sub_1416890A0
/*140a050ec*/  nop
/*140a050ed*/ loc_140A050ED: mov rax, [rbp+310h+var_1C8]
/*140a050f4*/  mov rcx, rsi
/*140a050f7*/  shl rcx, 5
/*140a050fb*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a05103*/  movups xmm1, [rbp+310h+var_A0]
/*140a0510a*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*140a0510f*/  movdqu xmmword ptr [rax+rcx], xmm0
/*140a05114*/  inc rsi
/*140a05117*/  mov [rbp+310h+var_1C0], rsi
/*140a0511e*/  mov rax, [rbp+310h+var_230]
/*140a05125*/  mov r14, [rbp+310h+var_220]
/*140a0512c*/  sub rax, r14
/*140a0512f*/  cmp rbx, rax
/*140a05132*/  ja loc_140A06330
/*140a05138*/  test rbx, rbx
/*140a0513b*/  mov rsi, [rbp+310h+var_108]
/*140a05142*/  jz short loc_140A0515D
/*140a05144*/ loc_140A05144: mov rcx, [rbp+310h+var_228]
/*140a0514b*/  add rcx, r14
/*140a0514e*/  mov rdx, qword ptr [rbp+310h+var_138]
/*140a05155*/  mov r8, rbx
/*140a05158*/  call sub_141684120
/*140a0515d*/ loc_140A0515D: add r14, rbx
/*140a05160*/  mov [rbp+310h+var_220], r14
/*140a05167*/  mov rdx, [rbp+310h+var_160]
/*140a0516e*/  test rdx, rdx
/*140a05171*/  jz short loc_140A05185
/*140a05173*/  mov r8d, 1
/*140a05179*/  mov rcx, qword ptr [rbp+310h+var_138]
/*140a05180*/  call sub_140001660
/*140a05185*/ loc_140A05185: mov rax, [rbp+310h+var_118]
/*140a0518c*/ loc_140A0518C: mov [rbp+310h+var_140], rax
/*140a05193*/  mov [rbp+310h+var_128], rsi
/*140a0519a*/ loc_140A0519A: lea rcx, aUsage_2; "usage"
/*140a051a1*/  mov edx, 5
/*140a051a6*/  mov r8, rdi
/*140a051a9*/  call sub_141433D50
/*140a051ae*/  nop
/*140a051af*/  mov rdi, rax
/*140a051b2*/  mov r12, 745F74757074756Fh
/*140a051bc*/  test rax, rax
/*140a051bf*/  jz loc_140A054B7
/*140a051c5*/  mov rax, [rbp+310h+var_118]
/*140a051cc*/  mov [rbp+310h+var_140], rax
/*140a051d3*/  mov rax, [rbp+310h+var_108]
/*140a051da*/  mov [rbp+310h+var_128], rax
/*140a051e1*/  lea rcx, aPromptTokens; "prompt_tokens"
/*140a051e8*/  mov edx, 0Dh
/*140a051ed*/  mov r8, rdi
/*140a051f0*/  call sub_141433D50
/*140a051f5*/  nop
/*140a051f6*/  test rax, rax
/*140a051f9*/  jz short loc_140A05219
/*140a051fb*/  cmp byte ptr [rax], 2
/*140a051fe*/  jnz short loc_140A05219
/*140a05200*/  mov rcx, [rax+8]
/*140a05204*/  cmp rcx, 2
/*140a05208*/  jz short loc_140A05219
/*140a0520a*/  cmp ecx, 1
/*140a0520d*/  jnz loc_140A06024
/*140a05213*/  mov rsi, [rax+10h]
/*140a05217*/  jmp short loc_140A0521B
/*140a05219*/ loc_140A05219: xor esi, esi
/*140a0521b*/ loc_140A0521B: mov rax, [rbp+310h+var_118]
/*140a05222*/  mov [rbp+310h+var_140], rax
/*140a05229*/  mov rax, [rbp+310h+var_108]
/*140a05230*/  mov [rbp+310h+var_128], rax
/*140a05237*/  lea rcx, aCompletionToke; "completion_tokens"
/*140a0523e*/  mov edx, 11h
/*140a05243*/  mov r8, rdi
/*140a05246*/  call sub_141433D50
/*140a0524b*/  nop
/*140a0524c*/  test rax, rax
/*140a0524f*/  jz short loc_140A0526F
/*140a05251*/  cmp byte ptr [rax], 2
/*140a05254*/  jnz short loc_140A0526F
/*140a05256*/  mov rcx, [rax+8]
/*140a0525a*/  cmp rcx, 2
/*140a0525e*/  jz short loc_140A0526F
/*140a05260*/  cmp ecx, 1
/*140a05263*/  jnz loc_140A06036
/*140a05269*/  mov rdi, [rax+10h]
/*140a0526d*/  jmp short loc_140A05271
/*140a0526f*/ loc_140A0526F: xor edi, edi
/*140a05271*/ loc_140A05271: mov qword ptr [rbp+310h+var_1A0], 0
/*140a0527c*/  mov qword ptr [rbp+310h+var_190], 0
/*140a05287*/  call nullsub_1
/*140a0528c*/  mov ecx, 0Ch
/*140a05291*/  mov edx, 1
/*140a05296*/  call sub_140001650
/*140a0529b*/  test rax, rax
/*140a0529e*/  jz loc_140A06382
/*140a052a4*/  mov rcx, 6F745F7475706E69h
/*140a052ae*/  mov [rax], rcx
/*140a052b1*/  mov dword ptr [rax+8], 736E656Bh
/*140a052b8*/  mov qword ptr [rbp+310h+var_E0], 0Ch
/*140a052c3*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a052ca*/  mov qword ptr [rbp+310h+var_D0], 0Ch
/*140a052d5*/  mov rax, rsi
/*140a052d8*/  shr rax, 3Fh
/*140a052dc*/  mov byte ptr [rbp+310h+var_B0], 2
/*140a052e3*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a052ea*/  mov qword ptr [rbp+310h+var_A0], rsi
/*140a052f1*/ loc_140A052F1: lea rcx, [rbp+310h+var_100]
/*140a052f8*/  lea rdx, [rbp+310h+var_1A0]
/*140a052ff*/  lea r8, [rbp+310h+var_E0]
/*140a05306*/  lea r9, [rbp+310h+var_B0]
/*140a0530d*/  call sub_140307860
/*140a05312*/  nop
/*140a05313*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0531a*/  jz short loc_140A05329
/*140a0531c*/  lea rcx, [rbp+310h+var_100]
/*140a05323*/  call sub_1400104F0
/*140a05328*/  nop
/*140a05329*/ loc_140A05329: call nullsub_1
/*140a0532e*/  mov ecx, 0Dh
/*140a05333*/  mov edx, 1
/*140a05338*/  call sub_140001650
/*140a0533d*/  test rax, rax
/*140a05340*/  jz loc_140A06397
/*140a05346*/  mov rcx, 736E656B6F745F74h
/*140a05350*/  mov [rax+5], rcx
/*140a05354*/  mov [rax], r12
/*140a05357*/  mov qword ptr [rbp+310h+var_E0], 0Dh
/*140a05362*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05369*/  mov qword ptr [rbp+310h+var_D0], 0Dh
/*140a05374*/  mov rax, rdi
/*140a05377*/  shr rax, 3Fh
/*140a0537b*/  mov byte ptr [rbp+310h+var_B0], 2
/*140a05382*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a05389*/  mov qword ptr [rbp+310h+var_A0], rdi
/*140a05390*/  lea rcx, [rbp+310h+var_100]
/*140a05397*/  lea rdx, [rbp+310h+var_1A0]
/*140a0539e*/  lea r8, [rbp+310h+var_E0]
/*140a053a5*/  lea r9, [rbp+310h+var_B0]
/*140a053ac*/  call sub_140307860
/*140a053b1*/  nop
/*140a053b2*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a053b9*/  jz short loc_140A053C8
/*140a053bb*/  lea rcx, [rbp+310h+var_100]
/*140a053c2*/  call sub_1400104F0
/*140a053c7*/  nop
/*140a053c8*/ loc_140A053C8: call nullsub_1
/*140a053cd*/  mov ecx, 0Ch
/*140a053d2*/  mov edx, 1
/*140a053d7*/  call sub_140001650
/*140a053dc*/  test rax, rax
/*140a053df*/  jz loc_140A063AC
/*140a053e5*/  mov rcx, 6F745F6C61746F74h
/*140a053ef*/  mov [rax], rcx
/*140a053f2*/  mov dword ptr [rax+8], 736E656Bh
/*140a053f9*/  mov qword ptr [rbp+310h+var_E0], 0Ch
/*140a05404*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a0540b*/  mov qword ptr [rbp+310h+var_D0], 0Ch
/*140a05416*/  add rdi, rsi
/*140a05419*/  mov rax, rdi
/*140a0541c*/  shr rax, 3Fh
/*140a05420*/  mov byte ptr [rbp+310h+var_B0], 2
/*140a05427*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a0542e*/  mov qword ptr [rbp+310h+var_A0], rdi
/*140a05435*/  lea rcx, [rbp+310h+var_100]
/*140a0543c*/  lea rdx, [rbp+310h+var_1A0]
/*140a05443*/  lea r8, [rbp+310h+var_E0]
/*140a0544a*/  lea r9, [rbp+310h+var_B0]
/*140a05451*/  call sub_140307860
/*140a05456*/  nop
/*140a05457*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0545e*/  jz short loc_140A0546D
/*140a05460*/  lea rcx, [rbp+310h+var_100]
/*140a05467*/  call sub_1400104F0
/*140a0546c*/  nop
/*140a0546d*/ loc_140A0546D: movups xmm0, [rbp+310h+var_1A0]
/*140a05474*/  movups [rbp+310h+var_B0+7], xmm0
/*140a0547b*/  mov rax, qword ptr [rbp+310h+var_190]
/*140a05482*/  mov qword ptr [rbp+310h+var_A0+7], rax
/*140a05489*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a05491*/  movdqu [rbp+310h+var_1A0+1], xmm0
/*140a05499*/  mov rax, qword ptr [rbp+310h+var_B0+0Fh]
/*140a054a0*/  mov qword ptr [rbp+310h+var_190], rax
/*140a054a7*/  mov rax, qword ptr [rbp+310h+var_A0+7]
/*140a054ae*/  mov qword ptr [rbp+310h+var_190+8], rax
/*140a054b5*/  jmp short loc_140A054CD
/*140a054b7*/ loc_140A054B7: mov qword ptr [rbp+310h+var_1A0+8], 0
/*140a054c2*/  mov qword ptr [rbp+310h+var_190+8], 0
/*140a054cd*/ loc_140A054CD: mov rcx, [rbp+310h+var_108]
/*140a054d4*/  mov byte ptr [rbp+310h+var_1A0], 5
/*140a054db*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*140a054df*/  setnz al
/*140a054e2*/  cmp rcx, 6
/*140a054e6*/  setz sil
/*140a054ea*/  and sil, al
/*140a054ed*/  cmp sil, 1
/*140a054f1*/  jnz short loc_140A0552B
/*140a054f3*/  mov eax, 676E656Ch
/*140a054f8*/  mov rcx, [rbp+310h+var_118]
/*140a054ff*/  xor eax, [rcx]
/*140a05501*/  movzx ecx, word ptr [rcx+4]
/*140a05505*/  xor ecx, 6874h
/*140a0550b*/  xor edi, edi
/*140a0550d*/  or ecx, eax
/*140a0550f*/  setz dil
/*140a05513*/  lea rax, aIncomplete; "incomplete"
/*140a0551a*/  lea rbx, aCompleted_1; "completed"
/*140a05521*/  cmovz rbx, rax
/*140a05525*/  add rdi, 9
/*140a05529*/  jmp short loc_140A05537
/*140a0552b*/ loc_140A0552B: mov edi, 9
/*140a05530*/  lea rbx, aCompleted_1; "completed"
/*140a05537*/ loc_140A05537: mov qword ptr [rbp+310h+var_158], 0
/*140a05542*/  mov [rbp+310h+var_148], 0
/*140a0554d*/  call nullsub_1
/*140a05552*/  mov ecx, 2
/*140a05557*/  mov edx, 1
/*140a0555c*/  call sub_140001650
/*140a05561*/  test rax, rax
/*140a05564*/  jz loc_140A0636D
/*140a0556a*/  mov word ptr [rax], 6469h
/*140a0556f*/  mov qword ptr [rbp+310h+var_E0], 2
/*140a0557a*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05581*/  mov qword ptr [rbp+310h+var_D0], 2
/*140a0558c*/  mov r14, [rbp+310h+var_278]
/*140a05593*/  test r14, r14
/*140a05596*/  jns short loc_140A055B3
/*140a05598*/  xor r13d, r13d
/*140a0559b*/ loc_140A0559B: mov [rbp+310h+var_171], 1
/*140a055a2*/ loc_140A055A2: mov rcx, r13
/*140a055a5*/  mov rdx, r14
/*140a055a8*/  call sub_1416C2D4B
/*140a055ae*/ loc_140A055AE: jmp loc_140A06836
/*140a055b3*/ loc_140A055B3: jz short loc_140A0560E
/*140a055b5*/  mov [rbp+310h+var_160], rbx
/*140a055bc*/  mov ebx, esi
/*140a055be*/  mov rsi, r13
/*140a055c1*/  mov r12, [rbp+310h+var_280]
/*140a055c8*/  call nullsub_1
/*140a055cd*/  mov r13d, 1
/*140a055d3*/  mov edx, 1
/*140a055d8*/  mov rcx, r14
/*140a055db*/  call sub_140001650
/*140a055e0*/  test rax, rax
/*140a055e3*/  jz short loc_140A0559B
/*140a055e5*/  mov r15, rax
/*140a055e8*/  mov rcx, rax
/*140a055eb*/  mov rdx, r12
/*140a055ee*/  mov r8, r14
/*140a055f1*/  call sub_141684120
/*140a055f6*/  mov r13, rsi
/*140a055f9*/  mov r12, 745F74757074756Fh
/*140a05603*/  mov esi, ebx
/*140a05605*/  mov rbx, [rbp+310h+var_160]
/*140a0560c*/  jmp short loc_140A05614
/*140a0560e*/ loc_140A0560E: mov r15d, 1
/*140a05614*/ loc_140A05614: mov byte ptr [rbp+310h+var_B0], 3
/*140a0561b*/  mov qword ptr [rbp+310h+var_B0+8], r14
/*140a05622*/  mov qword ptr [rbp+310h+var_A0], r15
/*140a05629*/  mov qword ptr [rbp+310h+var_A0+8], r14
/*140a05630*/  mov [rbp+310h+var_171], 0
/*140a05637*/ loc_140A05637: lea rcx, [rbp+310h+var_100]
/*140a0563e*/  lea rdx, [rbp+310h+var_158]
/*140a05645*/  lea r8, [rbp+310h+var_E0]
/*140a0564c*/  lea r9, [rbp+310h+var_B0]
/*140a05653*/  call sub_140307860
/*140a05658*/  nop
/*140a05659*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05660*/  jz short loc_140A0566F
/*140a05662*/ loc_140A05662: lea rcx, [rbp+310h+var_100]
/*140a05669*/  call sub_1400104F0
/*140a0566e*/  nop
/*140a0566f*/ loc_140A0566F: call nullsub_1
/*140a05674*/  mov ecx, 6
/*140a05679*/  mov edx, 1
/*140a0567e*/  call sub_140001650
/*140a05683*/  test rax, rax
/*140a05686*/  jz loc_140A063D3
/*140a0568c*/  mov word ptr [rax+4], 7463h
/*140a05692*/  mov dword ptr [rax], 656A626Fh
/*140a05698*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a056a3*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a056aa*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a056b5*/  call nullsub_1
/*140a056ba*/  mov ecx, 8
/*140a056bf*/  mov edx, 1
/*140a056c4*/  call sub_140001650
/*140a056c9*/  test rax, rax
/*140a056cc*/  mov [rbp+310h+var_160], rax
/*140a056d3*/  jz loc_140A063E8
/*140a056d9*/  mov rcx, 65736E6F70736572h
/*140a056e3*/  mov [rax], rcx
/*140a056e6*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a056ed*/  mov qword ptr [rbp+310h+var_B0+8], 8
/*140a056f8*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a056ff*/  mov qword ptr [rbp+310h+var_A0+8], 8
/*140a0570a*/ loc_140A0570A: lea rcx, [rbp+310h+var_100]
/*140a05711*/  lea rdx, [rbp+310h+var_158]
/*140a05718*/  lea r8, [rbp+310h+var_E0]
/*140a0571f*/  lea r9, [rbp+310h+var_B0]
/*140a05726*/  call sub_140307860
/*140a0572b*/  nop
/*140a0572c*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05733*/  jz short loc_140A05742
/*140a05735*/ loc_140A05735: lea rcx, [rbp+310h+var_100]
/*140a0573c*/  call sub_1400104F0
/*140a05741*/  nop
/*140a05742*/ loc_140A05742: call nullsub_1
/*140a05747*/  mov ecx, 0Ah
/*140a0574c*/  mov edx, 1
/*140a05751*/  call sub_140001650
/*140a05756*/  test rax, rax
/*140a05759*/  jz loc_140A063FD
/*140a0575f*/  mov rcx, 5F64657461657263h
/*140a05769*/  mov [rax], rcx
/*140a0576c*/  mov word ptr [rax+8], 7461h
/*140a05772*/  mov qword ptr [rbp+310h+var_E0], 0Ah
/*140a0577d*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05784*/  mov qword ptr [rbp+310h+var_D0], 0Ah
/*140a0578f*/  mov [rbp+310h+var_172], 1
/*140a05796*/ loc_140A05796: lea rcx, [rbp+310h+var_1B8]
/*140a0579d*/  call sub_140FFA6E0
/*140a057a2*/  nop
/*140a057a3*/  mov eax, dword ptr [rbp+310h+var_1B8]
/*140a057a9*/  mov r8d, eax
/*140a057ac*/  sar r8d, 0Dh
/*140a057b0*/  lea edx, [r8-1]
/*140a057b4*/  xor ecx, ecx
/*140a057b6*/  test r8d, r8d
/*140a057b9*/  jg short loc_140A057E0
/*140a057bb*/  mov ecx, 1
/*140a057c0*/  sub ecx, r8d
/*140a057c3*/  imul rcx, 51EB851Fh
/*140a057ca*/  shr rcx, 27h
/*140a057ce*/  inc ecx
/*140a057d0*/  imul r8d, ecx, 190h
/*140a057d7*/  add edx, r8d
/*140a057da*/  imul ecx, 0FFFDC54Fh
/*140a057e0*/ loc_140A057E0: movsxd r8, edx
/*140a057e3*/  imul rdx, r8, 51EB851Fh
/*140a057ea*/  mov r9, rdx
/*140a057ed*/  shr r9, 3Fh
/*140a057f1*/  sar rdx, 25h
/*140a057f5*/  add edx, r9d
/*140a057f8*/  imul r8d, 5B5h
/*140a057ff*/  sar r8d, 2
/*140a05803*/  shr eax, 4
/*140a05806*/  and eax, 1FFh
/*140a0580b*/  add eax, ecx
/*140a0580d*/  mov ecx, dword ptr [rbp+310h+var_1B8+4]
/*140a05813*/  sub eax, edx
/*140a05815*/  sar edx, 2
/*140a05818*/  add eax, r8d
/*140a0581b*/  add eax, edx
/*140a0581d*/  add eax, 0FFF506C5h
/*140a05822*/  cdqe
/*140a05824*/  imul rax, 15180h
/*140a0582b*/  add rax, rcx
/*140a0582e*/  mov rcx, rax
/*140a05831*/  shr rcx, 3Fh
/*140a05835*/  mov byte ptr [rbp+310h+var_B0], 2
/*140a0583c*/  mov qword ptr [rbp+310h+var_B0+8], rcx
/*140a05843*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a0584a*/  mov [rbp+310h+var_172], 0
/*140a05851*/  lea rcx, [rbp+310h+var_100]
/*140a05858*/  lea rdx, [rbp+310h+var_158]
/*140a0585f*/  lea r8, [rbp+310h+var_E0]
/*140a05866*/  lea r9, [rbp+310h+var_B0]
/*140a0586d*/  call sub_140307860
/*140a05872*/  nop
/*140a05873*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a0587a*/  jz short loc_140A05889
/*140a0587c*/ loc_140A0587C: lea rcx, [rbp+310h+var_100]
/*140a05883*/  call sub_1400104F0
/*140a05888*/  nop
/*140a05889*/ loc_140A05889: call nullsub_1
/*140a0588e*/  mov ecx, 6
/*140a05893*/  mov edx, 1
/*140a05898*/  call sub_140001650
/*140a0589d*/  test rax, rax
/*140a058a0*/  jz loc_140A06412
/*140a058a6*/  mov word ptr [rax+4], 7375h
/*140a058ac*/  mov dword ptr [rax], 74617473h
/*140a058b2*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a058bd*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a058c4*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a058cf*/  call nullsub_1
/*140a058d4*/  mov edx, 1
/*140a058d9*/  mov rcx, rdi
/*140a058dc*/  call sub_140001650
/*140a058e1*/  test rax, rax
/*140a058e4*/  mov [rbp+310h+var_160], rax
/*140a058eb*/  jz loc_140A06427
/*140a058f1*/  mov r14, rax
/*140a058f4*/  mov rcx, rax
/*140a058f7*/  mov rdx, rbx
/*140a058fa*/  mov r8, rdi
/*140a058fd*/  call sub_141684120
/*140a05902*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a05909*/  mov qword ptr [rbp+310h+var_B0+8], rdi
/*140a05910*/  mov qword ptr [rbp+310h+var_A0], r14
/*140a05917*/  mov qword ptr [rbp+310h+var_A0+8], rdi
/*140a0591e*/ loc_140A0591E: lea rcx, [rbp+310h+var_100]
/*140a05925*/  lea rdx, [rbp+310h+var_158]
/*140a0592c*/  lea r8, [rbp+310h+var_E0]
/*140a05933*/  lea r9, [rbp+310h+var_B0]
/*140a0593a*/  call sub_140307860
/*140a0593f*/  nop
/*140a05940*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05947*/  jz short loc_140A05956
/*140a05949*/ loc_140A05949: lea rcx, [rbp+310h+var_100]
/*140a05950*/  call sub_1400104F0
/*140a05955*/  nop
/*140a05956*/ loc_140A05956: call nullsub_1
/*140a0595b*/  mov edi, 1
/*140a05960*/  mov ecx, 5
/*140a05965*/  mov edx, 1
/*140a0596a*/  call sub_140001650
/*140a0596f*/  test rax, rax
/*140a05972*/  jz loc_140A0643A
/*140a05978*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*140a0597c*/  mov dword ptr [rax], 65646F6Dh
/*140a05982*/  mov qword ptr [rbp+310h+var_E0], 5
/*140a0598d*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05994*/  mov qword ptr [rbp+310h+var_D0], 5
/*140a0599f*/  cmp byte ptr [rbp+310h+var_1E0], 0
/*140a059a6*/  jnz short loc_140A059DF
/*140a059a8*/  call nullsub_1
/*140a059ad*/  mov edx, 1
/*140a059b2*/  mov rbx, [rbp+310h+var_240]
/*140a059b9*/  mov rcx, rbx
/*140a059bc*/  call sub_140001650
/*140a059c1*/  test rax, rax
/*140a059c4*/  jz loc_140A06479
/*140a059ca*/  mov rdi, rax
/*140a059cd*/  mov rcx, rax
/*140a059d0*/  mov rdx, [rbp+310h+var_260]
/*140a059d7*/  mov r8, rbx
/*140a059da*/  call sub_141684120
/*140a059df*/ loc_140A059DF: mov byte ptr [rbp+310h+var_B0], 3
/*140a059e6*/  mov rax, [rbp+310h+var_240]
/*140a059ed*/  mov qword ptr [rbp+310h+var_B0+8], rax
/*140a059f4*/  mov qword ptr [rbp+310h+var_A0], rdi
/*140a059fb*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a05a02*/  mov [rbp+310h+var_173], 0
/*140a05a09*/ loc_140A05A09: lea rcx, [rbp+310h+var_100]
/*140a05a10*/  lea rdx, [rbp+310h+var_158]
/*140a05a17*/  lea r8, [rbp+310h+var_E0]
/*140a05a1e*/  lea r9, [rbp+310h+var_B0]
/*140a05a25*/  call sub_140307860
/*140a05a2a*/  nop
/*140a05a2b*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05a32*/  jz short loc_140A05A41
/*140a05a34*/ loc_140A05A34: lea rcx, [rbp+310h+var_100]
/*140a05a3b*/  call sub_1400104F0
/*140a05a40*/  nop
/*140a05a41*/ loc_140A05A41: call nullsub_1
/*140a05a46*/  mov ecx, 6
/*140a05a4b*/  mov edx, 1
/*140a05a50*/  call sub_140001650
/*140a05a55*/  test rax, rax
/*140a05a58*/  jz loc_140A0644F
/*140a05a5e*/  mov word ptr [rax+4], 7475h
/*140a05a64*/  mov dword ptr [rax], 7074756Fh
/*140a05a6a*/  mov qword ptr [rbp+310h+var_E0], 6
/*140a05a75*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05a7c*/  mov qword ptr [rbp+310h+var_D0], 6
/*140a05a87*/  mov [rbp+310h+var_10F], 1
/*140a05a8e*/ loc_140A05A8E: lea rcx, [rbp+310h+var_B0]
/*140a05a95*/  lea rdx, [rbp+310h+var_1D0]
/*140a05a9c*/  call sub_140467C90
/*140a05aa1*/  nop
/*140a05aa2*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a05aa9*/  jz loc_140A06063
/*140a05aaf*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a05ab7*/  movups xmm1, [rbp+310h+var_A0]
/*140a05abe*/  movaps [rbp+310h+var_F0], xmm1
/*140a05ac5*/  movdqa [rbp+310h+var_100], xmm0
/*140a05acd*/  mov [rbp+310h+var_10F], 0
/*140a05ad4*/  lea rcx, [rbp+310h+var_B0]
/*140a05adb*/  lea rdx, [rbp+310h+var_158]
/*140a05ae2*/  lea r8, [rbp+310h+var_E0]
/*140a05ae9*/  lea r9, [rbp+310h+var_100]
/*140a05af0*/  call sub_140307860
/*140a05af5*/  nop
/*140a05af6*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a05afd*/  jz short loc_140A05B0C
/*140a05aff*/ loc_140A05AFF: lea rcx, [rbp+310h+var_B0]
/*140a05b06*/  call sub_1400104F0
/*140a05b0b*/  nop
/*140a05b0c*/ loc_140A05B0C: call nullsub_1
/*140a05b11*/  mov ecx, 0Bh
/*140a05b16*/  mov edx, 1
/*140a05b1b*/  call sub_140001650
/*140a05b20*/  test rax, rax
/*140a05b23*/  jz loc_140A06464
/*140a05b29*/  mov [rax], r12
/*140a05b2c*/  mov dword ptr [rax+7], 74786574h
/*140a05b33*/  mov qword ptr [rbp+310h+var_E0], 0Bh
/*140a05b3e*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05b45*/  mov qword ptr [rbp+310h+var_D0], 0Bh
/*140a05b50*/  mov rdi, [rbp+310h+var_220]
/*140a05b57*/  test rdi, rdi
/*140a05b5a*/  jns short loc_140A05B77
/*140a05b5c*/  xor r15d, r15d
/*140a05b5f*/ loc_140A05B5F: mov [rbp+310h+var_174], 1
/*140a05b66*/ loc_140A05B66: mov rcx, r15
/*140a05b69*/  mov rdx, rdi
/*140a05b6c*/  call sub_1416C2D4B
/*140a05b72*/ loc_140A05B72: jmp loc_140A06836
/*140a05b77*/ loc_140A05B77: jz short loc_140A05BB0
/*140a05b79*/  mov r14, [rbp+310h+var_228]
/*140a05b80*/  call nullsub_1
/*140a05b85*/  mov r15d, 1
/*140a05b8b*/  mov edx, 1
/*140a05b90*/  mov rcx, rdi
/*140a05b93*/  call sub_140001650
/*140a05b98*/  test rax, rax
/*140a05b9b*/  jz short loc_140A05B5F
/*140a05b9d*/  mov rbx, rax
/*140a05ba0*/  mov rcx, rax
/*140a05ba3*/  mov rdx, r14
/*140a05ba6*/  mov r8, rdi
/*140a05ba9*/  call sub_141684120
/*140a05bae*/  jmp short loc_140A05BB5
/*140a05bb0*/ loc_140A05BB0: mov ebx, 1
/*140a05bb5*/ loc_140A05BB5: mov byte ptr [rbp+310h+var_B0], 3
/*140a05bbc*/  mov qword ptr [rbp+310h+var_B0+8], rdi
/*140a05bc3*/  mov qword ptr [rbp+310h+var_A0], rbx
/*140a05bca*/  mov qword ptr [rbp+310h+var_A0+8], rdi
/*140a05bd1*/  mov [rbp+310h+var_174], 0
/*140a05bd8*/ loc_140A05BD8: lea rcx, [rbp+310h+var_100]
/*140a05bdf*/  lea rdx, [rbp+310h+var_158]
/*140a05be6*/  lea r8, [rbp+310h+var_E0]
/*140a05bed*/  lea r9, [rbp+310h+var_B0]
/*140a05bf4*/  call sub_140307860
/*140a05bf9*/  nop
/*140a05bfa*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05c01*/  jz short loc_140A05C10
/*140a05c03*/ loc_140A05C03: lea rcx, [rbp+310h+var_100]
/*140a05c0a*/  call sub_1400104F0
/*140a05c0f*/  nop
/*140a05c10*/ loc_140A05C10: call nullsub_1
/*140a05c15*/  mov ecx, 5
/*140a05c1a*/  mov edx, 1
/*140a05c1f*/  call sub_140001650
/*140a05c24*/  test rax, rax
/*140a05c27*/  jz loc_140A06493
/*140a05c2d*/  mov byte ptr [rax+4], 65h ; 'e'
/*140a05c31*/  mov dword ptr [rax], 67617375h
/*140a05c37*/  mov qword ptr [rbp+310h+var_E0], 5
/*140a05c42*/  mov qword ptr [rbp+310h+var_E0+8], rax
/*140a05c49*/  mov qword ptr [rbp+310h+var_D0], 5
/*140a05c54*/  mov [rbp+310h+var_110], 1
/*140a05c5b*/ loc_140A05C5B: lea rcx, [rbp+310h+var_B0]
/*140a05c62*/  lea rdx, [rbp+310h+var_1A0]
/*140a05c69*/  call sub_140B842D0
/*140a05c6e*/  nop
/*140a05c6f*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a05c76*/  jz loc_140A060A2
/*140a05c7c*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a05c84*/  movups xmm1, [rbp+310h+var_A0]
/*140a05c8b*/  movaps [rbp+310h+var_F0], xmm1
/*140a05c92*/  movdqa [rbp+310h+var_100], xmm0
/*140a05c9a*/  mov [rbp+310h+var_110], 0
/*140a05ca1*/  lea rcx, [rbp+310h+var_B0]
/*140a05ca8*/  lea rdx, [rbp+310h+var_158]
/*140a05caf*/  lea r8, [rbp+310h+var_E0]
/*140a05cb6*/  lea r9, [rbp+310h+var_100]
/*140a05cbd*/  call sub_140307860
/*140a05cc2*/  nop
/*140a05cc3*/  cmp byte ptr [rbp+310h+var_B0], 0FFh
/*140a05cca*/  jz short loc_140A05CD9
/*140a05ccc*/ loc_140A05CCC: lea rcx, [rbp+310h+var_B0]
/*140a05cd3*/  call sub_1400104F0
/*140a05cd8*/  nop
/*140a05cd9*/ loc_140A05CD9: movdqu xmm0, [rbp+310h+var_158]
/*140a05ce1*/  movdqu [rbp+310h+var_E0+8], xmm0
/*140a05ce9*/  mov rax, [rbp+310h+var_148]
/*140a05cf0*/  mov qword ptr [rbp+310h+var_D0+8], rax
/*140a05cf7*/  mov byte ptr [rbp+310h+var_E0], 5
/*140a05cfe*/  test sil, sil
/*140a05d01*/  jz loc_140A05E86
/*140a05d07*/  mov eax, 676E656Ch
/*140a05d0c*/  mov rcx, [rbp+310h+var_118]
/*140a05d13*/  xor eax, [rcx]
/*140a05d15*/  movzx ecx, word ptr [rcx+4]
/*140a05d19*/  xor ecx, 6874h
/*140a05d1f*/  or ecx, eax
/*140a05d21*/  jnz loc_140A05E86
/*140a05d27*/  mov qword ptr [rbp+310h+var_1B8], 0
/*140a05d32*/  mov [rbp+310h+var_1A8], 0
/*140a05d3d*/  call nullsub_1
/*140a05d42*/  mov ecx, 6
/*140a05d47*/  mov edx, 1
/*140a05d4c*/  call sub_140001650
/*140a05d51*/  test rax, rax
/*140a05d54*/  jz loc_140A064A8
/*140a05d5a*/  mov word ptr [rax+4], 6E6Fh
/*140a05d60*/  mov dword ptr [rax], 73616572h
/*140a05d66*/  mov qword ptr [rbp+310h+var_158], 6
/*140a05d71*/  mov qword ptr [rbp+310h+var_158+8], rax
/*140a05d78*/  mov [rbp+310h+var_148], 6
/*140a05d83*/  call nullsub_1
/*140a05d88*/  mov ecx, 11h
/*140a05d8d*/  mov edx, 1
/*140a05d92*/  call sub_140001650
/*140a05d97*/  test rax, rax
/*140a05d9a*/  mov [rbp+310h+var_1E0], rax
/*140a05da1*/  jz loc_140A064BD
/*140a05da7*/  movdqu xmm0, xmmword ptr cs:aMaxOutputToken; "max_output_tokens"
/*140a05daf*/  movdqu xmmword ptr [rax], xmm0
/*140a05db3*/  mov byte ptr [rax+10h], 73h ; 's'
/*140a05db7*/  mov byte ptr [rbp+310h+var_B0], 3
/*140a05dbe*/  mov qword ptr [rbp+310h+var_B0+8], 11h
/*140a05dc9*/  mov qword ptr [rbp+310h+var_A0], rax
/*140a05dd0*/  mov qword ptr [rbp+310h+var_A0+8], 11h
/*140a05ddb*/ loc_140A05DDB: lea rcx, [rbp+310h+var_100]
/*140a05de2*/  lea rdx, [rbp+310h+var_1B8]
/*140a05de9*/  lea r8, [rbp+310h+var_158]
/*140a05df0*/  lea r9, [rbp+310h+var_B0]
/*140a05df7*/  call sub_140307860
/*140a05dfc*/  nop
/*140a05dfd*/  cmp byte ptr [rbp+310h+var_100], 0FFh
/*140a05e04*/  jz short loc_140A05E13
/*140a05e06*/ loc_140A05E06: lea rcx, [rbp+310h+var_100]
/*140a05e0d*/  call sub_1400104F0
/*140a05e12*/  nop
/*140a05e13*/ loc_140A05E13: movdqu xmm0, [rbp+310h+var_1B8]
/*140a05e1b*/  movdqu [rbp+310h+var_B0+8], xmm0
/*140a05e23*/  mov rax, [rbp+310h+var_1A8]
/*140a05e2a*/  mov qword ptr [rbp+310h+var_A0+8], rax
/*140a05e31*/  mov byte ptr [rbp+310h+var_B0], 5
/*140a05e38*/  mov [rbp+310h+var_175], 1
/*140a05e3f*/ loc_140A05E3F: lea rcx, aIncompleteDeta; "incomplete_details"
/*140a05e46*/  lea r8, [rbp+310h+var_E0]
/*140a05e4d*/  mov edx, 12h
/*140a05e52*/  call sub_141433E50
/*140a05e57*/  nop
/*140a05e58*/ loc_140A05E58: mov [rbp+310h+var_1E0], rax
/*140a05e5f*/  mov rcx, rax
/*140a05e62*/  call sub_1400104F0
/*140a05e67*/  nop
/*140a05e68*/  movdqu xmm0, [rbp+310h+var_B0]
/*140a05e70*/  movups xmm1, [rbp+310h+var_A0]
/*140a05e77*/  mov rax, [rbp+310h+var_1E0]
/*140a05e7e*/  movups xmmword ptr [rax+10h], xmm1
/*140a05e82*/  movdqu xmmword ptr [rax], xmm0
/*140a05e86*/ loc_140A05E86: movzx eax, byte ptr [rbp+310h+var_E0]
/*140a05e8d*/  mov rcx, qword ptr [rbp+310h+var_E0+1]
/*140a05e94*/  mov edx, dword ptr [rbp+310h+var_E0+9]
/*140a05e9a*/  movzx r8d, word ptr [rbp+310h+var_E0+0Dh]
/*140a05ea2*/  movzx r9d, byte ptr [rbp+310h+var_E0+0Fh]
/*140a05eaa*/  mov r10, qword ptr [rbp+310h+var_D0]
/*140a05eb1*/  mov [r13+10h], r10
/*140a05eb5*/  mov r10, qword ptr [rbp+310h+var_D0+8]
/*140a05ebc*/  mov [r13+18h], r10
/*140a05ec0*/  mov [r13+0], al
/*140a05ec4*/  mov [r13+1], rcx
/*140a05ec8*/  mov [r13+9], edx
/*140a05ecc*/  mov [r13+0Dh], r8w
/*140a05ed1*/  mov [r13+0Fh], r9b
/*140a05ed5*/  mov rax, [rbp+310h+var_118]
/*140a05edc*/  mov [rbp+310h+var_140], rax
/*140a05ee3*/  mov rax, [rbp+310h+var_108]
/*140a05eea*/  mov [rbp+310h+var_128], rax
/*140a05ef1*/ loc_140A05EF1: lea rcx, [rbp+310h+var_1A0]
/*140a05ef8*/  call sub_1400104F0
/*140a05efd*/  nop
/*140a05efe*/  mov rdx, [rbp+310h+var_108]
/*140a05f05*/  test rdx, rdx
/*140a05f08*/  jle short loc_140A05F1C
/*140a05f0a*/  mov r8d, 1
/*140a05f10*/  mov rcx, [rbp+310h+var_118]
/*140a05f17*/  call sub_140001660
/*140a05f1c*/ loc_140A05F1C: mov rdx, [rbp+310h+var_230]
/*140a05f23*/  test rdx, rdx
/*140a05f26*/  jz short loc_140A05F3A
/*140a05f28*/  mov rcx, [rbp+310h+var_228]
/*140a05f2f*/  mov r8d, 1
/*140a05f35*/  call sub_140001660
/*140a05f3a*/ loc_140A05F3A: mov rcx, [rbp+310h+var_1C8]
/*140a05f41*/  mov rax, [rbp+310h+var_1C0]
/*140a05f48*/  mov [rbp+310h+var_118], rax
/*140a05f4f*/  mov [rbp+310h+var_108], 0
/*140a05f5a*/  mov [rbp+310h+var_1E0], rcx
/*140a05f61*/  nop word ptr [rax+rax+00000000h]
/*140a05f70*/ loc_140A05F70: mov rax, [rbp+310h+var_108]
/*140a05f77*/  cmp [rbp+310h+var_118], rax
/*140a05f7e*/  jz short loc_140A05F99
/*140a05f80*/  inc rax
/*140a05f83*/  mov [rbp+310h+var_108], rax
/*140a05f8a*/  lea rsi, [rcx+20h]
/*140a05f8e*/ loc_140A05F8E: call sub_1402C3260
/*140a05f93*/  nop
/*140a05f94*/  mov rcx, rsi
/*140a05f97*/  jmp short loc_140A05F70
/*140a05f99*/ loc_140A05F99: mov rdx, [rbp+310h+var_1D0]
/*140a05fa0*/  test rdx, rdx
/*140a05fa3*/  jz short loc_140A05FBB
/*140a05fa5*/  mov rcx, [rbp+310h+var_1C8]
/*140a05fac*/  shl rdx, 5
/*140a05fb0*/  mov r8d, 8
/*140a05fb6*/  call sub_140001660
/*140a05fbb*/ loc_140A05FBB: mov rdx, [rbp+310h+var_240]
/*140a05fc2*/  test rdx, rdx
/*140a05fc5*/  jz short loc_140A05FD9
/*140a05fc7*/  mov r8d, 1
/*140a05fcd*/  mov rcx, [rbp+310h+var_260]
/*140a05fd4*/  call sub_140001660
/*140a05fd9*/ loc_140A05FD9: mov rdx, [rbp+310h+var_288]
/*140a05fe0*/  test rdx, rdx
/*140a05fe3*/  jz short loc_140A05FF7
/*140a05fe5*/  mov rcx, [rbp+310h+var_280]
/*140a05fec*/  mov r8d, 1
/*140a05ff2*/  call sub_140001660
/*140a05ff7*/ loc_140A05FF7: mov rax, r13
/*140a05ffa*/  movaps xmm6, [rbp+310h+var_70]
/*140a06001*/  movaps xmm7, [rbp+310h+var_60]
/*140a06008*/  movaps xmm8, [rbp+310h+var_50]
/*140a06010*/  add rsp, 358h
/*140a06017*/  pop rbx
/*140a06018*/  pop rdi
/*140a06019*/  pop rsi
/*140a0601a*/  pop r12
/*140a0601c*/  pop r13
/*140a0601e*/  pop r14
/*140a06020*/  pop r15
/*140a06022*/  pop rbp
/*140a06023*/  retn
/*140a06024*/ loc_140A06024: mov rax, [rax+10h]
/*140a06028*/  xor esi, esi
/*140a0602a*/  test rax, rax
/*140a0602d*/  cmovg rsi, rax
/*140a06031*/  jmp loc_140A0521B
/*140a06036*/ loc_140A06036: mov rax, [rax+10h]
/*140a0603a*/  xor edi, edi
/*140a0603c*/  test rax, rax
/*140a0603f*/  cmovg rdi, rax
/*140a06043*/  jmp loc_140A05271
/*140a06048*/ loc_140A06048: xor r15d, r15d
/*140a0604b*/ loc_140A0604B: mov [rbp+310h+var_16D], 1
/*140a06052*/ loc_140A06052: mov rcx, r15
/*140a06055*/  mov rdx, r12
/*140a06058*/  call sub_1416C2D4B
/*140a0605e*/  jmp loc_140A06836
/*140a06063*/ loc_140A06063: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a0606a*/  mov qword ptr [rbp+310h+var_100], rax
/*140a06071*/ loc_140A06071: lea rax, off_1417A7E08; "src\\core\\relay\\translator.rs"
/*140a06078*/  mov [rsp+390h+var_370], rax
/*140a0607d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a06084*/  lea r9, off_1417A5560
/*140a0608b*/  lea r8, [rbp+310h+var_100]
/*140a06092*/  mov edx, 2Bh ; '+'
/*140a06097*/  call sub_1416C3060
/*140a0609d*/  jmp loc_140A06836
/*140a060a2*/ loc_140A060A2: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a060a9*/  mov qword ptr [rbp+310h+var_100], rax
/*140a060b0*/ loc_140A060B0: lea rax, off_1417A7E08; "src\\core\\relay\\translator.rs"
/*140a060b7*/  mov [rsp+390h+var_370], rax
/*140a060bc*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a060c3*/  lea r9, off_1417A5560
/*140a060ca*/  lea r8, [rbp+310h+var_100]
/*140a060d1*/  mov edx, 2Bh ; '+'
/*140a060d6*/  call sub_1416C3060
/*140a060dc*/  jmp loc_140A06836
/*140a060e1*/ loc_140A060E1: xor r13d, r13d
/*140a060e4*/ loc_140A060E4: mov [rbp+310h+var_B1], 1
/*140a060eb*/ loc_140A060EB: mov rcx, r13
/*140a060ee*/  mov rdx, [rbp+310h+var_238]
/*140a060f5*/  call sub_1416C2D4B
/*140a060fb*/  jmp loc_140A06836
/*140a06100*/ loc_140A06100: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a06107*/  mov [rsp+390h+var_370], rax
/*140a0610c*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*140a06113*/  lea r9, unk_1417A5580
/*140a0611a*/  lea r8, [rbp+310h+var_211]
/*140a06121*/  mov edx, 37h ; '7'
/*140a06126*/  call sub_1416C3060
/*140a0612c*/  jmp loc_140A06836
/*140a06131*/ loc_140A06131: mov [rbp+310h+var_119], 1
/*140a06138*/ loc_140A06138: mov ecx, 8
/*140a0613d*/  mov edx, 20h ; ' '
/*140a06142*/  call sub_1416C2D31
/*140a06148*/  jmp loc_140A06836
/*140a0614d*/ loc_140A0614D: mov [rbp+310h+var_11A], 1
/*140a06154*/ loc_140A06154: mov ecx, 8
/*140a06159*/  mov edx, 20h ; ' '
/*140a0615e*/  call sub_1416C2D31
/*140a06164*/  jmp loc_140A06836
/*140a06169*/ loc_140A06169: mov [rbp+310h+var_11B], 1
/*140a06170*/ loc_140A06170: mov ecx, 8
/*140a06175*/  mov edx, 20h ; ' '
/*140a0617a*/  call sub_1416C2D31
/*140a06180*/  jmp loc_140A06836
/*140a06185*/ loc_140A06185: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a0618c*/  mov qword ptr [rbp+310h+var_100], rax
/*140a06193*/ loc_140A06193: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a0619a*/  mov [rsp+390h+var_370], rax
/*140a0619f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a061a6*/  lea r9, off_1417A5560
/*140a061ad*/  lea r8, [rbp+310h+var_100]
/*140a061b4*/  mov edx, 2Bh ; '+'
/*140a061b9*/  call sub_1416C3060
/*140a061bf*/  jmp loc_140A06836
/*140a061c4*/ loc_140A061C4: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a061cb*/  mov qword ptr [rbp+310h+var_100], rax
/*140a061d2*/ loc_140A061D2: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a061d9*/  mov [rsp+390h+var_370], rax
/*140a061de*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a061e5*/  lea r9, off_1417A5560
/*140a061ec*/  lea r8, [rbp+310h+var_100]
/*140a061f3*/  mov edx, 2Bh ; '+'
/*140a061f8*/  call sub_1416C3060
/*140a061fe*/  jmp loc_140A06836
/*140a06203*/ loc_140A06203: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a0620a*/  mov qword ptr [rbp+310h+var_100], rax
/*140a06211*/ loc_140A06211: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a06218*/  mov [rsp+390h+var_370], rax
/*140a0621d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a06224*/  lea r9, off_1417A5560
/*140a0622b*/  lea r8, [rbp+310h+var_100]
/*140a06232*/  mov edx, 2Bh ; '+'
/*140a06237*/  call sub_1416C3060
/*140a0623d*/  jmp loc_140A06836
/*140a06242*/ loc_140A06242: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a06249*/  mov qword ptr [rbp+310h+var_100], rax
/*140a06250*/ loc_140A06250: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a06257*/  mov [rsp+390h+var_370], rax
/*140a0625c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a06263*/  lea r9, off_1417A5560
/*140a0626a*/  lea r8, [rbp+310h+var_100]
/*140a06271*/  mov edx, 2Bh ; '+'
/*140a06276*/  call sub_1416C3060
/*140a0627c*/  jmp loc_140A06836
/*140a06281*/ loc_140A06281: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a06288*/  mov qword ptr [rbp+310h+var_100], rax
/*140a0628f*/ loc_140A0628F: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a06296*/  mov [rsp+390h+var_370], rax
/*140a0629b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a062a2*/  lea r9, off_1417A5560
/*140a062a9*/  lea r8, [rbp+310h+var_100]
/*140a062b0*/  mov edx, 2Bh ; '+'
/*140a062b5*/  call sub_1416C3060
/*140a062bb*/  jmp loc_140A06836
/*140a062c0*/ loc_140A062C0: mov rax, qword ptr [rbp+310h+var_B0+8]
/*140a062c7*/  mov qword ptr [rbp+310h+var_100], rax
/*140a062ce*/ loc_140A062CE: lea rax, off_1417A7DA8; "src\\core\\relay\\translator.rs"
/*140a062d5*/  mov [rsp+390h+var_370], rax
/*140a062da*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a062e1*/  lea r9, off_1417A5560
/*140a062e8*/  lea r8, [rbp+310h+var_100]
/*140a062ef*/  mov edx, 2Bh ; '+'
/*140a062f4*/  call sub_1416C3060
/*140a062fa*/  jmp loc_140A06836
/*140a062ff*/ loc_140A062FF: mov rdx, qword ptr [rbp+310h+var_A0]
/*140a06306*/  mov rax, [rbp+310h+var_118]
/*140a0630d*/  mov [rbp+310h+var_140], rax
/*140a06314*/  mov rax, [rbp+310h+var_108]
/*140a0631b*/  mov [rbp+310h+var_128], rax
/*140a06322*/ loc_140A06322: mov rcx, r13
/*140a06325*/  call sub_1416C2D4B
/*140a0632b*/  jmp loc_140A06836
/*140a06330*/ loc_140A06330: mov [rsp+390h+var_370], 1
/*140a06339*/  lea rcx, [rbp+310h+var_230]
/*140a06340*/  mov r9d, 1
/*140a06346*/  mov rdx, r14
/*140a06349*/  mov r8, rbx
/*140a0634c*/  call sub_141688D30
/*140a06351*/  nop
/*140a06352*/  mov r14, [rbp+310h+var_220]
/*140a06359*/  mov rsi, [rbp+310h+var_108]
/*140a06360*/  jmp loc_140A05144
/*140a06365*/ loc_140A06365: mov rdx, rsi
/*140a06368*/  jmp loc_140A023B0
/*140a0636d*/ loc_140A0636D: mov ecx, 1
/*140a06372*/  mov edx, 2
/*140a06377*/  call sub_1416C2D4B
/*140a0637d*/  jmp loc_140A06836
/*140a06382*/ loc_140A06382: mov ecx, 1
/*140a06387*/  mov edx, 0Ch
/*140a0638c*/  call sub_1416C2D4B
/*140a06392*/  jmp loc_140A06836
/*140a06397*/ loc_140A06397: mov ecx, 1
/*140a0639c*/  mov edx, 0Dh
/*140a063a1*/  call sub_1416C2D4B
/*140a063a7*/  jmp loc_140A06836
/*140a063ac*/ loc_140A063AC: mov ecx, 1
/*140a063b1*/  mov edx, 0Ch
/*140a063b6*/  call sub_1416C2D4B
/*140a063bc*/  jmp loc_140A06836
/*140a063c1*/ loc_140A063C1: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*140a063c8*/  call sub_1416C3040
/*140a063ce*/  jmp loc_140A06836
/*140a063d3*/ loc_140A063D3: mov ecx, 1
/*140a063d8*/  mov edx, 6
/*140a063dd*/  call sub_1416C2D4B
/*140a063e3*/  jmp loc_140A06836
/*140a063e8*/ loc_140A063E8: mov ecx, 1
/*140a063ed*/  mov edx, 8
/*140a063f2*/  call sub_1416C2D4B
/*140a063f8*/  jmp loc_140A06836
/*140a063fd*/ loc_140A063FD: mov ecx, 1
/*140a06402*/  mov edx, 0Ah
/*140a06407*/  call sub_1416C2D4B
/*140a0640d*/  jmp loc_140A06836
/*140a06412*/ loc_140A06412: mov ecx, 1
/*140a06417*/  mov edx, 6
/*140a0641c*/  call sub_1416C2D4B
/*140a06422*/  jmp loc_140A06836
/*140a06427*/ loc_140A06427: mov ecx, 1
/*140a0642c*/  mov rdx, rdi
/*140a0642f*/  call sub_1416C2D4B
/*140a06435*/  jmp loc_140A06836
/*140a0643a*/ loc_140A0643A: mov ecx, 1
/*140a0643f*/  mov edx, 5
/*140a06444*/  call sub_1416C2D4B
/*140a0644a*/  jmp loc_140A06836
/*140a0644f*/ loc_140A0644F: mov ecx, 1
/*140a06454*/  mov edx, 6
/*140a06459*/  call sub_1416C2D4B
/*140a0645f*/  jmp loc_140A06836
/*140a06464*/ loc_140A06464: mov ecx, 1
/*140a06469*/  mov edx, 0Bh
/*140a0646e*/  call sub_1416C2D4B
/*140a06474*/  jmp loc_140A06836
/*140a06479*/ loc_140A06479: mov [rbp+310h+var_173], 1
/*140a06480*/ loc_140A06480: mov ecx, 1
/*140a06485*/  mov rdx, rbx
/*140a06488*/  call sub_1416C2D4B
/*140a0648e*/  jmp loc_140A06836
/*140a06493*/ loc_140A06493: mov ecx, 1
/*140a06498*/  mov edx, 5
/*140a0649d*/  call sub_1416C2D4B
/*140a064a3*/  jmp loc_140A06836
/*140a064a8*/ loc_140A064A8: mov ecx, 1
/*140a064ad*/  mov edx, 6
/*140a064b2*/  call sub_1416C2D4B
/*140a064b8*/  jmp loc_140A06836
/*140a064bd*/ loc_140A064BD: mov ecx, 1
/*140a064c2*/  mov edx, 11h
/*140a064c7*/  call sub_1416C2D4B
/*140a064cd*/  jmp loc_140A06836
/*140a064d2*/ loc_140A064D2: mov ecx, 1
/*140a064d7*/  mov edx, 4
/*140a064dc*/  call sub_1416C2D4B
/*140a064e2*/  jmp loc_140A06836
/*140a064e7*/ loc_140A064E7: mov ecx, 1
/*140a064ec*/  mov edx, 9
/*140a064f1*/  call sub_1416C2D4B
/*140a064f7*/  jmp loc_140A06836
/*140a064fc*/ loc_140A064FC: mov ecx, 1
/*140a06501*/  mov edx, 2
/*140a06506*/  call sub_1416C2D4B
/*140a0650c*/  jmp loc_140A06836
/*140a06511*/ loc_140A06511: mov ecx, 1
/*140a06516*/  mov edx, 4
/*140a0651b*/  call sub_1416C2D4B
/*140a06521*/  jmp loc_140A06836
/*140a06526*/ loc_140A06526: mov ecx, 1
/*140a0652b*/  mov edx, 7
/*140a06530*/  call sub_1416C2D4B
/*140a06536*/  jmp loc_140A06836
/*140a0653b*/ loc_140A0653B: mov ecx, 1
/*140a06540*/  mov edx, 2
/*140a06545*/  call sub_1416C2D4B
/*140a0654b*/  jmp loc_140A06836
/*140a06550*/ loc_140A06550: mov ecx, 1
/*140a06555*/  mov edx, 6
/*140a0655a*/  call sub_1416C2D4B
/*140a06560*/  jmp loc_140A06836
/*140a06565*/ loc_140A06565: mov ecx, 1
/*140a0656a*/  mov edx, 9
/*140a0656f*/  call sub_1416C2D4B
/*140a06575*/  jmp loc_140A06836
/*140a0657a*/ loc_140A0657A: mov ecx, 1
/*140a0657f*/  mov edx, 7
/*140a06584*/  call sub_1416C2D4B
/*140a0658a*/  jmp loc_140A06836
/*140a0658f*/ loc_140A0658F: mov ecx, 1
/*140a06594*/  mov edx, 4
/*140a06599*/  call sub_1416C2D4B
/*140a0659f*/  jmp loc_140A06836
/*140a065a4*/ loc_140A065A4: mov ecx, 1
/*140a065a9*/  mov edx, 0Ch
/*140a065ae*/  call sub_1416C2D4B
/*140a065b4*/  jmp loc_140A06836
/*140a065b9*/ loc_140A065B9: mov ecx, 1
/*140a065be*/  mov edx, 4
/*140a065c3*/  call sub_1416C2D4B
/*140a065c9*/  jmp loc_140A06836
/*140a065ce*/ loc_140A065CE: mov ecx, 1
/*140a065d3*/  mov rdx, rsi
/*140a065d6*/  call sub_1416C2D4B
/*140a065dc*/  jmp loc_140A06836
/*140a065e1*/ loc_140A065E1: mov qword ptr [rbp+310h+var_138], rsi
/*140a065e8*/  mov rcx, [rbp+310h+var_108]
/*140a065ef*/  jmp loc_140A04E7B
/*140a065f4*/ loc_140A065F4: mov ecx, 1
/*140a065f9*/  mov edx, 4
/*140a065fe*/  call sub_1416C2D4B
/*140a06604*/  jmp loc_140A06836
/*140a06609*/ loc_140A06609: mov ecx, 1
/*140a0660e*/  mov edx, 2
/*140a06613*/  call sub_1416C2D4B
/*140a06619*/  jmp loc_140A06836
/*140a0661e*/ loc_140A0661E: mov ecx, 1
/*140a06623*/  mov edx, 4
/*140a06628*/  call sub_1416C2D4B
/*140a0662e*/  jmp loc_140A06836
/*140a06633*/ loc_140A06633: mov ecx, 1
/*140a06638*/  mov edx, 6
/*140a0663d*/  call sub_1416C2D4B
/*140a06643*/  jmp loc_140A06836
/*140a06648*/ loc_140A06648: mov ecx, 1
/*140a0664d*/  mov edx, 7
/*140a06652*/  call sub_1416C2D4B
/*140a06658*/  jmp loc_140A06836
/*140a0665d*/ loc_140A0665D: mov ecx, 1
/*140a06662*/  mov edx, 4
/*140a06667*/  call sub_1416C2D4B
/*140a0666d*/  jmp loc_140A06836
/*140a06672*/ loc_140A06672: mov ecx, 1
/*140a06677*/  mov edx, 4
/*140a0667c*/  call sub_1416C2D4B
/*140a06682*/  jmp loc_140A06836
/*140a06687*/ loc_140A06687: mov ecx, 1
/*140a0668c*/  mov edx, 0Bh
/*140a06691*/  call sub_1416C2D4B
/*140a06697*/  jmp loc_140A06836
/*140a0669c*/ loc_140A0669C: mov ecx, 1
/*140a066a1*/  mov edx, 4
/*140a066a6*/  call sub_1416C2D4B
/*140a066ac*/  jmp loc_140A06836
/*140a066b1*/ loc_140A066B1: mov ecx, 1
/*140a066b6*/  mov edx, 9
/*140a066bb*/  call sub_1416C2D4B
/*140a066c1*/  jmp loc_140A06836
/*140a066c6*/ loc_140A066C6: mov ecx, 1
/*140a066cb*/  mov edx, 6
/*140a066d0*/  call sub_1416C2D4B
/*140a066d6*/  jmp loc_140A06836
/*140a066db*/ loc_140A066DB: mov ecx, 1
/*140a066e0*/  mov edx, 9
/*140a066e5*/  call sub_1416C2D4B
/*140a066eb*/  jmp loc_140A06836
/*140a066f0*/ loc_140A066F0: mov ecx, 1
/*140a066f5*/  mov edx, 7
/*140a066fa*/  call sub_1416C2D4B
/*140a06700*/  jmp loc_140A06836
/*140a06705*/ loc_140A06705: mov ecx, 1
/*140a0670a*/  mov edx, 4
/*140a0670f*/  call sub_1416C2D4B
/*140a06715*/  jmp loc_140A06836
/*140a0671a*/ loc_140A0671A: mov ecx, 1
/*140a0671f*/  mov edx, 0Bh
/*140a06724*/  call sub_1416C2D4B
/*140a0672a*/  jmp loc_140A06836
/*140a0672f*/ loc_140A0672F: mov ecx, 1
/*140a06734*/  mov edx, 4
/*140a06739*/  call sub_1416C2D4B
/*140a0673f*/  jmp loc_140A06836
/*140a06744*/ loc_140A06744: mov qword ptr [rbp+310h+var_138+8], rbx
/*140a0674b*/  jmp loc_140A04EA8
/*140a06750*/ loc_140A06750: mov ecx, 1
/*140a06755*/  mov edx, 2
/*140a0675a*/  call sub_1416C2D4B
/*140a06760*/  jmp loc_140A06836
/*140a06765*/ loc_140A06765: mov ecx, 1
/*140a0676a*/  mov edx, 0Dh
/*140a0676f*/  call sub_1416C2D4B
/*140a06775*/  jmp loc_140A06836
/*140a0677a*/ loc_140A0677A: mov [rbp+310h+var_210], rbx
/*140a06781*/  jmp loc_140A04EDB
/*140a06786*/ loc_140A06786: mov ecx, 1
/*140a0678b*/  mov edx, 4
/*140a06790*/  call sub_1416C2D4B
/*140a06796*/  jmp loc_140A06836
/*140a0679b*/ loc_140A0679B: mov ecx, 1
/*140a067a0*/  mov edx, 0Bh
/*140a067a5*/  call sub_1416C2D4B
/*140a067ab*/  jmp loc_140A06836
/*140a067b0*/ loc_140A067B0: mov ecx, 1
/*140a067b5*/  mov edx, 9
/*140a067ba*/  call sub_1416C2D4B
/*140a067c0*/  jmp short loc_140A06836
/*140a067c2*/ loc_140A067C2: mov ecx, 1
/*140a067c7*/  mov edx, 4
/*140a067cc*/  call sub_1416C2D4B
/*140a067d2*/  jmp short loc_140A06836
/*140a067d4*/ loc_140A067D4: mov ecx, 1
/*140a067d9*/  mov edx, 7
/*140a067de*/  call sub_1416C2D4B
/*140a067e4*/  jmp short loc_140A06836
/*140a067e6*/ loc_140A067E6: mov [rbp+310h+var_16B], 1
/*140a067ed*/ loc_140A067ED: mov ecx, 1
/*140a067f2*/  mov rdx, r15
/*140a067f5*/  call sub_1416C2D4B
/*140a067fb*/  jmp short loc_140A06836
/*140a067fd*/ loc_140A067FD: mov [rbp+310h+var_16C], 1
/*140a06804*/ loc_140A06804: mov ecx, 1
/*140a06809*/  mov rdx, rsi
/*140a0680c*/  call sub_1416C2D4B
/*140a06812*/  jmp short loc_140A06836
/*140a06814*/ loc_140A06814: mov ecx, 1
/*140a06819*/  mov edx, 9
/*140a0681e*/  call sub_1416C2D4B
/*140a06824*/  jmp short loc_140A06836
/*140a06826*/ loc_140A06826: mov ecx, 1
/*140a0682b*/  mov edx, 6
/*140a06830*/  call sub_1416C2D4B
/*140a06836*/ loc_140A06836: ud2
/*140a06838*/ loc_140A06838: mov eax, 1
/*140a0683d*/  mov [rbp+310h+var_260], rax
/*140a06844*/  mov al, 1
/*140a06846*/  mov dword ptr [rbp+310h+var_1E0], eax
/*140a0684c*/  mov [rbp+310h+var_240], 0
/*140a06857*/  jmp loc_140A0240F
/*140a0685c*/ loc_140A0685C: mov [rbp+310h+var_238], r12
/*140a06863*/  jmp loc_140A060E4
