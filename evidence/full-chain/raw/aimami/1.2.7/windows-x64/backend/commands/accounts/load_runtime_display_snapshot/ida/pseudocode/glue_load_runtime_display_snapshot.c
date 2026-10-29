// fn load_runtime_display_snapshot (0x1405EC7D0, 380B) — tauri glue, commands/accounts
// IDA: AiMaMi.1.2.7 win64.exe (<审计环境>) | session <审计会话>
// 零用户参数；链: getter(0x140ECA180) -> build_envelope(0x140CF4D10) -> respond(0x140AABEA0)
__int64 __fastcall sub_1405EC7D0(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _BYTE v9[960]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v10[400]; // [rsp+3E0h] [rbp+360h] BYREF
  _BYTE v11[960]; // [rsp+570h] [rbp+4F0h] BYREF
  char v12[400]; // [rsp+930h] [rbp+8B0h] BYREF
  _BYTE v13[520]; // [rsp+AC0h] [rbp+A40h] BYREF
  _QWORD *v14; // [rsp+CC8h] [rbp+C48h]
  __int64 v15; // [rsp+CD0h] [rbp+C50h]
  __int64 v16; // [rsp+CD8h] [rbp+C58h]
  _QWORD *v17; // [rsp+CE0h] [rbp+C60h]
  char v18; // [rsp+CEFh] [rbp+C6Fh]
  __int64 v19; // [rsp+CF0h] [rbp+C70h]

  v19 = -2;
  sub_1419234B0(v13, a1, 520);
  sub_1419234B0(v12, a1 + 65, 400);
  v2 = a1[115];
  v3 = a1[116];
  v17 = a1;
  v4 = (_QWORD *)a1[117];
  v18 = 1;
  sub_140ECA180(v11);              // runtime_display_state_get_snapshot
  v18 = 1;
  sub_140CF4D10(v9, v11);          // build_envelope
  sub_1419234B0(v10, a1 + 65, 400);
  sub_1419234B0(v11, v9, 960);
  v18 = 0;
  sub_140AABEA0(v10, v11);         // respond
  if ( v2 != -1 )
  {
    v14 = v4;
    v16 = v2;
    v17 = nullptr;
    v15 = v3;
    v6 = v3;
    while ( v14 != v17 )
    {
      v17 = (_QWORD *)((char *)v17 + 1);
      v7 = v6 + 96;
      sub_1401AFF50(v6, v5);
      v6 = v7;
    }
    if ( v16 )
      sub_140001660(v15, 96 * v16, 8);
  }
  return sub_1405251E0(v13);
}
