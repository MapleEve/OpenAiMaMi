// win 1.1.8 delete_sessions node va=0x140026410 depth=1
// sub_140026410
__int64 __fastcall sub_140026410(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  __int64 *v5; // r14
  char v6; // al
  __int128 v7; // kr00_16
  __int8 v8; // r15
  char *v9; // r12
  char v10; // al
  int v11; // eax
  int v12; // eax
  _BYTE *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rbx
  _WORD *v16; // rax
  char *v17; // r15
  _WORD *v18; // r12
  _DWORD *v19; // rax
  __int128 v20; // xmm0
  char v21; // al
  _QWORD *v22; // r14
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdi
  char *v26; // rdi
  char v27; // al
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int128 v32; // [rsp+40h] [rbp-40h]
  __m256i v33; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+80h] [rbp+0h]
  __int128 v35; // [rsp+90h] [rbp+10h]
  __int128 v36; // [rsp+A0h] [rbp+20h]
  __int128 v37; // [rsp+B0h] [rbp+30h]
  __m256i v38; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v39; // [rsp+E8h] [rbp+68h]
  __int128 v40; // [rsp+F8h] [rbp+78h]
  __int128 v41; // [rsp+108h] [rbp+88h]
  __int128 v42; // [rsp+118h] [rbp+98h]
  _WORD *v43; // [rsp+128h] [rbp+A8h]
  _QWORD v44[3]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v45; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v46; // [rsp+158h] [rbp+D8h]
  _QWORD *v47; // [rsp+160h] [rbp+E0h]
  PVOID Address; // [rsp+168h] [rbp+E8h]
  int v49; // [rsp+170h] [rbp+F0h]
  char v50; // [rsp+177h] [rbp+F7h] BYREF
  __int64 v51; // [rsp+178h] [rbp+F8h]

  v51 = -2; /*0x140026429*/
  v47 = a3; /*0x140026434*/
  if ( _InterlockedCompareExchange8(a2, 1, 0) ) /*0x140026445*/
    sub_1412ABCB0(a2); /*0x140026552*/
  v5 = off_141963EA8; /*0x14002644f*/
  if ( 2 * *off_141963EA8 ) /*0x140026459*/
  {
    v12 = sub_1412AC970(); /*0x14002655d*/
    LOBYTE(v12) = v12 ^ 1; /*0x140026563*/
    v49 = v12; /*0x140026565*/
    LOBYTE(v12) = a2[1]; /*0x14002656b*/
    Address = a2; /*0x140026571*/
    if ( (_BYTE)v12 ) /*0x140026578*/
      goto LABEL_5; /*0x140026578*/
  }
  else
  {
    v49 = 0; /*0x140026465*/
    v6 = a2[1]; /*0x14002646f*/
    Address = a2; /*0x140026475*/
    if ( v6 ) /*0x14002647c*/
    {
LABEL_5:
      v38.m256i_i64[0] = 0; /*0x140026482*/
      *(_OWORD *)&v38.m256i_u64[1] = 1u; /*0x14002648a*/
      v33.m256i_i64[2] = 1610612768; /*0x14002649a*/
      v33.m256i_i64[0] = (__int64)&v38; /*0x1400264a6*/
      v33.m256i_i64[1] = (__int64)&off_141314DA0; /*0x1400264b1*/
      if ( (unsigned __int8)sub_14109EE30(aPoisonedLockAn, 41, &v33) ) /*0x1400264c5*/
        sub_1412AD780( /*0x14002686c*/
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v50,
          (unsigned int)&unk_141314FC8,
          (__int64)&off_141314E58);
      v7 = *(_OWORD *)v38.m256i_i8; /*0x1400264d7*/
      v8 = v38.m256i_i8[16]; /*0x1400264db*/
      LODWORD(v44[0]) = *(__int32 *)((char *)&v38.m256i_i32[4] + 1); /*0x1400264e3*/
      *(_DWORD *)((char *)v44 + 3) = v38.m256i_i32[5]; /*0x1400264ec*/
      v9 = (char *)Address; /*0x1400264f9*/
      if ( !(_BYTE)v49 && 2 * *v5 && !(unsigned __int8)sub_1412AC970() ) /*0x140026885*/
        v9[1] = 1; /*0x140026893*/
      v10 = *v9; /*0x140026513*/
      *v9 = 0; /*0x140026513*/
      if ( v10 == 2 ) /*0x140026519*/
        WakeByAddressSingle(v9); /*0x14002687a*/
      v11 = v44[0]; /*0x14002651f*/
      *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)v44 + 3); /*0x14002652b*/
      *(_DWORD *)(a1 + 25) = v11; /*0x14002652e*/
      *(_OWORD *)(a1 + 8) = v7; /*0x140026531*/
      *(_BYTE *)(a1 + 24) = v8; /*0x140026539*/
      *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x140026547*/
LABEL_29:
      v22 = v47; /*0x1400267d1*/
      v28 = v47[2]; /*0x1400267d8*/
      if ( v28 ) /*0x1400267df*/
      {
        v29 = (_QWORD *)(v47[1] + 8LL); /*0x1400267e5*/
        do /*0x1400267f7*/
        {
          v30 = *(v29 - 1); /*0x1400267f9*/
          if ( v30 ) /*0x140026800*/
            sub_140001370(*v29, v30, 1); /*0x14002680b*/
          v29 += 3; /*0x1400267f0*/
          --v28; /*0x1400267f4*/
        }
        while ( v28 ); /*0x1400267f7*/
      }
      goto LABEL_34; /*0x1400267f7*/
    }
  }
  v13 = a2 + 8; /*0x14002657e*/
  v14 = v47[1]; /*0x140026589*/
  v15 = v47[2]; /*0x14002658d*/
  sub_140843C30(&v38, v13, v14, v15); /*0x14002659b*/
  if ( v38.m256i_i32[0] != 10 ) /*0x1400265a5*/
  {
    v37 = v42; /*0x1400266dd*/
    v36 = v41; /*0x1400266e8*/
    v35 = v40; /*0x1400266fc*/
    v34 = v39; /*0x140026700*/
    v33 = v38; /*0x140026704*/
    *(_QWORD *)&v45 = 0; /*0x14002670c*/
    *((_QWORD *)&v45 + 1) = 1; /*0x140026717*/
    v46 = 0; /*0x140026722*/
    v44[2] = 1610612768; /*0x14002672d*/
    v44[0] = &v45; /*0x14002673f*/
    v44[1] = &off_141314DA0; /*0x14002674d*/
    if ( (unsigned __int8)sub_1400603E0(&v33, v44) ) /*0x14002675f*/
      sub_1412AD780( /*0x1400268c4*/
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v50,
        (unsigned int)&unk_141314FC8,
        (__int64)&off_141314E58);
    v32 = v45; /*0x140026774*/
    v25 = v46; /*0x140026778*/
    sub_140048640(&v38); /*0x140026783*/
    *(_OWORD *)(a1 + 8) = v32; /*0x140026791*/
    *(_QWORD *)(a1 + 24) = v25; /*0x140026795*/
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x1400267a3*/
    v26 = (char *)Address; /*0x1400267ad*/
    if ( !(_BYTE)v49 && 2 * *v5 && !(unsigned __int8)sub_1412AC970() ) /*0x140026900*/
      v26[1] = 1; /*0x14002690e*/
    v27 = *v26; /*0x1400267c7*/
    *v26 = 0; /*0x1400267c7*/
    if ( v27 == 2 ) /*0x1400267cb*/
      WakeByAddressSingle(v26); /*0x1400268dd*/
    goto LABEL_29; /*0x1400268dd*/
  }
  *(_OWORD *)v33.m256i_i8 = *(_OWORD *)&v38.m256i_u64[1]; /*0x1400265b7*/
  v33.m256i_i64[2] = v38.m256i_i64[3]; /*0x1400265bb*/
  v33.m256i_i32[6] = v38.m256i_i32[6]; /*0x1400265bf*/
  nullsub_1(); /*0x1400265c2*/
  v16 = (_WORD *)sub_140001360(2, 1); /*0x1400265d1*/
  v17 = (char *)Address; /*0x1400265d9*/
  if ( !v16 ) /*0x1400265e0*/
    sub_1412AD46B(1, 2); /*0x140026921*/
  v18 = v16; /*0x1400265e6*/
  *v16 = 27503; /*0x1400265e9*/
  nullsub_1(); /*0x1400265ee*/
  v19 = (_DWORD *)sub_140001360(7, 1); /*0x1400265fd*/
  if ( !v19 ) /*0x140026605*/
  {
    v43 = v18; /*0x140026929*/
    sub_1412AD46B(1, 7); /*0x14002693a*/
  }
  *(_DWORD *)((char *)v19 + 3) = 1936942435; /*0x14002660b*/
  *v19 = 1667462483; /*0x140026612*/
  v20 = *(_OWORD *)v33.m256i_i8; /*0x140026618*/
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v33.m256i_u64[2]; /*0x140026620*/
  *(_OWORD *)(a1 + 72) = v20; /*0x140026624*/
  *(_QWORD *)a1 = 2; /*0x140026628*/
  *(_QWORD *)(a1 + 8) = v18; /*0x14002662f*/
  *(_QWORD *)(a1 + 16) = 2; /*0x140026633*/
  *(_QWORD *)(a1 + 24) = 7; /*0x14002663b*/
  *(_QWORD *)(a1 + 32) = v19; /*0x140026643*/
  *(_QWORD *)(a1 + 40) = 7; /*0x140026647*/
  *(_QWORD *)(a1 + 48) = 0; /*0x14002664f*/
  *(_QWORD *)(a1 + 56) = 8; /*0x140026657*/
  *(_QWORD *)(a1 + 64) = 0; /*0x14002665f*/
  *(_DWORD *)(a1 + 104) = 1; /*0x140026667*/
  *(_BYTE *)(a1 + 108) = 1; /*0x14002666e*/
  if ( !(_BYTE)v49 && 2 * *v5 && !(unsigned __int8)sub_1412AC970() ) /*0x1400268e8*/
    v17[1] = 1; /*0x1400268f6*/
  v21 = *v17; /*0x14002668c*/
  *v17 = 0; /*0x14002668c*/
  if ( v21 == 2 ) /*0x140026691*/
    WakeByAddressSingle(v17); /*0x1400268cf*/
  v22 = v47; /*0x14002669a*/
  if ( v15 ) /*0x1400266a1*/
  {
    v23 = (_QWORD *)(v14 + 8); /*0x1400266a7*/
    do /*0x1400266b7*/
    {
      v24 = *(v23 - 1); /*0x1400266bd*/
      if ( v24 ) /*0x1400266c4*/
        sub_140001370(*v23, v24, 1); /*0x1400266cf*/
      v23 += 3; /*0x1400266b0*/
      --v15; /*0x1400266b4*/
    }
    while ( v15 ); /*0x1400266b7*/
  }
LABEL_34:
  if ( *v22 ) /*0x140026812*/
    sub_140001370(v22[1], 24LL * *v22, 8); /*0x14002682c*/
  return a1; /*0x140026834*/
}