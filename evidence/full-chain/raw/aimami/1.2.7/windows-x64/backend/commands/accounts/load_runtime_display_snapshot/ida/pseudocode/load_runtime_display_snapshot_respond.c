// fn load_runtime_display_snapshot_respond (0x140AABEA0, 590B) — 唯一 caller = 本命令 glue
// envelope 首 dword==-2 → 错误分支(32B 载荷)；否则 serialize_envelope(0x140D763A0) → tauri respond(sub_140B39980)
__int64 __fastcall sub_140AABEA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r10
  bool v5; // zf
  __int128 v6; // xmm0
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  _BYTE v11[960]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v12[360]; // [rsp+408h] [rbp+388h] BYREF
  _OWORD v13[3]; // [rsp+570h] [rbp+4F0h] BYREF
  _BYTE v14[48]; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v15; // [rsp+5D0h] [rbp+550h]
  __int64 v16; // [rsp+5D8h] [rbp+558h] BYREF
  __m256i v17; // [rsp+5E0h] [rbp+560h]
  _BYTE v18[31]; // [rsp+600h] [rbp+580h] BYREF
  __int64 v19; // [rsp+620h] [rbp+5A0h]
  __int64 v20; // [rsp+628h] [rbp+5A8h]
  char v21; // [rsp+636h] [rbp+5B6h] BYREF
  char v22; // [rsp+637h] [rbp+5B7h]
  __int64 v23; // [rsp+638h] [rbp+5B8h]

  v23 = -2;
  v3 = a1;
  sub_1419234B0(v12, a1, 360);
  v4 = *(_QWORD *)(v3 + 384);
  v15 = v4;
  v5 = *(_DWORD *)a2 == -2;
  v20 = v3;
  v19 = v4;
  if ( v5 )
  {
    v6 = *(_OWORD *)(a2 + 8);
    *(_OWORD *)&v17.m256i_u64[2] = *(_OWORD *)(a2 + 24);
    *(_OWORD *)v17.m256i_i8 = v6;
    v16 = 1;
  }
  else
  {
    sub_1419234B0(v11, a2, 960);
    v22 = 1;
    sub_140D763A0(v14, v11);       // serialize_envelope
    if ( *(_QWORD *)v14 == -1 )
    {
      v17 = *(__m256i *)&v14[8];
      v16 = 0;
    }
    else
    {
      v13[2] = *(_OWORD *)&v14[32];
      v13[1] = *(_OWORD *)&v14[16];
      v13[0] = *(_OWORD *)v14;
      *(_QWORD *)v18 = 0;
      *(_QWORD *)&v18[8] = 1;
      *(_QWORD *)&v18[16] = 0;
      v17.m256i_i64[1] = 1610612768;
      v16 = (__int64)v18;
      v17.m256i_i64[0] = (__int64)&off_141A82658;
      if ( (unsigned __int8)sub_141473A60(v13, &v16) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_7,   // "a Display implementation returned an error unexpectedly"
          55,
          (unsigned int)&v21,
          (unsigned int)&unk_141A6FA88,
          (__int64)&off_141A82710);
      v7 = *(_QWORD *)&v18[16];
      *(_OWORD *)&v18[7] = *(_OWORD *)v18;
      *(_QWORD *)&v18[23] = v7;
      v22 = 1;
      sub_140AF1FC0(v13);
      v17.m256i_i8[0] = 3;
      *(_OWORD *)&v17.m256i_i8[1] = *(_OWORD *)v18;
      *(_OWORD *)&v17.m256i_u64[2] = *(_OWORD *)&v18[15];
      v16 = 1;
    }
    v3 = v20;
    LODWORD(v4) = v19;
  }
  v8 = *(_DWORD *)(v3 + 392);
  v9 = *(_DWORD *)(v3 + 396);
  v22 = 0;
  return sub_140B39980((unsigned int)v12, v4, (unsigned int)&v16, (int)v3 + 360, v8, v9);  // tauri respond
}
