// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409D05A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r15
  const __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rax
  const __m128i *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  const __m128i *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // r1... [71668 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 432/432 retrieved (all pages fetched: True)
// disasm instructions: 2249/2249 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x1409d05a0-0x1409d05f0 size=80 type=0 succ=['0x1409d05f0'] pred=[]
// BB 0x1409d05f0-0x1409d060b size=27 type=0 succ=['0x1409d060b', '0x1409d2e81'] pred=['0x1409d05a0']
// BB 0x1409d060b-0x1409d0614 size=9 type=0 succ=['0x1409d0614', '0x1409d2e81'] pred=['0x1409d05f0']
// BB 0x1409d0614-0x1409d0626 size=18 type=0 succ=['0x1409d0626', '0x1409d2e81'] pred=['0x1409d060b']
// BB 0x1409d0626-0x1409d063a size=20 type=1 succ=['0x1409d063a', '0x1409d06c6', '0x1409d075e', '0x1409d0853', '0x1409d2e81'] pred=['0x1409d0614']
// BB 0x1409d063a-0x1409d0659 size=31 type=0 succ=['0x1409d0659', '0x1409d2e81'] pred=['0x1409d0626']
// BB 0x1409d0659-0x1409d0663 size=10 type=0 succ=['0x1409d0663', '0x1409d2e81'] pred=['0x1409d063a']
// BB 0x1409d0663-0x1409d06c6 size=99 type=0 succ=['0x1409d2e81'] pred=['0x1409d0659']
// BB 0x1409d06c6-0x1409d06f5 size=47 type=0 succ=['0x1409d06f5', '0x1409d2e81'] pred=['0x1409d0626']
// BB 0x1409d06f5-0x1409d070f size=26 type=0 succ=['0x1409d070f', '0x1409d071f'] pred=['0x1409d06c6']
// BB 0x1409d070f-0x1409d0714 size=5 type=0 succ=['0x1409d0714', '0x1409d071f'] pred=['0x1409d06f5']
// BB 0x1409d0714-0x1409d071f size=11 type=0 succ=['0x1409d071f', '0x1409d0bd5'] pred=['0x1409d070f']
// BB 0x1409d071f-0x1409d0721 size=2 type=0 succ=['0x1409d0721'] pred=['0x1409d06f5', '0x1409d070f', '0x1409d0714']
// BB 0x1409d0721-0x1409d075e size=61 type=0 succ=['0x1409d2e81'] pred=['0x1409d071f', '0x1409d0bd5']
// BB 0x1409d075e-0x1409d0785 size=39 type=0 succ=['0x1409d0785', '0x1409d092c'] pred=['0x1409d0626']
// BB 0x1409d0785-0x1409d079f size=26 type=0 succ=['0x1409d079f', '0x1409d2e81'] pred=['0x1409d075e']
// BB 0x1409d079f-0x1409d07bd size=30 type=0 succ=['0x1409d07bd', '0x1409d2e81'] pred=['0x1409d0785']
// BB 0x1409d07bd-0x1409d07db size=30 type=0 succ=['0x1409d07db', '0x1409d2e81'] pred=['0x1409d079f']
// BB 0x1409d07db-0x1409d07e4 size=9 type=0 succ=['0x1409d07e4', '0x1409d2e81'] pred=['0x1409d07bd']
// BB 0x1409d07e4-0x1409d07f1 size=13 type=0 succ=['0x1409d07f1', '0x1409d2e81'] pred=['0x1409d07db']
// BB 0x1409d07f1-0x1409d0827 size=54 type=0 succ=['0x1409d0827', '0x1409d3124'] pred=['0x1409d07e4']
// BB 0x1409d0827-0x1409d0829 size=2 type=0 succ=['0x1409d0829'] pred=['0x1409d07f1']
// BB 0x1409d0829-0x1409d0843 size=26 type=0 succ=['0x1409d0843', '0x1409d2e81'] pred=['0x1409d0827', '0x1409d314c']
// BB 0x1409d0843-0x1409d0853 size=16 type=0 succ=['0x1409d2e81'] pred=['0x1409d0829']
// BB 0x1409d0853-0x1409d0880 size=45 type=0 succ=['0x1409d0880', '0x1409d0aa2'] pred=['0x1409d0626']
// BB 0x1409d0880-0x1409d08ac size=44 type=0 succ=['0x1409d08ac', '0x1409d2e81'] pred=['0x1409d0853']
// BB 0x1409d08ac-0x1409d08c6 size=26 type=0 succ=['0x1409d08c6', '0x1409d08d6'] pred=['0x1409d0880']
// BB 0x1409d08c6-0x1409d08cb size=5 type=0 succ=['0x1409d08cb', '0x1409d08d6'] pred=['0x1409d08ac']
// BB 0x1409d08cb-0x1409d08d6 size=11 type=0 succ=['0x1409d08d6', '0x1409d1af6'] pred=['0x1409d08c6']
// BB 0x1409d08d6-0x1409d08d9 size=3 type=0 succ=['0x1409d08d9'] pred=['0x1409d08ac', '0x1409d08c6', '0x1409d08cb']
// BB 0x1409d08d9-0x1409d08fb size=34 type=0 succ=['0x1409d08fb', '0x1409d0b77'] pred=['0x1409d08d6', '0x1409d1af6']
// BB 0x1409d08fb-0x1409d090e size=19 type=1 succ=['0x1409d090e', '0x1409d1aff', '0x1409d1b1d', '0x1409d1b26', '0x1409d1b43'] pred=['0x1409d08d9']
// BB 0x1409d090e-0x1409d092c size=30 type=0 succ=['0x1409d1b5e'] pred=['0x1409d08fb']
// BB 0x1409d092c-0x1409d094a size=30 type=0 succ=['0x1409d094a', '0x1409d09e2'] pred=['0x1409d075e']
// BB 0x1409d094a-0x1409d095f size=21 type=0 succ=['0x1409d095f'] pred=['0x1409d092c']
// BB 0x1409d095f-0x1409d0964 size=5 type=0 succ=['0x1409d0964', '0x1409d09e2'] pred=['0x1409d094a']
// BB 0x1409d0964-0x1409d0969 size=5 type=0 succ=['0x1409d0969', '0x1409d09e2'] pred=['0x1409d095f']
// BB 0x1409d0969-0x1409d0972 size=9 type=0 succ=['0x1409d0972', '0x1409d09e2'] pred=['0x1409d0964']
// BB 0x1409d0972-0x1409d09ab size=57 type=0 succ=['0x1409d09ab', '0x1409d310f'] pred=['0x1409d0969']
// BB 0x1409d09ab-0x1409d09c8 size=29 type=0 succ=['0x1409d09c8', '0x1409d09d7'] pred=['0x1409d0972']
// BB 0x1409d09c8-0x1409d09d7 size=15 type=0 succ=['0x1409d09d7'] pred=['0x1409d09ab']
// BB 0x1409d09d7-0x1409d09e2 size=11 type=0 succ=['0x1409d09e2'] pred=['0x1409d09ab', '0x1409d09c8']
// BB 0x1409d09e2-0x1409d0a00 size=30 type=0 succ=['0x1409d0a00', '0x1409d0a8d'] pred=['0x1409d092c', '0x1409d095f', '0x1409d0964', '0x1409d0969', '0x1409d09d7']
// BB 0x1409d0a00-0x1409d0a1a size=26 type=0 succ=['0x1409d0a1a', '0x1409d0a8d'] pred=['0x1409d09e2']
// BB 0x1409d0a1a-0x1409d0a1f size=5 type=0 succ=['0x1409d0a1f', '0x1409d0a8d'] pred=['0x1409d0a00']
// BB 0x1409d0a1f-0x1409d0a6d size=78 type=0 succ=['0x1409d0a6d', '0x1409d0a7c'] pred=['0x1409d0a1a']
// BB 0x1409d0a6d-0x1409d0a7c size=15 type=0 succ=['0x1409d0a7c'] pred=['0x1409d0a1f']
// BB 0x1409d0a7c-0x1409d0a8d size=17 type=0 succ=['0x1409d0a8d'] pred=['0x1409d0a1f', '0x1409d0a6d']
// BB 0x1409d0a8d-0x1409d0aa2 size=21 type=0 succ=['0x1409d2e81'] pred=['0x1409d09e2', '0x1409d0a00', '0x1409d0a1a', '0x1409d0a7c']
// BB 0x1409d0aa2-0x1409d0abc size=26 type=0 succ=['0x1409d0abc', '0x1409d0acc'] pred=['0x1409d0853']
// BB 0x1409d0abc-0x1409d0ac1 size=5 type=0 succ=['0x1409d0ac1', '0x1409d0acc'] pred=['0x1409d0aa2']
// BB 0x1409d0ac1-0x1409d0acc size=11 type=0 succ=['0x1409d0acc', '0x1409d0bde'] pred=['0x1409d0abc']
// BB 0x1409d0acc-0x1409d0ace size=2 type=0 succ=['0x1409d0ace'] pred=['0x1409d0aa2', '0x1409d0abc', '0x1409d0ac1']
// BB 0x1409d0ace-0x1409d0ae8 size=26 type=0 succ=['0x1409d0ae8', '0x1409d0b19'] pred=['0x1409d0acc', '0x1409d0bde']
// BB 0x1409d0ae8-0x1409d0afb size=19 type=1 succ=['0x1409d0afb', '0x1409d0be7', '0x1409d0c05', '0x1409d0c0e', '0x1409d0c2b'] pred=['0x1409d0ace']
// BB 0x1409d0afb-0x1409d0b19 size=30 type=0 succ=['0x1409d0c46'] pred=['0x1409d0ae8']
// BB 0x1409d0b19-0x1409d0b77 size=94 type=0 succ=['0x1409d0cb0'] pred=['0x1409d0ace']
// BB 0x1409d0b77-0x1409d0bd5 size=94 type=0 succ=['0x1409d1bc8'] pred=['0x1409d08d9']
// BB 0x1409d0bd5-0x1409d0bde size=9 type=0 succ=['0x1409d0721'] pred=['0x1409d0714']
// BB 0x1409d0bde-0x1409d0be7 size=9 type=0 succ=['0x1409d0ace'] pred=['0x1409d0ac1']
// BB 0x1409d0be7-0x1409d0c05 size=30 type=0 succ=['0x1409d0c46'] pred=['0x1409d0ae8']
// BB 0x1409d0c05-0x1409d0c0e size=9 type=0 succ=['0x1409d0c46'] pred=['0x1409d0ae8']
// BB 0x1409d0c0e-0x1409d0c2b size=29 type=0 succ=['0x1409d0c46'] pred=['0x1409d0ae8']
// BB 0x1409d0c2b-0x1409d0c46 size=27 type=0 succ=['0x1409d0c46'] pred=['0x1409d0ae8']
// BB 0x1409d0c46-0x1409d0cb0 size=106 type=0 succ=['0x1409d0cb0'] pred=['0x1409d0afb', '0x1409d0be7', '0x1409d0c05', '0x1409d0c0e', '0x1409d0c2b']
// BB 0x1409d0cb0-0x1409d0cd4 size=36 type=0 succ=['0x1409d0cd4', '0x1409d0ce3'] pred=['0x1409d0b19', '0x1409d0c46']
// BB 0x1409d0cd4-0x1409d0cd9 size=5 type=0 succ=['0x1409d0cd9', '0x1409d0ce3'] pred=['0x1409d0cb0']
// BB 0x1409d0cd9-0x1409d0ce3 size=10 type=0 succ=['0x1409d0ce6'] pred=['0x1409d0cd4']
// BB 0x1409d0ce3-0x1409d0ce6 size=3 type=0 succ=['0x1409d0ce6'] pred=['0x1409d0cb0', '0x1409d0cd4']
// BB 0x1409d0ce6-0x1409d0cfc size=22 type=0 succ=['0x1409d0cfc', '0x1409d0d2b'] pred=['0x1409d0cd9', '0x1409d0ce3']
// BB 0x1409d0cfc-0x1409d0d06 size=10 type=0 succ=['0x1409d0d06', '0x1409d1ae4'] pred=['0x1409d0ce6']
// BB 0x1409d0d06-0x1409d0d13 size=13 type=0 succ=['0x1409d0d13', '0x1409d1ae4'] pred=['0x1409d0cfc']
// BB 0x1409d0d13-0x1409d0d2b size=24 type=0 succ=['0x1409d1ae4'] pred=['0x1409d0d06']
// BB 0x1409d0d2b-0x1409d0d3e size=19 type=0 succ=['0x1409d0d3e', '0x1409d1ae4'] pred=['0x1409d0ce6']
// BB 0x1409d0d3e-0x1409d0d66 size=40 type=0 succ=['0x1409d0d66'] pred=['0x1409d0d2b']
// BB 0x1409d0d66-0x1409d0d71 size=11 type=0 succ=['0x1409d0d71', '0x1409d0d80'] pred=['0x1409d0d3e']
// BB 0x1409d0d71-0x1409d0d76 size=5 type=0 succ=['0x1409d0d76', '0x1409d0d80'] pred=['0x1409d0d66']
// BB 0x1409d0d76-0x1409d0d80 size=10 type=0 succ=['0x1409d0d83'] pred=['0x1409d0d71']
// BB 0x1409d0d80-0x1409d0d83 size=3 type=0 succ=['0x1409d0d83'] pred=['0x1409d0d66', '0x1409d0d71']
// BB 0x1409d0d83-0x1409d0db8 size=53 type=0 succ=['0x1409d0db8', '0x1409d2ee2'] pred=['0x1409d0d76', '0x1409d0d80']
// BB 0x1409d0db8-0x1409d0dc4 size=12 type=0 succ=['0x1409d0dc4', '0x1409d0dd2'] pred=['0x1409d0d83']
// BB 0x1409d0dc4-0x1409d0dd2 size=14 type=0 succ=['0x1409d0dd2'] pred=['0x1409d0db8']
// BB 0x1409d0dd2-0x1409d0dec size=26 type=0 succ=['0x1409d0dec'] pred=['0x1409d0db8', '0x1409d0dc4']
// BB 0x1409d0dec-0x1409d0e05 size=25 type=0 succ=['0x1409d0e05'] pred=['0x1409d0dd2']
// BB 0x1409d0e05-0x1409d0e10 size=11 type=0 succ=['0x1409d0e10', '0x1409d0e1f'] pred=['0x1409d0dec']
// BB 0x1409d0e10-0x1409d0e15 size=5 type=0 succ=['0x1409d0e15', '0x1409d0e1f'] pred=['0x1409d0e05']
// BB 0x1409d0e15-0x1409d0e1f size=10 type=0 succ=['0x1409d0e22'] pred=['0x1409d0e10']
// BB 0x1409d0e1f-0x1409d0e22 size=3 type=0 succ=['0x1409d0e22'] pred=['0x1409d0e05', '0x1409d0e10']
// BB 0x1409d0e22-0x1409d0e57 size=53 type=0 succ=['0x1409d0e57', '0x1409d2ef7'] pred=['0x1409d0e15', '0x1409d0e1f']
// BB 0x1409d0e57-0x1409d0e63 size=12 type=0 succ=['0x1409d0e63', '0x1409d0e71'] pred=['0x1409d0e22']
// BB 0x1409d0e63-0x1409d0e71 size=14 type=0 succ=['0x1409d0e71'] pred=['0x1409d0e57']
// BB 0x1409d0e71-0x1409d0ec4 size=83 type=0 succ=['0x1409d0ec4', '0x1409d33cb'] pred=['0x1409d0e57', '0x1409d0e63']
// BB 0x1409d0ec4-0x1409d0ef1 size=45 type=0 succ=['0x1409d0ef1'] pred=['0x1409d0e71']
// BB 0x1409d0ef1-0x1409d0f0b size=26 type=0 succ=['0x1409d0f0b', '0x1409d2f0c'] pred=['0x1409d0ec4']
// BB 0x1409d0f0b-0x1409d0f5d size=82 type=0 succ=['0x1409d0f5d', '0x1409d0f6a'] pred=['0x1409d0ef1']
// BB 0x1409d0f5d-0x1409d0f6a size=13 type=0 succ=['0x1409d0f6a'] pred=['0x1409d0f0b']
// BB 0x1409d0f6a-0x1409d0f87 size=29 type=0 succ=['0x1409d0f87', '0x1409d33e0'] pred=['0x1409d0f0b', '0x1409d0f5d']
// BB 0x1409d0f87-0x1409d0fb7 size=48 type=0 succ=['0x1409d0fb7'] pred=['0x1409d0f6a']
// BB 0x1409d0fb7-0x1409d0fd8 size=33 type=0 succ=['0x1409d0fd8', '0x1409d2f4b'] pred=['0x1409d0f87']
// BB 0x1409d0fd8-0x1409d102a size=82 type=0 succ=['0x1409d102a', '0x1409d1037'] pred=['0x1409d0fb7']
// BB 0x1409d102a-0x1409d1037 size=13 type=0 succ=['0x1409d1037'] pred=['0x1409d0fd8']
// BB 0x1409d1037-0x1409d1054 size=29 type=0 succ=['0x1409d1054', '0x1409d33f5'] pred=['0x1409d0fd8', '0x1409d102a']
// BB 0x1409d1054-0x1409d1082 size=46 type=0 succ=['0x1409d1082'] pred=['0x1409d1037']
// BB 0x1409d1082-0x1409d109f size=29 type=0 succ=['0x1409d109f', '0x1409d2f8a'] pred=['0x1409d1054']
// BB 0x1409d109f-0x1409d10f1 size=82 type=0 succ=['0x1409d10f1', '0x1409d10fe'] pred=['0x1409d1082']
// BB 0x1409d10f1-0x1409d10fe size=13 type=0 succ=['0x1409d10fe'] pred=['0x1409d109f']
// BB 0x1409d10fe-0x1409d111b size=29 type=0 succ=['0x1409d111b', '0x1409d340a'] pred=['0x1409d109f', '0x1409d10f1']
// BB 0x1409d111b-0x1409d1162 size=71 type=0 succ=['0x1409d1162', '0x1409d2eaa'] pred=['0x1409d10fe']
// BB 0x1409d1162-0x1409d119c size=58 type=0 succ=['0x1409d119c', '0x1409d341f'] pred=['0x1409d111b']
// BB 0x1409d119c-0x1409d11d6 size=58 type=0 succ=['0x1409d11d6'] pred=['0x1409d1162']
// BB 0x1409d11d6-0x1409d1201 size=43 type=0 succ=['0x1409d1201', '0x1409d120e'] pred=['0x1409d119c']
// BB 0x1409d1201-0x1409d120e size=13 type=0 succ=['0x1409d120e'] pred=['0x1409d11d6']
// BB 0x1409d120e-0x1409d122b size=29 type=0 succ=['0x1409d122b', '0x1409d3434'] pred=['0x1409d11d6', '0x1409d1201']
// BB 0x1409d122b-0x1409d1285 size=90 type=0 succ=['0x1409d1285', '0x1409d3449'] pred=['0x1409d120e']
// BB 0x1409d1285-0x1409d12d2 size=77 type=0 succ=['0x1409d12d2', '0x1409d2ec6'] pred=['0x1409d122b']
// BB 0x1409d12d2-0x1409d130c size=58 type=0 succ=['0x1409d130c', '0x1409d345e'] pred=['0x1409d1285']
// BB 0x1409d130c-0x1409d1353 size=71 type=0 succ=['0x1409d1353'] pred=['0x1409d12d2']
// BB 0x1409d1353-0x1409d137e size=43 type=0 succ=['0x1409d137e', '0x1409d138b'] pred=['0x1409d130c']
// BB 0x1409d137e-0x1409d138b size=13 type=0 succ=['0x1409d138b'] pred=['0x1409d1353']
// BB 0x1409d138b-0x1409d13a8 size=29 type=0 succ=['0x1409d13a8', '0x1409d3473'] pred=['0x1409d1353', '0x1409d137e']
// BB 0x1409d13a8-0x1409d13d1 size=41 type=0 succ=['0x1409d13d1'] pred=['0x1409d138b']
// BB 0x1409d13d1-0x1409d13ef size=30 type=0 succ=['0x1409d13ef', '0x1409d2fc9'] pred=['0x1409d13a8']
// BB 0x1409d13ef-0x1409d1441 size=82 type=0 succ=['0x1409d1441', '0x1409d144e'] pred=['0x1409d13d1']
// BB 0x1409d1441-0x1409d144e size=13 type=0 succ=['0x1409d144e'] pred=['0x1409d13ef']
// BB 0x1409d144e-0x1409d146b size=29 type=0 succ=['0x1409d146b', '0x1409d3488'] pred=['0x1409d13ef', '0x1409d1441']
// BB 0x1409d146b-0x1409d1495 size=42 type=0 succ=['0x1409d1495'] pred=['0x1409d144e']
// BB 0x1409d1495-0x1409d14b6 size=33 type=0 succ=['0x1409d14b6', '0x1409d3008'] pred=['0x1409d146b']
// BB 0x1409d14b6-0x1409d1508 size=82 type=0 succ=['0x1409d1508', '0x1409d1515'] pred=['0x1409d1495']
// BB 0x1409d1508-0x1409d1515 size=13 type=0 succ=['0x1409d1515'] pred=['0x1409d14b6']
// BB 0x1409d1515-0x1409d1532 size=29 type=0 succ=['0x1409d1532', '0x1409d349d'] pred=['0x1409d14b6', '0x1409d1508']
// BB 0x1409d1532-0x1409d158f size=93 type=0 succ=['0x1409d158f', '0x1409d34b2'] pred=['0x1409d1515']
// BB 0x1409d158f-0x1409d15b9 size=42 type=0 succ=['0x1409d15b9'] pred=['0x1409d1532']
// BB 0x1409d15b9-0x1409d15d7 size=30 type=0 succ=['0x1409d15d7', '0x1409d3047'] pred=['0x1409d158f']
// BB 0x1409d15d7-0x1409d1629 size=82 type=0 succ=['0x1409d1629', '0x1409d1636'] pred=['0x1409d15b9']
// BB 0x1409d1629-0x1409d1636 size=13 type=0 succ=['0x1409d1636'] pred=['0x1409d15d7']
// BB 0x1409d1636-0x1409d1653 size=29 type=0 succ=['0x1409d1653', '0x1409d34c7'] pred=['0x1409d15d7', '0x1409d1629']
// BB 0x1409d1653-0x1409d1688 size=53 type=0 succ=['0x1409d1688'] pred=['0x1409d1636']
// BB 0x1409d1688-0x1409d16a9 size=33 type=0 succ=['0x1409d16a9', '0x1409d3086'] pred=['0x1409d1653']
// BB 0x1409d16a9-0x1409d16fb size=82 type=0 succ=['0x1409d16fb', '0x1409d1708'] pred=['0x1409d1688']
// BB 0x1409d16fb-0x1409d1708 size=13 type=0 succ=['0x1409d1708'] pred=['0x1409d16a9']
// BB 0x1409d1708-0x1409d1734 size=44 type=0 succ=['0x1409d1734'] pred=['0x1409d16a9', '0x1409d16fb']
// BB 0x1409d1734-0x1409d175f size=43 type=0 succ=['0x1409d175f', '0x1409d176c'] pred=['0x1409d1708']
// BB 0x1409d175f-0x1409d176c size=13 type=0 succ=['0x1409d176c'] pred=['0x1409d1734']
// BB 0x1409d176c-0x1409d17e0 size=116 type=0 succ=['0x1409d17e0'] pred=['0x1409d1734', '0x1409d175f']
// BB 0x1409d17e0-0x1409d180b size=43 type=0 succ=['0x1409d180b', '0x1409d1818'] pred=['0x1409d176c']
// BB 0x1409d180b-0x1409d1818 size=13 type=0 succ=['0x1409d1818'] pred=['0x1409d17e0']
// BB 0x1409d1818-0x1409d1844 size=44 type=0 succ=['0x1409d1844'] pred=['0x1409d17e0', '0x1409d180b']
// BB 0x1409d1844-0x1409d186f size=43 type=0 succ=['0x1409d186f', '0x1409d187c'] pred=['0x1409d1818']
// BB 0x1409d186f-0x1409d187c size=13 type=0 succ=['0x1409d187c'] pred=['0x1409d1844']
// BB 0x1409d187c-0x1409d1899 size=29 type=0 succ=['0x1409d1899', '0x1409d34dc'] pred=['0x1409d1844', '0x1409d186f']
// BB 0x1409d1899-0x1409d1903 size=106 type=0 succ=['0x1409d1903', '0x1409d1910'] pred=['0x1409d187c']
// BB 0x1409d1903-0x1409d1910 size=13 type=0 succ=['0x1409d1910'] pred=['0x1409d1899']
// BB 0x1409d1910-0x1409d1984 size=116 type=0 succ=['0x1409d1984'] pred=['0x1409d1899', '0x1409d1903']
// BB 0x1409d1984-0x1409d19b2 size=46 type=0 succ=['0x1409d19b2', '0x1409d19bf'] pred=['0x1409d1910']
// BB 0x1409d19b2-0x1409d19bf size=13 type=0 succ=['0x1409d19bf'] pred=['0x1409d1984']
// BB 0x1409d19bf-0x1409d19f9 size=58 type=0 succ=['0x1409d19f9'] pred=['0x1409d1984', '0x1409d19b2']
// BB 0x1409d19f9-0x1409d1a14 size=27 type=0 succ=['0x1409d1a14'] pred=['0x1409d19bf']
// BB 0x1409d1a14-0x1409d1a43 size=47 type=0 succ=['0x1409d1a43', '0x1409d30c5'] pred=['0x1409d19f9']
// BB 0x1409d1a43-0x1409d1a48 size=5 type=0 succ=['0x1409d1a48', '0x1409d1a5d'] pred=['0x1409d1a14']
// BB 0x1409d1a48-0x1409d1a5d size=21 type=0 succ=['0x1409d1a5d'] pred=['0x1409d1a43', '0x1409d30c5']
// BB 0x1409d1a5d-0x1409d1a6c size=15 type=0 succ=['0x1409d1a6c', '0x1409d1a7d'] pred=['0x1409d1a43', '0x1409d1a48']
// BB 0x1409d1a6c-0x1409d1a7d size=17 type=0 succ=['0x1409d1a7d'] pred=['0x1409d1a5d']
// BB 0x1409d1a7d-0x1409d1a81 size=4 type=0 succ=['0x1409d1a81'] pred=['0x1409d1a5d', '0x1409d1a6c']
// BB 0x1409d1a81-0x1409d1a9a size=25 type=0 succ=['0x1409d1a9a'] pred=['0x1409d1a7d']
// BB 0x1409d1a9a-0x1409d1ab3 size=25 type=0 succ=['0x1409d1ab3', '0x1409d1ac5'] pred=['0x1409d1a81']
// BB 0x1409d1ab3-0x1409d1ac5 size=18 type=0 succ=['0x1409d1ac5'] pred=['0x1409d1a9a']
// BB 0x1409d1ac5-0x1409d1ad1 size=12 type=0 succ=['0x1409d1ad1', '0x1409d1ae4'] pred=['0x1409d1a9a', '0x1409d1ab3']
// BB 0x1409d1ad1-0x1409d1ae4 size=19 type=0 succ=['0x1409d1ae4'] pred=['0x1409d1ac5']
// BB 0x1409d1ae4-0x1409d1af6 size=18 type=0 succ=['0x1409d2e81'] pred=['0x1409d0cfc', '0x1409d0d06', '0x1409d0d13', '0x1409d0d2b', '0x1409d1ac5', '0x1409d1ad1']
// BB 0x1409d1af6-0x1409d1aff size=9 type=0 succ=['0x1409d08d9'] pred=['0x1409d08cb']
// BB 0x1409d1aff-0x1409d1b1d size=30 type=0 succ=['0x1409d1b5e'] pred=['0x1409d08fb']
// BB 0x1409d1b1d-0x1409d1b26 size=9 type=0 succ=['0x1409d1b5e'] pred=['0x1409d08fb']
// BB 0x1409d1b26-0x1409d1b43 size=29 type=0 succ=['0x1409d1b5e'] pred=['0x1409d08fb']
// BB 0x1409d1b43-0x1409d1b5e size=27 type=0 succ=['0x1409d1b5e'] pred=['0x1409d08fb']
// BB 0x1409d1b5e-0x1409d1bc8 size=106 type=0 succ=['0x1409d1bc8'] pred=['0x1409d090e', '0x1409d1aff', '0x1409d1b1d', '0x1409d1b26', '0x1409d1b43']
// BB 0x1409d1bc8-0x1409d1bec size=36 type=0 succ=['0x1409d1bec', '0x1409d1bfb'] pred=['0x1409d0b77', '0x1409d1b5e']
// BB 0x1409d1bec-0x1409d1bf1 size=5 type=0 succ=['0x1409d1bf1', '0x1409d1bfb'] pred=['0x1409d1bc8']
// BB 0x1409d1bf1-0x1409d1bfb size=10 type=0 succ=['0x1409d1bfe'] pred=['0x1409d1bec']
// BB 0x1409d1bfb-0x1409d1bfe size=3 type=0 succ=['0x1409d1bfe'] pred=['0x1409d1bc8', '0x1409d1bec']
// BB 0x1409d1bfe-0x1409d1c19 size=27 type=0 succ=['0x1409d1c19', '0x1409d2e74'] pred=['0x1409d1bf1', '0x1409d1bfb']
// BB 0x1409d1c19-0x1409d1c4f size=54 type=0 succ=['0x1409d1c4f'] pred=['0x1409d1bfe']
// BB 0x1409d1c4f-0x1409d1c69 size=26 type=0 succ=['0x1409d1c69', '0x1409d1c91'] pred=['0x1409d1c19', '0x1409d1ca3']
// BB 0x1409d1c69-0x1409d1c84 size=27 type=0 succ=['0x1409d1c84', '0x1409d1cb0'] pred=['0x1409d1c4f', '0x1409d1c84']
// BB 0x1409d1c84-0x1409d1c91 size=13 type=0 succ=['0x1409d1c69', '0x1409d1c91'] pred=['0x1409d1c69']
// BB 0x1409d1c91-0x1409d1ca3 size=18 type=0 succ=['0x1409d1ca3', '0x1409d2e74'] pred=['0x1409d1c4f', '0x1409d1c84']
// BB 0x1409d1ca3-0x1409d1cb0 size=13 type=0 succ=['0x1409d1c4f'] pred=['0x1409d1c91']
// BB 0x1409d1cb0-0x1409d1cba size=10 type=0 succ=['0x1409d1cba', '0x1409d26d8'] pred=['0x1409d1c69']
// BB 0x1409d1cba-0x1409d1cc4 size=10 type=0 succ=['0x1409d1cc4', '0x1409d2e74'] pred=['0x1409d1cb0']
// BB 0x1409d1cc4-0x1409d1ce0 size=28 type=0 succ=['0x1409d1ce0', '0x1409d2e74'] pred=['0x1409d1cba']
// BB 0x1409d1ce0-0x1409d1cea size=10 type=0 succ=['0x1409d1cea', '0x1409d2e74'] pred=['0x1409d1cc4']
// BB 0x1409d1cea-0x1409d1d0c size=34 type=0 succ=['0x1409d1d0c', '0x1409d2e74'] pred=['0x1409d1ce0']
// BB 0x1409d1d0c-0x1409d1d15 size=9 type=0 succ=['0x1409d1d15', '0x1409d2e74'] pred=['0x1409d1cea']
// BB 0x1409d1d15-0x1409d1d31 size=28 type=0 succ=['0x1409d1d31', '0x1409d2e74'] pred=['0x1409d1d0c']
// BB 0x1409d1d31-0x1409d1d64 size=51 type=0 succ=['0x1409d1d64', '0x1409d34f1'] pred=['0x1409d1d15']
// BB 0x1409d1d64-0x1409d1d91 size=45 type=0 succ=['0x1409d1d91'] pred=['0x1409d1d31']
// BB 0x1409d1d91-0x1409d1dab size=26 type=0 succ=['0x1409d1dab', '0x1409d3177'] pred=['0x1409d1d64']
// BB 0x1409d1dab-0x1409d1dfd size=82 type=0 succ=['0x1409d1dfd', '0x1409d1e0a'] pred=['0x1409d1d91']
// BB 0x1409d1dfd-0x1409d1e0a size=13 type=0 succ=['0x1409d1e0a'] pred=['0x1409d1dab']
// BB 0x1409d1e0a-0x1409d1e27 size=29 type=0 succ=['0x1409d1e27', '0x1409d351b'] pred=['0x1409d1dab', '0x1409d1dfd']
// BB 0x1409d1e27-0x1409d1e57 size=48 type=0 succ=['0x1409d1e57'] pred=['0x1409d1e0a']
// BB 0x1409d1e57-0x1409d1e78 size=33 type=0 succ=['0x1409d1e78', '0x1409d31f5'] pred=['0x1409d1e27']
// BB 0x1409d1e78-0x1409d1eca size=82 type=0 succ=['0x1409d1eca', '0x1409d1ed7'] pred=['0x1409d1e57']
// BB 0x1409d1eca-0x1409d1ed7 size=13 type=0 succ=['0x1409d1ed7'] pred=['0x1409d1e78']
// BB 0x1409d1ed7-0x1409d1ef4 size=29 type=0 succ=['0x1409d1ef4', '0x1409d3545'] pred=['0x1409d1e78', '0x1409d1eca']
// BB 0x1409d1ef4-0x1409d1f22 size=46 type=0 succ=['0x1409d1f22'] pred=['0x1409d1ed7']
// BB 0x1409d1f22-0x1409d1f3f size=29 type=0 succ=['0x1409d1f3f', '0x1409d3273'] pred=['0x1409d1ef4']
// BB 0x1409d1f3f-0x1409d1f91 size=82 type=0 succ=['0x1409d1f91', '0x1409d1f9e'] pred=['0x1409d1f22']
// BB 0x1409d1f91-0x1409d1f9e size=13 type=0 succ=['0x1409d1f9e'] pred=['0x1409d1f3f']
// BB 0x1409d1f9e-0x1409d1fbb size=29 type=0 succ=['0x1409d1fbb', '0x1409d356f'] pred=['0x1409d1f3f', '0x1409d1f91']
// BB 0x1409d1fbb-0x1409d1fec size=49 type=0 succ=['0x1409d1fec'] pred=['0x1409d1f9e']
// BB 0x1409d1fec-0x1409d202b size=63 type=0 succ=['0x1409d202b', '0x1409d3599'] pred=['0x1409d1fbb']
// BB 0x1409d202b-0x1409d2065 size=58 type=0 succ=['0x1409d2065'] pred=['0x1409d1fec']
// BB 0x1409d2065-0x1409d2090 size=43 type=0 succ=['0x1409d2090', '0x1409d209d'] pred=['0x1409d202b']
// BB 0x1409d2090-0x1409d209d size=13 type=0 succ=['0x1409d209d'] pred=['0x1409d2065']
// BB 0x1409d209d-0x1409d20ba size=29 type=0 succ=['0x1409d20ba', '0x1409d35c3'] pred=['0x1409d2065', '0x1409d2090']
// BB 0x1409d20ba-0x1409d2114 size=90 type=0 succ=['0x1409d2114', '0x1409d35ea'] pred=['0x1409d209d']
// BB 0x1409d2114-0x1409d214b size=55 type=0 succ=['0x1409d214b'] pred=['0x1409d20ba']
// BB 0x1409d214b-0x1409d218a size=63 type=0 succ=['0x1409d218a', '0x1409d360e'] pred=['0x1409d2114']
// BB 0x1409d218a-0x1409d21cd size=67 type=0 succ=['0x1409d21cd'] pred=['0x1409d214b']
// BB 0x1409d21cd-0x1409d21f8 size=43 type=0 succ=['0x1409d21f8', '0x1409d2205'] pred=['0x1409d218a']
// BB 0x1409d21f8-0x1409d2205 size=13 type=0 succ=['0x1409d2205'] pred=['0x1409d21cd']
// BB 0x1409d2205-0x1409d2222 size=29 type=0 succ=['0x1409d2222', '0x1409d3620'] pred=['0x1409d21cd', '0x1409d21f8']
// BB 0x1409d2222-0x1409d227f size=93 type=0 succ=['0x1409d227f', '0x1409d3632'] pred=['0x1409d2205']
// BB 0x1409d227f-0x1409d22b4 size=53 type=0 succ=['0x1409d22b4'] pred=['0x1409d2222']
// BB 0x1409d22b4-0x1409d22d2 size=30 type=0 succ=['0x1409d22d2', '0x1409d3330'] pred=['0x1409d227f']
// BB 0x1409d22d2-0x1409d2324 size=82 type=0 succ=['0x1409d2324', '0x1409d2331'] pred=['0x1409d22b4']
// BB 0x1409d2324-0x1409d2331 size=13 type=0 succ=['0x1409d2331'] pred=['0x1409d22d2']
// BB 0x1409d2331-0x1409d235d size=44 type=0 succ=['0x1409d235d'] pred=['0x1409d22d2', '0x1409d2324']
// BB 0x1409d235d-0x1409d2388 size=43 type=0 succ=['0x1409d2388', '0x1409d2395'] pred=['0x1409d2331']
// BB 0x1409d2388-0x1409d2395 size=13 type=0 succ=['0x1409d2395'] pred=['0x1409d235d']
// BB 0x1409d2395-0x1409d2409 size=116 type=0 succ=['0x1409d2409'] pred=['0x1409d235d', '0x1409d2388']
// BB 0x1409d2409-0x1409d2434 size=43 type=0 succ=['0x1409d2434', '0x1409d2441'] pred=['0x1409d2395']
// BB 0x1409d2434-0x1409d2441 size=13 type=0 succ=['0x1409d2441'] pred=['0x1409d2409']
// BB 0x1409d2441-0x1409d246d size=44 type=0 succ=['0x1409d246d'] pred=['0x1409d2409', '0x1409d2434']
// BB 0x1409d246d-0x1409d2498 size=43 type=0 succ=['0x1409d2498', '0x1409d24a5'] pred=['0x1409d2441']
// BB 0x1409d2498-0x1409d24a5 size=13 type=0 succ=['0x1409d24a5'] pred=['0x1409d246d']
// BB 0x1409d24a5-0x1409d24c2 size=29 type=0 succ=['0x1409d24c2', '0x1409d3656'] pred=['0x1409d246d', '0x1409d2498']
// BB 0x1409d24c2-0x1409d252c size=106 type=0 succ=['0x1409d252c', '0x1409d2539'] pred=['0x1409d24a5']
// BB 0x1409d252c-0x1409d2539 size=13 type=0 succ=['0x1409d2539'] pred=['0x1409d24c2']
// BB 0x1409d2539-0x1409d25ad size=116 type=0 succ=['0x1409d25ad'] pred=['0x1409d24c2', '0x1409d252c']
// BB 0x1409d25ad-0x1409d25db size=46 type=0 succ=['0x1409d25db', '0x1409d25e8'] pred=['0x1409d2539']
// BB 0x1409d25db-0x1409d25e8 size=13 type=0 succ=['0x1409d25e8'] pred=['0x1409d25ad']
// BB 0x1409d25e8-0x1409d2622 size=58 type=0 succ=['0x1409d2622'] pred=['0x1409d25ad', '0x1409d25db']
// BB 0x1409d2622-0x1409d263d size=27 type=0 succ=['0x1409d263d'] pred=['0x1409d25e8']
// BB 0x1409d263d-0x1409d267a size=61 type=0 succ=['0x1409d267a', '0x1409d339d'] pred=['0x1409d2622']
// BB 0x1409d267a-0x1409d267f size=5 type=0 succ=['0x1409d267f', '0x1409d2698'] pred=['0x1409d263d']
// BB 0x1409d267f-0x1409d2698 size=25 type=0 succ=['0x1409d2698'] pred=['0x1409d267a', '0x1409d339d']
// BB 0x1409d2698-0x1409d26ac size=20 type=0 succ=['0x1409d26ac', '0x1409d26c6'] pred=['0x1409d267a', '0x1409d267f']
// BB 0x1409d26ac-0x1409d26c6 size=26 type=0 succ=['0x1409d26c6'] pred=['0x1409d2698']
// BB 0x1409d26c6-0x1409d26d8 size=18 type=0 succ=['0x1409d2e74'] pred=['0x1409d2698', '0x1409d26ac']
// BB 0x1409d26d8-0x1409d26fa size=34 type=0 succ=['0x1409d26fa', '0x1409d2e74'] pred=['0x1409d1cb0']
// BB 0x1409d26fa-0x1409d2704 size=10 type=0 succ=['0x1409d2704', '0x1409d2e74'] pred=['0x1409d26d8']
// BB 0x1409d2704-0x1409d2726 size=34 type=0 succ=['0x1409d2726', '0x1409d2e74'] pred=['0x1409d26fa']
// BB 0x1409d2726-0x1409d272f size=9 type=0 succ=['0x1409d272f', '0x1409d2e74'] pred=['0x1409d2704']
// BB 0x1409d272f-0x1409d274e size=31 type=0 succ=['0x1409d274e', '0x1409d2e74'] pred=['0x1409d2726']
// BB 0x1409d274e-0x1409d2781 size=51 type=0 succ=['0x1409d2781', '0x1409d3506'] pred=['0x1409d272f']
// BB 0x1409d2781-0x1409d27ae size=45 type=0 succ=['0x1409d27ae'] pred=['0x1409d274e']
// BB 0x1409d27ae-0x1409d27c8 size=26 type=0 succ=['0x1409d27c8', '0x1409d31b6'] pred=['0x1409d2781']
// BB 0x1409d27c8-0x1409d281a size=82 type=0 succ=['0x1409d281a', '0x1409d2827'] pred=['0x1409d27ae']
// BB 0x1409d281a-0x1409d2827 size=13 type=0 succ=['0x1409d2827'] pred=['0x1409d27c8']
// BB 0x1409d2827-0x1409d2844 size=29 type=0 succ=['0x1409d2844', '0x1409d3530'] pred=['0x1409d27c8', '0x1409d281a']
// BB 0x1409d2844-0x1409d2874 size=48 type=0 succ=['0x1409d2874'] pred=['0x1409d2827']
// BB 0x1409d2874-0x1409d2895 size=33 type=0 succ=['0x1409d2895', '0x1409d3234'] pred=['0x1409d2844']
// BB 0x1409d2895-0x1409d28e7 size=82 type=0 succ=['0x1409d28e7', '0x1409d28f4'] pred=['0x1409d2874']
// BB 0x1409d28e7-0x1409d28f4 size=13 type=0 succ=['0x1409d28f4'] pred=['0x1409d2895']
// BB 0x1409d28f4-0x1409d2911 size=29 type=0 succ=['0x1409d2911', '0x1409d355a'] pred=['0x1409d2895', '0x1409d28e7']
// BB 0x1409d2911-0x1409d293f size=46 type=0 succ=['0x1409d293f'] pred=['0x1409d28f4']
// BB 0x1409d293f-0x1409d295c size=29 type=0 succ=['0x1409d295c', '0x1409d32b2'] pred=['0x1409d2911']
// BB 0x1409d295c-0x1409d29ae size=82 type=0 succ=['0x1409d29ae', '0x1409d29bb'] pred=['0x1409d293f']
// BB 0x1409d29ae-0x1409d29bb size=13 type=0 succ=['0x1409d29bb'] pred=['0x1409d295c']
// BB 0x1409d29bb-0x1409d29d8 size=29 type=0 succ=['0x1409d29d8', '0x1409d3584'] pred=['0x1409d295c', '0x1409d29ae']
// BB 0x1409d29d8-0x1409d2a09 size=49 type=0 succ=['0x1409d2a09'] pred=['0x1409d29bb']
// BB 0x1409d2a09-0x1409d2a48 size=63 type=0 succ=['0x1409d2a48', '0x1409d35ae'] pred=['0x1409d29d8']
// BB 0x1409d2a48-0x1409d2a82 size=58 type=0 succ=['0x1409d2a82'] pred=['0x1409d2a09']
// BB 0x1409d2a82-0x1409d2aad size=43 type=0 succ=['0x1409d2aad', '0x1409d2aba'] pred=['0x1409d2a48']
// BB 0x1409d2aad-0x1409d2aba size=13 type=0 succ=['0x1409d2aba'] pred=['0x1409d2a82']
// BB 0x1409d2aba-0x1409d2ad7 size=29 type=0 succ=['0x1409d2ad7', '0x1409d35d8'] pred=['0x1409d2a82', '0x1409d2aad']
// BB 0x1409d2ad7-0x1409d2b31 size=90 type=0 succ=['0x1409d2b31', '0x1409d35fc'] pred=['0x1409d2aba']
// BB 0x1409d2b31-0x1409d2b62 size=49 type=0 succ=['0x1409d2b62'] pred=['0x1409d2ad7']
// BB 0x1409d2b62-0x1409d2b83 size=33 type=0 succ=['0x1409d2b83', '0x1409d32f1'] pred=['0x1409d2b31']
// BB 0x1409d2b83-0x1409d2bd5 size=82 type=0 succ=['0x1409d2bd5', '0x1409d2be2'] pred=['0x1409d2b62']
// BB 0x1409d2bd5-0x1409d2be2 size=13 type=0 succ=['0x1409d2be2'] pred=['0x1409d2b83']
// BB 0x1409d2be2-0x1409d2c0e size=44 type=0 succ=['0x1409d2c0e'] pred=['0x1409d2b83', '0x1409d2bd5']
// BB 0x1409d2c0e-0x1409d2c39 size=43 type=0 succ=['0x1409d2c39', '0x1409d2c46'] pred=['0x1409d2be2']
// BB 0x1409d2c39-0x1409d2c46 size=13 type=0 succ=['0x1409d2c46'] pred=['0x1409d2c0e']
// BB 0x1409d2c46-0x1409d2c63 size=29 type=0 succ=['0x1409d2c63', '0x1409d3644'] pred=['0x1409d2c0e', '0x1409d2c39']
// BB 0x1409d2c63-0x1409d2ccd size=106 type=0 succ=['0x1409d2ccd', '0x1409d2cda'] pred=['0x1409d2c46']
// BB 0x1409d2ccd-0x1409d2cda size=13 type=0 succ=['0x1409d2cda'] pred=['0x1409d2c63']
// BB 0x1409d2cda-0x1409d2d4e size=116 type=0 succ=['0x1409d2d4e'] pred=['0x1409d2c63', '0x1409d2ccd']
// BB 0x1409d2d4e-0x1409d2d7c size=46 type=0 succ=['0x1409d2d7c', '0x1409d2d89'] pred=['0x1409d2cda']
// BB 0x1409d2d7c-0x1409d2d89 size=13 type=0 succ=['0x1409d2d89'] pred=['0x1409d2d4e']
// BB 0x1409d2d89-0x1409d2dc3 size=58 type=0 succ=['0x1409d2dc3'] pred=['0x1409d2d4e', '0x1409d2d7c']
// BB 0x1409d2dc3-0x1409d2dde size=27 type=0 succ=['0x1409d2dde'] pred=['0x1409d2d89']
// BB 0x1409d2dde-0x1409d2e1b size=61 type=0 succ=['0x1409d2e1b', '0x1409d336f'] pred=['0x1409d2dc3']
// BB 0x1409d2e1b-0x1409d2e20 size=5 type=0 succ=['0x1409d2e20', '0x1409d2e39'] pred=['0x1409d2dde']
// BB 0x1409d2e20-0x1409d2e39 size=25 type=0 succ=['0x1409d2e39'] pred=['0x1409d2e1b', '0x1409d336f']
// BB 0x1409d2e39-0x1409d2e4d size=20 type=0 succ=['0x1409d2e4d', '0x1409d2e67'] pred=['0x1409d2e1b', '0x1409d2e20']
// BB 0x1409d2e4d-0x1409d2e67 size=26 type=0 succ=['0x1409d2e67'] pred=['0x1409d2e39']
// BB 0x1409d2e67-0x1409d2e74 size=13 type=0 succ=['0x1409d2e74'] pred=['0x1409d2e39', '0x1409d2e4d']
// BB 0x1409d2e74-0x1409d2e81 size=13 type=0 succ=['0x1409d2e81'] pred=['0x1409d1bfe', '0x1409d1c91', '0x1409d1cba', '0x1409d1cc4', '0x1409d1ce0', '0x1409d1cea', '0x1409d1d0c', '0x1409d1d15', '0x1409d26c6', '0x1409d26d8', '0x1409d26fa', '0x1409d2704', '0x1409d2726', '0x1409d272f', '0x1409d2e67']
// BB 0x1409d2e81-0x1409d2eaa size=41 type=2 succ=[] pred=['0x1409d05f0', '0x1409d060b', '0x1409d0614', '0x1409d0626', '0x1409d063a', '0x1409d0659', '0x1409d0663', '0x1409d06c6', '0x1409d0721', '0x1409d0785', '0x1409d079f', '0x1409d07bd', '0x1409d07db', '0x1409d07e4', '0x1409d0829', '0x1409d0843', '0x1409d0880', '0x1409d0a8d', '0x1409d1ae4', '0x1409d2e74']
// BB 0x1409d2eaa-0x1409d2eb1 size=7 type=0 succ=['0x1409d2eb1'] pred=['0x1409d111b']
// BB 0x1409d2eb1-0x1409d2ec0 size=15 type=4 succ=[] pred=['0x1409d2eaa']
// BB 0x1409d2ec1-0x1409d2ec6 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2ec6-0x1409d2ecd size=7 type=0 succ=['0x1409d2ecd'] pred=['0x1409d1285']
// BB 0x1409d2ecd-0x1409d2edc size=15 type=4 succ=[] pred=['0x1409d2ec6']
// BB 0x1409d2edd-0x1409d2ee2 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2ee2-0x1409d2ee9 size=7 type=0 succ=['0x1409d2ee9'] pred=['0x1409d0d83']
// BB 0x1409d2ee9-0x1409d2ef1 size=8 type=4 succ=[] pred=['0x1409d2ee2']
// BB 0x1409d2ef2-0x1409d2ef7 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2ef7-0x1409d2efe size=7 type=0 succ=['0x1409d2efe'] pred=['0x1409d0e22']
// BB 0x1409d2efe-0x1409d2f06 size=8 type=4 succ=[] pred=['0x1409d2ef7']
// BB 0x1409d2f07-0x1409d2f0c size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2f0c-0x1409d2f1a size=14 type=0 succ=['0x1409d2f1a'] pred=['0x1409d0ef1']
// BB 0x1409d2f1a-0x1409d2f45 size=43 type=4 succ=[] pred=['0x1409d2f0c']
// BB 0x1409d2f46-0x1409d2f4b size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2f4b-0x1409d2f59 size=14 type=0 succ=['0x1409d2f59'] pred=['0x1409d0fb7']
// BB 0x1409d2f59-0x1409d2f84 size=43 type=4 succ=[] pred=['0x1409d2f4b']
// BB 0x1409d2f85-0x1409d2f8a size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2f8a-0x1409d2f98 size=14 type=0 succ=['0x1409d2f98'] pred=['0x1409d1082']
// BB 0x1409d2f98-0x1409d2fc3 size=43 type=4 succ=[] pred=['0x1409d2f8a']
// BB 0x1409d2fc4-0x1409d2fc9 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d2fc9-0x1409d2fd7 size=14 type=0 succ=['0x1409d2fd7'] pred=['0x1409d13d1']
// BB 0x1409d2fd7-0x1409d3002 size=43 type=4 succ=[] pred=['0x1409d2fc9']
// BB 0x1409d3003-0x1409d3008 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3008-0x1409d3016 size=14 type=0 succ=['0x1409d3016'] pred=['0x1409d1495']
// BB 0x1409d3016-0x1409d3041 size=43 type=4 succ=[] pred=['0x1409d3008']
// BB 0x1409d3042-0x1409d3047 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3047-0x1409d3055 size=14 type=0 succ=['0x1409d3055'] pred=['0x1409d15b9']
// BB 0x1409d3055-0x1409d3080 size=43 type=4 succ=[] pred=['0x1409d3047']
// BB 0x1409d3081-0x1409d3086 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3086-0x1409d3094 size=14 type=0 succ=['0x1409d3094'] pred=['0x1409d1688']
// BB 0x1409d3094-0x1409d30bf size=43 type=4 succ=[] pred=['0x1409d3086']
// BB 0x1409d30c0-0x1409d30c5 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d30c5-0x1409d310f size=74 type=0 succ=['0x1409d1a48'] pred=['0x1409d1a14']
// BB 0x1409d310f-0x1409d3116 size=7 type=0 succ=['0x1409d3116'] pred=['0x1409d0972']
// BB 0x1409d3116-0x1409d311e size=8 type=4 succ=[] pred=['0x1409d310f']
// BB 0x1409d311f-0x1409d3124 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3124-0x1409d314c size=40 type=0 succ=['0x1409d314c'] pred=['0x1409d07f1']
// BB 0x1409d314c-0x1409d3177 size=43 type=0 succ=['0x1409d0829'] pred=['0x1409d3124']
// BB 0x1409d3177-0x1409d3185 size=14 type=0 succ=['0x1409d3185'] pred=['0x1409d1d91']
// BB 0x1409d3185-0x1409d31b0 size=43 type=4 succ=[] pred=['0x1409d3177']
// BB 0x1409d31b1-0x1409d31b6 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d31b6-0x1409d31c4 size=14 type=0 succ=['0x1409d31c4'] pred=['0x1409d27ae']
// BB 0x1409d31c4-0x1409d31ef size=43 type=4 succ=[] pred=['0x1409d31b6']
// BB 0x1409d31f0-0x1409d31f5 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d31f5-0x1409d3203 size=14 type=0 succ=['0x1409d3203'] pred=['0x1409d1e57']
// BB 0x1409d3203-0x1409d322e size=43 type=4 succ=[] pred=['0x1409d31f5']
// BB 0x1409d322f-0x1409d3234 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3234-0x1409d3242 size=14 type=0 succ=['0x1409d3242'] pred=['0x1409d2874']
// BB 0x1409d3242-0x1409d326d size=43 type=4 succ=[] pred=['0x1409d3234']
// BB 0x1409d326e-0x1409d3273 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3273-0x1409d3281 size=14 type=0 succ=['0x1409d3281'] pred=['0x1409d1f22']
// BB 0x1409d3281-0x1409d32ac size=43 type=4 succ=[] pred=['0x1409d3273']
// BB 0x1409d32ad-0x1409d32b2 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d32b2-0x1409d32c0 size=14 type=0 succ=['0x1409d32c0'] pred=['0x1409d293f']
// BB 0x1409d32c0-0x1409d32eb size=43 type=4 succ=[] pred=['0x1409d32b2']
// BB 0x1409d32ec-0x1409d32f1 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d32f1-0x1409d32ff size=14 type=0 succ=['0x1409d32ff'] pred=['0x1409d2b62']
// BB 0x1409d32ff-0x1409d332a size=43 type=4 succ=[] pred=['0x1409d32f1']
// BB 0x1409d332b-0x1409d3330 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3330-0x1409d333e size=14 type=0 succ=['0x1409d333e'] pred=['0x1409d22b4']
// BB 0x1409d333e-0x1409d3369 size=43 type=4 succ=[] pred=['0x1409d3330']
// BB 0x1409d336a-0x1409d336f size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d336f-0x1409d339d size=46 type=0 succ=['0x1409d2e20'] pred=['0x1409d2dde']
// BB 0x1409d339d-0x1409d33cb size=46 type=0 succ=['0x1409d267f'] pred=['0x1409d263d']
// BB 0x1409d33cb-0x1409d33da size=15 type=4 succ=[] pred=['0x1409d0e71']
// BB 0x1409d33db-0x1409d33e0 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d33e0-0x1409d33ef size=15 type=4 succ=[] pred=['0x1409d0f6a']
// BB 0x1409d33f0-0x1409d33f5 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d33f5-0x1409d3404 size=15 type=4 succ=[] pred=['0x1409d1037']
// BB 0x1409d3405-0x1409d340a size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d340a-0x1409d3419 size=15 type=4 succ=[] pred=['0x1409d10fe']
// BB 0x1409d341a-0x1409d341f size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d341f-0x1409d342e size=15 type=4 succ=[] pred=['0x1409d1162']
// BB 0x1409d342f-0x1409d3434 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3434-0x1409d3443 size=15 type=4 succ=[] pred=['0x1409d120e']
// BB 0x1409d3444-0x1409d3449 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3449-0x1409d3458 size=15 type=4 succ=[] pred=['0x1409d122b']
// BB 0x1409d3459-0x1409d345e size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d345e-0x1409d346d size=15 type=4 succ=[] pred=['0x1409d12d2']
// BB 0x1409d346e-0x1409d3473 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3473-0x1409d3482 size=15 type=4 succ=[] pred=['0x1409d138b']
// BB 0x1409d3483-0x1409d3488 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3488-0x1409d3497 size=15 type=4 succ=[] pred=['0x1409d144e']
// BB 0x1409d3498-0x1409d349d size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d349d-0x1409d34ac size=15 type=4 succ=[] pred=['0x1409d1515']
// BB 0x1409d34ad-0x1409d34b2 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d34b2-0x1409d34c1 size=15 type=4 succ=[] pred=['0x1409d1532']
// BB 0x1409d34c2-0x1409d34c7 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d34c7-0x1409d34d6 size=15 type=4 succ=[] pred=['0x1409d1636']
// BB 0x1409d34d7-0x1409d34dc size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d34dc-0x1409d34eb size=15 type=4 succ=[] pred=['0x1409d187c']
// BB 0x1409d34ec-0x1409d34f1 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d34f1-0x1409d3500 size=15 type=4 succ=[] pred=['0x1409d1d31']
// BB 0x1409d3501-0x1409d3506 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3506-0x1409d3515 size=15 type=4 succ=[] pred=['0x1409d274e']
// BB 0x1409d3516-0x1409d351b size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d351b-0x1409d352a size=15 type=4 succ=[] pred=['0x1409d1e0a']
// BB 0x1409d352b-0x1409d3530 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3530-0x1409d353f size=15 type=4 succ=[] pred=['0x1409d2827']
// BB 0x1409d3540-0x1409d3545 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3545-0x1409d3554 size=15 type=4 succ=[] pred=['0x1409d1ed7']
// BB 0x1409d3555-0x1409d355a size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d355a-0x1409d3569 size=15 type=4 succ=[] pred=['0x1409d28f4']
// BB 0x1409d356a-0x1409d356f size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d356f-0x1409d357e size=15 type=4 succ=[] pred=['0x1409d1f9e']
// BB 0x1409d357f-0x1409d3584 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3584-0x1409d3593 size=15 type=4 succ=[] pred=['0x1409d29bb']
// BB 0x1409d3594-0x1409d3599 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3599-0x1409d35a8 size=15 type=4 succ=[] pred=['0x1409d1fec']
// BB 0x1409d35a9-0x1409d35ae size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d35ae-0x1409d35bd size=15 type=4 succ=[] pred=['0x1409d2a09']
// BB 0x1409d35be-0x1409d35c3 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d35c3-0x1409d35d2 size=15 type=4 succ=[] pred=['0x1409d209d']
// BB 0x1409d35d3-0x1409d35d8 size=5 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d35d8-0x1409d35e7 size=15 type=4 succ=[] pred=['0x1409d2aba']
// BB 0x1409d35e8-0x1409d35ea size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d35ea-0x1409d35f9 size=15 type=4 succ=[] pred=['0x1409d20ba']
// BB 0x1409d35fa-0x1409d35fc size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d35fc-0x1409d360b size=15 type=4 succ=[] pred=['0x1409d2ad7']
// BB 0x1409d360c-0x1409d360e size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d360e-0x1409d361d size=15 type=4 succ=[] pred=['0x1409d214b']
// BB 0x1409d361e-0x1409d3620 size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3620-0x1409d362f size=15 type=4 succ=[] pred=['0x1409d2205']
// BB 0x1409d3630-0x1409d3632 size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3632-0x1409d3641 size=15 type=4 succ=[] pred=['0x1409d2222']
// BB 0x1409d3642-0x1409d3644 size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3644-0x1409d3653 size=15 type=4 succ=[] pred=['0x1409d2c46']
// BB 0x1409d3654-0x1409d3656 size=2 type=0 succ=['0x1409d3666'] pred=[]
// BB 0x1409d3656-0x1409d3665 size=15 type=4 succ=[] pred=['0x1409d24a5']
// BB 0x1409d3666-0x1409d3668 size=2 type=0 succ=[] pred=['0x1409d2ec1', '0x1409d2edd', '0x1409d2ef2', '0x1409d2f07', '0x1409d2f46', '0x1409d2f85', '0x1409d2fc4', '0x1409d3003', '0x1409d3042', '0x1409d3081', '0x1409d30c0', '0x1409d311f', '0x1409d31b1', '0x1409d31f0', '0x1409d322f', '0x1409d326e', '0x1409d32ad', '0x1409d32ec', '0x1409d332b', '0x1409d336a', '0x1409d33db', '0x1409d33f0', '0x1409d3405', '0x1409d341a', '0x1409d342f', '0x1409d3444', '0x1409d3459', '0x1409d346e', '0x1409d3483', '0x1409d3498', '0x1409d34ad', '0x1409d34c2', '0x1409d34d7', '0x1409d34ec', '0x1409d3501', '0x1409d3516', '0x1409d352b', '0x1409d3540', '0x1409d3555', '0x1409d356a', '0x1409d357f', '0x1409d3594', '0x1409d35a9', '0x1409d35be', '0x1409d35d3', '0x1409d35e8', '0x1409d35fa', '0x1409d360c', '0x1409d361e', '0x1409d3630', '0x1409d3642', '0x1409d3654']

// --- full disassembly ---
/*1409d05a0*/ sub_1409D05A0: push rbp
/*1409d05a1*/  push r15
/*1409d05a3*/  push r14
/*1409d05a5*/  push r13
/*1409d05a7*/  push r12
/*1409d05a9*/  push rsi
/*1409d05aa*/  push rdi
/*1409d05ab*/  push rbx
/*1409d05ac*/  sub rsp, 2E8h
/*1409d05b3*/  lea rbp, [rsp+80h]
/*1409d05bb*/  mov [rbp+2A0h+var_40], 0FFFFFFFFFFFFFFFEh
/*1409d05c6*/  mov r14, r8
/*1409d05c9*/  mov rdi, rdx
/*1409d05cc*/  mov rsi, rcx
/*1409d05cf*/  mov qword ptr [rbp+2A0h+var_E8], 0
/*1409d05da*/  mov qword ptr [rbp+2A0h+var_E8+8], 1
/*1409d05e5*/  mov [rbp+2A0h+var_D8], 0
/*1409d05f0*/ loc_1409D05F0: lea rcx, aType_8; "type"
/*1409d05f7*/  mov edx, 4
/*1409d05fc*/  call sub_141433D50
/*1409d0601*/  nop
/*1409d0602*/  test rax, rax
/*1409d0605*/  jz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d060b*/  cmp byte ptr [rax], 3
/*1409d060e*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0614*/  mov rcx, [rax+18h]
/*1409d0618*/  add rcx, 0FFFFFFFFFFFFFFF4h; switch 8 cases  // switch 8 cases
/*1409d061c*/  cmp rcx, 7
/*1409d0620*/  ja def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0626*/  mov rax, [rax+10h]
/*1409d062a*/  lea rdx, jpt_1409D0638
/*1409d0631*/  movsxd rcx, ds:(jpt_1409D0638 - 1417AAC1Ch)[rdx+rcx*4]
/*1409d0635*/  add rcx, rdx
/*1409d0638*/  jmp rcx; switch jump  // switch jump
/*1409d063a*/ loc_1409D063A: mov rcx, 5F6567617373656Dh; jumptable 00000001409D0638 case 12  // jumptable 00000001409D0638 case 12
/*1409d0644*/  xor rcx, [rax]
/*1409d0647*/  mov eax, [rax+8]
/*1409d064a*/  xor rax, 706F7473h
/*1409d0650*/  or rax, rcx
/*1409d0653*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0659*/  cmp byte ptr [rdi+65h], 0
/*1409d065d*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0663*/  mov byte ptr [rdi+65h], 1
/*1409d0667*/  mov [rsp+320h+var_300], 1
/*1409d0670*/  lea rcx, [rbp+2A0h+var_E8]
/*1409d0677*/  mov r8d, 0Eh
/*1409d067d*/  mov r9d, 1
/*1409d0683*/  xor edx, edx
/*1409d0685*/  call sub_141688D30
/*1409d068a*/  nop
/*1409d068b*/  mov rax, qword ptr [rbp+2A0h+var_E8+8]
/*1409d0692*/  mov rcx, [rbp+2A0h+var_D8]
/*1409d0699*/  mov rdx, 0A0A5D454E4F445Bh
/*1409d06a3*/  mov [rax+rcx+6], rdx
/*1409d06a8*/  mov rdx, 445B203A61746164h
/*1409d06b2*/  mov [rax+rcx], rdx
/*1409d06b6*/  add rcx, 0Eh
/*1409d06ba*/  mov [rbp+2A0h+var_D8], rcx
/*1409d06c1*/  jmp def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d06c6*/ loc_1409D06C6: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409D0638 case 18  // jumptable 00000001409D0638 case 18
/*1409d06ca*/  movzx eax, word ptr [rax+10h]
/*1409d06ce*/  movd xmm1, eax
/*1409d06d2*/  pcmpeqb xmm0, cs:xmmword_1417A2CD0
/*1409d06da*/  pcmpeqb xmm1, cs:xmmword_1417A2CE0
/*1409d06e2*/  pand xmm1, xmm0
/*1409d06e6*/  pmovmskb eax, xmm1
/*1409d06ea*/  cmp eax, 0FFFFh
/*1409d06ef*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d06f5*/  lea rcx, aIndex_0; "index"
/*1409d06fc*/  mov edx, 5
/*1409d0701*/  mov r8, r14
/*1409d0704*/  call sub_141433D50
/*1409d0709*/  nop
/*1409d070a*/  test rax, rax
/*1409d070d*/  jz short loc_1409D071F
/*1409d070f*/  cmp byte ptr [rax], 2
/*1409d0712*/  jnz short loc_1409D071F
/*1409d0714*/  cmp qword ptr [rax+8], 0
/*1409d0719*/  jz loc_1409D0BD5
/*1409d071f*/ loc_1409D071F: xor eax, eax
/*1409d0721*/ loc_1409D0721: mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d0728*/  lea rbx, [rdi+30h]
/*1409d072c*/  add rdi, 50h ; 'P'
/*1409d0730*/  lea r14, [rbp+2A0h+var_A0]
/*1409d0737*/  mov rcx, rdi
/*1409d073a*/  mov rdx, r14
/*1409d073d*/  call sub_140378FA0
/*1409d0742*/  nop
/*1409d0743*/  lea rcx, [rbp+2A0h+var_60]
/*1409d074a*/  mov rdx, rbx
/*1409d074d*/  mov r8, rax
/*1409d0750*/  mov r9, r14
/*1409d0753*/  call sub_1405A58C0
/*1409d0758*/  nop
/*1409d0759*/  jmp def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d075e*/ loc_1409D075E: mov rcx, 5F6567617373656Dh; jumptable 00000001409D0638 case 13  // jumptable 00000001409D0638 case 13
/*1409d0768*/  mov rdx, [rax]
/*1409d076b*/  xor rdx, rcx
/*1409d076e*/  mov r8, 74726174735F6567h
/*1409d0778*/  xor r8, [rax+5]
/*1409d077c*/  or r8, rdx
/*1409d077f*/  jz loc_1409D092C
/*1409d0785*/  xor rcx, [rax]
/*1409d0788*/  mov rdx, 61746C65645F6567h
/*1409d0792*/  xor rdx, [rax+5]
/*1409d0796*/  or rdx, rcx
/*1409d0799*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d079f*/  lea rcx, aDelta_2; "delta"
/*1409d07a6*/  mov edx, 5
/*1409d07ab*/  mov r8, r14
/*1409d07ae*/  call sub_141433D50
/*1409d07b3*/  nop
/*1409d07b4*/  test rax, rax
/*1409d07b7*/  jz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d07bd*/  lea rcx, aStopReason; "stop_reason"
/*1409d07c4*/  mov edx, 0Bh
/*1409d07c9*/  mov r8, rax
/*1409d07cc*/  call sub_141433D50
/*1409d07d1*/  nop
/*1409d07d2*/  test rax, rax
/*1409d07d5*/  jz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d07db*/  cmp byte ptr [rax], 3
/*1409d07de*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d07e4*/  mov rdx, [rax+18h]
/*1409d07e8*/  test rdx, rdx
/*1409d07eb*/  jz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d07f1*/  mov rcx, [rax+10h]
/*1409d07f5*/  call sub_140A5EC80
/*1409d07fa*/  mov r9, rdx
/*1409d07fd*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0804*/  mov rdx, rdi
/*1409d0807*/  mov r8, rax
/*1409d080a*/  call sub_1409CFCB0
/*1409d080f*/  nop
/*1409d0810*/  mov rcx, qword ptr [rbp+2A0h+var_60+8]
/*1409d0817*/  mov rdi, qword ptr [rbp+2A0h+var_50]
/*1409d081e*/  test rdi, rdi
/*1409d0821*/  jnz loc_1409D3124
/*1409d0827*/  xor ebx, ebx
/*1409d0829*/ loc_1409D0829: add rbx, rdi
/*1409d082c*/  mov [rbp+2A0h+var_D8], rbx
/*1409d0833*/  mov rdx, qword ptr [rbp+2A0h+var_60]
/*1409d083a*/  test rdx, rdx
/*1409d083d*/  jz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0843*/  mov r8d, 1
/*1409d0849*/  call sub_140001660
/*1409d084e*/  jmp def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0853*/ loc_1409D0853: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409D0638 case 19  // jumptable 00000001409D0638 case 19
/*1409d0857*/  movdqu xmm1, xmmword ptr [rax+3]
/*1409d085c*/  pcmpeqb xmm1, cs:xmmword_1417A2CF0
/*1409d0864*/  pcmpeqb xmm0, cs:xmmword_1417A2CD0
/*1409d086c*/  pand xmm0, xmm1
/*1409d0870*/  pmovmskb ecx, xmm0
/*1409d0874*/  cmp ecx, 0FFFFh
/*1409d087a*/  jz loc_1409D0AA2
/*1409d0880*/  movdqu xmm0, xmmword ptr [rax]
/*1409d0884*/  movdqu xmm1, xmmword ptr [rax+3]
/*1409d0889*/  pcmpeqb xmm1, cs:xmmword_141764070
/*1409d0891*/  pcmpeqb xmm0, cs:xmmword_141764080
/*1409d0899*/  pand xmm0, xmm1
/*1409d089d*/  pmovmskb eax, xmm0
/*1409d08a1*/  cmp eax, 0FFFFh
/*1409d08a6*/  jnz def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d08ac*/  lea rcx, aIndex_0; "index"
/*1409d08b3*/  mov edx, 5
/*1409d08b8*/  mov r8, r14
/*1409d08bb*/  call sub_141433D50
/*1409d08c0*/  nop
/*1409d08c1*/  test rax, rax
/*1409d08c4*/  jz short loc_1409D08D6
/*1409d08c6*/  cmp byte ptr [rax], 2
/*1409d08c9*/  jnz short loc_1409D08D6
/*1409d08cb*/  cmp qword ptr [rax+8], 0
/*1409d08d0*/  jz loc_1409D1AF6
/*1409d08d6*/ loc_1409D08D6: xor r15d, r15d
/*1409d08d9*/ loc_1409D08D9: mov [rbp+2A0h+var_240], r15
/*1409d08dd*/  lea rcx, aDelta_2; "delta"
/*1409d08e4*/  mov edx, 5
/*1409d08e9*/  mov r8, r14
/*1409d08ec*/  call sub_141433D50
/*1409d08f1*/  nop
/*1409d08f2*/  test rax, rax
/*1409d08f5*/  jz loc_1409D0B77
/*1409d08fb*/  movzx ecx, byte ptr [rax]
/*1409d08fe*/  lea rdx, jpt_1409D090C
/*1409d0905*/  movsxd rcx, ds:(jpt_1409D090C - 1417AAC3Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409d0909*/  add rcx, rdx
/*1409d090c*/  jmp rcx; switch jump  // switch jump
/*1409d090e*/ loc_1409D090E: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409D090C cases 1,2  // jumptable 00000001409D090C cases 1,2
/*1409d0912*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409d0917*/  movdqa [rbp+2A0h+var_50], xmm1
/*1409d091f*/  movdqa [rbp+2A0h+var_60], xmm0
/*1409d0927*/  jmp loc_1409D1B5E
/*1409d092c*/ loc_1409D092C: lea rcx, aMessage_2; "message"
/*1409d0933*/  mov edx, 7
/*1409d0938*/  mov r8, r14
/*1409d093b*/  call sub_141433D50
/*1409d0940*/  nop
/*1409d0941*/  test rax, rax
/*1409d0944*/  jz loc_1409D09E2
/*1409d094a*/  lea rcx, aModel_6; "model"
/*1409d0951*/  mov edx, 5
/*1409d0956*/  mov r8, rax
/*1409d0959*/  call sub_141433D50
/*1409d095e*/  nop
/*1409d095f*/ loc_1409D095F: test rax, rax
/*1409d0962*/  jz short loc_1409D09E2
/*1409d0964*/  cmp byte ptr [rax], 3
/*1409d0967*/  jnz short loc_1409D09E2
/*1409d0969*/  mov rbx, [rax+18h]
/*1409d096d*/  test rbx, rbx
/*1409d0970*/  jz short loc_1409D09E2
/*1409d0972*/  mov r12, [rax+10h]
/*1409d0976*/  mov [rsp+320h+var_300], 1
/*1409d097f*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0986*/  mov r9d, 1
/*1409d098c*/  mov rdx, rbx
/*1409d098f*/  xor r8d, r8d
/*1409d0992*/  call sub_140388B60
/*1409d0997*/  mov r15, qword ptr [rbp+2A0h+var_60+8]
/*1409d099e*/  cmp dword ptr [rbp+2A0h+var_60], 1
/*1409d09a5*/  jz loc_1409D310F
/*1409d09ab*/  mov r13, qword ptr [rbp+2A0h+var_50]
/*1409d09b2*/  mov rcx, r13
/*1409d09b5*/  mov rdx, r12
/*1409d09b8*/  mov r8, rbx
/*1409d09bb*/  call sub_141684120
/*1409d09c0*/  mov rdx, [rdi]
/*1409d09c3*/  test rdx, rdx
/*1409d09c6*/  jz short loc_1409D09D7
/*1409d09c8*/  mov rcx, [rdi+8]
/*1409d09cc*/  mov r8d, 1
/*1409d09d2*/  call sub_140001660
/*1409d09d7*/ loc_1409D09D7: mov [rdi], r15
/*1409d09da*/  mov [rdi+8], r13
/*1409d09de*/  mov [rdi+10h], rbx
/*1409d09e2*/ loc_1409D09E2: lea rcx, aMessage_2; "message"
/*1409d09e9*/  mov edx, 7
/*1409d09ee*/  mov r8, r14
/*1409d09f1*/  call sub_141433D50
/*1409d09f6*/  nop
/*1409d09f7*/  test rax, rax
/*1409d09fa*/  jz loc_1409D0A8D
/*1409d0a00*/  lea rcx, aId_6; "id"
/*1409d0a07*/  mov edx, 2
/*1409d0a0c*/  mov r8, rax
/*1409d0a0f*/  call sub_141433D50
/*1409d0a14*/  nop
/*1409d0a15*/  test rax, rax
/*1409d0a18*/  jz short loc_1409D0A8D
/*1409d0a1a*/  cmp byte ptr [rax], 3
/*1409d0a1d*/  jnz short loc_1409D0A8D
/*1409d0a1f*/  movdqu xmm0, xmmword ptr [rax+10h]
/*1409d0a24*/  movdqu [rbp+2A0h+var_A0], xmm0
/*1409d0a2c*/  lea rax, [rbp+2A0h+var_A0]
/*1409d0a33*/  mov qword ptr [rbp+2A0h+var_60], rax
/*1409d0a3a*/  lea rax, sub_14041F680
/*1409d0a41*/  mov qword ptr [rbp+2A0h+var_60+8], rax
/*1409d0a48*/  lea rdx, unk_1417A6600
/*1409d0a4f*/  lea rcx, [rbp+2A0h+var_258]
/*1409d0a53*/  lea r8, [rbp+2A0h+var_60]
/*1409d0a5a*/  call sub_14149C0F0
/*1409d0a5f*/  nop
/*1409d0a60*/  lea rbx, [rdi+18h]
/*1409d0a64*/  mov rdx, [rdi+18h]
/*1409d0a68*/  test rdx, rdx
/*1409d0a6b*/  jz short loc_1409D0A7C
/*1409d0a6d*/  mov rcx, [rdi+20h]
/*1409d0a71*/  mov r8d, 1
/*1409d0a77*/  call sub_140001660
/*1409d0a7c*/ loc_1409D0A7C: mov rax, [rbp+2A0h+var_248]
/*1409d0a80*/  mov [rbx+10h], rax
/*1409d0a84*/  movdqu xmm0, [rbp+2A0h+var_258]
/*1409d0a89*/  movdqu xmmword ptr [rbx], xmm0
/*1409d0a8d*/ loc_1409D0A8D: lea rdx, [rbp+2A0h+var_E8]
/*1409d0a94*/  mov rcx, rdi
/*1409d0a97*/  call sub_1409CFBB0
/*1409d0a9c*/  nop
/*1409d0a9d*/  jmp def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d0aa2*/ loc_1409D0AA2: lea rcx, aIndex_0; "index"
/*1409d0aa9*/  mov edx, 5
/*1409d0aae*/  mov r8, r14
/*1409d0ab1*/  call sub_141433D50
/*1409d0ab6*/  nop
/*1409d0ab7*/  test rax, rax
/*1409d0aba*/  jz short loc_1409D0ACC
/*1409d0abc*/  cmp byte ptr [rax], 2
/*1409d0abf*/  jnz short loc_1409D0ACC
/*1409d0ac1*/  cmp qword ptr [rax+8], 0
/*1409d0ac6*/  jz loc_1409D0BDE
/*1409d0acc*/ loc_1409D0ACC: xor ebx, ebx
/*1409d0ace*/ loc_1409D0ACE: lea rcx, aContentBlock; "content_block"
/*1409d0ad5*/  mov edx, 0Dh
/*1409d0ada*/  mov r8, r14
/*1409d0add*/  call sub_141433D50
/*1409d0ae2*/  nop
/*1409d0ae3*/  test rax, rax
/*1409d0ae6*/  jz short loc_1409D0B19
/*1409d0ae8*/  movzx ecx, byte ptr [rax]
/*1409d0aeb*/  lea rdx, jpt_1409D0AF9
/*1409d0af2*/  movsxd rcx, ds:(jpt_1409D0AF9 - 1417AAC54h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409d0af6*/  add rcx, rdx
/*1409d0af9*/  jmp rcx; switch jump  // switch jump
/*1409d0afb*/ loc_1409D0AFB: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409D0AF9 cases 1,2  // jumptable 00000001409D0AF9 cases 1,2
/*1409d0aff*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409d0b04*/  movdqa [rbp+2A0h+var_50], xmm1
/*1409d0b0c*/  movdqa [rbp+2A0h+var_60], xmm0
/*1409d0b14*/  jmp loc_1409D0C46
/*1409d0b19*/ loc_1409D0B19: mov byte ptr [rbp+2A0h+var_60], 0
/*1409d0b20*/  movdqu xmm0, [rbp+2A0h+var_50]
/*1409d0b28*/  movdqa [rbp+2A0h+var_100], xmm0
/*1409d0b30*/  movzx eax, byte ptr [rbp+2A0h+var_60]
/*1409d0b37*/  mov [rbp+2A0h+var_110], al
/*1409d0b3d*/  mov rax, qword ptr [rbp+2A0h+var_60+1]
/*1409d0b44*/  mov [rbp+2A0h+var_10F], rax
/*1409d0b4b*/  mov eax, dword ptr [rbp+2A0h+var_60+9]
/*1409d0b51*/  mov [rbp+2A0h+var_107], eax
/*1409d0b57*/  movzx eax, word ptr [rbp+2A0h+var_60+0Dh]
/*1409d0b5e*/  mov [rbp+2A0h+var_103], ax
/*1409d0b65*/  movzx eax, byte ptr [rbp+2A0h+var_60+0Fh]
/*1409d0b6c*/  mov [rbp+2A0h+var_101], al
/*1409d0b72*/  jmp loc_1409D0CB0
/*1409d0b77*/ loc_1409D0B77: mov byte ptr [rbp+2A0h+var_60], 0
/*1409d0b7e*/  movdqu xmm0, [rbp+2A0h+var_50]
/*1409d0b86*/  movdqa [rbp+2A0h+var_100], xmm0
/*1409d0b8e*/  movzx eax, byte ptr [rbp+2A0h+var_60]
/*1409d0b95*/  mov [rbp+2A0h+var_110], al
/*1409d0b9b*/  mov rax, qword ptr [rbp+2A0h+var_60+1]
/*1409d0ba2*/  mov [rbp+2A0h+var_10F], rax
/*1409d0ba9*/  mov eax, dword ptr [rbp+2A0h+var_60+9]
/*1409d0baf*/  mov [rbp+2A0h+var_107], eax
/*1409d0bb5*/  movzx eax, word ptr [rbp+2A0h+var_60+0Dh]
/*1409d0bbc*/  mov [rbp+2A0h+var_103], ax
/*1409d0bc3*/  movzx eax, byte ptr [rbp+2A0h+var_60+0Fh]
/*1409d0bca*/  mov [rbp+2A0h+var_101], al
/*1409d0bd0*/  jmp loc_1409D1BC8
/*1409d0bd5*/ loc_1409D0BD5: mov rax, [rax+10h]
/*1409d0bd9*/  jmp loc_1409D0721
/*1409d0bde*/ loc_1409D0BDE: mov rbx, [rax+10h]
/*1409d0be2*/  jmp loc_1409D0ACE
/*1409d0be7*/ loc_1409D0BE7: lea rcx, [rbp+2A0h+var_60+8]; jumptable 00000001409D0AF9 case 4  // jumptable 00000001409D0AF9 case 4
/*1409d0bee*/  mov rdx, [rax+10h]
/*1409d0bf2*/  mov r8, [rax+18h]
/*1409d0bf6*/  call sub_1402CE260
/*1409d0bfb*/  nop
/*1409d0bfc*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d0c03*/  jmp short loc_1409D0C46
/*1409d0c05*/ loc_1409D0C05: mov byte ptr [rbp+2A0h+var_60], 0; jumptable 00000001409D0AF9 case 0  // jumptable 00000001409D0AF9 case 0
/*1409d0c0c*/  jmp short loc_1409D0C46
/*1409d0c0e*/ loc_1409D0C0E: add rax, 8; jumptable 00000001409D0AF9 case 3  // jumptable 00000001409D0AF9 case 3
/*1409d0c12*/  lea rcx, [rbp+2A0h+var_60+8]
/*1409d0c19*/  mov rdx, rax
/*1409d0c1c*/  call sub_14149C500
/*1409d0c21*/  nop
/*1409d0c22*/  mov byte ptr [rbp+2A0h+var_60], 3
/*1409d0c29*/  jmp short loc_1409D0C46
/*1409d0c2b*/ loc_1409D0C2B: add rax, 8; jumptable 00000001409D0AF9 case 5  // jumptable 00000001409D0AF9 case 5
/*1409d0c2f*/  lea rcx, [rbp+2A0h+var_60+8]
/*1409d0c36*/  mov rdx, rax
/*1409d0c39*/  call sub_140323EA0
/*1409d0c3e*/  nop
/*1409d0c3f*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d0c46*/ loc_1409D0C46: movzx eax, byte ptr [rbp+2A0h+var_60]
/*1409d0c4d*/  mov rcx, qword ptr [rbp+2A0h+var_60+1]
/*1409d0c54*/  mov edx, dword ptr [rbp+2A0h+var_60+9]
/*1409d0c5a*/  movzx r8d, word ptr [rbp+2A0h+var_60+0Dh]
/*1409d0c62*/  movzx r9d, byte ptr [rbp+2A0h+var_60+0Fh]
/*1409d0c6a*/  movdqa xmm0, [rbp+2A0h+var_50]
/*1409d0c72*/  movdqa [rbp+2A0h+var_100], xmm0
/*1409d0c7a*/  mov [rbp+2A0h+var_110], al
/*1409d0c80*/  mov [rbp+2A0h+var_10F], rcx
/*1409d0c87*/  mov [rbp+2A0h+var_107], edx
/*1409d0c8d*/  mov [rbp+2A0h+var_103], r8w
/*1409d0c95*/  mov [rbp+2A0h+var_101], r9b
/*1409d0c9c*/  mov byte ptr [rbp+2A0h+var_60], 0
/*1409d0ca3*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0caa*/  call sub_1400104F0
/*1409d0caf*/  nop
/*1409d0cb0*/ loc_1409D0CB0: lea rcx, aType_8; "type"
/*1409d0cb7*/  lea r8, [rbp+2A0h+var_110]
/*1409d0cbe*/  mov edx, 4
/*1409d0cc3*/  call sub_141433D50
/*1409d0cc8*/  nop
/*1409d0cc9*/  mov r14d, 1
/*1409d0ccf*/  test rax, rax
/*1409d0cd2*/  jz short loc_1409D0CE3
/*1409d0cd4*/  cmp byte ptr [rax], 3
/*1409d0cd7*/  jnz short loc_1409D0CE3
/*1409d0cd9*/  mov r14, [rax+10h]
/*1409d0cdd*/  mov r15, [rax+18h]
/*1409d0ce1*/  jmp short loc_1409D0CE6
/*1409d0ce3*/ loc_1409D0CE3: xor r15d, r15d
/*1409d0ce6*/ loc_1409D0CE6: lea rdx, [rbp+2A0h+var_E8]
/*1409d0ced*/  mov rcx, rdi
/*1409d0cf0*/  call sub_1409CFBB0
/*1409d0cf5*/  nop
/*1409d0cf6*/  cmp r15, 8
/*1409d0cfa*/  jz short loc_1409D0D2B
/*1409d0cfc*/  cmp r15, 4
/*1409d0d00*/  jnz loc_1409D1AE4
/*1409d0d06*/  cmp dword ptr [r14], 74786574h
/*1409d0d0d*/  jnz loc_1409D1AE4
/*1409d0d13*/  add rdi, 30h ; '0'
/*1409d0d17*/  mov rcx, rdi
/*1409d0d1a*/  mov rdx, rbx
/*1409d0d1d*/  xor r8d, r8d
/*1409d0d20*/  call sub_140476B90
/*1409d0d25*/  nop
/*1409d0d26*/  jmp loc_1409D1AE4
/*1409d0d2b*/ loc_1409D0D2B: mov rax, 6573755F6C6F6F74h
/*1409d0d35*/  cmp [r14], rax
/*1409d0d38*/  jnz loc_1409D1AE4
/*1409d0d3e*/  mov eax, [rdi+60h]
/*1409d0d41*/  mov [rbp+2A0h+var_C8], rax
/*1409d0d48*/  inc eax
/*1409d0d4a*/  mov [rdi+60h], eax
/*1409d0d4d*/  lea rcx, aId_6; "id"
/*1409d0d54*/  lea r8, [rbp+2A0h+var_110]
/*1409d0d5b*/  mov edx, 2
/*1409d0d60*/  call sub_141433D50
/*1409d0d65*/  nop
/*1409d0d66*/ loc_1409D0D66: mov r15d, 1
/*1409d0d6c*/  test rax, rax
/*1409d0d6f*/  jz short loc_1409D0D80
/*1409d0d71*/  cmp byte ptr [rax], 3
/*1409d0d74*/  jnz short loc_1409D0D80
/*1409d0d76*/  mov r15, [rax+10h]
/*1409d0d7a*/  mov r12, [rax+18h]
/*1409d0d7e*/  jmp short loc_1409D0D83
/*1409d0d80*/ loc_1409D0D80: xor r12d, r12d
/*1409d0d83*/ loc_1409D0D83: mov [rsp+320h+var_300], 1
/*1409d0d8c*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0d93*/  mov r9d, 1
/*1409d0d99*/  mov rdx, r12
/*1409d0d9c*/  xor r8d, r8d
/*1409d0d9f*/  call sub_140388B60
/*1409d0da4*/  mov r13, qword ptr [rbp+2A0h+var_60+8]
/*1409d0dab*/  cmp dword ptr [rbp+2A0h+var_60], 1
/*1409d0db2*/  jz loc_1409D2EE2
/*1409d0db8*/  mov r14, qword ptr [rbp+2A0h+var_50]
/*1409d0dbf*/  test r12, r12
/*1409d0dc2*/  jz short loc_1409D0DD2
/*1409d0dc4*/  mov rcx, r14
/*1409d0dc7*/  mov rdx, r15
/*1409d0dca*/  mov r8, r12
/*1409d0dcd*/  call sub_141684120
/*1409d0dd2*/ loc_1409D0DD2: mov [rbp+2A0h+var_D0], r13
/*1409d0dd9*/  mov [rbp+2A0h+var_240], r13
/*1409d0ddd*/  mov [rbp+2A0h+var_210], r14
/*1409d0de4*/  mov [rbp+2A0h+var_238], r14
/*1409d0de8*/  mov [rbp+2A0h+var_230], r12
/*1409d0dec*/ loc_1409D0DEC: lea rcx, aName_7; "name"
/*1409d0df3*/  lea r8, [rbp+2A0h+var_110]
/*1409d0dfa*/  mov edx, 4
/*1409d0dff*/  call sub_141433D50
/*1409d0e04*/  nop
/*1409d0e05*/ loc_1409D0E05: mov r15d, 1
/*1409d0e0b*/  test rax, rax
/*1409d0e0e*/  jz short loc_1409D0E1F
/*1409d0e10*/  cmp byte ptr [rax], 3
/*1409d0e13*/  jnz short loc_1409D0E1F
/*1409d0e15*/  mov r15, [rax+10h]
/*1409d0e19*/  mov r12, [rax+18h]
/*1409d0e1d*/  jmp short loc_1409D0E22
/*1409d0e1f*/ loc_1409D0E1F: xor r12d, r12d
/*1409d0e22*/ loc_1409D0E22: mov [rsp+320h+var_300], 1
/*1409d0e2b*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0e32*/  mov r9d, 1
/*1409d0e38*/  mov rdx, r12
/*1409d0e3b*/  xor r8d, r8d
/*1409d0e3e*/  call sub_140388B60
/*1409d0e43*/  mov r14, qword ptr [rbp+2A0h+var_60+8]
/*1409d0e4a*/  cmp dword ptr [rbp+2A0h+var_60], 1
/*1409d0e51*/  jz loc_1409D2EF7
/*1409d0e57*/  mov r13, qword ptr [rbp+2A0h+var_50]
/*1409d0e5e*/  test r12, r12
/*1409d0e61*/  jz short loc_1409D0E71
/*1409d0e63*/  mov rcx, r13
/*1409d0e66*/  mov rdx, r15
/*1409d0e69*/  mov r8, r12
/*1409d0e6c*/  call sub_141684120
/*1409d0e71*/ loc_1409D0E71: mov [rbp+2A0h+var_1E8], r14
/*1409d0e78*/  mov [rbp+2A0h+var_228], r14
/*1409d0e7c*/  mov [rbp+2A0h+var_208], r13
/*1409d0e83*/  mov [rbp+2A0h+var_220], r13
/*1409d0e8a*/  mov [rbp+2A0h+var_218], r12
/*1409d0e91*/  mov qword ptr [rbp+2A0h+var_180], 0
/*1409d0e9c*/  mov [rbp+2A0h+var_170], 0
/*1409d0ea7*/  call nullsub_1
/*1409d0eac*/  mov ecx, 2
/*1409d0eb1*/  mov edx, 1
/*1409d0eb6*/  call sub_140001650
/*1409d0ebb*/  test rax, rax
/*1409d0ebe*/  jz loc_1409D33CB
/*1409d0ec4*/  mov word ptr [rax], 6469h
/*1409d0ec9*/  mov [rbp+2A0h+var_78], 2
/*1409d0ed4*/  mov [rbp+2A0h+var_70], rax
/*1409d0edb*/  mov [rbp+2A0h+var_68], 2
/*1409d0ee6*/  lea rdx, [rdi+18h]
/*1409d0eea*/  mov [rbp+2A0h+var_A9], 1
/*1409d0ef1*/ loc_1409D0EF1: lea rcx, [rbp+2A0h+var_60]
/*1409d0ef8*/  call sub_140B56520
/*1409d0efd*/  nop
/*1409d0efe*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d0f05*/  jz loc_1409D2F0C
/*1409d0f0b*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d0f13*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d0f1b*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d0f23*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d0f2b*/  mov [rbp+2A0h+var_A9], 0
/*1409d0f32*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0f39*/  lea rdx, [rbp+2A0h+var_180]
/*1409d0f40*/  lea r8, [rbp+2A0h+var_78]
/*1409d0f47*/  lea r9, [rbp+2A0h+var_A0]
/*1409d0f4e*/  call sub_140307860
/*1409d0f53*/  nop
/*1409d0f54*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d0f5b*/  jz short loc_1409D0F6A
/*1409d0f5d*/ loc_1409D0F5D: lea rcx, [rbp+2A0h+var_60]
/*1409d0f64*/  call sub_1400104F0
/*1409d0f69*/  nop
/*1409d0f6a*/ loc_1409D0F6A: call nullsub_1
/*1409d0f6f*/  mov ecx, 6
/*1409d0f74*/  mov edx, 1
/*1409d0f79*/  call sub_140001650
/*1409d0f7e*/  test rax, rax
/*1409d0f81*/  jz loc_1409D33E0
/*1409d0f87*/  mov word ptr [rax+4], 7463h
/*1409d0f8d*/  mov dword ptr [rax], 656A626Fh
/*1409d0f93*/  mov [rbp+2A0h+var_78], 6
/*1409d0f9e*/  mov [rbp+2A0h+var_70], rax
/*1409d0fa5*/  mov [rbp+2A0h+var_68], 6
/*1409d0fb0*/  mov [rbp+2A0h+var_AA], 1
/*1409d0fb7*/ loc_1409D0FB7: lea rdx, off_1417A6598; "chat.completion.chunk"
/*1409d0fbe*/  lea rcx, [rbp+2A0h+var_60]
/*1409d0fc5*/  call sub_140B56640
/*1409d0fca*/  nop
/*1409d0fcb*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d0fd2*/  jz loc_1409D2F4B
/*1409d0fd8*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d0fe0*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d0fe8*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d0ff0*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d0ff8*/  mov [rbp+2A0h+var_AA], 0
/*1409d0fff*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1006*/  lea rdx, [rbp+2A0h+var_180]
/*1409d100d*/  lea r8, [rbp+2A0h+var_78]
/*1409d1014*/  lea r9, [rbp+2A0h+var_A0]
/*1409d101b*/  call sub_140307860
/*1409d1020*/  nop
/*1409d1021*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1028*/  jz short loc_1409D1037
/*1409d102a*/ loc_1409D102A: lea rcx, [rbp+2A0h+var_60]
/*1409d1031*/  call sub_1400104F0
/*1409d1036*/  nop
/*1409d1037*/ loc_1409D1037: call nullsub_1
/*1409d103c*/  mov ecx, 5
/*1409d1041*/  mov edx, 1
/*1409d1046*/  call sub_140001650
/*1409d104b*/  test rax, rax
/*1409d104e*/  jz loc_1409D33F5
/*1409d1054*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*1409d1058*/  mov dword ptr [rax], 65646F6Dh
/*1409d105e*/  mov [rbp+2A0h+var_78], 5
/*1409d1069*/  mov [rbp+2A0h+var_70], rax
/*1409d1070*/  mov [rbp+2A0h+var_68], 5
/*1409d107b*/  mov [rbp+2A0h+var_AB], 1
/*1409d1082*/ loc_1409D1082: lea rcx, [rbp+2A0h+var_60]
/*1409d1089*/  mov rdx, rdi
/*1409d108c*/  call sub_140B56520
/*1409d1091*/  nop
/*1409d1092*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1099*/  jz loc_1409D2F8A
/*1409d109f*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d10a7*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d10af*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d10b7*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d10bf*/  mov [rbp+2A0h+var_AB], 0
/*1409d10c6*/  lea rcx, [rbp+2A0h+var_60]
/*1409d10cd*/  lea rdx, [rbp+2A0h+var_180]
/*1409d10d4*/  lea r8, [rbp+2A0h+var_78]
/*1409d10db*/  lea r9, [rbp+2A0h+var_A0]
/*1409d10e2*/  call sub_140307860
/*1409d10e7*/  nop
/*1409d10e8*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d10ef*/  jz short loc_1409D10FE
/*1409d10f1*/ loc_1409D10F1: lea rcx, [rbp+2A0h+var_60]
/*1409d10f8*/  call sub_1400104F0
/*1409d10fd*/  nop
/*1409d10fe*/ loc_1409D10FE: call nullsub_1
/*1409d1103*/  mov ecx, 7
/*1409d1108*/  mov edx, 1
/*1409d110d*/  call sub_140001650
/*1409d1112*/  test rax, rax
/*1409d1115*/  jz loc_1409D340A
/*1409d111b*/  mov dword ptr [rax+3], 73656369h
/*1409d1122*/  mov dword ptr [rax], 696F6863h
/*1409d1128*/  mov [rbp+2A0h+var_200], 7
/*1409d1133*/  mov [rbp+2A0h+var_1F8], rax
/*1409d113a*/  mov [rbp+2A0h+var_1F0], 7
/*1409d1145*/  call nullsub_1
/*1409d114a*/  mov ecx, 20h ; ' '
/*1409d114f*/  mov edx, 8
/*1409d1154*/  call sub_140001650
/*1409d1159*/  test rax, rax
/*1409d115c*/  jz loc_1409D2EAA
/*1409d1162*/  mov [rbp+2A0h+var_130], rax
/*1409d1169*/  mov qword ptr [rbp+2A0h+var_1C8], 0
/*1409d1174*/  mov [rbp+2A0h+var_1B8], 0
/*1409d117f*/  call nullsub_1
/*1409d1184*/  mov ecx, 5
/*1409d1189*/  mov edx, 1
/*1409d118e*/  call sub_140001650
/*1409d1193*/  test rax, rax
/*1409d1196*/  jz loc_1409D341F
/*1409d119c*/  mov byte ptr [rax+4], 78h ; 'x'
/*1409d11a0*/  mov dword ptr [rax], 65646E69h
/*1409d11a6*/  mov [rbp+2A0h+var_78], 5
/*1409d11b1*/  mov [rbp+2A0h+var_70], rax
/*1409d11b8*/  mov [rbp+2A0h+var_68], 5
/*1409d11c3*/  mov byte ptr [rbp+2A0h+var_60], 2
/*1409d11ca*/  pxor xmm0, xmm0
/*1409d11ce*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d11d6*/ loc_1409D11D6: lea rcx, [rbp+2A0h+var_A0]
/*1409d11dd*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d11e4*/  lea r8, [rbp+2A0h+var_78]
/*1409d11eb*/  lea r9, [rbp+2A0h+var_60]
/*1409d11f2*/  call sub_140307860
/*1409d11f7*/  nop
/*1409d11f8*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d11ff*/  jz short loc_1409D120E
/*1409d1201*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d1208*/  call sub_1400104F0
/*1409d120d*/  nop
/*1409d120e*/ loc_1409D120E: call nullsub_1
/*1409d1213*/  mov ecx, 5
/*1409d1218*/  mov edx, 1
/*1409d121d*/  call sub_140001650
/*1409d1222*/  test rax, rax
/*1409d1225*/  jz loc_1409D3434
/*1409d122b*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409d122f*/  mov dword ptr [rax], 746C6564h
/*1409d1235*/  mov [rbp+2A0h+var_1E0], 5
/*1409d1240*/  mov [rbp+2A0h+var_1D8], rax
/*1409d1247*/  mov [rbp+2A0h+var_1D0], 5
/*1409d1252*/  mov qword ptr [rbp+2A0h+var_148], 0
/*1409d125d*/  mov [rbp+2A0h+var_138], 0
/*1409d1268*/  call nullsub_1
/*1409d126d*/  mov ecx, 0Ah
/*1409d1272*/  mov edx, 1
/*1409d1277*/  call sub_140001650
/*1409d127c*/  test rax, rax
/*1409d127f*/  jz loc_1409D3449
/*1409d1285*/  mov rcx, 6C61635F6C6F6F74h
/*1409d128f*/  mov [rax], rcx
/*1409d1292*/  mov word ptr [rax+8], 736Ch
/*1409d1298*/  mov [rbp+2A0h+var_198], 0Ah
/*1409d12a3*/  mov [rbp+2A0h+var_190], rax
/*1409d12aa*/  mov [rbp+2A0h+var_188], 0Ah
/*1409d12b5*/  call nullsub_1
/*1409d12ba*/  mov ecx, 20h ; ' '
/*1409d12bf*/  mov edx, 8
/*1409d12c4*/  call sub_140001650
/*1409d12c9*/  test rax, rax
/*1409d12cc*/  jz loc_1409D2EC6
/*1409d12d2*/  mov [rbp+2A0h+var_168], rax
/*1409d12d9*/  mov qword ptr [rbp+2A0h+var_128], 0
/*1409d12e4*/  mov [rbp+2A0h+var_118], 0
/*1409d12ef*/  call nullsub_1
/*1409d12f4*/  mov ecx, 5
/*1409d12f9*/  mov edx, 1
/*1409d12fe*/  call sub_140001650
/*1409d1303*/  test rax, rax
/*1409d1306*/  jz loc_1409D345E
/*1409d130c*/  mov byte ptr [rax+4], 78h ; 'x'
/*1409d1310*/  mov dword ptr [rax], 65646E69h
/*1409d1316*/  mov [rbp+2A0h+var_78], 5
/*1409d1321*/  mov [rbp+2A0h+var_70], rax
/*1409d1328*/  mov [rbp+2A0h+var_68], 5
/*1409d1333*/  mov byte ptr [rbp+2A0h+var_60], 2
/*1409d133a*/  mov qword ptr [rbp+2A0h+var_60+8], 0
/*1409d1345*/  mov rax, [rbp+2A0h+var_C8]
/*1409d134c*/  mov qword ptr [rbp+2A0h+var_50], rax
/*1409d1353*/ loc_1409D1353: lea rcx, [rbp+2A0h+var_A0]
/*1409d135a*/  lea rdx, [rbp+2A0h+var_128]
/*1409d1361*/  lea r8, [rbp+2A0h+var_78]
/*1409d1368*/  lea r9, [rbp+2A0h+var_60]
/*1409d136f*/  call sub_140307860
/*1409d1374*/  nop
/*1409d1375*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d137c*/  jz short loc_1409D138B
/*1409d137e*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d1385*/  call sub_1400104F0
/*1409d138a*/  nop
/*1409d138b*/ loc_1409D138B: call nullsub_1
/*1409d1390*/  mov ecx, 2
/*1409d1395*/  mov edx, 1
/*1409d139a*/  call sub_140001650
/*1409d139f*/  test rax, rax
/*1409d13a2*/  jz loc_1409D3473
/*1409d13a8*/  mov word ptr [rax], 6469h
/*1409d13ad*/  mov [rbp+2A0h+var_78], 2
/*1409d13b8*/  mov [rbp+2A0h+var_70], rax
/*1409d13bf*/  mov [rbp+2A0h+var_68], 2
/*1409d13ca*/  mov [rbp+2A0h+var_AC], 1
/*1409d13d1*/ loc_1409D13D1: lea rcx, [rbp+2A0h+var_60]
/*1409d13d8*/  lea rdx, [rbp+2A0h+var_240]
/*1409d13dc*/  call sub_140B56520
/*1409d13e1*/  nop
/*1409d13e2*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d13e9*/  jz loc_1409D2FC9
/*1409d13ef*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d13f7*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d13ff*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d1407*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d140f*/  mov [rbp+2A0h+var_AC], 0
/*1409d1416*/  lea rcx, [rbp+2A0h+var_60]
/*1409d141d*/  lea rdx, [rbp+2A0h+var_128]
/*1409d1424*/  lea r8, [rbp+2A0h+var_78]
/*1409d142b*/  lea r9, [rbp+2A0h+var_A0]
/*1409d1432*/  call sub_140307860
/*1409d1437*/  nop
/*1409d1438*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d143f*/  jz short loc_1409D144E
/*1409d1441*/ loc_1409D1441: lea rcx, [rbp+2A0h+var_60]
/*1409d1448*/  call sub_1400104F0
/*1409d144d*/  nop
/*1409d144e*/ loc_1409D144E: call nullsub_1
/*1409d1453*/  mov ecx, 4
/*1409d1458*/  mov edx, 1
/*1409d145d*/  call sub_140001650
/*1409d1462*/  test rax, rax
/*1409d1465*/  jz loc_1409D3488
/*1409d146b*/  mov dword ptr [rax], 65707974h
/*1409d1471*/  mov [rbp+2A0h+var_78], 4
/*1409d147c*/  mov [rbp+2A0h+var_70], rax
/*1409d1483*/  mov [rbp+2A0h+var_68], 4
/*1409d148e*/  mov [rbp+2A0h+var_AD], 1
/*1409d1495*/ loc_1409D1495: lea rdx, off_1417A4F98; "function"
/*1409d149c*/  lea rcx, [rbp+2A0h+var_60]
/*1409d14a3*/  call sub_140B56640
/*1409d14a8*/  nop
/*1409d14a9*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d14b0*/  jz loc_1409D3008
/*1409d14b6*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d14be*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d14c6*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d14ce*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d14d6*/  mov [rbp+2A0h+var_AD], 0
/*1409d14dd*/  lea rcx, [rbp+2A0h+var_60]
/*1409d14e4*/  lea rdx, [rbp+2A0h+var_128]
/*1409d14eb*/  lea r8, [rbp+2A0h+var_78]
/*1409d14f2*/  lea r9, [rbp+2A0h+var_A0]
/*1409d14f9*/  call sub_140307860
/*1409d14fe*/  nop
/*1409d14ff*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1506*/  jz short loc_1409D1515
/*1409d1508*/ loc_1409D1508: lea rcx, [rbp+2A0h+var_60]
/*1409d150f*/  call sub_1400104F0
/*1409d1514*/  nop
/*1409d1515*/ loc_1409D1515: call nullsub_1
/*1409d151a*/  mov ecx, 8
/*1409d151f*/  mov edx, 1
/*1409d1524*/  call sub_140001650
/*1409d1529*/  test rax, rax
/*1409d152c*/  jz loc_1409D349D
/*1409d1532*/  mov rcx, 6E6F6974636E7566h
/*1409d153c*/  mov [rax], rcx
/*1409d153f*/  mov [rbp+2A0h+var_1B0], 8
/*1409d154a*/  mov [rbp+2A0h+var_1A8], rax
/*1409d1551*/  mov [rbp+2A0h+var_1A0], 8
/*1409d155c*/  mov qword ptr [rbp+2A0h+var_160], 0
/*1409d1567*/  mov [rbp+2A0h+var_150], 0
/*1409d1572*/  call nullsub_1
/*1409d1577*/  mov ecx, 4
/*1409d157c*/  mov edx, 1
/*1409d1581*/  call sub_140001650
/*1409d1586*/  test rax, rax
/*1409d1589*/  jz loc_1409D34B2
/*1409d158f*/  mov dword ptr [rax], 656D616Eh
/*1409d1595*/  mov [rbp+2A0h+var_78], 4
/*1409d15a0*/  mov [rbp+2A0h+var_70], rax
/*1409d15a7*/  mov [rbp+2A0h+var_68], 4
/*1409d15b2*/  mov [rbp+2A0h+var_AE], 1
/*1409d15b9*/ loc_1409D15B9: lea rcx, [rbp+2A0h+var_60]
/*1409d15c0*/  lea rdx, [rbp+2A0h+var_228]
/*1409d15c4*/  call sub_140B56520
/*1409d15c9*/  nop
/*1409d15ca*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d15d1*/  jz loc_1409D3047
/*1409d15d7*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d15df*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d15e7*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d15ef*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d15f7*/  mov [rbp+2A0h+var_AE], 0
/*1409d15fe*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1605*/  lea rdx, [rbp+2A0h+var_160]
/*1409d160c*/  lea r8, [rbp+2A0h+var_78]
/*1409d1613*/  lea r9, [rbp+2A0h+var_A0]
/*1409d161a*/  call sub_140307860
/*1409d161f*/  nop
/*1409d1620*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1627*/  jz short loc_1409D1636
/*1409d1629*/ loc_1409D1629: lea rcx, [rbp+2A0h+var_60]
/*1409d1630*/  call sub_1400104F0
/*1409d1635*/  nop
/*1409d1636*/ loc_1409D1636: call nullsub_1
/*1409d163b*/  mov ecx, 9
/*1409d1640*/  mov edx, 1
/*1409d1645*/  call sub_140001650
/*1409d164a*/  test rax, rax
/*1409d164d*/  jz loc_1409D34C7
/*1409d1653*/  mov rcx, 746E656D75677261h
/*1409d165d*/  mov [rax], rcx
/*1409d1660*/  mov byte ptr [rax+8], 73h ; 's'
/*1409d1664*/  mov [rbp+2A0h+var_78], 9
/*1409d166f*/  mov [rbp+2A0h+var_70], rax
/*1409d1676*/  mov [rbp+2A0h+var_68], 9
/*1409d1681*/  mov [rbp+2A0h+var_AF], 1
/*1409d1688*/ loc_1409D1688: lea rdx, unk_1417A5900
/*1409d168f*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1696*/  call sub_140B56640
/*1409d169b*/  nop
/*1409d169c*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d16a3*/  jz loc_1409D3086
/*1409d16a9*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d16b1*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d16b9*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d16c1*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d16c9*/  mov [rbp+2A0h+var_AF], 0
/*1409d16d0*/  lea rcx, [rbp+2A0h+var_60]
/*1409d16d7*/  lea rdx, [rbp+2A0h+var_160]
/*1409d16de*/  lea r8, [rbp+2A0h+var_78]
/*1409d16e5*/  lea r9, [rbp+2A0h+var_A0]
/*1409d16ec*/  call sub_140307860
/*1409d16f1*/  nop
/*1409d16f2*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d16f9*/  jz short loc_1409D1708
/*1409d16fb*/ loc_1409D16FB: lea rcx, [rbp+2A0h+var_60]
/*1409d1702*/  call sub_1400104F0
/*1409d1707*/  nop
/*1409d1708*/ loc_1409D1708: movdqu xmm0, [rbp+2A0h+var_160]
/*1409d1710*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d1718*/  mov rax, [rbp+2A0h+var_150]
/*1409d171f*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d1726*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d172d*/  mov [rbp+2A0h+var_B8], 0
/*1409d1734*/ loc_1409D1734: lea rcx, [rbp+2A0h+var_A0]
/*1409d173b*/  lea rdx, [rbp+2A0h+var_128]
/*1409d1742*/  lea r8, [rbp+2A0h+var_1B0]
/*1409d1749*/  lea r9, [rbp+2A0h+var_60]
/*1409d1750*/  call sub_140307860
/*1409d1755*/  nop
/*1409d1756*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d175d*/  jz short loc_1409D176C
/*1409d175f*/ loc_1409D175F: lea rcx, [rbp+2A0h+var_A0]
/*1409d1766*/  call sub_1400104F0
/*1409d176b*/  nop
/*1409d176c*/ loc_1409D176C: mov rax, [rbp+2A0h+var_118]
/*1409d1773*/  movups xmm0, [rbp+2A0h+var_128]
/*1409d177a*/  movups [rbp+2A0h+var_60+7], xmm0
/*1409d1781*/  mov qword ptr [rbp+2A0h+var_50+7], rax
/*1409d1788*/  mov rcx, [rbp+2A0h+var_168]
/*1409d178f*/  mov byte ptr [rcx], 5
/*1409d1792*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d179a*/  mov rax, qword ptr [rbp+2A0h+var_60+0Fh]
/*1409d17a1*/  mov [rcx+10h], rax
/*1409d17a5*/  mov rax, qword ptr [rbp+2A0h+var_50+7]
/*1409d17ac*/  mov [rcx+18h], rax
/*1409d17b0*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409d17b5*/  mov qword ptr [rbp+2A0h+var_60+8], 1
/*1409d17c0*/  mov qword ptr [rbp+2A0h+var_50], rcx
/*1409d17c7*/  mov qword ptr [rbp+2A0h+var_50+8], 1
/*1409d17d2*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d17d9*/  mov [rbp+2A0h+var_B4], 0
/*1409d17e0*/ loc_1409D17E0: lea rcx, [rbp+2A0h+var_A0]
/*1409d17e7*/  lea rdx, [rbp+2A0h+var_148]
/*1409d17ee*/  lea r8, [rbp+2A0h+var_198]
/*1409d17f5*/  lea r9, [rbp+2A0h+var_60]
/*1409d17fc*/  call sub_140307860
/*1409d1801*/  nop
/*1409d1802*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d1809*/  jz short loc_1409D1818
/*1409d180b*/ loc_1409D180B: lea rcx, [rbp+2A0h+var_A0]
/*1409d1812*/  call sub_1400104F0
/*1409d1817*/  nop
/*1409d1818*/ loc_1409D1818: movdqu xmm0, [rbp+2A0h+var_148]
/*1409d1820*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d1828*/  mov rax, [rbp+2A0h+var_138]
/*1409d182f*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d1836*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d183d*/  mov [rbp+2A0h+var_B9], 0
/*1409d1844*/ loc_1409D1844: lea rcx, [rbp+2A0h+var_A0]
/*1409d184b*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d1852*/  lea r8, [rbp+2A0h+var_1E0]
/*1409d1859*/  lea r9, [rbp+2A0h+var_60]
/*1409d1860*/  call sub_140307860
/*1409d1865*/  nop
/*1409d1866*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d186d*/  jz short loc_1409D187C
/*1409d186f*/ loc_1409D186F: lea rcx, [rbp+2A0h+var_A0]
/*1409d1876*/  call sub_1400104F0
/*1409d187b*/  nop
/*1409d187c*/ loc_1409D187C: call nullsub_1
/*1409d1881*/  mov ecx, 0Dh
/*1409d1886*/  mov edx, 1
/*1409d188b*/  call sub_140001650
/*1409d1890*/  test rax, rax
/*1409d1893*/  jz loc_1409D34DC
/*1409d1899*/  mov rcx, 6E6F736165725F68h
/*1409d18a3*/  mov [rax+5], rcx
/*1409d18a7*/  mov rcx, 725F6873696E6966h
/*1409d18b1*/  mov [rax], rcx
/*1409d18b4*/  mov [rbp+2A0h+var_78], 0Dh
/*1409d18bf*/  mov [rbp+2A0h+var_70], rax
/*1409d18c6*/  mov [rbp+2A0h+var_68], 0Dh
/*1409d18d1*/  mov byte ptr [rbp+2A0h+var_60], 0
/*1409d18d8*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d18df*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d18e6*/  lea r8, [rbp+2A0h+var_78]
/*1409d18ed*/  lea r9, [rbp+2A0h+var_60]
/*1409d18f4*/  call sub_140307860
/*1409d18f9*/  nop
/*1409d18fa*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d1901*/  jz short loc_1409D1910
/*1409d1903*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d190a*/  call sub_1400104F0
/*1409d190f*/  nop
/*1409d1910*/ loc_1409D1910: mov rax, [rbp+2A0h+var_1B8]
/*1409d1917*/  movups xmm0, [rbp+2A0h+var_1C8]
/*1409d191e*/  movups [rbp+2A0h+var_60+7], xmm0
/*1409d1925*/  mov qword ptr [rbp+2A0h+var_50+7], rax
/*1409d192c*/  mov rcx, [rbp+2A0h+var_130]
/*1409d1933*/  mov byte ptr [rcx], 5
/*1409d1936*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d193e*/  mov rax, qword ptr [rbp+2A0h+var_60+0Fh]
/*1409d1945*/  mov [rcx+10h], rax
/*1409d1949*/  mov rax, qword ptr [rbp+2A0h+var_50+7]
/*1409d1950*/  mov [rcx+18h], rax
/*1409d1954*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409d1959*/  mov qword ptr [rbp+2A0h+var_60+8], 1
/*1409d1964*/  mov qword ptr [rbp+2A0h+var_50], rcx
/*1409d196b*/  mov qword ptr [rbp+2A0h+var_50+8], 1
/*1409d1976*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d197d*/  mov [rbp+2A0h+var_B3], 0
/*1409d1984*/ loc_1409D1984: lea rcx, [rbp+2A0h+var_A0]
/*1409d198b*/  lea rdx, [rbp+2A0h+var_180]
/*1409d1992*/  lea r8, [rbp+2A0h+var_200]
/*1409d1999*/  lea r15, [rbp+2A0h+var_60]
/*1409d19a0*/  mov r9, r15
/*1409d19a3*/  call sub_140307860
/*1409d19a8*/  nop
/*1409d19a9*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d19b0*/  jz short loc_1409D19BF
/*1409d19b2*/ loc_1409D19B2: lea rcx, [rbp+2A0h+var_A0]
/*1409d19b9*/  call sub_1400104F0
/*1409d19be*/  nop
/*1409d19bf*/ loc_1409D19BF: movdqu xmm0, [rbp+2A0h+var_180]
/*1409d19c7*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d19cf*/  mov rax, [rbp+2A0h+var_170]
/*1409d19d6*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d19dd*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d19e4*/  mov [rbp+2A0h+var_78], r15
/*1409d19eb*/  lea rax, sub_14142EA10
/*1409d19f2*/  mov [rbp+2A0h+var_70], rax
/*1409d19f9*/ loc_1409D19F9: lea rdx, unk_1417A65A8
/*1409d1a00*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d1a07*/  lea r8, [rbp+2A0h+var_78]
/*1409d1a0e*/  call sub_14149C0F0
/*1409d1a13*/  nop
/*1409d1a14*/ loc_1409D1A14: mov r14, qword ptr [rbp+2A0h+var_A0]
/*1409d1a1b*/  mov r13, qword ptr [rbp+2A0h+var_A0+8]
/*1409d1a22*/  mov r15, qword ptr [rbp+2A0h+var_90]
/*1409d1a29*/  mov rax, qword ptr [rbp+2A0h+var_E8]
/*1409d1a30*/  mov r12, [rbp+2A0h+var_D8]
/*1409d1a37*/  sub rax, r12
/*1409d1a3a*/  cmp r15, rax
/*1409d1a3d*/  ja loc_1409D30C5
/*1409d1a43*/  test r15, r15
/*1409d1a46*/  jz short loc_1409D1A5D
/*1409d1a48*/ loc_1409D1A48: mov rcx, qword ptr [rbp+2A0h+var_E8+8]
/*1409d1a4f*/  add rcx, r12
/*1409d1a52*/  mov rdx, r13
/*1409d1a55*/  mov r8, r15
/*1409d1a58*/  call sub_141684120
/*1409d1a5d*/ loc_1409D1A5D: add r12, r15
/*1409d1a60*/  mov [rbp+2A0h+var_D8], r12
/*1409d1a67*/  test r14, r14
/*1409d1a6a*/  jz short loc_1409D1A7D
/*1409d1a6c*/  mov r8d, 1
/*1409d1a72*/  mov rcx, r13
/*1409d1a75*/  mov rdx, r14
/*1409d1a78*/  call sub_140001660
/*1409d1a7d*/ loc_1409D1A7D: add rdi, 30h ; '0'
/*1409d1a81*/ loc_1409D1A81: mov rcx, rdi
/*1409d1a84*/  mov rdx, rbx
/*1409d1a87*/  mov r8d, 1
/*1409d1a8d*/  mov r9, [rbp+2A0h+var_C8]
/*1409d1a94*/  call sub_140476B90
/*1409d1a99*/  nop
/*1409d1a9a*/ loc_1409D1A9A: lea rcx, [rbp+2A0h+var_60]
/*1409d1aa1*/  call sub_1400104F0
/*1409d1aa6*/  nop
/*1409d1aa7*/  mov rdx, [rbp+2A0h+var_1E8]
/*1409d1aae*/  test rdx, rdx
/*1409d1ab1*/  jz short loc_1409D1AC5
/*1409d1ab3*/  mov r8d, 1
/*1409d1ab9*/  mov rcx, [rbp+2A0h+var_208]
/*1409d1ac0*/  call sub_140001660
/*1409d1ac5*/ loc_1409D1AC5: mov rdx, [rbp+2A0h+var_D0]
/*1409d1acc*/  test rdx, rdx
/*1409d1acf*/  jz short loc_1409D1AE4
/*1409d1ad1*/  mov r8d, 1
/*1409d1ad7*/  mov rcx, [rbp+2A0h+var_210]
/*1409d1ade*/  call sub_140001660
/*1409d1ae3*/  nop
/*1409d1ae4*/ loc_1409D1AE4: lea rcx, [rbp+2A0h+var_110]
/*1409d1aeb*/  call sub_1400104F0
/*1409d1af0*/  nop
/*1409d1af1*/  jmp def_1409D0638; jumptable 00000001409D0638 default case, cases 14-17
/*1409d1af6*/ loc_1409D1AF6: mov r15, [rax+10h]
/*1409d1afa*/  jmp loc_1409D08D9
/*1409d1aff*/ loc_1409D1AFF: lea rcx, [rbp+2A0h+var_60+8]; jumptable 00000001409D090C case 4  // jumptable 00000001409D090C case 4
/*1409d1b06*/  mov rdx, [rax+10h]
/*1409d1b0a*/  mov r8, [rax+18h]
/*1409d1b0e*/  call sub_1402CE260
/*1409d1b13*/  nop
/*1409d1b14*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d1b1b*/  jmp short loc_1409D1B5E
/*1409d1b1d*/ loc_1409D1B1D: mov byte ptr [rbp+2A0h+var_60], 0; jumptable 00000001409D090C case 0  // jumptable 00000001409D090C case 0
/*1409d1b24*/  jmp short loc_1409D1B5E
/*1409d1b26*/ loc_1409D1B26: add rax, 8; jumptable 00000001409D090C case 3  // jumptable 00000001409D090C case 3
/*1409d1b2a*/  lea rcx, [rbp+2A0h+var_60+8]
/*1409d1b31*/  mov rdx, rax
/*1409d1b34*/  call sub_14149C500
/*1409d1b39*/  nop
/*1409d1b3a*/  mov byte ptr [rbp+2A0h+var_60], 3
/*1409d1b41*/  jmp short loc_1409D1B5E
/*1409d1b43*/ loc_1409D1B43: add rax, 8; jumptable 00000001409D090C case 5  // jumptable 00000001409D090C case 5
/*1409d1b47*/  lea rcx, [rbp+2A0h+var_60+8]
/*1409d1b4e*/  mov rdx, rax
/*1409d1b51*/  call sub_140323EA0
/*1409d1b56*/  nop
/*1409d1b57*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d1b5e*/ loc_1409D1B5E: movzx eax, byte ptr [rbp+2A0h+var_60]
/*1409d1b65*/  mov rcx, qword ptr [rbp+2A0h+var_60+1]
/*1409d1b6c*/  mov edx, dword ptr [rbp+2A0h+var_60+9]
/*1409d1b72*/  movzx r8d, word ptr [rbp+2A0h+var_60+0Dh]
/*1409d1b7a*/  movzx r9d, byte ptr [rbp+2A0h+var_60+0Fh]
/*1409d1b82*/  movdqa xmm0, [rbp+2A0h+var_50]
/*1409d1b8a*/  movdqa [rbp+2A0h+var_100], xmm0
/*1409d1b92*/  mov [rbp+2A0h+var_110], al
/*1409d1b98*/  mov [rbp+2A0h+var_10F], rcx
/*1409d1b9f*/  mov [rbp+2A0h+var_107], edx
/*1409d1ba5*/  mov [rbp+2A0h+var_103], r8w
/*1409d1bad*/  mov [rbp+2A0h+var_101], r9b
/*1409d1bb4*/  mov byte ptr [rbp+2A0h+var_60], 0
/*1409d1bbb*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1bc2*/  call sub_1400104F0
/*1409d1bc7*/  nop
/*1409d1bc8*/ loc_1409D1BC8: lea rcx, aType_8; "type"
/*1409d1bcf*/  lea r8, [rbp+2A0h+var_110]
/*1409d1bd6*/  mov edx, 4
/*1409d1bdb*/  call sub_141433D50
/*1409d1be0*/  nop
/*1409d1be1*/  mov r14d, 1
/*1409d1be7*/  test rax, rax
/*1409d1bea*/  jz short loc_1409D1BFB
/*1409d1bec*/  cmp byte ptr [rax], 3
/*1409d1bef*/  jnz short loc_1409D1BFB
/*1409d1bf1*/  mov r14, [rax+10h]
/*1409d1bf5*/  mov r12, [rax+18h]
/*1409d1bf9*/  jmp short loc_1409D1BFE
/*1409d1bfb*/ loc_1409D1BFB: xor r12d, r12d
/*1409d1bfe*/ loc_1409D1BFE: lea rdx, [rbp+2A0h+var_E8]
/*1409d1c05*/  mov rcx, rdi
/*1409d1c08*/  call sub_1409CFBB0
/*1409d1c0d*/  nop
/*1409d1c0e*/  cmp qword ptr [rdi+48h], 0
/*1409d1c13*/  jz loc_1409D2E74
/*1409d1c19*/  lea rcx, [rdi+50h]
/*1409d1c1d*/  lea rdx, [rbp+2A0h+var_240]
/*1409d1c21*/  call sub_140378FA0
/*1409d1c26*/  mov r8, rax
/*1409d1c29*/  shr r8, 39h
/*1409d1c2d*/  mov rcx, [rdi+30h]
/*1409d1c31*/  mov rdx, [rdi+38h]
/*1409d1c35*/  movd xmm0, r8d
/*1409d1c3a*/  punpcklbw xmm0, xmm0
/*1409d1c3e*/  pshuflw xmm0, xmm0, 0
/*1409d1c43*/  pshufd xmm0, xmm0, 44h ; 'D'
/*1409d1c48*/  xor r8d, r8d
/*1409d1c4b*/  pcmpeqd xmm1, xmm1
/*1409d1c4f*/ loc_1409D1C4F: and rax, rdx
/*1409d1c52*/  movdqu xmm2, xmmword ptr [rcx+rax]
/*1409d1c57*/  movdqa xmm3, xmm2
/*1409d1c5b*/  pcmpeqb xmm3, xmm0
/*1409d1c5f*/  pmovmskb r9d, xmm3
/*1409d1c64*/  test r9d, r9d
/*1409d1c67*/  jz short loc_1409D1C91
/*1409d1c69*/ loc_1409D1C69: tzcnt r10d, r9d
/*1409d1c6e*/  add r10, rax
/*1409d1c71*/  and r10, rdx
/*1409d1c74*/  shl r10, 4
/*1409d1c78*/  mov rbx, rcx
/*1409d1c7b*/  sub rbx, r10
/*1409d1c7e*/  cmp r15, [rbx-10h]
/*1409d1c82*/  jz short loc_1409D1CB0
/*1409d1c84*/  lea r10d, [r9-1]
/*1409d1c88*/  and r10w, r9w
/*1409d1c8c*/  mov r9d, r10d
/*1409d1c8f*/  jnz short loc_1409D1C69
/*1409d1c91*/ loc_1409D1C91: pcmpeqb xmm2, xmm1
/*1409d1c95*/  pmovmskb r9d, xmm2
/*1409d1c9a*/  test r9d, r9d
/*1409d1c9d*/  jnz loc_1409D2E74
/*1409d1ca3*/  add rax, r8
/*1409d1ca6*/  add rax, 10h
/*1409d1caa*/  add r8, 10h
/*1409d1cae*/  jmp short loc_1409D1C4F
/*1409d1cb0*/ loc_1409D1CB0: cmp r12, 0Ah
/*1409d1cb4*/  jz loc_1409D26D8
/*1409d1cba*/  cmp r12, 10h
/*1409d1cbe*/  jnz loc_1409D2E74
/*1409d1cc4*/  movdqu xmm0, xmmword ptr [r14]
/*1409d1cc9*/  pcmpeqb xmm0, cs:xmmword_1417A2D00
/*1409d1cd1*/  pmovmskb eax, xmm0
/*1409d1cd5*/  cmp eax, 0FFFFh
/*1409d1cda*/  jnz loc_1409D2E74
/*1409d1ce0*/  cmp dword ptr [rbx-8], 1
/*1409d1ce4*/  jnz loc_1409D2E74
/*1409d1cea*/  lea rcx, aPartialJson; "partial_json"
/*1409d1cf1*/  lea r8, [rbp+2A0h+var_110]
/*1409d1cf8*/  mov edx, 0Ch
/*1409d1cfd*/  call sub_141433D50
/*1409d1d02*/  nop
/*1409d1d03*/  test rax, rax
/*1409d1d06*/  jz loc_1409D2E74
/*1409d1d0c*/  cmp byte ptr [rax], 3
/*1409d1d0f*/  jnz loc_1409D2E74
/*1409d1d15*/  mov rcx, [rax+10h]
/*1409d1d19*/  mov rax, [rax+18h]
/*1409d1d1d*/  mov [rbp+2A0h+var_228], rcx
/*1409d1d21*/  mov [rbp+2A0h+var_220], rax
/*1409d1d28*/  test rax, rax
/*1409d1d2b*/  jz loc_1409D2E74
/*1409d1d31*/  mov qword ptr [rbp+2A0h+var_180], 0
/*1409d1d3c*/  mov [rbp+2A0h+var_170], 0
/*1409d1d47*/  call nullsub_1
/*1409d1d4c*/  mov ecx, 2
/*1409d1d51*/  mov edx, 1
/*1409d1d56*/  call sub_140001650
/*1409d1d5b*/  test rax, rax
/*1409d1d5e*/  jz loc_1409D34F1
/*1409d1d64*/  mov word ptr [rax], 6469h
/*1409d1d69*/  mov [rbp+2A0h+var_78], 2
/*1409d1d74*/  mov [rbp+2A0h+var_70], rax
/*1409d1d7b*/  mov [rbp+2A0h+var_68], 2
/*1409d1d86*/  lea rdx, [rdi+18h]
/*1409d1d8a*/  mov [rbp+2A0h+var_A1], 1
/*1409d1d91*/ loc_1409D1D91: lea rcx, [rbp+2A0h+var_60]
/*1409d1d98*/  call sub_140B56520
/*1409d1d9d*/  nop
/*1409d1d9e*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1da5*/  jz loc_1409D3177
/*1409d1dab*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d1db3*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d1dbb*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d1dc3*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d1dcb*/  mov [rbp+2A0h+var_A1], 0
/*1409d1dd2*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1dd9*/  lea rdx, [rbp+2A0h+var_180]
/*1409d1de0*/  lea r8, [rbp+2A0h+var_78]
/*1409d1de7*/  lea r9, [rbp+2A0h+var_A0]
/*1409d1dee*/  call sub_140307860
/*1409d1df3*/  nop
/*1409d1df4*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1dfb*/  jz short loc_1409D1E0A
/*1409d1dfd*/ loc_1409D1DFD: lea rcx, [rbp+2A0h+var_60]
/*1409d1e04*/  call sub_1400104F0
/*1409d1e09*/  nop
/*1409d1e0a*/ loc_1409D1E0A: call nullsub_1
/*1409d1e0f*/  mov ecx, 6
/*1409d1e14*/  mov edx, 1
/*1409d1e19*/  call sub_140001650
/*1409d1e1e*/  test rax, rax
/*1409d1e21*/  jz loc_1409D351B
/*1409d1e27*/  mov word ptr [rax+4], 7463h
/*1409d1e2d*/  mov dword ptr [rax], 656A626Fh
/*1409d1e33*/  mov [rbp+2A0h+var_78], 6
/*1409d1e3e*/  mov [rbp+2A0h+var_70], rax
/*1409d1e45*/  mov [rbp+2A0h+var_68], 6
/*1409d1e50*/  mov [rbp+2A0h+var_A2], 1
/*1409d1e57*/ loc_1409D1E57: lea rdx, off_1417A6598; "chat.completion.chunk"
/*1409d1e5e*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1e65*/  call sub_140B56640
/*1409d1e6a*/  nop
/*1409d1e6b*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1e72*/  jz loc_1409D31F5
/*1409d1e78*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d1e80*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d1e88*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d1e90*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d1e98*/  mov [rbp+2A0h+var_A2], 0
/*1409d1e9f*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1ea6*/  lea rdx, [rbp+2A0h+var_180]
/*1409d1ead*/  lea r8, [rbp+2A0h+var_78]
/*1409d1eb4*/  lea r9, [rbp+2A0h+var_A0]
/*1409d1ebb*/  call sub_140307860
/*1409d1ec0*/  nop
/*1409d1ec1*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1ec8*/  jz short loc_1409D1ED7
/*1409d1eca*/ loc_1409D1ECA: lea rcx, [rbp+2A0h+var_60]
/*1409d1ed1*/  call sub_1400104F0
/*1409d1ed6*/  nop
/*1409d1ed7*/ loc_1409D1ED7: call nullsub_1
/*1409d1edc*/  mov ecx, 5
/*1409d1ee1*/  mov edx, 1
/*1409d1ee6*/  call sub_140001650
/*1409d1eeb*/  test rax, rax
/*1409d1eee*/  jz loc_1409D3545
/*1409d1ef4*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*1409d1ef8*/  mov dword ptr [rax], 65646F6Dh
/*1409d1efe*/  mov [rbp+2A0h+var_78], 5
/*1409d1f09*/  mov [rbp+2A0h+var_70], rax
/*1409d1f10*/  mov [rbp+2A0h+var_68], 5
/*1409d1f1b*/  mov [rbp+2A0h+var_A3], 1
/*1409d1f22*/ loc_1409D1F22: lea rcx, [rbp+2A0h+var_60]
/*1409d1f29*/  mov rdx, rdi
/*1409d1f2c*/  call sub_140B56520
/*1409d1f31*/  nop
/*1409d1f32*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1f39*/  jz loc_1409D3273
/*1409d1f3f*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d1f47*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d1f4f*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d1f57*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d1f5f*/  mov [rbp+2A0h+var_A3], 0
/*1409d1f66*/  lea rcx, [rbp+2A0h+var_60]
/*1409d1f6d*/  lea rdx, [rbp+2A0h+var_180]
/*1409d1f74*/  lea r8, [rbp+2A0h+var_78]
/*1409d1f7b*/  lea r9, [rbp+2A0h+var_A0]
/*1409d1f82*/  call sub_140307860
/*1409d1f87*/  nop
/*1409d1f88*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d1f8f*/  jz short loc_1409D1F9E
/*1409d1f91*/ loc_1409D1F91: lea rcx, [rbp+2A0h+var_60]
/*1409d1f98*/  call sub_1400104F0
/*1409d1f9d*/  nop
/*1409d1f9e*/ loc_1409D1F9E: call nullsub_1
/*1409d1fa3*/  mov ecx, 7
/*1409d1fa8*/  mov edx, 1
/*1409d1fad*/  call sub_140001650
/*1409d1fb2*/  test rax, rax
/*1409d1fb5*/  jz loc_1409D356F
/*1409d1fbb*/  mov dword ptr [rax+3], 73656369h
/*1409d1fc2*/  mov dword ptr [rax], 696F6863h
/*1409d1fc8*/  mov [rbp+2A0h+var_200], 7
/*1409d1fd3*/  mov [rbp+2A0h+var_1F8], rax
/*1409d1fda*/  mov [rbp+2A0h+var_1F0], 7
/*1409d1fe5*/  mov [rbp+2A0h+var_B0], 1
/*1409d1fec*/ loc_1409D1FEC: call sub_14030B9B0
/*1409d1ff1*/  mov [rbp+2A0h+var_C8], rax
/*1409d1ff8*/  mov qword ptr [rbp+2A0h+var_1C8], 0
/*1409d2003*/  mov [rbp+2A0h+var_1B8], 0
/*1409d200e*/  call nullsub_1
/*1409d2013*/  mov ecx, 5
/*1409d2018*/  mov edx, 1
/*1409d201d*/  call sub_140001650
/*1409d2022*/  test rax, rax
/*1409d2025*/  jz loc_1409D3599
/*1409d202b*/  mov byte ptr [rax+4], 78h ; 'x'
/*1409d202f*/  mov dword ptr [rax], 65646E69h
/*1409d2035*/  mov [rbp+2A0h+var_78], 5
/*1409d2040*/  mov [rbp+2A0h+var_70], rax
/*1409d2047*/  mov [rbp+2A0h+var_68], 5
/*1409d2052*/  mov byte ptr [rbp+2A0h+var_60], 2
/*1409d2059*/  pxor xmm0, xmm0
/*1409d205d*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2065*/ loc_1409D2065: lea rcx, [rbp+2A0h+var_A0]
/*1409d206c*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d2073*/  lea r8, [rbp+2A0h+var_78]
/*1409d207a*/  lea r9, [rbp+2A0h+var_60]
/*1409d2081*/  call sub_140307860
/*1409d2086*/  nop
/*1409d2087*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d208e*/  jz short loc_1409D209D
/*1409d2090*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2097*/  call sub_1400104F0
/*1409d209c*/  nop
/*1409d209d*/ loc_1409D209D: call nullsub_1
/*1409d20a2*/  mov ecx, 5
/*1409d20a7*/  mov edx, 1
/*1409d20ac*/  call sub_140001650
/*1409d20b1*/  test rax, rax
/*1409d20b4*/  jz loc_1409D35C3
/*1409d20ba*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409d20be*/  mov dword ptr [rax], 746C6564h
/*1409d20c4*/  mov [rbp+2A0h+var_1E0], 5
/*1409d20cf*/  mov [rbp+2A0h+var_1D8], rax
/*1409d20d6*/  mov [rbp+2A0h+var_1D0], 5
/*1409d20e1*/  mov qword ptr [rbp+2A0h+var_148], 0
/*1409d20ec*/  mov [rbp+2A0h+var_138], 0
/*1409d20f7*/  call nullsub_1
/*1409d20fc*/  mov ecx, 0Ah
/*1409d2101*/  mov edx, 1
/*1409d2106*/  call sub_140001650
/*1409d210b*/  test rax, rax
/*1409d210e*/  jz loc_1409D35EA
/*1409d2114*/  mov rcx, 6C61635F6C6F6F74h
/*1409d211e*/  mov [rax], rcx
/*1409d2121*/  mov word ptr [rax+8], 736Ch
/*1409d2127*/  mov [rbp+2A0h+var_198], 0Ah
/*1409d2132*/  mov [rbp+2A0h+var_190], rax
/*1409d2139*/  mov [rbp+2A0h+var_188], 0Ah
/*1409d2144*/  mov [rbp+2A0h+var_B1], 1
/*1409d214b*/ loc_1409D214B: call sub_14030B9B0
/*1409d2150*/  mov [rbp+2A0h+var_D0], rax
/*1409d2157*/  mov qword ptr [rbp+2A0h+var_128], 0
/*1409d2162*/  mov [rbp+2A0h+var_118], 0
/*1409d216d*/  call nullsub_1
/*1409d2172*/  mov ecx, 5
/*1409d2177*/  mov edx, 1
/*1409d217c*/  call sub_140001650
/*1409d2181*/  test rax, rax
/*1409d2184*/  jz loc_1409D360E
/*1409d218a*/  mov byte ptr [rax+4], 78h ; 'x'
/*1409d218e*/  mov dword ptr [rax], 65646E69h
/*1409d2194*/  mov [rbp+2A0h+var_78], 5
/*1409d219f*/  mov [rbp+2A0h+var_70], rax
/*1409d21a6*/  mov [rbp+2A0h+var_68], 5
/*1409d21b1*/  mov eax, [rbx-4]
/*1409d21b4*/  mov byte ptr [rbp+2A0h+var_60], 2
/*1409d21bb*/  mov qword ptr [rbp+2A0h+var_60+8], 0
/*1409d21c6*/  mov qword ptr [rbp+2A0h+var_50], rax
/*1409d21cd*/ loc_1409D21CD: lea rcx, [rbp+2A0h+var_A0]
/*1409d21d4*/  lea rdx, [rbp+2A0h+var_128]
/*1409d21db*/  lea r8, [rbp+2A0h+var_78]
/*1409d21e2*/  lea r9, [rbp+2A0h+var_60]
/*1409d21e9*/  call sub_140307860
/*1409d21ee*/  nop
/*1409d21ef*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d21f6*/  jz short loc_1409D2205
/*1409d21f8*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d21ff*/  call sub_1400104F0
/*1409d2204*/  nop
/*1409d2205*/ loc_1409D2205: call nullsub_1
/*1409d220a*/  mov ecx, 8
/*1409d220f*/  mov edx, 1
/*1409d2214*/  call sub_140001650
/*1409d2219*/  test rax, rax
/*1409d221c*/  jz loc_1409D3620
/*1409d2222*/  mov rcx, 6E6F6974636E7566h
/*1409d222c*/  mov [rax], rcx
/*1409d222f*/  mov [rbp+2A0h+var_1B0], 8
/*1409d223a*/  mov [rbp+2A0h+var_1A8], rax
/*1409d2241*/  mov [rbp+2A0h+var_1A0], 8
/*1409d224c*/  mov qword ptr [rbp+2A0h+var_160], 0
/*1409d2257*/  mov [rbp+2A0h+var_150], 0
/*1409d2262*/  call nullsub_1
/*1409d2267*/  mov ecx, 9
/*1409d226c*/  mov edx, 1
/*1409d2271*/  call sub_140001650
/*1409d2276*/  test rax, rax
/*1409d2279*/  jz loc_1409D3632
/*1409d227f*/  mov rcx, 746E656D75677261h
/*1409d2289*/  mov [rax], rcx
/*1409d228c*/  mov byte ptr [rax+8], 73h ; 's'
/*1409d2290*/  mov [rbp+2A0h+var_78], 9
/*1409d229b*/  mov [rbp+2A0h+var_70], rax
/*1409d22a2*/  mov [rbp+2A0h+var_68], 9
/*1409d22ad*/  mov [rbp+2A0h+var_A4], 1
/*1409d22b4*/ loc_1409D22B4: lea rcx, [rbp+2A0h+var_60]
/*1409d22bb*/  lea rdx, [rbp+2A0h+var_228]
/*1409d22bf*/  call sub_140B56640
/*1409d22c4*/  nop
/*1409d22c5*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d22cc*/  jz loc_1409D3330
/*1409d22d2*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d22da*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d22e2*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d22ea*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d22f2*/  mov [rbp+2A0h+var_A4], 0
/*1409d22f9*/  lea rcx, [rbp+2A0h+var_60]
/*1409d2300*/  lea rdx, [rbp+2A0h+var_160]
/*1409d2307*/  lea r8, [rbp+2A0h+var_78]
/*1409d230e*/  lea r9, [rbp+2A0h+var_A0]
/*1409d2315*/  call sub_140307860
/*1409d231a*/  nop
/*1409d231b*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d2322*/  jz short loc_1409D2331
/*1409d2324*/ loc_1409D2324: lea rcx, [rbp+2A0h+var_60]
/*1409d232b*/  call sub_1400104F0
/*1409d2330*/  nop
/*1409d2331*/ loc_1409D2331: movdqu xmm0, [rbp+2A0h+var_160]
/*1409d2339*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2341*/  mov rax, [rbp+2A0h+var_150]
/*1409d2348*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d234f*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d2356*/  mov [rbp+2A0h+var_B5], 0
/*1409d235d*/ loc_1409D235D: lea rcx, [rbp+2A0h+var_A0]
/*1409d2364*/  lea rdx, [rbp+2A0h+var_128]
/*1409d236b*/  lea r8, [rbp+2A0h+var_1B0]
/*1409d2372*/  lea r9, [rbp+2A0h+var_60]
/*1409d2379*/  call sub_140307860
/*1409d237e*/  nop
/*1409d237f*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2386*/  jz short loc_1409D2395
/*1409d2388*/ loc_1409D2388: lea rcx, [rbp+2A0h+var_A0]
/*1409d238f*/  call sub_1400104F0
/*1409d2394*/  nop
/*1409d2395*/ loc_1409D2395: mov rax, [rbp+2A0h+var_118]
/*1409d239c*/  movups xmm0, [rbp+2A0h+var_128]
/*1409d23a3*/  movups [rbp+2A0h+var_60+7], xmm0
/*1409d23aa*/  mov qword ptr [rbp+2A0h+var_50+7], rax
/*1409d23b1*/  mov rcx, [rbp+2A0h+var_D0]
/*1409d23b8*/  mov byte ptr [rcx], 5
/*1409d23bb*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d23c3*/  mov rax, qword ptr [rbp+2A0h+var_60+0Fh]
/*1409d23ca*/  mov [rcx+10h], rax
/*1409d23ce*/  mov rax, qword ptr [rbp+2A0h+var_50+7]
/*1409d23d5*/  mov [rcx+18h], rax
/*1409d23d9*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409d23de*/  mov qword ptr [rbp+2A0h+var_60+8], 1
/*1409d23e9*/  mov qword ptr [rbp+2A0h+var_50], rcx
/*1409d23f0*/  mov qword ptr [rbp+2A0h+var_50+8], 1
/*1409d23fb*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d2402*/  mov [rbp+2A0h+var_B1], 0
/*1409d2409*/ loc_1409D2409: lea rcx, [rbp+2A0h+var_A0]
/*1409d2410*/  lea rdx, [rbp+2A0h+var_148]
/*1409d2417*/  lea r8, [rbp+2A0h+var_198]
/*1409d241e*/  lea r9, [rbp+2A0h+var_60]
/*1409d2425*/  call sub_140307860
/*1409d242a*/  nop
/*1409d242b*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2432*/  jz short loc_1409D2441
/*1409d2434*/ loc_1409D2434: lea rcx, [rbp+2A0h+var_A0]
/*1409d243b*/  call sub_1400104F0
/*1409d2440*/  nop
/*1409d2441*/ loc_1409D2441: movdqu xmm0, [rbp+2A0h+var_148]
/*1409d2449*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2451*/  mov rax, [rbp+2A0h+var_138]
/*1409d2458*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d245f*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d2466*/  mov [rbp+2A0h+var_B6], 0
/*1409d246d*/ loc_1409D246D: lea rcx, [rbp+2A0h+var_A0]
/*1409d2474*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d247b*/  lea r8, [rbp+2A0h+var_1E0]
/*1409d2482*/  lea r9, [rbp+2A0h+var_60]
/*1409d2489*/  call sub_140307860
/*1409d248e*/  nop
/*1409d248f*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2496*/  jz short loc_1409D24A5
/*1409d2498*/ loc_1409D2498: lea rcx, [rbp+2A0h+var_A0]
/*1409d249f*/  call sub_1400104F0
/*1409d24a4*/  nop
/*1409d24a5*/ loc_1409D24A5: call nullsub_1
/*1409d24aa*/  mov ecx, 0Dh
/*1409d24af*/  mov edx, 1
/*1409d24b4*/  call sub_140001650
/*1409d24b9*/  test rax, rax
/*1409d24bc*/  jz loc_1409D3656
/*1409d24c2*/  mov rcx, 6E6F736165725F68h
/*1409d24cc*/  mov [rax+5], rcx
/*1409d24d0*/  mov rcx, 725F6873696E6966h
/*1409d24da*/  mov [rax], rcx
/*1409d24dd*/  mov [rbp+2A0h+var_78], 0Dh
/*1409d24e8*/  mov [rbp+2A0h+var_70], rax
/*1409d24ef*/  mov [rbp+2A0h+var_68], 0Dh
/*1409d24fa*/  mov byte ptr [rbp+2A0h+var_60], 0
/*1409d2501*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2508*/  lea rdx, [rbp+2A0h+var_1C8]
/*1409d250f*/  lea r8, [rbp+2A0h+var_78]
/*1409d2516*/  lea r9, [rbp+2A0h+var_60]
/*1409d251d*/  call sub_140307860
/*1409d2522*/  nop
/*1409d2523*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d252a*/  jz short loc_1409D2539
/*1409d252c*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2533*/  call sub_1400104F0
/*1409d2538*/  nop
/*1409d2539*/ loc_1409D2539: mov rax, [rbp+2A0h+var_1B8]
/*1409d2540*/  movups xmm0, [rbp+2A0h+var_1C8]
/*1409d2547*/  movups [rbp+2A0h+var_60+7], xmm0
/*1409d254e*/  mov qword ptr [rbp+2A0h+var_50+7], rax
/*1409d2555*/  mov rcx, [rbp+2A0h+var_C8]
/*1409d255c*/  mov byte ptr [rcx], 5
/*1409d255f*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d2567*/  mov rax, qword ptr [rbp+2A0h+var_60+0Fh]
/*1409d256e*/  mov [rcx+10h], rax
/*1409d2572*/  mov rax, qword ptr [rbp+2A0h+var_50+7]
/*1409d2579*/  mov [rcx+18h], rax
/*1409d257d*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409d2582*/  mov qword ptr [rbp+2A0h+var_60+8], 1
/*1409d258d*/  mov qword ptr [rbp+2A0h+var_50], rcx
/*1409d2594*/  mov qword ptr [rbp+2A0h+var_50+8], 1
/*1409d259f*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d25a6*/  mov [rbp+2A0h+var_B0], 0
/*1409d25ad*/ loc_1409D25AD: lea rcx, [rbp+2A0h+var_A0]
/*1409d25b4*/  lea rdx, [rbp+2A0h+var_180]
/*1409d25bb*/  lea r8, [rbp+2A0h+var_200]
/*1409d25c2*/  lea rdi, [rbp+2A0h+var_60]
/*1409d25c9*/  mov r9, rdi
/*1409d25cc*/  call sub_140307860
/*1409d25d1*/  nop
/*1409d25d2*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d25d9*/  jz short loc_1409D25E8
/*1409d25db*/ loc_1409D25DB: lea rcx, [rbp+2A0h+var_A0]
/*1409d25e2*/  call sub_1400104F0
/*1409d25e7*/  nop
/*1409d25e8*/ loc_1409D25E8: movdqu xmm0, [rbp+2A0h+var_180]
/*1409d25f0*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d25f8*/  mov rax, [rbp+2A0h+var_170]
/*1409d25ff*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d2606*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d260d*/  mov [rbp+2A0h+var_78], rdi
/*1409d2614*/  lea rax, sub_14142EA10
/*1409d261b*/  mov [rbp+2A0h+var_70], rax
/*1409d2622*/ loc_1409D2622: lea rdx, unk_1417A65A8
/*1409d2629*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2630*/  lea r8, [rbp+2A0h+var_78]
/*1409d2637*/  call sub_14149C0F0
/*1409d263c*/  nop
/*1409d263d*/ loc_1409D263D: mov rax, qword ptr [rbp+2A0h+var_A0]
/*1409d2644*/  mov [rbp+2A0h+var_C8], rax
/*1409d264b*/  mov rax, qword ptr [rbp+2A0h+var_A0+8]
/*1409d2652*/  mov [rbp+2A0h+var_D0], rax
/*1409d2659*/  mov rdi, qword ptr [rbp+2A0h+var_90]
/*1409d2660*/  mov rax, qword ptr [rbp+2A0h+var_E8]
/*1409d2667*/  mov rbx, [rbp+2A0h+var_D8]
/*1409d266e*/  sub rax, rbx
/*1409d2671*/  cmp rdi, rax
/*1409d2674*/  ja loc_1409D339D
/*1409d267a*/  test rdi, rdi
/*1409d267d*/  jz short loc_1409D2698
/*1409d267f*/ loc_1409D267F: mov rcx, qword ptr [rbp+2A0h+var_E8+8]
/*1409d2686*/  add rcx, rbx
/*1409d2689*/  mov rdx, [rbp+2A0h+var_D0]
/*1409d2690*/  mov r8, rdi
/*1409d2693*/  call sub_141684120
/*1409d2698*/ loc_1409D2698: add rbx, rdi
/*1409d269b*/  mov [rbp+2A0h+var_D8], rbx
/*1409d26a2*/  cmp [rbp+2A0h+var_C8], 0
/*1409d26aa*/  jz short loc_1409D26C6
/*1409d26ac*/  mov r8d, 1
/*1409d26b2*/  mov rcx, [rbp+2A0h+var_D0]
/*1409d26b9*/  mov rdx, [rbp+2A0h+var_C8]
/*1409d26c0*/  call sub_140001660
/*1409d26c5*/  nop
/*1409d26c6*/ loc_1409D26C6: lea rcx, [rbp+2A0h+var_60]
/*1409d26cd*/  call sub_1400104F0
/*1409d26d2*/  nop
/*1409d26d3*/  jmp loc_1409D2E74
/*1409d26d8*/ loc_1409D26D8: mov rax, 6C65645F74786574h
/*1409d26e2*/  xor rax, [r14]
/*1409d26e5*/  movzx ecx, word ptr [r14+8]
/*1409d26ea*/  xor rcx, 6174h
/*1409d26f1*/  or rcx, rax
/*1409d26f4*/  jnz loc_1409D2E74
/*1409d26fa*/  cmp byte ptr [rbx-8], 0
/*1409d26fe*/  jnz loc_1409D2E74
/*1409d2704*/  lea rcx, aText_10; "text"
/*1409d270b*/  lea r8, [rbp+2A0h+var_110]
/*1409d2712*/  mov edx, 4
/*1409d2717*/  call sub_141433D50
/*1409d271c*/  nop
/*1409d271d*/  test rax, rax
/*1409d2720*/  jz loc_1409D2E74
/*1409d2726*/  cmp byte ptr [rax], 3
/*1409d2729*/  jnz loc_1409D2E74
/*1409d272f*/  mov rcx, [rax+10h]
/*1409d2733*/  mov rax, [rax+18h]
/*1409d2737*/  mov [rbp+2A0h+var_1E0], rcx
/*1409d273e*/  mov [rbp+2A0h+var_1D8], rax
/*1409d2745*/  test rax, rax
/*1409d2748*/  jz loc_1409D2E74
/*1409d274e*/  mov qword ptr [rbp+2A0h+var_148], 0
/*1409d2759*/  mov [rbp+2A0h+var_138], 0
/*1409d2764*/  call nullsub_1
/*1409d2769*/  mov ecx, 2
/*1409d276e*/  mov edx, 1
/*1409d2773*/  call sub_140001650
/*1409d2778*/  test rax, rax
/*1409d277b*/  jz loc_1409D3506
/*1409d2781*/  mov word ptr [rax], 6469h
/*1409d2786*/  mov [rbp+2A0h+var_78], 2
/*1409d2791*/  mov [rbp+2A0h+var_70], rax
/*1409d2798*/  mov [rbp+2A0h+var_68], 2
/*1409d27a3*/  lea rdx, [rdi+18h]
/*1409d27a7*/  mov [rbp+2A0h+var_A5], 1
/*1409d27ae*/ loc_1409D27AE: lea rcx, [rbp+2A0h+var_60]
/*1409d27b5*/  call sub_140B56520
/*1409d27ba*/  nop
/*1409d27bb*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d27c2*/  jz loc_1409D31B6
/*1409d27c8*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d27d0*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d27d8*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d27e0*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d27e8*/  mov [rbp+2A0h+var_A5], 0
/*1409d27ef*/  lea rcx, [rbp+2A0h+var_60]
/*1409d27f6*/  lea rdx, [rbp+2A0h+var_148]
/*1409d27fd*/  lea r8, [rbp+2A0h+var_78]
/*1409d2804*/  lea r9, [rbp+2A0h+var_A0]
/*1409d280b*/  call sub_140307860
/*1409d2810*/  nop
/*1409d2811*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d2818*/  jz short loc_1409D2827
/*1409d281a*/ loc_1409D281A: lea rcx, [rbp+2A0h+var_60]
/*1409d2821*/  call sub_1400104F0
/*1409d2826*/  nop
/*1409d2827*/ loc_1409D2827: call nullsub_1
/*1409d282c*/  mov ecx, 6
/*1409d2831*/  mov edx, 1
/*1409d2836*/  call sub_140001650
/*1409d283b*/  test rax, rax
/*1409d283e*/  jz loc_1409D3530
/*1409d2844*/  mov word ptr [rax+4], 7463h
/*1409d284a*/  mov dword ptr [rax], 656A626Fh
/*1409d2850*/  mov [rbp+2A0h+var_78], 6
/*1409d285b*/  mov [rbp+2A0h+var_70], rax
/*1409d2862*/  mov [rbp+2A0h+var_68], 6
/*1409d286d*/  mov [rbp+2A0h+var_A6], 1
/*1409d2874*/ loc_1409D2874: lea rdx, off_1417A6598; "chat.completion.chunk"
/*1409d287b*/  lea rcx, [rbp+2A0h+var_60]
/*1409d2882*/  call sub_140B56640
/*1409d2887*/  nop
/*1409d2888*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d288f*/  jz loc_1409D3234
/*1409d2895*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d289d*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d28a5*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d28ad*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d28b5*/  mov [rbp+2A0h+var_A6], 0
/*1409d28bc*/  lea rcx, [rbp+2A0h+var_60]
/*1409d28c3*/  lea rdx, [rbp+2A0h+var_148]
/*1409d28ca*/  lea r8, [rbp+2A0h+var_78]
/*1409d28d1*/  lea r9, [rbp+2A0h+var_A0]
/*1409d28d8*/  call sub_140307860
/*1409d28dd*/  nop
/*1409d28de*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d28e5*/  jz short loc_1409D28F4
/*1409d28e7*/ loc_1409D28E7: lea rcx, [rbp+2A0h+var_60]
/*1409d28ee*/  call sub_1400104F0
/*1409d28f3*/  nop
/*1409d28f4*/ loc_1409D28F4: call nullsub_1
/*1409d28f9*/  mov ecx, 5
/*1409d28fe*/  mov edx, 1
/*1409d2903*/  call sub_140001650
/*1409d2908*/  test rax, rax
/*1409d290b*/  jz loc_1409D355A
/*1409d2911*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*1409d2915*/  mov dword ptr [rax], 65646F6Dh
/*1409d291b*/  mov [rbp+2A0h+var_78], 5
/*1409d2926*/  mov [rbp+2A0h+var_70], rax
/*1409d292d*/  mov [rbp+2A0h+var_68], 5
/*1409d2938*/  mov [rbp+2A0h+var_A7], 1
/*1409d293f*/ loc_1409D293F: lea rcx, [rbp+2A0h+var_60]
/*1409d2946*/  mov rdx, rdi
/*1409d2949*/  call sub_140B56520
/*1409d294e*/  nop
/*1409d294f*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d2956*/  jz loc_1409D32B2
/*1409d295c*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d2964*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d296c*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d2974*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d297c*/  mov [rbp+2A0h+var_A7], 0
/*1409d2983*/  lea rcx, [rbp+2A0h+var_60]
/*1409d298a*/  lea rdx, [rbp+2A0h+var_148]
/*1409d2991*/  lea r8, [rbp+2A0h+var_78]
/*1409d2998*/  lea r9, [rbp+2A0h+var_A0]
/*1409d299f*/  call sub_140307860
/*1409d29a4*/  nop
/*1409d29a5*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d29ac*/  jz short loc_1409D29BB
/*1409d29ae*/ loc_1409D29AE: lea rcx, [rbp+2A0h+var_60]
/*1409d29b5*/  call sub_1400104F0
/*1409d29ba*/  nop
/*1409d29bb*/ loc_1409D29BB: call nullsub_1
/*1409d29c0*/  mov ecx, 7
/*1409d29c5*/  mov edx, 1
/*1409d29ca*/  call sub_140001650
/*1409d29cf*/  test rax, rax
/*1409d29d2*/  jz loc_1409D3584
/*1409d29d8*/  mov dword ptr [rax+3], 73656369h
/*1409d29df*/  mov dword ptr [rax], 696F6863h
/*1409d29e5*/  mov [rbp+2A0h+var_198], 7
/*1409d29f0*/  mov [rbp+2A0h+var_190], rax
/*1409d29f7*/  mov [rbp+2A0h+var_188], 7
/*1409d2a02*/  mov [rbp+2A0h+var_B2], 1
/*1409d2a09*/ loc_1409D2A09: call sub_14030B9B0
/*1409d2a0e*/  mov [rbp+2A0h+var_C8], rax
/*1409d2a15*/  mov qword ptr [rbp+2A0h+var_128], 0
/*1409d2a20*/  mov [rbp+2A0h+var_118], 0
/*1409d2a2b*/  call nullsub_1
/*1409d2a30*/  mov ecx, 5
/*1409d2a35*/  mov edx, 1
/*1409d2a3a*/  call sub_140001650
/*1409d2a3f*/  test rax, rax
/*1409d2a42*/  jz loc_1409D35AE
/*1409d2a48*/  mov byte ptr [rax+4], 78h ; 'x'
/*1409d2a4c*/  mov dword ptr [rax], 65646E69h
/*1409d2a52*/  mov [rbp+2A0h+var_78], 5
/*1409d2a5d*/  mov [rbp+2A0h+var_70], rax
/*1409d2a64*/  mov [rbp+2A0h+var_68], 5
/*1409d2a6f*/  mov byte ptr [rbp+2A0h+var_60], 2
/*1409d2a76*/  pxor xmm0, xmm0
/*1409d2a7a*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2a82*/ loc_1409D2A82: lea rcx, [rbp+2A0h+var_A0]
/*1409d2a89*/  lea rdx, [rbp+2A0h+var_128]
/*1409d2a90*/  lea r8, [rbp+2A0h+var_78]
/*1409d2a97*/  lea r9, [rbp+2A0h+var_60]
/*1409d2a9e*/  call sub_140307860
/*1409d2aa3*/  nop
/*1409d2aa4*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2aab*/  jz short loc_1409D2ABA
/*1409d2aad*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2ab4*/  call sub_1400104F0
/*1409d2ab9*/  nop
/*1409d2aba*/ loc_1409D2ABA: call nullsub_1
/*1409d2abf*/  mov ecx, 5
/*1409d2ac4*/  mov edx, 1
/*1409d2ac9*/  call sub_140001650
/*1409d2ace*/  test rax, rax
/*1409d2ad1*/  jz loc_1409D35D8
/*1409d2ad7*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409d2adb*/  mov dword ptr [rax], 746C6564h
/*1409d2ae1*/  mov [rbp+2A0h+var_1B0], 5
/*1409d2aec*/  mov [rbp+2A0h+var_1A8], rax
/*1409d2af3*/  mov [rbp+2A0h+var_1A0], 5
/*1409d2afe*/  mov qword ptr [rbp+2A0h+var_160], 0
/*1409d2b09*/  mov [rbp+2A0h+var_150], 0
/*1409d2b14*/  call nullsub_1
/*1409d2b19*/  mov ecx, 7
/*1409d2b1e*/  mov edx, 1
/*1409d2b23*/  call sub_140001650
/*1409d2b28*/  test rax, rax
/*1409d2b2b*/  jz loc_1409D35FC
/*1409d2b31*/  mov dword ptr [rax+3], 746E6574h
/*1409d2b38*/  mov dword ptr [rax], 746E6F63h
/*1409d2b3e*/  mov [rbp+2A0h+var_78], 7
/*1409d2b49*/  mov [rbp+2A0h+var_70], rax
/*1409d2b50*/  mov [rbp+2A0h+var_68], 7
/*1409d2b5b*/  mov [rbp+2A0h+var_A8], 1
/*1409d2b62*/ loc_1409D2B62: lea rcx, [rbp+2A0h+var_60]
/*1409d2b69*/  lea rdx, [rbp+2A0h+var_1E0]
/*1409d2b70*/  call sub_140B56640
/*1409d2b75*/  nop
/*1409d2b76*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d2b7d*/  jz loc_1409D32F1
/*1409d2b83*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d2b8b*/  movdqu xmm1, [rbp+2A0h+var_50]
/*1409d2b93*/  movdqa [rbp+2A0h+var_90], xmm1
/*1409d2b9b*/  movdqa [rbp+2A0h+var_A0], xmm0
/*1409d2ba3*/  mov [rbp+2A0h+var_A8], 0
/*1409d2baa*/  lea rcx, [rbp+2A0h+var_60]
/*1409d2bb1*/  lea rdx, [rbp+2A0h+var_160]
/*1409d2bb8*/  lea r8, [rbp+2A0h+var_78]
/*1409d2bbf*/  lea r9, [rbp+2A0h+var_A0]
/*1409d2bc6*/  call sub_140307860
/*1409d2bcb*/  nop
/*1409d2bcc*/  cmp byte ptr [rbp+2A0h+var_60], 0FFh
/*1409d2bd3*/  jz short loc_1409D2BE2
/*1409d2bd5*/ loc_1409D2BD5: lea rcx, [rbp+2A0h+var_60]
/*1409d2bdc*/  call sub_1400104F0
/*1409d2be1*/  nop
/*1409d2be2*/ loc_1409D2BE2: movdqu xmm0, [rbp+2A0h+var_160]
/*1409d2bea*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2bf2*/  mov rax, [rbp+2A0h+var_150]
/*1409d2bf9*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d2c00*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d2c07*/  mov [rbp+2A0h+var_B7], 0
/*1409d2c0e*/ loc_1409D2C0E: lea rcx, [rbp+2A0h+var_A0]
/*1409d2c15*/  lea rdx, [rbp+2A0h+var_128]
/*1409d2c1c*/  lea r8, [rbp+2A0h+var_1B0]
/*1409d2c23*/  lea r9, [rbp+2A0h+var_60]
/*1409d2c2a*/  call sub_140307860
/*1409d2c2f*/  nop
/*1409d2c30*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2c37*/  jz short loc_1409D2C46
/*1409d2c39*/ loc_1409D2C39: lea rcx, [rbp+2A0h+var_A0]
/*1409d2c40*/  call sub_1400104F0
/*1409d2c45*/  nop
/*1409d2c46*/ loc_1409D2C46: call nullsub_1
/*1409d2c4b*/  mov ecx, 0Dh
/*1409d2c50*/  mov edx, 1
/*1409d2c55*/  call sub_140001650
/*1409d2c5a*/  test rax, rax
/*1409d2c5d*/  jz loc_1409D3644
/*1409d2c63*/  mov rcx, 6E6F736165725F68h
/*1409d2c6d*/  mov [rax+5], rcx
/*1409d2c71*/  mov rcx, 725F6873696E6966h
/*1409d2c7b*/  mov [rax], rcx
/*1409d2c7e*/  mov [rbp+2A0h+var_78], 0Dh
/*1409d2c89*/  mov [rbp+2A0h+var_70], rax
/*1409d2c90*/  mov [rbp+2A0h+var_68], 0Dh
/*1409d2c9b*/  mov byte ptr [rbp+2A0h+var_60], 0
/*1409d2ca2*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2ca9*/  lea rdx, [rbp+2A0h+var_128]
/*1409d2cb0*/  lea r8, [rbp+2A0h+var_78]
/*1409d2cb7*/  lea r9, [rbp+2A0h+var_60]
/*1409d2cbe*/  call sub_140307860
/*1409d2cc3*/  nop
/*1409d2cc4*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2ccb*/  jz short loc_1409D2CDA
/*1409d2ccd*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2cd4*/  call sub_1400104F0
/*1409d2cd9*/  nop
/*1409d2cda*/ loc_1409D2CDA: mov rax, [rbp+2A0h+var_118]
/*1409d2ce1*/  movups xmm0, [rbp+2A0h+var_128]
/*1409d2ce8*/  movups [rbp+2A0h+var_60+7], xmm0
/*1409d2cef*/  mov qword ptr [rbp+2A0h+var_50+7], rax
/*1409d2cf6*/  mov rcx, [rbp+2A0h+var_C8]
/*1409d2cfd*/  mov byte ptr [rcx], 5
/*1409d2d00*/  movdqu xmm0, [rbp+2A0h+var_60]
/*1409d2d08*/  mov rax, qword ptr [rbp+2A0h+var_60+0Fh]
/*1409d2d0f*/  mov [rcx+10h], rax
/*1409d2d13*/  mov rax, qword ptr [rbp+2A0h+var_50+7]
/*1409d2d1a*/  mov [rcx+18h], rax
/*1409d2d1e*/  movdqu xmmword ptr [rcx+1], xmm0
/*1409d2d23*/  mov qword ptr [rbp+2A0h+var_60+8], 1
/*1409d2d2e*/  mov qword ptr [rbp+2A0h+var_50], rcx
/*1409d2d35*/  mov qword ptr [rbp+2A0h+var_50+8], 1
/*1409d2d40*/  mov byte ptr [rbp+2A0h+var_60], 4
/*1409d2d47*/  mov [rbp+2A0h+var_B2], 0
/*1409d2d4e*/ loc_1409D2D4E: lea rcx, [rbp+2A0h+var_A0]
/*1409d2d55*/  lea rdx, [rbp+2A0h+var_148]
/*1409d2d5c*/  lea r8, [rbp+2A0h+var_198]
/*1409d2d63*/  lea rdi, [rbp+2A0h+var_60]
/*1409d2d6a*/  mov r9, rdi
/*1409d2d6d*/  call sub_140307860
/*1409d2d72*/  nop
/*1409d2d73*/  cmp byte ptr [rbp+2A0h+var_A0], 0FFh
/*1409d2d7a*/  jz short loc_1409D2D89
/*1409d2d7c*/ loc_1409D2D7C: lea rcx, [rbp+2A0h+var_A0]
/*1409d2d83*/  call sub_1400104F0
/*1409d2d88*/  nop
/*1409d2d89*/ loc_1409D2D89: movdqu xmm0, [rbp+2A0h+var_148]
/*1409d2d91*/  movdqu [rbp+2A0h+var_60+8], xmm0
/*1409d2d99*/  mov rax, [rbp+2A0h+var_138]
/*1409d2da0*/  mov qword ptr [rbp+2A0h+var_50+8], rax
/*1409d2da7*/  mov byte ptr [rbp+2A0h+var_60], 5
/*1409d2dae*/  mov [rbp+2A0h+var_78], rdi
/*1409d2db5*/  lea rax, sub_14142EA10
/*1409d2dbc*/  mov [rbp+2A0h+var_70], rax
/*1409d2dc3*/ loc_1409D2DC3: lea rdx, unk_1417A65A8
/*1409d2dca*/  lea rcx, [rbp+2A0h+var_A0]
/*1409d2dd1*/  lea r8, [rbp+2A0h+var_78]
/*1409d2dd8*/  call sub_14149C0F0
/*1409d2ddd*/  nop
/*1409d2dde*/ loc_1409D2DDE: mov rax, qword ptr [rbp+2A0h+var_A0]
/*1409d2de5*/  mov [rbp+2A0h+var_C8], rax
/*1409d2dec*/  mov rax, qword ptr [rbp+2A0h+var_A0+8]
/*1409d2df3*/  mov [rbp+2A0h+var_D0], rax
/*1409d2dfa*/  mov rdi, qword ptr [rbp+2A0h+var_90]
/*1409d2e01*/  mov rax, qword ptr [rbp+2A0h+var_E8]
/*1409d2e08*/  mov rbx, [rbp+2A0h+var_D8]
/*1409d2e0f*/  sub rax, rbx
/*1409d2e12*/  cmp rdi, rax
/*1409d2e15*/  ja loc_1409D336F
/*1409d2e1b*/  test rdi, rdi
/*1409d2e1e*/  jz short loc_1409D2E39
/*1409d2e20*/ loc_1409D2E20: mov rcx, qword ptr [rbp+2A0h+var_E8+8]
/*1409d2e27*/  add rcx, rbx
/*1409d2e2a*/  mov rdx, [rbp+2A0h+var_D0]
/*1409d2e31*/  mov r8, rdi
/*1409d2e34*/  call sub_141684120
/*1409d2e39*/ loc_1409D2E39: add rbx, rdi
/*1409d2e3c*/  mov [rbp+2A0h+var_D8], rbx
/*1409d2e43*/  cmp [rbp+2A0h+var_C8], 0
/*1409d2e4b*/  jz short loc_1409D2E67
/*1409d2e4d*/  mov r8d, 1
/*1409d2e53*/  mov rcx, [rbp+2A0h+var_D0]
/*1409d2e5a*/  mov rdx, [rbp+2A0h+var_C8]
/*1409d2e61*/  call sub_140001660
/*1409d2e66*/  nop
/*1409d2e67*/ loc_1409D2E67: lea rcx, [rbp+2A0h+var_60]
/*1409d2e6e*/  call sub_1400104F0
/*1409d2e73*/  nop
/*1409d2e74*/ loc_1409D2E74: lea rcx, [rbp+2A0h+var_110]
/*1409d2e7b*/  call sub_1400104F0
/*1409d2e80*/  nop
/*1409d2e81*/ def_1409D0638: mov rax, [rbp+2A0h+var_D8]; jumptable 00000001409D0638 default case, cases 14-17  // jumptable 00000001409D0638 default case, cases 14-17
/*1409d2e88*/  mov [rsi+10h], rax
/*1409d2e8c*/  movups xmm0, [rbp+2A0h+var_E8]
/*1409d2e93*/  movups xmmword ptr [rsi], xmm0
/*1409d2e96*/  add rsp, 2E8h
/*1409d2e9d*/  pop rbx
/*1409d2e9e*/  pop rdi
/*1409d2e9f*/  pop rsi
/*1409d2ea0*/  pop r12
/*1409d2ea2*/  pop r13
/*1409d2ea4*/  pop r14
/*1409d2ea6*/  pop r15
/*1409d2ea8*/  pop rbp
/*1409d2ea9*/  retn
/*1409d2eaa*/ loc_1409D2EAA: mov [rbp+2A0h+var_B3], 1
/*1409d2eb1*/ loc_1409D2EB1: mov ecx, 8
/*1409d2eb6*/  mov edx, 20h ; ' '
/*1409d2ebb*/  call sub_1416C2D31
/*1409d2ec1*/  jmp loc_1409D3666
/*1409d2ec6*/ loc_1409D2EC6: mov [rbp+2A0h+var_B4], 1
/*1409d2ecd*/ loc_1409D2ECD: mov ecx, 8
/*1409d2ed2*/  mov edx, 20h ; ' '
/*1409d2ed7*/  call sub_1416C2D31
/*1409d2edd*/  jmp loc_1409D3666
/*1409d2ee2*/ loc_1409D2EE2: mov rdx, qword ptr [rbp+2A0h+var_50]
/*1409d2ee9*/ loc_1409D2EE9: mov rcx, r13
/*1409d2eec*/  call sub_1416C2D4B
/*1409d2ef2*/  jmp loc_1409D3666
/*1409d2ef7*/ loc_1409D2EF7: mov rdx, qword ptr [rbp+2A0h+var_50]
/*1409d2efe*/ loc_1409D2EFE: mov rcx, r14
/*1409d2f01*/  call sub_1416C2D4B
/*1409d2f07*/  jmp loc_1409D3666
/*1409d2f0c*/ loc_1409D2F0C: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d2f13*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d2f1a*/ loc_1409D2F1A: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d2f21*/  mov [rsp+320h+var_300], rax
/*1409d2f26*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d2f2d*/  lea r9, off_1417A5560
/*1409d2f34*/  lea r8, [rbp+2A0h+var_A0]
/*1409d2f3b*/  mov edx, 2Bh ; '+'
/*1409d2f40*/  call sub_1416C3060
/*1409d2f46*/  jmp loc_1409D3666
/*1409d2f4b*/ loc_1409D2F4B: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d2f52*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d2f59*/ loc_1409D2F59: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d2f60*/  mov [rsp+320h+var_300], rax
/*1409d2f65*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d2f6c*/  lea r9, off_1417A5560
/*1409d2f73*/  lea r8, [rbp+2A0h+var_A0]
/*1409d2f7a*/  mov edx, 2Bh ; '+'
/*1409d2f7f*/  call sub_1416C3060
/*1409d2f85*/  jmp loc_1409D3666
/*1409d2f8a*/ loc_1409D2F8A: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d2f91*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d2f98*/ loc_1409D2F98: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d2f9f*/  mov [rsp+320h+var_300], rax
/*1409d2fa4*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d2fab*/  lea r9, off_1417A5560
/*1409d2fb2*/  lea r8, [rbp+2A0h+var_A0]
/*1409d2fb9*/  mov edx, 2Bh ; '+'
/*1409d2fbe*/  call sub_1416C3060
/*1409d2fc4*/  jmp loc_1409D3666
/*1409d2fc9*/ loc_1409D2FC9: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d2fd0*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d2fd7*/ loc_1409D2FD7: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d2fde*/  mov [rsp+320h+var_300], rax
/*1409d2fe3*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d2fea*/  lea r9, off_1417A5560
/*1409d2ff1*/  lea r8, [rbp+2A0h+var_A0]
/*1409d2ff8*/  mov edx, 2Bh ; '+'
/*1409d2ffd*/  call sub_1416C3060
/*1409d3003*/  jmp loc_1409D3666
/*1409d3008*/ loc_1409D3008: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d300f*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3016*/ loc_1409D3016: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d301d*/  mov [rsp+320h+var_300], rax
/*1409d3022*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3029*/  lea r9, off_1417A5560
/*1409d3030*/  lea r8, [rbp+2A0h+var_A0]
/*1409d3037*/  mov edx, 2Bh ; '+'
/*1409d303c*/  call sub_1416C3060
/*1409d3042*/  jmp loc_1409D3666
/*1409d3047*/ loc_1409D3047: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d304e*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3055*/ loc_1409D3055: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d305c*/  mov [rsp+320h+var_300], rax
/*1409d3061*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3068*/  lea r9, off_1417A5560
/*1409d306f*/  lea r8, [rbp+2A0h+var_A0]
/*1409d3076*/  mov edx, 2Bh ; '+'
/*1409d307b*/  call sub_1416C3060
/*1409d3081*/  jmp loc_1409D3666
/*1409d3086*/ loc_1409D3086: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d308d*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3094*/ loc_1409D3094: lea rax, off_1417A65E8; "src\\core\\relay\\translator.rs"
/*1409d309b*/  mov [rsp+320h+var_300], rax
/*1409d30a0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d30a7*/  lea r9, off_1417A5560
/*1409d30ae*/  lea r8, [rbp+2A0h+var_A0]
/*1409d30b5*/  mov edx, 2Bh ; '+'
/*1409d30ba*/  call sub_1416C3060
/*1409d30c0*/  jmp loc_1409D3666
/*1409d30c5*/ loc_1409D30C5: mov [rbp+2A0h+var_168], r13
/*1409d30cc*/  mov [rbp+2A0h+var_130], r14
/*1409d30d3*/  mov [rsp+320h+var_300], 1
/*1409d30dc*/  lea rcx, [rbp+2A0h+var_E8]
/*1409d30e3*/  mov r9d, 1
/*1409d30e9*/  mov rdx, r12
/*1409d30ec*/  mov r8, r15
/*1409d30ef*/  call sub_141688D30
/*1409d30f4*/  nop
/*1409d30f5*/  mov r12, [rbp+2A0h+var_D8]
/*1409d30fc*/  mov r14, [rbp+2A0h+var_130]
/*1409d3103*/  mov r13, [rbp+2A0h+var_168]
/*1409d310a*/  jmp loc_1409D1A48
/*1409d310f*/ loc_1409D310F: mov rdx, qword ptr [rbp+2A0h+var_50]
/*1409d3116*/ loc_1409D3116: mov rcx, r15
/*1409d3119*/  call sub_1416C2D4B
/*1409d311f*/  jmp loc_1409D3666
/*1409d3124*/ loc_1409D3124: mov [rbp+2A0h+var_C8], rcx
/*1409d312b*/  mov [rsp+320h+var_300], 1
/*1409d3134*/  lea rcx, [rbp+2A0h+var_E8]
/*1409d313b*/  mov r9d, 1
/*1409d3141*/  xor edx, edx
/*1409d3143*/  mov r8, rdi
/*1409d3146*/  call sub_141688D30
/*1409d314b*/  nop
/*1409d314c*/ loc_1409D314C: mov rbx, [rbp+2A0h+var_D8]
/*1409d3153*/  mov rcx, qword ptr [rbp+2A0h+var_E8+8]
/*1409d315a*/  add rcx, rbx
/*1409d315d*/  mov r14, [rbp+2A0h+var_C8]
/*1409d3164*/  mov rdx, r14
/*1409d3167*/  mov r8, rdi
/*1409d316a*/  call sub_141684120
/*1409d316f*/  mov rcx, r14
/*1409d3172*/  jmp loc_1409D0829
/*1409d3177*/ loc_1409D3177: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d317e*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3185*/ loc_1409D3185: lea rax, off_1417A65B8; "src\\core\\relay\\translator.rs"
/*1409d318c*/  mov [rsp+320h+var_300], rax
/*1409d3191*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3198*/  lea r9, off_1417A5560
/*1409d319f*/  lea r8, [rbp+2A0h+var_A0]
/*1409d31a6*/  mov edx, 2Bh ; '+'
/*1409d31ab*/  call sub_1416C3060
/*1409d31b1*/  jmp loc_1409D3666
/*1409d31b6*/ loc_1409D31B6: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d31bd*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d31c4*/ loc_1409D31C4: lea rax, off_1417A65D0; "src\\core\\relay\\translator.rs"
/*1409d31cb*/  mov [rsp+320h+var_300], rax
/*1409d31d0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d31d7*/  lea r9, off_1417A5560
/*1409d31de*/  lea r8, [rbp+2A0h+var_A0]
/*1409d31e5*/  mov edx, 2Bh ; '+'
/*1409d31ea*/  call sub_1416C3060
/*1409d31f0*/  jmp loc_1409D3666
/*1409d31f5*/ loc_1409D31F5: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d31fc*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3203*/ loc_1409D3203: lea rax, off_1417A65B8; "src\\core\\relay\\translator.rs"
/*1409d320a*/  mov [rsp+320h+var_300], rax
/*1409d320f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3216*/  lea r9, off_1417A5560
/*1409d321d*/  lea r8, [rbp+2A0h+var_A0]
/*1409d3224*/  mov edx, 2Bh ; '+'
/*1409d3229*/  call sub_1416C3060
/*1409d322f*/  jmp loc_1409D3666
/*1409d3234*/ loc_1409D3234: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d323b*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3242*/ loc_1409D3242: lea rax, off_1417A65D0; "src\\core\\relay\\translator.rs"
/*1409d3249*/  mov [rsp+320h+var_300], rax
/*1409d324e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3255*/  lea r9, off_1417A5560
/*1409d325c*/  lea r8, [rbp+2A0h+var_A0]
/*1409d3263*/  mov edx, 2Bh ; '+'
/*1409d3268*/  call sub_1416C3060
/*1409d326e*/  jmp loc_1409D3666
/*1409d3273*/ loc_1409D3273: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d327a*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d3281*/ loc_1409D3281: lea rax, off_1417A65B8; "src\\core\\relay\\translator.rs"
/*1409d3288*/  mov [rsp+320h+var_300], rax
/*1409d328d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3294*/  lea r9, off_1417A5560
/*1409d329b*/  lea r8, [rbp+2A0h+var_A0]
/*1409d32a2*/  mov edx, 2Bh ; '+'
/*1409d32a7*/  call sub_1416C3060
/*1409d32ad*/  jmp loc_1409D3666
/*1409d32b2*/ loc_1409D32B2: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d32b9*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d32c0*/ loc_1409D32C0: lea rax, off_1417A65D0; "src\\core\\relay\\translator.rs"
/*1409d32c7*/  mov [rsp+320h+var_300], rax
/*1409d32cc*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d32d3*/  lea r9, off_1417A5560
/*1409d32da*/  lea r8, [rbp+2A0h+var_A0]
/*1409d32e1*/  mov edx, 2Bh ; '+'
/*1409d32e6*/  call sub_1416C3060
/*1409d32ec*/  jmp loc_1409D3666
/*1409d32f1*/ loc_1409D32F1: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d32f8*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d32ff*/ loc_1409D32FF: lea rax, off_1417A65D0; "src\\core\\relay\\translator.rs"
/*1409d3306*/  mov [rsp+320h+var_300], rax
/*1409d330b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3312*/  lea r9, off_1417A5560
/*1409d3319*/  lea r8, [rbp+2A0h+var_A0]
/*1409d3320*/  mov edx, 2Bh ; '+'
/*1409d3325*/  call sub_1416C3060
/*1409d332b*/  jmp loc_1409D3666
/*1409d3330*/ loc_1409D3330: mov rax, qword ptr [rbp+2A0h+var_60+8]
/*1409d3337*/  mov qword ptr [rbp+2A0h+var_A0], rax
/*1409d333e*/ loc_1409D333E: lea rax, off_1417A65B8; "src\\core\\relay\\translator.rs"
/*1409d3345*/  mov [rsp+320h+var_300], rax
/*1409d334a*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409d3351*/  lea r9, off_1417A5560
/*1409d3358*/  lea r8, [rbp+2A0h+var_A0]
/*1409d335f*/  mov edx, 2Bh ; '+'
/*1409d3364*/  call sub_1416C3060
/*1409d336a*/  jmp loc_1409D3666
/*1409d336f*/ loc_1409D336F: mov [rsp+320h+var_300], 1
/*1409d3378*/  lea rcx, [rbp+2A0h+var_E8]
/*1409d337f*/  mov r9d, 1
/*1409d3385*/  mov rdx, rbx
/*1409d3388*/  mov r8, rdi
/*1409d338b*/  call sub_141688D30
/*1409d3390*/  nop
/*1409d3391*/  mov rbx, [rbp+2A0h+var_D8]
/*1409d3398*/  jmp loc_1409D2E20
/*1409d339d*/ loc_1409D339D: mov [rsp+320h+var_300], 1
/*1409d33a6*/  lea rcx, [rbp+2A0h+var_E8]
/*1409d33ad*/  mov r9d, 1
/*1409d33b3*/  mov rdx, rbx
/*1409d33b6*/  mov r8, rdi
/*1409d33b9*/  call sub_141688D30
/*1409d33be*/  nop
/*1409d33bf*/  mov rbx, [rbp+2A0h+var_D8]
/*1409d33c6*/  jmp loc_1409D267F
/*1409d33cb*/ loc_1409D33CB: mov ecx, 1
/*1409d33d0*/  mov edx, 2
/*1409d33d5*/  call sub_1416C2D4B
/*1409d33db*/  jmp loc_1409D3666
/*1409d33e0*/ loc_1409D33E0: mov ecx, 1
/*1409d33e5*/  mov edx, 6
/*1409d33ea*/  call sub_1416C2D4B
/*1409d33f0*/  jmp loc_1409D3666
/*1409d33f5*/ loc_1409D33F5: mov ecx, 1
/*1409d33fa*/  mov edx, 5
/*1409d33ff*/  call sub_1416C2D4B
/*1409d3405*/  jmp loc_1409D3666
/*1409d340a*/ loc_1409D340A: mov ecx, 1
/*1409d340f*/  mov edx, 7
/*1409d3414*/  call sub_1416C2D4B
/*1409d341a*/  jmp loc_1409D3666
/*1409d341f*/ loc_1409D341F: mov ecx, 1
/*1409d3424*/  mov edx, 5
/*1409d3429*/  call sub_1416C2D4B
/*1409d342f*/  jmp loc_1409D3666
/*1409d3434*/ loc_1409D3434: mov ecx, 1
/*1409d3439*/  mov edx, 5
/*1409d343e*/  call sub_1416C2D4B
/*1409d3444*/  jmp loc_1409D3666
/*1409d3449*/ loc_1409D3449: mov ecx, 1
/*1409d344e*/  mov edx, 0Ah
/*1409d3453*/  call sub_1416C2D4B
/*1409d3459*/  jmp loc_1409D3666
/*1409d345e*/ loc_1409D345E: mov ecx, 1
/*1409d3463*/  mov edx, 5
/*1409d3468*/  call sub_1416C2D4B
/*1409d346e*/  jmp loc_1409D3666
/*1409d3473*/ loc_1409D3473: mov ecx, 1
/*1409d3478*/  mov edx, 2
/*1409d347d*/  call sub_1416C2D4B
/*1409d3483*/  jmp loc_1409D3666
/*1409d3488*/ loc_1409D3488: mov ecx, 1
/*1409d348d*/  mov edx, 4
/*1409d3492*/  call sub_1416C2D4B
/*1409d3498*/  jmp loc_1409D3666
/*1409d349d*/ loc_1409D349D: mov ecx, 1
/*1409d34a2*/  mov edx, 8
/*1409d34a7*/  call sub_1416C2D4B
/*1409d34ad*/  jmp loc_1409D3666
/*1409d34b2*/ loc_1409D34B2: mov ecx, 1
/*1409d34b7*/  mov edx, 4
/*1409d34bc*/  call sub_1416C2D4B
/*1409d34c2*/  jmp loc_1409D3666
/*1409d34c7*/ loc_1409D34C7: mov ecx, 1
/*1409d34cc*/  mov edx, 9
/*1409d34d1*/  call sub_1416C2D4B
/*1409d34d7*/  jmp loc_1409D3666
/*1409d34dc*/ loc_1409D34DC: mov ecx, 1
/*1409d34e1*/  mov edx, 0Dh
/*1409d34e6*/  call sub_1416C2D4B
/*1409d34ec*/  jmp loc_1409D3666
/*1409d34f1*/ loc_1409D34F1: mov ecx, 1
/*1409d34f6*/  mov edx, 2
/*1409d34fb*/  call sub_1416C2D4B
/*1409d3501*/  jmp loc_1409D3666
/*1409d3506*/ loc_1409D3506: mov ecx, 1
/*1409d350b*/  mov edx, 2
/*1409d3510*/  call sub_1416C2D4B
/*1409d3516*/  jmp loc_1409D3666
/*1409d351b*/ loc_1409D351B: mov ecx, 1
/*1409d3520*/  mov edx, 6
/*1409d3525*/  call sub_1416C2D4B
/*1409d352b*/  jmp loc_1409D3666
/*1409d3530*/ loc_1409D3530: mov ecx, 1
/*1409d3535*/  mov edx, 6
/*1409d353a*/  call sub_1416C2D4B
/*1409d3540*/  jmp loc_1409D3666
/*1409d3545*/ loc_1409D3545: mov ecx, 1
/*1409d354a*/  mov edx, 5
/*1409d354f*/  call sub_1416C2D4B
/*1409d3555*/  jmp loc_1409D3666
/*1409d355a*/ loc_1409D355A: mov ecx, 1
/*1409d355f*/  mov edx, 5
/*1409d3564*/  call sub_1416C2D4B
/*1409d356a*/  jmp loc_1409D3666
/*1409d356f*/ loc_1409D356F: mov ecx, 1
/*1409d3574*/  mov edx, 7
/*1409d3579*/  call sub_1416C2D4B
/*1409d357f*/  jmp loc_1409D3666
/*1409d3584*/ loc_1409D3584: mov ecx, 1
/*1409d3589*/  mov edx, 7
/*1409d358e*/  call sub_1416C2D4B
/*1409d3594*/  jmp loc_1409D3666
/*1409d3599*/ loc_1409D3599: mov ecx, 1
/*1409d359e*/  mov edx, 5
/*1409d35a3*/  call sub_1416C2D4B
/*1409d35a9*/  jmp loc_1409D3666
/*1409d35ae*/ loc_1409D35AE: mov ecx, 1
/*1409d35b3*/  mov edx, 5
/*1409d35b8*/  call sub_1416C2D4B
/*1409d35be*/  jmp loc_1409D3666
/*1409d35c3*/ loc_1409D35C3: mov ecx, 1
/*1409d35c8*/  mov edx, 5
/*1409d35cd*/  call sub_1416C2D4B
/*1409d35d3*/  jmp loc_1409D3666
/*1409d35d8*/ loc_1409D35D8: mov ecx, 1
/*1409d35dd*/  mov edx, 5
/*1409d35e2*/  call sub_1416C2D4B
/*1409d35e8*/  jmp short loc_1409D3666
/*1409d35ea*/ loc_1409D35EA: mov ecx, 1
/*1409d35ef*/  mov edx, 0Ah
/*1409d35f4*/  call sub_1416C2D4B
/*1409d35fa*/  jmp short loc_1409D3666
/*1409d35fc*/ loc_1409D35FC: mov ecx, 1
/*1409d3601*/  mov edx, 7
/*1409d3606*/  call sub_1416C2D4B
/*1409d360c*/  jmp short loc_1409D3666
/*1409d360e*/ loc_1409D360E: mov ecx, 1
/*1409d3613*/  mov edx, 5
/*1409d3618*/  call sub_1416C2D4B
/*1409d361e*/  jmp short loc_1409D3666
/*1409d3620*/ loc_1409D3620: mov ecx, 1
/*1409d3625*/  mov edx, 8
/*1409d362a*/  call sub_1416C2D4B
/*1409d3630*/  jmp short loc_1409D3666
/*1409d3632*/ loc_1409D3632: mov ecx, 1
/*1409d3637*/  mov edx, 9
/*1409d363c*/  call sub_1416C2D4B
/*1409d3642*/  jmp short loc_1409D3666
/*1409d3644*/ loc_1409D3644: mov ecx, 1
/*1409d3649*/  mov edx, 0Dh
/*1409d364e*/  call sub_1416C2D4B
/*1409d3654*/  jmp short loc_1409D3666
/*1409d3656*/ loc_1409D3656: mov ecx, 1
/*1409d365b*/  mov edx, 0Dh
/*1409d3660*/  call sub_1416C2D4B
/*1409d3666*/ loc_1409D3666: ud2
