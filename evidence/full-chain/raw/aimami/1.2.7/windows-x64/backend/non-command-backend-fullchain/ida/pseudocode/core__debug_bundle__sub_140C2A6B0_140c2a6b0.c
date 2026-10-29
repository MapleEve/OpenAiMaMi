// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c2a6b0 | name sub_140C2A6B0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140C2A6B0(_QWORD *a1)
{
  __int64 v2; // rax
  void *v3; // rdx
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  char *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r14
  __m128i *v18; // rax
  __m128i *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v23; // rbx
  const __m128i *v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  char *v29; // [rsp+38h] [rbp-48h]
  _BYTE v30[24]; // [rsp+40h] [rbp-40h]
  unsigned __int64 v31; // [rsp+68h] [rbp-18h]
  char *v32; // [rsp+88h] [rbp+8h] BYREF
  __int64 v33; // [rsp+90h] [rbp+10h]
  __int64 v34; // [rsp+98h] [rbp+18h]
  char *v35; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v37; // [rsp+B0h] [rbp+30h]
  HANDLE hObject[7]; // [rsp+B8h] [rbp+38h] BYREF

  hObject[1] = (HANDLE)-2LL;
  LODWORD(v28) = 0;
  v29 = nullptr;
  *(_DWORD *)v30 = 7;
  *(_QWORD *)&v30[4] = 0x100000000LL;
  *(_QWORD *)&v30[9] = 0;
  v2 = sub_141690E40(&v28);
  if ( v2 != 1 )
  {
    hObject[0] = v3;
    sub_1416831B0(&v28, hObject);
    if ( (_DWORD)v28 == 2 )
    {
      v4 = v29;
      *a1 = 2;
      a1[1] = v4;
LABEL_41:
      LODWORD(v2) = CloseHandle(hObject[0]);
      return v2;
    }
    if ( v31 > 0x100000 )
    {
      if ( sub_1416A17E0(hObject, 0) == 1 )
      {
        *a1 = 2;
        a1[1] = v5;
        goto LABEL_41;
      }
      v32 = nullptr;
      v33 = 1;
      v34 = 0;
      if ( sub_1416A1660(hObject, &v32) == 1 )
      {
        *a1 = 2;
        a1[1] = v8;
LABEL_38:
        v7 = v32;
        if ( !v32 )
          goto LABEL_41;
        v13 = v33;
LABEL_40:
        sub_140001660(v13, v7, 1);
        goto LABEL_41;
      }
      v14 = v34;
      if ( v34 )
      {
        if ( *(_BYTE *)v33 == 10 )
        {
          v15 = v34 - 1;
          sub_1418F44E0((__m128i *)v33, (const __m128i *)(v33 + 1), v34 - 1);
          v16 = v15;
          v34 = v15;
LABEL_30:
          sub_1416A9D40(&v35, v33, v16);
          v23 = v35;
          v24 = (const __m128i *)v36;
          v25 = v37;
          if ( v35 == (char *)-1LL )
          {
            sub_14072C410((unsigned int)&v28, v37, 0, 1, 1);
            v23 = v29;
            if ( (_DWORD)v28 == 1 )
              sub_141938D2B(v29, *(_QWORD *)v30);
            v26 = *(_QWORD *)v30;
            if ( v25 )
              sub_1418F44E0(*(__m128i **)v30, v24, v25);
            else
              v25 = 0;
          }
          else
          {
            v26 = v36;
          }
          a1[1] = v23;
          a1[2] = v26;
          a1[3] = v25;
          *a1 = -1;
          goto LABEL_38;
        }
        v20 = 1;
        while ( v34 != v20 )
        {
          v21 = v20 + 1;
          if ( *(_BYTE *)(v33 + v20++) == 10 )
          {
            v34 = 0;
            *(_QWORD *)&v30[8] = v21;
            *(_QWORD *)&v30[16] = v14 - v21;
            v28 = v33;
            v29 = (char *)(v33 + v21);
            *(_QWORD *)v30 = &v32;
            sub_140BA96E0(&v28);
            v16 = v34;
            goto LABEL_30;
          }
        }
      }
      v34 = 0;
      v16 = 0;
      goto LABEL_30;
    }
    v35 = nullptr;
    v36 = 1;
    v37 = 0;
    if ( sub_1416A1660(hObject, &v35) == 1 )
    {
      *a1 = 2;
      a1[1] = v6;
      v7 = v35;
      if ( !v35 )
        goto LABEL_41;
LABEL_15:
      v13 = v36;
      goto LABEL_40;
    }
    sub_1416A9D40(&v28, v36, v37);
    v10 = v28;
    v11 = (__int64)v29;
    v12 = *(_QWORD *)v30;
    if ( v28 != -1 )
    {
LABEL_14:
      a1[1] = v10;
      a1[2] = v11;
      a1[3] = v12;
      *a1 = -1;
      v7 = v35;
      if ( !v35 )
        goto LABEL_41;
      goto LABEL_15;
    }
    if ( *(__int64 *)v30 >= 0 )
    {
      if ( !*(_QWORD *)v30 )
      {
        v11 = 1;
        v10 = 0;
        v12 = 0;
        goto LABEL_14;
      }
      nullsub_1(v9);
      v17 = 1;
      v18 = (__m128i *)sub_140001650(v12, 1);
      if ( v18 )
      {
        v19 = v18;
        sub_1418F44E0(v18, (const __m128i *)v11, v12);
        v10 = v12;
        v11 = (__int64)v19;
        goto LABEL_14;
      }
    }
    else
    {
      v17 = 0;
    }
    sub_141938D2B(v17, v12);
  }
  *a1 = 2;
  a1[1] = v3;
  return v2;
}
