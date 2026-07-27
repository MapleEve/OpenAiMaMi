// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140499030
// name: sub_140499030
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140499030(_OWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  _OWORD v12[5]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]
  _OWORD v14[5]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+50h]
  __int64 v16; // [rsp+E0h] [rbp+60h]
  __int128 v17; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v18; // [rsp+F8h] [rbp+78h]
  __int64 v19; // [rsp+108h] [rbp+88h]

  v19 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_140713CC0(&v17, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v5 = *((_QWORD *)&v17 + 1);
    v3 = v18;
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
      v7 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1);
      v4 = 1;
      v8 = sub_140001650(v3, 1);
      if ( !v8 )
LABEL_4:
        sub_1416C2D4B(v4, v3);
      v5 = v8;
      *(_QWORD *)&v17 = v3;
      *((_QWORD *)&v17 + 1) = v8;
      sub_141684120(v8, v7, v3);
      *(_QWORD *)&v18 = v3;
      a2 = v6;
    }
    else
    {
      *(_QWORD *)&v17 = 0;
      *((_QWORD *)&v17 + 1) = 1;
      *(_QWORD *)&v18 = 0;
      v5 = 1;
    }
    BYTE8(v18) = *(_BYTE *)(a2 + 984);
  }
  v16 = v5;
  sub_141486710(v12, v5, v3);
  if ( LODWORD(v12[0]) == 2 )
  {
    *((_QWORD *)&v14[0] + 1) = *((_QWORD *)&v12[0] + 1);
    *(_QWORD *)&v14[0] = 2;
  }
  else
  {
    v14[0] = v12[0];
    result = v13;
    v15 = v13;
    v14[4] = v12[4];
    v14[3] = v12[3];
    v14[2] = v12[2];
    v14[1] = v12[1];
    if ( *(_QWORD *)&v12[0] != 2 )
    {
      v11 = v17;
      a1[1] = v18;
      *a1 = v11;
      return result;
    }
  }
  result = sub_140018650((char *)v14 + 8);
  v10 = v17;
  *(_QWORD *)a1 = -1;
  if ( v10 )
    return sub_140001660(v16, v10, 1);
  return result;
}