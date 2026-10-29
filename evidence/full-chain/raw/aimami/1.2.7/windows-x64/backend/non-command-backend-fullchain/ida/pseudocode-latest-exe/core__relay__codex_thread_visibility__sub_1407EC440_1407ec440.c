// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407ec440 | successor of pre-update 0x140244eb0 | session <审计会话>
// match evidence: {"body_sim": 0.68, "str_ov": 1.0, "anchor": 0.694, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1407EC440(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // r15
  void *v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // r15
  __int64 v16; // r12
  void *v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  _QWORD v27[3]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v28[2]; // [rsp+58h] [rbp-28h] BYREF
  _OWORD v29[2]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v30; // [rsp+98h] [rbp+18h] BYREF
  __int128 v31; // [rsp+A8h] [rbp+28h]
  __int64 v32; // [rsp+B8h] [rbp+38h]
  __int64 v33; // [rsp+C0h] [rbp+40h]
  char v34; // [rsp+CFh] [rbp+4Fh]
  __int64 v35; // [rsp+D0h] [rbp+50h]

  v35 = -2;
  *(_QWORD *)&v30 = a2;
  *((_QWORD *)&v30 + 1) = a3;
  v31 = 0;
  v32 = a2;
  v33 = a3;
  sub_140D8B500(v28, &v30);
  if ( LOBYTE(v28[0]) == 0xFF )
  {
    result = *((_QWORD *)&v28[0] + 1);
    *a1 = 3;
    a1[1] = result;
  }
  else
  {
    v29[0] = v28[0];
    v29[1] = v28[1];
    v9 = (_BYTE *)sub_1416724D0(aPayload_3, 7, v29);
    v12 = v9;
    if ( v9 && *v9 == 5 )
    {
      nullsub_1(v11, v10);
      v13 = (void *)sub_140001650(14, 1);
      if ( !v13 )
        sub_14196B2DB(1, 14);
      v14 = a5;
      v15 = v12 + 8;
      qmemcpy(v13, "model_provider", 14);
      v27[0] = 14;
      v27[1] = v13;
      v27[2] = 14;
      if ( a5 < 0 )
      {
        v16 = 0;
        goto LABEL_7;
      }
      if ( a5 )
      {
        nullsub_1(0x72705F6C65646F6DLL, a5);
        v16 = 1;
        v19 = sub_140001650(a5, 1);
        v14 = a5;
        if ( !v19 )
        {
LABEL_7:
          v34 = 1;
          sub_14196B2DB(v16, v14);
        }
        v20 = v19;
        sub_1419234B0(v19, a4, a5);
        v14 = a5;
      }
      else
      {
        v20 = 1;
      }
      *((_QWORD *)&v30 + 1) = v14;
      *(_QWORD *)&v31 = v20;
      *((_QWORD *)&v31 + 1) = v14;
      LOBYTE(v30) = 3;
      v34 = 0;
      sub_140A68320(v28, v15, v27, &v30);
      if ( LOBYTE(v28[0]) != 0xFF )
        sub_140032FF0(v28);
      nullsub_1(v22, v21);
      v23 = sub_140001650(128, 1);
      if ( !v23 )
        sub_14196B2DB(1, 128);
      *(_QWORD *)&v30 = 128;
      *((_QWORD *)&v30 + 1) = v23;
      *(_QWORD *)&v31 = 0;
      *(_QWORD *)&v28[0] = &v30;
      sub_140785060(v29, v28);
      v24 = *((_QWORD *)&v30 + 1);
      if ( (_QWORD)v30 == -1 )
      {
        *a1 = 3;
        a1[1] = v24;
      }
      else
      {
        v25 = v30;
        v26 = v31;
        sub_140A92690(a1, a2, a3, &v25);
      }
    }
    else
    {
      nullsub_1(v11, v10);
      v17 = (void *)sub_140001650(30, 1);
      if ( !v17 )
        sub_14196B2DB(1, 30);
      qmemcpy(v17, "session_meta payload not found", 30);
      *a1 = 9;
      a1[1] = 30;
      a1[2] = v17;
      a1[3] = 30;
    }
    return sub_140032FF0(v29);
  }
  return result;
}
