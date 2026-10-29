// win 1.2.7 | module src/core/repository.rs | ea 0x1401c7990 | name sub_1401C7990
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401C7990(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 i; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 result; // rax
  __int128 v24; // [rsp+30h] [rbp-50h] BYREF
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h]
  __int128 v29; // [rsp+70h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v31)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  _QWORD *v32; // [rsp+C8h] [rbp+48h]
  __int64 v33; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v35; // [rsp+E0h] [rbp+60h]
  __int64 v36; // [rsp+E8h] [rbp+68h]
  __int64 v37; // [rsp+F0h] [rbp+70h]

  v37 = -2;
  v32 = a1;
  v34 = 0;
  v35 = 8;
  v36 = 0;
  v3 = *(_QWORD *)(a2 + 40);
  for ( i = v3 + (*(_QWORD *)(a2 + 48) << 6); v3 != i; i -= 64 )
  {
    v7 = i;
    sub_141695A00(&v29, *(_QWORD *)(i - 24), *(_QWORD *)(i - 16));
    if ( (_DWORD)v29 == 2 )
    {
      if ( (BYTE8(v29) & 3u) - 2 >= 2 && (BYTE8(v29) & 3) != 0 )
      {
        --*((_QWORD *)&v29 + 1);
        LOBYTE(v29) = 3;
        sub_1416BCB00((char *)&v29 + 8);
      }
    }
    else
    {
      sub_141695A00(&v29, *(_QWORD *)(v7 - 56), *(_QWORD *)(v7 - 48));
      if ( (_DWORD)v29 == 2 )
      {
        if ( (BYTE8(v29) & 3u) - 2 >= 2 && (BYTE8(v29) & 3) != 0 )
        {
          --*((_QWORD *)&v29 + 1);
          LOBYTE(v29) = 3;
          sub_1416BCB00((char *)&v29 + 8);
        }
        v8 = sub_141695830(*(_QWORD *)(v7 - 24), *(_QWORD *)(v7 - 16), *(_QWORD *)(v7 - 56), *(_QWORD *)(v7 - 48));
        if ( v8 )
        {
          v33 = v8;
          v24 = *(_OWORD *)(v7 - 56);
          *(_QWORD *)&v29 = &v24;
          *((_QWORD *)&v29 + 1) = sub_14169F630;
          v30 = &v33;
          v31 = sub_1416BB0B0;
          sub_1416ABFD0(&v25, &unk_1419D98B4, &v29);
          v9 = v36;
          if ( v36 == v34 )
            sub_14190FDC0(&v34);
          v10 = v35;
          v11 = 3 * v9;
          *(_QWORD *)(v35 + 8 * v11 + 16) = v26;
          *(_OWORD *)(v10 + 8 * v11) = v25;
          v36 = v9 + 1;
          if ( (unsigned int)(v33 & 3) - 2 >= 2 && (v33 & 3) != 0 )
          {
            *((_QWORD *)&v29 + 1) = v33 - 1;
            LOBYTE(v29) = 3;
            sub_1416BCB00((char *)&v29 + 8);
          }
        }
      }
      else
      {
        v24 = *(_OWORD *)(v7 - 56);
        *(_QWORD *)&v29 = &v24;
        *((_QWORD *)&v29 + 1) = sub_14169F630;
        sub_1416ABFD0(&v27, &unk_1419D98C3, &v29);
        v12 = v36;
        if ( v36 == v34 )
          sub_14190FDC0(&v34);
        v5 = v35;
        v6 = 3 * v12;
        *(_QWORD *)(v35 + 8 * v6 + 16) = v28;
        *(_OWORD *)(v5 + 8 * v6) = v27;
        v36 = v12 + 1;
      }
    }
  }
  *(_BYTE *)(a2 + 56) = 0;
  v13 = *(_QWORD *)(a2 + 8);
  v14 = *(_QWORD *)(a2 + 16);
  v15 = sub_141695010(v13, v14);
  if ( v15 && (unsigned int)(v15 & 3) - 2 >= 2 && (v15 & 3) != 0 )
  {
    *((_QWORD *)&v29 + 1) = v15 - 1;
    LOBYTE(v29) = 3;
    sub_1416BCB00((char *)&v29 + 8);
  }
  v16 = sub_141682A00(v13, v14);
  if ( v16 )
  {
    v18 = sub_141695010(v16, v17);
    if ( v18 )
    {
      if ( (unsigned int)(v18 & 3) - 2 >= 2 && (v18 & 3) != 0 )
      {
        *((_QWORD *)&v29 + 1) = v18 - 1;
        LOBYTE(v29) = 3;
        sub_1416BCB00((char *)&v29 + 8);
      }
    }
  }
  if ( v36 )
  {
    sub_140D1EE10((unsigned int)&v29, v35, v36, (unsigned int)&unk_1419D98E5, 3);
    v19 = v32;
    v32[3] = v30;
    *(_OWORD *)(v19 + 1) = v29;
    v20 = v36;
    *v19 = 10;
    if ( v20 )
    {
      v21 = (_QWORD *)(v35 + 8);
      do
      {
        v22 = *(v21 - 1);
        if ( v22 )
          sub_140001660(*v21, v22, 1);
        v21 += 3;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    *v32 = -1;
  }
  result = v34;
  if ( v34 )
    return sub_140001660(v35, 24 * v34, 8);
  return result;
}
