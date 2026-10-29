// win 1.2.7 | module src/core/repository.rs | ea 0x1401cf760 | name sub_1401CF760
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401CF760(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r15d
  __int64 v20; // r14
  char v21; // al
  int v22; // edx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h]
  __int64 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+68h] [rbp-18h]
  __int128 v37; // [rsp+70h] [rbp-10h]
  char v38; // [rsp+80h] [rbp+0h]
  _BYTE v39[7]; // [rsp+81h] [rbp+1h]
  __int64 v40; // [rsp+88h] [rbp+8h]
  int v41; // [rsp+90h] [rbp+10h]
  char v42; // [rsp+94h] [rbp+14h]
  __int64 v43; // [rsp+A0h] [rbp+20h]
  _DWORD v44[2]; // [rsp+A8h] [rbp+28h]
  __int128 v45; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+40h]
  __int64 v47; // [rsp+C8h] [rbp+48h]
  const char *v48; // [rsp+D0h] [rbp+50h]
  __int64 v49; // [rsp+D8h] [rbp+58h]
  __int64 v50; // [rsp+E0h] [rbp+60h]
  const char *v51; // [rsp+E8h] [rbp+68h]
  __int64 v52; // [rsp+F0h] [rbp+70h]
  __int64 v53; // [rsp+F8h] [rbp+78h]
  void *v54; // [rsp+100h] [rbp+80h]
  __int128 *v55; // [rsp+108h] [rbp+88h]
  __int128 v56; // [rsp+110h] [rbp+90h] BYREF
  __int128 v57; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v58; // [rsp+130h] [rbp+B0h]
  __int64 v59; // [rsp+138h] [rbp+B8h]
  char v60; // [rsp+147h] [rbp+C7h] BYREF
  __int64 v61; // [rsp+148h] [rbp+C8h]

  v61 = -2;
  result = sub_1401B6D70(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  if ( a4 )
  {
    v9 = a2[37];
    v10 = a2[38];
    sub_141695A00(&v45, v9, v10);
    if ( (_DWORD)v45 == 2 )
    {
      if ( (BYTE8(v45) & 3u) - 2 >= 2 && (BYTE8(v45) & 3) != 0 )
      {
        --*((_QWORD *)&v45 + 1);
        LOBYTE(v45) = 3;
        sub_1416BCB00((char *)&v45 + 8);
      }
    }
    else
    {
      LODWORD(v33) = sub_141683E80(v12, v11, v13);
      DWORD1(v33) = v14;
      sub_141683E30(&v45, &v33, 3577643008LL, 27111902);
      if ( (_BYTE)v45 )
        v15 = 0;
      else
        v15 = *((_QWORD *)&v45 + 1);
      *(_QWORD *)&v33 = v15;
      *(_QWORD *)&v45 = &v33;
      *((_QWORD *)&v45 + 1) = sub_1416BCBE0;
      sub_1416ABFD0(&v30, &unk_1419D9DD6, &v45);
      v16 = a2[49];
      v17 = a2[50];
      v59 = v31;
      sub_1416828D0((unsigned int)&v33, v16, v17, v31, v32);
      if ( v30 )
        sub_140001660(v59, v30, 1);
      v59 = *((_QWORD *)&v33 + 1);
      if ( (sub_141695640(v9, v10, *((_QWORD *)&v33 + 1), v34) & 1) != 0 )
      {
        *(_QWORD *)&v56 = v18;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v57 = &v56;
          *((_QWORD *)&v57 + 1) = sub_1416BB0B0;
          v50 = 2;
          v51 = aCodexmateLibCo_21;
          v52 = 31;
          v54 = &unk_1419D9DE8;
          v55 = &v57;
          *(_QWORD *)&v45 = 0;
          *((_QWORD *)&v45 + 1) = aCodexmateLibCo_21;
          v46 = 31;
          v47 = 0;
          v48 = aSrcCoreReposit;
          v49 = 22;
          v53 = 0x9D600000001LL;
          sub_1414D53A0(&v60, &v45);
          v18 = v56;
        }
        if ( (unsigned int)(v18 & 3) - 2 >= 2 && (v18 & 3) != 0 )
        {
          *((_QWORD *)&v45 + 1) = v18 - 1;
          LOBYTE(v45) = 3;
          sub_1416BCB00((char *)&v45 + 8);
        }
      }
      if ( (_QWORD)v33 )
        sub_140001660(v59, v33, 1);
    }
  }
  v19 = *(_DWORD *)(a3 + 80);
  v20 = *(_QWORD *)(a3 + 72);
  if ( *(_QWORD *)(a3 + 24) == -1 )
    *(_QWORD *)&v57 = -1;
  else
    sub_1416AC440(&v57, a3 + 24);
  sub_1403F21D0(&v45, a3);
  v21 = *(_BYTE *)(a3 + 64);
  if ( v21 != 2 )
  {
    v56 = *(_OWORD *)(a3 + 48);
    v22 = *(_DWORD *)(a3 + 68);
    v44[0] = *(_DWORD *)(a3 + 65);
    *(_DWORD *)((char *)v44 + 3) = v22;
  }
  v23 = 4;
  if ( v19 >= 5 )
    v23 = v19;
  v24 = *(unsigned __int8 *)(a3 + 84);
  v40 = v20;
  v35 = v57;
  v36 = v58;
  v33 = v45;
  v34 = v46;
  v37 = v56;
  v38 = v21;
  *(_DWORD *)v39 = v44[0];
  *(_DWORD *)&v39[3] = *(_DWORD *)((char *)v44 + 3);
  v42 = v24;
  v41 = v23;
  if ( v21 == 2 )
  {
    *(_QWORD *)&v37 = 0;
    *((_QWORD *)&v37 + 1) = 0xA0000000FLL;
    v38 = 0;
  }
  if ( (_BYTE)v24 == 2 )
    v42 = 1;
  nullsub_1(v24);
  v25 = sub_140001650(128, 1);
  if ( !v25 )
    sub_141938D2B(1, 128);
  *(_QWORD *)&v57 = 128;
  *((_QWORD *)&v57 + 1) = v25;
  v58 = 0;
  *(_QWORD *)&v45 = &v57;
  *((_QWORD *)&v45 + 1) = asc_1419D4588;
  v46 = 2;
  v47 = 0;
  LOBYTE(v48) = 0;
  v26 = sub_1401A6600(&v33, &v45);
  if ( v26 )
  {
    if ( (_QWORD)v57 )
      sub_140001660(*((_QWORD *)&v57 + 1), v57, 1);
  }
  else
  {
    v26 = *((_QWORD *)&v57 + 1);
    if ( (_QWORD)v57 != -1 )
    {
      v59 = v57;
      v27 = a2[37];
      v28 = a2[38];
      v43 = *((_QWORD *)&v57 + 1);
      if ( (sub_140222E10(v27, v28, *((_QWORD *)&v57 + 1), v58) & 1) != 0 )
      {
        *(_QWORD *)&v56 = v29;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v57 = &v56;
          *((_QWORD *)&v57 + 1) = sub_1416BB0B0;
          v50 = 2;
          v51 = aCodexmateLibCo_21;
          v52 = 31;
          v54 = &unk_1419D9E16;
          v55 = &v57;
          *(_QWORD *)&v45 = 0;
          *((_QWORD *)&v45 + 1) = aCodexmateLibCo_21;
          v46 = 31;
          v47 = 0;
          v48 = aSrcCoreReposit;
          v49 = 22;
          v53 = 0x9EB00000001LL;
          sub_1414D53A0(&v60, &v45);
          v29 = v56;
        }
        *a1 = 2;
        a1[1] = v29;
      }
      else
      {
        sub_1401BD710(v29, v29);
        *a1 = -1;
      }
      if ( v59 )
        sub_140001660(v43, v59, 1);
      return sub_140033D80(&v33);
    }
  }
  *(_QWORD *)&v56 = v26;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v57 = &v56;
    *((_QWORD *)&v57 + 1) = sub_14163CE40;
    v50 = 2;
    v51 = aCodexmateLibCo_21;
    v52 = 31;
    v54 = &unk_1419D9E43;
    v55 = &v57;
    *(_QWORD *)&v45 = 0;
    *((_QWORD *)&v45 + 1) = aCodexmateLibCo_21;
    v46 = 31;
    v47 = 0;
    v48 = aSrcCoreReposit;
    v49 = 22;
    v53 = 0x9E600000001LL;
    sub_1414D53A0(&v60, &v45);
    v26 = v56;
  }
  *a1 = 3;
  a1[1] = v26;
  return sub_140033D80(&v33);
}
