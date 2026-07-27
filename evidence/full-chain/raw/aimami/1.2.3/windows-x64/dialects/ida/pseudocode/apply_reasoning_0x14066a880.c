// module: codexmate_lib/core/relay/dialects
// addr: 0x14066a880
// name: apply_reasoning
// win 1.2.3 | = mac codexmate_lib::core::relay::dialects::generic::apply_reasoning | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall apply_reasoning(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15

  v4 = sub_14142E200(a2, aReasoningEffor_1, 17);
  if ( v4 )
  {
    if ( *(_BYTE *)v4 == 3 )
    {
      v5 = sub_14033BC10(*(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24));
      if ( v5 )
      {
        v8 = v6;
        if ( v6 )
          goto LABEL_21;
      }
    }
  }
  v9 = sub_14142E200(a2, aReasoningEffor_2, 17);
  if ( v9 )
  {
    if ( *(_BYTE *)v9 == 3 )
    {
      v5 = sub_14033BC10(*(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24));
      if ( v5 )
      {
        v8 = v10;
        if ( v10 )
          goto LABEL_21;
      }
    }
  }
  v11 = sub_14142E200(a2, aEffort, 7);
  if ( v11 )
  {
    if ( *(_BYTE *)v11 == 3 )
    {
      v5 = sub_14033BC10(*(_QWORD *)(v11 + 16), *(_QWORD *)(v11 + 24));
      if ( v5 )
      {
        v8 = v12;
        if ( v12 )
          goto LABEL_21;
      }
    }
  }
  if ( (v13 = sub_14142E200(a2, aCollaborationM, 45)) != 0
    && *(_BYTE *)v13 == 3
    && (v5 = sub_14033BC10(*(_QWORD *)(v13 + 16), *(_QWORD *)(v13 + 24))) != 0
    && (v8 = v14) != 0
    || (v15 = sub_14142E200(a2, aSettingsReason, 26)) != 0
    && *(_BYTE *)v15 == 3
    && (v5 = sub_14033BC10(*(_QWORD *)(v15 + 16), *(_QWORD *)(v15 + 24))) != 0
    && (v8 = v16) != 0 )
  {
LABEL_21:
    if ( v8 < 0 )
    {
      v17 = 0;
      goto LABEL_23;
    }
    v18 = v5;
    nullsub_1(v7);
    v17 = 1;
    v19 = sub_140001650(v8, 1);
    if ( !v19 )
LABEL_23:
      sub_1416C2D4B(v17, v8);
    v20 = v19;
    sub_141684120(v19, v18, v8);
    *a1 = v8;
    a1[1] = v20;
    a1[2] = v8;
  }
  else
  {
    *a1 = -1;
  }
}