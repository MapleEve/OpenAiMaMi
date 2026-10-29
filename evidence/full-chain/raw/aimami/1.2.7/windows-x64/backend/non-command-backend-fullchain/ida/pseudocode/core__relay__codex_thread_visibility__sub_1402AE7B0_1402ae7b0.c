// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402ae7b0 | name sub_1402AE7B0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1402AE7B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]
  unsigned __int64 v20; // [rsp+70h] [rbp-10h]
  __int128 v21; // [rsp+78h] [rbp-8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+8h]
  __int64 v23; // [rsp+90h] [rbp+10h]
  __int64 v24; // [rsp+98h] [rbp+18h]
  _QWORD *v25; // [rsp+A0h] [rbp+20h]
  __int64 v26; // [rsp+A8h] [rbp+28h]
  __int64 v27; // [rsp+B0h] [rbp+30h]

  v27 = -2;
  v3 = *a1;
  v4 = a1[1];
  v25 = *(_QWORD **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v3 != v4 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = a1[2];
    v20 = (unsigned __int64)(v4 - v3) >> 5;
    v8 = 0;
    do
    {
      v23 = v5;
      v9 = *(_QWORD *)(v3 + 32 * v8);
      v10 = *(_QWORD *)(v7 + 16);
      if ( v9 >= v10 )
        sub_1419390C3(v9, v10, &off_1419E64F8);
      v11 = *(_QWORD *)(v7 + 8) + 80 * v9;
      sub_1416AC440(&v18, v11);
      if ( *(_QWORD *)(v11 + 56) == -1 )
      {
        v26 = -1;
      }
      else
      {
        sub_1416AC440(&v21, v11 + 56);
        v24 = *((_QWORD *)&v21 + 1);
        v26 = v21;
        v2 = v22;
      }
      sub_1416AC440(&v21, v3 + 32 * v8 + 8);
      v12 = v18;
      v16 = v21;
      v17 = v22;
      v13 = v23;
      v14 = 9 * v23;
      *(_QWORD *)(v6 + 8 * v14 + 16) = v19;
      *(_OWORD *)(v6 + 8 * v14) = v12;
      *(_QWORD *)(v6 + 8 * v14 + 24) = v26;
      *(_QWORD *)(v6 + 8 * v14 + 32) = v24;
      *(_QWORD *)(v6 + 8 * v14 + 40) = v2;
      *(_OWORD *)(v6 + 8 * v14 + 48) = v16;
      *(_QWORD *)(v6 + 8 * v14 + 64) = v17;
      v5 = v13 + 1;
      ++v8;
    }
    while ( v8 != v20 );
  }
  result = v25;
  *v25 = v5;
  return result;
}
