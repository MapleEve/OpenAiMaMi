// win 1.2.7 | module src/core/account_coordination.rs | ea 0x140fe2210 | name sub_140FE2210
// win 1.2.7 | module src/core/account_coordination.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_140FE2210(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // eax
  int v12; // edx
  unsigned __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  __int64 (__fastcall *v22)(unsigned __int64); // rax
  unsigned __int64 v23; // rax
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+70h] [rbp-10h]
  __int128 v30; // [rsp+80h] [rbp+0h]
  __int128 v31; // [rsp+90h] [rbp+10h]
  __int128 v32; // [rsp+A0h] [rbp+20h]
  __int128 v33; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+40h]
  HANDLE hObject; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v36; // [rsp+D0h] [rbp+50h] BYREF
  char v37; // [rsp+DFh] [rbp+5Fh]
  __int64 v38; // [rsp+E0h] [rbp+60h]

  v38 = -2;
  v26[0] = a4;
  v26[1] = a5;
  sub_140FE2060((unsigned int)&v27, a2, a3, a4, a5);
  v7 = *((_QWORD *)&v27 + 1);
  v6 = v27;
  if ( (_QWORD)v27 != -1 )
  {
    *(_OWORD *)(a1 + 80) = v32;
    v8 = v28;
    v9 = v29;
    v10 = v30;
    *(_OWORD *)(a1 + 64) = v31;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v7;
    return v6;
  }
  hObject = *((HANDLE *)&v27 + 1);
  v25 = *((_QWORD *)&v27 + 1);
  v11 = sub_14167FC00();
  v13 = sub_1416A1240(v11, v12, 20, 0, (__int64)&off_141A6D6A0);
  v15 = v14;
  while ( 1 )
  {
LABEL_4:
    v16 = sub_141412DF0(&v25);
    v17 = v16;
    if ( !v16 )
    {
      LODWORD(v6) = (_DWORD)hObject;
      *(_QWORD *)(a1 + 8) = hObject;
      *(_QWORD *)a1 = -1;
      return v6;
    }
    v37 = 1;
    if ( !(unsigned __int8)sub_140FF5530(v16) )
      break;
    v36 = v17;
    v20 = sub_14167FC00();
    if ( v20 == v13 )
    {
      if ( v21 >= v15 )
        goto LABEL_28;
    }
    else if ( v20 >= v13 )
    {
LABEL_28:
      *(_QWORD *)&v33 = v26;
      *((_QWORD *)&v33 + 1) = sub_140186EE0;
      sub_1416ABFD0(&v27, &unk_141A6D6B8, &v33);
      *(_QWORD *)(a1 + 24) = v28;
      *(_OWORD *)(a1 + 8) = v27;
      *(_QWORD *)a1 = 10;
      if ( (v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
      {
        *((_QWORD *)&v33 + 1) = v17 - 1;
        LOBYTE(v33) = 3;
        v37 = 0;
        sub_1416BCB00((char *)&v33 + 8);
      }
      goto LABEL_31;
    }
    sub_141696800(0, 25000000);
    if ( (v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
    {
LABEL_15:
      *((_QWORD *)&v27 + 1) = v17 - 1;
      LOBYTE(v27) = 3;
      v37 = 0;
      sub_1416BCB00((char *)&v27 + 8);
    }
  }
  switch ( v17 & 3 )
  {
    case 0uLL:
      if ( *(_BYTE *)(v17 + 16) == 35 )
        goto LABEL_21;
      goto LABEL_25;
    case 1uLL:
      if ( *(_BYTE *)(v17 + 31) == 35 )
        goto LABEL_21;
      goto LABEL_25;
    case 2uLL:
      v37 = 1;
      v22 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v19, v18) + 8);
      v37 = 1;
      LOBYTE(v23) = v22(HIDWORD(v17));
      goto LABEL_18;
    case 3uLL:
      v23 = HIDWORD(v17);
LABEL_18:
      if ( (_BYTE)v23 == 35 )
      {
LABEL_21:
        if ( (v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
          goto LABEL_15;
        goto LABEL_4;
      }
LABEL_25:
      v36 = v17;
      *(_QWORD *)&v27 = v26;
      *((_QWORD *)&v27 + 1) = sub_140186EE0;
      *(_QWORD *)&v28 = &v36;
      *((_QWORD *)&v28 + 1) = sub_1416BB0B0;
      sub_1416ABFD0(&v33, &unk_141A6D654, &v27);
      *(_QWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v33;
      *(_QWORD *)a1 = 10;
      if ( (v36 & 3) - 2 >= 2 && (v36 & 3) != 0 )
      {
        *((_QWORD *)&v27 + 1) = v36 - 1;
        LOBYTE(v27) = 3;
        v37 = 0;
        sub_1416BCB00((char *)&v27 + 8);
      }
LABEL_31:
      LODWORD(v6) = CloseHandle(hObject);
      return v6;
  }
}
