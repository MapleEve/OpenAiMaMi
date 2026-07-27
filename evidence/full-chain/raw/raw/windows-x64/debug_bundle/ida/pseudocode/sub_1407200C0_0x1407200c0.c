// module: codexmate_lib/core/debug_bundle
// addr: 0x1407200c0
// name: sub_1407200C0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_1407200C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h]
  _BYTE v32[24]; // [rsp+40h] [rbp-40h]
  unsigned __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+88h] [rbp+8h] BYREF
  __int64 v35; // [rsp+90h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+18h]
  __int64 v37; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+28h]
  __int64 v39; // [rsp+B0h] [rbp+30h]
  HANDLE hObject[7]; // [rsp+B8h] [rbp+38h] BYREF

  hObject[1] = (HANDLE)-2LL;
  LODWORD(v30) = 0;
  v31 = 0;
  *(_DWORD *)v32 = 7;
  *(_QWORD *)&v32[4] = 0x100000000LL;
  *(_QWORD *)&v32[9] = 0;
  v4 = sub_141481480(&v30, a2, a3);
  if ( v4 != 1 )
  {
    hObject[0] = v5;
    sub_141474A10((__int64)&v30, hObject);
    if ( (_DWORD)v30 == 2 )
    {
      v6 = v31;
      *a1 = 2;
      a1[1] = v6;
LABEL_41:
      LODWORD(v4) = CloseHandle(hObject[0]);
      return v4;
    }
    if ( v33 > 0x100000 )
    {
      if ( sub_141491C20(hObject, 0, (LARGE_INTEGER)(v33 - 1048577)) == 1 )
      {
        *a1 = 2;
        a1[1] = v7;
        goto LABEL_41;
      }
      v34 = 0;
      v35 = 1;
      v36 = 0;
      if ( sub_1414917D0(hObject, &v34) == 1 )
      {
        *a1 = 2;
        a1[1] = v10;
LABEL_38:
        v9 = v34;
        if ( !v34 )
          goto LABEL_41;
        v15 = v35;
LABEL_40:
        sub_140001660(v15, v9, 1);
        goto LABEL_41;
      }
      v16 = v36;
      if ( v36 )
      {
        if ( *(_BYTE *)v35 == 10 )
        {
          v17 = v36 - 1;
          sub_141684120(v35, v35 + 1, v36 - 1);
          v18 = v17;
          v36 = v17;
LABEL_30:
          sub_141499F00(&v37, v35, v18);
          v25 = v37;
          v26 = v38;
          v27 = v39;
          if ( v37 == -1 )
          {
            sub_140388B60((unsigned int)&v30, v39, 0, 1, 1);
            v25 = v31;
            if ( (_DWORD)v30 == 1 )
              sub_1416C2D4B(v31, *(_QWORD *)v32);
            v28 = *(_QWORD *)v32;
            if ( v27 )
              sub_141684120(*(_QWORD *)v32, v26, v27);
            else
              v27 = 0;
          }
          else
          {
            v28 = v38;
          }
          a1[1] = v25;
          a1[2] = v28;
          a1[3] = v27;
          *a1 = -1;
          goto LABEL_38;
        }
        v22 = 1;
        while ( v36 != v22 )
        {
          v23 = v22 + 1;
          if ( *(_BYTE *)(v35 + v22++) == 10 )
          {
            v36 = 0;
            *(_QWORD *)&v32[8] = v23;
            *(_QWORD *)&v32[16] = v16 - v23;
            v30 = v35;
            v31 = v35 + v23;
            *(_QWORD *)v32 = &v34;
            sub_1404DF7D0(&v30);
            v18 = v36;
            goto LABEL_30;
          }
        }
      }
      v36 = 0;
      v18 = 0;
      goto LABEL_30;
    }
    v37 = 0;
    v38 = 1;
    v39 = 0;
    if ( sub_1414917D0(hObject, &v37) == 1 )
    {
      *a1 = 2;
      a1[1] = v8;
      v9 = v37;
      if ( !v37 )
        goto LABEL_41;
LABEL_15:
      v15 = v38;
      goto LABEL_40;
    }
    sub_141499F00(&v30, v38, v39);
    v12 = v30;
    v13 = v31;
    v14 = *(_QWORD *)v32;
    if ( v30 != -1 )
    {
LABEL_14:
      a1[1] = v12;
      a1[2] = v13;
      a1[3] = v14;
      *a1 = -1;
      v9 = v37;
      if ( !v37 )
        goto LABEL_41;
      goto LABEL_15;
    }
    if ( *(__int64 *)v32 >= 0 )
    {
      if ( !*(_QWORD *)v32 )
      {
        v13 = 1;
        v12 = 0;
        v14 = 0;
        goto LABEL_14;
      }
      nullsub_1(v11);
      v19 = 1;
      v20 = sub_140001650(v14, 1);
      if ( v20 )
      {
        v21 = v20;
        sub_141684120(v20, v13, v14);
        v12 = v14;
        v13 = v21;
        goto LABEL_14;
      }
    }
    else
    {
      v19 = 0;
    }
    sub_1416C2D4B(v19, v14);
  }
  *a1 = 2;
  a1[1] = v5;
  return v4;
}