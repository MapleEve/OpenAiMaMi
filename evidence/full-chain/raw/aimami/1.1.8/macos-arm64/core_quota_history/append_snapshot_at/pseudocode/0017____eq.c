// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x1010cb2b0 depth=2
bool __fastcall _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f(
        __int64 a1,
        __int64 a2)
{
  const void *v2; // r14
  size_t v3; // r15
  const void *v4; // rbx
  __int64 v5; // r12
  char v6; // al
  __int64 v7; // rcx
  char v8; // cl
  __int64 v9; // r8
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r9
  __int16 v14; // si
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v24[7]; // [rsp+0h] [rbp-1E0h] BYREF
  _QWORD v25[7]; // [rsp+38h] [rbp-1A8h] BYREF
  _QWORD v26[7]; // [rsp+70h] [rbp-170h] BYREF
  _QWORD v27[2]; // [rsp+A8h] [rbp-138h] BYREF
  char v28; // [rsp+B8h] [rbp-128h]
  __int64 v29; // [rsp+B9h] [rbp-127h]
  __int64 v30; // [rsp+C1h] [rbp-11Fh]
  __int64 v31; // [rsp+C9h] [rbp-117h]
  _BYTE v32[15]; // [rsp+D1h] [rbp-10Fh]
  __int16 v33; // [rsp+E0h] [rbp-100h]
  char v34; // [rsp+E2h] [rbp-FEh]
  _QWORD v35[7]; // [rsp+E8h] [rbp-F8h] BYREF
  _QWORD v36[2]; // [rsp+120h] [rbp-C0h] BYREF
  char v37; // [rsp+130h] [rbp-B0h]
  __int64 v38; // [rsp+131h] [rbp-AFh]
  __int64 v39; // [rsp+139h] [rbp-A7h]
  __int64 v40; // [rsp+141h] [rbp-9Fh]
  _BYTE v41[15]; // [rsp+149h] [rbp-97h]
  char v42; // [rsp+158h] [rbp-88h]
  char v43; // [rsp+159h] [rbp-87h]
  char v44; // [rsp+15Ah] [rbp-86h]
  __int64 v45; // [rsp+160h] [rbp-80h]
  __int64 v46; // [rsp+168h] [rbp-78h]
  __int64 v47; // [rsp+170h] [rbp-70h]
  __int64 v48; // [rsp+178h] [rbp-68h]
  _BYTE v49[15]; // [rsp+180h] [rbp-60h]
  __int64 v50; // [rsp+190h] [rbp-50h]
  __int64 v51; // [rsp+198h] [rbp-48h]
  __int64 v52; // [rsp+1A0h] [rbp-40h]
  _BYTE v53[15]; // [rsp+1A8h] [rbp-38h]

  v2 = *(const void **)a1; /*0x1010cb2c4*/
  v3 = *(_QWORD *)(a1 + 8); /*0x1010cb2c7*/
  v4 = *(const void **)a2; /*0x1010cb2cb*/
  v5 = *(_QWORD *)(a2 + 8); /*0x1010cb2ce*/
  if ( v3 == v5 && *(_BYTE *)(a1 + 56) == *(_BYTE *)(a2 + 56) && *(_BYTE *)(a1 + 57) == 2 && *(_BYTE *)(a2 + 57) == 2 ) /*0x1010cb2ea*/
  {
    v45 = a1; /*0x1010cb2ec*/
    if ( !memcmp(v2, v4, v3) ) /*0x1010cb30a*/
      return 1; /*0x1010cb5a4*/
  }
  v6 = *(_BYTE *)(a1 + 16); /*0x1010cb310*/
  if ( v6 != 6 ) /*0x1010cb316*/
  {
    *(_QWORD *)&v53[7] = *(_QWORD *)(a1 + 48); /*0x1010cb31c*/
    *(_QWORD *)v53 = *(_QWORD *)(a1 + 41); /*0x1010cb324*/
    v52 = *(_QWORD *)(a1 + 33); /*0x1010cb32c*/
    v7 = *(_QWORD *)(a1 + 17); /*0x1010cb330*/
    v51 = *(_QWORD *)(a1 + 25); /*0x1010cb338*/
    v50 = v7; /*0x1010cb33c*/
  }
  v8 = *(_BYTE *)(a1 + 58); /*0x1010cb340*/
  v9 = *(unsigned __int8 *)(a1 + 56); /*0x1010cb344*/
  v10 = *(_BYTE *)(a1 + 57); /*0x1010cb349*/
  v11 = *(unsigned __int8 *)(a2 + 16); /*0x1010cb34d*/
  if ( (_BYTE)v11 != 6 ) /*0x1010cb354*/
  {
    *(_QWORD *)&v49[7] = *(_QWORD *)(a2 + 48); /*0x1010cb35a*/
    *(_QWORD *)v49 = *(_QWORD *)(a2 + 41); /*0x1010cb362*/
    v48 = *(_QWORD *)(a2 + 33); /*0x1010cb36a*/
    v12 = *(_QWORD *)(a2 + 17); /*0x1010cb36e*/
    v47 = *(_QWORD *)(a2 + 25); /*0x1010cb376*/
    v46 = v12; /*0x1010cb37a*/
  }
  v13 = *(unsigned __int8 *)(a2 + 58); /*0x1010cb37e*/
  v14 = *(_WORD *)(a2 + 56); /*0x1010cb383*/
  v36[0] = v2; /*0x1010cb387*/
  v36[1] = v3; /*0x1010cb38e*/
  v37 = v6; /*0x1010cb395*/
  v38 = v50; /*0x1010cb3a3*/
  v39 = v51; /*0x1010cb3aa*/
  v40 = v52; /*0x1010cb3b5*/
  *(_QWORD *)v41 = *(_QWORD *)v53; /*0x1010cb3c0*/
  *(_QWORD *)&v41[7] = *(_QWORD *)&v53[7]; /*0x1010cb3cb*/
  v42 = v9; /*0x1010cb3d2*/
  v43 = v10; /*0x1010cb3d9*/
  v44 = v8; /*0x1010cb3e0*/
  v27[0] = v4; /*0x1010cb3e6*/
  v27[1] = v5; /*0x1010cb3ed*/
  v28 = v11; /*0x1010cb3f4*/
  v29 = v46; /*0x1010cb402*/
  v30 = v47; /*0x1010cb409*/
  v31 = v48; /*0x1010cb414*/
  *(_QWORD *)v32 = *(_QWORD *)v49; /*0x1010cb41f*/
  *(_QWORD *)&v32[7] = *(_QWORD *)&v49[7]; /*0x1010cb42a*/
  v33 = v14; /*0x1010cb431*/
  v34 = v13; /*0x1010cb438*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010cb44d*/
    v35,
    v36,
    v11,
    v47,
    v9,
    v13);
  if ( LOBYTE(v35[0]) == 10 ) /*0x1010cb459*/
  {
LABEL_14:
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010cb581*/
      v24,
      v27,
      v15,
      v16,
      v17,
      v18);
    return LOBYTE(v24[0]) == 10; /*0x1010cb59b*/
  }
  else
  {
    while ( 1 ) /*0x1010cb496*/
    {
      _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010cb496*/
        v26,
        v27,
        v15,
        v16,
        v17,
        v18);
      if ( LOBYTE(v26[0]) == 10 ) /*0x1010cb4a2*/
        return 0; /*0x1010cb5a0*/
      v24[6] = v35[6]; /*0x1010cb4af*/
      v24[5] = v35[5]; /*0x1010cb4bd*/
      v24[4] = v35[4]; /*0x1010cb4cb*/
      v24[3] = v35[3]; /*0x1010cb4d9*/
      v24[2] = v35[2]; /*0x1010cb4e7*/
      v24[1] = v35[1]; /*0x1010cb4fc*/
      v24[0] = v35[0]; /*0x1010cb503*/
      v25[6] = v26[6]; /*0x1010cb511*/
      v25[5] = v26[5]; /*0x1010cb51c*/
      v25[4] = v26[4]; /*0x1010cb527*/
      v25[3] = v26[3]; /*0x1010cb532*/
      v25[2] = v26[2]; /*0x1010cb53d*/
      v25[1] = v26[1]; /*0x1010cb54f*/
      v25[0] = v26[0]; /*0x1010cb553*/
      if ( !(unsigned __int8)_$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd44fa1bdc0e368f2( /*0x1010cb55c*/
                               v24,
                               v25) )
        return 0; /*0x1010cb5a0*/
      _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x1010cb56f*/
        v35,
        v36,
        v19,
        v20,
        v21,
        v22);
      if ( LOBYTE(v35[0]) == 10 ) /*0x1010cb57b*/
        goto LABEL_14; /*0x1010cb57b*/
    }
  }
}