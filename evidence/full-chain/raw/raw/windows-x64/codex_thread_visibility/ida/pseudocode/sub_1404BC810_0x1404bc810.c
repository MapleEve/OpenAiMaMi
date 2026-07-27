// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404bc810
// name: sub_1404BC810
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404BC810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rbx
  void *v10; // rax
  _BYTE *v11; // rbx
  __int64 v12; // r12
  void *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v22[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int64 *v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+80h] [rbp+0h] BYREF
  __int64 v29; // [rsp+88h] [rbp+8h]
  __int128 v30; // [rsp+90h] [rbp+10h]
  __int64 v31; // [rsp+A0h] [rbp+20h]
  __int64 v32; // [rsp+A8h] [rbp+28h]
  char v33; // [rsp+B7h] [rbp+37h]
  __int64 v34; // [rsp+B8h] [rbp+38h]

  v34 = -2;
  v28 = a2;
  v29 = a3;
  v30 = 0;
  v31 = a2;
  v32 = a3;
  sub_1408A6200(&v25, &v28);
  if ( (_BYTE)v25 == 0xFF )
  {
    result = v26;
    *a1 = 3;
    a1[1] = result;
  }
  else
  {
    v23[0] = v25;
    v24 = v27;
    v23[1] = v26;
    v7 = (_BYTE *)sub_141433D50(aPayload, 7, v23);
    v9 = v7;
    if ( v7 && *v7 == 5 )
    {
      nullsub_1(v8);
      v10 = (void *)sub_140001650(14, 1);
      if ( !v10 )
        sub_1416C2D4B(1, 14);
      v11 = v9 + 8;
      qmemcpy(v10, "model_provider", 14);
      v22[0] = 14;
      v22[1] = v10;
      v22[2] = 14;
      if ( a5 < 0 )
      {
        v12 = 0;
        goto LABEL_7;
      }
      if ( a5 )
      {
        nullsub_1(0x72705F6C65646F6DLL);
        v12 = 1;
        v15 = sub_140001650(a5, 1);
        if ( !v15 )
        {
LABEL_7:
          v33 = 1;
          sub_1416C2D4B(v12, a5);
        }
        v16 = v15;
        sub_141684120(v15, a4, a5);
      }
      else
      {
        v16 = 1;
      }
      v29 = a5;
      *(_QWORD *)&v30 = v16;
      *((_QWORD *)&v30 + 1) = a5;
      LOBYTE(v28) = 3;
      v33 = 0;
      sub_140307860(&v25, v11, v22, &v28);
      if ( (_BYTE)v25 != 0xFF )
        sub_1400104F0(&v25);
      nullsub_1(v17);
      v18 = sub_140001650(128, 1);
      if ( !v18 )
        sub_1416C2D4B(1, 128);
      v28 = 128;
      v29 = v18;
      *(_QWORD *)&v30 = 0;
      v25 = &v28;
      sub_140444020(v23, &v25);
      v19 = v28;
      if ( v28 == -1 )
      {
        v21 = 3;
        v19 = v29;
      }
      else
      {
        v20 = v30;
        a1[2] = v29;
        a1[3] = v20;
        v21 = -1;
      }
      *a1 = v21;
      a1[1] = v19;
    }
    else
    {
      nullsub_1(v8);
      v13 = (void *)sub_140001650(30, 1);
      if ( !v13 )
        sub_1416C2D4B(1, 30);
      qmemcpy(v13, "session_meta payload not found", 30);
      *a1 = 9;
      a1[1] = 30;
      a1[2] = (__int64)v13;
      a1[3] = 30;
    }
    return sub_1400104F0(v23);
  }
  return result;
}