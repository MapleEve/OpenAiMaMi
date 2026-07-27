// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409EB070(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int8 *v19; // rbx
  bool v20; // zf
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r14
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rdx
  unsigned __int8 *v29; // r12
  char *v30; // rdx
  int v31; // r8d
  int v32; // r9d
  int v33; // r11d
  int v34; // r8d
  unsigned __int8 v35; // r10
  __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  int v39; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+A0h] [rbp+20h]
  __int64 v41; // [rsp+B0h] [rbp+30h]

  v41 = -2; /*0x1409eb08b*/
  sub_1414A2990((unsigned int)&v36, a2, a3, (unsigned int)"You have a web_search tool available.", 37); /*0x1409eb0b3*/
  result = sub_140A6C6F0(&v39, &v36); /*0x1409eb0bf*/
  if ( v39 != 1 ) /*0x1409eb0c8*/
  {
    if ( a3 < 0 ) /*0x1409eb101*/
    {
      v9 = 0; /*0x1409eb103*/
      goto LABEL_8; /*0x1409eb103*/
    }
    if ( a3 ) /*0x1409eb113*/
    {
      nullsub_1(v7); /*0x1409eb119*/
      v9 = 1; /*0x1409eb11e*/
      v10 = sub_140001650(a3, 1); /*0x1409eb12c*/
      if ( !v10 ) /*0x1409eb134*/
LABEL_8:
        sub_1416C2D4B(v9, a3); /*0x1409eb106*/
      v11 = v10; /*0x1409eb136*/
      result = sub_141684120(v10, a2, a3); /*0x1409eb142*/
    }
    else
    {
      v11 = 1; /*0x1409eb1e6*/
    }
    *a1 = a3; /*0x1409eb1ec*/
    a1[1] = v11; /*0x1409eb1ef*/
    a1[2] = a3; /*0x1409eb1f3*/
    return result; /*0x1409eb1f7*/
  }
  v8 = v40; /*0x1409eb0ca*/
  if ( v40 ) /*0x1409eb0d1*/
  {
    if ( a3 <= v40 ) /*0x1409eb0d6*/
    {
      if ( a3 != v40 ) /*0x1409eb14c*/
LABEL_5:
        sub_1416C2F60(a2, a3, 0, v40, (__int64)&off_1417A7848); /*0x1409eb0df*/
    }
    else if ( *(char *)(a2 + v40) <= -65 ) /*0x1409eb0dd*/
    {
      goto LABEL_5; /*0x1409eb0dd*/
    }
  }
  v12 = sub_14033C0A0(a2, v40); /*0x1409eb159*/
  v14 = v13; /*0x1409eb15c*/
  v15 = a3 - v8; /*0x1409eb15f*/
  v16 = v8 + a2; /*0x1409eb162*/
  sub_1414A2990((unsigned int)&v36, v16, v15, (unsigned int)&unk_1417A7860, 2); /*0x1409eb182*/
  sub_140A6C6F0(&v39, &v36); /*0x1409eb18e*/
  if ( v39 != 1 ) /*0x1409eb197*/
  {
    v18 = 1; /*0x1409eb1ca*/
    v19 = nullptr; /*0x1409eb1cf*/
    v20 = v14 == 0; /*0x1409eb1d1*/
    if ( v14 >= 0 ) /*0x1409eb1d4*/
      goto LABEL_25; /*0x1409eb1d4*/
LABEL_19:
    v21 = 0; /*0x1409eb1d6*/
    goto LABEL_20; /*0x1409eb1d6*/
  }
  if ( v40 ) /*0x1409eb1a0*/
  {
    if ( v15 <= v40 ) /*0x1409eb1a5*/
    {
      if ( v15 != v40 ) /*0x1409eb1fc*/
LABEL_17:
        sub_1416C2F60(v16, v15, v40, v15, (__int64)&off_1417A7868); /*0x1409eb1ae*/
    }
    else if ( *(char *)(v16 + v40) < -64 ) /*0x1409eb1ac*/
    {
      goto LABEL_17; /*0x1409eb1ac*/
    }
  }
  v19 = (unsigned __int8 *)(v15 - v40); /*0x1409eb1fe*/
  v18 = v40 + v16; /*0x1409eb201*/
  v20 = v14 == 0; /*0x1409eb204*/
  if ( v14 < 0 ) /*0x1409eb207*/
    goto LABEL_19; /*0x1409eb207*/
LABEL_25:
  if ( !v20 ) /*0x1409eb209*/
  {
    nullsub_1(v17); /*0x1409eb20b*/
    v21 = 1; /*0x1409eb210*/
    v22 = sub_140001650(v14, 1); /*0x1409eb21e*/
    if ( v22 ) /*0x1409eb226*/
    {
      v23 = v22; /*0x1409eb228*/
      sub_141684120(v22, v12, v14); /*0x1409eb234*/
      v36 = v14; /*0x1409eb239*/
      v37 = v23; /*0x1409eb23d*/
      v38 = v14; /*0x1409eb241*/
      if ( v19 ) /*0x1409eb248*/
      {
        sub_141688D30((unsigned int)&v36, v14, 2, 1, 1); /*0x1409eb26a*/
        v24 = v37; /*0x1409eb270*/
        v25 = v38; /*0x1409eb274*/
        *(_WORD *)(v37 + v38) = 2570; /*0x1409eb278*/
        v26 = v25 + 2; /*0x1409eb27f*/
        v38 = v26; /*0x1409eb283*/
LABEL_31:
        v27 = nullptr; /*0x1409eb2b2*/
        while ( v27 != v19 ) /*0x1409eb2d3*/
        {
          v29 = v27; /*0x1409eb2d9*/
          v30 = (char *)&v27[v18]; /*0x1409eb2dc*/
          v31 = (unsigned __int8)*v30; /*0x1409eb2e3*/
          if ( *v30 >= 0 ) /*0x1409eb2ea*/
          {
            v28 = (unsigned __int8 *)(v30 + 1); /*0x1409eb2c0*/
          }
          else
          {
            v32 = v31 & 0x1F; /*0x1409eb2ef*/
            v33 = v30[1] & 0x3F; /*0x1409eb2f8*/
            if ( (unsigned __int8)v31 <= 0xDFu ) /*0x1409eb300*/
            {
              v28 = (unsigned __int8 *)(v30 + 2); /*0x1409eb33c*/
              v31 = v33 | (v32 << 6); /*0x1409eb347*/
            }
            else
            {
              v34 = (v33 << 6) | v30[2] & 0x3F; /*0x1409eb30f*/
              if ( (unsigned __int8)*v30 < 0xF0u ) /*0x1409eb316*/
              {
                v28 = (unsigned __int8 *)(v30 + 3); /*0x1409eb34f*/
                v31 = (v32 << 12) | v34; /*0x1409eb357*/
              }
              else
              {
                v35 = v30[3]; /*0x1409eb318*/
                v28 = (unsigned __int8 *)(v30 + 4); /*0x1409eb31d*/
                v31 = ((v32 & 7) << 18) | (v34 << 6) | v35 & 0x3F; /*0x1409eb337*/
              }
            }
          }
          v27 = &v28[-v18]; /*0x1409eb2c3*/
          if ( v31 != 10 ) /*0x1409eb2ca*/
            goto LABEL_42; /*0x1409eb2ca*/
        }
        v29 = v19; /*0x1409eb35f*/
LABEL_42:
        if ( v19 - v29 > (unsigned __int64)(v36 - v26) ) /*0x1409eb372*/
        {
          sub_141688D30((unsigned int)&v36, v26, (_DWORD)v19 - (_DWORD)v29, 1, 1); /*0x1409eb3d5*/
          v24 = v37; /*0x1409eb3db*/
          v26 = v38; /*0x1409eb3df*/
        }
        else if ( v19 == v29 ) /*0x1409eb377*/
        {
LABEL_45:
          v38 = v19 - v29 + v26; /*0x1409eb38a*/
          goto LABEL_46; /*0x1409eb38d*/
        }
        sub_141684120(v26 + v24, &v29[v18], v19 - v29); /*0x1409eb385*/
        goto LABEL_45; /*0x1409eb385*/
      }
      goto LABEL_46; /*0x1409eb248*/
    }
LABEL_20:
    sub_1416C2D4B(v21, v14); /*0x1409eb1d9*/
  }
  v36 = 0; /*0x1409eb289*/
  v37 = 1; /*0x1409eb291*/
  v38 = 0; /*0x1409eb299*/
  if ( v19 ) /*0x1409eb2a4*/
  {
    v24 = 1; /*0x1409eb2aa*/
    v26 = 0; /*0x1409eb2af*/
    goto LABEL_31; /*0x1409eb2af*/
  }
LABEL_46:
  a1[2] = v38; /*0x1409eb391*/
  *a1 = v36; /*0x1409eb39d*/
  result = v37; /*0x1409eb3a0*/
  a1[1] = v37; /*0x1409eb3a4*/
  return result; /*0x1409eb3a8*/
}