// aimami 1.1.8 windows-x64 — reveal_relay_api_key_response_build_sys (renamed in IDB this session)
// VA: 0x140020ed0, size=299B (0x12b). FULL decompile, 0 truncation.
// Sole caller: reveal_relay_api_key_owner_sys (1 xref confirmed via xrefs_to) -> DEDICATED, not shared.
// session <审计会话> / machine <本地机器> / model claude-sonnet-5
//
// BYTE-IDENTICAL response-field-label construction vs the 1.1.1 windows baseline's
// reveal_relay_api_key_response_build_sys@0x1402188F0 (raw/aimami/1.1.1/windows-x64/reveal_relay_api_key/):
//   *v9 = 27503            -> 0x6B6F LE -> "ok"      (2B field label)
//   *(_DWORD*)(v13+3) = 1936942435  (0x73736563 LE -> "ess")
//   *v13               = 1667462483 (0x53756363 LE -> "Succ")
//   combined 7B = "Success" (field label)
// Confirms zero response-schema delta 1.1.1 -> 1.1.8 for this command.

__int64 __fastcall reveal_relay_api_key_response_build_sys(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rdi
  _DWORD *v13; // rax
  __int128 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  _WORD *v17; // [rsp+40h] [rbp-20h]
  _QWORD *v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v20 = -2;
  v5 = a3[1];               // providerId ptr (a3 = &providerId_ptr_len_pair)
  v18 = a3;
  v6 = a3[2];               // providerId len
  v19 = v5;
  sub_14026AD50(&v15, a2, v5, v6);   // == reveal_relay_api_key_state_lookup_sys (a2=manager value or None, v5/v6=providerId)
  nullsub_1(v8, v7);
  v9 = (_WORD *)sub_140001360(2, 1);   // alloc 2B for "ok" label
  if ( !v9 )
    sub_1412AD46B(1, 2);
  v12 = v9;
  *v9 = 27503;                        // "ok" (0x6B6F LE)
  nullsub_1(v11, v10);
  v13 = (_DWORD *)sub_140001360(7, 1);   // alloc 7B for "Success" label
  if ( !v13 )
  {
    v17 = v12;
    sub_1412AD46B(1, 7);
  }
  *(_DWORD *)((char *)v13 + 3) = 1936942435;   // "ess" tail
  *v13 = 1667462483;                            // "Succ" head -> combined "Success"
  *(_QWORD *)(a1 + 88) = v16;
  *(_OWORD *)(a1 + 72) = v15;          // apiKey payload from state_lookup (v15/v16)
  *(_QWORD *)a1 = 2;                   // Ok tag
  *(_QWORD *)(a1 + 8) = v12;           // ptr "ok"
  *(_QWORD *)(a1 + 16) = 2;            // len "ok"
  *(_QWORD *)(a1 + 24) = 7;            // len "Success"
  *(_QWORD *)(a1 + 32) = v13;          // ptr "Success"
  *(_QWORD *)(a1 + 40) = 7;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 8;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 100) = 1;
  if ( *v18 )
    sub_140001370(v19, *v18, 1);       // dealloc providerId scratch copy
  return a1;
}
