// mac 1.2.2 NEW migrate_session_worktree 0x100bb1040 d=1
_QWORD *__fastcall rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
        _QWORD *a1,
        __int64 a2,
        const char *a3,
        signed __int64 a4)
{
  signed __int64 v5; // r14
  sqlite3 *v7; // rbx
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  char *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r11
  __int64 v22; // rax
  char v23; // cl
  _QWORD *v24; // rbx
  char *pzTail[3]; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  sqlite3_stmt *v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[56]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h]
  sqlite3_stmt *ppStmt; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  sqlite3_stmt *v39; // [rsp+C8h] [rbp-38h]
  _QWORD *v40; // [rsp+D0h] [rbp-30h]

  if ( !a4 ) /*0x100bb1057*/
  {
LABEL_21:
    *a1 = 0x8000000000000016LL; /*0x100bb1221*/
    return a1; /*0x100bb122f*/
  }
  v40 = a1; /*0x100bb1060*/
  if ( *(_QWORD *)a2 ) /*0x100bb1064*/
LABEL_19:
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_1018AF7D0); /*0x100bb1205*/
  v5 = a4; /*0x100bb106e*/
  while ( 1 ) /*0x100bb1080*/
  {
    *(_QWORD *)a2 = -1; /*0x100bb1080*/
    ppStmt = nullptr; /*0x100bb1087*/
    if ( (unsigned __int64)v5 > 0x7FFFFFFF ) /*0x100bb1096*/
    {
      *(_QWORD *)&v31[8] = 0x8000000000000000LL; /*0x100bb12ac*/
      *(_DWORD *)&v31[32] = 18; /*0x100bb12b3*/
      v31[36] = 15; /*0x100bb12bd*/
      *(_QWORD *)v31 = 0x8000000000000000LL; /*0x100bb12c4*/
LABEL_29:
      v14 = v32; /*0x100bb12e4*/
      v15 = *(_QWORD *)v31; /*0x100bb12ef*/
      v16 = *(_QWORD *)&v31[8]; /*0x100bb12f2*/
      v34 = *(_QWORD *)v31; /*0x100bb12f6*/
      v35 = *(_QWORD *)&v31[8]; /*0x100bb12fa*/
      v17 = *(_QWORD *)&v31[16]; /*0x100bb12fe*/
      v18 = *(_QWORD *)&v31[24]; /*0x100bb1306*/
      v36 = *(_OWORD *)&v31[16]; /*0x100bb1306*/
      v19 = *(_QWORD *)&v31[32]; /*0x100bb130e*/
      v37 = *(_QWORD *)&v31[32]; /*0x100bb1312*/
      v20 = *(_QWORD *)&v31[40]; /*0x100bb1316*/
      v38 = *(_QWORD *)&v31[40]; /*0x100bb131a*/
      v39 = *(sqlite3_stmt **)&v31[48]; /*0x100bb1322*/
      v21 = v40; /*0x100bb1326*/
      v40[6] = *(_QWORD *)&v31[48]; /*0x100bb132a*/
      v21[5] = v20; /*0x100bb132e*/
      v21[4] = v19; /*0x100bb1332*/
      v21[3] = v18; /*0x100bb1336*/
      a1 = v21; /*0x100bb133a*/
      v21[2] = v17; /*0x100bb133d*/
      v21[1] = v16; /*0x100bb1341*/
      *v21 = v15; /*0x100bb1345*/
      v21[7] = v14; /*0x100bb1348*/
      ++*(_QWORD *)a2; /*0x100bb134c*/
      return a1; /*0x100bb134f*/
    }
    pzTail[0] = nullptr; /*0x100bb109c*/
    v7 = *(sqlite3 **)(a2 + 16); /*0x100bb10a7*/
    v8 = sqlite3_prepare_v3(v7, a3, v5, 0, &ppStmt, (const char **)pzTail); /*0x100bb10c1*/
    if ( v8 ) /*0x100bb10c8*/
    {
      rusqlite::error::error_with_offset::h51f33faeb83b7a93(v31, v7, v8, a3, v5); /*0x100bb12df*/
      goto LABEL_29; /*0x100bb12df*/
    }
    if ( pzTail[0] ) /*0x100bb10d8*/
    {
      v9 = pzTail[0] - (char *)a3; /*0x100bb10e0*/
      if ( pzTail[0] - (char *)a3 >= v5 ) /*0x100bb10e8*/
        v9 = 0; /*0x100bb10e8*/
      if ( pzTail[0] - (char *)a3 <= 0 ) /*0x100bb10ef*/
        v9 = 0; /*0x100bb10ef*/
    }
    else
    {
      v9 = 0; /*0x100bb1100*/
    }
    v30 = a2; /*0x100bb1106*/
    *(_QWORD *)&v31[8] = 0; /*0x100bb1114*/
    *(_QWORD *)v31 = 0; /*0x100bb111c*/
    *(_QWORD *)&v31[32] = 0; /*0x100bb1123*/
    *(_QWORD *)&v31[24] = 0; /*0x100bb112b*/
    *(_QWORD *)&v31[48] = ppStmt; /*0x100bb1133*/
    v34 = 0; /*0x100bb113e*/
    v35 = 0; /*0x100bb1142*/
    v36 = *(unsigned __int64 *)&v31[16]; /*0x100bb114a*/
    v37 = 0; /*0x100bb115a*/
    v38 = *(_QWORD *)&v31[40]; /*0x100bb1162*/
    v39 = ppStmt; /*0x100bb116a*/
    v29 = ppStmt; /*0x100bb1179*/
    v28 = *(_QWORD *)&v31[40]; /*0x100bb1181*/
    v27 = 0; /*0x100bb1189*/
    v26 = *(unsigned __int64 *)&v31[16]; /*0x100bb1199*/
    pzTail[2] = nullptr; /*0x100bb11a5*/
    pzTail[1] = nullptr; /*0x100bb11a9*/
    pzTail[0] = (char *)a2; /*0x100bb11ac*/
    ++*(_QWORD *)a2; /*0x100bb11b3*/
    if ( v29 ) /*0x100bb11c0*/
    {
      v10 = sqlite3_step(v29); /*0x100bb11c2*/
      if ( (v10 & 0xFFFFFFFE) != 0x64 ) /*0x100bb11cf*/
        break; /*0x100bb11cf*/
    }
    if ( !v9 || v5 <= v9 ) /*0x100bb11dc*/
    {
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h29da22e5797c1841(pzTail); /*0x100bb1218*/
      a1 = v40; /*0x100bb121d*/
      goto LABEL_21; /*0x100bb121d*/
    }
    if ( a3[v9] < -64 ) /*0x100bb11e3*/
      core::str::slice_error_fail::h480e51fbd8b15eba(a3, v5, v9, v5, &off_1018AF7B8); /*0x100bb1410*/
    a3 += v9; /*0x100bb11e9*/
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h29da22e5797c1841(pzTail); /*0x100bb11f3*/
    v5 -= v9; /*0x100bb11fc*/
    if ( *(_QWORD *)a2 ) /*0x100bb11f8*/
      goto LABEL_19; /*0x100bb11ff*/
  }
  v12 = pzTail[0]; /*0x100bb1251*/
  v13 = *(_QWORD *)pzTail[0]; /*0x100bb1258*/
  if ( *(_QWORD *)pzTail[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100bb1262*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1018AF7A0); /*0x100bb135b*/
  *(_QWORD *)pzTail[0] = v13 + 1; /*0x100bb126c*/
  if ( !v10 ) /*0x100bb1271*/
  {
    *(_QWORD *)v12 = v13; /*0x100bb1277*/
    goto LABEL_26; /*0x100bb1277*/
  }
  rusqlite::error::error_from_handle::hd78209d4a5eceb5e(&v30, *((_QWORD *)v12 + 2), v10); /*0x100bb1372*/
  v22 = v30; /*0x100bb1377*/
  --*(_QWORD *)v12; /*0x100bb137e*/
  if ( v22 == 0x8000000000000016LL ) /*0x100bb1388*/
LABEL_26:
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100bb127a*/
      (__int64)"called `Result::unwrap_err()` on an `Ok` value",
      46,
      (__int64)&v34,
      (__int64)&unk_1018AF780,
      (__int64)&off_1018AF818);
  v23 = v31[0]; /*0x100bb138e*/
  v24 = v40; /*0x100bb1399*/
  v40[7] = *(_QWORD *)&v31[48]; /*0x100bb139d*/
  *(_QWORD *)((char *)v24 + 49) = *(_QWORD *)&v31[41]; /*0x100bb13a8*/
  *(_OWORD *)((char *)v24 + 33) = *(_OWORD *)&v31[25]; /*0x100bb13be*/
  *(_QWORD *)((char *)v24 + 25) = *(_QWORD *)&v31[17]; /*0x100bb13c9*/
  *(_OWORD *)((char *)v24 + 9) = *(_OWORD *)&v31[1]; /*0x100bb13df*/
  *v24 = v22; /*0x100bb13e3*/
  *((_BYTE *)v24 + 8) = v23; /*0x100bb13e6*/
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h29da22e5797c1841(pzTail); /*0x100bb13f0*/
  return v24; /*0x100bb1235*/
}