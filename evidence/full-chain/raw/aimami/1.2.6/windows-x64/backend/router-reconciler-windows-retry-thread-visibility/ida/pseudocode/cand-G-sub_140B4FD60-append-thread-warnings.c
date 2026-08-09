__int64 __fastcall sub_140B4FD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int128 v29; // [rsp+78h] [rbp-8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+8h]
  __int128 v31; // [rsp+90h] [rbp+10h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+20h]
  _QWORD *v33; // [rsp+A8h] [rbp+28h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+B0h] [rbp+30h]
  __int64 v35; // [rsp+B8h] [rbp+38h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp+40h]
  __int64 v37; // [rsp+C8h] [rbp+48h]
  __int64 (__fastcall *v38)(); // [rsp+D0h] [rbp+50h]
  __int64 v39; // [rsp+D8h] [rbp+58h]
  __int64 (__fastcall *v40)(); // [rsp+E0h] [rbp+60h]
  __int128 v41; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v42; // [rsp+F8h] [rbp+78h]
  __int64 v43; // [rsp+100h] [rbp+80h]

  v43 = -2;
  v22[0] = a2;
  v22[1] = a3;
  *(_QWORD *)&v41 = 0;
  *((_QWORD *)&v41 + 1) = 8;
  v42 = 0;
  if ( *(_OWORD *)(a4 + 144) != 0 )
  {
    v33 = v22;
    v34 = sub_1402DDC10;
    v35 = a4 + 144;
    v36 = sub_141553F20;
    v37 = a4 + 152;
    v38 = sub_141553F20;
    sub_141543AF0(&v31, &unk_14186271F, &v33);
    v6 = v42;
    if ( v42 == (_QWORD)v41 )
      sub_14172D430(&v41);
    v7 = *((_QWORD *)&v41 + 1);
    v8 = 3 * v6;
    *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8 * v8 + 16) = v32;
    *(_OWORD *)(v7 + 8 * v8) = v31;
    v42 = v6 + 1;
  }
  if ( *(_QWORD *)(a4 + 256) )
  {
    v33 = v22;
    v34 = sub_1402DDC10;
    v35 = a4 + 256;
    v36 = sub_141553F20;
    v37 = a4 + 264;
    v38 = sub_141553F20;
    v39 = a4 + 272;
    v40 = sub_141553F20;
    sub_141543AF0(&v29, &unk_141862753, &v33);
    v9 = v42;
    if ( v42 == (_QWORD)v41 )
      sub_14172D430(&v41);
    v10 = *((_QWORD *)&v41 + 1);
    v11 = 3 * v9;
    *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8 * v11 + 16) = v30;
    *(_OWORD *)(v10 + 8 * v11) = v29;
    v42 = v9 + 1;
  }
  if ( *(_BYTE *)a4 && *(_QWORD *)(a4 + 16) )
  {
    v33 = v22;
    v34 = sub_1402DDC10;
    v35 = a4 + 16;
    v36 = sub_141553F20;
    sub_141543AF0(&v27, &unk_14186278C, &v33);
    v12 = v42;
    if ( v42 == (_QWORD)v41 )
      sub_14172D430(&v41);
    v13 = *((_QWORD *)&v41 + 1);
    v14 = 3 * v12;
    *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8 * v14 + 16) = v28;
    *(_OWORD *)(v13 + 8 * v14) = v27;
    v42 = v12 + 1;
  }
  if ( *(_QWORD *)(a4 + 288) )
  {
    v33 = v22;
    v34 = sub_1402DDC10;
    v35 = a4 + 288;
    v36 = sub_141553F20;
    sub_141543AF0(&v25, &unk_1418627B0, &v33);
    v15 = v42;
    if ( v42 == (_QWORD)v41 )
      sub_14172D430(&v41);
    v16 = *((_QWORD *)&v41 + 1);
    v17 = 3 * v15;
    *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8 * v17 + 16) = v26;
    *(_OWORD *)(v16 + 8 * v17) = v25;
    v42 = v15 + 1;
  }
  if ( *(_BYTE *)(a4 + 32) && *(_QWORD *)(a4 + 56) )
  {
    v33 = v22;
    v34 = sub_1402DDC10;
    v35 = a4 + 48;
    v36 = sub_141553F20;
    v37 = a4 + 56;
    v38 = sub_141553F20;
    sub_141543AF0(&v23, &unk_1418627D3, &v33);
    v18 = v42;
    if ( v42 == (_QWORD)v41 )
      sub_14172D430(&v41);
    v19 = *((_QWORD *)&v41 + 1);
    v20 = 3 * v18;
    *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8 * v20 + 16) = v24;
    *(_OWORD *)(v19 + 8 * v20) = v23;
    v42 = v18 + 1;
  }
  result = v42;
  *(_QWORD *)(a1 + 16) = v42;
  *(_OWORD *)a1 = v41;
  return result;
}
