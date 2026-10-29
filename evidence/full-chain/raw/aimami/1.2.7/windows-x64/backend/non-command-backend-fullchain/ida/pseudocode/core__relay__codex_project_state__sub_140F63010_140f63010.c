// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f63010 | name sub_140F63010
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F63010(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  const __m128i *v7; // rbx
  __m128i *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  int v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13[10]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+80h] [rbp+0h]
  __int128 v15; // [rsp+88h] [rbp+8h] BYREF
  __int128 v16; // [rsp+98h] [rbp+18h]
  __int64 v17; // [rsp+A8h] [rbp+28h]

  v17 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_1401B8620((__int64)&v15, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v5 = *((_QWORD *)&v15 + 1);
    v3 = v16;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 976);
    if ( v3 < 0 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    if ( v3 )
    {
      v6 = a2;
      v7 = *(const __m128i **)(a2 + 968);
      nullsub_1(a1);
      v4 = 1;
      v8 = (__m128i *)sub_140001650(v3, 1);
      if ( !v8 )
LABEL_4:
        sub_141938D2B(v4, v3);
      v5 = (__int64)v8;
      *(_QWORD *)&v15 = v3;
      *((_QWORD *)&v15 + 1) = v8;
      sub_1418F44E0(v8, v7, v3);
      *(_QWORD *)&v16 = v3;
      a2 = v6;
    }
    else
    {
      *(_QWORD *)&v15 = 0;
      *((_QWORD *)&v15 + 1) = 1;
      *(_QWORD *)&v16 = 0;
      v5 = 1;
    }
    BYTE8(v16) = *(_BYTE *)(a2 + 984);
  }
  v14 = v5;
  result = sub_141695A00(&v12, v5, v3);
  if ( v12 == 2 )
  {
    result = v13[0];
    if ( (unsigned __int64)((v13[0] & 3) - 2) >= 2 && (v13[0] & 3) != 0 )
    {
      --v13[0];
      LOBYTE(v12) = 3;
      result = sub_1416BCB00(v13);
    }
    v10 = v15;
    *(_QWORD *)a1 = -1;
    if ( v10 )
      return sub_140001660(v14, v10, 1);
  }
  else
  {
    v11 = v15;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v11;
  }
  return result;
}
