// win 1.2.7 | module src/platform/process.rs | ea 0x140ee8e60 | name sub_140EE8E60
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140EE8E60(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r15
  _OWORD *v6; // rdi
  __int128 v7; // xmm0
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _OWORD *v16; // rbx
  _OWORD *v17; // rdi
  _OWORD *v18; // r14
  _QWORD v19[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  const char *v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  const char *v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+8h]
  void *v29; // [rsp+90h] [rbp+10h]
  _QWORD *v30; // [rsp+98h] [rbp+18h]
  __int128 v31; // [rsp+A0h] [rbp+20h]
  __int64 v32; // [rsp+B0h] [rbp+30h]
  __int64 v33; // [rsp+B8h] [rbp+38h] BYREF
  _OWORD *v34; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v35; // [rsp+C8h] [rbp+48h]
  __int128 v36; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+E0h] [rbp+60h] BYREF
  char v38; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v39; // [rsp+F8h] [rbp+78h]

  v39 = -2;
  sub_1403D91C0(&v33, a2, a2 + 32 * a3);
  if ( v35 >= 2 )
  {
    v16 = v34;
    if ( v35 >= 0x15 )
    {
      sub_14065B1E0(v34, v35, &v38);
    }
    else
    {
      v17 = &v34[2 * v35];
      v18 = v34 + 2;
      do
      {
        sub_140DF9210(v16, v18);
        v18 += 2;
      }
      while ( v18 != v17 );
    }
  }
  sub_14037BBA0(&v33);
  v5 = v35;
  if ( v35 == 1 )
  {
    v6 = v34;
    v7 = *v34;
    a1[1] = v34[1];
    *a1 = v7;
    goto LABEL_6;
  }
  if ( !v35 )
  {
    v6 = v34;
    *(_QWORD *)a1 = -1;
    goto LABEL_6;
  }
  v6 = v34;
  if ( *(_QWORD *)off_1421E6EC0 <= 1u )
  {
    *(_QWORD *)a1 = -1;
LABEL_22:
    v14 = (_QWORD *)v6 + 1;
    do
    {
      v15 = *(v14 - 1);
      if ( v15 )
        sub_140001660(*v14, v15, 1);
      v14 += 4;
      --v5;
    }
    while ( v5 );
    goto LABEL_6;
  }
  nullsub_1(v4);
  v9 = sub_140001650(24 * v5, 8);
  if ( !v9 )
    sub_141938D2B(8, 24 * v5);
  *(_QWORD *)&v36 = v5;
  *((_QWORD *)&v36 + 1) = v9;
  v37 = 0;
  v21 = v9;
  v20 = (unsigned __int64)&v37;
  sub_1402A83A0(v6, &v6[2 * v5], &v20);
  v31 = v36;
  v10 = v37;
  v32 = v37;
  v11 = *((_QWORD *)&v36 + 1);
  sub_140D1EE10((unsigned int)&v20, DWORD2(v36), v37, (unsigned int)&unk_141A55FEA, 3);
  v37 = v21;
  v36 = v20;
  v19[0] = &v36;
  v19[1] = sub_1400015F0;
  v25 = 2;
  v26 = aCodexmateLibPl_2;
  v27 = 32;
  v29 = &unk_141A5A60A;
  v30 = v19;
  *(_QWORD *)&v20 = 0;
  *((_QWORD *)&v20 + 1) = aCodexmateLibPl_2;
  v21 = 32;
  v22 = 0;
  v23 = aSrcPlatformPro_1;
  v24 = 23;
  v28 = 0x40E00000001LL;
  sub_1414D53A0(&v38, &v20);
  if ( (_QWORD)v36 )
    sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
  if ( v10 )
  {
    v12 = (_QWORD *)(v11 + 8);
    do
    {
      v13 = *(v12 - 1);
      if ( v13 )
        sub_140001660(*v12, v13, 1);
      v12 += 3;
      --v10;
    }
    while ( v10 );
  }
  if ( (_QWORD)v31 )
    sub_140001660(v11, 24 * v31, 8);
  *(_QWORD *)a1 = -1;
  if ( v5 )
    goto LABEL_22;
LABEL_6:
  if ( v33 )
    sub_140001660(v6, 32 * v33, 8);
  return a1;
}
