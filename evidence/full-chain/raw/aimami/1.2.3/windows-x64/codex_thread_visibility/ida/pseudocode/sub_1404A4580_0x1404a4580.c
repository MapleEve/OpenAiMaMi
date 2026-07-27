// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404a4580
// name: sub_1404A4580
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404A4580(
        _QWORD *a1,
        __int128 *a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5,
        __int128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 *v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 *v22; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+0h] BYREF
  __int64 v25; // [rsp+88h] [rbp+8h]
  __int128 v26; // [rsp+90h] [rbp+10h]
  _QWORD v27[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+30h]
  __int64 v29; // [rsp+C0h] [rbp+40h]

  v29 = -2;
  v18 = a6;
  v19 = a2;
  v20 = a3;
  v21 = 0;
  v22 = a2;
  v23 = a3;
  sub_1408A6200(&v24, &v19);
  if ( (_BYTE)v24 == 0xFF )
  {
    result = v25;
    *a1 = 3;
    a1[1] = result;
  }
  else
  {
    v27[0] = v24;
    v28 = v26;
    v27[1] = v25;
    v8 = sub_14142E200(v27, aPayloadModelPr, 23);
    if ( v8 && *(_BYTE *)v8 == 3 && (v10 = *(_QWORD *)(v8 + 24)) != 0 )
    {
      if ( v10 < 0 )
      {
        v11 = 0;
        goto LABEL_7;
      }
      v13 = *(_QWORD *)(v8 + 16);
      nullsub_1(v9);
      v11 = 1;
      v14 = sub_140001650(v10, 1);
      if ( !v14 )
LABEL_7:
        sub_1416C2D4B(v11, v10);
      v15 = v14;
      sub_141684120(v14, v13, v10);
      a1[1] = v10;
      a1[2] = v15;
      a1[3] = v10;
      *a1 = -1;
    }
    else
    {
      v24 = a4;
      v25 = a5;
      v19 = &v18;
      v20 = sub_14041F680;
      *(_QWORD *)&v21 = &v24;
      *((_QWORD *)&v21 + 1) = sub_14148F3A0;
      sub_14149C0F0(&v16, &unk_14175B499, &v19);
      a1[3] = v17;
      *(_OWORD *)(a1 + 1) = v16;
      *a1 = 9;
    }
    return sub_1400104F0(v27);
  }
  return result;
}