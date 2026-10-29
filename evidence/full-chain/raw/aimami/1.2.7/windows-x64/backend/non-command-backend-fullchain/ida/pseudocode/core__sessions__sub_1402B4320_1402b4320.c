// win 1.2.7 | module src/core/sessions.rs | ea 0x1402b4320 | name sub_1402B4320
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402B4320(__int128 *a1, __int128 *a2, __int64 a3, __int64 a4, __int128 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // [rsp+27h] [rbp-D1h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v16[6]; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v17[12]; // [rsp+68h] [rbp-90h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-30h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-20h] BYREF

  v15[0] = a3;
  v15[1] = a4;
  v18 = a5;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v19 = *a2;
    v16[0] = v15;
    v16[1] = sub_140186EE0;
    v16[2] = &v18;
    v16[3] = sub_140186EE0;
    v16[4] = &v19;
    v16[5] = sub_14169F630;
    v17[6] = 2;
    v17[7] = aCodexmateLibCo_2;
    v17[8] = 29;
    v17[10] = &unk_1419E5E10;
    v17[11] = v16;
    v17[0] = 0;
    v17[1] = aCodexmateLibCo_2;
    v17[2] = 29;
    v17[3] = 0;
    v17[4] = aSrcCoreSession_5;
    v17[5] = 20;
    v17[9] = 0x1FE00000001LL;
    sub_1414D53A0(&v14, v17);
  }
  result = sub_14167F170(a1);
  if ( *(_BYTE *)(result + 16) == 1 )
  {
    v11 = *(_QWORD *)result;
    v12 = *(_QWORD *)(result + 8);
  }
  else
  {
    v13 = result;
    v11 = sub_141696260(v8, v7, v9, v10);
    result = v13;
    *(_QWORD *)(v13 + 8) = v12;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)result = v11 + 1;
  a1[1] = xmmword_1419E4880;
  *a1 = *(_OWORD *)&off_1419E4870;
  *((_QWORD *)a1 + 4) = v11;
  *((_QWORD *)a1 + 5) = v12;
  *((_BYTE *)a1 + 48) = 0;
  return result;
}
