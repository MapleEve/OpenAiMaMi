// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404C0090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r15
  _OWORD v10[6]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[4]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v12[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v13; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v14; // [rsp+D0h] [rbp+50h]
  __int128 v15; // [rsp+E0h] [rbp+60h]
  __int128 v16; // [rsp+F0h] [rbp+70h]
  __int128 v17; // [rsp+100h] [rbp+80h]
  __int128 v18; // [rsp+110h] [rbp+90h]
  __int128 v19; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v20; // [rsp+130h] [rbp+B0h]
  __int128 v21; // [rsp+140h] [rbp+C0h]
  __int128 v22; // [rsp+150h] [rbp+D0h]
  __int128 v23; // [rsp+160h] [rbp+E0h]
  void *v24; // [rsp+170h] [rbp+F0h]
  _QWORD *v25; // [rsp+178h] [rbp+F8h]
  __int64 v26; // [rsp+180h] [rbp+100h]
  __int64 v27; // [rsp+188h] [rbp+108h]
  __int64 v28; // [rsp+190h] [rbp+110h]
  char v29; // [rsp+19Fh] [rbp+11Fh] BYREF
  __int64 v30; // [rsp+1A0h] [rbp+120h]

  v30 = -2; /*0x1404c00ab*/
  if ( !a2 ) /*0x1404c00b9*/
    return 0; /*0x1404c032a*/
  v4 = a1; /*0x1404c00c2*/
  v27 = a3; /*0x1404c00c5*/
  v26 = a4; /*0x1404c00cc*/
  v5 = a1 + 32 * a2; /*0x1404c00d7*/
  result = 0; /*0x1404c00de*/
  v7 = 0; /*0x1404c00e7*/
  while ( 2 ) /*0x1404c00e9*/
  {
    while ( 2 ) /*0x1404c00e9*/
    {
      v28 = result; /*0x1404c00e9*/
      while ( 1 ) /*0x1404c0128*/
      {
        v8 = *(_QWORD *)(v4 + 8); /*0x1404c0128*/
        v9 = *(_QWORD *)(v4 + 16); /*0x1404c012c*/
        sub_141486710(&v19, v8, v9); /*0x1404c0139*/
        if ( (_DWORD)v19 != 2 ) /*0x1404c0145*/
          break; /*0x1404c0145*/
        *((_QWORD *)&v13 + 1) = *((_QWORD *)&v19 + 1); /*0x1404c0107*/
        *(_QWORD *)&v13 = 2; /*0x1404c010b*/
LABEL_5:
        v4 += 32; /*0x1404c0113*/
        sub_140018650((char *)&v13 + 8); /*0x1404c011a*/
        if ( v4 == v5 ) /*0x1404c0122*/
          return v28; /*0x1404c0326*/
      }
      v13 = v19; /*0x1404c0163*/
      *(_QWORD *)&v18 = v24; /*0x1404c016e*/
      v17 = v23; /*0x1404c017c*/
      v16 = v22; /*0x1404c0183*/
      v15 = v21; /*0x1404c0187*/
      v14 = v20; /*0x1404c018b*/
      if ( (_QWORD)v19 == 2 ) /*0x1404c0194*/
        goto LABEL_5; /*0x1404c0194*/
      sub_1404BD470((unsigned int)v10, v8, v9, v27, v26); /*0x1404c01b7*/
      if ( LODWORD(v10[0]) != -1 ) /*0x1404c01c0*/
      {
        v18 = v10[5]; /*0x1404c01ca*/
        v17 = v10[4]; /*0x1404c01d5*/
        v16 = v10[3]; /*0x1404c01ec*/
        v15 = v10[2]; /*0x1404c01f0*/
        v14 = v10[1]; /*0x1404c01f4*/
        v13 = v10[0]; /*0x1404c01f8*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404c020a*/
        {
          v12[0] = v8; /*0x1404c0210*/
          v12[1] = v9; /*0x1404c0214*/
          v11[0] = v12; /*0x1404c021c*/
          v11[1] = sub_14148F3A0; /*0x1404c0227*/
          v11[2] = &v13; /*0x1404c022f*/
          v11[3] = sub_140B036A0; /*0x1404c023a*/
          *(_QWORD *)&v19 = 0; /*0x1404c023e*/
          *((_QWORD *)&v19 + 1) = aCodexmateLibCo_0; /*0x1404c0250*/
          v20 = 0x33u; /*0x1404c0257*/
          *(_QWORD *)&v21 = aSrcCoreRelayCo_0; /*0x1404c0274*/
          *((_QWORD *)&v21 + 1) = 41; /*0x1404c027b*/
          *(_QWORD *)&v22 = 2; /*0x1404c0286*/
          *((_QWORD *)&v22 + 1) = aCodexmateLibCo_0; /*0x1404c0291*/
          *(_QWORD *)&v23 = 51; /*0x1404c0298*/
          *((_QWORD *)&v23 + 1) = 0x180100000001LL; /*0x1404c02ad*/
          v24 = &unk_14175749C; /*0x1404c02bb*/
          v25 = v11; /*0x1404c02c6*/
          sub_1412C36A0(&v29, &v19); /*0x1404c02d7*/
        }
        ++v7; /*0x1404c02dd*/
        sub_14043E650(&v13); /*0x1404c02e4*/
        result = v28; /*0x1404c02e9*/
        v4 += 32; /*0x1404c02f0*/
        if ( v4 == v5 ) /*0x1404c02f7*/
          return result; /*0x1404c02f7*/
        continue; /*0x1404c02f7*/
      }
      break;
    }
    result = BYTE8(v10[0]) + v28; /*0x1404c030d*/
    v4 += 32; /*0x1404c0310*/
    if ( v4 != v5 ) /*0x1404c0317*/
      continue; /*0x1404c0317*/
    return result; /*0x1404c032f*/
  }
}