// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14099DEE0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rbx
  _DWORD *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  void *v29; // rax
  _DWORD *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // r12
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43;... [61382 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 392/392 retrieved (all pages fetched: True)
// disasm instructions: 1974/1974 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x14099dee0-0x14099df45 size=101 type=0 succ=['0x14099df45', '0x14099df50'] pred=[]
// BB 0x14099df45-0x14099df50 size=11 type=0 succ=['0x14099dfaf'] pred=['0x14099dee0']
// BB 0x14099df50-0x14099df5b size=11 type=0 succ=['0x14099df5b'] pred=['0x14099dee0']
// BB 0x14099df5b-0x14099df82 size=39 type=0 succ=['0x14099df82', '0x1409a02c6'] pred=['0x14099df50']
// BB 0x14099df82-0x14099df8b size=9 type=0 succ=['0x14099df8b'] pred=['0x14099df5b']
// BB 0x14099df8b-0x14099dfa1 size=22 type=0 succ=['0x14099dfa1', '0x14099dfaf'] pred=['0x14099df82', '0x1409a02ee']
// BB 0x14099dfa1-0x14099dfaf size=14 type=0 succ=['0x14099dfaf'] pred=['0x14099df8b']
// BB 0x14099dfaf-0x14099dfd0 size=33 type=0 succ=['0x14099dfd0', '0x14099e034'] pred=['0x14099df45', '0x14099df8b', '0x14099dfa1']
// BB 0x14099dfd0-0x14099dfd5 size=5 type=0 succ=['0x14099dfd5', '0x14099e034'] pred=['0x14099dfaf']
// BB 0x14099dfd5-0x14099dfdc size=7 type=0 succ=['0x14099dfdc', '0x14099e034'] pred=['0x14099dfd0']
// BB 0x14099dfdc-0x14099e005 size=41 type=0 succ=['0x14099e005', '0x14099e06d'] pred=['0x14099dfd5']
// BB 0x14099e005-0x14099e018 size=19 type=1 succ=['0x14099e018', '0x14099e0b9', '0x14099e0de', '0x14099e0e7', '0x14099e10b'] pred=['0x14099dfdc']
// BB 0x14099e018-0x14099e034 size=28 type=0 succ=['0x14099e156'] pred=['0x14099e005']
// BB 0x14099e034-0x14099e04b size=23 type=0 succ=['0x14099e04b'] pred=['0x14099dfaf', '0x14099dfd0', '0x14099dfd5']
// BB 0x14099e04b-0x14099e06d size=34 type=2 succ=[] pred=['0x14099e034', '0x1409a025b']
// BB 0x14099e06d-0x14099e0b9 size=76 type=0 succ=['0x14099e1b5'] pred=['0x14099dfdc']
// BB 0x14099e0b9-0x14099e0de size=37 type=0 succ=['0x14099e156'] pred=['0x14099e005']
// BB 0x14099e0de-0x14099e0e7 size=9 type=0 succ=['0x14099e156'] pred=['0x14099e005']
// BB 0x14099e0e7-0x14099e10b size=36 type=0 succ=['0x14099e156'] pred=['0x14099e005']
// BB 0x14099e10b-0x14099e112 size=7 type=0 succ=['0x14099e112', '0x14099e139'] pred=['0x14099e005']
// BB 0x14099e112-0x14099e11f size=13 type=0 succ=['0x14099e11f', '0x1409a0481'] pred=['0x14099e10b']
// BB 0x14099e11f-0x14099e139 size=26 type=0 succ=['0x14099e14f'] pred=['0x14099e112']
// BB 0x14099e139-0x14099e14f size=22 type=0 succ=['0x14099e14f'] pred=['0x14099e10b']
// BB 0x14099e14f-0x14099e156 size=7 type=0 succ=['0x14099e156'] pred=['0x14099e11f', '0x14099e139']
// BB 0x14099e156-0x14099e1b5 size=95 type=0 succ=['0x14099e1b5'] pred=['0x14099e018', '0x14099e0b9', '0x14099e0de', '0x14099e0e7', '0x14099e14f']
// BB 0x14099e1b5-0x14099e1d4 size=31 type=0 succ=['0x14099e1d4', '0x14099eb7f'] pred=['0x14099e06d', '0x14099e156']
// BB 0x14099e1d4-0x14099e1dd size=9 type=0 succ=['0x14099e1dd', '0x14099eb7f'] pred=['0x14099e1b5']
// BB 0x14099e1dd-0x14099e1ea size=13 type=0 succ=['0x14099e1ea', '0x14099eb7f'] pred=['0x14099e1d4']
// BB 0x14099e1ea-0x14099e1fb size=17 type=0 succ=['0x14099e1fb', '0x14099e203'] pred=['0x14099e1dd']
// BB 0x14099e1fb-0x14099e203 size=8 type=0 succ=['0x14099e68d'] pred=['0x14099e1ea']
// BB 0x14099e203-0x14099e249 size=70 type=0 succ=['0x14099e249', '0x1409a0570'] pred=['0x14099e1ea']
// BB 0x14099e249-0x14099e273 size=42 type=0 succ=['0x14099e273'] pred=['0x14099e203']
// BB 0x14099e273-0x14099e294 size=33 type=0 succ=['0x14099e294', '0x1409a0353'] pred=['0x14099e249']
// BB 0x14099e294-0x14099e2e6 size=82 type=0 succ=['0x14099e2e6', '0x14099e2f3'] pred=['0x14099e273']
// BB 0x14099e2e6-0x14099e2f3 size=13 type=0 succ=['0x14099e2f3'] pred=['0x14099e294']
// BB 0x14099e2f3-0x14099e310 size=29 type=0 succ=['0x14099e310', '0x1409a0585'] pred=['0x14099e294', '0x14099e2e6']
// BB 0x14099e310-0x14099e37b size=107 type=0 succ=['0x14099e37b', '0x14099e388'] pred=['0x14099e2f3']
// BB 0x14099e37b-0x14099e388 size=13 type=0 succ=['0x14099e388'] pred=['0x14099e310']
// BB 0x14099e388-0x14099e3a5 size=29 type=0 succ=['0x14099e3a5', '0x1409a059a'] pred=['0x14099e310', '0x14099e37b']
// BB 0x14099e3a5-0x14099e40a size=101 type=0 succ=['0x14099e40a', '0x1409a05af'] pred=['0x14099e388']
// BB 0x14099e40a-0x14099e434 size=42 type=0 succ=['0x14099e434'] pred=['0x14099e3a5']
// BB 0x14099e434-0x14099e455 size=33 type=0 succ=['0x14099e455', '0x1409a0392'] pred=['0x14099e40a']
// BB 0x14099e455-0x14099e4a7 size=82 type=0 succ=['0x14099e4a7', '0x14099e4b4'] pred=['0x14099e434']
// BB 0x14099e4a7-0x14099e4b4 size=13 type=0 succ=['0x14099e4b4'] pred=['0x14099e455']
// BB 0x14099e4b4-0x14099e4d1 size=29 type=0 succ=['0x14099e4d1', '0x1409a05c4'] pred=['0x14099e455', '0x14099e4a7']
// BB 0x14099e4d1-0x14099e4fb size=42 type=0 succ=['0x14099e4fb'] pred=['0x14099e4b4']
// BB 0x14099e4fb-0x14099e51c size=33 type=0 succ=['0x14099e51c', '0x1409a03d1'] pred=['0x14099e4d1']
// BB 0x14099e51c-0x14099e56e size=82 type=0 succ=['0x14099e56e', '0x14099e57b'] pred=['0x14099e4fb']
// BB 0x14099e56e-0x14099e57b size=13 type=0 succ=['0x14099e57b'] pred=['0x14099e51c']
// BB 0x14099e57b-0x14099e5a7 size=44 type=0 succ=['0x14099e5a7'] pred=['0x14099e51c', '0x14099e56e']
// BB 0x14099e5a7-0x14099e5cf size=40 type=0 succ=['0x14099e5cf', '0x14099e5dc'] pred=['0x14099e57b']
// BB 0x14099e5cf-0x14099e5dc size=13 type=0 succ=['0x14099e5dc'] pred=['0x14099e5a7']
// BB 0x14099e5dc-0x14099e601 size=37 type=0 succ=['0x14099e601'] pred=['0x14099e5a7', '0x14099e5cf']
// BB 0x14099e601-0x14099e615 size=20 type=0 succ=['0x14099e615'] pred=['0x14099e5dc']
// BB 0x14099e615-0x14099e63d size=40 type=0 succ=['0x14099e63d', '0x1409a044c'] pred=['0x14099e601']
// BB 0x14099e63d-0x14099e642 size=5 type=0 succ=['0x14099e642', '0x14099e657'] pred=['0x14099e615']
// BB 0x14099e642-0x14099e657 size=21 type=0 succ=['0x14099e657'] pred=['0x14099e63d', '0x1409a044c']
// BB 0x14099e657-0x14099e66d size=22 type=0 succ=['0x14099e66d', '0x14099e680'] pred=['0x14099e63d', '0x14099e642']
// BB 0x14099e66d-0x14099e680 size=19 type=0 succ=['0x14099e680'] pred=['0x14099e657']
// BB 0x14099e680-0x14099e68d size=13 type=0 succ=['0x14099e68d'] pred=['0x14099e657', '0x14099e66d']
// BB 0x14099e68d-0x14099e6c0 size=51 type=0 succ=['0x14099e6c0', '0x1409a04dd'] pred=['0x14099e1fb', '0x14099e680']
// BB 0x14099e6c0-0x14099e707 size=71 type=0 succ=['0x14099e707', '0x1409a04f2'] pred=['0x14099e68d']
// BB 0x14099e707-0x14099e73e size=55 type=0 succ=['0x14099e73e'] pred=['0x14099e6c0']
// BB 0x14099e73e-0x14099e769 size=43 type=0 succ=['0x14099e769', '0x14099e776'] pred=['0x14099e707']
// BB 0x14099e769-0x14099e776 size=13 type=0 succ=['0x14099e776'] pred=['0x14099e73e']
// BB 0x14099e776-0x14099e793 size=29 type=0 succ=['0x14099e793', '0x1409a0507'] pred=['0x14099e73e', '0x14099e769']
// BB 0x14099e793-0x14099e800 size=109 type=0 succ=['0x14099e800', '0x14099e80d'] pred=['0x14099e776']
// BB 0x14099e800-0x14099e80d size=13 type=0 succ=['0x14099e80d'] pred=['0x14099e793']
// BB 0x14099e80d-0x14099e82a size=29 type=0 succ=['0x14099e82a', '0x1409a051c'] pred=['0x14099e793', '0x14099e800']
// BB 0x14099e82a-0x14099e87e size=84 type=0 succ=['0x14099e87e', '0x1409a0531'] pred=['0x14099e80d']
// BB 0x14099e87e-0x14099e8c5 size=71 type=0 succ=['0x14099e8c5', '0x1409a0546'] pred=['0x14099e82a']
// BB 0x14099e8c5-0x14099e8fc size=55 type=0 succ=['0x14099e8fc'] pred=['0x14099e87e']
// BB 0x14099e8fc-0x14099e927 size=43 type=0 succ=['0x14099e927', '0x14099e934'] pred=['0x14099e8c5']
// BB 0x14099e927-0x14099e934 size=13 type=0 succ=['0x14099e934'] pred=['0x14099e8fc']
// BB 0x14099e934-0x14099e951 size=29 type=0 succ=['0x14099e951', '0x1409a055b'] pred=['0x14099e8fc', '0x14099e927']
// BB 0x14099e951-0x14099e979 size=40 type=0 succ=['0x14099e979', '0x14099e994'] pred=['0x14099e934']
// BB 0x14099e979-0x14099e97c size=3 type=0 succ=['0x14099e97c'] pred=['0x14099e951']
// BB 0x14099e97c-0x14099e983 size=7 type=0 succ=['0x14099e983'] pred=['0x14099e979', '0x14099e994']
// BB 0x14099e983-0x14099e98e size=11 type=4 succ=[] pred=['0x14099e97c']
// BB 0x14099e98f-0x14099e994 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x14099e994-0x14099e9b1 size=29 type=0 succ=['0x14099e97c', '0x14099e9b1'] pred=['0x14099e951']
// BB 0x14099e9b1-0x14099e9e9 size=56 type=0 succ=['0x14099e9e9'] pred=['0x14099e994']
// BB 0x14099e9e9-0x14099ea17 size=46 type=0 succ=['0x14099ea17', '0x14099ea24'] pred=['0x14099e9b1']
// BB 0x14099ea17-0x14099ea24 size=13 type=0 succ=['0x14099ea24'] pred=['0x14099e9e9']
// BB 0x14099ea24-0x14099ea50 size=44 type=0 succ=['0x14099ea50'] pred=['0x14099e9e9', '0x14099ea17']
// BB 0x14099ea50-0x14099ea7e size=46 type=0 succ=['0x14099ea7e', '0x14099ea8b'] pred=['0x14099ea24']
// BB 0x14099ea7e-0x14099ea8b size=13 type=0 succ=['0x14099ea8b'] pred=['0x14099ea50']
// BB 0x14099ea8b-0x14099eaf7 size=108 type=0 succ=['0x14099eaf7'] pred=['0x14099ea50', '0x14099ea7e']
// BB 0x14099eaf7-0x14099eb12 size=27 type=0 succ=['0x14099eb12'] pred=['0x14099ea8b']
// BB 0x14099eb12-0x14099eb33 size=33 type=0 succ=['0x14099eb33', '0x1409a0410'] pred=['0x14099eaf7']
// BB 0x14099eb33-0x14099eb38 size=5 type=0 succ=['0x14099eb38', '0x14099eb4d'] pred=['0x14099eb12']
// BB 0x14099eb38-0x14099eb4d size=21 type=0 succ=['0x14099eb4d'] pred=['0x14099eb33', '0x1409a0410']
// BB 0x14099eb4d-0x14099eb63 size=22 type=0 succ=['0x14099eb63', '0x14099eb72'] pred=['0x14099eb33', '0x14099eb38']
// BB 0x14099eb63-0x14099eb72 size=15 type=0 succ=['0x14099eb72'] pred=['0x14099eb4d']
// BB 0x14099eb72-0x14099eb7f size=13 type=0 succ=['0x14099eb7f'] pred=['0x14099eb4d', '0x14099eb63']
// BB 0x14099eb7f-0x14099eb9e size=31 type=0 succ=['0x14099eb9e', '0x1409a018f'] pred=['0x14099e1b5', '0x14099e1d4', '0x14099e1dd', '0x14099eb72']
// BB 0x14099eb9e-0x14099eba7 size=9 type=0 succ=['0x14099eba7', '0x1409a018f'] pred=['0x14099eb7f']
// BB 0x14099eba7-0x14099ebd5 size=46 type=0 succ=['0x14099ebd5', '0x1409a018f'] pred=['0x14099eb9e']
// BB 0x14099ebd5-0x14099ebe8 size=19 type=0 succ=['0x14099ebe8', '0x14099ebf8'] pred=['0x14099eba7', '0x1409a005a']
// BB 0x14099ebe8-0x14099ebed size=5 type=0 succ=['0x14099ebed', '0x14099ebf8'] pred=['0x14099ebd5']
// BB 0x14099ebed-0x14099ebf8 size=11 type=0 succ=['0x14099ebf8', '0x14099ec94'] pred=['0x14099ebe8']
// BB 0x14099ebf8-0x14099ebfa size=2 type=0 succ=['0x14099ebfa'] pred=['0x14099ebd5', '0x14099ebe8', '0x14099ebed']
// BB 0x14099ebfa-0x14099ec14 size=26 type=0 succ=['0x14099ec14', '0x14099ec45'] pred=['0x14099ebf8', '0x14099ec94']
// BB 0x14099ec14-0x14099ec27 size=19 type=1 succ=['0x14099ec27', '0x14099ec9d', '0x14099ecbb', '0x14099ecc4', '0x14099ece1'] pred=['0x14099ebfa']
// BB 0x14099ec27-0x14099ec45 size=30 type=0 succ=['0x14099ed25'] pred=['0x14099ec14']
// BB 0x14099ec45-0x14099ec94 size=79 type=0 succ=['0x14099ed80'] pred=['0x14099ebfa']
// BB 0x14099ec94-0x14099ec9d size=9 type=0 succ=['0x14099ebfa'] pred=['0x14099ebed']
// BB 0x14099ec9d-0x14099ecbb size=30 type=0 succ=['0x14099ed25'] pred=['0x14099ec14']
// BB 0x14099ecbb-0x14099ecc4 size=9 type=0 succ=['0x14099ed25'] pred=['0x14099ec14']
// BB 0x14099ecc4-0x14099ece1 size=29 type=0 succ=['0x14099ed25'] pred=['0x14099ec14']
// BB 0x14099ece1-0x14099ece8 size=7 type=0 succ=['0x14099ece8', '0x14099ed08'] pred=['0x14099ec14']
// BB 0x14099ece8-0x14099ecf5 size=13 type=0 succ=['0x14099ecf5', '0x1409a04cb'] pred=['0x14099ece1']
// BB 0x14099ecf5-0x14099ed08 size=19 type=0 succ=['0x14099ed1e'] pred=['0x14099ece8']
// BB 0x14099ed08-0x14099ed1e size=22 type=0 succ=['0x14099ed1e'] pred=['0x14099ece1']
// BB 0x14099ed1e-0x14099ed25 size=7 type=0 succ=['0x14099ed25'] pred=['0x14099ecf5', '0x14099ed08']
// BB 0x14099ed25-0x14099ed80 size=91 type=0 succ=['0x14099ed80'] pred=['0x14099ec27', '0x14099ec9d', '0x14099ecbb', '0x14099ecc4', '0x14099ed1e']
// BB 0x14099ed80-0x14099ed95 size=21 type=0 succ=['0x14099ed95'] pred=['0x14099ec45', '0x14099ed25']
// BB 0x14099ed95-0x14099ed9a size=5 type=0 succ=['0x14099ed9a', '0x14099edf2'] pred=['0x14099ed80']
// BB 0x14099ed9a-0x14099ed9f size=5 type=0 succ=['0x14099ed9f', '0x14099edf2'] pred=['0x14099ed95']
// BB 0x14099ed9f-0x14099edac size=13 type=0 succ=['0x14099edac', '0x1409a026a'] pred=['0x14099ed9a']
// BB 0x14099edac-0x14099edb6 size=10 type=0 succ=['0x14099edb6', '0x14099edfa'] pred=['0x14099ed9f']
// BB 0x14099edb6-0x14099edd5 size=31 type=0 succ=['0x14099edd5', '0x1409a079e'] pred=['0x14099edac']
// BB 0x14099edd5-0x14099edf2 size=29 type=0 succ=['0x14099ee03'] pred=['0x14099edb6']
// BB 0x14099edf2-0x14099edfa size=8 type=0 succ=['0x14099edfa'] pred=['0x14099ed95', '0x14099ed9a']
// BB 0x14099edfa-0x14099ee03 size=9 type=0 succ=['0x14099ee03'] pred=['0x14099edac', '0x14099edf2']
// BB 0x14099ee03-0x14099ee1d size=26 type=0 succ=['0x14099ee1d'] pred=['0x14099edd5', '0x14099edfa']
// BB 0x14099ee1d-0x14099ee33 size=22 type=0 succ=['0x14099ee33'] pred=['0x14099ee03']
// BB 0x14099ee33-0x14099ee3d size=10 type=0 succ=['0x14099ee3d', '0x14099eea1'] pred=['0x14099ee1d']
// BB 0x14099ee3d-0x14099ee42 size=5 type=0 succ=['0x14099ee42', '0x14099eea1'] pred=['0x14099ee33']
// BB 0x14099ee42-0x14099ee4f size=13 type=0 succ=['0x14099ee4f', '0x1409a027e'] pred=['0x14099ee3d']
// BB 0x14099ee4f-0x14099ee58 size=9 type=0 succ=['0x14099ee58', '0x14099eea1'] pred=['0x14099ee42']
// BB 0x14099ee58-0x14099ee82 size=42 type=0 succ=['0x14099ee82', '0x1409a0786'] pred=['0x14099ee4f']
// BB 0x14099ee82-0x14099eea1 size=31 type=0 succ=['0x14099eeb8'] pred=['0x14099ee58']
// BB 0x14099eea1-0x14099eeb8 size=23 type=0 succ=['0x14099eeb8'] pred=['0x14099ee33', '0x14099ee3d', '0x14099ee4f']
// BB 0x14099eeb8-0x14099eed7 size=31 type=0 succ=['0x14099eed7', '0x14099eef5'] pred=['0x14099ee82', '0x14099eea1']
// BB 0x14099eed7-0x14099eedc size=5 type=0 succ=['0x14099eedc', '0x14099eef5'] pred=['0x14099eeb8']
// BB 0x14099eedc-0x14099eef5 size=25 type=0 succ=['0x14099ef06'] pred=['0x14099eed7']
// BB 0x14099eef5-0x14099ef06 size=17 type=0 succ=['0x14099ef06'] pred=['0x14099eeb8', '0x14099eed7']
// BB 0x14099ef06-0x14099ef4f size=73 type=0 succ=['0x14099ef4f'] pred=['0x14099eedc', '0x14099eef5']
// BB 0x14099ef4f-0x14099ef6a size=27 type=0 succ=['0x14099ef6a', '0x14099ef90'] pred=['0x14099ef06', '0x14099ef9e']
// BB 0x14099ef6a-0x14099ef83 size=25 type=0 succ=['0x14099ef83', '0x14099efab'] pred=['0x14099ef4f', '0x14099ef83']
// BB 0x14099ef83-0x14099ef90 size=13 type=0 succ=['0x14099ef6a', '0x14099ef90'] pred=['0x14099ef6a']
// BB 0x14099ef90-0x14099ef9e size=14 type=0 succ=['0x14099ef9e', '0x14099efb4'] pred=['0x14099ef4f', '0x14099ef83']
// BB 0x14099ef9e-0x14099efab size=13 type=0 succ=['0x14099ef4f'] pred=['0x14099ef90']
// BB 0x14099efab-0x14099efb4 size=9 type=0 succ=['0x14099f051'] pred=['0x14099ef6a']
// BB 0x14099efb4-0x14099efbf size=11 type=0 succ=['0x14099efbf', '0x1409a00a1'] pred=['0x14099ef90']
// BB 0x14099efbf-0x14099efd4 size=21 type=0 succ=['0x14099efd4', '0x1409a007d'] pred=['0x14099efb4', '0x1409a00a1']
// BB 0x14099efd4-0x14099efec size=24 type=0 succ=['0x14099efec', '0x1409a00c4'] pred=['0x14099efbf', '0x1409a0083']
// BB 0x14099efec-0x14099f051 size=101 type=0 succ=['0x14099f051'] pred=['0x14099efd4', '0x1409a00c4']
// BB 0x14099f051-0x14099f058 size=7 type=0 succ=['0x14099f058', '0x14099f05f'] pred=['0x14099efab', '0x14099efec']
// BB 0x14099f058-0x14099f05f size=7 type=0 succ=['0x14099f05f'] pred=['0x14099f051']
// BB 0x14099f05f-0x14099f072 size=19 type=0 succ=['0x14099f072', '0x14099fb2b'] pred=['0x14099f051', '0x14099f058']
// BB 0x14099f072-0x14099f080 size=14 type=0 succ=['0x14099f080', '0x14099f0c0'] pred=['0x14099f05f']
// BB 0x14099f080-0x14099f099 size=25 type=0 succ=['0x14099f099', '0x14099f0a9'] pred=['0x14099f072']
// BB 0x14099f099-0x14099f0a9 size=16 type=0 succ=['0x14099f0a9'] pred=['0x14099f080']
// BB 0x14099f0a9-0x14099f0c0 size=23 type=0 succ=['0x14099f0c0'] pred=['0x14099f080', '0x14099f099']
// BB 0x14099f0c0-0x14099f0cc size=12 type=0 succ=['0x14099f0cc', '0x14099f215'] pred=['0x14099f072', '0x14099f0a9']
// BB 0x14099f0cc-0x14099f131 size=101 type=0 succ=['0x14099f131'] pred=['0x14099f0c0']
// BB 0x14099f131-0x14099f14d size=28 type=0 succ=['0x14099f14d', '0x1409a049a'] pred=['0x14099f0cc']
// BB 0x14099f14d-0x14099f173 size=38 type=0 succ=['0x14099f173', '0x14099f17e'] pred=['0x14099f131']
// BB 0x14099f173-0x14099f179 size=6 type=0 succ=['0x14099f179', '0x14099f184'] pred=['0x14099f14d']
// BB 0x14099f179-0x14099f17e size=5 type=0 succ=['0x1409a06ff'] pred=['0x14099f173']
// BB 0x14099f17e-0x14099f184 size=6 type=0 succ=['0x14099f184', '0x1409a06ff'] pred=['0x14099f14d']
// BB 0x14099f184-0x14099f1b2 size=46 type=0 succ=['0x14099f1b2'] pred=['0x14099f173', '0x14099f17e']
// BB 0x14099f1b2-0x14099f1d6 size=36 type=0 succ=['0x14099f1d6', '0x14099f1e5'] pred=['0x14099f184']
// BB 0x14099f1d6-0x14099f1e5 size=15 type=0 succ=['0x14099f1e5'] pred=['0x14099f1b2']
// BB 0x14099f1e5-0x14099f1f4 size=15 type=0 succ=['0x14099f1f4', '0x14099f204'] pred=['0x14099f1b2', '0x14099f1d6']
// BB 0x14099f1f4-0x14099f204 size=16 type=0 succ=['0x14099f204'] pred=['0x14099f1e5']
// BB 0x14099f204-0x14099f215 size=17 type=0 succ=['0x14099f215'] pred=['0x14099f1e5', '0x14099f1f4']
// BB 0x14099f215-0x14099f21f size=10 type=0 succ=['0x14099f21f', '0x14099fb2b'] pred=['0x14099f0c0', '0x14099f204']
// BB 0x14099f21f-0x14099f23b size=28 type=0 succ=['0x14099f23b', '0x14099f4cb'] pred=['0x14099f215']
// BB 0x14099f23b-0x14099f26e size=51 type=0 succ=['0x14099f26e', '0x1409a0740'] pred=['0x14099f21f']
// BB 0x14099f26e-0x14099f2b5 size=71 type=0 succ=['0x14099f2b5', '0x1409a072e'] pred=['0x14099f23b']
// BB 0x14099f2b5-0x14099f2eb size=54 type=0 succ=['0x14099f2eb'] pred=['0x14099f26e']
// BB 0x14099f2eb-0x14099f316 size=43 type=0 succ=['0x14099f316', '0x14099f323'] pred=['0x14099f2b5']
// BB 0x14099f316-0x14099f323 size=13 type=0 succ=['0x14099f323'] pred=['0x14099f2eb']
// BB 0x14099f323-0x14099f340 size=29 type=0 succ=['0x14099f340', '0x1409a071c'] pred=['0x14099f2eb', '0x14099f316']
// BB 0x14099f340-0x14099f3ab size=107 type=0 succ=['0x14099f3ab', '0x14099f3b8'] pred=['0x14099f323']
// BB 0x14099f3ab-0x14099f3b8 size=13 type=0 succ=['0x14099f3b8'] pred=['0x14099f340']
// BB 0x14099f3b8-0x14099f43c size=132 type=0 succ=['0x14099f43c'] pred=['0x14099f340', '0x14099f3ab']
// BB 0x14099f43c-0x14099f457 size=27 type=0 succ=['0x14099f457'] pred=['0x14099f3b8']
// BB 0x14099f457-0x14099f47f size=40 type=0 succ=['0x14099f47f', '0x1409a0117'] pred=['0x14099f43c']
// BB 0x14099f47f-0x14099f484 size=5 type=0 succ=['0x14099f484', '0x14099f499'] pred=['0x14099f457']
// BB 0x14099f484-0x14099f499 size=21 type=0 succ=['0x14099f499'] pred=['0x14099f47f', '0x1409a0117']
// BB 0x14099f499-0x14099f4af size=22 type=0 succ=['0x14099f4af', '0x14099f4be'] pred=['0x14099f47f', '0x14099f484']
// BB 0x14099f4af-0x14099f4be size=15 type=0 succ=['0x14099f4be'] pred=['0x14099f499']
// BB 0x14099f4be-0x14099f4cb size=13 type=0 succ=['0x14099f4cb'] pred=['0x14099f499', '0x14099f4af']
// BB 0x14099f4cb-0x14099f4f8 size=45 type=0 succ=['0x14099f4f8', '0x1409a06ea'] pred=['0x14099f21f', '0x14099f4be']
// BB 0x14099f4f8-0x14099f53f size=71 type=0 succ=['0x14099f53f', '0x1409a06d5'] pred=['0x14099f4cb']
// BB 0x14099f53f-0x14099f576 size=55 type=0 succ=['0x14099f576'] pred=['0x14099f4f8']
// BB 0x14099f576-0x14099f59e size=40 type=0 succ=['0x14099f59e', '0x14099f5ab'] pred=['0x14099f53f']
// BB 0x14099f59e-0x14099f5ab size=13 type=0 succ=['0x14099f5ab'] pred=['0x14099f576']
// BB 0x14099f5ab-0x14099f5c8 size=29 type=0 succ=['0x14099f5c8', '0x1409a06c0'] pred=['0x14099f576', '0x14099f59e']
// BB 0x14099f5c8-0x14099f63a size=114 type=0 succ=['0x14099f63a', '0x14099f647'] pred=['0x14099f5ab']
// BB 0x14099f63a-0x14099f647 size=13 type=0 succ=['0x14099f647'] pred=['0x14099f5c8']
// BB 0x14099f647-0x14099f664 size=29 type=0 succ=['0x14099f664', '0x1409a06ab'] pred=['0x14099f5c8', '0x14099f63a']
// BB 0x14099f664-0x14099f6c0 size=92 type=0 succ=['0x14099f6c0', '0x1409a0696'] pred=['0x14099f647']
// BB 0x14099f6c0-0x14099f707 size=71 type=0 succ=['0x14099f707', '0x1409a0681'] pred=['0x14099f664']
// BB 0x14099f707-0x14099f73b size=52 type=0 succ=['0x14099f73b'] pred=['0x14099f6c0']
// BB 0x14099f73b-0x14099f763 size=40 type=0 succ=['0x14099f763', '0x14099f770'] pred=['0x14099f707']
// BB 0x14099f763-0x14099f770 size=13 type=0 succ=['0x14099f770'] pred=['0x14099f73b']
// BB 0x14099f770-0x14099f78d size=29 type=0 succ=['0x14099f78d', '0x1409a066c'] pred=['0x14099f73b', '0x14099f763']
// BB 0x14099f78d-0x14099f7c3 size=54 type=0 succ=['0x14099f7c3', '0x1409a02ac'] pred=['0x14099f770']
// BB 0x14099f7c3-0x14099f7c5 size=2 type=0 succ=['0x14099f7c5', '0x14099f7fc'] pred=['0x14099f78d']
// BB 0x14099f7c5-0x14099f7e9 size=36 type=0 succ=['0x14099f7e9', '0x1409a02ae'] pred=['0x14099f7c3']
// BB 0x14099f7e9-0x14099f7fc size=19 type=0 succ=['0x14099f802'] pred=['0x14099f7c5']
// BB 0x14099f7fc-0x14099f802 size=6 type=0 succ=['0x14099f802'] pred=['0x14099f7c3']
// BB 0x14099f802-0x14099f825 size=35 type=0 succ=['0x14099f825'] pred=['0x14099f7e9', '0x14099f7fc']
// BB 0x14099f825-0x14099f84d size=40 type=0 succ=['0x14099f84d', '0x14099f85a'] pred=['0x14099f802']
// BB 0x14099f84d-0x14099f85a size=13 type=0 succ=['0x14099f85a'] pred=['0x14099f825']
// BB 0x14099f85a-0x14099f877 size=29 type=0 succ=['0x14099f877', '0x1409a0774'] pred=['0x14099f825', '0x14099f84d']
// BB 0x14099f877-0x14099f8c3 size=76 type=0 succ=['0x14099f8c3', '0x1409a0764'] pred=['0x14099f85a']
// BB 0x14099f8c3-0x14099f8f4 size=49 type=0 succ=['0x14099f8f4'] pred=['0x14099f877']
// BB 0x14099f8f4-0x14099f91c size=40 type=0 succ=['0x14099f91c', '0x14099f929'] pred=['0x14099f8c3']
// BB 0x14099f91c-0x14099f929 size=13 type=0 succ=['0x14099f929'] pred=['0x14099f8f4']
// BB 0x14099f929-0x14099f946 size=29 type=0 succ=['0x14099f946', '0x1409a0752'] pred=['0x14099f8f4', '0x14099f91c']
// BB 0x14099f946-0x14099f9b2 size=108 type=0 succ=['0x14099f9b2', '0x14099f9bf'] pred=['0x14099f929']
// BB 0x14099f9b2-0x14099f9bf size=13 type=0 succ=['0x14099f9bf'] pred=['0x14099f946']
// BB 0x14099f9bf-0x14099f9e5 size=38 type=0 succ=['0x14099f9e5'] pred=['0x14099f946', '0x14099f9b2']
// BB 0x14099f9e5-0x14099fa0a size=37 type=0 succ=['0x14099fa0a', '0x14099fa17'] pred=['0x14099f9bf']
// BB 0x14099fa0a-0x14099fa17 size=13 type=0 succ=['0x14099fa17'] pred=['0x14099f9e5']
// BB 0x14099fa17-0x14099fa95 size=126 type=0 succ=['0x14099fa95'] pred=['0x14099f9e5', '0x14099fa0a']
// BB 0x14099fa95-0x14099fab0 size=27 type=0 succ=['0x14099fab0'] pred=['0x14099fa17']
// BB 0x14099fab0-0x14099fad8 size=40 type=0 succ=['0x14099fad8', '0x1409a0153'] pred=['0x14099fa95']
// BB 0x14099fad8-0x14099fadd size=5 type=0 succ=['0x14099fadd', '0x14099faf2'] pred=['0x14099fab0']
// BB 0x14099fadd-0x14099faf2 size=21 type=0 succ=['0x14099faf2'] pred=['0x14099fad8', '0x1409a0153']
// BB 0x14099faf2-0x14099fb08 size=22 type=0 succ=['0x14099fb08', '0x14099fb17'] pred=['0x14099fad8', '0x14099fadd']
// BB 0x14099fb08-0x14099fb17 size=15 type=0 succ=['0x14099fb17'] pred=['0x14099faf2']
// BB 0x14099fb17-0x14099fb2b size=20 type=0 succ=['0x14099fb2b'] pred=['0x14099faf2', '0x14099fb08']
// BB 0x14099fb2b-0x14099fb3c size=17 type=0 succ=['0x14099fb3c', '0x1409a001d'] pred=['0x14099f05f', '0x14099f215', '0x14099fb17']
// BB 0x14099fb3c-0x14099fb69 size=45 type=0 succ=['0x14099fb69', '0x1409a0657'] pred=['0x14099fb2b']
// BB 0x14099fb69-0x14099fbad size=68 type=0 succ=['0x14099fbad', '0x1409a0642'] pred=['0x14099fb3c']
// BB 0x14099fbad-0x14099fbe4 size=55 type=0 succ=['0x14099fbe4'] pred=['0x14099fb69']
// BB 0x14099fbe4-0x14099fc0c size=40 type=0 succ=['0x14099fc0c', '0x14099fc19'] pred=['0x14099fbad']
// BB 0x14099fc0c-0x14099fc19 size=13 type=0 succ=['0x14099fc19'] pred=['0x14099fbe4']
// BB 0x14099fc19-0x14099fc36 size=29 type=0 succ=['0x14099fc36', '0x1409a062d'] pred=['0x14099fbe4', '0x14099fc0c']
// BB 0x14099fc36-0x14099fca8 size=114 type=0 succ=['0x14099fca8', '0x14099fcb5'] pred=['0x14099fc19']
// BB 0x14099fca8-0x14099fcb5 size=13 type=0 succ=['0x14099fcb5'] pred=['0x14099fc36']
// BB 0x14099fcb5-0x14099fcd2 size=29 type=0 succ=['0x14099fcd2', '0x1409a0618'] pred=['0x14099fc36', '0x14099fca8']
// BB 0x14099fcd2-0x14099fd1d size=75 type=0 succ=['0x14099fd1d', '0x1409a0603'] pred=['0x14099fcb5']
// BB 0x14099fd1d-0x14099fd64 size=71 type=0 succ=['0x14099fd64', '0x1409a05ee'] pred=['0x14099fcd2']
// BB 0x14099fd64-0x14099fd94 size=48 type=0 succ=['0x14099fd94'] pred=['0x14099fd1d']
// BB 0x14099fd94-0x14099fdbc size=40 type=0 succ=['0x14099fdbc', '0x14099fdc9'] pred=['0x14099fd64']
// BB 0x14099fdbc-0x14099fdc9 size=13 type=0 succ=['0x14099fdc9'] pred=['0x14099fd94']
// BB 0x14099fdc9-0x14099fde6 size=29 type=0 succ=['0x14099fde6', '0x1409a05d9'] pred=['0x14099fd94', '0x14099fdbc']
// BB 0x14099fde6-0x14099fe24 size=62 type=0 succ=['0x14099fe24', '0x1409a0292'] pred=['0x14099fdc9']
// BB 0x14099fe24-0x14099fe26 size=2 type=0 succ=['0x14099fe26', '0x14099fe5a'] pred=['0x14099fde6']
// BB 0x14099fe26-0x14099fe46 size=32 type=0 succ=['0x14099fe46', '0x1409a0294'] pred=['0x14099fe24']
// BB 0x14099fe46-0x14099fe5a size=20 type=0 succ=['0x14099fe60'] pred=['0x14099fe26']
// BB 0x14099fe5a-0x14099fe60 size=6 type=0 succ=['0x14099fe60'] pred=['0x14099fe24']
// BB 0x14099fe60-0x14099fe83 size=35 type=0 succ=['0x14099fe83'] pred=['0x14099fe46', '0x14099fe5a']
// BB 0x14099fe83-0x14099feab size=40 type=0 succ=['0x14099feab', '0x14099feb8'] pred=['0x14099fe60']
// BB 0x14099feab-0x14099feb8 size=13 type=0 succ=['0x14099feb8'] pred=['0x14099fe83']
// BB 0x14099feb8-0x14099fede size=38 type=0 succ=['0x14099fede'] pred=['0x14099fe83', '0x14099feab']
// BB 0x14099fede-0x14099ff03 size=37 type=0 succ=['0x14099ff03', '0x14099ff10'] pred=['0x14099feb8']
// BB 0x14099ff03-0x14099ff10 size=13 type=0 succ=['0x14099ff10'] pred=['0x14099fede']
// BB 0x14099ff10-0x14099ff8e size=126 type=0 succ=['0x14099ff8e'] pred=['0x14099fede', '0x14099ff03']
// BB 0x14099ff8e-0x14099ffa9 size=27 type=0 succ=['0x14099ffa9'] pred=['0x14099ff10']
// BB 0x14099ffa9-0x14099ffd1 size=40 type=0 succ=['0x14099ffd1', '0x1409a00db'] pred=['0x14099ff8e']
// BB 0x14099ffd1-0x14099ffd6 size=5 type=0 succ=['0x14099ffd6', '0x14099ffeb'] pred=['0x14099ffa9']
// BB 0x14099ffd6-0x14099ffeb size=21 type=0 succ=['0x14099ffeb'] pred=['0x14099ffd1', '0x1409a00db']
// BB 0x14099ffeb-0x1409a0001 size=22 type=0 succ=['0x1409a0001', '0x1409a0010'] pred=['0x14099ffd1', '0x14099ffd6']
// BB 0x1409a0001-0x1409a0010 size=15 type=0 succ=['0x1409a0010'] pred=['0x14099ffeb']
// BB 0x1409a0010-0x1409a001d size=13 type=0 succ=['0x1409a001d'] pred=['0x14099ffeb', '0x1409a0001']
// BB 0x1409a001d-0x1409a0029 size=12 type=0 succ=['0x1409a0029', '0x1409a003b'] pred=['0x14099fb2b', '0x1409a0010']
// BB 0x1409a0029-0x1409a003b size=18 type=0 succ=['0x1409a003b'] pred=['0x1409a001d']
// BB 0x1409a003b-0x1409a0047 size=12 type=0 succ=['0x1409a0047', '0x1409a005a'] pred=['0x1409a001d', '0x1409a0029']
// BB 0x1409a0047-0x1409a005a size=19 type=0 succ=['0x1409a005a'] pred=['0x1409a003b']
// BB 0x1409a005a-0x1409a0078 size=30 type=0 succ=['0x14099ebd5', '0x1409a0078'] pred=['0x1409a003b', '0x1409a0047']
// BB 0x1409a0078-0x1409a007d size=5 type=0 succ=['0x1409a018f'] pred=['0x1409a005a']
// BB 0x1409a007d-0x1409a0083 size=6 type=0 succ=['0x1409a0083'] pred=['0x14099efbf']
// BB 0x1409a0083-0x1409a009f size=28 type=0 succ=['0x14099efd4', '0x1409a009f'] pred=['0x1409a007d', '0x1409a009f']
// BB 0x1409a009f-0x1409a00a1 size=2 type=0 succ=['0x1409a0083'] pred=['0x1409a0083']
// BB 0x1409a00a1-0x1409a00c4 size=35 type=0 succ=['0x14099efbf'] pred=['0x14099efb4']
// BB 0x1409a00c4-0x1409a00db size=23 type=0 succ=['0x14099efec'] pred=['0x14099efd4']
// BB 0x1409a00db-0x1409a0117 size=60 type=0 succ=['0x14099ffd6'] pred=['0x14099ffa9']
// BB 0x1409a0117-0x1409a0153 size=60 type=0 succ=['0x14099f484'] pred=['0x14099f457']
// BB 0x1409a0153-0x1409a018f size=60 type=0 succ=['0x14099fadd'] pred=['0x14099fab0']
// BB 0x1409a018f-0x1409a01b1 size=34 type=0 succ=['0x1409a01b1', '0x1409a023d'] pred=['0x14099eb7f', '0x14099eb9e', '0x14099eba7', '0x1409a0078']
// BB 0x1409a01b1-0x1409a01ba size=9 type=0 succ=['0x1409a01ba', '0x1409a023d'] pred=['0x1409a018f']
// BB 0x1409a01ba-0x1409a01c3 size=9 type=0 succ=['0x1409a01c3', '0x1409a023d'] pred=['0x1409a01b1']
// BB 0x1409a01c3-0x1409a01d7 size=20 type=0 succ=['0x1409a01d7'] pred=['0x1409a01ba']
// BB 0x1409a01d7-0x1409a01ff size=40 type=0 succ=['0x1409a01ff', '0x1409a0317'] pred=['0x1409a01c3']
// BB 0x1409a01ff-0x1409a0204 size=5 type=0 succ=['0x1409a0204', '0x1409a0219'] pred=['0x1409a01d7']
// BB 0x1409a0204-0x1409a0219 size=21 type=0 succ=['0x1409a0219'] pred=['0x1409a01ff', '0x1409a0317']
// BB 0x1409a0219-0x1409a022f size=22 type=0 succ=['0x1409a022f', '0x1409a023d'] pred=['0x1409a01ff', '0x1409a0204']
// BB 0x1409a022f-0x1409a023d size=14 type=0 succ=['0x1409a023d'] pred=['0x1409a0219']
// BB 0x1409a023d-0x1409a025b size=30 type=0 succ=['0x1409a025b'] pred=['0x1409a018f', '0x1409a01b1', '0x1409a01ba', '0x1409a0219', '0x1409a022f']
// BB 0x1409a025b-0x1409a026a size=15 type=0 succ=['0x14099e04b'] pred=['0x1409a023d']
// BB 0x1409a026a-0x1409a0273 size=9 type=0 succ=['0x1409a0273'] pred=['0x14099ed9f']
// BB 0x1409a0273-0x1409a0278 size=5 type=4 succ=[] pred=['0x1409a026a', '0x1409a079e']
// BB 0x1409a0279-0x1409a027e size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a027e-0x1409a0280 size=2 type=0 succ=['0x1409a0280'] pred=['0x14099ee42']
// BB 0x1409a0280-0x1409a028c size=12 type=4 succ=[] pred=['0x1409a027e', '0x1409a0786']
// BB 0x1409a028d-0x1409a0292 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0292-0x1409a0294 size=2 type=0 succ=['0x1409a0294'] pred=['0x14099fde6']
// BB 0x1409a0294-0x1409a029b size=7 type=0 succ=['0x1409a029b'] pred=['0x14099fe26', '0x1409a0292']
// BB 0x1409a029b-0x1409a02a6 size=11 type=4 succ=[] pred=['0x1409a0294']
// BB 0x1409a02a7-0x1409a02ac size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a02ac-0x1409a02ae size=2 type=0 succ=['0x1409a02ae'] pred=['0x14099f78d']
// BB 0x1409a02ae-0x1409a02b5 size=7 type=0 succ=['0x1409a02b5'] pred=['0x14099f7c5', '0x1409a02ac']
// BB 0x1409a02b5-0x1409a02c0 size=11 type=4 succ=[] pred=['0x1409a02ae']
// BB 0x1409a02c1-0x1409a02c6 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a02c6-0x1409a02ee size=40 type=0 succ=['0x1409a02ee'] pred=['0x14099df5b']
// BB 0x1409a02ee-0x1409a0317 size=41 type=0 succ=['0x14099df8b'] pred=['0x1409a02c6']
// BB 0x1409a0317-0x1409a0353 size=60 type=0 succ=['0x1409a0204'] pred=['0x1409a01d7']
// BB 0x1409a0353-0x1409a0361 size=14 type=0 succ=['0x1409a0361'] pred=['0x14099e273']
// BB 0x1409a0361-0x1409a038c size=43 type=4 succ=[] pred=['0x1409a0353']
// BB 0x1409a038d-0x1409a0392 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0392-0x1409a03a0 size=14 type=0 succ=['0x1409a03a0'] pred=['0x14099e434']
// BB 0x1409a03a0-0x1409a03cb size=43 type=4 succ=[] pred=['0x1409a0392']
// BB 0x1409a03cc-0x1409a03d1 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a03d1-0x1409a03df size=14 type=0 succ=['0x1409a03df'] pred=['0x14099e4fb']
// BB 0x1409a03df-0x1409a040a size=43 type=4 succ=[] pred=['0x1409a03d1']
// BB 0x1409a040b-0x1409a0410 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0410-0x1409a044c size=60 type=0 succ=['0x14099eb38'] pred=['0x14099eb12']
// BB 0x1409a044c-0x1409a0481 size=53 type=0 succ=['0x14099e642'] pred=['0x14099e615']
// BB 0x1409a0481-0x1409a0488 size=7 type=0 succ=['0x1409a0488'] pred=['0x14099e112']
// BB 0x1409a0488-0x1409a0494 size=12 type=4 succ=[] pred=['0x1409a0481']
// BB 0x1409a0495-0x1409a049a size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a049a-0x1409a04c5 size=43 type=4 succ=[] pred=['0x14099f131']
// BB 0x1409a04c6-0x1409a04cb size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a04cb-0x1409a04d7 size=12 type=4 succ=[] pred=['0x14099ece8']
// BB 0x1409a04d8-0x1409a04dd size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a04dd-0x1409a04ec size=15 type=4 succ=[] pred=['0x14099e68d']
// BB 0x1409a04ed-0x1409a04f2 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a04f2-0x1409a0501 size=15 type=4 succ=[] pred=['0x14099e6c0']
// BB 0x1409a0502-0x1409a0507 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0507-0x1409a0516 size=15 type=4 succ=[] pred=['0x14099e776']
// BB 0x1409a0517-0x1409a051c size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a051c-0x1409a052b size=15 type=4 succ=[] pred=['0x14099e80d']
// BB 0x1409a052c-0x1409a0531 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0531-0x1409a0540 size=15 type=4 succ=[] pred=['0x14099e82a']
// BB 0x1409a0541-0x1409a0546 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0546-0x1409a0555 size=15 type=4 succ=[] pred=['0x14099e87e']
// BB 0x1409a0556-0x1409a055b size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a055b-0x1409a056a size=15 type=4 succ=[] pred=['0x14099e934']
// BB 0x1409a056b-0x1409a0570 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0570-0x1409a057f size=15 type=4 succ=[] pred=['0x14099e203']
// BB 0x1409a0580-0x1409a0585 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0585-0x1409a0594 size=15 type=4 succ=[] pred=['0x14099e2f3']
// BB 0x1409a0595-0x1409a059a size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a059a-0x1409a05a9 size=15 type=4 succ=[] pred=['0x14099e388']
// BB 0x1409a05aa-0x1409a05af size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a05af-0x1409a05be size=15 type=4 succ=[] pred=['0x14099e3a5']
// BB 0x1409a05bf-0x1409a05c4 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a05c4-0x1409a05d3 size=15 type=4 succ=[] pred=['0x14099e4b4']
// BB 0x1409a05d4-0x1409a05d9 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a05d9-0x1409a05e8 size=15 type=4 succ=[] pred=['0x14099fdc9']
// BB 0x1409a05e9-0x1409a05ee size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a05ee-0x1409a05fd size=15 type=4 succ=[] pred=['0x14099fd1d']
// BB 0x1409a05fe-0x1409a0603 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0603-0x1409a0612 size=15 type=4 succ=[] pred=['0x14099fcd2']
// BB 0x1409a0613-0x1409a0618 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0618-0x1409a0627 size=15 type=4 succ=[] pred=['0x14099fcb5']
// BB 0x1409a0628-0x1409a062d size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a062d-0x1409a063c size=15 type=4 succ=[] pred=['0x14099fc19']
// BB 0x1409a063d-0x1409a0642 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0642-0x1409a0651 size=15 type=4 succ=[] pred=['0x14099fb69']
// BB 0x1409a0652-0x1409a0657 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0657-0x1409a0666 size=15 type=4 succ=[] pred=['0x14099fb3c']
// BB 0x1409a0667-0x1409a066c size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a066c-0x1409a067b size=15 type=4 succ=[] pred=['0x14099f770']
// BB 0x1409a067c-0x1409a0681 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0681-0x1409a0690 size=15 type=4 succ=[] pred=['0x14099f6c0']
// BB 0x1409a0691-0x1409a0696 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0696-0x1409a06a5 size=15 type=4 succ=[] pred=['0x14099f664']
// BB 0x1409a06a6-0x1409a06ab size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a06ab-0x1409a06ba size=15 type=4 succ=[] pred=['0x14099f647']
// BB 0x1409a06bb-0x1409a06c0 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a06c0-0x1409a06cf size=15 type=4 succ=[] pred=['0x14099f5ab']
// BB 0x1409a06d0-0x1409a06d5 size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a06d5-0x1409a06e4 size=15 type=4 succ=[] pred=['0x14099f4f8']
// BB 0x1409a06e5-0x1409a06ea size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a06ea-0x1409a06f9 size=15 type=4 succ=[] pred=['0x14099f4cb']
// BB 0x1409a06fa-0x1409a06ff size=5 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a06ff-0x1409a0719 size=26 type=4 succ=[] pred=['0x14099f179', '0x14099f17e']
// BB 0x1409a071a-0x1409a071c size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a071c-0x1409a072b size=15 type=4 succ=[] pred=['0x14099f323']
// BB 0x1409a072c-0x1409a072e size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a072e-0x1409a073d size=15 type=4 succ=[] pred=['0x14099f26e']
// BB 0x1409a073e-0x1409a0740 size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0740-0x1409a074f size=15 type=4 succ=[] pred=['0x14099f23b']
// BB 0x1409a0750-0x1409a0752 size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0752-0x1409a0761 size=15 type=4 succ=[] pred=['0x14099f929']
// BB 0x1409a0762-0x1409a0764 size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0764-0x1409a0771 size=13 type=4 succ=[] pred=['0x14099f877']
// BB 0x1409a0772-0x1409a0774 size=2 type=0 succ=['0x1409a0784'] pred=[]
// BB 0x1409a0774-0x1409a0783 size=15 type=4 succ=[] pred=['0x14099f85a']
// BB 0x1409a0784-0x1409a0786 size=2 type=0 succ=[] pred=['0x14099e98f', '0x1409a0279', '0x1409a028d', '0x1409a02a7', '0x1409a02c1', '0x1409a038d', '0x1409a03cc', '0x1409a040b', '0x1409a0495', '0x1409a04c6', '0x1409a04d8', '0x1409a04ed', '0x1409a0502', '0x1409a0517', '0x1409a052c', '0x1409a0541', '0x1409a0556', '0x1409a056b', '0x1409a0580', '0x1409a0595', '0x1409a05aa', '0x1409a05bf', '0x1409a05d4', '0x1409a05e9', '0x1409a05fe', '0x1409a0613', '0x1409a0628', '0x1409a063d', '0x1409a0652', '0x1409a0667', '0x1409a067c', '0x1409a0691', '0x1409a06a6', '0x1409a06bb', '0x1409a06d0', '0x1409a06e5', '0x1409a06fa', '0x1409a071a', '0x1409a072c', '0x1409a073e', '0x1409a0750', '0x1409a0762', '0x1409a0772']
// BB 0x1409a0786-0x1409a079e size=24 type=0 succ=['0x1409a0280'] pred=['0x14099ee58']
// BB 0x1409a079e-0x1409a07ab size=13 type=0 succ=['0x1409a0273'] pred=['0x14099edb6']

// --- full disassembly ---
/*14099dee0*/ sub_14099DEE0: push rbp
/*14099dee1*/  push r15
/*14099dee3*/  push r14
/*14099dee5*/  push r13
/*14099dee7*/  push r12
/*14099dee9*/  push rsi
/*14099deea*/  push rdi
/*14099deeb*/  push rbx
/*14099deec*/  sub rsp, 258h
/*14099def3*/  lea rbp, [rsp+80h]
/*14099defb*/  movaps [rbp+210h+var_50], xmm7
/*14099df02*/  movdqa [rbp+210h+var_60], xmm6
/*14099df0a*/  mov [rbp+210h+var_68], 0FFFFFFFFFFFFFFFEh
/*14099df15*/  mov rbx, r8
/*14099df18*/  mov rdi, rdx
/*14099df1b*/  mov rsi, rcx
/*14099df1e*/  mov qword ptr [rbp+210h+var_120], 0
/*14099df29*/  mov qword ptr [rbp+210h+var_120+8], 1
/*14099df34*/  mov [rbp+210h+var_110], 0
/*14099df3f*/  cmp byte ptr [rdx+6Ch], 0
/*14099df43*/  jz short loc_14099DF50
/*14099df45*/  mov r13d, 1
/*14099df4b*/  xor r14d, r14d
/*14099df4e*/  jmp short loc_14099DFAF
/*14099df50*/ loc_14099DF50: mov byte ptr [rdi+6Ch], 1
/*14099df54*/  mov [rbp+210h+var_69], 1
/*14099df5b*/ loc_14099DF5B: lea rcx, [rbp+210h+var_90]
/*14099df62*/  mov rdx, rdi
/*14099df65*/  call sub_1409A1D40
/*14099df6a*/  nop
/*14099df6b*/  mov r12, qword ptr [rbp+210h+var_90+8]
/*14099df72*/  mov r15, qword ptr [rbp+210h+var_80]
/*14099df79*/  test r15, r15
/*14099df7c*/  jnz loc_1409A02C6
/*14099df82*/  mov r13d, 1
/*14099df88*/  xor r14d, r14d
/*14099df8b*/ loc_14099DF8B: add r14, r15
/*14099df8e*/  mov [rbp+210h+var_110], r14
/*14099df95*/  mov rdx, qword ptr [rbp+210h+var_90]
/*14099df9c*/  test rdx, rdx
/*14099df9f*/  jz short loc_14099DFAF
/*14099dfa1*/  mov r8d, 1
/*14099dfa7*/  mov rcx, r12
/*14099dfaa*/  call sub_140001660
/*14099dfaf*/ loc_14099DFAF: mov [rbp+210h+var_69], 1
/*14099dfb6*/  lea rcx, aChoices_1; "choices"
/*14099dfbd*/  mov edx, 7
/*14099dfc2*/  mov r8, rbx
/*14099dfc5*/  call sub_141433D50
/*14099dfca*/  nop
/*14099dfcb*/  test rax, rax
/*14099dfce*/  jz short loc_14099E034
/*14099dfd0*/  cmp byte ptr [rax], 4
/*14099dfd3*/  jnz short loc_14099E034
/*14099dfd5*/  cmp qword ptr [rax+18h], 0
/*14099dfda*/  jz short loc_14099E034
/*14099dfdc*/  mov r8, [rax+10h]
/*14099dfe0*/  mov [rbp+210h+var_69], 1
/*14099dfe7*/  lea rcx, aDelta_2; "delta"
/*14099dfee*/  mov edx, 5
/*14099dff3*/  mov [rbp+210h+var_170], r8
/*14099dffa*/  call sub_141433D50
/*14099dfff*/  nop
/*14099e000*/  test rax, rax
/*14099e003*/  jz short loc_14099E06D
/*14099e005*/  movzx ecx, byte ptr [rax]
/*14099e008*/  lea rdx, jpt_14099E016
/*14099e00f*/  movsxd rcx, ds:(jpt_14099E016 - 1417AA5E4h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*14099e013*/  add rcx, rdx
/*14099e016*/  jmp rcx; switch jump  // switch jump
/*14099e018*/ loc_14099E018: movups xmm0, xmmword ptr [rax]; jumptable 000000014099E016 cases 1,2  // jumptable 000000014099E016 cases 1,2
/*14099e01b*/  movdqu xmm1, xmmword ptr [rax+10h]
/*14099e020*/  movdqa [rbp+210h+var_80], xmm1
/*14099e028*/  movaps [rbp+210h+var_90], xmm0
/*14099e02f*/  jmp loc_14099E156
/*14099e034*/ loc_14099E034: mov rax, [rbp+210h+var_110]
/*14099e03b*/  mov [rsi+10h], rax
/*14099e03f*/  movdqu xmm0, [rbp+210h+var_120]
/*14099e047*/  movdqu xmmword ptr [rsi], xmm0
/*14099e04b*/ loc_14099E04B: movaps xmm6, [rbp+210h+var_60]
/*14099e052*/  movaps xmm7, [rbp+210h+var_50]
/*14099e059*/  add rsp, 258h
/*14099e060*/  pop rbx
/*14099e061*/  pop rdi
/*14099e062*/  pop rsi
/*14099e063*/  pop r12
/*14099e065*/  pop r13
/*14099e067*/  pop r14
/*14099e069*/  pop r15
/*14099e06b*/  pop rbp
/*14099e06c*/  retn
/*14099e06d*/ loc_14099E06D: mov byte ptr [rbp+210h+var_90], 0
/*14099e074*/  movdqu xmm0, [rbp+210h+var_80]
/*14099e07c*/  movdqa [rbp+210h+var_1F0], xmm0
/*14099e081*/  movzx eax, byte ptr [rbp+210h+var_90]
/*14099e088*/  mov [rbp+210h+var_200], al
/*14099e08b*/  mov rax, qword ptr [rbp+210h+var_90+1]
/*14099e092*/  mov [rbp+210h+var_1FF], rax
/*14099e096*/  mov eax, dword ptr [rbp+210h+var_90+9]
/*14099e09c*/  mov [rbp+210h+var_1F7], eax
/*14099e09f*/  movzx eax, word ptr [rbp+210h+var_90+0Dh]
/*14099e0a6*/  mov [rbp+210h+var_1F3], ax
/*14099e0aa*/  movzx eax, byte ptr [rbp+210h+var_90+0Fh]
/*14099e0b1*/  mov [rbp+210h+var_1F1], al
/*14099e0b4*/  jmp loc_14099E1B5
/*14099e0b9*/ loc_14099E0B9: lea rcx, [rbp+210h+var_90+8]; jumptable 000000014099E016 case 4  // jumptable 000000014099E016 case 4
/*14099e0c0*/  mov rdx, [rax+10h]
/*14099e0c4*/  mov r8, [rax+18h]
/*14099e0c8*/  mov [rbp+210h+var_69], 1
/*14099e0cf*/  call sub_1402CE260
/*14099e0d4*/  nop
/*14099e0d5*/  mov byte ptr [rbp+210h+var_90], 4
/*14099e0dc*/  jmp short loc_14099E156
/*14099e0de*/ loc_14099E0DE: mov byte ptr [rbp+210h+var_90], 0; jumptable 000000014099E016 case 0  // jumptable 000000014099E016 case 0
/*14099e0e5*/  jmp short loc_14099E156
/*14099e0e7*/ loc_14099E0E7: add rax, 8; jumptable 000000014099E016 case 3  // jumptable 000000014099E016 case 3
/*14099e0eb*/  lea rcx, [rbp+210h+var_90+8]
/*14099e0f2*/  mov [rbp+210h+var_69], 1
/*14099e0f9*/  mov rdx, rax
/*14099e0fc*/  call sub_14149C500
/*14099e101*/  nop
/*14099e102*/  mov byte ptr [rbp+210h+var_90], 3
/*14099e109*/  jmp short loc_14099E156
/*14099e10b*/ loc_14099E10B: cmp qword ptr [rax+18h], 0; jumptable 000000014099E016 case 5  // jumptable 000000014099E016 case 5
/*14099e110*/  jz short loc_14099E139
/*14099e112*/  mov rdx, [rax+8]
/*14099e116*/  test rdx, rdx
/*14099e119*/  jz loc_1409A0481
/*14099e11f*/  lea rcx, [rbp+210h+var_90+8]
/*14099e126*/  mov r8, [rax+10h]
/*14099e12a*/  mov [rbp+210h+var_69], 1
/*14099e131*/  call sub_1402CCD80
/*14099e136*/  nop
/*14099e137*/  jmp short loc_14099E14F
/*14099e139*/ loc_14099E139: mov qword ptr [rbp+210h+var_90+8], 0
/*14099e144*/  mov qword ptr [rbp+210h+var_80+8], 0
/*14099e14f*/ loc_14099E14F: mov byte ptr [rbp+210h+var_90], 5
/*14099e156*/ loc_14099E156: movzx eax, byte ptr [rbp+210h+var_90]
/*14099e15d*/  mov rcx, qword ptr [rbp+210h+var_90+1]
/*14099e164*/  mov edx, dword ptr [rbp+210h+var_90+9]
/*14099e16a*/  movzx r8d, word ptr [rbp+210h+var_90+0Dh]
/*14099e172*/  movzx r9d, byte ptr [rbp+210h+var_90+0Fh]
/*14099e17a*/  movdqa xmm0, [rbp+210h+var_80]
/*14099e182*/  movdqa [rbp+210h+var_1F0], xmm0
/*14099e187*/  mov [rbp+210h+var_200], al
/*14099e18a*/  mov [rbp+210h+var_1FF], rcx
/*14099e18e*/  mov [rbp+210h+var_1F7], edx
/*14099e191*/  mov [rbp+210h+var_1F3], r8w
/*14099e196*/  mov [rbp+210h+var_1F1], r9b
/*14099e19a*/  mov byte ptr [rbp+210h+var_90], 0
/*14099e1a1*/  mov [rbp+210h+var_69], 1
/*14099e1a8*/  lea rcx, [rbp+210h+var_90]
/*14099e1af*/  call sub_1400104F0
/*14099e1b4*/  nop
/*14099e1b5*/ loc_14099E1B5: lea rcx, aContent_6; "content"
/*14099e1bc*/  lea r8, [rbp+210h+var_200]
/*14099e1c0*/  mov edx, 7
/*14099e1c5*/  call sub_141433D50
/*14099e1ca*/  nop
/*14099e1cb*/  test rax, rax
/*14099e1ce*/  jz loc_14099EB7F
/*14099e1d4*/  cmp byte ptr [rax], 3
/*14099e1d7*/  jnz loc_14099EB7F
/*14099e1dd*/  mov r15, [rax+18h]
/*14099e1e1*/  test r15, r15
/*14099e1e4*/  jz loc_14099EB7F
/*14099e1ea*/  mov rax, [rax+10h]
/*14099e1ee*/  mov [rbp+210h+var_168], rax
/*14099e1f5*/  cmp dword ptr [rdi+30h], 1
/*14099e1f9*/  jnz short loc_14099E203
/*14099e1fb*/  mov ebx, [rdi+34h]
/*14099e1fe*/  jmp loc_14099E68D
/*14099e203*/ loc_14099E203: mov ebx, [rdi+68h]
/*14099e206*/  lea eax, [rbx+1]
/*14099e209*/  mov [rdi+68h], eax
/*14099e20c*/  mov dword ptr [rdi+30h], 1
/*14099e213*/  mov [rdi+34h], ebx
/*14099e216*/  mov qword ptr [rbp+210h+var_108], 0
/*14099e221*/  mov [rbp+210h+var_F8], 0
/*14099e22c*/  call nullsub_1
/*14099e231*/  mov ecx, 4
/*14099e236*/  mov edx, 1
/*14099e23b*/  call sub_140001650
/*14099e240*/  test rax, rax
/*14099e243*/  jz loc_1409A0570
/*14099e249*/  mov dword ptr [rax], 65707974h
/*14099e24f*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e25a*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e261*/  mov [rbp+210h+var_E0], 4
/*14099e26c*/  mov [rbp+210h+var_91], 1
/*14099e273*/ loc_14099E273: lea rdx, off_1417A58C8; "content_block_start"
/*14099e27a*/  lea rcx, [rbp+210h+var_90]
/*14099e281*/  call sub_140B56640
/*14099e286*/  nop
/*14099e287*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e28e*/  jz loc_1409A0353
/*14099e294*/  movdqu xmm0, [rbp+210h+var_90]
/*14099e29c*/  movdqu xmm1, [rbp+210h+var_80]
/*14099e2a4*/  movdqa [rbp+210h+var_B0], xmm1
/*14099e2ac*/  movdqa [rbp+210h+var_C0], xmm0
/*14099e2b4*/  mov [rbp+210h+var_91], 0
/*14099e2bb*/  lea rcx, [rbp+210h+var_90]
/*14099e2c2*/  lea rdx, [rbp+210h+var_108]
/*14099e2c9*/  lea r8, [rbp+210h+var_F0]
/*14099e2d0*/  lea r9, [rbp+210h+var_C0]
/*14099e2d7*/  call sub_140307860
/*14099e2dc*/  nop
/*14099e2dd*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e2e4*/  jz short loc_14099E2F3
/*14099e2e6*/ loc_14099E2E6: lea rcx, [rbp+210h+var_90]
/*14099e2ed*/  call sub_1400104F0
/*14099e2f2*/  nop
/*14099e2f3*/ loc_14099E2F3: call nullsub_1
/*14099e2f8*/  mov ecx, 5
/*14099e2fd*/  mov edx, 1
/*14099e302*/  call sub_140001650
/*14099e307*/  test rax, rax
/*14099e30a*/  jz loc_1409A0585
/*14099e310*/  mov byte ptr [rax+4], 78h ; 'x'
/*14099e314*/  mov dword ptr [rax], 65646E69h
/*14099e31a*/  mov qword ptr [rbp+210h+var_F0], 5
/*14099e325*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e32c*/  mov [rbp+210h+var_E0], 5
/*14099e337*/  mov byte ptr [rbp+210h+var_90], 2
/*14099e33e*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099e349*/  mov qword ptr [rbp+210h+var_80], rbx
/*14099e350*/  lea rcx, [rbp+210h+var_C0]
/*14099e357*/  lea rdx, [rbp+210h+var_108]
/*14099e35e*/  lea r8, [rbp+210h+var_F0]
/*14099e365*/  lea r9, [rbp+210h+var_90]
/*14099e36c*/  call sub_140307860
/*14099e371*/  nop
/*14099e372*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099e379*/  jz short loc_14099E388
/*14099e37b*/  lea rcx, [rbp+210h+var_C0]
/*14099e382*/  call sub_1400104F0
/*14099e387*/  nop
/*14099e388*/ loc_14099E388: call nullsub_1
/*14099e38d*/  mov ecx, 0Dh
/*14099e392*/  mov edx, 1
/*14099e397*/  call sub_140001650
/*14099e39c*/  test rax, rax
/*14099e39f*/  jz loc_1409A059A
/*14099e3a5*/  mov rcx, 6B636F6C625F746Eh
/*14099e3af*/  mov [rax+5], rcx
/*14099e3b3*/  mov rcx, 5F746E65746E6F63h
/*14099e3bd*/  mov [rax], rcx
/*14099e3c0*/  mov [rbp+210h+var_1A0], 0Dh
/*14099e3c8*/  mov [rbp+210h+var_198], rax
/*14099e3cc*/  mov qword ptr [rbp+210h+var_190], 0Dh
/*14099e3d7*/  mov qword ptr [rbp+210h+var_160], 0
/*14099e3e2*/  mov [rbp+210h+var_150], 0
/*14099e3ed*/  call nullsub_1
/*14099e3f2*/  mov ecx, 4
/*14099e3f7*/  mov edx, 1
/*14099e3fc*/  call sub_140001650
/*14099e401*/  test rax, rax
/*14099e404*/  jz loc_1409A05AF
/*14099e40a*/  mov dword ptr [rax], 65707974h
/*14099e410*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e41b*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e422*/  mov [rbp+210h+var_E0], 4
/*14099e42d*/  mov [rbp+210h+var_92], 1
/*14099e434*/ loc_14099E434: lea rdx, off_1417A4688; "text"
/*14099e43b*/  lea rcx, [rbp+210h+var_90]
/*14099e442*/  call sub_140B56640
/*14099e447*/  nop
/*14099e448*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e44f*/  jz loc_1409A0392
/*14099e455*/  movdqu xmm0, [rbp+210h+var_90]
/*14099e45d*/  movdqu xmm1, [rbp+210h+var_80]
/*14099e465*/  movdqa [rbp+210h+var_B0], xmm1
/*14099e46d*/  movdqa [rbp+210h+var_C0], xmm0
/*14099e475*/  mov [rbp+210h+var_92], 0
/*14099e47c*/  lea rcx, [rbp+210h+var_90]
/*14099e483*/  lea rdx, [rbp+210h+var_160]
/*14099e48a*/  lea r8, [rbp+210h+var_F0]
/*14099e491*/  lea r9, [rbp+210h+var_C0]
/*14099e498*/  call sub_140307860
/*14099e49d*/  nop
/*14099e49e*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e4a5*/  jz short loc_14099E4B4
/*14099e4a7*/ loc_14099E4A7: lea rcx, [rbp+210h+var_90]
/*14099e4ae*/  call sub_1400104F0
/*14099e4b3*/  nop
/*14099e4b4*/ loc_14099E4B4: call nullsub_1
/*14099e4b9*/  mov ecx, 4
/*14099e4be*/  mov edx, 1
/*14099e4c3*/  call sub_140001650
/*14099e4c8*/  test rax, rax
/*14099e4cb*/  jz loc_1409A05C4
/*14099e4d1*/  mov dword ptr [rax], 74786574h
/*14099e4d7*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e4e2*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e4e9*/  mov [rbp+210h+var_E0], 4
/*14099e4f4*/  mov [rbp+210h+var_93], 1
/*14099e4fb*/ loc_14099E4FB: lea rdx, unk_1417A5900
/*14099e502*/  lea rcx, [rbp+210h+var_90]
/*14099e509*/  call sub_140B56640
/*14099e50e*/  nop
/*14099e50f*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e516*/  jz loc_1409A03D1
/*14099e51c*/  movdqu xmm0, [rbp+210h+var_90]
/*14099e524*/  movdqu xmm1, [rbp+210h+var_80]
/*14099e52c*/  movdqa [rbp+210h+var_B0], xmm1
/*14099e534*/  movdqa [rbp+210h+var_C0], xmm0
/*14099e53c*/  mov [rbp+210h+var_93], 0
/*14099e543*/  lea rcx, [rbp+210h+var_90]
/*14099e54a*/  lea rdx, [rbp+210h+var_160]
/*14099e551*/  lea r8, [rbp+210h+var_F0]
/*14099e558*/  lea r9, [rbp+210h+var_C0]
/*14099e55f*/  call sub_140307860
/*14099e564*/  nop
/*14099e565*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099e56c*/  jz short loc_14099E57B
/*14099e56e*/ loc_14099E56E: lea rcx, [rbp+210h+var_90]
/*14099e575*/  call sub_1400104F0
/*14099e57a*/  nop
/*14099e57b*/ loc_14099E57B: movdqu xmm0, [rbp+210h+var_160]
/*14099e583*/  movdqu [rbp+210h+var_90+8], xmm0
/*14099e58b*/  mov rax, [rbp+210h+var_150]
/*14099e592*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099e599*/  mov byte ptr [rbp+210h+var_90], 5
/*14099e5a0*/  mov [rbp+210h+var_C1], 0
/*14099e5a7*/ loc_14099E5A7: lea rcx, [rbp+210h+var_C0]
/*14099e5ae*/  lea rdx, [rbp+210h+var_108]
/*14099e5b5*/  lea r8, [rbp+210h+var_1A0]
/*14099e5b9*/  lea r9, [rbp+210h+var_90]
/*14099e5c0*/  call sub_140307860
/*14099e5c5*/  nop
/*14099e5c6*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099e5cd*/  jz short loc_14099E5DC
/*14099e5cf*/ loc_14099E5CF: lea rcx, [rbp+210h+var_C0]
/*14099e5d6*/  call sub_1400104F0
/*14099e5db*/  nop
/*14099e5dc*/ loc_14099E5DC: movdqu xmm0, [rbp+210h+var_108]
/*14099e5e4*/  movdqu [rbp+210h+var_90+8], xmm0
/*14099e5ec*/  mov rax, [rbp+210h+var_F8]
/*14099e5f3*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099e5fa*/  mov byte ptr [rbp+210h+var_90], 5
/*14099e601*/ loc_14099E601: lea rcx, [rbp+210h+var_C0]
/*14099e608*/  lea rdx, [rbp+210h+var_90]
/*14099e60f*/  call sub_140A5ED20
/*14099e614*/  nop
/*14099e615*/ loc_14099E615: mov rax, qword ptr [rbp+210h+var_C0+8]
/*14099e61c*/  mov [rbp+210h+var_130], rax
/*14099e623*/  mov r12, qword ptr [rbp+210h+var_B0]
/*14099e62a*/  mov rax, qword ptr [rbp+210h+var_120]
/*14099e631*/  sub rax, r14
/*14099e634*/  cmp r12, rax
/*14099e637*/  ja loc_1409A044C
/*14099e63d*/  test r12, r12
/*14099e640*/  jz short loc_14099E657
/*14099e642*/ loc_14099E642: add r13, r14
/*14099e645*/  mov rcx, r13
/*14099e648*/  mov rdx, [rbp+210h+var_130]
/*14099e64f*/  mov r8, r12
/*14099e652*/  call sub_141684120
/*14099e657*/ loc_14099E657: add r14, r12
/*14099e65a*/  mov [rbp+210h+var_110], r14
/*14099e661*/  mov rdx, qword ptr [rbp+210h+var_C0]
/*14099e668*/  test rdx, rdx
/*14099e66b*/  jz short loc_14099E680
/*14099e66d*/  mov r8d, 1
/*14099e673*/  mov rcx, [rbp+210h+var_130]
/*14099e67a*/  call sub_140001660
/*14099e67f*/  nop
/*14099e680*/ loc_14099E680: lea rcx, [rbp+210h+var_90]
/*14099e687*/  call sub_1400104F0
/*14099e68c*/  nop
/*14099e68d*/ loc_14099E68D: mov qword ptr [rbp+210h+var_108], 0
/*14099e698*/  mov [rbp+210h+var_F8], 0
/*14099e6a3*/  call nullsub_1
/*14099e6a8*/  mov ecx, 4
/*14099e6ad*/  mov edx, 1
/*14099e6b2*/  call sub_140001650
/*14099e6b7*/  test rax, rax
/*14099e6ba*/  jz loc_1409A04DD
/*14099e6c0*/  mov dword ptr [rax], 65707974h
/*14099e6c6*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e6d1*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e6d8*/  mov [rbp+210h+var_E0], 4
/*14099e6e3*/  call nullsub_1
/*14099e6e8*/  mov ecx, 13h
/*14099e6ed*/  mov edx, 1
/*14099e6f2*/  call sub_140001650
/*14099e6f7*/  test rax, rax
/*14099e6fa*/  mov [rbp+210h+var_130], rax
/*14099e701*/  jz loc_1409A04F2
/*14099e707*/  movdqu xmm0, xmmword ptr cs:aContentBlockDe; "content_block_delta"
/*14099e70f*/  movdqu xmmword ptr [rax], xmm0
/*14099e713*/  mov dword ptr [rax+0Fh], 61746C65h
/*14099e71a*/  mov byte ptr [rbp+210h+var_90], 3
/*14099e721*/  mov qword ptr [rbp+210h+var_90+8], 13h
/*14099e72c*/  mov qword ptr [rbp+210h+var_80], rax
/*14099e733*/  mov qword ptr [rbp+210h+var_80+8], 13h
/*14099e73e*/ loc_14099E73E: lea rcx, [rbp+210h+var_C0]
/*14099e745*/  lea rdx, [rbp+210h+var_108]
/*14099e74c*/  lea r8, [rbp+210h+var_F0]
/*14099e753*/  lea r9, [rbp+210h+var_90]
/*14099e75a*/  call sub_140307860
/*14099e75f*/  nop
/*14099e760*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099e767*/  jz short loc_14099E776
/*14099e769*/ loc_14099E769: lea rcx, [rbp+210h+var_C0]
/*14099e770*/  call sub_1400104F0
/*14099e775*/  nop
/*14099e776*/ loc_14099E776: call nullsub_1
/*14099e77b*/  mov ecx, 5
/*14099e780*/  mov edx, 1
/*14099e785*/  call sub_140001650
/*14099e78a*/  test rax, rax
/*14099e78d*/  jz loc_1409A0507
/*14099e793*/  mov byte ptr [rax+4], 78h ; 'x'
/*14099e797*/  mov dword ptr [rax], 65646E69h
/*14099e79d*/  mov qword ptr [rbp+210h+var_F0], 5
/*14099e7a8*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e7af*/  mov [rbp+210h+var_E0], 5
/*14099e7ba*/  mov eax, ebx
/*14099e7bc*/  mov byte ptr [rbp+210h+var_90], 2
/*14099e7c3*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099e7ce*/  mov qword ptr [rbp+210h+var_80], rax
/*14099e7d5*/  lea rcx, [rbp+210h+var_C0]
/*14099e7dc*/  lea rdx, [rbp+210h+var_108]
/*14099e7e3*/  lea r8, [rbp+210h+var_F0]
/*14099e7ea*/  lea r9, [rbp+210h+var_90]
/*14099e7f1*/  call sub_140307860
/*14099e7f6*/  nop
/*14099e7f7*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099e7fe*/  jz short loc_14099E80D
/*14099e800*/  lea rcx, [rbp+210h+var_C0]
/*14099e807*/  call sub_1400104F0
/*14099e80c*/  nop
/*14099e80d*/ loc_14099E80D: call nullsub_1
/*14099e812*/  mov ecx, 5
/*14099e817*/  mov edx, 1
/*14099e81c*/  call sub_140001650
/*14099e821*/  test rax, rax
/*14099e824*/  jz loc_1409A051C
/*14099e82a*/  mov byte ptr [rax+4], 61h ; 'a'
/*14099e82e*/  mov dword ptr [rax], 746C6564h
/*14099e834*/  mov [rbp+210h+var_1A0], 5
/*14099e83c*/  mov [rbp+210h+var_198], rax
/*14099e840*/  mov qword ptr [rbp+210h+var_190], 5
/*14099e84b*/  mov qword ptr [rbp+210h+var_160], 0
/*14099e856*/  mov [rbp+210h+var_150], 0
/*14099e861*/  call nullsub_1
/*14099e866*/  mov ecx, 4
/*14099e86b*/  mov edx, 1
/*14099e870*/  call sub_140001650
/*14099e875*/  test rax, rax
/*14099e878*/  jz loc_1409A0531
/*14099e87e*/  mov dword ptr [rax], 65707974h
/*14099e884*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e88f*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e896*/  mov [rbp+210h+var_E0], 4
/*14099e8a1*/  call nullsub_1
/*14099e8a6*/  mov ecx, 0Ah
/*14099e8ab*/  mov edx, 1
/*14099e8b0*/  call sub_140001650
/*14099e8b5*/  test rax, rax
/*14099e8b8*/  mov [rbp+210h+var_130], rax
/*14099e8bf*/  jz loc_1409A0546
/*14099e8c5*/  mov rcx, 6C65645F74786574h
/*14099e8cf*/  mov [rax], rcx
/*14099e8d2*/  mov word ptr [rax+8], 6174h
/*14099e8d8*/  mov byte ptr [rbp+210h+var_90], 3
/*14099e8df*/  mov qword ptr [rbp+210h+var_90+8], 0Ah
/*14099e8ea*/  mov qword ptr [rbp+210h+var_80], rax
/*14099e8f1*/  mov qword ptr [rbp+210h+var_80+8], 0Ah
/*14099e8fc*/ loc_14099E8FC: lea rcx, [rbp+210h+var_C0]
/*14099e903*/  lea rdx, [rbp+210h+var_160]
/*14099e90a*/  lea r8, [rbp+210h+var_F0]
/*14099e911*/  lea r9, [rbp+210h+var_90]
/*14099e918*/  call sub_140307860
/*14099e91d*/  nop
/*14099e91e*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099e925*/  jz short loc_14099E934
/*14099e927*/ loc_14099E927: lea rcx, [rbp+210h+var_C0]
/*14099e92e*/  call sub_1400104F0
/*14099e933*/  nop
/*14099e934*/ loc_14099E934: call nullsub_1
/*14099e939*/  mov ecx, 4
/*14099e93e*/  mov edx, 1
/*14099e943*/  call sub_140001650
/*14099e948*/  test rax, rax
/*14099e94b*/  jz loc_1409A055B
/*14099e951*/  mov dword ptr [rax], 74786574h
/*14099e957*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099e962*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099e969*/  mov [rbp+210h+var_E0], 4
/*14099e974*/  test r15, r15
/*14099e977*/  jns short loc_14099E994
/*14099e979*/  xor r12d, r12d
/*14099e97c*/ loc_14099E97C: mov [rbp+210h+var_C2], 1
/*14099e983*/ loc_14099E983: mov rcx, r12
/*14099e986*/  mov rdx, r15
/*14099e989*/  call sub_1416C2D4B
/*14099e98f*/ loc_14099E98F: jmp loc_1409A0784
/*14099e994*/ loc_14099E994: call nullsub_1
/*14099e999*/  mov r12d, 1
/*14099e99f*/  mov edx, 1
/*14099e9a4*/  mov rcx, r15
/*14099e9a7*/  call sub_140001650
/*14099e9ac*/  test rax, rax
/*14099e9af*/  jz short loc_14099E97C
/*14099e9b1*/  mov rbx, rax
/*14099e9b4*/  mov rcx, rax
/*14099e9b7*/  mov rdx, [rbp+210h+var_168]
/*14099e9be*/  mov r8, r15
/*14099e9c1*/  call sub_141684120
/*14099e9c6*/  mov byte ptr [rbp+210h+var_90], 3
/*14099e9cd*/  mov qword ptr [rbp+210h+var_90+8], r15
/*14099e9d4*/  mov qword ptr [rbp+210h+var_80], rbx
/*14099e9db*/  mov qword ptr [rbp+210h+var_80+8], r15
/*14099e9e2*/  mov [rbp+210h+var_C2], 0
/*14099e9e9*/ loc_14099E9E9: lea rcx, [rbp+210h+var_C0]
/*14099e9f0*/  lea r15, [rbp+210h+var_160]
/*14099e9f7*/  lea r8, [rbp+210h+var_F0]
/*14099e9fe*/  lea r9, [rbp+210h+var_90]
/*14099ea05*/  mov rdx, r15
/*14099ea08*/  call sub_140307860
/*14099ea0d*/  nop
/*14099ea0e*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099ea15*/  jz short loc_14099EA24
/*14099ea17*/ loc_14099EA17: lea rcx, [rbp+210h+var_C0]
/*14099ea1e*/  call sub_1400104F0
/*14099ea23*/  nop
/*14099ea24*/ loc_14099EA24: movdqu xmm0, [rbp+210h+var_160]
/*14099ea2c*/  movdqu [rbp+210h+var_90+8], xmm0
/*14099ea34*/  mov rax, [rbp+210h+var_150]
/*14099ea3b*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099ea42*/  mov byte ptr [rbp+210h+var_90], 5
/*14099ea49*/  mov [rbp+210h+var_C3], 0
/*14099ea50*/ loc_14099EA50: lea r13, [rbp+210h+var_C0]
/*14099ea57*/  lea rdx, [rbp+210h+var_108]
/*14099ea5e*/  lea r12, [rbp+210h+var_1A0]
/*14099ea62*/  lea r9, [rbp+210h+var_90]
/*14099ea69*/  mov rcx, r13
/*14099ea6c*/  mov r8, r12
/*14099ea6f*/  call sub_140307860
/*14099ea74*/  nop
/*14099ea75*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099ea7c*/  jz short loc_14099EA8B
/*14099ea7e*/ loc_14099EA7E: lea rcx, [rbp+210h+var_C0]
/*14099ea85*/  call sub_1400104F0
/*14099ea8a*/  nop
/*14099ea8b*/ loc_14099EA8B: movdqu xmm0, [rbp+210h+var_108]
/*14099ea93*/  movdqu [rbp+210h+var_C0+8], xmm0
/*14099ea9b*/  mov rax, [rbp+210h+var_F8]
/*14099eaa2*/  mov qword ptr [rbp+210h+var_B0+8], rax
/*14099eaa9*/  mov byte ptr [rbp+210h+var_C0], 5
/*14099eab0*/  lea rax, aContentBlockDe; "content_block_delta"
/*14099eab7*/  mov qword ptr [rbp+210h+var_160], rax
/*14099eabe*/  mov qword ptr [rbp+210h+var_160+8], 13h
/*14099eac9*/  mov [rbp+210h+var_1A0], r13
/*14099eacd*/  mov qword ptr [rbp+210h+var_90], r15
/*14099ead4*/  lea rax, sub_14041F680
/*14099eadb*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099eae2*/  mov qword ptr [rbp+210h+var_80], r12
/*14099eae9*/  lea rax, sub_140B982E0
/*14099eaf0*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099eaf7*/ loc_14099EAF7: lea rdx, unk_1417A94D0
/*14099eafe*/  lea rcx, [rbp+210h+var_F0]
/*14099eb05*/  lea r8, [rbp+210h+var_90]
/*14099eb0c*/  call sub_14149C0F0
/*14099eb11*/  nop
/*14099eb12*/ loc_14099EB12: mov rbx, qword ptr [rbp+210h+var_F0+8]
/*14099eb19*/  mov r15, [rbp+210h+var_E0]
/*14099eb20*/  mov rax, qword ptr [rbp+210h+var_120]
/*14099eb27*/  sub rax, r14
/*14099eb2a*/  cmp r15, rax
/*14099eb2d*/  ja loc_1409A0410
/*14099eb33*/  test r15, r15
/*14099eb36*/  jz short loc_14099EB4D
/*14099eb38*/ loc_14099EB38: mov rcx, qword ptr [rbp+210h+var_120+8]
/*14099eb3f*/  add rcx, r14
/*14099eb42*/  mov rdx, rbx
/*14099eb45*/  mov r8, r15
/*14099eb48*/  call sub_141684120
/*14099eb4d*/ loc_14099EB4D: add r14, r15
/*14099eb50*/  mov [rbp+210h+var_110], r14
/*14099eb57*/  mov rdx, qword ptr [rbp+210h+var_F0]
/*14099eb5e*/  test rdx, rdx
/*14099eb61*/  jz short loc_14099EB72
/*14099eb63*/  mov r8d, 1
/*14099eb69*/  mov rcx, rbx
/*14099eb6c*/  call sub_140001660
/*14099eb71*/  nop
/*14099eb72*/ loc_14099EB72: lea rcx, [rbp+210h+var_C0]
/*14099eb79*/  call sub_1400104F0
/*14099eb7e*/  nop
/*14099eb7f*/ loc_14099EB7F: lea rcx, aToolCalls; "tool_calls"
/*14099eb86*/  lea r8, [rbp+210h+var_200]
/*14099eb8a*/  mov edx, 0Ah
/*14099eb8f*/  call sub_141433D50
/*14099eb94*/  nop
/*14099eb95*/  test rax, rax
/*14099eb98*/  jz loc_1409A018F
/*14099eb9e*/  cmp byte ptr [rax], 4
/*14099eba1*/  jnz loc_1409A018F
/*14099eba7*/  mov r14, [rax+10h]
/*14099ebab*/  mov rdx, [rax+18h]
/*14099ebaf*/  shl rdx, 5
/*14099ebb3*/  add rdx, r14
/*14099ebb6*/  lea rcx, aIndex_0; "index"
/*14099ebbd*/  pcmpeqd xmm6, xmm6
/*14099ebc1*/  movaps xmm7, cs:xmmword_141748CD0
/*14099ebc8*/  mov [rbp+210h+var_238], rdx
/*14099ebcc*/  cmp r14, rdx
/*14099ebcf*/  jz loc_1409A018F
/*14099ebd5*/ loc_14099EBD5: mov edx, 5
/*14099ebda*/  mov r8, r14
/*14099ebdd*/  call sub_141433D50
/*14099ebe2*/  nop
/*14099ebe3*/  test rax, rax
/*14099ebe6*/  jz short loc_14099EBF8
/*14099ebe8*/  cmp byte ptr [rax], 2
/*14099ebeb*/  jnz short loc_14099EBF8
/*14099ebed*/  cmp qword ptr [rax+8], 0
/*14099ebf2*/  jz loc_14099EC94
/*14099ebf8*/ loc_14099EBF8: xor ebx, ebx
/*14099ebfa*/ loc_14099EBFA: mov edx, 8
/*14099ebff*/  lea rcx, aFunction_0; "function"
/*14099ec06*/  mov r8, r14
/*14099ec09*/  call sub_141433D50
/*14099ec0e*/  nop
/*14099ec0f*/  test rax, rax
/*14099ec12*/  jz short loc_14099EC45
/*14099ec14*/  movzx ecx, byte ptr [rax]
/*14099ec17*/  lea rdx, jpt_14099EC25
/*14099ec1e*/  movsxd rcx, ds:(jpt_14099EC25 - 1417AA5FCh)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*14099ec22*/  add rcx, rdx
/*14099ec25*/  jmp rcx; switch jump  // switch jump
/*14099ec27*/ loc_14099EC27: movdqu xmm0, xmmword ptr [rax]; jumptable 000000014099EC25 cases 1,2  // jumptable 000000014099EC25 cases 1,2
/*14099ec2b*/  movdqu xmm1, xmmword ptr [rax+10h]
/*14099ec30*/  movdqa [rbp+210h+var_80], xmm1
/*14099ec38*/  movdqa [rbp+210h+var_90], xmm0
/*14099ec40*/  jmp loc_14099ED25
/*14099ec45*/ loc_14099EC45: mov byte ptr [rbp+210h+var_90], 0
/*14099ec4c*/  movdqu xmm0, [rbp+210h+var_80]
/*14099ec54*/  movdqa [rbp+210h+var_190], xmm0
/*14099ec5c*/  movzx eax, byte ptr [rbp+210h+var_90]
/*14099ec63*/  mov byte ptr [rbp+210h+var_1A0], al
/*14099ec66*/  mov rax, qword ptr [rbp+210h+var_90+1]
/*14099ec6d*/  mov [rbp+210h+var_1A0+1], rax
/*14099ec71*/  mov eax, dword ptr [rbp+210h+var_90+9]
/*14099ec77*/  mov dword ptr [rbp+210h+var_198+1], eax
/*14099ec7a*/  movzx eax, word ptr [rbp+210h+var_90+0Dh]
/*14099ec81*/  mov word ptr [rbp+210h+var_198+5], ax
/*14099ec85*/  movzx eax, byte ptr [rbp+210h+var_90+0Fh]
/*14099ec8c*/  mov byte ptr [rbp+210h+var_198+7], al
/*14099ec8f*/  jmp loc_14099ED80
/*14099ec94*/ loc_14099EC94: mov rbx, [rax+10h]
/*14099ec98*/  jmp loc_14099EBFA
/*14099ec9d*/ loc_14099EC9D: mov rdx, [rax+10h]; jumptable 000000014099EC25 case 4  // jumptable 000000014099EC25 case 4
/*14099eca1*/  mov r8, [rax+18h]
/*14099eca5*/  lea rcx, [rbp+210h+var_90+8]
/*14099ecac*/  call sub_1402CE260
/*14099ecb1*/  nop
/*14099ecb2*/  mov byte ptr [rbp+210h+var_90], 4
/*14099ecb9*/  jmp short loc_14099ED25
/*14099ecbb*/ loc_14099ECBB: mov byte ptr [rbp+210h+var_90], 0; jumptable 000000014099EC25 case 0  // jumptable 000000014099EC25 case 0
/*14099ecc2*/  jmp short loc_14099ED25
/*14099ecc4*/ loc_14099ECC4: add rax, 8; jumptable 000000014099EC25 case 3  // jumptable 000000014099EC25 case 3
/*14099ecc8*/  lea rcx, [rbp+210h+var_90+8]
/*14099eccf*/  mov rdx, rax
/*14099ecd2*/  call sub_14149C500
/*14099ecd7*/  nop
/*14099ecd8*/  mov byte ptr [rbp+210h+var_90], 3
/*14099ecdf*/  jmp short loc_14099ED25
/*14099ece1*/ loc_14099ECE1: cmp qword ptr [rax+18h], 0; jumptable 000000014099EC25 case 5  // jumptable 000000014099EC25 case 5
/*14099ece6*/  jz short loc_14099ED08
/*14099ece8*/  mov rdx, [rax+8]
/*14099ecec*/  test rdx, rdx
/*14099ecef*/  jz loc_1409A04CB
/*14099ecf5*/  mov r8, [rax+10h]
/*14099ecf9*/  lea rcx, [rbp+210h+var_90+8]
/*14099ed00*/  call sub_1402CCD80
/*14099ed05*/  nop
/*14099ed06*/  jmp short loc_14099ED1E
/*14099ed08*/ loc_14099ED08: mov qword ptr [rbp+210h+var_90+8], 0
/*14099ed13*/  mov qword ptr [rbp+210h+var_80+8], 0
/*14099ed1e*/ loc_14099ED1E: mov byte ptr [rbp+210h+var_90], 5
/*14099ed25*/ loc_14099ED25: movzx eax, byte ptr [rbp+210h+var_90]
/*14099ed2c*/  mov rcx, qword ptr [rbp+210h+var_90+1]
/*14099ed33*/  mov edx, dword ptr [rbp+210h+var_90+9]
/*14099ed39*/  movzx r8d, word ptr [rbp+210h+var_90+0Dh]
/*14099ed41*/  movzx r9d, byte ptr [rbp+210h+var_90+0Fh]
/*14099ed49*/  movdqa xmm0, [rbp+210h+var_80]
/*14099ed51*/  movdqa [rbp+210h+var_190], xmm0
/*14099ed59*/  mov byte ptr [rbp+210h+var_1A0], al
/*14099ed5c*/  mov [rbp+210h+var_1A0+1], rcx
/*14099ed60*/  mov dword ptr [rbp+210h+var_198+1], edx
/*14099ed63*/  mov word ptr [rbp+210h+var_198+5], r8w
/*14099ed68*/  mov byte ptr [rbp+210h+var_198+7], r9b
/*14099ed6c*/  mov byte ptr [rbp+210h+var_90], 0
/*14099ed73*/  lea rcx, [rbp+210h+var_90]
/*14099ed7a*/  call sub_1400104F0
/*14099ed7f*/  nop
/*14099ed80*/ loc_14099ED80: mov edx, 2
/*14099ed85*/  lea rcx, aId_6; "id"
/*14099ed8c*/  mov r8, r14
/*14099ed8f*/  call sub_141433D50
/*14099ed94*/  nop
/*14099ed95*/ loc_14099ED95: test rax, rax
/*14099ed98*/  jz short loc_14099EDF2
/*14099ed9a*/  cmp byte ptr [rax], 3
/*14099ed9d*/  jnz short loc_14099EDF2
/*14099ed9f*/  mov r13, [rax+18h]
/*14099eda3*/  test r13, r13
/*14099eda6*/  js loc_1409A026A
/*14099edac*/  mov cl, 1
/*14099edae*/  mov dword ptr [rbp+210h+var_D0], ecx
/*14099edb4*/  jz short loc_14099EDFA
/*14099edb6*/  mov r15, [rax+10h]
/*14099edba*/  call nullsub_1
/*14099edbf*/  mov edx, 1
/*14099edc4*/  mov rcx, r13
/*14099edc7*/  call sub_140001650
/*14099edcc*/  test rax, rax
/*14099edcf*/  jz loc_1409A079E
/*14099edd5*/  mov r12, rax
/*14099edd8*/  mov rcx, rax
/*14099eddb*/  mov rdx, r15
/*14099edde*/  mov r8, r13
/*14099ede1*/  call sub_141684120
/*14099ede6*/  mov dword ptr [rbp+210h+var_D0], 0
/*14099edf0*/  jmp short loc_14099EE03
/*14099edf2*/ loc_14099EDF2: mov al, 1
/*14099edf4*/  mov dword ptr [rbp+210h+var_D0], eax
/*14099edfa*/ loc_14099EDFA: mov r12d, 1
/*14099ee00*/  xor r13d, r13d
/*14099ee03*/ loc_14099EE03: mov [rbp+210h+var_250], r13
/*14099ee07*/  mov [rbp+210h+var_168], r12
/*14099ee0e*/  mov [rbp+210h+var_248], r12
/*14099ee12*/  mov [rbp+210h+var_130], r13
/*14099ee19*/  mov [rbp+210h+var_240], r13
/*14099ee1d*/ loc_14099EE1D: mov edx, 4
/*14099ee22*/  lea rcx, aName_7; "name"
/*14099ee29*/  lea r8, [rbp+210h+var_1A0]
/*14099ee2d*/  call sub_141433D50
/*14099ee32*/  nop
/*14099ee33*/ loc_14099EE33: mov cl, 1
/*14099ee35*/  mov [rbp+210h+var_1A4], ecx
/*14099ee38*/  test rax, rax
/*14099ee3b*/  jz short loc_14099EEA1
/*14099ee3d*/  cmp byte ptr [rax], 3
/*14099ee40*/  jnz short loc_14099EEA1
/*14099ee42*/  mov rcx, [rax+18h]
/*14099ee46*/  test rcx, rcx
/*14099ee49*/  js loc_1409A027E
/*14099ee4f*/  mov [rbp+210h+var_138], rcx
/*14099ee56*/  jz short loc_14099EEA1
/*14099ee58*/  mov r15, [rax+10h]
/*14099ee5c*/  call nullsub_1
/*14099ee61*/  mov edx, 1
/*14099ee66*/  mov rcx, [rbp+210h+var_138]
/*14099ee6d*/  call sub_140001650
/*14099ee72*/  mov [rbp+210h+var_140], rax
/*14099ee79*/  test rax, rax
/*14099ee7c*/  jz loc_1409A0786
/*14099ee82*/  mov rcx, [rbp+210h+var_140]
/*14099ee89*/  mov rdx, r15
/*14099ee8c*/  mov r8, [rbp+210h+var_138]
/*14099ee93*/  call sub_141684120
/*14099ee98*/  mov [rbp+210h+var_1A4], 0
/*14099ee9f*/  jmp short loc_14099EEB8
/*14099eea1*/ loc_14099EEA1: mov eax, 1
/*14099eea6*/  mov [rbp+210h+var_140], rax
/*14099eead*/  mov [rbp+210h+var_138], 0
/*14099eeb8*/ loc_14099EEB8: mov edx, 9
/*14099eebd*/  lea rcx, aArguments_1; "arguments"
/*14099eec4*/  lea r8, [rbp+210h+var_1A0]
/*14099eec8*/  call sub_141433D50
/*14099eecd*/  nop
/*14099eece*/  mov byte ptr [rbp+210h+var_1E0], 1
/*14099eed2*/  test rax, rax
/*14099eed5*/  jz short loc_14099EEF5
/*14099eed7*/  cmp byte ptr [rax], 3
/*14099eeda*/  jnz short loc_14099EEF5
/*14099eedc*/  mov rcx, [rax+10h]
/*14099eee0*/  mov [rbp+210h+var_208], rcx
/*14099eee4*/  mov rcx, [rax+18h]
/*14099eee8*/  mov [rbp+210h+var_210], rcx
/*14099eeec*/  test rcx, rcx
/*14099eeef*/  setz byte ptr [rbp+210h+var_1E0]
/*14099eef3*/  jmp short loc_14099EF06
/*14099eef5*/ loc_14099EEF5: mov eax, 1
/*14099eefa*/  mov [rbp+210h+var_208], rax
/*14099eefe*/  mov [rbp+210h+var_210], 0
/*14099ef06*/ loc_14099EF06: add r14, 20h ; ' '
/*14099ef0a*/  mov r15d, [rdi+68h]
/*14099ef0e*/  mov qword ptr [rbp+210h+var_90], rbx
/*14099ef15*/  lea rcx, [rdi+58h]
/*14099ef19*/  lea rdx, [rbp+210h+var_90]
/*14099ef20*/  call sub_140378FA0
/*14099ef25*/  mov r13, rax
/*14099ef28*/  mov r12, rax
/*14099ef2b*/  shr r12, 39h
/*14099ef2f*/  mov rax, [rdi+38h]
/*14099ef33*/  mov rcx, [rdi+40h]
/*14099ef37*/  movd xmm0, r12d
/*14099ef3c*/  punpcklbw xmm0, xmm0
/*14099ef40*/  pshuflw xmm0, xmm0, 0
/*14099ef45*/  pshufd xmm0, xmm0, 44h ; 'D'
/*14099ef4a*/  xor edx, edx
/*14099ef4c*/  mov r8, r13
/*14099ef4f*/ loc_14099EF4F: and r8, rcx
/*14099ef52*/  movdqu xmm1, xmmword ptr [rax+r8]
/*14099ef58*/  movdqa xmm2, xmm1
/*14099ef5c*/  pcmpeqb xmm2, xmm0
/*14099ef60*/  pmovmskb r9d, xmm2
/*14099ef65*/  test r9d, r9d
/*14099ef68*/  jz short loc_14099EF90
/*14099ef6a*/ loc_14099EF6A: tzcnt r10d, r9d
/*14099ef6f*/  add r10, r8
/*14099ef72*/  and r10, rcx
/*14099ef75*/  neg r10
/*14099ef78*/  lea r10, [r10+r10*4]
/*14099ef7c*/  cmp [rax+r10*8-28h], rbx
/*14099ef81*/  jz short loc_14099EFAB
/*14099ef83*/  lea r10d, [r9-1]
/*14099ef87*/  and r10w, r9w
/*14099ef8b*/  mov r9d, r10d
/*14099ef8e*/  jnz short loc_14099EF6A
/*14099ef90*/ loc_14099EF90: pcmpeqb xmm1, xmm6
/*14099ef94*/  pmovmskb r9d, xmm1
/*14099ef99*/  test r9d, r9d
/*14099ef9c*/  jnz short loc_14099EFB4
/*14099ef9e*/  add r8, rdx
/*14099efa1*/  add r8, 10h
/*14099efa5*/  add rdx, 10h
/*14099efa9*/  jmp short loc_14099EF4F
/*14099efab*/ loc_14099EFAB: lea r12, [rax+r10*8]
/*14099efaf*/  jmp loc_14099F051
/*14099efb4*/ loc_14099EFB4: cmp qword ptr [rdi+48h], 0
/*14099efb9*/  jz loc_1409A00A1
/*14099efbf*/ loc_14099EFBF: and r13, rcx
/*14099efc2*/  movdqu xmm0, xmmword ptr [rax+r13]
/*14099efc8*/  pmovmskb edx, xmm0
/*14099efcc*/  test edx, edx
/*14099efce*/  jz loc_1409A007D
/*14099efd4*/ loc_14099EFD4: tzcnt r8d, edx
/*14099efd9*/  add r8, r13
/*14099efdc*/  and r8, rcx
/*14099efdf*/  movzx edx, byte ptr [rax+r8]
/*14099efe4*/  test dl, dl
/*14099efe6*/  jns loc_1409A00C4
/*14099efec*/ loc_14099EFEC: lea r9, [r8-10h]
/*14099eff0*/  and r9, rcx
/*14099eff3*/  mov [rax+r8], r12b
/*14099eff7*/  mov [rax+r9+10h], r12b
/*14099effc*/  neg r8
/*14099efff*/  lea rcx, [r8+r8*4]
/*14099f003*/  lea r12, [rax+rcx*8]
/*14099f007*/  and dl, 1
/*14099f00a*/  mov [rax+rcx*8-28h], rbx
/*14099f00f*/  mov qword ptr [rax+rcx*8-20h], 0
/*14099f018*/  mov qword ptr [rax+rcx*8-18h], 1
/*14099f021*/  mov qword ptr [rax+rcx*8-10h], 0
/*14099f02a*/  mov [rax+rcx*8-8], r15d
/*14099f02f*/  mov byte ptr [rax+rcx*8-4], 0
/*14099f034*/  movdqu xmm0, xmmword ptr [rdi+48h]
/*14099f039*/  movzx eax, dl
/*14099f03c*/  movd xmm1, eax
/*14099f040*/  shufps xmm1, xmm7, 0E4h
/*14099f044*/  psubq xmm0, xmm1
/*14099f048*/  movdqu xmmword ptr [rdi+48h], xmm0
/*14099f04d*/  mov r15d, [rdi+68h]
/*14099f051*/ loc_14099F051: cmp [r12-8], r15d
/*14099f056*/  jnz short loc_14099F05F
/*14099f058*/  inc r15d
/*14099f05b*/  mov [rdi+68h], r15d
/*14099f05f*/ loc_14099F05F: cmp byte ptr [r12-4], 0
/*14099f065*/  mov [rbp+210h+var_128], r12
/*14099f06c*/  jnz loc_14099FB2B
/*14099f072*/  lea rbx, [r12-20h]
/*14099f077*/  cmp byte ptr [rbp+210h+var_D0], 0
/*14099f07e*/  jnz short loc_14099F0C0
/*14099f080*/  lea rcx, [rbp+210h+var_90]
/*14099f087*/  lea rdx, [rbp+210h+var_250]
/*14099f08b*/  call sub_14149C500
/*14099f090*/  nop
/*14099f091*/  mov rdx, [rbx]
/*14099f094*/  test rdx, rdx
/*14099f097*/  jz short loc_14099F0A9
/*14099f099*/  mov rcx, [r12-18h]
/*14099f09e*/  mov r8d, 1
/*14099f0a4*/  call sub_140001660
/*14099f0a9*/ loc_14099F0A9: mov rax, qword ptr [rbp+210h+var_80]
/*14099f0b0*/  mov [rbx+10h], rax
/*14099f0b4*/  movdqu xmm0, [rbp+210h+var_90]
/*14099f0bc*/  movdqu xmmword ptr [rbx], xmm0
/*14099f0c0*/ loc_14099F0C0: cmp qword ptr [r12-10h], 0
/*14099f0c6*/  jnz loc_14099F215
/*14099f0cc*/  lea rcx, [rbp+210h+var_90]
/*14099f0d3*/  call sub_141356270
/*14099f0d8*/  nop
/*14099f0d9*/  movdqu xmm0, [rbp+210h+var_90]
/*14099f0e1*/  movdqa [rbp+210h+var_F0], xmm0
/*14099f0e9*/  mov qword ptr [rbp+210h+var_C0], 0
/*14099f0f4*/  mov qword ptr [rbp+210h+var_C0+8], 1
/*14099f0ff*/  mov qword ptr [rbp+210h+var_B0], 0
/*14099f10a*/  mov qword ptr [rbp+210h+var_80], 60000020h
/*14099f115*/  lea rax, [rbp+210h+var_C0]
/*14099f11c*/  mov qword ptr [rbp+210h+var_90], rax
/*14099f123*/  lea rax, off_1417A9B00
/*14099f12a*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099f131*/ loc_14099F131: lea rcx, [rbp+210h+var_F0]
/*14099f138*/  lea rdx, [rbp+210h+var_90]
/*14099f13f*/  call sub_1413567D0
/*14099f144*/  nop
/*14099f145*/  test al, al
/*14099f147*/  jnz loc_1409A049A
/*14099f14d*/  mov rax, qword ptr [rbp+210h+var_C0]
/*14099f154*/  mov rcx, qword ptr [rbp+210h+var_C0+8]
/*14099f15b*/  mov rdx, qword ptr [rbp+210h+var_B0]
/*14099f162*/  cmp rdx, 0Ch
/*14099f166*/  mov [rbp+210h+var_D0], rax
/*14099f16d*/  mov [rbp+210h+var_230], rcx
/*14099f171*/  jbe short loc_14099F17E
/*14099f173*/  cmp byte ptr [rcx+0Ch], 0BFh
/*14099f177*/  jg short loc_14099F184
/*14099f179*/  jmp loc_1409A06FF
/*14099f17e*/ loc_14099F17E: jnz loc_1409A06FF
/*14099f184*/ loc_14099F184: mov qword ptr [rbp+210h+var_C0], rcx
/*14099f18b*/  mov qword ptr [rbp+210h+var_C0+8], 0Ch
/*14099f196*/  lea rax, [rbp+210h+var_C0]
/*14099f19d*/  mov qword ptr [rbp+210h+var_90], rax
/*14099f1a4*/  lea rax, sub_14041F680
/*14099f1ab*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099f1b2*/ loc_14099F1B2: lea rcx, [rbp+210h+var_268]
/*14099f1b6*/  lea rdx, unk_1417A5950
/*14099f1bd*/  lea r8, [rbp+210h+var_90]
/*14099f1c4*/  call sub_14149C0F0
/*14099f1c9*/  nop
/*14099f1ca*/  mov rdx, [rbp+210h+var_D0]
/*14099f1d1*/  test rdx, rdx
/*14099f1d4*/  jz short loc_14099F1E5
/*14099f1d6*/  mov r8d, 1
/*14099f1dc*/  mov rcx, [rbp+210h+var_230]
/*14099f1e0*/  call sub_140001660
/*14099f1e5*/ loc_14099F1E5: mov rdx, [rbx]
/*14099f1e8*/  test rdx, rdx
/*14099f1eb*/  mov r12, [rbp+210h+var_128]
/*14099f1f2*/  jz short loc_14099F204
/*14099f1f4*/  mov rcx, [r12-18h]
/*14099f1f9*/  mov r8d, 1
/*14099f1ff*/  call sub_140001660
/*14099f204*/ loc_14099F204: mov rax, [rbp+210h+var_258]
/*14099f208*/  mov [rbx+10h], rax
/*14099f20c*/  movdqu xmm0, [rbp+210h+var_268]
/*14099f211*/  movdqu xmmword ptr [rbx], xmm0
/*14099f215*/ loc_14099F215: cmp byte ptr [rbp+210h+var_1A4], 0
/*14099f219*/  jnz loc_14099FB2B
/*14099f21f*/  mov byte ptr [r12-4], 1
/*14099f225*/  mov eax, [rdi+30h]
/*14099f228*/  mov ebx, [rdi+34h]
/*14099f22b*/  mov dword ptr [rdi+30h], 0
/*14099f232*/  cmp eax, 1
/*14099f235*/  jnz loc_14099F4CB
/*14099f23b*/  mov qword ptr [rbp+210h+var_108], 0
/*14099f246*/  mov [rbp+210h+var_F8], 0
/*14099f251*/  call nullsub_1
/*14099f256*/  mov ecx, 4
/*14099f25b*/  mov edx, 1
/*14099f260*/  call sub_140001650
/*14099f265*/  test rax, rax
/*14099f268*/  jz loc_1409A0740
/*14099f26e*/  mov dword ptr [rax], 65707974h
/*14099f274*/  mov qword ptr [rbp+210h+var_160], 4
/*14099f27f*/  mov qword ptr [rbp+210h+var_160+8], rax
/*14099f286*/  mov [rbp+210h+var_150], 4
/*14099f291*/  call nullsub_1
/*14099f296*/  mov ecx, 12h
/*14099f29b*/  mov edx, 1
/*14099f2a0*/  call sub_140001650
/*14099f2a5*/  test rax, rax
/*14099f2a8*/  mov [rbp+210h+var_D0], rax
/*14099f2af*/  jz loc_1409A072E
/*14099f2b5*/  movdqu xmm0, xmmword ptr cs:aContentBlockSt; "content_block_stop"
/*14099f2bd*/  movdqu xmmword ptr [rax], xmm0
/*14099f2c1*/  mov word ptr [rax+10h], 706Fh
/*14099f2c7*/  mov byte ptr [rbp+210h+var_90], 3
/*14099f2ce*/  mov qword ptr [rbp+210h+var_90+8], 12h
/*14099f2d9*/  mov qword ptr [rbp+210h+var_80], rax
/*14099f2e0*/  mov qword ptr [rbp+210h+var_80+8], 12h
/*14099f2eb*/ loc_14099F2EB: lea rcx, [rbp+210h+var_C0]
/*14099f2f2*/  lea rdx, [rbp+210h+var_108]
/*14099f2f9*/  lea r8, [rbp+210h+var_160]
/*14099f300*/  lea r9, [rbp+210h+var_90]
/*14099f307*/  call sub_140307860
/*14099f30c*/  nop
/*14099f30d*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f314*/  jz short loc_14099F323
/*14099f316*/ loc_14099F316: lea rcx, [rbp+210h+var_C0]
/*14099f31d*/  call sub_1400104F0
/*14099f322*/  nop
/*14099f323*/ loc_14099F323: call nullsub_1
/*14099f328*/  mov ecx, 5
/*14099f32d*/  mov edx, 1
/*14099f332*/  call sub_140001650
/*14099f337*/  test rax, rax
/*14099f33a*/  jz loc_1409A071C
/*14099f340*/  mov byte ptr [rax+4], 78h ; 'x'
/*14099f344*/  mov dword ptr [rax], 65646E69h
/*14099f34a*/  mov qword ptr [rbp+210h+var_160], 5
/*14099f355*/  mov qword ptr [rbp+210h+var_160+8], rax
/*14099f35c*/  mov [rbp+210h+var_150], 5
/*14099f367*/  mov byte ptr [rbp+210h+var_90], 2
/*14099f36e*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099f379*/  mov qword ptr [rbp+210h+var_80], rbx
/*14099f380*/  lea rcx, [rbp+210h+var_C0]
/*14099f387*/  lea rdx, [rbp+210h+var_108]
/*14099f38e*/  lea r8, [rbp+210h+var_160]
/*14099f395*/  lea r9, [rbp+210h+var_90]
/*14099f39c*/  call sub_140307860
/*14099f3a1*/  nop
/*14099f3a2*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f3a9*/  jz short loc_14099F3B8
/*14099f3ab*/  lea rcx, [rbp+210h+var_C0]
/*14099f3b2*/  call sub_1400104F0
/*14099f3b7*/  nop
/*14099f3b8*/ loc_14099F3B8: mov rax, [rbp+210h+var_F8]
/*14099f3bf*/  lea rcx, [rbp+210h+var_F0+8]
/*14099f3c6*/  mov [rcx+10h], rax
/*14099f3ca*/  movdqu xmm0, [rbp+210h+var_108]
/*14099f3d2*/  movdqu xmmword ptr [rcx], xmm0
/*14099f3d6*/  mov byte ptr [rbp+210h+var_F0], 5
/*14099f3dd*/  lea rax, aContentBlockSt; "content_block_stop"
/*14099f3e4*/  mov qword ptr [rbp+210h+var_160], rax
/*14099f3eb*/  mov qword ptr [rbp+210h+var_160+8], 12h
/*14099f3f6*/  lea rax, [rbp+210h+var_F0]
/*14099f3fd*/  mov qword ptr [rbp+210h+var_108], rax
/*14099f404*/  lea rax, [rbp+210h+var_160]
/*14099f40b*/  mov qword ptr [rbp+210h+var_90], rax
/*14099f412*/  lea rax, sub_14041F680
/*14099f419*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099f420*/  lea rax, [rbp+210h+var_108]
/*14099f427*/  mov qword ptr [rbp+210h+var_80], rax
/*14099f42e*/  lea rax, sub_140B982E0
/*14099f435*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099f43c*/ loc_14099F43C: lea rcx, [rbp+210h+var_C0]
/*14099f443*/  lea rdx, unk_1417A94D0
/*14099f44a*/  lea r8, [rbp+210h+var_90]
/*14099f451*/  call sub_14149C0F0
/*14099f456*/  nop
/*14099f457*/ loc_14099F457: mov rbx, qword ptr [rbp+210h+var_C0+8]
/*14099f45e*/  mov r13, qword ptr [rbp+210h+var_B0]
/*14099f465*/  mov rax, qword ptr [rbp+210h+var_120]
/*14099f46c*/  mov r12, [rbp+210h+var_110]
/*14099f473*/  sub rax, r12
/*14099f476*/  cmp r13, rax
/*14099f479*/  ja loc_1409A0117
/*14099f47f*/  test r13, r13
/*14099f482*/  jz short loc_14099F499
/*14099f484*/ loc_14099F484: mov rcx, qword ptr [rbp+210h+var_120+8]
/*14099f48b*/  add rcx, r12
/*14099f48e*/  mov rdx, rbx
/*14099f491*/  mov r8, r13
/*14099f494*/  call sub_141684120
/*14099f499*/ loc_14099F499: add r12, r13
/*14099f49c*/  mov [rbp+210h+var_110], r12
/*14099f4a3*/  mov rdx, qword ptr [rbp+210h+var_C0]
/*14099f4aa*/  test rdx, rdx
/*14099f4ad*/  jz short loc_14099F4BE
/*14099f4af*/  mov r8d, 1
/*14099f4b5*/  mov rcx, rbx
/*14099f4b8*/  call sub_140001660
/*14099f4bd*/  nop
/*14099f4be*/ loc_14099F4BE: lea rcx, [rbp+210h+var_F0]
/*14099f4c5*/  call sub_1400104F0
/*14099f4ca*/  nop
/*14099f4cb*/ loc_14099F4CB: mov qword ptr [rbp+210h+var_1C0], 0
/*14099f4d3*/  mov [rbp+210h+var_1B0], 0
/*14099f4db*/  call nullsub_1
/*14099f4e0*/  mov ecx, 4
/*14099f4e5*/  mov edx, 1
/*14099f4ea*/  call sub_140001650
/*14099f4ef*/  test rax, rax
/*14099f4f2*/  jz loc_1409A06EA
/*14099f4f8*/  mov dword ptr [rax], 65707974h
/*14099f4fe*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099f509*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099f510*/  mov [rbp+210h+var_E0], 4
/*14099f51b*/  call nullsub_1
/*14099f520*/  mov ecx, 13h
/*14099f525*/  mov edx, 1
/*14099f52a*/  call sub_140001650
/*14099f52f*/  test rax, rax
/*14099f532*/  mov [rbp+210h+var_D0], rax
/*14099f539*/  jz loc_1409A06D5
/*14099f53f*/  movdqu xmm0, xmmword ptr cs:aContentBlockSt_0; "content_block_start"
/*14099f547*/  movdqu xmmword ptr [rax], xmm0
/*14099f54b*/  mov dword ptr [rax+0Fh], 74726174h
/*14099f552*/  mov byte ptr [rbp+210h+var_90], 3
/*14099f559*/  mov qword ptr [rbp+210h+var_90+8], 13h
/*14099f564*/  mov qword ptr [rbp+210h+var_80], rax
/*14099f56b*/  mov qword ptr [rbp+210h+var_80+8], 13h
/*14099f576*/ loc_14099F576: lea rcx, [rbp+210h+var_C0]
/*14099f57d*/  lea rdx, [rbp+210h+var_1C0]
/*14099f581*/  lea r8, [rbp+210h+var_F0]
/*14099f588*/  lea r9, [rbp+210h+var_90]
/*14099f58f*/  call sub_140307860
/*14099f594*/  nop
/*14099f595*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f59c*/  jz short loc_14099F5AB
/*14099f59e*/ loc_14099F59E: lea rcx, [rbp+210h+var_C0]
/*14099f5a5*/  call sub_1400104F0
/*14099f5aa*/  nop
/*14099f5ab*/ loc_14099F5AB: call nullsub_1
/*14099f5b0*/  mov ecx, 5
/*14099f5b5*/  mov edx, 1
/*14099f5ba*/  call sub_140001650
/*14099f5bf*/  test rax, rax
/*14099f5c2*/  jz loc_1409A06C0
/*14099f5c8*/  mov byte ptr [rax+4], 78h ; 'x'
/*14099f5cc*/  mov dword ptr [rax], 65646E69h
/*14099f5d2*/  mov qword ptr [rbp+210h+var_F0], 5
/*14099f5dd*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099f5e4*/  mov [rbp+210h+var_E0], 5
/*14099f5ef*/  mov rax, [rbp+210h+var_128]
/*14099f5f6*/  mov eax, [rax-8]
/*14099f5f9*/  mov byte ptr [rbp+210h+var_90], 2
/*14099f600*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099f60b*/  mov qword ptr [rbp+210h+var_80], rax
/*14099f612*/  lea rcx, [rbp+210h+var_C0]
/*14099f619*/  lea rdx, [rbp+210h+var_1C0]
/*14099f61d*/  lea r8, [rbp+210h+var_F0]
/*14099f624*/  lea r9, [rbp+210h+var_90]
/*14099f62b*/  call sub_140307860
/*14099f630*/  nop
/*14099f631*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f638*/  jz short loc_14099F647
/*14099f63a*/  lea rcx, [rbp+210h+var_C0]
/*14099f641*/  call sub_1400104F0
/*14099f646*/  nop
/*14099f647*/ loc_14099F647: call nullsub_1
/*14099f64c*/  mov ecx, 0Dh
/*14099f651*/  mov edx, 1
/*14099f656*/  call sub_140001650
/*14099f65b*/  test rax, rax
/*14099f65e*/  jz loc_1409A06AB
/*14099f664*/  mov rcx, 6B636F6C625F746Eh
/*14099f66e*/  mov [rax+5], rcx
/*14099f672*/  mov rcx, 5F746E65746E6F63h
/*14099f67c*/  mov [rax], rcx
/*14099f67f*/  mov [rbp+210h+var_228], 0Dh
/*14099f687*/  mov [rbp+210h+var_220], rax
/*14099f68b*/  mov [rbp+210h+var_218], 0Dh
/*14099f693*/  mov qword ptr [rbp+210h+var_1D8], 0
/*14099f69b*/  mov [rbp+210h+var_1C8], 0
/*14099f6a3*/  call nullsub_1
/*14099f6a8*/  mov ecx, 4
/*14099f6ad*/  mov edx, 1
/*14099f6b2*/  call sub_140001650
/*14099f6b7*/  test rax, rax
/*14099f6ba*/  jz loc_1409A0696
/*14099f6c0*/  mov dword ptr [rax], 65707974h
/*14099f6c6*/  mov qword ptr [rbp+210h+var_108], 4
/*14099f6d1*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099f6d8*/  mov [rbp+210h+var_F8], 4
/*14099f6e3*/  call nullsub_1
/*14099f6e8*/  mov ecx, 8
/*14099f6ed*/  mov edx, 1
/*14099f6f2*/  call sub_140001650
/*14099f6f7*/  test rax, rax
/*14099f6fa*/  mov [rbp+210h+var_D0], rax
/*14099f701*/  jz loc_1409A0681
/*14099f707*/  mov r10, rax
/*14099f70a*/  mov rax, 6573755F6C6F6F74h
/*14099f714*/  mov [r10], rax
/*14099f717*/  mov byte ptr [rbp+210h+var_90], 3
/*14099f71e*/  mov qword ptr [rbp+210h+var_90+8], 8
/*14099f729*/  mov qword ptr [rbp+210h+var_80], r10
/*14099f730*/  mov qword ptr [rbp+210h+var_80+8], 8
/*14099f73b*/ loc_14099F73B: lea rcx, [rbp+210h+var_C0]
/*14099f742*/  lea rdx, [rbp+210h+var_1D8]
/*14099f746*/  lea r8, [rbp+210h+var_108]
/*14099f74d*/  lea r9, [rbp+210h+var_90]
/*14099f754*/  call sub_140307860
/*14099f759*/  nop
/*14099f75a*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f761*/  jz short loc_14099F770
/*14099f763*/ loc_14099F763: lea rcx, [rbp+210h+var_C0]
/*14099f76a*/  call sub_1400104F0
/*14099f76f*/  nop
/*14099f770*/ loc_14099F770: call nullsub_1
/*14099f775*/  mov ecx, 2
/*14099f77a*/  mov edx, 1
/*14099f77f*/  call sub_140001650
/*14099f784*/  test rax, rax
/*14099f787*/  jz loc_1409A066C
/*14099f78d*/  mov word ptr [rax], 6469h
/*14099f792*/  mov qword ptr [rbp+210h+var_108], 2
/*14099f79d*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099f7a4*/  mov [rbp+210h+var_F8], 2
/*14099f7af*/  mov rax, [rbp+210h+var_128]
/*14099f7b6*/  mov r13, [rax-10h]
/*14099f7ba*/  test r13, r13
/*14099f7bd*/  js loc_1409A02AC
/*14099f7c3*/  jz short loc_14099F7FC
/*14099f7c5*/  mov r15, [rax-18h]
/*14099f7c9*/  call nullsub_1
/*14099f7ce*/  mov ebx, 1
/*14099f7d3*/  mov edx, 1
/*14099f7d8*/  mov rcx, r13
/*14099f7db*/  call sub_140001650
/*14099f7e0*/  test rax, rax
/*14099f7e3*/  jz loc_1409A02AE
/*14099f7e9*/  mov r12, rax
/*14099f7ec*/  mov rcx, rax
/*14099f7ef*/  mov rdx, r15
/*14099f7f2*/  mov r8, r13
/*14099f7f5*/  call sub_141684120
/*14099f7fa*/  jmp short loc_14099F802
/*14099f7fc*/ loc_14099F7FC: mov r12d, 1
/*14099f802*/ loc_14099F802: mov byte ptr [rbp+210h+var_90], 3
/*14099f809*/  mov qword ptr [rbp+210h+var_90+8], r13
/*14099f810*/  mov qword ptr [rbp+210h+var_80], r12
/*14099f817*/  mov qword ptr [rbp+210h+var_80+8], r13
/*14099f81e*/  mov [rbp+210h+var_C4], 0
/*14099f825*/ loc_14099F825: lea rcx, [rbp+210h+var_C0]
/*14099f82c*/  lea rdx, [rbp+210h+var_1D8]
/*14099f830*/  lea r8, [rbp+210h+var_108]
/*14099f837*/  lea r9, [rbp+210h+var_90]
/*14099f83e*/  call sub_140307860
/*14099f843*/  nop
/*14099f844*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f84b*/  jz short loc_14099F85A
/*14099f84d*/ loc_14099F84D: lea rcx, [rbp+210h+var_C0]
/*14099f854*/  call sub_1400104F0
/*14099f859*/  nop
/*14099f85a*/ loc_14099F85A: call nullsub_1
/*14099f85f*/  mov ecx, 4
/*14099f864*/  mov edx, 1
/*14099f869*/  call sub_140001650
/*14099f86e*/  test rax, rax
/*14099f871*/  jz loc_1409A0774
/*14099f877*/  mov dword ptr [rax], 656D616Eh
/*14099f87d*/  mov qword ptr [rbp+210h+var_108], 4
/*14099f888*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099f88f*/  mov [rbp+210h+var_F8], 4
/*14099f89a*/  call nullsub_1
/*14099f89f*/  mov edx, 1
/*14099f8a4*/  mov rbx, [rbp+210h+var_138]
/*14099f8ab*/  mov rcx, rbx
/*14099f8ae*/  call sub_140001650
/*14099f8b3*/  test rax, rax
/*14099f8b6*/  mov [rbp+210h+var_D0], rax
/*14099f8bd*/  jz loc_1409A0764
/*14099f8c3*/  mov r15, rax
/*14099f8c6*/  mov rcx, rax
/*14099f8c9*/  mov rdx, [rbp+210h+var_140]
/*14099f8d0*/  mov r8, rbx
/*14099f8d3*/  call sub_141684120
/*14099f8d8*/  mov byte ptr [rbp+210h+var_90], 3
/*14099f8df*/  mov qword ptr [rbp+210h+var_90+8], rbx
/*14099f8e6*/  mov qword ptr [rbp+210h+var_80], r15
/*14099f8ed*/  mov qword ptr [rbp+210h+var_80+8], rbx
/*14099f8f4*/ loc_14099F8F4: lea rcx, [rbp+210h+var_C0]
/*14099f8fb*/  lea rdx, [rbp+210h+var_1D8]
/*14099f8ff*/  lea r8, [rbp+210h+var_108]
/*14099f906*/  lea r9, [rbp+210h+var_90]
/*14099f90d*/  call sub_140307860
/*14099f912*/  nop
/*14099f913*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f91a*/  jz short loc_14099F929
/*14099f91c*/ loc_14099F91C: lea rcx, [rbp+210h+var_C0]
/*14099f923*/  call sub_1400104F0
/*14099f928*/  nop
/*14099f929*/ loc_14099F929: call nullsub_1
/*14099f92e*/  mov ecx, 5
/*14099f933*/  mov edx, 1
/*14099f938*/  call sub_140001650
/*14099f93d*/  test rax, rax
/*14099f940*/  jz loc_1409A0752
/*14099f946*/  mov byte ptr [rax+4], 74h ; 't'
/*14099f94a*/  mov dword ptr [rax], 75706E69h
/*14099f950*/  mov qword ptr [rbp+210h+var_108], 5
/*14099f95b*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099f962*/  mov [rbp+210h+var_F8], 5
/*14099f96d*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099f978*/  mov qword ptr [rbp+210h+var_80+8], 0
/*14099f983*/  mov byte ptr [rbp+210h+var_90], 5
/*14099f98a*/  lea rcx, [rbp+210h+var_C0]
/*14099f991*/  lea rdx, [rbp+210h+var_1D8]
/*14099f995*/  lea r8, [rbp+210h+var_108]
/*14099f99c*/  lea r9, [rbp+210h+var_90]
/*14099f9a3*/  call sub_140307860
/*14099f9a8*/  nop
/*14099f9a9*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099f9b0*/  jz short loc_14099F9BF
/*14099f9b2*/  lea rcx, [rbp+210h+var_C0]
/*14099f9b9*/  call sub_1400104F0
/*14099f9be*/  nop
/*14099f9bf*/ loc_14099F9BF: mov rax, [rbp+210h+var_1C8]
/*14099f9c3*/  lea rcx, [rbp+210h+var_F0+8]
/*14099f9ca*/  mov [rcx+10h], rax
/*14099f9ce*/  movdqu xmm0, [rbp+210h+var_1D8]
/*14099f9d3*/  movdqu xmmword ptr [rcx], xmm0
/*14099f9d7*/  mov byte ptr [rbp+210h+var_F0], 5
/*14099f9de*/  mov [rbp+210h+var_C5], 0
/*14099f9e5*/ loc_14099F9E5: lea rcx, [rbp+210h+var_90]
/*14099f9ec*/  lea rdx, [rbp+210h+var_1C0]
/*14099f9f0*/  lea r8, [rbp+210h+var_228]
/*14099f9f4*/  lea r9, [rbp+210h+var_F0]
/*14099f9fb*/  call sub_140307860
/*14099fa00*/  nop
/*14099fa01*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099fa08*/  jz short loc_14099FA17
/*14099fa0a*/ loc_14099FA0A: lea rcx, [rbp+210h+var_90]
/*14099fa11*/  call sub_1400104F0
/*14099fa16*/  nop
/*14099fa17*/ loc_14099FA17: mov rax, [rbp+210h+var_1B0]
/*14099fa1b*/  lea rcx, [rbp+210h+var_160+8]
/*14099fa22*/  mov [rcx+10h], rax
/*14099fa26*/  movdqu xmm0, [rbp+210h+var_1C0]
/*14099fa2b*/  movdqu xmmword ptr [rcx], xmm0
/*14099fa2f*/  mov byte ptr [rbp+210h+var_160], 5
/*14099fa36*/  lea rax, aContentBlockSt_0; "content_block_start"
/*14099fa3d*/  mov qword ptr [rbp+210h+var_F0], rax
/*14099fa44*/  mov qword ptr [rbp+210h+var_F0+8], 13h
/*14099fa4f*/  lea rax, [rbp+210h+var_160]
/*14099fa56*/  mov qword ptr [rbp+210h+var_108], rax
/*14099fa5d*/  lea rax, [rbp+210h+var_F0]
/*14099fa64*/  mov qword ptr [rbp+210h+var_90], rax
/*14099fa6b*/  lea rax, sub_14041F680
/*14099fa72*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099fa79*/  lea rax, [rbp+210h+var_108]
/*14099fa80*/  mov qword ptr [rbp+210h+var_80], rax
/*14099fa87*/  lea rax, sub_140B982E0
/*14099fa8e*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099fa95*/ loc_14099FA95: lea rcx, [rbp+210h+var_C0]
/*14099fa9c*/  lea rdx, unk_1417A94D0
/*14099faa3*/  lea r8, [rbp+210h+var_90]
/*14099faaa*/  call sub_14149C0F0
/*14099faaf*/  nop
/*14099fab0*/ loc_14099FAB0: mov rbx, qword ptr [rbp+210h+var_C0+8]
/*14099fab7*/  mov r13, qword ptr [rbp+210h+var_B0]
/*14099fabe*/  mov rax, qword ptr [rbp+210h+var_120]
/*14099fac5*/  mov r12, [rbp+210h+var_110]
/*14099facc*/  sub rax, r12
/*14099facf*/  cmp r13, rax
/*14099fad2*/  ja loc_1409A0153
/*14099fad8*/  test r13, r13
/*14099fadb*/  jz short loc_14099FAF2
/*14099fadd*/ loc_14099FADD: mov rcx, qword ptr [rbp+210h+var_120+8]
/*14099fae4*/  add rcx, r12
/*14099fae7*/  mov rdx, rbx
/*14099faea*/  mov r8, r13
/*14099faed*/  call sub_141684120
/*14099faf2*/ loc_14099FAF2: add r12, r13
/*14099faf5*/  mov [rbp+210h+var_110], r12
/*14099fafc*/  mov rdx, qword ptr [rbp+210h+var_C0]
/*14099fb03*/  test rdx, rdx
/*14099fb06*/  jz short loc_14099FB17
/*14099fb08*/  mov r8d, 1
/*14099fb0e*/  mov rcx, rbx
/*14099fb11*/  call sub_140001660
/*14099fb16*/  nop
/*14099fb17*/ loc_14099FB17: lea rcx, [rbp+210h+var_160]
/*14099fb1e*/  call sub_1400104F0
/*14099fb23*/  nop
/*14099fb24*/  mov r12, [rbp+210h+var_128]
/*14099fb2b*/ loc_14099FB2B: movzx eax, byte ptr [r12-4]
/*14099fb31*/  xor al, 1
/*14099fb33*/  or byte ptr [rbp+210h+var_1E0], al
/*14099fb36*/  jnz loc_1409A001D
/*14099fb3c*/  mov qword ptr [rbp+210h+var_1C0], 0
/*14099fb44*/  mov [rbp+210h+var_1B0], 0
/*14099fb4c*/  call nullsub_1
/*14099fb51*/  mov ecx, 4
/*14099fb56*/  mov edx, 1
/*14099fb5b*/  call sub_140001650
/*14099fb60*/  test rax, rax
/*14099fb63*/  jz loc_1409A0657
/*14099fb69*/  mov dword ptr [rax], 65707974h
/*14099fb6f*/  mov qword ptr [rbp+210h+var_F0], 4
/*14099fb7a*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099fb81*/  mov [rbp+210h+var_E0], 4
/*14099fb8c*/  call nullsub_1
/*14099fb91*/  mov ecx, 13h
/*14099fb96*/  mov edx, 1
/*14099fb9b*/  call sub_140001650
/*14099fba0*/  test rax, rax
/*14099fba3*/  mov [rbp+210h+var_1E0], rax
/*14099fba7*/  jz loc_1409A0642
/*14099fbad*/  movdqu xmm0, xmmword ptr cs:aContentBlockDe; "content_block_delta"
/*14099fbb5*/  movdqu xmmword ptr [rax], xmm0
/*14099fbb9*/  mov dword ptr [rax+0Fh], 61746C65h
/*14099fbc0*/  mov byte ptr [rbp+210h+var_90], 3
/*14099fbc7*/  mov qword ptr [rbp+210h+var_90+8], 13h
/*14099fbd2*/  mov qword ptr [rbp+210h+var_80], rax
/*14099fbd9*/  mov qword ptr [rbp+210h+var_80+8], 13h
/*14099fbe4*/ loc_14099FBE4: lea rcx, [rbp+210h+var_C0]
/*14099fbeb*/  lea rdx, [rbp+210h+var_1C0]
/*14099fbef*/  lea r8, [rbp+210h+var_F0]
/*14099fbf6*/  lea r9, [rbp+210h+var_90]
/*14099fbfd*/  call sub_140307860
/*14099fc02*/  nop
/*14099fc03*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099fc0a*/  jz short loc_14099FC19
/*14099fc0c*/ loc_14099FC0C: lea rcx, [rbp+210h+var_C0]
/*14099fc13*/  call sub_1400104F0
/*14099fc18*/  nop
/*14099fc19*/ loc_14099FC19: call nullsub_1
/*14099fc1e*/  mov ecx, 5
/*14099fc23*/  mov edx, 1
/*14099fc28*/  call sub_140001650
/*14099fc2d*/  test rax, rax
/*14099fc30*/  jz loc_1409A062D
/*14099fc36*/  mov byte ptr [rax+4], 78h ; 'x'
/*14099fc3a*/  mov dword ptr [rax], 65646E69h
/*14099fc40*/  mov qword ptr [rbp+210h+var_F0], 5
/*14099fc4b*/  mov qword ptr [rbp+210h+var_F0+8], rax
/*14099fc52*/  mov [rbp+210h+var_E0], 5
/*14099fc5d*/  mov rax, [rbp+210h+var_128]
/*14099fc64*/  mov eax, [rax-8]
/*14099fc67*/  mov byte ptr [rbp+210h+var_90], 2
/*14099fc6e*/  mov qword ptr [rbp+210h+var_90+8], 0
/*14099fc79*/  mov qword ptr [rbp+210h+var_80], rax
/*14099fc80*/  lea rcx, [rbp+210h+var_C0]
/*14099fc87*/  lea rdx, [rbp+210h+var_1C0]
/*14099fc8b*/  lea r8, [rbp+210h+var_F0]
/*14099fc92*/  lea r9, [rbp+210h+var_90]
/*14099fc99*/  call sub_140307860
/*14099fc9e*/  nop
/*14099fc9f*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099fca6*/  jz short loc_14099FCB5
/*14099fca8*/  lea rcx, [rbp+210h+var_C0]
/*14099fcaf*/  call sub_1400104F0
/*14099fcb4*/  nop
/*14099fcb5*/ loc_14099FCB5: call nullsub_1
/*14099fcba*/  mov ecx, 5
/*14099fcbf*/  mov edx, 1
/*14099fcc4*/  call sub_140001650
/*14099fcc9*/  test rax, rax
/*14099fccc*/  jz loc_1409A0618
/*14099fcd2*/  mov byte ptr [rax+4], 61h ; 'a'
/*14099fcd6*/  mov dword ptr [rax], 746C6564h
/*14099fcdc*/  mov [rbp+210h+var_228], 5
/*14099fce4*/  mov [rbp+210h+var_220], rax
/*14099fce8*/  mov [rbp+210h+var_218], 5
/*14099fcf0*/  mov qword ptr [rbp+210h+var_1D8], 0
/*14099fcf8*/  mov [rbp+210h+var_1C8], 0
/*14099fd00*/  call nullsub_1
/*14099fd05*/  mov ecx, 4
/*14099fd0a*/  mov edx, 1
/*14099fd0f*/  call sub_140001650
/*14099fd14*/  test rax, rax
/*14099fd17*/  jz loc_1409A0603
/*14099fd1d*/  mov dword ptr [rax], 65707974h
/*14099fd23*/  mov qword ptr [rbp+210h+var_108], 4
/*14099fd2e*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099fd35*/  mov [rbp+210h+var_F8], 4
/*14099fd40*/  call nullsub_1
/*14099fd45*/  mov ecx, 10h
/*14099fd4a*/  mov edx, 1
/*14099fd4f*/  call sub_140001650
/*14099fd54*/  test rax, rax
/*14099fd57*/  mov [rbp+210h+var_128], rax
/*14099fd5e*/  jz loc_1409A05EE
/*14099fd64*/  movdqu xmm0, cs:xmmword_1417A595E
/*14099fd6c*/  movdqu xmmword ptr [rax], xmm0
/*14099fd70*/  mov byte ptr [rbp+210h+var_90], 3
/*14099fd77*/  mov qword ptr [rbp+210h+var_90+8], 10h
/*14099fd82*/  mov qword ptr [rbp+210h+var_80], rax
/*14099fd89*/  mov qword ptr [rbp+210h+var_80+8], 10h
/*14099fd94*/ loc_14099FD94: lea rcx, [rbp+210h+var_C0]
/*14099fd9b*/  lea rdx, [rbp+210h+var_1D8]
/*14099fd9f*/  lea r8, [rbp+210h+var_108]
/*14099fda6*/  lea r9, [rbp+210h+var_90]
/*14099fdad*/  call sub_140307860
/*14099fdb2*/  nop
/*14099fdb3*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099fdba*/  jz short loc_14099FDC9
/*14099fdbc*/ loc_14099FDBC: lea rcx, [rbp+210h+var_C0]
/*14099fdc3*/  call sub_1400104F0
/*14099fdc8*/  nop
/*14099fdc9*/ loc_14099FDC9: call nullsub_1
/*14099fdce*/  mov ecx, 0Ch
/*14099fdd3*/  mov edx, 1
/*14099fdd8*/  call sub_140001650
/*14099fddd*/  test rax, rax
/*14099fde0*/  jz loc_1409A05D9
/*14099fde6*/  mov rcx, 5F6C616974726170h
/*14099fdf0*/  mov [rax], rcx
/*14099fdf3*/  mov dword ptr [rax+8], 6E6F736Ah
/*14099fdfa*/  mov qword ptr [rbp+210h+var_108], 0Ch
/*14099fe05*/  mov qword ptr [rbp+210h+var_108+8], rax
/*14099fe0c*/  mov [rbp+210h+var_F8], 0Ch
/*14099fe17*/  mov r15, [rbp+210h+var_210]
/*14099fe1b*/  test r15, r15
/*14099fe1e*/  js loc_1409A0292
/*14099fe24*/  jz short loc_14099FE5A
/*14099fe26*/  call nullsub_1
/*14099fe2b*/  mov ebx, 1
/*14099fe30*/  mov edx, 1
/*14099fe35*/  mov rcx, r15
/*14099fe38*/  call sub_140001650
/*14099fe3d*/  test rax, rax
/*14099fe40*/  jz loc_1409A0294
/*14099fe46*/  mov r12, rax
/*14099fe49*/  mov rcx, rax
/*14099fe4c*/  mov rdx, [rbp+210h+var_208]
/*14099fe50*/  mov r8, r15
/*14099fe53*/  call sub_141684120
/*14099fe58*/  jmp short loc_14099FE60
/*14099fe5a*/ loc_14099FE5A: mov r12d, 1
/*14099fe60*/ loc_14099FE60: mov byte ptr [rbp+210h+var_90], 3
/*14099fe67*/  mov qword ptr [rbp+210h+var_90+8], r15
/*14099fe6e*/  mov qword ptr [rbp+210h+var_80], r12
/*14099fe75*/  mov qword ptr [rbp+210h+var_80+8], r15
/*14099fe7c*/  mov [rbp+210h+var_C6], 0
/*14099fe83*/ loc_14099FE83: lea rcx, [rbp+210h+var_C0]
/*14099fe8a*/  lea rdx, [rbp+210h+var_1D8]
/*14099fe8e*/  lea r8, [rbp+210h+var_108]
/*14099fe95*/  lea r9, [rbp+210h+var_90]
/*14099fe9c*/  call sub_140307860
/*14099fea1*/  nop
/*14099fea2*/  cmp byte ptr [rbp+210h+var_C0], 0FFh
/*14099fea9*/  jz short loc_14099FEB8
/*14099feab*/ loc_14099FEAB: lea rcx, [rbp+210h+var_C0]
/*14099feb2*/  call sub_1400104F0
/*14099feb7*/  nop
/*14099feb8*/ loc_14099FEB8: mov rax, [rbp+210h+var_1C8]
/*14099febc*/  lea rcx, [rbp+210h+var_F0+8]
/*14099fec3*/  mov [rcx+10h], rax
/*14099fec7*/  movdqu xmm0, [rbp+210h+var_1D8]
/*14099fecc*/  movdqu xmmword ptr [rcx], xmm0
/*14099fed0*/  mov byte ptr [rbp+210h+var_F0], 5
/*14099fed7*/  mov [rbp+210h+var_C7], 0
/*14099fede*/ loc_14099FEDE: lea rcx, [rbp+210h+var_90]
/*14099fee5*/  lea rdx, [rbp+210h+var_1C0]
/*14099fee9*/  lea r8, [rbp+210h+var_228]
/*14099feed*/  lea r9, [rbp+210h+var_F0]
/*14099fef4*/  call sub_140307860
/*14099fef9*/  nop
/*14099fefa*/  cmp byte ptr [rbp+210h+var_90], 0FFh
/*14099ff01*/  jz short loc_14099FF10
/*14099ff03*/ loc_14099FF03: lea rcx, [rbp+210h+var_90]
/*14099ff0a*/  call sub_1400104F0
/*14099ff0f*/  nop
/*14099ff10*/ loc_14099FF10: mov rax, [rbp+210h+var_1B0]
/*14099ff14*/  lea rcx, [rbp+210h+var_160+8]
/*14099ff1b*/  mov [rcx+10h], rax
/*14099ff1f*/  movdqu xmm0, [rbp+210h+var_1C0]
/*14099ff24*/  movdqu xmmword ptr [rcx], xmm0
/*14099ff28*/  mov byte ptr [rbp+210h+var_160], 5
/*14099ff2f*/  lea rax, aContentBlockDe; "content_block_delta"
/*14099ff36*/  mov qword ptr [rbp+210h+var_F0], rax
/*14099ff3d*/  mov qword ptr [rbp+210h+var_F0+8], 13h
/*14099ff48*/  lea rax, [rbp+210h+var_160]
/*14099ff4f*/  mov qword ptr [rbp+210h+var_108], rax
/*14099ff56*/  lea rax, [rbp+210h+var_F0]
/*14099ff5d*/  mov qword ptr [rbp+210h+var_90], rax
/*14099ff64*/  lea rax, sub_14041F680
/*14099ff6b*/  mov qword ptr [rbp+210h+var_90+8], rax
/*14099ff72*/  lea rax, [rbp+210h+var_108]
/*14099ff79*/  mov qword ptr [rbp+210h+var_80], rax
/*14099ff80*/  lea rax, sub_140B982E0
/*14099ff87*/  mov qword ptr [rbp+210h+var_80+8], rax
/*14099ff8e*/ loc_14099FF8E: lea rcx, [rbp+210h+var_C0]
/*14099ff95*/  lea rdx, unk_1417A94D0
/*14099ff9c*/  lea r8, [rbp+210h+var_90]
/*14099ffa3*/  call sub_14149C0F0
/*14099ffa8*/  nop
/*14099ffa9*/ loc_14099FFA9: mov rbx, qword ptr [rbp+210h+var_C0+8]
/*14099ffb0*/  mov r12, qword ptr [rbp+210h+var_B0]
/*14099ffb7*/  mov rax, qword ptr [rbp+210h+var_120]
/*14099ffbe*/  mov r13, [rbp+210h+var_110]
/*14099ffc5*/  sub rax, r13
/*14099ffc8*/  cmp r12, rax
/*14099ffcb*/  ja loc_1409A00DB
/*14099ffd1*/  test r12, r12
/*14099ffd4*/  jz short loc_14099FFEB
/*14099ffd6*/ loc_14099FFD6: mov rcx, qword ptr [rbp+210h+var_120+8]
/*14099ffdd*/  add rcx, r13
/*14099ffe0*/  mov rdx, rbx
/*14099ffe3*/  mov r8, r12
/*14099ffe6*/  call sub_141684120
/*14099ffeb*/ loc_14099FFEB: add r13, r12
/*14099ffee*/  mov [rbp+210h+var_110], r13
/*14099fff5*/  mov rdx, qword ptr [rbp+210h+var_C0]
/*14099fffc*/  test rdx, rdx
/*14099ffff*/  jz short loc_1409A0010
/*1409a0001*/  mov r8d, 1
/*1409a0007*/  mov rcx, rbx
/*1409a000a*/  call sub_140001660
/*1409a000f*/  nop
/*1409a0010*/ loc_1409A0010: lea rcx, [rbp+210h+var_160]
/*1409a0017*/  call sub_1400104F0
/*1409a001c*/  nop
/*1409a001d*/ loc_1409A001D: mov rdx, [rbp+210h+var_138]
/*1409a0024*/  test rdx, rdx
/*1409a0027*/  jz short loc_1409A003B
/*1409a0029*/  mov r8d, 1
/*1409a002f*/  mov rcx, [rbp+210h+var_140]
/*1409a0036*/  call sub_140001660
/*1409a003b*/ loc_1409A003B: mov rdx, [rbp+210h+var_130]
/*1409a0042*/  test rdx, rdx
/*1409a0045*/  jz short loc_1409A005A
/*1409a0047*/  mov r8d, 1
/*1409a004d*/  mov rcx, [rbp+210h+var_168]
/*1409a0054*/  call sub_140001660
/*1409a0059*/  nop
/*1409a005a*/ loc_1409A005A: lea rcx, [rbp+210h+var_1A0]
/*1409a005e*/  call sub_1400104F0
/*1409a0063*/  nop
/*1409a0064*/  mov rdx, [rbp+210h+var_238]
/*1409a0068*/  lea rcx, aIndex_0; "index"
/*1409a006f*/  cmp r14, rdx
/*1409a0072*/  jnz loc_14099EBD5
/*1409a0078*/  jmp loc_1409A018F
/*1409a007d*/ loc_1409A007D: mov r8d, 10h
/*1409a0083*/ loc_1409A0083: add r13, r8
/*1409a0086*/  and r13, rcx
/*1409a0089*/  movdqu xmm0, xmmword ptr [rax+r13]
/*1409a008f*/  pmovmskb edx, xmm0
/*1409a0093*/  add r8, 10h
/*1409a0097*/  test edx, edx
/*1409a0099*/  jnz loc_14099EFD4
/*1409a009f*/  jmp short loc_1409A0083
/*1409a00a1*/ loc_1409A00A1: mov edx, 1
/*1409a00a6*/  lea rcx, [rdi+38h]
/*1409a00aa*/  lea r8, [rdi+58h]
/*1409a00ae*/  mov r9b, 1
/*1409a00b1*/  call sub_1416964E0
/*1409a00b6*/  nop
/*1409a00b7*/  mov rax, [rdi+38h]
/*1409a00bb*/  mov rcx, [rdi+40h]
/*1409a00bf*/  jmp loc_14099EFBF
/*1409a00c4*/ loc_1409A00C4: movdqa xmm0, xmmword ptr [rax]
/*1409a00c8*/  pmovmskb edx, xmm0
/*1409a00cc*/  tzcnt r8d, edx
/*1409a00d1*/  movzx edx, byte ptr [rax+r8]
/*1409a00d6*/  jmp loc_14099EFEC
/*1409a00db*/ loc_1409A00DB: mov [rbp+210h+var_128], rbx
/*1409a00e2*/  mov [rsp+290h+var_270], 1
/*1409a00eb*/  mov r9d, 1
/*1409a00f1*/  lea rcx, [rbp+210h+var_120]
/*1409a00f8*/  mov rdx, r13
/*1409a00fb*/  mov r8, r12
/*1409a00fe*/  call sub_141688D30
/*1409a0103*/  nop
/*1409a0104*/  mov r13, [rbp+210h+var_110]
/*1409a010b*/  mov rbx, [rbp+210h+var_128]
/*1409a0112*/  jmp loc_14099FFD6
/*1409a0117*/ loc_1409A0117: mov [rbp+210h+var_D0], rbx
/*1409a011e*/  mov [rsp+290h+var_270], 1
/*1409a0127*/  mov r9d, 1
/*1409a012d*/  lea rcx, [rbp+210h+var_120]
/*1409a0134*/  mov rdx, r12
/*1409a0137*/  mov r8, r13
/*1409a013a*/  call sub_141688D30
/*1409a013f*/  nop
/*1409a0140*/  mov r12, [rbp+210h+var_110]
/*1409a0147*/  mov rbx, [rbp+210h+var_D0]
/*1409a014e*/  jmp loc_14099F484
/*1409a0153*/ loc_1409A0153: mov [rbp+210h+var_D0], rbx
/*1409a015a*/  mov [rsp+290h+var_270], 1
/*1409a0163*/  mov r9d, 1
/*1409a0169*/  lea rcx, [rbp+210h+var_120]
/*1409a0170*/  mov rdx, r12
/*1409a0173*/  mov r8, r13
/*1409a0176*/  call sub_141688D30
/*1409a017b*/  nop
/*1409a017c*/  mov r12, [rbp+210h+var_110]
/*1409a0183*/  mov rbx, [rbp+210h+var_D0]
/*1409a018a*/  jmp loc_14099FADD
/*1409a018f*/ loc_1409A018F: lea rcx, aFinishReason; "finish_reason"
/*1409a0196*/  mov edx, 0Dh
/*1409a019b*/  mov r8, [rbp+210h+var_170]
/*1409a01a2*/  call sub_141433D50
/*1409a01a7*/  nop
/*1409a01a8*/  test rax, rax
/*1409a01ab*/  jz loc_1409A023D
/*1409a01b1*/  cmp byte ptr [rax], 3
/*1409a01b4*/  jnz loc_1409A023D
/*1409a01ba*/  mov r9, [rax+18h]
/*1409a01be*/  test r9, r9
/*1409a01c1*/  jz short loc_1409A023D
/*1409a01c3*/  mov r8, [rax+10h]
/*1409a01c7*/  lea rcx, [rbp+210h+var_90]
/*1409a01ce*/  mov rdx, rdi
/*1409a01d1*/  call sub_14099C7B0
/*1409a01d6*/  nop
/*1409a01d7*/ loc_1409A01D7: mov r14, qword ptr [rbp+210h+var_90+8]
/*1409a01de*/  mov rdi, qword ptr [rbp+210h+var_80]
/*1409a01e5*/  mov rax, qword ptr [rbp+210h+var_120]
/*1409a01ec*/  mov rbx, [rbp+210h+var_110]
/*1409a01f3*/  sub rax, rbx
/*1409a01f6*/  cmp rdi, rax
/*1409a01f9*/  ja loc_1409A0317
/*1409a01ff*/  test rdi, rdi
/*1409a0202*/  jz short loc_1409A0219
/*1409a0204*/ loc_1409A0204: mov rcx, qword ptr [rbp+210h+var_120+8]
/*1409a020b*/  add rcx, rbx
/*1409a020e*/  mov rdx, r14
/*1409a0211*/  mov r8, rdi
/*1409a0214*/  call sub_141684120
/*1409a0219*/ loc_1409A0219: add rbx, rdi
/*1409a021c*/  mov [rbp+210h+var_110], rbx
/*1409a0223*/  mov rdx, qword ptr [rbp+210h+var_90]
/*1409a022a*/  test rdx, rdx
/*1409a022d*/  jz short loc_1409A023D
/*1409a022f*/  mov r8d, 1
/*1409a0235*/  mov rcx, r14
/*1409a0238*/  call sub_140001660
/*1409a023d*/ loc_1409A023D: mov rax, [rbp+210h+var_110]
/*1409a0244*/  mov [rsi+10h], rax
/*1409a0248*/  movdqu xmm0, [rbp+210h+var_120]
/*1409a0250*/  movdqu xmmword ptr [rsi], xmm0
/*1409a0254*/  mov [rbp+210h+var_69], 0
/*1409a025b*/ loc_1409A025B: lea rcx, [rbp+210h+var_200]
/*1409a025f*/  call sub_1400104F0
/*1409a0264*/  nop
/*1409a0265*/  jmp loc_14099E04B
/*1409a026a*/ loc_1409A026A: xor ecx, ecx
/*1409a026c*/  mov rdx, [rbp+210h+var_168]
/*1409a0273*/ loc_1409A0273: call sub_1416C2D4B
/*1409a0279*/  jmp loc_1409A0784
/*1409a027e*/ loc_1409A027E: xor ecx, ecx
/*1409a0280*/ loc_1409A0280: mov rdx, [rbp+210h+var_140]
/*1409a0287*/  call sub_1416C2D4B
/*1409a028d*/  jmp loc_1409A0784
/*1409a0292*/ loc_1409A0292: xor ebx, ebx
/*1409a0294*/ loc_1409A0294: mov [rbp+210h+var_C6], 1
/*1409a029b*/ loc_1409A029B: mov rcx, rbx
/*1409a029e*/  mov rdx, r15
/*1409a02a1*/  call sub_1416C2D4B
/*1409a02a7*/  jmp loc_1409A0784
/*1409a02ac*/ loc_1409A02AC: xor ebx, ebx
/*1409a02ae*/ loc_1409A02AE: mov [rbp+210h+var_C4], 1
/*1409a02b5*/ loc_1409A02B5: mov rcx, rbx
/*1409a02b8*/  mov rdx, r13
/*1409a02bb*/  call sub_1416C2D4B
/*1409a02c1*/  jmp loc_1409A0784
/*1409a02c6*/ loc_1409A02C6: mov [rbp+210h+var_170], r12
/*1409a02cd*/  mov [rsp+290h+var_270], 1
/*1409a02d6*/  lea rcx, [rbp+210h+var_120]
/*1409a02dd*/  mov r9d, 1
/*1409a02e3*/  xor edx, edx
/*1409a02e5*/  mov r8, r15
/*1409a02e8*/  call sub_141688D30
/*1409a02ed*/  nop
/*1409a02ee*/ loc_1409A02EE: mov r13, qword ptr [rbp+210h+var_120+8]
/*1409a02f5*/  mov r14, [rbp+210h+var_110]
/*1409a02fc*/  lea rcx, [r14+r13]
/*1409a0300*/  mov r12, [rbp+210h+var_170]
/*1409a0307*/  mov rdx, r12
/*1409a030a*/  mov r8, r15
/*1409a030d*/  call sub_141684120
/*1409a0312*/  jmp loc_14099DF8B
/*1409a0317*/ loc_1409A0317: mov [rbp+210h+var_170], r14
/*1409a031e*/  mov [rsp+290h+var_270], 1
/*1409a0327*/  lea rcx, [rbp+210h+var_120]
/*1409a032e*/  mov r9d, 1
/*1409a0334*/  mov rdx, rbx
/*1409a0337*/  mov r8, rdi
/*1409a033a*/  call sub_141688D30
/*1409a033f*/  nop
/*1409a0340*/  mov rbx, [rbp+210h+var_110]
/*1409a0347*/  mov r14, [rbp+210h+var_170]
/*1409a034e*/  jmp loc_1409A0204
/*1409a0353*/ loc_1409A0353: mov rax, qword ptr [rbp+210h+var_90+8]
/*1409a035a*/  mov qword ptr [rbp+210h+var_C0], rax
/*1409a0361*/ loc_1409A0361: lea rax, off_1417A58D8; "src\\core\\relay\\translator.rs"
/*1409a0368*/  mov [rsp+290h+var_270], rax
/*1409a036d*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409a0374*/  lea r9, off_1417A5560
/*1409a037b*/  lea r8, [rbp+210h+var_C0]
/*1409a0382*/  mov edx, 2Bh ; '+'
/*1409a0387*/  call sub_1416C3060
/*1409a038d*/  jmp loc_1409A0784
/*1409a0392*/ loc_1409A0392: mov rax, qword ptr [rbp+210h+var_90+8]
/*1409a0399*/  mov qword ptr [rbp+210h+var_C0], rax
/*1409a03a0*/ loc_1409A03A0: lea rax, off_1417A58D8; "src\\core\\relay\\translator.rs"
/*1409a03a7*/  mov [rsp+290h+var_270], rax
/*1409a03ac*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409a03b3*/  lea r9, off_1417A5560
/*1409a03ba*/  lea r8, [rbp+210h+var_C0]
/*1409a03c1*/  mov edx, 2Bh ; '+'
/*1409a03c6*/  call sub_1416C3060
/*1409a03cc*/  jmp loc_1409A0784
/*1409a03d1*/ loc_1409A03D1: mov rax, qword ptr [rbp+210h+var_90+8]
/*1409a03d8*/  mov qword ptr [rbp+210h+var_C0], rax
/*1409a03df*/ loc_1409A03DF: lea rax, off_1417A58D8; "src\\core\\relay\\translator.rs"
/*1409a03e6*/  mov [rsp+290h+var_270], rax
/*1409a03eb*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409a03f2*/  lea r9, off_1417A5560
/*1409a03f9*/  lea r8, [rbp+210h+var_C0]
/*1409a0400*/  mov edx, 2Bh ; '+'
/*1409a0405*/  call sub_1416C3060
/*1409a040b*/  jmp loc_1409A0784
/*1409a0410*/ loc_1409A0410: mov [rbp+210h+var_168], rbx
/*1409a0417*/  mov [rsp+290h+var_270], 1
/*1409a0420*/  lea rcx, [rbp+210h+var_120]
/*1409a0427*/  mov r9d, 1
/*1409a042d*/  mov rdx, r14
/*1409a0430*/  mov r8, r15
/*1409a0433*/  call sub_141688D30
/*1409a0438*/  nop
/*1409a0439*/  mov r14, [rbp+210h+var_110]
/*1409a0440*/  mov rbx, [rbp+210h+var_168]
/*1409a0447*/  jmp loc_14099EB38
/*1409a044c*/ loc_1409A044C: mov [rsp+290h+var_270], 1
/*1409a0455*/  lea rcx, [rbp+210h+var_120]
/*1409a045c*/  mov r9d, 1
/*1409a0462*/  mov rdx, r14
/*1409a0465*/  mov r8, r12
/*1409a0468*/  call sub_141688D30
/*1409a046d*/  nop
/*1409a046e*/  mov r13, qword ptr [rbp+210h+var_120+8]
/*1409a0475*/  mov r14, [rbp+210h+var_110]
/*1409a047c*/  jmp loc_14099E642
/*1409a0481*/ loc_1409A0481: mov [rbp+210h+var_69], 1
/*1409a0488*/ loc_1409A0488: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a048f*/  call sub_1416C3040
/*1409a0495*/  jmp loc_1409A0784
/*1409a049a*/ loc_1409A049A: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a04a1*/  mov [rsp+290h+var_270], rax
/*1409a04a6*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409a04ad*/  lea r9, unk_1417A5580
/*1409a04b4*/  lea r8, [rbp+210h+var_171]
/*1409a04bb*/  mov edx, 37h ; '7'
/*1409a04c0*/  call sub_1416C3060
/*1409a04c6*/  jmp loc_1409A0784
/*1409a04cb*/ loc_1409A04CB: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a04d2*/  call sub_1416C3040
/*1409a04d8*/  jmp loc_1409A0784
/*1409a04dd*/ loc_1409A04DD: mov ecx, 1
/*1409a04e2*/  mov edx, 4
/*1409a04e7*/  call sub_1416C2D4B
/*1409a04ed*/  jmp loc_1409A0784
/*1409a04f2*/ loc_1409A04F2: mov ecx, 1
/*1409a04f7*/  mov edx, 13h
/*1409a04fc*/  call sub_1416C2D4B
/*1409a0502*/  jmp loc_1409A0784
/*1409a0507*/ loc_1409A0507: mov ecx, 1
/*1409a050c*/  mov edx, 5
/*1409a0511*/  call sub_1416C2D4B
/*1409a0517*/  jmp loc_1409A0784
/*1409a051c*/ loc_1409A051C: mov ecx, 1
/*1409a0521*/  mov edx, 5
/*1409a0526*/  call sub_1416C2D4B
/*1409a052c*/  jmp loc_1409A0784
/*1409a0531*/ loc_1409A0531: mov ecx, 1
/*1409a0536*/  mov edx, 4
/*1409a053b*/  call sub_1416C2D4B
/*1409a0541*/  jmp loc_1409A0784
/*1409a0546*/ loc_1409A0546: mov ecx, 1
/*1409a054b*/  mov edx, 0Ah
/*1409a0550*/  call sub_1416C2D4B
/*1409a0556*/  jmp loc_1409A0784
/*1409a055b*/ loc_1409A055B: mov ecx, 1
/*1409a0560*/  mov edx, 4
/*1409a0565*/  call sub_1416C2D4B
/*1409a056b*/  jmp loc_1409A0784
/*1409a0570*/ loc_1409A0570: mov ecx, 1
/*1409a0575*/  mov edx, 4
/*1409a057a*/  call sub_1416C2D4B
/*1409a0580*/  jmp loc_1409A0784
/*1409a0585*/ loc_1409A0585: mov ecx, 1
/*1409a058a*/  mov edx, 5
/*1409a058f*/  call sub_1416C2D4B
/*1409a0595*/  jmp loc_1409A0784
/*1409a059a*/ loc_1409A059A: mov ecx, 1
/*1409a059f*/  mov edx, 0Dh
/*1409a05a4*/  call sub_1416C2D4B
/*1409a05aa*/  jmp loc_1409A0784
/*1409a05af*/ loc_1409A05AF: mov ecx, 1
/*1409a05b4*/  mov edx, 4
/*1409a05b9*/  call sub_1416C2D4B
/*1409a05bf*/  jmp loc_1409A0784
/*1409a05c4*/ loc_1409A05C4: mov ecx, 1
/*1409a05c9*/  mov edx, 4
/*1409a05ce*/  call sub_1416C2D4B
/*1409a05d4*/  jmp loc_1409A0784
/*1409a05d9*/ loc_1409A05D9: mov ecx, 1
/*1409a05de*/  mov edx, 0Ch
/*1409a05e3*/  call sub_1416C2D4B
/*1409a05e9*/  jmp loc_1409A0784
/*1409a05ee*/ loc_1409A05EE: mov ecx, 1
/*1409a05f3*/  mov edx, 10h
/*1409a05f8*/  call sub_1416C2D4B
/*1409a05fe*/  jmp loc_1409A0784
/*1409a0603*/ loc_1409A0603: mov ecx, 1
/*1409a0608*/  mov edx, 4
/*1409a060d*/  call sub_1416C2D4B
/*1409a0613*/  jmp loc_1409A0784
/*1409a0618*/ loc_1409A0618: mov ecx, 1
/*1409a061d*/  mov edx, 5
/*1409a0622*/  call sub_1416C2D4B
/*1409a0628*/  jmp loc_1409A0784
/*1409a062d*/ loc_1409A062D: mov ecx, 1
/*1409a0632*/  mov edx, 5
/*1409a0637*/  call sub_1416C2D4B
/*1409a063d*/  jmp loc_1409A0784
/*1409a0642*/ loc_1409A0642: mov ecx, 1
/*1409a0647*/  mov edx, 13h
/*1409a064c*/  call sub_1416C2D4B
/*1409a0652*/  jmp loc_1409A0784
/*1409a0657*/ loc_1409A0657: mov ecx, 1
/*1409a065c*/  mov edx, 4
/*1409a0661*/  call sub_1416C2D4B
/*1409a0667*/  jmp loc_1409A0784
/*1409a066c*/ loc_1409A066C: mov ecx, 1
/*1409a0671*/  mov edx, 2
/*1409a0676*/  call sub_1416C2D4B
/*1409a067c*/  jmp loc_1409A0784
/*1409a0681*/ loc_1409A0681: mov ecx, 1
/*1409a0686*/  mov edx, 8
/*1409a068b*/  call sub_1416C2D4B
/*1409a0691*/  jmp loc_1409A0784
/*1409a0696*/ loc_1409A0696: mov ecx, 1
/*1409a069b*/  mov edx, 4
/*1409a06a0*/  call sub_1416C2D4B
/*1409a06a6*/  jmp loc_1409A0784
/*1409a06ab*/ loc_1409A06AB: mov ecx, 1
/*1409a06b0*/  mov edx, 0Dh
/*1409a06b5*/  call sub_1416C2D4B
/*1409a06bb*/  jmp loc_1409A0784
/*1409a06c0*/ loc_1409A06C0: mov ecx, 1
/*1409a06c5*/  mov edx, 5
/*1409a06ca*/  call sub_1416C2D4B
/*1409a06d0*/  jmp loc_1409A0784
/*1409a06d5*/ loc_1409A06D5: mov ecx, 1
/*1409a06da*/  mov edx, 13h
/*1409a06df*/  call sub_1416C2D4B
/*1409a06e5*/  jmp loc_1409A0784
/*1409a06ea*/ loc_1409A06EA: mov ecx, 1
/*1409a06ef*/  mov edx, 4
/*1409a06f4*/  call sub_1416C2D4B
/*1409a06fa*/  jmp loc_1409A0784
/*1409a06ff*/ loc_1409A06FF: lea rax, off_1417A5938; "src\\core\\relay\\translator.rs"
/*1409a0706*/  mov [rsp+290h+var_270], rax
/*1409a070b*/  mov r9d, 0Ch
/*1409a0711*/  xor r8d, r8d
/*1409a0714*/  call sub_1416C2F60
/*1409a071a*/  jmp short loc_1409A0784
/*1409a071c*/ loc_1409A071C: mov ecx, 1
/*1409a0721*/  mov edx, 5
/*1409a0726*/  call sub_1416C2D4B
/*1409a072c*/  jmp short loc_1409A0784
/*1409a072e*/ loc_1409A072E: mov ecx, 1
/*1409a0733*/  mov edx, 12h
/*1409a0738*/  call sub_1416C2D4B
/*1409a073e*/  jmp short loc_1409A0784
/*1409a0740*/ loc_1409A0740: mov ecx, 1
/*1409a0745*/  mov edx, 4
/*1409a074a*/  call sub_1416C2D4B
/*1409a0750*/  jmp short loc_1409A0784
/*1409a0752*/ loc_1409A0752: mov ecx, 1
/*1409a0757*/  mov edx, 5
/*1409a075c*/  call sub_1416C2D4B
/*1409a0762*/  jmp short loc_1409A0784
/*1409a0764*/ loc_1409A0764: mov ecx, 1
/*1409a0769*/  mov rdx, rbx
/*1409a076c*/  call sub_1416C2D4B
/*1409a0772*/  jmp short loc_1409A0784
/*1409a0774*/ loc_1409A0774: mov ecx, 1
/*1409a0779*/  mov edx, 4
/*1409a077e*/  call sub_1416C2D4B
/*1409a0784*/ loc_1409A0784: ud2
/*1409a0786*/ loc_1409A0786: mov rax, [rbp+210h+var_138]
/*1409a078d*/  mov [rbp+210h+var_140], rax
/*1409a0794*/  mov ecx, 1
/*1409a0799*/  jmp loc_1409A0280
/*1409a079e*/ loc_1409A079E: mov rdx, r13
/*1409a07a1*/  mov ecx, 1
/*1409a07a6*/  jmp loc_1409A0273
