// win 1.2.7 | module src/core/sessions.rs | ea 0x1402d2f70 | name sub_1402D2F70
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402D2F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int128 v13; // xmm6
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdi
  _QWORD v25[9]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+78h] [rbp-8h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int128 v30; // [rsp+A0h] [rbp+20h]
  __int128 v31; // [rsp+B0h] [rbp+30h]
  _QWORD v32[2]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v33[56]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v34; // [rsp+108h] [rbp+88h]
  __int64 v35; // [rsp+118h] [rbp+98h] BYREF
  __int64 v36; // [rsp+120h] [rbp+A0h]
  __int64 v37; // [rsp+128h] [rbp+A8h]
  __int128 v38; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v39; // [rsp+140h] [rbp+C0h]
  __int128 v40; // [rsp+150h] [rbp+D0h]
  __int128 v41; // [rsp+160h] [rbp+E0h]
  __int128 v42; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v43; // [rsp+180h] [rbp+100h]
  __int128 v44; // [rsp+190h] [rbp+110h]
  __int128 v45; // [rsp+1A0h] [rbp+120h]
  __int64 v46; // [rsp+1B8h] [rbp+138h]
  char v47; // [rsp+1C7h] [rbp+147h]
  __int64 v48; // [rsp+1C8h] [rbp+148h]

  v48 = -2;
  v32[0] = a3;
  v32[1] = a4;
  *(_QWORD *)&v42 = v32;
  *((_QWORD *)&v42 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v35, &unk_1419E8073, &v42);
  v46 = v36;
  sub_1402BA1E0(v33, a2, v36, v37);
  if ( *(_DWORD *)v33 == 1 )
  {
    v45 = v34;
    v44 = *(_OWORD *)&v33[40];
    v43 = *(_OWORD *)&v33[24];
    v42 = *(_OWORD *)&v33[8];
    *(_QWORD *)&v38 = v32;
    *((_QWORD *)&v38 + 1) = sub_140186EE0;
    *(_QWORD *)&v39 = &v42;
    *((_QWORD *)&v39 + 1) = sub_141404740;
    sub_1416ABFD0(&v26, &unk_1419E6004, &v38);
    v38 = v26;
    *(_QWORD *)&v39 = v27;
    result = sub_14029C280(&v42);
    v7 = v38;
    v8 = v39;
    v9 = v40;
    v28 = v38;
    v29 = v39;
    v30 = v40;
    v31 = v41;
    *(_OWORD *)(a1 + 56) = v41;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 10;
    if ( v35 )
      return sub_140001660(v46, v35, 1);
  }
  else
  {
    v28 = *(_OWORD *)&v33[8];
    v29 = *(_OWORD *)&v33[24];
    v30 = *(_OWORD *)&v33[40];
    v31 = v34;
    v42 = *(_OWORD *)&v33[8];
    v43 = *(_OWORD *)&v33[24];
    v44 = *(_OWORD *)&v33[40];
    v45 = v34;
    if ( v35 )
      sub_140001660(v46, v35, 1);
    v10 = sub_1417A9630(*((_QWORD *)&v45 + 1));
    v12 = v10;
    if ( v10 )
    {
      *(_OWORD *)v33 = 0x8000000000000013uLL;
      *(_QWORD *)&v33[16] = v10;
      v25[0] = v33;
      v25[1] = sub_141404740;
      sub_1416ABFD0(&v38, &unk_1419E6019, v25);
      v13 = v38;
      v14 = v39;
      sub_14029C280(v33);
      *(_QWORD *)a1 = 10;
      *(_OWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 24) = v14;
    }
    else
    {
      *(_QWORD *)&v38 = &v42;
      *((_QWORD *)&v38 + 1) = 0;
      v47 = 1;
      v15 = sub_14167F170(v11);
      if ( *(_BYTE *)(v15 + 16) == 1 )
      {
        v20 = *(_QWORD *)v15;
        v21 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        v47 = 1;
        v24 = v15;
        v20 = sub_141696260(v17, v16, v18, v19);
        v15 = v24;
        *(_QWORD *)v24 = v20;
        *(_QWORD *)(v24 + 8) = v21;
        *(_BYTE *)(v24 + 16) = 1;
      }
      *(_QWORD *)v15 = v20 + 1;
      *(_OWORD *)&v33[16] = *(&off_1419E4870 + 1);
      *(_OWORD *)v33 = off_1419E4870;
      *(_QWORD *)&v33[32] = v20;
      *(_QWORD *)&v33[40] = v21;
      sub_1402A4E10((__int64)&v42, v12, (__int64)v33);
      v22 = *(_OWORD *)v33;
      v23 = *(_OWORD *)&v33[16];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v33[32];
      *(_OWORD *)(a1 + 24) = v23;
      *(_OWORD *)(a1 + 8) = v22;
      *(_QWORD *)a1 = -1;
    }
    return sub_14029C410(&v42);
  }
  return result;
}
