// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140244eb0 | name sub_140244EB0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140244EB0(_QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  _BYTE *v9; // rax
  __int64 v10; // rcx
  _BYTE *v11; // r15
  void *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // r15
  __int64 v15; // r12
  void *v16; // rax
  __int64 result; // rax
  __m128i *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD v23[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  _QWORD v28[2]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v29; // [rsp+88h] [rbp+8h]
  __int64 v30; // [rsp+98h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+20h]
  __int128 v32; // [rsp+A8h] [rbp+28h]
  __int64 v33; // [rsp+B8h] [rbp+38h]
  __int64 v34; // [rsp+C0h] [rbp+40h]
  char v35; // [rsp+CFh] [rbp+4Fh]
  __int64 v36; // [rsp+D0h] [rbp+50h]

  v36 = -2;
  v30 = a2;
  v31 = a3;
  v32 = 0;
  v33 = a2;
  v34 = a3;
  sub_14062D280(&v25, &v30);
  if ( (_BYTE)v25 != 0xFF )
  {
    v28[0] = v25;
    v29 = v27;
    v28[1] = v26;
    v9 = (_BYTE *)sub_1416419F0(aPayload_0, 7, v28);
    v11 = v9;
    if ( !v9 || *v9 != 5 )
    {
      nullsub_1(v10);
      v16 = (void *)sub_140001650(30, 1);
      if ( !v16 )
        sub_141938D2B(1, 30);
      qmemcpy(v16, "session_meta payload not found", 30);
      *a1 = 9;
      a1[1] = 30;
      a1[2] = v16;
      a1[3] = 30;
      return sub_14002F9D0(v28);
    }
    nullsub_1(v10);
    v12 = (void *)sub_140001650(14, 1);
    if ( !v12 )
      sub_141938D2B(1, 14);
    v13 = a5;
    v14 = v11 + 8;
    qmemcpy(v12, "model_provider", 14);
    v24[0] = 14;
    v24[1] = v12;
    v24[2] = 14;
    if ( a5 < 0 )
    {
      v15 = 0;
      goto LABEL_7;
    }
    if ( a5 )
    {
      nullsub_1(0x72705F6C65646F6DLL);
      v15 = 1;
      v18 = (__m128i *)sub_140001650(a5, 1);
      v13 = a5;
      if ( !v18 )
      {
LABEL_7:
        v35 = 1;
        sub_141938D2B(v15, v13);
      }
      v19 = (__int64)v18;
      sub_1418F44E0(v18, a4, a5);
      v13 = a5;
    }
    else
    {
      v19 = 1;
    }
    v31 = v13;
    *(_QWORD *)&v32 = v19;
    *((_QWORD *)&v32 + 1) = v13;
    LOBYTE(v30) = 3;
    v35 = 0;
    sub_140E72AA0(&v25, v14, v24, &v30);
    if ( (_BYTE)v25 != 0xFF )
      sub_14002F9D0(&v25);
    nullsub_1(v20);
    v21 = sub_140001650(128, 1);
    if ( !v21 )
      sub_141938D2B(1, 128);
    v30 = 128;
    v31 = v21;
    *(_QWORD *)&v32 = 0;
    v25 = &v30;
    v22 = sub_1401A5DE0(v28, &v25);
    if ( v22 )
    {
      if ( v30 )
        sub_140001660(v31, v30, 1);
    }
    else
    {
      v22 = v31;
      if ( v30 != -1 )
      {
        v23[0] = v30;
        v23[1] = v31;
        v23[2] = v32;
        sub_1402815E0(a1, a2, a3, v23);
        return sub_14002F9D0(v28);
      }
    }
    *a1 = 3;
    a1[1] = v22;
    return sub_14002F9D0(v28);
  }
  result = v26;
  *a1 = 3;
  a1[1] = result;
  return result;
}
