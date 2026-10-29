// win 1.2.7 latest-exe | module src/core/relay/codex_catalog.rs | ea 0x140c9ff40 | successor of pre-update 0x14101f5f0 | session <审计会话>
// match evidence: {"body_sim": 0.478, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140C9FF40(__int64 a1, void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  HANDLE hObject; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+4Fh] [rbp-1h]
  __int64 v16; // [rsp+50h] [rbp+0h]

  v16 = -2;
  hObject = a2;
  v15 = 1;
  sub_1411D0BE0(&v12, a3, a4, a5);
  v8 = v12;
  v9 = v13;
  if ( v12 == 2 )
  {
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 2;
    CloseHandle(hObject);
  }
  else
  {
    nullsub_1(v7, v6);
    v10 = sub_140001650(0x8000, 1);
    if ( !v10 )
      sub_14196B2DB(1, 0x8000);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = 0x8000;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = hObject;
    *(_QWORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 56) = 0;
  }
  return a1;
}
