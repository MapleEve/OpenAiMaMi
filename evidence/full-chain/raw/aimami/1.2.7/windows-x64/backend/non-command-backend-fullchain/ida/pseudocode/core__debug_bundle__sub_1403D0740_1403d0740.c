// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x1403d0740 | name sub_1403D0740
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1403D0740(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  _QWORD *v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]
  __int128 v26; // [rsp+80h] [rbp+0h]
  __int128 v27; // [rsp+90h] [rbp+10h]
  __int128 v28; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v29; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h]
  __int64 v31; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v32; // [rsp+D0h] [rbp+50h]
  __int128 v33; // [rsp+D8h] [rbp+58h]
  __int128 v34; // [rsp+E8h] [rbp+68h]
  __int128 v35; // [rsp+F8h] [rbp+78h]
  _QWORD *v36; // [rsp+108h] [rbp+88h]
  __int128 v37; // [rsp+110h] [rbp+90h] BYREF
  __int64 v38; // [rsp+128h] [rbp+A8h]
  _QWORD *v39; // [rsp+130h] [rbp+B0h]
  char v40; // [rsp+13Fh] [rbp+BFh]
  __int64 v41; // [rsp+140h] [rbp+C0h]

  v41 = -2;
  v24 = a1;
  *(_QWORD *)&v37 = a2;
  *((_QWORD *)&v37 + 1) = a3;
  while ( 1 )
  {
    v40 = 1;
    sub_1403E81B0(&v19, &v37);
    v4 = v19;
    if ( v19 == -1 )
      break;
    v5 = v20;
    v35 = v23;
    v34 = v22;
    v33 = v21;
    v31 = v19;
    v32 = v20;
    v6 = *((_QWORD *)&v21 + 1);
    v3 = v21;
    v26 = v22;
    v27 = v23;
LABEL_7:
    v35 = v27;
    v34 = v26;
    v31 = v4;
    v32 = v5;
    *(_QWORD *)&v33 = v3;
    *((_QWORD *)&v33 + 1) = v6;
    if ( v4 == -1 )
    {
      v38 = v3;
      if ( v5 != (_QWORD *)-1LL )
      {
        v39 = v5;
        nullsub_1(v5);
        v7 = (_QWORD *)sub_140001650(96, 8);
        if ( !v7 )
          sub_141938D2B(8, 96);
        *v7 = v39;
        v7[1] = v38;
        v7[2] = v6;
        *(_QWORD *)&v29 = 4;
        v39 = v7;
        *((_QWORD *)&v29 + 1) = v7;
        v30 = 1;
        v28 = v37;
        v38 = 1;
        while ( 1 )
        {
          sub_1403E81B0(&v19, &v28);
          v9 = v19;
          if ( v19 == -1 )
          {
            if ( !*((_QWORD *)&v28 + 1)
              || (sub_14018E680(&v31, (char *)&v28 + 8, 1, &off_1419ED0F8, v17, v18),
                  v9 = v31,
                  v10 = v32,
                  v11 = *((_QWORD *)&v33 + 1),
                  v8 = v33,
                  v26 = v34,
                  v27 = v35,
                  v31 == -2) )
            {
              sub_1403895E0(&v28, v8);
              v15 = v24;
              v24[2] = v30;
              *(_OWORD *)v15 = v29;
              return v15;
            }
          }
          else
          {
            v10 = v20;
            v35 = v23;
            v34 = v22;
            v33 = v21;
            v31 = v19;
            v32 = v20;
            v11 = *((_QWORD *)&v21 + 1);
            v8 = v21;
            v26 = v22;
            v27 = v23;
          }
          v35 = v27;
          v34 = v26;
          v31 = v9;
          v32 = v10;
          *(_QWORD *)&v33 = v8;
          *((_QWORD *)&v33 + 1) = v11;
          if ( v9 == -1 )
          {
            if ( v10 != (_QWORD *)-1LL )
            {
              v25 = v8;
              v36 = v10;
              v12 = v38;
              if ( v38 == (_QWORD)v29 )
              {
                sub_14190D590((unsigned int)&v29, v38, 1, 8, 24);
                v39 = *((_QWORD **)&v29 + 1);
                v12 = v38;
              }
              v13 = 3 * v12;
              v14 = v39;
              v39[v13] = v36;
              v14[v13 + 1] = v25;
              v14[v13 + 2] = v11;
              v38 = v12 + 1;
              v30 = v12 + 1;
            }
          }
          else
          {
            sub_140BAA960(&v31);
          }
        }
      }
    }
    else
    {
      v40 = 1;
      sub_140BAA960(&v31);
    }
  }
  if ( *((_QWORD *)&v37 + 1) )
  {
    v40 = 1;
    sub_14018E680(&v31, (char *)&v37 + 8, 1, &off_1419ED0F8, v17, v18);
    v4 = v31;
    v5 = v32;
    v6 = *((_QWORD *)&v33 + 1);
    v3 = v33;
    v26 = v34;
    v27 = v35;
    if ( v31 != -2 )
      goto LABEL_7;
  }
  v15 = v24;
  *v24 = 0;
  v15[1] = 8;
  v15[2] = 0;
  sub_1403895E0(&v37, v3);
  return v15;
}
