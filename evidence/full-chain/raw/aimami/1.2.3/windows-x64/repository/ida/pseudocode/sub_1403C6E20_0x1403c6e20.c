// module: codexmate_lib/core/repository
// addr: 0x1403c6e20
// name: sub_1403C6E20
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C6E20(_QWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  _BYTE *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 i; // r13
  __int64 v19; // rcx
  __int64 result; // rax
  _QWORD v21[4]; // [rsp+28h] [rbp-58h] BYREF
  char v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp-8h] BYREF
  _BYTE *v29; // [rsp+80h] [rbp+0h]
  __int64 v30; // [rsp+88h] [rbp+8h]
  __int16 v31; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+20h]

  v33 = -2;
  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 24);
  sub_14032DA10(&v23, a2);
  v26 = v4;
  v6 = 3;
  if ( v3 >= 4 )
    v6 = v3;
  v27 = v6;
  nullsub_1(v5);
  v7 = (_BYTE *)sub_140001650(128, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 128);
  v28 = 128;
  v29 = v7;
  v21[0] = &v28;
  v21[1] = asc_141749558;
  v21[2] = 2;
  v21[3] = 1;
  v22 = 0;
  *v7 = 123;
  v30 = 1;
  v31 = 256;
  v32 = v21;
  v8 = sub_1404563F0(&v31, aSchemaversion_0, 13, &v27);
  if ( v8 )
    goto LABEL_8;
  if ( (_BYTE)v31 )
    goto LABEL_6;
  v8 = sub_140456E50(&v31, aUpdatedat_0, 9, &v26);
  if ( v8 )
    goto LABEL_8;
  if ( (_BYTE)v31 )
  {
LABEL_6:
    v8 = sub_1416BF0E0();
    goto LABEL_8;
  }
  v8 = sub_14044D710(&v31, aItems_0, 5, &v23);
  if ( v8 )
  {
LABEL_8:
    if ( v28 )
      sub_140001660(v29, v28, 1);
    goto LABEL_10;
  }
  if ( (v31 & 1) == 0 && HIBYTE(v31) )
  {
    v12 = v32;
    v13 = (_QWORD *)*v32;
    v14 = v32[3] - 1LL;
    v32[3] = v14;
    if ( *((_BYTE *)v12 + 32) == 1 )
    {
      sub_140301CD0(v13, asc_14174C720, 1);
      if ( v14 )
      {
        v15 = v12[1];
        v16 = v12[2];
        v17 = v13[2];
        for ( i = 0; i != v14; ++i )
        {
          if ( v16 > *v13 - v17 )
          {
            sub_141688D30((_DWORD)v13, v17, v16, 1, 1);
            v17 = v13[2];
          }
          else if ( !v16 )
          {
            goto LABEL_24;
          }
          sub_141684120(v17 + v13[1], v15, v16);
LABEL_24:
          v17 += v16;
          v13[2] = v17;
        }
      }
    }
    sub_140301CD0(v13, asc_14174C721, 1);
  }
  v8 = (__int64)v29;
  if ( v28 != -1 )
  {
    v19 = v30;
    a1[1] = v28;
    a1[2] = v8;
    a1[3] = v19;
    *a1 = -1;
    sub_140334CA0((__int64)&v23);
    goto LABEL_31;
  }
LABEL_10:
  *a1 = 3;
  a1[1] = v8;
  v9 = v25;
  if ( v25 )
  {
    v10 = (_QWORD *)(v24 + 128);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        sub_140001660(*v10, v11, 1);
      v10 += 20;
      --v9;
    }
    while ( v9 );
  }
LABEL_31:
  result = v23;
  if ( v23 )
    return sub_140001660(v24, 160 * v23, 8);
  return result;
}