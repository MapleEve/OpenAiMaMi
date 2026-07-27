// module: codexmate_lib/platform/paths
// addr: 0x140310210
// name: sub_140310210
// win 1.2.1 | module src/platform/paths.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_140310210(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[56]; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+80h] [rbp+0h]
  __int128 v20; // [rsp+90h] [rbp+10h]
  __int128 v21; // [rsp+A0h] [rbp+20h]
  __int64 *v22; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+38h]
  __int64 v24; // [rsp+C0h] [rbp+40h]
  __int128 v25; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h]
  __int128 v27; // [rsp+E0h] [rbp+60h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int64 v30; // [rsp+110h] [rbp+90h]
  __int64 v31; // [rsp+118h] [rbp+98h]
  __int128 v32; // [rsp+120h] [rbp+A0h] BYREF
  char v33; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD *v34; // [rsp+138h] [rbp+B8h]
  __int128 v35; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v36; // [rsp+150h] [rbp+D0h] BYREF
  char v37; // [rsp+15Fh] [rbp+DFh]
  __int64 v38; // [rsp+160h] [rbp+E0h]

  v38 = -2;
  v34 = a1;
  *(_QWORD *)&v32 = a2;
  *((_QWORD *)&v32 + 1) = a3;
  *(_QWORD *)&v35 = &v33;
  while ( 1 )
  {
    v37 = 1;
    sub_140324FC0(&v17, &v32);
    v3 = v17;
    if ( v17 == -1 )
      break;
    *(_OWORD *)&v16[40] = v21;
    *(_OWORD *)&v16[24] = v20;
    *(_OWORD *)&v16[8] = v19;
    v15 = v17;
    *(_QWORD *)v16 = v18;
    v27 = *(_OWORD *)v16;
    v28 = *(_OWORD *)&v16[16];
    v29 = *(_OWORD *)&v16[32];
    v30 = *((_QWORD *)&v21 + 1);
LABEL_6:
    *(_QWORD *)&v16[48] = v30;
    *(_OWORD *)&v16[32] = v29;
    *(_OWORD *)&v16[16] = v28;
    *(_OWORD *)v16 = v27;
    v15 = v3;
    v37 = 1;
    sub_14057C820(&v17, &v35, &v15);
    if ( v17 != -1 )
    {
      v36 = v17;
      v5 = v18;
      v6 = v19;
      nullsub_1(v4);
      v7 = (__int64 *)sub_140001650(96, 8);
      if ( !v7 )
      {
        v34 = v5;
        sub_1416C2D4B(8, 96);
      }
      v8 = v7;
      *v7 = v36;
      v7[1] = (__int64)v5;
      v7[2] = v6;
      *(_QWORD *)&v25 = 4;
      *((_QWORD *)&v25 + 1) = v7;
      v26 = 1;
      v35 = v32;
      v36 = 1;
LABEL_10:
      v22 = &v36;
      while ( 1 )
      {
        sub_140324FC0(&v17, &v35);
        v10 = v17;
        if ( v17 == -1 )
        {
          if ( !*((_QWORD *)&v35 + 1)
            || (sub_14042B0E0(&v15, (char *)&v35 + 8, 1),
                v10 = v15,
                v27 = *(_OWORD *)v16,
                v28 = *(_OWORD *)&v16[16],
                v29 = *(_OWORD *)&v16[32],
                v30 = *(_QWORD *)&v16[48],
                v15 == -2) )
          {
            sub_1402C2D60(&v35);
            v12 = v34;
            v34[2] = v26;
            *v12 = v25;
            return v12;
          }
        }
        else
        {
          *(_OWORD *)&v16[40] = v21;
          *(_OWORD *)&v16[24] = v20;
          *(_OWORD *)&v16[8] = v19;
          v15 = v17;
          *(_QWORD *)v16 = v18;
          v27 = *(_OWORD *)v16;
          v28 = *(_OWORD *)&v16[16];
          v29 = *(_OWORD *)&v16[32];
          v30 = *((_QWORD *)&v21 + 1);
        }
        *(_QWORD *)&v16[48] = v30;
        *(_OWORD *)&v16[32] = v29;
        *(_OWORD *)&v16[16] = v28;
        *(_OWORD *)v16 = v27;
        v15 = v10;
        sub_14057C820(&v17, &v22, &v15);
        if ( v17 != -1 )
        {
          v31 = v17;
          v24 = (__int64)v18;
          v23 = v19;
          v11 = v36;
          if ( v36 == (_QWORD)v25 )
          {
            sub_141688D30((unsigned int)&v25, v36, 1, 8, 24);
            v8 = *((__int64 **)&v25 + 1);
            v11 = v36;
          }
          v9 = 3 * v11;
          v8[v9] = v31;
          v8[v9 + 1] = v24;
          v8[v9 + 2] = v23;
          v36 = v11 + 1;
          v26 = v11 + 1;
          goto LABEL_10;
        }
      }
    }
  }
  if ( *((_QWORD *)&v32 + 1) )
  {
    v37 = 1;
    sub_14042B0E0(&v15, (char *)&v32 + 8, 1);
    v3 = v15;
    v27 = *(_OWORD *)v16;
    v28 = *(_OWORD *)&v16[16];
    v29 = *(_OWORD *)&v16[32];
    v30 = *(_QWORD *)&v16[48];
    if ( v15 != -2 )
      goto LABEL_6;
  }
  v14 = v34;
  *v34 = 0;
  v14[1] = 8;
  v14[2] = 0;
  sub_1402C2D60(&v32);
  return v14;
}