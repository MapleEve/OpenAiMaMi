// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404E0B80(__int64 **a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  _OWORD v7[6]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[4]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v10; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v11; // [rsp+D0h] [rbp+50h]
  __int128 v12; // [rsp+E0h] [rbp+60h]
  __int128 v13; // [rsp+F0h] [rbp+70h]
  __int128 v14; // [rsp+100h] [rbp+80h]
  __int128 v15; // [rsp+110h] [rbp+90h]
  __int128 v16; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v17; // [rsp+130h] [rbp+B0h]
  __int128 v18; // [rsp+140h] [rbp+C0h]
  __int128 v19; // [rsp+150h] [rbp+D0h]
  __int128 v20; // [rsp+160h] [rbp+E0h]
  void *v21; // [rsp+170h] [rbp+F0h]
  _QWORD *v22; // [rsp+178h] [rbp+F8h]
  char v23; // [rsp+187h] [rbp+107h] BYREF
  __int64 v24; // [rsp+188h] [rbp+108h]

  v24 = -2; /*0x1404e0b95*/
  v2 = **a1; /*0x1404e0ba3*/
  v3 = (*a1)[1]; /*0x1404e0ba6*/
  v4 = *(_QWORD *)(a2 + 8); /*0x1404e0baa*/
  v5 = *(_QWORD *)(a2 + 16); /*0x1404e0bae*/
  sub_141486710(&v16, v4, v5); /*0x1404e0bbf*/
  if ( (_DWORD)v16 == 2 ) /*0x1404e0bcb*/
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&v16 + 1); /*0x1404e0bd4*/
    *(_QWORD *)&v10 = 2; /*0x1404e0bd8*/
LABEL_4:
    sub_140018650((char *)&v10 + 8); /*0x1404e0c31*/
    return 0; /*0x1404e0c4b*/
  }
  v10 = v16; /*0x1404e0bfe*/
  *(_QWORD *)&v15 = v21; /*0x1404e0c09*/
  v14 = v20; /*0x1404e0c17*/
  v13 = v19; /*0x1404e0c1e*/
  v12 = v18; /*0x1404e0c22*/
  v11 = v17; /*0x1404e0c26*/
  if ( (_QWORD)v16 == 2 ) /*0x1404e0c2f*/
    goto LABEL_4; /*0x1404e0c2f*/
  sub_1404BD470((unsigned int)v7, v4, v5, v2, v3); /*0x1404e0c5e*/
  if ( LODWORD(v7[0]) != -1 ) /*0x1404e0c67*/
  {
    v15 = v7[5]; /*0x1404e0c71*/
    v14 = v7[4]; /*0x1404e0c7c*/
    v13 = v7[3]; /*0x1404e0c93*/
    v12 = v7[2]; /*0x1404e0c97*/
    v11 = v7[1]; /*0x1404e0c9b*/
    v10 = v7[0]; /*0x1404e0c9f*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404e0cb1*/
    {
      v9[0] = v4; /*0x1404e0cb7*/
      v9[1] = v5; /*0x1404e0cbb*/
      v8[0] = v9; /*0x1404e0cc3*/
      v8[1] = sub_14148F3A0; /*0x1404e0cce*/
      v8[2] = &v10; /*0x1404e0cd6*/
      v8[3] = sub_140B036A0; /*0x1404e0ce1*/
      *(_QWORD *)&v16 = 0; /*0x1404e0ce5*/
      *((_QWORD *)&v16 + 1) = aCodexmateLibCo_0; /*0x1404e0cf7*/
      v17 = 0x33u; /*0x1404e0cfe*/
      *(_QWORD *)&v18 = aSrcCoreRelayCo_0; /*0x1404e0d1b*/
      *((_QWORD *)&v18 + 1) = 41; /*0x1404e0d22*/
      *(_QWORD *)&v19 = 2; /*0x1404e0d2d*/
      *((_QWORD *)&v19 + 1) = aCodexmateLibCo_0; /*0x1404e0d38*/
      *(_QWORD *)&v20 = 51; /*0x1404e0d3f*/
      *((_QWORD *)&v20 + 1) = 0x182A00000001LL; /*0x1404e0d54*/
      v21 = &unk_14175749C; /*0x1404e0d62*/
      v22 = v8; /*0x1404e0d6d*/
      sub_1412C36A0(&v23, &v16); /*0x1404e0d82*/
    }
    sub_14043E650(&v10); /*0x1404e0d8c*/
    return 0; /*0x1404e0d96*/
  }
  return BYTE8(v7[0]); /*0x1404e0c3e*/
}