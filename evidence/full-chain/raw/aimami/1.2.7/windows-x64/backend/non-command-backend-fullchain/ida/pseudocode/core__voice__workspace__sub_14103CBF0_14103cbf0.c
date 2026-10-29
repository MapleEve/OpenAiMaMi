// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14103cbf0 | name sub_14103CBF0
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14103CBF0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-48h] BYREF
  char v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  _BYTE *v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]
  __int128 v18; // [rsp+80h] [rbp+0h] BYREF
  __int64 v19; // [rsp+90h] [rbp+10h]
  __int64 v20; // [rsp+98h] [rbp+18h]

  v20 = -2;
  v6 = sub_1401B6D70(a2);
  if ( v6 )
  {
    *a1 = 2;
    a1[1] = v6;
    return;
  }
  nullsub_1(v7);
  v8 = (_BYTE *)sub_140001650(128, 1);
  if ( !v8 )
    sub_141938D2B(1, 128);
  v14 = 128;
  v15 = v8;
  v12[0] = &v14;
  v12[1] = asc_141A68A20;
  v12[2] = 2;
  v12[3] = 1;
  v13 = 0;
  *v8 = 123;
  v16 = 1;
  LOWORD(v18) = 256;
  *((_QWORD *)&v18 + 1) = v12;
  v9 = sub_140BF9FA0(&v18, aSchemaversion_3, 13, a3 + 136);
  if ( v9 )
    goto LABEL_8;
  if ( (_BYTE)v18 )
    goto LABEL_6;
  v9 = sub_140BFA750(&v18, aLastupdatedat_0, 13, a3 + 128);
  if ( v9 )
  {
LABEL_8:
    if ( v14 )
      sub_140001660(v15, v14, 1);
    goto LABEL_10;
  }
  if ( (_BYTE)v18 )
    goto LABEL_6;
  v9 = sub_140BF0EB0(&v18, aTemplates_0, 9, a3);
  if ( v9 )
    goto LABEL_8;
  if ( (_BYTE)v18 )
  {
LABEL_6:
    v9 = sub_141934E70();
    goto LABEL_8;
  }
  v9 = sub_140BF1370(&v18, aVocabulary_0, 10, a3 + 24);
  if ( v9 )
    goto LABEL_8;
  v9 = sub_140FDEE10(&v18, a3 + 48);
  if ( v9 )
    goto LABEL_8;
  v9 = sub_140FDEDF0(&v18, a3 + 72);
  if ( v9 )
    goto LABEL_8;
  v9 = sub_140FDEE90(&v18, a3 + 96);
  if ( v9 )
    goto LABEL_8;
  v11 = v18;
  sub_140288D60(&v11);
  v17 = (__int64)v15;
  v19 = v14;
  if ( v14 == -1 )
  {
    v9 = v17;
LABEL_10:
    *a1 = 3;
    a1[1] = v9;
    return;
  }
  if ( (sub_140222E10(a2[89], a2[90], v17, v16) & 1) != 0 )
  {
    *a1 = 2;
    a1[1] = v10;
  }
  else
  {
    sub_1401BD710(v10, v10);
    *a1 = -1;
  }
  if ( v19 )
    sub_140001660(v17, v19, 1);
}
