// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409A41B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // r14
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // r14
  _DWORD *v42; // rax
  unsign... [73261 chars total]

// ============================================================
// [TRUNCATED] Hex-Rays decompile() server-side truncates structuredContent.code
// to first ~1023 chars regardless of function size (confirmed via raw MCP probe).
// decompile has no offset/range parameter -- cannot request remaining pseudocode chunks.
// Fallback per rust-reverse-pipeline references/ida-deep-recovery.md 超大体 row:
// full basic_blocks CFG + full disasm (both support offset/max_* pagination) captured below
// as ground-truth supplementary evidence. This is NOT a hand-reconstructed C decompile;
// treat as asm-level evidence only, do not claim narrative-level internal logic from this alone.
// basic_blocks: 497/497 retrieved (all pages fetched: True)
// disasm instructions: 2331/2331 retrieved (all pages fetched: True)
// ============================================================

// --- basic_blocks CFG ---
// BB 0x1409a41b0-0x1409a4221 size=113 type=0 succ=['0x1409a4221'] pred=[]
// BB 0x1409a4221-0x1409a424f size=46 type=0 succ=['0x1409a424f', '0x1409a42ed'] pred=['0x1409a41b0']
// BB 0x1409a424f-0x1409a4258 size=9 type=0 succ=['0x1409a4258', '0x1409a42ed'] pred=['0x1409a4221']
// BB 0x1409a4258-0x1409a4265 size=13 type=0 succ=['0x1409a4265', '0x1409a42ed'] pred=['0x1409a424f']
// BB 0x1409a4265-0x1409a426f size=10 type=0 succ=['0x1409a426f', '0x1409a4282'] pred=['0x1409a4258']
// BB 0x1409a426f-0x1409a4282 size=19 type=0 succ=['0x1409a4282', '0x1409a42ed'] pred=['0x1409a4265']
// BB 0x1409a4282-0x1409a4287 size=5 type=0 succ=['0x1409a4287', '0x1409a429b'] pred=['0x1409a4265', '0x1409a426f']
// BB 0x1409a4287-0x1409a428a size=3 type=0 succ=['0x1409a428a'] pred=['0x1409a4282']
// BB 0x1409a428a-0x1409a4295 size=11 type=4 succ=[] pred=['0x1409a4287', '0x1409a429b']
// BB 0x1409a4296-0x1409a429b size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a429b-0x1409a42b8 size=29 type=0 succ=['0x1409a428a', '0x1409a42b8'] pred=['0x1409a4282']
// BB 0x1409a42b8-0x1409a42d2 size=26 type=0 succ=['0x1409a42d2', '0x1409a42e1'] pred=['0x1409a429b']
// BB 0x1409a42d2-0x1409a42e1 size=15 type=0 succ=['0x1409a42e1'] pred=['0x1409a42b8']
// BB 0x1409a42e1-0x1409a42ed size=12 type=0 succ=['0x1409a42ed'] pred=['0x1409a42b8', '0x1409a42d2']
// BB 0x1409a42ed-0x1409a430e size=33 type=0 succ=['0x1409a430e', '0x1409a4461'] pred=['0x1409a4221', '0x1409a424f', '0x1409a4258', '0x1409a426f', '0x1409a42e1']
// BB 0x1409a430e-0x1409a4328 size=26 type=0 succ=['0x1409a4328', '0x1409a4346'] pred=['0x1409a42ed']
// BB 0x1409a4328-0x1409a432d size=5 type=0 succ=['0x1409a432d', '0x1409a4346'] pred=['0x1409a430e']
// BB 0x1409a432d-0x1409a4336 size=9 type=0 succ=['0x1409a4336', '0x1409a433d'] pred=['0x1409a4328']
// BB 0x1409a4336-0x1409a433b size=5 type=0 succ=['0x1409a433b', '0x1409a4373'] pred=['0x1409a432d']
// BB 0x1409a433b-0x1409a433d size=2 type=0 succ=['0x1409a4346'] pred=['0x1409a4336']
// BB 0x1409a433d-0x1409a4346 size=9 type=0 succ=['0x1409a4346', '0x1409a4382'] pred=['0x1409a432d']
// BB 0x1409a4346-0x1409a4360 size=26 type=0 succ=['0x1409a4360', '0x1409a4390'] pred=['0x1409a430e', '0x1409a4328', '0x1409a433b', '0x1409a433d']
// BB 0x1409a4360-0x1409a4365 size=5 type=0 succ=['0x1409a4365', '0x1409a4390'] pred=['0x1409a4346']
// BB 0x1409a4365-0x1409a436e size=9 type=0 succ=['0x1409a436e', '0x1409a4379'] pred=['0x1409a4360']
// BB 0x1409a436e-0x1409a4373 size=5 type=0 succ=['0x1409a4373', '0x1409a4390'] pred=['0x1409a4365']
// BB 0x1409a4373-0x1409a4379 size=6 type=0 succ=['0x1409a4382'] pred=['0x1409a4336', '0x1409a436e']
// BB 0x1409a4379-0x1409a4382 size=9 type=0 succ=['0x1409a4382', '0x1409a4390'] pred=['0x1409a4365']
// BB 0x1409a4382-0x1409a4390 size=14 type=0 succ=['0x1409a4390'] pred=['0x1409a433d', '0x1409a4373', '0x1409a4379']
// BB 0x1409a4390-0x1409a43aa size=26 type=0 succ=['0x1409a43aa', '0x1409a43c8'] pred=['0x1409a4346', '0x1409a4360', '0x1409a436e', '0x1409a4379', '0x1409a4382']
// BB 0x1409a43aa-0x1409a43af size=5 type=0 succ=['0x1409a43af', '0x1409a43c8'] pred=['0x1409a4390']
// BB 0x1409a43af-0x1409a43b8 size=9 type=0 succ=['0x1409a43b8', '0x1409a43bf'] pred=['0x1409a43aa']
// BB 0x1409a43b8-0x1409a43bd size=5 type=0 succ=['0x1409a43bd', '0x1409a43f5'] pred=['0x1409a43af']
// BB 0x1409a43bd-0x1409a43bf size=2 type=0 succ=['0x1409a43c8'] pred=['0x1409a43b8']
// BB 0x1409a43bf-0x1409a43c8 size=9 type=0 succ=['0x1409a43c8', '0x1409a4404'] pred=['0x1409a43af']
// BB 0x1409a43c8-0x1409a43e2 size=26 type=0 succ=['0x1409a43e2', '0x1409a4412'] pred=['0x1409a4390', '0x1409a43aa', '0x1409a43bd', '0x1409a43bf']
// BB 0x1409a43e2-0x1409a43e7 size=5 type=0 succ=['0x1409a43e7', '0x1409a4412'] pred=['0x1409a43c8']
// BB 0x1409a43e7-0x1409a43f0 size=9 type=0 succ=['0x1409a43f0', '0x1409a43fb'] pred=['0x1409a43e2']
// BB 0x1409a43f0-0x1409a43f5 size=5 type=0 succ=['0x1409a43f5', '0x1409a4412'] pred=['0x1409a43e7']
// BB 0x1409a43f5-0x1409a43fb size=6 type=0 succ=['0x1409a4404'] pred=['0x1409a43b8', '0x1409a43f0']
// BB 0x1409a43fb-0x1409a4404 size=9 type=0 succ=['0x1409a4404', '0x1409a4412'] pred=['0x1409a43e7']
// BB 0x1409a4404-0x1409a4412 size=14 type=0 succ=['0x1409a4412'] pred=['0x1409a43bf', '0x1409a43f5', '0x1409a43fb']
// BB 0x1409a4412-0x1409a442c size=26 type=0 succ=['0x1409a442c', '0x1409a4461'] pred=['0x1409a43c8', '0x1409a43e2', '0x1409a43f0', '0x1409a43fb', '0x1409a4404']
// BB 0x1409a442c-0x1409a4431 size=5 type=0 succ=['0x1409a4431', '0x1409a4461'] pred=['0x1409a4412']
// BB 0x1409a4431-0x1409a443b size=10 type=0 succ=['0x1409a443b', '0x1409a4461'] pred=['0x1409a442c']
// BB 0x1409a443b-0x1409a4440 size=5 type=0 succ=['0x1409a4440', '0x1409a4446'] pred=['0x1409a4431']
// BB 0x1409a4440-0x1409a4446 size=6 type=0 succ=['0x1409a444f'] pred=['0x1409a443b']
// BB 0x1409a4446-0x1409a444f size=9 type=0 succ=['0x1409a444f', '0x1409a4461'] pred=['0x1409a443b']
// BB 0x1409a444f-0x1409a4461 size=18 type=0 succ=['0x1409a4461'] pred=['0x1409a4440', '0x1409a4446']
// BB 0x1409a4461-0x1409a447f size=30 type=0 succ=['0x1409a447f', '0x1409a69fc'] pred=['0x1409a42ed', '0x1409a4412', '0x1409a442c', '0x1409a4431', '0x1409a4446', '0x1409a444f']
// BB 0x1409a447f-0x1409a4488 size=9 type=0 succ=['0x1409a4488', '0x1409a69fc'] pred=['0x1409a4461']
// BB 0x1409a4488-0x1409a4493 size=11 type=0 succ=['0x1409a4493', '0x1409a69fc'] pred=['0x1409a447f']
// BB 0x1409a4493-0x1409a44b1 size=30 type=0 succ=['0x1409a44b1', '0x1409a44e0'] pred=['0x1409a4488']
// BB 0x1409a44b1-0x1409a44c4 size=19 type=1 succ=['0x1409a44c4', '0x1409a452c', '0x1409a454a', '0x1409a4553', '0x1409a4570'] pred=['0x1409a4493']
// BB 0x1409a44c4-0x1409a44e0 size=28 type=0 succ=['0x1409a45b4'] pred=['0x1409a44b1']
// BB 0x1409a44e0-0x1409a452c size=76 type=0 succ=['0x1409a460c'] pred=['0x1409a4493']
// BB 0x1409a452c-0x1409a454a size=30 type=0 succ=['0x1409a45b4'] pred=['0x1409a44b1']
// BB 0x1409a454a-0x1409a4553 size=9 type=0 succ=['0x1409a45b4'] pred=['0x1409a44b1']
// BB 0x1409a4553-0x1409a4570 size=29 type=0 succ=['0x1409a45b4'] pred=['0x1409a44b1']
// BB 0x1409a4570-0x1409a4577 size=7 type=0 succ=['0x1409a4577', '0x1409a4597'] pred=['0x1409a44b1']
// BB 0x1409a4577-0x1409a4584 size=13 type=0 succ=['0x1409a4584', '0x1409a6bb9'] pred=['0x1409a4570']
// BB 0x1409a4584-0x1409a4597 size=19 type=0 succ=['0x1409a45ad'] pred=['0x1409a4577']
// BB 0x1409a4597-0x1409a45ad size=22 type=0 succ=['0x1409a45ad'] pred=['0x1409a4570']
// BB 0x1409a45ad-0x1409a45b4 size=7 type=0 succ=['0x1409a45b4'] pred=['0x1409a4584', '0x1409a4597']
// BB 0x1409a45b4-0x1409a460c size=88 type=0 succ=['0x1409a460c'] pred=['0x1409a44c4', '0x1409a452c', '0x1409a454a', '0x1409a4553', '0x1409a45ad']
// BB 0x1409a460c-0x1409a462a size=30 type=0 succ=['0x1409a462a', '0x1409a4681'] pred=['0x1409a44e0', '0x1409a45b4']
// BB 0x1409a462a-0x1409a464b size=33 type=0 succ=['0x1409a464b', '0x1409a4662'] pred=['0x1409a460c']
// BB 0x1409a464b-0x1409a4662 size=23 type=0 succ=['0x1409a4662'] pred=['0x1409a462a']
// BB 0x1409a4662-0x1409a4675 size=19 type=0 succ=['0x1409a4675', '0x1409a4681'] pred=['0x1409a462a', '0x1409a464b']
// BB 0x1409a4675-0x1409a4681 size=12 type=0 succ=['0x1409a4681'] pred=['0x1409a4662']
// BB 0x1409a4681-0x1409a4697 size=22 type=0 succ=['0x1409a4697'] pred=['0x1409a460c', '0x1409a4662', '0x1409a4675']
// BB 0x1409a4697-0x1409a46a0 size=9 type=0 succ=['0x1409a46a0', '0x1409a4845'] pred=['0x1409a4681']
// BB 0x1409a46a0-0x1409a46a9 size=9 type=0 succ=['0x1409a46a9', '0x1409a4845'] pred=['0x1409a4697']
// BB 0x1409a46a9-0x1409a46b6 size=13 type=0 succ=['0x1409a46b6', '0x1409a4845'] pred=['0x1409a46a0']
// BB 0x1409a46b6-0x1409a46c3 size=13 type=0 succ=['0x1409a46c3', '0x1409a470b'] pred=['0x1409a46a9']
// BB 0x1409a46c3-0x1409a46cc size=9 type=0 succ=['0x1409a46cc', '0x1409a4736'] pred=['0x1409a46b6']
// BB 0x1409a46cc-0x1409a46e0 size=20 type=0 succ=['0x1409a46e0', '0x1409a6bcb'] pred=['0x1409a46c3']
// BB 0x1409a46e0-0x1409a46f6 size=22 type=0 succ=['0x1409a46f6'] pred=['0x1409a46cc', '0x1409a6bcb']
// BB 0x1409a46f6-0x1409a470b size=21 type=0 succ=['0x1409a4845'] pred=['0x1409a46e0']
// BB 0x1409a470b-0x1409a4731 size=38 type=0 succ=['0x1409a4731'] pred=['0x1409a46b6']
// BB 0x1409a4731-0x1409a4736 size=5 type=0 succ=['0x1409a4845'] pred=['0x1409a470b']
// BB 0x1409a4736-0x1409a474a size=20 type=0 succ=['0x1409a474a', '0x1409a6bec'] pred=['0x1409a46c3']
// BB 0x1409a474a-0x1409a477c size=50 type=0 succ=['0x1409a477c', '0x1409a4845'] pred=['0x1409a4736', '0x1409a6bec']
// BB 0x1409a477c-0x1409a4785 size=9 type=0 succ=['0x1409a4785', '0x1409a47a2'] pred=['0x1409a474a']
// BB 0x1409a4785-0x1409a479c size=23 type=0 succ=['0x1409a479c', '0x1409a4831'] pred=['0x1409a477c']
// BB 0x1409a479c-0x1409a47a2 size=6 type=0 succ=['0x1409a47a2', '0x1409a47b9'] pred=['0x1409a4785']
// BB 0x1409a47a2-0x1409a47b9 size=23 type=0 succ=['0x1409a47b9', '0x1409a4845'] pred=['0x1409a477c', '0x1409a479c']
// BB 0x1409a47b9-0x1409a47e7 size=46 type=0 succ=['0x1409a47e7'] pred=['0x1409a479c', '0x1409a47a2']
// BB 0x1409a47e7-0x1409a4824 size=61 type=0 succ=['0x1409a4824', '0x1409a4845'] pred=['0x1409a47b9']
// BB 0x1409a4824-0x1409a4831 size=13 type=0 succ=['0x1409a4845'] pred=['0x1409a47e7']
// BB 0x1409a4831-0x1409a4835 size=4 type=0 succ=['0x1409a4835'] pred=['0x1409a4785']
// BB 0x1409a4835-0x1409a4845 size=16 type=0 succ=['0x1409a4845'] pred=['0x1409a4831']
// BB 0x1409a4845-0x1409a4867 size=34 type=0 succ=['0x1409a4867', '0x1409a68dc'] pred=['0x1409a4697', '0x1409a46a0', '0x1409a46a9', '0x1409a46f6', '0x1409a4731', '0x1409a474a', '0x1409a47a2', '0x1409a47e7', '0x1409a4824', '0x1409a4835']
// BB 0x1409a4867-0x1409a4870 size=9 type=0 succ=['0x1409a4870', '0x1409a68dc'] pred=['0x1409a4845']
// BB 0x1409a4870-0x1409a48bc size=76 type=0 succ=['0x1409a48bc', '0x1409a68dc'] pred=['0x1409a4867']
// BB 0x1409a48bc-0x1409a48cf size=19 type=0 succ=['0x1409a48cf', '0x1409a48df'] pred=['0x1409a4870', '0x1409a67ff']
// BB 0x1409a48cf-0x1409a48d4 size=5 type=0 succ=['0x1409a48d4', '0x1409a48df'] pred=['0x1409a48bc']
// BB 0x1409a48d4-0x1409a48df size=11 type=0 succ=['0x1409a48df', '0x1409a497d'] pred=['0x1409a48cf']
// BB 0x1409a48df-0x1409a48e2 size=3 type=0 succ=['0x1409a48e2'] pred=['0x1409a48bc', '0x1409a48cf', '0x1409a48d4']
// BB 0x1409a48e2-0x1409a4900 size=30 type=0 succ=['0x1409a4900', '0x1409a4931'] pred=['0x1409a48df', '0x1409a497d']
// BB 0x1409a4900-0x1409a4913 size=19 type=1 succ=['0x1409a4913', '0x1409a4986', '0x1409a49a4', '0x1409a49ad', '0x1409a49ca'] pred=['0x1409a48e2']
// BB 0x1409a4913-0x1409a4931 size=30 type=0 succ=['0x1409a4a0e'] pred=['0x1409a4900']
// BB 0x1409a4931-0x1409a497d size=76 type=0 succ=['0x1409a4a66'] pred=['0x1409a48e2']
// BB 0x1409a497d-0x1409a4986 size=9 type=0 succ=['0x1409a48e2'] pred=['0x1409a48d4']
// BB 0x1409a4986-0x1409a49a4 size=30 type=0 succ=['0x1409a4a0e'] pred=['0x1409a4900']
// BB 0x1409a49a4-0x1409a49ad size=9 type=0 succ=['0x1409a4a0e'] pred=['0x1409a4900']
// BB 0x1409a49ad-0x1409a49ca size=29 type=0 succ=['0x1409a4a0e'] pred=['0x1409a4900']
// BB 0x1409a49ca-0x1409a49d1 size=7 type=0 succ=['0x1409a49d1', '0x1409a49f1'] pred=['0x1409a4900']
// BB 0x1409a49d1-0x1409a49de size=13 type=0 succ=['0x1409a49de', '0x1409a6c0d'] pred=['0x1409a49ca']
// BB 0x1409a49de-0x1409a49f1 size=19 type=0 succ=['0x1409a4a07'] pred=['0x1409a49d1']
// BB 0x1409a49f1-0x1409a4a07 size=22 type=0 succ=['0x1409a4a07'] pred=['0x1409a49ca']
// BB 0x1409a4a07-0x1409a4a0e size=7 type=0 succ=['0x1409a4a0e'] pred=['0x1409a49de', '0x1409a49f1']
// BB 0x1409a4a0e-0x1409a4a66 size=88 type=0 succ=['0x1409a4a66'] pred=['0x1409a4913', '0x1409a4986', '0x1409a49a4', '0x1409a49ad', '0x1409a4a07']
// BB 0x1409a4a66-0x1409a4a80 size=26 type=0 succ=['0x1409a4a80', '0x1409a4a9a'] pred=['0x1409a4931', '0x1409a4a0e']
// BB 0x1409a4a80-0x1409a4a85 size=5 type=0 succ=['0x1409a4a85', '0x1409a4a9a'] pred=['0x1409a4a66']
// BB 0x1409a4a85-0x1409a4a9a size=21 type=0 succ=['0x1409a4aae'] pred=['0x1409a4a80']
// BB 0x1409a4a9a-0x1409a4aae size=20 type=0 succ=['0x1409a4aae'] pred=['0x1409a4a66', '0x1409a4a80']
// BB 0x1409a4aae-0x1409a4ad5 size=39 type=0 succ=['0x1409a4ad5', '0x1409a4aeb'] pred=['0x1409a4a85', '0x1409a4a9a']
// BB 0x1409a4ad5-0x1409a4ada size=5 type=0 succ=['0x1409a4ada', '0x1409a4aeb'] pred=['0x1409a4aae']
// BB 0x1409a4ada-0x1409a4aeb size=17 type=0 succ=['0x1409a4aee'] pred=['0x1409a4ad5']
// BB 0x1409a4aeb-0x1409a4aee size=3 type=0 succ=['0x1409a4aee'] pred=['0x1409a4aae', '0x1409a4ad5']
// BB 0x1409a4aee-0x1409a4b09 size=27 type=0 succ=['0x1409a4b09', '0x1409a4b23'] pred=['0x1409a4ada', '0x1409a4aeb']
// BB 0x1409a4b09-0x1409a4b0e size=5 type=0 succ=['0x1409a4b0e', '0x1409a4b23'] pred=['0x1409a4aee']
// BB 0x1409a4b0e-0x1409a4b23 size=21 type=0 succ=['0x1409a4b37'] pred=['0x1409a4b09']
// BB 0x1409a4b23-0x1409a4b37 size=20 type=0 succ=['0x1409a4b37'] pred=['0x1409a4aee', '0x1409a4b09']
// BB 0x1409a4b37-0x1409a4b45 size=14 type=0 succ=['0x1409a4b45', '0x1409a4bdb'] pred=['0x1409a4b0e', '0x1409a4b23']
// BB 0x1409a4b45-0x1409a4b7c size=55 type=0 succ=['0x1409a4b7c'] pred=['0x1409a4b37']
// BB 0x1409a4b7c-0x1409a4b96 size=26 type=0 succ=['0x1409a4b96', '0x1409a4bc0'] pred=['0x1409a4b45', '0x1409a4bce']
// BB 0x1409a4b96-0x1409a4bb3 size=29 type=0 succ=['0x1409a4bb3', '0x1409a4df6'] pred=['0x1409a4b7c', '0x1409a4bb3']
// BB 0x1409a4bb3-0x1409a4bc0 size=13 type=0 succ=['0x1409a4b96', '0x1409a4bc0'] pred=['0x1409a4b96']
// BB 0x1409a4bc0-0x1409a4bce size=14 type=0 succ=['0x1409a4bce', '0x1409a4bdb'] pred=['0x1409a4b7c', '0x1409a4bb3']
// BB 0x1409a4bce-0x1409a4bdb size=13 type=0 succ=['0x1409a4b7c'] pred=['0x1409a4bc0']
// BB 0x1409a4bdb-0x1409a4c44 size=105 type=0 succ=['0x1409a4c44'] pred=['0x1409a4b37', '0x1409a4bc0']
// BB 0x1409a4c44-0x1409a4c60 size=28 type=0 succ=['0x1409a4c60', '0x1409a6b57'] pred=['0x1409a4bdb']
// BB 0x1409a4c60-0x1409a4c83 size=35 type=0 succ=['0x1409a4c83', '0x1409a4c8e'] pred=['0x1409a4c44']
// BB 0x1409a4c83-0x1409a4c89 size=6 type=0 succ=['0x1409a4c89', '0x1409a4c94'] pred=['0x1409a4c60']
// BB 0x1409a4c89-0x1409a4c8e size=5 type=0 succ=['0x1409a6c58'] pred=['0x1409a4c83']
// BB 0x1409a4c8e-0x1409a4c94 size=6 type=0 succ=['0x1409a4c94', '0x1409a6c58'] pred=['0x1409a4c60']
// BB 0x1409a4c94-0x1409a4cb9 size=37 type=0 succ=['0x1409a4cb9'] pred=['0x1409a4c83', '0x1409a4c8e']
// BB 0x1409a4cb9-0x1409a4cdd size=36 type=0 succ=['0x1409a4cdd', '0x1409a4cef'] pred=['0x1409a4c94']
// BB 0x1409a4cdd-0x1409a4cef size=18 type=0 succ=['0x1409a4cef'] pred=['0x1409a4cb9']
// BB 0x1409a4cef-0x1409a4d63 size=116 type=0 succ=['0x1409a4d63'] pred=['0x1409a4cb9', '0x1409a4cdd']
// BB 0x1409a4d63-0x1409a4d7e size=27 type=0 succ=['0x1409a4d7e'] pred=['0x1409a4cef']
// BB 0x1409a4d7e-0x1409a4d88 size=10 type=0 succ=['0x1409a4d88', '0x1409a4df6'] pred=['0x1409a4d63']
// BB 0x1409a4d88-0x1409a4d8d size=5 type=0 succ=['0x1409a4d8d', '0x1409a4d9c'] pred=['0x1409a4d7e']
// BB 0x1409a4d8d-0x1409a4d9c size=15 type=0 succ=['0x1409a4d9c'] pred=['0x1409a4d88']
// BB 0x1409a4d9c-0x1409a4da8 size=12 type=0 succ=['0x1409a4da8', '0x1409a4dba'] pred=['0x1409a4d88', '0x1409a4d8d']
// BB 0x1409a4da8-0x1409a4dba size=18 type=0 succ=['0x1409a4dba'] pred=['0x1409a4d9c']
// BB 0x1409a4dba-0x1409a4dc6 size=12 type=0 succ=['0x1409a4dc6', '0x1409a4dd8'] pred=['0x1409a4d9c', '0x1409a4da8']
// BB 0x1409a4dc6-0x1409a4dd8 size=18 type=0 succ=['0x1409a4dd8'] pred=['0x1409a4dba']
// BB 0x1409a4dd8-0x1409a4de4 size=12 type=0 succ=['0x1409a4de4', '0x1409a4df6'] pred=['0x1409a4dba', '0x1409a4dc6']
// BB 0x1409a4de4-0x1409a4df6 size=18 type=0 succ=['0x1409a4df6'] pred=['0x1409a4dd8']
// BB 0x1409a4df6-0x1409a4e0c size=22 type=0 succ=['0x1409a4e0c', '0x1409a4ee7'] pred=['0x1409a4b96', '0x1409a4d7e', '0x1409a4dd8', '0x1409a4de4']
// BB 0x1409a4e0c-0x1409a4e1a size=14 type=0 succ=['0x1409a4e1a', '0x1409a4ee7'] pred=['0x1409a4df6']
// BB 0x1409a4e1a-0x1409a4e5a size=64 type=0 succ=['0x1409a4e5a'] pred=['0x1409a4e0c']
// BB 0x1409a4e5a-0x1409a4e77 size=29 type=0 succ=['0x1409a4e77', '0x1409a4ec9'] pred=['0x1409a4e1a', '0x1409a4ed7']
// BB 0x1409a4e77-0x1409a4e7e size=7 type=0 succ=['0x1409a4e7e'] pred=['0x1409a4e5a']
// BB 0x1409a4e7e-0x1409a4e97 size=25 type=0 succ=['0x1409a4e97', '0x1409a4eb4'] pred=['0x1409a4e77', '0x1409a4eb4']
// BB 0x1409a4e97-0x1409a4eb4 size=29 type=0 succ=['0x1409a4eb4', '0x1409a4ee9'] pred=['0x1409a4e7e']
// BB 0x1409a4eb4-0x1409a4ec9 size=21 type=0 succ=['0x1409a4e7e', '0x1409a4ec9'] pred=['0x1409a4e7e', '0x1409a4e97']
// BB 0x1409a4ec9-0x1409a4ed7 size=14 type=0 succ=['0x1409a4ed7', '0x1409a4ee7'] pred=['0x1409a4e5a', '0x1409a4eb4']
// BB 0x1409a4ed7-0x1409a4ee7 size=16 type=0 succ=['0x1409a4e5a'] pred=['0x1409a4ec9']
// BB 0x1409a4ee7-0x1409a4ee9 size=2 type=0 succ=['0x1409a4ee9'] pred=['0x1409a4df6', '0x1409a4e0c', '0x1409a4ec9']
// BB 0x1409a4ee9-0x1409a4f02 size=25 type=0 succ=['0x1409a4f02', '0x1409a696d'] pred=['0x1409a4e97', '0x1409a4ee7']
// BB 0x1409a4f02-0x1409a4f3a size=56 type=0 succ=['0x1409a4f3a'] pred=['0x1409a4ee9']
// BB 0x1409a4f3a-0x1409a4f55 size=27 type=0 succ=['0x1409a4f55', '0x1409a4f7b'] pred=['0x1409a4f02', '0x1409a4f8d']
// BB 0x1409a4f55-0x1409a4f6e size=25 type=0 succ=['0x1409a4f6e', '0x1409a4f9a'] pred=['0x1409a4f3a', '0x1409a4f6e']
// BB 0x1409a4f6e-0x1409a4f7b size=13 type=0 succ=['0x1409a4f55', '0x1409a4f7b'] pred=['0x1409a4f55']
// BB 0x1409a4f7b-0x1409a4f8d size=18 type=0 succ=['0x1409a4f8d', '0x1409a696d'] pred=['0x1409a4f3a', '0x1409a4f6e']
// BB 0x1409a4f8d-0x1409a4f9a size=13 type=0 succ=['0x1409a4f3a'] pred=['0x1409a4f7b']
// BB 0x1409a4f9a-0x1409a4fae size=20 type=0 succ=['0x1409a4fae', '0x1409a502a'] pred=['0x1409a4f55']
// BB 0x1409a4fae-0x1409a4fb5 size=7 type=0 succ=['0x1409a4fb5', '0x1409a502a'] pred=['0x1409a4f9a']
// BB 0x1409a4fb5-0x1409a4fc5 size=16 type=0 succ=['0x1409a4fc5', '0x1409a6a43'] pred=['0x1409a4fae']
// BB 0x1409a4fc5-0x1409a4fe6 size=33 type=0 succ=['0x1409a4fe6', '0x1409a6d16'] pred=['0x1409a4fb5']
// BB 0x1409a4fe6-0x1409a5008 size=34 type=0 succ=['0x1409a5008', '0x1409a5017'] pred=['0x1409a4fc5']
// BB 0x1409a5008-0x1409a5017 size=15 type=0 succ=['0x1409a5017'] pred=['0x1409a4fe6']
// BB 0x1409a5017-0x1409a502a size=19 type=0 succ=['0x1409a502a'] pred=['0x1409a4fe6', '0x1409a5008']
// BB 0x1409a502a-0x1409a5033 size=9 type=0 succ=['0x1409a5033', '0x1409a50b1'] pred=['0x1409a4f9a', '0x1409a4fae', '0x1409a5017']
// BB 0x1409a5033-0x1409a503e size=11 type=0 succ=['0x1409a503e', '0x1409a50b5'] pred=['0x1409a502a']
// BB 0x1409a503e-0x1409a5047 size=9 type=0 succ=['0x1409a5047', '0x1409a6a57'] pred=['0x1409a5033']
// BB 0x1409a5047-0x1409a5067 size=32 type=0 succ=['0x1409a5067', '0x1409a6d72'] pred=['0x1409a503e']
// BB 0x1409a5067-0x1409a508c size=37 type=0 succ=['0x1409a508c', '0x1409a509b'] pred=['0x1409a5047']
// BB 0x1409a508c-0x1409a509b size=15 type=0 succ=['0x1409a509b'] pred=['0x1409a5067']
// BB 0x1409a509b-0x1409a50b1 size=22 type=0 succ=['0x1409a50b5'] pred=['0x1409a5067', '0x1409a508c']
// BB 0x1409a50b1-0x1409a50b5 size=4 type=0 succ=['0x1409a50b5'] pred=['0x1409a502a']
// BB 0x1409a50b5-0x1409a50dd size=40 type=0 succ=['0x1409a50dd', '0x1409a5215'] pred=['0x1409a5033', '0x1409a509b', '0x1409a50b1']
// BB 0x1409a50dd-0x1409a5137 size=90 type=0 succ=['0x1409a5137'] pred=['0x1409a50b5']
// BB 0x1409a5137-0x1409a5153 size=28 type=0 succ=['0x1409a5153', '0x1409a6b88'] pred=['0x1409a50dd']
// BB 0x1409a5153-0x1409a5176 size=35 type=0 succ=['0x1409a5176', '0x1409a5181'] pred=['0x1409a5137']
// BB 0x1409a5176-0x1409a517c size=6 type=0 succ=['0x1409a517c', '0x1409a5187'] pred=['0x1409a5153']
// BB 0x1409a517c-0x1409a5181 size=5 type=0 succ=['0x1409a6c78'] pred=['0x1409a5176']
// BB 0x1409a5181-0x1409a5187 size=6 type=0 succ=['0x1409a5187', '0x1409a6c78'] pred=['0x1409a5153']
// BB 0x1409a5187-0x1409a51ac size=37 type=0 succ=['0x1409a51ac'] pred=['0x1409a5176', '0x1409a5181']
// BB 0x1409a51ac-0x1409a51c4 size=24 type=0 succ=['0x1409a51c4'] pred=['0x1409a5187']
// BB 0x1409a51c4-0x1409a51d0 size=12 type=0 succ=['0x1409a51d0', '0x1409a51e2'] pred=['0x1409a51ac']
// BB 0x1409a51d0-0x1409a51e2 size=18 type=0 succ=['0x1409a51e2'] pred=['0x1409a51c4']
// BB 0x1409a51e2-0x1409a51f5 size=19 type=0 succ=['0x1409a51f5', '0x1409a5204'] pred=['0x1409a51c4', '0x1409a51d0']
// BB 0x1409a51f5-0x1409a5204 size=15 type=0 succ=['0x1409a5204'] pred=['0x1409a51e2']
// BB 0x1409a5204-0x1409a5215 size=17 type=0 succ=['0x1409a5215'] pred=['0x1409a51e2', '0x1409a51f5']
// BB 0x1409a5215-0x1409a5222 size=13 type=0 succ=['0x1409a5222', '0x1409a54bc'] pred=['0x1409a50b5', '0x1409a5204']
// BB 0x1409a5222-0x1409a5230 size=14 type=0 succ=['0x1409a5230', '0x1409a67fb'] pred=['0x1409a5215']
// BB 0x1409a5230-0x1409a523c size=12 type=0 succ=['0x1409a523c', '0x1409a67ff'] pred=['0x1409a5222', '0x1409a67d4']
// BB 0x1409a523c-0x1409a5257 size=27 type=0 succ=['0x1409a5257', '0x1409a6822'] pred=['0x1409a5230']
// BB 0x1409a5257-0x1409a527d size=38 type=0 succ=['0x1409a527d', '0x1409a67ff'] pred=['0x1409a523c', '0x1409a6822']
// BB 0x1409a527d-0x1409a52b0 size=51 type=0 succ=['0x1409a52b0', '0x1409a6d5d'] pred=['0x1409a5257']
// BB 0x1409a52b0-0x1409a52f7 size=71 type=0 succ=['0x1409a52f7', '0x1409a6d48'] pred=['0x1409a527d']
// BB 0x1409a52f7-0x1409a5343 size=76 type=0 succ=['0x1409a5343'] pred=['0x1409a52b0']
// BB 0x1409a5343-0x1409a5368 size=37 type=0 succ=['0x1409a5368', '0x1409a5372'] pred=['0x1409a52f7']
// BB 0x1409a5368-0x1409a5372 size=10 type=0 succ=['0x1409a5372'] pred=['0x1409a5343']
// BB 0x1409a5372-0x1409a538f size=29 type=0 succ=['0x1409a538f', '0x1409a6d33'] pred=['0x1409a5343', '0x1409a5368']
// BB 0x1409a538f-0x1409a5408 size=121 type=0 succ=['0x1409a5408', '0x1409a5412'] pred=['0x1409a5372']
// BB 0x1409a5408-0x1409a5412 size=10 type=0 succ=['0x1409a5412'] pred=['0x1409a538f']
// BB 0x1409a5412-0x1409a542f size=29 type=0 succ=['0x1409a542f', '0x1409a6d1e'] pred=['0x1409a538f', '0x1409a5408']
// BB 0x1409a542f-0x1409a546d size=62 type=0 succ=['0x1409a546d', '0x1409a6aa1'] pred=['0x1409a5412']
// BB 0x1409a546d-0x1409a5473 size=6 type=0 succ=['0x1409a5473', '0x1409a5b9a'] pred=['0x1409a542f']
// BB 0x1409a5473-0x1409a5498 size=37 type=0 succ=['0x1409a5498', '0x1409a6aa4'] pred=['0x1409a546d']
// BB 0x1409a5498-0x1409a54bc size=36 type=0 succ=['0x1409a5ba0'] pred=['0x1409a5473']
// BB 0x1409a54bc-0x1409a54cb size=15 type=0 succ=['0x1409a54cb', '0x1409a67ff'] pred=['0x1409a5215']
// BB 0x1409a54cb-0x1409a54db size=16 type=0 succ=['0x1409a54db', '0x1409a5656'] pred=['0x1409a54bc']
// BB 0x1409a54db-0x1409a550e size=51 type=0 succ=['0x1409a550e', '0x1409a6d01'] pred=['0x1409a54cb']
// BB 0x1409a550e-0x1409a5555 size=71 type=0 succ=['0x1409a5555', '0x1409a6cec'] pred=['0x1409a54db']
// BB 0x1409a5555-0x1409a5585 size=48 type=0 succ=['0x1409a5585'] pred=['0x1409a550e']
// BB 0x1409a5585-0x1409a55aa size=37 type=0 succ=['0x1409a55aa', '0x1409a55b4'] pred=['0x1409a5555']
// BB 0x1409a55aa-0x1409a55b4 size=10 type=0 succ=['0x1409a55b4'] pred=['0x1409a5585']
// BB 0x1409a55b4-0x1409a55d1 size=29 type=0 succ=['0x1409a55d1', '0x1409a6cd7'] pred=['0x1409a5585', '0x1409a55aa']
// BB 0x1409a55d1-0x1409a5607 size=54 type=0 succ=['0x1409a5607', '0x1409a6a6b'] pred=['0x1409a55b4']
// BB 0x1409a5607-0x1409a560d size=6 type=0 succ=['0x1409a560d', '0x1409a57ec'] pred=['0x1409a55d1']
// BB 0x1409a560d-0x1409a5632 size=37 type=0 succ=['0x1409a5632', '0x1409a6a6e'] pred=['0x1409a5607']
// BB 0x1409a5632-0x1409a5656 size=36 type=0 succ=['0x1409a57f2'] pred=['0x1409a560d']
// BB 0x1409a5656-0x1409a5683 size=45 type=0 succ=['0x1409a5683', '0x1409a6cc2'] pred=['0x1409a54cb']
// BB 0x1409a5683-0x1409a56ca size=71 type=0 succ=['0x1409a56ca', '0x1409a6cad'] pred=['0x1409a5656']
// BB 0x1409a56ca-0x1409a570c size=66 type=0 succ=['0x1409a570c'] pred=['0x1409a5683']
// BB 0x1409a570c-0x1409a572e size=34 type=0 succ=['0x1409a572e', '0x1409a5738'] pred=['0x1409a56ca']
// BB 0x1409a572e-0x1409a5738 size=10 type=0 succ=['0x1409a5738'] pred=['0x1409a570c']
// BB 0x1409a5738-0x1409a5755 size=29 type=0 succ=['0x1409a5755', '0x1409a6c98'] pred=['0x1409a570c', '0x1409a572e']
// BB 0x1409a5755-0x1409a578f size=58 type=0 succ=['0x1409a578f', '0x1409a6a86'] pred=['0x1409a5738']
// BB 0x1409a578f-0x1409a579c size=13 type=0 succ=['0x1409a579c', '0x1409a59c3'] pred=['0x1409a5755']
// BB 0x1409a579c-0x1409a57c8 size=44 type=0 succ=['0x1409a57c8', '0x1409a6a89'] pred=['0x1409a578f']
// BB 0x1409a57c8-0x1409a57ec size=36 type=0 succ=['0x1409a59c8'] pred=['0x1409a579c']
// BB 0x1409a57ec-0x1409a57f2 size=6 type=0 succ=['0x1409a57f2'] pred=['0x1409a5607']
// BB 0x1409a57f2-0x1409a5815 size=35 type=0 succ=['0x1409a5815'] pred=['0x1409a5632', '0x1409a57ec']
// BB 0x1409a5815-0x1409a583a size=37 type=0 succ=['0x1409a583a', '0x1409a5844'] pred=['0x1409a57f2']
// BB 0x1409a583a-0x1409a5844 size=10 type=0 succ=['0x1409a5844'] pred=['0x1409a5815']
// BB 0x1409a5844-0x1409a5861 size=29 type=0 succ=['0x1409a5861', '0x1409a6da5'] pred=['0x1409a5815', '0x1409a583a']
// BB 0x1409a5861-0x1409a58ae size=77 type=0 succ=['0x1409a58ae', '0x1409a6d90'] pred=['0x1409a5844']
// BB 0x1409a58ae-0x1409a58ea size=60 type=0 succ=['0x1409a58ea'] pred=['0x1409a5861']
// BB 0x1409a58ea-0x1409a590f size=37 type=0 succ=['0x1409a590f', '0x1409a5919'] pred=['0x1409a58ae']
// BB 0x1409a590f-0x1409a5919 size=10 type=0 succ=['0x1409a5919'] pred=['0x1409a58ea']
// BB 0x1409a5919-0x1409a5936 size=29 type=0 succ=['0x1409a5936', '0x1409a6d7b'] pred=['0x1409a58ea', '0x1409a590f']
// BB 0x1409a5936-0x1409a5974 size=62 type=0 succ=['0x1409a5974', '0x1409a6abc'] pred=['0x1409a5919']
// BB 0x1409a5974-0x1409a597a size=6 type=0 succ=['0x1409a597a', '0x1409a5df3'] pred=['0x1409a5936']
// BB 0x1409a597a-0x1409a599f size=37 type=0 succ=['0x1409a599f', '0x1409a6abf'] pred=['0x1409a5974']
// BB 0x1409a599f-0x1409a59c3 size=36 type=0 succ=['0x1409a5df9'] pred=['0x1409a597a']
// BB 0x1409a59c3-0x1409a59c8 size=5 type=0 succ=['0x1409a59c8'] pred=['0x1409a578f']
// BB 0x1409a59c8-0x1409a59eb size=35 type=0 succ=['0x1409a59eb'] pred=['0x1409a57c8', '0x1409a59c3']
// BB 0x1409a59eb-0x1409a5a0d size=34 type=0 succ=['0x1409a5a0d', '0x1409a5a17'] pred=['0x1409a59c8']
// BB 0x1409a5a0d-0x1409a5a17 size=10 type=0 succ=['0x1409a5a17'] pred=['0x1409a59eb']
// BB 0x1409a5a17-0x1409a5a34 size=29 type=0 succ=['0x1409a5a34', '0x1409a6de4'] pred=['0x1409a59eb', '0x1409a5a0d']
// BB 0x1409a5a34-0x1409a5a81 size=77 type=0 succ=['0x1409a5a81', '0x1409a6dcf'] pred=['0x1409a5a17']
// BB 0x1409a5a81-0x1409a5abd size=60 type=0 succ=['0x1409a5abd'] pred=['0x1409a5a34']
// BB 0x1409a5abd-0x1409a5adf size=34 type=0 succ=['0x1409a5adf', '0x1409a5ae9'] pred=['0x1409a5a81']
// BB 0x1409a5adf-0x1409a5ae9 size=10 type=0 succ=['0x1409a5ae9'] pred=['0x1409a5abd']
// BB 0x1409a5ae9-0x1409a5b06 size=29 type=0 succ=['0x1409a5b06', '0x1409a6dba'] pred=['0x1409a5abd', '0x1409a5adf']
// BB 0x1409a5b06-0x1409a5b44 size=62 type=0 succ=['0x1409a5b44', '0x1409a6ad7'] pred=['0x1409a5ae9']
// BB 0x1409a5b44-0x1409a5b4a size=6 type=0 succ=['0x1409a5b4a', '0x1409a5eee'] pred=['0x1409a5b06']
// BB 0x1409a5b4a-0x1409a5b76 size=44 type=0 succ=['0x1409a5b76', '0x1409a6ada'] pred=['0x1409a5b44']
// BB 0x1409a5b76-0x1409a5b9a size=36 type=0 succ=['0x1409a5ef3'] pred=['0x1409a5b4a']
// BB 0x1409a5b9a-0x1409a5ba0 size=6 type=0 succ=['0x1409a5ba0'] pred=['0x1409a546d']
// BB 0x1409a5ba0-0x1409a5bc3 size=35 type=0 succ=['0x1409a5bc3'] pred=['0x1409a5498', '0x1409a5b9a']
// BB 0x1409a5bc3-0x1409a5be8 size=37 type=0 succ=['0x1409a5be8', '0x1409a5bf2'] pred=['0x1409a5ba0']
// BB 0x1409a5be8-0x1409a5bf2 size=10 type=0 succ=['0x1409a5bf2'] pred=['0x1409a5bc3']
// BB 0x1409a5bf2-0x1409a5c0f size=29 type=0 succ=['0x1409a5c0f', '0x1409a6df9'] pred=['0x1409a5bc3', '0x1409a5be8']
// BB 0x1409a5c0f-0x1409a5c46 size=55 type=0 succ=['0x1409a5c46', '0x1409a6af2'] pred=['0x1409a5bf2']
// BB 0x1409a5c46-0x1409a5c71 size=43 type=0 succ=['0x1409a5c71', '0x1409a6af4'] pred=['0x1409a5c0f']
// BB 0x1409a5c71-0x1409a5ca6 size=53 type=0 succ=['0x1409a5ca6'] pred=['0x1409a5c46']
// BB 0x1409a5ca6-0x1409a5ccb size=37 type=0 succ=['0x1409a5ccb', '0x1409a5cd5'] pred=['0x1409a5c71']
// BB 0x1409a5ccb-0x1409a5cd5 size=10 type=0 succ=['0x1409a5cd5'] pred=['0x1409a5ca6']
// BB 0x1409a5cd5-0x1409a5d59 size=132 type=0 succ=['0x1409a5d59'] pred=['0x1409a5ca6', '0x1409a5ccb']
// BB 0x1409a5d59-0x1409a5d71 size=24 type=0 succ=['0x1409a5d71'] pred=['0x1409a5cd5']
// BB 0x1409a5d71-0x1409a5d9d size=44 type=0 succ=['0x1409a5d9d', '0x1409a6899'] pred=['0x1409a5d59']
// BB 0x1409a5d9d-0x1409a5da2 size=5 type=0 succ=['0x1409a5da2', '0x1409a5dbb'] pred=['0x1409a5d71']
// BB 0x1409a5da2-0x1409a5dbb size=25 type=0 succ=['0x1409a5dbb'] pred=['0x1409a5d9d', '0x1409a6899']
// BB 0x1409a5dbb-0x1409a5dce size=19 type=0 succ=['0x1409a5dce', '0x1409a5de1'] pred=['0x1409a5d9d', '0x1409a5da2']
// BB 0x1409a5dce-0x1409a5de1 size=19 type=0 succ=['0x1409a5de1'] pred=['0x1409a5dbb']
// BB 0x1409a5de1-0x1409a5df3 size=18 type=0 succ=['0x1409a67fb'] pred=['0x1409a5dbb', '0x1409a5dce']
// BB 0x1409a5df3-0x1409a5df9 size=6 type=0 succ=['0x1409a5df9'] pred=['0x1409a5974']
// BB 0x1409a5df9-0x1409a5e1c size=35 type=0 succ=['0x1409a5e1c'] pred=['0x1409a599f', '0x1409a5df3']
// BB 0x1409a5e1c-0x1409a5e41 size=37 type=0 succ=['0x1409a5e41', '0x1409a5e4b'] pred=['0x1409a5df9']
// BB 0x1409a5e41-0x1409a5e4b size=10 type=0 succ=['0x1409a5e4b'] pred=['0x1409a5e1c']
// BB 0x1409a5e4b-0x1409a5e68 size=29 type=0 succ=['0x1409a5e68', '0x1409a6e20'] pred=['0x1409a5e1c', '0x1409a5e41']
// BB 0x1409a5e68-0x1409a5e9f size=55 type=0 succ=['0x1409a5e9f', '0x1409a6b0c'] pred=['0x1409a5e4b']
// BB 0x1409a5e9f-0x1409a5ea5 size=6 type=0 succ=['0x1409a5ea5', '0x1409a5fec'] pred=['0x1409a5e68']
// BB 0x1409a5ea5-0x1409a5eca size=37 type=0 succ=['0x1409a5eca', '0x1409a6b0f'] pred=['0x1409a5e9f']
// BB 0x1409a5eca-0x1409a5eee size=36 type=0 succ=['0x1409a5ff2'] pred=['0x1409a5ea5']
// BB 0x1409a5eee-0x1409a5ef3 size=5 type=0 succ=['0x1409a5ef3'] pred=['0x1409a5b44']
// BB 0x1409a5ef3-0x1409a5f16 size=35 type=0 succ=['0x1409a5f16'] pred=['0x1409a5b76', '0x1409a5eee']
// BB 0x1409a5f16-0x1409a5f38 size=34 type=0 succ=['0x1409a5f38', '0x1409a5f42'] pred=['0x1409a5ef3']
// BB 0x1409a5f38-0x1409a5f42 size=10 type=0 succ=['0x1409a5f42'] pred=['0x1409a5f16']
// BB 0x1409a5f42-0x1409a5f5f size=29 type=0 succ=['0x1409a5f5f', '0x1409a6e0e'] pred=['0x1409a5f16', '0x1409a5f38']
// BB 0x1409a5f5f-0x1409a5f96 size=55 type=0 succ=['0x1409a5f96', '0x1409a6b27'] pred=['0x1409a5f42']
// BB 0x1409a5f96-0x1409a5f9c size=6 type=0 succ=['0x1409a5f9c', '0x1409a6109'] pred=['0x1409a5f5f']
// BB 0x1409a5f9c-0x1409a5fc8 size=44 type=0 succ=['0x1409a5fc8', '0x1409a6b2a'] pred=['0x1409a5f96']
// BB 0x1409a5fc8-0x1409a5fec size=36 type=0 succ=['0x1409a610e'] pred=['0x1409a5f9c']
// BB 0x1409a5fec-0x1409a5ff2 size=6 type=0 succ=['0x1409a5ff2'] pred=['0x1409a5e9f']
// BB 0x1409a5ff2-0x1409a6015 size=35 type=0 succ=['0x1409a6015'] pred=['0x1409a5eca', '0x1409a5fec']
// BB 0x1409a6015-0x1409a603a size=37 type=0 succ=['0x1409a603a', '0x1409a6044'] pred=['0x1409a5ff2']
// BB 0x1409a603a-0x1409a6044 size=10 type=0 succ=['0x1409a6044'] pred=['0x1409a6015']
// BB 0x1409a6044-0x1409a6061 size=29 type=0 succ=['0x1409a6061', '0x1409a6e8c'] pred=['0x1409a6015', '0x1409a603a']
// BB 0x1409a6061-0x1409a60d5 size=116 type=0 succ=['0x1409a60d5', '0x1409a60df'] pred=['0x1409a6044']
// BB 0x1409a60d5-0x1409a60df size=10 type=0 succ=['0x1409a60df'] pred=['0x1409a6061']
// BB 0x1409a60df-0x1409a6109 size=42 type=0 succ=['0x1409a6491'] pred=['0x1409a6061', '0x1409a60d5']
// BB 0x1409a6109-0x1409a610e size=5 type=0 succ=['0x1409a610e'] pred=['0x1409a5f96']
// BB 0x1409a610e-0x1409a6131 size=35 type=0 succ=['0x1409a6131'] pred=['0x1409a5fc8', '0x1409a6109']
// BB 0x1409a6131-0x1409a6153 size=34 type=0 succ=['0x1409a6153', '0x1409a615d'] pred=['0x1409a610e']
// BB 0x1409a6153-0x1409a615d size=10 type=0 succ=['0x1409a615d'] pred=['0x1409a6131']
// BB 0x1409a615d-0x1409a617a size=29 type=0 succ=['0x1409a617a', '0x1409a6e7a'] pred=['0x1409a6131', '0x1409a6153']
// BB 0x1409a617a-0x1409a61f2 size=120 type=0 succ=['0x1409a61f2', '0x1409a61fc'] pred=['0x1409a615d']
// BB 0x1409a61f2-0x1409a61fc size=10 type=0 succ=['0x1409a61fc'] pred=['0x1409a617a']
// BB 0x1409a61fc-0x1409a6229 size=45 type=0 succ=['0x1409a6229', '0x1409a643b'] pred=['0x1409a617a', '0x1409a61f2']
// BB 0x1409a6229-0x1409a623d size=20 type=0 succ=['0x1409a623d'] pred=['0x1409a61fc']
// BB 0x1409a623d-0x1409a6268 size=43 type=0 succ=['0x1409a6268'] pred=['0x1409a6229']
// BB 0x1409a6268-0x1409a628a size=34 type=0 succ=['0x1409a628a', '0x1409a630c'] pred=['0x1409a623d', '0x1409a631a']
// BB 0x1409a628a-0x1409a62a0 size=22 type=0 succ=['0x1409a62a0'] pred=['0x1409a6268']
// BB 0x1409a62a0-0x1409a62c4 size=36 type=0 succ=['0x1409a62c4', '0x1409a62e8'] pred=['0x1409a628a', '0x1409a62e8']
// BB 0x1409a62c4-0x1409a62e8 size=36 type=0 succ=['0x1409a62e8', '0x1409a632a'] pred=['0x1409a62a0']
// BB 0x1409a62e8-0x1409a630c size=36 type=0 succ=['0x1409a62a0', '0x1409a630c'] pred=['0x1409a62a0', '0x1409a62c4']
// BB 0x1409a630c-0x1409a631a size=14 type=0 succ=['0x1409a631a', '0x1409a6383'] pred=['0x1409a6268', '0x1409a62e8']
// BB 0x1409a631a-0x1409a632a size=16 type=0 succ=['0x1409a6268'] pred=['0x1409a630c']
// BB 0x1409a632a-0x1409a633a size=16 type=0 succ=['0x1409a633a', '0x1409a6426'] pred=['0x1409a62c4']
// BB 0x1409a633a-0x1409a6352 size=24 type=0 succ=['0x1409a6352', '0x1409a6426'] pred=['0x1409a632a']
// BB 0x1409a6352-0x1409a635b size=9 type=0 succ=['0x1409a635b', '0x1409a6b42'] pred=['0x1409a633a']
// BB 0x1409a635b-0x1409a635d size=2 type=0 succ=['0x1409a635d', '0x1409a6396'] pred=['0x1409a6352']
// BB 0x1409a635d-0x1409a637e size=33 type=0 succ=['0x1409a637e', '0x1409a639f'] pred=['0x1409a635b']
// BB 0x1409a637e-0x1409a6383 size=5 type=0 succ=['0x1409a6e9e'] pred=['0x1409a635d']
// BB 0x1409a6383-0x1409a6396 size=19 type=0 succ=['0x1409a643b'] pred=['0x1409a630c']
// BB 0x1409a6396-0x1409a639f size=9 type=0 succ=['0x1409a639f'] pred=['0x1409a635b']
// BB 0x1409a639f-0x1409a63a4 size=5 type=0 succ=['0x1409a63a4', '0x1409a63b3'] pred=['0x1409a635d', '0x1409a6396']
// BB 0x1409a63a4-0x1409a63b3 size=15 type=0 succ=['0x1409a63b3'] pred=['0x1409a639f']
// BB 0x1409a63b3-0x1409a63da size=39 type=0 succ=['0x1409a63da'] pred=['0x1409a639f', '0x1409a63a4']
// BB 0x1409a63da-0x1409a63f9 size=31 type=0 succ=['0x1409a63f9'] pred=['0x1409a63b3']
// BB 0x1409a63f9-0x1409a6426 size=45 type=0 succ=['0x1409a6426'] pred=['0x1409a63da']
// BB 0x1409a6426-0x1409a643b size=21 type=0 succ=['0x1409a643b'] pred=['0x1409a632a', '0x1409a633a', '0x1409a63f9']
// BB 0x1409a643b-0x1409a6491 size=86 type=0 succ=['0x1409a6491'] pred=['0x1409a61fc', '0x1409a6383', '0x1409a6426']
// BB 0x1409a6491-0x1409a64be size=45 type=0 succ=['0x1409a64be', '0x1409a6e68'] pred=['0x1409a60df', '0x1409a643b']
// BB 0x1409a64be-0x1409a6505 size=71 type=0 succ=['0x1409a6505', '0x1409a6e56'] pred=['0x1409a6491']
// BB 0x1409a6505-0x1409a6540 size=59 type=0 succ=['0x1409a6540'] pred=['0x1409a64be']
// BB 0x1409a6540-0x1409a6562 size=34 type=0 succ=['0x1409a6562', '0x1409a656c'] pred=['0x1409a6505']
// BB 0x1409a6562-0x1409a656c size=10 type=0 succ=['0x1409a656c'] pred=['0x1409a6540']
// BB 0x1409a656c-0x1409a6589 size=29 type=0 succ=['0x1409a6589', '0x1409a6e44'] pred=['0x1409a6540', '0x1409a6562']
// BB 0x1409a6589-0x1409a65ff size=118 type=0 succ=['0x1409a65ff', '0x1409a6609'] pred=['0x1409a656c']
// BB 0x1409a65ff-0x1409a6609 size=10 type=0 succ=['0x1409a6609'] pred=['0x1409a6589']
// BB 0x1409a6609-0x1409a6626 size=29 type=0 succ=['0x1409a6626', '0x1409a6e32'] pred=['0x1409a6589', '0x1409a65ff']
// BB 0x1409a6626-0x1409a6650 size=42 type=0 succ=['0x1409a6650'] pred=['0x1409a6609']
// BB 0x1409a6650-0x1409a6671 size=33 type=0 succ=['0x1409a6671', '0x1409a6c1f'] pred=['0x1409a6626']
// BB 0x1409a6671-0x1409a66ba size=73 type=0 succ=['0x1409a66ba', '0x1409a66c7'] pred=['0x1409a6650']
// BB 0x1409a66ba-0x1409a66c7 size=13 type=0 succ=['0x1409a66c7'] pred=['0x1409a6671']
// BB 0x1409a66c7-0x1409a673f size=120 type=0 succ=['0x1409a673f'] pred=['0x1409a6671', '0x1409a66ba']
// BB 0x1409a673f-0x1409a6757 size=24 type=0 succ=['0x1409a6757'] pred=['0x1409a66c7']
// BB 0x1409a6757-0x1409a6783 size=44 type=0 succ=['0x1409a6783', '0x1409a6856'] pred=['0x1409a673f']
// BB 0x1409a6783-0x1409a6788 size=5 type=0 succ=['0x1409a6788', '0x1409a67a1'] pred=['0x1409a6757']
// BB 0x1409a6788-0x1409a67a1 size=25 type=0 succ=['0x1409a67a1'] pred=['0x1409a6783', '0x1409a6856']
// BB 0x1409a67a1-0x1409a67b4 size=19 type=0 succ=['0x1409a67b4', '0x1409a67c7'] pred=['0x1409a6783', '0x1409a6788']
// BB 0x1409a67b4-0x1409a67c7 size=19 type=0 succ=['0x1409a67c7'] pred=['0x1409a67a1']
// BB 0x1409a67c7-0x1409a67d4 size=13 type=0 succ=['0x1409a67d4'] pred=['0x1409a67a1', '0x1409a67b4']
// BB 0x1409a67d4-0x1409a67fb size=39 type=0 succ=['0x1409a5230', '0x1409a67fb'] pred=['0x1409a67c7']
// BB 0x1409a67fb-0x1409a67ff size=4 type=0 succ=['0x1409a67ff'] pred=['0x1409a5222', '0x1409a5de1', '0x1409a67d4']
// BB 0x1409a67ff-0x1409a681d size=30 type=0 succ=['0x1409a48bc', '0x1409a681d'] pred=['0x1409a5230', '0x1409a5257', '0x1409a54bc', '0x1409a67fb']
// BB 0x1409a681d-0x1409a6822 size=5 type=0 succ=['0x1409a68dc'] pred=['0x1409a67ff']
// BB 0x1409a6822-0x1409a6856 size=52 type=0 succ=['0x1409a5257'] pred=['0x1409a523c']
// BB 0x1409a6856-0x1409a6899 size=67 type=0 succ=['0x1409a6788'] pred=['0x1409a6757']
// BB 0x1409a6899-0x1409a68dc size=67 type=0 succ=['0x1409a5da2'] pred=['0x1409a5d71']
// BB 0x1409a68dc-0x1409a68fa size=30 type=0 succ=['0x1409a68fa', '0x1409a69f2'] pred=['0x1409a4845', '0x1409a4867', '0x1409a4870', '0x1409a681d']
// BB 0x1409a68fa-0x1409a6903 size=9 type=0 succ=['0x1409a6903', '0x1409a69f2'] pred=['0x1409a68dc']
// BB 0x1409a6903-0x1409a6910 size=13 type=0 succ=['0x1409a6910', '0x1409a69f2'] pred=['0x1409a68fa']
// BB 0x1409a6910-0x1409a6959 size=73 type=0 succ=['0x1409a6959', '0x1409a698b'] pred=['0x1409a6903']
// BB 0x1409a6959-0x1409a695c size=3 type=0 succ=['0x1409a695c'] pred=['0x1409a6910']
// BB 0x1409a695c-0x1409a6967 size=11 type=4 succ=[] pred=['0x1409a6959', '0x1409a698b']
// BB 0x1409a6968-0x1409a696d size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a696d-0x1409a6985 size=24 type=4 succ=[] pred=['0x1409a4ee9', '0x1409a4f7b']
// BB 0x1409a6986-0x1409a698b size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a698b-0x1409a69a8 size=29 type=0 succ=['0x1409a695c', '0x1409a69a8'] pred=['0x1409a6910']
// BB 0x1409a69a8-0x1409a69c6 size=30 type=0 succ=['0x1409a69c6', '0x1409a69dd'] pred=['0x1409a698b']
// BB 0x1409a69c6-0x1409a69cb size=5 type=0 succ=['0x1409a69cb', '0x1409a69dd'] pred=['0x1409a69a8']
// BB 0x1409a69cb-0x1409a69dd size=18 type=0 succ=['0x1409a69dd'] pred=['0x1409a69c6']
// BB 0x1409a69dd-0x1409a69f2 size=21 type=0 succ=['0x1409a69f2'] pred=['0x1409a69a8', '0x1409a69c6', '0x1409a69cb']
// BB 0x1409a69f2-0x1409a69fc size=10 type=0 succ=['0x1409a69fc'] pred=['0x1409a68dc', '0x1409a68fa', '0x1409a6903', '0x1409a69dd']
// BB 0x1409a69fc-0x1409a6a43 size=71 type=2 succ=[] pred=['0x1409a4461', '0x1409a447f', '0x1409a4488', '0x1409a69f2']
// BB 0x1409a6a43-0x1409a6a46 size=3 type=0 succ=['0x1409a6a46'] pred=['0x1409a4fb5']
// BB 0x1409a6a46-0x1409a6a51 size=11 type=4 succ=[] pred=['0x1409a6a43', '0x1409a6d16']
// BB 0x1409a6a52-0x1409a6a57 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6a57-0x1409a6a59 size=2 type=0 succ=['0x1409a6a59'] pred=['0x1409a503e']
// BB 0x1409a6a59-0x1409a6a65 size=12 type=4 succ=[] pred=['0x1409a6a57', '0x1409a6d72']
// BB 0x1409a6a66-0x1409a6a6b size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6a6b-0x1409a6a6e size=3 type=0 succ=['0x1409a6a6e'] pred=['0x1409a55d1']
// BB 0x1409a6a6e-0x1409a6a75 size=7 type=0 succ=['0x1409a6a75'] pred=['0x1409a560d', '0x1409a6a6b']
// BB 0x1409a6a75-0x1409a6a80 size=11 type=4 succ=[] pred=['0x1409a6a6e']
// BB 0x1409a6a81-0x1409a6a86 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6a86-0x1409a6a89 size=3 type=0 succ=['0x1409a6a89'] pred=['0x1409a5755']
// BB 0x1409a6a89-0x1409a6a90 size=7 type=0 succ=['0x1409a6a90'] pred=['0x1409a579c', '0x1409a6a86']
// BB 0x1409a6a90-0x1409a6a9b size=11 type=4 succ=[] pred=['0x1409a6a89']
// BB 0x1409a6a9c-0x1409a6aa1 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6aa1-0x1409a6aa4 size=3 type=0 succ=['0x1409a6aa4'] pred=['0x1409a542f']
// BB 0x1409a6aa4-0x1409a6aab size=7 type=0 succ=['0x1409a6aab'] pred=['0x1409a5473', '0x1409a6aa1']
// BB 0x1409a6aab-0x1409a6ab6 size=11 type=4 succ=[] pred=['0x1409a6aa4']
// BB 0x1409a6ab7-0x1409a6abc size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6abc-0x1409a6abf size=3 type=0 succ=['0x1409a6abf'] pred=['0x1409a5936']
// BB 0x1409a6abf-0x1409a6ac6 size=7 type=0 succ=['0x1409a6ac6'] pred=['0x1409a597a', '0x1409a6abc']
// BB 0x1409a6ac6-0x1409a6ad1 size=11 type=4 succ=[] pred=['0x1409a6abf']
// BB 0x1409a6ad2-0x1409a6ad7 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6ad7-0x1409a6ada size=3 type=0 succ=['0x1409a6ada'] pred=['0x1409a5b06']
// BB 0x1409a6ada-0x1409a6ae1 size=7 type=0 succ=['0x1409a6ae1'] pred=['0x1409a5b4a', '0x1409a6ad7']
// BB 0x1409a6ae1-0x1409a6aec size=11 type=4 succ=[] pred=['0x1409a6ada']
// BB 0x1409a6aed-0x1409a6af2 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6af2-0x1409a6af4 size=2 type=0 succ=['0x1409a6af4'] pred=['0x1409a5c0f']
// BB 0x1409a6af4-0x1409a6afb size=7 type=0 succ=['0x1409a6afb'] pred=['0x1409a5c46', '0x1409a6af2']
// BB 0x1409a6afb-0x1409a6b06 size=11 type=4 succ=[] pred=['0x1409a6af4']
// BB 0x1409a6b07-0x1409a6b0c size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6b0c-0x1409a6b0f size=3 type=0 succ=['0x1409a6b0f'] pred=['0x1409a5e68']
// BB 0x1409a6b0f-0x1409a6b16 size=7 type=0 succ=['0x1409a6b16'] pred=['0x1409a5ea5', '0x1409a6b0c']
// BB 0x1409a6b16-0x1409a6b21 size=11 type=4 succ=[] pred=['0x1409a6b0f']
// BB 0x1409a6b22-0x1409a6b27 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6b27-0x1409a6b2a size=3 type=0 succ=['0x1409a6b2a'] pred=['0x1409a5f5f']
// BB 0x1409a6b2a-0x1409a6b31 size=7 type=0 succ=['0x1409a6b31'] pred=['0x1409a5f9c', '0x1409a6b27']
// BB 0x1409a6b31-0x1409a6b3c size=11 type=4 succ=[] pred=['0x1409a6b2a']
// BB 0x1409a6b3d-0x1409a6b42 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6b42-0x1409a6b45 size=3 type=0 succ=['0x1409a6b45'] pred=['0x1409a6352']
// BB 0x1409a6b45-0x1409a6b51 size=12 type=4 succ=[] pred=['0x1409a6b42', '0x1409a6e9e']
// BB 0x1409a6b52-0x1409a6b57 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6b57-0x1409a6b82 size=43 type=4 succ=[] pred=['0x1409a4c44']
// BB 0x1409a6b83-0x1409a6b88 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6b88-0x1409a6bb3 size=43 type=4 succ=[] pred=['0x1409a5137']
// BB 0x1409a6bb4-0x1409a6bb9 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6bb9-0x1409a6bc5 size=12 type=4 succ=[] pred=['0x1409a4577']
// BB 0x1409a6bc6-0x1409a6bcb size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6bcb-0x1409a6bec size=33 type=0 succ=['0x1409a46e0'] pred=['0x1409a46cc']
// BB 0x1409a6bec-0x1409a6c0d size=33 type=0 succ=['0x1409a474a'] pred=['0x1409a4736']
// BB 0x1409a6c0d-0x1409a6c19 size=12 type=4 succ=[] pred=['0x1409a49d1']
// BB 0x1409a6c1a-0x1409a6c1f size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6c1f-0x1409a6c2a size=11 type=0 succ=['0x1409a6c2a'] pred=['0x1409a6650']
// BB 0x1409a6c2a-0x1409a6c52 size=40 type=4 succ=[] pred=['0x1409a6c1f']
// BB 0x1409a6c53-0x1409a6c58 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6c58-0x1409a6c72 size=26 type=4 succ=[] pred=['0x1409a4c89', '0x1409a4c8e']
// BB 0x1409a6c73-0x1409a6c78 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6c78-0x1409a6c92 size=26 type=4 succ=[] pred=['0x1409a517c', '0x1409a5181']
// BB 0x1409a6c93-0x1409a6c98 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6c98-0x1409a6ca7 size=15 type=4 succ=[] pred=['0x1409a5738']
// BB 0x1409a6ca8-0x1409a6cad size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6cad-0x1409a6cbc size=15 type=4 succ=[] pred=['0x1409a5683']
// BB 0x1409a6cbd-0x1409a6cc2 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6cc2-0x1409a6cd1 size=15 type=4 succ=[] pred=['0x1409a5656']
// BB 0x1409a6cd2-0x1409a6cd7 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6cd7-0x1409a6ce6 size=15 type=4 succ=[] pred=['0x1409a55b4']
// BB 0x1409a6ce7-0x1409a6cec size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6cec-0x1409a6cfb size=15 type=4 succ=[] pred=['0x1409a550e']
// BB 0x1409a6cfc-0x1409a6d01 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d01-0x1409a6d10 size=15 type=4 succ=[] pred=['0x1409a54db']
// BB 0x1409a6d11-0x1409a6d16 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d16-0x1409a6d1e size=8 type=0 succ=['0x1409a6a46'] pred=['0x1409a4fc5']
// BB 0x1409a6d1e-0x1409a6d2d size=15 type=4 succ=[] pred=['0x1409a5412']
// BB 0x1409a6d2e-0x1409a6d33 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d33-0x1409a6d42 size=15 type=4 succ=[] pred=['0x1409a5372']
// BB 0x1409a6d43-0x1409a6d48 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d48-0x1409a6d57 size=15 type=4 succ=[] pred=['0x1409a52b0']
// BB 0x1409a6d58-0x1409a6d5d size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d5d-0x1409a6d6c size=15 type=4 succ=[] pred=['0x1409a527d']
// BB 0x1409a6d6d-0x1409a6d72 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d72-0x1409a6d7b size=9 type=0 succ=['0x1409a6a59'] pred=['0x1409a5047']
// BB 0x1409a6d7b-0x1409a6d8a size=15 type=4 succ=[] pred=['0x1409a5919']
// BB 0x1409a6d8b-0x1409a6d90 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6d90-0x1409a6d9f size=15 type=4 succ=[] pred=['0x1409a5861']
// BB 0x1409a6da0-0x1409a6da5 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6da5-0x1409a6db4 size=15 type=4 succ=[] pred=['0x1409a5844']
// BB 0x1409a6db5-0x1409a6dba size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6dba-0x1409a6dc9 size=15 type=4 succ=[] pred=['0x1409a5ae9']
// BB 0x1409a6dca-0x1409a6dcf size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6dcf-0x1409a6dde size=15 type=4 succ=[] pred=['0x1409a5a34']
// BB 0x1409a6ddf-0x1409a6de4 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6de4-0x1409a6df3 size=15 type=4 succ=[] pred=['0x1409a5a17']
// BB 0x1409a6df4-0x1409a6df9 size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6df9-0x1409a6e08 size=15 type=4 succ=[] pred=['0x1409a5bf2']
// BB 0x1409a6e09-0x1409a6e0e size=5 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e0e-0x1409a6e1d size=15 type=4 succ=[] pred=['0x1409a5f42']
// BB 0x1409a6e1e-0x1409a6e20 size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e20-0x1409a6e2f size=15 type=4 succ=[] pred=['0x1409a5e4b']
// BB 0x1409a6e30-0x1409a6e32 size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e32-0x1409a6e41 size=15 type=4 succ=[] pred=['0x1409a6609']
// BB 0x1409a6e42-0x1409a6e44 size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e44-0x1409a6e53 size=15 type=4 succ=[] pred=['0x1409a656c']
// BB 0x1409a6e54-0x1409a6e56 size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e56-0x1409a6e65 size=15 type=4 succ=[] pred=['0x1409a64be']
// BB 0x1409a6e66-0x1409a6e68 size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e68-0x1409a6e77 size=15 type=4 succ=[] pred=['0x1409a6491']
// BB 0x1409a6e78-0x1409a6e7a size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e7a-0x1409a6e89 size=15 type=4 succ=[] pred=['0x1409a615d']
// BB 0x1409a6e8a-0x1409a6e8c size=2 type=0 succ=['0x1409a6e9c'] pred=[]
// BB 0x1409a6e8c-0x1409a6e9b size=15 type=4 succ=[] pred=['0x1409a6044']
// BB 0x1409a6e9c-0x1409a6e9e size=2 type=0 succ=[] pred=['0x1409a4296', '0x1409a6968', '0x1409a6986', '0x1409a6a52', '0x1409a6a66', '0x1409a6a81', '0x1409a6a9c', '0x1409a6ab7', '0x1409a6ad2', '0x1409a6aed', '0x1409a6b07', '0x1409a6b22', '0x1409a6b3d', '0x1409a6b52', '0x1409a6b83', '0x1409a6bb4', '0x1409a6bc6', '0x1409a6c1a', '0x1409a6c53', '0x1409a6c73', '0x1409a6c93', '0x1409a6ca8', '0x1409a6cbd', '0x1409a6cd2', '0x1409a6ce7', '0x1409a6cfc', '0x1409a6d11', '0x1409a6d2e', '0x1409a6d43', '0x1409a6d58', '0x1409a6d6d', '0x1409a6d8b', '0x1409a6da0', '0x1409a6db5', '0x1409a6dca', '0x1409a6ddf', '0x1409a6df4', '0x1409a6e09', '0x1409a6e1e', '0x1409a6e30', '0x1409a6e42', '0x1409a6e54', '0x1409a6e66', '0x1409a6e78', '0x1409a6e8a']
// BB 0x1409a6e9e-0x1409a6ea7 size=9 type=0 succ=['0x1409a6b45'] pred=['0x1409a637e']

// --- full disassembly ---
/*1409a41b0*/ sub_1409A41B0: push rbp
/*1409a41b1*/  push r15
/*1409a41b3*/  push r14
/*1409a41b5*/  push r13
/*1409a41b7*/  push r12
/*1409a41b9*/  push rsi
/*1409a41ba*/  push rdi
/*1409a41bb*/  push rbx
/*1409a41bc*/  sub rsp, 2D8h
/*1409a41c3*/  lea rbp, [rsp+80h]
/*1409a41cb*/  movdqa [rbp+290h+var_50], xmm9
/*1409a41d4*/  movdqa [rbp+290h+var_60], xmm8
/*1409a41dd*/  movdqa [rbp+290h+var_70], xmm7
/*1409a41e5*/  movaps [rbp+290h+var_80], xmm6
/*1409a41ec*/  mov [rbp+290h+var_88], 0FFFFFFFFFFFFFFFEh
/*1409a41f7*/  mov rbx, r8
/*1409a41fa*/  mov rdi, rdx
/*1409a41fd*/  mov rsi, rcx
/*1409a4200*/  mov qword ptr [rbp+290h+var_180], 0
/*1409a420b*/  mov qword ptr [rbp+290h+var_180+8], 1
/*1409a4216*/  mov [rbp+290h+var_170], 0
/*1409a4221*/ loc_1409A4221: lea rdx, [rbp+290h+var_180]
/*1409a4228*/  mov rcx, rdi
/*1409a422b*/  call sub_1409A8410
/*1409a4230*/  nop
/*1409a4231*/  lea rcx, aModel_6; "model"
/*1409a4238*/  mov edx, 5
/*1409a423d*/  mov r8, rbx
/*1409a4240*/  call sub_141433D50
/*1409a4245*/  nop
/*1409a4246*/  test rax, rax
/*1409a4249*/  jz loc_1409A42ED
/*1409a424f*/  cmp byte ptr [rax], 3
/*1409a4252*/  jnz loc_1409A42ED
/*1409a4258*/  mov r14, [rax+18h]
/*1409a425c*/  test r14, r14
/*1409a425f*/  jz loc_1409A42ED
/*1409a4265*/  mov r15, [rax+10h]
/*1409a4269*/  cmp [rdi+20h], r14
/*1409a426d*/  jnz short loc_1409A4282
/*1409a426f*/  mov rcx, [rdi+18h]
/*1409a4273*/  mov rdx, r15
/*1409a4276*/  mov r8, r14
/*1409a4279*/  call sub_1416847B0
/*1409a427e*/  test eax, eax
/*1409a4280*/  jz short loc_1409A42ED
/*1409a4282*/ loc_1409A4282: test r14, r14
/*1409a4285*/  jns short loc_1409A429B
/*1409a4287*/  xor r13d, r13d
/*1409a428a*/ loc_1409A428A: mov rcx, r13
/*1409a428d*/  mov rdx, r14
/*1409a4290*/  call sub_1416C2D4B
/*1409a4296*/ loc_1409A4296: jmp loc_1409A6E9C
/*1409a429b*/ loc_1409A429B: call nullsub_1
/*1409a42a0*/  mov r13d, 1
/*1409a42a6*/  mov edx, 1
/*1409a42ab*/  mov rcx, r14
/*1409a42ae*/  call sub_140001650
/*1409a42b3*/  test rax, rax
/*1409a42b6*/  jz short loc_1409A428A
/*1409a42b8*/  mov r12, rax
/*1409a42bb*/  mov rcx, rax
/*1409a42be*/  mov rdx, r15
/*1409a42c1*/  mov r8, r14
/*1409a42c4*/  call sub_141684120
/*1409a42c9*/  mov rdx, [rdi+10h]
/*1409a42cd*/  test rdx, rdx
/*1409a42d0*/  jz short loc_1409A42E1
/*1409a42d2*/  mov rcx, [rdi+18h]
/*1409a42d6*/  mov r8d, 1
/*1409a42dc*/  call sub_140001660
/*1409a42e1*/ loc_1409A42E1: mov [rdi+10h], r14
/*1409a42e5*/  mov [rdi+18h], r12
/*1409a42e9*/  mov [rdi+20h], r14
/*1409a42ed*/ loc_1409A42ED: lea rcx, aUsage_2; "usage"
/*1409a42f4*/  mov edx, 5
/*1409a42f9*/  mov r8, rbx
/*1409a42fc*/  call sub_141433D50
/*1409a4301*/  nop
/*1409a4302*/  mov r14, rax
/*1409a4305*/  test rax, rax
/*1409a4308*/  jz loc_1409A4461
/*1409a430e*/  lea rcx, aPromptTokens; "prompt_tokens"
/*1409a4315*/  mov edx, 0Dh
/*1409a431a*/  mov r8, r14
/*1409a431d*/  call sub_141433D50
/*1409a4322*/  nop
/*1409a4323*/  test rax, rax
/*1409a4326*/  jz short loc_1409A4346
/*1409a4328*/  cmp byte ptr [rax], 2
/*1409a432b*/  jnz short loc_1409A4346
/*1409a432d*/  mov rcx, [rax+8]
/*1409a4331*/  test rcx, rcx
/*1409a4334*/  jz short loc_1409A433D
/*1409a4336*/  cmp ecx, 1
/*1409a4339*/  jz short loc_1409A4373
/*1409a433b*/  jmp short loc_1409A4346
/*1409a433d*/ loc_1409A433D: mov rax, [rax+10h]
/*1409a4341*/  test rax, rax
/*1409a4344*/  jns short loc_1409A4382
/*1409a4346*/ loc_1409A4346: lea rcx, aInputTokens_0; "input_tokens"
/*1409a434d*/  mov edx, 0Ch
/*1409a4352*/  mov r8, r14
/*1409a4355*/  call sub_141433D50
/*1409a435a*/  nop
/*1409a435b*/  test rax, rax
/*1409a435e*/  jz short loc_1409A4390
/*1409a4360*/  cmp byte ptr [rax], 2
/*1409a4363*/  jnz short loc_1409A4390
/*1409a4365*/  mov rcx, [rax+8]
/*1409a4369*/  test rcx, rcx
/*1409a436c*/  jz short loc_1409A4379
/*1409a436e*/  cmp ecx, 1
/*1409a4371*/  jnz short loc_1409A4390
/*1409a4373*/ loc_1409A4373: mov rax, [rax+10h]
/*1409a4377*/  jmp short loc_1409A4382
/*1409a4379*/ loc_1409A4379: mov rax, [rax+10h]
/*1409a437d*/  test rax, rax
/*1409a4380*/  js short loc_1409A4390
/*1409a4382*/ loc_1409A4382: mov [rdi+198h], rax
/*1409a4389*/  mov byte ptr [rdi+1AEh], 1
/*1409a4390*/ loc_1409A4390: lea rcx, aCompletionToke; "completion_tokens"
/*1409a4397*/  mov edx, 11h
/*1409a439c*/  mov r8, r14
/*1409a439f*/  call sub_141433D50
/*1409a43a4*/  nop
/*1409a43a5*/  test rax, rax
/*1409a43a8*/  jz short loc_1409A43C8
/*1409a43aa*/  cmp byte ptr [rax], 2
/*1409a43ad*/  jnz short loc_1409A43C8
/*1409a43af*/  mov rcx, [rax+8]
/*1409a43b3*/  test rcx, rcx
/*1409a43b6*/  jz short loc_1409A43BF
/*1409a43b8*/  cmp ecx, 1
/*1409a43bb*/  jz short loc_1409A43F5
/*1409a43bd*/  jmp short loc_1409A43C8
/*1409a43bf*/ loc_1409A43BF: mov rax, [rax+10h]
/*1409a43c3*/  test rax, rax
/*1409a43c6*/  jns short loc_1409A4404
/*1409a43c8*/ loc_1409A43C8: lea rcx, aOutputTokens_0; "output_tokens"
/*1409a43cf*/  mov edx, 0Dh
/*1409a43d4*/  mov r8, r14
/*1409a43d7*/  call sub_141433D50
/*1409a43dc*/  nop
/*1409a43dd*/  test rax, rax
/*1409a43e0*/  jz short loc_1409A4412
/*1409a43e2*/  cmp byte ptr [rax], 2
/*1409a43e5*/  jnz short loc_1409A4412
/*1409a43e7*/  mov rcx, [rax+8]
/*1409a43eb*/  test rcx, rcx
/*1409a43ee*/  jz short loc_1409A43FB
/*1409a43f0*/  cmp ecx, 1
/*1409a43f3*/  jnz short loc_1409A4412
/*1409a43f5*/ loc_1409A43F5: mov rax, [rax+10h]
/*1409a43f9*/  jmp short loc_1409A4404
/*1409a43fb*/ loc_1409A43FB: mov rax, [rax+10h]
/*1409a43ff*/  test rax, rax
/*1409a4402*/  js short loc_1409A4412
/*1409a4404*/ loc_1409A4404: mov [rdi+1A0h], rax
/*1409a440b*/  mov byte ptr [rdi+1AEh], 1
/*1409a4412*/ loc_1409A4412: lea rcx, aTotalTokens_0; "total_tokens"
/*1409a4419*/  mov edx, 0Ch
/*1409a441e*/  mov r8, r14
/*1409a4421*/  call sub_141433D50
/*1409a4426*/  nop
/*1409a4427*/  test rax, rax
/*1409a442a*/  jz short loc_1409A4461
/*1409a442c*/  cmp byte ptr [rax], 2
/*1409a442f*/  jnz short loc_1409A4461
/*1409a4431*/  mov rcx, [rax+8]
/*1409a4435*/  cmp rcx, 2
/*1409a4439*/  jz short loc_1409A4461
/*1409a443b*/  cmp ecx, 1
/*1409a443e*/  jnz short loc_1409A4446
/*1409a4440*/  mov rax, [rax+10h]
/*1409a4444*/  jmp short loc_1409A444F
/*1409a4446*/ loc_1409A4446: mov rax, [rax+10h]
/*1409a444a*/  test rax, rax
/*1409a444d*/  js short loc_1409A4461
/*1409a444f*/ loc_1409A444F: mov qword ptr [rdi], 1
/*1409a4456*/  mov [rdi+8], rax
/*1409a445a*/  mov byte ptr [rdi+1AEh], 1
/*1409a4461*/ loc_1409A4461: lea rcx, aChoices_1; "choices"
/*1409a4468*/  mov edx, 7
/*1409a446d*/  mov r8, rbx
/*1409a4470*/  call sub_141433D50
/*1409a4475*/  nop
/*1409a4476*/  test rax, rax
/*1409a4479*/  jz loc_1409A69FC
/*1409a447f*/  cmp byte ptr [rax], 4
/*1409a4482*/  jnz loc_1409A69FC
/*1409a4488*/  cmp qword ptr [rax+18h], 0
/*1409a448d*/  jz loc_1409A69FC
/*1409a4493*/  mov r15, [rax+10h]
/*1409a4497*/  lea rcx, aDelta_2; "delta"
/*1409a449e*/  mov edx, 5
/*1409a44a3*/  mov r8, r15
/*1409a44a6*/  call sub_141433D50
/*1409a44ab*/  nop
/*1409a44ac*/  test rax, rax
/*1409a44af*/  jz short loc_1409A44E0
/*1409a44b1*/  movzx ecx, byte ptr [rax]
/*1409a44b4*/  lea rdx, jpt_1409A44C2
/*1409a44bb*/  movsxd rcx, ds:(jpt_1409A44C2 - 1417AA614h)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409a44bf*/  add rcx, rdx
/*1409a44c2*/  jmp rcx; switch jump  // switch jump
/*1409a44c4*/ loc_1409A44C4: movups xmm0, xmmword ptr [rax]; jumptable 00000001409A44C2 cases 1,2  // jumptable 00000001409A44C2 cases 1,2
/*1409a44c7*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409a44cc*/  movdqa [rbp+290h+var_130], xmm1
/*1409a44d4*/  movaps [rbp+290h+var_140], xmm0
/*1409a44db*/  jmp loc_1409A45B4
/*1409a44e0*/ loc_1409A44E0: mov byte ptr [rbp+290h+var_140], 0
/*1409a44e7*/  movdqu xmm0, [rbp+290h+var_130]
/*1409a44ef*/  movdqa [rbp+290h+var_270], xmm0
/*1409a44f4*/  movzx eax, byte ptr [rbp+290h+var_140]
/*1409a44fb*/  mov [rbp+290h+var_280], al
/*1409a44fe*/  mov rax, qword ptr [rbp+290h+var_140+1]
/*1409a4505*/  mov [rbp+290h+var_27F], rax
/*1409a4509*/  mov eax, dword ptr [rbp+290h+var_140+9]
/*1409a450f*/  mov [rbp+290h+var_277], eax
/*1409a4512*/  movzx eax, word ptr [rbp+290h+var_140+0Dh]
/*1409a4519*/  mov [rbp+290h+var_273], ax
/*1409a451d*/  movzx eax, byte ptr [rbp+290h+var_140+0Fh]
/*1409a4524*/  mov [rbp+290h+var_271], al
/*1409a4527*/  jmp loc_1409A460C
/*1409a452c*/ loc_1409A452C: lea rcx, [rbp+290h+var_140+8]; jumptable 00000001409A44C2 case 4  // jumptable 00000001409A44C2 case 4
/*1409a4533*/  mov rdx, [rax+10h]
/*1409a4537*/  mov r8, [rax+18h]
/*1409a453b*/  call sub_1402CE260
/*1409a4540*/  nop
/*1409a4541*/  mov byte ptr [rbp+290h+var_140], 4
/*1409a4548*/  jmp short loc_1409A45B4
/*1409a454a*/ loc_1409A454A: mov byte ptr [rbp+290h+var_140], 0; jumptable 00000001409A44C2 case 0  // jumptable 00000001409A44C2 case 0
/*1409a4551*/  jmp short loc_1409A45B4
/*1409a4553*/ loc_1409A4553: add rax, 8; jumptable 00000001409A44C2 case 3  // jumptable 00000001409A44C2 case 3
/*1409a4557*/  lea rcx, [rbp+290h+var_140+8]
/*1409a455e*/  mov rdx, rax
/*1409a4561*/  call sub_14149C500
/*1409a4566*/  nop
/*1409a4567*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a456e*/  jmp short loc_1409A45B4
/*1409a4570*/ loc_1409A4570: cmp qword ptr [rax+18h], 0; jumptable 00000001409A44C2 case 5  // jumptable 00000001409A44C2 case 5
/*1409a4575*/  jz short loc_1409A4597
/*1409a4577*/  mov rdx, [rax+8]
/*1409a457b*/  test rdx, rdx
/*1409a457e*/  jz loc_1409A6BB9
/*1409a4584*/  lea rcx, [rbp+290h+var_140+8]
/*1409a458b*/  mov r8, [rax+10h]
/*1409a458f*/  call sub_1402CCD80
/*1409a4594*/  nop
/*1409a4595*/  jmp short loc_1409A45AD
/*1409a4597*/ loc_1409A4597: mov qword ptr [rbp+290h+var_140+8], 0
/*1409a45a2*/  mov qword ptr [rbp+290h+var_130+8], 0
/*1409a45ad*/ loc_1409A45AD: mov byte ptr [rbp+290h+var_140], 5
/*1409a45b4*/ loc_1409A45B4: movzx eax, byte ptr [rbp+290h+var_140]
/*1409a45bb*/  mov rcx, qword ptr [rbp+290h+var_140+1]
/*1409a45c2*/  mov edx, dword ptr [rbp+290h+var_140+9]
/*1409a45c8*/  movzx r8d, word ptr [rbp+290h+var_140+0Dh]
/*1409a45d0*/  movzx r9d, byte ptr [rbp+290h+var_140+0Fh]
/*1409a45d8*/  movdqa xmm0, [rbp+290h+var_130]
/*1409a45e0*/  movdqa [rbp+290h+var_270], xmm0
/*1409a45e5*/  mov [rbp+290h+var_280], al
/*1409a45e8*/  mov [rbp+290h+var_27F], rcx
/*1409a45ec*/  mov [rbp+290h+var_277], edx
/*1409a45ef*/  mov [rbp+290h+var_273], r8w
/*1409a45f4*/  mov [rbp+290h+var_271], r9b
/*1409a45f8*/  mov byte ptr [rbp+290h+var_140], 0
/*1409a45ff*/  lea rcx, [rbp+290h+var_140]
/*1409a4606*/  call sub_1400104F0
/*1409a460b*/  nop
/*1409a460c*/ loc_1409A460C: lea rcx, [rbp+290h+var_140]
/*1409a4613*/  lea rdx, [rbp+290h+var_280]
/*1409a4617*/  call sub_140A5ED90
/*1409a461c*/  nop
/*1409a461d*/  mov rax, qword ptr [rbp+290h+var_140]
/*1409a4624*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1409a4628*/  jz short loc_1409A4681
/*1409a462a*/  mov [rbp+290h+var_A0], rax
/*1409a4631*/  mov rax, qword ptr [rbp+290h+var_140+8]
/*1409a4638*/  mov [rbp+290h+var_90], rax
/*1409a463f*/  mov r8, qword ptr [rbp+290h+var_130]
/*1409a4646*/  test r8, r8
/*1409a4649*/  jz short loc_1409A4662
/*1409a464b*/ loc_1409A464B: lea r9, [rbp+290h+var_180]
/*1409a4652*/  mov rcx, rdi
/*1409a4655*/  mov rdx, [rbp+290h+var_90]
/*1409a465c*/  call sub_1409B4460
/*1409a4661*/  nop
/*1409a4662*/ loc_1409A4662: mov rcx, [rbp+290h+var_90]
/*1409a4669*/  mov rdx, [rbp+290h+var_A0]
/*1409a4670*/  test rdx, rdx
/*1409a4673*/  jz short loc_1409A4681
/*1409a4675*/  mov r8d, 1
/*1409a467b*/  call sub_140001660
/*1409a4680*/  nop
/*1409a4681*/ loc_1409A4681: lea rcx, aContent_6; "content"
/*1409a4688*/  lea r8, [rbp+290h+var_280]
/*1409a468c*/  mov edx, 7
/*1409a4691*/  call sub_141433D50
/*1409a4696*/  nop
/*1409a4697*/ loc_1409A4697: test rax, rax
/*1409a469a*/  jz loc_1409A4845
/*1409a46a0*/  cmp byte ptr [rax], 3
/*1409a46a3*/  jnz loc_1409A4845
/*1409a46a9*/  mov rbx, [rax+18h]
/*1409a46ad*/  test rbx, rbx
/*1409a46b0*/  jz loc_1409A4845
/*1409a46b6*/  mov r14, [rax+10h]
/*1409a46ba*/  movzx eax, byte ptr [rdi+70h]
/*1409a46be*/  cmp eax, 2
/*1409a46c1*/  jz short loc_1409A470B
/*1409a46c3*/  lea rcx, [rdi+58h]
/*1409a46c7*/  cmp eax, 1
/*1409a46ca*/  jnz short loc_1409A4736
/*1409a46cc*/  mov rax, [rdi+58h]
/*1409a46d0*/  mov rdx, [rdi+68h]
/*1409a46d4*/  sub rax, rdx
/*1409a46d7*/  cmp rbx, rax
/*1409a46da*/  ja loc_1409A6BCB
/*1409a46e0*/ loc_1409A46E0: add rdx, [rdi+60h]
/*1409a46e4*/  mov rcx, rdx
/*1409a46e7*/  mov rdx, r14
/*1409a46ea*/  mov r8, rbx
/*1409a46ed*/  call sub_141684120
/*1409a46f2*/  add [rdi+68h], rbx
/*1409a46f6*/ loc_1409A46F6: lea rdx, [rbp+290h+var_180]
/*1409a46fd*/  mov rcx, rdi
/*1409a4700*/  call sub_1409B54F0
/*1409a4705*/  nop
/*1409a4706*/  jmp loc_1409A4845
/*1409a470b*/ loc_1409A470B: lea rdx, [rbp+290h+var_180]
/*1409a4712*/  mov rcx, rdi
/*1409a4715*/  call sub_1409B2D80
/*1409a471a*/  nop
/*1409a471b*/  lea r9, [rbp+290h+var_180]
/*1409a4722*/  mov rcx, rdi
/*1409a4725*/  mov rdx, r14
/*1409a4728*/  mov r8, rbx
/*1409a472b*/  call sub_1409B0FA0
/*1409a4730*/  nop
/*1409a4731*/ loc_1409A4731: jmp loc_1409A4845
/*1409a4736*/ loc_1409A4736: mov rax, [rdi+58h]
/*1409a473a*/  mov rdx, [rdi+68h]
/*1409a473e*/  sub rax, rdx
/*1409a4741*/  cmp rbx, rax
/*1409a4744*/  ja loc_1409A6BEC
/*1409a474a*/ loc_1409A474A: add rdx, [rdi+60h]
/*1409a474e*/  mov rcx, rdx
/*1409a4751*/  mov rdx, r14
/*1409a4754*/  mov r8, rbx
/*1409a4757*/  call sub_141684120
/*1409a475c*/  add rbx, [rdi+68h]
/*1409a4760*/  mov [rdi+68h], rbx
/*1409a4764*/  mov r14, [rdi+60h]
/*1409a4768*/  mov rcx, r14
/*1409a476b*/  mov rdx, rbx
/*1409a476e*/  call sub_14033C560
/*1409a4773*/  test rdx, rdx
/*1409a4776*/  jz loc_1409A4845
/*1409a477c*/  mov r8, rdx
/*1409a477f*/  cmp rdx, 7
/*1409a4783*/  jb short loc_1409A47A2
/*1409a4785*/  mov ecx, 6968743Ch
/*1409a478a*/  xor ecx, [rax]
/*1409a478c*/  mov edx, 3E6B6E69h
/*1409a4791*/  xor edx, [rax+3]
/*1409a4794*/  or edx, ecx
/*1409a4796*/  jz loc_1409A4831
/*1409a479c*/  cmp r8, 7
/*1409a47a0*/  jnz short loc_1409A47B9
/*1409a47a2*/ loc_1409A47A2: lea rdx, aThink; "<think>"
/*1409a47a9*/  mov rcx, rax
/*1409a47ac*/  call sub_1416847B0
/*1409a47b1*/  test eax, eax
/*1409a47b3*/  jz loc_1409A4845
/*1409a47b9*/ loc_1409A47B9: mov [rbp+290h+var_90], r14
/*1409a47c0*/  mov byte ptr [rdi+70h], 2
/*1409a47c4*/  mov rax, [rdi+58h]
/*1409a47c8*/  mov [rbp+290h+var_A0], rax
/*1409a47cf*/  mov qword ptr [rdi+58h], 0
/*1409a47d7*/  mov qword ptr [rdi+60h], 1
/*1409a47df*/  mov qword ptr [rdi+68h], 0
/*1409a47e7*/ loc_1409A47E7: lea rdx, [rbp+290h+var_180]
/*1409a47ee*/  mov rcx, rdi
/*1409a47f1*/  call sub_1409B2D80
/*1409a47f6*/  nop
/*1409a47f7*/  lea r9, [rbp+290h+var_180]
/*1409a47fe*/  mov rcx, rdi
/*1409a4801*/  mov rdx, [rbp+290h+var_90]
/*1409a4808*/  mov r8, rbx
/*1409a480b*/  call sub_1409B0FA0
/*1409a4810*/  nop
/*1409a4811*/  mov rdx, [rbp+290h+var_A0]
/*1409a4818*/  test rdx, rdx
/*1409a481b*/  mov rcx, [rbp+290h+var_90]
/*1409a4822*/  jz short loc_1409A4845
/*1409a4824*/  mov r8d, 1
/*1409a482a*/  call sub_140001660
/*1409a482f*/  jmp short loc_1409A4845
/*1409a4831*/ loc_1409A4831: mov byte ptr [rdi+70h], 1
/*1409a4835*/ loc_1409A4835: lea rdx, [rbp+290h+var_180]
/*1409a483c*/  mov rcx, rdi
/*1409a483f*/  call sub_1409B54F0
/*1409a4844*/  nop
/*1409a4845*/ loc_1409A4845: lea rcx, aToolCalls; "tool_calls"
/*1409a484c*/  lea r8, [rbp+290h+var_280]
/*1409a4850*/  mov edx, 0Ah
/*1409a4855*/  call sub_141433D50
/*1409a485a*/  nop
/*1409a485b*/  mov rbx, rax
/*1409a485e*/  test rax, rax
/*1409a4861*/  jz loc_1409A68DC
/*1409a4867*/  cmp byte ptr [rbx], 4
/*1409a486a*/  jnz loc_1409A68DC
/*1409a4870*/  lea rdx, [rbp+290h+var_180]
/*1409a4877*/  mov rcx, rdi
/*1409a487a*/  call sub_1409B5630
/*1409a487f*/  nop
/*1409a4880*/  mov r13, [rbx+10h]
/*1409a4884*/  mov rbx, [rbx+18h]
/*1409a4888*/  shl rbx, 5
/*1409a488c*/  add rbx, r13
/*1409a488f*/  lea r12, [rdi+120h]
/*1409a4896*/  lea rcx, aIndex_0; "index"
/*1409a489d*/  xorps xmm6, xmm6
/*1409a48a0*/  pcmpeqd xmm7, xmm7
/*1409a48a4*/  mov [rbp+290h+var_1B8], r15
/*1409a48ab*/  mov [rbp+290h+var_250], rbx
/*1409a48af*/  mov [rbp+290h+var_2B0], rsi
/*1409a48b3*/  cmp r13, rbx
/*1409a48b6*/  jz loc_1409A68DC
/*1409a48bc*/ loc_1409A48BC: mov edx, 5
/*1409a48c1*/  mov r8, r13
/*1409a48c4*/  call sub_141433D50
/*1409a48c9*/  nop
/*1409a48ca*/  test rax, rax
/*1409a48cd*/  jz short loc_1409A48DF
/*1409a48cf*/  cmp byte ptr [rax], 2
/*1409a48d2*/  jnz short loc_1409A48DF
/*1409a48d4*/  cmp qword ptr [rax+8], 0
/*1409a48d9*/  jz loc_1409A497D
/*1409a48df*/ loc_1409A48DF: xor r14d, r14d
/*1409a48e2*/ loc_1409A48E2: mov [rbp+290h+var_2A8], r14
/*1409a48e6*/  mov edx, 8
/*1409a48eb*/  lea rcx, aFunction_0; "function"
/*1409a48f2*/  mov r8, r13
/*1409a48f5*/  call sub_141433D50
/*1409a48fa*/  nop
/*1409a48fb*/  test rax, rax
/*1409a48fe*/  jz short loc_1409A4931
/*1409a4900*/  movzx ecx, byte ptr [rax]
/*1409a4903*/  lea rdx, jpt_1409A4911
/*1409a490a*/  movsxd rcx, ds:(jpt_1409A4911 - 1417AA62Ch)[rdx+rcx*4]; switch 6 cases  // switch 6 cases
/*1409a490e*/  add rcx, rdx
/*1409a4911*/  jmp rcx; switch jump  // switch jump
/*1409a4913*/ loc_1409A4913: movdqu xmm0, xmmword ptr [rax]; jumptable 00000001409A4911 cases 1,2  // jumptable 00000001409A4911 cases 1,2
/*1409a4917*/  movdqu xmm1, xmmword ptr [rax+10h]
/*1409a491c*/  movdqa [rbp+290h+var_130], xmm1
/*1409a4924*/  movdqa [rbp+290h+var_140], xmm0
/*1409a492c*/  jmp loc_1409A4A0E
/*1409a4931*/ loc_1409A4931: mov byte ptr [rbp+290h+var_140], 0
/*1409a4938*/  movdqu xmm0, [rbp+290h+var_130]
/*1409a4940*/  movdqa [rbp+290h+var_290], xmm0
/*1409a4945*/  movzx eax, byte ptr [rbp+290h+var_140]
/*1409a494c*/  mov [rbp+290h+var_2A0], al
/*1409a494f*/  mov rax, qword ptr [rbp+290h+var_140+1]
/*1409a4956*/  mov [rbp+290h+var_29F], rax
/*1409a495a*/  mov eax, dword ptr [rbp+290h+var_140+9]
/*1409a4960*/  mov [rbp+290h+var_297], eax
/*1409a4963*/  movzx eax, word ptr [rbp+290h+var_140+0Dh]
/*1409a496a*/  mov [rbp+290h+var_293], ax
/*1409a496e*/  movzx eax, byte ptr [rbp+290h+var_140+0Fh]
/*1409a4975*/  mov [rbp+290h+var_291], al
/*1409a4978*/  jmp loc_1409A4A66
/*1409a497d*/ loc_1409A497D: mov r14, [rax+10h]
/*1409a4981*/  jmp loc_1409A48E2
/*1409a4986*/ loc_1409A4986: mov rdx, [rax+10h]; jumptable 00000001409A4911 case 4  // jumptable 00000001409A4911 case 4
/*1409a498a*/  mov r8, [rax+18h]
/*1409a498e*/  lea rcx, [rbp+290h+var_140+8]
/*1409a4995*/  call sub_1402CE260
/*1409a499a*/  nop
/*1409a499b*/  mov byte ptr [rbp+290h+var_140], 4
/*1409a49a2*/  jmp short loc_1409A4A0E
/*1409a49a4*/ loc_1409A49A4: mov byte ptr [rbp+290h+var_140], 0; jumptable 00000001409A4911 case 0  // jumptable 00000001409A4911 case 0
/*1409a49ab*/  jmp short loc_1409A4A0E
/*1409a49ad*/ loc_1409A49AD: add rax, 8; jumptable 00000001409A4911 case 3  // jumptable 00000001409A4911 case 3
/*1409a49b1*/  lea rcx, [rbp+290h+var_140+8]
/*1409a49b8*/  mov rdx, rax
/*1409a49bb*/  call sub_14149C500
/*1409a49c0*/  nop
/*1409a49c1*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a49c8*/  jmp short loc_1409A4A0E
/*1409a49ca*/ loc_1409A49CA: cmp qword ptr [rax+18h], 0; jumptable 00000001409A4911 case 5  // jumptable 00000001409A4911 case 5
/*1409a49cf*/  jz short loc_1409A49F1
/*1409a49d1*/  mov rdx, [rax+8]
/*1409a49d5*/  test rdx, rdx
/*1409a49d8*/  jz loc_1409A6C0D
/*1409a49de*/  mov r8, [rax+10h]
/*1409a49e2*/  lea rcx, [rbp+290h+var_140+8]
/*1409a49e9*/  call sub_1402CCD80
/*1409a49ee*/  nop
/*1409a49ef*/  jmp short loc_1409A4A07
/*1409a49f1*/ loc_1409A49F1: mov qword ptr [rbp+290h+var_140+8], 0
/*1409a49fc*/  mov qword ptr [rbp+290h+var_130+8], 0
/*1409a4a07*/ loc_1409A4A07: mov byte ptr [rbp+290h+var_140], 5
/*1409a4a0e*/ loc_1409A4A0E: movzx eax, byte ptr [rbp+290h+var_140]
/*1409a4a15*/  mov rcx, qword ptr [rbp+290h+var_140+1]
/*1409a4a1c*/  mov edx, dword ptr [rbp+290h+var_140+9]
/*1409a4a22*/  movzx r8d, word ptr [rbp+290h+var_140+0Dh]
/*1409a4a2a*/  movzx r9d, byte ptr [rbp+290h+var_140+0Fh]
/*1409a4a32*/  movdqa xmm0, [rbp+290h+var_130]
/*1409a4a3a*/  movdqa [rbp+290h+var_290], xmm0
/*1409a4a3f*/  mov [rbp+290h+var_2A0], al
/*1409a4a42*/  mov [rbp+290h+var_29F], rcx
/*1409a4a46*/  mov [rbp+290h+var_297], edx
/*1409a4a49*/  mov [rbp+290h+var_293], r8w
/*1409a4a4e*/  mov [rbp+290h+var_291], r9b
/*1409a4a52*/  mov byte ptr [rbp+290h+var_140], 0
/*1409a4a59*/  lea rcx, [rbp+290h+var_140]
/*1409a4a60*/  call sub_1400104F0
/*1409a4a65*/  nop
/*1409a4a66*/ loc_1409A4A66: mov edx, 2
/*1409a4a6b*/  lea rcx, aId_6; "id"
/*1409a4a72*/  mov r8, r13
/*1409a4a75*/  call sub_141433D50
/*1409a4a7a*/  nop
/*1409a4a7b*/  test rax, rax
/*1409a4a7e*/  jz short loc_1409A4A9A
/*1409a4a80*/  cmp byte ptr [rax], 3
/*1409a4a83*/  jnz short loc_1409A4A9A
/*1409a4a85*/  mov rcx, [rax+10h]
/*1409a4a89*/  mov [rbp+290h+var_248], rcx
/*1409a4a8d*/  mov rax, [rax+18h]
/*1409a4a91*/  mov [rbp+290h+var_168], rax
/*1409a4a98*/  jmp short loc_1409A4AAE
/*1409a4a9a*/ loc_1409A4A9A: mov eax, 1
/*1409a4a9f*/  mov [rbp+290h+var_248], rax
/*1409a4aa3*/  mov [rbp+290h+var_168], 0
/*1409a4aae*/ loc_1409A4AAE: mov edx, 4
/*1409a4ab3*/  lea rcx, aName_7; "name"
/*1409a4aba*/  lea r8, [rbp+290h+var_2A0]
/*1409a4abe*/  call sub_141433D50
/*1409a4ac3*/  nop
/*1409a4ac4*/  mov ecx, 1
/*1409a4ac9*/  mov [rbp+290h+var_90], rcx
/*1409a4ad0*/  test rax, rax
/*1409a4ad3*/  jz short loc_1409A4AEB
/*1409a4ad5*/  cmp byte ptr [rax], 3
/*1409a4ad8*/  jnz short loc_1409A4AEB
/*1409a4ada*/  mov rcx, [rax+10h]
/*1409a4ade*/  mov [rbp+290h+var_90], rcx
/*1409a4ae5*/  mov r15, [rax+18h]
/*1409a4ae9*/  jmp short loc_1409A4AEE
/*1409a4aeb*/ loc_1409A4AEB: xor r15d, r15d
/*1409a4aee*/ loc_1409A4AEE: mov edx, 9
/*1409a4af3*/  lea rcx, aArguments_1; "arguments"
/*1409a4afa*/  lea r8, [rbp+290h+var_2A0]
/*1409a4afe*/  call sub_141433D50
/*1409a4b03*/  nop
/*1409a4b04*/  test rax, rax
/*1409a4b07*/  jz short loc_1409A4B23
/*1409a4b09*/  cmp byte ptr [rax], 3
/*1409a4b0c*/  jnz short loc_1409A4B23
/*1409a4b0e*/  mov rcx, [rax+10h]
/*1409a4b12*/  mov [rbp+290h+var_260], rcx
/*1409a4b16*/  mov rax, [rax+18h]
/*1409a4b1a*/  mov [rbp+290h+var_188], rax
/*1409a4b21*/  jmp short loc_1409A4B37
/*1409a4b23*/ loc_1409A4B23: mov eax, 1
/*1409a4b28*/  mov [rbp+290h+var_260], rax
/*1409a4b2c*/  mov [rbp+290h+var_188], 0
/*1409a4b37*/ loc_1409A4B37: cmp qword ptr [rdi+118h], 0
/*1409a4b3f*/  jz loc_1409A4BDB
/*1409a4b45*/  mov rcx, r12
/*1409a4b48*/  lea rdx, [rbp+290h+var_2A8]
/*1409a4b4c*/  call sub_140378FA0
/*1409a4b51*/  mov r8, rax
/*1409a4b54*/  shr r8, 39h
/*1409a4b58*/  mov rcx, [rdi+100h]
/*1409a4b5f*/  mov rdx, [rdi+108h]
/*1409a4b66*/  movd xmm0, r8d
/*1409a4b6b*/  punpcklbw xmm0, xmm0
/*1409a4b6f*/  pshuflw xmm0, xmm0, 0
/*1409a4b74*/  pshufd xmm0, xmm0, 44h ; 'D'
/*1409a4b79*/  xor r8d, r8d
/*1409a4b7c*/ loc_1409A4B7C: and rax, rdx
/*1409a4b7f*/  movdqu xmm1, xmmword ptr [rcx+rax]
/*1409a4b84*/  movdqa xmm2, xmm1
/*1409a4b88*/  pcmpeqb xmm2, xmm0
/*1409a4b8c*/  pmovmskb r9d, xmm2
/*1409a4b91*/  test r9d, r9d
/*1409a4b94*/  jz short loc_1409A4BC0
/*1409a4b96*/ loc_1409A4B96: tzcnt r10d, r9d
/*1409a4b9b*/  add r10, rax
/*1409a4b9e*/  and r10, rdx
/*1409a4ba1*/  neg r10
/*1409a4ba4*/  imul r10, 70h ; 'p'
/*1409a4ba8*/  cmp r14, [rcx+r10-70h]
/*1409a4bad*/  jz loc_1409A4DF6
/*1409a4bb3*/  lea r10d, [r9-1]
/*1409a4bb7*/  and r10w, r9w
/*1409a4bbb*/  mov r9d, r10d
/*1409a4bbe*/  jnz short loc_1409A4B96
/*1409a4bc0*/ loc_1409A4BC0: pcmpeqb xmm1, xmm7
/*1409a4bc4*/  pmovmskb r9d, xmm1
/*1409a4bc9*/  test r9d, r9d
/*1409a4bcc*/  jnz short loc_1409A4BDB
/*1409a4bce*/  add rax, r8
/*1409a4bd1*/  add rax, 10h
/*1409a4bd5*/  add r8, 10h
/*1409a4bd9*/  jmp short loc_1409A4B7C
/*1409a4bdb*/ loc_1409A4BDB: mov ebx, [rdi+1A8h]
/*1409a4be1*/  lea eax, [rbx+1]
/*1409a4be4*/  mov [rdi+1A8h], eax
/*1409a4bea*/  lea rcx, [rbp+290h+var_140]
/*1409a4bf1*/  call sub_141356270
/*1409a4bf6*/  nop
/*1409a4bf7*/  movups xmm0, [rbp+290h+var_140]
/*1409a4bfe*/  movaps [rbp+290h+var_160], xmm0
/*1409a4c05*/  mov qword ptr [rbp+290h+var_220], 0
/*1409a4c0d*/  mov qword ptr [rbp+290h+var_220+8], 1
/*1409a4c15*/  mov qword ptr [rbp+290h+var_210], 0
/*1409a4c20*/  mov qword ptr [rbp+290h+var_130], 60000020h
/*1409a4c2b*/  lea rax, [rbp+290h+var_220]
/*1409a4c2f*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a4c36*/  lea rax, off_1417A9B00
/*1409a4c3d*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a4c44*/ loc_1409A4C44: lea rcx, [rbp+290h+var_160]
/*1409a4c4b*/  lea rdx, [rbp+290h+var_140]
/*1409a4c52*/  call sub_1413567D0
/*1409a4c57*/  nop
/*1409a4c58*/  test al, al
/*1409a4c5a*/  jnz loc_1409A6B57
/*1409a4c60*/  mov rax, qword ptr [rbp+290h+var_220]
/*1409a4c64*/  mov [rbp+290h+var_A0], rax
/*1409a4c6b*/  mov rcx, qword ptr [rbp+290h+var_220+8]
/*1409a4c6f*/  mov rdx, qword ptr [rbp+290h+var_210]
/*1409a4c76*/  cmp rdx, 10h
/*1409a4c7a*/  mov [rbp+290h+var_D0], rcx
/*1409a4c81*/  jbe short loc_1409A4C8E
/*1409a4c83*/  cmp byte ptr [rcx+10h], 0BFh
/*1409a4c87*/  jg short loc_1409A4C94
/*1409a4c89*/  jmp loc_1409A6C58
/*1409a4c8e*/ loc_1409A4C8E: jnz loc_1409A6C58
/*1409a4c94*/ loc_1409A4C94: mov qword ptr [rbp+290h+var_220], rcx
/*1409a4c98*/  mov qword ptr [rbp+290h+var_220+8], 10h
/*1409a4ca0*/  lea rax, [rbp+290h+var_220]
/*1409a4ca4*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a4cab*/  lea rax, sub_14041F680
/*1409a4cb2*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a4cb9*/ loc_1409A4CB9: lea rcx, [rbp+290h+var_2D0]
/*1409a4cbd*/  lea rdx, unk_1417A5F38
/*1409a4cc4*/  lea r8, [rbp+290h+var_140]
/*1409a4ccb*/  call sub_14149C0F0
/*1409a4cd0*/  nop
/*1409a4cd1*/  mov rdx, [rbp+290h+var_A0]
/*1409a4cd8*/  test rdx, rdx
/*1409a4cdb*/  jz short loc_1409A4CEF
/*1409a4cdd*/  mov r8d, 1
/*1409a4ce3*/  mov rcx, [rbp+290h+var_D0]
/*1409a4cea*/  call sub_140001660
/*1409a4cef*/ loc_1409A4CEF: mov [rbp+290h+var_E0], ebx
/*1409a4cf5*/  movdqu xmm0, [rbp+290h+var_2D0]
/*1409a4cfa*/  movdqa [rbp+290h+var_140], xmm0
/*1409a4d02*/  mov rax, [rbp+290h+var_2C0]
/*1409a4d06*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a4d0d*/  mov qword ptr [rbp+290h+var_130+8], 0
/*1409a4d18*/  mov [rbp+290h+var_120], 1
/*1409a4d23*/  lea rax, [rbp+290h+var_140+8]
/*1409a4d2a*/  movups xmmword ptr [rax+20h], xmm6
/*1409a4d2e*/  mov [rbp+290h+var_108], 1
/*1409a4d39*/  movups xmmword ptr [rax+38h], xmm6
/*1409a4d3d*/  mov [rbp+290h+var_F0], 1
/*1409a4d48*/  mov [rbp+290h+var_E8], 0
/*1409a4d53*/  mov [rbp+290h+var_DC], 0
/*1409a4d5c*/  mov [rbp+290h+var_DA], 0
/*1409a4d63*/ loc_1409A4D63: lea rcx, [rbp+290h+var_220]
/*1409a4d67*/  lea rdx, [rdi+100h]
/*1409a4d6e*/  mov r8, r14
/*1409a4d71*/  lea r9, [rbp+290h+var_140]
/*1409a4d78*/  call sub_140476900
/*1409a4d7d*/  nop
/*1409a4d7e*/ loc_1409A4D7E: mov rdx, qword ptr [rbp+290h+var_220]
/*1409a4d82*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1409a4d86*/  jz short loc_1409A4DF6
/*1409a4d88*/  test rdx, rdx
/*1409a4d8b*/  jz short loc_1409A4D9C
/*1409a4d8d*/  mov rcx, qword ptr [rbp+290h+var_220+8]
/*1409a4d91*/  mov r8d, 1
/*1409a4d97*/  call sub_140001660
/*1409a4d9c*/ loc_1409A4D9C: mov rdx, qword ptr [rbp+290h+var_210+8]
/*1409a4da3*/  test rdx, rdx
/*1409a4da6*/  jz short loc_1409A4DBA
/*1409a4da8*/  mov rcx, [rbp+290h+var_200]
/*1409a4daf*/  mov r8d, 1
/*1409a4db5*/  call sub_140001660
/*1409a4dba*/ loc_1409A4DBA: mov rdx, [rbp+290h+var_1F0]
/*1409a4dc1*/  test rdx, rdx
/*1409a4dc4*/  jz short loc_1409A4DD8
/*1409a4dc6*/  mov rcx, [rbp+290h+var_1E8]
/*1409a4dcd*/  mov r8d, 1
/*1409a4dd3*/  call sub_140001660
/*1409a4dd8*/ loc_1409A4DD8: mov rdx, [rbp+290h+var_1D8]
/*1409a4ddf*/  test rdx, rdx
/*1409a4de2*/  jz short loc_1409A4DF6
/*1409a4de4*/  mov rcx, [rbp+290h+var_1D0]
/*1409a4deb*/  mov r8d, 1
/*1409a4df1*/  call sub_140001660
/*1409a4df6*/ loc_1409A4DF6: mov rsi, r15
/*1409a4df9*/  test r15, r15
/*1409a4dfc*/  mov [rbp+290h+var_D0], r13
/*1409a4e03*/  mov r15, r14
/*1409a4e06*/  jz loc_1409A4EE7
/*1409a4e0c*/  cmp qword ptr [rdi+178h], 0
/*1409a4e14*/  jz loc_1409A4EE7
/*1409a4e1a*/  lea rcx, [rdi+180h]
/*1409a4e21*/  mov rdx, [rbp+290h+var_90]
/*1409a4e28*/  mov r8, rsi
/*1409a4e2b*/  call sub_1403795A0
/*1409a4e30*/  mov r14, rax
/*1409a4e33*/  shr rax, 39h
/*1409a4e37*/  mov rbx, [rdi+160h]
/*1409a4e3e*/  mov r13, [rdi+168h]
/*1409a4e45*/  movd xmm0, eax
/*1409a4e49*/  punpcklbw xmm0, xmm0
/*1409a4e4d*/  pshuflw xmm0, xmm0, 0
/*1409a4e52*/  pshufd xmm8, xmm0, 44h ; 'D'
/*1409a4e58*/  xor ecx, ecx
/*1409a4e5a*/ loc_1409A4E5A: and r14, r13
/*1409a4e5d*/  movdqu xmm9, xmmword ptr [rbx+r14]
/*1409a4e63*/  movdqa xmm0, xmm9
/*1409a4e68*/  pcmpeqb xmm0, xmm8
/*1409a4e6d*/  pmovmskb r12d, xmm0
/*1409a4e72*/  test r12d, r12d
/*1409a4e75*/  jz short loc_1409A4EC9
/*1409a4e77*/  mov [rbp+290h+var_A0], rcx
/*1409a4e7e*/ loc_1409A4E7E: tzcnt eax, r12d
/*1409a4e83*/  add rax, r14
/*1409a4e86*/  and rax, r13
/*1409a4e89*/  neg rax
/*1409a4e8c*/  lea rax, [rax+rax*2]
/*1409a4e90*/  cmp rsi, [rbx+rax*8-8]
/*1409a4e95*/  jnz short loc_1409A4EB4
/*1409a4e97*/  lea rax, [rbx+rax*8]
/*1409a4e9b*/  mov rdx, [rax-10h]
/*1409a4e9f*/  mov rcx, [rbp+290h+var_90]
/*1409a4ea6*/  mov r8, rsi
/*1409a4ea9*/  call sub_1416847B0
/*1409a4eae*/  mov cl, 1
/*1409a4eb0*/  test eax, eax
/*1409a4eb2*/  jz short loc_1409A4EE9
/*1409a4eb4*/ loc_1409A4EB4: lea eax, [r12-1]
/*1409a4eb9*/  and ax, r12w
/*1409a4ebd*/  mov r12d, eax
/*1409a4ec0*/  mov rcx, [rbp+290h+var_A0]
/*1409a4ec7*/  jnz short loc_1409A4E7E
/*1409a4ec9*/ loc_1409A4EC9: pcmpeqb xmm9, xmm7
/*1409a4ece*/  pmovmskb eax, xmm9
/*1409a4ed3*/  test eax, eax
/*1409a4ed5*/  jnz short loc_1409A4EE7
/*1409a4ed7*/  add r14, rcx
/*1409a4eda*/  add r14, 10h
/*1409a4ede*/  add rcx, 10h
/*1409a4ee2*/  jmp loc_1409A4E5A
/*1409a4ee7*/ loc_1409A4EE7: xor ecx, ecx
/*1409a4ee9*/ loc_1409A4EE9: cmp qword ptr [rdi+118h], 0
/*1409a4ef1*/  lea r12, [rdi+120h]
/*1409a4ef8*/  mov rbx, [rbp+290h+var_2B8]
/*1409a4efc*/  jz loc_1409A696D
/*1409a4f02*/  mov r13d, ecx
/*1409a4f05*/  mov rcx, r12
/*1409a4f08*/  lea rdx, [rbp+290h+var_2A8]
/*1409a4f0c*/  call sub_140378FA0
/*1409a4f11*/  mov rdx, rax
/*1409a4f14*/  shr rdx, 39h
/*1409a4f18*/  mov r14, [rdi+100h]
/*1409a4f1f*/  mov rcx, [rdi+108h]
/*1409a4f26*/  movd xmm0, edx
/*1409a4f2a*/  punpcklbw xmm0, xmm0
/*1409a4f2e*/  pshuflw xmm0, xmm0, 0
/*1409a4f33*/  pshufd xmm0, xmm0, 44h ; 'D'
/*1409a4f38*/  xor edx, edx
/*1409a4f3a*/ loc_1409A4F3A: and rax, rcx
/*1409a4f3d*/  movdqu xmm1, xmmword ptr [r14+rax]
/*1409a4f43*/  movdqa xmm2, xmm1
/*1409a4f47*/  pcmpeqb xmm2, xmm0
/*1409a4f4b*/  pmovmskb r8d, xmm2
/*1409a4f50*/  test r8d, r8d
/*1409a4f53*/  jz short loc_1409A4F7B
/*1409a4f55*/ loc_1409A4F55: tzcnt r9d, r8d
/*1409a4f5a*/  add r9, rax
/*1409a4f5d*/  and r9, rcx
/*1409a4f60*/  neg r9
/*1409a4f63*/  imul r9, 70h ; 'p'
/*1409a4f67*/  cmp r15, [r14+r9-70h]
/*1409a4f6c*/  jz short loc_1409A4F9A
/*1409a4f6e*/  lea r9d, [r8-1]
/*1409a4f72*/  and r9w, r8w
/*1409a4f76*/  mov r8d, r9d
/*1409a4f79*/  jnz short loc_1409A4F55
/*1409a4f7b*/ loc_1409A4F7B: pcmpeqb xmm1, xmm7
/*1409a4f7f*/  pmovmskb r8d, xmm1
/*1409a4f84*/  test r8d, r8d
/*1409a4f87*/  jnz loc_1409A696D
/*1409a4f8d*/  add rax, rdx
/*1409a4f90*/  add rax, 10h
/*1409a4f94*/  add rdx, 10h
/*1409a4f98*/  jmp short loc_1409A4F3A
/*1409a4f9a*/ loc_1409A4F9A: add r14, r9
/*1409a4f9d*/  cmp [rbp+290h+var_168], 0
/*1409a4fa5*/  mov [rbp+290h+var_A0], r14
/*1409a4fac*/  jz short loc_1409A502A
/*1409a4fae*/  cmp qword ptr [r14-40h], 0
/*1409a4fb3*/  jnz short loc_1409A502A
/*1409a4fb5*/  mov r15, [rbp+290h+var_168]
/*1409a4fbc*/  test r15, r15
/*1409a4fbf*/  js loc_1409A6A43
/*1409a4fc5*/  call nullsub_1
/*1409a4fca*/  mov r14d, 1
/*1409a4fd0*/  mov edx, 1
/*1409a4fd5*/  mov rcx, r15
/*1409a4fd8*/  call sub_140001650
/*1409a4fdd*/  test rax, rax
/*1409a4fe0*/  jz loc_1409A6D16
/*1409a4fe6*/  mov rbx, rax
/*1409a4fe9*/  mov rcx, rax
/*1409a4fec*/  mov rdx, [rbp+290h+var_248]
/*1409a4ff0*/  mov r8, r15
/*1409a4ff3*/  call sub_141684120
/*1409a4ff8*/  mov r14, [rbp+290h+var_A0]
/*1409a4fff*/  mov rdx, [r14-50h]
/*1409a5003*/  test rdx, rdx
/*1409a5006*/  jz short loc_1409A5017
/*1409a5008*/  mov rcx, [r14-48h]
/*1409a500c*/  mov r8d, 1
/*1409a5012*/  call sub_140001660
/*1409a5017*/ loc_1409A5017: mov rax, [rbp+290h+var_168]
/*1409a501e*/  mov [r14-50h], rax
/*1409a5022*/  mov [r14-48h], rbx
/*1409a5026*/  mov [r14-40h], rax
/*1409a502a*/ loc_1409A502A: mov [rbp+290h+var_2B8], rbx
/*1409a502e*/  test rsi, rsi
/*1409a5031*/  jz short loc_1409A50B1
/*1409a5033*/  cmp qword ptr [r14-28h], 0
/*1409a5038*/  mov r14, [rbp+290h+var_258]
/*1409a503c*/  jnz short loc_1409A50B5
/*1409a503e*/  test rsi, rsi
/*1409a5041*/  js loc_1409A6A57
/*1409a5047*/  call nullsub_1
/*1409a504c*/  mov ebx, 1
/*1409a5051*/  mov edx, 1
/*1409a5056*/  mov rcx, rsi
/*1409a5059*/  call sub_140001650
/*1409a505e*/  test rax, rax
/*1409a5061*/  jz loc_1409A6D72
/*1409a5067*/  mov r14, rax
/*1409a506a*/  mov rcx, rax
/*1409a506d*/  mov rdx, [rbp+290h+var_90]
/*1409a5074*/  mov r8, rsi
/*1409a5077*/  call sub_141684120
/*1409a507c*/  mov rbx, [rbp+290h+var_A0]
/*1409a5083*/  mov rdx, [rbx-38h]
/*1409a5087*/  test rdx, rdx
/*1409a508a*/  jz short loc_1409A509B
/*1409a508c*/  mov rcx, [rbx-30h]
/*1409a5090*/  mov r8d, 1
/*1409a5096*/  call sub_140001660
/*1409a509b*/ loc_1409A509B: mov [rbx-38h], rsi
/*1409a509f*/  mov [rbx-30h], r14
/*1409a50a3*/  mov [rbx-28h], rsi
/*1409a50a7*/  mov [rbx-2], r13b
/*1409a50ab*/  mov [rbx-3], r13b
/*1409a50af*/  jmp short loc_1409A50B5
/*1409a50b1*/ loc_1409A50B1: mov r14, [rbp+290h+var_258]
/*1409a50b5*/ loc_1409A50B5: mov [rbp+290h+var_258], r14
/*1409a50b9*/  mov r14, [rbp+290h+var_A0]
/*1409a50c0*/  cmp qword ptr [r14-40h], 0
/*1409a50c5*/  mov r15, [rbp+290h+var_1B8]
/*1409a50cc*/  mov rsi, [rbp+290h+var_2B0]
/*1409a50d0*/  mov r13, [rbp+290h+var_D0]
/*1409a50d7*/  jnz loc_1409A5215
/*1409a50dd*/ loc_1409A50DD: lea rcx, [rbp+290h+var_140]
/*1409a50e4*/  call sub_141356270
/*1409a50e9*/  nop
/*1409a50ea*/  movups xmm0, [rbp+290h+var_140]
/*1409a50f1*/  movaps [rbp+290h+var_160], xmm0
/*1409a50f8*/  mov qword ptr [rbp+290h+var_220], 0
/*1409a5100*/  mov qword ptr [rbp+290h+var_220+8], 1
/*1409a5108*/  mov qword ptr [rbp+290h+var_210], 0
/*1409a5113*/  mov qword ptr [rbp+290h+var_130], 60000020h
/*1409a511e*/  lea rax, [rbp+290h+var_220]
/*1409a5122*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a5129*/  lea rax, off_1417A9B00
/*1409a5130*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a5137*/ loc_1409A5137: lea rcx, [rbp+290h+var_160]
/*1409a513e*/  lea rdx, [rbp+290h+var_140]
/*1409a5145*/  call sub_1413567D0
/*1409a514a*/  nop
/*1409a514b*/  test al, al
/*1409a514d*/  jnz loc_1409A6B88
/*1409a5153*/  mov rax, qword ptr [rbp+290h+var_220]
/*1409a5157*/  mov [rbp+290h+var_90], rax
/*1409a515e*/  mov rcx, qword ptr [rbp+290h+var_220+8]
/*1409a5162*/  mov rdx, qword ptr [rbp+290h+var_210]
/*1409a5169*/  cmp rdx, 10h
/*1409a516d*/  mov [rbp+290h+var_168], rcx
/*1409a5174*/  jbe short loc_1409A5181
/*1409a5176*/  cmp byte ptr [rcx+10h], 0BFh
/*1409a517a*/  jg short loc_1409A5187
/*1409a517c*/  jmp loc_1409A6C78
/*1409a5181*/ loc_1409A5181: jnz loc_1409A6C78
/*1409a5187*/ loc_1409A5187: mov qword ptr [rbp+290h+var_220], rcx
/*1409a518b*/  mov qword ptr [rbp+290h+var_220+8], 10h
/*1409a5193*/  lea rax, [rbp+290h+var_220]
/*1409a5197*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a519e*/  lea rax, sub_14041F680
/*1409a51a5*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a51ac*/ loc_1409A51AC: lea rcx, [rbp+290h+var_2E8]
/*1409a51b0*/  lea rdx, unk_1417A5F80
/*1409a51b7*/  lea r8, [rbp+290h+var_140]
/*1409a51be*/  call sub_14149C0F0
/*1409a51c3*/  nop
/*1409a51c4*/ loc_1409A51C4: mov rdx, [rbp+290h+var_90]
/*1409a51cb*/  test rdx, rdx
/*1409a51ce*/  jz short loc_1409A51E2
/*1409a51d0*/  mov r8d, 1
/*1409a51d6*/  mov rcx, [rbp+290h+var_168]
/*1409a51dd*/  call sub_140001660
/*1409a51e2*/ loc_1409A51E2: mov r14, [rbp+290h+var_A0]
/*1409a51e9*/  lea rbx, [r14-50h]
/*1409a51ed*/  mov rdx, [rbx]
/*1409a51f0*/  test rdx, rdx
/*1409a51f3*/  jz short loc_1409A5204
/*1409a51f5*/  mov rcx, [r14-48h]
/*1409a51f9*/  mov r8d, 1
/*1409a51ff*/  call sub_140001660
/*1409a5204*/ loc_1409A5204: mov rax, [rbp+290h+var_2D8]
/*1409a5208*/  mov [rbx+10h], rax
/*1409a520c*/  movdqu xmm0, [rbp+290h+var_2E8]
/*1409a5211*/  movdqu xmmword ptr [rbx], xmm0
/*1409a5215*/ loc_1409A5215: mov al, 1
/*1409a5217*/  cmp byte ptr [r14-4], 0
/*1409a521c*/  jz loc_1409A54BC
/*1409a5222*/  cmp [rbp+290h+var_188], 0
/*1409a522a*/  jz loc_1409A67FB
/*1409a5230*/ loc_1409A5230: test al, al
/*1409a5232*/  mov rbx, [rbp+290h+var_250]
/*1409a5236*/  jz loc_1409A67FF
/*1409a523c*/  mov rax, [r14-20h]
/*1409a5240*/  mov rdx, [r14-10h]
/*1409a5244*/  sub rax, rdx
/*1409a5247*/  mov r8, [rbp+290h+var_188]
/*1409a524e*/  cmp r8, rax
/*1409a5251*/  ja loc_1409A6822
/*1409a5257*/ loc_1409A5257: add rdx, [r14-18h]
/*1409a525b*/  mov rcx, rdx
/*1409a525e*/  mov rdx, [rbp+290h+var_260]
/*1409a5262*/  call sub_141684120
/*1409a5267*/  mov rax, [rbp+290h+var_188]
/*1409a526e*/  add [r14-10h], rax
/*1409a5272*/  cmp byte ptr [r14-3], 0
/*1409a5277*/  jnz loc_1409A67FF
/*1409a527d*/  mov qword ptr [rbp+290h+var_B8], 0
/*1409a5288*/  mov [rbp+290h+var_A8], 0
/*1409a5293*/  call nullsub_1
/*1409a5298*/  mov ecx, 4
/*1409a529d*/  mov edx, 1
/*1409a52a2*/  call sub_140001650
/*1409a52a7*/  test rax, rax
/*1409a52aa*/  jz loc_1409A6D5D
/*1409a52b0*/  mov dword ptr [rax], 65707974h
/*1409a52b6*/  mov [rbp+290h+var_1B0], 4
/*1409a52c1*/  mov [rbp+290h+var_1A8], rax
/*1409a52c8*/  mov qword ptr [rbp+290h+var_1A0], 4
/*1409a52d3*/  call nullsub_1
/*1409a52d8*/  mov ecx, 26h ; '&'
/*1409a52dd*/  mov edx, 1
/*1409a52e2*/  call sub_140001650
/*1409a52e7*/  test rax, rax
/*1409a52ea*/  mov [rbp+290h+var_90], rax
/*1409a52f1*/  jz loc_1409A6D48
/*1409a52f7*/  mov r10, rax
/*1409a52fa*/  movups xmm0, cs:xmmword_1417A5FB0
/*1409a5301*/  movups xmmword ptr [rax+10h], xmm0
/*1409a5305*/  movdqu xmm0, cs:xmmword_1417A5FA0
/*1409a530d*/  movdqu xmmword ptr [rax], xmm0
/*1409a5311*/  mov rax, 61746C65642E7374h
/*1409a531b*/  mov [r10+1Eh], rax
/*1409a531f*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a5326*/  mov qword ptr [rbp+290h+var_140+8], 26h ; '&'
/*1409a5331*/  mov qword ptr [rbp+290h+var_130], r10
/*1409a5338*/  mov qword ptr [rbp+290h+var_130+8], 26h ; '&'
/*1409a5343*/ loc_1409A5343: lea rcx, [rbp+290h+var_220]
/*1409a5347*/  lea rdx, [rbp+290h+var_B8]
/*1409a534e*/  lea r8, [rbp+290h+var_1B0]
/*1409a5355*/  lea r9, [rbp+290h+var_140]
/*1409a535c*/  call sub_140307860
/*1409a5361*/  nop
/*1409a5362*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5366*/  jz short loc_1409A5372
/*1409a5368*/ loc_1409A5368: lea rcx, [rbp+290h+var_220]
/*1409a536c*/  call sub_1400104F0
/*1409a5371*/  nop
/*1409a5372*/ loc_1409A5372: call nullsub_1
/*1409a5377*/  mov ecx, 0Ch
/*1409a537c*/  mov edx, 1
/*1409a5381*/  call sub_140001650
/*1409a5386*/  test rax, rax
/*1409a5389*/  jz loc_1409A6D33
/*1409a538f*/  mov rcx, 695F74757074756Fh
/*1409a5399*/  mov [rax], rcx
/*1409a539c*/  mov dword ptr [rax+8], 7865646Eh
/*1409a53a3*/  mov [rbp+290h+var_1B0], 0Ch
/*1409a53ae*/  mov [rbp+290h+var_1A8], rax
/*1409a53b5*/  mov qword ptr [rbp+290h+var_1A0], 0Ch
/*1409a53c0*/  mov rax, [rbp+290h+var_A0]
/*1409a53c7*/  mov eax, [rax-8]
/*1409a53ca*/  mov byte ptr [rbp+290h+var_140], 2
/*1409a53d1*/  mov qword ptr [rbp+290h+var_140+8], 0
/*1409a53dc*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a53e3*/  lea rcx, [rbp+290h+var_220]
/*1409a53e7*/  lea rdx, [rbp+290h+var_B8]
/*1409a53ee*/  lea r8, [rbp+290h+var_1B0]
/*1409a53f5*/  lea r9, [rbp+290h+var_140]
/*1409a53fc*/  call sub_140307860
/*1409a5401*/  nop
/*1409a5402*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5406*/  jz short loc_1409A5412
/*1409a5408*/  lea rcx, [rbp+290h+var_220]
/*1409a540c*/  call sub_1400104F0
/*1409a5411*/  nop
/*1409a5412*/ loc_1409A5412: call nullsub_1
/*1409a5417*/  mov ecx, 7
/*1409a541c*/  mov edx, 1
/*1409a5421*/  call sub_140001650
/*1409a5426*/  test rax, rax
/*1409a5429*/  jz loc_1409A6D1E
/*1409a542f*/  mov dword ptr [rax+3], 64695F6Dh
/*1409a5436*/  mov dword ptr [rax], 6D657469h
/*1409a543c*/  mov [rbp+290h+var_1B0], 7
/*1409a5447*/  mov [rbp+290h+var_1A8], rax
/*1409a544e*/  mov qword ptr [rbp+290h+var_1A0], 7
/*1409a5459*/  mov rax, [rbp+290h+var_A0]
/*1409a5460*/  mov rbx, [rax-58h]
/*1409a5464*/  test rbx, rbx
/*1409a5467*/  js loc_1409A6AA1
/*1409a546d*/  jz loc_1409A5B9A
/*1409a5473*/  mov r15, [rax-60h]
/*1409a5477*/  call nullsub_1
/*1409a547c*/  mov r12d, 1
/*1409a5482*/  mov edx, 1
/*1409a5487*/  mov rcx, rbx
/*1409a548a*/  call sub_140001650
/*1409a548f*/  test rax, rax
/*1409a5492*/  jz loc_1409A6AA4
/*1409a5498*/  mov r14, rax
/*1409a549b*/  mov rcx, rax
/*1409a549e*/  mov rdx, r15
/*1409a54a1*/  mov r8, rbx
/*1409a54a4*/  call sub_141684120
/*1409a54a9*/  mov r15, [rbp+290h+var_1B8]
/*1409a54b0*/  lea r12, [rdi+120h]
/*1409a54b7*/  jmp loc_1409A5BA0
/*1409a54bc*/ loc_1409A54BC: cmp qword ptr [r14-28h], 0
/*1409a54c1*/  mov rbx, [rbp+290h+var_250]
/*1409a54c5*/  jz loc_1409A67FF
/*1409a54cb*/  mov byte ptr [r14-4], 1
/*1409a54d0*/  cmp byte ptr [r14-2], 0
/*1409a54d5*/  jz loc_1409A5656
/*1409a54db*/  mov qword ptr [rbp+290h+var_B8], 0
/*1409a54e6*/  mov [rbp+290h+var_A8], 0
/*1409a54f1*/  call nullsub_1
/*1409a54f6*/  mov ecx, 4
/*1409a54fb*/  mov edx, 1
/*1409a5500*/  call sub_140001650
/*1409a5505*/  test rax, rax
/*1409a5508*/  jz loc_1409A6D01
/*1409a550e*/  mov dword ptr [rax], 65707974h
/*1409a5514*/  mov qword ptr [rbp+290h+var_160], 4
/*1409a551f*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a5526*/  mov qword ptr [rbp+290h+var_150], 4
/*1409a5531*/  call nullsub_1
/*1409a5536*/  mov ecx, 10h
/*1409a553b*/  mov edx, 1
/*1409a5540*/  call sub_140001650
/*1409a5545*/  test rax, rax
/*1409a5548*/  mov [rbp+290h+var_90], rax
/*1409a554f*/  jz loc_1409A6CEC
/*1409a5555*/  movdqu xmm0, cs:xmmword_1417A5D41
/*1409a555d*/  movdqu xmmword ptr [rax], xmm0
/*1409a5561*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a5568*/  mov qword ptr [rbp+290h+var_140+8], 10h
/*1409a5573*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a557a*/  mov qword ptr [rbp+290h+var_130+8], 10h
/*1409a5585*/ loc_1409A5585: lea rcx, [rbp+290h+var_220]
/*1409a5589*/  lea rdx, [rbp+290h+var_B8]
/*1409a5590*/  lea r8, [rbp+290h+var_160]
/*1409a5597*/  lea r9, [rbp+290h+var_140]
/*1409a559e*/  call sub_140307860
/*1409a55a3*/  nop
/*1409a55a4*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a55a8*/  jz short loc_1409A55B4
/*1409a55aa*/ loc_1409A55AA: lea rcx, [rbp+290h+var_220]
/*1409a55ae*/  call sub_1400104F0
/*1409a55b3*/  nop
/*1409a55b4*/ loc_1409A55B4: call nullsub_1
/*1409a55b9*/  mov ecx, 2
/*1409a55be*/  mov edx, 1
/*1409a55c3*/  call sub_140001650
/*1409a55c8*/  test rax, rax
/*1409a55cb*/  jz loc_1409A6CD7
/*1409a55d1*/  mov word ptr [rax], 6469h
/*1409a55d6*/  mov qword ptr [rbp+290h+var_160], 2
/*1409a55e1*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a55e8*/  mov qword ptr [rbp+290h+var_150], 2
/*1409a55f3*/  mov rax, [rbp+290h+var_A0]
/*1409a55fa*/  mov rbx, [rax-58h]
/*1409a55fe*/  test rbx, rbx
/*1409a5601*/  js loc_1409A6A6B
/*1409a5607*/  jz loc_1409A57EC
/*1409a560d*/  mov r13, [rax-60h]
/*1409a5611*/  call nullsub_1
/*1409a5616*/  mov r12d, 1
/*1409a561c*/  mov edx, 1
/*1409a5621*/  mov rcx, rbx
/*1409a5624*/  call sub_140001650
/*1409a5629*/  test rax, rax
/*1409a562c*/  jz loc_1409A6A6E
/*1409a5632*/  mov r14, rax
/*1409a5635*/  mov rcx, rax
/*1409a5638*/  mov rdx, r13
/*1409a563b*/  mov r8, rbx
/*1409a563e*/  call sub_141684120
/*1409a5643*/  mov r13, [rbp+290h+var_D0]
/*1409a564a*/  lea r12, [rdi+120h]
/*1409a5651*/  jmp loc_1409A57F2
/*1409a5656*/ loc_1409A5656: mov qword ptr [rbp+290h+var_238], 0
/*1409a565e*/  mov [rbp+290h+var_228], 0
/*1409a5666*/  call nullsub_1
/*1409a566b*/  mov ecx, 4
/*1409a5670*/  mov edx, 1
/*1409a5675*/  call sub_140001650
/*1409a567a*/  test rax, rax
/*1409a567d*/  jz loc_1409A6CC2
/*1409a5683*/  mov dword ptr [rax], 65707974h
/*1409a5689*/  mov qword ptr [rbp+290h+var_B8], 4
/*1409a5694*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a569b*/  mov [rbp+290h+var_A8], 4
/*1409a56a6*/  call nullsub_1
/*1409a56ab*/  mov ecx, 0Dh
/*1409a56b0*/  mov edx, 1
/*1409a56b5*/  call sub_140001650
/*1409a56ba*/  test rax, rax
/*1409a56bd*/  mov [rbp+290h+var_90], rax
/*1409a56c4*/  jz loc_1409A6CAD
/*1409a56ca*/  mov r10, rax
/*1409a56cd*/  mov rax, 6C6C61635F6E6F69h
/*1409a56d7*/  mov [r10+5], rax
/*1409a56db*/  mov rax, 6E6F6974636E7566h
/*1409a56e5*/  mov [r10], rax
/*1409a56e8*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a56ef*/  mov qword ptr [rbp+290h+var_140+8], 0Dh
/*1409a56fa*/  mov qword ptr [rbp+290h+var_130], r10
/*1409a5701*/  mov qword ptr [rbp+290h+var_130+8], 0Dh
/*1409a570c*/ loc_1409A570C: lea rcx, [rbp+290h+var_220]
/*1409a5710*/  lea rdx, [rbp+290h+var_238]
/*1409a5714*/  lea r8, [rbp+290h+var_B8]
/*1409a571b*/  lea r9, [rbp+290h+var_140]
/*1409a5722*/  call sub_140307860
/*1409a5727*/  nop
/*1409a5728*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a572c*/  jz short loc_1409A5738
/*1409a572e*/ loc_1409A572E: lea rcx, [rbp+290h+var_220]
/*1409a5732*/  call sub_1400104F0
/*1409a5737*/  nop
/*1409a5738*/ loc_1409A5738: call nullsub_1
/*1409a573d*/  mov ecx, 2
/*1409a5742*/  mov edx, 1
/*1409a5747*/  call sub_140001650
/*1409a574c*/  test rax, rax
/*1409a574f*/  jz loc_1409A6C98
/*1409a5755*/  mov rcx, [rbp+290h+var_A0]
/*1409a575c*/  lea rdx, [rcx-38h]
/*1409a5760*/  mov word ptr [rax], 6469h
/*1409a5765*/  mov qword ptr [rbp+290h+var_B8], 2
/*1409a5770*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a5777*/  mov [rbp+290h+var_A8], 2
/*1409a5782*/  mov r14, [rcx-58h]
/*1409a5786*/  test r14, r14
/*1409a5789*/  js loc_1409A6A86
/*1409a578f*/  mov [rbp+290h+var_90], rdx
/*1409a5796*/  jz loc_1409A59C3
/*1409a579c*/  mov rax, [rbp+290h+var_A0]
/*1409a57a3*/  mov r12, [rax-60h]
/*1409a57a7*/  call nullsub_1
/*1409a57ac*/  mov r13d, 1
/*1409a57b2*/  mov edx, 1
/*1409a57b7*/  mov rcx, r14
/*1409a57ba*/  call sub_140001650
/*1409a57bf*/  test rax, rax
/*1409a57c2*/  jz loc_1409A6A89
/*1409a57c8*/  mov rbx, rax
/*1409a57cb*/  mov rcx, rax
/*1409a57ce*/  mov rdx, r12
/*1409a57d1*/  mov r8, r14
/*1409a57d4*/  call sub_141684120
/*1409a57d9*/  mov r13, [rbp+290h+var_D0]
/*1409a57e0*/  lea r12, [rdi+120h]
/*1409a57e7*/  jmp loc_1409A59C8
/*1409a57ec*/ loc_1409A57EC: mov r14d, 1
/*1409a57f2*/ loc_1409A57F2: mov byte ptr [rbp+290h+var_140], 3
/*1409a57f9*/  mov qword ptr [rbp+290h+var_140+8], rbx
/*1409a5800*/  mov qword ptr [rbp+290h+var_130], r14
/*1409a5807*/  mov qword ptr [rbp+290h+var_130+8], rbx
/*1409a580e*/  mov [rbp+290h+var_BD], 0
/*1409a5815*/ loc_1409A5815: lea rcx, [rbp+290h+var_220]
/*1409a5819*/  lea rdx, [rbp+290h+var_B8]
/*1409a5820*/  lea r8, [rbp+290h+var_160]
/*1409a5827*/  lea r9, [rbp+290h+var_140]
/*1409a582e*/  call sub_140307860
/*1409a5833*/  nop
/*1409a5834*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5838*/  jz short loc_1409A5844
/*1409a583a*/ loc_1409A583A: lea rcx, [rbp+290h+var_220]
/*1409a583e*/  call sub_1400104F0
/*1409a5843*/  nop
/*1409a5844*/ loc_1409A5844: call nullsub_1
/*1409a5849*/  mov ecx, 6
/*1409a584e*/  mov edx, 1
/*1409a5853*/  call sub_140001650
/*1409a5858*/  test rax, rax
/*1409a585b*/  jz loc_1409A6DA5
/*1409a5861*/  mov word ptr [rax+4], 7375h
/*1409a5867*/  mov dword ptr [rax], 74617473h
/*1409a586d*/  mov qword ptr [rbp+290h+var_160], 6
/*1409a5878*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a587f*/  mov qword ptr [rbp+290h+var_150], 6
/*1409a588a*/  call nullsub_1
/*1409a588f*/  mov ecx, 0Bh
/*1409a5894*/  mov edx, 1
/*1409a5899*/  call sub_140001650
/*1409a589e*/  test rax, rax
/*1409a58a1*/  mov [rbp+290h+var_90], rax
/*1409a58a8*/  jz loc_1409A6D90
/*1409a58ae*/  mov r10, rax
/*1409a58b1*/  mov rax, 72676F72705F6E69h
/*1409a58bb*/  mov [r10], rax
/*1409a58be*/  mov dword ptr [r10+7], 73736572h
/*1409a58c6*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a58cd*/  mov qword ptr [rbp+290h+var_140+8], 0Bh
/*1409a58d8*/  mov qword ptr [rbp+290h+var_130], r10
/*1409a58df*/  mov qword ptr [rbp+290h+var_130+8], 0Bh
/*1409a58ea*/ loc_1409A58EA: lea rcx, [rbp+290h+var_220]
/*1409a58ee*/  lea rdx, [rbp+290h+var_B8]
/*1409a58f5*/  lea r8, [rbp+290h+var_160]
/*1409a58fc*/  lea r9, [rbp+290h+var_140]
/*1409a5903*/  call sub_140307860
/*1409a5908*/  nop
/*1409a5909*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a590d*/  jz short loc_1409A5919
/*1409a590f*/ loc_1409A590F: lea rcx, [rbp+290h+var_220]
/*1409a5913*/  call sub_1400104F0
/*1409a5918*/  nop
/*1409a5919*/ loc_1409A5919: call nullsub_1
/*1409a591e*/  mov ecx, 7
/*1409a5923*/  mov edx, 1
/*1409a5928*/  call sub_140001650
/*1409a592d*/  test rax, rax
/*1409a5930*/  jz loc_1409A6D7B
/*1409a5936*/  mov dword ptr [rax+3], 64695F6Ch
/*1409a593d*/  mov dword ptr [rax], 6C6C6163h
/*1409a5943*/  mov qword ptr [rbp+290h+var_160], 7
/*1409a594e*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a5955*/  mov qword ptr [rbp+290h+var_150], 7
/*1409a5960*/  mov rax, [rbp+290h+var_A0]
/*1409a5967*/  mov rbx, [rax-40h]
/*1409a596b*/  test rbx, rbx
/*1409a596e*/  js loc_1409A6ABC
/*1409a5974*/  jz loc_1409A5DF3
/*1409a597a*/  mov r13, [rax-48h]
/*1409a597e*/  call nullsub_1
/*1409a5983*/  mov r12d, 1
/*1409a5989*/  mov edx, 1
/*1409a598e*/  mov rcx, rbx
/*1409a5991*/  call sub_140001650
/*1409a5996*/  test rax, rax
/*1409a5999*/  jz loc_1409A6ABF
/*1409a599f*/  mov r14, rax
/*1409a59a2*/  mov rcx, rax
/*1409a59a5*/  mov rdx, r13
/*1409a59a8*/  mov r8, rbx
/*1409a59ab*/  call sub_141684120
/*1409a59b0*/  mov r13, [rbp+290h+var_D0]
/*1409a59b7*/  lea r12, [rdi+120h]
/*1409a59be*/  jmp loc_1409A5DF9
/*1409a59c3*/ loc_1409A59C3: mov ebx, 1
/*1409a59c8*/ loc_1409A59C8: mov byte ptr [rbp+290h+var_140], 3
/*1409a59cf*/  mov qword ptr [rbp+290h+var_140+8], r14
/*1409a59d6*/  mov qword ptr [rbp+290h+var_130], rbx
/*1409a59dd*/  mov qword ptr [rbp+290h+var_130+8], r14
/*1409a59e4*/  mov [rbp+290h+var_B9], 0
/*1409a59eb*/ loc_1409A59EB: lea rcx, [rbp+290h+var_220]
/*1409a59ef*/  lea rdx, [rbp+290h+var_238]
/*1409a59f3*/  lea r8, [rbp+290h+var_B8]
/*1409a59fa*/  lea r9, [rbp+290h+var_140]
/*1409a5a01*/  call sub_140307860
/*1409a5a06*/  nop
/*1409a5a07*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5a0b*/  jz short loc_1409A5A17
/*1409a5a0d*/ loc_1409A5A0D: lea rcx, [rbp+290h+var_220]
/*1409a5a11*/  call sub_1400104F0
/*1409a5a16*/  nop
/*1409a5a17*/ loc_1409A5A17: call nullsub_1
/*1409a5a1c*/  mov ecx, 6
/*1409a5a21*/  mov edx, 1
/*1409a5a26*/  call sub_140001650
/*1409a5a2b*/  test rax, rax
/*1409a5a2e*/  jz loc_1409A6DE4
/*1409a5a34*/  mov word ptr [rax+4], 7375h
/*1409a5a3a*/  mov dword ptr [rax], 74617473h
/*1409a5a40*/  mov qword ptr [rbp+290h+var_B8], 6
/*1409a5a4b*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a5a52*/  mov [rbp+290h+var_A8], 6
/*1409a5a5d*/  call nullsub_1
/*1409a5a62*/  mov ecx, 0Bh
/*1409a5a67*/  mov edx, 1
/*1409a5a6c*/  call sub_140001650
/*1409a5a71*/  test rax, rax
/*1409a5a74*/  mov [rbp+290h+var_168], rax
/*1409a5a7b*/  jz loc_1409A6DCF
/*1409a5a81*/  mov r10, rax
/*1409a5a84*/  mov rax, 72676F72705F6E69h
/*1409a5a8e*/  mov [r10], rax
/*1409a5a91*/  mov dword ptr [r10+7], 73736572h
/*1409a5a99*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a5aa0*/  mov qword ptr [rbp+290h+var_140+8], 0Bh
/*1409a5aab*/  mov qword ptr [rbp+290h+var_130], r10
/*1409a5ab2*/  mov qword ptr [rbp+290h+var_130+8], 0Bh
/*1409a5abd*/ loc_1409A5ABD: lea rcx, [rbp+290h+var_220]
/*1409a5ac1*/  lea rdx, [rbp+290h+var_238]
/*1409a5ac5*/  lea r8, [rbp+290h+var_B8]
/*1409a5acc*/  lea r9, [rbp+290h+var_140]
/*1409a5ad3*/  call sub_140307860
/*1409a5ad8*/  nop
/*1409a5ad9*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5add*/  jz short loc_1409A5AE9
/*1409a5adf*/ loc_1409A5ADF: lea rcx, [rbp+290h+var_220]
/*1409a5ae3*/  call sub_1400104F0
/*1409a5ae8*/  nop
/*1409a5ae9*/ loc_1409A5AE9: call nullsub_1
/*1409a5aee*/  mov ecx, 7
/*1409a5af3*/  mov edx, 1
/*1409a5af8*/  call sub_140001650
/*1409a5afd*/  test rax, rax
/*1409a5b00*/  jz loc_1409A6DBA
/*1409a5b06*/  mov dword ptr [rax+3], 64695F6Ch
/*1409a5b0d*/  mov dword ptr [rax], 6C6C6163h
/*1409a5b13*/  mov qword ptr [rbp+290h+var_B8], 7
/*1409a5b1e*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a5b25*/  mov [rbp+290h+var_A8], 7
/*1409a5b30*/  mov rax, [rbp+290h+var_A0]
/*1409a5b37*/  mov r14, [rax-40h]
/*1409a5b3b*/  test r14, r14
/*1409a5b3e*/  js loc_1409A6AD7
/*1409a5b44*/  jz loc_1409A5EEE
/*1409a5b4a*/  mov rax, [rbp+290h+var_A0]
/*1409a5b51*/  mov r12, [rax-48h]
/*1409a5b55*/  call nullsub_1
/*1409a5b5a*/  mov r13d, 1
/*1409a5b60*/  mov edx, 1
/*1409a5b65*/  mov rcx, r14
/*1409a5b68*/  call sub_140001650
/*1409a5b6d*/  test rax, rax
/*1409a5b70*/  jz loc_1409A6ADA
/*1409a5b76*/  mov rbx, rax
/*1409a5b79*/  mov rcx, rax
/*1409a5b7c*/  mov rdx, r12
/*1409a5b7f*/  mov r8, r14
/*1409a5b82*/  call sub_141684120
/*1409a5b87*/  mov r13, [rbp+290h+var_D0]
/*1409a5b8e*/  lea r12, [rdi+120h]
/*1409a5b95*/  jmp loc_1409A5EF3
/*1409a5b9a*/ loc_1409A5B9A: mov r14d, 1
/*1409a5ba0*/ loc_1409A5BA0: mov byte ptr [rbp+290h+var_140], 3
/*1409a5ba7*/  mov qword ptr [rbp+290h+var_140+8], rbx
/*1409a5bae*/  mov qword ptr [rbp+290h+var_130], r14
/*1409a5bb5*/  mov qword ptr [rbp+290h+var_130+8], rbx
/*1409a5bbc*/  mov [rbp+290h+var_C0], 0
/*1409a5bc3*/ loc_1409A5BC3: lea rcx, [rbp+290h+var_220]
/*1409a5bc7*/  lea rdx, [rbp+290h+var_B8]
/*1409a5bce*/  lea r8, [rbp+290h+var_1B0]
/*1409a5bd5*/  lea r9, [rbp+290h+var_140]
/*1409a5bdc*/  call sub_140307860
/*1409a5be1*/  nop
/*1409a5be2*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5be6*/  jz short loc_1409A5BF2
/*1409a5be8*/ loc_1409A5BE8: lea rcx, [rbp+290h+var_220]
/*1409a5bec*/  call sub_1400104F0
/*1409a5bf1*/  nop
/*1409a5bf2*/ loc_1409A5BF2: call nullsub_1
/*1409a5bf7*/  mov ecx, 5
/*1409a5bfc*/  mov edx, 1
/*1409a5c01*/  call sub_140001650
/*1409a5c06*/  test rax, rax
/*1409a5c09*/  jz loc_1409A6DF9
/*1409a5c0f*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409a5c13*/  mov dword ptr [rax], 746C6564h
/*1409a5c19*/  mov [rbp+290h+var_1B0], 5
/*1409a5c24*/  mov [rbp+290h+var_1A8], rax
/*1409a5c2b*/  mov qword ptr [rbp+290h+var_1A0], 5
/*1409a5c36*/  mov r8, [rbp+290h+var_188]
/*1409a5c3d*/  test r8, r8
/*1409a5c40*/  js loc_1409A6AF2
/*1409a5c46*/  call nullsub_1
/*1409a5c4b*/  mov ebx, 1
/*1409a5c50*/  mov edx, 1
/*1409a5c55*/  mov rcx, [rbp+290h+var_188]
/*1409a5c5c*/  call sub_140001650
/*1409a5c61*/  mov r8, [rbp+290h+var_188]
/*1409a5c68*/  test rax, rax
/*1409a5c6b*/  jz loc_1409A6AF4
/*1409a5c71*/  mov r14, rax
/*1409a5c74*/  mov rcx, rax
/*1409a5c77*/  mov rdx, [rbp+290h+var_260]
/*1409a5c7b*/  mov rbx, r8
/*1409a5c7e*/  call sub_141684120
/*1409a5c83*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a5c8a*/  mov qword ptr [rbp+290h+var_140+8], rbx
/*1409a5c91*/  mov qword ptr [rbp+290h+var_130], r14
/*1409a5c98*/  mov qword ptr [rbp+290h+var_130+8], rbx
/*1409a5c9f*/  mov [rbp+290h+var_C1], 0
/*1409a5ca6*/ loc_1409A5CA6: lea rcx, [rbp+290h+var_220]
/*1409a5caa*/  lea rdx, [rbp+290h+var_B8]
/*1409a5cb1*/  lea r8, [rbp+290h+var_1B0]
/*1409a5cb8*/  lea r9, [rbp+290h+var_140]
/*1409a5cbf*/  call sub_140307860
/*1409a5cc4*/  nop
/*1409a5cc5*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5cc9*/  jz short loc_1409A5CD5
/*1409a5ccb*/ loc_1409A5CCB: lea rcx, [rbp+290h+var_220]
/*1409a5ccf*/  call sub_1400104F0
/*1409a5cd4*/  nop
/*1409a5cd5*/ loc_1409A5CD5: mov rax, [rbp+290h+var_A8]
/*1409a5cdc*/  lea rcx, [rbp+290h+var_160+8]
/*1409a5ce3*/  mov [rcx+10h], rax
/*1409a5ce7*/  movdqu xmm0, [rbp+290h+var_B8]
/*1409a5cef*/  movdqu xmmword ptr [rcx], xmm0
/*1409a5cf3*/  mov byte ptr [rbp+290h+var_160], 5
/*1409a5cfa*/  lea rax, xmmword_1417A5FA0
/*1409a5d01*/  mov [rbp+290h+var_1B0], rax
/*1409a5d08*/  mov [rbp+290h+var_1A8], 26h ; '&'
/*1409a5d13*/  lea rax, [rbp+290h+var_160]
/*1409a5d1a*/  mov qword ptr [rbp+290h+var_B8], rax
/*1409a5d21*/  lea rax, [rbp+290h+var_1B0]
/*1409a5d28*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a5d2f*/  lea rax, sub_14041F680
/*1409a5d36*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a5d3d*/  lea rax, [rbp+290h+var_B8]
/*1409a5d44*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a5d4b*/  lea rax, sub_140B982E0
/*1409a5d52*/  mov qword ptr [rbp+290h+var_130+8], rax
/*1409a5d59*/ loc_1409A5D59: lea rcx, [rbp+290h+var_220]
/*1409a5d5d*/  lea rdx, unk_1417A94D0
/*1409a5d64*/  lea r8, [rbp+290h+var_140]
/*1409a5d6b*/  call sub_14149C0F0
/*1409a5d70*/  nop
/*1409a5d71*/ loc_1409A5D71: mov rax, qword ptr [rbp+290h+var_220+8]
/*1409a5d75*/  mov [rbp+290h+var_90], rax
/*1409a5d7c*/  mov rbx, qword ptr [rbp+290h+var_210]
/*1409a5d83*/  mov rax, qword ptr [rbp+290h+var_180]
/*1409a5d8a*/  mov r14, [rbp+290h+var_170]
/*1409a5d91*/  sub rax, r14
/*1409a5d94*/  cmp rbx, rax
/*1409a5d97*/  ja loc_1409A6899
/*1409a5d9d*/  test rbx, rbx
/*1409a5da0*/  jz short loc_1409A5DBB
/*1409a5da2*/ loc_1409A5DA2: mov rcx, qword ptr [rbp+290h+var_180+8]
/*1409a5da9*/  add rcx, r14
/*1409a5dac*/  mov rdx, [rbp+290h+var_90]
/*1409a5db3*/  mov r8, rbx
/*1409a5db6*/  call sub_141684120
/*1409a5dbb*/ loc_1409A5DBB: add r14, rbx
/*1409a5dbe*/  mov [rbp+290h+var_170], r14
/*1409a5dc5*/  mov rdx, qword ptr [rbp+290h+var_220]
/*1409a5dc9*/  test rdx, rdx
/*1409a5dcc*/  jz short loc_1409A5DE1
/*1409a5dce*/  mov r8d, 1
/*1409a5dd4*/  mov rcx, [rbp+290h+var_90]
/*1409a5ddb*/  call sub_140001660
/*1409a5de0*/  nop
/*1409a5de1*/ loc_1409A5DE1: lea rcx, [rbp+290h+var_160]
/*1409a5de8*/  call sub_1400104F0
/*1409a5ded*/  nop
/*1409a5dee*/  jmp loc_1409A67FB
/*1409a5df3*/ loc_1409A5DF3: mov r14d, 1
/*1409a5df9*/ loc_1409A5DF9: mov byte ptr [rbp+290h+var_140], 3
/*1409a5e00*/  mov qword ptr [rbp+290h+var_140+8], rbx
/*1409a5e07*/  mov qword ptr [rbp+290h+var_130], r14
/*1409a5e0e*/  mov qword ptr [rbp+290h+var_130+8], rbx
/*1409a5e15*/  mov [rbp+290h+var_BE], 0
/*1409a5e1c*/ loc_1409A5E1C: lea rcx, [rbp+290h+var_220]
/*1409a5e20*/  lea rdx, [rbp+290h+var_B8]
/*1409a5e27*/  lea r8, [rbp+290h+var_160]
/*1409a5e2e*/  lea r9, [rbp+290h+var_140]
/*1409a5e35*/  call sub_140307860
/*1409a5e3a*/  nop
/*1409a5e3b*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5e3f*/  jz short loc_1409A5E4B
/*1409a5e41*/ loc_1409A5E41: lea rcx, [rbp+290h+var_220]
/*1409a5e45*/  call sub_1400104F0
/*1409a5e4a*/  nop
/*1409a5e4b*/ loc_1409A5E4B: call nullsub_1
/*1409a5e50*/  mov ecx, 4
/*1409a5e55*/  mov edx, 1
/*1409a5e5a*/  call sub_140001650
/*1409a5e5f*/  test rax, rax
/*1409a5e62*/  jz loc_1409A6E20
/*1409a5e68*/  mov dword ptr [rax], 656D616Eh
/*1409a5e6e*/  mov qword ptr [rbp+290h+var_160], 4
/*1409a5e79*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a5e80*/  mov qword ptr [rbp+290h+var_150], 4
/*1409a5e8b*/  mov rax, [rbp+290h+var_A0]
/*1409a5e92*/  mov rbx, [rax-28h]
/*1409a5e96*/  test rbx, rbx
/*1409a5e99*/  js loc_1409A6B0C
/*1409a5e9f*/  jz loc_1409A5FEC
/*1409a5ea5*/  mov r13, [rax-30h]
/*1409a5ea9*/  call nullsub_1
/*1409a5eae*/  mov r12d, 1
/*1409a5eb4*/  mov edx, 1
/*1409a5eb9*/  mov rcx, rbx
/*1409a5ebc*/  call sub_140001650
/*1409a5ec1*/  test rax, rax
/*1409a5ec4*/  jz loc_1409A6B0F
/*1409a5eca*/  mov r14, rax
/*1409a5ecd*/  mov rcx, rax
/*1409a5ed0*/  mov rdx, r13
/*1409a5ed3*/  mov r8, rbx
/*1409a5ed6*/  call sub_141684120
/*1409a5edb*/  mov r13, [rbp+290h+var_D0]
/*1409a5ee2*/  lea r12, [rdi+120h]
/*1409a5ee9*/  jmp loc_1409A5FF2
/*1409a5eee*/ loc_1409A5EEE: mov ebx, 1
/*1409a5ef3*/ loc_1409A5EF3: mov byte ptr [rbp+290h+var_140], 3
/*1409a5efa*/  mov qword ptr [rbp+290h+var_140+8], r14
/*1409a5f01*/  mov qword ptr [rbp+290h+var_130], rbx
/*1409a5f08*/  mov qword ptr [rbp+290h+var_130+8], r14
/*1409a5f0f*/  mov [rbp+290h+var_BA], 0
/*1409a5f16*/ loc_1409A5F16: lea rcx, [rbp+290h+var_220]
/*1409a5f1a*/  lea rdx, [rbp+290h+var_238]
/*1409a5f1e*/  lea r8, [rbp+290h+var_B8]
/*1409a5f25*/  lea r9, [rbp+290h+var_140]
/*1409a5f2c*/  call sub_140307860
/*1409a5f31*/  nop
/*1409a5f32*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a5f36*/  jz short loc_1409A5F42
/*1409a5f38*/ loc_1409A5F38: lea rcx, [rbp+290h+var_220]
/*1409a5f3c*/  call sub_1400104F0
/*1409a5f41*/  nop
/*1409a5f42*/ loc_1409A5F42: call nullsub_1
/*1409a5f47*/  mov ecx, 4
/*1409a5f4c*/  mov edx, 1
/*1409a5f51*/  call sub_140001650
/*1409a5f56*/  test rax, rax
/*1409a5f59*/  jz loc_1409A6E0E
/*1409a5f5f*/  mov dword ptr [rax], 656D616Eh
/*1409a5f65*/  mov qword ptr [rbp+290h+var_B8], 4
/*1409a5f70*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a5f77*/  mov [rbp+290h+var_A8], 4
/*1409a5f82*/  mov rax, [rbp+290h+var_A0]
/*1409a5f89*/  mov r14, [rax-28h]
/*1409a5f8d*/  test r14, r14
/*1409a5f90*/  js loc_1409A6B27
/*1409a5f96*/  jz loc_1409A6109
/*1409a5f9c*/  mov rax, [rbp+290h+var_A0]
/*1409a5fa3*/  mov r12, [rax-30h]
/*1409a5fa7*/  call nullsub_1
/*1409a5fac*/  mov r13d, 1
/*1409a5fb2*/  mov edx, 1
/*1409a5fb7*/  mov rcx, r14
/*1409a5fba*/  call sub_140001650
/*1409a5fbf*/  test rax, rax
/*1409a5fc2*/  jz loc_1409A6B2A
/*1409a5fc8*/  mov rbx, rax
/*1409a5fcb*/  mov rcx, rax
/*1409a5fce*/  mov rdx, r12
/*1409a5fd1*/  mov r8, r14
/*1409a5fd4*/  call sub_141684120
/*1409a5fd9*/  mov r13, [rbp+290h+var_D0]
/*1409a5fe0*/  lea r12, [rdi+120h]
/*1409a5fe7*/  jmp loc_1409A610E
/*1409a5fec*/ loc_1409A5FEC: mov r14d, 1
/*1409a5ff2*/ loc_1409A5FF2: mov byte ptr [rbp+290h+var_140], 3
/*1409a5ff9*/  mov qword ptr [rbp+290h+var_140+8], rbx
/*1409a6000*/  mov qword ptr [rbp+290h+var_130], r14
/*1409a6007*/  mov qword ptr [rbp+290h+var_130+8], rbx
/*1409a600e*/  mov [rbp+290h+var_BF], 0
/*1409a6015*/ loc_1409A6015: lea rcx, [rbp+290h+var_220]
/*1409a6019*/  lea rdx, [rbp+290h+var_B8]
/*1409a6020*/  lea r8, [rbp+290h+var_160]
/*1409a6027*/  lea r9, [rbp+290h+var_140]
/*1409a602e*/  call sub_140307860
/*1409a6033*/  nop
/*1409a6034*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a6038*/  jz short loc_1409A6044
/*1409a603a*/ loc_1409A603A: lea rcx, [rbp+290h+var_220]
/*1409a603e*/  call sub_1400104F0
/*1409a6043*/  nop
/*1409a6044*/ loc_1409A6044: call nullsub_1
/*1409a6049*/  mov ecx, 5
/*1409a604e*/  mov edx, 1
/*1409a6053*/  call sub_140001650
/*1409a6058*/  test rax, rax
/*1409a605b*/  jz loc_1409A6E8C
/*1409a6061*/  mov byte ptr [rax+4], 74h ; 't'
/*1409a6065*/  mov dword ptr [rax], 75706E69h
/*1409a606b*/  mov qword ptr [rbp+290h+var_160], 5
/*1409a6076*/  mov qword ptr [rbp+290h+var_160+8], rax
/*1409a607d*/  mov qword ptr [rbp+290h+var_150], 5
/*1409a6088*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a608f*/  mov qword ptr [rbp+290h+var_140+8], 0
/*1409a609a*/  mov qword ptr [rbp+290h+var_130], 1
/*1409a60a5*/  mov qword ptr [rbp+290h+var_130+8], 0
/*1409a60b0*/  lea rcx, [rbp+290h+var_220]
/*1409a60b4*/  lea rdx, [rbp+290h+var_B8]
/*1409a60bb*/  lea r8, [rbp+290h+var_160]
/*1409a60c2*/  lea r9, [rbp+290h+var_140]
/*1409a60c9*/  call sub_140307860
/*1409a60ce*/  nop
/*1409a60cf*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a60d3*/  jz short loc_1409A60DF
/*1409a60d5*/  lea rcx, [rbp+290h+var_220]
/*1409a60d9*/  call sub_1400104F0
/*1409a60de*/  nop
/*1409a60df*/ loc_1409A60DF: mov rax, [rbp+290h+var_A8]
/*1409a60e6*/  lea rcx, [rbp+290h+var_1A8]
/*1409a60ed*/  mov [rcx+10h], rax
/*1409a60f1*/  movdqu xmm0, [rbp+290h+var_B8]
/*1409a60f9*/  movdqu xmmword ptr [rcx], xmm0
/*1409a60fd*/  mov byte ptr [rbp+290h+var_1B0], 5
/*1409a6104*/  jmp loc_1409A6491
/*1409a6109*/ loc_1409A6109: mov ebx, 1
/*1409a610e*/ loc_1409A610E: mov byte ptr [rbp+290h+var_140], 3
/*1409a6115*/  mov qword ptr [rbp+290h+var_140+8], r14
/*1409a611c*/  mov qword ptr [rbp+290h+var_130], rbx
/*1409a6123*/  mov qword ptr [rbp+290h+var_130+8], r14
/*1409a612a*/  mov [rbp+290h+var_BB], 0
/*1409a6131*/ loc_1409A6131: lea rcx, [rbp+290h+var_220]
/*1409a6135*/  lea rdx, [rbp+290h+var_238]
/*1409a6139*/  lea r8, [rbp+290h+var_B8]
/*1409a6140*/  lea r9, [rbp+290h+var_140]
/*1409a6147*/  call sub_140307860
/*1409a614c*/  nop
/*1409a614d*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a6151*/  jz short loc_1409A615D
/*1409a6153*/ loc_1409A6153: lea rcx, [rbp+290h+var_220]
/*1409a6157*/  call sub_1400104F0
/*1409a615c*/  nop
/*1409a615d*/ loc_1409A615D: call nullsub_1
/*1409a6162*/  mov ecx, 9
/*1409a6167*/  mov edx, 1
/*1409a616c*/  call sub_140001650
/*1409a6171*/  test rax, rax
/*1409a6174*/  jz loc_1409A6E7A
/*1409a617a*/  mov rcx, 746E656D75677261h
/*1409a6184*/  mov [rax], rcx
/*1409a6187*/  mov byte ptr [rax+8], 73h ; 's'
/*1409a618b*/  mov qword ptr [rbp+290h+var_B8], 9
/*1409a6196*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a619d*/  mov [rbp+290h+var_A8], 9
/*1409a61a8*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a61af*/  mov qword ptr [rbp+290h+var_140+8], 0
/*1409a61ba*/  mov qword ptr [rbp+290h+var_130], 1
/*1409a61c5*/  mov qword ptr [rbp+290h+var_130+8], 0
/*1409a61d0*/  lea rcx, [rbp+290h+var_220]
/*1409a61d4*/  lea rdx, [rbp+290h+var_238]
/*1409a61d8*/  lea r8, [rbp+290h+var_B8]
/*1409a61df*/  lea r9, [rbp+290h+var_140]
/*1409a61e6*/  call sub_140307860
/*1409a61eb*/  nop
/*1409a61ec*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a61f0*/  jz short loc_1409A61FC
/*1409a61f2*/  lea rcx, [rbp+290h+var_220]
/*1409a61f6*/  call sub_1400104F0
/*1409a61fb*/  nop
/*1409a61fc*/ loc_1409A61FC: mov rax, [rbp+290h+var_228]
/*1409a6200*/  lea rcx, [rbp+290h+var_160+8]
/*1409a6207*/  mov [rcx+10h], rax
/*1409a620b*/  movdqu xmm0, [rbp+290h+var_238]
/*1409a6210*/  movdqu xmmword ptr [rcx], xmm0
/*1409a6214*/  mov byte ptr [rbp+290h+var_160], 5
/*1409a621b*/  cmp qword ptr [rdi+148h], 0
/*1409a6223*/  jz loc_1409A643B
/*1409a6229*/ loc_1409A6229: lea rcx, [rdi+150h]
/*1409a6230*/  mov rdx, [rbp+290h+var_90]
/*1409a6237*/  call sub_140378810
/*1409a623c*/  nop
/*1409a623d*/ loc_1409A623D: mov r14, rax
/*1409a6240*/  shr rax, 39h
/*1409a6244*/  mov r13, [rdi+130h]
/*1409a624b*/  mov rdx, [rdi+138h]
/*1409a6252*/  movd xmm0, eax
/*1409a6256*/  punpcklbw xmm0, xmm0
/*1409a625a*/  pshuflw xmm0, xmm0, 0
/*1409a625f*/  pshufd xmm8, xmm0, 44h ; 'D'
/*1409a6265*/  xor r9d, r9d
/*1409a6268*/ loc_1409A6268: and r14, rdx
/*1409a626b*/  movdqu xmm9, xmmword ptr [r13+r14+0]
/*1409a6272*/  movdqa xmm0, xmm9
/*1409a6277*/  pcmpeqb xmm0, xmm8
/*1409a627c*/  pmovmskb r10d, xmm0
/*1409a6281*/  test r10d, r10d
/*1409a6284*/  jz loc_1409A630C
/*1409a628a*/  mov rax, [rbp+290h+var_A0]
/*1409a6291*/  mov r8, [rax-28h]
/*1409a6295*/  mov [rbp+290h+var_168], rdx
/*1409a629c*/  mov [rbp+290h+var_248], r9
/*1409a62a0*/ loc_1409A62A0: mov [rbp+290h+var_90], r10
/*1409a62a7*/  tzcnt eax, r10d
/*1409a62ac*/  add rax, r14
/*1409a62af*/  and rax, rdx
/*1409a62b2*/  neg rax
/*1409a62b5*/  lea rbx, [rax+rax*2]
/*1409a62b9*/  shl rbx, 4
/*1409a62bd*/  cmp r8, [r13+rbx-20h]
/*1409a62c2*/  jnz short loc_1409A62E8
/*1409a62c4*/  add rbx, r13
/*1409a62c7*/  mov rdx, [rbx-28h]
/*1409a62cb*/  mov rax, [rbp+290h+var_A0]
/*1409a62d2*/  mov r12, [rax-30h]
/*1409a62d6*/  mov rcx, r12
/*1409a62d9*/  mov r15, r8
/*1409a62dc*/  call sub_1416847B0
/*1409a62e1*/  mov r8, r15
/*1409a62e4*/  test eax, eax
/*1409a62e6*/  jz short loc_1409A632A
/*1409a62e8*/ loc_1409A62E8: mov rdx, [rbp+290h+var_90]
/*1409a62ef*/  lea eax, [rdx-1]
/*1409a62f2*/  and ax, dx
/*1409a62f5*/  mov r10d, eax
/*1409a62f8*/  lea r12, [rdi+120h]
/*1409a62ff*/  mov rdx, [rbp+290h+var_168]
/*1409a6306*/  mov r9, [rbp+290h+var_248]
/*1409a630a*/  jnz short loc_1409A62A0
/*1409a630c*/ loc_1409A630C: pcmpeqb xmm9, xmm7
/*1409a6311*/  pmovmskb eax, xmm9
/*1409a6316*/  test eax, eax
/*1409a6318*/  jnz short loc_1409A6383
/*1409a631a*/  add r14, r9
/*1409a631d*/  add r14, 10h
/*1409a6321*/  add r9, 10h
/*1409a6325*/  jmp loc_1409A6268
/*1409a632a*/ loc_1409A632A: mov r13, [rbx-8]
/*1409a632e*/  mov r14, r13
/*1409a6331*/  sub r14, r8
/*1409a6334*/  jb loc_1409A6426
/*1409a633a*/  mov rbx, [rbx-10h]
/*1409a633e*/  lea rdx, [rbx+r14]
/*1409a6342*/  mov rcx, r12
/*1409a6345*/  call sub_1416847B0
/*1409a634a*/  test eax, eax
/*1409a634c*/  jnz loc_1409A6426
/*1409a6352*/  test r14, r14
/*1409a6355*/  js loc_1409A6B42
/*1409a635b*/  jz short loc_1409A6396
/*1409a635d*/  call nullsub_1
/*1409a6362*/  mov r12d, 1
/*1409a6368*/  mov edx, 1
/*1409a636d*/  mov rcx, r14
/*1409a6370*/  call sub_140001650
/*1409a6375*/  mov [rbp+290h+var_240], rax
/*1409a6379*/  test rax, rax
/*1409a637c*/  jnz short loc_1409A639F
/*1409a637e*/  jmp loc_1409A6E9E
/*1409a6383*/ loc_1409A6383: mov r15, [rbp+290h+var_1B8]
/*1409a638a*/  mov r13, [rbp+290h+var_D0]
/*1409a6391*/  jmp loc_1409A643B
/*1409a6396*/ loc_1409A6396: mov eax, 1
/*1409a639b*/  mov [rbp+290h+var_240], rax
/*1409a639f*/ loc_1409A639F: cmp r13, r15
/*1409a63a2*/  jz short loc_1409A63B3
/*1409a63a4*/  mov rcx, [rbp+290h+var_240]
/*1409a63a8*/  mov rdx, rbx
/*1409a63ab*/  mov r8, r14
/*1409a63ae*/  call sub_141684120
/*1409a63b3*/ loc_1409A63B3: mov qword ptr [rbp+290h+var_140+8], r14
/*1409a63ba*/  mov rax, [rbp+290h+var_240]
/*1409a63be*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a63c5*/  mov qword ptr [rbp+290h+var_130+8], r14
/*1409a63cc*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a63d3*/  mov [rbp+290h+var_BC], 1
/*1409a63da*/ loc_1409A63DA: mov edx, 9
/*1409a63df*/  lea rcx, aNamespace; "namespace"
/*1409a63e6*/  lea r8, [rbp+290h+var_160]
/*1409a63ed*/  call sub_141433E50
/*1409a63f2*/  mov [rbp+290h+var_90], rax
/*1409a63f9*/ loc_1409A63F9: mov rcx, [rbp+290h+var_90]
/*1409a6400*/  call sub_1400104F0
/*1409a6405*/  nop
/*1409a6406*/  movdqu xmm0, [rbp+290h+var_140]
/*1409a640e*/  movdqu xmm1, [rbp+290h+var_130]
/*1409a6416*/  mov rax, [rbp+290h+var_90]
/*1409a641d*/  movdqu xmmword ptr [rax+10h], xmm1
/*1409a6422*/  movdqu xmmword ptr [rax], xmm0
/*1409a6426*/ loc_1409A6426: mov r15, [rbp+290h+var_1B8]
/*1409a642d*/  mov r13, [rbp+290h+var_D0]
/*1409a6434*/  lea r12, [rdi+120h]
/*1409a643b*/ loc_1409A643B: movzx eax, byte ptr [rbp+290h+var_160]
/*1409a6442*/  mov rcx, qword ptr [rbp+290h+var_160+1]
/*1409a6449*/  mov edx, dword ptr [rbp+290h+var_160+9]
/*1409a644f*/  movzx r8d, word ptr [rbp+290h+var_160+0Dh]
/*1409a6457*/  movzx r9d, byte ptr [rbp+290h+var_160+0Fh]
/*1409a645f*/  movdqu xmm0, [rbp+290h+var_150]
/*1409a6467*/  movdqa [rbp+290h+var_1A0], xmm0
/*1409a646f*/  mov byte ptr [rbp+290h+var_1B0], al
/*1409a6475*/  mov [rbp+290h+var_1B0+1], rcx
/*1409a647c*/  mov dword ptr [rbp+290h+var_1A8+1], edx
/*1409a6482*/  mov word ptr [rbp+290h+var_1A8+5], r8w
/*1409a648a*/  mov byte ptr [rbp+290h+var_1A8+7], r9b
/*1409a6491*/ loc_1409A6491: mov qword ptr [rbp+290h+var_238], 0
/*1409a6499*/  mov [rbp+290h+var_228], 0
/*1409a64a1*/  call nullsub_1
/*1409a64a6*/  mov ecx, 4
/*1409a64ab*/  mov edx, 1
/*1409a64b0*/  call sub_140001650
/*1409a64b5*/  test rax, rax
/*1409a64b8*/  jz loc_1409A6E68
/*1409a64be*/  mov dword ptr [rax], 65707974h
/*1409a64c4*/  mov qword ptr [rbp+290h+var_B8], 4
/*1409a64cf*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a64d6*/  mov [rbp+290h+var_A8], 4
/*1409a64e1*/  call nullsub_1
/*1409a64e6*/  mov ecx, 1Ah
/*1409a64eb*/  mov edx, 1
/*1409a64f0*/  call sub_140001650
/*1409a64f5*/  test rax, rax
/*1409a64f8*/  mov [rbp+290h+var_90], rax
/*1409a64ff*/  jz loc_1409A6E56
/*1409a6505*/  movups xmm0, cs:xmmword_1417A5D88+0Ah
/*1409a650c*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409a6510*/  movdqu xmm0, cs:xmmword_1417A5D88
/*1409a6518*/  movdqu xmmword ptr [rax], xmm0
/*1409a651c*/  mov byte ptr [rbp+290h+var_140], 3
/*1409a6523*/  mov qword ptr [rbp+290h+var_140+8], 1Ah
/*1409a652e*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a6535*/  mov qword ptr [rbp+290h+var_130+8], 1Ah
/*1409a6540*/ loc_1409A6540: lea rcx, [rbp+290h+var_220]
/*1409a6544*/  lea rdx, [rbp+290h+var_238]
/*1409a6548*/  lea r8, [rbp+290h+var_B8]
/*1409a654f*/  lea r9, [rbp+290h+var_140]
/*1409a6556*/  call sub_140307860
/*1409a655b*/  nop
/*1409a655c*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a6560*/  jz short loc_1409A656C
/*1409a6562*/ loc_1409A6562: lea rcx, [rbp+290h+var_220]
/*1409a6566*/  call sub_1400104F0
/*1409a656b*/  nop
/*1409a656c*/ loc_1409A656C: call nullsub_1
/*1409a6571*/  mov ecx, 0Ch
/*1409a6576*/  mov edx, 1
/*1409a657b*/  call sub_140001650
/*1409a6580*/  test rax, rax
/*1409a6583*/  jz loc_1409A6E44
/*1409a6589*/  mov rcx, 695F74757074756Fh
/*1409a6593*/  mov [rax], rcx
/*1409a6596*/  mov dword ptr [rax+8], 7865646Eh
/*1409a659d*/  mov qword ptr [rbp+290h+var_B8], 0Ch
/*1409a65a8*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a65af*/  mov [rbp+290h+var_A8], 0Ch
/*1409a65ba*/  mov rax, [rbp+290h+var_A0]
/*1409a65c1*/  mov eax, [rax-8]
/*1409a65c4*/  mov byte ptr [rbp+290h+var_140], 2
/*1409a65cb*/  mov qword ptr [rbp+290h+var_140+8], 0
/*1409a65d6*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a65dd*/  lea rcx, [rbp+290h+var_220]
/*1409a65e1*/  lea rdx, [rbp+290h+var_238]
/*1409a65e5*/  lea r8, [rbp+290h+var_B8]
/*1409a65ec*/  lea r9, [rbp+290h+var_140]
/*1409a65f3*/  call sub_140307860
/*1409a65f8*/  nop
/*1409a65f9*/  cmp byte ptr [rbp+290h+var_220], 0FFh
/*1409a65fd*/  jz short loc_1409A6609
/*1409a65ff*/  lea rcx, [rbp+290h+var_220]
/*1409a6603*/  call sub_1400104F0
/*1409a6608*/  nop
/*1409a6609*/ loc_1409A6609: call nullsub_1
/*1409a660e*/  mov ecx, 4
/*1409a6613*/  mov edx, 1
/*1409a6618*/  call sub_140001650
/*1409a661d*/  test rax, rax
/*1409a6620*/  jz loc_1409A6E32
/*1409a6626*/  mov dword ptr [rax], 6D657469h
/*1409a662c*/  mov qword ptr [rbp+290h+var_B8], 4
/*1409a6637*/  mov qword ptr [rbp+290h+var_B8+8], rax
/*1409a663e*/  mov [rbp+290h+var_A8], 4
/*1409a6649*/  mov [rbp+290h+var_91], 1
/*1409a6650*/ loc_1409A6650: lea rcx, [rbp+290h+var_140]
/*1409a6657*/  lea rdx, [rbp+290h+var_1B0]
/*1409a665e*/  call sub_140B842D0
/*1409a6663*/  nop
/*1409a6664*/  cmp byte ptr [rbp+290h+var_140], 0FFh
/*1409a666b*/  jz loc_1409A6C1F
/*1409a6671*/  movdqu xmm0, [rbp+290h+var_140]
/*1409a6679*/  movdqu xmm1, [rbp+290h+var_130]
/*1409a6681*/  movdqa [rbp+290h+var_210], xmm1
/*1409a6689*/  movdqa [rbp+290h+var_220], xmm0
/*1409a668e*/  mov [rbp+290h+var_91], 0
/*1409a6695*/  lea rcx, [rbp+290h+var_140]
/*1409a669c*/  lea rdx, [rbp+290h+var_238]
/*1409a66a0*/  lea r8, [rbp+290h+var_B8]
/*1409a66a7*/  lea r9, [rbp+290h+var_220]
/*1409a66ab*/  call sub_140307860
/*1409a66b0*/  nop
/*1409a66b1*/  cmp byte ptr [rbp+290h+var_140], 0FFh
/*1409a66b8*/  jz short loc_1409A66C7
/*1409a66ba*/ loc_1409A66BA: lea rcx, [rbp+290h+var_140]
/*1409a66c1*/  call sub_1400104F0
/*1409a66c6*/  nop
/*1409a66c7*/ loc_1409A66C7: mov rax, [rbp+290h+var_228]
/*1409a66cb*/  lea rcx, [rbp+290h+var_160+8]
/*1409a66d2*/  mov [rcx+10h], rax
/*1409a66d6*/  movdqu xmm0, [rbp+290h+var_238]
/*1409a66db*/  movdqu xmmword ptr [rcx], xmm0
/*1409a66df*/  mov byte ptr [rbp+290h+var_160], 5
/*1409a66e6*/  lea rax, xmmword_1417A5D88
/*1409a66ed*/  mov qword ptr [rbp+290h+var_B8], rax
/*1409a66f4*/  mov qword ptr [rbp+290h+var_B8+8], 1Ah
/*1409a66ff*/  lea rax, [rbp+290h+var_160]
/*1409a6706*/  mov qword ptr [rbp+290h+var_238], rax
/*1409a670a*/  lea rax, [rbp+290h+var_B8]
/*1409a6711*/  mov qword ptr [rbp+290h+var_140], rax
/*1409a6718*/  lea rax, sub_14041F680
/*1409a671f*/  mov qword ptr [rbp+290h+var_140+8], rax
/*1409a6726*/  lea rax, [rbp+290h+var_238]
/*1409a672a*/  mov qword ptr [rbp+290h+var_130], rax
/*1409a6731*/  lea rax, sub_140B982E0
/*1409a6738*/  mov qword ptr [rbp+290h+var_130+8], rax
/*1409a673f*/ loc_1409A673F: lea rcx, [rbp+290h+var_220]
/*1409a6743*/  lea rdx, unk_1417A94D0
/*1409a674a*/  lea r8, [rbp+290h+var_140]
/*1409a6751*/  call sub_14149C0F0
/*1409a6756*/  nop
/*1409a6757*/ loc_1409A6757: mov rax, qword ptr [rbp+290h+var_220+8]
/*1409a675b*/  mov [rbp+290h+var_90], rax
/*1409a6762*/  mov rbx, qword ptr [rbp+290h+var_210]
/*1409a6769*/  mov rax, qword ptr [rbp+290h+var_180]
/*1409a6770*/  mov r14, [rbp+290h+var_170]
/*1409a6777*/  sub rax, r14
/*1409a677a*/  cmp rbx, rax
/*1409a677d*/  ja loc_1409A6856
/*1409a6783*/  test rbx, rbx
/*1409a6786*/  jz short loc_1409A67A1
/*1409a6788*/ loc_1409A6788: mov rcx, qword ptr [rbp+290h+var_180+8]
/*1409a678f*/  add rcx, r14
/*1409a6792*/  mov rdx, [rbp+290h+var_90]
/*1409a6799*/  mov r8, rbx
/*1409a679c*/  call sub_141684120
/*1409a67a1*/ loc_1409A67A1: add r14, rbx
/*1409a67a4*/  mov [rbp+290h+var_170], r14
/*1409a67ab*/  mov rdx, qword ptr [rbp+290h+var_220]
/*1409a67af*/  test rdx, rdx
/*1409a67b2*/  jz short loc_1409A67C7
/*1409a67b4*/  mov r8d, 1
/*1409a67ba*/  mov rcx, [rbp+290h+var_90]
/*1409a67c1*/  call sub_140001660
/*1409a67c6*/  nop
/*1409a67c7*/ loc_1409A67C7: lea rcx, [rbp+290h+var_160]
/*1409a67ce*/  call sub_1400104F0
/*1409a67d3*/  nop
/*1409a67d4*/ loc_1409A67D4: lea rcx, [rbp+290h+var_1B0]
/*1409a67db*/  call sub_1400104F0
/*1409a67e0*/  nop
/*1409a67e1*/  mov r14, [rbp+290h+var_A0]
/*1409a67e8*/  movzx eax, byte ptr [r14-4]
/*1409a67ed*/  cmp [rbp+290h+var_188], 0
/*1409a67f5*/  jnz loc_1409A5230
/*1409a67fb*/ loc_1409A67FB: mov rbx, [rbp+290h+var_250]
/*1409a67ff*/ loc_1409A67FF: lea rcx, [rbp+290h+var_2A0]
/*1409a6803*/  call sub_1400104F0
/*1409a6808*/  nop
/*1409a6809*/  add r13, 20h ; ' '
/*1409a680d*/  lea rcx, aIndex_0; "index"
/*1409a6814*/  cmp r13, rbx
/*1409a6817*/  jnz loc_1409A48BC
/*1409a681d*/  jmp loc_1409A68DC
/*1409a6822*/ loc_1409A6822: lea rcx, [r14-20h]
/*1409a6826*/  mov [rsp+310h+var_2F0], 1
/*1409a682f*/  mov r9d, 1
/*1409a6835*/  call sub_141688D30
/*1409a683a*/  nop
/*1409a683b*/  mov r14, [rbp+290h+var_A0]
/*1409a6842*/  mov rdx, [r14-10h]
/*1409a6846*/  mov rbx, [rbp+290h+var_250]
/*1409a684a*/  mov r8, [rbp+290h+var_188]
/*1409a6851*/  jmp loc_1409A5257
/*1409a6856*/ loc_1409A6856: mov [rsp+310h+var_2F0], 1
/*1409a685f*/  mov r9d, 1
/*1409a6865*/  lea rcx, [rbp+290h+var_180]
/*1409a686c*/  mov rdx, r14
/*1409a686f*/  mov r8, rbx
/*1409a6872*/  call sub_141688D30
/*1409a6877*/  nop
/*1409a6878*/  mov r14, [rbp+290h+var_170]
/*1409a687f*/  mov r15, [rbp+290h+var_1B8]
/*1409a6886*/  mov r13, [rbp+290h+var_D0]
/*1409a688d*/  lea r12, [rdi+120h]
/*1409a6894*/  jmp loc_1409A6788
/*1409a6899*/ loc_1409A6899: mov [rsp+310h+var_2F0], 1
/*1409a68a2*/  mov r9d, 1
/*1409a68a8*/  lea rcx, [rbp+290h+var_180]
/*1409a68af*/  mov rdx, r14
/*1409a68b2*/  mov r8, rbx
/*1409a68b5*/  call sub_141688D30
/*1409a68ba*/  nop
/*1409a68bb*/  mov r14, [rbp+290h+var_170]
/*1409a68c2*/  mov r15, [rbp+290h+var_1B8]
/*1409a68c9*/  mov r13, [rbp+290h+var_D0]
/*1409a68d0*/  lea r12, [rdi+120h]
/*1409a68d7*/  jmp loc_1409A5DA2
/*1409a68dc*/ loc_1409A68DC: lea rcx, aFinishReason; "finish_reason"
/*1409a68e3*/  mov edx, 0Dh
/*1409a68e8*/  mov r8, r15
/*1409a68eb*/  call sub_141433D50
/*1409a68f0*/  nop
/*1409a68f1*/  test rax, rax
/*1409a68f4*/  jz loc_1409A69F2
/*1409a68fa*/  cmp byte ptr [rax], 3
/*1409a68fd*/  jnz loc_1409A69F2
/*1409a6903*/  mov rbx, [rax+18h]
/*1409a6907*/  test rbx, rbx
/*1409a690a*/  jz loc_1409A69F2
/*1409a6910*/  mov r14, [rax+10h]
/*1409a6914*/  lea rdx, [rbp+290h+var_180]
/*1409a691b*/  mov rcx, rdi
/*1409a691e*/  call sub_1409B5630
/*1409a6923*/  nop
/*1409a6924*/  lea rdx, [rbp+290h+var_180]
/*1409a692b*/  mov rcx, rdi
/*1409a692e*/  call sub_1409B2D80
/*1409a6933*/  nop
/*1409a6934*/  lea rdx, [rbp+290h+var_180]
/*1409a693b*/  mov rcx, rdi
/*1409a693e*/  call sub_1409A9480
/*1409a6943*/  nop
/*1409a6944*/  lea rdx, [rbp+290h+var_180]
/*1409a694b*/  mov rcx, rdi
/*1409a694e*/  call sub_1409ABA90
/*1409a6953*/  nop
/*1409a6954*/  test rbx, rbx
/*1409a6957*/  jns short loc_1409A698B
/*1409a6959*/  xor r12d, r12d
/*1409a695c*/ loc_1409A695C: mov rcx, r12
/*1409a695f*/  mov rdx, rbx
/*1409a6962*/  call sub_1416C2D4B
/*1409a6968*/  jmp loc_1409A6E9C
/*1409a696d*/ loc_1409A696D: lea rcx, aEnsuredAbove; "ensured above"
/*1409a6974*/  lea r8, off_1417A5F50; "src\\core\\relay\\translator.rs"
/*1409a697b*/  mov edx, 0Dh
/*1409a6980*/  call sub_1416C3000
/*1409a6986*/ loc_1409A6986: jmp loc_1409A6E9C
/*1409a698b*/ loc_1409A698B: call nullsub_1
/*1409a6990*/  mov r12d, 1
/*1409a6996*/  mov edx, 1
/*1409a699b*/  mov rcx, rbx
/*1409a699e*/  call sub_140001650
/*1409a69a3*/  test rax, rax
/*1409a69a6*/  jz short loc_1409A695C
/*1409a69a8*/  mov r15, rax
/*1409a69ab*/  mov rcx, rax
/*1409a69ae*/  mov rdx, r14
/*1409a69b1*/  mov r8, rbx
/*1409a69b4*/  call sub_141684120
/*1409a69b9*/  mov rdx, [rdi+0E8h]
/*1409a69c0*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1409a69c4*/  jz short loc_1409A69DD
/*1409a69c6*/  test rdx, rdx
/*1409a69c9*/  jz short loc_1409A69DD
/*1409a69cb*/  mov rcx, [rdi+0F0h]
/*1409a69d2*/  mov r8d, 1
/*1409a69d8*/  call sub_140001660
/*1409a69dd*/ loc_1409A69DD: mov [rdi+0E8h], rbx
/*1409a69e4*/  mov [rdi+0F0h], r15
/*1409a69eb*/  mov [rdi+0F8h], rbx
/*1409a69f2*/ loc_1409A69F2: lea rcx, [rbp+290h+var_280]
/*1409a69f6*/  call sub_1400104F0
/*1409a69fb*/  nop
/*1409a69fc*/ loc_1409A69FC: mov rax, [rbp+290h+var_170]
/*1409a6a03*/  mov [rsi+10h], rax
/*1409a6a07*/  movups xmm0, [rbp+290h+var_180]
/*1409a6a0e*/  movups xmmword ptr [rsi], xmm0
/*1409a6a11*/  movaps xmm6, [rbp+290h+var_80]
/*1409a6a18*/  movaps xmm7, [rbp+290h+var_70]
/*1409a6a1f*/  movaps xmm8, [rbp+290h+var_60]
/*1409a6a27*/  movaps xmm9, [rbp+290h+var_50]
/*1409a6a2f*/  add rsp, 2D8h
/*1409a6a36*/  pop rbx
/*1409a6a37*/  pop rdi
/*1409a6a38*/  pop rsi
/*1409a6a39*/  pop r12
/*1409a6a3b*/  pop r13
/*1409a6a3d*/  pop r14
/*1409a6a3f*/  pop r15
/*1409a6a41*/  pop rbp
/*1409a6a42*/  retn
/*1409a6a43*/ loc_1409A6A43: xor r14d, r14d
/*1409a6a46*/ loc_1409A6A46: mov rcx, r14
/*1409a6a49*/  mov rdx, rbx
/*1409a6a4c*/  call sub_1416C2D4B
/*1409a6a52*/  jmp loc_1409A6E9C
/*1409a6a57*/ loc_1409A6A57: xor ebx, ebx
/*1409a6a59*/ loc_1409A6A59: mov rcx, rbx
/*1409a6a5c*/  mov rdx, [rbp+290h+var_258]
/*1409a6a60*/  call sub_1416C2D4B
/*1409a6a66*/  jmp loc_1409A6E9C
/*1409a6a6b*/ loc_1409A6A6B: xor r12d, r12d
/*1409a6a6e*/ loc_1409A6A6E: mov [rbp+290h+var_BD], 1
/*1409a6a75*/ loc_1409A6A75: mov rcx, r12
/*1409a6a78*/  mov rdx, rbx
/*1409a6a7b*/  call sub_1416C2D4B
/*1409a6a81*/  jmp loc_1409A6E9C
/*1409a6a86*/ loc_1409A6A86: xor r13d, r13d
/*1409a6a89*/ loc_1409A6A89: mov [rbp+290h+var_B9], 1
/*1409a6a90*/ loc_1409A6A90: mov rcx, r13
/*1409a6a93*/  mov rdx, r14
/*1409a6a96*/  call sub_1416C2D4B
/*1409a6a9c*/  jmp loc_1409A6E9C
/*1409a6aa1*/ loc_1409A6AA1: xor r12d, r12d
/*1409a6aa4*/ loc_1409A6AA4: mov [rbp+290h+var_C0], 1
/*1409a6aab*/ loc_1409A6AAB: mov rcx, r12
/*1409a6aae*/  mov rdx, rbx
/*1409a6ab1*/  call sub_1416C2D4B
/*1409a6ab7*/  jmp loc_1409A6E9C
/*1409a6abc*/ loc_1409A6ABC: xor r12d, r12d
/*1409a6abf*/ loc_1409A6ABF: mov [rbp+290h+var_BE], 1
/*1409a6ac6*/ loc_1409A6AC6: mov rcx, r12
/*1409a6ac9*/  mov rdx, rbx
/*1409a6acc*/  call sub_1416C2D4B
/*1409a6ad2*/  jmp loc_1409A6E9C
/*1409a6ad7*/ loc_1409A6AD7: xor r13d, r13d
/*1409a6ada*/ loc_1409A6ADA: mov [rbp+290h+var_BA], 1
/*1409a6ae1*/ loc_1409A6AE1: mov rcx, r13
/*1409a6ae4*/  mov rdx, r14
/*1409a6ae7*/  call sub_1416C2D4B
/*1409a6aed*/  jmp loc_1409A6E9C
/*1409a6af2*/ loc_1409A6AF2: xor ebx, ebx
/*1409a6af4*/ loc_1409A6AF4: mov [rbp+290h+var_C1], 1
/*1409a6afb*/ loc_1409A6AFB: mov rcx, rbx
/*1409a6afe*/  mov rdx, r8
/*1409a6b01*/  call sub_1416C2D4B
/*1409a6b07*/  jmp loc_1409A6E9C
/*1409a6b0c*/ loc_1409A6B0C: xor r12d, r12d
/*1409a6b0f*/ loc_1409A6B0F: mov [rbp+290h+var_BF], 1
/*1409a6b16*/ loc_1409A6B16: mov rcx, r12
/*1409a6b19*/  mov rdx, rbx
/*1409a6b1c*/  call sub_1416C2D4B
/*1409a6b22*/  jmp loc_1409A6E9C
/*1409a6b27*/ loc_1409A6B27: xor r13d, r13d
/*1409a6b2a*/ loc_1409A6B2A: mov [rbp+290h+var_BB], 1
/*1409a6b31*/ loc_1409A6B31: mov rcx, r13
/*1409a6b34*/  mov rdx, r14
/*1409a6b37*/  call sub_1416C2D4B
/*1409a6b3d*/  jmp loc_1409A6E9C
/*1409a6b42*/ loc_1409A6B42: xor r12d, r12d
/*1409a6b45*/ loc_1409A6B45: mov rcx, r12
/*1409a6b48*/  mov rdx, [rbp+290h+var_240]
/*1409a6b4c*/  call sub_1416C2D4B
/*1409a6b52*/  jmp loc_1409A6E9C
/*1409a6b57*/ loc_1409A6B57: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a6b5e*/  mov [rsp+310h+var_2F0], rax
/*1409a6b63*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409a6b6a*/  lea r9, unk_1417A5580
/*1409a6b71*/  lea r8, [rbp+290h+var_D1]
/*1409a6b78*/  mov edx, 37h ; '7'
/*1409a6b7d*/  call sub_1416C3060
/*1409a6b83*/  jmp loc_1409A6E9C
/*1409a6b88*/ loc_1409A6B88: lea rax, off_1417A9BB8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a6b8f*/  mov [rsp+310h+var_2F0], rax
/*1409a6b94*/  lea rcx, aADisplayImplem_3; "a Display implementation returned an er"...
/*1409a6b9b*/  lea r9, unk_1417A5580
/*1409a6ba2*/  lea r8, [rbp+290h+var_D1]
/*1409a6ba9*/  mov edx, 37h ; '7'
/*1409a6bae*/  call sub_1416C3060
/*1409a6bb4*/  jmp loc_1409A6E9C
/*1409a6bb9*/ loc_1409A6BB9: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a6bc0*/  call sub_1416C3040
/*1409a6bc6*/  jmp loc_1409A6E9C
/*1409a6bcb*/ loc_1409A6BCB: mov [rsp+310h+var_2F0], 1
/*1409a6bd4*/  mov r9d, 1
/*1409a6bda*/  mov r8, rbx
/*1409a6bdd*/  call sub_141688D30
/*1409a6be2*/  nop
/*1409a6be3*/  mov rdx, [rdi+68h]
/*1409a6be7*/  jmp loc_1409A46E0
/*1409a6bec*/ loc_1409A6BEC: mov [rsp+310h+var_2F0], 1
/*1409a6bf5*/  mov r9d, 1
/*1409a6bfb*/  mov r8, rbx
/*1409a6bfe*/  call sub_141688D30
/*1409a6c03*/  nop
/*1409a6c04*/  mov rdx, [rdi+68h]
/*1409a6c08*/  jmp loc_1409A474A
/*1409a6c0d*/ loc_1409A6C0D: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409a6c14*/  call sub_1416C3040
/*1409a6c1a*/  jmp loc_1409A6E9C
/*1409a6c1f*/ loc_1409A6C1F: mov rax, qword ptr [rbp+290h+var_140+8]
/*1409a6c26*/  mov qword ptr [rbp+290h+var_220], rax
/*1409a6c2a*/ loc_1409A6C2A: lea rax, off_1417A5F88; "src\\core\\relay\\translator.rs"
/*1409a6c31*/  mov [rsp+310h+var_2F0], rax
/*1409a6c36*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409a6c3d*/  lea r9, off_1417A5560
/*1409a6c44*/  lea r8, [rbp+290h+var_220]
/*1409a6c48*/  mov edx, 2Bh ; '+'
/*1409a6c4d*/  call sub_1416C3060
/*1409a6c53*/  jmp loc_1409A6E9C
/*1409a6c58*/ loc_1409A6C58: lea rax, off_1417A5F20; "src\\core\\relay\\translator.rs"
/*1409a6c5f*/  mov [rsp+310h+var_2F0], rax
/*1409a6c64*/  mov r9d, 10h
/*1409a6c6a*/  xor r8d, r8d
/*1409a6c6d*/  call sub_1416C2F60
/*1409a6c73*/  jmp loc_1409A6E9C
/*1409a6c78*/ loc_1409A6C78: lea rax, off_1417A5F68; "src\\core\\relay\\translator.rs"
/*1409a6c7f*/  mov [rsp+310h+var_2F0], rax
/*1409a6c84*/  mov r9d, 10h
/*1409a6c8a*/  xor r8d, r8d
/*1409a6c8d*/  call sub_1416C2F60
/*1409a6c93*/  jmp loc_1409A6E9C
/*1409a6c98*/ loc_1409A6C98: mov ecx, 1
/*1409a6c9d*/  mov edx, 2
/*1409a6ca2*/  call sub_1416C2D4B
/*1409a6ca8*/  jmp loc_1409A6E9C
/*1409a6cad*/ loc_1409A6CAD: mov ecx, 1
/*1409a6cb2*/  mov edx, 0Dh
/*1409a6cb7*/  call sub_1416C2D4B
/*1409a6cbd*/  jmp loc_1409A6E9C
/*1409a6cc2*/ loc_1409A6CC2: mov ecx, 1
/*1409a6cc7*/  mov edx, 4
/*1409a6ccc*/  call sub_1416C2D4B
/*1409a6cd2*/  jmp loc_1409A6E9C
/*1409a6cd7*/ loc_1409A6CD7: mov ecx, 1
/*1409a6cdc*/  mov edx, 2
/*1409a6ce1*/  call sub_1416C2D4B
/*1409a6ce7*/  jmp loc_1409A6E9C
/*1409a6cec*/ loc_1409A6CEC: mov ecx, 1
/*1409a6cf1*/  mov edx, 10h
/*1409a6cf6*/  call sub_1416C2D4B
/*1409a6cfc*/  jmp loc_1409A6E9C
/*1409a6d01*/ loc_1409A6D01: mov ecx, 1
/*1409a6d06*/  mov edx, 4
/*1409a6d0b*/  call sub_1416C2D4B
/*1409a6d11*/  jmp loc_1409A6E9C
/*1409a6d16*/ loc_1409A6D16: mov rbx, r15
/*1409a6d19*/  jmp loc_1409A6A46
/*1409a6d1e*/ loc_1409A6D1E: mov ecx, 1
/*1409a6d23*/  mov edx, 7
/*1409a6d28*/  call sub_1416C2D4B
/*1409a6d2e*/  jmp loc_1409A6E9C
/*1409a6d33*/ loc_1409A6D33: mov ecx, 1
/*1409a6d38*/  mov edx, 0Ch
/*1409a6d3d*/  call sub_1416C2D4B
/*1409a6d43*/  jmp loc_1409A6E9C
/*1409a6d48*/ loc_1409A6D48: mov ecx, 1
/*1409a6d4d*/  mov edx, 26h ; '&'
/*1409a6d52*/  call sub_1416C2D4B
/*1409a6d58*/  jmp loc_1409A6E9C
/*1409a6d5d*/ loc_1409A6D5D: mov ecx, 1
/*1409a6d62*/  mov edx, 4
/*1409a6d67*/  call sub_1416C2D4B
/*1409a6d6d*/  jmp loc_1409A6E9C
/*1409a6d72*/ loc_1409A6D72: mov [rbp+290h+var_258], rsi
/*1409a6d76*/  jmp loc_1409A6A59
/*1409a6d7b*/ loc_1409A6D7B: mov ecx, 1
/*1409a6d80*/  mov edx, 7
/*1409a6d85*/  call sub_1416C2D4B
/*1409a6d8b*/  jmp loc_1409A6E9C
/*1409a6d90*/ loc_1409A6D90: mov ecx, 1
/*1409a6d95*/  mov edx, 0Bh
/*1409a6d9a*/  call sub_1416C2D4B
/*1409a6da0*/  jmp loc_1409A6E9C
/*1409a6da5*/ loc_1409A6DA5: mov ecx, 1
/*1409a6daa*/  mov edx, 6
/*1409a6daf*/  call sub_1416C2D4B
/*1409a6db5*/  jmp loc_1409A6E9C
/*1409a6dba*/ loc_1409A6DBA: mov ecx, 1
/*1409a6dbf*/  mov edx, 7
/*1409a6dc4*/  call sub_1416C2D4B
/*1409a6dca*/  jmp loc_1409A6E9C
/*1409a6dcf*/ loc_1409A6DCF: mov ecx, 1
/*1409a6dd4*/  mov edx, 0Bh
/*1409a6dd9*/  call sub_1416C2D4B
/*1409a6ddf*/  jmp loc_1409A6E9C
/*1409a6de4*/ loc_1409A6DE4: mov ecx, 1
/*1409a6de9*/  mov edx, 6
/*1409a6dee*/  call sub_1416C2D4B
/*1409a6df4*/  jmp loc_1409A6E9C
/*1409a6df9*/ loc_1409A6DF9: mov ecx, 1
/*1409a6dfe*/  mov edx, 5
/*1409a6e03*/  call sub_1416C2D4B
/*1409a6e09*/  jmp loc_1409A6E9C
/*1409a6e0e*/ loc_1409A6E0E: mov ecx, 1
/*1409a6e13*/  mov edx, 4
/*1409a6e18*/  call sub_1416C2D4B
/*1409a6e1e*/  jmp short loc_1409A6E9C
/*1409a6e20*/ loc_1409A6E20: mov ecx, 1
/*1409a6e25*/  mov edx, 4
/*1409a6e2a*/  call sub_1416C2D4B
/*1409a6e30*/  jmp short loc_1409A6E9C
/*1409a6e32*/ loc_1409A6E32: mov ecx, 1
/*1409a6e37*/  mov edx, 4
/*1409a6e3c*/  call sub_1416C2D4B
/*1409a6e42*/  jmp short loc_1409A6E9C
/*1409a6e44*/ loc_1409A6E44: mov ecx, 1
/*1409a6e49*/  mov edx, 0Ch
/*1409a6e4e*/  call sub_1416C2D4B
/*1409a6e54*/  jmp short loc_1409A6E9C
/*1409a6e56*/ loc_1409A6E56: mov ecx, 1
/*1409a6e5b*/  mov edx, 1Ah
/*1409a6e60*/  call sub_1416C2D4B
/*1409a6e66*/  jmp short loc_1409A6E9C
/*1409a6e68*/ loc_1409A6E68: mov ecx, 1
/*1409a6e6d*/  mov edx, 4
/*1409a6e72*/  call sub_1416C2D4B
/*1409a6e78*/  jmp short loc_1409A6E9C
/*1409a6e7a*/ loc_1409A6E7A: mov ecx, 1
/*1409a6e7f*/  mov edx, 9
/*1409a6e84*/  call sub_1416C2D4B
/*1409a6e8a*/  jmp short loc_1409A6E9C
/*1409a6e8c*/ loc_1409A6E8C: mov ecx, 1
/*1409a6e91*/  mov edx, 5
/*1409a6e96*/  call sub_1416C2D4B
/*1409a6e9c*/ loc_1409A6E9C: ud2
/*1409a6e9e*/ loc_1409A6E9E: mov [rbp+290h+var_240], r14
/*1409a6ea2*/  jmp loc_1409A6B45
