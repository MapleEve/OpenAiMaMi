// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140aec150
// name: sub_140AEC150
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140AEC150(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v23[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = sub_14033BC10(a2, a3);
  v9 = v8;
  v21[0] = v7;
  v21[1] = v8;
  v10 = sub_14033BC10(a4, a5);
  v13 = v11;
  v22[0] = v10;
  v22[1] = v11;
  if ( !v9 )
  {
    if ( v11 >= 0 )
    {
      if ( !v11 )
      {
        v18 = 1;
        v13 = 0;
        goto LABEL_16;
      }
      v16 = v10;
      nullsub_1(v12);
      v14 = 1;
      v17 = sub_140001650(v13, 1);
      if ( v17 )
      {
        v18 = v17;
        sub_141684120(v17, v16, v13);
        goto LABEL_16;
      }
    }
    else
    {
      v14 = 0;
    }
    sub_1416C2D4B(v14, v13);
  }
  if ( !v11 )
  {
    if ( v9 < 0 )
    {
      v15 = 0;
      goto LABEL_9;
    }
    nullsub_1(v12);
    v15 = 1;
    v19 = sub_140001650(v9, 1);
    if ( !v19 )
LABEL_9:
      sub_1416C2D4B(v15, v9);
    v18 = v19;
    sub_141684120(v19, v7, v9);
    v13 = v9;
LABEL_16:
    *a1 = v13;
    a1[1] = v18;
    a1[2] = v13;
    return a1;
  }
  v23[0] = v21;
  v23[1] = sub_14041F680;
  v23[2] = v22;
  v23[3] = sub_14041F680;
  sub_14149C0F0(a1, &unk_1417B0A1F, v23);
  return a1;
}