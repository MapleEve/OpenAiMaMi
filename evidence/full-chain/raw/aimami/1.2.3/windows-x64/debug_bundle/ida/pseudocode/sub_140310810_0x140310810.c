// module: codexmate_lib/core/debug_bundle
// addr: 0x140310810
// name: sub_140310810
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140310810(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int128 v5; // kr00_16
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int128 v9; // kr20_16
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h]
  _QWORD *v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int128 v21; // [rsp+80h] [rbp+0h]
  __int128 v22; // [rsp+90h] [rbp+10h]
  __int128 v23; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v24; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h]
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v27; // [rsp+D0h] [rbp+50h]
  __int128 v28; // [rsp+D8h] [rbp+58h]
  __int128 v29; // [rsp+E8h] [rbp+68h]
  __int128 v30; // [rsp+F8h] [rbp+78h]
  _QWORD *v31; // [rsp+108h] [rbp+88h]
  __int128 v32; // [rsp+110h] [rbp+90h] BYREF
  __int64 v33; // [rsp+128h] [rbp+A8h]
  _QWORD *v34; // [rsp+130h] [rbp+B0h]
  char v35; // [rsp+13Fh] [rbp+BFh]
  __int64 v36; // [rsp+140h] [rbp+C0h]

  v36 = -2;
  v19 = a1;
  *(_QWORD *)&v32 = a2;
  *((_QWORD *)&v32 + 1) = a3;
  while ( 1 )
  {
    v35 = 1;
    sub_140324FC0(&v14, &v32);
    v3 = v14;
    if ( v14 == -1 )
      break;
    v4 = v15;
    v30 = v18;
    v29 = v17;
    v28 = v16;
    v26 = v14;
    v27 = v15;
    v5 = v16;
    v21 = v17;
    v22 = v18;
LABEL_7:
    v30 = v22;
    v29 = v21;
    v26 = v3;
    v27 = v4;
    v28 = v5;
    if ( v3 == -1 )
    {
      v33 = v5;
      if ( v4 != (_QWORD *)-1LL )
      {
        v34 = v4;
        nullsub_1(v4);
        v6 = (_QWORD *)sub_140001650(96, 8);
        if ( !v6 )
          sub_1416C2D4B(8, 96);
        *v6 = v34;
        v6[1] = v33;
        v6[2] = *((_QWORD *)&v5 + 1);
        *(_QWORD *)&v24 = 4;
        v34 = v6;
        *((_QWORD *)&v24 + 1) = v6;
        v25 = 1;
        v23 = v32;
        v33 = 1;
        while ( 1 )
        {
          sub_140324FC0(&v14, &v23);
          v7 = v14;
          if ( v14 == -1 )
          {
            if ( !*((_QWORD *)&v23 + 1)
              || (sub_14042B0E0(&v26, (char *)&v23 + 8, 1), v7 = v26,
                                                            v8 = v27,
                                                            v21 = v29,
                                                            v22 = v30,
                                                            v9 = v28,
                                                            v26 == -2) )
            {
              sub_1402C2D60(&v23);
              v12 = v19;
              v19[2] = v25;
              *(_OWORD *)v12 = v24;
              return v12;
            }
          }
          else
          {
            v8 = v15;
            v30 = v18;
            v29 = v17;
            v28 = v16;
            v26 = v14;
            v27 = v15;
            v9 = v16;
            v21 = v17;
            v22 = v18;
          }
          v30 = v22;
          v29 = v21;
          v26 = v7;
          v27 = v8;
          v28 = v9;
          if ( v7 == -1 )
          {
            if ( v8 != (_QWORD *)-1LL )
            {
              v20 = v9;
              v31 = v8;
              if ( v33 == (_QWORD)v24 )
              {
                sub_141688D30((unsigned int)&v24, v33, 1, 8, 24);
                v34 = *((_QWORD **)&v24 + 1);
              }
              v10 = 3 * v9;
              v11 = v34;
              v34[v10] = v31;
              v11[v10 + 1] = v20;
              v11[v10 + 2] = *((_QWORD *)&v9 + 1);
              v33 = v9 + 1;
              v25 = v9 + 1;
            }
          }
          else
          {
            sub_1406CBAD0(&v26);
          }
        }
      }
    }
    else
    {
      v35 = 1;
      sub_1406CBAD0(&v26);
    }
  }
  if ( *((_QWORD *)&v32 + 1) )
  {
    v35 = 1;
    sub_14042B0E0(&v26, (char *)&v32 + 8, 1);
    v3 = v26;
    v4 = v27;
    v21 = v29;
    v22 = v30;
    v5 = v28;
    if ( v26 != -2 )
      goto LABEL_7;
  }
  v12 = v19;
  *v19 = 0;
  v12[1] = 8;
  v12[2] = 0;
  sub_1402C2D60(&v32);
  return v12;
}