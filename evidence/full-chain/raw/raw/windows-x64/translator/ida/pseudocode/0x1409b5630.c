// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1409B5630(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r12
  _DWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r12
  _QWORD v23[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  __int64 v32; // [rsp+80h] [rbp+0h]
  __int64 v33; // [rsp+88h] [rbp+8h]
  char v34; // [rsp+97h] [rbp+17h]
  __int64 v35; // [rsp+98h] [rbp+18h]

  v35 = -2; /*0x1409b5649*/
  if ( !*(_BYTE *)(a1 + 112) ) /*0x1409b565d*/
  {
    *(_BYTE *)(a1 + 112) = 2; /*0x1409b5763*/
    v32 = *(_QWORD *)(a1 + 88); /*0x1409b576b*/
    v33 = *(_QWORD *)(a1 + 96); /*0x1409b5773*/
    v10 = *(_QWORD *)(a1 + 104); /*0x1409b5777*/
    *(_QWORD *)(a1 + 88) = 0; /*0x1409b577b*/
    *(_QWORD *)(a1 + 96) = 1; /*0x1409b5783*/
    *(_QWORD *)(a1 + 104) = 0; /*0x1409b578b*/
    if ( v10 ) /*0x1409b5796*/
    {
      sub_1409B2D80(a1, a2); /*0x1409b579e*/
      sub_1409B0FA0((_QWORD *)a1, v33, v10, a2); /*0x1409b57b1*/
    }
    if ( v32 ) /*0x1409b57be*/
      sub_140001660(v33, v32, 1); /*0x1409b57df*/
    return; /*0x1409b57df*/
  }
  if ( *(_BYTE *)(a1 + 112) != 1 ) /*0x1409b5666*/
    return; /*0x1409b5666*/
  v32 = *(_QWORD *)(a1 + 88); /*0x1409b5670*/
  v4 = *(_QWORD *)(a1 + 96); /*0x1409b5674*/
  v5 = *(_QWORD *)(a1 + 104); /*0x1409b5678*/
  *(_QWORD *)(a1 + 88) = 0; /*0x1409b567c*/
  *(_QWORD *)(a1 + 96) = 1; /*0x1409b5684*/
  *(_QWORD *)(a1 + 104) = 0; /*0x1409b568c*/
  *(_BYTE *)(a1 + 112) = 2; /*0x1409b5694*/
  v33 = v4; /*0x1409b569c*/
  sub_140A01ED0(v23, v4, v5); /*0x1409b56a3*/
  if ( v23[0] == -1 ) /*0x1409b56b1*/
  {
    sub_14033C560(v33, v5); /*0x1409b57eb*/
    v12 = v5 - v11; /*0x1409b57f3*/
    if ( v5 == v11 ) /*0x1409b57fa*/
      goto LABEL_21; /*0x1409b57fa*/
    if ( v12 >= v5 ) /*0x1409b57ff*/
    {
      if ( !v11 ) /*0x1409b5880*/
      {
        v13 = v33; /*0x1409b5886*/
        goto LABEL_30; /*0x1409b5886*/
      }
    }
    else if ( *(char *)(v33 + v12) >= -64 ) /*0x1409b580a*/
    {
LABEL_21:
      if ( v11 < 7 ) /*0x1409b5814*/
      {
        v30 = v33; /*0x1409b581a*/
        v31 = v32; /*0x1409b581e*/
        if ( !v5 ) /*0x1409b5825*/
          goto LABEL_32; /*0x1409b5825*/
        goto LABEL_31; /*0x1409b5825*/
      }
      v13 = v33; /*0x1409b582c*/
      v14 = (_DWORD *)(v33 + v12); /*0x1409b5830*/
      if ( !(*v14 ^ 0x6968743C | *(_DWORD *)((char *)v14 + 3) ^ 0x3E6B6E69) ) /*0x1409b5844*/
      {
        v34 = 1; /*0x1409b5850*/
        v15 = sub_14033BC10((char *)v14 + 7, v11 - 7); /*0x1409b5857*/
        v18 = v16; /*0x1409b585d*/
        if ( v16 < 0 ) /*0x1409b5863*/
        {
          v19 = 0; /*0x1409b5865*/
          goto LABEL_27; /*0x1409b5865*/
        }
        if ( v16 ) /*0x1409b58e4*/
        {
          v20 = v15; /*0x1409b58e6*/
          nullsub_1(v17); /*0x1409b58e9*/
          v19 = 1; /*0x1409b58ee*/
          v21 = sub_140001650(v18, 1); /*0x1409b58fc*/
          if ( !v21 ) /*0x1409b5904*/
          {
LABEL_27:
            v34 = 1; /*0x1409b5868*/
            sub_1416C2D4B(v19, v18); /*0x1409b5872*/
          }
          v22 = v21; /*0x1409b590a*/
          sub_141684120(v21, v20, v18); /*0x1409b5916*/
        }
        else
        {
          v22 = 1; /*0x1409b591d*/
        }
        if ( v32 ) /*0x1409b592a*/
          sub_140001660(v33, v32, 1); /*0x1409b5936*/
        v5 = v18; /*0x1409b593b*/
        v30 = v22; /*0x1409b593e*/
        v31 = v18; /*0x1409b5942*/
        if ( !v18 ) /*0x1409b5949*/
          goto LABEL_32; /*0x1409b5949*/
LABEL_31:
        sub_1409B4460(a1, v30, v5, a2); /*0x1409b5897*/
        sub_1409B2D80(a1, a2); /*0x1409b58b0*/
        goto LABEL_32; /*0x1409b58b0*/
      }
LABEL_30:
      v30 = v13; /*0x1409b588a*/
      v31 = v32; /*0x1409b588e*/
      if ( !v5 ) /*0x1409b5895*/
      {
LABEL_32:
        v9 = v31; /*0x1409b58b6*/
        if ( !v31 ) /*0x1409b58bd*/
          return; /*0x1409b58bd*/
        v8 = v30; /*0x1409b58c5*/
        goto LABEL_34; /*0x1409b58c5*/
      }
      goto LABEL_31; /*0x1409b5895*/
    }
    v34 = 1; /*0x1409b5954*/
    sub_1416C2F60(v33, v5, v12, v5, (__int64)&off_1417A8128); /*0x1409b596e*/
  }
  v28 = v23[0]; /*0x1409b56b7*/
  v30 = v23[1]; /*0x1409b56bf*/
  v29 = v25; /*0x1409b56cb*/
  v31 = v26; /*0x1409b56d3*/
  v6 = v27; /*0x1409b56d7*/
  if ( v24 ) /*0x1409b56de*/
  {
    sub_1409B4460(a1, v30, v24, a2); /*0x1409b56ea*/
    sub_1409B2D80(a1, a2); /*0x1409b56f6*/
  }
  if ( v6 ) /*0x1409b56ff*/
    sub_1409B0FA0((_QWORD *)a1, v31, v6, a2); /*0x1409b570e*/
  v7 = v32; /*0x1409b571b*/
  if ( v29 ) /*0x1409b571f*/
    sub_140001660(v31, v29, 1); /*0x1409b572b*/
  if ( v28 ) /*0x1409b5737*/
    sub_140001660(v30, v28, 1); /*0x1409b5743*/
  if ( v7 ) /*0x1409b574b*/
  {
    v8 = v33; /*0x1409b5757*/
    v9 = v7; /*0x1409b575b*/
LABEL_34:
    sub_140001660(v8, v9, 1); /*0x1409b58c9*/
  }
}