// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A09C80(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // kr00_8
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  void *v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  ... [59777 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 416/416 retrieved (all pages fetched: True)
// disasm instructions: 2151/2151 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x140a09c80-0x140a09cc9 size=73 type=0 succ=['0x140a09cc9', '0x140a09f35'] pred=[]
// BB 0x140a09cc9-0x140a09cd2 size=9 type=0 succ=['0x140a09cd2', '0x140a09f35'] pred=['0x140a09c80']
// BB 0x140a09cd2-0x140a09ce4 size=18 type=0 succ=['0x140a09ce4', '0x140a09f35'] pred=['0x140a09cc9']
// BB 0x140a09ce4-0x140a09cf8 size=20 type=1 succ=['0x140a09cf8', '0x140a09d77', '0x140a09dcd', '0x140a09f15', '0x140a09f35'] pred=['0x140a09cd2']
// BB 0x140a09cf8-0x140a09d10 size=24 type=0 succ=['0x140a09d10', '0x140a09f35'] pred=['0x140a09ce4']
// BB 0x140a09d10-0x140a09d2d size=29 type=0 succ=['0x140a09d2d', '0x140a09f35'] pred=['0x140a09cf8']
// BB 0x140a09d2d-0x140a09d36 size=9 type=0 succ=['0x140a09d36', '0x140a09f35'] pred=['0x140a09d10']
// BB 0x140a09d36-0x140a09d61 size=43 type=0 succ=['0x140a09d61', '0x140a0b008'] pred=['0x140a09d2d']
// BB 0x140a09d61-0x140a09d6a size=9 type=0 succ=['0x140a09d6a', '0x140a0b008'] pred=['0x140a09d36']
// BB 0x140a09d6a-0x140a09d77 size=13 type=0 succ=['0x140a0b00b'] pred=['0x140a09d61']
// BB 0x140a09d77-0x140a09d95 size=30 type=0 succ=['0x140a09d95', '0x140a09f35'] pred=['0x140a09ce4']
// BB 0x140a09d95-0x140a09db7 size=34 type=0 succ=['0x140a09db7', '0x140a0af98'] pred=['0x140a09d77']
// BB 0x140a09db7-0x140a09dc0 size=9 type=0 succ=['0x140a09dc0', '0x140a0af98'] pred=['0x140a09d95']
// BB 0x140a09dc0-0x140a09dcd size=13 type=0 succ=['0x140a0af9b'] pred=['0x140a09db7']
// BB 0x140a09dcd-0x140a09de0 size=19 type=0 succ=['0x140a09de0', '0x140a09f35'] pred=['0x140a09ce4']
// BB 0x140a09de0-0x140a09dfd size=29 type=0 succ=['0x140a09dfd', '0x140a09f35'] pred=['0x140a09dcd']
// BB 0x140a09dfd-0x140a09e06 size=9 type=0 succ=['0x140a09e06', '0x140a09f35'] pred=['0x140a09de0']
// BB 0x140a09e06-0x140a09e4a size=68 type=0 succ=['0x140a09e4a', '0x140a0c543'] pred=['0x140a09dfd']
// BB 0x140a09e4a-0x140a09e56 size=12 type=0 succ=['0x140a09e56', '0x140a09e64'] pred=['0x140a09e06']
// BB 0x140a09e56-0x140a09e64 size=14 type=0 succ=['0x140a09e64'] pred=['0x140a09e4a']
// BB 0x140a09e64-0x140a09e6f size=11 type=0 succ=['0x140a09e6f'] pred=['0x140a09e4a', '0x140a09e56']
// BB 0x140a09e6f-0x140a09e84 size=21 type=0 succ=['0x140a09e84'] pred=['0x140a09e64']
// BB 0x140a09e84-0x140a09ea1 size=29 type=0 succ=['0x140a09ea1', '0x140a0bb1d'] pred=['0x140a09e6f']
// BB 0x140a09ea1-0x140a09eaa size=9 type=0 succ=['0x140a09eaa', '0x140a0bb1d'] pred=['0x140a09e84']
// BB 0x140a09eaa-0x140a09eee size=68 type=0 succ=['0x140a09eee', '0x140a0c7ce'] pred=['0x140a09ea1']
// BB 0x140a09eee-0x140a09f05 size=23 type=0 succ=['0x140a09f05', '0x140a0bc31'] pred=['0x140a09eaa']
// BB 0x140a09f05-0x140a09f15 size=16 type=0 succ=['0x140a0bc34'] pred=['0x140a09eee']
// BB 0x140a09f15-0x140a09f35 size=32 type=0 succ=['0x140a09f35', '0x140a09f60'] pred=['0x140a09ce4']
// BB 0x140a09f35-0x140a09f4c size=23 type=0 succ=['0x140a09f4c'] pred=['0x140a09c80', '0x140a09cc9', '0x140a09cd2', '0x140a09ce4', '0x140a09cf8', '0x140a09d10', '0x140a09d2d', '0x140a09d77', '0x140a09dcd', '0x140a09de0', '0x140a09dfd', '0x140a09f15', '0x140a0af9b', '0x140a0afc6']
// BB 0x140a09f4c-0x140a09f60 size=20 type=2 succ=[] pred=['0x140a09f35', '0x140a0af3f', '0x140a0baa5', '0x140a0bbfa', '0x140a0bc27', '0x140a0c4d8']
// BB 0x140a09f60-0x140a09f7d size=29 type=0 succ=['0x140a09f7d', '0x140a0c505'] pred=['0x140a09f15']
// BB 0x140a09f7d-0x140a09fb4 size=55 type=0 succ=['0x140a09fb4', '0x140a0c850'] pred=['0x140a09f60']
// BB 0x140a09fb4-0x140a09ffb size=71 type=0 succ=['0x140a09ffb', '0x140a0c865'] pred=['0x140a09f7d']
// BB 0x140a09ffb-0x140a0a02c size=49 type=0 succ=['0x140a0a02c'] pred=['0x140a09fb4']
// BB 0x140a0a02c-0x140a0a054 size=40 type=0 succ=['0x140a0a054', '0x140a0a061'] pred=['0x140a09ffb']
// BB 0x140a0a054-0x140a0a061 size=13 type=0 succ=['0x140a0a061'] pred=['0x140a0a02c']
// BB 0x140a0a061-0x140a0a07e size=29 type=0 succ=['0x140a0a07e', '0x140a0c87a'] pred=['0x140a0a02c', '0x140a0a054']
// BB 0x140a0a07e-0x140a0a0d1 size=83 type=0 succ=['0x140a0a0d1', '0x140a0c88f'] pred=['0x140a0a061']
// BB 0x140a0a0d1-0x140a0a118 size=71 type=0 succ=['0x140a0a118', '0x140a0c8a4'] pred=['0x140a0a07e']
// BB 0x140a0a118-0x140a0a146 size=46 type=0 succ=['0x140a0a146'] pred=['0x140a0a0d1']
// BB 0x140a0a146-0x140a0a171 size=43 type=0 succ=['0x140a0a171', '0x140a0a17e'] pred=['0x140a0a118']
// BB 0x140a0a171-0x140a0a17e size=13 type=0 succ=['0x140a0a17e'] pred=['0x140a0a146']
// BB 0x140a0a17e-0x140a0a19b size=29 type=0 succ=['0x140a0a19b', '0x140a0c8b9'] pred=['0x140a0a146', '0x140a0a171']
// BB 0x140a0a19b-0x140a0a1f0 size=85 type=0 succ=['0x140a0a1f0', '0x140a0c8ce'] pred=['0x140a0a17e']
// BB 0x140a0a1f0-0x140a0a251 size=97 type=0 succ=['0x140a0a251'] pred=['0x140a0a19b']
// BB 0x140a0a251-0x140a0a27c size=43 type=0 succ=['0x140a0a27c', '0x140a0a289'] pred=['0x140a0a1f0']
// BB 0x140a0a27c-0x140a0a289 size=13 type=0 succ=['0x140a0a289'] pred=['0x140a0a251']
// BB 0x140a0a289-0x140a0a2a6 size=29 type=0 succ=['0x140a0a2a6', '0x140a0c8e3'] pred=['0x140a0a251', '0x140a0a27c']
// BB 0x140a0a2a6-0x140a0a300 size=90 type=0 succ=['0x140a0a300', '0x140a0c8f8'] pred=['0x140a0a289']
// BB 0x140a0a300-0x140a0a347 size=71 type=0 succ=['0x140a0a347', '0x140a0c90d'] pred=['0x140a0a2a6']
// BB 0x140a0a347-0x140a0a377 size=48 type=0 succ=['0x140a0a377'] pred=['0x140a0a300']
// BB 0x140a0a377-0x140a0a3a2 size=43 type=0 succ=['0x140a0a3a2', '0x140a0a3af'] pred=['0x140a0a347']
// BB 0x140a0a3a2-0x140a0a3af size=13 type=0 succ=['0x140a0a3af'] pred=['0x140a0a377']
// BB 0x140a0a3af-0x140a0a3cc size=29 type=0 succ=['0x140a0a3cc', '0x140a0c922'] pred=['0x140a0a377', '0x140a0a3a2']
// BB 0x140a0a3cc-0x140a0a426 size=90 type=0 succ=['0x140a0a426', '0x140a0c937'] pred=['0x140a0a3af']
// BB 0x140a0a426-0x140a0a483 size=93 type=0 succ=['0x140a0a483', '0x140a0c94c'] pred=['0x140a0a3cc']
// BB 0x140a0a483-0x140a0a4ca size=71 type=0 succ=['0x140a0a4ca', '0x140a0c961'] pred=['0x140a0a426']
// BB 0x140a0a4ca-0x140a0a4f8 size=46 type=0 succ=['0x140a0a4f8'] pred=['0x140a0a483']
// BB 0x140a0a4f8-0x140a0a523 size=43 type=0 succ=['0x140a0a523', '0x140a0a530'] pred=['0x140a0a4ca']
// BB 0x140a0a523-0x140a0a530 size=13 type=0 succ=['0x140a0a530'] pred=['0x140a0a4f8']
// BB 0x140a0a530-0x140a0a54d size=29 type=0 succ=['0x140a0a54d', '0x140a0c976'] pred=['0x140a0a4f8', '0x140a0a523']
// BB 0x140a0a54d-0x140a0a5a7 size=90 type=0 succ=['0x140a0a5a7', '0x140a0c98b'] pred=['0x140a0a530']
// BB 0x140a0a5a7-0x140a0a5ee size=71 type=0 succ=['0x140a0a5ee', '0x140a0c9a0'] pred=['0x140a0a54d']
// BB 0x140a0a5ee-0x140a0a61e size=48 type=0 succ=['0x140a0a61e'] pred=['0x140a0a5a7']
// BB 0x140a0a61e-0x140a0a649 size=43 type=0 succ=['0x140a0a649', '0x140a0a656'] pred=['0x140a0a5ee']
// BB 0x140a0a649-0x140a0a656 size=13 type=0 succ=['0x140a0a656'] pred=['0x140a0a61e']
// BB 0x140a0a656-0x140a0a680 size=42 type=0 succ=['0x140a0a680'] pred=['0x140a0a61e', '0x140a0a649']
// BB 0x140a0a680-0x140a0a6ab size=43 type=0 succ=['0x140a0a6ab', '0x140a0a6b8'] pred=['0x140a0a656']
// BB 0x140a0a6ab-0x140a0a6b8 size=13 type=0 succ=['0x140a0a6b8'] pred=['0x140a0a680']
// BB 0x140a0a6b8-0x140a0a6d5 size=29 type=0 succ=['0x140a0a6d5', '0x140a0c9b5'] pred=['0x140a0a680', '0x140a0a6ab']
// BB 0x140a0a6d5-0x140a0a720 size=75 type=0 succ=['0x140a0a720', '0x140a0c9ca'] pred=['0x140a0a6b8']
// BB 0x140a0a720-0x140a0a78c size=108 type=0 succ=['0x140a0a78c'] pred=['0x140a0a6d5']
// BB 0x140a0a78c-0x140a0a7b7 size=43 type=0 succ=['0x140a0a7b7', '0x140a0a7c4'] pred=['0x140a0a720']
// BB 0x140a0a7b7-0x140a0a7c4 size=13 type=0 succ=['0x140a0a7c4'] pred=['0x140a0a78c']
// BB 0x140a0a7c4-0x140a0a7ee size=42 type=0 succ=['0x140a0a7ee'] pred=['0x140a0a78c', '0x140a0a7b7']
// BB 0x140a0a7ee-0x140a0a819 size=43 type=0 succ=['0x140a0a819', '0x140a0a826'] pred=['0x140a0a7c4']
// BB 0x140a0a819-0x140a0a826 size=13 type=0 succ=['0x140a0a826'] pred=['0x140a0a7ee']
// BB 0x140a0a826-0x140a0a843 size=29 type=0 succ=['0x140a0a843', '0x140a0c9df'] pred=['0x140a0a7ee', '0x140a0a819']
// BB 0x140a0a843-0x140a0a8a0 size=93 type=0 succ=['0x140a0a8a0', '0x140a0c9f4'] pred=['0x140a0a826']
// BB 0x140a0a8a0-0x140a0a8e7 size=71 type=0 succ=['0x140a0a8e7', '0x140a0ca09'] pred=['0x140a0a843']
// BB 0x140a0a8e7-0x140a0a917 size=48 type=0 succ=['0x140a0a917'] pred=['0x140a0a8a0']
// BB 0x140a0a917-0x140a0a942 size=43 type=0 succ=['0x140a0a942', '0x140a0a94f'] pred=['0x140a0a8e7']
// BB 0x140a0a942-0x140a0a94f size=13 type=0 succ=['0x140a0a94f'] pred=['0x140a0a917']
// BB 0x140a0a94f-0x140a0a96c size=29 type=0 succ=['0x140a0a96c', '0x140a0ca1e'] pred=['0x140a0a917', '0x140a0a942']
// BB 0x140a0a96c-0x140a0a9b7 size=75 type=0 succ=['0x140a0a9b7', '0x140a0ca33'] pred=['0x140a0a94f']
// BB 0x140a0a9b7-0x140a0aa02 size=75 type=0 succ=['0x140a0aa02'] pred=['0x140a0a96c']
// BB 0x140a0aa02-0x140a0aa2d size=43 type=0 succ=['0x140a0aa2d', '0x140a0aa3a'] pred=['0x140a0a9b7']
// BB 0x140a0aa2d-0x140a0aa3a size=13 type=0 succ=['0x140a0aa3a'] pred=['0x140a0aa02']
// BB 0x140a0aa3a-0x140a0aa64 size=42 type=0 succ=['0x140a0aa64'] pred=['0x140a0aa02', '0x140a0aa2d']
// BB 0x140a0aa64-0x140a0aa8f size=43 type=0 succ=['0x140a0aa8f', '0x140a0aa9c'] pred=['0x140a0aa3a']
// BB 0x140a0aa8f-0x140a0aa9c size=13 type=0 succ=['0x140a0aa9c'] pred=['0x140a0aa64']
// BB 0x140a0aa9c-0x140a0aab9 size=29 type=0 succ=['0x140a0aab9', '0x140a0ca48'] pred=['0x140a0aa64', '0x140a0aa8f']
// BB 0x140a0aab9-0x140a0ab1c size=99 type=0 succ=['0x140a0ab1c', '0x140a0ca5d'] pred=['0x140a0aa9c']
// BB 0x140a0ab1c-0x140a0ab63 size=71 type=0 succ=['0x140a0ab63', '0x140a0ca72'] pred=['0x140a0aab9']
// BB 0x140a0ab63-0x140a0ab93 size=48 type=0 succ=['0x140a0ab93'] pred=['0x140a0ab1c']
// BB 0x140a0ab93-0x140a0abbe size=43 type=0 succ=['0x140a0abbe', '0x140a0abcb'] pred=['0x140a0ab63']
// BB 0x140a0abbe-0x140a0abcb size=13 type=0 succ=['0x140a0abcb'] pred=['0x140a0ab93']
// BB 0x140a0abcb-0x140a0abe8 size=29 type=0 succ=['0x140a0abe8', '0x140a0ca87'] pred=['0x140a0ab93', '0x140a0abbe']
// BB 0x140a0abe8-0x140a0ac33 size=75 type=0 succ=['0x140a0ac33', '0x140a0ca9c'] pred=['0x140a0abcb']
// BB 0x140a0ac33-0x140a0ac7d size=74 type=0 succ=['0x140a0ac7d'] pred=['0x140a0abe8']
// BB 0x140a0ac7d-0x140a0aca8 size=43 type=0 succ=['0x140a0aca8', '0x140a0acb5'] pred=['0x140a0ac33']
// BB 0x140a0aca8-0x140a0acb5 size=13 type=0 succ=['0x140a0acb5'] pred=['0x140a0ac7d']
// BB 0x140a0acb5-0x140a0acdf size=42 type=0 succ=['0x140a0acdf'] pred=['0x140a0ac7d', '0x140a0aca8']
// BB 0x140a0acdf-0x140a0ad0a size=43 type=0 succ=['0x140a0ad0a', '0x140a0ad17'] pred=['0x140a0acb5']
// BB 0x140a0ad0a-0x140a0ad17 size=13 type=0 succ=['0x140a0ad17'] pred=['0x140a0acdf']
// BB 0x140a0ad17-0x140a0ad41 size=42 type=0 succ=['0x140a0ad41'] pred=['0x140a0acdf', '0x140a0ad0a']
// BB 0x140a0ad41-0x140a0ad69 size=40 type=0 succ=['0x140a0ad69', '0x140a0ad76'] pred=['0x140a0ad17']
// BB 0x140a0ad69-0x140a0ad76 size=13 type=0 succ=['0x140a0ad76'] pred=['0x140a0ad41']
// BB 0x140a0ad76-0x140a0ad93 size=29 type=0 succ=['0x140a0ad93', '0x140a0cab1'] pred=['0x140a0ad41', '0x140a0ad69']
// BB 0x140a0ad93-0x140a0adda size=71 type=0 succ=['0x140a0adda', '0x140a0c516'] pred=['0x140a0ad76']
// BB 0x140a0adda-0x140a0adfa size=32 type=0 succ=['0x140a0adfa', '0x140a0cac6'] pred=['0x140a0ad93']
// BB 0x140a0adfa-0x140a0ae49 size=79 type=0 succ=['0x140a0ae49'] pred=['0x140a0adda']
// BB 0x140a0ae49-0x140a0ae74 size=43 type=0 succ=['0x140a0ae74', '0x140a0ae81'] pred=['0x140a0adfa']
// BB 0x140a0ae74-0x140a0ae81 size=13 type=0 succ=['0x140a0ae81'] pred=['0x140a0ae49']
// BB 0x140a0ae81-0x140a0aeab size=42 type=0 succ=['0x140a0aeab'] pred=['0x140a0ae49', '0x140a0ae74']
// BB 0x140a0aeab-0x140a0aed3 size=40 type=0 succ=['0x140a0aed3', '0x140a0aee0'] pred=['0x140a0ae81']
// BB 0x140a0aed3-0x140a0aee0 size=13 type=0 succ=['0x140a0aee0'] pred=['0x140a0aeab']
// BB 0x140a0aee0-0x140a0af0a size=42 type=0 succ=['0x140a0af0a'] pred=['0x140a0aeab', '0x140a0aed3']
// BB 0x140a0af0a-0x140a0af32 size=40 type=0 succ=['0x140a0af32', '0x140a0af3f'] pred=['0x140a0aee0']
// BB 0x140a0af32-0x140a0af3f size=13 type=0 succ=['0x140a0af3f'] pred=['0x140a0af0a']
// BB 0x140a0af3f-0x140a0af98 size=89 type=0 succ=['0x140a09f4c'] pred=['0x140a0af0a', '0x140a0af32']
// BB 0x140a0af98-0x140a0af9b size=3 type=0 succ=['0x140a0af9b'] pred=['0x140a09d95', '0x140a09db7']
// BB 0x140a0af9b-0x140a0afc6 size=43 type=0 succ=['0x140a09f35', '0x140a0afc6'] pred=['0x140a09dc0', '0x140a0af98']
// BB 0x140a0afc6-0x140a0afcf size=9 type=0 succ=['0x140a09f35', '0x140a0afcf'] pred=['0x140a0af9b']
// BB 0x140a0afcf-0x140a0afd9 size=10 type=0 succ=['0x140a0afd9', '0x140a0bb22'] pred=['0x140a0afc6']
// BB 0x140a0afd9-0x140a0afe2 size=9 type=0 succ=['0x140a0afe2', '0x140a0bb2c'] pred=['0x140a0afcf']
// BB 0x140a0afe2-0x140a0b008 size=38 type=0 succ=['0x140a0bbcf'] pred=['0x140a0afd9']
// BB 0x140a0b008-0x140a0b00b size=3 type=0 succ=['0x140a0b00b'] pred=['0x140a09d36', '0x140a09d61']
// BB 0x140a0b00b-0x140a0b040 size=53 type=0 succ=['0x140a0b040', '0x140a0c532'] pred=['0x140a09d6a', '0x140a0b008']
// BB 0x140a0b040-0x140a0b04c size=12 type=0 succ=['0x140a0b04c', '0x140a0b05a'] pred=['0x140a0b00b']
// BB 0x140a0b04c-0x140a0b05a size=14 type=0 succ=['0x140a0b05a'] pred=['0x140a0b040']
// BB 0x140a0b05a-0x140a0b06f size=21 type=0 succ=['0x140a0b06f'] pred=['0x140a0b040', '0x140a0b04c']
// BB 0x140a0b06f-0x140a0b08d size=30 type=0 succ=['0x140a0b08d', '0x140a0b160'] pred=['0x140a0b05a']
// BB 0x140a0b08d-0x140a0b0ab size=30 type=0 succ=['0x140a0b0ab', '0x140a0b160'] pred=['0x140a0b06f']
// BB 0x140a0b0ab-0x140a0b0b4 size=9 type=0 succ=['0x140a0b0b4', '0x140a0b160'] pred=['0x140a0b08d']
// BB 0x140a0b0b4-0x140a0b0d3 size=31 type=0 succ=['0x140a0b0d3', '0x140a0b160'] pred=['0x140a0b0ab']
// BB 0x140a0b0d3-0x140a0b10a size=55 type=0 succ=['0x140a0b10a'] pred=['0x140a0b0b4']
// BB 0x140a0b10a-0x140a0b12b size=33 type=0 succ=['0x140a0b12b', '0x140a0c7ff'] pred=['0x140a0b0d3']
// BB 0x140a0b12b-0x140a0b130 size=5 type=0 succ=['0x140a0b130', '0x140a0b13f'] pred=['0x140a0b10a']
// BB 0x140a0b130-0x140a0b13f size=15 type=0 succ=['0x140a0b13f'] pred=['0x140a0b12b', '0x140a0c7ff']
// BB 0x140a0b13f-0x140a0b14e size=15 type=0 succ=['0x140a0b14e', '0x140a0b160'] pred=['0x140a0b12b', '0x140a0b130']
// BB 0x140a0b14e-0x140a0b160 size=18 type=0 succ=['0x140a0b160'] pred=['0x140a0b13f']
// BB 0x140a0b160-0x140a0b1a0 size=64 type=0 succ=['0x140a0b1a0', '0x140a0cae2'] pred=['0x140a0b06f', '0x140a0b08d', '0x140a0b0ab', '0x140a0b0b4', '0x140a0b13f', '0x140a0b14e']
// BB 0x140a0b1a0-0x140a0b1ca size=42 type=0 succ=['0x140a0b1ca'] pred=['0x140a0b160']
// BB 0x140a0b1ca-0x140a0b1eb size=33 type=0 succ=['0x140a0b1eb', '0x140a0c558'] pred=['0x140a0b1a0']
// BB 0x140a0b1eb-0x140a0b239 size=78 type=0 succ=['0x140a0b239', '0x140a0b246'] pred=['0x140a0b1ca']
// BB 0x140a0b239-0x140a0b246 size=13 type=0 succ=['0x140a0b246'] pred=['0x140a0b1eb']
// BB 0x140a0b246-0x140a0b263 size=29 type=0 succ=['0x140a0b263', '0x140a0cb6d'] pred=['0x140a0b1eb', '0x140a0b239']
// BB 0x140a0b263-0x140a0b2b7 size=84 type=0 succ=['0x140a0b2b7', '0x140a0cb82'] pred=['0x140a0b246']
// BB 0x140a0b2b7-0x140a0b2e1 size=42 type=0 succ=['0x140a0b2e1'] pred=['0x140a0b263']
// BB 0x140a0b2e1-0x140a0b2ff size=30 type=0 succ=['0x140a0b2ff', '0x140a0c5d6'] pred=['0x140a0b2b7']
// BB 0x140a0b2ff-0x140a0b34d size=78 type=0 succ=['0x140a0b34d', '0x140a0b35a'] pred=['0x140a0b2e1']
// BB 0x140a0b34d-0x140a0b35a size=13 type=0 succ=['0x140a0b35a'] pred=['0x140a0b2ff']
// BB 0x140a0b35a-0x140a0b377 size=29 type=0 succ=['0x140a0b377', '0x140a0cbb3'] pred=['0x140a0b2ff', '0x140a0b34d']
// BB 0x140a0b377-0x140a0b3af size=56 type=0 succ=['0x140a0b3af'] pred=['0x140a0b35a']
// BB 0x140a0b3af-0x140a0b3d0 size=33 type=0 succ=['0x140a0b3d0', '0x140a0c654'] pred=['0x140a0b377']
// BB 0x140a0b3d0-0x140a0b41e size=78 type=0 succ=['0x140a0b41e', '0x140a0b42b'] pred=['0x140a0b3af']
// BB 0x140a0b41e-0x140a0b42b size=13 type=0 succ=['0x140a0b42b'] pred=['0x140a0b3d0']
// BB 0x140a0b42b-0x140a0b448 size=29 type=0 succ=['0x140a0b448', '0x140a0cbc8'] pred=['0x140a0b3d0', '0x140a0b41e']
// BB 0x140a0b448-0x140a0b4a2 size=90 type=0 succ=['0x140a0b4a2', '0x140a0cbdd'] pred=['0x140a0b42b']
// BB 0x140a0b4a2-0x140a0b4cc size=42 type=0 succ=['0x140a0b4cc'] pred=['0x140a0b448']
// BB 0x140a0b4cc-0x140a0b4ed size=33 type=0 succ=['0x140a0b4ed', '0x140a0c693'] pred=['0x140a0b4a2']
// BB 0x140a0b4ed-0x140a0b53b size=78 type=0 succ=['0x140a0b53b', '0x140a0b548'] pred=['0x140a0b4cc']
// BB 0x140a0b53b-0x140a0b548 size=13 type=0 succ=['0x140a0b548'] pred=['0x140a0b4ed']
// BB 0x140a0b548-0x140a0b565 size=29 type=0 succ=['0x140a0b565', '0x140a0cbf2'] pred=['0x140a0b4ed', '0x140a0b53b']
// BB 0x140a0b565-0x140a0b5c8 size=99 type=0 succ=['0x140a0b5c8', '0x140a0cc07'] pred=['0x140a0b548']
// BB 0x140a0b5c8-0x140a0b622 size=90 type=0 succ=['0x140a0b622', '0x140a0cc1c'] pred=['0x140a0b565']
// BB 0x140a0b622-0x140a0b64c size=42 type=0 succ=['0x140a0b64c'] pred=['0x140a0b5c8']
// BB 0x140a0b64c-0x140a0b66d size=33 type=0 succ=['0x140a0b66d', '0x140a0c6d2'] pred=['0x140a0b622']
// BB 0x140a0b66d-0x140a0b6bb size=78 type=0 succ=['0x140a0b6bb', '0x140a0b6c8'] pred=['0x140a0b64c']
// BB 0x140a0b6bb-0x140a0b6c8 size=13 type=0 succ=['0x140a0b6c8'] pred=['0x140a0b66d']
// BB 0x140a0b6c8-0x140a0b6e5 size=29 type=0 succ=['0x140a0b6e5', '0x140a0cc31'] pred=['0x140a0b66d', '0x140a0b6bb']
// BB 0x140a0b6e5-0x140a0b713 size=46 type=0 succ=['0x140a0b713'] pred=['0x140a0b6c8']
// BB 0x140a0b713-0x140a0b734 size=33 type=0 succ=['0x140a0b734', '0x140a0c711'] pred=['0x140a0b6e5']
// BB 0x140a0b734-0x140a0b782 size=78 type=0 succ=['0x140a0b782', '0x140a0b78f'] pred=['0x140a0b713']
// BB 0x140a0b782-0x140a0b78f size=13 type=0 succ=['0x140a0b78f'] pred=['0x140a0b734']
// BB 0x140a0b78f-0x140a0b7b9 size=42 type=0 succ=['0x140a0b7b9'] pred=['0x140a0b734', '0x140a0b782']
// BB 0x140a0b7b9-0x140a0b7e4 size=43 type=0 succ=['0x140a0b7e4', '0x140a0b7f1'] pred=['0x140a0b78f']
// BB 0x140a0b7e4-0x140a0b7f1 size=13 type=0 succ=['0x140a0b7f1'] pred=['0x140a0b7b9']
// BB 0x140a0b7f1-0x140a0b81b size=42 type=0 succ=['0x140a0b81b'] pred=['0x140a0b7b9', '0x140a0b7e4']
// BB 0x140a0b81b-0x140a0b846 size=43 type=0 succ=['0x140a0b846', '0x140a0b853'] pred=['0x140a0b7f1']
// BB 0x140a0b846-0x140a0b853 size=13 type=0 succ=['0x140a0b853'] pred=['0x140a0b81b']
// BB 0x140a0b853-0x140a0b870 size=29 type=0 succ=['0x140a0b870', '0x140a0cc46'] pred=['0x140a0b81b', '0x140a0b846']
// BB 0x140a0b870-0x140a0b8d2 size=98 type=0 succ=['0x140a0b8d2', '0x140a0b8df'] pred=['0x140a0b853']
// BB 0x140a0b8d2-0x140a0b8df size=13 type=0 succ=['0x140a0b8df'] pred=['0x140a0b870']
// BB 0x140a0b8df-0x140a0b8fc size=29 type=0 succ=['0x140a0b8fc', '0x140a0cc58'] pred=['0x140a0b870', '0x140a0b8d2']
// BB 0x140a0b8fc-0x140a0b92d size=49 type=0 succ=['0x140a0b92d'] pred=['0x140a0b8df']
// BB 0x140a0b92d-0x140a0b939 size=12 type=0 succ=['0x140a0b939'] pred=['0x140a0b8fc']
// BB 0x140a0b939-0x140a0b95a size=33 type=0 succ=['0x140a0b95a', '0x140a0c750'] pred=['0x140a0b92d']
// BB 0x140a0b95a-0x140a0b9af size=85 type=0 succ=['0x140a0b9af'] pred=['0x140a0b939']
// BB 0x140a0b9af-0x140a0b9da size=43 type=0 succ=['0x140a0b9da', '0x140a0b9e7'] pred=['0x140a0b95a']
// BB 0x140a0b9da-0x140a0b9e7 size=13 type=0 succ=['0x140a0b9e7'] pred=['0x140a0b9af']
// BB 0x140a0b9e7-0x140a0ba11 size=42 type=0 succ=['0x140a0ba11'] pred=['0x140a0b9af', '0x140a0b9da']
// BB 0x140a0ba11-0x140a0ba39 size=40 type=0 succ=['0x140a0ba39', '0x140a0ba46'] pred=['0x140a0b9e7']
// BB 0x140a0ba39-0x140a0ba46 size=13 type=0 succ=['0x140a0ba46'] pred=['0x140a0ba11']
// BB 0x140a0ba46-0x140a0ba70 size=42 type=0 succ=['0x140a0ba70'] pred=['0x140a0ba11', '0x140a0ba39']
// BB 0x140a0ba70-0x140a0ba98 size=40 type=0 succ=['0x140a0ba98', '0x140a0baa5'] pred=['0x140a0ba46']
// BB 0x140a0ba98-0x140a0baa5 size=13 type=0 succ=['0x140a0baa5'] pred=['0x140a0ba70']
// BB 0x140a0baa5-0x140a0bb0f size=106 type=0 succ=['0x140a09f4c', '0x140a0bb0f'] pred=['0x140a0ba70', '0x140a0ba98']
// BB 0x140a0bb0f-0x140a0bb1d size=14 type=0 succ=['0x140a0bc27'] pred=['0x140a0baa5']
// BB 0x140a0bb1d-0x140a0bb22 size=5 type=0 succ=['0x140a0bc3f'] pred=['0x140a09e84', '0x140a09ea1']
// BB 0x140a0bb22-0x140a0bb2c size=10 type=0 succ=['0x140a0bb2c', '0x140a0bb6a'] pred=['0x140a0afcf']
// BB 0x140a0bb2c-0x140a0bb6a size=62 type=0 succ=['0x140a0bbcf'] pred=['0x140a0afd9', '0x140a0bb22']
// BB 0x140a0bb6a-0x140a0bba2 size=56 type=0 succ=['0x140a0bba2', '0x140a0c7ee'] pred=['0x140a0bb22']
// BB 0x140a0bba2-0x140a0bbcf size=45 type=0 succ=['0x140a0bbcf'] pred=['0x140a0bb6a']
// BB 0x140a0bbcf-0x140a0bbfa size=43 type=0 succ=['0x140a0bbfa'] pred=['0x140a0afe2', '0x140a0bb2c', '0x140a0bba2']
// BB 0x140a0bbfa-0x140a0bc1a size=32 type=0 succ=['0x140a09f4c', '0x140a0bc1a'] pred=['0x140a0bbcf']
// BB 0x140a0bc1a-0x140a0bc27 size=13 type=0 succ=['0x140a0bc27'] pred=['0x140a0bbfa']
// BB 0x140a0bc27-0x140a0bc31 size=10 type=0 succ=['0x140a09f4c'] pred=['0x140a0bb0f', '0x140a0bc1a']
// BB 0x140a0bc31-0x140a0bc34 size=3 type=0 succ=['0x140a0bc34'] pred=['0x140a09eee']
// BB 0x140a0bc34-0x140a0bc3f size=11 type=0 succ=['0x140a0bc3f'] pred=['0x140a09f05', '0x140a0bc31']
// BB 0x140a0bc3f-0x140a0bc4d size=14 type=0 succ=['0x140a0bc4d'] pred=['0x140a0bb1d', '0x140a0bc34']
// BB 0x140a0bc4d-0x140a0bc67 size=26 type=0 succ=['0x140a0bc67', '0x140a0bc94'] pred=['0x140a0bc3f']
// BB 0x140a0bc67-0x140a0bc7a size=19 type=1 succ=['0x140a0bc7a', '0x140a0be37', '0x140a0be63', '0x140a0be6c', '0x140a0be97'] pred=['0x140a0bc4d']
// BB 0x140a0bc7a-0x140a0bc94 size=26 type=0 succ=['0x140a0bec0'] pred=['0x140a0bc67']
// BB 0x140a0bc94-0x140a0bcc7 size=51 type=0 succ=['0x140a0bcc7', '0x140a0cc7c'] pred=['0x140a0bc4d']
// BB 0x140a0bcc7-0x140a0bcf1 size=42 type=0 succ=['0x140a0bcf1'] pred=['0x140a0bc94']
// BB 0x140a0bcf1-0x140a0bd12 size=33 type=0 succ=['0x140a0bd12', '0x140a0c78f'] pred=['0x140a0bcc7']
// BB 0x140a0bd12-0x140a0bd60 size=78 type=0 succ=['0x140a0bd60', '0x140a0bd6d'] pred=['0x140a0bcf1']
// BB 0x140a0bd60-0x140a0bd6d size=13 type=0 succ=['0x140a0bd6d'] pred=['0x140a0bd12']
// BB 0x140a0bd6d-0x140a0bd8a size=29 type=0 succ=['0x140a0bd8a', '0x140a0cc8e'] pred=['0x140a0bd12', '0x140a0bd60']
// BB 0x140a0bd8a-0x140a0be02 size=120 type=0 succ=['0x140a0be02', '0x140a0be0f'] pred=['0x140a0bd6d']
// BB 0x140a0be02-0x140a0be0f size=13 type=0 succ=['0x140a0be0f'] pred=['0x140a0bd8a']
// BB 0x140a0be0f-0x140a0be37 size=40 type=0 succ=['0x140a0bf14'] pred=['0x140a0bd8a', '0x140a0be02']
// BB 0x140a0be37-0x140a0be54 size=29 type=0 succ=['0x140a0be54'] pred=['0x140a0bc67']
// BB 0x140a0be54-0x140a0be63 size=15 type=0 succ=['0x140a0bec0'] pred=['0x140a0be37']
// BB 0x140a0be63-0x140a0be6c size=9 type=0 succ=['0x140a0bec0'] pred=['0x140a0bc67']
// BB 0x140a0be6c-0x140a0be97 size=43 type=0 succ=['0x140a0bec0'] pred=['0x140a0bc67']
// BB 0x140a0be97-0x140a0bec0 size=41 type=0 succ=['0x140a0bec0'] pred=['0x140a0bc67']
// BB 0x140a0bec0-0x140a0bf14 size=84 type=0 succ=['0x140a0bf14'] pred=['0x140a0bc7a', '0x140a0be54', '0x140a0be63', '0x140a0be6c', '0x140a0be97']
// BB 0x140a0bf14-0x140a0bf29 size=21 type=0 succ=['0x140a0bf29'] pred=['0x140a0be0f', '0x140a0bec0']
// BB 0x140a0bf29-0x140a0bf70 size=71 type=0 succ=['0x140a0bf70', '0x140a0caf7'] pred=['0x140a0bf14']
// BB 0x140a0bf70-0x140a0bfcf size=95 type=0 succ=['0x140a0bfcf'] pred=['0x140a0bf29']
// BB 0x140a0bfcf-0x140a0bffa size=43 type=0 succ=['0x140a0bffa', '0x140a0c01c'] pred=['0x140a0bf70']
// BB 0x140a0bffa-0x140a0c01c size=34 type=0 succ=['0x140a0c01c'] pred=['0x140a0bfcf']
// BB 0x140a0c01c-0x140a0c029 size=13 type=0 succ=['0x140a0c029', '0x140a0c0dd'] pred=['0x140a0bfcf', '0x140a0bffa']
// BB 0x140a0c029-0x140a0c04a size=33 type=0 succ=['0x140a0c04a', '0x140a0cc6a'] pred=['0x140a0c01c']
// BB 0x140a0c04a-0x140a0c0a5 size=91 type=0 succ=['0x140a0c0a5'] pred=['0x140a0c029']
// BB 0x140a0c0a5-0x140a0c0d0 size=43 type=0 succ=['0x140a0c0d0', '0x140a0c0dd'] pred=['0x140a0c04a']
// BB 0x140a0c0d0-0x140a0c0dd size=13 type=0 succ=['0x140a0c0dd'] pred=['0x140a0c0a5']
// BB 0x140a0c0dd-0x140a0c0fa size=29 type=0 succ=['0x140a0c0fa', '0x140a0cb21'] pred=['0x140a0c01c', '0x140a0c0a5', '0x140a0c0d0']
// BB 0x140a0c0fa-0x140a0c161 size=103 type=0 succ=['0x140a0c161'] pred=['0x140a0c0dd']
// BB 0x140a0c161-0x140a0c18c size=43 type=0 succ=['0x140a0c18c', '0x140a0c1b4'] pred=['0x140a0c0fa']
// BB 0x140a0c18c-0x140a0c1b4 size=40 type=0 succ=['0x140a0c1b4'] pred=['0x140a0c161']
// BB 0x140a0c1b4-0x140a0c1ed size=57 type=0 succ=['0x140a0c1ed', '0x140a0c2bd'] pred=['0x140a0c161', '0x140a0c18c']
// BB 0x140a0c1ed-0x140a0c1f6 size=9 type=0 succ=['0x140a0c1f6', '0x140a0c2bd'] pred=['0x140a0c1b4']
// BB 0x140a0c1f6-0x140a0c200 size=10 type=0 succ=['0x140a0c200', '0x140a0c2bd'] pred=['0x140a0c1ed']
// BB 0x140a0c200-0x140a0c21d size=29 type=0 succ=['0x140a0c21d', '0x140a0cca0'] pred=['0x140a0c1f6']
// BB 0x140a0c21d-0x140a0c295 size=120 type=0 succ=['0x140a0c295', '0x140a0c2bd'] pred=['0x140a0c200']
// BB 0x140a0c295-0x140a0c2bd size=40 type=0 succ=['0x140a0c2bd'] pred=['0x140a0c21d']
// BB 0x140a0c2bd-0x140a0c2f0 size=51 type=0 succ=['0x140a0c2f0', '0x140a0cb51'] pred=['0x140a0c1b4', '0x140a0c1ed', '0x140a0c1f6', '0x140a0c21d', '0x140a0c295']
// BB 0x140a0c2f0-0x140a0c31a size=42 type=0 succ=['0x140a0c31a'] pred=['0x140a0c2bd']
// BB 0x140a0c31a-0x140a0c33b size=33 type=0 succ=['0x140a0c33b', '0x140a0c597'] pred=['0x140a0c2f0']
// BB 0x140a0c33b-0x140a0c389 size=78 type=0 succ=['0x140a0c389', '0x140a0c39d'] pred=['0x140a0c31a']
// BB 0x140a0c389-0x140a0c390 size=7 type=0 succ=['0x140a0c390'] pred=['0x140a0c33b']
// BB 0x140a0c390-0x140a0c39d size=13 type=0 succ=['0x140a0c39d'] pred=['0x140a0c389']
// BB 0x140a0c39d-0x140a0c3ba size=29 type=0 succ=['0x140a0c3ba', '0x140a0cb97'] pred=['0x140a0c33b', '0x140a0c390']
// BB 0x140a0c3ba-0x140a0c404 size=74 type=0 succ=['0x140a0c404'] pred=['0x140a0c39d']
// BB 0x140a0c404-0x140a0c425 size=33 type=0 succ=['0x140a0c425', '0x140a0c615'] pred=['0x140a0c3ba']
// BB 0x140a0c425-0x140a0c473 size=78 type=0 succ=['0x140a0c473', '0x140a0c480'] pred=['0x140a0c404']
// BB 0x140a0c473-0x140a0c480 size=13 type=0 succ=['0x140a0c480'] pred=['0x140a0c425']
// BB 0x140a0c480-0x140a0c487 size=7 type=0 succ=['0x140a0c487'] pred=['0x140a0c425', '0x140a0c473']
// BB 0x140a0c487-0x140a0c4d2 size=75 type=0 succ=['0x140a0c4d2'] pred=['0x140a0c480']
// BB 0x140a0c4d2-0x140a0c4d8 size=6 type=0 succ=['0x140a0c4d8'] pred=['0x140a0c487']
// BB 0x140a0c4d8-0x140a0c505 size=45 type=0 succ=['0x140a09f4c'] pred=['0x140a0c4d2']
// BB 0x140a0c505-0x140a0c514 size=15 type=4 succ=[] pred=['0x140a09f60']
// BB 0x140a0c514-0x140a0c516 size=2 type=0 succ=[] pred=[]
// BB 0x140a0c516-0x140a0c51d size=7 type=0 succ=['0x140a0c51d'] pred=['0x140a0ad93']
// BB 0x140a0c51d-0x140a0c52c size=15 type=4 succ=[] pred=['0x140a0c516']
// BB 0x140a0c52d-0x140a0c532 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c532-0x140a0c541 size=15 type=4 succ=[] pred=['0x140a0b00b']
// BB 0x140a0c541-0x140a0c543 size=2 type=0 succ=[] pred=[]
// BB 0x140a0c543-0x140a0c556 size=19 type=4 succ=[] pred=['0x140a09e06']
// BB 0x140a0c556-0x140a0c558 size=2 type=0 succ=[] pred=[]
// BB 0x140a0c558-0x140a0c566 size=14 type=0 succ=['0x140a0c566'] pred=['0x140a0b1ca']
// BB 0x140a0c566-0x140a0c591 size=43 type=4 succ=[] pred=['0x140a0c558']
// BB 0x140a0c592-0x140a0c597 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c597-0x140a0c5a5 size=14 type=0 succ=['0x140a0c5a5'] pred=['0x140a0c31a']
// BB 0x140a0c5a5-0x140a0c5d0 size=43 type=4 succ=[] pred=['0x140a0c597']
// BB 0x140a0c5d1-0x140a0c5d6 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c5d6-0x140a0c5e4 size=14 type=0 succ=['0x140a0c5e4'] pred=['0x140a0b2e1']
// BB 0x140a0c5e4-0x140a0c60f size=43 type=4 succ=[] pred=['0x140a0c5d6']
// BB 0x140a0c610-0x140a0c615 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c615-0x140a0c623 size=14 type=0 succ=['0x140a0c623'] pred=['0x140a0c404']
// BB 0x140a0c623-0x140a0c64e size=43 type=4 succ=[] pred=['0x140a0c615']
// BB 0x140a0c64f-0x140a0c654 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c654-0x140a0c662 size=14 type=0 succ=['0x140a0c662'] pred=['0x140a0b3af']
// BB 0x140a0c662-0x140a0c68d size=43 type=4 succ=[] pred=['0x140a0c654']
// BB 0x140a0c68e-0x140a0c693 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c693-0x140a0c6a1 size=14 type=0 succ=['0x140a0c6a1'] pred=['0x140a0b4cc']
// BB 0x140a0c6a1-0x140a0c6cc size=43 type=4 succ=[] pred=['0x140a0c693']
// BB 0x140a0c6cd-0x140a0c6d2 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c6d2-0x140a0c6e0 size=14 type=0 succ=['0x140a0c6e0'] pred=['0x140a0b64c']
// BB 0x140a0c6e0-0x140a0c70b size=43 type=4 succ=[] pred=['0x140a0c6d2']
// BB 0x140a0c70c-0x140a0c711 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c711-0x140a0c71f size=14 type=0 succ=['0x140a0c71f'] pred=['0x140a0b713']
// BB 0x140a0c71f-0x140a0c74a size=43 type=4 succ=[] pred=['0x140a0c711']
// BB 0x140a0c74b-0x140a0c750 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c750-0x140a0c75e size=14 type=0 succ=['0x140a0c75e'] pred=['0x140a0b939']
// BB 0x140a0c75e-0x140a0c789 size=43 type=4 succ=[] pred=['0x140a0c750']
// BB 0x140a0c78a-0x140a0c78f size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c78f-0x140a0c79d size=14 type=0 succ=['0x140a0c79d'] pred=['0x140a0bcf1']
// BB 0x140a0c79d-0x140a0c7c8 size=43 type=4 succ=[] pred=['0x140a0c78f']
// BB 0x140a0c7c9-0x140a0c7ce size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c7ce-0x140a0c7dc size=14 type=0 succ=['0x140a0c7dc'] pred=['0x140a09eaa']
// BB 0x140a0c7dc-0x140a0c7e8 size=12 type=4 succ=[] pred=['0x140a0c7ce']
// BB 0x140a0c7e9-0x140a0c7ee size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c7ee-0x140a0c7fd size=15 type=4 succ=[] pred=['0x140a0bb6a']
// BB 0x140a0c7fd-0x140a0c7ff size=2 type=0 succ=[] pred=[]
// BB 0x140a0c7ff-0x140a0c850 size=81 type=0 succ=['0x140a0b130'] pred=['0x140a0b10a']
// BB 0x140a0c850-0x140a0c85f size=15 type=4 succ=[] pred=['0x140a09f7d']
// BB 0x140a0c860-0x140a0c865 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c865-0x140a0c874 size=15 type=4 succ=[] pred=['0x140a09fb4']
// BB 0x140a0c875-0x140a0c87a size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c87a-0x140a0c889 size=15 type=4 succ=[] pred=['0x140a0a061']
// BB 0x140a0c88a-0x140a0c88f size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c88f-0x140a0c89e size=15 type=4 succ=[] pred=['0x140a0a07e']
// BB 0x140a0c89f-0x140a0c8a4 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c8a4-0x140a0c8b3 size=15 type=4 succ=[] pred=['0x140a0a0d1']
// BB 0x140a0c8b4-0x140a0c8b9 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c8b9-0x140a0c8c8 size=15 type=4 succ=[] pred=['0x140a0a17e']
// BB 0x140a0c8c9-0x140a0c8ce size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c8ce-0x140a0c8dd size=15 type=4 succ=[] pred=['0x140a0a19b']
// BB 0x140a0c8de-0x140a0c8e3 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c8e3-0x140a0c8f2 size=15 type=4 succ=[] pred=['0x140a0a289']
// BB 0x140a0c8f3-0x140a0c8f8 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c8f8-0x140a0c907 size=15 type=4 succ=[] pred=['0x140a0a2a6']
// BB 0x140a0c908-0x140a0c90d size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c90d-0x140a0c91c size=15 type=4 succ=[] pred=['0x140a0a300']
// BB 0x140a0c91d-0x140a0c922 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c922-0x140a0c931 size=15 type=4 succ=[] pred=['0x140a0a3af']
// BB 0x140a0c932-0x140a0c937 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c937-0x140a0c946 size=15 type=4 succ=[] pred=['0x140a0a3cc']
// BB 0x140a0c947-0x140a0c94c size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c94c-0x140a0c95b size=15 type=4 succ=[] pred=['0x140a0a426']
// BB 0x140a0c95c-0x140a0c961 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c961-0x140a0c970 size=15 type=4 succ=[] pred=['0x140a0a483']
// BB 0x140a0c971-0x140a0c976 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c976-0x140a0c985 size=15 type=4 succ=[] pred=['0x140a0a530']
// BB 0x140a0c986-0x140a0c98b size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c98b-0x140a0c99a size=15 type=4 succ=[] pred=['0x140a0a54d']
// BB 0x140a0c99b-0x140a0c9a0 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c9a0-0x140a0c9af size=15 type=4 succ=[] pred=['0x140a0a5a7']
// BB 0x140a0c9b0-0x140a0c9b5 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c9b5-0x140a0c9c4 size=15 type=4 succ=[] pred=['0x140a0a6b8']
// BB 0x140a0c9c5-0x140a0c9ca size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c9ca-0x140a0c9d9 size=15 type=4 succ=[] pred=['0x140a0a6d5']
// BB 0x140a0c9da-0x140a0c9df size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c9df-0x140a0c9ee size=15 type=4 succ=[] pred=['0x140a0a826']
// BB 0x140a0c9ef-0x140a0c9f4 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0c9f4-0x140a0ca03 size=15 type=4 succ=[] pred=['0x140a0a843']
// BB 0x140a0ca04-0x140a0ca09 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca09-0x140a0ca18 size=15 type=4 succ=[] pred=['0x140a0a8a0']
// BB 0x140a0ca19-0x140a0ca1e size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca1e-0x140a0ca2d size=15 type=4 succ=[] pred=['0x140a0a94f']
// BB 0x140a0ca2e-0x140a0ca33 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca33-0x140a0ca42 size=15 type=4 succ=[] pred=['0x140a0a96c']
// BB 0x140a0ca43-0x140a0ca48 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca48-0x140a0ca57 size=15 type=4 succ=[] pred=['0x140a0aa9c']
// BB 0x140a0ca58-0x140a0ca5d size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca5d-0x140a0ca6c size=15 type=4 succ=[] pred=['0x140a0aab9']
// BB 0x140a0ca6d-0x140a0ca72 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca72-0x140a0ca81 size=15 type=4 succ=[] pred=['0x140a0ab1c']
// BB 0x140a0ca82-0x140a0ca87 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca87-0x140a0ca96 size=15 type=4 succ=[] pred=['0x140a0abcb']
// BB 0x140a0ca97-0x140a0ca9c size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0ca9c-0x140a0caab size=15 type=4 succ=[] pred=['0x140a0abe8']
// BB 0x140a0caac-0x140a0cab1 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cab1-0x140a0cac0 size=15 type=4 succ=[] pred=['0x140a0ad76']
// BB 0x140a0cac1-0x140a0cac6 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cac6-0x140a0cadc size=22 type=4 succ=[] pred=['0x140a0adda']
// BB 0x140a0cadd-0x140a0cae2 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cae2-0x140a0caf1 size=15 type=4 succ=[] pred=['0x140a0b160']
// BB 0x140a0caf2-0x140a0caf7 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0caf7-0x140a0cb0c size=21 type=0 succ=['0x140a0cb0c'] pred=['0x140a0bf29']
// BB 0x140a0cb0c-0x140a0cb1b size=15 type=4 succ=[] pred=['0x140a0caf7']
// BB 0x140a0cb1c-0x140a0cb21 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cb21-0x140a0cb4b size=42 type=4 succ=[] pred=['0x140a0c0dd']
// BB 0x140a0cb4c-0x140a0cb51 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cb51-0x140a0cb58 size=7 type=0 succ=['0x140a0cb58'] pred=['0x140a0c2bd']
// BB 0x140a0cb58-0x140a0cb67 size=15 type=4 succ=[] pred=['0x140a0cb51']
// BB 0x140a0cb68-0x140a0cb6d size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cb6d-0x140a0cb7c size=15 type=4 succ=[] pred=['0x140a0b246']
// BB 0x140a0cb7d-0x140a0cb82 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cb82-0x140a0cb91 size=15 type=4 succ=[] pred=['0x140a0b263']
// BB 0x140a0cb92-0x140a0cb97 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cb97-0x140a0cb9e size=7 type=0 succ=['0x140a0cb9e'] pred=['0x140a0c39d']
// BB 0x140a0cb9e-0x140a0cbad size=15 type=4 succ=[] pred=['0x140a0cb97']
// BB 0x140a0cbae-0x140a0cbb3 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cbb3-0x140a0cbc2 size=15 type=4 succ=[] pred=['0x140a0b35a']
// BB 0x140a0cbc3-0x140a0cbc8 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cbc8-0x140a0cbd7 size=15 type=4 succ=[] pred=['0x140a0b42b']
// BB 0x140a0cbd8-0x140a0cbdd size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cbdd-0x140a0cbec size=15 type=4 succ=[] pred=['0x140a0b448']
// BB 0x140a0cbed-0x140a0cbf2 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cbf2-0x140a0cc01 size=15 type=4 succ=[] pred=['0x140a0b548']
// BB 0x140a0cc02-0x140a0cc07 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc07-0x140a0cc16 size=15 type=4 succ=[] pred=['0x140a0b565']
// BB 0x140a0cc17-0x140a0cc1c size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc1c-0x140a0cc2b size=15 type=4 succ=[] pred=['0x140a0b5c8']
// BB 0x140a0cc2c-0x140a0cc31 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc31-0x140a0cc40 size=15 type=4 succ=[] pred=['0x140a0b6c8']
// BB 0x140a0cc41-0x140a0cc46 size=5 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc46-0x140a0cc55 size=15 type=4 succ=[] pred=['0x140a0b853']
// BB 0x140a0cc56-0x140a0cc58 size=2 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc58-0x140a0cc67 size=15 type=4 succ=[] pred=['0x140a0b8df']
// BB 0x140a0cc68-0x140a0cc6a size=2 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc6a-0x140a0cc79 size=15 type=4 succ=[] pred=['0x140a0c029']
// BB 0x140a0cc7a-0x140a0cc7c size=2 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc7c-0x140a0cc8b size=15 type=4 succ=[] pred=['0x140a0bc94']
// BB 0x140a0cc8c-0x140a0cc8e size=2 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cc8e-0x140a0cc9d size=15 type=4 succ=[] pred=['0x140a0bd6d']
// BB 0x140a0cc9e-0x140a0cca0 size=2 type=0 succ=['0x140a0cccb'] pred=[]
// BB 0x140a0cca0-0x140a0ccbb size=27 type=0 succ=['0x140a0ccbb'] pred=['0x140a0c200']
// BB 0x140a0ccbb-0x140a0ccca size=15 type=4 succ=[] pred=['0x140a0cca0']
// BB 0x140a0cccb-0x140a0cccd size=2 type=0 succ=[] pred=['0x140a0c52d', '0x140a0c592', '0x140a0c5d1', '0x140a0c610', '0x140a0c64f', '0x140a0c68e', '0x140a0c6cd', '0x140a0c70c', '0x140a0c74b', '0x140a0c78a', '0x140a0c7c9', '0x140a0c7e9', '0x140a0c860', '0x140a0c875', '0x140a0c88a', '0x140a0c89f', '0x140a0c8b4', '0x140a0c8c9', '0x140a0c8de', '0x140a0c8f3', '0x140a0c908', '0x140a0c91d', '0x140a0c932', '0x140a0c947', '0x140a0c95c', '0x140a0c971', '0x140a0c986', '0x140a0c99b', '0x140a0c9b0', '0x140a0c9c5', '0x140a0c9da', '0x140a0c9ef', '0x140a0ca04', '0x140a0ca19', '0x140a0ca2e', '0x140a0ca43', '0x140a0ca58', '0x140a0ca6d', '0x140a0ca82', '0x140a0ca97', '0x140a0caac', '0x140a0cac1', '0x140a0cadd', '0x140a0caf2', '0x140a0cb1c', '0x140a0cb4c', '0x140a0cb68', '0x140a0cb7d', '0x140a0cb92', '0x140a0cbae', '0x140a0cbc3', '0x140a0cbd8', '0x140a0cbed', '0x140a0cc02', '0x140a0cc17', '0x140a0cc2c', '0x140a0cc41', '0x140a0cc56', '0x140a0cc68', '0x140a0cc7a', '0x140a0cc8c', '0x140a0cc9e']

// --- full disassembly ---
/*140a09c80*/ sub_140A09C80: push rbp
/*140a09c81*/  push r15
/*140a09c83*/  push r14
/*140a09c85*/  push r13
/*140a09c87*/  push r12
/*140a09c89*/  push rsi
/*140a09c8a*/  push rdi
/*140a09c8b*/  push rbx
/*140a09c8c*/  sub rsp, 298h
/*140a09c93*/  lea rbp, [rsp+80h]
/*140a09c9b*/  mov [rbp+250h+var_40], 0FFFFFFFFFFFFFFFEh
/*140a09ca6*/  mov rbx, rdx
/*140a09ca9*/  mov rsi, rcx
/*140a09cac*/  lea rcx, aType_8; "type"
/*140a09cb3*/  mov edx, 4
/*140a09cb8*/  mov r8, rbx
/*140a09cbb*/  call sub_141433D50
/*140a09cc0*/  test rax, rax
/*140a09cc3*/  jz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09cc9*/  cmp byte ptr [rax], 3
/*140a09ccc*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09cd2*/  mov rcx, [rax+18h]
/*140a09cd6*/  add rcx, 0FFFFFFFFFFFFFFFAh; switch 6 cases  // switch 6 cases
/*140a09cda*/  cmp rcx, 5
/*140a09cde*/  ja def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09ce4*/  mov rax, [rax+10h]
/*140a09ce8*/  lea rdx, jpt_140A09CF6
/*140a09cef*/  movsxd rcx, ds:(jpt_140A09CF6 - 1417AAF8Ch)[rdx+rcx*4]
/*140a09cf3*/  add rcx, rdx
/*140a09cf6*/  jmp rcx; switch jump  // switch jump
/*140a09cf8*/ loc_140A09CF8: mov ecx, 74737563h; jumptable 0000000140A09CF6 case 6  // jumptable 0000000140A09CF6 case 6
/*140a09cfd*/  xor ecx, [rax]
/*140a09cff*/  movzx eax, word ptr [rax+4]
/*140a09d03*/  xor eax, 6D6Fh
/*140a09d08*/  or eax, ecx
/*140a09d0a*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09d10*/  lea rcx, aName_7; "name"
/*140a09d17*/  mov edx, 4
/*140a09d1c*/  mov r8, rbx
/*140a09d1f*/  call sub_141433D50
/*140a09d24*/  test rax, rax
/*140a09d27*/  jz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09d2d*/  cmp byte ptr [rax], 3
/*140a09d30*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09d36*/  movups xmm0, xmmword ptr [rax+10h]
/*140a09d3a*/  movups [rbp+250h+var_220], xmm0
/*140a09d3e*/  lea rcx, aDescription_2; "description"
/*140a09d45*/  mov edx, 0Bh
/*140a09d4a*/  mov r8, rbx
/*140a09d4d*/  call sub_141433D50
/*140a09d52*/  mov r12d, 1
/*140a09d58*/  test rax, rax
/*140a09d5b*/  jz loc_140A0B008
/*140a09d61*/  cmp byte ptr [rax], 3
/*140a09d64*/  jnz loc_140A0B008
/*140a09d6a*/  mov r12, [rax+10h]
/*140a09d6e*/  mov r14, [rax+18h]
/*140a09d72*/  jmp loc_140A0B00B
/*140a09d77*/ loc_140A09D77: mov rcx, 63617073656D616Eh; jumptable 0000000140A09CF6 case 9  // jumptable 0000000140A09CF6 case 9
/*140a09d81*/  xor rcx, [rax]
/*140a09d84*/  movzx eax, byte ptr [rax+8]
/*140a09d88*/  xor rax, 65h
/*140a09d8c*/  or rax, rcx
/*140a09d8f*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09d95*/  lea rcx, aName_7; "name"
/*140a09d9c*/  mov edx, 4
/*140a09da1*/  mov r8, rbx
/*140a09da4*/  call sub_141433D50
/*140a09da9*/  mov edi, 1
/*140a09dae*/  test rax, rax
/*140a09db1*/  jz loc_140A0AF98
/*140a09db7*/  cmp byte ptr [rax], 3
/*140a09dba*/  jnz loc_140A0AF98
/*140a09dc0*/  mov rdi, [rax+10h]
/*140a09dc4*/  mov r14, [rax+18h]
/*140a09dc8*/  jmp loc_140A0AF9B
/*140a09dcd*/ loc_140A09DCD: mov r12, 6E6F6974636E7566h; jumptable 0000000140A09CF6 case 8  // jumptable 0000000140A09CF6 case 8
/*140a09dd7*/  cmp [rax], r12
/*140a09dda*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09de0*/  lea rcx, aName_7; "name"
/*140a09de7*/  mov edx, 4
/*140a09dec*/  mov r8, rbx
/*140a09def*/  call sub_141433D50
/*140a09df4*/  test rax, rax
/*140a09df7*/  jz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09dfd*/  cmp byte ptr [rax], 3
/*140a09e00*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09e06*/  mov r14, [rax+10h]
/*140a09e0a*/  mov rdi, [rax+18h]
/*140a09e0e*/  mov [rsp+2D0h+var_2B0], 1
/*140a09e17*/  lea rcx, [rbp+250h+var_70]
/*140a09e1e*/  mov r9d, 1
/*140a09e24*/  mov rdx, rdi
/*140a09e27*/  xor r8d, r8d
/*140a09e2a*/  call sub_140388B60
/*140a09e2f*/  mov rax, qword ptr [rbp+250h+var_70+8]
/*140a09e36*/  mov [rbp+250h+var_D8], rax
/*140a09e3d*/  cmp dword ptr [rbp+250h+var_70], 1
/*140a09e44*/  jz loc_140A0C543
/*140a09e4a*/  mov r15, qword ptr [rbp+250h+var_60]
/*140a09e51*/  test rdi, rdi
/*140a09e54*/  jz short loc_140A09E64
/*140a09e56*/  mov rcx, r15
/*140a09e59*/  mov rdx, r14
/*140a09e5c*/  mov r8, rdi
/*140a09e5f*/  call sub_141684120
/*140a09e64*/ loc_140A09E64: mov [rbp+250h+var_208], r15
/*140a09e68*/  mov [rbp+250h+var_72], 1
/*140a09e6f*/ loc_140A09E6F: lea rcx, aDescription_2; "description"
/*140a09e76*/  mov edx, 0Bh
/*140a09e7b*/  mov r8, rbx
/*140a09e7e*/  call sub_141433D50
/*140a09e83*/  nop
/*140a09e84*/ loc_140A09E84: mov cl, 1
/*140a09e86*/  mov [rbp+250h+var_F8], rcx
/*140a09e8d*/  mov [rbp+250h+var_138], 0FFFFFFFFFFFFFFFFh
/*140a09e98*/  test rax, rax
/*140a09e9b*/  jz loc_140A0BB1D
/*140a09ea1*/  cmp byte ptr [rax], 3
/*140a09ea4*/  jnz loc_140A0BB1D
/*140a09eaa*/  mov r15, [rax+10h]
/*140a09eae*/  mov r14, [rax+18h]
/*140a09eb2*/  mov [rsp+2D0h+var_2B0], 1
/*140a09ebb*/  lea rcx, [rbp+250h+var_70]
/*140a09ec2*/  mov r9d, 1
/*140a09ec8*/  mov rdx, r14
/*140a09ecb*/  xor r8d, r8d
/*140a09ece*/  call sub_140388B60
/*140a09ed3*/  mov rax, qword ptr [rbp+250h+var_70+8]
/*140a09eda*/  mov [rbp+250h+var_138], rax
/*140a09ee1*/  cmp dword ptr [rbp+250h+var_70], 1
/*140a09ee8*/  jz loc_140A0C7CE
/*140a09eee*/  mov rcx, qword ptr [rbp+250h+var_60]
/*140a09ef5*/  test r14, r14
/*140a09ef8*/  mov [rbp+250h+var_1D0], rcx
/*140a09eff*/  jz loc_140A0BC31
/*140a09f05*/  mov rdx, r15
/*140a09f08*/  mov r8, r14
/*140a09f0b*/  call sub_141684120
/*140a09f10*/  jmp loc_140A0BC34
/*140a09f15*/ loc_140A09F15: mov rcx, 68735F6C61636F6Ch; jumptable 0000000140A09CF6 case 11  // jumptable 0000000140A09CF6 case 11
/*140a09f1f*/  xor rcx, [rax]
/*140a09f22*/  mov rdx, 6C6C6568735F6C61h
/*140a09f2c*/  xor rdx, [rax+3]
/*140a09f30*/  or rdx, rcx
/*140a09f33*/  jz short loc_140A09F60
/*140a09f35*/ def_140A09CF6: mov qword ptr [rsi], 0; jumptable 0000000140A09CF6 default case, cases 7,10  // jumptable 0000000140A09CF6 default case, cases 7,10
/*140a09f3c*/  mov qword ptr [rsi+8], 8
/*140a09f44*/  mov qword ptr [rsi+10h], 0
/*140a09f4c*/ loc_140A09F4C: add rsp, 298h
/*140a09f53*/  pop rbx
/*140a09f54*/  pop rdi
/*140a09f55*/  pop rsi
/*140a09f56*/  pop r12
/*140a09f58*/  pop r13
/*140a09f5a*/  pop r14
/*140a09f5c*/  pop r15
/*140a09f5e*/  pop rbp
/*140a09f5f*/  retn
/*140a09f60*/ loc_140A09F60: call nullsub_1
/*140a09f65*/  mov ecx, 20h ; ' '
/*140a09f6a*/  mov edx, 8
/*140a09f6f*/  call sub_140001650
/*140a09f74*/  test rax, rax
/*140a09f77*/  jz loc_140A0C505
/*140a09f7d*/  mov rdi, rax
/*140a09f80*/  mov qword ptr [rbp+250h+var_220], 0
/*140a09f88*/  mov [rbp+250h+var_210], 0
/*140a09f90*/  call nullsub_1
/*140a09f95*/  mov ecx, 4
/*140a09f9a*/  mov edx, 1
/*140a09f9f*/  call sub_140001650
/*140a09fa4*/  test rax, rax
/*140a09fa7*/  mov [rbp+250h+var_F8], rdi
/*140a09fae*/  jz loc_140A0C850
/*140a09fb4*/  mov dword ptr [rax], 65707974h
/*140a09fba*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a09fc5*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a09fcc*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a09fd7*/  call nullsub_1
/*140a09fdc*/  mov ecx, 8
/*140a09fe1*/  mov edx, 1
/*140a09fe6*/  call sub_140001650
/*140a09feb*/  test rax, rax
/*140a09fee*/  mov [rbp+250h+var_D8], rax
/*140a09ff5*/  jz loc_140A0C865
/*140a09ffb*/  mov rdi, 6E6F6974636E7566h
/*140a0a005*/  mov [rax], rdi
/*140a0a008*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a00f*/  mov qword ptr [rbp+250h+var_70+8], 8
/*140a0a01a*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a021*/  mov qword ptr [rbp+250h+var_60+8], 8
/*140a0a02c*/ loc_140A0A02C: lea rcx, [rbp+250h+var_A0]
/*140a0a033*/  lea rdx, [rbp+250h+var_220]
/*140a0a037*/  lea r8, [rbp+250h+var_C0]
/*140a0a03e*/  lea r9, [rbp+250h+var_70]
/*140a0a045*/  call sub_140307860
/*140a0a04a*/  nop
/*140a0a04b*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a052*/  jz short loc_140A0A061
/*140a0a054*/ loc_140A0A054: lea rcx, [rbp+250h+var_A0]
/*140a0a05b*/  call sub_1400104F0
/*140a0a060*/  nop
/*140a0a061*/ loc_140A0A061: call nullsub_1
/*140a0a066*/  mov ecx, 8
/*140a0a06b*/  mov edx, 1
/*140a0a070*/  call sub_140001650
/*140a0a075*/  test rax, rax
/*140a0a078*/  jz loc_140A0C87A
/*140a0a07e*/  mov [rax], rdi
/*140a0a081*/  mov [rbp+250h+var_180], 8
/*140a0a08c*/  mov [rbp+250h+var_178], rax
/*140a0a093*/  mov [rbp+250h+var_170], 8
/*140a0a09e*/  mov qword ptr [rbp+250h+var_1C8], 0
/*140a0a0a9*/  mov [rbp+250h+var_1B8], 0
/*140a0a0b4*/  call nullsub_1
/*140a0a0b9*/  mov ecx, 4
/*140a0a0be*/  mov edx, 1
/*140a0a0c3*/  call sub_140001650
/*140a0a0c8*/  test rax, rax
/*140a0a0cb*/  jz loc_140A0C88F
/*140a0a0d1*/  mov dword ptr [rax], 656D616Eh
/*140a0a0d7*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0a0e2*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a0e9*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0a0f4*/  call nullsub_1
/*140a0a0f9*/  mov ecx, 5
/*140a0a0fe*/  mov edx, 1
/*140a0a103*/  call sub_140001650
/*140a0a108*/  test rax, rax
/*140a0a10b*/  mov [rbp+250h+var_D8], rax
/*140a0a112*/  jz loc_140A0C8A4
/*140a0a118*/  mov byte ptr [rax+4], 6Ch ; 'l'
/*140a0a11c*/  mov dword ptr [rax], 6C656873h
/*140a0a122*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a129*/  mov qword ptr [rbp+250h+var_70+8], 5
/*140a0a134*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a13b*/  mov qword ptr [rbp+250h+var_60+8], 5
/*140a0a146*/ loc_140A0A146: lea rcx, [rbp+250h+var_A0]
/*140a0a14d*/  lea rdx, [rbp+250h+var_1C8]
/*140a0a154*/  lea r8, [rbp+250h+var_C0]
/*140a0a15b*/  lea r9, [rbp+250h+var_70]
/*140a0a162*/  call sub_140307860
/*140a0a167*/  nop
/*140a0a168*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a16f*/  jz short loc_140A0A17E
/*140a0a171*/ loc_140A0A171: lea rcx, [rbp+250h+var_A0]
/*140a0a178*/  call sub_1400104F0
/*140a0a17d*/  nop
/*140a0a17e*/ loc_140A0A17E: call nullsub_1
/*140a0a183*/  mov ecx, 0Bh
/*140a0a188*/  mov edx, 1
/*140a0a18d*/  call sub_140001650
/*140a0a192*/  test rax, rax
/*140a0a195*/  jz loc_140A0C8B9
/*140a0a19b*/  mov rdi, 7470697263736564h
/*140a0a1a5*/  mov [rax], rdi
/*140a0a1a8*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0a1af*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0a1ba*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a1c1*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0a1cc*/  call nullsub_1
/*140a0a1d1*/  mov ecx, 53h ; 'S'
/*140a0a1d6*/  mov edx, 1
/*140a0a1db*/  call sub_140001650
/*140a0a1e0*/  test rax, rax
/*140a0a1e3*/  mov [rbp+250h+var_D8], rax
/*140a0a1ea*/  jz loc_140A0C8CE
/*140a0a1f0*/  movups xmm0, cs:xmmword_1417A7FB8
/*140a0a1f7*/  movups xmmword ptr [rax+40h], xmm0
/*140a0a1fb*/  movups xmm0, cs:xmmword_1417A7FA8
/*140a0a202*/  movups xmmword ptr [rax+30h], xmm0
/*140a0a206*/  movups xmm0, cs:xmmword_1417A7F98
/*140a0a20d*/  movups xmmword ptr [rax+20h], xmm0
/*140a0a211*/  movups xmm0, cs:xmmword_1417A7F88
/*140a0a218*/  movups xmmword ptr [rax+10h], xmm0
/*140a0a21c*/  movups xmm0, cs:xmmword_1417A7F78
/*140a0a223*/  movups xmmword ptr [rax], xmm0
/*140a0a226*/  mov dword ptr [rax+4Fh], 2E65646Fh
/*140a0a22d*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a234*/  mov qword ptr [rbp+250h+var_70+8], 53h ; 'S'
/*140a0a23f*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a246*/  mov qword ptr [rbp+250h+var_60+8], 53h ; 'S'
/*140a0a251*/ loc_140A0A251: lea rcx, [rbp+250h+var_A0]
/*140a0a258*/  lea rdx, [rbp+250h+var_1C8]
/*140a0a25f*/  lea r8, [rbp+250h+var_C0]
/*140a0a266*/  lea r9, [rbp+250h+var_70]
/*140a0a26d*/  call sub_140307860
/*140a0a272*/  nop
/*140a0a273*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a27a*/  jz short loc_140A0A289
/*140a0a27c*/ loc_140A0A27C: lea rcx, [rbp+250h+var_A0]
/*140a0a283*/  call sub_1400104F0
/*140a0a288*/  nop
/*140a0a289*/ loc_140A0A289: call nullsub_1
/*140a0a28e*/  mov ecx, 0Ah
/*140a0a293*/  mov edx, 1
/*140a0a298*/  call sub_140001650
/*140a0a29d*/  test rax, rax
/*140a0a2a0*/  jz loc_140A0C8E3
/*140a0a2a6*/  mov rcx, 6574656D61726170h
/*140a0a2b0*/  mov [rax], rcx
/*140a0a2b3*/  mov word ptr [rax+8], 7372h
/*140a0a2b9*/  mov [rbp+250h+var_1E8], 0Ah
/*140a0a2c1*/  mov [rbp+250h+var_1E0], rax
/*140a0a2c5*/  mov [rbp+250h+var_1D8], 0Ah
/*140a0a2cd*/  mov qword ptr [rbp+250h+var_1B0], 0
/*140a0a2d8*/  mov [rbp+250h+var_1A0], 0
/*140a0a2e3*/  call nullsub_1
/*140a0a2e8*/  mov ecx, 4
/*140a0a2ed*/  mov edx, 1
/*140a0a2f2*/  call sub_140001650
/*140a0a2f7*/  test rax, rax
/*140a0a2fa*/  jz loc_140A0C8F8
/*140a0a300*/  mov dword ptr [rax], 65707974h
/*140a0a306*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0a311*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a318*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0a323*/  call nullsub_1
/*140a0a328*/  mov ecx, 6
/*140a0a32d*/  mov edx, 1
/*140a0a332*/  call sub_140001650
/*140a0a337*/  test rax, rax
/*140a0a33a*/  mov [rbp+250h+var_D8], rax
/*140a0a341*/  jz loc_140A0C90D
/*140a0a347*/  mov word ptr [rax+4], 7463h
/*140a0a34d*/  mov dword ptr [rax], 656A626Fh
/*140a0a353*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a35a*/  mov qword ptr [rbp+250h+var_70+8], 6
/*140a0a365*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a36c*/  mov qword ptr [rbp+250h+var_60+8], 6
/*140a0a377*/ loc_140A0A377: lea rcx, [rbp+250h+var_A0]
/*140a0a37e*/  lea rdx, [rbp+250h+var_1B0]
/*140a0a385*/  lea r8, [rbp+250h+var_C0]
/*140a0a38c*/  lea r9, [rbp+250h+var_70]
/*140a0a393*/  call sub_140307860
/*140a0a398*/  nop
/*140a0a399*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a3a0*/  jz short loc_140A0A3AF
/*140a0a3a2*/ loc_140A0A3A2: lea rcx, [rbp+250h+var_A0]
/*140a0a3a9*/  call sub_1400104F0
/*140a0a3ae*/  nop
/*140a0a3af*/ loc_140A0A3AF: call nullsub_1
/*140a0a3b4*/  mov ecx, 0Ah
/*140a0a3b9*/  mov edx, 1
/*140a0a3be*/  call sub_140001650
/*140a0a3c3*/  test rax, rax
/*140a0a3c6*/  jz loc_140A0C922
/*140a0a3cc*/  mov rcx, 69747265706F7270h
/*140a0a3d6*/  mov [rax], rcx
/*140a0a3d9*/  mov word ptr [rax+8], 7365h
/*140a0a3df*/  mov [rbp+250h+var_200], 0Ah
/*140a0a3e7*/  mov [rbp+250h+var_1F8], rax
/*140a0a3eb*/  mov [rbp+250h+var_1F0], 0Ah
/*140a0a3f3*/  mov qword ptr [rbp+250h+var_198], 0
/*140a0a3fe*/  mov [rbp+250h+var_188], 0
/*140a0a409*/  call nullsub_1
/*140a0a40e*/  mov ecx, 7
/*140a0a413*/  mov edx, 1
/*140a0a418*/  call sub_140001650
/*140a0a41d*/  test rax, rax
/*140a0a420*/  jz loc_140A0C937
/*140a0a426*/  mov dword ptr [rax+3], 646E616Dh
/*140a0a42d*/  mov dword ptr [rax], 6D6D6F63h
/*140a0a433*/  mov qword ptr [rbp+250h+var_150], 7
/*140a0a43e*/  mov qword ptr [rbp+250h+var_150+8], rax
/*140a0a445*/  mov [rbp+250h+var_140], 7
/*140a0a450*/  mov qword ptr [rbp+250h+var_168], 0
/*140a0a45b*/  mov qword ptr [rbp+250h+var_168+10h], 0
/*140a0a466*/  call nullsub_1
/*140a0a46b*/  mov ecx, 4
/*140a0a470*/  mov edx, 1
/*140a0a475*/  call sub_140001650
/*140a0a47a*/  test rax, rax
/*140a0a47d*/  jz loc_140A0C94C
/*140a0a483*/  mov dword ptr [rax], 65707974h
/*140a0a489*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0a494*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a49b*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0a4a6*/  call nullsub_1
/*140a0a4ab*/  mov ecx, 5
/*140a0a4b0*/  mov edx, 1
/*140a0a4b5*/  call sub_140001650
/*140a0a4ba*/  test rax, rax
/*140a0a4bd*/  mov [rbp+250h+var_D8], rax
/*140a0a4c4*/  jz loc_140A0C961
/*140a0a4ca*/  mov byte ptr [rax+4], 79h ; 'y'
/*140a0a4ce*/  mov dword ptr [rax], 61727261h
/*140a0a4d4*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a4db*/  mov qword ptr [rbp+250h+var_70+8], 5
/*140a0a4e6*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a4ed*/  mov qword ptr [rbp+250h+var_60+8], 5
/*140a0a4f8*/ loc_140A0A4F8: lea rcx, [rbp+250h+var_A0]
/*140a0a4ff*/  lea rdx, [rbp+250h+var_168]
/*140a0a506*/  lea r8, [rbp+250h+var_C0]
/*140a0a50d*/  lea r9, [rbp+250h+var_70]
/*140a0a514*/  call sub_140307860
/*140a0a519*/  nop
/*140a0a51a*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a521*/  jz short loc_140A0A530
/*140a0a523*/ loc_140A0A523: lea rcx, [rbp+250h+var_A0]
/*140a0a52a*/  call sub_1400104F0
/*140a0a52f*/  nop
/*140a0a530*/ loc_140A0A530: call nullsub_1
/*140a0a535*/  mov ecx, 5
/*140a0a53a*/  mov edx, 1
/*140a0a53f*/  call sub_140001650
/*140a0a544*/  test rax, rax
/*140a0a547*/  jz loc_140A0C976
/*140a0a54d*/  mov byte ptr [rax+4], 73h ; 's'
/*140a0a551*/  mov dword ptr [rax], 6D657469h
/*140a0a557*/  mov qword ptr [rbp+250h+var_110], 5
/*140a0a562*/  mov qword ptr [rbp+250h+var_110+8], rax
/*140a0a569*/  mov [rbp+250h+var_100], 5
/*140a0a574*/  mov qword ptr [rbp+250h+var_130], 0
/*140a0a57f*/  mov qword ptr [rbp+250h+var_120], 0
/*140a0a58a*/  call nullsub_1
/*140a0a58f*/  mov ecx, 4
/*140a0a594*/  mov edx, 1
/*140a0a599*/  call sub_140001650
/*140a0a59e*/  test rax, rax
/*140a0a5a1*/  jz loc_140A0C98B
/*140a0a5a7*/  mov dword ptr [rax], 65707974h
/*140a0a5ad*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0a5b8*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a5bf*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0a5ca*/  call nullsub_1
/*140a0a5cf*/  mov ecx, 6
/*140a0a5d4*/  mov edx, 1
/*140a0a5d9*/  call sub_140001650
/*140a0a5de*/  test rax, rax
/*140a0a5e1*/  mov [rbp+250h+var_D8], rax
/*140a0a5e8*/  jz loc_140A0C9A0
/*140a0a5ee*/  mov word ptr [rax+4], 676Eh
/*140a0a5f4*/  mov dword ptr [rax], 69727473h
/*140a0a5fa*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a601*/  mov qword ptr [rbp+250h+var_70+8], 6
/*140a0a60c*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a613*/  mov qword ptr [rbp+250h+var_60+8], 6
/*140a0a61e*/ loc_140A0A61E: lea rcx, [rbp+250h+var_A0]
/*140a0a625*/  lea rdx, [rbp+250h+var_130]
/*140a0a62c*/  lea r8, [rbp+250h+var_C0]
/*140a0a633*/  lea r9, [rbp+250h+var_70]
/*140a0a63a*/  call sub_140307860
/*140a0a63f*/  nop
/*140a0a640*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a647*/  jz short loc_140A0A656
/*140a0a649*/ loc_140A0A649: lea rcx, [rbp+250h+var_A0]
/*140a0a650*/  call sub_1400104F0
/*140a0a655*/  nop
/*140a0a656*/ loc_140A0A656: movups xmm0, [rbp+250h+var_130]
/*140a0a65d*/  movups [rbp+250h+var_70+8], xmm0
/*140a0a664*/  mov rax, qword ptr [rbp+250h+var_120]
/*140a0a66b*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0a672*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0a679*/  mov [rbp+250h+var_E3], 0
/*140a0a680*/ loc_140A0A680: lea rcx, [rbp+250h+var_A0]
/*140a0a687*/  lea rdx, [rbp+250h+var_168]
/*140a0a68e*/  lea r8, [rbp+250h+var_110]
/*140a0a695*/  lea r9, [rbp+250h+var_70]
/*140a0a69c*/  call sub_140307860
/*140a0a6a1*/  nop
/*140a0a6a2*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a6a9*/  jz short loc_140A0A6B8
/*140a0a6ab*/ loc_140A0A6AB: lea rcx, [rbp+250h+var_A0]
/*140a0a6b2*/  call sub_1400104F0
/*140a0a6b7*/  nop
/*140a0a6b8*/ loc_140A0A6B8: call nullsub_1
/*140a0a6bd*/  mov ecx, 0Bh
/*140a0a6c2*/  mov edx, 1
/*140a0a6c7*/  call sub_140001650
/*140a0a6cc*/  test rax, rax
/*140a0a6cf*/  jz loc_140A0C9B5
/*140a0a6d5*/  mov [rax], rdi
/*140a0a6d8*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0a6df*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0a6ea*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a6f1*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0a6fc*/  call nullsub_1
/*140a0a701*/  mov ecx, 63h ; 'c'
/*140a0a706*/  mov edx, 1
/*140a0a70b*/  call sub_140001650
/*140a0a710*/  test rax, rax
/*140a0a713*/  mov [rbp+250h+var_D8], rax
/*140a0a71a*/  jz loc_140A0C9CA
/*140a0a720*/  movups xmm0, cs:xmmword_1417A8048
/*140a0a727*/  movups xmmword ptr [rax+50h], xmm0
/*140a0a72b*/  movups xmm0, cs:xmmword_1417A8038
/*140a0a732*/  movups xmmword ptr [rax+40h], xmm0
/*140a0a736*/  movups xmm0, cs:xmmword_1417A8028
/*140a0a73d*/  movups xmmword ptr [rax+30h], xmm0
/*140a0a741*/  movups xmm0, cs:xmmword_1417A8018
/*140a0a748*/  movups xmmword ptr [rax+20h], xmm0
/*140a0a74c*/  movups xmm0, cs:xmmword_1417A8008
/*140a0a753*/  movups xmmword ptr [rax+10h], xmm0
/*140a0a757*/  movups xmm0, cs:xmmword_1417A7FF8
/*140a0a75e*/  movups xmmword ptr [rax], xmm0
/*140a0a761*/  mov dword ptr [rax+5Fh], 2E73746Eh
/*140a0a768*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a76f*/  mov qword ptr [rbp+250h+var_70+8], 63h ; 'c'
/*140a0a77a*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a781*/  mov qword ptr [rbp+250h+var_60+8], 63h ; 'c'
/*140a0a78c*/ loc_140A0A78C: lea rcx, [rbp+250h+var_A0]
/*140a0a793*/  lea rdx, [rbp+250h+var_168]
/*140a0a79a*/  lea r8, [rbp+250h+var_C0]
/*140a0a7a1*/  lea r9, [rbp+250h+var_70]
/*140a0a7a8*/  call sub_140307860
/*140a0a7ad*/  nop
/*140a0a7ae*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a7b5*/  jz short loc_140A0A7C4
/*140a0a7b7*/ loc_140A0A7B7: lea rcx, [rbp+250h+var_A0]
/*140a0a7be*/  call sub_1400104F0
/*140a0a7c3*/  nop
/*140a0a7c4*/ loc_140A0A7C4: movups xmm0, xmmword ptr [rbp+250h+var_168]
/*140a0a7cb*/  movups [rbp+250h+var_70+8], xmm0
/*140a0a7d2*/  mov rax, qword ptr [rbp+250h+var_168+10h]
/*140a0a7d9*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0a7e0*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0a7e7*/  mov [rbp+250h+var_E4], 0
/*140a0a7ee*/ loc_140A0A7EE: lea rcx, [rbp+250h+var_A0]
/*140a0a7f5*/  lea rdx, [rbp+250h+var_198]
/*140a0a7fc*/  lea r8, [rbp+250h+var_150]
/*140a0a803*/  lea r9, [rbp+250h+var_70]
/*140a0a80a*/  call sub_140307860
/*140a0a80f*/  nop
/*140a0a810*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a817*/  jz short loc_140A0A826
/*140a0a819*/ loc_140A0A819: lea rcx, [rbp+250h+var_A0]
/*140a0a820*/  call sub_1400104F0
/*140a0a825*/  nop
/*140a0a826*/ loc_140A0A826: call nullsub_1
/*140a0a82b*/  mov ecx, 7
/*140a0a830*/  mov edx, 1
/*140a0a835*/  call sub_140001650
/*140a0a83a*/  test rax, rax
/*140a0a83d*/  jz loc_140A0C9DF
/*140a0a843*/  mov dword ptr [rax+3], 7269646Bh
/*140a0a84a*/  mov dword ptr [rax], 6B726F77h
/*140a0a850*/  mov qword ptr [rbp+250h+var_110], 7
/*140a0a85b*/  mov qword ptr [rbp+250h+var_110+8], rax
/*140a0a862*/  mov [rbp+250h+var_100], 7
/*140a0a86d*/  mov qword ptr [rbp+250h+var_130], 0
/*140a0a878*/  mov qword ptr [rbp+250h+var_120], 0
/*140a0a883*/  call nullsub_1
/*140a0a888*/  mov ecx, 4
/*140a0a88d*/  mov edx, 1
/*140a0a892*/  call sub_140001650
/*140a0a897*/  test rax, rax
/*140a0a89a*/  jz loc_140A0C9F4
/*140a0a8a0*/  mov dword ptr [rax], 65707974h
/*140a0a8a6*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0a8b1*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a8b8*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0a8c3*/  call nullsub_1
/*140a0a8c8*/  mov ecx, 6
/*140a0a8cd*/  mov edx, 1
/*140a0a8d2*/  call sub_140001650
/*140a0a8d7*/  test rax, rax
/*140a0a8da*/  mov [rbp+250h+var_D8], rax
/*140a0a8e1*/  jz loc_140A0CA09
/*140a0a8e7*/  mov word ptr [rax+4], 676Eh
/*140a0a8ed*/  mov dword ptr [rax], 69727473h
/*140a0a8f3*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a8fa*/  mov qword ptr [rbp+250h+var_70+8], 6
/*140a0a905*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a90c*/  mov qword ptr [rbp+250h+var_60+8], 6
/*140a0a917*/ loc_140A0A917: lea rcx, [rbp+250h+var_A0]
/*140a0a91e*/  lea rdx, [rbp+250h+var_130]
/*140a0a925*/  lea r8, [rbp+250h+var_C0]
/*140a0a92c*/  lea r9, [rbp+250h+var_70]
/*140a0a933*/  call sub_140307860
/*140a0a938*/  nop
/*140a0a939*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0a940*/  jz short loc_140A0A94F
/*140a0a942*/ loc_140A0A942: lea rcx, [rbp+250h+var_A0]
/*140a0a949*/  call sub_1400104F0
/*140a0a94e*/  nop
/*140a0a94f*/ loc_140A0A94F: call nullsub_1
/*140a0a954*/  mov ecx, 0Bh
/*140a0a959*/  mov edx, 1
/*140a0a95e*/  call sub_140001650
/*140a0a963*/  test rax, rax
/*140a0a966*/  jz loc_140A0CA1E
/*140a0a96c*/  mov [rax], rdi
/*140a0a96f*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0a976*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0a981*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0a988*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0a993*/  call nullsub_1
/*140a0a998*/  mov ecx, 33h ; '3'
/*140a0a99d*/  mov edx, 1
/*140a0a9a2*/  call sub_140001650
/*140a0a9a7*/  test rax, rax
/*140a0a9aa*/  mov [rbp+250h+var_D8], rax
/*140a0a9b1*/  jz loc_140A0CA33
/*140a0a9b7*/  movups xmm0, cs:xmmword_1417A8090
/*140a0a9be*/  movups xmmword ptr [rax+20h], xmm0
/*140a0a9c2*/  movups xmm0, cs:xmmword_1417A8080
/*140a0a9c9*/  movups xmmword ptr [rax+10h], xmm0
/*140a0a9cd*/  movups xmm0, cs:xmmword_1417A8070
/*140a0a9d4*/  movups xmmword ptr [rax], xmm0
/*140a0a9d7*/  mov dword ptr [rax+2Fh], 2E296C61h
/*140a0a9de*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0a9e5*/  mov qword ptr [rbp+250h+var_70+8], 33h ; '3'
/*140a0a9f0*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0a9f7*/  mov qword ptr [rbp+250h+var_60+8], 33h ; '3'
/*140a0aa02*/ loc_140A0AA02: lea rcx, [rbp+250h+var_A0]
/*140a0aa09*/  lea rdx, [rbp+250h+var_130]
/*140a0aa10*/  lea r8, [rbp+250h+var_C0]
/*140a0aa17*/  lea r9, [rbp+250h+var_70]
/*140a0aa1e*/  call sub_140307860
/*140a0aa23*/  nop
/*140a0aa24*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0aa2b*/  jz short loc_140A0AA3A
/*140a0aa2d*/ loc_140A0AA2D: lea rcx, [rbp+250h+var_A0]
/*140a0aa34*/  call sub_1400104F0
/*140a0aa39*/  nop
/*140a0aa3a*/ loc_140A0AA3A: movups xmm0, [rbp+250h+var_130]
/*140a0aa41*/  movups [rbp+250h+var_70+8], xmm0
/*140a0aa48*/  mov rax, qword ptr [rbp+250h+var_120]
/*140a0aa4f*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0aa56*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0aa5d*/  mov [rbp+250h+var_E5], 0
/*140a0aa64*/ loc_140A0AA64: lea rcx, [rbp+250h+var_A0]
/*140a0aa6b*/  lea rdx, [rbp+250h+var_198]
/*140a0aa72*/  lea r8, [rbp+250h+var_110]
/*140a0aa79*/  lea r9, [rbp+250h+var_70]
/*140a0aa80*/  call sub_140307860
/*140a0aa85*/  nop
/*140a0aa86*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0aa8d*/  jz short loc_140A0AA9C
/*140a0aa8f*/ loc_140A0AA8F: lea rcx, [rbp+250h+var_A0]
/*140a0aa96*/  call sub_1400104F0
/*140a0aa9b*/  nop
/*140a0aa9c*/ loc_140A0AA9C: call nullsub_1
/*140a0aaa1*/  mov ecx, 0Ah
/*140a0aaa6*/  mov edx, 1
/*140a0aaab*/  call sub_140001650
/*140a0aab0*/  test rax, rax
/*140a0aab3*/  jz loc_140A0CA48
/*140a0aab9*/  mov rcx, 5F74756F656D6974h
/*140a0aac3*/  mov [rax], rcx
/*140a0aac6*/  mov word ptr [rax+8], 736Dh
/*140a0aacc*/  mov qword ptr [rbp+250h+var_110], 0Ah
/*140a0aad7*/  mov qword ptr [rbp+250h+var_110+8], rax
/*140a0aade*/  mov [rbp+250h+var_100], 0Ah
/*140a0aae9*/  mov qword ptr [rbp+250h+var_130], 0
/*140a0aaf4*/  mov qword ptr [rbp+250h+var_120], 0
/*140a0aaff*/  call nullsub_1
/*140a0ab04*/  mov ecx, 4
/*140a0ab09*/  mov edx, 1
/*140a0ab0e*/  call sub_140001650
/*140a0ab13*/  test rax, rax
/*140a0ab16*/  jz loc_140A0CA5D
/*140a0ab1c*/  mov dword ptr [rax], 65707974h
/*140a0ab22*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0ab2d*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0ab34*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0ab3f*/  call nullsub_1
/*140a0ab44*/  mov ecx, 6
/*140a0ab49*/  mov edx, 1
/*140a0ab4e*/  call sub_140001650
/*140a0ab53*/  test rax, rax
/*140a0ab56*/  mov [rbp+250h+var_D8], rax
/*140a0ab5d*/  jz loc_140A0CA72
/*140a0ab63*/  mov word ptr [rax+4], 7265h
/*140a0ab69*/  mov dword ptr [rax], 626D756Eh
/*140a0ab6f*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0ab76*/  mov qword ptr [rbp+250h+var_70+8], 6
/*140a0ab81*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0ab88*/  mov qword ptr [rbp+250h+var_60+8], 6
/*140a0ab93*/ loc_140A0AB93: lea rcx, [rbp+250h+var_A0]
/*140a0ab9a*/  lea rdx, [rbp+250h+var_130]
/*140a0aba1*/  lea r8, [rbp+250h+var_C0]
/*140a0aba8*/  lea r9, [rbp+250h+var_70]
/*140a0abaf*/  call sub_140307860
/*140a0abb4*/  nop
/*140a0abb5*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0abbc*/  jz short loc_140A0ABCB
/*140a0abbe*/ loc_140A0ABBE: lea rcx, [rbp+250h+var_A0]
/*140a0abc5*/  call sub_1400104F0
/*140a0abca*/  nop
/*140a0abcb*/ loc_140A0ABCB: call nullsub_1
/*140a0abd0*/  mov ecx, 0Bh
/*140a0abd5*/  mov edx, 1
/*140a0abda*/  call sub_140001650
/*140a0abdf*/  test rax, rax
/*140a0abe2*/  jz loc_140A0CA87
/*140a0abe8*/  mov [rax], rdi
/*140a0abeb*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0abf2*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0abfd*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0ac04*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0ac0f*/  call nullsub_1
/*140a0ac14*/  mov ecx, 32h ; '2'
/*140a0ac19*/  mov edx, 1
/*140a0ac1e*/  call sub_140001650
/*140a0ac23*/  test rax, rax
/*140a0ac26*/  mov [rbp+250h+var_D8], rax
/*140a0ac2d*/  jz loc_140A0CA9C
/*140a0ac33*/  movups xmm0, cs:xmmword_1417A80F0
/*140a0ac3a*/  movups xmmword ptr [rax+20h], xmm0
/*140a0ac3e*/  movups xmm0, cs:xmmword_1417A80E0
/*140a0ac45*/  movups xmmword ptr [rax+10h], xmm0
/*140a0ac49*/  movups xmm0, cs:xmmword_1417A80D0
/*140a0ac50*/  movups xmmword ptr [rax], xmm0
/*140a0ac53*/  mov word ptr [rax+30h], 2E29h
/*140a0ac59*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0ac60*/  mov qword ptr [rbp+250h+var_70+8], 32h ; '2'
/*140a0ac6b*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0ac72*/  mov qword ptr [rbp+250h+var_60+8], 32h ; '2'
/*140a0ac7d*/ loc_140A0AC7D: lea rcx, [rbp+250h+var_A0]
/*140a0ac84*/  lea rdx, [rbp+250h+var_130]
/*140a0ac8b*/  lea r8, [rbp+250h+var_C0]
/*140a0ac92*/  lea r9, [rbp+250h+var_70]
/*140a0ac99*/  call sub_140307860
/*140a0ac9e*/  nop
/*140a0ac9f*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0aca6*/  jz short loc_140A0ACB5
/*140a0aca8*/ loc_140A0ACA8: lea rcx, [rbp+250h+var_A0]
/*140a0acaf*/  call sub_1400104F0
/*140a0acb4*/  nop
/*140a0acb5*/ loc_140A0ACB5: movups xmm0, [rbp+250h+var_130]
/*140a0acbc*/  movups [rbp+250h+var_70+8], xmm0
/*140a0acc3*/  mov rax, qword ptr [rbp+250h+var_120]
/*140a0acca*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0acd1*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0acd8*/  mov [rbp+250h+var_E6], 0
/*140a0acdf*/ loc_140A0ACDF: lea rcx, [rbp+250h+var_A0]
/*140a0ace6*/  lea rdx, [rbp+250h+var_198]
/*140a0aced*/  lea r8, [rbp+250h+var_110]
/*140a0acf4*/  lea r9, [rbp+250h+var_70]
/*140a0acfb*/  call sub_140307860
/*140a0ad00*/  nop
/*140a0ad01*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0ad08*/  jz short loc_140A0AD17
/*140a0ad0a*/ loc_140A0AD0A: lea rcx, [rbp+250h+var_A0]
/*140a0ad11*/  call sub_1400104F0
/*140a0ad16*/  nop
/*140a0ad17*/ loc_140A0AD17: movups xmm0, [rbp+250h+var_198]
/*140a0ad1e*/  movups [rbp+250h+var_70+8], xmm0
/*140a0ad25*/  mov rax, [rbp+250h+var_188]
/*140a0ad2c*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0ad33*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0ad3a*/  mov [rbp+250h+var_E7], 0
/*140a0ad41*/ loc_140A0AD41: lea rcx, [rbp+250h+var_A0]
/*140a0ad48*/  lea rdx, [rbp+250h+var_1B0]
/*140a0ad4f*/  lea r8, [rbp+250h+var_200]
/*140a0ad53*/  lea r9, [rbp+250h+var_70]
/*140a0ad5a*/  call sub_140307860
/*140a0ad5f*/  nop
/*140a0ad60*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0ad67*/  jz short loc_140A0AD76
/*140a0ad69*/ loc_140A0AD69: lea rcx, [rbp+250h+var_A0]
/*140a0ad70*/  call sub_1400104F0
/*140a0ad75*/  nop
/*140a0ad76*/ loc_140A0AD76: call nullsub_1
/*140a0ad7b*/  mov ecx, 8
/*140a0ad80*/  mov edx, 1
/*140a0ad85*/  call sub_140001650
/*140a0ad8a*/  test rax, rax
/*140a0ad8d*/  jz loc_140A0CAB1
/*140a0ad93*/  mov rcx, 6465726975716572h
/*140a0ad9d*/  mov [rax], rcx
/*140a0ada0*/  mov qword ptr [rbp+250h+var_C0], 8
/*140a0adab*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0adb2*/  mov qword ptr [rbp+250h+var_B0], 8
/*140a0adbd*/  call nullsub_1
/*140a0adc2*/  mov ecx, 20h ; ' '
/*140a0adc7*/  mov edx, 8
/*140a0adcc*/  call sub_140001650
/*140a0add1*/  test rax, rax
/*140a0add4*/  jz loc_140A0C516
/*140a0adda*/  mov rdi, rax
/*140a0addd*/  call nullsub_1
/*140a0ade2*/  mov ecx, 7
/*140a0ade7*/  mov edx, 1
/*140a0adec*/  call sub_140001650
/*140a0adf1*/  test rax, rax
/*140a0adf4*/  jz loc_140A0CAC6
/*140a0adfa*/  mov dword ptr [rax+3], 646E616Dh
/*140a0ae01*/  mov dword ptr [rax], 6D6D6F63h
/*140a0ae07*/  mov byte ptr [rdi], 3
/*140a0ae0a*/  mov qword ptr [rdi+8], 7
/*140a0ae12*/  mov [rdi+10h], rax
/*140a0ae16*/  mov qword ptr [rdi+18h], 7
/*140a0ae1e*/  mov qword ptr [rbp+250h+var_70+8], 1
/*140a0ae29*/  mov qword ptr [rbp+250h+var_60], rdi
/*140a0ae30*/  mov qword ptr [rbp+250h+var_60+8], 1
/*140a0ae3b*/  mov byte ptr [rbp+250h+var_70], 4
/*140a0ae42*/  mov [rbp+250h+var_DD], 0
/*140a0ae49*/ loc_140A0AE49: lea rcx, [rbp+250h+var_A0]
/*140a0ae50*/  lea rdx, [rbp+250h+var_1B0]
/*140a0ae57*/  lea r8, [rbp+250h+var_C0]
/*140a0ae5e*/  lea r9, [rbp+250h+var_70]
/*140a0ae65*/  call sub_140307860
/*140a0ae6a*/  nop
/*140a0ae6b*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0ae72*/  jz short loc_140A0AE81
/*140a0ae74*/ loc_140A0AE74: lea rcx, [rbp+250h+var_A0]
/*140a0ae7b*/  call sub_1400104F0
/*140a0ae80*/  nop
/*140a0ae81*/ loc_140A0AE81: movups xmm0, [rbp+250h+var_1B0]
/*140a0ae88*/  movups [rbp+250h+var_70+8], xmm0
/*140a0ae8f*/  mov rax, [rbp+250h+var_1A0]
/*140a0ae96*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0ae9d*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0aea4*/  mov [rbp+250h+var_E8], 0
/*140a0aeab*/ loc_140A0AEAB: lea rcx, [rbp+250h+var_A0]
/*140a0aeb2*/  lea rdx, [rbp+250h+var_1C8]
/*140a0aeb9*/  lea r8, [rbp+250h+var_1E8]
/*140a0aebd*/  lea r9, [rbp+250h+var_70]
/*140a0aec4*/  call sub_140307860
/*140a0aec9*/  nop
/*140a0aeca*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0aed1*/  jz short loc_140A0AEE0
/*140a0aed3*/ loc_140A0AED3: lea rcx, [rbp+250h+var_A0]
/*140a0aeda*/  call sub_1400104F0
/*140a0aedf*/  nop
/*140a0aee0*/ loc_140A0AEE0: movups xmm0, [rbp+250h+var_1C8]
/*140a0aee7*/  movups [rbp+250h+var_70+8], xmm0
/*140a0aeee*/  mov rax, [rbp+250h+var_1B8]
/*140a0aef5*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0aefc*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0af03*/  mov [rbp+250h+var_E9], 0
/*140a0af0a*/ loc_140A0AF0A: lea rcx, [rbp+250h+var_A0]
/*140a0af11*/  lea rdx, [rbp+250h+var_220]
/*140a0af15*/  lea r8, [rbp+250h+var_180]
/*140a0af1c*/  lea r9, [rbp+250h+var_70]
/*140a0af23*/  call sub_140307860
/*140a0af28*/  nop
/*140a0af29*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0af30*/  jz short loc_140A0AF3F
/*140a0af32*/ loc_140A0AF32: lea rcx, [rbp+250h+var_A0]
/*140a0af39*/  call sub_1400104F0
/*140a0af3e*/  nop
/*140a0af3f*/ loc_140A0AF3F: mov rax, [rbp+250h+var_210]
/*140a0af43*/  movups xmm0, [rbp+250h+var_220]
/*140a0af47*/  movups [rbp+250h+var_70+7], xmm0
/*140a0af4e*/  mov qword ptr [rbp+250h+var_60+7], rax
/*140a0af55*/  mov rdx, [rbp+250h+var_F8]
/*140a0af5c*/  mov byte ptr [rdx], 5
/*140a0af5f*/  movups xmm0, [rbp+250h+var_70]
/*140a0af66*/  mov rax, qword ptr [rbp+250h+var_70+0Fh]
/*140a0af6d*/  mov rcx, qword ptr [rbp+250h+var_60+7]
/*140a0af74*/  movups xmmword ptr [rdx+1], xmm0
/*140a0af78*/  mov [rdx+10h], rax
/*140a0af7c*/  mov [rdx+18h], rcx
/*140a0af80*/  mov qword ptr [rsi], 1
/*140a0af87*/  mov [rsi+8], rdx
/*140a0af8b*/  mov qword ptr [rsi+10h], 1
/*140a0af93*/  jmp loc_140A09F4C
/*140a0af98*/ loc_140A0AF98: xor r14d, r14d
/*140a0af9b*/ loc_140A0AF9B: mov qword ptr [rbp+250h+var_C0], rdi
/*140a0afa2*/  mov qword ptr [rbp+250h+var_C0+8], r14
/*140a0afa9*/  lea rcx, aTools_1; "tools"
/*140a0afb0*/  mov edx, 5
/*140a0afb5*/  mov r8, rbx
/*140a0afb8*/  call sub_141433D50
/*140a0afbd*/  test rax, rax
/*140a0afc0*/  jz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a0afc6*/  cmp byte ptr [rax], 4
/*140a0afc9*/  jnz def_140A09CF6; jumptable 0000000140A09CF6 default case, cases 7,10
/*140a0afcf*/  cmp r14, 2
/*140a0afd3*/  jnb loc_140A0BB22
/*140a0afd9*/  test r14, r14
/*140a0afdc*/  jnz loc_140A0BB2C
/*140a0afe2*/  mov qword ptr [rbp+250h+var_A0], 0
/*140a0afed*/  mov qword ptr [rbp+250h+var_A0+8], 1
/*140a0aff8*/  mov qword ptr [rbp+250h+var_90], 0
/*140a0b003*/  jmp loc_140A0BBCF
/*140a0b008*/ loc_140A0B008: xor r14d, r14d
/*140a0b00b*/ loc_140A0B00B: mov [rsp+2D0h+var_2B0], 1
/*140a0b014*/  lea rcx, [rbp+250h+var_70]
/*140a0b01b*/  mov r9d, 1
/*140a0b021*/  mov rdx, r14
/*140a0b024*/  xor r8d, r8d
/*140a0b027*/  call sub_140388B60
/*140a0b02c*/  mov r15, qword ptr [rbp+250h+var_70+8]
/*140a0b033*/  cmp dword ptr [rbp+250h+var_70], 1
/*140a0b03a*/  jz loc_140A0C532
/*140a0b040*/  mov rdi, qword ptr [rbp+250h+var_60]
/*140a0b047*/  test r14, r14
/*140a0b04a*/  jz short loc_140A0B05A
/*140a0b04c*/  mov rcx, rdi
/*140a0b04f*/  mov rdx, r12
/*140a0b052*/  mov r8, r14
/*140a0b055*/  call sub_141684120
/*140a0b05a*/ loc_140A0B05A: mov [rbp+250h+var_180], r15
/*140a0b061*/  mov [rbp+250h+var_178], rdi
/*140a0b068*/  mov [rbp+250h+var_170], r14
/*140a0b06f*/ loc_140A0B06F: lea rcx, aFormat_1; "format"
/*140a0b076*/  mov edx, 6
/*140a0b07b*/  mov r8, rbx
/*140a0b07e*/  call sub_141433D50
/*140a0b083*/  nop
/*140a0b084*/  test rax, rax
/*140a0b087*/  jz loc_140A0B160
/*140a0b08d*/  lea rcx, aType_8; "type"
/*140a0b094*/  mov edx, 4
/*140a0b099*/  mov r8, rax
/*140a0b09c*/  call sub_141433D50
/*140a0b0a1*/  nop
/*140a0b0a2*/  test rax, rax
/*140a0b0a5*/  jz loc_140A0B160
/*140a0b0ab*/  cmp byte ptr [rax], 3
/*140a0b0ae*/  jnz loc_140A0B160
/*140a0b0b4*/  mov rcx, [rax+10h]
/*140a0b0b8*/  mov rax, [rax+18h]
/*140a0b0bc*/  mov qword ptr [rbp+250h+var_C0], rcx
/*140a0b0c3*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b0ca*/  test rax, rax
/*140a0b0cd*/  jz loc_140A0B160
/*140a0b0d3*/  lea rax, [rbp+250h+var_C0]
/*140a0b0da*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0b0e1*/  lea rax, sub_14041F680
/*140a0b0e8*/  mov qword ptr [rbp+250h+var_A0+8], rax
/*140a0b0ef*/  lea rdx, unk_1417A7E8D
/*140a0b0f6*/  lea rcx, [rbp+250h+var_70]
/*140a0b0fd*/  lea r8, [rbp+250h+var_A0]
/*140a0b104*/  call sub_14149C0F0
/*140a0b109*/  nop
/*140a0b10a*/ loc_140A0B10A: mov r12, qword ptr [rbp+250h+var_70]
/*140a0b111*/  mov r13, qword ptr [rbp+250h+var_70+8]
/*140a0b118*/  mov rbx, qword ptr [rbp+250h+var_60]
/*140a0b11f*/  sub r15, r14
/*140a0b122*/  cmp rbx, r15
/*140a0b125*/  ja loc_140A0C7FF
/*140a0b12b*/  test rbx, rbx
/*140a0b12e*/  jz short loc_140A0B13F
/*140a0b130*/ loc_140A0B130: lea rcx, [rdi+r14]
/*140a0b134*/  mov rdx, r13
/*140a0b137*/  mov r8, rbx
/*140a0b13a*/  call sub_141684120
/*140a0b13f*/ loc_140A0B13F: add r14, rbx
/*140a0b142*/  mov [rbp+250h+var_170], r14
/*140a0b149*/  test r12, r12
/*140a0b14c*/  jz short loc_140A0B160
/*140a0b14e*/  mov r8d, 1
/*140a0b154*/  mov rcx, r13
/*140a0b157*/  mov rdx, r12
/*140a0b15a*/  call sub_140001660
/*140a0b15f*/  nop
/*140a0b160*/ loc_140A0B160: call sub_14030B9B0
/*140a0b165*/  nop
/*140a0b166*/  mov [rbp+250h+var_F8], rax
/*140a0b16d*/  mov qword ptr [rbp+250h+var_1C8], 0
/*140a0b178*/  mov [rbp+250h+var_1B8], 0
/*140a0b183*/  call nullsub_1
/*140a0b188*/  mov ecx, 4
/*140a0b18d*/  mov edx, 1
/*140a0b192*/  call sub_140001650
/*140a0b197*/  test rax, rax
/*140a0b19a*/  jz loc_140A0CAE2
/*140a0b1a0*/  mov dword ptr [rax], 65707974h
/*140a0b1a6*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0b1b1*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b1b8*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0b1c3*/  mov [rbp+250h+var_C4], 1
/*140a0b1ca*/ loc_140A0B1CA: lea rdx, off_1417A4F98; "function"
/*140a0b1d1*/  lea rcx, [rbp+250h+var_70]
/*140a0b1d8*/  call sub_140B56640
/*140a0b1dd*/  nop
/*140a0b1de*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b1e5*/  jz loc_140A0C558
/*140a0b1eb*/  movups xmm0, [rbp+250h+var_70]
/*140a0b1f2*/  movups xmm1, [rbp+250h+var_60]
/*140a0b1f9*/  movaps [rbp+250h+var_90], xmm1
/*140a0b200*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b207*/  mov [rbp+250h+var_C4], 0
/*140a0b20e*/  lea rcx, [rbp+250h+var_70]
/*140a0b215*/  lea rdx, [rbp+250h+var_1C8]
/*140a0b21c*/  lea r8, [rbp+250h+var_C0]
/*140a0b223*/  lea r9, [rbp+250h+var_A0]
/*140a0b22a*/  call sub_140307860
/*140a0b22f*/  nop
/*140a0b230*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b237*/  jz short loc_140A0B246
/*140a0b239*/ loc_140A0B239: lea rcx, [rbp+250h+var_70]
/*140a0b240*/  call sub_1400104F0
/*140a0b245*/  nop
/*140a0b246*/ loc_140A0B246: call nullsub_1
/*140a0b24b*/  mov ecx, 8
/*140a0b250*/  mov edx, 1
/*140a0b255*/  call sub_140001650
/*140a0b25a*/  test rax, rax
/*140a0b25d*/  jz loc_140A0CB6D
/*140a0b263*/  mov rcx, 6E6F6974636E7566h
/*140a0b26d*/  mov [rax], rcx
/*140a0b270*/  mov [rbp+250h+var_1E8], 8
/*140a0b278*/  mov [rbp+250h+var_1E0], rax
/*140a0b27c*/  mov [rbp+250h+var_1D8], 8
/*140a0b284*/  mov qword ptr [rbp+250h+var_1B0], 0
/*140a0b28f*/  mov [rbp+250h+var_1A0], 0
/*140a0b29a*/  call nullsub_1
/*140a0b29f*/  mov ecx, 4
/*140a0b2a4*/  mov edx, 1
/*140a0b2a9*/  call sub_140001650
/*140a0b2ae*/  test rax, rax
/*140a0b2b1*/  jz loc_140A0CB82
/*140a0b2b7*/  mov dword ptr [rax], 656D616Eh
/*140a0b2bd*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0b2c8*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b2cf*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0b2da*/  mov [rbp+250h+var_C5], 1
/*140a0b2e1*/ loc_140A0B2E1: lea rcx, [rbp+250h+var_70]
/*140a0b2e8*/  lea rdx, [rbp+250h+var_220]
/*140a0b2ec*/  call sub_140B56640
/*140a0b2f1*/  nop
/*140a0b2f2*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b2f9*/  jz loc_140A0C5D6
/*140a0b2ff*/  movups xmm0, [rbp+250h+var_70]
/*140a0b306*/  movups xmm1, [rbp+250h+var_60]
/*140a0b30d*/  movaps [rbp+250h+var_90], xmm1
/*140a0b314*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b31b*/  mov [rbp+250h+var_C5], 0
/*140a0b322*/  lea rcx, [rbp+250h+var_70]
/*140a0b329*/  lea rdx, [rbp+250h+var_1B0]
/*140a0b330*/  lea r8, [rbp+250h+var_C0]
/*140a0b337*/  lea r9, [rbp+250h+var_A0]
/*140a0b33e*/  call sub_140307860
/*140a0b343*/  nop
/*140a0b344*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b34b*/  jz short loc_140A0B35A
/*140a0b34d*/ loc_140A0B34D: lea rcx, [rbp+250h+var_70]
/*140a0b354*/  call sub_1400104F0
/*140a0b359*/  nop
/*140a0b35a*/ loc_140A0B35A: call nullsub_1
/*140a0b35f*/  mov ecx, 0Bh
/*140a0b364*/  mov edx, 1
/*140a0b369*/  call sub_140001650
/*140a0b36e*/  test rax, rax
/*140a0b371*/  jz loc_140A0CBB3
/*140a0b377*/  mov rbx, 7470697263736564h
/*140a0b381*/  mov [rax], rbx
/*140a0b384*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0b38b*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0b396*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b39d*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0b3a8*/  mov [rbp+250h+var_C6], 1
/*140a0b3af*/ loc_140A0B3AF: lea rcx, [rbp+250h+var_70]
/*140a0b3b6*/  lea rdx, [rbp+250h+var_180]
/*140a0b3bd*/  call sub_140B56520
/*140a0b3c2*/  nop
/*140a0b3c3*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b3ca*/  jz loc_140A0C654
/*140a0b3d0*/  movups xmm0, [rbp+250h+var_70]
/*140a0b3d7*/  movups xmm1, [rbp+250h+var_60]
/*140a0b3de*/  movaps [rbp+250h+var_90], xmm1
/*140a0b3e5*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b3ec*/  mov [rbp+250h+var_C6], 0
/*140a0b3f3*/  lea rcx, [rbp+250h+var_70]
/*140a0b3fa*/  lea rdx, [rbp+250h+var_1B0]
/*140a0b401*/  lea r8, [rbp+250h+var_C0]
/*140a0b408*/  lea r9, [rbp+250h+var_A0]
/*140a0b40f*/  call sub_140307860
/*140a0b414*/  nop
/*140a0b415*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b41c*/  jz short loc_140A0B42B
/*140a0b41e*/ loc_140A0B41E: lea rcx, [rbp+250h+var_70]
/*140a0b425*/  call sub_1400104F0
/*140a0b42a*/  nop
/*140a0b42b*/ loc_140A0B42B: call nullsub_1
/*140a0b430*/  mov ecx, 0Ah
/*140a0b435*/  mov edx, 1
/*140a0b43a*/  call sub_140001650
/*140a0b43f*/  test rax, rax
/*140a0b442*/  jz loc_140A0CBC8
/*140a0b448*/  mov rcx, 6574656D61726170h
/*140a0b452*/  mov [rax], rcx
/*140a0b455*/  mov word ptr [rax+8], 7372h
/*140a0b45b*/  mov [rbp+250h+var_200], 0Ah
/*140a0b463*/  mov [rbp+250h+var_1F8], rax
/*140a0b467*/  mov [rbp+250h+var_1F0], 0Ah
/*140a0b46f*/  mov qword ptr [rbp+250h+var_198], 0
/*140a0b47a*/  mov [rbp+250h+var_188], 0
/*140a0b485*/  call nullsub_1
/*140a0b48a*/  mov ecx, 4
/*140a0b48f*/  mov edx, 1
/*140a0b494*/  call sub_140001650
/*140a0b499*/  test rax, rax
/*140a0b49c*/  jz loc_140A0CBDD
/*140a0b4a2*/  mov dword ptr [rax], 65707974h
/*140a0b4a8*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0b4b3*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b4ba*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0b4c5*/  mov [rbp+250h+var_C7], 1
/*140a0b4cc*/ loc_140A0B4CC: lea rdx, off_1417A49E8; "object"
/*140a0b4d3*/  lea rcx, [rbp+250h+var_70]
/*140a0b4da*/  call sub_140B56640
/*140a0b4df*/  nop
/*140a0b4e0*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b4e7*/  jz loc_140A0C693
/*140a0b4ed*/  movups xmm0, [rbp+250h+var_70]
/*140a0b4f4*/  movups xmm1, [rbp+250h+var_60]
/*140a0b4fb*/  movaps [rbp+250h+var_90], xmm1
/*140a0b502*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b509*/  mov [rbp+250h+var_C7], 0
/*140a0b510*/  lea rcx, [rbp+250h+var_70]
/*140a0b517*/  lea rdx, [rbp+250h+var_198]
/*140a0b51e*/  lea r8, [rbp+250h+var_C0]
/*140a0b525*/  lea r9, [rbp+250h+var_A0]
/*140a0b52c*/  call sub_140307860
/*140a0b531*/  nop
/*140a0b532*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b539*/  jz short loc_140A0B548
/*140a0b53b*/ loc_140A0B53B: lea rcx, [rbp+250h+var_70]
/*140a0b542*/  call sub_1400104F0
/*140a0b547*/  nop
/*140a0b548*/ loc_140A0B548: call nullsub_1
/*140a0b54d*/  mov ecx, 0Ah
/*140a0b552*/  mov edx, 1
/*140a0b557*/  call sub_140001650
/*140a0b55c*/  test rax, rax
/*140a0b55f*/  jz loc_140A0CBF2
/*140a0b565*/  mov rcx, 69747265706F7270h
/*140a0b56f*/  mov [rax], rcx
/*140a0b572*/  mov word ptr [rax+8], 7365h
/*140a0b578*/  mov qword ptr [rbp+250h+var_150], 0Ah
/*140a0b583*/  mov qword ptr [rbp+250h+var_150+8], rax
/*140a0b58a*/  mov [rbp+250h+var_140], 0Ah
/*140a0b595*/  mov qword ptr [rbp+250h+var_168], 0
/*140a0b5a0*/  mov qword ptr [rbp+250h+var_168+10h], 0
/*140a0b5ab*/  call nullsub_1
/*140a0b5b0*/  mov ecx, 5
/*140a0b5b5*/  mov edx, 1
/*140a0b5ba*/  call sub_140001650
/*140a0b5bf*/  test rax, rax
/*140a0b5c2*/  jz loc_140A0CC07
/*140a0b5c8*/  mov byte ptr [rax+4], 74h ; 't'
/*140a0b5cc*/  mov dword ptr [rax], 75706E69h
/*140a0b5d2*/  mov qword ptr [rbp+250h+var_110], 5
/*140a0b5dd*/  mov qword ptr [rbp+250h+var_110+8], rax
/*140a0b5e4*/  mov [rbp+250h+var_100], 5
/*140a0b5ef*/  mov qword ptr [rbp+250h+var_130], 0
/*140a0b5fa*/  mov qword ptr [rbp+250h+var_120], 0
/*140a0b605*/  call nullsub_1
/*140a0b60a*/  mov ecx, 4
/*140a0b60f*/  mov edx, 1
/*140a0b614*/  call sub_140001650
/*140a0b619*/  test rax, rax
/*140a0b61c*/  jz loc_140A0CC1C
/*140a0b622*/  mov dword ptr [rax], 65707974h
/*140a0b628*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0b633*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b63a*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0b645*/  mov [rbp+250h+var_C8], 1
/*140a0b64c*/ loc_140A0B64C: lea rdx, off_1417A7F00; "string"
/*140a0b653*/  lea rcx, [rbp+250h+var_70]
/*140a0b65a*/  call sub_140B56640
/*140a0b65f*/  nop
/*140a0b660*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b667*/  jz loc_140A0C6D2
/*140a0b66d*/  movups xmm0, [rbp+250h+var_70]
/*140a0b674*/  movups xmm1, [rbp+250h+var_60]
/*140a0b67b*/  movaps [rbp+250h+var_90], xmm1
/*140a0b682*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b689*/  mov [rbp+250h+var_C8], 0
/*140a0b690*/  lea rcx, [rbp+250h+var_70]
/*140a0b697*/  lea rdx, [rbp+250h+var_130]
/*140a0b69e*/  lea r8, [rbp+250h+var_C0]
/*140a0b6a5*/  lea r9, [rbp+250h+var_A0]
/*140a0b6ac*/  call sub_140307860
/*140a0b6b1*/  nop
/*140a0b6b2*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b6b9*/  jz short loc_140A0B6C8
/*140a0b6bb*/ loc_140A0B6BB: lea rcx, [rbp+250h+var_70]
/*140a0b6c2*/  call sub_1400104F0
/*140a0b6c7*/  nop
/*140a0b6c8*/ loc_140A0B6C8: call nullsub_1
/*140a0b6cd*/  mov ecx, 0Bh
/*140a0b6d2*/  mov edx, 1
/*140a0b6d7*/  call sub_140001650
/*140a0b6dc*/  test rax, rax
/*140a0b6df*/  jz loc_140A0CC31
/*140a0b6e5*/  mov [rax], rbx
/*140a0b6e8*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0b6ef*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0b6fa*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b701*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0b70c*/  mov [rbp+250h+var_C9], 1
/*140a0b713*/ loc_140A0B713: lea rdx, off_1417A7F28; "Input text for the tool."
/*140a0b71a*/  lea rcx, [rbp+250h+var_70]
/*140a0b721*/  call sub_140B56640
/*140a0b726*/  nop
/*140a0b727*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b72e*/  jz loc_140A0C711
/*140a0b734*/  movups xmm0, [rbp+250h+var_70]
/*140a0b73b*/  movups xmm1, [rbp+250h+var_60]
/*140a0b742*/  movaps [rbp+250h+var_90], xmm1
/*140a0b749*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b750*/  mov [rbp+250h+var_C9], 0
/*140a0b757*/  lea rcx, [rbp+250h+var_70]
/*140a0b75e*/  lea rdx, [rbp+250h+var_130]
/*140a0b765*/  lea r8, [rbp+250h+var_C0]
/*140a0b76c*/  lea r9, [rbp+250h+var_A0]
/*140a0b773*/  call sub_140307860
/*140a0b778*/  nop
/*140a0b779*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b780*/  jz short loc_140A0B78F
/*140a0b782*/ loc_140A0B782: lea rcx, [rbp+250h+var_70]
/*140a0b789*/  call sub_1400104F0
/*140a0b78e*/  nop
/*140a0b78f*/ loc_140A0B78F: movups xmm0, [rbp+250h+var_130]
/*140a0b796*/  movups [rbp+250h+var_70+8], xmm0
/*140a0b79d*/  mov rax, qword ptr [rbp+250h+var_120]
/*140a0b7a4*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0b7ab*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0b7b2*/  mov [rbp+250h+var_DF], 0
/*140a0b7b9*/ loc_140A0B7B9: lea rcx, [rbp+250h+var_A0]
/*140a0b7c0*/  lea rdx, [rbp+250h+var_168]
/*140a0b7c7*/  lea r8, [rbp+250h+var_110]
/*140a0b7ce*/  lea r9, [rbp+250h+var_70]
/*140a0b7d5*/  call sub_140307860
/*140a0b7da*/  nop
/*140a0b7db*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0b7e2*/  jz short loc_140A0B7F1
/*140a0b7e4*/ loc_140A0B7E4: lea rcx, [rbp+250h+var_A0]
/*140a0b7eb*/  call sub_1400104F0
/*140a0b7f0*/  nop
/*140a0b7f1*/ loc_140A0B7F1: movups xmm0, xmmword ptr [rbp+250h+var_168]
/*140a0b7f8*/  movups [rbp+250h+var_70+8], xmm0
/*140a0b7ff*/  mov rax, qword ptr [rbp+250h+var_168+10h]
/*140a0b806*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0b80d*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0b814*/  mov [rbp+250h+var_E0], 0
/*140a0b81b*/ loc_140A0B81B: lea rcx, [rbp+250h+var_A0]
/*140a0b822*/  lea rdx, [rbp+250h+var_198]
/*140a0b829*/  lea r8, [rbp+250h+var_150]
/*140a0b830*/  lea r9, [rbp+250h+var_70]
/*140a0b837*/  call sub_140307860
/*140a0b83c*/  nop
/*140a0b83d*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0b844*/  jz short loc_140A0B853
/*140a0b846*/ loc_140A0B846: lea rcx, [rbp+250h+var_A0]
/*140a0b84d*/  call sub_1400104F0
/*140a0b852*/  nop
/*140a0b853*/ loc_140A0B853: call nullsub_1
/*140a0b858*/  mov ecx, 14h
/*140a0b85d*/  mov edx, 1
/*140a0b862*/  call sub_140001650
/*140a0b867*/  test rax, rax
/*140a0b86a*/  jz loc_140A0CC46
/*140a0b870*/  movups xmm0, cs:xmmword_1417A7F38
/*140a0b877*/  movups xmmword ptr [rax], xmm0
/*140a0b87a*/  mov dword ptr [rax+10h], 73656974h
/*140a0b881*/  mov qword ptr [rbp+250h+var_C0], 14h
/*140a0b88c*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b893*/  mov qword ptr [rbp+250h+var_B0], 14h
/*140a0b89e*/  mov word ptr [rbp+250h+var_70], 101h
/*140a0b8a7*/  lea rcx, [rbp+250h+var_A0]
/*140a0b8ae*/  lea rdx, [rbp+250h+var_198]
/*140a0b8b5*/  lea r8, [rbp+250h+var_C0]
/*140a0b8bc*/  lea r9, [rbp+250h+var_70]
/*140a0b8c3*/  call sub_140307860
/*140a0b8c8*/  nop
/*140a0b8c9*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0b8d0*/  jz short loc_140A0B8DF
/*140a0b8d2*/  lea rcx, [rbp+250h+var_A0]
/*140a0b8d9*/  call sub_1400104F0
/*140a0b8de*/  nop
/*140a0b8df*/ loc_140A0B8DF: call nullsub_1
/*140a0b8e4*/  mov ecx, 8
/*140a0b8e9*/  mov edx, 1
/*140a0b8ee*/  call sub_140001650
/*140a0b8f3*/  test rax, rax
/*140a0b8f6*/  jz loc_140A0CC58
/*140a0b8fc*/  mov rcx, 6465726975716572h
/*140a0b906*/  mov [rax], rcx
/*140a0b909*/  mov qword ptr [rbp+250h+var_C0], 8
/*140a0b914*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0b91b*/  mov qword ptr [rbp+250h+var_B0], 8
/*140a0b926*/  mov [rbp+250h+var_DC], 1
/*140a0b92d*/ loc_140A0B92D: call sub_14030B9B0
/*140a0b932*/  mov [rbp+250h+var_D8], rax
/*140a0b939*/ loc_140A0B939: lea rdx, off_1417A7F50; "input"
/*140a0b940*/  lea rcx, [rbp+250h+var_70]
/*140a0b947*/  call sub_140B56640
/*140a0b94c*/  nop
/*140a0b94d*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0b954*/  jz loc_140A0C750
/*140a0b95a*/  movups xmm0, [rbp+250h+var_70]
/*140a0b961*/  movups xmm1, [rbp+250h+var_60]
/*140a0b968*/  movaps [rbp+250h+var_90], xmm1
/*140a0b96f*/  movaps [rbp+250h+var_A0], xmm0
/*140a0b976*/  mov rax, [rbp+250h+var_D8]
/*140a0b97d*/  movups xmmword ptr [rax+10h], xmm1
/*140a0b981*/  movups xmmword ptr [rax], xmm0
/*140a0b984*/  mov qword ptr [rbp+250h+var_70+8], 1
/*140a0b98f*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0b996*/  mov qword ptr [rbp+250h+var_60+8], 1
/*140a0b9a1*/  mov byte ptr [rbp+250h+var_70], 4
/*140a0b9a8*/  mov [rbp+250h+var_DC], 0
/*140a0b9af*/ loc_140A0B9AF: lea rcx, [rbp+250h+var_A0]
/*140a0b9b6*/  lea rdx, [rbp+250h+var_198]
/*140a0b9bd*/  lea r8, [rbp+250h+var_C0]
/*140a0b9c4*/  lea r9, [rbp+250h+var_70]
/*140a0b9cb*/  call sub_140307860
/*140a0b9d0*/  nop
/*140a0b9d1*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0b9d8*/  jz short loc_140A0B9E7
/*140a0b9da*/ loc_140A0B9DA: lea rcx, [rbp+250h+var_A0]
/*140a0b9e1*/  call sub_1400104F0
/*140a0b9e6*/  nop
/*140a0b9e7*/ loc_140A0B9E7: movups xmm0, [rbp+250h+var_198]
/*140a0b9ee*/  movups [rbp+250h+var_70+8], xmm0
/*140a0b9f5*/  mov rax, [rbp+250h+var_188]
/*140a0b9fc*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0ba03*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0ba0a*/  mov [rbp+250h+var_E1], 0
/*140a0ba11*/ loc_140A0BA11: lea rcx, [rbp+250h+var_A0]
/*140a0ba18*/  lea rdx, [rbp+250h+var_1B0]
/*140a0ba1f*/  lea r8, [rbp+250h+var_200]
/*140a0ba23*/  lea r9, [rbp+250h+var_70]
/*140a0ba2a*/  call sub_140307860
/*140a0ba2f*/  nop
/*140a0ba30*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0ba37*/  jz short loc_140A0BA46
/*140a0ba39*/ loc_140A0BA39: lea rcx, [rbp+250h+var_A0]
/*140a0ba40*/  call sub_1400104F0
/*140a0ba45*/  nop
/*140a0ba46*/ loc_140A0BA46: movups xmm0, [rbp+250h+var_1B0]
/*140a0ba4d*/  movups [rbp+250h+var_70+8], xmm0
/*140a0ba54*/  mov rax, [rbp+250h+var_1A0]
/*140a0ba5b*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0ba62*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0ba69*/  mov [rbp+250h+var_E2], 0
/*140a0ba70*/ loc_140A0BA70: lea rcx, [rbp+250h+var_A0]
/*140a0ba77*/  lea rdx, [rbp+250h+var_1C8]
/*140a0ba7e*/  lea r8, [rbp+250h+var_1E8]
/*140a0ba82*/  lea r9, [rbp+250h+var_70]
/*140a0ba89*/  call sub_140307860
/*140a0ba8e*/  nop
/*140a0ba8f*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0ba96*/  jz short loc_140A0BAA5
/*140a0ba98*/ loc_140A0BA98: lea rcx, [rbp+250h+var_A0]
/*140a0ba9f*/  call sub_1400104F0
/*140a0baa4*/  nop
/*140a0baa5*/ loc_140A0BAA5: mov rax, [rbp+250h+var_1B8]
/*140a0baac*/  movups xmm0, [rbp+250h+var_1C8]
/*140a0bab3*/  movups [rbp+250h+var_70+7], xmm0
/*140a0baba*/  mov qword ptr [rbp+250h+var_60+7], rax
/*140a0bac1*/  mov rdx, [rbp+250h+var_F8]
/*140a0bac8*/  mov byte ptr [rdx], 5
/*140a0bacb*/  movups xmm0, [rbp+250h+var_70]
/*140a0bad2*/  mov rax, qword ptr [rbp+250h+var_70+0Fh]
/*140a0bad9*/  mov rcx, qword ptr [rbp+250h+var_60+7]
/*140a0bae0*/  movups xmmword ptr [rdx+1], xmm0
/*140a0bae4*/  mov [rdx+10h], rax
/*140a0bae8*/  mov [rdx+18h], rcx
/*140a0baec*/  mov qword ptr [rsi], 1
/*140a0baf3*/  mov [rsi+8], rdx
/*140a0baf7*/  mov qword ptr [rsi+10h], 1
/*140a0baff*/  mov rdx, [rbp+250h+var_180]
/*140a0bb06*/  test rdx, rdx
/*140a0bb09*/  jz loc_140A09F4C
/*140a0bb0f*/  mov r8d, 1
/*140a0bb15*/  mov rcx, rdi
/*140a0bb18*/  jmp loc_140A0BC27
/*140a0bb1d*/ loc_140A0BB1D: jmp loc_140A0BC3F
/*140a0bb22*/ loc_140A0BB22: cmp word ptr [rdi+r14-2], 5F5Fh
/*140a0bb2a*/  jz short loc_140A0BB6A
/*140a0bb2c*/ loc_140A0BB2C: lea rcx, [rbp+250h+var_C0]
/*140a0bb33*/  mov qword ptr [rbp+250h+var_70], rcx
/*140a0bb3a*/  lea rcx, sub_14041F680
/*140a0bb41*/  mov qword ptr [rbp+250h+var_70+8], rcx
/*140a0bb48*/  lea rdx, unk_1417A7C86
/*140a0bb4f*/  lea rcx, [rbp+250h+var_A0]
/*140a0bb56*/  lea r8, [rbp+250h+var_70]
/*140a0bb5d*/  mov rdi, rax
/*140a0bb60*/  call sub_14149C0F0
/*140a0bb65*/  mov rax, rdi
/*140a0bb68*/  jmp short loc_140A0BBCF
/*140a0bb6a*/ loc_140A0BB6A: mov r12, rax
/*140a0bb6d*/  mov [rsp+2D0h+var_2B0], 1
/*140a0bb76*/  lea rcx, [rbp+250h+var_70]
/*140a0bb7d*/  mov r9d, 1
/*140a0bb83*/  mov rdx, r14
/*140a0bb86*/  xor r8d, r8d
/*140a0bb89*/  call sub_140388B60
/*140a0bb8e*/  mov rbx, qword ptr [rbp+250h+var_70+8]
/*140a0bb95*/  cmp byte ptr [rbp+250h+var_70], 0
/*140a0bb9c*/  jnz loc_140A0C7EE
/*140a0bba2*/  mov r15, qword ptr [rbp+250h+var_60]
/*140a0bba9*/  mov rcx, r15
/*140a0bbac*/  mov rdx, rdi
/*140a0bbaf*/  mov r8, r14
/*140a0bbb2*/  call sub_141684120
/*140a0bbb7*/  mov qword ptr [rbp+250h+var_A0], rbx
/*140a0bbbe*/  mov qword ptr [rbp+250h+var_A0+8], r15
/*140a0bbc5*/  mov qword ptr [rbp+250h+var_90], r14
/*140a0bbcc*/  mov rax, r12
/*140a0bbcf*/ loc_140A0BBCF: mov rcx, [rax+10h]
/*140a0bbd3*/  mov rax, [rax+18h]
/*140a0bbd7*/  shl rax, 5
/*140a0bbdb*/  add rax, rcx
/*140a0bbde*/  mov qword ptr [rbp+250h+var_70], rcx
/*140a0bbe5*/  mov qword ptr [rbp+250h+var_70+8], rax
/*140a0bbec*/  lea rax, [rbp+250h+var_A0]
/*140a0bbf3*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0bbfa*/ loc_140A0BBFA: lea rdx, [rbp+250h+var_70]
/*140a0bc01*/  mov rcx, rsi
/*140a0bc04*/  call sub_1403158C0
/*140a0bc09*/  nop
/*140a0bc0a*/  mov rdx, qword ptr [rbp+250h+var_A0]
/*140a0bc11*/  test rdx, rdx
/*140a0bc14*/  jz loc_140A09F4C
/*140a0bc1a*/  mov rcx, qword ptr [rbp+250h+var_A0+8]
/*140a0bc21*/  mov r8d, 1
/*140a0bc27*/ loc_140A0BC27: call sub_140001660
/*140a0bc2c*/  jmp loc_140A09F4C
/*140a0bc31*/ loc_140A0BC31: xor r14d, r14d
/*140a0bc34*/ loc_140A0BC34: mov [rbp+250h+var_F8], 0
/*140a0bc3f*/ loc_140A0BC3F: mov [rbp+250h+var_44], 1
/*140a0bc46*/  mov [rbp+250h+var_45], 1
/*140a0bc4d*/ loc_140A0BC4D: lea rcx, aParameters_0; "parameters"
/*140a0bc54*/  mov edx, 0Ah
/*140a0bc59*/  mov r8, rbx
/*140a0bc5c*/  call sub_141433D50
/*140a0bc61*/  nop
/*140a0bc62*/  test rax, rax
/*140a0bc65*/  jz short loc_140A0BC94
/*140a0bc67*/  movzx ecx, byte ptr [rax]
/*140a0bc6a*/  lea rdx, jpt_140A0BC78
/*140a0bc71*/  movsxd rcx, ds:(jpt_140A0BC78 - 1417AAFA4h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*140a0bc75*/  add rcx, rdx
/*140a0bc78*/  jmp rcx; switch jump  // switch jump
/*140a0bc7a*/ loc_140A0BC7A: movups xmm0, xmmword ptr [rax]; jumptable 0000000140A0BC78 cases 1,2  // jumptable 0000000140A0BC78 cases 1,2
/*140a0bc7d*/  movups xmm1, xmmword ptr [rax+10h]
/*140a0bc81*/  movaps [rbp+250h+var_60], xmm1
/*140a0bc88*/  movaps [rbp+250h+var_70], xmm0
/*140a0bc8f*/  jmp loc_140A0BEC0
/*140a0bc94*/ loc_140A0BC94: mov qword ptr [rbp+250h+var_110], 0
/*140a0bc9f*/  mov [rbp+250h+var_100], 0
/*140a0bcaa*/  call nullsub_1
/*140a0bcaf*/  mov ecx, 4
/*140a0bcb4*/  mov edx, 1
/*140a0bcb9*/  call sub_140001650
/*140a0bcbe*/  test rax, rax
/*140a0bcc1*/  jz loc_140A0CC7C
/*140a0bcc7*/  mov dword ptr [rax], 65707974h
/*140a0bccd*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0bcd8*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0bcdf*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0bcea*/  mov [rbp+250h+var_C1], 1
/*140a0bcf1*/ loc_140A0BCF1: lea rdx, off_1417A49E8; "object"
/*140a0bcf8*/  lea rcx, [rbp+250h+var_70]
/*140a0bcff*/  call sub_140B56640
/*140a0bd04*/  nop
/*140a0bd05*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0bd0c*/  jz loc_140A0C78F
/*140a0bd12*/  movups xmm0, [rbp+250h+var_70]
/*140a0bd19*/  movups xmm1, [rbp+250h+var_60]
/*140a0bd20*/  movaps [rbp+250h+var_90], xmm1
/*140a0bd27*/  movaps [rbp+250h+var_A0], xmm0
/*140a0bd2e*/  mov [rbp+250h+var_C1], 0
/*140a0bd35*/  lea rcx, [rbp+250h+var_70]
/*140a0bd3c*/  lea rdx, [rbp+250h+var_110]
/*140a0bd43*/  lea r8, [rbp+250h+var_C0]
/*140a0bd4a*/  lea r9, [rbp+250h+var_A0]
/*140a0bd51*/  call sub_140307860
/*140a0bd56*/  nop
/*140a0bd57*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0bd5e*/  jz short loc_140A0BD6D
/*140a0bd60*/ loc_140A0BD60: lea rcx, [rbp+250h+var_70]
/*140a0bd67*/  call sub_1400104F0
/*140a0bd6c*/  nop
/*140a0bd6d*/ loc_140A0BD6D: call nullsub_1
/*140a0bd72*/  mov ecx, 0Ah
/*140a0bd77*/  mov edx, 1
/*140a0bd7c*/  call sub_140001650
/*140a0bd81*/  test rax, rax
/*140a0bd84*/  jz loc_140A0CC8E
/*140a0bd8a*/  mov rcx, 69747265706F7270h
/*140a0bd94*/  mov [rax], rcx
/*140a0bd97*/  mov word ptr [rax+8], 7365h
/*140a0bd9d*/  mov qword ptr [rbp+250h+var_C0], 0Ah
/*140a0bda8*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0bdaf*/  mov qword ptr [rbp+250h+var_B0], 0Ah
/*140a0bdba*/  mov qword ptr [rbp+250h+var_70+8], 0
/*140a0bdc5*/  mov qword ptr [rbp+250h+var_60+8], 0
/*140a0bdd0*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0bdd7*/  lea rcx, [rbp+250h+var_A0]
/*140a0bdde*/  lea rdx, [rbp+250h+var_110]
/*140a0bde5*/  lea r8, [rbp+250h+var_C0]
/*140a0bdec*/  lea r9, [rbp+250h+var_70]
/*140a0bdf3*/  call sub_140307860
/*140a0bdf8*/  nop
/*140a0bdf9*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0be00*/  jz short loc_140A0BE0F
/*140a0be02*/  lea rcx, [rbp+250h+var_A0]
/*140a0be09*/  call sub_1400104F0
/*140a0be0e*/  nop
/*140a0be0f*/ loc_140A0BE0F: movups xmm0, [rbp+250h+var_110]
/*140a0be16*/  movups [rbp+250h+var_130+8], xmm0
/*140a0be1d*/  mov rax, [rbp+250h+var_100]
/*140a0be24*/  mov qword ptr [rbp+250h+var_120+8], rax
/*140a0be2b*/  mov byte ptr [rbp+250h+var_130], 5
/*140a0be32*/  jmp loc_140A0BF14
/*140a0be37*/ loc_140A0BE37: lea rcx, [rbp+250h+var_70+8]; jumptable 0000000140A0BC78 case 4  // jumptable 0000000140A0BC78 case 4
/*140a0be3e*/  mov rdx, [rax+10h]
/*140a0be42*/  mov r8, [rax+18h]
/*140a0be46*/  mov [rbp+250h+var_44], 1
/*140a0be4d*/  mov [rbp+250h+var_45], 1
/*140a0be54*/ loc_140A0BE54: call sub_1402CE260
/*140a0be59*/  nop
/*140a0be5a*/  mov byte ptr [rbp+250h+var_70], 4
/*140a0be61*/  jmp short loc_140A0BEC0
/*140a0be63*/ loc_140A0BE63: mov byte ptr [rbp+250h+var_70], 0; jumptable 0000000140A0BC78 case 0  // jumptable 0000000140A0BC78 case 0
/*140a0be6a*/  jmp short loc_140A0BEC0
/*140a0be6c*/ loc_140A0BE6C: add rax, 8; jumptable 0000000140A0BC78 case 3  // jumptable 0000000140A0BC78 case 3
/*140a0be70*/  lea rcx, [rbp+250h+var_70+8]
/*140a0be77*/  mov [rbp+250h+var_44], 1
/*140a0be7e*/  mov [rbp+250h+var_45], 1
/*140a0be85*/  mov rdx, rax
/*140a0be88*/  call sub_14149C500
/*140a0be8d*/  nop
/*140a0be8e*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0be95*/  jmp short loc_140A0BEC0
/*140a0be97*/ loc_140A0BE97: add rax, 8; jumptable 0000000140A0BC78 case 5  // jumptable 0000000140A0BC78 case 5
/*140a0be9b*/  lea rcx, [rbp+250h+var_70+8]
/*140a0bea2*/  mov [rbp+250h+var_44], 1
/*140a0bea9*/  mov [rbp+250h+var_45], 1
/*140a0beb0*/  mov rdx, rax
/*140a0beb3*/  call sub_140323EA0
/*140a0beb8*/  nop
/*140a0beb9*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0bec0*/ loc_140A0BEC0: movzx eax, byte ptr [rbp+250h+var_70]
/*140a0bec7*/  mov rcx, qword ptr [rbp+250h+var_70+1]
/*140a0bece*/  mov edx, dword ptr [rbp+250h+var_70+9]
/*140a0bed4*/  movzx r8d, word ptr [rbp+250h+var_70+0Dh]
/*140a0bedc*/  movzx r9d, byte ptr [rbp+250h+var_70+0Fh]
/*140a0bee4*/  movaps xmm0, [rbp+250h+var_60]
/*140a0beeb*/  movaps [rbp+250h+var_120], xmm0
/*140a0bef2*/  mov byte ptr [rbp+250h+var_130], al
/*140a0bef8*/  mov qword ptr [rbp+250h+var_130+1], rcx
/*140a0beff*/  mov dword ptr [rbp+250h+var_130+9], edx
/*140a0bf05*/  mov word ptr [rbp+250h+var_130+0Dh], r8w
/*140a0bf0d*/  mov byte ptr [rbp+250h+var_130+0Fh], r9b
/*140a0bf14*/ loc_140A0BF14: mov [rbp+250h+var_D9], 1
/*140a0bf1b*/  mov [rbp+250h+var_DA], 1
/*140a0bf22*/  mov [rbp+250h+var_DB], 1
/*140a0bf29*/ loc_140A0BF29: lea rcx, [rbp+250h+var_130]
/*140a0bf30*/  call sub_1409EA6C0
/*140a0bf35*/  nop
/*140a0bf36*/  mov qword ptr [rbp+250h+var_150], 0
/*140a0bf41*/  mov [rbp+250h+var_140], 0
/*140a0bf4c*/  call nullsub_1
/*140a0bf51*/  mov ecx, 4
/*140a0bf56*/  mov edx, 1
/*140a0bf5b*/  call sub_140001650
/*140a0bf60*/  test rax, rax
/*140a0bf63*/  setz [rbp+250h+var_DE]
/*140a0bf6a*/  jz loc_140A0CAF7
/*140a0bf70*/  mov dword ptr [rax], 656D616Eh
/*140a0bf76*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0bf81*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0bf88*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0bf93*/  mov rax, [rbp+250h+var_D8]
/*140a0bf9a*/  mov qword ptr [rbp+250h+var_70+8], rax
/*140a0bfa1*/  mov rax, [rbp+250h+var_208]
/*140a0bfa5*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0bfac*/  mov qword ptr [rbp+250h+var_60+8], rdi
/*140a0bfb3*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0bfba*/  mov [rbp+250h+var_41], 1
/*140a0bfc1*/  mov [rbp+250h+var_42], 1
/*140a0bfc8*/  mov [rbp+250h+var_43], 1
/*140a0bfcf*/ loc_140A0BFCF: lea rcx, [rbp+250h+var_A0]
/*140a0bfd6*/  lea rdx, [rbp+250h+var_150]
/*140a0bfdd*/  lea r8, [rbp+250h+var_C0]
/*140a0bfe4*/  lea r9, [rbp+250h+var_70]
/*140a0bfeb*/  call sub_140307860
/*140a0bff0*/  nop
/*140a0bff1*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0bff8*/  jz short loc_140A0C01C
/*140a0bffa*/  mov [rbp+250h+var_41], 1
/*140a0c001*/  mov [rbp+250h+var_42], 1
/*140a0c008*/  mov [rbp+250h+var_43], 1
/*140a0c00f*/  lea rcx, [rbp+250h+var_A0]
/*140a0c016*/  call sub_1400104F0
/*140a0c01b*/  nop
/*140a0c01c*/ loc_140A0C01C: cmp byte ptr [rbp+250h+var_F8], 0
/*140a0c023*/  jnz loc_140A0C0DD
/*140a0c029*/  call nullsub_1
/*140a0c02e*/  mov ecx, 0Bh
/*140a0c033*/  mov edx, 1
/*140a0c038*/  call sub_140001650
/*140a0c03d*/  test rax, rax
/*140a0c040*/  mov [rbp+250h+var_228], rax
/*140a0c044*/  jz loc_140A0CC6A
/*140a0c04a*/  mov rcx, 7470697263736564h
/*140a0c054*/  mov [rax], rcx
/*140a0c057*/  mov dword ptr [rax+7], 6E6F6974h
/*140a0c05e*/  mov qword ptr [rbp+250h+var_C0], 0Bh
/*140a0c069*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0c070*/  mov qword ptr [rbp+250h+var_B0], 0Bh
/*140a0c07b*/  mov rax, [rbp+250h+var_138]
/*140a0c082*/  mov qword ptr [rbp+250h+var_70+8], rax
/*140a0c089*/  mov rax, [rbp+250h+var_1D0]
/*140a0c090*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0c097*/  mov qword ptr [rbp+250h+var_60+8], r14
/*140a0c09e*/  mov byte ptr [rbp+250h+var_70], 3
/*140a0c0a5*/ loc_140A0C0A5: lea rcx, [rbp+250h+var_A0]
/*140a0c0ac*/  lea rdx, [rbp+250h+var_150]
/*140a0c0b3*/  lea r8, [rbp+250h+var_C0]
/*140a0c0ba*/  lea r9, [rbp+250h+var_70]
/*140a0c0c1*/  call sub_140307860
/*140a0c0c6*/  nop
/*140a0c0c7*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0c0ce*/  jz short loc_140A0C0DD
/*140a0c0d0*/  lea rcx, [rbp+250h+var_A0]
/*140a0c0d7*/  call sub_1400104F0
/*140a0c0dc*/  nop
/*140a0c0dd*/ loc_140A0C0DD: call nullsub_1
/*140a0c0e2*/  mov ecx, 0Ah
/*140a0c0e7*/  mov edx, 1
/*140a0c0ec*/  call sub_140001650
/*140a0c0f1*/  test rax, rax
/*140a0c0f4*/  jz loc_140A0CB21
/*140a0c0fa*/  mov rcx, 6574656D61726170h
/*140a0c104*/  mov [rax], rcx
/*140a0c107*/  mov word ptr [rax+8], 7372h
/*140a0c10d*/  mov qword ptr [rbp+250h+var_C0], 0Ah
/*140a0c118*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0c11f*/  mov qword ptr [rbp+250h+var_B0], 0Ah
/*140a0c12a*/  movaps xmm0, [rbp+250h+var_130]
/*140a0c131*/  movaps xmm1, [rbp+250h+var_120]
/*140a0c138*/  movaps [rbp+250h+var_60], xmm1
/*140a0c13f*/  movaps [rbp+250h+var_70], xmm0
/*140a0c146*/  mov [rbp+250h+var_41], 1
/*140a0c14d*/  mov [rbp+250h+var_42], 0
/*140a0c154*/  mov rax, [rbp+250h+var_F8]
/*140a0c15b*/  mov [rbp+250h+var_43], al
/*140a0c161*/ loc_140A0C161: lea rcx, [rbp+250h+var_A0]
/*140a0c168*/  lea rdx, [rbp+250h+var_150]
/*140a0c16f*/  lea r8, [rbp+250h+var_C0]
/*140a0c176*/  lea r9, [rbp+250h+var_70]
/*140a0c17d*/  call sub_140307860
/*140a0c182*/  nop
/*140a0c183*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0c18a*/  jz short loc_140A0C1B4
/*140a0c18c*/  mov [rbp+250h+var_41], 1
/*140a0c193*/  mov [rbp+250h+var_42], 0
/*140a0c19a*/  mov rax, [rbp+250h+var_F8]
/*140a0c1a1*/  mov [rbp+250h+var_43], al
/*140a0c1a7*/  lea rcx, [rbp+250h+var_A0]
/*140a0c1ae*/  call sub_1400104F0
/*140a0c1b3*/  nop
/*140a0c1b4*/ loc_140A0C1B4: mov [rbp+250h+var_41], 1
/*140a0c1bb*/  mov [rbp+250h+var_42], 0
/*140a0c1c2*/  mov rax, [rbp+250h+var_F8]
/*140a0c1c9*/  mov [rbp+250h+var_43], al
/*140a0c1cf*/  lea rcx, aStrict_0; "strict"
/*140a0c1d6*/  mov edx, 6
/*140a0c1db*/  mov r8, rbx
/*140a0c1de*/  call sub_141433D50
/*140a0c1e3*/  nop
/*140a0c1e4*/  test rax, rax
/*140a0c1e7*/  jz loc_140A0C2BD
/*140a0c1ed*/  cmp byte ptr [rax], 1
/*140a0c1f0*/  jnz loc_140A0C2BD
/*140a0c1f6*/  cmp byte ptr [rax+1], 1
/*140a0c1fa*/  jnz loc_140A0C2BD
/*140a0c200*/  call nullsub_1
/*140a0c205*/  mov ecx, 6
/*140a0c20a*/  mov edx, 1
/*140a0c20f*/  call sub_140001650
/*140a0c214*/  test rax, rax
/*140a0c217*/  jz loc_140A0CCA0
/*140a0c21d*/  mov word ptr [rax+4], 7463h
/*140a0c223*/  mov dword ptr [rax], 69727473h
/*140a0c229*/  mov qword ptr [rbp+250h+var_C0], 6
/*140a0c234*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0c23b*/  mov qword ptr [rbp+250h+var_B0], 6
/*140a0c246*/  mov word ptr [rbp+250h+var_70], 101h
/*140a0c24f*/  mov [rbp+250h+var_41], 1
/*140a0c256*/  mov [rbp+250h+var_42], 0
/*140a0c25d*/  mov rax, [rbp+250h+var_F8]
/*140a0c264*/  mov [rbp+250h+var_43], al
/*140a0c26a*/  lea rcx, [rbp+250h+var_A0]
/*140a0c271*/  lea rdx, [rbp+250h+var_150]
/*140a0c278*/  lea r8, [rbp+250h+var_C0]
/*140a0c27f*/  lea r9, [rbp+250h+var_70]
/*140a0c286*/  call sub_140307860
/*140a0c28b*/  nop
/*140a0c28c*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0c293*/  jz short loc_140A0C2BD
/*140a0c295*/  mov [rbp+250h+var_41], 1
/*140a0c29c*/  mov [rbp+250h+var_42], 0
/*140a0c2a3*/  mov rax, [rbp+250h+var_F8]
/*140a0c2aa*/  mov [rbp+250h+var_43], al
/*140a0c2b0*/  lea rcx, [rbp+250h+var_A0]
/*140a0c2b7*/  call sub_1400104F0
/*140a0c2bc*/  nop
/*140a0c2bd*/ loc_140A0C2BD: mov qword ptr [rbp+250h+var_168], 0
/*140a0c2c8*/  mov qword ptr [rbp+250h+var_168+10h], 0
/*140a0c2d3*/  call nullsub_1
/*140a0c2d8*/  mov ecx, 4
/*140a0c2dd*/  mov edx, 1
/*140a0c2e2*/  call sub_140001650
/*140a0c2e7*/  test rax, rax
/*140a0c2ea*/  jz loc_140A0CB51
/*140a0c2f0*/  mov dword ptr [rax], 65707974h
/*140a0c2f6*/  mov qword ptr [rbp+250h+var_C0], 4
/*140a0c301*/  mov qword ptr [rbp+250h+var_C0+8], rax
/*140a0c308*/  mov qword ptr [rbp+250h+var_B0], 4
/*140a0c313*/  mov [rbp+250h+var_C2], 1
/*140a0c31a*/ loc_140A0C31A: lea rdx, off_1417A4F98; "function"
/*140a0c321*/  lea rcx, [rbp+250h+var_70]
/*140a0c328*/  call sub_140B56640
/*140a0c32d*/  nop
/*140a0c32e*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0c335*/  jz loc_140A0C597
/*140a0c33b*/  movups xmm0, [rbp+250h+var_70]
/*140a0c342*/  movups xmm1, [rbp+250h+var_60]
/*140a0c349*/  movaps [rbp+250h+var_90], xmm1
/*140a0c350*/  movaps [rbp+250h+var_A0], xmm0
/*140a0c357*/  mov [rbp+250h+var_C2], 0
/*140a0c35e*/  lea rcx, [rbp+250h+var_70]
/*140a0c365*/  lea rdx, [rbp+250h+var_168]
/*140a0c36c*/  lea r8, [rbp+250h+var_C0]
/*140a0c373*/  lea r9, [rbp+250h+var_A0]
/*140a0c37a*/  call sub_140307860
/*140a0c37f*/  nop
/*140a0c380*/  cmp byte ptr [rbp+250h+var_70], 0FFh
/*140a0c387*/  jz short loc_140A0C39D
/*140a0c389*/  mov [rbp+250h+var_71], 1
/*140a0c390*/ loc_140A0C390: lea rcx, [rbp+250h+var_70]
/*140a0c397*/  call sub_1400104F0
/*140a0c39c*/  nop
/*140a0c39d*/ loc_140A0C39D: call nullsub_1
/*140a0c3a2*/  mov ecx, 8
/*140a0c3a7*/  mov edx, 1
/*140a0c3ac*/  call sub_140001650
/*140a0c3b1*/  test rax, rax
/*140a0c3b4*/  jz loc_140A0CB97
/*140a0c3ba*/  mov [rax], r12
/*140a0c3bd*/  mov qword ptr [rbp+250h+var_110], 8
/*140a0c3c8*/  mov qword ptr [rbp+250h+var_110+8], rax
/*140a0c3cf*/  mov [rbp+250h+var_100], 8
/*140a0c3da*/  mov rax, [rbp+250h+var_140]
/*140a0c3e1*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0c3e8*/  movups xmm0, [rbp+250h+var_150]
/*140a0c3ef*/  movups [rbp+250h+var_70+8], xmm0
/*140a0c3f6*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0c3fd*/  mov [rbp+250h+var_C3], 1
/*140a0c404*/ loc_140A0C404: lea rcx, [rbp+250h+var_A0]
/*140a0c40b*/  lea rdx, [rbp+250h+var_70]
/*140a0c412*/  call sub_140B842D0
/*140a0c417*/  nop
/*140a0c418*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0c41f*/  jz loc_140A0C615
/*140a0c425*/  movups xmm0, [rbp+250h+var_A0]
/*140a0c42c*/  movups xmm1, [rbp+250h+var_90]
/*140a0c433*/  movaps [rbp+250h+var_B0], xmm1
/*140a0c43a*/  movaps [rbp+250h+var_C0], xmm0
/*140a0c441*/  mov [rbp+250h+var_C3], 0
/*140a0c448*/  lea rcx, [rbp+250h+var_A0]
/*140a0c44f*/  lea rdx, [rbp+250h+var_168]
/*140a0c456*/  lea r8, [rbp+250h+var_110]
/*140a0c45d*/  lea r9, [rbp+250h+var_C0]
/*140a0c464*/  call sub_140307860
/*140a0c469*/  nop
/*140a0c46a*/  cmp byte ptr [rbp+250h+var_A0], 0FFh
/*140a0c471*/  jz short loc_140A0C480
/*140a0c473*/ loc_140A0C473: lea rcx, [rbp+250h+var_A0]
/*140a0c47a*/  call sub_1400104F0
/*140a0c47f*/  nop
/*140a0c480*/ loc_140A0C480: mov [rbp+250h+var_71], 0
/*140a0c487*/ loc_140A0C487: lea rcx, [rbp+250h+var_70]
/*140a0c48e*/  call sub_1400104F0
/*140a0c493*/  nop
/*140a0c494*/  mov rax, qword ptr [rbp+250h+var_168+10h]
/*140a0c49b*/  movups xmm0, xmmword ptr [rbp+250h+var_168]
/*140a0c4a2*/  movups [rbp+250h+var_240], xmm0
/*140a0c4a6*/  mov [rbp+250h+var_230], rax
/*140a0c4aa*/  mov byte ptr [rbp+250h+var_70], 5
/*140a0c4b1*/  movups xmm0, xmmword ptr [rbp+9]
/*140a0c4b5*/  movups [rbp+250h+var_70+1], xmm0
/*140a0c4bc*/  mov rax, qword ptr [rbp+250h+var_240+8]
/*140a0c4c0*/  mov qword ptr [rbp+250h+var_60], rax
/*140a0c4c7*/  mov rax, [rbp+250h+var_230]
/*140a0c4cb*/  mov qword ptr [rbp+250h+var_60+8], rax
/*140a0c4d2*/ loc_140A0C4D2: call sub_14030B9B0
/*140a0c4d7*/  nop
/*140a0c4d8*/ loc_140A0C4D8: movups xmm0, [rbp+250h+var_70]
/*140a0c4df*/  movups xmm1, [rbp+250h+var_60]
/*140a0c4e6*/  movups xmmword ptr [rax+10h], xmm1
/*140a0c4ea*/  movups xmmword ptr [rax], xmm0
/*140a0c4ed*/  mov qword ptr [rsi], 1
/*140a0c4f4*/  mov [rsi+8], rax
/*140a0c4f8*/  mov qword ptr [rsi+10h], 1
/*140a0c500*/  jmp loc_140A09F4C
/*140a0c505*/ loc_140A0C505: mov ecx, 8
/*140a0c50a*/  mov edx, 20h ; ' '
/*140a0c50f*/  call sub_1416C2D31
/*140a0c514*/  ud2
/*140a0c516*/ loc_140A0C516: mov [rbp+250h+var_DD], 1
/*140a0c51d*/ loc_140A0C51D: mov ecx, 8
/*140a0c522*/  mov edx, 20h ; ' '
/*140a0c527*/  call sub_1416C2D31
/*140a0c52d*/ loc_140A0C52D: jmp loc_140A0CCCB
/*140a0c532*/ loc_140A0C532: mov rdx, qword ptr [rbp+250h+var_60]
/*140a0c539*/  mov rcx, r15
/*140a0c53c*/  call sub_1416C2D4B
/*140a0c541*/  ud2
/*140a0c543*/ loc_140A0C543: mov rdx, qword ptr [rbp+250h+var_60]
/*140a0c54a*/  mov rcx, [rbp+250h+var_D8]
/*140a0c551*/  call sub_1416C2D4B
/*140a0c556*/  ud2
/*140a0c558*/ loc_140A0C558: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c55f*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c566*/ loc_140A0C566: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c56d*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c572*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c579*/  lea r9, off_1417A5560
/*140a0c580*/  lea r8, [rbp+250h+var_A0]
/*140a0c587*/  mov edx, 2Bh ; '+'
/*140a0c58c*/  call sub_1416C3060
/*140a0c592*/  jmp loc_140A0CCCB
/*140a0c597*/ loc_140A0C597: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c59e*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c5a5*/ loc_140A0C5A5: lea rax, off_1417A7880; "src\\core\\relay\\translator.rs"
/*140a0c5ac*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c5b1*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c5b8*/  lea r9, off_1417A5560
/*140a0c5bf*/  lea r8, [rbp+250h+var_A0]
/*140a0c5c6*/  mov edx, 2Bh ; '+'
/*140a0c5cb*/  call sub_1416C3060
/*140a0c5d1*/  jmp loc_140A0CCCB
/*140a0c5d6*/ loc_140A0C5D6: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c5dd*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c5e4*/ loc_140A0C5E4: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c5eb*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c5f0*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c5f7*/  lea r9, off_1417A5560
/*140a0c5fe*/  lea r8, [rbp+250h+var_A0]
/*140a0c605*/  mov edx, 2Bh ; '+'
/*140a0c60a*/  call sub_1416C3060
/*140a0c610*/  jmp loc_140A0CCCB
/*140a0c615*/ loc_140A0C615: mov rax, qword ptr [rbp+250h+var_A0+8]
/*140a0c61c*/  mov qword ptr [rbp+250h+var_C0], rax
/*140a0c623*/ loc_140A0C623: lea rax, off_1417A7880; "src\\core\\relay\\translator.rs"
/*140a0c62a*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c62f*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c636*/  lea r9, off_1417A5560
/*140a0c63d*/  lea r8, [rbp+250h+var_C0]
/*140a0c644*/  mov edx, 2Bh ; '+'
/*140a0c649*/  call sub_1416C3060
/*140a0c64f*/  jmp loc_140A0CCCB
/*140a0c654*/ loc_140A0C654: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c65b*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c662*/ loc_140A0C662: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c669*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c66e*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c675*/  lea r9, off_1417A5560
/*140a0c67c*/  lea r8, [rbp+250h+var_A0]
/*140a0c683*/  mov edx, 2Bh ; '+'
/*140a0c688*/  call sub_1416C3060
/*140a0c68e*/  jmp loc_140A0CCCB
/*140a0c693*/ loc_140A0C693: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c69a*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c6a1*/ loc_140A0C6A1: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c6a8*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c6ad*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c6b4*/  lea r9, off_1417A5560
/*140a0c6bb*/  lea r8, [rbp+250h+var_A0]
/*140a0c6c2*/  mov edx, 2Bh ; '+'
/*140a0c6c7*/  call sub_1416C3060
/*140a0c6cd*/  jmp loc_140A0CCCB
/*140a0c6d2*/ loc_140A0C6D2: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c6d9*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c6e0*/ loc_140A0C6E0: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c6e7*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c6ec*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c6f3*/  lea r9, off_1417A5560
/*140a0c6fa*/  lea r8, [rbp+250h+var_A0]
/*140a0c701*/  mov edx, 2Bh ; '+'
/*140a0c706*/  call sub_1416C3060
/*140a0c70c*/  jmp loc_140A0CCCB
/*140a0c711*/ loc_140A0C711: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c718*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c71f*/ loc_140A0C71F: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c726*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c72b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c732*/  lea r9, off_1417A5560
/*140a0c739*/  lea r8, [rbp+250h+var_A0]
/*140a0c740*/  mov edx, 2Bh ; '+'
/*140a0c745*/  call sub_1416C3060
/*140a0c74b*/  jmp loc_140A0CCCB
/*140a0c750*/ loc_140A0C750: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c757*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c75e*/ loc_140A0C75E: lea rax, off_1417A7EE0; "src\\core\\relay\\translator.rs"
/*140a0c765*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c76a*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c771*/  lea r9, off_1417A5560
/*140a0c778*/  lea r8, [rbp+250h+var_A0]
/*140a0c77f*/  mov edx, 2Bh ; '+'
/*140a0c784*/  call sub_1416C3060
/*140a0c78a*/  jmp loc_140A0CCCB
/*140a0c78f*/ loc_140A0C78F: mov rax, qword ptr [rbp+250h+var_70+8]
/*140a0c796*/  mov qword ptr [rbp+250h+var_A0], rax
/*140a0c79d*/ loc_140A0C79D: lea rax, off_1417A4E98; "src\\core\\relay\\translator.rs"
/*140a0c7a4*/  mov [rsp+2D0h+var_2B0], rax
/*140a0c7a9*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*140a0c7b0*/  lea r9, off_1417A5560
/*140a0c7b7*/  lea r8, [rbp+250h+var_A0]
/*140a0c7be*/  mov edx, 2Bh ; '+'
/*140a0c7c3*/  call sub_1416C3060
/*140a0c7c9*/  jmp loc_140A0CCCB
/*140a0c7ce*/ loc_140A0C7CE: mov rdx, qword ptr [rbp+250h+var_60]
/*140a0c7d5*/  mov [rbp+250h+var_72], 1
/*140a0c7dc*/ loc_140A0C7DC: mov rcx, [rbp+250h+var_138]
/*140a0c7e3*/  call sub_1416C2D4B
/*140a0c7e9*/ loc_140A0C7E9: jmp loc_140A0CCCB
/*140a0c7ee*/ loc_140A0C7EE: mov rdx, qword ptr [rbp+250h+var_60]
/*140a0c7f5*/  mov rcx, rbx
/*140a0c7f8*/  call sub_1416C2D4B
/*140a0c7fd*/  ud2
/*140a0c7ff*/ loc_140A0C7FF: mov [rbp+250h+var_D8], r13
/*140a0c806*/  mov [rbp+250h+var_F8], r12
/*140a0c80d*/  mov [rsp+2D0h+var_2B0], 1
/*140a0c816*/  lea rcx, [rbp+250h+var_180]
/*140a0c81d*/  mov r9d, 1
/*140a0c823*/  mov rdx, r14
/*140a0c826*/  mov r8, rbx
/*140a0c829*/  call sub_141688D30
/*140a0c82e*/  nop
/*140a0c82f*/  mov rdi, [rbp+250h+var_178]
/*140a0c836*/  mov r14, [rbp+250h+var_170]
/*140a0c83d*/  mov r12, [rbp+250h+var_F8]
/*140a0c844*/  mov r13, [rbp+250h+var_D8]
/*140a0c84b*/  jmp loc_140A0B130
/*140a0c850*/ loc_140A0C850: mov ecx, 1
/*140a0c855*/  mov edx, 4
/*140a0c85a*/  call sub_1416C2D4B
/*140a0c860*/  jmp loc_140A0CCCB
/*140a0c865*/ loc_140A0C865: mov ecx, 1
/*140a0c86a*/  mov edx, 8
/*140a0c86f*/  call sub_1416C2D4B
/*140a0c875*/  jmp loc_140A0CCCB
/*140a0c87a*/ loc_140A0C87A: mov ecx, 1
/*140a0c87f*/  mov edx, 8
/*140a0c884*/  call sub_1416C2D4B
/*140a0c88a*/  jmp loc_140A0CCCB
/*140a0c88f*/ loc_140A0C88F: mov ecx, 1
/*140a0c894*/  mov edx, 4
/*140a0c899*/  call sub_1416C2D4B
/*140a0c89f*/  jmp loc_140A0CCCB
/*140a0c8a4*/ loc_140A0C8A4: mov ecx, 1
/*140a0c8a9*/  mov edx, 5
/*140a0c8ae*/  call sub_1416C2D4B
/*140a0c8b4*/  jmp loc_140A0CCCB
/*140a0c8b9*/ loc_140A0C8B9: mov ecx, 1
/*140a0c8be*/  mov edx, 0Bh
/*140a0c8c3*/  call sub_1416C2D4B
/*140a0c8c9*/  jmp loc_140A0CCCB
/*140a0c8ce*/ loc_140A0C8CE: mov ecx, 1
/*140a0c8d3*/  mov edx, 53h ; 'S'
/*140a0c8d8*/  call sub_1416C2D4B
/*140a0c8de*/  jmp loc_140A0CCCB
/*140a0c8e3*/ loc_140A0C8E3: mov ecx, 1
/*140a0c8e8*/  mov edx, 0Ah
/*140a0c8ed*/  call sub_1416C2D4B
/*140a0c8f3*/  jmp loc_140A0CCCB
/*140a0c8f8*/ loc_140A0C8F8: mov ecx, 1
/*140a0c8fd*/  mov edx, 4
/*140a0c902*/  call sub_1416C2D4B
/*140a0c908*/  jmp loc_140A0CCCB
/*140a0c90d*/ loc_140A0C90D: mov ecx, 1
/*140a0c912*/  mov edx, 6
/*140a0c917*/  call sub_1416C2D4B
/*140a0c91d*/  jmp loc_140A0CCCB
/*140a0c922*/ loc_140A0C922: mov ecx, 1
/*140a0c927*/  mov edx, 0Ah
/*140a0c92c*/  call sub_1416C2D4B
/*140a0c932*/  jmp loc_140A0CCCB
/*140a0c937*/ loc_140A0C937: mov ecx, 1
/*140a0c93c*/  mov edx, 7
/*140a0c941*/  call sub_1416C2D4B
/*140a0c947*/  jmp loc_140A0CCCB
/*140a0c94c*/ loc_140A0C94C: mov ecx, 1
/*140a0c951*/  mov edx, 4
/*140a0c956*/  call sub_1416C2D4B
/*140a0c95c*/  jmp loc_140A0CCCB
/*140a0c961*/ loc_140A0C961: mov ecx, 1
/*140a0c966*/  mov edx, 5
/*140a0c96b*/  call sub_1416C2D4B
/*140a0c971*/  jmp loc_140A0CCCB
/*140a0c976*/ loc_140A0C976: mov ecx, 1
/*140a0c97b*/  mov edx, 5
/*140a0c980*/  call sub_1416C2D4B
/*140a0c986*/  jmp loc_140A0CCCB
/*140a0c98b*/ loc_140A0C98B: mov ecx, 1
/*140a0c990*/  mov edx, 4
/*140a0c995*/  call sub_1416C2D4B
/*140a0c99b*/  jmp loc_140A0CCCB
/*140a0c9a0*/ loc_140A0C9A0: mov ecx, 1
/*140a0c9a5*/  mov edx, 6
/*140a0c9aa*/  call sub_1416C2D4B
/*140a0c9b0*/  jmp loc_140A0CCCB
/*140a0c9b5*/ loc_140A0C9B5: mov ecx, 1
/*140a0c9ba*/  mov edx, 0Bh
/*140a0c9bf*/  call sub_1416C2D4B
/*140a0c9c5*/  jmp loc_140A0CCCB
/*140a0c9ca*/ loc_140A0C9CA: mov ecx, 1
/*140a0c9cf*/  mov edx, 63h ; 'c'
/*140a0c9d4*/  call sub_1416C2D4B
/*140a0c9da*/  jmp loc_140A0CCCB
/*140a0c9df*/ loc_140A0C9DF: mov ecx, 1
/*140a0c9e4*/  mov edx, 7
/*140a0c9e9*/  call sub_1416C2D4B
/*140a0c9ef*/  jmp loc_140A0CCCB
/*140a0c9f4*/ loc_140A0C9F4: mov ecx, 1
/*140a0c9f9*/  mov edx, 4
/*140a0c9fe*/  call sub_1416C2D4B
/*140a0ca04*/  jmp loc_140A0CCCB
/*140a0ca09*/ loc_140A0CA09: mov ecx, 1
/*140a0ca0e*/  mov edx, 6
/*140a0ca13*/  call sub_1416C2D4B
/*140a0ca19*/  jmp loc_140A0CCCB
/*140a0ca1e*/ loc_140A0CA1E: mov ecx, 1
/*140a0ca23*/  mov edx, 0Bh
/*140a0ca28*/  call sub_1416C2D4B
/*140a0ca2e*/  jmp loc_140A0CCCB
/*140a0ca33*/ loc_140A0CA33: mov ecx, 1
/*140a0ca38*/  mov edx, 33h ; '3'
/*140a0ca3d*/  call sub_1416C2D4B
/*140a0ca43*/  jmp loc_140A0CCCB
/*140a0ca48*/ loc_140A0CA48: mov ecx, 1
/*140a0ca4d*/  mov edx, 0Ah
/*140a0ca52*/  call sub_1416C2D4B
/*140a0ca58*/  jmp loc_140A0CCCB
/*140a0ca5d*/ loc_140A0CA5D: mov ecx, 1
/*140a0ca62*/  mov edx, 4
/*140a0ca67*/  call sub_1416C2D4B
/*140a0ca6d*/  jmp loc_140A0CCCB
/*140a0ca72*/ loc_140A0CA72: mov ecx, 1
/*140a0ca77*/  mov edx, 6
/*140a0ca7c*/  call sub_1416C2D4B
/*140a0ca82*/  jmp loc_140A0CCCB
/*140a0ca87*/ loc_140A0CA87: mov ecx, 1
/*140a0ca8c*/  mov edx, 0Bh
/*140a0ca91*/  call sub_1416C2D4B
/*140a0ca97*/  jmp loc_140A0CCCB
/*140a0ca9c*/ loc_140A0CA9C: mov ecx, 1
/*140a0caa1*/  mov edx, 32h ; '2'
/*140a0caa6*/  call sub_1416C2D4B
/*140a0caac*/  jmp loc_140A0CCCB
/*140a0cab1*/ loc_140A0CAB1: mov ecx, 1
/*140a0cab6*/  mov edx, 8
/*140a0cabb*/  call sub_1416C2D4B
/*140a0cac1*/  jmp loc_140A0CCCB
/*140a0cac6*/ loc_140A0CAC6: mov [rbp+250h+var_D8], rdi
/*140a0cacd*/  mov ecx, 1
/*140a0cad2*/  mov edx, 7
/*140a0cad7*/  call sub_1416C2D4B
/*140a0cadd*/  jmp loc_140A0CCCB
/*140a0cae2*/ loc_140A0CAE2: mov ecx, 1
/*140a0cae7*/  mov edx, 4
/*140a0caec*/  call sub_1416C2D4B
/*140a0caf2*/  jmp loc_140A0CCCB
/*140a0caf7*/ loc_140A0CAF7: mov [rbp+250h+var_41], 1
/*140a0cafe*/  mov [rbp+250h+var_42], 1
/*140a0cb05*/  mov [rbp+250h+var_43], 1
/*140a0cb0c*/ loc_140A0CB0C: mov ecx, 1
/*140a0cb11*/  mov edx, 4
/*140a0cb16*/  call sub_1416C2D4B
/*140a0cb1c*/  jmp loc_140A0CCCB
/*140a0cb21*/ loc_140A0CB21: mov [rbp+250h+var_41], 1
/*140a0cb28*/  mov [rbp+250h+var_42], 1
/*140a0cb2f*/  mov rax, [rbp+250h+var_F8]
/*140a0cb36*/  mov [rbp+250h+var_43], al
/*140a0cb3c*/  mov ecx, 1
/*140a0cb41*/  mov edx, 0Ah
/*140a0cb46*/  call sub_1416C2D4B
/*140a0cb4c*/  jmp loc_140A0CCCB
/*140a0cb51*/ loc_140A0CB51: mov [rbp+250h+var_71], 1
/*140a0cb58*/ loc_140A0CB58: mov ecx, 1
/*140a0cb5d*/  mov edx, 4
/*140a0cb62*/  call sub_1416C2D4B
/*140a0cb68*/  jmp loc_140A0CCCB
/*140a0cb6d*/ loc_140A0CB6D: mov ecx, 1
/*140a0cb72*/  mov edx, 8
/*140a0cb77*/  call sub_1416C2D4B
/*140a0cb7d*/  jmp loc_140A0CCCB
/*140a0cb82*/ loc_140A0CB82: mov ecx, 1
/*140a0cb87*/  mov edx, 4
/*140a0cb8c*/  call sub_1416C2D4B
/*140a0cb92*/  jmp loc_140A0CCCB
/*140a0cb97*/ loc_140A0CB97: mov [rbp+250h+var_71], 1
/*140a0cb9e*/ loc_140A0CB9E: mov ecx, 1
/*140a0cba3*/  mov edx, 8
/*140a0cba8*/  call sub_1416C2D4B
/*140a0cbae*/  jmp loc_140A0CCCB
/*140a0cbb3*/ loc_140A0CBB3: mov ecx, 1
/*140a0cbb8*/  mov edx, 0Bh
/*140a0cbbd*/  call sub_1416C2D4B
/*140a0cbc3*/  jmp loc_140A0CCCB
/*140a0cbc8*/ loc_140A0CBC8: mov ecx, 1
/*140a0cbcd*/  mov edx, 0Ah
/*140a0cbd2*/  call sub_1416C2D4B
/*140a0cbd8*/  jmp loc_140A0CCCB
/*140a0cbdd*/ loc_140A0CBDD: mov ecx, 1
/*140a0cbe2*/  mov edx, 4
/*140a0cbe7*/  call sub_1416C2D4B
/*140a0cbed*/  jmp loc_140A0CCCB
/*140a0cbf2*/ loc_140A0CBF2: mov ecx, 1
/*140a0cbf7*/  mov edx, 0Ah
/*140a0cbfc*/  call sub_1416C2D4B
/*140a0cc02*/  jmp loc_140A0CCCB
/*140a0cc07*/ loc_140A0CC07: mov ecx, 1
/*140a0cc0c*/  mov edx, 5
/*140a0cc11*/  call sub_1416C2D4B
/*140a0cc17*/  jmp loc_140A0CCCB
/*140a0cc1c*/ loc_140A0CC1C: mov ecx, 1
/*140a0cc21*/  mov edx, 4
/*140a0cc26*/  call sub_1416C2D4B
/*140a0cc2c*/  jmp loc_140A0CCCB
/*140a0cc31*/ loc_140A0CC31: mov ecx, 1
/*140a0cc36*/  mov edx, 0Bh
/*140a0cc3b*/  call sub_1416C2D4B
/*140a0cc41*/  jmp loc_140A0CCCB
/*140a0cc46*/ loc_140A0CC46: mov ecx, 1
/*140a0cc4b*/  mov edx, 14h
/*140a0cc50*/  call sub_1416C2D4B
/*140a0cc56*/  jmp short loc_140A0CCCB
/*140a0cc58*/ loc_140A0CC58: mov ecx, 1
/*140a0cc5d*/  mov edx, 8
/*140a0cc62*/  call sub_1416C2D4B
/*140a0cc68*/  jmp short loc_140A0CCCB
/*140a0cc6a*/ loc_140A0CC6A: mov ecx, 1
/*140a0cc6f*/  mov edx, 0Bh
/*140a0cc74*/  call sub_1416C2D4B
/*140a0cc7a*/  jmp short loc_140A0CCCB
/*140a0cc7c*/ loc_140A0CC7C: mov ecx, 1
/*140a0cc81*/  mov edx, 4
/*140a0cc86*/  call sub_1416C2D4B
/*140a0cc8c*/  jmp short loc_140A0CCCB
/*140a0cc8e*/ loc_140A0CC8E: mov ecx, 1
/*140a0cc93*/  mov edx, 0Ah
/*140a0cc98*/  call sub_1416C2D4B
/*140a0cc9e*/  jmp short loc_140A0CCCB
/*140a0cca0*/ loc_140A0CCA0: mov [rbp+250h+var_41], 1
/*140a0cca7*/  mov [rbp+250h+var_42], 0
/*140a0ccae*/  mov rax, [rbp+250h+var_F8]
/*140a0ccb5*/  mov [rbp+250h+var_43], al
/*140a0ccbb*/ loc_140A0CCBB: mov ecx, 1
/*140a0ccc0*/  mov edx, 6
/*140a0ccc5*/  call sub_1416C2D4B
/*140a0cccb*/ loc_140A0CCCB: ud2
